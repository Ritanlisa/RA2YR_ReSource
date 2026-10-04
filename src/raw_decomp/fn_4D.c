// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x004D0180  DamageArea::CheckOccupancyEligibility  this=DamageArea  sig=csp ====
char __thiscall DamageArea::CheckOccupancyEligibility(DamageArea *this)
{
  _DWORD *v2; // esi
  int (__stdcall ***v3)(_DWORD, void *, int *); // ecx
  int v4; // eax
  int v5; // esi
  int v6; // edi
  int v8; // [esp+18h] [ebp-8h] BYREF
  int v9; // [esp+1Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)*((_DWORD *)this + 3); /*0x4d0187*/
  if ( v2 ) /*0x4d018c*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(*v2 + 44))(*((_DWORD *)this + 3)) == 2 ) /*0x4d0198*/
    {
      if ( (*(int (__stdcall **)(_DWORD *))(v2[432] + 32))(v2 + 432) ) /*0x4d01ab*/
        return 0; /*0x4d01b0*/
    }
    else
    {
      v2 = 0; /*0x4d019a*/
    }
  }
  if ( *((_BYTE *)this + 81) || !*((_BYTE *)this + 92) ) /*0x4d01c1*/
    return 1; /*0x4d01c6*/
  if ( !v2 || !*(_BYTE *)(v2[433] + 3595) ) /*0x4d01d6*/
  {
    v3 = (int (__stdcall ***)(_DWORD, void *, int *))*((_DWORD *)this + 3); /*0x4d01e4*/
    v4 = 0; /*0x4d01e7*/
    v8 = 0; /*0x4d01eb*/
    if ( v3 ) /*0x4d01ef*/
    {
      v5 = (**v3)(v3, &unk_822410, &v9); /*0x4d0204*/
      if ( v5 >= 0 ) /*0x4d0208*/
      {
        v6 = v9; /*0x4d021c*/
        Release3COM((ObjectClass *)&v8); /*0x4d0224*/
        v4 = v6; /*0x4d0229*/
        v8 = v6; /*0x4d022c*/
      }
      else
      {
        Release3COM((ObjectClass *)&v8); /*0x4d020e*/
        v4 = 0; /*0x4d0213*/
        v8 = 0; /*0x4d0215*/
      }
      if ( v5 < 0 && v5 != -2147467262 ) /*0x4d023a*/
        WinAPI::Wrapper(v5); /*0x4d023d*/
      if ( v4 ) /*0x4d0248*/
      {
        if ( !(*(int (__stdcall **)(int))(*(_DWORD *)v4 + 24))(v4) ) /*0x4d024d*/
        {
          if ( !v8 ) /*0x4d025a*/
            WinAPI::Wrapper(-2147467261); /*0x4d0261*/
          if ( !(*(int (__stdcall **)(int))(*(_DWORD *)v8 + 28))(v8) ) /*0x4d026d*/
          {
            v4 = v8; /*0x4d0274*/
            goto LABEL_24; /*0x4d0278*/
          }
        }
        v4 = v8; /*0x4d027a*/
      }
    }
    if ( !*(_DWORD *)(*((_DWORD *)this + 3) + 764) ) /*0x4d0281*/
    {
LABEL_24:
      if ( v4 ) /*0x4d028d*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x4d0292*/
      return 1; /*0x4d029c*/
    }
    if ( v4 ) /*0x4d029f*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x4d02a4*/
  }
  return 0; /*0x4d0295*/
}



// ==== 0x004D02B0  VoxelAnimClass::UpdateMatrix  this=VoxelAnimClass  sig=csp ====
char __thiscall VoxelAnimClass::UpdateMatrix(VoxelAnimClass *this)
{
  int v3; // eax
  int (__stdcall ***v4)(_DWORD, void *, int *); // eax
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h] BYREF

  if ( *(_DWORD *)&this->__pad_20[4] > Cell::GetGroundHeight(this->VoxelAnimClass_field_0x1C) + 120 ) /*0x4d02cc*/
    return 1; /*0x4d02d4*/
  v3 = *(_DWORD *)this->__pad_C; /*0x4d02d5*/
  if ( *(_DWORD *)(v3 + 692) && *(_DWORD *)(v3 + 764) ) /*0x4d02e2*/
    return 1; /*0x4d02f2*/
  v4 = *(int (__stdcall ****)(_DWORD, void *, int *))this->__pad_C; /*0x4d02f3*/
  v8 = 0; /*0x4d02f6*/
  if ( !v4 ) /*0x4d0300*/
    return 0; /*0x4d0300*/
  v5 = (**v4)(v4, &unk_822410, &v9); /*0x4d0311*/
  if ( v5 >= 0 ) /*0x4d0315*/
  {
    v7 = v9; /*0x4d0329*/
    Release3COM((ObjectClass *)&v8); /*0x4d0331*/
    v6 = v7; /*0x4d0336*/
    v8 = v7; /*0x4d0339*/
  }
  else
  {
    Release3COM((ObjectClass *)&v8); /*0x4d031b*/
    v6 = 0; /*0x4d0320*/
    v8 = 0; /*0x4d0322*/
  }
  if ( v5 < 0 && v5 != -2147467262 ) /*0x4d0347*/
    WinAPI::Wrapper(v5); /*0x4d034a*/
  if ( !v6 ) /*0x4d0355*/
    return 0; /*0x4d0355*/
  if ( !(*(int (__stdcall **)(int))(*(_DWORD *)v6 + 32))(v6) ) /*0x4d0363*/
  {
    if ( v8 ) /*0x4d0378*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x4d037d*/
    return 0; /*0x4d0380*/
  }
  if ( v8 ) /*0x4d0367*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x4d036c*/
  return 1; /*0x4d02d0*/
}



// ==== 0x004D0390  FlyLocomotionClass::StubReturn96  this=FlyLocomotionClass  sig=csp ====
int FlyLocomotionClass::StubReturn96(FlyLocomotionClass *this)
{
  return 96; /*0x4d0395*/
}



// ==== 0x004D03A0  FlyLocomotionClass::ProcessMove  this=FlyLocomotionClass  sig=csp ====
_DWORD *__thiscall FlyLocomotionClass::ProcessMove(FlyLocomotionClass *this, char a2)
{
  *(_DWORD *)this->LocomotionClass = &FlyLocomotionClass::`vftable'; /*0x4d03a3*/
  *(_DWORD *)&this->LocomotionClass[4] = &FlyLocomotionClass::`vftable'; /*0x4d03a9*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x4d03b0*/
  if ( (a2 & 1) != 0 ) /*0x4d03ba*/
    __3_YAXPAX_Z(this); /*0x4d03bd*/
  return this->LocomotionClass; /*0x4d03c7*/
}



// ==== 0x004D03D0  UnitClass::CompareCoordinateMagnitude  this=UnitClass  sig=csp ====
int __thiscall UnitClass::CompareCoordinateMagnitude(UnitClass *this, __int16 *a2)
{
  int result; // eax

  result = abs16((__int16)this->FootClass); /*0x4d03e7*/
  LOBYTE(result) = result >= abs16(*a2); /*0x4d03ef*/
  return result; /*0x4d03eb*/
}



// ==== 0x004D0400  JumpjetLocomotionClass::CheckWindowsErrorWrapper_0  this=JumpjetLocomotionClass  sig=csp ====
BOOL __thiscall JumpjetLocomotionClass::CheckWindowsErrorWrapper_0(JumpjetLocomotionClass *this, int a2)
{
  if ( a2 ) /*0x4d0409*/
    WinAPI::Wrapper(-2147467261); /*0x4d0410*/
  return this->LocomotionClass[0] == 0; /*0x4d041e*/
}



// ==== 0x004D0430  ObjectClass::Release3COM  this=ObjectClass  sig=csp ====
int __thiscall Release3COM(ObjectClass *this)
{
  int result; // eax

  result = (int)this->AbstractClass; /*0x4d0430*/
  if ( this->AbstractClass ) /*0x4d0430*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x4d0439*/
  return result; /*0x4d043c*/
}



// ==== 0x004D0440  ObjectVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall ObjectVector::Construct(ObjectVector *this, int a2, int a3)
{
  this->ObjectVector_field_0x04 = 0; /*0x4d044b*/
  this->ObjectVector_field_0x08 = a2; /*0x4d044e*/
  LOBYTE(this->ObjectVector_field_0x0C) = 1; /*0x4d0451*/
  BYTE1(this->ObjectVector_field_0x0C) = 0; /*0x4d0455*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ObjectClass *>::`vftable'; /*0x4d0458*/
  if ( a2 ) /*0x4d045e*/
  {
    if ( a3 ) /*0x4d0466*/
    {
      this->ObjectVector_field_0x04 = a3; /*0x4d0468*/
      return this->__pad_0; /*0x4d046e*/
    }
    this->ObjectVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x4d047d*/
    BYTE1(this->ObjectVector_field_0x0C) = 1; /*0x4d0480*/
  }
  return this->__pad_0; /*0x4d046d*/
}



// ==== 0x004D0490  ComPtr::ReleaseAndSet  this=ComPtr  sig=csp ====
int __thiscall ComPtr::ReleaseAndSet(ComPtr *this, _DWORD *a2)
{
  int v3; // edi
  _DWORD *v5; // ebx
  int v6; // eax

  if ( *a2 ) /*0x4d0498*/
  {
    v3 = (**(int (__stdcall ***)(_DWORD, void *, _DWORD **))*a2)(*a2, &unk_822410, &a2); /*0x4d04ad*/
    if ( v3 >= 0 ) /*0x4d04b1*/
    {
      v5 = a2; /*0x4d04cf*/
      if ( *(_DWORD *)this->__pad_0 ) /*0x4d04cc*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 8))(*(_DWORD *)this->__pad_0); /*0x4d04da*/
      *(_DWORD *)this->__pad_0 = v5; /*0x4d04dd*/
      return v3; /*0x4d04e0*/
    }
    else
    {
      if ( *(_DWORD *)this->__pad_0 ) /*0x4d04b3*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 8))(*(_DWORD *)this->__pad_0); /*0x4d04bc*/
      *(_DWORD *)this->__pad_0 = 0; /*0x4d04c1*/
      return v3; /*0x4d04bf*/
    }
  }
  else
  {
    v6 = *(_DWORD *)this->__pad_0; /*0x4d04e7*/
    if ( *(_DWORD *)this->__pad_0 ) /*0x4d04e7*/
    {
      *(_DWORD *)this->__pad_0 = 0; /*0x4d04ed*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x4d04f6*/
    }
    return -2147467262; /*0x4d04fe*/
  }
}



// ==== 0x004D0510  JumpjetLocomotionClass::GetInterface  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::_vt0(int a1, const void *a2, _DWORD *a3)
{
  return LocomotionClass::QueryInterface(a1 - 4, a2, a3);
}



// ==== 0x004D0520  JumpjetLocomotionClass::GetInterface2  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::_vt1(int a1)
{
  return COM::AddRef(a1 - 4);
}



// ==== 0x004D0530  JumpjetLocomotionClass::Stub2  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::_vt2(int a1)
{
  return COM::ReleaseRef((volatile LONG *)(a1 - 4));
}



// ==== 0x004D0540  sub_4D0540  this=-  sig=ida-proto ====
int sub_4D0540()
{
  dword_8B3CE0 = 0; /*0x4d0542*/
  dword_8B3CE4 = 0; /*0x4d0547*/
  dword_8B3CE8 = 0; /*0x4d054c*/
  dword_8B3CEC = 0; /*0x4d0551*/
  return 0; /*0x4d0556*/
}



// ==== 0x004D0560  sub_4D0560  this=-  sig=ida-proto ====
void sub_4D0560()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4d056c*/
  dbl_8B3CF8 = Math::Sqrt(v0 + v0); /*0x4d057e*/
}



// ==== 0x004D0590  sub_4D0590  this=-  sig=ida-proto ====
void sub_4D0590()
{
  dbl_8B3D60 = dbl_8B3CF8 / 60.0; /*0x4d059c*/
}



// ==== 0x004D05B0  sub_4D05B0  this=-  sig=ida-proto ====
void sub_4D05B0()
{
  dbl_8B3D48 = 1.0 / dbl_8B3D60; /*0x4d05bc*/
}



// ==== 0x004D05D0  sub_4D05D0  this=-  sig=ida-proto ====
void sub_4D05D0()
{
  dbl_8B3D40 = 0.0174532925199433 * 45.0; /*0x4d05dc*/
}



// ==== 0x004D05F0  sub_4D05F0  this=-  sig=ida-proto ====
void sub_4D05F0()
{
  dbl_8B3D00 = 0.0174532925199433 * 60.0; /*0x4d05fc*/
}



// ==== 0x004D0610  sub_4D0610  this=-  sig=ida-proto ====
void sub_4D0610()
{
  dbl_8B3CD8 = 0.0174532925199433 * 90.0; /*0x4d061c*/
}



// ==== 0x004D0630  sub_4D0630  this=-  sig=ida-proto ====
__int64 sub_4D0630()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8B3CD8 - dbl_8B3D00); /*0x4d0642*/
  result = Math::RoundToInt(v0 * dbl_8B3CF8 * 0.5); /*0x4d0656*/
  dword_8B3D68 = result; /*0x4d065b*/
  return result; /*0x4d0660*/
}



// ==== 0x004D0670  sub_4D0670  this=-  sig=ida-proto ====
void sub_4D0670()
{
  dbl_8B3D08 = Math::ArcTan((double)dword_8B3D68 * 0.00390625); /*0x4d0687*/
}



// ==== 0x004D06A0  sub_4D06A0  this=-  sig=ida-proto ====
void sub_4D06A0()
{
  dbl_8B3D38 = Math::ArcTan((double)(2 * dword_8B3D68) / dbl_8B3CF8); /*0x4d06c2*/
}



// ==== 0x004D06D0  sub_4D06D0  this=-  sig=ida-proto ====
__int64 sub_4D06D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8B3D68) + 0.5); /*0x4d06eb*/
  dword_8B3D5C = result; /*0x4d06f0*/
  return result; /*0x4d06f6*/
}



// ==== 0x004D0700  sub_4D0700  this=-  sig=ida-proto ====
int sub_4D0700()
{
  word_8B3CF0 = 0; /*0x4d0702*/
  word_8B3CF2 = 0; /*0x4d0708*/
  return 0; /*0x4d070e*/
}



// ==== 0x004D0710  sub_4D0710  this=-  sig=ida-proto ====
int sub_4D0710()
{
  dword_8B3D28 = 0; /*0x4d0712*/
  dword_8B3D2C = 0; /*0x4d0717*/
  dword_8B3D30 = 0; /*0x4d071c*/
  return 0; /*0x4d0721*/
}



// ==== 0x004D0730  sub_4D0730  this=-  sig=ida-proto ====
int sub_4D0730()
{
  dword_8B3D58 = 0; /*0x4d0735*/
  dword_8B3D50 = 128; /*0x4d073f*/
  dword_8B3D54 = 128; /*0x4d0744*/
  return 128; /*0x4d0749*/
}



// ==== 0x004D0750  sub_4D0750  this=-  sig=ida-proto ====
int sub_4D0750()
{
  dword_8B3D14 = 0; /*0x4d0757*/
  dword_8B3D18 = 0; /*0x4d075c*/
  byte_8B3D1C = 1; /*0x4d0761*/
  byte_8B3D1D = 0; /*0x4d0768*/
  dword_8B3D10 = (int)&DynamicVectorClass<FoggedObjectClass *>::`vftable'; /*0x4d076d*/
  dword_8B3D24 = 10; /*0x4d0777*/
  g_FootClassConfig = 0; /*0x4d0781*/
  return atexit(sub_4D0790); /*0x4d078c*/
}



// ==== 0x004D0790  sub_4D0790  this=-  sig=ida-proto ====
void __cdecl sub_4D0790()
{
  if ( (byte_8B3CD5 & 1) == 0 ) /*0x4d079a*/
  {
    dword_8B3D10 = (int)&VectorClass<FoggedObjectClass *>::`vftable'; /*0x4d079e*/
    byte_8B3CD5 |= 1u; /*0x4d07b1*/
    if ( dword_8B3D14 ) /*0x4d07b7*/
    {
      if ( byte_8B3D1D ) /*0x4d07c1*/
      {
        __3_YAXPAX_Z(dword_8B3D14); /*0x4d07c4*/
        dword_8B3D14 = 0; /*0x4d07cc*/
      }
    }
    byte_8B3D1D = 0; /*0x4d07d6*/
    dword_8B3D18 = 0; /*0x4d07dd*/
  }
}



// ==== 0x004D07F0  sub_4D07F0  this=-  sig=ida-proto ====
int sub_4D07F0()
{
  g_MissionPool = 0; /*0x4d07f7*/
  g_MissionState = 0; /*0x4d07fc*/
  dword_8B3CC8 = 0; /*0x4d0801*/
  byte_8B3CCC = 0; /*0x4d0806*/
  dword_8B3CD0 = 0; /*0x4d080b*/
  return atexit(sub_4D0820); /*0x4d0816*/
}



// ==== 0x004D0820  sub_4D0820  this=-  sig=ida-proto ====
void __cdecl sub_4D0820()
{
  if ( (byte_8B3CD4 & 1) == 0 ) /*0x4d082a*/
  {
    byte_8B3CD4 |= 1u; /*0x4d0836*/
    __3_YAXPAX_Z(g_MissionPool); /*0x4d083c*/
    g_MissionPool = 0; /*0x4d0846*/
    g_MissionState = 0; /*0x4d084b*/
    dword_8B3CC8 = 0; /*0x4d0850*/
    byte_8B3CCC = 0; /*0x4d0855*/
    dword_8B3CD0 = 0; /*0x4d085a*/
  }
}



// ==== 0x004D08B0  ObjectClass::Construct  this=FoggedObjectClass  sig=csp ====
_DWORD *__thiscall ObjectClass::Construct(ObjectClass *this)
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x4d08b3*/
  this->occupant = -1; /*0x4d08bd*/
  this->owningHouseIndex = 0; /*0x4d08c0*/
  this->fallRate = 0; /*0x4d08c3*/
  this->nextObject = 0; /*0x4d08c6*/
  this->attachedTag = 0; /*0x4d08c9*/
  this->attachedBomb = 0; /*0x4d08cc*/
  this->ambientSoundController[0] = 0; /*0x4d08cf*/
  this->ambientSoundController[1] = 0; /*0x4d08d2*/
  this->ambientSoundController[2] = 0; /*0x4d08d5*/
  this->ambientSoundController[3] = 0; /*0x4d08d8*/
  this->ambientSoundController[4] = 0; /*0x4d08db*/
  this->customSound_controller[1] = -1; /*0x4d08de*/
  this->customSound_controller[0] = 0; /*0x4d08e3*/
  this->customSound_controller[2] = 0; /*0x4d08e6*/
  this->customSound_controller[4] = 0; /*0x4d08e9*/
  this->customSound = 0; /*0x4d08ec*/
  this->bombVisible = 1; /*0x4d08ef*/
  this->alignmentPadding69[0] = 0; /*0x4d08f2*/
  this->customSound_controller[3] = (int)&DynamicVectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d08f5*/
  this->estimatedHealth = 10; /*0x4d08fc*/
  this->health = 0; /*0x4d0903*/
  this->isOnMap = 1; /*0x4d0906*/
  this->AbstractClass = &FoggedObjectClass::`vftable'; /*0x4d0909*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d090f*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d0916*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d091d*/
  if ( g_FootClassConfig < dword_8B3D18 /*0x4d0956*/
    || (byte_8B3D1D || !dword_8B3D18)
    && dword_8B3D24 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B3D10 + 8))(
         &dword_8B3D10,
         dword_8B3D18 + dword_8B3D24,
         0) )
  {
    v2 = g_FootClassConfig++; /*0x4d0963*/
    *((_DWORD *)dword_8B3D14 + v2) = this; /*0x4d0972*/
  }
  return &this->AbstractClass; /*0x4d0977*/
}



// ==== 0x004D0980  FoggedObjectClass::InitBuildingFog  this=FoggedObjectClass  sig=csp ====
int __thiscall FoggedObjectClass::InitBuildingFog(FoggedObjectClass *this, _DWORD *a2, int a3, int a4)
{
  CellClass *v5; // ebp
  int *PlacementRect; // edi
  int *StartCoords; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // ebp
  int v11; // ebx
  int v12; // eax
  int v13; // edi
  int v14; // ebp
  int v15; // ecx
  int v16; // edi
  int v17; // ebp
  unsigned int v18; // edi
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // edi
  int v24; // [esp+18h] [ebp-28h]
  int v25[4]; // [esp+20h] [ebp-20h] BYREF
  _DWORD v26[4]; // [esp+30h] [ebp-10h] BYREF
  _DWORD *v27; // [esp+44h] [ebp+4h]
  int v28; // [esp+48h] [ebp+8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x4d0989*/
  this->LastSight = a3; /*0x4d099e*/
  this->House = 0; /*0x4d09a1*/
  this->Cell[0] = a4; /*0x4d09a4*/
  this->vtable4 = 20; /*0x4d09a7*/
  *((_DWORD *)this + 13) = *a2; /*0x4d09b4*/
  *((_DWORD *)this + 14) = a2[1]; /*0x4d09b9*/
  *((_DWORD *)this + 15) = a2[2]; /*0x4d09c4*/
  this->abstractFlags = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2)->level; /*0x4d09da*/
  *((_DWORD *)this + 21) = -1; /*0x4d09dd*/
  *((_DWORD *)this + 22) = 0; /*0x4d09e4*/
  FoggedObject::DrawVector_Constructor((FoggedObject *)((char *)this + 92), 0, 0); /*0x4d09e7*/
  *((_DWORD *)this + 23) = &DynamicVectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d09ec*/
  this->referenceCount = 10; /*0x4d09f2*/
  *((_DWORD *)this + 27) = 0; /*0x4d09f9*/
  this->q01D = 1; /*0x4d0a02*/
  this->AbstractClass = &FoggedObjectClass::`vftable'; /*0x4d0a06*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d0a0c*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d0a13*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d0a1a*/
  v5 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x4d0a2a*/
  PlacementRect = BuildingClass::GetPlacementRect((BuildingClass *)v5, v25); /*0x4d0a3b*/
  StartCoords = House::GetStartCoords((House *)v5, v26); /*0x4d0a3d*/
  if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x4d0a4e*/
  {
    v8 = *PlacementRect; /*0x4d0adf*/
    v15 = PlacementRect[1]; /*0x4d0ae1*/
    v14 = PlacementRect[2]; /*0x4d0ae4*/
    v16 = PlacementRect[3]; /*0x4d0ae7*/
  }
  else
  {
    v28 = PlacementRect[2]; /*0x4d0a59*/
    if ( v28 <= 0 || (v27 = (_DWORD *)PlacementRect[3], (int)v27 <= 0) ) /*0x4d0a68*/
    {
      v8 = *StartCoords; /*0x4d0ad2*/
      v15 = StartCoords[1]; /*0x4d0ad4*/
      v14 = StartCoords[2]; /*0x4d0ad7*/
      v16 = StartCoords[3]; /*0x4d0ada*/
    }
    else
    {
      v8 = *StartCoords; /*0x4d0a6a*/
      v9 = *PlacementRect; /*0x4d0a6c*/
      v10 = StartCoords[2]; /*0x4d0a6e*/
      v11 = StartCoords[1]; /*0x4d0a71*/
      v12 = StartCoords[3]; /*0x4d0a74*/
      v24 = v10; /*0x4d0a79*/
      if ( v8 > *PlacementRect ) /*0x4d0a7d*/
      {
        v10 += v8 - v9; /*0x4d0a81*/
        v8 = *PlacementRect; /*0x4d0a83*/
        v24 = v10; /*0x4d0a85*/
      }
      v13 = PlacementRect[1]; /*0x4d0a89*/
      if ( v11 > v13 ) /*0x4d0a92*/
      {
        v12 += v11 - v13; /*0x4d0a96*/
        v11 = v13; /*0x4d0a98*/
      }
      if ( v8 + v10 >= v9 + v28 ) /*0x4d0aa4*/
        v14 = v24; /*0x4d0ab2*/
      else
        v14 = v9 - v8 + v28 + 1; /*0x4d0aac*/
      if ( v12 + v11 < (int)v27 + v13 ) /*0x4d0ac5*/
        v12 = (int)v27 + v13 - v11 + 1; /*0x4d0aca*/
      v15 = v11; /*0x4d0acc*/
      v16 = v12; /*0x4d0ace*/
    }
  }
  this->Count = v8; /*0x4d0aef*/
  this->q011 = v15; /*0x4d0af1*/
  this->IsInitialized = v14; /*0x4d0af4*/
  this->IsAllocated = v16; /*0x4d0af7*/
  v17 = this->q011; /*0x4d0b00*/
  this->Count += *(_DWORD *)&g_TacticalClass_Instance[44]; /*0x4d0b0d*/
  this->q011 = *(_DWORD *)&g_TacticalClass_Instance[45] + v17; /*0x4d0b1d*/
  v18 = this->q011 - (unsigned int)DSurface_ViewBounds.field_4; /*0x4d0b33*/
  this->Count -= DSurface_ViewBounds.field_0; /*0x4d0b35*/
  this->q011 = v18; /*0x4d0b37*/
  if ( g_FootClassConfig < dword_8B3D18 /*0x4d0b6f*/
    || (byte_8B3D1D || !dword_8B3D18)
    && dword_8B3D24 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B3D10 + 8))(
         &dword_8B3D10,
         dword_8B3D24 + dword_8B3D18,
         0) )
  {
    v19 = g_FootClassConfig++; /*0x4d0b7c*/
    *((_DWORD *)dword_8B3D14 + v19) = this; /*0x4d0b8b*/
  }
  v20 = (__int16)(*((_DWORD *)this + 13) / 256); /*0x4d0bb4*/
  v21 = dword_8B3CC8; /*0x4d0bcd*/
  v22 = 74 * ((__int16)(*((_DWORD *)this + 14) / 256) - ((v20 + (__int16)(*((_DWORD *)this + 14) / 256)) << 9) - v20) /*0x4d0bd6*/
      - this->vtable4
      + 0x7FFFFFFF;
  if ( (int)(g_MissionState + 1) <= dword_8B3CC8 ) /*0x4d0bdf*/
    goto LABEL_27; /*0x4d0bdf*/
  if ( !dword_8B3CC8 ) /*0x4d0be3*/
    v21 = 10; /*0x4d0be5*/
  if ( Vector::ReallocDynamic((int)&g_MissionPool, v21) ) /*0x4d0bf0*/
  {
LABEL_27:
    *((_DWORD *)g_MissionPool + 2 * g_MissionState) = v22; /*0x4d0c04*/
    *((_DWORD *)g_MissionPool + 2 * g_MissionState + 1) = this; /*0x4d0c12*/
    byte_8B3CCC = 0; /*0x4d0c1c*/
    ++g_MissionState; /*0x4d0c23*/
  }
  return (int)this; /*0x4d0c2a*/
}



// ==== 0x004D0C40  FoggedObjectClass::InitTerrainFog  this=FoggedObjectClass  sig=csp ====
int __thiscall FoggedObjectClass::InitTerrainFog(FoggedObjectClass *this, _DWORD *a2, int a3, int a4)
{
  int level; // eax
  CellClass *v6; // eax
  int v7; // edx
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // eax
  int v15; // edi
  int v16; // ebp
  _DWORD *v17; // ebx
  signed int i; // eax
  _DWORD *v19; // ecx
  int v21; // [esp+10h] [ebp-24h] BYREF
  int v22; // [esp+14h] [ebp-20h]
  _DWORD v23[2]; // [esp+18h] [ebp-1Ch] BYREF
  int v24; // [esp+20h] [ebp-14h]
  int v25; // [esp+30h] [ebp-4h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x4d0c49*/
  this->LastSight = -1; /*0x4d0c5a*/
  this->House = 0; /*0x4d0c61*/
  this->Cell[0] = 0; /*0x4d0c64*/
  this->vtable4 = 29; /*0x4d0c67*/
  level = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2)->level; /*0x4d0c73*/
  *((_DWORD *)this + 21) = a3; /*0x4d0c85*/
  this->abstractFlags = level; /*0x4d0c8c*/
  *((_DWORD *)this + 22) = a4; /*0x4d0c8f*/
  FoggedObject::DrawVector_Constructor((FoggedObject *)((char *)this + 92), 0, 0); /*0x4d0c92*/
  *((_DWORD *)this + 23) = &DynamicVectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d0c97*/
  this->referenceCount = 10; /*0x4d0c9e*/
  *((_DWORD *)this + 27) = 0; /*0x4d0ca5*/
  this->q01D = 1; /*0x4d0cae*/
  this->AbstractClass = &FoggedObjectClass::`vftable'; /*0x4d0cb2*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d0cb8*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d0cbf*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d0cc6*/
  v6 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x4d0ccd*/
  v7 = a2[1]; /*0x4d0cd4*/
  v8 = a2[2]; /*0x4d0cd7*/
  v23[0] = *a2; /*0x4d0cda*/
  v23[1] = v7; /*0x4d0cde*/
  v24 = v8; /*0x4d0ce2*/
  v9 = dword_8B3D68 * v6->level; /*0x4d0ced*/
  v24 = v9; /*0x4d0cf7*/
  *((_DWORD *)this + 13) = v23[0]; /*0x4d0cfd*/
  *((_DWORD *)this + 14) = v7; /*0x4d0d03*/
  *((_DWORD *)this + 15) = v9; /*0x4d0d06*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v23, &v21); /*0x4d0d15*/
  v10 = v21 - 30; /*0x4d0d25*/
  v22 -= 15; /*0x4d0d32*/
  v11 = v22; /*0x4d0d2a*/
  this->Count = v21 - 30; /*0x4d0d36*/
  v25 = 30; /*0x4d0d38*/
  v21 = v10; /*0x4d0d40*/
  this->q011 = v11; /*0x4d0d44*/
  v12 = v25; /*0x4d0d47*/
  this->IsInitialized = 60; /*0x4d0d4b*/
  this->IsAllocated = v12; /*0x4d0d4e*/
  v13 = this->q011; /*0x4d0d61*/
  this->Count += *(_DWORD *)&g_TacticalClass_Instance[44]; /*0x4d0d64*/
  this->q011 = *(_DWORD *)&g_TacticalClass_Instance[45] + v13; /*0x4d0d73*/
  if ( g_FootClassConfig < dword_8B3D18 /*0x4d0dab*/
    || (byte_8B3D1D || !dword_8B3D18)
    && dword_8B3D24 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B3D10 + 8))(
         &dword_8B3D10,
         dword_8B3D18 + dword_8B3D24,
         0) )
  {
    v14 = g_FootClassConfig++; /*0x4d0db8*/
    *((_DWORD *)dword_8B3D14 + v14) = this; /*0x4d0dc7*/
  }
  v15 = 74 /*0x4d0e11*/
      * ((__int16)(*((_DWORD *)this + 14) / 256)
       - (((__int16)(*((_DWORD *)this + 13) / 256) + (__int16)(*((_DWORD *)this + 14) / 256)) << 9)
       - (__int16)(*((_DWORD *)this + 13) / 256))
      - this->vtable4
      + 0x7FFFFFFF;
  if ( (int)(g_MissionState + 1) <= dword_8B3CC8 ) /*0x4d0e1a*/
    goto LABEL_15; /*0x4d0e1a*/
  if ( dword_8B3CC8 ) /*0x4d0e22*/
  {
    v16 = dword_8B3CC8; /*0x4d0e2b*/
    if ( dword_8B3CC8 < 0 ) /*0x4d0e2f*/
      return (int)this; /*0x4d0e2f*/
  }
  else
  {
    v16 = 10; /*0x4d0e24*/
  }
  v17 = (_DWORD *)__2_YAPAXI_Z(8 * (v16 + dword_8B3CC8)); /*0x4d0e44*/
  if ( v17 ) /*0x4d0e4b*/
  {
    for ( i = 0; i < (int)g_MissionState; v17[2 * i - 1] = v19[1] ) /*0x4d0e64*/
    {
      v19 = (char *)g_MissionPool + 8 * i++; /*0x4d0e6c*/
      v17[2 * i - 2] = *v19; /*0x4d0e72*/
    }
    __3_YAXPAX_Z(g_MissionPool); /*0x4d0e8e*/
    g_MissionPool = v17; /*0x4d0e9d*/
    dword_8B3CC8 += v16; /*0x4d0ea3*/
    dword_8B3CD0 = 0; /*0x4d0ea8*/
LABEL_15:
    *((_DWORD *)g_MissionPool + 2 * g_MissionState) = v15; /*0x4d0eb2*/
    *((_DWORD *)g_MissionPool + 2 * g_MissionState + 1) = this; /*0x4d0ecb*/
    byte_8B3CCC = 0; /*0x4d0ed5*/
    ++g_MissionState; /*0x4d0edc*/
  }
  return (int)this; /*0x4d0ee3*/
}



// ==== 0x004D0EF0  FoggedObjectClass::Constructor  this=FoggedObjectClass  sig=csp ====
int __thiscall FoggedObjectClass::Constructor(int this, int *a2, char a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // esi
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ebp
  int ProductionFrame; // eax
  int v13; // ebp
  int v14; // eax
  char v15; // al
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int *v20; // edx
  int *v21; // ebx
  int *v22; // eax
  int *v23; // ecx
  int v24; // edx
  int v25; // ebp
  int v26; // ebx
  int v27; // ecx
  int v28; // ebx
  int v29; // eax
  int v30; // ebx
  int v31; // eax
  int v32; // ecx
  int v33; // edx
  int v34; // ebp
  int v35; // ecx
  int v36; // ebp
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  _DWORD *v40; // eax
  int v41; // ecx
  int v42; // edx
  bool v43; // zf
  int *v45; // [esp+20h] [ebp-40h]
  int v46; // [esp+24h] [ebp-3Ch]
  int v47; // [esp+28h] [ebp-38h]
  int v48; // [esp+2Ch] [ebp-34h]
  _DWORD v49[2]; // [esp+30h] [ebp-30h] BYREF
  int v50; // [esp+38h] [ebp-28h]
  int v51; // [esp+3Ch] [ebp-24h]
  char v52[8]; // [esp+40h] [ebp-20h] BYREF
  int v53; // [esp+48h] [ebp-18h]
  int v54; // [esp+4Ch] [ebp-14h]
  int v55[4]; // [esp+50h] [ebp-10h] BYREF
  int v56; // [esp+64h] [ebp+4h]
  int v57; // [esp+68h] [ebp+8h]
  int v58; // [esp+68h] [ebp+8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x4d0ef9*/
  *(_DWORD *)(this + 36) = -1; /*0x4d0f02*/
  v4 = a2[135]; /*0x4d0f0c*/
  *(_DWORD *)(this + 44) = 0; /*0x4d0f12*/
  *(_DWORD *)(this + 40) = v4; /*0x4d0f19*/
  *(_DWORD *)(this + 48) = 6; /*0x4d0f24*/
  *(_DWORD *)(this + 52) = a2[39]; /*0x4d0f2f*/
  *(_DWORD *)(this + 56) = a2[40]; /*0x4d0f34*/
  *(_DWORD *)(this + 60) = a2[41]; /*0x4d0f3a*/
  v5 = a2[40]; /*0x4d0f3f*/
  v49[0] = a2[39]; /*0x4d0f42*/
  v6 = a2[41]; /*0x4d0f46*/
  v49[1] = v5; /*0x4d0f4d*/
  v50 = v6; /*0x4d0f57*/
  v7 = this + 92; /*0x4d0f67*/
  *(_DWORD *)(this + 80) = *((char *)Coord::To_Cell(&dword_87F7E8, v49) + 283); /*0x4d0f6a*/
  *(_DWORD *)(this + 84) = -1; /*0x4d0f73*/
  *(_DWORD *)(this + 88) = 0; /*0x4d0f7a*/
  FoggedObject::DrawVector_Constructor((_DWORD *)(this + 92), 0, 0); /*0x4d0f81*/
  *(_DWORD *)(this + 92) = &DynamicVectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d0f8a*/
  *(_DWORD *)(this + 112) = 10; /*0x4d0f90*/
  *(_DWORD *)(this + 108) = 0; /*0x4d0f97*/
  *(_BYTE *)(this + 116) = a3; /*0x4d0fa2*/
  *(_DWORD *)this = &FoggedObjectClass::`vftable'; /*0x4d0fa5*/
  *(_DWORD *)(this + 4) = &FoggedObjectClass::`vftable'; /*0x4d0fab*/
  *(_DWORD *)(this + 8) = &FoggedObjectClass::`vftable'; /*0x4d0fb2*/
  *(_DWORD *)(this + 12) = &FoggedObjectClass::`vftable'; /*0x4d0fb9*/
  v8 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(*a2 + 300))(a2, v52); /*0x4d0fc5*/
  *(_DWORD *)(this + 64) = *v8; /*0x4d0fd2*/
  *(_DWORD *)(this + 68) = v8[1]; /*0x4d0fd7*/
  *(_DWORD *)(this + 72) = v8[2]; /*0x4d0fdd*/
  *(_DWORD *)(this + 76) = v8[3]; /*0x4d0fe3*/
  if ( g_FootClassConfig < dword_8B3D18 /*0x4d101a*/
    || (byte_8B3D1D || !dword_8B3D18)
    && dword_8B3D24 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B3D10 + 8))(
         &dword_8B3D10,
         dword_8B3D18 + dword_8B3D24,
         0) )
  {
    v9 = g_FootClassConfig++; /*0x4d1027*/
    *((_DWORD *)dword_8B3D14 + v9) = this; /*0x4d1036*/
  }
  v10 = dword_8B3CC8; /*0x4d107c*/
  v11 = 74 /*0x4d1081*/
      * ((__int16)(*(_DWORD *)(this + 56) / 256)
       - (((__int16)(*(_DWORD *)(this + 52) / 256) + (__int16)(*(_DWORD *)(this + 56) / 256)) << 9)
       - (__int16)(*(_DWORD *)(this + 52) / 256))
      - *(_DWORD *)(this + 48)
      + 0x7FFFFFFF;
  if ( (int)(g_MissionState + 1) <= dword_8B3CC8 ) /*0x4d108a*/
    goto LABEL_11; /*0x4d108a*/
  if ( !dword_8B3CC8 ) /*0x4d108e*/
    v10 = 10; /*0x4d1090*/
  if ( (unsigned __int8)Vector::ReallocDynamic(v10) ) /*0x4d109b*/
  {
LABEL_11:
    *((_DWORD *)g_MissionPool + 2 * g_MissionState) = v11; /*0x4d10af*/
    *((_DWORD *)g_MissionPool + 2 * g_MissionState + 1) = this; /*0x4d10bd*/
    byte_8B3CCC = 0; /*0x4d10c7*/
    ++g_MissionState; /*0x4d10ce*/
  }
  *((_BYTE *)a2 + 1767) = 1; /*0x4d10d5*/
  ProductionFrame = BuildingClass::GetProductionFrame(a2); /*0x4d10dc*/
  v13 = a2[328]; /*0x4d10e1*/
  v57 = ProductionFrame; /*0x4d10e7*/
  if ( *(_BYTE *)(v13 + 5823) && ((v14 = a2[390], v14 == 12) || v14 == 8) /*0x4d1112*/
    || (v15 = *(_BYTE *)(v13 + 5824), LOBYTE(v53) = 0, v15) )
  {
    LOBYTE(v53) = 1; /*0x4d1114*/
  }
  v16 = *(_DWORD *)(this + 100); /*0x4d1119*/
  if ( *(_DWORD *)(this + 108) < v16 /*0x4d113e*/
    || (*(_BYTE *)(this + 105) || !v16)
    && (v17 = *(_DWORD *)(this + 112), v17 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7 + 8))(this + 92, v16 + v17, 0) )
  {
    v18 = *(_DWORD *)(this + 108); /*0x4d1145*/
    *(_DWORD *)(this + 108) = v18 + 1; /*0x4d114b*/
    v19 = v53; /*0x4d1156*/
    v20 = (int *)(*(_DWORD *)(this + 96) + 16 * v18); /*0x4d115a*/
    *v20 = v13; /*0x4d1160*/
    v20[1] = v57; /*0x4d1162*/
    v20[2] = v19; /*0x4d1167*/
    v20[3] = 0; /*0x4d116a*/
  }
  v21 = a2 + 343; /*0x4d116d*/
  v46 = 21; /*0x4d1173*/
  v45 = a2 + 343; /*0x4d117b*/
  do /*0x4d130a*/
  {
    if ( !*v21 ) /*0x4d1183*/
      goto LABEL_47; /*0x4d1183*/
    *(_BYTE *)(*v21 + 409) = 1; /*0x4d1189*/
    v56 = *(_DWORD *)(*v21 + 200); /*0x4d119a*/
    v22 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)*v21 + 296))(*v21, v55); /*0x4d11a3*/
    v23 = (int *)(this + 64); /*0x4d11ac*/
    if ( *(int *)(this + 72) <= 0 || *(int *)(this + 76) <= 0 ) /*0x4d11bc*/
    {
      v32 = *v22; /*0x4d1266*/
      v33 = v22[1]; /*0x4d1268*/
      v34 = v22[2]; /*0x4d126b*/
    }
    else
    {
      v58 = v22[2]; /*0x4d11c7*/
      if ( v58 > 0 ) /*0x4d11cb*/
      {
        v48 = v22[3]; /*0x4d11d6*/
        if ( v48 > 0 ) /*0x4d11da*/
        {
          v24 = *v23; /*0x4d11dc*/
          v25 = *(_DWORD *)(this + 68); /*0x4d11de*/
          v26 = *(_DWORD *)(this + 72); /*0x4d11e1*/
          v50 = v26; /*0x4d11e4*/
          v51 = *(_DWORD *)(this + 76); /*0x4d11eb*/
          v27 = *v22; /*0x4d11ef*/
          if ( v24 > *v22 ) /*0x4d11f3*/
          {
            v28 = v24 - v27 + v26; /*0x4d11f7*/
            v24 = *v22; /*0x4d11f9*/
            v50 = v28; /*0x4d11fb*/
          }
          v29 = v22[1]; /*0x4d11ff*/
          v47 = v29; /*0x4d1204*/
          if ( v25 > v29 ) /*0x4d1208*/
          {
            v30 = v25 - v29 + v51; /*0x4d1210*/
            v25 = v29; /*0x4d1212*/
            v51 = v30; /*0x4d1214*/
          }
          if ( v24 + v50 < v27 + v58 ) /*0x4d1226*/
            v50 = v27 - v24 + v58 + 1; /*0x4d1232*/
          v31 = v51; /*0x4d1240*/
          if ( v51 + v25 < v47 + v48 ) /*0x4d1249*/
            v31 = v47 + v48 - v25 + 1; /*0x4d124e*/
          v32 = v24; /*0x4d1250*/
          v33 = v25; /*0x4d1252*/
          v34 = v50; /*0x4d1254*/
          goto LABEL_41; /*0x4d1258*/
        }
      }
      v22 = (int *)(this + 64); /*0x4d125a*/
      v32 = *v23; /*0x4d125c*/
      v33 = *(_DWORD *)(this + 68); /*0x4d125e*/
      v34 = *(_DWORD *)(this + 72); /*0x4d1261*/
    }
    v31 = v22[3]; /*0x4d126e*/
LABEL_41:
    LOBYTE(v53) = 0; /*0x4d1271*/
    *(_DWORD *)(this + 64) = v32; /*0x4d1279*/
    *(_DWORD *)(this + 68) = v33; /*0x4d127f*/
    *(_DWORD *)(this + 72) = v34; /*0x4d1282*/
    *(_DWORD *)(this + 76) = v31; /*0x4d1285*/
    v21 = v45; /*0x4d1288*/
    v35 = *(_DWORD *)(this + 108); /*0x4d1292*/
    v36 = *(_DWORD *)(v56 + 692) + *(_DWORD *)(*v45 + 172); /*0x4d129d*/
    v37 = *(_DWORD *)(this + 100); /*0x4d12a5*/
    v54 = *(_DWORD *)(*v45 + 256); /*0x4d12a8*/
    if ( v35 < v37 /*0x4d12cb*/
      || (*(_BYTE *)(this + 105) || !v37)
      && (v38 = *(_DWORD *)(this + 112), v38 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7 + 8))(this + 92, v37 + v38, 0) )
    {
      v39 = *(_DWORD *)(this + 108); /*0x4d12d2*/
      *(_DWORD *)(this + 108) = v39 + 1; /*0x4d12dc*/
      v40 = (_DWORD *)(*(_DWORD *)(this + 96) + 16 * v39); /*0x4d12e5*/
      v41 = v53; /*0x4d12e7*/
      *v40 = v56; /*0x4d12eb*/
      v42 = v54; /*0x4d12ed*/
      v40[1] = v36; /*0x4d12f1*/
      v40[2] = v41; /*0x4d12f4*/
      v40[3] = v42; /*0x4d12f7*/
    }
LABEL_47:
    ++v21; /*0x4d12fa*/
    v43 = v46 == 1; /*0x4d1301*/
    v45 = v21; /*0x4d1302*/
    --v46; /*0x4d1306*/
  }
  while ( !v43 ); /*0x4d130a*/
  Cell::CreateCrater(*(_DWORD *)(this + 64), *(_DWORD *)(this + 68), *(_DWORD *)(this + 72), *(_DWORD *)(this + 76), 0); /*0x4d1338*/
  *(_DWORD *)(this + 64) += g_TacticalClass_Instance[44].__tail_0; /*0x4d134d*/
  *(_DWORD *)(this + 68) += g_TacticalClass_Instance[45].__tail_0; /*0x4d135f*/
  return this; /*0x4d1364*/
}



// ==== 0x004D1370  FoggedObjectClass::InitDrawRecord  this=FoggedObjectClass  sig=csp ====
int __thiscall FoggedObjectClass::InitDrawRecord(FoggedObjectClass *this, _DWORD *a2)
{
  int v3; // edx
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // ebp
  _DWORD *v18; // ebx
  signed int i; // eax
  _DWORD *v20; // ecx
  _DWORD v22[2]; // [esp+10h] [ebp-10h] BYREF
  int v23; // [esp+18h] [ebp-8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x4d1379*/
  this->LastSight = -1; /*0x4d1384*/
  this->House = 0; /*0x4d138b*/
  this->Cell[0] = 0; /*0x4d1394*/
  this->vtable4 = 36; /*0x4d1399*/
  *((_DWORD *)this + 13) = a2[39]; /*0x4d13a5*/
  *((_DWORD *)this + 14) = a2[40]; /*0x4d13aa*/
  *((_DWORD *)this + 15) = a2[41]; /*0x4d13b0*/
  v3 = a2[40]; /*0x4d13b5*/
  v4 = a2[41]; /*0x4d13b8*/
  v22[0] = a2[39]; /*0x4d13bb*/
  v22[1] = v3; /*0x4d13c9*/
  v23 = v4; /*0x4d13cd*/
  this->abstractFlags = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v22)->level; /*0x4d13e4*/
  *((_DWORD *)this + 21) = -1; /*0x4d13e7*/
  *((_DWORD *)this + 22) = 0; /*0x4d13ee*/
  FoggedObject::DrawVector_Constructor((FoggedObject *)((char *)this + 92), 0, 0); /*0x4d13f1*/
  *((_DWORD *)this + 23) = &DynamicVectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d13f6*/
  this->referenceCount = 10; /*0x4d13fc*/
  *((_DWORD *)this + 27) = 0; /*0x4d1403*/
  this->q01D = 1; /*0x4d140a*/
  this->AbstractClass = &FoggedObjectClass::`vftable'; /*0x4d140e*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d1414*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d141b*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d1422*/
  v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*a2 + 300))(a2, v22); /*0x4d1431*/
  this->Count = *v5; /*0x4d143b*/
  this->q011 = v5[1]; /*0x4d1440*/
  this->IsInitialized = v5[2]; /*0x4d1446*/
  this->IsAllocated = v5[3]; /*0x4d144c*/
  v6 = this->q011; /*0x4d1460*/
  this->Count += *(_DWORD *)&g_TacticalClass_Instance[44]; /*0x4d1463*/
  this->q011 = *(_DWORD *)&g_TacticalClass_Instance[45] + v6; /*0x4d1473*/
  if ( g_FootClassConfig < dword_8B3D18 /*0x4d14ab*/
    || (byte_8B3D1D || !dword_8B3D18)
    && dword_8B3D24 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B3D10 + 8))(
         &dword_8B3D10,
         dword_8B3D18 + dword_8B3D24,
         0) )
  {
    v7 = g_FootClassConfig++; /*0x4d14b8*/
    *((_DWORD *)dword_8B3D14 + v7) = this; /*0x4d14c7*/
  }
  v8 = *((_DWORD *)this + 25); /*0x4d14ca*/
  v9 = *((_DWORD *)this + 27); /*0x4d14cd*/
  v10 = a2[50]; /*0x4d14d0*/
  LOBYTE(v23) = 0; /*0x4d14da*/
  if ( v9 < v8 /*0x4d14fc*/
    || (*((_BYTE *)this + 105) || !v8)
    && (v11 = this->referenceCount, v11 > 0)
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)this + 23) + 8))(
         (char *)this + 92,
         v8 + v11,
         0) )
  {
    v12 = *((_DWORD *)this + 27); /*0x4d1503*/
    *((_DWORD *)this + 27) = v12 + 1; /*0x4d1509*/
    v13 = (_DWORD *)(this->nextArrayIndex + 16 * v12); /*0x4d1514*/
    v14 = v23; /*0x4d1516*/
    *v13 = v10; /*0x4d151a*/
    v13[1] = 0; /*0x4d151c*/
    v13[2] = v14; /*0x4d151f*/
    v13[3] = 0; /*0x4d1524*/
  }
  v15 = (__int16)(*((_DWORD *)this + 13) / 256); /*0x4d154d*/
  v16 = 74 * ((__int16)(*((_DWORD *)this + 14) / 256) - ((v15 + (__int16)(*((_DWORD *)this + 14) / 256)) << 9) - v15) /*0x4d156f*/
      - this->vtable4
      + 0x7FFFFFFF;
  if ( (int)(g_MissionState + 1) <= dword_8B3CC8 ) /*0x4d1578*/
    goto LABEL_21; /*0x4d1578*/
  if ( dword_8B3CC8 ) /*0x4d1580*/
  {
    v17 = dword_8B3CC8; /*0x4d1589*/
    if ( dword_8B3CC8 < 0 ) /*0x4d158d*/
      return (int)this; /*0x4d158d*/
  }
  else
  {
    v17 = 10; /*0x4d1582*/
  }
  v18 = (_DWORD *)__2_YAPAXI_Z(8 * (v17 + dword_8B3CC8)); /*0x4d15a2*/
  if ( v18 ) /*0x4d15a9*/
  {
    for ( i = 0; i < (int)g_MissionState; v18[2 * i - 1] = v20[1] ) /*0x4d15c2*/
    {
      v20 = (char *)g_MissionPool + 8 * i++; /*0x4d15ca*/
      v18[2 * i - 2] = *v20; /*0x4d15d0*/
    }
    __3_YAXPAX_Z(g_MissionPool); /*0x4d15ec*/
    g_MissionPool = v18; /*0x4d15fb*/
    dword_8B3CC8 += v17; /*0x4d1601*/
    dword_8B3CD0 = 0; /*0x4d1606*/
LABEL_21:
    *((_DWORD *)g_MissionPool + 2 * g_MissionState) = v16; /*0x4d1610*/
    *((_DWORD *)g_MissionPool + 2 * g_MissionState + 1) = this; /*0x4d1629*/
    byte_8B3CCC = 0; /*0x4d1633*/
    ++g_MissionState; /*0x4d163a*/
  }
  return (int)this; /*0x4d1641*/
}



// ==== 0x004D1650  FoggedObjectClass::DestructFoggedObjectClass  this=FoggedObjectClass  sig=csp ====
int __fastcall DestructFoggedObjectClass(int a1)
{
  int v2; // eax
  int v3; // kr00_4
  int v4; // edx
  int v5; // esi
  int v6; // eax
  int v7; // eax
  signed int v8; // ecx
  size_t i; // eax
  _DWORD *v10; // eax
  Cell *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // ecx
  int v14; // edx
  void *v15; // eax
  __int16 v17[4]; // [esp+10h] [ebp-Ch] BYREF
  __int16 v18[2]; // [esp+18h] [ebp-4h] BYREF

  *(_DWORD *)a1 = &FoggedObjectClass::`vftable'; /*0x4d1663*/
  *(_DWORD *)(a1 + 4) = &FoggedObjectClass::`vftable'; /*0x4d1669*/
  *(_DWORD *)(a1 + 8) = &FoggedObjectClass::`vftable'; /*0x4d1670*/
  *(_DWORD *)(a1 + 12) = &FoggedObjectClass::`vftable'; /*0x4d1677*/
  *(_DWORD *)v17 = a1; /*0x4d1684*/
  v2 = (*(int (__thiscall **)(int *, __int16 *))(dword_8B3D10 + 16))(&dword_8B3D10, v17); /*0x4d1688*/
  if ( v2 != -1 && v2 < g_FootClassConfig && v2 < --g_FootClassConfig ) /*0x4d16a3*/
  {
    do /*0x4d16bb*/
    {
      ++v2; /*0x4d16ab*/
      *((_DWORD *)dword_8B3D14 + v2 - 1) = *((_DWORD *)dword_8B3D14 + v2); /*0x4d16af*/
    }
    while ( v2 < g_FootClassConfig ); /*0x4d16bb*/
  }
  v3 = *(_DWORD *)(a1 + 56); /*0x4d16d7*/
  v17[0] = *(_DWORD *)(a1 + 52) / 256; /*0x4d16df*/
  v17[1] = v3 / 256; /*0x4d16e4*/
  *(_DWORD *)v18 = *(_DWORD *)v17; /*0x4d16f3*/
  v4 = g_MissionState; /*0x4d170e*/
  v5 = 74 * (v17[1] - ((v17[0] + v17[1]) << 9) - v17[0]) - *(_DWORD *)(a1 + 48) + 0x7FFFFFFF; /*0x4d1714*/
  if ( g_MissionState ) /*0x4d171c*/
  {
    if ( !byte_8B3CCC ) /*0x4d1728*/
    {
      qsort(g_MissionPool, g_MissionState, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)globalHelper_0D2ED0); /*0x4d1739*/
      v4 = g_MissionState; /*0x4d173e*/
      dword_8B3CD0 = 0; /*0x4d1747*/
      byte_8B3CCC = 1; /*0x4d174d*/
    }
    *(_DWORD *)v17 = v5; /*0x4d175f*/
    v6 = sub_4D2F00((int)g_MissionPool, v4, (int *)v17); /*0x4d1763*/
    if ( v6 ) /*0x4d176a*/
    {
      v7 = (v6 - (int)g_MissionPool) >> 3; /*0x4d1772*/
      if ( v7 != -1 ) /*0x4d1778*/
      {
        v8 = v7 + 1; /*0x4d177a*/
        for ( i = g_MissionState; v8 < (int)g_MissionState; i = g_MissionState ) /*0x4d1784*/
        {
          v10 = (char *)g_MissionPool + 8 * v8++; /*0x4d178c*/
          *(v10 - 2) = *v10; /*0x4d1792*/
          *(v10 - 1) = v10[1]; /*0x4d1798*/
        }
        g_MissionState = i - 1; /*0x4d17ad*/
        *((_DWORD *)g_MissionPool + 2 * g_MissionState) = 0; /*0x4d17b2*/
        *((_DWORD *)g_MissionPool + 2 * g_MissionState + 1) = 0; /*0x4d17c2*/
        dword_8B3CD0 = 0; /*0x4d17c6*/
      }
    }
  }
  if ( *(_DWORD *)(a1 + 48) == 6 ) /*0x4d17d0*/
  {
    v11 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v18); /*0x4d17dc*/
    v12 = Cell::IsBridge(v11); /*0x4d17e3*/
    if ( v12 ) /*0x4d17ea*/
    {
      *((_BYTE *)v12 + 1767) = 0; /*0x4d17ec*/
      v13 = v12 + 343; /*0x4d17f2*/
      v14 = 21; /*0x4d17f8*/
      do /*0x4d180d*/
      {
        if ( *v13 ) /*0x4d17fd*/
          *(_BYTE *)(*v13 + 409) = 0; /*0x4d1803*/
        ++v13; /*0x4d1809*/
        --v14; /*0x4d180c*/
      }
      while ( v14 ); /*0x4d180d*/
    }
  }
  if ( g_TacticalClass_Instance ) /*0x4d1817*/
    Cell::CreateCrater( /*0x4d184b*/
      *(_DWORD *)(a1 + 64) - *(_DWORD *)&g_TacticalClass_Instance[44],
      *(_DWORD *)(a1 + 68) - *(_DWORD *)&g_TacticalClass_Instance[45],
      *(_DWORD *)(a1 + 72),
      *(_DWORD *)(a1 + 76),
      0);
  v15 = *(void **)(a1 + 96); /*0x4d1852*/
  *(_DWORD *)(a1 + 92) = &VectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d1855*/
  if ( v15 && *(_BYTE *)(a1 + 105) ) /*0x4d1860*/
  {
    __3_YAXPAX_Z(v15); /*0x4d1866*/
    *(_DWORD *)(a1 + 96) = 0; /*0x4d186e*/
  }
  *(_BYTE *)(a1 + 105) = 0; /*0x4d1873*/
  *(_DWORD *)(a1 + 100) = 0; /*0x4d1876*/
  return AbstractClass::DTOR((AbstractClass *)a1); /*0x4d187e*/
}



// ==== 0x004D1890  TacticalClass::DrawBuildings  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::DrawBuildings(TacticalClass *this)
{
  int result; // eax
  int v3; // esi
  int v4; // ebx
  int *v5; // eax
  CellClass *v6; // esi
  int v7; // ebp
  int powerup; // eax
  _DWORD *v9; // esi
  CellClass *v10; // ebp
  int v11; // ebx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // esi
  int v17; // ecx
  _BYTE *v18; // esi
  int *v19; // ebp
  int v20; // ecx
  int v21; // edx
  int v22; // edx
  char v23; // al
  int v24; // ecx
  void *v25; // eax
  int *v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // edx
  int v31; // eax
  CellClass *v32; // eax
  int *v33; // ecx
  int v34; // ebp
  int v35; // esi
  _DWORD *v36; // ebp
  int v37; // ecx
  int v38; // edx
  int v39; // ecx
  int v40; // eax
  int v41; // edx
  int v42; // ebp
  char *vtable1; // ebp
  void *v44; // edx
  IPersistStream v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // ecx
  int v49; // ebp
  CellClass *v50; // eax
  int v51; // esi
  int v52; // [esp-28h] [ebp-174h]
  int v53; // [esp-28h] [ebp-174h]
  int v54; // [esp-24h] [ebp-170h]
  int v55; // [esp-20h] [ebp-16Ch]
  int v56; // [esp-20h] [ebp-16Ch]
  int v57; // [esp+8h] [ebp-144h]
  int v58; // [esp+8h] [ebp-144h]
  int v59; // [esp+8h] [ebp-144h]
  int *v60; // [esp+Ch] [ebp-140h]
  int *v61; // [esp+Ch] [ebp-140h]
  char v62; // [esp+10h] [ebp-13Ch]
  int v63; // [esp+10h] [ebp-13Ch]
  int *v64; // [esp+10h] [ebp-13Ch]
  int v65; // [esp+10h] [ebp-13Ch]
  int v66; // [esp+14h] [ebp-138h]
  unsigned int v67; // [esp+18h] [ebp-134h]
  signed int j; // [esp+18h] [ebp-134h]
  unsigned int v69; // [esp+1Ch] [ebp-130h]
  char v70; // [esp+23h] [ebp-129h]
  int v71; // [esp+24h] [ebp-128h]
  CellClass *v72; // [esp+24h] [ebp-128h]
  int v73; // [esp+28h] [ebp-124h]
  int v74; // [esp+28h] [ebp-124h]
  int v75; // [esp+2Ch] [ebp-120h]
  int v76; // [esp+2Ch] [ebp-120h]
  int v77; // [esp+30h] [ebp-11Ch] BYREF
  int v78; // [esp+34h] [ebp-118h]
  int v79; // [esp+38h] [ebp-114h] BYREF
  int v80; // [esp+3Ch] [ebp-110h]
  int v81; // [esp+40h] [ebp-10Ch] BYREF
  int v82; // [esp+44h] [ebp-108h]
  int v83[2]; // [esp+48h] [ebp-104h] BYREF
  int v84; // [esp+50h] [ebp-FCh]
  int v85; // [esp+54h] [ebp-F8h]
  signed int i; // [esp+60h] [ebp-ECh]
  int v87[2]; // [esp+64h] [ebp-E8h] BYREF
  int v88[3]; // [esp+6Ch] [ebp-E0h] BYREF
  void *vtable3; // [esp+78h] [ebp-D4h]
  IPersistStream v90; // [esp+7Ch] [ebp-D0h]
  IPersistStream v91; // [esp+80h] [ebp-CCh]
  int v92; // [esp+84h] [ebp-C8h]
  int v93; // [esp+88h] [ebp-C4h] BYREF
  char *v94; // [esp+8Ch] [ebp-C0h]
  int v95; // [esp+90h] [ebp-BCh]
  int v96; // [esp+94h] [ebp-B8h]
  _DWORD v97[2]; // [esp+98h] [ebp-B4h] BYREF
  int v98[2]; // [esp+A0h] [ebp-ACh] BYREF
  _DWORD v99[3]; // [esp+A8h] [ebp-A4h] BYREF
  _DWORD v100[3]; // [esp+B4h] [ebp-98h] BYREF
  _DWORD v101[3]; // [esp+C0h] [ebp-8Ch] BYREF
  _DWORD v102[3]; // [esp+CCh] [ebp-80h] BYREF
  _DWORD v103[3]; // [esp+D8h] [ebp-74h] BYREF
  _DWORD v104[3]; // [esp+E4h] [ebp-68h] BYREF
  _DWORD v105[3]; // [esp+F0h] [ebp-5Ch] BYREF
  _DWORD v106[3]; // [esp+FCh] [ebp-50h] BYREF
  _DWORD v107[3]; // [esp+108h] [ebp-44h] BYREF
  _DWORD v108[3]; // [esp+114h] [ebp-38h] BYREF
  _DWORD v109[3]; // [esp+120h] [ebp-2Ch] BYREF
  void *vtable0; // [esp+12Ch] [ebp-20h]
  int v111[2]; // [esp+134h] [ebp-18h] BYREF
  _DWORD v112[4]; // [esp+13Ch] [ebp-10h] BYREF

  result = (int)g_hWnd; /*0x4d1890*/
  if ( g_hWnd ) /*0x4d18a1*/
  {
    result = g_MissionState; /*0x4d18a7*/
    v3 = 0; /*0x4d18ac*/
    for ( i = 0; i < (int)g_MissionState; ++i ) /*0x4d18b4*/
    {
      if ( !byte_8B3CCC ) /*0x4d18c4*/
      {
        qsort(g_MissionPool, result, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)globalHelper_0D2ED0); /*0x4d18d4*/
        dword_8B3CD0 = 0; /*0x4d18dc*/
        byte_8B3CCC = 1; /*0x4d18e6*/
      }
      v4 = *((_DWORD *)g_MissionPool + 2 * v3 + 1); /*0x4d18f3*/
      if ( *(_BYTE *)(v4 + 116) ) /*0x4d18f7*/
      {
        v93 = *(_DWORD *)(v4 + 64); /*0x4d190d*/
        v94 = *(char **)(v4 + 68); /*0x4d1917*/
        v95 = *(_DWORD *)(v4 + 72); /*0x4d1921*/
        v96 = *(_DWORD *)(v4 + 76); /*0x4d192b*/
        v93 -= *(_DWORD *)&g_TacticalClass_Instance[44]; /*0x4d193e*/
        v94 = (char *)DSurface_ViewBounds.field_4 + (unsigned int)&v94[-*(_DWORD *)&g_TacticalClass_Instance[45]]; /*0x4d195d*/
        v93 += DSurface_ViewBounds.field_0; /*0x4d1964*/
        v5 = ClipRectIntersection(v112, (int *)this, &v93, 0, 0); /*0x4d197c*/
        v84 = *v5; /*0x4d1985*/
        v85 = v5[1]; /*0x4d198c*/
        if ( v5[2] > 0 && v5[3] > 0 ) /*0x4d19a0*/
        {
          switch ( *(_DWORD *)(v4 + 48) ) /*0x4d19bd*/
          {
            case 6: /*0x4d19bd*/
              for ( j = 0; j < *(_DWORD *)(v4 + 108); ++j ) /*0x4d1c57*/
              {
                v17 = *(_DWORD *)(v4 + 96); /*0x4d1c61*/
                v18 = *(_BYTE **)(v17 + 16 * j); /*0x4d1c6b*/
                v69 = *(_DWORD *)(v17 + 16 * j + 4); /*0x4d1c79*/
                v66 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v18 + 156))(v18); /*0x4d1c86*/
                v70 = *(_BYTE *)(*(_DWORD *)(v4 + 96) + 16 * j + 8); /*0x4d1c97*/
                v64 = *(int **)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] /*0x4d1cb0*/
                                          + 4 * *(_DWORD *)(*(_DWORD *)(v4 + 40) + 90196))
                              + 780);
                if ( j ) /*0x4d1cb4*/
                {
                  if ( v18 /*0x4d207f*/
                    && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v18 + 44))(v18) == 5
                    && *((_DWORD *)v18 + 181) <= stru_A8EB00.ObjectTypeClass[30]
                    && v66 )
                  {
                    v36 = (_DWORD *)(v4 + 52); /*0x4d2085*/
                    v37 = *(_DWORD *)(v4 + 56); /*0x4d208f*/
                    v100[0] = *(_DWORD *)(v4 + 52) - 128; /*0x4d2092*/
                    v38 = *(_DWORD *)(v4 + 60); /*0x4d20a0*/
                    v100[1] = v37 - 128; /*0x4d20a3*/
                    v100[2] = v38; /*0x4d20b9*/
                    Coord::To_Screen((Coord *)g_TacticalClass_Instance, v100, &v77); /*0x4d20c0*/
                    vtable0 = this->AbstractClass; /*0x4d20d2*/
                    v39 = (char *)DSurface_ViewBounds.field_4 - (char *)this->?; /*0x4d20e3*/
                    v40 = 1000; /*0x4d20eb*/
                    v77 += DSurface_ViewBounds.field_0 - (_DWORD)vtable0; /*0x4d20f0*/
                    v41 = v39 + v78; /*0x4d20f8*/
                    LOBYTE(v39) = v18[861]; /*0x4d20fa*/
                    v78 = v41; /*0x4d2102*/
                    if ( !(_BYTE)v39 ) /*0x4d2106*/
                    {
                      v102[0] = *v36; /*0x4d210c*/
                      v102[1] = *(_DWORD *)(v4 + 56); /*0x4d2123*/
                      v102[2] = *(_DWORD *)(v4 + 60); /*0x4d212d*/
                      v40 = *(__int16 *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v102)->CellClass_field_10A; /*0x4d2139*/
                    }
                    if ( v64 && v18[860] ) /*0x4d2148*/
                      v59 = (int)v64; /*0x4d2152*/
                    else
                      v59 = *(_DWORD *)&stru_87F5F0.__pad_58[120]; /*0x4d215e*/
                    v65 = *(_DWORD *)(*(_DWORD *)(v4 + 96) + 16 * j + 12); /*0x4d216d*/
                    if ( v18[873] ) /*0x4d2171*/
                    {
                      v84 = *v36; /*0x4d2182*/
                      v42 = *(_DWORD *)(v4 + 60); /*0x4d2189*/
                      v55 = v40; /*0x4d2191*/
                      v85 = *(_DWORD *)(v4 + 56); /*0x4d2192*/
                      v54 = 0; /*0x4d2196*/
                    }
                    else
                    {
                      v84 = *v36; /*0x4d21a0*/
                      v42 = *(_DWORD *)(v4 + 60); /*0x4d21a7*/
                      v55 = v40; /*0x4d21af*/
                      v85 = *(_DWORD *)(v4 + 56); /*0x4d21b0*/
                      v54 = 2; /*0x4d21b4*/
                    }
                    v52 = v65 - ZCoordToScreenY(v42) - 2; /*0x4d21d0*/
                    DrawToSurfaceSHP( /*0x4d21ea*/
                      (int)g_DSurface_Hidden_2,
                      v59,
                      v66,
                      v69,
                      &v77,
                      (int *)this,
                      11776,
                      0,
                      v52,
                      v54,
                      v55,
                      0,
                      0,
                      0,
                      0,
                      0);
                  }
                }
                else
                {
                  v19 = (int *)(v4 + 52); /*0x4d1cba*/
                  v20 = *(_DWORD *)(v4 + 56); /*0x4d1cc4*/
                  v109[0] = *(_DWORD *)(v4 + 52) - 128; /*0x4d1cc7*/
                  v21 = *(_DWORD *)(v4 + 60); /*0x4d1cd5*/
                  v109[1] = v20 - 128; /*0x4d1cd8*/
                  v109[2] = v21; /*0x4d1cee*/
                  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v109, &v79); /*0x4d1cf5*/
                  v105[0] = *(_DWORD *)(v4 + 52); /*0x4d1cfe*/
                  v105[1] = *(_DWORD *)(v4 + 56); /*0x4d1d10*/
                  v105[2] = *(_DWORD *)(v4 + 60); /*0x4d1d1f*/
                  v60 = (int *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v105); /*0x4d1d30*/
                  v22 = (char *)DSurface_ViewBounds.field_4 - (char *)this->?; /*0x4d1d41*/
                  v23 = v18[5889]; /*0x4d1d49*/
                  v79 += DSurface_ViewBounds.field_0 - (unsigned int)this->AbstractClass; /*0x4d1d4f*/
                  v24 = v22 + v80; /*0x4d1d57*/
                  v80 += v22; /*0x4d1d5b*/
                  if ( v23 ) /*0x4d1d5f*/
                    goto LABEL_49; /*0x4d1d5f*/
                  v71 = *((_DWORD *)v18 + 1352); /*0x4d1d6f*/
                  v83[0] = v79; /*0x4d1d77*/
                  v83[1] = v24; /*0x4d1d7b*/
                  v25 = (void *)(v24 + *(__int16 *)(v66 + 4) / 2); /*0x4d1d88*/
                  v88[0] = (int)this->AbstractClass; /*0x4d1d8e*/
                  v88[1] = (int)this->?; /*0x4d1d95*/
                  v88[2] = (int)this->?; /*0x4d1d9c*/
                  vtable3 = this->?; /*0x4d1da5*/
                  if ( (int)vtable3 > (int)v25 ) /*0x4d1dac*/
                    vtable3 = v25; /*0x4d1dae*/
                  v73 = *((_DWORD *)v18 + 1356) + 144; /*0x4d1dc4*/
                  v75 = *((_DWORD *)v18 + 1357) + 172; /*0x4d1dd3*/
                  v57 = (BuildingTypeClass::GetFoundationHeight((int *)v18, 0) << 8) - 256; /*0x4d1de6*/
                  v97[0] = (BuildingTypeClass::GetFoundationWidth((BuildingTypeClass *)v18) << 8) - 256; /*0x4d1dfe*/
                  v97[1] = v57; /*0x4d1e18*/
                  v26 = TacticalClass::AdjustForZShapeMove(v111, v97); /*0x4d1e1f*/
                  v74 = v73 - *v26; /*0x4d1e2e*/
                  v27 = *v19; /*0x4d1e3b*/
                  v76 = v75 - v26[1]; /*0x4d1e3d*/
                  v92 = (int)dword_89DDBC; /*0x4d1e46*/
                  v28 = *(_DWORD *)(v4 + 56); /*0x4d1e4d*/
                  v84 = v27; /*0x4d1e50*/
                  v85 = v28; /*0x4d1e54*/
                  v29 = ZCoordToScreenY(*(_DWORD *)(v4 + 60)); /*0x4d1e5b*/
                  v30 = *(_DWORD *)(v4 + 56); /*0x4d1e63*/
                  v99[0] = *v19; /*0x4d1e68*/
                  v58 = -v29; /*0x4d1e76*/
                  v31 = *(_DWORD *)(v4 + 60); /*0x4d1e7a*/
                  v99[1] = v30; /*0x4d1e83*/
                  v99[2] = v31; /*0x4d1e8a*/
                  v32 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v99); /*0x4d1e91*/
                  v33 = v60; /*0x4d1ea4*/
                  v34 = *((__int16 *)v18 + 2724) + *(__int16 *)v32->CellClass_field_10A; /*0x4d1ea8*/
                  if ( !v60[13] ) /*0x4d1eaa*/
                  {
                    TacticalClass::SetView(v60, 0, 0x10000, 0, 1000, 1000, 1000); /*0x4d1ec9*/
                    v33 = v60; /*0x4d1ece*/
                  }
                  if ( v18[5890] ) /*0x4d1ed2*/
                    v61 = (int *)v33[13]; /*0x4d1edf*/
                  else
                    v61 = v64; /*0x4d1ee9*/
                  if ( (int)vtable3 > 0 ) /*0x4d1ef6*/
                  {
                    if ( v70 ) /*0x4d1f02*/
                      DrawToSurfaceSHP( /*0x4d1f3e*/
                        (int)g_DSurface_Hidden_2,
                        (int)v61,
                        v66,
                        v69,
                        v83,
                        v88,
                        19968,
                        0,
                        v58 - 2,
                        0,
                        v34,
                        0,
                        0,
                        0,
                        0,
                        0);
                    else
                      DrawToSurfaceSHP( /*0x4d1fbe*/
                        (int)g_DSurface_Hidden_2,
                        (int)v61,
                        v66,
                        v69,
                        v83,
                        v88,
                        19968,
                        0,
                        v58 + v71 - 2,
                        2,
                        v34,
                        0,
                        v92,
                        0,
                        v74,
                        v76);
                    DrawToSurfaceSHP( /*0x4d1f6e*/
                      (int)g_DSurface_Hidden_2,
                      (int)v61,
                      v66,
                      v69 + *(__int16 *)(v66 + 6) / 2,
                      v83,
                      v88,
                      19969,
                      0,
                      v58 - 2,
                      0,
                      1000,
                      0,
                      0,
                      0,
                      0,
                      0);
                  }
                  v35 = *((_DWORD *)v18 + 1350); /*0x4d2011*/
                  if ( v35 ) /*0x4d2019*/
                    DrawToSurfaceSHP( /*0x4d2048*/
                      (int)g_DSurface_Hidden_2,
                      (int)v61,
                      v35,
                      v69,
                      &v79,
                      (int *)this,
                      19968,
                      0,
                      v58 - 3,
                      0,
                      v34,
                      0,
                      0,
                      0,
                      0,
                      0);
                }
              }
              break; /*0x4d21fd*/
            case 0x14: /*0x4d19bd*/
              v108[0] = *(_DWORD *)(v4 + 52); /*0x4d19ca*/
              v108[1] = *(_DWORD *)(v4 + 56); /*0x4d19dc*/
              v108[2] = *(_DWORD *)(v4 + 60); /*0x4d19eb*/
              v6 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v108); /*0x4d19fa*/
              v7 = *(_DWORD *)&v6->__pad_28[28]; /*0x4d1a00*/
              powerup = (unsigned __int8)v6->powerup; /*0x4d1a03*/
              *(_DWORD *)&v6->__pad_28[28] = *(_DWORD *)(v4 + 36); /*0x4d1a09*/
              v62 = powerup; /*0x4d1a0f*/
              v6->powerup = *(_BYTE *)(v4 + 44); /*0x4d1a13*/
              Coord::Subtract( /*0x4d1a5b*/
                (Coord *)v106,
                (((SLOWORD(v6->smudgeTypeIndex) << 8) + 128) / 256) << 8,
                (((SHIWORD(v6->smudgeTypeIndex) << 8) + 128) / 256) << 8,
                0);
              v101[0] = v106[0]; /*0x4d1a75*/
              v101[1] = v106[1]; /*0x4d1a7c*/
              v101[2] = v106[2]; /*0x4d1a96*/
              Coord::To_Screen((Coord *)g_TacticalClass_Instance, v101, v87); /*0x4d1a9d*/
              v87[0] -= 30; /*0x4d1aaf*/
              BuildingClass::Draw_0((int)v6, v87, (int *)this); /*0x4d1ab5*/
              TacticalClass::DrawBuildingPlacement((int)v6, v87, (int *)this); /*0x4d1ac2*/
              *(_DWORD *)&v6->__pad_28[28] = v7; /*0x4d1ac7*/
              v6->powerup = v62; /*0x4d1ace*/
              break; /*0x4d1ad4*/
            case 0x1D: /*0x4d19bd*/
              vtable1 = (char *)this->?; /*0x4d220d*/
              v44 = this->AbstractClass; /*0x4d2210*/
              v45 = g_TacticalClass_Instance[45]; /*0x4d2218*/
              v90 = g_TacticalClass_Instance[44]; /*0x4d221e*/
              v46 = *(_DWORD *)(v4 + 68); /*0x4d2225*/
              v91 = v45; /*0x4d2228*/
              v47 = *(_DWORD *)(v4 + 64) - *(_DWORD *)&v90 + DSurface_ViewBounds.field_0 + 30; /*0x4d2249*/
              v98[1] = (char *)DSurface_ViewBounds.field_4 + v46 - *(_DWORD *)&v91 - vtable1; /*0x4d225f*/
              v48 = *(_DWORD *)(v4 + 84); /*0x4d2266*/
              v98[0] = v47 - (_DWORD)v44; /*0x4d2269*/
              v49 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * v48) + 156))(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * v48)); /*0x4d227b*/
              if ( v49 ) /*0x4d227f*/
              {
                v104[0] = *(_DWORD *)(v4 + 52); /*0x4d228c*/
                v104[1] = *(_DWORD *)(v4 + 56); /*0x4d229e*/
                v104[2] = *(_DWORD *)(v4 + 60); /*0x4d22a8*/
                v50 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v104); /*0x4d22b4*/
                v84 = *(_DWORD *)(v4 + 52); /*0x4d22bd*/
                v51 = *(_DWORD *)(v4 + 60); /*0x4d22c4*/
                v85 = *(_DWORD *)(v4 + 56); /*0x4d22c7*/
                v72 = v50; /*0x4d22cd*/
                v56 = *(__int16 *)v50->CellClass_field_10C; /*0x4d22dd*/
                v53 = -ZCoordToScreenY(v51); /*0x4d22f4*/
                DrawToSurfaceSHP( /*0x4d230c*/
                  (int)g_DSurface_Hidden_2,
                  *(_DWORD *)&v72->__pad_28[12],
                  v49,
                  *(_DWORD *)(v4 + 88),
                  v98,
                  (int *)this,
                  3584,
                  0,
                  v53,
                  2,
                  v56,
                  0,
                  0,
                  0,
                  0,
                  0);
              }
              break; /*0x4d230c*/
            case 0x24: /*0x4d19bd*/
              v9 = (_DWORD *)(v4 + 52); /*0x4d1adc*/
              v63 = **(_DWORD **)(v4 + 96); /*0x4d1ae5*/
              v107[0] = *(_DWORD *)(v4 + 52); /*0x4d1ae9*/
              v107[1] = *(_DWORD *)(v4 + 56); /*0x4d1afb*/
              v107[2] = *(_DWORD *)(v4 + 60); /*0x4d1b05*/
              v10 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v107); /*0x4d1b16*/
              v67 = *(_DWORD *)(*(_DWORD *)(v4 + 96) + 4); /*0x4d1b1e*/
              v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v63 + 156))(v63); /*0x4d1b2e*/
              v103[0] = *v9; /*0x4d1b34*/
              v103[1] = v9[1]; /*0x4d1b49*/
              v103[2] = v9[2]; /*0x4d1b5b*/
              Coord::To_Screen((Coord *)g_TacticalClass_Instance, v103, &v81); /*0x4d1b62*/
              v12 = (char *)DSurface_ViewBounds.field_4 - (char *)this->?; /*0x4d1b79*/
              v13 = *v9; /*0x4d1b81*/
              v81 += DSurface_ViewBounds.field_0 - (unsigned int)this->AbstractClass; /*0x4d1b83*/
              v14 = v12 + v82; /*0x4d1b8b*/
              v85 = v9[1]; /*0x4d1b90*/
              v15 = v9[2]; /*0x4d1b94*/
              v82 = v14; /*0x4d1b97*/
              v84 = v13; /*0x4d1b9b*/
              v16 = -ZCoordToScreenY(v15); /*0x4d1ba9*/
              if ( !*(_DWORD *)&v10->__pad_28[12] ) /*0x4d1ba6*/
                TacticalClass::SetView(v10->mapCoords, 0, 0x10000, 0, 1000, 1000, 1000); /*0x4d1bc9*/
              DrawToSurfaceSHP( /*0x4d1c00*/
                (int)g_DSurface_Hidden_2,
                *(_DWORD *)&v10->__pad_28[12],
                v11,
                v67,
                &v81,
                (int *)this,
                19968,
                0,
                v16 - 4,
                2,
                *(__int16 *)v10->CellClass_field_10C,
                0,
                0,
                0,
                0,
                0);
              if ( byte_822CF1 ) /*0x4d1c0c*/
                DrawToSurfaceSHP( /*0x4d1c45*/
                  (int)g_DSurface_Hidden_2,
                  *(_DWORD *)&v10->__pad_28[12],
                  v11,
                  v67 + *(__int16 *)(v11 + 6) / 2,
                  &v81,
                  (int *)this,
                  17921,
                  0,
                  v16 - 2,
                  0,
                  1000,
                  0,
                  0,
                  0,
                  0,
                  0);
              break; /*0x4d1c45*/
            default:
              break;
          }
        }
      }
LABEL_49:
      result = g_MissionState; /*0x4d2311*/
      v3 = i + 1; /*0x4d231a*/
    }
  }
  return result; /*0x4d2329*/
}



// ==== 0x004D2370  ObjectClass::MarkAllFootOccupancies  this=ObjectClass  sig=csp ====
int MarkAllFootOccupancies(ObjectClass *this)
{
  int result; // eax
  int v2; // esi
  int v3; // edi
  _WORD *v4; // esi
  int v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  CellClass *v8; // eax
  int v9; // [esp+8h] [ebp-1Ch]
  int i; // [esp+Ch] [ebp-18h]
  int v11; // [esp+10h] [ebp-14h] BYREF
  _BYTE v12[4]; // [esp+14h] [ebp-10h] BYREF
  _DWORD v13[3]; // [esp+18h] [ebp-Ch] BYREF

  result = g_FootClassConfig; /*0x4d2373*/
  v2 = 0; /*0x4d2379*/
  for ( i = 0; v2 < g_FootClassConfig; i = v2 ) /*0x4d2381*/
  {
    v3 = *((_DWORD *)dword_8B3D14 + v2); /*0x4d2399*/
    if ( *(_DWORD *)(v3 + 48) == 6 /*0x4d23ae*/
      && (*(int (__thiscall **)(_DWORD, _DWORD))(***(_DWORD ***)(v3 + 96) + 144))(**(_DWORD **)(v3 + 96), 0) )
    {
      if ( *(_DWORD *)(v3 + 48) == 6 ) /*0x4d23bf*/
        v4 = (_WORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(***(_DWORD ***)(v3 + 96) + 144))( /*0x4d23d0*/
                        **(_DWORD **)(v3 + 96),
                        0);
      else
        v4 = 0; /*0x4d23d4*/
      v5 = *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 96))(v3, v12); /*0x4d23e2*/
      v11 = v5; /*0x4d23e4*/
      while ( *v4 != 0x7FFF || v4[1] != 0x7FFF ) /*0x4d23f9*/
      {
        LOWORD(v9) = v5 + *v4; /*0x4d2408*/
        HIWORD(v9) = HIWORD(v5) + v4[1]; /*0x4d240d*/
        v11 = v9; /*0x4d241c*/
        v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v11); /*0x4d2420*/
        v4 += 2; /*0x4d2436*/
        v6[80] |= 0x400000u; /*0x4d2439*/
      }
      v2 = i; /*0x4d2478*/
    }
    else
    {
      v7 = (_DWORD *)(v3 + 52); /*0x4d243d*/
      v13[0] = *v7; /*0x4d2442*/
      v13[1] = v7[1]; /*0x4d244e*/
      v13[2] = v7[2]; /*0x4d2455*/
      v8 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v13); /*0x4d245e*/
      v8->flags[0] |= 0x400000u; /*0x4d2474*/
    }
    result = g_FootClassConfig; /*0x4d247c*/
    ++v2; /*0x4d2481*/
  }
  return result; /*0x4d2491*/
}



// ==== 0x004D24A0  FoggedObjectClass::SaveToINI  this=FoggedObjectClass  sig=csp ====
int __stdcall FoggedObjectClass::SaveToINI(FoggedObjectClass *this, int *a2, int a3)
{
  int result; // eax
  int v4; // edx
  int v5; // ebp
  int v6; // edi

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x4d24b3*/
  if ( result >= 0 ) /*0x4d24ba*/
  {
    v4 = *a2; /*0x4d24bf*/
    a3 = *((_DWORD *)this + 27); /*0x4d24cb*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a2, &a3, 4, 0); /*0x4d24cf*/
    if ( result >= 0 ) /*0x4d24d4*/
    {
      v5 = 0; /*0x4d24da*/
      if ( a3 > 0 ) /*0x4d24de*/
      {
        v6 = 0; /*0x4d24e0*/
        do /*0x4d2500*/
        {
          if ( (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, v6 + this->nextArrayIndex, 16, 0) < 0 ) /*0x4d24f4*/
            break; /*0x4d24f4*/
          ++v5; /*0x4d24fa*/
          v6 += 16; /*0x4d24fb*/
        }
        while ( v5 < a3 ); /*0x4d2500*/
      }
      return 0; /*0x4d2502*/
    }
  }
  return result; /*0x4d2504*/
}



// ==== 0x004D2510  FoggedObjectClass::LoadTypeData  this=FoggedObjectClass  sig=csp ====
int __stdcall FoggedObjectClass::LoadTypeData(FoggedObjectClass *this, int a2)
{
  int *v2; // ebx
  FoggedObjectClass *v3; // edi
  int result; // eax
  int v5; // edx
  int v6; // ecx
  void *vtable1; // ecx
  int uniqueId; // eax
  void *vtable3; // eax
  int v10; // edx
  _DWORD *v11; // eax
  int v12; // esi
  int v13; // ebx
  _DWORD *v14; // ebp
  signed int i; // eax
  _DWORD *v16; // edx
  int v17; // [esp+2Ch] [ebp-14h] BYREF
  int v18; // [esp+30h] [ebp-10h] BYREF
  int v19; // [esp+34h] [ebp-Ch]
  int v20; // [esp+38h] [ebp-8h]
  int v21; // [esp+3Ch] [ebp-4h]

  v2 = (int *)a2; /*0x4d2514*/
  v3 = this; /*0x4d251b*/
  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x4d2521*/
  if ( result < 0 ) /*0x4d252a*/
    return result; /*0x4d252a*/
  if ( v3 ) /*0x4d2532*/
  {
    AbstractClass::InitVtables((AbstractClass *)v3, (int)&a2); /*0x4d253b*/
    FoggedObject::DrawVector_Constructor((FoggedObject *)v3[1].Cell, 0, 0); /*0x4d2547*/
    v3[1].Cell[0] = (int)&DynamicVectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d254c*/
    v3[2].? = 10; /*0x4d2552*/
    v3[2].? = 0; /*0x4d2559*/
    v3->AbstractClass = &FoggedObjectClass::`vftable'; /*0x4d255c*/
    v3->? = &FoggedObjectClass::`vftable'; /*0x4d2562*/
    v3->? = &FoggedObjectClass::`vftable'; /*0x4d2569*/
    v3->? = &FoggedObjectClass::`vftable'; /*0x4d2570*/
  }
  ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v3->House); /*0x4d2580*/
  v5 = *v2; /*0x4d2585*/
  this = 0; /*0x4d2590*/
  result = (*(int (__stdcall **)(int *, FoggedObjectClass **, int, _DWORD))(v5 + 12))(v2, &this, 4, 0); /*0x4d2594*/
  a2 = result; /*0x4d2599*/
  if ( result < 0 ) /*0x4d259d*/
    return result; /*0x4d259d*/
  v17 = 0; /*0x4d25a7*/
  if ( (int)this <= 0 ) /*0x4d25ad*/
  {
LABEL_14:
    v17 = *(_DWORD *)(*((int (__thiscall **)(FoggedObjectClass *, int *))v3->AbstractClass + 24))(v3, &v17); /*0x4d2665*/
    v12 = 74 * (SHIWORD(v17) - (((__int16)v17 + SHIWORD(v17)) << 9) - (__int16)v17) /*0x4d26a1*/
        - (unsigned int)v3[1].AbstractClass
        + 0x7FFFFFFF;
    if ( (int)(g_MissionState + 1) <= dword_8B3CC8 ) /*0x4d26aa*/
    {
LABEL_22:
      *((_DWORD *)g_MissionPool + 2 * g_MissionState) = v12; /*0x4d2745*/
      *((_DWORD *)g_MissionPool + 2 * g_MissionState + 1) = v3; /*0x4d275f*/
      byte_8B3CCC = 0; /*0x4d2769*/
      ++g_MissionState; /*0x4d2770*/
      return a2; /*0x4d2770*/
    }
    if ( dword_8B3CC8 ) /*0x4d26b2*/
    {
      v13 = dword_8B3CC8; /*0x4d26bb*/
      if ( dword_8B3CC8 < 0 ) /*0x4d26bf*/
        return a2; /*0x4d26bf*/
    }
    else
    {
      v13 = 10; /*0x4d26b4*/
    }
    v17 = v13 + dword_8B3CC8; /*0x4d26c7*/
    v14 = (_DWORD *)__2_YAPAXI_Z(8 * (v13 + dword_8B3CC8)); /*0x4d26d8*/
    if ( v14 ) /*0x4d26df*/
    {
      --v17; /*0x4d26f0*/
      for ( i = 0; i < (int)g_MissionState; v14[2 * i - 1] = v16[1] ) /*0x4d26f8*/
      {
        v16 = (char *)g_MissionPool + 8 * i++; /*0x4d2700*/
        v14[2 * i - 2] = *v16; /*0x4d2706*/
      }
      __3_YAXPAX_Z(g_MissionPool); /*0x4d2721*/
      g_MissionPool = v14; /*0x4d2730*/
      dword_8B3CC8 += v13; /*0x4d2736*/
      dword_8B3CD0 = 0; /*0x4d273b*/
      goto LABEL_22; /*0x4d273b*/
    }
    return a2; /*0x4d2775*/
  }
  while ( 1 ) /*0x4d25b3*/
  {
    v6 = *v2; /*0x4d25b3*/
    v18 = 0; /*0x4d25be*/
    v19 = 0; /*0x4d25c2*/
    LOBYTE(v20) = 0; /*0x4d25c6*/
    v21 = 0; /*0x4d25cb*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v6 + 12))(v2, &v18, 16, 0); /*0x4d25cf*/
    a2 = result; /*0x4d25d4*/
    if ( result < 0 ) /*0x4d25d8*/
      return result; /*0x4d2779*/
    vtable1 = v3[2].?; /*0x4d25de*/
    if ( (int)v3[2].? < (int)vtable1 /*0x4d2605*/
      || (BYTE1(v3[2].?) || !vtable1)
      && (uniqueId = v3[2].?, uniqueId > 0)
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v3[1].Cell[0] + 8))(
           v3[1].Cell,
           (int)vtable1 + uniqueId,
           0) )
    {
      vtable3 = v3[2].?; /*0x4d260c*/
      v10 = v18; /*0x4d260f*/
      v3[2].? = (char *)vtable3 + 1; /*0x4d2616*/
      v11 = (char *)v3[2].AbstractClass + 16 * (_DWORD)vtable3; /*0x4d261f*/
      *v11 = v10; /*0x4d2621*/
      v11[1] = v19; /*0x4d2627*/
      v11[2] = v20; /*0x4d262e*/
      v11[3] = v21; /*0x4d2635*/
    }
    ObjectPtr::RegisterForTracking( /*0x4d264b*/
      (int)&SwizzleManagerClass_Instance,
      (int *)v3[2].AbstractClass + 4 * (int)v3[2].? - 4);
    if ( ++v17 >= (int)this ) /*0x4d265f*/
      goto LABEL_14; /*0x4d265f*/
  }
}



// ==== 0x004D2790  CellClass::recalcPassability  this=CellClass  sig=csp ====
int __thiscall sub_4D2790(int this)
{
  if ( *(_DWORD *)(this + 48) == 6 ) /*0x4d2794*/
    return (*(int (__thiscall **)(_DWORD, _DWORD))(***(_DWORD ***)(this + 96) + 144))(**(_DWORD **)(this + 96), 0); /*0x4d279f*/
  else
    return 0; /*0x4d27a6*/
}



// ==== 0x004D27B0  FoggedObjectClass::GetTypeIdentifier  this=FoggedObjectClass  sig=csp ====
int FoggedObjectClass::GetTypeIdentifier(FoggedObjectClass *this)
{
  return 61; /*0x4d27b5*/
}



// ==== 0x004D27C0  FoggedObjectClass::GetObjectSize  this=FoggedObjectClass  sig=csp ====
int FoggedObjectClass::GetObjectSize(FoggedObjectClass *this)
{
  return 120; /*0x4d27c5*/
}



// ==== 0x004D27D0  FoggedObjectClass::GetClassIdentifier  this=FoggedObjectClass  sig=csp ====
int __stdcall FoggedObjectClass::GetClassIdentifier(FoggedObjectClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x4d27d6*/
    return -2147467261; /*0x4d27d8*/
  *a2 = 474417934; /*0x4d27e6*/
  a2[1] = 299002327; /*0x4d27ee*/
  a2[2] = 1610674872; /*0x4d27f7*/
  a2[3] = unk_7E999C; /*0x4d2800*/
  return 0; /*0x4d27dd*/
}



// ==== 0x004D2810  FoggedObjectClass::PowerDrainUpdate  this=FoggedObjectClass  sig=csp ====
int __thiscall FoggedObjectClass::PowerDrainUpdate(FoggedObjectClass *this, int a2)
{
  AbstractClass::ProcessPower((AbstractClass *)this); /*0x4d2819*/
  Power::TimerProcess(this->LastSight); /*0x4d2824*/
  Power::TimerProcess(this->Cell[0]); /*0x4d282f*/
  Power::TimerProcess(this->vtable4); /*0x4d283a*/
  Power::TimerProcess(*((_DWORD *)this + 13)); /*0x4d2845*/
  Power::TimerProcess(*((_DWORD *)this + 14)); /*0x4d2850*/
  Power::TimerProcess(*((_DWORD *)this + 15)); /*0x4d285b*/
  Power::TimerProcess(this->Count); /*0x4d2866*/
  Power::TimerProcess(this->q011); /*0x4d2871*/
  Power::TimerProcess(this->IsInitialized); /*0x4d287c*/
  Power::TimerProcess(this->IsAllocated); /*0x4d2887*/
  Power::TimerProcess(this->abstractFlags); /*0x4d2892*/
  Power::TimerProcess(*((_DWORD *)this + 21)); /*0x4d289d*/
  Power::TimerProcess(*((_DWORD *)this + 22)); /*0x4d28a8*/
  return Power::TimerProcess(*((_DWORD *)this + 27)); /*0x4d28b8*/
}



// ==== 0x004D28C0  TechnoClass::recalcThreat  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::recalcThreat(TechnoClass *this)
{
  if ( this->? <= 0 ) /*0x4d28c5*/
    return 0; /*0x4d28cd*/
  else
    return *(_DWORD *)this->?[4]; /*0x4d28ca*/
}



// ==== 0x004D28D0  FoggedObjectClass::CheckVisibility  this=FoggedObjectClass  sig=csp ====
_DWORD *__thiscall FoggedObjectClass::CheckVisibility(FoggedObjectClass *this, _DWORD *a2)
{
  int v3; // [esp+0h] [ebp-4h]

  LOWORD(v3) = *((_DWORD *)this + 13) / 256; /*0x4d28e0*/
  HIWORD(v3) = *((_DWORD *)this + 14) / 256; /*0x4d28f4*/
  *a2 = v3; /*0x4d2901*/
  return a2; /*0x4d2904*/
}



// ==== 0x004D2910  FoggedObjectClass::ddtor  this=FoggedObjectClass  sig=csp ====
void *__thiscall FoggedObjectClass::ddtor(FoggedObjectClass *this, char a2)
{
  DestructFoggedObjectClass((int)this); /*0x4d2913*/
  if ( (a2 & 1) != 0 ) /*0x4d291d*/
    __3_YAXPAX_Z(this); /*0x4d2920*/
  return this; /*0x4d292a*/
}



// ==== 0x004D2930  ?$DynamicVectorClass@UDrawRecord@FoggedObjectClass@@::getMissionState  this=DynamicVector  sig=csp ====
void __thiscall AbstractClass::sub_4D2930(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4d2936*/
  *(_DWORD *)(this + 16) = 0; /*0x4d2939*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4d2940*/
  {
    __3_YAXPAX_Z(v2); /*0x4d2946*/
    *(_DWORD *)(this + 4) = 0; /*0x4d294e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4d2951*/
  *(_DWORD *)(this + 8) = 0; /*0x4d2954*/
}



// ==== 0x004D2960  ?$DynamicVectorClass@UDrawRecord@FoggedObjectClass@@::setMissionState  this=DynamicVector  sig=csp ====
unsigned int __thiscall AbstractClass::sub_4D2960(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4d2960*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 4; /*0x4d2975*/
  else
    return 0; /*0x4d2967*/
}



// ==== 0x004D2980  _VectorClass_UDrawRecord_FoggedObjectClass::Seek  this=VectorClass  sig=csp ====
int __thiscall FoggedObject_DrawVector::Seek(_VectorClass_UDrawRecord_FoggedObjectClass *this, int a2, int a3)
{
  int v3; // edx

  v3 = *(_DWORD *)&this->m_1[3] + 16 * a3; /*0x4d298a*/
  *(_DWORD *)a2 = *(_DWORD *)v3; /*0x4d2992*/
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(v3 + 4); /*0x4d2997*/
  *(_BYTE *)(a2 + 8) = *(_BYTE *)(v3 + 8); /*0x4d299d*/
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(v3 + 12); /*0x4d29a3*/
  return a2; /*0x4d29a6*/
}



// ==== 0x004D29B0  _VectorClass_UDrawRecord_FoggedObjectClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall FoggedObjectClass::AddRef(_VectorClass_UDrawRecord_FoggedObjectClass *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x4d29bb*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4d29c0*/
  {
    v3 = 0; /*0x4d29c2*/
    if ( m_8 <= 0 ) /*0x4d29c6*/
      return 1; /*0x4d29f6*/
    v4 = *(_DWORD *)(a2 + 4); /*0x4d29c8*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x4d29cb*/
    v6 = (_DWORD *)(v4 + 4); /*0x4d29ce*/
    v7 = v4 - (_DWORD)v5; /*0x4d29d1*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x4d29e3*/
    {
      ++v3; /*0x4d29e5*/
      v6 += 4; /*0x4d29e6*/
      v5 += 4; /*0x4d29e9*/
      if ( v3 >= m_8 ) /*0x4d29ee*/
        return 1; /*0x4d29ee*/
    }
  }
  return 0; /*0x4d29f0*/
}



// ==== 0x004D2A10  _VectorClass_UDrawRecord_FoggedObjectClass::Release  this=VectorClass  sig=csp ====
char __thiscall FoggedObject_DrawVector::Release(_VectorClass_UDrawRecord_FoggedObjectClass *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v13; // eax
  _DWORD *v14; // edx
  char *v15; // ebx

  v3 = a2; /*0x4d2a12*/
  if ( a2 ) /*0x4d2a1e*/
  {
    v5 = a3; /*0x4d2a24*/
    LOBYTE(this->m_C) = 0; /*0x4d2a28*/
    if ( a3 ) /*0x4d2a2d*/
    {
      if ( a2 - 1 >= 0 ) /*0x4d2a6a*/
      {
        v9 = a3 + 8; /*0x4d2a6c*/
        v10 = a2; /*0x4d2a6f*/
        do /*0x4d2a7f*/
        {
          *((_DWORD *)v9 - 2) = 0; /*0x4d2a70*/
          *((_DWORD *)v9 - 1) = 0; /*0x4d2a73*/
          *v9 = 0; /*0x4d2a76*/
          *((_DWORD *)v9 + 1) = 0; /*0x4d2a78*/
          v9 += 16; /*0x4d2a7b*/
          --v10; /*0x4d2a7e*/
        }
        while ( v10 ); /*0x4d2a7f*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(16 * a2); /*0x4d2a35*/
      if ( v6 ) /*0x4d2a3f*/
      {
        if ( a2 - 1 >= 0 ) /*0x4d2a46*/
        {
          v7 = v6 + 8; /*0x4d2a48*/
          v8 = a2; /*0x4d2a4b*/
          do /*0x4d2a5b*/
          {
            *(_DWORD *)(v7 - 8) = 0; /*0x4d2a4c*/
            *(_DWORD *)(v7 - 4) = 0; /*0x4d2a4f*/
            *(_BYTE *)v7 = 0; /*0x4d2a52*/
            *(_DWORD *)(v7 + 4) = 0; /*0x4d2a54*/
            v7 += 16; /*0x4d2a57*/
            --v8; /*0x4d2a5a*/
          }
          while ( v8 ); /*0x4d2a5b*/
        }
        v5 = (char *)v6; /*0x4d2a5d*/
      }
      else
      {
        v5 = 0; /*0x4d2a61*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x4d2a83*/
    if ( v5 ) /*0x4d2a87*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4d2a92*/
      {
        m_8 = this->m_8; /*0x4d2a97*/
        if ( a2 < m_8 ) /*0x4d2a9c*/
          m_8 = a2; /*0x4d2a9e*/
        if ( m_8 > 0 ) /*0x4d2aa2*/
        {
          v13 = 0; /*0x4d2aa4*/
          do /*0x4d2aca*/
          {
            v14 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + v13); /*0x4d2aab*/
            v15 = &v5[v13]; /*0x4d2aad*/
            v13 += 16; /*0x4d2ab0*/
            --m_8; /*0x4d2ab3*/
            *(_DWORD *)v15 = *v14; /*0x4d2ab6*/
            *((_DWORD *)v15 + 1) = v14[1]; /*0x4d2abb*/
            *((_DWORD *)v15 + 2) = v14[2]; /*0x4d2ac1*/
            *((_DWORD *)v15 + 3) = v14[3]; /*0x4d2ac7*/
          }
          while ( m_8 ); /*0x4d2aca*/
          v3 = a2; /*0x4d2acc*/
        }
        if ( BYTE1(this->m_C) ) /*0x4d2ad2*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4d2adb*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x4d2ae3*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x4d2aee*/
      this->m_8 = v3; /*0x4d2af4*/
      BYTE1(this->m_C) = a3 == 0; /*0x4d2af7*/
      return 1; /*0x4d2afd*/
    }
    else
    {
      return 0; /*0x4d2a8c*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_UDrawRecord_FoggedObjectClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4d2b07*/
    return 1; /*0x4d2b0d*/
  }
}



// ==== 0x004D2B20  _VectorClass_UDrawRecord_FoggedObjectClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall FoggedObject_DrawVector::ddtor(_VectorClass_UDrawRecord_FoggedObjectClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4d2b2d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4d2b33*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4d2b3b*/
  }
  BYTE1(this->m_C) = 0; /*0x4d2b3e*/
  this->m_8 = 0; /*0x4d2b41*/
}



// ==== 0x004D2B50  _VectorClass_UDrawRecord_FoggedObjectClass::Read  this=VectorClass  sig=csp ====
int __thiscall FoggedObject_DrawVector::Read(_VectorClass_UDrawRecord_FoggedObjectClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4d2b50*/
    return 0; /*0x4d2b5e*/
  m_8 = this->m_8; /*0x4d2b64*/
  result = 0; /*0x4d2b67*/
  if ( m_8 <= 0 ) /*0x4d2b6b*/
    return -1; /*0x4d2b8c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 4 ) /*0x4d2b71*/
  {
    if ( ++result >= m_8 ) /*0x4d2b8a*/
      return -1; /*0x4d2b8a*/
  }
  return result; /*0x4d2b5b*/
}



// ==== 0x004D2BA0  _VectorClass_UDrawRecord_FoggedObjectClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall FoggedObject_DrawVector::Write(_VectorClass_UDrawRecord_FoggedObjectClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4d2ba0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 4; /*0x4d2bb5*/
  else
    return 0; /*0x4d2ba7*/
}



// ==== 0x004D2BC0  _DynamicVectorClass_UDrawRecord_FoggedObjectClass::ResizeArray  this=DynamicVector  sig=csp ====
char __thiscall FoggedObjectClass::ResizeArray(
        _DynamicVectorClass_UDrawRecord_FoggedObjectClass *this,
        int a2,
        char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // edx
  char *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x4d2bc2*/
  if ( a2 ) /*0x4d2bce*/
  {
    v5 = a3; /*0x4d2bd4*/
    LOBYTE(this->m_C) = 0; /*0x4d2bd8*/
    if ( a3 ) /*0x4d2bdd*/
    {
      if ( a2 - 1 >= 0 ) /*0x4d2c1a*/
      {
        v9 = a3 + 8; /*0x4d2c1c*/
        v10 = a2; /*0x4d2c1f*/
        do /*0x4d2c2f*/
        {
          *((_DWORD *)v9 - 2) = 0; /*0x4d2c20*/
          *((_DWORD *)v9 - 1) = 0; /*0x4d2c23*/
          *v9 = 0; /*0x4d2c26*/
          *((_DWORD *)v9 + 1) = 0; /*0x4d2c28*/
          v9 += 16; /*0x4d2c2b*/
          --v10; /*0x4d2c2e*/
        }
        while ( v10 ); /*0x4d2c2f*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(16 * a2); /*0x4d2be5*/
      if ( v6 ) /*0x4d2bef*/
      {
        if ( a2 - 1 >= 0 ) /*0x4d2bf6*/
        {
          v7 = v6 + 8; /*0x4d2bf8*/
          v8 = a2; /*0x4d2bfb*/
          do /*0x4d2c0b*/
          {
            *(_DWORD *)(v7 - 8) = 0; /*0x4d2bfc*/
            *(_DWORD *)(v7 - 4) = 0; /*0x4d2bff*/
            *(_BYTE *)v7 = 0; /*0x4d2c02*/
            *(_DWORD *)(v7 + 4) = 0; /*0x4d2c04*/
            v7 += 16; /*0x4d2c07*/
            --v8; /*0x4d2c0a*/
          }
          while ( v8 ); /*0x4d2c0b*/
        }
        v5 = (char *)v6; /*0x4d2c0d*/
      }
      else
      {
        v5 = 0; /*0x4d2c11*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x4d2c33*/
    if ( !v5 ) /*0x4d2c37*/
      return 0; /*0x4d2cc7*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x4d2c3d*/
    {
      v11 = *(_DWORD *)&this->__pad_5[3]; /*0x4d2c42*/
      if ( a2 < v11 ) /*0x4d2c47*/
        v11 = a2; /*0x4d2c49*/
      if ( v11 > 0 ) /*0x4d2c4d*/
      {
        v12 = 0; /*0x4d2c4f*/
        do /*0x4d2c75*/
        {
          v13 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + v12); /*0x4d2c56*/
          v14 = &v5[v12]; /*0x4d2c58*/
          v12 += 16; /*0x4d2c5b*/
          --v11; /*0x4d2c5e*/
          *(_DWORD *)v14 = *v13; /*0x4d2c61*/
          *((_DWORD *)v14 + 1) = v13[1]; /*0x4d2c66*/
          *((_DWORD *)v14 + 2) = v13[2]; /*0x4d2c6c*/
          *((_DWORD *)v14 + 3) = v13[3]; /*0x4d2c72*/
        }
        while ( v11 ); /*0x4d2c75*/
        v3 = a2; /*0x4d2c77*/
      }
      if ( BYTE1(this->m_C) ) /*0x4d2c7d*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4d2c86*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4d2c8e*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x4d2c99*/
    *(_DWORD *)&this->__pad_5[3] = v3; /*0x4d2c9f*/
    BYTE1(this->m_C) = a3 == 0; /*0x4d2ca2*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_UDrawRecord_FoggedObjectClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4d2cab*/
  }
  v15 = *(_DWORD *)&this->__pad_5[3]; /*0x4d2cae*/
  if ( v15 < *(_DWORD *)this->__tail_10 ) /*0x4d2cb6*/
    *(_DWORD *)this->__tail_10 = v15; /*0x4d2cb8*/
  return 1; /*0x4d2cbb*/
}



// ==== 0x004D2CD0  _DynamicVectorClass_UDrawRecord_FoggedObjectClass::Read  this=DynamicVector  sig=csp ====
int __thiscall FoggedObjectClass::Read(_DynamicVectorClass_UDrawRecord_FoggedObjectClass *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(_DWORD *)this->__tail_10; /*0x4d2cd0*/
  result = 0; /*0x4d2cd5*/
  if ( v2 <= 0 ) /*0x4d2cdb*/
    return -1; /*0x4d2cfc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 4 ) /*0x4d2ce1*/
  {
    if ( ++result >= v2 ) /*0x4d2cfa*/
      return -1; /*0x4d2cfa*/
  }
  return result; /*0x4d2cff*/
}



// ==== 0x004D2D10  _VectorClass_UDrawRecord_FoggedObjectClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall FoggedObject_DrawVector::QueryInterface(_VectorClass_UDrawRecord_FoggedObjectClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4d2d13*/
  *(_DWORD *)this->__pad_0 = &VectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d2d16*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4d2d20*/
  {
    __3_YAXPAX_Z(v3); /*0x4d2d28*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4d2d30*/
  }
  BYTE1(this->m_C) = 0; /*0x4d2d3b*/
  this->m_8 = 0; /*0x4d2d41*/
  if ( (a2 & 1) != 0 ) /*0x4d2d48*/
    __3_YAXPAX_Z(this); /*0x4d2d4b*/
  return this->__pad_0; /*0x4d2d55*/
}



// ==== 0x004D2D60  _DynamicVectorClass_UDrawRecord_FoggedObjectClass::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall FoggedObjectClass::QueryInterface(_DynamicVectorClass_UDrawRecord_FoggedObjectClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4d2d63*/
  *(_DWORD *)this->__pad_0 = &VectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d2d66*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4d2d70*/
  {
    __3_YAXPAX_Z(v3); /*0x4d2d78*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4d2d80*/
  }
  BYTE1(this->m_C) = 0; /*0x4d2d8b*/
  *(_DWORD *)&this->__pad_5[3] = 0; /*0x4d2d91*/
  if ( (a2 & 1) != 0 ) /*0x4d2d98*/
    __3_YAXPAX_Z(this); /*0x4d2d9b*/
  return this->__pad_0; /*0x4d2da5*/
}



// ==== 0x004D2DB0  FoggedObject::DrawVector_Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall FoggedObject::DrawVector_Constructor(FoggedObject *this, int a2, int a3)
{
  AbstractClass *v4; // ebx
  int v5; // eax
  int v6; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // edx

  v4 = 0; /*0x4d2db9*/
  this->FoggedObject_field_0x4 = 0; /*0x4d2dbd*/
  this->Capacity = a2; /*0x4d2dc0*/
  this->IsInitialized = 1; /*0x4d2dc3*/
  this->IsAllocated = 0; /*0x4d2dc7*/
  *(_DWORD *)this->__pad_0 = &VectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d2dca*/
  if ( !a2 ) /*0x4d2dd0*/
    return this->__pad_0; /*0x4d2e38*/
  if ( !a3 ) /*0x4d2dd8*/
  {
    v8 = __2_YAPAXI_Z(16 * a2); /*0x4d2e07*/
    if ( v8 ) /*0x4d2e11*/
    {
      if ( a2 - 1 >= 0 ) /*0x4d2e18*/
      {
        v9 = v8 + 8; /*0x4d2e1a*/
        v10 = a2; /*0x4d2e1d*/
        do /*0x4d2e2d*/
        {
          *(_DWORD *)(v9 - 8) = 0; /*0x4d2e1e*/
          *(_DWORD *)(v9 - 4) = 0; /*0x4d2e21*/
          *(_BYTE *)v9 = 0; /*0x4d2e24*/
          *(_DWORD *)(v9 + 4) = 0; /*0x4d2e26*/
          v9 += 16; /*0x4d2e29*/
          --v10; /*0x4d2e2c*/
        }
        while ( v10 ); /*0x4d2e2d*/
      }
      v4 = (AbstractClass *)v8; /*0x4d2e2f*/
    }
    this->FoggedObject_field_0x4 = v4; /*0x4d2e31*/
    this->IsAllocated = 1; /*0x4d2e34*/
    return this->__pad_0; /*0x4d2e34*/
  }
  if ( a2 - 1 >= 0 ) /*0x4d2ddf*/
  {
    v5 = a3 + 8; /*0x4d2de1*/
    v6 = a2; /*0x4d2de4*/
    do /*0x4d2df4*/
    {
      *(_DWORD *)(v5 - 8) = 0; /*0x4d2de5*/
      *(_DWORD *)(v5 - 4) = 0; /*0x4d2de8*/
      *(_BYTE *)v5 = 0; /*0x4d2deb*/
      *(_DWORD *)(v5 + 4) = 0; /*0x4d2ded*/
      v5 += 16; /*0x4d2df0*/
      --v6; /*0x4d2df3*/
    }
    while ( v6 ); /*0x4d2df4*/
  }
  this->FoggedObject_field_0x4 = (AbstractClass *)a3; /*0x4d2df6*/
  return this->__pad_0; /*0x4d2dfb*/
}



// ==== 0x004D2E40  Vector::ReallocDynamic  this=Vector  sig=csp ====
char __thiscall ReallocDynamicVector(int this, int a2)
{
  char *v3; // edi
  int i; // ecx
  int v5; // eax
  _DWORD *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x4d2e4c*/
    return 0; /*0x4d2e4c*/
  v3 = (char *)__2_YAPAXI_Z(8 * (a2 + *(_DWORD *)(this + 8))); /*0x4d2e60*/
  if ( !v3 ) /*0x4d2e67*/
    return 0; /*0x4d2ec0*/
  for ( i = 0; i < *(_DWORD *)(this + 4); *(_DWORD *)&v3[v5 + 4] = v6[1] ) /*0x4d2e75*/
  {
    v5 = 8 * i; /*0x4d2e79*/
    v6 = (_DWORD *)(*(_DWORD *)this + 8 * i++); /*0x4d2e82*/
    *(_DWORD *)&v3[v5] = *v6; /*0x4d2e87*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x4d2e9b*/
  v7 = a2 + *(_DWORD *)(this + 8); /*0x4d2ea6*/
  *(_DWORD *)this = v3; /*0x4d2ea8*/
  *(_DWORD *)(this + 8) = v7; /*0x4d2eaa*/
  *(_DWORD *)(this + 16) = 0; /*0x4d2ead*/
  return 1; /*0x4d2eb4*/
}



// ==== 0x004D2ED0  globalHelper_0D2ED0  this=-  sig=ida-proto ====
int __cdecl globalHelper_0D2ED0(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x4d2ee0*/
  else
    return *a1 >= *a2 ? 1 : -1;
}



// ==== 0x004D2F00  sub_4D2F00  this=AbstractClass  sig=csp ====
int __fastcall sub_4D2F00(int a1, int a2, int *a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  v3 = a2; /*0x4d2f05*/
  if ( a2 <= 0 ) /*0x4d2f07*/
    return 0; /*0x4d2f39*/
  v4 = *a3; /*0x4d2f0d*/
  while ( 1 ) /*0x4d2f16*/
  {
    v5 = *(_DWORD *)(a1 + 8 * (v3 / 2)); /*0x4d2f16*/
    if ( v5 <= v4 ) /*0x4d2f1e*/
      break; /*0x4d2f1e*/
    v3 /= 2; /*0x4d2f20*/
LABEL_7:
    if ( v3 <= 0 ) /*0x4d2f32*/
      return 0; /*0x4d2f32*/
  }
  if ( v5 != v4 ) /*0x4d2f24*/
  {
    a1 += 8 * (v3 / 2) + 8; /*0x4d2f26*/
    v3 += -1 - v3 / 2; /*0x4d2f2e*/
    goto LABEL_7; /*0x4d2f2e*/
  }
  return a1 + 8 * (v3 / 2); /*0x4d2f34*/
}



// ==== 0x004D2F50  sub_4D2F50  this=-  sig=ida-proto ====
void sub_4D2F50()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4d2f5c*/
  dbl_8B3D90 = Math::Sqrt(v0 + v0); /*0x4d2f6e*/
}



// ==== 0x004D2F80  sub_4D2F80  this=-  sig=ida-proto ====
void sub_4D2F80()
{
  dbl_8B3DF8 = dbl_8B3D90 / 60.0; /*0x4d2f8c*/
}



// ==== 0x004D2FA0  sub_4D2FA0  this=-  sig=ida-proto ====
void sub_4D2FA0()
{
  dbl_8B3DE0 = 1.0 / dbl_8B3DF8; /*0x4d2fac*/
}



// ==== 0x004D2FC0  sub_4D2FC0  this=-  sig=ida-proto ====
void sub_4D2FC0()
{
  dbl_8B3DD8 = 0.0174532925199433 * 45.0; /*0x4d2fcc*/
}



// ==== 0x004D2FE0  sub_4D2FE0  this=-  sig=ida-proto ====
void sub_4D2FE0()
{
  dbl_8B3D98 = 0.0174532925199433 * 60.0; /*0x4d2fec*/
}



// ==== 0x004D3000  sub_4D3000  this=-  sig=ida-proto ====
void sub_4D3000()
{
  dbl_8B3D70 = 0.0174532925199433 * 90.0; /*0x4d300c*/
}



// ==== 0x004D3020  sub_4D3020  this=-  sig=ida-proto ====
__int64 sub_4D3020()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8B3D70 - dbl_8B3D98); /*0x4d3032*/
  result = Math::RoundToInt(v0 * dbl_8B3D90 * 0.5); /*0x4d3046*/
  dword_8B3E00 = result; /*0x4d304b*/
  return result; /*0x4d3050*/
}



// ==== 0x004D3060  sub_4D3060  this=-  sig=ida-proto ====
void sub_4D3060()
{
  dbl_8B3DA0 = Math::ArcTan((double)dword_8B3E00 * 0.00390625); /*0x4d3077*/
}



// ==== 0x004D3090  sub_4D3090  this=-  sig=ida-proto ====
void sub_4D3090()
{
  dbl_8B3DB8 = Math::ArcTan((double)(2 * dword_8B3E00) / dbl_8B3D90); /*0x4d30b2*/
}



// ==== 0x004D30C0  sub_4D30C0  this=-  sig=ida-proto ====
__int64 sub_4D30C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8B3E00) + 0.5); /*0x4d30db*/
  dword_8B3DF4 = result; /*0x4d30e0*/
  return result; /*0x4d30e6*/
}



// ==== 0x004D30F0  sub_4D30F0  this=-  sig=ida-proto ====
int sub_4D30F0()
{
  g_FootClass_Pool = 0; /*0x4d30f2*/
  return 0; /*0x4d30fe*/
}



// ==== 0x004D3100  sub_4D3100  this=-  sig=ida-proto ====
int sub_4D3100()
{
  dword_8B3DA8 = 0; /*0x4d3102*/
  dword_8B3DAC = 0; /*0x4d3107*/
  dword_8B3DB0 = 0; /*0x4d310c*/
  return 0; /*0x4d3111*/
}



// ==== 0x004D3120  sub_4D3120  this=-  sig=ida-proto ====
int sub_4D3120()
{
  dword_8B3DF0 = 0; /*0x4d3125*/
  dword_8B3DE8 = 128; /*0x4d312f*/
  dword_8B3DEC = 128; /*0x4d3134*/
  return 128; /*0x4d3139*/
}



// ==== 0x004D3140  sub_4D3140  this=-  sig=ida-proto ====
int sub_4D3140()
{
  dword_8B3D78 = 0; /*0x4d3142*/
  dword_8B3D7C = 0; /*0x4d3147*/
  dword_8B3D80 = 0; /*0x4d314c*/
  dword_8B3D84 = 0; /*0x4d3151*/
  return 0; /*0x4d3156*/
}



// ==== 0x004D3160  sub_4D3160  this=-  sig=ida-proto ====
int sub_4D3160()
{
  dword_8B3DC4 = 0; /*0x4d3167*/
  dword_8B3DC8 = 0; /*0x4d316c*/
  byte_8B3DCC = 1; /*0x4d3171*/
  byte_8B3DCD = 0; /*0x4d3178*/
  FootClass_Array = (int)&off_7E8C28; /*0x4d317d*/
  dword_8B3DD4 = 10; /*0x4d3187*/
  dword_8B3DD0 = 0; /*0x4d3191*/
  return atexit(sub_4D31A0); /*0x4d319c*/
}



// ==== 0x004D31A0  sub_4D31A0  this=-  sig=ida-proto ====
void __cdecl sub_4D31A0()
{
  FootClass_Array = (int)&VectorClass<FootClass *>::`vftable'; /*0x4d31a8*/
  if ( dword_8B3DC4 && byte_8B3DCD ) /*0x4d31bc*/
  {
    __3_YAXPAX_Z(dword_8B3DC4); /*0x4d31bf*/
    dword_8B3DC4 = 0; /*0x4d31c7*/
  }
  byte_8B3DCD = 0; /*0x4d31cd*/
  dword_8B3DC8 = 0; /*0x4d31d3*/
}



// ==== 0x004D31E0  FootClass::Construct  this=FootClass  sig=csp ====
_DWORD *__thiscall FootClass::Construct(FootClass *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  TechnoClass::TechnoClass((TechnoClass *)this, a2); /*0x4d31ea*/
  this->planningPathIdx = -1; /*0x4d31f1*/
  *(_WORD *)this->unknownShort524 = 0; /*0x4d31fb*/
  *(_WORD *)this->unknownShort526 = 0; /*0x4d3202*/
  *(_WORD *)this->unknownShort528 = 0; /*0x4d3209*/
  *(_WORD *)this->FootClass_field_short_52A = 0; /*0x4d3210*/
  this->unknown530 = 0; /*0x4d3217*/
  this->unknown534 = 0; /*0x4d321d*/
  this->unknown538 = 0; /*0x4d3223*/
  this->FootClass_field_bool_53C = 0; /*0x4d3229*/
  this->unknown540 = 0; /*0x4d322f*/
  LOWORD(this->currentMapCoords[0]) = 0; /*0x4d3235*/
  HIWORD(this->currentMapCoords[0]) = 0; /*0x4d323c*/
  LOWORD(this->lastMapCoords[0]) = 0; /*0x4d3243*/
  HIWORD(this->lastMapCoords[0]) = 0; /*0x4d324a*/
  LOWORD(this->lastJumpjetMapCoords[0]) = 0; /*0x4d3251*/
  HIWORD(this->lastJumpjetMapCoords[0]) = 0; /*0x4d3258*/
  LOWORD(this->currentJumpjetMapCoords[0]) = 0; /*0x4d325f*/
  HIWORD(this->currentJumpjetMapCoords[0]) = 0; /*0x4d3266*/
  this->unknownCoords568[0] = 0; /*0x4d326d*/
  this->unknownCoords568[1] = 0; /*0x4d3273*/
  this->unknownCoords568[2] = 0; /*0x4d3279*/
  this->currentSpeed_percentage[0] = 0; /*0x4d327f*/
  this->currentSpeed_percentage[1] = 0; /*0x4d328b*/
  this->currentSpeed_multiplier[0] = 0; /*0x4d3292*/
  this->currentSpeed_multiplier[1] = 1072693248; /*0x4d329b*/
  AbstractClassVector::Construct((AbstractClassVector *)this->unknownAbstractArray588, 0, 0); /*0x4d32a5*/
  this->unknownAbstractArray588[0] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x4d32aa*/
  *(_DWORD *)&this->__pad_58C[16] = 10; /*0x4d32b0*/
  *(_DWORD *)&this->__pad_58C[12] = 0; /*0x4d32b7*/
  this->FootClass_field_5A0 = 0; /*0x4d32c0*/
  this->movementDestination = 0; /*0x4d32c7*/
  this->lastDestination = 0; /*0x4d32d0*/
  AbstractClassVector::Construct((AbstractClassVector *)this->FootClass_field_abstract_array_5AC, 0, 0); /*0x4d32d6*/
  this->FootClass_field_abstract_array_5AC[0] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x4d32e0*/
  *(_DWORD *)&this->__pad_5B0[16] = 10; /*0x4d32e6*/
  *(_DWORD *)&this->__pad_5B0[12] = 0; /*0x4d32e9*/
  this->FootClass_field_int_5C4 = -1; /*0x4d32ec*/
  this->FootClass_field_5C8 = 0; /*0x4d32f6*/
  this->FootClass_field_5CC = 0; /*0x4d32fc*/
  this->FootClass_field_bool_5D1 = 0; /*0x4d3302*/
  this->team = 0; /*0x4d3308*/
  this->nextTeamMember = 0; /*0x4d330e*/
  this->FootClass_field_5DC = 0; /*0x4d3314*/
  this->pathDelayTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d3320*/
  this->pathDelayTimer[2] = 0; /*0x4d3326*/
  this->FootClass_field_int_64C = 10; /*0x4d332c*/
  this->FootClass_field_timer_650[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d3338*/
  this->FootClass_field_timer_650[2] = 0; /*0x4d333e*/
  v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d3344*/
  this->sightTimer[2] = 0; /*0x4d3349*/
  this->sightTimer[0] = v3; /*0x4d334f*/
  this->blockagePathTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d335b*/
  this->blockagePathTimer[2] = 0; /*0x4d3361*/
  this->locomotor[0] = 0; /*0x4d3367*/
  this->unknownPoint3d678[0] = dword_8B3DA8; /*0x4d3378*/
  this->unknownPoint3d678[1] = dword_8B3DAC; /*0x4d3384*/
  this->unknownPoint3d678[2] = dword_8B3DB0; /*0x4d338c*/
  this->tubeIndex = -1; /*0x4d338f*/
  this->unknownBool685 = 0; /*0x4d3396*/
  this->waypointIndex = 0; /*0x4d339c*/
  this->unknownBool687 = 0; /*0x4d33a2*/
  this->unknownBool688 = 0; /*0x4d33a8*/
  this->isTeamLeader = 0; /*0x4d33ae*/
  this->shouldScanForTarget = 0; /*0x4d33b4*/
  this->FootClass_field_bool_68B = 0; /*0x4d33ba*/
  this->FootClass_field_bool_68C = 0; /*0x4d33c0*/
  this->unknownBool68D = 0; /*0x4d33c6*/
  this->FootClass_field_bool_68E = 0; /*0x4d33cc*/
  this->shouldEnterAbsorber = 0; /*0x4d33d2*/
  this->shouldEnterOccupiable = 0; /*0x4d33d8*/
  this->shouldGarrisonStructure = 0; /*0x4d33de*/
  this->parasiteEatingMe = 0; /*0x4d33e4*/
  this->unknown698 = 0; /*0x4d33ea*/
  this->parasiteImUsing = 0; /*0x4d33f0*/
  this->paralysisTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d33fc*/
  this->paralysisTimer[2] = 0; /*0x4d3402*/
  this->FootClass_field_bool_6AC = 0; /*0x4d340e*/
  this->isAttackedByLocomotor = 0; /*0x4d3414*/
  this->isLetGoByLocomotor = 0; /*0x4d341a*/
  this->FootClass_field_bool_6AF = 0; /*0x4d3420*/
  this->FootClass_field_bool_6B0 = 0; /*0x4d3426*/
  this->FootClass_field_bool_6B1 = 0; /*0x4d342c*/
  this->FootClass_field_bool_6B2 = 0; /*0x4d3432*/
  this->FootClass_field_bool_6B3 = 0; /*0x4d3438*/
  this->FootClass_field_bool_6B4 = 0; /*0x4d343e*/
  this->FootClass_field_bool_6B5 = 0; /*0x4d3444*/
  this->frozenStill = 1; /*0x4d344a*/
  this->FootClass_field_bool_6B7 = 0; /*0x4d3451*/
  this->FootClass_field_bool_6B8 = 0; /*0x4d3457*/
  this->TechnoClass = &FootClass::`vftable'; /*0x4d345d*/
  this->? = &FootClass::`vftable'; /*0x4d3463*/
  this->? = &FootClass::`vftable'; /*0x4d346a*/
  this->? = &FootClass::`vftable'; /*0x4d3471*/
  this->pathDirections[0] = -1; /*0x4d3478*/
  AudioController::Init((AudioController *)this->audioController7); /*0x4d3482*/
  if ( FootClass_Array.? < (int)FootClass_Array.? /*0x4d34bb*/
    || (BYTE1(FootClass_Array.?) || !FootClass_Array.?)
    && FootClass_Array.? > 0
    && (*((unsigned __int8 (__thiscall **)(FootClass *, char *, _DWORD))FootClass_Array.TechnoClass + 2))(
         &FootClass_Array,
         (char *)FootClass_Array.? + FootClass_Array.?,
         0) )
  {
    v4 = FootClass_Array.?++; /*0x4d34c8*/
    *((_DWORD *)FootClass_Array.? + v4) = this; /*0x4d34d7*/
  }
  LOBYTE(this->?) |= 4u; /*0x4d34e0*/
  if ( g_BuildingLoadQueue_Array.?[1] < g_BuildingLoadQueue_Array.? /*0x4d3515*/
    || (BYTE1(g_BuildingLoadQueue_Array.?[0]) || !g_BuildingLoadQueue_Array.?)
    && g_BuildingLoadQueue_Array.?[2] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_BuildingLoadQueue_Array.?[2] + 8))(
         &g_BuildingLoadQueue_Array.?[2],
         g_BuildingLoadQueue_Array.? + g_BuildingLoadQueue_Array.?[2],
         0) )
  {
    v5 = g_BuildingLoadQueue_Array.?[1]++; /*0x4d3522*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v5) = this; /*0x4d3531*/
  }
  return &this->TechnoClass; /*0x4d3536*/
}



// ==== 0x004D3540  FootClass::PostLoadInit  this=FootClass  sig=csp ====
_DWORD *__thiscall FootClass::PostLoadInit(FootClass *this, int a2)
{
  TechnoClass::Constructor((TechnoClass *)this, a2); /*0x4d3548*/
  this->unknownAbstractArray588[0] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x4d3552*/
  this->FootClass_field_abstract_array_5AC[0] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x4d3558*/
  this->locomotor[0] = 0; /*0x4d355e*/
  this->TechnoClass = &FootClass::`vftable'; /*0x4d3568*/
  this->? = &FootClass::`vftable'; /*0x4d356e*/
  this->? = &FootClass::`vftable'; /*0x4d3575*/
  this->? = &FootClass::`vftable'; /*0x4d357c*/
  return &this->TechnoClass; /*0x4d3585*/
}



// ==== 0x004D3590  FootClass::Destruct  this=FootClass  sig=csp ====
int __thiscall FootClass::Destruct(FootClass *this)
{
  int *team; // ecx
  int v3; // eax
  int v4; // eax
  ParasiteClass *parasiteImUsing; // ecx
  _DWORD *v6; // eax
  int v7; // eax
  void *v8; // eax
  void *v9; // eax
  FootClass *v11; // [esp+8h] [ebp-4h] BYREF

  team = (int *)this->team; /*0x4d3597*/
  this->TechnoClass = &FootClass::`vftable'; /*0x4d359d*/
  this->? = &FootClass::`vftable'; /*0x4d35a5*/
  this->? = &FootClass::`vftable'; /*0x4d35ac*/
  this->? = &FootClass::`vftable'; /*0x4d35b3*/
  if ( team && byte_A8E9A0 ) /*0x4d35c2*/
    TeamClass::LiberateMember_Start(team, (int)this, 0xFFFFFFFF, 0); /*0x4d35c8*/
  v11 = this; /*0x4d35dd*/
  v3 = (*((int (__thiscall **)(FootClass *, FootClass **))FootClass_Array.TechnoClass + 4))(&FootClass_Array, &v11); /*0x4d35e1*/
  if ( v3 != -1 ) /*0x4d35e7*/
    FootClass::RemoveFromPointerArray(&FootClass_Array, v3); /*0x4d35ef*/
  v11 = this; /*0x4d3604*/
  v4 = (*(int (__thiscall **)(char *, FootClass **))(*(_DWORD *)&g_BuildingLoadQueue_Array.?[2] + 16))( /*0x4d3608*/
         &g_BuildingLoadQueue_Array.?[2],
         &v11);
  if ( v4 != -1 ) /*0x4d360e*/
    DynamicVector::RemoveItem((DynamicVector *)&g_BuildingLoadQueue_Array.?[2], v4); /*0x4d3616*/
  parasiteImUsing = this->parasiteImUsing; /*0x4d361b*/
  if ( parasiteImUsing ) /*0x4d3623*/
  {
    (*((void (__thiscall **)(ParasiteClass *, int))parasiteImUsing->AbstractClass + 8))(parasiteImUsing, 1); /*0x4d3629*/
    this->parasiteImUsing = 0; /*0x4d362c*/
  }
  if ( this->currentJumpjetMapCoords[0] != g_FootClass_Pool ) /*0x4d3646*/
  {
    v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)this->currentJumpjetMapCoords); /*0x4d365b*/
    if ( (FootClass *)v6[56] == this ) /*0x4d3666*/
      v6[56] = 0; /*0x4d3668*/
  }
  Mixer::ReleaseChannel((Mixer *)this->audioController7); /*0x4d3677*/
  AudioFileClass::Release((AudioFileClass *)this->audioController7); /*0x4d367e*/
  v7 = this->locomotor[0]; /*0x4d3683*/
  if ( v7 ) /*0x4d368b*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(this->locomotor[0]); /*0x4d3690*/
  v8 = *(void **)this->__pad_5B0; /*0x4d3693*/
  this->FootClass_field_abstract_array_5AC[0] = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x4d36a0*/
  if ( v8 && this->__pad_5B0[9] ) /*0x4d36a8*/
  {
    __3_YAXPAX_Z(v8); /*0x4d36b1*/
    *(_DWORD *)this->__pad_5B0 = 0; /*0x4d36b9*/
  }
  this->__pad_5B0[9] = 0; /*0x4d36bf*/
  *(_DWORD *)&this->__pad_5B0[4] = 0; /*0x4d36c5*/
  v9 = *(void **)this->__pad_58C; /*0x4d36cb*/
  this->unknownAbstractArray588[0] = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x4d36d1*/
  if ( v9 && this->__pad_58C[9] ) /*0x4d36dc*/
  {
    __3_YAXPAX_Z(v9); /*0x4d36e5*/
    *(_DWORD *)this->__pad_58C = 0; /*0x4d36ed*/
  }
  this->__pad_58C[9] = 0; /*0x4d36f5*/
  *(_DWORD *)&this->__pad_58C[4] = 0; /*0x4d36fb*/
  return TechnoClass::DTOR((int)this); /*0x4d3706*/
}



// ==== 0x004D3710  FootClass::Destru_vt337  this=FootClass  sig=csp ====
void __thiscall FootClass::Destru_vt337(FootClass *this, double a2)
{
  if ( a2 < 1.0 ) /*0x4d371f*/
  {
    if ( a2 > 0.0 ) /*0x4d3747*/
    {
      *(double *)this->currentSpeed_percentage = a2; /*0x4d3768*/
    }
    else
    {
      this->currentSpeed_percentage[0] = 0; /*0x4d3749*/
      this->currentSpeed_percentage[1] = 0; /*0x4d3753*/
    }
  }
  else
  {
    this->currentSpeed_percentage[0] = 0; /*0x4d3721*/
    this->currentSpeed_percentage[1] = 1072693248; /*0x4d372b*/
  }
}



// ==== 0x004D3780  FootClass::UpdateReveal  this=FootClass  sig=csp ====
char __thiscall FootClass::UpdateReveal(FootClass *this, int a2)
{
  int v2; // edi
  _BYTE v5[4]; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x4d3783*/
  if ( a2 == 2 ) /*0x4d378c*/
    return 1; /*0x4d3793*/
  if ( !(unsigned __int8)TechnoClass::UpdateProdWithSound((TechnoClass *)this, a2) ) /*0x4d3799*/
    return 0; /*0x4d3803*/
  if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 30))(this) == 2 ) /*0x4d37ac*/
  {
    a2 = *(_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))this->TechnoClass + 110))(this, v5); /*0x4d37c4*/
    if ( v2 ) /*0x4d37c8*/
    {
      if ( v2 == 1 || v2 == 3 ) /*0x4d37d0*/
      {
        MapClass::FillRevealBuffer((MapClass *)&stru_87F5F0.__pad_58[416], &a2, this); /*0x4d37dd*/
        return 1; /*0x4d37e7*/
      }
    }
    else
    {
      MapClass::ApplyOverlayReveal((MapClass *)&stru_87F5F0.__pad_58[416], &a2, (char *)this); /*0x4d37f5*/
    }
  }
  return 1; /*0x4d378e*/
}



// ==== 0x004D3810  FootClass::CheckTileSeed  this=FootClass  sig=csp ====
bool __thiscall FootClass::CheckTileSeed(FootClass *this, _DWORD *a2)
{
  int v3; // ebx
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // eax
  int (__thiscall **vtable0)(FootClass *); // eax
  int v9; // edx
  char v10; // al
  int v11; // [esp-8h] [ebp-28h]
  __int16 v12; // [esp+4h] [ebp-1Ch] BYREF
  int v13; // [esp+8h] [ebp-18h]
  __int16 v14[2]; // [esp+Ch] [ebp-14h] BYREF
  __int16 v15; // [esp+10h] [ebp-10h] BYREF
  char v16; // [esp+14h] [ebp-Ch] BYREF
  int v17; // [esp+1Ch] [ebp-4h]
  _DWORD *v18; // [esp+24h] [ebp+4h]

  v3 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1460); /*0x4d381f*/
  if ( v3 == -1 ) /*0x4d3828*/
    return 1; /*0x4d382b*/
  v5 = *a2 / 256; /*0x4d3853*/
  v6 = a2[1] / 256; /*0x4d3856*/
  LOWORD(v18) = v5; /*0x4d3860*/
  HIWORD(v18) = v6; /*0x4d3865*/
  *(_DWORD *)v14 = v18; /*0x4d386e*/
  if ( __PAIR32__(v6, v5) == g_FootClass_Pool ) /*0x4d3872*/
    return 0; /*0x4d387e*/
  v7 = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->TechnoClass + 19))(this); /*0x4d3892*/
  LOWORD(v17) = *v7 / 256; /*0x4d38a5*/
  HIWORD(v17) = v7[1] / 256; /*0x4d38bb*/
  vtable0 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4d38c4*/
  v13 = v17; /*0x4d38c6*/
  v11 = vtable0[200](this); /*0x4d38d4*/
  v9 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &v12) + 80) >> 8; /*0x4d38e8*/
  LOBYTE(v9) = v9 & 1; /*0x4d38eb*/
  v10 = (*((int (__thiscall **)(FootClass *, _DWORD, int, int))this->TechnoClass + 47))(this, 0, v9, v11); /*0x4d38f3*/
  return MapSeed::CheckTileMatch((MapSeed *)&stru_87F5F0.__pad_58[416], &v15, v14, v3, v10, (char)&v16, 0); /*0x4d382a*/
}



// ==== 0x004D3920  FootClass::MovementStep  this=BuildingClass  sig=csp ====
int __userpurge FootClass::MovementStep@<eax>(int a1@<ecx>, int a2@<edi>, int a3, int a4, int a5, int a6)
{
  double v6; // st7
  int v8; // edx
  int result; // eax
  int v10; // esi
  int v11; // edi
  _DWORD *v12; // eax
  int *v13; // eax
  int v14; // edx
  _DWORD *v15; // eax
  int v16; // eax
  _DWORD **v17; // ecx
  int v18; // esi
  char v19; // bl
  int v20; // edi
  void *v21; // eax
  int v22; // eax
  int v23; // esi
  void *v24; // eax
  int v25; // edx
  char v26; // bl
  __int16 *v27; // eax
  int v28; // eax
  signed int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  int v34; // esi
  void *v35; // eax
  _DWORD *v36; // eax
  int v37; // esi
  void *v38; // eax
  char IsBuildableAdvanced; // al
  int v40; // edx
  char v41; // bl
  __int16 *v42; // eax
  int v43; // eax
  int *v44; // eax
  int v45; // esi
  void *v46; // eax
  int v47; // ebx
  _DWORD *PathWithRetry; // eax
  _DWORD *v49; // edi
  int v50; // edx
  int v51; // eax
  int *v52; // esi
  int v53; // eax
  _DWORD *v54; // eax
  int v55; // ecx
  _DWORD *v56; // edi
  int v57; // edi
  void *v58; // eax
  wchar_t *v60; // esi
  int v61; // eax
  int v62; // ecx
  int v63; // edx
  int v64; // eax
  int v65; // ecx
  signed int v66; // ecx
  int v67; // esi
  void *v68; // eax
  int TileIndex; // [esp+28h] [ebp-1FD8h]
  int v70; // [esp+30h] [ebp-1FD0h]
  char v71; // [esp+48h] [ebp-1FB8h]
  double v72; // [esp+50h] [ebp-1FB0h]
  char v73; // [esp+50h] [ebp-1FB0h]
  double v74; // [esp+50h] [ebp-1FB0h]
  int v75; // [esp+50h] [ebp-1FB0h]
  char v76; // [esp+50h] [ebp-1FB0h]
  signed int v78; // [esp+54h] [ebp-1FACh]
  int v79; // [esp+54h] [ebp-1FACh]
  char v80; // [esp+58h] [ebp-1FA8h]
  char v81; // [esp+5Ch] [ebp-1FA4h]
  int v82; // [esp+64h] [ebp-1F9Ch] BYREF
  int v83; // [esp+68h] [ebp-1F98h] BYREF
  int GameSpeedFromSession; // [esp+6Ch] [ebp-1F94h] BYREF
  int v85; // [esp+70h] [ebp-1F90h] BYREF
  int v86; // [esp+74h] [ebp-1F8Ch] BYREF
  int v87; // [esp+78h] [ebp-1F88h]
  _DWORD *v88; // [esp+7Ch] [ebp-1F84h]
  int v89; // [esp+80h] [ebp-1F80h] BYREF
  int v90; // [esp+84h] [ebp-1F7Ch] BYREF
  int v91; // [esp+88h] [ebp-1F78h] BYREF
  int v92; // [esp+8Ch] [ebp-1F74h] BYREF
  int v93; // [esp+90h] [ebp-1F70h] BYREF
  char v94[16]; // [esp+94h] [ebp-1F6Ch] BYREF
  _DWORD v95[8]; // [esp+A4h] [ebp-1F5Ch] BYREF
  _BYTE v96[7996]; // [esp+C4h] [ebp-1F3Ch] BYREF

  if ( !a4 ) /*0x4d3938*/
    *(_DWORD *)(a1 + 1504) = -1; /*0x4d393a*/
  v8 = *(_DWORD *)a1; /*0x4d3954*/
  v87 = 0; /*0x4d3957*/
  v85 = ((__int16)a3 << 8) + 128; /*0x4d396a*/
  v86 = (SHIWORD(a3) << 8) + 128; /*0x4d3978*/
  result = (*(int (__thiscall **)(int, int *))(v8 + 716))(a1, &v85); /*0x4d397f*/
  if ( !(_BYTE)result ) /*0x4d3987*/
  {
    *(_DWORD *)(a1 + 1504) = -1; /*0x4d3989*/
    return result; /*0x4d399c*/
  }
  v10 = ((__int16)a3 << 8) + 128; /*0x4d39c0*/
  v11 = (SHIWORD(a3) << 8) + 128; /*0x4d39c6*/
  v12 = (_DWORD *)(*(int (__thiscall **)(int, char *, int))(*(_DWORD *)a1 + 72))(a1, v94, a2); /*0x4d39cc*/
  v13 = Coord::Subtract(&v92, *v12 - v10, v12[1] - v11, v12[2]); /*0x4d39e2*/
  v86 = *v13; /*0x4d39ec*/
  v14 = v13[1]; /*0x4d39f0*/
  __asm { fild dword ptr [esp+1FB0h+var_1F8C] } /*0x4d39f3*/
  v15 = (_DWORD *)v13[2]; /*0x4d39f7*/
  v87 = v14; /*0x4d39fa*/
  __asm { fild [esp+1FB0h+var_1F88] } /*0x4d39fe*/
  v88 = v15; /*0x4d3a02*/
  __asm /*0x4d3a06*/
  {
    fild [esp+1FB0h+var_1F84]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fld st(3)
    fmul st, st(4)
    faddp st(1), st
    fstp [esp+1FB0h+var_1FB0]; double
    fstp st
    fstp st
    fstp st
  }
  Math::Sqrt(v72); /*0x4d3a23*/
  LOWORD(v16) = Math::RoundToInt(v6); /*0x4d3a2b*/
  v17 = *(_DWORD ***)(a1 + 1492); /*0x4d3a30*/
  v18 = v16; /*0x4d3a36*/
  v89 = v16; /*0x4d3a3a*/
  if ( v17 ) /*0x4d3a3e*/
    GameSpeedFromSession = FootClass::GetGameSpeedFromSession(v17); /*0x4d3a45*/
  else
    GameSpeedFromSession = dword_8871E0[1].?; /*0x4d3a57*/
  v19 = *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 3220); /*0x4d3a66*/
  v20 = *(_DWORD *)a1; /*0x4d3a6c*/
  v21 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a4); /*0x4d3a84*/
  v22 = (*(int (__thiscall **)(int, void *, int, int, _DWORD, int))(v20 + 428))(a1, v21, -1, -1, 0, 1); /*0x4d3a8c*/
  if ( v22 == 6 ) /*0x4d3a95*/
  {
    if ( v18 > GameSpeedFromSession && !v19 ) /*0x4d3aa7*/
    {
      v23 = dword_7E8BF0[*(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1460)]; /*0x4d3ac3*/
      if ( !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 3372) /*0x4d3aee*/
        || (v24 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a4),
            LOBYTE(GameSpeedFromSession) = 1,
            !(unsigned __int8)Cell::IsBuildableAdvanced((int)v24)) )
      {
        LOBYTE(GameSpeedFromSession) = 0; /*0x4d3afc*/
      }
      v25 = *(_DWORD *)a1; /*0x4d3b01*/
      v26 = *(_BYTE *)(a1 + 140); /*0x4d3b04*/
      v87 = 1; /*0x4d3b1a*/
      v73 = (*(int (__thiscall **)(int, int *, _DWORD))(v25 + 440))(a1, &v91, 0); /*0x4d3b28*/
      v71 = v85; /*0x4d3b2a*/
      v27 = (__int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 440))(a1); /*0x4d3b40*/
      TileIndex = MapClass::GetTileIndex(&dword_87F7E8, v27, (int)&v86, v23); /*0x4d3b54*/
      v28 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1); /*0x4d3b57*/
      v83 = *LayerClass::Pathfinding_Find( /*0x4d3b85*/
               &dword_87F7E8,
               (int)&v90,
               &v90,
               (__int16 *)&a4,
               *(_DWORD *)(v28 + 1660),
               TileIndex,
               v26,
               v23,
               v26,
               1,
               1,
               0,
               1,
               v71,
               (__int16 *)1,
               v73,
               0);
      v91 = (__int16)v83; /*0x4d3ba4*/
      v29 = abs32(SHIWORD(v83) - SHIWORD(a4)); /*0x4d3baa*/
      v85 = abs32((__int16)v83 - (__int16)a4); /*0x4d3bb3*/
      if ( v85 <= v29 ) /*0x4d3bb7*/
        v85 = v29; /*0x4d3bb9*/
      if ( v83 != g_FootClass_Pool ) /*0x4d3bc9*/
      {
        v87 = (SHIWORD(a4) << 8) - (SHIWORD(v83) << 8); /*0x4d3c0b*/
        v86 = ((__int16)a4 << 8) - (v91 << 8); /*0x4d3c0f*/
        __asm /*0x4d3c13*/
        {
          fild [esp+1FB0h+var_1F88]
          fild dword ptr [esp+1FB0h+var_1F8C]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+1FB0h+var_1FB0]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v74); /*0x4d3c2c*/
        LOWORD(v30) = Math::RoundToInt(v6); /*0x4d3c34*/
        if ( v30 < v89 ) /*0x4d3c3d*/
        {
          v78 = ((_BYTE)GameSpeedFromSession != 0) - 1; /*0x4d3c53*/
          v31 = *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a4) + 80) >> 8; /*0x4d3c6b*/
          LOBYTE(v31) = v31 & 1; /*0x4d3c6e*/
          v75 = v31; /*0x4d3c71*/
          v32 = *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v83) + 80) >> 8; /*0x4d3c8a*/
          LOBYTE(v32) = v32 & 1; /*0x4d3c8d*/
          v33 = Pathfinding::CalcDistance((int)unk_87E8B8, (__int16 *)&v83, (__int16 *)&a4, a1, v32, v75, v78); /*0x4d3c9c*/
          if ( v33 <= v85 + 6 ) /*0x4d3caa*/
          {
            v34 = *(_DWORD *)a1; /*0x4d3cb0*/
            v35 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v83); /*0x4d3cbf*/
            (*(void (__thiscall **)(int, void *, int))(v34 + 1152))(a1, v35, 1); /*0x4d3cc7*/
            a4 = v83; /*0x4d3cd1*/
          }
        }
      }
    }
  }
  else if ( v22 == 7 && !v19 ) /*0x4d3ce8*/
  {
    v36 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a4); /*0x4d3cfb*/
    if ( Cell::IsBridge(v36) ) /*0x4d3d02*/
    {
      v37 = dword_7E8BF0[*(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1460)]; /*0x4d3d25*/
      if ( !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 3372) /*0x4d3d5c*/
        || (v38 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a4),
            IsBuildableAdvanced = Cell::IsBuildableAdvanced((int)v38),
            LOBYTE(v85) = 1,
            !IsBuildableAdvanced) )
      {
        LOBYTE(v85) = 0; /*0x4d3d5e*/
      }
      v40 = *(_DWORD *)a1; /*0x4d3d63*/
      v41 = *(_BYTE *)(a1 + 140); /*0x4d3d66*/
      v87 = 1; /*0x4d3d7c*/
      v80 = (*(int (__thiscall **)(int, int *, _DWORD, _DWORD))(v40 + 440))(a1, &v90, 0, 0); /*0x4d3d8a*/
      v76 = (char)v88; /*0x4d3d8c*/
      v42 = (__int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 440))(a1); /*0x4d3da2*/
      v70 = MapClass::GetTileIndex(&dword_87F7E8, v42, (int)&v92, v37); /*0x4d3db6*/
      v43 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1); /*0x4d3db9*/
      v44 = LayerClass::Pathfinding_Find( /*0x4d3dd8*/
              &dword_87F7E8,
              (int)&v93,
              &v93,
              (__int16 *)&a6,
              *(_DWORD *)(v43 + 1660),
              v70,
              v41,
              v37,
              v41,
              1,
              1,
              0,
              1,
              v76,
              (__int16 *)1,
              v80,
              v81);
      v45 = *(_DWORD *)a1; /*0x4d3ddf*/
      v86 = *v44; /*0x4d3ded*/
      v46 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v86); /*0x4d3df1*/
      (*(void (__thiscall **)(int, void *, int))(v45 + 1152))(a1, v46, 1); /*0x4d3df9*/
      a4 = GameSpeedFromSession; /*0x4d3e03*/
    }
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 292))(a1, 0); /*0x4d3e11*/
  v47 = a5; /*0x4d3e17*/
  if ( !a5 ) /*0x4d3e20*/
    *(_DWORD *)(a1 + 1504) = -1; /*0x4d3e22*/
  PathWithRetry = FootClass::FindPathWithRetry((int *)a1, (__int16 *)&a4, (int)v96, 2000, 0, v47, a6); /*0x4d3e4b*/
  v49 = PathWithRetry; /*0x4d3e50*/
  GameSpeedFromSession = (int)PathWithRetry; /*0x4d3e54*/
  if ( PathWithRetry && PathWithRetry[1] ) /*0x4d3e5a*/
  {
    v50 = *(_DWORD *)a1; /*0x4d3e61*/
    qmemcpy(v95, PathWithRetry, sizeof(v95)); /*0x4d3e6f*/
    (*(void (__thiscall **)(int, _DWORD *))(v50 + 1344))(a1, v95); /*0x4d3e78*/
    v51 = 24 - v47; /*0x4d3e87*/
    if ( *(_DWORD *)(GameSpeedFromSession + 8) < 24 - v47 ) /*0x4d3e8e*/
      v51 = *(_DWORD *)(GameSpeedFromSession + 8); /*0x4d3e90*/
    qmemcpy((void *)(a1 + 4 * v47 + 1504), v96, 4 * v51); /*0x4d3e9f*/
    v49 = (_DWORD *)GameSpeedFromSession; /*0x4d3ea1*/
  }
  v79 = 1; /*0x4d3ea8*/
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 292))(a1); /*0x4d3eac*/
  *(_DWORD *)(a1 + 1600) = dword_A8ED84; /*0x4d3ec1*/
  *(_DWORD *)(a1 + 1604) = v92; /*0x4d3ec7*/
  *(_DWORD *)(a1 + 1608) = 0; /*0x4d3eca*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 44))(a1) == 1 && *(_DWORD *)(a1 + 1504) != -1 ) /*0x4d3ee5*/
  {
    v52 = *(int **)(a1 + 1736); /*0x4d3eeb*/
    v53 = 0; /*0x4d3ef1*/
    if ( v49 ) /*0x4d3ef5*/
      v53 = v49[2] - 2; /*0x4d3efa*/
    v82 = a3; /*0x4d3f06*/
    if ( v52 && !*(_BYTE *)(a1 + 1744) ) /*0x4d3f10*/
    {
      v88 = &v95[v53 + 7]; /*0x4d3f22*/
      do /*0x4d3fe1*/
      {
        v54 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v82); /*0x4d3f30*/
        v82 = *((_DWORD *)Cell::GetNeighbourContent(v54, (*v88 + 4) % 8) + 9); /*0x4d3f56*/
        v55 = v52[361]; /*0x4d3f5a*/
        if ( !v55 /*0x4d3f96*/
          || (v56 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v55 + 76))(v55, &v91, 0),
              __PAIR32__(v56[1] / 256, *v56 / 256) != v82) )
        {
          (*(void (__thiscall **)(int *, int, _DWORD))(*v52 + 488))(v52, 2, 0); /*0x4d3fa7*/
          v57 = *v52; /*0x4d3fad*/
          v58 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v82); /*0x4d3fbb*/
          (*(void (__thiscall **)(int *, void *, int))(v57 + 1152))(v52, v58, 1); /*0x4d3fc3*/
          FootClass::MovementStep((int)v52, v57, v82, 0, 0, v79); /*0x4d3fd4*/
        }
        v52 = (int *)v52[434]; /*0x4d3fd9*/
      }
      while ( v52 ); /*0x4d3fe1*/
      v49 = (_DWORD *)v83; /*0x4d3fe7*/
    }
  }
  if ( v49 ) /*0x4d3fee*/
  {
    result = (*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 440))(a1, &v89); /*0x4d3ffa*/
    *(_DWORD *)(a1 + 1368) = *(_DWORD *)result; /*0x4d4003*/
    LOBYTE(result) = 1; /*0x4d400a*/
    return result; /*0x4d4013*/
  }
  _EDX = dword_8871E0; /*0x4d4016*/
  v60 = dword_A8ED84; /*0x4d401c*/
  __asm /*0x4d4022*/
  {
    fld qword ptr [edx+1760h]
    fmul ds:dbl_7E27F8
  }
  LOWORD(v61) = Math::RoundToInt(v6); /*0x4d402e*/
  v62 = v92; /*0x4d4033*/
  v63 = *(_DWORD *)a1; /*0x4d4037*/
  *(_DWORD *)(a1 + 1600) = v60; /*0x4d403a*/
  *(_DWORD *)(a1 + 1604) = v62; /*0x4d403c*/
  *(_DWORD *)(a1 + 1608) = v61; /*0x4d4041*/
  (*(void (__thiscall **)(int))(v63 + 1280))(a1); /*0x4d4044*/
  v64 = *(_DWORD *)(a1 + 156); /*0x4d4052*/
  v65 = *(_DWORD *)(a1 + 160); /*0x4d4054*/
  v93 = *(_DWORD *)(a1 + 164); /*0x4d405a*/
  v66 = abs32((__int16)(v65 / 256) - SHIWORD(a3)); /*0x4d408c*/
  result = abs32((__int16)(v64 / 256) - (__int16)a3); /*0x4d409e*/
  if ( result <= v66 ) /*0x4d40a2*/
    result = v66; /*0x4d40a4*/
  if ( result > 1 /*0x4d40d4*/
    || !*(_BYTE *)(a1 + 140)
    && (result = (int)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a3), (*(_DWORD *)(result + 320) & 0x100) != 0) )
  {
    if ( *(_DWORD *)(a1 + 1492) ) /*0x4d40da*/
    {
      if ( !*(_DWORD *)(a1 + 1652) ) /*0x4d40e4*/
        WinAPI::Wrapper(-2147467261); /*0x4d40f3*/
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 180))(*(_DWORD *)(a1 + 1652)); /*0x4d4101*/
      TeamClass::LiberateMember_Start(*(_DWORD *)(a1 + 1492), a1, 0xFFFFFFFF, 0); /*0x4d4112*/
      if ( !*(_DWORD *)(a1 + 1652) ) /*0x4d4117*/
        WinAPI::Wrapper(-2147467261); /*0x4d4126*/
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 184))(*(_DWORD *)(a1 + 1652)); /*0x4d4134*/
    }
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a1 + 1152))(a1, 0, 1); /*0x4d4143*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 968))(a1, 0); /*0x4d4150*/
    if ( (unsigned __int8)House::IsCurrentPlayer(*(#375 **)(a1 + 540)) ) /*0x4d415c*/
    {
      result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 488))(a1, 5, 0); /*0x4d41df*/
    }
    else
    {
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 488))(a1, 11, 0); /*0x4d416e*/
      result = dword_A8B238[0]; /*0x4d4174*/
      if ( dword_A8B238[0] ) /*0x4d417b*/
      {
        result = *BuildingPlacement::FindPosition(&v89, (_DWORD *)a1); /*0x4d418e*/
        GameSpeedFromSession = result; /*0x4d4197*/
        if ( result != g_FootClass_Pool ) /*0x4d419b*/
        {
          v67 = *(_DWORD *)a1; /*0x4d41ab*/
          v68 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&GameSpeedFromSession); /*0x4d41ba*/
          result = (*(int (__thiscall **)(int, void *, int))(v67 + 1152))(a1, v68, 1); /*0x4d41c2*/
          LOBYTE(result) = 0; /*0x4d41ca*/
          return result; /*0x4d41d3*/
        }
      }
    }
  }
  LOBYTE(result) = 0; /*0x4d41e7*/
  return result; /*0x4d3993*/
}



// ==== 0x004D4200  FootClass::Destru_vt139  this=FootClass  sig=csp ====
int __thiscall FootClass::Destru_vt139(FootClass *this)
{
  char *MissionControl; // eax
  int v4; // eax

  if ( this->movementDestination ) /*0x4d4203*/
    goto LABEL_7; /*0x4d4203*/
  if ( !this->locomotor[0] ) /*0x4d420d*/
    WinAPI::Wrapper(-2147467261); /*0x4d421c*/
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 16))(this->locomotor[0]) || this->? != -1 ) /*0x4d4238*/
  {
LABEL_7:
    MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4d4251*/
    LOWORD(v4) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d425f*/
    return v4 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d427a*/
  }
  else
  {
    (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 289))(this, 0, 1); /*0x4d4242*/
    return 1; /*0x4d4248*/
  }
}



// ==== 0x004D4280  FootClass::ApproachEvaluate  this=FootClass  sig=csp ====
int __thiscall UnitClass::ApproachEvaluate(FootClass *this)
{
  double v1; // st7
  int v3; // eax
  int v4; // ebp
  void *vtable0; // edx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  _DWORD *v10; // eax
  void *v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int (__thiscall **v16)(FootClass *); // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v21; // eax
  AbstractClass *target; // eax
  #375 **v23; // edi
  int v24; // ebx
  int (__thiscall **v27)(FootClass *, int, int); // edi
  int v28; // eax
  int v29; // eax
  int v30; // ebx
  int v31; // edi
  _DWORD *v32; // eax
  int FootClass_field_5DC; // ebx
  int v34; // eax
  int v35; // eax
  _DWORD *v36; // eax
  int v37; // ebx
  int v38; // eax
  int v39; // ecx
  void (__thiscall **v40)(FootClass *, _DWORD); // eax
  __int16 *v41; // ebp
  char v42; // al
  AbstractClass *focus; // ecx
  _DWORD *v44; // eax
  CellClass *v45; // edi
  int v46; // eax
  int v47; // ebx
  int v48; // ecx
  int v49; // eax
  int v50; // edx
  void (__thiscall **v51)(FootClass *, _DWORD, int); // edx
  int (__thiscall **v52)(FootClass *, int, int); // edi
  int v53; // eax
  int v54; // ebx
  int v55; // edi
  int v56; // eax
  _DWORD *v57; // eax
  int v58; // ebx
  int v59; // eax
  int v60; // ecx
  AbstractClass *v61; // eax
  void (__thiscall **v62)(FootClass *, _DWORD, int); // eax
  int TileIndex; // [esp-4h] [ebp-D0h]
  int v64; // [esp+0h] [ebp-CCh]
  int v65; // [esp+24h] [ebp-A8h]
  int v66; // [esp+34h] [ebp-98h]
  int v67; // [esp+38h] [ebp-94h]
  int v68; // [esp+38h] [ebp-94h]
  int v69; // [esp+38h] [ebp-94h]
  __int16 v70[2]; // [esp+3Ch] [ebp-90h] BYREF
  int v71; // [esp+40h] [ebp-8Ch]
  int v72; // [esp+44h] [ebp-88h] BYREF
  int v73; // [esp+48h] [ebp-84h] BYREF
  int v74; // [esp+4Ch] [ebp-80h] BYREF
  __int16 v75; // [esp+50h] [ebp-7Ch] BYREF
  int v76; // [esp+54h] [ebp-78h] BYREF
  int v77; // [esp+58h] [ebp-74h] BYREF
  _DWORD v78[3]; // [esp+5Ch] [ebp-70h] BYREF
  int v79; // [esp+68h] [ebp-64h] BYREF
  _BYTE v80[12]; // [esp+6Ch] [ebp-60h] BYREF
  _BYTE v81[4]; // [esp+78h] [ebp-54h] BYREF
  _BYTE v82[20]; // [esp+7Ch] [ebp-50h] BYREF
  _BYTE v83[12]; // [esp+90h] [ebp-3Ch] BYREF
  _BYTE v84[12]; // [esp+9Ch] [ebp-30h] BYREF
  _BYTE v85[12]; // [esp+A8h] [ebp-24h] BYREF
  _BYTE v86[12]; // [esp+B4h] [ebp-18h] BYREF
  _BYTE v87[12]; // [esp+C0h] [ebp-Ch] BYREF

  v3 = (*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 199))(this, 2); /*0x4d4290*/
  this->? = 1; /*0x4d429d*/
  v4 = v3 / 256 + 6; /*0x4d42b1*/
  switch ( this->? )
  {
    case 0:
      v78[0] = this->?[0]; /*0x4d42f7*/
      vtable0 = this->TechnoClass; /*0x4d42fb*/
      v78[1] = this->?[1]; /*0x4d4300*/
      v78[2] = this->?[2]; /*0x4d430c*/
      v7 = (*((int (__thiscall **)(FootClass *, int, _DWORD *, _DWORD))vtable0 + 241))(this, 2, v78, 0); /*0x4d4314*/
      v71 = v7; /*0x4d431c*/
      if ( v7 )
        v8 = (*(_BYTE *)(v7 + 20) & 2) != 0 ? v7 : 0;
      else
        v8 = 0; /*0x4d4322*/
      v9 = (*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 185))(this, v8); /*0x4d4339*/
      if ( v8 ) /*0x4d4341*/
      {
        if ( (*((unsigned __int8 (__thiscall **)(FootClass *, int, int))this->TechnoClass + 234))(this, v8, v9) ) /*0x4d434d*/
          goto LABEL_10; /*0x4d434d*/
        v10 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 76))(v8); /*0x4d4365*/
        LOWORD(v66) = *v10 / 256; /*0x4d4379*/
        HIWORD(v66) = v10[1] / 256; /*0x4d4392*/
        v11 = this->TechnoClass; /*0x4d439b*/
        v73 = v66; /*0x4d439f*/
        v12 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *, _DWORD))v11 + 19))(this, v82, 0); /*0x4d43a3*/
        LOWORD(v66) = *v12 / 256; /*0x4d43b9*/
        HIWORD(v66) = v12[1] / 256; /*0x4d43cf*/
        v74 = v66; /*0x4d43d8*/
        v13 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v8 + 188))(v8, 0, -1); /*0x4d43de*/
        v14 = (*((int (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 47))(this, 0, v13); /*0x4d43ea*/
        if ( Pathfinding::CalcDistance( /*0x4d4408*/
               (int)&stru_87E790.__pad_D8[80],
               (__int16 *)&v76,
               &v75,
               (int)this,
               v14,
               (int)v84,
               0) < v4 )
        {
LABEL_10:
          v15 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 113))(this); /*0x4d4412*/
          this->FootClass_field_5DC = v15; /*0x4d4418*/
          if ( (*(_DWORD *)(v15 + 320) & 0x100) != 0 /*0x4d4432*/
            && !(*((unsigned __int8 (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 47))(this, 0) )
          {
            v16 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4d4454*/
            v72 = 0; /*0x4d4459*/
            v64 = *(_DWORD *)(v16[33](this) + 1460); /*0x4d4471*/
            v17 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this); /*0x4d4475*/
            TileIndex = MapClass::GetTileIndex( /*0x4d4498*/
                          (MapClass *)&stru_87F5F0.__pad_58[416],
                          (__int16 *)(this->FootClass_field_5DC + 36),
                          *(_DWORD *)(v17 + 1460),
                          0);
            v18 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this); /*0x4d449b*/
            *(_DWORD *)v70 = *LayerClass::Pathfinding_Find( /*0x4d44ca*/
                                &stru_87F5F0.__pad_58[416],
                                (int)&v79,
                                &v79,
                                (__int16 *)(this->FootClass_field_5DC + 36),
                                *(_DWORD *)(v18 + 1660),
                                TileIndex,
                                v64,
                                0,
                                1,
                                1,
                                0,
                                1,
                                0,
                                0,
                                (__int16 *)&v72,
                                0,
                                0);
            if ( *(_DWORD *)v70 == g_FootClass_Pool ) /*0x4d44ce*/
            {
              this->FootClass_field_5DC = 0; /*0x4d4512*/
              return 60; /*0x4d4527*/
            }
            this->FootClass_field_5DC = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v70); /*0x4d44ed*/
          }
          if ( !this->? ) /*0x4d44f3*/
          {
            v19 = *(_DWORD *)&this->__pad_58C[12]; /*0x4d44fb*/
            if ( v19 <= 0 ) /*0x4d4503*/
            {
              if ( this->movementDestination ) /*0x4d4528*/
                TechnoClass::SetFocus((TechnoClass *)this, (int)this->movementDestination); /*0x4d4533*/
              else
                TechnoClass::SetFocus((TechnoClass *)this, this->FootClass_field_5DC); /*0x4d453e*/
            }
            else
            {
              TechnoClass::SetFocus((TechnoClass *)this, *(_DWORD *)(*(_DWORD *)this->__pad_58C + 4 * v19 - 4)); /*0x4d4510*/
            }
          }
          (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x4d454a*/
          (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 242))(this, v71); /*0x4d4559*/
          goto LABEL_22; /*0x4d4559*/
        }
      }
      if ( !this->movementDestination ) /*0x4d45a2*/
        goto LABEL_28; /*0x4d45a2*/
      if ( !this->locomotor[0] ) /*0x4d45aa*/
        WinAPI::Wrapper(-2147467261); /*0x4d45b7*/
      if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 16))(this->locomotor[0]) ) /*0x4d45c5*/
      {
LABEL_28:
        (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 289))(this, 0, 1); /*0x4d45d3*/
        goto LABEL_70; /*0x4d45d3*/
      }
LABEL_23:
      _EAX = MissionClass::GetMissionControl((MissionClass *)this); /*0x4d4569*/
      __asm /*0x4d4570*/
      {
        fld qword ptr [eax+10h]
        fmul ds:dbl_7E27F8
      }
      LOWORD(v21) = Math::RoundToInt(v1); /*0x4d4579*/
      return v21 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d45a1*/
    case 1:
      target = this->?; /*0x4d45d8*/
      if ( target )
        v23 = (target->abstractFlags & 2) != 0 ? (#375 **)target : 0;
      else
        v23 = 0; /*0x4d45e2*/
      v24 = (*((int (__thiscall **)(FootClass *, #375 **))this->TechnoClass + 185))(this, v23); /*0x4d45ff*/
      if ( !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 204))(this) ) /*0x4d460d*/
        goto LABEL_41; /*0x4d460d*/
      if ( !v23 ) /*0x4d4615*/
        goto LABEL_38; /*0x4d4615*/
      if ( (*((int (__thiscall **)(#375 **))*v23 + 11))(v23) != 6 ) /*0x4d4621*/
        goto LABEL_41; /*0x4d4621*/
      if ( !(unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->?, v23[135]) ) /*0x4d4630*/
        goto LABEL_41; /*0x4d4630*/
      BuildingClass::GetHealthRatio((BuildingClass *)v23); /*0x4d463b*/
      _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4d4640*/
      __asm /*0x4d4646*/
      {
        fcomp qword ptr [ecx+1708h]
        fnstsw ax
      }
      if ( (_AX & 0x4100) == 0 ) /*0x4d4651*/
      {
        (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x4d4659*/
      }
      else
      {
LABEL_41:
        if ( v23 ) /*0x4d46a3*/
        {
          if ( (*((unsigned __int8 (__thiscall **)(FootClass *, #375 **, int))this->TechnoClass + 234))(this, v23, v24) ) /*0x4d46ab*/
            goto LABEL_44; /*0x4d46ab*/
          v32 = (_DWORD *)(*((int (__thiscall **)(#375 **, _BYTE *))*v23 + 19))(v23, v86); /*0x4d46c3*/
          FootClass_field_5DC = this->FootClass_field_5DC; /*0x4d46c8*/
          LOWORD(v67) = *v32 / 256; /*0x4d46e0*/
          HIWORD(v67) = v32[1] / 256; /*0x4d46f4*/
          v72 = v67; /*0x4d46fd*/
          v65 = (*((int (__thiscall **)(#375 **, _DWORD, int))*v23 + 47))(v23, 0, -1); /*0x4d470b*/
          v34 = *(_DWORD *)(FootClass_field_5DC + 320) >> 8; /*0x4d4712*/
          LOBYTE(v34) = v34 & 1; /*0x4d4715*/
          if ( Pathfinding::CalcDistance( /*0x4d472e*/
                 (int)&stru_87E790.__pad_D8[80],
                 (__int16 *)(FootClass_field_5DC + 36),
                 (__int16 *)&v73,
                 (int)this,
                 v34,
                 v65,
                 0) < v4 )
          {
LABEL_44:
            (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 335))(this, 0); /*0x4d473a*/
            if ( this->? ) /*0x4d4740*/
              goto LABEL_23; /*0x4d4748*/
            (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, this->?, 1); /*0x4d475b*/
            TechnoClass::SetFocus((TechnoClass *)this, 0); /*0x4d4766*/
            this->FootClass_field_5DC = 0; /*0x4d476b*/
            this->? = 0; /*0x4d4771*/
            return 45; /*0x4d4786*/
          }
        }
      }
LABEL_38:
      if ( !this->? )
      {
        v27 = (int (__thiscall **)(FootClass *, int, int))this->TechnoClass; /*0x4d4673*/
        v28 = (*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)this->FootClass_field_5DC + 72))( /*0x4d467e*/
                this->FootClass_field_5DC,
                v80,
                0);
        v29 = v27[241](this, 2, v28); /*0x4d4686*/
        v30 = v29; /*0x4d468c*/
        v71 = v29; /*0x4d4690*/
        v31 = v29 ? ((*(_BYTE *)(v29 + 20) & 2) != 0 ? v29 : 0) : 0;
        v35 = (*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 185))(this, v31); /*0x4d479a*/
        if ( v31 ) /*0x4d47a2*/
        {
          if ( (*((unsigned __int8 (__thiscall **)(FootClass *, int, int))this->TechnoClass + 234))(this, v31, v35) ) /*0x4d47ae*/
          {
LABEL_51:
            (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 242))(this, v30); /*0x4d4835*/
            (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x4d4848*/
            return 1; /*0x4d485d*/
          }
          v36 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v31 + 76))(v31, v81); /*0x4d47c3*/
          v37 = this->FootClass_field_5DC; /*0x4d47c8*/
          LOWORD(v68) = *v36 / 256; /*0x4d47e0*/
          HIWORD(v68) = v36[1] / 256; /*0x4d47f6*/
          v73 = v68; /*0x4d47ff*/
          v38 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v31 + 188))(v31, 0, -1); /*0x4d4805*/
          v39 = *(_DWORD *)(v37 + 320) >> 8; /*0x4d4812*/
          LOBYTE(v39) = v39 & 1; /*0x4d4815*/
          if ( Pathfinding::CalcDistance( /*0x4d482f*/
                 (int)&stru_87E790.__pad_D8[80],
                 (__int16 *)(v37 + 36),
                 (__int16 *)&v74,
                 (int)this,
                 v39,
                 v38,
                 0) < v4 )
          {
            v30 = v71; /*0x4d4831*/
            goto LABEL_51; /*0x4d4831*/
          }
        }
      }
      v40 = (void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass; /*0x4d485e*/
      this->? = 2; /*0x4d4864*/
      v40[242](this, 0); /*0x4d486e*/
      if ( this->? ) /*0x4d4874*/
      {
        v41 = (__int16 *)(*((int (__thiscall **)(FootClass *))this->TechnoClass + 113))(this); /*0x4d488c*/
        v42 = (*((int (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 47))(this, 0); /*0x4d4894*/
        focus = this->?; /*0x4d489a*/
        LOBYTE(v71) = v42; /*0x4d48a0*/
        v44 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))focus->vtable0 + 18))(focus, v83); /*0x4d48ab*/
        v45 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v44); /*0x4d48b9*/
        v46 = this->FootClass_field_5DC; /*0x4d48bb*/
        v47 = v71; /*0x4d48c1*/
        v48 = *(_DWORD *)(v46 + 320) >> 8; /*0x4d48d0*/
        LOBYTE(v48) = v48 & 1; /*0x4d48d3*/
        v41 += 18; /*0x4d48d6*/
        v49 = Pathfinding::CalcDistance( /*0x4d48e3*/
                (int)&stru_87E790.__pad_D8[80],
                v41,
                (__int16 *)(v46 + 36),
                (int)this,
                v71,
                v48,
                -1);
        v50 = (unsigned int)v45->flags[0] >> 8; /*0x4d48f0*/
        LOBYTE(v50) = v50 & 1; /*0x4d48f3*/
        v71 = v49; /*0x4d4903*/
        if ( v49 >= Pathfinding::CalcDistance( /*0x4d4910*/
                      (int)&stru_87E790.__pad_D8[80],
                      v41,
                      (__int16 *)&v45->smudgeTypeIndex,
                      (int)this,
                      v47,
                      v50,
                      -1) )
          (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, this->?, 1); /*0x4d4942*/
        else
          (*((void (__thiscall **)(FootClass *, int, int))this->TechnoClass + 288))(this, this->FootClass_field_5DC, 1); /*0x4d491f*/
        return 1; /*0x4d4928*/
      }
      else
      {
        v51 = (void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass; /*0x4d4958*/
        this->? = 0; /*0x4d4960*/
        v51[289](this, 0, 1); /*0x4d496a*/
        this->? = 3; /*0x4d4970*/
        return 1; /*0x4d497d*/
      }
    case 2:
      v52 = (int (__thiscall **)(FootClass *, int, int))this->TechnoClass; /*0x4d4990*/
      v53 = (*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)this->FootClass_field_5DC + 72))( /*0x4d499b*/
              this->FootClass_field_5DC,
              v85,
              0);
      v54 = v52[241](this, 2, v53); /*0x4d49a9*/
      v71 = v54; /*0x4d49ad*/
      if ( v54 )
        v55 = (*(_BYTE *)(v54 + 20) & 2) != 0 ? v54 : 0;
      else
        v55 = 0; /*0x4d49b3*/
      v56 = (*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 185))(this, v55); /*0x4d49c9*/
      if ( !v55 ) /*0x4d49d1*/
        goto LABEL_66; /*0x4d49d1*/
      if ( (*((unsigned __int8 (__thiscall **)(FootClass *, int, int))this->TechnoClass + 234))(this, v55, v56) ) /*0x4d49dd*/
        goto LABEL_65; /*0x4d49e5*/
      v57 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v55 + 76))(v55, v87); /*0x4d49f9*/
      v58 = this->FootClass_field_5DC; /*0x4d49fe*/
      LOWORD(v69) = *v57 / 256; /*0x4d4a16*/
      HIWORD(v69) = v57[1] / 256; /*0x4d4a2c*/
      v76 = v69; /*0x4d4a35*/
      v59 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v55 + 188))(v55, 0, -1); /*0x4d4a3b*/
      v60 = *(_DWORD *)(v58 + 320) >> 8; /*0x4d4a48*/
      LOBYTE(v60) = v60 & 1; /*0x4d4a4b*/
      if ( Pathfinding::CalcDistance( /*0x4d4a65*/
             (int)&stru_87E790.__pad_D8[80],
             (__int16 *)(v58 + 36),
             (__int16 *)&v77,
             (int)this,
             v60,
             v59,
             0) < v4 )
      {
        v54 = v71; /*0x4d4a67*/
LABEL_65:
        (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 242))(this, v54); /*0x4d4a6b*/
        (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x4d4a7e*/
LABEL_22:
        this->? = 1; /*0x4d455f*/
        goto LABEL_23; /*0x4d455f*/
      }
LABEL_66:
      if ( this->movementDestination ) /*0x4d4a89*/
        goto LABEL_23; /*0x4d4a91*/
      (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x4d4a9e*/
      v61 = this->?; /*0x4d4aa4*/
      if ( v61 ) /*0x4d4aac*/
      {
        (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, v61, 1); /*0x4d4ab5*/
        TechnoClass::SetFocus((TechnoClass *)this, 0); /*0x4d4abe*/
        this->? = 0; /*0x4d4ac3*/
        this->FootClass_field_5DC = 0; /*0x4d4ac9*/
        goto LABEL_23; /*0x4d4acf*/
      }
      v62 = (void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass; /*0x4d4ad4*/
      this->? = 0; /*0x4d4ad8*/
      v62[289](this, 0, 1); /*0x4d4ae1*/
LABEL_70:
      this->? = 3; /*0x4d4ae7*/
      return 1; /*0x4d4af4*/
    case 3:
      if ( !this->movementDestination ) /*0x4d42cc*/
        goto LABEL_23; /*0x4d42cc*/
      this->? = 0; /*0x4d42d2*/
      return 1; /*0x4d42eb*/
    default:
      goto LABEL_23;
  }
}



// ==== 0x004D4B20  FootClass::CheckVoiceResponse  this=FootClass  sig=csp ====
int __fastcall FootClass::CheckVoiceResponse(FootClass *this)
{
  int *v2; // edi
  AbstractClass *target; // ecx
  _BYTE *v4; // edi
  _DWORD *v5; // eax
  CellClass *v6; // eax
  char *MissionControl; // eax
  int v8; // eax
  char v10[12]; // [esp+10h] [ebp-Ch] BYREF

  if ( this )
    v2 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15 ? (int *)this : 0;
  else
    v2 = 0; /*0x4d4b2b*/
  target = this->?; /*0x4d4b43*/
  if ( target && (*((int (__thiscall **)(AbstractClass *))target->vtable0 + 11))(target) == 6 ) /*0x4d4b55*/
  {
    if ( this->movementDestination ) /*0x4d4b57*/
      goto LABEL_18; /*0x4d4b5f*/
    if ( v2 ) /*0x4d4b67*/
    {
      if ( *(_BYTE *)(v2[432] + 3778) /*0x4d4baa*/
        || (unsigned __int8)TechnoTypeClass::HasVoiceResponse(v2, 14)
        || (v4 = (_BYTE *)v2[432], v4[3779])
        || v4[3764]
        || v4[3765]
        || v4[3774] )
      {
        (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, this->?, 1); /*0x4d4bc1*/
      }
    }
  }
  if ( !this->movementDestination ) /*0x4d4bc7*/
  {
    (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 289))(this, 0, 1); /*0x4d4bd9*/
    v5 = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *))this->TechnoClass + 18))(this, v10); /*0x4d4be8*/
    v6 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v5); /*0x4d4bf1*/
    if ( Cell::IsBridge((Cell *)v6) ) /*0x4d4bf8*/
      (*((void (__thiscall **)(FootClass *, int *, int, _DWORD))this->TechnoClass + 93))(this, &dword_8B3DA8, 1, 0); /*0x4d4c0e*/
  }
LABEL_18:
  if ( !this->? /*0x4d4c3f*/
    && !(unsigned __int8)House::IsCurrentPlayer((House *)this->?)
    && ((*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) != 15
     || !*(_BYTE *)(this->q1B0 + 3764)) )
  {
    (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x4d4c4f*/
    (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x4d4c5d*/
    (*((void (__thiscall **)(FootClass *, int, _DWORD))this->TechnoClass + 122))(this, 15, 0); /*0x4d4c6b*/
  }
  MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4d4c73*/
  LOWORD(v8) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d4c81*/
  return v8 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d4c9e*/
}



// ==== 0x004D4CB0  FootClass::ProcessMissionVoice  this=FootClass  sig=csp ====
int __fastcall FootClass::ProcessMissionVoice(FootClass *this)
{
  int *v2; // edi
  AbstractClass *target; // ecx
  _DWORD *v4; // eax
  CellClass *v5; // eax
  char *MissionControl; // eax
  int v7; // eax
  char v9[12]; // [esp+10h] [ebp-Ch] BYREF

  if ( this )
    v2 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15 ? (int *)this : 0;
  else
    v2 = 0; /*0x4d4cbb*/
  target = this->?; /*0x4d4cd3*/
  if ( target && (*((int (__thiscall **)(AbstractClass *))target->vtable0 + 11))(target) == 6 ) /*0x4d4ce5*/
  {
    if ( this->movementDestination ) /*0x4d4ce7*/
      goto LABEL_15; /*0x4d4cef*/
    if ( v2 /*0x4d4d1c*/
      && (*(_BYTE *)(v2[432] + 3778)
       || (unsigned __int8)TechnoTypeClass::HasVoiceResponse(v2, 14)
       || *(_BYTE *)(v2[432] + 3779)) )
    {
      (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, this->?, 1); /*0x4d4d33*/
    }
  }
  if ( !this->movementDestination ) /*0x4d4d39*/
  {
    (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 289))(this, 0, 1); /*0x4d4d4b*/
    v4 = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *))this->TechnoClass + 18))(this, v9); /*0x4d4d5a*/
    v5 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v4); /*0x4d4d63*/
    if ( Cell::IsBridge((Cell *)v5) ) /*0x4d4d6a*/
      (*((void (__thiscall **)(FootClass *, int *, int, _DWORD))this->TechnoClass + 93))(this, &dword_8B3DA8, 1, 0); /*0x4d4d80*/
  }
LABEL_15:
  MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4d4d86*/
  LOWORD(v7) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d4d96*/
  return v7 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d4db3*/
}



// ==== 0x004D4DC0  FootClass::ScanTarget  this=FootClass  sig=csp ====
int __fastcall InfantryClass::ScanTarget(FootClass *this)
{
  void (__thiscall **vtable0)(FootClass *, void *, int); // edi
  __int16 *PlacementCellsAlt; // eax
  void *v4; // eax
  int (__thiscall **v5)(FootClass *, int, int *, _DWORD); // edx
  int v6; // eax
  double v7; // st7
  int v8; // eax
  int v9; // ebp
  int *v10; // eax
  int v11; // edi
  int v12; // ebx
  int *v13; // eax
  int v14; // ecx
  int v15; // eax
  int result; // eax
  int v17; // [esp+48h] [ebp-24h] BYREF
  int v18; // [esp+4Ch] [ebp-20h]
  int v19; // [esp+50h] [ebp-1Ch]
  _BYTE v20[12]; // [esp+54h] [ebp-18h] BYREF
  _BYTE v21[12]; // [esp+60h] [ebp-Ch] BYREF

  if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 912) /*0x4d4dde*/
    && !(*((int (__thiscall **)(FootClass *))this->TechnoClass + 114))(this) )
  {
    vtable0 = (void (__thiscall **)(FootClass *, void *, int))this->TechnoClass; /*0x4d4de8*/
    PlacementCellsAlt = (__int16 *)MapClass::FindPlacementCellsAlt((char *)this, &v17, (int)this); /*0x4d4df4*/
    v4 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], PlacementCellsAlt); /*0x4d4dff*/
    vtable0[288](this, v4, 1); /*0x4d4e07*/
  }
  if ( this->FootClass_field_bool_68E ) /*0x4d4e0d*/
  {
    v17 = this->?[0]; /*0x4d4e21*/
    v5 = (int (__thiscall **)(FootClass *, int, int *, _DWORD))this->TechnoClass; /*0x4d4e25*/
    v18 = this->?[1]; /*0x4d4e2a*/
    v19 = this->?[2]; /*0x4d4e36*/
    v6 = v5[241](this, 1, &v17, 0); /*0x4d4e3e*/
    if ( v6 ) /*0x4d4e46*/
    {
      (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 242))(this, v6); /*0x4d4e4d*/
      this->FootClass_field_bool_68E = 0; /*0x4d4e53*/
    }
  }
  if ( this->? ) /*0x4d4e5a*/
    (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 335))(this, 0); /*0x4d4e6a*/
  else
    (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 289))(this, 0, 1); /*0x4d4e7a*/
  v7 = *((double *)MissionClass::GetMissionControl((MissionClass *)this) + 2) * 900.0; /*0x4d4e8a*/
  LOWORD(v8) = Math::RoundToInt(v7); /*0x4d4e90*/
  v9 = v8 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d4eb3*/
  if ( !this->?
    || (!this
     || (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) != 15
     || !*((_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15
                   ? this + 1
                   : (FootClass *)1728)->TechnoClass
         + 1685))
    && (!*(_DWORD *)(*((int (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 254))(this, 0)
     || *(int *)(*(_DWORD *)(*((int (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 254))(this, 0) + 180) > 512) )
  {
    return v9; /*0x4d4f1c*/
  }
  v10 = (int *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))this->?->TechnoClass::vtable0 + 18))(this->?, v20); /*0x4d4f30*/
  v11 = *v10; /*0x4d4f33*/
  v12 = v10[1]; /*0x4d4f35*/
  v13 = (int *)(*((int (__thiscall **)(FootClass *, _BYTE *))this->TechnoClass + 18))(this, v21); /*0x4d4f41*/
  v14 = *v13; /*0x4d4f44*/
  v18 = v13[1] - v12; /*0x4d4f4d*/
  v17 = v14 - v11; /*0x4d4f51*/
  Math::Sqrt((double)(v14 - v11) * (double)(v14 - v11) + (double)v18 * (double)v18); /*0x4d4f71*/
  LOWORD(v15) = Math::RoundToInt(v7); /*0x4d4f79*/
  v17 = v15; /*0x4d4f83*/
  if ( v15 > 768 ) /*0x4d4f88*/
    return v9; /*0x4d4fa9*/
  result = v9; /*0x4d4f99*/
  if ( (double)v17 >= 281.6 ) /*0x4d4f9b*/
    return v9 / 2; /*0x4d4fa3*/
  return result; /*0x4d4fa0*/
}



// ==== 0x004D4FC0  ObjectClass::method_4D4FC0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_4D4FC0(ObjectClass *this)
{
  int v2; // ebx
  _WORD *v3; // eax
  Cell *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // ebp
  int v9; // [esp+10h] [ebp-Ch]
  __int16 v10[2]; // [esp+14h] [ebp-8h] BYREF
  char v11[4]; // [esp+18h] [ebp-4h] BYREF

  v2 = 0; /*0x4d4fc9*/
  while ( 1 ) /*0x4d4fd4*/
  {
    v3 = (_WORD *)(*((int (__thiscall **)(ObjectClass *, char *))this->AbstractClass + 110))(this, v11); /*0x4d4fd4*/
    LOWORD(v9) = LOWORD(g_DDrawSurfaceManager.scenario[(v2 & 7) + 82]) + *v3; /*0x4d4ff8*/
    HIWORD(v9) = v3[1] + HIWORD(g_DDrawSurfaceManager.scenario[(v2 & 7) + 82]); /*0x4d4ffe*/
    *(_DWORD *)v10 = v9; /*0x4d500c*/
    v4 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v10); /*0x4d5010*/
    v5 = Cell::IsBridge(v4); /*0x4d5017*/
    v6 = v5; /*0x4d501c*/
    if ( v5 ) /*0x4d5020*/
    {
      if ( *(_BYTE *)(v5[328] + 5493) ) /*0x4d5028*/
      {
        v7 = (*(int (__thiscall **)(_DWORD *))(*v5 + 60))(v5); /*0x4d5039*/
        if ( v7 == (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 15))(this) ) /*0x4d5044*/
          break; /*0x4d5044*/
      }
    }
    if ( ++v2 >= 8 ) /*0x4d504a*/
      return 0; /*0x4d5059*/
  }
  return v6; /*0x4d5050*/
}



// ==== 0x004D5070  FootClass::FindMovePosition  this=FootClass  sig=csp ====
int __thiscall FootClass::FindMovePosition(FootClass *this)
{
  char *MissionControl; // eax
  int result; // eax
  int (__thiscall **vtable0)(FootClass *); // edx
  int v5; // ebx
  _WORD *v6; // eax
  int v7; // edx
  Cell *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // edi
  int v11; // ebp
  void (__thiscall **v12)(FootClass *, int, _DWORD); // eax
  void (__thiscall **v13)(FootClass *, void *, int); // edi
  __int16 *PlacementCellsAlt; // eax
  void *v15; // eax
  char *v16; // eax
  int v17; // eax
  int v18; // ebp
  AbstractClass *target; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // edi
  int v23; // esi
  int v24; // [esp+Ch] [ebp-Ch]
  __int16 v25[2]; // [esp+10h] [ebp-8h] BYREF
  int v26; // [esp+14h] [ebp-4h] BYREF

  if ( this->shouldEnterAbsorber ) /*0x4d5076*/
  {
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 208))(this); /*0x4d5082*/
LABEL_7:
    MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4d50b4*/
    LOWORD(result) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d50c4*/
    return result; /*0x4d50cd*/
  }
  if ( this->shouldEnterOccupiable ) /*0x4d508a*/
  {
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 210))(this); /*0x4d5098*/
    goto LABEL_7; /*0x4d509e*/
  }
  if ( this->shouldGarrisonStructure ) /*0x4d50a0*/
  {
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 211))(this); /*0x4d50ae*/
    goto LABEL_7; /*0x4d50ae*/
  }
  vtable0 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4d50d4*/
  if ( this->? ) /*0x4d50ce*/
  {
    if ( *(_BYTE *)(vtable0[33](this) + 912) && !(*((int (__thiscall **)(FootClass *))this->TechnoClass + 114))(this) ) /*0x4d51f6*/
    {
      v13 = (void (__thiscall **)(FootClass *, void *, int))this->TechnoClass; /*0x4d5200*/
      PlacementCellsAlt = (__int16 *)MapClass::FindPlacementCellsAlt((char *)this, &v26, (int)this); /*0x4d520c*/
      v15 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], PlacementCellsAlt); /*0x4d5217*/
      v13[288](this, v15, 1); /*0x4d521f*/
    }
  }
  else if ( *(_DWORD *)((int (__thiscall *)(FootClass *, int))vtable0[254])(this, 1) /*0x4d5108*/
         && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 254))(
                                                this,
                                                1)
                                 + 172)
                     + 344) )
  {
    v5 = 0; /*0x4d5116*/
    while ( 1 ) /*0x4d5121*/
    {
      v6 = (_WORD *)(*((int (__thiscall **)(FootClass *, int *))this->TechnoClass + 110))(this, &v26); /*0x4d5121*/
      v7 = v5 & 7; /*0x4d5129*/
      LOWORD(v24) = *v6 + LOWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x4d514a*/
      HIWORD(v24) = v6[1] + HIWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x4d514f*/
      *(_DWORD *)v25 = v24; /*0x4d515e*/
      v8 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x4d5162*/
      v9 = Cell::IsBridge(v8); /*0x4d5169*/
      v10 = v9; /*0x4d516e*/
      if ( v9 ) /*0x4d5172*/
      {
        if ( *(_BYTE *)(v9[328] + 5493) ) /*0x4d517a*/
        {
          v11 = (*(int (__thiscall **)(_DWORD *))(*v9 + 60))(v9); /*0x4d518b*/
          if ( v11 == (*((int (__thiscall **)(FootClass *))this->TechnoClass + 15))(this) ) /*0x4d5196*/
            break; /*0x4d5196*/
        }
      }
      if ( ++v5 >= 8 ) /*0x4d519c*/
        goto LABEL_16; /*0x4d519c*/
    }
    if ( !v10 ) /*0x4d51b0*/
    {
LABEL_16:
      (*((void (__thiscall **)(FootClass *))this->TechnoClass + 286))(this); /*0x4d51a2*/
      goto LABEL_23; /*0x4d51ac*/
    }
    (*((void (__thiscall **)(FootClass *, _DWORD *))this->TechnoClass + 242))(this, v10); /*0x4d51b7*/
    v12 = (void (__thiscall **)(FootClass *, int, _DWORD))this->TechnoClass; /*0x4d51bd*/
    this->FootClass_field_bool_68E = 1; /*0x4d51c5*/
    v12[122](this, 1, 0); /*0x4d51cc*/
  }
  else
  {
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 286))(this); /*0x4d51d8*/
  }
LABEL_23:
  v16 = MissionClass::GetMissionControl((MissionClass *)this); /*0x4d5225*/
  LOWORD(v17) = Math::RoundToInt(*((double *)v16 + 2) * 900.0); /*0x4d5235*/
  v18 = v17; /*0x4d523c*/
  if ( this /*0x4d5285*/
    && (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15
    && !(unsigned __int8)House::IsCurrentPlayer((House *)this->?)
    && (*(_BYTE *)(this->q1B0 + 3778) || (unsigned __int8)TechnoTypeClass::HasVoiceResponse(
                                                                         (int *)this,
                                                                         14))
    && (*((int (__thiscall **)(FootClass *))this->TechnoClass + 97))(this) != 17 )
  {
    target = this->?; /*0x4d5287*/
    if ( target ) /*0x4d528f*/
    {
      if ( (*((int (__thiscall **)(AbstractClass *))target->vtable0 + 11))(target) == 6 ) /*0x4d5299*/
        (*((void (__thiscall **)(FootClass *, int, _DWORD))this->TechnoClass + 122))(this, 17, 0); /*0x4d52a3*/
    }
  }
  v20 = this->?[0]; /*0x4d52a9*/
  v21 = this->?[2]; /*0x4d52af*/
  v22 = 0; /*0x4d52bb*/
  if ( v20 != -1 ) /*0x4d52c0*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v20 >= v21 ) /*0x4d52c8*/
    {
LABEL_40:
      if ( !*(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1712) || this->?[4] <= 0 ) /*0x4d531d*/
        return v18 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d5336*/
      return v22; /*0x4d5336*/
    }
    v21 -= *(_DWORD *)&stru_A8EB00.?[416] - v20; /*0x4d52ca*/
  }
  if ( !v21 ) /*0x4d52ce*/
    goto LABEL_40; /*0x4d52ce*/
  v22 = this->?[2]; /*0x4d52d0*/
  v23 = this->?[0]; /*0x4d52d6*/
  if ( v23 == -1 ) /*0x4d52df*/
    return v22; /*0x4d5338*/
  if ( *(_DWORD *)&stru_A8EB00.?[416] - v23 >= v22 ) /*0x4d52e7*/
    return 0; /*0x4d52f7*/
  else
    return v22 - (*(_DWORD *)&stru_A8EB00.?[416] - v23); /*0x4d52eb*/
}



// ==== 0x004D5350  FootClass::ProcessDeploy  this=FootClass  sig=csp ====
int __fastcall InfantryClass::ProcessDeploy(FootClass *this)
{
  void *v2; // edx
  int v3; // eax
  int *v4; // edi
  _BYTE *v5; // eax
  AbstractClass *target; // ecx
  FactoryClass *slaveManager; // ecx
  void (__thiscall **vtable0)(FootClass *, void *, int); // edi
  void *v9; // eax
  char *MissionControl; // eax
  int v11; // eax
  __int16 v13[2]; // [esp+8h] [ebp-14h] BYREF
  int v14; // [esp+Ch] [ebp-10h] BYREF
  _DWORD v15[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1748) /*0x4d5392*/
    || (v15[0] = this->?[0],
        v2 = this->TechnoClass,
        v15[1] = this->?[1],
        v15[2] = this->?[2],
        !(*((unsigned __int8 (__thiscall **)(FootClass *, _DWORD *, _DWORD))v2 + 231))(this, v15, 0)) )
  {
    if ( (unsigned __int8)House::IsCurrentPlayer((House *)this->?) || *(_DWORD *)&dword_A8B238 ) /*0x4d5504*/
    {
      (*((void (__thiscall **)(FootClass *))this->TechnoClass + 286))(this); /*0x4d557c*/
    }
    else
    {
      *(_DWORD *)v13 = g_FootClass_Pool; /*0x4d5510*/
      *(_DWORD *)v13 = *HouseClass::GetCurrentOption((HouseClass *)dword_A83D4C, &v14); /*0x4d5529*/
      if ( *(_DWORD *)v13 != g_FootClass_Pool ) /*0x4d552d*/
      {
        slaveManager = (FactoryClass *)this->?; /*0x4d553d*/
        if ( slaveManager ) /*0x4d5545*/
          FactoryClass::ResetProductionTimers(slaveManager); /*0x4d5547*/
        vtable0 = (void (__thiscall **)(FootClass *, void *, int))this->TechnoClass; /*0x4d554c*/
        v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13); /*0x4d555a*/
        vtable0[288](this, v9, 1); /*0x4d5562*/
        (*((void (__thiscall **)(FootClass *, int, int))this->TechnoClass + 122))(this, 2, 1); /*0x4d5570*/
      }
    }
    goto LABEL_25; /*0x4d5576*/
  }
  v3 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this); /*0x4d53a4*/
  v4 = v3 == 15 ? (int *)this : 0;
  if ( !v4 ) /*0x4d53b4*/
  {
    (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 335))(this, 0); /*0x4d54e3*/
    goto LABEL_25; /*0x4d54e9*/
  }
  v5 = (v3 == 15 ? this + 1 : (FootClass *)1728)->TechnoClass;
  if ( v5[3779] && !v5[3778] && !(unsigned __int8)TechnoTypeClass::HasVoiceResponse(v4, 14) ) /*0x4d53df*/
  {
LABEL_14:
    (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, this->?, 1); /*0x4d547c*/
    (*((void (__thiscall **)(FootClass *, int, _DWORD))this->TechnoClass + 122))(this, 8, 0); /*0x4d5497*/
    if ( !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 128))(this) ) /*0x4d54a9*/
      goto LABEL_25; /*0x4d54a9*/
    goto LABEL_12; /*0x4d54a9*/
  }
  if ( !*(_BYTE *)(v4[432] + 3778) && !(unsigned __int8)TechnoTypeClass::HasVoiceResponse(v4, 14) /*0x4d5428*/
    || (target = this->?) == 0
    || (*((int (__thiscall **)(AbstractClass *))target->vtable0 + 11))(target) != 6 )
  {
    if ( !*(_BYTE *)(v4[432] + 3782) ) /*0x4d547a*/
    {
      (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x4d54c6*/
      (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 335))(this, 0); /*0x4d54d2*/
      goto LABEL_25; /*0x4d54d8*/
    }
    goto LABEL_14; /*0x4d547a*/
  }
  (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, this->?, 1); /*0x4d5437*/
  (*((void (__thiscall **)(FootClass *, int, _DWORD))this->TechnoClass + 122))(this, 17, 0); /*0x4d5445*/
  if ( (*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 128))(this) ) /*0x4d544f*/
LABEL_12:
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 123))(this); /*0x4d545d*/
LABEL_25:
  MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4d5582*/
  LOWORD(v11) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d5592*/
  return v11 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d55b0*/
}



// ==== 0x004D55C0  FootClass::PlayCOM_audio  this=FootClass  sig=csp ====
char __thiscall FootClass::PlayCOM_audio(FootClass *this)
{
  if ( !this->locomotor[0] ) /*0x4d55c3*/
    WinAPI::Wrapper(-2147467261); /*0x4d55d2*/
  (*(void (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 72))(this->locomotor[0]); /*0x4d55e0*/
  return 0; /*0x4d55e5*/
}



// ==== 0x004D55F0  FootClass::Destru_vt319  this=FootClass  sig=csp ====
BOOL __thiscall FootClass::Destru_vt319(FootClass *this, _DWORD *a2)
{
  if ( !this->locomotor[0] ) /*0x4d5602*/
    WinAPI::Wrapper(-2147467261); /*0x4d5611*/
  (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this->locomotor[0] + 68))( /*0x4d562c*/
    this->locomotor[0],
    *a2,
    a2[1],
    a2[2]);
  if ( !this->locomotor[0] ) /*0x4d562f*/
    WinAPI::Wrapper(-2147467261); /*0x4d563e*/
  return (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 16))(this->locomotor[0]) != 0; /*0x4d5651*/
}



// ==== 0x004D5660  FootClass::EnterAttackState  this=FootClass  sig=csp ====
int __thiscall FootClass::EnterAttackState(FootClass *this)
{
  void (__thiscall **vtable0)(FootClass *); // edx

  (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x4d5669*/
  vtable0 = (void (__thiscall **)(FootClass *))this->TechnoClass; /*0x4d566f*/
  this->pathDirections[0] = -1; /*0x4d5673*/
  vtable0[320](this); /*0x4d567d*/
  return TechnoClass::ProcessDeploymentState((TechnoClass *)this); /*0x4d568a*/
}



// ==== 0x004D5690  FootClass::CalculateApproachPath  this=FootClass  sig=csp ====
void *__thiscall FootClass::CalculateApproachPath(FootClass *this, char a2)
{
  double v2; // st7
  AbstractClass *locomotorTarget; // eax
  int v5; // esi
  int (__thiscall **vtable0)(FootClass *, int); // eax
  int v7; // eax
  int v8; // edi
  char v10; // al
  int currentMission; // eax
  int (__thiscall **v12)(FootClass *); // edx
  CellClass *v13; // eax
  int v14; // eax
  int v15; // eax
  int (__stdcall ***Checked)(_DWORD, void *, __int16 *); // eax
  int v17; // esi
  int v18; // eax
  int v19; // edi
  _DWORD *v20; // esi
  _DWORD *v21; // eax
  int *v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // eax
  int ComPtr_field_0x04; // eax
  bool v27; // zf
  void *v28; // esi
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  AbstractClass *v32; // esi
  _DWORD *v33; // eax
  void (__thiscall **v34)(FootClass *, void *); // esi
  void *v35; // eax
  AbstractClass *v36; // esi
  int FoundationHeight; // eax
  BuildingTypeClass *uniqueId; // ecx
  int FoundationWidth; // eax
  int v40; // eax
  int v41; // eax
  bool v42; // cc
  int v43; // eax
  int *v44; // eax
  int v46; // edx
  int v47; // kr04_4
  AbstractClass *v48; // ecx
  AbstractClass *v49; // eax
  int v51; // eax
  int *v52; // eax
  AbstractClass *v53; // ecx
  AbstractClass *v54; // ecx
  int v55; // eax
  int v56; // eax
  int v57; // eax
  CellClass *v58; // eax
  int *v59; // eax
  int v60; // esi
  int v61; // edi
  CellClass *v62; // eax
  _DWORD *v63; // eax
  int v64; // ecx
  ObjectPlacement *v66; // esi
  _DWORD *v67; // eax
  int *v68; // eax
  int v69; // esi
  int v70; // edi
  int v71; // edx
  int v72; // eax
  int v73; // eax
  int v75; // esi
  int v76; // edi
  int v77; // ecx
  int v78; // eax
  int v79; // eax
  int (__thiscall **v80)(FootClass *); // edx
  CellClass *v81; // edi
  _DWORD *v82; // eax
  int *v83; // eax
  int v84; // edx
  CellClass *v85; // eax
  int *v86; // eax
  int v87; // ecx
  int v88; // eax
  int v89; // eax
  int (__thiscall **v90)(FootClass *, _DWORD); // edx
  _DWORD **v91; // eax
  char v93; // cl
  void (__thiscall **v94)(FootClass *, _DWORD); // eax
  _DWORD *v95; // eax
  int onBridge; // edx
  bool *v97; // eax
  char IsBuildable; // al
  void (__thiscall **v99)(FootClass *); // edx
  _DWORD *v100; // eax
  bool *v101; // eax
  __int16 v102; // ax
  int v103; // edi
  int v104; // ecx
  __int16 v105; // ax
  AbstractClass *v106; // ecx
  int *v107; // eax
  int v108; // ecx
  int v109; // eax
  int v110; // eax
  int (__thiscall **v111)(FootClass *, _DWORD); // edx
  _DWORD **v112; // eax
  _DWORD *v114; // eax
  bool *v115; // eax
  char v116; // al
  void (__thiscall **v117)(FootClass *); // edx
  _DWORD *v118; // eax
  bool *v119; // eax
  signed int v120; // ecx
  signed int v121; // edi
  _DWORD *v122; // eax
  int v123; // edx
  int *v124; // eax
  int v125; // kr48_4
  signed int v126; // ecx
  signed int v127; // edi
  int v128; // ecx
  int v129; // eax
  void (__thiscall **v131)(FootClass *, void *, int); // esi
  void *v132; // eax
  int (__thiscall **v133)(FootClass *, __int16 *, _DWORD); // edx
  _DWORD *v134; // eax
  char v135; // al
  int v136; // eax
  int v137; // eax
  void (__thiscall **v138)(FootClass *, void *, int); // esi
  void *v139; // eax
  AbstractClass *v140; // ebx
  char v141; // [esp+58h] [ebp-180h]
  int v142; // [esp+64h] [ebp-174h]
  int v143; // [esp+64h] [ebp-174h]
  int v144; // [esp+68h] [ebp-170h]
  int v145; // [esp+68h] [ebp-170h]
  double v146; // [esp+70h] [ebp-168h]
  char v147; // [esp+70h] [ebp-168h]
  int v148; // [esp+70h] [ebp-168h]
  char v149; // [esp+70h] [ebp-168h]
  int v150; // [esp+70h] [ebp-168h]
  int TileIndex; // [esp+74h] [ebp-164h]
  char v152; // [esp+74h] [ebp-164h]
  int v153; // [esp+74h] [ebp-164h]
  double v154; // [esp+78h] [ebp-160h]
  double v155; // [esp+78h] [ebp-160h]
  double v156; // [esp+78h] [ebp-160h]
  double v157; // [esp+78h] [ebp-160h]
  double v158; // [esp+78h] [ebp-160h]
  double v159; // [esp+78h] [ebp-160h]
  int v160; // [esp+78h] [ebp-160h]
  AbstractClass *target; // [esp+7Ch] [ebp-15Ch]
  int v162; // [esp+80h] [ebp-158h]
  char v163; // [esp+92h] [ebp-146h]
  bool v164; // [esp+93h] [ebp-145h]
  char v165; // [esp+93h] [ebp-145h]
  __int16 v166[2]; // [esp+94h] [ebp-144h] BYREF
  __int16 v167[2]; // [esp+98h] [ebp-140h] BYREF
  __int16 v168[2]; // [esp+9Ch] [ebp-13Ch] BYREF
  int v169; // [esp+A0h] [ebp-138h]
  ComPtr v170; // [esp+A4h] [ebp-134h] BYREF
  int v171; // [esp+C8h] [ebp-110h]
  int v172; // [esp+CCh] [ebp-10Ch] BYREF
  int v173; // [esp+D0h] [ebp-108h]
  int GroundHeight; // [esp+D4h] [ebp-104h]
  int ComPtr_field_0x08; // [esp+D8h] [ebp-100h] BYREF
  int ComPtr_field_0x0C; // [esp+DCh] [ebp-FCh]
  int ComPtr_field_0x10; // [esp+E0h] [ebp-F8h]
  int ComPtr_field_0x14; // [esp+E4h] [ebp-F4h]
  double v179; // [esp+E8h] [ebp-F0h] BYREF
  char v180[4]; // [esp+F4h] [ebp-E4h] BYREF
  char v181; // [esp+F8h] [ebp-E0h] BYREF
  int v182; // [esp+FCh] [ebp-DCh]
  int v183; // [esp+100h] [ebp-D8h] BYREF
  int v184; // [esp+104h] [ebp-D4h]
  double v185; // [esp+108h] [ebp-D0h] BYREF
  int v186; // [esp+110h] [ebp-C8h]
  int v187; // [esp+11Ch] [ebp-BCh]
  int v188; // [esp+124h] [ebp-B4h]
  int v189; // [esp+12Ch] [ebp-ACh]
  int v190; // [esp+130h] [ebp-A8h]
  int v191; // [esp+134h] [ebp-A4h] BYREF
  int v192; // [esp+138h] [ebp-A0h]
  int v193; // [esp+13Ch] [ebp-9Ch]
  __int16 v194[2]; // [esp+140h] [ebp-98h] BYREF
  int v195; // [esp+144h] [ebp-94h]
  int v196; // [esp+148h] [ebp-90h]
  __int16 v197[2]; // [esp+150h] [ebp-88h] BYREF
  __int16 v198[4]; // [esp+154h] [ebp-84h] BYREF
  __int16 v199[6]; // [esp+15Ch] [ebp-7Ch] BYREF
  char v200[16]; // [esp+168h] [ebp-70h] BYREF
  char v201[16]; // [esp+178h] [ebp-60h] BYREF
  char v202[12]; // [esp+188h] [ebp-50h] BYREF
  char v203[8]; // [esp+194h] [ebp-44h] BYREF
  char v204[12]; // [esp+19Ch] [ebp-3Ch] BYREF
  char v205[12]; // [esp+1A8h] [ebp-30h] BYREF
  int v206[4]; // [esp+1B4h] [ebp-24h] BYREF
  char v207[8]; // [esp+1C4h] [ebp-14h] BYREF
  char v208[12]; // [esp+1CCh] [ebp-Ch] BYREF

  locomotorTarget = (AbstractClass *)this->?; /*0x4d56a1*/
  if ( locomotorTarget && locomotorTarget == this->? || !this->? ) /*0x4d56b7*/
    return 0; /*0x4d56bf*/
  v5 = (*((int (__thiscall **)(FootClass *, AbstractClass *))this->TechnoClass + 185))(this, this->?); /*0x4d56d0*/
  vtable0 = (int (__thiscall **)(FootClass *, int))this->TechnoClass; /*0x4d56d2*/
  v189 = v5; /*0x4d56d7*/
  v7 = vtable0[90](this, v5); /*0x4d56de*/
  v8 = v7; /*0x4d56e4*/
  v170.ComPtr_field_0x14 = v7; /*0x4d56ec*/
  if ( v7 >= 512 ) /*0x4d56f0*/
  {
    v8 = v7 - 128; /*0x4d56f2*/
    v170.ComPtr_field_0x14 = v7 - 128; /*0x4d56f8*/
  }
  v163 = (*((int (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 234))(this, this->?, v5); /*0x4d5710*/
  if ( !v163 && this->? == 6 ) /*0x4d571d*/
    goto LABEL_8; /*0x4d571d*/
  HIBYTE(v167[1]) = *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3379); /*0x4d5761*/
  if ( FootClass::checkPassability(this) ) /*0x4d5765*/
    v10 = 0; /*0x4d576e*/
  else
    v10 = HIBYTE(v167[1]); /*0x4d5772*/
  if ( this->? ) /*0x4d5776*/
    v10 = 0; /*0x4d5780*/
  if ( this->? ) /*0x4d5782*/
    v10 = 0; /*0x4d578c*/
  if ( !v163 && !v10 ) /*0x4d5798*/
  {
    currentMission = this->?; /*0x4d579e*/
    v164 = currentMission == 1; /*0x4d57a9*/
    if ( currentMission == 11 && (unsigned __int8)House::IsCurrentPlayer((House *)this->?) ) /*0x4d57b8*/
      v164 = 1; /*0x4d57c1*/
    if ( (this->? != 15 || (unsigned __int8)House::IsCurrentPlayer((House *)this->?)) && !v164 ) /*0x4d57e4*/
    {
LABEL_8:
      if ( a2 ) /*0x4d5724*/
        return 0; /*0x4d5724*/
      (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x4d5730*/
      (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x4d573e*/
      return 0; /*0x4d574c*/
    }
  }
  v12 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4d57ea*/
  HIBYTE(v169) = 0; /*0x4d57ee*/
  if ( v12[11](this) == 1 ) /*0x4d57f9*/
  {
    if ( *(_BYTE *)(this->q1B1 + 3602) ) /*0x4d5801*/
    {
      ComPtr_field_0x08 = this->?[0]; /*0x4d5817*/
      ComPtr_field_0x0C = this->?[1]; /*0x4d5823*/
      ComPtr_field_0x10 = this->?[2]; /*0x4d582a*/
      v13 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &ComPtr_field_0x08); /*0x4d5833*/
      if ( !(unsigned __int8)BuildingClass::CheckC4Active((BuildingClass *)v13) ) /*0x4d583a*/
      {
        target = this->?; /*0x4d584b*/
        HIBYTE(v169) = 1; /*0x4d584c*/
        v14 = ObjectClass::DistanceTo((ObjectClass *)this, (int)target) + 512; /*0x4d5856*/
        if ( v8 >= v14 ) /*0x4d585d*/
          v170.ComPtr_field_0x14 = v14; /*0x4d585f*/
      }
    }
  }
  HIBYTE(v167[1]) = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 2; /*0x4d5873*/
  v15 = this->locomotor[0]; /*0x4d5878*/
  v170.ComPtr_field_0x04 = 0; /*0x4d587a*/
  if ( !v15 ) /*0x4d5884*/
    goto LABEL_38; /*0x4d5884*/
  Checked = (int (__stdcall ***)(_DWORD, void *, __int16 *))Stream::GetChecked((Stream *)this->locomotor); /*0x4d5886*/
  v17 = (**Checked)(Checked, &unk_818858, v168); /*0x4d589a*/
  if ( v17 >= 0 ) /*0x4d589e*/
  {
    v19 = *(_DWORD *)v168; /*0x4d58ad*/
    ComPtr::Release_Alt((ComPtr *)&v170.ComPtr_field_0x04); /*0x4d58b5*/
    v18 = v19; /*0x4d58ba*/
  }
  else
  {
    ComPtr::Release_Alt((ComPtr *)&v170.ComPtr_field_0x04); /*0x4d58a4*/
    v18 = 0; /*0x4d58a9*/
  }
  v170.ComPtr_field_0x04 = v18; /*0x4d58be*/
  if ( v17 < 0 && v17 != -2147467262 ) /*0x4d58ca*/
    WinAPI::Wrapper(v17); /*0x4d58cd*/
  if ( !v18 ) /*0x4d58d8*/
LABEL_38:
    WinAPI::Wrapper(-2147467261); /*0x4d58df*/
  (*(void (__stdcall **)(int, char *))(*(_DWORD *)v18 + 12))(v18, v200); /*0x4d58f3*/
  if ( !memcmp(v200, &g_CLSID_JumpjetLocomotion, 0x10u) ) /*0x4d5909*/
    HIBYTE(v167[1]) = 1; /*0x4d590d*/
  if ( this->movementDestination ) /*0x4d5912*/
  {
    if ( this->? ) /*0x4d5922*/
    {
      if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3380) ) /*0x4d5938*/
      {
        if ( !v163 ) /*0x4d594c*/
        {
          v20 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, char *))this->?->TechnoClass::vtable0 + 18))( /*0x4d5968*/
                            this->?,
                            v180);
          v21 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, int *))this->movementDestination->vtable0 + 18))( /*0x4d5971*/
                            this->movementDestination,
                            &ComPtr_field_0x08);
          v22 = Coord::Subtract((Coord *)&v170.ComPtr_field_0x08, *v21 - *v20, v21[1] - v20[1], v21[2] - v20[2]); /*0x4d5991*/
          v172 = *v22; /*0x4d599b*/
          v23 = v22[1]; /*0x4d599f*/
          __asm { fild [esp+160h+var_10C] } /*0x4d59a2*/
          v24 = v22[2]; /*0x4d59a6*/
          v173 = v23; /*0x4d59a9*/
          __asm { fild [esp+160h+var_108] } /*0x4d59ad*/
          GroundHeight = v24; /*0x4d59b1*/
          __asm /*0x4d59b5*/
          {
            fild [esp+160h+var_104]
            fld st
            fmul st, st(1)
            fld st(2)
            fmul st, st(3)
            faddp st(1), st
            fld st(3)
            fmul st, st(4)
            faddp st(1), st
            fstp [esp+160h+var_160]; double
            fstp st
            fstp st
            fstp st
          }
          Math::Sqrt(v154); /*0x4d59d2*/
          LOWORD(v25) = Math::RoundToInt(v2); /*0x4d59da*/
          if ( v25 > v170.ComPtr_field_0x14 * *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3576) && !a2 ) /*0x4d59f9*/
          {
            this->FootClass_field_5A0 = 0; /*0x4d59fb*/
            this->movementDestination = 0; /*0x4d5a01*/
          }
        }
      }
    }
    if ( this->movementDestination && !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 21))(this) ) /*0x4d5a13*/
      goto LABEL_53; /*0x4d5a13*/
  }
  if ( v163 && this->? && !HIBYTE(v169) ) /*0x4d5a32*/
  {
LABEL_53:
    ComPtr_field_0x04 = v170.ComPtr_field_0x04; /*0x4d5a34*/
    v27 = v170.ComPtr_field_0x04 == 0; /*0x4d5a38*/
    goto LABEL_54; /*0x4d5a38*/
  }
  if ( *(int *)&this->__pad_58C[12] > 0 ) /*0x4d5a53*/
  {
    v28 = **(void ***)this->__pad_58C; /*0x4d5a60*/
    if ( !a2 ) /*0x4d5a62*/
    {
      (*((void (__thiscall **)(FootClass *, void *, _DWORD))this->TechnoClass + 288))(this, v28, 0); /*0x4d5a6a*/
      v29 = *(_DWORD *)&this->__pad_58C[12]; /*0x4d5a70*/
      if ( v29 > 0 ) /*0x4d5a78*/
      {
        v30 = v29 - 1; /*0x4d5a7a*/
        v31 = 0; /*0x4d5a7d*/
        for ( *(_DWORD *)&this->__pad_58C[12] = v30; /*0x4d5a87*/
              v31 < *(_DWORD *)&this->__pad_58C[12];
              *(_DWORD *)(*(_DWORD *)this->__pad_58C + 4 * v31 - 4) = *(_DWORD *)(*(_DWORD *)this->__pad_58C + 4 * v31) )
        {
          ++v31; /*0x4d5a8f*/
        }
      }
    }
    if ( v170.ComPtr_field_0x04 ) /*0x4d5aa7*/
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)v170.ComPtr_field_0x04 + 8))(v170.ComPtr_field_0x04); /*0x4d5ab0*/
      return v28; /*0x4d5abb*/
    }
    return v28; /*0x4d5aa7*/
  }
  if ( (*((int (__thiscall **)(AbstractClass *))this->?->TechnoClass::vtable0 + 11))(this->?) == 11 ) /*0x4d5acc*/
  {
    v32 = this->?; /*0x4d5ad2*/
    if ( (unsigned __int8)CellClass::IsActiveOrNext((CellClass *)v32) ) /*0x4d5ada*/
    {
      v33 = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *, _DWORD))this->TechnoClass + 19))(this, v180, 0); /*0x4d5aed*/
      *(_WORD *)v170.__pad_0 = *v33 / 256; /*0x4d5b03*/
      *(_WORD *)&v170.__pad_0[2] = v33[1] / 256; /*0x4d5b1b*/
      *(_DWORD *)v168 = *(_DWORD *)v170.__pad_0; /*0x4d5b28*/
      v170.ComPtr_field_0x1C = *FootClass::FindNearestApproachableCell( /*0x4d5b40*/
                                  (FootClass *)&stru_87F5F0.__pad_58[416],
                                  &v170.ComPtr_field_0x20,
                                  (__int16 *)&v32[1],
                                  v168);
      if ( !a2 ) /*0x4d5b44*/
      {
        v34 = (void (__thiscall **)(FootClass *, void *))this->TechnoClass; /*0x4d5b46*/
        v35 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v170.ComPtr_field_0x1C); /*0x4d5b52*/
        v34[242](this, v35); /*0x4d5b5a*/
      }
    }
  }
  if ( (*((int (__thiscall **)(AbstractClass *))this->?->TechnoClass::vtable0 + 11))(this->?) == 6 ) /*0x4d5b6e*/
  {
    v36 = this->?; /*0x4d5b70*/
    if ( v36 ) /*0x4d5b78*/
    {
      FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)v36[36].uniqueId, 0); /*0x4d5b81*/
      uniqueId = (BuildingTypeClass *)v36[36].uniqueId; /*0x4d5b86*/
      *(_DWORD *)v168 = FoundationHeight; /*0x4d5b8e*/
      FoundationWidth = BuildingTypeClass::GetFoundationWidth(uniqueId); /*0x4d5b92*/
      v170.ComPtr_field_0x14 += (FoundationWidth + *(_DWORD *)v168) << 6; /*0x4d5ba6*/
    }
  }
  v40 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this); /*0x4d5bae*/
  __asm { fild [esp+158h+var_134.ComPtr_field_0x14] } /*0x4d5bb1*/
  if ( v40 == 15 ) /*0x4d5bb8*/
    __asm { fsub ds:dbl_7E9228 } /*0x4d5bba*/
  else
    __asm { fsub ds:dbl_7E9250 } /*0x4d5bc2*/
  LOWORD(v41) = Math::RoundToInt(v2); /*0x4d5bc8*/
  v42 = (v41 <= 0 ? 0 : v41) <= 0;
  v43 = v41 <= 0 ? 0 : v41;
  v170.ComPtr_field_0x14 = v43; /*0x4d5bd9*/
  if ( !v42 && v43 <= 256 ) /*0x4d5be4*/
    v170.ComPtr_field_0x14 = 256; /*0x4d5be6*/
  v44 = (int *)(*((int (__thiscall **)(AbstractClass *, char *))this->?->TechnoClass::vtable0 + 18))(this->?, v180); /*0x4d5bfb*/
  v172 = *v44; /*0x4d5c02*/
  v173 = v44[1]; /*0x4d5c09*/
  GroundHeight = v44[2]; /*0x4d5c10*/
  *(_WORD *)v170.__pad_0 = v172 / 256; /*0x4d5c20*/
  *(_WORD *)&v170.__pad_0[2] = v173 / 256; /*0x4d5c38*/
  v183 = *(_DWORD *)v170.__pad_0; /*0x4d5c41*/
  *(_DWORD *)v166 = *(_DWORD *)v170.__pad_0; /*0x4d5c48*/
  _EAX = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *))this->TechnoClass + 18))(this, v180); /*0x4d5c50*/
  *(_DWORD *)v168 = *_EAX; /*0x4d5c58*/
  __asm /*0x4d5c5f*/
  {
    fild dword ptr [esp+168h+var_13C]
    fisub [esp+168h+var_10C]
    fstp [esp+168h+var_160]; double
    fild [esp+168h+var_108]
    fisub dword ptr [eax+4]
    fstp [esp+168h+var_168]; double
  }
  Math::CalcAngle(v146, v155); /*0x4d5c75*/
  __asm { fsub ds:dbl_7E2820 } /*0x4d5c7a*/
  __asm { fmul ds:dbl_7E2818 }
  v47 = Math::RoundToInt(v2); /*0x4d5c89*/
  LOWORD(v46) = HIWORD(v47); /*0x4d5c89*/
  v168[0] = v47; /*0x4d5c8e*/
  v48 = this->?; /*0x4d5c97*/
  v165 = 0; /*0x4d5c9d*/
  LOBYTE(v184) = 0; /*0x4d5ca6*/
  *(_DWORD *)v197 = (unsigned __int8)((unsigned int)((*(_DWORD *)v168 >> 7) + 1) >> 1); /*0x4d5cb5*/
  if ( (*((int (__fastcall **)(AbstractClass *, int))v48->vtable0 + 11))(v48, v46) == 11 ) /*0x4d5cc4*/
  {
    LOBYTE(v184) = ((unsigned __int16)this->?[8].NeedsSaveOrLink >> 8) & 1; /*0x4d5cd8*/
  }
  else
  {
    v49 = this->?; /*0x4d5ce1*/
    if ( v49 && (v49->abstractFlags & 2) != 0 ) /*0x4d5cef*/
      LOBYTE(v184) = v49[3].NeedsSaveOrLink; /*0x4d5cf7*/
  }
  if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15 ) /*0x4d5d08*/
  {
    if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1685) ) /*0x4d5d14*/
    {
      __asm /*0x4d5d1e*/
      {
        fild [esp+158h+var_134.ComPtr_field_0x14]
        fcomp ds:dbl_7E9248
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x4d5d2d*/
        v170.ComPtr_field_0x14 = 332; /*0x4d5d2f*/
    }
  }
  if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1685) )
  {
    v51 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 111))(this); /*0x4d5d53*/
    v52 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v51 + 72))(v51, v180); /*0x4d5d62*/
    ComPtr_field_0x08 = *v52; /*0x4d5d67*/
    ComPtr_field_0x0C = v52[1]; /*0x4d5d6e*/
    v53 = this->?; /*0x4d5d72*/
    ComPtr_field_0x10 = v52[2]; /*0x4d5d7d*/
    if ( v53 && (v53->abstractFlags & 1) != 0 )
    {
      v54 = (v53->abstractFlags & 1) != 0 ? v53 : 0;
      v55 = (*((int (__thiscall **)(AbstractClass *))v54->vtable0 + 111))(v54); /*0x4d5d9a*/
      v56 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)v55 + 72))(v55, v180); /*0x4d5da9*/
      v185 = *(double *)v56; /*0x4d5dae*/
      v186 = *(_DWORD *)(v56 + 8); /*0x4d5dc2*/
    }
    else
    {
      v57 = (*((int (__thiscall **)(AbstractClass *, char *))v53->vtable0 + 18))(v53, v180); /*0x4d5dd2*/
      v185 = *(double *)v57; /*0x4d5dd7*/
      v186 = *(_DWORD *)(v57 + 8); /*0x4d5deb*/
    }
    v58 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &ComPtr_field_0x08); /*0x4d5dfc*/
    v59 = (int *)(*(int (__thiscall **)(CellClass *, char *))(v58->mapCoords[0] + 72))(v58, v180); /*0x4d5e0a*/
    v60 = *v59; /*0x4d5e0d*/
    v61 = v59[1]; /*0x4d5e14*/
    v182 = v59[2]; /*0x4d5e22*/
    v62 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v185); /*0x4d5e29*/
    v63 = (_DWORD *)(*(int (__thiscall **)(CellClass *, char *))(v62->mapCoords[0] + 72))(v62, v180); /*0x4d5e37*/
    v64 = v63[1]; /*0x4d5e43*/
    v170.ComPtr_field_0x20 = v60 - *v63; /*0x4d5e46*/
    v171 = v61 - v64; /*0x4d5e4c*/
    __asm /*0x4d5e53*/
    {
      fild [esp+160h+var_110]
      fild [esp+160h+var_134.ComPtr_field_0x20]
    }
    v182 = v63[2]; /*0x4d5e5b*/
    __asm /*0x4d5e62*/
    {
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+160h+var_160]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v156); /*0x4d5e73*/
    LOWORD(_EAX) = Math::RoundToInt(v2); /*0x4d5e7b*/
    *(_DWORD *)v170.__pad_0 = _EAX; /*0x4d5e80*/
    __asm /*0x4d5e84*/
    {
      fild dword ptr [esp+158h+var_134.__pad_0]
      fcomp ds:dbl_7E9240
      fnstsw ax
    }
    if ( (_EAX & 0x4100) != 0 ) /*0x4d5e93*/
    {
      v66 = (ObjectPlacement *)(*((int (__thiscall **)(FootClass *))this->TechnoClass + 111))(this); /*0x4d5ea9*/
      v162 = 1; /*0x4d5eab*/
      v67 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *))this->?->TechnoClass::vtable0 + 18))(this->?); /*0x4d5eb8*/
      v68 = ObjectPlacement::CalcPosition(v66, &v191, v67, (char)&v181, 0, 0); /*0x4d5ec6*/
      v69 = *v68; /*0x4d5ecb*/
      v70 = v68[1]; /*0x4d5ed7*/
      v71 = v68[2]; /*0x4d5eda*/
      v72 = *v68; /*0x4d5edd*/
      v193 = v71; /*0x4d5edf*/
      v170.ComPtr_field_0x20 = v72 - LODWORD(v185); /*0x4d5ef3*/
      v171 = v70 - HIDWORD(v185); /*0x4d5ef7*/
      __asm /*0x4d5efb*/
      {
        fild [esp+160h+var_110]
        fild [esp+160h+var_134.ComPtr_field_0x20]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fstp [esp+160h+var_160]; double
        fstp st
        fstp st
      }
      Math::Sqrt(v157); /*0x4d5f14*/
      LOWORD(v73) = Math::RoundToInt(v2); /*0x4d5f1c*/
      if ( v73 < *(int *)v170.__pad_0 ) /*0x4d5f25*/
      {
        if ( !a2 ) /*0x4d5f2c*/
        {
          if ( !this->locomotor[0] ) /*0x4d5f2e*/
            WinAPI::Wrapper(-2147467261); /*0x4d5f3d*/
          (*(void (__stdcall **)(int, int, int, int))(*(_DWORD *)this->locomotor[0] + 120))( /*0x4d5f5f*/
            this->locomotor[0],
            v69,
            v70,
            v193);
        }
        v165 = 1; /*0x4d5f62*/
      }
    }
  }
  if ( (*((unsigned __int8 (__thiscall **)(AbstractClass *))this->?->TechnoClass::vtable0 + 20))(this->?) ) /*0x4d5f6f*/
  {
    GroundHeight = Cell::GetGroundHeight(&v172); /*0x4d5f89*/
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v172)->flags[0] & 0x100) != 0 ) /*0x4d5fa1*/
      GroundHeight += (int)FootClass_Array.?; /*0x4d5faf*/
  }
  _EAX = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this); /*0x4d5fb7*/
  __asm { fild [esp+158h+var_134.ComPtr_field_0x14] } /*0x4d5fbd*/
  v75 = *(_DWORD *)(_EAX + 1460); /*0x4d5fc1*/
  ComPtr_field_0x14 = v170.ComPtr_field_0x14; /*0x4d5fcb*/
  __asm /*0x4d5fcf*/
  {
    fcomp ds:dbl_7E9238
    fnstsw ax
  }
  if ( (_EAX & 0x4100) != 0 ) /*0x4d5fda*/
  {
LABEL_142:
    if ( !v165 ) /*0x4d6898*/
      goto LABEL_148; /*0x4d6898*/
LABEL_143:
    if ( !a2 ) /*0x4d689f*/
    {
      v131 = (void (__thiscall **)(FootClass *, void *, int))this->TechnoClass; /*0x4d68a1*/
      v132 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v166); /*0x4d68af*/
      v131[288](this, v132, 1); /*0x4d68b7*/
    }
    v28 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v166); /*0x4d68cc*/
    if ( v170.ComPtr_field_0x04 ) /*0x4d68d4*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v170.ComPtr_field_0x04 + 8))(v170.ComPtr_field_0x04); /*0x4d68d9*/
    return v28; /*0x4d68e4*/
  }
  while ( 2 ) /*0x4d5fe5*/
  {
    if ( v165 == 1 ) /*0x4d5fe5*/
      goto LABEL_142; /*0x4d5fe5*/
    __asm { fild [esp+158h+var_F4] } /*0x4d5feb*/
    *(_DWORD *)v170.__pad_0 = stru_822420.?; /*0x4d5fef*/
    __asm { fstp qword ptr [esp+158h+var_D0] } /*0x4d5ff7*/
    do /*0x4d6866*/
    {
      v76 = GroundHeight; /*0x4d6002*/
      v77 = (__int16)((v197[0] + (unsigned __int16)**(_DWORD **)v170.__pad_0) << 8); /*0x4d6014*/
      LOBYTE(v77) = 0; /*0x4d6017*/
      v170.ComPtr_field_0x14 = v77 - 0x3FFF; /*0x4d6020*/
      __asm /*0x4d6024*/
      {
        fild [esp+158h+var_134.ComPtr_field_0x14]
        fmul ds:dbl_7E2810
        fstp [esp+158h+var_F0]
        fild [esp+158h+var_108]
      }
      __asm { fstp qword ptr [esp+160h+var_134.ComPtr_field_0x14] }
      Math::SinCos(v179); /*0x4d6044*/
      __asm /*0x4d6049*/
      {
        fmul qword ptr [esp+160h+var_D0]
        fsubr qword ptr [esp+160h+var_134.ComPtr_field_0x14]
      }
      LOWORD(v78) = Math::RoundToInt(v2); /*0x4d6054*/
      v170.ComPtr_field_0x14 = v78; /*0x4d6063*/
      Math::ArcTan2(v179); /*0x4d6067*/
      __asm { fmul qword ptr [esp+168h+var_D0] } /*0x4d606c*/
      __asm { fiadd [esp+158h+var_10C] }
      LOWORD(v79) = Math::RoundToInt(v2); /*0x4d607a*/
      v80 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4d607f*/
      v170.ComPtr_field_0x08 = v79; /*0x4d6081*/
      v170.ComPtr_field_0x0C = v170.ComPtr_field_0x14; /*0x4d608b*/
      v170.ComPtr_field_0x10 = v76; /*0x4d608f*/
      if ( v80[11](this) == 15 && *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1685) ) /*0x4d60a5*/
      {
        v81 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v170.ComPtr_field_0x08); /*0x4d60c4*/
        v82 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, char *))this->?->TechnoClass::vtable0 + 18))( /*0x4d60d6*/
                          this->?,
                          v208);
        v83 = ObjectPlacement::CalcPosition((ObjectPlacement *)v81, v206, v82, 0, 0, 1); /*0x4d60e4*/
        v170.ComPtr_field_0x08 = *v83; /*0x4d60eb*/
        v170.ComPtr_field_0x0C = v83[1]; /*0x4d60f2*/
        v84 = v83[2]; /*0x4d60f6*/
      }
      else
      {
        v84 = 0; /*0x4d6134*/
        v170.ComPtr_field_0x08 = ((__int16)(v170.ComPtr_field_0x08 / 256) << 8) + 128; /*0x4d6136*/
        v170.ComPtr_field_0x0C = ((__int16)(v170.ComPtr_field_0x0C / 256) << 8) + 128; /*0x4d613a*/
      }
      v170.ComPtr_field_0x10 = v84; /*0x4d6142*/
      if ( !HIBYTE(v169) /*0x4d615b*/
        || (v85 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v170.ComPtr_field_0x08),
            (unsigned __int8)BuildingClass::CheckC4Active((BuildingClass *)v85)) )
      {
        v170.ComPtr_field_0x10 = Cell::GetGroundHeight(&v170.ComPtr_field_0x08); /*0x4d6181*/
        if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v170.ComPtr_field_0x08)->flags[0] & 0x100) != 0 ) /*0x4d6193*/
          v170.ComPtr_field_0x10 += (int)FootClass_Array.?; /*0x4d61a0*/
        v86 = (int *)(*((int (__thiscall **)(AbstractClass *, char *))this->?->TechnoClass::vtable0 + 18))( /*0x4d61b4*/
                       this->?,
                       v201);
        v87 = *v86; /*0x4d61b7*/
        v88 = v86[1]; /*0x4d61bd*/
        v195 = v170.ComPtr_field_0x08 - v87; /*0x4d61c6*/
        v196 = v170.ComPtr_field_0x0C - v88; /*0x4d61d2*/
        __asm /*0x4d61d9*/
        {
          fild [esp+160h+var_90]
          fild [esp+160h+var_94]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+160h+var_160]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v158); /*0x4d61f8*/
        LOWORD(v89) = Math::RoundToInt(v2); /*0x4d6200*/
        v90 = (int (__thiscall **)(FootClass *, _DWORD))this->TechnoClass; /*0x4d6205*/
        v170.ComPtr_field_0x14 = v89; /*0x4d6207*/
        v91 = (_DWORD **)v90[254](this, v189); /*0x4d6215*/
        if ( TechnoClass::CheckTargetLOS((TechnoClass *)this, &v170.ComPtr_field_0x08, (int *)this->?, *v91) ) /*0x4d622c*/
          goto LABEL_163; /*0x4d622c*/
        if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1685) ) /*0x4d623f*/
        {
          __asm /*0x4d624d*/
          {
            fild [esp+158h+var_134.ComPtr_field_0x14]
            fcomp ds:dbl_7E9230
            fnstsw ax
          }
          if ( (_AX & 0x100) != 0 ) /*0x4d625c*/
          {
LABEL_163:
            LOWORD(v188) = v170.ComPtr_field_0x08 / 256; /*0x4d6279*/
            HIWORD(v188) = v170.ComPtr_field_0x0C / 256; /*0x4d6296*/
            *(_DWORD *)v166 = v188; /*0x4d62a5*/
            if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v166, 1) ) /*0x4d62a9*/
            {
              v93 = *(_BYTE *)((*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 33))(this, v162) + 1685); /*0x4d62c0*/
              v94 = (void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass; /*0x4d62c6*/
              v162 = 0; /*0x4d62ca*/
              if ( v93 ) /*0x4d62cc*/
              {
                v94[73](this, 0); /*0x4d62d4*/
                v95 = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *, _DWORD))this->TechnoClass + 19))( /*0x4d62e8*/
                                  this,
                                  v203,
                                  0);
                LOWORD(v188) = *v95 / 256; /*0x4d6300*/
                onBridge = (unsigned __int8)this->?; /*0x4d6314*/
                HIWORD(v188) = v95[1] / 256; /*0x4d631d*/
                *(_DWORD *)v197 = v188; /*0x4d6334*/
                TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v197, v75, onBridge); /*0x4d6349*/
                v144 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1660); /*0x4d6360*/
                v97 = (bool *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v167); /*0x4d6367*/
                IsBuildable = Cell::IsBuildable(v97, v144, 0, 0, TileIndex, v75, -1, 1); /*0x4d636e*/
                v99 = (void (__thiscall **)(FootClass *))this->TechnoClass; /*0x4d6373*/
                v162 = 1; /*0x4d6375*/
                LOBYTE(v166[1]) = IsBuildable; /*0x4d6379*/
                v99[73](this); /*0x4d637d*/
              }
              else
              {
                v100 = (_DWORD *)((int (__thiscall *)(FootClass *, char *))v94[19])(this, v207); /*0x4d6392*/
                LOWORD(v187) = *v100 / 256; /*0x4d63aa*/
                HIWORD(v187) = v100[1] / 256; /*0x4d63c8*/
                v147 = this->?; /*0x4d63dd*/
                *(_DWORD *)v194 = v187; /*0x4d63e5*/
                v148 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v194, v75, v147); /*0x4d63f3*/
                v142 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1660); /*0x4d640a*/
                v101 = (bool *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v166); /*0x4d6411*/
                v163 = Cell::IsBuildable(v101, v142, 0, 0, v148, v75, -1, 1); /*0x4d641d*/
              }
              if ( !v163 ) /*0x4d6427*/
              {
                if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15 ) /*0x4d6437*/
                  goto LABEL_139; /*0x4d6437*/
                ComPtr_field_0x08 = v170.ComPtr_field_0x08; /*0x4d6449*/
                v102 = v166[0]; /*0x4d644d*/
                v103 = 0; /*0x4d6451*/
                ComPtr_field_0x0C = v170.ComPtr_field_0x0C; /*0x4d6453*/
                ComPtr_field_0x10 = v170.ComPtr_field_0x10; /*0x4d6457*/
                LODWORD(v179) = *(_DWORD *)v166; /*0x4d645b*/
                v182 = 0; /*0x4d645f*/
                while ( 1 ) /*0x4d646b*/
                {
                  v104 = v103 & 7; /*0x4d646b*/
                  v105 = LOWORD(g_DDrawSurfaceManager.scenario[v104 + 82]) + v102; /*0x4d646e*/
                  LOWORD(v104) = HIWORD(g_DDrawSurfaceManager.scenario[v104 + 82]); /*0x4d647d*/
                  LOWORD(v190) = v105; /*0x4d6481*/
                  HIWORD(v190) = v166[1] + v104; /*0x4d6491*/
                  v170.ComPtr_field_0x08 = (v105 << 8) + 128; /*0x4d64b4*/
                  v170.ComPtr_field_0x0C = ((__int16)(v166[1] + v104) << 8) + 128; /*0x4d64bc*/
                  v106 = this->?; /*0x4d64c0*/
                  v170.ComPtr_field_0x10 = v182; /*0x4d64c6*/
                  *(_DWORD *)v166 = v190; /*0x4d64ca*/
                  v107 = (int *)(*((int (__thiscall **)(AbstractClass *, char *))v106->vtable0 + 18))(v106, v205); /*0x4d64d8*/
                  v108 = *v107; /*0x4d64db*/
                  v109 = v107[1]; /*0x4d64e1*/
                  v191 = v170.ComPtr_field_0x08 - v108; /*0x4d64ea*/
                  v192 = v170.ComPtr_field_0x0C - v109; /*0x4d64f6*/
                  __asm /*0x4d64fd*/
                  {
                    fild [esp+160h+var_A0]
                    fild [esp+160h+var_A4]
                    fld st(1)
                    fmul st, st(2)
                    fld st(1)
                    fmul st, st(2)
                    faddp st(1), st
                    fstp [esp+160h+var_160]; double
                    fstp st
                    fstp st
                  }
                  Math::Sqrt(v159); /*0x4d651c*/
                  LOWORD(v110) = Math::RoundToInt(v2); /*0x4d6524*/
                  v111 = (int (__thiscall **)(FootClass *, _DWORD))this->TechnoClass; /*0x4d6529*/
                  v170.ComPtr_field_0x14 = v110; /*0x4d652b*/
                  v112 = (_DWORD **)v111[254](this, v189); /*0x4d6539*/
                  if ( TechnoClass::CheckTargetLOS((TechnoClass *)this, &v170.ComPtr_field_0x08, (int *)this->?, *v112) ) /*0x4d6550*/
                    goto LABEL_129; /*0x4d6550*/
                  if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1685) ) /*0x4d6563*/
                  {
                    __asm /*0x4d6571*/
                    {
                      fild [esp+158h+var_134.ComPtr_field_0x14]
                      fcomp ds:dbl_7E9230
                      fnstsw ax
                    }
                    if ( (_AX & 0x100) != 0 ) /*0x4d6580*/
                    {
LABEL_129:
                      if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1685) ) /*0x4d6590*/
                      {
                        (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 73))(this, 0, v162); /*0x4d65a4*/
                        v114 = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *, _DWORD))this->TechnoClass + 19))( /*0x4d65b8*/
                                           this,
                                           v202,
                                           0);
                        LOWORD(v189) = *v114 / 256; /*0x4d65d0*/
                        HIWORD(v189) = v114[1] / 256; /*0x4d65ee*/
                        v152 = this->?; /*0x4d6603*/
                        *(_DWORD *)v199 = v189; /*0x4d660b*/
                        v153 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v199, v75, v152); /*0x4d6619*/
                        v145 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1660); /*0x4d6630*/
                        v115 = (bool *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v167); /*0x4d6637*/
                        v116 = Cell::IsBuildable(v115, v145, 0, 0, v153, v75, -1, 1); /*0x4d663e*/
                        v117 = (void (__thiscall **)(FootClass *))this->TechnoClass; /*0x4d6643*/
                        v162 = 1; /*0x4d6645*/
                        LOBYTE(v166[1]) = v116; /*0x4d6649*/
                        v117[73](this); /*0x4d664d*/
                      }
                      else
                      {
                        v118 = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *, _DWORD))this->TechnoClass + 19))( /*0x4d6666*/
                                           this,
                                           v204,
                                           0);
                        LOWORD(v170.ComPtr_field_0x1C) = *v118 / 256; /*0x4d667e*/
                        HIWORD(v170.ComPtr_field_0x1C) = v118[1] / 256; /*0x4d6699*/
                        v149 = this->?; /*0x4d66a8*/
                        *(_DWORD *)v198 = v170.ComPtr_field_0x1C; /*0x4d66b0*/
                        v150 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v198, v75, v149); /*0x4d66be*/
                        v143 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1660); /*0x4d66d5*/
                        v119 = (bool *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v166); /*0x4d66dc*/
                        v163 = Cell::IsBuildable(v119, v143, 0, 0, v150, v75, -1, 1); /*0x4d66e8*/
                      }
                      if ( v163 ) /*0x4d66f2*/
                        break; /*0x4d66f2*/
                    }
                  }
                  if ( ++v103 >= 8 ) /*0x4d66f8*/
                  {
                    v170.ComPtr_field_0x08 = ComPtr_field_0x08; /*0x4d670a*/
                    v170.ComPtr_field_0x0C = ComPtr_field_0x0C; /*0x4d6712*/
                    v170.ComPtr_field_0x10 = ComPtr_field_0x10; /*0x4d6716*/
                    *(_DWORD *)v166 = LODWORD(v179); /*0x4d671a*/
                    goto LABEL_139; /*0x4d671e*/
                  }
                  v102 = v166[0]; /*0x4d6465*/
                }
              }
              v120 = abs32(v166[1] - SHIWORD(v183)); /*0x4d673c*/
              v121 = abs32(v166[0] - (__int16)v183); /*0x4d674f*/
              if ( v121 <= v120 ) /*0x4d6751*/
                v121 = v120; /*0x4d6753*/
              v122 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v166); /*0x4d675f*/
              LODWORD(v179) = v122; /*0x4d6768*/
              if ( HIBYTE(v167[1]) ) /*0x4d676e*/
                goto LABEL_143; /*0x4d676e*/
              v123 = v122[80] >> 8; /*0x4d6781*/
              LOBYTE(v123) = v123 & 1; /*0x4d6786*/
              if ( Pathfinding::CalcDistance( /*0x4d67a8*/
                     (int)&stru_87E790.__pad_D8[80],
                     v166,
                     (__int16 *)&v183,
                     (int)this,
                     v123,
                     v184,
                     -1) <= v121 + 8 )
                goto LABEL_143; /*0x4d67a8*/
              v124 = (int *)(*((int (__thiscall **)(FootClass *, __int16 *, _DWORD))this->TechnoClass + 19))( /*0x4d67bc*/
                              this,
                              v199,
                              0);
              v125 = *v124; /*0x4d67cc*/
              v168[1] = v124[1] / 256; /*0x4d67e2*/
              v168[0] = v125 / 256; /*0x4d67ef*/
              v170.ComPtr_field_0x20 = *(_DWORD *)v168; /*0x4d67f9*/
              v126 = abs32(v168[1] - v166[1]); /*0x4d6801*/
              v127 = abs32(v168[0] - v166[0]); /*0x4d6814*/
              if ( v127 <= v126 ) /*0x4d6816*/
                v127 = v126; /*0x4d6818*/
              v128 = *(_DWORD *)(LODWORD(v179) + 320) >> 8; /*0x4d6828*/
              LOBYTE(v128) = v128 & 1; /*0x4d682b*/
              v160 = v128; /*0x4d682e*/
              v129 = (*((int (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 47))(this, 0); /*0x4d6833*/
              if ( Pathfinding::CalcDistance( /*0x4d6854*/
                     (int)&stru_87E790.__pad_D8[80],
                     (__int16 *)&v170.ComPtr_field_0x20,
                     v166,
                     (int)this,
                     v129,
                     v160,
                     -1) <= v127 + 8 )
                goto LABEL_143; /*0x4d6854*/
            }
          }
        }
      }
LABEL_139:
      *(_DWORD *)v170.__pad_0 += 4; /*0x4d6856*/
    }
    while ( *(int *)v170.__pad_0 < (int)&stru_822420.?[7] ); /*0x4d6866*/
    ComPtr_field_0x14 -= 256; /*0x4d6874*/
    __asm /*0x4d687c*/
    {
      fild [esp+158h+var_F4]
      fcomp ds:dbl_7E9238
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x4d688b*/
      continue; /*0x4d688b*/
    break;
  }
LABEL_148:
  if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3367) /*0x4d6911*/
    || (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15
    && *(_BYTE *)(this->q1B0 + 3782) )
  {
    if ( !a2 ) /*0x4d6a62*/
      (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, this->?, 1); /*0x4d6a71*/
    v140 = this->?; /*0x4d6a7b*/
    if ( v170.ComPtr_field_0x04 ) /*0x4d6a83*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v170.ComPtr_field_0x04 + 8))(v170.ComPtr_field_0x04); /*0x4d6a88*/
    return v140; /*0x4d6a8c*/
  }
  else
  {
    v133 = (int (__thiscall **)(FootClass *, __int16 *, _DWORD))this->TechnoClass; /*0x4d691f*/
    v170.ComPtr_field_0x1C = 0; /*0x4d6923*/
    v134 = (_DWORD *)v133[19](this, v199, 0); /*0x4d693d*/
    v168[0] = *v134 / 256; /*0x4d6954*/
    v168[1] = v134[1] / 256; /*0x4d696f*/
    v170.ComPtr_field_0x20 = *(_DWORD *)v168; /*0x4d6984*/
    v141 = BYTE1(*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v166) + 80)) & 1; /*0x4d69a2*/
    v135 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 47))(this); /*0x4d69a8*/
    v136 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&v170.ComPtr_field_0x1C, v75, v135); /*0x4d69ba*/
    v137 = (*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 33))(this, v136); /*0x4d69c4*/
    *(_DWORD *)v166 = *LayerClass::Pathfinding_Find( /*0x4d69ea*/
                         &stru_87F5F0.__pad_58[416],
                         (int)&v179,
                         &v179,
                         v166,
                         *(_DWORD *)(v137 + 1660),
                         0,
                         v75,
                         v141,
                         1,
                         1,
                         0,
                         1,
                         0,
                         0,
                         (__int16 *)&v170.ComPtr_field_0x1C,
                         0,
                         0);
    if ( a2 ) /*0x4d69f3*/
      goto LABEL_155; /*0x4d69f3*/
    (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x4d69fb*/
    if ( *(_DWORD *)v166 == g_FootClass_Pool ) /*0x4d6a0d*/
    {
      (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x4d6a4c*/
LABEL_155:
      ComPtr_field_0x04 = v170.ComPtr_field_0x04; /*0x4d6a52*/
      v27 = v170.ComPtr_field_0x04 == 0; /*0x4d6a56*/
    }
    else
    {
      v138 = (void (__thiscall **)(FootClass *, void *, int))this->TechnoClass; /*0x4d6a1d*/
      v139 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v166); /*0x4d6a2b*/
      v138[288](this, v139, 1); /*0x4d6a33*/
      ComPtr_field_0x04 = v170.ComPtr_field_0x04; /*0x4d6a39*/
      v27 = v170.ComPtr_field_0x04 == 0; /*0x4d6a3d*/
    }
LABEL_54:
    if ( !v27 ) /*0x4d5a3a*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ComPtr_field_0x04 + 8))(ComPtr_field_0x04); /*0x4d5a3f*/
    return 0; /*0x4d5a42*/
  }
}


// ==== 0x004D6AA0  FootClass::FindAITarget  this=FootClass  sig=csp ====
int __fastcall FootClass::FindAITarget(FootClass *this)
{
  int result; // eax
  char *MissionControl; // eax
  AbstractClass **v4; // eax
  AbstractClass *v5; // ecx
  AbstractClass *focus; // ecx
  _DWORD *v7; // eax
  CellClass *v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  AbstractClass *v13; // ecx
  _DWORD *v14; // eax
  int TileIndex; // eax
  void *v16; // eax
  BuildingClass *slaveManager; // ecx
  CellClass *v18; // eax
  int *v19; // edi
  AbstractClass *target; // ecx
  int v21; // eax
  int v22; // edi
  AbstractClass *v23; // eax
  void (__thiscall **vtable0)(FootClass *, int); // edi
  int v25; // eax
  int v26; // ebp
  _WORD *v27; // eax
  __int16 v28; // cx
  Cell *v29; // eax
  _DWORD *v30; // eax
  _DWORD *v31; // edi
  int v32; // ebx
  void (__thiscall **v33)(FootClass *, int, _DWORD); // eax
  double v34; // st7
  int v35; // eax
  int v36; // ebp
  int v37; // ebp
  int *v38; // eax
  int v39; // edi
  int v40; // ebx
  int *v41; // eax
  int v42; // ecx
  int v43; // eax
  __int64 v44; // [esp+68h] [ebp-38h] BYREF
  __int16 v45[2]; // [esp+70h] [ebp-30h] BYREF
  __int16 v46[2]; // [esp+74h] [ebp-2Ch] BYREF
  __int16 v47[2]; // [esp+78h] [ebp-28h] BYREF
  int v48; // [esp+7Ch] [ebp-24h] BYREF
  int v49; // [esp+80h] [ebp-20h]
  int v50; // [esp+84h] [ebp-1Ch]
  char v51[12]; // [esp+88h] [ebp-18h] BYREF
  char v52[12]; // [esp+94h] [ebp-Ch] BYREF

  if ( this->? ) /*0x4d6aab*/
  {
    (*((void (__thiscall **)(FootClass *, int, int))this->TechnoClass + 122))(this, 5, 1); /*0x4d6ab9*/
    return 1; /*0x4d6acb*/
  }
  if ( this->shouldEnterAbsorber ) /*0x4d6acc*/
  {
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 208))(this); /*0x4d6ad8*/
LABEL_9:
    MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4d6b06*/
    LOWORD(result) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d6b16*/
    return result; /*0x4d6b22*/
  }
  if ( this->shouldEnterOccupiable ) /*0x4d6ae0*/
  {
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 210))(this); /*0x4d6aec*/
    goto LABEL_9; /*0x4d6af2*/
  }
  if ( this->shouldGarrisonStructure ) /*0x4d6af4*/
  {
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 211))(this); /*0x4d6b00*/
    goto LABEL_9; /*0x4d6b00*/
  }
  if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->?) /*0x4d6b3a*/
    && *(int *)&this->__pad_5B0[12] > 0
    && !this->movementDestination )
  {
    v4 = *(AbstractClass ***)this->__pad_5B0; /*0x4d6b42*/
    v5 = *v4; /*0x4d6b4e*/
    if ( *v4 == this->? ) /*0x4d6b52*/
    {
      *(_DWORD *)v45 = *v4; /*0x4d6b58*/
      if ( v5 ) /*0x4d6b5c*/
      {
        (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, v5, 1); /*0x4d6b65*/
        DynamicVector::RemoveItem((DynamicVector *)this->FootClass_field_abstract_array_5AC, 0); /*0x4d6b74*/
        if ( this->FootClass_field_bool_6B1 ) /*0x4d6b79*/
          VectorClass::AppendCopy((VectorClass *)this->FootClass_field_abstract_array_5AC, v45); /*0x4d6b88*/
      }
    }
  }
  focus = this->?; /*0x4d6b8d*/
  if ( focus ) /*0x4d6b95*/
  {
    if ( (*((int (__thiscall **)(AbstractClass *))focus->vtable0 + 11))(focus) == 11 ) /*0x4d6ba3*/
    {
      v7 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, int *))this->?->TechnoClass::vtable0 + 18))(this->?, &v48); /*0x4d6bb6*/
      v8 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v7); /*0x4d6bbf*/
      v9 = Cell::IsBridge((Cell *)v8); /*0x4d6bc6*/
      if ( v9 ) /*0x4d6bcd*/
      {
        if ( (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->?, (#375 *)v9[135]) /*0x4d6c12*/
          && !(unsigned __int8)House::IsCurrentPlayer((House *)this->?)
          && ((*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) != 1
           || !*(_BYTE *)(this->q1B1 + 3598)) )
        {
          HIDWORD(v44) = 0; /*0x4d6c24*/
          v10 = this->?[0]; /*0x4d6c35*/
          v11 = this->?[1]; /*0x4d6c39*/
          v50 = this->?[2]; /*0x4d6c3f*/
          LOWORD(v44) = v10 / 256; /*0x4d6c4f*/
          v12 = v11; /*0x4d6c56*/
          v13 = this->?; /*0x4d6c5d*/
          *(_DWORD *)((char *)&v44 + 2) = (unsigned __int16)(v12 / 256); /*0x4d6c68*/
          *(_DWORD *)v46 = v44; /*0x4d6c71*/
          v14 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, char *))v13->vtable0 + 18))(v13, v51); /*0x4d6c7c*/
          LOWORD(v44) = *v14 / 256; /*0x4d6c91*/
          WORD1(v44) = v14[1] / 256; /*0x4d6cb0*/
          *(_DWORD *)v47 = v44; /*0x4d6cc0*/
          TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v46, 0, 0); /*0x4d6ccb*/
          *(_DWORD *)v45 = *LayerClass::Pathfinding_Find( /*0x4d6cef*/
                              &stru_87F5F0.__pad_58[416],
                              (int)&v48,
                              &v48,
                              v47,
                              1,
                              TileIndex,
                              0,
                              0,
                              1,
                              1,
                              0,
                              0,
                              0,
                              1,
                              (__int16 *)&v44 + 2,
                              0,
                              0);
          if ( *(_DWORD *)v45 != g_FootClass_Pool ) /*0x4d6cf3*/
          {
            v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45); /*0x4d6d0d*/
            TechnoClass::SetFocus((TechnoClass *)this, (int)v16); /*0x4d6d15*/
          }
        }
      }
    }
  }
  if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 1 /*0x4d6d2c*/
    && *(_BYTE *)(this->q1B1 + 3598) )
  {
    (*((void (__thiscall **)(FootClass *, int, _DWORD))this->TechnoClass + 122))(this, 10, 0); /*0x4d6d3b*/
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 123))(this); /*0x4d6d45*/
    return Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 10) + 1; /*0x4d6d68*/
  }
  slaveManager = (BuildingClass *)this->?; /*0x4d6d69*/
  if ( slaveManager ) /*0x4d6d71*/
    BuildingClass::InitBuildLimit(slaveManager); /*0x4d6d73*/
  if ( !this->? && this->? == -1 ) /*0x4d6d87*/
  {
    v48 = this->?[0]; /*0x4d6d95*/
    v49 = this->?[1]; /*0x4d6da1*/
    v50 = this->?[2]; /*0x4d6dad*/
    v18 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v48); /*0x4d6db1*/
    TechnoClass::SetFocus((TechnoClass *)this, (int)v18); /*0x4d6db9*/
  }
  if ( this )
    v19 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15 ? (int *)this : 0;
  else
    v19 = 0; /*0x4d6dc2*/
  if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->?) /*0x4d6e15*/
    && v19
    && (*(_BYTE *)(v19[432] + 3778) || (unsigned __int8)TechnoTypeClass::HasVoiceResponse(v19, 14))
    && (*((int (__thiscall **)(FootClass *))this->TechnoClass + 97))(this) != 17 )
  {
    target = this->?; /*0x4d6e17*/
    if ( target ) /*0x4d6e1f*/
    {
      if ( (*((int (__thiscall **)(AbstractClass *))target->vtable0 + 11))(target) == 6 ) /*0x4d6e29*/
      {
        (*((void (__thiscall **)(FootClass *, int, _DWORD))this->TechnoClass + 122))(this, 17, 0); /*0x4d6e32*/
        return 1; /*0x4d6e44*/
      }
    }
  }
  *(_DWORD *)v47 = (*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 199))(this, 1); /*0x4d6e51*/
  LOWORD(v21) = Math::RoundToInt((double)*(int *)v47 * 1.1); /*0x4d6e5f*/
  v22 = v21; /*0x4d6e64*/
  v23 = this->?; /*0x4d6e66*/
  if ( v23 ) /*0x4d6e6e*/
  {
    if ( (v23->abstractFlags & 4) != 0 ) /*0x4d6e81*/
      v22 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5924); /*0x4d6e89*/
    if ( !this->unknownBool68D /*0x4d6eb1*/
      && !this->movementDestination
      && ObjectClass::DistanceTo((ObjectClass *)this, (int)v23) > v22 )
    {
      (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x4d6eb8*/
      (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, this->?, 1); /*0x4d6ecb*/
    }
    if ( this->? ) /*0x4d6ed1*/
    {
      (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 335))(this, 0); /*0x4d6f32*/
    }
    else
    {
      if ( FootClass::CanEnterBuilding(this) && FootClass::updateThreat(this) ) /*0x4d6ee6*/
      {
        vtable0 = (void (__thiscall **)(FootClass *, int))this->TechnoClass; /*0x4d6ef5*/
        v25 = (*((int (__thiscall **)(AbstractClass *, char *, int))this->?->TechnoClass::vtable0 + 18))( /*0x4d6f00*/
                this->?,
                v51,
                2);
        vtable0[231](this, v25); /*0x4d6f06*/
      }
      if ( this->? ) /*0x4d6f0c*/
        return 1; /*0x4d6f20*/
      (*((void (__thiscall **)(FootClass *))this->TechnoClass + 286))(this); /*0x4d6f25*/
    }
  }
  if ( !this->? /*0x4d6f6c*/
    && *(_DWORD *)(*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 254))(this, 1)
    && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 254))(this, 1)
                            + 172)
                + 344) )
  {
    v26 = 0; /*0x4d6f78*/
    while ( 1 ) /*0x4d6f83*/
    {
      v27 = (_WORD *)(*((int (__thiscall **)(FootClass *, int *))this->TechnoClass + 110))(this, &v48); /*0x4d6f83*/
      v28 = v27[1] + HIWORD(g_DDrawSurfaceManager.scenario[(v26 & 7) + 82]); /*0x4d6f9f*/
      v45[0] = LOWORD(g_DDrawSurfaceManager.scenario[(v26 & 7) + 82]) + *v27; /*0x4d6fa7*/
      v45[1] = v28; /*0x4d6fad*/
      *(_DWORD *)v47 = *(_DWORD *)v45; /*0x4d6fbb*/
      v29 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v47); /*0x4d6fbf*/
      v30 = Cell::IsBridge(v29); /*0x4d6fc6*/
      v31 = v30; /*0x4d6fcb*/
      if ( v30 ) /*0x4d6fcf*/
      {
        if ( *(_BYTE *)(v30[328] + 5493) ) /*0x4d6fd7*/
        {
          v32 = (*(int (__thiscall **)(_DWORD *))(*v30 + 60))(v30); /*0x4d6fe8*/
          if ( v32 == (*((int (__thiscall **)(FootClass *))this->TechnoClass + 15))(this) ) /*0x4d6ff3*/
            break; /*0x4d6ff3*/
        }
      }
      if ( ++v26 >= 8 ) /*0x4d6ff9*/
        goto LABEL_71; /*0x4d6ff9*/
    }
    if ( v31 ) /*0x4d7003*/
    {
      (*((void (__thiscall **)(FootClass *, _DWORD *))this->TechnoClass + 242))(this, v31); /*0x4d700a*/
      v33 = (void (__thiscall **)(FootClass *, int, _DWORD))this->TechnoClass; /*0x4d7010*/
      this->FootClass_field_bool_68E = 1; /*0x4d7018*/
      v33[122](this, 1, 0); /*0x4d701f*/
    }
  }
LABEL_71:
  v34 = *((double *)MissionClass::GetMissionControl((MissionClass *)this) + 2) * 900.0; /*0x4d7025*/
  LOWORD(v35) = Math::RoundToInt(v34); /*0x4d7035*/
  v36 = v35; /*0x4d703e*/
  if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 2 ) /*0x4d7046*/
    v36 *= 2; /*0x4d7048*/
  v37 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 5) + v36; /*0x4d705e*/
  if ( this->?
    && (this
     && (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15
     && *((_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15
                  ? this + 1
                  : (FootClass *)1728)->TechnoClass
        + 1685)
     || *(_DWORD *)(*((int (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 254))(this, 0)
     && *(int *)(*(_DWORD *)(*((int (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 254))(this, 0) + 180) <= 512) )
  {
    v38 = (int *)(*((int (__thiscall **)(AbstractClass *, char *))this->?->TechnoClass::vtable0 + 18))(this->?, v51); /*0x4d70e0*/
    v39 = *v38; /*0x4d70e3*/
    v40 = v38[1]; /*0x4d70e5*/
    v41 = (int *)(*((int (__thiscall **)(FootClass *, char *))this->TechnoClass + 18))(this, v52); /*0x4d70f1*/
    v42 = *v41; /*0x4d70f4*/
    v49 = v41[1] - v40; /*0x4d70fd*/
    v48 = v42 - v39; /*0x4d7101*/
    Math::Sqrt((double)(v42 - v39) * (double)(v42 - v39) + (double)v49 * (double)v49); /*0x4d7121*/
    LOWORD(v43) = Math::RoundToInt(v34); /*0x4d7129*/
    *(_DWORD *)v47 = v43; /*0x4d7133*/
    if ( v43 <= 768 && (double)*(int *)v47 >= 281.6 ) /*0x4d7148*/
      v37 /= 6; /*0x4d7158*/
  }
  return v37; /*0x4d6abf*/
}



// ==== 0x004D7170  FootClass::DispatchInput  this=FootClass  sig=csp ====
char __thiscall FootClass_DispatchInput(double *this, int a2, int a3)
{
  int v4; // edx
  int v5; // ebx
  int v6; // edi
  int v7; // ecx
  __int16 v8; // ax
  _BYTE *v9; // eax
  int v10; // eax
  int v11; // edx

  if ( !(unsigned __int8)TechnoClass::FinishDeploy(a2, a3) ) /*0x4d717f*/
    return 0; /*0x4d7324*/
  if ( !this->Locomotor ) /*0x4d718c*/
    WinAPI::Wrapper(-2147467261); /*0x4d719b*/
  (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 80))(this->Locomotor); /*0x4d71a9*/
  if ( !HouseClass::IonSensitivesShouldBeOffline() ) /*0x4d71b2*/
    goto LABEL_26; /*0x4d71b2*/
  if ( !this->Locomotor ) /*0x4d71bb*/
    WinAPI::Wrapper(-2147467261); /*0x4d71ca*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 100))(this->Locomotor) ) /*0x4d71d8*/
  {
    if ( !this->Locomotor ) /*0x4d71df*/
      WinAPI::Wrapper(-2147467261); /*0x4d71ee*/
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 92))(this->Locomotor); /*0x4d71fc*/
  }
  else
  {
LABEL_26:
    if ( !this->Locomotor ) /*0x4d7201*/
      WinAPI::Wrapper(-2147467261); /*0x4d7210*/
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 88))(this->Locomotor); /*0x4d721e*/
  }
  (*(void (__thiscall **)(double *, _DWORD))(this->q198)(this, this->owner); /*0x4d722f*/
  v4 = *(_DWORD *)this; /*0x4d7235*/
  this->q178 = -1; /*0x4d723e*/
  v5 = *(_DWORD *)(*(int (__thiscall **)(double *, int *))(v4 + 440))(this, &a3); /*0x4d724e*/
  v6 = 0; /*0x4d7250*/
  a3 = v5; /*0x4d7252*/
  do /*0x4d72ac*/
  {
    v7 = v6 & 7; /*0x4d725d*/
    v8 = HIWORD(Direction_X_Offsets[v7]); /*0x4d7272*/
    LOWORD(a3) = v5 + LOWORD(Direction_X_Offsets[v7]); /*0x4d7276*/
    HIWORD(a3) = HIWORD(v5) + v8; /*0x4d7282*/
    a2 = a3; /*0x4d728b*/
    v9 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2); /*0x4d7295*/
    ++v6; /*0x4d72a2*/
    ++v9[290]; /*0x4d72a6*/
  }
  while ( v6 < 8 ); /*0x4d72ac*/
  if ( (*(unsigned __int8 (__thiscall **)(double *))(this->q054)(this) ) /*0x4d72b2*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(double *))(this->hasParachute)(this) + 3478) ) /*0x4d72cb*/
      GadgetGrid::InsertItem(g_CellClassManager, (int)this); /*0x4d72db*/
  }
  else
  {
    this->FootClass_field_55C = v5; /*0x4d72b9*/
  }
  v10 = (*(int (__thiscall **)(double *))(this->hasParachute)(this); /*0x4d72e4*/
  v11 = *(_DWORD *)this; /*0x4d72f0*/
  this->chronoLockRemaining = *(double *)(v10 + 752); /*0x4d72f4*/
  if ( *(_DWORD *)((*(int (__thiscall **)(double *))(v11 + 132))(this) + 1520) ) /*0x4d7300*/
    (*(void (__thiscall **)(double *, int))(*(_DWORD *)this + 1256))(this, g_FootClass_Pool); /*0x4d7318*/
  return 1; /*0x4d7320*/
}



// ==== 0x004D7330  FootClass::ProcessDeploy  this=FootClass  sig=csp ====
int __thiscall FootClass::ProcessDeploy(
        FootClass *this,
        int a2,
        double a3,
        int *a4,
        int a5,
        int a6,
        void *a7,
        char a8,
        __int64 a9)
{
  int v9; // edi
  int *parasiteEatingMe; // ecx
  int v12; // ecx
  _DWORD *v13; // edx
  int v14; // edx
  _DWORD *v15; // edx
  int result; // eax
  int v17; // edi
  int team; // ecx
  int v19; // eax
  BuildingClass *v20; // [esp+0h] [ebp-1Ch]
  char v21; // [esp+4h] [ebp-18h]
  __int64 v22; // [esp+8h] [ebp-14h]
  int v23; // [esp+14h] [ebp-8h]

  if ( HIDWORD(a3) ) /*0x4d7343*/
  {
    if ( *(_BYTE *)(HIDWORD(a3) + 331) ) /*0x4d7345*/
    {
      if ( this->parasiteEatingMe ) /*0x4d734f*/
      {
        BuildingClass::Deploy(v20, SHIDWORD(a3), v9); /*0x4d735f*/
        if ( a4 ) /*0x4d7366*/
          (*(void (__thiscall **)(int *, _DWORD))(*a4 + 968))(a4, 0); /*0x4d736e*/
      }
    }
  }
  parasiteEatingMe = (int *)this->parasiteEatingMe; /*0x4d7374*/
  if ( parasiteEatingMe /*0x4d7398*/
    && a4 != parasiteEatingMe
    && *(_DWORD *)a2 > *(_DWORD *)((*(int (__thiscall **)(int *))(*parasiteEatingMe + 132))(parasiteEatingMe) + 3436) )
  {
    v12 = 2 * *(_DWORD *)a2 /*0x4d73b7*/
        - *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)this->parasiteEatingMe + 132))(this->parasiteEatingMe)
                    + 3436);
    v13 = (_DWORD *)(*(_DWORD *)(this->parasiteEatingMe + 1692) + 44); /*0x4d73c5*/
    *v13 = dword_A8ED84; /*0x4d73c8*/
    v13[1] = v23; /*0x4d73ce*/
    v13[2] = v12; /*0x4d73d1*/
  }
  v14 = this->parasiteEatingMe; /*0x4d73d4*/
  if ( v14 && *(int *)a2 < 0 ) /*0x4d73e1*/
  {
    v15 = (_DWORD *)(*(_DWORD *)(v14 + 1692) + 44); /*0x4d73ee*/
    *v15 = dword_A8ED84; /*0x4d73f6*/
    v15[1] = v23; /*0x4d73fc*/
    v15[2] = 50; /*0x4d73ff*/
    BuildingClass::Deploy(v20, SHIDWORD(a3), a2); /*0x4d740e*/
  }
  TechnoClass::ReceiveDamage_Shield( /*0x4d742c*/
    this,
    COERCE_DOUBLE(__PAIR64__(LODWORD(a3), a2)),
    COERCE_DOUBLE(__PAIR64__((unsigned int)a4, HIDWORD(a3))),
    (int *)a5,
    a6,
    a7,
    v20,
    v21,
    v22);
  v17 = result; /*0x4d7431*/
  if ( result != 5 ) /*0x4d7436*/
  {
    if ( result ) /*0x4d7444*/
    {
      team = this->team; /*0x4d7446*/
      if ( team ) /*0x4d744e*/
      {
        FootClass::LinkToTransporter(team, (int)this, result, a4); /*0x4d7453*/
        return v17; /*0x4d7461*/
      }
    }
    if ( result == 4 || !result ) /*0x4d746b*/
      return v17; /*0x4d746b*/
    v19 = this->team; /*0x4d746d*/
    if ( v19 /*0x4d748a*/
      && *(_BYTE *)(*(_DWORD *)(v19 + 36) + 172)
      && !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner) )
    {
      if ( !a4 ) /*0x4d7495*/
        return v17; /*0x4d74cd*/
      TechnoClass::EvaluateMission(this, (int)a4); /*0x4d749a*/
    }
    if ( a4 && MissionClass::GetMissionControl(this)[4] && !MissionClass::GetMissionControl(this)[5] ) /*0x4d74b8*/
      (*(void (__thiscall **)(FootClass *, _DWORD, int))(this->vtable0 + 1156))(this, 0, 1); /*0x4d74c7*/
    return v17; /*0x4d74c7*/
  }
  return result; /*0x4d7438*/
}



// ==== 0x004D74E0  FootClass::ValidateMove  this=FootClass  sig=csp ====
int __thiscall FootClass::ValidateMove(FootClass *this, int a2, int *a3, char a4)
{
  int result; // eax
  _BYTE *WaypointCoords; // eax
  _DWORD *v7; // eax
  int v8; // edx
  _DWORD *v9; // eax
  int GroundHeight; // eax
  int v11; // edi
  _DWORD *v12; // eax
  char IsWithinUsableArea; // al
  int (__thiscall **vtable0)(FootClass *, int *, _DWORD); // edx
  _DWORD *v15; // eax
  char IsPassable; // bl
  bool v17; // cl
  bool v18; // dl
  int v19; // eax
  __int16 *v20; // ecx
  char v21; // bp
  _DWORD *v22; // eax
  int v23; // eax
  int *v24; // edi
  void *v25; // eax
  _DWORD *v26; // eax
  int *v27; // eax
  int v28; // eax
  bool v29; // al
  int TileIndex; // [esp-2Ah] [ebp-138h]
  char v31; // [esp-22h] [ebp-130h]
  char v32; // [esp-22h] [ebp-130h]
  char v33; // [esp-Eh] [ebp-11Ch]
  char v34; // [esp+19h] [ebp-F5h]
  int v35; // [esp+1Ah] [ebp-F4h] BYREF
  __int16 v36[3]; // [esp+1Eh] [ebp-F0h] BYREF
  char v37; // [esp+25h] [ebp-E9h]
  char v38[4]; // [esp+26h] [ebp-E8h] BYREF
  int *v39; // [esp+2Ah] [ebp-E4h]
  int v40; // [esp+2Eh] [ebp-E0h] BYREF
  int v41; // [esp+32h] [ebp-DCh] BYREF
  _DWORD v42[2]; // [esp+36h] [ebp-D8h] BYREF
  int v43; // [esp+3Eh] [ebp-D0h]
  __int16 v44[2]; // [esp+42h] [ebp-CCh] BYREF
  _DWORD v45[2]; // [esp+46h] [ebp-C8h] BYREF
  int v46; // [esp+4Eh] [ebp-C0h]
  int v47; // [esp+52h] [ebp-BCh] BYREF
  int v48; // [esp+56h] [ebp-B8h] BYREF
  ScriptAction v49; // [esp+5Ah] [ebp-B4h] BYREF

  if ( this->?
    || this->?
    && (result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this), !*(_BYTE *)(result + 1682)) )
  {
LABEL_31:
    LOBYTE(result) = 0; /*0x4d77ec*/
  }
  else
  {
    result = a2 - 1; /*0x4d7521*/
    switch ( a2 )
    {
      case 1:
      case 62:
        goto LABEL_32;
      case 2:
        v7 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(*a3 + 72))(a3, &v49.__pad_1C[4]); /*0x4d77c6*/
        if ( (unsigned __int8)Cell::IsPassable(v7) ) /*0x4d77cf*/
        {
          result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this); /*0x4d77dc*/
          if ( !*(_BYTE *)(result + 3213) ) /*0x4d77e2*/
            goto LABEL_31; /*0x4d77ea*/
        }
LABEL_32:
        result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 40))(this); /*0x4d77fb*/
        if ( !(_BYTE)result ) /*0x4d7807*/
          goto LABEL_31; /*0x4d7807*/
        v8 = *a3; /*0x4d7809*/
        v39 = a3; /*0x4d7812*/
        v9 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(v8 + 72))(a3, v49.ScriptAction_field_0x8); /*0x4d7816*/
        v42[0] = *v9; /*0x4d781b*/
        v42[1] = v9[1]; /*0x4d7827*/
        v43 = v9[2]; /*0x4d7833*/
        GroundHeight = Cell::GetGroundHeight(v42); /*0x4d7837*/
        if ( v43 <= GroundHeight ) /*0x4d7840*/
          v43 = Cell::GetGroundHeight(v42); /*0x4d7851*/
        if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3372) /*0x4d7883*/
          && !*(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6127)
          || (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 2 )
        {
          result = Cell::IsPassable(v42); /*0x4d788f*/
          if ( (_BYTE)result ) /*0x4d7896*/
            goto LABEL_83; /*0x4d7896*/
        }
        v11 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1460); /*0x4d78a6*/
        v12 = (_DWORD *)(*(int (__thiscall **)(int *, char *, _DWORD))(*a3 + 76))(a3, &v49.__pad_34[4], 0); /*0x4d78ba*/
        v36[0] = *v12 / 256; /*0x4d78cf*/
        v36[1] = v12[1] / 256; /*0x4d78e8*/
        v35 = *(_DWORD *)v36; /*0x4d78f5*/
        IsWithinUsableArea = LayerClass::IsWithinUsableArea( /*0x4d78fa*/
                               (LayerClass *)&stru_87F5F0.__pad_58[416],
                               (__int16 *)&v35,
                               1);
        vtable0 = (int (__thiscall **)(FootClass *, int *, _DWORD))this->TechnoClass; /*0x4d78ff*/
        v37 = IsWithinUsableArea; /*0x4d7901*/
        v15 = (_DWORD *)vtable0[19](this, &v49.ScriptAction_field_0x14, 0); /*0x4d790e*/
        *(_DWORD *)v36 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v15); /*0x4d791f*/
        if ( v11 == 6 ) /*0x4d7923*/
        {
          v11 = 0; /*0x4d7925*/
        }
        else if ( v11 == 9 ) /*0x4d792c*/
        {
          v11 = 7; /*0x4d792e*/
        }
        if ( (*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 21))(this) /*0x4d797d*/
          || *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3372)
          || (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15
          && *(_BYTE *)(this->q1B0 + 3476)
          || (v34 = 0, (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 2) )
        {
          v34 = 1; /*0x4d797f*/
        }
        v38[0] = (*((int (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 47))(this, 0); /*0x4d7995*/
        v46 = 0; /*0x4d79a9*/
        v45[1] = (SHIWORD(v35) << 8) + 128; /*0x4d79ad*/
        v45[0] = ((__int16)v35 << 8) + 128; /*0x4d79c3*/
        v46 = Cell::GetGroundHeight(v45); /*0x4d79d6*/
        IsPassable = Cell::IsPassable(v45); /*0x4d79df*/
        v17 = !a4 /*0x4d7a16*/
           && ((unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[20])
            || (unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[24]));
        if ( v34 && a2 == 2 ) /*0x4d7a2b*/
        {
          v18 = *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3372) /*0x4d7a53*/
             && (*((int (__thiscall **)(FootClass *))this->TechnoClass + 114))(this) < 0;
          v33 = v18; /*0x4d7a6b*/
          v40 = 0; /*0x4d7a7c*/
          v31 = BYTE1(*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v35) + 80)) /*0x4d7a99*/
              & 1;
          v19 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this); /*0x4d7a9f*/
          *(_DWORD *)v36 = *LayerClass::Pathfinding_Find( /*0x4d7acc*/
                              &stru_87F5F0.__pad_58[416],
                              (int)&v47,
                              &v47,
                              (__int16 *)&v35,
                              *(_DWORD *)(v19 + 1660),
                              -1,
                              v11,
                              v31,
                              1,
                              1,
                              0,
                              1,
                              v33,
                              1,
                              (__int16 *)&v40,
                              0,
                              0);
          if ( *(_DWORD *)v36 != g_FootClass_Pool ) /*0x4d7ad0*/
          {
            v20 = v36; /*0x4d7ae4*/
LABEL_71:
            v39 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20); /*0x4d7bf9*/
          }
        }
        else
        {
          v21 = v38[0]; /*0x4d7af1*/
          if ( !v37 /*0x4d7b51*/
            || !v34
            && (IsPassable
             || a2 == 2
             || v17 && (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15
             || (v22 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v35),
                 !MapSeed::CheckTileMatch(
                    (MapSeed *)&stru_87F5F0.__pad_58[416],
                    (__int16 *)(*(_DWORD *)v36 + 36),
                    (__int16 *)&v35,
                    v11,
                    v21,
                    BYTE1(v22[80]) & 1,
                    0))) )
          {
            v41 = 0; /*0x4d7b7e*/
            v32 = BYTE1(*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v35) + 80)) /*0x4d7ba0*/
                & 1;
            TileIndex = MapClass::GetTileIndex( /*0x4d7bb1*/
                          (MapClass *)&stru_87F5F0.__pad_58[416],
                          (__int16 *)(*(_DWORD *)v36 + 36),
                          v11,
                          v21);
            v23 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this); /*0x4d7bb4*/
            *(_DWORD *)v38 = *LayerClass::Pathfinding_Find( /*0x4d7be1*/
                                &stru_87F5F0.__pad_58[416],
                                (int)&v48,
                                &v48,
                                (__int16 *)&v35,
                                *(_DWORD *)(v23 + 1660),
                                TileIndex,
                                v11,
                                v32,
                                1,
                                1,
                                0,
                                1,
                                0,
                                1,
                                (__int16 *)&v41,
                                0,
                                0);
            if ( *(_DWORD *)v38 != g_FootClass_Pool ) /*0x4d7be5*/
            {
              v20 = (__int16 *)v38; /*0x4d7bf5*/
              goto LABEL_71; /*0x4d7bf5*/
            }
          }
        }
        result = (int)v39; /*0x4d7c08*/
        if ( v39 ) /*0x4d7c0e*/
        {
          v24 = v39; /*0x4d7c14*/
          v25 = 0; /*0x4d7c1f*/
          if ( v39 != a3 ) /*0x4d7c23*/
          {
            if ( a3 ) /*0x4d7c27*/
            {
              v26 = (_DWORD *)(*(int (__stdcall **)(char *))(*a3 + 72))(&v49.__pad_28[4]); /*0x4d7c33*/
              *(_WORD *)v38 = *v26 / 256; /*0x4d7c46*/
              *(_WORD *)&v38[2] = v26[1] / 256; /*0x4d7c5e*/
              *(_DWORD *)v44 = *(_DWORD *)v38; /*0x4d7c67*/
              v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v44); /*0x4d7c71*/
            }
          }
          result = (*((int (__thiscall **)(FootClass *, int, _DWORD, int *, void *))this->TechnoClass + 222))( /*0x4d7c7e*/
                     this,
                     2,
                     0,
                     v24,
                     v25);
        }
LABEL_83:
        LOBYTE(result) = 1; /*0x4d7cc0*/
        break; /*0x4d7cc3*/
      case 3:
        result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 40))(this); /*0x4d76ca*/
        if ( !(_BYTE)result ) /*0x4d76d2*/
          goto LABEL_31; /*0x4d76d2*/
        if ( !a3 ) /*0x4d76e1*/
          goto LABEL_31; /*0x4d76e1*/
        result = (int)AbstractClass::IsTechnoType((AbstractClass *)a3); /*0x4d76e9*/
        if ( !result ) /*0x4d76f0*/
          goto LABEL_31; /*0x4d76f0*/
        result = (*((int (__thiscall **)(FootClass *, int, _DWORD, int *, _DWORD))this->TechnoClass + 222))( /*0x4d7701*/
                   this,
                   7,
                   0,
                   a3,
                   0);
        LOBYTE(result) = 1; /*0x4d7707*/
        return result; /*0x4d7713*/
      case 4:
      case 52:
      case 56:
        result = (*((int (__thiscall **)(FootClass *, int, _DWORD, _DWORD, _DWORD))this->TechnoClass + 222))( /*0x4d75ed*/
                   this,
                   16,
                   0,
                   0,
                   0);
        LOBYTE(result) = 1; /*0x4d75f3*/
        return result; /*0x4d75ff*/
      case 5:
      case 53:
      case 63:
      case 64:
      case 71:
        result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 39))(this); /*0x4d76a3*/
        if ( !(_BYTE)result ) /*0x4d76ab*/
          goto LABEL_31; /*0x4d76ab*/
        result = (*((int (__thiscall **)(FootClass *, int, int *, _DWORD, _DWORD))this->TechnoClass + 222))( /*0x4d76c1*/
                   this,
                   1,
                   a3,
                   0,
                   0);
        goto LABEL_83; /*0x4d76c1*/
      case 9:
        result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 40))(this); /*0x4d771a*/
        if ( !(_BYTE)result ) /*0x4d7722*/
          goto LABEL_31; /*0x4d7722*/
        result = (*((int (__thiscall **)(FootClass *, int, _DWORD, int *, _DWORD))this->TechnoClass + 222))( /*0x4d773a*/
                   this,
                   8,
                   0,
                   a3,
                   0);
        LOBYTE(result) = 1; /*0x4d7740*/
        return result; /*0x4d774c*/
      case 11:
        result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 40))(this); /*0x4d7753*/
        if ( !(_BYTE)result ) /*0x4d775b*/
          goto LABEL_31; /*0x4d775b*/
        result = (*((int (__thiscall **)(FootClass *, int, _DWORD, int *, _DWORD))this->TechnoClass + 222))( /*0x4d7773*/
                   this,
                   9,
                   0,
                   a3,
                   0);
        LOBYTE(result) = 1; /*0x4d7779*/
        return result; /*0x4d7785*/
      case 16:
        result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 40))(this); /*0x4d778c*/
        if ( !(_BYTE)result ) /*0x4d7794*/
          goto LABEL_31; /*0x4d7794*/
        goto LABEL_12; /*0x4d7794*/
      case 26:
        result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 39))(this); /*0x4d7547*/
        if ( !(_BYTE)result ) /*0x4d754f*/
          goto LABEL_31; /*0x4d754f*/
        result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 40))(this); /*0x4d7559*/
        if ( !(_BYTE)result ) /*0x4d7561*/
          goto LABEL_31; /*0x4d7561*/
        if ( ((*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15 /*0x4d75aa*/
           && *(_BYTE *)(this->q1B0 + 3778)
           || (unsigned __int8)TechnoTypeClass::HasVoiceResponse((int *)this, 14))
          && (*(int (__thiscall **)(int *))(*a3 + 44))(a3) == 6
          && !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, (int)a3) )
        {
LABEL_12:
          result = (*((int (__thiscall **)(FootClass *, int, _DWORD, int *, _DWORD))this->TechnoClass + 222))( /*0x4d75b3*/
                     this,
                     17,
                     0,
                     a3,
                     0);
          LOBYTE(result) = 1; /*0x4d75c4*/
          return result; /*0x4d75d0*/
        }
        result = (*((int (__thiscall **)(FootClass *, int, int *, _DWORD, _DWORD))this->TechnoClass + 222))( /*0x4d75dc*/
                   this,
                   11,
                   a3,
                   0,
                   0);
        goto LABEL_83; /*0x4d75dc*/
      case 51:
      case 54:
        goto LABEL_31;
      case 55:
        WaypointCoords = ScriptAction::GetWaypointCoords(&v49, this); /*0x4d7607*/
        result = (int)EventClass::Add( /*0x4d762e*/
                        &v49.__pad_34[16],
                        *(_DWORD *)(this->?->BombClass_field_28 + 48),
                        0xAu,
                        *(_DWORD *)WaypointCoords,
                        WaypointCoords[4]);
        if ( (int)stru_A80220.lineTrailer >= 128 ) /*0x4d763d*/
          goto LABEL_83; /*0x4d763d*/
        qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, (const void *)result, 0x6Fu); /*0x4d765d*/
        dword_A83A54[dword_A802D0] = timeGetTime(); /*0x4d766e*/
        result = (int)++stru_A80220.lineTrailer; /*0x4d7684*/
        dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x4d768a*/
        LOBYTE(result) = 1; /*0x4d7690*/
        return result; /*0x4d769c*/
      case 59:
        v27 = (int *)(*((int (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 254))(this, 0); /*0x4d7c86*/
        v29 = 0; /*0x4d7ca0*/
        if ( v27 ) /*0x4d7c8e*/
        {
          v28 = *v27; /*0x4d7c90*/
          if ( v28 ) /*0x4d7c94*/
          {
            if ( *(int *)(v28 + 164) < 0 ) /*0x4d7c9e*/
              v29 = 1; /*0x4d7c8e*/
          }
        }
        result = (*((int (__thiscall **)(FootClass *, int, FootClass *, _DWORD, _DWORD))this->TechnoClass + 222))(
                   this,
                   v29 ? 11 : 5,
                   this,
                   0,
                   0);
        goto LABEL_83; /*0x4d7cba*/
      default:
        goto LABEL_83;
    }
  }
  return result; /*0x4d75c6*/
}



// ==== 0x004D7D50  ObjectClass::SpawnInfantry  this=FootClass  sig=csp ====
char __thiscall ObjectClass::SpawnInfantry(TechnoClass *this, int a2, __int16 *a3, __int16 *a4, void **a5)
{
  char result; // al
  __int16 *v7; // edi
  int referenceCount; // ebp
  void ***PlacementCell; // eax
  int v10; // edi
  void *v11; // eax
  int v12; // ebp
  void *v13; // eax
  int v14; // ebp
  void *v15; // eax
  int v16; // edx
  AnimClass *v17; // eax
  int v18; // eax
  int v19; // eax
  int vtable0; // edi
  void *v21; // eax
  int v22; // eax
  int v23; // ebp
  void *v24; // eax
  int v25; // ebp
  void *v26; // eax
  int v27; // ebp
  void *v28; // eax
  int v29; // ebp
  void *v30; // eax
  InfantryClass *v31; // eax
  int Type; // edi
  InfantryClass *v33; // eax
  char v34; // dl
  int v35; // edx
  __int16 v36; // cx
  void *v37; // [esp+0h] [ebp-28h]
  int v38; // [esp+4h] [ebp-24h]
  char v39; // [esp+8h] [ebp-20h]
  __int16 v40[2]; // [esp+10h] [ebp-18h] BYREF
  int v41; // [esp+14h] [ebp-14h] BYREF
  int v42; // [esp+18h] [ebp-10h] BYREF
  int v43[2]; // [esp+1Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+24h] [ebp-4h]

  if ( this->isBerserk[0] ) /*0x4d7d58*/
    return 0; /*0x4d7d64*/
  if ( this->rockerLinkedUnit && !*(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1682) ) /*0x4d7d81*/
    return 0; /*0x4d7d8d*/
  v7 = a3; /*0x4d7d9a*/
  referenceCount = (*(int (__thiscall **)(TechnoClass *, __int16 *, _DWORD, void **))(this->vtable0 + 112))( /*0x4d7db1*/
                     this,
                     a3,
                     0,
                     a5);
  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&dword_87F7E8, v7, 1) && referenceCount != 2 ) /*0x4d7dbf*/
    return 0; /*0x4d7dc1*/
  switch ( referenceCount ) /*0x4d7de0*/
  {
    case 1: /*0x4d7de0*/
    case 62: /*0x4d7de0*/
      if ( g_MoveFeedback ) /*0x4d7ebc*/
      {
        v16 = v7[1] << 8; /*0x4d7ed6*/
        v43[0] = (*v7 << 8) + 128; /*0x4d7ed9*/
        v43[1] = v16 + 128; /*0x4d7ee9*/
        GroundHeight = 0; /*0x4d7eed*/
        GroundHeight = Cell::GetGroundHeight(v43); /*0x4d7efe*/
        if ( (Coord::To_Cell((Coord *)&dword_87F7E8, v43)->flags & 0x100) != 0 ) /*0x4d7f16*/
          GroundHeight += dword_8B3DF4; /*0x4d7f24*/
        referenceCount = dword_A8B230[14].referenceCount; /*0x4d7f35*/
        if ( *(_DWORD *)&dword_A8B238 && *(_DWORD *)&dword_A8B238 != 5 ) /*0x4d7f40*/
        {
          dword_A8B230[14].referenceCount = -3; /*0x4d7f42*/
          *(_DWORD *)(dword_8871E0->Normal[6] + 832) = -5000; /*0x4d7f57*/
        }
        v17 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4d7f66*/
        if ( v17 ) /*0x4d7f70*/
          a5 = AnimClass::ctor(v17, (void *)dword_8871E0->Normal[6], v43, 0, 1, (void *)0x600, 0, 0); /*0x4d7f98*/
        else
          a5 = 0; /*0x4d7f9e*/
        if ( *(_DWORD *)&dword_A8B238 && *(_DWORD *)&dword_A8B238 != 5 ) /*0x4d7fb6*/
        {
          dword_A8B230[14].referenceCount = referenceCount; /*0x4d7fcb*/
          v18 = (*(int (__thiscall **)(_DWORD *, void ***))(dword_A8E9A8 + 16))(&dword_A8E9A8, &a5); /*0x4d7fd7*/
          if ( v18 != -1 && v18 < dword_A8E9B8 && v18 < --dword_A8E9B8 ) /*0x4d7ff2*/
          {
            do /*0x4d800a*/
            {
              ++v18; /*0x4d7ffa*/
              *((_DWORD *)dword_A8E9AC + v18 - 1) = *((_DWORD *)dword_A8E9AC + v18); /*0x4d7ffe*/
            }
            while ( v18 < dword_A8E9B8 ); /*0x4d800a*/
          }
          if ( dword_A83E10 < dword_A83E08 /*0x4d8042*/
            || (byte_A83E0D || !dword_A83E08)
            && dword_A83E14 > 0
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A83E00 + 8))(
                 &dword_A83E00,
                 dword_A83E14 + dword_A83E08,
                 0) )
          {
            v19 = dword_A83E10++; /*0x4d8055*/
            *((_DWORD *)dword_A83E04 + v19) = a5; /*0x4d8062*/
          }
        }
      }
      goto LABEL_38; /*0x4d8062*/
    case 2: /*0x4d7de0*/
LABEL_38:
      a5 = (void **)*ObjectClass::FindPlacementCell((ObjectClass *)&v42, referenceCount, v7, 0, v38, v39); /*0x4d8065*/
      if ( a5 == (void **)g_FootClass_Pool ) /*0x4d8081*/
        return 0; /*0x4d8081*/
      vtable0 = this->vtable0; /*0x4d8099*/
      v37 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, a4); /*0x4d80a6*/
      v21 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a5); /*0x4d80ac*/
LABEL_51:
      (*(void (__thiscall **)(TechnoClass *, int, _DWORD, void *, void *))(vtable0 + 888))(this, 2, 0, v21, v37); /*0x4d822a*/
LABEL_52:
      result = 1; /*0x4d8237*/
      break; /*0x4d8239*/
    case 3: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 160))(this) ) /*0x4d8155*/
        return 0; /*0x4d8155*/
      v27 = this->vtable0; /*0x4d815b*/
      v28 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v7); /*0x4d8165*/
      (*(void (__thiscall **)(TechnoClass *, int, _DWORD, void *, _DWORD))(v27 + 888))(this, 7, 0, v28, 0); /*0x4d8171*/
      return 1; /*0x4d817f*/
    case 5: /*0x4d7de0*/
    case 63: /*0x4d7de0*/
      v22 = ObjectClass::processDeath((ObjectClass *)v7); /*0x4d80b3*/
      if ( !v22 || *(_BYTE *)(v22 + 256) || *(int *)(v22 + 108) <= 0 ) /*0x4d80cb*/
      {
        v23 = this->vtable0; /*0x4d80e9*/
        v24 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v7); /*0x4d80f5*/
        (*(void (__thiscall **)(TechnoClass *, int, void *, _DWORD, _DWORD))(v23 + 888))(this, 1, v24, 0, 0); /*0x4d80ff*/
        return 1; /*0x4d8107*/
      }
      else
      {
        (*(void (__thiscall **)(TechnoClass *, int, int, _DWORD, _DWORD))(this->vtable0 + 888))(this, 1, v22, 0, 0); /*0x4d80d8*/
        return 1; /*0x4d80e0*/
      }
    case 6: /*0x4d7de0*/
      v14 = this->vtable0; /*0x4d7e8e*/
      v15 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v7); /*0x4d7e98*/
      (*(void (__thiscall **)(TechnoClass *, int, _DWORD, void *, _DWORD))(v14 + 888))(this, 10, 0, v15, 0); /*0x4d7ea4*/
      return 1; /*0x4d7eb2*/
    case 9: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 160))(this) ) /*0x4d811c*/
        return 0; /*0x4d811c*/
      v25 = this->vtable0; /*0x4d8122*/
      v26 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v7); /*0x4d812c*/
      (*(void (__thiscall **)(TechnoClass *, int, _DWORD, void *, _DWORD))(v25 + 888))(this, 8, 0, v26, 0); /*0x4d8138*/
      return 1; /*0x4d8146*/
    case 16: /*0x4d7de0*/
      v29 = this->vtable0; /*0x4d8182*/
      v30 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v7); /*0x4d818c*/
      (*(void (__thiscall **)(TechnoClass *, int, _DWORD, void *, _DWORD))(v29 + 888))(this, 17, 0, v30, 0); /*0x4d8198*/
      return 1; /*0x4d81a6*/
    case 26: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 156))(this) /*0x4d7e59*/
        && !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 816))(this)
        || !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 160))(this) )
      {
        return 0; /*0x4d7e61*/
      }
      v12 = this->vtable0; /*0x4d7e67*/
      v13 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v7); /*0x4d7e73*/
      (*(void (__thiscall **)(TechnoClass *, int, void *, _DWORD, _DWORD))(v12 + 888))(this, 11, v13, 0, 0); /*0x4d7e7d*/
      return 1; /*0x4d7e8b*/
    case 35: /*0x4d7de0*/
      v31 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v7); /*0x4d81af*/
      Type = InfantryClass::GetType(v31); /*0x4d81bb*/
      a3 = *(__int16 **)(Type + 40); /*0x4d81ca*/
      v33 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a3); /*0x4d81ce*/
      v34 = *(_DWORD *)(InfantryClass::GetType(v33) + 44) - 4; /*0x4d81e0*/
      a4 = *(__int16 **)(Type + 40); /*0x4d81e3*/
      v35 = v34 & 7; /*0x4d81e7*/
      v37 = 0; /*0x4d81ea*/
      v36 = (_WORD)a4 + LOWORD(dword_89F688[v35]); /*0x4d81fb*/
      vtable0 = this->vtable0; /*0x4d81fe*/
      LOWORD(v35) = HIWORD(dword_89F688[v35]); /*0x4d8200*/
      LOWORD(a5) = v36; /*0x4d8204*/
      HIWORD(a5) = HIWORD(a4) + v35; /*0x4d8213*/
      *(_DWORD *)v40 = a5; /*0x4d821c*/
      v21 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v40); /*0x4d8225*/
      goto LABEL_51; /*0x4d8225*/
    case 51: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 160))(this) ) /*0x4d7df3*/
        return 0; /*0x4d7df3*/
      PlacementCell = (void ***)ObjectClass::FindPlacementCell((ObjectClass *)&v41, referenceCount, v7, 0, v38, v39); /*0x4d7dff*/
      v10 = this->vtable0; /*0x4d7e06*/
      a5 = *PlacementCell; /*0x4d7e0c*/
      v11 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a5); /*0x4d7e18*/
      (*(void (__thiscall **)(TechnoClass *, int, _DWORD, void *, _DWORD))(v10 + 888))(this, 25, 0, v11, 0); /*0x4d7e24*/
      return 1; /*0x4d7e32*/
    default:
      goto LABEL_52;
  }
  return result; /*0x4d7d62*/
}



// ==== 0x004D82B0  FootClass::ValidatePlacement  this=FootClass  sig=csp ====
char __userpurge FootClass::ValidatePlacement@<al>(FootClass *this, __int16 a2@<bx>, int a3@<ebp>, int a4, int a5)
{
  int v5; // ecx
  TechnoClass *v6; // esi
  void (__thiscall **vtable0)(TechnoClass *, int *, int, _DWORD); // edx
  int v8; // eax
  int *alignmentPadding154; // edi
  FootClass *v10; // ecx
  int v11; // eax
  FootClass *v12; // eax
  int spawnStatus; // eax
  int v14; // ecx
  int v15; // eax
  void *v17; // eax
  int Element; // eax
  int *v19; // eax
  _DWORD *v20; // eax
  int v21; // edi
  int v22; // ebx
  int *v23; // eax
  int v24; // kr0C_4
  int v25; // eax
  AbstractClass *focus; // edi
  FootClass *v27; // [esp+Ch] [ebp-2Ch]
  int v28; // [esp+10h] [ebp-28h]
  int v29; // [esp+14h] [ebp-24h]
  char v30; // [esp+18h] [ebp-20h]
  _DWORD v31[3]; // [esp+20h] [ebp-18h] BYREF
  _BYTE v32[12]; // [esp+2Ch] [ebp-Ch] BYREF

  v6 = (TechnoClass *)v5; /*0x4d82b5*/
  if ( *(_BYTE *)(v5 + 1715) ) /*0x4d82b8*/
    return 0; /*0x4d854e*/
  v28 = a4; /*0x4d82ce*/
  v27 = this; /*0x4d82cf*/
  *(_BYTE *)(v5 + 1715) = 1; /*0x4d82d2*/
  TechnoClass::CompleteFactoryProduction((TechnoClass *)v5, (int)v27, v28); /*0x4d82d9*/
  if ( HIBYTE(v6[1].firepowerMultiplier[1]) ) /*0x4d82de*/
  {
    vtable0 = (void (__thiscall **)(TechnoClass *, int *, int, _DWORD))v6->RadioClass; /*0x4d82e8*/
    HIBYTE(v6[1].firepowerMultiplier[1]) = 0; /*0x4d82f5*/
    vtable0[93](v6, &dword_8B3DA8, 1, 0); /*0x4d82fc*/
  }
  v8 = v6[1].alignmentPadding154[0]; /*0x4d8302*/
  alignmentPadding154 = v6[1].alignmentPadding154; /*0x4d8308*/
  LOBYTE(a2) = 0; /*0x4d830e*/
  v10 = 0; /*0x4d8310*/
  this = 0; /*0x4d8314*/
  if ( v8 ) /*0x4d8318*/
  {
    v11 = StreamClass::Set((StreamClass *)&this, v6[1].alignmentPadding154); /*0x4d831f*/
    if ( v11 < 0 && v11 != -2147467262 ) /*0x4d832d*/
      WinAPI::Wrapper(v11); /*0x4d8330*/
    v10 = this; /*0x4d8335*/
    if ( this ) /*0x4d833b*/
    {
      if ( (*((unsigned __int8 (__stdcall **)(FootClass *))this->TechnoClass + 5))(this) ) /*0x4d8340*/
      {
        if ( *alignmentPadding154 ) /*0x4d8347*/
          (*(void (__stdcall **)(int))(*(_DWORD *)*alignmentPadding154 + 8))(*alignmentPadding154); /*0x4d8350*/
        v12 = this; /*0x4d8353*/
        *alignmentPadding154 = 0; /*0x4d8357*/
        if ( !v12 ) /*0x4d835f*/
          WinAPI::Wrapper(-2147467261); /*0x4d8366*/
        (*((void (__stdcall **)(FootClass *, int *))v12->TechnoClass + 4))(v12, v6[1].alignmentPadding154); /*0x4d8373*/
        LOBYTE(a2) = 1; /*0x4d8376*/
      }
      v10 = this; /*0x4d8378*/
    }
  }
  if ( v6[1].? > 0 ) /*0x4d8384*/
  {
    (*((void (__thiscall **)(TechnoClass *, _DWORD, _DWORD))v6->RadioClass + 288))(v6, *(_DWORD *)v6[1].?, 0); /*0x4d8395*/
    spawnStatus = v6[1].?; /*0x4d839b*/
    if ( spawnStatus > 0 ) /*0x4d83a3*/
    {
      v14 = spawnStatus - 1; /*0x4d83a5*/
      v15 = 0; /*0x4d83a8*/
      for ( v6[1].? = v14; v15 < v6[1].?; *(_DWORD *)(v6[1].? + 4 * v15 - 4) = *(_DWORD *)(v6[1].? + 4 * v15) ) /*0x4d83b2*/
        ++v15; /*0x4d83ba*/
    }
    if ( this ) /*0x4d83d2*/
      (*((void (__stdcall **)(FootClass *))this->TechnoClass + 2))(this); /*0x4d83d7*/
    return 1; /*0x4d83e2*/
  }
  if ( v6->? != 25 || !v6->? ) /*0x4d83ee*/
  {
    v17 = v6[1].RadioClass; /*0x4d83f8*/
    if ( v17 != (void *)-1 ) /*0x4d8401*/
    {
      if ( (_BYTE)a4 ) /*0x4d8409*/
      {
        Element = Array::GetElement( /*0x4d8420*/
                    *(Array **)&dword_A83D4C->__pad_140[4 * (_DWORD)v17 + 208],
                    SBYTE2(v6[1].firepowerMultiplier[1]));
        v19 = (int *)VectorClass::GetAtChecked( /*0x4d8438*/
                       *(VectorClass **)&dword_A83D4C->__pad_140[4 * (int)v6[1].RadioClass + 208],
                       Element);
        BuildingClass::ValidateFoundation_0((int)v6, a2, a3, v19, v29, v30); /*0x4d8440*/
        v10 = this; /*0x4d8445*/
      }
    }
  }
  if ( !(_BYTE)a2 ) /*0x4d844b*/
  {
    if ( (*((int (__thiscall **)(TechnoClass *))v6->RadioClass + 11))(v6) == 15 ) /*0x4d846c*/
    {
      if ( v6->focus ) /*0x4d8472*/
      {
        if ( !v6->slaveOwner ) /*0x4d8480*/
        {
          v20 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD *))v6->RadioClass + 18))(v6, v31); /*0x4d8498*/
          v21 = *v20 / 256; /*0x4d84c5*/
          v22 = v20[1] / 256; /*0x4d84c8*/
          v23 = (int *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))v6->focus->vtable0 + 18))(v6->focus, v32); /*0x4d84cb*/
          v24 = *v23; /*0x4d84dc*/
          v25 = v23[1] / 256; /*0x4d84ee*/
          if ( (unsigned __int16)(v24 / 256) != (_WORD)v21 || (_WORD)v25 != (_WORD)v22 ) /*0x4d84f9*/
          {
            focus = v6->focus; /*0x4d8501*/
            if ( v6->? != 11 ) /*0x4d850a*/
            {
              (*((void (__thiscall **)(TechnoClass *, int, _DWORD))v6->RadioClass + 122))(v6, 2, 0); /*0x4d8514*/
              TechnoClass::SetFocus(v6, 0); /*0x4d851e*/
            }
            (*((void (__thiscall **)(TechnoClass *, AbstractClass *, int))v6->RadioClass + 288))(v6, focus, 1); /*0x4d852a*/
          }
        }
      }
    }
    (*((void (__thiscall **)(TechnoClass *, _DWORD, _DWORD))v6->RadioClass + 337))(v6, 0, 0); /*0x4d8538*/
    if ( this ) /*0x4d8544*/
      (*((void (__stdcall **)(FootClass *))this->TechnoClass + 2))(this); /*0x4d8549*/
    return 0; /*0x4d8549*/
  }
  if ( v10 ) /*0x4d844f*/
    (*((void (__stdcall **)(FootClass *))v10->TechnoClass + 2))(v10); /*0x4d8454*/
  return 1; /*0x4d83da*/
}



// ==== 0x004D8560  FootClass::GetCoords  this=FootClass  sig=csp ====
_DWORD *__thiscall FootClass::GetCoords(FootClass *this, _DWORD *a2)
{
  AbstractClass *FootClass_field_5A0; // ecx
  _DWORD *BridgeAwareCoords; // eax
  _BYTE v6[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 97))(this) != 1 /*0x4d8591*/
    && ((FootClass_field_5A0 = (AbstractClass *)this->FootClass_field_5A0) != 0
     || (FootClass_field_5A0 = this->movementDestination) != 0) )
  {
    BridgeAwareCoords = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))FootClass_field_5A0->vtable0 + 22))( /*0x4d8584*/
                                    FootClass_field_5A0,
                                    v6);
  }
  else
  {
    BridgeAwareCoords = (_DWORD *)BuildingClass::GetBridgeAwareCoords((TechnoClass *)this); /*0x4d85a6*/
  }
  *a2 = *BridgeAwareCoords; /*0x4d85b5*/
  a2[1] = BridgeAwareCoords[1]; /*0x4d85ba*/
  a2[2] = BridgeAwareCoords[2]; /*0x4d85c1*/
  return a2; /*0x4d85bd*/
}



// ==== 0x004D85D0  FootClass::UpdateAI  this=FootClass  sig=csp ====
char __userpurge FootClass::UpdateAI@<al>(FootClass *this, int a2@<ebp>, int a3@<edi>, double a4@<st0>, int a5)
{
  __int16 *v5; // ecx
  __int16 *v6; // esi
  int v7; // eax
  _WORD *v8; // edi
  __int16 *v9; // eax
  int v10; // ebp
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  int i; // ebp
  int v14; // eax
  __int16 v15; // dx
  _BYTE *v16; // eax
  int v17; // ebp
  int v18; // edx
  __int16 v19; // cx
  _BYTE *v20; // eax
  int v21; // ebp
  _WORD *v22; // eax
  int v23; // ecx
  __int16 v24; // dx
  Object *v25; // eax
  int ClosestObjectCell; // eax
  int *v27; // edi
  int v28; // eax
  _BYTE *v29; // edi
  char v30; // bl
  int v31; // ebp
  _DWORD *v32; // edi
  _DWORD *v33; // eax
  int v34; // ebx
  int v35; // ecx
  int v36; // edx
  int v37; // eax
  int v38; // eax
  int v39; // ebx
  int v40; // eax
  void *v41; // eax
  __int16 v42; // bx
  Cell *v43; // ebp
  TeamClass *v44; // edi
  int *v45; // eax
  int *v46; // eax
  int *v47; // eax
  int *v48; // eax
  int j; // ebp
  void *v50; // eax
  TeamClass *v51; // edi
  int *v52; // eax
  int k; // ebp
  void *v54; // eax
  TeamClass *v55; // edi
  int *v56; // eax
  void *v57; // eax
  FootClass *v58; // edi
  _DWORD *v59; // eax
  int v60; // edx
  __int16 *v61; // eax
  int v62; // ecx
  __int16 *v63; // eax
  _DWORD *v64; // eax
  _DWORD *v65; // eax
  _DWORD *v66; // edi
  int v67; // eax
  char result; // al
  __int16 *v69; // eax
  int v70; // eax
  int *Element; // eax
  __int16 v72; // dx
  int v73; // [esp+48h] [ebp-58h]
  int v74; // [esp+48h] [ebp-58h]
  int v75; // [esp+58h] [ebp-48h]
  int v76; // [esp+5Ch] [ebp-44h]
  int v77; // [esp+60h] [ebp-40h]
  char v78; // [esp+64h] [ebp-3Ch]
  __int16 v79[2]; // [esp+68h] [ebp-38h] BYREF
  int v80; // [esp+6Ch] [ebp-34h]
  __int16 v81[2]; // [esp+70h] [ebp-30h] BYREF
  __int16 v82[2]; // [esp+74h] [ebp-2Ch] BYREF
  _BYTE v83[4]; // [esp+78h] [ebp-28h] BYREF
  int v84; // [esp+7Ch] [ebp-24h] BYREF
  int v85; // [esp+80h] [ebp-20h]
  int v86; // [esp+84h] [ebp-1Ch]
  int v87; // [esp+88h] [ebp-18h] BYREF
  _BYTE v88[4]; // [esp+90h] [ebp-10h] BYREF
  _BYTE v89[4]; // [esp+94h] [ebp-Ch] BYREF
  _BYTE v90[4]; // [esp+98h] [ebp-8h] BYREF
  _BYTE v91[4]; // [esp+9Ch] [ebp-4h] BYREF

  v6 = v5; /*0x4d85dc*/
  if ( this == (FootClass *)2 ) /*0x4d85de*/
  {
    v7 = *(_DWORD *)v5; /*0x4d85e4*/
    *((_BYTE *)v5 + 1714) = 0; /*0x4d85e6*/
    *((_BYTE *)v5 + 1712) = 0; /*0x4d85ed*/
    if ( *(_DWORD *)((*(int (__usercall **)@<eax>(double@<st0>))(v7 + 132))(a4) + 1520) ) /*0x4d85fa*/
    {
      (*(void (__thiscall **)(__int16 *, _DWORD))(*(_DWORD *)v6 + 1260))(v6, *((_DWORD *)v6 + 343)); /*0x4d8611*/
      (*(void (__thiscall **)(__int16 *, int))(*(_DWORD *)v6 + 1256))(v6, g_FootClass_Pool); /*0x4d8621*/
    }
    v76 = a2; /*0x4d862e*/
    v75 = a3; /*0x4d862f*/
    v8 = v6 + 686; /*0x4d8630*/
    if ( v6[686] || v6[687] ) /*0x4d8638*/
    {
      v9 = (__int16 *)(*(int (__thiscall **)(__int16 *, __int16 *, int))(*(_DWORD *)v6 + 440))(v6, v82, v75); /*0x4d864b*/
      v10 = Cell::PosToLinearIndex(v9); /*0x4d8662*/
      if ( Cell::PosToLinearIndex(v6 + 686) != v10 ) /*0x4d866b*/
      {
        v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v6 + 686); /*0x4d8673*/
        FootClass::ApplyThreatBounds((FootClass *)v6, v11); /*0x4d867b*/
        v12 = (_DWORD *)(*(int (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 444))(v6); /*0x4d8684*/
        FootClass::SetThreatBounds((FootClass *)v6, v12); /*0x4d868d*/
      }
      for ( i = 0; i < 8; ++i ) /*0x4d8692*/
      {
        v14 = i & 7; /*0x4d8699*/
        v15 = v6[687] + HIWORD(g_DDrawSurfaceManager.scenario[v14 + 82]); /*0x4d86ac*/
        v81[0] = LOWORD(g_DDrawSurfaceManager.scenario[v14 + 82]) + *v8; /*0x4d86b7*/
        v81[1] = v15; /*0x4d86c0*/
        *(_DWORD *)v82 = *(_DWORD *)v81; /*0x4d86cf*/
        v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v82); /*0x4d86d3*/
        --v16[290]; /*0x4d86e4*/
      }
      v17 = 0; /*0x4d86fd*/
      *(_DWORD *)v8 = *(_DWORD *)(*(int (__thiscall **)(__int16 *, _BYTE *))(*(_DWORD *)v6 + 440))(v6, v83); /*0x4d86ff*/
      do /*0x4d8757*/
      {
        v18 = v17 & 7; /*0x4d8706*/
        v19 = LOWORD(g_DDrawSurfaceManager.scenario[v18 + 82]) + *v8; /*0x4d8709*/
        LOWORD(v18) = HIWORD(g_DDrawSurfaceManager.scenario[v18 + 82]); /*0x4d8718*/
        LOWORD(v80) = v19; /*0x4d8720*/
        HIWORD(v80) = v6[687] + v18; /*0x4d8733*/
        *(_DWORD *)v81 = v80; /*0x4d873c*/
        v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v81); /*0x4d8740*/
        ++v17; /*0x4d874d*/
        ++v20[290]; /*0x4d8751*/
      }
      while ( v17 < 8 ); /*0x4d8757*/
    }
    if ( *((_DWORD *)v6 + 136) == 2 ) /*0x4d8760*/
    {
      v21 = 0; /*0x4d8766*/
      while ( 1 ) /*0x4d8771*/
      {
        v22 = (_WORD *)(*(int (__thiscall **)(__int16 *, __int16 *))(*(_DWORD *)v6 + 440))(v6, v82); /*0x4d8771*/
        v23 = v21 & 7; /*0x4d877b*/
        v24 = g_DDrawSurfaceManager.scenario[v23 + 82]; /*0x4d877e*/
        LOWORD(v23) = v22[1] + HIWORD(g_DDrawSurfaceManager.scenario[v23 + 82]); /*0x4d8794*/
        LOWORD(v80) = *v22 + v24; /*0x4d8798*/
        HIWORD(v80) = v23; /*0x4d87a1*/
        *(_DWORD *)v81 = v80; /*0x4d87b0*/
        if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v81, 1) ) /*0x4d87b4*/
        {
          v84 = 0; /*0x4d87ce*/
          v85 = 0; /*0x4d87d2*/
          v25 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v81); /*0x4d87d6*/
          ClosestObjectCell = Object::FindClosestObjectCell(v25, &v84, 0, 0); /*0x4d87dd*/
          v27 = (int *)ClosestObjectCell; /*0x4d87e2*/
          if ( ClosestObjectCell ) /*0x4d87e6*/
          {
            if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse(*(Object **)(ClosestObjectCell + 540), (int)v6) /*0x4d8810*/
              && (*(_BYTE *)((*(int (__thiscall **)(int *))(*v27 + 132))(v27) + 3229)
               || (unsigned __int8)TechnoTypeClass::HasVoiceResponse(v27, 12)) )
            {
              break; /*0x4d8810*/
            }
          }
        }
        if ( ++v21 >= 8 ) /*0x4d881d*/
          goto LABEL_22; /*0x4d881d*/
      }
      (*(void (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 252))(v6); /*0x4d8829*/
    }
LABEL_22:
    v28 = (*(int (__thiscall **)(__int16 *, _DWORD, int))(*(_DWORD *)v6 + 740))(v6, *((_DWORD *)v6 + 173), v75); /*0x4d882f*/
    v29 = (_BYTE *)*((_DWORD *)v6 + 173); /*0x4d8840*/
    v30 = 0; /*0x4d8846*/
    v31 = v28; /*0x4d884a*/
    if ( v29 && (v29[20] & 4) != 0 ) /*0x4d8856*/
    {
      if ( *(_BYTE *)((*(int (__thiscall **)(__int16 *, int))(*(_DWORD *)v6 + 132))(v6, v76) + 1508) ) /*0x4d8866*/
      {
        v32 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v29 + 72))(v29, v88); /*0x4d8882*/
        v33 = (_DWORD *)(*(int (__thiscall **)(__int16 *, _BYTE *))(*(_DWORD *)v6 + 72))(v6, v90); /*0x4d888b*/
        v34 = v32[1]; /*0x4d8892*/
        v35 = *v33 - *v32; /*0x4d8895*/
        v36 = v33[1]; /*0x4d8897*/
        v37 = v33[2]; /*0x4d889a*/
        v85 = v35; /*0x4d889f*/
        v86 = v36 - v34; /*0x4d88a3*/
        v87 = v37 - v32[2]; /*0x4d88b3*/
        Math::Sqrt((double)v35 * (double)v35 + (double)v87 * (double)v87 + (double)(v36 - v34) * (double)(v36 - v34)); /*0x4d88d8*/
        LOWORD(v38) = Math::RoundToInt(a4); /*0x4d88e0*/
        v30 = v38 < (*(int (__thiscall **)(__int16 *, int))(*(_DWORD *)v6 + 360))(v6, v31); /*0x4d88f4*/
      }
      else
      {
        v39 = *(_DWORD *)v6; /*0x4d88fb*/
        v76 = v31; /*0x4d8901*/
        v40 = (*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v29 + 1264))(v29, v91); /*0x4d8905*/
        v30 = (*(int (__thiscall **)(__int16 *, int))(v39 + 356))(v6, v40); /*0x4d8914*/
      }
    }
    if ( ((*(int (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 388))(v6) == 21 /*0x4d8956*/
       || (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 388))(v6) == 11
       || (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 388))(v6) == 1
       || (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 388))(v6) == 15)
      && v30
      && !*((_DWORD *)v6 + 358) )
    {
      (*(void (__thiscall **)(__int16 *, _DWORD, int))(*(_DWORD *)v6 + 1152))(v6, 0, 1); /*0x4d8968*/
      *((_DWORD *)v6 + 376) = -1; /*0x4d896e*/
    }
    *(_DWORD *)v79 = *(_DWORD *)(*(int (__thiscall **)(__int16 *, _BYTE *))(*(_DWORD *)v6 + 440))(v6, v83); /*0x4d8993*/
    v41 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v79); /*0x4d8997*/
    v42 = v79[1]; /*0x4d89a1*/
    v43 = (Cell *)v41; /*0x4d89a6*/
    *(_DWORD *)v82 = v79[0]; /*0x4d89a8*/
    v80 = (int)v41; /*0x4d89ac*/
    v44 = (TeamClass *)*((_DWORD *)v41 + 15); /*0x4d89b6*/
    if ( (*((_DWORD *)v41 + 80) & 0x500) == 0 || *((_BYTE *)v6 + 140) ) /*0x4d89be*/
    {
      if ( v44 ) /*0x4d89ce*/
      {
        v45 = (int *)(*(int (__usercall **)@<eax>(__int16 *@<ecx>, __int16 *, double@<st0>))(*(_DWORD *)v6 + 440))( /*0x4d89e1*/
                       v6,
                       v81,
                       a4);
        TeamClass::Update_0(v44, 1, (int)v6, *v45, 0, 0); /*0x4d89ef*/
        v46 = (int *)(*(int (__thiscall **)(__int16 *, __int16 *))(*(_DWORD *)v6 + 440))(v6, v81); /*0x4d8a01*/
        TeamClass::Update_0(v44, 59, (int)v6, *v46, 0, 0); /*0x4d8a0f*/
        if ( (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 44))(v6) == 15 ) /*0x4d8a1e*/
        {
          if ( *(_BYTE *)(*((_DWORD *)v6 + 432) + 3780) ) /*0x4d8a26*/
          {
            v47 = (int *)(*(int (__usercall **)@<eax>(__int16 *@<ecx>, __int16 *, double@<st0>))(*(_DWORD *)v6 + 440))( /*0x4d8a3d*/
                           v6,
                           v81,
                           a4);
            TeamClass::Update_0(v44, 53, (int)v6, *v47, 0, 0); /*0x4d8a4b*/
            v48 = (int *)(*(int (__thiscall **)(__int16 *, __int16 *))(*(_DWORD *)v6 + 440))(v6, v81); /*0x4d8a5d*/
            TeamClass::Update_0(v44, 54, (int)v6, *v48, 0, 0); /*0x4d8a6b*/
          }
        }
      }
    }
    if ( ((int)v43->Cell_field_0x140 & 0x100000) != 0 ) /*0x4d8a7a*/
    {
      for ( j = 0; j < *(int *)&stru_87F5F0.__pad_58[716]; ++j ) /*0x4d8a85*/
      {
        v81[1] = v42; /*0x4d8a9a*/
        v81[0] = *(_WORD *)&stru_87F5F0.__pad_58[708] + j; /*0x4d8a9f*/
        v50 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v81); /*0x4d8aa4*/
        v51 = (TeamClass *)*((_DWORD *)v50 + 15); /*0x4d8aa9*/
        v80 = (int)v50; /*0x4d8aac*/
        if ( v51 && TagClass::HasCrossesHorizontalLineEvent((TagClass *)v51) ) /*0x4d8ab6*/
        {
          v52 = (int *)(*(int (__thiscall **)(__int16 *, _BYTE *))(*(_DWORD *)v6 + 440))(v6, v83); /*0x4d8acc*/
          TeamClass::Update_0(v51, 25, (int)v6, *v52, 0, 0); /*0x4d8ada*/
        }
      }
      v43 = (Cell *)v80; /*0x4d8ae9*/
    }
    if ( ((int)v43->Cell_field_0x140 & 0x200000) != 0 ) /*0x4d8af7*/
    {
      for ( k = 0; k < *(int *)&stru_87F5F0.__pad_58[720]; ++k ) /*0x4d8b02*/
      {
        v81[0] = v82[0]; /*0x4d8b0e*/
        v81[1] = *(_WORD *)&stru_87F5F0.__pad_58[712] + k; /*0x4d8b1b*/
        v54 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v81); /*0x4d8b25*/
        v55 = (TeamClass *)*((_DWORD *)v54 + 15); /*0x4d8b2a*/
        if ( v55 && TagClass::HasCrossesVerticalLineEvent(*((TagClass **)v54 + 15)) ) /*0x4d8b33*/
        {
          v56 = (int *)(*(int (__thiscall **)(__int16 *, _BYTE *))(*(_DWORD *)v6 + 440))(v6, v83); /*0x4d8b49*/
          TeamClass::Update_0(v55, 26, (int)v6, *v56, 0, 0); /*0x4d8b57*/
        }
      }
      v43 = (Cell *)v80; /*0x4d8b66*/
    }
    v57 = 0; /*0x4d8b70*/
    for ( stru_A83D50.SuperClass_field_0x6C = 0; /*0x4d8b79*/
          (int)stru_A83D50.SuperClass_field_0x6C < FootClass_Array.?[0];
          v57 = ++stru_A83D50.SuperClass_field_0x6C )
    {
      v58 = *(FootClass **)(FootClass_Array.?[5] + 4 * (_DWORD)v57); /*0x4d8b85*/
      if ( v58 ) /*0x4d8b8a*/
      {
        if ( TagClass::HasZoneEntryByEvent(*(TagClass **)(FootClass_Array.?[5] + 4 * (_DWORD)v57)) ) /*0x4d8b92*/
        {
          v59 = (_DWORD *)(*(int (__usercall **)@<eax>(__int16 *@<ecx>, _BYTE *, double@<st0>))(*(_DWORD *)v6 + 76))( /*0x4d8baa*/
                            v6,
                            v89,
                            a4);
          LOWORD(v80) = *v59 / 256; /*0x4d8bc1*/
          v60 = *(_DWORD *)v6; /*0x4d8bd2*/
          HIWORD(v80) = v59[1] / 256; /*0x4d8bd7*/
          *(_DWORD *)v81 = v80; /*0x4d8be0*/
          v73 = (*(int (__thiscall **)(__int16 *))(v60 + 188))(v6); /*0x4d8bec*/
          v61 = (__int16 *)FootClass::processScriptAction(v58, v81); /*0x4d8bf4*/
          v62 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v61) + 80) >> 8; /*0x4d8c0c*/
          LOBYTE(v62) = v62 & 1; /*0x4d8c0f*/
          v74 = *(_DWORD *)((*(int (__thiscall **)(__int16 *, int, int))(*(_DWORD *)v6 + 132))(v6, v62, v73) + 1460); /*0x4d8c25*/
          v63 = (__int16 *)FootClass::processScriptAction(v58, &v84); /*0x4d8c2e*/
          if ( MapSeed::CheckTileMatch((MapSeed *)&stru_87F5F0.__pad_58[416], v63, v82, v74, 0, 0, 0) ) /*0x4d8c39*/
          {
            v64 = (_DWORD *)(*(int (__thiscall **)(__int16 *, int *, _DWORD))(*(_DWORD *)v6 + 76))(v6, &v87, 0); /*0x4d8c4d*/
            LOWORD(v80) = *v64 / 256; /*0x4d8c64*/
            HIWORD(v80) = v64[1] / 256; /*0x4d8c7a*/
            TeamClass::Update_0((TeamClass *)v58, 24, (int)v6, v80, 0, 0); /*0x4d8c87*/
          }
        }
      }
    }
    v65 = Cell::IsBridge(v43); /*0x4d8ca7*/
    v66 = v65; /*0x4d8cac*/
    if ( v65 ) /*0x4d8cb2*/
    {
      if ( *(_BYTE *)(v65[328] + 5823) ) /*0x4d8cba*/
      {
        if ( (int)v65[390] < 8 ) /*0x4d8ccb*/
        {
          v67 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 44))(v6); /*0x4d8cd1*/
          if ( v67 > 0 && (v67 <= 2 || v67 == 15) && *((int *)v6 + 27) > 0 ) /*0x4d8cea*/
            (*(void (__thiscall **)(__int16 *, __int16 *, _DWORD, _DWORD, _DWORD *, int, int, _DWORD))(*(_DWORD *)v6 + 364))( /*0x4d8d05*/
              v6,
              v6 + 54,
              0,
              *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
              v66,
              1,
              1,
              0);
        }
      }
    }
    a2 = v76; /*0x4d8d14*/
    if ( *((_BYTE *)v6 + 140) ) /*0x4d8d0b*/
    {
      v84 = *((_DWORD *)v6 + 39); /*0x4d8d23*/
      v85 = *((_DWORD *)v6 + 40); /*0x4d8d2f*/
      v86 = *((_DWORD *)v6 + 41); /*0x4d8d3b*/
      if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v84)->flags[0] & 0x100) == 0 ) /*0x4d8d4d*/
        (*(void (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 236))(v6); /*0x4d8d53*/
    }
    result = *((_BYTE *)v6 + 144); /*0x4d8d59*/
    if ( !result ) /*0x4d8d61*/
      return result; /*0x4d8d61*/
    v69 = (__int16 *)(*(int (__thiscall **)(__int16 *, int *))(*(_DWORD *)v6 + 440))(v6, &v84); /*0x4d8d72*/
    if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v69, 1) /*0x4d8d8b*/
      && (*(unsigned __int8 (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 1244))(v6) )
    {
      return (*(char (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 248))(v6); /*0x4d8da4*/
    }
    if ( *((_BYTE *)v6 + 131) ) /*0x4d8da7*/
    {
      if ( !(unsigned __int8)House::IsHumanPlayer(*((House **)v6 + 135)) ) /*0x4d8db7*/
      {
        v84 = *((_DWORD *)v6 + 39); /*0x4d8dcc*/
        v85 = *((_DWORD *)v6 + 40); /*0x4d8dd8*/
        v86 = *((_DWORD *)v6 + 41); /*0x4d8ddf*/
        if ( (unsigned __int8)Cell::IsPassable(&v84) ) /*0x4d8de8*/
          (*(void (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 336))(v6); /*0x4d8df5*/
      }
    }
  }
  v70 = *((_DWORD *)v6 + 328); /*0x4d8dff*/
  if ( v70 != -1 ) /*0x4d8e08*/
  {
    Element = (int *)Array::GetElement(*(Array **)&dword_A83D4C->__pad_140[4 * v70 + 208], *((char *)v6 + 1670)); /*0x4d8e25*/
    if ( Element ) /*0x4d8e2e*/
    {
      v81[0] = *Element / 256; /*0x4d8e42*/
      v81[1] = Element[1] / 256; /*0x4d8e56*/
      v72 = v81[0]; /*0x4d8e60*/
      if ( *(int **)&stru_87F5F0.__pad_E12[1442] == Element ) /*0x4d8e6a*/
      {
        v81[0] = *(_DWORD *)&stru_87F5F0.__pad_E12[1446] / 256; /*0x4d8e7d*/
        v81[1] = *(_DWORD *)&stru_87F5F0.__pad_E12[1450] / 256; /*0x4d8e93*/
        v72 = v81[0]; /*0x4d8e98*/
      }
      if ( v72 + v6[658] != v6[660] || v81[1] + v6[659] != v6[661] ) /*0x4d8ec6*/
      {
        BuildingClass::ValidateFoundation_0((int)v6, 0, a2, Element, v77, v78); /*0x4d8ecb*/
        return FootClass::CompleteProduction((TechnoClass *)v6); /*0x4d8ee1*/
      }
    }
    else
    {
      v81[0] = 0; /*0x4d8ef2*/
      v81[1] = 0; /*0x4d8ef7*/
      *((_DWORD *)v6 + 328) = -1; /*0x4d8f00*/
      *((_BYTE *)v6 + 1670) = 0; /*0x4d8f0a*/
      *((_DWORD *)v6 + 329) = 0; /*0x4d8f11*/
      *((_DWORD *)v6 + 330) = 0; /*0x4d8f17*/
    }
  }
  return FootClass::CompleteProduction((TechnoClass *)v6); /*0x4d8d9f*/
}



// ==== 0x004D8F40  FootClass::OverrideMission_SyncLog  this=FootClass  sig=csp ====
int __thiscall FootClass::OverrideMission_SyncLog(FootClass *this, int a2, int a3, int a4)
{
  this->lastDestination = this->movementDestination; /*0x4d8f5b*/
  MissionClass::OverrideMission_SyncLog((TechnoClass *)this); /*0x4d8f61*/
  return (*((int (__thiscall **)(FootClass *, int, int))this->TechnoClass + 288))(this, a4, 1); /*0x4d8f73*/
}



// ==== 0x004D8F80  FootClass::ConditionalAction  this=FootClass  sig=csp ====
char __thiscall FootClass::ConditionalAction(FootClass *this)
{
  if ( !(unsigned __int8)BuildingClass::CheckOccupantState((TechnoClass *)this) ) /*0x4d8f83*/
    return 0; /*0x4d8fa3*/
  (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, this->lastDestination, 1); /*0x4d8f99*/
  return 1; /*0x4d8fa1*/
}



// ==== 0x004D8FB0  FootClass::MissionDispatch  this=FootClass  sig=csp ====
int __userpurge FootClass::MissionDispatch@<eax>(FootClass *this, int a2@<ebp>, _DWORD *a3, int a4, _DWORD *a5)
{
  Team *v5; // ecx
  _DWORD *v6; // edi
  Team *v7; // esi
  _DWORD *v8; // eax
  CellClass *v9; // eax
  int result; // eax
  _DWORD *v11; // ebp
  _DWORD *v12; // eax
  int v13; // edi
  int v14; // ebx
  _WORD *v15; // eax
  int v16; // edx
  char *v17; // esi
  _DWORD *v18; // [esp+0h] [ebp-28h]
  _DWORD v19[3]; // [esp+10h] [ebp-18h] BYREF
  _BYTE v20[4]; // [esp+1Ch] [ebp-Ch] BYREF
  int v21; // [esp+20h] [ebp-8h]

  v6 = a3; /*0x4d8fb7*/
  v7 = v5; /*0x4d8fbb*/
  switch ( (unsigned int)a3 )
  {
    case 0x11u:
      if ( (*(int (**)(void))(*(_DWORD *)v5->__pad_0 + 388))() != 7 && *(_DWORD *)&v7->__pad_0[180] != 7 ) /*0x4d922f*/
        goto LABEL_16; /*0x4d922f*/
      TechnoClass::Mission_RepairDispatch((TechnoClass *)this, a2, (int)v6, a4, v18); /*0x4d9242*/
      return 1; /*0x4d9242*/
    case 0x12u:
      v11 = (_DWORD *)a4; /*0x4d9139*/
      if ( *(_DWORD *)a4 ) /*0x4d913d*/
      {
        v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)a4 + 72))(*(_DWORD *)a4, v20); /*0x4d914b*/
        v13 = *v12 / 256; /*0x4d9174*/
        v14 = v12[1] / 256; /*0x4d9177*/
        v15 = (_WORD *)(*(int (__thiscall **)(Team *, _DWORD **))(*(_DWORD *)v7->__pad_0 + 440))(v7, &a3); /*0x4d917a*/
        if ( *v15 == (_WORD)v13 && v15[1] == (_WORD)v14 ) /*0x4d9189*/
          return 20; /*0x4d918e*/
      }
      if ( (*(int (__thiscall **)(Team *))(*(_DWORD *)v7->__pad_0 + 388))(v7) == 5 && *(_DWORD *)&v7->__pad_0[180] == -1 ) /*0x4d91b0*/
        (*(void (__thiscall **)(Team *, int, _DWORD))(*(_DWORD *)v7->__pad_0 + 488))(v7, 2, 0); /*0x4d91ba*/
      if ( *(_DWORD *)&v7->__pad_0[180] == 7 /*0x4d91cd*/
        && (*(unsigned __int8 (__thiscall **)(Team *))(*(_DWORD *)v7->__pad_0 + 512))(v7) )
      {
        (*(void (__thiscall **)(Team *))(*(_DWORD *)v7->__pad_0 + 492))(v7); /*0x4d91db*/
      }
      (*(void (__thiscall **)(Team *, _DWORD, int))(*(_DWORD *)v7->__pad_0 + 1152))(v7, *v11, 1); /*0x4d91eb*/
      v16 = v21; /*0x4d91f6*/
      v17 = &v7->__pad_0[200]; /*0x4d91fc*/
      *(_DWORD *)v17 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d9203*/
      *((_DWORD *)v17 + 1) = v16; /*0x4d920a*/
      *((_DWORD *)v17 + 2) = 0; /*0x4d920d*/
      return 1; /*0x4d9197*/
    case 0x13u:
      *(_DWORD *)a4 = *(_DWORD *)&v5[6].__pad_0[28]; /*0x4d90f2*/
      if ( !*(_DWORD *)&v5[6].__pad_0[28] ) /*0x4d90f4*/
        return 1; /*0x4d90f4*/
      if ( !*(_DWORD *)v5[7].__pad_0 ) /*0x4d9102*/
        WinAPI::Wrapper(-2147467261); /*0x4d9111*/
      if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)v5[7].__pad_0 + 16))(*(_DWORD *)v5[7].__pad_0) ) /*0x4d911f*/
        return 10; /*0x4d912d*/
      else
        return 1; /*0x4d9247*/
    case 0x17u:
      if ( (unsigned __int8)Team::AllMembersValid(v5) && *(_DWORD *)&v7[6].__pad_0[28] == Team::GetMember(v7, 0) ) /*0x4d9045*/
        (*(void (__thiscall **)(Team *, _DWORD, int))(*(_DWORD *)v7->__pad_0 + 1152))(v7, 0, 1); /*0x4d904f*/
      if ( !(*(int (__thiscall **)(Team *))(*(_DWORD *)v7->__pad_0 + 388))(v7) ) /*0x4d9059*/
      {
        (*(void (__thiscall **)(Team *, int, _DWORD))(*(_DWORD *)v7->__pad_0 + 488))(v7, 5, 0); /*0x4d906a*/
        if ( (*(unsigned __int8 (__thiscall **)(Team *))(*(_DWORD *)v7->__pad_0 + 512))(v7) ) /*0x4d9074*/
          (*(void (__thiscall **)(Team *))(*(_DWORD *)v7->__pad_0 + 492))(v7); /*0x4d9082*/
      }
      if ( (*(int (__thiscall **)(Team *))(*(_DWORD *)v7->__pad_0 + 388))(v7) == 7 ) /*0x4d9095*/
        (*(void (__thiscall **)(Team *, int, _DWORD))(*(_DWORD *)v7->__pad_0 + 488))(v7, 5, 0); /*0x4d909f*/
      if ( !v7[7].__pad_0[59] && !*(_DWORD *)&v7[6].__pad_0[28] ) /*0x4d90af*/
        (*(void (__thiscall **)(Team *, int *, int, int))(*(_DWORD *)v7->__pad_0 + 372))(v7, &dword_8B3DA8, 1, 1); /*0x4d90c6*/
      goto LABEL_16; /*0x4d90c6*/
    case 0x1Cu:
      if ( !*(_DWORD *)&v5[6].__pad_0[28] ) /*0x4d9016*/
        goto LABEL_16; /*0x4d9016*/
      result = 10; /*0x4d901f*/
      break; /*0x4d9028*/
    case 0x23u:
      v8 = (_DWORD *)(*(int (__thiscall **)(Team *, _DWORD *))(*(_DWORD *)v5->__pad_0 + 72))(v5, v19); /*0x4d8fe1*/
      v9 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v8); /*0x4d8fea*/
      return this != (FootClass *)Cell::IsBridge((Cell *)v9) ? 10 : 1;
    default:
LABEL_16:
      result = TechnoClass::Mission_RepairDispatch((TechnoClass *)this, a2, (int)v6, a4, v18); /*0x4d90cc*/
      break; /*0x4d90e5*/
  }
  return result; /*0x4d8ffc*/
}



// ==== 0x004D9290  FootClass::ProcessTeamAction  this=FootClass  sig=csp ====
int __thiscall FootClass::ProcessTeamAction(FootClass *this)
{
  void *Member; // eax
  int v3; // ecx
  int *locomotor; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  void (__thiscall **vtable0)(FootClass *, AbstractClass *, int); // edx
  AbstractClass *v12; // ecx
  char *MissionControl; // eax
  int v14; // eax
  AbstractClass *movementDestination; // [esp+14h] [ebp-10h]
  int v17; // [esp+20h] [ebp-4h] BYREF

  Member = (void *)Team::GetMember((Team *)this, 0); /*0x4d9296*/
  if ( Member || (Member = AbstractClass::IsTechnoType(this->?)) != 0 ) /*0x4d92ac*/
  {
    if ( (*((int (__thiscall **)(FootClass *, int, void *))this->TechnoClass + 158))(this, 14, Member) == 1 || this->? ) /*0x4d92c4*/
    {
      if ( this->movementDestination || *(int *)&this->__pad_58C[12] <= 0 ) /*0x4d9303*/
      {
        if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3284) ) /*0x4d93f2*/
        {
          vtable0 = (void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass; /*0x4d9402*/
          movementDestination = this->movementDestination; /*0x4d9406*/
          this->FootClass_field_5A0 = 0; /*0x4d9409*/
          this->movementDestination = 0; /*0x4d9413*/
          vtable0[288](this, movementDestination, 1); /*0x4d941d*/
        }
      }
      else
      {
        v3 = this->locomotor[0]; /*0x4d9309*/
        locomotor = this->locomotor; /*0x4d9310*/
        v5 = 0; /*0x4d9316*/
        v17 = 0; /*0x4d931a*/
        if ( v3 ) /*0x4d931e*/
        {
          v6 = StreamClass::Set((StreamClass *)&v17, this->locomotor); /*0x4d9325*/
          if ( v6 < 0 && v6 != -2147467262 ) /*0x4d9333*/
            WinAPI::Wrapper(v6); /*0x4d9336*/
          v5 = v17; /*0x4d933b*/
          if ( v17 ) /*0x4d9341*/
          {
            if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v17 + 20))(v17) ) /*0x4d9346*/
            {
              if ( *locomotor ) /*0x4d934d*/
                (*(void (__stdcall **)(int))(*(_DWORD *)*locomotor + 8))(*locomotor); /*0x4d9356*/
              v7 = v17; /*0x4d9359*/
              *locomotor = 0; /*0x4d935d*/
              if ( !v7 ) /*0x4d9365*/
                WinAPI::Wrapper(-2147467261); /*0x4d936c*/
              (*(void (__stdcall **)(int, int *))(*(_DWORD *)v7 + 16))(v7, this->locomotor); /*0x4d9379*/
            }
            v5 = v17; /*0x4d937c*/
          }
        }
        if ( *(int *)&this->__pad_58C[12] > 0 ) /*0x4d9389*/
        {
          (*((void (__thiscall **)(FootClass *, _DWORD, _DWORD))this->TechnoClass + 288))( /*0x4d939a*/
            this,
            **(_DWORD **)this->__pad_58C,
            0);
          v8 = *(_DWORD *)&this->__pad_58C[12]; /*0x4d93a0*/
          if ( v8 > 0 ) /*0x4d93a8*/
          {
            v9 = v8 - 1; /*0x4d93aa*/
            v10 = 0; /*0x4d93ad*/
            for ( *(_DWORD *)&this->__pad_58C[12] = v9; /*0x4d93b7*/
                  v10 < *(_DWORD *)&this->__pad_58C[12];
                  *(_DWORD *)(*(_DWORD *)this->__pad_58C + 4 * v10 - 4) = *(_DWORD *)(*(_DWORD *)this->__pad_58C
                                                                                    + 4 * v10) )
            {
              ++v10; /*0x4d93bf*/
            }
          }
          v5 = v17; /*0x4d93d1*/
        }
        if ( v5 ) /*0x4d93d7*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v5 + 8))(v5); /*0x4d93e0*/
      }
    }
    else
    {
      (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 157))(this, 3); /*0x4d92d4*/
      (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 289))(this, 0, 1); /*0x4d92e2*/
    }
  }
  else
  {
    if ( !TechnoClass::PlaceAtCell((TechnoClass *)this) ) /*0x4d9427*/
    {
      v12 = this->movementDestination; /*0x4d9430*/
      if ( !v12 /*0x4d9452*/
        || (*((int (__thiscall **)(AbstractClass *))v12->vtable0 + 11))(v12) != 1
        && (*((int (__thiscall **)(AbstractClass *))this->movementDestination->vtable0 + 11))(this->movementDestination) != 2 )
      {
        (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 289))(this, 0, 1); /*0x4d945c*/
      }
    }
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 123))(this); /*0x4d9466*/
  }
  MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4d946e*/
  LOWORD(v14) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d947c*/
  return v14 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d9499*/
}



// ==== 0x004D94A0  ObjectClass::SetMember360  this=FootClass  sig=csp ====
int __thiscall ObjectClass::SetMember360(TechnoClass *this, int a2)
{
  this->idleActionTimer = a2; /*0x4d94a4*/
  return a2; /*0x4d94aa*/
}



// ==== 0x004D94B0  FootClass::AssignDestination  this=FootClass  sig=csp ====
char __thiscall FootClass::AssignDestination(FootClass *this, int a2, int a3)
{
  AbstractClass *v4; // esi
  char result; // al
  FootClass *locomotorSource; // eax
  ParticleSystemClass *fireParticles; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // eax
  int v14; // ecx
  int v15; // edx
  int *pathDelayTimer; // ebp
  int v17; // [esp+10h] [ebp-1Ch] BYREF
  int v18; // [esp+14h] [ebp-18h]
  _BYTE v19[16]; // [esp+1Ch] [ebp-10h] BYREF

  v4 = (AbstractClass *)a2; /*0x4d94ba*/
  result = this->isAttackedByLocomotor; /*0x4d94be*/
  this->FootClass_field_5A0 = 0; /*0x4d94c7*/
  if ( !result || !v4 ) /*0x4d94d1*/
  {
    result = this->?; /*0x4d94d7*/
    if ( (!result || !v4) && (!this->? || !v4) ) /*0x4d94f3*/
    {
      if ( this->? && v4 ) /*0x4d9503*/
        TechnoClass::EjectPassengers((TechnoClass *)this, 1); /*0x4d9509*/
      this->movementDestination = v4; /*0x4d9510*/
      if ( !v4 ) /*0x4d9516*/
      {
        if ( this->isAttackedByLocomotor ) /*0x4d9518*/
        {
          locomotorSource = this->?; /*0x4d9522*/
          if ( locomotorSource ) /*0x4d952a*/
          {
            locomotorSource->? = 0; /*0x4d952c*/
            this->? = 0; /*0x4d9532*/
            this->isLetGoByLocomotor = 1; /*0x4d9538*/
          }
        }
      }
      if ( !this->movementDestination ) /*0x4d9545*/
      {
        if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) != 2 /*0x4d9696*/
          || this->? != 1 && this->? != 1
          || !this->? )
        {
          if ( !this->locomotor[0] ) /*0x4d969e*/
            WinAPI::Wrapper(-2147467261); /*0x4d96ab*/
          (*(void (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 72))(this->locomotor[0]); /*0x4d96b9*/
          this->movementDestination = v4; /*0x4d96bc*/
        }
        goto LABEL_43; /*0x4d96bc*/
      }
      fireParticles = this->?; /*0x4d954b*/
      if ( fireParticles ) /*0x4d9553*/
      {
        (*((void (__thiscall **)(ParticleSystemClass *))fireParticles->ObjectClass + 62))(fireParticles); /*0x4d9557*/
        this->? = 0; /*0x4d955d*/
      }
      v8 = this->locomotor[0]; /*0x4d9563*/
      a2 = 0; /*0x4d9571*/
      if ( !v8 ) /*0x4d9575*/
        goto LABEL_22; /*0x4d9575*/
      v9 = StreamClass::Set2((StreamClass *)&a2, this->locomotor); /*0x4d957c*/
      if ( v9 < 0 && v9 != -2147467262 ) /*0x4d958a*/
        WinAPI::Wrapper(v9); /*0x4d958d*/
      if ( !a2 ) /*0x4d9598*/
LABEL_22:
        WinAPI::Wrapper(-2147467261); /*0x4d959f*/
      (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)a2 + 12))(a2, v19); /*0x4d95b0*/
      if ( !memcmp(v19, &stru_7E9A40, 0x10u) ) /*0x4d95c3*/
      {
        v10 = this->pathDelayTimer[0]; /*0x4d95c7*/
        v11 = this->pathDelayTimer[2]; /*0x4d95cd*/
        if ( v10 != -1 ) /*0x4d95dc*/
        {
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v10 >= v11 ) /*0x4d95e4*/
          {
LABEL_28:
            v12 = v18; /*0x4d95ec*/
            this->pathDelayTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d95f5*/
            this->pathDelayTimer[1] = v12; /*0x4d95fb*/
            this->pathDelayTimer[2] = 1; /*0x4d9601*/
            goto LABEL_29; /*0x4d9601*/
          }
          v11 -= *(_DWORD *)&stru_A8EB00.?[416] - v10; /*0x4d95e6*/
        }
        if ( !v11 ) /*0x4d95ea*/
          goto LABEL_28; /*0x4d95ea*/
      }
LABEL_29:
      if ( this->FootClass_field_bool_6AC ) /*0x4d9607*/
      {
        this->FootClass_field_bool_6AC = 0; /*0x4d9611*/
      }
      else
      {
        v13 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, int *, FootClass *))this->movementDestination->vtable0 /*0x4d9628*/
                         + 19))(
                          this->movementDestination,
                          &v17,
                          this);
        if ( !this->locomotor[0] ) /*0x4d9633*/
          WinAPI::Wrapper(-2147467261); /*0x4d9642*/
        (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this->locomotor[0] + 68))( /*0x4d965d*/
          this->locomotor[0],
          *v13,
          v13[1],
          v13[2]);
      }
      if ( a2 ) /*0x4d9668*/
        (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 8))(a2); /*0x4d966d*/
LABEL_43:
      this->FootClass_field_bool_6B7 = 0; /*0x4d96c2*/
      v14 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5992); /*0x4d96d4*/
      this->blockagePathTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d96e0*/
      this->blockagePathTimer[1] = v18; /*0x4d96ea*/
      this->blockagePathTimer[2] = v14; /*0x4d96ed*/
      result = stru_A8EB00.?[416]; /*0x4d96f0*/
      v15 = v18; /*0x4d96f5*/
      pathDelayTimer = this->pathDelayTimer; /*0x4d96fb*/
      *pathDelayTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d9701*/
      pathDelayTimer[1] = v15; /*0x4d9704*/
      pathDelayTimer[2] = 0; /*0x4d9707*/
    }
  }
  return result; /*0x4d970a*/
}



// ==== 0x004D9720  FootClass::DispatchSell  this=FootClass  sig=csp ====
int __thiscall FootClass::DispatchSell(FootClass *this, char a2)
{
  int *team; // ecx
  int Member; // eax

  if ( a2 ) /*0x4d972a*/
  {
    team = (int *)this->team; /*0x4d972c*/
    if ( team ) /*0x4d9734*/
    {
      if ( !dword_A8E7AC ) /*0x4d973d*/
        TeamClass::LiberateMember_Start(team, (int)this, 0xFFFFFFFF, 0); /*0x4d9744*/
    }
    (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 157))(this, 3); /*0x4d974f*/
    return ObjectClass::Destroy2((ObjectClass *)this); /*0x4d974f*/
  }
  Member = Team::GetMember((Team *)this, 0); /*0x4d9766*/
  if ( !Member || (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, Member) ) /*0x4d9776*/
    return ObjectClass::Destroy2((ObjectClass *)this); /*0x4d975f*/
  (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 157))(this, 3); /*0x4d9785*/
  return ObjectClass::Destroy2((ObjectClass *)this); /*0x4d975d*/
}



// ==== 0x004D97A0  TechnoClass::ComputeThreatLevel  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ComputeThreatLevel(TechnoClass *this, int a2)
{
  AbstractClass *target; // ecx
  int v5; // eax
  bool v6; // cl
  int v7; // edi
  int v8; // edi
  int v9; // ebx
  int v10; // ecx
  int v11; // ecx

  if ( a2 ) /*0x4d97aa*/
  {
    target = this->target; /*0x4d97b0*/
    if ( target == (AbstractClass *)a2 ) /*0x4d97b8*/
      return -(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 176))(this); /*0x4d97c8*/
    if ( !target /*0x4d97d7*/
      || (target->abstractFlags & 1) == 0
      || !(*((unsigned __int8 (__thiscall **)(AbstractClass *))target->vtable0 + 171))(target) )
    {
      v5 = this->q175; /*0x4d97e5*/
      v6 = v5 && *(_BYTE *)(*(_DWORD *)(v5 + 36) + 246); /*0x4d97fc*/
      if ( (!v5 || v6) /*0x4d9825*/
        && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 97))(this) != 10
        && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 176))(this) )
      {
        v7 = ObjectClass::DistanceTo((ObjectClass *)this, a2); /*0x4d983e*/
        v8 = v7 - (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 90))(this, 0); /*0x4d9846*/
        v9 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 176))(this) << 10; /*0x4d9854*/
        if ( v8 <= 0 ) /*0x4d9859*/
          return v9; /*0x4d98a1*/
        if ( (unsigned int)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 227))(this) <= 1 ) /*0x4d9868*/
        {
          v10 = 1; /*0x4d98a4*/
        }
        else
        {
          v10 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 227))(this); /*0x4d9874*/
          if ( v10 <= 0 ) /*0x4d9878*/
          {
LABEL_19:
            v11 = 1; /*0x4d9886*/
LABEL_20:
            v9 /= v11; /*0x4d988b*/
            if ( v9 <= 1 ) /*0x4d9895*/
              return 1; /*0x4d9897*/
            return v9; /*0x4d9897*/
          }
        }
        v11 = v8 / v10; /*0x4d9882*/
        if ( v11 > 1 ) /*0x4d9884*/
          goto LABEL_20; /*0x4d9884*/
        goto LABEL_19; /*0x4d9884*/
      }
    }
  }
  return 0; /*0x4d97c4*/
}



// ==== 0x004D98C0  FootClass::Destroyed  this=FootClass  sig=csp ====
void __thiscall FootClass::Destroyed(FootClass *this, int a2)
{
  __int64 v3; // rax
  _BYTE v4[4]; // [esp+4h] [ebp-4h] BYREF

  if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) /*0x4d98dd*/
    && !*(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3412) )
  {
    v3 = ((__int64 (__thiscall *)(FootClass *, _BYTE *))*((_DWORD *)this->TechnoClass + 110))(this, v4); /*0x4d98f0*/
    if ( (unsigned __int8)CreateTriggerClassIfFarEnough(7, SHIDWORD(v3), *(_DWORD *)v3) ) /*0x4d98fe*/
      VoxClass::FindAndPlay((VoxClass *)&stru_822420.?[8], -1); /*0x4d9911*/
  }
}



// ==== 0x004D9920  FootClass::SelectAutoTarget_Cloaked  this=FootClass  sig=csp ====
void *__thiscall FootClass::SelectAutoTarget_Cloaked(FootClass *this, int a2, int a3, char a4)
{
  int v5; // eax
  void *result; // eax

  v5 = a2; /*0x4d992b*/
  if ( this->unknownBool688 ) /*0x4d9923*/
    LOBYTE(v5) = a2 & 0xFC | 1; /*0x4d9933*/
  result = TechnoClass::SelectAutoTarget_Start_AU((TechnoClass *)this, a3, v5, a3, a4); /*0x4d9942*/
  if ( this->unknownBool688 ) /*0x4d9947*/
  {
    if ( !result ) /*0x4d9953*/
      this->unknownBool688 = 0; /*0x4d9955*/
  }
  return result; /*0x4d995b*/
}



// ==== 0x004D9960  FootClass::HandleTargetDestroyed  this=FootClass  sig=csp ====
int __thiscall FootClass::HandleTargetDestroyed(FootClass *this, int *a2, int *a3)
{
  char v3; // bl
  int *v4; // edi
  FootClass *parasiteEatingMe; // eax
  FootClass *v7; // eax
  FootClass *nextTeamMember; // eax
  bool v9; // bl
  _DWORD *v10; // eax
  CellClass *v11; // eax
  AbstractClass *movementDestination; // ecx
  int FootClass_field_5CC; // ecx
  _DWORD *v14; // eax
  int i; // ecx
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int result; // eax
  int j; // ecx
  int v21; // eax
  int v22; // edx
  int v23; // eax
  _DWORD v24[3]; // [esp+10h] [ebp-Ch] BYREF

  v3 = (char)a3; /*0x4d9964*/
  v4 = a2; /*0x4d996b*/
  ObjectClass::NotifyExpired((ObjectClass *)this, a2, a3); /*0x4d9973*/
  if ( (int *)this->team == v4 ) /*0x4d997e*/
    this->team = 0; /*0x4d9982*/
  parasiteEatingMe = this->parasiteEatingMe; /*0x4d998c*/
  if ( parasiteEatingMe == (FootClass *)v4 && (!parasiteEatingMe->? || !stru_A8EB00.?[376]) ) /*0x4d99a2*/
    this->parasiteEatingMe = 0; /*0x4d99a4*/
  v7 = this->parasiteEatingMe; /*0x4d99aa*/
  if ( v7 && v7->? > 0 ) /*0x4d99b7*/
    (*((void (__thiscall **)(ParasiteClass *, int *, int))v7->parasiteImUsing->AbstractClass + 10))( /*0x4d99c6*/
      v7->parasiteImUsing,
      v4,
      1);
  if ( v4 == (int *)this ) /*0x4d99cb*/
    this->parasiteEatingMe = 0; /*0x4d99cd*/
  nextTeamMember = this->nextTeamMember; /*0x4d99d3*/
  if ( nextTeamMember == (FootClass *)v4 && v3 && v4 ) /*0x4d99e3*/
    this->nextTeamMember = nextTeamMember->nextTeamMember; /*0x4d99eb*/
  if ( (int *)this->? == v4 ) /*0x4d99f7*/
    TechnoClass::SetFocus((TechnoClass *)this, 0); /*0x4d99fc*/
  if ( (int *)this->lastDestination == v4 ) /*0x4d9a07*/
    this->lastDestination = 0; /*0x4d9a09*/
  if ( (int *)this->movementDestination == v4 ) /*0x4d9a15*/
  {
    v9 = 1; /*0x4d9a1f*/
    if ( !(_BYTE)a3 ) /*0x4d9a23*/
    {
      if ( v4 ) /*0x4d9a27*/
      {
        LOBYTE(a3) = v4[5] & 1; /*0x4d9a2e*/
        if ( (_BYTE)a3 ) /*0x4d9a32*/
        {
          v10 = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(*v4 + 72))(v4, v24); /*0x4d9a3d*/
          v11 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v10); /*0x4d9a46*/
          v9 = (unsigned __int8)Cell::IsPassableOffset((Cell *)v11, this->?->relatedTagsCount) == 0; /*0x4d9a60*/
        }
      }
    }
    if ( ((*((int (__thiscall **)(FootClass *))this->TechnoClass + 97))(this) != 8 /*0x4d9abb*/
       || (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) != 15
       || !*(_BYTE *)(this->q1B0 + 3764)
       || (movementDestination = this->movementDestination) == 0
       || (movementDestination->abstractFlags & 2) == 0
       || !LOBYTE(movementDestination[4].vtable0)
       || (int)movementDestination[3].vtable0 <= 0
       || (*((int (__thiscall **)(AbstractClass *))movementDestination->vtable0 + 97))(movementDestination) == 19)
      && v9 )
    {
      this->FootClass_field_5A0 = 0; /*0x4d9abd*/
      this->movementDestination = 0; /*0x4d9ac3*/
    }
  }
  FootClass_field_5CC = this->FootClass_field_5CC; /*0x4d9ac9*/
  if ( (int *)FootClass_field_5CC == v4 ) /*0x4d9ad1*/
  {
    if ( FootClass_field_5CC ) /*0x4d9ad5*/
    {
      v14 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)FootClass_field_5CC + 72))( /*0x4d9ade*/
                        FootClass_field_5CC,
                        v24);
      LOWORD(a3) = *v14 / 256; /*0x4d9af1*/
      HIWORD(a3) = v14[1] / 256; /*0x4d9b0a*/
      a2 = a3; /*0x4d9b18*/
      this->FootClass_field_5C8 = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x4d9b21*/
    }
    else
    {
      this->FootClass_field_5C8 = 0; /*0x4d9b29*/
    }
    this->FootClass_field_5CC = 0; /*0x4d9b2f*/
  }
  if ( (int *)this->FootClass_field_5C8 == v4 ) /*0x4d9b3b*/
    this->FootClass_field_5C8 = 0; /*0x4d9b3d*/
  for ( i = 0; i < *(_DWORD *)&this->__pad_5B0[12]; ++i ) /*0x4d9b4d*/
  {
    if ( *(int **)(*(_DWORD *)this->__pad_5B0 + 4 * i) == v4 ) /*0x4d9b58*/
    {
      v16 = *(_DWORD *)&this->__pad_5B0[12]; /*0x4d9b5a*/
      if ( i < v16 ) /*0x4d9b62*/
      {
        v17 = v16 - 1; /*0x4d9b64*/
        v18 = i; /*0x4d9b67*/
        for ( *(_DWORD *)&this->__pad_5B0[12] = v17; /*0x4d9b71*/
              v18 < *(_DWORD *)&this->__pad_5B0[12];
              *(_DWORD *)(*(_DWORD *)this->__pad_5B0 + 4 * v18 - 4) = *(_DWORD *)(*(_DWORD *)this->__pad_5B0 + 4 * v18) )
        {
          ++v18; /*0x4d9b79*/
        }
      }
      --i; /*0x4d9b8b*/
    }
  }
  result = *(_DWORD *)&this->__pad_58C[12]; /*0x4d9b97*/
  for ( j = 0; j < result; ++j ) /*0x4d9ba1*/
  {
    if ( *(int **)(*(_DWORD *)this->__pad_58C + 4 * j) == v4 ) /*0x4d9bac*/
    {
      v21 = *(_DWORD *)&this->__pad_58C[12]; /*0x4d9bae*/
      if ( j < v21 ) /*0x4d9bb6*/
      {
        v22 = v21 - 1; /*0x4d9bb8*/
        v23 = j; /*0x4d9bbb*/
        for ( *(_DWORD *)&this->__pad_58C[12] = v22; /*0x4d9bc5*/
              v23 < *(_DWORD *)&this->__pad_58C[12];
              *(_DWORD *)(*(_DWORD *)this->__pad_58C + 4 * v23 - 4) = *(_DWORD *)(*(_DWORD *)this->__pad_58C + 4 * v23) )
        {
          ++v23; /*0x4d9bcd*/
        }
      }
      --j; /*0x4d9bdf*/
    }
    result = *(_DWORD *)&this->__pad_58C[12]; /*0x4d9be0*/
  }
  return result; /*0x4d9beb*/
}



// ==== 0x004D9C00  FootClass::vt_entry_524  this=FootClass  sig=csp ====
int FootClass::vt_entry_524(FootClass *this)
{
  return 0; /*0x4d9c02*/
}



// ==== 0x004D9C10  FootClass::Destru_vt107  this=FootClass  sig=csp ====
int __thiscall FootClass::Destru_vt107(FootClass *this, int a2, int a3, int a4, int a5, char a6)
{
  if ( !this->locomotor[0] || !a6 ) /*0x4d9c23*/
    return 0; /*0x4d9c53*/
  if ( !this->locomotor[0] ) /*0x4d9c2d*/
    WinAPI::Wrapper(-2147467261); /*0x4d9c3c*/
  return (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)this->locomotor[0] + 28))( /*0x4d9c4f*/
           this->locomotor[0],
           *(_DWORD *)(a2 + 36));
}



// ==== 0x004D9C60  ObjectClass::CheckCellFlags  this=FootClass  sig=csp ====
int __stdcall ObjectClass::CheckCellFlags(ObjectClass *this, int a2, int *a3, _BYTE *a4, _DWORD *a5)
{
  _DWORD *v5; // esi
  int v6; // eax
  __int16 v7; // dx
  int v10; // ebx
  int v11; // ecx
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  int v16; // edi
  int v17; // edi
  int *v18; // [esp+1Ch] [ebp+Ch]

  v5 = a5; /*0x4d9c67*/
  if ( !a5 ) /*0x4d9c72*/
  {
    v6 = ((_BYTE)a2 - 4) & 7; /*0x4d9c77*/
    v7 = HIWORD(this->occupant) + HIWORD(g_DDrawSurfaceManager.scenario[v6 + 82]); /*0x4d9c8e*/
    LOWORD(a5) = LOWORD(this->occupant) + LOWORD(g_DDrawSurfaceManager.scenario[v6 + 82]); /*0x4d9c99*/
    HIWORD(a5) = v7; /*0x4d9ca2*/
    v5 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a5); /*0x4d9cba*/
  }
  if ( a2 == -1 ) /*0x4d9cbf*/
  {
    if ( *a3 == -1 && (this->customSound_controller & 0x100) != 0 ) /*0x4d9e50*/
      *a3 = *((char *)this + 283) + 4; /*0x4d9e5c*/
    return 0; /*0x4d9e5c*/
  }
  if ( !v5 || !this ) /*0x4d9ccf*/
    return 0; /*0x4d9ccf*/
  if ( *a3 == -1 && (v5[80] & 0x100) != 0 ) /*0x4d9ce8*/
  {
    *a3 = *((char *)v5 + 283) + 4; /*0x4d9cf4*/
    if ( (this->customSound_controller & 0x200) == 0 ) /*0x4d9d00*/
      return 7; /*0x4d9d0b*/
  }
  v10 = *((char *)this + 283); /*0x4d9d14*/
  v18 = (int *)(v5[80] & 0x100); /*0x4d9d20*/
  if ( v18 ) /*0x4d9d24*/
    v11 = *((char *)v5 + 283); /*0x4d9d26*/
  else
    v11 = *a3; /*0x4d9d2f*/
  v12 = v11 - v10; /*0x4d9d32*/
  v13 = abs32(v12); /*0x4d9d39*/
  if ( !v13 ) /*0x4d9d3e*/
  {
    v17 = this->customSound_controller; /*0x4d9e08*/
    if ( ((v17 & 0x100) == 0 || (v17 & 0x200) == 0 || !v18) && *a3 != -1 && *a3 != v10 ) /*0x4d9e30*/
      return 7; /*0x4d9e3b*/
    return 0; /*0x4d9e30*/
  }
  v14 = v13 - 1; /*0x4d9d44*/
  if ( !v14 ) /*0x4d9d45*/
  {
    if ( v12 <= 0 ) /*0x4d9dda*/
    {
      if ( !*((_BYTE *)v5 + 284) ) /*0x4d9df2*/
        return 7; /*0x4d9e05*/
    }
    else if ( !this->q11C ) /*0x4d9ddc*/
    {
      return 7; /*0x4d9def*/
    }
    return 0; /*0x4d9de4*/
  }
  if ( v14 != 3 ) /*0x4d9d4e*/
    return 7; /*0x4d9d59*/
  v15 = *((char *)v5 + 283); /*0x4d9d5c*/
  if ( v15 == v10 - 4 ) /*0x4d9d68*/
  {
    if ( *a3 != v10 ) /*0x4d9d6d*/
      return 7; /*0x4d9d78*/
    if ( !v18 ) /*0x4d9d81*/
      return 7; /*0x4d9d8c*/
  }
  if ( v10 != v15 - 4 ) /*0x4d9d94*/
    return 0; /*0x4d9e61*/
  v16 = this->customSound_controller; /*0x4d9d9a*/
  if ( (v16 & 0x100) == 0 ) /*0x4d9da6*/
    return 7; /*0x4d9dab*/
  if ( (v16 & 0x200) == 0 ) /*0x4d9dba*/
    return 7; /*0x4d9dbf*/
  *a4 = 1; /*0x4d9dcf*/
  return 0; /*0x4d9d02*/
}



// ==== 0x004D9E70  FootClass::CheckCohesion  this=FootClass  sig=csp ====
char __usercall TeamClass::CheckCohesion@<al>(FootClass *this, double a2@<st0>)
{
  ObjectClass *v2; // ecx
  ObjectClass *v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  int v9; // eax
  int v11; // [esp+20h] [ebp-1Ch]
  _BYTE v12[12]; // [esp+24h] [ebp-18h] BYREF
  _BYTE v13[12]; // [esp+30h] [ebp-Ch] BYREF

  v3 = v2; /*0x4d9e74*/
  v4 = (*((int (__usercall **)@<eax>(ObjectClass *@<ecx>, double@<st0>))v2->AbstractClass + 11))(v2, a2); /*0x4d9e78*/
  if ( v4 > 0 /*0x4d9f52*/
    && v4 <= 2
    && (unsigned __int8)Team::AllMembersValid((Team *)v3)
    && (v5 = Array::Get((Array *)v3, 0), (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 6)
    && *(_BYTE *)(*(_DWORD *)(Array::Get((Array *)v3, 0) + 1312) + 5801)
    && (v6 = Array::Get((Array *)v3, 0),
        v7 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v6 + 72))(v6, v12),
        v8 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, _BYTE *))v3->AbstractClass + 18))(v3, v13),
        v11 = v8[2] - v7[2],
        Math::Sqrt(
          (double)(*v8 - *v7) * (double)(*v8 - *v7)
        + (double)(v8[1] - v7[1]) * (double)(v8[1] - v7[1])
        + (double)v11 * (double)v11),
        LOWORD(v9) = Math::RoundToInt(a2),
        v9 < 128) )
  {
    return 1; /*0x4d9f54*/
  }
  else
  {
    return AbstractClass::COMStub_Return0_38(v3); /*0x4d9f5d*/
  }
}



// ==== 0x004D9F70  FootClass::SellUnit  this=FootClass  sig=csp ====
int __thiscall BuildingClass::SellUnit(FootClass *this, int a2)
{
  int result; // eax
  int v4; // eax

  result = a2; /*0x4d9f70*/
  if ( a2 ) /*0x4d9f79*/
  {
    if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x4d9f81*/
    {
      VoxClass::FindAndPlay((VoxClass *)&stru_822420.?[24], -1); /*0x4d9f94*/
      PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1700), 0x2000, 1.0, 0); /*0x4d9fb0*/
    }
    v4 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 175))(this); /*0x4d9fb9*/
    HouseClass::AddPower(this->?, v4); /*0x4d9fc6*/
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 232))(this); /*0x4d9fcf*/
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 53))(this); /*0x4d9fd9*/
    return (*((int (__thiscall **)(FootClass *))this->TechnoClass + 62))(this); /*0x4d9fe3*/
  }
  return result; /*0x4d9fe9*/
}



// ==== 0x004D9FF0  FootClass::vt_entry_4F0  this=FootClass  sig=csp ====
_DWORD *__thiscall FootClass::vt_entry_4F0(FootClass *this, _DWORD *a2)
{
  _DWORD *v2; // ecx
  _BYTE v4[12]; // [esp+4h] [ebp-Ch] BYREF

  v2 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))this->TechnoClass + 41))(this, v4); /*0x4da001*/
  *a2 = *v2; /*0x4da00b*/
  a2[1] = v2[1]; /*0x4da010*/
  a2[2] = v2[2]; /*0x4da017*/
  return a2; /*0x4da013*/
}



// ==== 0x004DA020  globalHelper_0DA020  this=AbstractClass  sig=csp ====
_DWORD *__stdcall sub_4DA020(_DWORD *a1, _DWORD *a2)
{
  *a1 = *a2; /*0x4da02a*/
  return a1; /*0x4da02c*/
}



// ==== 0x004DA030  InfantryClass::ProcessExitQueue  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::ProcessExitQueue(InfantryClass *this)
{
  AbstractClass *movementDestination; // eax
  void *vtable0; // ebx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // edx

  movementDestination = this->?; /*0x4da035*/
  if ( !movementDestination ) /*0x4da03d*/
  {
    movementDestination = *(AbstractClass **)&this->?[12]; /*0x4da043*/
    if ( movementDestination ) /*0x4da04b*/
    {
      movementDestination = *(AbstractClass **)this->?; /*0x4da051*/
      vtable0 = movementDestination->vtable0; /*0x4da057*/
      if ( movementDestination->vtable0 ) /*0x4da057*/
      {
        (*((void (__thiscall **)(InfantryClass *, void *, int))this->FootClass + 288))(this, vtable0, 1); /*0x4da062*/
        v4 = *(_DWORD *)&this->?[12]; /*0x4da068*/
        if ( v4 > 0 ) /*0x4da076*/
        {
          v5 = v4 - 1; /*0x4da078*/
          v6 = 0; /*0x4da07b*/
          for ( *(_DWORD *)&this->?[12] = v5; /*0x4da082*/
                v6 < *(_DWORD *)&this->?[12];
                *(_DWORD *)(*(_DWORD *)this->? + 4 * v6 - 4) = *(_DWORD *)(*(_DWORD *)this->? + 4 * v6) )
          {
            ++v6; /*0x4da087*/
          }
        }
        LOBYTE(movementDestination) = this->?; /*0x4da096*/
        if ( (_BYTE)movementDestination ) /*0x4da09e*/
        {
          v7 = *(_DWORD *)&this->?[4]; /*0x4da0a0*/
          if ( *(_DWORD *)&this->?[12] < v7 /*0x4da0ca*/
            || ((LOBYTE(movementDestination) = this->?[9], (_BYTE)movementDestination) || !v7)
            && (movementDestination = *(AbstractClass **)&this->?[16], (int)movementDestination > 0)
            && (LOBYTE(movementDestination) = (*(int (__thiscall **)(int *, int, _DWORD))(this->?[0] + 8))(
                                                this->?,
                                                (int)movementDestination + v7,
                                                0),
                (_BYTE)movementDestination) )
          {
            movementDestination = *(AbstractClass **)&this->?[12]; /*0x4da0cc*/
            v8 = *(_DWORD *)this->?; /*0x4da0cf*/
            *(_DWORD *)&this->?[12] = (char *)&movementDestination->vtable0 + 1; /*0x4da0d5*/
            *(_DWORD *)(v8 + 4 * (_DWORD)movementDestination) = vtable0; /*0x4da0d8*/
          }
        }
      }
    }
  }
  return (char)movementDestination; /*0x4da0db*/
}



// ==== 0x004DA0E0  BuildingClass::AddToProductionQueue  this=IUnknown  sig=csp ====
void __thiscall BuildingClass::AddToProductionQueue(int this, int a2)
{
  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int Member; // eax
  int v10; // esi

  if ( !a2 ) /*0x4da0eb*/
    return; /*0x4da0eb*/
  v3 = *(_DWORD *)(this + 1468); /*0x4da0f1*/
  if ( a2 != this ) /*0x4da0f9*/
  {
    v4 = v3 == 0; /*0x4da108*/
    goto LABEL_6; /*0x4da108*/
  }
  v4 = v3 == 0; /*0x4da0fb*/
  if ( v3 <= 0 ) /*0x4da0fd*/
  {
LABEL_6:
    if ( v4 ) /*0x4da10a*/
      *(_BYTE *)(this + 1713) = 0; /*0x4da10c*/
    v5 = *(_DWORD *)(this + 1460); /*0x4da113*/
    if ( *(_DWORD *)(this + 1468) < v5 /*0x4da144*/
      || (*(_BYTE *)(this + 1465) || !v5)
      && (v6 = *(_DWORD *)(this + 1472), v6 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 1452) + 8))(this + 1452, v5 + v6, 0) )
    {
      v7 = *(_DWORD *)(this + 1468); /*0x4da14b*/
      v8 = *(_DWORD *)(this + 1456); /*0x4da14e*/
      *(_DWORD *)(this + 1468) = v7 + 1; /*0x4da154*/
      *(_DWORD *)(v8 + 4 * v7) = a2; /*0x4da157*/
    }
    goto LABEL_14; /*0x4da157*/
  }
  *(_BYTE *)(this + 1713) = 1; /*0x4da0ff*/
LABEL_14:
  if ( !*(_DWORD *)(this + 1444) && (*(int (__thiscall **)(int))(this->q184)(this) == 5 ) /*0x4da171*/
  {
    Member = Team::GetMember((Team *)this, 0); /*0x4da177*/
    v10 = Member; /*0x4da17c*/
    if ( !Member /*0x4da194*/
      || (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) != 6
      || !*(_BYTE *)(*(_DWORD *)(v10 + 1312) + 5821) )
    {
      (*(void (__thiscall **)(int, _DWORD, int))(this->u32_121)(this, 0, 1); /*0x4da1a6*/
    }
  }
}



// ==== 0x004DA1C0  FootClass::ClearSomeVector  this=FootClass  sig=csp ====
int __thiscall FootClass::ClearSomeVector(FootClass *this)
{
  return (*(int (__thiscall **)(int *))(this->FootClass_field_abstract_array_5AC[0] + 12))(this->FootClass_field_abstract_array_5AC);
}



// ==== 0x004DA1D0  FootClass::CanBeControlled  this=FootClass  sig=csp ====
char __thiscall FootClass::CanBeControlled(FootClass *this)
{
  TeamClass *team; // ecx

  if ( !this->? ) /*0x4da1d3*/
    return 0; /*0x4da1dd*/
  if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3220) ) /*0x4da1eb*/
    return 1; /*0x4da1eb*/
  if ( this->? ) /*0x4da1f5*/
    return 1; /*0x4da1f5*/
  if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 97))(this) == 4 ) /*0x4da20c*/
    return 1; /*0x4da20c*/
  team = this->team; /*0x4da20e*/
  if ( team ) /*0x4da216*/
  {
    if ( (unsigned __int8)TechnoClass::IsWaypointHidden((TechnoClass *)team) ) /*0x4da218*/
      return 1; /*0x4da225*/
  }
  return 0; /*0x4da1df*/
}



// ==== 0x004DA230  FootClass::CanBeRecruited  this=FootClass  sig=csp ====
int __thiscall FootClass::CanBeRecruited(FootClass *this, int a2)
{
  int result; // eax
  int v4; // eax

  result = a2; /*0x4da230*/
  if ( a2 ) /*0x4da239*/
  {
    if ( (HouseClass *)a2 == this->? ) /*0x4da247*/
    {
      if ( this->? ) /*0x4da24f*/
      {
        LOBYTE(result) = 0; /*0x4da259*/
      }
      else
      {
        result = (int)this->team; /*0x4da25f*/
        if ( result ) /*0x4da267*/
        {
          LOBYTE(result) = 0; /*0x4da269*/
        }
        else
        {
          v4 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 97))(this); /*0x4da273*/
          LOBYTE(result) = IPersistStream::SetField(v4); /*0x4da27b*/
          if ( (_BYTE)result ) /*0x4da282*/
            LOBYTE(result) = this->? != 0; /*0x4da291*/
        }
      }
    }
    else
    {
      LOBYTE(result) = 0; /*0x4da249*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x4da23b*/
  }
  return result; /*0x4da23d*/
}



// ==== 0x004DA2A0  FootClass::ClearSomeVector2  this=FootClass  sig=csp ====
int __thiscall FootClass::ClearSomeVector2(FootClass *this)
{
  int result; // eax

  result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 97))(this); /*0x4da2a2*/
  LOBYTE(result) = result == 7; /*0x4da2ab*/
  return result; /*0x4da2ae*/
}



// ==== 0x004DA2B0  FootClass::COMStub_143  this=FootClass  sig=csp ====
// attributes: thunk
int AbstractClass::COMStub_143()
{
  return IPersistStream::GetMaxSize();
}



// ==== 0x004DA2C0  FootClass::ProcessMovement  this=FootClass  sig=csp ====
int __thiscall FootClass::ProcessMovement(FootClass *this)
{
  double v1; // st7
  int missionStatus; // eax
  TeamClass *team; // eax
  _DWORD *v5; // eax
  int (__thiscall **vtable0)(FootClass *); // edx
  int *v7; // eax
  _DWORD *v8; // eax
  int (__thiscall **v9)(FootClass *); // edx
  int *v10; // eax
  void (__thiscall **v11)(FootClass *, void *, int); // ebx
  void *v12; // eax
  char *MissionControl; // eax
  int v14; // eax
  _DWORD *WaypointCoords; // [esp-10h] [ebp-50h]
  int v17; // [esp-8h] [ebp-48h]
  int v18; // [esp-8h] [ebp-48h]
  int v19; // [esp+4h] [ebp-3Ch]
  __int16 v20[2]; // [esp+8h] [ebp-38h] BYREF
  int v21; // [esp+Ch] [ebp-34h]
  int v22; // [esp+10h] [ebp-30h] BYREF
  int v23; // [esp+14h] [ebp-2Ch] BYREF
  int v24; // [esp+18h] [ebp-28h] BYREF
  int v25; // [esp+1Ch] [ebp-24h] BYREF
  int v26; // [esp+20h] [ebp-20h] BYREF
  int v27; // [esp+24h] [ebp-1Ch] BYREF
  _BYTE v28[12]; // [esp+28h] [ebp-18h] BYREF
  _BYTE v29[12]; // [esp+34h] [ebp-Ch] BYREF

  missionStatus = this->?; /*0x4da2c6*/
  if ( missionStatus ) /*0x4da2cf*/
  {
    if ( missionStatus == 1 && !this->movementDestination ) /*0x4da2d8*/
      this->? = 0; /*0x4da2e6*/
  }
  else if ( this->movementDestination ) /*0x4da2f5*/
  {
    this->? = 1; /*0x4da2ff*/
  }
  else
  {
    team = this->team; /*0x4da30e*/
    v20[0] = 0; /*0x4da314*/
    v20[1] = 0; /*0x4da31d*/
    if ( team && *TechnoClass::GetWaypointCoords((TechnoClass *)team->buildingType, &v24) != g_FootClass_Pool ) /*0x4da341*/
    {
      v5 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))this->TechnoClass + 18))(this, v28); /*0x4da35d*/
      LOWORD(v21) = *v5 / 256; /*0x4da374*/
      vtable0 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4da385*/
      HIWORD(v21) = v5[1] / 256; /*0x4da38a*/
      v22 = v21; /*0x4da393*/
      v17 = *(_DWORD *)(vtable0[33](this) + 1660); /*0x4da3a9*/
      WaypointCoords = TechnoClass::GetWaypointCoords((TechnoClass *)this->team->buildingType, &v25); /*0x4da3c4*/
      v7 = (int *)FootClass::checkTurning((FootClass *)this->?); /*0x4da3c5*/
      *(_DWORD *)v20 = *CellClass::FindOpenNeighbor( /*0x4da3dc*/
                          (CellClass *)&v26,
                          v1,
                          v7,
                          (int)WaypointCoords,
                          (int)&v22,
                          v17,
                          1,
                          0,
                          v19);
    }
    if ( *(_DWORD *)v20 == g_FootClass_Pool ) /*0x4da3eb*/
    {
      v8 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))this->TechnoClass + 18))(this, v29); /*0x4da408*/
      LOWORD(v21) = *v8 / 256; /*0x4da41f*/
      v9 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4da430*/
      HIWORD(v21) = v8[1] / 256; /*0x4da435*/
      v23 = v21; /*0x4da43e*/
      v18 = *(_DWORD *)(v9[33](this) + 1660); /*0x4da454*/
      v10 = (int *)FootClass::checkTurning((FootClass *)this->?); /*0x4da461*/
      *(_DWORD *)v20 = *CellClass::FindOpenNeighbor( /*0x4da478*/
                          (CellClass *)&v27,
                          v1,
                          v10,
                          (int)&g_FootClass_Pool,
                          (int)&v23,
                          v18,
                          1,
                          0,
                          v19);
    }
    v11 = (void (__thiscall **)(FootClass *, void *, int))this->TechnoClass; /*0x4da47d*/
    v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20); /*0x4da48b*/
    v11[288](this, v12, 1); /*0x4da493*/
    this->? = 1; /*0x4da499*/
  }
  MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4da4a6*/
  LOWORD(v14) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4da4b4*/
  return v14 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4da4d2*/
}



// ==== 0x004DA4E0  FootClass::CheckTargetValidity  this=FootClass  sig=csp ====
int __thiscall FootClass::CheckTargetValidity(FootClass *this, int a2, int a3)
{
  int result; // eax

  if ( !this->locomotor[0] ) /*0x4da4e8*/
    return TechnoClass::UpdatePowerDrain((char *)this, a2, a3); /*0x4da4e8*/
  result = (*(int (__stdcall **)(int, int))(*(_DWORD *)this->locomotor[0] + 52))(this->locomotor[0], a2); /*0x4da50a*/
  if ( !result ) /*0x4da50f*/
    return TechnoClass::UpdatePowerDrain((char *)this, a2, a3); /*0x4da519*/
  return result; /*0x4da51e*/
}



// ==== 0x004DA530  FootClass::MovementAI  this=FootClass  sig=csp ====
char __fastcall FootClass::MovementAI(FootClass *this)
{
  char result; // al
  _DWORD *v3; // eax
  double *v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int lastSightRange; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // edx
  int v16; // eax
  int unknown538; // ebp
  FootClass *v18; // edi
  int (__thiscall **vtable0)(FootClass *); // edx
  int v20; // edi
  unsigned int v21; // eax
  int unknown540; // eax
  char isFallingDown; // al
  int (__thiscall **v24)(FootClass *); // edx
  int v25; // eax
  char isSinking; // al
  int (__thiscall **v27)(FootClass *); // edx
  int v28; // eax
  int (__thiscall **v29)(FootClass *); // eax
  int v30; // eax
  char isCrashing; // al
  int (__thiscall **v32)(FootClass *); // edx
  int v33; // eax
  int (__thiscall **v34)(FootClass *); // edx
  int v35; // eax
  void (__thiscall **v36)(FootClass *, int *, int, _DWORD); // edx
  int (__stdcall ***v37)(_DWORD, int *, __int16 *); // eax
  int *locomotor; // ebp
  int v39; // edi
  int v40; // eax
  int (__thiscall **v41)(FootClass *); // eax
  FootClass *parasiteEatingMe; // esi
  int v43; // [esp+54h] [ebp-30h]
  int Traversability; // [esp+70h] [ebp-14h] BYREF
  __int16 v45[2]; // [esp+74h] [ebp-10h] BYREF
  int v46; // [esp+78h] [ebp-Ch] BYREF
  int v47; // [esp+7Ch] [ebp-8h]
  int v48; // [esp+80h] [ebp-4h]

  MovementAI::Begin((TechnoClass *)this); /*0x4da539*/
  result = this->?; /*0x4da53e*/
  if ( !result ) /*0x4da548*/
    return result; /*0x4da548*/
  this->FootClass_field_bool_6B3 = 0; /*0x4da54e*/
  if ( !(*(_DWORD *)&stru_A8EB00.?[416] % *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6152)) /*0x4da593*/
    && !*(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3383)
    && !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 21))(this)
    && !this->? )
  {
    v3 = (_DWORD *)(*((int (__thiscall **)(FootClass *, int *))this->TechnoClass + 18))(this, &v46); /*0x4da5a8*/
    LOWORD(Traversability) = *v3 / 256; /*0x4da5bb*/
    HIWORD(Traversability) = v3[1] / 256; /*0x4da5d3*/
    *(_DWORD *)v45 = Traversability; /*0x4da5dc*/
    v4 = (double *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45); /*0x4da5e6*/
    Traversability = Cell::GetTraversability(v4); /*0x4da5f4*/
    if ( Traversability > 0 ) /*0x4da5f8*/
    {
      v5 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4da5fe*/
      LOWORD(v6) = Math::RoundToInt((double)Traversability * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] /*0x4da60a*/
                                                                       + 6168));
      Traversability = v6; /*0x4da610*/
      result = (*((int (__thiscall **)(FootClass *, int *, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD))this->TechnoClass /*0x4da629*/
                + 91))(
                 this,
                 &Traversability,
                 0,
                 *(_DWORD *)(v5 + 6196),
                 0,
                 0,
                 1,
                 0);
      if ( !this->? ) /*0x4da62f*/
        return result; /*0x4da635*/
    }
  }
  if ( !this->? ) /*0x4da63b*/
  {
    if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3434) ) /*0x4da64d*/
    {
      v7 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 111))(this); /*0x4da65b*/
      if ( (unsigned __int8)Type::CheckAmbiguity((Type *)&stru_87F5F0.__pad_58[416], v7, 1) ) /*0x4da667*/
        this->? = 1; /*0x4da670*/
    }
  }
  if ( !this->locomotor[0] ) /*0x4da677*/
    WinAPI::Wrapper(-2147467261); /*0x4da684*/
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 128))(this->locomotor[0]) /*0x4da6bb*/
    && (*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 21))(this)
    && (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->?, (#375 *)dword_A83D4C) )
  {
    v8 = this->sightTimer[0]; /*0x4da6c8*/
    v9 = this->sightTimer[2]; /*0x4da6ce*/
    if ( v8 != -1 ) /*0x4da6d7*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v8 >= v9 ) /*0x4da6e3*/
      {
LABEL_21:
        (*((void (__thiscall **)(FootClass *, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass + 291))( /*0x4da6ef*/
          this,
          0,
          0,
          0,
          0);
        (*((void (__thiscall **)(FootClass *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass + 290))( /*0x4da706*/
          this,
          0,
          0,
          0,
          0,
          0);
        if ( this->? == (*((int (__thiscall **)(FootClass *))this->TechnoClass + 114))(this) ) /*0x4da72a*/
        {
          v13 = this->?[1]; /*0x4da750*/
          v46 = this->?[0]; /*0x4da753*/
          v47 = v13; /*0x4da758*/
          v48 = this->?[2]; /*0x4da763*/
          MapClass::RevealArea2((MapClass *)&stru_87F5F0.__pad_58[416], &v46, this->? - 3, this->? + 3, 0); /*0x4da77b*/
        }
        else
        {
          v10 = this->?[1]; /*0x4da72c*/
          v46 = this->?[0]; /*0x4da72f*/
          lastSightRange = this->?; /*0x4da733*/
          v12 = this->?[2]; /*0x4da73a*/
          v47 = v10; /*0x4da740*/
          v48 = v12; /*0x4da745*/
          MapClass::RevealArea2((MapClass *)&stru_87F5F0.__pad_58[416], &v46, 0, lastSightRange + 3, 0); /*0x4da74e*/
        }
        v14 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 114))(this); /*0x4da784*/
        v15 = v47; /*0x4da78a*/
        this->? = v14; /*0x4da78e*/
        this->sightTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4da79e*/
        this->sightTimer[1] = v15; /*0x4da7a4*/
        this->sightTimer[2] = 15; /*0x4da7aa*/
        goto LABEL_25; /*0x4da7aa*/
      }
      v9 -= *(_DWORD *)&stru_A8EB00.?[416] - v8; /*0x4da6e5*/
    }
    if ( v9 ) /*0x4da6e9*/
      goto LABEL_25; /*0x4da6e9*/
    goto LABEL_21; /*0x4da6e9*/
  }
LABEL_25:
  if ( !(*(_DWORD *)&stru_A8EB00.?[416] % 16) /*0x4da7d8*/
    && (*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 21))(this)
    && *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 111))(this) + 60) )
  {
    v43 = *(_DWORD *)(*((int (__thiscall **)(FootClass *, __int16 *))this->TechnoClass + 110))(this, v45); /*0x4da7f2*/
    v16 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 111))(this); /*0x4da7f8*/
    TeamClass::Update_0(*(TeamClass **)(v16 + 60), 59, (int)this, v43, 0, 0); /*0x4da801*/
  }
  unknown538 = this->unknown538; /*0x4da80c*/
  if ( !this->locomotor[0] /*0x4da850*/
    || this->?
    || this->?
    || this->? && !*(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1682)
    || this->? )
  {
    goto LABEL_67; /*0x4da856*/
  }
  if ( !this->locomotor[0] ) /*0x4da85c*/
    WinAPI::Wrapper(-2147467261); /*0x4da869*/
  result = (*(int (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 64))(this->locomotor[0]); /*0x4da877*/
  if ( this->? )
  {
    if ( this )
      v18 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 1 ? this : 0;
    else
      v18 = 0; /*0x4da88a*/
    if ( !this->locomotor[0] ) /*0x4da8a0*/
      WinAPI::Wrapper(-2147467261); /*0x4da8ad*/
    if ( ((*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 128))(this->locomotor[0]) /*0x4da934*/
       && !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 118))(this)
       || this->?
       && *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 912)
       && v18
       && !FootClass::updateScanRange(v18))
      && !(*(_DWORD *)&stru_A8EB00.?[416]
         % *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 660))
      && !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 117))(this)
      && !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 118))(this)
      && !this->isAttackedByLocomotor )
    {
      goto LABEL_66; /*0x4da934*/
    }
    if ( *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 664) ) /*0x4da94a*/
    {
      if ( !this->locomotor[0] ) /*0x4da952*/
        WinAPI::Wrapper(-2147467261); /*0x4da95f*/
      if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 128))(this->locomotor[0]) /*0x4da9af*/
        && !(*(_DWORD *)&stru_A8EB00.?[416]
           % *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 664))
        && !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 117))(this)
        && !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 118))(this)
        && !this->isAttackedByLocomotor )
      {
        goto LABEL_66; /*0x4da9af*/
      }
    }
    if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1709) /*0x4da9f3*/
      && (*((int (__thiscall **)(FootClass *))this->TechnoClass + 114))(this) > 0
      && !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 117))(this)
      && !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 118))(this)
      && !this->isAttackedByLocomotor )
    {
LABEL_66:
      ++this->unknown538; /*0x4da9fb*/
    }
LABEL_67:
    if ( unknown538 == this->unknown538 ) /*0x4daa07*/
    {
      if ( !this->locomotor[0] ) /*0x4daa09*/
        WinAPI::Wrapper(-2147467261); /*0x4daa16*/
      if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 128))(this->locomotor[0]) ) /*0x4daa24*/
        goto LABEL_136; /*0x4daa24*/
    }
    if ( this->? /*0x4daa5c*/
      || this->?
      || this->? && *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1682) )
    {
LABEL_136:
      if ( this->FootClass_field_bool_53C ) /*0x4daafa*/
      {
        unknown540 = this->unknown540; /*0x4dab02*/
        if ( !unknown540 || this->? || this->? ) /*0x4dab14*/
        {
          Mixer::ReleaseChannel((Mixer *)this->audioController7); /*0x4dab2b*/
          this->FootClass_field_bool_53C = 0; /*0x4dab30*/
          this->unknown540 = 0; /*0x4dab36*/
        }
        else
        {
          this->unknown540 = unknown540 - 1; /*0x4dab1d*/
        }
      }
    }
    else
    {
      if ( !this->FootClass_field_bool_53C /*0x4daa87*/
        && *(int *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1284) > 0 )
      {
        AudioController::Stop((AudioController *)this->audioController7); /*0x4daa91*/
        v46 = this->?[0]; /*0x4daaa2*/
        vtable0 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4daaa6*/
        v47 = this->?[1]; /*0x4daaab*/
        v48 = this->?[2]; /*0x4daab2*/
        v20 = vtable0[33](this) + 1268; /*0x4daac5*/
        v21 = Random::State(&Randomizer_Global); /*0x4daacb*/
        StartAudioControllerAt( /*0x4daae2*/
          *(_DWORD *)(*(_DWORD *)(v20 + 4) + 4 * (v21 % *(_DWORD *)(v20 + 16))),
          &v46,
          (int **)this->audioController7);
        this->FootClass_field_bool_53C = 1; /*0x4daae7*/
      }
      this->unknown540 = 3; /*0x4daaee*/
    }
    isFallingDown = this->?; /*0x4dab3c*/
    if ( isFallingDown != this->? ) /*0x4dab4a*/
    {
      if ( isFallingDown /*0x4dab67*/
        && *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1356) != -1
        && this->? )
      {
        v46 = this->?[0]; /*0x4dab7c*/
        v47 = this->?[1]; /*0x4dab85*/
        v24 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4dab89*/
        v48 = this->?[2]; /*0x4dab8e*/
        v25 = v24[33](this); /*0x4dab92*/
        StartAudioControllerAt(*(_DWORD *)(v25 + 1356), &v46, 0); /*0x4daba0*/
        this->? = this->?; /*0x4dabab*/
      }
      else
      {
        this->? = this->?; /*0x4dabbc*/
      }
    }
    isSinking = this->?; /*0x4dabc7*/
    if ( isSinking != this->? ) /*0x4dabd5*/
    {
      if ( isSinking ) /*0x4dabdd*/
      {
        if ( *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1364) != -1 ) /*0x4dabf3*/
        {
          v46 = this->?[0]; /*0x4dac02*/
          v47 = this->?[1]; /*0x4dac0b*/
          v27 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4dac0f*/
          v48 = this->?[2]; /*0x4dac14*/
          v28 = v27[33](this); /*0x4dac18*/
          StartAudioControllerAt(*(_DWORD *)(v28 + 1364), &v46, 0); /*0x4dac26*/
        }
        if ( *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1352) == -1 ) /*0x4dac3b*/
        {
          if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 520) != -1 ) /*0x4dac86*/
          {
            v46 = this->?[0]; /*0x4dac94*/
            v47 = this->?[1]; /*0x4dac9b*/
            v48 = this->?[2]; /*0x4daca9*/
            StartAudioControllerAt( /*0x4dacb7*/
              *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 520),
              &v46,
              (int **)this->audioController7);
          }
        }
        else
        {
          v46 = this->?[0]; /*0x4dac49*/
          v47 = this->?[1]; /*0x4dac57*/
          v29 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4dac5b*/
          v48 = this->?[2]; /*0x4dac60*/
          v30 = v29[33](this); /*0x4dac66*/
          StartAudioControllerAt(*(_DWORD *)(v30 + 1352), &v46, (int **)this->audioController7); /*0x4dac74*/
        }
      }
      else if ( !this->FootClass_field_bool_53C ) /*0x4dacbe*/
      {
        Mixer::ReleaseChannel((Mixer *)this->audioController7); /*0x4daccc*/
      }
      this->? = this->?; /*0x4dacd7*/
    }
    isCrashing = this->?; /*0x4dacdd*/
    if ( isCrashing != this->? ) /*0x4daceb*/
    {
      if ( isCrashing ) /*0x4dacf3*/
      {
        Mixer::ReleaseChannel((Mixer *)this->audioController7); /*0x4dad01*/
        if ( *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1360) != -1 /*0x4dad1f*/
          && (unsigned __int8)House::IsHumanPlayer((House *)this->?) )
        {
          v46 = this->?[0]; /*0x4dad35*/
          v47 = this->?[1]; /*0x4dad3e*/
          v32 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4dad42*/
          v48 = this->?[2]; /*0x4dad47*/
          v33 = v32[33](this); /*0x4dad4b*/
          StartAudioControllerAt(*(_DWORD *)(v33 + 1360), &v46, 0); /*0x4dad59*/
        }
        if ( *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1348) != -1 ) /*0x4dad6f*/
        {
          v46 = this->?[0]; /*0x4dad7e*/
          v34 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4dad82*/
          v47 = this->?[1]; /*0x4dad87*/
          v48 = this->?[2]; /*0x4dad8e*/
          v35 = v34[33](this); /*0x4dad94*/
          StartAudioControllerAt(*(_DWORD *)(v35 + 1348), &v46, (int **)this->audioController7); /*0x4dada2*/
        }
      }
      else if ( !this->FootClass_field_bool_53C ) /*0x4dada9*/
      {
        Mixer::ReleaseChannel((Mixer *)this->audioController7); /*0x4dadb7*/
      }
      this->? = this->?; /*0x4dadc2*/
    }
    v46 = this->?[0]; /*0x4dadd4*/
    v47 = this->?[1]; /*0x4dade1*/
    v48 = this->?[2]; /*0x4dade8*/
    StartAudioController(&v46, (int **)this->audioController7); /*0x4dadf0*/
    if ( (stru_A8EB00.?[416] & 0x3F) == 0x3F /*0x4dae37*/
      && !this->movementDestination
      && !this->?
      && !*(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 111))(this) + 284)
      && (*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 172))(this)
      && !(*((int (__thiscall **)(FootClass *))this->TechnoClass + 114))(this) )
    {
      v36 = (void (__thiscall **)(FootClass *, int *, int, _DWORD))this->TechnoClass; /*0x4dae41*/
      v46 = 0; /*0x4dae4d*/
      v47 = 0; /*0x4dae51*/
      v48 = 0; /*0x4dae55*/
      v36[93](this, &v46, 1, 0); /*0x4dae59*/
    }
    v37 = (int (__stdcall ***)(_DWORD, int *, __int16 *))this->locomotor[0]; /*0x4dae5f*/
    locomotor = this->locomotor; /*0x4dae65*/
    v39 = 0; /*0x4dae6b*/
    if ( v37 )
    {
      v40 = (**v37)(v37, &stru_818E00.?[17], v45); /*0x4dae7e*/
      v39 = v40 < 0 ? 0 : *(_DWORD *)v45;
      if ( v40 < 0 && v40 != -2147467262 ) /*0x4dae99*/
        WinAPI::Wrapper(v40); /*0x4dae9c*/
      if ( v39 && (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)v39 + 20))(v40 < 0 ? 0 : *(_DWORD *)v45) )
      {
        if ( *locomotor ) /*0x4daeaf*/
          (*(void (__stdcall **)(int))(*(_DWORD *)*locomotor + 8))(*locomotor); /*0x4daeb9*/
        *locomotor = 0; /*0x4daebc*/
        (*(void (__stdcall **)(int, int *))(*(_DWORD *)v39 + 16))(v39, this->locomotor); /*0x4daec3*/
      }
    }
    v41 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4daec6*/
    this->FootClass_field_bool_6B4 = 0; /*0x4daeca*/
    result = v41[118](this); /*0x4daed0*/
    if ( !result ) /*0x4daed8*/
      result = FootClass::ProcessEnterTransport(this); /*0x4daedc*/
    parasiteEatingMe = this->parasiteEatingMe; /*0x4daee1*/
    if ( parasiteEatingMe ) /*0x4daee9*/
      result = (*((int (__thiscall **)(ParasiteClass *))parasiteEatingMe->parasiteImUsing->AbstractClass + 23))(parasiteEatingMe->parasiteImUsing); /*0x4daef3*/
    if ( v39 ) /*0x4daef8*/
      return (*(char (__stdcall **)(int))(*(_DWORD *)v39 + 8))(v39); /*0x4daefd*/
  }
  return result; /*0x4daf00*/
}



// ==== 0x004DAF10  FootClass::UpdateState  this=FootClass  sig=csp ====
_DWORD *__thiscall FootClass::UpdateState(
        FootClass *this,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6,
        int *a7,
        const void *a8,
        int a9,
        int a10,
        int a11)
{
  char v13[8]; // [esp+14h] [ebp-38h] BYREF
  _BYTE v14[48]; // [esp+1Ch] [ebp-30h] BYREF

  qmemcpy(v14, a8, sizeof(v14)); /*0x4daf25*/
  if ( this->locomotor[0] ) /*0x4daf34*/
    (*(void (__stdcall **)(int, char *))(*(_DWORD *)this->locomotor[0] + 44))(this->locomotor[0], v13); /*0x4daf5e*/
  return (_DWORD *)TechnoClass::UpdateState((TechnoClass *)this); /*0x4dafb0*/
}



// ==== 0x004DAFC0  TechnoClass::ComputeSpeedFactor  this=FootClass  sig=csp ====
int __thiscall TechnoClass::ComputeSpeedFactor(TechnoClass *this)
{
  int v2; // edi
  int v3; // edi
  int v4; // ebx
  int v5; // ebx
  int v6; // ebp
  int v7; // ebp
  int v8; // eax
  int v10; // [esp+8h] [ebp-8h]

  v10 = 0; /*0x4dafc7*/
  if ( this->Locomotor ) /*0x4dafcf*/
    v10 = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 56))(this->Locomotor); /*0x4daff3*/
  v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x4db005*/
  v3 = TechnoClass::ScanNeighborCells(this) * *(_DWORD *)(v2 + 3524); /*0x4db014*/
  v4 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x4db021*/
  v5 = TechnoClass::IsValidBuildingPlacement(this) * *(_DWORD *)(v4 + 3528); /*0x4db032*/
  v6 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x4db03d*/
  v7 = TechnoClass::CheckAdjacencyFlags(this) * *(_DWORD *)(v6 + 3520); /*0x4db04c*/
  if ( TechnoClass::CheckTargetCell(this) ) /*0x4db057*/
    v8 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3532); /*0x4db06a*/
  else
    v8 = 0; /*0x4db072*/
  if ( v3 <= v5 ) /*0x4db078*/
    v3 = v5; /*0x4db07a*/
  if ( v3 <= v7 ) /*0x4db07e*/
    v3 = v7; /*0x4db080*/
  if ( v3 <= v8 ) /*0x4db086*/
    v3 = v8; /*0x4db088*/
  return v10 + v3 + TechnoClass::GetDrawHeight(this); /*0x4db097*/
}



// ==== 0x004DB0A0  FootClass::GetAttackSpeed  this=FootClass  sig=csp ====
int __thiscall FootClass::GetAttackSpeed(FootClass *this)
{
  if ( this->locomotor[0] ) /*0x4db0a3*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 60))(this->locomotor[0]); /*0x4db0c4*/
  else
    return 2; /*0x4db0c9*/
}



// ==== 0x004DB0D0  TechnoClass::QueueDrawVoiceResponse  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::QueueDrawVoiceResponse(
        TechnoClass *this,
        _BYTE **a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int *a7,
        int a8,
        unsigned __int8 a9,
        int a10,
        int a11,
        int a12)
{
  int result; // eax
  int v14; // edx
  int v15; // eax
  _DWORD *v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // [esp+Ch] [ebp-10h] BYREF
  int v20; // [esp+10h] [ebp-Ch]
  int v21; // [esp+14h] [ebp-8h] BYREF

  result = *((_DWORD *)this + 413); /*0x4db0d6*/
  if ( result ) /*0x4db0de*/
  {
    result = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 32))(*((_DWORD *)this + 413)); /*0x4db0fb*/
    if ( (_BYTE)result == 1 ) /*0x4db100*/
    {
      v14 = *a7; /*0x4db10e*/
      v20 = a7[1]; /*0x4db110*/
      v15 = *((_DWORD *)this + 413); /*0x4db114*/
      v19 = v14; /*0x4db11c*/
      if ( v15 ) /*0x4db120*/
      {
        v16 = (_DWORD *)(*(int (__stdcall **)(_DWORD, int *))(**((_DWORD **)this + 413) + 48))( /*0x4db13e*/
                          *((_DWORD *)this + 413),
                          &v21);
        v17 = v16[1]; /*0x4db143*/
        v18 = a7[1]; /*0x4db14a*/
        v19 = *v16 + *a7; /*0x4db14f*/
        v20 = v17 + v18; /*0x4db153*/
      }
      return QueueTechnoVoiceLine(this, a2, a3, a4, a5, a6, (int)&v19, a8, a9, a10, a11, a12); /*0x4db190*/
    }
  }
  return result; /*0x4db196*/
}



// ==== 0x004DB1A0  TechnoClass::ComputeSpeedFactorEx  this=FootClass  sig=csp ====
int __thiscall TechnoClass::ComputeSpeedFactorEx(double *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int result; // eax
  int v9; // [esp+8h] [ebp-Ch]
  double TargetSpeedMultiplier; // [esp+Ch] [ebp-8h]

  v2 = (*(int (__thiscall **)(double *))(this->hasParachute)(this); /*0x4db1a9*/
  TargetSpeedMultiplier = TechnoClass::GetTargetSpeedMultiplier((_DWORD *)this->owner, v2); /*0x4db1bf*/
  v3 = (*(int (__thiscall **)(double *))(this->targetLaserOpacity)(this); /*0x4db1c3*/
  LOWORD(v4) = Math::RoundToInt((double)v3 * TargetSpeedMultiplier * this->suspendedMission); /*0x4db1db*/
  v9 = v4; /*0x4db1e4*/
  if ( (unsigned __int8)TechnoTypeClass::HasVoiceResponse((int *)this, 0) ) /*0x4db1e8*/
  {
    LOWORD(v5) = Math::RoundToInt((double)v9 * *(double *)&dword_8871E0->PlayerJoined); /*0x4db200*/
    v9 = v5; /*0x4db205*/
  }
  LOWORD(v6) = Math::RoundToInt((double)v9 * this->rockerLinkedUnit); /*0x4db213*/
  v7 = v6; /*0x4db21c*/
  if ( (*(int (__thiscall **)(double *))(this->fallRate)(this) != 1 ) /*0x4db224*/
    return v7; /*0x4db23e*/
  result = v7; /*0x4db22f*/
  if ( *((_DWORD *)this + 435) != -1 ) /*0x4db231*/
    return v7 / 2; /*0x4db237*/
  return result; /*0x4db236*/
}



// ==== 0x004DB250  FootClass::COMStub_Return0_69  this=FootClass  sig=csp ====
void __stdcall AbstractClass::COMStub_Return0_69(FootClass *this, int a2)
{
  ; /*0x4db250*/
}



// ==== 0x004DB260  FootClass::CleanupDirection  this=FootClass  sig=csp ====
int __thiscall TechnoClass::CleanupDirection(FootClass *this)
{
  int v2; // ebx
  int i; // esi
  int v4; // ecx
  _BYTE *v5; // eax
  int v7; // [esp+Ch] [ebp-8h]
  __int16 v8[2]; // [esp+10h] [ebp-4h] BYREF

  if ( !this->? && (*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) ) /*0x4db276*/
  {
    v2 = this->lastMapCoords[0]; /*0x4db285*/
    for ( i = 0; i < 8; ++i ) /*0x4db296*/
    {
      v4 = i & 7; /*0x4db29a*/
      LOWORD(v7) = v2 + LOWORD(g_DDrawSurfaceManager.scenario[v4 + 82]); /*0x4db2b3*/
      HIWORD(v7) = HIWORD(v2) + HIWORD(g_DDrawSurfaceManager.scenario[v4 + 82]); /*0x4db2bf*/
      *(_DWORD *)v8 = v7; /*0x4db2c8*/
      v5 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8); /*0x4db2d2*/
      --v5[290]; /*0x4db2e3*/
    }
    if ( !dword_A8E7AC ) /*0x4db2f5*/
      (*((void (__thiscall **)(FootClass *))this->TechnoClass + 320))(this); /*0x4db2fb*/
    if ( this->locomotor[0] ) /*0x4db301*/
    {
      (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)this->locomotor[0] + 156))(this->locomotor[0], 0); /*0x4db324*/
      if ( !this->locomotor[0] ) /*0x4db32a*/
        WinAPI::Wrapper(-2147467261); /*0x4db339*/
      (*(void (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 176))(this->locomotor[0]); /*0x4db347*/
    }
    AudioFile::Stop((AudioFile *)this->audioController7); /*0x4db353*/
    if ( *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1520) ) /*0x4db362*/
      (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 315))(this, g_FootClass_Pool); /*0x4db376*/
    if ( *(_DWORD *)(*((int (__thiscall **)(FootClass *, __int16 *))this->TechnoClass + 189))(this, v8) != g_FootClass_Pool ) /*0x4db395*/
      GadgetGrid::RemoveItem((GadgetGrid *)&g_CellClassManager, (int)this); /*0x4db3aa*/
  }
  return TechnoClass::CleanupDeploy((TechnoClass *)this); /*0x4db3b6*/
}



// ==== 0x004DB3C0  ObjectClass::LoadFromStream_Common  this=FootClass  sig=csp ====
int __stdcall ObjectClass::LoadFromStream_Common(int a1, LPSTREAM pStm)
{
  int v3; // eax
  IStream *v4; // ebp
  int result; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // edi
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int i; // edi
  int j; // edi
  int v20; // [esp+54h] [ebp-4h] BYREF
  int v21; // [esp+5Ch] [ebp+4h]
  int v22; // [esp+5Ch] [ebp+4h]

  v3 = *(_DWORD *)(a1 + 1652); /*0x4db3cb*/
  if ( v3 ) /*0x4db3d3*/
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*(_DWORD *)(a1 + 1652)); /*0x4db3d8*/
  v4 = pStm; /*0x4db3db*/
  *(_DWORD *)(a1 + 1652) = 0; /*0x4db3df*/
  result = BuildingClass::AllocAndCtor(a1, (int)v4); /*0x4db3e7*/
  if ( result >= 0 ) /*0x4db3ee*/
  {
    result = (*(int (__stdcall **)(IStream *, LPSTREAM *, int, _DWORD))(*(_DWORD *)v4->__pad_0 + 12))(v4, &pStm, 4, 0); /*0x4db400*/
    if ( result >= 0 ) /*0x4db405*/
    {
      v6 = a1 + 1416; /*0x4db40b*/
      if ( a1 != -1416 ) /*0x4db413*/
      {
        AbstractClassVector::Construct((_DWORD *)(a1 + 1416), 0, 0); /*0x4db419*/
        *(_DWORD *)v6 = &DynamicVectorClass<AbstractClass *>::`vftable'; /*0x4db41e*/
        *(_DWORD *)(a1 + 1436) = 10; /*0x4db424*/
        *(_DWORD *)(a1 + 1432) = 0; /*0x4db42b*/
      }
      v21 = 0; /*0x4db432*/
      if ( (int)pStm <= 0 ) /*0x4db438*/
      {
LABEL_16:
        result = (*(int (__stdcall **)(IStream *, LPSTREAM *, int, _DWORD))(*(_DWORD *)v4->__pad_0 + 12))( /*0x4db4a2*/
                   v4,
                   &pStm,
                   4,
                   0);
        if ( result >= 0 ) /*0x4db4b3*/
        {
          v12 = a1 + 1452; /*0x4db4b9*/
          if ( a1 != -1452 ) /*0x4db4c1*/
          {
            AbstractClassVector::Construct((_DWORD *)(a1 + 1452), 0, 0); /*0x4db4c7*/
            *(_DWORD *)v12 = &DynamicVectorClass<AbstractClass *>::`vftable'; /*0x4db4cc*/
            *(_DWORD *)(a1 + 1472) = 10; /*0x4db4d2*/
            *(_DWORD *)(a1 + 1468) = 0; /*0x4db4d9*/
          }
          v22 = 0; /*0x4db4e0*/
          if ( (int)pStm <= 0 ) /*0x4db4e6*/
          {
LABEL_28:
            *(_DWORD *)(a1 + 1652) = 0; /*0x4db550*/
            ObjectClass::updateStateFlags((int *)(a1 + 1652)); /*0x4db55a*/
            *(_DWORD *)(a1 + 1652) = 0; /*0x4db566*/
            OleLoadFromStream(v4, &IID_ILocomotion, (LPVOID *)(a1 + 1652)); /*0x4db568*/
            *(_DWORD *)(a1 + 1440) = 0; /*0x4db574*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1492)); /*0x4db580*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1496)); /*0x4db591*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1444)); /*0x4db5a2*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1448)); /*0x4db5b3*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1480)); /*0x4db5c4*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1484)); /*0x4db5d5*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1500)); /*0x4db5e6*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1684)); /*0x4db5f7*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1692)); /*0x4db608*/
            AudioController::Init((_DWORD *)(a1 + 1348)); /*0x4db613*/
            *(_BYTE *)(a1 + 1340) = 0; /*0x4db618*/
            *(_DWORD *)(a1 + 1344) = 0; /*0x4db61e*/
            for ( i = 0; i < *(_DWORD *)(a1 + 1468); ++i ) /*0x4db62e*/
              ObjectPtr::RegisterForTracking( /*0x4db63f*/
                (int)&SwizzleManagerClass_Instance,
                (int *)(*(_DWORD *)(a1 + 1456) + 4 * i));
            for ( j = 0; j < *(_DWORD *)(a1 + 1432); ++j ) /*0x4db659*/
              ObjectPtr::RegisterForTracking( /*0x4db66a*/
                (int)&SwizzleManagerClass_Instance,
                (int *)(*(_DWORD *)(a1 + 1420) + 4 * j));
            return 0; /*0x4db67a*/
          }
          else
          {
            while ( 1 ) /*0x4db4e8*/
            {
              v13 = *(_DWORD *)v4->__pad_0; /*0x4db4e8*/
              v20 = 0; /*0x4db4f4*/
              result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(v13 + 12))(v4, &v20, 4, 0); /*0x4db4f8*/
              if ( result < 0 ) /*0x4db4fd*/
                break; /*0x4db4fd*/
              v14 = *(_DWORD *)(a1 + 1460); /*0x4db503*/
              if ( *(_DWORD *)(a1 + 1468) < v14 /*0x4db525*/
                || (*(_BYTE *)(a1 + 1465) || !v14)
                && (v15 = *(_DWORD *)(a1 + 1472), v15 > 0)
                && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 8))(a1 + 1452, v14 + v15, 0) )
              {
                v16 = *(_DWORD *)(a1 + 1468); /*0x4db52c*/
                v17 = *(_DWORD *)(a1 + 1456); /*0x4db52f*/
                *(_DWORD *)(a1 + 1468) = v16 + 1; /*0x4db535*/
                *(_DWORD *)(v17 + 4 * v16) = v20; /*0x4db53c*/
              }
              if ( ++v22 >= (int)pStm ) /*0x4db54e*/
                goto LABEL_28; /*0x4db54e*/
            }
          }
        }
      }
      else
      {
        while ( 1 ) /*0x4db43a*/
        {
          v7 = *(_DWORD *)v4->__pad_0; /*0x4db43a*/
          v20 = 0; /*0x4db446*/
          result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(v7 + 12))(v4, &v20, 4, 0); /*0x4db44a*/
          if ( result < 0 ) /*0x4db44f*/
            break; /*0x4db44f*/
          v8 = *(_DWORD *)(a1 + 1424); /*0x4db455*/
          if ( *(_DWORD *)(a1 + 1432) < v8 /*0x4db477*/
            || (*(_BYTE *)(a1 + 1429) || !v8)
            && (v9 = *(_DWORD *)(a1 + 1436), v9 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 8))(a1 + 1416, v8 + v9, 0) )
          {
            v10 = *(_DWORD *)(a1 + 1432); /*0x4db47e*/
            v11 = *(_DWORD *)(a1 + 1420); /*0x4db481*/
            *(_DWORD *)(a1 + 1432) = v10 + 1; /*0x4db487*/
            *(_DWORD *)(v11 + 4 * v10) = v20; /*0x4db48e*/
          }
          if ( ++v21 >= (int)pStm ) /*0x4db4a0*/
            goto LABEL_16; /*0x4db4a0*/
        }
      }
    }
  }
  return result; /*0x4db67c*/
}



// ==== 0x004DB690  ObjectClass::SaveToStream_Common  this=FootClass  sig=csp ====
int __stdcall ObjectClass::SaveToStream_Common(
        ObjectClass *this,
        LPPERSISTSTREAM pPStm,
        struct IPersistStreamVtbl *attachedBomb)
{
  IStream *v3; // esi
  ObjectClass *v4; // edi
  int SizeMax; // ebx
  int v6; // edx
  int result; // eax
  int v8; // ebx
  int v9; // edx
  int v10; // ebx
  int (__stdcall ***v11)(_DWORD, void *, ObjectClass **); // edi
  int v12; // edi
  IPersistStream *v13; // ebx

  v3 = (IStream *)pPStm; /*0x4db696*/
  v4 = this; /*0x4db69b*/
  SizeMax = IPersistStream::GetSizeMax((TechnoClass *)this, (int)pPStm, (int)attachedBomb); /*0x4db6a7*/
  if ( SizeMax < 0 ) /*0x4db6ab*/
    return SizeMax; /*0x4db6ab*/
  v6 = *(_DWORD *)v3->__pad_0; /*0x4db6b7*/
  attachedBomb = (struct IPersistStreamVtbl *)v4[8].attachedBomb; /*0x4db6c3*/
  result = (*(int (__stdcall **)(IStream *, struct IPersistStreamVtbl **, int, _DWORD))(v6 + 16))( /*0x4db6c7*/
             v3,
             &attachedBomb,
             4,
             0);
  if ( result < 0 ) /*0x4db6cc*/
    return result; /*0x4db6cc*/
  v8 = 0; /*0x4db6d6*/
  if ( (int)attachedBomb <= 0 ) /*0x4db6da*/
  {
LABEL_6:
    v9 = *(_DWORD *)v3->__pad_0; /*0x4db701*/
    attachedBomb = (struct IPersistStreamVtbl *)v4[8].customSound_controller[3]; /*0x4db713*/
    result = (*(int (__stdcall **)(IStream *, struct IPersistStreamVtbl **, int, _DWORD))(v9 + 16))( /*0x4db717*/
               v3,
               &attachedBomb,
               4,
               0);
    if ( result < 0 ) /*0x4db71c*/
      return result; /*0x4db71c*/
    v10 = 0; /*0x4db726*/
    if ( (int)attachedBomb > 0 ) /*0x4db72a*/
    {
      do /*0x4db73d*/
      {
        result = (*(int (__stdcall **)(IStream *, int, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 16))( /*0x4db73d*/
                   v3,
                   v4[8].customSound_controller[0] + 4 * v10,
                   4,
                   0);
        if ( result < 0 ) /*0x4db742*/
          return result; /*0x4db742*/
      }
      while ( ++v10 < (int)attachedBomb ); /*0x4db73d*/
    }
    v11 = *(int (__stdcall ****)(_DWORD, void *, ObjectClass **))&v4[9].bombVisible; /*0x4db751*/
    pPStm = 0; /*0x4db757*/
    if ( v11 ) /*0x4db761*/
    {
      v12 = (**v11)(v11, &unk_820270, &this); /*0x4db772*/
      if ( v12 >= 0 ) /*0x4db776*/
      {
        v13 = (IPersistStream *)this; /*0x4db794*/
        if ( pPStm ) /*0x4db79a*/
          (*(void (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x4db79f*/
        pPStm = v13; /*0x4db7a2*/
      }
      else
      {
        if ( pPStm ) /*0x4db77e*/
          (*(void (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x4db783*/
        pPStm = 0; /*0x4db786*/
      }
      if ( v12 < 0 && v12 != -2147467262 ) /*0x4db7b0*/
        WinAPI::Wrapper(v12); /*0x4db7b3*/
    }
    OleSaveToStream(pPStm, v3); /*0x4db7be*/
    SizeMax = 0; /*0x4db7c4*/
    if ( pPStm ) /*0x4db7cc*/
      (*(void (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x4db7d1*/
    return SizeMax; /*0x4db7d4*/
  }
  while ( 1 ) /*0x4db6ed*/
  {
    result = (*(int (__stdcall **)(IStream *, int, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 16))( /*0x4db6ed*/
               v3,
               v4[8].fallRate + 4 * v8,
               4,
               0);
    if ( result < 0 ) /*0x4db6f2*/
      return result; /*0x4db7d6*/
    if ( ++v8 >= (int)attachedBomb ) /*0x4db6ff*/
      goto LABEL_6; /*0x4db6ff*/
  }
}



// ==== 0x004DB7E0  FootClass::Destru_vt30  this=FootClass  sig=csp ====
int __thiscall FootClass::Destru_vt30(FootClass *this)
{
  if ( !this->locomotor[0] ) /*0x4db7e3*/
    WinAPI::Wrapper(-2147467261); /*0x4db7f2*/
  return (*(int (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 116))(this->locomotor[0]); /*0x4db803*/
}



// ==== 0x004DB810  TechnoClass::SetPositionAnimated  this=FootClass  sig=csp ====
int __thiscall TechnoClass::SetPositionAnimated(TechnoClass *this, _DWORD *a2)
{
  int *location; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  bool v7; // bl
  int result; // eax

  location = this->?; /*0x4db821*/
  v4 = this->?[0]; /*0x4db823*/
  v5 = this->?[1]; /*0x4db827*/
  v6 = location[2]; /*0x4db82a*/
  v7 = *a2 != v4 || a2[1] != v5 || a2[2] != v6; /*0x4db83d*/
  if ( this->? ) /*0x4db83f*/
  {
    (*((void (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 73))(this, 0); /*0x4db84c*/
    ObjectClass::SetPosition((IUnknown *)this); /*0x4db855*/
    result = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 73))(this, 1); /*0x4db860*/
  }
  else
  {
    result = ObjectClass::SetPosition((IUnknown *)this); /*0x4db86b*/
  }
  if ( v7 ) /*0x4db872*/
  {
    result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x4db878*/
    if ( *(_BYTE *)(result + 1508) ) /*0x4db87e*/
      return FootClass::UpdatePassengerCoords((FootClass *)this); /*0x4db88a*/
  }
  return result; /*0x4db88f*/
}



// ==== 0x004DB8A0  ObjectClass::method_4DB8A0  this=ObjectClass  sig=csp ====
int __thiscall sub_4DB8A0(TechnoClass *this)
{
  int v2; // ebx
  int InstanceCOM; // eax
  int v4; // eax
  LPVOID v5; // esi
  int result; // eax
  LPVOID ppv; // [esp+20h] [ebp-8h] BYREF
  int v8; // [esp+24h] [ebp-4h] BYREF

  v2 = *((_DWORD *)this + 413); /*0x4db8a7*/
  if ( v2 ) /*0x4db8af*/
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 4))(*((_DWORD *)this + 413)); /*0x4db8b4*/
  ppv = 0; /*0x4db8c4*/
  InstanceCOM = CreateInstanceCOM((ObjectClass *)&ppv, (IID *)&g_CLSID_DriveLocomotion, 0, 7u); /*0x4db8cc*/
  if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x4db8da*/
    WinAPI::Wrapper(InstanceCOM); /*0x4db8dd*/
  if ( !ppv ) /*0x4db8e8*/
    WinAPI::Wrapper(-2147467261); /*0x4db8ef*/
  (*(void (__stdcall **)(LPVOID, TechnoClass *))(*(_DWORD *)ppv + 12))(ppv, this); /*0x4db8fc*/
  v8 = 0; /*0x4db903*/
  if ( !ppv ) /*0x4db90d*/
    goto LABEL_13; /*0x4db90d*/
  v4 = StreamClass::Set((StreamClass *)&v8, &ppv); /*0x4db918*/
  if ( v4 < 0 && v4 != -2147467262 ) /*0x4db926*/
    WinAPI::Wrapper(v4); /*0x4db929*/
  if ( !v8 ) /*0x4db934*/
LABEL_13:
    WinAPI::Wrapper(-2147467261); /*0x4db93b*/
  (*(void (__stdcall **)(int, int))(*(_DWORD *)v8 + 12))(v8, v2); /*0x4db949*/
  v5 = (LPVOID)*((_DWORD *)this + 413); /*0x4db94c*/
  result = (int)ppv; /*0x4db952*/
  if ( v5 != ppv ) /*0x4db958*/
  {
    *((_DWORD *)this + 413) = ppv; /*0x4db95c*/
    if ( result ) /*0x4db962*/
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)result + 4))(result); /*0x4db967*/
      result = (int)ppv; /*0x4db96a*/
    }
    if ( v5 ) /*0x4db970*/
    {
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v5 + 8))(v5); /*0x4db975*/
      result = (int)ppv; /*0x4db978*/
    }
  }
  if ( v8 ) /*0x4db983*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x4db988*/
    result = (int)ppv; /*0x4db98b*/
  }
  if ( result ) /*0x4db991*/
    result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x4db996*/
  if ( v2 ) /*0x4db99b*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2); /*0x4db9a0*/
  return result; /*0x4db9a3*/
}



// ==== 0x004DB9B0  FootClass::vt_entry_504  this=FootClass  sig=csp ====
char __thiscall BuildingClass::vt_entry_504(FootClass *this)
{
  int Member; // eax
  int v3; // esi
  int v4; // ebx

  if ( this->movementDestination || this->? ) /*0x4db9bd*/
    return 0; /*0x4dba1f*/
  Member = Team::GetMember((Team *)this, 0); /*0x4db9cb*/
  v3 = Member; /*0x4db9d0*/
  v4 = 0; /*0x4db9d2*/
  if ( Member ) /*0x4db9d6*/
  {
    Member = (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member); /*0x4db9dc*/
    if ( Member == 6 ) /*0x4db9e2*/
      v4 = v3; /*0x4db9e4*/
  }
  LOBYTE(Member) = this->? == 7 && v4 && *(_BYTE *)(*(_DWORD *)(v4 + 1312) + 5801); /*0x4dba03*/
  LOBYTE(Member) = (_BYTE)Member == 0; /*0x4dba0f*/
  return (*((int (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 289))(this, 0, Member); /*0x4dba1d*/
}



// ==== 0x004DBA30  FootClass::vt_entry_548  this=FootClass  sig=csp ====
void FootClass::vt_entry_548(FootClass *this)
{
  ; /*0x4dba30*/
}



// ==== 0x004DBA40  FootClass::vt_entry_54C  this=FootClass  sig=csp ====
void FootClass::vt_entry_54C(FootClass *this)
{
  ; /*0x4dba40*/
}



// ==== 0x004DBA50  TechnoClass::GetTargetCellCenter  this=FootClass  sig=csp ====
int __thiscall TechnoClass::GetTargetCellCenter(TechnoClass *this, int a2)
{
  int *v3; // edi
  int v4; // kr04_4
  int v5; // eax
  int v6; // edx
  int (__thiscall **vtable0)(TechnoClass *, _DWORD *); // eax
  _DWORD v9[3]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v10[12]; // [esp+14h] [ebp-Ch] BYREF

  v3 = (int *)(*(int (__thiscall **)(int, _BYTE *, TechnoClass *))(*(_DWORD *)a2 + 76))(a2, v10, this); /*0x4dba66*/
  v4 = *v3; /*0x4dba73*/
  v5 = v3[1]; /*0x4dba75*/
  v9[2] = 0; /*0x4dba82*/
  v6 = (__int16)(v5 / 256); /*0x4dba95*/
  vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD *))this->RadioClass; /*0x4dba98*/
  v9[0] = ((__int16)(v4 / 256) << 8) + 128; /*0x4dbaa0*/
  v9[1] = (v6 << 8) + 128; /*0x4dbab4*/
  return vtable0[179](this, v9); /*0x4dbabe*/
}



// ==== 0x004DBAD0  FootClass::BeginPowerUpdate  this=FootClass  sig=csp ====
int __thiscall FootClass::BeginPowerUpdate(FootClass *this, int *a2)
{
  double v2; // st7
  __int16 v4; // ax
  int v5; // eax
  AbstractClass *movementDestination; // eax
  int v7; // eax
  AbstractClass *lastDestination; // eax
  int v9; // eax
  TeamClass *team; // eax
  int v11; // eax
  FootClass *nextTeamMember; // eax
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
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
  double v34; // [esp+10h] [ebp-18h]
  double v35; // [esp+10h] [ebp-18h]
  double v36; // [esp+10h] [ebp-18h]
  int v37; // [esp+24h] [ebp-4h]
  int v38; // [esp+24h] [ebp-4h]

  _ESI = this; /*0x4dbade*/
  House::PowerBeginUpdate((TechnoClass *)this, (int)a2); /*0x4dbae1*/
  Checksummer::Add_double((Checksummer *)a2, _ESI->unknown530, _ESI->unknown534); /*0x4dbaf6*/
  v37 = SHIWORD(_ESI->currentMapCoords[0]); /*0x4dbb09*/
  __asm { fild [esp+18h+var_4] } /*0x4dbb10*/
  v38 = SLOWORD(_ESI->currentMapCoords[0]); /*0x4dbb14*/
  __asm /*0x4dbb18*/
  {
    fild [esp+18h+var_4]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+18h+var_18]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v34); /*0x4dbb2d*/
  v4 = Math::RoundToInt(v2); /*0x4dbb35*/
  Checksummer::Add_WORD((Checksummer *)a2, v4); /*0x4dbb3d*/
  __asm /*0x4dbb42*/
  {
    fild dword ptr [esi+570h]
    fild dword ptr [esi+56Ch]
    fild dword ptr [esi+568h]
  }
  __asm
  {
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fld st(3)
    fmul st, st(4)
    faddp st(1), st
    fstp [esp+18h+var_18]; double
    fstp st
    fstp st
    fstp st
  }
  Math::Sqrt(v35); /*0x4dbb70*/
  LOWORD(v5) = Math::RoundToInt(v2); /*0x4dbb78*/
  Power::TimerProcess(v5); /*0x4dbb80*/
  Checksummer::Add_double((Checksummer *)a2, _ESI->currentSpeed_percentage[0], _ESI->currentSpeed_percentage[1]); /*0x4dbb95*/
  Checksummer::Add_double((Checksummer *)a2, _ESI->currentSpeed_multiplier[0], _ESI->currentSpeed_multiplier[1]); /*0x4dbbaa*/
  movementDestination = _ESI->movementDestination; /*0x4dbbaf*/
  if ( movementDestination ) /*0x4dbbb7*/
  {
    v7 = (*((int (__stdcall **)(void **))movementDestination->vtable1 + 4))(&movementDestination->vtable1); /*0x4dbbc0*/
    Power::TimerProcess(v7); /*0x4dbbc6*/
  }
  lastDestination = _ESI->lastDestination; /*0x4dbbcb*/
  if ( lastDestination ) /*0x4dbbd3*/
  {
    v9 = (*((int (__stdcall **)(void **))lastDestination->vtable1 + 4))(&lastDestination->vtable1); /*0x4dbbdc*/
    Power::TimerProcess(v9); /*0x4dbbe2*/
  }
  team = _ESI->team; /*0x4dbbe7*/
  if ( team ) /*0x4dbbef*/
  {
    v11 = (*((int (__stdcall **)(void **))team->? + 4))(&team->?); /*0x4dbbf8*/
    Power::TimerProcess(v11); /*0x4dbbfe*/
  }
  nextTeamMember = _ESI->nextTeamMember; /*0x4dbc03*/
  if ( nextTeamMember ) /*0x4dbc0b*/
  {
    v13 = (*((int (__stdcall **)(void **))nextTeamMember->? + 4))(&nextTeamMember->?); /*0x4dbc14*/
    Power::TimerProcess(v13); /*0x4dbc1a*/
  }
  v14 = _ESI->pathDelayTimer[0]; /*0x4dbc1f*/
  v15 = _ESI->pathDelayTimer[2]; /*0x4dbc25*/
  if ( v14 != -1 ) /*0x4dbc2e*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v14 >= v15 ) /*0x4dbc3a*/
      v15 = 0; /*0x4dbc40*/
    else
      v15 -= *(_DWORD *)&stru_A8EB00.?[416] - v14; /*0x4dbc3c*/
  }
  Power::TimerProcess(v15); /*0x4dbc45*/
  Power::TimerProcess(_ESI->FootClass_field_int_64C); /*0x4dbc53*/
  v16 = _ESI->FootClass_field_timer_650[0]; /*0x4dbc58*/
  v17 = _ESI->FootClass_field_timer_650[2]; /*0x4dbc5e*/
  if ( v16 != -1 ) /*0x4dbc67*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v16 >= v17 ) /*0x4dbc73*/
      v17 = 0; /*0x4dbc79*/
    else
      v17 -= *(_DWORD *)&stru_A8EB00.?[416] - v16; /*0x4dbc75*/
  }
  Power::TimerProcess(v17); /*0x4dbc7e*/
  __asm /*0x4dbc83*/
  {
    fild dword ptr [esi+680h]
    fild dword ptr [esi+67Ch]
    fild dword ptr [esi+678h]
  }
  __asm
  {
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fld st(3)
    fmul st, st(4)
    faddp st(1), st
    fstp [esp+18h+var_18]; double
    fstp st
    fstp st
    fstp st
  }
  Math::Sqrt(v36); /*0x4dbcb1*/
  LOWORD(v18) = Math::RoundToInt(v2); /*0x4dbcb9*/
  v19 = Power::TimerProcess(v18); /*0x4dbcc1*/
  LOBYTE(v19) = _ESI->tubeIndex; /*0x4dbcc6*/
  Power::FinalizeDrain((Power *)a2, v19); /*0x4dbccf*/
  LOBYTE(v20) = _ESI->unknownBool685; /*0x4dbcd4*/
  Power::FinalizeDrain((Power *)a2, v20); /*0x4dbcdd*/
  LOBYTE(v21) = _ESI->unknownBool688; /*0x4dbce2*/
  v22 = Power::FlagProcess((Power *)a2, v21); /*0x4dbceb*/
  LOBYTE(v22) = _ESI->isTeamLeader; /*0x4dbcf0*/
  Power::FlagProcess((Power *)a2, v22); /*0x4dbcf9*/
  LOBYTE(v23) = _ESI->shouldScanForTarget; /*0x4dbcfe*/
  Power::FlagProcess((Power *)a2, v23); /*0x4dbd07*/
  LOBYTE(v24) = _ESI->FootClass_field_bool_68B; /*0x4dbd0c*/
  v25 = Power::FlagProcess((Power *)a2, v24); /*0x4dbd15*/
  LOBYTE(v25) = _ESI->FootClass_field_bool_68C; /*0x4dbd1a*/
  Power::FlagProcess((Power *)a2, v25); /*0x4dbd23*/
  LOBYTE(v26) = _ESI->unknownBool68D; /*0x4dbd28*/
  Power::FlagProcess((Power *)a2, v26); /*0x4dbd31*/
  LOBYTE(v27) = _ESI->FootClass_field_bool_6AF; /*0x4dbd36*/
  v28 = Power::FlagProcess((Power *)a2, v27); /*0x4dbd3f*/
  LOBYTE(v28) = _ESI->FootClass_field_bool_6B0; /*0x4dbd44*/
  Power::FlagProcess((Power *)a2, v28); /*0x4dbd4d*/
  LOBYTE(v29) = _ESI->FootClass_field_bool_6B1; /*0x4dbd52*/
  Power::FlagProcess((Power *)a2, v29); /*0x4dbd5b*/
  LOBYTE(v30) = _ESI->FootClass_field_bool_6B2; /*0x4dbd60*/
  v31 = Power::FlagProcess((Power *)a2, v30); /*0x4dbd69*/
  LOBYTE(v31) = _ESI->FootClass_field_bool_6B3; /*0x4dbd6e*/
  Power::FlagProcess((Power *)a2, v31); /*0x4dbd77*/
  LOBYTE(v32) = _ESI->FootClass_field_bool_6B4; /*0x4dbd7c*/
  return Power::FinalizeDrain((Power *)a2, v32); /*0x4dbd8a*/
}



// ==== 0x004DBDA0  FootClass::CanBeHunted  this=FootClass  sig=csp ====
bool __thiscall FootClass::CanBeHunted(FootClass *this)
{
  if ( !(unsigned __int8)BuildingClass::CheckCellPassability((TechnoClass *)this) ) /*0x4dbda3*/
    return 0; /*0x4dbda3*/
  if ( !*(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3219) ) /*0x4dbdb6*/
    return 1; /*0x4dbdb6*/
  if ( !this->locomotor[0] ) /*0x4dbdc0*/
    WinAPI::Wrapper(-2147467261); /*0x4dbdcf*/
  return !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 128))(this->locomotor[0]); /*0x4dbdeb*/
}



// ==== 0x004DBDF0  FootClass::GetDeployCoords  this=FootClass  sig=csp ====
_DWORD *__thiscall TechnoClass::GetDeployCoords(FootClass *this, _DWORD *a2, int a3)
{
  char tubeIndex; // al
  int v5; // eax
  int v6; // ecx
  int *v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // edi
  _DWORD *v12; // edx
  __int16 v13; // [esp+Ah] [ebp-Eh]
  _BYTE v14[12]; // [esp+Ch] [ebp-Ch] BYREF

  tubeIndex = this->tubeIndex; /*0x4dbdf7*/
  if ( tubeIndex < 0 ) /*0x4dbdff*/
  {
    if ( !this->locomotor[0] ) /*0x4dbe46*/
      WinAPI::Wrapper(-2147467261); /*0x4dbe55*/
    v8 = (int *)(*(int (__stdcall **)(int, _BYTE *))(*(_DWORD *)this->locomotor[0] + 24))(this->locomotor[0], v14); /*0x4dbe68*/
    v9 = *v8; /*0x4dbe6b*/
    v10 = v8[1]; /*0x4dbe6d*/
    v11 = v8[2]; /*0x4dbe70*/
    if ( *v8 == dword_8B3DA8 && v10 == dword_8B3DAC && v11 == dword_8B3DB0 ) /*0x4dbe8a*/
    {
      v12 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))this->TechnoClass + 18))(this, v14); /*0x4dbeae*/
      *a2 = *v12; /*0x4dbeb9*/
      a2[1] = v12[1]; /*0x4dbebe*/
      a2[2] = v12[2]; /*0x4dbec5*/
      return a2; /*0x4dbeb0*/
    }
    else
    {
      *a2 = v9; /*0x4dbe92*/
      a2[1] = v10; /*0x4dbe94*/
      a2[2] = v11; /*0x4dbe97*/
      return a2; /*0x4dbe8c*/
    }
  }
  else
  {
    v5 = *(_DWORD *)(*(_DWORD *)(FootClass_Array.?[3] + 4 * tubeIndex) + 40); /*0x4dbe0d*/
    v6 = (__int16)v5; /*0x4dbe10*/
    v13 = HIWORD(v5); /*0x4dbe13*/
    *a2 = (v6 << 8) + 128; /*0x4dbe2e*/
    a2[1] = (v13 << 8) + 128; /*0x4dbe38*/
    a2[2] = 0; /*0x4dbe3b*/
    return a2; /*0x4dbe17*/
  }
}



// ==== 0x004DBED0  FootClass::LiberateMember  this=FootClass  sig=csp ====
char __userpurge FootClass::LiberateMember@<al>(FootClass *this, int a2@<edi>, int a3, int a4)
{
  int *v4; // ecx
  int *v5; // esi
  _DWORD *v6; // eax
  int *v7; // ecx
  int v8; // edi
  _DWORD *v9; // eax
  int v11; // edi
  _DWORD *v12; // eax
  int v13; // [esp+0h] [ebp-Ch]
  int v14; // [esp+8h] [ebp-4h] BYREF

  v5 = v4; /*0x4dbed2*/
  if ( *(_DWORD *)((*(int (**)(void))(*v4 + 132))() + 1520) ) /*0x4dbedd*/
  {
    a2 = *v5; /*0x4dbee7*/
    v6 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(*v5 + 440))(v5, &v14); /*0x4dbef0*/
    (*(void (__thiscall **)(int *, _DWORD))(a2 + 1260))(v5, *v6); /*0x4dbefb*/
  }
  if ( TechnoClass::ProcessCapture((TechnoClass *)this, a2, 1, v13) ) /*0x4dbf0a*/
  {
    if ( *(_BYTE *)(v5[135] + 492) ) /*0x4dbf19*/
    {
      v7 = (int *)v5[373]; /*0x4dbf23*/
      if ( v7 ) /*0x4dbf2b*/
        TeamClass::LiberateMember_Start(v7, (int)v5, 0xFFFFFFFF, 0); /*0x4dbf32*/
    }
    if ( !(*(unsigned __int8 (__thiscall **)(int *))(*v5 + 84))(v5) ) /*0x4dbf3b*/
      v5[343] = *(_DWORD *)(*(int (__thiscall **)(int *, FootClass **))(*v5 + 440))(v5, &this); /*0x4dbf53*/
    if ( *(_DWORD *)((*(int (__thiscall **)(int *))(*v5 + 132))(v5) + 1520) ) /*0x4dbf63*/
    {
      v8 = *v5; /*0x4dbf6d*/
      v9 = (_DWORD *)(*(int (__thiscall **)(int *, FootClass **))(*v5 + 440))(v5, &this); /*0x4dbf76*/
      (*(void (__thiscall **)(int *, _DWORD))(v8 + 1256))(v5, *v9); /*0x4dbf81*/
    }
    return 1; /*0x4dbf88*/
  }
  else
  {
    if ( *(_DWORD *)((*(int (__thiscall **)(int *))(*v5 + 132))(v5) + 1520) ) /*0x4dbf99*/
    {
      v11 = *v5; /*0x4dbfa3*/
      v12 = (_DWORD *)(*(int (__thiscall **)(int *, FootClass **))(*v5 + 440))(v5, &this); /*0x4dbfac*/
      (*(void (__thiscall **)(int *, _DWORD))(v11 + 1256))(v5, *v12); /*0x4dbfb7*/
    }
    return 0; /*0x4dbfbe*/
  }
}



// ==== 0x004DBFD0  FootClass::vt_entry_4E0  this=FootClass  sig=csp ====
bool __thiscall FootClass::vt_entry_4E0(FootClass *this)
{
  if ( !(*((int (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 254))(this, 0) ) /*0x4dbfd7*/
    return 1; /*0x4dbfe1*/
  if ( *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1588) == -1 ) /*0x4dbff6*/
    return 1; /*0x4dbff8*/
  if ( *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1028) ) /*0x4dc006*/
    return 1; /*0x4dc010*/
  return *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1656) <= 13; /*0x4dbfe3*/
}



// ==== 0x004DC030  FootClass::vt_entry_4F4  this=FootClass  sig=csp ====
int __thiscall FootClass::vt_entry_4F4(FootClass *this)
{
  int result; // eax

  result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 97))(this); /*0x4dc035*/
  if ( result == 15 ) /*0x4dc03e*/
  {
    (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x4dc046*/
    return (*((int (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x4dc054*/
  }
  return result; /*0x4dc05a*/
}



// ==== 0x004DC060  FootClass::CheckTargetCell  this=FootClass  sig=csp ====
int __thiscall FootClass::CheckTargetCell(FootClass *this, int a2, int a3)
{
  AbstractClass *target; // edi
  int result; // eax
  int *v6; // eax
  int v7; // ebp
  int v8; // ebx
  int *TargetCoords; // eax
  int v10; // edx
  int v11; // edi
  int v12; // ebp
  int v13; // ebx
  int v14; // eax
  int *v15; // eax
  char *v16; // edi
  int v17; // edx
  int v18; // [esp-Ch] [ebp-40h]
  int v19; // [esp-Ch] [ebp-40h]
  int v20; // [esp+10h] [ebp-24h] BYREF
  int v21; // [esp+14h] [ebp-20h]
  char *v22; // [esp+18h] [ebp-1Ch]
  int v23; // [esp+1Ch] [ebp-18h] BYREF
  int v24; // [esp+24h] [ebp-10h]
  int v25[3]; // [esp+28h] [ebp-Ch] BYREF

  target = this->?; /*0x4dc069*/
  if ( target || (result = (int)this->movementDestination) != 0 ) /*0x4dc07b*/
  {
    if ( (_BYTE)a2 ) /*0x4dc087*/
      goto LABEL_8; /*0x4dc087*/
    result = g_BuildingLoadQueue_Array.?[1]; /*0x4dc08f*/
    if ( g_BuildingLoadQueue_Array.? != -1 ) /*0x4dc097*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - g_BuildingLoadQueue_Array.? >= g_BuildingLoadQueue_Array.?[1] ) /*0x4dc0a3*/
        return result; /*0x4dc0a3*/
      result = g_BuildingLoadQueue_Array.?[1] - (*(_DWORD *)&stru_A8EB00.?[416] - g_BuildingLoadQueue_Array.?); /*0x4dc0a9*/
    }
    if ( result > 0 ) /*0x4dc0ad*/
    {
LABEL_8:
      if ( target ) /*0x4dc0b5*/
      {
        v6 = (int *)(*((int (__thiscall **)(FootClass *, int *, _DWORD))this->TechnoClass + 192))(this, &v23, 0); /*0x4dc0c6*/
        v7 = *v6; /*0x4dc0cc*/
        v8 = v6[1]; /*0x4dc0d0*/
        v24 = v6[2]; /*0x4dc0db*/
        TargetCoords = TechnoClass::GetTargetCoords((TechnoClass *)this, v25); /*0x4dc0df*/
        v20 = *TargetCoords; /*0x4dc0e8*/
        v21 = TargetCoords[1]; /*0x4dc0ef*/
        v22 = (char *)TargetCoords[2]; /*0x4dc0f6*/
        v10 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372); /*0x4dc106*/
        if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4dc10c*/
          LOWORD(v11) = *(unsigned __int8 *)(v10 + 8); /*0x4dc113*/
        else
          v11 = *(unsigned __int16 *)(v10 + 16); /*0x4dc119*/
        LOBYTE(a2) = (unsigned __int8)((unsigned __int16)v11 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4dc13c*/
        BYTE1(a2) = (unsigned __int8)((unsigned __int16)v11 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4dc154*/
        HIBYTE(v18) = HIBYTE(g_BitMask_Red); /*0x4dc168*/
        LOWORD(v18) = a2; /*0x4dc170*/
        BYTE2(v18) = (unsigned __int8)((unsigned __int16)v11 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4dc173*/
        LOBYTE(result) = DrawTacticalMapLine(v7, v8, v24, *TargetCoords, TargetCoords[1], TargetCoords[2], v18, 0, 0); /*0x4dc19b*/
      }
      else
      {
        v12 = this->?[0]; /*0x4dc1b0*/
        v13 = this->?[1]; /*0x4dc1b6*/
        v14 = *(_DWORD *)&this->__pad_58C[12]; /*0x4dc1bc*/
        v24 = this->?[2]; /*0x4dc1c4*/
        if ( v14 ) /*0x4dc1c8*/
          v15 = (int *)(*(int (__stdcall **)(int *))(**(_DWORD **)(*(_DWORD *)this->__pad_58C + 4 * v14 - 4) + 72))(v25); /*0x4dc1ec*/
        else
          v15 = (int *)(*((int (__stdcall **)(int *))this->movementDestination->vtable0 + 18))(v25); /*0x4dc1d7*/
        v20 = *v15; /*0x4dc1f3*/
        v21 = v15[1]; /*0x4dc1fa*/
        v22 = (char *)v15[2]; /*0x4dc201*/
        LOWORD(a2) = v20 / 256; /*0x4dc211*/
        HIWORD(a2) = v21 / 256; /*0x4dc229*/
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) /*0x4dc25c*/
          && (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v20)->flags[0] & 0x100) != 0 )
        {
          v16 = (char *)FootClass_Array.? + Cell::GetGroundHeight(&v20); /*0x4dc274*/
          v22 = v16; /*0x4dc276*/
        }
        else
        {
          v16 = v22; /*0x4dc27c*/
        }
        if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4dc289*/
          v17 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 3); /*0x4dc293*/
        else
          LOWORD(v17) = *(_WORD *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 6); /*0x4dc2a0*/
        LOBYTE(a2) = (unsigned __int8)((unsigned __int16)v17 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4dc2c1*/
        BYTE1(a2) = (unsigned __int8)((unsigned __int16)v17 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4dc2e2*/
        HIBYTE(v19) = HIBYTE(a3); /*0x4dc2ed*/
        LOWORD(v19) = a2; /*0x4dc2f8*/
        BYTE2(v19) = (unsigned __int8)((unsigned __int16)v17 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4dc2ff*/
        LOBYTE(result) = DrawTacticalMapLine(v12, v13, v24, v20, v21, (int)v16, v19, a3, 0); /*0x4dc323*/
      }
    }
  }
  return result; /*0x4dc1a0*/
}



// ==== 0x004DC340  ObjectClass::DrawFootTargetLine  this=ObjectClass  sig=csp ====
char __thiscall DrawFootTargetLine(TechnoClass *this)
{
  int target; // eax
  int *v3; // eax
  int *TargetCoords; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int *v8; // eax
  int v9; // edx
  int v10; // esi
  int *v11; // eax
  int *v12; // eax
  int *v13; // eax
  int *v14; // eax
  DWORD Time; // esi
  __int16 v16; // ax
  Color v18; // [esp+14h] [ebp-90h] BYREF
  __int16 v19[2]; // [esp+1Ch] [ebp-88h] BYREF
  int v20; // [esp+20h] [ebp-84h]
  int v21; // [esp+28h] [ebp-7Ch] BYREF
  int v22; // [esp+2Ch] [ebp-78h]
  int v23; // [esp+30h] [ebp-74h]
  unsigned __int8 v24[4]; // [esp+34h] [ebp-70h] BYREF
  int v25; // [esp+38h] [ebp-6Ch] BYREF
  int v26; // [esp+3Ch] [ebp-68h]
  int v27; // [esp+40h] [ebp-64h] BYREF
  int v28; // [esp+44h] [ebp-60h]
  int v29; // [esp+48h] [ebp-5Ch] BYREF
  int v30; // [esp+4Ch] [ebp-58h]
  int v31; // [esp+50h] [ebp-54h]
  int v32; // [esp+54h] [ebp-50h]
  int v33; // [esp+58h] [ebp-4Ch] BYREF
  int v34; // [esp+5Ch] [ebp-48h]
  int v35; // [esp+60h] [ebp-44h]
  int v36; // [esp+64h] [ebp-40h]
  int v37; // [esp+68h] [ebp-3Ch] BYREF
  int v38; // [esp+6Ch] [ebp-38h]
  int v39; // [esp+70h] [ebp-34h]
  int v40[4]; // [esp+74h] [ebp-30h] BYREF
  Rect v41; // [esp+84h] [ebp-20h] BYREF
  Rect v42; // [esp+94h] [ebp-10h] BYREF

  v24[0] = -1; /*0x4dc34a*/
  target = this->target; /*0x4dc34f*/
  v24[1] = -1; /*0x4dc355*/
  v24[2] = -1; /*0x4dc35c*/
  LOWORD(v18.Color_field_00) = 0; /*0x4dc361*/
  BYTE2(v18.Color_field_00) = 0; /*0x4dc36b*/
  if ( target ) /*0x4dc370*/
  {
    v3 = (int *)(*(int (__thiscall **)(TechnoClass *, __int16 *, _DWORD))(this->vtable0 + 768))(this, v19, 0); /*0x4dc38f*/
    v37 = *v3; /*0x4dc397*/
    v38 = v3[1]; /*0x4dc39e*/
    v39 = v3[2]; /*0x4dc3ac*/
    TargetCoords = TechnoClass::GetTargetCoords(this, (int *)v19); /*0x4dc3b0*/
    v21 = *TargetCoords; /*0x4dc3b7*/
    v22 = TargetCoords[1]; /*0x4dc3be*/
    v5 = TargetCoords[2]; /*0x4dc3c2*/
LABEL_11:
    v23 = v5; /*0x4dc498*/
    goto LABEL_12; /*0x4dc498*/
  }
  if ( !*((_DWORD *)this + 361) ) /*0x4dc37a*/
    return target; /*0x4dc37a*/
  v37 = this->location[0]; /*0x4dc3d6*/
  v38 = this->location[1]; /*0x4dc3dd*/
  v6 = *((_DWORD *)this + 358); /*0x4dc3e1*/
  v39 = this->location[2]; /*0x4dc3ec*/
  if ( v6 ) /*0x4dc3f0*/
    v7 = *(_DWORD *)(*((_DWORD *)this + 355) + 4 * v6 - 4); /*0x4dc406*/
  else
    v7 = *((_DWORD *)this + 361); /*0x4dc3f2*/
  v8 = (int *)(*(int (__stdcall **)(__int16 *))(*(_DWORD *)v7 + 72))(v19); /*0x4dc411*/
  v21 = *v8; /*0x4dc418*/
  v22 = v8[1]; /*0x4dc41f*/
  v23 = v8[2]; /*0x4dc426*/
  v19[0] = v21 / 256; /*0x4dc436*/
  v19[1] = v22 / 256; /*0x4dc44e*/
  if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, v19) /*0x4dc481*/
    && (Coord::To_Cell((Coord *)&dword_87F7E8, &v21)->flags & 0x100) != 0 )
  {
    v5 = dword_8B3DF4 + Cell::GetGroundHeight(&v21); /*0x4dc492*/
    goto LABEL_11; /*0x4dc492*/
  }
LABEL_12:
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v37, &v27); /*0x4dc49c*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v21, &v25); /*0x4dc4c1*/
  v9 = this->owner + 22265; /*0x4dc4de*/
  v28 += dword_886FA4; /*0x4dc4e4*/
  v26 += dword_886FA4; /*0x4dc4e8*/
  LOWORD(v18.Color_field_00) = *(_WORD *)v9; /*0x4dc4f4*/
  BYTE2(v18.Color_field_00) = *(_BYTE *)(v9 + 2); /*0x4dc504*/
  v20 = v28 - 2; /*0x4dc524*/
  *(_DWORD *)v19 = v27 - 2; /*0x4dc55d*/
  v10 = (LOBYTE(v18.Color_field_00) >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4dc568*/
      | (BYTE1(v18.Color_field_00) >> g_BitMask_Blue << g_BitMask_Green)
      | (BYTE2(v18.Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
  v11 = Rect::Construct(&v41, v19, 3, 3); /*0x4dc56f*/
  v29 = *v11; /*0x4dc578*/
  v30 = v11[1]; /*0x4dc581*/
  v31 = v11[2]; /*0x4dc588*/
  v32 = v11[3]; /*0x4dc59a*/
  v12 = ClipRectIntersection(&v42, &DSurface_ViewBounds.field_0, &v29, 0, 0); /*0x4dc5a4*/
  v33 = *v12; /*0x4dc5ab*/
  v34 = v12[1]; /*0x4dc5b2*/
  v35 = v12[2]; /*0x4dc5b9*/
  v36 = v12[3]; /*0x4dc5c6*/
  (*(void (__thiscall **)(AudioStream *, int *, int))(*(_DWORD *)DSurface_Composite->__pad_0 + 20))( /*0x4dc5d2*/
    DSurface_Composite,
    &v33,
    v10);
  v20 = v26 - 2; /*0x4dc5e9*/
  *(_DWORD *)v19 = v25 - 2; /*0x4dc5f7*/
  v13 = Rect::Construct(&v42, v19, 3, 3); /*0x4dc5fb*/
  v33 = *v13; /*0x4dc604*/
  v34 = v13[1]; /*0x4dc60d*/
  v35 = v13[2]; /*0x4dc614*/
  v36 = v13[3]; /*0x4dc626*/
  v14 = ClipRectIntersection(&v41, &DSurface_ViewBounds.field_0, &v33, 0, 0); /*0x4dc630*/
  v29 = *v14; /*0x4dc638*/
  v30 = v14[1]; /*0x4dc63f*/
  v31 = v14[2]; /*0x4dc646*/
  v32 = v14[3]; /*0x4dc653*/
  (*(void (__thiscall **)(AudioStream *, int *, int))(*(_DWORD *)DSurface_Composite->__pad_0 + 20))( /*0x4dc65e*/
    DSurface_Composite,
    &v29,
    v10);
  v40[1] = dword_886FA4; /*0x4dc672*/
  v40[0] = DSurface_ViewBounds.field_0; /*0x4dc67a*/
  v40[2] = dword_886FA8; /*0x4dc683*/
  v40[3] = dword_886FAC; /*0x4dc690*/
  LOBYTE(target) = ClipLine(&v27, &v25, v40); /*0x4dc694*/
  if ( (_BYTE)target ) /*0x4dc69b*/
  {
    Time = timeGetTime(); /*0x4dc6a7*/
    v16 = Time & 0x3FF; /*0x4dc6a9*/
    if ( (Time & 0x3FF & 0x200) == 0 ) /*0x4dc6b1*/
    {
      if ( (v16 & 0x100) != 0 ) /*0x4dc6b6*/
        LOBYTE(v16) = ~(_BYTE)Time; /*0x4dc6b8*/
      Color::Lerp(&v18, v16, v24); /*0x4dc6cc*/
    }
    LOBYTE(target) = (*(char (__thiscall **)(AudioStream *, int *, int *, int, void *, int, _DWORD))(*(_DWORD *)DSurface_Composite->__pad_0 + 76))( /*0x4dc747*/
                       DSurface_Composite,
                       &v27,
                       &v25,
                       (LOBYTE(v18.Color_field_00) >> g_BitShift_Green_0 << g_BitShift_Red)
                     | (BYTE1(v18.Color_field_00) >> g_BitMask_Blue << g_BitMask_Green)
                     | (BYTE2(v18.Color_field_00) >> g_BitMask_Red << g_BitShift_Blue),
                       &unk_822540,
                       ((signed int)-Time >> 5) & 0xF,
                       0);
  }
  return target; /*0x4dc74a*/
}



// ==== 0x004DC760  LocomotionClass::GetSpeedMultiplier  this=LocomotionClass  sig=csp ====
int __thiscall LocomotionClass::GetSpeedMultiplier(LocomotionClass *this)
{
  int result; // eax

  result = *((_DWORD *)this + 373); /*0x4dc760*/
  if ( result ) /*0x4dc768*/
    return *(_DWORD *)(result + 36); /*0x4dc76a*/
  return result; /*0x4dc77d*/
}



// ==== 0x004DC790  FootClass::Destru_vt311  this=FootClass  sig=csp ====
bool __thiscall FootClass::Destru_vt311(FootClass *this)
{
  bool result; // al
  TeamClass *team; // ecx
  AbstractClass *movementDestination; // ecx
  _DWORD *v5; // eax
  _BYTE v6[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( !this->? ) /*0x4dc796*/
    return 0; /*0x4dc7a0*/
  team = this->team; /*0x4dc7a7*/
  if ( !team || (result = TechnoClass::IsWaypointHidden((TechnoClass *)team)) ) /*0x4dc7b1*/
  {
    result = 1; /*0x4dc7f6*/
    if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3220) ) /*0x4dc7c9*/
    {
      movementDestination = this->movementDestination; /*0x4dc7d3*/
      if ( movementDestination ) /*0x4dc7db*/
      {
        v5 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))movementDestination->vtable0 + 18))( /*0x4dc7e4*/
                         movementDestination,
                         v6);
        if ( (unsigned __int8)IsCoordVisibleMap((ObjectClass *)&stru_87F5F0.__pad_58[416], v5) ) /*0x4dc7ed*/
          return 0; /*0x4dc7d1*/
      }
    }
  }
  return result; /*0x4dc7a2*/
}



// ==== 0x004DC810  FootClass::SetBuildingType  this=FootClass  sig=csp ====
int __thiscall FootClass::SetBuildingType(FootClass *this, int a2, char a3)
{
  int result; // eax
  _DWORD *Element; // eax
  int v6; // [esp+10h] [ebp+8h]

  result = a2; /*0x4dc810*/
  if ( a2 == -1 ) /*0x4dc81d*/
  {
    this->planningPathIdx = -1; /*0x4dc888*/
    this->waypointIndex = 0; /*0x4dc892*/
    *(_DWORD *)this->unknownShort528 = 0; /*0x4dc898*/
  }
  else
  {
    this->planningPathIdx = a2; /*0x4dc823*/
    this->waypointIndex = a3; /*0x4dc829*/
    Element = (_DWORD *)Array::GetElement(*(Array **)&dword_A83D4C->__pad_140[4 * a2 + 208], a3); /*0x4dc840*/
    LOWORD(v6) = *Element / 256; /*0x4dc855*/
    HIWORD(v6) = Element[1] / 256; /*0x4dc869*/
    result = v6; /*0x4dc86e*/
    *(_DWORD *)this->unknownShort528 = v6; /*0x4dc872*/
  }
  *(_DWORD *)this->unknownShort524 = 0; /*0x4dc8ac*/
  return result; /*0x4dc8b2*/
}



// ==== 0x004DC8C0  BuildingClass::ValidateFoundation_0  this=TechnoClass  sig=csp ====
int __userpurge BuildingClass::ValidateFoundation_0@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int *a4,
        int a5,
        char a6)
{
  int result; // eax
  int v8; // ecx
  int v9; // eax
  AbstractClass *firstObject; // ebp
  void *v11; // edi
  int v12; // eax
  int v13; // ebx
  #375 *v14; // eax
  int v15; // ebx
  char IsAlliedWith; // al
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // ebp
  _DWORD *v23; // edi
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // edx
  int v28; // eax
  _DWORD *v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // ecx
  int v36; // eax
  int v37; // eax
  int v38; // ebp
  int v39; // ebx
  int v40; // eax
  int v41; // edx
  char v42; // [esp+Eh] [ebp-88h]
  int TileIndex; // [esp+Eh] [ebp-88h]
  int v44; // [esp+12h] [ebp-84h]
  char v47; // [esp+46h] [ebp-50h]
  char v48; // [esp+46h] [ebp-50h]
  char v49; // [esp+4Fh] [ebp-47h]
  char v50; // [esp+50h] [ebp-46h]
  char v51; // [esp+51h] [ebp-45h]
  int v52; // [esp+52h] [ebp-44h]
  int v53; // [esp+56h] [ebp-40h] BYREF
  __int16 v54[2]; // [esp+5Ah] [ebp-3Ch] BYREF
  __int16 v55[2]; // [esp+5Eh] [ebp-38h] BYREF
  int v56; // [esp+62h] [ebp-34h]
  _DWORD *v57; // [esp+66h] [ebp-30h]
  int v58; // [esp+6Ah] [ebp-2Ch]
  __int16 v59[2]; // [esp+6Eh] [ebp-28h] BYREF
  int v60; // [esp+72h] [ebp-24h]
  __int16 v61[2]; // [esp+76h] [ebp-20h] BYREF
  int v62; // [esp+7Ah] [ebp-1Ch]
  __int16 v63[2]; // [esp+7Eh] [ebp-18h] BYREF
  __int16 v64[2]; // [esp+82h] [ebp-14h] BYREF
  int v65; // [esp+86h] [ebp-10h]
  _UNKNOWN *retaddr; // [esp+96h] [ebp+0h] BYREF
  int *v67; // [esp+9Ah] [ebp+4h]
  int *v68; // [esp+9Ah] [ebp+4h]

  LOBYTE(result) = 0; /*0x4dc8c3*/
  if ( *(_BYTE *)(a1 + 1072) ) /*0x4dc8c9*/
    *(_BYTE *)(a1 + 1082) = 1; /*0x4dc8d3*/
  if ( !a4 ) /*0x4dc8e0*/
    goto LABEL_45; /*0x4dc8e0*/
  WaypointClass::FindOrCreate(dword_A83D4C->__pad_0, (int)a4, (unsigned int *)(a1 + 1312), (_BYTE *)(a1 + 1670)); /*0x4dc8fd*/
  v8 = a4[2]; /*0x4dc904*/
  v9 = a4[1]; /*0x4dc907*/
  *(_DWORD *)v63 = *a4; /*0x4dc90a*/
  v65 = v8; /*0x4dc912*/
  *(_DWORD *)v64 = v9; /*0x4dc91c*/
  firstObject = (AbstractClass *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v63)->firstObject; /*0x4dc925*/
  v11 = AbstractClass::IsTechnoType(firstObject); /*0x4dc932*/
  v12 = *(_DWORD *)v64 / 256; /*0x4dc953*/
  LOWORD(v67) = *(_DWORD *)v63 / 256; /*0x4dc956*/
  HIWORD(v67) = *(_DWORD *)v64 / 256; /*0x4dc95b*/
  *(_DWORD *)(a1 + 1320) = v67; /*0x4dc969*/
  HIWORD(v67) = v12; /*0x4dc975*/
  v51 = g_MoveFeedback; /*0x4dc980*/
  g_MoveFeedback = 0; /*0x4dc984*/
  *(_DWORD *)v61 = v67; /*0x4dc98b*/
  if ( !v11 ) /*0x4dc994*/
    goto LABEL_29; /*0x4dc994*/
  v13 = (*(int (__thiscall **)(int, AbstractClass *, int))(*(_DWORD *)a1 + 116))(a1, firstObject, 1); /*0x4dc9aa*/
  v14 = (#375 *)*((_DWORD *)v11 + 135); /*0x4dc9ac*/
  v53 = v13; /*0x4dc9b2*/
  if ( !(unsigned __int8)HouseClass::IsAlliedWith((#375 *)dword_A83D4C, v14) ) /*0x4dc9be*/
  {
    if ( v13 != 8 && v13 != 7 && v13 != 1 && v13 != 2 ) /*0x4dcac6*/
    {
LABEL_22:
      v17 = (*(int (__thiscall **)(int, AbstractClass *, int))(*(_DWORD *)a1 + 116))(a1, firstObject, 1); /*0x4dca81*/
      result = (*(int (__thiscall **)(int, int, AbstractClass *, int))(*(_DWORD *)a1 + 324))(a1, v17, firstObject, 1); /*0x4dca93*/
      *(_DWORD *)(a1 + 1316) = 0; /*0x4dcaa9*/
      goto LABEL_42; /*0x4dcaaf*/
    }
    goto LABEL_27; /*0x4dcac6*/
  }
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)v11 + 44))(v11) == 6 ) /*0x4dc9ce*/
  {
    if ( !*(_BYTE *)(*((_DWORD *)v11 + 328) + 5801) /*0x4dca0a*/
      || *(_DWORD *)(a1 + 108) >= *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 160)
      || (v49 = 1, (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 44))(a1) == 15) )
    {
      v49 = 0; /*0x4dca0c*/
    }
    if ( *(_BYTE *)(*((_DWORD *)v11 + 328) + 5802) ) /*0x4dca17*/
    {
      v15 = *(_DWORD *)(a1 + 764); /*0x4dca23*/
      if ( v15 < *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1668) && v15 != -1 ) /*0x4dca3c*/
      {
        v13 = v53; /*0x4dca3e*/
        v50 = 1; /*0x4dca42*/
        goto LABEL_17; /*0x4dca47*/
      }
      v13 = v53; /*0x4dca49*/
    }
    v50 = 0; /*0x4dca4d*/
LABEL_17:
    IsAlliedWith = HouseClass::IsAlliedWith(*((#375 **)v11 + 135), (#375 *)dword_A83D4C); /*0x4dca52*/
    if ( (v49 || v50) && IsAlliedWith && v13 != 7 && v13 != 8 ) /*0x4dca7f*/
      goto LABEL_22; /*0x4dca7f*/
  }
LABEL_27:
  v53 = 0; /*0x4dcac8*/
  v44 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1460); /*0x4dcafd*/
  v42 = BYTE1(*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v61) + 80)) & 1; /*0x4dcb19*/
  v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1); /*0x4dcb1a*/
  TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v61, *(_DWORD *)(v18 + 1460), v42); /*0x4dcb36*/
  v19 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1); /*0x4dcb3b*/
  v20 = *LayerClass::Pathfinding_Find( /*0x4dcb5c*/
           &stru_87F5F0.__pad_58[416],
           (int)v61,
           v59,
           v61,
           *(_DWORD *)(v19 + 1660),
           TileIndex,
           v44,
           0,
           1,
           1,
           0,
           1,
           0,
           1,
           (__int16 *)&v53,
           0,
           0);
  *(_DWORD *)v59 = v20; /*0x4dcb65*/
  if ( v20 != g_FootClass_Pool ) /*0x4dcb6d*/
  {
    LOWORD(v68) = v20 - v61[0]; /*0x4dcb7c*/
    HIWORD(v68) = v59[1] - v61[1]; /*0x4dcb87*/
    *(_DWORD *)(a1 + 1316) = v68; /*0x4dcb90*/
  }
LABEL_29:
  v21 = (*(int (__thiscall **)(int, __int16 *, _DWORD, int, int, int))(*(_DWORD *)a1 + 112))(a1, v61, 0, 1, a3, a2); /*0x4dcb9b*/
  v22 = *(_DWORD *)(a1 + 1316); /*0x4dcbab*/
  *(_DWORD *)v61 = v22; /*0x4dcbb9*/
  v54[0] = v22 + v63[0]; /*0x4dcbc3*/
  *(_DWORD *)v55 = v21; /*0x4dcbce*/
  v54[1] = HIWORD(v22) + v63[1]; /*0x4dcbd2*/
  v23 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v54); /*0x4dcbf4*/
  v57 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v63); /*0x4dcc01*/
  *(_DWORD *)v59 = (*(int (__thiscall **)(int, __int16 *, _DWORD, int))(*(_DWORD *)a1 + 112))(a1, v54, 0, 1); /*0x4dcc13*/
  v24 = v57[80] >> 8; /*0x4dcc21*/
  LOBYTE(v24) = v24 & 1; /*0x4dcc24*/
  v25 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 132))(a1, v24); /*0x4dcc27*/
  v26 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v64, *(_DWORD *)(v25 + 1460), v47); /*0x4dcc3e*/
  v27 = v23[80]; /*0x4dcc43*/
  *(_DWORD *)v61 = v26; /*0x4dcc49*/
  v48 = BYTE1(v27) & 1; /*0x4dcc57*/
  v28 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1); /*0x4dcc58*/
  v62 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v55, *(_DWORD *)(v28 + 1460), v48); /*0x4dcc78*/
  v29 = (_DWORD *)(*(int (__thiscall **)(int, _UNKNOWN **))(*(_DWORD *)a1 + 76))(a1, &retaddr); /*0x4dcc83*/
  LOWORD(v56) = *v29 / 256; /*0x4dcc96*/
  HIWORD(v56) = v29[1] / 256; /*0x4dccae*/
  v30 = *(_DWORD *)a1; /*0x4dccb7*/
  v58 = v56; /*0x4dccb9*/
  v31 = (*(int (__thiscall **)(int, _DWORD))(v30 + 188))(a1, 0); /*0x4dccbd*/
  v32 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 132))(a1, v31); /*0x4dccc8*/
  v33 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v59, *(_DWORD *)(v32 + 1460), 0); /*0x4dccdf*/
  v34 = *((char *)v23 + 283); /*0x4dcce4*/
  v57 = (_DWORD *)v33; /*0x4dcceb*/
  v58 = (*(int (__thiscall **)(int, _DWORD *, int, int, _DWORD))(*(_DWORD *)a1 + 428))( /*0x4dcd10*/
          a1,
          v23,
          -1,
          v34 + 4 * ((v23[80] >> 8) & 1),
          0);
  v35 = abs16(SHIWORD(v22)); /*0x4dcd1f*/
  v36 = abs16(v22); /*0x4dcd24*/
  if ( v36 <= v35 ) /*0x4dcd28*/
    v36 = v35; /*0x4dcd2a*/
  v37 = v36 + 3; /*0x4dcd2c*/
  v38 = 5; /*0x4dcd2f*/
  if ( v37 <= 5 ) /*0x4dcd37*/
    v38 = v37; /*0x4dcd39*/
  v39 = *(_DWORD *)v55; /*0x4dcd3b*/
  if ( *(_DWORD *)v55 != *(_DWORD *)v59 && a6 /*0x4dcdaf*/
    || v58
    || v60 != *(_DWORD *)v61
    || v56 != v60
    || a6
    && (v40 = v23[80] >> 8,
        v41 = v57[80] >> 8,
        LOBYTE(v41) = v41 & 1,
        LOBYTE(v40) = v40 & 1,
        Pathfinding::CalcDistance((int)&stru_87E790.__pad_D8[80], v54, v63, a1, v40, v41, -1) > v38) )
  {
    result = (*(int (__thiscall **)(int, int, __int16 *))(*(_DWORD *)a1 + 320))(a1, v39, v63); /*0x4dcdff*/
    *(_DWORD *)(a1 + 1316) = 0; /*0x4dce15*/
  }
  else
  {
    result = (*(int (__thiscall **)(int, int, __int16 *))(*(_DWORD *)a1 + 320))(a1, v39, v54); /*0x4dcdcf*/
    *(_DWORD *)(a1 + 1320) = v52; /*0x4dcdd9*/
  }
LABEL_42:
  if ( v51 ) /*0x4dce23*/
    g_MoveFeedback = 1; /*0x4dce25*/
  if ( !(_BYTE)result ) /*0x4dce2e*/
  {
LABEL_45:
    *(_DWORD *)(a1 + 1312) = -1; /*0x4dce30*/
    *(_BYTE *)(a1 + 1670) = 0; /*0x4dce58*/
    *(_DWORD *)(a1 + 1316) = 0; /*0x4dce5f*/
    *(_DWORD *)(a1 + 1320) = 0; /*0x4dce65*/
  }
  *(_BYTE *)(a1 + 1082) = 0; /*0x4dce6b*/
  return result; /*0x4dce72*/
}



// ==== 0x004DCE80  Cell::IsValidDestination  this=Cell  sig=csp ====
bool __thiscall Cell::IsValidDestination(Cell *this, __int16 *a2)
{
  int v4; // eax
  int GroundHeight; // eax
  int v6; // edx
  int v7; // ecx
  _DWORD *v8; // eax
  int Cell_field_0x0; // edx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  __int16 v14[2]; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v15[3]; // [esp+10h] [ebp-18h] BYREF
  _DWORD v16[3]; // [esp+1Ch] [ebp-Ch] BYREF
  __int16 *v17; // [esp+2Ch] [ebp+4h]

  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], a2, 1) ) /*0x4dce93*/
    return 0; /*0x4dce93*/
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x4dcea7*/
  {
    if ( *((_BYTE *)this + 1050) ) /*0x4dcea9*/
    {
      v4 = (*a2 << 8) + 128; /*0x4dceca*/
      v15[1] = (a2[1] << 8) + 128; /*0x4dcecf*/
      v15[0] = v4; /*0x4dced9*/
      v15[2] = 0; /*0x4dcedd*/
      GroundHeight = Cell::GetGroundHeight(v15); /*0x4dcee5*/
      v6 = a2[1]; /*0x4dceed*/
      v7 = (*a2 << 8) + 128; /*0x4dcef4*/
      v16[2] = GroundHeight; /*0x4dcefa*/
      v16[0] = v7; /*0x4dcf0b*/
      v16[1] = (v6 << 8) + 128; /*0x4dcf15*/
      if ( (unsigned __int8)Cell::IsPassable(v16) ) /*0x4dcf19*/
        return 0; /*0x4dcf19*/
    }
  }
  v8 = (_DWORD *)(*(int (__thiscall **)(Cell *, _DWORD *, _DWORD))(this->Cell_field_0x0 + 76))(this, v16, 0); /*0x4dcf31*/
  LOWORD(v17) = *v8 / 256; /*0x4dcf4a*/
  Cell_field_0x0 = this->Cell_field_0x0; /*0x4dcf5b*/
  HIWORD(v17) = v8[1] / 256; /*0x4dcf60*/
  *(_DWORD *)v14 = v17; /*0x4dcf69*/
  v10 = (*(int (__thiscall **)(Cell *))(Cell_field_0x0 + 188))(this); /*0x4dcf6f*/
  v11 = (*(int (__thiscall **)(Cell *, int))(this->Cell_field_0x0 + 132))(this, v10); /*0x4dcf7a*/
  if ( !MapSeed::CheckTileMatch((MapSeed *)&stru_87F5F0.__pad_58[416], v14, a2, *(_DWORD *)(v11 + 1460), 0, 0, 0) ) /*0x4dcf92*/
    return 0; /*0x4dcf92*/
  v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x4dcfa1*/
  return v12[59] == 5 /*0x4dcfc7*/
      && !(*(int (__thiscall **)(Cell *, _DWORD *, int, int, _DWORD, int))(this->Cell_field_0x0 + 428))(
            this,
            v12,
            -1,
            -1,
            0,
            1);
}



// ==== 0x004DCFE0  FootClass::MoveToTiberium  this=FootClass  sig=csp ====
char __thiscall FootClass::MoveToTiberium(FootClass *this, int a2, int a3)
{
  _DWORD *v4; // eax
  void (__thiscall **vtable0)(FootClass *, void *, int); // edi
  void *v7; // eax
  _BYTE v8[12]; // [esp+Ch] [ebp-Ch] BYREF

  if ( !this->movementDestination ) /*0x4dcfe7*/
  {
    a3 = *(_DWORD *)(*((int (__thiscall **)(FootClass *, int *, int, int))this->TechnoClass + 206))(this, &a2, a2, a3); /*0x4dd017*/
    if ( a3 != g_FootClass_Pool ) /*0x4dd01b*/
    {
      v4 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))this->TechnoClass + 18))(this, v8); /*0x4dd034*/
      if ( a3 == __PAIR32__(v4[1] / 256, *v4 / 256) ) /*0x4dd05d*/
        return 1; /*0x4dd06d*/
      vtable0 = (void (__thiscall **)(FootClass *, void *, int))this->TechnoClass; /*0x4dd070*/
      v7 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x4dd07e*/
      vtable0[288](this, v7, 1); /*0x4dd086*/
    }
  }
  return 0; /*0x4dd066*/
}



// ==== 0x004DD0A0  FootClass::FindMoveTarget  this=FootClass  sig=csp ====
int *__thiscall FootClass::FindMoveTarget(FootClass *this, int *a2, int a3, int a4)
{
  _DWORD *v5; // eax
  int v7; // ebp
  int v8; // edi
  int v9; // esi
  int v10; // eax
  Building *v11; // eax
  int NthOfType; // eax
  Building *v13; // eax
  int v14; // eax
  Building *v15; // eax
  int v16; // eax
  Building *v17; // eax
  int v18; // eax
  __int16 v19[2]; // [esp+4h] [ebp-38h] BYREF
  int v20; // [esp+8h] [ebp-34h]
  int v21; // [esp+Ch] [ebp-30h]
  int v22; // [esp+10h] [ebp-2Ch]
  int i; // [esp+14h] [ebp-28h]
  int v24; // [esp+18h] [ebp-24h]
  int v25; // [esp+1Ch] [ebp-20h]
  int v26; // [esp+20h] [ebp-1Ch]
  int v27; // [esp+24h] [ebp-18h]
  __int16 v28[3]; // [esp+28h] [ebp-14h] BYREF
  int v29; // [esp+2Eh] [ebp-Eh] BYREF
  int v30; // [esp+32h] [ebp-Ah]

  v20 = g_FootClass_Pool; /*0x4dd0ab*/
  v5 = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *))this->TechnoClass + 18))(this, (char *)&v29 + 2); /*0x4dd0b6*/
  v19[0] = *v5 / 256; /*0x4dd0c9*/
  v19[1] = v5[1] / 256; /*0x4dd0e1*/
  *(_DWORD *)v28 = *(_DWORD *)v19; /*0x4dd0ea*/
  if ( *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v28) + 59) == 5 ) /*0x4dd100*/
  {
    *a2 = *(_DWORD *)v28; /*0x4dd10b*/
    return a2; /*0x4dd102*/
  }
  else
  {
    v7 = 1; /*0x4dd119*/
    v8 = -1; /*0x4dd11e*/
    if ( a3 > 1 ) /*0x4dd123*/
    {
      v9 = -1; /*0x4dd12a*/
      v26 = -1; /*0x4dd12d*/
      do /*0x4dd131*/
      {
        if ( v9 <= v7 ) /*0x4dd133*/
        {
          v10 = -v7; /*0x4dd13b*/
          for ( i = -v7; ; LOWORD(v10) = i ) /*0x4dd13d*/
          {
            LOWORD(v30) = v10; /*0x4dd14f*/
            LOWORD(v21) = v9 + v28[0]; /*0x4dd15d*/
            HIWORD(v21) = v10 + v28[1]; /*0x4dd162*/
            *(_DWORD *)v19 = v21; /*0x4dd16f*/
            if ( Cell::IsValidDestination((Cell *)this, v19) ) /*0x4dd176*/
            {
              v11 = (Building *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x4dd189*/
              NthOfType = Building::GetNthOfType(v11); /*0x4dd190*/
              if ( NthOfType > v8 ) /*0x4dd197*/
              {
                v8 = NthOfType; /*0x4dd199*/
                v20 = *(_DWORD *)v19; /*0x4dd19f*/
              }
            }
            LOWORD(v22) = v9 + v28[0]; /*0x4dd1b1*/
            HIWORD(v22) = v28[1] + v7; /*0x4dd1b6*/
            *(_DWORD *)v19 = v22; /*0x4dd1c6*/
            if ( Cell::IsValidDestination((Cell *)this, v19) ) /*0x4dd1ca*/
            {
              v13 = (Building *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x4dd1dd*/
              v14 = Building::GetNthOfType(v13); /*0x4dd1e4*/
              if ( v14 > v8 ) /*0x4dd1eb*/
              {
                v8 = v14; /*0x4dd1f1*/
                v20 = *(_DWORD *)v19; /*0x4dd1f3*/
              }
            }
            LOWORD(v27) = i; /*0x4dd200*/
            LOWORD(v24) = v28[0] + i; /*0x4dd20f*/
            HIWORD(v24) = v9 + v28[1]; /*0x4dd21b*/
            *(_DWORD *)v19 = v24; /*0x4dd227*/
            if ( Cell::IsValidDestination((Cell *)this, v19) ) /*0x4dd22b*/
            {
              v15 = (Building *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x4dd23e*/
              v16 = Building::GetNthOfType(v15); /*0x4dd245*/
              if ( v16 > v8 ) /*0x4dd24c*/
              {
                v8 = v16; /*0x4dd252*/
                v20 = *(_DWORD *)v19; /*0x4dd254*/
              }
            }
            LOWORD(v25) = v28[0] + v7; /*0x4dd266*/
            HIWORD(v25) = v9 + v28[1]; /*0x4dd26b*/
            *(_DWORD *)v19 = v25; /*0x4dd278*/
            if ( Cell::IsValidDestination((Cell *)this, v19) ) /*0x4dd27f*/
            {
              v17 = (Building *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x4dd292*/
              v18 = Building::GetNthOfType(v17); /*0x4dd299*/
              if ( v18 > v8 ) /*0x4dd2a0*/
              {
                v8 = v18; /*0x4dd2a6*/
                v20 = *(_DWORD *)v19; /*0x4dd2a8*/
              }
            }
            if ( ++v9 > v7 ) /*0x4dd2af*/
              break; /*0x4dd2af*/
          }
          if ( v8 != -1 ) /*0x4dd2b8*/
            break; /*0x4dd2b8*/
          v9 = v26; /*0x4dd2ba*/
        }
        ++v7; /*0x4dd2c2*/
        v26 = --v9; /*0x4dd2c6*/
      }
      while ( v7 < a3 ); /*0x4dd131*/
    }
    *a2 = v20; /*0x4dd2d1*/
    return a2; /*0x4dd2d1*/
  }
}



// ==== 0x004DD890  BuildingClass::Validate  this=BuildingClass  sig=csp ====
int *__thiscall BuildingClass::Validate(BuildingClass *this, int *a2, int a3)
{
  _DWORD *v4; // eax
  int v6; // ebx
  int v7; // ebp
  int i; // esi
  __int16 v9[2]; // [esp+4h] [ebp-18h] BYREF
  int v10; // [esp+8h] [ebp-14h]
  __int16 v11[2]; // [esp+Ch] [ebp-10h] BYREF
  char v12[12]; // [esp+10h] [ebp-Ch] BYREF

  v10 = g_FootClass_Pool; /*0x4dd89b*/
  v4 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 18))(this, v12); /*0x4dd8a6*/
  v9[0] = *v4 / 256; /*0x4dd8bd*/
  v9[1] = v4[1] / 256; /*0x4dd8d5*/
  *(_DWORD *)v11 = *(_DWORD *)v9; /*0x4dd8de*/
  if ( (unsigned __int8)BuildingClass::ValidateCell(this, v11, 0, 0) ) /*0x4dd8e5*/
  {
    *a2 = *(_DWORD *)v11; /*0x4dd8f7*/
    return a2; /*0x4dd8ee*/
  }
  else
  {
    v6 = 1; /*0x4dd904*/
    if ( a3 > 1 ) /*0x4dd90b*/
    {
      v7 = -1; /*0x4dd913*/
      do /*0x4dd9d5*/
      {
        for ( i = v7; i <= v6; ++i ) /*0x4dd91a*/
        {
          *(_DWORD *)v9 = *(_DWORD *)v11; /*0x4dd92d*/
          if ( (unsigned __int8)BuildingClass::ValidateCell(this, v9, i, v7) ) /*0x4dd931*/
            v10 = *(_DWORD *)v9; /*0x4dd93e*/
          *(_DWORD *)v9 = *(_DWORD *)v11; /*0x4dd94f*/
          if ( (unsigned __int8)BuildingClass::ValidateCell(this, v9, i, v6) ) /*0x4dd953*/
            v10 = *(_DWORD *)v9; /*0x4dd960*/
          *(_DWORD *)v9 = *(_DWORD *)v11; /*0x4dd971*/
          if ( (unsigned __int8)BuildingClass::ValidateCell(this, v9, v7, i) ) /*0x4dd975*/
            v10 = *(_DWORD *)v9; /*0x4dd982*/
          *(_DWORD *)v9 = *(_DWORD *)v11; /*0x4dd993*/
          if ( (unsigned __int8)BuildingClass::ValidateCell(this, v9, v6, i) ) /*0x4dd997*/
            v10 = *(_DWORD *)v9; /*0x4dd9a4*/
        }
        if ( v10 != g_FootClass_Pool ) /*0x4dd9bd*/
          break; /*0x4dd9bd*/
        ++v6; /*0x4dd9d1*/
        --v7; /*0x4dd9d2*/
      }
      while ( v6 < a3 ); /*0x4dd9d5*/
    }
    *a2 = v10; /*0x4dd9e7*/
    return a2; /*0x4dd9dd*/
  }
}



// ==== 0x004DD9F0  BuildingClass::ValidateCell  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ValidateCell(BuildingClass *this, __int16 *a2, int a3, int a4)
{
  __int16 *v4; // edi
  __int16 v6; // cx
  int result; // eax
  __int16 v8; // cx
  int v9; // eax
  int GroundHeight; // eax
  int v11; // ecx
  _DWORD *v12; // eax
  int (__thiscall **vtable0)(BuildingClass *); // eax
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // edi
  _DWORD v17[3]; // [esp+8h] [ebp-18h] BYREF
  _DWORD v18[3]; // [esp+14h] [ebp-Ch] BYREF

  v4 = a2; /*0x4dd9f5*/
  v6 = a2[1]; /*0x4dda00*/
  LOWORD(a2) = a3 + *a2; /*0x4dda0e*/
  HIWORD(a2) = a4 + v6; /*0x4dda13*/
  result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2, 1); /*0x4dda2a*/
  if ( !(_BYTE)result ) /*0x4dda31*/
    goto LABEL_10; /*0x4dda31*/
  v8 = (__int16)a2; /*0x4dda37*/
  *(_DWORD *)v4 = a2; /*0x4dda3b*/
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x4dda44*/
  {
    if ( this->? ) /*0x4dda46*/
    {
      v9 = (v4[1] << 8) + 128; /*0x4dda67*/
      v17[0] = (v8 << 8) + 128; /*0x4dda72*/
      v17[1] = v9; /*0x4dda76*/
      v17[2] = 0; /*0x4dda7a*/
      GroundHeight = Cell::GetGroundHeight(v17); /*0x4dda82*/
      v11 = *v4 << 8; /*0x4dda91*/
      v18[1] = (v4[1] << 8) + 128; /*0x4ddaa0*/
      v18[0] = v11 + 128; /*0x4ddaa8*/
      v18[2] = GroundHeight; /*0x4ddab2*/
      result = Cell::IsPassable(v18); /*0x4ddab6*/
      if ( (_BYTE)result ) /*0x4ddabd*/
        goto LABEL_10; /*0x4ddabd*/
    }
  }
  v12 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD *, _DWORD))this->TechnoClass + 19))(this, v18, 0); /*0x4ddace*/
  LOWORD(a3) = *v12 / 256; /*0x4ddae7*/
  HIWORD(a3) = v12[1] / 256; /*0x4ddafd*/
  vtable0 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x4ddb06*/
  a4 = a3; /*0x4ddb08*/
  v14 = vtable0[47](this); /*0x4ddb0c*/
  v15 = (*((int (__thiscall **)(BuildingClass *, int))this->TechnoClass + 33))(this, v14); /*0x4ddb17*/
  if ( !MapSeed::CheckTileMatch( /*0x4ddb2f*/
          (MapSeed *)&stru_87F5F0.__pad_58[416],
          (__int16 *)&a4,
          v4,
          *(_DWORD *)(v15 + 1460),
          0,
          0,
          0) )
    goto LABEL_10; /*0x4ddb2f*/
  v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v4); /*0x4ddb49*/
  result = (*((int (__thiscall **)(BuildingClass *, _DWORD *, int, int, _DWORD, int))this->TechnoClass + 107))( /*0x4ddb52*/
             this,
             v16,
             -1,
             -1,
             0,
             1);
  if ( !result && v16[59] == 11 && *((_BYTE *)v16 + 286) >= 0x30u ) /*0x4ddb6c*/
    LOBYTE(result) = 1; /*0x4ddb6f*/
  else
LABEL_10:
    LOBYTE(result) = 0; /*0x4ddb79*/
  return result; /*0x4ddb6e*/
}



// ==== 0x004DDB90  FootClass::MoveToWeed  this=FootClass  sig=csp ====
char __thiscall FootClass::MoveToWeed(FootClass *this, int a2)
{
  _DWORD *v3; // eax
  void (__thiscall **vtable0)(FootClass *, void *, int); // edi
  void *v6; // eax
  int v7; // [esp+8h] [ebp-10h] BYREF
  _BYTE v8[12]; // [esp+Ch] [ebp-Ch] BYREF

  if ( !this->movementDestination ) /*0x4ddb97*/
  {
    a2 = *BuildingClass::Validate((BuildingClass *)this, &v7, a2); /*0x4ddbbf*/
    if ( a2 != g_FootClass_Pool ) /*0x4ddbc3*/
    {
      v3 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))this->TechnoClass + 18))(this, v8); /*0x4ddbdc*/
      if ( a2 == __PAIR32__(v3[1] / 256, *v3 / 256) ) /*0x4ddc05*/
        return 1; /*0x4ddc15*/
      vtable0 = (void (__thiscall **)(FootClass *, void *, int))this->TechnoClass; /*0x4ddc18*/
      v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x4ddc26*/
      vtable0[288](this, v6, 1); /*0x4ddc2e*/
    }
  }
  return 0; /*0x4ddc0e*/
}



// ==== 0x004DDC40  FootClass::CheckHeightDiff  this=FootClass  sig=csp ====
char __thiscall FootClass::CheckHeightDiff(FootClass *this, int a2)
{
  if ( this->tubeIndex < 0 ) /*0x4ddc48*/
    return ObjectClass::CheckGroundHeightDiff((IUnknown *)this); /*0x4ddc54*/
  else
    return 0; /*0x4ddc4a*/
}



// ==== 0x004DDC60  FootClass::ValidateTargetCell  this=FootClass  sig=csp ====
bool __thiscall FootClass::ValidateTargetCell(FootClass *this, int a2)
{
  int v2; // edi
  bool result; // al
  _DWORD *v5; // eax
  Object *v6; // eax
  FootClass *ClosestObjectCell; // eax
  FootClass *v8; // esi
  bool *v9; // eax
  int v10; // ecx
  FootClass **i; // edx
  FootClass *v12; // eax
  _DWORD v13[2]; // [esp+Ch] [ebp-14h] BYREF
  _BYTE v14[12]; // [esp+14h] [ebp-Ch] BYREF

  v2 = a2; /*0x4ddc66*/
  if ( !a2 ) /*0x4ddc6e*/
    return 0; /*0x4ddc78*/
  v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 72))(a2, v14); /*0x4ddc84*/
  LOWORD(v13[0]) = *v5 / 256; /*0x4ddc99*/
  HIWORD(v13[0]) = v5[1] / 256; /*0x4ddcb2*/
  a2 = v13[0]; /*0x4ddcbf*/
  result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2, 1); /*0x4ddcc4*/
  if ( result ) /*0x4ddccb*/
  {
    v13[0] = 0; /*0x4ddce9*/
    v13[1] = 0; /*0x4ddcf1*/
    v6 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x4ddcf9*/
    ClosestObjectCell = (FootClass *)Object::FindClosestObjectCell(v6, v13, 0, 0); /*0x4ddd00*/
    v8 = ClosestObjectCell; /*0x4ddd05*/
    if ( ClosestObjectCell ) /*0x4ddd09*/
      return this == ClosestObjectCell /*0x4ddd51*/
          || (FootClass *)Array::Get((Array *)this, 0) == ClosestObjectCell
          || *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3412)
          && (v8->? || *(_BYTE *)((*((int (__thiscall **)(FootClass *))v8->TechnoClass + 33))(v8) + 3412));
    v9 = (bool *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x4ddd7e*/
    if ( (unsigned __int8)Cell::IsBuildable(v9, 1, 0, 0, -1, 0, -1, 1) ) /*0x4ddd85*/
    {
      v10 = 0; /*0x4ddd9f*/
      if ( dword_A8E3A0 <= 0 ) /*0x4ddda3*/
        return 1; /*0x4dddd5*/
      for ( i = (FootClass **)dword_A8E394; ; ++i ) /*0x4ddda5*/
      {
        v12 = *i; /*0x4dddab*/
        if ( (*i)->? ) /*0x4dddad*/
        {
          if ( !v12->? && v12->movementDestination == (AbstractClass *)v2 && v12 != this ) /*0x4dddc9*/
            break; /*0x4dddc9*/
        }
        if ( ++v10 >= dword_A8E3A0 ) /*0x4dddd1*/
          return 1; /*0x4dddd1*/
      }
    }
    return 0; /*0x4ddd90*/
  }
  return result; /*0x4ddc70*/
}



// ==== 0x004DDDE0  FootClass::HandleCursorWithCheck  this=FootClass  sig=csp ====
int __thiscall FootClass::HandleCursorWithCheck(FootClass *this, __int16 *a2, char a3, char a4)
{
  int v5; // ebx
  int v6; // eax
  _DWORD v8[2]; // [esp+Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+14h] [ebp-4h]

  v5 = TechnoClass::HandleCursor((TechnoClass *)this, a2, a3, a4); /*0x4dde01*/
  v6 = (a2[1] << 8) + 128; /*0x4dde17*/
  v8[0] = (*a2 << 8) + 128; /*0x4dde22*/
  v8[1] = v6; /*0x4dde26*/
  GroundHeight = 0; /*0x4dde2a*/
  GroundHeight = Cell::GetGroundHeight(v8); /*0x4dde41*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v8)->flags[0] & 0x100) != 0 ) /*0x4dde53*/
    GroundHeight += (int)FootClass_Array.?; /*0x4dde60*/
  if ( (unsigned __int8)Cell::IsPassable(v8) && v5 ) /*0x4dde79*/
  {
    if ( !*(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3213) /*0x4dde97*/
      || !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], a2, 1) )
    {
      return 2; /*0x4ddebe*/
    }
    if ( v5 != 51 ) /*0x4ddea3*/
      return 1; /*0x4ddeb0*/
  }
  return v5; /*0x4ddea5*/
}



// ==== 0x004DDED0  FootClass::GetCursorOverObject  this=FootClass  sig=csp ====
int __thiscall InfantryClass::GetCursorOverObject(FootClass *this, int a2, char a3)
{
  int v4; // ebx
  _DWORD *v5; // eax
  _DWORD v7[2]; // [esp+Ch] [ebp-18h] BYREF
  int GroundHeight; // [esp+14h] [ebp-10h]
  _BYTE v9[12]; // [esp+18h] [ebp-Ch] BYREF

  v4 = TechnoClass::HandleCursorClick((TechnoClass *)this, (_BYTE *)a2, a3); /*0x4ddee9*/
  v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 72))(a2, v9); /*0x4ddef2*/
  v7[0] = *v5; /*0x4ddef7*/
  v7[1] = v5[1]; /*0x4ddf03*/
  GroundHeight = v5[2]; /*0x4ddf0f*/
  GroundHeight = Cell::GetGroundHeight(v7); /*0x4ddf22*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v7)->flags[0] & 0x100) != 0 ) /*0x4ddf34*/
    GroundHeight += (int)FootClass_Array.?; /*0x4ddf41*/
  if ( (unsigned __int8)Cell::IsPassable(v7) && v4 && !*(_DWORD *)&dword_A8B238 ) /*0x4ddf63*/
    return 2 - (*(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3213) != 0); /*0x4ddf7b*/
  else
    return v4; /*0x4ddf86*/
}



// ==== 0x004DDF90  FootClass::ProcessMissionState  this=FootClass  sig=csp ====
int __thiscall FootClass::ProcessMissionState(FootClass *this)
{
  double v1; // st7
  int missionStatus; // eax
  CellClass *v4; // eax
  AbstractClass *focus; // ecx
  int (__thiscall **vtable0)(FootClass *, _DWORD, int); // edi
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // edi
  _DWORD *v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // kr00_4
  int (__fastcall **v17)(FootClass *, _DWORD, int); // eax
  void (__thiscall **v19)(FootClass *, void *, int); // edi
  void *v20; // eax
  char *MissionControl; // eax
  int v22; // eax
  __int16 v23[2]; // [esp+2Ch] [ebp-44h] BYREF
  int v24; // [esp+30h] [ebp-40h] BYREF
  double v25; // [esp+34h] [ebp-3Ch]
  int v26; // [esp+3Ch] [ebp-34h]
  _DWORD v27[3]; // [esp+40h] [ebp-30h] BYREF
  _BYTE v28[12]; // [esp+4Ch] [ebp-24h] BYREF
  _BYTE v29[12]; // [esp+58h] [ebp-18h] BYREF
  _BYTE v30[12]; // [esp+64h] [ebp-Ch] BYREF

  missionStatus = this->?; /*0x4ddf97*/
  if ( missionStatus ) /*0x4ddfa0*/
  {
    if ( missionStatus == 1 && !this->movementDestination ) /*0x4ddfa9*/
    {
      TechnoClass::SetFocus((TechnoClass *)this, 0); /*0x4ddfb9*/
      (*((void (__thiscall **)(FootClass *, int, _DWORD))this->TechnoClass + 122))(this, 11, 0); /*0x4ddfc6*/
      (*((void (__thiscall **)(FootClass *))this->TechnoClass + 123))(this); /*0x4ddfd0*/
    }
  }
  else if ( this->? ) /*0x4ddfdb*/
  {
    (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 335))(this, 0); /*0x4ddfeb*/
  }
  else
  {
    if ( !this->? ) /*0x4ddff6*/
    {
      v27[0] = this->?[0]; /*0x4de00c*/
      v27[1] = this->?[1]; /*0x4de018*/
      v27[2] = this->?[2]; /*0x4de01f*/
      v4 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v27); /*0x4de028*/
      TechnoClass::SetFocus((TechnoClass *)this, (int)v4); /*0x4de030*/
    }
    focus = this->?; /*0x4de035*/
    vtable0 = (int (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass; /*0x4de03b*/
    this->unknownBool688 = 0; /*0x4de03e*/
    v7 = (*((int (__thiscall **)(AbstractClass *, _BYTE *, _DWORD))focus->vtable0 + 18))(focus, v28, 0); /*0x4de04e*/
    v8 = vtable0[241](this, 0, v7); /*0x4de05c*/
    if ( v8 ) /*0x4de060*/
    {
      v9 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))this->?->TechnoClass::vtable0 + 18))( /*0x4de07a*/
                       this->?,
                       v29);
      v10 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v8 + 72))(v8, v30); /*0x4de081*/
      v11 = v10[1]; /*0x4de08a*/
      LODWORD(v25) = *v10 - *v9; /*0x4de08d*/
      v12 = v10[2]; /*0x4de096*/
      v13 = v9[2]; /*0x4de099*/
      HIDWORD(v25) = v11 - v9[1]; /*0x4de09c*/
      v26 = v12 - v13; /*0x4de0a9*/
      Math::Sqrt( /*0x4de0ce*/
        (double)SLODWORD(v25) * (double)SLODWORD(v25)
      + (double)(v12 - v13) * (double)(v12 - v13)
      + (double)SHIDWORD(v25) * (double)SHIDWORD(v25));
      v16 = Math::RoundToInt(v1); /*0x4de0d6*/
      LOWORD(v15) = HIWORD(v16); /*0x4de0d6*/
      LOWORD(v14) = v16; /*0x4de0d6*/
      *(_DWORD *)v23 = v14; /*0x4de0db*/
      v17 = (int (__fastcall **)(FootClass *, _DWORD, int))this->TechnoClass; /*0x4de0df*/
      v25 = (double)*(int *)v23; /*0x4de0e9*/
      *(_DWORD *)v23 = v17[199](this, v15, 1); /*0x4de0f3*/
      if ( (double)*(int *)v23 * 1.5 > v25 ) /*0x4de10a*/
        (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 242))(this, v8); /*0x4de111*/
    }
    if ( this->? ) /*0x4de117*/
      return 1; /*0x4de12c*/
    this->? = 1; /*0x4de139*/
    *(_DWORD *)v23 = *BuildingPlacement::FindPosition(&v24, this); /*0x4de151*/
    if ( *(_DWORD *)v23 == g_FootClass_Pool ) /*0x4de155*/
    {
      (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x4de18b*/
    }
    else
    {
      v19 = (void (__thiscall **)(FootClass *, void *, int))this->TechnoClass; /*0x4de165*/
      v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v23); /*0x4de173*/
      v19[288](this, v20, 1); /*0x4de17b*/
    }
    TechnoClass::SetFocus((TechnoClass *)this, 0); /*0x4de195*/
  }
  MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4de19c*/
  LOWORD(v22) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4de1aa*/
  return v22 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4de122*/
}



// ==== 0x004DE1D0  ObjectClass::FindPlacementCell  this=FootClass  sig=csp ====
_DWORD *__userpurge ObjectClass::FindPlacementCell@<eax>(
        ObjectClass *this,
        int a2@<ebp>,
        _DWORD *a3,
        int a4,
        int a5,
        char a6)
{
  _DWORD *v6; // ecx
  _DWORD *v7; // esi
  __int16 *v8; // edi
  char IsWithinUsableArea; // al
  int v10; // edx
  int v11; // eax
  int v12; // edx
  _DWORD *v13; // eax
  CellClass *v14; // eax
  int v15; // edx
  int v16; // ebp
  int v17; // eax
  char v18; // al
  int v19; // ecx
  int v20; // eax
  char IsPassable; // al
  int v22; // eax
  int v23; // edx
  void **v24; // eax
  _DWORD *v25; // eax
  int v26; // eax
  void *v27; // eax
  int v29; // [esp-2Ch] [ebp-78h]
  int TileIndex; // [esp-28h] [ebp-74h]
  char v31; // [esp-20h] [ebp-6Ch]
  char v32; // [esp-20h] [ebp-6Ch]
  char v33; // [esp-Ch] [ebp-58h]
  __int16 v34[2]; // [esp+18h] [ebp-34h] BYREF
  int v35; // [esp+1Ch] [ebp-30h]
  char v36[4]; // [esp+20h] [ebp-2Ch]
  int v37; // [esp+24h] [ebp-28h] BYREF
  _DWORD v38[2]; // [esp+28h] [ebp-24h] BYREF
  int GroundHeight; // [esp+30h] [ebp-1Ch]
  _DWORD v40[2]; // [esp+34h] [ebp-18h] BYREF
  int v41; // [esp+3Ch] [ebp-10h]
  _WORD v42[6]; // [esp+40h] [ebp-Ch] BYREF

  v7 = v6; /*0x4de1d5*/
  v8 = (__int16 *)a3; /*0x4de1de*/
  v35 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int, _DWORD))(*v6 + 112))(v6, a3, a4, 0); /*0x4de1f4*/
  IsWithinUsableArea = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v8, 1); /*0x4de1f8*/
  v10 = *v8; /*0x4de1fd*/
  LOBYTE(a3) = IsWithinUsableArea; /*0x4de200*/
  v11 = (v8[1] << 8) + 128; /*0x4de218*/
  v38[0] = (v10 << 8) + 128; /*0x4de223*/
  v38[1] = v11; /*0x4de227*/
  GroundHeight = 0; /*0x4de22b*/
  GroundHeight = Cell::GetGroundHeight(v38); /*0x4de23e*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v38)->flags[0] & 0x100) != 0 ) /*0x4de250*/
    GroundHeight += (int)FootClass_Array.?; /*0x4de25d*/
  if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v7 + 132))(v7) + 3213) && (unsigned __int8)Cell::IsPassable(v38) ) /*0x4de27d*/
    goto LABEL_36; /*0x4de284*/
  v12 = *v7; /*0x4de28c*/
  *(_DWORD *)v34 = *(_DWORD *)v8; /*0x4de293*/
  v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _WORD *, _DWORD, int))(v12 + 76))(v7, v42, 0, a2); /*0x4de29b*/
  v14 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v13); /*0x4de2a4*/
  v15 = *v7; /*0x4de2a9*/
  v38[0] = v14; /*0x4de2ad*/
  v16 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(v15 + 132))(v7) + 1460); /*0x4de2b7*/
  if ( v16 == 6 ) /*0x4de2c0*/
  {
    v16 = 0; /*0x4de2c2*/
  }
  else if ( v16 == 9 && HouseClass::IonSensitivesShouldBeOffline() ) /*0x4de2d1*/
  {
    v16 = 7; /*0x4de2da*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v7 + 84))(v7) /*0x4de333*/
    || *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v7 + 132))(v7) + 3372)
    || (*(int (__thiscall **)(_DWORD *))(*v7 + 44))(v7) == 15
    && *(_BYTE *)(v7[432] + 3476)
    && !HouseClass::IonSensitivesShouldBeOffline()
    || (v17 = (*(int (__thiscall **)(_DWORD *))(*v7 + 44))(v7), LOBYTE(a5) = 0, v17 == 2) )
  {
    LOBYTE(a5) = 1; /*0x4de335*/
  }
  v18 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 188))(v7, 0); /*0x4de33f*/
  v19 = v8[1]; /*0x4de345*/
  v36[0] = v18; /*0x4de349*/
  v20 = *v8; /*0x4de34f*/
  v41 = 0; /*0x4de35b*/
  v40[1] = (v19 << 8) + 128; /*0x4de35f*/
  v40[0] = (v20 << 8) + 128; /*0x4de375*/
  v41 = Cell::GetGroundHeight(v40); /*0x4de388*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v40)->flags[0] & 0x100) != 0 ) /*0x4de39a*/
    v41 += (int)FootClass_Array.?; /*0x4de3a7*/
  IsPassable = Cell::IsPassable(v40); /*0x4de3b5*/
  if ( (_BYTE)a4 && v35 == 2 ) /*0x4de3cb*/
  {
    if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v7 + 132))(v7) + 3372) /*0x4de3f7*/
      || (v22 = (*(int (__thiscall **)(_DWORD *))(*v7 + 456))(v7), a3 = (_DWORD *)1, v22 >= 0) )
    {
      a3 = 0; /*0x4de3f9*/
    }
    v33 = (char)a3; /*0x4de40e*/
    a4 = 0; /*0x4de41b*/
    v31 = BYTE1(*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8) + 80)) & 1; /*0x4de439*/
    v29 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v7 + 132))(v7) + 1660); /*0x4de44d*/
    v24 = (void **)LayerClass::Pathfinding_Find( /*0x4de450*/
                     &stru_87F5F0.__pad_58[416],
                     v23,
                     &v37,
                     v8,
                     v29,
                     -1,
                     v16,
                     v31,
                     1,
                     1,
                     0,
                     1,
                     v33,
                     1,
                     (__int16 *)&a4,
                     0,
                     0);
    goto LABEL_32; /*0x4de450*/
  }
  if ( !(_BYTE)a3 /*0x4de4b4*/
    || IsPassable
    || !(_BYTE)a4
    && (!*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v7 + 132))(v7) + 3284) || v35 == 2)
    && (v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8),
        !MapSeed::CheckTileMatch(
           (MapSeed *)&stru_87F5F0.__pad_58[416],
           (__int16 *)(v37 + 36),
           v34,
           v16,
           v36[0],
           BYTE1(v25[80]) & 1,
           0)) )
  {
    a4 = 0; /*0x4de4d7*/
    v32 = BYTE1(*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8) + 80)) & 1; /*0x4de4fc*/
    TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], (__int16 *)(v37 + 36), v16, v36[0]); /*0x4de50b*/
    v26 = (*(int (__thiscall **)(_DWORD *))(*v7 + 132))(v7); /*0x4de510*/
    v24 = (void **)LayerClass::Pathfinding_Find( /*0x4de528*/
                     &stru_87F5F0.__pad_58[416],
                     (int)&a3,
                     &a3,
                     v8,
                     *(_DWORD *)(v26 + 1660),
                     TileIndex,
                     v16,
                     v32,
                     1,
                     1,
                     0,
                     1,
                     0,
                     1,
                     (__int16 *)&a4,
                     0,
                     0);
LABEL_32:
    v27 = *v24; /*0x4de52d*/
    *(_DWORD *)v34 = v27; /*0x4de52f*/
    goto LABEL_34; /*0x4de533*/
  }
  v27 = *(void **)v34; /*0x4de535*/
LABEL_34:
  if ( __PAIR32__(v34[1], (unsigned __int16)v27) != g_FootClass_Pool ) /*0x4de541*/
  {
    this->AbstractClass = v27; /*0x4de558*/
    return &this->AbstractClass; /*0x4de55f*/
  }
LABEL_36:
  this->AbstractClass = (void *)g_FootClass_Pool; /*0x4de562*/
  return &this->AbstractClass; /*0x4de555*/
}



// ==== 0x004DE5D0  FootClass::PreDestroy  this=FootClass  sig=csp ====
int __thiscall FootClass::PreDestroy(FootClass *this)
{
  CaptureManagerClass *captureManager; // ecx
  int *team; // ecx

  captureManager = this->?; /*0x4de5d3*/
  if ( captureManager ) /*0x4de5db*/
    CaptureManager::FreeAll((CaptureManager *)captureManager); /*0x4de5dd*/
  if ( this->? ) /*0x4de5e2*/
    TechnoClass::EjectPassengers((TechnoClass *)this, 1); /*0x4de5f0*/
  team = (int *)this->team; /*0x4de5f5*/
  if ( team ) /*0x4de5fd*/
    TeamClass::LiberateMember_Start(team, (int)this, 0xFFFFFFFF, 0); /*0x4de604*/
  return ObjectClass::Destroy((ObjectClass *)this); /*0x4de610*/
}



// ==== 0x004DE620  ObjectClass::IsHeightAboveThreshold_0  this=FootClass  sig=csp ====
// attributes: thunk
int __thiscall ObjectClass::IsHeightAboveThreshold_0(ObjectClass *this)
{
  return ObjectClass::IsHeightAboveThreshold((IUnknown *)this);
}



// ==== 0x004DE630  FootClass::OnCompleteAction  this=FootClass  sig=csp ====
int __thiscall FootClass::OnCompleteAction(FootClass *this, int a2)
{
  int result; // eax

  BuildingClass::OnCellPlacementComplete((TechnoClass *)this); /*0x4de639*/
  result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this); /*0x4de642*/
  if ( *(_BYTE *)(result + 2053) ) /*0x4de648*/
  {
    if ( this->?[0] == 1 ) /*0x4de659*/
      return (*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 309))(this, a2); /*0x4de660*/
  }
  return result; /*0x4de666*/
}



// ==== 0x004DE670  FootClass::RemovePassenger  this=FootClass  sig=csp ====
int __thiscall FootClass::RemovePassenger(FootClass *this, int a2)
{
  int *passengers; // edi
  int (__thiscall **vtable0)(FootClass *); // edx
  int v5; // eax
  int result; // eax
  _DWORD v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  passengers = this->?; /*0x4de67d*/
  FootClass::updateMovementAnimation((FootClass *)this->?, a2); /*0x4de685*/
  if ( a2 && *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1384) != -1 ) /*0x4de69f*/
  {
    v7[0] = this->?[0]; /*0x4de6b0*/
    vtable0 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4de6b4*/
    v7[1] = this->?[1]; /*0x4de6b9*/
    v7[2] = this->?[2]; /*0x4de6c0*/
    v5 = vtable0[33](this); /*0x4de6c6*/
    PlayAudioAt2(*(_DWORD *)(v5 + 1384), v7, 0); /*0x4de6d4*/
  }
  result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this); /*0x4de6de*/
  if ( *(_BYTE *)(result + 2053) ) /*0x4de6e4*/
  {
    if ( !*passengers ) /*0x4de6ee*/
      return (*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 310))(this, a2); /*0x4de6f8*/
  }
  return result; /*0x4de6fe*/
}



// ==== 0x004DE710  FootClass::PopAndProcess  this=FootClass  sig=csp ====
int __thiscall FootClass::PopAndProcess(FootClass *this)
{
  int *passengers; // edi
  int v3; // ebx

  passengers = this->?; /*0x4de715*/
  v3 = LinkedList::Pop((LinkedList *)this->?); /*0x4de722*/
  if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 2053) && !*passengers ) /*0x4de738*/
    (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 310))(this, v3); /*0x4de742*/
  return v3; /*0x4de748*/
}



// ==== 0x004DE750  FootClass::vt_entry_4D4  this=FootClass  sig=csp ====
void __stdcall BuildingClass::vt_entry_4D4(FootClass *this)
{
  ; /*0x4de750*/
}



// ==== 0x004DE760  FootClass::vt_entry_4D8  this=FootClass  sig=csp ====
void __stdcall BuildingClass::vt_entry_4D8(FootClass *this)
{
  ; /*0x4de760*/
}



// ==== 0x004DE770  FootClass::IsTimerActive  this=FootClass  sig=csp ====
bool __thiscall FootClass::IsTimerActive(FootClass *this)
{
  int v1; // edx
  int v2; // eax

  v1 = this->paralysisTimer[0]; /*0x4de770*/
  v2 = this->paralysisTimer[2]; /*0x4de776*/
  if ( v1 != -1 ) /*0x4de77f*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v1 < v2 ) /*0x4de78b*/
      return v2 != *(_DWORD *)&stru_A8EB00.?[416] - v1; /*0x4de798*/
    v2 = 0; /*0x4de799*/
  }
  return v2 != 0; /*0x4de798*/
}



// ==== 0x004DE7B0  FootClass::IsTargetInRange  this=FootClass  sig=csp ====
int __thiscall FootClass::IsTargetInRange(FootClass *this, int a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // ebp
  int result; // eax
  int v7; // ebx
  FootClass *v8; // edi
  _DWORD *j; // esi
  int v10; // eax
  Object **v11; // eax
  Object **v12; // esi
  int v13; // [esp+Ch] [ebp-28h]
  int i; // [esp+Ch] [ebp-28h]
  int v15; // [esp+10h] [ebp-24h]
  int v16; // [esp+14h] [ebp-20h]
  int v17; // [esp+18h] [ebp-1Ch]
  __int16 v18[2]; // [esp+1Ch] [ebp-18h] BYREF
  int relatedTagsCount; // [esp+20h] [ebp-14h]
  int v20; // [esp+24h] [ebp-10h]
  char v21[12]; // [esp+28h] [ebp-Ch] BYREF

  v3 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1520); /*0x4de7c0*/
  v16 = v3; /*0x4de7ce*/
  v17 = v3 * v3; /*0x4de7d8*/
  relatedTagsCount = this->?->relatedTagsCount; /*0x4de7e1*/
  if ( a2 == g_FootClass_Pool ) /*0x4de7ec*/
  {
    v4 = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *))this->TechnoClass + 18))(this, v21); /*0x4de805*/
    LOWORD(v13) = *v4 / 256; /*0x4de818*/
    HIWORD(v13) = v4[1] / 256; /*0x4de82c*/
    a2 = v13; /*0x4de835*/
  }
  v5 = -v3; /*0x4de83b*/
  result = -v3; /*0x4de83d*/
  v20 = -v3; /*0x4de83f*/
  for ( i = -v3; result < v3; i = result ) /*0x4de849*/
  {
    if ( v5 < v3 ) /*0x4de852*/
    {
      v7 = result * result; /*0x4de85e*/
      HIWORD(v15) = result + HIWORD(a2); /*0x4de864*/
      do /*0x4de91b*/
      {
        LOWORD(v15) = a2 + v5; /*0x4de870*/
        *(_DWORD *)v18 = v15; /*0x4de87e*/
        if ( v7 + v5 * v5 < v17 ) /*0x4de88a*/
        {
          v8 = (FootClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v18); /*0x4de89f*/
          FootClass::checkTerrainSpeed(v8, relatedTagsCount); /*0x4de8a8*/
          for ( j = (_DWORD *)v8->?[1]; j; j = (_DWORD *)j[12] ) /*0x4de8b5*/
          {
            v10 = (*(int (__thiscall **)(_DWORD *))(*j + 44))(j); /*0x4de8bb*/
            if ( v10 == 1 || v10 == 15 || v10 == 2 ) /*0x4de8cb*/
              (*(void (__thiscall **)(_DWORD *))(*j + 1056))(j); /*0x4de8d1*/
          }
          v11 = (Object **)Cell::IsBridge((Cell *)v8); /*0x4de8e0*/
          v12 = v11; /*0x4de8e5*/
          if ( v11 && v11[135] != dword_A83D4C ) /*0x4de8f8*/
          {
            if ( (*(int (__thiscall **)(Object **, _DWORD, _DWORD))&(*v11)->__pad_38[48])(v11, 0, 0) ) /*0x4de902*/
              *((_BYTE *)v12 + 128) = 1; /*0x4de909*/
          }
          v3 = v16; /*0x4de910*/
          result = i; /*0x4de914*/
        }
        ++v5; /*0x4de918*/
      }
      while ( v5 < v3 ); /*0x4de91b*/
      v5 = v20; /*0x4de921*/
    }
    ++result; /*0x4de925*/
  }
  return result; /*0x4de933*/
}



// ==== 0x004DE940  FootClass::CheckCellPassable  this=FootClass  sig=csp ====
__int16 __thiscall FootClass::CheckCellPassable(FootClass *this, int a2)
{
  int v3; // edi
  HouseClass *owner; // ecx
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // ebp
  int v8; // esi
  int v9; // ebx
  Cell *v10; // edi
  _DWORD *j; // esi
  int v12; // eax
  _BYTE *v13; // esi
  Object *v14; // ecx
  int v16; // [esp+Ch] [ebp-28h]
  int i; // [esp+Ch] [ebp-28h]
  int v18; // [esp+10h] [ebp-24h]
  int relatedTagsCount; // [esp+14h] [ebp-20h]
  int v20; // [esp+18h] [ebp-1Ch]
  __int16 v21[2]; // [esp+1Ch] [ebp-18h] BYREF
  int v22; // [esp+20h] [ebp-14h]
  int v23; // [esp+24h] [ebp-10h]
  _BYTE v24[12]; // [esp+28h] [ebp-Ch] BYREF

  v3 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1520); /*0x4de950*/
  owner = this->?; /*0x4de956*/
  v22 = v3; /*0x4de95e*/
  v20 = v3 * v3; /*0x4de968*/
  LOWORD(v5) = a2; /*0x4de96c*/
  relatedTagsCount = owner->relatedTagsCount; /*0x4de971*/
  if ( a2 == g_FootClass_Pool ) /*0x4de97c*/
  {
    v6 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))this->TechnoClass + 18))(this, v24); /*0x4de995*/
    LOWORD(v16) = *v6 / 256; /*0x4de9a8*/
    v5 = v6[1] / 256; /*0x4de9b9*/
    HIWORD(v16) = v5; /*0x4de9bc*/
    a2 = v16; /*0x4de9c5*/
  }
  v7 = -v3; /*0x4de9cb*/
  v8 = -v3; /*0x4de9cd*/
  v23 = -v3; /*0x4de9cf*/
  for ( i = -v3; v8 < v3; i = v8 ) /*0x4de9d9*/
  {
    if ( v7 < v3 ) /*0x4de9e2*/
    {
      v9 = v8 * v8; /*0x4de9ee*/
      HIWORD(v18) = v8 + HIWORD(a2); /*0x4de9f4*/
      do /*0x4deabb*/
      {
        LOWORD(v18) = a2 + v7; /*0x4dea05*/
        *(_DWORD *)v21 = v18; /*0x4dea0e*/
        LOWORD(v5) = v20; /*0x4dea12*/
        if ( v9 + v7 * v7 < v20 ) /*0x4dea1a*/
        {
          v10 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v21); /*0x4dea2f*/
          LOWORD(v5) = Cell::IsPassableOffset(v10, relatedTagsCount); /*0x4dea38*/
          if ( (_BYTE)v5 ) /*0x4dea3f*/
          {
            FootClass::updateLocomotion((FootClass *)v10, relatedTagsCount); /*0x4dea48*/
            for ( j = v10->Cell_field_0xE4; j; j = (_DWORD *)j[12] ) /*0x4dea55*/
            {
              v12 = (*(int (__thiscall **)(_DWORD *))(*j + 44))(j); /*0x4dea5b*/
              if ( v12 == 1 || v12 == 15 || v12 == 2 ) /*0x4dea6b*/
                (*(void (__thiscall **)(_DWORD *))(*j + 1056))(j); /*0x4dea71*/
            }
            v5 = (int)Cell::IsBridge(v10); /*0x4dea80*/
            v13 = (_BYTE *)v5; /*0x4dea85*/
            if ( v5 ) /*0x4dea89*/
            {
              v14 = *(Object **)(v5 + 540); /*0x4dea8b*/
              LOWORD(v5) = (_WORD)dword_A83D4C; /*0x4dea91*/
              if ( v14 != dword_A83D4C ) /*0x4dea98*/
              {
                v5 = (*(int (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)v13 + 104))(v13, 0, 0); /*0x4deaa2*/
                if ( v5 ) /*0x4deaa7*/
                  v13[128] = 1; /*0x4deaa9*/
              }
            }
            v8 = i; /*0x4deab0*/
          }
        }
        v3 = v22; /*0x4deab4*/
        ++v7; /*0x4deab8*/
      }
      while ( v7 < v22 ); /*0x4deabb*/
      v7 = v23; /*0x4deac1*/
    }
    ++v8; /*0x4deac5*/
  }
  return v5; /*0x4dead3*/
}



// ==== 0x004DEAE0  FootClass::DeployAction  this=FootClass  sig=csp ====
int __userpurge FootClass::DeployAction@<eax>(FootClass *this, int a2@<ebp>, int a3@<edi>, int a4, int a5, int a6)
{
  TechnoClass *v6; // ecx
  TechnoClass *v7; // esi
  int v8; // eax
  void *vtable0; // edx
  int v11; // eax
  _DWORD *v12; // eax
  BuildingClass *v13; // [esp+0h] [ebp-10h]
  int v14; // [esp+8h] [ebp-8h]

  v7 = v6; /*0x4deae4*/
  if ( *(_BYTE *)((*((int (**)(void))v6->RadioClass + 33))() + 3479) ) /*0x4deaee*/
  {
    v8 = (*((int (__thiscall **)(TechnoClass *))v7->RadioClass + 33))(v7); /*0x4deafc*/
    vtable0 = v7->RadioClass; /*0x4deb08*/
    a5 = *(_DWORD *)(v8 + 160); /*0x4deb0a*/
    return (*((int (__thiscall **)(TechnoClass *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))vtable0 + 91))( /*0x4deb2b*/
             v7,
             &a5,
             0,
             *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
             0,
             0,
             0,
             0);
  }
  else
  {
    v11 = v7[1].radarFlashTimer[0]; /*0x4deb38*/
    if ( v11 ) /*0x4deb40*/
    {
      v12 = (_DWORD *)(*(_DWORD *)(v11 + 1692) + 44); /*0x4deb4e*/
      *v12 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4deb56*/
      v12[1] = v14; /*0x4deb5c*/
      v12[2] = 50; /*0x4deb5f*/
      BuildingClass::Deploy(v13, a2, a3); /*0x4deb6e*/
    }
    v7[1].targetingTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4deb80*/
    v7[1].targetingTimer[1] = v14; /*0x4deb86*/
    v7[1].targetingTimer[2] = 0; /*0x4deb8d*/
    return TechnoClass::IronCurtain(v7, (int)this, a4, a5); /*0x4deb9d*/
  }
}



// ==== 0x004DEBB0  FootClass::UpdateTeamAI  this=FootClass  sig=csp ====
char __thiscall FootClass::UpdateTeamAI(FootClass *this, int a2)
{
  TeamClass *attachedTag; // ecx
  TeamClass *v4; // ecx
  TeamClass *v5; // ecx
  void (__thiscall **vtable0)(FootClass *, int); // edx
  int v8; // edx

  if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 114))(this) <= 0 ) /*0x4debbe*/
    return 0; /*0x4ded5c*/
  if ( this->? > 0 ) /*0x4debcd*/
  {
    if ( a2 ) /*0x4debd5*/
    {
      attachedTag = (TeamClass *)this->?; /*0x4debd7*/
      if ( attachedTag ) /*0x4debdc*/
        TeamClass::Update_0(attachedTag, 38, (int)this, g_FootClass_Pool, 0, 0); /*0x4debec*/
    }
    v4 = (TeamClass *)this->?; /*0x4debf1*/
    if ( v4 && this->? ) /*0x4debf8*/
      TeamClass::Update_0(v4, 41, (int)this, g_FootClass_Pool, 0, 0); /*0x4dec0f*/
    v5 = (TeamClass *)this->?; /*0x4dec14*/
    if ( v5 ) /*0x4dec19*/
    {
      if ( !this->? ) /*0x4dec23*/
        return 1; /*0x4dec49*/
      if ( a2 ) /*0x4dec27*/
        TeamClass::Update_0(v5, 41, (int)this, g_FootClass_Pool, 0, a2); /*0x4dec36*/
    }
    if ( !this->? ) /*0x4dec3b*/
      return 1; /*0x4dec43*/
    (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 56))(this, a2); /*0x4dec51*/
    if ( !this->? ) /*0x4dec57*/
      return 1; /*0x4dec65*/
    if ( !this->isAttackedByLocomotor ) /*0x4dec68*/
      this->? = 0; /*0x4dec72*/
  }
  vtable0 = (void (__thiscall **)(FootClass *, int))this->TechnoClass; /*0x4dec79*/
  this->? = 1; /*0x4dec7f*/
  vtable0[157](this, 3); /*0x4dec86*/
  (*((void (__thiscall **)(FootClass *))this->TechnoClass + 232))(this); /*0x4dec90*/
  TechnoClass::CleanupAll((TechnoClass *)this, a2); /*0x4dec99*/
  if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) != 15 && !dword_A8E7AC ) /*0x4decb5*/
  {
    *(float *)&this->? = (double)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646) /*0x4decf0*/
                       * 4.656612877414201e-10
                       * 0.15
                       + 0.1;
    if ( !Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1) ) /*0x4ded02*/
      *(float *)&this->? = -*(float *)&this->?; /*0x4ded13*/
    *(float *)&this->? = (double)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646) /*0x4ded45*/
                       * 4.656612877414201e-10
                       * 0.1;
  }
  LOBYTE(v8) = 0; /*0x4ded4b*/
  AbstractClass::AnnounceExpiredPointer(&this->TechnoClass, v8); /*0x4ded4f*/
  return 1; /*0x4dec45*/
}



// ==== 0x004DED70  TechnoClass::GetThreatValue  this=FootClass  sig=csp ====
int __thiscall TechnoClass::GetThreatValue(TechnoClass *this)
{
  _DWORD *v2; // eax
  HouseClass *v3; // edi
  int v5; // [esp+8h] [ebp-14h]
  __int16 v6[2]; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v7[12]; // [esp+10h] [ebp-Ch] BYREF

  v2 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v7); /*0x4ded80*/
  LOWORD(v5) = *v2 / 256; /*0x4ded93*/
  HIWORD(v5) = v2[1] / 256; /*0x4dedac*/
  *(_DWORD *)v6 = v5; /*0x4dedb9*/
  v3 = (HouseClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v6); /*0x4dedc9*/
  if ( !(unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, (#375 *)dword_A83D4C) /*0x4dedf4*/
    && (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 49))(this)
    && !(unsigned __int8)HouseClass::HasType(v3, (int)dword_A83D4C->Object_field_0x30) )
  {
    return *(_DWORD *)((*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 51))(this, 0) + 164); /*0x4dee09*/
  }
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *, Object *))this->RadioClass + 272))(this, dword_A83D4C) ) /*0x4dee20*/
    return ObjectClass::HasC4((ObjectClass *)this); /*0x4dee44*/
  return *(_DWORD *)((*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 51))(this, 1) + 164); /*0x4dee0f*/
}



// ==== 0x004DEE50  FootClass::vt_entry_530  this=FootClass  sig=csp ====
int __thiscall FootClass::vt_entry_530(FootClass *this, int a2, int a3, int a4)
{
  int (__thiscall **vtable0)(FootClass *, int, int, int, int *); // eax
  int v6; // [esp+0h] [ebp-4h] BYREF

  v6 = (int)this; /*0x4dee50*/
  vtable0 = (int (__thiscall **)(FootClass *, int, int, int, int *))this->TechnoClass; /*0x4dee55*/
  v6 = -1; /*0x4dee67*/
  return vtable0[331](this, a2, a3, a4, &v6); /*0x4dee76*/
}



// ==== 0x004DEE80  FootClass::ValidatePlacementEx  this=FootClass  sig=csp ====
int *__thiscall BuildingClass::ValidatePlacementEx(FootClass *this, int a2, int a3, int *a4, int *a5)
{
  int v6; // ebp
  int v7; // edi
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int *v13; // [esp+18h] [ebp-28h]
  __int16 v14; // [esp+1Ch] [ebp-24h] BYREF
  __int16 v15; // [esp+20h] [ebp-20h] BYREF
  int bunkersCount; // [esp+24h] [ebp-1Ch]
  char v17; // [esp+28h] [ebp-18h] BYREF
  char v18; // [esp+30h] [ebp-10h] BYREF

  v13 = 0; /*0x4deea1*/
  if ( !DynamicVector::GetOrGrow((DynamicVector *)this->?->ownedBuildingTypes, *(_DWORD *)(a2 + 3576)) ) /*0x4deea5*/
    return 0; /*0x4deea5*/
  v6 = 0; /*0x4deeb8*/
  bunkersCount = this->?->bunkersCount; /*0x4deebf*/
  if ( bunkersCount <= 0 ) /*0x4deec3*/
    return 0; /*0x4df02f*/
  do /*0x4df01b*/
  {
    v7 = *(_DWORD *)(this->?->absorbersCount + 4 * v6); /*0x4deed7*/
    if ( v7 /*0x4def0c*/
      && !*(_BYTE *)(v7 + 129)
      && *(_DWORD *)(v7 + 1312) == a2
      && (a4 == (int *)1 || (unsigned __int8)Array::ContainsValue((Array *)v7, (int)this)) )
    {
      if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 2 /*0x4defd6*/
        || (v8 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 72))(v7),
            LOWORD(a4) = *v8 / 256,
            HIWORD(a4) = v8[1] / 256,
            v13 = a4,
            (*((void (__thiscall **)(FootClass *))this->TechnoClass + 19))(this),
            v9 = (*((int (__thiscall **)(FootClass *, _DWORD, _DWORD, _DWORD))this->TechnoClass + 47))(this, 0, 0, 0),
            v10 = (*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 33))(this, v9),
            MapSeed::CheckTileMatch(
              (MapSeed *)&stru_87F5F0.__pad_58[416],
              &v15,
              &v14,
              *(_DWORD *)(v10 + 1460),
              (char)&v18,
              0,
              (char)&v17)) )
      {
        if ( (*((int (__thiscall **)(FootClass *, int, int))this->TechnoClass + 158))(this, 15, v7) == 1 ) /*0x4defef*/
        {
          v11 = BuildingClass::SquaredDistanceTo((BuildingClass *)this, (int *)v7); /*0x4deff4*/
          if ( *a5 == -1 || v11 < *a5 || *(_BYTE *)(v7 + 979) ) /*0x4df004*/
          {
            v13 = (int *)v7; /*0x4df00e*/
            *a5 = v11; /*0x4df012*/
          }
        }
      }
    }
    ++v6; /*0x4df018*/
  }
  while ( v6 < bunkersCount ); /*0x4df01b*/
  return v13; /*0x4df026*/
}



// ==== 0x004DF040  TechnoClass::FindBestMatch  this=FootClass  sig=csp ====
int __thiscall TechnoClass::FindBestMatch(TechnoClass *this, int a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // ebp
  int v6; // edi
  int (__thiscall **vtable0)(TechnoClass *, _DWORD, int, int, int *); // eax
  int v9; // edx
  int v10; // eax
  int i; // [esp+10h] [ebp-4h]

  v4 = a2; /*0x4df042*/
  v5 = 0; /*0x4df04c*/
  v6 = 0; /*0x4df04e*/
  for ( i = -1; v6 < *(_DWORD *)(v4 + 16); ++v6 ) /*0x4df05c*/
  {
    vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD, int, int, int *))this->RadioClass; /*0x4df066*/
    v9 = *(_DWORD *)(v4 + 4); /*0x4df06e*/
    a2 = -1; /*0x4df071*/
    v10 = vtable0[331](this, *(_DWORD *)(v9 + 4 * v6), a3, a4, &a2); /*0x4df080*/
    if ( v10 && (!v5 || a2 < i || i == -1 || *(_BYTE *)(v10 + 979)) ) /*0x4df09f*/
    {
      v5 = v10; /*0x4df0a9*/
      i = a2; /*0x4df0ab*/
    }
  }
  return v5; /*0x4df0b7*/
}



// ==== 0x004DF0D0  FootClass::ClearPathIndex  this=FootClass  sig=csp ====
int __thiscall FootClass::ClearPathIndex(FootClass *this)
{
  this->FootClass_field_5A0 = 0; /*0x4df0d2*/
  this->movementDestination = 0; /*0x4df0d8*/
  return 0; /*0x4df0de*/
}



// ==== 0x004DF0E0  FootClass::MissionSell_Dispatch  this=FootClass  sig=csp ====
int __thiscall FootClass::MissionSell_Dispatch(FootClass *this, char *a2)
{
  int v4; // ebp
  char v5; // dl
  bool v6; // bl
  bool v8; // [esp+14h] [ebp+4h]

  v4 = a2[12]; /*0x4df0ea*/
  if ( v4 == 29 ) /*0x4df0f1*/
  {
    v5 = a2[18]; /*0x4df0fa*/
    v8 = a2[23] != 0; /*0x4df101*/
    v6 = v5 != 0; /*0x4df108*/
    if ( (*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 304))(this) ) /*0x4df10b*/
    {
      this->FootClass_field_bool_5D1 = 0; /*0x4df129*/
      this->FootClass_field_int_5C4 = 29; /*0x4df132*/
      if ( v8 ) /*0x4df13c*/
      {
        this->FootClass_field_5C8 = (int)BuildingLoadQueue::GetNext((BuildingLoadQueue *)(a2 + 19)); /*0x4df146*/
        return 2; /*0x4df14f*/
      }
      else if ( v6 ) /*0x4df15a*/
      {
        this->FootClass_field_5CC = (int)BuildingLoadQueue::GetNext((BuildingLoadQueue *)(a2 + 14)); /*0x4df164*/
        return 1; /*0x4df16d*/
      }
      else
      {
        (*((void (__thiscall **)(FootClass *))this->TechnoClass + 298))(this); /*0x4df17a*/
        return 29; /*0x4df181*/
      }
    }
    else
    {
      return 2 - v6; /*0x4df11e*/
    }
  }
  else
  {
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 298))(this); /*0x4df18d*/
    return v4; /*0x4df194*/
  }
}



// ==== 0x004DF1A0  TechnoClass::vt_entry_4A8  this=FootClass  sig=csp ====
int __thiscall TechnoClass::vt_entry_4A8(TechnoClass *this)
{
  this->FootClass_field_5C4 = -1; /*0x4df1a2*/
  this->FootClass_field_5C8 = 0; /*0x4df1ac*/
  this->q173 = 0; /*0x4df1b2*/
  this->FootClass_field_bool_5D1 = 0; /*0x4df1b8*/
  return 0; /*0x4df1be*/
}



// ==== 0x004DF1C0  TechnoClass::vt_entry_4AC  this=FootClass  sig=csp ====
BOOL __thiscall TechnoClass::vt_entry_4AC(TechnoClass *this)
{
  return this->FootClass_field_5C4 != -1; /*0x4df1ce*/
}



// ==== 0x004DF1D0  TechnoClass::vt_entry_4B0  this=FootClass  sig=csp ====
char __thiscall TechnoClass::vt_entry_4B0(TechnoClass *this)
{
  return this->FootClass_field_bool_5D1; /*0x4df1d6*/
}



// ==== 0x004DF1E0  TechnoClass::vt_entry_4B4  this=FootClass  sig=csp ====
int __thiscall TechnoClass::vt_entry_4B4(TechnoClass *this)
{
  return this->FootClass_field_5C4; /*0x4df1e6*/
}



// ==== 0x004DF1F0  TechnoClass::vt_entry_4B8  this=FootClass  sig=csp ====
_DWORD *__thiscall TechnoClass::vt_entry_4B8(TechnoClass *this, _DWORD *a2)
{
  int v2; // eax
  _DWORD *v3; // edx
  int v5; // ecx
  _DWORD *v6; // ecx
  _BYTE v7[12]; // [esp+4h] [ebp-Ch] BYREF

  v2 = this->FootClass_field_5C8; /*0x4df1f0*/
  if ( v2 ) /*0x4df1fc*/
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v2 + 72))(v2, v7); /*0x4df20a*/
    *a2 = *v3; /*0x4df214*/
    a2[1] = v3[1]; /*0x4df219*/
    a2[2] = v3[2]; /*0x4df220*/
    return a2; /*0x4df20c*/
  }
  else
  {
    v5 = this->q173; /*0x4df229*/
    if ( v5 ) /*0x4df231*/
    {
      v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 72))(v5, v7); /*0x4df23d*/
      *a2 = *v6; /*0x4df247*/
      a2[1] = v6[1]; /*0x4df24c*/
      a2[2] = v6[2]; /*0x4df253*/
    }
    else
    {
      *a2 = -1; /*0x4df26c*/
      a2[1] = -1; /*0x4df26e*/
      a2[2] = -1; /*0x4df271*/
    }
    return a2; /*0x4df23f*/
  }
}



// ==== 0x004DF280  ObjectClass::method_4DF280  this=ObjectClass  sig=csp ====
void __thiscall sub_4DF280(TechnoClass *this)
{
  int v2; // ecx
  _DWORD *v3; // eax
  int v4; // [esp+4h] [ebp-14h]
  __int16 v5[2]; // [esp+8h] [ebp-10h] BYREF
  _BYTE v6[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = *((_DWORD *)this + 371); /*0x4df286*/
  if ( v2 ) /*0x4df28e*/
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v2 + 72))(v2, v6); /*0x4df297*/
    LOWORD(v4) = *v3 / 256; /*0x4df2aa*/
    HIWORD(v4) = v3[1] / 256; /*0x4df2c3*/
    *(_DWORD *)v5 = v4; /*0x4df2d1*/
    *((_DWORD *)this + 370) = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v5); /*0x4df2da*/
  }
  else
  {
    *((_DWORD *)this + 370) = 0; /*0x4df2ef*/
  }
  *((_DWORD *)this + 371) = 0; /*0x4df2e0*/
}



// ==== 0x004DF310  TechnoClass::vt_entry_4C4  this=FootClass  sig=csp ====
BOOL __thiscall TechnoClass::vt_entry_4C4(TechnoClass *this)
{
  return this->FootClass_field_5C4 == 29; /*0x4df31e*/
}



// ==== 0x004DF320  TechnoClass::vt_entry_4C8  this=FootClass  sig=csp ====
char __thiscall TechnoClass::vt_entry_4C8(TechnoClass *this)
{
  int v2; // eax
  void (__thiscall **vtable0)(TechnoClass *, int, int); // edx

  v2 = this->FootClass_field_5C8; /*0x4df326*/
  this->FootClass_field_bool_5D1 = 0; /*0x4df32c*/
  if ( v2 ) /*0x4df335*/
  {
    (*((void (__thiscall **)(TechnoClass *, int, int))this->RadioClass + 122))(this, 2, 1); /*0x4df33d*/
    (*((void (__thiscall **)(TechnoClass *, _DWORD, int))this->RadioClass + 288))(this, this->FootClass_field_5C8, 1); /*0x4df350*/
    return 1; /*0x4df356*/
  }
  else
  {
    vtable0 = (void (__thiscall **)(TechnoClass *, int, int))this->RadioClass; /*0x4df361*/
    if ( this->q173 ) /*0x4df35b*/
    {
      vtable0[122](this, 1, 1); /*0x4df36d*/
      (*((void (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 242))(this, this->q173); /*0x4df37e*/
      return 1; /*0x4df384*/
    }
    else
    {
      ((void (__thiscall *)(TechnoClass *))vtable0[298])(this); /*0x4df38b*/
      return 0; /*0x4df392*/
    }
  }
}



// ==== 0x004DF3A0  FootClass::UpdateAttackMove_SelectNewTarget  this=FootClass  sig=csp ====
int __thiscall FootClass::UpdateAttackMove_SelectNewTarget(FootClass *this)
{
  int result; // eax
  int (__thiscall **vtable0)(FootClass *, int *, int); // eax
  unsigned __int8 (__thiscall **v4)(FootClass *, int *, int); // eax
  int v5; // [esp+8h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]

  if ( this->FootClass_field_5C8 ) /*0x4df3a6*/
  {
    if ( this->FootClass_field_bool_5D1 ) /*0x4df3b0*/
    {
      result = (*((int (__thiscall **)(FootClass *, AbstractClass *))this->TechnoClass + 237))(this, this->?); /*0x4df3c5*/
      if ( (_BYTE)result ) /*0x4df3cd*/
        return result; /*0x4df3cd*/
      this->? = 0; /*0x4df3d3*/
    }
    v5 = this->?[0]; /*0x4df3e7*/
    vtable0 = (int (__thiscall **)(FootClass *, int *, int))this->TechnoClass; /*0x4df3eb*/
    v6 = this->?[1]; /*0x4df3f0*/
    v7 = this->?[2]; /*0x4df3fe*/
    result = vtable0[231](this, &v5, 1); /*0x4df402*/
    if ( (_BYTE)result ) /*0x4df40a*/
      goto LABEL_6; /*0x4df40a*/
  }
  else if ( !this->FootClass_field_5CC /*0x4df441*/
         || (result = (*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 237))(
                        this,
                        this->FootClass_field_5CC),
             !(_BYTE)result) )
  {
    if ( !this->FootClass_field_bool_5D1 /*0x4df460*/
      || (result = (*((int (__thiscall **)(FootClass *, AbstractClass *))this->TechnoClass + 237))(this, this->?),
          !(_BYTE)result) )
    {
      this->? = 0; /*0x4df46a*/
      v5 = this->?[0]; /*0x4df476*/
      v4 = (unsigned __int8 (__thiscall **)(FootClass *, int *, int))this->TechnoClass; /*0x4df47a*/
      v6 = this->?[1]; /*0x4df47f*/
      v7 = this->?[2]; /*0x4df48d*/
      if ( v4[231](this, &v5, 1) ) /*0x4df491*/
      {
LABEL_6:
        result = (*((int (__thiscall **)(FootClass *, int, int))this->TechnoClass + 122))(this, 1, 1); /*0x4df410*/
        this->FootClass_field_bool_5D1 = 1; /*0x4df41e*/
        return result; /*0x4df429*/
      }
      result = this->FootClass_field_5CC; /*0x4df49f*/
      this->? = (AbstractClass *)result; /*0x4df4a5*/
    }
  }
  return result; /*0x4df425*/
}



// ==== 0x004DF4B0  TechnoClass::vt_entry_4D0  this=FootClass  sig=csp ====
char __thiscall TechnoClass::vt_entry_4D0(TechnoClass *this)
{
  char result; // al

  result = 0; /*0x4df4b3*/
  if ( this->FootClass_field_5C4 == 29 ) /*0x4df4bc*/
  {
    if ( this->FootClass_field_bool_5D1 ) /*0x4df4be*/
    {
      this->FootClass_field_bool_5D1 = 0; /*0x4df4c8*/
    }
    else if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 97))(this) != 5 /*0x4df4f7*/
           && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 97))(this) != 5 )
    {
      (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 298))(this); /*0x4df4fd*/
      return 0; /*0x4df503*/
    }
    return (*((char (__thiscall **)(TechnoClass *))this->RadioClass + 306))(this); /*0x4df4d3*/
  }
  return result; /*0x4df4d9*/
}



// ==== 0x004DF510  FootClass::ScanAdjacentCells  this=FootClass  sig=csp ====
char __userpurge FootClass::ScanAdjacentCells@<al>(FootClass *this, _DWORD *a2, int a3, int a4, int a5)
{
  int v5; // ecx
  int v6; // ebp
  _DWORD *v7; // edi
  _BYTE *v8; // esi
  int v9; // eax
  int i; // edi
  _DWORD *v11; // esi
  int j; // edi
  _DWORD *v13; // esi
  int k; // edi
  int *v16; // esi
  int v17; // eax
  int v18; // eax
  int *v19; // eax
  int v20; // ebx
  int v21; // eax
  int *v22; // [esp+0h] [ebp-48h]
  int v23; // [esp+4h] [ebp-44h]
  __int16 v24[6]; // [esp+10h] [ebp-38h] BYREF
  __int16 v25[2]; // [esp+1Ch] [ebp-2Ch] BYREF
  int v26; // [esp+20h] [ebp-28h]
  int v27; // [esp+24h] [ebp-24h] BYREF
  int v28; // [esp+28h] [ebp-20h] BYREF
  int v29; // [esp+2Ch] [ebp-1Ch] BYREF
  void **v30; // [esp+30h] [ebp-18h] BYREF
  void *Block; // [esp+34h] [ebp-14h]
  int v32; // [esp+38h] [ebp-10h]
  char v33; // [esp+3Dh] [ebp-Bh]
  int v34; // [esp+40h] [ebp-8h]
  int v35; // [esp+44h] [ebp-4h]

  v6 = v5; /*0x4df515*/
  v24[0] = (int)this->TechnoClass / 256; /*0x4df52b*/
  v24[1] = (int)this->? / 256; /*0x4df544*/
  v7 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24); /*0x4df563*/
  EventClass::resetEvent((EventClass *)&v30, 0, 0); /*0x4df565*/
  v30 = &DynamicVectorClass<TechnoClass *>::`vftable'; /*0x4df56a*/
  v35 = 10; /*0x4df572*/
  v34 = 0; /*0x4df57a*/
  v8 = (_BYTE *)v7[57]; /*0x4df57e*/
  if ( v8 ) /*0x4df586*/
  {
    while ( (v8[20] & 1) != 0 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 44))(v8) != 6 ) /*0x4df5a0*/
    {
      if ( v34 < v32 /*0x4df5cc*/
        || (v33 || !v32)
        && v35 > 0
        && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v30[2])(&v30, v35 + v32, 0) )
      {
        v9 = v34++; /*0x4df5d7*/
        *((_DWORD *)Block + v9) = v8; /*0x4df5e2*/
      }
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 212))(v8); /*0x4df5e9*/
      v8 = (_BYTE *)v7[57]; /*0x4df5ef*/
      if ( !v8 ) /*0x4df5f7*/
        goto LABEL_17; /*0x4df5f7*/
    }
    for ( i = v34 - 1; i >= 0; --i ) /*0x4df604*/
    {
      v11 = (_DWORD *)*((_DWORD *)Block + i); /*0x4df60f*/
      v27 = v11[39]; /*0x4df61e*/
      v28 = v11[40]; /*0x4df625*/
      v29 = v11[41]; /*0x4df631*/
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int *, _DWORD))(*v11 + 216))(v11, &v27, 0) ) /*0x4df639*/
        (*(void (__thiscall **)(_DWORD *))(*v11 + 248))(v11); /*0x4df647*/
    }
    goto LABEL_22; /*0x4df64e*/
  }
LABEL_17:
  if ( !(*(unsigned __int8 (__thiscall **)(int, FootClass *, _DWORD *))(*(_DWORD *)v6 + 216))(v6, this, a2) ) /*0x4df661*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 248))(v6); /*0x4df674*/
    for ( j = v34 - 1; j >= 0; --j ) /*0x4df683*/
    {
      v13 = (_DWORD *)*((_DWORD *)Block + j); /*0x4df68a*/
      v27 = v13[39]; /*0x4df699*/
      v28 = v13[40]; /*0x4df6a2*/
      v29 = v13[41]; /*0x4df6a9*/
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int *, _DWORD))(*v13 + 216))(v13, &v27, 0) ) /*0x4df6b4*/
        (*(void (__thiscall **)(_DWORD *))(*v13 + 248))(v13); /*0x4df6c2*/
    }
LABEL_22:
    v34 = 0; /*0x4df6cb*/
    if ( Block ) /*0x4df6d5*/
    {
      if ( v33 ) /*0x4df6db*/
        __3_YAXPAX_Z(Block); /*0x4df6de*/
    }
    return 0; /*0x4df6ef*/
  }
  for ( k = v34 - 1; k >= 0; --k ) /*0x4df6fb*/
  {
    v16 = (int *)*((_DWORD *)Block + k); /*0x4df713*/
    a4 = *(_DWORD *)(*(int (__thiscall **)(int *, __int16 *, int *, int))(*v16 + 440))(v16, v25, v22, v23); /*0x4df735*/
    v17 = *v16; /*0x4df739*/
    a3 = 0; /*0x4df741*/
    v18 = (*(int (__thiscall **)(int *))(v17 + 132))(v16); /*0x4df74b*/
    *(_DWORD *)v25 = *LayerClass::Pathfinding_Find( /*0x4df775*/
                        &stru_87F5F0.__pad_58[416],
                        (int)&a4,
                        &v28,
                        (__int16 *)&a4,
                        *(_DWORD *)(v18 + 1660),
                        -1,
                        0,
                        0,
                        1,
                        1,
                        0,
                        0,
                        0,
                        1,
                        (__int16 *)&a3,
                        0,
                        0);
    v19 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x4df77f*/
    v23 = 0; /*0x4df78a*/
    v20 = *v19; /*0x4df78b*/
    v22 = &v29; /*0x4df78d*/
    v26 = *v16; /*0x4df790*/
    v21 = (*(int (__thiscall **)(int *))(v20 + 72))(v19); /*0x4df794*/
    if ( !(*(unsigned __int8 (__thiscall **)(int *, int))(*(_DWORD *)v25 + 216))(v16, v21) ) /*0x4df79e*/
      (*(void (__thiscall **)(int *))(*v16 + 248))(v16); /*0x4df7ac*/
  }
  v30 = &VectorClass<TechnoClass *>::`vftable'; /*0x4df7bf*/
  if ( Block && v33 ) /*0x4df7cf*/
    __3_YAXPAX_Z(Block); /*0x4df7d2*/
  return 1; /*0x4df6e6*/
}



// ==== 0x004DF7F0  FootClass::Destru_vt322  this=FootClass  sig=csp ====
char __thiscall FootClass::Destru_vt322(FootClass *this, int a2, int a3, int a4)
{
  int InstanceCOM; // eax
  int v6; // eax
  void (__thiscall **vtable0)(FootClass *, CellClass *, int); // edi
  CellClass *v8; // eax
  LPVOID v9; // edi
  LPVOID v10; // eax
  int v11; // ecx
  int v12; // edx
  void (__thiscall **v13)(FootClass *, CellClass *, int); // edi
  int v14; // ecx
  CellClass *v15; // eax
  LPVOID ppv; // [esp+54h] [ebp-8h] BYREF
  int v18; // [esp+58h] [ebp-4h] BYREF

  if ( (*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 21))(this) /*0x4df83c*/
    || (*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 88))(this)
    || this->?
    || (*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 117))(this)
    || (*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 118))(this) )
  {
    return 0; /*0x4dfa40*/
  }
  ppv = 0; /*0x4df858*/
  InstanceCOM = CreateInstanceCOM((ObjectClass *)&ppv, (IID *)&g_CLSID_HoverLocomotion, 0, 7u); /*0x4df85c*/
  if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x4df86a*/
    WinAPI::Wrapper(InstanceCOM); /*0x4df86d*/
  v18 = 0; /*0x4df876*/
  if ( ppv ) /*0x4df87c*/
  {
    v6 = StreamClass::Set((StreamClass *)&v18, &ppv); /*0x4df887*/
    if ( v6 < 0 && v6 != -2147467262 ) /*0x4df895*/
      WinAPI::Wrapper(v6); /*0x4df898*/
  }
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2)->flags[0] & 0x100) != 0 ) /*0x4df8b5*/
    a4 += (int)FootClass_Array.?; /*0x4df8c3*/
  if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 1 ) /*0x4df8d1*/
  {
    if ( !this->locomotor[0] ) /*0x4df8d3*/
      WinAPI::Wrapper(-2147467261); /*0x4df8e0*/
    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)this->locomotor[0] + 156))(this->locomotor[0], 0); /*0x4df8ef*/
    if ( !this->locomotor[0] ) /*0x4df8f5*/
      WinAPI::Wrapper(-2147467261); /*0x4df910*/
    (*(void (__stdcall **)(int, int, int, int, int))(*(_DWORD *)this->locomotor[0] + 112))( /*0x4df92d*/
      this->locomotor[0],
      -1,
      a2,
      a3,
      a4);
    (*((void (__thiscall **)(FootClass *, int *))this->TechnoClass + 61))(this, &a2); /*0x4df939*/
    this->frozenStill = 1; /*0x4df93f*/
  }
  vtable0 = (void (__thiscall **)(FootClass *, CellClass *, int))this->TechnoClass; /*0x4df946*/
  v8 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2); /*0x4df954*/
  vtable0[288](this, v8, 1); /*0x4df95c*/
  (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x4df96a*/
  if ( !ppv ) /*0x4df976*/
    WinAPI::Wrapper(-2147467261); /*0x4df97d*/
  (*(void (__stdcall **)(LPVOID, FootClass *))(*(_DWORD *)ppv + 12))(ppv, this); /*0x4df98a*/
  if ( !v18 ) /*0x4df999*/
    WinAPI::Wrapper(-2147467261); /*0x4df9a0*/
  (*(void (__stdcall **)(int, int))(*(_DWORD *)v18 + 12))(v18, this->locomotor[0]); /*0x4df9ad*/
  v9 = (LPVOID)this->locomotor[0]; /*0x4df9b0*/
  v10 = ppv; /*0x4df9b6*/
  if ( v9 != ppv ) /*0x4df9bc*/
  {
    this->locomotor[0] = (int)ppv; /*0x4df9c0*/
    if ( v10 ) /*0x4df9c6*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v10 + 4))(v10); /*0x4df9cb*/
    if ( v9 ) /*0x4df9d0*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v9 + 8))(v9); /*0x4df9d5*/
  }
  v11 = a2; /*0x4df9d8*/
  v12 = a3; /*0x4df9dc*/
  v13 = (void (__thiscall **)(FootClass *, CellClass *, int))this->TechnoClass; /*0x4df9e6*/
  this->? = 1; /*0x4df9ea*/
  this->?[0] = v11; /*0x4df9f1*/
  v14 = a4; /*0x4df9f3*/
  this->?[1] = v12; /*0x4df9f7*/
  this->?[2] = v14; /*0x4df9ff*/
  v15 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2); /*0x4dfa07*/
  v13[288](this, v15, 1); /*0x4dfa0f*/
  if ( v18 ) /*0x4dfa1b*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v18 + 8))(v18); /*0x4dfa20*/
  if ( ppv ) /*0x4dfa29*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x4dfa2e*/
  return 1; /*0x4dfa33*/
}



// ==== 0x004DFA50  FootClass::IsNotAttackAndPlayer  this=FootClass  sig=csp ====
char __thiscall FootClass::IsNotAttackAndPlayer(FootClass *this)
{
  if ( this->isAttackedByLocomotor ) /*0x4dfa50*/
    return 0; /*0x4dfa5a*/
  else
    return ObjectClass::IsPlayerOwnedAndCheck((IUnknown *)this); /*0x4dfa5d*/
}



// ==== 0x004DFA70  TechnoClass::FindClosestInfantry  this=FootClass  sig=csp ====
char __thiscall TechnoClass::FindClosestInfantry(TechnoClass *this)
{
  double v1; // st7
  int v3; // ebp
  int v4; // ebx
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  int v7; // eax
  int v9; // [esp+24h] [ebp-2Ch]
  int v10; // [esp+28h] [ebp-28h]
  int v11; // [esp+30h] [ebp-20h]
  int v12; // [esp+34h] [ebp-1Ch]
  _BYTE v13[12]; // [esp+38h] [ebp-18h] BYREF
  _BYTE v14[12]; // [esp+44h] [ebp-Ch] BYREF

  v10 = 0; /*0x4dfa7f*/
  v9 = 0x7FFFFFFF; /*0x4dfa8d*/
  v3 = this->owner->psychicDetectionCount - 1; /*0x4dfa9b*/
  if ( v3 < 0 ) /*0x4dfa9c*/
    return 0; /*0x4dfa9c*/
  do /*0x4dfb31*/
  {
    v4 = *(_DWORD *)(this->owner->secretLabsCount + 4 * v3); /*0x4dfab3*/
    v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 72))(v4, v13); /*0x4dfabf*/
    v6 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v14); /*0x4dfac8*/
    v11 = v6[1] - v5[1]; /*0x4dfae6*/
    v12 = v6[2] - v5[2]; /*0x4dfaf0*/
    Math::Sqrt((double)(*v6 - *v5) * (double)(*v6 - *v5) + (double)v12 * (double)v12 + (double)v11 * (double)v11); /*0x4dfb15*/
    LOWORD(v7) = Math::RoundToInt(v1); /*0x4dfb1d*/
    if ( v7 < v9 ) /*0x4dfb26*/
    {
      v9 = v7; /*0x4dfb28*/
      v10 = v4; /*0x4dfb2c*/
    }
    --v3; /*0x4dfb30*/
  }
  while ( v3 >= 0 ); /*0x4dfb31*/
  if ( !v10 ) /*0x4dfb3d*/
    return 0; /*0x4dfb3f*/
  (*((void (__thiscall **)(TechnoClass *, int, int))this->RadioClass + 288))(this, v10, 1); /*0x4dfb50*/
  (*((void (__thiscall **)(TechnoClass *, int, _DWORD))this->RadioClass + 122))(this, 9, 0); /*0x4dfb5e*/
  return 1; /*0x4dfb41*/
}



// ==== 0x004DFB70  TechnoClass::FindClosestUnit  this=FootClass  sig=csp ====
char __thiscall TechnoClass::FindClosestUnit(TechnoClass *this)
{
  double v1; // st7
  int v3; // ebp
  int v4; // eax
  TechnoClass *v5; // edi
  _DWORD *v6; // ebx
  _DWORD *v7; // eax
  int v8; // eax
  int v10; // [esp+2Ch] [ebp-2Ch]
  TechnoClass *v11; // [esp+30h] [ebp-28h]
  int v12; // [esp+38h] [ebp-20h]
  int v13; // [esp+3Ch] [ebp-1Ch]
  _BYTE v14[12]; // [esp+40h] [ebp-18h] BYREF
  _BYTE v15[12]; // [esp+4Ch] [ebp-Ch] BYREF

  v11 = 0; /*0x4dfb7f*/
  v3 = 0x7FFFFFFF; /*0x4dfb8d*/
  v4 = this->owner->countResourceDestinations - 1; /*0x4dfb98*/
  v10 = v4; /*0x4dfb99*/
  if ( v4 < 0 ) /*0x4dfb9d*/
    goto LABEL_7; /*0x4dfb9d*/
  do /*0x4dfc48*/
  {
    v5 = *(TechnoClass **)(this->owner->productionFactory_plants_count + 4 * v4); /*0x4dfbb1*/
    if ( (*((int (__thiscall **)(TechnoClass *, int, TechnoClass *))this->RadioClass + 158))(this, 15, v5) == 1 ) /*0x4dfbc2*/
    {
      v6 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))v5->RadioClass + 18))(v5, v14); /*0x4dfbd2*/
      v7 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v15); /*0x4dfbdb*/
      v12 = v7[1] - v6[1]; /*0x4dfbf9*/
      v13 = v7[2] - v6[2]; /*0x4dfc03*/
      Math::Sqrt((double)(*v7 - *v6) * (double)(*v7 - *v6) + (double)v13 * (double)v13 + (double)v12 * (double)v12); /*0x4dfc28*/
      LOWORD(v8) = Math::RoundToInt(v1); /*0x4dfc30*/
      if ( v8 < v3 ) /*0x4dfc37*/
      {
        v3 = v8; /*0x4dfc39*/
        v11 = v5; /*0x4dfc3b*/
      }
    }
    v4 = --v10; /*0x4dfc43*/
  }
  while ( v10 >= 0 ); /*0x4dfc48*/
  if ( v11 ) /*0x4dfc54*/
  {
    this->shouldEnterAbsorber = 1; /*0x4dfc6b*/
    if ( (TechnoClass *)Team::GetMember((Team *)this, 0) != v11 && this->queueUpToEnter != v11 ) /*0x4dfc81*/
    {
      (*((void (__thiscall **)(TechnoClass *, int, _DWORD))this->RadioClass + 122))(this, 7, 0); /*0x4dfc8b*/
      (*((void (__thiscall **)(TechnoClass *, TechnoClass *, int))this->RadioClass + 288))(this, v11, 1); /*0x4dfc98*/
    }
    return 1; /*0x4dfc9f*/
  }
  else
  {
LABEL_7:
    this->shouldEnterAbsorber = 0; /*0x4dfc56*/
    return 0; /*0x4dfc5d*/
  }
}



// ==== 0x004DFCB0  FootClass::FindClosestForRepair  this=FootClass  sig=csp ====
char __fastcall BuildingClass::FindClosestForRepair(FootClass *this)
{
  double v1; // st7
  int v3; // ebp
  BuildingClass *v4; // ebx
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  AbstractClass *movementDestination; // ecx
  int v12; // [esp+24h] [ebp-2Ch]
  AbstractClass *v13; // [esp+28h] [ebp-28h]
  int v14; // [esp+30h] [ebp-20h]
  int v15; // [esp+34h] [ebp-1Ch]
  char v16[12]; // [esp+38h] [ebp-18h] BYREF
  char v17[12]; // [esp+44h] [ebp-Ch] BYREF

  v13 = 0; /*0x4dfcbf*/
  v12 = 0x7FFFFFFF; /*0x4dfccd*/
  v3 = this->?->airspeedMultiplier[0] - 1; /*0x4dfcdb*/
  if ( v3 < 0 ) /*0x4dfcdc*/
    goto LABEL_10; /*0x4dfcdc*/
  do
  {
    v4 = *(BuildingClass **)(this->?->TechnoClass::firepowerMultiplier[1] + 4 * v3); /*0x4dfcf3*/
    v5 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *))v4->TechnoClass + 18))(v4, v16); /*0x4dfcff*/
    v6 = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *))this->TechnoClass + 18))(this, v17); /*0x4dfd08*/
    v14 = v6[1] - v5[1]; /*0x4dfd28*/
    v15 = v6[2] - v5[2]; /*0x4dfd2c*/
    Math::Sqrt((double)(*v6 - *v5) * (double)(*v6 - *v5) + (double)v14 * (double)v14 + (double)v15 * (double)v15); /*0x4dfd55*/
    LOWORD(v7) = Math::RoundToInt(v1); /*0x4dfd5d*/
    v8 = v7; /*0x4dfd62*/
    if ( v7 < v12 )
    {
      v9 = this
         ? ((*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15
          ? (unsigned int)this
          : 0)
         : 0;
      if ( (unsigned __int8)BuildingClass::CanRepair(v4, v9) ) /*0x4dfd89*/
      {
        v12 = v8; /*0x4dfd92*/
        v13 = (AbstractClass *)v4; /*0x4dfd96*/
      }
    }
    --v3; /*0x4dfd9a*/
  }
  while ( v3 >= 0 );
  if ( v13 ) /*0x4dfda7*/
  {
    movementDestination = this->movementDestination; /*0x4dfdba*/
    this->shouldEnterOccupiable = 1; /*0x4dfdc0*/
    if ( movementDestination != v13 || this->? != 8 ) /*0x4dfdd2*/
    {
      (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, v13, 1); /*0x4dfddb*/
      (*((void (__thiscall **)(FootClass *, int, int))this->TechnoClass + 122))(this, 8, 1); /*0x4dfde9*/
    }
    return 1; /*0x4dfdf0*/
  }
  else
  {
LABEL_10:
    this->shouldEnterOccupiable = 0; /*0x4dfda9*/
    return 0; /*0x4dfdb0*/
  }
}



// ==== 0x004DFE00  FootClass::FindClosestForRepair2  this=FootClass  sig=csp ====
char __fastcall BuildingClass::FindClosestForRepair2(FootClass *this)
{
  double v1; // st7
  int v2; // eax
  int v4; // ebp
  BuildingClass *v5; // ebx
  FootClass *v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  int v9; // eax
  AbstractClass *movementDestination; // ecx
  int v12; // [esp+24h] [ebp-2Ch]
  AbstractClass *v13; // [esp+28h] [ebp-28h]
  int v14; // [esp+30h] [ebp-20h]
  int v15; // [esp+34h] [ebp-1Ch]
  char v16[12]; // [esp+38h] [ebp-18h] BYREF
  char v17[12]; // [esp+44h] [ebp-Ch] BYREF

  v2 = stru_A8EB00.ObjectTypeClass[20] - 1; /*0x4dfe0f*/
  v13 = 0; /*0x4dfe17*/
  v4 = 0x7FFFFFFF; /*0x4dfe1f*/
  v12 = stru_A8EB00.ObjectTypeClass[20] - 1; /*0x4dfe24*/
  if ( stru_A8EB00.ObjectTypeClass[20] - 1 < 0 ) /*0x4dfe28*/
    goto LABEL_10; /*0x4dfe28*/
  do
  {
    v5 = *(BuildingClass **)(stru_A8EB00.ObjectTypeClass[17] + 4 * v2); /*0x4dfe36*/
    if ( this )
      v6 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15 ? this : 0;
    else
      v6 = 0; /*0x4dfe3b*/
    if ( (unsigned __int8)BuildingClass::CanRepair(v5, (int)v6) ) /*0x4dfe54*/
    {
      v7 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *))v5->TechnoClass + 18))(v5, v16); /*0x4dfe6b*/
      v8 = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *))this->TechnoClass + 18))(this, v17); /*0x4dfe74*/
      v14 = v8[1] - v7[1]; /*0x4dfe92*/
      v15 = v8[2] - v7[2]; /*0x4dfe9c*/
      Math::Sqrt((double)(*v8 - *v7) * (double)(*v8 - *v7) + (double)v15 * (double)v15 + (double)v14 * (double)v14); /*0x4dfec1*/
      LOWORD(v9) = Math::RoundToInt(v1); /*0x4dfec9*/
      if ( v9 < v4 ) /*0x4dfed0*/
      {
        v4 = v9; /*0x4dfed2*/
        v13 = (AbstractClass *)v5; /*0x4dfed4*/
      }
    }
    v2 = --v12; /*0x4dfedc*/
  }
  while ( v12 >= 0 );
  if ( v13 ) /*0x4dfeed*/
  {
    movementDestination = this->movementDestination; /*0x4dff00*/
    this->shouldGarrisonStructure = 1; /*0x4dff06*/
    if ( movementDestination != v13 || this->? != 8 ) /*0x4dff18*/
    {
      (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, v13, 1); /*0x4dff21*/
      (*((void (__thiscall **)(FootClass *, int, int))this->TechnoClass + 122))(this, 8, 1); /*0x4dff2f*/
    }
    return 1; /*0x4dff36*/
  }
  else
  {
LABEL_10:
    this->shouldGarrisonStructure = 0; /*0x4dfeef*/
    return 0; /*0x4dfef6*/
  }
}



// ==== 0x004DFF40  TechnoClass::FindClosestBuilding  this=FootClass  sig=csp ====
char __thiscall TechnoClass::FindClosestBuilding(TechnoClass *this)
{
  double v1; // st7
  char result; // al
  int v4; // ebp
  int v5; // esi
  _DWORD *v6; // ebx
  _DWORD *v7; // eax
  int v8; // eax
  int v9; // ebx
  int v10; // [esp+24h] [ebp-2Ch]
  int v11; // [esp+28h] [ebp-28h]
  int v12; // [esp+30h] [ebp-20h]
  int v13; // [esp+34h] [ebp-1Ch]
  _BYTE v14[12]; // [esp+38h] [ebp-18h] BYREF
  _BYTE v15[12]; // [esp+44h] [ebp-Ch] BYREF

  result = TechnoClass::CanSelfRepair(this); /*0x4dff4f*/
  if ( result ) /*0x4dff56*/
  {
    v11 = 0; /*0x4dff66*/
    v10 = 0x7FFFFFFF; /*0x4dff6e*/
    v4 = this->owner->startingUnitsCapacity - 1; /*0x4dff7c*/
    if ( v4 < 0 ) /*0x4dff7d*/
      return 0; /*0x4dff7d*/
    do /*0x4e002d*/
    {
      v5 = *(_DWORD *)(this->owner->unitsSelfHeal + 4 * v4); /*0x4dff94*/
      v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 72))(v5, v14); /*0x4dffa0*/
      v7 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v15); /*0x4dffa9*/
      v12 = v7[1] - v6[1]; /*0x4dffc7*/
      v13 = v7[2] - v6[2]; /*0x4dffd1*/
      Math::Sqrt((double)(*v7 - *v6) * (double)(*v7 - *v6) + (double)v13 * (double)v13 + (double)v12 * (double)v12); /*0x4dfff6*/
      LOWORD(v8) = Math::RoundToInt(v1); /*0x4dfffe*/
      v9 = v8; /*0x4e0003*/
      if ( v8 < v10 && !Team::GetMember((Team *)v5, 0) && !*(_DWORD *)(v5 + 740) ) /*0x4e001a*/
      {
        v10 = v9; /*0x4e0024*/
        v11 = v5; /*0x4e0028*/
      }
      --v4; /*0x4e002c*/
    }
    while ( v4 >= 0 ); /*0x4e002d*/
    if ( v11 ) /*0x4e0039*/
    {
      (*((void (__thiscall **)(TechnoClass *, int, int))this->RadioClass + 288))(this, v11, 1); /*0x4e004c*/
      (*((void (__thiscall **)(TechnoClass *, int, int))this->RadioClass + 158))(this, 2, v11); /*0x4e0059*/
      (*((void (__thiscall **)(TechnoClass *, int, int))this->RadioClass + 122))(this, 7, 1); /*0x4e0067*/
      return 1; /*0x4e006e*/
    }
    else
    {
      return 0; /*0x4e003b*/
    }
  }
  return result; /*0x4dff58*/
}



// ==== 0x004D0180  DamageArea::CheckOccupancyEligibility  this=DamageArea  sig=csp ====
char __thiscall DamageArea::CheckOccupancyEligibility(DamageArea *this)
{
  _DWORD *v2; // esi
  int (__stdcall ***v3)(_DWORD, void *, int *); // ecx
  int v4; // eax
  int v5; // esi
  int v6; // edi
  int v8; // [esp+18h] [ebp-8h] BYREF
  int v9; // [esp+1Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)*((_DWORD *)this + 3); /*0x4d0187*/
  if ( v2 ) /*0x4d018c*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(*v2 + 44))(*((_DWORD *)this + 3)) == 2 ) /*0x4d0198*/
    {
      if ( (*(int (__stdcall **)(_DWORD *))(v2[432] + 32))(v2 + 432) ) /*0x4d01ab*/
        return 0; /*0x4d01b0*/
    }
    else
    {
      v2 = 0; /*0x4d019a*/
    }
  }
  if ( *((_BYTE *)this + 81) || !*((_BYTE *)this + 92) ) /*0x4d01c1*/
    return 1; /*0x4d01c6*/
  if ( !v2 || !*(_BYTE *)(v2[433] + 3595) ) /*0x4d01d6*/
  {
    v3 = (int (__stdcall ***)(_DWORD, void *, int *))*((_DWORD *)this + 3); /*0x4d01e4*/
    v4 = 0; /*0x4d01e7*/
    v8 = 0; /*0x4d01eb*/
    if ( v3 ) /*0x4d01ef*/
    {
      v5 = (**v3)(v3, &unk_822410, &v9); /*0x4d0204*/
      if ( v5 >= 0 ) /*0x4d0208*/
      {
        v6 = v9; /*0x4d021c*/
        Release3COM((ObjectClass *)&v8); /*0x4d0224*/
        v4 = v6; /*0x4d0229*/
        v8 = v6; /*0x4d022c*/
      }
      else
      {
        Release3COM((ObjectClass *)&v8); /*0x4d020e*/
        v4 = 0; /*0x4d0213*/
        v8 = 0; /*0x4d0215*/
      }
      if ( v5 < 0 && v5 != -2147467262 ) /*0x4d023a*/
        WinAPI::Wrapper(v5); /*0x4d023d*/
      if ( v4 ) /*0x4d0248*/
      {
        if ( !(*(int (__stdcall **)(int))(*(_DWORD *)v4 + 24))(v4) ) /*0x4d024d*/
        {
          if ( !v8 ) /*0x4d025a*/
            WinAPI::Wrapper(-2147467261); /*0x4d0261*/
          if ( !(*(int (__stdcall **)(int))(*(_DWORD *)v8 + 28))(v8) ) /*0x4d026d*/
          {
            v4 = v8; /*0x4d0274*/
            goto LABEL_24; /*0x4d0278*/
          }
        }
        v4 = v8; /*0x4d027a*/
      }
    }
    if ( !*(_DWORD *)(*((_DWORD *)this + 3) + 764) ) /*0x4d0281*/
    {
LABEL_24:
      if ( v4 ) /*0x4d028d*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x4d0292*/
      return 1; /*0x4d029c*/
    }
    if ( v4 ) /*0x4d029f*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x4d02a4*/
  }
  return 0; /*0x4d0295*/
}



// ==== 0x004D02B0  VoxelAnimClass::UpdateMatrix  this=VoxelAnimClass  sig=csp ====
char __thiscall VoxelAnimClass::UpdateMatrix(VoxelAnimClass *this)
{
  int v3; // eax
  int (__stdcall ***v4)(_DWORD, void *, int *); // eax
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h] BYREF

  if ( *(_DWORD *)&this->__pad_20[4] > Cell::GetGroundHeight(this->VoxelAnimClass_field_0x1C) + 120 ) /*0x4d02cc*/
    return 1; /*0x4d02d4*/
  v3 = *(_DWORD *)this->__pad_C; /*0x4d02d5*/
  if ( *(_DWORD *)(v3 + 692) && *(_DWORD *)(v3 + 764) ) /*0x4d02e2*/
    return 1; /*0x4d02f2*/
  v4 = *(int (__stdcall ****)(_DWORD, void *, int *))this->__pad_C; /*0x4d02f3*/
  v8 = 0; /*0x4d02f6*/
  if ( !v4 ) /*0x4d0300*/
    return 0; /*0x4d0300*/
  v5 = (**v4)(v4, &unk_822410, &v9); /*0x4d0311*/
  if ( v5 >= 0 ) /*0x4d0315*/
  {
    v7 = v9; /*0x4d0329*/
    Release3COM((ObjectClass *)&v8); /*0x4d0331*/
    v6 = v7; /*0x4d0336*/
    v8 = v7; /*0x4d0339*/
  }
  else
  {
    Release3COM((ObjectClass *)&v8); /*0x4d031b*/
    v6 = 0; /*0x4d0320*/
    v8 = 0; /*0x4d0322*/
  }
  if ( v5 < 0 && v5 != -2147467262 ) /*0x4d0347*/
    WinAPI::Wrapper(v5); /*0x4d034a*/
  if ( !v6 ) /*0x4d0355*/
    return 0; /*0x4d0355*/
  if ( !(*(int (__stdcall **)(int))(*(_DWORD *)v6 + 32))(v6) ) /*0x4d0363*/
  {
    if ( v8 ) /*0x4d0378*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x4d037d*/
    return 0; /*0x4d0380*/
  }
  if ( v8 ) /*0x4d0367*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x4d036c*/
  return 1; /*0x4d02d0*/
}



// ==== 0x004D0390  FlyLocomotionClass::StubReturn96  this=FlyLocomotionClass  sig=csp ====
int FlyLocomotionClass::StubReturn96(FlyLocomotionClass *this)
{
  return 96; /*0x4d0395*/
}



// ==== 0x004D03A0  FlyLocomotionClass::ProcessMove  this=FlyLocomotionClass  sig=csp ====
_DWORD *__thiscall FlyLocomotionClass::ProcessMove(FlyLocomotionClass *this, char a2)
{
  *(_DWORD *)this->LocomotionClass = &FlyLocomotionClass::`vftable'; /*0x4d03a3*/
  *(_DWORD *)&this->LocomotionClass[4] = &FlyLocomotionClass::`vftable'; /*0x4d03a9*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x4d03b0*/
  if ( (a2 & 1) != 0 ) /*0x4d03ba*/
    __3_YAXPAX_Z(this); /*0x4d03bd*/
  return this->LocomotionClass; /*0x4d03c7*/
}



// ==== 0x004D03D0  UnitClass::CompareCoordinateMagnitude  this=UnitClass  sig=csp ====
int __thiscall UnitClass::CompareCoordinateMagnitude(UnitClass *this, __int16 *a2)
{
  int result; // eax

  result = abs16((__int16)this->FootClass); /*0x4d03e7*/
  LOBYTE(result) = result >= abs16(*a2); /*0x4d03ef*/
  return result; /*0x4d03eb*/
}



// ==== 0x004D0400  JumpjetLocomotionClass::CheckWindowsErrorWrapper_0  this=JumpjetLocomotionClass  sig=csp ====
BOOL __thiscall JumpjetLocomotionClass::CheckWindowsErrorWrapper_0(JumpjetLocomotionClass *this, int a2)
{
  if ( a2 ) /*0x4d0409*/
    WinAPI::Wrapper(-2147467261); /*0x4d0410*/
  return this->LocomotionClass[0] == 0; /*0x4d041e*/
}



// ==== 0x004D0430  ObjectClass::Release3COM  this=ObjectClass  sig=csp ====
int __thiscall Release3COM(ObjectClass *this)
{
  int result; // eax

  result = (int)this->AbstractClass; /*0x4d0430*/
  if ( this->AbstractClass ) /*0x4d0430*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x4d0439*/
  return result; /*0x4d043c*/
}



// ==== 0x004D0440  ObjectVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall ObjectVector::Construct(ObjectVector *this, int a2, int a3)
{
  this->ObjectVector_field_0x04 = 0; /*0x4d044b*/
  this->ObjectVector_field_0x08 = a2; /*0x4d044e*/
  LOBYTE(this->ObjectVector_field_0x0C) = 1; /*0x4d0451*/
  BYTE1(this->ObjectVector_field_0x0C) = 0; /*0x4d0455*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ObjectClass *>::`vftable'; /*0x4d0458*/
  if ( a2 ) /*0x4d045e*/
  {
    if ( a3 ) /*0x4d0466*/
    {
      this->ObjectVector_field_0x04 = a3; /*0x4d0468*/
      return this->__pad_0; /*0x4d046e*/
    }
    this->ObjectVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x4d047d*/
    BYTE1(this->ObjectVector_field_0x0C) = 1; /*0x4d0480*/
  }
  return this->__pad_0; /*0x4d046d*/
}



// ==== 0x004D0490  ComPtr::ReleaseAndSet  this=ComPtr  sig=csp ====
int __thiscall ComPtr::ReleaseAndSet(ComPtr *this, _DWORD *a2)
{
  int v3; // edi
  _DWORD *v5; // ebx
  int v6; // eax

  if ( *a2 ) /*0x4d0498*/
  {
    v3 = (**(int (__stdcall ***)(_DWORD, void *, _DWORD **))*a2)(*a2, &unk_822410, &a2); /*0x4d04ad*/
    if ( v3 >= 0 ) /*0x4d04b1*/
    {
      v5 = a2; /*0x4d04cf*/
      if ( *(_DWORD *)this->__pad_0 ) /*0x4d04cc*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 8))(*(_DWORD *)this->__pad_0); /*0x4d04da*/
      *(_DWORD *)this->__pad_0 = v5; /*0x4d04dd*/
      return v3; /*0x4d04e0*/
    }
    else
    {
      if ( *(_DWORD *)this->__pad_0 ) /*0x4d04b3*/
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 8))(*(_DWORD *)this->__pad_0); /*0x4d04bc*/
      *(_DWORD *)this->__pad_0 = 0; /*0x4d04c1*/
      return v3; /*0x4d04bf*/
    }
  }
  else
  {
    v6 = *(_DWORD *)this->__pad_0; /*0x4d04e7*/
    if ( *(_DWORD *)this->__pad_0 ) /*0x4d04e7*/
    {
      *(_DWORD *)this->__pad_0 = 0; /*0x4d04ed*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x4d04f6*/
    }
    return -2147467262; /*0x4d04fe*/
  }
}



// ==== 0x004D0510  JumpjetLocomotionClass::GetInterface  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::_vt0(int a1, const void *a2, _DWORD *a3)
{
  return LocomotionClass::QueryInterface(a1 - 4, a2, a3);
}



// ==== 0x004D0520  JumpjetLocomotionClass::GetInterface2  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::_vt1(int a1)
{
  return COM::AddRef(a1 - 4);
}



// ==== 0x004D0530  JumpjetLocomotionClass::Stub2  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::_vt2(int a1)
{
  return COM::ReleaseRef((volatile LONG *)(a1 - 4));
}



// ==== 0x004D0540  sub_4D0540  this=-  sig=ida-proto ====
int sub_4D0540()
{
  dword_8B3CE0 = 0; /*0x4d0542*/
  dword_8B3CE4 = 0; /*0x4d0547*/
  dword_8B3CE8 = 0; /*0x4d054c*/
  dword_8B3CEC = 0; /*0x4d0551*/
  return 0; /*0x4d0556*/
}



// ==== 0x004D0560  sub_4D0560  this=-  sig=ida-proto ====
void sub_4D0560()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4d056c*/
  dbl_8B3CF8 = Math::Sqrt(v0 + v0); /*0x4d057e*/
}



// ==== 0x004D0590  sub_4D0590  this=-  sig=ida-proto ====
void sub_4D0590()
{
  dbl_8B3D60 = dbl_8B3CF8 / 60.0; /*0x4d059c*/
}



// ==== 0x004D05B0  sub_4D05B0  this=-  sig=ida-proto ====
void sub_4D05B0()
{
  dbl_8B3D48 = 1.0 / dbl_8B3D60; /*0x4d05bc*/
}



// ==== 0x004D05D0  sub_4D05D0  this=-  sig=ida-proto ====
void sub_4D05D0()
{
  dbl_8B3D40 = 0.0174532925199433 * 45.0; /*0x4d05dc*/
}



// ==== 0x004D05F0  sub_4D05F0  this=-  sig=ida-proto ====
void sub_4D05F0()
{
  dbl_8B3D00 = 0.0174532925199433 * 60.0; /*0x4d05fc*/
}



// ==== 0x004D0610  sub_4D0610  this=-  sig=ida-proto ====
void sub_4D0610()
{
  dbl_8B3CD8 = 0.0174532925199433 * 90.0; /*0x4d061c*/
}



// ==== 0x004D0630  sub_4D0630  this=-  sig=ida-proto ====
__int64 sub_4D0630()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8B3CD8 - dbl_8B3D00); /*0x4d0642*/
  result = Math::RoundToInt(v0 * dbl_8B3CF8 * 0.5); /*0x4d0656*/
  dword_8B3D68 = result; /*0x4d065b*/
  return result; /*0x4d0660*/
}



// ==== 0x004D0670  sub_4D0670  this=-  sig=ida-proto ====
void sub_4D0670()
{
  dbl_8B3D08 = Math::ArcTan((double)dword_8B3D68 * 0.00390625); /*0x4d0687*/
}



// ==== 0x004D06A0  sub_4D06A0  this=-  sig=ida-proto ====
void sub_4D06A0()
{
  dbl_8B3D38 = Math::ArcTan((double)(2 * dword_8B3D68) / dbl_8B3CF8); /*0x4d06c2*/
}



// ==== 0x004D06D0  sub_4D06D0  this=-  sig=ida-proto ====
__int64 sub_4D06D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8B3D68) + 0.5); /*0x4d06eb*/
  dword_8B3D5C = result; /*0x4d06f0*/
  return result; /*0x4d06f6*/
}



// ==== 0x004D0700  sub_4D0700  this=-  sig=ida-proto ====
int sub_4D0700()
{
  word_8B3CF0 = 0; /*0x4d0702*/
  word_8B3CF2 = 0; /*0x4d0708*/
  return 0; /*0x4d070e*/
}



// ==== 0x004D0710  sub_4D0710  this=-  sig=ida-proto ====
int sub_4D0710()
{
  dword_8B3D28 = 0; /*0x4d0712*/
  dword_8B3D2C = 0; /*0x4d0717*/
  dword_8B3D30 = 0; /*0x4d071c*/
  return 0; /*0x4d0721*/
}



// ==== 0x004D0730  sub_4D0730  this=-  sig=ida-proto ====
int sub_4D0730()
{
  dword_8B3D58 = 0; /*0x4d0735*/
  dword_8B3D50 = 128; /*0x4d073f*/
  dword_8B3D54 = 128; /*0x4d0744*/
  return 128; /*0x4d0749*/
}



// ==== 0x004D0750  sub_4D0750  this=-  sig=ida-proto ====
int sub_4D0750()
{
  dword_8B3D14 = 0; /*0x4d0757*/
  dword_8B3D18 = 0; /*0x4d075c*/
  byte_8B3D1C = 1; /*0x4d0761*/
  byte_8B3D1D = 0; /*0x4d0768*/
  dword_8B3D10 = (int)&DynamicVectorClass<FoggedObjectClass *>::`vftable'; /*0x4d076d*/
  dword_8B3D24 = 10; /*0x4d0777*/
  g_FootClassConfig = 0; /*0x4d0781*/
  return atexit(sub_4D0790); /*0x4d078c*/
}



// ==== 0x004D0790  sub_4D0790  this=-  sig=ida-proto ====
void __cdecl sub_4D0790()
{
  if ( (byte_8B3CD5 & 1) == 0 ) /*0x4d079a*/
  {
    dword_8B3D10 = (int)&VectorClass<FoggedObjectClass *>::`vftable'; /*0x4d079e*/
    byte_8B3CD5 |= 1u; /*0x4d07b1*/
    if ( dword_8B3D14 ) /*0x4d07b7*/
    {
      if ( byte_8B3D1D ) /*0x4d07c1*/
      {
        __3_YAXPAX_Z(dword_8B3D14); /*0x4d07c4*/
        dword_8B3D14 = 0; /*0x4d07cc*/
      }
    }
    byte_8B3D1D = 0; /*0x4d07d6*/
    dword_8B3D18 = 0; /*0x4d07dd*/
  }
}



// ==== 0x004D07F0  sub_4D07F0  this=-  sig=ida-proto ====
int sub_4D07F0()
{
  g_MissionPool = 0; /*0x4d07f7*/
  g_MissionState = 0; /*0x4d07fc*/
  dword_8B3CC8 = 0; /*0x4d0801*/
  byte_8B3CCC = 0; /*0x4d0806*/
  dword_8B3CD0 = 0; /*0x4d080b*/
  return atexit(sub_4D0820); /*0x4d0816*/
}



// ==== 0x004D0820  sub_4D0820  this=-  sig=ida-proto ====
void __cdecl sub_4D0820()
{
  if ( (byte_8B3CD4 & 1) == 0 ) /*0x4d082a*/
  {
    byte_8B3CD4 |= 1u; /*0x4d0836*/
    __3_YAXPAX_Z(g_MissionPool); /*0x4d083c*/
    g_MissionPool = 0; /*0x4d0846*/
    g_MissionState = 0; /*0x4d084b*/
    dword_8B3CC8 = 0; /*0x4d0850*/
    byte_8B3CCC = 0; /*0x4d0855*/
    dword_8B3CD0 = 0; /*0x4d085a*/
  }
}



// ==== 0x004D08B0  ObjectClass::Construct  this=FoggedObjectClass  sig=csp ====
_DWORD *__thiscall ObjectClass::Construct(ObjectClass *this)
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x4d08b3*/
  this->occupant = -1; /*0x4d08bd*/
  this->owningHouseIndex = 0; /*0x4d08c0*/
  this->fallRate = 0; /*0x4d08c3*/
  this->nextObject = 0; /*0x4d08c6*/
  this->attachedTag = 0; /*0x4d08c9*/
  this->attachedBomb = 0; /*0x4d08cc*/
  this->ambientSoundController[0] = 0; /*0x4d08cf*/
  this->ambientSoundController[1] = 0; /*0x4d08d2*/
  this->ambientSoundController[2] = 0; /*0x4d08d5*/
  this->ambientSoundController[3] = 0; /*0x4d08d8*/
  this->ambientSoundController[4] = 0; /*0x4d08db*/
  this->customSound_controller[1] = -1; /*0x4d08de*/
  this->customSound_controller[0] = 0; /*0x4d08e3*/
  this->customSound_controller[2] = 0; /*0x4d08e6*/
  this->customSound_controller[4] = 0; /*0x4d08e9*/
  this->customSound = 0; /*0x4d08ec*/
  this->bombVisible = 1; /*0x4d08ef*/
  this->alignmentPadding69[0] = 0; /*0x4d08f2*/
  this->customSound_controller[3] = (int)&DynamicVectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d08f5*/
  this->estimatedHealth = 10; /*0x4d08fc*/
  this->health = 0; /*0x4d0903*/
  this->isOnMap = 1; /*0x4d0906*/
  this->AbstractClass = &FoggedObjectClass::`vftable'; /*0x4d0909*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d090f*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d0916*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d091d*/
  if ( g_FootClassConfig < dword_8B3D18 /*0x4d0956*/
    || (byte_8B3D1D || !dword_8B3D18)
    && dword_8B3D24 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B3D10 + 8))(
         &dword_8B3D10,
         dword_8B3D18 + dword_8B3D24,
         0) )
  {
    v2 = g_FootClassConfig++; /*0x4d0963*/
    *((_DWORD *)dword_8B3D14 + v2) = this; /*0x4d0972*/
  }
  return &this->AbstractClass; /*0x4d0977*/
}



// ==== 0x004D0980  FoggedObjectClass::InitBuildingFog  this=FoggedObjectClass  sig=csp ====
int __thiscall FoggedObjectClass::InitBuildingFog(FoggedObjectClass *this, _DWORD *a2, int a3, int a4)
{
  CellClass *v5; // ebp
  int *PlacementRect; // edi
  int *StartCoords; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // ebp
  int v11; // ebx
  int v12; // eax
  int v13; // edi
  int v14; // ebp
  int v15; // ecx
  int v16; // edi
  int v17; // ebp
  unsigned int v18; // edi
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // edi
  int v24; // [esp+18h] [ebp-28h]
  int v25[4]; // [esp+20h] [ebp-20h] BYREF
  _DWORD v26[4]; // [esp+30h] [ebp-10h] BYREF
  _DWORD *v27; // [esp+44h] [ebp+4h]
  int v28; // [esp+48h] [ebp+8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x4d0989*/
  this->LastSight = a3; /*0x4d099e*/
  this->House = 0; /*0x4d09a1*/
  this->Cell[0] = a4; /*0x4d09a4*/
  this->vtable4 = 20; /*0x4d09a7*/
  *((_DWORD *)this + 13) = *a2; /*0x4d09b4*/
  *((_DWORD *)this + 14) = a2[1]; /*0x4d09b9*/
  *((_DWORD *)this + 15) = a2[2]; /*0x4d09c4*/
  this->abstractFlags = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2)->level; /*0x4d09da*/
  *((_DWORD *)this + 21) = -1; /*0x4d09dd*/
  *((_DWORD *)this + 22) = 0; /*0x4d09e4*/
  FoggedObject::DrawVector_Constructor((FoggedObject *)((char *)this + 92), 0, 0); /*0x4d09e7*/
  *((_DWORD *)this + 23) = &DynamicVectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d09ec*/
  this->referenceCount = 10; /*0x4d09f2*/
  *((_DWORD *)this + 27) = 0; /*0x4d09f9*/
  this->q01D = 1; /*0x4d0a02*/
  this->AbstractClass = &FoggedObjectClass::`vftable'; /*0x4d0a06*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d0a0c*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d0a13*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d0a1a*/
  v5 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x4d0a2a*/
  PlacementRect = BuildingClass::GetPlacementRect((BuildingClass *)v5, v25); /*0x4d0a3b*/
  StartCoords = House::GetStartCoords((House *)v5, v26); /*0x4d0a3d*/
  if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x4d0a4e*/
  {
    v8 = *PlacementRect; /*0x4d0adf*/
    v15 = PlacementRect[1]; /*0x4d0ae1*/
    v14 = PlacementRect[2]; /*0x4d0ae4*/
    v16 = PlacementRect[3]; /*0x4d0ae7*/
  }
  else
  {
    v28 = PlacementRect[2]; /*0x4d0a59*/
    if ( v28 <= 0 || (v27 = (_DWORD *)PlacementRect[3], (int)v27 <= 0) ) /*0x4d0a68*/
    {
      v8 = *StartCoords; /*0x4d0ad2*/
      v15 = StartCoords[1]; /*0x4d0ad4*/
      v14 = StartCoords[2]; /*0x4d0ad7*/
      v16 = StartCoords[3]; /*0x4d0ada*/
    }
    else
    {
      v8 = *StartCoords; /*0x4d0a6a*/
      v9 = *PlacementRect; /*0x4d0a6c*/
      v10 = StartCoords[2]; /*0x4d0a6e*/
      v11 = StartCoords[1]; /*0x4d0a71*/
      v12 = StartCoords[3]; /*0x4d0a74*/
      v24 = v10; /*0x4d0a79*/
      if ( v8 > *PlacementRect ) /*0x4d0a7d*/
      {
        v10 += v8 - v9; /*0x4d0a81*/
        v8 = *PlacementRect; /*0x4d0a83*/
        v24 = v10; /*0x4d0a85*/
      }
      v13 = PlacementRect[1]; /*0x4d0a89*/
      if ( v11 > v13 ) /*0x4d0a92*/
      {
        v12 += v11 - v13; /*0x4d0a96*/
        v11 = v13; /*0x4d0a98*/
      }
      if ( v8 + v10 >= v9 + v28 ) /*0x4d0aa4*/
        v14 = v24; /*0x4d0ab2*/
      else
        v14 = v9 - v8 + v28 + 1; /*0x4d0aac*/
      if ( v12 + v11 < (int)v27 + v13 ) /*0x4d0ac5*/
        v12 = (int)v27 + v13 - v11 + 1; /*0x4d0aca*/
      v15 = v11; /*0x4d0acc*/
      v16 = v12; /*0x4d0ace*/
    }
  }
  this->Count = v8; /*0x4d0aef*/
  this->q011 = v15; /*0x4d0af1*/
  this->IsInitialized = v14; /*0x4d0af4*/
  this->IsAllocated = v16; /*0x4d0af7*/
  v17 = this->q011; /*0x4d0b00*/
  this->Count += *(_DWORD *)&g_TacticalClass_Instance[44]; /*0x4d0b0d*/
  this->q011 = *(_DWORD *)&g_TacticalClass_Instance[45] + v17; /*0x4d0b1d*/
  v18 = this->q011 - (unsigned int)DSurface_ViewBounds.field_4; /*0x4d0b33*/
  this->Count -= DSurface_ViewBounds.field_0; /*0x4d0b35*/
  this->q011 = v18; /*0x4d0b37*/
  if ( g_FootClassConfig < dword_8B3D18 /*0x4d0b6f*/
    || (byte_8B3D1D || !dword_8B3D18)
    && dword_8B3D24 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B3D10 + 8))(
         &dword_8B3D10,
         dword_8B3D24 + dword_8B3D18,
         0) )
  {
    v19 = g_FootClassConfig++; /*0x4d0b7c*/
    *((_DWORD *)dword_8B3D14 + v19) = this; /*0x4d0b8b*/
  }
  v20 = (__int16)(*((_DWORD *)this + 13) / 256); /*0x4d0bb4*/
  v21 = dword_8B3CC8; /*0x4d0bcd*/
  v22 = 74 * ((__int16)(*((_DWORD *)this + 14) / 256) - ((v20 + (__int16)(*((_DWORD *)this + 14) / 256)) << 9) - v20) /*0x4d0bd6*/
      - this->vtable4
      + 0x7FFFFFFF;
  if ( (int)(g_MissionState + 1) <= dword_8B3CC8 ) /*0x4d0bdf*/
    goto LABEL_27; /*0x4d0bdf*/
  if ( !dword_8B3CC8 ) /*0x4d0be3*/
    v21 = 10; /*0x4d0be5*/
  if ( Vector::ReallocDynamic((int)&g_MissionPool, v21) ) /*0x4d0bf0*/
  {
LABEL_27:
    *((_DWORD *)g_MissionPool + 2 * g_MissionState) = v22; /*0x4d0c04*/
    *((_DWORD *)g_MissionPool + 2 * g_MissionState + 1) = this; /*0x4d0c12*/
    byte_8B3CCC = 0; /*0x4d0c1c*/
    ++g_MissionState; /*0x4d0c23*/
  }
  return (int)this; /*0x4d0c2a*/
}



// ==== 0x004D0C40  FoggedObjectClass::InitTerrainFog  this=FoggedObjectClass  sig=csp ====
int __thiscall FoggedObjectClass::InitTerrainFog(FoggedObjectClass *this, _DWORD *a2, int a3, int a4)
{
  int level; // eax
  CellClass *v6; // eax
  int v7; // edx
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // eax
  int v15; // edi
  int v16; // ebp
  _DWORD *v17; // ebx
  signed int i; // eax
  _DWORD *v19; // ecx
  int v21; // [esp+10h] [ebp-24h] BYREF
  int v22; // [esp+14h] [ebp-20h]
  _DWORD v23[2]; // [esp+18h] [ebp-1Ch] BYREF
  int v24; // [esp+20h] [ebp-14h]
  int v25; // [esp+30h] [ebp-4h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x4d0c49*/
  this->LastSight = -1; /*0x4d0c5a*/
  this->House = 0; /*0x4d0c61*/
  this->Cell[0] = 0; /*0x4d0c64*/
  this->vtable4 = 29; /*0x4d0c67*/
  level = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2)->level; /*0x4d0c73*/
  *((_DWORD *)this + 21) = a3; /*0x4d0c85*/
  this->abstractFlags = level; /*0x4d0c8c*/
  *((_DWORD *)this + 22) = a4; /*0x4d0c8f*/
  FoggedObject::DrawVector_Constructor((FoggedObject *)((char *)this + 92), 0, 0); /*0x4d0c92*/
  *((_DWORD *)this + 23) = &DynamicVectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d0c97*/
  this->referenceCount = 10; /*0x4d0c9e*/
  *((_DWORD *)this + 27) = 0; /*0x4d0ca5*/
  this->q01D = 1; /*0x4d0cae*/
  this->AbstractClass = &FoggedObjectClass::`vftable'; /*0x4d0cb2*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d0cb8*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d0cbf*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d0cc6*/
  v6 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2); /*0x4d0ccd*/
  v7 = a2[1]; /*0x4d0cd4*/
  v8 = a2[2]; /*0x4d0cd7*/
  v23[0] = *a2; /*0x4d0cda*/
  v23[1] = v7; /*0x4d0cde*/
  v24 = v8; /*0x4d0ce2*/
  v9 = dword_8B3D68 * v6->level; /*0x4d0ced*/
  v24 = v9; /*0x4d0cf7*/
  *((_DWORD *)this + 13) = v23[0]; /*0x4d0cfd*/
  *((_DWORD *)this + 14) = v7; /*0x4d0d03*/
  *((_DWORD *)this + 15) = v9; /*0x4d0d06*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v23, &v21); /*0x4d0d15*/
  v10 = v21 - 30; /*0x4d0d25*/
  v22 -= 15; /*0x4d0d32*/
  v11 = v22; /*0x4d0d2a*/
  this->Count = v21 - 30; /*0x4d0d36*/
  v25 = 30; /*0x4d0d38*/
  v21 = v10; /*0x4d0d40*/
  this->q011 = v11; /*0x4d0d44*/
  v12 = v25; /*0x4d0d47*/
  this->IsInitialized = 60; /*0x4d0d4b*/
  this->IsAllocated = v12; /*0x4d0d4e*/
  v13 = this->q011; /*0x4d0d61*/
  this->Count += *(_DWORD *)&g_TacticalClass_Instance[44]; /*0x4d0d64*/
  this->q011 = *(_DWORD *)&g_TacticalClass_Instance[45] + v13; /*0x4d0d73*/
  if ( g_FootClassConfig < dword_8B3D18 /*0x4d0dab*/
    || (byte_8B3D1D || !dword_8B3D18)
    && dword_8B3D24 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B3D10 + 8))(
         &dword_8B3D10,
         dword_8B3D18 + dword_8B3D24,
         0) )
  {
    v14 = g_FootClassConfig++; /*0x4d0db8*/
    *((_DWORD *)dword_8B3D14 + v14) = this; /*0x4d0dc7*/
  }
  v15 = 74 /*0x4d0e11*/
      * ((__int16)(*((_DWORD *)this + 14) / 256)
       - (((__int16)(*((_DWORD *)this + 13) / 256) + (__int16)(*((_DWORD *)this + 14) / 256)) << 9)
       - (__int16)(*((_DWORD *)this + 13) / 256))
      - this->vtable4
      + 0x7FFFFFFF;
  if ( (int)(g_MissionState + 1) <= dword_8B3CC8 ) /*0x4d0e1a*/
    goto LABEL_15; /*0x4d0e1a*/
  if ( dword_8B3CC8 ) /*0x4d0e22*/
  {
    v16 = dword_8B3CC8; /*0x4d0e2b*/
    if ( dword_8B3CC8 < 0 ) /*0x4d0e2f*/
      return (int)this; /*0x4d0e2f*/
  }
  else
  {
    v16 = 10; /*0x4d0e24*/
  }
  v17 = (_DWORD *)__2_YAPAXI_Z(8 * (v16 + dword_8B3CC8)); /*0x4d0e44*/
  if ( v17 ) /*0x4d0e4b*/
  {
    for ( i = 0; i < (int)g_MissionState; v17[2 * i - 1] = v19[1] ) /*0x4d0e64*/
    {
      v19 = (char *)g_MissionPool + 8 * i++; /*0x4d0e6c*/
      v17[2 * i - 2] = *v19; /*0x4d0e72*/
    }
    __3_YAXPAX_Z(g_MissionPool); /*0x4d0e8e*/
    g_MissionPool = v17; /*0x4d0e9d*/
    dword_8B3CC8 += v16; /*0x4d0ea3*/
    dword_8B3CD0 = 0; /*0x4d0ea8*/
LABEL_15:
    *((_DWORD *)g_MissionPool + 2 * g_MissionState) = v15; /*0x4d0eb2*/
    *((_DWORD *)g_MissionPool + 2 * g_MissionState + 1) = this; /*0x4d0ecb*/
    byte_8B3CCC = 0; /*0x4d0ed5*/
    ++g_MissionState; /*0x4d0edc*/
  }
  return (int)this; /*0x4d0ee3*/
}



// ==== 0x004D0EF0  FoggedObjectClass::Constructor  this=FoggedObjectClass  sig=csp ====
int __thiscall FoggedObjectClass::Constructor(int this, int *a2, char a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // esi
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ebp
  int ProductionFrame; // eax
  int v13; // ebp
  int v14; // eax
  char v15; // al
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int *v20; // edx
  int *v21; // ebx
  int *v22; // eax
  int *v23; // ecx
  int v24; // edx
  int v25; // ebp
  int v26; // ebx
  int v27; // ecx
  int v28; // ebx
  int v29; // eax
  int v30; // ebx
  int v31; // eax
  int v32; // ecx
  int v33; // edx
  int v34; // ebp
  int v35; // ecx
  int v36; // ebp
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  _DWORD *v40; // eax
  int v41; // ecx
  int v42; // edx
  bool v43; // zf
  int *v45; // [esp+20h] [ebp-40h]
  int v46; // [esp+24h] [ebp-3Ch]
  int v47; // [esp+28h] [ebp-38h]
  int v48; // [esp+2Ch] [ebp-34h]
  _DWORD v49[2]; // [esp+30h] [ebp-30h] BYREF
  int v50; // [esp+38h] [ebp-28h]
  int v51; // [esp+3Ch] [ebp-24h]
  char v52[8]; // [esp+40h] [ebp-20h] BYREF
  int v53; // [esp+48h] [ebp-18h]
  int v54; // [esp+4Ch] [ebp-14h]
  int v55[4]; // [esp+50h] [ebp-10h] BYREF
  int v56; // [esp+64h] [ebp+4h]
  int v57; // [esp+68h] [ebp+8h]
  int v58; // [esp+68h] [ebp+8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x4d0ef9*/
  *(_DWORD *)(this + 36) = -1; /*0x4d0f02*/
  v4 = a2[135]; /*0x4d0f0c*/
  *(_DWORD *)(this + 44) = 0; /*0x4d0f12*/
  *(_DWORD *)(this + 40) = v4; /*0x4d0f19*/
  *(_DWORD *)(this + 48) = 6; /*0x4d0f24*/
  *(_DWORD *)(this + 52) = a2[39]; /*0x4d0f2f*/
  *(_DWORD *)(this + 56) = a2[40]; /*0x4d0f34*/
  *(_DWORD *)(this + 60) = a2[41]; /*0x4d0f3a*/
  v5 = a2[40]; /*0x4d0f3f*/
  v49[0] = a2[39]; /*0x4d0f42*/
  v6 = a2[41]; /*0x4d0f46*/
  v49[1] = v5; /*0x4d0f4d*/
  v50 = v6; /*0x4d0f57*/
  v7 = this + 92; /*0x4d0f67*/
  *(_DWORD *)(this + 80) = *((char *)Coord::To_Cell(&dword_87F7E8, v49) + 283); /*0x4d0f6a*/
  *(_DWORD *)(this + 84) = -1; /*0x4d0f73*/
  *(_DWORD *)(this + 88) = 0; /*0x4d0f7a*/
  FoggedObject::DrawVector_Constructor((_DWORD *)(this + 92), 0, 0); /*0x4d0f81*/
  *(_DWORD *)(this + 92) = &DynamicVectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d0f8a*/
  *(_DWORD *)(this + 112) = 10; /*0x4d0f90*/
  *(_DWORD *)(this + 108) = 0; /*0x4d0f97*/
  *(_BYTE *)(this + 116) = a3; /*0x4d0fa2*/
  *(_DWORD *)this = &FoggedObjectClass::`vftable'; /*0x4d0fa5*/
  *(_DWORD *)(this + 4) = &FoggedObjectClass::`vftable'; /*0x4d0fab*/
  *(_DWORD *)(this + 8) = &FoggedObjectClass::`vftable'; /*0x4d0fb2*/
  *(_DWORD *)(this + 12) = &FoggedObjectClass::`vftable'; /*0x4d0fb9*/
  v8 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(*a2 + 300))(a2, v52); /*0x4d0fc5*/
  *(_DWORD *)(this + 64) = *v8; /*0x4d0fd2*/
  *(_DWORD *)(this + 68) = v8[1]; /*0x4d0fd7*/
  *(_DWORD *)(this + 72) = v8[2]; /*0x4d0fdd*/
  *(_DWORD *)(this + 76) = v8[3]; /*0x4d0fe3*/
  if ( g_FootClassConfig < dword_8B3D18 /*0x4d101a*/
    || (byte_8B3D1D || !dword_8B3D18)
    && dword_8B3D24 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B3D10 + 8))(
         &dword_8B3D10,
         dword_8B3D18 + dword_8B3D24,
         0) )
  {
    v9 = g_FootClassConfig++; /*0x4d1027*/
    *((_DWORD *)dword_8B3D14 + v9) = this; /*0x4d1036*/
  }
  v10 = dword_8B3CC8; /*0x4d107c*/
  v11 = 74 /*0x4d1081*/
      * ((__int16)(*(_DWORD *)(this + 56) / 256)
       - (((__int16)(*(_DWORD *)(this + 52) / 256) + (__int16)(*(_DWORD *)(this + 56) / 256)) << 9)
       - (__int16)(*(_DWORD *)(this + 52) / 256))
      - *(_DWORD *)(this + 48)
      + 0x7FFFFFFF;
  if ( (int)(g_MissionState + 1) <= dword_8B3CC8 ) /*0x4d108a*/
    goto LABEL_11; /*0x4d108a*/
  if ( !dword_8B3CC8 ) /*0x4d108e*/
    v10 = 10; /*0x4d1090*/
  if ( (unsigned __int8)Vector::ReallocDynamic(v10) ) /*0x4d109b*/
  {
LABEL_11:
    *((_DWORD *)g_MissionPool + 2 * g_MissionState) = v11; /*0x4d10af*/
    *((_DWORD *)g_MissionPool + 2 * g_MissionState + 1) = this; /*0x4d10bd*/
    byte_8B3CCC = 0; /*0x4d10c7*/
    ++g_MissionState; /*0x4d10ce*/
  }
  *((_BYTE *)a2 + 1767) = 1; /*0x4d10d5*/
  ProductionFrame = BuildingClass::GetProductionFrame(a2); /*0x4d10dc*/
  v13 = a2[328]; /*0x4d10e1*/
  v57 = ProductionFrame; /*0x4d10e7*/
  if ( *(_BYTE *)(v13 + 5823) && ((v14 = a2[390], v14 == 12) || v14 == 8) /*0x4d1112*/
    || (v15 = *(_BYTE *)(v13 + 5824), LOBYTE(v53) = 0, v15) )
  {
    LOBYTE(v53) = 1; /*0x4d1114*/
  }
  v16 = *(_DWORD *)(this + 100); /*0x4d1119*/
  if ( *(_DWORD *)(this + 108) < v16 /*0x4d113e*/
    || (*(_BYTE *)(this + 105) || !v16)
    && (v17 = *(_DWORD *)(this + 112), v17 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7 + 8))(this + 92, v16 + v17, 0) )
  {
    v18 = *(_DWORD *)(this + 108); /*0x4d1145*/
    *(_DWORD *)(this + 108) = v18 + 1; /*0x4d114b*/
    v19 = v53; /*0x4d1156*/
    v20 = (int *)(*(_DWORD *)(this + 96) + 16 * v18); /*0x4d115a*/
    *v20 = v13; /*0x4d1160*/
    v20[1] = v57; /*0x4d1162*/
    v20[2] = v19; /*0x4d1167*/
    v20[3] = 0; /*0x4d116a*/
  }
  v21 = a2 + 343; /*0x4d116d*/
  v46 = 21; /*0x4d1173*/
  v45 = a2 + 343; /*0x4d117b*/
  do /*0x4d130a*/
  {
    if ( !*v21 ) /*0x4d1183*/
      goto LABEL_47; /*0x4d1183*/
    *(_BYTE *)(*v21 + 409) = 1; /*0x4d1189*/
    v56 = *(_DWORD *)(*v21 + 200); /*0x4d119a*/
    v22 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)*v21 + 296))(*v21, v55); /*0x4d11a3*/
    v23 = (int *)(this + 64); /*0x4d11ac*/
    if ( *(int *)(this + 72) <= 0 || *(int *)(this + 76) <= 0 ) /*0x4d11bc*/
    {
      v32 = *v22; /*0x4d1266*/
      v33 = v22[1]; /*0x4d1268*/
      v34 = v22[2]; /*0x4d126b*/
    }
    else
    {
      v58 = v22[2]; /*0x4d11c7*/
      if ( v58 > 0 ) /*0x4d11cb*/
      {
        v48 = v22[3]; /*0x4d11d6*/
        if ( v48 > 0 ) /*0x4d11da*/
        {
          v24 = *v23; /*0x4d11dc*/
          v25 = *(_DWORD *)(this + 68); /*0x4d11de*/
          v26 = *(_DWORD *)(this + 72); /*0x4d11e1*/
          v50 = v26; /*0x4d11e4*/
          v51 = *(_DWORD *)(this + 76); /*0x4d11eb*/
          v27 = *v22; /*0x4d11ef*/
          if ( v24 > *v22 ) /*0x4d11f3*/
          {
            v28 = v24 - v27 + v26; /*0x4d11f7*/
            v24 = *v22; /*0x4d11f9*/
            v50 = v28; /*0x4d11fb*/
          }
          v29 = v22[1]; /*0x4d11ff*/
          v47 = v29; /*0x4d1204*/
          if ( v25 > v29 ) /*0x4d1208*/
          {
            v30 = v25 - v29 + v51; /*0x4d1210*/
            v25 = v29; /*0x4d1212*/
            v51 = v30; /*0x4d1214*/
          }
          if ( v24 + v50 < v27 + v58 ) /*0x4d1226*/
            v50 = v27 - v24 + v58 + 1; /*0x4d1232*/
          v31 = v51; /*0x4d1240*/
          if ( v51 + v25 < v47 + v48 ) /*0x4d1249*/
            v31 = v47 + v48 - v25 + 1; /*0x4d124e*/
          v32 = v24; /*0x4d1250*/
          v33 = v25; /*0x4d1252*/
          v34 = v50; /*0x4d1254*/
          goto LABEL_41; /*0x4d1258*/
        }
      }
      v22 = (int *)(this + 64); /*0x4d125a*/
      v32 = *v23; /*0x4d125c*/
      v33 = *(_DWORD *)(this + 68); /*0x4d125e*/
      v34 = *(_DWORD *)(this + 72); /*0x4d1261*/
    }
    v31 = v22[3]; /*0x4d126e*/
LABEL_41:
    LOBYTE(v53) = 0; /*0x4d1271*/
    *(_DWORD *)(this + 64) = v32; /*0x4d1279*/
    *(_DWORD *)(this + 68) = v33; /*0x4d127f*/
    *(_DWORD *)(this + 72) = v34; /*0x4d1282*/
    *(_DWORD *)(this + 76) = v31; /*0x4d1285*/
    v21 = v45; /*0x4d1288*/
    v35 = *(_DWORD *)(this + 108); /*0x4d1292*/
    v36 = *(_DWORD *)(v56 + 692) + *(_DWORD *)(*v45 + 172); /*0x4d129d*/
    v37 = *(_DWORD *)(this + 100); /*0x4d12a5*/
    v54 = *(_DWORD *)(*v45 + 256); /*0x4d12a8*/
    if ( v35 < v37 /*0x4d12cb*/
      || (*(_BYTE *)(this + 105) || !v37)
      && (v38 = *(_DWORD *)(this + 112), v38 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7 + 8))(this + 92, v37 + v38, 0) )
    {
      v39 = *(_DWORD *)(this + 108); /*0x4d12d2*/
      *(_DWORD *)(this + 108) = v39 + 1; /*0x4d12dc*/
      v40 = (_DWORD *)(*(_DWORD *)(this + 96) + 16 * v39); /*0x4d12e5*/
      v41 = v53; /*0x4d12e7*/
      *v40 = v56; /*0x4d12eb*/
      v42 = v54; /*0x4d12ed*/
      v40[1] = v36; /*0x4d12f1*/
      v40[2] = v41; /*0x4d12f4*/
      v40[3] = v42; /*0x4d12f7*/
    }
LABEL_47:
    ++v21; /*0x4d12fa*/
    v43 = v46 == 1; /*0x4d1301*/
    v45 = v21; /*0x4d1302*/
    --v46; /*0x4d1306*/
  }
  while ( !v43 ); /*0x4d130a*/
  Cell::CreateCrater(*(_DWORD *)(this + 64), *(_DWORD *)(this + 68), *(_DWORD *)(this + 72), *(_DWORD *)(this + 76), 0); /*0x4d1338*/
  *(_DWORD *)(this + 64) += g_TacticalClass_Instance[44].__tail_0; /*0x4d134d*/
  *(_DWORD *)(this + 68) += g_TacticalClass_Instance[45].__tail_0; /*0x4d135f*/
  return this; /*0x4d1364*/
}



// ==== 0x004D1370  FoggedObjectClass::InitDrawRecord  this=FoggedObjectClass  sig=csp ====
int __thiscall FoggedObjectClass::InitDrawRecord(FoggedObjectClass *this, _DWORD *a2)
{
  int v3; // edx
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // ebp
  _DWORD *v18; // ebx
  signed int i; // eax
  _DWORD *v20; // ecx
  _DWORD v22[2]; // [esp+10h] [ebp-10h] BYREF
  int v23; // [esp+18h] [ebp-8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x4d1379*/
  this->LastSight = -1; /*0x4d1384*/
  this->House = 0; /*0x4d138b*/
  this->Cell[0] = 0; /*0x4d1394*/
  this->vtable4 = 36; /*0x4d1399*/
  *((_DWORD *)this + 13) = a2[39]; /*0x4d13a5*/
  *((_DWORD *)this + 14) = a2[40]; /*0x4d13aa*/
  *((_DWORD *)this + 15) = a2[41]; /*0x4d13b0*/
  v3 = a2[40]; /*0x4d13b5*/
  v4 = a2[41]; /*0x4d13b8*/
  v22[0] = a2[39]; /*0x4d13bb*/
  v22[1] = v3; /*0x4d13c9*/
  v23 = v4; /*0x4d13cd*/
  this->abstractFlags = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v22)->level; /*0x4d13e4*/
  *((_DWORD *)this + 21) = -1; /*0x4d13e7*/
  *((_DWORD *)this + 22) = 0; /*0x4d13ee*/
  FoggedObject::DrawVector_Constructor((FoggedObject *)((char *)this + 92), 0, 0); /*0x4d13f1*/
  *((_DWORD *)this + 23) = &DynamicVectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d13f6*/
  this->referenceCount = 10; /*0x4d13fc*/
  *((_DWORD *)this + 27) = 0; /*0x4d1403*/
  this->q01D = 1; /*0x4d140a*/
  this->AbstractClass = &FoggedObjectClass::`vftable'; /*0x4d140e*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d1414*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d141b*/
  this->? = &FoggedObjectClass::`vftable'; /*0x4d1422*/
  v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*a2 + 300))(a2, v22); /*0x4d1431*/
  this->Count = *v5; /*0x4d143b*/
  this->q011 = v5[1]; /*0x4d1440*/
  this->IsInitialized = v5[2]; /*0x4d1446*/
  this->IsAllocated = v5[3]; /*0x4d144c*/
  v6 = this->q011; /*0x4d1460*/
  this->Count += *(_DWORD *)&g_TacticalClass_Instance[44]; /*0x4d1463*/
  this->q011 = *(_DWORD *)&g_TacticalClass_Instance[45] + v6; /*0x4d1473*/
  if ( g_FootClassConfig < dword_8B3D18 /*0x4d14ab*/
    || (byte_8B3D1D || !dword_8B3D18)
    && dword_8B3D24 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B3D10 + 8))(
         &dword_8B3D10,
         dword_8B3D18 + dword_8B3D24,
         0) )
  {
    v7 = g_FootClassConfig++; /*0x4d14b8*/
    *((_DWORD *)dword_8B3D14 + v7) = this; /*0x4d14c7*/
  }
  v8 = *((_DWORD *)this + 25); /*0x4d14ca*/
  v9 = *((_DWORD *)this + 27); /*0x4d14cd*/
  v10 = a2[50]; /*0x4d14d0*/
  LOBYTE(v23) = 0; /*0x4d14da*/
  if ( v9 < v8 /*0x4d14fc*/
    || (*((_BYTE *)this + 105) || !v8)
    && (v11 = this->referenceCount, v11 > 0)
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)this + 23) + 8))(
         (char *)this + 92,
         v8 + v11,
         0) )
  {
    v12 = *((_DWORD *)this + 27); /*0x4d1503*/
    *((_DWORD *)this + 27) = v12 + 1; /*0x4d1509*/
    v13 = (_DWORD *)(this->nextArrayIndex + 16 * v12); /*0x4d1514*/
    v14 = v23; /*0x4d1516*/
    *v13 = v10; /*0x4d151a*/
    v13[1] = 0; /*0x4d151c*/
    v13[2] = v14; /*0x4d151f*/
    v13[3] = 0; /*0x4d1524*/
  }
  v15 = (__int16)(*((_DWORD *)this + 13) / 256); /*0x4d154d*/
  v16 = 74 * ((__int16)(*((_DWORD *)this + 14) / 256) - ((v15 + (__int16)(*((_DWORD *)this + 14) / 256)) << 9) - v15) /*0x4d156f*/
      - this->vtable4
      + 0x7FFFFFFF;
  if ( (int)(g_MissionState + 1) <= dword_8B3CC8 ) /*0x4d1578*/
    goto LABEL_21; /*0x4d1578*/
  if ( dword_8B3CC8 ) /*0x4d1580*/
  {
    v17 = dword_8B3CC8; /*0x4d1589*/
    if ( dword_8B3CC8 < 0 ) /*0x4d158d*/
      return (int)this; /*0x4d158d*/
  }
  else
  {
    v17 = 10; /*0x4d1582*/
  }
  v18 = (_DWORD *)__2_YAPAXI_Z(8 * (v17 + dword_8B3CC8)); /*0x4d15a2*/
  if ( v18 ) /*0x4d15a9*/
  {
    for ( i = 0; i < (int)g_MissionState; v18[2 * i - 1] = v20[1] ) /*0x4d15c2*/
    {
      v20 = (char *)g_MissionPool + 8 * i++; /*0x4d15ca*/
      v18[2 * i - 2] = *v20; /*0x4d15d0*/
    }
    __3_YAXPAX_Z(g_MissionPool); /*0x4d15ec*/
    g_MissionPool = v18; /*0x4d15fb*/
    dword_8B3CC8 += v17; /*0x4d1601*/
    dword_8B3CD0 = 0; /*0x4d1606*/
LABEL_21:
    *((_DWORD *)g_MissionPool + 2 * g_MissionState) = v16; /*0x4d1610*/
    *((_DWORD *)g_MissionPool + 2 * g_MissionState + 1) = this; /*0x4d1629*/
    byte_8B3CCC = 0; /*0x4d1633*/
    ++g_MissionState; /*0x4d163a*/
  }
  return (int)this; /*0x4d1641*/
}



// ==== 0x004D1650  FoggedObjectClass::DestructFoggedObjectClass  this=FoggedObjectClass  sig=csp ====
int __fastcall DestructFoggedObjectClass(int a1)
{
  int v2; // eax
  int v3; // kr00_4
  int v4; // edx
  int v5; // esi
  int v6; // eax
  int v7; // eax
  signed int v8; // ecx
  size_t i; // eax
  _DWORD *v10; // eax
  Cell *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // ecx
  int v14; // edx
  void *v15; // eax
  __int16 v17[4]; // [esp+10h] [ebp-Ch] BYREF
  __int16 v18[2]; // [esp+18h] [ebp-4h] BYREF

  *(_DWORD *)a1 = &FoggedObjectClass::`vftable'; /*0x4d1663*/
  *(_DWORD *)(a1 + 4) = &FoggedObjectClass::`vftable'; /*0x4d1669*/
  *(_DWORD *)(a1 + 8) = &FoggedObjectClass::`vftable'; /*0x4d1670*/
  *(_DWORD *)(a1 + 12) = &FoggedObjectClass::`vftable'; /*0x4d1677*/
  *(_DWORD *)v17 = a1; /*0x4d1684*/
  v2 = (*(int (__thiscall **)(int *, __int16 *))(dword_8B3D10 + 16))(&dword_8B3D10, v17); /*0x4d1688*/
  if ( v2 != -1 && v2 < g_FootClassConfig && v2 < --g_FootClassConfig ) /*0x4d16a3*/
  {
    do /*0x4d16bb*/
    {
      ++v2; /*0x4d16ab*/
      *((_DWORD *)dword_8B3D14 + v2 - 1) = *((_DWORD *)dword_8B3D14 + v2); /*0x4d16af*/
    }
    while ( v2 < g_FootClassConfig ); /*0x4d16bb*/
  }
  v3 = *(_DWORD *)(a1 + 56); /*0x4d16d7*/
  v17[0] = *(_DWORD *)(a1 + 52) / 256; /*0x4d16df*/
  v17[1] = v3 / 256; /*0x4d16e4*/
  *(_DWORD *)v18 = *(_DWORD *)v17; /*0x4d16f3*/
  v4 = g_MissionState; /*0x4d170e*/
  v5 = 74 * (v17[1] - ((v17[0] + v17[1]) << 9) - v17[0]) - *(_DWORD *)(a1 + 48) + 0x7FFFFFFF; /*0x4d1714*/
  if ( g_MissionState ) /*0x4d171c*/
  {
    if ( !byte_8B3CCC ) /*0x4d1728*/
    {
      qsort(g_MissionPool, g_MissionState, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)globalHelper_0D2ED0); /*0x4d1739*/
      v4 = g_MissionState; /*0x4d173e*/
      dword_8B3CD0 = 0; /*0x4d1747*/
      byte_8B3CCC = 1; /*0x4d174d*/
    }
    *(_DWORD *)v17 = v5; /*0x4d175f*/
    v6 = sub_4D2F00((int)g_MissionPool, v4, (int *)v17); /*0x4d1763*/
    if ( v6 ) /*0x4d176a*/
    {
      v7 = (v6 - (int)g_MissionPool) >> 3; /*0x4d1772*/
      if ( v7 != -1 ) /*0x4d1778*/
      {
        v8 = v7 + 1; /*0x4d177a*/
        for ( i = g_MissionState; v8 < (int)g_MissionState; i = g_MissionState ) /*0x4d1784*/
        {
          v10 = (char *)g_MissionPool + 8 * v8++; /*0x4d178c*/
          *(v10 - 2) = *v10; /*0x4d1792*/
          *(v10 - 1) = v10[1]; /*0x4d1798*/
        }
        g_MissionState = i - 1; /*0x4d17ad*/
        *((_DWORD *)g_MissionPool + 2 * g_MissionState) = 0; /*0x4d17b2*/
        *((_DWORD *)g_MissionPool + 2 * g_MissionState + 1) = 0; /*0x4d17c2*/
        dword_8B3CD0 = 0; /*0x4d17c6*/
      }
    }
  }
  if ( *(_DWORD *)(a1 + 48) == 6 ) /*0x4d17d0*/
  {
    v11 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v18); /*0x4d17dc*/
    v12 = Cell::IsBridge(v11); /*0x4d17e3*/
    if ( v12 ) /*0x4d17ea*/
    {
      *((_BYTE *)v12 + 1767) = 0; /*0x4d17ec*/
      v13 = v12 + 343; /*0x4d17f2*/
      v14 = 21; /*0x4d17f8*/
      do /*0x4d180d*/
      {
        if ( *v13 ) /*0x4d17fd*/
          *(_BYTE *)(*v13 + 409) = 0; /*0x4d1803*/
        ++v13; /*0x4d1809*/
        --v14; /*0x4d180c*/
      }
      while ( v14 ); /*0x4d180d*/
    }
  }
  if ( g_TacticalClass_Instance ) /*0x4d1817*/
    Cell::CreateCrater( /*0x4d184b*/
      *(_DWORD *)(a1 + 64) - *(_DWORD *)&g_TacticalClass_Instance[44],
      *(_DWORD *)(a1 + 68) - *(_DWORD *)&g_TacticalClass_Instance[45],
      *(_DWORD *)(a1 + 72),
      *(_DWORD *)(a1 + 76),
      0);
  v15 = *(void **)(a1 + 96); /*0x4d1852*/
  *(_DWORD *)(a1 + 92) = &VectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d1855*/
  if ( v15 && *(_BYTE *)(a1 + 105) ) /*0x4d1860*/
  {
    __3_YAXPAX_Z(v15); /*0x4d1866*/
    *(_DWORD *)(a1 + 96) = 0; /*0x4d186e*/
  }
  *(_BYTE *)(a1 + 105) = 0; /*0x4d1873*/
  *(_DWORD *)(a1 + 100) = 0; /*0x4d1876*/
  return AbstractClass::DTOR((AbstractClass *)a1); /*0x4d187e*/
}



// ==== 0x004D1890  TacticalClass::DrawBuildings  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::DrawBuildings(TacticalClass *this)
{
  int result; // eax
  int v3; // esi
  int v4; // ebx
  int *v5; // eax
  CellClass *v6; // esi
  int v7; // ebp
  int powerup; // eax
  _DWORD *v9; // esi
  CellClass *v10; // ebp
  int v11; // ebx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // esi
  int v17; // ecx
  _BYTE *v18; // esi
  int *v19; // ebp
  int v20; // ecx
  int v21; // edx
  int v22; // edx
  char v23; // al
  int v24; // ecx
  void *v25; // eax
  int *v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // edx
  int v31; // eax
  CellClass *v32; // eax
  int *v33; // ecx
  int v34; // ebp
  int v35; // esi
  _DWORD *v36; // ebp
  int v37; // ecx
  int v38; // edx
  int v39; // ecx
  int v40; // eax
  int v41; // edx
  int v42; // ebp
  char *vtable1; // ebp
  void *v44; // edx
  IPersistStream v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // ecx
  int v49; // ebp
  CellClass *v50; // eax
  int v51; // esi
  int v52; // [esp-28h] [ebp-174h]
  int v53; // [esp-28h] [ebp-174h]
  int v54; // [esp-24h] [ebp-170h]
  int v55; // [esp-20h] [ebp-16Ch]
  int v56; // [esp-20h] [ebp-16Ch]
  int v57; // [esp+8h] [ebp-144h]
  int v58; // [esp+8h] [ebp-144h]
  int v59; // [esp+8h] [ebp-144h]
  int *v60; // [esp+Ch] [ebp-140h]
  int *v61; // [esp+Ch] [ebp-140h]
  char v62; // [esp+10h] [ebp-13Ch]
  int v63; // [esp+10h] [ebp-13Ch]
  int *v64; // [esp+10h] [ebp-13Ch]
  int v65; // [esp+10h] [ebp-13Ch]
  int v66; // [esp+14h] [ebp-138h]
  unsigned int v67; // [esp+18h] [ebp-134h]
  signed int j; // [esp+18h] [ebp-134h]
  unsigned int v69; // [esp+1Ch] [ebp-130h]
  char v70; // [esp+23h] [ebp-129h]
  int v71; // [esp+24h] [ebp-128h]
  CellClass *v72; // [esp+24h] [ebp-128h]
  int v73; // [esp+28h] [ebp-124h]
  int v74; // [esp+28h] [ebp-124h]
  int v75; // [esp+2Ch] [ebp-120h]
  int v76; // [esp+2Ch] [ebp-120h]
  int v77; // [esp+30h] [ebp-11Ch] BYREF
  int v78; // [esp+34h] [ebp-118h]
  int v79; // [esp+38h] [ebp-114h] BYREF
  int v80; // [esp+3Ch] [ebp-110h]
  int v81; // [esp+40h] [ebp-10Ch] BYREF
  int v82; // [esp+44h] [ebp-108h]
  int v83[2]; // [esp+48h] [ebp-104h] BYREF
  int v84; // [esp+50h] [ebp-FCh]
  int v85; // [esp+54h] [ebp-F8h]
  signed int i; // [esp+60h] [ebp-ECh]
  int v87[2]; // [esp+64h] [ebp-E8h] BYREF
  int v88[3]; // [esp+6Ch] [ebp-E0h] BYREF
  void *vtable3; // [esp+78h] [ebp-D4h]
  IPersistStream v90; // [esp+7Ch] [ebp-D0h]
  IPersistStream v91; // [esp+80h] [ebp-CCh]
  int v92; // [esp+84h] [ebp-C8h]
  int v93; // [esp+88h] [ebp-C4h] BYREF
  char *v94; // [esp+8Ch] [ebp-C0h]
  int v95; // [esp+90h] [ebp-BCh]
  int v96; // [esp+94h] [ebp-B8h]
  _DWORD v97[2]; // [esp+98h] [ebp-B4h] BYREF
  int v98[2]; // [esp+A0h] [ebp-ACh] BYREF
  _DWORD v99[3]; // [esp+A8h] [ebp-A4h] BYREF
  _DWORD v100[3]; // [esp+B4h] [ebp-98h] BYREF
  _DWORD v101[3]; // [esp+C0h] [ebp-8Ch] BYREF
  _DWORD v102[3]; // [esp+CCh] [ebp-80h] BYREF
  _DWORD v103[3]; // [esp+D8h] [ebp-74h] BYREF
  _DWORD v104[3]; // [esp+E4h] [ebp-68h] BYREF
  _DWORD v105[3]; // [esp+F0h] [ebp-5Ch] BYREF
  _DWORD v106[3]; // [esp+FCh] [ebp-50h] BYREF
  _DWORD v107[3]; // [esp+108h] [ebp-44h] BYREF
  _DWORD v108[3]; // [esp+114h] [ebp-38h] BYREF
  _DWORD v109[3]; // [esp+120h] [ebp-2Ch] BYREF
  void *vtable0; // [esp+12Ch] [ebp-20h]
  int v111[2]; // [esp+134h] [ebp-18h] BYREF
  _DWORD v112[4]; // [esp+13Ch] [ebp-10h] BYREF

  result = (int)g_hWnd; /*0x4d1890*/
  if ( g_hWnd ) /*0x4d18a1*/
  {
    result = g_MissionState; /*0x4d18a7*/
    v3 = 0; /*0x4d18ac*/
    for ( i = 0; i < (int)g_MissionState; ++i ) /*0x4d18b4*/
    {
      if ( !byte_8B3CCC ) /*0x4d18c4*/
      {
        qsort(g_MissionPool, result, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)globalHelper_0D2ED0); /*0x4d18d4*/
        dword_8B3CD0 = 0; /*0x4d18dc*/
        byte_8B3CCC = 1; /*0x4d18e6*/
      }
      v4 = *((_DWORD *)g_MissionPool + 2 * v3 + 1); /*0x4d18f3*/
      if ( *(_BYTE *)(v4 + 116) ) /*0x4d18f7*/
      {
        v93 = *(_DWORD *)(v4 + 64); /*0x4d190d*/
        v94 = *(char **)(v4 + 68); /*0x4d1917*/
        v95 = *(_DWORD *)(v4 + 72); /*0x4d1921*/
        v96 = *(_DWORD *)(v4 + 76); /*0x4d192b*/
        v93 -= *(_DWORD *)&g_TacticalClass_Instance[44]; /*0x4d193e*/
        v94 = (char *)DSurface_ViewBounds.field_4 + (unsigned int)&v94[-*(_DWORD *)&g_TacticalClass_Instance[45]]; /*0x4d195d*/
        v93 += DSurface_ViewBounds.field_0; /*0x4d1964*/
        v5 = ClipRectIntersection(v112, (int *)this, &v93, 0, 0); /*0x4d197c*/
        v84 = *v5; /*0x4d1985*/
        v85 = v5[1]; /*0x4d198c*/
        if ( v5[2] > 0 && v5[3] > 0 ) /*0x4d19a0*/
        {
          switch ( *(_DWORD *)(v4 + 48) ) /*0x4d19bd*/
          {
            case 6: /*0x4d19bd*/
              for ( j = 0; j < *(_DWORD *)(v4 + 108); ++j ) /*0x4d1c57*/
              {
                v17 = *(_DWORD *)(v4 + 96); /*0x4d1c61*/
                v18 = *(_BYTE **)(v17 + 16 * j); /*0x4d1c6b*/
                v69 = *(_DWORD *)(v17 + 16 * j + 4); /*0x4d1c79*/
                v66 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v18 + 156))(v18); /*0x4d1c86*/
                v70 = *(_BYTE *)(*(_DWORD *)(v4 + 96) + 16 * j + 8); /*0x4d1c97*/
                v64 = *(int **)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] /*0x4d1cb0*/
                                          + 4 * *(_DWORD *)(*(_DWORD *)(v4 + 40) + 90196))
                              + 780);
                if ( j ) /*0x4d1cb4*/
                {
                  if ( v18 /*0x4d207f*/
                    && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v18 + 44))(v18) == 5
                    && *((_DWORD *)v18 + 181) <= stru_A8EB00.ObjectTypeClass[30]
                    && v66 )
                  {
                    v36 = (_DWORD *)(v4 + 52); /*0x4d2085*/
                    v37 = *(_DWORD *)(v4 + 56); /*0x4d208f*/
                    v100[0] = *(_DWORD *)(v4 + 52) - 128; /*0x4d2092*/
                    v38 = *(_DWORD *)(v4 + 60); /*0x4d20a0*/
                    v100[1] = v37 - 128; /*0x4d20a3*/
                    v100[2] = v38; /*0x4d20b9*/
                    Coord::To_Screen((Coord *)g_TacticalClass_Instance, v100, &v77); /*0x4d20c0*/
                    vtable0 = this->AbstractClass; /*0x4d20d2*/
                    v39 = (char *)DSurface_ViewBounds.field_4 - (char *)this->?; /*0x4d20e3*/
                    v40 = 1000; /*0x4d20eb*/
                    v77 += DSurface_ViewBounds.field_0 - (_DWORD)vtable0; /*0x4d20f0*/
                    v41 = v39 + v78; /*0x4d20f8*/
                    LOBYTE(v39) = v18[861]; /*0x4d20fa*/
                    v78 = v41; /*0x4d2102*/
                    if ( !(_BYTE)v39 ) /*0x4d2106*/
                    {
                      v102[0] = *v36; /*0x4d210c*/
                      v102[1] = *(_DWORD *)(v4 + 56); /*0x4d2123*/
                      v102[2] = *(_DWORD *)(v4 + 60); /*0x4d212d*/
                      v40 = *(__int16 *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v102)->CellClass_field_10A; /*0x4d2139*/
                    }
                    if ( v64 && v18[860] ) /*0x4d2148*/
                      v59 = (int)v64; /*0x4d2152*/
                    else
                      v59 = *(_DWORD *)&stru_87F5F0.__pad_58[120]; /*0x4d215e*/
                    v65 = *(_DWORD *)(*(_DWORD *)(v4 + 96) + 16 * j + 12); /*0x4d216d*/
                    if ( v18[873] ) /*0x4d2171*/
                    {
                      v84 = *v36; /*0x4d2182*/
                      v42 = *(_DWORD *)(v4 + 60); /*0x4d2189*/
                      v55 = v40; /*0x4d2191*/
                      v85 = *(_DWORD *)(v4 + 56); /*0x4d2192*/
                      v54 = 0; /*0x4d2196*/
                    }
                    else
                    {
                      v84 = *v36; /*0x4d21a0*/
                      v42 = *(_DWORD *)(v4 + 60); /*0x4d21a7*/
                      v55 = v40; /*0x4d21af*/
                      v85 = *(_DWORD *)(v4 + 56); /*0x4d21b0*/
                      v54 = 2; /*0x4d21b4*/
                    }
                    v52 = v65 - ZCoordToScreenY(v42) - 2; /*0x4d21d0*/
                    DrawToSurfaceSHP( /*0x4d21ea*/
                      (int)g_DSurface_Hidden_2,
                      v59,
                      v66,
                      v69,
                      &v77,
                      (int *)this,
                      11776,
                      0,
                      v52,
                      v54,
                      v55,
                      0,
                      0,
                      0,
                      0,
                      0);
                  }
                }
                else
                {
                  v19 = (int *)(v4 + 52); /*0x4d1cba*/
                  v20 = *(_DWORD *)(v4 + 56); /*0x4d1cc4*/
                  v109[0] = *(_DWORD *)(v4 + 52) - 128; /*0x4d1cc7*/
                  v21 = *(_DWORD *)(v4 + 60); /*0x4d1cd5*/
                  v109[1] = v20 - 128; /*0x4d1cd8*/
                  v109[2] = v21; /*0x4d1cee*/
                  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v109, &v79); /*0x4d1cf5*/
                  v105[0] = *(_DWORD *)(v4 + 52); /*0x4d1cfe*/
                  v105[1] = *(_DWORD *)(v4 + 56); /*0x4d1d10*/
                  v105[2] = *(_DWORD *)(v4 + 60); /*0x4d1d1f*/
                  v60 = (int *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v105); /*0x4d1d30*/
                  v22 = (char *)DSurface_ViewBounds.field_4 - (char *)this->?; /*0x4d1d41*/
                  v23 = v18[5889]; /*0x4d1d49*/
                  v79 += DSurface_ViewBounds.field_0 - (unsigned int)this->AbstractClass; /*0x4d1d4f*/
                  v24 = v22 + v80; /*0x4d1d57*/
                  v80 += v22; /*0x4d1d5b*/
                  if ( v23 ) /*0x4d1d5f*/
                    goto LABEL_49; /*0x4d1d5f*/
                  v71 = *((_DWORD *)v18 + 1352); /*0x4d1d6f*/
                  v83[0] = v79; /*0x4d1d77*/
                  v83[1] = v24; /*0x4d1d7b*/
                  v25 = (void *)(v24 + *(__int16 *)(v66 + 4) / 2); /*0x4d1d88*/
                  v88[0] = (int)this->AbstractClass; /*0x4d1d8e*/
                  v88[1] = (int)this->?; /*0x4d1d95*/
                  v88[2] = (int)this->?; /*0x4d1d9c*/
                  vtable3 = this->?; /*0x4d1da5*/
                  if ( (int)vtable3 > (int)v25 ) /*0x4d1dac*/
                    vtable3 = v25; /*0x4d1dae*/
                  v73 = *((_DWORD *)v18 + 1356) + 144; /*0x4d1dc4*/
                  v75 = *((_DWORD *)v18 + 1357) + 172; /*0x4d1dd3*/
                  v57 = (BuildingTypeClass::GetFoundationHeight((int *)v18, 0) << 8) - 256; /*0x4d1de6*/
                  v97[0] = (BuildingTypeClass::GetFoundationWidth((BuildingTypeClass *)v18) << 8) - 256; /*0x4d1dfe*/
                  v97[1] = v57; /*0x4d1e18*/
                  v26 = TacticalClass::AdjustForZShapeMove(v111, v97); /*0x4d1e1f*/
                  v74 = v73 - *v26; /*0x4d1e2e*/
                  v27 = *v19; /*0x4d1e3b*/
                  v76 = v75 - v26[1]; /*0x4d1e3d*/
                  v92 = (int)dword_89DDBC; /*0x4d1e46*/
                  v28 = *(_DWORD *)(v4 + 56); /*0x4d1e4d*/
                  v84 = v27; /*0x4d1e50*/
                  v85 = v28; /*0x4d1e54*/
                  v29 = ZCoordToScreenY(*(_DWORD *)(v4 + 60)); /*0x4d1e5b*/
                  v30 = *(_DWORD *)(v4 + 56); /*0x4d1e63*/
                  v99[0] = *v19; /*0x4d1e68*/
                  v58 = -v29; /*0x4d1e76*/
                  v31 = *(_DWORD *)(v4 + 60); /*0x4d1e7a*/
                  v99[1] = v30; /*0x4d1e83*/
                  v99[2] = v31; /*0x4d1e8a*/
                  v32 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v99); /*0x4d1e91*/
                  v33 = v60; /*0x4d1ea4*/
                  v34 = *((__int16 *)v18 + 2724) + *(__int16 *)v32->CellClass_field_10A; /*0x4d1ea8*/
                  if ( !v60[13] ) /*0x4d1eaa*/
                  {
                    TacticalClass::SetView(v60, 0, 0x10000, 0, 1000, 1000, 1000); /*0x4d1ec9*/
                    v33 = v60; /*0x4d1ece*/
                  }
                  if ( v18[5890] ) /*0x4d1ed2*/
                    v61 = (int *)v33[13]; /*0x4d1edf*/
                  else
                    v61 = v64; /*0x4d1ee9*/
                  if ( (int)vtable3 > 0 ) /*0x4d1ef6*/
                  {
                    if ( v70 ) /*0x4d1f02*/
                      DrawToSurfaceSHP( /*0x4d1f3e*/
                        (int)g_DSurface_Hidden_2,
                        (int)v61,
                        v66,
                        v69,
                        v83,
                        v88,
                        19968,
                        0,
                        v58 - 2,
                        0,
                        v34,
                        0,
                        0,
                        0,
                        0,
                        0);
                    else
                      DrawToSurfaceSHP( /*0x4d1fbe*/
                        (int)g_DSurface_Hidden_2,
                        (int)v61,
                        v66,
                        v69,
                        v83,
                        v88,
                        19968,
                        0,
                        v58 + v71 - 2,
                        2,
                        v34,
                        0,
                        v92,
                        0,
                        v74,
                        v76);
                    DrawToSurfaceSHP( /*0x4d1f6e*/
                      (int)g_DSurface_Hidden_2,
                      (int)v61,
                      v66,
                      v69 + *(__int16 *)(v66 + 6) / 2,
                      v83,
                      v88,
                      19969,
                      0,
                      v58 - 2,
                      0,
                      1000,
                      0,
                      0,
                      0,
                      0,
                      0);
                  }
                  v35 = *((_DWORD *)v18 + 1350); /*0x4d2011*/
                  if ( v35 ) /*0x4d2019*/
                    DrawToSurfaceSHP( /*0x4d2048*/
                      (int)g_DSurface_Hidden_2,
                      (int)v61,
                      v35,
                      v69,
                      &v79,
                      (int *)this,
                      19968,
                      0,
                      v58 - 3,
                      0,
                      v34,
                      0,
                      0,
                      0,
                      0,
                      0);
                }
              }
              break; /*0x4d21fd*/
            case 0x14: /*0x4d19bd*/
              v108[0] = *(_DWORD *)(v4 + 52); /*0x4d19ca*/
              v108[1] = *(_DWORD *)(v4 + 56); /*0x4d19dc*/
              v108[2] = *(_DWORD *)(v4 + 60); /*0x4d19eb*/
              v6 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v108); /*0x4d19fa*/
              v7 = *(_DWORD *)&v6->__pad_28[28]; /*0x4d1a00*/
              powerup = (unsigned __int8)v6->powerup; /*0x4d1a03*/
              *(_DWORD *)&v6->__pad_28[28] = *(_DWORD *)(v4 + 36); /*0x4d1a09*/
              v62 = powerup; /*0x4d1a0f*/
              v6->powerup = *(_BYTE *)(v4 + 44); /*0x4d1a13*/
              Coord::Subtract( /*0x4d1a5b*/
                (Coord *)v106,
                (((SLOWORD(v6->smudgeTypeIndex) << 8) + 128) / 256) << 8,
                (((SHIWORD(v6->smudgeTypeIndex) << 8) + 128) / 256) << 8,
                0);
              v101[0] = v106[0]; /*0x4d1a75*/
              v101[1] = v106[1]; /*0x4d1a7c*/
              v101[2] = v106[2]; /*0x4d1a96*/
              Coord::To_Screen((Coord *)g_TacticalClass_Instance, v101, v87); /*0x4d1a9d*/
              v87[0] -= 30; /*0x4d1aaf*/
              BuildingClass::Draw_0((int)v6, v87, (int *)this); /*0x4d1ab5*/
              TacticalClass::DrawBuildingPlacement((int)v6, v87, (int *)this); /*0x4d1ac2*/
              *(_DWORD *)&v6->__pad_28[28] = v7; /*0x4d1ac7*/
              v6->powerup = v62; /*0x4d1ace*/
              break; /*0x4d1ad4*/
            case 0x1D: /*0x4d19bd*/
              vtable1 = (char *)this->?; /*0x4d220d*/
              v44 = this->AbstractClass; /*0x4d2210*/
              v45 = g_TacticalClass_Instance[45]; /*0x4d2218*/
              v90 = g_TacticalClass_Instance[44]; /*0x4d221e*/
              v46 = *(_DWORD *)(v4 + 68); /*0x4d2225*/
              v91 = v45; /*0x4d2228*/
              v47 = *(_DWORD *)(v4 + 64) - *(_DWORD *)&v90 + DSurface_ViewBounds.field_0 + 30; /*0x4d2249*/
              v98[1] = (char *)DSurface_ViewBounds.field_4 + v46 - *(_DWORD *)&v91 - vtable1; /*0x4d225f*/
              v48 = *(_DWORD *)(v4 + 84); /*0x4d2266*/
              v98[0] = v47 - (_DWORD)v44; /*0x4d2269*/
              v49 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * v48) + 156))(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * v48)); /*0x4d227b*/
              if ( v49 ) /*0x4d227f*/
              {
                v104[0] = *(_DWORD *)(v4 + 52); /*0x4d228c*/
                v104[1] = *(_DWORD *)(v4 + 56); /*0x4d229e*/
                v104[2] = *(_DWORD *)(v4 + 60); /*0x4d22a8*/
                v50 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v104); /*0x4d22b4*/
                v84 = *(_DWORD *)(v4 + 52); /*0x4d22bd*/
                v51 = *(_DWORD *)(v4 + 60); /*0x4d22c4*/
                v85 = *(_DWORD *)(v4 + 56); /*0x4d22c7*/
                v72 = v50; /*0x4d22cd*/
                v56 = *(__int16 *)v50->CellClass_field_10C; /*0x4d22dd*/
                v53 = -ZCoordToScreenY(v51); /*0x4d22f4*/
                DrawToSurfaceSHP( /*0x4d230c*/
                  (int)g_DSurface_Hidden_2,
                  *(_DWORD *)&v72->__pad_28[12],
                  v49,
                  *(_DWORD *)(v4 + 88),
                  v98,
                  (int *)this,
                  3584,
                  0,
                  v53,
                  2,
                  v56,
                  0,
                  0,
                  0,
                  0,
                  0);
              }
              break; /*0x4d230c*/
            case 0x24: /*0x4d19bd*/
              v9 = (_DWORD *)(v4 + 52); /*0x4d1adc*/
              v63 = **(_DWORD **)(v4 + 96); /*0x4d1ae5*/
              v107[0] = *(_DWORD *)(v4 + 52); /*0x4d1ae9*/
              v107[1] = *(_DWORD *)(v4 + 56); /*0x4d1afb*/
              v107[2] = *(_DWORD *)(v4 + 60); /*0x4d1b05*/
              v10 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v107); /*0x4d1b16*/
              v67 = *(_DWORD *)(*(_DWORD *)(v4 + 96) + 4); /*0x4d1b1e*/
              v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v63 + 156))(v63); /*0x4d1b2e*/
              v103[0] = *v9; /*0x4d1b34*/
              v103[1] = v9[1]; /*0x4d1b49*/
              v103[2] = v9[2]; /*0x4d1b5b*/
              Coord::To_Screen((Coord *)g_TacticalClass_Instance, v103, &v81); /*0x4d1b62*/
              v12 = (char *)DSurface_ViewBounds.field_4 - (char *)this->?; /*0x4d1b79*/
              v13 = *v9; /*0x4d1b81*/
              v81 += DSurface_ViewBounds.field_0 - (unsigned int)this->AbstractClass; /*0x4d1b83*/
              v14 = v12 + v82; /*0x4d1b8b*/
              v85 = v9[1]; /*0x4d1b90*/
              v15 = v9[2]; /*0x4d1b94*/
              v82 = v14; /*0x4d1b97*/
              v84 = v13; /*0x4d1b9b*/
              v16 = -ZCoordToScreenY(v15); /*0x4d1ba9*/
              if ( !*(_DWORD *)&v10->__pad_28[12] ) /*0x4d1ba6*/
                TacticalClass::SetView(v10->mapCoords, 0, 0x10000, 0, 1000, 1000, 1000); /*0x4d1bc9*/
              DrawToSurfaceSHP( /*0x4d1c00*/
                (int)g_DSurface_Hidden_2,
                *(_DWORD *)&v10->__pad_28[12],
                v11,
                v67,
                &v81,
                (int *)this,
                19968,
                0,
                v16 - 4,
                2,
                *(__int16 *)v10->CellClass_field_10C,
                0,
                0,
                0,
                0,
                0);
              if ( byte_822CF1 ) /*0x4d1c0c*/
                DrawToSurfaceSHP( /*0x4d1c45*/
                  (int)g_DSurface_Hidden_2,
                  *(_DWORD *)&v10->__pad_28[12],
                  v11,
                  v67 + *(__int16 *)(v11 + 6) / 2,
                  &v81,
                  (int *)this,
                  17921,
                  0,
                  v16 - 2,
                  0,
                  1000,
                  0,
                  0,
                  0,
                  0,
                  0);
              break; /*0x4d1c45*/
            default:
              break;
          }
        }
      }
LABEL_49:
      result = g_MissionState; /*0x4d2311*/
      v3 = i + 1; /*0x4d231a*/
    }
  }
  return result; /*0x4d2329*/
}



// ==== 0x004D2370  ObjectClass::MarkAllFootOccupancies  this=ObjectClass  sig=csp ====
int MarkAllFootOccupancies(ObjectClass *this)
{
  int result; // eax
  int v2; // esi
  int v3; // edi
  _WORD *v4; // esi
  int v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  CellClass *v8; // eax
  int v9; // [esp+8h] [ebp-1Ch]
  int i; // [esp+Ch] [ebp-18h]
  int v11; // [esp+10h] [ebp-14h] BYREF
  _BYTE v12[4]; // [esp+14h] [ebp-10h] BYREF
  _DWORD v13[3]; // [esp+18h] [ebp-Ch] BYREF

  result = g_FootClassConfig; /*0x4d2373*/
  v2 = 0; /*0x4d2379*/
  for ( i = 0; v2 < g_FootClassConfig; i = v2 ) /*0x4d2381*/
  {
    v3 = *((_DWORD *)dword_8B3D14 + v2); /*0x4d2399*/
    if ( *(_DWORD *)(v3 + 48) == 6 /*0x4d23ae*/
      && (*(int (__thiscall **)(_DWORD, _DWORD))(***(_DWORD ***)(v3 + 96) + 144))(**(_DWORD **)(v3 + 96), 0) )
    {
      if ( *(_DWORD *)(v3 + 48) == 6 ) /*0x4d23bf*/
        v4 = (_WORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(***(_DWORD ***)(v3 + 96) + 144))( /*0x4d23d0*/
                        **(_DWORD **)(v3 + 96),
                        0);
      else
        v4 = 0; /*0x4d23d4*/
      v5 = *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 96))(v3, v12); /*0x4d23e2*/
      v11 = v5; /*0x4d23e4*/
      while ( *v4 != 0x7FFF || v4[1] != 0x7FFF ) /*0x4d23f9*/
      {
        LOWORD(v9) = v5 + *v4; /*0x4d2408*/
        HIWORD(v9) = HIWORD(v5) + v4[1]; /*0x4d240d*/
        v11 = v9; /*0x4d241c*/
        v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v11); /*0x4d2420*/
        v4 += 2; /*0x4d2436*/
        v6[80] |= 0x400000u; /*0x4d2439*/
      }
      v2 = i; /*0x4d2478*/
    }
    else
    {
      v7 = (_DWORD *)(v3 + 52); /*0x4d243d*/
      v13[0] = *v7; /*0x4d2442*/
      v13[1] = v7[1]; /*0x4d244e*/
      v13[2] = v7[2]; /*0x4d2455*/
      v8 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v13); /*0x4d245e*/
      v8->flags[0] |= 0x400000u; /*0x4d2474*/
    }
    result = g_FootClassConfig; /*0x4d247c*/
    ++v2; /*0x4d2481*/
  }
  return result; /*0x4d2491*/
}



// ==== 0x004D24A0  FoggedObjectClass::SaveToINI  this=FoggedObjectClass  sig=csp ====
int __stdcall FoggedObjectClass::SaveToINI(FoggedObjectClass *this, int *a2, int a3)
{
  int result; // eax
  int v4; // edx
  int v5; // ebp
  int v6; // edi

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x4d24b3*/
  if ( result >= 0 ) /*0x4d24ba*/
  {
    v4 = *a2; /*0x4d24bf*/
    a3 = *((_DWORD *)this + 27); /*0x4d24cb*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a2, &a3, 4, 0); /*0x4d24cf*/
    if ( result >= 0 ) /*0x4d24d4*/
    {
      v5 = 0; /*0x4d24da*/
      if ( a3 > 0 ) /*0x4d24de*/
      {
        v6 = 0; /*0x4d24e0*/
        do /*0x4d2500*/
        {
          if ( (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, v6 + this->nextArrayIndex, 16, 0) < 0 ) /*0x4d24f4*/
            break; /*0x4d24f4*/
          ++v5; /*0x4d24fa*/
          v6 += 16; /*0x4d24fb*/
        }
        while ( v5 < a3 ); /*0x4d2500*/
      }
      return 0; /*0x4d2502*/
    }
  }
  return result; /*0x4d2504*/
}



// ==== 0x004D2510  FoggedObjectClass::LoadTypeData  this=FoggedObjectClass  sig=csp ====
int __stdcall FoggedObjectClass::LoadTypeData(FoggedObjectClass *this, int a2)
{
  int *v2; // ebx
  FoggedObjectClass *v3; // edi
  int result; // eax
  int v5; // edx
  int v6; // ecx
  void *vtable1; // ecx
  int uniqueId; // eax
  void *vtable3; // eax
  int v10; // edx
  _DWORD *v11; // eax
  int v12; // esi
  int v13; // ebx
  _DWORD *v14; // ebp
  signed int i; // eax
  _DWORD *v16; // edx
  int v17; // [esp+2Ch] [ebp-14h] BYREF
  int v18; // [esp+30h] [ebp-10h] BYREF
  int v19; // [esp+34h] [ebp-Ch]
  int v20; // [esp+38h] [ebp-8h]
  int v21; // [esp+3Ch] [ebp-4h]

  v2 = (int *)a2; /*0x4d2514*/
  v3 = this; /*0x4d251b*/
  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x4d2521*/
  if ( result < 0 ) /*0x4d252a*/
    return result; /*0x4d252a*/
  if ( v3 ) /*0x4d2532*/
  {
    AbstractClass::InitVtables((AbstractClass *)v3, (int)&a2); /*0x4d253b*/
    FoggedObject::DrawVector_Constructor((FoggedObject *)v3[1].Cell, 0, 0); /*0x4d2547*/
    v3[1].Cell[0] = (int)&DynamicVectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d254c*/
    v3[2].? = 10; /*0x4d2552*/
    v3[2].? = 0; /*0x4d2559*/
    v3->AbstractClass = &FoggedObjectClass::`vftable'; /*0x4d255c*/
    v3->? = &FoggedObjectClass::`vftable'; /*0x4d2562*/
    v3->? = &FoggedObjectClass::`vftable'; /*0x4d2569*/
    v3->? = &FoggedObjectClass::`vftable'; /*0x4d2570*/
  }
  ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v3->House); /*0x4d2580*/
  v5 = *v2; /*0x4d2585*/
  this = 0; /*0x4d2590*/
  result = (*(int (__stdcall **)(int *, FoggedObjectClass **, int, _DWORD))(v5 + 12))(v2, &this, 4, 0); /*0x4d2594*/
  a2 = result; /*0x4d2599*/
  if ( result < 0 ) /*0x4d259d*/
    return result; /*0x4d259d*/
  v17 = 0; /*0x4d25a7*/
  if ( (int)this <= 0 ) /*0x4d25ad*/
  {
LABEL_14:
    v17 = *(_DWORD *)(*((int (__thiscall **)(FoggedObjectClass *, int *))v3->AbstractClass + 24))(v3, &v17); /*0x4d2665*/
    v12 = 74 * (SHIWORD(v17) - (((__int16)v17 + SHIWORD(v17)) << 9) - (__int16)v17) /*0x4d26a1*/
        - (unsigned int)v3[1].AbstractClass
        + 0x7FFFFFFF;
    if ( (int)(g_MissionState + 1) <= dword_8B3CC8 ) /*0x4d26aa*/
    {
LABEL_22:
      *((_DWORD *)g_MissionPool + 2 * g_MissionState) = v12; /*0x4d2745*/
      *((_DWORD *)g_MissionPool + 2 * g_MissionState + 1) = v3; /*0x4d275f*/
      byte_8B3CCC = 0; /*0x4d2769*/
      ++g_MissionState; /*0x4d2770*/
      return a2; /*0x4d2770*/
    }
    if ( dword_8B3CC8 ) /*0x4d26b2*/
    {
      v13 = dword_8B3CC8; /*0x4d26bb*/
      if ( dword_8B3CC8 < 0 ) /*0x4d26bf*/
        return a2; /*0x4d26bf*/
    }
    else
    {
      v13 = 10; /*0x4d26b4*/
    }
    v17 = v13 + dword_8B3CC8; /*0x4d26c7*/
    v14 = (_DWORD *)__2_YAPAXI_Z(8 * (v13 + dword_8B3CC8)); /*0x4d26d8*/
    if ( v14 ) /*0x4d26df*/
    {
      --v17; /*0x4d26f0*/
      for ( i = 0; i < (int)g_MissionState; v14[2 * i - 1] = v16[1] ) /*0x4d26f8*/
      {
        v16 = (char *)g_MissionPool + 8 * i++; /*0x4d2700*/
        v14[2 * i - 2] = *v16; /*0x4d2706*/
      }
      __3_YAXPAX_Z(g_MissionPool); /*0x4d2721*/
      g_MissionPool = v14; /*0x4d2730*/
      dword_8B3CC8 += v13; /*0x4d2736*/
      dword_8B3CD0 = 0; /*0x4d273b*/
      goto LABEL_22; /*0x4d273b*/
    }
    return a2; /*0x4d2775*/
  }
  while ( 1 ) /*0x4d25b3*/
  {
    v6 = *v2; /*0x4d25b3*/
    v18 = 0; /*0x4d25be*/
    v19 = 0; /*0x4d25c2*/
    LOBYTE(v20) = 0; /*0x4d25c6*/
    v21 = 0; /*0x4d25cb*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v6 + 12))(v2, &v18, 16, 0); /*0x4d25cf*/
    a2 = result; /*0x4d25d4*/
    if ( result < 0 ) /*0x4d25d8*/
      return result; /*0x4d2779*/
    vtable1 = v3[2].?; /*0x4d25de*/
    if ( (int)v3[2].? < (int)vtable1 /*0x4d2605*/
      || (BYTE1(v3[2].?) || !vtable1)
      && (uniqueId = v3[2].?, uniqueId > 0)
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v3[1].Cell[0] + 8))(
           v3[1].Cell,
           (int)vtable1 + uniqueId,
           0) )
    {
      vtable3 = v3[2].?; /*0x4d260c*/
      v10 = v18; /*0x4d260f*/
      v3[2].? = (char *)vtable3 + 1; /*0x4d2616*/
      v11 = (char *)v3[2].AbstractClass + 16 * (_DWORD)vtable3; /*0x4d261f*/
      *v11 = v10; /*0x4d2621*/
      v11[1] = v19; /*0x4d2627*/
      v11[2] = v20; /*0x4d262e*/
      v11[3] = v21; /*0x4d2635*/
    }
    ObjectPtr::RegisterForTracking( /*0x4d264b*/
      (int)&SwizzleManagerClass_Instance,
      (int *)v3[2].AbstractClass + 4 * (int)v3[2].? - 4);
    if ( ++v17 >= (int)this ) /*0x4d265f*/
      goto LABEL_14; /*0x4d265f*/
  }
}



// ==== 0x004D2790  CellClass::recalcPassability  this=CellClass  sig=csp ====
int __thiscall sub_4D2790(int this)
{
  if ( *(_DWORD *)(this + 48) == 6 ) /*0x4d2794*/
    return (*(int (__thiscall **)(_DWORD, _DWORD))(***(_DWORD ***)(this + 96) + 144))(**(_DWORD **)(this + 96), 0); /*0x4d279f*/
  else
    return 0; /*0x4d27a6*/
}



// ==== 0x004D27B0  FoggedObjectClass::GetTypeIdentifier  this=FoggedObjectClass  sig=csp ====
int FoggedObjectClass::GetTypeIdentifier(FoggedObjectClass *this)
{
  return 61; /*0x4d27b5*/
}



// ==== 0x004D27C0  FoggedObjectClass::GetObjectSize  this=FoggedObjectClass  sig=csp ====
int FoggedObjectClass::GetObjectSize(FoggedObjectClass *this)
{
  return 120; /*0x4d27c5*/
}



// ==== 0x004D27D0  FoggedObjectClass::GetClassIdentifier  this=FoggedObjectClass  sig=csp ====
int __stdcall FoggedObjectClass::GetClassIdentifier(FoggedObjectClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x4d27d6*/
    return -2147467261; /*0x4d27d8*/
  *a2 = 474417934; /*0x4d27e6*/
  a2[1] = 299002327; /*0x4d27ee*/
  a2[2] = 1610674872; /*0x4d27f7*/
  a2[3] = unk_7E999C; /*0x4d2800*/
  return 0; /*0x4d27dd*/
}



// ==== 0x004D2810  FoggedObjectClass::PowerDrainUpdate  this=FoggedObjectClass  sig=csp ====
int __thiscall FoggedObjectClass::PowerDrainUpdate(FoggedObjectClass *this, int a2)
{
  AbstractClass::ProcessPower((AbstractClass *)this); /*0x4d2819*/
  Power::TimerProcess(this->LastSight); /*0x4d2824*/
  Power::TimerProcess(this->Cell[0]); /*0x4d282f*/
  Power::TimerProcess(this->vtable4); /*0x4d283a*/
  Power::TimerProcess(*((_DWORD *)this + 13)); /*0x4d2845*/
  Power::TimerProcess(*((_DWORD *)this + 14)); /*0x4d2850*/
  Power::TimerProcess(*((_DWORD *)this + 15)); /*0x4d285b*/
  Power::TimerProcess(this->Count); /*0x4d2866*/
  Power::TimerProcess(this->q011); /*0x4d2871*/
  Power::TimerProcess(this->IsInitialized); /*0x4d287c*/
  Power::TimerProcess(this->IsAllocated); /*0x4d2887*/
  Power::TimerProcess(this->abstractFlags); /*0x4d2892*/
  Power::TimerProcess(*((_DWORD *)this + 21)); /*0x4d289d*/
  Power::TimerProcess(*((_DWORD *)this + 22)); /*0x4d28a8*/
  return Power::TimerProcess(*((_DWORD *)this + 27)); /*0x4d28b8*/
}



// ==== 0x004D28C0  TechnoClass::recalcThreat  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::recalcThreat(TechnoClass *this)
{
  if ( this->? <= 0 ) /*0x4d28c5*/
    return 0; /*0x4d28cd*/
  else
    return *(_DWORD *)this->?[4]; /*0x4d28ca*/
}



// ==== 0x004D28D0  FoggedObjectClass::CheckVisibility  this=FoggedObjectClass  sig=csp ====
_DWORD *__thiscall FoggedObjectClass::CheckVisibility(FoggedObjectClass *this, _DWORD *a2)
{
  int v3; // [esp+0h] [ebp-4h]

  LOWORD(v3) = *((_DWORD *)this + 13) / 256; /*0x4d28e0*/
  HIWORD(v3) = *((_DWORD *)this + 14) / 256; /*0x4d28f4*/
  *a2 = v3; /*0x4d2901*/
  return a2; /*0x4d2904*/
}



// ==== 0x004D2910  FoggedObjectClass::ddtor  this=FoggedObjectClass  sig=csp ====
void *__thiscall FoggedObjectClass::ddtor(FoggedObjectClass *this, char a2)
{
  DestructFoggedObjectClass((int)this); /*0x4d2913*/
  if ( (a2 & 1) != 0 ) /*0x4d291d*/
    __3_YAXPAX_Z(this); /*0x4d2920*/
  return this; /*0x4d292a*/
}



// ==== 0x004D2930  ?$DynamicVectorClass@UDrawRecord@FoggedObjectClass@@::getMissionState  this=DynamicVector  sig=csp ====
void __thiscall AbstractClass::sub_4D2930(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4d2936*/
  *(_DWORD *)(this + 16) = 0; /*0x4d2939*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4d2940*/
  {
    __3_YAXPAX_Z(v2); /*0x4d2946*/
    *(_DWORD *)(this + 4) = 0; /*0x4d294e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4d2951*/
  *(_DWORD *)(this + 8) = 0; /*0x4d2954*/
}



// ==== 0x004D2960  ?$DynamicVectorClass@UDrawRecord@FoggedObjectClass@@::setMissionState  this=DynamicVector  sig=csp ====
unsigned int __thiscall AbstractClass::sub_4D2960(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4d2960*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 4; /*0x4d2975*/
  else
    return 0; /*0x4d2967*/
}



// ==== 0x004D2980  _VectorClass_UDrawRecord_FoggedObjectClass::Seek  this=VectorClass  sig=csp ====
int __thiscall FoggedObject_DrawVector::Seek(_VectorClass_UDrawRecord_FoggedObjectClass *this, int a2, int a3)
{
  int v3; // edx

  v3 = *(_DWORD *)&this->m_1[3] + 16 * a3; /*0x4d298a*/
  *(_DWORD *)a2 = *(_DWORD *)v3; /*0x4d2992*/
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(v3 + 4); /*0x4d2997*/
  *(_BYTE *)(a2 + 8) = *(_BYTE *)(v3 + 8); /*0x4d299d*/
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(v3 + 12); /*0x4d29a3*/
  return a2; /*0x4d29a6*/
}



// ==== 0x004D29B0  _VectorClass_UDrawRecord_FoggedObjectClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall FoggedObjectClass::AddRef(_VectorClass_UDrawRecord_FoggedObjectClass *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x4d29bb*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x4d29c0*/
  {
    v3 = 0; /*0x4d29c2*/
    if ( m_8 <= 0 ) /*0x4d29c6*/
      return 1; /*0x4d29f6*/
    v4 = *(_DWORD *)(a2 + 4); /*0x4d29c8*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x4d29cb*/
    v6 = (_DWORD *)(v4 + 4); /*0x4d29ce*/
    v7 = v4 - (_DWORD)v5; /*0x4d29d1*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x4d29e3*/
    {
      ++v3; /*0x4d29e5*/
      v6 += 4; /*0x4d29e6*/
      v5 += 4; /*0x4d29e9*/
      if ( v3 >= m_8 ) /*0x4d29ee*/
        return 1; /*0x4d29ee*/
    }
  }
  return 0; /*0x4d29f0*/
}



// ==== 0x004D2A10  _VectorClass_UDrawRecord_FoggedObjectClass::Release  this=VectorClass  sig=csp ====
char __thiscall FoggedObject_DrawVector::Release(_VectorClass_UDrawRecord_FoggedObjectClass *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v13; // eax
  _DWORD *v14; // edx
  char *v15; // ebx

  v3 = a2; /*0x4d2a12*/
  if ( a2 ) /*0x4d2a1e*/
  {
    v5 = a3; /*0x4d2a24*/
    LOBYTE(this->m_C) = 0; /*0x4d2a28*/
    if ( a3 ) /*0x4d2a2d*/
    {
      if ( a2 - 1 >= 0 ) /*0x4d2a6a*/
      {
        v9 = a3 + 8; /*0x4d2a6c*/
        v10 = a2; /*0x4d2a6f*/
        do /*0x4d2a7f*/
        {
          *((_DWORD *)v9 - 2) = 0; /*0x4d2a70*/
          *((_DWORD *)v9 - 1) = 0; /*0x4d2a73*/
          *v9 = 0; /*0x4d2a76*/
          *((_DWORD *)v9 + 1) = 0; /*0x4d2a78*/
          v9 += 16; /*0x4d2a7b*/
          --v10; /*0x4d2a7e*/
        }
        while ( v10 ); /*0x4d2a7f*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(16 * a2); /*0x4d2a35*/
      if ( v6 ) /*0x4d2a3f*/
      {
        if ( a2 - 1 >= 0 ) /*0x4d2a46*/
        {
          v7 = v6 + 8; /*0x4d2a48*/
          v8 = a2; /*0x4d2a4b*/
          do /*0x4d2a5b*/
          {
            *(_DWORD *)(v7 - 8) = 0; /*0x4d2a4c*/
            *(_DWORD *)(v7 - 4) = 0; /*0x4d2a4f*/
            *(_BYTE *)v7 = 0; /*0x4d2a52*/
            *(_DWORD *)(v7 + 4) = 0; /*0x4d2a54*/
            v7 += 16; /*0x4d2a57*/
            --v8; /*0x4d2a5a*/
          }
          while ( v8 ); /*0x4d2a5b*/
        }
        v5 = (char *)v6; /*0x4d2a5d*/
      }
      else
      {
        v5 = 0; /*0x4d2a61*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x4d2a83*/
    if ( v5 ) /*0x4d2a87*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x4d2a92*/
      {
        m_8 = this->m_8; /*0x4d2a97*/
        if ( a2 < m_8 ) /*0x4d2a9c*/
          m_8 = a2; /*0x4d2a9e*/
        if ( m_8 > 0 ) /*0x4d2aa2*/
        {
          v13 = 0; /*0x4d2aa4*/
          do /*0x4d2aca*/
          {
            v14 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + v13); /*0x4d2aab*/
            v15 = &v5[v13]; /*0x4d2aad*/
            v13 += 16; /*0x4d2ab0*/
            --m_8; /*0x4d2ab3*/
            *(_DWORD *)v15 = *v14; /*0x4d2ab6*/
            *((_DWORD *)v15 + 1) = v14[1]; /*0x4d2abb*/
            *((_DWORD *)v15 + 2) = v14[2]; /*0x4d2ac1*/
            *((_DWORD *)v15 + 3) = v14[3]; /*0x4d2ac7*/
          }
          while ( m_8 ); /*0x4d2aca*/
          v3 = a2; /*0x4d2acc*/
        }
        if ( BYTE1(this->m_C) ) /*0x4d2ad2*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4d2adb*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x4d2ae3*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x4d2aee*/
      this->m_8 = v3; /*0x4d2af4*/
      BYTE1(this->m_C) = a3 == 0; /*0x4d2af7*/
      return 1; /*0x4d2afd*/
    }
    else
    {
      return 0; /*0x4d2a8c*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_UDrawRecord_FoggedObjectClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4d2b07*/
    return 1; /*0x4d2b0d*/
  }
}



// ==== 0x004D2B20  _VectorClass_UDrawRecord_FoggedObjectClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall FoggedObject_DrawVector::ddtor(_VectorClass_UDrawRecord_FoggedObjectClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4d2b2d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4d2b33*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4d2b3b*/
  }
  BYTE1(this->m_C) = 0; /*0x4d2b3e*/
  this->m_8 = 0; /*0x4d2b41*/
}



// ==== 0x004D2B50  _VectorClass_UDrawRecord_FoggedObjectClass::Read  this=VectorClass  sig=csp ====
int __thiscall FoggedObject_DrawVector::Read(_VectorClass_UDrawRecord_FoggedObjectClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4d2b50*/
    return 0; /*0x4d2b5e*/
  m_8 = this->m_8; /*0x4d2b64*/
  result = 0; /*0x4d2b67*/
  if ( m_8 <= 0 ) /*0x4d2b6b*/
    return -1; /*0x4d2b8c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 4 ) /*0x4d2b71*/
  {
    if ( ++result >= m_8 ) /*0x4d2b8a*/
      return -1; /*0x4d2b8a*/
  }
  return result; /*0x4d2b5b*/
}



// ==== 0x004D2BA0  _VectorClass_UDrawRecord_FoggedObjectClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall FoggedObject_DrawVector::Write(_VectorClass_UDrawRecord_FoggedObjectClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x4d2ba0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 4; /*0x4d2bb5*/
  else
    return 0; /*0x4d2ba7*/
}



// ==== 0x004D2BC0  _DynamicVectorClass_UDrawRecord_FoggedObjectClass::ResizeArray  this=DynamicVector  sig=csp ====
char __thiscall FoggedObjectClass::ResizeArray(
        _DynamicVectorClass_UDrawRecord_FoggedObjectClass *this,
        int a2,
        char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // edx
  char *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x4d2bc2*/
  if ( a2 ) /*0x4d2bce*/
  {
    v5 = a3; /*0x4d2bd4*/
    LOBYTE(this->m_C) = 0; /*0x4d2bd8*/
    if ( a3 ) /*0x4d2bdd*/
    {
      if ( a2 - 1 >= 0 ) /*0x4d2c1a*/
      {
        v9 = a3 + 8; /*0x4d2c1c*/
        v10 = a2; /*0x4d2c1f*/
        do /*0x4d2c2f*/
        {
          *((_DWORD *)v9 - 2) = 0; /*0x4d2c20*/
          *((_DWORD *)v9 - 1) = 0; /*0x4d2c23*/
          *v9 = 0; /*0x4d2c26*/
          *((_DWORD *)v9 + 1) = 0; /*0x4d2c28*/
          v9 += 16; /*0x4d2c2b*/
          --v10; /*0x4d2c2e*/
        }
        while ( v10 ); /*0x4d2c2f*/
      }
    }
    else
    {
      v6 = __2_YAPAXI_Z(16 * a2); /*0x4d2be5*/
      if ( v6 ) /*0x4d2bef*/
      {
        if ( a2 - 1 >= 0 ) /*0x4d2bf6*/
        {
          v7 = v6 + 8; /*0x4d2bf8*/
          v8 = a2; /*0x4d2bfb*/
          do /*0x4d2c0b*/
          {
            *(_DWORD *)(v7 - 8) = 0; /*0x4d2bfc*/
            *(_DWORD *)(v7 - 4) = 0; /*0x4d2bff*/
            *(_BYTE *)v7 = 0; /*0x4d2c02*/
            *(_DWORD *)(v7 + 4) = 0; /*0x4d2c04*/
            v7 += 16; /*0x4d2c07*/
            --v8; /*0x4d2c0a*/
          }
          while ( v8 ); /*0x4d2c0b*/
        }
        v5 = (char *)v6; /*0x4d2c0d*/
      }
      else
      {
        v5 = 0; /*0x4d2c11*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x4d2c33*/
    if ( !v5 ) /*0x4d2c37*/
      return 0; /*0x4d2cc7*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x4d2c3d*/
    {
      v11 = *(_DWORD *)&this->__pad_5[3]; /*0x4d2c42*/
      if ( a2 < v11 ) /*0x4d2c47*/
        v11 = a2; /*0x4d2c49*/
      if ( v11 > 0 ) /*0x4d2c4d*/
      {
        v12 = 0; /*0x4d2c4f*/
        do /*0x4d2c75*/
        {
          v13 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + v12); /*0x4d2c56*/
          v14 = &v5[v12]; /*0x4d2c58*/
          v12 += 16; /*0x4d2c5b*/
          --v11; /*0x4d2c5e*/
          *(_DWORD *)v14 = *v13; /*0x4d2c61*/
          *((_DWORD *)v14 + 1) = v13[1]; /*0x4d2c66*/
          *((_DWORD *)v14 + 2) = v13[2]; /*0x4d2c6c*/
          *((_DWORD *)v14 + 3) = v13[3]; /*0x4d2c72*/
        }
        while ( v11 ); /*0x4d2c75*/
        v3 = a2; /*0x4d2c77*/
      }
      if ( BYTE1(this->m_C) ) /*0x4d2c7d*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4d2c86*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x4d2c8e*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x4d2c99*/
    *(_DWORD *)&this->__pad_5[3] = v3; /*0x4d2c9f*/
    BYTE1(this->m_C) = a3 == 0; /*0x4d2ca2*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_UDrawRecord_FoggedObjectClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x4d2cab*/
  }
  v15 = *(_DWORD *)&this->__pad_5[3]; /*0x4d2cae*/
  if ( v15 < *(_DWORD *)this->__tail_10 ) /*0x4d2cb6*/
    *(_DWORD *)this->__tail_10 = v15; /*0x4d2cb8*/
  return 1; /*0x4d2cbb*/
}



// ==== 0x004D2CD0  _DynamicVectorClass_UDrawRecord_FoggedObjectClass::Read  this=DynamicVector  sig=csp ====
int __thiscall FoggedObjectClass::Read(_DynamicVectorClass_UDrawRecord_FoggedObjectClass *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(_DWORD *)this->__tail_10; /*0x4d2cd0*/
  result = 0; /*0x4d2cd5*/
  if ( v2 <= 0 ) /*0x4d2cdb*/
    return -1; /*0x4d2cfc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 4 ) /*0x4d2ce1*/
  {
    if ( ++result >= v2 ) /*0x4d2cfa*/
      return -1; /*0x4d2cfa*/
  }
  return result; /*0x4d2cff*/
}



// ==== 0x004D2D10  _VectorClass_UDrawRecord_FoggedObjectClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall FoggedObject_DrawVector::QueryInterface(_VectorClass_UDrawRecord_FoggedObjectClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4d2d13*/
  *(_DWORD *)this->__pad_0 = &VectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d2d16*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4d2d20*/
  {
    __3_YAXPAX_Z(v3); /*0x4d2d28*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4d2d30*/
  }
  BYTE1(this->m_C) = 0; /*0x4d2d3b*/
  this->m_8 = 0; /*0x4d2d41*/
  if ( (a2 & 1) != 0 ) /*0x4d2d48*/
    __3_YAXPAX_Z(this); /*0x4d2d4b*/
  return this->__pad_0; /*0x4d2d55*/
}



// ==== 0x004D2D60  _DynamicVectorClass_UDrawRecord_FoggedObjectClass::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall FoggedObjectClass::QueryInterface(_DynamicVectorClass_UDrawRecord_FoggedObjectClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4d2d63*/
  *(_DWORD *)this->__pad_0 = &VectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d2d66*/
  if ( v3 && BYTE1(this->m_C) ) /*0x4d2d70*/
  {
    __3_YAXPAX_Z(v3); /*0x4d2d78*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x4d2d80*/
  }
  BYTE1(this->m_C) = 0; /*0x4d2d8b*/
  *(_DWORD *)&this->__pad_5[3] = 0; /*0x4d2d91*/
  if ( (a2 & 1) != 0 ) /*0x4d2d98*/
    __3_YAXPAX_Z(this); /*0x4d2d9b*/
  return this->__pad_0; /*0x4d2da5*/
}



// ==== 0x004D2DB0  FoggedObject::DrawVector_Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall FoggedObject::DrawVector_Constructor(FoggedObject *this, int a2, int a3)
{
  AbstractClass *v4; // ebx
  int v5; // eax
  int v6; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // edx

  v4 = 0; /*0x4d2db9*/
  this->FoggedObject_field_0x4 = 0; /*0x4d2dbd*/
  this->Capacity = a2; /*0x4d2dc0*/
  this->IsInitialized = 1; /*0x4d2dc3*/
  this->IsAllocated = 0; /*0x4d2dc7*/
  *(_DWORD *)this->__pad_0 = &VectorClass<FoggedObjectClass::DrawRecord>::`vftable'; /*0x4d2dca*/
  if ( !a2 ) /*0x4d2dd0*/
    return this->__pad_0; /*0x4d2e38*/
  if ( !a3 ) /*0x4d2dd8*/
  {
    v8 = __2_YAPAXI_Z(16 * a2); /*0x4d2e07*/
    if ( v8 ) /*0x4d2e11*/
    {
      if ( a2 - 1 >= 0 ) /*0x4d2e18*/
      {
        v9 = v8 + 8; /*0x4d2e1a*/
        v10 = a2; /*0x4d2e1d*/
        do /*0x4d2e2d*/
        {
          *(_DWORD *)(v9 - 8) = 0; /*0x4d2e1e*/
          *(_DWORD *)(v9 - 4) = 0; /*0x4d2e21*/
          *(_BYTE *)v9 = 0; /*0x4d2e24*/
          *(_DWORD *)(v9 + 4) = 0; /*0x4d2e26*/
          v9 += 16; /*0x4d2e29*/
          --v10; /*0x4d2e2c*/
        }
        while ( v10 ); /*0x4d2e2d*/
      }
      v4 = (AbstractClass *)v8; /*0x4d2e2f*/
    }
    this->FoggedObject_field_0x4 = v4; /*0x4d2e31*/
    this->IsAllocated = 1; /*0x4d2e34*/
    return this->__pad_0; /*0x4d2e34*/
  }
  if ( a2 - 1 >= 0 ) /*0x4d2ddf*/
  {
    v5 = a3 + 8; /*0x4d2de1*/
    v6 = a2; /*0x4d2de4*/
    do /*0x4d2df4*/
    {
      *(_DWORD *)(v5 - 8) = 0; /*0x4d2de5*/
      *(_DWORD *)(v5 - 4) = 0; /*0x4d2de8*/
      *(_BYTE *)v5 = 0; /*0x4d2deb*/
      *(_DWORD *)(v5 + 4) = 0; /*0x4d2ded*/
      v5 += 16; /*0x4d2df0*/
      --v6; /*0x4d2df3*/
    }
    while ( v6 ); /*0x4d2df4*/
  }
  this->FoggedObject_field_0x4 = (AbstractClass *)a3; /*0x4d2df6*/
  return this->__pad_0; /*0x4d2dfb*/
}



// ==== 0x004D2E40  Vector::ReallocDynamic  this=Vector  sig=csp ====
char __thiscall ReallocDynamicVector(int this, int a2)
{
  char *v3; // edi
  int i; // ecx
  int v5; // eax
  _DWORD *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x4d2e4c*/
    return 0; /*0x4d2e4c*/
  v3 = (char *)__2_YAPAXI_Z(8 * (a2 + *(_DWORD *)(this + 8))); /*0x4d2e60*/
  if ( !v3 ) /*0x4d2e67*/
    return 0; /*0x4d2ec0*/
  for ( i = 0; i < *(_DWORD *)(this + 4); *(_DWORD *)&v3[v5 + 4] = v6[1] ) /*0x4d2e75*/
  {
    v5 = 8 * i; /*0x4d2e79*/
    v6 = (_DWORD *)(*(_DWORD *)this + 8 * i++); /*0x4d2e82*/
    *(_DWORD *)&v3[v5] = *v6; /*0x4d2e87*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x4d2e9b*/
  v7 = a2 + *(_DWORD *)(this + 8); /*0x4d2ea6*/
  *(_DWORD *)this = v3; /*0x4d2ea8*/
  *(_DWORD *)(this + 8) = v7; /*0x4d2eaa*/
  *(_DWORD *)(this + 16) = 0; /*0x4d2ead*/
  return 1; /*0x4d2eb4*/
}



// ==== 0x004D2ED0  globalHelper_0D2ED0  this=-  sig=ida-proto ====
int __cdecl globalHelper_0D2ED0(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x4d2ee0*/
  else
    return *a1 >= *a2 ? 1 : -1;
}



// ==== 0x004D2F00  sub_4D2F00  this=AbstractClass  sig=csp ====
int __fastcall sub_4D2F00(int a1, int a2, int *a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  v3 = a2; /*0x4d2f05*/
  if ( a2 <= 0 ) /*0x4d2f07*/
    return 0; /*0x4d2f39*/
  v4 = *a3; /*0x4d2f0d*/
  while ( 1 ) /*0x4d2f16*/
  {
    v5 = *(_DWORD *)(a1 + 8 * (v3 / 2)); /*0x4d2f16*/
    if ( v5 <= v4 ) /*0x4d2f1e*/
      break; /*0x4d2f1e*/
    v3 /= 2; /*0x4d2f20*/
LABEL_7:
    if ( v3 <= 0 ) /*0x4d2f32*/
      return 0; /*0x4d2f32*/
  }
  if ( v5 != v4 ) /*0x4d2f24*/
  {
    a1 += 8 * (v3 / 2) + 8; /*0x4d2f26*/
    v3 += -1 - v3 / 2; /*0x4d2f2e*/
    goto LABEL_7; /*0x4d2f2e*/
  }
  return a1 + 8 * (v3 / 2); /*0x4d2f34*/
}



// ==== 0x004D2F50  sub_4D2F50  this=-  sig=ida-proto ====
void sub_4D2F50()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4d2f5c*/
  dbl_8B3D90 = Math::Sqrt(v0 + v0); /*0x4d2f6e*/
}



// ==== 0x004D2F80  sub_4D2F80  this=-  sig=ida-proto ====
void sub_4D2F80()
{
  dbl_8B3DF8 = dbl_8B3D90 / 60.0; /*0x4d2f8c*/
}



// ==== 0x004D2FA0  sub_4D2FA0  this=-  sig=ida-proto ====
void sub_4D2FA0()
{
  dbl_8B3DE0 = 1.0 / dbl_8B3DF8; /*0x4d2fac*/
}



// ==== 0x004D2FC0  sub_4D2FC0  this=-  sig=ida-proto ====
void sub_4D2FC0()
{
  dbl_8B3DD8 = 0.0174532925199433 * 45.0; /*0x4d2fcc*/
}



// ==== 0x004D2FE0  sub_4D2FE0  this=-  sig=ida-proto ====
void sub_4D2FE0()
{
  dbl_8B3D98 = 0.0174532925199433 * 60.0; /*0x4d2fec*/
}



// ==== 0x004D3000  sub_4D3000  this=-  sig=ida-proto ====
void sub_4D3000()
{
  dbl_8B3D70 = 0.0174532925199433 * 90.0; /*0x4d300c*/
}



// ==== 0x004D3020  sub_4D3020  this=-  sig=ida-proto ====
__int64 sub_4D3020()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_8B3D70 - dbl_8B3D98); /*0x4d3032*/
  result = Math::RoundToInt(v0 * dbl_8B3D90 * 0.5); /*0x4d3046*/
  dword_8B3E00 = result; /*0x4d304b*/
  return result; /*0x4d3050*/
}



// ==== 0x004D3060  sub_4D3060  this=-  sig=ida-proto ====
void sub_4D3060()
{
  dbl_8B3DA0 = Math::ArcTan((double)dword_8B3E00 * 0.00390625); /*0x4d3077*/
}



// ==== 0x004D3090  sub_4D3090  this=-  sig=ida-proto ====
void sub_4D3090()
{
  dbl_8B3DB8 = Math::ArcTan((double)(2 * dword_8B3E00) / dbl_8B3D90); /*0x4d30b2*/
}



// ==== 0x004D30C0  sub_4D30C0  this=-  sig=ida-proto ====
__int64 sub_4D30C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_8B3E00) + 0.5); /*0x4d30db*/
  dword_8B3DF4 = result; /*0x4d30e0*/
  return result; /*0x4d30e6*/
}



// ==== 0x004D30F0  sub_4D30F0  this=-  sig=ida-proto ====
int sub_4D30F0()
{
  g_FootClass_Pool = 0; /*0x4d30f2*/
  return 0; /*0x4d30fe*/
}



// ==== 0x004D3100  sub_4D3100  this=-  sig=ida-proto ====
int sub_4D3100()
{
  dword_8B3DA8 = 0; /*0x4d3102*/
  dword_8B3DAC = 0; /*0x4d3107*/
  dword_8B3DB0 = 0; /*0x4d310c*/
  return 0; /*0x4d3111*/
}



// ==== 0x004D3120  sub_4D3120  this=-  sig=ida-proto ====
int sub_4D3120()
{
  dword_8B3DF0 = 0; /*0x4d3125*/
  dword_8B3DE8 = 128; /*0x4d312f*/
  dword_8B3DEC = 128; /*0x4d3134*/
  return 128; /*0x4d3139*/
}



// ==== 0x004D3140  sub_4D3140  this=-  sig=ida-proto ====
int sub_4D3140()
{
  dword_8B3D78 = 0; /*0x4d3142*/
  dword_8B3D7C = 0; /*0x4d3147*/
  dword_8B3D80 = 0; /*0x4d314c*/
  dword_8B3D84 = 0; /*0x4d3151*/
  return 0; /*0x4d3156*/
}



// ==== 0x004D3160  sub_4D3160  this=-  sig=ida-proto ====
int sub_4D3160()
{
  dword_8B3DC4 = 0; /*0x4d3167*/
  dword_8B3DC8 = 0; /*0x4d316c*/
  byte_8B3DCC = 1; /*0x4d3171*/
  byte_8B3DCD = 0; /*0x4d3178*/
  FootClass_Array = (int)&off_7E8C28; /*0x4d317d*/
  dword_8B3DD4 = 10; /*0x4d3187*/
  dword_8B3DD0 = 0; /*0x4d3191*/
  return atexit(sub_4D31A0); /*0x4d319c*/
}



// ==== 0x004D31A0  sub_4D31A0  this=-  sig=ida-proto ====
void __cdecl sub_4D31A0()
{
  FootClass_Array = (int)&VectorClass<FootClass *>::`vftable'; /*0x4d31a8*/
  if ( dword_8B3DC4 && byte_8B3DCD ) /*0x4d31bc*/
  {
    __3_YAXPAX_Z(dword_8B3DC4); /*0x4d31bf*/
    dword_8B3DC4 = 0; /*0x4d31c7*/
  }
  byte_8B3DCD = 0; /*0x4d31cd*/
  dword_8B3DC8 = 0; /*0x4d31d3*/
}



// ==== 0x004D31E0  FootClass::Construct  this=FootClass  sig=csp ====
_DWORD *__thiscall FootClass::Construct(FootClass *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  TechnoClass::TechnoClass((TechnoClass *)this, a2); /*0x4d31ea*/
  this->planningPathIdx = -1; /*0x4d31f1*/
  *(_WORD *)this->unknownShort524 = 0; /*0x4d31fb*/
  *(_WORD *)this->unknownShort526 = 0; /*0x4d3202*/
  *(_WORD *)this->unknownShort528 = 0; /*0x4d3209*/
  *(_WORD *)this->FootClass_field_short_52A = 0; /*0x4d3210*/
  this->unknown530 = 0; /*0x4d3217*/
  this->unknown534 = 0; /*0x4d321d*/
  this->unknown538 = 0; /*0x4d3223*/
  this->FootClass_field_bool_53C = 0; /*0x4d3229*/
  this->unknown540 = 0; /*0x4d322f*/
  LOWORD(this->currentMapCoords[0]) = 0; /*0x4d3235*/
  HIWORD(this->currentMapCoords[0]) = 0; /*0x4d323c*/
  LOWORD(this->lastMapCoords[0]) = 0; /*0x4d3243*/
  HIWORD(this->lastMapCoords[0]) = 0; /*0x4d324a*/
  LOWORD(this->lastJumpjetMapCoords[0]) = 0; /*0x4d3251*/
  HIWORD(this->lastJumpjetMapCoords[0]) = 0; /*0x4d3258*/
  LOWORD(this->currentJumpjetMapCoords[0]) = 0; /*0x4d325f*/
  HIWORD(this->currentJumpjetMapCoords[0]) = 0; /*0x4d3266*/
  this->unknownCoords568[0] = 0; /*0x4d326d*/
  this->unknownCoords568[1] = 0; /*0x4d3273*/
  this->unknownCoords568[2] = 0; /*0x4d3279*/
  this->currentSpeed_percentage[0] = 0; /*0x4d327f*/
  this->currentSpeed_percentage[1] = 0; /*0x4d328b*/
  this->currentSpeed_multiplier[0] = 0; /*0x4d3292*/
  this->currentSpeed_multiplier[1] = 1072693248; /*0x4d329b*/
  AbstractClassVector::Construct((AbstractClassVector *)this->unknownAbstractArray588, 0, 0); /*0x4d32a5*/
  this->unknownAbstractArray588[0] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x4d32aa*/
  *(_DWORD *)&this->__pad_58C[16] = 10; /*0x4d32b0*/
  *(_DWORD *)&this->__pad_58C[12] = 0; /*0x4d32b7*/
  this->FootClass_field_5A0 = 0; /*0x4d32c0*/
  this->movementDestination = 0; /*0x4d32c7*/
  this->lastDestination = 0; /*0x4d32d0*/
  AbstractClassVector::Construct((AbstractClassVector *)this->FootClass_field_abstract_array_5AC, 0, 0); /*0x4d32d6*/
  this->FootClass_field_abstract_array_5AC[0] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x4d32e0*/
  *(_DWORD *)&this->__pad_5B0[16] = 10; /*0x4d32e6*/
  *(_DWORD *)&this->__pad_5B0[12] = 0; /*0x4d32e9*/
  this->FootClass_field_int_5C4 = -1; /*0x4d32ec*/
  this->FootClass_field_5C8 = 0; /*0x4d32f6*/
  this->FootClass_field_5CC = 0; /*0x4d32fc*/
  this->FootClass_field_bool_5D1 = 0; /*0x4d3302*/
  this->team = 0; /*0x4d3308*/
  this->nextTeamMember = 0; /*0x4d330e*/
  this->FootClass_field_5DC = 0; /*0x4d3314*/
  this->pathDelayTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d3320*/
  this->pathDelayTimer[2] = 0; /*0x4d3326*/
  this->FootClass_field_int_64C = 10; /*0x4d332c*/
  this->FootClass_field_timer_650[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d3338*/
  this->FootClass_field_timer_650[2] = 0; /*0x4d333e*/
  v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d3344*/
  this->sightTimer[2] = 0; /*0x4d3349*/
  this->sightTimer[0] = v3; /*0x4d334f*/
  this->blockagePathTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d335b*/
  this->blockagePathTimer[2] = 0; /*0x4d3361*/
  this->locomotor[0] = 0; /*0x4d3367*/
  this->unknownPoint3d678[0] = dword_8B3DA8; /*0x4d3378*/
  this->unknownPoint3d678[1] = dword_8B3DAC; /*0x4d3384*/
  this->unknownPoint3d678[2] = dword_8B3DB0; /*0x4d338c*/
  this->tubeIndex = -1; /*0x4d338f*/
  this->unknownBool685 = 0; /*0x4d3396*/
  this->waypointIndex = 0; /*0x4d339c*/
  this->unknownBool687 = 0; /*0x4d33a2*/
  this->unknownBool688 = 0; /*0x4d33a8*/
  this->isTeamLeader = 0; /*0x4d33ae*/
  this->shouldScanForTarget = 0; /*0x4d33b4*/
  this->FootClass_field_bool_68B = 0; /*0x4d33ba*/
  this->FootClass_field_bool_68C = 0; /*0x4d33c0*/
  this->unknownBool68D = 0; /*0x4d33c6*/
  this->FootClass_field_bool_68E = 0; /*0x4d33cc*/
  this->shouldEnterAbsorber = 0; /*0x4d33d2*/
  this->shouldEnterOccupiable = 0; /*0x4d33d8*/
  this->shouldGarrisonStructure = 0; /*0x4d33de*/
  this->parasiteEatingMe = 0; /*0x4d33e4*/
  this->unknown698 = 0; /*0x4d33ea*/
  this->parasiteImUsing = 0; /*0x4d33f0*/
  this->paralysisTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d33fc*/
  this->paralysisTimer[2] = 0; /*0x4d3402*/
  this->FootClass_field_bool_6AC = 0; /*0x4d340e*/
  this->isAttackedByLocomotor = 0; /*0x4d3414*/
  this->isLetGoByLocomotor = 0; /*0x4d341a*/
  this->FootClass_field_bool_6AF = 0; /*0x4d3420*/
  this->FootClass_field_bool_6B0 = 0; /*0x4d3426*/
  this->FootClass_field_bool_6B1 = 0; /*0x4d342c*/
  this->FootClass_field_bool_6B2 = 0; /*0x4d3432*/
  this->FootClass_field_bool_6B3 = 0; /*0x4d3438*/
  this->FootClass_field_bool_6B4 = 0; /*0x4d343e*/
  this->FootClass_field_bool_6B5 = 0; /*0x4d3444*/
  this->frozenStill = 1; /*0x4d344a*/
  this->FootClass_field_bool_6B7 = 0; /*0x4d3451*/
  this->FootClass_field_bool_6B8 = 0; /*0x4d3457*/
  this->TechnoClass = &FootClass::`vftable'; /*0x4d345d*/
  this->? = &FootClass::`vftable'; /*0x4d3463*/
  this->? = &FootClass::`vftable'; /*0x4d346a*/
  this->? = &FootClass::`vftable'; /*0x4d3471*/
  this->pathDirections[0] = -1; /*0x4d3478*/
  AudioController::Init((AudioController *)this->audioController7); /*0x4d3482*/
  if ( FootClass_Array.? < (int)FootClass_Array.? /*0x4d34bb*/
    || (BYTE1(FootClass_Array.?) || !FootClass_Array.?)
    && FootClass_Array.? > 0
    && (*((unsigned __int8 (__thiscall **)(FootClass *, char *, _DWORD))FootClass_Array.TechnoClass + 2))(
         &FootClass_Array,
         (char *)FootClass_Array.? + FootClass_Array.?,
         0) )
  {
    v4 = FootClass_Array.?++; /*0x4d34c8*/
    *((_DWORD *)FootClass_Array.? + v4) = this; /*0x4d34d7*/
  }
  LOBYTE(this->?) |= 4u; /*0x4d34e0*/
  if ( g_BuildingLoadQueue_Array.?[1] < g_BuildingLoadQueue_Array.? /*0x4d3515*/
    || (BYTE1(g_BuildingLoadQueue_Array.?[0]) || !g_BuildingLoadQueue_Array.?)
    && g_BuildingLoadQueue_Array.?[2] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_BuildingLoadQueue_Array.?[2] + 8))(
         &g_BuildingLoadQueue_Array.?[2],
         g_BuildingLoadQueue_Array.? + g_BuildingLoadQueue_Array.?[2],
         0) )
  {
    v5 = g_BuildingLoadQueue_Array.?[1]++; /*0x4d3522*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v5) = this; /*0x4d3531*/
  }
  return &this->TechnoClass; /*0x4d3536*/
}



// ==== 0x004D3540  FootClass::PostLoadInit  this=FootClass  sig=csp ====
_DWORD *__thiscall FootClass::PostLoadInit(FootClass *this, int a2)
{
  TechnoClass::Constructor((TechnoClass *)this, a2); /*0x4d3548*/
  this->unknownAbstractArray588[0] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x4d3552*/
  this->FootClass_field_abstract_array_5AC[0] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x4d3558*/
  this->locomotor[0] = 0; /*0x4d355e*/
  this->TechnoClass = &FootClass::`vftable'; /*0x4d3568*/
  this->? = &FootClass::`vftable'; /*0x4d356e*/
  this->? = &FootClass::`vftable'; /*0x4d3575*/
  this->? = &FootClass::`vftable'; /*0x4d357c*/
  return &this->TechnoClass; /*0x4d3585*/
}



// ==== 0x004D3590  FootClass::Destruct  this=FootClass  sig=csp ====
int __thiscall FootClass::Destruct(FootClass *this)
{
  int *team; // ecx
  int v3; // eax
  int v4; // eax
  ParasiteClass *parasiteImUsing; // ecx
  _DWORD *v6; // eax
  int v7; // eax
  void *v8; // eax
  void *v9; // eax
  FootClass *v11; // [esp+8h] [ebp-4h] BYREF

  team = (int *)this->team; /*0x4d3597*/
  this->TechnoClass = &FootClass::`vftable'; /*0x4d359d*/
  this->? = &FootClass::`vftable'; /*0x4d35a5*/
  this->? = &FootClass::`vftable'; /*0x4d35ac*/
  this->? = &FootClass::`vftable'; /*0x4d35b3*/
  if ( team && byte_A8E9A0 ) /*0x4d35c2*/
    TeamClass::LiberateMember_Start(team, (int)this, 0xFFFFFFFF, 0); /*0x4d35c8*/
  v11 = this; /*0x4d35dd*/
  v3 = (*((int (__thiscall **)(FootClass *, FootClass **))FootClass_Array.TechnoClass + 4))(&FootClass_Array, &v11); /*0x4d35e1*/
  if ( v3 != -1 ) /*0x4d35e7*/
    FootClass::RemoveFromPointerArray(&FootClass_Array, v3); /*0x4d35ef*/
  v11 = this; /*0x4d3604*/
  v4 = (*(int (__thiscall **)(char *, FootClass **))(*(_DWORD *)&g_BuildingLoadQueue_Array.?[2] + 16))( /*0x4d3608*/
         &g_BuildingLoadQueue_Array.?[2],
         &v11);
  if ( v4 != -1 ) /*0x4d360e*/
    DynamicVector::RemoveItem((DynamicVector *)&g_BuildingLoadQueue_Array.?[2], v4); /*0x4d3616*/
  parasiteImUsing = this->parasiteImUsing; /*0x4d361b*/
  if ( parasiteImUsing ) /*0x4d3623*/
  {
    (*((void (__thiscall **)(ParasiteClass *, int))parasiteImUsing->AbstractClass + 8))(parasiteImUsing, 1); /*0x4d3629*/
    this->parasiteImUsing = 0; /*0x4d362c*/
  }
  if ( this->currentJumpjetMapCoords[0] != g_FootClass_Pool ) /*0x4d3646*/
  {
    v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)this->currentJumpjetMapCoords); /*0x4d365b*/
    if ( (FootClass *)v6[56] == this ) /*0x4d3666*/
      v6[56] = 0; /*0x4d3668*/
  }
  Mixer::ReleaseChannel((Mixer *)this->audioController7); /*0x4d3677*/
  AudioFileClass::Release((AudioFileClass *)this->audioController7); /*0x4d367e*/
  v7 = this->locomotor[0]; /*0x4d3683*/
  if ( v7 ) /*0x4d368b*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(this->locomotor[0]); /*0x4d3690*/
  v8 = *(void **)this->__pad_5B0; /*0x4d3693*/
  this->FootClass_field_abstract_array_5AC[0] = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x4d36a0*/
  if ( v8 && this->__pad_5B0[9] ) /*0x4d36a8*/
  {
    __3_YAXPAX_Z(v8); /*0x4d36b1*/
    *(_DWORD *)this->__pad_5B0 = 0; /*0x4d36b9*/
  }
  this->__pad_5B0[9] = 0; /*0x4d36bf*/
  *(_DWORD *)&this->__pad_5B0[4] = 0; /*0x4d36c5*/
  v9 = *(void **)this->__pad_58C; /*0x4d36cb*/
  this->unknownAbstractArray588[0] = (int)&VectorClass<AbstractClass *>::`vftable'; /*0x4d36d1*/
  if ( v9 && this->__pad_58C[9] ) /*0x4d36dc*/
  {
    __3_YAXPAX_Z(v9); /*0x4d36e5*/
    *(_DWORD *)this->__pad_58C = 0; /*0x4d36ed*/
  }
  this->__pad_58C[9] = 0; /*0x4d36f5*/
  *(_DWORD *)&this->__pad_58C[4] = 0; /*0x4d36fb*/
  return TechnoClass::DTOR((int)this); /*0x4d3706*/
}



// ==== 0x004D3710  FootClass::Destru_vt337  this=FootClass  sig=csp ====
void __thiscall FootClass::Destru_vt337(FootClass *this, double a2)
{
  if ( a2 < 1.0 ) /*0x4d371f*/
  {
    if ( a2 > 0.0 ) /*0x4d3747*/
    {
      *(double *)this->currentSpeed_percentage = a2; /*0x4d3768*/
    }
    else
    {
      this->currentSpeed_percentage[0] = 0; /*0x4d3749*/
      this->currentSpeed_percentage[1] = 0; /*0x4d3753*/
    }
  }
  else
  {
    this->currentSpeed_percentage[0] = 0; /*0x4d3721*/
    this->currentSpeed_percentage[1] = 1072693248; /*0x4d372b*/
  }
}



// ==== 0x004D3780  FootClass::UpdateReveal  this=FootClass  sig=csp ====
char __thiscall FootClass::UpdateReveal(FootClass *this, int a2)
{
  int v2; // edi
  _BYTE v5[4]; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x4d3783*/
  if ( a2 == 2 ) /*0x4d378c*/
    return 1; /*0x4d3793*/
  if ( !(unsigned __int8)TechnoClass::UpdateProdWithSound((TechnoClass *)this, a2) ) /*0x4d3799*/
    return 0; /*0x4d3803*/
  if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 30))(this) == 2 ) /*0x4d37ac*/
  {
    a2 = *(_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))this->TechnoClass + 110))(this, v5); /*0x4d37c4*/
    if ( v2 ) /*0x4d37c8*/
    {
      if ( v2 == 1 || v2 == 3 ) /*0x4d37d0*/
      {
        MapClass::FillRevealBuffer((MapClass *)&stru_87F5F0.__pad_58[416], &a2, this); /*0x4d37dd*/
        return 1; /*0x4d37e7*/
      }
    }
    else
    {
      MapClass::ApplyOverlayReveal((MapClass *)&stru_87F5F0.__pad_58[416], &a2, (char *)this); /*0x4d37f5*/
    }
  }
  return 1; /*0x4d378e*/
}



// ==== 0x004D3810  FootClass::CheckTileSeed  this=FootClass  sig=csp ====
bool __thiscall FootClass::CheckTileSeed(FootClass *this, _DWORD *a2)
{
  int v3; // ebx
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // eax
  int (__thiscall **vtable0)(FootClass *); // eax
  int v9; // edx
  char v10; // al
  int v11; // [esp-8h] [ebp-28h]
  __int16 v12; // [esp+4h] [ebp-1Ch] BYREF
  int v13; // [esp+8h] [ebp-18h]
  __int16 v14[2]; // [esp+Ch] [ebp-14h] BYREF
  __int16 v15; // [esp+10h] [ebp-10h] BYREF
  char v16; // [esp+14h] [ebp-Ch] BYREF
  int v17; // [esp+1Ch] [ebp-4h]
  _DWORD *v18; // [esp+24h] [ebp+4h]

  v3 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1460); /*0x4d381f*/
  if ( v3 == -1 ) /*0x4d3828*/
    return 1; /*0x4d382b*/
  v5 = *a2 / 256; /*0x4d3853*/
  v6 = a2[1] / 256; /*0x4d3856*/
  LOWORD(v18) = v5; /*0x4d3860*/
  HIWORD(v18) = v6; /*0x4d3865*/
  *(_DWORD *)v14 = v18; /*0x4d386e*/
  if ( __PAIR32__(v6, v5) == g_FootClass_Pool ) /*0x4d3872*/
    return 0; /*0x4d387e*/
  v7 = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->TechnoClass + 19))(this); /*0x4d3892*/
  LOWORD(v17) = *v7 / 256; /*0x4d38a5*/
  HIWORD(v17) = v7[1] / 256; /*0x4d38bb*/
  vtable0 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4d38c4*/
  v13 = v17; /*0x4d38c6*/
  v11 = vtable0[200](this); /*0x4d38d4*/
  v9 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &v12) + 80) >> 8; /*0x4d38e8*/
  LOBYTE(v9) = v9 & 1; /*0x4d38eb*/
  v10 = (*((int (__thiscall **)(FootClass *, _DWORD, int, int))this->TechnoClass + 47))(this, 0, v9, v11); /*0x4d38f3*/
  return MapSeed::CheckTileMatch((MapSeed *)&stru_87F5F0.__pad_58[416], &v15, v14, v3, v10, (char)&v16, 0); /*0x4d382a*/
}



// ==== 0x004D3920  FootClass::MovementStep  this=BuildingClass  sig=csp ====
int __userpurge FootClass::MovementStep@<eax>(int a1@<ecx>, int a2@<edi>, int a3, int a4, int a5, int a6)
{
  double v6; // st7
  int v8; // edx
  int result; // eax
  int v10; // esi
  int v11; // edi
  _DWORD *v12; // eax
  int *v13; // eax
  int v14; // edx
  _DWORD *v15; // eax
  int v16; // eax
  _DWORD **v17; // ecx
  int v18; // esi
  char v19; // bl
  int v20; // edi
  void *v21; // eax
  int v22; // eax
  int v23; // esi
  void *v24; // eax
  int v25; // edx
  char v26; // bl
  __int16 *v27; // eax
  int v28; // eax
  signed int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  int v34; // esi
  void *v35; // eax
  _DWORD *v36; // eax
  int v37; // esi
  void *v38; // eax
  char IsBuildableAdvanced; // al
  int v40; // edx
  char v41; // bl
  __int16 *v42; // eax
  int v43; // eax
  int *v44; // eax
  int v45; // esi
  void *v46; // eax
  int v47; // ebx
  _DWORD *PathWithRetry; // eax
  _DWORD *v49; // edi
  int v50; // edx
  int v51; // eax
  int *v52; // esi
  int v53; // eax
  _DWORD *v54; // eax
  int v55; // ecx
  _DWORD *v56; // edi
  int v57; // edi
  void *v58; // eax
  wchar_t *v60; // esi
  int v61; // eax
  int v62; // ecx
  int v63; // edx
  int v64; // eax
  int v65; // ecx
  signed int v66; // ecx
  int v67; // esi
  void *v68; // eax
  int TileIndex; // [esp+28h] [ebp-1FD8h]
  int v70; // [esp+30h] [ebp-1FD0h]
  char v71; // [esp+48h] [ebp-1FB8h]
  double v72; // [esp+50h] [ebp-1FB0h]
  char v73; // [esp+50h] [ebp-1FB0h]
  double v74; // [esp+50h] [ebp-1FB0h]
  int v75; // [esp+50h] [ebp-1FB0h]
  char v76; // [esp+50h] [ebp-1FB0h]
  signed int v78; // [esp+54h] [ebp-1FACh]
  int v79; // [esp+54h] [ebp-1FACh]
  char v80; // [esp+58h] [ebp-1FA8h]
  char v81; // [esp+5Ch] [ebp-1FA4h]
  int v82; // [esp+64h] [ebp-1F9Ch] BYREF
  int v83; // [esp+68h] [ebp-1F98h] BYREF
  int GameSpeedFromSession; // [esp+6Ch] [ebp-1F94h] BYREF
  int v85; // [esp+70h] [ebp-1F90h] BYREF
  int v86; // [esp+74h] [ebp-1F8Ch] BYREF
  int v87; // [esp+78h] [ebp-1F88h]
  _DWORD *v88; // [esp+7Ch] [ebp-1F84h]
  int v89; // [esp+80h] [ebp-1F80h] BYREF
  int v90; // [esp+84h] [ebp-1F7Ch] BYREF
  int v91; // [esp+88h] [ebp-1F78h] BYREF
  int v92; // [esp+8Ch] [ebp-1F74h] BYREF
  int v93; // [esp+90h] [ebp-1F70h] BYREF
  char v94[16]; // [esp+94h] [ebp-1F6Ch] BYREF
  _DWORD v95[8]; // [esp+A4h] [ebp-1F5Ch] BYREF
  _BYTE v96[7996]; // [esp+C4h] [ebp-1F3Ch] BYREF

  if ( !a4 ) /*0x4d3938*/
    *(_DWORD *)(a1 + 1504) = -1; /*0x4d393a*/
  v8 = *(_DWORD *)a1; /*0x4d3954*/
  v87 = 0; /*0x4d3957*/
  v85 = ((__int16)a3 << 8) + 128; /*0x4d396a*/
  v86 = (SHIWORD(a3) << 8) + 128; /*0x4d3978*/
  result = (*(int (__thiscall **)(int, int *))(v8 + 716))(a1, &v85); /*0x4d397f*/
  if ( !(_BYTE)result ) /*0x4d3987*/
  {
    *(_DWORD *)(a1 + 1504) = -1; /*0x4d3989*/
    return result; /*0x4d399c*/
  }
  v10 = ((__int16)a3 << 8) + 128; /*0x4d39c0*/
  v11 = (SHIWORD(a3) << 8) + 128; /*0x4d39c6*/
  v12 = (_DWORD *)(*(int (__thiscall **)(int, char *, int))(*(_DWORD *)a1 + 72))(a1, v94, a2); /*0x4d39cc*/
  v13 = Coord::Subtract(&v92, *v12 - v10, v12[1] - v11, v12[2]); /*0x4d39e2*/
  v86 = *v13; /*0x4d39ec*/
  v14 = v13[1]; /*0x4d39f0*/
  __asm { fild dword ptr [esp+1FB0h+var_1F8C] } /*0x4d39f3*/
  v15 = (_DWORD *)v13[2]; /*0x4d39f7*/
  v87 = v14; /*0x4d39fa*/
  __asm { fild [esp+1FB0h+var_1F88] } /*0x4d39fe*/
  v88 = v15; /*0x4d3a02*/
  __asm /*0x4d3a06*/
  {
    fild [esp+1FB0h+var_1F84]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fld st(3)
    fmul st, st(4)
    faddp st(1), st
    fstp [esp+1FB0h+var_1FB0]; double
    fstp st
    fstp st
    fstp st
  }
  Math::Sqrt(v72); /*0x4d3a23*/
  LOWORD(v16) = Math::RoundToInt(v6); /*0x4d3a2b*/
  v17 = *(_DWORD ***)(a1 + 1492); /*0x4d3a30*/
  v18 = v16; /*0x4d3a36*/
  v89 = v16; /*0x4d3a3a*/
  if ( v17 ) /*0x4d3a3e*/
    GameSpeedFromSession = FootClass::GetGameSpeedFromSession(v17); /*0x4d3a45*/
  else
    GameSpeedFromSession = dword_8871E0[1].?; /*0x4d3a57*/
  v19 = *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 3220); /*0x4d3a66*/
  v20 = *(_DWORD *)a1; /*0x4d3a6c*/
  v21 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a4); /*0x4d3a84*/
  v22 = (*(int (__thiscall **)(int, void *, int, int, _DWORD, int))(v20 + 428))(a1, v21, -1, -1, 0, 1); /*0x4d3a8c*/
  if ( v22 == 6 ) /*0x4d3a95*/
  {
    if ( v18 > GameSpeedFromSession && !v19 ) /*0x4d3aa7*/
    {
      v23 = dword_7E8BF0[*(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1460)]; /*0x4d3ac3*/
      if ( !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 3372) /*0x4d3aee*/
        || (v24 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a4),
            LOBYTE(GameSpeedFromSession) = 1,
            !(unsigned __int8)Cell::IsBuildableAdvanced((int)v24)) )
      {
        LOBYTE(GameSpeedFromSession) = 0; /*0x4d3afc*/
      }
      v25 = *(_DWORD *)a1; /*0x4d3b01*/
      v26 = *(_BYTE *)(a1 + 140); /*0x4d3b04*/
      v87 = 1; /*0x4d3b1a*/
      v73 = (*(int (__thiscall **)(int, int *, _DWORD))(v25 + 440))(a1, &v91, 0); /*0x4d3b28*/
      v71 = v85; /*0x4d3b2a*/
      v27 = (__int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 440))(a1); /*0x4d3b40*/
      TileIndex = MapClass::GetTileIndex(&dword_87F7E8, v27, (int)&v86, v23); /*0x4d3b54*/
      v28 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1); /*0x4d3b57*/
      v83 = *LayerClass::Pathfinding_Find( /*0x4d3b85*/
               &dword_87F7E8,
               (int)&v90,
               &v90,
               (__int16 *)&a4,
               *(_DWORD *)(v28 + 1660),
               TileIndex,
               v26,
               v23,
               v26,
               1,
               1,
               0,
               1,
               v71,
               (__int16 *)1,
               v73,
               0);
      v91 = (__int16)v83; /*0x4d3ba4*/
      v29 = abs32(SHIWORD(v83) - SHIWORD(a4)); /*0x4d3baa*/
      v85 = abs32((__int16)v83 - (__int16)a4); /*0x4d3bb3*/
      if ( v85 <= v29 ) /*0x4d3bb7*/
        v85 = v29; /*0x4d3bb9*/
      if ( v83 != g_FootClass_Pool ) /*0x4d3bc9*/
      {
        v87 = (SHIWORD(a4) << 8) - (SHIWORD(v83) << 8); /*0x4d3c0b*/
        v86 = ((__int16)a4 << 8) - (v91 << 8); /*0x4d3c0f*/
        __asm /*0x4d3c13*/
        {
          fild [esp+1FB0h+var_1F88]
          fild dword ptr [esp+1FB0h+var_1F8C]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+1FB0h+var_1FB0]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v74); /*0x4d3c2c*/
        LOWORD(v30) = Math::RoundToInt(v6); /*0x4d3c34*/
        if ( v30 < v89 ) /*0x4d3c3d*/
        {
          v78 = ((_BYTE)GameSpeedFromSession != 0) - 1; /*0x4d3c53*/
          v31 = *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a4) + 80) >> 8; /*0x4d3c6b*/
          LOBYTE(v31) = v31 & 1; /*0x4d3c6e*/
          v75 = v31; /*0x4d3c71*/
          v32 = *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v83) + 80) >> 8; /*0x4d3c8a*/
          LOBYTE(v32) = v32 & 1; /*0x4d3c8d*/
          v33 = Pathfinding::CalcDistance((int)unk_87E8B8, (__int16 *)&v83, (__int16 *)&a4, a1, v32, v75, v78); /*0x4d3c9c*/
          if ( v33 <= v85 + 6 ) /*0x4d3caa*/
          {
            v34 = *(_DWORD *)a1; /*0x4d3cb0*/
            v35 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v83); /*0x4d3cbf*/
            (*(void (__thiscall **)(int, void *, int))(v34 + 1152))(a1, v35, 1); /*0x4d3cc7*/
            a4 = v83; /*0x4d3cd1*/
          }
        }
      }
    }
  }
  else if ( v22 == 7 && !v19 ) /*0x4d3ce8*/
  {
    v36 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a4); /*0x4d3cfb*/
    if ( Cell::IsBridge(v36) ) /*0x4d3d02*/
    {
      v37 = dword_7E8BF0[*(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1460)]; /*0x4d3d25*/
      if ( !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 3372) /*0x4d3d5c*/
        || (v38 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a4),
            IsBuildableAdvanced = Cell::IsBuildableAdvanced((int)v38),
            LOBYTE(v85) = 1,
            !IsBuildableAdvanced) )
      {
        LOBYTE(v85) = 0; /*0x4d3d5e*/
      }
      v40 = *(_DWORD *)a1; /*0x4d3d63*/
      v41 = *(_BYTE *)(a1 + 140); /*0x4d3d66*/
      v87 = 1; /*0x4d3d7c*/
      v80 = (*(int (__thiscall **)(int, int *, _DWORD, _DWORD))(v40 + 440))(a1, &v90, 0, 0); /*0x4d3d8a*/
      v76 = (char)v88; /*0x4d3d8c*/
      v42 = (__int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 440))(a1); /*0x4d3da2*/
      v70 = MapClass::GetTileIndex(&dword_87F7E8, v42, (int)&v92, v37); /*0x4d3db6*/
      v43 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1); /*0x4d3db9*/
      v44 = LayerClass::Pathfinding_Find( /*0x4d3dd8*/
              &dword_87F7E8,
              (int)&v93,
              &v93,
              (__int16 *)&a6,
              *(_DWORD *)(v43 + 1660),
              v70,
              v41,
              v37,
              v41,
              1,
              1,
              0,
              1,
              v76,
              (__int16 *)1,
              v80,
              v81);
      v45 = *(_DWORD *)a1; /*0x4d3ddf*/
      v86 = *v44; /*0x4d3ded*/
      v46 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v86); /*0x4d3df1*/
      (*(void (__thiscall **)(int, void *, int))(v45 + 1152))(a1, v46, 1); /*0x4d3df9*/
      a4 = GameSpeedFromSession; /*0x4d3e03*/
    }
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 292))(a1, 0); /*0x4d3e11*/
  v47 = a5; /*0x4d3e17*/
  if ( !a5 ) /*0x4d3e20*/
    *(_DWORD *)(a1 + 1504) = -1; /*0x4d3e22*/
  PathWithRetry = FootClass::FindPathWithRetry((int *)a1, (__int16 *)&a4, (int)v96, 2000, 0, v47, a6); /*0x4d3e4b*/
  v49 = PathWithRetry; /*0x4d3e50*/
  GameSpeedFromSession = (int)PathWithRetry; /*0x4d3e54*/
  if ( PathWithRetry && PathWithRetry[1] ) /*0x4d3e5a*/
  {
    v50 = *(_DWORD *)a1; /*0x4d3e61*/
    qmemcpy(v95, PathWithRetry, sizeof(v95)); /*0x4d3e6f*/
    (*(void (__thiscall **)(int, _DWORD *))(v50 + 1344))(a1, v95); /*0x4d3e78*/
    v51 = 24 - v47; /*0x4d3e87*/
    if ( *(_DWORD *)(GameSpeedFromSession + 8) < 24 - v47 ) /*0x4d3e8e*/
      v51 = *(_DWORD *)(GameSpeedFromSession + 8); /*0x4d3e90*/
    qmemcpy((void *)(a1 + 4 * v47 + 1504), v96, 4 * v51); /*0x4d3e9f*/
    v49 = (_DWORD *)GameSpeedFromSession; /*0x4d3ea1*/
  }
  v79 = 1; /*0x4d3ea8*/
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 292))(a1); /*0x4d3eac*/
  *(_DWORD *)(a1 + 1600) = dword_A8ED84; /*0x4d3ec1*/
  *(_DWORD *)(a1 + 1604) = v92; /*0x4d3ec7*/
  *(_DWORD *)(a1 + 1608) = 0; /*0x4d3eca*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 44))(a1) == 1 && *(_DWORD *)(a1 + 1504) != -1 ) /*0x4d3ee5*/
  {
    v52 = *(int **)(a1 + 1736); /*0x4d3eeb*/
    v53 = 0; /*0x4d3ef1*/
    if ( v49 ) /*0x4d3ef5*/
      v53 = v49[2] - 2; /*0x4d3efa*/
    v82 = a3; /*0x4d3f06*/
    if ( v52 && !*(_BYTE *)(a1 + 1744) ) /*0x4d3f10*/
    {
      v88 = &v95[v53 + 7]; /*0x4d3f22*/
      do /*0x4d3fe1*/
      {
        v54 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v82); /*0x4d3f30*/
        v82 = *((_DWORD *)Cell::GetNeighbourContent(v54, (*v88 + 4) % 8) + 9); /*0x4d3f56*/
        v55 = v52[361]; /*0x4d3f5a*/
        if ( !v55 /*0x4d3f96*/
          || (v56 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v55 + 76))(v55, &v91, 0),
              __PAIR32__(v56[1] / 256, *v56 / 256) != v82) )
        {
          (*(void (__thiscall **)(int *, int, _DWORD))(*v52 + 488))(v52, 2, 0); /*0x4d3fa7*/
          v57 = *v52; /*0x4d3fad*/
          v58 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v82); /*0x4d3fbb*/
          (*(void (__thiscall **)(int *, void *, int))(v57 + 1152))(v52, v58, 1); /*0x4d3fc3*/
          FootClass::MovementStep((int)v52, v57, v82, 0, 0, v79); /*0x4d3fd4*/
        }
        v52 = (int *)v52[434]; /*0x4d3fd9*/
      }
      while ( v52 ); /*0x4d3fe1*/
      v49 = (_DWORD *)v83; /*0x4d3fe7*/
    }
  }
  if ( v49 ) /*0x4d3fee*/
  {
    result = (*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 440))(a1, &v89); /*0x4d3ffa*/
    *(_DWORD *)(a1 + 1368) = *(_DWORD *)result; /*0x4d4003*/
    LOBYTE(result) = 1; /*0x4d400a*/
    return result; /*0x4d4013*/
  }
  _EDX = dword_8871E0; /*0x4d4016*/
  v60 = dword_A8ED84; /*0x4d401c*/
  __asm /*0x4d4022*/
  {
    fld qword ptr [edx+1760h]
    fmul ds:dbl_7E27F8
  }
  LOWORD(v61) = Math::RoundToInt(v6); /*0x4d402e*/
  v62 = v92; /*0x4d4033*/
  v63 = *(_DWORD *)a1; /*0x4d4037*/
  *(_DWORD *)(a1 + 1600) = v60; /*0x4d403a*/
  *(_DWORD *)(a1 + 1604) = v62; /*0x4d403c*/
  *(_DWORD *)(a1 + 1608) = v61; /*0x4d4041*/
  (*(void (__thiscall **)(int))(v63 + 1280))(a1); /*0x4d4044*/
  v64 = *(_DWORD *)(a1 + 156); /*0x4d4052*/
  v65 = *(_DWORD *)(a1 + 160); /*0x4d4054*/
  v93 = *(_DWORD *)(a1 + 164); /*0x4d405a*/
  v66 = abs32((__int16)(v65 / 256) - SHIWORD(a3)); /*0x4d408c*/
  result = abs32((__int16)(v64 / 256) - (__int16)a3); /*0x4d409e*/
  if ( result <= v66 ) /*0x4d40a2*/
    result = v66; /*0x4d40a4*/
  if ( result > 1 /*0x4d40d4*/
    || !*(_BYTE *)(a1 + 140)
    && (result = (int)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a3), (*(_DWORD *)(result + 320) & 0x100) != 0) )
  {
    if ( *(_DWORD *)(a1 + 1492) ) /*0x4d40da*/
    {
      if ( !*(_DWORD *)(a1 + 1652) ) /*0x4d40e4*/
        WinAPI::Wrapper(-2147467261); /*0x4d40f3*/
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 180))(*(_DWORD *)(a1 + 1652)); /*0x4d4101*/
      TeamClass::LiberateMember_Start(*(_DWORD *)(a1 + 1492), a1, 0xFFFFFFFF, 0); /*0x4d4112*/
      if ( !*(_DWORD *)(a1 + 1652) ) /*0x4d4117*/
        WinAPI::Wrapper(-2147467261); /*0x4d4126*/
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 184))(*(_DWORD *)(a1 + 1652)); /*0x4d4134*/
    }
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a1 + 1152))(a1, 0, 1); /*0x4d4143*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 968))(a1, 0); /*0x4d4150*/
    if ( (unsigned __int8)House::IsCurrentPlayer(*(#375 **)(a1 + 540)) ) /*0x4d415c*/
    {
      result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 488))(a1, 5, 0); /*0x4d41df*/
    }
    else
    {
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 488))(a1, 11, 0); /*0x4d416e*/
      result = dword_A8B238[0]; /*0x4d4174*/
      if ( dword_A8B238[0] ) /*0x4d417b*/
      {
        result = *BuildingPlacement::FindPosition(&v89, (_DWORD *)a1); /*0x4d418e*/
        GameSpeedFromSession = result; /*0x4d4197*/
        if ( result != g_FootClass_Pool ) /*0x4d419b*/
        {
          v67 = *(_DWORD *)a1; /*0x4d41ab*/
          v68 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&GameSpeedFromSession); /*0x4d41ba*/
          result = (*(int (__thiscall **)(int, void *, int))(v67 + 1152))(a1, v68, 1); /*0x4d41c2*/
          LOBYTE(result) = 0; /*0x4d41ca*/
          return result; /*0x4d41d3*/
        }
      }
    }
  }
  LOBYTE(result) = 0; /*0x4d41e7*/
  return result; /*0x4d3993*/
}



// ==== 0x004D4200  FootClass::Destru_vt139  this=FootClass  sig=csp ====
int __thiscall FootClass::Destru_vt139(FootClass *this)
{
  char *MissionControl; // eax
  int v4; // eax

  if ( this->movementDestination ) /*0x4d4203*/
    goto LABEL_7; /*0x4d4203*/
  if ( !this->locomotor[0] ) /*0x4d420d*/
    WinAPI::Wrapper(-2147467261); /*0x4d421c*/
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 16))(this->locomotor[0]) || this->? != -1 ) /*0x4d4238*/
  {
LABEL_7:
    MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4d4251*/
    LOWORD(v4) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d425f*/
    return v4 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d427a*/
  }
  else
  {
    (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 289))(this, 0, 1); /*0x4d4242*/
    return 1; /*0x4d4248*/
  }
}



// ==== 0x004D4280  FootClass::ApproachEvaluate  this=FootClass  sig=csp ====
int __thiscall UnitClass::ApproachEvaluate(FootClass *this)
{
  double v1; // st7
  int v3; // eax
  int v4; // ebp
  void *vtable0; // edx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  _DWORD *v10; // eax
  void *v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int (__thiscall **v16)(FootClass *); // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v21; // eax
  AbstractClass *target; // eax
  #375 **v23; // edi
  int v24; // ebx
  int (__thiscall **v27)(FootClass *, int, int); // edi
  int v28; // eax
  int v29; // eax
  int v30; // ebx
  int v31; // edi
  _DWORD *v32; // eax
  int FootClass_field_5DC; // ebx
  int v34; // eax
  int v35; // eax
  _DWORD *v36; // eax
  int v37; // ebx
  int v38; // eax
  int v39; // ecx
  void (__thiscall **v40)(FootClass *, _DWORD); // eax
  __int16 *v41; // ebp
  char v42; // al
  AbstractClass *focus; // ecx
  _DWORD *v44; // eax
  CellClass *v45; // edi
  int v46; // eax
  int v47; // ebx
  int v48; // ecx
  int v49; // eax
  int v50; // edx
  void (__thiscall **v51)(FootClass *, _DWORD, int); // edx
  int (__thiscall **v52)(FootClass *, int, int); // edi
  int v53; // eax
  int v54; // ebx
  int v55; // edi
  int v56; // eax
  _DWORD *v57; // eax
  int v58; // ebx
  int v59; // eax
  int v60; // ecx
  AbstractClass *v61; // eax
  void (__thiscall **v62)(FootClass *, _DWORD, int); // eax
  int TileIndex; // [esp-4h] [ebp-D0h]
  int v64; // [esp+0h] [ebp-CCh]
  int v65; // [esp+24h] [ebp-A8h]
  int v66; // [esp+34h] [ebp-98h]
  int v67; // [esp+38h] [ebp-94h]
  int v68; // [esp+38h] [ebp-94h]
  int v69; // [esp+38h] [ebp-94h]
  __int16 v70[2]; // [esp+3Ch] [ebp-90h] BYREF
  int v71; // [esp+40h] [ebp-8Ch]
  int v72; // [esp+44h] [ebp-88h] BYREF
  int v73; // [esp+48h] [ebp-84h] BYREF
  int v74; // [esp+4Ch] [ebp-80h] BYREF
  __int16 v75; // [esp+50h] [ebp-7Ch] BYREF
  int v76; // [esp+54h] [ebp-78h] BYREF
  int v77; // [esp+58h] [ebp-74h] BYREF
  _DWORD v78[3]; // [esp+5Ch] [ebp-70h] BYREF
  int v79; // [esp+68h] [ebp-64h] BYREF
  _BYTE v80[12]; // [esp+6Ch] [ebp-60h] BYREF
  _BYTE v81[4]; // [esp+78h] [ebp-54h] BYREF
  _BYTE v82[20]; // [esp+7Ch] [ebp-50h] BYREF
  _BYTE v83[12]; // [esp+90h] [ebp-3Ch] BYREF
  _BYTE v84[12]; // [esp+9Ch] [ebp-30h] BYREF
  _BYTE v85[12]; // [esp+A8h] [ebp-24h] BYREF
  _BYTE v86[12]; // [esp+B4h] [ebp-18h] BYREF
  _BYTE v87[12]; // [esp+C0h] [ebp-Ch] BYREF

  v3 = (*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 199))(this, 2); /*0x4d4290*/
  this->? = 1; /*0x4d429d*/
  v4 = v3 / 256 + 6; /*0x4d42b1*/
  switch ( this->? )
  {
    case 0:
      v78[0] = this->?[0]; /*0x4d42f7*/
      vtable0 = this->TechnoClass; /*0x4d42fb*/
      v78[1] = this->?[1]; /*0x4d4300*/
      v78[2] = this->?[2]; /*0x4d430c*/
      v7 = (*((int (__thiscall **)(FootClass *, int, _DWORD *, _DWORD))vtable0 + 241))(this, 2, v78, 0); /*0x4d4314*/
      v71 = v7; /*0x4d431c*/
      if ( v7 )
        v8 = (*(_BYTE *)(v7 + 20) & 2) != 0 ? v7 : 0;
      else
        v8 = 0; /*0x4d4322*/
      v9 = (*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 185))(this, v8); /*0x4d4339*/
      if ( v8 ) /*0x4d4341*/
      {
        if ( (*((unsigned __int8 (__thiscall **)(FootClass *, int, int))this->TechnoClass + 234))(this, v8, v9) ) /*0x4d434d*/
          goto LABEL_10; /*0x4d434d*/
        v10 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 76))(v8); /*0x4d4365*/
        LOWORD(v66) = *v10 / 256; /*0x4d4379*/
        HIWORD(v66) = v10[1] / 256; /*0x4d4392*/
        v11 = this->TechnoClass; /*0x4d439b*/
        v73 = v66; /*0x4d439f*/
        v12 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *, _DWORD))v11 + 19))(this, v82, 0); /*0x4d43a3*/
        LOWORD(v66) = *v12 / 256; /*0x4d43b9*/
        HIWORD(v66) = v12[1] / 256; /*0x4d43cf*/
        v74 = v66; /*0x4d43d8*/
        v13 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v8 + 188))(v8, 0, -1); /*0x4d43de*/
        v14 = (*((int (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 47))(this, 0, v13); /*0x4d43ea*/
        if ( Pathfinding::CalcDistance( /*0x4d4408*/
               (int)&stru_87E790.__pad_D8[80],
               (__int16 *)&v76,
               &v75,
               (int)this,
               v14,
               (int)v84,
               0) < v4 )
        {
LABEL_10:
          v15 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 113))(this); /*0x4d4412*/
          this->FootClass_field_5DC = v15; /*0x4d4418*/
          if ( (*(_DWORD *)(v15 + 320) & 0x100) != 0 /*0x4d4432*/
            && !(*((unsigned __int8 (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 47))(this, 0) )
          {
            v16 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4d4454*/
            v72 = 0; /*0x4d4459*/
            v64 = *(_DWORD *)(v16[33](this) + 1460); /*0x4d4471*/
            v17 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this); /*0x4d4475*/
            TileIndex = MapClass::GetTileIndex( /*0x4d4498*/
                          (MapClass *)&stru_87F5F0.__pad_58[416],
                          (__int16 *)(this->FootClass_field_5DC + 36),
                          *(_DWORD *)(v17 + 1460),
                          0);
            v18 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this); /*0x4d449b*/
            *(_DWORD *)v70 = *LayerClass::Pathfinding_Find( /*0x4d44ca*/
                                &stru_87F5F0.__pad_58[416],
                                (int)&v79,
                                &v79,
                                (__int16 *)(this->FootClass_field_5DC + 36),
                                *(_DWORD *)(v18 + 1660),
                                TileIndex,
                                v64,
                                0,
                                1,
                                1,
                                0,
                                1,
                                0,
                                0,
                                (__int16 *)&v72,
                                0,
                                0);
            if ( *(_DWORD *)v70 == g_FootClass_Pool ) /*0x4d44ce*/
            {
              this->FootClass_field_5DC = 0; /*0x4d4512*/
              return 60; /*0x4d4527*/
            }
            this->FootClass_field_5DC = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v70); /*0x4d44ed*/
          }
          if ( !this->? ) /*0x4d44f3*/
          {
            v19 = *(_DWORD *)&this->__pad_58C[12]; /*0x4d44fb*/
            if ( v19 <= 0 ) /*0x4d4503*/
            {
              if ( this->movementDestination ) /*0x4d4528*/
                TechnoClass::SetFocus((TechnoClass *)this, (int)this->movementDestination); /*0x4d4533*/
              else
                TechnoClass::SetFocus((TechnoClass *)this, this->FootClass_field_5DC); /*0x4d453e*/
            }
            else
            {
              TechnoClass::SetFocus((TechnoClass *)this, *(_DWORD *)(*(_DWORD *)this->__pad_58C + 4 * v19 - 4)); /*0x4d4510*/
            }
          }
          (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x4d454a*/
          (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 242))(this, v71); /*0x4d4559*/
          goto LABEL_22; /*0x4d4559*/
        }
      }
      if ( !this->movementDestination ) /*0x4d45a2*/
        goto LABEL_28; /*0x4d45a2*/
      if ( !this->locomotor[0] ) /*0x4d45aa*/
        WinAPI::Wrapper(-2147467261); /*0x4d45b7*/
      if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 16))(this->locomotor[0]) ) /*0x4d45c5*/
      {
LABEL_28:
        (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 289))(this, 0, 1); /*0x4d45d3*/
        goto LABEL_70; /*0x4d45d3*/
      }
LABEL_23:
      _EAX = MissionClass::GetMissionControl((MissionClass *)this); /*0x4d4569*/
      __asm /*0x4d4570*/
      {
        fld qword ptr [eax+10h]
        fmul ds:dbl_7E27F8
      }
      LOWORD(v21) = Math::RoundToInt(v1); /*0x4d4579*/
      return v21 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d45a1*/
    case 1:
      target = this->?; /*0x4d45d8*/
      if ( target )
        v23 = (target->abstractFlags & 2) != 0 ? (#375 **)target : 0;
      else
        v23 = 0; /*0x4d45e2*/
      v24 = (*((int (__thiscall **)(FootClass *, #375 **))this->TechnoClass + 185))(this, v23); /*0x4d45ff*/
      if ( !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 204))(this) ) /*0x4d460d*/
        goto LABEL_41; /*0x4d460d*/
      if ( !v23 ) /*0x4d4615*/
        goto LABEL_38; /*0x4d4615*/
      if ( (*((int (__thiscall **)(#375 **))*v23 + 11))(v23) != 6 ) /*0x4d4621*/
        goto LABEL_41; /*0x4d4621*/
      if ( !(unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->?, v23[135]) ) /*0x4d4630*/
        goto LABEL_41; /*0x4d4630*/
      BuildingClass::GetHealthRatio((BuildingClass *)v23); /*0x4d463b*/
      _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4d4640*/
      __asm /*0x4d4646*/
      {
        fcomp qword ptr [ecx+1708h]
        fnstsw ax
      }
      if ( (_AX & 0x4100) == 0 ) /*0x4d4651*/
      {
        (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x4d4659*/
      }
      else
      {
LABEL_41:
        if ( v23 ) /*0x4d46a3*/
        {
          if ( (*((unsigned __int8 (__thiscall **)(FootClass *, #375 **, int))this->TechnoClass + 234))(this, v23, v24) ) /*0x4d46ab*/
            goto LABEL_44; /*0x4d46ab*/
          v32 = (_DWORD *)(*((int (__thiscall **)(#375 **, _BYTE *))*v23 + 19))(v23, v86); /*0x4d46c3*/
          FootClass_field_5DC = this->FootClass_field_5DC; /*0x4d46c8*/
          LOWORD(v67) = *v32 / 256; /*0x4d46e0*/
          HIWORD(v67) = v32[1] / 256; /*0x4d46f4*/
          v72 = v67; /*0x4d46fd*/
          v65 = (*((int (__thiscall **)(#375 **, _DWORD, int))*v23 + 47))(v23, 0, -1); /*0x4d470b*/
          v34 = *(_DWORD *)(FootClass_field_5DC + 320) >> 8; /*0x4d4712*/
          LOBYTE(v34) = v34 & 1; /*0x4d4715*/
          if ( Pathfinding::CalcDistance( /*0x4d472e*/
                 (int)&stru_87E790.__pad_D8[80],
                 (__int16 *)(FootClass_field_5DC + 36),
                 (__int16 *)&v73,
                 (int)this,
                 v34,
                 v65,
                 0) < v4 )
          {
LABEL_44:
            (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 335))(this, 0); /*0x4d473a*/
            if ( this->? ) /*0x4d4740*/
              goto LABEL_23; /*0x4d4748*/
            (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, this->?, 1); /*0x4d475b*/
            TechnoClass::SetFocus((TechnoClass *)this, 0); /*0x4d4766*/
            this->FootClass_field_5DC = 0; /*0x4d476b*/
            this->? = 0; /*0x4d4771*/
            return 45; /*0x4d4786*/
          }
        }
      }
LABEL_38:
      if ( !this->? )
      {
        v27 = (int (__thiscall **)(FootClass *, int, int))this->TechnoClass; /*0x4d4673*/
        v28 = (*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)this->FootClass_field_5DC + 72))( /*0x4d467e*/
                this->FootClass_field_5DC,
                v80,
                0);
        v29 = v27[241](this, 2, v28); /*0x4d4686*/
        v30 = v29; /*0x4d468c*/
        v71 = v29; /*0x4d4690*/
        v31 = v29 ? ((*(_BYTE *)(v29 + 20) & 2) != 0 ? v29 : 0) : 0;
        v35 = (*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 185))(this, v31); /*0x4d479a*/
        if ( v31 ) /*0x4d47a2*/
        {
          if ( (*((unsigned __int8 (__thiscall **)(FootClass *, int, int))this->TechnoClass + 234))(this, v31, v35) ) /*0x4d47ae*/
          {
LABEL_51:
            (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 242))(this, v30); /*0x4d4835*/
            (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x4d4848*/
            return 1; /*0x4d485d*/
          }
          v36 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v31 + 76))(v31, v81); /*0x4d47c3*/
          v37 = this->FootClass_field_5DC; /*0x4d47c8*/
          LOWORD(v68) = *v36 / 256; /*0x4d47e0*/
          HIWORD(v68) = v36[1] / 256; /*0x4d47f6*/
          v73 = v68; /*0x4d47ff*/
          v38 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v31 + 188))(v31, 0, -1); /*0x4d4805*/
          v39 = *(_DWORD *)(v37 + 320) >> 8; /*0x4d4812*/
          LOBYTE(v39) = v39 & 1; /*0x4d4815*/
          if ( Pathfinding::CalcDistance( /*0x4d482f*/
                 (int)&stru_87E790.__pad_D8[80],
                 (__int16 *)(v37 + 36),
                 (__int16 *)&v74,
                 (int)this,
                 v39,
                 v38,
                 0) < v4 )
          {
            v30 = v71; /*0x4d4831*/
            goto LABEL_51; /*0x4d4831*/
          }
        }
      }
      v40 = (void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass; /*0x4d485e*/
      this->? = 2; /*0x4d4864*/
      v40[242](this, 0); /*0x4d486e*/
      if ( this->? ) /*0x4d4874*/
      {
        v41 = (__int16 *)(*((int (__thiscall **)(FootClass *))this->TechnoClass + 113))(this); /*0x4d488c*/
        v42 = (*((int (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 47))(this, 0); /*0x4d4894*/
        focus = this->?; /*0x4d489a*/
        LOBYTE(v71) = v42; /*0x4d48a0*/
        v44 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))focus->vtable0 + 18))(focus, v83); /*0x4d48ab*/
        v45 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v44); /*0x4d48b9*/
        v46 = this->FootClass_field_5DC; /*0x4d48bb*/
        v47 = v71; /*0x4d48c1*/
        v48 = *(_DWORD *)(v46 + 320) >> 8; /*0x4d48d0*/
        LOBYTE(v48) = v48 & 1; /*0x4d48d3*/
        v41 += 18; /*0x4d48d6*/
        v49 = Pathfinding::CalcDistance( /*0x4d48e3*/
                (int)&stru_87E790.__pad_D8[80],
                v41,
                (__int16 *)(v46 + 36),
                (int)this,
                v71,
                v48,
                -1);
        v50 = (unsigned int)v45->flags[0] >> 8; /*0x4d48f0*/
        LOBYTE(v50) = v50 & 1; /*0x4d48f3*/
        v71 = v49; /*0x4d4903*/
        if ( v49 >= Pathfinding::CalcDistance( /*0x4d4910*/
                      (int)&stru_87E790.__pad_D8[80],
                      v41,
                      (__int16 *)&v45->smudgeTypeIndex,
                      (int)this,
                      v47,
                      v50,
                      -1) )
          (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, this->?, 1); /*0x4d4942*/
        else
          (*((void (__thiscall **)(FootClass *, int, int))this->TechnoClass + 288))(this, this->FootClass_field_5DC, 1); /*0x4d491f*/
        return 1; /*0x4d4928*/
      }
      else
      {
        v51 = (void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass; /*0x4d4958*/
        this->? = 0; /*0x4d4960*/
        v51[289](this, 0, 1); /*0x4d496a*/
        this->? = 3; /*0x4d4970*/
        return 1; /*0x4d497d*/
      }
    case 2:
      v52 = (int (__thiscall **)(FootClass *, int, int))this->TechnoClass; /*0x4d4990*/
      v53 = (*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)this->FootClass_field_5DC + 72))( /*0x4d499b*/
              this->FootClass_field_5DC,
              v85,
              0);
      v54 = v52[241](this, 2, v53); /*0x4d49a9*/
      v71 = v54; /*0x4d49ad*/
      if ( v54 )
        v55 = (*(_BYTE *)(v54 + 20) & 2) != 0 ? v54 : 0;
      else
        v55 = 0; /*0x4d49b3*/
      v56 = (*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 185))(this, v55); /*0x4d49c9*/
      if ( !v55 ) /*0x4d49d1*/
        goto LABEL_66; /*0x4d49d1*/
      if ( (*((unsigned __int8 (__thiscall **)(FootClass *, int, int))this->TechnoClass + 234))(this, v55, v56) ) /*0x4d49dd*/
        goto LABEL_65; /*0x4d49e5*/
      v57 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v55 + 76))(v55, v87); /*0x4d49f9*/
      v58 = this->FootClass_field_5DC; /*0x4d49fe*/
      LOWORD(v69) = *v57 / 256; /*0x4d4a16*/
      HIWORD(v69) = v57[1] / 256; /*0x4d4a2c*/
      v76 = v69; /*0x4d4a35*/
      v59 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v55 + 188))(v55, 0, -1); /*0x4d4a3b*/
      v60 = *(_DWORD *)(v58 + 320) >> 8; /*0x4d4a48*/
      LOBYTE(v60) = v60 & 1; /*0x4d4a4b*/
      if ( Pathfinding::CalcDistance( /*0x4d4a65*/
             (int)&stru_87E790.__pad_D8[80],
             (__int16 *)(v58 + 36),
             (__int16 *)&v77,
             (int)this,
             v60,
             v59,
             0) < v4 )
      {
        v54 = v71; /*0x4d4a67*/
LABEL_65:
        (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 242))(this, v54); /*0x4d4a6b*/
        (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x4d4a7e*/
LABEL_22:
        this->? = 1; /*0x4d455f*/
        goto LABEL_23; /*0x4d455f*/
      }
LABEL_66:
      if ( this->movementDestination ) /*0x4d4a89*/
        goto LABEL_23; /*0x4d4a91*/
      (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x4d4a9e*/
      v61 = this->?; /*0x4d4aa4*/
      if ( v61 ) /*0x4d4aac*/
      {
        (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, v61, 1); /*0x4d4ab5*/
        TechnoClass::SetFocus((TechnoClass *)this, 0); /*0x4d4abe*/
        this->? = 0; /*0x4d4ac3*/
        this->FootClass_field_5DC = 0; /*0x4d4ac9*/
        goto LABEL_23; /*0x4d4acf*/
      }
      v62 = (void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass; /*0x4d4ad4*/
      this->? = 0; /*0x4d4ad8*/
      v62[289](this, 0, 1); /*0x4d4ae1*/
LABEL_70:
      this->? = 3; /*0x4d4ae7*/
      return 1; /*0x4d4af4*/
    case 3:
      if ( !this->movementDestination ) /*0x4d42cc*/
        goto LABEL_23; /*0x4d42cc*/
      this->? = 0; /*0x4d42d2*/
      return 1; /*0x4d42eb*/
    default:
      goto LABEL_23;
  }
}



// ==== 0x004D4B20  FootClass::CheckVoiceResponse  this=FootClass  sig=csp ====
int __fastcall FootClass::CheckVoiceResponse(FootClass *this)
{
  int *v2; // edi
  AbstractClass *target; // ecx
  _BYTE *v4; // edi
  _DWORD *v5; // eax
  CellClass *v6; // eax
  char *MissionControl; // eax
  int v8; // eax
  char v10[12]; // [esp+10h] [ebp-Ch] BYREF

  if ( this )
    v2 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15 ? (int *)this : 0;
  else
    v2 = 0; /*0x4d4b2b*/
  target = this->?; /*0x4d4b43*/
  if ( target && (*((int (__thiscall **)(AbstractClass *))target->vtable0 + 11))(target) == 6 ) /*0x4d4b55*/
  {
    if ( this->movementDestination ) /*0x4d4b57*/
      goto LABEL_18; /*0x4d4b5f*/
    if ( v2 ) /*0x4d4b67*/
    {
      if ( *(_BYTE *)(v2[432] + 3778) /*0x4d4baa*/
        || (unsigned __int8)TechnoTypeClass::HasVoiceResponse(v2, 14)
        || (v4 = (_BYTE *)v2[432], v4[3779])
        || v4[3764]
        || v4[3765]
        || v4[3774] )
      {
        (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, this->?, 1); /*0x4d4bc1*/
      }
    }
  }
  if ( !this->movementDestination ) /*0x4d4bc7*/
  {
    (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 289))(this, 0, 1); /*0x4d4bd9*/
    v5 = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *))this->TechnoClass + 18))(this, v10); /*0x4d4be8*/
    v6 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v5); /*0x4d4bf1*/
    if ( Cell::IsBridge((Cell *)v6) ) /*0x4d4bf8*/
      (*((void (__thiscall **)(FootClass *, int *, int, _DWORD))this->TechnoClass + 93))(this, &dword_8B3DA8, 1, 0); /*0x4d4c0e*/
  }
LABEL_18:
  if ( !this->? /*0x4d4c3f*/
    && !(unsigned __int8)House::IsCurrentPlayer((House *)this->?)
    && ((*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) != 15
     || !*(_BYTE *)(this->q1B0 + 3764)) )
  {
    (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x4d4c4f*/
    (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x4d4c5d*/
    (*((void (__thiscall **)(FootClass *, int, _DWORD))this->TechnoClass + 122))(this, 15, 0); /*0x4d4c6b*/
  }
  MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4d4c73*/
  LOWORD(v8) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d4c81*/
  return v8 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d4c9e*/
}



// ==== 0x004D4CB0  FootClass::ProcessMissionVoice  this=FootClass  sig=csp ====
int __fastcall FootClass::ProcessMissionVoice(FootClass *this)
{
  int *v2; // edi
  AbstractClass *target; // ecx
  _DWORD *v4; // eax
  CellClass *v5; // eax
  char *MissionControl; // eax
  int v7; // eax
  char v9[12]; // [esp+10h] [ebp-Ch] BYREF

  if ( this )
    v2 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15 ? (int *)this : 0;
  else
    v2 = 0; /*0x4d4cbb*/
  target = this->?; /*0x4d4cd3*/
  if ( target && (*((int (__thiscall **)(AbstractClass *))target->vtable0 + 11))(target) == 6 ) /*0x4d4ce5*/
  {
    if ( this->movementDestination ) /*0x4d4ce7*/
      goto LABEL_15; /*0x4d4cef*/
    if ( v2 /*0x4d4d1c*/
      && (*(_BYTE *)(v2[432] + 3778)
       || (unsigned __int8)TechnoTypeClass::HasVoiceResponse(v2, 14)
       || *(_BYTE *)(v2[432] + 3779)) )
    {
      (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, this->?, 1); /*0x4d4d33*/
    }
  }
  if ( !this->movementDestination ) /*0x4d4d39*/
  {
    (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 289))(this, 0, 1); /*0x4d4d4b*/
    v4 = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *))this->TechnoClass + 18))(this, v9); /*0x4d4d5a*/
    v5 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v4); /*0x4d4d63*/
    if ( Cell::IsBridge((Cell *)v5) ) /*0x4d4d6a*/
      (*((void (__thiscall **)(FootClass *, int *, int, _DWORD))this->TechnoClass + 93))(this, &dword_8B3DA8, 1, 0); /*0x4d4d80*/
  }
LABEL_15:
  MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4d4d86*/
  LOWORD(v7) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d4d96*/
  return v7 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d4db3*/
}



// ==== 0x004D4DC0  FootClass::ScanTarget  this=FootClass  sig=csp ====
int __fastcall InfantryClass::ScanTarget(FootClass *this)
{
  void (__thiscall **vtable0)(FootClass *, void *, int); // edi
  __int16 *PlacementCellsAlt; // eax
  void *v4; // eax
  int (__thiscall **v5)(FootClass *, int, int *, _DWORD); // edx
  int v6; // eax
  double v7; // st7
  int v8; // eax
  int v9; // ebp
  int *v10; // eax
  int v11; // edi
  int v12; // ebx
  int *v13; // eax
  int v14; // ecx
  int v15; // eax
  int result; // eax
  int v17; // [esp+48h] [ebp-24h] BYREF
  int v18; // [esp+4Ch] [ebp-20h]
  int v19; // [esp+50h] [ebp-1Ch]
  _BYTE v20[12]; // [esp+54h] [ebp-18h] BYREF
  _BYTE v21[12]; // [esp+60h] [ebp-Ch] BYREF

  if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 912) /*0x4d4dde*/
    && !(*((int (__thiscall **)(FootClass *))this->TechnoClass + 114))(this) )
  {
    vtable0 = (void (__thiscall **)(FootClass *, void *, int))this->TechnoClass; /*0x4d4de8*/
    PlacementCellsAlt = (__int16 *)MapClass::FindPlacementCellsAlt((char *)this, &v17, (int)this); /*0x4d4df4*/
    v4 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], PlacementCellsAlt); /*0x4d4dff*/
    vtable0[288](this, v4, 1); /*0x4d4e07*/
  }
  if ( this->FootClass_field_bool_68E ) /*0x4d4e0d*/
  {
    v17 = this->?[0]; /*0x4d4e21*/
    v5 = (int (__thiscall **)(FootClass *, int, int *, _DWORD))this->TechnoClass; /*0x4d4e25*/
    v18 = this->?[1]; /*0x4d4e2a*/
    v19 = this->?[2]; /*0x4d4e36*/
    v6 = v5[241](this, 1, &v17, 0); /*0x4d4e3e*/
    if ( v6 ) /*0x4d4e46*/
    {
      (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 242))(this, v6); /*0x4d4e4d*/
      this->FootClass_field_bool_68E = 0; /*0x4d4e53*/
    }
  }
  if ( this->? ) /*0x4d4e5a*/
    (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 335))(this, 0); /*0x4d4e6a*/
  else
    (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 289))(this, 0, 1); /*0x4d4e7a*/
  v7 = *((double *)MissionClass::GetMissionControl((MissionClass *)this) + 2) * 900.0; /*0x4d4e8a*/
  LOWORD(v8) = Math::RoundToInt(v7); /*0x4d4e90*/
  v9 = v8 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d4eb3*/
  if ( !this->?
    || (!this
     || (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) != 15
     || !*((_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15
                   ? this + 1
                   : (FootClass *)1728)->TechnoClass
         + 1685))
    && (!*(_DWORD *)(*((int (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 254))(this, 0)
     || *(int *)(*(_DWORD *)(*((int (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 254))(this, 0) + 180) > 512) )
  {
    return v9; /*0x4d4f1c*/
  }
  v10 = (int *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))this->?->TechnoClass::vtable0 + 18))(this->?, v20); /*0x4d4f30*/
  v11 = *v10; /*0x4d4f33*/
  v12 = v10[1]; /*0x4d4f35*/
  v13 = (int *)(*((int (__thiscall **)(FootClass *, _BYTE *))this->TechnoClass + 18))(this, v21); /*0x4d4f41*/
  v14 = *v13; /*0x4d4f44*/
  v18 = v13[1] - v12; /*0x4d4f4d*/
  v17 = v14 - v11; /*0x4d4f51*/
  Math::Sqrt((double)(v14 - v11) * (double)(v14 - v11) + (double)v18 * (double)v18); /*0x4d4f71*/
  LOWORD(v15) = Math::RoundToInt(v7); /*0x4d4f79*/
  v17 = v15; /*0x4d4f83*/
  if ( v15 > 768 ) /*0x4d4f88*/
    return v9; /*0x4d4fa9*/
  result = v9; /*0x4d4f99*/
  if ( (double)v17 >= 281.6 ) /*0x4d4f9b*/
    return v9 / 2; /*0x4d4fa3*/
  return result; /*0x4d4fa0*/
}



// ==== 0x004D4FC0  ObjectClass::method_4D4FC0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_4D4FC0(ObjectClass *this)
{
  int v2; // ebx
  _WORD *v3; // eax
  Cell *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // ebp
  int v9; // [esp+10h] [ebp-Ch]
  __int16 v10[2]; // [esp+14h] [ebp-8h] BYREF
  char v11[4]; // [esp+18h] [ebp-4h] BYREF

  v2 = 0; /*0x4d4fc9*/
  while ( 1 ) /*0x4d4fd4*/
  {
    v3 = (_WORD *)(*((int (__thiscall **)(ObjectClass *, char *))this->AbstractClass + 110))(this, v11); /*0x4d4fd4*/
    LOWORD(v9) = LOWORD(g_DDrawSurfaceManager.scenario[(v2 & 7) + 82]) + *v3; /*0x4d4ff8*/
    HIWORD(v9) = v3[1] + HIWORD(g_DDrawSurfaceManager.scenario[(v2 & 7) + 82]); /*0x4d4ffe*/
    *(_DWORD *)v10 = v9; /*0x4d500c*/
    v4 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v10); /*0x4d5010*/
    v5 = Cell::IsBridge(v4); /*0x4d5017*/
    v6 = v5; /*0x4d501c*/
    if ( v5 ) /*0x4d5020*/
    {
      if ( *(_BYTE *)(v5[328] + 5493) ) /*0x4d5028*/
      {
        v7 = (*(int (__thiscall **)(_DWORD *))(*v5 + 60))(v5); /*0x4d5039*/
        if ( v7 == (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 15))(this) ) /*0x4d5044*/
          break; /*0x4d5044*/
      }
    }
    if ( ++v2 >= 8 ) /*0x4d504a*/
      return 0; /*0x4d5059*/
  }
  return v6; /*0x4d5050*/
}



// ==== 0x004D5070  FootClass::FindMovePosition  this=FootClass  sig=csp ====
int __thiscall FootClass::FindMovePosition(FootClass *this)
{
  char *MissionControl; // eax
  int result; // eax
  int (__thiscall **vtable0)(FootClass *); // edx
  int v5; // ebx
  _WORD *v6; // eax
  int v7; // edx
  Cell *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // edi
  int v11; // ebp
  void (__thiscall **v12)(FootClass *, int, _DWORD); // eax
  void (__thiscall **v13)(FootClass *, void *, int); // edi
  __int16 *PlacementCellsAlt; // eax
  void *v15; // eax
  char *v16; // eax
  int v17; // eax
  int v18; // ebp
  AbstractClass *target; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // edi
  int v23; // esi
  int v24; // [esp+Ch] [ebp-Ch]
  __int16 v25[2]; // [esp+10h] [ebp-8h] BYREF
  int v26; // [esp+14h] [ebp-4h] BYREF

  if ( this->shouldEnterAbsorber ) /*0x4d5076*/
  {
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 208))(this); /*0x4d5082*/
LABEL_7:
    MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4d50b4*/
    LOWORD(result) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d50c4*/
    return result; /*0x4d50cd*/
  }
  if ( this->shouldEnterOccupiable ) /*0x4d508a*/
  {
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 210))(this); /*0x4d5098*/
    goto LABEL_7; /*0x4d509e*/
  }
  if ( this->shouldGarrisonStructure ) /*0x4d50a0*/
  {
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 211))(this); /*0x4d50ae*/
    goto LABEL_7; /*0x4d50ae*/
  }
  vtable0 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4d50d4*/
  if ( this->? ) /*0x4d50ce*/
  {
    if ( *(_BYTE *)(vtable0[33](this) + 912) && !(*((int (__thiscall **)(FootClass *))this->TechnoClass + 114))(this) ) /*0x4d51f6*/
    {
      v13 = (void (__thiscall **)(FootClass *, void *, int))this->TechnoClass; /*0x4d5200*/
      PlacementCellsAlt = (__int16 *)MapClass::FindPlacementCellsAlt((char *)this, &v26, (int)this); /*0x4d520c*/
      v15 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], PlacementCellsAlt); /*0x4d5217*/
      v13[288](this, v15, 1); /*0x4d521f*/
    }
  }
  else if ( *(_DWORD *)((int (__thiscall *)(FootClass *, int))vtable0[254])(this, 1) /*0x4d5108*/
         && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 254))(
                                                this,
                                                1)
                                 + 172)
                     + 344) )
  {
    v5 = 0; /*0x4d5116*/
    while ( 1 ) /*0x4d5121*/
    {
      v6 = (_WORD *)(*((int (__thiscall **)(FootClass *, int *))this->TechnoClass + 110))(this, &v26); /*0x4d5121*/
      v7 = v5 & 7; /*0x4d5129*/
      LOWORD(v24) = *v6 + LOWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x4d514a*/
      HIWORD(v24) = v6[1] + HIWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x4d514f*/
      *(_DWORD *)v25 = v24; /*0x4d515e*/
      v8 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x4d5162*/
      v9 = Cell::IsBridge(v8); /*0x4d5169*/
      v10 = v9; /*0x4d516e*/
      if ( v9 ) /*0x4d5172*/
      {
        if ( *(_BYTE *)(v9[328] + 5493) ) /*0x4d517a*/
        {
          v11 = (*(int (__thiscall **)(_DWORD *))(*v9 + 60))(v9); /*0x4d518b*/
          if ( v11 == (*((int (__thiscall **)(FootClass *))this->TechnoClass + 15))(this) ) /*0x4d5196*/
            break; /*0x4d5196*/
        }
      }
      if ( ++v5 >= 8 ) /*0x4d519c*/
        goto LABEL_16; /*0x4d519c*/
    }
    if ( !v10 ) /*0x4d51b0*/
    {
LABEL_16:
      (*((void (__thiscall **)(FootClass *))this->TechnoClass + 286))(this); /*0x4d51a2*/
      goto LABEL_23; /*0x4d51ac*/
    }
    (*((void (__thiscall **)(FootClass *, _DWORD *))this->TechnoClass + 242))(this, v10); /*0x4d51b7*/
    v12 = (void (__thiscall **)(FootClass *, int, _DWORD))this->TechnoClass; /*0x4d51bd*/
    this->FootClass_field_bool_68E = 1; /*0x4d51c5*/
    v12[122](this, 1, 0); /*0x4d51cc*/
  }
  else
  {
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 286))(this); /*0x4d51d8*/
  }
LABEL_23:
  v16 = MissionClass::GetMissionControl((MissionClass *)this); /*0x4d5225*/
  LOWORD(v17) = Math::RoundToInt(*((double *)v16 + 2) * 900.0); /*0x4d5235*/
  v18 = v17; /*0x4d523c*/
  if ( this /*0x4d5285*/
    && (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15
    && !(unsigned __int8)House::IsCurrentPlayer((House *)this->?)
    && (*(_BYTE *)(this->q1B0 + 3778) || (unsigned __int8)TechnoTypeClass::HasVoiceResponse(
                                                                         (int *)this,
                                                                         14))
    && (*((int (__thiscall **)(FootClass *))this->TechnoClass + 97))(this) != 17 )
  {
    target = this->?; /*0x4d5287*/
    if ( target ) /*0x4d528f*/
    {
      if ( (*((int (__thiscall **)(AbstractClass *))target->vtable0 + 11))(target) == 6 ) /*0x4d5299*/
        (*((void (__thiscall **)(FootClass *, int, _DWORD))this->TechnoClass + 122))(this, 17, 0); /*0x4d52a3*/
    }
  }
  v20 = this->?[0]; /*0x4d52a9*/
  v21 = this->?[2]; /*0x4d52af*/
  v22 = 0; /*0x4d52bb*/
  if ( v20 != -1 ) /*0x4d52c0*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v20 >= v21 ) /*0x4d52c8*/
    {
LABEL_40:
      if ( !*(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1712) || this->?[4] <= 0 ) /*0x4d531d*/
        return v18 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d5336*/
      return v22; /*0x4d5336*/
    }
    v21 -= *(_DWORD *)&stru_A8EB00.?[416] - v20; /*0x4d52ca*/
  }
  if ( !v21 ) /*0x4d52ce*/
    goto LABEL_40; /*0x4d52ce*/
  v22 = this->?[2]; /*0x4d52d0*/
  v23 = this->?[0]; /*0x4d52d6*/
  if ( v23 == -1 ) /*0x4d52df*/
    return v22; /*0x4d5338*/
  if ( *(_DWORD *)&stru_A8EB00.?[416] - v23 >= v22 ) /*0x4d52e7*/
    return 0; /*0x4d52f7*/
  else
    return v22 - (*(_DWORD *)&stru_A8EB00.?[416] - v23); /*0x4d52eb*/
}



// ==== 0x004D5350  FootClass::ProcessDeploy  this=FootClass  sig=csp ====
int __fastcall InfantryClass::ProcessDeploy(FootClass *this)
{
  void *v2; // edx
  int v3; // eax
  int *v4; // edi
  _BYTE *v5; // eax
  AbstractClass *target; // ecx
  FactoryClass *slaveManager; // ecx
  void (__thiscall **vtable0)(FootClass *, void *, int); // edi
  void *v9; // eax
  char *MissionControl; // eax
  int v11; // eax
  __int16 v13[2]; // [esp+8h] [ebp-14h] BYREF
  int v14; // [esp+Ch] [ebp-10h] BYREF
  _DWORD v15[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1748) /*0x4d5392*/
    || (v15[0] = this->?[0],
        v2 = this->TechnoClass,
        v15[1] = this->?[1],
        v15[2] = this->?[2],
        !(*((unsigned __int8 (__thiscall **)(FootClass *, _DWORD *, _DWORD))v2 + 231))(this, v15, 0)) )
  {
    if ( (unsigned __int8)House::IsCurrentPlayer((House *)this->?) || *(_DWORD *)&dword_A8B238 ) /*0x4d5504*/
    {
      (*((void (__thiscall **)(FootClass *))this->TechnoClass + 286))(this); /*0x4d557c*/
    }
    else
    {
      *(_DWORD *)v13 = g_FootClass_Pool; /*0x4d5510*/
      *(_DWORD *)v13 = *HouseClass::GetCurrentOption((HouseClass *)dword_A83D4C, &v14); /*0x4d5529*/
      if ( *(_DWORD *)v13 != g_FootClass_Pool ) /*0x4d552d*/
      {
        slaveManager = (FactoryClass *)this->?; /*0x4d553d*/
        if ( slaveManager ) /*0x4d5545*/
          FactoryClass::ResetProductionTimers(slaveManager); /*0x4d5547*/
        vtable0 = (void (__thiscall **)(FootClass *, void *, int))this->TechnoClass; /*0x4d554c*/
        v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13); /*0x4d555a*/
        vtable0[288](this, v9, 1); /*0x4d5562*/
        (*((void (__thiscall **)(FootClass *, int, int))this->TechnoClass + 122))(this, 2, 1); /*0x4d5570*/
      }
    }
    goto LABEL_25; /*0x4d5576*/
  }
  v3 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this); /*0x4d53a4*/
  v4 = v3 == 15 ? (int *)this : 0;
  if ( !v4 ) /*0x4d53b4*/
  {
    (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 335))(this, 0); /*0x4d54e3*/
    goto LABEL_25; /*0x4d54e9*/
  }
  v5 = (v3 == 15 ? this + 1 : (FootClass *)1728)->TechnoClass;
  if ( v5[3779] && !v5[3778] && !(unsigned __int8)TechnoTypeClass::HasVoiceResponse(v4, 14) ) /*0x4d53df*/
  {
LABEL_14:
    (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, this->?, 1); /*0x4d547c*/
    (*((void (__thiscall **)(FootClass *, int, _DWORD))this->TechnoClass + 122))(this, 8, 0); /*0x4d5497*/
    if ( !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 128))(this) ) /*0x4d54a9*/
      goto LABEL_25; /*0x4d54a9*/
    goto LABEL_12; /*0x4d54a9*/
  }
  if ( !*(_BYTE *)(v4[432] + 3778) && !(unsigned __int8)TechnoTypeClass::HasVoiceResponse(v4, 14) /*0x4d5428*/
    || (target = this->?) == 0
    || (*((int (__thiscall **)(AbstractClass *))target->vtable0 + 11))(target) != 6 )
  {
    if ( !*(_BYTE *)(v4[432] + 3782) ) /*0x4d547a*/
    {
      (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x4d54c6*/
      (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 335))(this, 0); /*0x4d54d2*/
      goto LABEL_25; /*0x4d54d8*/
    }
    goto LABEL_14; /*0x4d547a*/
  }
  (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, this->?, 1); /*0x4d5437*/
  (*((void (__thiscall **)(FootClass *, int, _DWORD))this->TechnoClass + 122))(this, 17, 0); /*0x4d5445*/
  if ( (*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 128))(this) ) /*0x4d544f*/
LABEL_12:
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 123))(this); /*0x4d545d*/
LABEL_25:
  MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4d5582*/
  LOWORD(v11) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d5592*/
  return v11 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d55b0*/
}



// ==== 0x004D55C0  FootClass::PlayCOM_audio  this=FootClass  sig=csp ====
char __thiscall FootClass::PlayCOM_audio(FootClass *this)
{
  if ( !this->locomotor[0] ) /*0x4d55c3*/
    WinAPI::Wrapper(-2147467261); /*0x4d55d2*/
  (*(void (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 72))(this->locomotor[0]); /*0x4d55e0*/
  return 0; /*0x4d55e5*/
}



// ==== 0x004D55F0  FootClass::Destru_vt319  this=FootClass  sig=csp ====
BOOL __thiscall FootClass::Destru_vt319(FootClass *this, _DWORD *a2)
{
  if ( !this->locomotor[0] ) /*0x4d5602*/
    WinAPI::Wrapper(-2147467261); /*0x4d5611*/
  (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this->locomotor[0] + 68))( /*0x4d562c*/
    this->locomotor[0],
    *a2,
    a2[1],
    a2[2]);
  if ( !this->locomotor[0] ) /*0x4d562f*/
    WinAPI::Wrapper(-2147467261); /*0x4d563e*/
  return (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 16))(this->locomotor[0]) != 0; /*0x4d5651*/
}



// ==== 0x004D5660  FootClass::EnterAttackState  this=FootClass  sig=csp ====
int __thiscall FootClass::EnterAttackState(FootClass *this)
{
  void (__thiscall **vtable0)(FootClass *); // edx

  (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x4d5669*/
  vtable0 = (void (__thiscall **)(FootClass *))this->TechnoClass; /*0x4d566f*/
  this->pathDirections[0] = -1; /*0x4d5673*/
  vtable0[320](this); /*0x4d567d*/
  return TechnoClass::ProcessDeploymentState((TechnoClass *)this); /*0x4d568a*/
}



// ==== 0x004D5690  FootClass::CalculateApproachPath  this=FootClass  sig=csp ====
void *__thiscall FootClass::CalculateApproachPath(FootClass *this, char a2)
{
  double v2; // st7
  AbstractClass *locomotorTarget; // eax
  int v5; // esi
  int (__thiscall **vtable0)(FootClass *, int); // eax
  int v7; // eax
  int v8; // edi
  char v10; // al
  int currentMission; // eax
  int (__thiscall **v12)(FootClass *); // edx
  CellClass *v13; // eax
  int v14; // eax
  int v15; // eax
  int (__stdcall ***Checked)(_DWORD, void *, __int16 *); // eax
  int v17; // esi
  int v18; // eax
  int v19; // edi
  _DWORD *v20; // esi
  _DWORD *v21; // eax
  int *v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // eax
  int ComPtr_field_0x04; // eax
  bool v27; // zf
  void *v28; // esi
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  AbstractClass *v32; // esi
  _DWORD *v33; // eax
  void (__thiscall **v34)(FootClass *, void *); // esi
  void *v35; // eax
  AbstractClass *v36; // esi
  int FoundationHeight; // eax
  BuildingTypeClass *uniqueId; // ecx
  int FoundationWidth; // eax
  int v40; // eax
  int v41; // eax
  bool v42; // cc
  int v43; // eax
  int *v44; // eax
  int v46; // edx
  int v47; // kr04_4
  AbstractClass *v48; // ecx
  AbstractClass *v49; // eax
  int v51; // eax
  int *v52; // eax
  AbstractClass *v53; // ecx
  AbstractClass *v54; // ecx
  int v55; // eax
  int v56; // eax
  int v57; // eax
  CellClass *v58; // eax
  int *v59; // eax
  int v60; // esi
  int v61; // edi
  CellClass *v62; // eax
  _DWORD *v63; // eax
  int v64; // ecx
  ObjectPlacement *v66; // esi
  _DWORD *v67; // eax
  int *v68; // eax
  int v69; // esi
  int v70; // edi
  int v71; // edx
  int v72; // eax
  int v73; // eax
  int v75; // esi
  int v76; // edi
  int v77; // ecx
  int v78; // eax
  int v79; // eax
  int (__thiscall **v80)(FootClass *); // edx
  CellClass *v81; // edi
  _DWORD *v82; // eax
  int *v83; // eax
  int v84; // edx
  CellClass *v85; // eax
  int *v86; // eax
  int v87; // ecx
  int v88; // eax
  int v89; // eax
  int (__thiscall **v90)(FootClass *, _DWORD); // edx
  _DWORD **v91; // eax
  char v93; // cl
  void (__thiscall **v94)(FootClass *, _DWORD); // eax
  _DWORD *v95; // eax
  int onBridge; // edx
  bool *v97; // eax
  char IsBuildable; // al
  void (__thiscall **v99)(FootClass *); // edx
  _DWORD *v100; // eax
  bool *v101; // eax
  __int16 v102; // ax
  int v103; // edi
  int v104; // ecx
  __int16 v105; // ax
  AbstractClass *v106; // ecx
  int *v107; // eax
  int v108; // ecx
  int v109; // eax
  int v110; // eax
  int (__thiscall **v111)(FootClass *, _DWORD); // edx
  _DWORD **v112; // eax
  _DWORD *v114; // eax
  bool *v115; // eax
  char v116; // al
  void (__thiscall **v117)(FootClass *); // edx
  _DWORD *v118; // eax
  bool *v119; // eax
  signed int v120; // ecx
  signed int v121; // edi
  _DWORD *v122; // eax
  int v123; // edx
  int *v124; // eax
  int v125; // kr48_4
  signed int v126; // ecx
  signed int v127; // edi
  int v128; // ecx
  int v129; // eax
  void (__thiscall **v131)(FootClass *, void *, int); // esi
  void *v132; // eax
  int (__thiscall **v133)(FootClass *, __int16 *, _DWORD); // edx
  _DWORD *v134; // eax
  char v135; // al
  int v136; // eax
  int v137; // eax
  void (__thiscall **v138)(FootClass *, void *, int); // esi
  void *v139; // eax
  AbstractClass *v140; // ebx
  char v141; // [esp+58h] [ebp-180h]
  int v142; // [esp+64h] [ebp-174h]
  int v143; // [esp+64h] [ebp-174h]
  int v144; // [esp+68h] [ebp-170h]
  int v145; // [esp+68h] [ebp-170h]
  double v146; // [esp+70h] [ebp-168h]
  char v147; // [esp+70h] [ebp-168h]
  int v148; // [esp+70h] [ebp-168h]
  char v149; // [esp+70h] [ebp-168h]
  int v150; // [esp+70h] [ebp-168h]
  int TileIndex; // [esp+74h] [ebp-164h]
  char v152; // [esp+74h] [ebp-164h]
  int v153; // [esp+74h] [ebp-164h]
  double v154; // [esp+78h] [ebp-160h]
  double v155; // [esp+78h] [ebp-160h]
  double v156; // [esp+78h] [ebp-160h]
  double v157; // [esp+78h] [ebp-160h]
  double v158; // [esp+78h] [ebp-160h]
  double v159; // [esp+78h] [ebp-160h]
  int v160; // [esp+78h] [ebp-160h]
  AbstractClass *target; // [esp+7Ch] [ebp-15Ch]
  int v162; // [esp+80h] [ebp-158h]
  char v163; // [esp+92h] [ebp-146h]
  bool v164; // [esp+93h] [ebp-145h]
  char v165; // [esp+93h] [ebp-145h]
  __int16 v166[2]; // [esp+94h] [ebp-144h] BYREF
  __int16 v167[2]; // [esp+98h] [ebp-140h] BYREF
  __int16 v168[2]; // [esp+9Ch] [ebp-13Ch] BYREF
  int v169; // [esp+A0h] [ebp-138h]
  ComPtr v170; // [esp+A4h] [ebp-134h] BYREF
  int v171; // [esp+C8h] [ebp-110h]
  int v172; // [esp+CCh] [ebp-10Ch] BYREF
  int v173; // [esp+D0h] [ebp-108h]
  int GroundHeight; // [esp+D4h] [ebp-104h]
  int ComPtr_field_0x08; // [esp+D8h] [ebp-100h] BYREF
  int ComPtr_field_0x0C; // [esp+DCh] [ebp-FCh]
  int ComPtr_field_0x10; // [esp+E0h] [ebp-F8h]
  int ComPtr_field_0x14; // [esp+E4h] [ebp-F4h]
  double v179; // [esp+E8h] [ebp-F0h] BYREF
  char v180[4]; // [esp+F4h] [ebp-E4h] BYREF
  char v181; // [esp+F8h] [ebp-E0h] BYREF
  int v182; // [esp+FCh] [ebp-DCh]
  int v183; // [esp+100h] [ebp-D8h] BYREF
  int v184; // [esp+104h] [ebp-D4h]
  double v185; // [esp+108h] [ebp-D0h] BYREF
  int v186; // [esp+110h] [ebp-C8h]
  int v187; // [esp+11Ch] [ebp-BCh]
  int v188; // [esp+124h] [ebp-B4h]
  int v189; // [esp+12Ch] [ebp-ACh]
  int v190; // [esp+130h] [ebp-A8h]
  int v191; // [esp+134h] [ebp-A4h] BYREF
  int v192; // [esp+138h] [ebp-A0h]
  int v193; // [esp+13Ch] [ebp-9Ch]
  __int16 v194[2]; // [esp+140h] [ebp-98h] BYREF
  int v195; // [esp+144h] [ebp-94h]
  int v196; // [esp+148h] [ebp-90h]
  __int16 v197[2]; // [esp+150h] [ebp-88h] BYREF
  __int16 v198[4]; // [esp+154h] [ebp-84h] BYREF
  __int16 v199[6]; // [esp+15Ch] [ebp-7Ch] BYREF
  char v200[16]; // [esp+168h] [ebp-70h] BYREF
  char v201[16]; // [esp+178h] [ebp-60h] BYREF
  char v202[12]; // [esp+188h] [ebp-50h] BYREF
  char v203[8]; // [esp+194h] [ebp-44h] BYREF
  char v204[12]; // [esp+19Ch] [ebp-3Ch] BYREF
  char v205[12]; // [esp+1A8h] [ebp-30h] BYREF
  int v206[4]; // [esp+1B4h] [ebp-24h] BYREF
  char v207[8]; // [esp+1C4h] [ebp-14h] BYREF
  char v208[12]; // [esp+1CCh] [ebp-Ch] BYREF

  locomotorTarget = (AbstractClass *)this->?; /*0x4d56a1*/
  if ( locomotorTarget && locomotorTarget == this->? || !this->? ) /*0x4d56b7*/
    return 0; /*0x4d56bf*/
  v5 = (*((int (__thiscall **)(FootClass *, AbstractClass *))this->TechnoClass + 185))(this, this->?); /*0x4d56d0*/
  vtable0 = (int (__thiscall **)(FootClass *, int))this->TechnoClass; /*0x4d56d2*/
  v189 = v5; /*0x4d56d7*/
  v7 = vtable0[90](this, v5); /*0x4d56de*/
  v8 = v7; /*0x4d56e4*/
  v170.ComPtr_field_0x14 = v7; /*0x4d56ec*/
  if ( v7 >= 512 ) /*0x4d56f0*/
  {
    v8 = v7 - 128; /*0x4d56f2*/
    v170.ComPtr_field_0x14 = v7 - 128; /*0x4d56f8*/
  }
  v163 = (*((int (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 234))(this, this->?, v5); /*0x4d5710*/
  if ( !v163 && this->? == 6 ) /*0x4d571d*/
    goto LABEL_8; /*0x4d571d*/
  HIBYTE(v167[1]) = *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3379); /*0x4d5761*/
  if ( FootClass::checkPassability(this) ) /*0x4d5765*/
    v10 = 0; /*0x4d576e*/
  else
    v10 = HIBYTE(v167[1]); /*0x4d5772*/
  if ( this->? ) /*0x4d5776*/
    v10 = 0; /*0x4d5780*/
  if ( this->? ) /*0x4d5782*/
    v10 = 0; /*0x4d578c*/
  if ( !v163 && !v10 ) /*0x4d5798*/
  {
    currentMission = this->?; /*0x4d579e*/
    v164 = currentMission == 1; /*0x4d57a9*/
    if ( currentMission == 11 && (unsigned __int8)House::IsCurrentPlayer((House *)this->?) ) /*0x4d57b8*/
      v164 = 1; /*0x4d57c1*/
    if ( (this->? != 15 || (unsigned __int8)House::IsCurrentPlayer((House *)this->?)) && !v164 ) /*0x4d57e4*/
    {
LABEL_8:
      if ( a2 ) /*0x4d5724*/
        return 0; /*0x4d5724*/
      (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x4d5730*/
      (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x4d573e*/
      return 0; /*0x4d574c*/
    }
  }
  v12 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4d57ea*/
  HIBYTE(v169) = 0; /*0x4d57ee*/
  if ( v12[11](this) == 1 ) /*0x4d57f9*/
  {
    if ( *(_BYTE *)(this->q1B1 + 3602) ) /*0x4d5801*/
    {
      ComPtr_field_0x08 = this->?[0]; /*0x4d5817*/
      ComPtr_field_0x0C = this->?[1]; /*0x4d5823*/
      ComPtr_field_0x10 = this->?[2]; /*0x4d582a*/
      v13 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &ComPtr_field_0x08); /*0x4d5833*/
      if ( !(unsigned __int8)BuildingClass::CheckC4Active((BuildingClass *)v13) ) /*0x4d583a*/
      {
        target = this->?; /*0x4d584b*/
        HIBYTE(v169) = 1; /*0x4d584c*/
        v14 = ObjectClass::DistanceTo((ObjectClass *)this, (int)target) + 512; /*0x4d5856*/
        if ( v8 >= v14 ) /*0x4d585d*/
          v170.ComPtr_field_0x14 = v14; /*0x4d585f*/
      }
    }
  }
  HIBYTE(v167[1]) = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 2; /*0x4d5873*/
  v15 = this->locomotor[0]; /*0x4d5878*/
  v170.ComPtr_field_0x04 = 0; /*0x4d587a*/
  if ( !v15 ) /*0x4d5884*/
    goto LABEL_38; /*0x4d5884*/
  Checked = (int (__stdcall ***)(_DWORD, void *, __int16 *))Stream::GetChecked((Stream *)this->locomotor); /*0x4d5886*/
  v17 = (**Checked)(Checked, &unk_818858, v168); /*0x4d589a*/
  if ( v17 >= 0 ) /*0x4d589e*/
  {
    v19 = *(_DWORD *)v168; /*0x4d58ad*/
    ComPtr::Release_Alt((ComPtr *)&v170.ComPtr_field_0x04); /*0x4d58b5*/
    v18 = v19; /*0x4d58ba*/
  }
  else
  {
    ComPtr::Release_Alt((ComPtr *)&v170.ComPtr_field_0x04); /*0x4d58a4*/
    v18 = 0; /*0x4d58a9*/
  }
  v170.ComPtr_field_0x04 = v18; /*0x4d58be*/
  if ( v17 < 0 && v17 != -2147467262 ) /*0x4d58ca*/
    WinAPI::Wrapper(v17); /*0x4d58cd*/
  if ( !v18 ) /*0x4d58d8*/
LABEL_38:
    WinAPI::Wrapper(-2147467261); /*0x4d58df*/
  (*(void (__stdcall **)(int, char *))(*(_DWORD *)v18 + 12))(v18, v200); /*0x4d58f3*/
  if ( !memcmp(v200, &g_CLSID_JumpjetLocomotion, 0x10u) ) /*0x4d5909*/
    HIBYTE(v167[1]) = 1; /*0x4d590d*/
  if ( this->movementDestination ) /*0x4d5912*/
  {
    if ( this->? ) /*0x4d5922*/
    {
      if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3380) ) /*0x4d5938*/
      {
        if ( !v163 ) /*0x4d594c*/
        {
          v20 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, char *))this->?->TechnoClass::vtable0 + 18))( /*0x4d5968*/
                            this->?,
                            v180);
          v21 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, int *))this->movementDestination->vtable0 + 18))( /*0x4d5971*/
                            this->movementDestination,
                            &ComPtr_field_0x08);
          v22 = Coord::Subtract((Coord *)&v170.ComPtr_field_0x08, *v21 - *v20, v21[1] - v20[1], v21[2] - v20[2]); /*0x4d5991*/
          v172 = *v22; /*0x4d599b*/
          v23 = v22[1]; /*0x4d599f*/
          __asm { fild [esp+160h+var_10C] } /*0x4d59a2*/
          v24 = v22[2]; /*0x4d59a6*/
          v173 = v23; /*0x4d59a9*/
          __asm { fild [esp+160h+var_108] } /*0x4d59ad*/
          GroundHeight = v24; /*0x4d59b1*/
          __asm /*0x4d59b5*/
          {
            fild [esp+160h+var_104]
            fld st
            fmul st, st(1)
            fld st(2)
            fmul st, st(3)
            faddp st(1), st
            fld st(3)
            fmul st, st(4)
            faddp st(1), st
            fstp [esp+160h+var_160]; double
            fstp st
            fstp st
            fstp st
          }
          Math::Sqrt(v154); /*0x4d59d2*/
          LOWORD(v25) = Math::RoundToInt(v2); /*0x4d59da*/
          if ( v25 > v170.ComPtr_field_0x14 * *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3576) && !a2 ) /*0x4d59f9*/
          {
            this->FootClass_field_5A0 = 0; /*0x4d59fb*/
            this->movementDestination = 0; /*0x4d5a01*/
          }
        }
      }
    }
    if ( this->movementDestination && !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 21))(this) ) /*0x4d5a13*/
      goto LABEL_53; /*0x4d5a13*/
  }
  if ( v163 && this->? && !HIBYTE(v169) ) /*0x4d5a32*/
  {
LABEL_53:
    ComPtr_field_0x04 = v170.ComPtr_field_0x04; /*0x4d5a34*/
    v27 = v170.ComPtr_field_0x04 == 0; /*0x4d5a38*/
    goto LABEL_54; /*0x4d5a38*/
  }
  if ( *(int *)&this->__pad_58C[12] > 0 ) /*0x4d5a53*/
  {
    v28 = **(void ***)this->__pad_58C; /*0x4d5a60*/
    if ( !a2 ) /*0x4d5a62*/
    {
      (*((void (__thiscall **)(FootClass *, void *, _DWORD))this->TechnoClass + 288))(this, v28, 0); /*0x4d5a6a*/
      v29 = *(_DWORD *)&this->__pad_58C[12]; /*0x4d5a70*/
      if ( v29 > 0 ) /*0x4d5a78*/
      {
        v30 = v29 - 1; /*0x4d5a7a*/
        v31 = 0; /*0x4d5a7d*/
        for ( *(_DWORD *)&this->__pad_58C[12] = v30; /*0x4d5a87*/
              v31 < *(_DWORD *)&this->__pad_58C[12];
              *(_DWORD *)(*(_DWORD *)this->__pad_58C + 4 * v31 - 4) = *(_DWORD *)(*(_DWORD *)this->__pad_58C + 4 * v31) )
        {
          ++v31; /*0x4d5a8f*/
        }
      }
    }
    if ( v170.ComPtr_field_0x04 ) /*0x4d5aa7*/
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)v170.ComPtr_field_0x04 + 8))(v170.ComPtr_field_0x04); /*0x4d5ab0*/
      return v28; /*0x4d5abb*/
    }
    return v28; /*0x4d5aa7*/
  }
  if ( (*((int (__thiscall **)(AbstractClass *))this->?->TechnoClass::vtable0 + 11))(this->?) == 11 ) /*0x4d5acc*/
  {
    v32 = this->?; /*0x4d5ad2*/
    if ( (unsigned __int8)CellClass::IsActiveOrNext((CellClass *)v32) ) /*0x4d5ada*/
    {
      v33 = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *, _DWORD))this->TechnoClass + 19))(this, v180, 0); /*0x4d5aed*/
      *(_WORD *)v170.__pad_0 = *v33 / 256; /*0x4d5b03*/
      *(_WORD *)&v170.__pad_0[2] = v33[1] / 256; /*0x4d5b1b*/
      *(_DWORD *)v168 = *(_DWORD *)v170.__pad_0; /*0x4d5b28*/
      v170.ComPtr_field_0x1C = *FootClass::FindNearestApproachableCell( /*0x4d5b40*/
                                  (FootClass *)&stru_87F5F0.__pad_58[416],
                                  &v170.ComPtr_field_0x20,
                                  (__int16 *)&v32[1],
                                  v168);
      if ( !a2 ) /*0x4d5b44*/
      {
        v34 = (void (__thiscall **)(FootClass *, void *))this->TechnoClass; /*0x4d5b46*/
        v35 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v170.ComPtr_field_0x1C); /*0x4d5b52*/
        v34[242](this, v35); /*0x4d5b5a*/
      }
    }
  }
  if ( (*((int (__thiscall **)(AbstractClass *))this->?->TechnoClass::vtable0 + 11))(this->?) == 6 ) /*0x4d5b6e*/
  {
    v36 = this->?; /*0x4d5b70*/
    if ( v36 ) /*0x4d5b78*/
    {
      FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)v36[36].uniqueId, 0); /*0x4d5b81*/
      uniqueId = (BuildingTypeClass *)v36[36].uniqueId; /*0x4d5b86*/
      *(_DWORD *)v168 = FoundationHeight; /*0x4d5b8e*/
      FoundationWidth = BuildingTypeClass::GetFoundationWidth(uniqueId); /*0x4d5b92*/
      v170.ComPtr_field_0x14 += (FoundationWidth + *(_DWORD *)v168) << 6; /*0x4d5ba6*/
    }
  }
  v40 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this); /*0x4d5bae*/
  __asm { fild [esp+158h+var_134.ComPtr_field_0x14] } /*0x4d5bb1*/
  if ( v40 == 15 ) /*0x4d5bb8*/
    __asm { fsub ds:dbl_7E9228 } /*0x4d5bba*/
  else
    __asm { fsub ds:dbl_7E9250 } /*0x4d5bc2*/
  LOWORD(v41) = Math::RoundToInt(v2); /*0x4d5bc8*/
  v42 = (v41 <= 0 ? 0 : v41) <= 0;
  v43 = v41 <= 0 ? 0 : v41;
  v170.ComPtr_field_0x14 = v43; /*0x4d5bd9*/
  if ( !v42 && v43 <= 256 ) /*0x4d5be4*/
    v170.ComPtr_field_0x14 = 256; /*0x4d5be6*/
  v44 = (int *)(*((int (__thiscall **)(AbstractClass *, char *))this->?->TechnoClass::vtable0 + 18))(this->?, v180); /*0x4d5bfb*/
  v172 = *v44; /*0x4d5c02*/
  v173 = v44[1]; /*0x4d5c09*/
  GroundHeight = v44[2]; /*0x4d5c10*/
  *(_WORD *)v170.__pad_0 = v172 / 256; /*0x4d5c20*/
  *(_WORD *)&v170.__pad_0[2] = v173 / 256; /*0x4d5c38*/
  v183 = *(_DWORD *)v170.__pad_0; /*0x4d5c41*/
  *(_DWORD *)v166 = *(_DWORD *)v170.__pad_0; /*0x4d5c48*/
  _EAX = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *))this->TechnoClass + 18))(this, v180); /*0x4d5c50*/
  *(_DWORD *)v168 = *_EAX; /*0x4d5c58*/
  __asm /*0x4d5c5f*/
  {
    fild dword ptr [esp+168h+var_13C]
    fisub [esp+168h+var_10C]
    fstp [esp+168h+var_160]; double
    fild [esp+168h+var_108]
    fisub dword ptr [eax+4]
    fstp [esp+168h+var_168]; double
  }
  Math::CalcAngle(v146, v155); /*0x4d5c75*/
  __asm { fsub ds:dbl_7E2820 } /*0x4d5c7a*/
  __asm { fmul ds:dbl_7E2818 }
  v47 = Math::RoundToInt(v2); /*0x4d5c89*/
  LOWORD(v46) = HIWORD(v47); /*0x4d5c89*/
  v168[0] = v47; /*0x4d5c8e*/
  v48 = this->?; /*0x4d5c97*/
  v165 = 0; /*0x4d5c9d*/
  LOBYTE(v184) = 0; /*0x4d5ca6*/
  *(_DWORD *)v197 = (unsigned __int8)((unsigned int)((*(_DWORD *)v168 >> 7) + 1) >> 1); /*0x4d5cb5*/
  if ( (*((int (__fastcall **)(AbstractClass *, int))v48->vtable0 + 11))(v48, v46) == 11 ) /*0x4d5cc4*/
  {
    LOBYTE(v184) = ((unsigned __int16)this->?[8].NeedsSaveOrLink >> 8) & 1; /*0x4d5cd8*/
  }
  else
  {
    v49 = this->?; /*0x4d5ce1*/
    if ( v49 && (v49->abstractFlags & 2) != 0 ) /*0x4d5cef*/
      LOBYTE(v184) = v49[3].NeedsSaveOrLink; /*0x4d5cf7*/
  }
  if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15 ) /*0x4d5d08*/
  {
    if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1685) ) /*0x4d5d14*/
    {
      __asm /*0x4d5d1e*/
      {
        fild [esp+158h+var_134.ComPtr_field_0x14]
        fcomp ds:dbl_7E9248
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x4d5d2d*/
        v170.ComPtr_field_0x14 = 332; /*0x4d5d2f*/
    }
  }
  if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1685) )
  {
    v51 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 111))(this); /*0x4d5d53*/
    v52 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v51 + 72))(v51, v180); /*0x4d5d62*/
    ComPtr_field_0x08 = *v52; /*0x4d5d67*/
    ComPtr_field_0x0C = v52[1]; /*0x4d5d6e*/
    v53 = this->?; /*0x4d5d72*/
    ComPtr_field_0x10 = v52[2]; /*0x4d5d7d*/
    if ( v53 && (v53->abstractFlags & 1) != 0 )
    {
      v54 = (v53->abstractFlags & 1) != 0 ? v53 : 0;
      v55 = (*((int (__thiscall **)(AbstractClass *))v54->vtable0 + 111))(v54); /*0x4d5d9a*/
      v56 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)v55 + 72))(v55, v180); /*0x4d5da9*/
      v185 = *(double *)v56; /*0x4d5dae*/
      v186 = *(_DWORD *)(v56 + 8); /*0x4d5dc2*/
    }
    else
    {
      v57 = (*((int (__thiscall **)(AbstractClass *, char *))v53->vtable0 + 18))(v53, v180); /*0x4d5dd2*/
      v185 = *(double *)v57; /*0x4d5dd7*/
      v186 = *(_DWORD *)(v57 + 8); /*0x4d5deb*/
    }
    v58 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &ComPtr_field_0x08); /*0x4d5dfc*/
    v59 = (int *)(*(int (__thiscall **)(CellClass *, char *))(v58->mapCoords[0] + 72))(v58, v180); /*0x4d5e0a*/
    v60 = *v59; /*0x4d5e0d*/
    v61 = v59[1]; /*0x4d5e14*/
    v182 = v59[2]; /*0x4d5e22*/
    v62 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v185); /*0x4d5e29*/
    v63 = (_DWORD *)(*(int (__thiscall **)(CellClass *, char *))(v62->mapCoords[0] + 72))(v62, v180); /*0x4d5e37*/
    v64 = v63[1]; /*0x4d5e43*/
    v170.ComPtr_field_0x20 = v60 - *v63; /*0x4d5e46*/
    v171 = v61 - v64; /*0x4d5e4c*/
    __asm /*0x4d5e53*/
    {
      fild [esp+160h+var_110]
      fild [esp+160h+var_134.ComPtr_field_0x20]
    }
    v182 = v63[2]; /*0x4d5e5b*/
    __asm /*0x4d5e62*/
    {
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+160h+var_160]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v156); /*0x4d5e73*/
    LOWORD(_EAX) = Math::RoundToInt(v2); /*0x4d5e7b*/
    *(_DWORD *)v170.__pad_0 = _EAX; /*0x4d5e80*/
    __asm /*0x4d5e84*/
    {
      fild dword ptr [esp+158h+var_134.__pad_0]
      fcomp ds:dbl_7E9240
      fnstsw ax
    }
    if ( (_EAX & 0x4100) != 0 ) /*0x4d5e93*/
    {
      v66 = (ObjectPlacement *)(*((int (__thiscall **)(FootClass *))this->TechnoClass + 111))(this); /*0x4d5ea9*/
      v162 = 1; /*0x4d5eab*/
      v67 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *))this->?->TechnoClass::vtable0 + 18))(this->?); /*0x4d5eb8*/
      v68 = ObjectPlacement::CalcPosition(v66, &v191, v67, (char)&v181, 0, 0); /*0x4d5ec6*/
      v69 = *v68; /*0x4d5ecb*/
      v70 = v68[1]; /*0x4d5ed7*/
      v71 = v68[2]; /*0x4d5eda*/
      v72 = *v68; /*0x4d5edd*/
      v193 = v71; /*0x4d5edf*/
      v170.ComPtr_field_0x20 = v72 - LODWORD(v185); /*0x4d5ef3*/
      v171 = v70 - HIDWORD(v185); /*0x4d5ef7*/
      __asm /*0x4d5efb*/
      {
        fild [esp+160h+var_110]
        fild [esp+160h+var_134.ComPtr_field_0x20]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fstp [esp+160h+var_160]; double
        fstp st
        fstp st
      }
      Math::Sqrt(v157); /*0x4d5f14*/
      LOWORD(v73) = Math::RoundToInt(v2); /*0x4d5f1c*/
      if ( v73 < *(int *)v170.__pad_0 ) /*0x4d5f25*/
      {
        if ( !a2 ) /*0x4d5f2c*/
        {
          if ( !this->locomotor[0] ) /*0x4d5f2e*/
            WinAPI::Wrapper(-2147467261); /*0x4d5f3d*/
          (*(void (__stdcall **)(int, int, int, int))(*(_DWORD *)this->locomotor[0] + 120))( /*0x4d5f5f*/
            this->locomotor[0],
            v69,
            v70,
            v193);
        }
        v165 = 1; /*0x4d5f62*/
      }
    }
  }
  if ( (*((unsigned __int8 (__thiscall **)(AbstractClass *))this->?->TechnoClass::vtable0 + 20))(this->?) ) /*0x4d5f6f*/
  {
    GroundHeight = Cell::GetGroundHeight(&v172); /*0x4d5f89*/
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v172)->flags[0] & 0x100) != 0 ) /*0x4d5fa1*/
      GroundHeight += (int)FootClass_Array.?; /*0x4d5faf*/
  }
  _EAX = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this); /*0x4d5fb7*/
  __asm { fild [esp+158h+var_134.ComPtr_field_0x14] } /*0x4d5fbd*/
  v75 = *(_DWORD *)(_EAX + 1460); /*0x4d5fc1*/
  ComPtr_field_0x14 = v170.ComPtr_field_0x14; /*0x4d5fcb*/
  __asm /*0x4d5fcf*/
  {
    fcomp ds:dbl_7E9238
    fnstsw ax
  }
  if ( (_EAX & 0x4100) != 0 ) /*0x4d5fda*/
  {
LABEL_142:
    if ( !v165 ) /*0x4d6898*/
      goto LABEL_148; /*0x4d6898*/
LABEL_143:
    if ( !a2 ) /*0x4d689f*/
    {
      v131 = (void (__thiscall **)(FootClass *, void *, int))this->TechnoClass; /*0x4d68a1*/
      v132 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v166); /*0x4d68af*/
      v131[288](this, v132, 1); /*0x4d68b7*/
    }
    v28 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v166); /*0x4d68cc*/
    if ( v170.ComPtr_field_0x04 ) /*0x4d68d4*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v170.ComPtr_field_0x04 + 8))(v170.ComPtr_field_0x04); /*0x4d68d9*/
    return v28; /*0x4d68e4*/
  }
  while ( 2 ) /*0x4d5fe5*/
  {
    if ( v165 == 1 ) /*0x4d5fe5*/
      goto LABEL_142; /*0x4d5fe5*/
    __asm { fild [esp+158h+var_F4] } /*0x4d5feb*/
    *(_DWORD *)v170.__pad_0 = stru_822420.?; /*0x4d5fef*/
    __asm { fstp qword ptr [esp+158h+var_D0] } /*0x4d5ff7*/
    do /*0x4d6866*/
    {
      v76 = GroundHeight; /*0x4d6002*/
      v77 = (__int16)((v197[0] + (unsigned __int16)**(_DWORD **)v170.__pad_0) << 8); /*0x4d6014*/
      LOBYTE(v77) = 0; /*0x4d6017*/
      v170.ComPtr_field_0x14 = v77 - 0x3FFF; /*0x4d6020*/
      __asm /*0x4d6024*/
      {
        fild [esp+158h+var_134.ComPtr_field_0x14]
        fmul ds:dbl_7E2810
        fstp [esp+158h+var_F0]
        fild [esp+158h+var_108]
      }
      __asm { fstp qword ptr [esp+160h+var_134.ComPtr_field_0x14] }
      Math::SinCos(v179); /*0x4d6044*/
      __asm /*0x4d6049*/
      {
        fmul qword ptr [esp+160h+var_D0]
        fsubr qword ptr [esp+160h+var_134.ComPtr_field_0x14]
      }
      LOWORD(v78) = Math::RoundToInt(v2); /*0x4d6054*/
      v170.ComPtr_field_0x14 = v78; /*0x4d6063*/
      Math::ArcTan2(v179); /*0x4d6067*/
      __asm { fmul qword ptr [esp+168h+var_D0] } /*0x4d606c*/
      __asm { fiadd [esp+158h+var_10C] }
      LOWORD(v79) = Math::RoundToInt(v2); /*0x4d607a*/
      v80 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4d607f*/
      v170.ComPtr_field_0x08 = v79; /*0x4d6081*/
      v170.ComPtr_field_0x0C = v170.ComPtr_field_0x14; /*0x4d608b*/
      v170.ComPtr_field_0x10 = v76; /*0x4d608f*/
      if ( v80[11](this) == 15 && *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1685) ) /*0x4d60a5*/
      {
        v81 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v170.ComPtr_field_0x08); /*0x4d60c4*/
        v82 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, char *))this->?->TechnoClass::vtable0 + 18))( /*0x4d60d6*/
                          this->?,
                          v208);
        v83 = ObjectPlacement::CalcPosition((ObjectPlacement *)v81, v206, v82, 0, 0, 1); /*0x4d60e4*/
        v170.ComPtr_field_0x08 = *v83; /*0x4d60eb*/
        v170.ComPtr_field_0x0C = v83[1]; /*0x4d60f2*/
        v84 = v83[2]; /*0x4d60f6*/
      }
      else
      {
        v84 = 0; /*0x4d6134*/
        v170.ComPtr_field_0x08 = ((__int16)(v170.ComPtr_field_0x08 / 256) << 8) + 128; /*0x4d6136*/
        v170.ComPtr_field_0x0C = ((__int16)(v170.ComPtr_field_0x0C / 256) << 8) + 128; /*0x4d613a*/
      }
      v170.ComPtr_field_0x10 = v84; /*0x4d6142*/
      if ( !HIBYTE(v169) /*0x4d615b*/
        || (v85 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v170.ComPtr_field_0x08),
            (unsigned __int8)BuildingClass::CheckC4Active((BuildingClass *)v85)) )
      {
        v170.ComPtr_field_0x10 = Cell::GetGroundHeight(&v170.ComPtr_field_0x08); /*0x4d6181*/
        if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v170.ComPtr_field_0x08)->flags[0] & 0x100) != 0 ) /*0x4d6193*/
          v170.ComPtr_field_0x10 += (int)FootClass_Array.?; /*0x4d61a0*/
        v86 = (int *)(*((int (__thiscall **)(AbstractClass *, char *))this->?->TechnoClass::vtable0 + 18))( /*0x4d61b4*/
                       this->?,
                       v201);
        v87 = *v86; /*0x4d61b7*/
        v88 = v86[1]; /*0x4d61bd*/
        v195 = v170.ComPtr_field_0x08 - v87; /*0x4d61c6*/
        v196 = v170.ComPtr_field_0x0C - v88; /*0x4d61d2*/
        __asm /*0x4d61d9*/
        {
          fild [esp+160h+var_90]
          fild [esp+160h+var_94]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+160h+var_160]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v158); /*0x4d61f8*/
        LOWORD(v89) = Math::RoundToInt(v2); /*0x4d6200*/
        v90 = (int (__thiscall **)(FootClass *, _DWORD))this->TechnoClass; /*0x4d6205*/
        v170.ComPtr_field_0x14 = v89; /*0x4d6207*/
        v91 = (_DWORD **)v90[254](this, v189); /*0x4d6215*/
        if ( TechnoClass::CheckTargetLOS((TechnoClass *)this, &v170.ComPtr_field_0x08, (int *)this->?, *v91) ) /*0x4d622c*/
          goto LABEL_163; /*0x4d622c*/
        if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1685) ) /*0x4d623f*/
        {
          __asm /*0x4d624d*/
          {
            fild [esp+158h+var_134.ComPtr_field_0x14]
            fcomp ds:dbl_7E9230
            fnstsw ax
          }
          if ( (_AX & 0x100) != 0 ) /*0x4d625c*/
          {
LABEL_163:
            LOWORD(v188) = v170.ComPtr_field_0x08 / 256; /*0x4d6279*/
            HIWORD(v188) = v170.ComPtr_field_0x0C / 256; /*0x4d6296*/
            *(_DWORD *)v166 = v188; /*0x4d62a5*/
            if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v166, 1) ) /*0x4d62a9*/
            {
              v93 = *(_BYTE *)((*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 33))(this, v162) + 1685); /*0x4d62c0*/
              v94 = (void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass; /*0x4d62c6*/
              v162 = 0; /*0x4d62ca*/
              if ( v93 ) /*0x4d62cc*/
              {
                v94[73](this, 0); /*0x4d62d4*/
                v95 = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *, _DWORD))this->TechnoClass + 19))( /*0x4d62e8*/
                                  this,
                                  v203,
                                  0);
                LOWORD(v188) = *v95 / 256; /*0x4d6300*/
                onBridge = (unsigned __int8)this->?; /*0x4d6314*/
                HIWORD(v188) = v95[1] / 256; /*0x4d631d*/
                *(_DWORD *)v197 = v188; /*0x4d6334*/
                TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v197, v75, onBridge); /*0x4d6349*/
                v144 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1660); /*0x4d6360*/
                v97 = (bool *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v167); /*0x4d6367*/
                IsBuildable = Cell::IsBuildable(v97, v144, 0, 0, TileIndex, v75, -1, 1); /*0x4d636e*/
                v99 = (void (__thiscall **)(FootClass *))this->TechnoClass; /*0x4d6373*/
                v162 = 1; /*0x4d6375*/
                LOBYTE(v166[1]) = IsBuildable; /*0x4d6379*/
                v99[73](this); /*0x4d637d*/
              }
              else
              {
                v100 = (_DWORD *)((int (__thiscall *)(FootClass *, char *))v94[19])(this, v207); /*0x4d6392*/
                LOWORD(v187) = *v100 / 256; /*0x4d63aa*/
                HIWORD(v187) = v100[1] / 256; /*0x4d63c8*/
                v147 = this->?; /*0x4d63dd*/
                *(_DWORD *)v194 = v187; /*0x4d63e5*/
                v148 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v194, v75, v147); /*0x4d63f3*/
                v142 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1660); /*0x4d640a*/
                v101 = (bool *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v166); /*0x4d6411*/
                v163 = Cell::IsBuildable(v101, v142, 0, 0, v148, v75, -1, 1); /*0x4d641d*/
              }
              if ( !v163 ) /*0x4d6427*/
              {
                if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15 ) /*0x4d6437*/
                  goto LABEL_139; /*0x4d6437*/
                ComPtr_field_0x08 = v170.ComPtr_field_0x08; /*0x4d6449*/
                v102 = v166[0]; /*0x4d644d*/
                v103 = 0; /*0x4d6451*/
                ComPtr_field_0x0C = v170.ComPtr_field_0x0C; /*0x4d6453*/
                ComPtr_field_0x10 = v170.ComPtr_field_0x10; /*0x4d6457*/
                LODWORD(v179) = *(_DWORD *)v166; /*0x4d645b*/
                v182 = 0; /*0x4d645f*/
                while ( 1 ) /*0x4d646b*/
                {
                  v104 = v103 & 7; /*0x4d646b*/
                  v105 = LOWORD(g_DDrawSurfaceManager.scenario[v104 + 82]) + v102; /*0x4d646e*/
                  LOWORD(v104) = HIWORD(g_DDrawSurfaceManager.scenario[v104 + 82]); /*0x4d647d*/
                  LOWORD(v190) = v105; /*0x4d6481*/
                  HIWORD(v190) = v166[1] + v104; /*0x4d6491*/
                  v170.ComPtr_field_0x08 = (v105 << 8) + 128; /*0x4d64b4*/
                  v170.ComPtr_field_0x0C = ((__int16)(v166[1] + v104) << 8) + 128; /*0x4d64bc*/
                  v106 = this->?; /*0x4d64c0*/
                  v170.ComPtr_field_0x10 = v182; /*0x4d64c6*/
                  *(_DWORD *)v166 = v190; /*0x4d64ca*/
                  v107 = (int *)(*((int (__thiscall **)(AbstractClass *, char *))v106->vtable0 + 18))(v106, v205); /*0x4d64d8*/
                  v108 = *v107; /*0x4d64db*/
                  v109 = v107[1]; /*0x4d64e1*/
                  v191 = v170.ComPtr_field_0x08 - v108; /*0x4d64ea*/
                  v192 = v170.ComPtr_field_0x0C - v109; /*0x4d64f6*/
                  __asm /*0x4d64fd*/
                  {
                    fild [esp+160h+var_A0]
                    fild [esp+160h+var_A4]
                    fld st(1)
                    fmul st, st(2)
                    fld st(1)
                    fmul st, st(2)
                    faddp st(1), st
                    fstp [esp+160h+var_160]; double
                    fstp st
                    fstp st
                  }
                  Math::Sqrt(v159); /*0x4d651c*/
                  LOWORD(v110) = Math::RoundToInt(v2); /*0x4d6524*/
                  v111 = (int (__thiscall **)(FootClass *, _DWORD))this->TechnoClass; /*0x4d6529*/
                  v170.ComPtr_field_0x14 = v110; /*0x4d652b*/
                  v112 = (_DWORD **)v111[254](this, v189); /*0x4d6539*/
                  if ( TechnoClass::CheckTargetLOS((TechnoClass *)this, &v170.ComPtr_field_0x08, (int *)this->?, *v112) ) /*0x4d6550*/
                    goto LABEL_129; /*0x4d6550*/
                  if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1685) ) /*0x4d6563*/
                  {
                    __asm /*0x4d6571*/
                    {
                      fild [esp+158h+var_134.ComPtr_field_0x14]
                      fcomp ds:dbl_7E9230
                      fnstsw ax
                    }
                    if ( (_AX & 0x100) != 0 ) /*0x4d6580*/
                    {
LABEL_129:
                      if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1685) ) /*0x4d6590*/
                      {
                        (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 73))(this, 0, v162); /*0x4d65a4*/
                        v114 = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *, _DWORD))this->TechnoClass + 19))( /*0x4d65b8*/
                                           this,
                                           v202,
                                           0);
                        LOWORD(v189) = *v114 / 256; /*0x4d65d0*/
                        HIWORD(v189) = v114[1] / 256; /*0x4d65ee*/
                        v152 = this->?; /*0x4d6603*/
                        *(_DWORD *)v199 = v189; /*0x4d660b*/
                        v153 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v199, v75, v152); /*0x4d6619*/
                        v145 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1660); /*0x4d6630*/
                        v115 = (bool *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v167); /*0x4d6637*/
                        v116 = Cell::IsBuildable(v115, v145, 0, 0, v153, v75, -1, 1); /*0x4d663e*/
                        v117 = (void (__thiscall **)(FootClass *))this->TechnoClass; /*0x4d6643*/
                        v162 = 1; /*0x4d6645*/
                        LOBYTE(v166[1]) = v116; /*0x4d6649*/
                        v117[73](this); /*0x4d664d*/
                      }
                      else
                      {
                        v118 = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *, _DWORD))this->TechnoClass + 19))( /*0x4d6666*/
                                           this,
                                           v204,
                                           0);
                        LOWORD(v170.ComPtr_field_0x1C) = *v118 / 256; /*0x4d667e*/
                        HIWORD(v170.ComPtr_field_0x1C) = v118[1] / 256; /*0x4d6699*/
                        v149 = this->?; /*0x4d66a8*/
                        *(_DWORD *)v198 = v170.ComPtr_field_0x1C; /*0x4d66b0*/
                        v150 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v198, v75, v149); /*0x4d66be*/
                        v143 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1660); /*0x4d66d5*/
                        v119 = (bool *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v166); /*0x4d66dc*/
                        v163 = Cell::IsBuildable(v119, v143, 0, 0, v150, v75, -1, 1); /*0x4d66e8*/
                      }
                      if ( v163 ) /*0x4d66f2*/
                        break; /*0x4d66f2*/
                    }
                  }
                  if ( ++v103 >= 8 ) /*0x4d66f8*/
                  {
                    v170.ComPtr_field_0x08 = ComPtr_field_0x08; /*0x4d670a*/
                    v170.ComPtr_field_0x0C = ComPtr_field_0x0C; /*0x4d6712*/
                    v170.ComPtr_field_0x10 = ComPtr_field_0x10; /*0x4d6716*/
                    *(_DWORD *)v166 = LODWORD(v179); /*0x4d671a*/
                    goto LABEL_139; /*0x4d671e*/
                  }
                  v102 = v166[0]; /*0x4d6465*/
                }
              }
              v120 = abs32(v166[1] - SHIWORD(v183)); /*0x4d673c*/
              v121 = abs32(v166[0] - (__int16)v183); /*0x4d674f*/
              if ( v121 <= v120 ) /*0x4d6751*/
                v121 = v120; /*0x4d6753*/
              v122 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v166); /*0x4d675f*/
              LODWORD(v179) = v122; /*0x4d6768*/
              if ( HIBYTE(v167[1]) ) /*0x4d676e*/
                goto LABEL_143; /*0x4d676e*/
              v123 = v122[80] >> 8; /*0x4d6781*/
              LOBYTE(v123) = v123 & 1; /*0x4d6786*/
              if ( Pathfinding::CalcDistance( /*0x4d67a8*/
                     (int)&stru_87E790.__pad_D8[80],
                     v166,
                     (__int16 *)&v183,
                     (int)this,
                     v123,
                     v184,
                     -1) <= v121 + 8 )
                goto LABEL_143; /*0x4d67a8*/
              v124 = (int *)(*((int (__thiscall **)(FootClass *, __int16 *, _DWORD))this->TechnoClass + 19))( /*0x4d67bc*/
                              this,
                              v199,
                              0);
              v125 = *v124; /*0x4d67cc*/
              v168[1] = v124[1] / 256; /*0x4d67e2*/
              v168[0] = v125 / 256; /*0x4d67ef*/
              v170.ComPtr_field_0x20 = *(_DWORD *)v168; /*0x4d67f9*/
              v126 = abs32(v168[1] - v166[1]); /*0x4d6801*/
              v127 = abs32(v168[0] - v166[0]); /*0x4d6814*/
              if ( v127 <= v126 ) /*0x4d6816*/
                v127 = v126; /*0x4d6818*/
              v128 = *(_DWORD *)(LODWORD(v179) + 320) >> 8; /*0x4d6828*/
              LOBYTE(v128) = v128 & 1; /*0x4d682b*/
              v160 = v128; /*0x4d682e*/
              v129 = (*((int (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 47))(this, 0); /*0x4d6833*/
              if ( Pathfinding::CalcDistance( /*0x4d6854*/
                     (int)&stru_87E790.__pad_D8[80],
                     (__int16 *)&v170.ComPtr_field_0x20,
                     v166,
                     (int)this,
                     v129,
                     v160,
                     -1) <= v127 + 8 )
                goto LABEL_143; /*0x4d6854*/
            }
          }
        }
      }
LABEL_139:
      *(_DWORD *)v170.__pad_0 += 4; /*0x4d6856*/
    }
    while ( *(int *)v170.__pad_0 < (int)&stru_822420.?[7] ); /*0x4d6866*/
    ComPtr_field_0x14 -= 256; /*0x4d6874*/
    __asm /*0x4d687c*/
    {
      fild [esp+158h+var_F4]
      fcomp ds:dbl_7E9238
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x4d688b*/
      continue; /*0x4d688b*/
    break;
  }
LABEL_148:
  if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3367) /*0x4d6911*/
    || (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15
    && *(_BYTE *)(this->q1B0 + 3782) )
  {
    if ( !a2 ) /*0x4d6a62*/
      (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, this->?, 1); /*0x4d6a71*/
    v140 = this->?; /*0x4d6a7b*/
    if ( v170.ComPtr_field_0x04 ) /*0x4d6a83*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v170.ComPtr_field_0x04 + 8))(v170.ComPtr_field_0x04); /*0x4d6a88*/
    return v140; /*0x4d6a8c*/
  }
  else
  {
    v133 = (int (__thiscall **)(FootClass *, __int16 *, _DWORD))this->TechnoClass; /*0x4d691f*/
    v170.ComPtr_field_0x1C = 0; /*0x4d6923*/
    v134 = (_DWORD *)v133[19](this, v199, 0); /*0x4d693d*/
    v168[0] = *v134 / 256; /*0x4d6954*/
    v168[1] = v134[1] / 256; /*0x4d696f*/
    v170.ComPtr_field_0x20 = *(_DWORD *)v168; /*0x4d6984*/
    v141 = BYTE1(*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v166) + 80)) & 1; /*0x4d69a2*/
    v135 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 47))(this); /*0x4d69a8*/
    v136 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&v170.ComPtr_field_0x1C, v75, v135); /*0x4d69ba*/
    v137 = (*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 33))(this, v136); /*0x4d69c4*/
    *(_DWORD *)v166 = *LayerClass::Pathfinding_Find( /*0x4d69ea*/
                         &stru_87F5F0.__pad_58[416],
                         (int)&v179,
                         &v179,
                         v166,
                         *(_DWORD *)(v137 + 1660),
                         0,
                         v75,
                         v141,
                         1,
                         1,
                         0,
                         1,
                         0,
                         0,
                         (__int16 *)&v170.ComPtr_field_0x1C,
                         0,
                         0);
    if ( a2 ) /*0x4d69f3*/
      goto LABEL_155; /*0x4d69f3*/
    (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x4d69fb*/
    if ( *(_DWORD *)v166 == g_FootClass_Pool ) /*0x4d6a0d*/
    {
      (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x4d6a4c*/
LABEL_155:
      ComPtr_field_0x04 = v170.ComPtr_field_0x04; /*0x4d6a52*/
      v27 = v170.ComPtr_field_0x04 == 0; /*0x4d6a56*/
    }
    else
    {
      v138 = (void (__thiscall **)(FootClass *, void *, int))this->TechnoClass; /*0x4d6a1d*/
      v139 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v166); /*0x4d6a2b*/
      v138[288](this, v139, 1); /*0x4d6a33*/
      ComPtr_field_0x04 = v170.ComPtr_field_0x04; /*0x4d6a39*/
      v27 = v170.ComPtr_field_0x04 == 0; /*0x4d6a3d*/
    }
LABEL_54:
    if ( !v27 ) /*0x4d5a3a*/
      (*(void (__stdcall **)(int))(*(_DWORD *)ComPtr_field_0x04 + 8))(ComPtr_field_0x04); /*0x4d5a3f*/
    return 0; /*0x4d5a42*/
  }
}


// ==== 0x004D6AA0  FootClass::FindAITarget  this=FootClass  sig=csp ====
int __fastcall FootClass::FindAITarget(FootClass *this)
{
  int result; // eax
  char *MissionControl; // eax
  AbstractClass **v4; // eax
  AbstractClass *v5; // ecx
  AbstractClass *focus; // ecx
  _DWORD *v7; // eax
  CellClass *v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  AbstractClass *v13; // ecx
  _DWORD *v14; // eax
  int TileIndex; // eax
  void *v16; // eax
  BuildingClass *slaveManager; // ecx
  CellClass *v18; // eax
  int *v19; // edi
  AbstractClass *target; // ecx
  int v21; // eax
  int v22; // edi
  AbstractClass *v23; // eax
  void (__thiscall **vtable0)(FootClass *, int); // edi
  int v25; // eax
  int v26; // ebp
  _WORD *v27; // eax
  __int16 v28; // cx
  Cell *v29; // eax
  _DWORD *v30; // eax
  _DWORD *v31; // edi
  int v32; // ebx
  void (__thiscall **v33)(FootClass *, int, _DWORD); // eax
  double v34; // st7
  int v35; // eax
  int v36; // ebp
  int v37; // ebp
  int *v38; // eax
  int v39; // edi
  int v40; // ebx
  int *v41; // eax
  int v42; // ecx
  int v43; // eax
  __int64 v44; // [esp+68h] [ebp-38h] BYREF
  __int16 v45[2]; // [esp+70h] [ebp-30h] BYREF
  __int16 v46[2]; // [esp+74h] [ebp-2Ch] BYREF
  __int16 v47[2]; // [esp+78h] [ebp-28h] BYREF
  int v48; // [esp+7Ch] [ebp-24h] BYREF
  int v49; // [esp+80h] [ebp-20h]
  int v50; // [esp+84h] [ebp-1Ch]
  char v51[12]; // [esp+88h] [ebp-18h] BYREF
  char v52[12]; // [esp+94h] [ebp-Ch] BYREF

  if ( this->? ) /*0x4d6aab*/
  {
    (*((void (__thiscall **)(FootClass *, int, int))this->TechnoClass + 122))(this, 5, 1); /*0x4d6ab9*/
    return 1; /*0x4d6acb*/
  }
  if ( this->shouldEnterAbsorber ) /*0x4d6acc*/
  {
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 208))(this); /*0x4d6ad8*/
LABEL_9:
    MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4d6b06*/
    LOWORD(result) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d6b16*/
    return result; /*0x4d6b22*/
  }
  if ( this->shouldEnterOccupiable ) /*0x4d6ae0*/
  {
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 210))(this); /*0x4d6aec*/
    goto LABEL_9; /*0x4d6af2*/
  }
  if ( this->shouldGarrisonStructure ) /*0x4d6af4*/
  {
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 211))(this); /*0x4d6b00*/
    goto LABEL_9; /*0x4d6b00*/
  }
  if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->?) /*0x4d6b3a*/
    && *(int *)&this->__pad_5B0[12] > 0
    && !this->movementDestination )
  {
    v4 = *(AbstractClass ***)this->__pad_5B0; /*0x4d6b42*/
    v5 = *v4; /*0x4d6b4e*/
    if ( *v4 == this->? ) /*0x4d6b52*/
    {
      *(_DWORD *)v45 = *v4; /*0x4d6b58*/
      if ( v5 ) /*0x4d6b5c*/
      {
        (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, v5, 1); /*0x4d6b65*/
        DynamicVector::RemoveItem((DynamicVector *)this->FootClass_field_abstract_array_5AC, 0); /*0x4d6b74*/
        if ( this->FootClass_field_bool_6B1 ) /*0x4d6b79*/
          VectorClass::AppendCopy((VectorClass *)this->FootClass_field_abstract_array_5AC, v45); /*0x4d6b88*/
      }
    }
  }
  focus = this->?; /*0x4d6b8d*/
  if ( focus ) /*0x4d6b95*/
  {
    if ( (*((int (__thiscall **)(AbstractClass *))focus->vtable0 + 11))(focus) == 11 ) /*0x4d6ba3*/
    {
      v7 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, int *))this->?->TechnoClass::vtable0 + 18))(this->?, &v48); /*0x4d6bb6*/
      v8 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v7); /*0x4d6bbf*/
      v9 = Cell::IsBridge((Cell *)v8); /*0x4d6bc6*/
      if ( v9 ) /*0x4d6bcd*/
      {
        if ( (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->?, (#375 *)v9[135]) /*0x4d6c12*/
          && !(unsigned __int8)House::IsCurrentPlayer((House *)this->?)
          && ((*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) != 1
           || !*(_BYTE *)(this->q1B1 + 3598)) )
        {
          HIDWORD(v44) = 0; /*0x4d6c24*/
          v10 = this->?[0]; /*0x4d6c35*/
          v11 = this->?[1]; /*0x4d6c39*/
          v50 = this->?[2]; /*0x4d6c3f*/
          LOWORD(v44) = v10 / 256; /*0x4d6c4f*/
          v12 = v11; /*0x4d6c56*/
          v13 = this->?; /*0x4d6c5d*/
          *(_DWORD *)((char *)&v44 + 2) = (unsigned __int16)(v12 / 256); /*0x4d6c68*/
          *(_DWORD *)v46 = v44; /*0x4d6c71*/
          v14 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, char *))v13->vtable0 + 18))(v13, v51); /*0x4d6c7c*/
          LOWORD(v44) = *v14 / 256; /*0x4d6c91*/
          WORD1(v44) = v14[1] / 256; /*0x4d6cb0*/
          *(_DWORD *)v47 = v44; /*0x4d6cc0*/
          TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v46, 0, 0); /*0x4d6ccb*/
          *(_DWORD *)v45 = *LayerClass::Pathfinding_Find( /*0x4d6cef*/
                              &stru_87F5F0.__pad_58[416],
                              (int)&v48,
                              &v48,
                              v47,
                              1,
                              TileIndex,
                              0,
                              0,
                              1,
                              1,
                              0,
                              0,
                              0,
                              1,
                              (__int16 *)&v44 + 2,
                              0,
                              0);
          if ( *(_DWORD *)v45 != g_FootClass_Pool ) /*0x4d6cf3*/
          {
            v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45); /*0x4d6d0d*/
            TechnoClass::SetFocus((TechnoClass *)this, (int)v16); /*0x4d6d15*/
          }
        }
      }
    }
  }
  if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 1 /*0x4d6d2c*/
    && *(_BYTE *)(this->q1B1 + 3598) )
  {
    (*((void (__thiscall **)(FootClass *, int, _DWORD))this->TechnoClass + 122))(this, 10, 0); /*0x4d6d3b*/
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 123))(this); /*0x4d6d45*/
    return Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 10) + 1; /*0x4d6d68*/
  }
  slaveManager = (BuildingClass *)this->?; /*0x4d6d69*/
  if ( slaveManager ) /*0x4d6d71*/
    BuildingClass::InitBuildLimit(slaveManager); /*0x4d6d73*/
  if ( !this->? && this->? == -1 ) /*0x4d6d87*/
  {
    v48 = this->?[0]; /*0x4d6d95*/
    v49 = this->?[1]; /*0x4d6da1*/
    v50 = this->?[2]; /*0x4d6dad*/
    v18 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v48); /*0x4d6db1*/
    TechnoClass::SetFocus((TechnoClass *)this, (int)v18); /*0x4d6db9*/
  }
  if ( this )
    v19 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15 ? (int *)this : 0;
  else
    v19 = 0; /*0x4d6dc2*/
  if ( !(unsigned __int8)House::IsCurrentPlayer((House *)this->?) /*0x4d6e15*/
    && v19
    && (*(_BYTE *)(v19[432] + 3778) || (unsigned __int8)TechnoTypeClass::HasVoiceResponse(v19, 14))
    && (*((int (__thiscall **)(FootClass *))this->TechnoClass + 97))(this) != 17 )
  {
    target = this->?; /*0x4d6e17*/
    if ( target ) /*0x4d6e1f*/
    {
      if ( (*((int (__thiscall **)(AbstractClass *))target->vtable0 + 11))(target) == 6 ) /*0x4d6e29*/
      {
        (*((void (__thiscall **)(FootClass *, int, _DWORD))this->TechnoClass + 122))(this, 17, 0); /*0x4d6e32*/
        return 1; /*0x4d6e44*/
      }
    }
  }
  *(_DWORD *)v47 = (*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 199))(this, 1); /*0x4d6e51*/
  LOWORD(v21) = Math::RoundToInt((double)*(int *)v47 * 1.1); /*0x4d6e5f*/
  v22 = v21; /*0x4d6e64*/
  v23 = this->?; /*0x4d6e66*/
  if ( v23 ) /*0x4d6e6e*/
  {
    if ( (v23->abstractFlags & 4) != 0 ) /*0x4d6e81*/
      v22 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5924); /*0x4d6e89*/
    if ( !this->unknownBool68D /*0x4d6eb1*/
      && !this->movementDestination
      && ObjectClass::DistanceTo((ObjectClass *)this, (int)v23) > v22 )
    {
      (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x4d6eb8*/
      (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, this->?, 1); /*0x4d6ecb*/
    }
    if ( this->? ) /*0x4d6ed1*/
    {
      (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 335))(this, 0); /*0x4d6f32*/
    }
    else
    {
      if ( FootClass::CanEnterBuilding(this) && FootClass::updateThreat(this) ) /*0x4d6ee6*/
      {
        vtable0 = (void (__thiscall **)(FootClass *, int))this->TechnoClass; /*0x4d6ef5*/
        v25 = (*((int (__thiscall **)(AbstractClass *, char *, int))this->?->TechnoClass::vtable0 + 18))( /*0x4d6f00*/
                this->?,
                v51,
                2);
        vtable0[231](this, v25); /*0x4d6f06*/
      }
      if ( this->? ) /*0x4d6f0c*/
        return 1; /*0x4d6f20*/
      (*((void (__thiscall **)(FootClass *))this->TechnoClass + 286))(this); /*0x4d6f25*/
    }
  }
  if ( !this->? /*0x4d6f6c*/
    && *(_DWORD *)(*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 254))(this, 1)
    && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 254))(this, 1)
                            + 172)
                + 344) )
  {
    v26 = 0; /*0x4d6f78*/
    while ( 1 ) /*0x4d6f83*/
    {
      v27 = (_WORD *)(*((int (__thiscall **)(FootClass *, int *))this->TechnoClass + 110))(this, &v48); /*0x4d6f83*/
      v28 = v27[1] + HIWORD(g_DDrawSurfaceManager.scenario[(v26 & 7) + 82]); /*0x4d6f9f*/
      v45[0] = LOWORD(g_DDrawSurfaceManager.scenario[(v26 & 7) + 82]) + *v27; /*0x4d6fa7*/
      v45[1] = v28; /*0x4d6fad*/
      *(_DWORD *)v47 = *(_DWORD *)v45; /*0x4d6fbb*/
      v29 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v47); /*0x4d6fbf*/
      v30 = Cell::IsBridge(v29); /*0x4d6fc6*/
      v31 = v30; /*0x4d6fcb*/
      if ( v30 ) /*0x4d6fcf*/
      {
        if ( *(_BYTE *)(v30[328] + 5493) ) /*0x4d6fd7*/
        {
          v32 = (*(int (__thiscall **)(_DWORD *))(*v30 + 60))(v30); /*0x4d6fe8*/
          if ( v32 == (*((int (__thiscall **)(FootClass *))this->TechnoClass + 15))(this) ) /*0x4d6ff3*/
            break; /*0x4d6ff3*/
        }
      }
      if ( ++v26 >= 8 ) /*0x4d6ff9*/
        goto LABEL_71; /*0x4d6ff9*/
    }
    if ( v31 ) /*0x4d7003*/
    {
      (*((void (__thiscall **)(FootClass *, _DWORD *))this->TechnoClass + 242))(this, v31); /*0x4d700a*/
      v33 = (void (__thiscall **)(FootClass *, int, _DWORD))this->TechnoClass; /*0x4d7010*/
      this->FootClass_field_bool_68E = 1; /*0x4d7018*/
      v33[122](this, 1, 0); /*0x4d701f*/
    }
  }
LABEL_71:
  v34 = *((double *)MissionClass::GetMissionControl((MissionClass *)this) + 2) * 900.0; /*0x4d7025*/
  LOWORD(v35) = Math::RoundToInt(v34); /*0x4d7035*/
  v36 = v35; /*0x4d703e*/
  if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 2 ) /*0x4d7046*/
    v36 *= 2; /*0x4d7048*/
  v37 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 5) + v36; /*0x4d705e*/
  if ( this->?
    && (this
     && (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15
     && *((_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15
                  ? this + 1
                  : (FootClass *)1728)->TechnoClass
        + 1685)
     || *(_DWORD *)(*((int (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 254))(this, 0)
     && *(int *)(*(_DWORD *)(*((int (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 254))(this, 0) + 180) <= 512) )
  {
    v38 = (int *)(*((int (__thiscall **)(AbstractClass *, char *))this->?->TechnoClass::vtable0 + 18))(this->?, v51); /*0x4d70e0*/
    v39 = *v38; /*0x4d70e3*/
    v40 = v38[1]; /*0x4d70e5*/
    v41 = (int *)(*((int (__thiscall **)(FootClass *, char *))this->TechnoClass + 18))(this, v52); /*0x4d70f1*/
    v42 = *v41; /*0x4d70f4*/
    v49 = v41[1] - v40; /*0x4d70fd*/
    v48 = v42 - v39; /*0x4d7101*/
    Math::Sqrt((double)(v42 - v39) * (double)(v42 - v39) + (double)v49 * (double)v49); /*0x4d7121*/
    LOWORD(v43) = Math::RoundToInt(v34); /*0x4d7129*/
    *(_DWORD *)v47 = v43; /*0x4d7133*/
    if ( v43 <= 768 && (double)*(int *)v47 >= 281.6 ) /*0x4d7148*/
      v37 /= 6; /*0x4d7158*/
  }
  return v37; /*0x4d6abf*/
}



// ==== 0x004D7170  FootClass::DispatchInput  this=FootClass  sig=csp ====
char __thiscall FootClass_DispatchInput(double *this, int a2, int a3)
{
  int v4; // edx
  int v5; // ebx
  int v6; // edi
  int v7; // ecx
  __int16 v8; // ax
  _BYTE *v9; // eax
  int v10; // eax
  int v11; // edx

  if ( !(unsigned __int8)TechnoClass::FinishDeploy(a2, a3) ) /*0x4d717f*/
    return 0; /*0x4d7324*/
  if ( !this->Locomotor ) /*0x4d718c*/
    WinAPI::Wrapper(-2147467261); /*0x4d719b*/
  (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 80))(this->Locomotor); /*0x4d71a9*/
  if ( !HouseClass::IonSensitivesShouldBeOffline() ) /*0x4d71b2*/
    goto LABEL_26; /*0x4d71b2*/
  if ( !this->Locomotor ) /*0x4d71bb*/
    WinAPI::Wrapper(-2147467261); /*0x4d71ca*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 100))(this->Locomotor) ) /*0x4d71d8*/
  {
    if ( !this->Locomotor ) /*0x4d71df*/
      WinAPI::Wrapper(-2147467261); /*0x4d71ee*/
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 92))(this->Locomotor); /*0x4d71fc*/
  }
  else
  {
LABEL_26:
    if ( !this->Locomotor ) /*0x4d7201*/
      WinAPI::Wrapper(-2147467261); /*0x4d7210*/
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 88))(this->Locomotor); /*0x4d721e*/
  }
  (*(void (__thiscall **)(double *, _DWORD))(this->q198)(this, this->owner); /*0x4d722f*/
  v4 = *(_DWORD *)this; /*0x4d7235*/
  this->q178 = -1; /*0x4d723e*/
  v5 = *(_DWORD *)(*(int (__thiscall **)(double *, int *))(v4 + 440))(this, &a3); /*0x4d724e*/
  v6 = 0; /*0x4d7250*/
  a3 = v5; /*0x4d7252*/
  do /*0x4d72ac*/
  {
    v7 = v6 & 7; /*0x4d725d*/
    v8 = HIWORD(Direction_X_Offsets[v7]); /*0x4d7272*/
    LOWORD(a3) = v5 + LOWORD(Direction_X_Offsets[v7]); /*0x4d7276*/
    HIWORD(a3) = HIWORD(v5) + v8; /*0x4d7282*/
    a2 = a3; /*0x4d728b*/
    v9 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2); /*0x4d7295*/
    ++v6; /*0x4d72a2*/
    ++v9[290]; /*0x4d72a6*/
  }
  while ( v6 < 8 ); /*0x4d72ac*/
  if ( (*(unsigned __int8 (__thiscall **)(double *))(this->q054)(this) ) /*0x4d72b2*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(double *))(this->hasParachute)(this) + 3478) ) /*0x4d72cb*/
      GadgetGrid::InsertItem(g_CellClassManager, (int)this); /*0x4d72db*/
  }
  else
  {
    this->FootClass_field_55C = v5; /*0x4d72b9*/
  }
  v10 = (*(int (__thiscall **)(double *))(this->hasParachute)(this); /*0x4d72e4*/
  v11 = *(_DWORD *)this; /*0x4d72f0*/
  this->chronoLockRemaining = *(double *)(v10 + 752); /*0x4d72f4*/
  if ( *(_DWORD *)((*(int (__thiscall **)(double *))(v11 + 132))(this) + 1520) ) /*0x4d7300*/
    (*(void (__thiscall **)(double *, int))(*(_DWORD *)this + 1256))(this, g_FootClass_Pool); /*0x4d7318*/
  return 1; /*0x4d7320*/
}



// ==== 0x004D7330  FootClass::ProcessDeploy  this=FootClass  sig=csp ====
int __thiscall FootClass::ProcessDeploy(
        FootClass *this,
        int a2,
        double a3,
        int *a4,
        int a5,
        int a6,
        void *a7,
        char a8,
        __int64 a9)
{
  int v9; // edi
  int *parasiteEatingMe; // ecx
  int v12; // ecx
  _DWORD *v13; // edx
  int v14; // edx
  _DWORD *v15; // edx
  int result; // eax
  int v17; // edi
  int team; // ecx
  int v19; // eax
  BuildingClass *v20; // [esp+0h] [ebp-1Ch]
  char v21; // [esp+4h] [ebp-18h]
  __int64 v22; // [esp+8h] [ebp-14h]
  int v23; // [esp+14h] [ebp-8h]

  if ( HIDWORD(a3) ) /*0x4d7343*/
  {
    if ( *(_BYTE *)(HIDWORD(a3) + 331) ) /*0x4d7345*/
    {
      if ( this->parasiteEatingMe ) /*0x4d734f*/
      {
        BuildingClass::Deploy(v20, SHIDWORD(a3), v9); /*0x4d735f*/
        if ( a4 ) /*0x4d7366*/
          (*(void (__thiscall **)(int *, _DWORD))(*a4 + 968))(a4, 0); /*0x4d736e*/
      }
    }
  }
  parasiteEatingMe = (int *)this->parasiteEatingMe; /*0x4d7374*/
  if ( parasiteEatingMe /*0x4d7398*/
    && a4 != parasiteEatingMe
    && *(_DWORD *)a2 > *(_DWORD *)((*(int (__thiscall **)(int *))(*parasiteEatingMe + 132))(parasiteEatingMe) + 3436) )
  {
    v12 = 2 * *(_DWORD *)a2 /*0x4d73b7*/
        - *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)this->parasiteEatingMe + 132))(this->parasiteEatingMe)
                    + 3436);
    v13 = (_DWORD *)(*(_DWORD *)(this->parasiteEatingMe + 1692) + 44); /*0x4d73c5*/
    *v13 = dword_A8ED84; /*0x4d73c8*/
    v13[1] = v23; /*0x4d73ce*/
    v13[2] = v12; /*0x4d73d1*/
  }
  v14 = this->parasiteEatingMe; /*0x4d73d4*/
  if ( v14 && *(int *)a2 < 0 ) /*0x4d73e1*/
  {
    v15 = (_DWORD *)(*(_DWORD *)(v14 + 1692) + 44); /*0x4d73ee*/
    *v15 = dword_A8ED84; /*0x4d73f6*/
    v15[1] = v23; /*0x4d73fc*/
    v15[2] = 50; /*0x4d73ff*/
    BuildingClass::Deploy(v20, SHIDWORD(a3), a2); /*0x4d740e*/
  }
  TechnoClass::ReceiveDamage_Shield( /*0x4d742c*/
    this,
    COERCE_DOUBLE(__PAIR64__(LODWORD(a3), a2)),
    COERCE_DOUBLE(__PAIR64__((unsigned int)a4, HIDWORD(a3))),
    (int *)a5,
    a6,
    a7,
    v20,
    v21,
    v22);
  v17 = result; /*0x4d7431*/
  if ( result != 5 ) /*0x4d7436*/
  {
    if ( result ) /*0x4d7444*/
    {
      team = this->team; /*0x4d7446*/
      if ( team ) /*0x4d744e*/
      {
        FootClass::LinkToTransporter(team, (int)this, result, a4); /*0x4d7453*/
        return v17; /*0x4d7461*/
      }
    }
    if ( result == 4 || !result ) /*0x4d746b*/
      return v17; /*0x4d746b*/
    v19 = this->team; /*0x4d746d*/
    if ( v19 /*0x4d748a*/
      && *(_BYTE *)(*(_DWORD *)(v19 + 36) + 172)
      && !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner) )
    {
      if ( !a4 ) /*0x4d7495*/
        return v17; /*0x4d74cd*/
      TechnoClass::EvaluateMission(this, (int)a4); /*0x4d749a*/
    }
    if ( a4 && MissionClass::GetMissionControl(this)[4] && !MissionClass::GetMissionControl(this)[5] ) /*0x4d74b8*/
      (*(void (__thiscall **)(FootClass *, _DWORD, int))(this->vtable0 + 1156))(this, 0, 1); /*0x4d74c7*/
    return v17; /*0x4d74c7*/
  }
  return result; /*0x4d7438*/
}



// ==== 0x004D74E0  FootClass::ValidateMove  this=FootClass  sig=csp ====
int __thiscall FootClass::ValidateMove(FootClass *this, int a2, int *a3, char a4)
{
  int result; // eax
  _BYTE *WaypointCoords; // eax
  _DWORD *v7; // eax
  int v8; // edx
  _DWORD *v9; // eax
  int GroundHeight; // eax
  int v11; // edi
  _DWORD *v12; // eax
  char IsWithinUsableArea; // al
  int (__thiscall **vtable0)(FootClass *, int *, _DWORD); // edx
  _DWORD *v15; // eax
  char IsPassable; // bl
  bool v17; // cl
  bool v18; // dl
  int v19; // eax
  __int16 *v20; // ecx
  char v21; // bp
  _DWORD *v22; // eax
  int v23; // eax
  int *v24; // edi
  void *v25; // eax
  _DWORD *v26; // eax
  int *v27; // eax
  int v28; // eax
  bool v29; // al
  int TileIndex; // [esp-2Ah] [ebp-138h]
  char v31; // [esp-22h] [ebp-130h]
  char v32; // [esp-22h] [ebp-130h]
  char v33; // [esp-Eh] [ebp-11Ch]
  char v34; // [esp+19h] [ebp-F5h]
  int v35; // [esp+1Ah] [ebp-F4h] BYREF
  __int16 v36[3]; // [esp+1Eh] [ebp-F0h] BYREF
  char v37; // [esp+25h] [ebp-E9h]
  char v38[4]; // [esp+26h] [ebp-E8h] BYREF
  int *v39; // [esp+2Ah] [ebp-E4h]
  int v40; // [esp+2Eh] [ebp-E0h] BYREF
  int v41; // [esp+32h] [ebp-DCh] BYREF
  _DWORD v42[2]; // [esp+36h] [ebp-D8h] BYREF
  int v43; // [esp+3Eh] [ebp-D0h]
  __int16 v44[2]; // [esp+42h] [ebp-CCh] BYREF
  _DWORD v45[2]; // [esp+46h] [ebp-C8h] BYREF
  int v46; // [esp+4Eh] [ebp-C0h]
  int v47; // [esp+52h] [ebp-BCh] BYREF
  int v48; // [esp+56h] [ebp-B8h] BYREF
  ScriptAction v49; // [esp+5Ah] [ebp-B4h] BYREF

  if ( this->?
    || this->?
    && (result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this), !*(_BYTE *)(result + 1682)) )
  {
LABEL_31:
    LOBYTE(result) = 0; /*0x4d77ec*/
  }
  else
  {
    result = a2 - 1; /*0x4d7521*/
    switch ( a2 )
    {
      case 1:
      case 62:
        goto LABEL_32;
      case 2:
        v7 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(*a3 + 72))(a3, &v49.__pad_1C[4]); /*0x4d77c6*/
        if ( (unsigned __int8)Cell::IsPassable(v7) ) /*0x4d77cf*/
        {
          result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this); /*0x4d77dc*/
          if ( !*(_BYTE *)(result + 3213) ) /*0x4d77e2*/
            goto LABEL_31; /*0x4d77ea*/
        }
LABEL_32:
        result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 40))(this); /*0x4d77fb*/
        if ( !(_BYTE)result ) /*0x4d7807*/
          goto LABEL_31; /*0x4d7807*/
        v8 = *a3; /*0x4d7809*/
        v39 = a3; /*0x4d7812*/
        v9 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(v8 + 72))(a3, v49.ScriptAction_field_0x8); /*0x4d7816*/
        v42[0] = *v9; /*0x4d781b*/
        v42[1] = v9[1]; /*0x4d7827*/
        v43 = v9[2]; /*0x4d7833*/
        GroundHeight = Cell::GetGroundHeight(v42); /*0x4d7837*/
        if ( v43 <= GroundHeight ) /*0x4d7840*/
          v43 = Cell::GetGroundHeight(v42); /*0x4d7851*/
        if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3372) /*0x4d7883*/
          && !*(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6127)
          || (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 2 )
        {
          result = Cell::IsPassable(v42); /*0x4d788f*/
          if ( (_BYTE)result ) /*0x4d7896*/
            goto LABEL_83; /*0x4d7896*/
        }
        v11 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1460); /*0x4d78a6*/
        v12 = (_DWORD *)(*(int (__thiscall **)(int *, char *, _DWORD))(*a3 + 76))(a3, &v49.__pad_34[4], 0); /*0x4d78ba*/
        v36[0] = *v12 / 256; /*0x4d78cf*/
        v36[1] = v12[1] / 256; /*0x4d78e8*/
        v35 = *(_DWORD *)v36; /*0x4d78f5*/
        IsWithinUsableArea = LayerClass::IsWithinUsableArea( /*0x4d78fa*/
                               (LayerClass *)&stru_87F5F0.__pad_58[416],
                               (__int16 *)&v35,
                               1);
        vtable0 = (int (__thiscall **)(FootClass *, int *, _DWORD))this->TechnoClass; /*0x4d78ff*/
        v37 = IsWithinUsableArea; /*0x4d7901*/
        v15 = (_DWORD *)vtable0[19](this, &v49.ScriptAction_field_0x14, 0); /*0x4d790e*/
        *(_DWORD *)v36 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v15); /*0x4d791f*/
        if ( v11 == 6 ) /*0x4d7923*/
        {
          v11 = 0; /*0x4d7925*/
        }
        else if ( v11 == 9 ) /*0x4d792c*/
        {
          v11 = 7; /*0x4d792e*/
        }
        if ( (*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 21))(this) /*0x4d797d*/
          || *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3372)
          || (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15
          && *(_BYTE *)(this->q1B0 + 3476)
          || (v34 = 0, (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 2) )
        {
          v34 = 1; /*0x4d797f*/
        }
        v38[0] = (*((int (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 47))(this, 0); /*0x4d7995*/
        v46 = 0; /*0x4d79a9*/
        v45[1] = (SHIWORD(v35) << 8) + 128; /*0x4d79ad*/
        v45[0] = ((__int16)v35 << 8) + 128; /*0x4d79c3*/
        v46 = Cell::GetGroundHeight(v45); /*0x4d79d6*/
        IsPassable = Cell::IsPassable(v45); /*0x4d79df*/
        v17 = !a4 /*0x4d7a16*/
           && ((unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[20])
            || (unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[24]));
        if ( v34 && a2 == 2 ) /*0x4d7a2b*/
        {
          v18 = *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3372) /*0x4d7a53*/
             && (*((int (__thiscall **)(FootClass *))this->TechnoClass + 114))(this) < 0;
          v33 = v18; /*0x4d7a6b*/
          v40 = 0; /*0x4d7a7c*/
          v31 = BYTE1(*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v35) + 80)) /*0x4d7a99*/
              & 1;
          v19 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this); /*0x4d7a9f*/
          *(_DWORD *)v36 = *LayerClass::Pathfinding_Find( /*0x4d7acc*/
                              &stru_87F5F0.__pad_58[416],
                              (int)&v47,
                              &v47,
                              (__int16 *)&v35,
                              *(_DWORD *)(v19 + 1660),
                              -1,
                              v11,
                              v31,
                              1,
                              1,
                              0,
                              1,
                              v33,
                              1,
                              (__int16 *)&v40,
                              0,
                              0);
          if ( *(_DWORD *)v36 != g_FootClass_Pool ) /*0x4d7ad0*/
          {
            v20 = v36; /*0x4d7ae4*/
LABEL_71:
            v39 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20); /*0x4d7bf9*/
          }
        }
        else
        {
          v21 = v38[0]; /*0x4d7af1*/
          if ( !v37 /*0x4d7b51*/
            || !v34
            && (IsPassable
             || a2 == 2
             || v17 && (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15
             || (v22 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v35),
                 !MapSeed::CheckTileMatch(
                    (MapSeed *)&stru_87F5F0.__pad_58[416],
                    (__int16 *)(*(_DWORD *)v36 + 36),
                    (__int16 *)&v35,
                    v11,
                    v21,
                    BYTE1(v22[80]) & 1,
                    0))) )
          {
            v41 = 0; /*0x4d7b7e*/
            v32 = BYTE1(*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v35) + 80)) /*0x4d7ba0*/
                & 1;
            TileIndex = MapClass::GetTileIndex( /*0x4d7bb1*/
                          (MapClass *)&stru_87F5F0.__pad_58[416],
                          (__int16 *)(*(_DWORD *)v36 + 36),
                          v11,
                          v21);
            v23 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this); /*0x4d7bb4*/
            *(_DWORD *)v38 = *LayerClass::Pathfinding_Find( /*0x4d7be1*/
                                &stru_87F5F0.__pad_58[416],
                                (int)&v48,
                                &v48,
                                (__int16 *)&v35,
                                *(_DWORD *)(v23 + 1660),
                                TileIndex,
                                v11,
                                v32,
                                1,
                                1,
                                0,
                                1,
                                0,
                                1,
                                (__int16 *)&v41,
                                0,
                                0);
            if ( *(_DWORD *)v38 != g_FootClass_Pool ) /*0x4d7be5*/
            {
              v20 = (__int16 *)v38; /*0x4d7bf5*/
              goto LABEL_71; /*0x4d7bf5*/
            }
          }
        }
        result = (int)v39; /*0x4d7c08*/
        if ( v39 ) /*0x4d7c0e*/
        {
          v24 = v39; /*0x4d7c14*/
          v25 = 0; /*0x4d7c1f*/
          if ( v39 != a3 ) /*0x4d7c23*/
          {
            if ( a3 ) /*0x4d7c27*/
            {
              v26 = (_DWORD *)(*(int (__stdcall **)(char *))(*a3 + 72))(&v49.__pad_28[4]); /*0x4d7c33*/
              *(_WORD *)v38 = *v26 / 256; /*0x4d7c46*/
              *(_WORD *)&v38[2] = v26[1] / 256; /*0x4d7c5e*/
              *(_DWORD *)v44 = *(_DWORD *)v38; /*0x4d7c67*/
              v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v44); /*0x4d7c71*/
            }
          }
          result = (*((int (__thiscall **)(FootClass *, int, _DWORD, int *, void *))this->TechnoClass + 222))( /*0x4d7c7e*/
                     this,
                     2,
                     0,
                     v24,
                     v25);
        }
LABEL_83:
        LOBYTE(result) = 1; /*0x4d7cc0*/
        break; /*0x4d7cc3*/
      case 3:
        result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 40))(this); /*0x4d76ca*/
        if ( !(_BYTE)result ) /*0x4d76d2*/
          goto LABEL_31; /*0x4d76d2*/
        if ( !a3 ) /*0x4d76e1*/
          goto LABEL_31; /*0x4d76e1*/
        result = (int)AbstractClass::IsTechnoType((AbstractClass *)a3); /*0x4d76e9*/
        if ( !result ) /*0x4d76f0*/
          goto LABEL_31; /*0x4d76f0*/
        result = (*((int (__thiscall **)(FootClass *, int, _DWORD, int *, _DWORD))this->TechnoClass + 222))( /*0x4d7701*/
                   this,
                   7,
                   0,
                   a3,
                   0);
        LOBYTE(result) = 1; /*0x4d7707*/
        return result; /*0x4d7713*/
      case 4:
      case 52:
      case 56:
        result = (*((int (__thiscall **)(FootClass *, int, _DWORD, _DWORD, _DWORD))this->TechnoClass + 222))( /*0x4d75ed*/
                   this,
                   16,
                   0,
                   0,
                   0);
        LOBYTE(result) = 1; /*0x4d75f3*/
        return result; /*0x4d75ff*/
      case 5:
      case 53:
      case 63:
      case 64:
      case 71:
        result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 39))(this); /*0x4d76a3*/
        if ( !(_BYTE)result ) /*0x4d76ab*/
          goto LABEL_31; /*0x4d76ab*/
        result = (*((int (__thiscall **)(FootClass *, int, int *, _DWORD, _DWORD))this->TechnoClass + 222))( /*0x4d76c1*/
                   this,
                   1,
                   a3,
                   0,
                   0);
        goto LABEL_83; /*0x4d76c1*/
      case 9:
        result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 40))(this); /*0x4d771a*/
        if ( !(_BYTE)result ) /*0x4d7722*/
          goto LABEL_31; /*0x4d7722*/
        result = (*((int (__thiscall **)(FootClass *, int, _DWORD, int *, _DWORD))this->TechnoClass + 222))( /*0x4d773a*/
                   this,
                   8,
                   0,
                   a3,
                   0);
        LOBYTE(result) = 1; /*0x4d7740*/
        return result; /*0x4d774c*/
      case 11:
        result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 40))(this); /*0x4d7753*/
        if ( !(_BYTE)result ) /*0x4d775b*/
          goto LABEL_31; /*0x4d775b*/
        result = (*((int (__thiscall **)(FootClass *, int, _DWORD, int *, _DWORD))this->TechnoClass + 222))( /*0x4d7773*/
                   this,
                   9,
                   0,
                   a3,
                   0);
        LOBYTE(result) = 1; /*0x4d7779*/
        return result; /*0x4d7785*/
      case 16:
        result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 40))(this); /*0x4d778c*/
        if ( !(_BYTE)result ) /*0x4d7794*/
          goto LABEL_31; /*0x4d7794*/
        goto LABEL_12; /*0x4d7794*/
      case 26:
        result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 39))(this); /*0x4d7547*/
        if ( !(_BYTE)result ) /*0x4d754f*/
          goto LABEL_31; /*0x4d754f*/
        result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 40))(this); /*0x4d7559*/
        if ( !(_BYTE)result ) /*0x4d7561*/
          goto LABEL_31; /*0x4d7561*/
        if ( ((*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15 /*0x4d75aa*/
           && *(_BYTE *)(this->q1B0 + 3778)
           || (unsigned __int8)TechnoTypeClass::HasVoiceResponse((int *)this, 14))
          && (*(int (__thiscall **)(int *))(*a3 + 44))(a3) == 6
          && !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, (int)a3) )
        {
LABEL_12:
          result = (*((int (__thiscall **)(FootClass *, int, _DWORD, int *, _DWORD))this->TechnoClass + 222))( /*0x4d75b3*/
                     this,
                     17,
                     0,
                     a3,
                     0);
          LOBYTE(result) = 1; /*0x4d75c4*/
          return result; /*0x4d75d0*/
        }
        result = (*((int (__thiscall **)(FootClass *, int, int *, _DWORD, _DWORD))this->TechnoClass + 222))( /*0x4d75dc*/
                   this,
                   11,
                   a3,
                   0,
                   0);
        goto LABEL_83; /*0x4d75dc*/
      case 51:
      case 54:
        goto LABEL_31;
      case 55:
        WaypointCoords = ScriptAction::GetWaypointCoords(&v49, this); /*0x4d7607*/
        result = (int)EventClass::Add( /*0x4d762e*/
                        &v49.__pad_34[16],
                        *(_DWORD *)(this->?->BombClass_field_28 + 48),
                        0xAu,
                        *(_DWORD *)WaypointCoords,
                        WaypointCoords[4]);
        if ( (int)stru_A80220.lineTrailer >= 128 ) /*0x4d763d*/
          goto LABEL_83; /*0x4d763d*/
        qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, (const void *)result, 0x6Fu); /*0x4d765d*/
        dword_A83A54[dword_A802D0] = timeGetTime(); /*0x4d766e*/
        result = (int)++stru_A80220.lineTrailer; /*0x4d7684*/
        dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x4d768a*/
        LOBYTE(result) = 1; /*0x4d7690*/
        return result; /*0x4d769c*/
      case 59:
        v27 = (int *)(*((int (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 254))(this, 0); /*0x4d7c86*/
        v29 = 0; /*0x4d7ca0*/
        if ( v27 ) /*0x4d7c8e*/
        {
          v28 = *v27; /*0x4d7c90*/
          if ( v28 ) /*0x4d7c94*/
          {
            if ( *(int *)(v28 + 164) < 0 ) /*0x4d7c9e*/
              v29 = 1; /*0x4d7c8e*/
          }
        }
        result = (*((int (__thiscall **)(FootClass *, int, FootClass *, _DWORD, _DWORD))this->TechnoClass + 222))(
                   this,
                   v29 ? 11 : 5,
                   this,
                   0,
                   0);
        goto LABEL_83; /*0x4d7cba*/
      default:
        goto LABEL_83;
    }
  }
  return result; /*0x4d75c6*/
}



// ==== 0x004D7D50  ObjectClass::SpawnInfantry  this=FootClass  sig=csp ====
char __thiscall ObjectClass::SpawnInfantry(TechnoClass *this, int a2, __int16 *a3, __int16 *a4, void **a5)
{
  char result; // al
  __int16 *v7; // edi
  int referenceCount; // ebp
  void ***PlacementCell; // eax
  int v10; // edi
  void *v11; // eax
  int v12; // ebp
  void *v13; // eax
  int v14; // ebp
  void *v15; // eax
  int v16; // edx
  AnimClass *v17; // eax
  int v18; // eax
  int v19; // eax
  int vtable0; // edi
  void *v21; // eax
  int v22; // eax
  int v23; // ebp
  void *v24; // eax
  int v25; // ebp
  void *v26; // eax
  int v27; // ebp
  void *v28; // eax
  int v29; // ebp
  void *v30; // eax
  InfantryClass *v31; // eax
  int Type; // edi
  InfantryClass *v33; // eax
  char v34; // dl
  int v35; // edx
  __int16 v36; // cx
  void *v37; // [esp+0h] [ebp-28h]
  int v38; // [esp+4h] [ebp-24h]
  char v39; // [esp+8h] [ebp-20h]
  __int16 v40[2]; // [esp+10h] [ebp-18h] BYREF
  int v41; // [esp+14h] [ebp-14h] BYREF
  int v42; // [esp+18h] [ebp-10h] BYREF
  int v43[2]; // [esp+1Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+24h] [ebp-4h]

  if ( this->isBerserk[0] ) /*0x4d7d58*/
    return 0; /*0x4d7d64*/
  if ( this->rockerLinkedUnit && !*(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this) + 1682) ) /*0x4d7d81*/
    return 0; /*0x4d7d8d*/
  v7 = a3; /*0x4d7d9a*/
  referenceCount = (*(int (__thiscall **)(TechnoClass *, __int16 *, _DWORD, void **))(this->vtable0 + 112))( /*0x4d7db1*/
                     this,
                     a3,
                     0,
                     a5);
  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&dword_87F7E8, v7, 1) && referenceCount != 2 ) /*0x4d7dbf*/
    return 0; /*0x4d7dc1*/
  switch ( referenceCount ) /*0x4d7de0*/
  {
    case 1: /*0x4d7de0*/
    case 62: /*0x4d7de0*/
      if ( g_MoveFeedback ) /*0x4d7ebc*/
      {
        v16 = v7[1] << 8; /*0x4d7ed6*/
        v43[0] = (*v7 << 8) + 128; /*0x4d7ed9*/
        v43[1] = v16 + 128; /*0x4d7ee9*/
        GroundHeight = 0; /*0x4d7eed*/
        GroundHeight = Cell::GetGroundHeight(v43); /*0x4d7efe*/
        if ( (Coord::To_Cell((Coord *)&dword_87F7E8, v43)->flags & 0x100) != 0 ) /*0x4d7f16*/
          GroundHeight += dword_8B3DF4; /*0x4d7f24*/
        referenceCount = dword_A8B230[14].referenceCount; /*0x4d7f35*/
        if ( *(_DWORD *)&dword_A8B238 && *(_DWORD *)&dword_A8B238 != 5 ) /*0x4d7f40*/
        {
          dword_A8B230[14].referenceCount = -3; /*0x4d7f42*/
          *(_DWORD *)(dword_8871E0->Normal[6] + 832) = -5000; /*0x4d7f57*/
        }
        v17 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4d7f66*/
        if ( v17 ) /*0x4d7f70*/
          a5 = AnimClass::ctor(v17, (void *)dword_8871E0->Normal[6], v43, 0, 1, (void *)0x600, 0, 0); /*0x4d7f98*/
        else
          a5 = 0; /*0x4d7f9e*/
        if ( *(_DWORD *)&dword_A8B238 && *(_DWORD *)&dword_A8B238 != 5 ) /*0x4d7fb6*/
        {
          dword_A8B230[14].referenceCount = referenceCount; /*0x4d7fcb*/
          v18 = (*(int (__thiscall **)(_DWORD *, void ***))(dword_A8E9A8 + 16))(&dword_A8E9A8, &a5); /*0x4d7fd7*/
          if ( v18 != -1 && v18 < dword_A8E9B8 && v18 < --dword_A8E9B8 ) /*0x4d7ff2*/
          {
            do /*0x4d800a*/
            {
              ++v18; /*0x4d7ffa*/
              *((_DWORD *)dword_A8E9AC + v18 - 1) = *((_DWORD *)dword_A8E9AC + v18); /*0x4d7ffe*/
            }
            while ( v18 < dword_A8E9B8 ); /*0x4d800a*/
          }
          if ( dword_A83E10 < dword_A83E08 /*0x4d8042*/
            || (byte_A83E0D || !dword_A83E08)
            && dword_A83E14 > 0
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A83E00 + 8))(
                 &dword_A83E00,
                 dword_A83E14 + dword_A83E08,
                 0) )
          {
            v19 = dword_A83E10++; /*0x4d8055*/
            *((_DWORD *)dword_A83E04 + v19) = a5; /*0x4d8062*/
          }
        }
      }
      goto LABEL_38; /*0x4d8062*/
    case 2: /*0x4d7de0*/
LABEL_38:
      a5 = (void **)*ObjectClass::FindPlacementCell((ObjectClass *)&v42, referenceCount, v7, 0, v38, v39); /*0x4d8065*/
      if ( a5 == (void **)g_FootClass_Pool ) /*0x4d8081*/
        return 0; /*0x4d8081*/
      vtable0 = this->vtable0; /*0x4d8099*/
      v37 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, a4); /*0x4d80a6*/
      v21 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a5); /*0x4d80ac*/
LABEL_51:
      (*(void (__thiscall **)(TechnoClass *, int, _DWORD, void *, void *))(vtable0 + 888))(this, 2, 0, v21, v37); /*0x4d822a*/
LABEL_52:
      result = 1; /*0x4d8237*/
      break; /*0x4d8239*/
    case 3: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 160))(this) ) /*0x4d8155*/
        return 0; /*0x4d8155*/
      v27 = this->vtable0; /*0x4d815b*/
      v28 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v7); /*0x4d8165*/
      (*(void (__thiscall **)(TechnoClass *, int, _DWORD, void *, _DWORD))(v27 + 888))(this, 7, 0, v28, 0); /*0x4d8171*/
      return 1; /*0x4d817f*/
    case 5: /*0x4d7de0*/
    case 63: /*0x4d7de0*/
      v22 = ObjectClass::processDeath((ObjectClass *)v7); /*0x4d80b3*/
      if ( !v22 || *(_BYTE *)(v22 + 256) || *(int *)(v22 + 108) <= 0 ) /*0x4d80cb*/
      {
        v23 = this->vtable0; /*0x4d80e9*/
        v24 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v7); /*0x4d80f5*/
        (*(void (__thiscall **)(TechnoClass *, int, void *, _DWORD, _DWORD))(v23 + 888))(this, 1, v24, 0, 0); /*0x4d80ff*/
        return 1; /*0x4d8107*/
      }
      else
      {
        (*(void (__thiscall **)(TechnoClass *, int, int, _DWORD, _DWORD))(this->vtable0 + 888))(this, 1, v22, 0, 0); /*0x4d80d8*/
        return 1; /*0x4d80e0*/
      }
    case 6: /*0x4d7de0*/
      v14 = this->vtable0; /*0x4d7e8e*/
      v15 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v7); /*0x4d7e98*/
      (*(void (__thiscall **)(TechnoClass *, int, _DWORD, void *, _DWORD))(v14 + 888))(this, 10, 0, v15, 0); /*0x4d7ea4*/
      return 1; /*0x4d7eb2*/
    case 9: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 160))(this) ) /*0x4d811c*/
        return 0; /*0x4d811c*/
      v25 = this->vtable0; /*0x4d8122*/
      v26 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v7); /*0x4d812c*/
      (*(void (__thiscall **)(TechnoClass *, int, _DWORD, void *, _DWORD))(v25 + 888))(this, 8, 0, v26, 0); /*0x4d8138*/
      return 1; /*0x4d8146*/
    case 16: /*0x4d7de0*/
      v29 = this->vtable0; /*0x4d8182*/
      v30 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v7); /*0x4d818c*/
      (*(void (__thiscall **)(TechnoClass *, int, _DWORD, void *, _DWORD))(v29 + 888))(this, 17, 0, v30, 0); /*0x4d8198*/
      return 1; /*0x4d81a6*/
    case 26: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 156))(this) /*0x4d7e59*/
        && !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 816))(this)
        || !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 160))(this) )
      {
        return 0; /*0x4d7e61*/
      }
      v12 = this->vtable0; /*0x4d7e67*/
      v13 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v7); /*0x4d7e73*/
      (*(void (__thiscall **)(TechnoClass *, int, void *, _DWORD, _DWORD))(v12 + 888))(this, 11, v13, 0, 0); /*0x4d7e7d*/
      return 1; /*0x4d7e8b*/
    case 35: /*0x4d7de0*/
      v31 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v7); /*0x4d81af*/
      Type = InfantryClass::GetType(v31); /*0x4d81bb*/
      a3 = *(__int16 **)(Type + 40); /*0x4d81ca*/
      v33 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a3); /*0x4d81ce*/
      v34 = *(_DWORD *)(InfantryClass::GetType(v33) + 44) - 4; /*0x4d81e0*/
      a4 = *(__int16 **)(Type + 40); /*0x4d81e3*/
      v35 = v34 & 7; /*0x4d81e7*/
      v37 = 0; /*0x4d81ea*/
      v36 = (_WORD)a4 + LOWORD(dword_89F688[v35]); /*0x4d81fb*/
      vtable0 = this->vtable0; /*0x4d81fe*/
      LOWORD(v35) = HIWORD(dword_89F688[v35]); /*0x4d8200*/
      LOWORD(a5) = v36; /*0x4d8204*/
      HIWORD(a5) = HIWORD(a4) + v35; /*0x4d8213*/
      *(_DWORD *)v40 = a5; /*0x4d821c*/
      v21 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v40); /*0x4d8225*/
      goto LABEL_51; /*0x4d8225*/
    case 51: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 160))(this) ) /*0x4d7df3*/
        return 0; /*0x4d7df3*/
      PlacementCell = (void ***)ObjectClass::FindPlacementCell((ObjectClass *)&v41, referenceCount, v7, 0, v38, v39); /*0x4d7dff*/
      v10 = this->vtable0; /*0x4d7e06*/
      a5 = *PlacementCell; /*0x4d7e0c*/
      v11 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&a5); /*0x4d7e18*/
      (*(void (__thiscall **)(TechnoClass *, int, _DWORD, void *, _DWORD))(v10 + 888))(this, 25, 0, v11, 0); /*0x4d7e24*/
      return 1; /*0x4d7e32*/
    default:
      goto LABEL_52;
  }
  return result; /*0x4d7d62*/
}



// ==== 0x004D82B0  FootClass::ValidatePlacement  this=FootClass  sig=csp ====
char __userpurge FootClass::ValidatePlacement@<al>(FootClass *this, __int16 a2@<bx>, int a3@<ebp>, int a4, int a5)
{
  int v5; // ecx
  TechnoClass *v6; // esi
  void (__thiscall **vtable0)(TechnoClass *, int *, int, _DWORD); // edx
  int v8; // eax
  int *alignmentPadding154; // edi
  FootClass *v10; // ecx
  int v11; // eax
  FootClass *v12; // eax
  int spawnStatus; // eax
  int v14; // ecx
  int v15; // eax
  void *v17; // eax
  int Element; // eax
  int *v19; // eax
  _DWORD *v20; // eax
  int v21; // edi
  int v22; // ebx
  int *v23; // eax
  int v24; // kr0C_4
  int v25; // eax
  AbstractClass *focus; // edi
  FootClass *v27; // [esp+Ch] [ebp-2Ch]
  int v28; // [esp+10h] [ebp-28h]
  int v29; // [esp+14h] [ebp-24h]
  char v30; // [esp+18h] [ebp-20h]
  _DWORD v31[3]; // [esp+20h] [ebp-18h] BYREF
  _BYTE v32[12]; // [esp+2Ch] [ebp-Ch] BYREF

  v6 = (TechnoClass *)v5; /*0x4d82b5*/
  if ( *(_BYTE *)(v5 + 1715) ) /*0x4d82b8*/
    return 0; /*0x4d854e*/
  v28 = a4; /*0x4d82ce*/
  v27 = this; /*0x4d82cf*/
  *(_BYTE *)(v5 + 1715) = 1; /*0x4d82d2*/
  TechnoClass::CompleteFactoryProduction((TechnoClass *)v5, (int)v27, v28); /*0x4d82d9*/
  if ( HIBYTE(v6[1].firepowerMultiplier[1]) ) /*0x4d82de*/
  {
    vtable0 = (void (__thiscall **)(TechnoClass *, int *, int, _DWORD))v6->RadioClass; /*0x4d82e8*/
    HIBYTE(v6[1].firepowerMultiplier[1]) = 0; /*0x4d82f5*/
    vtable0[93](v6, &dword_8B3DA8, 1, 0); /*0x4d82fc*/
  }
  v8 = v6[1].alignmentPadding154[0]; /*0x4d8302*/
  alignmentPadding154 = v6[1].alignmentPadding154; /*0x4d8308*/
  LOBYTE(a2) = 0; /*0x4d830e*/
  v10 = 0; /*0x4d8310*/
  this = 0; /*0x4d8314*/
  if ( v8 ) /*0x4d8318*/
  {
    v11 = StreamClass::Set((StreamClass *)&this, v6[1].alignmentPadding154); /*0x4d831f*/
    if ( v11 < 0 && v11 != -2147467262 ) /*0x4d832d*/
      WinAPI::Wrapper(v11); /*0x4d8330*/
    v10 = this; /*0x4d8335*/
    if ( this ) /*0x4d833b*/
    {
      if ( (*((unsigned __int8 (__stdcall **)(FootClass *))this->TechnoClass + 5))(this) ) /*0x4d8340*/
      {
        if ( *alignmentPadding154 ) /*0x4d8347*/
          (*(void (__stdcall **)(int))(*(_DWORD *)*alignmentPadding154 + 8))(*alignmentPadding154); /*0x4d8350*/
        v12 = this; /*0x4d8353*/
        *alignmentPadding154 = 0; /*0x4d8357*/
        if ( !v12 ) /*0x4d835f*/
          WinAPI::Wrapper(-2147467261); /*0x4d8366*/
        (*((void (__stdcall **)(FootClass *, int *))v12->TechnoClass + 4))(v12, v6[1].alignmentPadding154); /*0x4d8373*/
        LOBYTE(a2) = 1; /*0x4d8376*/
      }
      v10 = this; /*0x4d8378*/
    }
  }
  if ( v6[1].? > 0 ) /*0x4d8384*/
  {
    (*((void (__thiscall **)(TechnoClass *, _DWORD, _DWORD))v6->RadioClass + 288))(v6, *(_DWORD *)v6[1].?, 0); /*0x4d8395*/
    spawnStatus = v6[1].?; /*0x4d839b*/
    if ( spawnStatus > 0 ) /*0x4d83a3*/
    {
      v14 = spawnStatus - 1; /*0x4d83a5*/
      v15 = 0; /*0x4d83a8*/
      for ( v6[1].? = v14; v15 < v6[1].?; *(_DWORD *)(v6[1].? + 4 * v15 - 4) = *(_DWORD *)(v6[1].? + 4 * v15) ) /*0x4d83b2*/
        ++v15; /*0x4d83ba*/
    }
    if ( this ) /*0x4d83d2*/
      (*((void (__stdcall **)(FootClass *))this->TechnoClass + 2))(this); /*0x4d83d7*/
    return 1; /*0x4d83e2*/
  }
  if ( v6->? != 25 || !v6->? ) /*0x4d83ee*/
  {
    v17 = v6[1].RadioClass; /*0x4d83f8*/
    if ( v17 != (void *)-1 ) /*0x4d8401*/
    {
      if ( (_BYTE)a4 ) /*0x4d8409*/
      {
        Element = Array::GetElement( /*0x4d8420*/
                    *(Array **)&dword_A83D4C->__pad_140[4 * (_DWORD)v17 + 208],
                    SBYTE2(v6[1].firepowerMultiplier[1]));
        v19 = (int *)VectorClass::GetAtChecked( /*0x4d8438*/
                       *(VectorClass **)&dword_A83D4C->__pad_140[4 * (int)v6[1].RadioClass + 208],
                       Element);
        BuildingClass::ValidateFoundation_0((int)v6, a2, a3, v19, v29, v30); /*0x4d8440*/
        v10 = this; /*0x4d8445*/
      }
    }
  }
  if ( !(_BYTE)a2 ) /*0x4d844b*/
  {
    if ( (*((int (__thiscall **)(TechnoClass *))v6->RadioClass + 11))(v6) == 15 ) /*0x4d846c*/
    {
      if ( v6->focus ) /*0x4d8472*/
      {
        if ( !v6->slaveOwner ) /*0x4d8480*/
        {
          v20 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD *))v6->RadioClass + 18))(v6, v31); /*0x4d8498*/
          v21 = *v20 / 256; /*0x4d84c5*/
          v22 = v20[1] / 256; /*0x4d84c8*/
          v23 = (int *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))v6->focus->vtable0 + 18))(v6->focus, v32); /*0x4d84cb*/
          v24 = *v23; /*0x4d84dc*/
          v25 = v23[1] / 256; /*0x4d84ee*/
          if ( (unsigned __int16)(v24 / 256) != (_WORD)v21 || (_WORD)v25 != (_WORD)v22 ) /*0x4d84f9*/
          {
            focus = v6->focus; /*0x4d8501*/
            if ( v6->? != 11 ) /*0x4d850a*/
            {
              (*((void (__thiscall **)(TechnoClass *, int, _DWORD))v6->RadioClass + 122))(v6, 2, 0); /*0x4d8514*/
              TechnoClass::SetFocus(v6, 0); /*0x4d851e*/
            }
            (*((void (__thiscall **)(TechnoClass *, AbstractClass *, int))v6->RadioClass + 288))(v6, focus, 1); /*0x4d852a*/
          }
        }
      }
    }
    (*((void (__thiscall **)(TechnoClass *, _DWORD, _DWORD))v6->RadioClass + 337))(v6, 0, 0); /*0x4d8538*/
    if ( this ) /*0x4d8544*/
      (*((void (__stdcall **)(FootClass *))this->TechnoClass + 2))(this); /*0x4d8549*/
    return 0; /*0x4d8549*/
  }
  if ( v10 ) /*0x4d844f*/
    (*((void (__stdcall **)(FootClass *))v10->TechnoClass + 2))(v10); /*0x4d8454*/
  return 1; /*0x4d83da*/
}



// ==== 0x004D8560  FootClass::GetCoords  this=FootClass  sig=csp ====
_DWORD *__thiscall FootClass::GetCoords(FootClass *this, _DWORD *a2)
{
  AbstractClass *FootClass_field_5A0; // ecx
  _DWORD *BridgeAwareCoords; // eax
  _BYTE v6[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 97))(this) != 1 /*0x4d8591*/
    && ((FootClass_field_5A0 = (AbstractClass *)this->FootClass_field_5A0) != 0
     || (FootClass_field_5A0 = this->movementDestination) != 0) )
  {
    BridgeAwareCoords = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))FootClass_field_5A0->vtable0 + 22))( /*0x4d8584*/
                                    FootClass_field_5A0,
                                    v6);
  }
  else
  {
    BridgeAwareCoords = (_DWORD *)BuildingClass::GetBridgeAwareCoords((TechnoClass *)this); /*0x4d85a6*/
  }
  *a2 = *BridgeAwareCoords; /*0x4d85b5*/
  a2[1] = BridgeAwareCoords[1]; /*0x4d85ba*/
  a2[2] = BridgeAwareCoords[2]; /*0x4d85c1*/
  return a2; /*0x4d85bd*/
}



// ==== 0x004D85D0  FootClass::UpdateAI  this=FootClass  sig=csp ====
char __userpurge FootClass::UpdateAI@<al>(FootClass *this, int a2@<ebp>, int a3@<edi>, double a4@<st0>, int a5)
{
  __int16 *v5; // ecx
  __int16 *v6; // esi
  int v7; // eax
  _WORD *v8; // edi
  __int16 *v9; // eax
  int v10; // ebp
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  int i; // ebp
  int v14; // eax
  __int16 v15; // dx
  _BYTE *v16; // eax
  int v17; // ebp
  int v18; // edx
  __int16 v19; // cx
  _BYTE *v20; // eax
  int v21; // ebp
  _WORD *v22; // eax
  int v23; // ecx
  __int16 v24; // dx
  Object *v25; // eax
  int ClosestObjectCell; // eax
  int *v27; // edi
  int v28; // eax
  _BYTE *v29; // edi
  char v30; // bl
  int v31; // ebp
  _DWORD *v32; // edi
  _DWORD *v33; // eax
  int v34; // ebx
  int v35; // ecx
  int v36; // edx
  int v37; // eax
  int v38; // eax
  int v39; // ebx
  int v40; // eax
  void *v41; // eax
  __int16 v42; // bx
  Cell *v43; // ebp
  TeamClass *v44; // edi
  int *v45; // eax
  int *v46; // eax
  int *v47; // eax
  int *v48; // eax
  int j; // ebp
  void *v50; // eax
  TeamClass *v51; // edi
  int *v52; // eax
  int k; // ebp
  void *v54; // eax
  TeamClass *v55; // edi
  int *v56; // eax
  void *v57; // eax
  FootClass *v58; // edi
  _DWORD *v59; // eax
  int v60; // edx
  __int16 *v61; // eax
  int v62; // ecx
  __int16 *v63; // eax
  _DWORD *v64; // eax
  _DWORD *v65; // eax
  _DWORD *v66; // edi
  int v67; // eax
  char result; // al
  __int16 *v69; // eax
  int v70; // eax
  int *Element; // eax
  __int16 v72; // dx
  int v73; // [esp+48h] [ebp-58h]
  int v74; // [esp+48h] [ebp-58h]
  int v75; // [esp+58h] [ebp-48h]
  int v76; // [esp+5Ch] [ebp-44h]
  int v77; // [esp+60h] [ebp-40h]
  char v78; // [esp+64h] [ebp-3Ch]
  __int16 v79[2]; // [esp+68h] [ebp-38h] BYREF
  int v80; // [esp+6Ch] [ebp-34h]
  __int16 v81[2]; // [esp+70h] [ebp-30h] BYREF
  __int16 v82[2]; // [esp+74h] [ebp-2Ch] BYREF
  _BYTE v83[4]; // [esp+78h] [ebp-28h] BYREF
  int v84; // [esp+7Ch] [ebp-24h] BYREF
  int v85; // [esp+80h] [ebp-20h]
  int v86; // [esp+84h] [ebp-1Ch]
  int v87; // [esp+88h] [ebp-18h] BYREF
  _BYTE v88[4]; // [esp+90h] [ebp-10h] BYREF
  _BYTE v89[4]; // [esp+94h] [ebp-Ch] BYREF
  _BYTE v90[4]; // [esp+98h] [ebp-8h] BYREF
  _BYTE v91[4]; // [esp+9Ch] [ebp-4h] BYREF

  v6 = v5; /*0x4d85dc*/
  if ( this == (FootClass *)2 ) /*0x4d85de*/
  {
    v7 = *(_DWORD *)v5; /*0x4d85e4*/
    *((_BYTE *)v5 + 1714) = 0; /*0x4d85e6*/
    *((_BYTE *)v5 + 1712) = 0; /*0x4d85ed*/
    if ( *(_DWORD *)((*(int (__usercall **)@<eax>(double@<st0>))(v7 + 132))(a4) + 1520) ) /*0x4d85fa*/
    {
      (*(void (__thiscall **)(__int16 *, _DWORD))(*(_DWORD *)v6 + 1260))(v6, *((_DWORD *)v6 + 343)); /*0x4d8611*/
      (*(void (__thiscall **)(__int16 *, int))(*(_DWORD *)v6 + 1256))(v6, g_FootClass_Pool); /*0x4d8621*/
    }
    v76 = a2; /*0x4d862e*/
    v75 = a3; /*0x4d862f*/
    v8 = v6 + 686; /*0x4d8630*/
    if ( v6[686] || v6[687] ) /*0x4d8638*/
    {
      v9 = (__int16 *)(*(int (__thiscall **)(__int16 *, __int16 *, int))(*(_DWORD *)v6 + 440))(v6, v82, v75); /*0x4d864b*/
      v10 = Cell::PosToLinearIndex(v9); /*0x4d8662*/
      if ( Cell::PosToLinearIndex(v6 + 686) != v10 ) /*0x4d866b*/
      {
        v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v6 + 686); /*0x4d8673*/
        FootClass::ApplyThreatBounds((FootClass *)v6, v11); /*0x4d867b*/
        v12 = (_DWORD *)(*(int (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 444))(v6); /*0x4d8684*/
        FootClass::SetThreatBounds((FootClass *)v6, v12); /*0x4d868d*/
      }
      for ( i = 0; i < 8; ++i ) /*0x4d8692*/
      {
        v14 = i & 7; /*0x4d8699*/
        v15 = v6[687] + HIWORD(g_DDrawSurfaceManager.scenario[v14 + 82]); /*0x4d86ac*/
        v81[0] = LOWORD(g_DDrawSurfaceManager.scenario[v14 + 82]) + *v8; /*0x4d86b7*/
        v81[1] = v15; /*0x4d86c0*/
        *(_DWORD *)v82 = *(_DWORD *)v81; /*0x4d86cf*/
        v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v82); /*0x4d86d3*/
        --v16[290]; /*0x4d86e4*/
      }
      v17 = 0; /*0x4d86fd*/
      *(_DWORD *)v8 = *(_DWORD *)(*(int (__thiscall **)(__int16 *, _BYTE *))(*(_DWORD *)v6 + 440))(v6, v83); /*0x4d86ff*/
      do /*0x4d8757*/
      {
        v18 = v17 & 7; /*0x4d8706*/
        v19 = LOWORD(g_DDrawSurfaceManager.scenario[v18 + 82]) + *v8; /*0x4d8709*/
        LOWORD(v18) = HIWORD(g_DDrawSurfaceManager.scenario[v18 + 82]); /*0x4d8718*/
        LOWORD(v80) = v19; /*0x4d8720*/
        HIWORD(v80) = v6[687] + v18; /*0x4d8733*/
        *(_DWORD *)v81 = v80; /*0x4d873c*/
        v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v81); /*0x4d8740*/
        ++v17; /*0x4d874d*/
        ++v20[290]; /*0x4d8751*/
      }
      while ( v17 < 8 ); /*0x4d8757*/
    }
    if ( *((_DWORD *)v6 + 136) == 2 ) /*0x4d8760*/
    {
      v21 = 0; /*0x4d8766*/
      while ( 1 ) /*0x4d8771*/
      {
        v22 = (_WORD *)(*(int (__thiscall **)(__int16 *, __int16 *))(*(_DWORD *)v6 + 440))(v6, v82); /*0x4d8771*/
        v23 = v21 & 7; /*0x4d877b*/
        v24 = g_DDrawSurfaceManager.scenario[v23 + 82]; /*0x4d877e*/
        LOWORD(v23) = v22[1] + HIWORD(g_DDrawSurfaceManager.scenario[v23 + 82]); /*0x4d8794*/
        LOWORD(v80) = *v22 + v24; /*0x4d8798*/
        HIWORD(v80) = v23; /*0x4d87a1*/
        *(_DWORD *)v81 = v80; /*0x4d87b0*/
        if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v81, 1) ) /*0x4d87b4*/
        {
          v84 = 0; /*0x4d87ce*/
          v85 = 0; /*0x4d87d2*/
          v25 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v81); /*0x4d87d6*/
          ClosestObjectCell = Object::FindClosestObjectCell(v25, &v84, 0, 0); /*0x4d87dd*/
          v27 = (int *)ClosestObjectCell; /*0x4d87e2*/
          if ( ClosestObjectCell ) /*0x4d87e6*/
          {
            if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse(*(Object **)(ClosestObjectCell + 540), (int)v6) /*0x4d8810*/
              && (*(_BYTE *)((*(int (__thiscall **)(int *))(*v27 + 132))(v27) + 3229)
               || (unsigned __int8)TechnoTypeClass::HasVoiceResponse(v27, 12)) )
            {
              break; /*0x4d8810*/
            }
          }
        }
        if ( ++v21 >= 8 ) /*0x4d881d*/
          goto LABEL_22; /*0x4d881d*/
      }
      (*(void (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 252))(v6); /*0x4d8829*/
    }
LABEL_22:
    v28 = (*(int (__thiscall **)(__int16 *, _DWORD, int))(*(_DWORD *)v6 + 740))(v6, *((_DWORD *)v6 + 173), v75); /*0x4d882f*/
    v29 = (_BYTE *)*((_DWORD *)v6 + 173); /*0x4d8840*/
    v30 = 0; /*0x4d8846*/
    v31 = v28; /*0x4d884a*/
    if ( v29 && (v29[20] & 4) != 0 ) /*0x4d8856*/
    {
      if ( *(_BYTE *)((*(int (__thiscall **)(__int16 *, int))(*(_DWORD *)v6 + 132))(v6, v76) + 1508) ) /*0x4d8866*/
      {
        v32 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v29 + 72))(v29, v88); /*0x4d8882*/
        v33 = (_DWORD *)(*(int (__thiscall **)(__int16 *, _BYTE *))(*(_DWORD *)v6 + 72))(v6, v90); /*0x4d888b*/
        v34 = v32[1]; /*0x4d8892*/
        v35 = *v33 - *v32; /*0x4d8895*/
        v36 = v33[1]; /*0x4d8897*/
        v37 = v33[2]; /*0x4d889a*/
        v85 = v35; /*0x4d889f*/
        v86 = v36 - v34; /*0x4d88a3*/
        v87 = v37 - v32[2]; /*0x4d88b3*/
        Math::Sqrt((double)v35 * (double)v35 + (double)v87 * (double)v87 + (double)(v36 - v34) * (double)(v36 - v34)); /*0x4d88d8*/
        LOWORD(v38) = Math::RoundToInt(a4); /*0x4d88e0*/
        v30 = v38 < (*(int (__thiscall **)(__int16 *, int))(*(_DWORD *)v6 + 360))(v6, v31); /*0x4d88f4*/
      }
      else
      {
        v39 = *(_DWORD *)v6; /*0x4d88fb*/
        v76 = v31; /*0x4d8901*/
        v40 = (*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v29 + 1264))(v29, v91); /*0x4d8905*/
        v30 = (*(int (__thiscall **)(__int16 *, int))(v39 + 356))(v6, v40); /*0x4d8914*/
      }
    }
    if ( ((*(int (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 388))(v6) == 21 /*0x4d8956*/
       || (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 388))(v6) == 11
       || (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 388))(v6) == 1
       || (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 388))(v6) == 15)
      && v30
      && !*((_DWORD *)v6 + 358) )
    {
      (*(void (__thiscall **)(__int16 *, _DWORD, int))(*(_DWORD *)v6 + 1152))(v6, 0, 1); /*0x4d8968*/
      *((_DWORD *)v6 + 376) = -1; /*0x4d896e*/
    }
    *(_DWORD *)v79 = *(_DWORD *)(*(int (__thiscall **)(__int16 *, _BYTE *))(*(_DWORD *)v6 + 440))(v6, v83); /*0x4d8993*/
    v41 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v79); /*0x4d8997*/
    v42 = v79[1]; /*0x4d89a1*/
    v43 = (Cell *)v41; /*0x4d89a6*/
    *(_DWORD *)v82 = v79[0]; /*0x4d89a8*/
    v80 = (int)v41; /*0x4d89ac*/
    v44 = (TeamClass *)*((_DWORD *)v41 + 15); /*0x4d89b6*/
    if ( (*((_DWORD *)v41 + 80) & 0x500) == 0 || *((_BYTE *)v6 + 140) ) /*0x4d89be*/
    {
      if ( v44 ) /*0x4d89ce*/
      {
        v45 = (int *)(*(int (__usercall **)@<eax>(__int16 *@<ecx>, __int16 *, double@<st0>))(*(_DWORD *)v6 + 440))( /*0x4d89e1*/
                       v6,
                       v81,
                       a4);
        TeamClass::Update_0(v44, 1, (int)v6, *v45, 0, 0); /*0x4d89ef*/
        v46 = (int *)(*(int (__thiscall **)(__int16 *, __int16 *))(*(_DWORD *)v6 + 440))(v6, v81); /*0x4d8a01*/
        TeamClass::Update_0(v44, 59, (int)v6, *v46, 0, 0); /*0x4d8a0f*/
        if ( (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 44))(v6) == 15 ) /*0x4d8a1e*/
        {
          if ( *(_BYTE *)(*((_DWORD *)v6 + 432) + 3780) ) /*0x4d8a26*/
          {
            v47 = (int *)(*(int (__usercall **)@<eax>(__int16 *@<ecx>, __int16 *, double@<st0>))(*(_DWORD *)v6 + 440))( /*0x4d8a3d*/
                           v6,
                           v81,
                           a4);
            TeamClass::Update_0(v44, 53, (int)v6, *v47, 0, 0); /*0x4d8a4b*/
            v48 = (int *)(*(int (__thiscall **)(__int16 *, __int16 *))(*(_DWORD *)v6 + 440))(v6, v81); /*0x4d8a5d*/
            TeamClass::Update_0(v44, 54, (int)v6, *v48, 0, 0); /*0x4d8a6b*/
          }
        }
      }
    }
    if ( ((int)v43->Cell_field_0x140 & 0x100000) != 0 ) /*0x4d8a7a*/
    {
      for ( j = 0; j < *(int *)&stru_87F5F0.__pad_58[716]; ++j ) /*0x4d8a85*/
      {
        v81[1] = v42; /*0x4d8a9a*/
        v81[0] = *(_WORD *)&stru_87F5F0.__pad_58[708] + j; /*0x4d8a9f*/
        v50 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v81); /*0x4d8aa4*/
        v51 = (TeamClass *)*((_DWORD *)v50 + 15); /*0x4d8aa9*/
        v80 = (int)v50; /*0x4d8aac*/
        if ( v51 && TagClass::HasCrossesHorizontalLineEvent((TagClass *)v51) ) /*0x4d8ab6*/
        {
          v52 = (int *)(*(int (__thiscall **)(__int16 *, _BYTE *))(*(_DWORD *)v6 + 440))(v6, v83); /*0x4d8acc*/
          TeamClass::Update_0(v51, 25, (int)v6, *v52, 0, 0); /*0x4d8ada*/
        }
      }
      v43 = (Cell *)v80; /*0x4d8ae9*/
    }
    if ( ((int)v43->Cell_field_0x140 & 0x200000) != 0 ) /*0x4d8af7*/
    {
      for ( k = 0; k < *(int *)&stru_87F5F0.__pad_58[720]; ++k ) /*0x4d8b02*/
      {
        v81[0] = v82[0]; /*0x4d8b0e*/
        v81[1] = *(_WORD *)&stru_87F5F0.__pad_58[712] + k; /*0x4d8b1b*/
        v54 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v81); /*0x4d8b25*/
        v55 = (TeamClass *)*((_DWORD *)v54 + 15); /*0x4d8b2a*/
        if ( v55 && TagClass::HasCrossesVerticalLineEvent(*((TagClass **)v54 + 15)) ) /*0x4d8b33*/
        {
          v56 = (int *)(*(int (__thiscall **)(__int16 *, _BYTE *))(*(_DWORD *)v6 + 440))(v6, v83); /*0x4d8b49*/
          TeamClass::Update_0(v55, 26, (int)v6, *v56, 0, 0); /*0x4d8b57*/
        }
      }
      v43 = (Cell *)v80; /*0x4d8b66*/
    }
    v57 = 0; /*0x4d8b70*/
    for ( stru_A83D50.SuperClass_field_0x6C = 0; /*0x4d8b79*/
          (int)stru_A83D50.SuperClass_field_0x6C < FootClass_Array.?[0];
          v57 = ++stru_A83D50.SuperClass_field_0x6C )
    {
      v58 = *(FootClass **)(FootClass_Array.?[5] + 4 * (_DWORD)v57); /*0x4d8b85*/
      if ( v58 ) /*0x4d8b8a*/
      {
        if ( TagClass::HasZoneEntryByEvent(*(TagClass **)(FootClass_Array.?[5] + 4 * (_DWORD)v57)) ) /*0x4d8b92*/
        {
          v59 = (_DWORD *)(*(int (__usercall **)@<eax>(__int16 *@<ecx>, _BYTE *, double@<st0>))(*(_DWORD *)v6 + 76))( /*0x4d8baa*/
                            v6,
                            v89,
                            a4);
          LOWORD(v80) = *v59 / 256; /*0x4d8bc1*/
          v60 = *(_DWORD *)v6; /*0x4d8bd2*/
          HIWORD(v80) = v59[1] / 256; /*0x4d8bd7*/
          *(_DWORD *)v81 = v80; /*0x4d8be0*/
          v73 = (*(int (__thiscall **)(__int16 *))(v60 + 188))(v6); /*0x4d8bec*/
          v61 = (__int16 *)FootClass::processScriptAction(v58, v81); /*0x4d8bf4*/
          v62 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v61) + 80) >> 8; /*0x4d8c0c*/
          LOBYTE(v62) = v62 & 1; /*0x4d8c0f*/
          v74 = *(_DWORD *)((*(int (__thiscall **)(__int16 *, int, int))(*(_DWORD *)v6 + 132))(v6, v62, v73) + 1460); /*0x4d8c25*/
          v63 = (__int16 *)FootClass::processScriptAction(v58, &v84); /*0x4d8c2e*/
          if ( MapSeed::CheckTileMatch((MapSeed *)&stru_87F5F0.__pad_58[416], v63, v82, v74, 0, 0, 0) ) /*0x4d8c39*/
          {
            v64 = (_DWORD *)(*(int (__thiscall **)(__int16 *, int *, _DWORD))(*(_DWORD *)v6 + 76))(v6, &v87, 0); /*0x4d8c4d*/
            LOWORD(v80) = *v64 / 256; /*0x4d8c64*/
            HIWORD(v80) = v64[1] / 256; /*0x4d8c7a*/
            TeamClass::Update_0((TeamClass *)v58, 24, (int)v6, v80, 0, 0); /*0x4d8c87*/
          }
        }
      }
    }
    v65 = Cell::IsBridge(v43); /*0x4d8ca7*/
    v66 = v65; /*0x4d8cac*/
    if ( v65 ) /*0x4d8cb2*/
    {
      if ( *(_BYTE *)(v65[328] + 5823) ) /*0x4d8cba*/
      {
        if ( (int)v65[390] < 8 ) /*0x4d8ccb*/
        {
          v67 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 44))(v6); /*0x4d8cd1*/
          if ( v67 > 0 && (v67 <= 2 || v67 == 15) && *((int *)v6 + 27) > 0 ) /*0x4d8cea*/
            (*(void (__thiscall **)(__int16 *, __int16 *, _DWORD, _DWORD, _DWORD *, int, int, _DWORD))(*(_DWORD *)v6 + 364))( /*0x4d8d05*/
              v6,
              v6 + 54,
              0,
              *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
              v66,
              1,
              1,
              0);
        }
      }
    }
    a2 = v76; /*0x4d8d14*/
    if ( *((_BYTE *)v6 + 140) ) /*0x4d8d0b*/
    {
      v84 = *((_DWORD *)v6 + 39); /*0x4d8d23*/
      v85 = *((_DWORD *)v6 + 40); /*0x4d8d2f*/
      v86 = *((_DWORD *)v6 + 41); /*0x4d8d3b*/
      if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v84)->flags[0] & 0x100) == 0 ) /*0x4d8d4d*/
        (*(void (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 236))(v6); /*0x4d8d53*/
    }
    result = *((_BYTE *)v6 + 144); /*0x4d8d59*/
    if ( !result ) /*0x4d8d61*/
      return result; /*0x4d8d61*/
    v69 = (__int16 *)(*(int (__thiscall **)(__int16 *, int *))(*(_DWORD *)v6 + 440))(v6, &v84); /*0x4d8d72*/
    if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v69, 1) /*0x4d8d8b*/
      && (*(unsigned __int8 (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 1244))(v6) )
    {
      return (*(char (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 248))(v6); /*0x4d8da4*/
    }
    if ( *((_BYTE *)v6 + 131) ) /*0x4d8da7*/
    {
      if ( !(unsigned __int8)House::IsHumanPlayer(*((House **)v6 + 135)) ) /*0x4d8db7*/
      {
        v84 = *((_DWORD *)v6 + 39); /*0x4d8dcc*/
        v85 = *((_DWORD *)v6 + 40); /*0x4d8dd8*/
        v86 = *((_DWORD *)v6 + 41); /*0x4d8ddf*/
        if ( (unsigned __int8)Cell::IsPassable(&v84) ) /*0x4d8de8*/
          (*(void (__thiscall **)(__int16 *))(*(_DWORD *)v6 + 336))(v6); /*0x4d8df5*/
      }
    }
  }
  v70 = *((_DWORD *)v6 + 328); /*0x4d8dff*/
  if ( v70 != -1 ) /*0x4d8e08*/
  {
    Element = (int *)Array::GetElement(*(Array **)&dword_A83D4C->__pad_140[4 * v70 + 208], *((char *)v6 + 1670)); /*0x4d8e25*/
    if ( Element ) /*0x4d8e2e*/
    {
      v81[0] = *Element / 256; /*0x4d8e42*/
      v81[1] = Element[1] / 256; /*0x4d8e56*/
      v72 = v81[0]; /*0x4d8e60*/
      if ( *(int **)&stru_87F5F0.__pad_E12[1442] == Element ) /*0x4d8e6a*/
      {
        v81[0] = *(_DWORD *)&stru_87F5F0.__pad_E12[1446] / 256; /*0x4d8e7d*/
        v81[1] = *(_DWORD *)&stru_87F5F0.__pad_E12[1450] / 256; /*0x4d8e93*/
        v72 = v81[0]; /*0x4d8e98*/
      }
      if ( v72 + v6[658] != v6[660] || v81[1] + v6[659] != v6[661] ) /*0x4d8ec6*/
      {
        BuildingClass::ValidateFoundation_0((int)v6, 0, a2, Element, v77, v78); /*0x4d8ecb*/
        return FootClass::CompleteProduction((TechnoClass *)v6); /*0x4d8ee1*/
      }
    }
    else
    {
      v81[0] = 0; /*0x4d8ef2*/
      v81[1] = 0; /*0x4d8ef7*/
      *((_DWORD *)v6 + 328) = -1; /*0x4d8f00*/
      *((_BYTE *)v6 + 1670) = 0; /*0x4d8f0a*/
      *((_DWORD *)v6 + 329) = 0; /*0x4d8f11*/
      *((_DWORD *)v6 + 330) = 0; /*0x4d8f17*/
    }
  }
  return FootClass::CompleteProduction((TechnoClass *)v6); /*0x4d8d9f*/
}



// ==== 0x004D8F40  FootClass::OverrideMission_SyncLog  this=FootClass  sig=csp ====
int __thiscall FootClass::OverrideMission_SyncLog(FootClass *this, int a2, int a3, int a4)
{
  this->lastDestination = this->movementDestination; /*0x4d8f5b*/
  MissionClass::OverrideMission_SyncLog((TechnoClass *)this); /*0x4d8f61*/
  return (*((int (__thiscall **)(FootClass *, int, int))this->TechnoClass + 288))(this, a4, 1); /*0x4d8f73*/
}



// ==== 0x004D8F80  FootClass::ConditionalAction  this=FootClass  sig=csp ====
char __thiscall FootClass::ConditionalAction(FootClass *this)
{
  if ( !(unsigned __int8)BuildingClass::CheckOccupantState((TechnoClass *)this) ) /*0x4d8f83*/
    return 0; /*0x4d8fa3*/
  (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, this->lastDestination, 1); /*0x4d8f99*/
  return 1; /*0x4d8fa1*/
}



// ==== 0x004D8FB0  FootClass::MissionDispatch  this=FootClass  sig=csp ====
int __userpurge FootClass::MissionDispatch@<eax>(FootClass *this, int a2@<ebp>, _DWORD *a3, int a4, _DWORD *a5)
{
  Team *v5; // ecx
  _DWORD *v6; // edi
  Team *v7; // esi
  _DWORD *v8; // eax
  CellClass *v9; // eax
  int result; // eax
  _DWORD *v11; // ebp
  _DWORD *v12; // eax
  int v13; // edi
  int v14; // ebx
  _WORD *v15; // eax
  int v16; // edx
  char *v17; // esi
  _DWORD *v18; // [esp+0h] [ebp-28h]
  _DWORD v19[3]; // [esp+10h] [ebp-18h] BYREF
  _BYTE v20[4]; // [esp+1Ch] [ebp-Ch] BYREF
  int v21; // [esp+20h] [ebp-8h]

  v6 = a3; /*0x4d8fb7*/
  v7 = v5; /*0x4d8fbb*/
  switch ( (unsigned int)a3 )
  {
    case 0x11u:
      if ( (*(int (**)(void))(*(_DWORD *)v5->__pad_0 + 388))() != 7 && *(_DWORD *)&v7->__pad_0[180] != 7 ) /*0x4d922f*/
        goto LABEL_16; /*0x4d922f*/
      TechnoClass::Mission_RepairDispatch((TechnoClass *)this, a2, (int)v6, a4, v18); /*0x4d9242*/
      return 1; /*0x4d9242*/
    case 0x12u:
      v11 = (_DWORD *)a4; /*0x4d9139*/
      if ( *(_DWORD *)a4 ) /*0x4d913d*/
      {
        v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)a4 + 72))(*(_DWORD *)a4, v20); /*0x4d914b*/
        v13 = *v12 / 256; /*0x4d9174*/
        v14 = v12[1] / 256; /*0x4d9177*/
        v15 = (_WORD *)(*(int (__thiscall **)(Team *, _DWORD **))(*(_DWORD *)v7->__pad_0 + 440))(v7, &a3); /*0x4d917a*/
        if ( *v15 == (_WORD)v13 && v15[1] == (_WORD)v14 ) /*0x4d9189*/
          return 20; /*0x4d918e*/
      }
      if ( (*(int (__thiscall **)(Team *))(*(_DWORD *)v7->__pad_0 + 388))(v7) == 5 && *(_DWORD *)&v7->__pad_0[180] == -1 ) /*0x4d91b0*/
        (*(void (__thiscall **)(Team *, int, _DWORD))(*(_DWORD *)v7->__pad_0 + 488))(v7, 2, 0); /*0x4d91ba*/
      if ( *(_DWORD *)&v7->__pad_0[180] == 7 /*0x4d91cd*/
        && (*(unsigned __int8 (__thiscall **)(Team *))(*(_DWORD *)v7->__pad_0 + 512))(v7) )
      {
        (*(void (__thiscall **)(Team *))(*(_DWORD *)v7->__pad_0 + 492))(v7); /*0x4d91db*/
      }
      (*(void (__thiscall **)(Team *, _DWORD, int))(*(_DWORD *)v7->__pad_0 + 1152))(v7, *v11, 1); /*0x4d91eb*/
      v16 = v21; /*0x4d91f6*/
      v17 = &v7->__pad_0[200]; /*0x4d91fc*/
      *(_DWORD *)v17 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d9203*/
      *((_DWORD *)v17 + 1) = v16; /*0x4d920a*/
      *((_DWORD *)v17 + 2) = 0; /*0x4d920d*/
      return 1; /*0x4d9197*/
    case 0x13u:
      *(_DWORD *)a4 = *(_DWORD *)&v5[6].__pad_0[28]; /*0x4d90f2*/
      if ( !*(_DWORD *)&v5[6].__pad_0[28] ) /*0x4d90f4*/
        return 1; /*0x4d90f4*/
      if ( !*(_DWORD *)v5[7].__pad_0 ) /*0x4d9102*/
        WinAPI::Wrapper(-2147467261); /*0x4d9111*/
      if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)v5[7].__pad_0 + 16))(*(_DWORD *)v5[7].__pad_0) ) /*0x4d911f*/
        return 10; /*0x4d912d*/
      else
        return 1; /*0x4d9247*/
    case 0x17u:
      if ( (unsigned __int8)Team::AllMembersValid(v5) && *(_DWORD *)&v7[6].__pad_0[28] == Team::GetMember(v7, 0) ) /*0x4d9045*/
        (*(void (__thiscall **)(Team *, _DWORD, int))(*(_DWORD *)v7->__pad_0 + 1152))(v7, 0, 1); /*0x4d904f*/
      if ( !(*(int (__thiscall **)(Team *))(*(_DWORD *)v7->__pad_0 + 388))(v7) ) /*0x4d9059*/
      {
        (*(void (__thiscall **)(Team *, int, _DWORD))(*(_DWORD *)v7->__pad_0 + 488))(v7, 5, 0); /*0x4d906a*/
        if ( (*(unsigned __int8 (__thiscall **)(Team *))(*(_DWORD *)v7->__pad_0 + 512))(v7) ) /*0x4d9074*/
          (*(void (__thiscall **)(Team *))(*(_DWORD *)v7->__pad_0 + 492))(v7); /*0x4d9082*/
      }
      if ( (*(int (__thiscall **)(Team *))(*(_DWORD *)v7->__pad_0 + 388))(v7) == 7 ) /*0x4d9095*/
        (*(void (__thiscall **)(Team *, int, _DWORD))(*(_DWORD *)v7->__pad_0 + 488))(v7, 5, 0); /*0x4d909f*/
      if ( !v7[7].__pad_0[59] && !*(_DWORD *)&v7[6].__pad_0[28] ) /*0x4d90af*/
        (*(void (__thiscall **)(Team *, int *, int, int))(*(_DWORD *)v7->__pad_0 + 372))(v7, &dword_8B3DA8, 1, 1); /*0x4d90c6*/
      goto LABEL_16; /*0x4d90c6*/
    case 0x1Cu:
      if ( !*(_DWORD *)&v5[6].__pad_0[28] ) /*0x4d9016*/
        goto LABEL_16; /*0x4d9016*/
      result = 10; /*0x4d901f*/
      break; /*0x4d9028*/
    case 0x23u:
      v8 = (_DWORD *)(*(int (__thiscall **)(Team *, _DWORD *))(*(_DWORD *)v5->__pad_0 + 72))(v5, v19); /*0x4d8fe1*/
      v9 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v8); /*0x4d8fea*/
      return this != (FootClass *)Cell::IsBridge((Cell *)v9) ? 10 : 1;
    default:
LABEL_16:
      result = TechnoClass::Mission_RepairDispatch((TechnoClass *)this, a2, (int)v6, a4, v18); /*0x4d90cc*/
      break; /*0x4d90e5*/
  }
  return result; /*0x4d8ffc*/
}



// ==== 0x004D9290  FootClass::ProcessTeamAction  this=FootClass  sig=csp ====
int __thiscall FootClass::ProcessTeamAction(FootClass *this)
{
  void *Member; // eax
  int v3; // ecx
  int *locomotor; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  void (__thiscall **vtable0)(FootClass *, AbstractClass *, int); // edx
  AbstractClass *v12; // ecx
  char *MissionControl; // eax
  int v14; // eax
  AbstractClass *movementDestination; // [esp+14h] [ebp-10h]
  int v17; // [esp+20h] [ebp-4h] BYREF

  Member = (void *)Team::GetMember((Team *)this, 0); /*0x4d9296*/
  if ( Member || (Member = AbstractClass::IsTechnoType(this->?)) != 0 ) /*0x4d92ac*/
  {
    if ( (*((int (__thiscall **)(FootClass *, int, void *))this->TechnoClass + 158))(this, 14, Member) == 1 || this->? ) /*0x4d92c4*/
    {
      if ( this->movementDestination || *(int *)&this->__pad_58C[12] <= 0 ) /*0x4d9303*/
      {
        if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3284) ) /*0x4d93f2*/
        {
          vtable0 = (void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass; /*0x4d9402*/
          movementDestination = this->movementDestination; /*0x4d9406*/
          this->FootClass_field_5A0 = 0; /*0x4d9409*/
          this->movementDestination = 0; /*0x4d9413*/
          vtable0[288](this, movementDestination, 1); /*0x4d941d*/
        }
      }
      else
      {
        v3 = this->locomotor[0]; /*0x4d9309*/
        locomotor = this->locomotor; /*0x4d9310*/
        v5 = 0; /*0x4d9316*/
        v17 = 0; /*0x4d931a*/
        if ( v3 ) /*0x4d931e*/
        {
          v6 = StreamClass::Set((StreamClass *)&v17, this->locomotor); /*0x4d9325*/
          if ( v6 < 0 && v6 != -2147467262 ) /*0x4d9333*/
            WinAPI::Wrapper(v6); /*0x4d9336*/
          v5 = v17; /*0x4d933b*/
          if ( v17 ) /*0x4d9341*/
          {
            if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v17 + 20))(v17) ) /*0x4d9346*/
            {
              if ( *locomotor ) /*0x4d934d*/
                (*(void (__stdcall **)(int))(*(_DWORD *)*locomotor + 8))(*locomotor); /*0x4d9356*/
              v7 = v17; /*0x4d9359*/
              *locomotor = 0; /*0x4d935d*/
              if ( !v7 ) /*0x4d9365*/
                WinAPI::Wrapper(-2147467261); /*0x4d936c*/
              (*(void (__stdcall **)(int, int *))(*(_DWORD *)v7 + 16))(v7, this->locomotor); /*0x4d9379*/
            }
            v5 = v17; /*0x4d937c*/
          }
        }
        if ( *(int *)&this->__pad_58C[12] > 0 ) /*0x4d9389*/
        {
          (*((void (__thiscall **)(FootClass *, _DWORD, _DWORD))this->TechnoClass + 288))( /*0x4d939a*/
            this,
            **(_DWORD **)this->__pad_58C,
            0);
          v8 = *(_DWORD *)&this->__pad_58C[12]; /*0x4d93a0*/
          if ( v8 > 0 ) /*0x4d93a8*/
          {
            v9 = v8 - 1; /*0x4d93aa*/
            v10 = 0; /*0x4d93ad*/
            for ( *(_DWORD *)&this->__pad_58C[12] = v9; /*0x4d93b7*/
                  v10 < *(_DWORD *)&this->__pad_58C[12];
                  *(_DWORD *)(*(_DWORD *)this->__pad_58C + 4 * v10 - 4) = *(_DWORD *)(*(_DWORD *)this->__pad_58C
                                                                                    + 4 * v10) )
            {
              ++v10; /*0x4d93bf*/
            }
          }
          v5 = v17; /*0x4d93d1*/
        }
        if ( v5 ) /*0x4d93d7*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v5 + 8))(v5); /*0x4d93e0*/
      }
    }
    else
    {
      (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 157))(this, 3); /*0x4d92d4*/
      (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 289))(this, 0, 1); /*0x4d92e2*/
    }
  }
  else
  {
    if ( !TechnoClass::PlaceAtCell((TechnoClass *)this) ) /*0x4d9427*/
    {
      v12 = this->movementDestination; /*0x4d9430*/
      if ( !v12 /*0x4d9452*/
        || (*((int (__thiscall **)(AbstractClass *))v12->vtable0 + 11))(v12) != 1
        && (*((int (__thiscall **)(AbstractClass *))this->movementDestination->vtable0 + 11))(this->movementDestination) != 2 )
      {
        (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 289))(this, 0, 1); /*0x4d945c*/
      }
    }
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 123))(this); /*0x4d9466*/
  }
  MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4d946e*/
  LOWORD(v14) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d947c*/
  return v14 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d9499*/
}



// ==== 0x004D94A0  ObjectClass::SetMember360  this=FootClass  sig=csp ====
int __thiscall ObjectClass::SetMember360(TechnoClass *this, int a2)
{
  this->idleActionTimer = a2; /*0x4d94a4*/
  return a2; /*0x4d94aa*/
}



// ==== 0x004D94B0  FootClass::AssignDestination  this=FootClass  sig=csp ====
char __thiscall FootClass::AssignDestination(FootClass *this, int a2, int a3)
{
  AbstractClass *v4; // esi
  char result; // al
  FootClass *locomotorSource; // eax
  ParticleSystemClass *fireParticles; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // eax
  int v14; // ecx
  int v15; // edx
  int *pathDelayTimer; // ebp
  int v17; // [esp+10h] [ebp-1Ch] BYREF
  int v18; // [esp+14h] [ebp-18h]
  _BYTE v19[16]; // [esp+1Ch] [ebp-10h] BYREF

  v4 = (AbstractClass *)a2; /*0x4d94ba*/
  result = this->isAttackedByLocomotor; /*0x4d94be*/
  this->FootClass_field_5A0 = 0; /*0x4d94c7*/
  if ( !result || !v4 ) /*0x4d94d1*/
  {
    result = this->?; /*0x4d94d7*/
    if ( (!result || !v4) && (!this->? || !v4) ) /*0x4d94f3*/
    {
      if ( this->? && v4 ) /*0x4d9503*/
        TechnoClass::EjectPassengers((TechnoClass *)this, 1); /*0x4d9509*/
      this->movementDestination = v4; /*0x4d9510*/
      if ( !v4 ) /*0x4d9516*/
      {
        if ( this->isAttackedByLocomotor ) /*0x4d9518*/
        {
          locomotorSource = this->?; /*0x4d9522*/
          if ( locomotorSource ) /*0x4d952a*/
          {
            locomotorSource->? = 0; /*0x4d952c*/
            this->? = 0; /*0x4d9532*/
            this->isLetGoByLocomotor = 1; /*0x4d9538*/
          }
        }
      }
      if ( !this->movementDestination ) /*0x4d9545*/
      {
        if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) != 2 /*0x4d9696*/
          || this->? != 1 && this->? != 1
          || !this->? )
        {
          if ( !this->locomotor[0] ) /*0x4d969e*/
            WinAPI::Wrapper(-2147467261); /*0x4d96ab*/
          (*(void (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 72))(this->locomotor[0]); /*0x4d96b9*/
          this->movementDestination = v4; /*0x4d96bc*/
        }
        goto LABEL_43; /*0x4d96bc*/
      }
      fireParticles = this->?; /*0x4d954b*/
      if ( fireParticles ) /*0x4d9553*/
      {
        (*((void (__thiscall **)(ParticleSystemClass *))fireParticles->ObjectClass + 62))(fireParticles); /*0x4d9557*/
        this->? = 0; /*0x4d955d*/
      }
      v8 = this->locomotor[0]; /*0x4d9563*/
      a2 = 0; /*0x4d9571*/
      if ( !v8 ) /*0x4d9575*/
        goto LABEL_22; /*0x4d9575*/
      v9 = StreamClass::Set2((StreamClass *)&a2, this->locomotor); /*0x4d957c*/
      if ( v9 < 0 && v9 != -2147467262 ) /*0x4d958a*/
        WinAPI::Wrapper(v9); /*0x4d958d*/
      if ( !a2 ) /*0x4d9598*/
LABEL_22:
        WinAPI::Wrapper(-2147467261); /*0x4d959f*/
      (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)a2 + 12))(a2, v19); /*0x4d95b0*/
      if ( !memcmp(v19, &stru_7E9A40, 0x10u) ) /*0x4d95c3*/
      {
        v10 = this->pathDelayTimer[0]; /*0x4d95c7*/
        v11 = this->pathDelayTimer[2]; /*0x4d95cd*/
        if ( v10 != -1 ) /*0x4d95dc*/
        {
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v10 >= v11 ) /*0x4d95e4*/
          {
LABEL_28:
            v12 = v18; /*0x4d95ec*/
            this->pathDelayTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d95f5*/
            this->pathDelayTimer[1] = v12; /*0x4d95fb*/
            this->pathDelayTimer[2] = 1; /*0x4d9601*/
            goto LABEL_29; /*0x4d9601*/
          }
          v11 -= *(_DWORD *)&stru_A8EB00.?[416] - v10; /*0x4d95e6*/
        }
        if ( !v11 ) /*0x4d95ea*/
          goto LABEL_28; /*0x4d95ea*/
      }
LABEL_29:
      if ( this->FootClass_field_bool_6AC ) /*0x4d9607*/
      {
        this->FootClass_field_bool_6AC = 0; /*0x4d9611*/
      }
      else
      {
        v13 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, int *, FootClass *))this->movementDestination->vtable0 /*0x4d9628*/
                         + 19))(
                          this->movementDestination,
                          &v17,
                          this);
        if ( !this->locomotor[0] ) /*0x4d9633*/
          WinAPI::Wrapper(-2147467261); /*0x4d9642*/
        (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this->locomotor[0] + 68))( /*0x4d965d*/
          this->locomotor[0],
          *v13,
          v13[1],
          v13[2]);
      }
      if ( a2 ) /*0x4d9668*/
        (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 8))(a2); /*0x4d966d*/
LABEL_43:
      this->FootClass_field_bool_6B7 = 0; /*0x4d96c2*/
      v14 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5992); /*0x4d96d4*/
      this->blockagePathTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d96e0*/
      this->blockagePathTimer[1] = v18; /*0x4d96ea*/
      this->blockagePathTimer[2] = v14; /*0x4d96ed*/
      result = stru_A8EB00.?[416]; /*0x4d96f0*/
      v15 = v18; /*0x4d96f5*/
      pathDelayTimer = this->pathDelayTimer; /*0x4d96fb*/
      *pathDelayTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d9701*/
      pathDelayTimer[1] = v15; /*0x4d9704*/
      pathDelayTimer[2] = 0; /*0x4d9707*/
    }
  }
  return result; /*0x4d970a*/
}



// ==== 0x004D9720  FootClass::DispatchSell  this=FootClass  sig=csp ====
int __thiscall FootClass::DispatchSell(FootClass *this, char a2)
{
  int *team; // ecx
  int Member; // eax

  if ( a2 ) /*0x4d972a*/
  {
    team = (int *)this->team; /*0x4d972c*/
    if ( team ) /*0x4d9734*/
    {
      if ( !dword_A8E7AC ) /*0x4d973d*/
        TeamClass::LiberateMember_Start(team, (int)this, 0xFFFFFFFF, 0); /*0x4d9744*/
    }
    (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 157))(this, 3); /*0x4d974f*/
    return ObjectClass::Destroy2((ObjectClass *)this); /*0x4d974f*/
  }
  Member = Team::GetMember((Team *)this, 0); /*0x4d9766*/
  if ( !Member || (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, Member) ) /*0x4d9776*/
    return ObjectClass::Destroy2((ObjectClass *)this); /*0x4d975f*/
  (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 157))(this, 3); /*0x4d9785*/
  return ObjectClass::Destroy2((ObjectClass *)this); /*0x4d975d*/
}



// ==== 0x004D97A0  TechnoClass::ComputeThreatLevel  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ComputeThreatLevel(TechnoClass *this, int a2)
{
  AbstractClass *target; // ecx
  int v5; // eax
  bool v6; // cl
  int v7; // edi
  int v8; // edi
  int v9; // ebx
  int v10; // ecx
  int v11; // ecx

  if ( a2 ) /*0x4d97aa*/
  {
    target = this->target; /*0x4d97b0*/
    if ( target == (AbstractClass *)a2 ) /*0x4d97b8*/
      return -(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 176))(this); /*0x4d97c8*/
    if ( !target /*0x4d97d7*/
      || (target->abstractFlags & 1) == 0
      || !(*((unsigned __int8 (__thiscall **)(AbstractClass *))target->vtable0 + 171))(target) )
    {
      v5 = this->q175; /*0x4d97e5*/
      v6 = v5 && *(_BYTE *)(*(_DWORD *)(v5 + 36) + 246); /*0x4d97fc*/
      if ( (!v5 || v6) /*0x4d9825*/
        && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 97))(this) != 10
        && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 176))(this) )
      {
        v7 = ObjectClass::DistanceTo((ObjectClass *)this, a2); /*0x4d983e*/
        v8 = v7 - (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 90))(this, 0); /*0x4d9846*/
        v9 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 176))(this) << 10; /*0x4d9854*/
        if ( v8 <= 0 ) /*0x4d9859*/
          return v9; /*0x4d98a1*/
        if ( (unsigned int)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 227))(this) <= 1 ) /*0x4d9868*/
        {
          v10 = 1; /*0x4d98a4*/
        }
        else
        {
          v10 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 227))(this); /*0x4d9874*/
          if ( v10 <= 0 ) /*0x4d9878*/
          {
LABEL_19:
            v11 = 1; /*0x4d9886*/
LABEL_20:
            v9 /= v11; /*0x4d988b*/
            if ( v9 <= 1 ) /*0x4d9895*/
              return 1; /*0x4d9897*/
            return v9; /*0x4d9897*/
          }
        }
        v11 = v8 / v10; /*0x4d9882*/
        if ( v11 > 1 ) /*0x4d9884*/
          goto LABEL_20; /*0x4d9884*/
        goto LABEL_19; /*0x4d9884*/
      }
    }
  }
  return 0; /*0x4d97c4*/
}



// ==== 0x004D98C0  FootClass::Destroyed  this=FootClass  sig=csp ====
void __thiscall FootClass::Destroyed(FootClass *this, int a2)
{
  __int64 v3; // rax
  _BYTE v4[4]; // [esp+4h] [ebp-4h] BYREF

  if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) /*0x4d98dd*/
    && !*(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3412) )
  {
    v3 = ((__int64 (__thiscall *)(FootClass *, _BYTE *))*((_DWORD *)this->TechnoClass + 110))(this, v4); /*0x4d98f0*/
    if ( (unsigned __int8)CreateTriggerClassIfFarEnough(7, SHIDWORD(v3), *(_DWORD *)v3) ) /*0x4d98fe*/
      VoxClass::FindAndPlay((VoxClass *)&stru_822420.?[8], -1); /*0x4d9911*/
  }
}



// ==== 0x004D9920  FootClass::SelectAutoTarget_Cloaked  this=FootClass  sig=csp ====
void *__thiscall FootClass::SelectAutoTarget_Cloaked(FootClass *this, int a2, int a3, char a4)
{
  int v5; // eax
  void *result; // eax

  v5 = a2; /*0x4d992b*/
  if ( this->unknownBool688 ) /*0x4d9923*/
    LOBYTE(v5) = a2 & 0xFC | 1; /*0x4d9933*/
  result = TechnoClass::SelectAutoTarget_Start_AU((TechnoClass *)this, a3, v5, a3, a4); /*0x4d9942*/
  if ( this->unknownBool688 ) /*0x4d9947*/
  {
    if ( !result ) /*0x4d9953*/
      this->unknownBool688 = 0; /*0x4d9955*/
  }
  return result; /*0x4d995b*/
}



// ==== 0x004D9960  FootClass::HandleTargetDestroyed  this=FootClass  sig=csp ====
int __thiscall FootClass::HandleTargetDestroyed(FootClass *this, int *a2, int *a3)
{
  char v3; // bl
  int *v4; // edi
  FootClass *parasiteEatingMe; // eax
  FootClass *v7; // eax
  FootClass *nextTeamMember; // eax
  bool v9; // bl
  _DWORD *v10; // eax
  CellClass *v11; // eax
  AbstractClass *movementDestination; // ecx
  int FootClass_field_5CC; // ecx
  _DWORD *v14; // eax
  int i; // ecx
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int result; // eax
  int j; // ecx
  int v21; // eax
  int v22; // edx
  int v23; // eax
  _DWORD v24[3]; // [esp+10h] [ebp-Ch] BYREF

  v3 = (char)a3; /*0x4d9964*/
  v4 = a2; /*0x4d996b*/
  ObjectClass::NotifyExpired((ObjectClass *)this, a2, a3); /*0x4d9973*/
  if ( (int *)this->team == v4 ) /*0x4d997e*/
    this->team = 0; /*0x4d9982*/
  parasiteEatingMe = this->parasiteEatingMe; /*0x4d998c*/
  if ( parasiteEatingMe == (FootClass *)v4 && (!parasiteEatingMe->? || !stru_A8EB00.?[376]) ) /*0x4d99a2*/
    this->parasiteEatingMe = 0; /*0x4d99a4*/
  v7 = this->parasiteEatingMe; /*0x4d99aa*/
  if ( v7 && v7->? > 0 ) /*0x4d99b7*/
    (*((void (__thiscall **)(ParasiteClass *, int *, int))v7->parasiteImUsing->AbstractClass + 10))( /*0x4d99c6*/
      v7->parasiteImUsing,
      v4,
      1);
  if ( v4 == (int *)this ) /*0x4d99cb*/
    this->parasiteEatingMe = 0; /*0x4d99cd*/
  nextTeamMember = this->nextTeamMember; /*0x4d99d3*/
  if ( nextTeamMember == (FootClass *)v4 && v3 && v4 ) /*0x4d99e3*/
    this->nextTeamMember = nextTeamMember->nextTeamMember; /*0x4d99eb*/
  if ( (int *)this->? == v4 ) /*0x4d99f7*/
    TechnoClass::SetFocus((TechnoClass *)this, 0); /*0x4d99fc*/
  if ( (int *)this->lastDestination == v4 ) /*0x4d9a07*/
    this->lastDestination = 0; /*0x4d9a09*/
  if ( (int *)this->movementDestination == v4 ) /*0x4d9a15*/
  {
    v9 = 1; /*0x4d9a1f*/
    if ( !(_BYTE)a3 ) /*0x4d9a23*/
    {
      if ( v4 ) /*0x4d9a27*/
      {
        LOBYTE(a3) = v4[5] & 1; /*0x4d9a2e*/
        if ( (_BYTE)a3 ) /*0x4d9a32*/
        {
          v10 = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(*v4 + 72))(v4, v24); /*0x4d9a3d*/
          v11 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v10); /*0x4d9a46*/
          v9 = (unsigned __int8)Cell::IsPassableOffset((Cell *)v11, this->?->relatedTagsCount) == 0; /*0x4d9a60*/
        }
      }
    }
    if ( ((*((int (__thiscall **)(FootClass *))this->TechnoClass + 97))(this) != 8 /*0x4d9abb*/
       || (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) != 15
       || !*(_BYTE *)(this->q1B0 + 3764)
       || (movementDestination = this->movementDestination) == 0
       || (movementDestination->abstractFlags & 2) == 0
       || !LOBYTE(movementDestination[4].vtable0)
       || (int)movementDestination[3].vtable0 <= 0
       || (*((int (__thiscall **)(AbstractClass *))movementDestination->vtable0 + 97))(movementDestination) == 19)
      && v9 )
    {
      this->FootClass_field_5A0 = 0; /*0x4d9abd*/
      this->movementDestination = 0; /*0x4d9ac3*/
    }
  }
  FootClass_field_5CC = this->FootClass_field_5CC; /*0x4d9ac9*/
  if ( (int *)FootClass_field_5CC == v4 ) /*0x4d9ad1*/
  {
    if ( FootClass_field_5CC ) /*0x4d9ad5*/
    {
      v14 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)FootClass_field_5CC + 72))( /*0x4d9ade*/
                        FootClass_field_5CC,
                        v24);
      LOWORD(a3) = *v14 / 256; /*0x4d9af1*/
      HIWORD(a3) = v14[1] / 256; /*0x4d9b0a*/
      a2 = a3; /*0x4d9b18*/
      this->FootClass_field_5C8 = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x4d9b21*/
    }
    else
    {
      this->FootClass_field_5C8 = 0; /*0x4d9b29*/
    }
    this->FootClass_field_5CC = 0; /*0x4d9b2f*/
  }
  if ( (int *)this->FootClass_field_5C8 == v4 ) /*0x4d9b3b*/
    this->FootClass_field_5C8 = 0; /*0x4d9b3d*/
  for ( i = 0; i < *(_DWORD *)&this->__pad_5B0[12]; ++i ) /*0x4d9b4d*/
  {
    if ( *(int **)(*(_DWORD *)this->__pad_5B0 + 4 * i) == v4 ) /*0x4d9b58*/
    {
      v16 = *(_DWORD *)&this->__pad_5B0[12]; /*0x4d9b5a*/
      if ( i < v16 ) /*0x4d9b62*/
      {
        v17 = v16 - 1; /*0x4d9b64*/
        v18 = i; /*0x4d9b67*/
        for ( *(_DWORD *)&this->__pad_5B0[12] = v17; /*0x4d9b71*/
              v18 < *(_DWORD *)&this->__pad_5B0[12];
              *(_DWORD *)(*(_DWORD *)this->__pad_5B0 + 4 * v18 - 4) = *(_DWORD *)(*(_DWORD *)this->__pad_5B0 + 4 * v18) )
        {
          ++v18; /*0x4d9b79*/
        }
      }
      --i; /*0x4d9b8b*/
    }
  }
  result = *(_DWORD *)&this->__pad_58C[12]; /*0x4d9b97*/
  for ( j = 0; j < result; ++j ) /*0x4d9ba1*/
  {
    if ( *(int **)(*(_DWORD *)this->__pad_58C + 4 * j) == v4 ) /*0x4d9bac*/
    {
      v21 = *(_DWORD *)&this->__pad_58C[12]; /*0x4d9bae*/
      if ( j < v21 ) /*0x4d9bb6*/
      {
        v22 = v21 - 1; /*0x4d9bb8*/
        v23 = j; /*0x4d9bbb*/
        for ( *(_DWORD *)&this->__pad_58C[12] = v22; /*0x4d9bc5*/
              v23 < *(_DWORD *)&this->__pad_58C[12];
              *(_DWORD *)(*(_DWORD *)this->__pad_58C + 4 * v23 - 4) = *(_DWORD *)(*(_DWORD *)this->__pad_58C + 4 * v23) )
        {
          ++v23; /*0x4d9bcd*/
        }
      }
      --j; /*0x4d9bdf*/
    }
    result = *(_DWORD *)&this->__pad_58C[12]; /*0x4d9be0*/
  }
  return result; /*0x4d9beb*/
}



// ==== 0x004D9C00  FootClass::vt_entry_524  this=FootClass  sig=csp ====
int FootClass::vt_entry_524(FootClass *this)
{
  return 0; /*0x4d9c02*/
}



// ==== 0x004D9C10  FootClass::Destru_vt107  this=FootClass  sig=csp ====
int __thiscall FootClass::Destru_vt107(FootClass *this, int a2, int a3, int a4, int a5, char a6)
{
  if ( !this->locomotor[0] || !a6 ) /*0x4d9c23*/
    return 0; /*0x4d9c53*/
  if ( !this->locomotor[0] ) /*0x4d9c2d*/
    WinAPI::Wrapper(-2147467261); /*0x4d9c3c*/
  return (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)this->locomotor[0] + 28))( /*0x4d9c4f*/
           this->locomotor[0],
           *(_DWORD *)(a2 + 36));
}



// ==== 0x004D9C60  ObjectClass::CheckCellFlags  this=FootClass  sig=csp ====
int __stdcall ObjectClass::CheckCellFlags(ObjectClass *this, int a2, int *a3, _BYTE *a4, _DWORD *a5)
{
  _DWORD *v5; // esi
  int v6; // eax
  __int16 v7; // dx
  int v10; // ebx
  int v11; // ecx
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  int v16; // edi
  int v17; // edi
  int *v18; // [esp+1Ch] [ebp+Ch]

  v5 = a5; /*0x4d9c67*/
  if ( !a5 ) /*0x4d9c72*/
  {
    v6 = ((_BYTE)a2 - 4) & 7; /*0x4d9c77*/
    v7 = HIWORD(this->occupant) + HIWORD(g_DDrawSurfaceManager.scenario[v6 + 82]); /*0x4d9c8e*/
    LOWORD(a5) = LOWORD(this->occupant) + LOWORD(g_DDrawSurfaceManager.scenario[v6 + 82]); /*0x4d9c99*/
    HIWORD(a5) = v7; /*0x4d9ca2*/
    v5 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a5); /*0x4d9cba*/
  }
  if ( a2 == -1 ) /*0x4d9cbf*/
  {
    if ( *a3 == -1 && (this->customSound_controller & 0x100) != 0 ) /*0x4d9e50*/
      *a3 = *((char *)this + 283) + 4; /*0x4d9e5c*/
    return 0; /*0x4d9e5c*/
  }
  if ( !v5 || !this ) /*0x4d9ccf*/
    return 0; /*0x4d9ccf*/
  if ( *a3 == -1 && (v5[80] & 0x100) != 0 ) /*0x4d9ce8*/
  {
    *a3 = *((char *)v5 + 283) + 4; /*0x4d9cf4*/
    if ( (this->customSound_controller & 0x200) == 0 ) /*0x4d9d00*/
      return 7; /*0x4d9d0b*/
  }
  v10 = *((char *)this + 283); /*0x4d9d14*/
  v18 = (int *)(v5[80] & 0x100); /*0x4d9d20*/
  if ( v18 ) /*0x4d9d24*/
    v11 = *((char *)v5 + 283); /*0x4d9d26*/
  else
    v11 = *a3; /*0x4d9d2f*/
  v12 = v11 - v10; /*0x4d9d32*/
  v13 = abs32(v12); /*0x4d9d39*/
  if ( !v13 ) /*0x4d9d3e*/
  {
    v17 = this->customSound_controller; /*0x4d9e08*/
    if ( ((v17 & 0x100) == 0 || (v17 & 0x200) == 0 || !v18) && *a3 != -1 && *a3 != v10 ) /*0x4d9e30*/
      return 7; /*0x4d9e3b*/
    return 0; /*0x4d9e30*/
  }
  v14 = v13 - 1; /*0x4d9d44*/
  if ( !v14 ) /*0x4d9d45*/
  {
    if ( v12 <= 0 ) /*0x4d9dda*/
    {
      if ( !*((_BYTE *)v5 + 284) ) /*0x4d9df2*/
        return 7; /*0x4d9e05*/
    }
    else if ( !this->q11C ) /*0x4d9ddc*/
    {
      return 7; /*0x4d9def*/
    }
    return 0; /*0x4d9de4*/
  }
  if ( v14 != 3 ) /*0x4d9d4e*/
    return 7; /*0x4d9d59*/
  v15 = *((char *)v5 + 283); /*0x4d9d5c*/
  if ( v15 == v10 - 4 ) /*0x4d9d68*/
  {
    if ( *a3 != v10 ) /*0x4d9d6d*/
      return 7; /*0x4d9d78*/
    if ( !v18 ) /*0x4d9d81*/
      return 7; /*0x4d9d8c*/
  }
  if ( v10 != v15 - 4 ) /*0x4d9d94*/
    return 0; /*0x4d9e61*/
  v16 = this->customSound_controller; /*0x4d9d9a*/
  if ( (v16 & 0x100) == 0 ) /*0x4d9da6*/
    return 7; /*0x4d9dab*/
  if ( (v16 & 0x200) == 0 ) /*0x4d9dba*/
    return 7; /*0x4d9dbf*/
  *a4 = 1; /*0x4d9dcf*/
  return 0; /*0x4d9d02*/
}



// ==== 0x004D9E70  FootClass::CheckCohesion  this=FootClass  sig=csp ====
char __usercall TeamClass::CheckCohesion@<al>(FootClass *this, double a2@<st0>)
{
  ObjectClass *v2; // ecx
  ObjectClass *v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  int v9; // eax
  int v11; // [esp+20h] [ebp-1Ch]
  _BYTE v12[12]; // [esp+24h] [ebp-18h] BYREF
  _BYTE v13[12]; // [esp+30h] [ebp-Ch] BYREF

  v3 = v2; /*0x4d9e74*/
  v4 = (*((int (__usercall **)@<eax>(ObjectClass *@<ecx>, double@<st0>))v2->AbstractClass + 11))(v2, a2); /*0x4d9e78*/
  if ( v4 > 0 /*0x4d9f52*/
    && v4 <= 2
    && (unsigned __int8)Team::AllMembersValid((Team *)v3)
    && (v5 = Array::Get((Array *)v3, 0), (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 6)
    && *(_BYTE *)(*(_DWORD *)(Array::Get((Array *)v3, 0) + 1312) + 5801)
    && (v6 = Array::Get((Array *)v3, 0),
        v7 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v6 + 72))(v6, v12),
        v8 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, _BYTE *))v3->AbstractClass + 18))(v3, v13),
        v11 = v8[2] - v7[2],
        Math::Sqrt(
          (double)(*v8 - *v7) * (double)(*v8 - *v7)
        + (double)(v8[1] - v7[1]) * (double)(v8[1] - v7[1])
        + (double)v11 * (double)v11),
        LOWORD(v9) = Math::RoundToInt(a2),
        v9 < 128) )
  {
    return 1; /*0x4d9f54*/
  }
  else
  {
    return AbstractClass::COMStub_Return0_38(v3); /*0x4d9f5d*/
  }
}



// ==== 0x004D9F70  FootClass::SellUnit  this=FootClass  sig=csp ====
int __thiscall BuildingClass::SellUnit(FootClass *this, int a2)
{
  int result; // eax
  int v4; // eax

  result = a2; /*0x4d9f70*/
  if ( a2 ) /*0x4d9f79*/
  {
    if ( (unsigned __int8)House::IsHumanPlayer((House *)this->?) ) /*0x4d9f81*/
    {
      VoxClass::FindAndPlay((VoxClass *)&stru_822420.?[24], -1); /*0x4d9f94*/
      PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1700), 0x2000, 1.0, 0); /*0x4d9fb0*/
    }
    v4 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 175))(this); /*0x4d9fb9*/
    HouseClass::AddPower(this->?, v4); /*0x4d9fc6*/
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 232))(this); /*0x4d9fcf*/
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 53))(this); /*0x4d9fd9*/
    return (*((int (__thiscall **)(FootClass *))this->TechnoClass + 62))(this); /*0x4d9fe3*/
  }
  return result; /*0x4d9fe9*/
}



// ==== 0x004D9FF0  FootClass::vt_entry_4F0  this=FootClass  sig=csp ====
_DWORD *__thiscall FootClass::vt_entry_4F0(FootClass *this, _DWORD *a2)
{
  _DWORD *v2; // ecx
  _BYTE v4[12]; // [esp+4h] [ebp-Ch] BYREF

  v2 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))this->TechnoClass + 41))(this, v4); /*0x4da001*/
  *a2 = *v2; /*0x4da00b*/
  a2[1] = v2[1]; /*0x4da010*/
  a2[2] = v2[2]; /*0x4da017*/
  return a2; /*0x4da013*/
}



// ==== 0x004DA020  globalHelper_0DA020  this=AbstractClass  sig=csp ====
_DWORD *__stdcall sub_4DA020(_DWORD *a1, _DWORD *a2)
{
  *a1 = *a2; /*0x4da02a*/
  return a1; /*0x4da02c*/
}



// ==== 0x004DA030  InfantryClass::ProcessExitQueue  this=InfantryClass  sig=csp ====
char __thiscall InfantryClass::ProcessExitQueue(InfantryClass *this)
{
  AbstractClass *movementDestination; // eax
  void *vtable0; // ebx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // edx

  movementDestination = this->?; /*0x4da035*/
  if ( !movementDestination ) /*0x4da03d*/
  {
    movementDestination = *(AbstractClass **)&this->?[12]; /*0x4da043*/
    if ( movementDestination ) /*0x4da04b*/
    {
      movementDestination = *(AbstractClass **)this->?; /*0x4da051*/
      vtable0 = movementDestination->vtable0; /*0x4da057*/
      if ( movementDestination->vtable0 ) /*0x4da057*/
      {
        (*((void (__thiscall **)(InfantryClass *, void *, int))this->FootClass + 288))(this, vtable0, 1); /*0x4da062*/
        v4 = *(_DWORD *)&this->?[12]; /*0x4da068*/
        if ( v4 > 0 ) /*0x4da076*/
        {
          v5 = v4 - 1; /*0x4da078*/
          v6 = 0; /*0x4da07b*/
          for ( *(_DWORD *)&this->?[12] = v5; /*0x4da082*/
                v6 < *(_DWORD *)&this->?[12];
                *(_DWORD *)(*(_DWORD *)this->? + 4 * v6 - 4) = *(_DWORD *)(*(_DWORD *)this->? + 4 * v6) )
          {
            ++v6; /*0x4da087*/
          }
        }
        LOBYTE(movementDestination) = this->?; /*0x4da096*/
        if ( (_BYTE)movementDestination ) /*0x4da09e*/
        {
          v7 = *(_DWORD *)&this->?[4]; /*0x4da0a0*/
          if ( *(_DWORD *)&this->?[12] < v7 /*0x4da0ca*/
            || ((LOBYTE(movementDestination) = this->?[9], (_BYTE)movementDestination) || !v7)
            && (movementDestination = *(AbstractClass **)&this->?[16], (int)movementDestination > 0)
            && (LOBYTE(movementDestination) = (*(int (__thiscall **)(int *, int, _DWORD))(this->?[0] + 8))(
                                                this->?,
                                                (int)movementDestination + v7,
                                                0),
                (_BYTE)movementDestination) )
          {
            movementDestination = *(AbstractClass **)&this->?[12]; /*0x4da0cc*/
            v8 = *(_DWORD *)this->?; /*0x4da0cf*/
            *(_DWORD *)&this->?[12] = (char *)&movementDestination->vtable0 + 1; /*0x4da0d5*/
            *(_DWORD *)(v8 + 4 * (_DWORD)movementDestination) = vtable0; /*0x4da0d8*/
          }
        }
      }
    }
  }
  return (char)movementDestination; /*0x4da0db*/
}



// ==== 0x004DA0E0  BuildingClass::AddToProductionQueue  this=IUnknown  sig=csp ====
void __thiscall BuildingClass::AddToProductionQueue(int this, int a2)
{
  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int Member; // eax
  int v10; // esi

  if ( !a2 ) /*0x4da0eb*/
    return; /*0x4da0eb*/
  v3 = *(_DWORD *)(this + 1468); /*0x4da0f1*/
  if ( a2 != this ) /*0x4da0f9*/
  {
    v4 = v3 == 0; /*0x4da108*/
    goto LABEL_6; /*0x4da108*/
  }
  v4 = v3 == 0; /*0x4da0fb*/
  if ( v3 <= 0 ) /*0x4da0fd*/
  {
LABEL_6:
    if ( v4 ) /*0x4da10a*/
      *(_BYTE *)(this + 1713) = 0; /*0x4da10c*/
    v5 = *(_DWORD *)(this + 1460); /*0x4da113*/
    if ( *(_DWORD *)(this + 1468) < v5 /*0x4da144*/
      || (*(_BYTE *)(this + 1465) || !v5)
      && (v6 = *(_DWORD *)(this + 1472), v6 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 1452) + 8))(this + 1452, v5 + v6, 0) )
    {
      v7 = *(_DWORD *)(this + 1468); /*0x4da14b*/
      v8 = *(_DWORD *)(this + 1456); /*0x4da14e*/
      *(_DWORD *)(this + 1468) = v7 + 1; /*0x4da154*/
      *(_DWORD *)(v8 + 4 * v7) = a2; /*0x4da157*/
    }
    goto LABEL_14; /*0x4da157*/
  }
  *(_BYTE *)(this + 1713) = 1; /*0x4da0ff*/
LABEL_14:
  if ( !*(_DWORD *)(this + 1444) && (*(int (__thiscall **)(int))(this->q184)(this) == 5 ) /*0x4da171*/
  {
    Member = Team::GetMember((Team *)this, 0); /*0x4da177*/
    v10 = Member; /*0x4da17c*/
    if ( !Member /*0x4da194*/
      || (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) != 6
      || !*(_BYTE *)(*(_DWORD *)(v10 + 1312) + 5821) )
    {
      (*(void (__thiscall **)(int, _DWORD, int))(this->u32_121)(this, 0, 1); /*0x4da1a6*/
    }
  }
}



// ==== 0x004DA1C0  FootClass::ClearSomeVector  this=FootClass  sig=csp ====
int __thiscall FootClass::ClearSomeVector(FootClass *this)
{
  return (*(int (__thiscall **)(int *))(this->FootClass_field_abstract_array_5AC[0] + 12))(this->FootClass_field_abstract_array_5AC);
}



// ==== 0x004DA1D0  FootClass::CanBeControlled  this=FootClass  sig=csp ====
char __thiscall FootClass::CanBeControlled(FootClass *this)
{
  TeamClass *team; // ecx

  if ( !this->? ) /*0x4da1d3*/
    return 0; /*0x4da1dd*/
  if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3220) ) /*0x4da1eb*/
    return 1; /*0x4da1eb*/
  if ( this->? ) /*0x4da1f5*/
    return 1; /*0x4da1f5*/
  if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 97))(this) == 4 ) /*0x4da20c*/
    return 1; /*0x4da20c*/
  team = this->team; /*0x4da20e*/
  if ( team ) /*0x4da216*/
  {
    if ( (unsigned __int8)TechnoClass::IsWaypointHidden((TechnoClass *)team) ) /*0x4da218*/
      return 1; /*0x4da225*/
  }
  return 0; /*0x4da1df*/
}



// ==== 0x004DA230  FootClass::CanBeRecruited  this=FootClass  sig=csp ====
int __thiscall FootClass::CanBeRecruited(FootClass *this, int a2)
{
  int result; // eax
  int v4; // eax

  result = a2; /*0x4da230*/
  if ( a2 ) /*0x4da239*/
  {
    if ( (HouseClass *)a2 == this->? ) /*0x4da247*/
    {
      if ( this->? ) /*0x4da24f*/
      {
        LOBYTE(result) = 0; /*0x4da259*/
      }
      else
      {
        result = (int)this->team; /*0x4da25f*/
        if ( result ) /*0x4da267*/
        {
          LOBYTE(result) = 0; /*0x4da269*/
        }
        else
        {
          v4 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 97))(this); /*0x4da273*/
          LOBYTE(result) = IPersistStream::SetField(v4); /*0x4da27b*/
          if ( (_BYTE)result ) /*0x4da282*/
            LOBYTE(result) = this->? != 0; /*0x4da291*/
        }
      }
    }
    else
    {
      LOBYTE(result) = 0; /*0x4da249*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x4da23b*/
  }
  return result; /*0x4da23d*/
}



// ==== 0x004DA2A0  FootClass::ClearSomeVector2  this=FootClass  sig=csp ====
int __thiscall FootClass::ClearSomeVector2(FootClass *this)
{
  int result; // eax

  result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 97))(this); /*0x4da2a2*/
  LOBYTE(result) = result == 7; /*0x4da2ab*/
  return result; /*0x4da2ae*/
}



// ==== 0x004DA2B0  FootClass::COMStub_143  this=FootClass  sig=csp ====
// attributes: thunk
int AbstractClass::COMStub_143()
{
  return IPersistStream::GetMaxSize();
}



// ==== 0x004DA2C0  FootClass::ProcessMovement  this=FootClass  sig=csp ====
int __thiscall FootClass::ProcessMovement(FootClass *this)
{
  double v1; // st7
  int missionStatus; // eax
  TeamClass *team; // eax
  _DWORD *v5; // eax
  int (__thiscall **vtable0)(FootClass *); // edx
  int *v7; // eax
  _DWORD *v8; // eax
  int (__thiscall **v9)(FootClass *); // edx
  int *v10; // eax
  void (__thiscall **v11)(FootClass *, void *, int); // ebx
  void *v12; // eax
  char *MissionControl; // eax
  int v14; // eax
  _DWORD *WaypointCoords; // [esp-10h] [ebp-50h]
  int v17; // [esp-8h] [ebp-48h]
  int v18; // [esp-8h] [ebp-48h]
  int v19; // [esp+4h] [ebp-3Ch]
  __int16 v20[2]; // [esp+8h] [ebp-38h] BYREF
  int v21; // [esp+Ch] [ebp-34h]
  int v22; // [esp+10h] [ebp-30h] BYREF
  int v23; // [esp+14h] [ebp-2Ch] BYREF
  int v24; // [esp+18h] [ebp-28h] BYREF
  int v25; // [esp+1Ch] [ebp-24h] BYREF
  int v26; // [esp+20h] [ebp-20h] BYREF
  int v27; // [esp+24h] [ebp-1Ch] BYREF
  _BYTE v28[12]; // [esp+28h] [ebp-18h] BYREF
  _BYTE v29[12]; // [esp+34h] [ebp-Ch] BYREF

  missionStatus = this->?; /*0x4da2c6*/
  if ( missionStatus ) /*0x4da2cf*/
  {
    if ( missionStatus == 1 && !this->movementDestination ) /*0x4da2d8*/
      this->? = 0; /*0x4da2e6*/
  }
  else if ( this->movementDestination ) /*0x4da2f5*/
  {
    this->? = 1; /*0x4da2ff*/
  }
  else
  {
    team = this->team; /*0x4da30e*/
    v20[0] = 0; /*0x4da314*/
    v20[1] = 0; /*0x4da31d*/
    if ( team && *TechnoClass::GetWaypointCoords((TechnoClass *)team->buildingType, &v24) != g_FootClass_Pool ) /*0x4da341*/
    {
      v5 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))this->TechnoClass + 18))(this, v28); /*0x4da35d*/
      LOWORD(v21) = *v5 / 256; /*0x4da374*/
      vtable0 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4da385*/
      HIWORD(v21) = v5[1] / 256; /*0x4da38a*/
      v22 = v21; /*0x4da393*/
      v17 = *(_DWORD *)(vtable0[33](this) + 1660); /*0x4da3a9*/
      WaypointCoords = TechnoClass::GetWaypointCoords((TechnoClass *)this->team->buildingType, &v25); /*0x4da3c4*/
      v7 = (int *)FootClass::checkTurning((FootClass *)this->?); /*0x4da3c5*/
      *(_DWORD *)v20 = *CellClass::FindOpenNeighbor( /*0x4da3dc*/
                          (CellClass *)&v26,
                          v1,
                          v7,
                          (int)WaypointCoords,
                          (int)&v22,
                          v17,
                          1,
                          0,
                          v19);
    }
    if ( *(_DWORD *)v20 == g_FootClass_Pool ) /*0x4da3eb*/
    {
      v8 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))this->TechnoClass + 18))(this, v29); /*0x4da408*/
      LOWORD(v21) = *v8 / 256; /*0x4da41f*/
      v9 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4da430*/
      HIWORD(v21) = v8[1] / 256; /*0x4da435*/
      v23 = v21; /*0x4da43e*/
      v18 = *(_DWORD *)(v9[33](this) + 1660); /*0x4da454*/
      v10 = (int *)FootClass::checkTurning((FootClass *)this->?); /*0x4da461*/
      *(_DWORD *)v20 = *CellClass::FindOpenNeighbor( /*0x4da478*/
                          (CellClass *)&v27,
                          v1,
                          v10,
                          (int)&g_FootClass_Pool,
                          (int)&v23,
                          v18,
                          1,
                          0,
                          v19);
    }
    v11 = (void (__thiscall **)(FootClass *, void *, int))this->TechnoClass; /*0x4da47d*/
    v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20); /*0x4da48b*/
    v11[288](this, v12, 1); /*0x4da493*/
    this->? = 1; /*0x4da499*/
  }
  MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4da4a6*/
  LOWORD(v14) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4da4b4*/
  return v14 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4da4d2*/
}



// ==== 0x004DA4E0  FootClass::CheckTargetValidity  this=FootClass  sig=csp ====
int __thiscall FootClass::CheckTargetValidity(FootClass *this, int a2, int a3)
{
  int result; // eax

  if ( !this->locomotor[0] ) /*0x4da4e8*/
    return TechnoClass::UpdatePowerDrain((char *)this, a2, a3); /*0x4da4e8*/
  result = (*(int (__stdcall **)(int, int))(*(_DWORD *)this->locomotor[0] + 52))(this->locomotor[0], a2); /*0x4da50a*/
  if ( !result ) /*0x4da50f*/
    return TechnoClass::UpdatePowerDrain((char *)this, a2, a3); /*0x4da519*/
  return result; /*0x4da51e*/
}



// ==== 0x004DA530  FootClass::MovementAI  this=FootClass  sig=csp ====
char __fastcall FootClass::MovementAI(FootClass *this)
{
  char result; // al
  _DWORD *v3; // eax
  double *v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int lastSightRange; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // edx
  int v16; // eax
  int unknown538; // ebp
  FootClass *v18; // edi
  int (__thiscall **vtable0)(FootClass *); // edx
  int v20; // edi
  unsigned int v21; // eax
  int unknown540; // eax
  char isFallingDown; // al
  int (__thiscall **v24)(FootClass *); // edx
  int v25; // eax
  char isSinking; // al
  int (__thiscall **v27)(FootClass *); // edx
  int v28; // eax
  int (__thiscall **v29)(FootClass *); // eax
  int v30; // eax
  char isCrashing; // al
  int (__thiscall **v32)(FootClass *); // edx
  int v33; // eax
  int (__thiscall **v34)(FootClass *); // edx
  int v35; // eax
  void (__thiscall **v36)(FootClass *, int *, int, _DWORD); // edx
  int (__stdcall ***v37)(_DWORD, int *, __int16 *); // eax
  int *locomotor; // ebp
  int v39; // edi
  int v40; // eax
  int (__thiscall **v41)(FootClass *); // eax
  FootClass *parasiteEatingMe; // esi
  int v43; // [esp+54h] [ebp-30h]
  int Traversability; // [esp+70h] [ebp-14h] BYREF
  __int16 v45[2]; // [esp+74h] [ebp-10h] BYREF
  int v46; // [esp+78h] [ebp-Ch] BYREF
  int v47; // [esp+7Ch] [ebp-8h]
  int v48; // [esp+80h] [ebp-4h]

  MovementAI::Begin((TechnoClass *)this); /*0x4da539*/
  result = this->?; /*0x4da53e*/
  if ( !result ) /*0x4da548*/
    return result; /*0x4da548*/
  this->FootClass_field_bool_6B3 = 0; /*0x4da54e*/
  if ( !(*(_DWORD *)&stru_A8EB00.?[416] % *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6152)) /*0x4da593*/
    && !*(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3383)
    && !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 21))(this)
    && !this->? )
  {
    v3 = (_DWORD *)(*((int (__thiscall **)(FootClass *, int *))this->TechnoClass + 18))(this, &v46); /*0x4da5a8*/
    LOWORD(Traversability) = *v3 / 256; /*0x4da5bb*/
    HIWORD(Traversability) = v3[1] / 256; /*0x4da5d3*/
    *(_DWORD *)v45 = Traversability; /*0x4da5dc*/
    v4 = (double *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45); /*0x4da5e6*/
    Traversability = Cell::GetTraversability(v4); /*0x4da5f4*/
    if ( Traversability > 0 ) /*0x4da5f8*/
    {
      v5 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4da5fe*/
      LOWORD(v6) = Math::RoundToInt((double)Traversability * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] /*0x4da60a*/
                                                                       + 6168));
      Traversability = v6; /*0x4da610*/
      result = (*((int (__thiscall **)(FootClass *, int *, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD))this->TechnoClass /*0x4da629*/
                + 91))(
                 this,
                 &Traversability,
                 0,
                 *(_DWORD *)(v5 + 6196),
                 0,
                 0,
                 1,
                 0);
      if ( !this->? ) /*0x4da62f*/
        return result; /*0x4da635*/
    }
  }
  if ( !this->? ) /*0x4da63b*/
  {
    if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3434) ) /*0x4da64d*/
    {
      v7 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 111))(this); /*0x4da65b*/
      if ( (unsigned __int8)Type::CheckAmbiguity((Type *)&stru_87F5F0.__pad_58[416], v7, 1) ) /*0x4da667*/
        this->? = 1; /*0x4da670*/
    }
  }
  if ( !this->locomotor[0] ) /*0x4da677*/
    WinAPI::Wrapper(-2147467261); /*0x4da684*/
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 128))(this->locomotor[0]) /*0x4da6bb*/
    && (*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 21))(this)
    && (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->?, (#375 *)dword_A83D4C) )
  {
    v8 = this->sightTimer[0]; /*0x4da6c8*/
    v9 = this->sightTimer[2]; /*0x4da6ce*/
    if ( v8 != -1 ) /*0x4da6d7*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v8 >= v9 ) /*0x4da6e3*/
      {
LABEL_21:
        (*((void (__thiscall **)(FootClass *, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass + 291))( /*0x4da6ef*/
          this,
          0,
          0,
          0,
          0);
        (*((void (__thiscall **)(FootClass *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass + 290))( /*0x4da706*/
          this,
          0,
          0,
          0,
          0,
          0);
        if ( this->? == (*((int (__thiscall **)(FootClass *))this->TechnoClass + 114))(this) ) /*0x4da72a*/
        {
          v13 = this->?[1]; /*0x4da750*/
          v46 = this->?[0]; /*0x4da753*/
          v47 = v13; /*0x4da758*/
          v48 = this->?[2]; /*0x4da763*/
          MapClass::RevealArea2((MapClass *)&stru_87F5F0.__pad_58[416], &v46, this->? - 3, this->? + 3, 0); /*0x4da77b*/
        }
        else
        {
          v10 = this->?[1]; /*0x4da72c*/
          v46 = this->?[0]; /*0x4da72f*/
          lastSightRange = this->?; /*0x4da733*/
          v12 = this->?[2]; /*0x4da73a*/
          v47 = v10; /*0x4da740*/
          v48 = v12; /*0x4da745*/
          MapClass::RevealArea2((MapClass *)&stru_87F5F0.__pad_58[416], &v46, 0, lastSightRange + 3, 0); /*0x4da74e*/
        }
        v14 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 114))(this); /*0x4da784*/
        v15 = v47; /*0x4da78a*/
        this->? = v14; /*0x4da78e*/
        this->sightTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4da79e*/
        this->sightTimer[1] = v15; /*0x4da7a4*/
        this->sightTimer[2] = 15; /*0x4da7aa*/
        goto LABEL_25; /*0x4da7aa*/
      }
      v9 -= *(_DWORD *)&stru_A8EB00.?[416] - v8; /*0x4da6e5*/
    }
    if ( v9 ) /*0x4da6e9*/
      goto LABEL_25; /*0x4da6e9*/
    goto LABEL_21; /*0x4da6e9*/
  }
LABEL_25:
  if ( !(*(_DWORD *)&stru_A8EB00.?[416] % 16) /*0x4da7d8*/
    && (*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 21))(this)
    && *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 111))(this) + 60) )
  {
    v43 = *(_DWORD *)(*((int (__thiscall **)(FootClass *, __int16 *))this->TechnoClass + 110))(this, v45); /*0x4da7f2*/
    v16 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 111))(this); /*0x4da7f8*/
    TeamClass::Update_0(*(TeamClass **)(v16 + 60), 59, (int)this, v43, 0, 0); /*0x4da801*/
  }
  unknown538 = this->unknown538; /*0x4da80c*/
  if ( !this->locomotor[0] /*0x4da850*/
    || this->?
    || this->?
    || this->? && !*(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1682)
    || this->? )
  {
    goto LABEL_67; /*0x4da856*/
  }
  if ( !this->locomotor[0] ) /*0x4da85c*/
    WinAPI::Wrapper(-2147467261); /*0x4da869*/
  result = (*(int (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 64))(this->locomotor[0]); /*0x4da877*/
  if ( this->? )
  {
    if ( this )
      v18 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 1 ? this : 0;
    else
      v18 = 0; /*0x4da88a*/
    if ( !this->locomotor[0] ) /*0x4da8a0*/
      WinAPI::Wrapper(-2147467261); /*0x4da8ad*/
    if ( ((*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 128))(this->locomotor[0]) /*0x4da934*/
       && !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 118))(this)
       || this->?
       && *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 912)
       && v18
       && !FootClass::updateScanRange(v18))
      && !(*(_DWORD *)&stru_A8EB00.?[416]
         % *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 660))
      && !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 117))(this)
      && !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 118))(this)
      && !this->isAttackedByLocomotor )
    {
      goto LABEL_66; /*0x4da934*/
    }
    if ( *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 664) ) /*0x4da94a*/
    {
      if ( !this->locomotor[0] ) /*0x4da952*/
        WinAPI::Wrapper(-2147467261); /*0x4da95f*/
      if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 128))(this->locomotor[0]) /*0x4da9af*/
        && !(*(_DWORD *)&stru_A8EB00.?[416]
           % *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 664))
        && !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 117))(this)
        && !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 118))(this)
        && !this->isAttackedByLocomotor )
      {
        goto LABEL_66; /*0x4da9af*/
      }
    }
    if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1709) /*0x4da9f3*/
      && (*((int (__thiscall **)(FootClass *))this->TechnoClass + 114))(this) > 0
      && !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 117))(this)
      && !(*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 118))(this)
      && !this->isAttackedByLocomotor )
    {
LABEL_66:
      ++this->unknown538; /*0x4da9fb*/
    }
LABEL_67:
    if ( unknown538 == this->unknown538 ) /*0x4daa07*/
    {
      if ( !this->locomotor[0] ) /*0x4daa09*/
        WinAPI::Wrapper(-2147467261); /*0x4daa16*/
      if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 128))(this->locomotor[0]) ) /*0x4daa24*/
        goto LABEL_136; /*0x4daa24*/
    }
    if ( this->? /*0x4daa5c*/
      || this->?
      || this->? && *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1682) )
    {
LABEL_136:
      if ( this->FootClass_field_bool_53C ) /*0x4daafa*/
      {
        unknown540 = this->unknown540; /*0x4dab02*/
        if ( !unknown540 || this->? || this->? ) /*0x4dab14*/
        {
          Mixer::ReleaseChannel((Mixer *)this->audioController7); /*0x4dab2b*/
          this->FootClass_field_bool_53C = 0; /*0x4dab30*/
          this->unknown540 = 0; /*0x4dab36*/
        }
        else
        {
          this->unknown540 = unknown540 - 1; /*0x4dab1d*/
        }
      }
    }
    else
    {
      if ( !this->FootClass_field_bool_53C /*0x4daa87*/
        && *(int *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1284) > 0 )
      {
        AudioController::Stop((AudioController *)this->audioController7); /*0x4daa91*/
        v46 = this->?[0]; /*0x4daaa2*/
        vtable0 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4daaa6*/
        v47 = this->?[1]; /*0x4daaab*/
        v48 = this->?[2]; /*0x4daab2*/
        v20 = vtable0[33](this) + 1268; /*0x4daac5*/
        v21 = Random::State(&Randomizer_Global); /*0x4daacb*/
        StartAudioControllerAt( /*0x4daae2*/
          *(_DWORD *)(*(_DWORD *)(v20 + 4) + 4 * (v21 % *(_DWORD *)(v20 + 16))),
          &v46,
          (int **)this->audioController7);
        this->FootClass_field_bool_53C = 1; /*0x4daae7*/
      }
      this->unknown540 = 3; /*0x4daaee*/
    }
    isFallingDown = this->?; /*0x4dab3c*/
    if ( isFallingDown != this->? ) /*0x4dab4a*/
    {
      if ( isFallingDown /*0x4dab67*/
        && *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1356) != -1
        && this->? )
      {
        v46 = this->?[0]; /*0x4dab7c*/
        v47 = this->?[1]; /*0x4dab85*/
        v24 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4dab89*/
        v48 = this->?[2]; /*0x4dab8e*/
        v25 = v24[33](this); /*0x4dab92*/
        StartAudioControllerAt(*(_DWORD *)(v25 + 1356), &v46, 0); /*0x4daba0*/
        this->? = this->?; /*0x4dabab*/
      }
      else
      {
        this->? = this->?; /*0x4dabbc*/
      }
    }
    isSinking = this->?; /*0x4dabc7*/
    if ( isSinking != this->? ) /*0x4dabd5*/
    {
      if ( isSinking ) /*0x4dabdd*/
      {
        if ( *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1364) != -1 ) /*0x4dabf3*/
        {
          v46 = this->?[0]; /*0x4dac02*/
          v47 = this->?[1]; /*0x4dac0b*/
          v27 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4dac0f*/
          v48 = this->?[2]; /*0x4dac14*/
          v28 = v27[33](this); /*0x4dac18*/
          StartAudioControllerAt(*(_DWORD *)(v28 + 1364), &v46, 0); /*0x4dac26*/
        }
        if ( *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1352) == -1 ) /*0x4dac3b*/
        {
          if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 520) != -1 ) /*0x4dac86*/
          {
            v46 = this->?[0]; /*0x4dac94*/
            v47 = this->?[1]; /*0x4dac9b*/
            v48 = this->?[2]; /*0x4daca9*/
            StartAudioControllerAt( /*0x4dacb7*/
              *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 520),
              &v46,
              (int **)this->audioController7);
          }
        }
        else
        {
          v46 = this->?[0]; /*0x4dac49*/
          v47 = this->?[1]; /*0x4dac57*/
          v29 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4dac5b*/
          v48 = this->?[2]; /*0x4dac60*/
          v30 = v29[33](this); /*0x4dac66*/
          StartAudioControllerAt(*(_DWORD *)(v30 + 1352), &v46, (int **)this->audioController7); /*0x4dac74*/
        }
      }
      else if ( !this->FootClass_field_bool_53C ) /*0x4dacbe*/
      {
        Mixer::ReleaseChannel((Mixer *)this->audioController7); /*0x4daccc*/
      }
      this->? = this->?; /*0x4dacd7*/
    }
    isCrashing = this->?; /*0x4dacdd*/
    if ( isCrashing != this->? ) /*0x4daceb*/
    {
      if ( isCrashing ) /*0x4dacf3*/
      {
        Mixer::ReleaseChannel((Mixer *)this->audioController7); /*0x4dad01*/
        if ( *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1360) != -1 /*0x4dad1f*/
          && (unsigned __int8)House::IsHumanPlayer((House *)this->?) )
        {
          v46 = this->?[0]; /*0x4dad35*/
          v47 = this->?[1]; /*0x4dad3e*/
          v32 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4dad42*/
          v48 = this->?[2]; /*0x4dad47*/
          v33 = v32[33](this); /*0x4dad4b*/
          StartAudioControllerAt(*(_DWORD *)(v33 + 1360), &v46, 0); /*0x4dad59*/
        }
        if ( *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1348) != -1 ) /*0x4dad6f*/
        {
          v46 = this->?[0]; /*0x4dad7e*/
          v34 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4dad82*/
          v47 = this->?[1]; /*0x4dad87*/
          v48 = this->?[2]; /*0x4dad8e*/
          v35 = v34[33](this); /*0x4dad94*/
          StartAudioControllerAt(*(_DWORD *)(v35 + 1348), &v46, (int **)this->audioController7); /*0x4dada2*/
        }
      }
      else if ( !this->FootClass_field_bool_53C ) /*0x4dada9*/
      {
        Mixer::ReleaseChannel((Mixer *)this->audioController7); /*0x4dadb7*/
      }
      this->? = this->?; /*0x4dadc2*/
    }
    v46 = this->?[0]; /*0x4dadd4*/
    v47 = this->?[1]; /*0x4dade1*/
    v48 = this->?[2]; /*0x4dade8*/
    StartAudioController(&v46, (int **)this->audioController7); /*0x4dadf0*/
    if ( (stru_A8EB00.?[416] & 0x3F) == 0x3F /*0x4dae37*/
      && !this->movementDestination
      && !this->?
      && !*(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 111))(this) + 284)
      && (*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 172))(this)
      && !(*((int (__thiscall **)(FootClass *))this->TechnoClass + 114))(this) )
    {
      v36 = (void (__thiscall **)(FootClass *, int *, int, _DWORD))this->TechnoClass; /*0x4dae41*/
      v46 = 0; /*0x4dae4d*/
      v47 = 0; /*0x4dae51*/
      v48 = 0; /*0x4dae55*/
      v36[93](this, &v46, 1, 0); /*0x4dae59*/
    }
    v37 = (int (__stdcall ***)(_DWORD, int *, __int16 *))this->locomotor[0]; /*0x4dae5f*/
    locomotor = this->locomotor; /*0x4dae65*/
    v39 = 0; /*0x4dae6b*/
    if ( v37 )
    {
      v40 = (**v37)(v37, &stru_818E00.?[17], v45); /*0x4dae7e*/
      v39 = v40 < 0 ? 0 : *(_DWORD *)v45;
      if ( v40 < 0 && v40 != -2147467262 ) /*0x4dae99*/
        WinAPI::Wrapper(v40); /*0x4dae9c*/
      if ( v39 && (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)v39 + 20))(v40 < 0 ? 0 : *(_DWORD *)v45) )
      {
        if ( *locomotor ) /*0x4daeaf*/
          (*(void (__stdcall **)(int))(*(_DWORD *)*locomotor + 8))(*locomotor); /*0x4daeb9*/
        *locomotor = 0; /*0x4daebc*/
        (*(void (__stdcall **)(int, int *))(*(_DWORD *)v39 + 16))(v39, this->locomotor); /*0x4daec3*/
      }
    }
    v41 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4daec6*/
    this->FootClass_field_bool_6B4 = 0; /*0x4daeca*/
    result = v41[118](this); /*0x4daed0*/
    if ( !result ) /*0x4daed8*/
      result = FootClass::ProcessEnterTransport(this); /*0x4daedc*/
    parasiteEatingMe = this->parasiteEatingMe; /*0x4daee1*/
    if ( parasiteEatingMe ) /*0x4daee9*/
      result = (*((int (__thiscall **)(ParasiteClass *))parasiteEatingMe->parasiteImUsing->AbstractClass + 23))(parasiteEatingMe->parasiteImUsing); /*0x4daef3*/
    if ( v39 ) /*0x4daef8*/
      return (*(char (__stdcall **)(int))(*(_DWORD *)v39 + 8))(v39); /*0x4daefd*/
  }
  return result; /*0x4daf00*/
}



// ==== 0x004DAF10  FootClass::UpdateState  this=FootClass  sig=csp ====
_DWORD *__thiscall FootClass::UpdateState(
        FootClass *this,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6,
        int *a7,
        const void *a8,
        int a9,
        int a10,
        int a11)
{
  char v13[8]; // [esp+14h] [ebp-38h] BYREF
  _BYTE v14[48]; // [esp+1Ch] [ebp-30h] BYREF

  qmemcpy(v14, a8, sizeof(v14)); /*0x4daf25*/
  if ( this->locomotor[0] ) /*0x4daf34*/
    (*(void (__stdcall **)(int, char *))(*(_DWORD *)this->locomotor[0] + 44))(this->locomotor[0], v13); /*0x4daf5e*/
  return (_DWORD *)TechnoClass::UpdateState((TechnoClass *)this); /*0x4dafb0*/
}



// ==== 0x004DAFC0  TechnoClass::ComputeSpeedFactor  this=FootClass  sig=csp ====
int __thiscall TechnoClass::ComputeSpeedFactor(TechnoClass *this)
{
  int v2; // edi
  int v3; // edi
  int v4; // ebx
  int v5; // ebx
  int v6; // ebp
  int v7; // ebp
  int v8; // eax
  int v10; // [esp+8h] [ebp-8h]

  v10 = 0; /*0x4dafc7*/
  if ( this->Locomotor ) /*0x4dafcf*/
    v10 = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 56))(this->Locomotor); /*0x4daff3*/
  v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x4db005*/
  v3 = TechnoClass::ScanNeighborCells(this) * *(_DWORD *)(v2 + 3524); /*0x4db014*/
  v4 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x4db021*/
  v5 = TechnoClass::IsValidBuildingPlacement(this) * *(_DWORD *)(v4 + 3528); /*0x4db032*/
  v6 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x4db03d*/
  v7 = TechnoClass::CheckAdjacencyFlags(this) * *(_DWORD *)(v6 + 3520); /*0x4db04c*/
  if ( TechnoClass::CheckTargetCell(this) ) /*0x4db057*/
    v8 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3532); /*0x4db06a*/
  else
    v8 = 0; /*0x4db072*/
  if ( v3 <= v5 ) /*0x4db078*/
    v3 = v5; /*0x4db07a*/
  if ( v3 <= v7 ) /*0x4db07e*/
    v3 = v7; /*0x4db080*/
  if ( v3 <= v8 ) /*0x4db086*/
    v3 = v8; /*0x4db088*/
  return v10 + v3 + TechnoClass::GetDrawHeight(this); /*0x4db097*/
}



// ==== 0x004DB0A0  FootClass::GetAttackSpeed  this=FootClass  sig=csp ====
int __thiscall FootClass::GetAttackSpeed(FootClass *this)
{
  if ( this->locomotor[0] ) /*0x4db0a3*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 60))(this->locomotor[0]); /*0x4db0c4*/
  else
    return 2; /*0x4db0c9*/
}



// ==== 0x004DB0D0  TechnoClass::QueueDrawVoiceResponse  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::QueueDrawVoiceResponse(
        TechnoClass *this,
        _BYTE **a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int *a7,
        int a8,
        unsigned __int8 a9,
        int a10,
        int a11,
        int a12)
{
  int result; // eax
  int v14; // edx
  int v15; // eax
  _DWORD *v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // [esp+Ch] [ebp-10h] BYREF
  int v20; // [esp+10h] [ebp-Ch]
  int v21; // [esp+14h] [ebp-8h] BYREF

  result = *((_DWORD *)this + 413); /*0x4db0d6*/
  if ( result ) /*0x4db0de*/
  {
    result = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 32))(*((_DWORD *)this + 413)); /*0x4db0fb*/
    if ( (_BYTE)result == 1 ) /*0x4db100*/
    {
      v14 = *a7; /*0x4db10e*/
      v20 = a7[1]; /*0x4db110*/
      v15 = *((_DWORD *)this + 413); /*0x4db114*/
      v19 = v14; /*0x4db11c*/
      if ( v15 ) /*0x4db120*/
      {
        v16 = (_DWORD *)(*(int (__stdcall **)(_DWORD, int *))(**((_DWORD **)this + 413) + 48))( /*0x4db13e*/
                          *((_DWORD *)this + 413),
                          &v21);
        v17 = v16[1]; /*0x4db143*/
        v18 = a7[1]; /*0x4db14a*/
        v19 = *v16 + *a7; /*0x4db14f*/
        v20 = v17 + v18; /*0x4db153*/
      }
      return QueueTechnoVoiceLine(this, a2, a3, a4, a5, a6, (int)&v19, a8, a9, a10, a11, a12); /*0x4db190*/
    }
  }
  return result; /*0x4db196*/
}



// ==== 0x004DB1A0  TechnoClass::ComputeSpeedFactorEx  this=FootClass  sig=csp ====
int __thiscall TechnoClass::ComputeSpeedFactorEx(double *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int result; // eax
  int v9; // [esp+8h] [ebp-Ch]
  double TargetSpeedMultiplier; // [esp+Ch] [ebp-8h]

  v2 = (*(int (__thiscall **)(double *))(this->hasParachute)(this); /*0x4db1a9*/
  TargetSpeedMultiplier = TechnoClass::GetTargetSpeedMultiplier((_DWORD *)this->owner, v2); /*0x4db1bf*/
  v3 = (*(int (__thiscall **)(double *))(this->targetLaserOpacity)(this); /*0x4db1c3*/
  LOWORD(v4) = Math::RoundToInt((double)v3 * TargetSpeedMultiplier * this->suspendedMission); /*0x4db1db*/
  v9 = v4; /*0x4db1e4*/
  if ( (unsigned __int8)TechnoTypeClass::HasVoiceResponse((int *)this, 0) ) /*0x4db1e8*/
  {
    LOWORD(v5) = Math::RoundToInt((double)v9 * *(double *)&dword_8871E0->PlayerJoined); /*0x4db200*/
    v9 = v5; /*0x4db205*/
  }
  LOWORD(v6) = Math::RoundToInt((double)v9 * this->rockerLinkedUnit); /*0x4db213*/
  v7 = v6; /*0x4db21c*/
  if ( (*(int (__thiscall **)(double *))(this->fallRate)(this) != 1 ) /*0x4db224*/
    return v7; /*0x4db23e*/
  result = v7; /*0x4db22f*/
  if ( *((_DWORD *)this + 435) != -1 ) /*0x4db231*/
    return v7 / 2; /*0x4db237*/
  return result; /*0x4db236*/
}



// ==== 0x004DB250  FootClass::COMStub_Return0_69  this=FootClass  sig=csp ====
void __stdcall AbstractClass::COMStub_Return0_69(FootClass *this, int a2)
{
  ; /*0x4db250*/
}



// ==== 0x004DB260  FootClass::CleanupDirection  this=FootClass  sig=csp ====
int __thiscall TechnoClass::CleanupDirection(FootClass *this)
{
  int v2; // ebx
  int i; // esi
  int v4; // ecx
  _BYTE *v5; // eax
  int v7; // [esp+Ch] [ebp-8h]
  __int16 v8[2]; // [esp+10h] [ebp-4h] BYREF

  if ( !this->? && (*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) ) /*0x4db276*/
  {
    v2 = this->lastMapCoords[0]; /*0x4db285*/
    for ( i = 0; i < 8; ++i ) /*0x4db296*/
    {
      v4 = i & 7; /*0x4db29a*/
      LOWORD(v7) = v2 + LOWORD(g_DDrawSurfaceManager.scenario[v4 + 82]); /*0x4db2b3*/
      HIWORD(v7) = HIWORD(v2) + HIWORD(g_DDrawSurfaceManager.scenario[v4 + 82]); /*0x4db2bf*/
      *(_DWORD *)v8 = v7; /*0x4db2c8*/
      v5 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8); /*0x4db2d2*/
      --v5[290]; /*0x4db2e3*/
    }
    if ( !dword_A8E7AC ) /*0x4db2f5*/
      (*((void (__thiscall **)(FootClass *))this->TechnoClass + 320))(this); /*0x4db2fb*/
    if ( this->locomotor[0] ) /*0x4db301*/
    {
      (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)this->locomotor[0] + 156))(this->locomotor[0], 0); /*0x4db324*/
      if ( !this->locomotor[0] ) /*0x4db32a*/
        WinAPI::Wrapper(-2147467261); /*0x4db339*/
      (*(void (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 176))(this->locomotor[0]); /*0x4db347*/
    }
    AudioFile::Stop((AudioFile *)this->audioController7); /*0x4db353*/
    if ( *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1520) ) /*0x4db362*/
      (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 315))(this, g_FootClass_Pool); /*0x4db376*/
    if ( *(_DWORD *)(*((int (__thiscall **)(FootClass *, __int16 *))this->TechnoClass + 189))(this, v8) != g_FootClass_Pool ) /*0x4db395*/
      GadgetGrid::RemoveItem((GadgetGrid *)&g_CellClassManager, (int)this); /*0x4db3aa*/
  }
  return TechnoClass::CleanupDeploy((TechnoClass *)this); /*0x4db3b6*/
}



// ==== 0x004DB3C0  ObjectClass::LoadFromStream_Common  this=FootClass  sig=csp ====
int __stdcall ObjectClass::LoadFromStream_Common(int a1, LPSTREAM pStm)
{
  int v3; // eax
  IStream *v4; // ebp
  int result; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // edi
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int i; // edi
  int j; // edi
  int v20; // [esp+54h] [ebp-4h] BYREF
  int v21; // [esp+5Ch] [ebp+4h]
  int v22; // [esp+5Ch] [ebp+4h]

  v3 = *(_DWORD *)(a1 + 1652); /*0x4db3cb*/
  if ( v3 ) /*0x4db3d3*/
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*(_DWORD *)(a1 + 1652)); /*0x4db3d8*/
  v4 = pStm; /*0x4db3db*/
  *(_DWORD *)(a1 + 1652) = 0; /*0x4db3df*/
  result = BuildingClass::AllocAndCtor(a1, (int)v4); /*0x4db3e7*/
  if ( result >= 0 ) /*0x4db3ee*/
  {
    result = (*(int (__stdcall **)(IStream *, LPSTREAM *, int, _DWORD))(*(_DWORD *)v4->__pad_0 + 12))(v4, &pStm, 4, 0); /*0x4db400*/
    if ( result >= 0 ) /*0x4db405*/
    {
      v6 = a1 + 1416; /*0x4db40b*/
      if ( a1 != -1416 ) /*0x4db413*/
      {
        AbstractClassVector::Construct((_DWORD *)(a1 + 1416), 0, 0); /*0x4db419*/
        *(_DWORD *)v6 = &DynamicVectorClass<AbstractClass *>::`vftable'; /*0x4db41e*/
        *(_DWORD *)(a1 + 1436) = 10; /*0x4db424*/
        *(_DWORD *)(a1 + 1432) = 0; /*0x4db42b*/
      }
      v21 = 0; /*0x4db432*/
      if ( (int)pStm <= 0 ) /*0x4db438*/
      {
LABEL_16:
        result = (*(int (__stdcall **)(IStream *, LPSTREAM *, int, _DWORD))(*(_DWORD *)v4->__pad_0 + 12))( /*0x4db4a2*/
                   v4,
                   &pStm,
                   4,
                   0);
        if ( result >= 0 ) /*0x4db4b3*/
        {
          v12 = a1 + 1452; /*0x4db4b9*/
          if ( a1 != -1452 ) /*0x4db4c1*/
          {
            AbstractClassVector::Construct((_DWORD *)(a1 + 1452), 0, 0); /*0x4db4c7*/
            *(_DWORD *)v12 = &DynamicVectorClass<AbstractClass *>::`vftable'; /*0x4db4cc*/
            *(_DWORD *)(a1 + 1472) = 10; /*0x4db4d2*/
            *(_DWORD *)(a1 + 1468) = 0; /*0x4db4d9*/
          }
          v22 = 0; /*0x4db4e0*/
          if ( (int)pStm <= 0 ) /*0x4db4e6*/
          {
LABEL_28:
            *(_DWORD *)(a1 + 1652) = 0; /*0x4db550*/
            ObjectClass::updateStateFlags((int *)(a1 + 1652)); /*0x4db55a*/
            *(_DWORD *)(a1 + 1652) = 0; /*0x4db566*/
            OleLoadFromStream(v4, &IID_ILocomotion, (LPVOID *)(a1 + 1652)); /*0x4db568*/
            *(_DWORD *)(a1 + 1440) = 0; /*0x4db574*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1492)); /*0x4db580*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1496)); /*0x4db591*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1444)); /*0x4db5a2*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1448)); /*0x4db5b3*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1480)); /*0x4db5c4*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1484)); /*0x4db5d5*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1500)); /*0x4db5e6*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1684)); /*0x4db5f7*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 1692)); /*0x4db608*/
            AudioController::Init((_DWORD *)(a1 + 1348)); /*0x4db613*/
            *(_BYTE *)(a1 + 1340) = 0; /*0x4db618*/
            *(_DWORD *)(a1 + 1344) = 0; /*0x4db61e*/
            for ( i = 0; i < *(_DWORD *)(a1 + 1468); ++i ) /*0x4db62e*/
              ObjectPtr::RegisterForTracking( /*0x4db63f*/
                (int)&SwizzleManagerClass_Instance,
                (int *)(*(_DWORD *)(a1 + 1456) + 4 * i));
            for ( j = 0; j < *(_DWORD *)(a1 + 1432); ++j ) /*0x4db659*/
              ObjectPtr::RegisterForTracking( /*0x4db66a*/
                (int)&SwizzleManagerClass_Instance,
                (int *)(*(_DWORD *)(a1 + 1420) + 4 * j));
            return 0; /*0x4db67a*/
          }
          else
          {
            while ( 1 ) /*0x4db4e8*/
            {
              v13 = *(_DWORD *)v4->__pad_0; /*0x4db4e8*/
              v20 = 0; /*0x4db4f4*/
              result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(v13 + 12))(v4, &v20, 4, 0); /*0x4db4f8*/
              if ( result < 0 ) /*0x4db4fd*/
                break; /*0x4db4fd*/
              v14 = *(_DWORD *)(a1 + 1460); /*0x4db503*/
              if ( *(_DWORD *)(a1 + 1468) < v14 /*0x4db525*/
                || (*(_BYTE *)(a1 + 1465) || !v14)
                && (v15 = *(_DWORD *)(a1 + 1472), v15 > 0)
                && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 8))(a1 + 1452, v14 + v15, 0) )
              {
                v16 = *(_DWORD *)(a1 + 1468); /*0x4db52c*/
                v17 = *(_DWORD *)(a1 + 1456); /*0x4db52f*/
                *(_DWORD *)(a1 + 1468) = v16 + 1; /*0x4db535*/
                *(_DWORD *)(v17 + 4 * v16) = v20; /*0x4db53c*/
              }
              if ( ++v22 >= (int)pStm ) /*0x4db54e*/
                goto LABEL_28; /*0x4db54e*/
            }
          }
        }
      }
      else
      {
        while ( 1 ) /*0x4db43a*/
        {
          v7 = *(_DWORD *)v4->__pad_0; /*0x4db43a*/
          v20 = 0; /*0x4db446*/
          result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(v7 + 12))(v4, &v20, 4, 0); /*0x4db44a*/
          if ( result < 0 ) /*0x4db44f*/
            break; /*0x4db44f*/
          v8 = *(_DWORD *)(a1 + 1424); /*0x4db455*/
          if ( *(_DWORD *)(a1 + 1432) < v8 /*0x4db477*/
            || (*(_BYTE *)(a1 + 1429) || !v8)
            && (v9 = *(_DWORD *)(a1 + 1436), v9 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 8))(a1 + 1416, v8 + v9, 0) )
          {
            v10 = *(_DWORD *)(a1 + 1432); /*0x4db47e*/
            v11 = *(_DWORD *)(a1 + 1420); /*0x4db481*/
            *(_DWORD *)(a1 + 1432) = v10 + 1; /*0x4db487*/
            *(_DWORD *)(v11 + 4 * v10) = v20; /*0x4db48e*/
          }
          if ( ++v21 >= (int)pStm ) /*0x4db4a0*/
            goto LABEL_16; /*0x4db4a0*/
        }
      }
    }
  }
  return result; /*0x4db67c*/
}



// ==== 0x004DB690  ObjectClass::SaveToStream_Common  this=FootClass  sig=csp ====
int __stdcall ObjectClass::SaveToStream_Common(
        ObjectClass *this,
        LPPERSISTSTREAM pPStm,
        struct IPersistStreamVtbl *attachedBomb)
{
  IStream *v3; // esi
  ObjectClass *v4; // edi
  int SizeMax; // ebx
  int v6; // edx
  int result; // eax
  int v8; // ebx
  int v9; // edx
  int v10; // ebx
  int (__stdcall ***v11)(_DWORD, void *, ObjectClass **); // edi
  int v12; // edi
  IPersistStream *v13; // ebx

  v3 = (IStream *)pPStm; /*0x4db696*/
  v4 = this; /*0x4db69b*/
  SizeMax = IPersistStream::GetSizeMax((TechnoClass *)this, (int)pPStm, (int)attachedBomb); /*0x4db6a7*/
  if ( SizeMax < 0 ) /*0x4db6ab*/
    return SizeMax; /*0x4db6ab*/
  v6 = *(_DWORD *)v3->__pad_0; /*0x4db6b7*/
  attachedBomb = (struct IPersistStreamVtbl *)v4[8].attachedBomb; /*0x4db6c3*/
  result = (*(int (__stdcall **)(IStream *, struct IPersistStreamVtbl **, int, _DWORD))(v6 + 16))( /*0x4db6c7*/
             v3,
             &attachedBomb,
             4,
             0);
  if ( result < 0 ) /*0x4db6cc*/
    return result; /*0x4db6cc*/
  v8 = 0; /*0x4db6d6*/
  if ( (int)attachedBomb <= 0 ) /*0x4db6da*/
  {
LABEL_6:
    v9 = *(_DWORD *)v3->__pad_0; /*0x4db701*/
    attachedBomb = (struct IPersistStreamVtbl *)v4[8].customSound_controller[3]; /*0x4db713*/
    result = (*(int (__stdcall **)(IStream *, struct IPersistStreamVtbl **, int, _DWORD))(v9 + 16))( /*0x4db717*/
               v3,
               &attachedBomb,
               4,
               0);
    if ( result < 0 ) /*0x4db71c*/
      return result; /*0x4db71c*/
    v10 = 0; /*0x4db726*/
    if ( (int)attachedBomb > 0 ) /*0x4db72a*/
    {
      do /*0x4db73d*/
      {
        result = (*(int (__stdcall **)(IStream *, int, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 16))( /*0x4db73d*/
                   v3,
                   v4[8].customSound_controller[0] + 4 * v10,
                   4,
                   0);
        if ( result < 0 ) /*0x4db742*/
          return result; /*0x4db742*/
      }
      while ( ++v10 < (int)attachedBomb ); /*0x4db73d*/
    }
    v11 = *(int (__stdcall ****)(_DWORD, void *, ObjectClass **))&v4[9].bombVisible; /*0x4db751*/
    pPStm = 0; /*0x4db757*/
    if ( v11 ) /*0x4db761*/
    {
      v12 = (**v11)(v11, &unk_820270, &this); /*0x4db772*/
      if ( v12 >= 0 ) /*0x4db776*/
      {
        v13 = (IPersistStream *)this; /*0x4db794*/
        if ( pPStm ) /*0x4db79a*/
          (*(void (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x4db79f*/
        pPStm = v13; /*0x4db7a2*/
      }
      else
      {
        if ( pPStm ) /*0x4db77e*/
          (*(void (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x4db783*/
        pPStm = 0; /*0x4db786*/
      }
      if ( v12 < 0 && v12 != -2147467262 ) /*0x4db7b0*/
        WinAPI::Wrapper(v12); /*0x4db7b3*/
    }
    OleSaveToStream(pPStm, v3); /*0x4db7be*/
    SizeMax = 0; /*0x4db7c4*/
    if ( pPStm ) /*0x4db7cc*/
      (*(void (__stdcall **)(LPPERSISTSTREAM))(*(_DWORD *)pPStm + 8))(pPStm); /*0x4db7d1*/
    return SizeMax; /*0x4db7d4*/
  }
  while ( 1 ) /*0x4db6ed*/
  {
    result = (*(int (__stdcall **)(IStream *, int, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 16))( /*0x4db6ed*/
               v3,
               v4[8].fallRate + 4 * v8,
               4,
               0);
    if ( result < 0 ) /*0x4db6f2*/
      return result; /*0x4db7d6*/
    if ( ++v8 >= (int)attachedBomb ) /*0x4db6ff*/
      goto LABEL_6; /*0x4db6ff*/
  }
}



// ==== 0x004DB7E0  FootClass::Destru_vt30  this=FootClass  sig=csp ====
int __thiscall FootClass::Destru_vt30(FootClass *this)
{
  if ( !this->locomotor[0] ) /*0x4db7e3*/
    WinAPI::Wrapper(-2147467261); /*0x4db7f2*/
  return (*(int (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 116))(this->locomotor[0]); /*0x4db803*/
}



// ==== 0x004DB810  TechnoClass::SetPositionAnimated  this=FootClass  sig=csp ====
int __thiscall TechnoClass::SetPositionAnimated(TechnoClass *this, _DWORD *a2)
{
  int *location; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  bool v7; // bl
  int result; // eax

  location = this->?; /*0x4db821*/
  v4 = this->?[0]; /*0x4db823*/
  v5 = this->?[1]; /*0x4db827*/
  v6 = location[2]; /*0x4db82a*/
  v7 = *a2 != v4 || a2[1] != v5 || a2[2] != v6; /*0x4db83d*/
  if ( this->? ) /*0x4db83f*/
  {
    (*((void (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 73))(this, 0); /*0x4db84c*/
    ObjectClass::SetPosition((IUnknown *)this); /*0x4db855*/
    result = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 73))(this, 1); /*0x4db860*/
  }
  else
  {
    result = ObjectClass::SetPosition((IUnknown *)this); /*0x4db86b*/
  }
  if ( v7 ) /*0x4db872*/
  {
    result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x4db878*/
    if ( *(_BYTE *)(result + 1508) ) /*0x4db87e*/
      return FootClass::UpdatePassengerCoords((FootClass *)this); /*0x4db88a*/
  }
  return result; /*0x4db88f*/
}



// ==== 0x004DB8A0  ObjectClass::method_4DB8A0  this=ObjectClass  sig=csp ====
int __thiscall sub_4DB8A0(TechnoClass *this)
{
  int v2; // ebx
  int InstanceCOM; // eax
  int v4; // eax
  LPVOID v5; // esi
  int result; // eax
  LPVOID ppv; // [esp+20h] [ebp-8h] BYREF
  int v8; // [esp+24h] [ebp-4h] BYREF

  v2 = *((_DWORD *)this + 413); /*0x4db8a7*/
  if ( v2 ) /*0x4db8af*/
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 4))(*((_DWORD *)this + 413)); /*0x4db8b4*/
  ppv = 0; /*0x4db8c4*/
  InstanceCOM = CreateInstanceCOM((ObjectClass *)&ppv, (IID *)&g_CLSID_DriveLocomotion, 0, 7u); /*0x4db8cc*/
  if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x4db8da*/
    WinAPI::Wrapper(InstanceCOM); /*0x4db8dd*/
  if ( !ppv ) /*0x4db8e8*/
    WinAPI::Wrapper(-2147467261); /*0x4db8ef*/
  (*(void (__stdcall **)(LPVOID, TechnoClass *))(*(_DWORD *)ppv + 12))(ppv, this); /*0x4db8fc*/
  v8 = 0; /*0x4db903*/
  if ( !ppv ) /*0x4db90d*/
    goto LABEL_13; /*0x4db90d*/
  v4 = StreamClass::Set((StreamClass *)&v8, &ppv); /*0x4db918*/
  if ( v4 < 0 && v4 != -2147467262 ) /*0x4db926*/
    WinAPI::Wrapper(v4); /*0x4db929*/
  if ( !v8 ) /*0x4db934*/
LABEL_13:
    WinAPI::Wrapper(-2147467261); /*0x4db93b*/
  (*(void (__stdcall **)(int, int))(*(_DWORD *)v8 + 12))(v8, v2); /*0x4db949*/
  v5 = (LPVOID)*((_DWORD *)this + 413); /*0x4db94c*/
  result = (int)ppv; /*0x4db952*/
  if ( v5 != ppv ) /*0x4db958*/
  {
    *((_DWORD *)this + 413) = ppv; /*0x4db95c*/
    if ( result ) /*0x4db962*/
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)result + 4))(result); /*0x4db967*/
      result = (int)ppv; /*0x4db96a*/
    }
    if ( v5 ) /*0x4db970*/
    {
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v5 + 8))(v5); /*0x4db975*/
      result = (int)ppv; /*0x4db978*/
    }
  }
  if ( v8 ) /*0x4db983*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x4db988*/
    result = (int)ppv; /*0x4db98b*/
  }
  if ( result ) /*0x4db991*/
    result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x4db996*/
  if ( v2 ) /*0x4db99b*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2); /*0x4db9a0*/
  return result; /*0x4db9a3*/
}



// ==== 0x004DB9B0  FootClass::vt_entry_504  this=FootClass  sig=csp ====
char __thiscall BuildingClass::vt_entry_504(FootClass *this)
{
  int Member; // eax
  int v3; // esi
  int v4; // ebx

  if ( this->movementDestination || this->? ) /*0x4db9bd*/
    return 0; /*0x4dba1f*/
  Member = Team::GetMember((Team *)this, 0); /*0x4db9cb*/
  v3 = Member; /*0x4db9d0*/
  v4 = 0; /*0x4db9d2*/
  if ( Member ) /*0x4db9d6*/
  {
    Member = (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member); /*0x4db9dc*/
    if ( Member == 6 ) /*0x4db9e2*/
      v4 = v3; /*0x4db9e4*/
  }
  LOBYTE(Member) = this->? == 7 && v4 && *(_BYTE *)(*(_DWORD *)(v4 + 1312) + 5801); /*0x4dba03*/
  LOBYTE(Member) = (_BYTE)Member == 0; /*0x4dba0f*/
  return (*((int (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 289))(this, 0, Member); /*0x4dba1d*/
}



// ==== 0x004DBA30  FootClass::vt_entry_548  this=FootClass  sig=csp ====
void FootClass::vt_entry_548(FootClass *this)
{
  ; /*0x4dba30*/
}



// ==== 0x004DBA40  FootClass::vt_entry_54C  this=FootClass  sig=csp ====
void FootClass::vt_entry_54C(FootClass *this)
{
  ; /*0x4dba40*/
}



// ==== 0x004DBA50  TechnoClass::GetTargetCellCenter  this=FootClass  sig=csp ====
int __thiscall TechnoClass::GetTargetCellCenter(TechnoClass *this, int a2)
{
  int *v3; // edi
  int v4; // kr04_4
  int v5; // eax
  int v6; // edx
  int (__thiscall **vtable0)(TechnoClass *, _DWORD *); // eax
  _DWORD v9[3]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v10[12]; // [esp+14h] [ebp-Ch] BYREF

  v3 = (int *)(*(int (__thiscall **)(int, _BYTE *, TechnoClass *))(*(_DWORD *)a2 + 76))(a2, v10, this); /*0x4dba66*/
  v4 = *v3; /*0x4dba73*/
  v5 = v3[1]; /*0x4dba75*/
  v9[2] = 0; /*0x4dba82*/
  v6 = (__int16)(v5 / 256); /*0x4dba95*/
  vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD *))this->RadioClass; /*0x4dba98*/
  v9[0] = ((__int16)(v4 / 256) << 8) + 128; /*0x4dbaa0*/
  v9[1] = (v6 << 8) + 128; /*0x4dbab4*/
  return vtable0[179](this, v9); /*0x4dbabe*/
}



// ==== 0x004DBAD0  FootClass::BeginPowerUpdate  this=FootClass  sig=csp ====
int __thiscall FootClass::BeginPowerUpdate(FootClass *this, int *a2)
{
  double v2; // st7
  __int16 v4; // ax
  int v5; // eax
  AbstractClass *movementDestination; // eax
  int v7; // eax
  AbstractClass *lastDestination; // eax
  int v9; // eax
  TeamClass *team; // eax
  int v11; // eax
  FootClass *nextTeamMember; // eax
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
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
  double v34; // [esp+10h] [ebp-18h]
  double v35; // [esp+10h] [ebp-18h]
  double v36; // [esp+10h] [ebp-18h]
  int v37; // [esp+24h] [ebp-4h]
  int v38; // [esp+24h] [ebp-4h]

  _ESI = this; /*0x4dbade*/
  House::PowerBeginUpdate((TechnoClass *)this, (int)a2); /*0x4dbae1*/
  Checksummer::Add_double((Checksummer *)a2, _ESI->unknown530, _ESI->unknown534); /*0x4dbaf6*/
  v37 = SHIWORD(_ESI->currentMapCoords[0]); /*0x4dbb09*/
  __asm { fild [esp+18h+var_4] } /*0x4dbb10*/
  v38 = SLOWORD(_ESI->currentMapCoords[0]); /*0x4dbb14*/
  __asm /*0x4dbb18*/
  {
    fild [esp+18h+var_4]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+18h+var_18]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v34); /*0x4dbb2d*/
  v4 = Math::RoundToInt(v2); /*0x4dbb35*/
  Checksummer::Add_WORD((Checksummer *)a2, v4); /*0x4dbb3d*/
  __asm /*0x4dbb42*/
  {
    fild dword ptr [esi+570h]
    fild dword ptr [esi+56Ch]
    fild dword ptr [esi+568h]
  }
  __asm
  {
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fld st(3)
    fmul st, st(4)
    faddp st(1), st
    fstp [esp+18h+var_18]; double
    fstp st
    fstp st
    fstp st
  }
  Math::Sqrt(v35); /*0x4dbb70*/
  LOWORD(v5) = Math::RoundToInt(v2); /*0x4dbb78*/
  Power::TimerProcess(v5); /*0x4dbb80*/
  Checksummer::Add_double((Checksummer *)a2, _ESI->currentSpeed_percentage[0], _ESI->currentSpeed_percentage[1]); /*0x4dbb95*/
  Checksummer::Add_double((Checksummer *)a2, _ESI->currentSpeed_multiplier[0], _ESI->currentSpeed_multiplier[1]); /*0x4dbbaa*/
  movementDestination = _ESI->movementDestination; /*0x4dbbaf*/
  if ( movementDestination ) /*0x4dbbb7*/
  {
    v7 = (*((int (__stdcall **)(void **))movementDestination->vtable1 + 4))(&movementDestination->vtable1); /*0x4dbbc0*/
    Power::TimerProcess(v7); /*0x4dbbc6*/
  }
  lastDestination = _ESI->lastDestination; /*0x4dbbcb*/
  if ( lastDestination ) /*0x4dbbd3*/
  {
    v9 = (*((int (__stdcall **)(void **))lastDestination->vtable1 + 4))(&lastDestination->vtable1); /*0x4dbbdc*/
    Power::TimerProcess(v9); /*0x4dbbe2*/
  }
  team = _ESI->team; /*0x4dbbe7*/
  if ( team ) /*0x4dbbef*/
  {
    v11 = (*((int (__stdcall **)(void **))team->? + 4))(&team->?); /*0x4dbbf8*/
    Power::TimerProcess(v11); /*0x4dbbfe*/
  }
  nextTeamMember = _ESI->nextTeamMember; /*0x4dbc03*/
  if ( nextTeamMember ) /*0x4dbc0b*/
  {
    v13 = (*((int (__stdcall **)(void **))nextTeamMember->? + 4))(&nextTeamMember->?); /*0x4dbc14*/
    Power::TimerProcess(v13); /*0x4dbc1a*/
  }
  v14 = _ESI->pathDelayTimer[0]; /*0x4dbc1f*/
  v15 = _ESI->pathDelayTimer[2]; /*0x4dbc25*/
  if ( v14 != -1 ) /*0x4dbc2e*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v14 >= v15 ) /*0x4dbc3a*/
      v15 = 0; /*0x4dbc40*/
    else
      v15 -= *(_DWORD *)&stru_A8EB00.?[416] - v14; /*0x4dbc3c*/
  }
  Power::TimerProcess(v15); /*0x4dbc45*/
  Power::TimerProcess(_ESI->FootClass_field_int_64C); /*0x4dbc53*/
  v16 = _ESI->FootClass_field_timer_650[0]; /*0x4dbc58*/
  v17 = _ESI->FootClass_field_timer_650[2]; /*0x4dbc5e*/
  if ( v16 != -1 ) /*0x4dbc67*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v16 >= v17 ) /*0x4dbc73*/
      v17 = 0; /*0x4dbc79*/
    else
      v17 -= *(_DWORD *)&stru_A8EB00.?[416] - v16; /*0x4dbc75*/
  }
  Power::TimerProcess(v17); /*0x4dbc7e*/
  __asm /*0x4dbc83*/
  {
    fild dword ptr [esi+680h]
    fild dword ptr [esi+67Ch]
    fild dword ptr [esi+678h]
  }
  __asm
  {
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fld st(3)
    fmul st, st(4)
    faddp st(1), st
    fstp [esp+18h+var_18]; double
    fstp st
    fstp st
    fstp st
  }
  Math::Sqrt(v36); /*0x4dbcb1*/
  LOWORD(v18) = Math::RoundToInt(v2); /*0x4dbcb9*/
  v19 = Power::TimerProcess(v18); /*0x4dbcc1*/
  LOBYTE(v19) = _ESI->tubeIndex; /*0x4dbcc6*/
  Power::FinalizeDrain((Power *)a2, v19); /*0x4dbccf*/
  LOBYTE(v20) = _ESI->unknownBool685; /*0x4dbcd4*/
  Power::FinalizeDrain((Power *)a2, v20); /*0x4dbcdd*/
  LOBYTE(v21) = _ESI->unknownBool688; /*0x4dbce2*/
  v22 = Power::FlagProcess((Power *)a2, v21); /*0x4dbceb*/
  LOBYTE(v22) = _ESI->isTeamLeader; /*0x4dbcf0*/
  Power::FlagProcess((Power *)a2, v22); /*0x4dbcf9*/
  LOBYTE(v23) = _ESI->shouldScanForTarget; /*0x4dbcfe*/
  Power::FlagProcess((Power *)a2, v23); /*0x4dbd07*/
  LOBYTE(v24) = _ESI->FootClass_field_bool_68B; /*0x4dbd0c*/
  v25 = Power::FlagProcess((Power *)a2, v24); /*0x4dbd15*/
  LOBYTE(v25) = _ESI->FootClass_field_bool_68C; /*0x4dbd1a*/
  Power::FlagProcess((Power *)a2, v25); /*0x4dbd23*/
  LOBYTE(v26) = _ESI->unknownBool68D; /*0x4dbd28*/
  Power::FlagProcess((Power *)a2, v26); /*0x4dbd31*/
  LOBYTE(v27) = _ESI->FootClass_field_bool_6AF; /*0x4dbd36*/
  v28 = Power::FlagProcess((Power *)a2, v27); /*0x4dbd3f*/
  LOBYTE(v28) = _ESI->FootClass_field_bool_6B0; /*0x4dbd44*/
  Power::FlagProcess((Power *)a2, v28); /*0x4dbd4d*/
  LOBYTE(v29) = _ESI->FootClass_field_bool_6B1; /*0x4dbd52*/
  Power::FlagProcess((Power *)a2, v29); /*0x4dbd5b*/
  LOBYTE(v30) = _ESI->FootClass_field_bool_6B2; /*0x4dbd60*/
  v31 = Power::FlagProcess((Power *)a2, v30); /*0x4dbd69*/
  LOBYTE(v31) = _ESI->FootClass_field_bool_6B3; /*0x4dbd6e*/
  Power::FlagProcess((Power *)a2, v31); /*0x4dbd77*/
  LOBYTE(v32) = _ESI->FootClass_field_bool_6B4; /*0x4dbd7c*/
  return Power::FinalizeDrain((Power *)a2, v32); /*0x4dbd8a*/
}



// ==== 0x004DBDA0  FootClass::CanBeHunted  this=FootClass  sig=csp ====
bool __thiscall FootClass::CanBeHunted(FootClass *this)
{
  if ( !(unsigned __int8)BuildingClass::CheckCellPassability((TechnoClass *)this) ) /*0x4dbda3*/
    return 0; /*0x4dbda3*/
  if ( !*(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3219) ) /*0x4dbdb6*/
    return 1; /*0x4dbdb6*/
  if ( !this->locomotor[0] ) /*0x4dbdc0*/
    WinAPI::Wrapper(-2147467261); /*0x4dbdcf*/
  return !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)this->locomotor[0] + 128))(this->locomotor[0]); /*0x4dbdeb*/
}



// ==== 0x004DBDF0  FootClass::GetDeployCoords  this=FootClass  sig=csp ====
_DWORD *__thiscall TechnoClass::GetDeployCoords(FootClass *this, _DWORD *a2, int a3)
{
  char tubeIndex; // al
  int v5; // eax
  int v6; // ecx
  int *v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // edi
  _DWORD *v12; // edx
  __int16 v13; // [esp+Ah] [ebp-Eh]
  _BYTE v14[12]; // [esp+Ch] [ebp-Ch] BYREF

  tubeIndex = this->tubeIndex; /*0x4dbdf7*/
  if ( tubeIndex < 0 ) /*0x4dbdff*/
  {
    if ( !this->locomotor[0] ) /*0x4dbe46*/
      WinAPI::Wrapper(-2147467261); /*0x4dbe55*/
    v8 = (int *)(*(int (__stdcall **)(int, _BYTE *))(*(_DWORD *)this->locomotor[0] + 24))(this->locomotor[0], v14); /*0x4dbe68*/
    v9 = *v8; /*0x4dbe6b*/
    v10 = v8[1]; /*0x4dbe6d*/
    v11 = v8[2]; /*0x4dbe70*/
    if ( *v8 == dword_8B3DA8 && v10 == dword_8B3DAC && v11 == dword_8B3DB0 ) /*0x4dbe8a*/
    {
      v12 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))this->TechnoClass + 18))(this, v14); /*0x4dbeae*/
      *a2 = *v12; /*0x4dbeb9*/
      a2[1] = v12[1]; /*0x4dbebe*/
      a2[2] = v12[2]; /*0x4dbec5*/
      return a2; /*0x4dbeb0*/
    }
    else
    {
      *a2 = v9; /*0x4dbe92*/
      a2[1] = v10; /*0x4dbe94*/
      a2[2] = v11; /*0x4dbe97*/
      return a2; /*0x4dbe8c*/
    }
  }
  else
  {
    v5 = *(_DWORD *)(*(_DWORD *)(FootClass_Array.?[3] + 4 * tubeIndex) + 40); /*0x4dbe0d*/
    v6 = (__int16)v5; /*0x4dbe10*/
    v13 = HIWORD(v5); /*0x4dbe13*/
    *a2 = (v6 << 8) + 128; /*0x4dbe2e*/
    a2[1] = (v13 << 8) + 128; /*0x4dbe38*/
    a2[2] = 0; /*0x4dbe3b*/
    return a2; /*0x4dbe17*/
  }
}



// ==== 0x004DBED0  FootClass::LiberateMember  this=FootClass  sig=csp ====
char __userpurge FootClass::LiberateMember@<al>(FootClass *this, int a2@<edi>, int a3, int a4)
{
  int *v4; // ecx
  int *v5; // esi
  _DWORD *v6; // eax
  int *v7; // ecx
  int v8; // edi
  _DWORD *v9; // eax
  int v11; // edi
  _DWORD *v12; // eax
  int v13; // [esp+0h] [ebp-Ch]
  int v14; // [esp+8h] [ebp-4h] BYREF

  v5 = v4; /*0x4dbed2*/
  if ( *(_DWORD *)((*(int (**)(void))(*v4 + 132))() + 1520) ) /*0x4dbedd*/
  {
    a2 = *v5; /*0x4dbee7*/
    v6 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(*v5 + 440))(v5, &v14); /*0x4dbef0*/
    (*(void (__thiscall **)(int *, _DWORD))(a2 + 1260))(v5, *v6); /*0x4dbefb*/
  }
  if ( TechnoClass::ProcessCapture((TechnoClass *)this, a2, 1, v13) ) /*0x4dbf0a*/
  {
    if ( *(_BYTE *)(v5[135] + 492) ) /*0x4dbf19*/
    {
      v7 = (int *)v5[373]; /*0x4dbf23*/
      if ( v7 ) /*0x4dbf2b*/
        TeamClass::LiberateMember_Start(v7, (int)v5, 0xFFFFFFFF, 0); /*0x4dbf32*/
    }
    if ( !(*(unsigned __int8 (__thiscall **)(int *))(*v5 + 84))(v5) ) /*0x4dbf3b*/
      v5[343] = *(_DWORD *)(*(int (__thiscall **)(int *, FootClass **))(*v5 + 440))(v5, &this); /*0x4dbf53*/
    if ( *(_DWORD *)((*(int (__thiscall **)(int *))(*v5 + 132))(v5) + 1520) ) /*0x4dbf63*/
    {
      v8 = *v5; /*0x4dbf6d*/
      v9 = (_DWORD *)(*(int (__thiscall **)(int *, FootClass **))(*v5 + 440))(v5, &this); /*0x4dbf76*/
      (*(void (__thiscall **)(int *, _DWORD))(v8 + 1256))(v5, *v9); /*0x4dbf81*/
    }
    return 1; /*0x4dbf88*/
  }
  else
  {
    if ( *(_DWORD *)((*(int (__thiscall **)(int *))(*v5 + 132))(v5) + 1520) ) /*0x4dbf99*/
    {
      v11 = *v5; /*0x4dbfa3*/
      v12 = (_DWORD *)(*(int (__thiscall **)(int *, FootClass **))(*v5 + 440))(v5, &this); /*0x4dbfac*/
      (*(void (__thiscall **)(int *, _DWORD))(v11 + 1256))(v5, *v12); /*0x4dbfb7*/
    }
    return 0; /*0x4dbfbe*/
  }
}



// ==== 0x004DBFD0  FootClass::vt_entry_4E0  this=FootClass  sig=csp ====
bool __thiscall FootClass::vt_entry_4E0(FootClass *this)
{
  if ( !(*((int (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 254))(this, 0) ) /*0x4dbfd7*/
    return 1; /*0x4dbfe1*/
  if ( *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1588) == -1 ) /*0x4dbff6*/
    return 1; /*0x4dbff8*/
  if ( *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1028) ) /*0x4dc006*/
    return 1; /*0x4dc010*/
  return *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1656) <= 13; /*0x4dbfe3*/
}



// ==== 0x004DC030  FootClass::vt_entry_4F4  this=FootClass  sig=csp ====
int __thiscall FootClass::vt_entry_4F4(FootClass *this)
{
  int result; // eax

  result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 97))(this); /*0x4dc035*/
  if ( result == 15 ) /*0x4dc03e*/
  {
    (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 242))(this, 0); /*0x4dc046*/
    return (*((int (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x4dc054*/
  }
  return result; /*0x4dc05a*/
}



// ==== 0x004DC060  FootClass::CheckTargetCell  this=FootClass  sig=csp ====
int __thiscall FootClass::CheckTargetCell(FootClass *this, int a2, int a3)
{
  AbstractClass *target; // edi
  int result; // eax
  int *v6; // eax
  int v7; // ebp
  int v8; // ebx
  int *TargetCoords; // eax
  int v10; // edx
  int v11; // edi
  int v12; // ebp
  int v13; // ebx
  int v14; // eax
  int *v15; // eax
  char *v16; // edi
  int v17; // edx
  int v18; // [esp-Ch] [ebp-40h]
  int v19; // [esp-Ch] [ebp-40h]
  int v20; // [esp+10h] [ebp-24h] BYREF
  int v21; // [esp+14h] [ebp-20h]
  char *v22; // [esp+18h] [ebp-1Ch]
  int v23; // [esp+1Ch] [ebp-18h] BYREF
  int v24; // [esp+24h] [ebp-10h]
  int v25[3]; // [esp+28h] [ebp-Ch] BYREF

  target = this->?; /*0x4dc069*/
  if ( target || (result = (int)this->movementDestination) != 0 ) /*0x4dc07b*/
  {
    if ( (_BYTE)a2 ) /*0x4dc087*/
      goto LABEL_8; /*0x4dc087*/
    result = g_BuildingLoadQueue_Array.?[1]; /*0x4dc08f*/
    if ( g_BuildingLoadQueue_Array.? != -1 ) /*0x4dc097*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - g_BuildingLoadQueue_Array.? >= g_BuildingLoadQueue_Array.?[1] ) /*0x4dc0a3*/
        return result; /*0x4dc0a3*/
      result = g_BuildingLoadQueue_Array.?[1] - (*(_DWORD *)&stru_A8EB00.?[416] - g_BuildingLoadQueue_Array.?); /*0x4dc0a9*/
    }
    if ( result > 0 ) /*0x4dc0ad*/
    {
LABEL_8:
      if ( target ) /*0x4dc0b5*/
      {
        v6 = (int *)(*((int (__thiscall **)(FootClass *, int *, _DWORD))this->TechnoClass + 192))(this, &v23, 0); /*0x4dc0c6*/
        v7 = *v6; /*0x4dc0cc*/
        v8 = v6[1]; /*0x4dc0d0*/
        v24 = v6[2]; /*0x4dc0db*/
        TargetCoords = TechnoClass::GetTargetCoords((TechnoClass *)this, v25); /*0x4dc0df*/
        v20 = *TargetCoords; /*0x4dc0e8*/
        v21 = TargetCoords[1]; /*0x4dc0ef*/
        v22 = (char *)TargetCoords[2]; /*0x4dc0f6*/
        v10 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372); /*0x4dc106*/
        if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4dc10c*/
          LOWORD(v11) = *(unsigned __int8 *)(v10 + 8); /*0x4dc113*/
        else
          v11 = *(unsigned __int16 *)(v10 + 16); /*0x4dc119*/
        LOBYTE(a2) = (unsigned __int8)((unsigned __int16)v11 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4dc13c*/
        BYTE1(a2) = (unsigned __int8)((unsigned __int16)v11 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4dc154*/
        HIBYTE(v18) = HIBYTE(g_BitMask_Red); /*0x4dc168*/
        LOWORD(v18) = a2; /*0x4dc170*/
        BYTE2(v18) = (unsigned __int8)((unsigned __int16)v11 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4dc173*/
        LOBYTE(result) = DrawTacticalMapLine(v7, v8, v24, *TargetCoords, TargetCoords[1], TargetCoords[2], v18, 0, 0); /*0x4dc19b*/
      }
      else
      {
        v12 = this->?[0]; /*0x4dc1b0*/
        v13 = this->?[1]; /*0x4dc1b6*/
        v14 = *(_DWORD *)&this->__pad_58C[12]; /*0x4dc1bc*/
        v24 = this->?[2]; /*0x4dc1c4*/
        if ( v14 ) /*0x4dc1c8*/
          v15 = (int *)(*(int (__stdcall **)(int *))(**(_DWORD **)(*(_DWORD *)this->__pad_58C + 4 * v14 - 4) + 72))(v25); /*0x4dc1ec*/
        else
          v15 = (int *)(*((int (__stdcall **)(int *))this->movementDestination->vtable0 + 18))(v25); /*0x4dc1d7*/
        v20 = *v15; /*0x4dc1f3*/
        v21 = v15[1]; /*0x4dc1fa*/
        v22 = (char *)v15[2]; /*0x4dc201*/
        LOWORD(a2) = v20 / 256; /*0x4dc211*/
        HIWORD(a2) = v21 / 256; /*0x4dc229*/
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) /*0x4dc25c*/
          && (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v20)->flags[0] & 0x100) != 0 )
        {
          v16 = (char *)FootClass_Array.? + Cell::GetGroundHeight(&v20); /*0x4dc274*/
          v22 = v16; /*0x4dc276*/
        }
        else
        {
          v16 = v22; /*0x4dc27c*/
        }
        if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4dc289*/
          v17 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 3); /*0x4dc293*/
        else
          LOWORD(v17) = *(_WORD *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 6); /*0x4dc2a0*/
        LOBYTE(a2) = (unsigned __int8)((unsigned __int16)v17 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4dc2c1*/
        BYTE1(a2) = (unsigned __int8)((unsigned __int16)v17 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4dc2e2*/
        HIBYTE(v19) = HIBYTE(a3); /*0x4dc2ed*/
        LOWORD(v19) = a2; /*0x4dc2f8*/
        BYTE2(v19) = (unsigned __int8)((unsigned __int16)v17 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4dc2ff*/
        LOBYTE(result) = DrawTacticalMapLine(v12, v13, v24, v20, v21, (int)v16, v19, a3, 0); /*0x4dc323*/
      }
    }
  }
  return result; /*0x4dc1a0*/
}



// ==== 0x004DC340  ObjectClass::DrawFootTargetLine  this=ObjectClass  sig=csp ====
char __thiscall DrawFootTargetLine(TechnoClass *this)
{
  int target; // eax
  int *v3; // eax
  int *TargetCoords; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int *v8; // eax
  int v9; // edx
  int v10; // esi
  int *v11; // eax
  int *v12; // eax
  int *v13; // eax
  int *v14; // eax
  DWORD Time; // esi
  __int16 v16; // ax
  Color v18; // [esp+14h] [ebp-90h] BYREF
  __int16 v19[2]; // [esp+1Ch] [ebp-88h] BYREF
  int v20; // [esp+20h] [ebp-84h]
  int v21; // [esp+28h] [ebp-7Ch] BYREF
  int v22; // [esp+2Ch] [ebp-78h]
  int v23; // [esp+30h] [ebp-74h]
  unsigned __int8 v24[4]; // [esp+34h] [ebp-70h] BYREF
  int v25; // [esp+38h] [ebp-6Ch] BYREF
  int v26; // [esp+3Ch] [ebp-68h]
  int v27; // [esp+40h] [ebp-64h] BYREF
  int v28; // [esp+44h] [ebp-60h]
  int v29; // [esp+48h] [ebp-5Ch] BYREF
  int v30; // [esp+4Ch] [ebp-58h]
  int v31; // [esp+50h] [ebp-54h]
  int v32; // [esp+54h] [ebp-50h]
  int v33; // [esp+58h] [ebp-4Ch] BYREF
  int v34; // [esp+5Ch] [ebp-48h]
  int v35; // [esp+60h] [ebp-44h]
  int v36; // [esp+64h] [ebp-40h]
  int v37; // [esp+68h] [ebp-3Ch] BYREF
  int v38; // [esp+6Ch] [ebp-38h]
  int v39; // [esp+70h] [ebp-34h]
  int v40[4]; // [esp+74h] [ebp-30h] BYREF
  Rect v41; // [esp+84h] [ebp-20h] BYREF
  Rect v42; // [esp+94h] [ebp-10h] BYREF

  v24[0] = -1; /*0x4dc34a*/
  target = this->target; /*0x4dc34f*/
  v24[1] = -1; /*0x4dc355*/
  v24[2] = -1; /*0x4dc35c*/
  LOWORD(v18.Color_field_00) = 0; /*0x4dc361*/
  BYTE2(v18.Color_field_00) = 0; /*0x4dc36b*/
  if ( target ) /*0x4dc370*/
  {
    v3 = (int *)(*(int (__thiscall **)(TechnoClass *, __int16 *, _DWORD))(this->vtable0 + 768))(this, v19, 0); /*0x4dc38f*/
    v37 = *v3; /*0x4dc397*/
    v38 = v3[1]; /*0x4dc39e*/
    v39 = v3[2]; /*0x4dc3ac*/
    TargetCoords = TechnoClass::GetTargetCoords(this, (int *)v19); /*0x4dc3b0*/
    v21 = *TargetCoords; /*0x4dc3b7*/
    v22 = TargetCoords[1]; /*0x4dc3be*/
    v5 = TargetCoords[2]; /*0x4dc3c2*/
LABEL_11:
    v23 = v5; /*0x4dc498*/
    goto LABEL_12; /*0x4dc498*/
  }
  if ( !*((_DWORD *)this + 361) ) /*0x4dc37a*/
    return target; /*0x4dc37a*/
  v37 = this->location[0]; /*0x4dc3d6*/
  v38 = this->location[1]; /*0x4dc3dd*/
  v6 = *((_DWORD *)this + 358); /*0x4dc3e1*/
  v39 = this->location[2]; /*0x4dc3ec*/
  if ( v6 ) /*0x4dc3f0*/
    v7 = *(_DWORD *)(*((_DWORD *)this + 355) + 4 * v6 - 4); /*0x4dc406*/
  else
    v7 = *((_DWORD *)this + 361); /*0x4dc3f2*/
  v8 = (int *)(*(int (__stdcall **)(__int16 *))(*(_DWORD *)v7 + 72))(v19); /*0x4dc411*/
  v21 = *v8; /*0x4dc418*/
  v22 = v8[1]; /*0x4dc41f*/
  v23 = v8[2]; /*0x4dc426*/
  v19[0] = v21 / 256; /*0x4dc436*/
  v19[1] = v22 / 256; /*0x4dc44e*/
  if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, v19) /*0x4dc481*/
    && (Coord::To_Cell((Coord *)&dword_87F7E8, &v21)->flags & 0x100) != 0 )
  {
    v5 = dword_8B3DF4 + Cell::GetGroundHeight(&v21); /*0x4dc492*/
    goto LABEL_11; /*0x4dc492*/
  }
LABEL_12:
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v37, &v27); /*0x4dc49c*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v21, &v25); /*0x4dc4c1*/
  v9 = this->owner + 22265; /*0x4dc4de*/
  v28 += dword_886FA4; /*0x4dc4e4*/
  v26 += dword_886FA4; /*0x4dc4e8*/
  LOWORD(v18.Color_field_00) = *(_WORD *)v9; /*0x4dc4f4*/
  BYTE2(v18.Color_field_00) = *(_BYTE *)(v9 + 2); /*0x4dc504*/
  v20 = v28 - 2; /*0x4dc524*/
  *(_DWORD *)v19 = v27 - 2; /*0x4dc55d*/
  v10 = (LOBYTE(v18.Color_field_00) >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4dc568*/
      | (BYTE1(v18.Color_field_00) >> g_BitMask_Blue << g_BitMask_Green)
      | (BYTE2(v18.Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
  v11 = Rect::Construct(&v41, v19, 3, 3); /*0x4dc56f*/
  v29 = *v11; /*0x4dc578*/
  v30 = v11[1]; /*0x4dc581*/
  v31 = v11[2]; /*0x4dc588*/
  v32 = v11[3]; /*0x4dc59a*/
  v12 = ClipRectIntersection(&v42, &DSurface_ViewBounds.field_0, &v29, 0, 0); /*0x4dc5a4*/
  v33 = *v12; /*0x4dc5ab*/
  v34 = v12[1]; /*0x4dc5b2*/
  v35 = v12[2]; /*0x4dc5b9*/
  v36 = v12[3]; /*0x4dc5c6*/
  (*(void (__thiscall **)(AudioStream *, int *, int))(*(_DWORD *)DSurface_Composite->__pad_0 + 20))( /*0x4dc5d2*/
    DSurface_Composite,
    &v33,
    v10);
  v20 = v26 - 2; /*0x4dc5e9*/
  *(_DWORD *)v19 = v25 - 2; /*0x4dc5f7*/
  v13 = Rect::Construct(&v42, v19, 3, 3); /*0x4dc5fb*/
  v33 = *v13; /*0x4dc604*/
  v34 = v13[1]; /*0x4dc60d*/
  v35 = v13[2]; /*0x4dc614*/
  v36 = v13[3]; /*0x4dc626*/
  v14 = ClipRectIntersection(&v41, &DSurface_ViewBounds.field_0, &v33, 0, 0); /*0x4dc630*/
  v29 = *v14; /*0x4dc638*/
  v30 = v14[1]; /*0x4dc63f*/
  v31 = v14[2]; /*0x4dc646*/
  v32 = v14[3]; /*0x4dc653*/
  (*(void (__thiscall **)(AudioStream *, int *, int))(*(_DWORD *)DSurface_Composite->__pad_0 + 20))( /*0x4dc65e*/
    DSurface_Composite,
    &v29,
    v10);
  v40[1] = dword_886FA4; /*0x4dc672*/
  v40[0] = DSurface_ViewBounds.field_0; /*0x4dc67a*/
  v40[2] = dword_886FA8; /*0x4dc683*/
  v40[3] = dword_886FAC; /*0x4dc690*/
  LOBYTE(target) = ClipLine(&v27, &v25, v40); /*0x4dc694*/
  if ( (_BYTE)target ) /*0x4dc69b*/
  {
    Time = timeGetTime(); /*0x4dc6a7*/
    v16 = Time & 0x3FF; /*0x4dc6a9*/
    if ( (Time & 0x3FF & 0x200) == 0 ) /*0x4dc6b1*/
    {
      if ( (v16 & 0x100) != 0 ) /*0x4dc6b6*/
        LOBYTE(v16) = ~(_BYTE)Time; /*0x4dc6b8*/
      Color::Lerp(&v18, v16, v24); /*0x4dc6cc*/
    }
    LOBYTE(target) = (*(char (__thiscall **)(AudioStream *, int *, int *, int, void *, int, _DWORD))(*(_DWORD *)DSurface_Composite->__pad_0 + 76))( /*0x4dc747*/
                       DSurface_Composite,
                       &v27,
                       &v25,
                       (LOBYTE(v18.Color_field_00) >> g_BitShift_Green_0 << g_BitShift_Red)
                     | (BYTE1(v18.Color_field_00) >> g_BitMask_Blue << g_BitMask_Green)
                     | (BYTE2(v18.Color_field_00) >> g_BitMask_Red << g_BitShift_Blue),
                       &unk_822540,
                       ((signed int)-Time >> 5) & 0xF,
                       0);
  }
  return target; /*0x4dc74a*/
}



// ==== 0x004DC760  LocomotionClass::GetSpeedMultiplier  this=LocomotionClass  sig=csp ====
int __thiscall LocomotionClass::GetSpeedMultiplier(LocomotionClass *this)
{
  int result; // eax

  result = *((_DWORD *)this + 373); /*0x4dc760*/
  if ( result ) /*0x4dc768*/
    return *(_DWORD *)(result + 36); /*0x4dc76a*/
  return result; /*0x4dc77d*/
}



// ==== 0x004DC790  FootClass::Destru_vt311  this=FootClass  sig=csp ====
bool __thiscall FootClass::Destru_vt311(FootClass *this)
{
  bool result; // al
  TeamClass *team; // ecx
  AbstractClass *movementDestination; // ecx
  _DWORD *v5; // eax
  _BYTE v6[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( !this->? ) /*0x4dc796*/
    return 0; /*0x4dc7a0*/
  team = this->team; /*0x4dc7a7*/
  if ( !team || (result = TechnoClass::IsWaypointHidden((TechnoClass *)team)) ) /*0x4dc7b1*/
  {
    result = 1; /*0x4dc7f6*/
    if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3220) ) /*0x4dc7c9*/
    {
      movementDestination = this->movementDestination; /*0x4dc7d3*/
      if ( movementDestination ) /*0x4dc7db*/
      {
        v5 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))movementDestination->vtable0 + 18))( /*0x4dc7e4*/
                         movementDestination,
                         v6);
        if ( (unsigned __int8)IsCoordVisibleMap((ObjectClass *)&stru_87F5F0.__pad_58[416], v5) ) /*0x4dc7ed*/
          return 0; /*0x4dc7d1*/
      }
    }
  }
  return result; /*0x4dc7a2*/
}



// ==== 0x004DC810  FootClass::SetBuildingType  this=FootClass  sig=csp ====
int __thiscall FootClass::SetBuildingType(FootClass *this, int a2, char a3)
{
  int result; // eax
  _DWORD *Element; // eax
  int v6; // [esp+10h] [ebp+8h]

  result = a2; /*0x4dc810*/
  if ( a2 == -1 ) /*0x4dc81d*/
  {
    this->planningPathIdx = -1; /*0x4dc888*/
    this->waypointIndex = 0; /*0x4dc892*/
    *(_DWORD *)this->unknownShort528 = 0; /*0x4dc898*/
  }
  else
  {
    this->planningPathIdx = a2; /*0x4dc823*/
    this->waypointIndex = a3; /*0x4dc829*/
    Element = (_DWORD *)Array::GetElement(*(Array **)&dword_A83D4C->__pad_140[4 * a2 + 208], a3); /*0x4dc840*/
    LOWORD(v6) = *Element / 256; /*0x4dc855*/
    HIWORD(v6) = Element[1] / 256; /*0x4dc869*/
    result = v6; /*0x4dc86e*/
    *(_DWORD *)this->unknownShort528 = v6; /*0x4dc872*/
  }
  *(_DWORD *)this->unknownShort524 = 0; /*0x4dc8ac*/
  return result; /*0x4dc8b2*/
}



// ==== 0x004DC8C0  BuildingClass::ValidateFoundation_0  this=TechnoClass  sig=csp ====
int __userpurge BuildingClass::ValidateFoundation_0@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int *a4,
        int a5,
        char a6)
{
  int result; // eax
  int v8; // ecx
  int v9; // eax
  AbstractClass *firstObject; // ebp
  void *v11; // edi
  int v12; // eax
  int v13; // ebx
  #375 *v14; // eax
  int v15; // ebx
  char IsAlliedWith; // al
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // ebp
  _DWORD *v23; // edi
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // edx
  int v28; // eax
  _DWORD *v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // ecx
  int v36; // eax
  int v37; // eax
  int v38; // ebp
  int v39; // ebx
  int v40; // eax
  int v41; // edx
  char v42; // [esp+Eh] [ebp-88h]
  int TileIndex; // [esp+Eh] [ebp-88h]
  int v44; // [esp+12h] [ebp-84h]
  char v47; // [esp+46h] [ebp-50h]
  char v48; // [esp+46h] [ebp-50h]
  char v49; // [esp+4Fh] [ebp-47h]
  char v50; // [esp+50h] [ebp-46h]
  char v51; // [esp+51h] [ebp-45h]
  int v52; // [esp+52h] [ebp-44h]
  int v53; // [esp+56h] [ebp-40h] BYREF
  __int16 v54[2]; // [esp+5Ah] [ebp-3Ch] BYREF
  __int16 v55[2]; // [esp+5Eh] [ebp-38h] BYREF
  int v56; // [esp+62h] [ebp-34h]
  _DWORD *v57; // [esp+66h] [ebp-30h]
  int v58; // [esp+6Ah] [ebp-2Ch]
  __int16 v59[2]; // [esp+6Eh] [ebp-28h] BYREF
  int v60; // [esp+72h] [ebp-24h]
  __int16 v61[2]; // [esp+76h] [ebp-20h] BYREF
  int v62; // [esp+7Ah] [ebp-1Ch]
  __int16 v63[2]; // [esp+7Eh] [ebp-18h] BYREF
  __int16 v64[2]; // [esp+82h] [ebp-14h] BYREF
  int v65; // [esp+86h] [ebp-10h]
  _UNKNOWN *retaddr; // [esp+96h] [ebp+0h] BYREF
  int *v67; // [esp+9Ah] [ebp+4h]
  int *v68; // [esp+9Ah] [ebp+4h]

  LOBYTE(result) = 0; /*0x4dc8c3*/
  if ( *(_BYTE *)(a1 + 1072) ) /*0x4dc8c9*/
    *(_BYTE *)(a1 + 1082) = 1; /*0x4dc8d3*/
  if ( !a4 ) /*0x4dc8e0*/
    goto LABEL_45; /*0x4dc8e0*/
  WaypointClass::FindOrCreate(dword_A83D4C->__pad_0, (int)a4, (unsigned int *)(a1 + 1312), (_BYTE *)(a1 + 1670)); /*0x4dc8fd*/
  v8 = a4[2]; /*0x4dc904*/
  v9 = a4[1]; /*0x4dc907*/
  *(_DWORD *)v63 = *a4; /*0x4dc90a*/
  v65 = v8; /*0x4dc912*/
  *(_DWORD *)v64 = v9; /*0x4dc91c*/
  firstObject = (AbstractClass *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v63)->firstObject; /*0x4dc925*/
  v11 = AbstractClass::IsTechnoType(firstObject); /*0x4dc932*/
  v12 = *(_DWORD *)v64 / 256; /*0x4dc953*/
  LOWORD(v67) = *(_DWORD *)v63 / 256; /*0x4dc956*/
  HIWORD(v67) = *(_DWORD *)v64 / 256; /*0x4dc95b*/
  *(_DWORD *)(a1 + 1320) = v67; /*0x4dc969*/
  HIWORD(v67) = v12; /*0x4dc975*/
  v51 = g_MoveFeedback; /*0x4dc980*/
  g_MoveFeedback = 0; /*0x4dc984*/
  *(_DWORD *)v61 = v67; /*0x4dc98b*/
  if ( !v11 ) /*0x4dc994*/
    goto LABEL_29; /*0x4dc994*/
  v13 = (*(int (__thiscall **)(int, AbstractClass *, int))(*(_DWORD *)a1 + 116))(a1, firstObject, 1); /*0x4dc9aa*/
  v14 = (#375 *)*((_DWORD *)v11 + 135); /*0x4dc9ac*/
  v53 = v13; /*0x4dc9b2*/
  if ( !(unsigned __int8)HouseClass::IsAlliedWith((#375 *)dword_A83D4C, v14) ) /*0x4dc9be*/
  {
    if ( v13 != 8 && v13 != 7 && v13 != 1 && v13 != 2 ) /*0x4dcac6*/
    {
LABEL_22:
      v17 = (*(int (__thiscall **)(int, AbstractClass *, int))(*(_DWORD *)a1 + 116))(a1, firstObject, 1); /*0x4dca81*/
      result = (*(int (__thiscall **)(int, int, AbstractClass *, int))(*(_DWORD *)a1 + 324))(a1, v17, firstObject, 1); /*0x4dca93*/
      *(_DWORD *)(a1 + 1316) = 0; /*0x4dcaa9*/
      goto LABEL_42; /*0x4dcaaf*/
    }
    goto LABEL_27; /*0x4dcac6*/
  }
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)v11 + 44))(v11) == 6 ) /*0x4dc9ce*/
  {
    if ( !*(_BYTE *)(*((_DWORD *)v11 + 328) + 5801) /*0x4dca0a*/
      || *(_DWORD *)(a1 + 108) >= *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 160)
      || (v49 = 1, (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 44))(a1) == 15) )
    {
      v49 = 0; /*0x4dca0c*/
    }
    if ( *(_BYTE *)(*((_DWORD *)v11 + 328) + 5802) ) /*0x4dca17*/
    {
      v15 = *(_DWORD *)(a1 + 764); /*0x4dca23*/
      if ( v15 < *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1668) && v15 != -1 ) /*0x4dca3c*/
      {
        v13 = v53; /*0x4dca3e*/
        v50 = 1; /*0x4dca42*/
        goto LABEL_17; /*0x4dca47*/
      }
      v13 = v53; /*0x4dca49*/
    }
    v50 = 0; /*0x4dca4d*/
LABEL_17:
    IsAlliedWith = HouseClass::IsAlliedWith(*((#375 **)v11 + 135), (#375 *)dword_A83D4C); /*0x4dca52*/
    if ( (v49 || v50) && IsAlliedWith && v13 != 7 && v13 != 8 ) /*0x4dca7f*/
      goto LABEL_22; /*0x4dca7f*/
  }
LABEL_27:
  v53 = 0; /*0x4dcac8*/
  v44 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1460); /*0x4dcafd*/
  v42 = BYTE1(*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v61) + 80)) & 1; /*0x4dcb19*/
  v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1); /*0x4dcb1a*/
  TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v61, *(_DWORD *)(v18 + 1460), v42); /*0x4dcb36*/
  v19 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1); /*0x4dcb3b*/
  v20 = *LayerClass::Pathfinding_Find( /*0x4dcb5c*/
           &stru_87F5F0.__pad_58[416],
           (int)v61,
           v59,
           v61,
           *(_DWORD *)(v19 + 1660),
           TileIndex,
           v44,
           0,
           1,
           1,
           0,
           1,
           0,
           1,
           (__int16 *)&v53,
           0,
           0);
  *(_DWORD *)v59 = v20; /*0x4dcb65*/
  if ( v20 != g_FootClass_Pool ) /*0x4dcb6d*/
  {
    LOWORD(v68) = v20 - v61[0]; /*0x4dcb7c*/
    HIWORD(v68) = v59[1] - v61[1]; /*0x4dcb87*/
    *(_DWORD *)(a1 + 1316) = v68; /*0x4dcb90*/
  }
LABEL_29:
  v21 = (*(int (__thiscall **)(int, __int16 *, _DWORD, int, int, int))(*(_DWORD *)a1 + 112))(a1, v61, 0, 1, a3, a2); /*0x4dcb9b*/
  v22 = *(_DWORD *)(a1 + 1316); /*0x4dcbab*/
  *(_DWORD *)v61 = v22; /*0x4dcbb9*/
  v54[0] = v22 + v63[0]; /*0x4dcbc3*/
  *(_DWORD *)v55 = v21; /*0x4dcbce*/
  v54[1] = HIWORD(v22) + v63[1]; /*0x4dcbd2*/
  v23 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v54); /*0x4dcbf4*/
  v57 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v63); /*0x4dcc01*/
  *(_DWORD *)v59 = (*(int (__thiscall **)(int, __int16 *, _DWORD, int))(*(_DWORD *)a1 + 112))(a1, v54, 0, 1); /*0x4dcc13*/
  v24 = v57[80] >> 8; /*0x4dcc21*/
  LOBYTE(v24) = v24 & 1; /*0x4dcc24*/
  v25 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 132))(a1, v24); /*0x4dcc27*/
  v26 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v64, *(_DWORD *)(v25 + 1460), v47); /*0x4dcc3e*/
  v27 = v23[80]; /*0x4dcc43*/
  *(_DWORD *)v61 = v26; /*0x4dcc49*/
  v48 = BYTE1(v27) & 1; /*0x4dcc57*/
  v28 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1); /*0x4dcc58*/
  v62 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v55, *(_DWORD *)(v28 + 1460), v48); /*0x4dcc78*/
  v29 = (_DWORD *)(*(int (__thiscall **)(int, _UNKNOWN **))(*(_DWORD *)a1 + 76))(a1, &retaddr); /*0x4dcc83*/
  LOWORD(v56) = *v29 / 256; /*0x4dcc96*/
  HIWORD(v56) = v29[1] / 256; /*0x4dccae*/
  v30 = *(_DWORD *)a1; /*0x4dccb7*/
  v58 = v56; /*0x4dccb9*/
  v31 = (*(int (__thiscall **)(int, _DWORD))(v30 + 188))(a1, 0); /*0x4dccbd*/
  v32 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 132))(a1, v31); /*0x4dccc8*/
  v33 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v59, *(_DWORD *)(v32 + 1460), 0); /*0x4dccdf*/
  v34 = *((char *)v23 + 283); /*0x4dcce4*/
  v57 = (_DWORD *)v33; /*0x4dcceb*/
  v58 = (*(int (__thiscall **)(int, _DWORD *, int, int, _DWORD))(*(_DWORD *)a1 + 428))( /*0x4dcd10*/
          a1,
          v23,
          -1,
          v34 + 4 * ((v23[80] >> 8) & 1),
          0);
  v35 = abs16(SHIWORD(v22)); /*0x4dcd1f*/
  v36 = abs16(v22); /*0x4dcd24*/
  if ( v36 <= v35 ) /*0x4dcd28*/
    v36 = v35; /*0x4dcd2a*/
  v37 = v36 + 3; /*0x4dcd2c*/
  v38 = 5; /*0x4dcd2f*/
  if ( v37 <= 5 ) /*0x4dcd37*/
    v38 = v37; /*0x4dcd39*/
  v39 = *(_DWORD *)v55; /*0x4dcd3b*/
  if ( *(_DWORD *)v55 != *(_DWORD *)v59 && a6 /*0x4dcdaf*/
    || v58
    || v60 != *(_DWORD *)v61
    || v56 != v60
    || a6
    && (v40 = v23[80] >> 8,
        v41 = v57[80] >> 8,
        LOBYTE(v41) = v41 & 1,
        LOBYTE(v40) = v40 & 1,
        Pathfinding::CalcDistance((int)&stru_87E790.__pad_D8[80], v54, v63, a1, v40, v41, -1) > v38) )
  {
    result = (*(int (__thiscall **)(int, int, __int16 *))(*(_DWORD *)a1 + 320))(a1, v39, v63); /*0x4dcdff*/
    *(_DWORD *)(a1 + 1316) = 0; /*0x4dce15*/
  }
  else
  {
    result = (*(int (__thiscall **)(int, int, __int16 *))(*(_DWORD *)a1 + 320))(a1, v39, v54); /*0x4dcdcf*/
    *(_DWORD *)(a1 + 1320) = v52; /*0x4dcdd9*/
  }
LABEL_42:
  if ( v51 ) /*0x4dce23*/
    g_MoveFeedback = 1; /*0x4dce25*/
  if ( !(_BYTE)result ) /*0x4dce2e*/
  {
LABEL_45:
    *(_DWORD *)(a1 + 1312) = -1; /*0x4dce30*/
    *(_BYTE *)(a1 + 1670) = 0; /*0x4dce58*/
    *(_DWORD *)(a1 + 1316) = 0; /*0x4dce5f*/
    *(_DWORD *)(a1 + 1320) = 0; /*0x4dce65*/
  }
  *(_BYTE *)(a1 + 1082) = 0; /*0x4dce6b*/
  return result; /*0x4dce72*/
}



// ==== 0x004DCE80  Cell::IsValidDestination  this=Cell  sig=csp ====
bool __thiscall Cell::IsValidDestination(Cell *this, __int16 *a2)
{
  int v4; // eax
  int GroundHeight; // eax
  int v6; // edx
  int v7; // ecx
  _DWORD *v8; // eax
  int Cell_field_0x0; // edx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  __int16 v14[2]; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v15[3]; // [esp+10h] [ebp-18h] BYREF
  _DWORD v16[3]; // [esp+1Ch] [ebp-Ch] BYREF
  __int16 *v17; // [esp+2Ch] [ebp+4h]

  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], a2, 1) ) /*0x4dce93*/
    return 0; /*0x4dce93*/
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x4dcea7*/
  {
    if ( *((_BYTE *)this + 1050) ) /*0x4dcea9*/
    {
      v4 = (*a2 << 8) + 128; /*0x4dceca*/
      v15[1] = (a2[1] << 8) + 128; /*0x4dcecf*/
      v15[0] = v4; /*0x4dced9*/
      v15[2] = 0; /*0x4dcedd*/
      GroundHeight = Cell::GetGroundHeight(v15); /*0x4dcee5*/
      v6 = a2[1]; /*0x4dceed*/
      v7 = (*a2 << 8) + 128; /*0x4dcef4*/
      v16[2] = GroundHeight; /*0x4dcefa*/
      v16[0] = v7; /*0x4dcf0b*/
      v16[1] = (v6 << 8) + 128; /*0x4dcf15*/
      if ( (unsigned __int8)Cell::IsPassable(v16) ) /*0x4dcf19*/
        return 0; /*0x4dcf19*/
    }
  }
  v8 = (_DWORD *)(*(int (__thiscall **)(Cell *, _DWORD *, _DWORD))(this->Cell_field_0x0 + 76))(this, v16, 0); /*0x4dcf31*/
  LOWORD(v17) = *v8 / 256; /*0x4dcf4a*/
  Cell_field_0x0 = this->Cell_field_0x0; /*0x4dcf5b*/
  HIWORD(v17) = v8[1] / 256; /*0x4dcf60*/
  *(_DWORD *)v14 = v17; /*0x4dcf69*/
  v10 = (*(int (__thiscall **)(Cell *))(Cell_field_0x0 + 188))(this); /*0x4dcf6f*/
  v11 = (*(int (__thiscall **)(Cell *, int))(this->Cell_field_0x0 + 132))(this, v10); /*0x4dcf7a*/
  if ( !MapSeed::CheckTileMatch((MapSeed *)&stru_87F5F0.__pad_58[416], v14, a2, *(_DWORD *)(v11 + 1460), 0, 0, 0) ) /*0x4dcf92*/
    return 0; /*0x4dcf92*/
  v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x4dcfa1*/
  return v12[59] == 5 /*0x4dcfc7*/
      && !(*(int (__thiscall **)(Cell *, _DWORD *, int, int, _DWORD, int))(this->Cell_field_0x0 + 428))(
            this,
            v12,
            -1,
            -1,
            0,
            1);
}



// ==== 0x004DCFE0  FootClass::MoveToTiberium  this=FootClass  sig=csp ====
char __thiscall FootClass::MoveToTiberium(FootClass *this, int a2, int a3)
{
  _DWORD *v4; // eax
  void (__thiscall **vtable0)(FootClass *, void *, int); // edi
  void *v7; // eax
  _BYTE v8[12]; // [esp+Ch] [ebp-Ch] BYREF

  if ( !this->movementDestination ) /*0x4dcfe7*/
  {
    a3 = *(_DWORD *)(*((int (__thiscall **)(FootClass *, int *, int, int))this->TechnoClass + 206))(this, &a2, a2, a3); /*0x4dd017*/
    if ( a3 != g_FootClass_Pool ) /*0x4dd01b*/
    {
      v4 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))this->TechnoClass + 18))(this, v8); /*0x4dd034*/
      if ( a3 == __PAIR32__(v4[1] / 256, *v4 / 256) ) /*0x4dd05d*/
        return 1; /*0x4dd06d*/
      vtable0 = (void (__thiscall **)(FootClass *, void *, int))this->TechnoClass; /*0x4dd070*/
      v7 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x4dd07e*/
      vtable0[288](this, v7, 1); /*0x4dd086*/
    }
  }
  return 0; /*0x4dd066*/
}



// ==== 0x004DD0A0  FootClass::FindMoveTarget  this=FootClass  sig=csp ====
int *__thiscall FootClass::FindMoveTarget(FootClass *this, int *a2, int a3, int a4)
{
  _DWORD *v5; // eax
  int v7; // ebp
  int v8; // edi
  int v9; // esi
  int v10; // eax
  Building *v11; // eax
  int NthOfType; // eax
  Building *v13; // eax
  int v14; // eax
  Building *v15; // eax
  int v16; // eax
  Building *v17; // eax
  int v18; // eax
  __int16 v19[2]; // [esp+4h] [ebp-38h] BYREF
  int v20; // [esp+8h] [ebp-34h]
  int v21; // [esp+Ch] [ebp-30h]
  int v22; // [esp+10h] [ebp-2Ch]
  int i; // [esp+14h] [ebp-28h]
  int v24; // [esp+18h] [ebp-24h]
  int v25; // [esp+1Ch] [ebp-20h]
  int v26; // [esp+20h] [ebp-1Ch]
  int v27; // [esp+24h] [ebp-18h]
  __int16 v28[3]; // [esp+28h] [ebp-14h] BYREF
  int v29; // [esp+2Eh] [ebp-Eh] BYREF
  int v30; // [esp+32h] [ebp-Ah]

  v20 = g_FootClass_Pool; /*0x4dd0ab*/
  v5 = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *))this->TechnoClass + 18))(this, (char *)&v29 + 2); /*0x4dd0b6*/
  v19[0] = *v5 / 256; /*0x4dd0c9*/
  v19[1] = v5[1] / 256; /*0x4dd0e1*/
  *(_DWORD *)v28 = *(_DWORD *)v19; /*0x4dd0ea*/
  if ( *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v28) + 59) == 5 ) /*0x4dd100*/
  {
    *a2 = *(_DWORD *)v28; /*0x4dd10b*/
    return a2; /*0x4dd102*/
  }
  else
  {
    v7 = 1; /*0x4dd119*/
    v8 = -1; /*0x4dd11e*/
    if ( a3 > 1 ) /*0x4dd123*/
    {
      v9 = -1; /*0x4dd12a*/
      v26 = -1; /*0x4dd12d*/
      do /*0x4dd131*/
      {
        if ( v9 <= v7 ) /*0x4dd133*/
        {
          v10 = -v7; /*0x4dd13b*/
          for ( i = -v7; ; LOWORD(v10) = i ) /*0x4dd13d*/
          {
            LOWORD(v30) = v10; /*0x4dd14f*/
            LOWORD(v21) = v9 + v28[0]; /*0x4dd15d*/
            HIWORD(v21) = v10 + v28[1]; /*0x4dd162*/
            *(_DWORD *)v19 = v21; /*0x4dd16f*/
            if ( Cell::IsValidDestination((Cell *)this, v19) ) /*0x4dd176*/
            {
              v11 = (Building *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x4dd189*/
              NthOfType = Building::GetNthOfType(v11); /*0x4dd190*/
              if ( NthOfType > v8 ) /*0x4dd197*/
              {
                v8 = NthOfType; /*0x4dd199*/
                v20 = *(_DWORD *)v19; /*0x4dd19f*/
              }
            }
            LOWORD(v22) = v9 + v28[0]; /*0x4dd1b1*/
            HIWORD(v22) = v28[1] + v7; /*0x4dd1b6*/
            *(_DWORD *)v19 = v22; /*0x4dd1c6*/
            if ( Cell::IsValidDestination((Cell *)this, v19) ) /*0x4dd1ca*/
            {
              v13 = (Building *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x4dd1dd*/
              v14 = Building::GetNthOfType(v13); /*0x4dd1e4*/
              if ( v14 > v8 ) /*0x4dd1eb*/
              {
                v8 = v14; /*0x4dd1f1*/
                v20 = *(_DWORD *)v19; /*0x4dd1f3*/
              }
            }
            LOWORD(v27) = i; /*0x4dd200*/
            LOWORD(v24) = v28[0] + i; /*0x4dd20f*/
            HIWORD(v24) = v9 + v28[1]; /*0x4dd21b*/
            *(_DWORD *)v19 = v24; /*0x4dd227*/
            if ( Cell::IsValidDestination((Cell *)this, v19) ) /*0x4dd22b*/
            {
              v15 = (Building *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x4dd23e*/
              v16 = Building::GetNthOfType(v15); /*0x4dd245*/
              if ( v16 > v8 ) /*0x4dd24c*/
              {
                v8 = v16; /*0x4dd252*/
                v20 = *(_DWORD *)v19; /*0x4dd254*/
              }
            }
            LOWORD(v25) = v28[0] + v7; /*0x4dd266*/
            HIWORD(v25) = v9 + v28[1]; /*0x4dd26b*/
            *(_DWORD *)v19 = v25; /*0x4dd278*/
            if ( Cell::IsValidDestination((Cell *)this, v19) ) /*0x4dd27f*/
            {
              v17 = (Building *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x4dd292*/
              v18 = Building::GetNthOfType(v17); /*0x4dd299*/
              if ( v18 > v8 ) /*0x4dd2a0*/
              {
                v8 = v18; /*0x4dd2a6*/
                v20 = *(_DWORD *)v19; /*0x4dd2a8*/
              }
            }
            if ( ++v9 > v7 ) /*0x4dd2af*/
              break; /*0x4dd2af*/
          }
          if ( v8 != -1 ) /*0x4dd2b8*/
            break; /*0x4dd2b8*/
          v9 = v26; /*0x4dd2ba*/
        }
        ++v7; /*0x4dd2c2*/
        v26 = --v9; /*0x4dd2c6*/
      }
      while ( v7 < a3 ); /*0x4dd131*/
    }
    *a2 = v20; /*0x4dd2d1*/
    return a2; /*0x4dd2d1*/
  }
}



// ==== 0x004DD890  BuildingClass::Validate  this=BuildingClass  sig=csp ====
int *__thiscall BuildingClass::Validate(BuildingClass *this, int *a2, int a3)
{
  _DWORD *v4; // eax
  int v6; // ebx
  int v7; // ebp
  int i; // esi
  __int16 v9[2]; // [esp+4h] [ebp-18h] BYREF
  int v10; // [esp+8h] [ebp-14h]
  __int16 v11[2]; // [esp+Ch] [ebp-10h] BYREF
  char v12[12]; // [esp+10h] [ebp-Ch] BYREF

  v10 = g_FootClass_Pool; /*0x4dd89b*/
  v4 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *))this->TechnoClass + 18))(this, v12); /*0x4dd8a6*/
  v9[0] = *v4 / 256; /*0x4dd8bd*/
  v9[1] = v4[1] / 256; /*0x4dd8d5*/
  *(_DWORD *)v11 = *(_DWORD *)v9; /*0x4dd8de*/
  if ( (unsigned __int8)BuildingClass::ValidateCell(this, v11, 0, 0) ) /*0x4dd8e5*/
  {
    *a2 = *(_DWORD *)v11; /*0x4dd8f7*/
    return a2; /*0x4dd8ee*/
  }
  else
  {
    v6 = 1; /*0x4dd904*/
    if ( a3 > 1 ) /*0x4dd90b*/
    {
      v7 = -1; /*0x4dd913*/
      do /*0x4dd9d5*/
      {
        for ( i = v7; i <= v6; ++i ) /*0x4dd91a*/
        {
          *(_DWORD *)v9 = *(_DWORD *)v11; /*0x4dd92d*/
          if ( (unsigned __int8)BuildingClass::ValidateCell(this, v9, i, v7) ) /*0x4dd931*/
            v10 = *(_DWORD *)v9; /*0x4dd93e*/
          *(_DWORD *)v9 = *(_DWORD *)v11; /*0x4dd94f*/
          if ( (unsigned __int8)BuildingClass::ValidateCell(this, v9, i, v6) ) /*0x4dd953*/
            v10 = *(_DWORD *)v9; /*0x4dd960*/
          *(_DWORD *)v9 = *(_DWORD *)v11; /*0x4dd971*/
          if ( (unsigned __int8)BuildingClass::ValidateCell(this, v9, v7, i) ) /*0x4dd975*/
            v10 = *(_DWORD *)v9; /*0x4dd982*/
          *(_DWORD *)v9 = *(_DWORD *)v11; /*0x4dd993*/
          if ( (unsigned __int8)BuildingClass::ValidateCell(this, v9, v6, i) ) /*0x4dd997*/
            v10 = *(_DWORD *)v9; /*0x4dd9a4*/
        }
        if ( v10 != g_FootClass_Pool ) /*0x4dd9bd*/
          break; /*0x4dd9bd*/
        ++v6; /*0x4dd9d1*/
        --v7; /*0x4dd9d2*/
      }
      while ( v6 < a3 ); /*0x4dd9d5*/
    }
    *a2 = v10; /*0x4dd9e7*/
    return a2; /*0x4dd9dd*/
  }
}



// ==== 0x004DD9F0  BuildingClass::ValidateCell  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ValidateCell(BuildingClass *this, __int16 *a2, int a3, int a4)
{
  __int16 *v4; // edi
  __int16 v6; // cx
  int result; // eax
  __int16 v8; // cx
  int v9; // eax
  int GroundHeight; // eax
  int v11; // ecx
  _DWORD *v12; // eax
  int (__thiscall **vtable0)(BuildingClass *); // eax
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // edi
  _DWORD v17[3]; // [esp+8h] [ebp-18h] BYREF
  _DWORD v18[3]; // [esp+14h] [ebp-Ch] BYREF

  v4 = a2; /*0x4dd9f5*/
  v6 = a2[1]; /*0x4dda00*/
  LOWORD(a2) = a3 + *a2; /*0x4dda0e*/
  HIWORD(a2) = a4 + v6; /*0x4dda13*/
  result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2, 1); /*0x4dda2a*/
  if ( !(_BYTE)result ) /*0x4dda31*/
    goto LABEL_10; /*0x4dda31*/
  v8 = (__int16)a2; /*0x4dda37*/
  *(_DWORD *)v4 = a2; /*0x4dda3b*/
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x4dda44*/
  {
    if ( this->? ) /*0x4dda46*/
    {
      v9 = (v4[1] << 8) + 128; /*0x4dda67*/
      v17[0] = (v8 << 8) + 128; /*0x4dda72*/
      v17[1] = v9; /*0x4dda76*/
      v17[2] = 0; /*0x4dda7a*/
      GroundHeight = Cell::GetGroundHeight(v17); /*0x4dda82*/
      v11 = *v4 << 8; /*0x4dda91*/
      v18[1] = (v4[1] << 8) + 128; /*0x4ddaa0*/
      v18[0] = v11 + 128; /*0x4ddaa8*/
      v18[2] = GroundHeight; /*0x4ddab2*/
      result = Cell::IsPassable(v18); /*0x4ddab6*/
      if ( (_BYTE)result ) /*0x4ddabd*/
        goto LABEL_10; /*0x4ddabd*/
    }
  }
  v12 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD *, _DWORD))this->TechnoClass + 19))(this, v18, 0); /*0x4ddace*/
  LOWORD(a3) = *v12 / 256; /*0x4ddae7*/
  HIWORD(a3) = v12[1] / 256; /*0x4ddafd*/
  vtable0 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x4ddb06*/
  a4 = a3; /*0x4ddb08*/
  v14 = vtable0[47](this); /*0x4ddb0c*/
  v15 = (*((int (__thiscall **)(BuildingClass *, int))this->TechnoClass + 33))(this, v14); /*0x4ddb17*/
  if ( !MapSeed::CheckTileMatch( /*0x4ddb2f*/
          (MapSeed *)&stru_87F5F0.__pad_58[416],
          (__int16 *)&a4,
          v4,
          *(_DWORD *)(v15 + 1460),
          0,
          0,
          0) )
    goto LABEL_10; /*0x4ddb2f*/
  v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v4); /*0x4ddb49*/
  result = (*((int (__thiscall **)(BuildingClass *, _DWORD *, int, int, _DWORD, int))this->TechnoClass + 107))( /*0x4ddb52*/
             this,
             v16,
             -1,
             -1,
             0,
             1);
  if ( !result && v16[59] == 11 && *((_BYTE *)v16 + 286) >= 0x30u ) /*0x4ddb6c*/
    LOBYTE(result) = 1; /*0x4ddb6f*/
  else
LABEL_10:
    LOBYTE(result) = 0; /*0x4ddb79*/
  return result; /*0x4ddb6e*/
}



// ==== 0x004DDB90  FootClass::MoveToWeed  this=FootClass  sig=csp ====
char __thiscall FootClass::MoveToWeed(FootClass *this, int a2)
{
  _DWORD *v3; // eax
  void (__thiscall **vtable0)(FootClass *, void *, int); // edi
  void *v6; // eax
  int v7; // [esp+8h] [ebp-10h] BYREF
  _BYTE v8[12]; // [esp+Ch] [ebp-Ch] BYREF

  if ( !this->movementDestination ) /*0x4ddb97*/
  {
    a2 = *BuildingClass::Validate((BuildingClass *)this, &v7, a2); /*0x4ddbbf*/
    if ( a2 != g_FootClass_Pool ) /*0x4ddbc3*/
    {
      v3 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))this->TechnoClass + 18))(this, v8); /*0x4ddbdc*/
      if ( a2 == __PAIR32__(v3[1] / 256, *v3 / 256) ) /*0x4ddc05*/
        return 1; /*0x4ddc15*/
      vtable0 = (void (__thiscall **)(FootClass *, void *, int))this->TechnoClass; /*0x4ddc18*/
      v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x4ddc26*/
      vtable0[288](this, v6, 1); /*0x4ddc2e*/
    }
  }
  return 0; /*0x4ddc0e*/
}



// ==== 0x004DDC40  FootClass::CheckHeightDiff  this=FootClass  sig=csp ====
char __thiscall FootClass::CheckHeightDiff(FootClass *this, int a2)
{
  if ( this->tubeIndex < 0 ) /*0x4ddc48*/
    return ObjectClass::CheckGroundHeightDiff((IUnknown *)this); /*0x4ddc54*/
  else
    return 0; /*0x4ddc4a*/
}



// ==== 0x004DDC60  FootClass::ValidateTargetCell  this=FootClass  sig=csp ====
bool __thiscall FootClass::ValidateTargetCell(FootClass *this, int a2)
{
  int v2; // edi
  bool result; // al
  _DWORD *v5; // eax
  Object *v6; // eax
  FootClass *ClosestObjectCell; // eax
  FootClass *v8; // esi
  bool *v9; // eax
  int v10; // ecx
  FootClass **i; // edx
  FootClass *v12; // eax
  _DWORD v13[2]; // [esp+Ch] [ebp-14h] BYREF
  _BYTE v14[12]; // [esp+14h] [ebp-Ch] BYREF

  v2 = a2; /*0x4ddc66*/
  if ( !a2 ) /*0x4ddc6e*/
    return 0; /*0x4ddc78*/
  v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 72))(a2, v14); /*0x4ddc84*/
  LOWORD(v13[0]) = *v5 / 256; /*0x4ddc99*/
  HIWORD(v13[0]) = v5[1] / 256; /*0x4ddcb2*/
  a2 = v13[0]; /*0x4ddcbf*/
  result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2, 1); /*0x4ddcc4*/
  if ( result ) /*0x4ddccb*/
  {
    v13[0] = 0; /*0x4ddce9*/
    v13[1] = 0; /*0x4ddcf1*/
    v6 = (Object *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x4ddcf9*/
    ClosestObjectCell = (FootClass *)Object::FindClosestObjectCell(v6, v13, 0, 0); /*0x4ddd00*/
    v8 = ClosestObjectCell; /*0x4ddd05*/
    if ( ClosestObjectCell ) /*0x4ddd09*/
      return this == ClosestObjectCell /*0x4ddd51*/
          || (FootClass *)Array::Get((Array *)this, 0) == ClosestObjectCell
          || *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3412)
          && (v8->? || *(_BYTE *)((*((int (__thiscall **)(FootClass *))v8->TechnoClass + 33))(v8) + 3412));
    v9 = (bool *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x4ddd7e*/
    if ( (unsigned __int8)Cell::IsBuildable(v9, 1, 0, 0, -1, 0, -1, 1) ) /*0x4ddd85*/
    {
      v10 = 0; /*0x4ddd9f*/
      if ( dword_A8E3A0 <= 0 ) /*0x4ddda3*/
        return 1; /*0x4dddd5*/
      for ( i = (FootClass **)dword_A8E394; ; ++i ) /*0x4ddda5*/
      {
        v12 = *i; /*0x4dddab*/
        if ( (*i)->? ) /*0x4dddad*/
        {
          if ( !v12->? && v12->movementDestination == (AbstractClass *)v2 && v12 != this ) /*0x4dddc9*/
            break; /*0x4dddc9*/
        }
        if ( ++v10 >= dword_A8E3A0 ) /*0x4dddd1*/
          return 1; /*0x4dddd1*/
      }
    }
    return 0; /*0x4ddd90*/
  }
  return result; /*0x4ddc70*/
}



// ==== 0x004DDDE0  FootClass::HandleCursorWithCheck  this=FootClass  sig=csp ====
int __thiscall FootClass::HandleCursorWithCheck(FootClass *this, __int16 *a2, char a3, char a4)
{
  int v5; // ebx
  int v6; // eax
  _DWORD v8[2]; // [esp+Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+14h] [ebp-4h]

  v5 = TechnoClass::HandleCursor((TechnoClass *)this, a2, a3, a4); /*0x4dde01*/
  v6 = (a2[1] << 8) + 128; /*0x4dde17*/
  v8[0] = (*a2 << 8) + 128; /*0x4dde22*/
  v8[1] = v6; /*0x4dde26*/
  GroundHeight = 0; /*0x4dde2a*/
  GroundHeight = Cell::GetGroundHeight(v8); /*0x4dde41*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v8)->flags[0] & 0x100) != 0 ) /*0x4dde53*/
    GroundHeight += (int)FootClass_Array.?; /*0x4dde60*/
  if ( (unsigned __int8)Cell::IsPassable(v8) && v5 ) /*0x4dde79*/
  {
    if ( !*(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3213) /*0x4dde97*/
      || !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], a2, 1) )
    {
      return 2; /*0x4ddebe*/
    }
    if ( v5 != 51 ) /*0x4ddea3*/
      return 1; /*0x4ddeb0*/
  }
  return v5; /*0x4ddea5*/
}



// ==== 0x004DDED0  FootClass::GetCursorOverObject  this=FootClass  sig=csp ====
int __thiscall InfantryClass::GetCursorOverObject(FootClass *this, int a2, char a3)
{
  int v4; // ebx
  _DWORD *v5; // eax
  _DWORD v7[2]; // [esp+Ch] [ebp-18h] BYREF
  int GroundHeight; // [esp+14h] [ebp-10h]
  _BYTE v9[12]; // [esp+18h] [ebp-Ch] BYREF

  v4 = TechnoClass::HandleCursorClick((TechnoClass *)this, (_BYTE *)a2, a3); /*0x4ddee9*/
  v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 72))(a2, v9); /*0x4ddef2*/
  v7[0] = *v5; /*0x4ddef7*/
  v7[1] = v5[1]; /*0x4ddf03*/
  GroundHeight = v5[2]; /*0x4ddf0f*/
  GroundHeight = Cell::GetGroundHeight(v7); /*0x4ddf22*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v7)->flags[0] & 0x100) != 0 ) /*0x4ddf34*/
    GroundHeight += (int)FootClass_Array.?; /*0x4ddf41*/
  if ( (unsigned __int8)Cell::IsPassable(v7) && v4 && !*(_DWORD *)&dword_A8B238 ) /*0x4ddf63*/
    return 2 - (*(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 3213) != 0); /*0x4ddf7b*/
  else
    return v4; /*0x4ddf86*/
}



// ==== 0x004DDF90  FootClass::ProcessMissionState  this=FootClass  sig=csp ====
int __thiscall FootClass::ProcessMissionState(FootClass *this)
{
  double v1; // st7
  int missionStatus; // eax
  CellClass *v4; // eax
  AbstractClass *focus; // ecx
  int (__thiscall **vtable0)(FootClass *, _DWORD, int); // edi
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // edi
  _DWORD *v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // kr00_4
  int (__fastcall **v17)(FootClass *, _DWORD, int); // eax
  void (__thiscall **v19)(FootClass *, void *, int); // edi
  void *v20; // eax
  char *MissionControl; // eax
  int v22; // eax
  __int16 v23[2]; // [esp+2Ch] [ebp-44h] BYREF
  int v24; // [esp+30h] [ebp-40h] BYREF
  double v25; // [esp+34h] [ebp-3Ch]
  int v26; // [esp+3Ch] [ebp-34h]
  _DWORD v27[3]; // [esp+40h] [ebp-30h] BYREF
  _BYTE v28[12]; // [esp+4Ch] [ebp-24h] BYREF
  _BYTE v29[12]; // [esp+58h] [ebp-18h] BYREF
  _BYTE v30[12]; // [esp+64h] [ebp-Ch] BYREF

  missionStatus = this->?; /*0x4ddf97*/
  if ( missionStatus ) /*0x4ddfa0*/
  {
    if ( missionStatus == 1 && !this->movementDestination ) /*0x4ddfa9*/
    {
      TechnoClass::SetFocus((TechnoClass *)this, 0); /*0x4ddfb9*/
      (*((void (__thiscall **)(FootClass *, int, _DWORD))this->TechnoClass + 122))(this, 11, 0); /*0x4ddfc6*/
      (*((void (__thiscall **)(FootClass *))this->TechnoClass + 123))(this); /*0x4ddfd0*/
    }
  }
  else if ( this->? ) /*0x4ddfdb*/
  {
    (*((void (__thiscall **)(FootClass *, _DWORD))this->TechnoClass + 335))(this, 0); /*0x4ddfeb*/
  }
  else
  {
    if ( !this->? ) /*0x4ddff6*/
    {
      v27[0] = this->?[0]; /*0x4de00c*/
      v27[1] = this->?[1]; /*0x4de018*/
      v27[2] = this->?[2]; /*0x4de01f*/
      v4 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v27); /*0x4de028*/
      TechnoClass::SetFocus((TechnoClass *)this, (int)v4); /*0x4de030*/
    }
    focus = this->?; /*0x4de035*/
    vtable0 = (int (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass; /*0x4de03b*/
    this->unknownBool688 = 0; /*0x4de03e*/
    v7 = (*((int (__thiscall **)(AbstractClass *, _BYTE *, _DWORD))focus->vtable0 + 18))(focus, v28, 0); /*0x4de04e*/
    v8 = vtable0[241](this, 0, v7); /*0x4de05c*/
    if ( v8 ) /*0x4de060*/
    {
      v9 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, _BYTE *))this->?->TechnoClass::vtable0 + 18))( /*0x4de07a*/
                       this->?,
                       v29);
      v10 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v8 + 72))(v8, v30); /*0x4de081*/
      v11 = v10[1]; /*0x4de08a*/
      LODWORD(v25) = *v10 - *v9; /*0x4de08d*/
      v12 = v10[2]; /*0x4de096*/
      v13 = v9[2]; /*0x4de099*/
      HIDWORD(v25) = v11 - v9[1]; /*0x4de09c*/
      v26 = v12 - v13; /*0x4de0a9*/
      Math::Sqrt( /*0x4de0ce*/
        (double)SLODWORD(v25) * (double)SLODWORD(v25)
      + (double)(v12 - v13) * (double)(v12 - v13)
      + (double)SHIDWORD(v25) * (double)SHIDWORD(v25));
      v16 = Math::RoundToInt(v1); /*0x4de0d6*/
      LOWORD(v15) = HIWORD(v16); /*0x4de0d6*/
      LOWORD(v14) = v16; /*0x4de0d6*/
      *(_DWORD *)v23 = v14; /*0x4de0db*/
      v17 = (int (__fastcall **)(FootClass *, _DWORD, int))this->TechnoClass; /*0x4de0df*/
      v25 = (double)*(int *)v23; /*0x4de0e9*/
      *(_DWORD *)v23 = v17[199](this, v15, 1); /*0x4de0f3*/
      if ( (double)*(int *)v23 * 1.5 > v25 ) /*0x4de10a*/
        (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 242))(this, v8); /*0x4de111*/
    }
    if ( this->? ) /*0x4de117*/
      return 1; /*0x4de12c*/
    this->? = 1; /*0x4de139*/
    *(_DWORD *)v23 = *BuildingPlacement::FindPosition(&v24, this); /*0x4de151*/
    if ( *(_DWORD *)v23 == g_FootClass_Pool ) /*0x4de155*/
    {
      (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x4de18b*/
    }
    else
    {
      v19 = (void (__thiscall **)(FootClass *, void *, int))this->TechnoClass; /*0x4de165*/
      v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v23); /*0x4de173*/
      v19[288](this, v20, 1); /*0x4de17b*/
    }
    TechnoClass::SetFocus((TechnoClass *)this, 0); /*0x4de195*/
  }
  MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x4de19c*/
  LOWORD(v22) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4de1aa*/
  return v22 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4de122*/
}



// ==== 0x004DE1D0  ObjectClass::FindPlacementCell  this=FootClass  sig=csp ====
_DWORD *__userpurge ObjectClass::FindPlacementCell@<eax>(
        ObjectClass *this,
        int a2@<ebp>,
        _DWORD *a3,
        int a4,
        int a5,
        char a6)
{
  _DWORD *v6; // ecx
  _DWORD *v7; // esi
  __int16 *v8; // edi
  char IsWithinUsableArea; // al
  int v10; // edx
  int v11; // eax
  int v12; // edx
  _DWORD *v13; // eax
  CellClass *v14; // eax
  int v15; // edx
  int v16; // ebp
  int v17; // eax
  char v18; // al
  int v19; // ecx
  int v20; // eax
  char IsPassable; // al
  int v22; // eax
  int v23; // edx
  void **v24; // eax
  _DWORD *v25; // eax
  int v26; // eax
  void *v27; // eax
  int v29; // [esp-2Ch] [ebp-78h]
  int TileIndex; // [esp-28h] [ebp-74h]
  char v31; // [esp-20h] [ebp-6Ch]
  char v32; // [esp-20h] [ebp-6Ch]
  char v33; // [esp-Ch] [ebp-58h]
  __int16 v34[2]; // [esp+18h] [ebp-34h] BYREF
  int v35; // [esp+1Ch] [ebp-30h]
  char v36[4]; // [esp+20h] [ebp-2Ch]
  int v37; // [esp+24h] [ebp-28h] BYREF
  _DWORD v38[2]; // [esp+28h] [ebp-24h] BYREF
  int GroundHeight; // [esp+30h] [ebp-1Ch]
  _DWORD v40[2]; // [esp+34h] [ebp-18h] BYREF
  int v41; // [esp+3Ch] [ebp-10h]
  _WORD v42[6]; // [esp+40h] [ebp-Ch] BYREF

  v7 = v6; /*0x4de1d5*/
  v8 = (__int16 *)a3; /*0x4de1de*/
  v35 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int, _DWORD))(*v6 + 112))(v6, a3, a4, 0); /*0x4de1f4*/
  IsWithinUsableArea = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v8, 1); /*0x4de1f8*/
  v10 = *v8; /*0x4de1fd*/
  LOBYTE(a3) = IsWithinUsableArea; /*0x4de200*/
  v11 = (v8[1] << 8) + 128; /*0x4de218*/
  v38[0] = (v10 << 8) + 128; /*0x4de223*/
  v38[1] = v11; /*0x4de227*/
  GroundHeight = 0; /*0x4de22b*/
  GroundHeight = Cell::GetGroundHeight(v38); /*0x4de23e*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v38)->flags[0] & 0x100) != 0 ) /*0x4de250*/
    GroundHeight += (int)FootClass_Array.?; /*0x4de25d*/
  if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v7 + 132))(v7) + 3213) && (unsigned __int8)Cell::IsPassable(v38) ) /*0x4de27d*/
    goto LABEL_36; /*0x4de284*/
  v12 = *v7; /*0x4de28c*/
  *(_DWORD *)v34 = *(_DWORD *)v8; /*0x4de293*/
  v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _WORD *, _DWORD, int))(v12 + 76))(v7, v42, 0, a2); /*0x4de29b*/
  v14 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v13); /*0x4de2a4*/
  v15 = *v7; /*0x4de2a9*/
  v38[0] = v14; /*0x4de2ad*/
  v16 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(v15 + 132))(v7) + 1460); /*0x4de2b7*/
  if ( v16 == 6 ) /*0x4de2c0*/
  {
    v16 = 0; /*0x4de2c2*/
  }
  else if ( v16 == 9 && HouseClass::IonSensitivesShouldBeOffline() ) /*0x4de2d1*/
  {
    v16 = 7; /*0x4de2da*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v7 + 84))(v7) /*0x4de333*/
    || *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v7 + 132))(v7) + 3372)
    || (*(int (__thiscall **)(_DWORD *))(*v7 + 44))(v7) == 15
    && *(_BYTE *)(v7[432] + 3476)
    && !HouseClass::IonSensitivesShouldBeOffline()
    || (v17 = (*(int (__thiscall **)(_DWORD *))(*v7 + 44))(v7), LOBYTE(a5) = 0, v17 == 2) )
  {
    LOBYTE(a5) = 1; /*0x4de335*/
  }
  v18 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 188))(v7, 0); /*0x4de33f*/
  v19 = v8[1]; /*0x4de345*/
  v36[0] = v18; /*0x4de349*/
  v20 = *v8; /*0x4de34f*/
  v41 = 0; /*0x4de35b*/
  v40[1] = (v19 << 8) + 128; /*0x4de35f*/
  v40[0] = (v20 << 8) + 128; /*0x4de375*/
  v41 = Cell::GetGroundHeight(v40); /*0x4de388*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v40)->flags[0] & 0x100) != 0 ) /*0x4de39a*/
    v41 += (int)FootClass_Array.?; /*0x4de3a7*/
  IsPassable = Cell::IsPassable(v40); /*0x4de3b5*/
  if ( (_BYTE)a4 && v35 == 2 ) /*0x4de3cb*/
  {
    if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v7 + 132))(v7) + 3372) /*0x4de3f7*/
      || (v22 = (*(int (__thiscall **)(_DWORD *))(*v7 + 456))(v7), a3 = (_DWORD *)1, v22 >= 0) )
    {
      a3 = 0; /*0x4de3f9*/
    }
    v33 = (char)a3; /*0x4de40e*/
    a4 = 0; /*0x4de41b*/
    v31 = BYTE1(*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8) + 80)) & 1; /*0x4de439*/
    v29 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v7 + 132))(v7) + 1660); /*0x4de44d*/
    v24 = (void **)LayerClass::Pathfinding_Find( /*0x4de450*/
                     &stru_87F5F0.__pad_58[416],
                     v23,
                     &v37,
                     v8,
                     v29,
                     -1,
                     v16,
                     v31,
                     1,
                     1,
                     0,
                     1,
                     v33,
                     1,
                     (__int16 *)&a4,
                     0,
                     0);
    goto LABEL_32; /*0x4de450*/
  }
  if ( !(_BYTE)a3 /*0x4de4b4*/
    || IsPassable
    || !(_BYTE)a4
    && (!*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v7 + 132))(v7) + 3284) || v35 == 2)
    && (v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8),
        !MapSeed::CheckTileMatch(
           (MapSeed *)&stru_87F5F0.__pad_58[416],
           (__int16 *)(v37 + 36),
           v34,
           v16,
           v36[0],
           BYTE1(v25[80]) & 1,
           0)) )
  {
    a4 = 0; /*0x4de4d7*/
    v32 = BYTE1(*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8) + 80)) & 1; /*0x4de4fc*/
    TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], (__int16 *)(v37 + 36), v16, v36[0]); /*0x4de50b*/
    v26 = (*(int (__thiscall **)(_DWORD *))(*v7 + 132))(v7); /*0x4de510*/
    v24 = (void **)LayerClass::Pathfinding_Find( /*0x4de528*/
                     &stru_87F5F0.__pad_58[416],
                     (int)&a3,
                     &a3,
                     v8,
                     *(_DWORD *)(v26 + 1660),
                     TileIndex,
                     v16,
                     v32,
                     1,
                     1,
                     0,
                     1,
                     0,
                     1,
                     (__int16 *)&a4,
                     0,
                     0);
LABEL_32:
    v27 = *v24; /*0x4de52d*/
    *(_DWORD *)v34 = v27; /*0x4de52f*/
    goto LABEL_34; /*0x4de533*/
  }
  v27 = *(void **)v34; /*0x4de535*/
LABEL_34:
  if ( __PAIR32__(v34[1], (unsigned __int16)v27) != g_FootClass_Pool ) /*0x4de541*/
  {
    this->AbstractClass = v27; /*0x4de558*/
    return &this->AbstractClass; /*0x4de55f*/
  }
LABEL_36:
  this->AbstractClass = (void *)g_FootClass_Pool; /*0x4de562*/
  return &this->AbstractClass; /*0x4de555*/
}



// ==== 0x004DE580  FootClass::ValidateFoundation  this=FootClass  sig=csp ====
int __thiscall FootClass::ValidateFoundation(int this)
{
  int result; // eax
  IUnknown *Element; // eax
  IUnknown *v4; // eax

  result = *(_DWORD *)(this + 1312); /*0x4de583*/
  if ( result != -1 ) /*0x4de58c*/
  {
    Element = (IUnknown *)Array::GetElement( /*0x4de5a3*/
                            *(_DWORD **)&HouseClass_Player->__pad_1D8[4 * result + 56],
                            (CampaignScore *)*(char *)(this + 1670));
    v4 = (IUnknown *)VectorClass::GetAtChecked( /*0x4de5bc*/
                       *(int **)&HouseClass_Player->__pad_1D8[4 * *(_DWORD *)(this + 1312) + 56],
                       Element);
    return BuildingClass::ValidateFoundation_0((BuildingClass *)this, v4); /*0x4de5c4*/
  }
  return result; /*0x4de5c9*/
}


// ==== 0x004DE5D0  FootClass::PreDestroy  this=FootClass  sig=csp ====
int __thiscall FootClass::PreDestroy(FootClass *this)
{
  CaptureManagerClass *captureManager; // ecx
  int *team; // ecx

  captureManager = this->?; /*0x4de5d3*/
  if ( captureManager ) /*0x4de5db*/
    CaptureManager::FreeAll((CaptureManager *)captureManager); /*0x4de5dd*/
  if ( this->? ) /*0x4de5e2*/
    TechnoClass::EjectPassengers((TechnoClass *)this, 1); /*0x4de5f0*/
  team = (int *)this->team; /*0x4de5f5*/
  if ( team ) /*0x4de5fd*/
    TeamClass::LiberateMember_Start(team, (int)this, 0xFFFFFFFF, 0); /*0x4de604*/
  return ObjectClass::Destroy((ObjectClass *)this); /*0x4de610*/
}



// ==== 0x004DE620  ObjectClass::IsHeightAboveThreshold_0  this=FootClass  sig=csp ====
// attributes: thunk
int __thiscall ObjectClass::IsHeightAboveThreshold_0(ObjectClass *this)
{
  return ObjectClass::IsHeightAboveThreshold((IUnknown *)this);
}



// ==== 0x004DE630  FootClass::OnCompleteAction  this=FootClass  sig=csp ====
int __thiscall FootClass::OnCompleteAction(FootClass *this, int a2)
{
  int result; // eax

  BuildingClass::OnCellPlacementComplete((TechnoClass *)this); /*0x4de639*/
  result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this); /*0x4de642*/
  if ( *(_BYTE *)(result + 2053) ) /*0x4de648*/
  {
    if ( this->?[0] == 1 ) /*0x4de659*/
      return (*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 309))(this, a2); /*0x4de660*/
  }
  return result; /*0x4de666*/
}



// ==== 0x004DE670  FootClass::RemovePassenger  this=FootClass  sig=csp ====
int __thiscall FootClass::RemovePassenger(FootClass *this, int a2)
{
  int *passengers; // edi
  int (__thiscall **vtable0)(FootClass *); // edx
  int v5; // eax
  int result; // eax
  _DWORD v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  passengers = this->?; /*0x4de67d*/
  FootClass::updateMovementAnimation((FootClass *)this->?, a2); /*0x4de685*/
  if ( a2 && *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1384) != -1 ) /*0x4de69f*/
  {
    v7[0] = this->?[0]; /*0x4de6b0*/
    vtable0 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4de6b4*/
    v7[1] = this->?[1]; /*0x4de6b9*/
    v7[2] = this->?[2]; /*0x4de6c0*/
    v5 = vtable0[33](this); /*0x4de6c6*/
    PlayAudioAt2(*(_DWORD *)(v5 + 1384), v7, 0); /*0x4de6d4*/
  }
  result = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this); /*0x4de6de*/
  if ( *(_BYTE *)(result + 2053) ) /*0x4de6e4*/
  {
    if ( !*passengers ) /*0x4de6ee*/
      return (*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 310))(this, a2); /*0x4de6f8*/
  }
  return result; /*0x4de6fe*/
}



// ==== 0x004DE710  FootClass::PopAndProcess  this=FootClass  sig=csp ====
int __thiscall FootClass::PopAndProcess(FootClass *this)
{
  int *passengers; // edi
  int v3; // ebx

  passengers = this->?; /*0x4de715*/
  v3 = LinkedList::Pop((LinkedList *)this->?); /*0x4de722*/
  if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 2053) && !*passengers ) /*0x4de738*/
    (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 310))(this, v3); /*0x4de742*/
  return v3; /*0x4de748*/
}



// ==== 0x004DE750  FootClass::vt_entry_4D4  this=FootClass  sig=csp ====
void __stdcall BuildingClass::vt_entry_4D4(FootClass *this)
{
  ; /*0x4de750*/
}



// ==== 0x004DE760  FootClass::vt_entry_4D8  this=FootClass  sig=csp ====
void __stdcall BuildingClass::vt_entry_4D8(FootClass *this)
{
  ; /*0x4de760*/
}



// ==== 0x004DE770  FootClass::IsTimerActive  this=FootClass  sig=csp ====
bool __thiscall FootClass::IsTimerActive(FootClass *this)
{
  int v1; // edx
  int v2; // eax

  v1 = this->paralysisTimer[0]; /*0x4de770*/
  v2 = this->paralysisTimer[2]; /*0x4de776*/
  if ( v1 != -1 ) /*0x4de77f*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v1 < v2 ) /*0x4de78b*/
      return v2 != *(_DWORD *)&stru_A8EB00.?[416] - v1; /*0x4de798*/
    v2 = 0; /*0x4de799*/
  }
  return v2 != 0; /*0x4de798*/
}



// ==== 0x004DE7B0  FootClass::IsTargetInRange  this=FootClass  sig=csp ====
int __thiscall FootClass::IsTargetInRange(FootClass *this, int a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // ebp
  int result; // eax
  int v7; // ebx
  FootClass *v8; // edi
  _DWORD *j; // esi
  int v10; // eax
  Object **v11; // eax
  Object **v12; // esi
  int v13; // [esp+Ch] [ebp-28h]
  int i; // [esp+Ch] [ebp-28h]
  int v15; // [esp+10h] [ebp-24h]
  int v16; // [esp+14h] [ebp-20h]
  int v17; // [esp+18h] [ebp-1Ch]
  __int16 v18[2]; // [esp+1Ch] [ebp-18h] BYREF
  int relatedTagsCount; // [esp+20h] [ebp-14h]
  int v20; // [esp+24h] [ebp-10h]
  char v21[12]; // [esp+28h] [ebp-Ch] BYREF

  v3 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1520); /*0x4de7c0*/
  v16 = v3; /*0x4de7ce*/
  v17 = v3 * v3; /*0x4de7d8*/
  relatedTagsCount = this->?->relatedTagsCount; /*0x4de7e1*/
  if ( a2 == g_FootClass_Pool ) /*0x4de7ec*/
  {
    v4 = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *))this->TechnoClass + 18))(this, v21); /*0x4de805*/
    LOWORD(v13) = *v4 / 256; /*0x4de818*/
    HIWORD(v13) = v4[1] / 256; /*0x4de82c*/
    a2 = v13; /*0x4de835*/
  }
  v5 = -v3; /*0x4de83b*/
  result = -v3; /*0x4de83d*/
  v20 = -v3; /*0x4de83f*/
  for ( i = -v3; result < v3; i = result ) /*0x4de849*/
  {
    if ( v5 < v3 ) /*0x4de852*/
    {
      v7 = result * result; /*0x4de85e*/
      HIWORD(v15) = result + HIWORD(a2); /*0x4de864*/
      do /*0x4de91b*/
      {
        LOWORD(v15) = a2 + v5; /*0x4de870*/
        *(_DWORD *)v18 = v15; /*0x4de87e*/
        if ( v7 + v5 * v5 < v17 ) /*0x4de88a*/
        {
          v8 = (FootClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v18); /*0x4de89f*/
          FootClass::checkTerrainSpeed(v8, relatedTagsCount); /*0x4de8a8*/
          for ( j = (_DWORD *)v8->?[1]; j; j = (_DWORD *)j[12] ) /*0x4de8b5*/
          {
            v10 = (*(int (__thiscall **)(_DWORD *))(*j + 44))(j); /*0x4de8bb*/
            if ( v10 == 1 || v10 == 15 || v10 == 2 ) /*0x4de8cb*/
              (*(void (__thiscall **)(_DWORD *))(*j + 1056))(j); /*0x4de8d1*/
          }
          v11 = (Object **)Cell::IsBridge((Cell *)v8); /*0x4de8e0*/
          v12 = v11; /*0x4de8e5*/
          if ( v11 && v11[135] != dword_A83D4C ) /*0x4de8f8*/
          {
            if ( (*(int (__thiscall **)(Object **, _DWORD, _DWORD))&(*v11)->__pad_38[48])(v11, 0, 0) ) /*0x4de902*/
              *((_BYTE *)v12 + 128) = 1; /*0x4de909*/
          }
          v3 = v16; /*0x4de910*/
          result = i; /*0x4de914*/
        }
        ++v5; /*0x4de918*/
      }
      while ( v5 < v3 ); /*0x4de91b*/
      v5 = v20; /*0x4de921*/
    }
    ++result; /*0x4de925*/
  }
  return result; /*0x4de933*/
}



// ==== 0x004DE940  FootClass::CheckCellPassable  this=FootClass  sig=csp ====
__int16 __thiscall FootClass::CheckCellPassable(FootClass *this, int a2)
{
  int v3; // edi
  HouseClass *owner; // ecx
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // ebp
  int v8; // esi
  int v9; // ebx
  Cell *v10; // edi
  _DWORD *j; // esi
  int v12; // eax
  _BYTE *v13; // esi
  Object *v14; // ecx
  int v16; // [esp+Ch] [ebp-28h]
  int i; // [esp+Ch] [ebp-28h]
  int v18; // [esp+10h] [ebp-24h]
  int relatedTagsCount; // [esp+14h] [ebp-20h]
  int v20; // [esp+18h] [ebp-1Ch]
  __int16 v21[2]; // [esp+1Ch] [ebp-18h] BYREF
  int v22; // [esp+20h] [ebp-14h]
  int v23; // [esp+24h] [ebp-10h]
  _BYTE v24[12]; // [esp+28h] [ebp-Ch] BYREF

  v3 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))this->TechnoClass + 33))(this) + 1520); /*0x4de950*/
  owner = this->?; /*0x4de956*/
  v22 = v3; /*0x4de95e*/
  v20 = v3 * v3; /*0x4de968*/
  LOWORD(v5) = a2; /*0x4de96c*/
  relatedTagsCount = owner->relatedTagsCount; /*0x4de971*/
  if ( a2 == g_FootClass_Pool ) /*0x4de97c*/
  {
    v6 = (_DWORD *)(*((int (__thiscall **)(FootClass *, _BYTE *))this->TechnoClass + 18))(this, v24); /*0x4de995*/
    LOWORD(v16) = *v6 / 256; /*0x4de9a8*/
    v5 = v6[1] / 256; /*0x4de9b9*/
    HIWORD(v16) = v5; /*0x4de9bc*/
    a2 = v16; /*0x4de9c5*/
  }
  v7 = -v3; /*0x4de9cb*/
  v8 = -v3; /*0x4de9cd*/
  v23 = -v3; /*0x4de9cf*/
  for ( i = -v3; v8 < v3; i = v8 ) /*0x4de9d9*/
  {
    if ( v7 < v3 ) /*0x4de9e2*/
    {
      v9 = v8 * v8; /*0x4de9ee*/
      HIWORD(v18) = v8 + HIWORD(a2); /*0x4de9f4*/
      do /*0x4deabb*/
      {
        LOWORD(v18) = a2 + v7; /*0x4dea05*/
        *(_DWORD *)v21 = v18; /*0x4dea0e*/
        LOWORD(v5) = v20; /*0x4dea12*/
        if ( v9 + v7 * v7 < v20 ) /*0x4dea1a*/
        {
          v10 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v21); /*0x4dea2f*/
          LOWORD(v5) = Cell::IsPassableOffset(v10, relatedTagsCount); /*0x4dea38*/
          if ( (_BYTE)v5 ) /*0x4dea3f*/
          {
            FootClass::updateLocomotion((FootClass *)v10, relatedTagsCount); /*0x4dea48*/
            for ( j = v10->Cell_field_0xE4; j; j = (_DWORD *)j[12] ) /*0x4dea55*/
            {
              v12 = (*(int (__thiscall **)(_DWORD *))(*j + 44))(j); /*0x4dea5b*/
              if ( v12 == 1 || v12 == 15 || v12 == 2 ) /*0x4dea6b*/
                (*(void (__thiscall **)(_DWORD *))(*j + 1056))(j); /*0x4dea71*/
            }
            v5 = (int)Cell::IsBridge(v10); /*0x4dea80*/
            v13 = (_BYTE *)v5; /*0x4dea85*/
            if ( v5 ) /*0x4dea89*/
            {
              v14 = *(Object **)(v5 + 540); /*0x4dea8b*/
              LOWORD(v5) = (_WORD)dword_A83D4C; /*0x4dea91*/
              if ( v14 != dword_A83D4C ) /*0x4dea98*/
              {
                v5 = (*(int (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)v13 + 104))(v13, 0, 0); /*0x4deaa2*/
                if ( v5 ) /*0x4deaa7*/
                  v13[128] = 1; /*0x4deaa9*/
              }
            }
            v8 = i; /*0x4deab0*/
          }
        }
        v3 = v22; /*0x4deab4*/
        ++v7; /*0x4deab8*/
      }
      while ( v7 < v22 ); /*0x4deabb*/
      v7 = v23; /*0x4deac1*/
    }
    ++v8; /*0x4deac5*/
  }
  return v5; /*0x4dead3*/
}



// ==== 0x004DEAE0  FootClass::DeployAction  this=FootClass  sig=csp ====
int __userpurge FootClass::DeployAction@<eax>(FootClass *this, int a2@<ebp>, int a3@<edi>, int a4, int a5, int a6)
{
  TechnoClass *v6; // ecx
  TechnoClass *v7; // esi
  int v8; // eax
  void *vtable0; // edx
  int v11; // eax
  _DWORD *v12; // eax
  BuildingClass *v13; // [esp+0h] [ebp-10h]
  int v14; // [esp+8h] [ebp-8h]

  v7 = v6; /*0x4deae4*/
  if ( *(_BYTE *)((*((int (**)(void))v6->RadioClass + 33))() + 3479) ) /*0x4deaee*/
  {
    v8 = (*((int (__thiscall **)(TechnoClass *))v7->RadioClass + 33))(v7); /*0x4deafc*/
    vtable0 = v7->RadioClass; /*0x4deb08*/
    a5 = *(_DWORD *)(v8 + 160); /*0x4deb0a*/
    return (*((int (__thiscall **)(TechnoClass *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))vtable0 + 91))( /*0x4deb2b*/
             v7,
             &a5,
             0,
             *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
             0,
             0,
             0,
             0);
  }
  else
  {
    v11 = v7[1].radarFlashTimer[0]; /*0x4deb38*/
    if ( v11 ) /*0x4deb40*/
    {
      v12 = (_DWORD *)(*(_DWORD *)(v11 + 1692) + 44); /*0x4deb4e*/
      *v12 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4deb56*/
      v12[1] = v14; /*0x4deb5c*/
      v12[2] = 50; /*0x4deb5f*/
      BuildingClass::Deploy(v13, a2, a3); /*0x4deb6e*/
    }
    v7[1].targetingTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4deb80*/
    v7[1].targetingTimer[1] = v14; /*0x4deb86*/
    v7[1].targetingTimer[2] = 0; /*0x4deb8d*/
    return TechnoClass::IronCurtain(v7, (int)this, a4, a5); /*0x4deb9d*/
  }
}



// ==== 0x004DEBB0  FootClass::UpdateTeamAI  this=FootClass  sig=csp ====
char __thiscall FootClass::UpdateTeamAI(FootClass *this, int a2)
{
  TeamClass *attachedTag; // ecx
  TeamClass *v4; // ecx
  TeamClass *v5; // ecx
  void (__thiscall **vtable0)(FootClass *, int); // edx
  int v8; // edx

  if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 114))(this) <= 0 ) /*0x4debbe*/
    return 0; /*0x4ded5c*/
  if ( this->? > 0 ) /*0x4debcd*/
  {
    if ( a2 ) /*0x4debd5*/
    {
      attachedTag = (TeamClass *)this->?; /*0x4debd7*/
      if ( attachedTag ) /*0x4debdc*/
        TeamClass::Update_0(attachedTag, 38, (int)this, g_FootClass_Pool, 0, 0); /*0x4debec*/
    }
    v4 = (TeamClass *)this->?; /*0x4debf1*/
    if ( v4 && this->? ) /*0x4debf8*/
      TeamClass::Update_0(v4, 41, (int)this, g_FootClass_Pool, 0, 0); /*0x4dec0f*/
    v5 = (TeamClass *)this->?; /*0x4dec14*/
    if ( v5 ) /*0x4dec19*/
    {
      if ( !this->? ) /*0x4dec23*/
        return 1; /*0x4dec49*/
      if ( a2 ) /*0x4dec27*/
        TeamClass::Update_0(v5, 41, (int)this, g_FootClass_Pool, 0, a2); /*0x4dec36*/
    }
    if ( !this->? ) /*0x4dec3b*/
      return 1; /*0x4dec43*/
    (*((void (__thiscall **)(FootClass *, int))this->TechnoClass + 56))(this, a2); /*0x4dec51*/
    if ( !this->? ) /*0x4dec57*/
      return 1; /*0x4dec65*/
    if ( !this->isAttackedByLocomotor ) /*0x4dec68*/
      this->? = 0; /*0x4dec72*/
  }
  vtable0 = (void (__thiscall **)(FootClass *, int))this->TechnoClass; /*0x4dec79*/
  this->? = 1; /*0x4dec7f*/
  vtable0[157](this, 3); /*0x4dec86*/
  (*((void (__thiscall **)(FootClass *))this->TechnoClass + 232))(this); /*0x4dec90*/
  TechnoClass::CleanupAll((TechnoClass *)this, a2); /*0x4dec99*/
  if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) != 15 && !dword_A8E7AC ) /*0x4decb5*/
  {
    *(float *)&this->? = (double)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646) /*0x4decf0*/
                       * 4.656612877414201e-10
                       * 0.15
                       + 0.1;
    if ( !Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1) ) /*0x4ded02*/
      *(float *)&this->? = -*(float *)&this->?; /*0x4ded13*/
    *(float *)&this->? = (double)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646) /*0x4ded45*/
                       * 4.656612877414201e-10
                       * 0.1;
  }
  LOBYTE(v8) = 0; /*0x4ded4b*/
  AbstractClass::AnnounceExpiredPointer(&this->TechnoClass, v8); /*0x4ded4f*/
  return 1; /*0x4dec45*/
}



// ==== 0x004DED70  TechnoClass::GetThreatValue  this=FootClass  sig=csp ====
int __thiscall TechnoClass::GetThreatValue(TechnoClass *this)
{
  _DWORD *v2; // eax
  HouseClass *v3; // edi
  int v5; // [esp+8h] [ebp-14h]
  __int16 v6[2]; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v7[12]; // [esp+10h] [ebp-Ch] BYREF

  v2 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v7); /*0x4ded80*/
  LOWORD(v5) = *v2 / 256; /*0x4ded93*/
  HIWORD(v5) = v2[1] / 256; /*0x4dedac*/
  *(_DWORD *)v6 = v5; /*0x4dedb9*/
  v3 = (HouseClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v6); /*0x4dedc9*/
  if ( !(unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, (#375 *)dword_A83D4C) /*0x4dedf4*/
    && (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 49))(this)
    && !(unsigned __int8)HouseClass::HasType(v3, (int)dword_A83D4C->Object_field_0x30) )
  {
    return *(_DWORD *)((*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 51))(this, 0) + 164); /*0x4dee09*/
  }
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *, Object *))this->RadioClass + 272))(this, dword_A83D4C) ) /*0x4dee20*/
    return ObjectClass::HasC4((ObjectClass *)this); /*0x4dee44*/
  return *(_DWORD *)((*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 51))(this, 1) + 164); /*0x4dee0f*/
}



// ==== 0x004DEE50  FootClass::vt_entry_530  this=FootClass  sig=csp ====
int __thiscall FootClass::vt_entry_530(FootClass *this, int a2, int a3, int a4)
{
  int (__thiscall **vtable0)(FootClass *, int, int, int, int *); // eax
  int v6; // [esp+0h] [ebp-4h] BYREF

  v6 = (int)this; /*0x4dee50*/
  vtable0 = (int (__thiscall **)(FootClass *, int, int, int, int *))this->TechnoClass; /*0x4dee55*/
  v6 = -1; /*0x4dee67*/
  return vtable0[331](this, a2, a3, a4, &v6); /*0x4dee76*/
}



// ==== 0x004DEE80  FootClass::ValidatePlacementEx  this=FootClass  sig=csp ====
int *__thiscall BuildingClass::ValidatePlacementEx(FootClass *this, int a2, int a3, int *a4, int *a5)
{
  int v6; // ebp
  int v7; // edi
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int *v13; // [esp+18h] [ebp-28h]
  __int16 v14; // [esp+1Ch] [ebp-24h] BYREF
  __int16 v15; // [esp+20h] [ebp-20h] BYREF
  int bunkersCount; // [esp+24h] [ebp-1Ch]
  char v17; // [esp+28h] [ebp-18h] BYREF
  char v18; // [esp+30h] [ebp-10h] BYREF

  v13 = 0; /*0x4deea1*/
  if ( !DynamicVector::GetOrGrow((DynamicVector *)this->?->ownedBuildingTypes, *(_DWORD *)(a2 + 3576)) ) /*0x4deea5*/
    return 0; /*0x4deea5*/
  v6 = 0; /*0x4deeb8*/
  bunkersCount = this->?->bunkersCount; /*0x4deebf*/
  if ( bunkersCount <= 0 ) /*0x4deec3*/
    return 0; /*0x4df02f*/
  do /*0x4df01b*/
  {
    v7 = *(_DWORD *)(this->?->absorbersCount + 4 * v6); /*0x4deed7*/
    if ( v7 /*0x4def0c*/
      && !*(_BYTE *)(v7 + 129)
      && *(_DWORD *)(v7 + 1312) == a2
      && (a4 == (int *)1 || (unsigned __int8)Array::ContainsValue((Array *)v7, (int)this)) )
    {
      if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 2 /*0x4defd6*/
        || (v8 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 72))(v7),
            LOWORD(a4) = *v8 / 256,
            HIWORD(a4) = v8[1] / 256,
            v13 = a4,
            (*((void (__thiscall **)(FootClass *))this->TechnoClass + 19))(this),
            v9 = (*((int (__thiscall **)(FootClass *, _DWORD, _DWORD, _DWORD))this->TechnoClass + 47))(this, 0, 0, 0),
            v10 = (*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 33))(this, v9),
            MapSeed::CheckTileMatch(
              (MapSeed *)&stru_87F5F0.__pad_58[416],
              &v15,
              &v14,
              *(_DWORD *)(v10 + 1460),
              (char)&v18,
              0,
              (char)&v17)) )
      {
        if ( (*((int (__thiscall **)(FootClass *, int, int))this->TechnoClass + 158))(this, 15, v7) == 1 ) /*0x4defef*/
        {
          v11 = BuildingClass::SquaredDistanceTo((BuildingClass *)this, (int *)v7); /*0x4deff4*/
          if ( *a5 == -1 || v11 < *a5 || *(_BYTE *)(v7 + 979) ) /*0x4df004*/
          {
            v13 = (int *)v7; /*0x4df00e*/
            *a5 = v11; /*0x4df012*/
          }
        }
      }
    }
    ++v6; /*0x4df018*/
  }
  while ( v6 < bunkersCount ); /*0x4df01b*/
  return v13; /*0x4df026*/
}



// ==== 0x004DF040  TechnoClass::FindBestMatch  this=FootClass  sig=csp ====
int __thiscall TechnoClass::FindBestMatch(TechnoClass *this, int a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // ebp
  int v6; // edi
  int (__thiscall **vtable0)(TechnoClass *, _DWORD, int, int, int *); // eax
  int v9; // edx
  int v10; // eax
  int i; // [esp+10h] [ebp-4h]

  v4 = a2; /*0x4df042*/
  v5 = 0; /*0x4df04c*/
  v6 = 0; /*0x4df04e*/
  for ( i = -1; v6 < *(_DWORD *)(v4 + 16); ++v6 ) /*0x4df05c*/
  {
    vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD, int, int, int *))this->RadioClass; /*0x4df066*/
    v9 = *(_DWORD *)(v4 + 4); /*0x4df06e*/
    a2 = -1; /*0x4df071*/
    v10 = vtable0[331](this, *(_DWORD *)(v9 + 4 * v6), a3, a4, &a2); /*0x4df080*/
    if ( v10 && (!v5 || a2 < i || i == -1 || *(_BYTE *)(v10 + 979)) ) /*0x4df09f*/
    {
      v5 = v10; /*0x4df0a9*/
      i = a2; /*0x4df0ab*/
    }
  }
  return v5; /*0x4df0b7*/
}



// ==== 0x004DF0D0  FootClass::ClearPathIndex  this=FootClass  sig=csp ====
int __thiscall FootClass::ClearPathIndex(FootClass *this)
{
  this->FootClass_field_5A0 = 0; /*0x4df0d2*/
  this->movementDestination = 0; /*0x4df0d8*/
  return 0; /*0x4df0de*/
}



// ==== 0x004DF0E0  FootClass::MissionSell_Dispatch  this=FootClass  sig=csp ====
int __thiscall FootClass::MissionSell_Dispatch(FootClass *this, char *a2)
{
  int v4; // ebp
  char v5; // dl
  bool v6; // bl
  bool v8; // [esp+14h] [ebp+4h]

  v4 = a2[12]; /*0x4df0ea*/
  if ( v4 == 29 ) /*0x4df0f1*/
  {
    v5 = a2[18]; /*0x4df0fa*/
    v8 = a2[23] != 0; /*0x4df101*/
    v6 = v5 != 0; /*0x4df108*/
    if ( (*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 304))(this) ) /*0x4df10b*/
    {
      this->FootClass_field_bool_5D1 = 0; /*0x4df129*/
      this->FootClass_field_int_5C4 = 29; /*0x4df132*/
      if ( v8 ) /*0x4df13c*/
      {
        this->FootClass_field_5C8 = (int)BuildingLoadQueue::GetNext((BuildingLoadQueue *)(a2 + 19)); /*0x4df146*/
        return 2; /*0x4df14f*/
      }
      else if ( v6 ) /*0x4df15a*/
      {
        this->FootClass_field_5CC = (int)BuildingLoadQueue::GetNext((BuildingLoadQueue *)(a2 + 14)); /*0x4df164*/
        return 1; /*0x4df16d*/
      }
      else
      {
        (*((void (__thiscall **)(FootClass *))this->TechnoClass + 298))(this); /*0x4df17a*/
        return 29; /*0x4df181*/
      }
    }
    else
    {
      return 2 - v6; /*0x4df11e*/
    }
  }
  else
  {
    (*((void (__thiscall **)(FootClass *))this->TechnoClass + 298))(this); /*0x4df18d*/
    return v4; /*0x4df194*/
  }
}



// ==== 0x004DF1A0  TechnoClass::vt_entry_4A8  this=FootClass  sig=csp ====
int __thiscall TechnoClass::vt_entry_4A8(TechnoClass *this)
{
  this->FootClass_field_5C4 = -1; /*0x4df1a2*/
  this->FootClass_field_5C8 = 0; /*0x4df1ac*/
  this->q173 = 0; /*0x4df1b2*/
  this->FootClass_field_bool_5D1 = 0; /*0x4df1b8*/
  return 0; /*0x4df1be*/
}



// ==== 0x004DF1C0  TechnoClass::vt_entry_4AC  this=FootClass  sig=csp ====
BOOL __thiscall TechnoClass::vt_entry_4AC(TechnoClass *this)
{
  return this->FootClass_field_5C4 != -1; /*0x4df1ce*/
}



// ==== 0x004DF1D0  TechnoClass::vt_entry_4B0  this=FootClass  sig=csp ====
char __thiscall TechnoClass::vt_entry_4B0(TechnoClass *this)
{
  return this->FootClass_field_bool_5D1; /*0x4df1d6*/
}



// ==== 0x004DF1E0  TechnoClass::vt_entry_4B4  this=FootClass  sig=csp ====
int __thiscall TechnoClass::vt_entry_4B4(TechnoClass *this)
{
  return this->FootClass_field_5C4; /*0x4df1e6*/
}



// ==== 0x004DF1F0  TechnoClass::vt_entry_4B8  this=FootClass  sig=csp ====
_DWORD *__thiscall TechnoClass::vt_entry_4B8(TechnoClass *this, _DWORD *a2)
{
  int v2; // eax
  _DWORD *v3; // edx
  int v5; // ecx
  _DWORD *v6; // ecx
  _BYTE v7[12]; // [esp+4h] [ebp-Ch] BYREF

  v2 = this->FootClass_field_5C8; /*0x4df1f0*/
  if ( v2 ) /*0x4df1fc*/
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v2 + 72))(v2, v7); /*0x4df20a*/
    *a2 = *v3; /*0x4df214*/
    a2[1] = v3[1]; /*0x4df219*/
    a2[2] = v3[2]; /*0x4df220*/
    return a2; /*0x4df20c*/
  }
  else
  {
    v5 = this->q173; /*0x4df229*/
    if ( v5 ) /*0x4df231*/
    {
      v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 72))(v5, v7); /*0x4df23d*/
      *a2 = *v6; /*0x4df247*/
      a2[1] = v6[1]; /*0x4df24c*/
      a2[2] = v6[2]; /*0x4df253*/
    }
    else
    {
      *a2 = -1; /*0x4df26c*/
      a2[1] = -1; /*0x4df26e*/
      a2[2] = -1; /*0x4df271*/
    }
    return a2; /*0x4df23f*/
  }
}



// ==== 0x004DF280  ObjectClass::method_4DF280  this=ObjectClass  sig=csp ====
void __thiscall sub_4DF280(TechnoClass *this)
{
  int v2; // ecx
  _DWORD *v3; // eax
  int v4; // [esp+4h] [ebp-14h]
  __int16 v5[2]; // [esp+8h] [ebp-10h] BYREF
  _BYTE v6[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = *((_DWORD *)this + 371); /*0x4df286*/
  if ( v2 ) /*0x4df28e*/
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v2 + 72))(v2, v6); /*0x4df297*/
    LOWORD(v4) = *v3 / 256; /*0x4df2aa*/
    HIWORD(v4) = v3[1] / 256; /*0x4df2c3*/
    *(_DWORD *)v5 = v4; /*0x4df2d1*/
    *((_DWORD *)this + 370) = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v5); /*0x4df2da*/
  }
  else
  {
    *((_DWORD *)this + 370) = 0; /*0x4df2ef*/
  }
  *((_DWORD *)this + 371) = 0; /*0x4df2e0*/
}



// ==== 0x004DF310  TechnoClass::vt_entry_4C4  this=FootClass  sig=csp ====
BOOL __thiscall TechnoClass::vt_entry_4C4(TechnoClass *this)
{
  return this->FootClass_field_5C4 == 29; /*0x4df31e*/
}



// ==== 0x004DF320  TechnoClass::vt_entry_4C8  this=FootClass  sig=csp ====
char __thiscall TechnoClass::vt_entry_4C8(TechnoClass *this)
{
  int v2; // eax
  void (__thiscall **vtable0)(TechnoClass *, int, int); // edx

  v2 = this->FootClass_field_5C8; /*0x4df326*/
  this->FootClass_field_bool_5D1 = 0; /*0x4df32c*/
  if ( v2 ) /*0x4df335*/
  {
    (*((void (__thiscall **)(TechnoClass *, int, int))this->RadioClass + 122))(this, 2, 1); /*0x4df33d*/
    (*((void (__thiscall **)(TechnoClass *, _DWORD, int))this->RadioClass + 288))(this, this->FootClass_field_5C8, 1); /*0x4df350*/
    return 1; /*0x4df356*/
  }
  else
  {
    vtable0 = (void (__thiscall **)(TechnoClass *, int, int))this->RadioClass; /*0x4df361*/
    if ( this->q173 ) /*0x4df35b*/
    {
      vtable0[122](this, 1, 1); /*0x4df36d*/
      (*((void (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 242))(this, this->q173); /*0x4df37e*/
      return 1; /*0x4df384*/
    }
    else
    {
      ((void (__thiscall *)(TechnoClass *))vtable0[298])(this); /*0x4df38b*/
      return 0; /*0x4df392*/
    }
  }
}



// ==== 0x004DF3A0  FootClass::UpdateAttackMove_SelectNewTarget  this=FootClass  sig=csp ====
int __thiscall FootClass::UpdateAttackMove_SelectNewTarget(FootClass *this)
{
  int result; // eax
  int (__thiscall **vtable0)(FootClass *, int *, int); // eax
  unsigned __int8 (__thiscall **v4)(FootClass *, int *, int); // eax
  int v5; // [esp+8h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]

  if ( this->FootClass_field_5C8 ) /*0x4df3a6*/
  {
    if ( this->FootClass_field_bool_5D1 ) /*0x4df3b0*/
    {
      result = (*((int (__thiscall **)(FootClass *, AbstractClass *))this->TechnoClass + 237))(this, this->?); /*0x4df3c5*/
      if ( (_BYTE)result ) /*0x4df3cd*/
        return result; /*0x4df3cd*/
      this->? = 0; /*0x4df3d3*/
    }
    v5 = this->?[0]; /*0x4df3e7*/
    vtable0 = (int (__thiscall **)(FootClass *, int *, int))this->TechnoClass; /*0x4df3eb*/
    v6 = this->?[1]; /*0x4df3f0*/
    v7 = this->?[2]; /*0x4df3fe*/
    result = vtable0[231](this, &v5, 1); /*0x4df402*/
    if ( (_BYTE)result ) /*0x4df40a*/
      goto LABEL_6; /*0x4df40a*/
  }
  else if ( !this->FootClass_field_5CC /*0x4df441*/
         || (result = (*((int (__thiscall **)(FootClass *, int))this->TechnoClass + 237))(
                        this,
                        this->FootClass_field_5CC),
             !(_BYTE)result) )
  {
    if ( !this->FootClass_field_bool_5D1 /*0x4df460*/
      || (result = (*((int (__thiscall **)(FootClass *, AbstractClass *))this->TechnoClass + 237))(this, this->?),
          !(_BYTE)result) )
    {
      this->? = 0; /*0x4df46a*/
      v5 = this->?[0]; /*0x4df476*/
      v4 = (unsigned __int8 (__thiscall **)(FootClass *, int *, int))this->TechnoClass; /*0x4df47a*/
      v6 = this->?[1]; /*0x4df47f*/
      v7 = this->?[2]; /*0x4df48d*/
      if ( v4[231](this, &v5, 1) ) /*0x4df491*/
      {
LABEL_6:
        result = (*((int (__thiscall **)(FootClass *, int, int))this->TechnoClass + 122))(this, 1, 1); /*0x4df410*/
        this->FootClass_field_bool_5D1 = 1; /*0x4df41e*/
        return result; /*0x4df429*/
      }
      result = this->FootClass_field_5CC; /*0x4df49f*/
      this->? = (AbstractClass *)result; /*0x4df4a5*/
    }
  }
  return result; /*0x4df425*/
}



// ==== 0x004DF4B0  TechnoClass::vt_entry_4D0  this=FootClass  sig=csp ====
char __thiscall TechnoClass::vt_entry_4D0(TechnoClass *this)
{
  char result; // al

  result = 0; /*0x4df4b3*/
  if ( this->FootClass_field_5C4 == 29 ) /*0x4df4bc*/
  {
    if ( this->FootClass_field_bool_5D1 ) /*0x4df4be*/
    {
      this->FootClass_field_bool_5D1 = 0; /*0x4df4c8*/
    }
    else if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 97))(this) != 5 /*0x4df4f7*/
           && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 97))(this) != 5 )
    {
      (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 298))(this); /*0x4df4fd*/
      return 0; /*0x4df503*/
    }
    return (*((char (__thiscall **)(TechnoClass *))this->RadioClass + 306))(this); /*0x4df4d3*/
  }
  return result; /*0x4df4d9*/
}



// ==== 0x004DF510  FootClass::ScanAdjacentCells  this=FootClass  sig=csp ====
char __userpurge FootClass::ScanAdjacentCells@<al>(FootClass *this, _DWORD *a2, int a3, int a4, int a5)
{
  int v5; // ecx
  int v6; // ebp
  _DWORD *v7; // edi
  _BYTE *v8; // esi
  int v9; // eax
  int i; // edi
  _DWORD *v11; // esi
  int j; // edi
  _DWORD *v13; // esi
  int k; // edi
  int *v16; // esi
  int v17; // eax
  int v18; // eax
  int *v19; // eax
  int v20; // ebx
  int v21; // eax
  int *v22; // [esp+0h] [ebp-48h]
  int v23; // [esp+4h] [ebp-44h]
  __int16 v24[6]; // [esp+10h] [ebp-38h] BYREF
  __int16 v25[2]; // [esp+1Ch] [ebp-2Ch] BYREF
  int v26; // [esp+20h] [ebp-28h]
  int v27; // [esp+24h] [ebp-24h] BYREF
  int v28; // [esp+28h] [ebp-20h] BYREF
  int v29; // [esp+2Ch] [ebp-1Ch] BYREF
  void **v30; // [esp+30h] [ebp-18h] BYREF
  void *Block; // [esp+34h] [ebp-14h]
  int v32; // [esp+38h] [ebp-10h]
  char v33; // [esp+3Dh] [ebp-Bh]
  int v34; // [esp+40h] [ebp-8h]
  int v35; // [esp+44h] [ebp-4h]

  v6 = v5; /*0x4df515*/
  v24[0] = (int)this->TechnoClass / 256; /*0x4df52b*/
  v24[1] = (int)this->? / 256; /*0x4df544*/
  v7 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24); /*0x4df563*/
  EventClass::resetEvent((EventClass *)&v30, 0, 0); /*0x4df565*/
  v30 = &DynamicVectorClass<TechnoClass *>::`vftable'; /*0x4df56a*/
  v35 = 10; /*0x4df572*/
  v34 = 0; /*0x4df57a*/
  v8 = (_BYTE *)v7[57]; /*0x4df57e*/
  if ( v8 ) /*0x4df586*/
  {
    while ( (v8[20] & 1) != 0 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 44))(v8) != 6 ) /*0x4df5a0*/
    {
      if ( v34 < v32 /*0x4df5cc*/
        || (v33 || !v32)
        && v35 > 0
        && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v30[2])(&v30, v35 + v32, 0) )
      {
        v9 = v34++; /*0x4df5d7*/
        *((_DWORD *)Block + v9) = v8; /*0x4df5e2*/
      }
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 212))(v8); /*0x4df5e9*/
      v8 = (_BYTE *)v7[57]; /*0x4df5ef*/
      if ( !v8 ) /*0x4df5f7*/
        goto LABEL_17; /*0x4df5f7*/
    }
    for ( i = v34 - 1; i >= 0; --i ) /*0x4df604*/
    {
      v11 = (_DWORD *)*((_DWORD *)Block + i); /*0x4df60f*/
      v27 = v11[39]; /*0x4df61e*/
      v28 = v11[40]; /*0x4df625*/
      v29 = v11[41]; /*0x4df631*/
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int *, _DWORD))(*v11 + 216))(v11, &v27, 0) ) /*0x4df639*/
        (*(void (__thiscall **)(_DWORD *))(*v11 + 248))(v11); /*0x4df647*/
    }
    goto LABEL_22; /*0x4df64e*/
  }
LABEL_17:
  if ( !(*(unsigned __int8 (__thiscall **)(int, FootClass *, _DWORD *))(*(_DWORD *)v6 + 216))(v6, this, a2) ) /*0x4df661*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 248))(v6); /*0x4df674*/
    for ( j = v34 - 1; j >= 0; --j ) /*0x4df683*/
    {
      v13 = (_DWORD *)*((_DWORD *)Block + j); /*0x4df68a*/
      v27 = v13[39]; /*0x4df699*/
      v28 = v13[40]; /*0x4df6a2*/
      v29 = v13[41]; /*0x4df6a9*/
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int *, _DWORD))(*v13 + 216))(v13, &v27, 0) ) /*0x4df6b4*/
        (*(void (__thiscall **)(_DWORD *))(*v13 + 248))(v13); /*0x4df6c2*/
    }
LABEL_22:
    v34 = 0; /*0x4df6cb*/
    if ( Block ) /*0x4df6d5*/
    {
      if ( v33 ) /*0x4df6db*/
        __3_YAXPAX_Z(Block); /*0x4df6de*/
    }
    return 0; /*0x4df6ef*/
  }
  for ( k = v34 - 1; k >= 0; --k ) /*0x4df6fb*/
  {
    v16 = (int *)*((_DWORD *)Block + k); /*0x4df713*/
    a4 = *(_DWORD *)(*(int (__thiscall **)(int *, __int16 *, int *, int))(*v16 + 440))(v16, v25, v22, v23); /*0x4df735*/
    v17 = *v16; /*0x4df739*/
    a3 = 0; /*0x4df741*/
    v18 = (*(int (__thiscall **)(int *))(v17 + 132))(v16); /*0x4df74b*/
    *(_DWORD *)v25 = *LayerClass::Pathfinding_Find( /*0x4df775*/
                        &stru_87F5F0.__pad_58[416],
                        (int)&a4,
                        &v28,
                        (__int16 *)&a4,
                        *(_DWORD *)(v18 + 1660),
                        -1,
                        0,
                        0,
                        1,
                        1,
                        0,
                        0,
                        0,
                        1,
                        (__int16 *)&a3,
                        0,
                        0);
    v19 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x4df77f*/
    v23 = 0; /*0x4df78a*/
    v20 = *v19; /*0x4df78b*/
    v22 = &v29; /*0x4df78d*/
    v26 = *v16; /*0x4df790*/
    v21 = (*(int (__thiscall **)(int *))(v20 + 72))(v19); /*0x4df794*/
    if ( !(*(unsigned __int8 (__thiscall **)(int *, int))(*(_DWORD *)v25 + 216))(v16, v21) ) /*0x4df79e*/
      (*(void (__thiscall **)(int *))(*v16 + 248))(v16); /*0x4df7ac*/
  }
  v30 = &VectorClass<TechnoClass *>::`vftable'; /*0x4df7bf*/
  if ( Block && v33 ) /*0x4df7cf*/
    __3_YAXPAX_Z(Block); /*0x4df7d2*/
  return 1; /*0x4df6e6*/
}



// ==== 0x004DF7F0  FootClass::Destru_vt322  this=FootClass  sig=csp ====
char __thiscall FootClass::Destru_vt322(FootClass *this, int a2, int a3, int a4)
{
  int InstanceCOM; // eax
  int v6; // eax
  void (__thiscall **vtable0)(FootClass *, CellClass *, int); // edi
  CellClass *v8; // eax
  LPVOID v9; // edi
  LPVOID v10; // eax
  int v11; // ecx
  int v12; // edx
  void (__thiscall **v13)(FootClass *, CellClass *, int); // edi
  int v14; // ecx
  CellClass *v15; // eax
  LPVOID ppv; // [esp+54h] [ebp-8h] BYREF
  int v18; // [esp+58h] [ebp-4h] BYREF

  if ( (*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 21))(this) /*0x4df83c*/
    || (*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 88))(this)
    || this->?
    || (*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 117))(this)
    || (*((unsigned __int8 (__thiscall **)(FootClass *))this->TechnoClass + 118))(this) )
  {
    return 0; /*0x4dfa40*/
  }
  ppv = 0; /*0x4df858*/
  InstanceCOM = CreateInstanceCOM((ObjectClass *)&ppv, (IID *)&g_CLSID_HoverLocomotion, 0, 7u); /*0x4df85c*/
  if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x4df86a*/
    WinAPI::Wrapper(InstanceCOM); /*0x4df86d*/
  v18 = 0; /*0x4df876*/
  if ( ppv ) /*0x4df87c*/
  {
    v6 = StreamClass::Set((StreamClass *)&v18, &ppv); /*0x4df887*/
    if ( v6 < 0 && v6 != -2147467262 ) /*0x4df895*/
      WinAPI::Wrapper(v6); /*0x4df898*/
  }
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2)->flags[0] & 0x100) != 0 ) /*0x4df8b5*/
    a4 += (int)FootClass_Array.?; /*0x4df8c3*/
  if ( (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 1 ) /*0x4df8d1*/
  {
    if ( !this->locomotor[0] ) /*0x4df8d3*/
      WinAPI::Wrapper(-2147467261); /*0x4df8e0*/
    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)this->locomotor[0] + 156))(this->locomotor[0], 0); /*0x4df8ef*/
    if ( !this->locomotor[0] ) /*0x4df8f5*/
      WinAPI::Wrapper(-2147467261); /*0x4df910*/
    (*(void (__stdcall **)(int, int, int, int, int))(*(_DWORD *)this->locomotor[0] + 112))( /*0x4df92d*/
      this->locomotor[0],
      -1,
      a2,
      a3,
      a4);
    (*((void (__thiscall **)(FootClass *, int *))this->TechnoClass + 61))(this, &a2); /*0x4df939*/
    this->frozenStill = 1; /*0x4df93f*/
  }
  vtable0 = (void (__thiscall **)(FootClass *, CellClass *, int))this->TechnoClass; /*0x4df946*/
  v8 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2); /*0x4df954*/
  vtable0[288](this, v8, 1); /*0x4df95c*/
  (*((void (__thiscall **)(FootClass *, _DWORD, int))this->TechnoClass + 288))(this, 0, 1); /*0x4df96a*/
  if ( !ppv ) /*0x4df976*/
    WinAPI::Wrapper(-2147467261); /*0x4df97d*/
  (*(void (__stdcall **)(LPVOID, FootClass *))(*(_DWORD *)ppv + 12))(ppv, this); /*0x4df98a*/
  if ( !v18 ) /*0x4df999*/
    WinAPI::Wrapper(-2147467261); /*0x4df9a0*/
  (*(void (__stdcall **)(int, int))(*(_DWORD *)v18 + 12))(v18, this->locomotor[0]); /*0x4df9ad*/
  v9 = (LPVOID)this->locomotor[0]; /*0x4df9b0*/
  v10 = ppv; /*0x4df9b6*/
  if ( v9 != ppv ) /*0x4df9bc*/
  {
    this->locomotor[0] = (int)ppv; /*0x4df9c0*/
    if ( v10 ) /*0x4df9c6*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v10 + 4))(v10); /*0x4df9cb*/
    if ( v9 ) /*0x4df9d0*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v9 + 8))(v9); /*0x4df9d5*/
  }
  v11 = a2; /*0x4df9d8*/
  v12 = a3; /*0x4df9dc*/
  v13 = (void (__thiscall **)(FootClass *, CellClass *, int))this->TechnoClass; /*0x4df9e6*/
  this->? = 1; /*0x4df9ea*/
  this->?[0] = v11; /*0x4df9f1*/
  v14 = a4; /*0x4df9f3*/
  this->?[1] = v12; /*0x4df9f7*/
  this->?[2] = v14; /*0x4df9ff*/
  v15 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2); /*0x4dfa07*/
  v13[288](this, v15, 1); /*0x4dfa0f*/
  if ( v18 ) /*0x4dfa1b*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v18 + 8))(v18); /*0x4dfa20*/
  if ( ppv ) /*0x4dfa29*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x4dfa2e*/
  return 1; /*0x4dfa33*/
}



// ==== 0x004DFA50  FootClass::IsNotAttackAndPlayer  this=FootClass  sig=csp ====
char __thiscall FootClass::IsNotAttackAndPlayer(FootClass *this)
{
  if ( this->isAttackedByLocomotor ) /*0x4dfa50*/
    return 0; /*0x4dfa5a*/
  else
    return ObjectClass::IsPlayerOwnedAndCheck((IUnknown *)this); /*0x4dfa5d*/
}



// ==== 0x004DFA70  TechnoClass::FindClosestInfantry  this=FootClass  sig=csp ====
char __thiscall TechnoClass::FindClosestInfantry(TechnoClass *this)
{
  double v1; // st7
  int v3; // ebp
  int v4; // ebx
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  int v7; // eax
  int v9; // [esp+24h] [ebp-2Ch]
  int v10; // [esp+28h] [ebp-28h]
  int v11; // [esp+30h] [ebp-20h]
  int v12; // [esp+34h] [ebp-1Ch]
  _BYTE v13[12]; // [esp+38h] [ebp-18h] BYREF
  _BYTE v14[12]; // [esp+44h] [ebp-Ch] BYREF

  v10 = 0; /*0x4dfa7f*/
  v9 = 0x7FFFFFFF; /*0x4dfa8d*/
  v3 = this->owner->psychicDetectionCount - 1; /*0x4dfa9b*/
  if ( v3 < 0 ) /*0x4dfa9c*/
    return 0; /*0x4dfa9c*/
  do /*0x4dfb31*/
  {
    v4 = *(_DWORD *)(this->owner->secretLabsCount + 4 * v3); /*0x4dfab3*/
    v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 72))(v4, v13); /*0x4dfabf*/
    v6 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v14); /*0x4dfac8*/
    v11 = v6[1] - v5[1]; /*0x4dfae6*/
    v12 = v6[2] - v5[2]; /*0x4dfaf0*/
    Math::Sqrt((double)(*v6 - *v5) * (double)(*v6 - *v5) + (double)v12 * (double)v12 + (double)v11 * (double)v11); /*0x4dfb15*/
    LOWORD(v7) = Math::RoundToInt(v1); /*0x4dfb1d*/
    if ( v7 < v9 ) /*0x4dfb26*/
    {
      v9 = v7; /*0x4dfb28*/
      v10 = v4; /*0x4dfb2c*/
    }
    --v3; /*0x4dfb30*/
  }
  while ( v3 >= 0 ); /*0x4dfb31*/
  if ( !v10 ) /*0x4dfb3d*/
    return 0; /*0x4dfb3f*/
  (*((void (__thiscall **)(TechnoClass *, int, int))this->RadioClass + 288))(this, v10, 1); /*0x4dfb50*/
  (*((void (__thiscall **)(TechnoClass *, int, _DWORD))this->RadioClass + 122))(this, 9, 0); /*0x4dfb5e*/
  return 1; /*0x4dfb41*/
}



// ==== 0x004DFB70  TechnoClass::FindClosestUnit  this=FootClass  sig=csp ====
char __thiscall TechnoClass::FindClosestUnit(TechnoClass *this)
{
  double v1; // st7
  int v3; // ebp
  int v4; // eax
  TechnoClass *v5; // edi
  _DWORD *v6; // ebx
  _DWORD *v7; // eax
  int v8; // eax
  int v10; // [esp+2Ch] [ebp-2Ch]
  TechnoClass *v11; // [esp+30h] [ebp-28h]
  int v12; // [esp+38h] [ebp-20h]
  int v13; // [esp+3Ch] [ebp-1Ch]
  _BYTE v14[12]; // [esp+40h] [ebp-18h] BYREF
  _BYTE v15[12]; // [esp+4Ch] [ebp-Ch] BYREF

  v11 = 0; /*0x4dfb7f*/
  v3 = 0x7FFFFFFF; /*0x4dfb8d*/
  v4 = this->owner->countResourceDestinations - 1; /*0x4dfb98*/
  v10 = v4; /*0x4dfb99*/
  if ( v4 < 0 ) /*0x4dfb9d*/
    goto LABEL_7; /*0x4dfb9d*/
  do /*0x4dfc48*/
  {
    v5 = *(TechnoClass **)(this->owner->productionFactory_plants_count + 4 * v4); /*0x4dfbb1*/
    if ( (*((int (__thiscall **)(TechnoClass *, int, TechnoClass *))this->RadioClass + 158))(this, 15, v5) == 1 ) /*0x4dfbc2*/
    {
      v6 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))v5->RadioClass + 18))(v5, v14); /*0x4dfbd2*/
      v7 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v15); /*0x4dfbdb*/
      v12 = v7[1] - v6[1]; /*0x4dfbf9*/
      v13 = v7[2] - v6[2]; /*0x4dfc03*/
      Math::Sqrt((double)(*v7 - *v6) * (double)(*v7 - *v6) + (double)v13 * (double)v13 + (double)v12 * (double)v12); /*0x4dfc28*/
      LOWORD(v8) = Math::RoundToInt(v1); /*0x4dfc30*/
      if ( v8 < v3 ) /*0x4dfc37*/
      {
        v3 = v8; /*0x4dfc39*/
        v11 = v5; /*0x4dfc3b*/
      }
    }
    v4 = --v10; /*0x4dfc43*/
  }
  while ( v10 >= 0 ); /*0x4dfc48*/
  if ( v11 ) /*0x4dfc54*/
  {
    this->shouldEnterAbsorber = 1; /*0x4dfc6b*/
    if ( (TechnoClass *)Team::GetMember((Team *)this, 0) != v11 && this->queueUpToEnter != v11 ) /*0x4dfc81*/
    {
      (*((void (__thiscall **)(TechnoClass *, int, _DWORD))this->RadioClass + 122))(this, 7, 0); /*0x4dfc8b*/
      (*((void (__thiscall **)(TechnoClass *, TechnoClass *, int))this->RadioClass + 288))(this, v11, 1); /*0x4dfc98*/
    }
    return 1; /*0x4dfc9f*/
  }
  else
  {
LABEL_7:
    this->shouldEnterAbsorber = 0; /*0x4dfc56*/
    return 0; /*0x4dfc5d*/
  }
}



// ==== 0x004DFCB0  FootClass::FindClosestForRepair  this=FootClass  sig=csp ====
char __fastcall BuildingClass::FindClosestForRepair(FootClass *this)
{
  double v1; // st7
  int v3; // ebp
  BuildingClass *v4; // ebx
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  AbstractClass *movementDestination; // ecx
  int v12; // [esp+24h] [ebp-2Ch]
  AbstractClass *v13; // [esp+28h] [ebp-28h]
  int v14; // [esp+30h] [ebp-20h]
  int v15; // [esp+34h] [ebp-1Ch]
  char v16[12]; // [esp+38h] [ebp-18h] BYREF
  char v17[12]; // [esp+44h] [ebp-Ch] BYREF

  v13 = 0; /*0x4dfcbf*/
  v12 = 0x7FFFFFFF; /*0x4dfccd*/
  v3 = this->?->airspeedMultiplier[0] - 1; /*0x4dfcdb*/
  if ( v3 < 0 ) /*0x4dfcdc*/
    goto LABEL_10; /*0x4dfcdc*/
  do
  {
    v4 = *(BuildingClass **)(this->?->TechnoClass::firepowerMultiplier[1] + 4 * v3); /*0x4dfcf3*/
    v5 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *))v4->TechnoClass + 18))(v4, v16); /*0x4dfcff*/
    v6 = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *))this->TechnoClass + 18))(this, v17); /*0x4dfd08*/
    v14 = v6[1] - v5[1]; /*0x4dfd28*/
    v15 = v6[2] - v5[2]; /*0x4dfd2c*/
    Math::Sqrt((double)(*v6 - *v5) * (double)(*v6 - *v5) + (double)v14 * (double)v14 + (double)v15 * (double)v15); /*0x4dfd55*/
    LOWORD(v7) = Math::RoundToInt(v1); /*0x4dfd5d*/
    v8 = v7; /*0x4dfd62*/
    if ( v7 < v12 )
    {
      v9 = this
         ? ((*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15
          ? (unsigned int)this
          : 0)
         : 0;
      if ( (unsigned __int8)BuildingClass::CanRepair(v4, v9) ) /*0x4dfd89*/
      {
        v12 = v8; /*0x4dfd92*/
        v13 = (AbstractClass *)v4; /*0x4dfd96*/
      }
    }
    --v3; /*0x4dfd9a*/
  }
  while ( v3 >= 0 );
  if ( v13 ) /*0x4dfda7*/
  {
    movementDestination = this->movementDestination; /*0x4dfdba*/
    this->shouldEnterOccupiable = 1; /*0x4dfdc0*/
    if ( movementDestination != v13 || this->? != 8 ) /*0x4dfdd2*/
    {
      (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, v13, 1); /*0x4dfddb*/
      (*((void (__thiscall **)(FootClass *, int, int))this->TechnoClass + 122))(this, 8, 1); /*0x4dfde9*/
    }
    return 1; /*0x4dfdf0*/
  }
  else
  {
LABEL_10:
    this->shouldEnterOccupiable = 0; /*0x4dfda9*/
    return 0; /*0x4dfdb0*/
  }
}



// ==== 0x004DFE00  FootClass::FindClosestForRepair2  this=FootClass  sig=csp ====
char __fastcall BuildingClass::FindClosestForRepair2(FootClass *this)
{
  double v1; // st7
  int v2; // eax
  int v4; // ebp
  BuildingClass *v5; // ebx
  FootClass *v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  int v9; // eax
  AbstractClass *movementDestination; // ecx
  int v12; // [esp+24h] [ebp-2Ch]
  AbstractClass *v13; // [esp+28h] [ebp-28h]
  int v14; // [esp+30h] [ebp-20h]
  int v15; // [esp+34h] [ebp-1Ch]
  char v16[12]; // [esp+38h] [ebp-18h] BYREF
  char v17[12]; // [esp+44h] [ebp-Ch] BYREF

  v2 = stru_A8EB00.ObjectTypeClass[20] - 1; /*0x4dfe0f*/
  v13 = 0; /*0x4dfe17*/
  v4 = 0x7FFFFFFF; /*0x4dfe1f*/
  v12 = stru_A8EB00.ObjectTypeClass[20] - 1; /*0x4dfe24*/
  if ( stru_A8EB00.ObjectTypeClass[20] - 1 < 0 ) /*0x4dfe28*/
    goto LABEL_10; /*0x4dfe28*/
  do
  {
    v5 = *(BuildingClass **)(stru_A8EB00.ObjectTypeClass[17] + 4 * v2); /*0x4dfe36*/
    if ( this )
      v6 = (*((int (__thiscall **)(FootClass *))this->TechnoClass + 11))(this) == 15 ? this : 0;
    else
      v6 = 0; /*0x4dfe3b*/
    if ( (unsigned __int8)BuildingClass::CanRepair(v5, (int)v6) ) /*0x4dfe54*/
    {
      v7 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *))v5->TechnoClass + 18))(v5, v16); /*0x4dfe6b*/
      v8 = (_DWORD *)(*((int (__thiscall **)(FootClass *, char *))this->TechnoClass + 18))(this, v17); /*0x4dfe74*/
      v14 = v8[1] - v7[1]; /*0x4dfe92*/
      v15 = v8[2] - v7[2]; /*0x4dfe9c*/
      Math::Sqrt((double)(*v8 - *v7) * (double)(*v8 - *v7) + (double)v15 * (double)v15 + (double)v14 * (double)v14); /*0x4dfec1*/
      LOWORD(v9) = Math::RoundToInt(v1); /*0x4dfec9*/
      if ( v9 < v4 ) /*0x4dfed0*/
      {
        v4 = v9; /*0x4dfed2*/
        v13 = (AbstractClass *)v5; /*0x4dfed4*/
      }
    }
    v2 = --v12; /*0x4dfedc*/
  }
  while ( v12 >= 0 );
  if ( v13 ) /*0x4dfeed*/
  {
    movementDestination = this->movementDestination; /*0x4dff00*/
    this->shouldGarrisonStructure = 1; /*0x4dff06*/
    if ( movementDestination != v13 || this->? != 8 ) /*0x4dff18*/
    {
      (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->TechnoClass + 288))(this, v13, 1); /*0x4dff21*/
      (*((void (__thiscall **)(FootClass *, int, int))this->TechnoClass + 122))(this, 8, 1); /*0x4dff2f*/
    }
    return 1; /*0x4dff36*/
  }
  else
  {
LABEL_10:
    this->shouldGarrisonStructure = 0; /*0x4dfeef*/
    return 0; /*0x4dfef6*/
  }
}



// ==== 0x004DFF40  TechnoClass::FindClosestBuilding  this=FootClass  sig=csp ====
char __thiscall TechnoClass::FindClosestBuilding(TechnoClass *this)
{
  double v1; // st7
  char result; // al
  int v4; // ebp
  int v5; // esi
  _DWORD *v6; // ebx
  _DWORD *v7; // eax
  int v8; // eax
  int v9; // ebx
  int v10; // [esp+24h] [ebp-2Ch]
  int v11; // [esp+28h] [ebp-28h]
  int v12; // [esp+30h] [ebp-20h]
  int v13; // [esp+34h] [ebp-1Ch]
  _BYTE v14[12]; // [esp+38h] [ebp-18h] BYREF
  _BYTE v15[12]; // [esp+44h] [ebp-Ch] BYREF

  result = TechnoClass::CanSelfRepair(this); /*0x4dff4f*/
  if ( result ) /*0x4dff56*/
  {
    v11 = 0; /*0x4dff66*/
    v10 = 0x7FFFFFFF; /*0x4dff6e*/
    v4 = this->owner->startingUnitsCapacity - 1; /*0x4dff7c*/
    if ( v4 < 0 ) /*0x4dff7d*/
      return 0; /*0x4dff7d*/
    do /*0x4e002d*/
    {
      v5 = *(_DWORD *)(this->owner->unitsSelfHeal + 4 * v4); /*0x4dff94*/
      v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 72))(v5, v14); /*0x4dffa0*/
      v7 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v15); /*0x4dffa9*/
      v12 = v7[1] - v6[1]; /*0x4dffc7*/
      v13 = v7[2] - v6[2]; /*0x4dffd1*/
      Math::Sqrt((double)(*v7 - *v6) * (double)(*v7 - *v6) + (double)v13 * (double)v13 + (double)v12 * (double)v12); /*0x4dfff6*/
      LOWORD(v8) = Math::RoundToInt(v1); /*0x4dfffe*/
      v9 = v8; /*0x4e0003*/
      if ( v8 < v10 && !Team::GetMember((Team *)v5, 0) && !*(_DWORD *)(v5 + 740) ) /*0x4e001a*/
      {
        v10 = v9; /*0x4e0024*/
        v11 = v5; /*0x4e0028*/
      }
      --v4; /*0x4e002c*/
    }
    while ( v4 >= 0 ); /*0x4e002d*/
    if ( v11 ) /*0x4e0039*/
    {
      (*((void (__thiscall **)(TechnoClass *, int, int))this->RadioClass + 288))(this, v11, 1); /*0x4e004c*/
      (*((void (__thiscall **)(TechnoClass *, int, int))this->RadioClass + 158))(this, 2, v11); /*0x4e0059*/
      (*((void (__thiscall **)(TechnoClass *, int, int))this->RadioClass + 122))(this, 7, 1); /*0x4e0067*/
      return 1; /*0x4e006e*/
    }
    else
    {
      return 0; /*0x4e003b*/
    }
  }
  return result; /*0x4dff58*/
}


