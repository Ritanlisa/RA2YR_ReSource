// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x005B0060  MechLocomotionClass::ShortFunc_5B0060  this=MechLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_5B0060(int a1)
{
  BuildingClass::ProcessMission(a1 - 4, 1); /*0x5b006a*/
  return (*(int (__stdcall **)(int))(*(_DWORD *)a1 + 16))(a1); /*0x5b0075*/
}


// ==== 0x005B0080  MechLocomotionClass::ConvertCoordToCell_1  this=MechLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::ConvertCoordToCell_1(int a1, int aP1, IUnknown *aP2, IUnknown *aP3)
{
  int result; // eax
  IUnknown *v5; // ecx
  IUnknown *v6; // edx

  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 892))(*(_DWORD *)(a1 + 8)); /*0x5b008a*/
  if ( !(_BYTE)result ) /*0x5b0092*/
  {
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 896))(*(_DWORD *)(a1 + 8)); /*0x5b0099*/
    if ( !(_BYTE)result ) /*0x5b00a1*/
    {
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 468))(*(_DWORD *)(a1 + 8)); /*0x5b00a8*/
      if ( !(_BYTE)result ) /*0x5b00b0*/
      {
        result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 472))(*(_DWORD *)(a1 + 8)); /*0x5b00b7*/
        if ( !(_BYTE)result ) /*0x5b00bf*/
        {
          v5 = aP2; /*0x5b00c5*/
          v6 = aP3; /*0x5b00ca*/
          *(_DWORD *)(a1 + 20) = aP1; /*0x5b00dd*/
          *(_DWORD *)(a1 + 24) = v5; /*0x5b00e4*/
          *(_DWORD *)(a1 + 28) = v6; /*0x5b00ec*/
          result = (int)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP1); /*0x5b00ef*/
          if ( (*(_DWORD *)(result + 320) & 0x100) != 0 ) /*0x5b00fe*/
          {
            result = Coord::ScaleToScreenY((void *)0x3C); /*0x5b0105*/
            *(_DWORD *)(a1 + 28) += result; /*0x5b010a*/
          }
          *(_BYTE *)(a1 + 44) = 1; /*0x5b010d*/
        }
      }
    }
  }
  return result; /*0x5b0111*/
}


// ==== 0x005B0120  MechLocomotionClass::SyncMatrixTransformState  this=MechLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_5B0120(int a1)
{
  int result; // eax

  result = a1; /*0x5b0120*/
  *(_DWORD *)(a1 + 20) = g_MatrixTransformState; /*0x5b012d*/
  *(_DWORD *)(a1 + 24) = MEMORY[0xABEE14]; /*0x5b0136*/
  *(_DWORD *)(a1 + 28) = MEMORY[0xABEE18]; /*0x5b013f*/
  if ( *(_DWORD *)(a1 + 32) == g_MatrixTransformState /*0x5b0165*/
    && *(_DWORD *)(a1 + 36) == MEMORY[0xABEE14]
    && *(_DWORD *)(a1 + 40) == MEMORY[0xABEE18] )
  {
    *(_BYTE *)(a1 + 44) = 0; /*0x5b0167*/
  }
  return result; /*0x5b016b*/
}


// ==== 0x005B0170  MechLocomotionClass::UpdateFacingDirection_1  this=MechLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::sub_5B0170(int a1, int a2)
{
  return FacingClass::Update((char *)(*(_DWORD *)(a1 + 8) + 904), &a2); /*0x5b018f*/
}


// ==== 0x005B01A0  MechLocomotionClass::InitMultiFieldArray  this=MechLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_5B01A0(_DWORD *a1, int a2, int a3, int a4)
{
  a1[8] = a2; /*0x5b01b4*/
  a1[9] = a3; /*0x5b01b6*/
  a1[10] = a4; /*0x5b01b9*/
  return a2; /*0x5b01bc*/
}


// ==== 0x005B17B0  BuildingClass::UpdateMovingPosition  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::UpdateMovingPosition(int *this, IUnknown *aP1)
{
  bool v3; // zf
  CoordStruct *v4; // ecx
  int v5; // edx
  int v6; // ecx
  int *v7; // esi
  _DWORD *v8; // eax
  IUnknown *v9; // ecx
  IUnknown *v11; // [esp-4h] [ebp-28h]
  int v12; // [esp+Ch] [ebp-18h] BYREF
  CoordStruct *v13; // [esp+10h] [ebp-14h]
  int GroundHeight; // [esp+14h] [ebp-10h]
  IUnknown *v15; // [esp+18h] [ebp-Ch] BYREF
  int v16; // [esp+1Ch] [ebp-8h]
  int v17; // [esp+20h] [ebp-4h]

  v3 = aP1->field_0 == (_DWORD)g_MatrixTransformState; /*0x5b17c6*/
  v12 = aP1->field_0; /*0x5b17c8*/
  v4 = (CoordStruct *)aP1->field_4; /*0x5b17cc*/
  v13 = v4; /*0x5b17cf*/
  v5 = aP1->field_8; /*0x5b17d3*/
  GroundHeight = v5; /*0x5b17d6*/
  if ( !v3 || __PAIR64__(v5, (unsigned int)v4) != *(_QWORD *)(&g_MatrixTransformState + 1) ) /*0x5b17e2*/
  {
    GroundHeight = Cell::GetGroundHeight(&v12); /*0x5b1801*/
    if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], aP1) + 80) & 0x100) != 0 ) /*0x5b1813*/
    {
      v6 = this->vtable4 + 156; /*0x5b1818*/
      v15 = *(IUnknown **)v6; /*0x5b1820*/
      v16 = *(_DWORD *)(v6 + 4); /*0x5b1827*/
      if ( *(_DWORD *)(v6 + 8) > (int)*(&g_MatrixTransformState + 16) /*0x5b183e*/
                               + 2 * (int)*(&g_MatrixTransformState + 16)
                               + GroundHeight )
        GroundHeight += (int)*(&g_MatrixTransformState + 13); /*0x5b1846*/
    }
  }
  v7 = this + 9; /*0x5b1853*/
  if ( *(_QWORD *)(this + 9) != *(_QWORD *)&g_MatrixTransformState /*0x5b1871*/
    || (CoordStruct *)this->fallRate != *(&g_MatrixTransformState + 2) )
  {
    (*(void (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->vtable4 + 244))(this->vtable4, this + 9); /*0x5b1879*/
  }
  v11 = (IUnknown *)this->vtable4; /*0x5b1886*/
  v8 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v12); /*0x5b188d*/
  if ( !CrateClass::ProcessPickup(v8, (AbstractClass *)v11) || (v9 = (IUnknown *)this->vtable4, v9->__pad_68[25]) ) /*0x5b18a0*/
  {
    *v7 = (int)g_MatrixTransformState; /*0x5b18ca*/
    this->abstractFlags = *(_QWORD *)(&g_MatrixTransformState + 1); /*0x5b18d1*/
    v9 = (IUnknown *)this->vtable4; /*0x5b18dd*/
    if ( !v9->__pad_8C[4] ) /*0x5b18e8*/
      return 0; /*0x5b18e8*/
  }
  else
  {
    *v7 = v12; /*0x5b18b0*/
    this->owningHouseIndex = (int)v13; /*0x5b18b6*/
    this->fallRate = GroundHeight; /*0x5b18bd*/
  }
  if ( (CoordStruct *)*v7 != g_MatrixTransformState || this->abstractFlags != *(_QWORD *)(&g_MatrixTransformState + 1) ) /*0x5b1900*/
  {
    (*(void (__thiscall **)(IUnknown *, int *))(v9->field_0 + 240))(v9, this + 9); /*0x5b1912*/
    return 1; /*0x5b1920*/
  }
  v15 = (IUnknown *)v9->field_9C; /*0x5b192f*/
  v16 = *(_DWORD *)v9->__pad_A0; /*0x5b1936*/
  v17 = v9->field_A4; /*0x5b193d*/
  (*(void (__thiscall **)(IUnknown *, IUnknown **))(v9->field_0 + 240))(v9, &v15); /*0x5b1948*/
  return 0; /*0x5b1918*/
}


// ==== 0x005B1960  MechLocomotionClass::ddtor  this=MechLocomotionClass  sig=csp ====
int __stdcall MechLocomotionClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x5b1966*/
    return -2147467261; /*0x5b1968*/
  *a2 = 1439777208; /*0x5b1976*/
  a2[1] = 298965908; /*0x5b197e*/
  a2[2] = 1610651820; /*0x5b1987*/
  a2[3] = -1252326136; /*0x5b1990*/
  return 0; /*0x5b196d*/
}


// ==== 0x005B19A0  MechLocomotionClass::BeginMove  this=MechLocomotionClass  sig=csp ====
int __stdcall MechLocomotionClass::_vt05(int *a1, int *a2)
{
  int result; // eax

  result = SwizzleManager::SaveLoad(a1, a2); /*0x5b19ab*/
  if ( result >= 0 ) /*0x5b19b2*/
  {
    if ( a1 ) /*0x5b19b6*/
    {
      *a1 = (int)&MechLocomotionClass::`vftable'; /*0x5b19b8*/
      a1[1] = (int)&vt_MechLocomotionClass; /*0x5b19be*/
    }
  }
  return result; /*0x5b19c5*/
}


// ==== 0x005B19D0  MechLocomotionClass::SmallStub_5B19D0  this=MechLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_5B19D0(int a1)
{
  return 2; /*0x5b19d5*/
}


// ==== 0x005B19E0  MechLocomotionClass::StubReturnTrue_4  this=MechLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::StubReturnTrue_4(InfantryClass *aP0)
{
  if ( TimerClass::Active(*(_DWORD *)&aP0->__pad_0[8] + 904) ) /*0x5b19ee*/
    return 1; /*0x5b19f7*/
  return (*(unsigned __int8 (__stdcall **)(InfantryClass *))(*(_DWORD *)aP0->__pad_0 + 16))(aP0) /*0x5b1a39*/
      && (aP0->NeedsSaveOrLink != g_MatrixTransformState
       || *(_QWORD *)&aP0->objectTypeFlags != *(_QWORD *)(&g_MatrixTransformState + 1))
      && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&aP0->__pad_0[8] + 1336))(*(_DWORD *)&aP0->__pad_0[8]) > 0;
}


// ==== 0x005B1A50  MechLocomotionClass::DispatchVirtualCall_5  this=MechLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_5B1A50(_DWORD *a1, int a2)
{
  int result; // eax
  _DWORD *v3; // eax
  int v4; // ecx
  _DWORD v5[3]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v6[12]; // [esp+14h] [ebp-Ch] BYREF

  result = a2; /*0x5b1a50*/
  if ( !a2 ) /*0x5b1a59*/
  {
    v3 = (_DWORD *)(*(int (__stdcall **)(_DWORD *, _BYTE *))(*a1 + 24))(a1, v6); /*0x5b1a68*/
    v5[0] = *v3; /*0x5b1a6d*/
    v5[1] = v3[1]; /*0x5b1a74*/
    v4 = a1[2]; /*0x5b1a7b*/
    v5[2] = v3[2]; /*0x5b1a7e*/
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 244))(v4, v5); /*0x5b1a89*/
  }
  return result; /*0x5b1a90*/
}


// ==== 0x005B1AA0  MechLocomotionClass::IsPositionWithinThreshold_0  this=MechLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::sub_5B1AA0(int a1, int a2, int a3, int a4)
{
  int *v4; // eax
  int v5; // ebp
  int v6; // kr04_4
  int v7; // eax
  _BYTE v9[12]; // [esp+10h] [ebp-Ch] BYREF

  v4 = (int *)(*(int (__stdcall **)(int, _BYTE *))(*(_DWORD *)a1 + 24))(a1, v9); /*0x5b1ab3*/
  v5 = v4[2]; /*0x5b1abb*/
  v6 = *v4; /*0x5b1ae7*/
  v7 = v4[1] / 256; /*0x5b1afd*/
  return (unsigned __int16)(v6 / 256) == (unsigned __int16)(a2 / 256) /*0x5b1b21*/
      && (_WORD)v7 == (unsigned __int16)(a3 / 256)
      && (int)abs32(v5 - a4) <= MEMORY[0xABEE50];
}


// ==== 0x005B1B40  MechLocomotionClass::StubReturn52  this=MechLocomotionClass  sig=csp ====
int MechLocomotionClass::_vt09()
{
  return 52; /*0x5b1b45*/
}


// ==== 0x005B1B50  MechLocomotionClass::ProcessMove  this=MechLocomotionClass  sig=csp ====
MechLocomotionClass *__thiscall MechLocomotionClass::ProcessMove(_DWORD *Block, char a2)
{
  *Block = &MechLocomotionClass::`vftable'; /*0x5b1b53*/
  *(Block + 1) = &vt_MechLocomotionClass; /*0x5b1b59*/
  LocomotionClass::Construct(Block); /*0x5b1b60*/
  if ( (a2 & 1) != 0 ) /*0x5b1b6a*/
    __3_YAXPAX_Z(Block); /*0x5b1b6d*/
  return (MechLocomotionClass *)Block; /*0x5b1b77*/
}


// ==== 0x005B1B80  sub_5B1B80  this=-  sig=ida-proto ====
int sub_5B1B80()
{
  MEMORY[0xABEE60] = 0; /*0x5b1b82*/
  MEMORY[0xABEE64] = 0; /*0x5b1b87*/
  MEMORY[0xABEE68] = 0; /*0x5b1b8c*/
  MEMORY[0xABEE6C] = 0; /*0x5b1b91*/
  return 0; /*0x5b1b96*/
}


// ==== 0x005B1BA0  sub_5B1BA0  this=-  sig=ida-proto ====
void sub_5B1BA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b1bac*/
  MEMORY[0xABEE78] = Math::Sqrt(v0 + v0); /*0x5b1bbe*/
}


// ==== 0x005B1BD0  sub_5B1BD0  this=-  sig=ida-proto ====
void sub_5B1BD0()
{
  MEMORY[0xABEEC8] = MEMORY[0xABEE78] / 60.0; /*0x5b1bdc*/
}


// ==== 0x005B1BF0  sub_5B1BF0  this=-  sig=ida-proto ====
void sub_5B1BF0()
{
  MEMORY[0xABEEB0] = 1.0 / MEMORY[0xABEEC8]; /*0x5b1bfc*/
}


// ==== 0x005B1C10  sub_5B1C10  this=-  sig=ida-proto ====
void sub_5B1C10()
{
  MEMORY[0xABEEA8] = 0.0174532925199433 * 45.0; /*0x5b1c1c*/
}


// ==== 0x005B1C30  sub_5B1C30  this=-  sig=ida-proto ====
void sub_5B1C30()
{
  MEMORY[0xABEE80] = 0.0174532925199433 * 60.0; /*0x5b1c3c*/
}


// ==== 0x005B1C50  sub_5B1C50  this=-  sig=ida-proto ====
void sub_5B1C50()
{
  MEMORY[0xABEE58] = 0.0174532925199433 * 90.0; /*0x5b1c5c*/
}


// ==== 0x005B1C70  sub_5B1C70  this=-  sig=ida-proto ====
__int64 sub_5B1C70()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABEE58] - MEMORY[0xABEE80]); /*0x5b1c82*/
  result = Math::RoundToInt(v0 * MEMORY[0xABEE78] * 0.5); /*0x5b1c96*/
  MEMORY[0xABEED0] = result; /*0x5b1c9b*/
  return result; /*0x5b1ca0*/
}


// ==== 0x005B1CB0  sub_5B1CB0  this=-  sig=ida-proto ====
void sub_5B1CB0()
{
  MEMORY[0xABEE88] = Math::ArcTan((double)MEMORY[0xABEED0] * 0.00390625); /*0x5b1cc7*/
}


// ==== 0x005B1CE0  sub_5B1CE0  this=-  sig=ida-proto ====
void sub_5B1CE0()
{
  MEMORY[0xABEEA0] = Math::ArcTan((double)(2 * MEMORY[0xABEED0]) / MEMORY[0xABEE78]); /*0x5b1d02*/
}


// ==== 0x005B1D10  sub_5B1D10  this=-  sig=ida-proto ====
__int64 sub_5B1D10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABEED0]) + 0.5); /*0x5b1d2b*/
  MEMORY[0xABEEC4] = result; /*0x5b1d30*/
  return result; /*0x5b1d36*/
}


// ==== 0x005B1D40  sub_5B1D40  this=-  sig=ida-proto ====
int sub_5B1D40()
{
  MEMORY[0xABEE70] = 0; /*0x5b1d42*/
  MEMORY[0xABEE72] = 0; /*0x5b1d48*/
  return 0; /*0x5b1d4e*/
}


// ==== 0x005B1D50  sub_5B1D50  this=-  sig=ida-proto ====
int sub_5B1D50()
{
  MEMORY[0xABEE90] = 0; /*0x5b1d52*/
  MEMORY[0xABEE94] = 0; /*0x5b1d57*/
  MEMORY[0xABEE98] = 0; /*0x5b1d5c*/
  return 0; /*0x5b1d61*/
}


// ==== 0x005B1D70  sub_5B1D70  this=-  sig=ida-proto ====
int sub_5B1D70()
{
  MEMORY[0xABEEC0] = 0; /*0x5b1d75*/
  MEMORY[0xABEEB8] = 128; /*0x5b1d7f*/
  MEMORY[0xABEEBC] = 128; /*0x5b1d84*/
  return 128; /*0x5b1d89*/
}


// ==== 0x005B1D90  ObjectClass::method_5B1D90  this=ObjectClass  sig=csp ====
double *__thiscall sub_5B1D90(double *this)
{
  DWORD v2; // edi
  unsigned int v4; // [esp+8h] [ebp-Ch] BYREF
  double v5; // [esp+Ch] [ebp-8h]

  *(_DWORD *)this = 0; /*0x5b1d9b*/
  v4 = 0; /*0x5b1da1*/
  this->vtable2 = 1072693248; /*0x5b1da9*/
  v2 = sub_5CAF70((LONG *)&v4); /*0x5b1db5*/
  if ( v2 || v4 ) /*0x5b1dc1*/
  {
    v5 = (double)v4; /*0x5b1de8*/
    Debug::Log(); /*0x5b1dec*/
    *this = (v5 * 4294967296.0 + (double)v2) * 0.001; /*0x5b1e19*/
    return this; /*0x5b1e0e*/
  }
  else
  {
    timeBeginPeriod(1u); /*0x5b1dc5*/
    return this; /*0x5b1dcb*/
  }
}


// ==== 0x005B1E40  Timer::GetHighPrecision  this=Timer  sig=csp ====
double __thiscall Timer_GetHighPrecision(double *this)
{
  unsigned int v2; // eax
  unsigned int v4; // [esp+4h] [ebp-Ch] BYREF
  __int64 v5; // [esp+8h] [ebp-8h]

  if ( dword_82C24C == -1 ) /*0x5b1e4e*/
    GetVersionString(&dword_82C24C, MEMORY[0xABEED4], 0, 0); /*0x5b1e5e*/
  if ( !*(_DWORD *)this && *((_DWORD *)this + 1) == 1072693248 || dword_82C24C <= 4 ) /*0x5b1e78*/
    return (double)timeGetTime(); /*0x5b1ecc*/
  v2 = Timer::ReadTSC(&v4); /*0x5b1e7f*/
  v5 = v4; /*0x5b1e9b*/
  return ((double)v2 + (double)v4 * 4294967296.0) / *this; /*0x5b1eb5*/
}


// ==== 0x005B1EE0  sub_5B1EE0  this=-  sig=ida-proto ====
int sub_5B1EE0()
{
  MEMORY[0xABEEE0] = 0; /*0x5b1ee2*/
  MEMORY[0xABEEE4] = 0; /*0x5b1ee7*/
  MEMORY[0xABEEE8] = 0; /*0x5b1eec*/
  MEMORY[0xABEEEC] = 0; /*0x5b1ef1*/
  return 0; /*0x5b1ef6*/
}


// ==== 0x005B1F00  sub_5B1F00  this=-  sig=ida-proto ====
void sub_5B1F00()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b1f0c*/
  MEMORY[0xABEEF8] = Math::Sqrt(v0 + v0); /*0x5b1f1e*/
}


// ==== 0x005B1F30  sub_5B1F30  this=-  sig=ida-proto ====
void sub_5B1F30()
{
  MEMORY[0xABEF48] = MEMORY[0xABEEF8] / 60.0; /*0x5b1f3c*/
}


// ==== 0x005B1F50  sub_5B1F50  this=-  sig=ida-proto ====
void sub_5B1F50()
{
  MEMORY[0xABEF30] = 1.0 / MEMORY[0xABEF48]; /*0x5b1f5c*/
}


// ==== 0x005B1F70  sub_5B1F70  this=-  sig=ida-proto ====
void sub_5B1F70()
{
  MEMORY[0xABEF28] = 0.0174532925199433 * 45.0; /*0x5b1f7c*/
}


// ==== 0x005B1F90  sub_5B1F90  this=-  sig=ida-proto ====
void sub_5B1F90()
{
  MEMORY[0xABEF00] = 0.0174532925199433 * 60.0; /*0x5b1f9c*/
}


// ==== 0x005B1FB0  sub_5B1FB0  this=-  sig=ida-proto ====
void sub_5B1FB0()
{
  MEMORY[0xABEED8] = 0.0174532925199433 * 90.0; /*0x5b1fbc*/
}


// ==== 0x005B1FD0  sub_5B1FD0  this=-  sig=ida-proto ====
__int64 sub_5B1FD0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABEED8] - MEMORY[0xABEF00]); /*0x5b1fe2*/
  result = Math::RoundToInt(v0 * MEMORY[0xABEEF8] * 0.5); /*0x5b1ff6*/
  MEMORY[0xABEF50] = result; /*0x5b1ffb*/
  return result; /*0x5b2000*/
}


// ==== 0x005B2010  sub_5B2010  this=-  sig=ida-proto ====
void sub_5B2010()
{
  MEMORY[0xABEF08] = Math::ArcTan((double)MEMORY[0xABEF50] * 0.00390625); /*0x5b2027*/
}


// ==== 0x005B2040  sub_5B2040  this=-  sig=ida-proto ====
void sub_5B2040()
{
  MEMORY[0xABEF20] = Math::ArcTan((double)(2 * MEMORY[0xABEF50]) / MEMORY[0xABEEF8]); /*0x5b2062*/
}


// ==== 0x005B2070  sub_5B2070  this=-  sig=ida-proto ====
__int64 sub_5B2070()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABEF50]) + 0.5); /*0x5b208b*/
  MEMORY[0xABEF44] = result; /*0x5b2090*/
  return result; /*0x5b2096*/
}


// ==== 0x005B20A0  sub_5B20A0  this=-  sig=ida-proto ====
int sub_5B20A0()
{
  MEMORY[0xABEEF0] = 0; /*0x5b20a2*/
  MEMORY[0xABEEF2] = 0; /*0x5b20a8*/
  return 0; /*0x5b20ae*/
}


// ==== 0x005B20B0  sub_5B20B0  this=-  sig=ida-proto ====
int sub_5B20B0()
{
  MEMORY[0xABEF10] = 0; /*0x5b20b2*/
  MEMORY[0xABEF14] = 0; /*0x5b20b7*/
  MEMORY[0xABEF18] = 0; /*0x5b20bc*/
  return 0; /*0x5b20c1*/
}


// ==== 0x005B20D0  sub_5B20D0  this=-  sig=ida-proto ====
int sub_5B20D0()
{
  MEMORY[0xABEF40] = 0; /*0x5b20d5*/
  MEMORY[0xABEF38] = 128; /*0x5b20df*/
  MEMORY[0xABEF3C] = 128; /*0x5b20e4*/
  return 128; /*0x5b20e9*/
}


// ==== 0x005B20F0  Movement::CalcVelocity  this=Movement  sig=csp ====
__int64 Movement::CalcVelocity(
        IUnknown *aP0,
        unsigned int *a1,
        double a3,
        IUnknown *aP3,
        IUnknown *aP4,
        IUnknown *aP5,
        char a7,
        char a8,
        char a9)
{
  int v9; // edx
  int *v10; // ecx
  double v11; // st7
  int *v12; // ebx
  BuildingTypeClass *v13; // esi
  bool v14; // zf
  double v15; // st7
  double v16; // st7
  double v17; // st7
  double v18; // st7
  int v19; // edx
  double v20; // st7
  int v21; // eax
  double v22; // st7
  double v23; // st7
  unsigned int v24; // edx
  int eax10a; // eax
  int v26; // edi
  int v27; // eax
  IUnknown *v25; // eax
  int v29; // ecx
  int v30; // edx
  double v31; // st7
  __int64 result; // rax
  double v33; // st7
  int edx11; // edx
  int v35; // esi
  int v36; // eax
  IUnknown *v34; // eax
  int v38; // ecx
  int v39; // edx
  int *v40; // eax
  int v41; // ecx
  int v42; // edx
  IUnknown *v43; // eax
  int v44; // eax
  int *v45; // eax
  int v46; // ecx
  int esi11a; // esi
  int edx11c; // edx
  int v49; // eax
  IUnknown *v47; // eax
  BuildingTypeClass *v48; // esi
  double v52; // st7
  double v53; // st7
  double v54; // st7
  int v55; // edx
  double v56; // st7
  double v57; // st7
  double v58; // st7
  double v59; // st7
  int ecx20; // ecx
  int edi20a; // edi
  int v62; // eax
  IUnknown *v60; // eax
  IUnknown *v61; // eax
  int GroundHeight; // edi
  int v66; // eax
  int v67; // edx
  int v68; // ecx
  int v69; // edx
  __int16 *eax47; // eax
  __int16 *eax47a; // eax
  IUnknown *v72; // [esp+0h] [ebp-A8h]
  _BYTE v73[12]; // [esp+0h] [ebp-A8h]
  __int128 v74; // [esp+0h] [ebp-A8h]
  _BYTE v75[12]; // [esp+4h] [ebp-A4h]
  _BYTE v76[12]; // [esp+4h] [ebp-A4h]
  BuildingTypeClass *v70; // [esp+Ch] [ebp-9Ch]
  BuildingTypeClass *v71; // [esp+20h] [ebp-88h] BYREF
  double *v79; // [esp+24h] [ebp-84h] BYREF
  double v80[3]; // [esp+28h] [ebp-80h] BYREF
  double *v81; // [esp+44h] [ebp-64h] BYREF
  double v82[2]; // [esp+48h] [ebp-60h] BYREF
  IUnknown *v83[2]; // [esp+58h] [ebp-50h] BYREF
  AbstractClass aP1; // [esp+60h] [ebp-48h] BYREF
  int v85; // [esp+84h] [ebp-24h]
  double v86[3]; // [esp+90h] [ebp-18h] BYREF

  v12 = v10; /*0x5b2102*/
  v13 = (BuildingTypeClass *)v9; /*0x5b2104*/
  v14 = aP0->field_0 == (_DWORD)*(&g_MatrixTransformState + 64); /*0x5b210e*/
  v81 = (double *)v9; /*0x5b2110*/
  if ( v14 && *(_QWORD *)&aP0->field_4 == *(_QWORD *)(&g_MatrixTransformState + 65) ) /*0x5b2124*/
  {
    Math::Hypotenuse2D((double *)v9); /*0x5b213c*/
    *(double *)&v75[4] = v11; /*0x5b214a*/
    *(_DWORD *)v75 = v13->abstractFlags; /*0x5b214d*/
    v15 = Math::CalcAngle((AbstractClass *)v13->uniqueId, *(double *)v75); /*0x5b214f*/
    LOWORD(v81) = Math::RoundToInt((v15 - 1.570796326794897) * -10430.06004058427); /*0x5b216b*/
    v71 = (BuildingTypeClass *)v81; /*0x5b217e*/
    LOWORD(v79) = 0x2000; /*0x5b2182*/
    if ( Math::Abs16Cmp(&v71, (IUnknown *)&v79, (IUnknown *)a1) ) /*0x5b2189*/
    {
      LOWORD(v71) = (_WORD)v79; /*0x5b2197*/
    }
    else if ( SLOWORD(Math::Sub16(&v79, (BuildingTypeClass *)v83, (IUnknown *)&v71)->field_0) >= 0 ) /*0x5b21b5*/
    {
      LOWORD(v71) = *(_WORD *)a1 + (_WORD)v71; /*0x5b21c4*/
    }
    else
    {
      LOWORD(v71) = (_WORD)v71 - *(_WORD *)a1; /*0x5b21ba*/
    }
    v81 = (double *)((__int16)*Vector::ToFacingMath((double *)v13->vtable0, v83) - 0x3FFF); /*0x5b21de*/
    v16 = (double)(int)v81 * -0.00009587672516830327; /*0x5b21e8*/
    *(double *)v83 = v16; /*0x5b21ee*/
    Vector3::Magnitude((double *)v13->vtable0); /*0x5b21f2*/
    v82[0] = v16; /*0x5b21f7*/
    if ( *(double *)v83 != 0.0 ) /*0x5b220a*/
    {
      v17 = Math::ArcTan2(v83[0]); /*0x5b2216*/
      v72 = v83[0]; /*0x5b2222*/
      *(double *)v13->vtable0 = *(double *)v13->vtable0 / v17; /*0x5b2223*/
      *(double *)&v13->vtable0[8] = *(double *)&v13->vtable0[8] / Math::ArcTan2(v72); /*0x5b2230*/
    }
    v81 = (double *)((__int16)v71 - 0x3FFF); /*0x5b2241*/
    v18 = Math::ArcTan2((IUnknown *)COERCE_UNSIGNED_INT64((double)(int)v81 * -0.00009587672516830327)); /*0x5b2252*/
    v19 = (__int16)v71; /*0x5b2259*/
    *(double *)v13->vtable0 = v18 * *(double *)v13->vtable0; /*0x5b225e*/
    v81 = (double *)(v19 - 0x3FFF); /*0x5b2266*/
    v20 = Math::ArcTan2((IUnknown *)COERCE_UNSIGNED_INT64((double)(v19 - 0x3FFF) * -0.00009587672516830327)); /*0x5b2277*/
    v21 = (__int16)v71; /*0x5b227f*/
    *(double *)&v13->vtable0[8] = v20 * *(double *)&v13->vtable0[8]; /*0x5b2284*/
    v81 = (double *)(v21 - 0x3FFF); /*0x5b228c*/
    v22 = Math::SinCos((IUnknown *)COERCE_UNSIGNED_INT64((double)(v21 - 0x3FFF) * -0.00009587672516830327)); /*0x5b229d*/
    v23 = v22 * v82[0]; /*0x5b22a2*/
    v24 = *(_DWORD *)v13->vtable0; /*0x5b22ab*/
    *(double *)&v13->uniqueId = v23; /*0x5b22ad*/
    *(_QWORD *)&aP1.nextArrayIndex = __PAIR64__(*(_DWORD *)&v13->vtable0[4], v24); /*0x5b22b3*/
    eax10a = *(_DWORD *)&v13->vtable0[12]; /*0x5b22c2*/
    aP1.NeedsSaveOrLink = *(void **)&v13->vtable0[8]; /*0x5b22c5*/
    v85 = eax10a; /*0x5b22c9*/
    v26 = Math::RoundToInt(v23); /*0x5b22d6*/
    aP1.referenceCount = Math::RoundToInt(v23); /*0x5b22dd*/
    v27 = Math::RoundToInt(v23); /*0x5b22e1*/
    v25 = Coord::Subtract( /*0x5b22ff*/
            &aP1.nextArrayIndex,
            (IUnknown *)(*v12 + v26),
            (IUnknown *)(aP1.referenceCount + v12[1]),
            (IUnknown *)(v27 + v12[2]));
    v29 = v25->field_4; /*0x5b2308*/
    v30 = v25->field_8; /*0x5b230b*/
    *v12 = v25->field_0; /*0x5b230e*/
    v12[1] = v29; /*0x5b2310*/
    v12[2] = v30; /*0x5b2313*/
    v31 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x5b233a*/
                                        *(double *)&v13->vtable0[8] * *(double *)&v13->vtable0[8]
                                      + *(double *)v13->vtable0 * *(double *)v13->vtable0
                                      + *(double *)&v13->uniqueId * *(double *)&v13->uniqueId));
    return Math::RoundToInt(v31); /*0x5b234d*/
  }
  v33 = *(double *)(v9 + 16); /*0x5b2352*/
  *(_QWORD *)&aP1.nextArrayIndex = *(_QWORD *)v9; /*0x5b2357*/
  edx11 = *(_DWORD *)(v9 + 12); /*0x5b2369*/
  aP1.NeedsSaveOrLink = *(void **)&v13->vtable0[8]; /*0x5b236c*/
  v85 = edx11; /*0x5b2370*/
  v35 = Math::RoundToInt(v33); /*0x5b237d*/
  aP1.referenceCount = Math::RoundToInt(v33); /*0x5b2384*/
  v36 = Math::RoundToInt(v33); /*0x5b2388*/
  v34 = Coord::Subtract( /*0x5b23a6*/
          &aP1,
          (IUnknown *)(*v12 + v35),
          (IUnknown *)(v12[1] + aP1.referenceCount),
          (IUnknown *)(v12[2] + v36));
  v38 = v34->field_4; /*0x5b23b2*/
  v39 = v34->field_8; /*0x5b23b5*/
  *v12 = v34->field_0; /*0x5b23b8*/
  v12[1] = v38; /*0x5b23be*/
  v12[2] = v39; /*0x5b23c4*/
  v40 = Vector3::Subtract(v12, (IUnknown *)&aP1, aP0); /*0x5b23c7*/
  Coord::Length(v40); /*0x5b23ce*/
  v41 = aP0->field_0; /*0x5b23d3*/
  v42 = aP0->field_4; /*0x5b23d5*/
  v83[0] = v43; /*0x5b23d8*/
  v44 = *v12; /*0x5b23dc*/
  *(_QWORD *)&v82[0] = __PAIR64__(v42, v41); /*0x5b23de*/
  *(_QWORD *)&v80[0] = __PAIR64__(v12[1], v44); /*0x5b23e9*/
  v45 = Coord2D::Sub(v80, &aP1, (IUnknown *)v82); /*0x5b23ff*/
  Vector::2DMagnitudeMath(v45); /*0x5b2406*/
  v46 = aP0->field_8; /*0x5b240b*/
  esi11a = v12[2]; /*0x5b240e*/
  edx11c = aP0->field_4; /*0x5b2411*/
  LODWORD(v82[0]) = v49; /*0x5b2414*/
  v47 = Coord::Subtract( /*0x5b242c*/
          &aP1,
          (IUnknown *)(aP0->field_0 - *v12),
          (IUnknown *)(edx11c - v12[1]),
          (IUnknown *)(v46 - esi11a));
  aP1.nextArrayIndex = v47->field_0; /*0x5b2433*/
  aP1.referenceCount = v47->field_4; /*0x5b243a*/
  aP1.NeedsSaveOrLink = (void *)v47->field_8; /*0x5b2449*/
  *(double *)aP1.__pad_0 = (double)aP1.nextArrayIndex; /*0x5b2454*/
  v80[0] = *(double *)aP1.__pad_0; /*0x5b2464*/
  *(double *)&aP1.__pad_0[8] = (double)aP1.referenceCount; /*0x5b246c*/
  v80[2] = (double)(int)aP1.NeedsSaveOrLink; /*0x5b247c*/
  v80[1] = *(double *)&aP1.__pad_0[8]; /*0x5b2489*/
  qmemcpy(v86, v80, sizeof(v86)); /*0x5b248d*/
  v48 = (BuildingTypeClass *)v81; /*0x5b248f*/
  *(_DWORD *)&v73[8] = *(_DWORD *)v81; /*0x5b249c*/
  *(double *)v73 = -v81[1]; /*0x5b24a2*/
  v52 = Math::CalcAngle(*(AbstractClass **)v73, *(double *)&v73[4]); /*0x5b24a5*/
  LOWORD(v81) = Math::RoundToInt((v52 - 1.570796326794897) * -10430.06004058427); /*0x5b24c5*/
  *((double *)&v74 + 1) = v86[0]; /*0x5b24dd*/
  v79 = v81; /*0x5b24e1*/
  *(double *)&v74 = -v86[1]; /*0x5b24e7*/
  v53 = (Math::CalcAngle((AbstractClass *)v74, *(double *)((char *)&v74 + 4)) - 1.570796326794897) * -10430.06004058427; /*0x5b24f8*/
  LOWORD(v80[0]) = Math::RoundToInt(v53); /*0x5b2510*/
  if ( Math::Abs16Cmp(&v79, (IUnknown *)v80, (IUnknown *)a1) ) /*0x5b2515*/
  {
    LOWORD(v79) = LOWORD(v80[0]); /*0x5b2523*/
  }
  else if ( SLOWORD(Math::Sub16(v80, (BuildingTypeClass *)&v81, (IUnknown *)&v79)->field_0) >= 0 ) /*0x5b2541*/
  {
    LOWORD(v79) = *(_WORD *)a1 + (_WORD)v79; /*0x5b2550*/
  }
  else
  {
    LOWORD(v79) = (_WORD)v79 - *(_WORD *)a1; /*0x5b2546*/
  }
  Vector2::NormalizeNonZero((double *)v48->vtable0); /*0x5b2557*/
  Function::Method_41C430((double *)v48->vtable0); /*0x5b255e*/
  v80[0] = v53; /*0x5b2568*/
  v81 = (double *)((__int16)v79 - 0x3FFF); /*0x5b2575*/
  v54 = Math::ArcTan2((IUnknown *)COERCE_UNSIGNED_INT64((double)(int)v81 * -0.00009587672516830327)); /*0x5b2586*/
  v55 = (__int16)v79; /*0x5b258f*/
  *(double *)v48->vtable0 = v54 * v80[0]; /*0x5b2594*/
  v81 = (double *)(v55 - 0x3FFF); /*0x5b259c*/
  v56 = Math::SinCos((IUnknown *)COERCE_UNSIGNED_INT64((double)(v55 - 0x3FFF) * -0.00009587672516830327)); /*0x5b25ad*/
  v57 = -(v56 * v80[0]); /*0x5b25bb*/
  *(double *)&v48->vtable0[8] = v57; /*0x5b25bd*/
  Math::Hypotenuse2D((double *)v48->vtable0); /*0x5b25c0*/
  *(double *)&v76[4] = v57; /*0x5b25ce*/
  *(_DWORD *)v76 = v48->abstractFlags; /*0x5b25d1*/
  v58 = Math::CalcAngle((AbstractClass *)v48->uniqueId, *(double *)v76); /*0x5b25d3*/
  LOWORD(v81) = Math::RoundToInt((v58 - 1.570796326794897) * -10430.06004058427); /*0x5b25ec*/
  v71 = (BuildingTypeClass *)v81; /*0x5b25fa*/
  if ( LOBYTE(a3)
    || !BYTE4(a3) && SLODWORD(v82[0]) <= ((_BYTE)aP3 != 0 ? 6 : 3) << 8
    || (unsigned __int8)(((*a1 >> 7) + 1) >> 1) <= 1u )
  {
    if ( !(_BYTE)aP4 ) /*0x5b28a1*/
    {
      LOWORD(v83[0]) = 256; /*0x5b28b6*/
      eax47 = (__int16 *)Movement::Check(a1, &v81, v83); /*0x5b28bd*/
      v70 = (BuildingTypeClass *)Movement::DivideAndStoreScaled(eax47, (int *)v82, 2); /*0x5b28cd*/
      eax47a = Vector::ToFacingMath(v86, v80); /*0x5b28d6*/
      Movement::CompareAbsCoords((__int16 *)&v71, eax47a, (__int16 *)v70->vtable0); /*0x5b28e0*/
    }
    goto LABEL_48; /*0x5b28e0*/
  }
  v59 = *(double *)&v48->uniqueId; /*0x5b2640*/
  *(_QWORD *)aP1.__pad_0 = *(_QWORD *)v48->vtable0; /*0x5b2645*/
  ecx20 = *(_DWORD *)&v48->vtable0[12]; /*0x5b2657*/
  *(_DWORD *)&aP1.__pad_0[8] = *(_DWORD *)&v48->vtable0[8]; /*0x5b265a*/
  *(_DWORD *)&aP1.__pad_0[12] = ecx20; /*0x5b265e*/
  edi20a = Math::RoundToInt(v59); /*0x5b266b*/
  *(_DWORD *)&aP1.__pad_0[4] = Math::RoundToInt(v59); /*0x5b2672*/
  v62 = Math::RoundToInt(v59); /*0x5b2676*/
  v60 = Coord::Subtract( /*0x5b2695*/
          v82,
          (IUnknown *)(6 * edi20a),
          (IUnknown *)(6 * *(_DWORD *)&aP1.__pad_0[4]),
          (IUnknown *)(6 * v62));
  v61 = Coord::Subtract( /*0x5b26b9*/
          v80,
          (IUnknown *)(*v12 + v60->field_0),
          (IUnknown *)(v12[1] + v60->field_4),
          (IUnknown *)(v12[2] + v60->field_8));
  *(_DWORD *)aP1.__pad_0 = v61->field_0; /*0x5b26c0*/
  *(_DWORD *)&aP1.__pad_0[4] = v61->field_4; /*0x5b26cc*/
  *(_DWORD *)&aP1.__pad_0[8] = v61->field_8; /*0x5b26d8*/
  GroundHeight = Cell::GetGroundHeight((IUnknown *)&aP1); /*0x5b26eb*/
  if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP1) + 80) & 0x100) != 0 ) /*0x5b26fb*/
    GroundHeight += (int)*(&g_MatrixTransformState + 77); /*0x5b26fd*/
  v66 = (int)v83[0] / 256; /*0x5b2713*/
  if ( BYTE4(a3) || (_BYTE)aP3 ) /*0x5b271f*/
  {
    v66 = 10; /*0x5b272d*/
  }
  else if ( v66 >= 5 ) /*0x5b2724*/
  {
    v66 = 5; /*0x5b2726*/
  }
  if ( !(_BYTE)aP4 ) /*0x5b2737*/
  {
    v67 = v12[2]; /*0x5b2744*/
    v68 = v67 - (_DWORD)*(&g_MatrixTransformState + 80) * v66 - GroundHeight; /*0x5b274b*/
    if ( v68 >= -20 ) /*0x5b2750*/
    {
      if ( v68 <= 20 ) /*0x5b275a*/
        goto LABEL_33; /*0x5b275a*/
      v69 = v67 - 18; /*0x5b275c*/
    }
    else
    {
      v69 = v67 + 18; /*0x5b2752*/
    }
    v12[2] = v69; /*0x5b275f*/
LABEL_33:
    if ( v68 >= (int)*(&g_MatrixTransformState + 80) / -2 ) /*0x5b2773*/
    {
      if ( v68 <= (int)*(&g_MatrixTransformState + 80) / 2 ) /*0x5b27fa*/
      {
        LOWORD(v82[0]) = 0x4000; /*0x5b2875*/
        LOWORD(v83[0]) = *(__int16 *)a1 / 2; /*0x5b2888*/
        Movement::CompareAbsCoords((__int16 *)&v71, (__int16 *)v82, (__int16 *)v83); /*0x5b289a*/
      }
      else
      {
        LOWORD(v81) = 18432; /*0x5b27ff*/
        LOWORD(v83[0]) = *(__int16 *)a1 / 2; /*0x5b2812*/
        *(IUnknown **)&v80[0] = v83[0]; /*0x5b281f*/
        if ( Math::Abs16Cmp(&v71, (IUnknown *)&v81, (IUnknown *)v80) ) /*0x5b2829*/
        {
          LOWORD(v71) = (_WORD)v81; /*0x5b2837*/
        }
        else if ( SLOWORD(Math::Sub16(&v81, (BuildingTypeClass *)v83, (IUnknown *)&v71)->field_0) >= 0 ) /*0x5b2858*/
        {
          LOWORD(v71) = LOWORD(v80[0]) + (_WORD)v71; /*0x5b286b*/
        }
        else
        {
          LOWORD(v71) = (_WORD)v71 - LOWORD(v80[0]); /*0x5b285f*/
        }
      }
    }
    else
    {
      LOWORD(v80[0]) = 0x2000; /*0x5b2778*/
      LOWORD(v83[0]) = *(__int16 *)a1 / 2; /*0x5b278b*/
      v81 = (double *)&v83[0]->field_0; /*0x5b2798*/
      if ( Math::Abs16Cmp(&v71, (IUnknown *)v80, (IUnknown *)&v81) ) /*0x5b27a2*/
      {
        LOWORD(v71) = LOWORD(v80[0]); /*0x5b27b0*/
      }
      else if ( SLOWORD(Math::Sub16(v80, (BuildingTypeClass *)v83, (IUnknown *)&v71)->field_0) >= 0 ) /*0x5b27d1*/
      {
        LOWORD(v71) = (_WORD)v81 + (_WORD)v71; /*0x5b27e7*/
      }
      else
      {
        LOWORD(v71) = (_WORD)v71 - (_WORD)v81; /*0x5b27d8*/
      }
    }
  }
LABEL_48:
  Movement::UpdateLocomotion((double *)v48->vtable0, (IUnknown *)&v71); /*0x5b28e5*/
  if ( BYTE4(a3) ) /*0x5b28f6*/
    aP1.NeedsSaveOrLink = 0; /*0x5b28f8*/
  else
    aP1.NeedsSaveOrLink = (void *)((int)aP1.NeedsSaveOrLink / 4); /*0x5b290f*/
  Coord::Length(&aP1.nextArrayIndex); /*0x5b2917*/
  return result; /*0x5b2347*/
}


// ==== 0x005B2930  Movement::Check  this=Movement  sig=csp ====
_DWORD *__thiscall sub_5B2930(_WORD *this, _DWORD *a2, _WORD *a3)
{
  LOWORD(a3) = *this + *a3; /*0x5b293e*/
  *a2 = a3; /*0x5b2947*/
  return a2; /*0x5b2949*/
}


// ==== 0x005B2950  Math::Sub16  this=Math  sig=csp ====
IUnknown *__thiscall Math::Sub16(_WORD *this, BuildingTypeClass *aP1, IUnknown *aP2)
{
  LOWORD(aP2) = *this - LOWORD(aP2->field_0); /*0x5b295a*/
  *(_DWORD *)aP1->vtable0 = aP2; /*0x5b2967*/
  return (IUnknown *)aP1; /*0x5b2969*/
}


// ==== 0x005B2970  Movement::DivideAndStoreScaled  this=AbstractClass  sig=csp ====
int *__thiscall sub_5B2970(__int16 *this, int *a2, int a3)
{
  LOWORD(a3) = *this / a3; /*0x5b2978*/
  *a2 = a3; /*0x5b2985*/
  return a2; /*0x5b2987*/
}


// ==== 0x005B2990  Math::Abs16Cmp  this=RecoilData  sig=csp ====
bool __thiscall Math::Abs16Cmp(_WORD *this, IUnknown *aP1, IUnknown *aP2)
{
  return abs16(aP2->field_0) >= (int)abs16(*this - LOWORD(aP1->field_0)); /*0x5b29b3*/
}


// ==== 0x005B29C0  Movement::CompareAbsCoords  this=Movement  sig=csp ====
char __thiscall sub_5B29C0(__int16 *this, __int16 *a2, __int16 *a3)
{
  __int16 v3; // bp
  __int16 v4; // di
  __int16 v5; // si

  v3 = *a3; /*0x5b29ca*/
  v4 = *a2; /*0x5b29cf*/
  v5 = *this; /*0x5b29d2*/
  if ( abs16(*a3) < (int)abs16(*this - *a2) ) /*0x5b29f3*/
  {
    if ( (__int16)(v4 - v5) >= 0 ) /*0x5b2a06*/
      *this = v5 + v3; /*0x5b2a19*/
    else
      *this = v5 - v3; /*0x5b2a0b*/
    return 0; /*0x5b2a10*/
  }
  else
  {
    *this = v4; /*0x5b29f5*/
    return 1; /*0x5b29fb*/
  }
}


// ==== 0x005B2A30  Movement::UpdateLocomotion  this=RecoilData  sig=csp ====
void __thiscall Movement::UpdateLocomotion(double *this, IUnknown *aP1)
{
  double v3; // st7
  double v4; // st7
  double v5; // [esp+18h] [ebp-10h]
  double v6; // [esp+20h] [ebp-8h]

  v3 = Math::Sqrt(*this * *this + *(this + 1) * *(this + 1)); /*0x5b2a57*/
  v4 = Math::CalcAngle(*(this + 2), v3); /*0x5b2a72*/
  v5 = (double)((__int16)Math::RoundToInt((v4 - 1.570796326794897) * -10430.06004058427) - 0x3FFF) /*0x5b2aa2*/
     * -0.00009587672516830327;
  v6 = Math::Sqrt(*(this + 2) * *(this + 2) + *this * *this + *(this + 1) * *(this + 1)); /*0x5b2acc*/
  if ( v5 != 0.0 ) /*0x5b2ae2*/
  {
    *this = *this / Math::ArcTan2(v5); /*0x5b2af7*/
    *(this + 1) = *(this + 1) / Math::ArcTan2(v5); /*0x5b2b04*/
  }
  *this = Math::ArcTan2((double)(SLOWORD(aP1->field_0) - 0x3FFF) * -0.00009587672516830327) * *this; /*0x5b2b2e*/
  *(this + 1) = Math::ArcTan2((double)(SLOWORD(aP1->field_0) - 0x3FFF) * -0.00009587672516830327) * *(this + 1); /*0x5b2b51*/
  *(this + 2) = Math::SinCos((double)(SLOWORD(aP1->field_0) - 0x3FFF) * -0.00009587672516830327) * v6; /*0x5b2b7b*/
}


// ==== 0x005B2B90  sub_5B2B90  this=-  sig=ida-proto ====
void sub_5B2B90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b2b9c*/
  MEMORY[0xABEF78] = Math::Sqrt(v0 + v0); /*0x5b2bae*/
}


// ==== 0x005B2BC0  sub_5B2BC0  this=-  sig=ida-proto ====
void sub_5B2BC0()
{
  MEMORY[0xABEFC8] = MEMORY[0xABEF78] / 60.0; /*0x5b2bcc*/
}


// ==== 0x005B2BE0  sub_5B2BE0  this=-  sig=ida-proto ====
void sub_5B2BE0()
{
  MEMORY[0xABEFB0] = 1.0 / MEMORY[0xABEFC8]; /*0x5b2bec*/
}


// ==== 0x005B2C00  sub_5B2C00  this=-  sig=ida-proto ====
void sub_5B2C00()
{
  MEMORY[0xABEFA8] = 0.0174532925199433 * 45.0; /*0x5b2c0c*/
}


// ==== 0x005B2C20  sub_5B2C20  this=-  sig=ida-proto ====
void sub_5B2C20()
{
  MEMORY[0xABEF80] = 0.0174532925199433 * 60.0; /*0x5b2c2c*/
}


// ==== 0x005B2C40  sub_5B2C40  this=-  sig=ida-proto ====
void sub_5B2C40()
{
  MEMORY[0xABEF58] = 0.0174532925199433 * 90.0; /*0x5b2c4c*/
}


// ==== 0x005B2C60  sub_5B2C60  this=-  sig=ida-proto ====
__int64 sub_5B2C60()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABEF58] - MEMORY[0xABEF80]); /*0x5b2c72*/
  result = Math::RoundToInt(v0 * MEMORY[0xABEF78] * 0.5); /*0x5b2c86*/
  MEMORY[0xABEFD0] = result; /*0x5b2c8b*/
  return result; /*0x5b2c90*/
}


// ==== 0x005B2CA0  sub_5B2CA0  this=-  sig=ida-proto ====
void sub_5B2CA0()
{
  MEMORY[0xABEF88] = Math::ArcTan((double)MEMORY[0xABEFD0] * 0.00390625); /*0x5b2cb7*/
}


// ==== 0x005B2CD0  sub_5B2CD0  this=-  sig=ida-proto ====
void sub_5B2CD0()
{
  MEMORY[0xABEFA0] = Math::ArcTan((double)(2 * MEMORY[0xABEFD0]) / MEMORY[0xABEF78]); /*0x5b2cf2*/
}


// ==== 0x005B2D00  sub_5B2D00  this=-  sig=ida-proto ====
__int64 sub_5B2D00()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABEFD0]) + 0.5); /*0x5b2d1b*/
  MEMORY[0xABEFC4] = result; /*0x5b2d20*/
  return result; /*0x5b2d26*/
}


// ==== 0x005B2D30  sub_5B2D30  this=-  sig=ida-proto ====
int sub_5B2D30()
{
  MEMORY[0xABEF70] = 0; /*0x5b2d32*/
  MEMORY[0xABEF72] = 0; /*0x5b2d38*/
  return 0; /*0x5b2d3e*/
}


// ==== 0x005B2D40  sub_5B2D40  this=-  sig=ida-proto ====
int sub_5B2D40()
{
  MEMORY[0xABEF90] = 0; /*0x5b2d42*/
  MEMORY[0xABEF94] = 0; /*0x5b2d47*/
  MEMORY[0xABEF98] = 0; /*0x5b2d4c*/
  return 0; /*0x5b2d51*/
}


// ==== 0x005B2D60  sub_5B2D60  this=-  sig=ida-proto ====
int sub_5B2D60()
{
  MEMORY[0xABEFC0] = 0; /*0x5b2d65*/
  MEMORY[0xABEFB8] = 128; /*0x5b2d6f*/
  MEMORY[0xABEFBC] = 128; /*0x5b2d74*/
  return 128; /*0x5b2d79*/
}


// ==== 0x005B2D80  sub_5B2D80  this=-  sig=ida-proto ====
int sub_5B2D80()
{
  MEMORY[0xABEF60] = 0; /*0x5b2d82*/
  MEMORY[0xABEF64] = 0; /*0x5b2d87*/
  MEMORY[0xABEF68] = 0; /*0x5b2d8c*/
  MEMORY[0xABEF6C] = 0; /*0x5b2d91*/
  return 0; /*0x5b2d96*/
}


// ==== 0x005B2DA0  MissionClass::Constructor  this=MissionClass  sig=csp ====
int __thiscall sub_5B2DA0(int this)
{
  #72 *v2; // ecx

  ObjectClass::ctor((_DWORD *)this); /*0x5b2da3*/
  *(_DWORD *)(this + 172) = -1; /*0x5b2dab*/
  *(_DWORD *)(this + 176) = -1; /*0x5b2db1*/
  *(_DWORD *)(this + 180) = -1; /*0x5b2db7*/
  *(_BYTE *)(this + 184) = 0; /*0x5b2dbf*/
  *(_DWORD *)(this + 188) = 0; /*0x5b2dc5*/
  *(_DWORD *)(this + 192) = 0; /*0x5b2dcb*/
  *(_DWORD *)(this + 196) = 0; /*0x5b2dd1*/
  v2 = MEMORY[0xA8ED84]; /*0x5b2dd7*/
  *(_DWORD *)(this + 208) = 0; /*0x5b2ddd*/
  *(_DWORD *)(this + 200) = v2; /*0x5b2de3*/
  *(_DWORD *)this = &MissionClass::`vftable'; /*0x5b2de9*/
  *(_DWORD *)(this + 4) = &MissionClass::`vftable'; /*0x5b2def*/
  *(_DWORD *)(this + 8) = &MissionClass::`vftable'; /*0x5b2df6*/
  *(_DWORD *)(this + 12) = &MissionClass::`vftable'; /*0x5b2dfd*/
  return this; /*0x5b2e06*/
}


// ==== 0x005B2E10  MissionClass::Return450A  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450A(#377 *this)
{
  return 450; /*0x5b2e15*/
}


// ==== 0x005B2E20  MissionClass::Return450B  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450B(#377 *this)
{
  return 450; /*0x5b2e25*/
}


// ==== 0x005B2E30  MissionClass::Return450C  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450C(#377 *this)
{
  return 450; /*0x5b2e35*/
}


// ==== 0x005B2E40  MissionClass::StubReturn450  this=MissionClass  sig=csp ====
int TechnoClass::_vt132()
{
  return 450; /*0x5b2e45*/
}


// ==== 0x005B2E50  MissionClass::StubReturn450  this=MissionClass  sig=csp ====
int Stub_ReturnE_NOTIMPL()
{
  return 450; /*0x5b2e55*/
}


// ==== 0x005B2E60  MissionClass::COMStub_Ret450_134  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::_vt134(#377 *this)
{
  return 450; /*0x5b2e65*/
}


// ==== 0x005B2E70  MissionClass::CheckState1  this=MissionClass  sig=csp ====
int TechnoClass::_vt135()
{
  return 450; /*0x5b2e75*/
}


// ==== 0x005B2E80  MissionClass::CheckState2  this=MissionClass  sig=csp ====
int TechnoClass::_vt136()
{
  return 450; /*0x5b2e85*/
}


// ==== 0x005B2E90  MissionClass::CheckMissionStatus  this=MissionClass  sig=csp ====
int Stub_ReturnE_NOTIMPL_2()
{
  return 450; /*0x5b2e95*/
}


// ==== 0x005B2EA0  MissionClass::COMStub_Ret450_138  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::_vt138(#377 *this)
{
  return 450; /*0x5b2ea5*/
}


// ==== 0x005B2EB0  MissionClass::COMStub_Ret450_139  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::_vt139(#377 *this)
{
  return 450; /*0x5b2eb5*/
}


// ==== 0x005B2EC0  MissionClass::COMStub_Ret450_140  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::_vt140(#377 *this)
{
  return 450; /*0x5b2ec5*/
}


// ==== 0x005B2ED0  MissionClass::Return450D  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450D(#377 *this)
{
  return 450; /*0x5b2ed5*/
}


// ==== 0x005B2EE0  MissionClass::Return450E  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450E(#377 *this)
{
  return 450; /*0x5b2ee5*/
}


// ==== 0x005B2EF0  MissionClass::GetMaxSize  this=MissionClass  sig=csp ====
int Stub_ReturnE_NOTIMPL_3()
{
  return 450; /*0x5b2ef5*/
}


// ==== 0x005B2F00  MissionClass::COMStub_Ret450_144  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::_vt144(#377 *this)
{
  return 450; /*0x5b2f05*/
}


// ==== 0x005B2F10  MissionClass::Return450G  this=MissionClass  sig=csp ====
int MissionClass_Return450G()
{
  return 450; /*0x5b2f15*/
}


// ==== 0x005B2F20  MissionClass::Return450H  this=MissionClass  sig=csp ====
int MissionClass_Return450H()
{
  return 450; /*0x5b2f25*/
}


// ==== 0x005B2F30  MissionClass::CheckMissionStatus2  this=MissionClass  sig=csp ====
int Stub_ReturnE_NOTIMPL_9()
{
  return 450; /*0x5b2f35*/
}


// ==== 0x005B2F40  MissionClass::Return450I  this=MissionClass  sig=csp ====
int MissionClass_Return450I()
{
  return 450; /*0x5b2f45*/
}


// ==== 0x005B2F50  MissionClass::Return450J  this=MissionClass  sig=csp ====
int MissionClass_Return450J()
{
  return 450; /*0x5b2f55*/
}


// ==== 0x005B2F60  MissionClass::COMStub_Ret450_150  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::_vt150(#377 *this)
{
  return 450; /*0x5b2f65*/
}


// ==== 0x005B2F70  MissionClass::COMStub_Ret450_151  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::_vt151(#377 *this)
{
  return 450; /*0x5b2f75*/
}


// ==== 0x005B2F80  MissionClass::Return450K  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450K(#377 *this)
{
  return 450; /*0x5b2f85*/
}


// ==== 0x005B2F90  MissionClass::Return450L  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450L(#377 *this)
{
  return 450; /*0x5b2f95*/
}


// ==== 0x005B2FA0  MissionClass::Return450F  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450F(#377 *this)
{
  return 450; /*0x5b2fa5*/
}


// ==== 0x005B2FB0  MissionClass::Return450M  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450M(#377 *this)
{
  return 450; /*0x5b2fb5*/
}


// ==== 0x005B2FC0  MissionClass::Return450N  this=MissionClass  sig=csp ====
int __thiscall MissionClass::Return450N(#377 *this)
{
  return 450; /*0x5b2fc5*/
}


// ==== 0x005B2FD0  MissionClass::SetState  this=MissionClass  sig=csp ====
int __thiscall MissionClass::SetState(#377 *this)
{
  int result; // eax
  _DWORD *v2; // ecx
  int v3; // [esp+4h] [ebp-8h]
  int v4; // [esp+10h] [ebp+4h]

  result = v4; /*0x5b2fdc*/
  if ( this->q02B != 28 || v4 != 5 ) /*0x5b2fe5*/
  {
    this->q02B = v4; /*0x5b2fe9*/
    this->queuedMission = -1; /*0x5b2fef*/
    this->missionQueued = 0; /*0x5b2ff9*/
    this->missionStatus = 0; /*0x5b2fff*/
    this->nextObject = MEMORY[0xA8ED84]; /*0x5b300a*/
    this->q031 = 0; /*0x5b3010*/
    v2 = (_DWORD *)((char *)this + 200); /*0x5b301b*/
    *v2 = MEMORY[0xA8ED84]; /*0x5b3021*/
    v2[1] = v3; /*0x5b3027*/
    v2[2] = 0; /*0x5b302a*/
    return v3; /*0x5b3023*/
  }
  return result; /*0x5b302d*/
}


// ==== 0x005B3040  MissionClass::GetPrimaryOrFallback  this=MissionClass  sig=csp ====
int __thiscall MissionClass::GetPrimaryOrFallback(#377 *this)
{
  int result; // eax

  result = this->q02B; /*0x5b3040*/
  if ( result == -1 ) /*0x5b3049*/
    return this->queuedMission; /*0x5b304b*/
  return result; /*0x5b3051*/
}


// ==== 0x005B3060  MissionClass::ProcessCloaking  this=MissionClass  sig=csp ====
char __thiscall ObjectClass_ProcessCloaking(int this)
{
  int v2; // eax
  int v3; // edx
  _DWORD *v4; // esi
  int v6; // [esp+Ch] [ebp-8h]

  ObjectClass::DetectCloaked((int *)this); /*0x5b3067*/
  LOBYTE(v2) = *(_BYTE *)(this + 144); /*0x5b306c*/
  if ( !(_BYTE)v2 ) /*0x5b3074*/
    return v2; /*0x5b3074*/
  v3 = *(_DWORD *)(this + 200); /*0x5b307a*/
  v2 = *(_DWORD *)(this + 208); /*0x5b3080*/
  v4 = (_DWORD *)(this + 200); /*0x5b3086*/
  if ( v3 == -1 ) /*0x5b308f*/
    goto LABEL_5; /*0x5b308f*/
  if ( (int)MEMORY[0xA8ED84] - v3 < v2 ) /*0x5b309b*/
  {
    v2 -= (int)MEMORY[0xA8ED84] - v3; /*0x5b309d*/
LABEL_5:
    if ( v2 ) /*0x5b30a1*/
      return v2; /*0x5b30a1*/
  }
  v2 = *(_DWORD *)(this + 108); /*0x5b30a7*/
  if ( v2 > 0 ) /*0x5b30ac*/
  {
    switch ( *(_DWORD *)(this + 172) ) /*0x5b30c1*/
    {
      case 1: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(this->hasParachute)(this); /*0x5b3176*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b3183*/
        *(_DWORD *)(this + 204) = v6; /*0x5b3189*/
        *(_DWORD *)(this + 208) = v2; /*0x5b318c*/
        break; /*0x5b3193*/
      case 2: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(this->q08B)(this); /*0x5b3352*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b335f*/
        *(_DWORD *)(this + 204) = v6; /*0x5b3365*/
        *(_DWORD *)(this + 208) = v2; /*0x5b3368*/
        break; /*0x5b336f*/
      case 4: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(this->onBridge)(this); /*0x5b3198*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b31a5*/
        *(_DWORD *)(this + 204) = v6; /*0x5b31ab*/
        *(_DWORD *)(this + 208) = v2; /*0x5b31ae*/
        break; /*0x5b31b5*/
      case 5: /*0x5b30c1*/
      case 6: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(this->q21C)(this); /*0x5b32ec*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b32f9*/
        *(_DWORD *)(this + 204) = v6; /*0x5b32ff*/
        *(_DWORD *)(this + 208) = v2; /*0x5b3302*/
        break; /*0x5b3309*/
      case 7: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(this->isAliveFlag)(this); /*0x5b3110*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b311d*/
        *(_DWORD *)(this + 204) = v6; /*0x5b3123*/
        *(_DWORD *)(this + 208) = v2; /*0x5b3126*/
        break; /*0x5b312d*/
      case 8: /*0x5b30c1*/
      case 0x11: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(this->q214)(this); /*0x5b330e*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b331b*/
        *(_DWORD *)(this + 204) = v6; /*0x5b3321*/
        *(_DWORD *)(this + 208) = v2; /*0x5b3324*/
        break; /*0x5b332b*/
      case 9: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(this->q218)(this); /*0x5b3330*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b333d*/
        *(_DWORD *)(this + 204) = v6; /*0x5b3343*/
        *(_DWORD *)(this + 208) = v2; /*0x5b3346*/
        break; /*0x5b334d*/
      case 0xA: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 548))(this); /*0x5b31ba*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b31c7*/
        *(_DWORD *)(this + 204) = v6; /*0x5b31cd*/
        *(_DWORD *)(this + 208) = v2; /*0x5b31d0*/
        break; /*0x5b31d7*/
      case 0xB: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(this->q220)(this); /*0x5b31dc*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b31e9*/
        *(_DWORD *)(this + 204) = v6; /*0x5b31ef*/
        *(_DWORD *)(this + 208) = v2; /*0x5b31f2*/
        break; /*0x5b31f9*/
      case 0xC: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(this->isFallingDown)(this); /*0x5b31fe*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b320b*/
        *(_DWORD *)(this + 204) = v6; /*0x5b3211*/
        *(_DWORD *)(this + 208) = v2; /*0x5b3214*/
        break; /*0x5b321b*/
      case 0xD: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(this->wasFallingDown)(this); /*0x5b3220*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b322d*/
        *(_DWORD *)(this + 204) = v6; /*0x5b3233*/
        *(_DWORD *)(this + 208) = v2; /*0x5b3236*/
        break; /*0x5b323d*/
      case 0xE: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(this->isSelected)(this); /*0x5b3242*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b324f*/
        *(_DWORD *)(this + 204) = v6; /*0x5b3255*/
        *(_DWORD *)(this + 208) = v2; /*0x5b3258*/
        break; /*0x5b325f*/
      case 0xF: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(this->q08A)(this); /*0x5b3374*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b3381*/
        *(_DWORD *)(this + 204) = v6; /*0x5b3387*/
        *(_DWORD *)(this + 208) = v2; /*0x5b338a*/
        break; /*0x5b3391*/
      case 0x10: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(this->isBomb)(this); /*0x5b3264*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b3271*/
        *(_DWORD *)(this + 204) = v6; /*0x5b3277*/
        *(_DWORD *)(this + 208) = v2; /*0x5b327a*/
        break; /*0x5b3281*/
      case 0x12: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(this->alignmentPadding91)(this); /*0x5b3132*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b313f*/
        *(_DWORD *)(this + 204) = v6; /*0x5b3145*/
        *(_DWORD *)(this + 208) = v2; /*0x5b3148*/
        break; /*0x5b314f*/
      case 0x13: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 584))(this); /*0x5b3154*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b3161*/
        *(_DWORD *)(this + 204) = v6; /*0x5b3167*/
        *(_DWORD *)(this + 208) = v2; /*0x5b316a*/
        break; /*0x5b3171*/
      case 0x14: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 588))(this); /*0x5b3286*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b3293*/
        *(_DWORD *)(this + 204) = v6; /*0x5b3299*/
        *(_DWORD *)(this + 208) = v2; /*0x5b329c*/
        break; /*0x5b32a3*/
      case 0x15: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 600))(this); /*0x5b3396*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b33a3*/
        *(_DWORD *)(this + 204) = v6; /*0x5b33a9*/
        *(_DWORD *)(this + 208) = v2; /*0x5b33ac*/
        break; /*0x5b33b3*/
      case 0x16: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(this->lastLayer)(this); /*0x5b32ca*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b32d7*/
        *(_DWORD *)(this + 204) = v6; /*0x5b32dd*/
        *(_DWORD *)(this + 208) = v2; /*0x5b32e0*/
        break; /*0x5b32e7*/
      case 0x17: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(this->inOpenToppedTransport)(this); /*0x5b30ee*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b30fb*/
        *(_DWORD *)(this + 204) = v6; /*0x5b3101*/
        *(_DWORD *)(this + 208) = v2; /*0x5b3104*/
        break; /*0x5b310b*/
      case 0x18: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 596))(this); /*0x5b32a8*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b32b5*/
        *(_DWORD *)(this + 204) = v6; /*0x5b32bb*/
        *(_DWORD *)(this + 208) = v2; /*0x5b32be*/
        break; /*0x5b32c5*/
      case 0x19: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 604))(this); /*0x5b33b8*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b33c5*/
        *(_DWORD *)(this + 204) = v6; /*0x5b33cb*/
        *(_DWORD *)(this + 208) = v2; /*0x5b33ce*/
        break; /*0x5b33d5*/
      case 0x1A: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(this->isInLogic)(this); /*0x5b33da*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b33e7*/
        *(_DWORD *)(this + 204) = v6; /*0x5b33ed*/
        *(_DWORD *)(this + 208) = v2; /*0x5b33f0*/
        break; /*0x5b33f7*/
      case 0x1B: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(this->isVisible)(this); /*0x5b33fc*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b3409*/
        *(_DWORD *)(this + 204) = v6; /*0x5b340f*/
        *(_DWORD *)(this + 208) = v2; /*0x5b3412*/
        break; /*0x5b3419*/
      case 0x1C: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(this->alignmentPadding99)(this); /*0x5b3462*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b346f*/
        *(_DWORD *)(this + 204) = v6; /*0x5b3475*/
        *(_DWORD *)(this + 208) = v2; /*0x5b3478*/
        break; /*0x5b347f*/
      case 0x1E: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 620))(this); /*0x5b341e*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b342b*/
        *(_DWORD *)(this + 204) = v6; /*0x5b3431*/
        *(_DWORD *)(this + 208) = v2; /*0x5b3434*/
        break; /*0x5b343b*/
      case 0x1F: /*0x5b30c1*/
        v2 = (*(int (__thiscall **)(int))(this->q270)(this); /*0x5b3440*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b344d*/
        *(_DWORD *)(this + 204) = v6; /*0x5b3453*/
        *(_DWORD *)(this + 208) = v2; /*0x5b3456*/
        break; /*0x5b345d*/
      default:
        v2 = (*(int (__thiscall **)(int))(this->inLimbo)(this); /*0x5b34c8*/
        *v4 = MEMORY[0xA8ED84]; /*0x5b34d4*/
        *(_DWORD *)(this + 204) = v6; /*0x5b34da*/
        *(_DWORD *)(this + 208) = v2; /*0x5b34dd*/
        break; /*0x5b34dd*/
    }
  }
  return v2; /*0x5b30d8*/
}


// ==== 0x005B3570  MissionClass::AdvanceState  this=MissionClass  sig=csp ====
int __thiscall MissionClass::AdvanceState(#377 *this)
{
  int result; // eax
  wchar_t *v2; // eax
  int v3; // [esp+4h] [ebp-8h]

  result = this->queuedMission; /*0x5b3570*/
  if ( result == -1 ) /*0x5b357c*/
  {
    LOBYTE(result) = 0; /*0x5b35cc*/
  }
  else
  {
    this->q02B = result; /*0x5b357f*/
    this->queuedMission = -1; /*0x5b3585*/
    v2 = MEMORY[0xA8ED84]; /*0x5b358f*/
    this->missionStatus = 0; /*0x5b359c*/
    this->missionTimer = v2; /*0x5b35a2*/
    this->q033 = v3; /*0x5b35a8*/
    this->attachedTag = 0; /*0x5b35ab*/
    result = (int)MEMORY[0xA8ED84]; /*0x5b35ae*/
    this->nextObject = MEMORY[0xA8ED84]; /*0x5b35b3*/
    this->q031 = 0; /*0x5b35b9*/
    this->missionQueued = 0; /*0x5b35bf*/
    LOBYTE(result) = 1; /*0x5b35c5*/
  }
  return result; /*0x5b35c8*/
}


// ==== 0x005B35E0  MissionClass::MissionDispatch  this=MissionClass  sig=csp ====
int __thiscall BuildingClass::MissionDispatch(#377 *this)
{
  int result; // eax
  int v3; // ecx
  int v4; // ecx
  int v5; // [esp+8h] [ebp+4h]
  char v6; // [esp+Ch] [ebp+8h]

  result = v5; /*0x5b35e0*/
  v3 = this->q02B; /*0x5b35e7*/
  if ( (v3 != 28 || v5 != 5) && v3 != 19 ) /*0x5b35fa*/
  {
    if ( v5 != -1 ) /*0x5b35ff*/
    {
      if ( v3 != v5 || (v4 = this->queuedMission, v4 != v5) && v4 != -1 ) /*0x5b3612*/
      {
        this->queuedMission = v5; /*0x5b3614*/
        this->missionQueued = 0; /*0x5b361a*/
      }
    }
    LOBYTE(result) = v6; /*0x5b3621*/
    if ( v6 ) /*0x5b3627*/
    {
      result = (*(int (__thiscall **)(#377 *))(this->q200)(this); /*0x5b362d*/
      if ( (_BYTE)result ) /*0x5b3635*/
        return (*(int (__thiscall **)(#377 *))(this->q07B)(this); /*0x5b363b*/
    }
  }
  return result; /*0x5b3641*/
}


// ==== 0x005B3650  MissionClass::COMStub_125  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::COMStub_125(int this, int a2, int a3, TechnoClass *aP3)
{
  int result; // eax
  int v5; // edx

  result = *(_DWORD *)(this + 172); /*0x5b3650*/
  if ( (result != 28 || a2 != 5) && result != 19 ) /*0x5b3668*/
  {
    v5 = *(_DWORD *)(this + 180); /*0x5b366a*/
    if ( v5 == -1 ) /*0x5b3673*/
    {
      *(_DWORD *)(this + 176) = result; /*0x5b368c*/
      *(_DWORD *)(this + 172) = a2; /*0x5b3692*/
    }
    else
    {
      *(_DWORD *)(this + 172) = a2; /*0x5b3675*/
      *(_DWORD *)(this + 176) = v5; /*0x5b367b*/
    }
    *(_BYTE *)(this + 184) = 0; /*0x5b3681*/
  }
  return result; /*0x5b3688*/
}


// ==== 0x005B36B0  MissionClass::COMStub_126  this=MissionClass  sig=csp ====
char __thiscall AbstractClass::_vt126(int this)
{
  int v1; // eax

  v1 = *(_DWORD *)(this + 176); /*0x5b36b0*/
  if ( v1 == -1 ) /*0x5b36b9*/
    return 0; /*0x5b36d5*/
  *(_DWORD *)(this + 172) = v1; /*0x5b36bb*/
  *(_DWORD *)(this + 176) = -1; /*0x5b36c1*/
  *(_BYTE *)(this + 184) = 0; /*0x5b36cb*/
  return 1; /*0x5b36d4*/
}


// ==== 0x005B36E0  IPersistStream::SetField  this=IPersistStream  sig=ida-proto ====
char __fastcall IPersistStream::SetField(int a1)
{
  if ( a1 == -1 ) /*0x5b36e3*/
    return 1; /*0x5b36e5*/
  else
    return MEMORY[0xA8E3AE][32 * a1]; /*0x5b36eb*/
}


// ==== 0x005B3700  MissionClass::FindName  this=MissionClass  sig=csp ====
_BYTE *__thiscall MissionClass::FindName(_BYTE *this)
{
  this->vtable2 = 0; /*0x5b3706*/
  this->abstractFlags = 0; /*0x5b3709*/
  this->referenceCount = 0; /*0x5b370c*/
  this->nextArrayIndex = 1; /*0x5b370f*/
  this->vtable3 = 1; /*0x5b3712*/
  this->objectTypeFlags = 1; /*0x5b3715*/
  this->vtable2 = -755914244; /*0x5b3722*/
  this->nextArrayIndex = -755914244; /*0x5b3725*/
  *(_DWORD *)this = -1; /*0x5b3728*/
  this->abstractFlags = 1066426957; /*0x5b372e*/
  this->referenceCount = 1066426957; /*0x5b3731*/
  return this; /*0x5b3734*/
}


// ==== 0x005B3760  MissionClass::LoadFromINI  this=MissionClass  sig=csp ====
char __thiscall MissionClass::LoadFromINI(int *this, _DWORD *a2)
{
  char *v3; // eax
  char *v4; // eax
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  char *v8; // eax
  char *v9; // eax
  char *v10; // eax
  double Double_Overwrite; // st7
  int v12; // eax
  char *v13; // eax
  double v14; // st7
  int v15; // ecx

  INIClass::ResetSection(a2); /*0x5b376a*/
  if ( *this == -1 ) /*0x5b3774*/
    v3 = MEMORY[0x817474]; /*0x5b3776*/
  else
    v3 = off_816CAC[*this]; /*0x5b377d*/
  if ( !INIClass::BinarySearchSection((int)a2, (unsigned __int8 *)v3) ) /*0x5b3787*/
    return 0; /*0x5b3906*/
  if ( *this == -1 ) /*0x5b379e*/
    v4 = MEMORY[0x817474]; /*0x5b37a0*/
  else
    v4 = off_816CAC[*this]; /*0x5b37a7*/
  this->vtable2 = INIClass::ReadBool_Overwrite( /*0x5b37bf*/
                           (int)a2,
                           (unsigned __int8 *)v4,
                           (unsigned __int8 *)MEMORY[0x82C2B8],
                           this->vtable2);
  if ( *this == -1 ) /*0x5b37c7*/
    v5 = MEMORY[0x817474]; /*0x5b37c9*/
  else
    v5 = off_816CAC[*this]; /*0x5b37d0*/
  this->abstractFlags = INIClass::ReadBool_Overwrite( /*0x5b37e8*/
                           (int)a2,
                           (unsigned __int8 *)v5,
                           (unsigned __int8 *)MEMORY[0x82C2B0],
                           this->abstractFlags);
  if ( *this == -1 ) /*0x5b37f0*/
    v6 = MEMORY[0x817474]; /*0x5b37f2*/
  else
    v6 = off_816CAC[*this]; /*0x5b37f9*/
  this->nextArrayIndex = INIClass::ReadBool_Overwrite( /*0x5b3811*/
                           (int)a2,
                           (unsigned __int8 *)v6,
                           (unsigned __int8 *)MEMORY[0x82C2A4],
                           this->nextArrayIndex);
  if ( *this == -1 ) /*0x5b3819*/
    v7 = MEMORY[0x817474]; /*0x5b381b*/
  else
    v7 = off_816CAC[*this]; /*0x5b3822*/
  this->referenceCount = INIClass::ReadBool_Overwrite( /*0x5b383a*/
                           (int)a2,
                           (unsigned __int8 *)v7,
                           (unsigned __int8 *)MEMORY[0x82C298],
                           this->referenceCount);
  if ( *this == -1 ) /*0x5b3842*/
    v8 = MEMORY[0x817474]; /*0x5b3844*/
  else
    v8 = off_816CAC[*this]; /*0x5b384b*/
  this->vtable3 = INIClass::ReadBool_Overwrite( /*0x5b3863*/
                           (int)a2,
                           (unsigned __int8 *)v8,
                           (unsigned __int8 *)MEMORY[0x82C28C],
                           this->vtable3);
  if ( *this == -1 ) /*0x5b386b*/
    v9 = MEMORY[0x817474]; /*0x5b386d*/
  else
    v9 = off_816CAC[*this]; /*0x5b3874*/
  this->objectTypeFlags = INIClass::ReadBool_Overwrite( /*0x5b388c*/
                           (int)a2,
                           (unsigned __int8 *)v9,
                           (unsigned __int8 *)stru_82C284,
                           this->objectTypeFlags);
  if ( *this == -1 ) /*0x5b3894*/
    v10 = MEMORY[0x817474]; /*0x5b3896*/
  else
    v10 = off_816CAC[*this]; /*0x5b389d*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x5b38b4*/
                       (int)a2,
                       (unsigned __int8 *)v10,
                       (unsigned __int8 *)MEMORY[0x8185A4],
                       *((double *)this + 2));
  v12 = *this; /*0x5b38b9*/
  *((double *)this + 2) = Double_Overwrite; /*0x5b38bb*/
  if ( v12 == -1 ) /*0x5b38c1*/
    v13 = MEMORY[0x817474]; /*0x5b38c3*/
  else
    v13 = off_816CAC[v12]; /*0x5b38ca*/
  v14 = INIClass::ReadDouble_Overwrite((int)a2, (unsigned __int8 *)v13, (unsigned __int8 *)aAarate, 0.0); /*0x5b38dd*/
  *((double *)this + 3) = v14; /*0x5b38e2*/
  if ( v14 == 0.0 ) /*0x5b38f0*/
  {
    v15 = this->abstractFlags; /*0x5b38f5*/
    this->nextArrayIndex = this->vtable2; /*0x5b38f8*/
    this->referenceCount = v15; /*0x5b38fb*/
  }
  return 1; /*0x5b38fe*/
}


// ==== 0x005B3910  ObjectClass::LookupWaypointName  this=Coord  sig=csp ====
int __thiscall LookupWaypointName(void *this)
{
  int v2; // edi
  const void **v3; // esi

  if ( !this ) /*0x5b3917*/
    return -1; /*0x5b393c*/
  v2 = 0; /*0x5b3919*/
  v3 = (const void **)&off_816CAC; /*0x5b391b*/
  while ( _strcmpi(*v3, this) ) /*0x5b392e*/
  {
    ++v3; /*0x5b3930*/
    ++v2; /*0x5b3933*/
    if ( (int)v3 >= (int)aSpyplaneOverfl ) /*0x5b393a*/
      return -1; /*0x5b393a*/
  }
  return v2; /*0x5b393c*/
}


// ==== 0x005B3950  FromNameIndex  this=-  sig=csp ====
char *__fastcall Name_FromIndex(int a1)
{
  if ( a1 == -1 ) /*0x5b3953*/
    return MEMORY[0x817474]; /*0x5b395d*/
  else
    return off_816CAC[a1]; /*0x5b3955*/
}


// ==== 0x005B3970  AbstractClass::COMStub_13  this=MissionClass  sig=csp ====
int __thiscall AbstractClass::COMStub_13(int this, AbstractClass *aP1)
{
  HouseClass::ProcessPower((#374 *)this); /*0x5b3979*/
  Power::TimerProcess(aP1); /*0x5b3987*/
  Power::TimerProcess(aP1); /*0x5b3995*/
  Power::TimerProcess(aP1); /*0x5b39a3*/
  Power::TimerProcess(aP1); /*0x5b39b1*/
  Power::TimerProcess(aP1); /*0x5b39dc*/
  return Power::TimerProcess(aP1); /*0x5b39ef*/
}


// ==== 0x005B3A00  MissionClass::GetMissionControl  this=TechnoClass  sig=csp ====
char *__thiscall MissionClass_GetMissionControl(_DWORD *this)
{
  return (char *)&MEMORY[0xA8E3A8] + 32 * this->currentMission; /*0x5b3a0e*/
}


// ==== 0x005B3A10  MissionClass::HasValidTarget  this=MissionClass  sig=csp ====
int __thiscall MissionClass::HasValidTarget(#377 *this)
{
  return this->fallRate != -1; /*0x5b3a1e*/
}


// ==== 0x005B3A50  ObjectClass::StubReturnFalse  this=ObjectClass  sig=csp ====
int __thiscall IPersistStream::StubReturnFalse(#374 *this)
{
  int result; // eax

  return result; /*0x5b3a50*/
}


// ==== 0x005B3A60  AbstractClass::getWeaponRange  this=MissionClass  sig=csp ====
MissionClass *__thiscall AbstractClass::getWeaponRange(_DWORD *Block, char a2)
{
  *Block = &MissionClass::`vftable'; /*0x5b3a63*/
  *(Block + 1) = &MissionClass::`vftable'; /*0x5b3a69*/
  *(Block + 2) = &MissionClass::`vftable'; /*0x5b3a70*/
  *(Block + 3) = &vt_MissionClass; /*0x5b3a77*/
  ObjectClass::Dtor(Block); /*0x5b3a7e*/
  if ( (a2 & 1) != 0 ) /*0x5b3a88*/
    __3_YAXPAX_Z(Block); /*0x5b3a8b*/
  return (MissionClass *)Block; /*0x5b3a95*/
}


// ==== 0x005B3AA0  sub_5B3AA0  this=-  sig=ida-proto ====
int sub_5B3AA0()
{
  MEMORY[0xABEFF8] = 0; /*0x5b3aa2*/
  MEMORY[0xABEFFC] = 0; /*0x5b3aa7*/
  MEMORY[0xABF000] = 0; /*0x5b3aac*/
  MEMORY[0xABF004] = 0; /*0x5b3ab1*/
  return 0; /*0x5b3ab6*/
}


// ==== 0x005B3AC0  sub_5B3AC0  this=-  sig=ida-proto ====
int sub_5B3AC0()
{
  MEMORY[0xABEFE4] = 0; /*0x5b3acc*/
  MEMORY[0xABEFDC] = (int)&vt_GenericNode; /*0x5b3ad2*/
  MEMORY[0xABEFE8] = (int)&vt_GenericNode; /*0x5b3ad7*/
  MEMORY[0xABEFEC] = 0; /*0x5b3adc*/
  MEMORY[0xABEFF0] = (int)&MEMORY[0xABEFDC]; /*0x5b3ae2*/
  MEMORY[0xABEFE0] = (int)&MEMORY[0xABEFE8]; /*0x5b3aec*/
  MEMORY[0xABEFD8] = (int)&vt_List_MixFileClass; /*0x5b3af6*/
  return atexit(sub_5B3B10); /*0x5b3b06*/
}


// ==== 0x005B3B10  sub_5B3B10  this=-  sig=ida-proto ====
void __cdecl sub_5B3B10()
{
  int v0; // edx
  int v1; // edi
  int v2; // ecx
  int v3; // esi
  _DWORD *v4; // eax

  if ( (MEMORY[0xABF008] & 1) == 0 ) /*0x5b3b1b*/
  {
    MEMORY[0xABF008] |= 1u; /*0x5b3b25*/
    MEMORY[0xABEFD8] = (int)&vt_GenericList; /*0x5b3b2b*/
LABEL_3:
    v0 = MEMORY[0xABEFE0]; /*0x5b3b37*/
    while ( MEMORY[0xABEFE0] /*0x5b3b4d*/
         && *(_DWORD *)(MEMORY[0xABEFE0] + 4)
         && *(_DWORD *)(MEMORY[0xABEFE0] + 8)
         && MEMORY[0xABEFE0] )
    {
      v1 = *(_DWORD *)(MEMORY[0xABEFE0] + 4); /*0x5b3b4f*/
      v2 = MEMORY[0xABEFE0] + 4; /*0x5b3b52*/
      if ( v1 ) /*0x5b3b57*/
      {
        v3 = *(_DWORD *)(MEMORY[0xABEFE0] + 8); /*0x5b3b59*/
        v4 = (_DWORD *)(MEMORY[0xABEFE0] + 8); /*0x5b3b5c*/
        if ( v3 ) /*0x5b3b61*/
        {
          *(_DWORD *)(v3 + 4) = v1; /*0x5b3b63*/
          *(_DWORD *)(*(_DWORD *)v2 + 8) = *v4; /*0x5b3b6a*/
          *v4 = 0; /*0x5b3b6d*/
          *(_DWORD *)v2 = 0; /*0x5b3b6f*/
          goto LABEL_3; /*0x5b3b71*/
        }
      }
    }
    MEMORY[0xABEFE8] = (int)&vt_GenericNode; /*0x5b3b7f*/
    if ( &MEMORY[0xABEFE8] && MEMORY[0xABEFEC] && MEMORY[0xABEFF0] ) /*0x5b3b98*/
    {
      *(_DWORD *)(MEMORY[0xABEFF0] + 4) = MEMORY[0xABEFEC]; /*0x5b3b9a*/
      *(_DWORD *)(MEMORY[0xABEFEC] + 8) = MEMORY[0xABEFF0]; /*0x5b3ba9*/
      v0 = MEMORY[0xABEFE0]; /*0x5b3bac*/
      MEMORY[0xABEFF0] = 0; /*0x5b3bb2*/
      MEMORY[0xABEFEC] = 0; /*0x5b3bb8*/
    }
    MEMORY[0xABEFDC] = (int)&vt_GenericNode; /*0x5b3bc3*/
    if ( &MEMORY[0xABEFDC] && v0 && MEMORY[0xABEFE4] ) /*0x5b3bda*/
    {
      *(_DWORD *)(MEMORY[0xABEFE4] + 4) = v0; /*0x5b3bdc*/
      *(_DWORD *)(MEMORY[0xABEFE0] + 8) = MEMORY[0xABEFE4]; /*0x5b3beb*/
      MEMORY[0xABEFE4] = 0; /*0x5b3bee*/
      MEMORY[0xABEFE0] = 0; /*0x5b3bf4*/
    }
  }
}


// ==== 0x005B3C20  MixFileClass::FromFile  this=MixFileClass  sig=csp ====
_DWORD *__thiscall MixFileClass::FromFile(_DWORD *this, MixFileClass *aP1, int a3)
{
  int *v4; // edi
  bool v5; // zf
  bool v6; // al
  int v7; // eax
  MixHeaderData *v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // edx
  int eax12; // eax
  MixHeaderData *v13; // edi
  _BYTE v16[6]; // [esp+10h] [ebp-1DCh] BYREF
  _DWORD v17[4]; // [esp+18h] [ebp-1D4h] BYREF
  char v18; // [esp+28h] [ebp-1C4h]
  _WORD Src[4]; // [esp+2Ch] [ebp-1C0h] BYREF
  _DWORD (__stdcall **v20)(_DWORD); // [esp+34h] [ebp-1B8h]
  _DWORD v21[22]; // [esp+3Ch] [ebp-1B0h] BYREF
  _BYTE v22[12]; // [esp+94h] [ebp-158h] BYREF
  int v23; // [esp+A0h] [ebp-14Ch]
  int var144[5]; // [esp+A8h] [ebp-144h] BYREF
  MixHeaderData *v24; // [esp+BCh] [ebp-130h] BYREF
  void *Block; // [esp+C8h] [ebp-124h]

  this->Previous = 0; /*0x5b3c31*/
  this->Blowfish = 0; /*0x5b3c34*/
  this->CountFiles = 0; /*0x5b3c37*/
  this->FileSize = 0; /*0x5b3c3a*/
  *((_BYTE *)this + 17) = 0; /*0x5b3c3d*/
  *((_BYTE *)this + 18) = 0; /*0x5b3c40*/
  this->FileStartOffset = 0; /*0x5b3c43*/
  this->Headers = 0; /*0x5b3c46*/
  this->q01C = 0; /*0x5b3c49*/
  this->q020 = 0; /*0x5b3c4c*/
  this->MixFileClass_field_24 = 0; /*0x5b3c4f*/
  *this = &vt_MixFileClass; /*0x5b3c52*/
  v20 = &CD::`vftable'; /*0x5b3c5d*/
  if ( !(unsigned __int8)CD::`vftable'(dword_81C1D0) ) /*0x5b3c66*/
  {
    GameClass::Shutdown(); /*0x5b3c70*/
    ExitProgram((void *)1); /*0x5b3c7a*/
  }
  CCFileClass::Construct(v21, aP1->__pad_0); /*0x5b3c8b*/
  this->CountFiles = _strdup((const char *)v21[6]); /*0x5b3c9d*/
  v17[1] = 0; /*0x5b3cb2*/
  v17[2] = 0; /*0x5b3cb6*/
  v17[3] = v21; /*0x5b3cba*/
  v18 = 0; /*0x5b3cbe*/
  v17[0] = &vt_FileStraw; /*0x5b3cc2*/
  PKStrawClass::Initialize((int)var144, 1, (Straw *)&MEMORY[0xA8D63C].__pad_1140[52]); /*0x5b3cca*/
  v4 = v17; /*0x5b3cd4*/
  if ( !CCFileClass::Open(v21, 0) ) /*0x5b3cd8*/
    goto LABEL_10; /*0x5b3cd8*/
  (*(void (__thiscall **)(_DWORD *, _WORD *, int))(v17[0] + 8))(v17, Src, 4); /*0x5b3cf4*/
  if ( Src[0] ) /*0x5b3cfc*/
  {
    memcpy(v16, Src, 4u); /*0x5b3d5b*/
    (*(void (__thiscall **)(_DWORD *, _BYTE *, int))(v17[0] + 8))(v17, &v16[4], 2); /*0x5b3d72*/
  }
  else
  {
    v6 = (Src[1] & 2) != 0; /*0x5b3d09*/
    v5 = (Src[1] & 2) == 0; /*0x5b3d09*/
    this->FileSize = Src[1] & 1; /*0x5b3d0b*/
    *((_BYTE *)this + 17) = v6; /*0x5b3d0e*/
    if ( !v5 ) /*0x5b3d11*/
    {
      PKStrawClass::SetSource((int)var144, a3); /*0x5b3d22*/
      PKStrawClass::RelayBlowfishKey(var144, (int)v17); /*0x5b3d33*/
      v4 = var144; /*0x5b3d38*/
    }
    (*(void (__thiscall **)(int *, _BYTE *, int))(*v4 + 8))(v4, v16, 6); /*0x5b3d4a*/
  }
  v7 = *(__int16 *)v16; /*0x5b3d75*/
  v8 = *(MixHeaderData **)&v16[2]; /*0x5b3d7a*/
  this->FileStartOffset = *(__int16 *)v16; /*0x5b3d7e*/
  this->Headers = v8; /*0x5b3d84*/
  v9 = __2_YAPAXI_Z(12 * v7); /*0x5b3d8b*/
  this->q020 = v9; /*0x5b3d95*/
  if ( v9 ) /*0x5b3d98*/
  {
    (*(void (__thiscall **)(int *, int, int))(*v4 + 8))(v4, v9, 12 * this->FileStartOffset); /*0x5b3dc8*/
    v10 = BufferIOFileClass::Seek(v21, 0, 1u); /*0x5b3dd2*/
    this->q01C = v21[3] + v10; /*0x5b3ddf*/
    v11 = (int)*(&g_MatrixTransformState + 120); /*0x5b3de2*/
    MixFileClass::LinkIntoPool(this); /*0x5b3de8*/
    v12 = *(_DWORD *)(v11 + 4); /*0x5b3ded*/
    this->Blowfish = v11; /*0x5b3df0*/
    this->Previous = v12; /*0x5b3df3*/
    eax12 = *(_DWORD *)(v11 + 4); /*0x5b3df6*/
    if ( eax12 ) /*0x5b3dfb*/
      *(_DWORD *)(eax12 + 8) = this; /*0x5b3dfd*/
    *(_DWORD *)(v11 + 4) = this; /*0x5b3e00*/
    v24 = (MixHeaderData *)&vt_BlowStraw; /*0x5b3e0c*/
    v13 = (MixHeaderData *)Block; /*0x5b3e17*/
    if ( Block ) /*0x5b3e19*/
    {
      COMObject::Release((int *)Block); /*0x5b3e1b*/
      __3_YAXPAX_Z(v13); /*0x5b3e21*/
    }
  }
  else
  {
LABEL_10:
    v24 = (MixHeaderData *)&vt_BlowStraw; /*0x5b3da1*/
    if ( Block ) /*0x5b3dae*/
      MixFileClass::UnlinkFromPool((int *)Block, 1); /*0x5b3db2*/
  }
  Block = 0; /*0x5b3e30*/
  Straw::Dtor((int *)&v24); /*0x5b3e37*/
  Straw::Dtor(var144); /*0x5b3e43*/
  FileStraw::Destructor((int)v17); /*0x5b3e4c*/
  v21[0] = &vt_CCFileClass; /*0x5b3e58*/
  v23 = 0; /*0x5b3e60*/
  Vector::Clear((int)v22); /*0x5b3e67*/
  v21[0] = &off_7E1668; /*0x5b3e70*/
  BufferIOFileClass::Dtor(v21); /*0x5b3e78*/
  return this; /*0x5b3e7f*/
}


// ==== 0x005B3E90  ObjectClass::method_5B3E90  this=ObjectClass  sig=csp ====
char __thiscall sub_5B3E90(void *this)
{
  int i; // esi
  ObjectClass Filename; // [esp+8h] [ebp-304h] BYREF
  char Ext[256]; // [esp+108h] [ebp-204h] BYREF
  char Buffer[260]; // [esp+208h] [ebp-104h] BYREF

  for ( i = (int)*(&g_MatrixTransformState + 116); ; i = *(_DWORD *)(i + 4) ) /*0x5b3e97*/
  {
    if ( !i || !*(_DWORD *)(i + 4) || !*(_DWORD *)(i + 8) ) /*0x5b3eb3*/
      return 0; /*0x5b3f42*/
    _splitpath(*(const char **)(i + 12), 0, 0, &Filename, Ext); /*0x5b3ed3*/
    _makepath(Buffer, 0, 0, &Filename, Ext); /*0x5b3ef1*/
    if ( !_strcmpi(Buffer, this) ) /*0x5b3eff*/
      break; /*0x5b3eff*/
  }
  if ( *(_DWORD *)(i + 36) ) /*0x5b3f14*/
  {
    if ( *(_BYTE *)(i + 18) ) /*0x5b3f1b*/
      __3_YAXPAX_Z(*(void **)(i + 36)); /*0x5b3f23*/
  }
  *(_DWORD *)(i + 36) = 0; /*0x5b3f2b*/
  *(_BYTE *)(i + 18) = 0; /*0x5b3f32*/
  return 1; /*0x5b3f36*/
}


// ==== 0x005B3F50  MixFileClass::method_5B3F50  this=MixFileClass  sig=csp ====
void __thiscall sub_5B3F50(void *this)
{
  void *v2; // eax
  void *v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax

  v2 = (void *)this->CountFiles; /*0x5b3f56*/
  *(_DWORD *)this = &vt_MixFileClass; /*0x5b3f59*/
  if ( v2 ) /*0x5b3f61*/
    free(v2); /*0x5b3f64*/
  if ( this->Encryption && *((_BYTE *)this + 18) ) /*0x5b3f73*/
  {
    __3_YAXPAX_Z(*((void **)this + 9)); /*0x5b3f79*/
    *((_BYTE *)this + 18) = 0; /*0x5b3f81*/
  }
  v3 = (void *)this->Blowfish; /*0x5b3f84*/
  this->Encryption = 0; /*0x5b3f87*/
  if ( v3 ) /*0x5b3f8c*/
  {
    __3_YAXPAX_Z(v3); /*0x5b3f8f*/
    this->Blowfish = 0; /*0x5b3f97*/
  }
  if ( this ) /*0x5b3f9c*/
  {
    v4 = this->Previous; /*0x5b3f9e*/
    if ( v4 ) /*0x5b3fa3*/
    {
      v5 = this->Blowfish; /*0x5b3fa5*/
      if ( v5 ) /*0x5b3faa*/
      {
        *(_DWORD *)(v5 + 4) = v4; /*0x5b3fac*/
        *(_DWORD *)(this->Previous + 8) = this->Blowfish; /*0x5b3fb5*/
        this->Blowfish = 0; /*0x5b3fb8*/
        this->Previous = 0; /*0x5b3fbb*/
      }
    }
  }
  *(_DWORD *)this = &vt_GenericNode; /*0x5b3fc0*/
  if ( this ) /*0x5b3fc6*/
  {
    v6 = this->Previous; /*0x5b3fc8*/
    if ( v6 ) /*0x5b3fcd*/
    {
      v7 = this->Blowfish; /*0x5b3fcf*/
      if ( v7 ) /*0x5b3fd4*/
      {
        *(_DWORD *)(v7 + 4) = v6; /*0x5b3fd6*/
        *(_DWORD *)(this->Previous + 8) = this->Blowfish; /*0x5b3fdf*/
        this->Blowfish = 0; /*0x5b3fe2*/
        this->Previous = 0; /*0x5b3fe5*/
      }
    }
  }
}


// ==== 0x005B3FF0  InsertIntoHashTree  this=AbstractClass  sig=csp ====
_DWORD *__fastcall sub_5B3FF0(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax

  for ( result = (_DWORD *)*a2; *a2; result = (_DWORD *)*a2 ) /*0x5b3ff0*/
  {
    a2 = result + 1; /*0x5b3fff*/
    if ( result[2] >= a1[2] ) /*0x5b4002*/
      a2 = result; /*0x5b4004*/
  }
  *a2 = a1; /*0x5b400d*/
  *a1 = 0; /*0x5b400f*/
  a1[1] = 0; /*0x5b4015*/
  return result; /*0x5b401c*/
}


// ==== 0x005B4080  Tree::Destructor  this=Tree  sig=csp ====
void __thiscall Tree_Destructor(_DWORD *this)
{
  if ( this ) /*0x5b4085*/
  {
    if ( *this ) /*0x5b4087*/
      Tree::Destructor(); /*0x5b408d*/
    if ( this->q001 ) /*0x5b4092*/
      Tree::Destructor(); /*0x5b4099*/
    __3_YAXPAX_Z(this); /*0x5b409f*/
  }
}


// ==== 0x005B40B0  SearchMIXFile  this=char*  sig=csp ====
void *__fastcall SearchMIXFile(char *Source, char a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // ecx
  bool v6; // cc
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  _DWORD *v10; // edx
  void *SHPFile; // edi
  void *v12; // eax
  unsigned int v14[3]; // [esp+14h] [ebp-17Ch] BYREF
  _DWORD v15[22]; // [esp+20h] [ebp-170h] BYREF
  _BYTE v16[12]; // [esp+78h] [ebp-118h] BYREF
  int v17; // [esp+84h] [ebp-10Ch]
  char Str[260]; // [esp+8Ch] [ebp-104h] BYREF

  strcpy(Str, Source); /*0x5b40dd*/
  _strupr(Str); /*0x5b40ee*/
  memset(v14, 0, sizeof(v14)); /*0x5b4110*/
  v3 = Checksummer::Add_Buffer(v14, (unsigned __int8 *)Str, strlen(Str)); /*0x5b4127*/
  v4 = (_DWORD *)dword_A8ED54[49326]; /*0x5b4129*/
  if ( !dword_A8ED54[49326] ) /*0x5b4130*/
    goto LABEL_9; /*0x5b4130*/
  while ( 1 ) /*0x5b4132*/
  {
    v5 = v4[2]; /*0x5b4132*/
    v6 = v5 < v3; /*0x5b4135*/
    if ( v5 == v3 ) /*0x5b4137*/
      break; /*0x5b4137*/
LABEL_5:
    if ( v6 ) /*0x5b4140*/
      v4 = (_DWORD *)v4[1]; /*0x5b4142*/
    else
      v4 = (_DWORD *)*v4; /*0x5b4147*/
    if ( !v4 ) /*0x5b414b*/
      goto LABEL_9; /*0x5b414b*/
  }
  if ( !v4[3] ) /*0x5b4139*/
  {
    v6 = v5 < v3; /*0x5b413e*/
    goto LABEL_5; /*0x5b413e*/
  }
  if ( v4 ) /*0x5b419d*/
    return (void *)v4[3]; /*0x5b41ac*/
LABEL_9:
  CCFileClass::Construct(v15, Source); /*0x5b414d*/
  if ( CCFileClass::Open(v15, 0) ) /*0x5b415c*/
  {
    v8 = (_DWORD *)__2_YAPAXI_Z(16); /*0x5b41af*/
    v9 = v8; /*0x5b41b4*/
    v8[2] = v3; /*0x5b41b9*/
    v10 = (_DWORD *)dword_A8ED54[49326]; /*0x5b41bc*/
    if ( dword_A8ED54[49326] ) /*0x5b41c4*/
    {
      if ( *(_DWORD *)(dword_A8ED54[49326] + 8) < v3 ) /*0x5b41d6*/
        v10 = (_DWORD *)(dword_A8ED54[49326] + 4); /*0x5b41d8*/
      InsertIntoHashTree(v8, v10); /*0x5b41dd*/
    }
    else
    {
      dword_A8ED54[49326] = (int)v8; /*0x5b41c6*/
      *v8 = 0; /*0x5b41cc*/
      v8[1] = 0; /*0x5b41ce*/
    }
    if ( a2 || strstr(Str, Ext) ) /*0x5b41f5*/
    {
      v12 = (void *)__2_YAPAXI_Z(36); /*0x5b4210*/
      if ( v12 ) /*0x5b421a*/
        SHPFile = LoadSHPFile(v12, Source); /*0x5b4224*/
      else
        SHPFile = 0; /*0x5b4228*/
    }
    else
    {
      SHPFile = (void *)CCFileClass::ReadEntireFile(v15); /*0x5b420a*/
    }
    v9[3] = SHPFile; /*0x5b422a*/
    v15[0] = &CCFileClass::`vftable'; /*0x5b4231*/
    v17 = 0; /*0x5b4239*/
    Vector::Clear((int)v16); /*0x5b4240*/
    v15[0] = &off_7E1668; /*0x5b4249*/
    BufferIOFileClass::Dtor(v15); /*0x5b4251*/
    return SHPFile; /*0x5b4256*/
  }
  else
  {
    v15[0] = &CCFileClass::`vftable'; /*0x5b4169*/
    v17 = 0; /*0x5b4171*/
    Vector::Clear((int)v16); /*0x5b4178*/
    v15[0] = &off_7E1668; /*0x5b4181*/
    BufferIOFileClass::Dtor(v15); /*0x5b4189*/
    return 0; /*0x5b418e*/
  }
}


// ==== 0x005B4270  HashTree::MarkEntry  this=HashTree  sig=csp ====
int __thiscall HashTree_MarkEntry(const char *this)
{
  int result; // eax
  _DWORD *v2; // ecx
  int v3; // edx
  bool v4; // cc
  unsigned int v5[3]; // [esp+8h] [ebp-110h] BYREF
  char String[260]; // [esp+14h] [ebp-104h] BYREF

  strcpy(String, this); /*0x5b4292*/
  _strupr(String); /*0x5b42a0*/
  memset(v5, 0, sizeof(v5)); /*0x5b42bc*/
  result = Checksummer::Add_Buffer(v5, (unsigned __int8 *)String, strlen(String)); /*0x5b42ce*/
  v2 = MEMORY[0xABF00C]; /*0x5b42d3*/
  if ( MEMORY[0xABF00C] ) /*0x5b42db*/
  {
    do /*0x5b42dd*/
    {
      v3 = v2[2]; /*0x5b42dd*/
      v4 = v3 < result; /*0x5b42e0*/
      if ( v3 == result ) /*0x5b42e2*/
      {
        if ( v2[3] ) /*0x5b42e4*/
        {
          v2[3] = 0; /*0x5b4301*/
          return result; /*0x5b4301*/
        }
        v4 = v3 < result; /*0x5b42e9*/
      }
      if ( v4 ) /*0x5b42eb*/
        v2 = (_DWORD *)v2[1]; /*0x5b42ed*/
      else
        v2 = (_DWORD *)*v2; /*0x5b42f2*/
    }
    while ( v2 ); /*0x5b42dd*/
  }
  return result; /*0x5b42f8*/
}


// ==== 0x005B4310  WinMainSetup_Setup_5B4310  this=-  sig=ida-proto ====
void sub_5B4310()
{
  _DWORD *v0; // esi
  _DWORD *v1; // ecx

  v0 = MEMORY[0xABF00C]; /*0x5b4318*/
  if ( MEMORY[0xABF00C] ) /*0x5b431a*/
  {
    if ( *(_DWORD *)MEMORY[0xABF00C] ) /*0x5b431c*/
      Tree::Destructor(*(_DWORD **)MEMORY[0xABF00C]); /*0x5b4324*/
    v1 = (_DWORD *)v0[1]; /*0x5b4329*/
    if ( v1 ) /*0x5b432e*/
      Tree::Destructor(v1); /*0x5b4330*/
    __3_YAXPAX_Z(v0); /*0x5b4336*/
  }
  MEMORY[0xABF00C] = 0; /*0x5b433e*/
}


// ==== 0x005B4350  ObjectClass::method_5B4350  this=ObjectClass  sig=csp ====
int __thiscall sub_5B4350(void *this)
{
  int i; // esi
  ObjectClass Filename; // [esp+8h] [ebp-304h] BYREF
  char Ext[256]; // [esp+108h] [ebp-204h] BYREF
  char Buffer[260]; // [esp+208h] [ebp-104h] BYREF

  for ( i = (int)*(&g_MatrixTransformState + 116); i && *(_DWORD *)(i + 4) && *(_DWORD *)(i + 8); i = *(_DWORD *)(i + 4) ) /*0x5b4357*/
  {
    _splitpath(*(const char **)(i + 12), 0, 0, &Filename, Ext); /*0x5b4387*/
    _makepath(Buffer, 0, 0, &Filename, Ext); /*0x5b43a5*/
    if ( !_strcmpi(Buffer, this) ) /*0x5b43bd*/
      return i; /*0x5b43ce*/
  }
  return 0; /*0x5b43c6*/
}


// ==== 0x005B43E0  ObjectClass::?do_always_noconv_codecvt_base_std__MBE_NXZ_7  this=char*  sig=csp ====
char __thiscall _do_always_noconv_codecvt_base_std__MBE_NXZ_7(std::codecvt_base *this)
{
  return 1; /*0x5b43e2*/
}


// ==== 0x005B43F0  ReturnTrue  this=-  sig=csp ====
char __stdcall ReturnTrue(AnimClass *aP0)
{
  return 1; /*0x5b43f2*/
}


// ==== 0x005B4400  ObjectClass::method_5B4400  this=ObjectClass  sig=csp ====
void __thiscall sub_5B4400(int this)
{
  if ( *(_DWORD *)(this + 36) && *(_BYTE *)(this + 18) ) /*0x5b440d*/
    __3_YAXPAX_Z(*(void **)(this + 36)); /*0x5b4413*/
  *(_DWORD *)(this + 36) = 0; /*0x5b441b*/
  *(_BYTE *)(this + 18) = 0; /*0x5b441e*/
}


// ==== 0x005B4430  LookupFileInfoCache  this=AbstractClass  sig=csp ====
char __fastcall FileInfoCache_Lookup(const char *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int v5; // eax
  _DWORD *v6; // ebp
  int v7; // ecx
  int v8; // edi
  int v9; // esi
  int v10; // edx
  int v11; // eax
  unsigned int v14[3]; // [esp+18h] [ebp-110h] BYREF
  char String[260]; // [esp+24h] [ebp-104h] BYREF

  if ( !a1 ) /*0x5b4442*/
    return 0; /*0x5b4442*/
  strcpy(String, a1); /*0x5b4462*/
  _strupr(String); /*0x5b4470*/
  memset(v14, 0, sizeof(v14)); /*0x5b4490*/
  v5 = Checksummer::Add_Buffer(v14, (unsigned __int8 *)String, strlen(String)); /*0x5b449c*/
  v6 = (_DWORD *)MEMORY[0xABEFE0]; /*0x5b44a1*/
LABEL_3:
  while ( 2 ) /*0x5b44c0*/
  {
    if ( !v6 || !v6[1] || !v6[2] ) /*0x5b44c0*/
      return 0; /*0x5b4580*/
    v7 = v6[5]; /*0x5b44cb*/
    v8 = v6[8]; /*0x5b44ce*/
    if ( v7 <= 0 ) /*0x5b44d3*/
      goto LABEL_14; /*0x5b44d3*/
    while ( 1 ) /*0x5b44df*/
    {
      v9 = *(_DWORD *)(v8 + 12 * (v7 / 2)); /*0x5b44df*/
      v10 = v8 + 12 * (v7 / 2); /*0x5b44e2*/
      if ( v9 <= v5 ) /*0x5b44e7*/
        break; /*0x5b44e7*/
      v7 /= 2; /*0x5b44e9*/
LABEL_11:
      if ( v7 <= 0 ) /*0x5b44fb*/
      {
        v6 = (_DWORD *)v6[1]; /*0x5b44fd*/
        goto LABEL_3; /*0x5b4501*/
      }
    }
    if ( v9 != v5 ) /*0x5b44ed*/
    {
      v8 = v10 + 12; /*0x5b44ef*/
      v7 += -1 - v7 / 2; /*0x5b44f7*/
      goto LABEL_11; /*0x5b44f7*/
    }
    if ( !v10 ) /*0x5b4505*/
    {
LABEL_14:
      v6 = (_DWORD *)v6[1]; /*0x5b4507*/
      continue; /*0x5b450b*/
    }
    break;
  }
  if ( a3 ) /*0x5b4516*/
    *a3 = v6; /*0x5b4518*/
  if ( a5 ) /*0x5b4523*/
    *a5 = *(_DWORD *)(v10 + 8); /*0x5b4528*/
  if ( a2 ) /*0x5b4530*/
    *a2 = 0; /*0x5b4532*/
  if ( a4 ) /*0x5b4541*/
    *a4 = *(_DWORD *)(v10 + 4); /*0x5b4546*/
  if ( a2 ) /*0x5b454a*/
  {
    v11 = v6[9]; /*0x5b454c*/
    if ( v11 ) /*0x5b4551*/
      *a2 = v11 + *(_DWORD *)(v10 + 4); /*0x5b4558*/
  }
  if ( !v6[9] ) /*0x5b455a*/
  {
    if ( a4 ) /*0x5b4563*/
      *a4 += v6[7]; /*0x5b456c*/
  }
  return 1; /*0x5b456e*/
}


// ==== 0x005B4590  MixFileClass::LinkIntoPool  this=MixFileClass  sig=csp ====
void __thiscall sub_5B4590(_DWORD *this)
{
  int v1; // edx
  int v2; // eax

  if ( this ) /*0x5b4592*/
  {
    v1 = this->Previous; /*0x5b4594*/
    if ( v1 ) /*0x5b4599*/
    {
      v2 = this->Blowfish; /*0x5b459b*/
      if ( v2 ) /*0x5b45a0*/
      {
        *(_DWORD *)(v2 + 4) = v1; /*0x5b45a2*/
        *(_DWORD *)(this->Previous + 8) = this->Blowfish; /*0x5b45ab*/
        this->Blowfish = 0; /*0x5b45ae*/
        this->Previous = 0; /*0x5b45b5*/
      }
    }
  }
}


// ==== 0x005B45C0  BlowStraw::QueryInterface  this=BlowStraw  sig=csp ====
BlowStraw *__thiscall BlowStraw::QueryInterface(int *Block, char a2)
{
  int *v3; // edi

  v3 = (int *)*(Block + 3); /*0x5b45c4*/
  *Block = (int)&vt_BlowStraw; /*0x5b45c7*/
  if ( v3 ) /*0x5b45cf*/
  {
    COMObject::Release(v3); /*0x5b45d3*/
    __3_YAXPAX_Z(v3); /*0x5b45d9*/
  }
  *(Block + 3) = 0; /*0x5b45e3*/
  Straw::Dtor(Block); /*0x5b45ea*/
  if ( (a2 & 1) != 0 ) /*0x5b45f4*/
    __3_YAXPAX_Z(Block); /*0x5b45f7*/
  return (BlowStraw *)Block; /*0x5b4601*/
}


// ==== 0x005B4610  MixFileClass::UnlinkFromPool  this=MixFileClass  sig=csp ====
int *__thiscall MixFileClass::UnlinkFromPool(int *Block, char a2)
{
  COMObject::Release(Block); /*0x5b4613*/
  if ( (a2 & 1) != 0 ) /*0x5b461d*/
    __3_YAXPAX_Z(Block); /*0x5b4620*/
  return Block; /*0x5b462a*/
}


// ==== 0x005B4630  MixFileClass::Constructor_MixFileClass  this=MixFileClass  sig=csp ====
MixFileClass *__thiscall BlowStraw::Constructor_MixFileClass(void *Block, char a2)
{
  void *v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax

  v3 = (void *)*((_DWORD *)Block + 3); /*0x5b4636*/
  *(_DWORD *)Block = &vt_MixFileClass; /*0x5b4639*/
  if ( v3 ) /*0x5b4641*/
    free(v3); /*0x5b4644*/
  if ( *((_DWORD *)Block + 9) && *((_BYTE *)Block + 18) ) /*0x5b4653*/
  {
    __3_YAXPAX_Z(*((void **)Block + 9)); /*0x5b4659*/
    *((_BYTE *)Block + 18) = 0; /*0x5b4661*/
  }
  v4 = (void *)*((_DWORD *)Block + 8); /*0x5b4664*/
  *((_DWORD *)Block + 9) = 0; /*0x5b4667*/
  if ( v4 ) /*0x5b466c*/
  {
    __3_YAXPAX_Z(v4); /*0x5b466f*/
    *((_DWORD *)Block + 8) = 0; /*0x5b4677*/
  }
  if ( Block ) /*0x5b467c*/
  {
    v5 = *((_DWORD *)Block + 1); /*0x5b467e*/
    if ( v5 ) /*0x5b4683*/
    {
      v6 = *((_DWORD *)Block + 2); /*0x5b4685*/
      if ( v6 ) /*0x5b468a*/
      {
        *(_DWORD *)(v6 + 4) = v5; /*0x5b468c*/
        *(_DWORD *)(*((_DWORD *)Block + 1) + 8) = *((_DWORD *)Block + 2); /*0x5b4695*/
        *((_DWORD *)Block + 2) = 0; /*0x5b4698*/
        *((_DWORD *)Block + 1) = 0; /*0x5b469b*/
      }
    }
  }
  *(_DWORD *)Block = &vt_GenericNode; /*0x5b46a0*/
  if ( Block ) /*0x5b46a6*/
  {
    v7 = *((_DWORD *)Block + 1); /*0x5b46a8*/
    if ( v7 ) /*0x5b46ad*/
    {
      v8 = *((_DWORD *)Block + 2); /*0x5b46af*/
      if ( v8 ) /*0x5b46b4*/
      {
        *(_DWORD *)(v8 + 4) = v7; /*0x5b46b6*/
        *(_DWORD *)(*((_DWORD *)Block + 1) + 8) = *((_DWORD *)Block + 2); /*0x5b46bf*/
        *((_DWORD *)Block + 2) = 0; /*0x5b46c2*/
        *((_DWORD *)Block + 1) = 0; /*0x5b46c5*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x5b46cd*/
    __3_YAXPAX_Z(Block); /*0x5b46d0*/
  return (MixFileClass *)Block; /*0x5b46da*/
}


// ==== 0x005B46E0  AbstractClass::getWeaponSpeed  this=GenericList  sig=csp ====
GenericList *__thiscall AbstractClass::getWeaponSpeed(_DWORD *Block, char a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx

  *Block = &vt_GenericList; /*0x5b46e6*/
  while ( 1 ) /*0x5b46ec*/
  {
    v3 = *(Block + 2); /*0x5b46ec*/
    if ( !v3 ) /*0x5b46f1*/
      break; /*0x5b46f1*/
    if ( !*(_DWORD *)(v3 + 4) ) /*0x5b46f3*/
      break; /*0x5b46f3*/
    v4 = *(_DWORD *)(v3 + 8); /*0x5b46f8*/
    if ( !v4 ) /*0x5b46fd*/
      break; /*0x5b46fd*/
    v5 = *(_DWORD *)(v3 + 4); /*0x5b4703*/
    if ( v5 ) /*0x5b4708*/
    {
      *(_DWORD *)(v4 + 4) = v5; /*0x5b470e*/
      *(_DWORD *)(*(_DWORD *)(v3 + 4) + 8) = *(_DWORD *)(v3 + 8); /*0x5b4717*/
      *(_DWORD *)(v3 + 8) = 0; /*0x5b471a*/
      *(_DWORD *)(v3 + 4) = 0; /*0x5b471d*/
    }
  }
  *(Block + 4) = &vt_GenericNode; /*0x5b4727*/
  if ( Block != (_DWORD *)-16 ) /*0x5b472d*/
  {
    v6 = *(Block + 5); /*0x5b472f*/
    if ( v6 ) /*0x5b4734*/
    {
      v7 = *(Block + 6); /*0x5b4736*/
      if ( v7 ) /*0x5b473b*/
      {
        *(_DWORD *)(v7 + 4) = v6; /*0x5b473d*/
        *(_DWORD *)(*(Block + 5) + 8) = *(Block + 6); /*0x5b4746*/
        *(Block + 6) = 0; /*0x5b4749*/
        *(Block + 5) = 0; /*0x5b474c*/
      }
    }
  }
  *(Block + 1) = &vt_GenericNode; /*0x5b4754*/
  if ( Block != (_DWORD *)-4 ) /*0x5b475a*/
  {
    v8 = *(Block + 2); /*0x5b475c*/
    if ( v8 ) /*0x5b4761*/
    {
      v9 = *(Block + 3); /*0x5b4763*/
      if ( v9 ) /*0x5b4768*/
      {
        *(_DWORD *)(v9 + 4) = v8; /*0x5b476a*/
        *(_DWORD *)(*(Block + 2) + 8) = *(Block + 3); /*0x5b4773*/
        *(Block + 3) = 0; /*0x5b4776*/
        *(Block + 2) = 0; /*0x5b4779*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x5b4781*/
    __3_YAXPAX_Z(Block); /*0x5b4784*/
  return (GenericList *)Block; /*0x5b478e*/
}


// ==== 0x005B47A0  sub_5B47A0  this=-  sig=ida-proto ====
int sub_5B47A0()
{
  MEMORY[0xABF018] = 0; /*0x5b47a2*/
  MEMORY[0xABF01C] = 0; /*0x5b47a7*/
  MEMORY[0xABF020] = 0; /*0x5b47ac*/
  MEMORY[0xABF024] = 0; /*0x5b47b1*/
  return 0; /*0x5b47b6*/
}


// ==== 0x005B47C0  sub_5B47C0  this=-  sig=ida-proto ====
void sub_5B47C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b47cc*/
  MEMORY[0xABF030] = Math::Sqrt(v0 + v0); /*0x5b47de*/
}


// ==== 0x005B47F0  sub_5B47F0  this=-  sig=ida-proto ====
void sub_5B47F0()
{
  MEMORY[0xABF080] = MEMORY[0xABF030] / 60.0; /*0x5b47fc*/
}


// ==== 0x005B4810  sub_5B4810  this=-  sig=ida-proto ====
void sub_5B4810()
{
  MEMORY[0xABF068] = 1.0 / MEMORY[0xABF080]; /*0x5b481c*/
}


// ==== 0x005B4830  sub_5B4830  this=-  sig=ida-proto ====
void sub_5B4830()
{
  MEMORY[0xABF060] = 0.0174532925199433 * 45.0; /*0x5b483c*/
}


// ==== 0x005B4850  sub_5B4850  this=-  sig=ida-proto ====
void sub_5B4850()
{
  MEMORY[0xABF038] = 0.0174532925199433 * 60.0; /*0x5b485c*/
}


// ==== 0x005B4870  sub_5B4870  this=-  sig=ida-proto ====
void sub_5B4870()
{
  MEMORY[0xABF010] = 0.0174532925199433 * 90.0; /*0x5b487c*/
}


// ==== 0x005B4890  sub_5B4890  this=-  sig=ida-proto ====
__int64 sub_5B4890()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABF010] - MEMORY[0xABF038]); /*0x5b48a2*/
  result = Math::RoundToInt(v0 * MEMORY[0xABF030] * 0.5); /*0x5b48b6*/
  MEMORY[0xABF088] = result; /*0x5b48bb*/
  return result; /*0x5b48c0*/
}


// ==== 0x005B48D0  sub_5B48D0  this=-  sig=ida-proto ====
void sub_5B48D0()
{
  MEMORY[0xABF040] = Math::ArcTan((double)MEMORY[0xABF088] * 0.00390625); /*0x5b48e7*/
}


// ==== 0x005B4900  sub_5B4900  this=-  sig=ida-proto ====
void sub_5B4900()
{
  MEMORY[0xABF058] = Math::ArcTan((double)(2 * MEMORY[0xABF088]) / MEMORY[0xABF030]); /*0x5b4922*/
}


// ==== 0x005B4930  sub_5B4930  this=-  sig=ida-proto ====
__int64 sub_5B4930()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABF088]) + 0.5); /*0x5b494b*/
  MEMORY[0xABF07C] = result; /*0x5b4950*/
  return result; /*0x5b4956*/
}


// ==== 0x005B4960  sub_5B4960  this=-  sig=ida-proto ====
int sub_5B4960()
{
  MEMORY[0xABF028] = 0; /*0x5b4962*/
  MEMORY[0xABF02A] = 0; /*0x5b4968*/
  return 0; /*0x5b496e*/
}


// ==== 0x005B4970  sub_5B4970  this=-  sig=ida-proto ====
int sub_5B4970()
{
  MEMORY[0xABF048] = 0; /*0x5b4972*/
  MEMORY[0xABF04C] = 0; /*0x5b4977*/
  MEMORY[0xABF050] = 0; /*0x5b497c*/
  return 0; /*0x5b4981*/
}


// ==== 0x005B4990  sub_5B4990  this=-  sig=ida-proto ====
int sub_5B4990()
{
  MEMORY[0xABF078] = 0; /*0x5b4995*/
  MEMORY[0xABF070] = 128; /*0x5b499f*/
  MEMORY[0xABF074] = 128; /*0x5b49a4*/
  return 128; /*0x5b49a9*/
}


// ==== 0x005B49B0  ModemGuest::Dialog  this=ModemGuest  sig=csp ====
char __thiscall ModemGuest::Dialog(LONG dwNewLong)
{
  HWND Dialog; // eax
  int v3; // edi
  int v4; // edi
  int v5; // eax
  char v6; // bl

  Debug::Log(); /*0x5b49c1*/
  *(_DWORD *)(dwNewLong + 4) = -1; /*0x5b49d7*/
  Dialog = (HWND)CreateDialog(0xF2u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GameSetupDialogProc, 0); /*0x5b49da*/
  *(_DWORD *)dwNewLong = Dialog; /*0x5b49e1*/
  if ( !Dialog ) /*0x5b49e3*/
  {
LABEL_16:
    v6 = 0; /*0x5b4af1*/
    goto LABEL_17; /*0x5b4af1*/
  }
  SetWindowLongA(Dialog, 8, dwNewLong); /*0x5b49ee*/
  ModemGuest::InitDialog((HWND *)dwNewLong); /*0x5b49f6*/
  Dialog::Show(*(HWND *)dwNewLong); /*0x5b49fd*/
  *(_BYTE *)(dwNewLong + 8) = 0; /*0x5b4a02*/
  *(_BYTE *)(dwNewLong + 9) = 1; /*0x5b4a05*/
  v3 = MEMORY[0x887340]; /*0x5b4a0e*/
  if ( MEMORY[0x887338] != -1 ) /*0x5b4a16*/
    v3 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5b4a28*/
  *(_DWORD *)(dwNewLong + 12) = v3; /*0x5b4a2a*/
  *(_DWORD *)(dwNewLong + 16) = 10000; /*0x5b4a2d*/
  v4 = MEMORY[0x887340]; /*0x5b4a39*/
  if ( MEMORY[0x887338] != -1 ) /*0x5b4a41*/
    v4 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5b4a53*/
  *(_DWORD *)(dwNewLong + 20) = v4; /*0x5b4a55*/
  *(_DWORD *)(dwNewLong + 24) = 1200; /*0x5b4a58*/
  *(_DWORD *)(dwNewLong + 28) = 0; /*0x5b4a5f*/
  *(_WORD *)(dwNewLong + 32) = 0; /*0x5b4a62*/
  *(_DWORD *)(dwNewLong + 72) = -1; /*0x5b4a66*/
  *(_DWORD *)(dwNewLong + 76) = -1; /*0x5b4a69*/
  *(_DWORD *)(dwNewLong + 80) = GameConfig::ComputeHash(); /*0x5b4a71*/
  LoadArtINI(); /*0x5b4a74*/
  *(_DWORD *)(dwNewLong + 84) = unknown_libname_29(); /*0x5b4a7e*/
  *(_DWORD *)(dwNewLong + 88) = unknown_libname_30(); /*0x5b4a86*/
  while ( *(int *)(dwNewLong + 4) < 0 ) /*0x5b4a8f*/
  {
    if ( Dialog::PumpMessages() == 1 ) /*0x5b4a98*/
      break; /*0x5b4a98*/
    CellClass::LockSurface(dwNewLong, 0); /*0x5b4a9d*/
    if ( ModemGame::ProcessPacket(dwNewLong) == 1 ) /*0x5b4aab*/
      break; /*0x5b4aab*/
    ScreenSaver::Process(0, 0, -1); /*0x5b4aaf*/
  }
  Dialog::Destroy(*(HWND *)dwNewLong); /*0x5b4abb*/
  if ( *(_BYTE *)(dwNewLong + 8) == 1 ) /*0x5b4ac4*/
    SaveConfigWOL((int)MEMORY[0xA8B238]); /*0x5b4acb*/
  v5 = *(_DWORD *)(dwNewLong + 4); /*0x5b4ad0*/
  if ( v5 != 1 ) /*0x5b4ad6*/
  {
    if ( v5 == 2 ) /*0x5b4ae4*/
      ReadEventINI(); /*0x5b4aec*/
    goto LABEL_16; /*0x5b4aec*/
  }
  v6 = 1; /*0x5b4ad8*/
LABEL_17:
  Debug::Log(); /*0x5b4afa*/
  return v6; /*0x5b4b0a*/
}


// ==== 0x005B4B10  GameSetupDialogProc  this=-  sig=csp ====
int __stdcall GameSetupDialogProc(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int result; // eax
  LONG WindowLongA; // ebp
  HWND v6; // eax
  HWND DlgItem; // eax
  HWND v8; // esi
  char *v9; // eax
  HWND v10; // eax
  HWND v11; // esi
  LRESULT v12; // eax
  HWND v13; // eax
  HWND v14; // edi
  void *v15; // esi
  int v16; // [esp-4h] [ebp-338h] BYREF
  wchar_t v17[22]; // [esp+Ch] [ebp-328h] BYREF
  _DWORD v18[62]; // [esp+38h] [ebp-2FCh] BYREF
  __int16 v19; // [esp+130h] [ebp-204h]
  wchar_t lParam[256]; // [esp+134h] [ebp-200h] BYREF

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x5b4b38*/
  if ( result ) /*0x5b4b3f*/
    return result; /*0x5b4b3f*/
  WindowLongA = GetWindowLongA(hWnd, 8); /*0x5b4b4f*/
  switch ( a2 ) /*0x5b4b56*/
  {
    case 2u: /*0x5b4b56*/
      v15 = MEMORY[0xAC1154]; /*0x5b4ead*/
      if ( MEMORY[0xAC1154] ) /*0x5b4eb5*/
      {
        ComPtr::Dtor(MEMORY[0xAC1154]); /*0x5b4eb9*/
        __3_YAXPAX_Z(v15); /*0x5b4ebf*/
        MEMORY[0xAC1154] = 0; /*0x5b4ec7*/
      }
      return 0; /*0x5b4ec7*/
    case 0xFu: /*0x5b4b56*/
      if ( MEMORY[0xAC1154] ) /*0x5b4e8d*/
        Skirmish::RenderPreview(MEMORY[0xAC1154], hWnd); /*0x5b4e90*/
      ValidateRect(hWnd, 0); /*0x5b4e98*/
      return 0; /*0x5b4ea1*/
    case 0x111u: /*0x5b4b56*/
      if ( (unsigned __int16)a3 <= 0x540u ) /*0x5b4b7c*/
      {
        if ( (unsigned __int16)a3 == 1344 ) /*0x5b4b82*/
        {
          if ( HIWORD(a3) == 1281 ) /*0x5b4c4b*/
          {
            DlgItem = GetDlgItem(*(HWND *)WindowLongA, 1344); /*0x5b4c5a*/
            v8 = DlgItem; /*0x5b4c60*/
            if ( DlgItem ) /*0x5b4c64*/
            {
              SendMessageA(DlgItem, 0x4B3u, 0x100u, (LPARAM)lParam); /*0x5b4c83*/
              SendMessageA(v8, 0x4B2u, 0, (LPARAM)&MEMORY[0x887734]); /*0x5b4c92*/
              if ( wcslen(lParam) ) /*0x5b4c9c*/
              {
                if ( lParam[0] != 13 ) /*0x5b4cb5*/
                {
                  WideString::Trim(lParam); /*0x5b4cc2*/
                  if ( &v16 != (int *)-312 ) /*0x5b4cd0*/
                  {
                    memset(v18, 0, sizeof(v18)); /*0x5b4ce5*/
                    v19 = 0; /*0x5b4ce7*/
                    v18[0] = 104; /*0x5b4cf3*/
                    strcpy((char *)&v18[1], MEMORY[0xA8B380]); /*0x5b4d11*/
                    LOBYTE(v18[6]) = MEMORY[0xA8B394]; /*0x5b4d26*/
                    wcscpy((wchar_t *)((char *)&v18[6] + 1), lParam); /*0x5b4d2a*/
                    Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v18, 250, 1); /*0x5b4d43*/
                    Stream::ReadPacket((int)&MEMORY[0xA8EA70]); /*0x5b4d4d*/
                    v9 = CharToWideString(MEMORY[0xA8B380]); /*0x5b4d57*/
                    UI_Setup((wchar_t *)v9, MEMORY[0xA8B394], (int)lParam); /*0x5b4d6e*/
                    return 0; /*0x5b4d7f*/
                  }
                }
              }
            }
          }
          return 0; /*0x5b4cd0*/
        }
        if ( (unsigned __int16)a3 != 1 ) /*0x5b4b89*/
        {
          if ( (unsigned __int16)a3 == 2 ) /*0x5b4b8c*/
          {
            if ( !HIWORD(a3) ) /*0x5b4bbb*/
            {
              Game::processStartup(WindowLongA); /*0x5b4bc6*/
              *(_DWORD *)(WindowLongA + 4) = 2; /*0x5b4bcb*/
              return 0; /*0x5b4bde*/
            }
          }
          else if ( (unsigned __int16)a3 == 1029 && HIWORD(a3) == 1 ) /*0x5b4b9f*/
          {
            ModemGame::AdvanceTauntCommand(WindowLongA); /*0x5b4ba7*/
            return 0; /*0x5b4bb8*/
          }
          return 0; /*0x5b4b9f*/
        }
        if ( !HIWORD(a3) ) /*0x5b4be1*/
        {
          v6 = GetDlgItem(*(HWND *)WindowLongA, 1); /*0x5b4bf4*/
          if ( v6 ) /*0x5b4bfc*/
            EnableWindow(v6, 0); /*0x5b4c01*/
          memset(v18, 0, sizeof(v18)); /*0x5b4c13*/
          v19 = 0; /*0x5b4c1e*/
          v18[0] = 116; /*0x5b4c26*/
          Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v18, 250, 1); /*0x5b4c2e*/
          return 0; /*0x5b4c3f*/
        }
        return 0; /*0x5b4ed1*/
      }
      if ( (unsigned __int16)a3 != 1473 ) /*0x5b4d87*/
      {
        if ( (unsigned __int16)a3 == 1639 && HIWORD(a3) == 1 ) /*0x5b4d9e*/
        {
          v10 = GetDlgItem(*(HWND *)WindowLongA, 1639); /*0x5b4da9*/
          v11 = v10; /*0x5b4daf*/
          if ( v10 ) /*0x5b4db3*/
          {
            v12 = SendMessageA(v10, 0x147u, 0, 0); /*0x5b4dc9*/
            if ( v12 != -1 ) /*0x5b4dce*/
            {
              MEMORY[0xA8B3AC] = SendMessageA(v11, 0x150u, v12, 0); /*0x5b4ddf*/
              *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b4de4*/
              *(_BYTE *)(WindowLongA + 8) = 1; /*0x5b4de7*/
              return 0; /*0x5b4df6*/
            }
          }
        }
        return 0; /*0x5b4dce*/
      }
      if ( HIWORD(a3) != 1281 && HIWORD(a3) != 768 ) /*0x5b4e08*/
        return 0; /*0x5b4e08*/
      v13 = GetDlgItem(*(HWND *)WindowLongA, 1473); /*0x5b4e17*/
      v14 = v13; /*0x5b4e1d*/
      if ( !v13 ) /*0x5b4e21*/
        return 0; /*0x5b4e21*/
      SendMessageA(v13, 0x4B3u, 0x15u, (LPARAM)v17); /*0x5b4e3a*/
      WideString::Trim(v17); /*0x5b4e40*/
      if ( HIWORD(a3) != 768 ) /*0x5b4e4a*/
        SendMessageA(v14, 0x4B2u, 0, (LPARAM)v17); /*0x5b4e59*/
      CopyWideToChar(MEMORY[0xA8B380], (char *)v17, -1); /*0x5b4e66*/
      *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b4e72*/
      *(_BYTE *)(WindowLongA + 8) = 1; /*0x5b4e75*/
      return 0; /*0x5b4e70*/
    default:
      return 0; /*0x5b4b6a*/
  }
}


// ==== 0x005B4EE0  ModemGuest::InitDialog  this=ModemGuest  sig=csp ====
void __thiscall ModemGuest_InitDialog(HWND *this)
{
  HWND *v1; // ebp
  HWND (__stdcall *v2)(HWND, int); // ebx
  HWND DlgItem; // eax
  HWND v4; // edi
  char *v5; // eax
  HWND v6; // eax
  HWND v7; // edi
  wchar_t *String; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  WPARAM v16; // ebx
  LPARAM *v17; // ebp
  HWND v18; // eax
  HWND v19; // edi
  LPARAM i; // ebx
  int v21; // eax
  LRESULT v22; // eax
  WPARAM Item; // eax
  HWND v24; // edi
  HWND v25; // eax
  HWND v26; // edi
  HWND v27; // edi
  HWND v28; // eax
  HWND v29; // edi
  HWND v30; // eax
  HWND v31; // edi
  HWND v32; // eax
  HWND v33; // edi
  HWND v34; // eax
  HWND v35; // eax
  HWND v36; // eax
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  HWND v40; // eax
  HWND v41; // eax
  HWND v42; // eax
  HWND v43; // eax
  void *v44; // esi
  HWND v45; // esi
  wchar_t Buffer[256]; // [esp+14h] [ebp-A00h] BYREF
  wchar_t Format[1024]; // [esp+214h] [ebp-800h] BYREF

  v1 = this; /*0x5b4eea*/
  Debug::Log(); /*0x5b4ef5*/
  v2 = GetDlgItem; /*0x5b4efd*/
  DlgItem = GetDlgItem(*v1, 1473); /*0x5b4f0c*/
  v4 = DlgItem; /*0x5b4f14*/
  if ( DlgItem ) /*0x5b4f18*/
  {
    SendMessageA(DlgItem, 0xC5u, 0x13u, 0); /*0x5b4f24*/
    v5 = CharToWideString(MEMORY[0xA8B380]); /*0x5b4f2b*/
    SendMessageA(v4, 0x4B2u, 0, (LPARAM)v5); /*0x5b4f39*/
  }
  Debug::Log(); /*0x5b4f45*/
  v6 = GetDlgItem(*v1, 1029); /*0x5b4f56*/
  v7 = v6; /*0x5b4f58*/
  if ( v6 ) /*0x5b4f5c*/
  {
    SendMessageA(v6, 0x14Bu, 0, 0); /*0x5b4f6c*/
    String = GetStringCSF(aTxtGold, 0, g_Str_File_ModemGst_cpp, 280); /*0x5b4f7f*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)String); /*0x5b4f8d*/
    v9 = GetStringCSF(aTxtRed, 0, g_Str_File_ModemGst_cpp, 281); /*0x5b4fa0*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v9); /*0x5b4fae*/
    v10 = GetStringCSF(aTxtBlue, 0, g_Str_File_ModemGst_cpp, 282); /*0x5b4fc1*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v10); /*0x5b4fcf*/
    v11 = GetStringCSF(aTxtGreen, 0, g_Str_File_ModemGst_cpp, 283); /*0x5b4fe2*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v11); /*0x5b4ff0*/
    v12 = GetStringCSF(aTxtOrange, 0, g_Str_File_ModemGst_cpp, 284); /*0x5b5003*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v12); /*0x5b5011*/
    v13 = GetStringCSF(aTxtSkyBlue, 0, g_Str_File_ModemGst_cpp, 285); /*0x5b5024*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v13); /*0x5b5032*/
    v14 = GetStringCSF(aTxtPurple, 0, g_Str_File_ModemGst_cpp, 286); /*0x5b5045*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v14); /*0x5b5053*/
    v15 = GetStringCSF(aTxtPink, 0, g_Str_File_ModemGst_cpp, 287); /*0x5b5066*/
    SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v15); /*0x5b5074*/
    v16 = 0; /*0x5b5076*/
    v17 = MEMORY[0x8316A8]; /*0x5b5078*/
    do /*0x5b5094*/
      SendMessageA(v7, 0x498u, v16++, *v17++); /*0x5b5088*/
    while ( (int)v17 < (int)&MEMORY[0x8316C8] ); /*0x5b5094*/
    MEMORY[0xA8B394] = MEMORY[0xA8B3B4]; /*0x5b50a4*/
    SendMessageA(v7, 0x14Eu, MEMORY[0xA8B3B4], 0); /*0x5b50a9*/
    v1 = this; /*0x5b50ab*/
    v2 = GetDlgItem; /*0x5b50af*/
  }
  Debug::Log(); /*0x5b50c0*/
  v18 = v2(*v1, 1639); /*0x5b50d1*/
  v19 = v18; /*0x5b50d3*/
  if ( v18 ) /*0x5b50d7*/
  {
    SendMessageA(v18, 0x14Bu, 0, 0); /*0x5b50e3*/
    for ( i = 0; i < g_SuperWeaponTypeArray; ++i ) /*0x5b50ee*/
    {
      v21 = *((_DWORD *)g_SuperWeaponTypeCount + i); /*0x5b50f6*/
      if ( *(_BYTE *)(v21 + 421) ) /*0x5b50f9*/
      {
        v22 = SendMessageA(v19, 0x4C2u, 0, *(_DWORD *)(v21 + 96)); /*0x5b510f*/
        SendMessageA(v19, 0x151u, v22, i); /*0x5b5119*/
      }
    }
    Item = FindListBoxItem(v19, -1, MEMORY[0xA8B3AC]); /*0x5b5130*/
    SendMessageA(v19, 0x14Eu, Item, 0); /*0x5b513e*/
    v2 = GetDlgItem; /*0x5b5140*/
  }
  v24 = v2(*v1, 1641); /*0x5b5151*/
  if ( v24 ) /*0x5b5155*/
  {
    SendMessageA(v24, 0x406u, 1u, LOWORD(MEMORY[0x8871E0][1].BarrelDebris) | (LOWORD(MEMORY[0x8871E0][1].Wake) << 16)); /*0x5b517c*/
    SendMessageA(v24, 0x405u, 1u, MEMORY[0xA8B270]); /*0x5b518d*/
  }
  Debug::Log(); /*0x5b519a*/
  v25 = v2(*v1, 1360); /*0x5b51ab*/
  v26 = v25; /*0x5b51ad*/
  if ( v25 ) /*0x5b51b1*/
  {
    SendMessageA(v25, 0x406u, 1u, 655361); /*0x5b51c0*/
    SendMessageA(v26, 0x405u, 1u, g_RulesInitConfig); /*0x5b51d1*/
  }
  Debug::Log(); /*0x5b51de*/
  v27 = v2(*v1, 1026); /*0x5b51f1*/
  if ( v27 ) /*0x5b51f5*/
  {
    SendMessageA( /*0x5b521c*/
      v27,
      0x406u,
      1u,
      LOWORD(MEMORY[0x8871E0][1].RadarEventColorSpeed[2]) | (LOWORD(MEMORY[0x8871E0][1].DropPodPuff) << 16));
    SendMessageA(v27, 0x405u, 1u, MEMORY[0xA8B25C]); /*0x5b522d*/
  }
  Debug::Log(); /*0x5b523a*/
  v28 = v2(*v1, 1362); /*0x5b524b*/
  v29 = v28; /*0x5b524d*/
  if ( v28 ) /*0x5b5251*/
  {
    SendMessageA(v28, 0x406u, 1u, 393216); /*0x5b5260*/
    SendMessageA(v29, 0x405u, 1u, MEMORY[0xA8B274]); /*0x5b5271*/
  }
  Debug::Log(); /*0x5b527e*/
  v30 = v2(*v1, 1321); /*0x5b528f*/
  v31 = v30; /*0x5b5291*/
  if ( v30 ) /*0x5b5295*/
  {
    SendMessageA(v30, 0x406u, 1u, 393216); /*0x5b52a4*/
    SendMessageA(v31, 0x405u, 1u, 6 - MEMORY[0xA8B268]); /*0x5b52bc*/
  }
  Debug::Log(); /*0x5b52c9*/
  v32 = v2(*v1, 1363); /*0x5b52da*/
  v33 = v32; /*0x5b52dc*/
  if ( v32 ) /*0x5b52e0*/
  {
    SendMessageA(v32, 0x406u, 1u, 0x20000); /*0x5b52ef*/
    SendMessageA(v33, 0x405u, 1u, MEMORY[0xA8B278]); /*0x5b5300*/
  }
  Debug::Log(); /*0x5b530d*/
  v34 = v2(*v1, 1643); /*0x5b531e*/
  if ( v34 ) /*0x5b5322*/
    SendMessageA(v34, 0xF1u, (_BYTE)MEMORY[0xA8B320] == 1, 0); /*0x5b533b*/
  Debug::Log(); /*0x5b5356*/
  v35 = v2(*v1, 1642); /*0x5b5367*/
  if ( v35 ) /*0x5b536b*/
    SendMessageA(v35, 0xF1u, MEMORY[0xA8B258] == 1, 0); /*0x5b5384*/
  Debug::Log(); /*0x5b539f*/
  v36 = v2(*v1, 1358); /*0x5b53b0*/
  if ( v36 ) /*0x5b53b4*/
    SendMessageA(v36, 0xF1u, MEMORY[0xA8B262] == 1, 0); /*0x5b53cd*/
  Debug::Log(); /*0x5b53e8*/
  v37 = v2(*v1, 1690); /*0x5b53f9*/
  if ( v37 ) /*0x5b53fd*/
    SendMessageA(v37, 0xF1u, MEMORY[0xA8B263] == 1, 0); /*0x5b5416*/
  Debug::Log(); /*0x5b5431*/
  v38 = v2(*v1, 1693); /*0x5b5442*/
  if ( v38 ) /*0x5b5446*/
    SendMessageA(v38, 0xF1u, (_BYTE)MEMORY[0xA8B264] == 1, 0); /*0x5b545f*/
  Debug::Log(); /*0x5b547a*/
  v39 = v2(*v1, 1361); /*0x5b548b*/
  if ( v39 ) /*0x5b548f*/
    SendMessageA(v39, 0xF1u, MEMORY[0xA8B26C] == 1, 0); /*0x5b54a8*/
  Debug::Log(); /*0x5b54c3*/
  v40 = v2(*v1, 1356); /*0x5b54d4*/
  if ( v40 ) /*0x5b54d8*/
    SendMessageA(v40, 0xF1u, MEMORY[0xA8B261] == 1, 0); /*0x5b54f1*/
  Debug::Log(); /*0x5b550c*/
  v41 = v2(*v1, 1357); /*0x5b551d*/
  if ( v41 ) /*0x5b5521*/
    SendMessageA(v41, 0xF1u, MEMORY[0xA8B31F] == 1, 0); /*0x5b553a*/
  Debug::Log(); /*0x5b5555*/
  v42 = v2(*v1, 1572); /*0x5b5566*/
  if ( v42 ) /*0x5b556a*/
    SendMessageA(v42, 0xF1u, MEMORY[0xA8B260] == 1, 0); /*0x5b5583*/
  Debug::Log(); /*0x5b559e*/
  v43 = v2(*v1, 1430); /*0x5b55af*/
  if ( v43 ) /*0x5b55b3*/
    SendMessageA(v43, 0xF1u, MEMORY[0xA8B31D] == 1, 0); /*0x5b55cc*/
  Debug::Log(); /*0x5b55e7*/
  NetworkBuffer::GetField(&MEMORY[0xA8ECE0]); /*0x5b55f4*/
  v44 = MEMORY[0xAC1154]; /*0x5b55f9*/
  if ( MEMORY[0xAC1154] ) /*0x5b5601*/
  {
    ComPtr::Dtor(MEMORY[0xAC1154]); /*0x5b5605*/
    __3_YAXPAX_Z(v44); /*0x5b560b*/
    MEMORY[0xAC1154] = 0; /*0x5b5613*/
  }
  if ( strlen(MEMORY[0xAC1288]) > 0x4E ) /*0x5b562f*/
    MEMORY[0xAC12D7] = 0; /*0x5b5631*/
  if ( strlen(MEMORY[0xAC1288]) ) /*0x5b563b*/
  {
    BulkCharToWide(Format, (unsigned __int8 *)MEMORY[0xAC1288], -1); /*0x5b5655*/
    if ( &MEMORY[0x887734] ) /*0x5b5661*/
    {
      v45 = v2(*v1, 1343); /*0x5b566e*/
      if ( v45 ) /*0x5b5672*/
      {
        swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, &MEMORY[0x887734]); /*0x5b5691*/
        DrawDialogText((LPARAM)Math::InitDegToRad, Buffer, v45); /*0x5b56a0*/
      }
    }
  }
  MEMORY[0xAC1288][0] = 0; /*0x5b56ac*/
  NullModemClass::Flush(1); /*0x5b56b3*/
  MEMORY[0xA8D60E] = 1; /*0x5b56bd*/
  PtrVector::Destroy(&MEMORY[0xA8DA74]); /*0x5b56c4*/
  HIWORD(MEMORY[0xA8B320]) = 0; /*0x5b56ce*/
  Debug::Log(); /*0x5b56d7*/
}


// ==== 0x005B56F0  Game::processStartup  this=Game  sig=csp ====
void __thiscall sub_5B56F0(HWND *this)
{
  HWND DlgItem; // eax
  HWND v3; // eax
  HWND v4; // eax
  HWND v5; // esi
  LRESULT v6; // eax
  char lParam[40]; // [esp+Ch] [ebp-28h] BYREF

  Debug::Log(); /*0x5b56fd*/
  DlgItem = GetDlgItem(*this, 1473); /*0x5b5713*/
  if ( DlgItem ) /*0x5b571d*/
  {
    SendMessageA(DlgItem, 0x4B3u, 0x14u, (LPARAM)lParam); /*0x5b572c*/
    CopyWideToChar(MEMORY[0xA8B380], lParam, -1); /*0x5b5739*/
  }
  Debug::Log(); /*0x5b5748*/
  v3 = GetDlgItem(*this, 1029); /*0x5b5758*/
  if ( v3 ) /*0x5b575c*/
    MEMORY[0xA8B394] = SendMessageA(v3, 0x147u, 0, 0); /*0x5b576a*/
  Debug::Log(); /*0x5b577a*/
  v4 = GetDlgItem(*this, 1639); /*0x5b578a*/
  v5 = v4; /*0x5b578c*/
  if ( v4 ) /*0x5b5790*/
  {
    v6 = SendMessageA(v4, 0x147u, 0, 0); /*0x5b579c*/
    MEMORY[0xA8B3AC] = SendMessageA(v5, 0x150u, v6, 0); /*0x5b57a9*/
  }
  Debug::Log(); /*0x5b57b3*/
}


// ==== 0x005B57D0  ObjectClass::method_5B57D0  this=ObjectClass  sig=csp ====
HWND __thiscall sub_5B57D0(HWND *this)
{
  HWND result; // eax
  HWND v3; // esi
  char *v4; // eax
  unsigned int v5; // edi
  HWND v6; // esi
  int (__usercall *v7)@<eax>(char@<cf>, char@<zf>); // edi
  HWND v8; // [esp-8h] [ebp-518h]
  int v9; // [esp+0h] [ebp-510h] BYREF
  wchar_t *Format; // [esp+10h] [ebp-500h]
  _DWORD v11[62]; // [esp+14h] [ebp-4FCh] BYREF
  __int16 v12; // [esp+10Ch] [ebp-404h]
  wchar_t lParam[256]; // [esp+110h] [ebp-400h] BYREF
  wchar_t Buffer[256]; // [esp+310h] [ebp-200h] BYREF

  result = GetDlgItem(*this, 1344); /*0x5b57ea*/
  v3 = result; /*0x5b57ec*/
  if ( result ) /*0x5b57f0*/
  {
    SendMessageA(result, 0x4B3u, 0x100u, (LPARAM)lParam); /*0x5b580f*/
    SendMessageA(v3, 0x4B2u, 0, (LPARAM)&MEMORY[0x887734]); /*0x5b581e*/
    result = (HWND)wcslen(lParam); /*0x5b5828*/
    if ( result ) /*0x5b5832*/
    {
      if ( lParam[0] != 13 ) /*0x5b5841*/
      {
        WideString::Trim(lParam); /*0x5b584e*/
        result = (HWND)lParam; /*0x5b5853*/
        if ( &v9 != (int *)-272 ) /*0x5b585c*/
        {
          memset(v11, 0, sizeof(v11)); /*0x5b5871*/
          v12 = 0; /*0x5b5873*/
          v11[0] = 104; /*0x5b587f*/
          strcpy((char *)&v11[1], MEMORY[0xA8B380]); /*0x5b589d*/
          LOBYTE(v11[6]) = MEMORY[0xA8B394]; /*0x5b58b2*/
          wcscpy((wchar_t *)((char *)&v11[6] + 1), lParam); /*0x5b58b6*/
          Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v11, 250, 1); /*0x5b58cf*/
          Stream::ReadPacket((int)&MEMORY[0xA8EA70]); /*0x5b58d9*/
          v4 = CharToWideString(MEMORY[0xA8B380]); /*0x5b58e3*/
          v5 = MEMORY[0xA8B394]; /*0x5b58ea*/
          v8 = *this; /*0x5b58f5*/
          Format = (wchar_t *)v4; /*0x5b58f6*/
          result = GetDlgItem(v8, 1343); /*0x5b58fa*/
          v6 = result; /*0x5b58fc*/
          if ( result ) /*0x5b5900*/
          {
            if ( v5 >= 8 ) /*0x5b5904*/
              v7 = Math::InitDegToRad; /*0x5b5914*/
            else
              v7 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))MEMORY[0x8316A8][v5]; /*0x5b590b*/
            swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, lParam); /*0x5b5934*/
            return (HWND)DrawDialogText((LPARAM)v7, Buffer, v6); /*0x5b5946*/
          }
        }
      }
    }
  }
  return result; /*0x5b594b*/
}


// ==== 0x005B5960  ObjectClass::method_5B5960  this=ObjectClass  sig=csp ====
char __thiscall sub_5B5960(int this)
{
  HWND DlgItem; // eax
  HWND v3; // edi

  DlgItem = GetDlgItem(*(HWND *)this, 1639); /*0x5b596d*/
  v3 = DlgItem; /*0x5b5973*/
  if ( DlgItem ) /*0x5b5977*/
  {
    DlgItem = (HWND)SendMessageA(DlgItem, 0x147u, 0, 0); /*0x5b5989*/
    if ( DlgItem != HWND_MESSAGE|0x2 ) /*0x5b598e*/
    {
      MEMORY[0xA8B3AC] = SendMessageA(v3, 0x150u, (WPARAM)DlgItem, 0); /*0x5b599b*/
      *(_BYTE *)(this + 9) = 1; /*0x5b59a2*/
      *(_BYTE *)(this + 8) = 1; /*0x5b59a5*/
      LOBYTE(DlgItem) = 1; /*0x5b59a0*/
    }
  }
  return (char)DlgItem; /*0x5b59a8*/
}


// ==== 0x005B59B0  ModemGame::AdvanceTauntCommand  this=ModemGame  sig=csp ====
HWND __thiscall sub_5B59B0(int this)
{
  HWND result; // eax
  HWND v3; // ebx
  WPARAM v4; // esi
  int v5; // eax

  result = GetDlgItem(*(HWND *)this, 1029); /*0x5b59be*/
  v3 = result; /*0x5b59c4*/
  if ( result ) /*0x5b59c8*/
  {
    result = (HWND)SendMessageA(result, 0x147u, 0, 0); /*0x5b59da*/
    v4 = (WPARAM)result; /*0x5b59dc*/
    if ( result != HWND_MESSAGE|0x2 ) /*0x5b59e1*/
    {
      v5 = *(_DWORD *)(this + 72); /*0x5b59e3*/
      if ( v4 == v5 ) /*0x5b59e8*/
      {
        v4 = v5 + 1; /*0x5b59ea*/
        if ( v5 + 1 > 7 ) /*0x5b59f0*/
          v4 = 0; /*0x5b59f2*/
        SendMessageA(v3, 0x14Eu, v4, 0); /*0x5b59fd*/
      }
      MEMORY[0xA8B394] = v4; /*0x5b5a01*/
      *(_BYTE *)(this + 9) = 1; /*0x5b5a09*/
      *(_BYTE *)(this + 8) = 1; /*0x5b5a0c*/
      if ( v4 >= 8 ) /*0x5b5a0f*/
        return (HWND)SendMessageA(v3, 0x498u, 0, (LPARAM)Math::InitDegToRad); /*0x5b5a3c*/
      else
        return (HWND)SendMessageA(v3, 0x498u, 0, MEMORY[0x8316A8][v4]); /*0x5b5a26*/
    }
  }
  return result; /*0x5b5a28*/
}


// ==== 0x005B5A50  ObjectClass::method_5B5A50  this=ObjectClass  sig=csp ====
char __thiscall sub_5B5A50(int this, char a2)
{
  HWND DlgItem; // eax
  HWND v4; // esi
  wchar_t lParam[22]; // [esp+8h] [ebp-2Ch] BYREF

  DlgItem = GetDlgItem(*(HWND *)this, 1473); /*0x5b5a5f*/
  v4 = DlgItem; /*0x5b5a65*/
  if ( DlgItem ) /*0x5b5a69*/
  {
    SendMessageA(DlgItem, 0x4B3u, 0x15u, (LPARAM)lParam); /*0x5b5a7f*/
    WideString::Trim(lParam); /*0x5b5a85*/
    if ( !a2 ) /*0x5b5a90*/
      SendMessageA(v4, 0x4B2u, 0, (LPARAM)lParam); /*0x5b5a9f*/
    CopyWideToChar(MEMORY[0xA8B380], (char *)lParam, -1); /*0x5b5aac*/
    *(_BYTE *)(this + 9) = 1; /*0x5b5ab4*/
    *(_BYTE *)(this + 8) = 1; /*0x5b5ab7*/
    LOBYTE(DlgItem) = 1; /*0x5b5ab1*/
  }
  return (char)DlgItem; /*0x5b5aba*/
}


// ==== 0x005B5AD0  ModemGame::UpdatePlayerNameAndColor  this=ModemGame  sig=csp ====
HWND __thiscall ModemGame::UpdatePlayerNameAndColor(wchar_t *this, CellStruct *aP1, unsigned int a3, ModemGame *aP3)
{
  HWND v5; // edx
  HWND DlgItem; // eax
  LRESULT v7; // eax
  HWND result; // eax
  HWND v9; // esi
  int (__usercall *v10)@<eax>(char@<cf>, char@<zf>); // ebx
  HWND v11; // [esp-8h] [ebp-B8h]
  wchar_t lParam[80]; // [esp+10h] [ebp-A0h] BYREF

  wcscpy(this + 16, (const wchar_t *)aP1); /*0x5b5ae8*/
  v5 = *(HWND *)this; /*0x5b5aed*/
  *((_DWORD *)this + 18) = a3; /*0x5b5aff*/
  DlgItem = GetDlgItem(v5, 1029); /*0x5b5b08*/
  if ( DlgItem ) /*0x5b5b0c*/
  {
    v7 = SendMessageA(DlgItem, 0x147u, 0, 0); /*0x5b5b18*/
    if ( v7 != -1 && v7 == *((_DWORD *)this + 18) ) /*0x5b5b26*/
      ModemGame::AdvanceTauntCommand((int)this); /*0x5b5b2a*/
  }
  v11 = *(HWND *)this; /*0x5b5b3d*/
  *((_DWORD *)this + 19) = aP3; /*0x5b5b3e*/
  result = GetDlgItem(v11, 1640); /*0x5b5b41*/
  v9 = result; /*0x5b5b43*/
  if ( result ) /*0x5b5b47*/
  {
    swprintf( /*0x5b5b68*/
      lParam,
      (const size_t)&off_82C5C8,
      (const wchar_t *const)aP1,
      *(_DWORD *)(*((_DWORD *)g_SuperWeaponTypeCount + (_DWORD)aP3) + 96));
    SendMessageA(v9, 0x4B2u, 0, (LPARAM)lParam); /*0x5b5b83*/
    if ( a3 >= 8 ) /*0x5b5b87*/
      v10 = Math::InitDegToRad; /*0x5b5b97*/
    else
      v10 = *(int (__usercall **)@<eax>(char@<cf>, char@<zf>))&stru_830620.__pad_DFC[4 * a3 + 652]; /*0x5b5b8e*/
    return (HWND)SendMessageA(v9, 0x498u, 0, (LPARAM)v10); /*0x5b5ba6*/
  }
  return result; /*0x5b5ba8*/
}


// ==== 0x005B5BC0  Dialog::InitializeGameSettings  this=ModemGame  sig=csp ====
int __thiscall InitializeGameSettingsDialog(HWND *this)
{
  HWND DlgItem; // eax
  HWND v3; // eax
  HWND v4; // eax
  HWND v5; // eax
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  HWND v16; // eax
  HWND v17; // eax
  HWND v18; // eax
  HWND v19; // eax

  Debug::Log(); /*0x5b5bcb*/
  DlgItem = GetDlgItem(*this, 1641); /*0x5b5be1*/
  if ( DlgItem ) /*0x5b5bf0*/
    SendMessageA(DlgItem, 0x405u, 1u, MEMORY[0xA8B270]); /*0x5b5c00*/
  v3 = GetDlgItem(*this, 1360); /*0x5b5c0a*/
  if ( v3 ) /*0x5b5c0e*/
    SendMessageA(v3, 0x405u, 1u, g_RulesInitConfig); /*0x5b5c1e*/
  v4 = GetDlgItem(*this, 1026); /*0x5b5c28*/
  if ( v4 ) /*0x5b5c2c*/
    SendMessageA(v4, 0x405u, 1u, MEMORY[0xA8B25C]); /*0x5b5c3c*/
  v5 = GetDlgItem(*this, 1362); /*0x5b5c46*/
  if ( v5 ) /*0x5b5c4a*/
    SendMessageA(v5, 0x405u, 1u, MEMORY[0xA8B274]); /*0x5b5c5a*/
  v6 = GetDlgItem(*this, 1321); /*0x5b5c64*/
  if ( v6 ) /*0x5b5c68*/
    SendMessageA(v6, 0x405u, 1u, 6 - MEMORY[0xA8B268]); /*0x5b5c7f*/
  v7 = GetDlgItem(*this, 1363); /*0x5b5c89*/
  if ( v7 ) /*0x5b5c8d*/
    SendMessageA(v7, 0x405u, 1u, MEMORY[0xA8B278]); /*0x5b5c9d*/
  v8 = GetDlgItem(*this, 1643); /*0x5b5ca7*/
  if ( v8 ) /*0x5b5cab*/
    SendMessageA(v8, 0xF1u, (_BYTE)MEMORY[0xA8B320] == 1, 0); /*0x5b5cc3*/
  v9 = GetDlgItem(*this, 1642); /*0x5b5ccd*/
  if ( v9 ) /*0x5b5cd1*/
    SendMessageA(v9, 0xF1u, MEMORY[0xA8B258] == 1, 0); /*0x5b5ce9*/
  v10 = GetDlgItem(*this, 1361); /*0x5b5cf3*/
  if ( v10 ) /*0x5b5cf7*/
    SendMessageA(v10, 0xF1u, MEMORY[0xA8B26C] == 1, 0); /*0x5b5d0f*/
  v11 = GetDlgItem(*this, 1358); /*0x5b5d19*/
  if ( v11 ) /*0x5b5d1d*/
    SendMessageA(v11, 0xF1u, MEMORY[0xA8B262] == 1, 0); /*0x5b5d35*/
  v12 = GetDlgItem(*this, 1690); /*0x5b5d3f*/
  if ( v12 ) /*0x5b5d43*/
    SendMessageA(v12, 0xF1u, MEMORY[0xA8B263] == 1, 0); /*0x5b5d5b*/
  v13 = GetDlgItem(*this, 1693); /*0x5b5d65*/
  if ( v13 ) /*0x5b5d69*/
    SendMessageA(v13, 0xF1u, (_BYTE)MEMORY[0xA8B264] == 1, 0); /*0x5b5d81*/
  v14 = GetDlgItem(*this, 1356); /*0x5b5d8b*/
  if ( v14 ) /*0x5b5d8f*/
    SendMessageA(v14, 0xF1u, MEMORY[0xA8B261] == 1, 0); /*0x5b5da7*/
  v15 = GetDlgItem(*this, 1357); /*0x5b5db1*/
  if ( v15 ) /*0x5b5db5*/
    SendMessageA(v15, 0xF1u, MEMORY[0xA8B31F] == 1, 0); /*0x5b5dcd*/
  v16 = GetDlgItem(*this, 1572); /*0x5b5dd7*/
  if ( v16 ) /*0x5b5ddb*/
    SendMessageA(v16, 0xF1u, MEMORY[0xA8B260] == 1, 0); /*0x5b5df3*/
  v17 = GetDlgItem(*this, 1430); /*0x5b5dfd*/
  if ( v17 ) /*0x5b5e01*/
    SendMessageA(v17, 0xF1u, MEMORY[0xA8B31D] == 1, 0); /*0x5b5e19*/
  v18 = GetDlgItem(*this, 1448); /*0x5b5e23*/
  if ( v18 ) /*0x5b5e27*/
    SendMessageA(v18, 0x4B2u, 0, (LPARAM)&MEMORY[0xA8B320] + 2); /*0x5b5e36*/
  if ( !MEMORY[0xAC1154] || !*(_DWORD *)MEMORY[0xAC1154] ) /*0x5b5e41*/
    Session::PrepareGame(*this); /*0x5b5e48*/
  v19 = GetDlgItem(*this, 1); /*0x5b5e51*/
  if ( v19 ) /*0x5b5e55*/
    EnableWindow(v19, 1); /*0x5b5e59*/
  return PlayVocClass(HIDWORD(MEMORY[0x8871E0]->MovieOff), 0x2000, 1.0, 0); /*0x5b5e7c*/
}


// ==== 0x005B5E90  Network::SendSettingsRequest  this=Network  sig=csp ====
int __thiscall Network_SendSettingsRequest(HWND *this)
{
  HWND DlgItem; // eax
  _DWORD v3[62]; // [esp+0h] [ebp-FCh] BYREF
  __int16 v4; // [esp+F8h] [ebp-4h]

  DlgItem = GetDlgItem(*this, 1); /*0x5b5e9b*/
  if ( DlgItem ) /*0x5b5ea3*/
    EnableWindow(DlgItem, 0); /*0x5b5ea8*/
  memset(v3, 0, sizeof(v3)); /*0x5b5eba*/
  v4 = 0; /*0x5b5ec8*/
  v3[0] = 116; /*0x5b5ecf*/
  return Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v3, 250, 1); /*0x5b5edd*/
}


// ==== 0x005B5EF0  CellClass::LockSurface  this=ModemGuest  sig=csp ====
DWORD __thiscall sub_5B5EF0(int this, char a2)
{
  int v3; // edi
  int v4; // edi
  DWORD result; // eax
  int v6; // edi
  int v7; // edi
  _DWORD v8[62]; // [esp+Ch] [ebp-FCh] BYREF
  __int16 v9; // [esp+104h] [ebp-4h]

  Stream::ReadPacket((int)&MEMORY[0xA8EA70]); /*0x5b5f00*/
  if ( *(_BYTE *)(this + 9) == 1 ) /*0x5b5f0d*/
  {
    v3 = MEMORY[0x887340]; /*0x5b5f14*/
    if ( MEMORY[0x887338] != -1 ) /*0x5b5f1c*/
      v3 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5b5f2e*/
    if ( (unsigned int)(v3 - *(_DWORD *)(this + 12)) > 0x1E ) /*0x5b5f36*/
      goto LABEL_6; /*0x5b5f36*/
  }
  if ( a2 == 1 ) /*0x5b5f40*/
  {
LABEL_6:
    Surface_Lock((_DWORD *)this); /*0x5b5f44*/
    v4 = MEMORY[0x887340]; /*0x5b5f4e*/
    if ( MEMORY[0x887338] != -1 ) /*0x5b5f56*/
      v4 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5b5f68*/
    *(_DWORD *)(this + 12) = v4; /*0x5b5f6a*/
    *(_BYTE *)(this + 9) = 0; /*0x5b5f6d*/
  }
  result = MEMORY[0x887338]; /*0x5b5f71*/
  v6 = MEMORY[0x887340]; /*0x5b5f76*/
  if ( MEMORY[0x887338] != -1 ) /*0x5b5f7e*/
  {
    result = Timer::GetTicks() - MEMORY[0x887338]; /*0x5b5f8a*/
    v6 += result; /*0x5b5f90*/
  }
  if ( (unsigned int)(v6 - *(_DWORD *)(this + 28)) > 0x28 ) /*0x5b5f98*/
  {
    memset(v8, 0, sizeof(v8)); /*0x5b5fa5*/
    v9 = 0; /*0x5b5fa7*/
    v8[0] = 105; /*0x5b5fae*/
    *(_DWORD *)((char *)&v8[38] + 2) = CellClass::GetBridgeIndexThunk(&MEMORY[0xA8EA70]); /*0x5b5fc1*/
    LOBYTE(v8[6]) = MEMORY[0xA8DB30]; /*0x5b5fd8*/
    Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v8, 250, 0); /*0x5b5fdc*/
    result = MEMORY[0x887338]; /*0x5b5fe1*/
    v7 = MEMORY[0x887340]; /*0x5b5fe6*/
    if ( MEMORY[0x887338] != -1 ) /*0x5b5fee*/
    {
      result = Timer::GetTicks() - MEMORY[0x887338]; /*0x5b5ffa*/
      v7 += result; /*0x5b6000*/
    }
    *(_DWORD *)(this + 28) = v7; /*0x5b6002*/
  }
  return result; /*0x5b6005*/
}


// ==== 0x005B6020  ModemGame::ProcessPacket  this=ModemGame  sig=csp ====
char __thiscall ModemGame::ProcessPacket(int this)
{
  int v2; // esi
  VectorClass *v3; // eax
  wchar_t *v4; // eax
  char result; // al
  int v6; // edi
  int v7; // esi
  wchar_t *v8; // eax
  int v9; // esi
  int updated; // eax
  bool v11; // cl
  char *v12; // eax
  int v13; // ecx
  int v14; // esi
  int v15; // esi
  unsigned int v16; // ecx
  int v17; // esi
  wchar_t *v18; // eax
  char *v19; // ebp
  int v20; // esi
  HWND DlgItem; // edi
  int (__usercall *v22)@<eax>(char@<cf>, char@<zf>); // esi
  int v23; // esi
  int v24; // esi
  wchar_t *v25; // [esp-14h] [ebp-434h]
  wchar_t *v26; // [esp-14h] [ebp-434h]
  wchar_t *v27; // [esp-14h] [ebp-434h]
  wchar_t *v28; // [esp-14h] [ebp-434h]
  wchar_t *v29; // [esp-10h] [ebp-430h]
  wchar_t *v30; // [esp-10h] [ebp-430h]
  wchar_t *v31; // [esp-10h] [ebp-430h]
  wchar_t *v32; // [esp-10h] [ebp-430h]
  wchar_t *v33; // [esp-10h] [ebp-430h]
  wchar_t *v34; // [esp-10h] [ebp-430h]
  wchar_t *StringCSF; // [esp-10h] [ebp-430h]
  int v36; // [esp+0h] [ebp-420h] BYREF
  VectorClass *v37; // [esp+10h] [ebp-410h]
  VectorClass *v38; // [esp+14h] [ebp-40Ch]
  VectorClass *v39; // [esp+18h] [ebp-408h]
  VectorClass *v40; // [esp+1Ch] [ebp-404h]
  CampaignScore *v41; // [esp+20h] [ebp-400h]
  _BYTE aP2[38]; // [esp+24h] [ebp-3FCh] BYREF
  unsigned int v43; // [esp+4Ah] [ebp-3D6h]
  int v44; // [esp+AEh] [ebp-372h]
  unsigned int v45; // [esp+C2h] [ebp-35Eh]
  int v46; // [esp+F8h] [ebp-328h]
  int v47; // [esp+FCh] [ebp-324h]
  CellStruct aP1; // [esp+124h] [ebp-2FCh] BYREF

  Stream::ReadPacket((int)&HouseClass_Player.__pad_5568[22460]); /*0x5b6031*/
  if ( ObjectTypeClass::CreateInstance( /*0x5b604c*/
         (int)&HouseClass_Player.__pad_5568[22460],
         (CampaignScore *)&aP2[4],
         (CampaignScore *)aP2) <= 0 )
  {
LABEL_51:
    v17 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5b65d6*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5b65e3*/
      v17 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5b65f5*/
    if ( (unsigned int)(v17 - *(_DWORD *)(this + 20)) <= *(_DWORD *)(this + 24) ) /*0x5b6601*/
    {
      return 0; /*0x5b67af*/
    }
    else
    {
      Debug::Log(); /*0x5b660d*/
      v37 = (VectorClass *)&stru_82083C; /*0x5b661c*/
      StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_ModemGst_cpp, 1391); /*0x5b6639*/
      v18 = GetStringCSF(g_Str_TXT_SYSTEM_NOT_RESPONDING, 0, g_Str_File_ModemGst_cpp, 1391); /*0x5b664b*/
      Dialog::ShowMessageBox((int)v18, StringCSF, 0, 0, 0, v36); /*0x5b6655*/
      return 1; /*0x5b665d*/
    }
  }
  else
  {
    v2 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5b6057*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5b6062*/
      v2 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5b6074*/
    v3 = *(VectorClass **)&aP2[4]; /*0x5b6076*/
    *(_DWORD *)(this + 20) = v2; /*0x5b607a*/
    *(_DWORD *)(this + 24) = 1200; /*0x5b6080*/
    if ( (int)v3 >= 100 /*0x5b60a5*/
      && (int)v3 < 109
      && v3 != (VectorClass *)104
      && aP2[28] == *(_DWORD *)&HouseClass_Player.__pad_5568[18556] )
    {
      Debug::Log(); /*0x5b60ac*/
      v38 = (VectorClass *)&stru_82083C; /*0x5b60bb*/
      v29 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_ModemGst_cpp, 1177); /*0x5b60d8*/
      v4 = GetStringCSF(g_Str_TXT_SYSTEM_NOT_RESPONDING, 0, g_Str_File_ModemGst_cpp, 1177); /*0x5b60ea*/
      Dialog::ShowMessageBox((int)v4, v29, 0, 0, 0, v36); /*0x5b60f4*/
      return 1; /*0x5b6105*/
    }
    switch ( (unsigned int)v3 ) /*0x5b611a*/
    {
      case 'e': /*0x5b611a*/
        Debug::Log(); /*0x5b6208*/
        updated = NetworkBuffer::UpdateWindow( /*0x5b621f*/
                    (VersionClass *)&HouseClass_Player.__pad_5568[23084],
                    *(CellStruct **)&aP2[34],
                    v43);
        if ( !updated ) /*0x5b6226*/
        {
          v41 = &stru_82083C; /*0x5b623c*/
          v31 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_ModemGst_cpp, 1209); /*0x5b6249*/
          v25 = GetStringCSF(g_Str_TXT_DESTGAME_OUTDATED, 0, g_Str_File_ModemGst_cpp, 1209); /*0x5b6260*/
          Dialog::ShowMessageBox((int)v25, v31, 0, 0, 0, v36); /*0x5b6265*/
          goto LABEL_35; /*0x5b6265*/
        }
        if ( updated == -1 ) /*0x5b626c*/
        {
          v40 = (VectorClass *)&stru_82083C; /*0x5b6285*/
          v32 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_ModemGst_cpp, 1215); /*0x5b6292*/
          v26 = GetStringCSF(g_Str_TXT_YOURGAME_OUTDATED, 0, g_Str_File_ModemGst_cpp, 1215); /*0x5b62a9*/
          Dialog::ShowMessageBox((int)v26, v32, 0, 0, 0, v36); /*0x5b62ae*/
          goto LABEL_35; /*0x5b62ae*/
        }
        v11 = v44 == *(_DWORD *)(this + 80); /*0x5b62c3*/
        if ( v46 != *(_DWORD *)(this + 88) ) /*0x5b62d1*/
          v11 = 0; /*0x5b62d3*/
        if ( v47 != *(_DWORD *)(this + 84) || !v11 ) /*0x5b62e5*/
        {
          v39 = (VectorClass *)&stru_82083C; /*0x5b62fe*/
          v33 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_ModemGst_cpp, 1262); /*0x5b630b*/
          v27 = GetStringCSF(g_Str_TXT_MISMATCH, 0, g_Str_File_ModemGst_cpp, 1262); /*0x5b6322*/
          Dialog::ShowMessageBox((int)v27, v33, 0, 0, 0, v36); /*0x5b6327*/
          goto LABEL_35; /*0x5b6327*/
        }
        *(_DWORD *)&HouseClass_Player.__pad_5568[8088] = Network::GetMaxPacketSize((VersionClass *)&HouseClass_Player.__pad_5568[23084]); /*0x5b633b*/
        v12 = CharToWideString(&aP2[8]); /*0x5b6340*/
        ModemGame::UpdatePlayerNameAndColor((wchar_t *)this, (CellStruct *)v12, aP2[33], *(ModemGame **)&aP2[29]); /*0x5b6353*/
        if ( ApplyGameOptions((CampaignScore *)&aP2[4]) == 1 ) /*0x5b6366*/
          Dialog::InitializeGameSettings((HWND *)this); /*0x5b636e*/
        goto LABEL_51; /*0x5b6373*/
      case 'f': /*0x5b611a*/
        Debug::Log(); /*0x5b6126*/
        v6 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5b6130*/
        if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5b613b*/
          v6 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5b614d*/
        while ( 1 ) /*0x5b6154*/
        {
          v7 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5b6154*/
          if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5b615c*/
            v7 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5b616e*/
          if ( (unsigned int)(v7 - v6) >= 0x3C ) /*0x5b6175*/
            break; /*0x5b6175*/
          Event::Dispatch(); /*0x5b6177*/
          Stream::ReadPacket((int)&HouseClass_Player.__pad_5568[22460]); /*0x5b6181*/
        }
        v38 = (VectorClass *)&stru_82083C; /*0x5b619f*/
        v30 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_ModemGst_cpp, 1193); /*0x5b61ac*/
        v8 = GetStringCSF(aTxtUserSignedO, 0, g_Str_File_ModemGst_cpp, 1193); /*0x5b61be*/
        Dialog::ShowMessageBox((int)v8, v30, 0, 0, 0, v36); /*0x5b61c8*/
        v9 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5b61d2*/
        if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5b61da*/
          v9 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5b61ec*/
        *(_DWORD *)(this + 20) = v9; /*0x5b61ee*/
        Network::CleanupOnDisconnect(); /*0x5b61f1*/
        return 1; /*0x5b6202*/
      case 'g': /*0x5b611a*/
      case 'k': /*0x5b611a*/
        Debug::Log(); /*0x5b637d*/
        LOBYTE(v13) = HouseClass_Player.__pad_5568[10324]; /*0x5b6382*/
        if ( FindAndValidateMap( /*0x5b63a5*/
               (ObjectClass *)&HouseClass_Player.__pad_5568[9772],
               *(int *)&HouseClass_Player.__pad_5568[10320],
               &HouseClass_Player.__pad_5568[10286],
               v13,
               1) == 1 )
        {
          memset(&aP1, 0, 250); /*0x5b63b7*/
          aP1.field_0 = 114; /*0x5b63cd*/
          Stream::WriteBlock((int)&HouseClass_Player.__pad_5568[22460], &aP1, 250, 1); /*0x5b63d8*/
LABEL_43:
          strcpy((char *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4700), &HouseClass_Player.__pad_5568[9772]); /*0x5b650e*/
          *(_DWORD *)&HouseClass_Player.__pad_5568[8864] = 5; /*0x5b654d*/
          *(_DWORD *)&HouseClass_Player.__pad_5568[18664] = 0; /*0x5b6553*/
          *(_DWORD *)&HouseClass_Player.__pad_5568[8888] = 0; /*0x5b6559*/
          *(_DWORD *)&HouseClass_Player.__pad_5568[8892] = 0; /*0x5b655f*/
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8088] == 2 ) /*0x5b6565*/
          {
            v16 = (v45 >> 3) + 4; /*0x5b6576*/
            if ( 5 * (v16 / 5) <= 0xA ) /*0x5b6584*/
              *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = 10; /*0x5b658d*/
            else
              *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = 5 * (v16 / 5); /*0x5b6586*/
          }
          else
          {
            *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = v45 >> 3; /*0x5b65a5*/
            if ( v45 >> 3 <= 5 ) /*0x5b65aa*/
              *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = 5; /*0x5b65ac*/
          }
          if ( Game::StartModemMultiplayer(this, *(_DWORD *)&aP2[4] == 107) == 1 ) /*0x5b65c6*/
            *(_DWORD *)(this + 4) = 1; /*0x5b65cc*/
          else
            *(_DWORD *)(this + 4) = 2; /*0x5b6667*/
          goto LABEL_51; /*0x5b65cc*/
        }
        if ( !HouseClass_Player.__pad_5568[10324] || !_strcmpi(&HouseClass_Player.__pad_5568[9772], aRandmapSed) ) /*0x5b63fb*/
        {
          if ( !RequestNetworkFile(&HouseClass_Player.__pad_5568[9772], 1, 0) ) /*0x5b64d3*/
            return 1; /*0x5b64e8*/
          v15 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5b64ee*/
          if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5b64f7*/
            v15 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5b6509*/
          *(_DWORD *)(this + 20) = v15; /*0x5b650b*/
          goto LABEL_43; /*0x5b650b*/
        }
        memset(&aP1, 0, 250); /*0x5b641b*/
        aP1.field_0 = 115; /*0x5b6431*/
        Stream::WriteBlock((int)&HouseClass_Player.__pad_5568[22460], &aP1, 250, 1); /*0x5b643c*/
        Event::Dispatch(); /*0x5b6441*/
        Stream::ReadPacket((int)&HouseClass_Player.__pad_5568[22460]); /*0x5b644b*/
        v37 = (VectorClass *)&stru_82083C; /*0x5b6467*/
        v34 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_ModemGst_cpp, 1308); /*0x5b6474*/
        v28 = GetStringCSF(aTxtUnablePlayW, 0, g_Str_File_ModemGst_cpp, 1308); /*0x5b648b*/
        Dialog::ShowMessageBox((int)v28, v34, 0, 0, 0, v36); /*0x5b6490*/
LABEL_35:
        v14 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5b6495*/
        if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5b64a2*/
          v14 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5b64b4*/
        *(_DWORD *)(this + 20) = v14; /*0x5b64b6*/
        result = 1; /*0x5b64bc*/
        break; /*0x5b64c5*/
      case 'h': /*0x5b611a*/
        Debug::Log(); /*0x5b6674*/
        v19 = CharToWideString(&aP2[8]); /*0x5b6689*/
        v20 = aP2[28]; /*0x5b668f*/
        if ( &v36 != (int *)-65 ) /*0x5b6697*/
        {
          DlgItem = GetDlgItem(*(HWND *)this, 1343); /*0x5b66a7*/
          if ( DlgItem ) /*0x5b66ab*/
          {
            if ( v20 >= 8 ) /*0x5b66b4*/
              v22 = Math::InitDegToRad; /*0x5b66bf*/
            else
              v22 = *(int (__usercall **)@<eax>(char@<cf>, char@<zf>))&stru_830620.__pad_DFC[4 * v20 + 652]; /*0x5b66b6*/
            swprintf( /*0x5b66d8*/
              (wchar_t *const)aP1.__pad_FC,
              (const size_t)g_Str_Trace___s_,
              (const wchar_t *const)v19,
              (CampaignScore *)&aP2[29]);
            DrawDialogText((ObjectClass *)v22, (const wchar_t *)aP1.__pad_FC, DlgItem); /*0x5b66ea*/
          }
        }
        PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1708), 0x2000, 1.0, 0); /*0x5b6707*/
        goto LABEL_51; /*0x5b670c*/
      case 'j': /*0x5b611a*/
        Debug::Log(); /*0x5b6728*/
        *(_BYTE *)(this + 9) = 1; /*0x5b672d*/
        v23 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5b6736*/
        if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5b6741*/
          v23 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5b6753*/
        *(_DWORD *)(this + 12) = v23; /*0x5b6755*/
        goto LABEL_51; /*0x5b6758*/
      case 'u': /*0x5b611a*/
        Debug::Log(); /*0x5b6762*/
        ModemGame::ReceiveMapPreview((HWND *)this); /*0x5b676c*/
        v24 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5b6776*/
        if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5b677e*/
          v24 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5b6790*/
        *(_DWORD *)(this + 20) = v24; /*0x5b6792*/
        goto LABEL_51; /*0x5b6795*/
      default:
        Debug::Log(); /*0x5b6716*/
        goto LABEL_51; /*0x5b671e*/
    }
  }
  return result; /*0x5b60f9*/
}


// ==== 0x005B67F0  ApplyGameOptions  this=ModemGame  sig=csp ====
char __stdcall ApplyGameOptions(CampaignScore *aP0)
{
  int v1; // esi
  int v2; // eax
  int v3; // eax
  ObjectClass *v5; // edx
  int v6; // eax
  unsigned int v7; // edx
  int v8; // ecx
  bool v9; // al
  int v10; // edi
  const wchar_t *v11; // esi
  ObjectClass *v12; // esi

  if ( HouseClass_Player.__pad_5568[8100] == (BYTE2(aP0[3].CampaignScore_field_0x14) & 1) ) /*0x5b6807*/
  {
    v1 = *(int *)((char *)&aP0[3].CampaignScore_field_0x20 + 2); /*0x5b680d*/
    if ( HouseClass_Player.__pad_5568[8300] == ((v1 & 4) != 0) && HouseClass_Player.__pad_5568[8297] == ((v1 & 2) != 0) ) /*0x5b6836*/
    {
      v2 = *(int *)((char *)&aP0[3].CampaignScore_field_0x14 + 2); /*0x5b683c*/
      if ( HouseClass_Player.__pad_5568[8108] == ((v2 & 2) != 0) /*0x5b6920*/
        && HouseClass_Player.__pad_5568[8109] == ((v2 & 4) != 0)
        && HouseClass_Player.__pad_5568[8299] == ((v1 & 8) != 0)
        && *(_DWORD *)&HouseClass_Player.__pad_5568[8128] == LOBYTE(aP0[3].CampaignScore_field_0x20)
        && *(_DWORD *)&HouseClass_Player.__pad_5568[8132] == BYTE1(aP0[3].CampaignScore_field_0x20)
        && g_RulesInitConfig == (ObjectClass *)BYTE2(aP0[3].CampaignScore_field_0x1C)
        && *(_DWORD *)&HouseClass_Player.__pad_5568[8104] == *(int *)((char *)&aP0[3].CampaignScore_field_0x10 + 2)
        && *(_DWORD *)&HouseClass_Player.__pad_5568[8124] == HIBYTE(aP0[3].CampaignScore_field_0x1C)
        && *(_DWORD *)&HouseClass_Player.__pad_5568[23264] == *(_DWORD *)&aP0[4].__pad_0[2]
        && ApplyGameOptions_Helper(
             &HouseClass_Player.__pad_5568[22188],
             (int *)((char *)&aP0[4].CampaignScore_field_0x04 + 2))
        && *(_DWORD *)&HouseClass_Player.__pad_5568[8116] == BYTE2(aP0[4].CampaignScore_field_0x10) )
      {
        v3 = *(int *)((char *)&aP0[3].CampaignScore_field_0x20 + 2); /*0x5b6926*/
        if ( HouseClass_Player.__pad_5568[8110] == ((v3 & 0x10) != 0) /*0x5b69da*/
          && HouseClass_Player.__pad_5568[8111] == ((v3 & 0x20) != 0)
          && HouseClass_Player.__pad_5568[8112] == ((v3 & 0x40) != 0)
          && HouseClass_Player.__pad_5568[8120] == ((v3 & 0x80) != 0)
          && !_strcmpi(&HouseClass_Player.__pad_5568[9772], (char *)&aP0[4].CampaignScore_field_0x10 + 3)
          && !strcmp(&HouseClass_Player.__pad_5568[10286], (const char *)&aP0[4].CampaignScore_field_0x20)
          && *(_DWORD *)&HouseClass_Player.__pad_5568[10320] == *(int *)((char *)&aP0[4].CampaignScore_field_0x0C + 2) )
        {
          return 0; /*0x5b69de*/
        }
      }
    }
  }
  Debug::Log(); /*0x5b69e9*/
  HouseClass_Player.__pad_5568[8100] = BYTE2(aP0[3].CampaignScore_field_0x14) & 1; /*0x5b69fa*/
  HouseClass_Player.__pad_5568[8300] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x20 + 2) & 4) != 0; /*0x5b6a0c*/
  v5 = *(ObjectClass **)&HouseClass_Player.__pad_5568[22188]; /*0x5b6a18*/
  BYTE1(v5) = HouseClass_Player.__pad_5568[22189] & 0x7F; /*0x5b6a22*/
  HouseClass_Player.__pad_5568[8108] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x14 + 2) & 2) != 0; /*0x5b6a25*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[22188] = (unsigned int)v5 /*0x5b6a38*/
                                                  | ((*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x14 + 2) & 2) << 14);
  HouseClass_Player.__pad_5568[8109] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x14 + 2) & 4) != 0; /*0x5b6a49*/
  HouseClass_Player.__pad_5568[8299] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x20 + 2) & 8) != 0; /*0x5b6a5c*/
  HouseClass_Player.__pad_5568[8297] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x20 + 2) & 2) != 0; /*0x5b6a6f*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8128] = LOBYTE(aP0[3].CampaignScore_field_0x20); /*0x5b6a7b*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8132] = BYTE1(aP0[3].CampaignScore_field_0x20); /*0x5b6a88*/
  g_RulesInitConfig = (ObjectClass *)BYTE2(aP0[3].CampaignScore_field_0x1C); /*0x5b6a96*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8104] = *(int *)((char *)&aP0[3].CampaignScore_field_0x10 + 2); /*0x5b6a9f*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8124] = HIBYTE(aP0[3].CampaignScore_field_0x1C); /*0x5b6aaa*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[23264] = *(_DWORD *)&aP0[4].__pad_0[2]; /*0x5b6ab6*/
  v6 = *(int *)((char *)&aP0[4].CampaignScore_field_0x04 + 2); /*0x5b6abc*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[22188] = v6; /*0x5b6ac4*/
  LOBYTE(v6) = v6 | 0xC0; /*0x5b6acf*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8116] = BYTE2(aP0[4].CampaignScore_field_0x10); /*0x5b6ad1*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[22700] = *(_DWORD *)&HouseClass_Player.__pad_5568[8116]; /*0x5b6ad7*/
  HouseClass_Player.__pad_5568[8110] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x20 + 2) & 0x10) != 0; /*0x5b6ae9*/
  HouseClass_Player.__pad_5568[8111] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x20 + 2) & 0x20) != 0; /*0x5b6afb*/
  HouseClass_Player.__pad_5568[8112] = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x20 + 2) & 0x40) != 0; /*0x5b6b0d*/
  v7 = *(unsigned int *)((char *)&aP0[3].CampaignScore_field_0x20 + 2) >> 7; /*0x5b6b19*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[22188] = v6; /*0x5b6b1c*/
  HouseClass_Player.__pad_5568[8120] = v7 & 1; /*0x5b6b29*/
  v8 = **(_DWORD **)&HouseClass_Player.__pad_5568[8060]; /*0x5b6b2f*/
  BYTE1(v8) = BYTE1(**(_DWORD **)&HouseClass_Player.__pad_5568[8060]) & 0xFB; /*0x5b6b31*/
  **(_DWORD **)&HouseClass_Player.__pad_5568[8060] = v8; /*0x5b6b34*/
  HouseClass_Player.__pad_5568[8296] = 1; /*0x5b6b3b*/
  nullsub_37(); /*0x5b6b42*/
  if ( _strcmpi(&HouseClass_Player.__pad_5568[9772], (char *)&aP0[4].CampaignScore_field_0x10 + 3) /*0x5b6ba4*/
    || _strcmpi(&HouseClass_Player.__pad_5568[10286], &aP0[4].CampaignScore_field_0x20)
    || HouseClass_Player.__pad_5568[10324] != ((*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x14 + 2) & 0x10) != 0)
    || *(_DWORD *)&HouseClass_Player.__pad_5568[10320] != *(int *)((char *)&aP0[4].CampaignScore_field_0x0C + 2)
    || !*(_WORD *)&HouseClass_Player.__pad_5568[8302] )
  {
    Debug::Log(); /*0x5b6baf*/
    strcpy(&HouseClass_Player.__pad_5568[9772], (const char *)&aP0[4].CampaignScore_field_0x10 + 3); /*0x5b6bce*/
    strcpy(&HouseClass_Player.__pad_5568[10286], (const char *)&aP0[4].CampaignScore_field_0x20); /*0x5b6bf4*/
    v9 = (*(int *)((_BYTE *)&aP0[3].CampaignScore_field_0x14 + 2) & 0x10) != 0; /*0x5b6c0b*/
    HouseClass_Player.__pad_5568[10324] = v9; /*0x5b6c12*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[10320] = *(int *)((char *)&aP0[4].CampaignScore_field_0x0C + 2); /*0x5b6c1d*/
    if ( !strcmp(&HouseClass_Player.__pad_5568[9772], aRandmapSed) && v9 /*0x5b6c5d*/
      || (v10 = 0, *(int *)&HouseClass_Player.__pad_5568[9764] <= 0) )
    {
LABEL_33:
      wcscpy((wchar_t *)&HouseClass_Player.__pad_5568[8302], (const wchar_t *)&aP0[1].__pad_0[2]); /*0x5b6c86*/
    }
    else
    {
      while ( 1 ) /*0x5b6c64*/
      {
        v11 = *(const wchar_t **)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v10); /*0x5b6c64*/
        if ( !_strcmpi(&HouseClass_Player.__pad_5568[9772], v11 + 44) ) /*0x5b6c70*/
          break; /*0x5b6c70*/
        if ( ++v10 >= *(int *)&HouseClass_Player.__pad_5568[9764] ) /*0x5b6c84*/
          goto LABEL_33; /*0x5b6c84*/
      }
      wcscpy((wchar_t *)&HouseClass_Player.__pad_5568[8302], v11); /*0x5b6cc4*/
    }
    v12 = (ObjectClass *)*(&g_MatrixTransformState + 2257); /*0x5b6c94*/
    if ( *(&g_MatrixTransformState + 2257) ) /*0x5b6c9f*/
    {
      ComPtr::Dtor(*(&g_MatrixTransformState + 2257)); /*0x5b6ca3*/
      __3_YAXPAX_Z(v12); /*0x5b6ca9*/
      *(&g_MatrixTransformState + 2257) = 0; /*0x5b6cb1*/
    }
  }
  return 1; /*0x5b69dc*/
}


// ==== 0x005B6CD0  ObjectClass::Surface_Lock  this=ModemGuest  sig=csp ====
int __thiscall sub_5B6CD0(_DWORD *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // edx
  char v5; // dl
  _DWORD v7[62]; // [esp+8h] [ebp-FCh] BYREF
  __int16 v8; // [esp+100h] [ebp-4h]

  memset(v7, 0, sizeof(v7)); /*0x5b6ce5*/
  v2 = this->q015; /*0x5b6ce7*/
  v8 = 0; /*0x5b6cea*/
  v3 = this->q014; /*0x5b6cec*/
  v4 = this->q016; /*0x5b6cef*/
  v7[0] = 101; /*0x5b6cf2*/
  *(_DWORD *)((char *)&v7[33] + 2) = v3; /*0x5b6cfa*/
  v7[53] = v2; /*0x5b6d01*/
  v7[52] = v4; /*0x5b6d08*/
  v7[54] = GameOptions::GetEntry(); /*0x5b6d19*/
  *(_DWORD *)((char *)&v7[7] + 2) = NetworkBuffer::GetField2(); /*0x5b6d2a*/
  *(_DWORD *)((char *)&v7[8] + 2) = NetworkBuffer::GetField3(); /*0x5b6d33*/
  LOBYTE(v7[6]) = MEMORY[0xA8DB30]; /*0x5b6d3c*/
  v5 = MEMORY[0xA8B394]; /*0x5b6d5a*/
  strcpy((char *)&v7[1], MEMORY[0xA8B380]); /*0x5b6d63*/
  *(_DWORD *)((char *)&v7[6] + 1) = MEMORY[0xA8B3AC]; /*0x5b6d7d*/
  BYTE1(v7[7]) = v5; /*0x5b6d87*/
  return Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v7, 250, 1); /*0x5b6d90*/
}


// ==== 0x005B6DA0  ObjectClass::method_5B6DA0  this=ObjectClass  sig=csp ====
void __thiscall sub_5B6DA0(HWND *this, wchar_t *Source)
{
  char *v3; // eax
  unsigned int v4; // edi
  HWND DlgItem; // esi
  int (__usercall *v6)@<eax>(char@<cf>, char@<zf>); // edi
  wchar_t *Format; // [esp+10h] [ebp-300h]
  _DWORD v8[62]; // [esp+14h] [ebp-2FCh] BYREF
  __int16 v9; // [esp+10Ch] [ebp-204h]
  wchar_t Buffer[256]; // [esp+110h] [ebp-200h] BYREF

  if ( Source ) /*0x5b6db5*/
  {
    memset(v8, 0, sizeof(v8)); /*0x5b6dca*/
    v9 = 0; /*0x5b6dcc*/
    v8[0] = 104; /*0x5b6dd8*/
    strcpy((char *)&v8[1], MEMORY[0xA8B380]); /*0x5b6df4*/
    LOBYTE(v8[6]) = MEMORY[0xA8B394]; /*0x5b6e04*/
    wcscpy((wchar_t *)((char *)&v8[6] + 1), Source); /*0x5b6e08*/
    Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v8, 250, 1); /*0x5b6e21*/
    Stream::ReadPacket((int)&MEMORY[0xA8EA70]); /*0x5b6e2b*/
    v3 = CharToWideString(MEMORY[0xA8B380]); /*0x5b6e35*/
    v4 = MEMORY[0xA8B394]; /*0x5b6e3d*/
    Format = (wchar_t *)v3; /*0x5b6e49*/
    DlgItem = GetDlgItem(*this, 1343); /*0x5b6e53*/
    if ( DlgItem ) /*0x5b6e57*/
    {
      if ( v4 >= 8 ) /*0x5b6e5b*/
        v6 = Math::InitDegToRad; /*0x5b6e6b*/
      else
        v6 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))MEMORY[0x8316A8][v4]; /*0x5b6e62*/
      swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, Source); /*0x5b6e84*/
      DrawDialogText((LPARAM)v6, Buffer, DlgItem); /*0x5b6e96*/
    }
  }
}


// ==== 0x005B6EB0  ObjectClass::UI_Setup  this=ObjectClass  sig=csp ====
void __thiscall sub_5B6EB0(HWND *this, wchar_t *Format, unsigned int a3, int a4)
{
  HWND DlgItem; // edi
  int (__usercall *v5)@<eax>(char@<cf>, char@<zf>); // esi
  wchar_t Buffer[256]; // [esp+8h] [ebp-200h] BYREF

  if ( a4 ) /*0x5b6ec1*/
  {
    DlgItem = GetDlgItem(*this, 1343); /*0x5b6ed1*/
    if ( DlgItem ) /*0x5b6ed5*/
    {
      if ( a3 >= 8 ) /*0x5b6ee1*/
        v5 = Math::InitDegToRad; /*0x5b6ef1*/
      else
        v5 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))MEMORY[0x8316A8][a3]; /*0x5b6ee8*/
      swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, a4); /*0x5b6f0a*/
      DrawDialogText((LPARAM)v5, Buffer, DlgItem); /*0x5b6f19*/
    }
  }
}


// ==== 0x005B6F30  ReadEventINI  this=ModemGuest  sig=ida-proto ====
HWND sub_5B6F30()
{
  wchar_t *StringCSF; // eax
  HWND MessageBox; // eax
  HWND v2; // ebx
  int v3; // edi
  int v4; // esi
  HWND result; // eax
  _BYTE v6[4]; // [esp+8h] [ebp-1FCh] BYREF
  _DWORD v7[62]; // [esp+Ch] [ebp-1F8h] BYREF
  __int16 v8; // [esp+104h] [ebp-100h]
  _DWORD v9[6]; // [esp+108h] [ebp-FCh] BYREF
  int v10; // [esp+120h] [ebp-E4h]

  memset(v7, 0, sizeof(v7)); /*0x5b6f45*/
  v8 = 0; /*0x5b6f51*/
  LOBYTE(v7[6]) = MEMORY[0xA8DB30]; /*0x5b6f58*/
  v7[0] = 102; /*0x5b6f67*/
  BYTE1(v7[7]) = MEMORY[0xA8B394]; /*0x5b6f6f*/
  Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v7, 250, 1); /*0x5b6f73*/
  StringCSF = GetStringCSF(aTxtSigningOff, 0, g_Str_File_ModemGst_cpp, 1683); /*0x5b6f8b*/
  MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5b6f94*/
  v2 = MessageBox; /*0x5b6f99*/
  if ( MessageBox ) /*0x5b6f9d*/
    Dialog::Show(MessageBox); /*0x5b6fa1*/
  v3 = MEMORY[0x887340]; /*0x5b6fab*/
  if ( MEMORY[0x887338] != -1 ) /*0x5b6fb4*/
    v3 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5b6fc6*/
  while ( Count::GetCountQueue(&MEMORY[0xA8EA70]) ) /*0x5b6fcd*/
  {
    v4 = MEMORY[0x887340]; /*0x5b6fe0*/
    if ( MEMORY[0x887338] != -1 ) /*0x5b6fe9*/
      v4 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5b6ffb*/
    if ( (unsigned int)(v4 - v3) >= 0x12C /*0x5b7040*/
      || ObjectTypeClass::CreateInstance((int)&MEMORY[0xA8EA70], (int)v9, (int)v6) > 0
      && v9[0] == 102
      && (unsigned __int8)v10 == MEMORY[0xA8DB30] )
    {
      break; /*0x5b7040*/
    }
    Event::Dispatch(); /*0x5b7042*/
    MessageLoop(); /*0x5b7047*/
    Stream::ReadPacket((int)&MEMORY[0xA8EA70]); /*0x5b7051*/
  }
  result = (HWND)Network::CleanupOnDisconnect(); /*0x5b7069*/
  if ( v2 ) /*0x5b7070*/
    return Dialog::Destroy(v2); /*0x5b7074*/
  return result; /*0x5b7079*/
}


// ==== 0x005B7090  Game::StartModemMultiplayer  this=Game  sig=csp ====
char __thiscall StartModemMultiplayerGame(int this, char a2)
{
  _BYTE *v4; // eax
  _BYTE *v5; // esi
  int v6; // eax
  char *v7; // eax
  char *v8; // esi
  int v9; // eax
  wchar_t *StringCSF; // eax
  HWND MessageBox; // eax
  HWND v12; // ebp
  int v13; // edi
  int v14; // esi
  int v15; // esi
  int v16; // ecx
  int v17; // edx

  if ( a2 == 1 ) /*0x5b709b*/
    return 0; /*0x5b709f*/
  Game::processStartup(this); /*0x5b70a7*/
  MEMORY[0xA8B54C] = 0; /*0x5b70b1*/
  v4 = __2_YAPAXI_Z(0x85u); /*0x5b70bb*/
  v5 = v4; /*0x5b70c0*/
  if ( v4 ) /*0x5b70ca*/
  {
    Waypoint::InitInvalid(v4 + 40); /*0x5b70d3*/
    BulkCharToWide(v5, (unsigned __int8 *)MEMORY[0xA8B380], -1); /*0x5b70e0*/
    *(_DWORD *)(v5 + 75) = MEMORY[0xA8B3AC]; /*0x5b70ea*/
    *(_DWORD *)(v5 + 83) = MEMORY[0xA8B394]; /*0x5b70f3*/
    *(_DWORD *)(v5 + 115) = -1; /*0x5b70f6*/
    if ( MEMORY[0xA8DA84] < MEMORY[0xA8DA7C] /*0x5b7130*/
      || (MEMORY[0xA8DA81] || !MEMORY[0xA8DA7C])
      && MEMORY[0xA8DA88] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8DA74] + 8))(
           &MEMORY[0xA8DA74],
           MEMORY[0xA8DA7C] + MEMORY[0xA8DA88],
           0) )
    {
      v6 = MEMORY[0xA8DA84]++; /*0x5b713d*/
      *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v6) = v5; /*0x5b714c*/
    }
    ++MEMORY[0xA8B54C]; /*0x5b714f*/
  }
  v7 = (char *)__2_YAPAXI_Z(0x85u); /*0x5b715a*/
  v8 = v7; /*0x5b715f*/
  if ( v7 ) /*0x5b7166*/
  {
    Waypoint::InitInvalid(v7 + 40); /*0x5b716f*/
    wcscpy((wchar_t *)v8, (const wchar_t *)(this + 32)); /*0x5b7179*/
    *(_DWORD *)(v8 + 75) = *(_DWORD *)(this + 76); /*0x5b7184*/
    *(_DWORD *)(v8 + 83) = *(_DWORD *)(this + 72); /*0x5b718a*/
    *(_DWORD *)(v8 + 115) = -1; /*0x5b718d*/
    if ( MEMORY[0xA8DA84] < MEMORY[0xA8DA7C] /*0x5b71c7*/
      || (MEMORY[0xA8DA81] || !MEMORY[0xA8DA7C])
      && MEMORY[0xA8DA88] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8DA74] + 8))(
           &MEMORY[0xA8DA74],
           MEMORY[0xA8DA7C] + MEMORY[0xA8DA88],
           0) )
    {
      v9 = MEMORY[0xA8DA84]++; /*0x5b71d4*/
      *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v9) = v8; /*0x5b71e3*/
    }
    ++MEMORY[0xA8B54C]; /*0x5b71e6*/
  }
  if ( MEMORY[0xA8B54C] != 2 ) /*0x5b71f3*/
    return 0; /*0x5b71f7*/
  StringCSF = GetStringCSF(aTxtSendingGoAc, 0, g_Str_File_ModemGst_cpp, 1779); /*0x5b7211*/
  MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5b721a*/
  v12 = MessageBox; /*0x5b721f*/
  if ( MessageBox ) /*0x5b7223*/
    Dialog::Show(MessageBox); /*0x5b7227*/
  v13 = MEMORY[0x887340]; /*0x5b7231*/
  if ( MEMORY[0x887338] != -1 ) /*0x5b7239*/
    v13 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5b724b*/
  while ( 1 ) /*0x5b7252*/
  {
    if ( !Count::GetCountQueue(&MEMORY[0xA8EA70]) ) /*0x5b7252*/
      goto LABEL_31; /*0x5b7252*/
    v14 = MEMORY[0x887340]; /*0x5b7260*/
    if ( MEMORY[0x887338] != -1 ) /*0x5b7268*/
      v14 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5b727a*/
    if ( (unsigned int)(v14 - v13) >= 0x708 ) /*0x5b7284*/
    {
LABEL_31:
      v15 = MEMORY[0x887340]; /*0x5b728b*/
      if ( MEMORY[0x887338] != -1 ) /*0x5b7293*/
        v15 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5b72a5*/
      if ( (unsigned int)(v15 - v13) >= 0x3C ) /*0x5b72ac*/
        break; /*0x5b72ac*/
    }
    Event::Dispatch(); /*0x5b72ae*/
    MessageLoop(); /*0x5b72b3*/
    Stream::ReadPacket((int)&MEMORY[0xA8EA70]); /*0x5b72bd*/
  }
  if ( v12 ) /*0x5b72c6*/
    Dialog::Destroy(v12); /*0x5b72ca*/
  EventClass::CheckFlag(&MEMORY[0xA8EA70]); /*0x5b72d4*/
  MEMORY[0xA8D60E] = 0; /*0x5b72e4*/
  *((_DWORD *)MEMORY[0xA8B230] + 1173) = MEMORY[0xA8B254]; /*0x5b72eb*/
  MEMORY[0xA8B54C] = MEMORY[0xA8DA84]; /*0x5b730b*/
  v16 = MEMORY[0xA8E960]; /*0x5b7311*/
  BYTE1(v16) = BYTE1(MEMORY[0xA8E960]) & 0x77; /*0x5b7319*/
  v17 = v16 | ((MEMORY[0xA8B31D] & 1 | (16 * (MEMORY[0xA8B260] & 1))) << 11); /*0x5b731f*/
  LOBYTE(v17) = MEMORY[0xA8E960] | 0xC0; /*0x5b7326*/
  MEMORY[0xA8ED84] = 0; /*0x5b7329*/
  MEMORY[0xA8B24C] = 2; /*0x5b7333*/
  MEMORY[0xA8E960] = v17; /*0x5b733d*/
  nullsub_37(&MEMORY[0xA8E960]); /*0x5b7343*/
  return 1; /*0x5b709d*/
}


// ==== 0x005B7360  ModemGame::ReceiveMapPreview  this=ModemGame  sig=csp ====
void __thiscall ModemGame::ReceiveMapPreview(HWND *this)
{
  int v1; // esi
  int v2; // eax
  int FileSize; // esi
  char *v4; // edi
  signed int v5; // ebx
  char *v6; // esi
  void *v7; // ebx
  void *v8; // eax
  void *v9; // eax
  DWORD Ticks; // [esp+Ch] [ebp-280h]
  int v12[3]; // [esp+1Ch] [ebp-270h] BYREF
  _DWORD v13[5]; // [esp+28h] [ebp-264h] BYREF
  int v14[9]; // [esp+44h] [ebp-248h] BYREF
  int v15[10]; // [esp+68h] [ebp-224h] BYREF
  _DWORD v16[62]; // [esp+90h] [ebp-1FCh] BYREF
  __int16 v17; // [esp+188h] [ebp-104h]
  char v18[256]; // [esp+18Ch] [ebp-100h] BYREF

  Timer::GetTicks(); /*0x5b7371*/
  Debug::Log(); /*0x5b7385*/
  memset(v16, 0, sizeof(v16)); /*0x5b739d*/
  v17 = 0; /*0x5b739f*/
  v16[0] = 118; /*0x5b73a1*/
  Debug::Log(); /*0x5b73ac*/
  Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v16, 250, 1); /*0x5b73c8*/
  Ticks = Timer::GetTicks(); /*0x5b73e8*/
  while ( Count::GetCountQueue(&MEMORY[0xA8EA70]) > 0 ) /*0x5b73f7*/
  {
    v1 = 600; /*0x5b7400*/
    if ( Ticks != -1 ) /*0x5b7406*/
    {
      v2 = Timer::GetTicks() - Ticks; /*0x5b7411*/
      if ( v2 >= 600 ) /*0x5b7417*/
        break; /*0x5b7417*/
      v1 = 600 - v2; /*0x5b7419*/
    }
    if ( !v1 ) /*0x5b741d*/
      break; /*0x5b741d*/
    Event::Dispatch(); /*0x5b741f*/
  }
  Debug::Log(); /*0x5b7432*/
  Debug::Log(); /*0x5b7441*/
  if ( RequestNetworkFile(v18, 1, 0) ) /*0x5b7456*/
  {
    Debug::Log(); /*0x5b747c*/
    RawFileClass::Construct(v14, (int)v18); /*0x5b7490*/
    FileSize = CCFileClass::GetFileSize(v14); /*0x5b749e*/
    v4 = (char *)__2_YAPAXI_Z(FileSize); /*0x5b74a9*/
    FileClass::Read(v14, v4, FileSize); /*0x5b74b1*/
    v5 = *(_DWORD *)v4; /*0x5b74b6*/
    Debug::Log(); /*0x5b74bd*/
    v12[1] = 0; /*0x5b74c8*/
    v12[2] = 0; /*0x5b74cc*/
    Buffer::Init(v13, (int)(v4 + 4), FileSize); /*0x5b74de*/
    v13[3] = 0; /*0x5b74ee*/
    v12[0] = (int)&vt_BufferStraw; /*0x5b74f2*/
    LZOStraw::Constructor(v15, 1, 0x2000); /*0x5b74fa*/
    Delegate::Set(v15, (int)v12); /*0x5b7508*/
    v6 = (char *)__2_YAPAXI_Z(2 * v5); /*0x5b7519*/
    LCW::Decompress((int)v15, v6, v5); /*0x5b7521*/
    Debug::Log(); /*0x5b752b*/
    if ( MEMORY[0xAC1154] ) /*0x5b753a*/
    {
      v7 = MEMORY[0xAC1154]; /*0x5b753c*/
      ComPtr::Dtor(MEMORY[0xAC1154]); /*0x5b7544*/
      __3_YAXPAX_Z(v7); /*0x5b754a*/
    }
    v8 = __2_YAPAXI_Z(4u); /*0x5b7554*/
    if ( v8 ) /*0x5b755f*/
      v9 = (void *)unknown_libname_27(v8); /*0x5b7563*/
    else
      v9 = 0; /*0x5b756a*/
    MEMORY[0xAC1154] = v9; /*0x5b756f*/
    ModemGame::RenderPaletteImage(v6); /*0x5b7574*/
    InvalidateRect(*this, 0, 0); /*0x5b7582*/
    Debug::Log(); /*0x5b758d*/
    __3_YAXPAX_Z(v6); /*0x5b7593*/
    __3_YAXPAX_Z(v4); /*0x5b7599*/
    LZOStraw::Destructor(v15); /*0x5b75a5*/
    Vector::Clear((int)v13); /*0x5b75ae*/
    Straw::Dtor(v12); /*0x5b75b7*/
    RawFileClass::Dtor(v14); /*0x5b75c0*/
  }
  else
  {
    Debug::Log(); /*0x5b7464*/
  }
}


// ==== 0x005B75D0  sub_5B75D0  this=-  sig=ida-proto ====
int sub_5B75D0()
{
  MEMORY[0xABF098] = 0; /*0x5b75d2*/
  MEMORY[0xABF09C] = 0; /*0x5b75d7*/
  MEMORY[0xABF0A0] = 0; /*0x5b75dc*/
  MEMORY[0xABF0A4] = 0; /*0x5b75e1*/
  return 0; /*0x5b75e6*/
}


// ==== 0x005B75F0  sub_5B75F0  this=-  sig=ida-proto ====
void sub_5B75F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b75fc*/
  MEMORY[0xABF0B0] = Math::Sqrt(v0 + v0); /*0x5b760e*/
}


// ==== 0x005B7620  sub_5B7620  this=-  sig=ida-proto ====
void sub_5B7620()
{
  MEMORY[0xABF100] = MEMORY[0xABF0B0] / 60.0; /*0x5b762c*/
}


// ==== 0x005B7640  sub_5B7640  this=-  sig=ida-proto ====
void sub_5B7640()
{
  MEMORY[0xABF0E8] = 1.0 / MEMORY[0xABF100]; /*0x5b764c*/
}


// ==== 0x005B7660  sub_5B7660  this=-  sig=ida-proto ====
void sub_5B7660()
{
  MEMORY[0xABF0E0] = 0.0174532925199433 * 45.0; /*0x5b766c*/
}


// ==== 0x005B7680  sub_5B7680  this=-  sig=ida-proto ====
void sub_5B7680()
{
  MEMORY[0xABF0B8] = 0.0174532925199433 * 60.0; /*0x5b768c*/
}


// ==== 0x005B76A0  sub_5B76A0  this=-  sig=ida-proto ====
void sub_5B76A0()
{
  MEMORY[0xABF090] = 0.0174532925199433 * 90.0; /*0x5b76ac*/
}


// ==== 0x005B76C0  sub_5B76C0  this=-  sig=ida-proto ====
__int64 sub_5B76C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABF090] - MEMORY[0xABF0B8]); /*0x5b76d2*/
  result = Math::RoundToInt(v0 * MEMORY[0xABF0B0] * 0.5); /*0x5b76e6*/
  MEMORY[0xABF108] = result; /*0x5b76eb*/
  return result; /*0x5b76f0*/
}


// ==== 0x005B7700  sub_5B7700  this=-  sig=ida-proto ====
void sub_5B7700()
{
  MEMORY[0xABF0C0] = Math::ArcTan((double)MEMORY[0xABF108] * 0.00390625); /*0x5b7717*/
}


// ==== 0x005B7730  sub_5B7730  this=-  sig=ida-proto ====
void sub_5B7730()
{
  MEMORY[0xABF0D8] = Math::ArcTan((double)(2 * MEMORY[0xABF108]) / MEMORY[0xABF0B0]); /*0x5b7752*/
}


// ==== 0x005B7760  sub_5B7760  this=-  sig=ida-proto ====
__int64 sub_5B7760()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABF108]) + 0.5); /*0x5b777b*/
  MEMORY[0xABF0FC] = result; /*0x5b7780*/
  return result; /*0x5b7786*/
}


// ==== 0x005B7790  sub_5B7790  this=-  sig=ida-proto ====
int sub_5B7790()
{
  MEMORY[0xABF0A8] = 0; /*0x5b7792*/
  MEMORY[0xABF0AA] = 0; /*0x5b7798*/
  return 0; /*0x5b779e*/
}


// ==== 0x005B77A0  sub_5B77A0  this=-  sig=ida-proto ====
int sub_5B77A0()
{
  MEMORY[0xABF0C8] = 0; /*0x5b77a2*/
  MEMORY[0xABF0CC] = 0; /*0x5b77a7*/
  MEMORY[0xABF0D0] = 0; /*0x5b77ac*/
  return 0; /*0x5b77b1*/
}


// ==== 0x005B77C0  sub_5B77C0  this=-  sig=ida-proto ====
int sub_5B77C0()
{
  MEMORY[0xABF0F8] = 0; /*0x5b77c5*/
  MEMORY[0xABF0F0] = 128; /*0x5b77cf*/
  MEMORY[0xABF0F4] = 128; /*0x5b77d4*/
  return 128; /*0x5b77d9*/
}


// ==== 0x005B77E0  ModemHost::Dialog  this=ModemHost  sig=csp ====
char __thiscall ModemHost::Dialog(LONG dwNewLong)
{
  HWND Dialog; // eax
  int v3; // edi
  int v4; // edi
  char v6; // [esp+Fh] [ebp-1h]

  v6 = 0; /*0x5b77ed*/
  Debug::Log(); /*0x5b77f1*/
  *(_DWORD *)(dwNewLong + 4) = -1; /*0x5b7807*/
  Dialog = (HWND)CreateDialog(0xF1u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))NetworkGameSetup::DlgProc, 0); /*0x5b780a*/
  *(_DWORD *)dwNewLong = Dialog; /*0x5b7811*/
  if ( Dialog ) /*0x5b7813*/
  {
    SetWindowLongA(Dialog, 8, dwNewLong); /*0x5b781e*/
    ModemHost::InitDialog((HWND *)dwNewLong); /*0x5b7826*/
    Dialog::Show(*(HWND *)dwNewLong); /*0x5b782d*/
    *(_BYTE *)(dwNewLong + 8) = 0; /*0x5b7832*/
    *(_BYTE *)(dwNewLong + 9) = 1; /*0x5b7835*/
    v3 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9460]; /*0x5b783e*/
    if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9452] != -1 ) /*0x5b7846*/
      v3 += Timer::GetTicks() - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9452]; /*0x5b7858*/
    *(_DWORD *)(dwNewLong + 12) = v3; /*0x5b785a*/
    *(_DWORD *)(dwNewLong + 16) = 10000; /*0x5b785d*/
    v4 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9460]; /*0x5b7869*/
    if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9452] != -1 ) /*0x5b7871*/
      v4 += Timer::GetTicks() - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9452]; /*0x5b7883*/
    *(_DWORD *)(dwNewLong + 20) = v4; /*0x5b7885*/
    *(_DWORD *)(dwNewLong + 24) = 1200; /*0x5b7888*/
    *(_DWORD *)(dwNewLong + 28) = 0; /*0x5b788f*/
    *(_BYTE *)(dwNewLong + 32) = 0; /*0x5b7892*/
    *(_WORD *)(dwNewLong + 34) = 0; /*0x5b7895*/
    *(_DWORD *)(dwNewLong + 76) = -1; /*0x5b7899*/
    *(_DWORD *)(dwNewLong + 80) = -1; /*0x5b789c*/
    *(&g_MatrixTransformState + 191) = (CoordStruct *)dwNewLong; /*0x5b789f*/
    *(_DWORD *)(dwNewLong + 84) = GameConfig::ComputeHash(); /*0x5b78aa*/
    LoadArtINI(); /*0x5b78ad*/
    *(_DWORD *)(dwNewLong + 88) = unknown_libname_29(); /*0x5b78b7*/
    *(_DWORD *)(dwNewLong + 92) = unknown_libname_30(); /*0x5b78c5*/
    while ( 1 ) /*0x5b78c8*/
    {
      *(_DWORD *)(dwNewLong + 4) = -1; /*0x5b78c8*/
      do /*0x5b78f2*/
      {
        if ( Dialog::PumpMessages() == 1 ) /*0x5b78d2*/
          break; /*0x5b78d2*/
        CellClass::SetOccupancy(dwNewLong, 0); /*0x5b78d7*/
        if ( ModemGuest::ProcessPacket(dwNewLong, 0) == 1 ) /*0x5b78e6*/
          break; /*0x5b78e6*/
        ScreenSaver::Process(0, 0, -1); /*0x5b78ea*/
      }
      while ( *(int *)(dwNewLong + 4) < 0 ); /*0x5b78f2*/
      if ( *(_DWORD *)(dwNewLong + 4) != 1 ) /*0x5b78f8*/
        break; /*0x5b78f8*/
      ShowWindow(*(HWND *)dwNewLong, 0); /*0x5b78fe*/
      if ( ModemHost::StartGame(dwNewLong, 0) == 1 ) /*0x5b790a*/
      {
        v6 = 1; /*0x5b7915*/
        break; /*0x5b7915*/
      }
      ShowWindow(*(HWND *)dwNewLong, 5); /*0x5b7911*/
    }
    Dialog::Destroy(*(SkirmishDialog **)dwNewLong); /*0x5b791a*/
    *(&g_MatrixTransformState + 191) = 0; /*0x5b7921*/
    if ( *(_BYTE *)(dwNewLong + 8) == 1 ) /*0x5b792d*/
      SaveConfigWOL((int)&MEMORY[0xA8B238]); /*0x5b7934*/
  }
  if ( *(_DWORD *)(dwNewLong + 4) == 2 ) /*0x5b793d*/
    SendSignOffEvent(); /*0x5b7941*/
  Debug::Log(); /*0x5b795f*/
  return v6; /*0x5b7969*/
}


// ==== 0x005B7970  NetworkGameSetup::DlgProc  this=NetworkGameSetup  sig=csp ====
int __stdcall NetworkGameSetup_DlgProc(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  LONG WindowLongA; // ebp
  HWND v6; // eax
  HWND v7; // esi
  unsigned int v8; // eax
  HWND v9; // eax
  HWND v10; // esi
  HWND v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  HWND v16; // eax
  HWND v17; // esi
  LRESULT v18; // eax
  LRESULT v19; // eax
  HWND v20; // eax
  HWND v21; // esi
  HWND v22; // eax
  HWND v23; // eax
  LRESULT v24; // eax
  HWND v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  HWND DlgItem; // eax
  wchar_t v29[20]; // [esp+Ch] [ebp-228h] BYREF
  wchar_t lParam[256]; // [esp+34h] [ebp-200h] BYREF

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x5b7999*/
  if ( result ) /*0x5b79a0*/
    return result; /*0x5b79a0*/
  WindowLongA = GetWindowLongA(hWnd, 8); /*0x5b79b0*/
  if ( a2 > 0x111 ) /*0x5b79be*/
  {
    if ( a2 >= 0x114 && a2 <= 0x115 ) /*0x5b80d5*/
    {
      if ( GetDlgItem(hWnd, 1641) == a4 ) /*0x5b80eb*/
      {
        DlgItem = GetDlgItem(*(HWND *)WindowLongA, 1641); /*0x5b80f6*/
        if ( DlgItem ) /*0x5b80fa*/
        {
          MEMORY[0xA8B270] = SendMessageA(DlgItem, 0x400u, 0, 0); /*0x5b8110*/
          *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b8115*/
          return 0; /*0x5b8125*/
        }
      }
      else
      {
        if ( GetDlgItem(hWnd, 1360) == a4 ) /*0x5b8132*/
        {
          NetworkGameSetup::ReadRulesInitConfig(WindowLongA); /*0x5b8136*/
          return 0; /*0x5b8147*/
        }
        if ( GetDlgItem(hWnd, 1026) == a4 ) /*0x5b8154*/
        {
          NetworkGameSetup::ReadRulesBases(WindowLongA); /*0x5b8158*/
          return 0; /*0x5b8169*/
        }
        if ( GetDlgItem(hWnd, 1362) == a4 ) /*0x5b8176*/
        {
          NetworkGameSetup::ReadRulesAlliesAllowed(WindowLongA); /*0x5b817a*/
          return 0; /*0x5b818b*/
        }
        if ( GetDlgItem(hWnd, 1363) == a4 ) /*0x5b8198*/
        {
          NetworkGameSetup::ReadRulesUnknown(WindowLongA); /*0x5b819c*/
          return 0; /*0x5b81ad*/
        }
        if ( GetDlgItem(hWnd, 1321) == a4 ) /*0x5b81ba*/
          NetworkGameSetup::ReadRulesEngineerCount(WindowLongA); /*0x5b81be*/
      }
    }
    return 0; /*0x5b80fa*/
  }
  if ( a2 != 273 ) /*0x5b79c9*/
  {
    if ( a2 == 2 ) /*0x5b79ce*/
    {
      if ( MEMORY[0xAC1154] ) /*0x5b7a09*/
      {
        NetworkGameSetup::DeleteComPtr(MEMORY[0xAC1154], 1); /*0x5b7a11*/
        MEMORY[0xAC1154] = 0; /*0x5b7a19*/
        return 0; /*0x5b7a2c*/
      }
    }
    else if ( a2 == 15 ) /*0x5b79d3*/
    {
      if ( MEMORY[0xAC1154] ) /*0x5b79e1*/
        Skirmish::RenderPreview(MEMORY[0xAC1154], hWnd); /*0x5b79e4*/
      ValidateRect(hWnd, 0); /*0x5b79ec*/
      return 0; /*0x5b79fe*/
    }
    return 0; /*0x5b79d3*/
  }
  if ( (unsigned __int16)a3 > 0x596u ) /*0x5b7a3b*/
  {
    switch ( (__int16)a3 ) /*0x5b7de9*/
    {
      case 1450: /*0x5b7de9*/
        if ( HIWORD(a3) ) /*0x5b80a6*/
          return 0; /*0x5b80a9*/
        SkirmishDialog::HandleGameStart(WindowLongA); /*0x5b80b1*/
        result = 0; /*0x5b80b9*/
        break; /*0x5b80c2*/
      case 1473: /*0x5b7de9*/
        if ( HIWORD(a3) != 1281 && HIWORD(a3) != 768 ) /*0x5b7e71*/
          return 0; /*0x5b7e71*/
        v20 = GetDlgItem(*(HWND *)WindowLongA, 1473); /*0x5b7e80*/
        v21 = v20; /*0x5b7e86*/
        if ( !v20 ) /*0x5b7e8a*/
          return 0; /*0x5b7e8a*/
        SendMessageA(v20, 0x4B3u, 0x14u, (LPARAM)v29); /*0x5b7ea3*/
        WideString::Trim(v29); /*0x5b7ea9*/
        if ( HIWORD(a3) != 768 ) /*0x5b7eb3*/
          SendMessageA(v21, 0x4B2u, 0, (LPARAM)v29); /*0x5b7ec2*/
        strcpy(MEMORY[0xA8B380], ToWideStringChar((char *)v29)); /*0x5b7eeb*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7ef4*/
        *(_BYTE *)(WindowLongA + 8) = 1; /*0x5b7ef7*/
        result = 0; /*0x5b7ed2*/
        break; /*0x5b7f04*/
      case 1572: /*0x5b7de9*/
        v25 = GetDlgItem(*(HWND *)WindowLongA, 1572); /*0x5b7fd5*/
        if ( !v25 ) /*0x5b7fdd*/
          return 0; /*0x5b7fdd*/
        MEMORY[0xA8B260] = SendMessageA(v25, 0xF0u, 0, 0) == 1; /*0x5b7ffd*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b8002*/
        result = 0; /*0x5b8008*/
        break; /*0x5b8011*/
      case 1639: /*0x5b7de9*/
        if ( HIWORD(a3) != 1 ) /*0x5b7dfa*/
          return 0; /*0x5b7dfa*/
        v16 = GetDlgItem(*(HWND *)WindowLongA, 1639); /*0x5b7e09*/
        v17 = v16; /*0x5b7e0f*/
        if ( !v16 ) /*0x5b7e13*/
          return 0; /*0x5b7e13*/
        v18 = SendMessageA(v16, 0x147u, 0, 0); /*0x5b7e29*/
        if ( v18 == -1 ) /*0x5b7e2e*/
          return 0; /*0x5b7e2e*/
        v19 = SendMessageA(v17, 0x150u, v18, 0); /*0x5b7e3d*/
        if ( v19 == -1 ) /*0x5b7e42*/
          return 0; /*0x5b7e42*/
        MEMORY[0xA8B3AC] = v19; /*0x5b7e48*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7e4d*/
        *(_BYTE *)(WindowLongA + 8) = 1; /*0x5b7e50*/
        result = 0; /*0x5b7e56*/
        break; /*0x5b7e5f*/
      case 1642: /*0x5b7de9*/
        v23 = GetDlgItem(*(HWND *)WindowLongA, 1642); /*0x5b7f5f*/
        if ( !v23 ) /*0x5b7f63*/
          return 0; /*0x5b7f63*/
        v24 = SendMessageA(v23, 0xF0u, 0, 0); /*0x5b7f73*/
        MEMORY[0xA8B258] = v24 == 1; /*0x5b7f85*/
        if ( v24 != 1 && GetDlgItem(*(HWND *)WindowLongA, 1358) ) /*0x5b7f95*/
        {
          MEMORY[0xA8B262] = 0; /*0x5b7f9d*/
          SendDlgItemMessageA(*(HWND *)WindowLongA, 1358, 0xF1u, 0, 0); /*0x5b7fb4*/
        }
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7fba*/
        result = 0; /*0x5b7fc0*/
        break; /*0x5b7fc9*/
      case 1643: /*0x5b7de9*/
        v22 = GetDlgItem(*(HWND *)WindowLongA, 1643); /*0x5b7f10*/
        if ( !v22 ) /*0x5b7f18*/
          return 0; /*0x5b7f18*/
        LOBYTE(MEMORY[0xA8B320]) = SendMessageA(v22, 0xF0u, 0, 0) == 1; /*0x5b7f38*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7f3e*/
        result = 0; /*0x5b7f44*/
        break; /*0x5b7f4d*/
      case 1690: /*0x5b7de9*/
        v26 = GetDlgItem(*(HWND *)WindowLongA, 1690); /*0x5b801d*/
        if ( !v26 ) /*0x5b8025*/
          return 0; /*0x5b8025*/
        MEMORY[0xA8B263] = SendMessageA(v26, 0xF0u, 0, 0) == 1; /*0x5b8045*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b804b*/
        result = 0; /*0x5b8051*/
        break; /*0x5b805a*/
      case 1693: /*0x5b7de9*/
        v27 = GetDlgItem(*(HWND *)WindowLongA, 1693); /*0x5b8066*/
        if ( !v27 ) /*0x5b806e*/
          return 0; /*0x5b806e*/
        MEMORY[0xA8B262] = SendMessageA(v27, 0xF0u, 0, 0) == 1; /*0x5b808e*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b8094*/
        result = 0; /*0x5b809a*/
        break; /*0x5b80a3*/
      default:
        return 0;
    }
  }
  else
  {
    if ( (unsigned __int16)a3 == 1430 ) /*0x5b7a41*/
    {
      v15 = GetDlgItem(*(HWND *)WindowLongA, 1430); /*0x5b7d91*/
      if ( v15 ) /*0x5b7d99*/
      {
        MEMORY[0xA8B31D] = SendMessageA(v15, 0xF0u, 0, 0) == 1; /*0x5b7db9*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7dbf*/
        return 0; /*0x5b7dce*/
      }
      return 0; /*0x5b7d99*/
    }
    if ( (unsigned __int16)a3 > 0x54Cu ) /*0x5b7a4c*/
    {
      switch ( (unsigned __int16)a3 ) /*0x5b7c5c*/
      {
        case 0x54Du: /*0x5b7c5c*/
          v14 = GetDlgItem(*(HWND *)WindowLongA, 1357); /*0x5b7d48*/
          if ( v14 ) /*0x5b7d50*/
          {
            MEMORY[0xA8B31F] = SendMessageA(v14, 0xF0u, 0, 0) == 1; /*0x5b7d70*/
            *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7d76*/
            return 0; /*0x5b7d85*/
          }
          break;
        case 0x54Eu: /*0x5b7c5c*/
          v13 = GetDlgItem(*(HWND *)WindowLongA, 1358); /*0x5b7cc6*/
          if ( v13 ) /*0x5b7cca*/
          {
            MEMORY[0xA8B262] = SendMessageA(v13, 0xF0u, 0, 0) == 1; /*0x5b7cea*/
            *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7cf0*/
            if ( MEMORY[0xA8B262] ) /*0x5b7cfa*/
            {
              if ( GetDlgItem(*(HWND *)WindowLongA, 1642) ) /*0x5b7d09*/
              {
                MEMORY[0xA8B258] = 1; /*0x5b7d15*/
                SendDlgItemMessageA(*(HWND *)WindowLongA, 1642, 0xF1u, 1u, 0); /*0x5b7d2a*/
                return 0; /*0x5b7d3c*/
              }
            }
          }
          break;
        case 0x551u: /*0x5b7c5c*/
          v12 = GetDlgItem(*(HWND *)WindowLongA, 1361); /*0x5b7c77*/
          if ( v12 ) /*0x5b7c7f*/
          {
            MEMORY[0xA8B26C] = SendMessageA(v12, 0xF0u, 0, 0) == 1; /*0x5b7c9f*/
            *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7ca5*/
            return 0; /*0x5b7cb4*/
          }
          break;
      }
      return 0; /*0x5b7c7f*/
    }
    if ( (unsigned __int16)a3 == 1356 ) /*0x5b7a52*/
    {
      v11 = GetDlgItem(*(HWND *)WindowLongA, 1356); /*0x5b7c18*/
      if ( v11 ) /*0x5b7c20*/
      {
        MEMORY[0xA8B261] = SendMessageA(v11, 0xF0u, 0, 0) == 1; /*0x5b7c40*/
        *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7c45*/
        return 0; /*0x5b7c54*/
      }
      return 0; /*0x5b7c20*/
    }
    if ( (unsigned __int16)a3 > 0x405u ) /*0x5b7a5d*/
    {
      if ( (unsigned __int16)a3 == 1344 && HIWORD(a3) == 1281 ) /*0x5b7b77*/
      {
        memset(lParam, 0, sizeof(lParam)); /*0x5b7b8d*/
        v9 = GetDlgItem(*(HWND *)WindowLongA, 1344); /*0x5b7b93*/
        v10 = v9; /*0x5b7b99*/
        if ( v9 ) /*0x5b7b9d*/
        {
          SendMessageA(v9, 0x4B3u, 0x100u, (LPARAM)lParam); /*0x5b7bb9*/
          SendMessageA(v10, 0x4B2u, 0, (LPARAM)&MEMORY[0x887734]); /*0x5b7bc8*/
          if ( wcslen(lParam) ) /*0x5b7bcf*/
          {
            if ( lParam[0] != 13 ) /*0x5b7be5*/
            {
              WideString::Trim(lParam); /*0x5b7bef*/
              NetworkGameSetup::SendGameSetupPacket(lParam); /*0x5b7bfb*/
              return 0; /*0x5b7c0c*/
            }
          }
        }
      }
      return 0; /*0x5b7be5*/
    }
    if ( (unsigned __int16)a3 != 1029 ) /*0x5b7a63*/
    {
      if ( (unsigned __int16)a3 == 1 ) /*0x5b7a66*/
      {
        if ( !HIWORD(a3) && (unsigned __int8)GameOptions::ReadSettings(WindowLongA) == 1 ) /*0x5b7aac*/
        {
          Game::BuildGameSetupPacket(WindowLongA); /*0x5b7ab4*/
          *(_DWORD *)(WindowLongA + 4) = 1; /*0x5b7ab9*/
          return 0; /*0x5b7ac8*/
        }
      }
      else if ( (unsigned __int16)a3 == 2 && !HIWORD(a3) ) /*0x5b7a6f*/
      {
        GameOptions::ReadSettings(WindowLongA); /*0x5b7a7a*/
        *(_DWORD *)(WindowLongA + 4) = 2; /*0x5b7a7f*/
        return 0; /*0x5b7a92*/
      }
      return 0; /*0x5b7a72*/
    }
    if ( HIWORD(a3) != 1 ) /*0x5b7ad5*/
      return 0; /*0x5b7ad5*/
    v6 = GetDlgItem(*(HWND *)WindowLongA, 1029); /*0x5b7ae4*/
    v7 = v6; /*0x5b7aea*/
    if ( !v6 ) /*0x5b7aee*/
      return 0; /*0x5b7aee*/
    v8 = SendMessageA(v6, 0x147u, 0, 0); /*0x5b7b04*/
    if ( v8 == -1 ) /*0x5b7b09*/
      return 0; /*0x5b81c3*/
    MEMORY[0xA8B394] = v8; /*0x5b7b0f*/
    *(_BYTE *)(WindowLongA + 9) = 1; /*0x5b7b14*/
    *(_BYTE *)(WindowLongA + 8) = 1; /*0x5b7b19*/
    if ( v8 >= 8 ) /*0x5b7b1c*/
      SendMessageA(v7, 0x498u, 0, (LPARAM)Math::InitDegToRad); /*0x5b7b52*/
    else
      SendMessageA(v7, 0x498u, 0, MEMORY[0x8316A8][v8]); /*0x5b7b33*/
    return 0; /*0x5b7b38*/
  }
  return result; /*0x5b79f3*/
}


// ==== 0x005B82F0  ModemHost::InitDialog  this=ModemHost  sig=csp ====
void __thiscall ModemHost_InitDialog(HWND *this)
{
  HWND *v1; // ebp
  LPARAM v2; // ecx
  char v3; // al
  HWND (__stdcall *v4)(HWND, int); // ebx
  HWND DlgItem; // eax
  HWND v6; // edi
  char *v7; // eax
  HWND v8; // eax
  HWND v9; // edi
  wchar_t *String; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  WPARAM v18; // ebx
  LPARAM *v19; // ebp
  HWND v20; // eax
  HWND v21; // edi
  LPARAM i; // ebp
  int v23; // eax
  LRESULT v24; // eax
  WPARAM Item; // eax
  HWND v26; // edi
  HWND v27; // eax
  HWND v28; // edi
  HWND v29; // edi
  LPARAM v30; // ebp
  HWND v31; // eax
  HWND v32; // edi
  HWND v33; // eax
  HWND v34; // edi
  HWND v35; // edi
  HWND v36; // eax
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  HWND v40; // eax
  HWND v41; // eax
  HWND v42; // eax
  HWND v43; // eax
  HWND v44; // eax
  HWND v45; // eax
  unsigned int v46; // eax
  int v47; // eax
  void *v48; // edi
  HWND v49; // eax
  _DWORD *v50; // eax
  char v51; // bl
  void *v52; // eax
  void *v53; // eax
  HWND *v54; // ebx
  HWND v55; // esi
  HWND v56; // eax
  HWND *lParam; // [esp+4h] [ebp-A74h]
  HWND *v58; // [esp+8h] [ebp-A70h] BYREF
  _DWORD v59[21]; // [esp+Ch] [ebp-A6Ch] BYREF
  _BYTE v60[12]; // [esp+60h] [ebp-A18h] BYREF
  int v61; // [esp+6Ch] [ebp-A0Ch]
  wchar_t Buffer[256]; // [esp+74h] [ebp-A04h] BYREF
  wchar_t Format[1026]; // [esp+274h] [ebp-804h] BYREF

  v1 = this; /*0x5b82fa*/
  v58 = this; /*0x5b8301*/
  Debug::Log(); /*0x5b8305*/
  if ( byte_82C938 == 1 ) /*0x5b8314*/
  {
    byte_82C938 = 0; /*0x5b831f*/
    nullsub_38(&MEMORY[0xA8E960]); /*0x5b8326*/
    MEMORY[0xA8B25C] = *((_DWORD *)MEMORY[0x8871E0] + 1313); /*0x5b8336*/
    MEMORY[0xA8B258] = *((_BYTE *)MEMORY[0x8871E0] + 5295); /*0x5b8342*/
    MEMORY[0xA8B260] = *((_BYTE *)MEMORY[0x8871E0] + 5292); /*0x5b834e*/
    MEMORY[0xA8B261] = *((_BYTE *)MEMORY[0x8871E0] + 5297); /*0x5b835a*/
    MEMORY[0xA8B274] = 0; /*0x5b8360*/
    v2 = *((_DWORD *)MEMORY[0x8871E0] + 1317); /*0x5b836a*/
    MEMORY[0xA8B262] = 0; /*0x5b8370*/
    MEMORY[0xA8B270] = v2; /*0x5b8377*/
    MEMORY[0xA8B263] = *((_BYTE *)MEMORY[0x8871E0] + 5305); /*0x5b8389*/
    v3 = *((_BYTE *)MEMORY[0x8871E0] + 5306); /*0x5b838f*/
    MEMORY[0xA8B268] = *(_DWORD *)MEMORY[0xA8EB60]; /*0x5b8395*/
    LOBYTE(MEMORY[0xA8B264]) = v3; /*0x5b839b*/
    MEMORY[0xA8B26C] = 0; /*0x5b83a0*/
  }
  v4 = GetDlgItem; /*0x5b83aa*/
  DlgItem = GetDlgItem(*v1, 1473); /*0x5b83b6*/
  v6 = DlgItem; /*0x5b83be*/
  if ( DlgItem ) /*0x5b83c2*/
  {
    SendMessageA(DlgItem, 0xC5u, 0x13u, 0); /*0x5b83ce*/
    v7 = CharToWideString(MEMORY[0xA8B380]); /*0x5b83d5*/
    SendMessageA(v6, 0x4B2u, 0, (LPARAM)v7); /*0x5b83e3*/
  }
  Debug::Log(); /*0x5b83ef*/
  v8 = GetDlgItem(*v1, 1029); /*0x5b8400*/
  v9 = v8; /*0x5b8402*/
  if ( v8 ) /*0x5b8406*/
  {
    SendMessageA(v8, 0x14Bu, 0, 0); /*0x5b8416*/
    String = GetStringCSF(aTxtGold, 0, g_Str_File_ModemHst_cpp, 407); /*0x5b8429*/
    SendMessageA(v9, 0x4C1u, 0xFFFFFFFF, (LPARAM)String); /*0x5b8437*/
    v11 = GetStringCSF(aTxtRed, 0, g_Str_File_ModemHst_cpp, 408); /*0x5b844a*/
    SendMessageA(v9, 0x4C1u, 0xFFFFFFFF, (LPARAM)v11); /*0x5b8458*/
    v12 = GetStringCSF(aTxtBlue, 0, g_Str_File_ModemHst_cpp, 409); /*0x5b846b*/
    SendMessageA(v9, 0x4C1u, 0xFFFFFFFF, (LPARAM)v12); /*0x5b8479*/
    v13 = GetStringCSF(aTxtGreen, 0, g_Str_File_ModemHst_cpp, 410); /*0x5b848c*/
    SendMessageA(v9, 0x4C1u, 0xFFFFFFFF, (LPARAM)v13); /*0x5b849a*/
    v14 = GetStringCSF(aTxtOrange, 0, g_Str_File_ModemHst_cpp, 411); /*0x5b84ad*/
    SendMessageA(v9, 0x4C1u, 0xFFFFFFFF, (LPARAM)v14); /*0x5b84bb*/
    v15 = GetStringCSF(aTxtSkyBlue, 0, g_Str_File_ModemHst_cpp, 412); /*0x5b84ce*/
    SendMessageA(v9, 0x4C1u, 0xFFFFFFFF, (LPARAM)v15); /*0x5b84dc*/
    v16 = GetStringCSF(aTxtPurple, 0, g_Str_File_ModemHst_cpp, 413); /*0x5b84ef*/
    SendMessageA(v9, 0x4C1u, 0xFFFFFFFF, (LPARAM)v16); /*0x5b84fd*/
    v17 = GetStringCSF(aTxtPink, 0, g_Str_File_ModemHst_cpp, 414); /*0x5b8510*/
    SendMessageA(v9, 0x4C1u, 0xFFFFFFFF, (LPARAM)v17); /*0x5b851e*/
    v18 = 0; /*0x5b8520*/
    v19 = MEMORY[0x8316A8]; /*0x5b8522*/
    do /*0x5b853e*/
      SendMessageA(v9, 0x498u, v18++, *v19++); /*0x5b8532*/
    while ( (int)v19 < (int)&MEMORY[0x8316C8] ); /*0x5b853e*/
    MEMORY[0xA8B394] = MEMORY[0xA8B3B4]; /*0x5b854e*/
    SendMessageA(v9, 0x14Eu, MEMORY[0xA8B3B4], 0); /*0x5b8553*/
    v4 = GetDlgItem; /*0x5b8555*/
    v1 = v58; /*0x5b855b*/
  }
  Debug::Log(); /*0x5b856b*/
  v20 = v4(*v1, 1639); /*0x5b857c*/
  v21 = v20; /*0x5b857e*/
  if ( v20 ) /*0x5b8582*/
  {
    SendMessageA(v20, 0x14Bu, 0, 0); /*0x5b858e*/
    for ( i = 0; i < g_SuperWeaponTypeArray; ++i ) /*0x5b8599*/
    {
      v23 = *((_DWORD *)g_SuperWeaponTypeCount + i); /*0x5b85a1*/
      if ( *(_BYTE *)(v23 + 421) ) /*0x5b85a4*/
      {
        v24 = SendMessageA(v21, 0x4C2u, 0, *(_DWORD *)(v23 + 96)); /*0x5b85ba*/
        SendMessageA(v21, 0x151u, v24, i); /*0x5b85c4*/
      }
    }
    Item = FindListBoxItem(v21, -1, MEMORY[0xA8B3AC]); /*0x5b85dc*/
    SendMessageA(v21, 0x14Eu, Item, 0); /*0x5b85ea*/
    v1 = v58; /*0x5b85ec*/
  }
  v26 = v4(*v1, 1641); /*0x5b85fb*/
  if ( v26 ) /*0x5b85ff*/
  {
    lParam = (HWND *)MEMORY[0xA8B270]; /*0x5b860e*/
    SendMessageA( /*0x5b8630*/
      v26,
      0x406u,
      1u,
      *((unsigned __int16 *)MEMORY[0x8871E0] + 2632) | (*((unsigned __int16 *)MEMORY[0x8871E0] + 2636) << 16));
    SendMessageA(v26, 0x405u, 1u, (LPARAM)lParam); /*0x5b863f*/
  }
  Debug::Log(); /*0x5b864c*/
  v27 = v4(*v1, 1360); /*0x5b865d*/
  v28 = v27; /*0x5b865f*/
  if ( v27 ) /*0x5b8663*/
  {
    lParam = (HWND *)g_RulesInitConfig; /*0x5b8678*/
    SendMessageA(v27, 0x406u, 1u, 655361); /*0x5b867c*/
    SendMessageA(v28, 0x405u, 1u, (LPARAM)lParam); /*0x5b868b*/
  }
  Debug::Log(); /*0x5b8699*/
  v29 = v4(*v1, 1026); /*0x5b86ac*/
  if ( v29 ) /*0x5b86b0*/
  {
    v30 = MEMORY[0xA8B25C]; /*0x5b86bb*/
    SendMessageA( /*0x5b86dd*/
      v29,
      0x406u,
      1u,
      *((unsigned __int16 *)MEMORY[0x8871E0] + 2624) | (*((unsigned __int16 *)MEMORY[0x8871E0] + 2628) << 16));
    SendMessageA(v29, 0x405u, 1u, v30); /*0x5b86e8*/
    SendMessageA(v29, 0x4ABu, 0, 250); /*0x5b86f7*/
    v1 = v58; /*0x5b86f9*/
  }
  Debug::Log(); /*0x5b8708*/
  v31 = v4(*v1, 1362); /*0x5b8719*/
  v32 = v31; /*0x5b871b*/
  if ( v31 ) /*0x5b871f*/
  {
    lParam = (HWND *)MEMORY[0xA8B274]; /*0x5b8734*/
    SendMessageA(v31, 0x406u, 1u, 393216); /*0x5b8738*/
    SendMessageA(v32, 0x405u, 1u, (LPARAM)lParam); /*0x5b8747*/
  }
  Debug::Log(); /*0x5b8755*/
  v33 = v4(*v1, 1321); /*0x5b8766*/
  v34 = v33; /*0x5b8768*/
  if ( v33 ) /*0x5b876c*/
  {
    SendMessageA(v33, 0x406u, 1u, 393216); /*0x5b877b*/
    SendMessageA(v34, 0x405u, 1u, 6 - *(_DWORD *)MEMORY[0xA8EB60]); /*0x5b8793*/
  }
  Debug::Log(); /*0x5b87a1*/
  v35 = v4(*v1, 1363); /*0x5b87b4*/
  if ( v35 ) /*0x5b87b8*/
  {
    lParam = (HWND *)MEMORY[0xA8B278]; /*0x5b87cc*/
    SendMessageA(v35, 0x406u, 1u, 0x20000); /*0x5b87d0*/
    SendMessageA(v35, 0x405u, 1u, (LPARAM)lParam); /*0x5b87df*/
  }
  Debug::Log(); /*0x5b87ed*/
  v36 = v4(*v1, 1643); /*0x5b87fe*/
  if ( v36 ) /*0x5b8802*/
    SendMessageA(v36, 0xF1u, (_BYTE)MEMORY[0xA8B320] == 1, 0); /*0x5b881b*/
  Debug::Log(); /*0x5b8836*/
  v37 = v4(*v1, 1642); /*0x5b8847*/
  if ( v37 ) /*0x5b884b*/
    SendMessageA(v37, 0xF1u, MEMORY[0xA8B258] == 1, 0); /*0x5b8864*/
  Debug::Log(); /*0x5b887f*/
  v38 = v4(*v1, 1356); /*0x5b8890*/
  if ( v38 ) /*0x5b8894*/
    SendMessageA(v38, 0xF1u, MEMORY[0xA8B261] == 1, 0); /*0x5b88ad*/
  Debug::Log(); /*0x5b88c8*/
  v39 = v4(*v1, 1357); /*0x5b88d9*/
  if ( v39 ) /*0x5b88dd*/
    SendMessageA(v39, 0xF1u, MEMORY[0xA8B31F] == 1, 0); /*0x5b88f6*/
  Debug::Log(); /*0x5b8911*/
  v40 = v4(*v1, 1572); /*0x5b8922*/
  if ( v40 ) /*0x5b8926*/
    SendMessageA(v40, 0xF1u, MEMORY[0xA8B260] == 1, 0); /*0x5b893f*/
  Debug::Log(); /*0x5b895a*/
  v41 = v4(*v1, 1430); /*0x5b896b*/
  if ( v41 ) /*0x5b896f*/
    SendMessageA(v41, 0xF1u, MEMORY[0xA8B31D] == 1, 0); /*0x5b8988*/
  Debug::Log(); /*0x5b89a3*/
  v42 = v4(*v1, 1358); /*0x5b89b4*/
  if ( v42 ) /*0x5b89b8*/
    SendMessageA(v42, 0xF1u, MEMORY[0xA8B262] == 1, 0); /*0x5b89d1*/
  Debug::Log(); /*0x5b89ec*/
  v43 = v4(*v1, 1690); /*0x5b89fd*/
  if ( v43 ) /*0x5b8a01*/
    SendMessageA(v43, 0xF1u, MEMORY[0xA8B263] == 1, 0); /*0x5b8a1a*/
  Debug::Log(); /*0x5b8a35*/
  v44 = v4(*v1, 1693); /*0x5b8a46*/
  if ( v44 ) /*0x5b8a4a*/
    SendMessageA(v44, 0xF1u, (_BYTE)MEMORY[0xA8B264] == 1, 0); /*0x5b8a63*/
  Debug::Log(); /*0x5b8a7e*/
  v45 = v4(*v1, 1361); /*0x5b8a8f*/
  if ( v45 ) /*0x5b8a93*/
    SendMessageA(v45, 0xF1u, MEMORY[0xA8B26C] == 1, 0); /*0x5b8aac*/
  Debug::Log(); /*0x5b8ac7*/
  NetworkBuffer::GetField(&MEMORY[0xA8ECE0]); /*0x5b8ad4*/
  v46 = Random::Range(MEMORY[0x886B88], 1, 0x7FFF); /*0x5b8ae5*/
  srand(v46); /*0x5b8aeb*/
  v47 = rand(); /*0x5b8af3*/
  v48 = MEMORY[0xAC1154]; /*0x5b8b04*/
  MEMORY[0xA8ED94] = v47; /*0x5b8b0a*/
  MEMORY[0xA8E960] = MEMORY[0xA8E960] & 0xFFFFFFEF | (16 * (*((_BYTE *)MEMORY[0x8871E0] + 5298) & 1)); /*0x5b8b22*/
  if ( MEMORY[0xAC1154] ) /*0x5b8b27*/
  {
    ComPtr::Dtor(MEMORY[0xAC1154]); /*0x5b8b2b*/
    __3_YAXPAX_Z(v48); /*0x5b8b31*/
    MEMORY[0xAC1154] = 0; /*0x5b8b39*/
  }
  PtrVector::Destroy(&MEMORY[0xA8DA74]); /*0x5b8b48*/
  LoadScenarioClassByIndex(0); /*0x5b8b4f*/
  MEMORY[0xA8B254] = 0; /*0x5b8b54*/
  v49 = v4(*v1, 1448); /*0x5b8b67*/
  SendMessageA(v49, 0x4B2u, 0, (LPARAM)&MEMORY[0xA8B320] + 2); /*0x5b8b76*/
  MEMORY[0xA8D60E] = 1; /*0x5b8b81*/
  v50 = CCFileClass::Construct(v59, &MEMORY[0xA8B8E0]); /*0x5b8b88*/
  v51 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v50 + 20))(v50, 0); /*0x5b8b9a*/
  v61 = 0; /*0x5b8ba4*/
  Vector::Clear((int)v60); /*0x5b8bac*/
  v58 = (HWND *)&off_7E1668; /*0x5b8bb5*/
  BufferIOFileClass::Dtor(&v58); /*0x5b8bbd*/
  if ( v51 ) /*0x5b8bc4*/
  {
    v52 = __2_YAPAXI_Z(4u); /*0x5b8bc8*/
    if ( v52 ) /*0x5b8bd2*/
      v53 = (void *)unknown_libname_27(v52); /*0x5b8bd6*/
    else
      v53 = 0; /*0x5b8bdd*/
    MEMORY[0xAC1154] = v53; /*0x5b8be6*/
    PreviewClass::ReadPreview(&MEMORY[0xA8B8E0]); /*0x5b8beb*/
    v54 = lParam; /*0x5b8bf0*/
    PostMessageA(*lParam, 0xFu, 0, 0); /*0x5b8bfd*/
  }
  else
  {
    v54 = lParam; /*0x5b8c05*/
  }
  if ( strlen(MEMORY[0xAC1288]) > 0x4E ) /*0x5b8c1b*/
    MEMORY[0xAC12D7] = 0; /*0x5b8c1d*/
  if ( strlen(MEMORY[0xAC1288]) ) /*0x5b8c27*/
  {
    BulkCharToWide(Format, (unsigned __int8 *)MEMORY[0xAC1288], -1); /*0x5b8c41*/
    if ( &MEMORY[0x887734] ) /*0x5b8c4d*/
    {
      v55 = GetDlgItem(*v54, 1343); /*0x5b8c5d*/
      if ( v55 ) /*0x5b8c61*/
      {
        swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, &MEMORY[0x887734]); /*0x5b8c83*/
        DrawDialogText((LPARAM)Math::InitDegToRad, Buffer, v55); /*0x5b8c95*/
      }
    }
  }
  MEMORY[0xAC1288][0] = 0; /*0x5b8c9a*/
  v56 = GetDlgItem(*v54, 1); /*0x5b8ca6*/
  if ( v56 ) /*0x5b8cb2*/
    EnableWindow(v56, 0); /*0x5b8cb7*/
  NullModemClass::Flush(1); /*0x5b8cc4*/
  Debug::Log(); /*0x5b8cce*/
}


// ==== 0x005B8CE0  GameOptions::ReadSettings  this=Game  sig=csp ====
char __thiscall GameOptions::ReadSettings(HWND *this)
{
  int v2; // edi
  HWND DlgItem; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v5; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  ObjectClass *v10; // edi
  LRESULT v11; // eax
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  HWND v15; // eax
  HWND v16; // eax
  HWND v17; // eax
  HWND v18; // eax
  HWND v19; // eax
  HWND v20; // eax
  HWND v21; // eax
  HWND v22; // eax
  HWND v23; // eax
  HWND v24; // eax
  HWND v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  CampaignScore *v28; // [esp+0h] [ebp-23Ch]
  int v29; // [esp+0h] [ebp-23Ch]
  wchar_t *Format; // [esp+10h] [ebp-22Ch]
  char lParam[40]; // [esp+14h] [ebp-228h] BYREF
  wchar_t Buffer[256]; // [esp+3Ch] [ebp-200h] BYREF

  Debug::Log(); /*0x5b8cf1*/
  Format = (wchar_t *)ReadPlayerCountMap(*(int *)&HouseClass_Player.__pad_5568[8096]); /*0x5b8d0a*/
  v2 = 2; /*0x5b8d16*/
  DlgItem = GetDlgItem(*this, 1362); /*0x5b8d1b*/
  if ( DlgItem ) /*0x5b8d25*/
    v2 = SendMessageA(DlgItem, 0x400u, 0, 0) + 2; /*0x5b8d35*/
  if ( (int)Format >= v2 ) /*0x5b8d3e*/
  {
    v7 = GetDlgItem(*this, 1473); /*0x5b8dad*/
    if ( v7 ) /*0x5b8db1*/
    {
      SendMessageA(v7, 0x4B3u, 0x14u, (LPARAM)lParam); /*0x5b8dc0*/
      CopyWideToChar(&HouseClass_Player.__pad_5568[8396], lParam, -1); /*0x5b8dcd*/
    }
    Debug::Log(); /*0x5b8ddc*/
    v8 = GetDlgItem(*this, 1029); /*0x5b8dec*/
    if ( v8 ) /*0x5b8df0*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8416] = SendMessageA(v8, 0x147u, 0, 0); /*0x5b8dfe*/
    Debug::Log(); /*0x5b8e0e*/
    v9 = GetDlgItem(*this, 1639); /*0x5b8e1e*/
    v10 = (ObjectClass *)v9; /*0x5b8e20*/
    if ( v9 ) /*0x5b8e24*/
    {
      v11 = SendMessageA(v9, 0x147u, 0, 0); /*0x5b8e30*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8440] = SendMessageA((HWND)v10, 0x150u, v11, 0); /*0x5b8e3d*/
    }
    v12 = GetDlgItem(*this, 1641); /*0x5b8e4a*/
    if ( v12 ) /*0x5b8e4e*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8124] = SendMessageA(v12, 0x400u, 0, 0); /*0x5b8e5c*/
    Debug::Log(); /*0x5b8e6c*/
    v13 = GetDlgItem(*this, 1360); /*0x5b8e7c*/
    if ( v13 ) /*0x5b8e80*/
      g_RulesInitConfig = (ObjectClass *)SendMessageA(v13, 0x400u, 0, 0); /*0x5b8e8e*/
    Debug::Log(); /*0x5b8e9f*/
    v14 = GetDlgItem(*this, 1026); /*0x5b8eaf*/
    if ( v14 ) /*0x5b8eb3*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8104] = SendMessageA(v14, 0x400u, 0, 0); /*0x5b8ec1*/
    Debug::Log(); /*0x5b8ed2*/
    v15 = GetDlgItem(*this, 1362); /*0x5b8ee2*/
    if ( v15 ) /*0x5b8ee6*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8128] = SendMessageA(v15, 0x400u, 0, 0); /*0x5b8ef4*/
    Debug::Log(); /*0x5b8f04*/
    v16 = GetDlgItem(*this, 1321); /*0x5b8f14*/
    if ( v16 ) /*0x5b8f18*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8116] = 6 - SendMessageA(v16, 0x400u, 0, 0); /*0x5b8f2d*/
    Debug::Log(); /*0x5b8f41*/
    v17 = GetDlgItem(*this, 1363); /*0x5b8f51*/
    if ( v17 ) /*0x5b8f55*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8132] = SendMessageA(v17, 0x400u, 0, 0); /*0x5b8f63*/
    Debug::Log(); /*0x5b8f73*/
    v18 = GetDlgItem(*this, 1643); /*0x5b8f83*/
    if ( v18 ) /*0x5b8f87*/
      HouseClass_Player.__pad_5568[8300] = SendMessageA(v18, 0xF0u, 0, 0) == 1; /*0x5b8f98*/
    Debug::Log(); /*0x5b8fb8*/
    v19 = GetDlgItem(*this, 1642); /*0x5b8fc8*/
    if ( v19 ) /*0x5b8fcc*/
      HouseClass_Player.__pad_5568[8100] = SendMessageA(v19, 0xF0u, 0, 0) == 1; /*0x5b8fdd*/
    Debug::Log(); /*0x5b8ffd*/
    v20 = GetDlgItem(*this, 1356); /*0x5b900d*/
    if ( v20 ) /*0x5b9011*/
      HouseClass_Player.__pad_5568[8109] = SendMessageA(v20, 0xF0u, 0, 0) == 1; /*0x5b9022*/
    Debug::Log(); /*0x5b9042*/
    v21 = GetDlgItem(*this, 1357); /*0x5b9052*/
    if ( v21 ) /*0x5b9056*/
      HouseClass_Player.__pad_5568[8299] = SendMessageA(v21, 0xF0u, 0, 0) == 1; /*0x5b9067*/
    Debug::Log(); /*0x5b9087*/
    v22 = GetDlgItem(*this, 1572); /*0x5b9097*/
    if ( v22 ) /*0x5b909b*/
      HouseClass_Player.__pad_5568[8108] = SendMessageA(v22, 0xF0u, 0, 0) == 1; /*0x5b90ac*/
    Debug::Log(); /*0x5b90cc*/
    v23 = GetDlgItem(*this, 1430); /*0x5b90dc*/
    if ( v23 ) /*0x5b90e0*/
      HouseClass_Player.__pad_5568[8297] = SendMessageA(v23, 0xF0u, 0, 0) == 1; /*0x5b90f1*/
    Debug::Log(); /*0x5b9111*/
    v24 = GetDlgItem(*this, 1358); /*0x5b9121*/
    if ( v24 ) /*0x5b9125*/
      HouseClass_Player.__pad_5568[8110] = SendMessageA(v24, 0xF0u, 0, 0) == 1; /*0x5b9136*/
    Debug::Log(); /*0x5b9156*/
    v25 = GetDlgItem(*this, 1690); /*0x5b9166*/
    if ( v25 ) /*0x5b916a*/
      HouseClass_Player.__pad_5568[8111] = SendMessageA(v25, 0xF0u, 0, 0) == 1; /*0x5b917e*/
    Debug::Log(); /*0x5b919c*/
    v26 = GetDlgItem(*this, 1693); /*0x5b91ac*/
    if ( v26 ) /*0x5b91b0*/
      HouseClass_Player.__pad_5568[8112] = SendMessageA(v26, 0xF0u, 0, 0) == 1; /*0x5b91c4*/
    Debug::Log(); /*0x5b91e3*/
    v27 = GetDlgItem(*this, 1361); /*0x5b91f3*/
    if ( v27 ) /*0x5b91f7*/
      HouseClass_Player.__pad_5568[8120] = SendMessageA(v27, 0xF0u, 0, 0) == 1; /*0x5b9208*/
    Debug::Log(); /*0x5b9228*/
    Debug::Log(); /*0x5b9232*/
    return 1; /*0x5b923a*/
  }
  else
  {
    StringCSF = GetStringCSF(g_Str_TXT_SCENARIO_TOO_SMALL, 0, g_Str_File_ModemHst_cpp, 759); /*0x5b8d52*/
    swprintf(Buffer, (const size_t)StringCSF, Format, v28); /*0x5b8d5d*/
    v5 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_ModemHst_cpp, 760); /*0x5b8d84*/
    Dialog::ShowMessageBox((int)Buffer, v5, 0, 0, 0, v29); /*0x5b8d93*/
    return 0; /*0x5b8d9b*/
  }
}


// ==== 0x005B9250  ObjectClass::method_5B9250  this=ObjectClass  sig=csp ====
HWND __thiscall sub_5B9250(HWND *this)
{
  HWND result; // eax
  HWND v3; // esi
  char *v4; // eax
  unsigned int v5; // edi
  HWND v6; // esi
  int (__usercall *v7)@<eax>(char@<cf>, char@<zf>); // edi
  HWND v8; // [esp-8h] [ebp-518h]
  int v9; // [esp+0h] [ebp-510h] BYREF
  wchar_t *Format; // [esp+10h] [ebp-500h]
  _DWORD v11[62]; // [esp+14h] [ebp-4FCh] BYREF
  __int16 v12; // [esp+10Ch] [ebp-404h]
  wchar_t lParam[256]; // [esp+110h] [ebp-400h] BYREF
  wchar_t Buffer[256]; // [esp+310h] [ebp-200h] BYREF

  memset(lParam, 0, sizeof(lParam)); /*0x5b9270*/
  result = GetDlgItem(*this, 1344); /*0x5b927a*/
  v3 = result; /*0x5b927c*/
  if ( result ) /*0x5b9280*/
  {
    SendMessageA(result, 0x4B3u, 0x100u, (LPARAM)lParam); /*0x5b929f*/
    SendMessageA(v3, 0x4B2u, 0, (LPARAM)&MEMORY[0x887734]); /*0x5b92ae*/
    result = (HWND)wcslen(lParam); /*0x5b92b8*/
    if ( result ) /*0x5b92c2*/
    {
      if ( lParam[0] != 13 ) /*0x5b92d1*/
      {
        WideString::Trim(lParam); /*0x5b92de*/
        result = (HWND)lParam; /*0x5b92e3*/
        if ( &v9 != (int *)-272 ) /*0x5b92ec*/
        {
          memset(v11, 0, sizeof(v11)); /*0x5b9301*/
          v12 = 0; /*0x5b9303*/
          v11[0] = 104; /*0x5b930f*/
          strcpy((char *)&v11[1], MEMORY[0xA8B380]); /*0x5b932d*/
          LOBYTE(v11[6]) = MEMORY[0xA8B394]; /*0x5b9342*/
          wcscpy((wchar_t *)((char *)&v11[6] + 1), lParam); /*0x5b9346*/
          Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v11, 250, 1); /*0x5b935f*/
          Stream::ReadPacket((int)&MEMORY[0xA8EA70]); /*0x5b9369*/
          v4 = CharToWideString(MEMORY[0xA8B380]); /*0x5b9373*/
          v5 = MEMORY[0xA8B394]; /*0x5b937a*/
          v8 = *this; /*0x5b9385*/
          Format = (wchar_t *)v4; /*0x5b9386*/
          result = GetDlgItem(v8, 1343); /*0x5b938a*/
          v6 = result; /*0x5b938c*/
          if ( result ) /*0x5b9390*/
          {
            if ( v5 >= 8 ) /*0x5b9394*/
              v7 = Math::InitDegToRad; /*0x5b93a4*/
            else
              v7 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))MEMORY[0x8316A8][v5]; /*0x5b939b*/
            swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, lParam); /*0x5b93c4*/
            return (HWND)DrawDialogText((LPARAM)v7, Buffer, v6); /*0x5b93d6*/
          }
        }
      }
    }
  }
  return result; /*0x5b93db*/
}


// ==== 0x005B93F0  ObjectClass::method_5B93F0  this=ObjectClass  sig=csp ====
char __thiscall sub_5B93F0(int this)
{
  HWND DlgItem; // eax
  HWND v3; // esi

  DlgItem = GetDlgItem(*(HWND *)this, 1639); /*0x5b93fd*/
  v3 = DlgItem; /*0x5b9403*/
  if ( DlgItem ) /*0x5b9407*/
  {
    DlgItem = (HWND)SendMessageA(DlgItem, 0x147u, 0, 0); /*0x5b9419*/
    if ( DlgItem != HWND_MESSAGE|0x2 ) /*0x5b941e*/
    {
      DlgItem = (HWND)SendMessageA(v3, 0x150u, (WPARAM)DlgItem, 0); /*0x5b9429*/
      if ( DlgItem != HWND_MESSAGE|0x2 ) /*0x5b942e*/
      {
        MEMORY[0xA8B3AC] = (int)DlgItem; /*0x5b9430*/
        *(_BYTE *)(this + 9) = 1; /*0x5b9437*/
        *(_BYTE *)(this + 8) = 1; /*0x5b943a*/
        LOBYTE(DlgItem) = 1; /*0x5b9435*/
      }
    }
  }
  return (char)DlgItem; /*0x5b943d*/
}


// ==== 0x005B9450  ObjectClass::method_5B9450  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_5B9450(int this)
{
  unsigned int result; // eax
  HWND v3; // edi

  result = (unsigned int)GetDlgItem(*(HWND *)this, 1029); /*0x5b945d*/
  v3 = (HWND)result; /*0x5b9463*/
  if ( result ) /*0x5b9467*/
  {
    result = SendMessageA((HWND)result, 0x147u, 0, 0); /*0x5b9479*/
    if ( result != -1 ) /*0x5b947e*/
    {
      MEMORY[0xA8B394] = result; /*0x5b9482*/
      *(_BYTE *)(this + 9) = 1; /*0x5b9489*/
      *(_BYTE *)(this + 8) = 1; /*0x5b948c*/
      if ( result >= 8 ) /*0x5b948f*/
        return SendMessageA(v3, 0x498u, 0, (LPARAM)Math::InitDegToRad); /*0x5b94ba*/
      else
        return SendMessageA(v3, 0x498u, 0, MEMORY[0x8316A8][result]); /*0x5b94a6*/
    }
  }
  return result; /*0x5b94a8*/
}


// ==== 0x005B94C0  ObjectClass::method_5B94C0  this=ObjectClass  sig=csp ====
char __thiscall sub_5B94C0(int this, char a2)
{
  HWND DlgItem; // eax
  HWND v4; // esi
  wchar_t lParam[20]; // [esp+8h] [ebp-28h] BYREF

  DlgItem = GetDlgItem(*(HWND *)this, 1473); /*0x5b94cf*/
  v4 = DlgItem; /*0x5b94d5*/
  if ( DlgItem ) /*0x5b94d9*/
  {
    SendMessageA(DlgItem, 0x4B3u, 0x14u, (LPARAM)lParam); /*0x5b94ef*/
    WideString::Trim(lParam); /*0x5b94f5*/
    if ( !a2 ) /*0x5b9500*/
      SendMessageA(v4, 0x4B2u, 0, (LPARAM)lParam); /*0x5b950f*/
    strcpy(MEMORY[0xA8B380], ToWideStringChar((char *)lParam)); /*0x5b9533*/
    *(_BYTE *)(this + 9) = 1; /*0x5b953e*/
    *(_BYTE *)(this + 8) = 1; /*0x5b9541*/
    LOBYTE(DlgItem) = 1; /*0x5b9537*/
  }
  return (char)DlgItem; /*0x5b9545*/
}


// ==== 0x005B9550  ModemGuest::UpdateGuestPlayerInfo  this=ModemGuest  sig=csp ====
int __thiscall sub_5B9550(char *this, wchar_t *Source, unsigned int a3, int a4)
{
  wchar_t *v5; // edi
  int result; // eax
  HWND v7; // edx
  HWND DlgItem; // edi
  int (__usercall *v9)@<eax>(char@<cf>, char@<zf>); // ebx
  wchar_t lParam[80]; // [esp+10h] [ebp-A0h] BYREF

  v5 = (wchar_t *)(this + 34); /*0x5b9564*/
  if ( _wcsicmp((const wchar_t *)this + 17, Source) /*0x5b958c*/
    || *((_DWORD *)this + 19) != a3
    || (result = a4, this->q014 != a4) )
  {
    wcscpy(v5, Source); /*0x5b9594*/
    v7 = *(HWND *)this; /*0x5b9599*/
    *((_DWORD *)this + 19) = a3; /*0x5b95a5*/
    this->q014 = a4; /*0x5b95a8*/
    DlgItem = GetDlgItem(v7, 1640); /*0x5b95b7*/
    if ( DlgItem ) /*0x5b95bb*/
    {
      swprintf(lParam, (const size_t)&off_82C5C8, Source, *(_DWORD *)(*((_DWORD *)g_SuperWeaponTypeCount + a4) + 96)); /*0x5b95db*/
      SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam); /*0x5b95f6*/
      if ( a3 >= 8 ) /*0x5b95fa*/
        v9 = Math::InitDegToRad; /*0x5b960a*/
      else
        v9 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))MEMORY[0x8316A8][a3]; /*0x5b9601*/
      SendMessageA(DlgItem, 0x498u, 0, (LPARAM)v9); /*0x5b9619*/
    }
    result = PlayVocClass(HIDWORD(MEMORY[0x8871E0]->MovieOff), 0x2000, 1.0, 0); /*0x5b9632*/
  }
  this->q009 = 1; /*0x5b9637*/
  return result; /*0x5b963b*/
}


// ==== 0x005B9680  NetworkGameSetup::ReadRulesInitConfig  this=NetworkGameSetup  sig=csp ====
HWND __thiscall sub_5B9680(int this)
{
  HWND result; // eax

  result = GetDlgItem(*(HWND *)this, 1360); /*0x5b968b*/
  if ( result ) /*0x5b9693*/
  {
    result = (HWND)SendMessageA(result, 0x400u, 0, 0); /*0x5b969f*/
    g_RulesInitConfig = (LPARAM)result; /*0x5b96a5*/
    *(_BYTE *)(this + 9) = 1; /*0x5b96aa*/
  }
  return result; /*0x5b96ae*/
}


// ==== 0x005B96B0  NetworkGameSetup::ReadRulesBases  this=NetworkGameSetup  sig=csp ====
HWND __thiscall sub_5B96B0(int this)
{
  HWND result; // eax

  result = GetDlgItem(*(HWND *)this, 1026); /*0x5b96bb*/
  if ( result ) /*0x5b96c3*/
  {
    result = (HWND)SendMessageA(result, 0x400u, 0, 0); /*0x5b96cf*/
    MEMORY[0xA8B25C] = (LPARAM)result; /*0x5b96d5*/
    *(_BYTE *)(this + 9) = 1; /*0x5b96da*/
  }
  return result; /*0x5b96de*/
}


// ==== 0x005B96E0  NetworkGameSetup::ReadRulesAlliesAllowed  this=NetworkGameSetup  sig=csp ====
HWND __thiscall sub_5B96E0(int this)
{
  HWND result; // eax

  result = GetDlgItem(*(HWND *)this, 1362); /*0x5b96eb*/
  if ( result ) /*0x5b96f3*/
  {
    result = (HWND)SendMessageA(result, 0x400u, 0, 0); /*0x5b96ff*/
    MEMORY[0xA8B274] = (LPARAM)result; /*0x5b9705*/
    *(_BYTE *)(this + 9) = 1; /*0x5b970a*/
  }
  return result; /*0x5b970e*/
}


// ==== 0x005B9710  NetworkGameSetup::ReadRulesEngineerCount  this=NetworkGameSetup  sig=csp ====
HWND __thiscall sub_5B9710(int this)
{
  HWND result; // eax

  result = GetDlgItem(*(HWND *)this, 1321); /*0x5b971b*/
  if ( result ) /*0x5b9723*/
  {
    result = (HWND)SendMessageA(result, 0x400u, 0, 0); /*0x5b972f*/
    MEMORY[0xA8B268] = 6 - (_DWORD)result; /*0x5b973c*/
    *(_BYTE *)(this + 9) = 1; /*0x5b9742*/
  }
  return result; /*0x5b9746*/
}


// ==== 0x005B9750  NetworkGameSetup::ReadRulesUnknown  this=NetworkGameSetup  sig=csp ====
HWND __thiscall sub_5B9750(int this)
{
  HWND result; // eax

  result = GetDlgItem(*(HWND *)this, 1363); /*0x5b975b*/
  if ( result ) /*0x5b9763*/
  {
    result = (HWND)SendMessageA(result, 0x400u, 0, 0); /*0x5b976f*/
    MEMORY[0xA8B278] = (LPARAM)result; /*0x5b9775*/
    *(_BYTE *)(this + 9) = 1; /*0x5b977a*/
  }
  return result; /*0x5b977e*/
}


// ==== 0x005B9A60  SkirmishDialog::HandleGameStart  this=SkirmishDialog  sig=csp ====
void __thiscall SkirmishDialog::HandleGameStart(int this)
{
  int v2; // ebp
  void *v3; // esi
  void *v4; // eax
  void *v5; // eax
  HWND DlgItem; // eax
  _DWORD *v7; // esi
  void *v8; // eax
  void *v9; // eax
  char v10[132]; // [esp+10h] [ebp-188h] BYREF
  wchar_t Destination[130]; // [esp+94h] [ebp-104h] BYREF

  Debug::Log(); /*0x5b9a71*/
  v2 = MEMORY[0xA8B254]; /*0x5b9a8a*/
  strcpy(v10, &MEMORY[0xA8B8E0]); /*0x5b9a9e*/
  wcscpy(Destination, (const wchar_t *)&MEMORY[0xA8B320] + 1); /*0x5b9aaf*/
  ShowWindow(*(HWND *)this, 0); /*0x5b9ac2*/
  if ( SkirmishDialog::Show(g_hWnd, this, v2) == 2 ) /*0x5b9ad2*/
  {
    MEMORY[0xA8B254] = v2; /*0x5b9ada*/
    LoadScenarioClassByIndex(v2); /*0x5b9ae0*/
    Session::PrepareGame(*(HWND *)this); /*0x5b9ae7*/
    ShowWindow(*(HWND *)this, 5); /*0x5b9af1*/
    if ( _strcmpi((const void *)(*(_DWORD *)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254]) + 88), aRandmapSed) ) /*0x5b9b0b*/
    {
      Session::PrepareGame(*(HWND *)this); /*0x5b9b8c*/
      InvalidateRect(*(HWND *)this, 0, 0); /*0x5b9b98*/
    }
    else
    {
      v3 = MEMORY[0xAC1154]; /*0x5b9b1d*/
      if ( MEMORY[0xAC1154] ) /*0x5b9b25*/
      {
        ComPtr::Dtor(MEMORY[0xAC1154]); /*0x5b9b29*/
        __3_YAXPAX_Z(v3); /*0x5b9b2f*/
      }
      v4 = __2_YAPAXI_Z(4u); /*0x5b9b39*/
      if ( v4 ) /*0x5b9b43*/
        v5 = (void *)unknown_libname_27(v4); /*0x5b9b47*/
      else
        v5 = 0; /*0x5b9b4e*/
      MEMORY[0xAC1154] = v5; /*0x5b9b57*/
      Surface::LoadToSurfaceSHP((char **)v5, stru_829ABC); /*0x5b9b5c*/
      if ( !*(_DWORD *)MEMORY[0xAC1154] ) /*0x5b9b67*/
        Session::PrepareGame(*(HWND *)this); /*0x5b9b6e*/
      InvalidateRect(*(HWND *)this, 0, 0); /*0x5b9b7a*/
      InvalidateRect(*(HWND *)this, 0, 0); /*0x5b9b83*/
    }
  }
  else
  {
    ShowWindow(*(HWND *)this, 5); /*0x5b9ba4*/
    if ( LoadScenarioClassByIndex(MEMORY[0xA8B254]) == 1 ) /*0x5b9bb3*/
    {
      DlgItem = GetDlgItem(*(HWND *)this, 1448); /*0x5b9bc1*/
      SendMessageA(DlgItem, 0x4B2u, 0, 11055906); /*0x5b9bd4*/
      if ( _strcmpi((const void *)(*(_DWORD *)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254]) + 88), aRandmapSed) ) /*0x5b9bf1*/
      {
        Session::PrepareGame(*(HWND *)this); /*0x5b9c64*/
      }
      else
      {
        v7 = MEMORY[0xAC1154]; /*0x5b9bfd*/
        if ( MEMORY[0xAC1154] ) /*0x5b9c05*/
        {
          ComPtr::Dtor(MEMORY[0xAC1154]); /*0x5b9c09*/
          __3_YAXPAX_Z(v7); /*0x5b9c0f*/
          v8 = __2_YAPAXI_Z(4u); /*0x5b9c19*/
          if ( v8 ) /*0x5b9c23*/
            v9 = (void *)unknown_libname_27(v8); /*0x5b9c27*/
          else
            v9 = 0; /*0x5b9c2e*/
          MEMORY[0xAC1154] = v9; /*0x5b9c37*/
          Surface::LoadToSurfaceSHP((char **)v9, stru_829ABC); /*0x5b9c3c*/
          v7 = MEMORY[0xAC1154]; /*0x5b9c41*/
        }
        if ( !*v7 ) /*0x5b9c47*/
          Session::PrepareGame(*(HWND *)this); /*0x5b9c4e*/
        InvalidateRect(*(HWND *)this, 0, 0); /*0x5b9c5a*/
      }
    }
    else
    {
      MEMORY[0xA8B254] = v2; /*0x5b9c6b*/
    }
  }
  *(_BYTE *)(this + 9) = 1; /*0x5b9c76*/
  Debug::Log(); /*0x5b9c7a*/
}


// ==== 0x005B9C90  RandomMap::RegenerateRandomMapPreview  this=RandomMap  sig=csp ====
void __thiscall RegenerateRandomMapPreview(int this)
{
  void *v2; // esi
  HWND DlgItem; // eax
  char v4; // bl
  int v5; // esi
  char *v6; // eax
  char *v7; // edi
  wchar_t *v8; // eax
  wchar_t *v9; // ebx
  int v10; // eax
  char *v11; // eax
  _DWORD *v12; // eax
  char v13; // bl
  void *v14; // eax
  void *v15; // eax
  _DWORD v17[22]; // [esp+8h] [ebp-6Ch] BYREF
  _BYTE v18[12]; // [esp+60h] [ebp-14h] BYREF
  int v19; // [esp+6Ch] [ebp-8h]

  Debug::Log(); /*0x5b9c9f*/
  MEMORY[0x8316D4] = 0; /*0x5b9cac*/
  if ( CCFileClass::Load(&loc_5BB260) == 1 ) /*0x5b9cbb*/
  {
    MEMORY[0x8316D4] = 1; /*0x5b9ccd*/
    MapSeed::ValidateName(aRandmapSed); /*0x5b9cd2*/
    v2 = MEMORY[0xAC1154]; /*0x5b9cd7*/
    if ( MEMORY[0xAC1154] ) /*0x5b9cdf*/
    {
      ComPtr::Dtor(MEMORY[0xAC1154]); /*0x5b9ce3*/
      __3_YAXPAX_Z(v2); /*0x5b9ce9*/
      MEMORY[0xAC1154] = 0; /*0x5b9cf1*/
    }
    DlgItem = GetDlgItem(*(HWND *)this, 1448); /*0x5b9d03*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)&word_ABE050); /*0x5b9d16*/
    v4 = 0; /*0x5b9d21*/
    v5 = 0; /*0x5b9d23*/
    if ( MEMORY[0xA8B8D8] > 0 ) /*0x5b9d27*/
    {
      while ( _strcmpi((const void *)(*(_DWORD *)(MEMORY[0xA8B8CC] + 4 * v5) + 88), aRandmapSed) ) /*0x5b9d44*/
      {
        if ( ++v5 >= MEMORY[0xA8B8D8] ) /*0x5b9d4e*/
          goto LABEL_9; /*0x5b9d4e*/
      }
      v4 = 1; /*0x5b9d52*/
    }
LABEL_9:
    v6 = GameConfig::ComputeCRC(); /*0x5b9d54*/
    v7 = v6; /*0x5b9d5b*/
    if ( v4 ) /*0x5b9d5d*/
    {
      GameOption::SetDigest(v6); /*0x5b9df6*/
      GameOption::SetDescriptionWStr(*(wchar_t **)(MEMORY[0xA8B8CC] + 4 * v5), &word_ABE050); /*0x5b9e08*/
    }
    else
    {
      v8 = (wchar_t *)__2_YAPAXI_Z(0x1BCu); /*0x5b9d68*/
      if ( v8 ) /*0x5b9d72*/
        v9 = SessionClass::ParseGameInfo(v8, aRandmapSed, &word_ABE050, v7, 1, 0, 2, 4); /*0x5b9d8e*/
      else
        v9 = 0; /*0x5b9d92*/
      if ( MEMORY[0xA8B8D8] < MEMORY[0xA8B8D0] /*0x5b9dcb*/
        || (MEMORY[0xA8B8D5] || !MEMORY[0xA8B8D0])
        && MEMORY[0xA8B8DC] > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8B8C8] + 8))(
             &MEMORY[0xA8B8C8],
             MEMORY[0xA8B8D0] + MEMORY[0xA8B8DC],
             0) )
      {
        v10 = MEMORY[0xA8B8D8]++; /*0x5b9dd8*/
        *(_DWORD *)(MEMORY[0xA8B8CC] + 4 * v10) = v9; /*0x5b9de7*/
      }
    }
    __3_YAXPAX_Z(v7); /*0x5b9e0e*/
    if ( LoadScenarioClassByIndex(v5) == 1 ) /*0x5b9e1f*/
    {
      MEMORY[0xA8B254] = v5; /*0x5b9e2f*/
      v11 = (char *)MEMORY[0xA8B230]; /*0x5b9e3b*/
      strcpy(&MEMORY[0xA8B8E0], aRandmapSed); /*0x5b9e51*/
      strcpy(v11 + 4700, &MEMORY[0xA8B8E0]); /*0x5b9e79*/
      v12 = CCFileClass::Construct(v17, &MEMORY[0xA8B8E0]); /*0x5b9e86*/
      v13 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v12 + 20))(v12, 0); /*0x5b9e98*/
      v17[0] = &vt_CCFileClass; /*0x5b9e9a*/
      v19 = 0; /*0x5b9ea2*/
      Vector::Clear((int)v18); /*0x5b9eaa*/
      v17[0] = &off_7E1668; /*0x5b9eb3*/
      BufferIOFileClass::Dtor(v17); /*0x5b9ebb*/
      if ( v13 ) /*0x5b9ec2*/
      {
        v14 = __2_YAPAXI_Z(4u); /*0x5b9ec6*/
        if ( v14 ) /*0x5b9ed0*/
          v15 = (void *)unknown_libname_27(v14); /*0x5b9ed4*/
        else
          v15 = 0; /*0x5b9edb*/
        MEMORY[0xAC1154] = v15; /*0x5b9ee4*/
        Surface::LoadToSurfaceSHP((char **)v15, stru_829ABC); /*0x5b9ee9*/
        PostMessageA(*(HWND *)this, 0xFu, 0, 0); /*0x5b9efb*/
      }
    }
    *(_BYTE *)(this + 9) = 1; /*0x5b9f07*/
  }
  MEMORY[0x8316D4] = 1; /*0x5b9f10*/
  Debug::Log(); /*0x5b9f17*/
}


// ==== 0x005B9F30  CellClass::SetOccupancy  this=ModemHost  sig=csp ====
DWORD __thiscall CellClass::SetOccupancy(int this, ModemHost *aP1)
{
  int v3; // edi
  int v4; // edi
  DWORD result; // eax
  int v6; // edi
  int v7; // edi
  _DWORD v8[62]; // [esp+Ch] [ebp-FCh] BYREF
  __int16 v9; // [esp+104h] [ebp-4h]

  Stream::ReadPacket((int)&MEMORY[0xA8D63C].__pad_1258[476]); /*0x5b9f40*/
  if ( *(_BYTE *)(this + 9) == 1 ) /*0x5b9f4d*/
  {
    v3 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9460]; /*0x5b9f54*/
    if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9452] != -1 ) /*0x5b9f5c*/
      v3 += Timer::GetTicks() - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9452]; /*0x5b9f6e*/
    if ( (unsigned int)(v3 - *(_DWORD *)(this + 12)) > 0x1E ) /*0x5b9f76*/
      goto LABEL_6; /*0x5b9f76*/
  }
  if ( (_BYTE)aP1 == 1 ) /*0x5b9f80*/
  {
LABEL_6:
    Game::BuildGameSetupPacket(this); /*0x5b9f84*/
    v4 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9460]; /*0x5b9f8e*/
    if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9452] != -1 ) /*0x5b9f96*/
      v4 += Timer::GetTicks() - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9452]; /*0x5b9fa8*/
    *(_DWORD *)(this + 12) = v4; /*0x5b9faa*/
    *(_BYTE *)(this + 9) = 0; /*0x5b9fad*/
  }
  result = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9452]; /*0x5b9fb1*/
  v6 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9460]; /*0x5b9fb6*/
  if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9452] != -1 ) /*0x5b9fbe*/
  {
    result = Timer::GetTicks() - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9452]; /*0x5b9fca*/
    v6 += result; /*0x5b9fd0*/
  }
  if ( (unsigned int)(v6 - *(_DWORD *)(this + 28)) > 0x28 ) /*0x5b9fd8*/
  {
    memset(v8, 0, sizeof(v8)); /*0x5b9fe5*/
    v9 = 0; /*0x5b9fe7*/
    v8[0] = 105; /*0x5b9fee*/
    *(_DWORD *)((char *)&v8[38] + 2) = CellClass::GetBridgeIndexThunk(&MEMORY[0xA8D63C].__pad_1258[476]); /*0x5ba001*/
    LOBYTE(v8[6]) = MEMORY[0xA8D63C].__pad_430[196]; /*0x5ba018*/
    Stream::WriteBlock((int)&MEMORY[0xA8D63C].__pad_1258[476], (CellStruct *)v8, 250, 0); /*0x5ba01c*/
    result = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9452]; /*0x5ba021*/
    v7 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9460]; /*0x5ba026*/
    if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9452] != -1 ) /*0x5ba02e*/
    {
      result = Timer::GetTicks() - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9452]; /*0x5ba03a*/
      v7 += result; /*0x5ba040*/
    }
    *(_DWORD *)(this + 28) = v7; /*0x5ba042*/
  }
  return result; /*0x5ba045*/
}


// ==== 0x005BA060  ModemGuest::ProcessPacket  this=ModemHost  sig=csp ====
char __thiscall ModemGuest::ProcessPacket(int this, ModemHost *aP1)
{
  int v3; // esi
  VectorClass *v4; // eax
  wchar_t *v5; // eax
  int v7; // edi
  int v8; // esi
  wchar_t *v9; // eax
  int v10; // esi
  int updated; // eax
  bool v12; // cl
  int v13; // esi
  char *v14; // eax
  HWND v15; // eax
  CampaignScore *v16; // eax
  int v17; // esi
  CampaignScore *v18; // ebx
  ObjectClass *DlgItem; // edi
  int (__usercall *v20)@<eax>(char@<cf>, char@<zf>); // esi
  int v21; // esi
  wchar_t *v22; // eax
  char v23; // al
  int v24; // esi
  ModemHost *v25; // [esp-14h] [ebp-334h]
  ModemHost *v26; // [esp-14h] [ebp-334h]
  ModemHost *v27; // [esp-14h] [ebp-334h]
  wchar_t *v28; // [esp-10h] [ebp-330h]
  wchar_t *v29; // [esp-10h] [ebp-330h]
  wchar_t *v30; // [esp-10h] [ebp-330h]
  wchar_t *v31; // [esp-10h] [ebp-330h]
  wchar_t *v32; // [esp-10h] [ebp-330h]
  wchar_t *StringCSF; // [esp-10h] [ebp-330h]
  int v34; // [esp+0h] [ebp-320h] BYREF
  VectorClass *v35; // [esp+10h] [ebp-310h]
  VectorClass *v36; // [esp+14h] [ebp-30Ch]
  VectorClass *v37; // [esp+18h] [ebp-308h]
  CampaignScore *v38; // [esp+1Ch] [ebp-304h]
  _BYTE aP2[38]; // [esp+20h] [ebp-300h] BYREF
  unsigned int v40; // [esp+46h] [ebp-2DAh]
  int v41; // [esp+AAh] [ebp-276h]
  int v42; // [esp+BEh] [ebp-262h]
  int v43; // [esp+F4h] [ebp-22Ch]
  int v44; // [esp+F8h] [ebp-228h]
  wchar_t Buffer[256]; // [esp+120h] [ebp-200h] BYREF

  if ( ObjectTypeClass::CreateInstance( /*0x5ba082*/
         (int)&HouseClass_Player.__pad_5568[22460],
         (CampaignScore *)&aP2[4],
         (CampaignScore *)aP2) <= 0 )
  {
LABEL_48:
    v21 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5ba4f6*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5ba503*/
      v21 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5ba515*/
    if ( (unsigned int)(v21 - *(_DWORD *)(this + 20)) <= *(_DWORD *)(this + 24) ) /*0x5ba521*/
    {
      return 0; /*0x5ba616*/
    }
    else
    {
      Debug::Log(); /*0x5ba52d*/
      if ( !(_BYTE)aP1 ) /*0x5ba53e*/
      {
        v35 = (VectorClass *)&stru_82083C; /*0x5ba557*/
        StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_ModemHst_cpp, 2197); /*0x5ba564*/
        v22 = GetStringCSF(g_Str_TXT_SYSTEM_NOT_RESPONDING, 0, g_Str_File_ModemHst_cpp, 2197); /*0x5ba576*/
        Dialog::ShowMessageBox((int)v22, StringCSF, 0, 0, 0, v34); /*0x5ba580*/
      }
      return 1; /*0x5ba588*/
    }
  }
  else
  {
    v3 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5ba08d*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5ba098*/
      v3 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5ba0aa*/
    v4 = *(VectorClass **)&aP2[4]; /*0x5ba0ac*/
    *(_DWORD *)(this + 20) = v3; /*0x5ba0b0*/
    *(_DWORD *)(this + 24) = 1200; /*0x5ba0b6*/
    if ( (int)v4 < 100 /*0x5ba0e7*/
      || (int)v4 >= 109
      || v4 == (VectorClass *)104
      || aP2[28] != *(_DWORD *)&HouseClass_Player.__pad_5568[18556] )
    {
      switch ( (unsigned int)v4 ) /*0x5ba16d*/
      {
        case 'e': /*0x5ba16d*/
          Debug::Log(); /*0x5ba268*/
          updated = NetworkBuffer::UpdateWindow( /*0x5ba27f*/
                      (VersionClass *)&HouseClass_Player.__pad_5568[23084],
                      *(CellStruct **)&aP2[34],
                      v40);
          if ( updated ) /*0x5ba286*/
          {
            if ( updated == -1 ) /*0x5ba2de*/
            {
              if ( !(_BYTE)aP1 ) /*0x5ba2e9*/
              {
                v37 = (VectorClass *)&stru_82083C; /*0x5ba306*/
                v31 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_ModemHst_cpp, 2068); /*0x5ba313*/
                v26 = (ModemHost *)GetStringCSF(g_Str_TXT_YOURGAME_OUTDATED, 0, g_Str_File_ModemHst_cpp, 2068); /*0x5ba32a*/
                Dialog::ShowMessageBox((int)v26, v31, 0, 0, 0, v34); /*0x5ba32f*/
              }
            }
            else
            {
              v12 = v41 == *(_DWORD *)(this + 84); /*0x5ba344*/
              if ( v43 != *(_DWORD *)(this + 92) ) /*0x5ba352*/
                v12 = 0; /*0x5ba354*/
              if ( v44 == *(_DWORD *)(this + 88) && v12 ) /*0x5ba366*/
              {
                *(_DWORD *)&HouseClass_Player.__pad_5568[8088] = Network::GetMaxPacketSize((VersionClass *)&HouseClass_Player.__pad_5568[23084]); /*0x5ba3fe*/
                v14 = CharToWideString(&aP2[8]); /*0x5ba403*/
                ModemGuest::UpdateGuestPlayerInfo((char *)this, (wchar_t *)v14, aP2[33], *(int *)&aP2[29]); /*0x5ba416*/
                *(_BYTE *)(this + 32) = 1; /*0x5ba41b*/
                goto LABEL_48; /*0x5ba41f*/
              }
              if ( !(_BYTE)aP1 ) /*0x5ba375*/
              {
                v35 = (VectorClass *)&stru_82083C; /*0x5ba38e*/
                v32 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_ModemHst_cpp, 2129); /*0x5ba39b*/
                v27 = (ModemHost *)GetStringCSF(g_Str_TXT_MISMATCH, 0, g_Str_File_ModemHst_cpp, 2129); /*0x5ba3b2*/
                Dialog::ShowMessageBox((int)v27, v32, 0, 0, 0, v34); /*0x5ba3b7*/
              }
            }
          }
          else if ( !(_BYTE)aP1 ) /*0x5ba291*/
          {
            v38 = &stru_82083C; /*0x5ba2ae*/
            v30 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_ModemHst_cpp, 2059); /*0x5ba2bb*/
            v25 = (ModemHost *)GetStringCSF(g_Str_TXT_DESTGAME_OUTDATED, 0, g_Str_File_ModemHst_cpp, 2059); /*0x5ba2d2*/
            Dialog::ShowMessageBox((int)v25, v30, 0, 0, 0, v34); /*0x5ba2d7*/
          }
          v13 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5ba3c1*/
          if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5ba3c9*/
            v13 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5ba3db*/
          *(_DWORD *)(this + 20) = v13; /*0x5ba3dd*/
          break; /*0x5ba3dd*/
        case 'f': /*0x5ba16d*/
          Debug::Log(); /*0x5ba179*/
          v7 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5ba183*/
          if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5ba18e*/
            v7 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5ba1a0*/
          while ( 1 ) /*0x5ba1a7*/
          {
            v8 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5ba1a7*/
            if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5ba1af*/
              v8 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5ba1c1*/
            if ( (unsigned int)(v8 - v7) >= 0x3C ) /*0x5ba1c8*/
              break; /*0x5ba1c8*/
            Event::Dispatch(); /*0x5ba1ca*/
            Stream::ReadPacket((int)&HouseClass_Player.__pad_5568[22460]); /*0x5ba1d4*/
          }
          if ( !(_BYTE)aP1 ) /*0x5ba1e4*/
          {
            v36 = (VectorClass *)&stru_82083C; /*0x5ba1fd*/
            v29 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_ModemHst_cpp, 2038); /*0x5ba20a*/
            v9 = GetStringCSF(aTxtUserSignedO, 0, g_Str_File_ModemHst_cpp, 2038); /*0x5ba21c*/
            Dialog::ShowMessageBox((int)v9, v29, 0, 0, 0, v34); /*0x5ba226*/
          }
          v10 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5ba230*/
          if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5ba238*/
            v10 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5ba24a*/
          *(_DWORD *)(this + 20) = v10; /*0x5ba24c*/
          Network::CleanupOnDisconnect(); /*0x5ba24f*/
          return 1; /*0x5ba260*/
        case 'h': /*0x5ba16d*/
          Debug::Log(); /*0x5ba450*/
          v16 = (CampaignScore *)CharToWideString(&aP2[8]); /*0x5ba45c*/
          v17 = aP2[28]; /*0x5ba469*/
          v18 = v16; /*0x5ba46f*/
          if ( &v34 != (int *)-61 ) /*0x5ba473*/
          {
            DlgItem = (ObjectClass *)GetDlgItem(*(HWND *)this, 1343); /*0x5ba484*/
            if ( DlgItem ) /*0x5ba488*/
            {
              if ( v17 >= 8 ) /*0x5ba491*/
                v20 = Math::InitDegToRad; /*0x5ba49c*/
              else
                v20 = *(int (__usercall **)@<eax>(char@<cf>, char@<zf>))&stru_830620.__pad_DFC[4 * v17 + 652]; /*0x5ba493*/
              swprintf(Buffer, (const size_t)g_Str_Trace___s_, (const wchar_t *const)v18, (CampaignScore *)&aP2[29]); /*0x5ba4b5*/
              DrawDialogText((ObjectClass *)v20, Buffer, (HWND)DlgItem); /*0x5ba4c7*/
            }
          }
          if ( !(_BYTE)aP1 ) /*0x5ba4d5*/
            PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1708), 0x2000, 1.0, 0); /*0x5ba4ee*/
          goto LABEL_48; /*0x5ba4ee*/
        case 'i': /*0x5ba16d*/
          Debug::Log(); /*0x5ba599*/
          v23 = *(_BYTE *)(this + 32); /*0x5ba59e*/
          *(_DWORD *)(this + 16) = v42; /*0x5ba5ab*/
          if ( !v23 ) /*0x5ba5b0*/
            *(_BYTE *)(this + 9) = 1; /*0x5ba5b6*/
          goto LABEL_48; /*0x5ba5ba*/
        case 't': /*0x5ba16d*/
          Debug::Log(); /*0x5ba429*/
          v15 = GetDlgItem(*(HWND *)this, 1); /*0x5ba439*/
          EnableWindow(v15, 1); /*0x5ba440*/
          goto LABEL_48; /*0x5ba446*/
        case 'w': /*0x5ba16d*/
          GenerateRandomMapPreview(v3); /*0x5ba5d3*/
          v24 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5ba5dd*/
          if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5ba5e5*/
            v24 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5ba5f7*/
          *(_DWORD *)(this + 20) = v24; /*0x5ba5f9*/
          goto LABEL_48; /*0x5ba5fc*/
        default:
          Debug::Log(); /*0x5ba5c4*/
          goto LABEL_48; /*0x5ba5cc*/
      }
    }
    else
    {
      Debug::Log(); /*0x5ba0ee*/
      if ( !(_BYTE)aP1 ) /*0x5ba0ff*/
      {
        v36 = (VectorClass *)&stru_82083C; /*0x5ba11c*/
        v28 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_ModemHst_cpp, 2018); /*0x5ba129*/
        v5 = GetStringCSF(g_Str_TXT_SYSTEM_NOT_RESPONDING, 0, g_Str_File_ModemHst_cpp, 2018); /*0x5ba13b*/
        Dialog::ShowMessageBox((int)v5, v28, 0, 0, 0, v34); /*0x5ba145*/
        return 1; /*0x5ba156*/
      }
    }
    return 1; /*0x5ba3e3*/
  }
}


// ==== 0x005BA660  Game::BuildGameSetupPacket  this=Game  sig=csp ====
int __thiscall BuildGameSetupPacket(int this)
{
  HWND DlgItem; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char v8; // dl
  unsigned int v9; // eax
  _DWORD v11[62]; // [esp+8h] [ebp-168h] BYREF
  __int16 v12; // [esp+100h] [ebp-70h]
  int v13[22]; // [esp+104h] [ebp-6Ch] BYREF
  _BYTE v14[12]; // [esp+15Ch] [ebp-14h] BYREF
  int v15; // [esp+168h] [ebp-8h]

  Debug::Log(); /*0x5ba66f*/
  DlgItem = GetDlgItem(*(HWND *)this, 1); /*0x5ba67e*/
  EnableWindow(DlgItem, 0); /*0x5ba685*/
  v3 = *(_DWORD *)(this + 88); /*0x5ba696*/
  memset(v11, 0, sizeof(v11)); /*0x5ba699*/
  v4 = *(_DWORD *)(this + 84); /*0x5ba69b*/
  v12 = 0; /*0x5ba69e*/
  v5 = *(_DWORD *)(this + 92); /*0x5ba6a0*/
  v11[0] = 101; /*0x5ba6a3*/
  *(_DWORD *)((char *)&v11[33] + 2) = v4; /*0x5ba6ab*/
  v11[53] = v3; /*0x5ba6b2*/
  v11[52] = v5; /*0x5ba6b9*/
  v11[54] = GameOptions::GetEntry(); /*0x5ba6ca*/
  *(_DWORD *)((char *)&v11[7] + 2) = NetworkBuffer::GetField2(&MEMORY[0xA8ECE0]); /*0x5ba6db*/
  v6 = NetworkBuffer::GetField3(&MEMORY[0xA8ECE0]); /*0x5ba6df*/
  *(_DWORD *)((char *)&v11[36] + 2) = MEMORY[0xA8ED94]; /*0x5ba6f0*/
  *(_DWORD *)((char *)&v11[37] + 2) = MEMORY[0xA8E960]; /*0x5ba6fd*/
  *(_DWORD *)((char *)&v11[8] + 2) = v6; /*0x5ba70a*/
  BYTE2(v11[40]) = MEMORY[0xA8B268]; /*0x5ba71b*/
  v7 = *(_DWORD *)((char *)&v11[35] + 2); /*0x5ba739*/
  LOBYTE(v7) = BYTE2(v11[35]) & 0xF; /*0x5ba744*/
  *(_DWORD *)((char *)&v11[35] + 2) = v7 /*0x5ba750*/
                                    | (16
                                     * (MEMORY[0xA8B262] & 1
                                      | (2
                                       * (MEMORY[0xA8B263] & 1
                                        | (2 * (MEMORY[0xA8B264] & 1 | (2 * (MEMORY[0xA8B26C] & 1))))))));
  LOBYTE(v11[6]) = MEMORY[0xA8DB30]; /*0x5ba75d*/
  v8 = MEMORY[0xA8B394]; /*0x5ba776*/
  strcpy((char *)&v11[1], MEMORY[0xA8B380]); /*0x5ba77f*/
  BYTE1(v11[7]) = v8; /*0x5ba793*/
  *(_DWORD *)((char *)&v11[6] + 1) = MEMORY[0xA8B3AC]; /*0x5ba797*/
  *(_DWORD *)((char *)&v11[31] + 2) = MEMORY[0xA8B25C]; /*0x5ba79b*/
  v9 = *(_DWORD *)((char *)&v11[32] + 2) & 0xFFFFFFFE | MEMORY[0xA8B258] & 1; /*0x5ba7bd*/
  LOBYTE(v9) = BYTE2(v11[32]) & 0xF8 | MEMORY[0xA8B258] & 1; /*0x5ba7cc*/
  *(_DWORD *)((char *)&v11[32] + 2) = v9 | (2 * (MEMORY[0xA8B260] & 1 | (2 * (MEMORY[0xA8B261] & 1)))); /*0x5ba7f7*/
  LOBYTE(v11[35]) = MEMORY[0xA8B274]; /*0x5ba819*/
  *(_DWORD *)((char *)&v11[35] + 2) = *(_DWORD *)((char *)&v11[35] + 2) & 0xFFFFFFF1 /*0x5ba828*/
                                    | (4 * (MEMORY[0xA8B320] & 1)) & 0xF5
                                    | (2 * (MEMORY[0xA8B31D] & 1 | (4 * (MEMORY[0xA8B31F] & 1))));
  BYTE1(v11[35]) = MEMORY[0xA8B278]; /*0x5ba835*/
  BYTE2(v11[34]) = g_RulesInitConfig; /*0x5ba842*/
  HIBYTE(v11[34]) = MEMORY[0xA8B270]; /*0x5ba84e*/
  wcscpy((wchar_t *)&v11[9] + 1, *(const wchar_t **)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254])); /*0x5ba85e*/
  CCFileClass::Construct(v13, (char *)(*(_DWORD *)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254]) + 88)); /*0x5ba87f*/
  *(_DWORD *)((char *)&v11[39] + 2) = CCFileClass::GetSize(v13); /*0x5ba896*/
  strncpy((char *)&v11[40] + 3, (const char *)(*(_DWORD *)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254]) + 88), 0xDu); /*0x5ba8b3*/
  strncpy((char *)&v11[44], (const char *)(*(_DWORD *)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254]) + 348), 0x20u); /*0x5ba8d7*/
  *(_DWORD *)((char *)&v11[32] + 2) = *(_DWORD *)((char *)&v11[32] + 2) & 0xFFFFFFEF /*0x5ba90c*/
                                    | (16 * (*(_BYTE *)(*(_DWORD *)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254]) + 380) & 1));
  Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v11, 250, 1); /*0x5ba91d*/
  v13[0] = (int)&vt_CCFileClass; /*0x5ba929*/
  v15 = 0; /*0x5ba934*/
  Vector::Clear((int)v14); /*0x5ba93f*/
  v13[0] = (int)&off_7E1668; /*0x5ba94b*/
  return BufferIOFileClass::Dtor(v13); /*0x5ba95b*/
}


// ==== 0x005BA970  NetworkGameSetup::SendGameSetupPacket  this=NetworkGameSetup  sig=csp ====
void __thiscall sub_5BA970(HWND *this, wchar_t *Source)
{
  char *v3; // eax
  unsigned int v4; // edi
  HWND DlgItem; // esi
  int (__usercall *v6)@<eax>(char@<cf>, char@<zf>); // edi
  wchar_t *Format; // [esp+10h] [ebp-300h]
  _DWORD v8[62]; // [esp+14h] [ebp-2FCh] BYREF
  __int16 v9; // [esp+10Ch] [ebp-204h]
  wchar_t Buffer[256]; // [esp+110h] [ebp-200h] BYREF

  if ( Source ) /*0x5ba985*/
  {
    memset(v8, 0, sizeof(v8)); /*0x5ba99a*/
    v9 = 0; /*0x5ba99c*/
    v8[0] = 104; /*0x5ba9a8*/
    strcpy((char *)&v8[1], MEMORY[0xA8B380]); /*0x5ba9c4*/
    LOBYTE(v8[6]) = MEMORY[0xA8B394]; /*0x5ba9d4*/
    wcscpy((wchar_t *)((char *)&v8[6] + 1), Source); /*0x5ba9d8*/
    Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v8, 250, 1); /*0x5ba9f1*/
    Stream::ReadPacket((int)&MEMORY[0xA8EA70]); /*0x5ba9fb*/
    v3 = CharToWideString(MEMORY[0xA8B380]); /*0x5baa05*/
    v4 = MEMORY[0xA8B394]; /*0x5baa0d*/
    Format = (wchar_t *)v3; /*0x5baa19*/
    DlgItem = GetDlgItem(*this, 1343); /*0x5baa23*/
    if ( DlgItem ) /*0x5baa27*/
    {
      if ( v4 >= 8 ) /*0x5baa2b*/
        v6 = Math::InitDegToRad; /*0x5baa3b*/
      else
        v6 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))MEMORY[0x8316A8][v4]; /*0x5baa32*/
      swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, Source); /*0x5baa54*/
      DrawDialogText((LPARAM)v6, Buffer, DlgItem); /*0x5baa66*/
    }
  }
}


// ==== 0x005BAA80  ObjectClass::method_5BAA80  this=ObjectClass  sig=csp ====
void __thiscall sub_5BAA80(HWND *this, wchar_t *Format, unsigned int a3, int a4)
{
  HWND DlgItem; // edi
  int (__usercall *v5)@<eax>(char@<cf>, char@<zf>); // esi
  wchar_t Buffer[256]; // [esp+8h] [ebp-200h] BYREF

  if ( a4 ) /*0x5baa91*/
  {
    DlgItem = GetDlgItem(*this, 1343); /*0x5baaa1*/
    if ( DlgItem ) /*0x5baaa5*/
    {
      if ( a3 >= 8 ) /*0x5baab1*/
        v5 = Math::InitDegToRad; /*0x5baac1*/
      else
        v5 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))MEMORY[0x8316A8][a3]; /*0x5baab8*/
      swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, a4); /*0x5baada*/
      DrawDialogText((LPARAM)v5, Buffer, DlgItem); /*0x5baae9*/
    }
  }
}


// ==== 0x005BAB00  SendSignOffEvent  this=ModemHost  sig=ida-proto ====
HWND sub_5BAB00()
{
  wchar_t *StringCSF; // eax
  HWND MessageBox; // eax
  HWND v2; // ebx
  int v3; // edi
  int v4; // esi
  HWND result; // eax
  _BYTE v6[4]; // [esp+8h] [ebp-1FCh] BYREF
  _DWORD v7[62]; // [esp+Ch] [ebp-1F8h] BYREF
  __int16 v8; // [esp+104h] [ebp-100h]
  _DWORD v9[6]; // [esp+108h] [ebp-FCh] BYREF
  int v10; // [esp+120h] [ebp-E4h]

  memset(v7, 0, sizeof(v7)); /*0x5bab15*/
  v8 = 0; /*0x5bab21*/
  LOBYTE(v7[6]) = MEMORY[0xA8DB30]; /*0x5bab28*/
  v7[0] = 102; /*0x5bab37*/
  BYTE1(v7[7]) = MEMORY[0xA8B394]; /*0x5bab3f*/
  Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v7, 250, 1); /*0x5bab43*/
  StringCSF = GetStringCSF(aTxtSigningOff, 0, g_Str_File_ModemHst_cpp, 2398); /*0x5bab5b*/
  MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5bab64*/
  v2 = MessageBox; /*0x5bab69*/
  if ( MessageBox ) /*0x5bab6d*/
    Dialog::Show(MessageBox); /*0x5bab71*/
  v3 = MEMORY[0x887340]; /*0x5bab7b*/
  if ( MEMORY[0x887338] != -1 ) /*0x5bab84*/
    v3 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5bab96*/
  while ( Count::GetCountQueue(&MEMORY[0xA8EA70]) ) /*0x5bab9d*/
  {
    v4 = MEMORY[0x887340]; /*0x5babb0*/
    if ( MEMORY[0x887338] != -1 ) /*0x5babb9*/
      v4 += Timer::GetTicks() - MEMORY[0x887338]; /*0x5babcb*/
    if ( (unsigned int)(v4 - v3) >= 0x12C /*0x5bac10*/
      || ObjectTypeClass::CreateInstance((int)&MEMORY[0xA8EA70], (int)v9, (int)v6) > 0
      && v9[0] == 102
      && (unsigned __int8)v10 == MEMORY[0xA8DB30] )
    {
      break; /*0x5bac10*/
    }
    Event::Dispatch(); /*0x5bac12*/
    MessageLoop(); /*0x5bac17*/
    Stream::ReadPacket((int)&MEMORY[0xA8EA70]); /*0x5bac21*/
  }
  result = (HWND)Network::CleanupOnDisconnect(); /*0x5bac39*/
  if ( v2 ) /*0x5bac40*/
    return Dialog::Destroy(v2); /*0x5bac44*/
  return result; /*0x5bac49*/
}


// ==== 0x005BAC60  ModemHost::StartGame  this=ModemHost  sig=csp ====
char __thiscall ModemHost::StartGame(int this, ModemHost *aP1)
{
  int v3; // eax
  int v4; // esi
  char *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // esi
  WinModemClass *v9; // ebx
  int v10; // eax
  unsigned int BridgeIndexThunk; // ecx
  unsigned int WinModemClass_field_0x10; // eax
  unsigned int v13; // eax
  wchar_t *StringCSF; // eax
  HWND MessageBox; // eax
  ObjectClass *v16; // ebx
  int v17; // edi
  int v18; // esi
  int v19; // esi
  wchar_t *v20; // eax
  int v21; // edi
  int v22; // esi
  wchar_t *v23; // eax
  int v24; // esi
  ObjectClass *v25; // eax
  unsigned int v26; // ecx
  int v27; // edx
  wchar_t *v28; // [esp-10h] [ebp-224h]
  int v29; // [esp+0h] [ebp-214h]
  CampaignScore aP2; // [esp+18h] [ebp-1FCh] BYREF
  _DWORD aP2_4[62]; // [esp+1Ch] [ebp-1F8h] BYREF
  __int16 v33; // [esp+114h] [ebp-100h]
  CampaignScore v34[7]; // [esp+118h] [ebp-FCh] BYREF

  Debug::Log(); /*0x5bac73*/
  Debug::Log(); /*0x5bac97*/
  if ( (_BYTE)aP1 == 1 ) /*0x5baca2*/
    return 0; /*0x5bacb0*/
  *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4692) = *(_DWORD *)&HouseClass_Player.__pad_5568[8096]; /*0x5bacc5*/
  strcpy( /*0x5bacfc*/
    (char *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4700),
    (const char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752]
                             + 4 * *(_DWORD *)&HouseClass_Player.__pad_5568[8096])
                 + 88));
  *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1552) = 1; /*0x5bad10*/
  *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 1548) = 1; /*0x5bad1c*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8856] = 0; /*0x5bad22*/
  v3 = __2_YAPAXI_Z(0x85u); /*0x5bad28*/
  v4 = v3; /*0x5bad2d*/
  if ( v3 ) /*0x5bad34*/
  {
    Waypoint::InitInvalid((_BYTE *)(v3 + 40)); /*0x5bad3d*/
    v5 = CharToWideString(&HouseClass_Player.__pad_5568[8396]); /*0x5bad47*/
    wcscpy((wchar_t *)v4, (const wchar_t *)v5); /*0x5bad4e*/
    *(_DWORD *)(v4 + 75) = *(_DWORD *)&HouseClass_Player.__pad_5568[8440]; /*0x5bad5b*/
    *(_DWORD *)(v4 + 83) = *(_DWORD *)&HouseClass_Player.__pad_5568[8416]; /*0x5bad64*/
    *(_DWORD *)(v4 + 115) = -1; /*0x5bad67*/
    if ( *(int *)&HouseClass_Player.__pad_5568[18384] < *(int *)&HouseClass_Player.__pad_5568[18376] /*0x5bada4*/
      || (HouseClass_Player.__pad_5568[18381] || !*(_DWORD *)&HouseClass_Player.__pad_5568[18376])
      && *(int *)&HouseClass_Player.__pad_5568[18388] > 0
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[18368] + 8))(
           &HouseClass_Player.__pad_5568[18368],
           *(_DWORD *)&HouseClass_Player.__pad_5568[18376] + *(_DWORD *)&HouseClass_Player.__pad_5568[18388],
           0) )
    {
      v6 = (*(_DWORD *)&HouseClass_Player.__pad_5568[18384])++; /*0x5badb1*/
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v6) = v4; /*0x5badc0*/
    }
  }
  v7 = __2_YAPAXI_Z(0x85u); /*0x5badc8*/
  v8 = v7; /*0x5badcd*/
  if ( v7 ) /*0x5badd4*/
  {
    Waypoint::InitInvalid((_BYTE *)(v7 + 40)); /*0x5baddd*/
    v9 = (WinModemClass *)this; /*0x5bade2*/
    wcscpy((wchar_t *)v8, (const wchar_t *)(this + 34)); /*0x5badeb*/
    *(_DWORD *)(v8 + 75) = *(_DWORD *)(this + 80); /*0x5badf6*/
    *(_DWORD *)(v8 + 83) = *(_DWORD *)(this + 76); /*0x5badfc*/
    *(_DWORD *)(v8 + 115) = -1; /*0x5badff*/
    if ( *(int *)&HouseClass_Player.__pad_5568[18384] < *(int *)&HouseClass_Player.__pad_5568[18376] /*0x5bae3c*/
      || (HouseClass_Player.__pad_5568[18381] || !*(_DWORD *)&HouseClass_Player.__pad_5568[18376])
      && *(int *)&HouseClass_Player.__pad_5568[18388] > 0
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[18368] + 8))(
           &HouseClass_Player.__pad_5568[18368],
           *(_DWORD *)&HouseClass_Player.__pad_5568[18376] + *(_DWORD *)&HouseClass_Player.__pad_5568[18388],
           0) )
    {
      v10 = (*(_DWORD *)&HouseClass_Player.__pad_5568[18384])++; /*0x5bae49*/
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v10) = v8; /*0x5bae58*/
    }
  }
  else
  {
    v9 = (WinModemClass *)this; /*0x5bae5d*/
  }
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[18384] != 2 ) /*0x5bae6d*/
    return 0; /*0x5bae7b*/
  memset(aP2_4, 0, sizeof(aP2_4)); /*0x5bae89*/
  v33 = 0; /*0x5bae8b*/
  aP2_4[0] = 103; /*0x5bae92*/
  BridgeIndexThunk = CellClass::GetBridgeIndexThunk(&HouseClass_Player.__pad_5568[22460]); /*0x5bae9f*/
  WinModemClass_field_0x10 = v9->WinModemClass_field_0x10; /*0x5baea1*/
  *(_DWORD *)((char *)&aP2_4[38] + 2) = BridgeIndexThunk; /*0x5baea9*/
  if ( WinModemClass_field_0x10 != 10000 && BridgeIndexThunk < WinModemClass_field_0x10 ) /*0x5baeb4*/
  {
    BridgeIndexThunk = WinModemClass_field_0x10; /*0x5baeb6*/
    *(_DWORD *)((char *)&aP2_4[38] + 2) = WinModemClass_field_0x10; /*0x5baeb8*/
  }
  v13 = 5; /*0x5baec5*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[22700] = *(_DWORD *)&HouseClass_Player.__pad_5568[8116]; /*0x5baeca*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8864] = 5; /*0x5baed8*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[18664] = 0; /*0x5baedd*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8888] = 0; /*0x5baee3*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8892] = 0; /*0x5baee9*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8088] != 2 ) /*0x5baeef*/
  {
    *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = BridgeIndexThunk >> 3; /*0x5baf1a*/
    if ( BridgeIndexThunk >> 3 > 5 ) /*0x5baf20*/
      goto LABEL_28; /*0x5baf20*/
LABEL_27:
    *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = v13; /*0x5baf22*/
    goto LABEL_28; /*0x5baf22*/
  }
  v13 = 5 * (((BridgeIndexThunk >> 3) + 4) / 5); /*0x5baf01*/
  if ( v13 > 0xA ) /*0x5baf07*/
    goto LABEL_27; /*0x5baf07*/
  *(_DWORD *)&HouseClass_Player.__pad_5568[8860] = 10; /*0x5baf09*/
LABEL_28:
  LOBYTE(aP2_4[6]) = HouseClass_Player.__pad_5568[18556]; /*0x5baf27*/
  Stream::WriteBlock((int)&HouseClass_Player.__pad_5568[22460], (CellStruct *)aP2_4, 250, 1); /*0x5baf41*/
  StringCSF = GetStringCSF(aTxtSendingGo, 0, g_Str_File_ModemHst_cpp, 2540); /*0x5baf58*/
  MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5baf61*/
  v16 = (ObjectClass *)MessageBox; /*0x5baf66*/
  if ( MessageBox ) /*0x5baf6a*/
    Dialog::Show(MessageBox); /*0x5baf6e*/
  v17 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5baf78*/
  if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5baf81*/
    v17 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5baf93*/
  while ( 1 ) /*0x5baf9a*/
  {
    if ( !Count::GetCountQueue(&HouseClass_Player.__pad_5568[22460]) ) /*0x5baf9a*/
      goto LABEL_38; /*0x5baf9a*/
    v18 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5bafa8*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5bafb1*/
      v18 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5bafc3*/
    if ( (unsigned int)(v18 - v17) >= 0x708 ) /*0x5bafcd*/
    {
LABEL_38:
      v19 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5bafd4*/
      if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5bafdd*/
        v19 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5bafef*/
      if ( (unsigned int)(v19 - v17) >= 0x3C ) /*0x5baff6*/
        break; /*0x5baff6*/
    }
    Event::Dispatch(); /*0x5baff8*/
    MessageLoop(); /*0x5baffd*/
    Stream::ReadPacket((int)&HouseClass_Player.__pad_5568[22460]); /*0x5bb007*/
  }
  if ( v16 ) /*0x5bb010*/
  {
    v20 = GetStringCSF(aTxtWaitingGo, 0, g_Str_File_ModemHst_cpp, 2557); /*0x5bb023*/
    Network_Start((HWND)v16, (LPARAM)v20); /*0x5bb02c*/
  }
  Debug::Log(); /*0x5bb036*/
  v21 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5bb040*/
  if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5bb04c*/
    v21 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5bb05e*/
  while ( 1 ) /*0x5bb060*/
  {
    Event::Dispatch(); /*0x5bb060*/
    MessageLoop(); /*0x5bb065*/
    Stream::ReadPacket((int)&HouseClass_Player.__pad_5568[22460]); /*0x5bb06f*/
    if ( ObjectTypeClass::CreateInstance((int)&HouseClass_Player.__pad_5568[22460], v34, &aP2) <= 0 ) /*0x5bb08d*/
      goto LABEL_48; /*0x5bb08d*/
    Debug::Log(); /*0x5bb094*/
    if ( *(_DWORD *)v34[0].__pad_0 == 114 ) /*0x5bb0a6*/
    {
      Debug::Log(); /*0x5bb0f0*/
LABEL_57:
      if ( v16 ) /*0x5bb1aa*/
        Dialog::Destroy((SkirmishDialog *)v16); /*0x5bb1ae*/
      EventClass::CheckFlag(&HouseClass_Player.__pad_5568[22460]); /*0x5bb1b8*/
      HouseClass_Player.__pad_5568[17242] = 0; /*0x5bb1c9*/
      *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4692) = *(_DWORD *)&HouseClass_Player.__pad_5568[8096]; /*0x5bb1d0*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8856] = *(_DWORD *)&HouseClass_Player.__pad_5568[18384]; /*0x5bb1f0*/
      v25 = *(ObjectClass **)&HouseClass_Player.__pad_5568[22188]; /*0x5bb1f5*/
      BYTE1(v25) = HouseClass_Player.__pad_5568[22189] & 0x77; /*0x5bb1fc*/
      v26 = (unsigned int)v25 /*0x5bb202*/
          | ((HouseClass_Player.__pad_5568[8297] & 1 | (16 * (HouseClass_Player.__pad_5568[8108] & 1))) << 11);
      LOBYTE(v26) = HouseClass_Player.__pad_5568[22188] | 0xC0; /*0x5bb209*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[23248] = 0; /*0x5bb20c*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8088] = 2; /*0x5bb212*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[22188] = v26; /*0x5bb21c*/
      v27 = **(_DWORD **)&HouseClass_Player.__pad_5568[8060]; /*0x5bb222*/
      BYTE1(v27) = BYTE1(**(_DWORD **)&HouseClass_Player.__pad_5568[8060]) & 0xFB; /*0x5bb229*/
      **(_DWORD **)&HouseClass_Player.__pad_5568[8060] = v27; /*0x5bb22c*/
      HouseClass_Player.__pad_5568[8296] = 1; /*0x5bb22e*/
      nullsub_37(); /*0x5bb235*/
      Debug::Log(); /*0x5bb23f*/
      return 1; /*0x5bb247*/
    }
    if ( *(_DWORD *)v34[0].__pad_0 == 115 ) /*0x5bb0ab*/
      break; /*0x5bb0ab*/
    if ( *(_DWORD *)v34[0].__pad_0 == 110 ) /*0x5bb0b0*/
    {
      Debug::Log(); /*0x5bb189*/
      SendNetworkFile((char *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4700), 1, 0, 0); /*0x5bb1a3*/
      goto LABEL_57; /*0x5bb1a3*/
    }
LABEL_48:
    v22 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5bb0b6*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5bb0c4*/
      v22 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5bb0d6*/
    if ( (unsigned int)(v22 - v21) >= 0x4B0 ) /*0x5bb0e0*/
      goto LABEL_57; /*0x5bb0e0*/
  }
  v28 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_ModemHst_cpp, 2582); /*0x5bb11e*/
  v23 = GetStringCSF(aTxtNoExpansion, 0, g_Str_File_ModemHst_cpp, 2582); /*0x5bb130*/
  Dialog::ShowMessageBox((int)v23, v28, 0, 0, 0, v29); /*0x5bb13a*/
  v24 = *(_DWORD *)&stru_87C374.__pad_579C[22576]; /*0x5bb144*/
  if ( *(_DWORD *)&stru_87C374.__pad_579C[22568] != -1 ) /*0x5bb14d*/
    v24 += Timer::GetTicks() - *(_DWORD *)&stru_87C374.__pad_579C[22568]; /*0x5bb15f*/
  *(_DWORD *)(this + 20) = v24; /*0x5bb16a*/
  Debug::Log(); /*0x5bb16d*/
  return 0; /*0x5baca4*/
}


// ==== 0x005BB290  ObjectClass::GenerateRandomMapPreview  this=ObjectClass  sig=csp ====
void __usercall GenerateRandomMapPreview(int a1@<esi>)
{
  int v1; // eax
  int v2; // eax
  int *Palette; // esi
  void *v4; // edi
  int v5; // esi
  DWORD v6; // esi
  signed int Buffer; // [esp+10h] [ebp-280h] BYREF
  DWORD TicksTimer; // [esp+14h] [ebp-27Ch]
  int v9; // [esp+18h] [ebp-278h]
  int v10; // [esp+1Ch] [ebp-274h]
  int v11; // [esp+24h] [ebp-26Ch]
  int v12[3]; // [esp+2Ch] [ebp-264h] BYREF
  _DWORD v13[4]; // [esp+38h] [ebp-258h] BYREF
  _BYTE v14[4]; // [esp+48h] [ebp-248h] BYREF
  LPCSTR v15[9]; // [esp+4Ch] [ebp-244h] BYREF
  int v16[10]; // [esp+70h] [ebp-220h] BYREF
  _DWORD v17[62]; // [esp+98h] [ebp-1F8h] BYREF
  __int16 v18; // [esp+190h] [ebp-100h]
  _DWORD v19[63]; // [esp+194h] [ebp-FCh] BYREF

  TicksTimer = Timer::GetTicks(); /*0x5bb2af*/
  v10 = 0; /*0x5bb2b3*/
  if ( !_strcmpi(&MEMORY[0xA8B8E0], aRandmapSed) ) /*0x5bb2b7*/
  {
    Debug::Log(); /*0x5bb2cc*/
    memset(v17, 0, sizeof(v17)); /*0x5bb2e2*/
    v18 = 0; /*0x5bb2e4*/
    v17[0] = 117; /*0x5bb2fa*/
    Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v17, 250, 1); /*0x5bb305*/
    v10 = 600; /*0x5bb31c*/
    TicksTimer = Timer::GetTicks(); /*0x5bb325*/
    v9 = v11; /*0x5bb329*/
    while ( Count::GetCountQueue(&MEMORY[0xA8EA70]) > 0 ) /*0x5bb337*/
    {
      a1 = v10; /*0x5bb33d*/
      if ( TicksTimer != -1 ) /*0x5bb343*/
      {
        v1 = Timer::GetTicks() - TicksTimer; /*0x5bb34e*/
        if ( v1 >= v10 ) /*0x5bb354*/
          break; /*0x5bb354*/
        a1 = v10 - v1; /*0x5bb356*/
      }
      if ( !a1 ) /*0x5bb35a*/
        break; /*0x5bb35a*/
      Event::Dispatch(); /*0x5bb35c*/
    }
    TicksTimer = Timer::GetTicks(); /*0x5bb36f*/
    v9 = v11; /*0x5bb385*/
    v10 = 1800; /*0x5bb389*/
    while ( 1 ) /*0x5bb392*/
    {
      Event::Dispatch(); /*0x5bb392*/
      if ( ObjectTypeClass::CreateInstance((int)&MEMORY[0xA8EA70], (int)v19, (int)v14) > 0 && v19[0] == 118 ) /*0x5bb3b9*/
        break; /*0x5bb3b9*/
      a1 = v10; /*0x5bb3bf*/
      if ( TicksTimer != -1 ) /*0x5bb3c5*/
      {
        v2 = Timer::GetTicks() - TicksTimer; /*0x5bb3d0*/
        if ( v2 >= v10 ) /*0x5bb3d6*/
          goto LABEL_15; /*0x5bb3d6*/
        a1 = v10 - v2; /*0x5bb3d8*/
      }
      if ( !a1 ) /*0x5bb3dc*/
      {
LABEL_15:
        Debug::Log(); /*0x5bb3de*/
        return; /*0x5bb3f5*/
      }
    }
    Buffer = 0; /*0x5bb403*/
    Palette = Palette::Preview_Generate((int *)MEMORY[0xAC1154], a1, 64, (size_t *)&Buffer); /*0x5bb410*/
    Debug::Log(); /*0x5bb418*/
    v4 = __2_YAPAXI_Z(4 * Buffer); /*0x5bb435*/
    v12[1] = 0; /*0x5bb437*/
    v12[2] = 0; /*0x5bb448*/
    v12[0] = (int)&vt_Pipe; /*0x5bb44c*/
    Buffer::Init(v13, (int)v4, 4 * Buffer); /*0x5bb454*/
    v13[3] = 0; /*0x5bb463*/
    v12[0] = (int)&vt_BufferPipe; /*0x5bb467*/
    LZOPipe::Constructor(v16, 0, 0x2000); /*0x5bb46f*/
    Pipe::SetDelegate(v16, (int)v12); /*0x5bb47d*/
    v5 = Compression::Read((int)v16, (int)Palette, Buffer); /*0x5bb499*/
    v6 = (*(int (__thiscall **)(int *))(v16[0] + 4))(v16) + v5; /*0x5bb49e*/
    Debug::Log(); /*0x5bb4a6*/
    RawFileClass::Construct(v15, (int)g_Str_File_Preview_bin); /*0x5bb4b7*/
    if ( FileClass::Open((int *)v15, 0) ) /*0x5bb4c1*/
      FileClass::Delete(v15); /*0x5bb4ce*/
    FileClass::Open2(v15, (const CHAR *)2); /*0x5bb4d9*/
    FileClass::Write2((int *)v15, &Buffer, 4u); /*0x5bb4e9*/
    FileClass::Write2((int *)v15, v4, v6); /*0x5bb4f4*/
    FileClass::CloseHandle((HANDLE *)v15); /*0x5bb4fd*/
    __3_YAXPAX_Z(v4); /*0x5bb503*/
    Debug::Log(); /*0x5bb50d*/
    SendNetworkFile(g_Str_File_Preview_bin, 1, 0, 0); /*0x5bb521*/
    RawFileClass::Dtor((int *)v15); /*0x5bb52a*/
    LZOPipe::Destructor(v16); /*0x5bb533*/
    Vector::Clear((int)v13); /*0x5bb53c*/
    Pipe::Dtor(v12); /*0x5bb545*/
  }
}


// ==== 0x005BB560  NetworkGameSetup::DeleteComPtr  this=NetworkGameSetup  sig=csp ====
_DWORD *__thiscall NetworkGameSetup::DeleteComPtr(_DWORD *Block, char a2)
{
  ComPtr::Dtor(Block); /*0x5bb563*/
  if ( (a2 & 1) != 0 ) /*0x5bb56d*/
    __3_YAXPAX_Z(Block); /*0x5bb570*/
  return Block; /*0x5bb57a*/
}


// ==== 0x005BB580  Network_Find  this=AbstractClass  sig=csp ====
HKEY __fastcall sub_5BB580(HKEY a1, const CHAR *a2, const char *a3)
{
  HKEY v3; // esi
  DWORD v4; // ebx
  CHAR *v5; // ebp
  HKEY RegistrySubKey; // edi
  int v7; // esi
  DWORD v9; // [esp-1Ch] [ebp-4Ch]
  LPBYTE lpData; // [esp+10h] [ebp-20h]
  DWORD cchName; // [esp+14h] [ebp-1Ch] BYREF
  DWORD cbData; // [esp+18h] [ebp-18h] BYREF
  LPCSTR lpValueName; // [esp+1Ch] [ebp-14h]
  DWORD Type; // [esp+20h] [ebp-10h] BYREF
  HKEY v15; // [esp+24h] [ebp-Ch]
  struct _FILETIME ftLastWriteTime; // [esp+28h] [ebp-8h] BYREF

  v3 = a1; /*0x5bb58c*/
  lpValueName = a2; /*0x5bb58e*/
  v15 = a1; /*0x5bb593*/
  v4 = 0; /*0x5bb597*/
  v5 = (CHAR *)__2_YAPAXI_Z(0x100u); /*0x5bb59f*/
  lpData = (LPBYTE)__2_YAPAXI_Z(0x100u); /*0x5bb5ad*/
  cbData = 256; /*0x5bb5b1*/
  while ( 1 ) /*0x5bb5c8*/
  {
    v9 = v4; /*0x5bb5c8*/
    cchName = 256; /*0x5bb5ca*/
    ++v4; /*0x5bb5d2*/
    if ( RegEnumKeyExA(v3, v9, v5, &cchName, 0, 0, 0, &ftLastWriteTime) ) /*0x5bb5d3*/
      break; /*0x5bb5d3*/
    RegistrySubKey = FindRegistrySubKey(v3, v5, 0); /*0x5bb5eb*/
    if ( RegistrySubKey ) /*0x5bb5ef*/
    {
      cbData = 256; /*0x5bb608*/
      if ( !RegQueryValueExA(RegistrySubKey, lpValueName, 0, &Type, lpData, &cbData) /*0x5bb654*/
        && Type == 1
        && !strcmp((const char *)lpData, a3) )
      {
        __3_YAXPAX_Z(v5); /*0x5bb67d*/
        __3_YAXPAX_Z(lpData); /*0x5bb687*/
        return RegistrySubKey; /*0x5bb698*/
      }
      v7 = Network_Find(a3); /*0x5bb666*/
      RegCloseKey(RegistrySubKey); /*0x5bb669*/
      if ( v7 ) /*0x5bb671*/
      {
        __3_YAXPAX_Z(v5); /*0x5bb69c*/
        __3_YAXPAX_Z(lpData); /*0x5bb6a6*/
        return (HKEY)v7; /*0x5bb6b7*/
      }
      v3 = v15; /*0x5bb673*/
    }
  }
  __3_YAXPAX_Z(v5); /*0x5bb6bb*/
  __3_YAXPAX_Z(lpData); /*0x5bb6c5*/
  return 0; /*0x5bb691*/
}


// ==== 0x005BB6E0  Modem::EnumerateDevices  this=AbstractClass  sig=csp ====
int __thiscall Modem::EnumerateDevices(int this, WinModemClass *aP1)
{
  BYTE *v4; // eax
  DWORD v5; // kr00_4
  AbstractClass *v6; // edi
  int v7; // eax
  AbstractClass *v8; // edi
  char *v9; // edx
  unsigned int v10; // eax
  char *v11; // edi
  char *v12; // edi
  BYTE *v13; // esi
  char v14; // cl
  char *v15; // eax
  WinModemClass *v16; // edx
  HKEY RegistrySubKey; // eax
  BYTE *v18; // eax
  DWORD v19; // kr04_4
  BYTE *v20; // eax
  DWORD v21; // kr08_4
  BYTE *v22; // eax
  DWORD v23; // kr0C_4
  BYTE *v24; // eax
  DWORD v25; // kr10_4
  BYTE *v26; // eax
  DWORD v27; // kr14_4
  HKEY v28; // eax
  HKEY v29; // eax
  BYTE *v30; // eax
  DWORD ecx36; // ecx
  CCINIClass *v31; // esi
  CCINIClass *v32; // ecx
  DWORD cbData; // [esp+10h] [ebp-42Ch] BYREF
  HKEY phkResult; // [esp+14h] [ebp-428h] BYREF
  DWORD cchName; // [esp+18h] [ebp-424h] BYREF
  DWORD cchClass; // [esp+1Ch] [ebp-420h] BYREF
  CHAR SubKey[8]; // [esp+20h] [ebp-41Ch] BYREF
  DWORD v39; // [esp+28h] [ebp-414h]
  int v40; // [esp+2Ch] [ebp-410h]
  HKEY hKey; // [esp+30h] [ebp-40Ch] BYREF
  struct _FILETIME ftLastWriteTime; // [esp+34h] [ebp-408h] BYREF
  BYTE Data[256]; // [esp+3Ch] [ebp-400h] BYREF
  CHAR v44[256]; // [esp+13Ch] [ebp-300h] BYREF
  CHAR Name[256]; // [esp+23Ch] [ebp-200h] BYREF
  CHAR Class[256]; // [esp+33Ch] [ebp-100h] BYREF

  cbData = 256; /*0x5bb705*/
  v40 = 0; /*0x5bb709*/
  *(_DWORD *)this = 0; /*0x5bb70d*/
  *(_DWORD *)(this + 4) = 0; /*0x5bb710*/
  *(_DWORD *)(this + 8) = 0; /*0x5bb713*/
  *(_DWORD *)(this + 12) = 0; /*0x5bb716*/
  *(_DWORD *)(this + 16) = 0; /*0x5bb719*/
  *(_DWORD *)(this + 20) = 0; /*0x5bb71c*/
  *(_DWORD *)(this + 24) = 0; /*0x5bb71f*/
  wsprintfA(SubKey, "%04d", aP1); /*0x5bb722*/
  if ( MEMORY[0x87F8E4].__pad_5568[10200] ) /*0x5bb732*/
  {
    if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, aSystemCurrentc, 0, 0x20019u, &phkResult) ) /*0x5bb74f*/
      return this; /*0x5bb753*/
    if ( RegOpenKeyExA(phkResult, SubKey, 0, 0x20019u, &phkResult) ) /*0x5bb76e*/
    {
LABEL_4:
      Debug::Log(); /*0x5bb778*/
      return this; /*0x5bb791*/
    }
  }
  else
  {
    if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, aSystemCurrentc_0, 0, 0x20019u, &phkResult) ) /*0x5bb7af*/
      goto LABEL_4; /*0x5bb7b3*/
    v39 = 0; /*0x5bb7f7*/
    cchName = 256; /*0x5bb7fb*/
    cchClass = 256; /*0x5bb7ff*/
    if ( RegEnumKeyExA(phkResult, 0, Name, &cchName, 0, Class, &cchClass, &ftLastWriteTime) ) /*0x5bb803*/
      return this; /*0x5bb803*/
    while ( 1 ) /*0x5bb838*/
    {
      strcpy(v44, aSystemCurrentc_1); /*0x5bb838*/
      strcat(v44, Name); /*0x5bb864*/
      if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, v44, 0, 0x20019u, &hKey) ) /*0x5bb886*/
      {
        cbData = 256; /*0x5bb8a9*/
        if ( !RegQueryValueExA(hKey, aClass, 0, 0, Data, &cbData) && !_strcmpi((char *)Data, aModem) ) /*0x5bb8c1*/
          break; /*0x5bb8c1*/
      }
      ++v39; /*0x5bb8f9*/
      cchName = 256; /*0x5bb8fd*/
      cchClass = 256; /*0x5bb901*/
      if ( RegEnumKeyExA(phkResult, v39, Name, &cchName, 0, Class, &cchClass, &ftLastWriteTime) ) /*0x5bb905*/
        return this; /*0x5bb91f*/
    }
    strcpy(v44, aSystemCurrentc_1); /*0x5bb949*/
    strcat(v44, Name); /*0x5bb975*/
    strcat(v44, asc_815E74); /*0x5bb9a4*/
    strcat(v44, SubKey); /*0x5bb9d2*/
    if ( RegOpenKeyExA(HKEY_LOCAL_MACHINE, v44, 0, 0x20019u, &phkResult) ) /*0x5bb9f4*/
      return this; /*0x5bb9f8*/
  }
  cbData = 256; /*0x5bba21*/
  if ( !RegQueryValueExA(phkResult, aModel, 0, 0, Data, &cbData) ) /*0x5bba25*/
  {
    v4 = (BYTE *)__2_YAPAXI_Z(cbData + 1); /*0x5bba35*/
    v5 = cbData; /*0x5bba42*/
    *(_DWORD *)this = v4; /*0x5bba49*/
    qmemcpy(v4, Data, v5); /*0x5bba4c*/
    Debug::Log(); /*0x5bba5e*/
    cbData = 256; /*0x5bba83*/
    if ( RegQueryValueExA(phkResult, aAttachedto, 0, 0, Data, &cbData) /*0x5bbab2*/
      && ((cbData = 256, MEMORY[0x87F8E4].__pad_5568[10200])
       || RegQueryValueExA(phkResult, aPnpattachedto, 0, 0, Data, &cbData)) )
    {
      v6 = *(AbstractClass **)this; /*0x5bbab8*/
      v40 = 1; /*0x5bbac0*/
      v7 = __2_YAPAXI_Z(strlen(v6->__pad_0) + 1); /*0x5bbacd*/
      v8 = *(AbstractClass **)this; /*0x5bbad2*/
      v9 = (char *)v7; /*0x5bbad5*/
      *(_DWORD *)(this + 4) = v7; /*0x5bbadf*/
      v10 = strlen(v8->__pad_0) + 1; /*0x5bbae2*/
      v11 = &v8->__pad_0[v10]; /*0x5bbae2*/
      qmemcpy(v9, &v11[-v10], 4 * (v10 >> 2)); /*0x5bbaf1*/
      v13 = (BYTE *)&v11[4 * (v10 >> 2) - v10]; /*0x5bbaf1*/
      v12 = &v9[4 * (v10 >> 2)]; /*0x5bbaf1*/
      v14 = v10; /*0x5bbaf3*/
    }
    else
    {
      v15 = (char *)__2_YAPAXI_Z(cbData + 1); /*0x5bbafd*/
      v16 = (WinModemClass *)cbData; /*0x5bbb09*/
      *(_DWORD *)(this + 4) = v15; /*0x5bbb11*/
      qmemcpy(v15, Data, 4 * ((unsigned int)v16 >> 2)); /*0x5bbb17*/
      v13 = &Data[4 * ((unsigned int)v16 >> 2)]; /*0x5bbb17*/
      v12 = &v15[4 * ((unsigned int)v16 >> 2)]; /*0x5bbb17*/
      v14 = (char)v16; /*0x5bbb19*/
    }
    qmemcpy(v12, v13, v14 & 3); /*0x5bbb1e*/
    Debug::Log(); /*0x5bbb29*/
    RegistrySubKey = FindRegistrySubKey((rc_ptr_base *)phkResult); /*0x5bbb3c*/
    phkResult = RegistrySubKey; /*0x5bbb43*/
    if ( !RegistrySubKey ) /*0x5bbb47*/
      return this; /*0x5bbb47*/
    cbData = 256; /*0x5bbb61*/
    if ( !RegQueryValueExA(RegistrySubKey, aErrorcontrolOn, 0, 0, Data, &cbData) ) /*0x5bbb69*/
    {
      v18 = (BYTE *)__2_YAPAXI_Z(cbData + 1); /*0x5bbb75*/
      v19 = cbData; /*0x5bbb82*/
      *(_DWORD *)(this + 8) = v18; /*0x5bbb89*/
      qmemcpy(v18, Data, v19); /*0x5bbb8c*/
      Debug::Log(); /*0x5bbb9e*/
    }
    cbData = 256; /*0x5bbbbe*/
    if ( !RegQueryValueExA(phkResult, aErrorcontrolOf, 0, 0, Data, &cbData) ) /*0x5bbbc6*/
    {
      v20 = (BYTE *)__2_YAPAXI_Z(cbData + 1); /*0x5bbbd2*/
      v21 = cbData; /*0x5bbbdf*/
      *(_DWORD *)(this + 12) = v20; /*0x5bbbe6*/
      qmemcpy(v20, Data, v21); /*0x5bbbe9*/
      Debug::Log(); /*0x5bbbfb*/
    }
    cbData = 256; /*0x5bbc1b*/
    if ( !RegQueryValueExA(phkResult, aCompressionOn, 0, 0, Data, &cbData) ) /*0x5bbc23*/
    {
      v22 = (BYTE *)__2_YAPAXI_Z(cbData + 1); /*0x5bbc2f*/
      v23 = cbData; /*0x5bbc3c*/
      *(_DWORD *)(this + 16) = v22; /*0x5bbc43*/
      qmemcpy(v22, Data, v23); /*0x5bbc46*/
      Debug::Log(); /*0x5bbc58*/
    }
    cbData = 256; /*0x5bbc78*/
    if ( !RegQueryValueExA(phkResult, aCompressionOff, 0, 0, Data, &cbData) ) /*0x5bbc80*/
    {
      v24 = (BYTE *)__2_YAPAXI_Z(cbData + 1); /*0x5bbc8c*/
      v25 = cbData; /*0x5bbc99*/
      *(_DWORD *)(this + 20) = v24; /*0x5bbca0*/
      qmemcpy(v24, Data, v25); /*0x5bbca3*/
      Debug::Log(); /*0x5bbcb5*/
    }
    cbData = 256; /*0x5bbcd5*/
    if ( !RegQueryValueExA(phkResult, aFlowcontrolHar, 0, 0, Data, &cbData) ) /*0x5bbcdd*/
    {
      v26 = (BYTE *)__2_YAPAXI_Z(cbData + 1); /*0x5bbce9*/
      v27 = cbData; /*0x5bbcf6*/
      *(_DWORD *)(this + 24) = v26; /*0x5bbcfd*/
      qmemcpy(v26, Data, v27); /*0x5bbd00*/
      Debug::Log(); /*0x5bbd12*/
    }
    RegCloseKey(phkResult); /*0x5bbd1f*/
    if ( !v40 ) /*0x5bbd2b*/
      return this; /*0x5bbd2b*/
    strcpy(v44, "Modem\\"); /*0x5bbd60*/
    memset(&v44[7], 0, 249); /*0x5bbd6e*/
    strcat(v44, SubKey); /*0x5bbd92*/
    v28 = FindRegistrySubKey((rc_ptr_base *)0x80000002); /*0x5bbda5*/
    phkResult = v28; /*0x5bbdac*/
    if ( !v28 ) /*0x5bbdb0*/
      return this; /*0x5bbdb0*/
    v29 = Network_Find(v28, aDriver, v44); /*0x5bbdc5*/
    if ( v29 ) /*0x5bbdcc*/
    {
      cbData = 256; /*0x5bbde2*/
      if ( !RegQueryValueExA(v29, aPortname, 0, 0, Data, &cbData) ) /*0x5bbdea*/
      {
        if ( *(_DWORD *)(this + 4) ) /*0x5bbdf4*/
          __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5bbdfc*/
        v30 = (BYTE *)__2_YAPAXI_Z(cbData + 1); /*0x5bbe0a*/
        ecx36 = cbData; /*0x5bbe0f*/
        *(_DWORD *)(this + 4) = v30; /*0x5bbe13*/
        qmemcpy(v30, Data, ecx36); /*0x5bbe21*/
        Debug::Log(); /*0x5bbe33*/
      }
    }
    else
    {
      v31 = *(CCINIClass **)(this + 4); /*0x5bbe3d*/
      if ( v31 && *(_DWORD *)this && !strcmp(*(const char **)this, v31->__pad_0) ) /*0x5bbe55*/
      {
        Debug::Log(); /*0x5bbe84*/
        __3_YAXPAX_Z(*(void **)this); /*0x5bbe8d*/
        v32 = *(CCINIClass **)(this + 4); /*0x5bbe92*/
        *(_DWORD *)this = 0; /*0x5bbe95*/
        __3_YAXPAX_Z(v32); /*0x5bbe9d*/
        *(_DWORD *)(this + 4) = 0; /*0x5bbea5*/
      }
    }
  }
  RegCloseKey(phkResult); /*0x5bbeb1*/
  return this; /*0x5bb787*/
}


// ==== 0x005BBED0  FileFind::Close  this=AbstractClass  sig=ida-proto ====
// attributes: thunk
void __thiscall FileFind::Close(void **this)
{
  FileFind::ReleaseAllHandles(this); /*0x5bbed0*/
}


// ==== 0x005BBEE0  FileFind::ReleaseAllHandles  this=FileFind  sig=csp ====
void __thiscall sub_5BBEE0(void **this)
{
  if ( *this ) /*0x5bbee6*/
  {
    __3_YAXPAX_Z(*this); /*0x5bbeed*/
    *this = 0; /*0x5bbef5*/
  }
  if ( this->q004 ) /*0x5bbef7*/
  {
    __3_YAXPAX_Z(this->q004); /*0x5bbeff*/
    this->q004 = 0; /*0x5bbf07*/
  }
  if ( this->q008 ) /*0x5bbf0a*/
  {
    __3_YAXPAX_Z(this->q008); /*0x5bbf12*/
    this->q008 = 0; /*0x5bbf1a*/
  }
  if ( this->q00C ) /*0x5bbf1d*/
  {
    __3_YAXPAX_Z(this->q00C); /*0x5bbf25*/
    this->q00C = 0; /*0x5bbf2d*/
  }
  if ( this->q004 ) /*0x5bbf30*/
  {
    __3_YAXPAX_Z(this->q004); /*0x5bbf38*/
    this->q004 = 0; /*0x5bbf40*/
  }
  if ( this->q014 ) /*0x5bbf43*/
  {
    __3_YAXPAX_Z(this->q014); /*0x5bbf4b*/
    this->q014 = 0; /*0x5bbf53*/
  }
  if ( this->q018 ) /*0x5bbf56*/
  {
    __3_YAXPAX_Z(this->q018); /*0x5bbf5e*/
    this->q018 = 0; /*0x5bbf66*/
  }
}


// ==== 0x005BBF70  sub_5BBF70  this=-  sig=ida-proto ====
int sub_5BBF70()
{
  MEMORY[0xABF138] = 0; /*0x5bbf72*/
  MEMORY[0xABF13C] = 0; /*0x5bbf77*/
  MEMORY[0xABF140] = 0; /*0x5bbf7c*/
  MEMORY[0xABF144] = 0; /*0x5bbf81*/
  return 0; /*0x5bbf86*/
}


// ==== 0x005BBF90  sub_5BBF90  this=-  sig=ida-proto ====
void sub_5BBF90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5bbf9c*/
  MEMORY[0xABF150] = Math::Sqrt(v0 + v0); /*0x5bbfae*/
}


// ==== 0x005BBFC0  sub_5BBFC0  this=-  sig=ida-proto ====
void sub_5BBFC0()
{
  MEMORY[0xABF210] = MEMORY[0xABF150] / 60.0; /*0x5bbfcc*/
}


// ==== 0x005BBFE0  sub_5BBFE0  this=-  sig=ida-proto ====
void sub_5BBFE0()
{
  MEMORY[0xABF1C0] = 1.0 / MEMORY[0xABF210]; /*0x5bbfec*/
}


// ==== 0x005BC000  sub_5BC000  this=-  sig=ida-proto ====
void sub_5BC000()
{
  MEMORY[0xABF1B8] = 0.0174532925199433 * 45.0; /*0x5bc00c*/
}


// ==== 0x005BC020  sub_5BC020  this=-  sig=ida-proto ====
void sub_5BC020()
{
  MEMORY[0xABF158] = 0.0174532925199433 * 60.0; /*0x5bc02c*/
}


// ==== 0x005BC040  sub_5BC040  this=-  sig=ida-proto ====
void sub_5BC040()
{
  MEMORY[0xABF130] = 0.0174532925199433 * 90.0; /*0x5bc04c*/
}


// ==== 0x005BC060  sub_5BC060  this=-  sig=ida-proto ====
__int64 sub_5BC060()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABF130] - MEMORY[0xABF158]); /*0x5bc072*/
  result = Math::RoundToInt(v0 * MEMORY[0xABF150] * 0.5); /*0x5bc086*/
  MEMORY[0xABF218] = result; /*0x5bc08b*/
  return result; /*0x5bc090*/
}


// ==== 0x005BC0A0  sub_5BC0A0  this=-  sig=ida-proto ====
void sub_5BC0A0()
{
  MEMORY[0xABF160] = Math::ArcTan((double)MEMORY[0xABF218] * 0.00390625); /*0x5bc0b7*/
}


// ==== 0x005BC0D0  sub_5BC0D0  this=-  sig=ida-proto ====
void sub_5BC0D0()
{
  MEMORY[0xABF1B0] = Math::ArcTan((double)(2 * MEMORY[0xABF218]) / MEMORY[0xABF150]); /*0x5bc0f2*/
}


// ==== 0x005BC100  sub_5BC100  this=-  sig=ida-proto ====
__int64 sub_5BC100()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABF218]) + 0.5); /*0x5bc11b*/
  MEMORY[0xABF20C] = result; /*0x5bc120*/
  return result; /*0x5bc126*/
}


// ==== 0x005BC130  sub_5BC130  this=-  sig=ida-proto ====
int sub_5BC130()
{
  MEMORY[0xABF148] = 0; /*0x5bc132*/
  MEMORY[0xABF14A] = 0; /*0x5bc138*/
  return 0; /*0x5bc13e*/
}


// ==== 0x005BC140  sub_5BC140  this=-  sig=ida-proto ====
int sub_5BC140()
{
  MEMORY[0xABF188] = 0; /*0x5bc142*/
  MEMORY[0xABF18C] = 0; /*0x5bc147*/
  MEMORY[0xABF190] = 0; /*0x5bc14c*/
  return 0; /*0x5bc151*/
}


// ==== 0x005BC160  sub_5BC160  this=-  sig=ida-proto ====
int sub_5BC160()
{
  MEMORY[0xABF208] = 0; /*0x5bc165*/
  MEMORY[0xABF200] = 128; /*0x5bc16f*/
  MEMORY[0xABF204] = 128; /*0x5bc174*/
  return 128; /*0x5bc179*/
}


// ==== 0x005BC180  WinMain_Create  this=ObjectClass  sig=csp ====
unsigned __int8 __fastcall WinMain_Create(ObjectClass *aP0, HWND a2, char a3)
{
  CoordStruct **v3; // edi
  ObjectClass *v4; // eax
  ObjectClass *v5; // esi
  int v6; // edi
  int *p_health; // ebp
  char *v8; // ecx
  int *v9; // eax
  int v10; // edx
  CoordStruct **v11; // ebx
  CoordStruct *v12; // ecx
  int v13; // edi
  int p_Z; // ebp
  _BYTE *v15; // edx
  _DWORD *v16; // eax
  int v17; // esi
  unsigned __int8 result; // al
  CoordStruct **v19; // [esp+10h] [ebp-4h]
  char *v20; // [esp+18h] [ebp+4h]

  v3 = &g_MatrixTransformState + 214; /*0x5bc18b*/
  *(&g_MatrixTransformState + 264) = (CoordStruct *)aP0; /*0x5bc190*/
  *(&g_MatrixTransformState + 265) = (CoordStruct *)a2; /*0x5bc196*/
  *((_BYTE *)&(&g_MatrixTransformState)[22] + 8) = a3; /*0x5bc19c*/
  v20 = 0; /*0x5bc1a1*/
  v19 = &g_MatrixTransformState + 214; /*0x5bc1a5*/
  do /*0x5bc24f*/
  {
    v4 = (ObjectClass *)__2_YAPAXI_Z(0x2738u); /*0x5bc1ae*/
    v5 = v4; /*0x5bc1b3*/
    if ( v4 ) /*0x5bc1ba*/
    {
      v4[58].objectTypeFlags = 0; /*0x5bc1c0*/
      v4[58].NeedsSaveOrLink = v20; /*0x5bc1c6*/
      v4[58].owningHouseIndex = 0; /*0x5bc1cc*/
      v4[58].fallRate = 0; /*0x5bc1d2*/
      v4[58].nextObject = 0; /*0x5bc1d8*/
      v4[58].attachedTag = (void *)80; /*0x5bc1de*/
      v4[58].attachedBomb = (void *)25; /*0x5bc1e8*/
      v6 = 0; /*0x5bc1f2*/
      p_health = &v4[11].health; /*0x5bc1f4*/
      do /*0x5bc219*/
      {
        v8 = &v5->__pad_0[v6]; /*0x5bc1fa*/
        v9 = p_health; /*0x5bc1fd*/
        v10 = 80; /*0x5bc1ff*/
        do /*0x5bc210*/
        {
          *v8 = 32; /*0x5bc204*/
          *v9 = 0; /*0x5bc207*/
          v9 += 25; /*0x5bc209*/
          v8 += 25; /*0x5bc20c*/
          --v10; /*0x5bc20f*/
        }
        while ( v10 ); /*0x5bc210*/
        ++v6; /*0x5bc212*/
        ++p_health; /*0x5bc213*/
      }
      while ( v6 < 25 ); /*0x5bc219*/
      LOBYTE(v5[58].ambientSoundController[0]) = 1; /*0x5bc223*/
      Text::DrawRepeated(v5, 0, 0, 80, 25); /*0x5bc22a*/
      v3 = v19; /*0x5bc22f*/
    }
    else
    {
      v5 = 0; /*0x5bc235*/
    }
    *v3++ = (CoordStruct *)v5; /*0x5bc23b*/
    ++v20; /*0x5bc247*/
    v19 = v3; /*0x5bc24b*/
  }
  while ( (int)v3 < (int)(&g_MatrixTransformState + 222) ); /*0x5bc24f*/
  v11 = &g_MatrixTransformState + 214; /*0x5bc25b*/
  *(&g_MatrixTransformState + 267) = *(&g_MatrixTransformState + 214); /*0x5bc260*/
  do /*0x5bc2b2*/
  {
    v12 = *v11; /*0x5bc266*/
    v13 = 0; /*0x5bc268*/
    p_Z = (int)&(*v11)[166].Z; /*0x5bc26a*/
    do /*0x5bc293*/
    {
      v15 = (char *)v12 + v13; /*0x5bc270*/
      v16 = (_DWORD *)p_Z; /*0x5bc273*/
      v17 = 80; /*0x5bc275*/
      do /*0x5bc28a*/
      {
        *v15 = 32; /*0x5bc27a*/
        *v16 = 0; /*0x5bc27d*/
        v16 += 25; /*0x5bc283*/
        v15 += 25; /*0x5bc286*/
        --v17; /*0x5bc289*/
      }
      while ( v17 ); /*0x5bc28a*/
      ++v13; /*0x5bc28c*/
      p_Z += 4; /*0x5bc28d*/
    }
    while ( v13 < 25 ); /*0x5bc293*/
    LOBYTE(v12[836].Y) = 1; /*0x5bc29d*/
    Text::DrawRepeated(v12, 0, 0, 80, 25); /*0x5bc2a4*/
    ++v11; /*0x5bc2a9*/
  }
  while ( (int)v11 < (int)(&g_MatrixTransformState + 222) ); /*0x5bc2b2*/
  result = *((_BYTE *)&(&g_MatrixTransformState)[22] + 9); /*0x5bc2b4*/
  if ( *((_BYTE *)&(&g_MatrixTransformState)[22] + 9) ) /*0x5bc2bf*/
  {
    result = *((_BYTE *)&(&g_MatrixTransformState)[22] + 8); /*0x5bc2c1*/
    if ( *((_BYTE *)&(&g_MatrixTransformState)[22] + 8) ) /*0x5bc2c8*/
    {
      if ( !*(&g_MatrixTransformState + 268) ) /*0x5bc2d1*/
        CreateDebugOutput(); /*0x5bc2d3*/
      *((_BYTE *)&(&g_MatrixTransformState)[22] + 10) = 1; /*0x5bc2e0*/
      ShowWindow((HWND)*(&g_MatrixTransformState + 268), 1); /*0x5bc2e7*/
      return (unsigned __int8)SetFocus((HWND)*(&g_MatrixTransformState + 265)); /*0x5bc2f4*/
    }
  }
  return result; /*0x5bc2b9*/
}


// ==== 0x005BC300  __ioterm  this=-  sig=ida-proto ====
int _ioterm()
{
  void **v0; // esi
  int result; // eax

  v0 = (void **)(&g_MatrixTransformState + 214); /*0x5bc301*/
  do /*0x5bc324*/
  {
    if ( *v0 ) /*0x5bc306*/
    {
      __3_YAXPAX_Z(*v0); /*0x5bc30d*/
      *v0 = 0; /*0x5bc315*/
    }
    ++v0; /*0x5bc31b*/
  }
  while ( (int)v0 < (int)((void **)&g_MatrixTransformState + 222) ); /*0x5bc324*/
  result = (int)*(&g_MatrixTransformState + 268); /*0x5bc326*/
  if ( *(&g_MatrixTransformState + 268) ) /*0x5bc32e*/
  {
    DeleteObject(*(&g_MatrixTransformState + 269)); /*0x5bc336*/
    Object::RemoveObjectArray(*(&g_MatrixTransformState + 268)); /*0x5bc342*/
    result = DestroyWindow((HWND)*(&g_MatrixTransformState + 268)); /*0x5bc34e*/
    *((_QWORD *)&g_MatrixTransformState + 134) = 0; /*0x5bc35e*/
  }
  return result; /*0x5bc32b*/
}


// ==== 0x005BC3C0  Network_Process  this=-  sig=ida-proto ====
unsigned __int8 sub_5BC3C0()
{
  unsigned __int8 result; // al

  result = MEMORY[0xABF238]; /*0x5bc3c0*/
  if ( MEMORY[0xABF238] ) /*0x5bc3c7*/
  {
    if ( !MEMORY[0xABF240] ) /*0x5bc3d0*/
      CreateDebugOutput(); /*0x5bc3d2*/
    MEMORY[0xABF23A] = 1; /*0x5bc3df*/
    ShowWindow(MEMORY[0xABF240], 1); /*0x5bc3e6*/
    return (unsigned __int8)SetFocus(MEMORY[0xABF234]); /*0x5bc3f3*/
  }
  return result; /*0x5bc3f9*/
}


// ==== 0x005BC400  Mouse::HideWindow  this=MouseClass  sig=ida-proto ====
HWND Mouse_HideWindow()
{
  HWND result; // eax

  result = MEMORY[0xABF240]; /*0x5bc400*/
  MEMORY[0xABF239] = 0; /*0x5bc409*/
  if ( MEMORY[0xABF240] ) /*0x5bc40f*/
  {
    MEMORY[0xABF23A] = 0; /*0x5bc413*/
    return (HWND)ShowWindow(MEMORY[0xABF240], 0); /*0x5bc419*/
  }
  return result; /*0x5bc41f*/
}


// ==== 0x005BC440  sub_5BC440  this=-  sig=ida-proto ====
ObjectClass *sub_5BC440()
{
  return (ObjectClass *)*(&g_MatrixTransformState + 267); /*0x5bc445*/
}


// ==== 0x005BC450  GetTextBufferEntry  this=-  sig=ida-proto ====
int __fastcall sub_5BC450(int a1)
{
  return MEMORY[0xABF168][a1]; /*0x5bc457*/
}


// ==== 0x005BC460  sub_5BC460  this=-  sig=ida-proto ====
char __fastcall sub_5BC460(int a1)
{
  _BYTE *v1; // ecx
  int v2; // edi
  _DWORD *v3; // ebx
  _BYTE *v4; // edx
  _DWORD *v5; // eax
  int v6; // esi

  v1 = (_BYTE *)MEMORY[0xABF168][a1]; /*0x5bc460*/
  MEMORY[0xABF23C] = (int)v1; /*0x5bc46a*/
  v2 = 0; /*0x5bc470*/
  v3 = v1 + 2000; /*0x5bc472*/
  do /*0x5bc49b*/
  {
    v4 = &v1[v2]; /*0x5bc478*/
    v5 = v3; /*0x5bc47b*/
    v6 = 80; /*0x5bc47d*/
    do /*0x5bc492*/
    {
      *v4 = 32; /*0x5bc482*/
      *v5 = 0; /*0x5bc485*/
      v5 += 25; /*0x5bc48b*/
      v4 += 25; /*0x5bc48e*/
      --v6; /*0x5bc491*/
    }
    while ( v6 ); /*0x5bc492*/
    ++v2; /*0x5bc494*/
    ++v3; /*0x5bc495*/
  }
  while ( v2 < 25 ); /*0x5bc49b*/
  v1[10036] = 1; /*0x5bc4a5*/
  Text::DrawRepeated(v1, 0, 0, 80, 25); /*0x5bc4ac*/
  return Text::DrawRepeated((void *)MEMORY[0xABF23C], 0, 0, 80, 25); /*0x5bc4c4*/
}


// ==== 0x005BC4D0  ObjectClass::method_5BC4D0  this=ObjectClass  sig=csp ====
char sub_5BC4D0()
{
  int *v0; // ebx
  _BYTE *v1; // ecx
  int v2; // edi
  int v3; // ebp
  _BYTE *v4; // edx
  _DWORD *v5; // eax
  int v6; // esi
  char result; // al

  v0 = MEMORY[0xABF168]; /*0x5bc4d4*/
  do /*0x5bc525*/
  {
    v1 = (_BYTE *)*v0; /*0x5bc4d9*/
    v2 = 0; /*0x5bc4db*/
    v3 = *v0 + 2000; /*0x5bc4dd*/
    do /*0x5bc506*/
    {
      v4 = &v1[v2]; /*0x5bc4e3*/
      v5 = (_DWORD *)v3; /*0x5bc4e6*/
      v6 = 80; /*0x5bc4e8*/
      do /*0x5bc4fd*/
      {
        *v4 = 32; /*0x5bc4ed*/
        *v5 = 0; /*0x5bc4f0*/
        v5 += 25; /*0x5bc4f6*/
        v4 += 25; /*0x5bc4f9*/
        --v6; /*0x5bc4fc*/
      }
      while ( v6 ); /*0x5bc4fd*/
      ++v2; /*0x5bc4ff*/
      v3 += 4; /*0x5bc500*/
    }
    while ( v2 < 25 ); /*0x5bc506*/
    v1[10036] = 1; /*0x5bc510*/
    result = Text::DrawRepeated(v1, 0, 0, 80, 25); /*0x5bc517*/
    ++v0; /*0x5bc51c*/
  }
  while ( (int)v0 < (int)&MEMORY[0xABF188] ); /*0x5bc525*/
  return result; /*0x5bc527*/
}


// ==== 0x005BC530  CreateDebugOutput  this=-  sig=ida-proto ====
int sub_5BC530()
{
  HDC DC; // ebp
  int DeviceCaps; // eax
  HGDIOBJ v2; // edi
  struct tagRECT Rect; // [esp+10h] [ebp-5Ch] BYREF
  struct tagRECT v5; // [esp+20h] [ebp-4Ch] BYREF
  LOGFONTA lf; // [esp+30h] [ebp-3Ch] BYREF

  MEMORY[0xABF240] = CreateDialogParamA(MEMORY[0xABF230], (LPCSTR)0xF8, MEMORY[0xABF234], DlgProcAudioDebug, 0); /*0x5bc559*/
  TimerPool::AllocSlot(MEMORY[0xABF240]); /*0x5bc55e*/
  DC = GetDC(MEMORY[0xABF240]); /*0x5bc570*/
  DeviceCaps = GetDeviceCaps(DC, 90); /*0x5bc577*/
  lf.lfHeight = -MulDiv(8, DeviceCaps, 72); /*0x5bc588*/
  memset(&lf.lfWidth, 0, 24); /*0x5bc5a6*/
  strcpy(lf.lfFaceName, "Courier"); /*0x5bc5d9*/
  MEMORY[0xABF244] = CreateFontIndirectA(&lf); /*0x5bc5f3*/
  v2 = SelectObject(DC, MEMORY[0xABF244]); /*0x5bc5fc*/
  GetTextMetricsA(DC, &MEMORY[0xABF1C8]); /*0x5bc604*/
  SelectObject(DC, v2); /*0x5bc60c*/
  MEMORY[0xABF128] = GetSysColor(15); /*0x5bc618*/
  MEMORY[0xABF110] = GetSysColor(8); /*0x5bc621*/
  Rect.left = 0; /*0x5bc62b*/
  Rect.top = 0; /*0x5bc62f*/
  Rect.right = 79 * MEMORY[0xABF1C8].tmMaxCharWidth + 20; /*0x5bc64b*/
  Rect.bottom = 25 * (MEMORY[0xABF1C8].tmHeight + MEMORY[0xABF1C8].tmExternalLeading) + 20; /*0x5bc661*/
  AdjustWindowRect(&Rect, 0xC00000u, 0); /*0x5bc665*/
  GetWindowRect(MEMORY[0xABF234], &v5); /*0x5bc677*/
  MoveWindow(MEMORY[0xABF240], v5.right + 5, 0, Rect.right - Rect.left, Rect.bottom - Rect.top, 1); /*0x5bc6a4*/
  ShowWindow(MEMORY[0xABF240], 0); /*0x5bc6b2*/
  SetFocus(MEMORY[0xABF234]); /*0x5bc6bf*/
  return ReleaseDC(MEMORY[0xABF240], DC); /*0x5bc6d2*/
}


// ==== 0x005BC6E0  DlgProcAudioDebug  this=-  sig=csp ====
INT_PTR __stdcall AudioDebug_DlgProc(HWND hWnd, UINT a2, WPARAM a3, LPARAM a4)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  char *v9; // ecx
  int Index; // eax
  void *Enabled; // eax
  char *v12; // eax
  _DWORD *v13; // ecx
  _BYTE *v14; // ecx
  int v15; // eax
  _BYTE *v16; // ecx
  int v17; // edi
  _DWORD *v18; // ebx
  _BYTE *v19; // edx
  _DWORD *v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // edi
  _DWORD *v24; // ebx
  _BYTE *v25; // edx
  _DWORD *v26; // eax
  int v27; // esi
  int v28; // [esp-4h] [ebp-50h]
  struct tagPAINTSTRUCT Paint; // [esp+Ch] [ebp-40h] BYREF

  if ( a2 == 15 ) /*0x5bc6ed*/
  {
    InvalidateRect(hWnd, 0, 1); /*0x5bc6f8*/
    BeginPaint(hWnd, &Paint); /*0x5bc704*/
    if ( MEMORY[0xABF23C] ) /*0x5bc712*/
    {
      if ( MEMORY[0xABF23A] ) /*0x5bc71b*/
        Text::DrawRepeated((void *)MEMORY[0xABF23C], 0, 0, 80, 25); /*0x5bc732*/
    }
    EndPaint(hWnd, &Paint); /*0x5bc73d*/
    return 1; /*0x5bc74e*/
  }
  if ( a2 == 258 ) /*0x5bc756*/
  {
    if ( !MEMORY[0xABF224] ) /*0x5bc763*/
    {
      MEMORY[0xABF224] = (int)MEMORY[0xABF198]; /*0x5bc76a*/
      AudioController::Init(MEMORY[0xABF198]); /*0x5bc770*/
    }
    switch ( a3 ) /*0x5bc78d*/
    {
      case ',': /*0x5bc78d*/
      case '<': /*0x5bc78d*/
        v15 = *(_DWORD *)(MEMORY[0xABF23C] + 10008) + 1; /*0x5bc9d1*/
        if ( *(_DWORD *)(MEMORY[0xABF23C] + 10008) == 7 ) /*0x5bc9d5*/
          v15 = 0; /*0x5bc9d7*/
        v16 = (_BYTE *)MEMORY[0xABF168][v15]; /*0x5bc9d9*/
        v17 = 0; /*0x5bc9e0*/
        MEMORY[0xABF23C] = (int)v16; /*0x5bc9e2*/
        v18 = v16 + 2000; /*0x5bc9e8*/
        do /*0x5bca11*/
        {
          v19 = &v16[v17]; /*0x5bc9ee*/
          v20 = v18; /*0x5bc9f1*/
          v21 = 80; /*0x5bc9f3*/
          do /*0x5bca08*/
          {
            *v19 = 32; /*0x5bc9f8*/
            *v20 = 0; /*0x5bc9fb*/
            v20 += 25; /*0x5bca01*/
            v19 += 25; /*0x5bca04*/
            --v21; /*0x5bca07*/
          }
          while ( v21 ); /*0x5bca08*/
          ++v17; /*0x5bca0a*/
          ++v18; /*0x5bca0b*/
        }
        while ( v17 < 25 ); /*0x5bca11*/
        goto LABEL_54; /*0x5bca11*/
      case '.': /*0x5bc78d*/
      case '>': /*0x5bc78d*/
        v22 = *(_DWORD *)(MEMORY[0xABF23C] + 10008) - 1; /*0x5bca38*/
        if ( v22 < 0 ) /*0x5bca39*/
          v22 = 7; /*0x5bca3b*/
        v16 = (_BYTE *)MEMORY[0xABF168][v22]; /*0x5bca40*/
        v23 = 0; /*0x5bca47*/
        MEMORY[0xABF23C] = (int)v16; /*0x5bca49*/
        v24 = v16 + 2000; /*0x5bca4f*/
        do /*0x5bca78*/
        {
          v25 = &v16[v23]; /*0x5bca55*/
          v26 = v24; /*0x5bca58*/
          v27 = 80; /*0x5bca5a*/
          do /*0x5bca6f*/
          {
            *v25 = 32; /*0x5bca5f*/
            *v26 = 0; /*0x5bca62*/
            v26 += 25; /*0x5bca68*/
            v25 += 25; /*0x5bca6b*/
            --v27; /*0x5bca6e*/
          }
          while ( v27 ); /*0x5bca6f*/
          ++v23; /*0x5bca71*/
          ++v24; /*0x5bca72*/
        }
        while ( v23 < 25 ); /*0x5bca78*/
LABEL_54:
        v16[10036] = 1; /*0x5bca13*/
        Text::DrawRepeated(v16, 0, 0, 80, 25); /*0x5bca22*/
        goto LABEL_45; /*0x5bca27*/
      case '1': /*0x5bc78d*/
      case '2': /*0x5bc78d*/
      case '3': /*0x5bc78d*/
      case '4': /*0x5bc78d*/
        MEMORY[0xABF22C] = a3 - 49; /*0x5bc799*/
        return 0; /*0x5bc7a5*/
      case 'A': /*0x5bc78d*/
      case 'a': /*0x5bc78d*/
        v14 = (_BYTE *)MEMORY[0xABF17C]; /*0x5bc987*/
        goto LABEL_44; /*0x5bc987*/
      case 'E': /*0x5bc78d*/
      case 'e': /*0x5bc78d*/
        v7 = MEMORY[0xABF220]; /*0x5bc80f*/
        if ( MEMORY[0xABF220] > 16 || MEMORY[0xABF220] >= MEMORY[0xB1D4B0] ) /*0x5bc820*/
        {
          v7 = 0; /*0x5bc822*/
          MEMORY[0xABF220] = 0; /*0x5bc824*/
        }
        UpdateThemeManager(v7, 2, MEMORY[0xABF22C]); /*0x5bc835*/
        goto LABEL_15; /*0x5bc835*/
      case 'I': /*0x5bc78d*/
      case 'i': /*0x5bc78d*/
        v14 = (_BYTE *)MEMORY[0xABF184]; /*0x5bc9b6*/
        goto LABEL_44; /*0x5bc9bc*/
      case 'L': /*0x5bc78d*/
      case 'l': /*0x5bc78d*/
        if ( AudioSource::Get((int **)MEMORY[0xABF224]) ) /*0x5bc862*/
        {
          AudioFile::Stop((_DWORD *)MEMORY[0xABF224]); /*0x5bc871*/
          return 0; /*0x5bc878*/
        }
        else
        {
          v28 = MEMORY[0xABF224]; /*0x5bc881*/
          v9 = aTestenvelopefs; /*0x5bc887*/
LABEL_31:
          Index = VocClass::FindIndex(v9); /*0x5bc88c*/
          PlayVocClass(Index, 0x2000, 1.0, v28); /*0x5bc898*/
          return 0; /*0x5bc89f*/
        }
      case 'M': /*0x5bc78d*/
      case 'm': /*0x5bc78d*/
        v14 = (_BYTE *)MEMORY[0xABF180]; /*0x5bc9be*/
LABEL_44:
        MEMORY[0xABF23C] = (int)v14; /*0x5bc98d*/
        TextBuffer::Init(v14); /*0x5bc993*/
LABEL_45:
        Text::DrawRepeated((void *)MEMORY[0xABF23C], 0, 0, 80, 25); /*0x5bc998*/
        return 0; /*0x5bc9b3*/
      case 'N': /*0x5bc78d*/
      case 'n': /*0x5bc78d*/
        MEMORY[0xABF21C] = MEMORY[0xABF21C] == 0; /*0x5bc968*/
        return 0; /*0x5bc974*/
      case 'O': /*0x5bc78d*/
      case 'o': /*0x5bc78d*/
        v8 = MEMORY[0xABF220]; /*0x5bc837*/
        if ( MEMORY[0xABF220] > 16 || MEMORY[0xABF220] >= MEMORY[0xB1D4B0] ) /*0x5bc848*/
        {
          v8 = 0; /*0x5bc84a*/
          MEMORY[0xABF220] = 0; /*0x5bc84c*/
        }
        UpdateThemeManager(v8, -1, -1); /*0x5bc857*/
        goto LABEL_15; /*0x5bc857*/
      case 'Q': /*0x5bc78d*/
      case 'q': /*0x5bc78d*/
        v5 = MEMORY[0xABF220]; /*0x5bc7a8*/
        if ( MEMORY[0xABF220] > 16 || MEMORY[0xABF220] >= MEMORY[0xB1D4B0] ) /*0x5bc7b9*/
        {
          v5 = 0; /*0x5bc7bb*/
          MEMORY[0xABF220] = 0; /*0x5bc7bd*/
        }
        UpdateThemeManager(v5, 1, MEMORY[0xABF22C]); /*0x5bc7ce*/
        goto LABEL_15; /*0x5bc7ce*/
      case 'S': /*0x5bc78d*/
      case 's': /*0x5bc78d*/
        sub_406EE0(); /*0x5bc977*/
        return 0; /*0x5bc984*/
      case 'T': /*0x5bc78d*/
      case 't': /*0x5bc78d*/
        v28 = 0; /*0x5bc8a8*/
        v9 = aTesteffect; /*0x5bc8af*/
        goto LABEL_31; /*0x5bc8b4*/
      case 'W': /*0x5bc78d*/
      case 'w': /*0x5bc78d*/
        v6 = MEMORY[0xABF220]; /*0x5bc7e9*/
        if ( MEMORY[0xABF220] > 16 || MEMORY[0xABF220] >= MEMORY[0xB1D4B0] ) /*0x5bc7fa*/
        {
          v6 = 0; /*0x5bc7fc*/
          MEMORY[0xABF220] = 0; /*0x5bc7fe*/
        }
        UpdateThemeManager(v6, 0, MEMORY[0xABF22C]); /*0x5bc80d*/
LABEL_15:
        ++MEMORY[0xABF220]; /*0x5bc7d3*/
        return 0; /*0x5bc7e6*/
      case '[': /*0x5bc78d*/
        if ( MEMORY[0xABF228] >= 5 ) /*0x5bc8bd*/
          return 0; /*0x5bc8bd*/
        Enabled = Audio::GetEnabled(); /*0x5bc8c6*/
        v12 = AudioStream::Constructor(Enabled, 0x1388u); /*0x5bc8cd*/
        *(&MEMORY[0xABF114] + MEMORY[0xABF228]) = v12; /*0x5bc8da*/
        if ( !v12 ) /*0x5bc8e1*/
          return 0; /*0x5bc8e1*/
        if ( ThreadAudioMixerMain(v12, aIntroWav, 1) ) /*0x5bc8ec*/
        {
          ++MEMORY[0xABF228]; /*0x5bc8fc*/
          return 0; /*0x5bc908*/
        }
        AudioSample::Destructor(*(&MEMORY[0xABF114] + MEMORY[0xABF228])); /*0x5bc912*/
        break; /*0x5bc912*/
      case ']': /*0x5bc78d*/
        if ( MEMORY[0xABF228] <= 0 ) /*0x5bc929*/
          return 0; /*0x5bc929*/
        v13 = (_DWORD *)*(&MEMORY[0xABF110] + MEMORY[0xABF228]--); /*0x5bc92b*/
        Audio::Release(v13); /*0x5bc938*/
        AudioSample::Destructor(*(&MEMORY[0xABF114] + MEMORY[0xABF228])); /*0x5bc94a*/
        return 0; /*0x5bc957*/
      default:
        return 0;
    }
    return 0; /*0x5bc912*/
  }
  if ( a2 != 273 ) /*0x5bca98*/
    return 0; /*0x5bc91f*/
  MEMORY[0xABF239] = 0; /*0x5bcaa3*/
  if ( MEMORY[0xABF240] ) /*0x5bcaac*/
  {
    MEMORY[0xABF23A] = 0; /*0x5bcab1*/
    ShowWindow(MEMORY[0xABF240], 0); /*0x5bcab8*/
  }
  return 1; /*0x5bc743*/
}


// ==== 0x005BCB90  ObjectClass::method_5BCB90  this=ObjectClass  sig=csp ====
ObjectClass *__thiscall sub_5BCB90(int this, int a2)
{
  int v3; // edi
  _DWORD *v4; // ebx
  _BYTE *v5; // ecx
  _DWORD *v6; // eax
  int v7; // edx

  v3 = 0; /*0x5bcb9c*/
  *(_DWORD *)(this + 10008) = a2; /*0x5bcb9e*/
  *(_DWORD *)(this + 10012) = 0; /*0x5bcba4*/
  *(_DWORD *)(this + 10016) = 0; /*0x5bcbaa*/
  *(_DWORD *)(this + 10020) = 0; /*0x5bcbb0*/
  *(_DWORD *)(this + 10024) = 0; /*0x5bcbb6*/
  *(_DWORD *)(this + 10028) = 80; /*0x5bcbbc*/
  *(_DWORD *)(this + 10032) = 25; /*0x5bcbc6*/
  v4 = (_DWORD *)(this + 2000); /*0x5bcbd0*/
  do /*0x5bcbf5*/
  {
    v5 = (_BYTE *)(v3 + this); /*0x5bcbd6*/
    v6 = v4; /*0x5bcbd9*/
    v7 = 80; /*0x5bcbdb*/
    do /*0x5bcbec*/
    {
      *v5 = 32; /*0x5bcbe0*/
      *v6 = 0; /*0x5bcbe3*/
      v6 += 25; /*0x5bcbe5*/
      v5 += 25; /*0x5bcbe8*/
      --v7; /*0x5bcbeb*/
    }
    while ( v7 ); /*0x5bcbec*/
    ++v3; /*0x5bcbee*/
    ++v4; /*0x5bcbef*/
  }
  while ( v3 < 25 ); /*0x5bcbf5*/
  *(_BYTE *)(this + 10036) = 1; /*0x5bcbff*/
  Text::DrawRepeated((void *)this, 0, 0, 80, 25); /*0x5bcc06*/
  return (ObjectClass *)this; /*0x5bcc0d*/
}


// ==== 0x005BCC20  nullsub_174  this=-  sig=ida-proto ====
void nullsub_174()
{
  ; /*0x5bcc20*/
}


// ==== 0x005BCC30  ObjectClass::method_5BCC30  this=ObjectClass  sig=csp ====
int __thiscall sub_5BCC30(_DWORD *this)
{
  return this->q9C6; /*0x5bcc36*/
}


// ==== 0x005BCC40  Network::validateConnection  this=Network  sig=csp ====
int __thiscall sub_5BCC40(_DWORD *this, int a2, int a3)
{
  this->q271C = a2; /*0x5bcc48*/
  this->q2720 = a3; /*0x5bcc4e*/
  return a2; /*0x5bcc54*/
}


// ==== 0x005BCC60  ObjectClass::method_5BCC60  this=ObjectClass  sig=csp ====
int __thiscall sub_5BCC60(_DWORD *this, int a2, int a3, int a4, int a5)
{
  this->q9C9 = a2; /*0x5bcc68*/
  this->q9CA = a3; /*0x5bcc72*/
  this->q9CB = a4; /*0x5bcc7c*/
  this->q9CC = a5; /*0x5bcc82*/
  return a4; /*0x5bcc88*/
}


// ==== 0x005BCC90  TextBuffer::Init  this=ObjectClass  sig=csp ====
char __thiscall TextBuffer_Init(_BYTE *this)
{
  int v1; // edi
  _DWORD *v2; // ebx
  _BYTE *v3; // edx
  _DWORD *v4; // eax
  int v5; // esi

  v1 = 0; /*0x5bcc93*/
  v2 = this + 2000; /*0x5bcc95*/
  do /*0x5bccbe*/
  {
    v3 = this + v1; /*0x5bcc9b*/
    v4 = v2; /*0x5bcc9e*/
    v5 = 80; /*0x5bcca0*/
    do /*0x5bccb5*/
    {
      *v3 = 32; /*0x5bcca5*/
      *v4 = 0; /*0x5bcca8*/
      v4 += 25; /*0x5bccae*/
      v3 += 25; /*0x5bccb1*/
      --v5; /*0x5bccb4*/
    }
    while ( v5 ); /*0x5bccb5*/
    ++v1; /*0x5bccb7*/
    ++v2; /*0x5bccb8*/
  }
  while ( v1 < 25 ); /*0x5bccbe*/
  this->q2734 = 1; /*0x5bccc8*/
  return Text::DrawRepeated(this, 0, 0, 80, 25); /*0x5bccd4*/
}


// ==== 0x005BCCE0  ObjectClass::method_5BCCE0  this=ObjectClass  sig=csp ====
char __thiscall sub_5BCCE0(_BYTE *this)
{
  return this->q2734; /*0x5bcce6*/
}


// ==== 0x005BCE10  ObjectClass::method_5BCE10  this=ObjectClass  sig=csp ====
char __thiscall sub_5BCE10(int *this, int a2)
{
  char result; // al
  int v4; // eax
  int v5; // edx
  int v6; // ebx
  int v7; // ebp
  char *v8; // edi
  int v9; // ecx
  char *v10; // ebx
  int *v11; // ecx
  int v12; // ebx
  int v13; // eax
  int *v14; // ebp
  int v15; // ebp
  char *v16; // edi
  int v17; // ebx
  int *v18; // ecx
  int v19; // eax
  int *v20; // ebp
  int *v21; // [esp+4h] [ebp-Ch]
  _BYTE *v22; // [esp+8h] [ebp-8h]
  int v23; // [esp+Ch] [ebp-4h]
  int v24; // [esp+Ch] [ebp-4h]
  int v25; // [esp+14h] [ebp+4h]
  int v26; // [esp+14h] [ebp+4h]

  result = *((_BYTE *)&(&g_MatrixTransformState)[22] + 10); /*0x5bce10*/
  if ( *((_BYTE *)&(&g_MatrixTransformState)[22] + 10) ) /*0x5bce1d*/
  {
    v4 = this->q9C9; /*0x5bce27*/
    v5 = this->q9CA; /*0x5bce2d*/
    v6 = this->q9CC; /*0x5bce34*/
    v7 = this->q9CB; /*0x5bce3b*/
    if ( a2 <= 0 ) /*0x5bce44*/
    {
      if ( a2 < 0 ) /*0x5bcef9*/
      {
        v15 = v4 + v7; /*0x5bcefb*/
        if ( v4 < v15 ) /*0x5bceff*/
        {
          v26 = v6 + v5 - 1; /*0x5bcf08*/
          v16 = (char *)this + 20 * v4 + 5 * v4; /*0x5bcf0f*/
          v17 = 500 - (_DWORD)this; /*0x5bcf1f*/
          v18 = this + 20 * v4 + 5 * v4 + v5 + 500; /*0x5bcf23*/
          v24 = v15 - v4; /*0x5bcf2a*/
          do /*0x5bcf6f*/
          {
            v19 = v26; /*0x5bcf2e*/
            if ( v26 > v5 ) /*0x5bcf34*/
            {
              v20 = this + (_DWORD)&v16[v17 + v26]; /*0x5bcf3a*/
              do /*0x5bcf50*/
              {
                --v20; /*0x5bcf41*/
                v16[v19] = v16[v19 - 1]; /*0x5bcf44*/
                v20[1] = *v20; /*0x5bcf4a*/
                --v19; /*0x5bcf4d*/
              }
              while ( v19 > v5 ); /*0x5bcf50*/
              v17 = 500 - (_DWORD)this; /*0x5bcf52*/
            }
            v16[v5] = 32; /*0x5bcf5a*/
            *v18 = 0; /*0x5bcf5e*/
            v18 += 25; /*0x5bcf64*/
            v16 += 25; /*0x5bcf67*/
            --v24; /*0x5bcf6b*/
          }
          while ( v24 ); /*0x5bcf6f*/
        }
      }
    }
    else if ( v4 < v4 + v7 ) /*0x5bce53*/
    {
      v25 = v6 + v5 - 1; /*0x5bce5d*/
      v8 = (char *)this + 25 * v4; /*0x5bce67*/
      v9 = v5 + v6 + 25 * v4; /*0x5bce6c*/
      v10 = (char *)this + v9 - 1; /*0x5bce72*/
      v11 = this + v9 + 499; /*0x5bce76*/
      v22 = v10; /*0x5bce7d*/
      v23 = this->q9CB; /*0x5bce97*/
      v21 = this + 20 * v4 + 5 * v4 + v5 + 500; /*0x5bce9b*/
      v12 = v25; /*0x5bce9f*/
      do /*0x5bcef5*/
      {
        v13 = v5; /*0x5bcea5*/
        if ( v5 < v12 ) /*0x5bcea7*/
        {
          v14 = v21; /*0x5bcea9*/
          do /*0x5bcec4*/
          {
            ++v14; /*0x5bceb1*/
            v8[v13] = v8[v13 + 1]; /*0x5bceb4*/
            *(v14 - 1) = *v14; /*0x5bceba*/
            v12 = v25; /*0x5bcebd*/
            ++v13; /*0x5bcec1*/
          }
          while ( v13 < v25 ); /*0x5bcec4*/
        }
        v11 += 25; /*0x5bced1*/
        *v22 = 32; /*0x5bced4*/
        v22 += 25; /*0x5bceda*/
        *(v11 - 25) = 0; /*0x5bcee2*/
        v8 += 25; /*0x5bcee9*/
        v21 += 25; /*0x5bceed*/
        --v23; /*0x5bcef1*/
      }
      while ( v23 ); /*0x5bcef5*/
    }
    return Text::DrawRepeated(this, 0, 0, 80, 25); /*0x5bcf7b*/
  }
  return result; /*0x5bcf83*/
}


// ==== 0x005BD0D0  Debug::ScrollText  this=ObjectClass  sig=csp ====
char __thiscall Debug::ScrollText(int this, CellStruct *aP1)
{
  char result; // al
  int v4; // eax
  IUnknown *v5; // ebp
  IUnknown *v6; // edx
  IUnknown *v7; // edi
  IUnknown *v8; // ebx
  char *v9; // eax
  int v10; // eax
  _DWORD *v11; // [esp+4h] [ebp-10h]
  char *v12; // [esp+8h] [ebp-Ch]
  IUnknown *aP2; // [esp+Ch] [ebp-8h]
  char *i; // [esp+10h] [ebp-4h]
  char aP1a; // [esp+18h] [ebp+4h]

  result = *((_BYTE *)&(&g_MatrixTransformState)[22] + 10); /*0x5bd0d0*/
  if ( *((_BYTE *)&(&g_MatrixTransformState)[22] + 10) ) /*0x5bd0dd*/
  {
    v4 = *(_DWORD *)(this + 10020); /*0x5bd0ef*/
    v5 = (IUnknown *)(*(_DWORD *)(this + 10012) + v4); /*0x5bd108*/
    aP2 = (IUnknown *)(*(_DWORD *)(this + 10016) + *(_DWORD *)(this + 10024)); /*0x5bd10e*/
    v6 = (IUnknown *)(v4 + *(_DWORD *)(this + 10028)); /*0x5bd112*/
    *(_BYTE *)(this + 10036) = 0; /*0x5bd119*/
    v7 = (IUnknown *)((char *)v5 + strlen((const char *)aP1)); /*0x5bd127*/
    if ( (int)v7 > (int)v6 ) /*0x5bd12b*/
      v7 = v6; /*0x5bd12d*/
    v8 = v5; /*0x5bd131*/
    if ( (int)v5 < (int)v7 ) /*0x5bd133*/
    {
      v12 = (char *)aP2 + 20 * (_DWORD)v5 + 5 * (_DWORD)v5 + this; /*0x5bd148*/
      v9 = (char *)((char *)aP1 - (char *)v5); /*0x5bd15c*/
      v11 = (_DWORD *)(this + 4 * (_DWORD)&aP2->__pad_1D8[20 * (_DWORD)v5 + 28 + 5 * (_DWORD)v5]); /*0x5bd15e*/
      for ( i = (char *)((char *)aP1 - (char *)v5); ; v9 = i ) /*0x5bd162*/
      {
        aP1a = *((_BYTE *)&v8->field_0 + (_DWORD)v9); /*0x5bd16f*/
        *v12 = Debug_Helper(aP1a); /*0x5bd187*/
        *v11 = *(_DWORD *)(this + 10000); /*0x5bd18f*/
        if ( aP1a == 10 ) /*0x5bd197*/
        {
          v10 = *(_DWORD *)(this + 10016); /*0x5bd199*/
          *(_DWORD *)(this + 10012) = 0; /*0x5bd19f*/
          *(_DWORD *)(this + 10016) = v10 + 1; /*0x5bd1aa*/
        }
        else
        {
          ++*(_DWORD *)(this + 10012); /*0x5bd1b2*/
        }
        v8 = (IUnknown *)((char *)v8 + 1); /*0x5bd1c0*/
        v11 += 25; /*0x5bd1c9*/
        v12 += 25; /*0x5bd1cd*/
        if ( (int)v8 >= (int)v7 ) /*0x5bd1d1*/
          break; /*0x5bd1d1*/
      }
    }
    return Text::DrawRepeated((void *)this, v5, aP2, (char *)v7 - (char *)v5, 1); /*0x5bd1e0*/
  }
  return result; /*0x5bd1e8*/
}


// ==== 0x005BD1F0  Debug::Printf  this=AbstractClass  sig=csp ====
char __thiscall Debug::Printf(IUnknown *this)
{
  char result; // al
  char Buffer[256]; // [esp+0h] [ebp-100h] BYREF
  int v3; // [esp+104h] [ebp+4h]
  char *Format; // [esp+108h] [ebp+8h]
  char ArgList; // [esp+10Ch] [ebp+Ch] BYREF

  result = MEMORY[0xABF23A]; /*0x5bd1f0*/
  if ( MEMORY[0xABF23A] ) /*0x5bd1fd*/
  {
    vsprintf(Buffer, Format, &ArgList); /*0x5bd214*/
    Buffer[255] = 0; /*0x5bd227*/
    return Debug::ScrollText(v3, Buffer); /*0x5bd230*/
  }
  return result; /*0x5bd235*/
}


// ==== 0x005BD240  sub_5BD240  this=-  sig=ida-proto ====
char __cdecl sub_5BD240(int a1, size_t BufferCount, wchar_t Format)
{
  char result; // al
  char v4[256]; // [esp+0h] [ebp-300h] BYREF
  wchar_t Buffer[256]; // [esp+100h] [ebp-200h] BYREF

  result = MEMORY[0xABF23A]; /*0x5bd240*/
  if ( MEMORY[0xABF23A] ) /*0x5bd24d*/
  {
    vswprintf(Buffer, BufferCount, &Format, *(va_list *)v4); /*0x5bd267*/
    sprintf(v4, stru_82D020, Buffer); /*0x5bd27e*/
    return Debug::ScrollText(a1, v4); /*0x5bd292*/
  }
  return result; /*0x5bd297*/
}


// ==== 0x005BD2E0  ObjectClass::method_5BD2E0  this=ObjectClass  sig=csp ====
char __thiscall sub_5BD2E0(_DWORD *this, ObjectClass *aP1, int a3, int a4, int a5)
{
  char result; // al
  CellStruct Buffer; // [esp+4h] [ebp-400h] BYREF

  result = *((_BYTE *)&(&g_MatrixTransformState)[22] + 10); /*0x5bd2e0*/
  if ( *((_BYTE *)&(&g_MatrixTransformState)[22] + 10) ) /*0x5bd2f0*/
  {
    this->q9C7 = a3; /*0x5bd300*/
    this->q9C8 = a4; /*0x5bd306*/
    if ( *((_BYTE *)&(&g_MatrixTransformState)[22] + 10) ) /*0x5bd313*/
      *(this + 2500) = a5; /*0x5bd31c*/
    sprintf((char *const)&Buffer, &stru_82D020, (INIClass *)aP1); /*0x5bd334*/
    return Debug::ScrollText((int)this, &Buffer); /*0x5bd343*/
  }
  return result; /*0x5bd348*/
}


// ==== 0x005BD360  Debug_Helper  this=ObjectClass  sig=csp ====
char __stdcall Debug_Helper(ObjectClass *aP0)
{
  char result; // al

  result = (char)aP0; /*0x5bd360*/
  switch ( (_BYTE)aP0 ) /*0x5bd366*/
  {
    case 0xA: /*0x5bd366*/
      return 32; /*0x5bd368*/
    case 0xB3: /*0x5bd366*/
      return 124; /*0x5bd371*/
    case 0xC4: /*0x5bd366*/
      return 45; /*0x5bd37a*/
    case 0xCD: /*0x5bd366*/
      return 61; /*0x5bd383*/
    case 0xDA: /*0x5bd366*/
    case 0xC2: /*0x5bd366*/
    case 0xBF: /*0x5bd366*/
    case 0xC6: /*0x5bd366*/
    case 0xC3: /*0x5bd366*/
    case 0xD1: /*0x5bd366*/
    case 0xC5: /*0x5bd366*/
    case 0xD8: /*0x5bd366*/
    case 0xB5: /*0x5bd366*/
    case 0xC0: /*0x5bd366*/
    case 0xC1: /*0x5bd366*/
    case 0xD9: /*0x5bd366*/
    case 0xD5: /*0x5bd366*/
    case 0xB4: /*0x5bd366*/
      return 43; /*0x5bd3c0*/
  }
  return result; /*0x5bd36a*/
}


// ==== 0x005BD3D0  Text::DrawCharAtGrid  this=Text  sig=csp ====
BOOL __thiscall sub_5BD3D0(_DWORD *this, HDC hdc, int String, int a4)
{
  int v4; // ebx
  int v5; // esi
  int v7; // ebp

  v4 = a4; /*0x5bd3d1*/
  v5 = String; /*0x5bd3d7*/
  v7 = *(this + 20 * String + 5 * String + a4 + 500); /*0x5bd3e7*/
  if ( v7 != this->q9C5 ) /*0x5bd3f2*/
  {
    if ( v7 == 1 ) /*0x5bd3f7*/
    {
      SetBkColor(hdc, MEMORY[0xABF110]); /*0x5bd405*/
      SetTextColor(hdc, MEMORY[0xABF128]); /*0x5bd417*/
    }
    else
    {
      SetBkColor(hdc, MEMORY[0xABF128]); /*0x5bd424*/
      SetTextColor(hdc, MEMORY[0xABF110]); /*0x5bd436*/
    }
    this->q9C5 = v7; /*0x5bd43c*/
  }
  LOBYTE(String) = *((_BYTE *)this + 20 * v5 + 5 * v5 + v4); /*0x5bd45a*/
  return TextOutA( /*0x5bd484*/
           hdc,
           v5 * MEMORY[0xABF1C8].tmMaxCharWidth + 10,
           v4 * (MEMORY[0xABF1C8].tmExternalLeading + MEMORY[0xABF1C8].tmHeight) + 10,
           (LPCSTR)&String,
           1);
}


// ==== 0x005BD490  Text::DrawRepeated  this=ObjectClass  sig=csp ====
char __thiscall Text::DrawRepeated(void *this, IUnknown *aP1, IUnknown *aP2, int a4, int a5)
{
  char result; // al
  HDC DC; // edi
  IUnknown *v7; // ebx
  IUnknown *v8; // eax
  bool v9; // of
  IUnknown *v10; // esi
  IUnknown *v11; // ebp
  HGDIOBJ h; // [esp+8h] [ebp-4h]
  IUnknown *aP2a; // [esp+14h] [ebp+8h]

  result = *((_BYTE *)&(&g_MatrixTransformState)[22] + 10); /*0x5bd493*/
  if ( *((_BYTE *)&(&g_MatrixTransformState)[22] + 10) ) /*0x5bd49f*/
  {
    if ( this == *(&g_MatrixTransformState + 267) ) /*0x5bd4ab*/
    {
      DC = GetDC((HWND)*(&g_MatrixTransformState + 268)); /*0x5bd4bd*/
      SetBkMode(DC, 2); /*0x5bd4c2*/
      SetBkColor(DC, (COLORREF)*(&g_MatrixTransformState + 198)); /*0x5bd4d0*/
      result = SetTextColor(DC, (COLORREF)*(&g_MatrixTransformState + 192)); /*0x5bd4de*/
      if ( DC ) /*0x5bd4e6*/
      {
        v7 = aP2; /*0x5bd4f6*/
        h = SelectObject(DC, *(&g_MatrixTransformState + 269)); /*0x5bd4fe*/
        v8 = (IUnknown *)((char *)aP2 + a5); /*0x5bd502*/
        v9 = __OFSUB__(aP2, (char *)aP2 + a5); /*0x5bd505*/
        aP2a = (IUnknown *)((char *)aP2 + a5); /*0x5bd507*/
        if ( -a5 < 0 != v9 ) /*0x5bd50b*/
        {
          v10 = aP1; /*0x5bd513*/
          v11 = (IUnknown *)((char *)aP1 + a4); /*0x5bd517*/
          do /*0x5bd53a*/
          {
            if ( (int)v10 < (int)v11 ) /*0x5bd51c*/
            {
              do /*0x5bd52d*/
              {
                Text::DrawCharAtGrid(this, DC, (int)v10, (int)v7); /*0x5bd525*/
                v10 = (IUnknown *)((char *)v10 + 1); /*0x5bd52a*/
              }
              while ( (int)v10 < (int)v11 ); /*0x5bd52d*/
              v10 = aP1; /*0x5bd52f*/
              v8 = aP2a; /*0x5bd533*/
            }
            v7 = (IUnknown *)((char *)v7 + 1); /*0x5bd537*/
          }
          while ( (int)v7 < (int)v8 ); /*0x5bd53a*/
        }
        SelectObject(DC, h); /*0x5bd544*/
        return ReleaseDC((HWND)*(&g_MatrixTransformState + 268), DC); /*0x5bd552*/
      }
    }
  }
  return result; /*0x5bd559*/
}


// ==== 0x005BD560  ObjectClass::method_5BD560  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5BD560(_DWORD *this)
{
  *(_BYTE *)this = 0; /*0x5bd564*/
  this->vtable2 = 0; /*0x5bd566*/
  this->vtable3 = 0; /*0x5bd569*/
  this->vtable4 = 0; /*0x5bd56c*/
  return this; /*0x5bd56f*/
}


// ==== 0x005BD570  File::LoadFileHVA  this=IUnknown  sig=csp ====
_DWORD *__thiscall HVA_LoadFile(_DWORD *this, int a2)
{
  *(_BYTE *)this = 0; /*0x5bd575*/
  this->q004 = 0; /*0x5bd577*/
  this->q008 = 0; /*0x5bd57a*/
  this->q00C = 0; /*0x5bd57d*/
  if ( !File::ParseFileHVA(a2) ) /*0x5bd585*/
    *(_BYTE *)this = 1; /*0x5bd58e*/
  return this; /*0x5bd593*/
}


// ==== 0x005BD5A0  String::Release  this=String  sig=csp ====
void __thiscall String_Release(void **this)
{
  if ( *(this + 3) ) /*0x5bd5a3*/
    __3_YAXPAX_Z(*(this + 3)); /*0x5bd5ab*/
  *(this + 3) = 0; /*0x5bd5b3*/
}


// ==== 0x005BD5C0  File::ParseFileHVA  this=File  sig=csp ====
int __thiscall HVA_ParseFile(int this, int a2)
{
  int v3; // esi
  int result; // eax
  void *v5; // eax
  int v6; // edx
  void *v7; // eax
  unsigned int v8; // ebp
  const void *v9; // eax
  void *v10; // edi
  int v11; // [esp+1Ch] [ebp-7Ch]
  _BYTE v12[16]; // [esp+20h] [ebp-78h] BYREF
  int v13; // [esp+30h] [ebp-68h]
  int v14; // [esp+34h] [ebp-64h]
  _BYTE v15[48]; // [esp+38h] [ebp-60h] BYREF

  if ( *(_DWORD *)(this + 12) ) /*0x5bd5c9*/
    __3_YAXPAX_Z(*(void **)(this + 12)); /*0x5bd5d3*/
  v3 = a2; /*0x5bd5db*/
  *(_DWORD *)(this + 12) = 0; /*0x5bd5e2*/
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 28))(a2, 1); /*0x5bd5eb*/
  if ( result ) /*0x5bd5f0*/
  {
    (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a2 + 36))(a2, v12, 24); /*0x5bd607*/
    v5 = *(void **)(this + 12); /*0x5bd60a*/
    v6 = v13; /*0x5bd611*/
    *(_DWORD *)(this + 4) = v14; /*0x5bd617*/
    *(_DWORD *)(this + 8) = v6; /*0x5bd61a*/
    if ( v5 ) /*0x5bd61d*/
      __3_YAXPAX_Z(v5); /*0x5bd620*/
    v7 = __2_YAPAXI_Z(48 * *(_DWORD *)(this + 4) * *(_DWORD *)(this + 8)); /*0x5bd636*/
    if ( !v7 ) /*0x5bd640*/
      v7 = 0; /*0x5bd649*/
    *(_DWORD *)(this + 12) = v7; /*0x5bd64d*/
    if ( v7 ) /*0x5bd650*/
    {
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a2 + 40))(a2, 16 * *(_DWORD *)(this + 4), 1); /*0x5bd675*/
      v11 = 0; /*0x5bd67b*/
      if ( *(_DWORD *)(this + 8) ) /*0x5bd678*/
      {
        while ( 1 ) /*0x5bd686*/
        {
          v8 = 0; /*0x5bd686*/
          if ( *(_DWORD *)(this + 4) ) /*0x5bd683*/
            break; /*0x5bd683*/
LABEL_14:
          if ( (unsigned int)++v11 >= *(_DWORD *)(this + 8) ) /*0x5bd6e8*/
            goto LABEL_15; /*0x5bd6e8*/
        }
        while ( (*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v3 + 36))(v3, v15, 48) == 48 ) /*0x5bd69d*/
        {
          v9 = (const void *)Matrix::Copy12Float(v15); /*0x5bd6a8*/
          v10 = (void *)(*(_DWORD *)(this + 12) + 48 * (v8 + v11 * *(_DWORD *)(this + 4))); /*0x5bd6c7*/
          ++v8; /*0x5bd6c9*/
          qmemcpy(v10, v9, 0x30u); /*0x5bd6ca*/
          v3 = a2; /*0x5bd6cf*/
          if ( v8 >= *(_DWORD *)(this + 4) ) /*0x5bd6d8*/
            goto LABEL_14; /*0x5bd6d8*/
        }
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 52))(v3); /*0x5bd704*/
        if ( *(_DWORD *)(this + 12) ) /*0x5bd707*/
          __3_YAXPAX_Z(*(void **)(this + 12)); /*0x5bd70f*/
        *(_DWORD *)(this + 12) = 0; /*0x5bd719*/
        return 0; /*0x5bd721*/
      }
      else
      {
LABEL_15:
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 52))(v3); /*0x5bd6ea*/
        return 1; /*0x5bd6f4*/
      }
    }
    else
    {
      *(_DWORD *)(this + 12) = 0; /*0x5bd652*/
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 52))(a2); /*0x5bd659*/
      return 0; /*0x5bd65f*/
    }
  }
  return result; /*0x5bd5f2*/
}


// ==== 0x005BD730  Matrix::Scale  this=Matrix  sig=csp ====
unsigned int __thiscall Matrix_Scale(unsigned int *this, float a2)
{
  unsigned int result; // eax
  unsigned int i; // esi
  unsigned int v4; // eax
  unsigned int j; // edx
  int v6; // eax
  int v7; // eax

  result = this->q008; /*0x5bd730*/
  for ( i = 0; i < result; ++i ) /*0x5bd738*/
  {
    v4 = this->q004; /*0x5bd73b*/
    for ( j = 0; j < v4; v4 = this->q004 ) /*0x5bd742*/
    {
      *(float *)(48 * (j + i * v4) + this->q00C + 12) = a2 * *(float *)(48 * (j + i * v4) + this->q00C + 12); /*0x5bd75e*/
      v6 = 48 * (j + this->q004 * i); /*0x5bd772*/
      *(float *)(v6 + this->q00C + 28) = a2 * *(float *)(v6 + this->q00C + 28); /*0x5bd77d*/
      v7 = 48 * (j + this->q004 * i); /*0x5bd791*/
      ++j; /*0x5bd794*/
      *(float *)(v7 + this->q00C + 44) = a2 * *(float *)(v7 + this->q00C + 44); /*0x5bd79d*/
    }
    result = this->q008; /*0x5bd7a6*/
  }
  return result; /*0x5bd7af*/
}


// ==== 0x005BD7E0  sub_5BD7E0  this=-  sig=ida-proto ====
void sub_5BD7E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5bd7ec*/
  MEMORY[0xABF270] = Math::Sqrt(v0 + v0); /*0x5bd7fe*/
}


// ==== 0x005BD810  sub_5BD810  this=-  sig=ida-proto ====
void sub_5BD810()
{
  MEMORY[0xABF2D0] = MEMORY[0xABF270] / 60.0; /*0x5bd81c*/
}


// ==== 0x005BD830  sub_5BD830  this=-  sig=ida-proto ====
void sub_5BD830()
{
  MEMORY[0xABF2B8] = 1.0 / MEMORY[0xABF2D0]; /*0x5bd83c*/
}


// ==== 0x005BD850  sub_5BD850  this=-  sig=ida-proto ====
void sub_5BD850()
{
  MEMORY[0xABF2B0] = 0.0174532925199433 * 45.0; /*0x5bd85c*/
}


// ==== 0x005BD870  sub_5BD870  this=-  sig=ida-proto ====
void sub_5BD870()
{
  MEMORY[0xABF278] = 0.0174532925199433 * 60.0; /*0x5bd87c*/
}


// ==== 0x005BD890  sub_5BD890  this=-  sig=ida-proto ====
void sub_5BD890()
{
  MEMORY[0xABF248] = 0.0174532925199433 * 90.0; /*0x5bd89c*/
}


// ==== 0x005BD8B0  sub_5BD8B0  this=-  sig=ida-proto ====
__int64 sub_5BD8B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABF248] - MEMORY[0xABF278]); /*0x5bd8c2*/
  result = Math::RoundToInt(v0 * MEMORY[0xABF270] * 0.5); /*0x5bd8d6*/
  MEMORY[0xABF2D8] = result; /*0x5bd8db*/
  return result; /*0x5bd8e0*/
}


// ==== 0x005BD8F0  sub_5BD8F0  this=-  sig=ida-proto ====
void sub_5BD8F0()
{
  MEMORY[0xABF280] = Math::ArcTan((double)MEMORY[0xABF2D8] * 0.00390625); /*0x5bd907*/
}


// ==== 0x005BD920  sub_5BD920  this=-  sig=ida-proto ====
void sub_5BD920()
{
  MEMORY[0xABF298] = Math::ArcTan((double)(2 * MEMORY[0xABF2D8]) / MEMORY[0xABF270]); /*0x5bd942*/
}


// ==== 0x005BD950  sub_5BD950  this=-  sig=ida-proto ====
__int64 sub_5BD950()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABF2D8]) + 0.5); /*0x5bd96b*/
  MEMORY[0xABF2CC] = result; /*0x5bd970*/
  return result; /*0x5bd976*/
}


// ==== 0x005BD980  sub_5BD980  this=-  sig=ida-proto ====
int sub_5BD980()
{
  MEMORY[0xABF268] = 0; /*0x5bd982*/
  MEMORY[0xABF26A] = 0; /*0x5bd988*/
  return 0; /*0x5bd98e*/
}


// ==== 0x005BD990  sub_5BD990  this=-  sig=ida-proto ====
int sub_5BD990()
{
  MEMORY[0xABF288] = 0; /*0x5bd992*/
  MEMORY[0xABF28C] = 0; /*0x5bd997*/
  MEMORY[0xABF290] = 0; /*0x5bd99c*/
  return 0; /*0x5bd9a1*/
}


// ==== 0x005BD9B0  sub_5BD9B0  this=-  sig=ida-proto ====
int sub_5BD9B0()
{
  MEMORY[0xABF2C8] = 0; /*0x5bd9b5*/
  MEMORY[0xABF2C0] = 128; /*0x5bd9bf*/
  MEMORY[0xABF2C4] = 128; /*0x5bd9c4*/
  return 128; /*0x5bd9c9*/
}


// ==== 0x005BD9D0  sub_5BD9D0  this=-  sig=ida-proto ====
int sub_5BD9D0()
{
  MEMORY[0xABF258] = 0; /*0x5bd9d2*/
  MEMORY[0xABF25C] = 0; /*0x5bd9d7*/
  MEMORY[0xABF260] = 0; /*0x5bd9dc*/
  MEMORY[0xABF264] = 0; /*0x5bd9e1*/
  return 0; /*0x5bd9e6*/
}


// ==== 0x005BD9F0  sub_5BD9F0  this=-  sig=ida-proto ====
int sub_5BD9F0()
{
  MEMORY[0xABF2A0] = Timer::GetTicks(); /*0x5bd9ff*/
  MEMORY[0xABF2A8] = 0; /*0x5bda04*/
  return atexit(sub_5BDA20); /*0x5bda14*/
}


// ==== 0x005BDA20  sub_5BDA20  this=-  sig=ida-proto ====
void __cdecl sub_5BDA20()
{
  if ( (MEMORY[0xABF250] & 1) == 0 ) /*0x5bda2a*/
    MEMORY[0xABF250] |= 1u; /*0x5bda2e*/
}


// ==== 0x005BDA40  MouseClass::method_5BDA40  this=MouseClass  sig=csp ====
_BYTE *__thiscall sub_5BDA40(_BYTE *this)
{
  SmallFunc_692290((int)this); /*0x5bda43*/
  *(_DWORD *)this = &MouseClass::`vftable'; /*0x5bda4a*/
  this->q555C = 0; /*0x5bda50*/
  this->q5560 = 0; /*0x5bda56*/
  this->q5564 = 0; /*0x5bda5c*/
  this->q5568 = 0; /*0x5bda62*/
  this->q1546 = &vt_MouseClass; /*0x5bda68*/
  return this; /*0x5bda74*/
}


// ==== 0x005BDA80  MouseClass::SetAndCall  this=MouseClass  sig=csp ====
int __thiscall Mission_SetAndCall(int *this, int a2, int a3)
{
  int v3; // edx

  v3 = *this; /*0x5bda84*/
  this->q5564 = a2; /*0x5bda8d*/
  return (*(int (__stdcall **)(int, int))(v3 + 76))(a2, a3); /*0x5bda96*/
}


// ==== 0x005BDAA0  MouseClass::GetPosition  this=MouseClass  sig=csp ====
int __thiscall MouseClass::_vt20(_DWORD *this)
{
  return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 76))(this, this->q5564, 0); /*0x5bdaae*/
}


// ==== 0x005BDAB0  MouseClass::SetPosition  this=MouseClass  sig=csp ====
char __thiscall MouseClass::_vt21(int this, char a2)
{
  char result; // al
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // esi
  int v7; // ebp
  _DWORD v8[2]; // [esp+4h] [ebp-8h] BYREF
  int v9; // [esp+10h] [ebp+4h]

  result = *(_BYTE *)(this + 21852); /*0x5bdab7*/
  if ( result != a2 ) /*0x5bdac3*/
  {
    v3 = *(_DWORD *)(this + 21856); /*0x5bdac9*/
    *(_BYTE *)(this + 21852) = a2; /*0x5bdacf*/
    if ( !a2 || MEMORY[0x82D034][7 * v3] == -1 ) /*0x5bdaf2*/
      v9 = MEMORY[0x82D028][7 * v3]; /*0x5bdafd*/
    else
      v9 = MEMORY[0x82D034][7 * v3]; /*0x5bdaf4*/
    v4 = MEMORY[0x82D03C][7 * v3]; /*0x5bdb08*/
    v5 = 0; /*0x5bdb0b*/
    v6 = 0; /*0x5bdb0d*/
    if ( v4 == 12345 ) /*0x5bdb15*/
      v5 = *((__int16 *)MEMORY[0xABF294] + 1) / 2; /*0x5bdb20*/
    if ( v4 == 54321 ) /*0x5bdb29*/
      v5 = *((__int16 *)MEMORY[0xABF294] + 1); /*0x5bdb2b*/
    v7 = MEMORY[0x82D040][7 * v3]; /*0x5bdb2f*/
    if ( v7 == 12345 ) /*0x5bdb38*/
      v6 = *((__int16 *)MEMORY[0xABF294] + 2) / 2; /*0x5bdb43*/
    if ( v7 == 54321 ) /*0x5bdb4b*/
      v6 = *((__int16 *)MEMORY[0xABF294] + 2); /*0x5bdb4d*/
    v8[1] = v6; /*0x5bdb55*/
    v8[0] = v5; /*0x5bdb62*/
    return (*(int (__thiscall **)(int, _DWORD *, void *, int))(*(_DWORD *)MEMORY[0x887640] + 4))( /*0x5bdb79*/
             MEMORY[0x887640],
             v8,
             MEMORY[0xABF294],
             v9 + *(_DWORD *)(this + 21864));
  }
  return result; /*0x5bdb7f*/
}


// ==== 0x005BDB90  System_Handle  this=-  sig=csp ====
int __stdcall sub_5BDB90(int a1, char a2)
{
  int result; // eax

  if ( !a2 ) /*0x5bdbaa*/
    return MEMORY[0x82D028][7 * a1]; /*0x5bdbaa*/
  result = MEMORY[0x82D034][7 * a1]; /*0x5bdbac*/
  if ( result == -1 ) /*0x5bdbb2*/
    return MEMORY[0x82D028][7 * a1]; /*0x5bdbb4*/
  return result; /*0x5bdbb6*/
}


// ==== 0x005BDC00  sub_5BDC00  this=-  sig=csp ====
int *__stdcall sub_5BDC00(int *a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // ecx
  int v5; // esi

  v2 = 0; /*0x5bdc17*/
  v3 = 0; /*0x5bdc19*/
  v4 = MEMORY[0x82D03C][7 * a2]; /*0x5bdc22*/
  if ( v4 == 12345 ) /*0x5bdc2f*/
    v2 = *((__int16 *)MEMORY[0xABF294] + 1) / 2; /*0x5bdc3a*/
  if ( v4 == 54321 ) /*0x5bdc42*/
    v2 = *((__int16 *)MEMORY[0xABF294] + 1); /*0x5bdc44*/
  v5 = MEMORY[0x82D040][7 * a2]; /*0x5bdc48*/
  if ( v5 == 12345 ) /*0x5bdc51*/
    v3 = *((__int16 *)MEMORY[0xABF294] + 2) / 2; /*0x5bdc5c*/
  if ( v5 == 54321 ) /*0x5bdc64*/
    v3 = *((__int16 *)MEMORY[0xABF294] + 2); /*0x5bdc66*/
  *a1 = v2; /*0x5bdc6e*/
  a1[1] = v3; /*0x5bdc70*/
  return a1; /*0x5bdc73*/
}


// ==== 0x005BDC80  MouseClass::SetCursor  this=MouseClass  sig=csp ====
char __thiscall Mouse::SetCursor(int this, ObjectClass *aP1, ObjectClass *aP2)
{
  char v4; // bl
  MPCooperative *v6; // edi
  CoordStruct *Ticks; // eax
  int Y_low; // ecx
  int v9; // eax
  int v10; // ebx
  int X_high; // edi
  int v12; // esi
  int v13; // [esp+10h] [ebp-Ch] BYREF
  CoordStruct *v14; // [esp+14h] [ebp-8h]

  if ( MEMORY[0x82D034][7 * (_DWORD)aP1] == -1 ) /*0x5bdca6*/
  {
    v4 = 0; /*0x5bdca8*/
    LOBYTE(aP2) = 0; /*0x5bdcaa*/
  }
  else
  {
    v4 = (char)aP2; /*0x5bdcb0*/
  }
  if ( *((_BYTE *)&g_MatrixTransformState + 1229) /*0x5bdcd6*/
    && (!*(&g_MatrixTransformState + 289) || aP1 == *(ObjectClass **)(this + 21856) && v4 == *(_BYTE *)(this + 21852)) )
  {
    return 0; /*0x5bdcda*/
  }
  *((_BYTE *)&g_MatrixTransformState + 1229) = 1; /*0x5bdce4*/
  v6 = (MPCooperative *)MEMORY[0x82D030][7 * (_DWORD)aP1]; /*0x5bdceb*/
  Ticks = (CoordStruct *)Timer::GetTicks(); /*0x5bdcf2*/
  Y_low = 0; /*0x5bdcfb*/
  *(&g_MatrixTransformState + 292) = Ticks; /*0x5bdcfd*/
  *(&g_MatrixTransformState + 293) = v14; /*0x5bdd02*/
  *(&g_MatrixTransformState + 294) = (CoordStruct *)v6; /*0x5bdd08*/
  *(_DWORD *)(this + 21864) = 0; /*0x5bdd0e*/
  if ( !v4 || (v9 = MEMORY[0x82D034][7 * (_DWORD)aP1], v9 == -1) ) /*0x5bdd1e*/
    v9 = MEMORY[0x82D028][7 * (_DWORD)aP1]; /*0x5bdd20*/
  v10 = MEMORY[0x82D03C][7 * (_DWORD)aP1]; /*0x5bdd22*/
  X_high = 0; /*0x5bdd25*/
  if ( v10 == 12345 ) /*0x5bdd31*/
    X_high = SHIWORD((*(&g_MatrixTransformState + 289))->X) / 2; /*0x5bdd42*/
  if ( v10 == 54321 ) /*0x5bdd50*/
    X_high = SHIWORD((*(&g_MatrixTransformState + 289))->X); /*0x5bdd52*/
  v12 = MEMORY[0x82D040][7 * (_DWORD)aP1]; /*0x5bdd56*/
  if ( v12 == 12345 ) /*0x5bdd5f*/
    Y_low = SLOWORD((*(&g_MatrixTransformState + 289))->Y) / 2; /*0x5bdd6a*/
  if ( v12 == 54321 ) /*0x5bdd72*/
    Y_low = SLOWORD((*(&g_MatrixTransformState + 289))->Y); /*0x5bdd74*/
  v14 = (CoordStruct *)Y_low; /*0x5bdd7c*/
  v13 = X_high; /*0x5bdd87*/
  (*(void (__thiscall **)(_DWORD, int *, _DWORD, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 4))( /*0x5bdd93*/
    *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228],
    &v13,
    *(&g_MatrixTransformState + 289),
    v9);
  *(_DWORD *)(this + 21856) = aP1; /*0x5bdd9f*/
  *(_BYTE *)(this + 21852) = (_BYTE)aP2; /*0x5bdda5*/
  return 1; /*0x5bdcd8*/
}


// ==== 0x005BDDC0  MouseClass::Reset  this=MouseClass  sig=csp ====
int __thiscall Actions::Reset(int this, int *a1, MouseClass *aP2)
{
  int v4; // ecx
  _DWORD *v5; // ebx
  MPCooperative *v6; // edi
  signed int v7; // eax
  char v8; // cl
  int v9; // eax
  int v10; // edx
  CoordStruct *v11; // edi
  int v12; // ebp
  int X_high; // ebx
  int Y_low; // edi
  int v15; // ecx
  int v16; // eax
  int v18; // [esp+Ch] [ebp-10h]
  int v19; // [esp+10h] [ebp-Ch] BYREF
  CoordStruct *v20; // [esp+14h] [ebp-8h]

  v4 = 7 * *(_DWORD *)(this + 21856); /*0x5bddd5*/
  v5 = (_DWORD *)(4 * v4 + 8572968); /*0x5bdde0*/
  if ( !MEMORY[0x82D030][v4] ) /*0x5bdde7*/
    return ScrollClass::Scroll((int *)this, a1, aP2); /*0x5bdde7*/
  v6 = (MPCooperative *)*(&g_MatrixTransformState + 294); /*0x5bddf2*/
  if ( *(&g_MatrixTransformState + 292) == (CoordStruct *)-1 ) /*0x5bddfb*/
    goto LABEL_5; /*0x5bddfb*/
  v7 = Timer::GetTicks() - (_DWORD)*(&g_MatrixTransformState + 292); /*0x5bde07*/
  if ( v7 < (int)v6 ) /*0x5bde0f*/
  {
    v6 = (MPCooperative *)((char *)v6 - v7); /*0x5bde11*/
LABEL_5:
    if ( v6 ) /*0x5bde15*/
      return ScrollClass::Scroll((int *)this, a1, aP2); /*0x5bde15*/
  }
  v8 = *(_BYTE *)(this + 21852); /*0x5bde1b*/
  v9 = *(_DWORD *)(this + 21864) + 1; /*0x5bde28*/
  *(_DWORD *)(this + 21864) = v9; /*0x5bde2a*/
  if ( v8 ) /*0x5bde33*/
    v10 = v9 % v5[4]; /*0x5bde35*/
  else
    v10 = v9 % v5[1]; /*0x5bde3a*/
  *(_DWORD *)(this + 21864) = v10; /*0x5bde3d*/
  v11 = (CoordStruct *)v5[2]; /*0x5bde43*/
  *(&g_MatrixTransformState + 292) = (CoordStruct *)Timer::GetTicks(); /*0x5bde53*/
  *(&g_MatrixTransformState + 293) = v20; /*0x5bde58*/
  *(&g_MatrixTransformState + 294) = v11; /*0x5bde5e*/
  if ( !*(_BYTE *)(this + 21852) || MEMORY[0x82D034][7 * *(_DWORD *)(this + 21856)] == -1 ) /*0x5bde8a*/
    v18 = MEMORY[0x82D028][7 * *(_DWORD *)(this + 21856)]; /*0x5bde94*/
  else
    v18 = MEMORY[0x82D034][7 * *(_DWORD *)(this + 21856)]; /*0x5bde8c*/
  v12 = MEMORY[0x82D03C][7 * *(_DWORD *)(this + 21856)]; /*0x5bde99*/
  X_high = 0; /*0x5bde9c*/
  Y_low = 0; /*0x5bde9e*/
  if ( v12 == 12345 ) /*0x5bdea6*/
    X_high = SHIWORD((*(&g_MatrixTransformState + 289))->X) / 2; /*0x5bdeb6*/
  if ( v12 == 54321 ) /*0x5bdec4*/
    X_high = SHIWORD((*(&g_MatrixTransformState + 289))->X); /*0x5bdec6*/
  v15 = MEMORY[0x82D040][7 * *(_DWORD *)(this + 21856)]; /*0x5bdeca*/
  if ( v15 == 12345 ) /*0x5bded3*/
    Y_low = SLOWORD((*(&g_MatrixTransformState + 289))->Y) / 2; /*0x5bdede*/
  if ( v15 == 54321 ) /*0x5bdee6*/
    Y_low = SLOWORD((*(&g_MatrixTransformState + 289))->Y); /*0x5bdee8*/
  v16 = *(_DWORD *)(this + 21864); /*0x5bdeec*/
  v19 = X_high; /*0x5bdef8*/
  v20 = (CoordStruct *)Y_low; /*0x5bdf02*/
  (*(void (__thiscall **)(_DWORD, int *, _DWORD, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 4))( /*0x5bdf0f*/
    *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228],
    &v19,
    *(&g_MatrixTransformState + 289),
    v18 + v16);
  return ScrollClass::Scroll((int *)this, a1, aP2); /*0x5bdf24*/
}


// ==== 0x005BDF30  MouseClass::LoadTypeData  this=MouseClass  sig=csp ====
void *__thiscall MouseClass::_vt05(int *this)
{
  void *result; // eax

  BlowStraw_29::Stub(this); /*0x5bdf30*/
  result = LoadFileSHP(g_Str_File_MOUSE_SHA, (bool *)&MEMORY[0xABF2DC]); /*0x5bdf3f*/
  MEMORY[0xABF294] = result; /*0x5bdf44*/
  return result; /*0x5bdf49*/
}


// ==== 0x005BDF50  MouseClass::HandleClick  this=MouseClass  sig=csp ====
int __thiscall MouseClass::_vt07(int this)
{
  HouseClass::InitSubsystems((_BYTE *)this); /*0x5bdf53*/
  *(_BYTE *)(this + 21852) = 0; /*0x5bdf5a*/
  *(_DWORD *)(this + 21860) = 0; /*0x5bdf60*/
  return 0; /*0x5bdf66*/
}


// ==== 0x005BDF70  MouseClass::LoadGameAssets  this=MouseClass  sig=csp ====
int __thiscall MouseClass::LoadGameAssets(int *this, LPSTREAM pStm)
{
  LPSTREAM v3; // esi
  int result; // eax
  void *v5; // ecx
  _DWORD *v6; // esi
  int *v7; // esi
  int v8; // edi
  void **v9; // esi
  int v10; // edi
  int *v11; // edi
  int v12; // ebx
  _DWORD *v13; // esi
  int *v14; // ebx
  int *v15; // esi
  int v16; // edi
  int v17; // eax
  void *v18; // eax
  int v19; // esi
  _BYTE *v20; // eax
  int v21; // esi
  _BYTE *v22; // ecx
  int v23; // edx
  int **v24; // eax
  int **v25; // esi
  int v26; // ebx
  _DWORD *v27; // eax
  VectorClass *v28; // edi
  int *v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // edi
  int v35; // edx
  int v36; // esi
  _DWORD *v37; // eax
  _DWORD *v38; // edi
  char *v39; // eax
  VectorClass *v40; // esi
  int v41; // ebx
  char *v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  int *v46; // ecx
  int v47; // edx
  IStream *v48; // edi
  int v49; // ebx
  int *v50; // esi
  void *v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // ecx
  int v55; // eax
  int v56; // eax
  int v57; // edx
  _DWORD *v58; // eax
  int i; // esi
  int v60; // ecx
  int j; // esi
  int v62; // ecx
  int v63; // eax
  int v64; // eax
  int v65; // edx
  int v66; // ecx
  int v67; // eax
  int v68; // eax
  int v69; // edx
  int v70; // ecx
  #376 *v71; // [esp+D0h] [ebp-40h]
  char v72; // [esp+E3h] [ebp-2Dh] BYREF
  int v73; // [esp+E4h] [ebp-2Ch] BYREF
  int v74; // [esp+E8h] [ebp-28h]
  int v75; // [esp+ECh] [ebp-24h] BYREF
  int *v76; // [esp+F0h] [ebp-20h]
  char *v77; // [esp+F4h] [ebp-1Ch]
  int v78; // [esp+F8h] [ebp-18h] BYREF
  int v79; // [esp+FCh] [ebp-14h] BYREF
  int v80; // [esp+100h] [ebp-10h] BYREF
  int v81; // [esp+104h] [ebp-Ch]
  int v82; // [esp+108h] [ebp-8h]
  int v83; // [esp+10Ch] [ebp-4h]

  (*(void (__thiscall **)(int *))(this->q115C + 12))(this + 1111); /*0x5bdf85*/
  (*(void (__thiscall **)(int *))(this->CellStructs1 + 12))(this + 53); /*0x5bdf94*/
  v3 = pStm; /*0x5bdf97*/
  result = SidebarClass::saveLoadPrefix(this, (int)pStm); /*0x5bdf9e*/
  if ( result >= 0 ) /*0x5bdfa7*/
  {
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 12))(v3, &v79, 4, 0); /*0x5bdfb8*/
    if ( result >= 0 ) /*0x5bdfbd*/
    {
      dword_822CF8 = -1; /*0x5bdfc3*/
      (*(void (__thiscall **)(int *))(*this + 92))(this); /*0x5bdfd2*/
      __3_YAXPAX_Z((void *)this->q01C); /*0x5bdfd9*/
      v5 = (void *)this->q01A; /*0x5bdfde*/
      this->q01C = 0; /*0x5bdfe1*/
      __3_YAXPAX_Z(v5); /*0x5bdfe5*/
      v6 = (_DWORD *)this->q005; /*0x5bdfea*/
      this->q01A = 0; /*0x5bdff2*/
      if ( v6 ) /*0x5bdff5*/
      {
        if ( *v6 ) /*0x5bdff7*/
          (**(void (__thiscall ***)(_DWORD, int))*v6)(*v6, 3); /*0x5be001*/
        __3_YAXPAX_Z(v6); /*0x5be004*/
      }
      this->q005 = 0; /*0x5be00c*/
      v7 = this + 35; /*0x5be00f*/
      v8 = 3; /*0x5be015*/
      do /*0x5be025*/
      {
        (*(void (__thiscall **)(int *))(*v7 + 12))(v7); /*0x5be01e*/
        v7 += 6; /*0x5be021*/
        --v8; /*0x5be024*/
      }
      while ( v8 ); /*0x5be025*/
      v9 = (void **)(this + 6); /*0x5be027*/
      v10 = 13; /*0x5be02a*/
      do /*0x5be040*/
      {
        __3_YAXPAX_Z(*v9); /*0x5be032*/
        *v9++ = 0; /*0x5be037*/
        --v10; /*0x5be03f*/
      }
      while ( v10 ); /*0x5be040*/
      v11 = this + 32; /*0x5be042*/
      v12 = 3; /*0x5be048*/
      do /*0x5be072*/
      {
        v13 = (_DWORD *)*v11; /*0x5be04d*/
        if ( *v11 ) /*0x5be04d*/
        {
          if ( *v13 ) /*0x5be053*/
            (**(void (__thiscall ***)(_DWORD, int))*v13)(*v13, 3); /*0x5be05d*/
          __3_YAXPAX_Z(v13); /*0x5be060*/
          *v11 = 0; /*0x5be068*/
        }
        ++v11; /*0x5be06e*/
        --v12; /*0x5be071*/
      }
      while ( v12 ); /*0x5be072*/
      (*(void (__thiscall **)(int *))(this->MaxLevel + 12))(this + 78); /*0x5be080*/
      result = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))( /*0x5be092*/
                 pStm,
                 this,
                 21868,
                 0);
      if ( result >= 0 ) /*0x5be097*/
      {
        if ( this ) /*0x5be09f*/
        {
          MouseClass::drawCursor(this, (int)&v72); /*0x5be0a8*/
          *this = (int)&MouseClass::`vftable'; /*0x5be0ad*/
          this->q1546 = (int)&vt_MouseClass; /*0x5be0b4*/
        }
        v14 = this + 1386; /*0x5be0be*/
        v74 = 4; /*0x5be0c4*/
        do /*0x5be0f3*/
        {
          v15 = v14; /*0x5be0cc*/
          v16 = 75; /*0x5be0ce*/
          do /*0x5be0e2*/
          {
            ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)v15); /*0x5be0d9*/
            v15 += 13; /*0x5be0de*/
            --v16; /*0x5be0e1*/
          }
          while ( v16 ); /*0x5be0e2*/
          v14 += 997; /*0x5be0e8*/
          --v74; /*0x5be0ef*/
        }
        while ( v74 ); /*0x5be0f3*/
        ObjectPtr::RegisterForTracking( /*0x5be101*/
          (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
          (MouseClass *)(this + 1129));
        ObjectPtr::RegisterForTracking( /*0x5be112*/
          (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
          (MouseClass *)(this + 1130));
        ObjectPtr::RegisterForTracking( /*0x5be123*/
          (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
          (MouseClass *)(this + 1128));
        (*(void (__thiscall **)(int *))(*this + 88))(this); /*0x5be12d*/
        (*(void (__thiscall **)(int *))(*this + 96))(this); /*0x5be135*/
        v17 = *this; /*0x5be138*/
        this->q01C = 0; /*0x5be14a*/
        this->q01A = 0; /*0x5be14d*/
        (*(void (__thiscall **)(int *, int *, int, _DWORD, _DWORD))(v17 + 112))(this, this + 59, 1, 0, 0); /*0x5be150*/
        if ( this->q01C ) /*0x5be153*/
        {
          __3_YAXPAX_Z((void *)this->q01C); /*0x5be15b*/
          this->q01C = 0; /*0x5be163*/
        }
        if ( this->q01A ) /*0x5be166*/
        {
          __3_YAXPAX_Z((void *)this->q01A); /*0x5be16e*/
          this->q01A = 0; /*0x5be176*/
        }
        v18 = (void *)__2_YAPAXI_Z(10 * this->q06C); /*0x5be182*/
        v19 = this->q06C; /*0x5be187*/
        this->q01C = (int)v18; /*0x5be18a*/
        v20 = (_BYTE *)__2_YAPAXI_Z(4 * v19); /*0x5be195*/
        if ( v20 ) /*0x5be19f*/
        {
          v21 = v19 - 1; /*0x5be1a1*/
          v22 = v20; /*0x5be1a2*/
          if ( v21 >= 0 ) /*0x5be1a6*/
          {
            v23 = v21 + 1; /*0x5be1a8*/
            do /*0x5be1b6*/
            {
              *v22 = 7; /*0x5be1ab*/
              v22[1] = 0; /*0x5be1ae*/
              v22 += 4; /*0x5be1b2*/
              --v23; /*0x5be1b5*/
            }
            while ( v23 ); /*0x5be1b6*/
          }
        }
        else
        {
          v20 = 0; /*0x5be1ba*/
        }
        this->q01A = (int)v20; /*0x5be1be*/
        v24 = (int **)__2_YAPAXI_Z(0x10u); /*0x5be1c1*/
        v25 = v24; /*0x5be1c6*/
        v26 = 256; /*0x5be1cd*/
        if ( v24 ) /*0x5be1d2*/
        {
          v24[1] = (int *)Cell::DecodeFlags; /*0x5be1d9*/
          v24[2] = (int *)256; /*0x5be1e0*/
          v24[3] = (int *)20; /*0x5be1e3*/
          v27 = (_DWORD *)__2_YAPAXI_Z(0x1804u); /*0x5be1ea*/
          if ( v27 ) /*0x5be1f4*/
          {
            *v27 = 256; /*0x5be1f6*/
            v76 = v27 + 1; /*0x5be1fb*/
            v28 = (VectorClass *)(v27 + 1); /*0x5be1ff*/
            do /*0x5be210*/
            {
              MouseClass::loadCursor(v28, 0, 0); /*0x5be207*/
              v28 = (VectorClass *)((char *)v28 + 24); /*0x5be20c*/
              --v26; /*0x5be20f*/
            }
            while ( v26 ); /*0x5be210*/
            v29 = v76; /*0x5be212*/
          }
          else
          {
            v29 = 0; /*0x5be218*/
          }
          v30 = (int)v25[2]; /*0x5be21a*/
          *v25 = v29; /*0x5be21d*/
          v31 = 0; /*0x5be21f*/
          if ( v30 > 0 ) /*0x5be223*/
          {
            v32 = 0; /*0x5be225*/
            do /*0x5be23b*/
            {
              ++v31; /*0x5be22e*/
              (*v25)[v32 + 5] = 20; /*0x5be22f*/
              v32 += 6; /*0x5be236*/
            }
            while ( v31 < (int)v25[2] ); /*0x5be23b*/
          }
        }
        else
        {
          v25 = 0; /*0x5be23f*/
        }
        this->q005 = (int)v25; /*0x5be247*/
        v76 = this + 32; /*0x5be24a*/
        v33 = 0; /*0x5be254*/
        v74 = (int)(this + 35); /*0x5be256*/
        do /*0x5be34f*/
        {
          v34 = v74; /*0x5be25a*/
          v35 = *(_DWORD *)v74; /*0x5be266*/
          v78 = v33 + 1; /*0x5be268*/
          v36 = 1 << (v33 + 1); /*0x5be26c*/
          (*(void (__thiscall **)(int))(v35 + 12))(v74); /*0x5be270*/
          *(_DWORD *)(v34 + 20) = 4 * this->q03D * this->q0F8 / (v36 * v36); /*0x5be28d*/
          v37 = (_DWORD *)__2_YAPAXI_Z(0x10u); /*0x5be290*/
          v38 = v37; /*0x5be295*/
          if ( v37 ) /*0x5be29c*/
          {
            v37[1] = Cell::DecodeFlags; /*0x5be2a7*/
            v37[2] = 256; /*0x5be2ae*/
            v37[3] = 20; /*0x5be2b5*/
            v39 = (char *)__2_YAPAXI_Z(0x1804u); /*0x5be2bc*/
            if ( v39 ) /*0x5be2c6*/
            {
              *(_DWORD *)v39 = 256; /*0x5be2c8*/
              v77 = v39 + 4; /*0x5be2d1*/
              v40 = (VectorClass *)(v39 + 4); /*0x5be2d5*/
              v41 = 256; /*0x5be2d7*/
              do /*0x5be2ff*/
              {
                SubzoneHashVector::Construct(v40, 0, 0); /*0x5be2e2*/
                v40->vtable0 = &vt_DynamicVectorClass_HashObject_unsigned_int_SubzoneConnectionStruct; /*0x5be2e7*/
                v40[1].Items = (void *)10; /*0x5be2ed*/
                v40[1].vtable0 = 0; /*0x5be2f4*/
                v40 = (VectorClass *)((char *)v40 + 24); /*0x5be2fb*/
                --v41; /*0x5be2fe*/
              }
              while ( v41 ); /*0x5be2ff*/
              v42 = v77; /*0x5be301*/
            }
            else
            {
              v42 = 0; /*0x5be307*/
            }
            v43 = v38[2]; /*0x5be309*/
            *v38 = v42; /*0x5be30c*/
            v44 = 0; /*0x5be30e*/
            if ( v43 > 0 ) /*0x5be312*/
            {
              v45 = 0; /*0x5be314*/
              do /*0x5be32a*/
              {
                ++v44; /*0x5be31d*/
                *(_DWORD *)(v45 + *v38 + 20) = 20; /*0x5be31e*/
                v45 += 24; /*0x5be325*/
              }
              while ( v44 < v38[2] ); /*0x5be32a*/
            }
          }
          else
          {
            v38 = 0; /*0x5be32e*/
          }
          v46 = v76; /*0x5be330*/
          v33 = v78; /*0x5be338*/
          v47 = v74 + 24; /*0x5be33c*/
          *v76 = (int)v38; /*0x5be33f*/
          v76 = v46 + 1; /*0x5be347*/
          v74 = v47; /*0x5be34b*/
        }
        while ( v33 < 3 ); /*0x5be34f*/
        v48 = pStm; /*0x5be358*/
        result = (*(int (__stdcall **)(LPSTREAM, _DWORD, int, _DWORD))(*(_DWORD *)pStm->__pad_0 + 12))( /*0x5be369*/
                   pStm,
                   this->q01A,
                   4 * this->q06C,
                   0);
        if ( result >= 0 ) /*0x5be36e*/
        {
          v49 = 0; /*0x5be374*/
          v50 = this + 6; /*0x5be376*/
          while ( 1 ) /*0x5be37f*/
          {
            v51 = (void *)__2_YAPAXI_Z(2 * this->q04C); /*0x5be37f*/
            *v50 = (int)v51; /*0x5be384*/
            result = (*(int (__stdcall **)(IStream *, void *, int, _DWORD))(*(_DWORD *)v48->__pad_0 + 12))( /*0x5be395*/
                       v48,
                       v51,
                       2 * this->q04C,
                       0);
            if ( result < 0 ) /*0x5be39a*/
              break; /*0x5be39a*/
            ++v49; /*0x5be3a0*/
            ++v50; /*0x5be3a1*/
            if ( v49 >= 13 ) /*0x5be3a7*/
            {
              v52 = *(_DWORD *)v48->__pad_0; /*0x5be3a9*/
              v75 = 0; /*0x5be3b5*/
              result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(v52 + 12))(v48, &v75, 4, 0); /*0x5be3bd*/
              if ( result >= 0 ) /*0x5be3c4*/
              {
                (*(void (__thiscall **)(int *))(this->q014 + 12))(this + 20); /*0x5be3d2*/
                pStm = 0; /*0x5be3d9*/
                if ( v75 <= 0 ) /*0x5be3df*/
                {
LABEL_72:
                  for ( i = 0; i < this->q050; ++i ) /*0x5be492*/
                  {
                    v60 = *(_DWORD *)(this->q04F + 4 * i); /*0x5be49a*/
                    if ( v60 ) /*0x5be49f*/
                    {
                      (*(void (__thiscall **)(int, int))(*(_DWORD *)v60 + 32))(v60, 1); /*0x5be4a5*/
                      *(_DWORD *)(this->q04F + 4 * i) = 0; /*0x5be4ae*/
                    }
                  }
                  result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(*(_DWORD *)v48->__pad_0 + 12))( /*0x5be4c7*/
                             v48,
                             &v73,
                             4,
                             0);
                  if ( result >= 0 ) /*0x5be4cc*/
                  {
                    for ( j = 0; j < v73; ++j ) /*0x5be4da*/
                      OleLoadFromStream(v48, &IID_IUnknown, (LPVOID *)&pStm); /*0x5be4ed*/
                    result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(*(_DWORD *)v48->__pad_0 + 12))( /*0x5be505*/
                               v48,
                               &v73,
                               4,
                               0);
                    if ( result >= 0 ) /*0x5be50a*/
                    {
                      pStm = 0; /*0x5be514*/
                      if ( v73 <= 0 ) /*0x5be51a*/
                      {
LABEL_89:
                        result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(*(_DWORD *)v48->__pad_0 + 12))( /*0x5be58d*/
                                   v48,
                                   &v73,
                                   4,
                                   0);
                        if ( result >= 0 ) /*0x5be59d*/
                        {
                          pStm = 0; /*0x5be5a7*/
                          if ( v73 <= 0 ) /*0x5be5ad*/
                          {
LABEL_99:
                            LoadObjectTypeClassTheaterSHP(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] /*0x5be620*/
                                                                    + 4696));
                            v70 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4696); /*0x5be636*/
                            if ( v70 == dword_822CF8 ) /*0x5be643*/
                              ResetAllTechnoField776(); /*0x5be64e*/
                            else
                              LoadTerrainTypeClassTheatre((AbstractClass *)v70, 1); /*0x5be647*/
                            LoadMapClassIsometricTiles(0, 0); /*0x5be657*/
                            LoadBuildingTypeClassSHPs(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4696)); /*0x5be668*/
                            BuildingTypeClass::LoadRepairAnimations(v71); /*0x5be679*/
                            LoadBuildingTypeClassTheatreSHP(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] /*0x5be689*/
                                                                      + 4696));
                            LoadFactoryClassTheaterSHP(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4696)); /*0x5be69a*/
                            this->q46F = 0; /*0x5be69f*/
                            dword_822CF8 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4696); /*0x5be6b1*/
                            return 0; /*0x5be6b6*/
                          }
                          else
                          {
                            while ( 1 ) /*0x5be5ba*/
                            {
                              result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(*(_DWORD *)v48->__pad_0 + 12))( /*0x5be5ba*/
                                         v48,
                                         &v78,
                                         4,
                                         0);
                              if ( result < 0 ) /*0x5be5bf*/
                                break; /*0x5be5bf*/
                              v66 = this->q037; /*0x5be5c5*/
                              if ( this->q0E4 < v66 /*0x5be5f5*/
                                || (this->q0E1 || !v66)
                                && (v67 = this->q03A, v67 > 0)
                                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->CellStructs1 + 8))(
                                     this + 53,
                                     v67 + v66,
                                     0) )
                              {
                                v68 = this->q0E4; /*0x5be5fc*/
                                v69 = this->q0D8; /*0x5be5ff*/
                                this->q0E4 = v68 + 1; /*0x5be605*/
                                *(_DWORD *)(v69 + 4 * v68) = v78; /*0x5be60c*/
                              }
                              pStm = (LPSTREAM)((char *)pStm + 1); /*0x5be61a*/
                              if ( (int)pStm >= v73 ) /*0x5be61e*/
                                goto LABEL_99; /*0x5be61e*/
                            }
                          }
                        }
                      }
                      else
                      {
                        while ( 1 ) /*0x5be527*/
                        {
                          result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(*(_DWORD *)v48->__pad_0 + 12))( /*0x5be527*/
                                     v48,
                                     &v78,
                                     4,
                                     0);
                          if ( result < 0 ) /*0x5be52c*/
                            break; /*0x5be52c*/
                          v62 = this->q1164; /*0x5be532*/
                          if ( this->q116C < v62 /*0x5be562*/
                            || (this->q1169 || !v62)
                            && (v63 = this->q1170, v63 > 0)
                            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->q115C + 8))(
                                 this + 1111,
                                 v63 + v62,
                                 0) )
                          {
                            v64 = this->q116C; /*0x5be569*/
                            v65 = this->q1160; /*0x5be56c*/
                            this->q116C = v64 + 1; /*0x5be572*/
                            *(_DWORD *)(v65 + 4 * v64) = v78; /*0x5be579*/
                          }
                          pStm = (LPSTREAM)((char *)pStm + 1); /*0x5be587*/
                          if ( (int)pStm >= v73 ) /*0x5be58b*/
                            goto LABEL_89; /*0x5be58b*/
                        }
                      }
                    }
                  }
                }
                else
                {
                  while ( 1 ) /*0x5be3e5*/
                  {
                    v53 = *(_DWORD *)v48->__pad_0; /*0x5be3e5*/
                    v80 = 0; /*0x5be3f0*/
                    v81 = 0; /*0x5be3fa*/
                    LOBYTE(v82) = 0; /*0x5be404*/
                    v83 = -1; /*0x5be409*/
                    result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(v53 + 12))(v48, &v80, 16, 0); /*0x5be411*/
                    if ( result < 0 ) /*0x5be416*/
                      break; /*0x5be416*/
                    v54 = this->q058; /*0x5be41c*/
                    if ( this->q018 < v54 /*0x5be440*/
                      || (this->q05D || !v54)
                      && (v55 = this->q064, v55 > 0)
                      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->q014 + 8))(
                           this + 20,
                           v55 + v54,
                           0) )
                    {
                      v56 = this->q018; /*0x5be447*/
                      v57 = v80; /*0x5be44a*/
                      this->q018 = v56 + 1; /*0x5be451*/
                      v58 = (_DWORD *)(this->q054 + 16 * v56); /*0x5be45a*/
                      *v58 = v57; /*0x5be45c*/
                      v58[1] = v81; /*0x5be462*/
                      v58[2] = v82; /*0x5be469*/
                      v58[3] = v83; /*0x5be470*/
                    }
                    pStm = (LPSTREAM)((char *)pStm + 1); /*0x5be47e*/
                    if ( (int)pStm >= v75 ) /*0x5be482*/
                      goto LABEL_72; /*0x5be482*/
                  }
                }
              }
              return result; /*0x5be416*/
            }
          }
        }
      }
    }
  }
  return result; /*0x5be6b8*/
}


// ==== 0x005BE6D0  MouseClass::DrawCursor  this=MouseClass  sig=csp ====
HRESULT __thiscall MouseClass::DrawCursor(int *this, LPSTREAM pStm)
{
  IStream *v2; // esi
  HRESULT result; // eax
  int v5; // edx
  int v6; // ebp
  int *v7; // ebx
  int v8; // eax
  int v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int i; // eax
  HRESULT v14; // ebp
  IPersistStream *v15; // ebx
  int v16; // ecx
  int v17; // ebx
  int v18; // ecx
  int v19; // ebx
  int v20; // [esp+8Ch] [ebp-20h] BYREF
  int theater; // [esp+90h] [ebp-1Ch] BYREF
  IPersistStream v22; // [esp+94h] [ebp-18h] BYREF
  HRESULT v23; // [esp+98h] [ebp-14h]
  _DWORD v24[2]; // [esp+9Ch] [ebp-10h] BYREF
  char v25; // [esp+A4h] [ebp-8h]
  int v26; // [esp+A8h] [ebp-4h]

  v2 = pStm; /*0x5be6d6*/
  result = SidebarClass::saveLoadPrefix2(this, (int)pStm); /*0x5be6de*/
  if ( result >= 0 ) /*0x5be6e5*/
  {
    v5 = *(_DWORD *)v2->__pad_0; /*0x5be6f0*/
    theater = MEMORY[0xA8B230]->theater; /*0x5be702*/
    result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(v5 + 16))(v2, &theater, 4, 0); /*0x5be706*/
    if ( result >= 0 ) /*0x5be70b*/
    {
      result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(*(_DWORD *)v2->__pad_0 + 16))(v2, this, 21868, 0); /*0x5be71c*/
      if ( result >= 0 ) /*0x5be721*/
      {
        result = (*(int (__stdcall **)(IStream *, _DWORD, int, _DWORD))(*(_DWORD *)v2->__pad_0 + 16))( /*0x5be737*/
                   v2,
                   this->q01A,
                   4 * this->q06C,
                   0);
        if ( result >= 0 ) /*0x5be73c*/
        {
          v6 = 0; /*0x5be742*/
          v7 = this + 6; /*0x5be744*/
          while ( 1 ) /*0x5be755*/
          {
            result = (*(int (__stdcall **)(IStream *, int, int, _DWORD))(*(_DWORD *)v2->__pad_0 + 16))( /*0x5be755*/
                       v2,
                       *v7,
                       2 * this->q04C,
                       0);
            if ( result < 0 ) /*0x5be75a*/
              break; /*0x5be75a*/
            ++v6; /*0x5be760*/
            ++v7; /*0x5be761*/
            if ( v6 >= 13 ) /*0x5be767*/
            {
              v8 = *(_DWORD *)v2->__pad_0; /*0x5be76c*/
              v20 = this->q018; /*0x5be778*/
              result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(v8 + 16))(v2, &v20, 4, 0); /*0x5be77c*/
              if ( result >= 0 ) /*0x5be781*/
              {
                v9 = 0; /*0x5be78b*/
                if ( v20 <= 0 ) /*0x5be78f*/
                {
LABEL_13:
                  pStm = 0; /*0x5be7d8*/
                  LayerClass::CellIteratorReset(this); /*0x5be7e2*/
                  for ( i = LayerClass::CellIteratorNext(this); i; i = LayerClass::CellIteratorNext(this) ) /*0x5be7f0*/
                  {
                    v22 = *(IPersistStream *)(i + 36); /*0x5be7fc*/
                    if ( Cell::Exists(this, (MouseClass *)&v22) ) /*0x5be800*/
                      pStm = (LPSTREAM)((char *)pStm + 1); /*0x5be809*/
                  }
                  result = (*(int (__stdcall **)(IStream *, LPSTREAM *, int, _DWORD))(*(_DWORD *)v2->__pad_0 + 16))( /*0x5be824*/
                             v2,
                             &pStm,
                             4,
                             0);
                  v14 = result; /*0x5be827*/
                  v23 = result; /*0x5be82b*/
                  if ( result >= 0 ) /*0x5be82f*/
                  {
                    LayerClass::CellIteratorReset(this); /*0x5be83d*/
                    v15 = (IPersistStream *)LayerClass::CellIteratorNext(this); /*0x5be849*/
                    if ( v15 ) /*0x5be84d*/
                    {
                      do /*0x5be87f*/
                      {
                        v22 = v15[9]; /*0x5be85c*/
                        if ( Cell::Exists(this, (MouseClass *)&v22) ) /*0x5be863*/
                        {
                          OleSaveToStream(v15, v2); /*0x5be86e*/
                          pStm = (LPSTREAM)((char *)pStm - 1); /*0x5be870*/
                        }
                        v15 = (IPersistStream *)LayerClass::CellIteratorNext(this); /*0x5be87b*/
                      }
                      while ( v15 ); /*0x5be87f*/
                      v14 = v23; /*0x5be881*/
                    }
                    if ( pStm ) /*0x5be88b*/
                    {
                      return v14; /*0x5be88e*/
                    }
                    else
                    {
                      v16 = *(_DWORD *)v2->__pad_0; /*0x5be89f*/
                      pStm = (LPSTREAM)this->q116C; /*0x5be8ab*/
                      result = (*(int (__stdcall **)(IStream *, LPSTREAM *, int, _DWORD))(v16 + 16))(v2, &pStm, 4, 0); /*0x5be8af*/
                      if ( result >= 0 ) /*0x5be8b4*/
                      {
                        v17 = 0; /*0x5be8ba*/
                        if ( (int)pStm <= 0 ) /*0x5be8be*/
                        {
LABEL_29:
                          v18 = *(_DWORD *)v2->__pad_0; /*0x5be8e1*/
                          pStm = (LPSTREAM)this->q0E4; /*0x5be8f3*/
                          result = (*(int (__stdcall **)(IStream *, LPSTREAM *, int, _DWORD))(v18 + 16))( /*0x5be8f7*/
                                     v2,
                                     &pStm,
                                     4,
                                     0);
                          if ( result >= 0 ) /*0x5be8fc*/
                          {
                            v19 = 0; /*0x5be902*/
                            if ( (int)pStm <= 0 ) /*0x5be906*/
                            {
                              return 0; /*0x5be929*/
                            }
                            else
                            {
                              while ( 1 ) /*0x5be919*/
                              {
                                result = (*(int (__stdcall **)(IStream *, int, int, _DWORD))(*(_DWORD *)v2->__pad_0 + 16))( /*0x5be919*/
                                           v2,
                                           this->q0D8 + 4 * v19,
                                           4,
                                           0);
                                if ( result < 0 ) /*0x5be91e*/
                                  break; /*0x5be91e*/
                                if ( ++v19 >= (int)pStm ) /*0x5be927*/
                                  return 0; /*0x5be927*/
                              }
                            }
                          }
                        }
                        else
                        {
                          while ( 1 ) /*0x5be8d1*/
                          {
                            result = (*(int (__stdcall **)(IStream *, int, int, _DWORD))(*(_DWORD *)v2->__pad_0 + 16))( /*0x5be8d1*/
                                       v2,
                                       this->q1160 + 4 * v17,
                                       4,
                                       0);
                            if ( result < 0 ) /*0x5be8d6*/
                              break; /*0x5be8d6*/
                            if ( ++v17 >= (int)pStm ) /*0x5be8df*/
                              goto LABEL_29; /*0x5be8df*/
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  v10 = 0; /*0x5be791*/
                  while ( 1 ) /*0x5be798*/
                  {
                    v11 = this->q054 + v10; /*0x5be798*/
                    v24[0] = *(_DWORD *)v11; /*0x5be7a0*/
                    v24[1] = *(_DWORD *)(v11 + 4); /*0x5be7a7*/
                    v12 = *(_DWORD *)v2->__pad_0; /*0x5be7ae*/
                    v25 = *(_BYTE *)(v11 + 8); /*0x5be7b0*/
                    v26 = *(_DWORD *)(v11 + 12); /*0x5be7bd*/
                    result = (*(int (__stdcall **)(IStream *, _DWORD *, int, _DWORD))(v12 + 16))(v2, v24, 16, 0); /*0x5be7c1*/
                    if ( result < 0 ) /*0x5be7c6*/
                      break; /*0x5be7c6*/
                    ++v9; /*0x5be7d0*/
                    v10 += 16; /*0x5be7d1*/
                    if ( v9 >= v20 ) /*0x5be7d6*/
                      goto LABEL_13; /*0x5be7d6*/
                  }
                }
              }
              return result; /*0x5be7c6*/
            }
          }
        }
      }
    }
  }
  return result; /*0x5be831*/
}


// ==== 0x005BE940  WinMainSetup_Setup_5BE940  this=-  sig=ida-proto ====
void sub_5BE940()
{
  void *v0; // esi

  v0 = MEMORY[0xABF294]; /*0x5be941*/
  if ( MEMORY[0xABF294] ) /*0x5be949*/
  {
    FileTreeNode::Destroy(MEMORY[0xABF294]); /*0x5be94d*/
    __3_YAXPAX_Z(v0); /*0x5be953*/
    MEMORY[0xABF2DC] = 0; /*0x5be95b*/
  }
  MEMORY[0xABF294] = 0; /*0x5be962*/
}


// ==== 0x005BE970  Render_Render_5BE970  this=-  sig=csp ====
int __stdcall sub_5BE970(int a1)
{
  return MEMORY[0x82D028][7 * a1]; /*0x5be984*/
}


// ==== 0x005BE990  Render_Render_5BE990  this=-  sig=csp ====
int __stdcall sub_5BE990(int a1)
{
  return MEMORY[0x82D02C][7 * a1]; /*0x5be9a4*/
}


// ==== 0x005BE9B0  MouseClass::drawCursor  this=TabClass  sig=csp ====
_DWORD *__thiscall sub_5BE9B0(_DWORD *this, int a2)
{
  UI_Init((int)this, a2); /*0x5be9b8*/
  this->q1546 = &vt_INoticeSink; /*0x5be9bd*/
  *this = &TabClass::`vftable'; /*0x5be9c7*/
  this->q1546 = &TabClass::`vftable'; /*0x5be9cd*/
  return this; /*0x5be9d9*/
}


// ==== 0x005BE9E0  TabClass::Read  this=TabClass  sig=csp ====
TabClass *__thiscall BlowStraw_29_::Read(char *Block, char a2)
{
  char *v3; // esi
  int v4; // edi

  v3 = Block + 21484; /*0x5be9e5*/
  v4 = 4; /*0x5be9eb*/
  do /*0x5bea06*/
  {
    v3 -= 3988; /*0x5be9f5*/
    Array::ForEachReverse((int)v3, 52, 75, (int (__thiscall *)(int))nullsub_56); /*0x5bea00*/
    --v4; /*0x5bea05*/
  }
  while ( v4 ); /*0x5bea06*/
  RadarClass::Destruct(Block); /*0x5bea0a*/
  if ( (a2 & 1) != 0 ) /*0x5bea14*/
    __3_YAXPAX_Z(Block); /*0x5bea17*/
  return (TabClass *)Block; /*0x5bea1f*/
}


// ==== 0x005BEA30  MouseClass::loadCursor  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_5BEA30(_DWORD *this, int a2, int a3)
{
  void *v4; // eax

  this->Items = 0; /*0x5bea3a*/
  this->Capacity = a2; /*0x5bea41*/
  this->q030 = 1; /*0x5bea44*/
  this->q034 = 0; /*0x5bea48*/
  *this = &vt_VectorClass_HashObject_unsigned_int_unsigned_int; /*0x5bea4c*/
  if ( a2 ) /*0x5bea52*/
  {
    if ( a3 ) /*0x5bea5a*/
    {
      this->Items = a3; /*0x5bea5d*/
    }
    else
    {
      v4 = __2_YAPAXI_Z(8 * a2); /*0x5bea6e*/
      if ( !v4 ) /*0x5bea78*/
        v4 = 0; /*0x5bea81*/
      this->Items = v4; /*0x5bea83*/
      this->q034 = 1; /*0x5bea86*/
    }
  }
  *this = &vt_DynamicVectorClass_HashObject_unsigned_int_unsigned_int; /*0x5bea8a*/
  this->q005 = 10; /*0x5bea90*/
  this->q010 = 0; /*0x5bea97*/
  return this; /*0x5beaa0*/
}


// ==== 0x005BEAB0  sub_5BEAB0  this=-  sig=ida-proto ====
int sub_5BEAB0()
{
  MEMORY[0xABF2E8] = 0; /*0x5beab2*/
  MEMORY[0xABF2EC] = 0; /*0x5beab7*/
  MEMORY[0xABF2F0] = 0; /*0x5beabc*/
  MEMORY[0xABF2F4] = 0; /*0x5beac1*/
  return 0; /*0x5beac6*/
}


// ==== 0x005BEAD0  sub_5BEAD0  this=-  sig=ida-proto ====
void sub_5BEAD0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5beadc*/
  MEMORY[0xABF300] = Math::Sqrt(v0 + v0); /*0x5beaee*/
}


// ==== 0x005BEB00  sub_5BEB00  this=-  sig=ida-proto ====
void sub_5BEB00()
{
  MEMORY[0xABF350] = MEMORY[0xABF300] / 60.0; /*0x5beb0c*/
}


// ==== 0x005BEB20  sub_5BEB20  this=-  sig=ida-proto ====
void sub_5BEB20()
{
  MEMORY[0xABF338] = 1.0 / MEMORY[0xABF350]; /*0x5beb2c*/
}


// ==== 0x005BEB40  sub_5BEB40  this=-  sig=ida-proto ====
void sub_5BEB40()
{
  MEMORY[0xABF330] = 0.0174532925199433 * 45.0; /*0x5beb4c*/
}


// ==== 0x005BEB60  sub_5BEB60  this=-  sig=ida-proto ====
void sub_5BEB60()
{
  MEMORY[0xABF308] = 0.0174532925199433 * 60.0; /*0x5beb6c*/
}


// ==== 0x005BEB80  sub_5BEB80  this=-  sig=ida-proto ====
void sub_5BEB80()
{
  MEMORY[0xABF2E0] = 0.0174532925199433 * 90.0; /*0x5beb8c*/
}


// ==== 0x005BEBA0  sub_5BEBA0  this=-  sig=ida-proto ====
__int64 sub_5BEBA0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABF2E0] - MEMORY[0xABF308]); /*0x5bebb2*/
  result = Math::RoundToInt(v0 * MEMORY[0xABF300] * 0.5); /*0x5bebc6*/
  MEMORY[0xABF358] = result; /*0x5bebcb*/
  return result; /*0x5bebd0*/
}


// ==== 0x005BEBE0  sub_5BEBE0  this=-  sig=ida-proto ====
void sub_5BEBE0()
{
  MEMORY[0xABF310] = Math::ArcTan((double)MEMORY[0xABF358] * 0.00390625); /*0x5bebf7*/
}


// ==== 0x005BEC10  sub_5BEC10  this=-  sig=ida-proto ====
void sub_5BEC10()
{
  MEMORY[0xABF328] = Math::ArcTan((double)(2 * MEMORY[0xABF358]) / MEMORY[0xABF300]); /*0x5bec32*/
}


// ==== 0x005BEC40  sub_5BEC40  this=-  sig=ida-proto ====
__int64 sub_5BEC40()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABF358]) + 0.5); /*0x5bec5b*/
  MEMORY[0xABF34C] = result; /*0x5bec60*/
  return result; /*0x5bec66*/
}


// ==== 0x005BEC70  sub_5BEC70  this=-  sig=ida-proto ====
int sub_5BEC70()
{
  MEMORY[0xABF2F8] = 0; /*0x5bec72*/
  MEMORY[0xABF2FA] = 0; /*0x5bec78*/
  return 0; /*0x5bec7e*/
}


// ==== 0x005BEC80  sub_5BEC80  this=-  sig=ida-proto ====
int sub_5BEC80()
{
  MEMORY[0xABF318] = 0; /*0x5bec82*/
  MEMORY[0xABF31C] = 0; /*0x5bec87*/
  MEMORY[0xABF320] = 0; /*0x5bec8c*/
  return 0; /*0x5bec91*/
}


// ==== 0x005BECA0  sub_5BECA0  this=-  sig=ida-proto ====
int sub_5BECA0()
{
  MEMORY[0xABF348] = 0; /*0x5beca5*/
  MEMORY[0xABF340] = 128; /*0x5becaf*/
  MEMORY[0xABF344] = 128; /*0x5becb4*/
  return 128; /*0x5becb9*/
}


// ==== 0x005BECC0  ObjectClass::method_5BECC0  this=ObjectClass  sig=csp ====
int __thiscall sub_5BECC0(char *this)
{
  int v1; // esi
  int result; // eax
  char *v3; // edi
  int v4; // ebp
  int v5; // edx
  char *v6; // eax
  char v7; // bl

  v1 = 0; /*0x5becc9*/
  result = 256 - (_DWORD)this; /*0x5beccb*/
  v3 = this; /*0x5becce*/
  do /*0x5bed0c*/
  {
    v4 = v1 + 1; /*0x5becd4*/
    v5 = v1 + 1; /*0x5becdd*/
    if ( v1 + 1 < 256 ) /*0x5becdf*/
    {
      v6 = &v3[result + v1 + (_DWORD)this]; /*0x5bece5*/
      do /*0x5becf8*/
      {
        v7 = *v6; /*0x5bece7*/
        v6 += 256; /*0x5bece9*/
        v3[v5++] = v7; /*0x5becee*/
      }
      while ( v5 < 256 ); /*0x5becf8*/
      result = 256 - (_DWORD)this; /*0x5becfa*/
    }
    ++v1; /*0x5becfe*/
    v3 += 256; /*0x5bed00*/
  }
  while ( v4 < 255 ); /*0x5bed0c*/
  return result; /*0x5bed0e*/
}


// ==== 0x005BED40  Movie::Play  this=Movie  sig=csp ====
void Movie::Play(CCINIClass *aP0, int a2, CCINIClass *aP2, IUnknown *aP3, char a5, char a6, char a7)
{
  int v7; // edx
  const char *v8; // ecx
  char *v9; // eax
  Frame *v10; // ecx
  Frame *v11; // ecx
  int eax16a; // eax
  ObjectClass *VQMovie; // eax
  ObjectClass *v12; // esi
  bool v15; // al
  double v16; // st7
  int v17; // eax
  Frame *v18; // ecx
  Frame *v19; // ecx
  int v20; // [esp+10h] [ebp-140h]
  int fallRate; // [esp+14h] [ebp-13Ch]
  _DWORD v22[13]; // [esp+1Ch] [ebp-134h] BYREF
  char Str[256]; // [esp+50h] [ebp-100h] BYREF

  v20 = v7; /*0x5bed49*/
  if ( Render_Play(v8, Str, 1) && !*(_DWORD *)&HouseClass_Player.__pad_5568[8068] ) /*0x5bed6a*/
  {
    Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]); /*0x5bed76*/
    v9 = strrchr(Str, 46); /*0x5bed82*/
    if ( !v9 || _strcmpi(v9, aBik) ) /*0x5bed98*/
    {
      Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]); /*0x5bef0b*/
      eax16a = Math::RoundToInt(*(float *)&HouseClass_Player.__pad_5568[22760] * 255.0); /*0x5bef24*/
      VQMovie = LoadVQMovie(Str, *(int **)&stru_87C374.__pad_579C[22528], 0, 0, 0, 0, 0, 0, 0, 0, eax16a, 1); /*0x5bef56*/
      v12 = VQMovie; /*0x5bef5b*/
      if ( VQMovie ) /*0x5bef61*/
      {
        if ( MovieClass::GetWidth(*(_DWORD **)VQMovie->__pad_0) >= 320 /*0x5bef81*/
          || MovieClass::GetHeight(*(_DWORD **)v12->__pad_0) >= 200 )
        {
          v15 = (_BYTE)a2 == 1 && HouseClass_Player.__pad_5568[22752] == 1; /*0x5befba*/
          if ( stru_89E138.__pad_14B0[6150] == 1 && v15 ) /*0x5befcb*/
          {
            fallRate = v12->fallRate; /*0x5befd7*/
            if ( fallRate < *(int *)&stru_87C374.__pad_579C[21672] /*0x5befec*/
              && (int)v12->nextObject < *(int *)&stru_87C374.__pad_579C[21676] )
            {
              v16 = (double)*(int *)&stru_87C374.__pad_579C[21672]; /*0x5befee*/
              v12->ambientSoundController[0] = *(_DWORD *)&stru_87C374.__pad_579C[21672]; /*0x5beff4*/
              v17 = Math::RoundToInt(v16 / (double)fallRate); /*0x5bf001*/
              v12->attachedTag = 0; /*0x5bf008*/
              v12->ambientSoundController[1] = v17; /*0x5bf00b*/
              v12->attachedBomb = (void *)((*(_DWORD *)&stru_87C374.__pad_579C[21676] - v17) / 2); /*0x5bf01d*/
              Debug::Log(); /*0x5bf02b*/
            }
          }
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 12))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x5bf03b*/
          if ( (_BYTE)aP2 ) /*0x5bf045*/
          {
            (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 24))( /*0x5bf050*/
              *(_DWORD *)&stru_87C374.__pad_579C[22524],
              0);
            LOBYTE(v18) = 1; /*0x5bf059*/
            Frame::Present(v18, 0); /*0x5bf05c*/
          }
          if ( !*((_BYTE *)&g_MatrixTransformState + 1356) ) /*0x5bf067*/
          {
            AudioFrame::CounterInc(); /*0x5bf069*/
            AudioQueue::IncrementPriority(); /*0x5bf06e*/
            AudioQueue::ReleaseBuffers(); /*0x5bf073*/
            RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3892], 0x2000); /*0x5bf083*/
            RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3884], 0x2000); /*0x5bf093*/
            *((_BYTE *)&g_MatrixTransformState + 1356) = 1; /*0x5bf098*/
          }
          sub_406EA0(); /*0x5bf09f*/
          CreateDirectSoundBuffer(44100, 16, 2); /*0x5bf0b0*/
          RenderMovieFrame((int)v12, 1, v20, 0); /*0x5bf0bf*/
          sub_40A850(); /*0x5bf0c4*/
          sub_406EC0(); /*0x5bf0c9*/
          if ( *((_BYTE *)&g_MatrixTransformState + 1356) ) /*0x5bf0d4*/
          {
            AudioTimer::DecrementAll(); /*0x5bf0d6*/
            ProcessAudioTimer(); /*0x5bf0db*/
            Mixer::RequestAllBuffers(); /*0x5bf0e0*/
            RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3892], 0x4000); /*0x5bf0f0*/
            RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3884], 0x4000); /*0x5bf100*/
            AudioMixer::Pump(); /*0x5bf105*/
            *((_BYTE *)&g_MatrixTransformState + 1356) = 0; /*0x5bf10a*/
          }
          MovieContext::Cleanup(v12); /*0x5bf112*/
          BinkMovie::Cleanup(v12); /*0x5bf119*/
          __3_YAXPAX_Z(v12); /*0x5bf11f*/
          if ( (_BYTE)aP0 == 1 ) /*0x5bf130*/
          {
            (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 24))( /*0x5bf13b*/
              *(_DWORD *)&stru_87C374.__pad_579C[22524],
              0);
            LOBYTE(v19) = 1; /*0x5bf144*/
            Frame::Present(v19, 0); /*0x5bf147*/
          }
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 16))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x5bf154*/
          MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2); /*0x5bf15e*/
          Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]); /*0x5bf169*/
        }
        else
        {
          MovieContext::Cleanup(v12); /*0x5bef85*/
          BinkMovie::Cleanup(v12); /*0x5bef8c*/
          __3_YAXPAX_Z(v12); /*0x5bef92*/
        }
      }
    }
    else
    {
      Debug::Log(); /*0x5bedad*/
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 12))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x5bedbd*/
      if ( (_BYTE)aP2 ) /*0x5bedc7*/
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 24))( /*0x5bedd2*/
          *(_DWORD *)&stru_87C374.__pad_579C[22524],
          0);
        LOBYTE(v10) = 1; /*0x5beddb*/
        Frame::Present(v10, 0); /*0x5bedde*/
      }
      BinkMovie::Close(v22, Str); /*0x5bedec*/
      if ( (_BYTE)aP3 == 1 ) /*0x5bedf9*/
        LOBYTE(v22[0]) = 1; /*0x5bedfb*/
      if ( !*((_BYTE *)&g_MatrixTransformState + 1356) ) /*0x5bee06*/
      {
        AudioFrame::CounterInc(); /*0x5bee08*/
        AudioQueue::IncrementPriority(); /*0x5bee0d*/
        AudioQueue::ReleaseBuffers(); /*0x5bee12*/
        RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3892], 0x2000); /*0x5bee22*/
        RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3884], 0x2000); /*0x5bee32*/
        *((_BYTE *)&g_MatrixTransformState + 1356) = 1; /*0x5bee37*/
      }
      sub_406EA0(); /*0x5bee3e*/
      CreateDirectSoundBuffer(44100, 16, 2); /*0x5bee4f*/
      BinkMovie::Play(v22); /*0x5bee58*/
      sub_40A850(); /*0x5bee5d*/
      sub_406EC0(); /*0x5bee62*/
      if ( *((_BYTE *)&g_MatrixTransformState + 1356) ) /*0x5bee6d*/
      {
        AudioTimer::DecrementAll(); /*0x5bee6f*/
        ProcessAudioTimer(); /*0x5bee74*/
        Mixer::RequestAllBuffers(); /*0x5bee79*/
        RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3892], 0x4000); /*0x5bee89*/
        RequestBufferMixer(*(unsigned int **)&stru_87C374.__pad_14B0[3884], 0x4000); /*0x5bee99*/
        AudioMixer::Pump(); /*0x5bee9e*/
        *((_BYTE *)&g_MatrixTransformState + 1356) = 0; /*0x5beea3*/
      }
      if ( (_BYTE)aP0 == 1 ) /*0x5beeb1*/
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 24))( /*0x5beebc*/
          *(_DWORD *)&stru_87C374.__pad_579C[22524],
          0);
        LOBYTE(v11) = 1; /*0x5beec5*/
        Frame::Present(v11, 0); /*0x5beec8*/
      }
      Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]); /*0x5beed3*/
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 16))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x5beee0*/
      MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2); /*0x5beeea*/
      BinkMovie::Stop((int)v22); /*0x5beef3*/
    }
  }
}


// ==== 0x005BF260  Movie::PlayWrapper  this=RandomStruct  sig=csp ====
char __thiscall Movie::Update(int this)
{
  int IsSoundEnabled; // eax
  int v3; // ecx

  IsSoundEnabled = Audio::IsSoundEnabled(); /*0x7209d3*/
  if ( IsSoundEnabled ) /*0x7209da*/
  {
    LOBYTE(IsSoundEnabled) = MEMORY[0xA8D63C].__pad_14B0[632]; /*0x7209e0*/
    if ( !MEMORY[0xA8D63C].__pad_14B0[632] ) /*0x7209e7*/
    {
      LOBYTE(IsSoundEnabled) = MEMORY[0xA8D63C].__pad_14B0[392]; /*0x7209ed*/
      if ( MEMORY[0xA8D63C].__pad_14B0[392] ) /*0x7209f4*/
      {
        IsSoundEnabled = *(_DWORD *)(this + 12); /*0x7209fa*/
        if ( IsSoundEnabled > 0 ) /*0x7209ff*/
        {
          v3 = *(_DWORD *)(this + 44); /*0x720a01*/
          if ( !v3 ) /*0x720a06*/
            goto LABEL_10; /*0x720a06*/
          if ( *(_BYTE *)(this + 17) && !AudioSample::IsBuffering(v3) ) /*0x720a0f*/
            Audio::Release(*(_DWORD **)(this + 44)); /*0x720a1b*/
          LOBYTE(IsSoundEnabled) = Audio::IsSoundPlaying(*(_DWORD **)(this + 44)) != 0; /*0x720a2a*/
          if ( !(_BYTE)IsSoundEnabled ) /*0x720a2f*/
          {
LABEL_10:
            IsSoundEnabled = *(_DWORD *)(this + 8); /*0x720a31*/
            if ( IsSoundEnabled != -1 && IsSoundEnabled != -3 && !*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] ) /*0x720a46*/
            {
              if ( IsSoundEnabled == -2 ) /*0x720a4b*/
              {
                *(_DWORD *)(this + 8) = Movie::SelectNextBuildableType(this, *(AnimClass **)(this + 4)); /*0x720a5e*/
                Debug::Log(); /*0x720a61*/
              }
              LOBYTE(IsSoundEnabled) = ThemeClass::Play((int *)this, *(Movie **)(this + 8)); /*0x720a6f*/
              *(_DWORD *)(this + 8) = -2; /*0x720a74*/
            }
          }
        }
      }
    }
  }
  return IsSoundEnabled; /*0x720a7b*/
}


// ==== 0x005BF360  ObjectClass::method_5BF360  this=ObjectClass  sig=csp ====
int __thiscall sub_5BF360(int this)
{
  int result; // eax

  if ( this ) /*0x5bf362*/
    return MessageListClass::AddMessage( /*0x5bf37e*/
             MEMORY[0xA8BC60],
             0,
             0,
             *(wchar_t **)(this + 20),
             0,
             16454,
             *(_DWORD *)(this + 4),
             0);
  return result; /*0x5bf383*/
}


// ==== 0x005BF390  EnqueueAsyncIOMovie  this=RandomStruct  sig=ida-proto ====
void __fastcall sub_5BF390(int a1, char a2)
{
  int v3; // ecx
  _DWORD *v4; // eax
  _BYTE *v5; // esi
  int v6; // eax

  if ( a1 >= 0 && a1 < MEMORY[0xABF3A0] ) /*0x5bf3a2*/
  {
    v3 = *((_DWORD *)MEMORY[0xABF394] + a1); /*0x5bf3ad*/
    if ( !MEMORY[0xA8B238] ) /*0x5bf3b7*/
    {
      v4 = CreateMovie(v3, MEMORY[0x887300], 0); /*0x5bf3c5*/
      v5 = v4; /*0x5bf3ca*/
      if ( v4 ) /*0x5bf3ce*/
      {
        (*(void (__thiscall **)(_DWORD *, int, int))(*v4 + 24))(v4, MEMORY[0x8809D8] - 3, MEMORY[0x8809DC] - 1); /*0x5bf3e5*/
        (*(void (__thiscall **)(_BYTE *, int (*)()))(*(_DWORD *)v5 + 32))(v5, sub_5BF360); /*0x5bf3f1*/
        v5[4] = a2; /*0x5bf3f4*/
        if ( g_AsyncIOState < dword_B45B60 /*0x5bf42b*/
          || (byte_B45B65 || !dword_B45B60)
          && dword_B45B6C > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B45B58 + 8))(
               &dword_B45B58,
               dword_B45B60 + dword_B45B6C,
               0) )
        {
          v6 = g_AsyncIOState++; /*0x5bf438*/
          *((_DWORD *)AsyncIO_Instance + v6) = v5; /*0x5bf447*/
        }
      }
    }
  }
}


// ==== 0x005BF450  AsyncIO::Shutdown  this=AsyncIO  sig=csp ====
char AsyncIO_Shutdown()
{
  int v0; // esi
  _DWORD *i; // eax
  void (__thiscall ***v2)(_DWORD, int); // ecx
  char result; // al

  v0 = 0; /*0x5bf459*/
  for ( i = AsyncIO_Instance; v0 < g_AsyncIOState; ++v0 ) /*0x5bf462*/
  {
    v2 = (void (__thiscall ***)(_DWORD, int))i[v0]; /*0x5bf464*/
    if ( v2 ) /*0x5bf469*/
    {
      (**v2)(v2, 1); /*0x5bf473*/
      i = AsyncIO_Instance; /*0x5bf475*/
    }
  }
  g_AsyncIOState = 0; /*0x5bf487*/
  if ( i && byte_B45B65 ) /*0x5bf495*/
  {
    __3_YAXPAX_Z(i); /*0x5bf498*/
    AsyncIO_Instance = 0; /*0x5bf4a0*/
  }
  result = MEMORY[0xABF35C]; /*0x5bf4a6*/
  byte_B45B65 = 0; /*0x5bf4ab*/
  dword_B45B60 = 0; /*0x5bf4b3*/
  if ( MEMORY[0xABF35C] ) /*0x5bf4b9*/
  {
    AudioTimer::DecrementAll(); /*0x5bf4bb*/
    ProcessAudioTimer(); /*0x5bf4c0*/
    Mixer::RequestAllBuffers(); /*0x5bf4c5*/
    RequestBufferMixer((unsigned int *)MEMORY[0x87E758], 0x4000); /*0x5bf4d5*/
    RequestBufferMixer((unsigned int *)MEMORY[0x87E750], 0x4000); /*0x5bf4e5*/
    result = AudioMixer::Pump(); /*0x5bf4ea*/
    MEMORY[0xABF35C] = 0; /*0x5bf4ef*/
  }
  return result; /*0x5bf4f5*/
}


// ==== 0x005BF500  AsyncIO::Read  this=AsyncIO  sig=csp ====
int __thiscall AsyncIO_Read(void *this)
{
  int result; // eax

  result = g_AsyncIOState; /*0x5bf500*/
  if ( g_AsyncIOState > 0 ) /*0x5bf507*/
    return (*(int (__thiscall **)(_DWORD, void *))(**(_DWORD **)AsyncIO_Instance + 12))( /*0x5bf515*/
             *(_DWORD *)AsyncIO_Instance,
             this);
  return result; /*0x5bf518*/
}


// ==== 0x005BF530  Game_Process  this=-  sig=ida-proto ====
char sub_5BF530()
{
  char result; // al

  result = MEMORY[0xABF35C]; /*0x5bf530*/
  if ( MEMORY[0xABF35C] ) /*0x5bf537*/
  {
    AudioTimer::DecrementAll(); /*0x5bf539*/
    ProcessAudioTimer(); /*0x5bf53e*/
    Mixer::RequestAllBuffers(); /*0x5bf543*/
    RequestBufferMixer((unsigned int *)MEMORY[0x87E758], 0x4000); /*0x5bf553*/
    RequestBufferMixer((unsigned int *)MEMORY[0x87E750], 0x4000); /*0x5bf563*/
    result = AudioMixer::Pump(); /*0x5bf568*/
    MEMORY[0xABF35C] = 0; /*0x5bf56d*/
  }
  return result; /*0x5bf574*/
}


// ==== 0x005BF580  Map_Process  this=-  sig=ida-proto ====
char sub_5BF580()
{
  char result; // al

  result = MEMORY[0xABF35C]; /*0x5bf580*/
  if ( !MEMORY[0xABF35C] ) /*0x5bf587*/
  {
    AudioFrame::CounterInc(); /*0x5bf589*/
    AudioQueue::IncrementPriority(); /*0x5bf58e*/
    AudioQueue::ReleaseBuffers(); /*0x5bf593*/
    RequestBufferMixer((unsigned int *)MEMORY[0x87E758], 0x2000); /*0x5bf5a3*/
    result = RequestBufferMixer((unsigned int *)MEMORY[0x87E750], 0x2000); /*0x5bf5b3*/
    MEMORY[0xABF35C] = 1; /*0x5bf5b8*/
  }
  return result; /*0x5bf5bf*/
}


// ==== 0x005BF5C0  sub_5BF5C0  this=-  sig=ida-proto ====
int sub_5BF5C0()
{
  MEMORY[0xABF368] = 0; /*0x5bf5c2*/
  MEMORY[0xABF36C] = 0; /*0x5bf5c7*/
  MEMORY[0xABF370] = 0; /*0x5bf5cc*/
  MEMORY[0xABF374] = 0; /*0x5bf5d1*/
  return 0; /*0x5bf5d6*/
}


// ==== 0x005BF5E0  sub_5BF5E0  this=-  sig=ida-proto ====
void sub_5BF5E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5bf5ec*/
  MEMORY[0xABF380] = Math::Sqrt(v0 + v0); /*0x5bf5fe*/
}


// ==== 0x005BF610  sub_5BF610  this=-  sig=ida-proto ====
void sub_5BF610()
{
  MEMORY[0xABF3E8] = MEMORY[0xABF380] / 60.0; /*0x5bf61c*/
}


// ==== 0x005BF630  sub_5BF630  this=-  sig=ida-proto ====
void sub_5BF630()
{
  MEMORY[0xABF3D0] = 1.0 / MEMORY[0xABF3E8]; /*0x5bf63c*/
}


// ==== 0x005BF650  sub_5BF650  this=-  sig=ida-proto ====
void sub_5BF650()
{
  MEMORY[0xABF3C8] = 0.0174532925199433 * 45.0; /*0x5bf65c*/
}


// ==== 0x005BF670  sub_5BF670  this=-  sig=ida-proto ====
void sub_5BF670()
{
  MEMORY[0xABF388] = 0.0174532925199433 * 60.0; /*0x5bf67c*/
}


// ==== 0x005BF690  sub_5BF690  this=-  sig=ida-proto ====
void sub_5BF690()
{
  MEMORY[0xABF360] = 0.0174532925199433 * 90.0; /*0x5bf69c*/
}


// ==== 0x005BF6B0  sub_5BF6B0  this=-  sig=ida-proto ====
__int64 sub_5BF6B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABF360] - MEMORY[0xABF388]); /*0x5bf6c2*/
  result = Math::RoundToInt(v0 * MEMORY[0xABF380] * 0.5); /*0x5bf6d6*/
  MEMORY[0xABF3F0] = result; /*0x5bf6db*/
  return result; /*0x5bf6e0*/
}


// ==== 0x005BF6F0  sub_5BF6F0  this=-  sig=ida-proto ====
void sub_5BF6F0()
{
  MEMORY[0xABF3A8] = Math::ArcTan((double)MEMORY[0xABF3F0] * 0.00390625); /*0x5bf707*/
}


// ==== 0x005BF720  sub_5BF720  this=-  sig=ida-proto ====
void sub_5BF720()
{
  MEMORY[0xABF3C0] = Math::ArcTan((double)(2 * MEMORY[0xABF3F0]) / MEMORY[0xABF380]); /*0x5bf742*/
}


// ==== 0x005BF750  sub_5BF750  this=-  sig=ida-proto ====
__int64 sub_5BF750()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABF3F0]) + 0.5); /*0x5bf76b*/
  MEMORY[0xABF3E4] = result; /*0x5bf770*/
  return result; /*0x5bf776*/
}


// ==== 0x005BF780  sub_5BF780  this=-  sig=ida-proto ====
int sub_5BF780()
{
  MEMORY[0xABF378] = 0; /*0x5bf782*/
  MEMORY[0xABF37A] = 0; /*0x5bf788*/
  return 0; /*0x5bf78e*/
}


// ==== 0x005BF790  sub_5BF790  this=-  sig=ida-proto ====
int sub_5BF790()
{
  MEMORY[0xABF3B0] = 0; /*0x5bf792*/
  MEMORY[0xABF3B4] = 0; /*0x5bf797*/
  MEMORY[0xABF3B8] = 0; /*0x5bf79c*/
  return 0; /*0x5bf7a1*/
}


// ==== 0x005BF7B0  sub_5BF7B0  this=-  sig=ida-proto ====
int sub_5BF7B0()
{
  MEMORY[0xABF3E0] = 0; /*0x5bf7b5*/
  MEMORY[0xABF3D8] = 128; /*0x5bf7bf*/
  MEMORY[0xABF3DC] = 128; /*0x5bf7c4*/
  return 128; /*0x5bf7c9*/
}


// ==== 0x005BF7D0  sub_5BF7D0  this=-  sig=ida-proto ====
int sub_5BF7D0()
{
  MEMORY[0xABF394] = 0; /*0x5bf7d7*/
  MEMORY[0xABF398] = 0; /*0x5bf7dc*/
  MEMORY[0xABF39C] = 1; /*0x5bf7e1*/
  MEMORY[0xABF39D] = 0; /*0x5bf7e8*/
  MEMORY[0xABF390] = (int)&vt_DynamicVectorClass_char_const; /*0x5bf7ed*/
  MEMORY[0xABF3A4] = 10; /*0x5bf7f7*/
  MEMORY[0xABF3A0] = 0; /*0x5bf801*/
  return atexit(sub_5BF810); /*0x5bf80c*/
}


// ==== 0x005BF810  sub_5BF810  this=-  sig=ida-proto ====
void __cdecl sub_5BF810()
{
  MEMORY[0xABF390] = (int)&vt_VectorClass_char_const; /*0x5bf818*/
  if ( MEMORY[0xABF394] && MEMORY[0xABF39D] ) /*0x5bf82c*/
  {
    __3_YAXPAX_Z(MEMORY[0xABF394]); /*0x5bf82f*/
    MEMORY[0xABF394] = 0; /*0x5bf837*/
  }
  MEMORY[0xABF39D] = 0; /*0x5bf83d*/
  MEMORY[0xABF398] = 0; /*0x5bf843*/
}


// ==== 0x005BF850  sub_5BF850  this=-  sig=ida-proto ====
int sub_5BF850()
{
  int v0; // esi
  int v1; // edi
  int *v2; // ebx
  int v3; // eax
  int v4; // ebp
  int v5; // eax
  unsigned int v7; // [esp-Ch] [ebp-1Ch]
  int v8; // [esp-8h] [ebp-18h]

  v0 = *(_DWORD *)(MEMORY[0xABF3F4] + 8); /*0x5bf858*/
  v1 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v0 + 92))(v0, 0); /*0x5bf869*/
  v2 = *(int **)MEMORY[0xABF3F4]; /*0x5bf873*/
  v8 = *(_DWORD *)(MEMORY[0xABF3F4] + 40); /*0x5bf87a*/
  v7 = *(_DWORD *)(MEMORY[0xABF3F4] + 36); /*0x5bf87b*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v0 + 128))(v0); /*0x5bf87e*/
  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v0 + 116))(v0, v3); /*0x5bf88c*/
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v0 + 112))(v0); /*0x5bf892*/
  Render_Load_759EB0(v2, 0, v4 / v5, v7, v8, 0); /*0x5bf8a1*/
  return v1; /*0x5bf8a8*/
}


// ==== 0x005BF8B0  ObjectClass::method_5BF8B0  this=ObjectClass  sig=csp ====
int sub_5BF8B0()
{
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(MEMORY[0xABF3F4] + 8) + 96))(*(_DWORD *)(MEMORY[0xABF3F4] + 8));
}


// ==== 0x005BF8C0  ObjectClass::method_5BF8C0  this=ObjectClass  sig=csp ====
char sub_5BF8C0()
{
  char result; // al
  int v1; // edx
  int v2; // ecx
  int v3; // edi
  _DWORD v4[4]; // [esp+0h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+10h] [ebp-10h] BYREF

  result = TestBitArray(15); /*0x5bf8c8*/
  if ( !result ) /*0x5bf8cf*/
  {
    GetClientRect(g_hWnd, &Rect); /*0x5bf8e0*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5bf8f1*/
    v1 = *(_DWORD *)(MEMORY[0xABF3F4] + 64); /*0x5bf90c*/
    v2 = Rect.top + *(_DWORD *)(MEMORY[0xABF3F4] + 56); /*0x5bf90f*/
    v3 = *(_DWORD *)(MEMORY[0xABF3F4] + 52); /*0x5bf911*/
    v4[2] = *(_DWORD *)(MEMORY[0xABF3F4] + 60); /*0x5bf914*/
    v4[1] = v2; /*0x5bf91a*/
    v4[0] = Rect.left + v3; /*0x5bf924*/
    v4[3] = v1; /*0x5bf928*/
    return (*(int (__thiscall **)(int, _DWORD *, _DWORD, int, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))( /*0x5bf93d*/
             MEMORY[0x887308],
             v4,
             *(_DWORD *)(MEMORY[0xABF3F4] + 8),
             MEMORY[0xABF3F4] + 36,
             0,
             1);
  }
  return result; /*0x5bf943*/
}


// ==== 0x005BF950  ObjectClass::method_5BF950  this=ObjectClass  sig=csp ====
char __usercall sub_5BF950@<al>(int a1@<ebx>, int a2@<edi>, int a3@<esi>)
{
  char result; // al
  _DWORD *v4; // eax
  int v5; // esi
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // esi
  int v10; // edi
  _DWORD v11[2]; // [esp+24h] [ebp-44h] BYREF
  int v12; // [esp+2Ch] [ebp-3Ch]
  int v13; // [esp+30h] [ebp-38h]
  _DWORD v14[4]; // [esp+34h] [ebp-34h] BYREF
  _DWORD v15[4]; // [esp+44h] [ebp-24h] BYREF
  struct tagRECT Rect; // [esp+54h] [ebp-14h] BYREF
  _BYTE v17[4]; // [esp+64h] [ebp-4h] BYREF

  result = TestBitArray(15); /*0x5bf958*/
  if ( !result ) /*0x5bf95f*/
  {
    (*(void (__thiscall **)(int, int, _DWORD, int, _DWORD, int, int, int, int))(*(_DWORD *)MEMORY[0x88730C] + 8))( /*0x5bf983*/
      MEMORY[0x88730C],
      MEMORY[0xABF3F4] + 36,
      *(_DWORD *)(MEMORY[0xABF3F4] + 8),
      MEMORY[0xABF3F4] + 36,
      0,
      1,
      a2,
      a3,
      a1);
    v4 = *(_DWORD **)(MEMORY[0xABF3F4] + 72); /*0x5bf98c*/
    if ( v4 ) /*0x5bf991*/
    {
      if ( *v4 ) /*0x5bf997*/
      {
        v5 = v4[4]; /*0x5bf9a0*/
        v6 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 120))(v5, v17); /*0x5bf9ac*/
        v11[0] = *v6; /*0x5bf9b1*/
        v11[1] = v6[1]; /*0x5bf9b8*/
        v12 = v6[2]; /*0x5bf9bf*/
        v13 = v6[3]; /*0x5bf9cc*/
        v14[0] = ((*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88730C] + 124))(MEMORY[0x88730C]) - v12) / 2; /*0x5bf9e6*/
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88730C] + 128))(MEMORY[0x88730C]); /*0x5bf9ec*/
        v14[2] = v12; /*0x5bf9fc*/
        v14[1] = v7 - v13; /*0x5bfa04*/
        v14[3] = v13; /*0x5bfa15*/
        (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, int, int))(*(_DWORD *)MEMORY[0x88730C] + 8))( /*0x5bfa21*/
          MEMORY[0x88730C],
          v14,
          v5,
          v11,
          1,
          1);
      }
    }
    GetClientRect(g_hWnd, &Rect); /*0x5bfa30*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5bfa41*/
    v8 = *(_DWORD *)(MEMORY[0xABF3F4] + 64); /*0x5bfa59*/
    v9 = *(_DWORD *)(MEMORY[0xABF3F4] + 60); /*0x5bfa5c*/
    v10 = *(_DWORD *)(MEMORY[0xABF3F4] + 52); /*0x5bfa61*/
    v15[1] = Rect.top + *(_DWORD *)(MEMORY[0xABF3F4] + 56); /*0x5bfa6f*/
    v15[0] = Rect.left + v10; /*0x5bfa7c*/
    v15[2] = v9; /*0x5bfa80*/
    v15[3] = v8; /*0x5bfa84*/
    return (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)MEMORY[0x887308] + 8))( /*0x5bfa8f*/
             MEMORY[0x887308],
             v15,
             MEMORY[0x88730C]);
  }
  return result; /*0x5bfa95*/
}


// ==== 0x005BFAA0  LoadVQMovie  this=ObjectClass  sig=csp ====
ObjectClass *__fastcall LoadVQMovie(
        char *Source,
        int *a2,
        int a3,
        int a4,
        IUnknown *a5,
        int a6,
        int a7,
        int a8,
        IUnknown *a9,
        int a10,
        int a11,
        char a12)
{
  int v14; // eax
  ObjectClass *v15; // esi
  CCFileClass *v16; // eax
  char v17; // al
  IUnknown *v18; // eax
  char *v19; // eax
  char *v20; // eax
  int Height; // ebp
  int v23; // kr04_4
  int v24; // eax
  int v25; // edx
  int v26; // ebp
  int *v27; // eax
  void *eax30a; // eax
  int v29; // ecx
  char *v30; // ebp
  IUnknown *v31; // ecx
  void *v32; // eax
  IUnknown *v28; // edx
  int v34; // ebp
  int v35; // eax
  int Status; // eax
  int v37; // ebx
  int v38; // eax
  _DWORD *SurfaceTracker; // eax
  IUnknown *v40; // [esp-Ch] [ebp-BCh]
  IUnknown *aP2; // [esp+10h] [ebp-A0h]
  IUnknown *aP2a; // [esp+10h] [ebp-A0h]
  IUnknown *aP5; // [esp+14h] [ebp-9Ch]
  IUnknown *aP5a; // [esp+14h] [ebp-9Ch]
  bool v45; // [esp+1Bh] [ebp-95h]
  int v46; // [esp+1Ch] [ebp-94h] BYREF
  IUnknown *v41; // [esp+20h] [ebp-90h]
  int v48; // [esp+24h] [ebp-8Ch]
  int v49; // [esp+28h] [ebp-88h]
  int _759EA0; // [esp+2Ch] [ebp-84h]
  char *FullPath; // [esp+30h] [ebp-80h]
  int v52[4]; // [esp+34h] [ebp-7Ch] BYREF
  _DWORD v53[22]; // [esp+44h] [ebp-6Ch] BYREF
  _BYTE v54[12]; // [esp+9Ch] [ebp-14h] BYREF
  int v55; // [esp+A8h] [ebp-8h]

  FullPath = Source; /*0x5bfab2*/
  aP5 = 0; /*0x5bfab6*/
  v14 = __2_YAPAXI_Z(0x4Cu); /*0x5bfaba*/
  v15 = (ObjectClass *)v14; /*0x5bfabf*/
  if ( !v14 ) /*0x5bfac6*/
    return 0; /*0x5bfac6*/
  *(_DWORD *)v14 = 0; /*0x5bfacf*/
  *(_DWORD *)(v14 + 4) = -1; /*0x5bfad1*/
  *(_DWORD *)(v14 + 8) = 0; /*0x5bfad8*/
  *(_DWORD *)(v14 + 12) = 0; /*0x5bfadb*/
  *(_DWORD *)(v14 + 16) = 0; /*0x5bfade*/
  *(_DWORD *)(v14 + 20) = 0; /*0x5bfae1*/
  *(_DWORD *)(v14 + 24) = 0; /*0x5bfae4*/
  *(_DWORD *)(v14 + 28) = 1; /*0x5bfae7*/
  *(_DWORD *)(v14 + 32) = 0; /*0x5bfaee*/
  *(_DWORD *)(v14 + 36) = 0; /*0x5bfaf5*/
  *(_DWORD *)(v14 + 40) = 0; /*0x5bfaf8*/
  *(_DWORD *)(v14 + 44) = 0; /*0x5bfafb*/
  *(_DWORD *)(v14 + 48) = 0; /*0x5bfafe*/
  Rect::Set((_DWORD *)(v14 + 52), 0, 0, 0, 0); /*0x5bfb01*/
  LOBYTE(v15->ambientSoundController[2]) = 0; /*0x5bfb0a*/
  BYTE1(v15->ambientSoundController[2]) = 0; /*0x5bfb0e*/
  v15->ambientSoundController[3] = 0; /*0x5bfb11*/
  v16 = CCFileClass::Construct(v53, Source); /*0x5bfb14*/
  v17 = (*(int (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)v16->__pad_0 + 20))(v16, 0); /*0x5bfb1e*/
  v53[0] = &vt_CCFileClass; /*0x5bfb2a*/
  v45 = v17 == 0; /*0x5bfb32*/
  v55 = 0; /*0x5bfb37*/
  Vector::Clear((int)v54); /*0x5bfb3e*/
  v53[0] = &off_7E1668; /*0x5bfb47*/
  BufferIOFileClass::Dtor(v53); /*0x5bfb4f*/
  if ( v45 ) /*0x5bfb58*/
    return 0; /*0x5bfb58*/
  aP2 = 0; /*0x5bfb5e*/
  if ( !Audio::IsSoundEnabled() ) /*0x5bfb62*/
    ResetAnimSystem(3); /*0x5bfb70*/
  if ( TestBitArray(0) ) /*0x5bfb77*/
    aP2 = (IUnknown *)1; /*0x5bfb80*/
  if ( *(&g_MatrixTransformState + 379) == (CoordStruct *)1 ) /*0x5bfb8f*/
  {
    v18 = aP2; /*0x5bfb91*/
    LOBYTE(v18) = (unsigned __int8)aP2 | 2; /*0x5bfb95*/
    aP2 = v18; /*0x5bfb97*/
  }
  if ( a12 == 1 ) /*0x5bfba3*/
    aP5 = (IUnknown *)sub_5BF950; /*0x5bfba5*/
  v19 = (char *)__2_YAPAXI_Z(0x554u); /*0x5bfbb2*/
  if ( v19 ) /*0x5bfbbc*/
    v20 = Stream::InitializeBinkAudio(v19, Source, aP2, (int)sub_5BF850, (int)sub_5BF8B0, aP5, -1, -1); /*0x5bfbd9*/
  else
    v20 = 0; /*0x5bfbe0*/
  *(_DWORD *)v15->__pad_0 = v20; /*0x5bfbe4*/
  if ( !v20 || (Render_Load_759830(v20, a11), !Render_Load_7597A0(*(_DWORD *)v15->__pad_0)) ) /*0x5bfbf9*/
  {
    BinkMovie::Cleanup(v15); /*0x5bfc04*/
    __3_YAXPAX_Z(v15); /*0x5bfc0a*/
    return 0; /*0x5bfc1e*/
  }
  aP2a = (IUnknown *)MovieClass::GetWidth(*(_DWORD **)v15->__pad_0); /*0x5bfc2a*/
  Height = MovieClass::GetHeight(*(_DWORD **)v15->__pad_0); /*0x5bfc35*/
  _759EA0 = Render_Load_759EA0(*(_DWORD **)v15->__pad_0); /*0x5bfc43*/
  if ( _759EA0 == 4 ) /*0x5bfc47*/
    _759EA0 = 1; /*0x5bfc49*/
  if ( !a3 && !a4 && !a5 && !a6 ) /*0x5bfc73*/
  {
    a3 = 0; /*0x5bfc7b*/
    a4 = 0; /*0x5bfc82*/
    a5 = aP2a; /*0x5bfc89*/
    a6 = Height; /*0x5bfc90*/
  }
  if ( !a7 && !a8 && !a9 && !a10 ) /*0x5bfcb9*/
  {
    v23 = (*(int (__thiscall **)(int *))(*a2 + 128))(a2) - Height; /*0x5bfcca*/
    v24 = (*(int (__thiscall **)(int *))(*a2 + 124))(a2); /*0x5bfcd2*/
    a8 = v23 / 2; /*0x5bfcd9*/
    a9 = aP2a; /*0x5bfce2*/
    a7 = (v24 - (int)aP2a) / 2; /*0x5bfcee*/
    a10 = Height; /*0x5bfcf9*/
  }
  v25 = *a2; /*0x5bfd06*/
  v52[2] = (int)aP2a; /*0x5bfd08*/
  v52[0] = 0; /*0x5bfd0e*/
  v52[1] = 0; /*0x5bfd12*/
  v52[3] = Height; /*0x5bfd16*/
  aP5a = (IUnknown *)(*(int (__thiscall **)(int *))(v25 + 128))(a2); /*0x5bfd20*/
  v26 = (*(int (__thiscall **)(int *))(*a2 + 124))(a2); /*0x5bfd3d*/
  v27 = ClipRectIntersection(&v46, &a3, v52, 0, 0); /*0x5bfd3f*/
  v15->objectTypeFlags = *v27; /*0x5bfd46*/
  v15->owningHouseIndex = v27[1]; /*0x5bfd4c*/
  v15->fallRate = v27[2]; /*0x5bfd54*/
  eax30a = (void *)v27[3]; /*0x5bfd59*/
  v41 = 0; /*0x5bfd5c*/
  v15->nextObject = eax30a; /*0x5bfd64*/
  v48 = v26; /*0x5bfd69*/
  v46 = 0; /*0x5bfd6d*/
  v49 = (int)aP5a; /*0x5bfd7a*/
  if ( (int)a9 <= 0 || a10 <= 0 || v26 <= 0 || (int)aP5a <= 0 ) /*0x5bfd9d*/
    goto LABEL_47; /*0x5bfd9d*/
  v29 = a7; /*0x5bfda3*/
  if ( a7 > 0 ) /*0x5bfdac*/
  {
    v46 = a7; /*0x5bfdb0*/
    v48 = v26 - a7; /*0x5bfdb4*/
  }
  if ( v48 < 1 ) /*0x5bfdbd*/
    goto LABEL_47; /*0x5bfdbd*/
  if ( (int)v41 < a8 ) /*0x5bfdd0*/
  {
    v30 = (char *)v41 - a8; /*0x5bfdd6*/
    v41 = (IUnknown *)a8; /*0x5bfdda*/
    v49 += (int)v30; /*0x5bfdde*/
    v29 = a7; /*0x5bfde2*/
  }
  if ( v49 < 1 ) /*0x5bfdee*/
    goto LABEL_47; /*0x5bfdee*/
  if ( v48 + v46 > (int)a9 + v29 ) /*0x5bfe05*/
    v48 = (int)a9 + a7 - v46; /*0x5bfe16*/
  if ( v48 < 1 ) /*0x5bfe1f*/
    goto LABEL_47; /*0x5bfe1f*/
  v31 = v41; /*0x5bfe35*/
  if ( (int)v41 + v49 > a10 + a8 ) /*0x5bfe3d*/
    v49 = a10 + a8 - (_DWORD)v41; /*0x5bfe51*/
  if ( v49 < 1 ) /*0x5bfe5a*/
  {
LABEL_47:
    v32 = 0; /*0x5bfe6a*/
    v28 = 0; /*0x5bfe6c*/
    v31 = 0; /*0x5bfe6e*/
    v34 = 0; /*0x5bfe70*/
  }
  else
  {
    v32 = (void *)v46; /*0x5bfe5c*/
    v28 = (IUnknown *)v48; /*0x5bfe60*/
    v34 = v49; /*0x5bfe64*/
  }
  v15->attachedTag = v32; /*0x5bfe72*/
  v35 = _759EA0; /*0x5bfe75*/
  v15->attachedBomb = v31; /*0x5bfe79*/
  v15->ambientSoundController[0] = (int)v28; /*0x5bfe7c*/
  v15->ambientSoundController[1] = v34; /*0x5bfe82*/
  if ( v35 == 1 || v35 == 4 ) /*0x5bfe8a*/
  {
    Status = DDraw::GetStatus(); /*0x5bfe8c*/
    Render_Load_759F20(*(_DWORD **)v15->__pad_0, Status); /*0x5bfe94*/
  }
  *(_DWORD *)&v15->__pad_0[8] = a2; /*0x5bfe99*/
  v40 = (IUnknown *)(*(int (__thiscall **)(int *))(*a2 + 128))(a2); /*0x5bfeac*/
  v37 = (*(int (__thiscall **)(int *))(*a2 + 116))(a2); /*0x5bfeb6*/
  v38 = (*(int (__thiscall **)(int *))(*a2 + 112))(a2); /*0x5bfeb8*/
  Render_Load_759EB0(*(int **)v15->__pad_0, 0, v37 / v38, (unsigned int)v40, 0, 0); /*0x5bfec7*/
  SurfaceTracker = BinkMovie::CreateSurfaceTracker(FullPath); /*0x5bfed0*/
  v15->ambientSoundController[3] = (int)SurfaceTracker; /*0x5bfed7*/
  if ( SurfaceTracker ) /*0x5bfeda*/
    **(_DWORD **)v15->__pad_0 = SurfaceTracker; /*0x5bfede*/
  BYTE1(v15->ambientSoundController[2]) = 1; /*0x5bfee0*/
  return v15; /*0x5bfc12*/
}


// ==== 0x005BFF00  MovieContext::Cleanup  this=AbstractClass  sig=csp ====
void __thiscall MovieContext_Cleanup(_DWORD **this)
{
  int v2; // ecx
  void *v3; // edi
  void *v4; // edi

  if ( this ) /*0x5bff05*/
  {
    v2 = (int)*this; /*0x5bff07*/
    if ( v2 ) /*0x5bff0c*/
    {
      DSurface::FlipIfNeeded(v2); /*0x5bff0e*/
      v3 = *this; /*0x5bff13*/
      if ( *this ) /*0x5bff13*/
      {
        CCFileClass::Cleanup(*this); /*0x5bff1b*/
        __3_YAXPAX_Z(v3); /*0x5bff21*/
      }
      *this = 0; /*0x5bff29*/
    }
    v4 = this->q012; /*0x5bff2f*/
    if ( v4 ) /*0x5bff34*/
    {
      BinkMovie::FreeSurfaceTracker(this->q012); /*0x5bff38*/
      __3_YAXPAX_Z(v4); /*0x5bff3e*/
      this->q012 = 0; /*0x5bff46*/
    }
    this->q114 = 0; /*0x5bff4d*/
  }
}


// ==== 0x005BFF60  RenderMovieFrame  this=AbstractClass  sig=csp ====
char __fastcall Movie_RenderFrame(int a1, char a2, int a3, char a4)
{
  char result; // al
  int v6; // ebx
  int v7; // ebp
  int v8; // edi
  bool v9; // zf
  int v10; // [esp-10h] [ebp-1Ch]
  int v12; // [esp+8h] [ebp-4h]

  result = MEMORY[0xABF3F4]; /*0x5bff63*/
  if ( !MEMORY[0xABF3F4] ) /*0x5bff71*/
  {
    *(_BYTE *)(a1 + 69) = 1; /*0x5bff7a*/
    MEMORY[0xABF3F4] = a1; /*0x5bff83*/
    v12 = 0; /*0x5bff89*/
    v6 = -1; /*0x5bff91*/
    v7 = 0; /*0x5bff94*/
    if ( (unsigned __int8)TestBitArray(2) ) /*0x5bff96*/
    {
      v12 = *(_DWORD *)(a1 + 16); /*0x5bffa2*/
      if ( *(int *)(a1 + 20) >= 0 ) /*0x5bffab*/
        v6 = *(_DWORD *)(a1 + 20); /*0x5bffad*/
      v7 = *(_DWORD *)(a1 + 28); /*0x5bffb2*/
      if ( *(_DWORD *)(a1 + 12) == 1 ) /*0x5bffb8*/
      {
        v10 = *(_DWORD *)(a1 + 28); /*0x5bffbd*/
        if ( *(_DWORD *)(a1 + 24) ) /*0x5bffba*/
          Render_Render_759880(v12, v6, v10); /*0x5bffd7*/
        else
          Render_Render_759850(*(_DWORD *)(a1 + 32), v10); /*0x5bffc8*/
      }
    }
    if ( a2 ) /*0x5bffe2*/
      (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x5bffec*/
    if ( a3 != -1 ) /*0x5bfff6*/
      Theme::QueueSong(a3); /*0x5bfffe*/
    do /*0x5c0049*/
    {
      if ( *(_DWORD *)(a1 + 12) == 2 || v12 ) /*0x5c000f*/
        AbstractClass::updateBuildingState(v12); /*0x5c0018*/
      v8 = MovieClass::RenderLoop(v6, a4); /*0x5c002a*/
      if ( *(_DWORD *)(a1 + 12) == 1 ) /*0x5c0032*/
        v7 = 0; /*0x5c0034*/
      AbstractClass::finalizeConstruction(*(_DWORD *)a1); /*0x5c0038*/
      if ( v8 == 1 ) /*0x5c0040*/
        break; /*0x5c0040*/
      v9 = v7 == 0; /*0x5c0042*/
      if ( v7 > 0 ) /*0x5c0044*/
        v9 = --v7 == 0; /*0x5c0047*/
    }
    while ( !v9 ); /*0x5c0049*/
    result = a2; /*0x5c004b*/
    if ( a2 ) /*0x5c0054*/
      result = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x5c005e*/
    MEMORY[0xABF3F4] = 0; /*0x5c0061*/
  }
  return result; /*0x5c006b*/
}

