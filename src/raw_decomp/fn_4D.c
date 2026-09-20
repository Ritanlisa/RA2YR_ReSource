// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x004D0180  DamageArea::CheckOccupancyEligibility  this=DamageArea  sig=csp ====
char __thiscall sub_4D0180(int this)
{
  _DWORD *v2; // esi
  int (__stdcall ***v3)(_DWORD, void *, int *); // ecx
  int v4; // eax
  int v5; // esi
  int v6; // edi
  int v8; // [esp+18h] [ebp-8h] BYREF
  int v9; // [esp+1Ch] [ebp-4h] BYREF

  v2 = *(_DWORD **)(this + 12); /*0x4d0187*/
  if ( v2 ) /*0x4d018c*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(*v2 + 44))(*(_DWORD *)(this + 12)) == 2 ) /*0x4d0198*/
    {
      if ( (*(int (__stdcall **)(_DWORD *))(v2[432] + 32))(v2 + 432) ) /*0x4d01ab*/
        return 0; /*0x4d01b0*/
    }
    else
    {
      v2 = 0; /*0x4d019a*/
    }
  }
  if ( *(_BYTE *)(this + 81) || !*(_BYTE *)(this + 92) ) /*0x4d01c1*/
    return 1; /*0x4d01c6*/
  if ( !v2 || !*(_BYTE *)(v2[433] + 3595) ) /*0x4d01d6*/
  {
    v3 = *(int (__stdcall ****)(_DWORD, void *, int *))(this + 12); /*0x4d01e4*/
    v4 = 0; /*0x4d01e7*/
    v8 = 0; /*0x4d01eb*/
    if ( v3 ) /*0x4d01ef*/
    {
      v5 = (**v3)(v3, &unk_822410, &v9); /*0x4d0204*/
      if ( v5 >= 0 ) /*0x4d0208*/
      {
        v6 = v9; /*0x4d021c*/
        Release3COM(&v8); /*0x4d0224*/
        v4 = v6; /*0x4d0229*/
        v8 = v6; /*0x4d022c*/
      }
      else
      {
        Release3COM(&v8); /*0x4d020e*/
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
    if ( !*(_DWORD *)(*(_DWORD *)(this + 12) + 764) ) /*0x4d0281*/
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
char __thiscall sub_4D02B0(_DWORD *this)
{
  int v3; // eax
  int (__stdcall ***v4)(_DWORD, void *, int *); // eax
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h] BYREF

  if ( *(this + 9) > Cell::GetGroundHeight(this + 7) + 120 ) /*0x4d02cc*/
    return 1; /*0x4d02d4*/
  v3 = *(this + 3); /*0x4d02d5*/
  if ( *(_DWORD *)(v3 + 692) && *(_DWORD *)(v3 + 764) ) /*0x4d02e2*/
    return 1; /*0x4d02f2*/
  v4 = (int (__stdcall ***)(_DWORD, void *, int *))*(this + 3); /*0x4d02f3*/
  v8 = 0; /*0x4d02f6*/
  if ( !v4 ) /*0x4d0300*/
    return 0; /*0x4d0300*/
  v5 = (**v4)(v4, &unk_822410, &v9); /*0x4d0311*/
  if ( v5 >= 0 ) /*0x4d0315*/
  {
    v7 = v9; /*0x4d0329*/
    Release3COM(&v8); /*0x4d0331*/
    v6 = v7; /*0x4d0336*/
    v8 = v7; /*0x4d0339*/
  }
  else
  {
    Release3COM(&v8); /*0x4d031b*/
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
int FlyLocomotionClass::_vt09()
{
  return 96; /*0x4d0395*/
}


// ==== 0x004D03A0  FlyLocomotionClass::ProcessMove  this=FlyLocomotionClass  sig=csp ====
FlyLocomotionClass *__thiscall FlyLocomotionClass::ProcessMove(_DWORD *Block, char a2)
{
  *Block = &FlyLocomotionClass::`vftable'; /*0x4d03a3*/
  *(Block + 1) = &vt_FlyLocomotionClass; /*0x4d03a9*/
  LocomotionClass::Construct(Block); /*0x4d03b0*/
  if ( (a2 & 1) != 0 ) /*0x4d03ba*/
    __3_YAXPAX_Z(Block); /*0x4d03bd*/
  return (FlyLocomotionClass *)Block; /*0x4d03c7*/
}


// ==== 0x004D03D0  UnitClass::CompareCoordinateMagnitude  this=int  sig=csp ====
bool __thiscall sub_4D03D0(__int16 *this, __int16 *a2)
{
  return abs16(*this) >= (int)abs16(*a2); /*0x4d03eb*/
}


// ==== 0x004D0400  JumpjetLocomotionClass::CheckWindowsErrorWrapper_0  this=VOID_PTR  sig=csp ====
BOOL __thiscall sub_4D0400(_DWORD *this, int a2)
{
  if ( a2 ) /*0x4d0409*/
    WinAPI::Wrapper(-2147467261); /*0x4d0410*/
  return *this == 0; /*0x4d041e*/
}


// ==== 0x004D0430  ObjectClass::Release3COM  this=VOID_PTR  sig=csp ====
int __thiscall COM_Release3(int *this)
{
  int result; // eax

  result = *this; /*0x4d0430*/
  if ( *this ) /*0x4d0430*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x4d0439*/
  return result; /*0x4d043c*/
}


// ==== 0x004D0440  ObjectVector::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall ObjectVector::Construct(_DWORD *this, IUnknown *aP1, IUnknown *aP2)
{
  this->Items = 0; /*0x4d044b*/
  this->Capacity = aP1; /*0x4d044e*/
  *((_BYTE *)this + 12) = 1; /*0x4d0451*/
  *((_BYTE *)this + 13) = 0; /*0x4d0455*/
  *this = &vt_VectorClass_ObjectClass; /*0x4d0458*/
  if ( aP1 ) /*0x4d045e*/
  {
    if ( aP2 ) /*0x4d0466*/
    {
      this->Items = aP2; /*0x4d0468*/
      return this; /*0x4d046e*/
    }
    this->Items = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x4d047d*/
    *((_BYTE *)this + 13) = 1; /*0x4d0480*/
  }
  return this; /*0x4d046d*/
}


// ==== 0x004D0490  ComPtr::ReleaseAndSet  this=VOID_PTR  sig=csp ====
int __thiscall ComPtr::ReleaseAndSet(_DWORD *this, ObjectClass *aP1)
{
  int v3; // edi
  ObjectClass *v5; // ebx
  int v6; // eax

  if ( *(_DWORD *)aP1->__pad_0 ) /*0x4d0498*/
  {
    v3 = (***(int (__stdcall ****)(_DWORD, void *, ObjectClass **))aP1->__pad_0)( /*0x4d04ad*/
           *(_DWORD *)aP1->__pad_0,
           &unk_822410,
           &aP1);
    if ( v3 >= 0 ) /*0x4d04b1*/
    {
      v5 = aP1; /*0x4d04cf*/
      if ( *this ) /*0x4d04cc*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*this + 8))(*this); /*0x4d04da*/
      *this = v5; /*0x4d04dd*/
      return v3; /*0x4d04e0*/
    }
    else
    {
      if ( *this ) /*0x4d04b3*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*this + 8))(*this); /*0x4d04bc*/
      *this = 0; /*0x4d04c1*/
      return v3; /*0x4d04bf*/
    }
  }
  else
  {
    v6 = *this; /*0x4d04e7*/
    if ( *this ) /*0x4d04e7*/
    {
      *this = 0; /*0x4d04ed*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x4d04f6*/
    }
    return -2147467262; /*0x4d04fe*/
  }
}


// ==== 0x004D0510  JumpjetLocomotionClass::GetInterface  this=unknown  sig=csp ====
int __stdcall JumpjetLocomotionClass::_vt0(int a1, const void *a2, _DWORD *a3)
{
  return LocomotionClass::QueryInterface(a1 - 4, a2, a3);
}


// ==== 0x004D0520  JumpjetLocomotionClass::GetInterface2  this=unknown  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::_vt1(int a1)
{
  return COM::AddRef(a1 - 4);
}


// ==== 0x004D0530  JumpjetLocomotionClass::Stub2  this=unknown  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::_vt2(int a1)
{
  return COM::ReleaseRef((volatile LONG *)(a1 - 4));
}


// ==== 0x004D0540  sub_4D0540  this=-  sig=ida-proto ====
int sub_4D0540()
{
  MEMORY[0x8B3CE0] = 0; /*0x4d0542*/
  MEMORY[0x8B3CE4] = 0; /*0x4d0547*/
  MEMORY[0x8B3CE8] = 0; /*0x4d054c*/
  MEMORY[0x8B3CEC] = 0; /*0x4d0551*/
  return 0; /*0x4d0556*/
}


// ==== 0x004D0560  sub_4D0560  this=-  sig=ida-proto ====
void sub_4D0560()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4d056c*/
  MEMORY[0x8B3CF8] = Math::Sqrt(v0 + v0); /*0x4d057e*/
}


// ==== 0x004D0590  sub_4D0590  this=-  sig=ida-proto ====
void sub_4D0590()
{
  MEMORY[0x8B3D60] = MEMORY[0x8B3CF8] / 60.0; /*0x4d059c*/
}


// ==== 0x004D05B0  sub_4D05B0  this=-  sig=ida-proto ====
void sub_4D05B0()
{
  MEMORY[0x8B3D48] = 1.0 / MEMORY[0x8B3D60]; /*0x4d05bc*/
}


// ==== 0x004D05D0  sub_4D05D0  this=-  sig=ida-proto ====
void sub_4D05D0()
{
  MEMORY[0x8B3D40] = 0.0174532925199433 * 45.0; /*0x4d05dc*/
}


// ==== 0x004D05F0  sub_4D05F0  this=-  sig=ida-proto ====
void sub_4D05F0()
{
  MEMORY[0x8B3D00] = 0.0174532925199433 * 60.0; /*0x4d05fc*/
}


// ==== 0x004D0610  sub_4D0610  this=-  sig=ida-proto ====
void sub_4D0610()
{
  MEMORY[0x8B3CD8] = 0.0174532925199433 * 90.0; /*0x4d061c*/
}


// ==== 0x004D0630  sub_4D0630  this=-  sig=ida-proto ====
__int64 sub_4D0630()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8B3CD8] - MEMORY[0x8B3D00]); /*0x4d0642*/
  result = Math::RoundToInt(v0 * MEMORY[0x8B3CF8] * 0.5); /*0x4d0656*/
  MEMORY[0x8B3D68] = result; /*0x4d065b*/
  return result; /*0x4d0660*/
}


// ==== 0x004D0670  sub_4D0670  this=-  sig=ida-proto ====
void sub_4D0670()
{
  MEMORY[0x8B3D08] = Math::ArcTan((double)MEMORY[0x8B3D68] * 0.00390625); /*0x4d0687*/
}


// ==== 0x004D06A0  sub_4D06A0  this=-  sig=ida-proto ====
void sub_4D06A0()
{
  MEMORY[0x8B3D38] = Math::ArcTan((double)(2 * MEMORY[0x8B3D68]) / MEMORY[0x8B3CF8]); /*0x4d06c2*/
}


// ==== 0x004D06D0  sub_4D06D0  this=-  sig=ida-proto ====
__int64 sub_4D06D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8B3D68]) + 0.5); /*0x4d06eb*/
  MEMORY[0x8B3D5C] = result; /*0x4d06f0*/
  return result; /*0x4d06f6*/
}


// ==== 0x004D0700  sub_4D0700  this=-  sig=ida-proto ====
int sub_4D0700()
{
  MEMORY[0x8B3CF0] = 0; /*0x4d0702*/
  MEMORY[0x8B3CF2] = 0; /*0x4d0708*/
  return 0; /*0x4d070e*/
}


// ==== 0x004D0710  sub_4D0710  this=-  sig=ida-proto ====
int sub_4D0710()
{
  MEMORY[0x8B3D28] = 0; /*0x4d0712*/
  MEMORY[0x8B3D2C] = 0; /*0x4d0717*/
  MEMORY[0x8B3D30] = 0; /*0x4d071c*/
  return 0; /*0x4d0721*/
}


// ==== 0x004D0730  sub_4D0730  this=-  sig=ida-proto ====
int sub_4D0730()
{
  MEMORY[0x8B3D58] = 0; /*0x4d0735*/
  MEMORY[0x8B3D50] = 128; /*0x4d073f*/
  MEMORY[0x8B3D54] = 128; /*0x4d0744*/
  return 128; /*0x4d0749*/
}


// ==== 0x004D0750  sub_4D0750  this=-  sig=ida-proto ====
int sub_4D0750()
{
  MEMORY[0x8B3D14] = 0; /*0x4d0757*/
  MEMORY[0x8B3D18] = 0; /*0x4d075c*/
  MEMORY[0x8B3D1C] = 1; /*0x4d0761*/
  MEMORY[0x8B3D1D] = 0; /*0x4d0768*/
  MEMORY[0x8B3D10] = (int)&vt_DynamicVectorClass_FoggedObjectClass; /*0x4d076d*/
  MEMORY[0x8B3D24] = 10; /*0x4d0777*/
  MEMORY[0x8B3D20] = 0; /*0x4d0781*/
  return atexit(sub_4D0790); /*0x4d078c*/
}


// ==== 0x004D0790  sub_4D0790  this=-  sig=ida-proto ====
void __cdecl sub_4D0790()
{
  if ( (MEMORY[0x8B3CD5] & 1) == 0 ) /*0x4d079a*/
  {
    MEMORY[0x8B3D10] = (int)&vt_VectorClass_FoggedObjectClass; /*0x4d079e*/
    MEMORY[0x8B3CD5] |= 1u; /*0x4d07b1*/
    if ( MEMORY[0x8B3D14] ) /*0x4d07b7*/
    {
      if ( MEMORY[0x8B3D1D] ) /*0x4d07c1*/
      {
        __3_YAXPAX_Z(MEMORY[0x8B3D14]); /*0x4d07c4*/
        MEMORY[0x8B3D14] = 0; /*0x4d07cc*/
      }
    }
    MEMORY[0x8B3D1D] = 0; /*0x4d07d6*/
    MEMORY[0x8B3D18] = 0; /*0x4d07dd*/
  }
}


// ==== 0x004D07F0  sub_4D07F0  this=-  sig=ida-proto ====
int sub_4D07F0()
{
  MEMORY[0x8B3CC0] = 0; /*0x4d07f7*/
  MEMORY[0x8B3CC4] = 0; /*0x4d07fc*/
  MEMORY[0x8B3CC8] = 0; /*0x4d0801*/
  MEMORY[0x8B3CCC] = 0; /*0x4d0806*/
  MEMORY[0x8B3CD0] = 0; /*0x4d080b*/
  return atexit(sub_4D0820); /*0x4d0816*/
}


// ==== 0x004D0820  sub_4D0820  this=-  sig=ida-proto ====
void __cdecl sub_4D0820()
{
  if ( (MEMORY[0x8B3CD4] & 1) == 0 ) /*0x4d082a*/
  {
    MEMORY[0x8B3CD4] |= 1u; /*0x4d0836*/
    __3_YAXPAX_Z(MEMORY[0x8B3CC0]); /*0x4d083c*/
    MEMORY[0x8B3CC0] = 0; /*0x4d0846*/
    MEMORY[0x8B3CC4] = 0; /*0x4d084b*/
    MEMORY[0x8B3CC8] = 0; /*0x4d0850*/
    MEMORY[0x8B3CCC] = 0; /*0x4d0855*/
    MEMORY[0x8B3CD0] = 0; /*0x4d085a*/
  }
}


// ==== 0x004D08B0  ObjectClass::Construct  this=FoggedObjectClass  sig=csp ====
_DWORD *__thiscall sub_4D08B0(_DWORD *this)
{
  int v2; // eax

  AbstractClass::Constructor((int)this); /*0x4d08b3*/
  this->LastSight = -1; /*0x4d08bd*/
  this->House = 0; /*0x4d08c0*/
  this->Cell = 0; /*0x4d08c3*/
  this->q030 = 0; /*0x4d08c6*/
  this->q034 = 0; /*0x4d08c9*/
  this->q038 = 0; /*0x4d08cc*/
  this->q03C = 0; /*0x4d08cf*/
  this->q040 = 0; /*0x4d08d2*/
  this->q044 = 0; /*0x4d08d5*/
  this->q048 = 0; /*0x4d08d8*/
  this->q04C = 0; /*0x4d08db*/
  this->__pad_054 = -1; /*0x4d08de*/
  this->q050 = 0; /*0x4d08e3*/
  this->q058 = 0; /*0x4d08e6*/
  this->q060 = 0; /*0x4d08e9*/
  this->q064 = 0; /*0x4d08ec*/
  *((_BYTE *)this + 104) = 1; /*0x4d08ef*/
  *((_BYTE *)this + 105) = 0; /*0x4d08f2*/
  this->q05C = &vt_DynamicVectorClass_FoggedObjectClass_DrawRecord; /*0x4d08f5*/
  *(this + 28) = 10; /*0x4d08fc*/
  this->q06C = 0; /*0x4d0903*/
  *((_BYTE *)this + 116) = 1; /*0x4d0906*/
  *this = &FoggedObjectClass::`vftable'; /*0x4d0909*/
  this->vtable2 = &FoggedObjectClass::`vftable'; /*0x4d090f*/
  this->vtable3 = &FoggedObjectClass::`vftable'; /*0x4d0916*/
  this->vtable4 = &vt_FoggedObjectClass; /*0x4d091d*/
  if ( MEMORY[0x8B3D20] < MEMORY[0x8B3D18] /*0x4d0956*/
    || (MEMORY[0x8B3D1D] || !MEMORY[0x8B3D18])
    && MEMORY[0x8B3D24] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0x8B3D10] + 8))(
         &MEMORY[0x8B3D10],
         MEMORY[0x8B3D18] + MEMORY[0x8B3D24],
         0) )
  {
    v2 = MEMORY[0x8B3D20]++; /*0x4d0963*/
    *((_DWORD *)MEMORY[0x8B3D14] + v2) = this; /*0x4d0972*/
  }
  return this; /*0x4d0977*/
}


// ==== 0x004D0980  FoggedObjectClass::InitBuildingFog  this=FoggedObjectClass  sig=csp ====
int __thiscall FoggedObjectClass::InitBuildingFog(int this, _DWORD *a2, int a3, int a4)
{
  void *v5; // ebp
  int *PlacementRectBuildingClass; // edi
  int *StartCoordsHouse; // eax
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
  int v18; // edi
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // edi
  int v24; // [esp+18h] [ebp-28h]
  int v25[4]; // [esp+20h] [ebp-20h] BYREF
  int v26[4]; // [esp+30h] [ebp-10h] BYREF
  int v27; // [esp+44h] [ebp+4h]
  int v28; // [esp+48h] [ebp+8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x4d0989*/
  *(_DWORD *)(this + 36) = a3; /*0x4d099e*/
  *(_DWORD *)(this + 40) = 0; /*0x4d09a1*/
  *(_DWORD *)(this + 44) = a4; /*0x4d09a4*/
  *(_DWORD *)(this + 48) = 20; /*0x4d09a7*/
  *(_DWORD *)(this + 52) = *a2; /*0x4d09b4*/
  *(_DWORD *)(this + 56) = a2[1]; /*0x4d09b9*/
  *(_DWORD *)(this + 60) = a2[2]; /*0x4d09c4*/
  *(_DWORD *)(this + 80) = *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], a2) + 283); /*0x4d09da*/
  *(_DWORD *)(this + 84) = -1; /*0x4d09dd*/
  *(_DWORD *)(this + 88) = 0; /*0x4d09e4*/
  FoggedObject::DrawVector_Constructor((_DWORD *)(this + 92), 0, 0); /*0x4d09e7*/
  *(_DWORD *)(this + 92) = &vt_DynamicVectorClass_FoggedObjectClass_DrawRecord; /*0x4d09ec*/
  *(_DWORD *)(this + 112) = 10; /*0x4d09f2*/
  *(_DWORD *)(this + 108) = 0; /*0x4d09f9*/
  *(_BYTE *)(this + 116) = 1; /*0x4d0a02*/
  *(_DWORD *)this = &FoggedObjectClass::`vftable'; /*0x4d0a06*/
  *(_DWORD *)(this + 4) = &FoggedObjectClass::`vftable'; /*0x4d0a0c*/
  *(_DWORD *)(this + 8) = &FoggedObjectClass::`vftable'; /*0x4d0a13*/
  *(_DWORD *)(this + 12) = &vt_FoggedObjectClass; /*0x4d0a1a*/
  v5 = Coord::To_Cell(&MEMORY[0x87F7E8], a2); /*0x4d0a2a*/
  PlacementRectBuildingClass = BuildingClass::GetPlacementRect((int)v5, v25); /*0x4d0a3b*/
  StartCoordsHouse = House::GetStartCoords((int)v5, v26); /*0x4d0a3d*/
  if ( StartCoordsHouse[2] <= 0 || StartCoordsHouse[3] <= 0 ) /*0x4d0a4e*/
  {
    v8 = *PlacementRectBuildingClass; /*0x4d0adf*/
    v15 = PlacementRectBuildingClass[1]; /*0x4d0ae1*/
    v14 = PlacementRectBuildingClass[2]; /*0x4d0ae4*/
    v16 = PlacementRectBuildingClass[3]; /*0x4d0ae7*/
  }
  else
  {
    v28 = PlacementRectBuildingClass[2]; /*0x4d0a59*/
    if ( v28 <= 0 || (v27 = PlacementRectBuildingClass[3], v27 <= 0) ) /*0x4d0a68*/
    {
      v8 = *StartCoordsHouse; /*0x4d0ad2*/
      v15 = StartCoordsHouse[1]; /*0x4d0ad4*/
      v14 = StartCoordsHouse[2]; /*0x4d0ad7*/
      v16 = StartCoordsHouse[3]; /*0x4d0ada*/
    }
    else
    {
      v8 = *StartCoordsHouse; /*0x4d0a6a*/
      v9 = *PlacementRectBuildingClass; /*0x4d0a6c*/
      v10 = StartCoordsHouse[2]; /*0x4d0a6e*/
      v11 = StartCoordsHouse[1]; /*0x4d0a71*/
      v12 = StartCoordsHouse[3]; /*0x4d0a74*/
      v24 = v10; /*0x4d0a79*/
      if ( v8 > *PlacementRectBuildingClass ) /*0x4d0a7d*/
      {
        v10 += v8 - v9; /*0x4d0a81*/
        v8 = *PlacementRectBuildingClass; /*0x4d0a83*/
        v24 = v10; /*0x4d0a85*/
      }
      v13 = PlacementRectBuildingClass[1]; /*0x4d0a89*/
      if ( v11 > v13 ) /*0x4d0a92*/
      {
        v12 += v11 - v13; /*0x4d0a96*/
        v11 = v13; /*0x4d0a98*/
      }
      if ( v8 + v10 >= v9 + v28 ) /*0x4d0aa4*/
        v14 = v24; /*0x4d0ab2*/
      else
        v14 = v9 - v8 + v28 + 1; /*0x4d0aac*/
      if ( v12 + v11 < v27 + v13 ) /*0x4d0ac5*/
        v12 = v27 + v13 - v11 + 1; /*0x4d0aca*/
      v15 = v11; /*0x4d0acc*/
      v16 = v12; /*0x4d0ace*/
    }
  }
  *(_DWORD *)(this + 64) = v8; /*0x4d0aef*/
  *(_DWORD *)(this + 68) = v15; /*0x4d0af1*/
  *(_DWORD *)(this + 72) = v14; /*0x4d0af4*/
  *(_DWORD *)(this + 76) = v16; /*0x4d0af7*/
  v17 = *(_DWORD *)(this + 68); /*0x4d0b00*/
  *(_DWORD *)(this + 64) += MEMORY[0x887324][44].__tail_0; /*0x4d0b0d*/
  *(_DWORD *)(this + 68) = (char *)MEMORY[0x887324][45].__tail_0 + v17; /*0x4d0b1d*/
  v18 = *(_DWORD *)(this + 68) - MEMORY[0x886FA4]; /*0x4d0b33*/
  *(_DWORD *)(this + 64) -= MEMORY[0x886FA0]; /*0x4d0b35*/
  *(_DWORD *)(this + 68) = v18; /*0x4d0b37*/
  if ( MEMORY[0x8B3D20] < MEMORY[0x8B3D18] /*0x4d0b6f*/
    || (MEMORY[0x8B3D1D] || !MEMORY[0x8B3D18])
    && MEMORY[0x8B3D24] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0x8B3D10] + 8))(
         &MEMORY[0x8B3D10],
         MEMORY[0x8B3D24] + MEMORY[0x8B3D18],
         0) )
  {
    v19 = MEMORY[0x8B3D20]++; /*0x4d0b7c*/
    *((_DWORD *)MEMORY[0x8B3D14] + v19) = this; /*0x4d0b8b*/
  }
  v20 = (__int16)(*(_DWORD *)(this + 52) / 256); /*0x4d0bb4*/
  v21 = MEMORY[0x8B3CC8]; /*0x4d0bcd*/
  v22 = 74 * ((__int16)(*(_DWORD *)(this + 56) / 256) - ((v20 + (__int16)(*(_DWORD *)(this + 56) / 256)) << 9) - v20) /*0x4d0bd6*/
      - *(_DWORD *)(this + 48)
      + 0x7FFFFFFF;
  if ( (int)(MEMORY[0x8B3CC4] + 1) <= MEMORY[0x8B3CC8] ) /*0x4d0bdf*/
    goto LABEL_27; /*0x4d0bdf*/
  if ( !MEMORY[0x8B3CC8] ) /*0x4d0be3*/
    v21 = 10; /*0x4d0be5*/
  if ( Vector::ReallocDynamic((int)&MEMORY[0x8B3CC0], v21) ) /*0x4d0bf0*/
  {
LABEL_27:
    *((_DWORD *)MEMORY[0x8B3CC0] + 2 * MEMORY[0x8B3CC4]) = v22; /*0x4d0c04*/
    *((_DWORD *)MEMORY[0x8B3CC0] + 2 * MEMORY[0x8B3CC4] + 1) = this; /*0x4d0c12*/
    MEMORY[0x8B3CCC] = 0; /*0x4d0c1c*/
    ++MEMORY[0x8B3CC4]; /*0x4d0c23*/
  }
  return this; /*0x4d0c2a*/
}


// ==== 0x004D0C40  FoggedObjectClass::InitTerrainFog  this=FoggedObjectClass  sig=csp ====
FoggedObjectClass *__thiscall FoggedObjectClass::InitTerrainFog(int this, IUnknown *aP1, int a3, int a4)
{
  int v5; // eax
  char *v6; // eax
  int v7; // edx
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  IUnknown *v12; // edx
  int v13; // edx
  int v14; // eax
  int v15; // edi
  int v16; // ebp
  AbstractClass *v17; // ebx
  int i; // eax
  _DWORD *v19; // ecx
  int v21; // [esp+10h] [ebp-24h] BYREF
  int v22; // [esp+14h] [ebp-20h]
  _DWORD a1[2]; // [esp+18h] [ebp-1Ch] BYREF
  int v24; // [esp+20h] [ebp-14h]
  IUnknown *v25; // [esp+30h] [ebp-4h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x4d0c49*/
  *(_DWORD *)(this + 36) = -1; /*0x4d0c5a*/
  *(_DWORD *)(this + 40) = 0; /*0x4d0c61*/
  *(_DWORD *)(this + 44) = 0; /*0x4d0c64*/
  *(_DWORD *)(this + 48) = 29; /*0x4d0c67*/
  v5 = *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], aP1) + 283); /*0x4d0c73*/
  *(_DWORD *)(this + 84) = a3; /*0x4d0c85*/
  *(_DWORD *)(this + 80) = v5; /*0x4d0c8c*/
  *(_DWORD *)(this + 88) = a4; /*0x4d0c8f*/
  FoggedObject::DrawVector_Constructor((_DWORD *)(this + 92), 0, 0); /*0x4d0c92*/
  *(_DWORD *)(this + 92) = &vt_DynamicVectorClass_FoggedObjectClass_DrawRecord; /*0x4d0c97*/
  *(_DWORD *)(this + 112) = 10; /*0x4d0c9e*/
  *(_DWORD *)(this + 108) = 0; /*0x4d0ca5*/
  *(_BYTE *)(this + 116) = 1; /*0x4d0cae*/
  *(_DWORD *)this = &FoggedObjectClass::`vftable'; /*0x4d0cb2*/
  *(_DWORD *)(this + 4) = &FoggedObjectClass::`vftable'; /*0x4d0cb8*/
  *(_DWORD *)(this + 8) = &FoggedObjectClass::`vftable'; /*0x4d0cbf*/
  *(_DWORD *)(this + 12) = &vt_FoggedObjectClass; /*0x4d0cc6*/
  v6 = (char *)Coord::To_Cell(&MEMORY[0x87F7E8], aP1); /*0x4d0ccd*/
  v7 = aP1->field_4; /*0x4d0cd4*/
  v8 = aP1->field_8; /*0x4d0cd7*/
  a1[0] = aP1->field_0; /*0x4d0cda*/
  a1[1] = v7; /*0x4d0cde*/
  v24 = v8; /*0x4d0ce2*/
  v9 = *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61244] * v6[283]; /*0x4d0ced*/
  v24 = v9; /*0x4d0cf7*/
  *(_DWORD *)(this + 52) = a1[0]; /*0x4d0cfd*/
  *(_DWORD *)(this + 56) = v7; /*0x4d0d03*/
  *(_DWORD *)(this + 60) = v9; /*0x4d0d06*/
  Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], a1, (IUnknown *)&v21); /*0x4d0d15*/
  v10 = v21 - 30; /*0x4d0d25*/
  v22 -= 15; /*0x4d0d32*/
  v11 = v22; /*0x4d0d2a*/
  *(_DWORD *)(this + 64) = v21 - 30; /*0x4d0d36*/
  v25 = (IUnknown *)30; /*0x4d0d38*/
  v21 = v10; /*0x4d0d40*/
  *(_DWORD *)(this + 68) = v11; /*0x4d0d44*/
  v12 = v25; /*0x4d0d47*/
  *(_DWORD *)(this + 72) = 60; /*0x4d0d4b*/
  *(_DWORD *)(this + 76) = v12; /*0x4d0d4e*/
  v13 = *(_DWORD *)(this + 68); /*0x4d0d61*/
  *(_DWORD *)(this + 64) += *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] + 176); /*0x4d0d64*/
  *(_DWORD *)(this + 68) = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] + 180) + v13; /*0x4d0d73*/
  if ( *(int *)&MEMORY[0x89F690].__pad_579C[61172] < *(int *)&MEMORY[0x89F690].__pad_579C[61164] /*0x4d0dab*/
    || (MEMORY[0x89F690].__pad_579C[61169] || !*(_DWORD *)&MEMORY[0x89F690].__pad_579C[61164])
    && *(int *)&MEMORY[0x89F690].__pad_579C[61176] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[61156] + 8))(
         &MEMORY[0x89F690].__pad_579C[61156],
         *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61164] + *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61176],
         0) )
  {
    v14 = (*(_DWORD *)&MEMORY[0x89F690].__pad_579C[61172])++; /*0x4d0db8*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[61160] + 4 * v14) = this; /*0x4d0dc7*/
  }
  v15 = 74 /*0x4d0e11*/
      * ((__int16)(*(_DWORD *)(this + 56) / 256)
       - (((__int16)(*(_DWORD *)(this + 52) / 256) + (__int16)(*(_DWORD *)(this + 56) / 256)) << 9)
       - (__int16)(*(_DWORD *)(this + 52) / 256))
      - *(_DWORD *)(this + 48)
      + 0x7FFFFFFF;
  if ( *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61080] + 1 <= *(int *)&MEMORY[0x89F690].__pad_579C[61084] ) /*0x4d0e1a*/
    goto LABEL_15; /*0x4d0e1a*/
  if ( *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61084] ) /*0x4d0e22*/
  {
    v16 = *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61084]; /*0x4d0e2b*/
    if ( *(int *)&MEMORY[0x89F690].__pad_579C[61084] < 0 ) /*0x4d0e2f*/
      return (FoggedObjectClass *)this; /*0x4d0e2f*/
  }
  else
  {
    v16 = 10; /*0x4d0e24*/
  }
  v17 = (AbstractClass *)__2_YAPAXI_Z(8 * (v16 + *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61084])); /*0x4d0e44*/
  if ( v17 ) /*0x4d0e4b*/
  {
    for ( i = 0; i < *(int *)&MEMORY[0x89F690].__pad_579C[61080]; *(_DWORD *)&v17->__pad_0[8 * i - 4] = v19[1] ) /*0x4d0e64*/
    {
      v19 = (_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[61076] + 8 * i++); /*0x4d0e6c*/
      *(_DWORD *)&v17->__pad_0[8 * i - 8] = *v19; /*0x4d0e72*/
    }
    __3_YAXPAX_Z(*(void **)&MEMORY[0x89F690].__pad_579C[61076]); /*0x4d0e8e*/
    *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61076] = v17; /*0x4d0e9d*/
    *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61084] += v16; /*0x4d0ea3*/
    *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61092] = 0; /*0x4d0ea8*/
LABEL_15:
    *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[61076] + 8 * *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61080]) = v15; /*0x4d0eb2*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[61076] + 8 * *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61080] + 4) = this; /*0x4d0ecb*/
    MEMORY[0x89F690].__pad_579C[61088] = 0; /*0x4d0ed5*/
    ++*(_DWORD *)&MEMORY[0x89F690].__pad_579C[61080]; /*0x4d0edc*/
  }
  return (FoggedObjectClass *)this; /*0x4d0ee3*/
}


// ==== 0x004D0EF0  FoggedObjectClass::Constructor  this=FoggedObjectClass  sig=csp ====
int __thiscall FoggedObjectClass::Constructor(int this, BuildingClass *aP1, FoggedObjectClass *aP2)
{
  HouseClass *v4; // eax
  int v5; // ecx
  int v6; // edx
  VectorClass *v7; // esi
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ebp
  int ProductionFrame; // eax
  _BYTE *Type; // ebp
  int LaserFenceFrame; // eax
  char v15; // al
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  BuildingClass *v19; // ecx
  _DWORD *v20; // edx
  int *Anims; // ebx
  int v22; // eax
  BuildingClass **v23; // ecx
  BuildingClass *v24; // edx
  int v25; // ebp
  int v26; // ebx
  BuildingClass *v27; // ecx
  int v28; // ebx
  int v29; // eax
  int v30; // ebx
  int v31; // eax
  BuildingClass *v32; // ecx
  int v33; // edx
  int v34; // ebp
  int v35; // ecx
  int v36; // ebp
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  BuildingClass **v40; // eax
  BuildingClass *v41; // ecx
  BuildingClass *v42; // edx
  bool v43; // zf
  int *v45; // [esp+20h] [ebp-40h]
  int v46; // [esp+24h] [ebp-3Ch]
  int v47; // [esp+28h] [ebp-38h]
  int v48; // [esp+2Ch] [ebp-34h]
  _DWORD v49[2]; // [esp+30h] [ebp-30h] BYREF
  int v50; // [esp+38h] [ebp-28h]
  int v51; // [esp+3Ch] [ebp-24h]
  char v52[8]; // [esp+40h] [ebp-20h] BYREF
  BuildingClass *v53; // [esp+48h] [ebp-18h]
  BuildingClass *v54; // [esp+4Ch] [ebp-14h]
  int v55[4]; // [esp+50h] [ebp-10h] BYREF
  BuildingClass *aP1a; // [esp+64h] [ebp+4h]
  FoggedObjectClass *aP2a; // [esp+68h] [ebp+8h]
  FoggedObjectClass *aP2b; // [esp+68h] [ebp+8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x4d0ef9*/
  *(_DWORD *)(this + 36) = -1; /*0x4d0f02*/
  v4 = (HouseClass *)aP1->focus; /*0x4d0f0c*/
  *(_DWORD *)(this + 44) = 0; /*0x4d0f12*/
  *(_DWORD *)(this + 40) = v4; /*0x4d0f19*/
  *(_DWORD *)(this + 48) = 6; /*0x4d0f24*/
  *(_DWORD *)(this + 52) = aP1->location[0]; /*0x4d0f2f*/
  *(_DWORD *)(this + 56) = aP1->location[1]; /*0x4d0f34*/
  *(_DWORD *)(this + 60) = aP1->location[2]; /*0x4d0f3a*/
  v5 = aP1->location[1]; /*0x4d0f3f*/
  v49[0] = aP1->location[0]; /*0x4d0f42*/
  v6 = aP1->location[2]; /*0x4d0f46*/
  v49[1] = v5; /*0x4d0f4d*/
  v50 = v6; /*0x4d0f57*/
  v7 = (VectorClass *)(this + 92); /*0x4d0f67*/
  *(_DWORD *)(this + 80) = *((char *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v49) + 283); /*0x4d0f6a*/
  *(_DWORD *)(this + 84) = -1; /*0x4d0f73*/
  *(_DWORD *)(this + 88) = 0; /*0x4d0f7a*/
  FoggedObject::DrawVector_Constructor((_DWORD *)(this + 92), 0, 0); /*0x4d0f81*/
  *(_DWORD *)(this + 92) = &vt_DynamicVectorClass_FoggedObjectClass_DrawRecord; /*0x4d0f8a*/
  *(_DWORD *)(this + 112) = 10; /*0x4d0f90*/
  *(_DWORD *)(this + 108) = 0; /*0x4d0f97*/
  *(_BYTE *)(this + 116) = (_BYTE)aP2; /*0x4d0fa2*/
  *(_DWORD *)this = &FoggedObjectClass::`vftable'; /*0x4d0fa5*/
  *(_DWORD *)(this + 4) = &FoggedObjectClass::`vftable'; /*0x4d0fab*/
  *(_DWORD *)(this + 8) = &FoggedObjectClass::`vftable'; /*0x4d0fb2*/
  *(_DWORD *)(this + 12) = &vt_FoggedObjectClass; /*0x4d0fb9*/
  v8 = (_DWORD *)(*(int (__thiscall **)(BuildingClass *, char *))(*(_DWORD *)aP1->__pad_0 + 300))(aP1, v52); /*0x4d0fc5*/
  *(_DWORD *)(this + 64) = *v8; /*0x4d0fd2*/
  *(_DWORD *)(this + 68) = v8[1]; /*0x4d0fd7*/
  *(_DWORD *)(this + 72) = v8[2]; /*0x4d0fdd*/
  *(_DWORD *)(this + 76) = v8[3]; /*0x4d0fe3*/
  if ( *(int *)&stru_89E138.__pad_579C[66636] < *(int *)&stru_89E138.__pad_579C[66628] /*0x4d101a*/
    || (stru_89E138.__pad_579C[66633] || !*(_DWORD *)&stru_89E138.__pad_579C[66628])
    && *(int *)&stru_89E138.__pad_579C[66640] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_89E138.__pad_579C[66620] + 8))(
         &stru_89E138.__pad_579C[66620],
         *(_DWORD *)&stru_89E138.__pad_579C[66628] + *(_DWORD *)&stru_89E138.__pad_579C[66640],
         0) )
  {
    v9 = (*(_DWORD *)&stru_89E138.__pad_579C[66636])++; /*0x4d1027*/
    *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[66624] + 4 * v9) = this; /*0x4d1036*/
  }
  v10 = *(_DWORD *)&stru_89E138.__pad_579C[66548]; /*0x4d107c*/
  v11 = 74 /*0x4d1081*/
      * ((__int16)(*(_DWORD *)(this + 56) / 256)
       - (((__int16)(*(_DWORD *)(this + 52) / 256) + (__int16)(*(_DWORD *)(this + 56) / 256)) << 9)
       - (__int16)(*(_DWORD *)(this + 52) / 256))
      - *(_DWORD *)(this + 48)
      + 0x7FFFFFFF;
  if ( *(_DWORD *)&stru_89E138.__pad_579C[66544] + 1 <= *(int *)&stru_89E138.__pad_579C[66548] ) /*0x4d108a*/
    goto LABEL_11; /*0x4d108a*/
  if ( !*(_DWORD *)&stru_89E138.__pad_579C[66548] ) /*0x4d108e*/
    v10 = 10; /*0x4d1090*/
  if ( Vector::ReallocDynamic((int)&stru_89E138.__pad_579C[66540], v10) ) /*0x4d109b*/
  {
LABEL_11:
    *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[66540] + 8 * *(_DWORD *)&stru_89E138.__pad_579C[66544]) = v11; /*0x4d10af*/
    *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[66540] + 8 * *(_DWORD *)&stru_89E138.__pad_579C[66544] + 4) = this; /*0x4d10bd*/
    stru_89E138.__pad_579C[66552] = 0; /*0x4d10c7*/
    ++*(_DWORD *)&stru_89E138.__pad_579C[66544]; /*0x4d10ce*/
  }
  aP1->IsFogged = 1; /*0x4d10d5*/
  ProductionFrame = BuildingClass::GetProductionFrame((int *)aP1->__pad_0); /*0x4d10dc*/
  Type = aP1->Type; /*0x4d10e1*/
  aP2a = (FoggedObjectClass *)ProductionFrame; /*0x4d10e7*/
  if ( Type[5823] && ((LaserFenceFrame = aP1->LaserFenceFrame, LaserFenceFrame == 12) || LaserFenceFrame == 8) /*0x4d1112*/
    || (v15 = Type[5824], LOBYTE(v53) = 0, v15) )
  {
    LOBYTE(v53) = 1; /*0x4d1114*/
  }
  v16 = *(_DWORD *)(this + 100); /*0x4d1119*/
  if ( *(_DWORD *)(this + 108) < v16 /*0x4d113e*/
    || (*(_BYTE *)(this + 105) || !v16)
    && (v17 = *(_DWORD *)(this + 112), v17 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7->vtable0 + 8))(this + 92, v16 + v17, 0) )
  {
    v18 = *(_DWORD *)(this + 108); /*0x4d1145*/
    *(_DWORD *)(this + 108) = v18 + 1; /*0x4d114b*/
    v19 = v53; /*0x4d1156*/
    v20 = (_DWORD *)(*(_DWORD *)(this + 96) + 16 * v18); /*0x4d115a*/
    *v20 = Type; /*0x4d1160*/
    v20[1] = aP2a; /*0x4d1162*/
    v20[2] = v19; /*0x4d1167*/
    v20[3] = 0; /*0x4d116a*/
  }
  Anims = aP1->Anims; /*0x4d116d*/
  v46 = 21; /*0x4d1173*/
  v45 = aP1->Anims; /*0x4d117b*/
  do /*0x4d130a*/
  {
    if ( !*Anims ) /*0x4d1183*/
      goto LABEL_47; /*0x4d1183*/
    *(_BYTE *)(*Anims + 409) = 1; /*0x4d1189*/
    aP1a = *(BuildingClass **)(*Anims + 200); /*0x4d119a*/
    v22 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)*Anims + 296))(*Anims, v55); /*0x4d11a3*/
    v23 = (BuildingClass **)(this + 64); /*0x4d11ac*/
    if ( *(int *)(this + 72) <= 0 || *(int *)(this + 76) <= 0 ) /*0x4d11bc*/
    {
      v32 = *(BuildingClass **)v22; /*0x4d1266*/
      v33 = *(_DWORD *)(v22 + 4); /*0x4d1268*/
      v34 = *(_DWORD *)(v22 + 8); /*0x4d126b*/
    }
    else
    {
      aP2b = *(FoggedObjectClass **)(v22 + 8); /*0x4d11c7*/
      if ( (int)aP2b > 0 ) /*0x4d11cb*/
      {
        v48 = *(_DWORD *)(v22 + 12); /*0x4d11d6*/
        if ( v48 > 0 ) /*0x4d11da*/
        {
          v24 = *v23; /*0x4d11dc*/
          v25 = *(_DWORD *)(this + 68); /*0x4d11de*/
          v26 = *(_DWORD *)(this + 72); /*0x4d11e1*/
          v50 = v26; /*0x4d11e4*/
          v51 = *(_DWORD *)(this + 76); /*0x4d11eb*/
          v27 = *(BuildingClass **)v22; /*0x4d11ef*/
          if ( (int)v24 > *(_DWORD *)v22 ) /*0x4d11f3*/
          {
            v28 = (char *)v24 - (char *)v27 + v26; /*0x4d11f7*/
            v24 = *(BuildingClass **)v22; /*0x4d11f9*/
            v50 = v28; /*0x4d11fb*/
          }
          v29 = *(_DWORD *)(v22 + 4); /*0x4d11ff*/
          v47 = v29; /*0x4d1204*/
          if ( v25 > v29 ) /*0x4d1208*/
          {
            v30 = v25 - v29 + v51; /*0x4d1210*/
            v25 = v29; /*0x4d1212*/
            v51 = v30; /*0x4d1214*/
          }
          if ( (int)&v24->__pad_0[v50] < (int)&aP2b->__pad_0[(int)v27] ) /*0x4d1226*/
            v50 = (int)&aP2b->__pad_0[(char *)v27 - (char *)v24 + 1]; /*0x4d1232*/
          v31 = v51; /*0x4d1240*/
          if ( v51 + v25 < v47 + v48 ) /*0x4d1249*/
            v31 = v47 + v48 - v25 + 1; /*0x4d124e*/
          v32 = v24; /*0x4d1250*/
          v33 = v25; /*0x4d1252*/
          v34 = v50; /*0x4d1254*/
          goto LABEL_41; /*0x4d1258*/
        }
      }
      v22 = this + 64; /*0x4d125a*/
      v32 = *v23; /*0x4d125c*/
      v33 = *(_DWORD *)(this + 68); /*0x4d125e*/
      v34 = *(_DWORD *)(this + 72); /*0x4d1261*/
    }
    v31 = *(_DWORD *)(v22 + 12); /*0x4d126e*/
LABEL_41:
    LOBYTE(v53) = 0; /*0x4d1271*/
    *(_DWORD *)(this + 64) = v32; /*0x4d1279*/
    *(_DWORD *)(this + 68) = v33; /*0x4d127f*/
    *(_DWORD *)(this + 72) = v34; /*0x4d1282*/
    *(_DWORD *)(this + 76) = v31; /*0x4d1285*/
    Anims = v45; /*0x4d1288*/
    v35 = *(_DWORD *)(this + 108); /*0x4d1292*/
    v36 = aP1a->sprayOffsetIndex + *(_DWORD *)(*v45 + 172); /*0x4d129d*/
    v37 = *(_DWORD *)(this + 100); /*0x4d12a5*/
    v54 = *(BuildingClass **)(*v45 + 256); /*0x4d12a8*/
    if ( v35 < v37 /*0x4d12cb*/
      || (*(_BYTE *)(this + 105) || !v37)
      && (v38 = *(_DWORD *)(this + 112), v38 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7->vtable0 + 8))(this + 92, v37 + v38, 0) )
    {
      v39 = *(_DWORD *)(this + 108); /*0x4d12d2*/
      *(_DWORD *)(this + 108) = v39 + 1; /*0x4d12dc*/
      v40 = (BuildingClass **)(*(_DWORD *)(this + 96) + 16 * v39); /*0x4d12e5*/
      v41 = v53; /*0x4d12e7*/
      *v40 = aP1a; /*0x4d12eb*/
      v42 = v54; /*0x4d12ed*/
      v40[1] = (BuildingClass *)v36; /*0x4d12f1*/
      v40[2] = v41; /*0x4d12f4*/
      v40[3] = v42; /*0x4d12f7*/
    }
LABEL_47:
    ++Anims; /*0x4d12fa*/
    v43 = v46 == 1; /*0x4d1301*/
    v45 = Anims; /*0x4d1302*/
    --v46; /*0x4d1306*/
  }
  while ( !v43 ); /*0x4d130a*/
  Cell::CreateCrater(*(_DWORD *)(this + 64), *(_DWORD *)(this + 68), *(_DWORD *)(this + 72), *(_DWORD *)(this + 76), 0); /*0x4d1338*/
  *(_DWORD *)(this + 64) += *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 176); /*0x4d134d*/
  *(_DWORD *)(this + 68) += *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 180); /*0x4d135f*/
  return this; /*0x4d1364*/
}


// ==== 0x004D1370  FoggedObjectClass::InitDrawRecord  this=FoggedObjectClass  sig=csp ====
int __thiscall FoggedObjectClass::InitDrawRecord(int this, _DWORD *a2)
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
  *(_DWORD *)(this + 36) = -1; /*0x4d1384*/
  *(_DWORD *)(this + 40) = 0; /*0x4d138b*/
  *(_DWORD *)(this + 44) = 0; /*0x4d1394*/
  *(_DWORD *)(this + 48) = 36; /*0x4d1399*/
  *(_DWORD *)(this + 52) = a2[39]; /*0x4d13a5*/
  *(_DWORD *)(this + 56) = a2[40]; /*0x4d13aa*/
  *(_DWORD *)(this + 60) = a2[41]; /*0x4d13b0*/
  v3 = a2[40]; /*0x4d13b5*/
  v4 = a2[41]; /*0x4d13b8*/
  v22[0] = a2[39]; /*0x4d13bb*/
  v22[1] = v3; /*0x4d13c9*/
  v23 = v4; /*0x4d13cd*/
  *(_DWORD *)(this + 80) = *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], v22) + 283); /*0x4d13e4*/
  *(_DWORD *)(this + 84) = -1; /*0x4d13e7*/
  *(_DWORD *)(this + 88) = 0; /*0x4d13ee*/
  FoggedObject::DrawVector_Constructor((_DWORD *)(this + 92), 0, 0); /*0x4d13f1*/
  *(_DWORD *)(this + 92) = &vt_DynamicVectorClass_FoggedObjectClass_DrawRecord; /*0x4d13f6*/
  *(_DWORD *)(this + 112) = 10; /*0x4d13fc*/
  *(_DWORD *)(this + 108) = 0; /*0x4d1403*/
  *(_BYTE *)(this + 116) = 1; /*0x4d140a*/
  *(_DWORD *)this = &FoggedObjectClass::`vftable'; /*0x4d140e*/
  *(_DWORD *)(this + 4) = &FoggedObjectClass::`vftable'; /*0x4d1414*/
  *(_DWORD *)(this + 8) = &FoggedObjectClass::`vftable'; /*0x4d141b*/
  *(_DWORD *)(this + 12) = &vt_FoggedObjectClass; /*0x4d1422*/
  v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*a2 + 300))(a2, v22); /*0x4d1431*/
  *(_DWORD *)(this + 64) = *v5; /*0x4d143b*/
  *(_DWORD *)(this + 68) = v5[1]; /*0x4d1440*/
  *(_DWORD *)(this + 72) = v5[2]; /*0x4d1446*/
  *(_DWORD *)(this + 76) = v5[3]; /*0x4d144c*/
  v6 = *(_DWORD *)(this + 68); /*0x4d1460*/
  *(_DWORD *)(this + 64) += MEMORY[0x887324][44].__tail_0; /*0x4d1463*/
  *(_DWORD *)(this + 68) = (char *)MEMORY[0x887324][45].__tail_0 + v6; /*0x4d1473*/
  if ( MEMORY[0x8B3D20] < MEMORY[0x8B3D18] /*0x4d14ab*/
    || (MEMORY[0x8B3D1D] || !MEMORY[0x8B3D18])
    && MEMORY[0x8B3D24] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0x8B3D10] + 8))(
         &MEMORY[0x8B3D10],
         MEMORY[0x8B3D18] + MEMORY[0x8B3D24],
         0) )
  {
    v7 = MEMORY[0x8B3D20]++; /*0x4d14b8*/
    *((_DWORD *)MEMORY[0x8B3D14] + v7) = this; /*0x4d14c7*/
  }
  v8 = *(_DWORD *)(this + 100); /*0x4d14ca*/
  v9 = *(_DWORD *)(this + 108); /*0x4d14cd*/
  v10 = a2[50]; /*0x4d14d0*/
  LOBYTE(v23) = 0; /*0x4d14da*/
  if ( v9 < v8 /*0x4d14fc*/
    || (*(_BYTE *)(this + 105) || !v8)
    && (v11 = *(_DWORD *)(this + 112), v11 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 92) + 8))(this + 92, v8 + v11, 0) )
  {
    v12 = *(_DWORD *)(this + 108); /*0x4d1503*/
    *(_DWORD *)(this + 108) = v12 + 1; /*0x4d1509*/
    v13 = (_DWORD *)(*(_DWORD *)(this + 96) + 16 * v12); /*0x4d1514*/
    v14 = v23; /*0x4d1516*/
    *v13 = v10; /*0x4d151a*/
    v13[1] = 0; /*0x4d151c*/
    v13[2] = v14; /*0x4d151f*/
    v13[3] = 0; /*0x4d1524*/
  }
  v15 = (__int16)(*(_DWORD *)(this + 52) / 256); /*0x4d154d*/
  v16 = 74 * ((__int16)(*(_DWORD *)(this + 56) / 256) - ((v15 + (__int16)(*(_DWORD *)(this + 56) / 256)) << 9) - v15) /*0x4d156f*/
      - *(_DWORD *)(this + 48)
      + 0x7FFFFFFF;
  if ( (int)(MEMORY[0x8B3CC4] + 1) <= MEMORY[0x8B3CC8] ) /*0x4d1578*/
    goto LABEL_21; /*0x4d1578*/
  if ( MEMORY[0x8B3CC8] ) /*0x4d1580*/
  {
    v17 = MEMORY[0x8B3CC8]; /*0x4d1589*/
    if ( MEMORY[0x8B3CC8] < 0 ) /*0x4d158d*/
      return this; /*0x4d158d*/
  }
  else
  {
    v17 = 10; /*0x4d1582*/
  }
  v18 = __2_YAPAXI_Z(8 * (v17 + MEMORY[0x8B3CC8])); /*0x4d15a2*/
  if ( v18 ) /*0x4d15a9*/
  {
    for ( i = 0; i < (int)MEMORY[0x8B3CC4]; v18[2 * i - 1] = v20[1] ) /*0x4d15c2*/
    {
      v20 = (char *)MEMORY[0x8B3CC0] + 8 * i++; /*0x4d15ca*/
      v18[2 * i - 2] = *v20; /*0x4d15d0*/
    }
    __3_YAXPAX_Z(MEMORY[0x8B3CC0]); /*0x4d15ec*/
    MEMORY[0x8B3CC0] = v18; /*0x4d15fb*/
    MEMORY[0x8B3CC8] += v17; /*0x4d1601*/
    MEMORY[0x8B3CD0] = 0; /*0x4d1606*/
LABEL_21:
    *((_DWORD *)MEMORY[0x8B3CC0] + 2 * MEMORY[0x8B3CC4]) = v16; /*0x4d1610*/
    *((_DWORD *)MEMORY[0x8B3CC0] + 2 * MEMORY[0x8B3CC4] + 1) = this; /*0x4d1629*/
    MEMORY[0x8B3CCC] = 0; /*0x4d1633*/
    ++MEMORY[0x8B3CC4]; /*0x4d163a*/
  }
  return this; /*0x4d1641*/
}


// ==== 0x004D1650  FoggedObjectClass::DestructFoggedObjectClass  this=FoggedObjectClass  sig=csp ====
int __fastcall DestructFoggedObjectClass(FoggedObjectClass *aP0)
{
  int v2; // eax
  int v3; // kr00_4
  int v4; // edx
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  BuildingTypeClass *i; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // ecx
  int edx15; // edx
  CCINIClass *v14; // eax
  int result; // eax
  __int16 v17[4]; // [esp+10h] [ebp-Ch] BYREF
  int v18; // [esp+18h] [ebp-4h] BYREF

  *(_DWORD *)aP0->__pad_0 = &FoggedObjectClass::`vftable'; /*0x4d1663*/
  *(_DWORD *)&aP0->__pad_0[4] = &FoggedObjectClass::`vftable'; /*0x4d1669*/
  *(_DWORD *)&aP0->__pad_0[8] = &FoggedObjectClass::`vftable'; /*0x4d1670*/
  *(_DWORD *)&aP0->__pad_0[12] = &vt_FoggedObjectClass; /*0x4d1677*/
  *(_DWORD *)v17 = aP0; /*0x4d1684*/
  v2 = (*(int (__thiscall **)(char *, __int16 *))(*(_DWORD *)&stru_89E138.__pad_579C[66620] + 16))( /*0x4d1688*/
         &stru_89E138.__pad_579C[66620],
         v17);
  if ( v2 != -1 && v2 < *(int *)&stru_89E138.__pad_579C[66636] ) /*0x4d1698*/
  {
    --*(_DWORD *)&stru_89E138.__pad_579C[66636]; /*0x4d169d*/
    for ( ; /*0x4d16a3*/
          v2 < *(int *)&stru_89E138.__pad_579C[66636];
          *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[66624] + 4 * v2 - 4) = *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[66624]
                                                                                          + 4 * v2) )
    {
      ++v2; /*0x4d16ab*/
    }
  }
  v3 = *(_DWORD *)&aP0[1].__pad_0[8]; /*0x4d16d7*/
  v17[0] = *(_DWORD *)&aP0[1].__pad_0[4] / 256; /*0x4d16df*/
  v17[1] = v3 / 256; /*0x4d16e4*/
  v18 = *(_DWORD *)v17; /*0x4d16f3*/
  v4 = *(_DWORD *)&stru_89E138.__pad_579C[66544]; /*0x4d170e*/
  v5 = 74 * (v17[1] - ((v17[0] + v17[1]) << 9) - v17[0]) - *(_DWORD *)aP0[1].__pad_0 + 0x7FFFFFFF; /*0x4d1714*/
  if ( *(_DWORD *)&stru_89E138.__pad_579C[66544] ) /*0x4d171c*/
  {
    if ( !stru_89E138.__pad_579C[66552] ) /*0x4d1728*/
    {
      qsort( /*0x4d1739*/
        *(AbstractClass **)&stru_89E138.__pad_579C[66540],
        *(IUnknown **)&stru_89E138.__pad_579C[66544],
        8u,
        globalHelper_0D2ED0);
      v4 = *(_DWORD *)&stru_89E138.__pad_579C[66544]; /*0x4d173e*/
      *(_DWORD *)&stru_89E138.__pad_579C[66556] = 0; /*0x4d1747*/
      stru_89E138.__pad_579C[66552] = 1; /*0x4d174d*/
    }
    *(_DWORD *)v17 = v5; /*0x4d175f*/
    v6 = sub_4D2F00(*(int *)&stru_89E138.__pad_579C[66540], v4, (int *)v17); /*0x4d1763*/
    if ( v6 ) /*0x4d176a*/
    {
      v7 = (v6 - *(_DWORD *)&stru_89E138.__pad_579C[66540]) >> 3; /*0x4d1772*/
      if ( v7 != -1 ) /*0x4d1778*/
      {
        v8 = v7 + 1; /*0x4d177a*/
        for ( i = *(BuildingTypeClass **)&stru_89E138.__pad_579C[66544]; /*0x4d1784*/
              v8 < *(int *)&stru_89E138.__pad_579C[66544];
              i = *(BuildingTypeClass **)&stru_89E138.__pad_579C[66544] )
        {
          v10 = (_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[66540] + 8 * v8++); /*0x4d178c*/
          *(v10 - 2) = *v10; /*0x4d1792*/
          *(v10 - 1) = v10[1]; /*0x4d1798*/
        }
        *(_DWORD *)&stru_89E138.__pad_579C[66544] = (char *)i - 1; /*0x4d17ad*/
        *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[66540] + 8 * *(_DWORD *)&stru_89E138.__pad_579C[66544]) = 0; /*0x4d17b2*/
        *(_DWORD *)(*(_DWORD *)&stru_89E138.__pad_579C[66540] + 8 * *(_DWORD *)&stru_89E138.__pad_579C[66544] + 4) = 0; /*0x4d17c2*/
        *(_DWORD *)&stru_89E138.__pad_579C[66556] = 0; /*0x4d17c6*/
      }
    }
  }
  if ( *(_DWORD *)aP0[1].__pad_0 == 6 ) /*0x4d17d0*/
  {
    v11 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v18); /*0x4d17dc*/
    v12 = Cell::IsBridge(v11); /*0x4d17e3*/
    if ( v12 ) /*0x4d17ea*/
    {
      *((_BYTE *)v12 + 1767) = 0; /*0x4d17ec*/
      v13 = v12 + 343; /*0x4d17f2*/
      edx15 = 21; /*0x4d17f8*/
      do /*0x4d180d*/
      {
        if ( *v13 ) /*0x4d17fd*/
          *(_BYTE *)(*v13 + 409) = 0; /*0x4d1803*/
        ++v13; /*0x4d1809*/
        --edx15; /*0x4d180c*/
      }
      while ( edx15 ); /*0x4d180d*/
    }
  }
  if ( *(_DWORD *)&stru_87C374.__pad_579C[22548] ) /*0x4d1817*/
    Cell::CreateCrater( /*0x4d184b*/
      aP0[1].uniqueId - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 176),
      aP0[1].abstractFlags - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 180),
      aP0[1].nextArrayIndex,
      aP0[1].referenceCount,
      0);
  v14 = *(CCINIClass **)aP0[2].__pad_0; /*0x4d1852*/
  aP0[1].Cell[0] = (int)&vt_VectorClass_FoggedObjectClass_DrawRecord; /*0x4d1855*/
  if ( v14 && aP0[2].__pad_0[9] ) /*0x4d1860*/
  {
    __3_YAXPAX_Z(v14); /*0x4d1866*/
    *(_DWORD *)aP0[2].__pad_0 = 0; /*0x4d186e*/
  }
  aP0[2].__pad_0[9] = 0; /*0x4d1873*/
  *(_DWORD *)&aP0[2].__pad_0[4] = 0; /*0x4d1876*/
  AbstractClass::DTOR(aP0); /*0x4d1879*/
  return result; /*0x4d187e*/
}


// ==== 0x004D1890  TacticalClass::DrawBuildings  this=int  sig=csp ====
int __thiscall TacticalClass::DrawBuildings(int *this)
{
  int result; // eax
  int v3; // esi
  int v4; // ebx
  int *v5; // eax
  __int16 *v6; // esi
  int v7; // ebp
  char v8; // al
  _DWORD *v9; // esi
  __int16 *v10; // ebp
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
  int v25; // eax
  int *v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // edx
  int v31; // eax
  __int16 *v32; // eax
  _DWORD *v33; // ecx
  int v34; // ebp
  int v35; // esi
  _DWORD *v36; // ebp
  int v37; // ecx
  int v38; // edx
  int v39; // ecx
  int v40; // eax
  int v41; // edx
  int v42; // ebp
  int v43; // ebp
  int v44; // edx
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // ecx
  int v49; // ebp
  __int16 *v50; // eax
  int v51; // esi
  int v52; // [esp-28h] [ebp-174h]
  int v53; // [esp-28h] [ebp-174h]
  int v54; // [esp-24h] [ebp-170h]
  int v55; // [esp-20h] [ebp-16Ch]
  int v56; // [esp-20h] [ebp-16Ch]
  int v57; // [esp+8h] [ebp-144h]
  int v58; // [esp+8h] [ebp-144h]
  _DWORD *v59; // [esp+8h] [ebp-144h]
  _DWORD *v60; // [esp+Ch] [ebp-140h]
  _DWORD *v61; // [esp+Ch] [ebp-140h]
  char v62; // [esp+10h] [ebp-13Ch]
  int v63; // [esp+10h] [ebp-13Ch]
  _DWORD *v64; // [esp+10h] [ebp-13Ch]
  int v65; // [esp+10h] [ebp-13Ch]
  int v66; // [esp+14h] [ebp-138h]
  unsigned int v67; // [esp+18h] [ebp-134h]
  int j; // [esp+18h] [ebp-134h]
  unsigned int v69; // [esp+1Ch] [ebp-130h]
  char v70; // [esp+23h] [ebp-129h]
  int v71; // [esp+24h] [ebp-128h]
  __int16 *v72; // [esp+24h] [ebp-128h]
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
  int i; // [esp+60h] [ebp-ECh]
  int v87[2]; // [esp+64h] [ebp-E8h] BYREF
  int v88[3]; // [esp+6Ch] [ebp-E0h] BYREF
  int v89; // [esp+78h] [ebp-D4h]
  int v90; // [esp+7Ch] [ebp-D0h]
  int v91; // [esp+80h] [ebp-CCh]
  char **v92; // [esp+84h] [ebp-C8h]
  int v93; // [esp+88h] [ebp-C4h] BYREF
  int v94; // [esp+8Ch] [ebp-C0h]
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
  int v110; // [esp+12Ch] [ebp-20h]
  int v111[2]; // [esp+134h] [ebp-18h] BYREF
  _DWORD v112[4]; // [esp+13Ch] [ebp-10h] BYREF

  result = dword_A8ED54[233983]; /*0x4d1890*/
  if ( dword_A8ED54[233983] ) /*0x4d18a1*/
  {
    result = MEMORY[0x87F7E8][53559]; /*0x4d18a7*/
    v3 = 0; /*0x4d18ac*/
    for ( i = 0; i < MEMORY[0x87F7E8][53559]; ++i ) /*0x4d18b4*/
    {
      if ( !LOBYTE(MEMORY[0x87F7E8][53561]) ) /*0x4d18c4*/
      {
        qsort((void *)MEMORY[0x87F7E8][53558], result, 8, globalHelper_0D2ED0); /*0x4d18d4*/
        MEMORY[0x87F7E8][53562] = 0; /*0x4d18dc*/
        LOBYTE(MEMORY[0x87F7E8][53561]) = 1; /*0x4d18e6*/
      }
      v4 = *(_DWORD *)(MEMORY[0x87F7E8][53558] + 8 * v3 + 4); /*0x4d18f3*/
      if ( *(_BYTE *)(v4 + 116) ) /*0x4d18f7*/
      {
        v93 = *(_DWORD *)(v4 + 64); /*0x4d190d*/
        v94 = *(_DWORD *)(v4 + 68); /*0x4d1917*/
        v95 = *(_DWORD *)(v4 + 72); /*0x4d1921*/
        v96 = *(_DWORD *)(v4 + 76); /*0x4d192b*/
        v93 -= *(_DWORD *)(MEMORY[0x87F7E8][7887] + 176); /*0x4d193e*/
        v94 = MEMORY[0x87F7E8][7663] + v94 - *(_DWORD *)(MEMORY[0x87F7E8][7887] + 180); /*0x4d195d*/
        v93 += MEMORY[0x87F7E8][7662]; /*0x4d1964*/
        v5 = ClipRectIntersection(v112, this, &v93, 0, 0); /*0x4d197c*/
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
                v64 = *(_DWORD **)(*(_DWORD *)(dword_A8ED54[121312] + 4 * *(_DWORD *)(*(_DWORD *)(v4 + 40) + 90196)) /*0x4d1cb0*/
                                 + 780);
                if ( j ) /*0x4d1cb4*/
                {
                  if ( v18 /*0x4d207f*/
                    && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v18 + 44))(v18) == 5
                    && *((_DWORD *)v18 + 181) <= MEMORY[0x87F7E8][539876]
                    && v66 )
                  {
                    v36 = (_DWORD *)(v4 + 52); /*0x4d2085*/
                    v37 = *(_DWORD *)(v4 + 56); /*0x4d208f*/
                    v100[0] = *(_DWORD *)(v4 + 52) - 128; /*0x4d2092*/
                    v38 = *(_DWORD *)(v4 + 60); /*0x4d20a0*/
                    v100[1] = v37 - 128; /*0x4d20a3*/
                    v100[2] = v38; /*0x4d20b9*/
                    Coord::To_Screen((_DWORD *)MEMORY[0x87F7E8][7887], v100, &v77); /*0x4d20c0*/
                    v110 = *this; /*0x4d20d2*/
                    v39 = MEMORY[0x87F7E8][7663] - *(this + 1); /*0x4d20e3*/
                    v40 = 1000; /*0x4d20eb*/
                    v77 += MEMORY[0x87F7E8][7662] - v110; /*0x4d20f0*/
                    v41 = v39 + v78; /*0x4d20f8*/
                    LOBYTE(v39) = v18[861]; /*0x4d20fa*/
                    v78 = v41; /*0x4d2102*/
                    if ( !(_BYTE)v39 ) /*0x4d2106*/
                    {
                      v102[0] = *v36; /*0x4d210c*/
                      v102[1] = *(_DWORD *)(v4 + 56); /*0x4d2123*/
                      v102[2] = *(_DWORD *)(v4 + 60); /*0x4d212d*/
                      v40 = *((__int16 *)Coord::To_Cell(MEMORY[0x87F7E8], v102) + 133); /*0x4d2139*/
                    }
                    if ( v64 && v18[860] ) /*0x4d2148*/
                      v59 = v64; /*0x4d2152*/
                    else
                      v59 = (_DWORD *)MEMORY[0x87F6C0][0]; /*0x4d215e*/
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
                      (int *)MEMORY[0x87F7E8][7883],
                      v59,
                      v66,
                      v69,
                      &v77,
                      this,
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
                  Coord::To_Screen((_DWORD *)MEMORY[0x87F7E8][7887], v109, &v79); /*0x4d1cf5*/
                  v105[0] = *(_DWORD *)(v4 + 52); /*0x4d1cfe*/
                  v105[1] = *(_DWORD *)(v4 + 56); /*0x4d1d10*/
                  v105[2] = *(_DWORD *)(v4 + 60); /*0x4d1d1f*/
                  v60 = Coord::To_Cell(MEMORY[0x87F7E8], v105); /*0x4d1d30*/
                  v22 = MEMORY[0x87F7E8][7663] - *(this + 1); /*0x4d1d41*/
                  v23 = v18[5889]; /*0x4d1d49*/
                  v79 += MEMORY[0x87F7E8][7662] - *this; /*0x4d1d4f*/
                  v24 = v22 + v80; /*0x4d1d57*/
                  v80 += v22; /*0x4d1d5b*/
                  if ( v23 ) /*0x4d1d5f*/
                    goto LABEL_49; /*0x4d1d5f*/
                  v71 = *((_DWORD *)v18 + 1352); /*0x4d1d6f*/
                  v83[0] = v79; /*0x4d1d77*/
                  v83[1] = v24; /*0x4d1d7b*/
                  v25 = v24 + *(__int16 *)(v66 + 4) / 2; /*0x4d1d88*/
                  v88[0] = *this; /*0x4d1d8e*/
                  v88[1] = *(this + 1); /*0x4d1d95*/
                  v88[2] = *(this + 2); /*0x4d1d9c*/
                  v89 = *(this + 3); /*0x4d1da5*/
                  if ( v89 > v25 ) /*0x4d1dac*/
                    v89 = v25; /*0x4d1dae*/
                  v73 = *((_DWORD *)v18 + 1356) + 144; /*0x4d1dc4*/
                  v75 = *((_DWORD *)v18 + 1357) + 172; /*0x4d1dd3*/
                  v57 = (BuildingTypeClass::GetFoundationHeight((int)v18, 0) << 8) - 256; /*0x4d1de6*/
                  v97[0] = (BuildingTypeClass::GetFoundationWidth(v18) << 8) - 256; /*0x4d1dfe*/
                  v97[1] = v57; /*0x4d1e18*/
                  v26 = TacticalClass::AdjustForZShapeMove(v111, v97); /*0x4d1e1f*/
                  v74 = v73 - *v26; /*0x4d1e2e*/
                  v27 = *v19; /*0x4d1e3b*/
                  v76 = v75 - v26[1]; /*0x4d1e3d*/
                  v92 = (char **)MEMORY[0x87F7E8][31093]; /*0x4d1e46*/
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
                  v32 = (__int16 *)Coord::To_Cell(MEMORY[0x87F7E8], v99); /*0x4d1e91*/
                  v33 = v60; /*0x4d1ea4*/
                  v34 = *((__int16 *)v18 + 2724) + v32[133]; /*0x4d1ea8*/
                  if ( !v60[13] ) /*0x4d1eaa*/
                  {
                    TacticalClass::SetView((int)v60, 0, 0x10000, 0, 1000, 1000, 1000); /*0x4d1ec9*/
                    v33 = v60; /*0x4d1ece*/
                  }
                  if ( v18[5890] ) /*0x4d1ed2*/
                    v61 = (_DWORD *)v33[13]; /*0x4d1edf*/
                  else
                    v61 = v64; /*0x4d1ee9*/
                  if ( v89 > 0 ) /*0x4d1ef6*/
                  {
                    if ( v70 ) /*0x4d1f02*/
                      DrawToSurfaceSHP( /*0x4d1f3e*/
                        (int *)MEMORY[0x87F7E8][7883],
                        v61,
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
                        (int *)MEMORY[0x87F7E8][7883],
                        v61,
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
                      (int *)MEMORY[0x87F7E8][7883],
                      v61,
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
                      (int *)MEMORY[0x87F7E8][7883],
                      v61,
                      v35,
                      v69,
                      &v79,
                      this,
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
              v6 = (__int16 *)Coord::To_Cell(MEMORY[0x87F7E8], v108); /*0x4d19fa*/
              v7 = *((_DWORD *)v6 + 17); /*0x4d1a00*/
              v8 = *((_BYTE *)v6 + 286); /*0x4d1a03*/
              *((_DWORD *)v6 + 17) = *(_DWORD *)(v4 + 36); /*0x4d1a09*/
              v62 = v8; /*0x4d1a0f*/
              *((_BYTE *)v6 + 286) = *(_BYTE *)(v4 + 44); /*0x4d1a13*/
              Coord::Subtract(v106, (((v6[18] << 8) + 128) / 256) << 8, (((v6[19] << 8) + 128) / 256) << 8, 0); /*0x4d1a5b*/
              v101[0] = v106[0]; /*0x4d1a75*/
              v101[1] = v106[1]; /*0x4d1a7c*/
              v101[2] = v106[2]; /*0x4d1a96*/
              Coord::To_Screen((_DWORD *)MEMORY[0x87F7E8][7887], v101, v87); /*0x4d1a9d*/
              v87[0] -= 30; /*0x4d1aaf*/
              BuildingClass::Draw_0((int)v6, v87, this); /*0x4d1ab5*/
              TacticalClass::DrawBuildingPlacement((int)v6, v87, this); /*0x4d1ac2*/
              *((_DWORD *)v6 + 17) = v7; /*0x4d1ac7*/
              *((_BYTE *)v6 + 286) = v62; /*0x4d1ace*/
              break; /*0x4d1ad4*/
            case 0x1D: /*0x4d19bd*/
              v43 = *(this + 1); /*0x4d220d*/
              v44 = *this; /*0x4d2210*/
              v45 = *(_DWORD *)(MEMORY[0x87F7E8][7887] + 180); /*0x4d2218*/
              v90 = *(_DWORD *)(MEMORY[0x87F7E8][7887] + 176); /*0x4d221e*/
              v46 = *(_DWORD *)(v4 + 68); /*0x4d2225*/
              v91 = v45; /*0x4d2228*/
              v47 = *(_DWORD *)(v4 + 64) - v90 + MEMORY[0x87F7E8][7662] + 30; /*0x4d2249*/
              v98[1] = MEMORY[0x87F7E8][7663] + v46 - v91 - v43; /*0x4d225f*/
              v48 = *(_DWORD *)(v4 + 84); /*0x4d2266*/
              v98[0] = v47 - v44; /*0x4d2269*/
              v49 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(MEMORY[0x87F7E8][539917] + 4 * v48) + 156))(*(_DWORD *)(MEMORY[0x87F7E8][539917] + 4 * v48)); /*0x4d227b*/
              if ( v49 ) /*0x4d227f*/
              {
                v104[0] = *(_DWORD *)(v4 + 52); /*0x4d228c*/
                v104[1] = *(_DWORD *)(v4 + 56); /*0x4d229e*/
                v104[2] = *(_DWORD *)(v4 + 60); /*0x4d22a8*/
                v50 = (__int16 *)Coord::To_Cell(MEMORY[0x87F7E8], v104); /*0x4d22b4*/
                v84 = *(_DWORD *)(v4 + 52); /*0x4d22bd*/
                v51 = *(_DWORD *)(v4 + 60); /*0x4d22c4*/
                v85 = *(_DWORD *)(v4 + 56); /*0x4d22c7*/
                v72 = v50; /*0x4d22cd*/
                v56 = v50[134]; /*0x4d22dd*/
                v53 = -(int)ZCoordToScreenY(v51); /*0x4d22f4*/
                DrawToSurfaceSHP( /*0x4d230c*/
                  (int *)MEMORY[0x87F7E8][7883],
                  *((_DWORD **)v72 + 13),
                  v49,
                  *(_DWORD *)(v4 + 88),
                  v98,
                  this,
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
              v10 = (__int16 *)Coord::To_Cell(MEMORY[0x87F7E8], v107); /*0x4d1b16*/
              v67 = *(_DWORD *)(*(_DWORD *)(v4 + 96) + 4); /*0x4d1b1e*/
              v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v63 + 156))(v63); /*0x4d1b2e*/
              v103[0] = *v9; /*0x4d1b34*/
              v103[1] = v9[1]; /*0x4d1b49*/
              v103[2] = v9[2]; /*0x4d1b5b*/
              Coord::To_Screen((_DWORD *)MEMORY[0x87F7E8][7887], v103, &v81); /*0x4d1b62*/
              v12 = MEMORY[0x87F7E8][7663] - *(this + 1); /*0x4d1b79*/
              v13 = *v9; /*0x4d1b81*/
              v81 += MEMORY[0x87F7E8][7662] - *this; /*0x4d1b83*/
              v14 = v12 + v82; /*0x4d1b8b*/
              v85 = v9[1]; /*0x4d1b90*/
              v15 = v9[2]; /*0x4d1b94*/
              v82 = v14; /*0x4d1b97*/
              v84 = v13; /*0x4d1b9b*/
              v16 = -(int)ZCoordToScreenY(v15); /*0x4d1ba9*/
              if ( !*((_DWORD *)v10 + 13) ) /*0x4d1ba6*/
                TacticalClass::SetView((int)v10, 0, 0x10000, 0, 1000, 1000, 1000); /*0x4d1bc9*/
              DrawToSurfaceSHP( /*0x4d1c00*/
                (int *)MEMORY[0x87F7E8][7883],
                *((_DWORD **)v10 + 13),
                v11,
                v67,
                &v81,
                this,
                19968,
                0,
                v16 - 4,
                2,
                v10[134],
                0,
                0,
                0,
                0,
                0);
              if ( byte_822CF1 ) /*0x4d1c0c*/
                DrawToSurfaceSHP( /*0x4d1c45*/
                  (int *)MEMORY[0x87F7E8][7883],
                  *((_DWORD **)v10 + 13),
                  v11,
                  v67 + *(__int16 *)(v11 + 6) / 2,
                  &v81,
                  this,
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
      result = MEMORY[0x87F7E8][53559]; /*0x4d2311*/
      v3 = i + 1; /*0x4d231a*/
    }
  }
  return result; /*0x4d2329*/
}


// ==== 0x004D2370  ObjectClass::MarkAllFootOccupancies  this=ObjectClass  sig=csp ====
int sub_4D2370()
{
  int result; // eax
  int v1; // esi
  int v2; // edi
  _WORD *v3; // esi
  int v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  int v8; // [esp+8h] [ebp-1Ch]
  int i; // [esp+Ch] [ebp-18h]
  int v10; // [esp+10h] [ebp-14h] BYREF
  _BYTE v11[4]; // [esp+14h] [ebp-10h] BYREF
  _DWORD v12[3]; // [esp+18h] [ebp-Ch] BYREF

  result = MEMORY[0x8B3D20]; /*0x4d2373*/
  v1 = 0; /*0x4d2379*/
  for ( i = 0; v1 < MEMORY[0x8B3D20]; i = v1 ) /*0x4d2381*/
  {
    v2 = *((_DWORD *)MEMORY[0x8B3D14] + v1); /*0x4d2399*/
    if ( *(_DWORD *)(v2 + 48) == 6 /*0x4d23ae*/
      && (*(int (__thiscall **)(_DWORD, _DWORD))(***(_DWORD ***)(v2 + 96) + 144))(**(_DWORD **)(v2 + 96), 0) )
    {
      if ( *(_DWORD *)(v2 + 48) == 6 ) /*0x4d23bf*/
        v3 = (_WORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(***(_DWORD ***)(v2 + 96) + 144))( /*0x4d23d0*/
                        **(_DWORD **)(v2 + 96),
                        0);
      else
        v3 = 0; /*0x4d23d4*/
      v4 = *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v2 + 96))(v2, v11); /*0x4d23e2*/
      v10 = v4; /*0x4d23e4*/
      while ( *v3 != 0x7FFF || v3[1] != 0x7FFF ) /*0x4d23f9*/
      {
        LOWORD(v8) = v4 + *v3; /*0x4d2408*/
        HIWORD(v8) = HIWORD(v4) + v3[1]; /*0x4d240d*/
        v10 = v8; /*0x4d241c*/
        v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v10); /*0x4d2420*/
        v3 += 2; /*0x4d2436*/
        v5[80] |= 0x400000u; /*0x4d2439*/
      }
      v1 = i; /*0x4d2478*/
    }
    else
    {
      v6 = (_DWORD *)(v2 + 52); /*0x4d243d*/
      v12[0] = *v6; /*0x4d2442*/
      v12[1] = v6[1]; /*0x4d244e*/
      v12[2] = v6[2]; /*0x4d2455*/
      v7 = Coord::To_Cell(&MEMORY[0x87F7E8], v12); /*0x4d245e*/
      v7[80] |= 0x400000u; /*0x4d2474*/
    }
    result = MEMORY[0x8B3D20]; /*0x4d247c*/
    ++v1; /*0x4d2481*/
  }
  return result; /*0x4d2491*/
}


// ==== 0x004D24A0  FoggedObjectClass::SaveToINI  this=FoggedObjectClass  sig=csp ====
int __stdcall FoggedObjectClass::SaveToINI(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax
  int v4; // edx
  int v5; // ebp
  int v6; // edi

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x4d24b3*/
  if ( result >= 0 ) /*0x4d24ba*/
  {
    v4 = *a1; /*0x4d24bf*/
    aP2 = *(_DWORD *)&aP0->Name[8]; /*0x4d24cb*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a1, &aP2, 4, 0); /*0x4d24cf*/
    if ( result >= 0 ) /*0x4d24d4*/
    {
      v5 = 0; /*0x4d24da*/
      if ( aP2 > 0 ) /*0x4d24de*/
      {
        v6 = 0; /*0x4d24e0*/
        do /*0x4d2500*/
        {
          if ( (*(int (__stdcall **)(int *, char *, int, _DWORD))(*a1 + 16))(a1, (char *)aP0->UIName + v6, 16, 0) < 0 ) /*0x4d24f4*/
            break; /*0x4d24f4*/
          ++v5; /*0x4d24fa*/
          v6 += 16; /*0x4d24fb*/
        }
        while ( v5 < aP2 ); /*0x4d2500*/
      }
      return 0; /*0x4d2502*/
    }
  }
  return result; /*0x4d2504*/
}


// ==== 0x004D2510  FoggedObjectClass::LoadTypeData  this=FoggedObjectClass  sig=csp ====
int __stdcall FoggedObjectClass::_vt05(int *a1, int a2)
{
  int *v2; // ebx
  int *v3; // edi
  int result; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
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
  v3 = a1; /*0x4d251b*/
  result = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x4d2521*/
  if ( result < 0 ) /*0x4d252a*/
    return result; /*0x4d252a*/
  if ( v3 ) /*0x4d2532*/
  {
    AbstractClass::InitVtables(v3, (int)&a2); /*0x4d253b*/
    FoggedObject::DrawVector_Constructor(v3 + 23, 0, 0); /*0x4d2547*/
    v3[23] = (int)&vt_DynamicVectorClass_FoggedObjectClass_DrawRecord; /*0x4d254c*/
    v3[28] = 10; /*0x4d2552*/
    v3[27] = 0; /*0x4d2559*/
    *v3 = (int)&FoggedObjectClass::`vftable'; /*0x4d255c*/
    v3[1] = (int)&FoggedObjectClass::`vftable'; /*0x4d2562*/
    v3[2] = (int)&FoggedObjectClass::`vftable'; /*0x4d2569*/
    v3[3] = (int)&vt_FoggedObjectClass; /*0x4d2570*/
  }
  ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v3 + 10); /*0x4d2580*/
  v5 = *v2; /*0x4d2585*/
  a1 = 0; /*0x4d2590*/
  result = (*(int (__stdcall **)(int *, int **, int, _DWORD))(v5 + 12))(v2, &a1, 4, 0); /*0x4d2594*/
  a2 = result; /*0x4d2599*/
  if ( result < 0 ) /*0x4d259d*/
    return result; /*0x4d259d*/
  v17 = 0; /*0x4d25a7*/
  if ( (int)a1 <= 0 ) /*0x4d25ad*/
  {
LABEL_14:
    v17 = *(_DWORD *)(*(int (__thiscall **)(int *, int *))(*v3 + 96))(v3, &v17); /*0x4d2665*/
    v12 = 74 * (SHIWORD(v17) - (((__int16)v17 + SHIWORD(v17)) << 9) - (__int16)v17) - v3[12] + 0x7FFFFFFF; /*0x4d26a1*/
    if ( (int)(MEMORY[0x8B3CC4] + 1) <= MEMORY[0x8B3CC8] ) /*0x4d26aa*/
    {
LABEL_22:
      *((_DWORD *)MEMORY[0x8B3CC0] + 2 * MEMORY[0x8B3CC4]) = v12; /*0x4d2745*/
      *((_DWORD *)MEMORY[0x8B3CC0] + 2 * MEMORY[0x8B3CC4] + 1) = v3; /*0x4d275f*/
      MEMORY[0x8B3CCC] = 0; /*0x4d2769*/
      ++MEMORY[0x8B3CC4]; /*0x4d2770*/
      return a2; /*0x4d2770*/
    }
    if ( MEMORY[0x8B3CC8] ) /*0x4d26b2*/
    {
      v13 = MEMORY[0x8B3CC8]; /*0x4d26bb*/
      if ( MEMORY[0x8B3CC8] < 0 ) /*0x4d26bf*/
        return a2; /*0x4d26bf*/
    }
    else
    {
      v13 = 10; /*0x4d26b4*/
    }
    v17 = v13 + MEMORY[0x8B3CC8]; /*0x4d26c7*/
    v14 = __2_YAPAXI_Z(8 * (v13 + MEMORY[0x8B3CC8])); /*0x4d26d8*/
    if ( v14 ) /*0x4d26df*/
    {
      --v17; /*0x4d26f0*/
      for ( i = 0; i < (int)MEMORY[0x8B3CC4]; v14[2 * i - 1] = v16[1] ) /*0x4d26f8*/
      {
        v16 = (char *)MEMORY[0x8B3CC0] + 8 * i++; /*0x4d2700*/
        v14[2 * i - 2] = *v16; /*0x4d2706*/
      }
      __3_YAXPAX_Z(MEMORY[0x8B3CC0]); /*0x4d2721*/
      MEMORY[0x8B3CC0] = v14; /*0x4d2730*/
      MEMORY[0x8B3CC8] += v13; /*0x4d2736*/
      MEMORY[0x8B3CD0] = 0; /*0x4d273b*/
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
    v7 = v3[25]; /*0x4d25de*/
    if ( v3[27] < v7 /*0x4d2605*/
      || (*((_BYTE *)v3 + 105) || !v7)
      && (v8 = v3[28], v8 > 0)
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v3[23] + 8))(v3 + 23, v7 + v8, 0) )
    {
      v9 = v3[27]; /*0x4d260c*/
      v10 = v18; /*0x4d260f*/
      v3[27] = v9 + 1; /*0x4d2616*/
      v11 = (_DWORD *)(v3[24] + 16 * v9); /*0x4d261f*/
      *v11 = v10; /*0x4d2621*/
      v11[1] = v19; /*0x4d2627*/
      v11[2] = v20; /*0x4d262e*/
      v11[3] = v21; /*0x4d2635*/
    }
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(16 * v3[27] + v3[24] - 16)); /*0x4d264b*/
    if ( ++v17 >= (int)a1 ) /*0x4d265f*/
      goto LABEL_14; /*0x4d265f*/
  }
}


// ==== 0x004D2790  CellClass::recalcPassability  this=VOID_PTR  sig=csp ====
int __thiscall sub_4D2790(int this)
{
  if ( *(_DWORD *)(this + 48) == 6 ) /*0x4d2794*/
    return (*(int (__thiscall **)(_DWORD, _DWORD))(***(_DWORD ***)(this + 96) + 144))(**(_DWORD **)(this + 96), 0); /*0x4d279f*/
  else
    return 0; /*0x4d27a6*/
}


// ==== 0x004D27B0  FoggedObjectClass::GetTypeIdentifier  this=FoggedObjectClass  sig=csp ====
int FoggedObjectClass::_vt11()
{
  return 61; /*0x4d27b5*/
}


// ==== 0x004D27C0  FoggedObjectClass::GetObjectSize  this=FoggedObjectClass  sig=csp ====
int FoggedObjectClass::_vt12()
{
  return 120; /*0x4d27c5*/
}


// ==== 0x004D27D0  FoggedObjectClass::GetClassIdentifier  this=FoggedObjectClass  sig=csp ====
int __stdcall FoggedObjectClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x4d27d6*/
    return -2147467261; /*0x4d27d8*/
  *a2 = 474417934; /*0x4d27e6*/
  a2[1] = 299002327; /*0x4d27ee*/
  a2[2] = 1610674872; /*0x4d27f7*/
  a2[3] = -318126072; /*0x4d2800*/
  return 0; /*0x4d27dd*/
}


// ==== 0x004D2810  FoggedObjectClass::PowerDrainUpdate  this=FoggedObjectClass  sig=csp ====
int __thiscall FoggedObjectClass::_vt13(int this, int a2)
{
  AbstractClass::ProcessPower((#378 *)this); /*0x4d2819*/
  Power::TimerProcess(*(_DWORD *)(this + 36)); /*0x4d2824*/
  Power::TimerProcess(*(_DWORD *)(this + 44)); /*0x4d282f*/
  Power::TimerProcess(*(_DWORD *)(this + 48)); /*0x4d283a*/
  Power::TimerProcess(*(_DWORD *)(this + 52)); /*0x4d2845*/
  Power::TimerProcess(*(_DWORD *)(this + 56)); /*0x4d2850*/
  Power::TimerProcess(*(_DWORD *)(this + 60)); /*0x4d285b*/
  Power::TimerProcess(*(_DWORD *)(this + 64)); /*0x4d2866*/
  Power::TimerProcess(*(_DWORD *)(this + 68)); /*0x4d2871*/
  Power::TimerProcess(*(_DWORD *)(this + 72)); /*0x4d287c*/
  Power::TimerProcess(*(_DWORD *)(this + 76)); /*0x4d2887*/
  Power::TimerProcess(*(_DWORD *)(this + 80)); /*0x4d2892*/
  Power::TimerProcess(*(_DWORD *)(this + 84)); /*0x4d289d*/
  Power::TimerProcess(*(_DWORD *)(this + 88)); /*0x4d28a8*/
  return Power::TimerProcess(*(_DWORD *)(this + 108)); /*0x4d28b8*/
}


// ==== 0x004D28C0  TechnoClass::recalcThreat  this=TechnoClass  sig=csp ====
int __thiscall sub_4D28C0(int this)
{
  if ( *(int *)(this + 108) <= 0 ) /*0x4d28c5*/
    return 0; /*0x4d28cd*/
  else
    return **(_DWORD **)(this + 96); /*0x4d28ca*/
}


// ==== 0x004D28D0  FoggedObjectClass::CheckVisibility  this=FoggedObjectClass  sig=csp ====
_DWORD *__thiscall FoggedObjectClass::_vt24(_DWORD *this, _DWORD *a2)
{
  int v3; // [esp+0h] [ebp-4h]

  LOWORD(v3) = this->q034 / 256; /*0x4d28e0*/
  HIWORD(v3) = this->q038 / 256; /*0x4d28f4*/
  *a2 = v3; /*0x4d2901*/
  return a2; /*0x4d2904*/
}


// ==== 0x004D2910  FoggedObjectClass::ddtor  this=FoggedObjectClass  sig=csp ====
FoggedObjectClass *__thiscall FoggedObjectClass::ddtor(void *Block, char a2)
{
  DestructFoggedObjectClass((int)Block); /*0x4d2913*/
  if ( (a2 & 1) != 0 ) /*0x4d291d*/
    __3_YAXPAX_Z(Block); /*0x4d2920*/
  return (FoggedObjectClass *)Block; /*0x4d292a*/
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
int __thiscall FoggedObject_DrawVector::_vt06(_DWORD *this, int a2, int a3)
{
  int v3; // edx

  v3 = this->Items + 16 * a3; /*0x4d298a*/
  *(_DWORD *)a2 = *(_DWORD *)v3; /*0x4d2992*/
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(v3 + 4); /*0x4d2997*/
  *(_BYTE *)(a2 + 8) = *(_BYTE *)(v3 + 8); /*0x4d299d*/
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(v3 + 12); /*0x4d29a3*/
  return a2; /*0x4d29a6*/
}


// ==== 0x004D29B0  _VectorClass_UDrawRecord_FoggedObjectClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall FoggedObjectClass::_vt01(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  v2 = *(this + 2); /*0x4d29bb*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4d29c0*/
  {
    v3 = 0; /*0x4d29c2*/
    if ( v2 <= 0 ) /*0x4d29c6*/
      return 1; /*0x4d29f6*/
    v4 = *(_DWORD *)(a2 + 4); /*0x4d29c8*/
    v5 = (_DWORD *)*(this + 1); /*0x4d29cb*/
    v6 = (_DWORD *)(v4 + 4); /*0x4d29ce*/
    v7 = v4 - (_DWORD)v5; /*0x4d29d1*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x4d29e3*/
    {
      ++v3; /*0x4d29e5*/
      v6 += 4; /*0x4d29e6*/
      v5 += 4; /*0x4d29e9*/
      if ( v3 >= v2 ) /*0x4d29ee*/
        return 1; /*0x4d29ee*/
    }
  }
  return 0; /*0x4d29f0*/
}


// ==== 0x004D2A10  _VectorClass_UDrawRecord_FoggedObjectClass::Release  this=VectorClass  sig=csp ====
char __thiscall FoggedObject_DrawVector::_vt02(void *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  char *v6; // eax
  char *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // edx
  char *v15; // ebx

  v3 = a2; /*0x4d2a12*/
  if ( a2 ) /*0x4d2a1e*/
  {
    v5 = a3; /*0x4d2a24*/
    *((_BYTE *)this + 12) = 0; /*0x4d2a28*/
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
      v6 = (char *)__2_YAPAXI_Z(16 * a2); /*0x4d2a35*/
      if ( v6 ) /*0x4d2a3f*/
      {
        if ( a2 - 1 >= 0 ) /*0x4d2a46*/
        {
          v7 = v6 + 8; /*0x4d2a48*/
          v8 = a2; /*0x4d2a4b*/
          do /*0x4d2a5b*/
          {
            *((_DWORD *)v7 - 2) = 0; /*0x4d2a4c*/
            *((_DWORD *)v7 - 1) = 0; /*0x4d2a4f*/
            *v7 = 0; /*0x4d2a52*/
            *((_DWORD *)v7 + 1) = 0; /*0x4d2a54*/
            v7 += 16; /*0x4d2a57*/
            --v8; /*0x4d2a5a*/
          }
          while ( v8 ); /*0x4d2a5b*/
        }
        v5 = v6; /*0x4d2a5d*/
      }
      else
      {
        v5 = 0; /*0x4d2a61*/
      }
    }
    *((_BYTE *)this + 12) = 1; /*0x4d2a83*/
    if ( v5 ) /*0x4d2a87*/
    {
      if ( this->Items ) /*0x4d2a92*/
      {
        v12 = this->Capacity; /*0x4d2a97*/
        if ( a2 < v12 ) /*0x4d2a9c*/
          v12 = a2; /*0x4d2a9e*/
        if ( v12 > 0 ) /*0x4d2aa2*/
        {
          v13 = 0; /*0x4d2aa4*/
          do /*0x4d2aca*/
          {
            v14 = (_DWORD *)(this->Items + v13); /*0x4d2aab*/
            v15 = &v5[v13]; /*0x4d2aad*/
            v13 += 16; /*0x4d2ab0*/
            --v12; /*0x4d2ab3*/
            *(_DWORD *)v15 = *v14; /*0x4d2ab6*/
            *((_DWORD *)v15 + 1) = v14[1]; /*0x4d2abb*/
            *((_DWORD *)v15 + 2) = v14[2]; /*0x4d2ac1*/
            *((_DWORD *)v15 + 3) = v14[3]; /*0x4d2ac7*/
          }
          while ( v12 ); /*0x4d2aca*/
          v3 = a2; /*0x4d2acc*/
        }
        if ( *((_BYTE *)this + 13) ) /*0x4d2ad2*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4d2adb*/
          this->Items = 0; /*0x4d2ae3*/
        }
      }
      this->Items = v5; /*0x4d2aee*/
      this->Capacity = v3; /*0x4d2af4*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x4d2af7*/
      return 1; /*0x4d2afd*/
    }
    else
    {
      return 0; /*0x4d2a8c*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x4d2b07*/
    return 1; /*0x4d2b0d*/
  }
}


// ==== 0x004D2B20  _VectorClass_UDrawRecord_FoggedObjectClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall FoggedObject_DrawVector::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x4d2b2d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4d2b33*/
    *(_DWORD *)(this + 4) = 0; /*0x4d2b3b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4d2b3e*/
  *(_DWORD *)(this + 8) = 0; /*0x4d2b41*/
}


// ==== 0x004D2B50  _VectorClass_UDrawRecord_FoggedObjectClass::Read  this=VectorClass  sig=csp ====
int __thiscall FoggedObject_DrawVector::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x4d2b50*/
    return 0; /*0x4d2b5e*/
  v3 = *(_DWORD *)(this + 8); /*0x4d2b64*/
  result = 0; /*0x4d2b67*/
  if ( v3 <= 0 ) /*0x4d2b6b*/
    return -1; /*0x4d2b8c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2 || i[1] != a2[1]; i += 4 ) /*0x4d2b71*/
  {
    if ( ++result >= v3 ) /*0x4d2b8a*/
      return -1; /*0x4d2b8a*/
  }
  return result; /*0x4d2b5b*/
}


// ==== 0x004D2BA0  _VectorClass_UDrawRecord_FoggedObjectClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall FoggedObject_DrawVector::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x4d2ba0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 4; /*0x4d2bb5*/
  else
    return 0; /*0x4d2ba7*/
}


// ==== 0x004D2BC0  _DynamicVectorClass_UDrawRecord_FoggedObjectClass::ResizeArray  this=DynamicVector  sig=csp ====
char __thiscall FoggedObjectClass::ResizeArray(void *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  char *v6; // eax
  char *v7; // ecx
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
    *((_BYTE *)this + 12) = 0; /*0x4d2bd8*/
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
      v6 = (char *)__2_YAPAXI_Z(16 * a2); /*0x4d2be5*/
      if ( v6 ) /*0x4d2bef*/
      {
        if ( a2 - 1 >= 0 ) /*0x4d2bf6*/
        {
          v7 = v6 + 8; /*0x4d2bf8*/
          v8 = a2; /*0x4d2bfb*/
          do /*0x4d2c0b*/
          {
            *((_DWORD *)v7 - 2) = 0; /*0x4d2bfc*/
            *((_DWORD *)v7 - 1) = 0; /*0x4d2bff*/
            *v7 = 0; /*0x4d2c02*/
            *((_DWORD *)v7 + 1) = 0; /*0x4d2c04*/
            v7 += 16; /*0x4d2c07*/
            --v8; /*0x4d2c0a*/
          }
          while ( v8 ); /*0x4d2c0b*/
        }
        v5 = v6; /*0x4d2c0d*/
      }
      else
      {
        v5 = 0; /*0x4d2c11*/
      }
    }
    *((_BYTE *)this + 12) = 1; /*0x4d2c33*/
    if ( !v5 ) /*0x4d2c37*/
      return 0; /*0x4d2cc7*/
    if ( this->q004 ) /*0x4d2c3d*/
    {
      v11 = this->DynamicVector_field_0x8; /*0x4d2c42*/
      if ( a2 < v11 ) /*0x4d2c47*/
        v11 = a2; /*0x4d2c49*/
      if ( v11 > 0 ) /*0x4d2c4d*/
      {
        v12 = 0; /*0x4d2c4f*/
        do /*0x4d2c75*/
        {
          v13 = (_DWORD *)(this->q004 + v12); /*0x4d2c56*/
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
      if ( *((_BYTE *)this + 13) ) /*0x4d2c7d*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4d2c86*/
        this->q004 = 0; /*0x4d2c8e*/
      }
    }
    this->q004 = v5; /*0x4d2c99*/
    this->DynamicVector_field_0x8 = v3; /*0x4d2c9f*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x4d2ca2*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->__pad_00C)(this); /*0x4d2cab*/
  }
  v15 = this->DynamicVector_field_0x8; /*0x4d2cae*/
  if ( v15 < this->DynamicVector_field_0x10 ) /*0x4d2cb6*/
    this->DynamicVector_field_0x10 = v15; /*0x4d2cb8*/
  return 1; /*0x4d2cbb*/
}


// ==== 0x004D2CD0  _DynamicVectorClass_UDrawRecord_FoggedObjectClass::Read  this=DynamicVector  sig=csp ====
int __thiscall FoggedObjectClass::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->q004; /*0x4d2cd0*/
  result = 0; /*0x4d2cd5*/
  if ( v2 <= 0 ) /*0x4d2cdb*/
    return -1; /*0x4d2cfc*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2 || i[1] != a2[1]; i += 4 ) /*0x4d2ce1*/
  {
    if ( ++result >= v2 ) /*0x4d2cfa*/
      return -1; /*0x4d2cfa*/
  }
  return result; /*0x4d2cff*/
}


// ==== 0x004D2D10  _VectorClass_UDrawRecord_FoggedObjectClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall FoggedObject_DrawVector::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4d2d13*/
  *Block = &vt_VectorClass_FoggedObjectClass_DrawRecord; /*0x4d2d16*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4d2d20*/
  {
    __3_YAXPAX_Z(v3); /*0x4d2d28*/
    *(Block + 1) = 0; /*0x4d2d30*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4d2d3b*/
  *(Block + 2) = 0; /*0x4d2d41*/
  if ( (a2 & 1) != 0 ) /*0x4d2d48*/
    __3_YAXPAX_Z(Block); /*0x4d2d4b*/
  return (VectorClass *)Block; /*0x4d2d55*/
}


// ==== 0x004D2D60  _DynamicVectorClass_UDrawRecord_FoggedObjectClass::QueryInterface  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall FoggedObjectClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4d2d63*/
  *Block = &vt_VectorClass_FoggedObjectClass_DrawRecord; /*0x4d2d66*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4d2d70*/
  {
    __3_YAXPAX_Z(v3); /*0x4d2d78*/
    *(Block + 1) = 0; /*0x4d2d80*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4d2d8b*/
  *(Block + 2) = 0; /*0x4d2d91*/
  if ( (a2 & 1) != 0 ) /*0x4d2d98*/
    __3_YAXPAX_Z(Block); /*0x4d2d9b*/
  return (DynamicVector *)Block; /*0x4d2da5*/
}


// ==== 0x004D2DB0  FoggedObject::DrawVector_Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall FoggedObject::DrawVector_Constructor(_DWORD *this, IUnknown *aP1, IUnknown *aP2)
{
  int v4; // ebx
  int *v5; // eax
  IUnknown *v6; // ecx
  int v8; // eax
  int v9; // ecx
  IUnknown *v10; // edx

  v4 = 0; /*0x4d2db9*/
  this->Items = 0; /*0x4d2dbd*/
  this->Capacity = aP1; /*0x4d2dc0*/
  *((_BYTE *)this + 12) = 1; /*0x4d2dc3*/
  *((_BYTE *)this + 13) = 0; /*0x4d2dc7*/
  *this = &vt_VectorClass_FoggedObjectClass_DrawRecord; /*0x4d2dca*/
  if ( !aP1 ) /*0x4d2dd0*/
    return this; /*0x4d2e38*/
  if ( !aP2 ) /*0x4d2dd8*/
  {
    v8 = __2_YAPAXI_Z(16 * (_DWORD)aP1); /*0x4d2e07*/
    if ( v8 ) /*0x4d2e11*/
    {
      if ( (int)&aP1[-1].__tail_1602E[1] >= 0 ) /*0x4d2e18*/
      {
        v9 = v8 + 8; /*0x4d2e1a*/
        v10 = aP1; /*0x4d2e1d*/
        do /*0x4d2e2d*/
        {
          *(_DWORD *)(v9 - 8) = 0; /*0x4d2e1e*/
          *(_DWORD *)(v9 - 4) = 0; /*0x4d2e21*/
          *(_BYTE *)v9 = 0; /*0x4d2e24*/
          *(_DWORD *)(v9 + 4) = 0; /*0x4d2e26*/
          v9 += 16; /*0x4d2e29*/
          v10 = (IUnknown *)((char *)v10 - 1); /*0x4d2e2c*/
        }
        while ( v10 ); /*0x4d2e2d*/
      }
      v4 = v8; /*0x4d2e2f*/
    }
    this->Items = v4; /*0x4d2e31*/
    *((_BYTE *)this + 13) = 1; /*0x4d2e34*/
    return this; /*0x4d2e34*/
  }
  if ( (int)&aP1[-1].__tail_1602E[1] >= 0 ) /*0x4d2ddf*/
  {
    v5 = &aP2->field_8; /*0x4d2de1*/
    v6 = aP1; /*0x4d2de4*/
    do /*0x4d2df4*/
    {
      *(v5 - 2) = 0; /*0x4d2de5*/
      *(v5 - 1) = 0; /*0x4d2de8*/
      *(_BYTE *)v5 = 0; /*0x4d2deb*/
      v5[1] = 0; /*0x4d2ded*/
      v5 += 4; /*0x4d2df0*/
      v6 = (IUnknown *)((char *)v6 - 1); /*0x4d2df3*/
    }
    while ( v6 ); /*0x4d2df4*/
  }
  this->Items = aP2; /*0x4d2df6*/
  return this; /*0x4d2dfb*/
}


// ==== 0x004D2E40  Vector::ReallocDynamic  this=int  sig=csp ====
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
  MEMORY[0x8B3D90] = Math::Sqrt(v0 + v0); /*0x4d2f6e*/
}


// ==== 0x004D2F80  sub_4D2F80  this=-  sig=ida-proto ====
void sub_4D2F80()
{
  MEMORY[0x8B3DF8] = MEMORY[0x8B3D90] / 60.0; /*0x4d2f8c*/
}


// ==== 0x004D2FA0  sub_4D2FA0  this=-  sig=ida-proto ====
void sub_4D2FA0()
{
  MEMORY[0x8B3DE0] = 1.0 / MEMORY[0x8B3DF8]; /*0x4d2fac*/
}


// ==== 0x004D2FC0  sub_4D2FC0  this=-  sig=ida-proto ====
void sub_4D2FC0()
{
  MEMORY[0x8B3DD8] = 0.0174532925199433 * 45.0; /*0x4d2fcc*/
}


// ==== 0x004D2FE0  sub_4D2FE0  this=-  sig=ida-proto ====
void sub_4D2FE0()
{
  MEMORY[0x8B3D98] = 0.0174532925199433 * 60.0; /*0x4d2fec*/
}


// ==== 0x004D3000  sub_4D3000  this=-  sig=ida-proto ====
void sub_4D3000()
{
  MEMORY[0x8B3D70] = 0.0174532925199433 * 90.0; /*0x4d300c*/
}


// ==== 0x004D3020  sub_4D3020  this=-  sig=ida-proto ====
__int64 sub_4D3020()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x8B3D70] - MEMORY[0x8B3D98]); /*0x4d3032*/
  result = Math::RoundToInt(v0 * MEMORY[0x8B3D90] * 0.5); /*0x4d3046*/
  MEMORY[0x8B3E00] = result; /*0x4d304b*/
  return result; /*0x4d3050*/
}


// ==== 0x004D3060  sub_4D3060  this=-  sig=ida-proto ====
void sub_4D3060()
{
  MEMORY[0x8B3DA0] = Math::ArcTan((double)MEMORY[0x8B3E00] * 0.00390625); /*0x4d3077*/
}


// ==== 0x004D3090  sub_4D3090  this=-  sig=ida-proto ====
void sub_4D3090()
{
  MEMORY[0x8B3DB8] = Math::ArcTan((double)(2 * MEMORY[0x8B3E00]) / MEMORY[0x8B3D90]); /*0x4d30b2*/
}


// ==== 0x004D30C0  sub_4D30C0  this=-  sig=ida-proto ====
__int64 sub_4D30C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8B3E00]) + 0.5); /*0x4d30db*/
  MEMORY[0x8B3DF4] = result; /*0x4d30e0*/
  return result; /*0x4d30e6*/
}


// ==== 0x004D30F0  sub_4D30F0  this=-  sig=ida-proto ====
int sub_4D30F0()
{
  MEMORY[0x8B3D88] = 0; /*0x4d30f2*/
  return 0; /*0x4d30fe*/
}


// ==== 0x004D3100  sub_4D3100  this=-  sig=ida-proto ====
int sub_4D3100()
{
  MEMORY[0x8B3DA8] = 0; /*0x4d3102*/
  MEMORY[0x8B3DAC] = 0; /*0x4d3107*/
  MEMORY[0x8B3DB0] = 0; /*0x4d310c*/
  return 0; /*0x4d3111*/
}


// ==== 0x004D3120  sub_4D3120  this=-  sig=ida-proto ====
int sub_4D3120()
{
  MEMORY[0x8B3DF0] = 0; /*0x4d3125*/
  MEMORY[0x8B3DE8] = 128; /*0x4d312f*/
  MEMORY[0x8B3DEC] = 128; /*0x4d3134*/
  return 128; /*0x4d3139*/
}


// ==== 0x004D3140  sub_4D3140  this=-  sig=ida-proto ====
int sub_4D3140()
{
  MEMORY[0x8B3D78] = 0; /*0x4d3142*/
  MEMORY[0x8B3D7C] = 0; /*0x4d3147*/
  MEMORY[0x8B3D80] = 0; /*0x4d314c*/
  MEMORY[0x8B3D84] = 0; /*0x4d3151*/
  return 0; /*0x4d3156*/
}


// ==== 0x004D3160  sub_4D3160  this=-  sig=ida-proto ====
int sub_4D3160()
{
  MEMORY[0x8B3DC4] = 0; /*0x4d3167*/
  MEMORY[0x8B3DC8] = 0; /*0x4d316c*/
  MEMORY[0x8B3DCC] = 1; /*0x4d3171*/
  MEMORY[0x8B3DCD] = 0; /*0x4d3178*/
  MEMORY[0x8B3DC0] = (int)&off_7E8C28; /*0x4d317d*/
  MEMORY[0x8B3DD4] = 10; /*0x4d3187*/
  MEMORY[0x8B3DD0] = 0; /*0x4d3191*/
  return atexit(sub_4D31A0); /*0x4d319c*/
}


// ==== 0x004D31A0  sub_4D31A0  this=-  sig=ida-proto ====
void __cdecl sub_4D31A0()
{
  MEMORY[0x8B3DC0] = (int)&vt_VectorClass_FootClass; /*0x4d31a8*/
  if ( MEMORY[0x8B3DC4] && MEMORY[0x8B3DCD] ) /*0x4d31bc*/
  {
    __3_YAXPAX_Z(MEMORY[0x8B3DC4]); /*0x4d31bf*/
    MEMORY[0x8B3DC4] = 0; /*0x4d31c7*/
  }
  MEMORY[0x8B3DCD] = 0; /*0x4d31cd*/
  MEMORY[0x8B3DC8] = 0; /*0x4d31d3*/
}


// ==== 0x004D31E0  FootClass::Construct  this=FootClass  sig=csp ====
_DWORD *__thiscall FootClass::Construct(_DWORD *this, AbstractClass *aP1)
{
  IUnknown *v3; // eax
  int v4; // eax
  int v5; // eax

  TechnoClass::TechnoClass(this, aP1); /*0x4d31ea*/
  this->FootClass_field_520 = -1; /*0x4d31f1*/
  *((_WORD *)this + 658) = 0; /*0x4d31fb*/
  *((_WORD *)this + 659) = 0; /*0x4d3202*/
  *((_WORD *)this + 660) = 0; /*0x4d3209*/
  *((_WORD *)this + 661) = 0; /*0x4d3210*/
  this->FootClass_field_530 = 0; /*0x4d3217*/
  this->FootClass_field_534 = 0; /*0x4d321d*/
  this->FootClass_field_538 = 0; /*0x4d3223*/
  *((_BYTE *)this + 1340) = 0; /*0x4d3229*/
  this->FootClass_field_540 = 0; /*0x4d322f*/
  *((_WORD *)this + 684) = 0; /*0x4d3235*/
  *((_WORD *)this + 685) = 0; /*0x4d323c*/
  *((_WORD *)this + 686) = 0; /*0x4d3243*/
  *((_WORD *)this + 687) = 0; /*0x4d324a*/
  *((_WORD *)this + 688) = 0; /*0x4d3251*/
  *((_WORD *)this + 689) = 0; /*0x4d3258*/
  *((_WORD *)this + 690) = 0; /*0x4d325f*/
  *((_WORD *)this + 691) = 0; /*0x4d3266*/
  *(this + 346) = 0; /*0x4d326d*/
  this->FootClass_field_56C = 0; /*0x4d3273*/
  this->FootClass_field_570 = 0; /*0x4d3279*/
  *(this + 350) = 0; /*0x4d327f*/
  this->FootClass_field_57C = 0; /*0x4d328b*/
  *(this + 352) = 0; /*0x4d3292*/
  this->FootClass_field_584 = 1072693248; /*0x4d329b*/
  AbstractClassVector::Construct(this + 354, 0, 0); /*0x4d32a5*/
  this->FootClass_DVC_588 = &vt_DynamicVectorClass_AbstractClass; /*0x4d32aa*/
  *(this + 359) = 10; /*0x4d32b0*/
  *(this + 358) = 0; /*0x4d32b7*/
  this->FootClass_field_5A0 = 0; /*0x4d32c0*/
  this->FootClass_field_5A4 = 0; /*0x4d32c7*/
  this->FootClass_field_5A8 = 0; /*0x4d32d0*/
  AbstractClassVector::Construct(this + 363, 0, 0); /*0x4d32d6*/
  this->FootClass_DVC_5AC = &vt_DynamicVectorClass_AbstractClass; /*0x4d32e0*/
  this->__pad_5C0 = 10; /*0x4d32e6*/
  this->q5BC = 0; /*0x4d32e9*/
  this->FootClass_field_5C4 = -1; /*0x4d32ec*/
  this->FootClass_field_5C8 = 0; /*0x4d32f6*/
  this->FootClass_field_5CC = 0; /*0x4d32fc*/
  *((_BYTE *)this + 1489) = 0; /*0x4d3302*/
  this->FootClass_field_5D4 = 0; /*0x4d3308*/
  this->FootClass_field_5D8 = 0; /*0x4d330e*/
  this->FootClass_field_5DC = 0; /*0x4d3314*/
  *(this + 400) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4d3320*/
  this->FootClass_field_648 = 0; /*0x4d3326*/
  this->FootClass_field_64C = 10; /*0x4d332c*/
  *(this + 404) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4d3338*/
  this->FootClass_field_658 = 0; /*0x4d333e*/
  v3 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4d3344*/
  this->FootClass_field_664 = 0; /*0x4d3349*/
  *(this + 407) = v3; /*0x4d334f*/
  *(this + 410) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4d335b*/
  this->FootClass_field_670 = 0; /*0x4d3361*/
  this->Locomotor = 0; /*0x4d3367*/
  *(this + 414) = *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61308]; /*0x4d3378*/
  this->IsDeploying = *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61312]; /*0x4d3384*/
  this->FootClass_field_680 = *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61316]; /*0x4d338c*/
  *((_BYTE *)this + 1668) = -1; /*0x4d338f*/
  *((_BYTE *)this + 1669) = 0; /*0x4d3396*/
  *((_BYTE *)this + 1670) = 0; /*0x4d339c*/
  *((_BYTE *)this + 1671) = 0; /*0x4d33a2*/
  *((_BYTE *)this + 1672) = 0; /*0x4d33a8*/
  *((_BYTE *)this + 1673) = 0; /*0x4d33ae*/
  *((_BYTE *)this + 1674) = 0; /*0x4d33b4*/
  *((_BYTE *)this + 1675) = 0; /*0x4d33ba*/
  *((_BYTE *)this + 1676) = 0; /*0x4d33c0*/
  *((_BYTE *)this + 1677) = 0; /*0x4d33c6*/
  *((_BYTE *)this + 1678) = 0; /*0x4d33cc*/
  *((_BYTE *)this + 1679) = 0; /*0x4d33d2*/
  *((_BYTE *)this + 1680) = 0; /*0x4d33d8*/
  *((_BYTE *)this + 1681) = 0; /*0x4d33de*/
  this->FootClass_field_694 = 0; /*0x4d33e4*/
  this->FootClass_field_698 = 0; /*0x4d33ea*/
  this->FootClass_field_69C = 0; /*0x4d33f0*/
  *(this + 424) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4d33fc*/
  this->FootClass_bools_6A8 = 0; /*0x4d3402*/
  *((_BYTE *)this + 1708) = 0; /*0x4d340e*/
  *((_BYTE *)this + 1709) = 0; /*0x4d3414*/
  *((_BYTE *)this + 1710) = 0; /*0x4d341a*/
  *((_BYTE *)this + 1711) = 0; /*0x4d3420*/
  *((_BYTE *)this + 1712) = 0; /*0x4d3426*/
  *((_BYTE *)this + 1713) = 0; /*0x4d342c*/
  *((_BYTE *)this + 1714) = 0; /*0x4d3432*/
  *((_BYTE *)this + 1715) = 0; /*0x4d3438*/
  *((_BYTE *)this + 1716) = 0; /*0x4d343e*/
  *((_BYTE *)this + 1717) = 0; /*0x4d3444*/
  *((_BYTE *)this + 1718) = 1; /*0x4d344a*/
  *((_BYTE *)this + 1719) = 0; /*0x4d3451*/
  *((_BYTE *)this + 1720) = 0; /*0x4d3457*/
  *this = &FootClass::`vftable'; /*0x4d345d*/
  this->vtable2 = &FootClass::`vftable'; /*0x4d3463*/
  this->vtable3 = &FootClass::`vftable'; /*0x4d346a*/
  this->vtable4 = &vt_FootClass; /*0x4d3471*/
  *(this + 376) = -1; /*0x4d3478*/
  AudioController::Init(this + 337); /*0x4d3482*/
  if ( *(int *)&MEMORY[0x89F690].__pad_579C[61348] < *(int *)&MEMORY[0x89F690].__pad_579C[61340] /*0x4d34bb*/
    || (MEMORY[0x89F690].__pad_579C[61345] || !*(_DWORD *)&MEMORY[0x89F690].__pad_579C[61340])
    && *(int *)&MEMORY[0x89F690].__pad_579C[61352] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[61332] + 8))(
         &MEMORY[0x89F690].__pad_579C[61332],
         *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61340] + *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61352],
         0) )
  {
    v4 = (*(_DWORD *)&MEMORY[0x89F690].__pad_579C[61348])++; /*0x4d34c8*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[61336] + 4 * v4) = this; /*0x4d34d7*/
  }
  *((_BYTE *)this + 20) |= 4u; /*0x4d34e0*/
  if ( *(int *)&MEMORY[0xB077F8].__pad_579C[9812] < *(int *)&MEMORY[0xB077F8].__pad_579C[9804] /*0x4d3515*/
    || (MEMORY[0xB077F8].__pad_579C[9809] || !*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9804])
    && *(int *)&MEMORY[0xB077F8].__pad_579C[9816] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9796] + 8))(
         &MEMORY[0xB077F8].__pad_579C[9796],
         *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9804] + *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9816],
         0) )
  {
    v5 = (*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9812])++; /*0x4d3522*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9800] + 4 * v5) = this; /*0x4d3531*/
  }
  return this; /*0x4d3536*/
}


// ==== 0x004D3540  FootClass::PostLoadInit  this=FootClass  sig=csp ====
_DWORD *__thiscall FootClass::PostLoadInit(_DWORD *this, int a2)
{
  TechnoClass::Constructor(this, a2); /*0x4d3548*/
  this->FootClass_DVC_588 = &vt_DynamicVectorClass_AbstractClass; /*0x4d3552*/
  this->FootClass_DVC_5AC = &vt_DynamicVectorClass_AbstractClass; /*0x4d3558*/
  this->Locomotor = 0; /*0x4d355e*/
  *this = &FootClass::`vftable'; /*0x4d3568*/
  this->vtable2 = &FootClass::`vftable'; /*0x4d356e*/
  this->vtable3 = &FootClass::`vftable'; /*0x4d3575*/
  this->vtable4 = &vt_FootClass; /*0x4d357c*/
  return this; /*0x4d3585*/
}


// ==== 0x004D3590  FootClass::Destruct  this=FootClass  sig=csp ====
int __thiscall FootClass::Destruct(void *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  AbstractClass *v5; // ecx
  _DWORD *v6; // eax
  ILocomotion *v7; // eax
  CCINIClass *v8; // eax
  CCINIClass *v9; // eax
  void *v11; // [esp+8h] [ebp-4h] BYREF

  v2 = this->FootClass_field_5D4; /*0x4d3597*/
  *(_DWORD *)this = &FootClass::`vftable'; /*0x4d359d*/
  this->vtable2 = &FootClass::`vftable'; /*0x4d35a5*/
  this->vtable3 = &FootClass::`vftable'; /*0x4d35ac*/
  this->vtable4 = &vt_FootClass; /*0x4d35b3*/
  if ( v2 && MEMORY[0xA8D63C].__pad_1258[268] ) /*0x4d35c2*/
    TeamClass::LiberateMember_Start(v2, (IUnknown *)this, 0xFFFFFFFF, 0); /*0x4d35c8*/
  v11 = this; /*0x4d35dd*/
  v3 = (*(int (__thiscall **)(char *, void **))(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[61332] + 16))( /*0x4d35e1*/
         &MEMORY[0x89F690].__pad_579C[61332],
         &v11);
  if ( v3 != -1 ) /*0x4d35e7*/
    FootClass::RemoveFromPointerArray(&MEMORY[0x89F690].__pad_579C[61332], v3); /*0x4d35ef*/
  v11 = this; /*0x4d3604*/
  v4 = (*(int (__thiscall **)(char *, void **))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9796] + 16))( /*0x4d3608*/
         &MEMORY[0xB077F8].__pad_579C[9796],
         &v11);
  if ( v4 != -1 ) /*0x4d360e*/
    DynamicVector::RemoveItem(&MEMORY[0xB077F8].__pad_579C[9796], v4); /*0x4d3616*/
  v5 = (AbstractClass *)this->FootClass_field_69C; /*0x4d361b*/
  if ( v5 ) /*0x4d3623*/
  {
    (*(void (__thiscall **)(AbstractClass *, int))(*(_DWORD *)v5->__pad_0 + 32))(v5, 1); /*0x4d3629*/
    this->FootClass_field_69C = 0; /*0x4d362c*/
  }
  if ( *((_WORD *)this + 690) != *(_WORD *)&MEMORY[0x89F690].__pad_579C[61276] /*0x4d3653*/
    || *((_WORD *)this + 691) != *(_WORD *)&MEMORY[0x89F690].__pad_579C[61278] )
  {
    v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)this + 690); /*0x4d365b*/
    if ( (void *)v6[56] == this ) /*0x4d3666*/
      v6[56] = 0; /*0x4d3668*/
  }
  Mixer::ReleaseChannel((int **)this + 337); /*0x4d3677*/
  AudioFileClass::Release((_DWORD *)this + 337); /*0x4d367e*/
  v7 = (ILocomotion *)this->Locomotor; /*0x4d3683*/
  if ( v7 ) /*0x4d368b*/
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v7 + 8))(this->Locomotor); /*0x4d3690*/
  v8 = (CCINIClass *)this->q5B0; /*0x4d3693*/
  this->FootClass_DVC_5AC = &vt_VectorClass_AbstractClass; /*0x4d36a0*/
  if ( v8 && *((_BYTE *)this + 1465) ) /*0x4d36a8*/
  {
    __3_YAXPAX_Z(v8); /*0x4d36b1*/
    this->q5B0 = 0; /*0x4d36b9*/
  }
  *((_BYTE *)this + 1465) = 0; /*0x4d36bf*/
  this->q5B4 = 0; /*0x4d36c5*/
  v9 = (CCINIClass *)this->q58C; /*0x4d36cb*/
  this->FootClass_DVC_588 = &vt_VectorClass_AbstractClass; /*0x4d36d1*/
  if ( v9 && *((_BYTE *)this + 1429) ) /*0x4d36dc*/
  {
    __3_YAXPAX_Z(v9); /*0x4d36e5*/
    this->q58C = 0; /*0x4d36ed*/
  }
  *((_BYTE *)this + 1429) = 0; /*0x4d36f5*/
  this->q590 = 0; /*0x4d36fb*/
  return TechnoClass::DTOR((int)this); /*0x4d3706*/
}


// ==== 0x004D3710  FootClass::Destru_vt337  this=FootClass  sig=csp ====
void __thiscall FootClass::Destru_vt337(int this, double a2)
{
  if ( a2 < 1.0 ) /*0x4d371f*/
  {
    if ( a2 > 0.0 ) /*0x4d3747*/
    {
      *(double *)(this + 1400) = a2; /*0x4d3768*/
    }
    else
    {
      *(_DWORD *)(this + 1400) = 0; /*0x4d3749*/
      *(_DWORD *)(this + 1404) = 0; /*0x4d3753*/
    }
  }
  else
  {
    *(_DWORD *)(this + 1400) = 0; /*0x4d3721*/
    *(_DWORD *)(this + 1404) = 1072693248; /*0x4d372b*/
  }
}


// ==== 0x004D3780  FootClass::UpdateReveal  this=FootClass  sig=csp ====
char __userpurge FootClass::UpdateReveal@<al>(IUnknown *this@<ecx>, MouseClass aP1)
{
  int v2; // edi
  _BYTE v5[4]; // [esp+8h] [ebp-4h] BYREF

  v2 = aP1.field_0; /*0x4d3783*/
  if ( aP1.field_0 == 2 ) /*0x4d378c*/
    return 1; /*0x4d3793*/
  if ( !TechnoClass::UpdateProdWithSound(this, (IUnknown *)aP1.field_0) ) /*0x4d3799*/
    return 0; /*0x4d3803*/
  if ( (*(int (__thiscall **)(IUnknown *))(this->field_0 + 120))(this) == 2 ) /*0x4d37ac*/
  {
    aP1.field_0 = *(_DWORD *)(*(int (__thiscall **)(IUnknown *, _BYTE *))(this->field_0 + 440))(this, v5); /*0x4d37c4*/
    if ( v2 ) /*0x4d37c8*/
    {
      if ( v2 == 1 || v2 == 3 ) /*0x4d37d0*/
      {
        MapClass::FillRevealBuffer(&MEMORY[0x87F7E8], &aP1, this); /*0x4d37dd*/
        return 1; /*0x4d37e7*/
      }
    }
    else
    {
      MapClass::ApplyOverlayReveal(&MEMORY[0x87F7E8], &aP1, (BuildingClass *)this); /*0x4d37f5*/
    }
  }
  return 1; /*0x4d378e*/
}


// ==== 0x004D3810  FootClass::CheckTileSeed  this=FootClass  sig=csp ====
bool __thiscall FootClass_CheckTileSeed(int *this, _DWORD *a2)
{
  int v3; // ebx
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  int v9; // edx
  char v10; // al
  int v11; // [esp-8h] [ebp-28h]
  __int16 v12; // [esp+4h] [ebp-1Ch] BYREF
  int v13; // [esp+8h] [ebp-18h]
  int v14; // [esp+Ch] [ebp-14h] BYREF
  __int16 v15; // [esp+10h] [ebp-10h] BYREF
  char v16; // [esp+14h] [ebp-Ch] BYREF
  int v17; // [esp+1Ch] [ebp-4h]
  int v18; // [esp+24h] [ebp+4h]

  v3 = *(_DWORD *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 1460); /*0x4d381f*/
  if ( v3 == -1 ) /*0x4d3828*/
    return 1; /*0x4d382b*/
  v5 = *a2 / 256; /*0x4d3853*/
  v6 = a2[1] / 256; /*0x4d3856*/
  LOWORD(v18) = v5; /*0x4d3860*/
  HIWORD(v18) = v6; /*0x4d3865*/
  v14 = v18; /*0x4d386e*/
  if ( __PAIR32__(v6, v5) == MEMORY[0x8B3D88] ) /*0x4d3872*/
    return 0; /*0x4d387e*/
  v7 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 76))(this); /*0x4d3892*/
  LOWORD(v17) = *v7 / 256; /*0x4d38a5*/
  HIWORD(v17) = v7[1] / 256; /*0x4d38bb*/
  v8 = *this; /*0x4d38c4*/
  v13 = v17; /*0x4d38c6*/
  v11 = (*(int (__thiscall **)(int *))(v8 + 800))(this); /*0x4d38d4*/
  v9 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], &v12) + 80) >> 8; /*0x4d38e8*/
  LOBYTE(v9) = v9 & 1; /*0x4d38eb*/
  v10 = (*(int (__thiscall **)(int *, _DWORD, int, int))(*this + 188))(this, 0, v9, v11); /*0x4d38f3*/
  return MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], &v15, (__int16 *)&v14, v3, v10, (char)&v16, 0); /*0x4d382a*/
}


// ==== 0x004D3920  FootClass::MovementStep  this=BuildingClass  sig=csp ====
int __thiscall FootClass::Destru_vt139(_DWORD *this)
{
  char *MissionControl; // eax
  int v4; // esi

  if ( this->q5A4 ) /*0x4d4203*/
    goto LABEL_7; /*0x4d4203*/
  if ( !this->FiringOccupantIndex ) /*0x4d420d*/
    WinAPI::Wrapper(-2147467261); /*0x4d421c*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->FiringOccupantIndex + 16))(this->FiringOccupantIndex) || this->queuedMission != -1 ) /*0x4d4238*/
  {
LABEL_7:
    MissionControl = MissionClass::GetMissionControl(this); /*0x4d4251*/
    v4 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d4264*/
    return v4 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2); /*0x4d427a*/
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1156))(this, 0, 1); /*0x4d4242*/
    return 1; /*0x4d4248*/
  }
}


// ==== 0x004D4200  FootClass::Destru_vt139  this=FootClass  sig=csp ====
int __thiscall FootClass::Destru_vt139(_DWORD *this)
{
  char *MissionControl; // eax
  int v4; // esi

  if ( this->FootClass_field_5A4 ) /*0x4d4203*/
    goto LABEL_7; /*0x4d4203*/
  if ( !this->Locomotor ) /*0x4d420d*/
    WinAPI::Wrapper(-2147467261); /*0x4d421c*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 16))(this->Locomotor) || this->queuedMission != -1 ) /*0x4d4238*/
  {
LABEL_7:
    MissionControl = MissionClass::GetMissionControl(this); /*0x4d4251*/
    v4 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d4264*/
    return v4 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2); /*0x4d427a*/
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1156))(this, 0, 1); /*0x4d4242*/
    return 1; /*0x4d4248*/
  }
}


// ==== 0x004D4280  FootClass::ApproachEvaluate  this=FootClass  sig=csp ====
int __thiscall UnitClass_ApproachEvaluate(_DWORD *this)
{
  int v2; // eax
  int v3; // ebp
  int v5; // edx
  int v6; // eax
  int v7; // edi
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  char *MissionControl; // eax
  int v20; // esi
  int v21; // eax
  #375 **v22; // edi
  int v23; // ebx
  int v24; // edi
  int v25; // eax
  int v26; // eax
  int v27; // ebx
  int v28; // edi
  _DWORD *v29; // eax
  int v30; // ebx
  int v31; // eax
  int v32; // eax
  _DWORD *v33; // eax
  int v34; // ebx
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  __int16 *v38; // ebp
  char v39; // al
  int v40; // ecx
  _DWORD *v41; // eax
  void *v42; // edi
  int v43; // eax
  int v44; // ebx
  int v45; // ecx
  int v46; // eax
  int v47; // edx
  int v48; // edx
  int v49; // edi
  int v50; // eax
  int v51; // ebx
  int v52; // edi
  int v53; // eax
  _DWORD *v54; // eax
  int v55; // ebx
  int v56; // eax
  int v57; // ecx
  int v58; // eax
  int v59; // eax
  int TileIndex; // [esp-4h] [ebp-D0h]
  int v61; // [esp+0h] [ebp-CCh]
  int v62; // [esp+24h] [ebp-A8h]
  int v63; // [esp+34h] [ebp-98h]
  int v64; // [esp+38h] [ebp-94h]
  int v65; // [esp+38h] [ebp-94h]
  int v66; // [esp+38h] [ebp-94h]
  int v67; // [esp+3Ch] [ebp-90h] BYREF
  int v68; // [esp+40h] [ebp-8Ch]
  int v69; // [esp+44h] [ebp-88h] BYREF
  int v70; // [esp+48h] [ebp-84h] BYREF
  int v71; // [esp+4Ch] [ebp-80h] BYREF
  __int16 v72; // [esp+50h] [ebp-7Ch] BYREF
  int v73; // [esp+54h] [ebp-78h] BYREF
  int v74; // [esp+58h] [ebp-74h] BYREF
  _DWORD v75[3]; // [esp+5Ch] [ebp-70h] BYREF
  int v76; // [esp+68h] [ebp-64h] BYREF
  _BYTE v77[12]; // [esp+6Ch] [ebp-60h] BYREF
  _BYTE v78[4]; // [esp+78h] [ebp-54h] BYREF
  _BYTE v79[20]; // [esp+7Ch] [ebp-50h] BYREF
  _BYTE v80[12]; // [esp+90h] [ebp-3Ch] BYREF
  _BYTE v81[12]; // [esp+9Ch] [ebp-30h] BYREF
  _BYTE v82[12]; // [esp+A8h] [ebp-24h] BYREF
  _BYTE v83[12]; // [esp+B4h] [ebp-18h] BYREF
  _BYTE v84[12]; // [esp+C0h] [ebp-Ch] BYREF

  v2 = (*(int (__thiscall **)(_DWORD *, int))(*this + 796))(this, 2); /*0x4d4290*/
  *((_BYTE *)this + 1072) = 1; /*0x4d429d*/
  v3 = v2 / 256 + 6; /*0x4d42b1*/
  switch ( this->missionStatus )
  {
    case 0:
      v75[0] = *(this + 39); /*0x4d42f7*/
      v5 = *this; /*0x4d42fb*/
      v75[1] = *(this + 40); /*0x4d4300*/
      v75[2] = *(this + 41); /*0x4d430c*/
      v6 = (*(int (__thiscall **)(_DWORD *, int, _DWORD *, _DWORD))(v5 + 964))(this, 2, v75, 0); /*0x4d4314*/
      v68 = v6; /*0x4d431c*/
      if ( v6 )
        v7 = (*(_BYTE *)(v6 + 20) & 2) != 0 ? v6 : 0;
      else
        v7 = 0; /*0x4d4322*/
      v8 = (*(int (__thiscall **)(_DWORD *, int))(*this + 740))(this, v7); /*0x4d4339*/
      if ( v7 ) /*0x4d4341*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(*this + 936))(this, v7, v8) ) /*0x4d434d*/
          goto LABEL_10; /*0x4d434d*/
        v9 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 76))(v7); /*0x4d4365*/
        LOWORD(v63) = *v9 / 256; /*0x4d4379*/
        HIWORD(v63) = v9[1] / 256; /*0x4d4392*/
        v10 = *this; /*0x4d439b*/
        v70 = v63; /*0x4d439f*/
        v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(v10 + 76))(this, v79, 0); /*0x4d43a3*/
        LOWORD(v63) = *v11 / 256; /*0x4d43b9*/
        HIWORD(v63) = v11[1] / 256; /*0x4d43cf*/
        v71 = v63; /*0x4d43d8*/
        v12 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v7 + 188))(v7, 0, -1); /*0x4d43de*/
        v13 = (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*this + 188))(this, 0, v12); /*0x4d43ea*/
        if ( Pathfinding::CalcDistance((int)MEMORY[0x87E8B8], (__int16 *)&v73, &v72, (int)this, v13, (int)v81, 0) < v3 ) /*0x4d4408*/
        {
LABEL_10:
          v14 = (*(int (__thiscall **)(_DWORD *))(*this + 452))(this); /*0x4d4412*/
          this->FootClass_field_5DC = v14; /*0x4d4418*/
          if ( (*(_DWORD *)(v14 + 320) & 0x100) != 0 /*0x4d4432*/
            && !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*this + 188))(this, 0) )
          {
            v15 = *this; /*0x4d4454*/
            v69 = 0; /*0x4d4459*/
            v61 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(v15 + 132))(this) + 1460); /*0x4d4471*/
            v16 = (*(int (__thiscall **)(_DWORD *))(*this + 132))(this); /*0x4d4475*/
            TileIndex = MapClass::GetTileIndex( /*0x4d4498*/
                          MEMORY[0x87F7E8],
                          (__int16 *)(this->FootClass_field_5DC + 36),
                          *(_DWORD *)(v16 + 1460),
                          0);
            v17 = (*(int (__thiscall **)(_DWORD *))(*this + 132))(this); /*0x4d449b*/
            v67 = *LayerClass::Pathfinding_Find( /*0x4d44ca*/
                     MEMORY[0x87F7E8],
                     (int)&v76,
                     &v76,
                     (__int16 *)(this->FootClass_field_5DC + 36),
                     *(_DWORD *)(v17 + 1660),
                     TileIndex,
                     v61,
                     0,
                     1,
                     1,
                     0,
                     1,
                     0,
                     0,
                     (__int16 *)&v69,
                     0,
                     0);
            if ( v67 == MEMORY[0x87F7E8][53608] ) /*0x4d44ce*/
            {
              this->FootClass_field_5DC = 0; /*0x4d4512*/
              return 60; /*0x4d4527*/
            }
            this->FootClass_field_5DC = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v67); /*0x4d44ed*/
          }
          if ( !this->Owner ) /*0x4d44f3*/
          {
            v18 = *(this + 358); /*0x4d44fb*/
            if ( v18 <= 0 ) /*0x4d4503*/
            {
              if ( this->FootClass_field_5A4 ) /*0x4d4528*/
                TechnoClass::SetFocus(this, this->FootClass_field_5A4); /*0x4d4533*/
              else
                TechnoClass::SetFocus(this, this->FootClass_field_5DC); /*0x4d453e*/
            }
            else
            {
              TechnoClass::SetFocus(this, *(_DWORD *)(this->q58C + 4 * v18 - 4)); /*0x4d4510*/
            }
          }
          (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, 0, 1); /*0x4d454a*/
          (*(void (__thiscall **)(_DWORD *, int))(*this + 968))(this, v68); /*0x4d4559*/
          goto LABEL_22; /*0x4d4559*/
        }
      }
      if ( !this->FootClass_field_5A4 ) /*0x4d45a2*/
        goto LABEL_28; /*0x4d45a2*/
      if ( !this->Locomotor ) /*0x4d45aa*/
        WinAPI::Wrapper(-2147467261); /*0x4d45b7*/
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 16))(this->Locomotor) ) /*0x4d45c5*/
      {
LABEL_28:
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1156))(this, 0, 1); /*0x4d45d3*/
        goto LABEL_70; /*0x4d45d3*/
      }
LABEL_23:
      MissionControl = MissionClass::GetMissionControl(this); /*0x4d4569*/
      v20 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d458e*/
      return v20 + Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, 2); /*0x4d45a1*/
    case 1:
      v21 = this->sprayOffsetIndex; /*0x4d45d8*/
      if ( v21 )
        v22 = (*(_BYTE *)(v21 + 20) & 2) != 0 ? (#375 **)v21 : 0;
      else
        v22 = 0; /*0x4d45e2*/
      v23 = (*(int (__thiscall **)(_DWORD *, #375 **))(*this + 740))(this, v22); /*0x4d45ff*/
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 816))(this) ) /*0x4d460d*/
        goto LABEL_41; /*0x4d460d*/
      if ( !v22 ) /*0x4d4615*/
        goto LABEL_38; /*0x4d4615*/
      if ( (*((int (__thiscall **)(#375 **))*v22 + 11))(v22) == 6 /*0x4d4651*/
        && (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->focus, v22[135])
        && BuildingClass::GetHealthRatio((int *)v22) > *(double *)(MEMORY[0x87F7E8][7806] + 5896) )
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 968))(this, 0); /*0x4d4659*/
      }
      else
      {
LABEL_41:
        if ( v22 ) /*0x4d46a3*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, #375 **, int))(*this + 936))(this, v22, v23) ) /*0x4d46ab*/
            goto LABEL_44; /*0x4d46ab*/
          v29 = (_DWORD *)(*((int (__thiscall **)(#375 **, _BYTE *))*v22 + 19))(v22, v83); /*0x4d46c3*/
          v30 = this->FootClass_field_5DC; /*0x4d46c8*/
          LOWORD(v64) = *v29 / 256; /*0x4d46e0*/
          HIWORD(v64) = v29[1] / 256; /*0x4d46f4*/
          v69 = v64; /*0x4d46fd*/
          v62 = (*((int (__thiscall **)(#375 **, _DWORD, int))*v22 + 47))(v22, 0, -1); /*0x4d470b*/
          v31 = *(_DWORD *)(v30 + 320) >> 8; /*0x4d4712*/
          LOBYTE(v31) = v31 & 1; /*0x4d4715*/
          if ( Pathfinding::CalcDistance( /*0x4d472e*/
                 (int)MEMORY[0x87E8B8],
                 (__int16 *)(v30 + 36),
                 (__int16 *)&v70,
                 (int)this,
                 v31,
                 v62,
                 0) < v3 )
          {
LABEL_44:
            (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 1340))(this, 0); /*0x4d473a*/
            if ( this->sprayOffsetIndex ) /*0x4d4740*/
              goto LABEL_23; /*0x4d4748*/
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, this->Owner, 1); /*0x4d475b*/
            TechnoClass::SetFocus(this, 0); /*0x4d4766*/
            this->FootClass_field_5DC = 0; /*0x4d476b*/
            this->missionStatus = 0; /*0x4d4771*/
            return 45; /*0x4d4786*/
          }
        }
      }
LABEL_38:
      if ( !this->sprayOffsetIndex )
      {
        v24 = *this; /*0x4d4673*/
        v25 = (*(int (__thiscall **)(_DWORD, _BYTE *, _DWORD))(*(_DWORD *)this->FootClass_field_5DC + 72))(this->FootClass_field_5DC, v77, 0); /*0x4d467e*/
        v26 = (*(int (__thiscall **)(_DWORD *, int, int))(v24 + 964))(this, 2, v25); /*0x4d4686*/
        v27 = v26; /*0x4d468c*/
        v68 = v26; /*0x4d4690*/
        v28 = v26 ? ((*(_BYTE *)(v26 + 20) & 2) != 0 ? v26 : 0) : 0;
        v32 = (*(int (__thiscall **)(_DWORD *, int))(*this + 740))(this, v28); /*0x4d479a*/
        if ( v28 ) /*0x4d47a2*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(*this + 936))(this, v28, v32) ) /*0x4d47ae*/
          {
LABEL_51:
            (*(void (__thiscall **)(_DWORD *, int))(*this + 968))(this, v27); /*0x4d4835*/
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, 0, 1); /*0x4d4848*/
            return 1; /*0x4d485d*/
          }
          v33 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v28 + 76))(v28, v78); /*0x4d47c3*/
          v34 = this->FootClass_field_5DC; /*0x4d47c8*/
          LOWORD(v65) = *v33 / 256; /*0x4d47e0*/
          HIWORD(v65) = v33[1] / 256; /*0x4d47f6*/
          v70 = v65; /*0x4d47ff*/
          v35 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v28 + 188))(v28, 0, -1); /*0x4d4805*/
          v36 = *(_DWORD *)(v34 + 320) >> 8; /*0x4d4812*/
          LOBYTE(v36) = v36 & 1; /*0x4d4815*/
          if ( Pathfinding::CalcDistance( /*0x4d482f*/
                 (int)MEMORY[0x87E8B8],
                 (__int16 *)(v34 + 36),
                 (__int16 *)&v71,
                 (int)this,
                 v36,
                 v35,
                 0) < v3 )
          {
            v27 = v68; /*0x4d4831*/
            goto LABEL_51; /*0x4d4831*/
          }
        }
      }
      v37 = *this; /*0x4d485e*/
      this->missionStatus = 2; /*0x4d4864*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(v37 + 968))(this, 0); /*0x4d486e*/
      if ( this->Owner ) /*0x4d4874*/
      {
        v38 = (__int16 *)(*(int (__thiscall **)(_DWORD *))(*this + 452))(this); /*0x4d488c*/
        v39 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 188))(this, 0); /*0x4d4894*/
        v40 = this->Owner; /*0x4d489a*/
        LOBYTE(v68) = v39; /*0x4d48a0*/
        v41 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v40 + 72))(v40, v80); /*0x4d48ab*/
        v42 = Coord::To_Cell(MEMORY[0x87F7E8], v41); /*0x4d48b9*/
        v43 = this->FootClass_field_5DC; /*0x4d48bb*/
        v44 = v68; /*0x4d48c1*/
        v45 = *(_DWORD *)(v43 + 320) >> 8; /*0x4d48d0*/
        LOBYTE(v45) = v45 & 1; /*0x4d48d3*/
        v38 += 18; /*0x4d48d6*/
        v46 = Pathfinding::CalcDistance((int)MEMORY[0x87E8B8], v38, (__int16 *)(v43 + 36), (int)this, v68, v45, -1); /*0x4d48e3*/
        v47 = *((_DWORD *)v42 + 80) >> 8; /*0x4d48f0*/
        LOBYTE(v47) = v47 & 1; /*0x4d48f3*/
        v68 = v46; /*0x4d4903*/
        if ( v46 >= Pathfinding::CalcDistance((int)MEMORY[0x87E8B8], v38, (__int16 *)v42 + 18, (int)this, v44, v47, -1) ) /*0x4d4910*/
          (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, this->Owner, 1); /*0x4d4942*/
        else
          (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, this->FootClass_field_5DC, 1); /*0x4d491f*/
        return 1; /*0x4d4928*/
      }
      else
      {
        v48 = *this; /*0x4d4958*/
        this->missionStatus = 0; /*0x4d4960*/
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(v48 + 1156))(this, 0, 1); /*0x4d496a*/
        this->missionStatus = 3; /*0x4d4970*/
        return 1; /*0x4d497d*/
      }
    case 2:
      v49 = *this; /*0x4d4990*/
      v50 = (*(int (__thiscall **)(_DWORD, _BYTE *, _DWORD))(*(_DWORD *)this->FootClass_field_5DC + 72))(this->FootClass_field_5DC, v82, 0); /*0x4d499b*/
      v51 = (*(int (__thiscall **)(_DWORD *, int, int))(v49 + 964))(this, 2, v50); /*0x4d49a9*/
      v68 = v51; /*0x4d49ad*/
      if ( v51 )
        v52 = (*(_BYTE *)(v51 + 20) & 2) != 0 ? v51 : 0;
      else
        v52 = 0; /*0x4d49b3*/
      v53 = (*(int (__thiscall **)(_DWORD *, int))(*this + 740))(this, v52); /*0x4d49c9*/
      if ( !v52 ) /*0x4d49d1*/
        goto LABEL_66; /*0x4d49d1*/
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(*this + 936))(this, v52, v53) ) /*0x4d49dd*/
        goto LABEL_65; /*0x4d49e5*/
      v54 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v52 + 76))(v52, v84); /*0x4d49f9*/
      v55 = this->FootClass_field_5DC; /*0x4d49fe*/
      LOWORD(v66) = *v54 / 256; /*0x4d4a16*/
      HIWORD(v66) = v54[1] / 256; /*0x4d4a2c*/
      v73 = v66; /*0x4d4a35*/
      v56 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v52 + 188))(v52, 0, -1); /*0x4d4a3b*/
      v57 = *(_DWORD *)(v55 + 320) >> 8; /*0x4d4a48*/
      LOBYTE(v57) = v57 & 1; /*0x4d4a4b*/
      if ( Pathfinding::CalcDistance( /*0x4d4a65*/
             (int)MEMORY[0x87E8B8],
             (__int16 *)(v55 + 36),
             (__int16 *)&v74,
             (int)this,
             v57,
             v56,
             0) < v3 )
      {
        v51 = v68; /*0x4d4a67*/
LABEL_65:
        (*(void (__thiscall **)(_DWORD *, int))(*this + 968))(this, v51); /*0x4d4a6b*/
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, 0, 1); /*0x4d4a7e*/
LABEL_22:
        this->missionStatus = 1; /*0x4d455f*/
        goto LABEL_23; /*0x4d455f*/
      }
LABEL_66:
      if ( this->FootClass_field_5A4 ) /*0x4d4a89*/
        goto LABEL_23; /*0x4d4a91*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 968))(this, 0); /*0x4d4a9e*/
      v58 = this->Owner; /*0x4d4aa4*/
      if ( v58 ) /*0x4d4aac*/
      {
        (*(void (__thiscall **)(_DWORD *, int, int))(*this + 1152))(this, v58, 1); /*0x4d4ab5*/
        TechnoClass::SetFocus(this, 0); /*0x4d4abe*/
        this->missionStatus = 0; /*0x4d4ac3*/
        this->FootClass_field_5DC = 0; /*0x4d4ac9*/
        goto LABEL_23; /*0x4d4acf*/
      }
      v59 = *this; /*0x4d4ad4*/
      this->missionStatus = 0; /*0x4d4ad8*/
      (*(void (__thiscall **)(_DWORD *, _DWORD, int))(v59 + 1156))(this, 0, 1); /*0x4d4ae1*/
LABEL_70:
      this->missionStatus = 3; /*0x4d4ae7*/
      return 1; /*0x4d4af4*/
    case 3:
      if ( !this->FootClass_field_5A4 ) /*0x4d42cc*/
        goto LABEL_23; /*0x4d42cc*/
      this->missionStatus = 0; /*0x4d42d2*/
      return 1; /*0x4d42eb*/
    default:
      goto LABEL_23;
  }
}


// ==== 0x004D4B20  FootClass::CheckVoiceResponse  this=FootClass  sig=csp ====
int __fastcall FootClass_CheckVoiceResponse(_DWORD *a1)
{
  float *v2; // edi
  int v3; // ecx
  _BYTE *v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  char *MissionControl; // eax
  int v8; // esi
  char v10[12]; // [esp+10h] [ebp-Ch] BYREF

  if ( a1 )
    v2 = (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) == 15 ? (float *)a1 : 0;
  else
    v2 = 0; /*0x4d4b2b*/
  v3 = a1[173]; /*0x4d4b43*/
  if ( v3 && (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) == 6 ) /*0x4d4b55*/
  {
    if ( a1[361] ) /*0x4d4b57*/
      goto LABEL_18; /*0x4d4b5f*/
    if ( v2 ) /*0x4d4b67*/
    {
      if ( *(_BYTE *)(*((_DWORD *)v2 + 432) + 3778) /*0x4d4baa*/
        || TechnoClass::HasVoiceResponse(v2, 14)
        || (v4 = (_BYTE *)*((_DWORD *)v2 + 432), v4[3779])
        || v4[3764]
        || v4[3765]
        || v4[3774] )
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*a1 + 1152))(a1, a1[173], 1); /*0x4d4bc1*/
      }
    }
  }
  if ( !a1[361] ) /*0x4d4bc7*/
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*a1 + 1156))(a1, 0, 1); /*0x4d4bd9*/
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*a1 + 72))(a1, v10); /*0x4d4be8*/
    v6 = Coord::To_Cell(&MEMORY[0x87F7E8], v5); /*0x4d4bf1*/
    if ( Cell::IsBridge(v6) ) /*0x4d4bf8*/
      (*(void (__thiscall **)(_DWORD *, int *, int, _DWORD))(*a1 + 372))(a1, &MEMORY[0x8B3DA8], 1, 0); /*0x4d4c0e*/
  }
LABEL_18:
  if ( !a1[173] /*0x4d4c3f*/
    && !(unsigned __int8)House::IsCurrentPlayer((#375 *)a1[135])
    && ((*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) != 15 || !*(_BYTE *)(a1[432] + 3764)) )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 968))(a1, 0); /*0x4d4c4f*/
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*a1 + 1152))(a1, 0, 1); /*0x4d4c5d*/
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*a1 + 488))(a1, 15, 0); /*0x4d4c6b*/
  }
  MissionControl = MissionClass::GetMissionControl(a1); /*0x4d4c73*/
  v8 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d4c86*/
  return v8 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2); /*0x4d4c9e*/
}


// ==== 0x004D4CB0  FootClass::ProcessMissionVoice  this=FootClass  sig=csp ====
int __fastcall FootClass_ProcessMissionVoice(_DWORD *a1)
{
  float *v2; // edi
  int v3; // ecx
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  char *MissionControl; // eax
  int v7; // esi
  char v9[12]; // [esp+10h] [ebp-Ch] BYREF

  if ( a1 )
    v2 = (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) == 15 ? (float *)a1 : 0;
  else
    v2 = 0; /*0x4d4cbb*/
  v3 = a1[173]; /*0x4d4cd3*/
  if ( v3 && (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) == 6 ) /*0x4d4ce5*/
  {
    if ( a1[361] ) /*0x4d4ce7*/
      goto LABEL_15; /*0x4d4cef*/
    if ( v2 /*0x4d4d1c*/
      && (*(_BYTE *)(*((_DWORD *)v2 + 432) + 3778)
       || TechnoClass::HasVoiceResponse(v2, 14)
       || *(_BYTE *)(*((_DWORD *)v2 + 432) + 3779)) )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*a1 + 1152))(a1, a1[173], 1); /*0x4d4d33*/
    }
  }
  if ( !a1[361] ) /*0x4d4d39*/
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*a1 + 1156))(a1, 0, 1); /*0x4d4d4b*/
    v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*a1 + 72))(a1, v9); /*0x4d4d5a*/
    v5 = Coord::To_Cell(&MEMORY[0x87F7E8], v4); /*0x4d4d63*/
    if ( Cell::IsBridge(v5) ) /*0x4d4d6a*/
      (*(void (__thiscall **)(_DWORD *, int *, int, _DWORD))(*a1 + 372))(a1, &MEMORY[0x8B3DA8], 1, 0); /*0x4d4d80*/
  }
LABEL_15:
  MissionControl = MissionClass::GetMissionControl(a1); /*0x4d4d86*/
  v7 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d4d9b*/
  return v7 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2); /*0x4d4db3*/
}


// ==== 0x004D4DC0  FootClass::ScanTarget  this=FootClass  sig=csp ====
int __fastcall InfantryClass::ScanTarget(int *a1)
{
  int v2; // edi
  __int16 *PlacementCellsAlt; // eax
  void *v4; // eax
  int v5; // edx
  int v6; // eax
  char *MissionControl; // eax
  int v8; // edi
  int v9; // ebp
  int *v10; // eax
  int v11; // edi
  int v12; // ebx
  int *v13; // eax
  int v14; // ecx
  double v15; // st7
  int result; // eax
  int v17; // [esp+48h] [ebp-24h] BYREF
  int v18; // [esp+4Ch] [ebp-20h]
  int v19; // [esp+50h] [ebp-1Ch]
  _BYTE v20[12]; // [esp+54h] [ebp-18h] BYREF
  _BYTE v21[12]; // [esp+60h] [ebp-Ch] BYREF

  if ( *(_BYTE *)((*(int (__thiscall **)(int *))(*a1 + 132))(a1) + 912) /*0x4d4dde*/
    && !(*(int (__thiscall **)(int *))(*a1 + 456))(a1) )
  {
    v2 = *a1; /*0x4d4de8*/
    PlacementCellsAlt = (__int16 *)MapClass::FindPlacementCellsAlt((char *)a1, (IUnknown *)&v17, (IUnknown *)a1); /*0x4d4df4*/
    v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], PlacementCellsAlt); /*0x4d4dff*/
    (*(void (__thiscall **)(int *, void *, int))(v2 + 1152))(a1, v4, 1); /*0x4d4e07*/
  }
  if ( *((_BYTE *)a1 + 1678) ) /*0x4d4e0d*/
  {
    v17 = a1[39]; /*0x4d4e21*/
    v5 = *a1; /*0x4d4e25*/
    v18 = a1[40]; /*0x4d4e2a*/
    v19 = a1[41]; /*0x4d4e36*/
    v6 = (*(int (__thiscall **)(int *, int, int *, _DWORD))(v5 + 964))(a1, 1, &v17, 0); /*0x4d4e3e*/
    if ( v6 ) /*0x4d4e46*/
    {
      (*(void (__thiscall **)(int *, int))(*a1 + 968))(a1, v6); /*0x4d4e4d*/
      *((_BYTE *)a1 + 1678) = 0; /*0x4d4e53*/
    }
  }
  if ( a1[173] ) /*0x4d4e5a*/
    (*(void (__thiscall **)(int *, _DWORD))(*a1 + 1340))(a1, 0); /*0x4d4e6a*/
  else
    (*(void (__thiscall **)(int *, _DWORD, int))(*a1 + 1156))(a1, 0, 1); /*0x4d4e7a*/
  MissionControl = MissionClass::GetMissionControl(a1); /*0x4d4e82*/
  v8 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d4e95*/
  v9 = v8 + Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)2); /*0x4d4eb3*/
  if ( !a1[173]
    || (!a1
     || (*(int (__thiscall **)(int *))(*a1 + 44))(a1) != 15
     || !*(_BYTE *)(*((*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 15 ? a1 + 432 : (int *)1728) + 1685))
    && (!*(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(*a1 + 1016))(a1, 0)
     || *(int *)(*(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(*a1 + 1016))(a1, 0) + 180) > 512) )
  {
    return v9; /*0x4d4f1c*/
  }
  v10 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1[173] + 72))(a1[173], v20); /*0x4d4f30*/
  v11 = *v10; /*0x4d4f33*/
  v12 = v10[1]; /*0x4d4f35*/
  v13 = (int *)(*(int (__thiscall **)(int *, _BYTE *))(*a1 + 72))(a1, v21); /*0x4d4f41*/
  v14 = *v13; /*0x4d4f44*/
  v18 = v13[1] - v12; /*0x4d4f4d*/
  v17 = v14 - v11; /*0x4d4f51*/
  v15 = Math::Sqrt((double)(v14 - v11) * (double)(v14 - v11) + (double)v18 * (double)v18); /*0x4d4f71*/
  v17 = Math::RoundToInt(v15); /*0x4d4f83*/
  if ( v17 > 768 ) /*0x4d4f88*/
    return v9; /*0x4d4fa9*/
  result = v9; /*0x4d4f99*/
  if ( (double)v17 >= 281.6 ) /*0x4d4f9b*/
    return v9 / 2; /*0x4d4fa3*/
  return result; /*0x4d4fa0*/
}


// ==== 0x004D4FC0  ObjectClass::method_4D4FC0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_4D4FC0(void *this)
{
  int v2; // ebx
  _WORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // ebp
  int v9; // [esp+10h] [ebp-Ch]
  int v10; // [esp+14h] [ebp-8h] BYREF
  char v11[4]; // [esp+18h] [ebp-4h] BYREF

  v2 = 0; /*0x4d4fc9*/
  while ( 1 ) /*0x4d4fd4*/
  {
    v3 = (_WORD *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)this + 440))(this, v11); /*0x4d4fd4*/
    LOWORD(v9) = LOWORD(MEMORY[0x89F688][v2 & 7]) + *v3; /*0x4d4ff8*/
    HIWORD(v9) = v3[1] + HIWORD(MEMORY[0x89F688][v2 & 7]); /*0x4d4ffe*/
    v10 = v9; /*0x4d500c*/
    v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v10); /*0x4d5010*/
    v5 = Cell::IsBridge(v4); /*0x4d5017*/
    v6 = v5; /*0x4d501c*/
    if ( v5 ) /*0x4d5020*/
    {
      if ( *(_BYTE *)(v5[328] + 5493) ) /*0x4d5028*/
      {
        v7 = (*(int (__thiscall **)(_DWORD *))(*v5 + 60))(v5); /*0x4d5039*/
        if ( v7 == (*(int (__thiscall **)(void *))(*(_DWORD *)this + 60))(this) ) /*0x4d5044*/
          break; /*0x4d5044*/
      }
    }
    if ( ++v2 >= 8 ) /*0x4d504a*/
      return 0; /*0x4d5059*/
  }
  return v6; /*0x4d5050*/
}


// ==== 0x004D5070  FootClass::FindMovePosition  this=FootClass  sig=csp ====
char *__thiscall FootClass::FindMovePosition(TechnoClass *this)
{
  char *MissionControl; // eax
  int v4; // edx
  int v5; // ebx
  _WORD *v6; // eax
  int v7; // edx
  _DWORD *v8; // eax
  MouseClass *v9; // eax
  MouseClass *v10; // edi
  int v11; // ebp
  int v12; // eax
  int v13; // edi
  __int16 *PlacementCellsAlt; // eax
  void *v15; // eax
  char *v16; // eax
  int v17; // ebp
  int sprayOffsetIndex; // ecx
  void *slaveManager; // edx
  char *originalOwnerHouse; // eax
  char *v21; // edi
  void *v22; // esi
  int v23; // [esp+Ch] [ebp-Ch]
  int v24; // [esp+10h] [ebp-8h] BYREF
  int v25; // [esp+14h] [ebp-4h] BYREF

  if ( *((_BYTE *)this + 1679) ) /*0x4d5076*/
  {
    (*(void (__thiscall **)(TechnoClass *))(*(_DWORD *)this->__pad_0 + 832))(this); /*0x4d5082*/
LABEL_7:
    MissionControl = MissionClass::GetMissionControl(this); /*0x4d50b4*/
    return (char *)Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d50cd*/
  }
  if ( *((_BYTE *)this + 1680) ) /*0x4d508a*/
  {
    (*(void (__thiscall **)(TechnoClass *))(*(_DWORD *)this->__pad_0 + 840))(this); /*0x4d5098*/
    goto LABEL_7; /*0x4d509e*/
  }
  if ( *((_BYTE *)this + 1681) ) /*0x4d50a0*/
  {
    (*(void (__thiscall **)(TechnoClass *))(*(_DWORD *)this->__pad_0 + 844))(this); /*0x4d50ae*/
    goto LABEL_7; /*0x4d50ae*/
  }
  v4 = *(_DWORD *)this->__pad_0; /*0x4d50d4*/
  if ( this->sprayOffsetIndex ) /*0x4d50ce*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(v4 + 132))(this) + 912) /*0x4d51f6*/
      && !(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)this->__pad_0 + 456))(this) )
    {
      v13 = *(_DWORD *)this->__pad_0; /*0x4d5200*/
      PlacementCellsAlt = (__int16 *)MapClass::FindPlacementCellsAlt(this->__pad_0, (IUnknown *)&v25, (IUnknown *)this); /*0x4d520c*/
      v15 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], PlacementCellsAlt); /*0x4d5217*/
      (*(void (__thiscall **)(TechnoClass *, void *, int))(v13 + 1152))(this, v15, 1); /*0x4d521f*/
    }
  }
  else if ( *(_DWORD *)(*(int (__thiscall **)(TechnoClass *, int))(v4 + 1016))(this, 1) /*0x4d5108*/
         && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(TechnoClass *, int))(*(_DWORD *)this->__pad_0 + 1016))(
                                                this,
                                                1)
                                 + 172)
                     + 344) )
  {
    v5 = 0; /*0x4d5116*/
    while ( 1 ) /*0x4d5121*/
    {
      v6 = (_WORD *)(*(int (__thiscall **)(TechnoClass *, int *))(*(_DWORD *)this->__pad_0 + 440))(this, &v25); /*0x4d5121*/
      v7 = v5 & 7; /*0x4d5129*/
      LOWORD(v23) = *v6 + *(_WORD *)&stru_89E138.__pad_14B0[4 * v7 + 160]; /*0x4d514a*/
      HIWORD(v23) = v6[1] + *(_WORD *)&stru_89E138.__pad_14B0[4 * v7 + 162]; /*0x4d514f*/
      v24 = v23; /*0x4d515e*/
      v8 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v24); /*0x4d5162*/
      v9 = (MouseClass *)Cell::IsBridge(v8); /*0x4d5169*/
      v10 = v9; /*0x4d516e*/
      if ( v9 ) /*0x4d5172*/
      {
        if ( *(_BYTE *)(*(_DWORD *)&v9->__pad_1D4[844] + 5493) ) /*0x4d517a*/
        {
          v11 = (*(int (__thiscall **)(MouseClass *))(v9->field_0 + 60))(v9); /*0x4d518b*/
          if ( v11 == (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)this->__pad_0 + 60))(this) ) /*0x4d5196*/
            break; /*0x4d5196*/
        }
      }
      if ( ++v5 >= 8 ) /*0x4d519c*/
        goto LABEL_16; /*0x4d519c*/
    }
    if ( !v10 ) /*0x4d51b0*/
    {
LABEL_16:
      (*(void (__thiscall **)(TechnoClass *))(*(_DWORD *)this->__pad_0 + 1144))(this); /*0x4d51a2*/
      goto LABEL_23; /*0x4d51ac*/
    }
    (*(void (__thiscall **)(TechnoClass *, MouseClass *))(*(_DWORD *)this->__pad_0 + 968))(this, v10); /*0x4d51b7*/
    v12 = *(_DWORD *)this->__pad_0; /*0x4d51bd*/
    *((_BYTE *)this + 1678) = 1; /*0x4d51c5*/
    (*(void (__thiscall **)(TechnoClass *, int, _DWORD))(v12 + 488))(this, 1, 0); /*0x4d51cc*/
  }
  else
  {
    (*(void (__thiscall **)(TechnoClass *))(*(_DWORD *)this->__pad_0 + 1144))(this); /*0x4d51d8*/
  }
LABEL_23:
  v16 = MissionClass::GetMissionControl(this); /*0x4d5225*/
  v17 = Math::RoundToInt(*((double *)v16 + 2) * 900.0); /*0x4d523c*/
  if ( this /*0x4d5285*/
    && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)this->__pad_0 + 44))(this) == 15
    && !(unsigned __int8)House::IsCurrentPlayer((#375 *)this->focus)
    && (*(_BYTE *)(*((_DWORD *)this + 432) + 3778) || TechnoClass::HasVoiceResponse(this, 14))
    && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)this->__pad_0 + 388))(this) != 17 )
  {
    sprayOffsetIndex = this->sprayOffsetIndex; /*0x4d5287*/
    if ( sprayOffsetIndex ) /*0x4d528f*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)sprayOffsetIndex + 44))(sprayOffsetIndex) == 6 ) /*0x4d5299*/
        (*(void (__thiscall **)(TechnoClass *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 488))(this, 17, 0); /*0x4d52a3*/
    }
  }
  slaveManager = this->slaveManager; /*0x4d52a9*/
  originalOwnerHouse = (char *)this->originalOwnerHouse; /*0x4d52af*/
  v21 = 0; /*0x4d52bb*/
  if ( slaveManager != (void *)-1 ) /*0x4d52c0*/
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (int)slaveManager >= (int)originalOwnerHouse ) /*0x4d52c8*/
    {
LABEL_41:
      if ( !*(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)this->__pad_0 + 132))(this) + 1712) /*0x4d531d*/
        || this->audioController3[2] <= 0 )
      {
        return (char *)(v17 /*0x4d5336*/
                      + Random::Range(
                          (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                          0,
                          (IUnknown *)2));
      }
      return v21; /*0x4d5336*/
    }
    originalOwnerHouse -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (_DWORD)slaveManager; /*0x4d52ca*/
  }
  if ( !originalOwnerHouse ) /*0x4d52ce*/
    goto LABEL_41; /*0x4d52ce*/
  v21 = (char *)this->originalOwnerHouse; /*0x4d52d0*/
  v22 = this->slaveManager; /*0x4d52d6*/
  if ( v22 == (void *)-1 ) /*0x4d52df*/
    return v21; /*0x4d5338*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (int)v22 >= (int)v21 ) /*0x4d52e7*/
    return 0; /*0x4d52f7*/
  else
    return &v21[-(*(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (_DWORD)v22)]; /*0x4d52eb*/
}


// ==== 0x004D5350  FootClass::ProcessDeploy  this=FootClass  sig=csp ====
int __fastcall InfantryClass_ProcessDeploy(#375 **a1)
{
  #375 *v2; // edx
  int v3; // eax
  #375 **v4; // edi
  int v5; // eax
  #375 *v6; // ecx
  #375 *v7; // edi
  void *v8; // eax
  char *MissionControl; // eax
  int v10; // esi
  int v12; // [esp+8h] [ebp-14h] BYREF
  int v13; // [esp+Ch] [ebp-10h] BYREF
  _DWORD v14[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( *(_BYTE *)((*((int (__thiscall **)(#375 **))*a1 + 33))(a1) + 1748) /*0x4d5392*/
    || (v14[0] = a1[39],
        v2 = *a1,
        v14[1] = a1[40],
        v14[2] = a1[41],
        !(*((unsigned __int8 (__thiscall **)(#375 **, _DWORD *, _DWORD))v2 + 231))(a1, v14, 0)) )
  {
    if ( (unsigned __int8)House::IsCurrentPlayer(a1[135]) || MEMORY[0xA8B238][0] ) /*0x4d5504*/
    {
      (*((void (__thiscall **)(#375 **))*a1 + 286))(a1); /*0x4d557c*/
    }
    else
    {
      v12 = MEMORY[0x8B3D88]; /*0x4d5510*/
      v12 = *HouseClass::GetCurrentOption(HouseClass_Player, &v13); /*0x4d5529*/
      if ( v12 != MEMORY[0x8B3D88] ) /*0x4d552d*/
      {
        if ( a1[182] ) /*0x4d553d*/
          ((void (*)(void))FactoryClass::ResetProductionTimers)(); /*0x4d5547*/
        v7 = *a1; /*0x4d554c*/
        v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v12); /*0x4d555a*/
        (*((void (__thiscall **)(#375 **, void *, int))v7 + 288))(a1, v8, 1); /*0x4d5562*/
        (*((void (__thiscall **)(#375 **, int, int))*a1 + 122))(a1, 2, 1); /*0x4d5570*/
      }
    }
    goto LABEL_25; /*0x4d5576*/
  }
  v3 = (*((int (__thiscall **)(#375 **))*a1 + 11))(a1); /*0x4d53a4*/
  v4 = v3 == 15 ? a1 : 0;
  if ( !v4 ) /*0x4d53b4*/
  {
    (*((void (__thiscall **)(#375 **, _DWORD))*a1 + 335))(a1, 0); /*0x4d54e3*/
    goto LABEL_25; /*0x4d54e9*/
  }
  v5 = (int)*(v3 == 15 ? a1 + 432 : (#375 **)1728);
  if ( *(_BYTE *)(v5 + 3779) && !*(_BYTE *)(v5 + 3778) && !TechnoClass::HasVoiceResponse((float *)v4, 14) ) /*0x4d53df*/
  {
LABEL_14:
    (*((void (__thiscall **)(#375 **, #375 *, int))*a1 + 288))(a1, a1[173], 1); /*0x4d547c*/
    (*((void (__thiscall **)(#375 **, int, _DWORD))*a1 + 122))(a1, 8, 0); /*0x4d5497*/
    if ( !(*((unsigned __int8 (__thiscall **)(#375 **))*a1 + 128))(a1) ) /*0x4d54a9*/
      goto LABEL_25; /*0x4d54a9*/
    goto LABEL_12; /*0x4d54a9*/
  }
  if ( !*((_BYTE *)v4[432] + 3778) && !TechnoClass::HasVoiceResponse((float *)v4, 14) /*0x4d5428*/
    || (v6 = a1[173]) == 0
    || (*(int (__thiscall **)(#375 *))(*(_DWORD *)v6 + 44))(v6) != 6 )
  {
    if ( !*((_BYTE *)v4[432] + 3782) ) /*0x4d547a*/
    {
      (*((void (__thiscall **)(#375 **, _DWORD, int))*a1 + 288))(a1, 0, 1); /*0x4d54c6*/
      (*((void (__thiscall **)(#375 **, _DWORD))*a1 + 335))(a1, 0); /*0x4d54d2*/
      goto LABEL_25; /*0x4d54d8*/
    }
    goto LABEL_14; /*0x4d547a*/
  }
  (*((void (__thiscall **)(#375 **, #375 *, int))*a1 + 288))(a1, a1[173], 1); /*0x4d5437*/
  (*((void (__thiscall **)(#375 **, int, _DWORD))*a1 + 122))(a1, 17, 0); /*0x4d5445*/
  if ( (*((unsigned __int8 (__thiscall **)(#375 **))*a1 + 128))(a1) ) /*0x4d544f*/
LABEL_12:
    (*((void (__thiscall **)(#375 **))*a1 + 123))(a1); /*0x4d545d*/
LABEL_25:
  MissionControl = MissionClass::GetMissionControl(a1); /*0x4d5582*/
  v10 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d55a7*/
  return v10 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2); /*0x4d55b0*/
}


// ==== 0x004D55C0  FootClass::PlayCOM_audio  this=FootClass  sig=csp ====
char __thiscall FootClass_PlayCOM_audio(_DWORD *this)
{
  if ( !this->Locomotor ) /*0x4d55c3*/
    WinAPI::Wrapper(-2147467261); /*0x4d55d2*/
  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 72))(this->Locomotor); /*0x4d55e0*/
  return 0; /*0x4d55e5*/
}


// ==== 0x004D55F0  FootClass::Destru_vt319  this=FootClass  sig=csp ====
BOOL __thiscall FootClass::Destru_vt319(_DWORD *this, IUnknown *aP1)
{
  if ( !this->Locomotor ) /*0x4d5602*/
    WinAPI::Wrapper(-2147467261); /*0x4d5611*/
  (*(void (__stdcall **)(_DWORD, int, int, int))(*(_DWORD *)this->Locomotor + 68))( /*0x4d562c*/
    this->Locomotor,
    aP1->field_0,
    aP1->field_4,
    aP1->field_8);
  if ( !this->Locomotor ) /*0x4d562f*/
    WinAPI::Wrapper(-2147467261); /*0x4d563e*/
  return (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 16))(this->Locomotor) != 0; /*0x4d5651*/
}


// ==== 0x004D5660  FootClass::EnterAttackState  this=FootClass  sig=csp ====
int __thiscall FootClass::EnterAttackState(#377 *this)
{
  int v2; // edx

  (*(void (__thiscall **)(#377 *, _DWORD, int))(*(_DWORD *)this + 1152))(this, 0, 1); /*0x4d5669*/
  v2 = *(_DWORD *)this; /*0x4d566f*/
  *((_DWORD *)this + 376) = -1; /*0x4d5673*/
  (*(void (__thiscall **)(#377 *))(v2 + 1280))(this); /*0x4d567d*/
  return TechnoClass::ProcessDeploymentState(this); /*0x4d568a*/
}


// ==== 0x004D6AA0  FootClass::FindAITarget  this=FootClass  sig=csp ====
int __fastcall FootClass::FindAITarget(_DWORD *a1)
{
  char *MissionControl; // eax
  int *v4; // eax
  int v5; // ecx
  AbstractClass *v6; // ecx
  IUnknown *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  IUnknown *v10; // eax
  int v11; // ecx
  int v12; // eax
  AbstractClass *v13; // ecx
  _DWORD *v14; // eax
  IUnknown *TileIndex; // eax
  IUnknown *v16; // eax
  int **v17; // ecx
  IUnknown *v18; // eax
  TechnoClass *v19; // edi
  int ecx43; // ecx
  IUnknown *v20; // edi
  AbstractClass *v21; // eax
  BuildingTypeClass *v22; // edi
  int v24; // eax
  int v25; // ebp
  _WORD *v26; // eax
  __int16 v27; // cx
  _DWORD *v28; // eax
  BuildingTypeClass *eax65; // eax
  BuildingTypeClass *v29; // edi
  BuildingTypeClass *v30; // ebx
  BuildingTypeClass *v31; // eax
  char *v33; // eax
  int v34; // ebp
  int v35; // ebp
  int eax80; // eax
  IUnknown *v36; // edi
  int v38; // ebx
  int eax80a; // eax
  IUnknown *v39; // ecx
  double v41; // st7
  __int64 v42; // [esp+68h] [ebp-38h] BYREF
  DynamicVector aP1; // [esp+70h] [ebp-30h] BYREF

  if ( a1[185] ) /*0x4d6aab*/
  {
    (*(void (__thiscall **)(_DWORD *, int, int))(*a1 + 488))(a1, 5, 1); /*0x4d6ab9*/
    return 1; /*0x4d6acb*/
  }
  if ( *((_BYTE *)a1 + 1679) ) /*0x4d6acc*/
  {
    (*(void (__thiscall **)(_DWORD *))(*a1 + 832))(a1); /*0x4d6ad8*/
LABEL_9:
    MissionControl = MissionClass::GetMissionControl(a1); /*0x4d6b06*/
    return Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d6b22*/
  }
  if ( *((_BYTE *)a1 + 1680) ) /*0x4d6ae0*/
  {
    (*(void (__thiscall **)(_DWORD *))(*a1 + 840))(a1); /*0x4d6aec*/
    goto LABEL_9; /*0x4d6af2*/
  }
  if ( *((_BYTE *)a1 + 1681) ) /*0x4d6af4*/
  {
    (*(void (__thiscall **)(_DWORD *))(*a1 + 844))(a1); /*0x4d6b00*/
    goto LABEL_9; /*0x4d6b00*/
  }
  if ( !(unsigned __int8)House::IsCurrentPlayer((#375 *)a1[135]) && (int)a1[367] > 0 && !a1[361] ) /*0x4d6b3a*/
  {
    v4 = (int *)a1[364]; /*0x4d6b42*/
    v5 = *v4; /*0x4d6b4e*/
    if ( *v4 == a1[134] ) /*0x4d6b52*/
    {
      *(_DWORD *)aP1.__pad_0 = *v4; /*0x4d6b58*/
      if ( v5 ) /*0x4d6b5c*/
      {
        (*(void (__thiscall **)(_DWORD *, int, int))(*a1 + 1152))(a1, v5, 1); /*0x4d6b65*/
        DynamicVector::RemoveItem(a1 + 363, 0); /*0x4d6b74*/
        if ( *((_BYTE *)a1 + 1713) ) /*0x4d6b79*/
          VectorClass::AppendCopy(a1 + 363, &aP1); /*0x4d6b88*/
      }
    }
  }
  v6 = (AbstractClass *)a1[134]; /*0x4d6b8d*/
  if ( v6 ) /*0x4d6b95*/
  {
    if ( (*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)v6->__pad_0 + 44))(v6) == 11 ) /*0x4d6ba3*/
    {
      v7 = (IUnknown *)(*(int (__thiscall **)(_DWORD, char *))(*(_DWORD *)a1[134] + 72))(a1[134], aP1.__pad_C); /*0x4d6bb6*/
      v8 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v7); /*0x4d6bbf*/
      v9 = Cell::IsBridge(v8); /*0x4d6bc6*/
      if ( v9 ) /*0x4d6bcd*/
      {
        if ( (unsigned __int8)HouseClass::IsAlliedWith((void *)a1[135], (IUnknown *)v9[135]) /*0x4d6c12*/
          && !(unsigned __int8)House::IsCurrentPlayer((#375 *)a1[135])
          && ((*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) != 1 || !*(_BYTE *)(a1[433] + 3598)) )
        {
          HIDWORD(v42) = 0; /*0x4d6c24*/
          v10 = (IUnknown *)a1[39]; /*0x4d6c35*/
          v11 = a1[40]; /*0x4d6c39*/
          *(_DWORD *)aP1.__pad_14 = a1[41]; /*0x4d6c3f*/
          LOWORD(v42) = (int)v10 / 256; /*0x4d6c4f*/
          v12 = v11; /*0x4d6c56*/
          v13 = (AbstractClass *)a1[134]; /*0x4d6c5d*/
          *(_DWORD *)((char *)&v42 + 2) = (unsigned __int16)(v12 / 256); /*0x4d6c68*/
          *(_DWORD *)&aP1.field_1[3] = v42; /*0x4d6c71*/
          v14 = (_DWORD *)(*(int (__thiscall **)(AbstractClass *, char *))(*(_DWORD *)v13->__pad_0 + 72))( /*0x4d6c7c*/
                            v13,
                            &aP1.__pad_14[4]);
          LOWORD(v42) = *v14 / 256; /*0x4d6c91*/
          WORD1(v42) = v14[1] / 256; /*0x4d6cb0*/
          aP1.field_8 = v42; /*0x4d6cc0*/
          TileIndex = (IUnknown *)MapClass::GetTileIndex( /*0x4d6ccb*/
                                    &stru_87C374.__pad_14B0[8132],
                                    (IUnknown *)&aP1.field_1[3],
                                    0,
                                    0);
          *(_DWORD *)aP1.__pad_0 = *LayerClass::Pathfinding_Find( /*0x4d6cef*/
                                      (IUnknown *)&stru_87C374.__pad_14B0[8132],
                                      (IUnknown *)aP1.__pad_C,
                                      (IUnknown *)aP1.__pad_C,
                                      (IUnknown *)&aP1.field_8,
                                      (IUnknown *)1,
                                      TileIndex,
                                      0,
                                      0,
                                      (IUnknown *)1,
                                      (IUnknown *)1,
                                      0,
                                      0,
                                      0,
                                      (IUnknown *)1,
                                      (IUnknown *)((char *)&v42 + 4),
                                      0,
                                      0);
          if ( *(_WORD *)aP1.__pad_0 != *(_WORD *)&stru_89E138.__pad_579C[66740] /*0x4d6d01*/
            || *(_WORD *)&aP1.field_1[1] != *(_WORD *)&stru_89E138.__pad_579C[66742] )
          {
            v16 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)aP1.__pad_0); /*0x4d6d0d*/
            TechnoClass::SetFocus(a1, v16); /*0x4d6d15*/
          }
        }
      }
    }
  }
  if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) == 1 && *(_BYTE *)(a1[433] + 3598) ) /*0x4d6d2c*/
  {
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*a1 + 488))(a1, 10, 0); /*0x4d6d3b*/
    (*(void (__thiscall **)(_DWORD *))(*a1 + 492))(a1); /*0x4d6d45*/
    return Random::Range( /*0x4d6d68*/
             (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
             (IUnknown *)1,
             (IUnknown *)0xA)
         + 1;
  }
  v17 = (int **)a1[182]; /*0x4d6d69*/
  if ( v17 ) /*0x4d6d71*/
    BuildingClass::InitBuildLimit(v17); /*0x4d6d73*/
  if ( !a1[134] && a1[45] == -1 ) /*0x4d6d87*/
  {
    *(_DWORD *)aP1.__pad_C = a1[39]; /*0x4d6d95*/
    aP1.field_10 = (void *)a1[40]; /*0x4d6da1*/
    *(_DWORD *)aP1.__pad_14 = a1[41]; /*0x4d6dad*/
    v18 = (IUnknown *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)aP1.__pad_C); /*0x4d6db1*/
    TechnoClass::SetFocus(a1, v18); /*0x4d6db9*/
  }
  if ( a1 )
    v19 = (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) == 15 ? (TechnoClass *)a1 : 0;
  else
    v19 = 0; /*0x4d6dc2*/
  if ( !(unsigned __int8)House::IsCurrentPlayer((#375 *)a1[135]) /*0x4d6e15*/
    && v19
    && (*(_BYTE *)(v19[1].ironTintTimer[1] + 3778) || TechnoClass::HasVoiceResponse(v19, 14))
    && (*(int (__thiscall **)(_DWORD *))(*a1 + 388))(a1) != 17 )
  {
    ecx43 = a1[173]; /*0x4d6e17*/
    if ( ecx43 ) /*0x4d6e1f*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)ecx43 + 44))(ecx43) == 6 ) /*0x4d6e29*/
      {
        (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*a1 + 488))(a1, 17, 0); /*0x4d6e32*/
        return 1; /*0x4d6e44*/
      }
    }
  }
  aP1.field_8 = (*(int (__thiscall **)(_DWORD *, int))(*a1 + 796))(a1, 1); /*0x4d6e51*/
  v20 = (IUnknown *)Math::RoundToInt((double)aP1.field_8 * 1.1); /*0x4d6e64*/
  v21 = (AbstractClass *)a1[134]; /*0x4d6e66*/
  if ( v21 ) /*0x4d6e6e*/
  {
    if ( (v21->abstractFlags & 4) != 0 ) /*0x4d6e81*/
      v20 = *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5924); /*0x4d6e89*/
    if ( !*((_BYTE *)a1 + 1677) && !a1[361] && ObjectClass::DistanceTo(a1, v21) > (int)v20 ) /*0x4d6eb1*/
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 968))(a1, 0); /*0x4d6eb8*/
      (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*a1 + 1152))(a1, a1[134], 1); /*0x4d6ecb*/
    }
    if ( a1[173] ) /*0x4d6ed1*/
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 1340))(a1, 0); /*0x4d6f32*/
    }
    else
    {
      if ( FootClass::CanEnterBuilding(a1) && FootClass::updateThreat(a1) ) /*0x4d6ee6*/
      {
        v22 = (BuildingTypeClass *)*a1; /*0x4d6ef5*/
        v24 = (*(int (__thiscall **)(_DWORD, char *, int))(*(_DWORD *)a1[134] + 72))(a1[134], &aP1.__pad_14[4], 2); /*0x4d6f00*/
        (*(void (__thiscall **)(_DWORD *, int))&v22->DebrisTypes[136])(a1, v24); /*0x4d6f06*/
      }
      if ( a1[173] ) /*0x4d6f0c*/
        return 1; /*0x4d6f20*/
      (*(void (__thiscall **)(_DWORD *))(*a1 + 1144))(a1); /*0x4d6f25*/
    }
  }
  if ( !a1[173] /*0x4d6f6c*/
    && *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*a1 + 1016))(a1, 1)
    && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*a1 + 1016))(a1, 1) + 172) + 344) )
  {
    v25 = 0; /*0x4d6f78*/
    while ( 1 ) /*0x4d6f83*/
    {
      v26 = (_WORD *)(*(int (__thiscall **)(_DWORD *, char *))(*a1 + 440))(a1, aP1.__pad_C); /*0x4d6f83*/
      v27 = v26[1] + *(_WORD *)&stru_89E138.__pad_14B0[4 * (v25 & 7) + 162]; /*0x4d6f9f*/
      *(_WORD *)aP1.__pad_0 = *(_WORD *)&stru_89E138.__pad_14B0[4 * (v25 & 7) + 160] + *v26; /*0x4d6fa7*/
      *(_WORD *)&aP1.field_1[1] = v27; /*0x4d6fad*/
      aP1.field_8 = *(_DWORD *)aP1.__pad_0; /*0x4d6fbb*/
      v28 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP1.field_8); /*0x4d6fbf*/
      eax65 = (BuildingTypeClass *)Cell::IsBridge(v28); /*0x4d6fc6*/
      v29 = eax65; /*0x4d6fcb*/
      if ( eax65 ) /*0x4d6fcf*/
      {
        if ( *(_BYTE *)(*(_DWORD *)&eax65->DebrisTypes[524] + 5493) ) /*0x4d6fd7*/
        {
          v30 = (BuildingTypeClass *)(*(int (__thiscall **)(BuildingTypeClass *))(*(_DWORD *)eax65->vtable0 + 60))(eax65); /*0x4d6fe8*/
          if ( v30 == (BuildingTypeClass *)(*(int (__thiscall **)(_DWORD *))(*a1 + 60))(a1) ) /*0x4d6ff3*/
            break; /*0x4d6ff3*/
        }
      }
      if ( ++v25 >= 8 ) /*0x4d6ff9*/
        goto LABEL_72; /*0x4d6ff9*/
    }
    if ( v29 ) /*0x4d7003*/
    {
      (*(void (__thiscall **)(_DWORD *, BuildingTypeClass *))(*a1 + 968))(a1, v29); /*0x4d700a*/
      v31 = (BuildingTypeClass *)*a1; /*0x4d7010*/
      *((_BYTE *)a1 + 1678) = 1; /*0x4d7018*/
      (*(void (__thiscall **)(_DWORD *, int, _DWORD))&v31->__pad_14D[155])(a1, 1, 0); /*0x4d701f*/
    }
  }
LABEL_72:
  v33 = MissionClass::GetMissionControl(a1); /*0x4d7025*/
  v34 = Math::RoundToInt(*((double *)v33 + 2) * 900.0); /*0x4d703e*/
  if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) == 2 ) /*0x4d7046*/
    v34 *= 2; /*0x4d7048*/
  v35 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), (IUnknown *)1, (IUnknown *)5) /*0x4d705e*/
      + v34;
  if ( a1[173]
    && (a1
     && (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) == 15
     && *(_BYTE *)(*((*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) == 15 ? a1 + 432 : (_DWORD *)1728) + 1685)
     || *(_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 1016))(a1, 0)
     && *(int *)(*(_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 1016))(a1, 0) + 180) <= 512) )
  {
    eax80 = (*(int (__thiscall **)(_DWORD, char *))(*(_DWORD *)a1[173] + 72))(a1[173], &aP1.__pad_14[4]); /*0x4d70e0*/
    v36 = *(IUnknown **)eax80; /*0x4d70e3*/
    v38 = *(_DWORD *)(eax80 + 4); /*0x4d70e5*/
    eax80a = (*(int (__thiscall **)(_DWORD *, char *))(*a1 + 72))(a1, &aP1.__pad_20[4]); /*0x4d70f1*/
    v39 = *(IUnknown **)eax80a; /*0x4d70f4*/
    aP1.field_10 = (void *)(*(_DWORD *)(eax80a + 4) - v38); /*0x4d70fd*/
    *(_DWORD *)aP1.__pad_C = (char *)v39 - (char *)v36; /*0x4d7101*/
    v41 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x4d7121*/
                                        (double)((char *)v39 - (char *)v36) * (double)((char *)v39 - (char *)v36)
                                      + (double)(int)aP1.field_10 * (double)(int)aP1.field_10));
    aP1.field_8 = Math::RoundToInt(v41); /*0x4d7133*/
    if ( aP1.field_8 <= 768 && (double)aP1.field_8 >= 281.6 ) /*0x4d7148*/
      v35 /= 6; /*0x4d7158*/
  }
  return v35; /*0x4d6abf*/
}


// ==== 0x004D7170  FootClass::DispatchInput  this=FootClass  sig=csp ====
char __thiscall FootClass::DispatchInput(double *this, InfantryClass *aP1, int a3)
{
  int v4; // edx
  int v5; // ebx
  int v6; // edi
  int v7; // ecx
  __int16 v8; // ax
  _BYTE *v9; // eax
  int v10; // eax
  int v11; // edx
  FootClass *v13; // [esp+8h] [ebp-4h]

  if ( !TechnoClass::FinishDeploy((FootClass *)aP1, (TechnoClass *)a3, v13) ) /*0x4d717f*/
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
  (*(void (__thiscall **)(double *, _DWORD))(*(_DWORD *)this + 408))(this, this->focus); /*0x4d722f*/
  v4 = *(_DWORD *)this; /*0x4d7235*/
  *((_DWORD *)this + 376) = -1; /*0x4d723e*/
  v5 = *(_DWORD *)(*(int (__thiscall **)(double *, int *))(v4 + 440))(this, &a3); /*0x4d724e*/
  v6 = 0; /*0x4d7250*/
  a3 = v5; /*0x4d7252*/
  do /*0x4d72ac*/
  {
    v7 = v6 & 7; /*0x4d725d*/
    v8 = *(_WORD *)&stru_89E138.__pad_14B0[4 * v7 + 162]; /*0x4d7272*/
    LOWORD(a3) = v5 + *(_WORD *)&stru_89E138.__pad_14B0[4 * v7 + 160]; /*0x4d7276*/
    HIWORD(a3) = HIWORD(v5) + v8; /*0x4d7282*/
    aP1 = (InfantryClass *)a3; /*0x4d728b*/
    v9 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP1); /*0x4d7295*/
    ++v6; /*0x4d72a2*/
    ++v9[290]; /*0x4d72a6*/
  }
  while ( v6 < 8 ); /*0x4d72ac*/
  if ( (*(unsigned __int8 (__thiscall **)(double *))(*(_DWORD *)this + 84))(this) ) /*0x4d72b2*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(double *))(*(_DWORD *)this + 132))(this) + 3478) ) /*0x4d72cb*/
      GadgetGrid::InsertItem(&stru_87C374.__pad_579C[23928], (ObjectClass *)this); /*0x4d72db*/
  }
  else
  {
    this->FootClass_field_55C = v5; /*0x4d72b9*/
  }
  v10 = (*(int (__thiscall **)(double *))(*(_DWORD *)this + 132))(this); /*0x4d72e4*/
  v11 = *(_DWORD *)this; /*0x4d72f0*/
  *(this + 166) = *(double *)(v10 + 752); /*0x4d72f4*/
  if ( *(_DWORD *)((*(int (__thiscall **)(double *))(v11 + 132))(this) + 1520) ) /*0x4d7300*/
    (*(void (__thiscall **)(double *, _DWORD))(*(_DWORD *)this + 1256))(this, *(_DWORD *)&stru_89E138.__pad_579C[66740]); /*0x4d7318*/
  return 1; /*0x4d7320*/
}


// ==== 0x004D7330  FootClass::ProcessDeploy  this=FootClass  sig=csp ====
int FootClass::ProcessDeploy(
        IUnknown *aP0,
        FootClass *aP1,
        FootClass *aP2,
        FootClass *aP3,
        FootClass *aP4,
        FootClass *aP5,
        FootClass *aP6,
        AircraftClass *aP7)
{
  FootClass *v8; // ecx
  int v9; // edi
  FootClass *v10; // esi
  _DWORD *parasiteEatingMe; // eax
  FootClass *v12; // ecx
  int v13; // ecx
  _DWORD *v14; // edx
  _DWORD *v15; // edx
  _DWORD *v16; // edx
  int result; // eax
  int v18; // edi
  void *team; // ecx
  _DWORD *v20; // eax
  int v21; // [esp+14h] [ebp-8h]

  v10 = v8; /*0x4d7341*/
  if ( aP2 ) /*0x4d7343*/
  {
    if ( HIBYTE(aP2->gattlingValue) ) /*0x4d7345*/
    {
      parasiteEatingMe = v8->parasiteEatingMe; /*0x4d734f*/
      if ( parasiteEatingMe ) /*0x4d7357*/
      {
        BuildingClass::Deploy(parasiteEatingMe[423], (int)aP2, v9); /*0x4d735f*/
        if ( aP3 ) /*0x4d7366*/
          (*(void (__thiscall **)(FootClass *, _DWORD))(*(_DWORD *)aP3->__pad_0 + 968))(aP3, 0); /*0x4d736e*/
      }
    }
  }
  v12 = (FootClass *)v10->parasiteEatingMe; /*0x4d7374*/
  if ( v12 /*0x4d7398*/
    && aP3 != v12
    && aP0->field_0 > *(_DWORD *)((*(int (__thiscall **)(FootClass *))(*(_DWORD *)v12->__pad_0 + 132))(v12) + 3436) )
  {
    v13 = 2 * aP0->field_0 /*0x4d73b7*/
        - *(_DWORD *)((*(int (__thiscall **)(void *))(*(_DWORD *)v10->parasiteEatingMe + 132))(v10->parasiteEatingMe)
                    + 3436);
    v14 = (_DWORD *)(*((_DWORD *)v10->parasiteEatingMe + 423) + 44); /*0x4d73c5*/
    *v14 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x4d73c8*/
    v14[1] = v21; /*0x4d73ce*/
    v14[2] = v13; /*0x4d73d1*/
  }
  v15 = v10->parasiteEatingMe; /*0x4d73d4*/
  if ( v15 && aP0->field_0 < 0 ) /*0x4d73e1*/
  {
    v16 = (_DWORD *)(v15[423] + 44); /*0x4d73ee*/
    *v16 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x4d73f6*/
    v16[1] = v21; /*0x4d73fc*/
    v16[2] = 50; /*0x4d73ff*/
    BuildingClass::Deploy(*((_DWORD *)v10->parasiteEatingMe + 423), (int)aP2, (int)aP0); /*0x4d740e*/
  }
  result = TechnoClass::ReceiveDamage_Shield( /*0x4d742c*/
             v10,
             (int)aP1,
             (FootClass *)aP0,
             aP1,
             (TechnoClass *)aP2,
             (TechnoClass *)aP3,
             (char)aP4,
             __SPAIR64__((unsigned int)aP6, (unsigned int)aP5));
  v18 = result; /*0x4d7431*/
  if ( result != 5 ) /*0x4d7436*/
  {
    if ( result ) /*0x4d7444*/
    {
      team = v10->team; /*0x4d7446*/
      if ( team ) /*0x4d744e*/
      {
        FootClass::LinkToTransporter((int)team, (TechnoClass *)v10, result, aP3); /*0x4d7453*/
        return v18; /*0x4d7461*/
      }
    }
    if ( result == 4 || !result ) /*0x4d746b*/
      return v18; /*0x4d746b*/
    v20 = v10->team; /*0x4d746d*/
    if ( v20 && *(_BYTE *)(v20[9] + 172) && !(unsigned __int8)House::IsCurrentPlayer((#375 *)v10->focus) ) /*0x4d748a*/
    {
      if ( !aP3 ) /*0x4d7495*/
        return v18; /*0x4d74cd*/
      TechnoClass::EvaluateMission(v10, (TechnoClass *)aP3); /*0x4d749a*/
    }
    if ( aP3 && MissionClass::GetMissionControl(v10)[4] && !MissionClass::GetMissionControl(v10)[5] ) /*0x4d74b8*/
      (*(void (__thiscall **)(FootClass *, _DWORD, int))(*(_DWORD *)v10->__pad_0 + 1156))(v10, 0, 1); /*0x4d74c7*/
    return v18; /*0x4d74c7*/
  }
  return result; /*0x4d7438*/
}


// ==== 0x004D74E0  FootClass::ValidateMove  this=FootClass  sig=csp ====
char __thiscall FootClass::ValidateMove(_DWORD *this, FootClass *aP1, int *a2, char a4)
{
  char result; // al
  _BYTE *WaypointCoords; // eax
  char *v7; // eax
  IUnknown *v8; // eax
  int v9; // edx
  int v10; // eax
  int GroundHeight; // eax
  int v12; // edi
  _DWORD *v13; // eax
  bool IsWithinUsableArea; // al
  int v15; // edx
  IUnknown *v16; // eax
  bool IsPassable; // bl
  bool v18; // cl
  BOOL v19; // edx
  IUnknown *v20; // ecx
  int v21; // eax
  IUnknown *v22; // ecx
  IUnknown *v23; // ebp
  IUnknown *v24; // ecx
  MouseClass *v25; // edx
  int v26; // eax
  int *v27; // edi
  void *v28; // eax
  _DWORD *v29; // eax
  int *v30; // eax
  int v31; // eax
  bool v32; // al
  IUnknown *TileIndex; // [esp-2Ah] [ebp-138h]
  IUnknown *v34; // [esp-22h] [ebp-130h]
  IUnknown *v35; // [esp-22h] [ebp-130h]
  IUnknown *v36; // [esp-Eh] [ebp-11Ch]
  char v37; // [esp+19h] [ebp-F5h]
  char *v38; // [esp+1Ah] [ebp-F4h] BYREF
  char *v39; // [esp+1Eh] [ebp-F0h] BYREF
  bool v40; // [esp+25h] [ebp-E9h]
  IUnknown *aP3; // [esp+26h] [ebp-E8h] BYREF
  int *v42; // [esp+2Ah] [ebp-E4h]
  int v43; // [esp+2Eh] [ebp-E0h] BYREF
  IUnknown *v44; // [esp+32h] [ebp-DCh] BYREF
  _DWORD v45[2]; // [esp+36h] [ebp-D8h] BYREF
  MouseClass *v46; // [esp+3Eh] [ebp-D0h]
  IUnknown *v47; // [esp+42h] [ebp-CCh] BYREF
  _DWORD v48[2]; // [esp+46h] [ebp-C8h] BYREF
  int v49; // [esp+4Eh] [ebp-C0h]
  int v50; // [esp+52h] [ebp-BCh] BYREF
  int v51; // [esp+56h] [ebp-B8h] BYREF
  _BYTE v52[8]; // [esp+5Ah] [ebp-B4h] BYREF
  _BYTE v53[12]; // [esp+62h] [ebp-ACh] BYREF
  _BYTE v54[12]; // [esp+6Eh] [ebp-A0h] BYREF
  _BYTE v55[12]; // [esp+7Ah] [ebp-94h] BYREF
  _BYTE v56[12]; // [esp+86h] [ebp-88h] BYREF
  char v57[12]; // [esp+92h] [ebp-7Ch] BYREF
  char v58[112]; // [esp+9Eh] [ebp-70h] BYREF

  if ( *((_BYTE *)this + 664) /*0x4d750c*/
    || this->airstrike && !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 1682) )
  {
    return 0; /*0x4d77ec*/
  }
  switch ( (unsigned int)aP1 )
  {
    case 1u:
    case 0x3Eu:
      goto LABEL_32;
    case 2u:
      v8 = (IUnknown *)(*(int (__thiscall **)(int *, _BYTE *))(*a2 + 72))(a2, v55); /*0x4d77c6*/
      if ( Cell::IsPassable(v8) && !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 3213) ) /*0x4d77e2*/
        return 0; /*0x4d77ea*/
LABEL_32:
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 160))(this) ) /*0x4d7807*/
        return 0; /*0x4d7807*/
      v9 = *a2; /*0x4d7809*/
      v42 = a2; /*0x4d7812*/
      v10 = (*(int (__thiscall **)(int *, _BYTE *))(v9 + 72))(a2, v53); /*0x4d7816*/
      v45[0] = *(_DWORD *)v10; /*0x4d781b*/
      v45[1] = *(_DWORD *)(v10 + 4); /*0x4d7827*/
      v46 = *(MouseClass **)(v10 + 8); /*0x4d7833*/
      GroundHeight = Cell::GetGroundHeight((IUnknown *)v45); /*0x4d7837*/
      if ( (int)v46 <= GroundHeight ) /*0x4d7840*/
        v46 = (MouseClass *)Cell::GetGroundHeight((IUnknown *)v45); /*0x4d7851*/
      if ( (*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 3372) /*0x4d788f*/
         && !*(_BYTE *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6127)
         || (*(int (__thiscall **)(_DWORD *))(*this + 44))(this) == 2)
        && Cell::IsPassable((IUnknown *)v45) )
      {
        goto LABEL_83; /*0x4d7896*/
      }
      v12 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 1460); /*0x4d78a6*/
      v13 = (_DWORD *)(*(int (__thiscall **)(int *, char *, _DWORD))(*a2 + 76))(a2, v57, 0); /*0x4d78ba*/
      LOWORD(v39) = *v13 / 256; /*0x4d78cf*/
      HIWORD(v39) = v13[1] / 256; /*0x4d78e8*/
      v38 = v39; /*0x4d78f5*/
      IsWithinUsableArea = LayerClass::IsWithinUsableArea( /*0x4d78fa*/
                             &stru_87C374.__pad_14B0[8132],
                             (IUnknown *)&v38,
                             (TechnoClass *)1);
      v15 = *this; /*0x4d78ff*/
      v40 = IsWithinUsableArea; /*0x4d7901*/
      v16 = (IUnknown *)(*(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(v15 + 76))(this, v54, 0); /*0x4d790e*/
      v39 = (char *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v16); /*0x4d791f*/
      if ( v12 == 6 ) /*0x4d7923*/
      {
        v12 = 0; /*0x4d7925*/
      }
      else if ( v12 == 9 ) /*0x4d792c*/
      {
        v12 = 7; /*0x4d792e*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 84))(this) /*0x4d797d*/
        || *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 3372)
        || (*(int (__thiscall **)(_DWORD *))(*this + 44))(this) == 15 && *(_BYTE *)(*(this + 432) + 3476)
        || (v37 = 0, (*(int (__thiscall **)(_DWORD *))(*this + 44))(this) == 2) )
      {
        v37 = 1; /*0x4d797f*/
      }
      LOBYTE(aP3) = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 188))(this, 0); /*0x4d7995*/
      v49 = 0; /*0x4d79a9*/
      v48[1] = (SHIWORD(v38) << 8) + 128; /*0x4d79ad*/
      v48[0] = ((__int16)v38 << 8) + 128; /*0x4d79c3*/
      v49 = Cell::GetGroundHeight((IUnknown *)v48); /*0x4d79d6*/
      IsPassable = Cell::IsPassable((IUnknown *)v48); /*0x4d79df*/
      v18 = !a4 /*0x4d7a16*/
         && (Mouse::IsButtonDown(HouseClass_Player.__pad_5568[22852])
          || Mouse::IsButtonDown(HouseClass_Player.__pad_5568[22856]));
      if ( v37 && aP1 == (FootClass *)2 ) /*0x4d7a2b*/
      {
        v19 = *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 3372) /*0x4d7a53*/
           && (*(int (__thiscall **)(_DWORD *))(*this + 456))(this) < 0;
        v36 = (IUnknown *)v19; /*0x4d7a6b*/
        v43 = 0; /*0x4d7a7c*/
        v20 = (IUnknown *)(*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v38) + 80) >> 8); /*0x4d7a93*/
        LOBYTE(v20) = (unsigned __int8)v20 & 1; /*0x4d7a96*/
        v34 = v20; /*0x4d7a99*/
        v21 = (*(int (__thiscall **)(_DWORD *))(*this + 132))(this); /*0x4d7a9f*/
        v39 = (char *)*LayerClass::Pathfinding_Find( /*0x4d7acc*/
                         (IUnknown *)&stru_87C374.__pad_14B0[8132],
                         (IUnknown *)&v50,
                         (IUnknown *)&v50,
                         (IUnknown *)&v38,
                         *(IUnknown **)(v21 + 1660),
                         (IUnknown *)0xFFFFFFFF,
                         (IUnknown *)v12,
                         v34,
                         (IUnknown *)1,
                         (IUnknown *)1,
                         0,
                         (IUnknown *)1,
                         v36,
                         (IUnknown *)1,
                         (IUnknown *)&v43,
                         0,
                         0);
        if ( v39 != *(char **)&stru_89E138.__pad_579C[66740] ) /*0x4d7ad0*/
        {
          v22 = (IUnknown *)&v39; /*0x4d7ae4*/
LABEL_71:
          v42 = (int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v22); /*0x4d7bf9*/
        }
      }
      else
      {
        v23 = aP3; /*0x4d7af1*/
        if ( !v40 /*0x4d7b51*/
          || !v37
          && (IsPassable
           || aP1 == (FootClass *)2
           || v18 && (*(int (__thiscall **)(_DWORD *))(*this + 44))(this) == 15
           || (v24 = (IUnknown *)(*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v38) + 80) >> 8),
               LOBYTE(v24) = (unsigned __int8)v24 & 1,
               !MapSeed::CheckTileMatch(
                  &stru_87C374.__pad_14B0[8132],
                  (IUnknown *)(v39 + 36),
                  (IUnknown *)&v38,
                  (IUnknown *)v12,
                  v23,
                  v24,
                  0))) )
        {
          v44 = 0; /*0x4d7b7e*/
          v25 = (MouseClass *)(*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v38) + 80) >> 8); /*0x4d7b97*/
          LOBYTE(v25) = (unsigned __int8)v25 & 1; /*0x4d7b9a*/
          v35 = (IUnknown *)v25; /*0x4d7ba0*/
          TileIndex = (IUnknown *)MapClass::GetTileIndex( /*0x4d7bb1*/
                                    &stru_87C374.__pad_14B0[8132],
                                    (IUnknown *)(v39 + 36),
                                    (IUnknown *)v12,
                                    v23);
          v26 = (*(int (__thiscall **)(_DWORD *))(*this + 132))(this); /*0x4d7bb4*/
          aP3 = (IUnknown *)*LayerClass::Pathfinding_Find( /*0x4d7be1*/
                               (IUnknown *)&stru_87C374.__pad_14B0[8132],
                               (IUnknown *)&v51,
                               (IUnknown *)&v51,
                               (IUnknown *)&v38,
                               *(IUnknown **)(v26 + 1660),
                               TileIndex,
                               (IUnknown *)v12,
                               v35,
                               (IUnknown *)1,
                               (IUnknown *)1,
                               0,
                               (IUnknown *)1,
                               0,
                               (IUnknown *)1,
                               (IUnknown *)&v44,
                               0,
                               0);
          if ( aP3 != *(IUnknown **)&stru_89E138.__pad_579C[66740] ) /*0x4d7be5*/
          {
            v22 = (IUnknown *)&aP3; /*0x4d7bf5*/
            goto LABEL_71; /*0x4d7bf5*/
          }
        }
      }
      if ( v42 ) /*0x4d7c0e*/
      {
        v27 = v42; /*0x4d7c14*/
        v28 = 0; /*0x4d7c1f*/
        if ( v42 != a2 ) /*0x4d7c23*/
        {
          if ( a2 ) /*0x4d7c27*/
          {
            v29 = (_DWORD *)(*(int (__stdcall **)(_BYTE *))(*a2 + 72))(v56); /*0x4d7c33*/
            LOWORD(aP3) = *v29 / 256; /*0x4d7c46*/
            HIWORD(aP3) = v29[1] / 256; /*0x4d7c5e*/
            v47 = aP3; /*0x4d7c67*/
            v28 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v47); /*0x4d7c71*/
          }
        }
        (*(void (__thiscall **)(_DWORD *, int, _DWORD, int *, void *))(*this + 888))(this, 2, 0, v27, v28); /*0x4d7c7e*/
      }
LABEL_83:
      result = 1; /*0x4d7cc0*/
      break; /*0x4d7cc3*/
    case 3u:
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 160))(this) || !a2 || !AbstractClass::IsTechnoType(a2) ) /*0x4d76e9*/
        return 0; /*0x4d76f0*/
      (*(void (__thiscall **)(_DWORD *, int, _DWORD, int *, _DWORD))(*this + 888))(this, 7, 0, a2, 0); /*0x4d7701*/
      return 1; /*0x4d7713*/
    case 4u:
    case 0x34u:
    case 0x38u:
      (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, _DWORD))(*this + 888))(this, 16, 0, 0, 0); /*0x4d75ed*/
      return 1; /*0x4d75ff*/
    case 5u:
    case 0x35u:
    case 0x3Fu:
    case 0x40u:
    case 0x47u:
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 156))(this) ) /*0x4d76ab*/
        return 0; /*0x4d76ab*/
      (*(void (__thiscall **)(_DWORD *, int, int *, _DWORD, _DWORD))(*this + 888))(this, 1, a2, 0, 0); /*0x4d76c1*/
      goto LABEL_83; /*0x4d76c1*/
    case 9u:
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 160))(this) ) /*0x4d7722*/
        return 0; /*0x4d7722*/
      (*(void (__thiscall **)(_DWORD *, int, _DWORD, int *, _DWORD))(*this + 888))(this, 8, 0, a2, 0); /*0x4d773a*/
      return 1; /*0x4d774c*/
    case 0xBu:
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 160))(this) ) /*0x4d775b*/
        return 0; /*0x4d775b*/
      (*(void (__thiscall **)(_DWORD *, int, _DWORD, int *, _DWORD))(*this + 888))(this, 9, 0, a2, 0); /*0x4d7773*/
      return 1; /*0x4d7785*/
    case 0x10u:
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 160))(this) ) /*0x4d7794*/
        return 0; /*0x4d7794*/
      goto LABEL_12; /*0x4d7794*/
    case 0x1Au:
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 156))(this) /*0x4d7559*/
        || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 160))(this) )
      {
        return 0; /*0x4d7561*/
      }
      if ( ((*(int (__thiscall **)(_DWORD *))(*this + 44))(this) == 15 && *(_BYTE *)(*(this + 432) + 3778) /*0x4d75aa*/
         || TechnoClass::HasVoiceResponse((TechnoClass *)this, 14))
        && (*(int (__thiscall **)(int *))(*a2 + 44))(a2) == 6
        && !Object::IsAlliedWithObjectHouse((_DWORD *)this->focus, (IUnknown *)a2) )
      {
LABEL_12:
        (*(void (__thiscall **)(_DWORD *, int, _DWORD, int *, _DWORD))(*this + 888))(this, 17, 0, a2, 0); /*0x4d75b3*/
        return 1; /*0x4d75d0*/
      }
      (*(void (__thiscall **)(_DWORD *, int, int *, _DWORD, _DWORD))(*this + 888))(this, 11, a2, 0, 0); /*0x4d75dc*/
      goto LABEL_83; /*0x4d75dc*/
    case 0x33u:
    case 0x36u:
      return 0;
    case 0x37u:
      WaypointCoords = ScriptAction::GetWaypointCoords(v52, (IUnknown *)this); /*0x4d7607*/
      v7 = EventClass::Add( /*0x4d762e*/
             v58,
             *(AbstractClass **)(*(_DWORD *)(this->attachedBomb + 40) + 48),
             0xAu,
             *(_DWORD *)WaypointCoords,
             WaypointCoords[4]);
      if ( Networking_LastEventIndex >= 128 ) /*0x4d763d*/
        goto LABEL_83; /*0x4d763d*/
      qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v7, 0x6Fu); /*0x4d765d*/
      g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x4d766e*/
      ++Networking_LastEventIndex; /*0x4d7685*/
      Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x4d768a*/
      return 1; /*0x4d769c*/
    case 0x3Bu:
      v30 = (int *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1016))(this, 0); /*0x4d7c86*/
      v32 = 0; /*0x4d7ca0*/
      if ( v30 ) /*0x4d7c8e*/
      {
        v31 = *v30; /*0x4d7c90*/
        if ( v31 ) /*0x4d7c94*/
        {
          if ( *(int *)(v31 + 164) < 0 ) /*0x4d7c9e*/
            v32 = 1; /*0x4d7c8e*/
        }
      }
      (*(void (__thiscall **)(_DWORD *, int, _DWORD *, _DWORD, _DWORD))(*this + 888))(this, v32 ? 11 : 5, this, 0, 0);
      goto LABEL_83; /*0x4d7cba*/
    default:
      goto LABEL_83;
  }
  return result; /*0x4d75c6*/
}


// ==== 0x004D7D50  ObjectClass::SpawnInfantry  this=FootClass  sig=csp ====
char __thiscall ObjectClass::SpawnInfantry(_BYTE *this, FootClass *aP1, FootClass *aP2, FootClass *aP3, FootClass *aP4)
{
  char result; // al
  RadarClass *v7; // edi
  int v8; // ebp
  FootClass **PlacementCell; // eax
  int v10; // edi
  void *v11; // eax
  int v12; // ebp
  void *v13; // eax
  int v14; // ebp
  void *v15; // eax
  int v16; // edx
  int v17; // ebp
  void **v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // edi
  void *v22; // eax
  int v23; // eax
  int v24; // ebp
  void *v25; // eax
  int v26; // ebp
  void *v27; // eax
  int v28; // ebp
  void *v29; // eax
  int v30; // ebp
  void *v31; // eax
  __int16 *v32; // eax
  int Type; // edi
  __int16 *v34; // eax
  char v35; // dl
  int v36; // edx
  __int16 v37; // cx
  IUnknown *v38; // [esp+0h] [ebp-28h]
  int v39; // [esp+4h] [ebp-24h]
  int _8; // [esp+8h] [ebp-20h]
  char v41; // [esp+Ch] [ebp-1Ch]
  FootClass *v42; // [esp+10h] [ebp-18h] BYREF
  RadarClass *v40; // [esp+14h] [ebp-14h] BYREF
  int v44; // [esp+18h] [ebp-10h] BYREF
  CoordStruct v45; // [esp+1Ch] [ebp-Ch] BYREF

  if ( this->chronoLockRemaining ) /*0x4d7d58*/
    return 0; /*0x4d7d64*/
  if ( this->airstrike && !*(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 132))(this) + 1682) ) /*0x4d7d81*/
    return 0; /*0x4d7d8d*/
  v7 = (RadarClass *)aP2; /*0x4d7d9a*/
  v8 = (*(int (__thiscall **)(_BYTE *, FootClass *, _DWORD, FootClass *))(this->estimatedHealth)(this, aP2, 0, aP4); /*0x4d7db1*/
  if ( !LayerClass::IsWithinUsableArea(&stru_87C374.__pad_14B0[8132], (IUnknown *)v7, (TechnoClass *)1) && v8 != 2 ) /*0x4d7dbf*/
    return 0; /*0x4d7dc1*/
  switch ( v8 ) /*0x4d7de0*/
  {
    case 1: /*0x4d7de0*/
    case 62: /*0x4d7de0*/
      if ( g_MoveFeedback ) /*0x4d7ebc*/
      {
        v16 = SHIWORD(v7->field_0) << 8; /*0x4d7ed6*/
        v45.X = (SLOWORD(v7->field_0) << 8) + 128; /*0x4d7ed9*/
        v45.Y = v16 + 128; /*0x4d7ee9*/
        v45.Z = 0; /*0x4d7eed*/
        v45.Z = Cell::GetGroundHeight((IUnknown *)&v45); /*0x4d7efe*/
        if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v45) + 80) & 0x100) != 0 ) /*0x4d7f16*/
          v45.Z += *(_DWORD *)&stru_89E138.__pad_579C[66848]; /*0x4d7f24*/
        v17 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 532); /*0x4d7f35*/
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] && *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 5 ) /*0x4d7f40*/
        {
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 532) = -3; /*0x4d7f42*/
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2996) + 832) = -5000; /*0x4d7f57*/
        }
        v18 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4d7f66*/
        if ( v18 ) /*0x4d7f70*/
          aP4 = (FootClass *)AnimClass::ctor( /*0x4d7f98*/
                               v18,
                               *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2996),
                               &v45,
                               0,
                               (CoordStruct *)1,
                               (void *)0x600,
                               0,
                               0);
        else
          aP4 = 0; /*0x4d7f9e*/
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] && *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 5 ) /*0x4d7fb6*/
        {
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 532) = v17; /*0x4d7fcb*/
          v19 = (*(int (__thiscall **)(char *, FootClass **))(*(_DWORD *)&HouseClass_Player.__pad_5568[22260] + 16))( /*0x4d7fd7*/
                  &HouseClass_Player.__pad_5568[22260],
                  &aP4);
          if ( v19 != -1 && v19 < *(int *)&HouseClass_Player.__pad_5568[22276] ) /*0x4d7fe7*/
          {
            --*(_DWORD *)&HouseClass_Player.__pad_5568[22276]; /*0x4d7fec*/
            for ( ; /*0x4d7ff2*/
                  v19 < *(int *)&HouseClass_Player.__pad_5568[22276];
                  *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22264] + 4 * v19 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22264] + 4 * v19) )
            {
              ++v19; /*0x4d7ffa*/
            }
          }
          if ( *(int *)&HouseClass_Player.__pad_74[80] < *(int *)&HouseClass_Player.__pad_74[72] /*0x4d8042*/
            || (HouseClass_Player.__pad_74[77] || !*(_DWORD *)&HouseClass_Player.__pad_74[72])
            && *(int *)&HouseClass_Player.__pad_74[84] > 0
            && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_74[64] + 8))(
                 &HouseClass_Player.__pad_74[64],
                 *(_DWORD *)&HouseClass_Player.__pad_74[84] + *(_DWORD *)&HouseClass_Player.__pad_74[72],
                 0) )
          {
            v20 = (*(_DWORD *)&HouseClass_Player.__pad_74[80])++; /*0x4d8055*/
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_74[68] + 4 * v20) = aP4; /*0x4d8062*/
          }
        }
      }
      goto LABEL_38; /*0x4d8062*/
    case 2: /*0x4d7de0*/
LABEL_38:
      aP4 = (FootClass *)ObjectClass::FindPlacementCell((FootClass *)&v44, (int)v7, 0, v39, _8, v41)->field_0; /*0x4d8065*/
      if ( aP4 == *(FootClass **)&stru_89E138.__pad_579C[66740] ) /*0x4d8081*/
        return 0; /*0x4d8081*/
      v21 = *(_DWORD *)this; /*0x4d8099*/
      v38 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)aP3->__pad_0); /*0x4d80a6*/
      v22 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP4); /*0x4d80ac*/
LABEL_51:
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, IUnknown *))(v21 + 888))(this, 2, 0, v22, v38); /*0x4d822a*/
LABEL_52:
      result = 1; /*0x4d8237*/
      break; /*0x4d8239*/
    case 3: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 160))(this) ) /*0x4d8155*/
        return 0; /*0x4d8155*/
      v28 = *(_DWORD *)this; /*0x4d815b*/
      v29 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v7); /*0x4d8165*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, _DWORD))(v28 + 888))(this, 7, 0, v29, 0); /*0x4d8171*/
      return 1; /*0x4d817f*/
    case 5: /*0x4d7de0*/
    case 63: /*0x4d7de0*/
      v23 = ObjectClass::processDeath(v7); /*0x4d80b3*/
      if ( !v23 || *(_BYTE *)(v23 + 256) || *(int *)(v23 + 108) <= 0 ) /*0x4d80cb*/
      {
        v24 = *(_DWORD *)this; /*0x4d80e9*/
        v25 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v7); /*0x4d80f5*/
        (*(void (__thiscall **)(_BYTE *, int, void *, _DWORD, _DWORD))(v24 + 888))(this, 1, v25, 0, 0); /*0x4d80ff*/
        return 1; /*0x4d8107*/
      }
      else
      {
        (*(void (__thiscall **)(_BYTE *, int, int, _DWORD, _DWORD))(*(_DWORD *)this + 888))(this, 1, v23, 0, 0); /*0x4d80d8*/
        return 1; /*0x4d80e0*/
      }
    case 6: /*0x4d7de0*/
      v14 = *(_DWORD *)this; /*0x4d7e8e*/
      v15 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v7); /*0x4d7e98*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, _DWORD))(v14 + 888))(this, 10, 0, v15, 0); /*0x4d7ea4*/
      return 1; /*0x4d7eb2*/
    case 9: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 160))(this) ) /*0x4d811c*/
        return 0; /*0x4d811c*/
      v26 = *(_DWORD *)this; /*0x4d8122*/
      v27 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v7); /*0x4d812c*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, _DWORD))(v26 + 888))(this, 8, 0, v27, 0); /*0x4d8138*/
      return 1; /*0x4d8146*/
    case 16: /*0x4d7de0*/
      v30 = *(_DWORD *)this; /*0x4d8182*/
      v31 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v7); /*0x4d818c*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, _DWORD))(v30 + 888))(this, 17, 0, v31, 0); /*0x4d8198*/
      return 1; /*0x4d81a6*/
    case 26: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 156))(this) /*0x4d7e59*/
        && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(this->auxParticles2)(this)
        || !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 160))(this) )
      {
        return 0; /*0x4d7e61*/
      }
      v12 = *(_DWORD *)this; /*0x4d7e67*/
      v13 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v7); /*0x4d7e73*/
      (*(void (__thiscall **)(_BYTE *, int, void *, _DWORD, _DWORD))(v12 + 888))(this, 11, v13, 0, 0); /*0x4d7e7d*/
      return 1; /*0x4d7e8b*/
    case 35: /*0x4d7de0*/
      v32 = (__int16 *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v7); /*0x4d81af*/
      Type = InfantryClass::GetType(v32); /*0x4d81bb*/
      aP2 = *(FootClass **)(Type + 40); /*0x4d81ca*/
      v34 = (__int16 *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP2); /*0x4d81ce*/
      v35 = *(_DWORD *)(InfantryClass::GetType(v34) + 44) - 4; /*0x4d81e0*/
      aP3 = *(FootClass **)(Type + 40); /*0x4d81e3*/
      v36 = v35 & 7; /*0x4d81e7*/
      v38 = 0; /*0x4d81ea*/
      v37 = (_WORD)aP3 + *(_WORD *)&stru_89E138.__pad_14B0[4 * v36 + 160]; /*0x4d81fb*/
      v21 = *(_DWORD *)this; /*0x4d81fe*/
      LOWORD(v36) = *(_WORD *)&stru_89E138.__pad_14B0[4 * v36 + 162]; /*0x4d8200*/
      LOWORD(aP4) = v37; /*0x4d8204*/
      HIWORD(aP4) = HIWORD(aP3) + v36; /*0x4d8213*/
      v42 = aP4; /*0x4d821c*/
      v22 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v42); /*0x4d8225*/
      goto LABEL_51; /*0x4d8225*/
    case 51: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 160))(this) ) /*0x4d7df3*/
        return 0; /*0x4d7df3*/
      PlacementCell = (FootClass **)ObjectClass::FindPlacementCell((FootClass *)&v40, (int)v7, 0, v39, _8, v41); /*0x4d7dff*/
      v10 = *(_DWORD *)this; /*0x4d7e06*/
      aP4 = *PlacementCell; /*0x4d7e0c*/
      v11 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP4); /*0x4d7e18*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, _DWORD))(v10 + 888))(this, 25, 0, v11, 0); /*0x4d7e24*/
      return 1; /*0x4d7e32*/
    default:
      goto LABEL_52;
  }
  return result; /*0x4d7d62*/
}


// ==== 0x004D82B0  FootClass::ValidatePlacement  this=FootClass  sig=csp ====
char __thiscall FootClass::ValidatePlacement(_DWORD **this, InfantryClass *aP1, int a3)
{
  _DWORD *v4; // edx
  ILocomotion *v7; // eax
  ILocomotion *v8; // edi
  char bl4; // bl
  InfantryClass *ecx4; // ecx
  int v9; // eax
  InfantryClass *v10; // eax
  int v11; // eax
  _DWORD *v12; // ecx
  int v13; // eax
  int v15; // eax
  IUnknown *Element; // eax
  IUnknown *v17; // eax
  _DWORD *v18; // eax
  int v19; // edi
  int v20; // ebx
  int *v21; // eax
  int v22; // kr0C_4
  int v23; // eax
  int v24; // edi
  FootClass *v25; // [esp+Ch] [ebp-2Ch]
  IUnknown *v28; // [esp+10h] [ebp-28h]
  _DWORD v27[3]; // [esp+20h] [ebp-18h] BYREF
  _BYTE varC[12]; // [esp+2Ch] [ebp-Ch] BYREF

  if ( *((_BYTE *)this + 1715) ) /*0x4d82b8*/
    return 0; /*0x4d854e*/
  v28 = (IUnknown *)a3; /*0x4d82ce*/
  v25 = (FootClass *)aP1; /*0x4d82cf*/
  *((_BYTE *)this + 1715) = 1; /*0x4d82d2*/
  TechnoClass::CompleteFactoryProduction(this, v25, (int)v28); /*0x4d82d9*/
  if ( *((_BYTE *)this + 1671) ) /*0x4d82de*/
  {
    v4 = *this; /*0x4d82e8*/
    *((_BYTE *)this + 1671) = 0; /*0x4d82f5*/
    ((void (__thiscall *)(_DWORD **, char *, int, _DWORD))v4[93])(this, &stru_89E138.__pad_579C[66772], 1, 0); /*0x4d82fc*/
  }
  v7 = (ILocomotion *)*(this + 413); /*0x4d8302*/
  v8 = (ILocomotion *)(this + 413); /*0x4d8308*/
  bl4 = 0; /*0x4d830e*/
  ecx4 = 0; /*0x4d8310*/
  aP1 = 0; /*0x4d8314*/
  if ( v7 ) /*0x4d8318*/
  {
    v9 = StreamClass::Set(&aP1, (IUnknown *)(this + 413)); /*0x4d831f*/
    if ( v9 < 0 && v9 != -2147467262 ) /*0x4d832d*/
      WinAPI::Wrapper(v9); /*0x4d8330*/
    ecx4 = aP1; /*0x4d8335*/
    if ( aP1 ) /*0x4d833b*/
    {
      if ( (*(unsigned __int8 (__stdcall **)(InfantryClass *))(*(_DWORD *)aP1->__pad_0 + 20))(aP1) ) /*0x4d8340*/
      {
        if ( *v8 ) /*0x4d8347*/
          (*(void (__stdcall **)(ILocomotion))(**(_DWORD **)v8 + 8))(*v8); /*0x4d8350*/
        v10 = aP1; /*0x4d8353*/
        *v8 = 0; /*0x4d8357*/
        if ( !v10 ) /*0x4d835f*/
          WinAPI::Wrapper(-2147467261); /*0x4d8366*/
        (*(void (__stdcall **)(InfantryClass *, _DWORD **))(*(_DWORD *)v10->__pad_0 + 16))(v10, this + 413); /*0x4d8373*/
        bl4 = 1; /*0x4d8376*/
      }
      ecx4 = aP1; /*0x4d8378*/
    }
  }
  if ( (int)*(this + 358) > 0 ) /*0x4d8384*/
  {
    ((void (__thiscall *)(_DWORD **, _DWORD, _DWORD))(*this)[288])(this, **(this + 355), 0); /*0x4d8395*/
    v11 = (int)*(this + 358); /*0x4d839b*/
    if ( v11 > 0 ) /*0x4d83a3*/
    {
      v12 = (_DWORD *)(v11 - 1); /*0x4d83a5*/
      v13 = 0; /*0x4d83a8*/
      for ( *(this + 358) = v12; v13 < (int)*(this + 358); (*(this + 355))[v13 - 1] = (*(this + 355))[v13] ) /*0x4d83b2*/
        ++v13; /*0x4d83ba*/
    }
    if ( aP1 ) /*0x4d83d2*/
      (*(void (__stdcall **)(InfantryClass *))(*(_DWORD *)aP1->__pad_0 + 8))(aP1); /*0x4d83d7*/
    return 1; /*0x4d83e2*/
  }
  if ( *(this + 43) != (_DWORD *)25 || !*(this + 47) ) /*0x4d83ee*/
  {
    v15 = (int)this->gattlingValue; /*0x4d83f8*/
    if ( v15 != -1 ) /*0x4d8401*/
    {
      if ( (_BYTE)a3 ) /*0x4d8409*/
      {
        Element = (IUnknown *)Array::GetElement( /*0x4d8420*/
                                *(_DWORD **)(HouseClass_Player.field_0 + 4 * v15 + 528),
                                (CampaignScore *)*((char *)this + 1670));
        v17 = (IUnknown *)VectorClass::GetAtChecked( /*0x4d8438*/
                            *(int **)(HouseClass_Player.field_0 + 4 * (_DWORD)this->gattlingValue + 528),
                            Element);
        BuildingClass::ValidateFoundation_0((BuildingClass *)this, v17); /*0x4d8440*/
        ecx4 = aP1; /*0x4d8445*/
      }
    }
  }
  if ( !bl4 ) /*0x4d844b*/
  {
    if ( ((int (__thiscall *)(_DWORD **))(*this)[11])(this) == 15 ) /*0x4d846c*/
    {
      if ( *(this + 134) ) /*0x4d8472*/
      {
        if ( !*(this + 183) ) /*0x4d8480*/
        {
          v18 = (_DWORD *)((int (__thiscall *)(_DWORD **, _DWORD *))(*this)[18])(this, v27); /*0x4d8498*/
          v19 = *v18 / 256; /*0x4d84c5*/
          v20 = v18[1] / 256; /*0x4d84c8*/
          v21 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(this + 134) + 72))(*(this + 134), varC); /*0x4d84cb*/
          v22 = *v21; /*0x4d84dc*/
          v23 = v21[1] / 256; /*0x4d84ee*/
          if ( (unsigned __int16)(v22 / 256) != (_WORD)v19 || (_WORD)v23 != (_WORD)v20 ) /*0x4d84f9*/
          {
            v24 = (int)*(this + 134); /*0x4d8501*/
            if ( *(this + 43) != (_DWORD *)11 ) /*0x4d850a*/
            {
              ((void (__thiscall *)(_DWORD **, int, _DWORD))(*this)[122])(this, 2, 0); /*0x4d8514*/
              TechnoClass::SetFocus(this, 0); /*0x4d851e*/
            }
            ((void (__thiscall *)(_DWORD **, int, int))(*this)[288])(this, v24, 1); /*0x4d852a*/
          }
        }
      }
    }
    ((void (__thiscall *)(_DWORD **, _DWORD, _DWORD))(*this)[337])(this, 0, 0); /*0x4d8538*/
    if ( aP1 ) /*0x4d8544*/
      (*(void (__stdcall **)(InfantryClass *))(*(_DWORD *)aP1->__pad_0 + 8))(aP1); /*0x4d8549*/
    return 0; /*0x4d8549*/
  }
  if ( ecx4 ) /*0x4d844f*/
    (*(void (__stdcall **)(InfantryClass *))(*(_DWORD *)ecx4->__pad_0 + 8))(ecx4); /*0x4d8454*/
  return 1; /*0x4d83da*/
}


// ==== 0x004D8560  FootClass::GetCoords  this=FootClass  sig=csp ====
_DWORD *__thiscall FootClass::GetCoords(#377 *this, _DWORD *a2)
{
  int v3; // ecx
  _DWORD *BridgeAwareCoords; // eax
  _BYTE v6[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) != 1 /*0x4d8591*/
    && ((v3 = this->FootClass_field_5A0) != 0 || (v3 = this->FootClass_field_5A4) != 0) )
  {
    BridgeAwareCoords = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 88))(v3, v6); /*0x4d8584*/
  }
  else
  {
    BridgeAwareCoords = (_DWORD *)BuildingClass::GetBridgeAwareCoords(this); /*0x4d85a6*/
  }
  *a2 = *BridgeAwareCoords; /*0x4d85b5*/
  a2[1] = BridgeAwareCoords[1]; /*0x4d85ba*/
  a2[2] = BridgeAwareCoords[2]; /*0x4d85c1*/
  return a2; /*0x4d85bd*/
}


// ==== 0x004D85D0  FootClass::UpdateAI  this=FootClass  sig=csp ====
char FootClass::UpdateAI(IUnknown *aP0, int a2, int a3, int a4)
{
  FootClass *v4; // ecx
  int ebp0; // ebp
  int edi0; // edi
  FootClass *v7; // esi
  IUnknown *v5; // eax
  MouseClass *v6; // edi
  IUnknown *v10; // eax
  int v11; // ebp
  IUnknown *v12; // eax
  IUnknown *v13; // eax
  int i; // ebp
  int v15; // eax
  __int16 v16; // dx
  _BYTE *v17; // eax
  int v18; // ebp
  int v19; // edx
  __int16 v20; // cx
  _BYTE *v21; // eax
  int v22; // ebp
  _WORD *v23; // eax
  int v24; // ecx
  __int16 dx14; // dx
  _DWORD *v26; // eax
  int ClosestObjectCell; // eax
  ObjectClass *v25; // edi
  int v29; // eax
  _BYTE *sprayOffsetIndex; // edi
  char v31; // bl
  int v32; // ebp
  TagClass *v30; // edi
  _DWORD *v34; // eax
  int v35; // ebx
  int v36; // ecx
  int edx25; // edx
  int eax25a; // eax
  double v39; // st7
  BuildingTypeClass *v37; // edi
  IUnknown *v38; // ebx
  int v42; // eax
  void *eax34; // eax
  __int16 v44; // bx
  IUnknown *v45; // ebp
  TagClass *v43; // edi
  IUnknown **v47; // eax
  IUnknown **v48; // eax
  IUnknown **v49; // eax
  IUnknown **eax39a; // eax
  int j; // ebp
  void *v52; // eax
  TagClass *v50; // edi
  IUnknown **eax44; // eax
  int k; // ebp
  void *v56; // eax
  TagClass *v54; // edi
  IUnknown **v58; // eax
  int eax54; // eax
  TagClass *v57; // edi
  _DWORD *v61; // eax
  IUnknown *v59; // edx
  CellStruct *v60; // eax
  int v64; // ecx
  CellStruct *v62; // eax
  _DWORD *v66; // eax
  _DWORD *v67; // eax
  _DWORD *v68; // edi
  int v69; // eax
  char result; // al
  IUnknown *v71; // eax
  int planningPathIdx; // eax
  IUnknown *Element; // eax
  __int16 v74; // dx
  int v75; // [esp+48h] [ebp-58h]
  IUnknown *v76; // [esp+48h] [ebp-58h]
  int v77; // [esp+58h] [ebp-48h]
  int v78; // [esp+5Ch] [ebp-44h]
  int v79; // [esp+68h] [ebp-38h] BYREF
  IUnknown *aP3; // [esp+6Ch] [ebp-34h]
  IUnknown *v81; // [esp+70h] [ebp-30h] BYREF
  IUnknown *v82; // [esp+74h] [ebp-2Ch] BYREF
  _BYTE v83[4]; // [esp+78h] [ebp-28h] BYREF
  int v84; // [esp+7Ch] [ebp-24h] BYREF
  int v85; // [esp+80h] [ebp-20h]
  int v86; // [esp+84h] [ebp-1Ch]
  int v87; // [esp+88h] [ebp-18h] BYREF
  _BYTE v88[4]; // [esp+90h] [ebp-10h] BYREF
  _BYTE v89[4]; // [esp+94h] [ebp-Ch] BYREF
  _BYTE v90[4]; // [esp+98h] [ebp-8h] BYREF
  _BYTE v91[4]; // [esp+9Ch] [ebp-4h] BYREF

  v7 = v4; /*0x4d85dc*/
  if ( aP0 == (IUnknown *)2 ) /*0x4d85de*/
  {
    v5 = *(IUnknown **)v4->__pad_0; /*0x4d85e4*/
    v4->FootClass_field_bool_6B2 = 0; /*0x4d85e6*/
    v4->FootClass_field_bool_6B0 = 0; /*0x4d85ed*/
    if ( *(_DWORD *)((*(int (**)(void))&v5->__pad_68[28])() + 1520) ) /*0x4d85fa*/
    {
      (*(void (__thiscall **)(FootClass *, int))(*(_DWORD *)v7->__pad_0 + 1260))(v7, v7->lastMapCoords[0]); /*0x4d8611*/
      (*(void (__thiscall **)(FootClass *, _DWORD))(*(_DWORD *)v7->__pad_0 + 1256))( /*0x4d8621*/
        v7,
        *(_DWORD *)&stru_89E138.__pad_579C[66740]);
    }
    v78 = ebp0; /*0x4d862e*/
    v77 = edi0; /*0x4d862f*/
    v6 = (MouseClass *)v7->lastMapCoords; /*0x4d8630*/
    if ( LOWORD(v7->lastMapCoords[0]) || HIWORD(v7->lastMapCoords[0]) ) /*0x4d8638*/
    {
      v10 = (IUnknown *)(*(int (__thiscall **)(FootClass *, IUnknown **, int))(*(_DWORD *)v7->__pad_0 + 440))( /*0x4d864b*/
                          v7,
                          &v82,
                          v77);
      v11 = Cell::PosToLinearIndex(v10); /*0x4d8662*/
      if ( Cell::PosToLinearIndex((IUnknown *)v7->lastMapCoords) != v11 ) /*0x4d866b*/
      {
        v12 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v7->lastMapCoords); /*0x4d8673*/
        FootClass::ApplyThreatBounds(v7, v12); /*0x4d867b*/
        v13 = (IUnknown *)(*(int (__thiscall **)(FootClass *))(*(_DWORD *)v7->__pad_0 + 444))(v7); /*0x4d8684*/
        FootClass::SetThreatBounds(v7, v13); /*0x4d868d*/
      }
      for ( i = 0; i < 8; ++i ) /*0x4d8692*/
      {
        v15 = i & 7; /*0x4d8699*/
        v16 = HIWORD(v7->lastMapCoords[0]) + *(_WORD *)&stru_89E138.__pad_14B0[4 * v15 + 162]; /*0x4d86ac*/
        LOWORD(v81) = *(_WORD *)&stru_89E138.__pad_14B0[4 * v15 + 160] + LOWORD(v6->field_0); /*0x4d86b7*/
        HIWORD(v81) = v16; /*0x4d86c0*/
        v82 = v81; /*0x4d86cf*/
        v17 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v82); /*0x4d86d3*/
        --v17[290]; /*0x4d86e4*/
      }
      v18 = 0; /*0x4d86fd*/
      v6->field_0 = *(_DWORD *)(*(int (__thiscall **)(FootClass *, _BYTE *))(*(_DWORD *)v7->__pad_0 + 440))(v7, v83); /*0x4d86ff*/
      do /*0x4d8757*/
      {
        v19 = v18 & 7; /*0x4d8706*/
        v20 = *(_WORD *)&stru_89E138.__pad_14B0[4 * v19 + 160] + LOWORD(v6->field_0); /*0x4d8709*/
        LOWORD(v19) = *(_WORD *)&stru_89E138.__pad_14B0[4 * v19 + 162]; /*0x4d8718*/
        LOWORD(aP3) = v20; /*0x4d8720*/
        HIWORD(aP3) = HIWORD(v7->lastMapCoords[0]) + v19; /*0x4d8733*/
        v81 = aP3; /*0x4d873c*/
        v21 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v81); /*0x4d8740*/
        ++v18; /*0x4d874d*/
        ++v21[290]; /*0x4d8751*/
      }
      while ( v18 < 8 ); /*0x4d8757*/
    }
    if ( v7->owner == (void *)2 ) /*0x4d8760*/
    {
      v22 = 0; /*0x4d8766*/
      while ( 1 ) /*0x4d8771*/
      {
        v23 = (_WORD *)(*(int (__thiscall **)(FootClass *, IUnknown **))(*(_DWORD *)v7->__pad_0 + 440))(v7, &v82); /*0x4d8771*/
        v24 = v22 & 7; /*0x4d877b*/
        dx14 = *(_WORD *)&stru_89E138.__pad_14B0[4 * v24 + 160]; /*0x4d877e*/
        LOWORD(v24) = v23[1] + *(_WORD *)&stru_89E138.__pad_14B0[4 * v24 + 162]; /*0x4d8794*/
        LOWORD(aP3) = *v23 + dx14; /*0x4d8798*/
        HIWORD(aP3) = v24; /*0x4d87a1*/
        v81 = aP3; /*0x4d87b0*/
        if ( LayerClass::IsWithinUsableArea(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v81, (TechnoClass *)1) ) /*0x4d87b4*/
        {
          v84 = 0; /*0x4d87ce*/
          v85 = 0; /*0x4d87d2*/
          v26 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v81); /*0x4d87d6*/
          ClosestObjectCell = Object::FindClosestObjectCell(v26, (IUnknown *)&v84, 0, 0); /*0x4d87dd*/
          v25 = (ObjectClass *)ClosestObjectCell; /*0x4d87e2*/
          if ( ClosestObjectCell ) /*0x4d87e6*/
          {
            if ( !Object::IsAlliedWithObjectHouse(*(_DWORD **)(ClosestObjectCell + 540), (IUnknown *)v7) /*0x4d8810*/
              && (*(_BYTE *)((*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v25->__pad_0 + 132))(v25) + 3229)
               || TechnoClass::HasVoiceResponse((TechnoClass *)v25, 12)) )
            {
              break; /*0x4d8810*/
            }
          }
        }
        if ( ++v22 >= 8 ) /*0x4d881d*/
          goto LABEL_22; /*0x4d881d*/
      }
      (*(void (__thiscall **)(FootClass *))(*(_DWORD *)v7->__pad_0 + 252))(v7); /*0x4d8829*/
    }
LABEL_22:
    v29 = (*(int (__thiscall **)(FootClass *, int, int))(*(_DWORD *)v7->__pad_0 + 740))(v7, v7->sprayOffsetIndex, v77); /*0x4d882f*/
    sprayOffsetIndex = (_BYTE *)v7->sprayOffsetIndex; /*0x4d8840*/
    v31 = 0; /*0x4d8846*/
    v32 = v29; /*0x4d884a*/
    if ( sprayOffsetIndex && (sprayOffsetIndex[20] & 4) != 0 ) /*0x4d8856*/
    {
      if ( *(_BYTE *)((*(int (__thiscall **)(FootClass *, int))(*(_DWORD *)v7->__pad_0 + 132))(v7, v78) + 1508) ) /*0x4d8866*/
      {
        v30 = (TagClass *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)sprayOffsetIndex + 72))( /*0x4d8882*/
                            sprayOffsetIndex,
                            v88);
        v34 = (_DWORD *)(*(int (__thiscall **)(FootClass *, _BYTE *))(*(_DWORD *)v7->__pad_0 + 72))(v7, v90); /*0x4d888b*/
        v35 = *(_DWORD *)&v30->__pad_0[4]; /*0x4d8892*/
        v36 = *v34 - *(_DWORD *)v30->__pad_0; /*0x4d8895*/
        edx25 = v34[1]; /*0x4d8897*/
        eax25a = v34[2]; /*0x4d889a*/
        v85 = v36; /*0x4d889f*/
        v86 = edx25 - v35; /*0x4d88a3*/
        v87 = eax25a - *(_DWORD *)&v30->__pad_0[8]; /*0x4d88b3*/
        v39 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x4d88d8*/
                                            (double)v36 * (double)v36
                                          + (double)v87 * (double)v87
                                          + (double)v86 * (double)v86));
        v37 = (BuildingTypeClass *)Math::RoundToInt(v39); /*0x4d88ea*/
        v31 = (int)v37 < (*(int (__thiscall **)(FootClass *, int))(*(_DWORD *)v7->__pad_0 + 360))(v7, v32); /*0x4d88f4*/
      }
      else
      {
        v38 = *(IUnknown **)v7->__pad_0; /*0x4d88fb*/
        v42 = (*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)sprayOffsetIndex + 1264))(sprayOffsetIndex, v91); /*0x4d8905*/
        v31 = (*(int (__thiscall **)(FootClass *, int))v38->__pad_164)(v7, v42); /*0x4d8914*/
      }
    }
    if ( ((*(int (__thiscall **)(FootClass *))(*(_DWORD *)v7->__pad_0 + 388))(v7) == 21 /*0x4d8956*/
       || (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v7->__pad_0 + 388))(v7) == 11
       || (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v7->__pad_0 + 388))(v7) == 1
       || (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v7->__pad_0 + 388))(v7) == 15)
      && v31
      && !*(_DWORD *)&v7->__pad_58C[12] )
    {
      (*(void (__thiscall **)(FootClass *, _DWORD, int))(*(_DWORD *)v7->__pad_0 + 1152))(v7, 0, 1); /*0x4d8968*/
      v7->pathDirections[0] = -1; /*0x4d896e*/
    }
    v79 = *(_DWORD *)(*(int (__thiscall **)(FootClass *, _BYTE *))(*(_DWORD *)v7->__pad_0 + 440))(v7, v83); /*0x4d8993*/
    eax34 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v79); /*0x4d8997*/
    v44 = HIWORD(v79); /*0x4d89a1*/
    v45 = (IUnknown *)eax34; /*0x4d89a6*/
    v82 = (IUnknown *)(__int16)v79; /*0x4d89a8*/
    aP3 = (IUnknown *)eax34; /*0x4d89ac*/
    v43 = (TagClass *)*((_DWORD *)eax34 + 15); /*0x4d89b6*/
    if ( (*((_DWORD *)eax34 + 80) & 0x500) == 0 || v7->onBridge ) /*0x4d89be*/
    {
      if ( v43 ) /*0x4d89ce*/
      {
        v47 = (IUnknown **)(*(int (__thiscall **)(FootClass *, IUnknown **))(*(_DWORD *)v7->__pad_0 + 440))(v7, &v81); /*0x4d89e1*/
        TeamClass::Update_0((void **)v43, 1, (AbstractClass *)v7, *v47, 0, 0); /*0x4d89ef*/
        v48 = (IUnknown **)(*(int (__thiscall **)(FootClass *, IUnknown **))(*(_DWORD *)v7->__pad_0 + 440))(v7, &v81); /*0x4d8a01*/
        TeamClass::Update_0((void **)v43, 59, (AbstractClass *)v7, *v48, 0, 0); /*0x4d8a0f*/
        if ( (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v7->__pad_0 + 44))(v7) == 15 ) /*0x4d8a1e*/
        {
          if ( *(_BYTE *)(*(_DWORD *)v7[1].__pad_0 + 3780) ) /*0x4d8a26*/
          {
            v49 = (IUnknown **)(*(int (__thiscall **)(FootClass *, IUnknown **))(*(_DWORD *)v7->__pad_0 + 440))( /*0x4d8a3d*/
                                 v7,
                                 &v81);
            TeamClass::Update_0((void **)v43, 53, (AbstractClass *)v7, *v49, 0, 0); /*0x4d8a4b*/
            eax39a = (IUnknown **)(*(int (__thiscall **)(FootClass *, IUnknown **))(*(_DWORD *)v7->__pad_0 + 440))( /*0x4d8a5d*/
                                    v7,
                                    &v81);
            TeamClass::Update_0((void **)v43, 54, (AbstractClass *)v7, *eax39a, 0, 0); /*0x4d8a6b*/
          }
        }
      }
    }
    if ( (v45->field_140 & 0x100000) != 0 ) /*0x4d8a7a*/
    {
      for ( j = 0; j < *(int *)&stru_87C374.__pad_14B0[8432]; ++j ) /*0x4d8a85*/
      {
        HIWORD(v81) = v44; /*0x4d8a9a*/
        LOWORD(v81) = *(_WORD *)&stru_87C374.__pad_14B0[8424] + j; /*0x4d8a9f*/
        v52 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v81); /*0x4d8aa4*/
        v50 = (TagClass *)*((_DWORD *)v52 + 15); /*0x4d8aa9*/
        aP3 = (IUnknown *)v52; /*0x4d8aac*/
        if ( v50 && TagClass::HasCrossesHorizontalLineEvent(v50) ) /*0x4d8ab6*/
        {
          eax44 = (IUnknown **)(*(int (__thiscall **)(FootClass *, _BYTE *))(*(_DWORD *)v7->__pad_0 + 440))(v7, v83); /*0x4d8acc*/
          TeamClass::Update_0((void **)v50, 25, (AbstractClass *)v7, *eax44, 0, 0); /*0x4d8ada*/
        }
      }
      v45 = aP3; /*0x4d8ae9*/
    }
    if ( (v45->field_140 & 0x200000) != 0 ) /*0x4d8af7*/
    {
      for ( k = 0; k < *(int *)&stru_87C374.__pad_14B0[8436]; ++k ) /*0x4d8b02*/
      {
        LOWORD(v81) = (_WORD)v82; /*0x4d8b0e*/
        HIWORD(v81) = *(_WORD *)&stru_87C374.__pad_14B0[8428] + k; /*0x4d8b1b*/
        v56 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v81); /*0x4d8b25*/
        v54 = (TagClass *)*((_DWORD *)v56 + 15); /*0x4d8b2a*/
        if ( v54 && TagClass::HasCrossesVerticalLineEvent(*((_DWORD **)v56 + 15)) ) /*0x4d8b33*/
        {
          v58 = (IUnknown **)(*(int (__thiscall **)(FootClass *, _BYTE *))(*(_DWORD *)v7->__pad_0 + 440))(v7, v83); /*0x4d8b49*/
          TeamClass::Update_0((void **)v54, 26, (AbstractClass *)v7, *v58, 0, 0); /*0x4d8b57*/
        }
      }
      v45 = aP3; /*0x4d8b66*/
    }
    eax54 = 0; /*0x4d8b70*/
    for ( HouseClass_Player.field_70 = 0; HouseClass_Player.field_70 < dword_8B41B8; eax54 = ++HouseClass_Player.field_70 ) /*0x4d8b79*/
    {
      v57 = (TagClass *)*((_DWORD *)unk_8B41AC + eax54); /*0x4d8b85*/
      if ( v57 ) /*0x4d8b8a*/
      {
        if ( TagClass::HasZoneEntryByEvent(*((_DWORD **)unk_8B41AC + eax54)) ) /*0x4d8b92*/
        {
          v61 = (_DWORD *)(*(int (__thiscall **)(FootClass *, _BYTE *))(*(_DWORD *)v7->__pad_0 + 76))(v7, v89); /*0x4d8baa*/
          LOWORD(aP3) = *v61 / 256; /*0x4d8bc1*/
          v59 = *(IUnknown **)v7->__pad_0; /*0x4d8bd2*/
          HIWORD(aP3) = v61[1] / 256; /*0x4d8bd7*/
          v81 = aP3; /*0x4d8be0*/
          v75 = (*(int (__thiscall **)(FootClass *))&v59->__pad_A8[20])(v7); /*0x4d8bec*/
          v60 = FootClass::processScriptAction(v57, (TagClass *)&v81); /*0x4d8bf4*/
          v64 = *((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v60) + 80) >> 8; /*0x4d8c0c*/
          LOBYTE(v64) = v64 & 1; /*0x4d8c0f*/
          v76 = *(IUnknown **)((*(int (__thiscall **)(FootClass *, int, int))(*(_DWORD *)v7->__pad_0 + 132))( /*0x4d8c25*/
                                 v7,
                                 v64,
                                 v75)
                             + 1460);
          v62 = FootClass::processScriptAction(v57, (TagClass *)&v84); /*0x4d8c2e*/
          if ( MapSeed::CheckTileMatch(&stru_87C374.__pad_14B0[8132], (IUnknown *)v62, (IUnknown *)&v82, v76, 0, 0, 0) ) /*0x4d8c39*/
          {
            v66 = (_DWORD *)(*(int (__thiscall **)(FootClass *, int *, _DWORD))(*(_DWORD *)v7->__pad_0 + 76))( /*0x4d8c4d*/
                              v7,
                              &v87,
                              0);
            LOWORD(aP3) = *v66 / 256; /*0x4d8c64*/
            HIWORD(aP3) = v66[1] / 256; /*0x4d8c7a*/
            TeamClass::Update_0((void **)v57, 24, (AbstractClass *)v7, aP3, 0, 0); /*0x4d8c87*/
          }
        }
      }
    }
    v67 = Cell::IsBridge(v45); /*0x4d8ca7*/
    v68 = v67; /*0x4d8cac*/
    if ( v67 ) /*0x4d8cb2*/
    {
      if ( *(_BYTE *)(v67[328] + 5823) ) /*0x4d8cba*/
      {
        if ( (int)v67[390] < 8 ) /*0x4d8ccb*/
        {
          v69 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v7->__pad_0 + 44))(v7); /*0x4d8cd1*/
          if ( v69 > 0 && (v69 <= 2 || v69 == 15) && v7->health > 0 ) /*0x4d8cea*/
            (*(void (__thiscall **)(FootClass *, int *, _DWORD, _DWORD, _DWORD *, int, int, _DWORD))(*(_DWORD *)v7->__pad_0 + 364))( /*0x4d8d05*/
              v7,
              &v7->health,
              0,
              *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4008),
              v68,
              1,
              1,
              0);
        }
      }
    }
    if ( v7->onBridge ) /*0x4d8d0b*/
    {
      v84 = v7->location[0]; /*0x4d8d23*/
      v85 = v7->location[1]; /*0x4d8d2f*/
      v86 = v7->location[2]; /*0x4d8d3b*/
      if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v84) + 80) & 0x100) == 0 ) /*0x4d8d4d*/
        (*(void (__thiscall **)(FootClass *))(*(_DWORD *)v7->__pad_0 + 236))(v7); /*0x4d8d53*/
    }
    result = v7->isAliveFlag; /*0x4d8d59*/
    if ( !result ) /*0x4d8d61*/
      return result; /*0x4d8d61*/
    v71 = (IUnknown *)(*(int (__thiscall **)(FootClass *, int *))(*(_DWORD *)v7->__pad_0 + 440))(v7, &v84); /*0x4d8d72*/
    if ( !LayerClass::IsWithinUsableArea(&stru_87C374.__pad_14B0[8132], v71, (TechnoClass *)1) /*0x4d8d8b*/
      && (*(unsigned __int8 (__thiscall **)(FootClass *))(*(_DWORD *)v7->__pad_0 + 1244))(v7) )
    {
      return (*(char (__thiscall **)(FootClass *))(*(_DWORD *)v7->__pad_0 + 248))(v7); /*0x4d8da4*/
    }
    if ( v7->isSelected ) /*0x4d8da7*/
    {
      if ( !(unsigned __int8)House::IsHumanPlayer((#375 *)v7->focus) ) /*0x4d8db7*/
      {
        v84 = v7->location[0]; /*0x4d8dcc*/
        v85 = v7->location[1]; /*0x4d8dd8*/
        v86 = v7->location[2]; /*0x4d8ddf*/
        if ( Cell::IsPassable((IUnknown *)&v84) ) /*0x4d8de8*/
          (*(void (__thiscall **)(FootClass *))(*(_DWORD *)v7->__pad_0 + 336))(v7); /*0x4d8df5*/
      }
    }
  }
  planningPathIdx = v7->planningPathIdx; /*0x4d8dff*/
  if ( planningPathIdx != -1 ) /*0x4d8e08*/
  {
    Element = (IUnknown *)Array::GetElement( /*0x4d8e25*/
                            *(_DWORD **)(HouseClass_Player.field_0 + 4 * planningPathIdx + 528),
                            (CampaignScore *)v7->waypointIndex);
    if ( Element ) /*0x4d8e2e*/
    {
      LOWORD(v81) = Element->field_0 / 256; /*0x4d8e42*/
      HIWORD(v81) = Element->field_4 / 256; /*0x4d8e56*/
      v74 = (__int16)v81; /*0x4d8e60*/
      if ( *(IUnknown **)&stru_87C374.__pad_14B0[12672] == Element ) /*0x4d8e6a*/
      {
        LOWORD(v81) = *(_DWORD *)&stru_87C374.__pad_14B0[12676] / 256; /*0x4d8e7d*/
        HIWORD(v81) = *(_DWORD *)&stru_87C374.__pad_14B0[12680] / 256; /*0x4d8e93*/
        v74 = (__int16)v81; /*0x4d8e98*/
      }
      if ( __PAIR32__(HIWORD(v81) + *(_WORD *)v7->unknownShort526, v74 + *(_WORD *)v7->unknownShort524) != *(_DWORD *)v7->unknownShort528 ) /*0x4d8ebd*/
      {
        BuildingClass::ValidateFoundation_0((BuildingClass *)v7, Element); /*0x4d8ecb*/
        return FootClass::CompleteProduction((#377 *)v7); /*0x4d8ee1*/
      }
    }
    else
    {
      v81 = 0; /*0x4d8ef2*/
      v7->planningPathIdx = -1; /*0x4d8f00*/
      v7->waypointIndex = 0; /*0x4d8f0a*/
      *(_DWORD *)v7->unknownShort524 = 0; /*0x4d8f11*/
      *(_DWORD *)v7->unknownShort528 = 0; /*0x4d8f17*/
    }
  }
  return FootClass::CompleteProduction((#377 *)v7); /*0x4d8d9f*/
}


// ==== 0x004D8F40  FootClass::OverrideMission_SyncLog  this=FootClass  sig=csp ====
int __thiscall FootClass::OverrideMission_SyncLog(#377 *this, int a2, int a3, int a4)
{
  this->FootClass_field_5A8 = this->FootClass_field_5A4; /*0x4d8f5b*/
  MissionClass::OverrideMission_SyncLog(this); /*0x4d8f61*/
  return (*(int (__thiscall **)(#377 *, int, int))(*(_DWORD *)this + 1152))(this, a4, 1); /*0x4d8f73*/
}


// ==== 0x004D8F80  FootClass::ConditionalAction  this=FootClass  sig=csp ====
char __thiscall FootClass_ConditionalAction(_DWORD *this)
{
  if ( !(unsigned __int8)BuildingClass::CheckOccupantState() ) /*0x4d8f83*/
    return 0; /*0x4d8fa3*/
  (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, this->FootClass_field_5A8, 1); /*0x4d8f99*/
  return 1; /*0x4d8fa1*/
}


// ==== 0x004D8FB0  FootClass::MissionDispatch  this=FootClass  sig=csp ====
int __thiscall FootClass::MissionDispatch(int *this, TechnoClass *aP1, int a3, TechnoClass *aP3)
{
  TechnoClass *v4; // edi
  IUnknown *v6; // eax
  _DWORD *v7; // eax
  int result; // eax
  TechnoClass *v9; // ebp
  _DWORD *v10; // eax
  int v11; // edi
  int v12; // ebx
  _WORD *v13; // eax
  TechnoClass *v14; // edx
  int *v15; // esi
  int v16; // [esp+0h] [ebp-28h]
  TechnoClass *v17; // [esp+4h] [ebp-24h]
  _DWORD v18[3]; // [esp+10h] [ebp-18h] BYREF
  _BYTE v19[4]; // [esp+1Ch] [ebp-Ch] BYREF
  TechnoClass *v20; // [esp+20h] [ebp-8h]

  v4 = (TechnoClass *)a3; /*0x4d8fb7*/
  switch ( a3 )
  {
    case 17:
      if ( (*(int (__thiscall **)(int *))(*this + 388))(this) != 7 && *(this + 45) != 7 ) /*0x4d922f*/
        goto LABEL_16; /*0x4d922f*/
      TechnoClass::Mission_RepairDispatch(aP1, (int)v4, aP3, v16, v17); /*0x4d9242*/
      return 1; /*0x4d9242*/
    case 18:
      v9 = aP3; /*0x4d9139*/
      if ( *(_DWORD *)aP3->__pad_0 ) /*0x4d913d*/
      {
        v10 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)aP3->__pad_0 + 72))( /*0x4d914b*/
                          *(_DWORD *)aP3->__pad_0,
                          v19);
        v11 = *v10 / 256; /*0x4d9174*/
        v12 = v10[1] / 256; /*0x4d9177*/
        v13 = (_WORD *)(*(int (__thiscall **)(int *, int *))(*this + 440))(this, &a3); /*0x4d917a*/
        if ( *v13 == (_WORD)v11 && v13[1] == (_WORD)v12 ) /*0x4d9189*/
          return 20; /*0x4d918e*/
      }
      if ( (*(int (__thiscall **)(int *))(*this + 388))(this) == 5 && *(this + 45) == -1 ) /*0x4d91b0*/
        (*(void (__thiscall **)(int *, int, _DWORD))(*this + 488))(this, 2, 0); /*0x4d91ba*/
      if ( *(this + 45) == 7 && (*(unsigned __int8 (__thiscall **)(int *))(*this + 512))(this) ) /*0x4d91cd*/
        (*(void (__thiscall **)(int *))(*this + 492))(this); /*0x4d91db*/
      (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1152))(this, *(_DWORD *)v9->__pad_0, 1); /*0x4d91eb*/
      v14 = v20; /*0x4d91f6*/
      v15 = this + 50; /*0x4d91fc*/
      *v15 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x4d9203*/
      v15[1] = (int)v14; /*0x4d920a*/
      v15[2] = 0; /*0x4d920d*/
      return 1; /*0x4d9197*/
    case 19:
      *(_DWORD *)aP3->__pad_0 = *(this + 361); /*0x4d90f2*/
      if ( !*(this + 361) ) /*0x4d90f4*/
        return 1; /*0x4d90f4*/
      if ( !*(this + 413) ) /*0x4d9102*/
        WinAPI::Wrapper(-2147467261); /*0x4d9111*/
      if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 16))(*(this + 413)) ) /*0x4d911f*/
        return 10; /*0x4d912d*/
      else
        return 1; /*0x4d9247*/
    case 23:
      if ( Team::AllMembersValid(this) && *(this + 361) == Team::GetMember(this, 0) ) /*0x4d9045*/
        (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1152))(this, 0, 1); /*0x4d904f*/
      if ( !(*(int (__thiscall **)(int *))(*this + 388))(this) ) /*0x4d9059*/
      {
        (*(void (__thiscall **)(int *, int, _DWORD))(*this + 488))(this, 5, 0); /*0x4d906a*/
        if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 512))(this) ) /*0x4d9074*/
          (*(void (__thiscall **)(int *))(*this + 492))(this); /*0x4d9082*/
      }
      if ( (*(int (__thiscall **)(int *))(*this + 388))(this) == 7 ) /*0x4d9095*/
        (*(void (__thiscall **)(int *, int, _DWORD))(*this + 488))(this, 5, 0); /*0x4d909f*/
      if ( !*((_BYTE *)this + 1711) && !*(this + 361) ) /*0x4d90af*/
        (*(void (__thiscall **)(int *, char *, int, int))(*this + 372))(this, &stru_89E138.__pad_579C[66772], 1, 1); /*0x4d90c6*/
      goto LABEL_16; /*0x4d90c6*/
    case 28:
      if ( !*(this + 361) ) /*0x4d9016*/
        goto LABEL_16; /*0x4d9016*/
      result = 10; /*0x4d901f*/
      break; /*0x4d9028*/
    case 35:
      v6 = (IUnknown *)(*(int (__thiscall **)(int *, _DWORD *))(*this + 72))(this, v18); /*0x4d8fe1*/
      v7 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v6); /*0x4d8fea*/
      return aP1 != (TechnoClass *)Cell::IsBridge(v7) ? 10 : 1;
    default:
LABEL_16:
      result = TechnoClass::Mission_RepairDispatch(aP1, (int)v4, aP3, v16, v17); /*0x4d90cc*/
      break; /*0x4d90e5*/
  }
  return result; /*0x4d8ffc*/
}


// ==== 0x004D9290  FootClass::ProcessTeamAction  this=FootClass  sig=csp ====
int __thiscall FootClass_ProcessTeamAction(int *this)
{
  void *Member; // eax
  int v3; // ecx
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  char *MissionControl; // eax
  int v14; // esi
  int v16; // [esp+14h] [ebp-10h]
  int v17; // [esp+20h] [ebp-4h] BYREF

  Member = (void *)Team::GetMember(this, 0); /*0x4d9296*/
  if ( Member || (Member = AbstractClass::IsTechnoType((void *)*(this + 134))) != 0 ) /*0x4d92ac*/
  {
    if ( (*(int (__thiscall **)(int *, int, void *))(*this + 632))(this, 14, Member) == 1 || *((_BYTE *)this + 1048) ) /*0x4d92c4*/
    {
      if ( *(this + 361) || *(this + 358) <= 0 ) /*0x4d9303*/
      {
        if ( *(_BYTE *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 3284) ) /*0x4d93f2*/
        {
          v11 = *this; /*0x4d9402*/
          v16 = *(this + 361); /*0x4d9406*/
          *(this + 360) = 0; /*0x4d9409*/
          *(this + 361) = 0; /*0x4d9413*/
          (*(void (__thiscall **)(int *, int, int))(v11 + 1152))(this, v16, 1); /*0x4d941d*/
        }
      }
      else
      {
        v3 = *(this + 413); /*0x4d9309*/
        v4 = this + 413; /*0x4d9310*/
        v5 = 0; /*0x4d9316*/
        v17 = 0; /*0x4d931a*/
        if ( v3 ) /*0x4d931e*/
        {
          v6 = StreamClass::Set(&v17, this + 413); /*0x4d9325*/
          if ( v6 < 0 && v6 != -2147467262 ) /*0x4d9333*/
            WinAPI::Wrapper(v6); /*0x4d9336*/
          v5 = v17; /*0x4d933b*/
          if ( v17 ) /*0x4d9341*/
          {
            if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v17 + 20))(v17) ) /*0x4d9346*/
            {
              if ( *v4 ) /*0x4d934d*/
                (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v4 + 8))(*v4); /*0x4d9356*/
              v7 = v17; /*0x4d9359*/
              *v4 = 0; /*0x4d935d*/
              if ( !v7 ) /*0x4d9365*/
                WinAPI::Wrapper(-2147467261); /*0x4d936c*/
              (*(void (__stdcall **)(int, int *))(*(_DWORD *)v7 + 16))(v7, this + 413); /*0x4d9379*/
            }
            v5 = v17; /*0x4d937c*/
          }
        }
        if ( *(this + 358) > 0 ) /*0x4d9389*/
        {
          (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 1152))(this, *(_DWORD *)*(this + 355), 0); /*0x4d939a*/
          v8 = *(this + 358); /*0x4d93a0*/
          if ( v8 > 0 ) /*0x4d93a8*/
          {
            v9 = v8 - 1; /*0x4d93aa*/
            v10 = 0; /*0x4d93ad*/
            for ( *(this + 358) = v9; /*0x4d93b7*/
                  v10 < *(this + 358);
                  *(_DWORD *)(*(this + 355) + 4 * v10 - 4) = *(_DWORD *)(*(this + 355) + 4 * v10) )
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
      (*(void (__thiscall **)(int *, int))(*this + 628))(this, 3); /*0x4d92d4*/
      (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1156))(this, 0, 1); /*0x4d92e2*/
    }
  }
  else
  {
    if ( !(unsigned __int8)TechnoClass::PlaceAtCell(this) ) /*0x4d9427*/
    {
      v12 = *(this + 361); /*0x4d9430*/
      if ( !v12 /*0x4d9452*/
        || (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v12) != 1
        && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 361) + 44))(*(this + 361)) != 2 )
      {
        (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1156))(this, 0, 1); /*0x4d945c*/
      }
    }
    (*(void (__thiscall **)(int *))(*this + 492))(this); /*0x4d9466*/
  }
  MissionControl = MissionClass::GetMissionControl(this); /*0x4d946e*/
  v14 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d9481*/
  return v14 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2); /*0x4d9499*/
}


// ==== 0x004D94A0  ObjectClass::SetMember360  this=FootClass  sig=csp ====
int __thiscall ObjectClass_SetMember360(_DWORD *this, int a2)
{
  this->FootClass_field_5A0 = a2; /*0x4d94a4*/
  return a2; /*0x4d94aa*/
}


// ==== 0x004D94B0  FootClass::AssignDestination  this=FootClass  sig=csp ====
char __thiscall FootClass::AssignDestination(int this, int a2, TechnoClass *aP2)
{
  int v4; // esi
  char result; // al
  int v6; // eax
  int v7; // ecx
  ILocomotion *v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // eax
  int v14; // ecx
  int v15; // edx
  _DWORD *v16; // ebp
  int v17; // [esp+10h] [ebp-1Ch] BYREF
  int v18; // [esp+14h] [ebp-18h]
  _BYTE v19[16]; // [esp+1Ch] [ebp-10h] BYREF

  v4 = a2; /*0x4d94ba*/
  result = *(_BYTE *)(this + 1709); /*0x4d94be*/
  *(_DWORD *)(this + 1440) = 0; /*0x4d94c7*/
  if ( !result || !v4 ) /*0x4d94d1*/
  {
    result = *(_BYTE *)(this + 130); /*0x4d94d7*/
    if ( (!result || !v4) && (!*(_DWORD *)(this + 740) || !v4) ) /*0x4d94f3*/
    {
      if ( *(_DWORD *)(this + 684) && v4 ) /*0x4d9503*/
        TechnoClass::EjectPassengers((int *)this, 1); /*0x4d9509*/
      *(_DWORD *)(this + 1444) = v4; /*0x4d9510*/
      if ( !v4 ) /*0x4d9516*/
      {
        if ( *(_BYTE *)(this + 1709) ) /*0x4d9518*/
        {
          v6 = *(_DWORD *)(this + 688); /*0x4d9522*/
          if ( v6 ) /*0x4d952a*/
          {
            *(_DWORD *)(v6 + 684) = 0; /*0x4d952c*/
            *(_DWORD *)(this + 688) = 0; /*0x4d9532*/
            *(_BYTE *)(this + 1710) = 1; /*0x4d9538*/
          }
        }
      }
      if ( !*(_DWORD *)(this + 1444) ) /*0x4d9545*/
      {
        if ( (*(int (__thiscall **)(int))(this->fallRate)(this) != 2 /*0x4d9696*/
          || *(_DWORD *)(this + 172) != 1 && *(_DWORD *)(this + 180) != 1
          || !*(_DWORD *)(this + 692) )
        {
          if ( !*(_DWORD *)(this + 1652) ) /*0x4d969e*/
            WinAPI::Wrapper(-2147467261); /*0x4d96ab*/
          (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 72))(*(_DWORD *)(this + 1652)); /*0x4d96b9*/
          *(_DWORD *)(this + 1444) = v4; /*0x4d96bc*/
        }
        goto LABEL_43; /*0x4d96bc*/
      }
      v7 = *(_DWORD *)(this + 772); /*0x4d954b*/
      if ( v7 ) /*0x4d9553*/
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 248))(v7); /*0x4d9557*/
        *(_DWORD *)(this + 772) = 0; /*0x4d955d*/
      }
      v8 = *(ILocomotion **)(this + 1652); /*0x4d9563*/
      a2 = 0; /*0x4d9571*/
      if ( !v8 ) /*0x4d9575*/
        goto LABEL_22; /*0x4d9575*/
      v9 = StreamClass::Set2(&a2, (_DWORD *)(this + 1652)); /*0x4d957c*/
      if ( v9 < 0 && v9 != -2147467262 ) /*0x4d958a*/
        WinAPI::Wrapper(v9); /*0x4d958d*/
      if ( !a2 ) /*0x4d9598*/
LABEL_22:
        WinAPI::Wrapper(-2147467261); /*0x4d959f*/
      (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)a2 + 12))(a2, v19); /*0x4d95b0*/
      if ( !memcmp(v19, &stru_7E9A40, 0x10u) ) /*0x4d95c3*/
      {
        v10 = *(_DWORD *)(this + 1600); /*0x4d95c7*/
        v11 = *(_DWORD *)(this + 1608); /*0x4d95cd*/
        if ( v10 != -1 ) /*0x4d95dc*/
        {
          if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v10 >= v11 ) /*0x4d95e4*/
          {
LABEL_28:
            v12 = v18; /*0x4d95ec*/
            *(_DWORD *)(this + 1600) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4d95f5*/
            *(_DWORD *)(this + 1604) = v12; /*0x4d95fb*/
            *(_DWORD *)(this + 1608) = 1; /*0x4d9601*/
            goto LABEL_29; /*0x4d9601*/
          }
          v11 -= *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v10; /*0x4d95e6*/
        }
        if ( !v11 ) /*0x4d95ea*/
          goto LABEL_28; /*0x4d95ea*/
      }
LABEL_29:
      if ( *(_BYTE *)(this + 1708) ) /*0x4d9607*/
      {
        *(_BYTE *)(this + 1708) = 0; /*0x4d9611*/
      }
      else
      {
        v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)(this + 1444) + 76))( /*0x4d9628*/
                          *(_DWORD *)(this + 1444),
                          &v17,
                          this);
        if ( !*(_DWORD *)(this + 1652) ) /*0x4d9633*/
          WinAPI::Wrapper(-2147467261); /*0x4d9642*/
        (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 1652) + 68))( /*0x4d965d*/
          *(_DWORD *)(this + 1652),
          *v13,
          v13[1],
          v13[2]);
      }
      if ( a2 ) /*0x4d9668*/
        (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 8))(a2); /*0x4d966d*/
LABEL_43:
      *(_BYTE *)(this + 1719) = 0; /*0x4d96c2*/
      v14 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5992); /*0x4d96d4*/
      *(_DWORD *)(this + 1640) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4d96e0*/
      *(_DWORD *)(this + 1644) = v18; /*0x4d96ea*/
      *(_DWORD *)(this + 1648) = v14; /*0x4d96ed*/
      result = MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4d96f0*/
      v15 = v18; /*0x4d96f5*/
      v16 = (_DWORD *)(this + 1600); /*0x4d96fb*/
      *v16 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x4d9701*/
      v16[1] = v15; /*0x4d9704*/
      v16[2] = 0; /*0x4d9707*/
    }
  }
  return result; /*0x4d970a*/
}


// ==== 0x004D9720  FootClass::DispatchSell  this=FootClass  sig=csp ====
int __thiscall FootClass::DispatchSell(IUnknown *this, char a2)
{
  int v3; // ecx
  IUnknown *Member; // eax

  if ( a2 ) /*0x4d972a*/
  {
    v3 = *(_DWORD *)&this->__pad_524[176]; /*0x4d972c*/
    if ( v3 ) /*0x4d9734*/
    {
      if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[21752] ) /*0x4d973d*/
        TeamClass::LiberateMember_Start(v3, this, 0xFFFFFFFF, 0); /*0x4d9744*/
    }
    (*(void (__thiscall **)(IUnknown *, int))(this->field_0 + 628))(this, 3); /*0x4d974f*/
    return ObjectClass::Destroy2((#374 *)this); /*0x4d974f*/
  }
  Member = (IUnknown *)Team::GetMember(this, 0); /*0x4d9766*/
  if ( !Member || Object::IsAlliedWithObjectHouse((_DWORD *)this->field_21C, Member) ) /*0x4d9776*/
    return ObjectClass::Destroy2((#374 *)this); /*0x4d975f*/
  (*(void (__thiscall **)(IUnknown *, int))(this->field_0 + 628))(this, 3); /*0x4d9785*/
  return ObjectClass::Destroy2((#374 *)this); /*0x4d975d*/
}


// ==== 0x004D97A0  TechnoClass::ComputeThreatLevel  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ComputeThreatLevel(AbstractClass **this, AbstractClass *aP1)
{
  AbstractClass *v3; // ecx
  int v5; // eax
  bool v6; // cl
  int v7; // edi
  int v8; // edi
  int v9; // ebx
  int v10; // ecx
  int v11; // ecx

  if ( aP1 ) /*0x4d97aa*/
  {
    v3 = *(this + 173); /*0x4d97b0*/
    if ( v3 == aP1 ) /*0x4d97b8*/
      return -((int (__thiscall *)(AbstractClass **))(*this)[19].abstractFlags)(this); /*0x4d97c8*/
    if ( !v3 /*0x4d97d7*/
      || (v3->abstractFlags & 1) == 0
      || !(*(unsigned __int8 (__thiscall **)(AbstractClass *))(*(_DWORD *)v3->__pad_0 + 684))(v3) )
    {
      v5 = (int)*(this + 373); /*0x4d97e5*/
      v6 = v5 && *(_BYTE *)(*(_DWORD *)(v5 + 36) + 246); /*0x4d97fc*/
      if ( (!v5 || v6) /*0x4d9825*/
        && ((int (__thiscall *)(AbstractClass **))(*this)[10].referenceCount)(this) != 10
        && ((int (__thiscall *)(AbstractClass **))(*this)[19].abstractFlags)(this) )
      {
        v7 = ObjectClass::DistanceTo(this, aP1); /*0x4d983e*/
        v8 = v7 - (*(int (__thiscall **)(AbstractClass **, _DWORD))(*this)[10].__pad_0)(this, 0); /*0x4d9846*/
        v9 = ((int (__thiscall *)(AbstractClass **))(*this)[19].abstractFlags)(this) << 10; /*0x4d9854*/
        if ( v8 <= 0 ) /*0x4d9859*/
          return v9; /*0x4d98a1*/
        if ( (unsigned int)(*(int (__thiscall **)(AbstractClass **))&(*this)[25].__pad_0[8])(this) <= 1 ) /*0x4d9868*/
        {
          v10 = 1; /*0x4d98a4*/
        }
        else
        {
          v10 = (*(int (__thiscall **)(AbstractClass **))&(*this)[25].__pad_0[8])(this); /*0x4d9874*/
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
void __thiscall FootClass::Destroyed(#375 **this, int a2)
{
  __int64 v3; // rax
  _BYTE v4[4]; // [esp+4h] [ebp-4h] BYREF

  if ( (unsigned __int8)House::IsHumanPlayer(*(this + 135)) /*0x4d98dd*/
    && !*(_BYTE *)((*((int (__thiscall **)(#375 **))*this + 33))(this) + 3412) )
  {
    v3 = ((__int64 (__thiscall *)(#375 **, _BYTE *))*((_DWORD *)*this + 110))(this, v4); /*0x4d98f0*/
    if ( CreateTriggerClassIfFarEnough(7, SHIDWORD(v3), *(_DWORD *)v3) ) /*0x4d98fe*/
      VoxClass::FindAndPlay(aEvaUnitlost, -1); /*0x4d9911*/
  }
}


// ==== 0x004D9920  FootClass::SelectAutoTarget_Cloaked  this=FootClass  sig=csp ====
void *__thiscall FootClass::SelectAutoTarget_Cloaked(int this, int aP2, int aP1, TechnoClass *aP3)
{
  FootClass *v5; // eax
  void *result; // eax

  v5 = (FootClass *)aP2; /*0x4d992b*/
  if ( *(_BYTE *)(this + 1672) ) /*0x4d9923*/
    LOBYTE(v5) = aP2 & 0xFC | 1; /*0x4d9933*/
  result = TechnoClass::SelectAutoTarget_Start_AU((AbstractClass **)this, (TechnoClass *)aP1, v5, aP1, (char)aP3); /*0x4d9942*/
  if ( *(_BYTE *)(this + 1672) ) /*0x4d9947*/
  {
    if ( !result ) /*0x4d9953*/
      *(_BYTE *)(this + 1672) = 0; /*0x4d9955*/
  }
  return result; /*0x4d995b*/
}


// ==== 0x004D9960  FootClass::HandleTargetDestroyed  this=FootClass  sig=csp ====
int __thiscall FootClass::HandleTargetDestroyed(int *this, TechnoTypeClass *aP1, TechnoTypeClass *aP2)
{
  char v3; // bl
  BuildingClass *v4; // edi
  BuildingClass *v6; // eax
  int v7; // eax
  BuildingClass *v8; // eax
  bool v9; // bl
  IUnknown *v10; // eax
  _WORD *v11; // eax
  int v12; // ecx
  BuildingClass *v13; // ecx
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

  v3 = (char)aP2; /*0x4d9964*/
  v4 = (BuildingClass *)aP1; /*0x4d996b*/
  ObjectClass::NotifyExpired(this, (IUnknown *)aP1, (IUnknown *)aP2); /*0x4d9973*/
  if ( (BuildingClass *)*(this + 373) == v4 ) /*0x4d997e*/
    *(this + 373) = 0; /*0x4d9982*/
  v6 = (BuildingClass *)*(this + 421); /*0x4d998c*/
  if ( v6 == v4 && (!v6->health || !HouseClass_Player.__pad_5568[23208]) ) /*0x4d99a2*/
    *(this + 421) = 0; /*0x4d99a4*/
  v7 = *(this + 421); /*0x4d99aa*/
  if ( v7 && *(int *)(v7 + 108) > 0 ) /*0x4d99b7*/
    (*(void (__thiscall **)(_DWORD, BuildingClass *, int))(**(_DWORD **)(v7 + 1692) + 40))( /*0x4d99c6*/
      *(_DWORD *)(v7 + 1692),
      v4,
      1);
  if ( v4 == (BuildingClass *)this ) /*0x4d99cb*/
    *(this + 421) = 0; /*0x4d99cd*/
  v8 = (BuildingClass *)*(this + 374); /*0x4d99d3*/
  if ( v8 == v4 && v3 && v4 ) /*0x4d99e3*/
    *(this + 374) = v8->DamageFireAnims[4]; /*0x4d99eb*/
  if ( (BuildingClass *)*(this + 134) == v4 ) /*0x4d99f7*/
    TechnoClass::SetFocus(this, 0); /*0x4d99fc*/
  if ( (BuildingClass *)*(this + 362) == v4 ) /*0x4d9a07*/
    *(this + 362) = 0; /*0x4d9a09*/
  if ( (BuildingClass *)*(this + 361) == v4 ) /*0x4d9a15*/
  {
    v9 = 1; /*0x4d9a1f*/
    if ( !(_BYTE)aP2 ) /*0x4d9a23*/
    {
      if ( v4 ) /*0x4d9a27*/
      {
        LOBYTE(aP2) = v4->abstractFlags & 1; /*0x4d9a2e*/
        if ( (_BYTE)aP2 ) /*0x4d9a32*/
        {
          v10 = (IUnknown *)(*(int (__thiscall **)(BuildingClass *, _DWORD *))(*(_DWORD *)v4->__pad_0 + 72))(v4, v24); /*0x4d9a3d*/
          v11 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v10); /*0x4d9a46*/
          v9 = !Cell::IsPassableOffset(v11, *(IUnknown **)(*(this + 135) + 48)); /*0x4d9a60*/
        }
      }
    }
    if ( ((*(int (__thiscall **)(int *))(*this + 388))(this) != 8 /*0x4d9abb*/
       || (*(int (__thiscall **)(int *))(*this + 44))(this) != 15
       || !*(_BYTE *)(this->q1B0 + 3764)
       || (v12 = *(this + 361)) == 0
       || (*(_BYTE *)(v12 + 20) & 2) == 0
       || !*(_BYTE *)(v12 + 144)
       || *(int *)(v12 + 108) <= 0
       || (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 388))(v12) == 19)
      && v9 )
    {
      *(this + 360) = 0; /*0x4d9abd*/
      *(this + 361) = 0; /*0x4d9ac3*/
    }
  }
  v13 = (BuildingClass *)*(this + 371); /*0x4d9ac9*/
  if ( v13 == v4 ) /*0x4d9ad1*/
  {
    if ( v13 ) /*0x4d9ad5*/
    {
      v14 = (_DWORD *)(*(int (__thiscall **)(BuildingClass *, _DWORD *))(*(_DWORD *)v13->__pad_0 + 72))(v13, v24); /*0x4d9ade*/
      LOWORD(aP2) = *v14 / 256; /*0x4d9af1*/
      HIWORD(aP2) = v14[1] / 256; /*0x4d9b0a*/
      aP1 = aP2; /*0x4d9b18*/
      *(this + 370) = (int)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP1); /*0x4d9b21*/
    }
    else
    {
      *(this + 370) = 0; /*0x4d9b29*/
    }
    *(this + 371) = 0; /*0x4d9b2f*/
  }
  if ( (BuildingClass *)*(this + 370) == v4 ) /*0x4d9b3b*/
    *(this + 370) = 0; /*0x4d9b3d*/
  for ( i = 0; i < *(this + 367); ++i ) /*0x4d9b4d*/
  {
    if ( *(BuildingClass **)(*(this + 364) + 4 * i) == v4 ) /*0x4d9b58*/
    {
      v16 = *(this + 367); /*0x4d9b5a*/
      if ( i < v16 ) /*0x4d9b62*/
      {
        v17 = v16 - 1; /*0x4d9b64*/
        v18 = i; /*0x4d9b67*/
        for ( *(this + 367) = v17; /*0x4d9b71*/
              v18 < *(this + 367);
              *(_DWORD *)(*(this + 364) + 4 * v18 - 4) = *(_DWORD *)(*(this + 364) + 4 * v18) )
        {
          ++v18; /*0x4d9b79*/
        }
      }
      --i; /*0x4d9b8b*/
    }
  }
  result = *(this + 358); /*0x4d9b97*/
  for ( j = 0; j < result; ++j ) /*0x4d9ba1*/
  {
    if ( *(BuildingClass **)(*(this + 355) + 4 * j) == v4 ) /*0x4d9bac*/
    {
      v21 = *(this + 358); /*0x4d9bae*/
      if ( j < v21 ) /*0x4d9bb6*/
      {
        v22 = v21 - 1; /*0x4d9bb8*/
        v23 = j; /*0x4d9bbb*/
        for ( *(this + 358) = v22; /*0x4d9bc5*/
              v23 < *(this + 358);
              *(_DWORD *)(*(this + 355) + 4 * v23 - 4) = *(_DWORD *)(*(this + 355) + 4 * v23) )
        {
          ++v23; /*0x4d9bcd*/
        }
      }
      --j; /*0x4d9bdf*/
    }
    result = *(this + 358); /*0x4d9be0*/
  }
  return result; /*0x4d9beb*/
}


// ==== 0x004D9C00  FootClass::vt_entry_524  this=FootClass  sig=csp ====
int FootClass::vt_entry_524()
{
  return 0; /*0x4d9c02*/
}


// ==== 0x004D9C10  FootClass::Destru_vt107  this=FootClass  sig=csp ====
int __thiscall FootClass::Destru_vt107(_DWORD *this, FootClass *aP1, int a3, FootClass *aP3, int a5, char a6)
{
  if ( !this->Locomotor || !a6 ) /*0x4d9c23*/
    return 0; /*0x4d9c53*/
  if ( !this->Locomotor ) /*0x4d9c2d*/
    WinAPI::Wrapper(-2147467261); /*0x4d9c3c*/
  return (*(int (__stdcall **)(_DWORD, int))(*(_DWORD *)this->Locomotor + 28))(this->Locomotor, aP1->objectTypeFlags); /*0x4d9c4f*/
}


// ==== 0x004D9C60  ObjectClass::CheckCellFlags  this=FootClass  sig=csp ====
int __stdcall FootClass_CheckCellFlags(int a1, int a2, int *a3, _BYTE *a4, _DWORD *a5)
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
  int v18; // [esp+1Ch] [ebp+Ch]

  v5 = a5; /*0x4d9c67*/
  if ( !a5 ) /*0x4d9c72*/
  {
    v6 = ((_BYTE)a2 - 4) & 7; /*0x4d9c77*/
    v7 = *(_WORD *)(a1 + 38) + HIWORD(MEMORY[0x89F688][v6]); /*0x4d9c8e*/
    LOWORD(a5) = *(_WORD *)(a1 + 36) + LOWORD(MEMORY[0x89F688][v6]); /*0x4d9c99*/
    HIWORD(a5) = v7; /*0x4d9ca2*/
    v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a5); /*0x4d9cba*/
  }
  if ( a2 == -1 ) /*0x4d9cbf*/
  {
    if ( *a3 == -1 && (*(_DWORD *)(a1 + 320) & 0x100) != 0 ) /*0x4d9e50*/
      *a3 = *(char *)(a1 + 283) + 4; /*0x4d9e5c*/
    return 0; /*0x4d9e5c*/
  }
  if ( !v5 || !a1 ) /*0x4d9ccf*/
    return 0; /*0x4d9ccf*/
  if ( *a3 == -1 && (v5[80] & 0x100) != 0 ) /*0x4d9ce8*/
  {
    *a3 = *((char *)v5 + 283) + 4; /*0x4d9cf4*/
    if ( (*(_DWORD *)(a1 + 320) & 0x200) == 0 ) /*0x4d9d00*/
      return 7; /*0x4d9d0b*/
  }
  v10 = *(char *)(a1 + 283); /*0x4d9d14*/
  v18 = v5[80] & 0x100; /*0x4d9d20*/
  if ( v18 ) /*0x4d9d24*/
    v11 = *((char *)v5 + 283); /*0x4d9d26*/
  else
    v11 = *a3; /*0x4d9d2f*/
  v12 = v11 - v10; /*0x4d9d32*/
  v13 = abs32(v12); /*0x4d9d39*/
  if ( !v13 ) /*0x4d9d3e*/
  {
    v17 = *(_DWORD *)(a1 + 320); /*0x4d9e08*/
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
    else if ( !*(_BYTE *)(a1 + 284) ) /*0x4d9ddc*/
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
  v16 = *(_DWORD *)(a1 + 320); /*0x4d9d9a*/
  if ( (v16 & 0x100) == 0 ) /*0x4d9da6*/
    return 7; /*0x4d9dab*/
  if ( (v16 & 0x200) == 0 ) /*0x4d9dba*/
    return 7; /*0x4d9dbf*/
  *a4 = 1; /*0x4d9dcf*/
  return 0; /*0x4d9d02*/
}


// ==== 0x004D9E70  FootClass::CheckCohesion  this=FootClass  sig=csp ====
char __thiscall TeamClass::CheckCohesion(#374 *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  double v7; // st7
  int v9; // [esp+20h] [ebp-1Ch]
  _BYTE v10[12]; // [esp+24h] [ebp-18h] BYREF
  _BYTE v11[12]; // [esp+30h] [ebp-Ch] BYREF

  v2 = (*(int (__thiscall **)(#374 *))(this->fallRate)(this); /*0x4d9e78*/
  if ( v2 > 0 /*0x4d9f52*/
    && v2 <= 2
    && Team::AllMembersValid((int *)this)
    && (v3 = Array::Get(this, 0), (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) == 6)
    && *(_BYTE *)(*(_DWORD *)(Array::Get(this, 0) + 1312) + 5801)
    && (v4 = Array::Get(this, 0),
        v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 72))(v4, v10),
        v6 = (_DWORD *)(*(int (__thiscall **)(#374 *, _BYTE *))(*(_DWORD *)this + 72))(this, v11),
        v9 = v6[2] - v5[2],
        v7 = Math::Sqrt(
               (double)(*v6 - *v5) * (double)(*v6 - *v5)
             + (double)(v6[1] - v5[1]) * (double)(v6[1] - v5[1])
             + (double)v9 * (double)v9),
        (int)Math::RoundToInt(v7) < 128) )
  {
    return 1; /*0x4d9f54*/
  }
  else
  {
    return AbstractClass::COMStub_Return0_38(this); /*0x4d9f5d*/
  }
}


// ==== 0x004D9F70  FootClass::SellUnit  this=FootClass  sig=csp ====
int __thiscall BuildingClass_SellUnit(#375 **this, int a2)
{
  int result; // eax
  int v4; // eax

  result = a2; /*0x4d9f70*/
  if ( a2 ) /*0x4d9f79*/
  {
    if ( (unsigned __int8)House::IsHumanPlayer(*(this + 135)) ) /*0x4d9f81*/
    {
      VoxClass::FindAndPlay(aEvaUnitsold, -1); /*0x4d9f94*/
      PlayVocClass(*(_DWORD *)(MEMORY[0x87F7E8][7806] + 1700), 0x2000, 1.0, 0); /*0x4d9fb0*/
    }
    v4 = (*((int (__thiscall **)(#375 **))*this + 175))(this); /*0x4d9fb9*/
    HouseClass::AddPower(*(this + 135), v4); /*0x4d9fc6*/
    (*((void (__thiscall **)(#375 **))*this + 232))(this); /*0x4d9fcf*/
    (*((void (__thiscall **)(#375 **))*this + 53))(this); /*0x4d9fd9*/
    return (*((int (__thiscall **)(#375 **))*this + 62))(this); /*0x4d9fe3*/
  }
  return result; /*0x4d9fe9*/
}


// ==== 0x004D9FF0  FootClass::vt_entry_4F0  this=FootClass  sig=csp ====
_DWORD *__thiscall FootClass::vt_entry_4F0(void *this, _DWORD *a2)
{
  _DWORD *v2; // ecx
  _BYTE v4[12]; // [esp+4h] [ebp-Ch] BYREF

  v2 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 164))(this, v4); /*0x4da001*/
  *a2 = *v2; /*0x4da00b*/
  a2[1] = v2[1]; /*0x4da010*/
  a2[2] = v2[2]; /*0x4da017*/
  return a2; /*0x4da013*/
}


// ==== 0x004DA020  globalHelper_0DA020  this=AbstractClass  sig=csp ====
_DWORD *__stdcall globalHelper_0DA020(_DWORD *a0, AbstractClass *aP1)
{
  *a0 = *(_DWORD *)aP1->__pad_0; /*0x4da02a*/
  return a0; /*0x4da02c*/
}


// ==== 0x004DA030  InfantryClass::ProcessExitQueue  this=IUnknown  sig=csp ====
char __thiscall sub_4DA030(int *this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // edx

  v2 = *(this + 361); /*0x4da035*/
  if ( !v2 ) /*0x4da03d*/
  {
    v2 = *(this + 367); /*0x4da043*/
    if ( v2 ) /*0x4da04b*/
    {
      v2 = *(this + 364); /*0x4da051*/
      v3 = *(_DWORD *)v2; /*0x4da057*/
      if ( *(_DWORD *)v2 ) /*0x4da057*/
      {
        (*(void (__thiscall **)(int *, int, int))(*this + 1152))(this, v3, 1); /*0x4da062*/
        v4 = *(this + 367); /*0x4da068*/
        if ( v4 > 0 ) /*0x4da076*/
        {
          v5 = v4 - 1; /*0x4da078*/
          v6 = 0; /*0x4da07b*/
          for ( *(this + 367) = v5; /*0x4da082*/
                v6 < *(this + 367);
                *(_DWORD *)(*(this + 364) + 4 * v6 - 4) = *(_DWORD *)(*(this + 364) + 4 * v6) )
          {
            ++v6; /*0x4da087*/
          }
        }
        LOBYTE(v2) = *((_BYTE *)this + 1713); /*0x4da096*/
        if ( (_BYTE)v2 ) /*0x4da09e*/
        {
          v7 = *(this + 365); /*0x4da0a0*/
          if ( *(this + 367) < v7 /*0x4da0ca*/
            || ((LOBYTE(v2) = *((_BYTE *)this + 1465), (_BYTE)v2) || !v7)
            && (v2 = *(this + 368), v2 > 0)
            && (LOBYTE(v2) = (*(int (__thiscall **)(int *, int, _DWORD))(*(this + 363) + 8))(this + 363, v7 + v2, 0),
                (_BYTE)v2) )
          {
            v2 = *(this + 367); /*0x4da0cc*/
            v8 = *(this + 364); /*0x4da0cf*/
            *(this + 367) = v2 + 1; /*0x4da0d5*/
            *(_DWORD *)(v8 + 4 * v2) = v3; /*0x4da0d8*/
          }
        }
      }
    }
  }
  return v2; /*0x4da0db*/
}


// ==== 0x004DA0E0  BuildingClass::AddToProductionQueue  this=IUnknown  sig=csp ====
void __thiscall BuildingClass::AddToProductionQueue(int this, BuildingTypeClass *aP1)
{
  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // edx
  BuildingTypeClass *Member; // eax
  BuildingTypeClass *v10; // esi

  if ( !aP1 ) /*0x4da0eb*/
    return; /*0x4da0eb*/
  v3 = *(_DWORD *)(this + 1468); /*0x4da0f1*/
  if ( aP1 != (BuildingTypeClass *)this ) /*0x4da0f9*/
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
      *(_DWORD *)(v8 + 4 * v7) = aP1; /*0x4da157*/
    }
    goto LABEL_14; /*0x4da157*/
  }
  *(_BYTE *)(this + 1713) = 1; /*0x4da0ff*/
LABEL_14:
  if ( !*(_DWORD *)(this + 1444) && (*(int (__thiscall **)(int))(this->q184)(this) == 5 ) /*0x4da171*/
  {
    Member = (BuildingTypeClass *)Team::GetMember((_DWORD *)this, 0); /*0x4da177*/
    v10 = Member; /*0x4da17c*/
    if ( !Member /*0x4da194*/
      || (*(int (__thiscall **)(BuildingTypeClass *))(*(_DWORD *)Member->vtable0 + 44))(Member) != 6
      || !*(_BYTE *)(*(_DWORD *)&v10->DebrisTypes[524] + 5821) )
    {
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 1156))(this, 0, 1); /*0x4da1a6*/
    }
  }
}


// ==== 0x004DA1C0  FootClass::ClearSomeVector  this=ObjectClass  sig=csp ====
int __thiscall FootClass::ClearSomeVector(_DWORD *this)
{
  return (*(int (__thiscall **)(_DWORD *))(*(this + 363) + 12))(this + 363);
}


// ==== 0x004DA1D0  FootClass::CanBeControlled  this=FootClass  sig=csp ====
char __thiscall FootClass_CanBeControlled(void *this)
{
  int v3; // ecx

  if ( !*((_BYTE *)this + 981) ) /*0x4da1d3*/
    return 0; /*0x4da1dd*/
  if ( *(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 132))(this) + 3220) ) /*0x4da1eb*/
    return 1; /*0x4da1eb*/
  if ( *((_BYTE *)this + 980) ) /*0x4da1f5*/
    return 1; /*0x4da1f5*/
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 388))(this) == 4 ) /*0x4da20c*/
    return 1; /*0x4da20c*/
  v3 = this->FootClass_field_5D4; /*0x4da20e*/
  if ( v3 ) /*0x4da216*/
  {
    if ( TechnoClass::IsWaypointHidden(v3) ) /*0x4da218*/
      return 1; /*0x4da225*/
  }
  return 0; /*0x4da1df*/
}


// ==== 0x004DA230  FootClass::CanBeRecruited  this=int  sig=csp ====
char __thiscall FootClass::CanBeRecruited(_DWORD *this, AbstractClass *aP1)
{
  char result; // al
  int v4; // eax

  if ( !aP1 ) /*0x4da239*/
    return 0; /*0x4da23b*/
  if ( aP1 != (AbstractClass *)*(this + 135) ) /*0x4da247*/
    return 0; /*0x4da249*/
  if ( *((_BYTE *)this + 129) ) /*0x4da24f*/
    return 0; /*0x4da259*/
  if ( *(this + 373) ) /*0x4da25f*/
    return 0; /*0x4da269*/
  v4 = (*(int (__thiscall **)(_DWORD *))(*this + 388))(this); /*0x4da273*/
  result = IPersistStream::SetField(v4); /*0x4da27b*/
  if ( result ) /*0x4da282*/
    return *((_BYTE *)this + 1057) != 0; /*0x4da291*/
  return result; /*0x4da23d*/
}


// ==== 0x004DA2A0  FootClass::ClearSomeVector2  this=VOID_PTR  sig=csp ====
bool __thiscall FootClass::ClearSomeVector2(void *this)
{
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 388))(this) == 7; /*0x4da2ae*/
}


// ==== 0x004DA2B0  AbstractClass::COMStub_143  this=FootClass  sig=ida-proto ====
// attributes: thunk
int AbstractClass::COMStub_143()
{
  return IPersistStream::GetMaxSize();
}


// ==== 0x004DA2C0  FootClass::ProcessMovement  this=FootClass  sig=csp ====
int __thiscall FootClass_ProcessMovement(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // edx
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // ebx
  void *v11; // eax
  char *MissionControl; // eax
  int v13; // esi
  _DWORD *WaypointCoords; // [esp-10h] [ebp-50h]
  int v16; // [esp-8h] [ebp-48h]
  int v17; // [esp-8h] [ebp-48h]
  int v18; // [esp+8h] [ebp-38h] BYREF
  int v19; // [esp+Ch] [ebp-34h]
  int v20; // [esp+10h] [ebp-30h] BYREF
  int v21; // [esp+14h] [ebp-2Ch] BYREF
  int v22; // [esp+18h] [ebp-28h] BYREF
  int v23; // [esp+1Ch] [ebp-24h] BYREF
  int v24; // [esp+20h] [ebp-20h] BYREF
  int v25; // [esp+24h] [ebp-1Ch] BYREF
  _BYTE v26[12]; // [esp+28h] [ebp-18h] BYREF
  _BYTE v27[12]; // [esp+34h] [ebp-Ch] BYREF

  v2 = this->missionStatus; /*0x4da2c6*/
  if ( v2 ) /*0x4da2cf*/
  {
    if ( v2 == 1 && !this->FootClass_field_5A4 ) /*0x4da2d8*/
      this->missionStatus = 0; /*0x4da2e6*/
  }
  else if ( this->FootClass_field_5A4 ) /*0x4da2f5*/
  {
    this->missionStatus = 1; /*0x4da2ff*/
  }
  else
  {
    v3 = this->FootClass_field_5D4; /*0x4da30e*/
    v18 = 0; /*0x4da314*/
    if ( v3 && *TechnoClass::GetWaypointCoords(*(_DWORD **)(v3 + 36), &v22) != MEMORY[0x8B3D88] ) /*0x4da341*/
    {
      v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 72))(this, v26); /*0x4da35d*/
      LOWORD(v19) = *v4 / 256; /*0x4da374*/
      v5 = *this; /*0x4da385*/
      HIWORD(v19) = v4[1] / 256; /*0x4da38a*/
      v20 = v19; /*0x4da393*/
      v16 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(v5 + 132))(this) + 1660); /*0x4da3a9*/
      WaypointCoords = TechnoClass::GetWaypointCoords(*(_DWORD **)(this->FootClass_field_5D4 + 36), &v23); /*0x4da3c4*/
      v6 = FootClass::checkTurning(this->focus); /*0x4da3c5*/
      v18 = *CellClass::FindOpenNeighbor((int *)&MEMORY[0x87F7E8], &v24, v6, (int)WaypointCoords, (int)&v20, v16, 1, 0); /*0x4da3dc*/
    }
    if ( v18 == MEMORY[0x8B3D88] ) /*0x4da3eb*/
    {
      v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 72))(this, v27); /*0x4da408*/
      LOWORD(v19) = *v7 / 256; /*0x4da41f*/
      v8 = *this; /*0x4da430*/
      HIWORD(v19) = v7[1] / 256; /*0x4da435*/
      v21 = v19; /*0x4da43e*/
      v17 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(v8 + 132))(this) + 1660); /*0x4da454*/
      v9 = FootClass::checkTurning(this->focus); /*0x4da461*/
      v18 = *CellClass::FindOpenNeighbor( /*0x4da478*/
               (int *)&MEMORY[0x87F7E8],
               &v25,
               v9,
               (int)&MEMORY[0x8B3D88],
               (int)&v21,
               v17,
               1,
               0);
    }
    v10 = *this; /*0x4da47d*/
    v11 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v18); /*0x4da48b*/
    (*(void (__thiscall **)(_DWORD *, void *, int))(v10 + 1152))(this, v11, 1); /*0x4da493*/
    this->missionStatus = 1; /*0x4da499*/
  }
  MissionControl = MissionClass::GetMissionControl(this); /*0x4da4a6*/
  v13 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4da4c3*/
  return v13 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2); /*0x4da4d2*/
}


// ==== 0x004DA4E0  FootClass::CheckTargetValidity  this=FootClass  sig=csp ====
int __thiscall FootClass::CheckTargetValidity(_DWORD *this, int aP1, TechnoClass *aP2)
{
  int result; // eax

  if ( !this->Locomotor ) /*0x4da4e8*/
    return TechnoClass::UpdatePowerDrain((char *)this, (TechnoClass *)aP1, (int)aP2); /*0x4da4e8*/
  result = (*(int (__stdcall **)(_DWORD, int))(*(_DWORD *)this->Locomotor + 52))(this->Locomotor, aP1); /*0x4da50a*/
  if ( !result ) /*0x4da50f*/
    return TechnoClass::UpdatePowerDrain((char *)this, (TechnoClass *)aP1, (int)aP2); /*0x4da519*/
  return result; /*0x4da51e*/
}


// ==== 0x004DA530  FootClass::MovementAI  this=FootClass  sig=csp ====
char __fastcall FootClass_MovementAI(int a1)
{
  char result; // al
  _DWORD *v3; // eax
  int v4; // eax
  _DWORD *v5; // edi
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // ebp
  int v17; // edi
  int v18; // edx
  int v19; // eax
  char v20; // al
  int v21; // edx
  char v22; // al
  int v23; // edx
  int v24; // eax
  char v25; // al
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int (__stdcall ***v29)(_DWORD, void *, int *); // eax
  _DWORD *v30; // ebp
  int v31; // edi
  int v32; // eax
  int v33; // eax
  int v34; // esi
  int v35; // [esp+54h] [ebp-30h]
  int v36; // [esp+70h] [ebp-14h] BYREF
  int v37; // [esp+74h] [ebp-10h] BYREF
  int v38; // [esp+78h] [ebp-Ch] BYREF
  int v39; // [esp+7Ch] [ebp-8h]
  int v40; // [esp+80h] [ebp-4h]

  MovementAI::Begin(); /*0x4da539*/
  result = *(_BYTE *)(a1 + 144); /*0x4da53e*/
  if ( !result ) /*0x4da548*/
    return result; /*0x4da548*/
  *(_BYTE *)(a1 + 1715) = 0; /*0x4da54e*/
  if ( !((int)MEMORY[0xA8ED84] % *((_DWORD *)MEMORY[0x8871E0] + 1538)) /*0x4da593*/
    && !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 3383)
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 84))(a1)
    && !*(_BYTE *)(a1 + 129) )
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 72))(a1, &v38); /*0x4da5a8*/
    LOWORD(v36) = *v3 / 256; /*0x4da5bb*/
    HIWORD(v36) = v3[1] / 256; /*0x4da5d3*/
    v37 = v36; /*0x4da5dc*/
    v4 = CellCoord::To_CellObj(&v37); /*0x4da5e6*/
    v36 = Cell::GetTraversability(v4); /*0x4da5f4*/
    if ( v36 > 0 ) /*0x4da5f8*/
    {
      v5 = MEMORY[0x8871E0]; /*0x4da5fe*/
      v36 = Math::RoundToInt((double)v36 * *((double *)MEMORY[0x8871E0] + 771)); /*0x4da610*/
      result = (*(int (__thiscall **)(int, int *, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)a1 + 364))( /*0x4da629*/
                 a1,
                 &v36,
                 0,
                 v5[1549],
                 0,
                 0,
                 1,
                 0);
      if ( !*(_BYTE *)(a1 + 144) ) /*0x4da62f*/
        return result; /*0x4da635*/
    }
  }
  if ( !*(_BYTE *)(a1 + 981) ) /*0x4da63b*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 3434) ) /*0x4da64d*/
    {
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1); /*0x4da65b*/
      if ( (unsigned __int8)Type::CheckAmbiguity(v6, 1) ) /*0x4da667*/
        *(_BYTE *)(a1 + 981) = 1; /*0x4da670*/
    }
  }
  if ( !*(_DWORD *)(a1 + 1652) ) /*0x4da677*/
    WinAPI::Wrapper(-2147467261); /*0x4da684*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 128))(*(_DWORD *)(a1 + 1652)) /*0x4da6bb*/
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 84))(a1)
    && (unsigned __int8)HouseClass::IsAlliedWith(MEMORY[0xA83D4C]) )
  {
    v7 = *(_DWORD *)(a1 + 1628); /*0x4da6c8*/
    v8 = *(_DWORD *)(a1 + 1636); /*0x4da6ce*/
    if ( v7 != -1 ) /*0x4da6d7*/
    {
      if ( (int)MEMORY[0xA8ED84] - v7 >= v8 ) /*0x4da6e3*/
      {
LABEL_21:
        (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 1164))(a1, 0, 0, 0, 0); /*0x4da6ef*/
        (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 1160))(a1, 0, 0, 0, 0, 0); /*0x4da706*/
        if ( *(_DWORD *)(a1 + 612) == (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 456))(a1) ) /*0x4da72a*/
        {
          v12 = *(_DWORD *)(a1 + 160); /*0x4da750*/
          v38 = *(_DWORD *)(a1 + 156); /*0x4da753*/
          v39 = v12; /*0x4da758*/
          v40 = *(_DWORD *)(a1 + 164); /*0x4da763*/
          MapClass::RevealArea2(&v38, *(_DWORD *)(a1 + 608) - 3, *(_DWORD *)(a1 + 608) + 3, 0); /*0x4da77b*/
        }
        else
        {
          v9 = *(_DWORD *)(a1 + 160); /*0x4da72c*/
          v38 = *(_DWORD *)(a1 + 156); /*0x4da72f*/
          v10 = *(_DWORD *)(a1 + 608); /*0x4da733*/
          v11 = *(_DWORD *)(a1 + 164); /*0x4da73a*/
          v39 = v9; /*0x4da740*/
          v40 = v11; /*0x4da745*/
          MapClass::RevealArea2(&v38, 0, v10 + 3, 0); /*0x4da74e*/
        }
        v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 456))(a1); /*0x4da784*/
        v14 = v39; /*0x4da78a*/
        *(_DWORD *)(a1 + 612) = v13; /*0x4da78e*/
        *(_DWORD *)(a1 + 1628) = MEMORY[0xA8ED84]; /*0x4da79e*/
        *(_DWORD *)(a1 + 1632) = v14; /*0x4da7a4*/
        *(_DWORD *)(a1 + 1636) = 15; /*0x4da7aa*/
        goto LABEL_25; /*0x4da7aa*/
      }
      v8 -= (int)MEMORY[0xA8ED84] - v7; /*0x4da6e5*/
    }
    if ( v8 ) /*0x4da6e9*/
      goto LABEL_25; /*0x4da6e9*/
    goto LABEL_21; /*0x4da6e9*/
  }
LABEL_25:
  if ( !((int)MEMORY[0xA8ED84] % 16) /*0x4da7d8*/
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 84))(a1)
    && *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1) + 60) )
  {
    v35 = *(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 440))(a1, &v37); /*0x4da7f2*/
    v15 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1); /*0x4da7f8*/
    TeamClass::Update_0(*(void ***)(v15 + 60), 59, a1, v35, 0, 0); /*0x4da801*/
  }
  v16 = *(_DWORD *)(a1 + 1336); /*0x4da80c*/
  if ( !*(_DWORD *)(a1 + 1652) /*0x4da850*/
    || *(_BYTE *)(a1 + 973)
    || *(_BYTE *)(a1 + 141)
    || *(_DWORD *)(a1 + 680) && !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1682)
    || *(_BYTE *)(a1 + 129) )
  {
    goto LABEL_67; /*0x4da856*/
  }
  if ( !*(_DWORD *)(a1 + 1652) ) /*0x4da85c*/
    WinAPI::Wrapper(-2147467261); /*0x4da869*/
  result = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 64))(*(_DWORD *)(a1 + 1652)); /*0x4da877*/
  if ( *(_BYTE *)(a1 + 144) )
  {
    if ( a1 )
      v17 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 44))(a1) == 1 ? a1 : 0;
    else
      v17 = 0; /*0x4da88a*/
    if ( !*(_DWORD *)(a1 + 1652) ) /*0x4da8a0*/
      WinAPI::Wrapper(-2147467261); /*0x4da8ad*/
    if ( ((*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 128))(*(_DWORD *)(a1 + 1652)) /*0x4da934*/
       && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 472))(a1)
       || *(_DWORD *)(a1 + 692)
       && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 912)
       && v17
       && !(unsigned __int8)FootClass::updateScanRange(v17))
      && !((int)MEMORY[0xA8ED84] % *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 660))
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 468))(a1)
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 472))(a1)
      && !*(_BYTE *)(a1 + 1709) )
    {
      goto LABEL_66; /*0x4da934*/
    }
    if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 664) ) /*0x4da94a*/
    {
      if ( !*(_DWORD *)(a1 + 1652) ) /*0x4da952*/
        WinAPI::Wrapper(-2147467261); /*0x4da95f*/
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 128))(*(_DWORD *)(a1 + 1652)) /*0x4da9af*/
        && !((int)MEMORY[0xA8ED84] % *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 664))
        && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 468))(a1)
        && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 472))(a1)
        && !*(_BYTE *)(a1 + 1709) )
      {
        goto LABEL_66; /*0x4da9af*/
      }
    }
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1709) /*0x4da9f3*/
      && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 456))(a1) > 0
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 468))(a1)
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 472))(a1)
      && !*(_BYTE *)(a1 + 1709) )
    {
LABEL_66:
      ++*(_DWORD *)(a1 + 1336); /*0x4da9fb*/
    }
LABEL_67:
    if ( v16 == *(_DWORD *)(a1 + 1336) ) /*0x4daa07*/
    {
      if ( !*(_DWORD *)(a1 + 1652) ) /*0x4daa09*/
        WinAPI::Wrapper(-2147467261); /*0x4daa16*/
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 128))(*(_DWORD *)(a1 + 1652)) ) /*0x4daa24*/
        goto LABEL_136; /*0x4daa24*/
    }
    if ( *(_BYTE *)(a1 + 141) /*0x4daa5c*/
      || *(_BYTE *)(a1 + 1061)
      || *(_DWORD *)(a1 + 680) && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1682) )
    {
LABEL_136:
      if ( *(_BYTE *)(a1 + 1340) ) /*0x4daafa*/
      {
        v19 = *(_DWORD *)(a1 + 1344); /*0x4dab02*/
        if ( !v19 || *(_BYTE *)(a1 + 141) || *(_BYTE *)(a1 + 1061) ) /*0x4dab14*/
        {
          Mixer::ReleaseChannel(a1 + 1348); /*0x4dab2b*/
          *(_BYTE *)(a1 + 1340) = 0; /*0x4dab30*/
          *(_DWORD *)(a1 + 1344) = 0; /*0x4dab36*/
        }
        else
        {
          *(_DWORD *)(a1 + 1344) = v19 - 1; /*0x4dab1d*/
        }
      }
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 1340) && *(int *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1284) > 0 ) /*0x4daa87*/
      {
        AudioController::Stop(a1 + 1348); /*0x4daa91*/
        v38 = *(_DWORD *)(a1 + 156); /*0x4daaa2*/
        v18 = *(_DWORD *)a1; /*0x4daaa6*/
        v39 = *(_DWORD *)(a1 + 160); /*0x4daaab*/
        v40 = *(_DWORD *)(a1 + 164); /*0x4daab2*/
        (*(int (__thiscall **)(int))(v18 + 132))(a1); /*0x4daab8*/
        Random::State(&MEMORY[0x886B88]); /*0x4daacb*/
        StartAudioControllerAt(a1 + 1348); /*0x4daae2*/
        *(_BYTE *)(a1 + 1340) = 1; /*0x4daae7*/
      }
      *(_DWORD *)(a1 + 1344) = 3; /*0x4daaee*/
    }
    v20 = *(_BYTE *)(a1 + 141); /*0x4dab3c*/
    if ( v20 != *(_BYTE *)(a1 + 142) ) /*0x4dab4a*/
    {
      if ( v20 /*0x4dab67*/
        && *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1356) != -1
        && *(_BYTE *)(a1 + 143) )
      {
        v38 = *(_DWORD *)(a1 + 156); /*0x4dab7c*/
        v39 = *(_DWORD *)(a1 + 160); /*0x4dab85*/
        v21 = *(_DWORD *)a1; /*0x4dab89*/
        v40 = *(_DWORD *)(a1 + 164); /*0x4dab8e*/
        (*(void (__thiscall **)(int))(v21 + 132))(a1); /*0x4dab92*/
        StartAudioControllerAt(0); /*0x4daba0*/
        *(_BYTE *)(a1 + 142) = *(_BYTE *)(a1 + 141); /*0x4dabab*/
      }
      else
      {
        *(_BYTE *)(a1 + 142) = *(_BYTE *)(a1 + 141); /*0x4dabbc*/
      }
    }
    v22 = *(_BYTE *)(a1 + 973); /*0x4dabc7*/
    if ( v22 != *(_BYTE *)(a1 + 974) ) /*0x4dabd5*/
    {
      if ( v22 ) /*0x4dabdd*/
      {
        if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1364) != -1 ) /*0x4dabf3*/
        {
          v38 = *(_DWORD *)(a1 + 156); /*0x4dac02*/
          v39 = *(_DWORD *)(a1 + 160); /*0x4dac0b*/
          v23 = *(_DWORD *)a1; /*0x4dac0f*/
          v40 = *(_DWORD *)(a1 + 164); /*0x4dac14*/
          (*(void (__thiscall **)(int))(v23 + 132))(a1); /*0x4dac18*/
          StartAudioControllerAt(0); /*0x4dac26*/
        }
        if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1352) == -1 ) /*0x4dac3b*/
        {
          if ( *((_DWORD *)MEMORY[0x8871E0] + 130) != -1 ) /*0x4dac86*/
          {
            v38 = *(_DWORD *)(a1 + 156); /*0x4dac94*/
            v39 = *(_DWORD *)(a1 + 160); /*0x4dac9b*/
            v40 = *(_DWORD *)(a1 + 164); /*0x4daca9*/
            StartAudioControllerAt(a1 + 1348); /*0x4dacb7*/
          }
        }
        else
        {
          v38 = *(_DWORD *)(a1 + 156); /*0x4dac49*/
          v39 = *(_DWORD *)(a1 + 160); /*0x4dac57*/
          v24 = *(_DWORD *)a1; /*0x4dac5b*/
          v40 = *(_DWORD *)(a1 + 164); /*0x4dac60*/
          (*(void (__thiscall **)(int))(v24 + 132))(a1); /*0x4dac66*/
          StartAudioControllerAt(a1 + 1348); /*0x4dac74*/
        }
      }
      else if ( !*(_BYTE *)(a1 + 1340) ) /*0x4dacbe*/
      {
        Mixer::ReleaseChannel(a1 + 1348); /*0x4daccc*/
      }
      *(_BYTE *)(a1 + 974) = *(_BYTE *)(a1 + 973); /*0x4dacd7*/
    }
    v25 = *(_BYTE *)(a1 + 1061); /*0x4dacdd*/
    if ( v25 != *(_BYTE *)(a1 + 1062) ) /*0x4daceb*/
    {
      if ( v25 ) /*0x4dacf3*/
      {
        Mixer::ReleaseChannel(a1 + 1348); /*0x4dad01*/
        if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1360) != -1 /*0x4dad1f*/
          && (unsigned __int8)House::IsHumanPlayer(*(_DWORD *)(a1 + 540)) )
        {
          v38 = *(_DWORD *)(a1 + 156); /*0x4dad35*/
          v39 = *(_DWORD *)(a1 + 160); /*0x4dad3e*/
          v26 = *(_DWORD *)a1; /*0x4dad42*/
          v40 = *(_DWORD *)(a1 + 164); /*0x4dad47*/
          (*(void (__thiscall **)(int))(v26 + 132))(a1); /*0x4dad4b*/
          StartAudioControllerAt(0); /*0x4dad59*/
        }
        if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1348) != -1 ) /*0x4dad6f*/
        {
          v38 = *(_DWORD *)(a1 + 156); /*0x4dad7e*/
          v27 = *(_DWORD *)a1; /*0x4dad82*/
          v39 = *(_DWORD *)(a1 + 160); /*0x4dad87*/
          v40 = *(_DWORD *)(a1 + 164); /*0x4dad8e*/
          (*(void (__thiscall **)(int))(v27 + 132))(a1); /*0x4dad94*/
          StartAudioControllerAt(a1 + 1348); /*0x4dada2*/
        }
      }
      else if ( !*(_BYTE *)(a1 + 1340) ) /*0x4dada9*/
      {
        Mixer::ReleaseChannel(a1 + 1348); /*0x4dadb7*/
      }
      *(_BYTE *)(a1 + 1062) = *(_BYTE *)(a1 + 1061); /*0x4dadc2*/
    }
    v38 = *(_DWORD *)(a1 + 156); /*0x4dadd4*/
    v39 = *(_DWORD *)(a1 + 160); /*0x4dade1*/
    v40 = *(_DWORD *)(a1 + 164); /*0x4dade8*/
    StartAudioController(&v38, a1 + 1348); /*0x4dadf0*/
    if ( ((unsigned __int8)MEMORY[0xA8ED84] & 0x3F) == 0x3F /*0x4dae37*/
      && !*(_DWORD *)(a1 + 1444)
      && !*(_BYTE *)(a1 + 140)
      && !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1) + 284)
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 688))(a1)
      && !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 456))(a1) )
    {
      v28 = *(_DWORD *)a1; /*0x4dae41*/
      v38 = 0; /*0x4dae4d*/
      v39 = 0; /*0x4dae51*/
      v40 = 0; /*0x4dae55*/
      (*(void (__thiscall **)(int, int *, int, _DWORD))(v28 + 372))(a1, &v38, 1, 0); /*0x4dae59*/
    }
    v29 = *(int (__stdcall ****)(_DWORD, void *, int *))(a1 + 1652); /*0x4dae5f*/
    v30 = (_DWORD *)(a1 + 1652); /*0x4dae65*/
    v31 = 0; /*0x4dae6b*/
    if ( v29 )
    {
      v32 = (**v29)(v29, &unk_819088, &v37); /*0x4dae7e*/
      v31 = v32 < 0 ? 0 : v37;
      if ( v32 < 0 && v32 != -2147467262 ) /*0x4dae99*/
        WinAPI::Wrapper(v32); /*0x4dae9c*/
      if ( v31 && (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v31 + 20))(v32 < 0 ? 0 : v37) )
      {
        if ( *v30 ) /*0x4daeaf*/
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v30 + 8))(*v30); /*0x4daeb9*/
        *v30 = 0; /*0x4daebc*/
        (*(void (__stdcall **)(int, int))(*(_DWORD *)v31 + 16))(v31, a1 + 1652); /*0x4daec3*/
      }
    }
    v33 = *(_DWORD *)a1; /*0x4daec6*/
    *(_BYTE *)(a1 + 1716) = 0; /*0x4daeca*/
    result = (*(int (__thiscall **)(int))(v33 + 472))(a1); /*0x4daed0*/
    if ( !result ) /*0x4daed8*/
      result = FootClass::ProcessEnterTransport(a1); /*0x4daedc*/
    v34 = *(_DWORD *)(a1 + 1684); /*0x4daee1*/
    if ( v34 ) /*0x4daee9*/
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v34 + 1692) + 92))(*(_DWORD *)(v34 + 1692)); /*0x4daef3*/
    if ( v31 ) /*0x4daef8*/
      return (*(int (__stdcall **)(int))(*(_DWORD *)v31 + 8))(v31); /*0x4daefd*/
  }
  return result; /*0x4daf00*/
}


// ==== 0x004DAF10  FootClass::UpdateState  this=FootClass  sig=csp ====
_DWORD *__thiscall FootClass::UpdateState(
        #377 *this,
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
  if ( this->Locomotor ) /*0x4daf34*/
    (*(void (__stdcall **)(_DWORD, char *))(**((_DWORD **)this + 413) + 44))(this->Locomotor, v13); /*0x4daf5e*/
  return (_DWORD *)TechnoClass::UpdateState(this); /*0x4dafb0*/
}


// ==== 0x004DAFC0  TechnoClass::ComputeSpeedFactor  this=FootClass  sig=csp ====
int __thiscall TechnoClass_ComputeSpeedFactor(_DWORD **this)
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
  if ( *(this + 413) ) /*0x4dafcf*/
    v10 = (*(int (__stdcall **)(_DWORD))(**(this + 413) + 56))(*(this + 413)); /*0x4daff3*/
  v2 = ((int (__thiscall *)(_DWORD **))(*this)[33])(this); /*0x4db005*/
  v3 = TechnoClass::ScanNeighborCells(this) * *(_DWORD *)(v2 + 3524); /*0x4db014*/
  v4 = ((int (__thiscall *)(_DWORD **))(*this)[33])(this); /*0x4db021*/
  v5 = TechnoClass::IsValidBuildingPlacement(this) * *(_DWORD *)(v4 + 3528); /*0x4db032*/
  v6 = ((int (__thiscall *)(_DWORD **))(*this)[33])(this); /*0x4db03d*/
  v7 = TechnoClass::CheckAdjacencyFlags(this) * *(_DWORD *)(v6 + 3520); /*0x4db04c*/
  if ( TechnoClass::CheckTargetCell(this) ) /*0x4db057*/
    v8 = *(_DWORD *)(((int (__thiscall *)(_DWORD **))(*this)[33])(this) + 3532); /*0x4db06a*/
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
int __thiscall FootClass_GetAttackSpeed(_DWORD **this)
{
  if ( *(this + 413) ) /*0x4db0a3*/
    return (*(int (__stdcall **)(_DWORD))(**(this + 413) + 60))(*(this + 413)); /*0x4db0c4*/
  else
    return 2; /*0x4db0c9*/
}


// ==== 0x004DB0D0  TechnoClass::QueueDrawVoiceResponse  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::QueueDrawVoiceResponse(
        int *this,
        _BYTE **a1,
        int aP2,
        TechnoClass *aP3,
        int aP4,
        int aP5,
        TechnoClass *aP6,
        int aP7,
        unsigned __int8 aP8,
        int aP9,
        int aP10,
        int aP11)
{
  int result; // eax
  int v14; // edx
  int v15; // eax
  _DWORD *v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // [esp+Ch] [ebp-10h] BYREF
  TechnoClass *v20; // [esp+10h] [ebp-Ch]
  int v21; // [esp+14h] [ebp-8h] BYREF

  result = *(this + 413); /*0x4db0d6*/
  if ( result ) /*0x4db0de*/
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 32))(*(this + 413)); /*0x4db0fb*/
    if ( (_BYTE)result == 1 ) /*0x4db100*/
    {
      v14 = *(_DWORD *)aP6->__pad_0; /*0x4db10e*/
      v20 = *(TechnoClass **)&aP6->__pad_0[4]; /*0x4db110*/
      v15 = *(this + 413); /*0x4db114*/
      v19 = v14; /*0x4db11c*/
      if ( v15 ) /*0x4db120*/
      {
        v16 = (_DWORD *)(*(int (__stdcall **)(_DWORD, int *))(*(_DWORD *)*(this + 413) + 48))(*(this + 413), &v21); /*0x4db13e*/
        v17 = v16[1]; /*0x4db143*/
        v18 = *(_DWORD *)&aP6->__pad_0[4]; /*0x4db14a*/
        v19 = *v16 + *(_DWORD *)aP6->__pad_0; /*0x4db14f*/
        v20 = (TechnoClass *)(v17 + v18); /*0x4db153*/
      }
      return QueueTechnoVoiceLine( /*0x4db190*/
               this,
               (TechnoClass *)a1,
               (TechnoClass *)aP2,
               aP3,
               (TechnoClass *)aP4,
               (TechnoClass *)aP5,
               (TechnoClass *)&v19,
               (TechnoClass *)aP7,
               (TechnoClass *)aP8,
               (TechnoClass *)aP9,
               (TechnoClass *)aP10,
               (TechnoClass *)aP11);
    }
  }
  return result; /*0x4db196*/
}


// ==== 0x004DB1A0  TechnoClass::ComputeSpeedFactorEx  this=FootClass  sig=csp ====
AbstractClass *__thiscall TechnoClass::ComputeSpeedFactorEx(double *this)
{
  int v2; // eax
  int v3; // eax
  AbstractClass *v4; // edi
  AbstractClass *result; // eax
  int v6; // [esp+8h] [ebp-Ch]
  double TargetSpeedMultiplier; // [esp+Ch] [ebp-8h]

  v2 = (*(int (__thiscall **)(double *))(*(_DWORD *)this + 132))(this); /*0x4db1a9*/
  TargetSpeedMultiplier = TechnoClass::GetTargetSpeedMultiplier((_DWORD *)this->focus, v2); /*0x4db1bf*/
  v3 = (*(int (__thiscall **)(double *))(*(_DWORD *)this + 908))(this); /*0x4db1c3*/
  v6 = Math::RoundToInt((double)v3 * TargetSpeedMultiplier * this->suspendedMission); /*0x4db1e4*/
  if ( TechnoClass::HasVoiceResponse((TechnoClass *)this, 0) ) /*0x4db1e8*/
    v6 = Math::RoundToInt((double)v6 * *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1656)); /*0x4db205*/
  v4 = (AbstractClass *)Math::RoundToInt((double)v6 * *(this + 175)); /*0x4db21c*/
  if ( (*(int (__thiscall **)(double *))(this->fallRate)(this) != 1 ) /*0x4db224*/
    return v4; /*0x4db23e*/
  result = v4; /*0x4db22f*/
  if ( *((_DWORD *)this + 435) != -1 ) /*0x4db231*/
    return (AbstractClass *)((int)v4 / 2); /*0x4db237*/
  return result; /*0x4db236*/
}


// ==== 0x004DB250  FootClass::COMStub_Return0_69  this=FootClass  sig=csp ====
void __stdcall AbstractClass::COMStub_Return0_69(Tactical *aP0, AbstractClass *aP1)
{
  ; /*0x4db250*/
}


// ==== 0x004DB260  FootClass::CleanupDirection  this=FootClass  sig=csp ====
int __thiscall TechnoClass::CleanupDirection(_BYTE *this)
{
  IUnknown *v2; // ebx
  IUnknown *i; // esi
  int v4; // ecx
  _BYTE *v5; // eax
  _WORD *v6; // eax
  int v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h] BYREF

  if ( !*(this + 129) && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 132))(this) ) /*0x4db276*/
  {
    v2 = (IUnknown *)this->FootClass_field_55C; /*0x4db285*/
    for ( i = 0; (int)i < 8; i = (IUnknown *)((char *)i + 1) ) /*0x4db296*/
    {
      v4 = (unsigned __int8)i & 7; /*0x4db29a*/
      LOWORD(v8) = (_WORD)v2 + *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v4); /*0x4db2b3*/
      HIWORD(v8) = HIWORD(v2) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v4); /*0x4db2bf*/
      v9 = v8; /*0x4db2c8*/
      v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v9); /*0x4db2d2*/
      --v5[290]; /*0x4db2e3*/
    }
    if ( !*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] ) /*0x4db2f5*/
      (*(void (__thiscall **)(_BYTE *))(this->queueUpToEnter)(this); /*0x4db2fb*/
    if ( this->Locomotor ) /*0x4db301*/
    {
      (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 413) + 156))(this->Locomotor, 0); /*0x4db324*/
      if ( !this->Locomotor ) /*0x4db32a*/
        WinAPI::Wrapper(-2147467261); /*0x4db339*/
      (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 176))(this->Locomotor); /*0x4db347*/
    }
    AudioFile::Stop((_DWORD *)this + 337); /*0x4db353*/
    if ( *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 132))(this) + 1520) ) /*0x4db362*/
      (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 1260))( /*0x4db376*/
        this,
        *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61276]);
    v6 = (_WORD *)(*(int (__thiscall **)(_BYTE *, int *))(this->originalOwnerHouse)(this, &v9); /*0x4db385*/
    if ( *v6 != *(_WORD *)&MEMORY[0x89F690].__pad_579C[61276] || v6[1] != *(_WORD *)&MEMORY[0x89F690].__pad_579C[61278] ) /*0x4db3a2*/
      GadgetGrid::RemoveItem(&MEMORY[0x87F8E4].__pad_5568[10812], (IUnknown *)this); /*0x4db3aa*/
  }
  return TechnoClass::CleanupDeploy(this); /*0x4db3b6*/
}


// ==== 0x004DB3C0  ObjectClass::LoadFromStream_Common  this=FootClass  sig=csp ====
int __stdcall ObjectClass::LoadFromStream_Common(FootClass *aP0, LPSTREAM pStm)
{
  int v3; // eax
  IStream *v4; // ebp
  int result; // eax
  VectorClass *v6; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  VectorClass *v12; // edi
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int i; // edi
  int j; // edi
  int v20; // [esp+54h] [ebp-4h] BYREF
  FootClass *aP0a; // [esp+5Ch] [ebp+4h]
  FootClass *aP0b; // [esp+5Ch] [ebp+4h]

  v3 = aP0->locomotor[0]; /*0x4db3cb*/
  if ( v3 ) /*0x4db3d3*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(aP0->locomotor[0]); /*0x4db3d8*/
  v4 = pStm; /*0x4db3db*/
  aP0->locomotor[0] = 0; /*0x4db3df*/
  result = BuildingClass::AllocAndCtor((BuildingClass *)aP0, (int)v4); /*0x4db3e7*/
  if ( result >= 0 ) /*0x4db3ee*/
  {
    result = (*(int (__stdcall **)(IStream *, LPSTREAM *, int, _DWORD))(*(_DWORD *)v4->__pad_0 + 12))(v4, &pStm, 4, 0); /*0x4db400*/
    if ( result >= 0 ) /*0x4db405*/
    {
      v6 = (VectorClass *)aP0->unknownAbstractArray588; /*0x4db40b*/
      if ( aP0 != (FootClass *)-1416 ) /*0x4db413*/
      {
        AbstractClassVector::Construct(aP0->unknownAbstractArray588, 0, 0); /*0x4db419*/
        *(_DWORD *)v6->vtable0 = &vt_DynamicVectorClass_AbstractClass; /*0x4db41e*/
        *(_DWORD *)&aP0->__pad_58C[16] = 10; /*0x4db424*/
        *(_DWORD *)&aP0->__pad_58C[12] = 0; /*0x4db42b*/
      }
      aP0a = 0; /*0x4db432*/
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
          v12 = (VectorClass *)aP0->FootClass_field_abstract_array_5AC; /*0x4db4b9*/
          if ( aP0 != (FootClass *)-1452 ) /*0x4db4c1*/
          {
            AbstractClassVector::Construct(aP0->FootClass_field_abstract_array_5AC, 0, 0); /*0x4db4c7*/
            *(_DWORD *)v12->vtable0 = &vt_DynamicVectorClass_AbstractClass; /*0x4db4cc*/
            *(_DWORD *)&aP0->__pad_5B0[16] = 10; /*0x4db4d2*/
            *(_DWORD *)&aP0->__pad_5B0[12] = 0; /*0x4db4d9*/
          }
          aP0b = 0; /*0x4db4e0*/
          if ( (int)pStm <= 0 ) /*0x4db4e6*/
          {
LABEL_28:
            aP0->locomotor[0] = 0; /*0x4db550*/
            ObjectClass::updateStateFlags(aP0->locomotor); /*0x4db55a*/
            aP0->locomotor[0] = 0; /*0x4db566*/
            OleLoadFromStream(v4, &IID_ILocomotion, (LPVOID *)aP0->locomotor); /*0x4db568*/
            aP0->FootClass_field_5A0 = 0; /*0x4db574*/
            ObjectPtr::RegisterForTracking( /*0x4db580*/
              (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
              (MouseClass *)&aP0->team);
            ObjectPtr::RegisterForTracking( /*0x4db591*/
              (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
              (MouseClass *)&aP0->nextTeamMember);
            ObjectPtr::RegisterForTracking( /*0x4db5a2*/
              (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
              (MouseClass *)&aP0->movementDestination);
            ObjectPtr::RegisterForTracking( /*0x4db5b3*/
              (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
              (MouseClass *)&aP0->lastDestination);
            ObjectPtr::RegisterForTracking( /*0x4db5c4*/
              (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
              (MouseClass *)&aP0->FootClass_field_5C8);
            ObjectPtr::RegisterForTracking( /*0x4db5d5*/
              (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
              (MouseClass *)&aP0->FootClass_field_5CC);
            ObjectPtr::RegisterForTracking( /*0x4db5e6*/
              (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
              (MouseClass *)&aP0->FootClass_field_5DC);
            ObjectPtr::RegisterForTracking( /*0x4db5f7*/
              (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
              (MouseClass *)&aP0->parasiteEatingMe);
            ObjectPtr::RegisterForTracking( /*0x4db608*/
              (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
              (MouseClass *)&aP0->parasiteImUsing);
            AudioController::Init(aP0->audioController7); /*0x4db613*/
            aP0->FootClass_field_bool_53C = 0; /*0x4db618*/
            aP0->unknown540 = 0; /*0x4db61e*/
            for ( i = 0; i < *(_DWORD *)&aP0->__pad_5B0[12]; ++i ) /*0x4db62e*/
              ObjectPtr::RegisterForTracking( /*0x4db63f*/
                (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
                (MouseClass *)(*(_DWORD *)aP0->__pad_5B0 + 4 * i));
            for ( j = 0; j < *(_DWORD *)&aP0->__pad_58C[12]; ++j ) /*0x4db659*/
              ObjectPtr::RegisterForTracking( /*0x4db66a*/
                (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
                (MouseClass *)(*(_DWORD *)aP0->__pad_58C + 4 * j));
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
              v14 = *(_DWORD *)&aP0->__pad_5B0[4]; /*0x4db503*/
              if ( *(_DWORD *)&aP0->__pad_5B0[12] < v14 /*0x4db525*/
                || (aP0->__pad_5B0[9] || !v14)
                && (v15 = *(_DWORD *)&aP0->__pad_5B0[16], v15 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*(_DWORD *)v12->vtable0 + 8))(
                     aP0->FootClass_field_abstract_array_5AC,
                     v14 + v15,
                     0) )
              {
                v16 = *(_DWORD *)&aP0->__pad_5B0[12]; /*0x4db52c*/
                v17 = *(_DWORD *)aP0->__pad_5B0; /*0x4db52f*/
                *(_DWORD *)&aP0->__pad_5B0[12] = v16 + 1; /*0x4db535*/
                *(_DWORD *)(v17 + 4 * v16) = v20; /*0x4db53c*/
              }
              aP0b = (FootClass *)((char *)aP0b + 1); /*0x4db54a*/
              if ( (int)aP0b >= (int)pStm ) /*0x4db54e*/
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
          v8 = *(_DWORD *)&aP0->__pad_58C[4]; /*0x4db455*/
          if ( *(_DWORD *)&aP0->__pad_58C[12] < v8 /*0x4db477*/
            || (aP0->__pad_58C[9] || !v8)
            && (v9 = *(_DWORD *)&aP0->__pad_58C[16], v9 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*(_DWORD *)v6->vtable0 + 8))(
                 aP0->unknownAbstractArray588,
                 v8 + v9,
                 0) )
          {
            v10 = *(_DWORD *)&aP0->__pad_58C[12]; /*0x4db47e*/
            v11 = *(_DWORD *)aP0->__pad_58C; /*0x4db481*/
            *(_DWORD *)&aP0->__pad_58C[12] = v10 + 1; /*0x4db487*/
            *(_DWORD *)(v11 + 4 * v10) = v20; /*0x4db48e*/
          }
          aP0a = (FootClass *)((char *)aP0a + 1); /*0x4db49c*/
          if ( (int)aP0a >= (int)pStm ) /*0x4db4a0*/
            goto LABEL_16; /*0x4db4a0*/
        }
      }
    }
  }
  return result; /*0x4db67c*/
}


// ==== 0x004DB690  ObjectClass::SaveToStream_Common  this=FootClass  sig=csp ====
HRESULT __stdcall ObjectClass::SaveToStream_Common(IPersistStream *a0, FootClass *aP1, struct IPersistStreamVtbl *a2)
{
  IStream *v3; // esi
  IPersistStream *v4; // edi
  HRESULT SizeMax; // ebx
  int v6; // edx
  HRESULT result; // eax
  int v8; // ebx
  int v9; // edx
  int v10; // ebx
  int (__stdcall ***v11)(_DWORD, void *, IPersistStream **); // edi
  int v12; // edi
  IPersistStream *v13; // ebx

  v3 = (IStream *)aP1; /*0x4db696*/
  v4 = a0; /*0x4db69b*/
  SizeMax = IPersistStream::GetSizeMax((int)a0, (RadioClass *)aP1, (int)a2); /*0x4db6a7*/
  if ( SizeMax < 0 ) /*0x4db6ab*/
    return SizeMax; /*0x4db6ab*/
  v6 = *(_DWORD *)v3->__pad_0; /*0x4db6b7*/
  a2 = (struct IPersistStreamVtbl *)v4[358]; /*0x4db6c3*/
  result = (*(int (__stdcall **)(IStream *, struct IPersistStreamVtbl **, int, _DWORD))(v6 + 16))(v3, &a2, 4, 0); /*0x4db6c7*/
  if ( result < 0 ) /*0x4db6cc*/
    return result; /*0x4db6cc*/
  v8 = 0; /*0x4db6d6*/
  if ( (int)a2 <= 0 ) /*0x4db6da*/
  {
LABEL_6:
    v9 = *(_DWORD *)v3->__pad_0; /*0x4db701*/
    a2 = (struct IPersistStreamVtbl *)v4[367]; /*0x4db713*/
    result = (*(int (__stdcall **)(IStream *, struct IPersistStreamVtbl **, int, _DWORD))(v9 + 16))(v3, &a2, 4, 0); /*0x4db717*/
    if ( result < 0 ) /*0x4db71c*/
      return result; /*0x4db71c*/
    v10 = 0; /*0x4db726*/
    if ( (int)a2 > 0 ) /*0x4db72a*/
    {
      do /*0x4db73d*/
      {
        result = (*(int (__stdcall **)(IStream *, int, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 16))( /*0x4db73d*/
                   v3,
                   *(_DWORD *)&v4[364] + 4 * v10,
                   4,
                   0);
        if ( result < 0 ) /*0x4db742*/
          return result; /*0x4db742*/
      }
      while ( ++v10 < (int)a2 ); /*0x4db73d*/
    }
    v11 = (int (__stdcall ***)(_DWORD, void *, IPersistStream **))v4[413]; /*0x4db751*/
    aP1 = 0; /*0x4db757*/
    if ( v11 ) /*0x4db761*/
    {
      v12 = (**v11)(v11, &unk_820270, &a0); /*0x4db772*/
      if ( v12 >= 0 ) /*0x4db776*/
      {
        v13 = a0; /*0x4db794*/
        if ( aP1 ) /*0x4db79a*/
          (*(void (__stdcall **)(FootClass *))(*(_DWORD *)aP1->__pad_0 + 8))(aP1); /*0x4db79f*/
        aP1 = (FootClass *)v13; /*0x4db7a2*/
      }
      else
      {
        if ( aP1 ) /*0x4db77e*/
          (*(void (__stdcall **)(FootClass *))(*(_DWORD *)aP1->__pad_0 + 8))(aP1); /*0x4db783*/
        aP1 = 0; /*0x4db786*/
      }
      if ( v12 < 0 && v12 != -2147467262 ) /*0x4db7b0*/
        WinAPI::Wrapper(v12); /*0x4db7b3*/
    }
    OleSaveToStream((LPPERSISTSTREAM)aP1, v3); /*0x4db7be*/
    SizeMax = 0; /*0x4db7c4*/
    if ( aP1 ) /*0x4db7cc*/
      (*(void (__stdcall **)(FootClass *))(*(_DWORD *)aP1->__pad_0 + 8))(aP1); /*0x4db7d1*/
    return SizeMax; /*0x4db7d4*/
  }
  while ( 1 ) /*0x4db6ed*/
  {
    result = (*(int (__stdcall **)(IStream *, int, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 16))( /*0x4db6ed*/
               v3,
               *(_DWORD *)&v4[355] + 4 * v8,
               4,
               0);
    if ( result < 0 ) /*0x4db6f2*/
      return result; /*0x4db7d6*/
    if ( ++v8 >= (int)a2 ) /*0x4db6ff*/
      goto LABEL_6; /*0x4db6ff*/
  }
}


// ==== 0x004DB7E0  FootClass::Destru_vt30  this=FootClass  sig=csp ====
int __thiscall FootClass::Destru_vt30(_DWORD *this)
{
  if ( !this->Locomotor ) /*0x4db7e3*/
    WinAPI::Wrapper(-2147467261); /*0x4db7f2*/
  return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 116))(this->Locomotor); /*0x4db803*/
}


// ==== 0x004DB810  TechnoClass::SetPositionAnimated  this=FootClass  sig=csp ====
int __thiscall TechnoClass::SetPositionAnimated(#374 *this, _DWORD *a2)
{
  char *v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  bool v7; // bl
  int result; // eax

  v3 = (char *)this + 156; /*0x4db821*/
  v4 = *((_DWORD *)this + 39); /*0x4db823*/
  v5 = *((_DWORD *)this + 40); /*0x4db827*/
  v6 = *((_DWORD *)v3 + 2); /*0x4db82a*/
  v7 = *a2 != v4 || a2[1] != v5 || a2[2] != v6; /*0x4db83d*/
  if ( *((_BYTE *)this + 116) ) /*0x4db83f*/
  {
    (*(void (__thiscall **)(#374 *, _DWORD))(this->q124)(this, 0); /*0x4db84c*/
    ObjectClass::SetPosition(this); /*0x4db855*/
    result = (*(int (__thiscall **)(#374 *, int))(this->q124)(this, 1); /*0x4db860*/
  }
  else
  {
    result = ObjectClass::SetPosition(this); /*0x4db86b*/
  }
  if ( v7 ) /*0x4db872*/
  {
    result = (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 132))(this); /*0x4db878*/
    if ( *(_BYTE *)(result + 1508) ) /*0x4db87e*/
      return FootClass::UpdatePassengerCoords((int *)this); /*0x4db88a*/
  }
  return result; /*0x4db88f*/
}


// ==== 0x004DB8A0  ObjectClass::method_4DB8A0  this=ObjectClass  sig=csp ====
LPVOID __thiscall sub_4DB8A0(_DWORD *this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  LPVOID v5; // esi
  LPVOID result; // eax
  LPVOID ppv; // [esp+20h] [ebp-8h] BYREF
  int v8; // [esp+24h] [ebp-4h] BYREF

  v2 = *(this + 413); /*0x4db8a7*/
  if ( v2 ) /*0x4db8af*/
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 4))(*(this + 413)); /*0x4db8b4*/
  ppv = 0; /*0x4db8c4*/
  v3 = CreateInstanceCOM(&ppv, (IID *)&g_CLSID_DriveLocomotion, 0, 7u); /*0x4db8cc*/
  if ( v3 < 0 && v3 != -2147467262 ) /*0x4db8da*/
    WinAPI::Wrapper(v3); /*0x4db8dd*/
  if ( !ppv ) /*0x4db8e8*/
    WinAPI::Wrapper(-2147467261); /*0x4db8ef*/
  (*(void (__stdcall **)(LPVOID, _DWORD *))(*(_DWORD *)ppv + 12))(ppv, this); /*0x4db8fc*/
  v8 = 0; /*0x4db903*/
  if ( !ppv ) /*0x4db90d*/
    goto LABEL_13; /*0x4db90d*/
  v4 = StreamClass::Set(&v8, &ppv); /*0x4db918*/
  if ( v4 < 0 && v4 != -2147467262 ) /*0x4db926*/
    WinAPI::Wrapper(v4); /*0x4db929*/
  if ( !v8 ) /*0x4db934*/
LABEL_13:
    WinAPI::Wrapper(-2147467261); /*0x4db93b*/
  (*(void (__stdcall **)(int, int))(*(_DWORD *)v8 + 12))(v8, v2); /*0x4db949*/
  v5 = (LPVOID)*(this + 413); /*0x4db94c*/
  result = ppv; /*0x4db952*/
  if ( v5 != ppv ) /*0x4db958*/
  {
    *(this + 413) = ppv; /*0x4db95c*/
    if ( result ) /*0x4db962*/
    {
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)result + 4))(result); /*0x4db967*/
      result = ppv; /*0x4db96a*/
    }
    if ( v5 ) /*0x4db970*/
    {
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v5 + 8))(v5); /*0x4db975*/
      result = ppv; /*0x4db978*/
    }
  }
  if ( v8 ) /*0x4db983*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x4db988*/
    result = ppv; /*0x4db98b*/
  }
  if ( result ) /*0x4db991*/
    result = (LPVOID)(*(int (__stdcall **)(LPVOID))(*(_DWORD *)result + 8))(result); /*0x4db996*/
  if ( v2 ) /*0x4db99b*/
    return (LPVOID)(*(int (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2); /*0x4db9a0*/
  return result; /*0x4db9a3*/
}


// ==== 0x004DB9B0  FootClass::vt_entry_504  this=FootClass  sig=csp ====
char __thiscall BuildingClass::vt_entry_504(_DWORD *this)
{
  int Member; // eax
  int v3; // esi
  int v4; // ebx

  if ( this->FootClass_field_5A4 || this->sprayOffsetIndex ) /*0x4db9bd*/
    return 0; /*0x4dba1f*/
  Member = Team::GetMember(this, 0); /*0x4db9cb*/
  v3 = Member; /*0x4db9d0*/
  v4 = 0; /*0x4db9d2*/
  if ( Member ) /*0x4db9d6*/
  {
    Member = (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member); /*0x4db9dc*/
    if ( Member == 6 ) /*0x4db9e2*/
      v4 = v3; /*0x4db9e4*/
  }
  LOBYTE(Member) = this->currentMission == 7 && v4 && *(_BYTE *)(*(_DWORD *)(v4 + 1312) + 5801); /*0x4dba03*/
  LOBYTE(Member) = (_BYTE)Member == 0; /*0x4dba0f*/
  return (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1156))(this, 0, Member); /*0x4dba1d*/
}


// ==== 0x004DBA30  FootClass::vt_entry_548  this=FootClass  sig=csp ====
void FootClass::vt_entry_548()
{
  ; /*0x4dba30*/
}


// ==== 0x004DBA40  FootClass::vt_entry_54C  this=FootClass  sig=csp ====
void FootClass::vt_entry_54C()
{
  ; /*0x4dba40*/
}


// ==== 0x004DBA50  TechnoClass::GetTargetCellCenter  this=FootClass  sig=csp ====
int __thiscall TechnoClass::GetTargetCellCenter(int *this, int a2)
{
  int *v3; // edi
  int v4; // kr04_4
  int v5; // eax
  int v6; // edx
  int v7; // eax
  _DWORD v9[3]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v10[12]; // [esp+14h] [ebp-Ch] BYREF

  v3 = (int *)(*(int (__thiscall **)(int, _BYTE *, int *))(*(_DWORD *)a2 + 76))(a2, v10, this); /*0x4dba66*/
  v4 = *v3; /*0x4dba73*/
  v5 = v3[1]; /*0x4dba75*/
  v9[2] = 0; /*0x4dba82*/
  v6 = (__int16)(v5 / 256); /*0x4dba95*/
  v7 = *this; /*0x4dba98*/
  v9[0] = ((__int16)(v4 / 256) << 8) + 128; /*0x4dbaa0*/
  v9[1] = (v6 << 8) + 128; /*0x4dbab4*/
  return (*(int (__thiscall **)(int *, _DWORD *))(v7 + 716))(this, v9); /*0x4dbabe*/
}


// ==== 0x004DBAD0  FootClass::BeginPowerUpdate  this=FootClass  sig=csp ====
int __thiscall FootClass::BeginPowerUpdate(int this, AbstractClass *aP1)
{
  double v3; // st7
  double v4; // st7
  AbstractClass *v5; // eax
  double v6; // st7
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  double v11; // st7
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  int v25; // ecx

  House::PowerBeginUpdate(this, aP1); /*0x4dbae1*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 1328), *(AbstractClass **)(this + 1332)); /*0x4dbaf6*/
  v3 = (double)*(__int16 *)(this + 1370); /*0x4dbb10*/
  v4 = Math::Sqrt((double)*(__int16 *)(this + 1368) * (double)*(__int16 *)(this + 1368) + v3 * v3); /*0x4dbb2d*/
  v5 = (AbstractClass *)Math::RoundToInt(v4); /*0x4dbb35*/
  Checksummer::Add_WORD((unsigned int *)aP1, v5); /*0x4dbb3d*/
  v6 = Math::Sqrt( /*0x4dbb70*/
         (double)*(int *)(this + 1384) * (double)*(int *)(this + 1384)
       + (double)*(int *)(this + 1388) * (double)*(int *)(this + 1388)
       + (double)*(int *)(this + 1392) * (double)*(int *)(this + 1392));
  Math::RoundToInt(v6); /*0x4dbb78*/
  Power::TimerProcess(aP1); /*0x4dbb80*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 1400), *(AbstractClass **)(this + 1404)); /*0x4dbb95*/
  Checksummer::Add_double(aP1, *(AbstractClass **)(this + 1408), *(AbstractClass **)(this + 1412)); /*0x4dbbaa*/
  v7 = *(_DWORD *)(this + 1444); /*0x4dbbaf*/
  if ( v7 ) /*0x4dbbb7*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)(v7 + 4) + 16))(v7 + 4); /*0x4dbbc0*/
    Power::TimerProcess(aP1); /*0x4dbbc6*/
  }
  v8 = *(_DWORD *)(this + 1448); /*0x4dbbcb*/
  if ( v8 ) /*0x4dbbd3*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)(v8 + 4) + 16))(v8 + 4); /*0x4dbbdc*/
    Power::TimerProcess(aP1); /*0x4dbbe2*/
  }
  v9 = *(_DWORD *)(this + 1492); /*0x4dbbe7*/
  if ( v9 ) /*0x4dbbef*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)(v9 + 4) + 16))(v9 + 4); /*0x4dbbf8*/
    Power::TimerProcess(aP1); /*0x4dbbfe*/
  }
  v10 = *(_DWORD *)(this + 1496); /*0x4dbc03*/
  if ( v10 ) /*0x4dbc0b*/
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)(v10 + 4) + 16))(v10 + 4); /*0x4dbc14*/
    Power::TimerProcess(aP1); /*0x4dbc1a*/
  }
  Power::TimerProcess(aP1); /*0x4dbc45*/
  Power::TimerProcess(aP1); /*0x4dbc53*/
  Power::TimerProcess(aP1); /*0x4dbc7e*/
  v11 = Math::Sqrt( /*0x4dbcb1*/
          (double)*(int *)(this + 1656) * (double)*(int *)(this + 1656)
        + (double)*(int *)(this + 1660) * (double)*(int *)(this + 1660)
        + (double)*(int *)(this + 1664) * (double)*(int *)(this + 1664));
  Math::RoundToInt(v11); /*0x4dbcb9*/
  v12 = Power::TimerProcess(aP1); /*0x4dbcc1*/
  LOBYTE(v12) = *(_BYTE *)(this + 1668); /*0x4dbcc6*/
  Power::FinalizeDrain(aP1, v12); /*0x4dbccf*/
  LOBYTE(v13) = *(_BYTE *)(this + 1669); /*0x4dbcd4*/
  Power::FinalizeDrain(aP1, v13); /*0x4dbcdd*/
  LOBYTE(v14) = *(_BYTE *)(this + 1672); /*0x4dbce2*/
  v15 = Power::FlagProcess(aP1, v14); /*0x4dbceb*/
  LOBYTE(v15) = *(_BYTE *)(this + 1673); /*0x4dbcf0*/
  Power::FlagProcess(aP1, v15); /*0x4dbcf9*/
  LOBYTE(v16) = *(_BYTE *)(this + 1674); /*0x4dbcfe*/
  Power::FlagProcess(aP1, v16); /*0x4dbd07*/
  LOBYTE(v17) = *(_BYTE *)(this + 1675); /*0x4dbd0c*/
  v18 = Power::FlagProcess(aP1, v17); /*0x4dbd15*/
  LOBYTE(v18) = *(_BYTE *)(this + 1676); /*0x4dbd1a*/
  Power::FlagProcess(aP1, v18); /*0x4dbd23*/
  LOBYTE(v19) = *(_BYTE *)(this + 1677); /*0x4dbd28*/
  Power::FlagProcess(aP1, v19); /*0x4dbd31*/
  LOBYTE(v20) = *(_BYTE *)(this + 1711); /*0x4dbd36*/
  v21 = Power::FlagProcess(aP1, v20); /*0x4dbd3f*/
  LOBYTE(v21) = *(_BYTE *)(this + 1712); /*0x4dbd44*/
  Power::FlagProcess(aP1, v21); /*0x4dbd4d*/
  LOBYTE(v22) = *(_BYTE *)(this + 1713); /*0x4dbd52*/
  Power::FlagProcess(aP1, v22); /*0x4dbd5b*/
  LOBYTE(v23) = *(_BYTE *)(this + 1714); /*0x4dbd60*/
  v24 = Power::FlagProcess(aP1, v23); /*0x4dbd69*/
  LOBYTE(v24) = *(_BYTE *)(this + 1715); /*0x4dbd6e*/
  Power::FlagProcess(aP1, v24); /*0x4dbd77*/
  LOBYTE(v25) = *(_BYTE *)(this + 1716); /*0x4dbd7c*/
  return Power::FinalizeDrain(aP1, v25); /*0x4dbd8a*/
}


// ==== 0x004DBDA0  FootClass::CanBeHunted  this=FootClass  sig=csp ====
bool __thiscall FootClass_CanBeHunted(_DWORD *this)
{
  if ( !(unsigned __int8)BuildingClass::CheckCellPassability() ) /*0x4dbda3*/
    return 0; /*0x4dbda3*/
  if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 3219) ) /*0x4dbdb6*/
    return 1; /*0x4dbdb6*/
  if ( !this->Locomotor ) /*0x4dbdc0*/
    WinAPI::Wrapper(-2147467261); /*0x4dbdcf*/
  return !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)this->Locomotor + 128))(this->Locomotor); /*0x4dbdeb*/
}


// ==== 0x004DBDF0  FootClass::GetDeployCoords  this=FootClass  sig=csp ====
_DWORD *__thiscall TechnoClass_GetDeployCoords(_BYTE *this, _DWORD *a2, int a3)
{
  char v4; // al
  int v5; // eax
  int v6; // ecx
  int *v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // edi
  _DWORD *v12; // edx
  __int16 v13; // [esp+Ah] [ebp-Eh]
  _BYTE v14[12]; // [esp+Ch] [ebp-Ch] BYREF

  v4 = *(this + 1668); /*0x4dbdf7*/
  if ( v4 < 0 ) /*0x4dbdff*/
  {
    if ( !this->Locomotor ) /*0x4dbe46*/
      WinAPI::Wrapper(-2147467261); /*0x4dbe55*/
    v8 = (int *)(*(int (__stdcall **)(_DWORD, _BYTE *))(**((_DWORD **)this + 413) + 24))(this->Locomotor, v14); /*0x4dbe68*/
    v9 = *v8; /*0x4dbe6b*/
    v10 = v8[1]; /*0x4dbe6d*/
    v11 = v8[2]; /*0x4dbe70*/
    if ( *v8 == MEMORY[0x8B3DA8] && v10 == MEMORY[0x8B3DAC] && v11 == MEMORY[0x8B3DB0] ) /*0x4dbe8a*/
    {
      v12 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 72))(this, v14); /*0x4dbeae*/
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
    v5 = *(_DWORD *)(*((_DWORD *)MEMORY[0x8B413C] + v4) + 40); /*0x4dbe0d*/
    v6 = (__int16)v5; /*0x4dbe10*/
    v13 = HIWORD(v5); /*0x4dbe13*/
    *a2 = (v6 << 8) + 128; /*0x4dbe2e*/
    a2[1] = (v13 << 8) + 128; /*0x4dbe38*/
    a2[2] = 0; /*0x4dbe3b*/
    return a2; /*0x4dbe17*/
  }
}


// ==== 0x004DBED0  FootClass::LiberateMember  this=FootClass  sig=csp ====
char __thiscall FootClass::LiberateMember(_DWORD *this, HouseClass *aP1, int a3)
{
  int v3; // edi
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // edi
  _DWORD *v8; // eax
  int v10; // edi
  _DWORD *v11; // eax
  int v12; // [esp+8h] [ebp-4h] BYREF

  if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 1520) ) /*0x4dbedd*/
  {
    v3 = *this; /*0x4dbee7*/
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 440))(this, &v12); /*0x4dbef0*/
    (*(void (__thiscall **)(_DWORD *, _DWORD))(v3 + 1260))(this, *v5); /*0x4dbefb*/
  }
  if ( TechnoClass::ProcessCapture(this, v3, (int)aP1, 1) ) /*0x4dbf0a*/
  {
    if ( *(_BYTE *)(this->focus + 492) ) /*0x4dbf19*/
    {
      v6 = this->FootClass_field_5D4; /*0x4dbf23*/
      if ( v6 ) /*0x4dbf2b*/
        TeamClass::LiberateMember_Start(v6, (IUnknown *)this, 0xFFFFFFFF, 0); /*0x4dbf32*/
    }
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 84))(this) ) /*0x4dbf3b*/
      this->FootClass_field_55C = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, HouseClass **))(*this + 440))(this, &aP1); /*0x4dbf53*/
    if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 1520) ) /*0x4dbf63*/
    {
      v7 = *this; /*0x4dbf6d*/
      v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, HouseClass **))(*this + 440))(this, &aP1); /*0x4dbf76*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(v7 + 1256))(this, *v8); /*0x4dbf81*/
    }
    return 1; /*0x4dbf88*/
  }
  else
  {
    if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 1520) ) /*0x4dbf99*/
    {
      v10 = *this; /*0x4dbfa3*/
      v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, HouseClass **))(*this + 440))(this, &aP1); /*0x4dbfac*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(v10 + 1256))(this, *v11); /*0x4dbfb7*/
    }
    return 0; /*0x4dbfbe*/
  }
}


// ==== 0x004DBFD0  FootClass::vt_entry_4E0  this=FootClass  sig=csp ====
bool __thiscall FootClass::vt_entry_4E0(void *this)
{
  if ( !(*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 1016))(this, 0) ) /*0x4dbfd7*/
    return 1; /*0x4dbfe1*/
  if ( *(_DWORD *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 132))(this) + 1588) == -1 ) /*0x4dbff6*/
    return 1; /*0x4dbff8*/
  if ( *(_DWORD *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 132))(this) + 1028) ) /*0x4dc006*/
    return 1; /*0x4dc010*/
  return *(_DWORD *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 132))(this) + 1656) <= 13; /*0x4dbfe3*/
}


// ==== 0x004DC030  FootClass::vt_entry_4F4  this=FootClass  sig=csp ====
int __thiscall FootClass::vt_entry_4F4(void *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 388))(this); /*0x4dc035*/
  if ( result == 15 ) /*0x4dc03e*/
  {
    (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 968))(this, 0); /*0x4dc046*/
    return (*(int (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this + 1152))(this, 0, 1); /*0x4dc054*/
  }
  return result; /*0x4dc05a*/
}


// ==== 0x004DC060  FootClass::CheckTargetCell  this=FootClass  sig=csp ====
int __thiscall FootClass_CheckTargetCell(int *this, int a2, int a3)
{
  int v4; // edi
  int result; // eax
  int *v6; // eax
  int v7; // ebp
  int v8; // ebx
  int *TargetCoords; // eax
  int v10; // edx
  unsigned __int16 v11; // di
  int v12; // ebp
  int v13; // ebx
  int v14; // eax
  int v15; // edx
  int *v16; // eax
  int v17; // edi
  unsigned __int16 v18; // dx
  int v19; // [esp-Ch] [ebp-40h]
  int v20; // [esp-Ch] [ebp-40h]
  int v21; // [esp+10h] [ebp-24h] BYREF
  int v22; // [esp+14h] [ebp-20h]
  int v23; // [esp+18h] [ebp-1Ch]
  int v24; // [esp+1Ch] [ebp-18h] BYREF
  int v25; // [esp+24h] [ebp-10h]
  int v26[3]; // [esp+28h] [ebp-Ch] BYREF

  v4 = *(this + 173); /*0x4dc069*/
  if ( v4 || (result = *(this + 361)) != 0 ) /*0x4dc07b*/
  {
    if ( (_BYTE)a2 ) /*0x4dc087*/
      goto LABEL_8; /*0x4dc087*/
    result = MEMORY[0xB0EA88]; /*0x4dc08f*/
    if ( MEMORY[0xB0EA80] != -1 ) /*0x4dc097*/
    {
      if ( (int)MEMORY[0xA8ED84] - MEMORY[0xB0EA80] >= MEMORY[0xB0EA88] ) /*0x4dc0a3*/
        return result; /*0x4dc0a3*/
      result = MEMORY[0xB0EA88] - ((_DWORD)MEMORY[0xA8ED84] - MEMORY[0xB0EA80]); /*0x4dc0a9*/
    }
    if ( result > 0 ) /*0x4dc0ad*/
    {
LABEL_8:
      if ( v4 ) /*0x4dc0b5*/
      {
        v6 = (int *)(*(int (__thiscall **)(int *, int *, _DWORD))(*this + 768))(this, &v24, 0); /*0x4dc0c6*/
        v7 = *v6; /*0x4dc0cc*/
        v8 = v6[1]; /*0x4dc0d0*/
        v25 = v6[2]; /*0x4dc0db*/
        TargetCoords = TechnoClass::GetTargetCoords(this, v26); /*0x4dc0df*/
        v21 = *TargetCoords; /*0x4dc0e8*/
        v22 = TargetCoords[1]; /*0x4dc0ef*/
        v23 = TargetCoords[2]; /*0x4dc0f6*/
        v10 = *(_DWORD *)(MEMORY[0x87F6C4] + 372); /*0x4dc106*/
        if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x4dc10c*/
          v11 = *(unsigned __int8 *)(v10 + 8); /*0x4dc113*/
        else
          v11 = *(_WORD *)(v10 + 16); /*0x4dc119*/
        LOBYTE(a2) = (unsigned __int8)(v11 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4dc13c*/
        BYTE1(a2) = (unsigned __int8)(v11 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4dc154*/
        HIBYTE(v19) = HIBYTE(MEMORY[0x8A0DDC]); /*0x4dc168*/
        LOWORD(v19) = a2; /*0x4dc170*/
        BYTE2(v19) = (unsigned __int8)(v11 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4dc173*/
        return DrawTacticalMapLine(this, v7, v8, v25, *TargetCoords, TargetCoords[1], TargetCoords[2], v19, 0, 0); /*0x4dc19b*/
      }
      else
      {
        v12 = *(this + 39); /*0x4dc1b0*/
        v13 = this->owningHouseIndex; /*0x4dc1b6*/
        v14 = *(this + 358); /*0x4dc1bc*/
        v25 = *(this + 41); /*0x4dc1c4*/
        if ( v14 ) /*0x4dc1c8*/
          v15 = **(_DWORD **)(*(this + 355) + 4 * v14 - 4); /*0x4dc1ea*/
        else
          v15 = *(_DWORD *)*(this + 361); /*0x4dc1d5*/
        v16 = (int *)(*(int (__stdcall **)(int *))(v15 + 72))(v26); /*0x4dc1ec*/
        v21 = *v16; /*0x4dc1f3*/
        v22 = v16[1]; /*0x4dc1fa*/
        v23 = v16[2]; /*0x4dc201*/
        LOWORD(a2) = v21 / 256; /*0x4dc211*/
        HIWORD(a2) = v22 / 256; /*0x4dc229*/
        if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&a2) /*0x4dc25c*/
          && (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v21) + 80) & 0x100) != 0 )
        {
          v17 = MEMORY[0x8B3DF4] + Cell::GetGroundHeight(&v21); /*0x4dc274*/
          v23 = v17; /*0x4dc276*/
        }
        else
        {
          v17 = v23; /*0x4dc27c*/
        }
        if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x4dc289*/
          v18 = *(unsigned __int8 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 3); /*0x4dc293*/
        else
          v18 = *(_WORD *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 6); /*0x4dc2a0*/
        LOBYTE(a2) = (unsigned __int8)(v18 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4dc2c1*/
        BYTE1(a2) = (unsigned __int8)(v18 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4dc2e2*/
        HIBYTE(v20) = HIBYTE(a3); /*0x4dc2ed*/
        LOWORD(v20) = a2; /*0x4dc2f8*/
        BYTE2(v20) = (unsigned __int8)(v18 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4dc2ff*/
        return DrawTacticalMapLine(this, v12, v13, v25, v21, v22, v17, v20, a3, 0); /*0x4dc323*/
      }
    }
  }
  return result; /*0x4dc1a0*/
}


// ==== 0x004DC340  ObjectClass::DrawFootTargetLine  this=int  sig=csp ====
char __thiscall DrawFootTargetLine(int *this)
{
  int v2; // eax
  int *v3; // eax
  int *TargetCoords; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // esi
  AbstractClass *v11; // eax
  int *v12; // eax
  AbstractClass *v13; // eax
  IUnknown **v14; // eax
  BuildingTypeClass *Time; // esi
  __int16 v16; // ax
  unsigned __int8 v18[8]; // [esp+14h] [ebp-90h] BYREF
  char *tail_1602E; // [esp+1Ch] [ebp-88h] BYREF
  int v20; // [esp+20h] [ebp-84h]
  Tactical *v21; // [esp+28h] [ebp-7Ch] BYREF
  int v22; // [esp+2Ch] [ebp-78h]
  int v23; // [esp+30h] [ebp-74h]
  unsigned __int8 a2[4]; // [esp+34h] [ebp-70h] BYREF
  IUnknown *v26; // [esp+38h] [ebp-6Ch] BYREF
  int var68; // [esp+3Ch] [ebp-68h]
  int v27; // [esp+40h] [ebp-64h] BYREF
  int v28; // [esp+44h] [ebp-60h]
  IUnknown *v30; // [esp+48h] [ebp-5Ch] BYREF
  IUnknown *var58; // [esp+4Ch] [ebp-58h]
  IUnknown *v31; // [esp+50h] [ebp-54h]
  IUnknown *v32; // [esp+54h] [ebp-50h]
  int v33; // [esp+58h] [ebp-4Ch] BYREF
  IUnknown *v34; // [esp+5Ch] [ebp-48h]
  int v35; // [esp+60h] [ebp-44h]
  int v36; // [esp+64h] [ebp-40h]
  int a1; // [esp+68h] [ebp-3Ch] BYREF
  int v38; // [esp+6Ch] [ebp-38h]
  int v39; // [esp+70h] [ebp-34h]
  int v40[4]; // [esp+74h] [ebp-30h] BYREF
  _DWORD v41[4]; // [esp+84h] [ebp-20h] BYREF
  _DWORD v42[4]; // [esp+94h] [ebp-10h] BYREF

  a2[0] = -1; /*0x4dc34a*/
  v2 = *(this + 173); /*0x4dc34f*/
  a2[1] = -1; /*0x4dc355*/
  a2[2] = -1; /*0x4dc35c*/
  v18[0] = 0; /*0x4dc361*/
  v18[1] = 0; /*0x4dc366*/
  v18[2] = 0; /*0x4dc36b*/
  if ( v2 ) /*0x4dc370*/
  {
    v3 = (int *)(*(int (__thiscall **)(int *, char **, _DWORD))(*this + 768))(this, &tail_1602E, 0); /*0x4dc38f*/
    a1 = *v3; /*0x4dc397*/
    v38 = v3[1]; /*0x4dc39e*/
    v39 = v3[2]; /*0x4dc3ac*/
    TargetCoords = TechnoClass::GetTargetCoords(this, (int *)&tail_1602E); /*0x4dc3b0*/
    v21 = (Tactical *)*TargetCoords; /*0x4dc3b7*/
    v22 = TargetCoords[1]; /*0x4dc3be*/
    v5 = TargetCoords[2]; /*0x4dc3c2*/
LABEL_11:
    v23 = v5; /*0x4dc498*/
    goto LABEL_12; /*0x4dc498*/
  }
  if ( !*(this + 361) ) /*0x4dc37a*/
    return v2; /*0x4dc37a*/
  a1 = *(this + 39); /*0x4dc3d6*/
  v38 = *(this + 40); /*0x4dc3dd*/
  v6 = *(this + 358); /*0x4dc3e1*/
  v39 = *(this + 41); /*0x4dc3ec*/
  if ( v6 ) /*0x4dc3f0*/
    v7 = *(_DWORD *)(*(this + 355) + 4 * v6 - 4); /*0x4dc406*/
  else
    v7 = *(this + 361); /*0x4dc3f2*/
  v8 = (*(int (__stdcall **)(char **))(*(_DWORD *)v7 + 72))(&tail_1602E); /*0x4dc411*/
  v21 = *(Tactical **)v8; /*0x4dc418*/
  v22 = *(_DWORD *)(v8 + 4); /*0x4dc41f*/
  v23 = *(_DWORD *)(v8 + 8); /*0x4dc426*/
  LOWORD(tail_1602E) = (int)v21 / 256; /*0x4dc436*/
  HIWORD(tail_1602E) = v22 / 256; /*0x4dc44e*/
  if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (IUnknown *)&tail_1602E) /*0x4dc481*/
    && (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v21) + 80) & 0x100) != 0 )
  {
    v5 = *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61384] + Cell::GetGroundHeight(&v21); /*0x4dc492*/
    goto LABEL_11; /*0x4dc492*/
  }
LABEL_12:
  Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], &a1, (IUnknown *)&v27); /*0x4dc49c*/
  Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], &v21, (IUnknown *)&v26); /*0x4dc4c1*/
  v9 = *(this + 135) + 22265; /*0x4dc4de*/
  v28 += *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x4dc4e4*/
  var68 += *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x4dc4e8*/
  *(_WORD *)v18 = *(_WORD *)v9; /*0x4dc4f4*/
  v18[2] = *(_BYTE *)(v9 + 2); /*0x4dc504*/
  v20 = v28 - 2; /*0x4dc524*/
  tail_1602E = (char *)(v27 - 2); /*0x4dc55d*/
  v10 = (v18[0] >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656]) /*0x4dc568*/
      | (v18[1] >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672])
      | (v18[2] >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664]);
  v11 = Rect::Construct(v41, (IUnknown *)&tail_1602E, (AbstractClass *)3, (AbstractClass *)3); /*0x4dc56f*/
  v30 = *(IUnknown **)v11->__pad_0; /*0x4dc578*/
  var58 = *(IUnknown **)&v11->__pad_0[4]; /*0x4dc581*/
  v31 = *(IUnknown **)&v11->__pad_0[8]; /*0x4dc588*/
  v32 = *(IUnknown **)&v11->__pad_0[12]; /*0x4dc59a*/
  v12 = ClipRectIntersection(v42, (int *)&MEMORY[0x87F8E4].__pad_5568[8532], (int *)&v30, 0, 0); /*0x4dc5a4*/
  v33 = *v12; /*0x4dc5ab*/
  v34 = (IUnknown *)v12[1]; /*0x4dc5b2*/
  v35 = v12[2]; /*0x4dc5b9*/
  v36 = v12[3]; /*0x4dc5c6*/
  (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9424] + 20))( /*0x4dc5d2*/
    *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9424],
    &v33,
    v10);
  v20 = var68 - 2; /*0x4dc5e9*/
  tail_1602E = v26[-1].__tail_1602E; /*0x4dc5f7*/
  v13 = Rect::Construct(v42, (IUnknown *)&tail_1602E, (AbstractClass *)3, (AbstractClass *)3); /*0x4dc5fb*/
  v33 = *(_DWORD *)v13->__pad_0; /*0x4dc604*/
  v34 = *(IUnknown **)&v13->__pad_0[4]; /*0x4dc60d*/
  v35 = *(_DWORD *)&v13->__pad_0[8]; /*0x4dc614*/
  v36 = *(_DWORD *)&v13->__pad_0[12]; /*0x4dc626*/
  v14 = (IUnknown **)ClipRectIntersection(v41, (int *)&MEMORY[0x87F8E4].__pad_5568[8532], &v33, 0, 0); /*0x4dc630*/
  v30 = *v14; /*0x4dc638*/
  var58 = v14[1]; /*0x4dc63f*/
  v31 = v14[2]; /*0x4dc646*/
  v32 = v14[3]; /*0x4dc653*/
  (*(void (__thiscall **)(_DWORD, IUnknown **, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9424] + 20))( /*0x4dc65e*/
    *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9424],
    &v30,
    v10);
  v40[1] = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x4dc672*/
  v40[0] = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532]; /*0x4dc67a*/
  v40[2] = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8540]; /*0x4dc683*/
  v40[3] = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8544]; /*0x4dc690*/
  LOBYTE(v2) = ClipLine(&v27, (int *)&v26, v40); /*0x4dc694*/
  if ( (_BYTE)v2 ) /*0x4dc69b*/
  {
    Time = (BuildingTypeClass *)timeGetTime(); /*0x4dc6a7*/
    v16 = (unsigned __int16)Time & 0x3FF; /*0x4dc6a9*/
    if ( ((unsigned __int16)Time & 0x3FF & 0x200) == 0 ) /*0x4dc6b1*/
    {
      if ( (v16 & 0x100) != 0 ) /*0x4dc6b6*/
        LOBYTE(v16) = ~(_BYTE)Time; /*0x4dc6b8*/
      Color::Lerp(v18, (ObjectClass *)(unsigned __int8)v16, a2); /*0x4dc6cc*/
    }
    LOBYTE(v2) = (*(char (__thiscall **)(_DWORD, int *, IUnknown **, int, _DWORD *, int, _DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9424] /*0x4dc747*/
                                                                                                + 76))(
                   *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9424],
                   &v27,
                   &v26,
                   (v18[0] >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656])
                 | (v18[1] >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672])
                 | (v18[2] >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664]),
                   dword_822540,
                   (-(int)Time >> 5) & 0xF,
                   0);
  }
  return v2; /*0x4dc74a*/
}


// ==== 0x004DC760  LocomotionClass::GetSpeedMultiplier  this=LocomotionClass  sig=csp ====
double __thiscall LocomotionClass::GetSpeedMultiplier(int this)
{
  int v1; // eax

  v1 = *(_DWORD *)(this + 1492); /*0x4dc760*/
  if ( v1 && *(_BYTE *)(*(_DWORD *)(v1 + 36) + 242) ) /*0x4dc76d*/
    return 1.0; /*0x4dc777*/
  else
    return *(double *)(this + 1328); /*0x4dc77e*/
}


// ==== 0x004DC790  FootClass::Destru_vt311  this=FootClass  sig=csp ====
bool __thiscall FootClass::Destru_vt311(void *this)
{
  bool result; // al
  int v3; // ecx
  int v4; // ecx
  _DWORD *v5; // eax
  _BYTE v6[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( !*((_BYTE *)this + 981) ) /*0x4dc796*/
    return 0; /*0x4dc7a0*/
  v3 = this->FootClass_field_5D4; /*0x4dc7a7*/
  if ( !v3 || (result = TechnoClass::IsWaypointHidden(v3)) ) /*0x4dc7b1*/
  {
    result = 1; /*0x4dc7f6*/
    if ( *(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 132))(this) + 3220) ) /*0x4dc7c9*/
    {
      v4 = this->FootClass_field_5A4; /*0x4dc7d3*/
      if ( v4 ) /*0x4dc7db*/
      {
        v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 72))(v4, v6); /*0x4dc7e4*/
        if ( IsCoordVisibleMap(&MEMORY[0x87F7E8], v5) ) /*0x4dc7ed*/
          return 0; /*0x4dc7d1*/
      }
    }
  }
  return result; /*0x4dc7a2*/
}


// ==== 0x004DC810  FootClass::SetBuildingType  this=FootClass  sig=csp ====
int __thiscall FootClass_SetBuildingType(int this, int a2, char a3)
{
  int result; // eax
  _DWORD *Element; // eax
  int v6; // [esp+10h] [ebp+8h]

  result = a2; /*0x4dc810*/
  if ( a2 == -1 ) /*0x4dc81d*/
  {
    *(_DWORD *)(this + 1312) = -1; /*0x4dc888*/
    *(_BYTE *)(this + 1670) = 0; /*0x4dc892*/
    *(_DWORD *)(this + 1320) = 0; /*0x4dc898*/
  }
  else
  {
    *(_DWORD *)(this + 1312) = a2; /*0x4dc823*/
    *(_BYTE *)(this + 1670) = a3; /*0x4dc829*/
    Element = (_DWORD *)Array::GetElement(*((_DWORD **)HouseClass_Player + a2 + 132), a3); /*0x4dc840*/
    LOWORD(v6) = *Element / 256; /*0x4dc855*/
    HIWORD(v6) = Element[1] / 256; /*0x4dc869*/
    result = v6; /*0x4dc86e*/
    *(_DWORD *)(this + 1320) = v6; /*0x4dc872*/
  }
  *(_DWORD *)(this + 1316) = 0; /*0x4dc8ac*/
  return result; /*0x4dc8b2*/
}


// ==== 0x004DC8C0  BuildingClass::ValidateFoundation_0  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::ValidateFoundation_0(BuildingClass *this, IUnknown *aP1)
{
  int result; // eax
  int v3; // ebx
  IUnknown *v4; // ebp
  int v6; // ecx
  int v7; // eax
  void *v8; // ebp
  void *v9; // edi
  int v10; // eax
  int v11; // ebx
  HouseClass *v12; // eax
  WaveClass *v15; // ebx
  char IsAlliedWith; // al
  int eax22; // eax
  IUnknown *v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  void *Factory; // ebp
  _DWORD *v22; // edi
  unsigned int v23; // eax
  int v24; // eax
  int v25; // eax
  unsigned int v26; // edx
  int v27; // eax
  _DWORD *v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  IUnknown *v32; // eax
  int v33; // ecx
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  int ebp31; // ebp
  IUnknown *v37; // ebx
  IUnknown *v39; // eax
  unsigned int v40; // edx
  IUnknown *v41; // [esp+Eh] [ebp-88h]
  int TileIndex; // [esp+Eh] [ebp-88h]
  int _12; // [esp+12h] [ebp-84h]
  IUnknown *v43; // [esp+3Eh] [ebp-58h]
  int v45; // [esp+42h] [ebp-54h]
  IUnknown *v46; // [esp+46h] [ebp-50h]
  IUnknown *v47; // [esp+46h] [ebp-50h]
  char v48; // [esp+4Fh] [ebp-47h]
  char v49; // [esp+50h] [ebp-46h]
  char var48_3; // [esp+51h] [ebp-45h]
  MouseClass *v50; // [esp+52h] [ebp-44h]
  int v52; // [esp+56h] [ebp-40h] BYREF
  __int16 v53[2]; // [esp+5Ah] [ebp-3Ch] BYREF
  IUnknown *v54; // [esp+5Eh] [ebp-38h] BYREF
  int var34; // [esp+62h] [ebp-34h]
  IUnknown *v55; // [esp+66h] [ebp-30h]
  int v57; // [esp+6Ah] [ebp-2Ch]
  int v58; // [esp+6Eh] [ebp-28h] BYREF
  int v59; // [esp+72h] [ebp-24h]
  _DWORD v60[2]; // [esp+76h] [ebp-20h] BYREF
  int v61; // [esp+7Eh] [ebp-18h] BYREF
  _DWORD v62[5]; // [esp+82h] [ebp-14h] BYREF
  _UNKNOWN *retaddr; // [esp+96h] [ebp+0h] BYREF
  int a1; // [esp+9Ah] [ebp+4h]
  void *a1a; // [esp+9Ah] [ebp+4h]
  char v66; // [esp+A2h] [ebp+Ch]

  LOBYTE(result) = 0; /*0x4dc8c3*/
  if ( this->__pad_3F7[57] ) /*0x4dc8c9*/
    this->isGrindingInProgress = 1; /*0x4dc8d3*/
  if ( !aP1 ) /*0x4dc8e0*/
    goto LABEL_45; /*0x4dc8e0*/
  v45 = v3; /*0x4dc8e6*/
  v43 = v4; /*0x4dc8ed*/
  WaypointClass::FindOrCreate( /*0x4dc8fd*/
    (char *)HouseClass_Player,
    (MouseClass *)aP1,
    (IUnknown *)&this->Type,
    (IUnknown *)((char *)&this->Audio7[3] + 2));
  v6 = aP1->field_8; /*0x4dc904*/
  v7 = aP1->field_4; /*0x4dc907*/
  v61 = aP1->field_0; /*0x4dc90a*/
  v62[1] = v6; /*0x4dc912*/
  v62[0] = v7; /*0x4dc91c*/
  v8 = (void *)*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v61) + 57); /*0x4dc925*/
  v9 = AbstractClass::IsTechnoType(v8); /*0x4dc932*/
  v10 = v62[0] / 256; /*0x4dc953*/
  LOWORD(a1) = v61 / 256; /*0x4dc956*/
  HIWORD(a1) = v62[0] / 256; /*0x4dc95b*/
  this->C4Timer[0] = a1; /*0x4dc969*/
  HIWORD(a1) = v10; /*0x4dc975*/
  var48_3 = g_MoveFeedback; /*0x4dc980*/
  g_MoveFeedback = 0; /*0x4dc984*/
  v60[0] = a1; /*0x4dc98b*/
  if ( !v9 ) /*0x4dc994*/
    goto LABEL_29; /*0x4dc994*/
  v11 = (*(int (__thiscall **)(BuildingClass *, void *, int))(*(_DWORD *)this->__pad_0 + 116))(this, v8, 1); /*0x4dc9aa*/
  v12 = (HouseClass *)*((_DWORD *)v9 + 135); /*0x4dc9ac*/
  v52 = v11; /*0x4dc9b2*/
  if ( !(unsigned __int8)HouseClass::IsAlliedWith(HouseClass_Player, (IUnknown *)v12) ) /*0x4dc9be*/
  {
    if ( v11 != 8 && v11 != 7 && v11 != 1 && v11 != 2 ) /*0x4dcac6*/
    {
LABEL_22:
      eax22 = (*(int (__thiscall **)(BuildingClass *, void *, int))(*(_DWORD *)this->__pad_0 + 116))(this, v8, 1); /*0x4dca81*/
      result = (*(int (__thiscall **)(BuildingClass *, int, void *, int))(*(_DWORD *)this->__pad_0 + 324))( /*0x4dca93*/
                 this,
                 eax22,
                 v8,
                 1);
      this->Factory = 0; /*0x4dcaa9*/
      goto LABEL_42; /*0x4dcaaf*/
    }
    goto LABEL_27; /*0x4dcac6*/
  }
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)v9 + 44))(v9) == 6 ) /*0x4dc9ce*/
  {
    if ( !*(_BYTE *)(*((_DWORD *)v9 + 328) + 5801) /*0x4dca0a*/
      || this->health >= *(_DWORD *)((*(int (__thiscall **)(BuildingClass *))(*(_DWORD *)this->__pad_0 + 132))(this)
                                   + 160)
      || (v48 = 1, (*(int (__thiscall **)(BuildingClass *))(*(_DWORD *)this->__pad_0 + 44))(this) == 15) )
    {
      v48 = 0; /*0x4dca0c*/
    }
    if ( *(_BYTE *)(*((_DWORD *)v9 + 328) + 5802) ) /*0x4dca17*/
    {
      v15 = (WaveClass *)LODWORD(this->pitchAngle); /*0x4dca23*/
      if ( (int)v15 < *(_DWORD *)((*(int (__thiscall **)(BuildingClass *))(*(_DWORD *)this->__pad_0 + 132))(this) + 1668) /*0x4dca3c*/
        && v15 != (WaveClass *)-1 )
      {
        v11 = v52; /*0x4dca3e*/
        v49 = 1; /*0x4dca42*/
        goto LABEL_17; /*0x4dca47*/
      }
      v11 = v52; /*0x4dca49*/
    }
    v49 = 0; /*0x4dca4d*/
LABEL_17:
    IsAlliedWith = HouseClass::IsAlliedWith(*((void **)v9 + 135), HouseClass_Player); /*0x4dca52*/
    if ( (v48 || v49) && IsAlliedWith && v11 != 7 && v11 != 8 ) /*0x4dca7f*/
      goto LABEL_22; /*0x4dca7f*/
  }
LABEL_27:
  v52 = 0; /*0x4dcac8*/
  _12 = *(_DWORD *)((*(int (__thiscall **)(BuildingClass *))(*(_DWORD *)this->__pad_0 + 132))(this) + 1460); /*0x4dcafd*/
  v16 = (IUnknown *)(*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v60) + 80) >> 8); /*0x4dcb11*/
  LOBYTE(v16) = (unsigned __int8)v16 & 1; /*0x4dcb14*/
  v41 = v16; /*0x4dcb19*/
  v17 = (*(int (__thiscall **)(BuildingClass *))(*(_DWORD *)this->__pad_0 + 132))(this); /*0x4dcb1a*/
  TileIndex = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (IUnknown *)v60, *(IUnknown **)(v17 + 1460), v41); /*0x4dcb36*/
  v18 = (*(int (__thiscall **)(BuildingClass *))(*(_DWORD *)this->__pad_0 + 132))(this); /*0x4dcb3b*/
  v19 = *LayerClass::Pathfinding_Find( /*0x4dcb5c*/
           &MEMORY[0x87F7E8],
           (int)v60,
           &v58,
           (__int16 *)v60,
           *(_DWORD *)(v18 + 1660),
           TileIndex,
           _12,
           0,
           1,
           1,
           0,
           1,
           0,
           1,
           (__int16 *)&v52,
           0,
           0);
  v58 = v19; /*0x4dcb65*/
  if ( v19 != *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61276] ) /*0x4dcb6d*/
  {
    LOWORD(a1a) = v19 - LOWORD(v60[0]); /*0x4dcb7c*/
    HIWORD(a1a) = HIWORD(v58) - HIWORD(v60[0]); /*0x4dcb87*/
    this->Factory = a1a; /*0x4dcb90*/
  }
LABEL_29:
  v20 = (*(int (__thiscall **)(BuildingClass *, _DWORD *, _DWORD, int, IUnknown *, int))(*(_DWORD *)this->__pad_0 + 112))( /*0x4dcb9b*/
          this,
          v60,
          0,
          1,
          v43,
          v45);
  Factory = this->Factory; /*0x4dcbab*/
  v60[0] = Factory; /*0x4dcbb9*/
  v53[0] = (_WORD)Factory + v61; /*0x4dcbc3*/
  v54 = (IUnknown *)v20; /*0x4dcbce*/
  v53[1] = HIWORD(Factory) + HIWORD(v61); /*0x4dcbd2*/
  v22 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v53); /*0x4dcbf4*/
  v55 = (IUnknown *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v61); /*0x4dcc01*/
  v58 = (*(int (__thiscall **)(BuildingClass *, __int16 *, _DWORD, int))(*(_DWORD *)this->__pad_0 + 112))( /*0x4dcc13*/
          this,
          v53,
          0,
          1);
  v23 = (unsigned int)v55->field_140 >> 8; /*0x4dcc21*/
  LOBYTE(v23) = v23 & 1; /*0x4dcc24*/
  v24 = (*(int (__thiscall **)(BuildingClass *, unsigned int))(*(_DWORD *)this->__pad_0 + 132))(this, v23); /*0x4dcc27*/
  v25 = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (IUnknown *)v62, *(IUnknown **)(v24 + 1460), v46); /*0x4dcc3e*/
  v26 = v22[80]; /*0x4dcc43*/
  v60[0] = v25; /*0x4dcc49*/
  v26 >>= 8; /*0x4dcc51*/
  LOBYTE(v26) = v26 & 1; /*0x4dcc54*/
  v47 = (IUnknown *)v26; /*0x4dcc57*/
  v27 = (*(int (__thiscall **)(BuildingClass *))(*(_DWORD *)this->__pad_0 + 132))(this); /*0x4dcc58*/
  v60[1] = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (IUnknown *)&v54, *(IUnknown **)(v27 + 1460), v47); /*0x4dcc78*/
  v28 = (_DWORD *)(*(int (__thiscall **)(BuildingClass *, _UNKNOWN **))(*(_DWORD *)this->__pad_0 + 76))(this, &retaddr); /*0x4dcc83*/
  LOWORD(var34) = *v28 / 256; /*0x4dcc96*/
  HIWORD(var34) = v28[1] / 256; /*0x4dccae*/
  v29 = *(_DWORD *)this->__pad_0; /*0x4dccb7*/
  v57 = var34; /*0x4dccb9*/
  v30 = (*(int (__thiscall **)(BuildingClass *, _DWORD))(v29 + 188))(this, 0); /*0x4dccbd*/
  v31 = (*(int (__thiscall **)(BuildingClass *, int))(*(_DWORD *)this->__pad_0 + 132))(this, v30); /*0x4dccc8*/
  v32 = (IUnknown *)MapClass::GetTileIndex(&MEMORY[0x87F7E8], (IUnknown *)&v58, *(IUnknown **)(v31 + 1460), 0); /*0x4dccdf*/
  v33 = *((char *)v22 + 283); /*0x4dcce4*/
  v55 = v32; /*0x4dcceb*/
  v57 = (*(int (__thiscall **)(BuildingClass *, _DWORD *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 428))( /*0x4dcd10*/
          this,
          v22,
          -1,
          v33 + 4 * ((v22[80] >> 8) & 1),
          0);
  v34 = abs16(SHIWORD(Factory)); /*0x4dcd1f*/
  v35 = abs16((__int16)Factory); /*0x4dcd24*/
  if ( v35 <= v34 ) /*0x4dcd28*/
    v35 = v34; /*0x4dcd2a*/
  v36 = v35 + 3; /*0x4dcd2c*/
  ebp31 = 5; /*0x4dcd2f*/
  if ( v36 <= 5 ) /*0x4dcd37*/
    ebp31 = v36; /*0x4dcd39*/
  v37 = v54; /*0x4dcd3b*/
  if ( v54 != (IUnknown *)v58 && v66 /*0x4dcdaf*/
    || v57
    || v59 != v60[0]
    || var34 != v59
    || v66
    && (v39 = (IUnknown *)(v22[80] >> 8),
        v40 = (unsigned int)v55->field_140 >> 8,
        LOBYTE(v40) = v40 & 1,
        LOBYTE(v39) = (unsigned __int8)v39 & 1,
        Pathfinding::CalcDistance(
          (int)MEMORY[0x87E8B8],
          (IUnknown *)v53,
          (IUnknown *)&v61,
          (TechnoClass *)this,
          v39,
          (IUnknown *)v40,
          -1) > ebp31) )
  {
    result = (*(int (__thiscall **)(BuildingClass *, IUnknown *, int *))(*(_DWORD *)this->__pad_0 + 320))( /*0x4dcdff*/
               this,
               v37,
               &v61);
    this->Factory = 0; /*0x4dce15*/
  }
  else
  {
    result = (*(int (__thiscall **)(BuildingClass *, IUnknown *, __int16 *))(*(_DWORD *)this->__pad_0 + 320))( /*0x4dcdcf*/
               this,
               v37,
               v53);
    this->C4Timer[0] = (int)v50; /*0x4dcdd9*/
  }
LABEL_42:
  if ( var48_3 ) /*0x4dce23*/
    g_MoveFeedback = 1; /*0x4dce25*/
  if ( !(_BYTE)result ) /*0x4dce2e*/
  {
LABEL_45:
    this->Type = (void *)-1; /*0x4dce30*/
    BYTE2(this->Audio7[3]) = 0; /*0x4dce58*/
    this->Factory = 0; /*0x4dce5f*/
    this->C4Timer[0] = 0; /*0x4dce65*/
  }
  this->isGrindingInProgress = 0; /*0x4dce6b*/
  return result; /*0x4dce72*/
}


// ==== 0x004DCE80  Cell::IsValidDestination  this=int  sig=csp ====
bool __thiscall Cell_IsValidDestination(_BYTE *this, __int16 *a2)
{
  int v4; // eax
  int GroundHeight; // eax
  int v6; // edx
  int v7; // ecx
  _DWORD *v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  int v14; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v15[3]; // [esp+10h] [ebp-18h] BYREF
  _DWORD v16[3]; // [esp+1Ch] [ebp-Ch] BYREF
  int v17; // [esp+2Ch] [ebp+4h]

  if ( !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], a2, 1) ) /*0x4dce93*/
    return 0; /*0x4dce93*/
  if ( !MEMORY[0xA8B238] ) /*0x4dcea7*/
  {
    if ( *(this + 1050) ) /*0x4dcea9*/
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
      if ( Cell::IsPassable(v16) ) /*0x4dcf19*/
        return 0; /*0x4dcf19*/
    }
  }
  v8 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD *, _DWORD))(*(_DWORD *)this + 76))(this, v16, 0); /*0x4dcf31*/
  LOWORD(v17) = *v8 / 256; /*0x4dcf4a*/
  v9 = *(_DWORD *)this; /*0x4dcf5b*/
  HIWORD(v17) = v8[1] / 256; /*0x4dcf60*/
  v14 = v17; /*0x4dcf69*/
  v10 = (*(int (__thiscall **)(_BYTE *))(v9 + 188))(this); /*0x4dcf6f*/
  v11 = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 132))(this, v10); /*0x4dcf7a*/
  if ( !MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], (__int16 *)&v14, a2, *(_DWORD *)(v11 + 1460), 0, 0, 0) ) /*0x4dcf92*/
    return 0; /*0x4dcf92*/
  v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], a2); /*0x4dcfa1*/
  return v12[59] == 5 /*0x4dcfc7*/
      && !(*(int (__thiscall **)(_BYTE *, _DWORD *, int, int, _DWORD, int))(*(_DWORD *)this + 428))(
            this,
            v12,
            -1,
            -1,
            0,
            1);
}


// ==== 0x004DCFE0  FootClass::MoveToTiberium  this=TechnoClass  sig=csp ====
char __thiscall FootClass::MoveToTiberium(_DWORD *this, int a2, TechnoClass *aP2)
{
  _DWORD *v4; // eax
  int v6; // edi
  void *v7; // eax
  _BYTE v8[12]; // [esp+Ch] [ebp-Ch] BYREF

  if ( !*(this + 361) ) /*0x4dcfe7*/
  {
    aP2 = *(TechnoClass **)(*(int (__thiscall **)(_DWORD *, int *, int, TechnoClass *))(*this + 824))( /*0x4dd017*/
                             this,
                             &a2,
                             a2,
                             aP2);
    if ( aP2 != *(TechnoClass **)&MEMORY[0x89F690].__pad_579C[61276] ) /*0x4dd01b*/
    {
      v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 72))(this, v8); /*0x4dd034*/
      if ( aP2 == (TechnoClass *)__PAIR32__(v4[1] / 256, *v4 / 256) ) /*0x4dd05d*/
        return 1; /*0x4dd06d*/
      v6 = *this; /*0x4dd070*/
      v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP2); /*0x4dd07e*/
      (*(void (__thiscall **)(_DWORD *, void *, int))(v6 + 1152))(this, v7, 1); /*0x4dd086*/
    }
  }
  return 0; /*0x4dd066*/
}


// ==== 0x004DD0A0  FootClass::FindMoveTarget  this=FootClass  sig=csp ====
int *__thiscall FootClass_FindMoveTarget(_BYTE *this, int *a2, int a3, int a4)
{
  _DWORD *v5; // eax
  int v7; // ebp
  int v8; // edi
  int v9; // esi
  int v10; // eax
  void *v11; // eax
  int NthOfType; // eax
  void *v13; // eax
  int v14; // eax
  void *v15; // eax
  int v16; // eax
  void *v17; // eax
  int v18; // eax
  int v19; // [esp+4h] [ebp-38h] BYREF
  int v20; // [esp+8h] [ebp-34h]
  int v21; // [esp+Ch] [ebp-30h]
  int v22; // [esp+10h] [ebp-2Ch]
  int i; // [esp+14h] [ebp-28h]
  int v24; // [esp+18h] [ebp-24h]
  int v25; // [esp+1Ch] [ebp-20h]
  int v26; // [esp+20h] [ebp-1Ch]
  int v27; // [esp+24h] [ebp-18h]
  int v28; // [esp+28h] [ebp-14h] BYREF
  int v29; // [esp+2Eh] [ebp-Eh] BYREF
  int v30; // [esp+32h] [ebp-Ah]

  v20 = MEMORY[0x8B3D88]; /*0x4dd0ab*/
  v5 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, char *))(*(_DWORD *)this + 72))(this, (char *)&v29 + 2); /*0x4dd0b6*/
  LOWORD(v19) = *v5 / 256; /*0x4dd0c9*/
  HIWORD(v19) = v5[1] / 256; /*0x4dd0e1*/
  v28 = v19; /*0x4dd0ea*/
  if ( *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v28) + 59) == 5 ) /*0x4dd100*/
  {
    *a2 = v28; /*0x4dd10b*/
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
            LOWORD(v21) = v9 + v28; /*0x4dd15d*/
            HIWORD(v21) = v10 + HIWORD(v28); /*0x4dd162*/
            v19 = v21; /*0x4dd16f*/
            if ( Cell::IsValidDestination(this, (__int16 *)&v19) ) /*0x4dd176*/
            {
              v11 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19); /*0x4dd189*/
              NthOfType = Building::GetNthOfType((int)v11); /*0x4dd190*/
              if ( NthOfType > v8 ) /*0x4dd197*/
              {
                v8 = NthOfType; /*0x4dd199*/
                v20 = v19; /*0x4dd19f*/
              }
            }
            LOWORD(v22) = v9 + v28; /*0x4dd1b1*/
            HIWORD(v22) = HIWORD(v28) + v7; /*0x4dd1b6*/
            v19 = v22; /*0x4dd1c6*/
            if ( Cell::IsValidDestination(this, (__int16 *)&v19) ) /*0x4dd1ca*/
            {
              v13 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19); /*0x4dd1dd*/
              v14 = Building::GetNthOfType((int)v13); /*0x4dd1e4*/
              if ( v14 > v8 ) /*0x4dd1eb*/
              {
                v8 = v14; /*0x4dd1f1*/
                v20 = v19; /*0x4dd1f3*/
              }
            }
            LOWORD(v27) = i; /*0x4dd200*/
            LOWORD(v24) = v28 + i; /*0x4dd20f*/
            HIWORD(v24) = v9 + HIWORD(v28); /*0x4dd21b*/
            v19 = v24; /*0x4dd227*/
            if ( Cell::IsValidDestination(this, (__int16 *)&v19) ) /*0x4dd22b*/
            {
              v15 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19); /*0x4dd23e*/
              v16 = Building::GetNthOfType((int)v15); /*0x4dd245*/
              if ( v16 > v8 ) /*0x4dd24c*/
              {
                v8 = v16; /*0x4dd252*/
                v20 = v19; /*0x4dd254*/
              }
            }
            LOWORD(v25) = v28 + v7; /*0x4dd266*/
            HIWORD(v25) = v9 + HIWORD(v28); /*0x4dd26b*/
            v19 = v25; /*0x4dd278*/
            if ( Cell::IsValidDestination(this, (__int16 *)&v19) ) /*0x4dd27f*/
            {
              v17 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19); /*0x4dd292*/
              v18 = Building::GetNthOfType((int)v17); /*0x4dd299*/
              if ( v18 > v8 ) /*0x4dd2a0*/
              {
                v8 = v18; /*0x4dd2a6*/
                v20 = v19; /*0x4dd2a8*/
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


// ==== 0x004DD890  BuildingClass::Validate  this=TechnoClass  sig=csp ====
int *__thiscall BuildingClass::Validate(_BYTE *this, TechnoClass *aP1, int a3)
{
  _DWORD *v4; // eax
  int v6; // ebx
  int v7; // ebp
  int i; // esi
  int v9; // [esp+4h] [ebp-18h] BYREF
  int v10; // [esp+8h] [ebp-14h]
  int v11; // [esp+Ch] [ebp-10h] BYREF
  char v12[12]; // [esp+10h] [ebp-Ch] BYREF

  v10 = *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61276]; /*0x4dd89b*/
  v4 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, char *))(*(_DWORD *)this + 72))(this, v12); /*0x4dd8a6*/
  LOWORD(v9) = *v4 / 256; /*0x4dd8bd*/
  HIWORD(v9) = v4[1] / 256; /*0x4dd8d5*/
  v11 = v9; /*0x4dd8de*/
  if ( BuildingClass::ValidateCell(this, (__int16 *)&v11, 0, 0) ) /*0x4dd8e5*/
  {
    *(_DWORD *)aP1->__pad_0 = v11; /*0x4dd8f7*/
    return (int *)aP1->__pad_0; /*0x4dd8ee*/
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
          v9 = v11; /*0x4dd92d*/
          if ( BuildingClass::ValidateCell(this, (__int16 *)&v9, i, v7) ) /*0x4dd931*/
            v10 = v9; /*0x4dd93e*/
          v9 = v11; /*0x4dd94f*/
          if ( BuildingClass::ValidateCell(this, (__int16 *)&v9, i, v6) ) /*0x4dd953*/
            v10 = v9; /*0x4dd960*/
          v9 = v11; /*0x4dd971*/
          if ( BuildingClass::ValidateCell(this, (__int16 *)&v9, v7, i) ) /*0x4dd975*/
            v10 = v9; /*0x4dd982*/
          v9 = v11; /*0x4dd993*/
          if ( BuildingClass::ValidateCell(this, (__int16 *)&v9, v6, i) ) /*0x4dd997*/
            v10 = v9; /*0x4dd9a4*/
        }
        if ( v10 != *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61276] ) /*0x4dd9bd*/
          break; /*0x4dd9bd*/
        ++v6; /*0x4dd9d1*/
        --v7; /*0x4dd9d2*/
      }
      while ( v6 < a3 ); /*0x4dd9d5*/
    }
    *(_DWORD *)aP1->__pad_0 = v10; /*0x4dd9e7*/
    return (int *)aP1->__pad_0; /*0x4dd9dd*/
  }
}


// ==== 0x004DD9F0  BuildingClass::ValidateCell  this=TechnoClass  sig=csp ====
bool __thiscall BuildingClass_ValidateCell(_BYTE *this, __int16 *a2, int a3, int a4)
{
  __int16 *v4; // edi
  __int16 v6; // cx
  __int16 v7; // cx
  int v8; // eax
  int GroundHeight; // eax
  int v10; // ecx
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  _DWORD *v15; // edi
  _DWORD v17[3]; // [esp+8h] [ebp-18h] BYREF
  _DWORD v18[3]; // [esp+14h] [ebp-Ch] BYREF

  v4 = a2; /*0x4dd9f5*/
  v6 = a2[1]; /*0x4dda00*/
  LOWORD(a2) = a3 + *a2; /*0x4dda0e*/
  HIWORD(a2) = a4 + v6; /*0x4dda13*/
  if ( !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&a2, 1) ) /*0x4dda2a*/
    return 0; /*0x4dda2a*/
  v7 = (__int16)a2; /*0x4dda37*/
  *(_DWORD *)v4 = a2; /*0x4dda3b*/
  if ( !MEMORY[0xA8B238][0] ) /*0x4dda44*/
  {
    if ( *(this + 1050) ) /*0x4dda46*/
    {
      v8 = (v4[1] << 8) + 128; /*0x4dda67*/
      v17[0] = (v7 << 8) + 128; /*0x4dda72*/
      v17[1] = v8; /*0x4dda76*/
      v17[2] = 0; /*0x4dda7a*/
      GroundHeight = Cell::GetGroundHeight(v17); /*0x4dda82*/
      v10 = *v4 << 8; /*0x4dda91*/
      v18[1] = (v4[1] << 8) + 128; /*0x4ddaa0*/
      v18[0] = v10 + 128; /*0x4ddaa8*/
      v18[2] = GroundHeight; /*0x4ddab2*/
      if ( Cell::IsPassable(v18) ) /*0x4ddab6*/
        return 0; /*0x4ddab6*/
    }
  }
  v11 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD *, _DWORD))(this->q04C)(this, v18, 0); /*0x4ddace*/
  LOWORD(a3) = *v11 / 256; /*0x4ddae7*/
  HIWORD(a3) = v11[1] / 256; /*0x4ddafd*/
  v12 = *(_DWORD *)this; /*0x4ddb06*/
  a4 = a3; /*0x4ddb08*/
  v13 = (*(int (__thiscall **)(_BYTE *))(v12 + 188))(this); /*0x4ddb0c*/
  v14 = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 132))(this, v13); /*0x4ddb17*/
  if ( !MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], (__int16 *)&a4, v4, *(_DWORD *)(v14 + 1460), 0, 0, 0) ) /*0x4ddb2f*/
    return 0; /*0x4ddb2f*/
  v15 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v4); /*0x4ddb49*/
  return !(*(int (__thiscall **)(_BYTE *, _DWORD *, int, int, _DWORD, int))(*(_DWORD *)this + 428))( /*0x4ddb6f*/
            this,
            v15,
            -1,
            -1,
            0,
            1)
      && v15[59] == 11
      && *((_BYTE *)v15 + 286) >= 0x30u;
}


// ==== 0x004DDB90  FootClass::MoveToWeed  this=TechnoClass  sig=csp ====
char __thiscall FootClass::MoveToWeed(int *this, int a2)
{
  _DWORD *v3; // eax
  int v5; // edi
  void *v6; // eax
  int v7; // [esp+8h] [ebp-10h] BYREF
  _BYTE v8[12]; // [esp+Ch] [ebp-Ch] BYREF

  if ( !*(this + 361) ) /*0x4ddb97*/
  {
    a2 = *BuildingClass::Validate(this, (TechnoClass *)&v7, a2); /*0x4ddbbf*/
    if ( a2 != *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61276] ) /*0x4ddbc3*/
    {
      v3 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 72))(this, v8); /*0x4ddbdc*/
      if ( a2 == __PAIR32__(v3[1] / 256, *v3 / 256) ) /*0x4ddc05*/
        return 1; /*0x4ddc15*/
      v5 = *this; /*0x4ddc18*/
      v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x4ddc26*/
      (*(void (__thiscall **)(int *, void *, int))(v5 + 1152))(this, v6, 1); /*0x4ddc2e*/
    }
  }
  return 0; /*0x4ddc0e*/
}


// ==== 0x004DDC40  FootClass::CheckHeightDiff  this=FootClass  sig=csp ====
char __thiscall FootClass_CheckHeightDiff(_BYTE *this, int a2)
{
  if ( (char)*(this + 1668) < 0 ) /*0x4ddc48*/
    return ObjectClass::CheckGroundHeightDiff(this, a2); /*0x4ddc54*/
  else
    return 0; /*0x4ddc4a*/
}


// ==== 0x004DDC60  FootClass::ValidateTargetCell  this=FootClass  sig=csp ====
bool __thiscall FootClass_ValidateTargetCell(_DWORD *this, int a2)
{
  int v2; // edi
  bool result; // al
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int ClosestObject; // eax
  _DWORD *v8; // esi
  void *v9; // eax
  int v10; // ecx
  char *i; // edx
  int v12; // eax
  _DWORD v13[2]; // [esp+Ch] [ebp-14h] BYREF
  _BYTE v14[12]; // [esp+14h] [ebp-Ch] BYREF

  v2 = a2; /*0x4ddc66*/
  if ( !a2 ) /*0x4ddc6e*/
    return 0; /*0x4ddc78*/
  v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 72))(a2, v14); /*0x4ddc84*/
  LOWORD(v13[0]) = *v5 / 256; /*0x4ddc99*/
  HIWORD(v13[0]) = v5[1] / 256; /*0x4ddcb2*/
  a2 = v13[0]; /*0x4ddcbf*/
  result = LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&a2, 1); /*0x4ddcc4*/
  if ( result ) /*0x4ddccb*/
  {
    v13[0] = 0; /*0x4ddce9*/
    v13[1] = 0; /*0x4ddcf1*/
    v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x4ddcf9*/
    ClosestObject = Object::FindClosestObjectCell(v6, v13, 0, 0); /*0x4ddd00*/
    v8 = (_DWORD *)ClosestObject; /*0x4ddd05*/
    if ( ClosestObject ) /*0x4ddd09*/
      return this == (_DWORD *)ClosestObject /*0x4ddd51*/
          || Array::Get(this, 0) == ClosestObject
          || *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 3412)
          && (v8[180] || *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v8 + 132))(v8) + 3412));
    v9 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x4ddd7e*/
    if ( Cell::IsBuildable((int)v9, 1, 0, 0, -1, 0, -1, 1) ) /*0x4ddd85*/
    {
      v10 = 0; /*0x4ddd9f*/
      if ( MEMORY[0xA8E3A0] <= 0 ) /*0x4ddda3*/
        return 1; /*0x4dddd5*/
      for ( i = (char *)MEMORY[0xA8E394]; ; i += 4 ) /*0x4ddda5*/
      {
        v12 = *(_DWORD *)i; /*0x4dddab*/
        if ( *(_BYTE *)(*(_DWORD *)i + 144) ) /*0x4dddad*/
        {
          if ( !*(_BYTE *)(v12 + 129) && *(_DWORD *)(v12 + 1444) == v2 && (_DWORD *)v12 != this ) /*0x4dddc9*/
            break; /*0x4dddc9*/
        }
        if ( ++v10 >= MEMORY[0xA8E3A0] ) /*0x4dddd1*/
          return 1; /*0x4dddd1*/
      }
    }
    return 0; /*0x4ddd90*/
  }
  return result; /*0x4ddc70*/
}


// ==== 0x004DDDE0  FootClass::HandleCursorWithCheck  this=FootClass  sig=csp ====
int __thiscall FootClass::HandleCursorWithCheck(int *this, __int16 *a1, IUnknown *aP2, InfantryClass *aP3)
{
  int v5; // ebx
  int v6; // eax
  _DWORD v8[2]; // [esp+Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+14h] [ebp-4h]

  v5 = TechnoClass::HandleCursor(this, (IUnknown *)a1, (FootClass *)aP2, (MouseClass *)aP3); /*0x4dde01*/
  v6 = (a1[1] << 8) + 128; /*0x4dde17*/
  v8[0] = (*a1 << 8) + 128; /*0x4dde22*/
  v8[1] = v6; /*0x4dde26*/
  GroundHeight = 0; /*0x4dde2a*/
  GroundHeight = Cell::GetGroundHeight(v8); /*0x4dde41*/
  if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v8) + 80) & 0x100) != 0 ) /*0x4dde53*/
    GroundHeight += *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61384]; /*0x4dde60*/
  if ( Cell::IsPassable(v8) && v5 ) /*0x4dde79*/
  {
    if ( !*(_BYTE *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 3213) /*0x4dde97*/
      || !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)a1, (TechnoClass *)1) )
    {
      return 2; /*0x4ddebe*/
    }
    if ( v5 != 51 ) /*0x4ddea3*/
      return 1; /*0x4ddeb0*/
  }
  return v5; /*0x4ddea5*/
}


// ==== 0x004DDED0  FootClass::GetCursorOverObject  this=FootClass  sig=csp ====
int __thiscall InfantryClass::GetCursorOverObject(void *this, IUnknown *aP1, char aP2)
{
  TechnoClass *v4; // ebx
  _DWORD *v5; // eax
  _DWORD v7[2]; // [esp+Ch] [ebp-18h] BYREF
  int GroundHeight; // [esp+14h] [ebp-10h]
  _BYTE v9[12]; // [esp+18h] [ebp-Ch] BYREF

  v4 = (TechnoClass *)TechnoClass::HandleCursorClick(this, aP1, (TechnoClass *)aP2); /*0x4ddee9*/
  v5 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _BYTE *))(aP1->field_0 + 72))(aP1, v9); /*0x4ddef2*/
  v7[0] = *v5; /*0x4ddef7*/
  v7[1] = v5[1]; /*0x4ddf03*/
  GroundHeight = v5[2]; /*0x4ddf0f*/
  GroundHeight = Cell::GetGroundHeight(v7); /*0x4ddf22*/
  if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v7) + 80) & 0x100) != 0 ) /*0x4ddf34*/
    GroundHeight += *(_DWORD *)&MEMORY[0x89F690].__pad_579C[61384]; /*0x4ddf41*/
  if ( Cell::IsPassable(v7) && v4 && !MEMORY[0xA8B238] ) /*0x4ddf63*/
    return 2 - (*(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 132))(this) + 3213) != 0); /*0x4ddf7b*/
  else
    return (int)v4->__pad_0; /*0x4ddf86*/
}


// ==== 0x004DDF90  FootClass::ProcessMissionState  this=FootClass  sig=csp ====
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


// ==== 0x004DE1D0  ObjectClass::FindPlacementCell  this=FootClass  sig=csp ====
RadarClass *ObjectClass::FindPlacementCell(FootClass *aP0, int aP1, IUnknown **a2, int a4, int a5, char a6)
{
  FootClass *v6; // ecx
  FootClass *esi1; // esi
  RadarClass *v7; // edi
  bool IsWithinUsableArea; // al
  int v10; // edx
  int v11; // eax
  int v12; // edx
  IUnknown *v13; // eax
  void *v14; // eax
  int v15; // edx
  int v16; // ebp
  int v17; // eax
  char v18; // al
  int v19; // ecx
  int v20; // eax
  bool IsPassable; // al
  int v22; // eax
  IUnknown *v23; // eax
  IUnknown *v24; // edx
  IUnknown **v25; // eax
  IUnknown *eax30; // eax
  MouseClass *v26; // eax
  int v28; // eax
  IUnknown *v29; // eax
  IUnknown *v31; // [esp-2Ch] [ebp-78h]
  IUnknown *TileIndex; // [esp-28h] [ebp-74h]
  IUnknown *v32; // [esp-20h] [ebp-6Ch]
  IUnknown *v33; // [esp-20h] [ebp-6Ch]
  IUnknown *_FFFFFFF4; // [esp-Ch] [ebp-58h]
  IUnknown *v35; // [esp+18h] [ebp-34h] BYREF
  MouseClass *v37; // [esp+1Ch] [ebp-30h]
  MouseClass *aP3; // [esp+20h] [ebp-2Ch]
  int v39; // [esp+24h] [ebp-28h] BYREF
  _DWORD v40[2]; // [esp+28h] [ebp-24h] BYREF
  int GroundHeight; // [esp+30h] [ebp-1Ch]
  _DWORD v42[2]; // [esp+34h] [ebp-18h] BYREF
  int v43; // [esp+3Ch] [ebp-10h]
  _WORD v44[6]; // [esp+40h] [ebp-Ch] BYREF

  esi1 = v6; /*0x4de1d5*/
  v7 = (RadarClass *)aP1; /*0x4de1de*/
  v37 = (MouseClass *)(*(int (__thiscall **)(FootClass *, int, IUnknown **, _DWORD))(*(_DWORD *)v6->__pad_0 + 112))( /*0x4de1f4*/
                        v6,
                        aP1,
                        a2,
                        0);
  IsWithinUsableArea = LayerClass::IsWithinUsableArea(&stru_87C374.__pad_14B0[8132], (IUnknown *)v7, (TechnoClass *)1); /*0x4de1f8*/
  v10 = SLOWORD(v7->field_0); /*0x4de1fd*/
  LOBYTE(aP1) = IsWithinUsableArea; /*0x4de200*/
  v11 = (SHIWORD(v7->field_0) << 8) + 128; /*0x4de218*/
  v40[0] = (v10 << 8) + 128; /*0x4de223*/
  v40[1] = v11; /*0x4de227*/
  GroundHeight = 0; /*0x4de22b*/
  GroundHeight = Cell::GetGroundHeight((IUnknown *)v40); /*0x4de23e*/
  if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v40) + 80) & 0x100) != 0 ) /*0x4de250*/
    GroundHeight += *(_DWORD *)&stru_89E138.__pad_579C[66848]; /*0x4de25d*/
  if ( !*(_BYTE *)((*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3213) /*0x4de27d*/
    && Cell::IsPassable((IUnknown *)v40) )
  {
    goto LABEL_36; /*0x4de284*/
  }
  v12 = *(_DWORD *)esi1->__pad_0; /*0x4de28c*/
  v35 = (IUnknown *)v7->field_0; /*0x4de293*/
  v13 = (IUnknown *)(*(int (__thiscall **)(FootClass *, _WORD *, _DWORD))(v12 + 76))(esi1, v44, 0); /*0x4de29b*/
  v14 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v13); /*0x4de2a4*/
  v15 = *(_DWORD *)esi1->__pad_0; /*0x4de2a9*/
  v40[0] = v14; /*0x4de2ad*/
  v16 = *(_DWORD *)((*(int (__thiscall **)(FootClass *))(v15 + 132))(esi1) + 1460); /*0x4de2b7*/
  if ( v16 == 6 ) /*0x4de2c0*/
  {
    v16 = 0; /*0x4de2c2*/
  }
  else if ( v16 == 9 && HouseClass::IonSensitivesShouldBeOffline() ) /*0x4de2d1*/
  {
    v16 = 7; /*0x4de2da*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 84))(esi1) /*0x4de333*/
    || *(_BYTE *)((*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3372)
    || (*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 44))(esi1) == 15
    && *(_BYTE *)(*(_DWORD *)esi1[1].__pad_0 + 3476)
    && !HouseClass::IonSensitivesShouldBeOffline()
    || (v17 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 44))(esi1), LOBYTE(a4) = 0, v17 == 2) )
  {
    LOBYTE(a4) = 1; /*0x4de335*/
  }
  v18 = (*(int (__thiscall **)(FootClass *, _DWORD))(*(_DWORD *)esi1->__pad_0 + 188))(esi1, 0); /*0x4de33f*/
  v19 = SHIWORD(v7->field_0); /*0x4de345*/
  LOBYTE(aP3) = v18; /*0x4de349*/
  v20 = SLOWORD(v7->field_0); /*0x4de34f*/
  v43 = 0; /*0x4de35b*/
  v42[1] = (v19 << 8) + 128; /*0x4de35f*/
  v42[0] = (v20 << 8) + 128; /*0x4de375*/
  v43 = Cell::GetGroundHeight((IUnknown *)v42); /*0x4de388*/
  if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v42) + 80) & 0x100) != 0 ) /*0x4de39a*/
    v43 += *(_DWORD *)&stru_89E138.__pad_579C[66848]; /*0x4de3a7*/
  IsPassable = Cell::IsPassable((IUnknown *)v42); /*0x4de3b5*/
  if ( (_BYTE)a2 && v37 == (MouseClass *)2 ) /*0x4de3cb*/
  {
    if ( !*(_BYTE *)((*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3372) /*0x4de3f7*/
      || (v22 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 456))(esi1), aP1 = 1, v22 >= 0) )
    {
      aP1 = 0; /*0x4de3f9*/
    }
    _FFFFFFF4 = (IUnknown *)aP1; /*0x4de40e*/
    a2 = 0; /*0x4de41b*/
    v23 = (IUnknown *)(*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v7) + 80) >> 8); /*0x4de432*/
    LOBYTE(v23) = (unsigned __int8)v23 & 1; /*0x4de435*/
    v32 = v23; /*0x4de439*/
    v31 = *(IUnknown **)((*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 1660); /*0x4de44d*/
    v25 = (IUnknown **)LayerClass::Pathfinding_Find( /*0x4de450*/
                         (IUnknown *)&stru_87C374.__pad_14B0[8132],
                         v24,
                         (IUnknown *)&v39,
                         (IUnknown *)v7,
                         v31,
                         (IUnknown *)0xFFFFFFFF,
                         (IUnknown *)v16,
                         v32,
                         (IUnknown *)1,
                         (IUnknown *)1,
                         0,
                         (IUnknown *)1,
                         _FFFFFFF4,
                         (IUnknown *)1,
                         (IUnknown *)&a2,
                         0,
                         0);
    goto LABEL_32; /*0x4de450*/
  }
  if ( !(_BYTE)aP1 /*0x4de4b4*/
    || IsPassable
    || !(_BYTE)a2
    && (!*(_BYTE *)((*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3284)
     || v37 == (MouseClass *)2)
    && (eax30 = (IUnknown *)(*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v7) + 80) >> 8),
        LOBYTE(eax30) = (unsigned __int8)eax30 & 1,
        !MapSeed::CheckTileMatch(
           &stru_87C374.__pad_14B0[8132],
           (IUnknown *)(v39 + 36),
           (IUnknown *)&v35,
           (IUnknown *)v16,
           (IUnknown *)aP3,
           eax30,
           0)) )
  {
    a2 = 0; /*0x4de4d7*/
    v26 = (MouseClass *)(*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v7) + 80) >> 8); /*0x4de4f4*/
    LOBYTE(v26) = (unsigned __int8)v26 & 1; /*0x4de4f7*/
    v33 = (IUnknown *)v26; /*0x4de4fc*/
    TileIndex = (IUnknown *)MapClass::GetTileIndex( /*0x4de50b*/
                              &stru_87C374.__pad_14B0[8132],
                              (IUnknown *)(v39 + 36),
                              (IUnknown *)v16,
                              (IUnknown *)aP3);
    v28 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1); /*0x4de510*/
    v25 = (IUnknown **)LayerClass::Pathfinding_Find( /*0x4de528*/
                         (IUnknown *)&stru_87C374.__pad_14B0[8132],
                         (IUnknown *)&aP1,
                         (IUnknown *)&aP1,
                         (IUnknown *)v7,
                         *(IUnknown **)(v28 + 1660),
                         TileIndex,
                         (IUnknown *)v16,
                         v33,
                         (IUnknown *)1,
                         (IUnknown *)1,
                         0,
                         (IUnknown *)1,
                         0,
                         (IUnknown *)1,
                         (IUnknown *)&a2,
                         0,
                         0);
LABEL_32:
    v29 = *v25; /*0x4de52d*/
    v35 = v29; /*0x4de52f*/
    goto LABEL_34; /*0x4de533*/
  }
  v29 = v35; /*0x4de535*/
LABEL_34:
  if ( __PAIR32__(HIWORD(v35), (unsigned __int16)v29) != *(_DWORD *)&stru_89E138.__pad_579C[66740] ) /*0x4de541*/
  {
    *(_DWORD *)aP0->__pad_0 = v29; /*0x4de558*/
    return (RadarClass *)aP0; /*0x4de55f*/
  }
LABEL_36:
  *(_DWORD *)aP0->__pad_0 = *(_DWORD *)&stru_89E138.__pad_579C[66740]; /*0x4de562*/
  return (RadarClass *)aP0; /*0x4de555*/
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
int __thiscall FootClass::PreDestroy(IUnknown *this)
{
  _DWORD *v2; // ecx
  int v3; // ecx

  v2 = *(_DWORD **)&this->__pad_2B8[4]; /*0x4de5d3*/
  if ( v2 ) /*0x4de5db*/
    CaptureManager::FreeAll(v2); /*0x4de5dd*/
  if ( *(_DWORD *)&this->__pad_220[140] ) /*0x4de5e2*/
    TechnoClass::EjectPassengers(&this->field_0, 1); /*0x4de5f0*/
  v3 = *(_DWORD *)&this->__pad_524[176]; /*0x4de5f5*/
  if ( v3 ) /*0x4de5fd*/
    TeamClass::LiberateMember_Start(v3, this, 0xFFFFFFFF, 0); /*0x4de604*/
  return ObjectClass::Destroy((#374 *)this); /*0x4de610*/
}


// ==== 0x004DE620  ObjectClass::IsHeightAboveThreshold_0  this=FootClass  sig=csp ====
// attributes: thunk
int __thiscall ObjectClass::IsHeightAboveThreshold_0(#374 *this)
{
  return ObjectClass::IsHeightAboveThreshold(this);
}


// ==== 0x004DE630  FootClass::OnCompleteAction  this=FootClass  sig=csp ====
int __thiscall FootClass_OnCompleteAction(_DWORD *this, int a2)
{
  int result; // eax

  BuildingClass::OnCellPlacementComplete(a2); /*0x4de639*/
  result = (*(int (__thiscall **)(_DWORD *))(*this + 132))(this); /*0x4de642*/
  if ( *(_BYTE *)(result + 2053) ) /*0x4de648*/
  {
    if ( *(this + 69) == 1 ) /*0x4de659*/
      return (*(int (__thiscall **)(_DWORD *, int))(*this + 1236))(this, a2); /*0x4de660*/
  }
  return result; /*0x4de666*/
}


// ==== 0x004DE670  FootClass::RemovePassenger  this=FootClass  sig=csp ====
int __thiscall FootClass::RemovePassenger(_DWORD *this, int a2)
{
  _DWORD *v3; // edi
  int v4; // edx
  int v5; // eax
  int result; // eax
  _DWORD v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = this + 69; /*0x4de67d*/
  FootClass::updateMovementAnimation(this + 69, a2); /*0x4de685*/
  if ( a2 && *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 1384) != -1 ) /*0x4de69f*/
  {
    v7[0] = *(this + 39); /*0x4de6b0*/
    v4 = *this; /*0x4de6b4*/
    v7[1] = *(this + 40); /*0x4de6b9*/
    v7[2] = *(this + 41); /*0x4de6c0*/
    v5 = (*(int (__thiscall **)(_DWORD *))(v4 + 132))(this); /*0x4de6c6*/
    PlayAudioAt2(*(_DWORD *)(v5 + 1384), v7, 0); /*0x4de6d4*/
  }
  result = (*(int (__thiscall **)(_DWORD *))(*this + 132))(this); /*0x4de6de*/
  if ( *(_BYTE *)(result + 2053) ) /*0x4de6e4*/
  {
    if ( !*v3 ) /*0x4de6ee*/
      return (*(int (__thiscall **)(_DWORD *, int))(*this + 1240))(this, a2); /*0x4de6f8*/
  }
  return result; /*0x4de6fe*/
}


// ==== 0x004DE710  FootClass::PopAndProcess  this=ObjectClass  sig=csp ====
int __thiscall FootClass_PopAndProcess(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // ebx

  v2 = this + 69; /*0x4de715*/
  v3 = LinkedList::Pop(this + 69); /*0x4de722*/
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 2053) && !*v2 ) /*0x4de738*/
    (*(void (__thiscall **)(_DWORD *, int))(*this + 1240))(this, v3); /*0x4de742*/
  return v3; /*0x4de748*/
}


// ==== 0x004DE750  FootClass::vt_entry_4D4  this=FootClass  sig=csp ====
void __stdcall BuildingClass::vt_entry_4D4(int a1)
{
  ; /*0x4de750*/
}


// ==== 0x004DE760  FootClass::vt_entry_4D8  this=FootClass  sig=csp ====
void __stdcall BuildingClass::vt_entry_4D8(int a1)
{
  ; /*0x4de760*/
}


// ==== 0x004DE770  FootClass::IsTimerActive  this=FootClass  sig=csp ====
bool __thiscall FootClass_IsTimerActive(_DWORD *this)
{
  int v1; // edx
  int v2; // eax

  v1 = *(this + 424); /*0x4de770*/
  v2 = this->FootClass_bools_6A8; /*0x4de776*/
  if ( v1 != -1 ) /*0x4de77f*/
  {
    if ( (int)MEMORY[0xA8ED84] - v1 < v2 ) /*0x4de78b*/
      return v2 != (_DWORD)MEMORY[0xA8ED84] - v1; /*0x4de798*/
    v2 = 0; /*0x4de799*/
  }
  return v2 != 0; /*0x4de798*/
}


// ==== 0x004DE7B0  FootClass::IsTargetInRange  this=FootClass  sig=csp ====
int __thiscall FootClass_IsTargetInRange(_DWORD *this, int a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // ebp
  int result; // eax
  int v7; // ebx
  _DWORD *v8; // edi
  _DWORD *j; // esi
  int v10; // eax
  #375 **v11; // eax
  #375 **v12; // esi
  int v13; // [esp+Ch] [ebp-28h]
  int i; // [esp+Ch] [ebp-28h]
  int v15; // [esp+10h] [ebp-24h]
  int v16; // [esp+14h] [ebp-20h]
  int v17; // [esp+18h] [ebp-1Ch]
  int v18; // [esp+1Ch] [ebp-18h] BYREF
  int v19; // [esp+20h] [ebp-14h]
  int v20; // [esp+24h] [ebp-10h]
  char v21[12]; // [esp+28h] [ebp-Ch] BYREF

  v3 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 1520); /*0x4de7c0*/
  v16 = v3; /*0x4de7ce*/
  v17 = v3 * v3; /*0x4de7d8*/
  v19 = *(_DWORD *)(this->focus + 48); /*0x4de7e1*/
  if ( a2 == MEMORY[0x8B3D88] ) /*0x4de7ec*/
  {
    v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*this + 72))(this, v21); /*0x4de805*/
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
        v18 = v15; /*0x4de87e*/
        if ( v7 + v5 * v5 < v17 ) /*0x4de88a*/
        {
          v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v18); /*0x4de89f*/
          ((void (__stdcall *)(int))FootClass::checkTerrainSpeed)(v19); /*0x4de8a8*/
          for ( j = (_DWORD *)v8[57]; j; j = (_DWORD *)j[12] ) /*0x4de8b5*/
          {
            v10 = (*(int (__thiscall **)(_DWORD *))(*j + 44))(j); /*0x4de8bb*/
            if ( v10 == 1 || v10 == 15 || v10 == 2 ) /*0x4de8cb*/
              (*(void (__thiscall **)(_DWORD *))(*j + 1056))(j); /*0x4de8d1*/
          }
          v11 = (#375 **)Cell::IsBridge(v8); /*0x4de8e0*/
          v12 = v11; /*0x4de8e5*/
          if ( v11 && v11[135] != HouseClass_Player ) /*0x4de8f8*/
          {
            if ( (*((int (__thiscall **)(#375 **, _DWORD, _DWORD))*v11 + 26))(v11, 0, 0) ) /*0x4de902*/
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
__int16 __thiscall FootClass_CheckCellPassable(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // ebp
  int v8; // esi
  int v9; // ebx
  _DWORD *v10; // edi
  _DWORD *j; // esi
  int v12; // eax
  _BYTE *v13; // esi
  #375 *v14; // ecx
  int v16; // [esp+Ch] [ebp-28h]
  int i; // [esp+Ch] [ebp-28h]
  int v18; // [esp+10h] [ebp-24h]
  int v19; // [esp+14h] [ebp-20h]
  int v20; // [esp+18h] [ebp-1Ch]
  int v21; // [esp+1Ch] [ebp-18h] BYREF
  int v22; // [esp+20h] [ebp-14h]
  int v23; // [esp+24h] [ebp-10h]
  _BYTE v24[12]; // [esp+28h] [ebp-Ch] BYREF

  v3 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 1520); /*0x4de950*/
  v4 = this->focus; /*0x4de956*/
  v22 = v3; /*0x4de95e*/
  v20 = v3 * v3; /*0x4de968*/
  LOWORD(v5) = a2; /*0x4de96c*/
  v19 = *(_DWORD *)(v4 + 48); /*0x4de971*/
  if ( a2 == MEMORY[0x8B3D88] ) /*0x4de97c*/
  {
    v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 72))(this, v24); /*0x4de995*/
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
        v21 = v18; /*0x4dea0e*/
        LOWORD(v5) = v20; /*0x4dea12*/
        if ( v9 + v7 * v7 < v20 ) /*0x4dea1a*/
        {
          v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v21); /*0x4dea2f*/
          LOWORD(v5) = Cell::IsPassableOffset(v10, v19); /*0x4dea38*/
          if ( (_BYTE)v5 ) /*0x4dea3f*/
          {
            FootClass::updateLocomotion(v19); /*0x4dea48*/
            for ( j = (_DWORD *)v10[57]; j; j = (_DWORD *)j[12] ) /*0x4dea55*/
            {
              v12 = (*(int (__thiscall **)(_DWORD *))(*j + 44))(j); /*0x4dea5b*/
              if ( v12 == 1 || v12 == 15 || v12 == 2 ) /*0x4dea6b*/
                (*(void (__thiscall **)(_DWORD *))(*j + 1056))(j); /*0x4dea71*/
            }
            v5 = (int)Cell::IsBridge(v10); /*0x4dea80*/
            v13 = (_BYTE *)v5; /*0x4dea85*/
            if ( v5 ) /*0x4dea89*/
            {
              v14 = *(#375 **)(v5 + 540); /*0x4dea8b*/
              LOWORD(v5) = (_WORD)HouseClass_Player; /*0x4dea91*/
              if ( v14 != HouseClass_Player ) /*0x4dea98*/
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
int FootClass::DeployAction(_DWORD *a0, BuildingClass *aP1, int aP3, TechnoClass *a4, int a5, TechnoClass *a6)
{
  FootClass *v6; // ecx
  int v7; // ebp
  int v8; // edi
  FootClass *v9; // esi
  int v10; // eax
  int v11; // edx
  _DWORD *parasiteEatingMe; // eax
  _DWORD *v14; // eax
  int v15; // [esp+8h] [ebp-8h]

  v9 = v6; /*0x4deae4*/
  if ( *(_BYTE *)((*(int (**)(void))(*(_DWORD *)v6->__pad_0 + 132))() + 3479) ) /*0x4deaee*/
  {
    v10 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v9->__pad_0 + 132))(v9); /*0x4deafc*/
    v11 = *(_DWORD *)v9->__pad_0; /*0x4deb08*/
    aP3 = *(_DWORD *)(v10 + 160); /*0x4deb0a*/
    return (*(int (__thiscall **)(FootClass *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v11 + 364))( /*0x4deb2b*/
             v9,
             &aP3,
             0,
             *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4008),
             0,
             0,
             0,
             0);
  }
  else
  {
    parasiteEatingMe = v9->parasiteEatingMe; /*0x4deb38*/
    if ( parasiteEatingMe ) /*0x4deb40*/
    {
      v14 = (_DWORD *)(parasiteEatingMe[423] + 44); /*0x4deb4e*/
      *v14 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x4deb56*/
      v14[1] = v15; /*0x4deb5c*/
      v14[2] = 50; /*0x4deb5f*/
      BuildingClass::Deploy(*((_DWORD *)v9->parasiteEatingMe + 423), v7, v8); /*0x4deb6e*/
    }
    v9->paralysisTimer[0] = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x4deb80*/
    v9->paralysisTimer[1] = v15; /*0x4deb86*/
    v9->paralysisTimer[2] = 0; /*0x4deb8d*/
    return TechnoClass::IronCurtain(v9, (TechnoClass *)a0, (int)aP1, (TechnoClass *)aP3); /*0x4deb9d*/
  }
}


// ==== 0x004DEBB0  FootClass::UpdateTeamAI  this=FootClass  sig=csp ====
char __thiscall FootClass::UpdateTeamAI(AbstractClass *this, AbstractClass *aP5)
{
  void **v3; // ecx
  void **v4; // ecx
  void **v5; // ecx
  int v7; // edx
  AbstractClass *v8; // edx

  if ( (*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)this->__pad_0 + 456))(this) <= 0 ) /*0x4debbe*/
    return 0; /*0x4ded5c*/
  if ( *((int *)this + 27) > 0 ) /*0x4debcd*/
  {
    if ( aP5 ) /*0x4debd5*/
    {
      v3 = (void **)this->attachedTag; /*0x4debd7*/
      if ( v3 ) /*0x4debdc*/
        TeamClass::Update_0(v3, 38, this, *(IUnknown **)&stru_89E138.__pad_579C[66740], 0, 0); /*0x4debec*/
    }
    v4 = (void **)this->attachedTag; /*0x4debf1*/
    if ( v4 && this->isChronosphereImmune ) /*0x4debf8*/
      TeamClass::Update_0(v4, 41, this, *(IUnknown **)&stru_89E138.__pad_579C[66740], 0, 0); /*0x4dec0f*/
    v5 = (void **)this->attachedTag; /*0x4dec14*/
    if ( v5 ) /*0x4dec19*/
    {
      if ( !this->isChronosphereImmune ) /*0x4dec23*/
        return 1; /*0x4dec49*/
      if ( aP5 ) /*0x4dec27*/
        TeamClass::Update_0(v5, 41, this, *(IUnknown **)&stru_89E138.__pad_579C[66740], 0, aP5); /*0x4dec36*/
    }
    if ( !this->isChronosphereImmune ) /*0x4dec3b*/
      return 1; /*0x4dec43*/
    (*(void (__thiscall **)(AbstractClass *, AbstractClass *))(*(_DWORD *)this->__pad_0 + 224))(this, aP5); /*0x4dec51*/
    if ( !this->isChronosphereImmune ) /*0x4dec57*/
      return 1; /*0x4dec65*/
    if ( !*((_BYTE *)this + 1709) ) /*0x4dec68*/
      this->health = 0; /*0x4dec72*/
  }
  v7 = *(_DWORD *)this->__pad_0; /*0x4dec79*/
  *((_BYTE *)this + 1061) = 1; /*0x4dec7f*/
  (*(void (__thiscall **)(AbstractClass *, int))(v7 + 628))(this, 3); /*0x4dec86*/
  (*(void (__thiscall **)(AbstractClass *))(*(_DWORD *)this->__pad_0 + 928))(this); /*0x4dec90*/
  TechnoClass::CleanupAll(this, aP5); /*0x4dec99*/
  if ( (*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)this->__pad_0 + 44))(this) != 15 /*0x4decb5*/
    && !*(_DWORD *)&HouseClass_Player.__pad_5568[21752] )
  {
    *((float *)this + 204) = (double)Random::Range( /*0x4decf0*/
                                       (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                                       0,
                                       (IUnknown *)0x7FFFFFFE)
                           * 4.656612877414201e-10
                           * 0.15
                           + 0.1;
    if ( !Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)1) ) /*0x4ded02*/
      *((float *)this + 204) = -*((float *)this + 204); /*0x4ded13*/
    *((float *)this + 205) = (double)Random::Range( /*0x4ded45*/
                                       (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                                       0,
                                       (IUnknown *)0x7FFFFFFE)
                           * 4.656612877414201e-10
                           * 0.1;
  }
  LOBYTE(v8) = 0; /*0x4ded4b*/
  AbstractClass::AnnounceExpiredPointer(this, v8); /*0x4ded4f*/
  return 1; /*0x4dec45*/
}


// ==== 0x004DED70  TechnoClass::GetThreatValue  this=FootClass  sig=csp ====
int __thiscall TechnoClass::GetThreatValue(#375 **this)
{
  _DWORD *v2; // eax
  _WORD *v3; // edi
  int v5; // [esp+8h] [ebp-14h]
  int v6; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v7[12]; // [esp+10h] [ebp-Ch] BYREF

  v2 = (_DWORD *)(*((int (__thiscall **)(#375 **, _BYTE *))*this + 18))(this, v7); /*0x4ded80*/
  LOWORD(v5) = *v2 / 256; /*0x4ded93*/
  HIWORD(v5) = v2[1] / 256; /*0x4dedac*/
  v6 = v5; /*0x4dedb9*/
  v3 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v6); /*0x4dedc9*/
  if ( !(unsigned __int8)HouseClass::IsAlliedWith(*(this + 135), HouseClass_Player) /*0x4dedf4*/
    && (*((unsigned __int8 (__thiscall **)(#375 **))*this + 49))(this)
    && !HouseClass::HasType(v3, *((_DWORD *)HouseClass_Player + 12)) )
  {
    return *(_DWORD *)((*((int (__thiscall **)(#375 **, _DWORD))*this + 51))(this, 0) + 164); /*0x4dee09*/
  }
  if ( (*((unsigned __int8 (__thiscall **)(#375 **, #375 *))*this + 272))(this, HouseClass_Player) ) /*0x4dee20*/
    return ObjectClass::HasC4((#374 *)this); /*0x4dee44*/
  return *(_DWORD *)((*((int (__thiscall **)(#375 **, int))*this + 51))(this, 1) + 164); /*0x4dee0f*/
}


// ==== 0x004DEE50  FootClass::vt_entry_530  this=FootClass  sig=csp ====
int __thiscall FootClass::vt_entry_530(int *this, int a2, int a3, int a4)
{
  int v4; // eax
  int v6; // [esp+0h] [ebp-4h] BYREF

  v6 = (int)this; /*0x4dee50*/
  v4 = *this; /*0x4dee55*/
  v6 = -1; /*0x4dee67*/
  return (*(int (__thiscall **)(int *, int, int, int, int *))(v4 + 1324))(this, a2, a3, a4, &v6); /*0x4dee76*/
}


// ==== 0x004DEE80  FootClass::ValidatePlacementEx  this=FootClass  sig=csp ====
TechnoClass *__thiscall BuildingClass::ValidatePlacementEx(IUnknown *this, int a2, int a3, TechnoClass *a4, int *a5)
{
  int v6; // ebp
  TechnoClass *v7; // edi
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  TechnoClass *v13; // [esp+18h] [ebp-28h]
  __int16 v14; // [esp+1Ch] [ebp-24h] BYREF
  __int16 v15; // [esp+20h] [ebp-20h] BYREF
  int v16; // [esp+24h] [ebp-1Ch]
  char v17; // [esp+28h] [ebp-18h] BYREF
  char v18; // [esp+30h] [ebp-10h] BYREF

  v13 = 0; /*0x4deea1*/
  if ( !DynamicVector::GetOrGrow((_DWORD *)(this->field_21C + 21760), *(DynamicVector **)(a2 + 3576)) ) /*0x4deea5*/
    return 0; /*0x4deea5*/
  v6 = 0; /*0x4deeb8*/
  v16 = *(_DWORD *)(this->field_21C + 120); /*0x4deebf*/
  if ( v16 <= 0 ) /*0x4deec3*/
    return 0; /*0x4df02f*/
  do /*0x4df01b*/
  {
    v7 = *(TechnoClass **)(*(_DWORD *)(this->field_21C + 108) + 4 * v6); /*0x4deed7*/
    if ( v7 /*0x4def0c*/
      && !v7->inLimbo
      && *(_DWORD *)v7[1].__pad_0 == a2
      && (a4 == (TechnoClass *)1 || Array::ContainsValue((int *)v7->__pad_0, this)) )
    {
      if ( (*(int (__thiscall **)(IUnknown *))(this->field_0 + 44))(this) == 2 /*0x4defd6*/
        || (v8 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v7->__pad_0 + 72))(v7),
            LOWORD(a4) = *v8 / 256,
            HIWORD(a4) = v8[1] / 256,
            v13 = a4,
            (*(void (__thiscall **)(IUnknown *))(this->field_0 + 76))(this),
            v9 = (*(int (__thiscall **)(IUnknown *, _DWORD, _DWORD, _DWORD))(this->field_0 + 188))(this, 0, 0, 0),
            v10 = (*(int (__thiscall **)(IUnknown *, int))(this->field_0 + 132))(this, v9),
            MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], &v15, &v14, *(_DWORD *)(v10 + 1460), (char)&v18, 0, (char)&v17)) )
      {
        if ( (*(int (__thiscall **)(IUnknown *, int, TechnoClass *))(this->field_0 + 632))(this, 15, v7) == 1 ) /*0x4defef*/
        {
          v11 = BuildingClass::SquaredDistanceTo(this, (AbstractClass *)v7); /*0x4deff4*/
          if ( *a5 == -1 || v11 < *a5 || HIBYTE(v7->barrelRecoil[5]) ) /*0x4df004*/
          {
            v13 = v7; /*0x4df00e*/
            *a5 = v11; /*0x4df012*/
          }
        }
      }
    }
    ++v6; /*0x4df018*/
  }
  while ( v6 < v16 ); /*0x4df01b*/
  return v13; /*0x4df026*/
}


// ==== 0x004DF040  TechnoClass::FindBestMatch  this=FootClass  sig=csp ====
int __thiscall TechnoClass_FindBestMatch(int *this, int a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // ebp
  int v6; // edi
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int i; // [esp+10h] [ebp-4h]

  v4 = a2; /*0x4df042*/
  v5 = 0; /*0x4df04c*/
  v6 = 0; /*0x4df04e*/
  for ( i = -1; v6 < *(_DWORD *)(v4 + 16); ++v6 ) /*0x4df05c*/
  {
    v8 = *this; /*0x4df066*/
    v9 = *(_DWORD *)(v4 + 4); /*0x4df06e*/
    a2 = -1; /*0x4df071*/
    v10 = (*(int (__thiscall **)(int *, _DWORD, int, int, int *))(v8 + 1324))( /*0x4df080*/
            this,
            *(_DWORD *)(v9 + 4 * v6),
            a3,
            a4,
            &a2);
    if ( v10 && (!v5 || a2 < i || i == -1 || *(_BYTE *)(v10 + 979)) ) /*0x4df09f*/
    {
      v5 = v10; /*0x4df0a9*/
      i = a2; /*0x4df0ab*/
    }
  }
  return v5; /*0x4df0b7*/
}


// ==== 0x004DF0D0  FootClass::ClearPathIndex  this=AbstractClass  sig=csp ====
int __thiscall FootClass_ClearPathIndex(_DWORD *this)
{
  this->__pad_5A0 = 0; /*0x4df0d2*/
  this->q5A4 = 0; /*0x4df0d8*/
  return 0; /*0x4df0de*/
}


// ==== 0x004DF0E0  FootClass::MissionSell_Dispatch  this=FootClass  sig=csp ====
int __thiscall FootClass_MissionSell_Dispatch(_BYTE *this, char *a2)
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
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1216))(this) ) /*0x4df10b*/
    {
      *(this + 1489) = 0; /*0x4df129*/
      this->FootClass_field_5C4 = 29; /*0x4df132*/
      if ( v8 ) /*0x4df13c*/
      {
        this->FootClass_field_5C8 = BuildingLoadQueue::GetNext(a2 + 19); /*0x4df146*/
        return 2; /*0x4df14f*/
      }
      else if ( v6 ) /*0x4df15a*/
      {
        this->FootClass_field_5CC = BuildingLoadQueue::GetNext(a2 + 14); /*0x4df164*/
        return 1; /*0x4df16d*/
      }
      else
      {
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1192))(this); /*0x4df17a*/
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
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1192))(this); /*0x4df18d*/
    return v4; /*0x4df194*/
  }
}


// ==== 0x004DF1A0  TechnoClass::vt_entry_4A8  this=FootClass  sig=csp ====
int __thiscall TechnoClass::vt_entry_4A8(int this)
{
  *(_DWORD *)(this + 1476) = -1; /*0x4df1a2*/
  *(_DWORD *)(this + 1480) = 0; /*0x4df1ac*/
  *(_DWORD *)(this + 1484) = 0; /*0x4df1b2*/
  *(_BYTE *)(this + 1489) = 0; /*0x4df1b8*/
  return 0; /*0x4df1be*/
}


// ==== 0x004DF1C0  TechnoClass::vt_entry_4AC  this=FootClass  sig=csp ====
BOOL __thiscall TechnoClass::vt_entry_4AC(_DWORD *this)
{
  return this->FootClass_field_5C4 != -1; /*0x4df1ce*/
}


// ==== 0x004DF1D0  TechnoClass::vt_entry_4B0  this=FootClass  sig=csp ====
char __thiscall TechnoClass::vt_entry_4B0(_BYTE *this)
{
  return *(this + 1489); /*0x4df1d6*/
}


// ==== 0x004DF1E0  TechnoClass::vt_entry_4B4  this=FootClass  sig=csp ====
int __thiscall TechnoClass::vt_entry_4B4(_DWORD *this)
{
  return this->FootClass_field_5C4; /*0x4df1e6*/
}


// ==== 0x004DF1F0  TechnoClass::vt_entry_4B8  this=FootClass  sig=csp ====
_DWORD *__thiscall TechnoClass::vt_entry_4B8(_DWORD *this, _DWORD *a2)
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
    v5 = this->FootClass_field_5CC; /*0x4df229*/
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
void __thiscall sub_4DF280(_DWORD *this)
{
  int v2; // ecx
  _DWORD *v3; // eax
  int v4; // [esp+4h] [ebp-14h]
  int v5; // [esp+8h] [ebp-10h] BYREF
  _BYTE v6[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = *(this + 371); /*0x4df286*/
  if ( v2 ) /*0x4df28e*/
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v2 + 72))(v2, v6); /*0x4df297*/
    LOWORD(v4) = *v3 / 256; /*0x4df2aa*/
    HIWORD(v4) = v3[1] / 256; /*0x4df2c3*/
    v5 = v4; /*0x4df2d1*/
    *(this + 370) = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v5); /*0x4df2da*/
  }
  else
  {
    *(this + 370) = 0; /*0x4df2ef*/
  }
  *(this + 371) = 0; /*0x4df2e0*/
}


// ==== 0x004DF310  TechnoClass::vt_entry_4C4  this=FootClass  sig=csp ====
BOOL __thiscall TechnoClass::vt_entry_4C4(_DWORD *this)
{
  return this->FootClass_field_5C4 == 29; /*0x4df31e*/
}


// ==== 0x004DF320  TechnoClass::vt_entry_4C8  this=FootClass  sig=csp ====
char __thiscall TechnoClass::vt_entry_4C8(_DWORD *this)
{
  int v2; // eax
  int v4; // edx

  v2 = this->FootClass_field_5C8; /*0x4df326*/
  *((_BYTE *)this + 1489) = 0; /*0x4df32c*/
  if ( v2 ) /*0x4df335*/
  {
    (*(void (__thiscall **)(_DWORD *, int, int))(*this + 488))(this, 2, 1); /*0x4df33d*/
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1152))(this, this->FootClass_field_5C8, 1); /*0x4df350*/
    return 1; /*0x4df356*/
  }
  else
  {
    v4 = *this; /*0x4df361*/
    if ( this->FootClass_field_5CC ) /*0x4df35b*/
    {
      (*(void (__thiscall **)(_DWORD *, int, int))(v4 + 488))(this, 1, 1); /*0x4df36d*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 968))(this, this->FootClass_field_5CC); /*0x4df37e*/
      return 1; /*0x4df384*/
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *))(v4 + 1192))(this); /*0x4df38b*/
      return 0; /*0x4df392*/
    }
  }
}


// ==== 0x004DF3A0  FootClass::UpdateAttackMove_SelectNewTarget  this=FootClass  sig=csp ====
int __thiscall FootClass::UpdateAttackMove_SelectNewTarget(_DWORD *this)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // [esp+8h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]

  if ( this->FootClass_field_5C8 ) /*0x4df3a6*/
  {
    if ( *((_BYTE *)this + 1489) ) /*0x4df3b0*/
    {
      result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 948))(this, this->sprayOffsetIndex); /*0x4df3c5*/
      if ( (_BYTE)result ) /*0x4df3cd*/
        return result; /*0x4df3cd*/
      this->sprayOffsetIndex = 0; /*0x4df3d3*/
    }
    v5 = *(this + 39); /*0x4df3e7*/
    v3 = *this; /*0x4df3eb*/
    v6 = *(this + 40); /*0x4df3f0*/
    v7 = *(this + 41); /*0x4df3fe*/
    result = (*(int (__thiscall **)(_DWORD *, int *, int))(v3 + 924))(this, &v5, 1); /*0x4df402*/
    if ( (_BYTE)result ) /*0x4df40a*/
      goto LABEL_6; /*0x4df40a*/
  }
  else if ( !this->FootClass_field_5CC /*0x4df441*/
         || (result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 948))(this, this->FootClass_field_5CC), !(_BYTE)result) )
  {
    if ( !*((_BYTE *)this + 1489) /*0x4df460*/
      || (result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 948))(this, this->sprayOffsetIndex), !(_BYTE)result) )
    {
      this->sprayOffsetIndex = 0; /*0x4df46a*/
      v5 = *(this + 39); /*0x4df476*/
      v4 = *this; /*0x4df47a*/
      v6 = *(this + 40); /*0x4df47f*/
      v7 = *(this + 41); /*0x4df48d*/
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int *, int))(v4 + 924))(this, &v5, 1) ) /*0x4df491*/
      {
LABEL_6:
        result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 488))(this, 1, 1); /*0x4df410*/
        *((_BYTE *)this + 1489) = 1; /*0x4df41e*/
        return result; /*0x4df429*/
      }
      result = this->FootClass_field_5CC; /*0x4df49f*/
      this->sprayOffsetIndex = result; /*0x4df4a5*/
    }
  }
  return result; /*0x4df425*/
}


// ==== 0x004DF4B0  TechnoClass::vt_entry_4D0  this=FootClass  sig=csp ====
char __thiscall TechnoClass::vt_entry_4D0(_BYTE *this)
{
  char result; // al

  result = 0; /*0x4df4b3*/
  if ( this->FootClass_field_5C4 == 29 ) /*0x4df4bc*/
  {
    if ( *(this + 1489) ) /*0x4df4be*/
    {
      *(this + 1489) = 0; /*0x4df4c8*/
    }
    else if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 388))(this) != 5 /*0x4df4f7*/
           && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 388))(this) != 5 )
    {
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1192))(this); /*0x4df4fd*/
      return 0; /*0x4df503*/
    }
    return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1224))(this); /*0x4df4d3*/
  }
  return result; /*0x4df4d9*/
}


// ==== 0x004DF510  FootClass::ScanAdjacentCells  this=FootClass  sig=csp ====
char __userpurge FootClass_ScanAdjacentCells@<al>(int a1@<ecx>, _DWORD *a2, int a3, int a4, int a5)
{
  _DWORD *v6; // edi
  _BYTE *v7; // esi
  int v8; // eax
  int i; // edi
  _DWORD *v10; // esi
  int j; // edi
  _DWORD *v12; // esi
  int k; // edi
  int *v15; // esi
  int v16; // eax
  int v17; // eax
  int *v18; // eax
  int v19; // ebx
  int v20; // eax
  int *v21; // [esp+0h] [ebp-48h]
  int v22; // [esp+4h] [ebp-44h]
  __int16 v23[6]; // [esp+10h] [ebp-38h] BYREF
  _DWORD v24[2]; // [esp+1Ch] [ebp-2Ch] BYREF
  int v25; // [esp+24h] [ebp-24h] BYREF
  int v26; // [esp+28h] [ebp-20h] BYREF
  int v27; // [esp+2Ch] [ebp-1Ch] BYREF
  void **v28; // [esp+30h] [ebp-18h] BYREF
  void *Block; // [esp+34h] [ebp-14h]
  int v30; // [esp+38h] [ebp-10h]
  char v31; // [esp+3Dh] [ebp-Bh]
  int v32; // [esp+40h] [ebp-8h]
  int v33; // [esp+44h] [ebp-4h]

  v23[0] = *a2 / 256; /*0x4df52b*/
  v23[1] = a2[1] / 256; /*0x4df544*/
  v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v23); /*0x4df563*/
  EventClass::resetEvent(&v28, 0, 0); /*0x4df565*/
  v28 = &vt_DynamicVectorClass_TechnoClass; /*0x4df56a*/
  v33 = 10; /*0x4df572*/
  v32 = 0; /*0x4df57a*/
  v7 = (_BYTE *)v6[57]; /*0x4df57e*/
  if ( v7 ) /*0x4df586*/
  {
    while ( (v7[20] & 1) != 0 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 44))(v7) != 6 ) /*0x4df5a0*/
    {
      if ( v32 < v30 /*0x4df5cc*/
        || (v31 || !v30)
        && v33 > 0
        && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v28[2])(&v28, v33 + v30, 0) )
      {
        v8 = v32++; /*0x4df5d7*/
        *((_DWORD *)Block + v8) = v7; /*0x4df5e2*/
      }
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 212))(v7); /*0x4df5e9*/
      v7 = (_BYTE *)v6[57]; /*0x4df5ef*/
      if ( !v7 ) /*0x4df5f7*/
        goto LABEL_17; /*0x4df5f7*/
    }
    for ( i = v32 - 1; i >= 0; --i ) /*0x4df604*/
    {
      v10 = (_DWORD *)*((_DWORD *)Block + i); /*0x4df60f*/
      v25 = v10[39]; /*0x4df61e*/
      v26 = v10[40]; /*0x4df625*/
      v27 = v10[41]; /*0x4df631*/
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int *, _DWORD))(*v10 + 216))(v10, &v25, 0) ) /*0x4df639*/
        (*(void (__thiscall **)(_DWORD *))(*v10 + 248))(v10); /*0x4df647*/
    }
    goto LABEL_22; /*0x4df64e*/
  }
LABEL_17:
  if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a1 + 216))(a1, a2, a3) ) /*0x4df661*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 248))(a1); /*0x4df674*/
    for ( j = v32 - 1; j >= 0; --j ) /*0x4df683*/
    {
      v12 = (_DWORD *)*((_DWORD *)Block + j); /*0x4df68a*/
      v25 = v12[39]; /*0x4df699*/
      v26 = v12[40]; /*0x4df6a2*/
      v27 = v12[41]; /*0x4df6a9*/
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int *, _DWORD))(*v12 + 216))(v12, &v25, 0) ) /*0x4df6b4*/
        (*(void (__thiscall **)(_DWORD *))(*v12 + 248))(v12); /*0x4df6c2*/
    }
LABEL_22:
    v32 = 0; /*0x4df6cb*/
    if ( Block ) /*0x4df6d5*/
    {
      if ( v31 ) /*0x4df6db*/
        __3_YAXPAX_Z(Block); /*0x4df6de*/
    }
    return 0; /*0x4df6ef*/
  }
  for ( k = v32 - 1; k >= 0; --k ) /*0x4df6fb*/
  {
    v15 = (int *)*((_DWORD *)Block + k); /*0x4df713*/
    a5 = *(_DWORD *)(*(int (__thiscall **)(int *, _DWORD *, int *, int))(*v15 + 440))(v15, v24, v21, v22); /*0x4df735*/
    v16 = *v15; /*0x4df739*/
    a4 = 0; /*0x4df741*/
    v17 = (*(int (__thiscall **)(int *))(v16 + 132))(v15); /*0x4df74b*/
    v24[0] = *LayerClass::Pathfinding_Find( /*0x4df775*/
                &MEMORY[0x87F7E8],
                (int)&a5,
                &v26,
                (__int16 *)&a5,
                *(_DWORD *)(v17 + 1660),
                -1,
                0,
                0,
                1,
                1,
                0,
                0,
                0,
                1,
                (__int16 *)&a4,
                0,
                0);
    v18 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v24); /*0x4df77f*/
    v22 = 0; /*0x4df78a*/
    v19 = *v18; /*0x4df78b*/
    v21 = &v27; /*0x4df78d*/
    v24[1] = *v15; /*0x4df790*/
    v20 = (*(int (__thiscall **)(int *))(v19 + 72))(v18); /*0x4df794*/
    if ( !(*(unsigned __int8 (__thiscall **)(int *, int))(v24[0] + 216))(v15, v20) ) /*0x4df79e*/
      (*(void (__thiscall **)(int *))(*v15 + 248))(v15); /*0x4df7ac*/
  }
  v28 = &vt_VectorClass_TechnoClass; /*0x4df7bf*/
  if ( Block && v31 ) /*0x4df7cf*/
    __3_YAXPAX_Z(Block); /*0x4df7d2*/
  return 1; /*0x4df6e6*/
}


// ==== 0x004DF7F0  FootClass::Destru_vt322  this=FootClass  sig=csp ====
char __thiscall FootClass::Destru_vt322(_BYTE *this, int a2, int a3, int a4)
{
  int v5; // eax
  int v6; // eax
  int v7; // edi
  void *v8; // eax
  LPVOID v9; // edi
  LPVOID v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // edi
  int v14; // ecx
  void *v15; // eax
  LPVOID ppv; // [esp+54h] [ebp-8h] BYREF
  int v18; // [esp+58h] [ebp-4h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 84))(this) /*0x4df83c*/
    || (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 352))(this)
    || *(this + 636)
    || (*(unsigned __int8 (__thiscall **)(_BYTE *))(this->drainingMe)(this)
    || (*(unsigned __int8 (__thiscall **)(_BYTE *))(this->drainAnim)(this) )
  {
    return 0; /*0x4dfa40*/
  }
  ppv = 0; /*0x4df858*/
  v5 = CreateInstanceCOM(&ppv, (IID *)&g_CLSID_HoverLocomotion, 0, 7u); /*0x4df85c*/
  if ( v5 < 0 && v5 != -2147467262 ) /*0x4df86a*/
    WinAPI::Wrapper(v5); /*0x4df86d*/
  v18 = 0; /*0x4df876*/
  if ( ppv ) /*0x4df87c*/
  {
    v6 = StreamClass::Set(&v18, &ppv); /*0x4df887*/
    if ( v6 < 0 && v6 != -2147467262 ) /*0x4df895*/
      WinAPI::Wrapper(v6); /*0x4df898*/
  }
  if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 80) & 0x100) != 0 ) /*0x4df8b5*/
    a4 += MEMORY[0x8B3DF4]; /*0x4df8c3*/
  if ( (*(int (__thiscall **)(_BYTE *))(this->fallRate)(this) == 1 ) /*0x4df8d1*/
  {
    if ( !this->Locomotor ) /*0x4df8d3*/
      WinAPI::Wrapper(-2147467261); /*0x4df8e0*/
    (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 413) + 156))(this->Locomotor, 0); /*0x4df8ef*/
    if ( !this->Locomotor ) /*0x4df8f5*/
      WinAPI::Wrapper(-2147467261); /*0x4df910*/
    (*(void (__stdcall **)(_DWORD, int, int, int, int))(**((_DWORD **)this + 413) + 112))( /*0x4df92d*/
      this->Locomotor,
      -1,
      a2,
      a3,
      a4);
    (*(void (__thiscall **)(_BYTE *, int *))(*(_DWORD *)this + 244))(this, &a2); /*0x4df939*/
    *(this + 1718) = 1; /*0x4df93f*/
  }
  v7 = *(_DWORD *)this; /*0x4df946*/
  v8 = Coord::To_Cell(&MEMORY[0x87F7E8], &a2); /*0x4df954*/
  (*(void (__thiscall **)(_BYTE *, void *, int))(v7 + 1152))(this, v8, 1); /*0x4df95c*/
  (*(void (__thiscall **)(_BYTE *, _DWORD, int))(*(_DWORD *)this + 1152))(this, 0, 1); /*0x4df96a*/
  if ( !ppv ) /*0x4df976*/
    WinAPI::Wrapper(-2147467261); /*0x4df97d*/
  (*(void (__stdcall **)(LPVOID, _BYTE *))(*(_DWORD *)ppv + 12))(ppv, this); /*0x4df98a*/
  if ( !v18 ) /*0x4df999*/
    WinAPI::Wrapper(-2147467261); /*0x4df9a0*/
  (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v18 + 12))(v18, this->Locomotor); /*0x4df9ad*/
  v9 = (LPVOID)this->Locomotor; /*0x4df9b0*/
  v10 = ppv; /*0x4df9b6*/
  if ( v9 != ppv ) /*0x4df9bc*/
  {
    this->Locomotor = ppv; /*0x4df9c0*/
    if ( v10 ) /*0x4df9c6*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v10 + 4))(v10); /*0x4df9cb*/
    if ( v9 ) /*0x4df9d0*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v9 + 8))(v9); /*0x4df9d5*/
  }
  v11 = a2; /*0x4df9d8*/
  v12 = a3; /*0x4df9dc*/
  v13 = *(_DWORD *)this; /*0x4df9e6*/
  *(this + 636) = 1; /*0x4df9ea*/
  this->temporalUsing = v11; /*0x4df9f1*/
  v14 = a4; /*0x4df9f3*/
  this->temporalTargetingMe = v12; /*0x4df9f7*/
  *((_DWORD *)this + 164) = v14; /*0x4df9ff*/
  v15 = Coord::To_Cell(&MEMORY[0x87F7E8], &a2); /*0x4dfa07*/
  (*(void (__thiscall **)(_BYTE *, void *, int))(v13 + 1152))(this, v15, 1); /*0x4dfa0f*/
  if ( v18 ) /*0x4dfa1b*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v18 + 8))(v18); /*0x4dfa20*/
  if ( ppv ) /*0x4dfa29*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x4dfa2e*/
  return 1; /*0x4dfa33*/
}


// ==== 0x004DFA50  FootClass::IsNotAttackAndPlayer  this=FootClass  sig=csp ====
char __thiscall FootClass_IsNotAttackAndPlayer(void *this)
{
  if ( *((_BYTE *)this + 1709) ) /*0x4dfa50*/
    return 0; /*0x4dfa5a*/
  else
    return ObjectClass::IsPlayerOwnedAndCheck(this); /*0x4dfa5d*/
}


// ==== 0x004DFA70  TechnoClass::FindClosestInfantry  this=FootClass  sig=csp ====
char __thiscall TechnoClass_FindClosestInfantry(_DWORD *this)
{
  int v2; // ebp
  int v3; // ebx
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  double v6; // st7
  int v7; // eax
  int v9; // [esp+24h] [ebp-2Ch]
  int v10; // [esp+28h] [ebp-28h]
  int v11; // [esp+30h] [ebp-20h]
  int v12; // [esp+34h] [ebp-1Ch]
  _BYTE v13[12]; // [esp+38h] [ebp-18h] BYREF
  _BYTE v14[12]; // [esp+44h] [ebp-Ch] BYREF

  v10 = 0; /*0x4dfa7f*/
  v9 = 0x7FFFFFFF; /*0x4dfa8d*/
  v2 = *(_DWORD *)(this->focus + 168) - 1; /*0x4dfa9b*/
  if ( v2 < 0 ) /*0x4dfa9c*/
    return 0; /*0x4dfa9c*/
  do /*0x4dfb31*/
  {
    v3 = *(_DWORD *)(*(_DWORD *)(this->focus + 156) + 4 * v2); /*0x4dfab3*/
    v4 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 72))(v3, v13); /*0x4dfabf*/
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 72))(this, v14); /*0x4dfac8*/
    v11 = v5[1] - v4[1]; /*0x4dfae6*/
    v12 = v5[2] - v4[2]; /*0x4dfaf0*/
    v6 = Math::Sqrt((double)(*v5 - *v4) * (double)(*v5 - *v4) + (double)v12 * (double)v12 + (double)v11 * (double)v11); /*0x4dfb15*/
    v7 = Math::RoundToInt(v6); /*0x4dfb1d*/
    if ( v7 < v9 ) /*0x4dfb26*/
    {
      v9 = v7; /*0x4dfb28*/
      v10 = v3; /*0x4dfb2c*/
    }
    --v2; /*0x4dfb30*/
  }
  while ( v2 >= 0 ); /*0x4dfb31*/
  if ( !v10 ) /*0x4dfb3d*/
    return 0; /*0x4dfb3f*/
  (*(void (__thiscall **)(_DWORD *, int, int))(*this + 1152))(this, v10, 1); /*0x4dfb50*/
  (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 488))(this, 9, 0); /*0x4dfb5e*/
  return 1; /*0x4dfb41*/
}


// ==== 0x004DFB70  TechnoClass::FindClosestUnit  this=FootClass  sig=csp ====
char __thiscall TechnoClass::FindClosestUnit(int this)
{
  int v2; // ebp
  int v3; // eax
  int v4; // edi
  _DWORD *v5; // ebx
  _DWORD *v6; // eax
  double v7; // st7
  int v8; // eax
  int v10; // [esp+2Ch] [ebp-2Ch]
  int v11; // [esp+30h] [ebp-28h]
  int v12; // [esp+38h] [ebp-20h]
  int v13; // [esp+3Ch] [ebp-1Ch]
  _BYTE v14[12]; // [esp+40h] [ebp-18h] BYREF
  _BYTE v15[12]; // [esp+4Ch] [ebp-Ch] BYREF

  v11 = 0; /*0x4dfb7f*/
  v2 = 0x7FFFFFFF; /*0x4dfb8d*/
  v3 = *(_DWORD *)(*(_DWORD *)(this + 540) + 192) - 1; /*0x4dfb98*/
  v10 = v3; /*0x4dfb99*/
  if ( v3 < 0 ) /*0x4dfb9d*/
    goto LABEL_7; /*0x4dfb9d*/
  do /*0x4dfc48*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 540) + 180) + 4 * v3); /*0x4dfbb1*/
    if ( (*(int (__thiscall **)(int, int, int))(*(_DWORD *)this + 632))(this, 15, v4) == 1 ) /*0x4dfbc2*/
    {
      v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 72))(v4, v14); /*0x4dfbd2*/
      v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 72))(this, v15); /*0x4dfbdb*/
      v12 = v6[1] - v5[1]; /*0x4dfbf9*/
      v13 = v6[2] - v5[2]; /*0x4dfc03*/
      v7 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x4dfc28*/
                                         (double)(*v6 - *v5) * (double)(*v6 - *v5)
                                       + (double)v13 * (double)v13
                                       + (double)v12 * (double)v12));
      v8 = Math::RoundToInt(v7); /*0x4dfc30*/
      if ( v8 < v2 ) /*0x4dfc37*/
      {
        v2 = v8; /*0x4dfc39*/
        v11 = v4; /*0x4dfc3b*/
      }
    }
    v3 = --v10; /*0x4dfc43*/
  }
  while ( v10 >= 0 ); /*0x4dfc48*/
  if ( v11 ) /*0x4dfc54*/
  {
    *(_BYTE *)(this + 1679) = 1; /*0x4dfc6b*/
    if ( Team::GetMember((_DWORD *)this, 0) != v11 && *(_DWORD *)(this + 1280) != v11 ) /*0x4dfc81*/
    {
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 488))(this, 7, 0); /*0x4dfc8b*/
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)this + 1152))(this, v11, 1); /*0x4dfc98*/
    }
    return 1; /*0x4dfc9f*/
  }
  else
  {
LABEL_7:
    *(_BYTE *)(this + 1679) = 0; /*0x4dfc56*/
    return 0; /*0x4dfc5d*/
  }
}


// ==== 0x004DFCB0  FootClass::FindClosestForRepair  this=FootClass  sig=csp ====
char __fastcall BuildingClass_FindClosestForRepair(_DWORD *a1)
{
  int v2; // ebp
  _DWORD *v3; // ebx
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  double v6; // st7
  int v7; // edi
  int v8; // eax
  _DWORD *v10; // ecx
  int v11; // [esp+24h] [ebp-2Ch]
  _DWORD *v12; // [esp+28h] [ebp-28h]
  int v13; // [esp+30h] [ebp-20h]
  int v14; // [esp+34h] [ebp-1Ch]
  char v15[12]; // [esp+38h] [ebp-18h] BYREF
  char v16[12]; // [esp+44h] [ebp-Ch] BYREF

  v12 = 0; /*0x4dfcbf*/
  v11 = 0x7FFFFFFF; /*0x4dfccd*/
  v2 = *(_DWORD *)(a1[135] + 240) - 1; /*0x4dfcdb*/
  if ( v2 < 0 ) /*0x4dfcdc*/
    goto LABEL_10; /*0x4dfcdc*/
  do
  {
    v3 = *(_DWORD **)(*(_DWORD *)(a1[135] + 228) + 4 * v2); /*0x4dfcf3*/
    v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v3 + 72))(v3, v15); /*0x4dfcff*/
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*a1 + 72))(a1, v16); /*0x4dfd08*/
    v13 = v5[1] - v4[1]; /*0x4dfd28*/
    v14 = v5[2] - v4[2]; /*0x4dfd2c*/
    v6 = Math::Sqrt((double)(*v5 - *v4) * (double)(*v5 - *v4) + (double)v13 * (double)v13 + (double)v14 * (double)v14); /*0x4dfd55*/
    v7 = Math::RoundToInt(v6); /*0x4dfd62*/
    if ( v7 < v11 )
    {
      v8 = a1 ? ((*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) == 15 ? (unsigned int)a1 : 0) : 0;
      if ( BuildingClass::CanRepair(v3, v8) ) /*0x4dfd89*/
      {
        v11 = v7; /*0x4dfd92*/
        v12 = v3; /*0x4dfd96*/
      }
    }
    --v2; /*0x4dfd9a*/
  }
  while ( v2 >= 0 );
  if ( v12 ) /*0x4dfda7*/
  {
    v10 = (_DWORD *)a1[361]; /*0x4dfdba*/
    *((_BYTE *)a1 + 1680) = 1; /*0x4dfdc0*/
    if ( v10 != v12 || a1[43] != 8 ) /*0x4dfdd2*/
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *, int))(*a1 + 1152))(a1, v12, 1); /*0x4dfddb*/
      (*(void (__thiscall **)(_DWORD *, int, int))(*a1 + 488))(a1, 8, 1); /*0x4dfde9*/
    }
    return 1; /*0x4dfdf0*/
  }
  else
  {
LABEL_10:
    *((_BYTE *)a1 + 1680) = 0; /*0x4dfda9*/
    return 0; /*0x4dfdb0*/
  }
}


// ==== 0x004DFE00  FootClass::FindClosestForRepair2  this=FootClass  sig=csp ====
char __fastcall BuildingClass_FindClosestForRepair2(int a1)
{
  int v1; // eax
  int v3; // ebp
  _DWORD *v4; // ebx
  int v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  double v8; // st7
  int v9; // eax
  _DWORD *v11; // ecx
  int v12; // [esp+24h] [ebp-2Ch]
  _DWORD *v13; // [esp+28h] [ebp-28h]
  int v14; // [esp+30h] [ebp-20h]
  int v15; // [esp+34h] [ebp-1Ch]
  char v16[12]; // [esp+38h] [ebp-18h] BYREF
  char v17[12]; // [esp+44h] [ebp-Ch] BYREF

  v1 = MEMORY[0xA8EB50] - 1; /*0x4dfe0f*/
  v13 = 0; /*0x4dfe17*/
  v3 = 0x7FFFFFFF; /*0x4dfe1f*/
  v12 = MEMORY[0xA8EB50] - 1; /*0x4dfe24*/
  if ( MEMORY[0xA8EB50] - 1 < 0 ) /*0x4dfe28*/
    goto LABEL_10; /*0x4dfe28*/
  do
  {
    v4 = (_DWORD *)*((_DWORD *)MEMORY[0xA8EB44] + v1); /*0x4dfe36*/
    if ( a1 )
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 44))(a1) == 15 ? a1 : 0;
    else
      v5 = 0; /*0x4dfe3b*/
    if ( BuildingClass::CanRepair(v4, v5) ) /*0x4dfe54*/
    {
      v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v4 + 72))(v4, v16); /*0x4dfe6b*/
      v7 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)a1 + 72))(a1, v17); /*0x4dfe74*/
      v14 = v7[1] - v6[1]; /*0x4dfe92*/
      v15 = v7[2] - v6[2]; /*0x4dfe9c*/
      v8 = Math::Sqrt((double)(*v7 - *v6) * (double)(*v7 - *v6) + (double)v15 * (double)v15 + (double)v14 * (double)v14); /*0x4dfec1*/
      v9 = Math::RoundToInt(v8); /*0x4dfec9*/
      if ( v9 < v3 ) /*0x4dfed0*/
      {
        v3 = v9; /*0x4dfed2*/
        v13 = v4; /*0x4dfed4*/
      }
    }
    v1 = --v12; /*0x4dfedc*/
  }
  while ( v12 >= 0 );
  if ( v13 ) /*0x4dfeed*/
  {
    v11 = *(_DWORD **)(a1 + 1444); /*0x4dff00*/
    *(_BYTE *)(a1 + 1681) = 1; /*0x4dff06*/
    if ( v11 != v13 || *(_DWORD *)(a1 + 172) != 8 ) /*0x4dff18*/
    {
      (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a1 + 1152))(a1, v13, 1); /*0x4dff21*/
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 488))(a1, 8, 1); /*0x4dff2f*/
    }
    return 1; /*0x4dff36*/
  }
  else
  {
LABEL_10:
    *(_BYTE *)(a1 + 1681) = 0; /*0x4dfeef*/
    return 0; /*0x4dfef6*/
  }
}


// ==== 0x004DFF40  TechnoClass::FindClosestBuilding  this=FootClass  sig=csp ====
char __thiscall TechnoClass_FindClosestBuilding(_DWORD *this)
{
  char result; // al
  int v3; // ebp
  _DWORD *v4; // esi
  _DWORD *v5; // ebx
  _DWORD *v6; // eax
  double v7; // st7
  int v8; // ebx
  int v9; // [esp+24h] [ebp-2Ch]
  _DWORD *v10; // [esp+28h] [ebp-28h]
  int v11; // [esp+30h] [ebp-20h]
  int v12; // [esp+34h] [ebp-1Ch]
  _BYTE v13[12]; // [esp+38h] [ebp-18h] BYREF
  _BYTE v14[12]; // [esp+44h] [ebp-Ch] BYREF

  result = TechnoClass::CanSelfRepair(this); /*0x4dff4f*/
  if ( result ) /*0x4dff56*/
  {
    v10 = 0; /*0x4dff66*/
    v9 = 0x7FFFFFFF; /*0x4dff6e*/
    v3 = *(_DWORD *)(this->focus + 216) - 1; /*0x4dff7c*/
    if ( v3 < 0 ) /*0x4dff7d*/
      return 0; /*0x4dff7d*/
    do /*0x4e002d*/
    {
      v4 = *(_DWORD **)(*(_DWORD *)(this->focus + 204) + 4 * v3); /*0x4dff94*/
      v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v4 + 72))(v4, v13); /*0x4dffa0*/
      v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 72))(this, v14); /*0x4dffa9*/
      v11 = v6[1] - v5[1]; /*0x4dffc7*/
      v12 = v6[2] - v5[2]; /*0x4dffd1*/
      v7 = Math::Sqrt((double)(*v6 - *v5) * (double)(*v6 - *v5) + (double)v12 * (double)v12 + (double)v11 * (double)v11); /*0x4dfff6*/
      v8 = Math::RoundToInt(v7); /*0x4e0003*/
      if ( v8 < v9 && !Team::GetMember(v4, 0) && !v4[185] ) /*0x4e001a*/
      {
        v9 = v8; /*0x4e0024*/
        v10 = v4; /*0x4e0028*/
      }
      --v3; /*0x4e002c*/
    }
    while ( v3 >= 0 ); /*0x4e002d*/
    if ( v10 ) /*0x4e0039*/
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *, int))(*this + 1152))(this, v10, 1); /*0x4e004c*/
      (*(void (__thiscall **)(_DWORD *, int, _DWORD *))(*this + 632))(this, 2, v10); /*0x4e0059*/
      (*(void (__thiscall **)(_DWORD *, int, int))(*this + 488))(this, 7, 1); /*0x4e0067*/
      return 1; /*0x4e006e*/
    }
    else
    {
      return 0; /*0x4e003b*/
    }
  }
  return result; /*0x4dff58*/
}

