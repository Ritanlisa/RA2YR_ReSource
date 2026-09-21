// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x006F0130  TeamClass::CheckMemberSuperWeapon  this=TeamClass  sig=csp ====
void __thiscall TeamClass::CheckMemberSuperWeapon(int this, int a2, int a3)
{
  int *v3; // esi
  int v4; // ebx
  int *v5; // ebp
  int v6; // edi
  int v7; // ebx
  int *v8; // edi
  int *v9; // edx
  int v10; // esi
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // eax
  int v16; // ebp
  int v17; // esi
  _DWORD *v18; // eax
  int v19; // eax
  _DWORD *v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // [esp+14h] [ebp-20h] BYREF
  int DefaultTimer; // [esp+18h] [ebp-1Ch]
  _DWORD v25[3]; // [esp+1Ch] [ebp-18h] BYREF
  _DWORD v26[3]; // [esp+28h] [ebp-Ch] BYREF
  int v27; // [esp+38h] [ebp+4h]
  int v28; // [esp+38h] [ebp+4h]

  v3 = *(int **)(this + 84); /*0x6f0136*/
  v4 = -1; /*0x6f0139*/
  v23 = this; /*0x6f013f*/
  v5 = v3; /*0x6f0143*/
  if ( v3 ) /*0x6f0145*/
  {
    do /*0x6f0188*/
    {
      v6 = *(_DWORD *)((*(int (__thiscall **)(int *))(*v3 + 132))(v3) + 1532); /*0x6f0151*/
      if ( TechnoClass::IsDeployed((int)v3) /*0x6f017a*/
        && (*((_BYTE *)v3 + 1673) || (*(int (__thiscall **)(int *))(*v3 + 44))(v3) == 2)
        && v6 > v4 )
      {
        v5 = v3; /*0x6f017c*/
        v4 = v6; /*0x6f017e*/
      }
      v3 = (int *)v3[374]; /*0x6f0180*/
    }
    while ( v3 ); /*0x6f0188*/
    this = v23; /*0x6f018a*/
  }
  v7 = 0; /*0x6f018e*/
  if ( !v5 ) /*0x6f0192*/
    goto LABEL_33; /*0x6f0192*/
  v8 = (int *)v5[135]; /*0x6f0198*/
  DefaultTimer = 0; /*0x6f019e*/
  if ( v8[153] <= 0 ) /*0x6f01aa*/
    goto LABEL_33; /*0x6f01aa*/
  v9 = (int *)v8[150]; /*0x6f01b0*/
  v10 = v8[153]; /*0x6f01b6*/
  do /*0x6f01d7*/
  {
    v11 = *(_DWORD *)(*(_DWORD *)(*v9 + 40) + 180); /*0x6f01bd*/
    if ( v11 == 3 ) /*0x6f01c6*/
      v7 = *v9; /*0x6f01c8*/
    if ( v11 == 4 ) /*0x6f01cd*/
      DefaultTimer = *v9; /*0x6f01cf*/
    ++v9; /*0x6f01d3*/
    --v10; /*0x6f01d6*/
  }
  while ( v10 ); /*0x6f01d7*/
  if ( !v7 || !DefaultTimer ) /*0x6f01e7*/
  {
LABEL_32:
    this = v23; /*0x6f038d*/
LABEL_33:
    *(_BYTE *)(this + 128) = 1; /*0x6f0391*/
    return; /*0x6f0391*/
  }
  if ( !*(_BYTE *)(v7 + 111) || HouseClass::GetPowerRatio(v8) < 1.0 ) /*0x6f020a*/
  {
    v21 = *(_DWORD *)(v7 + 48); /*0x6f032b*/
    v22 = *(_DWORD *)(v7 + 56); /*0x6f032e*/
    if ( v21 != -1 ) /*0x6f0334*/
    {
      if ( (int)MEMORY[0xA8ED84] - v21 >= v22 ) /*0x6f033f*/
      {
        v28 = 0; /*0x6f0381*/
        goto LABEL_28; /*0x6f0389*/
      }
      v22 -= (int)MEMORY[0xA8ED84] - v21; /*0x6f0341*/
    }
    v28 = v22; /*0x6f0343*/
LABEL_28:
    DefaultTimer = Super::GetDefaultTimer((_DWORD *)v7); /*0x6f0347*/
    if ( *(_BYTE *)(v7 + 109) && 1.0 - *(float *)&MEMORY[0x8871E0]->? >= (double)v28 / (double)DefaultTimer ) /*0x6f037d*/
      return; /*0x6f037d*/
    goto LABEL_32; /*0x6f037d*/
  }
  v12 = GetSuperWeaponTypeFlag(*(_DWORD *)(a2 + 4)); /*0x6f0217*/
  v25[0] = v5[39]; /*0x6f0228*/
  v25[1] = v5[40]; /*0x6f022f*/
  v13 = *v5; /*0x6f0233*/
  v25[2] = v5[41]; /*0x6f0239*/
  v14 = *(_DWORD *)(v23 + 36); /*0x6f0241*/
  LOBYTE(v14) = *(_BYTE *)(v14 + 247); /*0x6f0244*/
  v15 = (*(int (__thiscall **)(int *, int, _DWORD *, int))(v13 + 964))(v5, v12, v25, v14); /*0x6f0253*/
  v16 = v23; /*0x6f0259*/
  v17 = v15; /*0x6f025d*/
  if ( v15 ) /*0x6f0261*/
  {
    v18 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(v23 + 52) + 72))(*(_DWORD *)(v23 + 52), v26); /*0x6f0271*/
    LOWORD(v27) = *v18 / 256; /*0x6f0284*/
    HIWORD(v27) = v18[1] / 256; /*0x6f029c*/
    v19 = *(_DWORD *)(v7 + 40); /*0x6f02a5*/
    v23 = v27; /*0x6f02a8*/
    SuperWeapon::FireSuperWeaponHouseClass((#375 *)v8, *(_DWORD *)(v19 + 180), (int)&v23); /*0x6f02b6*/
    v20 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v17 + 72))(v17, v26); /*0x6f02c4*/
    LOWORD(v27) = *v20 / 256; /*0x6f02d7*/
    HIWORD(v27) = v20[1] / 256; /*0x6f02ef*/
    v23 = v27; /*0x6f02fc*/
    SuperWeapon::FireSuperWeaponHouseClass((#375 *)v8, *(_DWORD *)(*(_DWORD *)(DefaultTimer + 40) + 180), (int)&v23); /*0x6f030d*/
    TeamClass::SelectMember(v16, v17); /*0x6f0315*/
  }
  *(_BYTE *)(v16 + 128) = 1; /*0x6f031b*/
}


// ==== 0x006F03B0  FootClass::GetGameSpeedFromSession  this=FootClass  sig=csp ====
int __thiscall sub_6F03B0(_DWORD **this)
{
  int v1; // eax
  int v3; // [esp+0h] [ebp-8h] BYREF

  v1 = *SessionClass::GetEntry(this->owningHouseIndex, &v3); /*0x6f03c0*/
  if ( v1 == 54 || v1 == 53 ) /*0x6f03ca*/
    return MEMORY[0x8871E0][1].?[1]; /*0x6f03e2*/
  else
    return MEMORY[0x8871E0][1].?[0]; /*0x6f03d2*/
}


// ==== 0x006F03F0  ObjectClass::method_6F03F0  this=ObjectClass  sig=csp ====
char __thiscall sub_6F03F0(int **this)
{
  int *v1; // esi

  v1 = this->q054; /*0x6f03f2*/
  if ( !v1 ) /*0x6f03f9*/
    return 0; /*0x6f0423*/
  while ( *(int *)((*(int (__thiscall **)(int *))(*v1 + 132))(v1) + 1668) > 0 && v1[191] <= 0 ) /*0x6f0417*/
  {
    v1 = (int *)v1[374]; /*0x6f0419*/
    if ( !v1 ) /*0x6f0421*/
      return 0; /*0x6f0421*/
  }
  return 1; /*0x6f0425*/
}


// ==== 0x006F0430  TeamClass::StubReturn160  this=TeamClass  sig=csp ====
int TeamClass::_vt12()
{
  return 160; /*0x6f0435*/
}


// ==== 0x006F0440  TeamClass::StubReturn34  this=TeamClass  sig=csp ====
int TeamClass::_vt11()
{
  return 34; /*0x6f0445*/
}


// ==== 0x006F0450  TeamClass::ProcessEvent  this=TeamClass  sig=csp ====
TeamClass *__thiscall TeamClass::ProcessEvent(void **Block, char a2)
{
  TeamClass::Destructor(Block); /*0x6f0453*/
  if ( (a2 & 1) != 0 ) /*0x6f045d*/
    __3_YAXPAX_Z(Block); /*0x6f0460*/
  return (TeamClass *)Block; /*0x6f046a*/
}


// ==== 0x006F0470  sub_6F0470  this=-  sig=ida-proto ====
void sub_6F0470()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6f047c*/
  MEMORY[0xB0E9D0] = Math::Sqrt(v0 + v0); /*0x6f048e*/
}


// ==== 0x006F04A0  sub_6F04A0  this=-  sig=ida-proto ====
void sub_6F04A0()
{
  MEMORY[0xB0EA20] = MEMORY[0xB0E9D0] / 60.0; /*0x6f04ac*/
}


// ==== 0x006F04C0  sub_6F04C0  this=-  sig=ida-proto ====
void sub_6F04C0()
{
  MEMORY[0xB0EA08] = 1.0 / MEMORY[0xB0EA20]; /*0x6f04cc*/
}


// ==== 0x006F04E0  sub_6F04E0  this=-  sig=ida-proto ====
void sub_6F04E0()
{
  MEMORY[0xB0EA00] = 0.0174532925199433 * 45.0; /*0x6f04ec*/
}


// ==== 0x006F0500  sub_6F0500  this=-  sig=ida-proto ====
void sub_6F0500()
{
  MEMORY[0xB0E9D8] = 0.0174532925199433 * 60.0; /*0x6f050c*/
}


// ==== 0x006F0520  sub_6F0520  this=-  sig=ida-proto ====
void sub_6F0520()
{
  MEMORY[0xB0E9B0] = 0.0174532925199433 * 90.0; /*0x6f052c*/
}


// ==== 0x006F0540  sub_6F0540  this=-  sig=ida-proto ====
__int64 sub_6F0540()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0E9B0] - MEMORY[0xB0E9D8]); /*0x6f0552*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0E9D0] * 0.5); /*0x6f0566*/
  MEMORY[0xB0EA28] = result; /*0x6f056b*/
  return result; /*0x6f0570*/
}


// ==== 0x006F0580  sub_6F0580  this=-  sig=ida-proto ====
void sub_6F0580()
{
  MEMORY[0xB0E9E0] = Math::ArcTan((double)MEMORY[0xB0EA28] * 0.00390625); /*0x6f0597*/
}


// ==== 0x006F05B0  sub_6F05B0  this=-  sig=ida-proto ====
void sub_6F05B0()
{
  MEMORY[0xB0E9F8] = Math::ArcTan((double)(2 * MEMORY[0xB0EA28]) / MEMORY[0xB0E9D0]); /*0x6f05d2*/
}


// ==== 0x006F05E0  sub_6F05E0  this=-  sig=ida-proto ====
__int64 sub_6F05E0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0EA28]) + 0.5); /*0x6f05fb*/
  MEMORY[0xB0EA1C] = result; /*0x6f0600*/
  return result; /*0x6f0606*/
}


// ==== 0x006F0610  sub_6F0610  this=-  sig=ida-proto ====
int sub_6F0610()
{
  MEMORY[0xB0E9C8] = 0; /*0x6f0612*/
  return 0; /*0x6f061e*/
}


// ==== 0x006F0620  sub_6F0620  this=-  sig=ida-proto ====
int sub_6F0620()
{
  MEMORY[0xB0E9E8] = 0; /*0x6f0622*/
  MEMORY[0xB0E9EC] = 0; /*0x6f0627*/
  MEMORY[0xB0E9F0] = 0; /*0x6f062c*/
  return 0; /*0x6f0631*/
}


// ==== 0x006F0640  sub_6F0640  this=-  sig=ida-proto ====
int sub_6F0640()
{
  MEMORY[0xB0EA18] = 0; /*0x6f0645*/
  MEMORY[0xB0EA10] = 128; /*0x6f064f*/
  MEMORY[0xB0EA14] = 128; /*0x6f0654*/
  return 128; /*0x6f0659*/
}


// ==== 0x006F0660  sub_6F0660  this=-  sig=ida-proto ====
int sub_6F0660()
{
  MEMORY[0xB0E9B8] = 0; /*0x6f0662*/
  MEMORY[0xB0E9BC] = 0; /*0x6f0667*/
  MEMORY[0xB0E9C0] = 0; /*0x6f066c*/
  MEMORY[0xB0E9C4] = 0; /*0x6f0671*/
  return 0; /*0x6f0676*/
}


// ==== 0x006F06E0  TeamTypeClass::LoadBase  this=TeamTypeClass  sig=csp ====
_DWORD *__thiscall TechnoTypeClass::LoadBase(_DWORD *this, ObjectClass *aP1)
{
  TeamTypeClass *v3; // ecx
  char v4; // al
  int v5; // eax
  CCINIClass *v6; // edx
  int v7; // eax

  AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1); /*0x6f06ea*/
  this->q098 = -1; /*0x6f06f7*/
  this->q09C = -1; /*0x6f06ff*/
  this->q0A0 = 1; /*0x6f0705*/
  this->q0A4 = 0; /*0x6f070b*/
  this->q0A8 = 0; /*0x6f0723*/
  this->q02B = 0; /*0x6f073b*/
  this->TeamTypeClass_field_2C = 0; /*0x6f0753*/
  this->q0B4 = 7; /*0x6f076b*/
  this->q0B8 = -1; /*0x6f0775*/
  this->q02F = 0; /*0x6f077b*/
  this->q0C0 = 0; /*0x6f0781*/
  this->q0C4 = 0; /*0x6f0787*/
  this->q0C8 = -1; /*0x6f078d*/
  this->__pad_0CC = 0; /*0x6f0793*/
  this->q0D0 = 0; /*0x6f0799*/
  this->q0D4 = -1; /*0x6f079f*/
  this->q0D8 = -1; /*0x6f07a5*/
  this->__pad_0DC = 0; /*0x6f07ab*/
  this->q0E0 = 0; /*0x6f07b1*/
  this->q0E4 = 0; /*0x6f07b7*/
  this->__pad_0E8 = 0; /*0x6f07bd*/
  this->q0EC = 9; /*0x6f07c3*/
  this->__pad_3C0 = 1; /*0x6f07cd*/
  this->__pad_F10 = 0; /*0x6f07d3*/
  *((_BYTE *)this + 242) = 0; /*0x6f07d9*/
  *((_BYTE *)this + 243) = 0; /*0x6f07df*/
  this->UINameLabel = 0; /*0x6f07e5*/
  *((_BYTE *)this + 245) = 1; /*0x6f07eb*/
  *((_BYTE *)this + 246) = 0; /*0x6f07f1*/
  this->q0F7 = 0; /*0x6f07f7*/
  *this = &TeamTypeClass::`vftable'; /*0x6f07fd*/
  this->vtable2 = &TeamTypeClass::`vftable'; /*0x6f0803*/
  this->vtable3 = &TeamTypeClass::`vftable'; /*0x6f080a*/
  this->vtable4 = &vt_TeamTypeClass; /*0x6f0811*/
  v3 = *(TeamTypeClass **)&HouseClass_Player.__pad_5568[23036]; /*0x6f0818*/
  if ( *(int *)&HouseClass_Player.__pad_5568[23036] < *(int *)&HouseClass_Player.__pad_5568[23028] /*0x6f0857*/
    || (HouseClass_Player.__pad_5568[23033] || !*(_DWORD *)&HouseClass_Player.__pad_5568[23028])
    && *(int *)&HouseClass_Player.__pad_5568[23040] > 0
    && (v4 = (*(int (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[23020] + 8))(
               &HouseClass_Player.__pad_5568[23020],
               *(_DWORD *)&HouseClass_Player.__pad_5568[23028] + *(_DWORD *)&HouseClass_Player.__pad_5568[23040],
               0),
        v3 = *(TeamTypeClass **)&HouseClass_Player.__pad_5568[23036],
        v4) )
  {
    *(_DWORD *)&HouseClass_Player.__pad_5568[23036] = &v3->__pad_0[1]; /*0x6f085c*/
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[23024] + 4 * (_DWORD)v3) = this; /*0x6f0868*/
    v3 = *(TeamTypeClass **)&HouseClass_Player.__pad_5568[23036]; /*0x6f086b*/
  }
  v5 = 0; /*0x6f0871*/
  if ( (int)v3 <= 0 ) /*0x6f0875*/
  {
LABEL_11:
    v5 = -1; /*0x6f0889*/
  }
  else
  {
    v6 = *(CCINIClass **)&HouseClass_Player.__pad_5568[23024]; /*0x6f0877*/
    while ( *(_DWORD **)v6->__pad_0 != this ) /*0x6f087f*/
    {
      ++v5; /*0x6f0881*/
      v6 = (CCINIClass *)((char *)v6 + 4); /*0x6f0882*/
      if ( v5 >= (int)v3 ) /*0x6f0887*/
        goto LABEL_11; /*0x6f0887*/
    }
  }
  this->q098 = v5; /*0x6f088b*/
  if ( *(int *)&stru_B05488.__pad_579C[19036] < *(int *)&stru_B05488.__pad_579C[19028] /*0x6f08c5*/
    || (stru_B05488.__pad_579C[19033] || !*(_DWORD *)&stru_B05488.__pad_579C[19028])
    && *(int *)&stru_B05488.__pad_579C[19040] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[19020] + 8))(
         &stru_B05488.__pad_579C[19020],
         *(_DWORD *)&stru_B05488.__pad_579C[19028] + *(_DWORD *)&stru_B05488.__pad_579C[19040],
         0) )
  {
    v7 = (*(_DWORD *)&stru_B05488.__pad_579C[19036])++; /*0x6f08d2*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19024] + 4 * v7) = this; /*0x6f08e1*/
  }
  return this; /*0x6f08e6*/
}


// ==== 0x006F09C0  TeamClass::CreateOneOf  this=TeamClass  sig=csp ====
int __thiscall TeamClass::CreateOneOf(int this, HouseClass *aP1)
{
  HouseClass *OwnerHouse; // edi
  int v4; // eax
  int v6; // eax

  Debug::Log(); /*0x6f09c9*/
  OwnerHouse = aP1; /*0x6f09ce*/
  if ( !aP1 ) /*0x6f09d7*/
  {
    OwnerHouse = *(HouseClass **)(this + 196); /*0x6f09d9*/
    if ( !OwnerHouse ) /*0x6f09e1*/
    {
      if ( !BuildingType::IsSpecialType(*(void **)(this + 200)) ) /*0x6f09e9*/
        return 0; /*0x6f09e9*/
      OwnerHouse = (HouseClass *)BuildingType::FindOwnerHouse(*(void **)(this + 200)); /*0x6f09fd*/
      if ( !OwnerHouse ) /*0x6f0a01*/
        return 0; /*0x6f0a01*/
    }
  }
  if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[21752] ) /*0x6f0a0a*/
  {
    v4 = *(_DWORD *)(this + 184); /*0x6f0a0c*/
    if ( v4 >= 0 ) /*0x6f0a14*/
    {
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] ) /*0x6f0a1e*/
      {
        if ( TeamClass::CountActiveTeamsForType(OwnerHouse, (ObjectClass *)this) >= *(_DWORD *)(this + 184) ) /*0x6f0a3d*/
          return 0; /*0x6f0a3d*/
      }
      else if ( *(_DWORD *)(this + 220) >= v4 ) /*0x6f0a26*/
      {
        return 0; /*0x6f0a2c*/
      }
    }
  }
  Debug::Log(); /*0x6f0a48*/
  v6 = __2_YAPAXI_Z(0xA0u); /*0x6f0a52*/
  if ( !v6 ) /*0x6f0a5c*/
    return 0; /*0x6f0a5c*/
  return MissionClass::Construct(v6, (AbstractClass *)this, (AbstractClass *)OwnerHouse, 0); /*0x6f0a28*/
}


// ==== 0x006F0A70  TeamTypeClass::DestroyAllInstances  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::DestroyAllInstances(void *this)
{
  int result; // eax
  int i; // esi
  _DWORD *v4; // ecx

  result = MEMORY[0x8B40F8]; /*0x6f0a70*/
  for ( i = 0; i < MEMORY[0x8B40F8]; ++i ) /*0x6f0a7d*/
  {
    v4 = (_DWORD *)*((_DWORD *)MEMORY[0x8B40EC] + i); /*0x6f0a84*/
    if ( this == (void *)v4[9] ) /*0x6f0a8a*/
    {
      if ( v4 ) /*0x6f0a8e*/
        (*(void (__thiscall **)(_DWORD *, int))(*v4 + 32))(v4, 1); /*0x6f0a94*/
      --i; /*0x6f0a97*/
    }
    result = MEMORY[0x8B40F8]; /*0x6f0a98*/
  }
  return result; /*0x6f0aa2*/
}


// ==== 0x006F0AB0  AISelectTeamHouseClass  this=-  sig=csp ====
int __fastcall AISelectTeamHouseClass(IUnknown *aP0, int a2, int a3)
{
  int v3; // esi
  int v5; // eax
  int v6; // ebx
  CCINIClass *v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int *v11; // ecx
  int v12; // esi
  CCINIClass *v13; // edi
  int v14; // ebp
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  char v18; // bp
  int v19; // esi
  int v20; // edi
  unsigned int v21; // edi
  unsigned int v22; // eax
  int v23; // ecx
  _DWORD *v24; // esi
  int v25; // edi
  int v26; // esi
  int v27; // eax
  int v28; // eax
  int v29; // esi
  int v30; // eax
  CCINIClass *v31; // ebx
  int v32; // esi
  CCINIClass *v33; // edi
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  CCINIClass *v37; // eax
  int i; // eax
  int v39; // ecx
  _DWORD *v40; // esi
  bool v41; // zf
  int v42; // eax
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  _DWORD *v46; // ecx
  CCINIClass *v47; // eax
  int v48; // edx
  int v50; // ecx
  char v51; // [esp+13h] [ebp-4Dh]
  _DWORD v53[2]; // [esp+18h] [ebp-48h] BYREF
  CCINIClass *v54; // [esp+20h] [ebp-40h]
  _DWORD *v55; // [esp+24h] [ebp-3Ch]
  void **v56; // [esp+28h] [ebp-38h] BYREF
  void *Block; // [esp+2Ch] [ebp-34h]
  int v58; // [esp+30h] [ebp-30h]
  char v59; // [esp+35h] [ebp-2Bh]
  int v60; // [esp+38h] [ebp-28h]
  int v61; // [esp+3Ch] [ebp-24h]
  void **v62; // [esp+44h] [ebp-1Ch] BYREF
  void *v63; // [esp+48h] [ebp-18h]
  char v64; // [esp+51h] [ebp-Fh]
  int v65; // [esp+54h] [ebp-Ch]
  int v66; // [esp+58h] [ebp-8h]
  IUnknown *aP2; // [esp+5Ch] [ebp-4h]

  v3 = 0; /*0x6f0ab6*/
  v55 = &aP0->field_0; /*0x6f0ab9*/
  Team_Helper_6F2230(&v56, 0, 0); /*0x6f0ac9*/
  v5 = *(_DWORD *)(a2 + 22016); /*0x6f0ace*/
  v56 = &vt_TypeList_TeamTypeClass_const; /*0x6f0ad4*/
  v54 = 0; /*0x6f0adf*/
  if ( v5 != -1 ) /*0x6f0ae3*/
    v54 = *(CCINIClass **)&HouseClass_Array->__pad_0[4 * v5]; /*0x6f0aee*/
  if ( Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), (IUnknown *)1, (IUnknown *)0x64) <= *(_DWORD *)(a2 + 22108) /*0x6f0b12*/
    && *(_BYTE *)(a2 + 498) )
  {
    v6 = 0; /*0x6f0b26*/
    if ( *(int *)&stru_89E138.__pad_579C[67620] > 0 ) /*0x6f0b2a*/
    {
      v7 = *(CCINIClass **)&stru_89E138.__pad_579C[67608]; /*0x6f0b2c*/
      v8 = *(_DWORD *)&stru_89E138.__pad_579C[67620]; /*0x6f0b32*/
      do /*0x6f0b4d*/
      {
        if ( *(_DWORD *)(*(_DWORD *)v7->__pad_0 + 44) == a2 ) /*0x6f0b39*/
        {
          ++v6; /*0x6f0b3e*/
          if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)v7->__pad_0 + 36) + 246) ) /*0x6f0b3f*/
            ++v3; /*0x6f0b48*/
        }
        v7 = (CCINIClass *)((char *)v7 + 4); /*0x6f0b49*/
        --v8; /*0x6f0b4c*/
      }
      while ( v8 ); /*0x6f0b4d*/
    }
    v9 = 4 * *(_DWORD *)(a2 + 388); /*0x6f0b5b*/
    v10 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5068); /*0x6f0b5e*/
    LOBYTE(v53[0]) = 0; /*0x6f0b64*/
    if ( v6 < *(_DWORD *)(v10 + v9) || v3 < v6 / 2 ) /*0x6f0b77*/
    {
      if ( v3 > *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5040) + v9) ) /*0x6f0bd4*/
        LOBYTE(v53[0]) = 1; /*0x6f0bd6*/
    }
    else
    {
      v11 = 0; /*0x6f0b79*/
      v12 = 0x7FFFFFFF; /*0x6f0b7b*/
      if ( *(int *)&stru_89E138.__pad_579C[67620] > 0 ) /*0x6f0b82*/
      {
        v13 = *(CCINIClass **)&stru_89E138.__pad_579C[67608]; /*0x6f0b84*/
        v14 = *(_DWORD *)&stru_89E138.__pad_579C[67620]; /*0x6f0b8a*/
        do /*0x6f0bb6*/
        {
          v15 = *(_DWORD *)v13->__pad_0; /*0x6f0b90*/
          if ( *(_DWORD *)(*(_DWORD *)v13->__pad_0 + 44) == a2 /*0x6f0bac*/
            && *(_BYTE *)(*(_DWORD *)(v15 + 36) + 246)
            && *(_DWORD *)(v15 + 80) < v12 )
          {
            v11 = *(int **)v13->__pad_0; /*0x6f0bae*/
            v12 = *(_DWORD *)(v15 + 80); /*0x6f0bb0*/
          }
          v13 = (CCINIClass *)((char *)v13 + 4); /*0x6f0bb2*/
          --v14; /*0x6f0bb5*/
        }
        while ( v14 ); /*0x6f0bb6*/
        if ( v11 ) /*0x6f0bba*/
        {
          v16 = *v11; /*0x6f0bbc*/
          --v6; /*0x6f0bc0*/
          LOBYTE(v53[0]) = 1; /*0x6f0bc1*/
          (*(void (__thiscall **)(int *, int))(v16 + 32))(v11, 1); /*0x6f0bc6*/
        }
      }
    }
    if ( v6 < *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5068) + 4 * *(_DWORD *)(a2 + 388)) ) /*0x6f0bf4*/
    {
      v17 = 0; /*0x6f0bfa*/
      Team_Helper_6F27F0(&v62, 0, 0); /*0x6f0c02*/
      v62 = &vt_DynamicVectorClass_DiscreteDistributionClass_AITriggerTypeClass_DistributionObject_AITriggerTypeClass; /*0x6f0c0b*/
      v66 = 10; /*0x6f0c13*/
      v65 = 0; /*0x6f0c1b*/
      aP2 = 0; /*0x6f0c1f*/
      TeamTypeClass_28::ClearBuffer((int)&v62); /*0x6f0c23*/
      v51 = 0; /*0x6f0c2e*/
      if ( *(int *)&HouseClass_Player.__pad_5568[8028] > 0 ) /*0x6f0c34*/
      {
        v18 = v53[0]; /*0x6f0c3a*/
        while ( 1 ) /*0x6f0c44*/
        {
          v19 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8016] + 4 * v17); /*0x6f0c44*/
          if ( !v19 || TriggerClass::EvaluateCondition(v19, (_DWORD *)a2, (int)v54, v18) != 1 ) /*0x6f0c5f*/
            goto LABEL_34; /*0x6f0c5f*/
          v20 = Math::RoundToInt(*(double *)(v19 + 184)); /*0x6f0c6c*/
          if ( v20 == 5000 ) /*0x6f0c78*/
            break; /*0x6f0c78*/
          if ( !v51 ) /*0x6f0c9a*/
            goto LABEL_33; /*0x6f0c9a*/
LABEL_34:
          if ( ++v17 >= *(int *)&HouseClass_Player.__pad_5568[8028] ) /*0x6f0cbe*/
            goto LABEL_35; /*0x6f0cbe*/
        }
        if ( !v51 ) /*0x6f0c7c*/
        {
          v51 = 1; /*0x6f0c86*/
          aP2 = 0; /*0x6f0c8b*/
          ((void (__thiscall *)(void ***))v62[3])(&v62); /*0x6f0c93*/
        }
LABEL_33:
        v53[0] = v19; /*0x6f0c9c*/
        v53[1] = v20; /*0x6f0ca9*/
        Team_Helper_6F25E0(&v62, v53); /*0x6f0cad*/
        aP2 = (IUnknown *)((char *)aP2 + v20); /*0x6f0cb2*/
        goto LABEL_34; /*0x6f0cb2*/
      }
LABEL_35:
      v21 = 0; /*0x6f0cc4*/
      if ( !aP2 ) /*0x6f0ccd*/
        goto LABEL_58; /*0x6f0ccd*/
      if ( !v65 ) /*0x6f0cd9*/
        goto LABEL_58; /*0x6f0cd9*/
      v22 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), (IUnknown *)1, aP2); /*0x6f0cee*/
      v23 = 0; /*0x6f0cf3*/
      if ( v65 <= 0 ) /*0x6f0cfb*/
        goto LABEL_58; /*0x6f0cfb*/
      v24 = (char *)v63 + 4; /*0x6f0d05*/
      while ( 1 ) /*0x6f0d08*/
      {
        v21 += *v24; /*0x6f0d08*/
        if ( v21 >= v22 ) /*0x6f0d0c*/
          break; /*0x6f0d0c*/
        ++v23; /*0x6f0d0e*/
        v24 += 2; /*0x6f0d0f*/
        if ( v23 >= v65 ) /*0x6f0d14*/
          goto LABEL_58; /*0x6f0d14*/
      }
      v25 = *((_DWORD *)v63 + 2 * v23); /*0x6f0d1b*/
      if ( !v25 ) /*0x6f0d20*/
        goto LABEL_58; /*0x6f0d20*/
      v26 = *(_DWORD *)(v25 + 220); /*0x6f0d26*/
      v27 = v58; /*0x6f0d2c*/
      if ( v26 ) /*0x6f0d32*/
      {
        if ( v60 < v58 ) /*0x6f0d38*/
          goto LABEL_49; /*0x6f0d38*/
        if ( (v59 || !v58) && v61 > 0 ) /*0x6f0d4c*/
        {
          if ( !((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v56[2])(&v56, v61 + v58, 0) ) /*0x6f0d60*/
          {
LABEL_50:
            v27 = v58; /*0x6f0d74*/
            goto LABEL_51; /*0x6f0d74*/
          }
LABEL_49:
          v28 = v60++; /*0x6f0d62*/
          *((_DWORD *)Block + v28) = v26; /*0x6f0d71*/
          goto LABEL_50; /*0x6f0d71*/
        }
      }
LABEL_51:
      v29 = *(_DWORD *)(v25 + 224); /*0x6f0d78*/
      if ( v29 /*0x6f0da9*/
        && (v60 < v27
         || (v59 || !v27)
         && v61 > 0
         && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v56[2])(&v56, v61 + v27, 0)) )
      {
        v30 = v60++; /*0x6f0db4*/
        *((_DWORD *)Block + v30) = v29; /*0x6f0dbf*/
      }
LABEL_58:
      v62 = &vt_VectorClass_DiscreteDistributionClass_AITriggerTypeClass_DistributionObject_AITriggerTypeClass; /*0x6f0dc2*/
      if ( v63 && v64 ) /*0x6f0dd8*/
        Team_Helper_6F26E0((char *)v63, 3); /*0x6f0de0*/
    }
  }
  v31 = (CCINIClass *)Block; /*0x6f0de5*/
  v32 = 0; /*0x6f0dee*/
  if ( *(int *)&stru_89E138.__pad_579C[67620] <= 0 ) /*0x6f0df2*/
  {
LABEL_71:
    for ( i = 0; i < v60; v31 = (CCINIClass *)Block ) /*0x6f0e4b*/
    {
      v39 = *(_DWORD *)&v31->__pad_0[4 * i++]; /*0x6f0e4d*/
      *(_BYTE *)(v39 + 169) = 1; /*0x6f0e51*/
    }
    v40 = v55; /*0x6f0e64*/
    v41 = v55 == &v56; /*0x6f0e6e*/
    v55[1] = 0; /*0x6f0e70*/
    v40[2] = 0; /*0x6f0e73*/
    *((_BYTE *)v40 + 12) = 1; /*0x6f0e76*/
    *((_BYTE *)v40 + 13) = 0; /*0x6f0e7a*/
    *v40 = &vt_VectorClass_TeamTypeClass_const; /*0x6f0e7e*/
    if ( !v41 ) /*0x6f0e84*/
    {
      VectorClass::ClearAndFree3((int)v40); /*0x6f0e8c*/
      v42 = v58; /*0x6f0e92*/
      v41 = v58 == 0; /*0x6f0e96*/
      v40[2] = v58; /*0x6f0e98*/
      if ( v41 ) /*0x6f0e9b*/
      {
        v40[1] = 0; /*0x6f0f70*/
        *((_BYTE *)v40 + 13) = 0; /*0x6f0f73*/
      }
      else
      {
        v43 = __2_YAPAXI_Z(4 * v42); /*0x6f0ea5*/
        v40[1] = v43; /*0x6f0eaf*/
        if ( v43 ) /*0x6f0eb2*/
        {
          v44 = v40[2]; /*0x6f0eb8*/
          v45 = 0; /*0x6f0ebb*/
          *((_BYTE *)v40 + 13) = 1; /*0x6f0ebf*/
          if ( v44 > 0 ) /*0x6f0ec3*/
          {
            do /*0x6f0edc*/
            {
              *(_DWORD *)(v40[1] + 4 * v45) = *((_DWORD *)Block + v45); /*0x6f0ed3*/
              ++v45; /*0x6f0ed9*/
            }
            while ( v45 < v40[2] ); /*0x6f0edc*/
          }
        }
      }
      v31 = (CCINIClass *)Block; /*0x6f0f77*/
    }
    v50 = v61; /*0x6f0f7f*/
    v40[4] = v60; /*0x6f0f85*/
    v40[5] = v50; /*0x6f0f88*/
    *v40 = &vt_TypeList_TeamTypeClass_const; /*0x6f0f8b*/
    v56 = &vt_VectorClass_TeamTypeClass_const; /*0x6f0f91*/
    if ( v31 ) /*0x6f0f99*/
    {
      if ( v59 ) /*0x6f0fa1*/
        __3_YAXPAX_Z(v31); /*0x6f0fa4*/
    }
  }
  else
  {
    v33 = *(CCINIClass **)&stru_89E138.__pad_579C[67608]; /*0x6f0df4*/
    while ( 1 ) /*0x6f0dfa*/
    {
      v34 = *(_DWORD *)v33->__pad_0; /*0x6f0dfa*/
      if ( *(_DWORD *)(*(_DWORD *)v33->__pad_0 + 44) == a2 && (*(_BYTE *)(v34 + 123) || !*(_BYTE *)(v34 + 127)) ) /*0x6f0e0c*/
      {
        v35 = 0; /*0x6f0e17*/
        if ( v60 > 0 ) /*0x6f0e1b*/
          break; /*0x6f0e1b*/
      }
LABEL_70:
      ++v32; /*0x6f0e36*/
      v33 = (CCINIClass *)((char *)v33 + 4); /*0x6f0e3c*/
      if ( v32 >= *(int *)&stru_89E138.__pad_579C[67620] ) /*0x6f0e41*/
        goto LABEL_71; /*0x6f0e41*/
    }
    v36 = *(_DWORD *)(v34 + 36); /*0x6f0e1d*/
    v37 = (CCINIClass *)Block; /*0x6f0e20*/
    while ( v36 != *(_DWORD *)v37->__pad_0 ) /*0x6f0e24*/
    {
      ++v35; /*0x6f0e2e*/
      v37 = (CCINIClass *)((char *)v37 + 4); /*0x6f0e2f*/
      if ( v35 >= v60 ) /*0x6f0e34*/
        goto LABEL_70; /*0x6f0e34*/
    }
    v60 = 0; /*0x6f0ee7*/
    if ( Block && v59 ) /*0x6f0ef3*/
    {
      __3_YAXPAX_Z(Block); /*0x6f0ef6*/
      Block = 0; /*0x6f0efe*/
    }
    v40 = v55; /*0x6f0f02*/
    v46 = v55; /*0x6f0f0b*/
    v59 = 0; /*0x6f0f0d*/
    v58 = 0; /*0x6f0f12*/
    v55[1] = 0; /*0x6f0f16*/
    v46[2] = 0; /*0x6f0f19*/
    *((_BYTE *)v46 + 12) = 1; /*0x6f0f1c*/
    *((_BYTE *)v46 + 13) = 0; /*0x6f0f20*/
    *v46 = &vt_VectorClass_TeamTypeClass_const; /*0x6f0f24*/
    Team_Helper_6F2780(v46, (IUnknown *)&v56); /*0x6f0f2a*/
    *v40 = &vt_TypeList_TeamTypeClass_const; /*0x6f0f2f*/
    v56 = &vt_VectorClass_TeamTypeClass_const; /*0x6f0f35*/
    v47 = (CCINIClass *)Block; /*0x6f0f3d*/
    v48 = v61; /*0x6f0f45*/
    v41 = Block == 0; /*0x6f0f49*/
    v40[4] = v60; /*0x6f0f4b*/
    v40[5] = v48; /*0x6f0f4e*/
    if ( !v41 && v59 ) /*0x6f0f59*/
    {
      __3_YAXPAX_Z(v47); /*0x6f0f5c*/
      return (int)v40; /*0x6f0f6d*/
    }
  }
  return (int)v40; /*0x6f0f66*/
}


// ==== 0x006F0FC0  TeamTypeClass::FindByName  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::FindByName(void *this)
{
  int v2; // esi

  if ( !this ) /*0x6f0fc6*/
    return 0; /*0x6f0fc6*/
  v2 = 0; /*0x6f0fcd*/
  if ( *(int *)&HouseClass_Player.__pad_5568[23036] <= 0 ) /*0x6f0fd1*/
    return 0; /*0x6f1010*/
  while ( _strcmpi(this, (const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[23024] + 4 * v2) + 36)) /*0x6f1004*/
       && _strcmpi(this, (const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[23024] + 4 * v2) + 100)) )
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[23036] ) /*0x6f100e*/
      return 0; /*0x6f100e*/
  }
  return *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[23024] + 4 * v2); /*0x6f1010*/
}


// ==== 0x006F1030  TeamTypeClass::GetTeam  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::_vt10(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // ecx

  result = a2; /*0x6f1030*/
  if ( this->q0D0 == a2 ) /*0x6f103f*/
    this->q0D0 = 0; /*0x6f1041*/
  if ( this->q0C4 == a2 ) /*0x6f104d*/
    this->q0C4 = 0; /*0x6f104f*/
  if ( this->q0E4 == a2 ) /*0x6f105b*/
    this->q0E4 = 0; /*0x6f105d*/
  if ( this->q0E0 == a2 ) /*0x6f1069*/
    this->q0E0 = 0; /*0x6f106b*/
  v4 = this->q0E0; /*0x6f1071*/
  if ( v4 ) /*0x6f1079*/
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 40))(v4, a2, a3); /*0x6f1083*/
  return result; /*0x6f1086*/
}


// ==== 0x006F1090  TeamTypeClass::LoadFromINI  this=TeamTypeClass  sig=csp ====
char __thiscall TeamTypeClass::LoadFromINI(int this, unsigned __int8 ***aP1)
{
  CCINIClass *v3; // ecx
  int v4; // eax
  void *v5; // ebp
  int Int_Overwrite; // eax
  char Bool_Overwrite; // al
  char v8; // cl
  char v9; // al
  char v10; // al
  char v11; // cl
  char v12; // al
  char v13; // al
  char v14; // cl
  char v15; // al
  char v16; // al
  char v17; // cl
  char v18; // al
  char v19; // al
  char v20; // cl
  char v21; // al
  int v22; // eax
  CCINIClass *v23; // ecx
  int v24; // eax
  int v25; // eax
  char *v26; // ebp
  char *v27; // eax
  CCINIClass *v28; // ecx
  int v29; // eax
  char v30; // al
  char v31; // cl
  char v32; // al
  char v33; // al
  char v34; // cl
  char v35; // al
  CCINIClass *v36; // ecx
  INIClass *v37; // eax
  INIClass *v38; // eax
  INIClass *v39; // ebp
  INIClass *ScriptType; // eax
  TaskForceClass *v41; // ebp
  TaskForceClass *TaskForce; // eax
  CCINIClass *v44; // [esp-Ch] [ebp-D4h]
  char v45; // [esp-Ch] [ebp-D4h]
  char v46; // [esp-Ch] [ebp-D4h]
  char v47; // [esp-Ch] [ebp-D4h]
  char v48; // [esp-Ch] [ebp-D4h]
  char v49; // [esp-Ch] [ebp-D4h]
  CCINIClass *v50; // [esp-Ch] [ebp-D4h]
  char v51; // [esp-Ch] [ebp-D4h]
  char v52; // [esp-Ch] [ebp-D4h]
  INIClass aP4; // [esp+8h] [ebp-C0h] BYREF
  INIClass Destination[2]; // [esp+48h] [ebp-80h] BYREF

  INIClass::ResetSection(aP1); /*0x6f10a3*/
  if ( !AbstractTypeClass::LoadFromINI(this, (AbstractTypeClass *)aP1) ) /*0x6f10b2*/
    return 0; /*0x6f10b2*/
  v3 = *(CCINIClass **)(this + 196); /*0x6f10b8*/
  v4 = -1; /*0x6f10be*/
  if ( v3 ) /*0x6f10c3*/
    v4 = *(_DWORD *)(*(_DWORD *)&v3->needsSave_flag + 184); /*0x6f10c8*/
  v5 = (void *)SuperWeaponTypeClass::FindOrCreate( /*0x6f10e1*/
                 aP1,
                 (INIClass *)(this + 36),
                 (unsigned __int8 *)aHouse,
                 (CCINIClass *)v4);
  if ( BuildingType::IsSpecialType(v5) ) /*0x6f10e5*/
  {
    *(_DWORD *)(this + 200) = v5; /*0x6f10ee*/
    *(_DWORD *)(this + 196) = 0; /*0x6f10f4*/
  }
  else if ( v5 != (void *)-1 ) /*0x6f1103*/
  {
    *(_DWORD *)(this + 196) = HouseClass::FindOwner(v5); /*0x6f110c*/
    *(_DWORD *)(this + 200) = -1; /*0x6f1112*/
  }
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x6f112b*/
                    (int)aP1,
                    (unsigned __int8 *)(this + 36),
                    (CCINIClass *)&stru_830620.__pad_579C[54064],
                    *(INIClass **)(this + 160));
  v44 = *(CCINIClass **)(this + 192); /*0x6f1138*/
  *(_DWORD *)(this + 160) = Int_Overwrite; /*0x6f113f*/
  *(_DWORD *)(this + 192) = INIClass::ReadInt_Overwrite( /*0x6f114a*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_830620.__pad_579C[54044],
                              (INIClass *)v44);
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x6f115f*/
                     (int)aP1,
                     (unsigned __int8 *)(this + 36),
                     (CCINIClass *)&stru_830620.__pad_579C[54032],
                     *(_BYTE *)(this + 164));
  v8 = *(_BYTE *)(this + 165); /*0x6f1164*/
  *(_BYTE *)(this + 164) = Bool_Overwrite; /*0x6f116a*/
  v9 = INIClass::ReadBool_Overwrite( /*0x6f1179*/
         (int)aP1,
         (unsigned __int8 *)(this + 36),
         (CCINIClass *)&stru_830620.__pad_579C[54024],
         v8);
  v45 = *(_BYTE *)(this + 166); /*0x6f1186*/
  *(_BYTE *)(this + 165) = v9; /*0x6f118d*/
  *(_BYTE *)(this + 166) = INIClass::ReadBool_Overwrite( /*0x6f1198*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[54012],
                             v45);
  v10 = INIClass::ReadBool_Overwrite( /*0x6f11ad*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[54000],
          *(_BYTE *)(this + 167));
  v11 = *(_BYTE *)(this + 169); /*0x6f11b2*/
  *(_BYTE *)(this + 167) = v10; /*0x6f11b8*/
  v12 = INIClass::ReadBool_Overwrite( /*0x6f11c7*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53988],
          v11);
  v46 = *(_BYTE *)(this + 170); /*0x6f11d4*/
  *(_BYTE *)(this + 169) = v12; /*0x6f11db*/
  *(_BYTE *)(this + 170) = INIClass::ReadBool_Overwrite( /*0x6f11e6*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[53976],
                             v46);
  v13 = INIClass::ReadBool_Overwrite( /*0x6f11fb*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53964],
          *(_BYTE *)(this + 171));
  v14 = *(_BYTE *)(this + 176); /*0x6f1200*/
  *(_BYTE *)(this + 171) = v13; /*0x6f1206*/
  v15 = INIClass::ReadBool_Overwrite( /*0x6f1215*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53956],
          v14);
  v47 = *(_BYTE *)(this + 177); /*0x6f1222*/
  *(_BYTE *)(this + 176) = v15; /*0x6f1229*/
  *(_BYTE *)(this + 177) = INIClass::ReadBool_Overwrite( /*0x6f1234*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[53936],
                             v47);
  v16 = INIClass::ReadBool_Overwrite( /*0x6f1249*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53924],
          *(_BYTE *)(this + 168));
  v17 = *(_BYTE *)(this + 172); /*0x6f124e*/
  *(_BYTE *)(this + 168) = v16; /*0x6f1254*/
  v18 = INIClass::ReadBool_Overwrite( /*0x6f1263*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53916],
          v17);
  v48 = *(_BYTE *)(this + 175); /*0x6f1270*/
  *(_BYTE *)(this + 172) = v18; /*0x6f1277*/
  *(_BYTE *)(this + 175) = INIClass::ReadBool_Overwrite( /*0x6f1282*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[53908],
                             v48);
  v19 = INIClass::ReadBool_Overwrite( /*0x6f1297*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53892],
          *(_BYTE *)(this + 174));
  v20 = *(_BYTE *)(this + 173); /*0x6f129c*/
  *(_BYTE *)(this + 174) = v19; /*0x6f12a2*/
  v21 = INIClass::ReadBool_Overwrite( /*0x6f12b1*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53880],
          v20);
  v49 = *(_BYTE *)(this + 179); /*0x6f12be*/
  *(_BYTE *)(this + 173) = v21; /*0x6f12c5*/
  *(_BYTE *)(this + 179) = INIClass::ReadBool_Overwrite( /*0x6f12d0*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[53868],
                             v49);
  v22 = INIClass::ReadInt_Overwrite( /*0x6f12e5*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53856],
          *(INIClass **)(this + 180));
  v23 = *(CCINIClass **)(this + 184); /*0x6f12ea*/
  *(_DWORD *)(this + 180) = v22; /*0x6f12f0*/
  v24 = INIClass::ReadInt_Overwrite( /*0x6f12ff*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53852],
          (INIClass *)v23);
  v50 = *(CCINIClass **)(this + 204); /*0x6f130c*/
  *(_DWORD *)(this + 184) = v24; /*0x6f1313*/
  v25 = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), aTechlevel, (INIClass *)v50); /*0x6f1319*/
  v26 = *(char **)(this + 208); /*0x6f131e*/
  *(_DWORD *)(this + 204) = v25; /*0x6f1324*/
  if ( INIClass::GetString( /*0x6f1341*/
         aP1,
         (INIClass *)(this + 36),
         (unsigned __int8 *)unk_81728C,
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         Destination,
         128) )
  {
    v27 = TagTypeClass::FindOrCreate((ObjectClass *)Destination); /*0x6f134e*/
  }
  else
  {
    v27 = v26; /*0x6f1355*/
  }
  v28 = *(CCINIClass **)(this + 156); /*0x6f1357*/
  *(_DWORD *)(this + 208) = v27; /*0x6f135d*/
  v29 = INIClass::ReadInt_Overwrite( /*0x6f136c*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53256],
          (INIClass *)v28);
  v51 = *(_BYTE *)(this + 242); /*0x6f1379*/
  *(_DWORD *)(this + 156) = v29; /*0x6f1380*/
  *(_BYTE *)(this + 242) = INIClass::ReadBool_Overwrite( /*0x6f138b*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[53836],
                             v51);
  v30 = INIClass::ReadBool_Overwrite( /*0x6f13a0*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53824],
          *(_BYTE *)(this + 243));
  v31 = *(_BYTE *)(this + 246); /*0x6f13a5*/
  *(_BYTE *)(this + 243) = v30; /*0x6f13ab*/
  v32 = INIClass::ReadBool_Overwrite( /*0x6f13ba*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&g_INI_Key_Height.__pad_41[3],
          v31);
  v52 = *(_BYTE *)(this + 247); /*0x6f13c7*/
  *(_BYTE *)(this + 246) = v32; /*0x6f13ce*/
  *(_BYTE *)(this + 247) = INIClass::ReadBool_Overwrite( /*0x6f13d9*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[53800],
                             v52);
  v33 = INIClass::ReadBool_Overwrite( /*0x6f13ee*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53772],
          *(_BYTE *)(this + 244));
  v34 = *(_BYTE *)(this + 245); /*0x6f13f3*/
  *(_BYTE *)(this + 244) = v33; /*0x6f13f9*/
  v35 = INIClass::ReadBool_Overwrite( /*0x6f1408*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[53744],
          v34);
  v36 = *(CCINIClass **)(this + 212); /*0x6f140d*/
  *(_BYTE *)(this + 245) = v35; /*0x6f141a*/
  v37 = (INIClass *)Waypoint::To_String((int)v36); /*0x6f1420*/
  if ( (int)INIClass::GetString(aP1, (INIClass *)(this + 36), (unsigned __int8 *)&stru_817244, v37, &aP4, 64) > 0 ) /*0x6f1435*/
    *(_DWORD *)(this + 212) = String::To_Waypoint(aP4.__pad_0); /*0x6f1440*/
  v38 = (INIClass *)Waypoint::To_String(*(_DWORD *)(this + 216)); /*0x6f1453*/
  if ( (int)INIClass::GetString( /*0x6f1468*/
              aP1,
              (INIClass *)(this + 36),
              (unsigned __int8 *)&stru_830620.__pad_579C[53724],
              v38,
              &aP4,
              64) > 0 )
    *(_DWORD *)(this + 216) = String::To_Waypoint(aP4.__pad_0); /*0x6f1473*/
  v39 = *(INIClass **)(this + 224); /*0x6f1479*/
  if ( INIClass::GetString( /*0x6f1496*/
         aP1,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_817348,
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         Destination,
         128) )
  {
    ScriptType = TeamTypeClass::CreateScriptType((AbstractClass *)Destination); /*0x6f14a3*/
  }
  else
  {
    ScriptType = v39; /*0x6f14aa*/
  }
  v41 = *(TaskForceClass **)(this + 228); /*0x6f14ac*/
  *(_DWORD *)(this + 224) = ScriptType; /*0x6f14c9*/
  if ( INIClass::GetString( /*0x6f14cf*/
         aP1,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_8172FC,
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         Destination,
         128) )
  {
    TaskForce = TeamTypeClass::FindOrCreateTaskForce(Destination[0].__pad_0); /*0x6f14dc*/
  }
  else
  {
    TaskForce = v41; /*0x6f14e3*/
  }
  *(_DWORD *)(this + 228) = TaskForce; /*0x6f14e6*/
  if ( !TaskForce ) /*0x6f14ef*/
  {
    if ( *(int *)&MEMORY[0xA8D63C].__pad_1258[76] <= 0 ) /*0x6f14f8*/
      return 0; /*0x6f14f8*/
    *(_DWORD *)(this + 228) = **(_DWORD **)&MEMORY[0xA8D63C].__pad_1258[64]; /*0x6f1501*/
  }
  if ( *(_DWORD *)(this + 224) ) /*0x6f1507*/
    return 1; /*0x6f1532*/
  if ( *(int *)&MEMORY[0x89F690].__pad_579C[62380] > 0 ) /*0x6f1518*/
  {
    *(_DWORD *)(this + 224) = **(_DWORD **)&MEMORY[0x89F690].__pad_579C[62368]; /*0x6f1522*/
    return 1; /*0x6f1522*/
  }
  return 0; /*0x6f1528*/
}


// ==== 0x006F1550  TeamTypeClass::GetMaxCount  this=TeamTypeClass  sig=csp ====
char __thiscall TeamTypeClass::GetMaxCount(int this, CCINIClass *aP1)
{
  int v3; // eax
  int v4; // ebp
  INIClass *v5; // edi
  INIClass *v6; // eax
  INIClass *v7; // ecx
  INIClass *v8; // edx
  INIClass *v9; // eax
  INIClass *v10; // ecx
  INIClass *v11; // edx
  INIClass *v12; // eax
  INIClass *v13; // ecx
  INIClass *v14; // edx
  INIClass *v15; // eax
  INIClass *v16; // ecx
  INIClass *v17; // edx
  INIClass *v18; // eax
  INIClass *v19; // ecx
  INIClass *v20; // eax
  INIClass *v21; // ecx
  INIClass *v22; // edx
  INIClass *v23; // eax
  INIClass *v24; // ecx
  INIClass *v25; // edx
  INIClass *v26; // eax
  int v27; // eax
  INIClass *v28; // eax
  INIClass *v29; // eax
  int v30; // eax
  int v31; // esi

  if ( !AbstractTypeClass::WriteINI((char *)this, aP1) ) /*0x6f1559*/
    return 0; /*0x6f185b*/
  v3 = *(_DWORD *)(this + 196); /*0x6f1566*/
  v4 = -1; /*0x6f156d*/
  if ( v3 ) /*0x6f1573*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)(v3 + 52) + 184); /*0x6f1578*/
  }
  else if ( BuildingType::IsSpecialType(*(void **)(this + 200)) ) /*0x6f1586*/
  {
    v4 = *(_DWORD *)(this + 200); /*0x6f158f*/
  }
  v5 = (INIClass *)(this + 36); /*0x6f159d*/
  INIClass::SetInt( /*0x6f15a9*/
    aP1->__pad_0,
    (INIClass *)(this + 36),
    (CCINIClass *)&stru_830620.__pad_579C[54064],
    *(INIClass **)(this + 160),
    0);
  INIClass::SetInt( /*0x6f15bf*/
    aP1->__pad_0,
    (INIClass *)(this + 36),
    (CCINIClass *)&stru_830620.__pad_579C[54044],
    *(INIClass **)(this + 192),
    0);
  LOBYTE(v6) = *(_BYTE *)(this + 164); /*0x6f15c4*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(this + 36), &stru_830620.__pad_579C[54032], v6); /*0x6f15d3*/
  LOBYTE(v7) = *(_BYTE *)(this + 165); /*0x6f15d8*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(this + 36), &stru_830620.__pad_579C[54024], v7); /*0x6f15e7*/
  LOBYTE(v8) = *(_BYTE *)(this + 166); /*0x6f15ec*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(this + 36), &stru_830620.__pad_579C[54012], v8); /*0x6f15fb*/
  LOBYTE(v9) = *(_BYTE *)(this + 167); /*0x6f1600*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(this + 36), &stru_830620.__pad_579C[54000], v9); /*0x6f160f*/
  INIClass::SetHouseName(aP1->__pad_0, (INIClass *)(this + 36), aHouse, (INIClass *)v4); /*0x6f161d*/
  LOBYTE(v10) = *(_BYTE *)(this + 168); /*0x6f1622*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(this + 36), &stru_830620.__pad_579C[53924], v10); /*0x6f1631*/
  LOBYTE(v11) = *(_BYTE *)(this + 169); /*0x6f1636*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(this + 36), &stru_830620.__pad_579C[53988], v11); /*0x6f1645*/
  LOBYTE(v12) = *(_BYTE *)(this + 170); /*0x6f164a*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(this + 36), &stru_830620.__pad_579C[53976], v12); /*0x6f1659*/
  LOBYTE(v13) = *(_BYTE *)(this + 171); /*0x6f165e*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(this + 36), &stru_830620.__pad_579C[53964], v13); /*0x6f166d*/
  LOBYTE(v14) = *(_BYTE *)(this + 176); /*0x6f1672*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(this + 36), &stru_830620.__pad_579C[53956], v14); /*0x6f1681*/
  LOBYTE(v15) = *(_BYTE *)(this + 177); /*0x6f1686*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(this + 36), &stru_830620.__pad_579C[53936], v15); /*0x6f1695*/
  LOBYTE(v16) = *(_BYTE *)(this + 172); /*0x6f169a*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(this + 36), &stru_830620.__pad_579C[53916], v16); /*0x6f16a9*/
  LOBYTE(v17) = *(_BYTE *)(this + 174); /*0x6f16ae*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(this + 36), &stru_830620.__pad_579C[53892], v17); /*0x6f16bd*/
  LOBYTE(v18) = *(_BYTE *)(this + 173); /*0x6f16c2*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(this + 36), &stru_830620.__pad_579C[53880], v18); /*0x6f16d1*/
  LOBYTE(v19) = *(_BYTE *)(this + 175); /*0x6f16d6*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(this + 36), &stru_830620.__pad_579C[53908], v19); /*0x6f16e5*/
  INIClass::SetInt( /*0x6f16fb*/
    aP1->__pad_0,
    (INIClass *)(this + 36),
    (CCINIClass *)&stru_830620.__pad_579C[53856],
    *(INIClass **)(this + 180),
    0);
  INIClass::SetInt( /*0x6f1711*/
    aP1->__pad_0,
    (INIClass *)(this + 36),
    (CCINIClass *)&stru_830620.__pad_579C[53852],
    *(INIClass **)(this + 184),
    0);
  INIClass::SetInt(aP1->__pad_0, (INIClass *)(this + 36), aTechlevel, *(INIClass **)(this + 204), 0); /*0x6f1727*/
  INIClass::SetInt( /*0x6f173d*/
    aP1->__pad_0,
    (INIClass *)(this + 36),
    (CCINIClass *)&stru_830620.__pad_579C[53256],
    *(INIClass **)(this + 156),
    0);
  LOBYTE(v20) = *(_BYTE *)(this + 179); /*0x6f1742*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(this + 36), &stru_830620.__pad_579C[53868], v20); /*0x6f1751*/
  LOBYTE(v21) = *(_BYTE *)(this + 242); /*0x6f1756*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(this + 36), &stru_830620.__pad_579C[53836], v21); /*0x6f1765*/
  LOBYTE(v22) = *(_BYTE *)(this + 243); /*0x6f176a*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(this + 36), &stru_830620.__pad_579C[53824], v22); /*0x6f1779*/
  LOBYTE(v23) = *(_BYTE *)(this + 244); /*0x6f177e*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(this + 36), &stru_830620.__pad_579C[53772], v23); /*0x6f178d*/
  LOBYTE(v24) = *(_BYTE *)(this + 245); /*0x6f1792*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(this + 36), &stru_830620.__pad_579C[53744], v24); /*0x6f17a1*/
  LOBYTE(v25) = *(_BYTE *)(this + 246); /*0x6f17a6*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(this + 36), &g_INI_Key_Height.__pad_41[3], v25); /*0x6f17b5*/
  LOBYTE(v26) = *(_BYTE *)(this + 247); /*0x6f17ba*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)(this + 36), &stru_830620.__pad_579C[53800], v26); /*0x6f17c9*/
  v27 = *(_DWORD *)(this + 208); /*0x6f17ce*/
  if ( v27 ) /*0x6f17d6*/
    INIClass::SetString(aP1->__pad_0, (INIClass *)(this + 36), (INIClass *)unk_81728C, (INIClass *)(v27 + 36)); /*0x6f17e4*/
  v28 = (INIClass *)Waypoint::To_String(*(CCINIClass **)(this + 212)); /*0x6f17ef*/
  INIClass::SetString(aP1->__pad_0, (INIClass *)(this + 36), &stru_817244, v28); /*0x6f17fd*/
  v29 = (INIClass *)Waypoint::To_String(*(CCINIClass **)(this + 216)); /*0x6f1808*/
  INIClass::SetString(aP1->__pad_0, (INIClass *)(this + 36), (INIClass *)&stru_830620.__pad_579C[53724], v29); /*0x6f1816*/
  v30 = *(_DWORD *)(this + 224); /*0x6f181b*/
  if ( v30 ) /*0x6f1823*/
    INIClass::SetString(aP1->__pad_0, (INIClass *)(this + 36), &stru_817348, (INIClass *)(v30 + 36)); /*0x6f1831*/
  v31 = *(_DWORD *)(this + 228); /*0x6f1836*/
  if ( v31 ) /*0x6f183e*/
    INIClass::SetString(aP1->__pad_0, v5, &stru_8172FC, (INIClass *)(v31 + 36)); /*0x6f184c*/
  return 1; /*0x6f1853*/
}


// ==== 0x006F1870  TeamTypeClass::GetGroup  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::GetGroup(_DWORD *this)
{
  int result; // eax
  int v2; // ecx

  result = this->q09C; /*0x6f1870*/
  if ( result == -1 ) /*0x6f1879*/
  {
    v2 = this->q0E4; /*0x6f1880*/
    if ( v2 ) /*0x6f1888*/
      return *(_DWORD *)(v2 + 152); /*0x6f188a*/
  }
  return result; /*0x6f1890*/
}


// ==== 0x006F18A0  TechnoClass::GetWaypointCoords  this=AbstractClass  sig=csp ====
_DWORD *__thiscall TechnoClass::GetWaypointCoords(_DWORD *this, AbstractClass *aP1)
{
  Tactical *v2; // eax
  int v4; // ecx
  _DWORD *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x6f18a0*/
  v2 = (Tactical *)this->q0D4; /*0x6f18a1*/
  if ( v2 == (Tactical *)-1 ) /*0x6f18aa*/
  {
    *(_DWORD *)aP1->__pad_0 = *(_DWORD *)&stru_B05488.__pad_579C[15780]; /*0x6f18b6*/
    return aP1->__pad_0; /*0x6f18ac*/
  }
  else
  {
    v4 = *ScenarioClass::Get_Waypoint_Location(*(char **)&HouseClass_Player.__pad_5568[8060], &v5, (int)v2); /*0x6f18cd*/
    *(_DWORD *)aP1->__pad_0 = v4; /*0x6f18d3*/
    return aP1->__pad_0; /*0x6f18cf*/
  }
}


// ==== 0x006F18E0  TeamTypeClass::GetTransportWaypoint  this=TeamTypeClass  sig=csp ====
_DWORD *__thiscall TeamTypeClass::GetTransportWaypoint(int *this, _DWORD *a2)
{
  int v2; // eax
  int v4; // ecx
  int *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x6f18e0*/
  v2 = this->q0D8; /*0x6f18e1*/
  if ( v2 == -1 ) /*0x6f18ea*/
  {
    *a2 = MEMORY[0xB0E9C8]; /*0x6f18f6*/
    return a2; /*0x6f18ec*/
  }
  else
  {
    v4 = *ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v5, v2); /*0x6f190d*/
    *a2 = v4; /*0x6f1913*/
    return a2; /*0x6f190f*/
  }
}


// ==== 0x006F1920  TechnoClass::Create  this=ObjectClass  sig=csp ====
TeamTypeClass *__thiscall TechnoClass::Create(ObjectClass *Source)
{
  int v2; // esi
  _DWORD *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x6f193c*/
    return 0; /*0x6f199f*/
  v2 = 0; /*0x6f194d*/
  if ( *(int *)&HouseClass_Player.__pad_5568[23036] <= 0 ) /*0x6f1951*/
  {
LABEL_6:
    v3 = (_DWORD *)__2_YAPAXI_Z(0xF8u); /*0x6f1976*/
    if ( v3 ) /*0x6f1985*/
      return (TeamTypeClass *)TechnoTypeClass::LoadBase(v3, Source); /*0x6f1991*/
    return 0; /*0x6f1985*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[23024] + 4 * v2) + 36), Source) ) /*0x6f196a*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[23036] ) /*0x6f1974*/
      goto LABEL_6; /*0x6f1974*/
  }
  return *(TeamTypeClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[23024] + 4 * v2); /*0x6f198f*/
}


// ==== 0x006F19B0  SmallFunc_6F19B0  this=IUnknown  sig=csp ====
int __fastcall SmallFunc_6F19B0(char *a1, int a2)
{
  int result; // eax
  int v4; // ebp
  CCINIClass *i; // ebx
  unsigned __int8 *StringByIndex; // eax
  int v7; // esi
  _DWORD *v8; // eax
  TeamTypeClass *v9; // esi
  char Source[32]; // [esp+10h] [ebp-20h] BYREF

  result = INIClass::GetKeyCount(a1, (INIClass *)&stru_830620.__pad_579C[54080]); /*0x6f19c1*/
  v4 = result; /*0x6f19c6*/
  for ( i = 0; (int)i < v4; *(_DWORD *)v9[2].__pad_0 = a2 ) /*0x6f19cc*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1, (CCINIClass *)&stru_830620.__pad_579C[54080], i); /*0x6f19db*/
    INIClass::GetString( /*0x6f19f4*/
      (unsigned __int8 ***)a1,
      (INIClass *)&stru_830620.__pad_579C[54080],
      StringByIndex,
      (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
      (INIClass *)Source,
      32);
    if ( !_strcmpi((char *)&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x6f1a19*/
      goto LABEL_10; /*0x6f1a19*/
    v7 = 0; /*0x6f1a2a*/
    if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[452] > 0 ) /*0x6f1a2e*/
    {
      while ( _strcmpi((char *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[440] + 4 * v7) + 36), Source) ) /*0x6f1a4c*/
      {
        if ( ++v7 >= *(int *)&MEMORY[0xA8D63C].__pad_14B0[452] ) /*0x6f1a56*/
          goto LABEL_7; /*0x6f1a56*/
      }
      v9 = *(TeamTypeClass **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[440] + 4 * v7); /*0x6f1a7f*/
      goto LABEL_11; /*0x6f1a82*/
    }
LABEL_7:
    v8 = (_DWORD *)__2_YAPAXI_Z(0xF8u); /*0x6f1a5d*/
    if ( v8 ) /*0x6f1a67*/
      v9 = (TeamTypeClass *)TechnoTypeClass::LoadBase(v8, Source); /*0x6f1a75*/
    else
LABEL_10:
      v9 = 0; /*0x6f1a84*/
LABEL_11:
    result = (*(int (__thiscall **)(TeamTypeClass *, char *))(*(_DWORD *)v9->__pad_0 + 100))(v9, a1); /*0x6f1a86*/
    i = (CCINIClass *)((char *)i + 1); /*0x6f1a8e*/
  }
  return result; /*0x6f1aa2*/
}


// ==== 0x006F1AB0  TeamTypeClass::ReadScriptData  this=TeamTypeClass  sig=csp ====
TeamTypeClass *__fastcall TeamTypeClass::ReadScriptData(char *a1, int a2)
{
  CCINIClass *KeyCount; // ebx
  CCINIClass *i; // edi
  unsigned __int8 *StringByIndex; // eax
  TeamTypeClass *result; // eax
  INIClass *v8; // ebx
  int j; // edi
  ObjectClass *v10; // [esp-4h] [ebp-34h]
  char Buffer[32]; // [esp+10h] [ebp-20h] BYREF

  KeyCount = (CCINIClass *)INIClass::GetKeyCount(a1, (INIClass *)&stru_830620.__pad_579C[54080]); /*0x6f1ac5*/
  for ( i = 0; (int)i < (int)KeyCount; i = (CCINIClass *)((char *)i + 1) ) /*0x6f1acb*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1, (CCINIClass *)&stru_830620.__pad_579C[54080], i); /*0x6f1ad5*/
    INIClass::GetString( /*0x6f1aee*/
      (unsigned __int8 ***)a1,
      (INIClass *)&stru_830620.__pad_579C[54080],
      StringByIndex,
      (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
      (INIClass *)Buffer,
      32);
    INIClass::ClearSection((int)a1, (INIClass *)Buffer, 0); /*0x6f1afc*/
  }
  INIClass::ClearSection((int)a1, (INIClass *)&stru_830620.__pad_579C[54080], 0); /*0x6f1b0f*/
  result = *(TeamTypeClass **)&MEMORY[0xA8D63C].__pad_14B0[452]; /*0x6f1b14*/
  v8 = 0; /*0x6f1b19*/
  for ( j = 0; j < *(int *)&MEMORY[0xA8D63C].__pad_14B0[452]; ++j ) /*0x6f1b1f*/
  {
    if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[440] + 4 * j) + 232) == a2 ) /*0x6f1b2f*/
    {
      v10 = (ObjectClass *)v8; /*0x6f1b37*/
      v8 = (INIClass *)((char *)v8 + 1); /*0x6f1b3e*/
      sprintf(Buffer, MEMORY[0x817F6C], v10); /*0x6f1b3f*/
      INIClass::SetString( /*0x6f1b5f*/
        a1,
        (INIClass *)&stru_830620.__pad_579C[54080],
        (INIClass *)Buffer,
        (INIClass *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[440] + 4 * j) + 36));
      (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[440] + 4 * j) + 104))( /*0x6f1b6f*/
        *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[440] + 4 * j),
        a1);
    }
    result = *(TeamTypeClass **)&MEMORY[0xA8D63C].__pad_14B0[452]; /*0x6f1b72*/
  }
  return result; /*0x6f1b7c*/
}


// ==== 0x006F1B90  TeamTypeClass::SaveToINI  this=TeamTypeClass  sig=csp ====
int __stdcall TeamTypeClass::SaveToINI(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6f1b9f*/
  if ( result >= 0 ) /*0x6f1ba6*/
    return 0; /*0x6f1ba8*/
  return result; /*0x6f1baa*/
}


// ==== 0x006F1BB0  TeamTypeClass::LoadTypeData  this=TeamTypeClass  sig=csp ====
int __stdcall TeamTypeClass::LoadTypeData(AbstractTypeClass *aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP0, (AbstractClass *)aP1); /*0x6f1bbb*/
  if ( result >= 0 ) /*0x6f1bc2*/
  {
    if ( aP0 ) /*0x6f1bc6*/
    {
      AbstractTypeClass::Init((int)aP0, (AbstractTypeClass *)&aP1); /*0x6f1bcf*/
      *(_DWORD *)aP0->__pad_0 = &TeamTypeClass::`vftable'; /*0x6f1bd4*/
      *(_DWORD *)&aP0->__pad_0[4] = &TeamTypeClass::`vftable'; /*0x6f1bda*/
      *(_DWORD *)&aP0->__pad_0[8] = &TeamTypeClass::`vftable'; /*0x6f1be1*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_TeamTypeClass; /*0x6f1be8*/
    }
    ObjectPtr::RegisterForTracking( /*0x6f1bfb*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_24[8]);
    ObjectPtr::RegisterForTracking( /*0x6f1c0c*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_24[20]);
    ObjectPtr::RegisterForTracking( /*0x6f1c1d*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].UINameLabel[11]);
    ObjectPtr::RegisterForTracking( /*0x6f1c2e*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].UINameLabel[15]);
    return 0; /*0x6f1c33*/
  }
  return result; /*0x6f1c35*/
}


// ==== 0x006F1C40  TeamTypeClass::GetClassIdentifier  this=TeamTypeClass  sig=csp ====
int __stdcall TeamTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6f1c46*/
    return -2147467261; /*0x6f1c48*/
  *a2 = -774134194; /*0x6f1c56*/
  a2[1] = 298977144; /*0x6f1c5e*/
  a2[2] = 1610655148; /*0x6f1c67*/
  a2[3] = -1252326136; /*0x6f1c70*/
  return 0; /*0x6f1c4d*/
}


// ==== 0x006F1C80  TeamTypeClass::PowerDrainUpdate  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::_vt13(int this, int *a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int result; // eax
  int v20; // eax
  int v21; // esi
  int v22; // eax

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x6f1c89*/
  Power::TimerProcess(*(_DWORD *)(this + 156)); /*0x6f1c97*/
  LOBYTE(v3) = *(_BYTE *)(this + 168); /*0x6f1c9c*/
  Power::FlagProcess(a2, v3); /*0x6f1ca5*/
  LOBYTE(v4) = *(_BYTE *)(this + 169); /*0x6f1caa*/
  v5 = Power::FlagProcess(a2, v4); /*0x6f1cb3*/
  LOBYTE(v5) = *(_BYTE *)(this + 170); /*0x6f1cb8*/
  Power::FlagProcess(a2, v5); /*0x6f1cc1*/
  LOBYTE(v6) = *(_BYTE *)(this + 171); /*0x6f1cc6*/
  Power::FlagProcess(a2, v6); /*0x6f1ccf*/
  LOBYTE(v7) = *(_BYTE *)(this + 172); /*0x6f1cd4*/
  v8 = Power::FlagProcess(a2, v7); /*0x6f1cdd*/
  LOBYTE(v8) = *(_BYTE *)(this + 173); /*0x6f1ce2*/
  Power::FlagProcess(a2, v8); /*0x6f1ceb*/
  LOBYTE(v9) = *(_BYTE *)(this + 174); /*0x6f1cf0*/
  Power::FlagProcess(a2, v9); /*0x6f1cf9*/
  LOBYTE(v10) = *(_BYTE *)(this + 175); /*0x6f1cfe*/
  v11 = Power::FlagProcess(a2, v10); /*0x6f1d07*/
  LOBYTE(v11) = *(_BYTE *)(this + 176); /*0x6f1d0c*/
  Power::FlagProcess(a2, v11); /*0x6f1d15*/
  LOBYTE(v12) = *(_BYTE *)(this + 177); /*0x6f1d1a*/
  Power::FlagProcess(a2, v12); /*0x6f1d23*/
  Power::TimerProcess(*(_DWORD *)(this + 180)); /*0x6f1d31*/
  Power::TimerProcess(*(_DWORD *)(this + 184)); /*0x6f1d3f*/
  Power::TimerProcess(*(_DWORD *)(this + 188)); /*0x6f1d4d*/
  v13 = *(_DWORD *)(this + 196); /*0x6f1d52*/
  if ( v13 ) /*0x6f1d5a*/
  {
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13); /*0x6f1d5e*/
    Power::TimerProcess(v14); /*0x6f1d64*/
  }
  v15 = *(_DWORD *)(this + 196); /*0x6f1d69*/
  if ( v15 ) /*0x6f1d71*/
  {
    v16 = (*(int (__stdcall **)(int))(*(_DWORD *)(v15 + 4) + 16))(v15 + 4); /*0x6f1d7a*/
    Power::TimerProcess(v16); /*0x6f1d80*/
  }
  Power::TimerProcess(*(_DWORD *)(this + 204)); /*0x6f1d8e*/
  v17 = *(_DWORD *)(this + 208); /*0x6f1d93*/
  if ( v17 ) /*0x6f1d9b*/
  {
    v18 = (*(int (__stdcall **)(int))(*(_DWORD *)(v17 + 4) + 16))(v17 + 4); /*0x6f1da4*/
    Power::TimerProcess(v18); /*0x6f1daa*/
  }
  Power::TimerProcess(*(_DWORD *)(this + 212)); /*0x6f1db8*/
  Power::TimerProcess(*(_DWORD *)(this + 216)); /*0x6f1dc6*/
  Power::TimerProcess(*(_DWORD *)(this + 220)); /*0x6f1dd4*/
  result = *(_DWORD *)(this + 224); /*0x6f1dd9*/
  if ( result ) /*0x6f1de1*/
  {
    v20 = (*(int (__stdcall **)(int))(*(_DWORD *)(result + 4) + 16))(result + 4); /*0x6f1dea*/
    result = Power::TimerProcess(v20); /*0x6f1df0*/
  }
  v21 = *(_DWORD *)(this + 228); /*0x6f1df5*/
  if ( v21 ) /*0x6f1dfd*/
  {
    v22 = (*(int (__stdcall **)(int))(*(_DWORD *)(v21 + 4) + 16))(v21 + 4); /*0x6f1e06*/
    return Power::TimerProcess(v22); /*0x6f1e0c*/
  }
  return result; /*0x6f1e11*/
}


// ==== 0x006F1E20  TriggerClass::EvaluateObjectForTrigger  this=TriggerClass  sig=csp ====
bool __thiscall TriggerClass::EvaluateObjectForTrigger(int this, TechnoClass *aP1, int a3)
{
  int queuedMission; // eax
  int v5; // eax
  int v6; // eax
  bool result; // al

  queuedMission = aP1[1].queuedMission; /*0x6f1e28*/
  result = 0; /*0x6f1f1b*/
  if ( (!queuedMission || this != *(_DWORD *)(queuedMission + 36)) && aP1->health > 0 ) /*0x6f1e40*/
  {
    if ( aP1->isAliveFlag ) /*0x6f1e46*/
    {
      if ( !aP1->inLimbo && !Team::AllMembersValid((int *)aP1->__pad_0) && aP1->focus == (void *)a3 ) /*0x6f1e7d*/
      {
        if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 388))(aP1) == -1 /*0x6f1e9e*/
          || (v5 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 388))(aP1),
              IPersistStream::SetField(v5)) )
        {
          if ( (aP1->__pad_3F7[42] || *(_BYTE *)(this + 169)) && (aP1->__pad_3F7[43] || !*(_BYTE *)(this + 169)) ) /*0x6f1ec5*/
          {
            v6 = aP1[1].queuedMission; /*0x6f1ecf*/
            if ( (!v6 || *(_DWORD *)(*(_DWORD *)(v6 + 36) + 180) < *(_DWORD *)(this + 180)) /*0x6f1f09*/
              && ((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1) != 2
               || !*(_DWORD *)(*(int (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)aP1->__pad_0 + 1016))(aP1, 0)
               || LODWORD(aP1->pitchAngle)) )
            {
              return 1; /*0x6f1e35*/
            }
          }
        }
      }
    }
  }
  return result; /*0x6f1f13*/
}


// ==== 0x006F1F30  TeamTypeClass::FlashAllInstances  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::FlashAllInstances(void *this, AnimClass *aP1)
{
  int result; // eax
  int i; // esi
  int v5; // ecx

  result = *(_DWORD *)&MEMORY[0x89F690].__pad_579C[62156]; /*0x6f1f30*/
  for ( i = 0; i < *(int *)&MEMORY[0x89F690].__pad_579C[62156]; ++i ) /*0x6f1f3d*/
  {
    v5 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62144] + 4 * i); /*0x6f1f49*/
    if ( *(void **)(v5 + 36) == this ) /*0x6f1f4f*/
      TeamTypeClass::Check((_DWORD *)v5, (int)aP1); /*0x6f1f52*/
    result = *(_DWORD *)&MEMORY[0x89F690].__pad_579C[62156]; /*0x6f1f57*/
  }
  return result; /*0x6f1f62*/
}


// ==== 0x006F1F70  TeamTypeClass::FindFirstInstance  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::FindFirstInstance(void *this)
{
  int v1; // edx
  char *i; // esi
  int result; // eax

  v1 = 0; /*0x6f1f78*/
  if ( MEMORY[0x8B40F8] <= 0 ) /*0x6f1f7c*/
    return 0; /*0x6f1f93*/
  for ( i = (char *)MEMORY[0x8B40EC]; ; i += 4 ) /*0x6f1f7e*/
  {
    result = *(_DWORD *)i; /*0x6f1f84*/
    if ( *(void **)(*(_DWORD *)i + 36) == this ) /*0x6f1f89*/
      break; /*0x6f1f89*/
    if ( ++v1 >= MEMORY[0x8B40F8] ) /*0x6f1f91*/
      return 0; /*0x6f1f91*/
  }
  return result; /*0x6f1f95*/
}


// ==== 0x006F1FA0  TeamTypeClass::ProcessTaskForce  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::ProcessTaskForce(int this)
{
  int v2; // edi
  int result; // eax
  int v4; // ebp
  int v5; // eax

  v2 = 0; /*0x6f1fa7*/
  result = *(_DWORD *)(this + 228); /*0x6f1fa9*/
  *(_BYTE *)(this + 240) = 1; /*0x6f1faf*/
  *(_BYTE *)(this + 241) = 0; /*0x6f1fb6*/
  *(_DWORD *)(this + 236) = 9; /*0x6f1fbc*/
  if ( *(int *)(result + 156) > 0 ) /*0x6f1fcc*/
  {
    v4 = 168; /*0x6f1fcf*/
    do /*0x6f201d*/
    {
      v5 = *(_DWORD *)(result + v4); /*0x6f1fd4*/
      if ( *(_BYTE *)(v5 + 3278) ) /*0x6f1fd7*/
      {
        if ( *(_DWORD *)(v5 + 1504) ) /*0x6f1fdf*/
          *(_BYTE *)(this + 241) = 1; /*0x6f1fef*/
        else
          *(_BYTE *)(this + 240) = 0; /*0x6f1fe7*/
      }
      *(_DWORD *)(this + 236) = globalHelper_0889F0(*(_DWORD *)(v5 + 1460), *(_DWORD *)(this + 236)); /*0x6f2007*/
      result = *(_DWORD *)(this + 228); /*0x6f200d*/
      ++v2; /*0x6f2013*/
      v4 += 8; /*0x6f2014*/
    }
    while ( v2 < *(_DWORD *)(result + 156) ); /*0x6f201d*/
  }
  if ( *(_BYTE *)(this + 246) ) /*0x6f2020*/
    *(_BYTE *)(this + 240) = 0; /*0x6f2028*/
  return result; /*0x6f202e*/
}


// ==== 0x006F2040  Helper_6F2040  this=-  sig=ida-proto ====
int sub_6F2040()
{
  int result; // eax
  int i; // esi

  result = MEMORY[0xA8ECB0]; /*0x6f2040*/
  for ( i = 0; i < MEMORY[0xA8ECB0]; ++i ) /*0x6f204a*/
  {
    TeamTypeClass::ProcessTaskForce(*((_DWORD *)MEMORY[0xA8ECA4] + i)); /*0x6f2054*/
    result = MEMORY[0xA8ECB0]; /*0x6f2059*/
  }
  return result; /*0x6f2063*/
}


// ==== 0x006F2070  Techno::GetOwnerHouse  this=ObjectClass  sig=csp ====
int __thiscall Techno_GetOwnerHouse(int this)
{
  int result; // eax

  result = *(_DWORD *)(this + 196); /*0x6f2073*/
  if ( !result ) /*0x6f207b*/
  {
    if ( BuildingType::IsSpecialType(*(void **)(this + 200)) ) /*0x6f2083*/
      return BuildingType::FindOwnerHouse(*(void **)(this + 200)); /*0x6f2093*/
    else
      return 0; /*0x6f2098*/
  }
  return result; /*0x6f2092*/
}


// ==== 0x006F20A0  TeamTypeClass::GetTypeIdentifier  this=TeamTypeClass  sig=csp ====
int TeamTypeClass::_vt11()
{
  return 35; /*0x6f20a5*/
}


// ==== 0x006F20B0  TeamTypeClass::GetObjectSize  this=TeamTypeClass  sig=csp ====
int TeamTypeClass::_vt12()
{
  return 248; /*0x6f20b5*/
}


// ==== 0x006F20C0  TeamTypeClass::GetAuxField  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::_vt16(_DWORD *this)
{
  return this->q098; /*0x6f20c6*/
}


// ==== 0x006F20D0  TeamTypeClass::ddtor  this=TeamTypeClass  sig=csp ====
TeamTypeClass *__thiscall TeamTypeClass::ddtor(void **Block, char a2)
{
  int v3; // eax
  int v4; // eax
  void **v6; // [esp+4h] [ebp-4h] BYREF

  *Block = &TeamTypeClass::`vftable'; /*0x6f20d6*/
  *(Block + 1) = &TeamTypeClass::`vftable'; /*0x6f20dc*/
  *(Block + 2) = &TeamTypeClass::`vftable'; /*0x6f20e3*/
  *(Block + 3) = &vt_TeamTypeClass; /*0x6f20ea*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x6f20f1*/
  v6 = Block; /*0x6f2106*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xA8ECA0] + 16))(&MEMORY[0xA8ECA0], &v6); /*0x6f210a*/
  if ( v3 != -1 && v3 < MEMORY[0xA8ECB0] && v3 < --MEMORY[0xA8ECB0] ) /*0x6f2125*/
  {
    do /*0x6f213d*/
    {
      ++v3; /*0x6f212d*/
      *((_DWORD *)MEMORY[0xA8ECA4] + v3 - 1) = *((_DWORD *)MEMORY[0xA8ECA4] + v3); /*0x6f2131*/
    }
    while ( v3 < MEMORY[0xA8ECB0] ); /*0x6f213d*/
  }
  v6 = Block; /*0x6f214f*/
  v4 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v6); /*0x6f2153*/
  if ( v4 != -1 && v4 < MEMORY[0xB0F680] && v4 < --MEMORY[0xB0F680] ) /*0x6f216e*/
  {
    do /*0x6f2186*/
    {
      ++v4; /*0x6f2176*/
      *((_DWORD *)MEMORY[0xB0F674] + v4 - 1) = *((_DWORD *)MEMORY[0xB0F674] + v4); /*0x6f217a*/
    }
    while ( v4 < MEMORY[0xB0F680] ); /*0x6f2186*/
  }
  AbstractTypeClass::Dtor(Block); /*0x6f218a*/
  if ( (a2 & 1) != 0 ) /*0x6f2194*/
    OperatorDelete(Block); /*0x6f2197*/
  return (TeamTypeClass *)Block; /*0x6f21a1*/
}


// ==== 0x006F21B0  _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall TeamTypeClass_28_::sub_6F21B0(int this)
{
  int v2; // eax

  v2 = *(_DWORD *)(this + 4); /*0x6f21b6*/
  *(_DWORD *)(this + 16) = 0; /*0x6f21b9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x6f21c0*/
  {
    __3_YAXPAX_Z((void *)(v2 - 4)); /*0x6f21d1*/
    *(_DWORD *)(this + 4) = 0; /*0x6f21d9*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6f21dc*/
  *(_DWORD *)(this + 8) = 0; /*0x6f21df*/
}


// ==== 0x006F21F0  _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall TeamTypeClass_28_::sub_6F21F0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6f21f0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x6f2205*/
  else
    return 0; /*0x6f21f7*/
}


// ==== 0x006F2210  _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::Seek  this=VectorClass  sig=csp ====
_DWORD *__thiscall TeamTypeClass_28_::_vt06(_DWORD *this, _DWORD *a2, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = this->Items; /*0x6f2210*/
  v4 = *(_DWORD *)(v3 + 8 * a3); /*0x6f2217*/
  v5 = v3 + 8 * a3; /*0x6f221a*/
  *a2 = v4; /*0x6f2221*/
  a2[1] = *(_DWORD *)(v5 + 4); /*0x6f2226*/
  return a2; /*0x6f2229*/
}


// ==== 0x006F2230  VectorClass::Team_Helper_6F2230  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_6F2230(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x6f2239*/
  this->Capacity = a2; /*0x6f2240*/
  this->q030 = 1; /*0x6f2243*/
  this->__pad_034 = 0; /*0x6f2247*/
  *this = &vt_VectorClass_TeamTypeClass_const; /*0x6f224b*/
  if ( a2 ) /*0x6f2251*/
  {
    if ( a3 ) /*0x6f2259*/
    {
      this->Items = a3; /*0x6f225b*/
    }
    else
    {
      this->Items = __2_YAPAXI_Z(4 * a2); /*0x6f226c*/
      this->__pad_034 = 1; /*0x6f226f*/
    }
  }
  *this = &DynamicVectorClass<TeamTypeClass const *>::`vftable'; /*0x6f2273*/
  this->q005 = 10; /*0x6f2279*/
  this->q010 = 0; /*0x6f2280*/
  return this; /*0x6f2289*/
}


// ==== 0x006F2290  _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall TeamTypeClass_28_::_vt01(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  v2 = this->Capacity; /*0x6f229b*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x6f22a0*/
  {
    v3 = 0; /*0x6f22a2*/
    if ( v2 <= 0 ) /*0x6f22a6*/
      return 1; /*0x6f22d6*/
    v4 = *(_DWORD *)(a2 + 4); /*0x6f22a8*/
    v5 = (_DWORD *)this->Items; /*0x6f22ab*/
    v6 = (_DWORD *)(v4 + 4); /*0x6f22ae*/
    v7 = v4 - (_DWORD)v5; /*0x6f22b1*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x6f22c3*/
    {
      ++v3; /*0x6f22c5*/
      v6 += 2; /*0x6f22c6*/
      v5 += 2; /*0x6f22c9*/
      if ( v3 >= v2 ) /*0x6f22ce*/
        return 1; /*0x6f22ce*/
    }
  }
  return 0; /*0x6f22d0*/
}


// ==== 0x006F22F0  _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall TeamTypeClass_28_::_vt02(void *this, int a2, int *a3)
{
  int *v4; // ebx
  int *v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // eax

  if ( a2 ) /*0x6f22fc*/
  {
    v4 = a3; /*0x6f2302*/
    this->IsInitialized = 0; /*0x6f2306*/
    if ( a3 ) /*0x6f230c*/
    {
      *a3 = a2; /*0x6f2347*/
      v6 = a3 + 1; /*0x6f234b*/
      if ( a2 - 1 >= 0 ) /*0x6f234e*/
      {
        v9 = a3 + 2; /*0x6f2350*/
        v10 = a2; /*0x6f2353*/
        do /*0x6f235e*/
        {
          *v9 = 0; /*0x6f2354*/
          v9 += 2; /*0x6f235a*/
          --v10; /*0x6f235d*/
        }
        while ( v10 ); /*0x6f235e*/
      }
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x6f2316*/
      if ( v5 ) /*0x6f2320*/
      {
        *v5 = a2; /*0x6f2325*/
        v6 = v5 + 1; /*0x6f2329*/
        if ( a2 - 1 >= 0 ) /*0x6f232c*/
        {
          v7 = v5 + 2; /*0x6f232e*/
          v8 = a2; /*0x6f2331*/
          do /*0x6f233c*/
          {
            *v7 = 0; /*0x6f2332*/
            v7 += 2; /*0x6f2338*/
            --v8; /*0x6f233b*/
          }
          while ( v8 ); /*0x6f233c*/
        }
      }
      else
      {
        v6 = 0; /*0x6f2340*/
      }
    }
    this->IsInitialized = 1; /*0x6f2362*/
    if ( v6 ) /*0x6f2366*/
    {
      if ( this->Items ) /*0x6f2371*/
      {
        v12 = this->Capacity; /*0x6f2378*/
        if ( a2 < v12 ) /*0x6f237d*/
          v12 = a2; /*0x6f237f*/
        v13 = 0; /*0x6f2381*/
        if ( v12 > 0 ) /*0x6f2385*/
        {
          do /*0x6f239d*/
          {
            v14 = this->Items; /*0x6f2387*/
            ++v13; /*0x6f238a*/
            v6[2 * v13 - 2] = *(_DWORD *)(v14 + 8 * v13 - 8); /*0x6f2391*/
            v6[2 * v13 - 1] = *(_DWORD *)(v14 + 8 * v13 - 4); /*0x6f2399*/
          }
          while ( v13 < v12 ); /*0x6f239d*/
          v4 = a3; /*0x6f239f*/
        }
        if ( this->IsAllocated ) /*0x6f23a3*/
        {
          v15 = this->Items; /*0x6f23aa*/
          if ( v15 ) /*0x6f23af*/
            __3_YAXPAX_Z((void *)(v15 - 4)); /*0x6f23b9*/
          this->Items = 0; /*0x6f23c1*/
        }
      }
      this->Items = v6; /*0x6f23ca*/
      this->Capacity = a2; /*0x6f23d2*/
      this->IsAllocated = v4 == 0; /*0x6f23d5*/
      return 1; /*0x6f23db*/
    }
    else
    {
      return 0; /*0x6f236b*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6f23e5*/
    return 1; /*0x6f23eb*/
  }
}


// ==== 0x006F2400  _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall TeamTypeClass_28_::_vt03(int this)
{
  int v2; // eax

  v2 = *(_DWORD *)(this + 4); /*0x6f2406*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x6f240d*/
  {
    __3_YAXPAX_Z((void *)(v2 - 4)); /*0x6f241e*/
    *(_DWORD *)(this + 4) = 0; /*0x6f2426*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6f2429*/
  *(_DWORD *)(this + 8) = 0; /*0x6f242c*/
}


// ==== 0x006F2440  _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::Read  this=VectorClass  sig=csp ====
int __thiscall TeamTypeClass_28_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x6f2440*/
    return 0; /*0x6f244e*/
  v3 = *(_DWORD *)(this + 8); /*0x6f2454*/
  result = 0; /*0x6f2457*/
  if ( v3 <= 0 ) /*0x6f245b*/
    return -1; /*0x6f247c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x6f2461*/
  {
    if ( ++result >= v3 ) /*0x6f247a*/
      return -1; /*0x6f247a*/
  }
  return result; /*0x6f244b*/
}


// ==== 0x006F2490  _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall TeamTypeClass_28_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6f2490*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x6f24a5*/
  else
    return 0; /*0x6f2497*/
}


// ==== 0x006F24B0  _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall TeamTypeClass_28_::sub_6F24B0(void *this, int a2, int *a3)
{
  int *v4; // ebp
  int *v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  void *v15; // ebp
  int v16; // eax

  if ( a2 ) /*0x6f24bc*/
  {
    v4 = a3; /*0x6f24c2*/
    this->IsInitialized = 0; /*0x6f24c6*/
    if ( a3 ) /*0x6f24cc*/
    {
      *a3 = a2; /*0x6f2507*/
      v6 = a3 + 1; /*0x6f250c*/
      if ( a2 - 1 >= 0 ) /*0x6f250f*/
      {
        v9 = a3 + 2; /*0x6f2511*/
        v10 = a2; /*0x6f2514*/
        do /*0x6f251f*/
        {
          *v9 = 0; /*0x6f2515*/
          v9 += 2; /*0x6f251b*/
          --v10; /*0x6f251e*/
        }
        while ( v10 ); /*0x6f251f*/
      }
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x6f24d6*/
      if ( v5 ) /*0x6f24e0*/
      {
        *v5 = a2; /*0x6f24e5*/
        v6 = v5 + 1; /*0x6f24e9*/
        if ( a2 - 1 >= 0 ) /*0x6f24ec*/
        {
          v7 = v5 + 2; /*0x6f24ee*/
          v8 = a2; /*0x6f24f1*/
          do /*0x6f24fc*/
          {
            *v7 = 0; /*0x6f24f2*/
            v7 += 2; /*0x6f24f8*/
            --v8; /*0x6f24fb*/
          }
          while ( v8 ); /*0x6f24fc*/
        }
      }
      else
      {
        v6 = 0; /*0x6f2500*/
      }
    }
    this->IsInitialized = 1; /*0x6f2523*/
    if ( !v6 ) /*0x6f2527*/
      return 0; /*0x6f25c7*/
    if ( this->Items ) /*0x6f252d*/
    {
      v11 = this->DynamicVector_field_0x8; /*0x6f2534*/
      if ( a2 < v11 ) /*0x6f2539*/
        v11 = a2; /*0x6f253b*/
      v12 = 0; /*0x6f253d*/
      if ( v11 > 0 ) /*0x6f2541*/
      {
        do /*0x6f2559*/
        {
          v13 = this->Items; /*0x6f2543*/
          ++v12; /*0x6f2546*/
          v6[2 * v12 - 2] = *(_DWORD *)(v13 + 8 * v12 - 8); /*0x6f254d*/
          v6[2 * v12 - 1] = *(_DWORD *)(v13 + 8 * v12 - 4); /*0x6f2555*/
        }
        while ( v12 < v11 ); /*0x6f2559*/
        v4 = a3; /*0x6f255b*/
      }
      if ( this->IsAllocated ) /*0x6f255f*/
      {
        v14 = this->Items; /*0x6f2566*/
        if ( v14 ) /*0x6f256b*/
        {
          v15 = (void *)(v14 - 4); /*0x6f2570*/
          Array::ForEachReverse(v14, 8, *(_DWORD *)(v14 - 4), (int (__thiscall *)(int))nullsub_240); /*0x6f257c*/
          __3_YAXPAX_Z(v15); /*0x6f2582*/
          v4 = a3; /*0x6f2587*/
        }
        this->Items = 0; /*0x6f258e*/
      }
    }
    this->Items = v6; /*0x6f2597*/
    this->DynamicVector_field_0x8 = a2; /*0x6f259f*/
    this->IsAllocated = v4 == 0; /*0x6f25a2*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6f25ab*/
  }
  v16 = this->DynamicVector_field_0x8; /*0x6f25ae*/
  if ( v16 < this->Items ) /*0x6f25b6*/
    this->Items = v16; /*0x6f25b8*/
  return 1; /*0x6f25bb*/
}


// ==== 0x006F25D0  nullsub_240  this=-  sig=ida-proto ====
void __thiscall nullsub_240(void *this)
{
  ; /*0x6f25d0*/
}


// ==== 0x006F25E0  ObjectClass::Team_Helper_6F25E0  this=ObjectClass  sig=csp ====
char __thiscall sub_6F25E0(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = this->vtable3; /*0x6f25e3*/
  if ( this->uniqueId >= v3 ) /*0x6f25eb*/
  {
    if ( !this->attachedTag && v3 ) /*0x6f25f6*/
      return 0; /*0x6f25f6*/
    v4 = this->abstractFlags; /*0x6f25f8*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x6f2608*/
      return 0; /*0x6f260f*/
  }
  v6 = this->uniqueId; /*0x6f2615*/
  v7 = this->vtable2; /*0x6f2618*/
  this->uniqueId = v6 + 1; /*0x6f261e*/
  *(_DWORD *)(v7 + 8 * v6) = *a2; /*0x6f2627*/
  *(_DWORD *)(v7 + 8 * v6 + 4) = a2[1]; /*0x6f262e*/
  return 1; /*0x6f2611*/
}


// ==== 0x006F2640  _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::FindItem  this=DynamicVector  sig=csp ====
int __thiscall TeamTypeClass_28_::sub_6F2640(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x6f2640*/
  result = 0; /*0x6f2645*/
  if ( v2 <= 0 ) /*0x6f264b*/
    return -1; /*0x6f266c*/
  for ( i = (_DWORD *)this->Items; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x6f2651*/
  {
    if ( ++result >= v2 ) /*0x6f266a*/
      return -1; /*0x6f266a*/
  }
  return result; /*0x6f266f*/
}


// ==== 0x006F2680  _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall TeamTypeClass_28_::QueryInterface(_DWORD *Block, char a2)
{
  int v3; // eax

  v3 = *(Block + 1); /*0x6f2683*/
  *Block = &vt_VectorClass_DiscreteDistributionClass_AITriggerTypeClass_DistributionObject_AITriggerTypeClass; /*0x6f2686*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6f2690*/
  {
    __3_YAXPAX_Z((void *)(v3 - 4)); /*0x6f26a3*/
    *(Block + 1) = 0; /*0x6f26ab*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6f26b6*/
  *(Block + 2) = 0; /*0x6f26bc*/
  if ( (a2 & 1) != 0 ) /*0x6f26c3*/
    __3_YAXPAX_Z(Block); /*0x6f26c6*/
  return (VectorClass *)Block; /*0x6f26d0*/
}


// ==== 0x006F26E0  ObjectClass::Team_Helper_6F26E0  this=ObjectClass  sig=csp ====
char *__thiscall Team_Helper_6F26E0(char *Block, char a2)
{
  char *v2; // esi

  v2 = Block; /*0x6f26e1*/
  if ( (a2 & 2) != 0 ) /*0x6f26ea*/
  {
    v2 = Block - 4; /*0x6f26ef*/
    if ( (a2 & 1) != 0 ) /*0x6f26f6*/
    {
      __3_YAXPAX_Z(v2); /*0x6f26f9*/
      return v2; /*0x6f2704*/
    }
  }
  else if ( (a2 & 1) != 0 ) /*0x6f270a*/
  {
    __3_YAXPAX_Z(Block); /*0x6f270d*/
  }
  return v2; /*0x6f2703*/
}


// ==== 0x006F2720  _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::Constructor  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall TeamTypeClass_28_::Constructor(_DWORD *Block, char a2)
{
  int v3; // eax

  v3 = *(Block + 1); /*0x6f2723*/
  *Block = &vt_VectorClass_DiscreteDistributionClass_AITriggerTypeClass_DistributionObject_AITriggerTypeClass; /*0x6f2726*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6f2730*/
  {
    __3_YAXPAX_Z((void *)(v3 - 4)); /*0x6f2743*/
    *(Block + 1) = 0; /*0x6f274b*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6f2756*/
  *(Block + 2) = 0; /*0x6f275c*/
  if ( (a2 & 1) != 0 ) /*0x6f2763*/
    __3_YAXPAX_Z(Block); /*0x6f2766*/
  return (DynamicVector *)Block; /*0x6f2770*/
}


// ==== 0x006F2780  ObjectClass::Team_Helper_6F2780  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Team_Helper_6F2780(_DWORD *this, IUnknown *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (_DWORD *)aP1 ) /*0x6f278a*/
    return this; /*0x6f278a*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x6f278e*/
  v3 = aP1->field_8; /*0x6f2791*/
  this->vtable3 = v3; /*0x6f2796*/
  if ( !v3 ) /*0x6f2799*/
  {
    this->vtable2 = 0; /*0x6f27da*/
    this->attachedTag = 0; /*0x6f27e1*/
    return this; /*0x6f27e5*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x6f27a3*/
  this->vtable2 = v4; /*0x6f27ab*/
  if ( !v4 ) /*0x6f27b0*/
    return this; /*0x6f27b0*/
  v5 = this->vtable3; /*0x6f27b2*/
  v6 = 0; /*0x6f27b5*/
  this->attachedTag = 1; /*0x6f27b9*/
  if ( v5 <= 0 ) /*0x6f27bd*/
    return this; /*0x6f27bd*/
  do /*0x6f27d1*/
  {
    *(_DWORD *)(this->vtable2 + 4 * v6) = *(_DWORD *)(aP1->field_4 + 4 * v6); /*0x6f27c8*/
    ++v6; /*0x6f27ce*/
  }
  while ( v6 < this->vtable3 ); /*0x6f27d1*/
  return this; /*0x6f27d5*/
}


// ==== 0x006F27F0  VectorClass::Team_Helper_6F27F0  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_6F27F0(_DWORD *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx

  this->Items = 0; /*0x6f27fa*/
  this->Capacity = a2; /*0x6f2801*/
  this->q030 = 1; /*0x6f2804*/
  this->__pad_034 = 0; /*0x6f2808*/
  *this = &vt_VectorClass_DiscreteDistributionClass_AITriggerTypeClass_DistributionObject_AITriggerTypeClass; /*0x6f280c*/
  if ( !a2 ) /*0x6f2812*/
    return this; /*0x6f2812*/
  if ( a3 ) /*0x6f281a*/
  {
    *a3 = a2; /*0x6f281f*/
    if ( a2 - 1 >= 0 ) /*0x6f2826*/
    {
      v4 = a3 + 2; /*0x6f2828*/
      v5 = a2; /*0x6f282b*/
      do /*0x6f2836*/
      {
        *v4 = 0; /*0x6f282c*/
        v4 += 2; /*0x6f2832*/
        --v5; /*0x6f2835*/
      }
      while ( v5 ); /*0x6f2836*/
    }
    this->Items = a3 + 1; /*0x6f2838*/
    return this; /*0x6f283f*/
  }
  v7 = __2_YAPAXI_Z(8 * a2 + 4); /*0x6f284a*/
  if ( !v7 ) /*0x6f2854*/
  {
    this->__pad_034 = 1; /*0x6f2884*/
    this->Items = 0; /*0x6f2888*/
    return this; /*0x6f288b*/
  }
  *v7 = a2; /*0x6f2859*/
  v8 = v7 + 1; /*0x6f285d*/
  if ( a2 - 1 >= 0 ) /*0x6f2860*/
  {
    v9 = v7 + 2; /*0x6f2862*/
    v10 = a2; /*0x6f2865*/
    do /*0x6f2870*/
    {
      *v9 = 0; /*0x6f2866*/
      v9 += 2; /*0x6f286c*/
      --v10; /*0x6f286f*/
    }
    while ( v10 ); /*0x6f2870*/
  }
  this->__pad_034 = 1; /*0x6f2874*/
  this->Items = v8; /*0x6f2878*/
  return this; /*0x6f283d*/
}


// ==== 0x006F28A0  sub_6F28A0  this=-  sig=ida-proto ====
void sub_6F28A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6f28ac*/
  MEMORY[0xB0EA58] = Math::Sqrt(v0 + v0); /*0x6f28be*/
}


// ==== 0x006F28D0  sub_6F28D0  this=-  sig=ida-proto ====
void sub_6F28D0()
{
  MEMORY[0xB0EB28] = MEMORY[0xB0EA58] / 60.0; /*0x6f28dc*/
}


// ==== 0x006F28F0  sub_6F28F0  this=-  sig=ida-proto ====
void sub_6F28F0()
{
  MEMORY[0xB0EB10] = 1.0 / MEMORY[0xB0EB28]; /*0x6f28fc*/
}


// ==== 0x006F2910  sub_6F2910  this=-  sig=ida-proto ====
void sub_6F2910()
{
  MEMORY[0xB0EB08] = 0.0174532925199433 * 45.0; /*0x6f291c*/
}


// ==== 0x006F2930  sub_6F2930  this=-  sig=ida-proto ====
void sub_6F2930()
{
  MEMORY[0xB0EA60] = 0.0174532925199433 * 60.0; /*0x6f293c*/
}


// ==== 0x006F2950  sub_6F2950  this=-  sig=ida-proto ====
void sub_6F2950()
{
  MEMORY[0xB0EA30] = 0.0174532925199433 * 90.0; /*0x6f295c*/
}


// ==== 0x006F2970  sub_6F2970  this=-  sig=ida-proto ====
__int64 sub_6F2970()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0EA30] - MEMORY[0xB0EA60]); /*0x6f2982*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0EA58] * 0.5); /*0x6f2996*/
  MEMORY[0xB0EB34] = result; /*0x6f299b*/
  return result; /*0x6f29a0*/
}


// ==== 0x006F29B0  sub_6F29B0  this=-  sig=ida-proto ====
void sub_6F29B0()
{
  MEMORY[0xB0EA68] = Math::ArcTan((double)MEMORY[0xB0EB34] * 0.00390625); /*0x6f29c7*/
}


// ==== 0x006F29E0  sub_6F29E0  this=-  sig=ida-proto ====
void sub_6F29E0()
{
  MEMORY[0xB0EAA0] = Math::ArcTan((double)(2 * MEMORY[0xB0EB34]) / MEMORY[0xB0EA58]); /*0x6f2a02*/
}


// ==== 0x006F2A10  sub_6F2A10  this=-  sig=ida-proto ====
__int64 sub_6F2A10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0EB34]) + 0.5); /*0x6f2a2b*/
  MEMORY[0xB0EB24] = result; /*0x6f2a30*/
  return result; /*0x6f2a36*/
}


// ==== 0x006F2A40  sub_6F2A40  this=-  sig=ida-proto ====
int sub_6F2A40()
{
  MEMORY[0xB0EA50] = 0; /*0x6f2a42*/
  return 0; /*0x6f2a4e*/
}


// ==== 0x006F2A50  sub_6F2A50  this=-  sig=ida-proto ====
int sub_6F2A50()
{
  MEMORY[0xB0EA90] = 0; /*0x6f2a52*/
  MEMORY[0xB0EA94] = 0; /*0x6f2a57*/
  MEMORY[0xB0EA98] = 0; /*0x6f2a5c*/
  return 0; /*0x6f2a61*/
}


// ==== 0x006F2A70  sub_6F2A70  this=-  sig=ida-proto ====
int sub_6F2A70()
{
  MEMORY[0xB0EB20] = 0; /*0x6f2a75*/
  MEMORY[0xB0EB18] = 128; /*0x6f2a7f*/
  MEMORY[0xB0EB1C] = 128; /*0x6f2a84*/
  return 128; /*0x6f2a89*/
}


// ==== 0x006F2A90  sub_6F2A90  this=-  sig=ida-proto ====
int sub_6F2A90()
{
  MEMORY[0xB0EA40] = 0; /*0x6f2a92*/
  MEMORY[0xB0EA44] = 0; /*0x6f2a97*/
  MEMORY[0xB0EA48] = 0; /*0x6f2a9c*/
  MEMORY[0xB0EA4C] = 0; /*0x6f2aa1*/
  return 0; /*0x6f2aa6*/
}


// ==== 0x006F2AB0  sub_6F2AB0  this=-  sig=ida-proto ====
int sub_6F2AB0()
{
  MEMORY[0xB0EA80] = (int)MEMORY[0xA8ED84]; /*0x6f2aba*/
  MEMORY[0xB0EA88] = 0; /*0x6f2abf*/
  return atexit(sub_6F2AD0); /*0x6f2acf*/
}


// ==== 0x006F2AD0  sub_6F2AD0  this=-  sig=ida-proto ====
void __cdecl sub_6F2AD0()
{
  if ( (MEMORY[0xB0EA38] & 1) == 0 ) /*0x6f2ada*/
    MEMORY[0xB0EA38] |= 1u; /*0x6f2ade*/
}


// ==== 0x006F2AF0  sub_6F2AF0  this=-  sig=ida-proto ====
int sub_6F2AF0()
{
  MEMORY[0xB0EA70] = Timer::GetTicks(); /*0x6f2aff*/
  MEMORY[0xB0EA78] = 0; /*0x6f2b04*/
  return atexit(sub_6F2B20); /*0x6f2b14*/
}


// ==== 0x006F2B20  sub_6F2B20  this=-  sig=ida-proto ====
void __cdecl sub_6F2B20()
{
  if ( (MEMORY[0xB0EA38] & 2) == 0 ) /*0x6f2b2a*/
    MEMORY[0xB0EA38] |= 2u; /*0x6f2b2e*/
}


// ==== 0x006F2B40  TechnoClass::TechnoClass  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::TechnoClass(_DWORD *this, AbstractClass *aP1)
{
  int v3; // eax
  IUnknown *v4; // edx
  IUnknown *v5; // ecx
  IUnknown *v6; // ecx
  IUnknown *v7; // edx
  IUnknown *v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax

  RadioClass::Release(this); /*0x6f2b46*/
  this->q0F0 = 0; /*0x6f2b52*/
  this->isUseless = 0; /*0x6f2b58*/
  this->q0F8 = 0; /*0x6f2b5e*/
  this->chronoWarpedByHouse = 0; /*0x6f2b64*/
  v3 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2b6a*/
  this->transporter_e = 0; /*0x6f2b6f*/
  this->passengers_e = v3; /*0x6f2b75*/
  this->turretChargeTimer = 0; /*0x6f2b7b*/
  this->currentTurretNumber_e = 1; /*0x6f2b81*/
  this->secondaryTurretIndex = 0; /*0x6f2b87*/
  this->q118 = 0; /*0x6f2b8d*/
  this->q11C = 0; /*0x6f2b93*/
  this->q120 = -100; /*0x6f2b9c*/
  this->q124 = -1; /*0x6f2ba6*/
  this->q128 = -1; /*0x6f2bac*/
  this->behindAnim = 0; /*0x6f2bb2*/
  this->deployAnim = 0; /*0x6f2bb8*/
  this->inAirFlag = 0; /*0x6f2bbe*/
  this->currentWeaponSlot = 0; /*0x6f2bc4*/
  this->currentWeaponSlot_e = -1; /*0x6f2bca*/
  this->currentRank = 0; /*0x6f2bd0*/
  this->gattlingStage = 0; /*0x6f2bd6*/
  this->gattlingValue = 0; /*0x6f2be2*/
  unknown_libname_35(this + 84); /*0x6f2be8*/
  this->alignmentPadding154 = 0; /*0x6f2bf2*/
  this->armorMultiplier = 1072693248; /*0x6f2bf8*/
  this->q160 = 0; /*0x6f2bfe*/
  this->firepowerMultiplier = 1072693248; /*0x6f2c04*/
  this->q168 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c10*/
  this->q170 = 0; /*0x6f2c16*/
  v4 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c1c*/
  this->q17C = 0; /*0x6f2c22*/
  this->radarFlashTimer = v4; /*0x6f2c28*/
  this->targetingTimer = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c33*/
  this->q188 = 45; /*0x6f2c39*/
  v5 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c43*/
  this->q194 = 0; /*0x6f2c49*/
  this->q18C = v5; /*0x6f2c4f*/
  this->q198 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c5b*/
  this->q1A0 = 0; /*0x6f2c61*/
  this->q1A4 = 10; /*0x6f2c67*/
  this->ironTintStage = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c76*/
  this->airstrikeTimer = 0; /*0x6f2c7c*/
  v6 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2c82*/
  this->q1BC = 0; /*0x6f2c88*/
  this->q1B4 = v6; /*0x6f2c8e*/
  this->airstrikeTintStage_e = 0; /*0x6f2c94*/
  this->airstrikeTintStage_e = 0; /*0x6f2c9a*/
  this->forceShielded = 0; /*0x6f2ca0*/
  this->isDeactivated = 0; /*0x6f2ca6*/
  this->drainTarget = 0; /*0x6f2cac*/
  this->drainingMe = 0; /*0x6f2cb2*/
  this->drainAnim = 0; /*0x6f2cb8*/
  v7 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2cbe*/
  this->q1E8 = 0; /*0x6f2cc4*/
  this->isDisguisedFlag = v7; /*0x6f2cca*/
  this->disguiseBlinkTimer = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2cd5*/
  this->q07D = 0; /*0x6f2cdb*/
  this->isTargetedByChrono = 0; /*0x6f2ce1*/
  this->isTargetedByChrono_e = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2ced*/
  this->q204 = 0; /*0x6f2cf3*/
  this->currentBurstCount = 0; /*0x6f2cf9*/
  this->currentBurstCount_e = 0; /*0x6f2cff*/
  this->currentBurstCount_e = 0; /*0x6f2d05*/
  this->currentBarrelIndex = -1; /*0x6f2d0f*/
  this->displayProductionTo = 0; /*0x6f2d15*/
  this->Owner = aP1; /*0x6f2d1b*/
  this->focus = 0; /*0x6f2d21*/
  this->owner = 0; /*0x6f2d27*/
  this->cloakState = 0; /*0x6f2d2d*/
  this->q22C = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2d38*/
  this->q234 = 0; /*0x6f2d3e*/
  this->q238 = 0; /*0x6f2d44*/
  this->warpFactor = 1; /*0x6f2d4a*/
  v8 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2d50*/
  this->q092 = 0; /*0x6f2d56*/
  this->warpFactor_e = v8; /*0x6f2d5c*/
  this->q24C = 0; /*0x6f2d62*/
  this->isChronosphereImmune = 0; /*0x6f2d68*/
  this->lastSightCoords = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6908]; /*0x6f2d79*/
  this->q096 = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6912]; /*0x6f2d85*/
  this->q097 = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6916]; /*0x6f2d93*/
  this->lastSightRange = 0; /*0x6f2d96*/
  this->lastSightHeight = 0; /*0x6f2d9c*/
  this->gapSuperCharged = 0; /*0x6f2da2*/
  this->isGeneratingGap = 0; /*0x6f2da8*/
  this->gapRadius = 0; /*0x6f2dae*/
  this->isBeingWarpedOut = 0; /*0x6f2db4*/
  this->isWarpingOut = 0; /*0x6f2dba*/
  this->q9C8 = 0; /*0x6f2dc0*/
  this->temporalUsing = 0; /*0x6f2dc6*/
  this->temporalTargetingMe = 0; /*0x6f2dcc*/
  this->isImmobilized = 0; /*0x6f2dd2*/
  this->gapRadius_e = 0; /*0x6f2dd8*/
  this->isBeingWarpedOut_e = 0; /*0x6f2dde*/
  this->temporalUsing_e = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6908]; /*0x6f2dea*/
  this->temporalTargetingMe_e = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6912]; /*0x6f2df1*/
  v9 = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6916]; /*0x6f2df4*/
  this->spawnManager = 0; /*0x6f2dfa*/
  this->spawnOwner = 0; /*0x6f2e00*/
  this->isImmobilized_e = v9; /*0x6f2e06*/
  this->owningHouseIndex0 = 0; /*0x6f2e09*/
  this->chronoLockRemaining = 0; /*0x6f2e0f*/
  this->chronoDestCoords = 0; /*0x6f2e15*/
  this->sprayOffsetIndex = 0; /*0x6f2e1b*/
  this->isUncrushable = 0; /*0x6f2e21*/
  this->airstrike = 0; /*0x6f2e27*/
  this->isBerserk = 0; /*0x6f2e2d*/
  this->isBerserk_duration_left = 0; /*0x6f2e33*/
  this->sprayOffsetIndex_e = 0; /*0x6f2e39*/
  this->isUncrushable_e = 0; /*0x6f2e3f*/
  this->rockerLinkedUnit = 0; /*0x6f2e45*/
  this->locomotorTarget = 0; /*0x6f2e4b*/
  this->locomotorSource = 0; /*0x6f2e51*/
  this->target = 0; /*0x6f2e57*/
  this->lastTarget = 0; /*0x6f2e5d*/
  this->captureManager = 0; /*0x6f2e63*/
  this->mindControlledBy = 0; /*0x6f2e69*/
  this->mindControlledBy_a_unit = 0; /*0x6f2e6f*/
  this->mindControlRingAnim = 0; /*0x6f2e75*/
  this->mindControlledBy_house = 0; /*0x6f2e7b*/
  this->slaveManager = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2e86*/
  this->originalOwnerHouse = 0; /*0x6f2e8c*/
  this->bunkerLinkedUnit = 0; /*0x6f2e98*/
  this->pitchAngle = -1; /*0x6f2e9e*/
  this->diskLaserTimer = 0; /*0x6f2ea4*/
  this->damageParticles = 0; /*0x6f2eaa*/
  this->railgunParticles = 0; /*0x6f2eb0*/
  this->auxParticles1 = 0; /*0x6f2eb6*/
  this->auxParticles2 = 0; /*0x6f2ebc*/
  this->firingParticles = 0; /*0x6f2ec2*/
  this->waveEffect = -1; /*0x6f2ec8*/
  Delegate::GetField(this + 207); /*0x6f2ece*/
  TechnoClass::checkCloakState((int)(this + 212)); /*0x6f2ed9*/
  FrameSnapshot::InitMax((_WORD *)this + 440, 3); /*0x6f2ee6*/
  FrameSnapshot::Init((_WORD *)this + 452); /*0x6f2ef1*/
  FrameSnapshot::Init((_WORD *)this + 464); /*0x6f2efc*/
  this->q3B8 = 0; /*0x6f2f01*/
  this->barrelRecoil = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f2f0d*/
  this->__pad_F10 = 0; /*0x6f2f13*/
  *((_WORD *)this + 485) = 0; /*0x6f2f1e*/
  this->countedAsOwned = 0; /*0x6f2f25*/
  this->isUseless = 0; /*0x6f2f3d*/
  this->isALoaner = 0; /*0x6f2f55*/
  this->q3D5 = 0; /*0x6f2f5b*/
  this->q3D8 = 2; /*0x6f2f61*/
  this->isTurretLocked = 1; /*0x6f2f67*/
  this->isDiscoveredByComputer = 1; /*0x6f2f6d*/
  this->sightRangeBonus = 1; /*0x6f2f73*/
  this->manipulatedByUnit = 0; /*0x6f2f79*/
  this->chronoWarpedByHouse = 0; /*0x6f2f7f*/
  this->q3F8 = 2; /*0x6f2f85*/
  this->q0FF = 1; /*0x6f2f8b*/
  this->passengers_e = 1; /*0x6f2f91*/
  this->q404 = 1; /*0x6f2f97*/
  this->q40C = 0; /*0x6f2f9d*/
  this->q410 = 0; /*0x6f2fa3*/
  this->isTether = 0; /*0x6f2fa9*/
  this->isAlternativeTether = 0; /*0x6f2faf*/
  this->isOwnedByCurrentPlayer = 0; /*0x6f2fb5*/
  this->isDiscoveredByCurrentPlayer = 0; /*0x6f2fbb*/
  this->q41C = 0; /*0x6f2fc1*/
  this->q41D = 0; /*0x6f2fc7*/
  this->q41E = 0; /*0x6f2fcd*/
  this->q41F = 0; /*0x6f2fd3*/
  this->q420 = 0; /*0x6f2fd9*/
  this->q421 = 1; /*0x6f2fdf*/
  this->q422 = 1; /*0x6f2fe6*/
  this->q423 = 0; /*0x6f2fed*/
  this->q424 = 0; /*0x6f2ff3*/
  this->q425 = 0; /*0x6f2ff9*/
  this->q426 = 0; /*0x6f2fff*/
  this->q427 = 0; /*0x6f3005*/
  this->q428 = 0; /*0x6f300b*/
  this->q42C = 0; /*0x6f3011*/
  this->q430 = 0; /*0x6f3017*/
  this->isMouseHovering = 0; /*0x6f301d*/
  this->shouldBeReselectOnUnlimbo = 0; /*0x6f3023*/
  this->previousTeam = 0; /*0x6f3029*/
  this->isCountedAsOwned_special = 0; /*0x6f302f*/
  this->isAbsorbed = 0; /*0x6f3035*/
  this->isGrindingInProgress = 0; /*0x6f303b*/
  this->grindingAnimHandle = 0; /*0x6f3046*/
  this->vecInt_Items = 0; /*0x6f3051*/
  this->vecInt_Capacity = 0; /*0x6f3057*/
  *((_BYTE *)this + 1100) = 1; /*0x6f305d*/
  this->vecInt_IsAllocated = 0; /*0x6f3064*/
  this->currentTargetThreatValues = &vt_DynamicVectorClass_int; /*0x6f306a*/
  this->__pad_115 = 10; /*0x6f3074*/
  this->secondaryTurretIndex = 0; /*0x6f307a*/
  this->attackedTargets = 0; /*0x6f3080*/
  this->audioController3 = 0; /*0x6f3086*/
  *((_BYTE *)this + 1124) = 1; /*0x6f308c*/
  this->vecAbs_IsAllocated = 0; /*0x6f3093*/
  this->currentTargets = &vt_DynamicVectorClass_AbstractClass; /*0x6f3099*/
  this->q11B = 10; /*0x6f309f*/
  this->q11A = 0; /*0x6f30a5*/
  this->audioLoopIndex3 = 0; /*0x6f30ab*/
  this->audioVolume3 = 0; /*0x6f30b1*/
  this->audioController4 = 1; /*0x6f30b7*/
  this->q47D = 0; /*0x6f30be*/
  this->q470 = &vt_DynamicVectorClass_AbstractClass; /*0x6f30c4*/
  this->q121 = 10; /*0x6f30ca*/
  this->q120 = 0; /*0x6f30d0*/
  this->isTurretRotateSoundPlaying = 1; /*0x6f30d6*/
  this->turretIsRotating = 0; /*0x6f30dc*/
  this->isGattlingSoundPlaying = 0; /*0x6f30e2*/
  this->audioHandle4 = 0; /*0x6f30e8*/
  this->isAudio5Active = 0; /*0x6f30ee*/
  this->audioHandle5 = 0; /*0x6f30f4*/
  this->isVoiceOverride = 0; /*0x6f30fa*/
  this->voiceHandle = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6f3106*/
  this->voiceVolumeModifier = 0; /*0x6f310c*/
  this->empLockRemaining = 0; /*0x6f3112*/
  this->firingRadBeam = 0; /*0x6f3118*/
  this->planningToken = 0; /*0x6f311e*/
  this->disguiseAsType = 0; /*0x6f3124*/
  this->isDisguisedFlag_as_house = 0; /*0x6f312a*/
  *this = &TechnoClass::`vftable'; /*0x6f3130*/
  this->vtable2 = &TechnoClass::`vftable'; /*0x6f3136*/
  this->vtable3 = &vt_TechnoClass; /*0x6f313d*/
  this->vtable4 = &off_7F4934; /*0x6f314a*/
  AudioController::Init(this + 290); /*0x6f3151*/
  AudioController::Init(this + 297); /*0x6f315c*/
  AudioController::Init(this + 304); /*0x6f3167*/
  AudioController::Init(this + 311); /*0x6f3172*/
  this->queuedVoiceIndex = -1; /*0x6f3177*/
  this->voiceFlags = -1; /*0x6f317d*/
  if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[412] < *(int *)&MEMORY[0xA8D63C].__pad_14B0[404] /*0x6f31b6*/
    || (MEMORY[0xA8D63C].__pad_14B0[409] || !*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[404])
    && *(int *)&MEMORY[0xA8D63C].__pad_14B0[416] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[396] + 8))(
         &MEMORY[0xA8D63C].__pad_14B0[396],
         *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[416] + *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[404],
         0) )
  {
    v10 = (*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[412])++; /*0x6f31c3*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[400] + 4 * v10) = this; /*0x6f31d2*/
  }
  if ( *(int *)&MEMORY[0xB077F8].__pad_579C[10052] < *(int *)&MEMORY[0xB077F8].__pad_579C[10044] /*0x6f3209*/
    || (MEMORY[0xB077F8].__pad_579C[10049] || !*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10044])
    && *(int *)&MEMORY[0xB077F8].__pad_579C[10056] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10036] + 8))(
         &MEMORY[0xB077F8].__pad_579C[10036],
         *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10056] + *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10044],
         0) )
  {
    v11 = (*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10052])++; /*0x6f3216*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10040] + 4 * v11) = this; /*0x6f3225*/
  }
  this->customSound_controller |= 1u; /*0x6f3237*/
  this->ammoReloadTimer = aP1; /*0x6f3241*/
  memset(this + 193, 0, 0x20u); /*0x6f3247*/
  this->disguiseCreationFrame = Random::State(&MEMORY[0xA8B230]->random[1]); /*0x6f3259*/
  return this; /*0x6f3262*/
}


// ==== 0x006F3270  ObjectClass::Vt34Thunk  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::Vt34Thunk(#377 *this)
{
  return (*(int (__thiscall **)(#377 *))(this->parachute)(this);
}


// ==== 0x006F3280  TechnoClass::IsNotAircraftOrBuilding  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsNotAircraftOrBuilding(#377 *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(#377 *))(this->targetingTimer_e)(this); /*0x6f3285*/
  LOBYTE(result) = result /*0x6f32c5*/
                && (result = (*(int (__thiscall **)(#377 *))(this->targetingTimer_e)(this), result != 6)
                && (result = (*(int (__thiscall **)(#377 *))(this->targetingTimer_e)(this), result != 16)
                && (result = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this), !*(_BYTE *)(result + 3220));
  return result; /*0x6f32c3*/
}


// ==== 0x006F32D0  TechnoClass::CanInitiateSell  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CanInitiateSell(#377 *this)
{
  int result; // eax

  result = this->health; /*0x6f32d3*/
  if ( result > 0 /*0x6f330c*/
    && !this->inLimbo
    && this->q3D5
    && (result = (*(int (__thiscall **)(#377 *))(this->fallRate)(this), result != 6)
    && this->isDiscoveredByCurrentPlayer
    && (result = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this), *(_BYTE *)(result + 560)) )
  {
    result = House::IsHumanPlayer(*((#375 **)this + 135)); /*0x6f331c*/
    LOBYTE(result) = (_BYTE)result != 0; /*0x6f3323*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6f3328*/
  }
  return result; /*0x6f3326*/
}


// ==== 0x006F3330  TechnoClass::SelectWeapon  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::SelectWeapon(#377 *this)
{
  int v2; // eax
  int result; // eax
  int v4; // edi
  int v5; // ebx
  _BYTE *v6; // ebp
  int v7; // esi
  int v8; // eax
  int v9; // eax
  bool v10; // bl
  _DWORD *v11; // [esp+1Ch] [ebp+4h]

  v2 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x6f333b*/
  if ( (unsigned __int8)HouseClass::HasPower(v2)
    && !*(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3285) )
  {
    return this->currentWeaponSlot != -1 ? this->currentWeaponSlot : 0;
  }
  if ( (*(unsigned __int8 (__thiscall **)(#377 *))(this->passengers_e)(this) ) /*0x6f337d*/
    return 0; /*0x6f337d*/
  v4 = *(_DWORD *)(*(int (__thiscall **)(#377 *, int))(this->q3F8)(this, 1); /*0x6f3397*/
  if ( !v4 ) /*0x6f339f*/
    return 0; /*0x6f339f*/
  v5 = *(_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD))(this->q3F8)(this, 0); /*0x6f33b1*/
  if ( !v5 || *(_BYTE *)(v4 + 310) || !v11 ) /*0x6f33d3*/
    return 0; /*0x6f33d3*/
  if ( this->inOpenToppedTransport && *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3408) != -1 ) /*0x6f33f4*/
    return *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3408); /*0x6f340d*/
  v6 = (v11[5] & 1) != 0 ? (_BYTE *)v11 : 0;
  if ( !*(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3285) )
  {
    if ( *(_BYTE *)(*(_DWORD *)(v4 + 172) + 364) )
    {
      if ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) == 6
        && *(_BYTE *)(*((*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) == 6 ? v11 + 328 : (_DWORD *)1312) + 5495) )
      {
        v8 = (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11); /*0x6f34c9*/
        if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*(v8 == 6 ? v11 : 0) + 132))(v8 == 6 ? v11 : 0) + 1517) )
        {
          v9 = (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11); /*0x6f34f3*/
          return !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*(v9 == 6 ? v11 : 0) + 132))(v9 == 6 ? v11 : 0) + 1516);
        }
        return 1; /*0x6f380a*/
      }
    }
    else
    {
      if ( *(_BYTE *)(*(_DWORD *)(v5 + 172) + 347) /*0x6f3547*/
        && v6
        && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 44))(v6) == 6 )
      {
        return 1; /*0x6f3555*/
      }
      if ( *(_BYTE *)(v4 + 322) /*0x6f3590*/
        && v6
        && *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 132))(v6) + 1519)
        && !this->forceShielded
        && !Object::IsAlliedWithObjectHouse(*((_DWORD **)this + 135), (int)v6) )
      {
        return 1; /*0x6f35a5*/
      }
      if ( *(_BYTE *)(v4 + 336) && (*(int (__thiscall **)(#377 *))(this->targetingTimer_e)(this) == 16 ) /*0x6f35c3*/
        return 1; /*0x6f35d1*/
      if ( (*(int (__thiscall **)(#377 *))(this->fallRate)(this) == 6 && *((_BYTE *)this + 1633) ) /*0x6f35e0*/
        return 1; /*0x6f35f6*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) == 6 /*0x6f362f*/
        && Object::IsAlliedWithObjectSimpleHouse(*((_DWORD **)this + 135), v11)
        && *(_BYTE *)(*(_DWORD *)(v4 + 172) + 344)
        && *(_BYTE *)(v11[328] + 5493) )
      {
        return 1; /*0x6f3645*/
      }
      if ( (*(int (__thiscall **)(#377 *))(this->fallRate)(this) == 2 && *((_BYTE *)this + 1738) ) /*0x6f3658*/
        return 1; /*0x6f366e*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) == 11 /*0x6f36ca*/
        && (v11[59] != 2 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v11 + 80))(v11)
         || (v11[80] & 0x100) != 0 && *(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3278))
        && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v11 + 84))(v11)
        && *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1540) == 2 )
      {
        return 1; /*0x6f36d8*/
      }
      if ( v6 /*0x6f3710*/
        && *(double *)(*(_DWORD *)(v4 + 172)
                     + 8 * *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 132))(v6) + 156)
                     + 160) != 0.0 )
      {
        if ( *(double *)(*(_DWORD *)(v5 + 172) /*0x6f3743*/
                       + 8 * *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 132))(v6) + 156)
                       + 160) == 0.0 )
          return 1; /*0x6f3751*/
        v10 = *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 444))(v6) + 236) == 2 /*0x6f377f*/
           || *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 444))(v6) + 236) == 6;
        if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6) ) /*0x6f3786*/
          v10 = 0; /*0x6f378d*/
        if ( !v6[140] && v10 ) /*0x6f379b*/
        {
          result = (*(int (__thiscall **)(#377 *, _DWORD *))(this->spawnOwner)(this, v11); /*0x6f37a2*/
          if ( result != -1 ) /*0x6f37ab*/
            return result; /*0x6f37ab*/
          return 0; /*0x6f37ab*/
        }
        if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6) /*0x6f37d6*/
          && *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1540) == 2 )
        {
          return 1; /*0x6f37e4*/
        }
        if ( *(_BYTE *)(*(_DWORD *)(v4 + 160) + 676) /*0x6f3800*/
          && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6) )
        {
          return 1; /*0x6f3805*/
        }
      }
    }
    return 0; /*0x6f37ad*/
  }
  v7 = this->customSound_controller; /*0x6f3436*/
  if ( *(_BYTE *)(*(_DWORD *)(v4 + 160) + 676) /*0x6f3455*/
    && v6
    && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6) )
  {
    return 2 * v7 + 1; /*0x6f345c*/
  }
  else
  {
    return 2 * v7; /*0x6f346a*/
  }
}


// ==== 0x006F3820  TechnoClass::CanTargetHouse  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CanTargetHouse(#377 *this)
{
  _DWORD *v1; // esi
  int result; // eax
  char v4; // bl
  char v5; // [esp+Eh] [ebp-2h]
  bool v6; // [esp+Fh] [ebp-1h]
  _BYTE *v7; // [esp+14h] [ebp+4h]
  char v8; // [esp+14h] [ebp+4h]

  v1 = v7; /*0x6f3823*/
  if ( !v7 || (v7[20] & 1) == 0 ) /*0x6f3832*/
    return -1; /*0x6f3836*/
  v4 = *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 132))(v7) + 3433); /*0x6f384a*/
  v8 = *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 132))(v7) + 3479); /*0x6f3862*/
  v6 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v1 + 132))(v1) + 1660) == 3; /*0x6f3879*/
  v5 = *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v1 + 132))(v1) + 1684); /*0x6f388c*/
  switch ( *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1536) ) /*0x6f38a3*/
  {
    case 0: /*0x6f38a3*/
      if ( !v4 || !v1[136] ) /*0x6f38ae*/
        goto LABEL_16; /*0x6f38b6*/
      return -1; /*0x6f38b6*/
    case 1: /*0x6f38a3*/
      return v4 != 0; /*0x6f38cd*/
    case 2: /*0x6f38a3*/
      return (v4 != 0) - 1; /*0x6f38dd*/
    case 3: /*0x6f38a3*/
      if ( !v8 && !v5 ) /*0x6f38ee*/
        goto LABEL_16; /*0x6f38ee*/
      result = 1; /*0x6f38f2*/
      break; /*0x6f38f9*/
    case 4: /*0x6f38a3*/
      if ( v6 || v8 ) /*0x6f390a*/
        goto LABEL_16; /*0x6f390a*/
      result = 1; /*0x6f390e*/
      break; /*0x6f3915*/
    case 6: /*0x6f38a3*/
      return -1; /*0x6f38bf*/
    default:
LABEL_16:
      result = 0; /*0x6f3918*/
      break; /*0x6f391a*/
  }
  return result; /*0x6f3834*/
}


// ==== 0x006F3950  TechnoClass::GetCrewCount  this=TechnoClass  sig=csp ====
BOOL __thiscall TechnoClass::GetCrewCount(void *this)
{
  return *(_BYTE *)((*(int (__thiscall **)(void *))(this->hasParachute)(this) + 3277) != 0; /*0x6f3967*/
}


// ==== 0x006F3970  TechnoClass::GetValue  this=AbstractClass  sig=csp ====
int __thiscall TechnoClass::GetValue(_DWORD *this, ObjectClass *aP1)
{
  int v2; // edi
  int v4; // ebx
  _DWORD *v5; // eax
  int *v6; // eax
  int result; // eax
  int v8; // edi
  int v9; // edi
  int v10; // edi

  v2 = 0; /*0x6f3977*/
  if ( aP1 == (ObjectClass *)-1 ) /*0x6f397e*/
  {
    v4 = 0; /*0x6f3986*/
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 132))(this); /*0x6f3988*/
    if ( !HouseClass::HasPower(v5) || *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 3285) ) /*0x6f39a3*/
    {
      if ( *(_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1016))(this, 0) ) /*0x6f3a00*/
      {
        v8 = *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1016))(this, 0) + 164); /*0x6f3a17*/
        v4 = 1; /*0x6f3a27*/
        v2 = *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1016))(this, 0) + 152) + v8; /*0x6f3a2c*/
      }
      if ( *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*this + 1016))(this, 1) ) /*0x6f3a3e*/
      {
        v9 = *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*this + 1016))(this, 1) + 164) + v2; /*0x6f3a5b*/
        v2 = *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*this + 1016))(this, 1) + 152) + v9; /*0x6f3a6d*/
        ++v4; /*0x6f3a6f*/
      }
      if ( v4 <= 0 ) /*0x6f3a72*/
        return 0; /*0x6f3a72*/
      return v2 / v4; /*0x6f3a7c*/
    }
    else
    {
      v6 = (int *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1016))(this, this->q138); /*0x6f39b8*/
      if ( !v6 ) /*0x6f39c0*/
        return 0; /*0x6f39c7*/
      result = *v6; /*0x6f39ca*/
      if ( result ) /*0x6f39ce*/
        return *(_DWORD *)(result + 152) + *(_DWORD *)(result + 164); /*0x6f39ed*/
    }
  }
  else
  {
    if ( *(_DWORD *)(*(int (__thiscall **)(_DWORD *, ObjectClass *))(*this + 1016))(this, aP1) ) /*0x6f3a8e*/
    {
      v10 = *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(_DWORD *, ObjectClass *))(*this + 1016))(this, aP1) + 164); /*0x6f3aa3*/
      return *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(_DWORD *, ObjectClass *))(*this + 1016))(this, aP1) + 152) /*0x6f3ab3*/
           + v10;
    }
    return v2; /*0x6f3ab9*/
  }
  return result; /*0x6f39c2*/
}


// ==== 0x006F3AD0  TechnoClass::ComputeTransform  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass_ComputeTransform(_DWORD **this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // ecx
  int v8; // ebp
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // ebp
  const void *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // esi
  int v16; // eax
  float *v17; // eax
  float v18; // edx
  int v19; // esi
  int v20; // edi
  __int64 v21; // rax
  int v22; // ebp
  int *v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  float v28; // [esp+8h] [ebp-E4h]
  float v29; // [esp+8h] [ebp-E4h]
  float v30; // [esp+Ch] [ebp-E0h]
  float v31; // [esp+10h] [ebp-DCh]
  float v32; // [esp+10h] [ebp-DCh]
  int v33; // [esp+28h] [ebp-C4h]
  double v34; // [esp+2Ch] [ebp-C0h] BYREF
  float v35; // [esp+34h] [ebp-B8h]
  int v36; // [esp+38h] [ebp-B4h]
  int v37; // [esp+3Ch] [ebp-B0h]
  float v38[3]; // [esp+40h] [ebp-ACh] BYREF
  _BYTE v39[4]; // [esp+4Ch] [ebp-A0h] BYREF
  float v40[3]; // [esp+50h] [ebp-9Ch] BYREF
  float v41[12]; // [esp+5Ch] [ebp-90h] BYREF
  _BYTE v42[48]; // [esp+8Ch] [ebp-60h] BYREF
  _BYTE v43[48]; // [esp+BCh] [ebp-30h] BYREF

  v37 = ((int (__thiscall *)(_DWORD **))(*this)[33])(this); /*0x6f3aeb*/
  v7 = 0; /*0x6f3aef*/
  v8 = 0; /*0x6f3af1*/
  v9 = 0; /*0x6f3af3*/
  if ( a3 >= 0 ) /*0x6f3af7*/
  {
    v11 = (_DWORD *)((int (__thiscall *)(_DWORD **, int))(*this)[254])(this, a3); /*0x6f3b28*/
    v7 = v11[1]; /*0x6f3b2e*/
    v8 = v11[2]; /*0x6f3b31*/
    v9 = v11[3]; /*0x6f3b34*/
  }
  else if ( -a3 <= 5 ) /*0x6f3afe*/
  {
    v10 = ((int (__thiscall *)(_DWORD **))(*this)[33])(this); /*0x6f3b04*/
    v7 = *(_DWORD *)(v10 - 12 * a3 + 2128); /*0x6f3b14*/
    v8 = *(_DWORD *)(v10 - 12 * a3 + 2132); /*0x6f3b1b*/
    v9 = *(_DWORD *)(v10 - 12 * a3 + 2136); /*0x6f3b1e*/
  }
  v12 = a5 + v8; /*0x6f3b47*/
  v36 = a4 + v7; /*0x6f3b49*/
  v33 = a6 + v9; /*0x6f3b58*/
  if ( this && (*(_BYTE *)(this + 5) & 4) != 0 && this->q674 ) /*0x6f3b6c*/
  {
    v13 = (const void *)(*(int (__stdcall **)(_DWORD, _BYTE *, _DWORD))(*this->q674 + 36))(this->q674, v43, 0); /*0x6f3b9b*/
    Transform::Copy(v42, v13); /*0x6f3ba3*/
    v14 = *this; /*0x6f3ba8*/
    qmemcpy(v41, v42, sizeof(v41)); /*0x6f3bb7*/
    v15 = (_DWORD *)((int (__thiscall *)(_DWORD **, _BYTE *))v14[170])(this, v39); /*0x6f3bd1*/
    v34 = (double)(int)((((unsigned int)((*v15 >> 10) + 1) >> 1) & 0x1F) - 8) * -0.1963495408493621 /*0x6f3c12*/
        - (double)(int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, &v34) >> 10) + 1) >> 1) & 0x1F)
                      - 8)
        * -0.1963495408493621;
  }
  else
  {
    Matrix3x4::Identity(v41); /*0x6f3c1e*/
    v34 = (double)(int)((((unsigned int)((*(_DWORD *)((int (__thiscall *)(_DWORD **, double *))(*this)[170])(this, &v34) >> 10) /*0x6f3c4e*/
                                       + 1) >> 1)
                       & 0x1F)
                      - 8)
        * -0.1963495408493621;
  }
  v28 = (float)*(int *)(v37 + 1824); /*0x6f3c65*/
  Vector::MatrixMulVectorMath(v41, v28, 0.0, 0.0); /*0x6f3c68*/
  v31 = v34; /*0x6f3c76*/
  Matrix2D::Rotate(v41, v31); /*0x6f3c79*/
  v16 = -((int)this->q3B8 % 2 != 0); /*0x6f3c9a*/
  LOBYTE(v16) = v16 & 0xFE; /*0x6f3c9d*/
  v30 = (float)(v12 * (v16 + 1)); /*0x6f3cab*/
  v29 = (float)v36; /*0x6f3cb7*/
  v32 = (float)v33; /*0x6f3c8e*/
  Vector::MatrixMulVectorMath(v41, v29, v30, v32); /*0x6f3cba*/
  memset(v38, 0, sizeof(v38)); /*0x6f3ccc*/
  v17 = TransformMatrix3x4Point(v40, v41, v38); /*0x6f3ce4*/
  *(float *)&v34 = *v17; /*0x6f3ceb*/
  v18 = v17[2]; /*0x6f3cf6*/
  *((float *)&v34 + 1) = v17[1]; /*0x6f3cf9*/
  v35 = v18; /*0x6f3cfd*/
  v19 = Math::RoundToInt(*(float *)&v34); /*0x6f3d0c*/
  v20 = Math::RoundToInt(-*((float *)&v34 + 1)); /*0x6f3d17*/
  v21 = Math::RoundToInt(v35); /*0x6f3d19*/
  v22 = v21; /*0x6f3d22*/
  v23 = (int *)((int (__fastcall *)(_DWORD **, _DWORD, float *))(*this)[43])(this, HIDWORD(v21), v40); /*0x6f3d29*/
  v24 = *v23; /*0x6f3d2f*/
  v25 = v23[1]; /*0x6f3d31*/
  v26 = v23[2]; /*0x6f3d34*/
  *a2 = v19 + v24; /*0x6f3d46*/
  a2[1] = v20 + v25; /*0x6f3d48*/
  a2[2] = v22 + v26; /*0x6f3d4b*/
  return a2; /*0x6f3d50*/
}


// ==== 0x006F3D60  TechnoClass::GetTurretOffset  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass_GetTurretOffset(_DWORD **this, _DWORD *a2, int a3)
{
  int v4; // ebp
  const void *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  float *v8; // eax
  int v9; // edx
  float v10; // eax
  int v11; // esi
  int v12; // edi
  int v13; // ebp
  int *v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  float v19; // [esp+4h] [ebp-D8h]
  float v20; // [esp+Ch] [ebp-D0h]
  double v21; // [esp+24h] [ebp-B8h] BYREF
  float v22; // [esp+2Ch] [ebp-B0h]
  float v23[3]; // [esp+30h] [ebp-ACh] BYREF
  _BYTE v24[4]; // [esp+3Ch] [ebp-A0h] BYREF
  float v25[3]; // [esp+40h] [ebp-9Ch] BYREF
  float v26[12]; // [esp+4Ch] [ebp-90h] BYREF
  _BYTE v27[48]; // [esp+7Ch] [ebp-60h] BYREF
  _BYTE v28[48]; // [esp+ACh] [ebp-30h] BYREF

  v4 = ((int (__thiscall *)(_DWORD **))(*this)[33])(this); /*0x6f3d76*/
  if ( this && (*(_BYTE *)(this + 5) & 4) != 0 && this->q674 ) /*0x6f3d88*/
  {
    v5 = (const void *)(*(int (__stdcall **)(_DWORD, _BYTE *, _DWORD))(*this->q674 + 36))(this->q674, v28, 0); /*0x6f3db7*/
    Transform::Copy(v27, v5); /*0x6f3dbf*/
    v6 = *this; /*0x6f3dc4*/
    qmemcpy(v26, v27, sizeof(v26)); /*0x6f3dd3*/
    v7 = (_DWORD *)((int (__thiscall *)(_DWORD **, _BYTE *))v6[170])(this, v24); /*0x6f3ded*/
    v21 = (double)(int)((((unsigned int)((*v7 >> 10) + 1) >> 1) & 0x1F) - 8) * -0.1963495408493621 /*0x6f3e2e*/
        - (double)(int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, &v21) >> 10) + 1) >> 1) & 0x1F)
                      - 8)
        * -0.1963495408493621;
  }
  else
  {
    Matrix3x4::Identity(v26); /*0x6f3e3a*/
    v21 = (double)(int)((((unsigned int)((*(_DWORD *)((int (__thiscall *)(_DWORD **, double *))(*this)[170])(this, &v21) >> 10) /*0x6f3e6a*/
                                       + 1) >> 1)
                       & 0x1F)
                      - 8)
        * -0.1963495408493621;
  }
  v19 = (float)*(int *)(v4 + 1824); /*0x6f3e7d*/
  Vector::MatrixMulVectorMath(v19, 0.0, 0.0); /*0x6f3e80*/
  v20 = v21; /*0x6f3e8e*/
  Matrix2D::Rotate(v26, v20); /*0x6f3e91*/
  memset(v23, 0, sizeof(v23)); /*0x6f3ea3*/
  v8 = TransformMatrix3x4Point(v25, v26, v23); /*0x6f3ebb*/
  *(float *)&v21 = *v8; /*0x6f3ec2*/
  v9 = *((_DWORD *)v8 + 1); /*0x6f3ec6*/
  v10 = v8[2]; /*0x6f3ecd*/
  HIDWORD(v21) = v9; /*0x6f3ed0*/
  v22 = v10; /*0x6f3ed4*/
  v11 = Math::RoundToInt(*(float *)&v21); /*0x6f3ee3*/
  v12 = Math::RoundToInt(-*((float *)&v21 + 1)); /*0x6f3eee*/
  v13 = Math::RoundToInt(v22); /*0x6f3ef7*/
  v14 = (int *)((int (__thiscall *)(_DWORD **, float *))(*this)[43])(this, v25); /*0x6f3f00*/
  v15 = *v14; /*0x6f3f06*/
  v16 = v14[1]; /*0x6f3f08*/
  v17 = v14[2]; /*0x6f3f0b*/
  *a2 = v11 + v15; /*0x6f3f1d*/
  a2[1] = v12 + v16; /*0x6f3f1f*/
  a2[2] = v13 + v17; /*0x6f3f22*/
  return a2; /*0x6f3f27*/
}


// ==== 0x006F3F40  TechnoClass::Update  this=TechnoClass  sig=csp ====
_DWORD *__usercall TechnoClass::Update@<eax>(int *a1@<ecx>, int a2@<edi>)
{
  int v3; // eax
  _DWORD *result; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  _DWORD *v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // [esp-Ch] [ebp-10h]
  int v29; // [esp-Ch] [ebp-10h]
  int v30; // [esp-8h] [ebp-Ch]
  int v31; // [esp-8h] [ebp-Ch]
  int v32; // [esp-4h] [ebp-8h]
  int v33; // [esp-4h] [ebp-8h]

  v3 = a1[135]; /*0x6f3f43*/
  if ( v3 ) /*0x6f3f4b*/
    *((_BYTE *)a1 + 1050) = MEMORY[0x87F7E8][528729] == v3; /*0x6f3f55*/
  result = (_DWORD *)(*(int (__thiscall **)(int *))(*a1 + 132))(a1); /*0x6f3f69*/
  if ( result ) /*0x6f3f71*/
  {
    if ( !a1[325] ) /*0x6f3f77*/
      TechnoClass::CreatePlanningNode(a1); /*0x6f3f83*/
    if ( *(_DWORD *)((*(int (__thiscall **)(int *, int))(*a1 + 132))(a1, a2) + 3416) ) /*0x6f3f93*/
    {
      v5 = __2_YAPAXI_Z(116); /*0x6f3fa4*/
      if ( v5 ) /*0x6f3fab*/
      {
        v32 = *(_DWORD *)((*(int (__thiscall **)(int *))(*a1 + 132))(a1) + 3428); /*0x6f3fbf*/
        v30 = *(_DWORD *)((*(int (__thiscall **)(int *))(*a1 + 132))(a1) + 3424); /*0x6f3fd0*/
        v28 = *(_DWORD *)((*(int (__thiscall **)(int *))(*a1 + 132))(a1) + 3420); /*0x6f3fe1*/
        v6 = (*(int (__thiscall **)(int *))(*a1 + 132))(a1); /*0x6f3fe4*/
        v7 = SpawnManagerClass::SpawnManagerClass(v5, (int)a1, *(_DWORD *)(v6 + 3416), v28, v30, v32); /*0x6f3ff4*/
      }
      else
      {
        v7 = 0; /*0x6f3ffb*/
      }
      a1[180] = v7; /*0x6f3ffd*/
    }
    if ( *(_DWORD *)((*(int (__thiscall **)(int *))(*a1 + 132))(a1) + 3392) ) /*0x6f400d*/
    {
      v8 = __2_YAPAXI_Z(100); /*0x6f401e*/
      if ( v8 ) /*0x6f4025*/
      {
        v33 = *(_DWORD *)((*(int (__thiscall **)(int *))(*a1 + 132))(a1) + 3404); /*0x6f4039*/
        v31 = *(_DWORD *)((*(int (__thiscall **)(int *))(*a1 + 132))(a1) + 3400); /*0x6f404a*/
        v29 = *(_DWORD *)((*(int (__thiscall **)(int *))(*a1 + 132))(a1) + 3396); /*0x6f405b*/
        v9 = (*(int (__thiscall **)(int *))(*a1 + 132))(a1); /*0x6f405e*/
        v10 = SlaveManagerClass::ctor(v8, (int)a1, *(_DWORD *)(v9 + 3392), v29, v31, v33); /*0x6f406e*/
      }
      else
      {
        v10 = 0; /*0x6f4075*/
      }
      a1[182] = v10; /*0x6f4077*/
    }
    if ( *(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(*a1 + 1016))(a1, 0) /*0x6f40a2*/
      && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(*a1 + 1016))(a1, 0) + 172) + 341) )
    {
      v11 = __2_YAPAXI_Z(80); /*0x6f40b3*/
      if ( v11 ) /*0x6f40ba*/
      {
        LOBYTE(v12) = *(_BYTE *)(*(_DWORD *)(*(int (__thiscall **)(int *))(*a1 + 1016))(a1) + 320); /*0x6f40cc*/
        v13 = (*(int (__thiscall **)(int *, _DWORD, int))(*a1 + 1016))(a1, 0, v12); /*0x6f40d7*/
        v14 = CaptureManagerClass::CaptureManagerClass(v11, (int)a1, *(_DWORD *)(*(_DWORD *)v13 + 164), 0); /*0x6f40e9*/
      }
      else
      {
        v14 = 0; /*0x6f40f0*/
      }
      a1[175] = v14; /*0x6f40f2*/
    }
    if ( (*(int (__thiscall **)(int *))(*a1 + 44))(a1) != 6 /*0x6f412a*/
      && *(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(*a1 + 1016))(a1, 0)
      && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(*a1 + 1016))(a1, 0) + 172) + 345) )
    {
      v15 = __2_YAPAXI_Z(88); /*0x6f4136*/
      if ( v15 ) /*0x6f4140*/
        v16 = ParasiteClass::ParasiteClass(v15, (int)a1); /*0x6f4145*/
      else
        v16 = 0; /*0x6f414c*/
      a1[423] = v16; /*0x6f414e*/
    }
    if ( *(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(*a1 + 1016))(a1, 0) /*0x6f4179*/
      && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(*a1 + 1016))(a1, 0) + 172) + 346) )
    {
      v17 = (_DWORD *)__2_YAPAXI_Z(80); /*0x6f4185*/
      if ( v17 ) /*0x6f418f*/
        v18 = TemporalClass::TemporalClass(v17, (int)a1); /*0x6f4194*/
      else
        v18 = 0; /*0x6f419b*/
      v19 = *a1; /*0x6f419d*/
      a1[157] = (int)v18; /*0x6f41a3*/
      *(_DWORD *)(a1[157] + 76) = *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(v19 + 1016))(a1, 0) + 164); /*0x6f41bd*/
    }
    if ( *(int *)((*(int (__thiscall **)(int *))(*a1 + 132))(a1) + 1564) > 0 ) /*0x6f41d2*/
    {
      v20 = __2_YAPAXI_Z(96); /*0x6f41d6*/
      if ( v20 ) /*0x6f41e0*/
        v21 = AirstrikeClass::AirstrikeClass(v20, (int)a1); /*0x6f41e5*/
      else
        v21 = 0; /*0x6f41ec*/
      a1[165] = v21; /*0x6f41ee*/
    }
    if ( *(_BYTE *)((*(int (__thiscall **)(int *))(*a1 + 132))(a1) + 3375) /*0x6f4212*/
      && *(_BYTE *)((*(int (__thiscall **)(int *))(*a1 + 132))(a1) + 3376) )
    {
      v22 = a1[135]; /*0x6f421c*/
      *((_BYTE *)a1 + 472) = 1; /*0x6f4222*/
      a1[327] = v22; /*0x6f4229*/
      v23 = *(_DWORD *)(v22 + 488); /*0x6f422f*/
      if ( v23 ) /*0x6f4237*/
      {
        if ( v23 == 1 ) /*0x6f4250*/
          a1[326] = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3420); /*0x6f425d*/
        else
          a1[326] = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3424); /*0x6f4271*/
      }
      else
      {
        a1[326] = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3416); /*0x6f4245*/
      }
    }
    v24 = (_DWORD *)(*(int (__thiscall **)(int *))(*a1 + 132))(a1); /*0x6f427b*/
    v25 = v24[809]; /*0x6f4281*/
    v24 += 809; /*0x6f4287*/
    a1[246] = v25; /*0x6f428c*/
    a1[247] = v24[1]; /*0x6f4295*/
    a1[248] = v24[2]; /*0x6f429e*/
    a1[249] = v24[3]; /*0x6f42a7*/
    v26 = (*(int (__thiscall **)(int *))(*a1 + 132))(a1); /*0x6f42b1*/
    v27 = *(_DWORD *)(v26 + 3256); /*0x6f42b7*/
    result = (_DWORD *)(v26 + 3256); /*0x6f42bd*/
    a1[254] = v27; /*0x6f42c2*/
    a1[255] = result[1]; /*0x6f42cb*/
    a1[256] = result[2]; /*0x6f42d4*/
    a1[257] = result[3]; /*0x6f42dd*/
    a1[295] = 1; /*0x6f42e3*/
    a1[296] = 0; /*0x6f42ed*/
  }
  return result; /*0x6f42f7*/
}


// ==== 0x006F4300  TechnoClass::Constructor  this=TechnoClass  sig=csp ====
_DWORD *__thiscall sub_6F4300(_DWORD *this, int a2)
{
  wchar_t *v3; // ecx
  int v4; // ecx
  void **v5; // edx
  int v6; // eax
  char v8; // [esp+10h] [ebp+4h]

  Helper_65A7E0(a2); /*0x6f430b*/
  this->ironTintStage = MEMORY[0xA8ED84]; /*0x6f4317*/
  this->airstrikeTimer = 0; /*0x6f431d*/
  v3 = MEMORY[0xA8ED84]; /*0x6f4323*/
  this->q1BC = 0; /*0x6f4329*/
  this->q1B4 = v3; /*0x6f432f*/
  this->owner = 0; /*0x6f4335*/
  this->cloakState = 0; /*0x6f433b*/
  this->q22C = MEMORY[0xA8ED84]; /*0x6f434c*/
  this->q234 = 0; /*0x6f4352*/
  this->q238 = 0; /*0x6f435f*/
  this->warpFactor = 1; /*0x6f4365*/
  __4type_info_AAEAAV0_ABV0__Z(a2); /*0x6f436b*/
  this->isTurretLocked = 1; /*0x6f4375*/
  this->q3D8 = 2; /*0x6f437b*/
  this->isDiscoveredByComputer = 1; /*0x6f4381*/
  this->sightRangeBonus = 1; /*0x6f4387*/
  this->manipulatedByUnit = 0; /*0x6f438d*/
  this->chronoWarpedByHouse = 0; /*0x6f4393*/
  this->q0FF = 1; /*0x6f4399*/
  this->passengers_e = 1; /*0x6f439f*/
  this->q404 = 1; /*0x6f43a5*/
  this->q3F8 = 2; /*0x6f43b5*/
  this->q40C = 0; /*0x6f43bb*/
  this->q410 = 0; /*0x6f43c1*/
  VectorClass::Construct(0, 0); /*0x6f43c7*/
  this->currentTargetThreatValues = &vt_DynamicVectorClass_int; /*0x6f43d1*/
  this->__pad_115 = 10; /*0x6f43d7*/
  this->secondaryTurretIndex = 0; /*0x6f43da*/
  AbstractClassVector::Construct(this + 278, 0, 0); /*0x6f43e7*/
  this->currentTargets = &vt_DynamicVectorClass_AbstractClass; /*0x6f43ec*/
  this->q11B = 10; /*0x6f43f2*/
  this->q11A = 0; /*0x6f43f5*/
  AbstractClassVector::Construct(this + 284, 0, 0); /*0x6f4402*/
  this->q470 = &vt_DynamicVectorClass_AbstractClass; /*0x6f4407*/
  this->q121 = 10; /*0x6f440d*/
  this->q120 = 0; /*0x6f4410*/
  *this = &TechnoClass::`vftable'; /*0x6f4413*/
  this->vtable2 = &TechnoClass::`vftable'; /*0x6f4419*/
  this->vtable3 = &vt_TechnoClass; /*0x6f4420*/
  this->vtable4 = &off_7F4934; /*0x6f4427*/
  v4 = 0; /*0x6f4433*/
  v8 = 0; /*0x6f4437*/
  if ( MEMORY[0xA8EC88] > 0 ) /*0x6f443b*/
  {
    v5 = (void **)MEMORY[0xA8EC7C]; /*0x6f443d*/
    while ( *v5 != this ) /*0x6f4445*/
    {
      ++v4; /*0x6f4447*/
      ++v5; /*0x6f4448*/
      if ( v4 >= MEMORY[0xA8EC88] ) /*0x6f444d*/
        goto LABEL_7; /*0x6f444d*/
    }
    v8 = 1; /*0x6f4451*/
  }
LABEL_7:
  AudioController::Init(this + 290); /*0x6f4456*/
  AudioController::Init(this + 297); /*0x6f4467*/
  AudioController::Init(this + 304); /*0x6f4472*/
  AudioController::Init(this + 311); /*0x6f447d*/
  this->queuedVoiceIndex = -1; /*0x6f4485*/
  this->voiceFlags = -1; /*0x6f448b*/
  if ( !v8 /*0x6f44ca*/
    && (MEMORY[0xA8EC88] < MEMORY[0xA8EC80]
     || (MEMORY[0xA8EC85] || !MEMORY[0xA8EC80])
     && MEMORY[0xA8EC8C] > 0
     && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8EC78] + 8))(
          &MEMORY[0xA8EC78],
          MEMORY[0xA8EC80] + MEMORY[0xA8EC8C],
          0)) )
  {
    v6 = MEMORY[0xA8EC88]++; /*0x6f44d7*/
    *((_DWORD *)MEMORY[0xA8EC7C] + v6) = this; /*0x6f44e6*/
  }
  return this; /*0x6f44ec*/
}


// ==== 0x006F4500  TechnoClass::DTOR  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::DTOR(int this)
{
  _DWORD *v2; // ecx
  int v3; // ecx
  int v4; // ecx
  _DWORD *v5; // ecx
  int v6; // ecx
  int v7; // ecx
  _DWORD *v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  void *v13; // eax
  void *v14; // eax
  void *v15; // eax
  int v17; // [esp+18h] [ebp-4h] BYREF

  v2 = *(_DWORD *)(this + 1300); /*0x6f4507*/
  *(_DWORD *)this = &TechnoClass::`vftable'; /*0x6f450d*/
  *(_DWORD *)(this + 4) = &TechnoClass::`vftable'; /*0x6f4515*/
  *(_DWORD *)(this + 8) = &vt_TechnoClass; /*0x6f451c*/
  *(_DWORD *)(this + 12) = &off_7F4934; /*0x6f4523*/
  if ( v2 ) /*0x6f452a*/
  {
    Sidebar::CancelSidebarProductionQueue(v2); /*0x6f452c*/
    *(_DWORD *)(this + 1300) = 0; /*0x6f4531*/
  }
  v3 = *(_DWORD *)(this + 700); /*0x6f4537*/
  if ( v3 ) /*0x6f453f*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 32))(v3, 1); /*0x6f4545*/
    *(_DWORD *)(this + 700) = 0; /*0x6f4548*/
  }
  v4 = *(_DWORD *)(this + 720); /*0x6f454e*/
  if ( v4 ) /*0x6f4556*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 32))(v4, 1); /*0x6f455c*/
    *(_DWORD *)(this + 720) = 0; /*0x6f455f*/
  }
  v5 = *(_DWORD *)(this + 728); /*0x6f4565*/
  if ( v5 ) /*0x6f456d*/
  {
    TechnoClass::MutateAll(v5, 0, 0); /*0x6f4571*/
    v6 = *(_DWORD *)(this + 728); /*0x6f4576*/
    if ( v6 ) /*0x6f457e*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 32))(v6, 1); /*0x6f4584*/
    *(_DWORD *)(this + 728) = 0; /*0x6f4587*/
  }
  v7 = *(_DWORD *)(this + 628); /*0x6f458d*/
  if ( v7 ) /*0x6f4595*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 32))(v7, 1); /*0x6f459b*/
    *(_DWORD *)(this + 628) = 0; /*0x6f459e*/
  }
  v8 = *(_DWORD **)(this + 660); /*0x6f45a4*/
  if ( v8 && v8[19] == this ) /*0x6f45b1*/
  {
    (*(void (__thiscall **)(_DWORD *, int))(*v8 + 32))(v8, 1); /*0x6f45bb*/
    *(_DWORD *)(this + 660) = 0; /*0x6f45be*/
  }
  AudioFile::Stop(&this->turretRotateSoundController); /*0x6f45cd*/
  AudioFileClass::Release(&this->turretRotateSoundController); /*0x6f45d4*/
  AudioFile::Stop(&this->gattlingSoundController); /*0x6f45e1*/
  AudioFileClass::Release(&this->gattlingSoundController); /*0x6f45e8*/
  AudioFile::Stop(&this->unusedGattlingSoundController); /*0x6f45f5*/
  AudioFileClass::Release(&this->unusedGattlingSoundController); /*0x6f45fc*/
  AudioFileClass::Release(&this->queuedVoiceSoundController); /*0x6f4607*/
  *(_DWORD *)(this + 540) = 0; /*0x6f4610*/
  *(_BYTE *)(this + 1050) = 0; /*0x6f4616*/
  v17 = this; /*0x6f4628*/
  v9 = ((int (__thiscall *)(TechnoClass **, int *))MEMORY[0xA8EC78]->__pad_0[4])(&MEMORY[0xA8EC78], &v17); /*0x6f462c*/
  if ( v9 != -1 ) /*0x6f4633*/
    FactoryClass::RemoveItem(&MEMORY[0xA8EC78], v9); /*0x6f463b*/
  v17 = this; /*0x6f4650*/
  v10 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0F6C8] + 16))(&MEMORY[0xB0F6C8], &v17); /*0x6f4654*/
  if ( v10 != -1 ) /*0x6f465a*/
    DynamicVector::RemoveItem(&MEMORY[0xB0F6C8], v10); /*0x6f4662*/
  v11 = *(_DWORD *)(this + 300); /*0x6f4667*/
  if ( v11 ) /*0x6f466f*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 248))(v11); /*0x6f4673*/
    *(_DWORD *)(this + 300) = 0; /*0x6f4679*/
  }
  v12 = *(_DWORD *)(this + 304); /*0x6f467f*/
  if ( v12 ) /*0x6f4687*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 248))(v12); /*0x6f468b*/
    *(_DWORD *)(this + 304) = 0; /*0x6f4691*/
  }
  *(_DWORD *)(this + 1136) = &vt_VectorClass_AbstractClass; /*0x6f469d*/
  AbstractClassVector::ddtor(&this->attackedTargets); /*0x6f46a3*/
  v13 = *(_DWORD *)(this + 1116); /*0x6f46a8*/
  *(_DWORD *)(this + 1112) = &vt_VectorClass_AbstractClass; /*0x6f46ae*/
  if ( v13 && *(_BYTE *)(this + 1125) ) /*0x6f46bc*/
  {
    OperatorDelete(v13); /*0x6f46c5*/
    *(_DWORD *)(this + 1116) = 0; /*0x6f46cd*/
  }
  *(_BYTE *)(this + 1125) = 0; /*0x6f46d3*/
  *(_DWORD *)(this + 1120) = 0; /*0x6f46d9*/
  v14 = *(_DWORD *)(this + 1092); /*0x6f46df*/
  *(_DWORD *)(this + 1088) = &vt_VectorClass_int; /*0x6f46e5*/
  if ( v14 && *(_BYTE *)(this + 1101) ) /*0x6f46f3*/
  {
    OperatorDelete(v14); /*0x6f46fc*/
    *(_DWORD *)(this + 1092) = 0; /*0x6f4704*/
  }
  *(_BYTE *)(this + 1101) = 0; /*0x6f4710*/
  *(_DWORD *)(this + 1096) = 0; /*0x6f4716*/
  nullsub_69(this + 336); /*0x6f471c*/
  *(_DWORD *)this = &RadioClass::`vftable'; /*0x6f4721*/
  *(_DWORD *)(this + 4) = &RadioClass::`vftable'; /*0x6f4727*/
  *(_DWORD *)(this + 8) = &RadioClass::`vftable'; /*0x6f472e*/
  *(_DWORD *)(this + 12) = &vt_RadioClass; /*0x6f4735*/
  v15 = *(_DWORD *)(this + 228); /*0x6f473c*/
  *(_DWORD *)(this + 224) = &vt_VectorClass_TechnoClass; /*0x6f4742*/
  if ( v15 && *(_BYTE *)(this + 237) ) /*0x6f4750*/
  {
    OperatorDelete(v15); /*0x6f4759*/
    *(_DWORD *)(this + 228) = 0; /*0x6f4761*/
  }
  *(_BYTE *)(this + 237) = 0; /*0x6f4767*/
  *(_DWORD *)(this + 232) = 0; /*0x6f476d*/
  *(_DWORD *)this = &MissionClass::`vftable'; /*0x6f4775*/
  *(_DWORD *)(this + 4) = &MissionClass::`vftable'; /*0x6f477b*/
  *(_DWORD *)(this + 8) = &MissionClass::`vftable'; /*0x6f4782*/
  *(_DWORD *)(this + 12) = &vt_MissionClass; /*0x6f4789*/
  return ObjectClass::Dtor((_DWORD *)this); /*0x6f4795*/
}


// ==== 0x006F47A0  HouseClass::CalcProductionSpeed  this=HouseClass  sig=csp ====
int __thiscall HouseClass_CalcProductionSpeed(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  double v4; // st7
  int v5; // eax
  double v6; // st7
  __int64 v7; // rax
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int FactoryCount; // ecx
  int v12; // edi
  int v14; // [esp+8h] [ebp-8h]
  int v15; // [esp+8h] [ebp-8h]
  int v16; // [esp+8h] [ebp-8h]
  float PowerRatio; // [esp+Ch] [ebp-4h]
  char v18; // [esp+Ch] [ebp-4h]
  float v19; // [esp+Ch] [ebp-4h]

  v2 = (*(int (__thiscall **)(_DWORD *))(*this + 136))(this); /*0x6f47a9*/
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 136))(v2); /*0x6f47b9*/
  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 132))(this); /*0x6f47c1*/
  v4 = HouseClass::GetBuildingDamageMultiplier(v3); /*0x6f47ce*/
  v15 = Math::RoundToInt(v4 * (double)v14); /*0x6f47e0*/
  v5 = (*(int (__thiscall **)(_DWORD *))(*this + 132))(this); /*0x6f47e4*/
  Math::RoundToInt((double)v15 * *(float *)(v5 + 1544)); /*0x6f47f4*/
  PowerRatio = HouseClass::GetPowerRatio((int *)this->q21C); /*0x6f4808*/
  v6 = 1.0 - (1.0 - PowerRatio) * *((float *)MEMORY[0x8871E0] + 350); /*0x6f4822*/
  if ( v6 <= *((float *)MEMORY[0x8871E0] + 348) ) /*0x6f4837*/
    v6 = *((float *)MEMORY[0x8871E0] + 348); /*0x6f483b*/
  if ( PowerRatio < 1.0 && v6 >= *((float *)MEMORY[0x8871E0] + 349) ) /*0x6f4861*/
    v6 = *((float *)MEMORY[0x8871E0] + 349); /*0x6f4865*/
  if ( v6 == 0.0 ) /*0x6f4876*/
    v6 = 0.0099999998; /*0x6f487a*/
  v7 = Math::RoundToInt(v6); /*0x6f4886*/
  v8 = v7; /*0x6f488b*/
  v16 = v7; /*0x6f4891*/
  v18 = 0; /*0x6f4897*/
  if ( (*(int (__fastcall **)(_DWORD *, _DWORD))(*this + 44))(this, HIDWORD(v7)) == 1 ) /*0x6f48a2*/
  {
    v9 = (*(int (__thiscall **)(_DWORD *))(*this + 132))(this); /*0x6f48a8*/
    if ( v9 ) /*0x6f48b0*/
      v18 = *(_BYTE *)(v9 + 3278); /*0x6f48b8*/
  }
  v10 = (*(int (__thiscall **)(_DWORD *))(*this + 44))(this); /*0x6f48c5*/
  FactoryCount = HouseClass::GetFactoryCount(v10, v18); /*0x6f48d4*/
  v19 = *((float *)MEMORY[0x8871E0] + 351); /*0x6f48e1*/
  if ( v19 > 0.0 && FactoryCount - 1 > 0 ) /*0x6f48fb*/
  {
    v12 = FactoryCount - 1; /*0x6f48fe*/
    do /*0x6f4914*/
    {
      v8 = Math::RoundToInt((double)v16 * v19); /*0x6f490d*/
      --v12; /*0x6f490f*/
      v16 = v8; /*0x6f4910*/
    }
    while ( v12 ); /*0x6f4914*/
  }
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 44))(this) == 6 && *(_BYTE *)(this->q520 + 5489) ) /*0x6f4929*/
    return Math::RoundToInt((double)v16 * *((double *)MEMORY[0x8871E0] + 235)); /*0x6f4943*/
  else
    return v8; /*0x6f494e*/
}


// ==== 0x006F4960  TechnoClass::SetHouseFlag  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::SetHouseFlag(#374 *this, #375 *a2)
{
  HouseClass *v4; // eax
  void **v5; // ecx

  if ( a2 == (#375 *)HouseClass_Player ) /*0x6f4972*/
  {
    if ( this->isDiscoveredByCurrentPlayer ) /*0x6f4974*/
      return 0; /*0x6f4983*/
  }
  else
  {
    if ( this->q41C ) /*0x6f4986*/
      return 0; /*0x6f498e*/
    this->q41C = 1; /*0x6f4990*/
  }
  if ( !(unsigned __int8)AbstractClass::IsNotNull(this) ) /*0x6f49a0*/
    return 0; /*0x6f49a0*/
  if ( !(unsigned __int8)House::IsCurrentPlayer(a2) /*0x6f49ba*/
    && (*(int (__thiscall **)(#374 *))(this->targetingTimer_e)(this) == 14 )
  {
    (*(void (__thiscall **)(#374 *, int, _DWORD))(this->q1E8)(this, 15, 0); /*0x6f49c4*/
  }
  if ( a2 != (#375 *)HouseClass_Player ) /*0x6f49d0*/
  {
    this->q41C = 1; /*0x6f4a31*/
    return 1; /*0x6f4a31*/
  }
  v4 = (HouseClass *)this->Owner; /*0x6f49d2*/
  this->isDiscoveredByCurrentPlayer = 1; /*0x6f49d8*/
  LOBYTE(v4->HouseClass_field_timer_B[2]) = 1; /*0x6f49de*/
  *(_BYTE *)(this->Owner + 22393) = 1; /*0x6f49ea*/
  if ( this->isOwnedByCurrentPlayer ) /*0x6f49f0*/
    return 1; /*0x6f4a38*/
  if ( !*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] ) /*0x6f4a01*/
  {
    v5 = (void **)this->attachedTag; /*0x6f4a03*/
    if ( v5 ) /*0x6f4a08*/
      TeamClass::Update_0(v5, 4, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6844], 0, 0); /*0x6f4a18*/
  }
  *(_BYTE *)(this->Owner + 500) = 1; /*0x6f4a25*/
  return 1; /*0x6f497e*/
}


// ==== 0x006F4A40  TechnoClass::CheckPlayerOwned  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CheckPlayerOwned(#377 *this)
{
  int result; // eax

  LOBYTE(result) = this->isDiscoveredByCurrentPlayer; /*0x6f4a43*/
  if ( (_BYTE)result ) /*0x6f4a4b*/
  {
    result = House::IsCurrentPlayer(*((#375 **)this + 135)); /*0x6f4a53*/
    if ( !(_BYTE)result ) /*0x6f4a5a*/
      this->isDiscoveredByCurrentPlayer = 0; /*0x6f4a5c*/
  }
  return result; /*0x6f4a62*/
}


// ==== 0x006F4A70  TechnoClass::UpdateProdWithSound  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::UpdateProdWithSound(_BYTE *this, IUnknown *aP1)
{
  if ( !(unsigned __int8)ObjectClass::UpdateProductionDisplay((#374 *)this) ) /*0x6f4a78*/
    return 0; /*0x6f4a9d*/
  if ( this->isTether ) /*0x6f4a81*/
    (*(void (__thiscall **)(_BYTE *, int))(this->temporalUsing)(this, 13); /*0x6f4a91*/
  return 1; /*0x6f4a99*/
}


// ==== 0x006F4AB0  TechnoClass::Mission_RepairDispatch  this=TechnoClass  sig=csp ====
int TechnoClass::Mission_RepairDispatch(TechnoClass *aP0, int a2, TechnoClass *aP2, int a4, TechnoClass *aP3)
{
  int *v5; // ecx
  int v6; // ebp
  TechnoClass *v7; // esi
  _DWORD *v8; // eax
  int result; // eax
  unsigned int v10; // eax
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  TechnoClass *v15; // edi
  int edi24; // edi
  int v17; // eax
  HouseClass *v16; // ebx
  int v19; // eax
  int v20; // edi
  int v21; // ecx
  int v22; // eax
  _DWORD *v23; // eax
  int ammo; // ecx
  int v25; // eax
  int v26; // [esp+10h] [ebp-8h]

  v7 = (TechnoClass *)v5; /*0x6f4abd*/
  switch ( a2 )
  {
    case 3:
      v15 = aP0; /*0x6f4c56*/
      if ( *((_BYTE *)v5 + 1048) ) /*0x6f4c50*/
      {
        if ( aP0->__pad_3F7[33] ) /*0x6f4c5e*/
          (*(void (__thiscall **)(int *, int, TechnoClass *))(*v5 + 632))(v5, 25, aP0); /*0x6f4c6d*/
      }
      goto LABEL_23; /*0x6f4c6d*/
    case 7:
    case 9:
    case 22:
      v15 = aP0; /*0x6f4c6f*/
      (*(void (__thiscall **)(int *, int, TechnoClass *))(*v5 + 632))(v5, 24, aP0); /*0x6f4c7a*/
LABEL_23:
      ObjectClass::ProcessGroupInput((int)v7, (RadioClass *)v15, a2, aP2); /*0x6f4c80*/
      return 1; /*0x6f4c99*/
    case 8:
      (*(void (__thiscall **)(int *, int, TechnoClass *))(*v5 + 632))(v5, 25, aP0); /*0x6f4c34*/
      return (*(int (__thiscall **)(TechnoClass *, int, TechnoClass *))(*(_DWORD *)v7->__pad_0 + 632))(v7, 3, aP0); /*0x6f4c4d*/
    case 24:
      if ( (*(int (**)(void))(*v5 + 44))() == 2 )
      {
        v10 = v7
            ? ((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v7->__pad_0 + 44))(v7) == 2
             ? (unsigned int)v7
             : 0)
            : 0;
        if ( *(_BYTE *)(*(_DWORD *)(v10 + 1732) + 3597) ) /*0x6f4b4b*/
          goto LABEL_45; /*0x6f4b4b*/
      }
      if ( v7->__pad_3F7[33] ) /*0x6f4b59*/
        goto LABEL_45; /*0x6f4b61*/
      v11 = *(_DWORD *)v7->__pad_0; /*0x6f4b6b*/
      v7->__pad_3F7[33] = 1; /*0x6f4b72*/
      (*(void (__thiscall **)(TechnoClass *, int, TechnoClass *))(v11 + 632))(v7, 24, aP0); /*0x6f4b79*/
      result = 1; /*0x6f4b81*/
      break; /*0x6f4b8a*/
    case 25:
      if ( !*((_BYTE *)v5 + 1048) ) /*0x6f4b95*/
        goto LABEL_45; /*0x6f4b95*/
      v12 = *v5; /*0x6f4b9f*/
      *((_BYTE *)v5 + 1048) = 0; /*0x6f4ba6*/
      (*(void (__thiscall **)(int *, int, TechnoClass *))(v12 + 632))(v5, 25, aP0); /*0x6f4bad*/
      result = 1; /*0x6f4bb5*/
      break; /*0x6f4bbe*/
    case 26:
      if ( *((_BYTE *)v5 + 1049) ) /*0x6f4bc1*/
        goto LABEL_45; /*0x6f4bc9*/
      v13 = *v5; /*0x6f4bd3*/
      *((_BYTE *)v5 + 1049) = 1; /*0x6f4bda*/
      (*(void (__thiscall **)(int *, int, TechnoClass *))(v13 + 632))(v5, 26, aP0); /*0x6f4be1*/
      result = 1; /*0x6f4be9*/
      break; /*0x6f4bf2*/
    case 27:
      if ( !*((_BYTE *)v5 + 1049) ) /*0x6f4bfd*/
        goto LABEL_45; /*0x6f4bfd*/
      v14 = *v5; /*0x6f4c07*/
      *((_BYTE *)v5 + 1049) = 0; /*0x6f4c0e*/
      (*(void (__thiscall **)(int *, int, TechnoClass *))(v14 + 632))(v5, 27, aP0); /*0x6f4c15*/
      result = 1; /*0x6f4c1d*/
      break; /*0x6f4c26*/
    case 28:
      if ( BuildingClass::GetHealthRatio(v5) >= *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5880) ) /*0x6f4cee*/
        goto LABEL_25; /*0x6f4cee*/
      v17 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v7->__pad_0 + 132))(v7); /*0x6f4cf4*/
      v16 = (HouseClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v17 + 176))(v17); /*0x6f4d04*/
      v19 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v7->__pad_0 + 132))(v7); /*0x6f4d0a*/
      v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 180))(v19); /*0x6f4d1a*/
      if ( v20 <= 1 ) /*0x6f4d1f*/
        v20 = 1; /*0x6f4d21*/
      if ( (*(int (__stdcall **)(char *))(*((_DWORD *)v7->focus + 9) + 24))((char *)v7->focus + 36) < (int)v16 ) /*0x6f4d37*/
      {
        result = 32; /*0x6f4e33*/
      }
      else
      {
        if ( v16 ) /*0x6f4d3f*/
          HouseClass::ProcessPowerDrain((int)v7->focus, (IUnknown *)v16); /*0x6f4d48*/
        v21 = v20 + v7->estimatedHealth; /*0x6f4d55*/
        v7->health += v20; /*0x6f4d59*/
        v7->estimatedHealth = v21; /*0x6f4d5c*/
        if ( v7 ) /*0x6f4d5f*/
        {
          if ( (v7->abstractFlags & 4) != 0 ) /*0x6f4d6e*/
          {
            v22 = v7[1].idleActionTimer[2]; /*0x6f4d70*/
            if ( v22 ) /*0x6f4d78*/
            {
              v23 = (_DWORD *)(*(_DWORD *)(v22 + 1692) + 44); /*0x6f4d86*/
              *v23 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x6f4d8e*/
              v23[1] = v26; /*0x6f4d94*/
              v23[2] = 50; /*0x6f4d97*/
              BuildingClass::Deploy(*(_DWORD *)(v7[1].idleActionTimer[2] + 1692), v6, v20); /*0x6f4da6*/
            }
          }
        }
        if ( BuildingClass::GetHealthRatio((int *)v7->__pad_0) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] /*0x6f4dd1*/
                                                                           + 5888)
          || (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v7->__pad_0 + 456))(v7) < -10 )
        {
          ammo = v7->ammo; /*0x6f4dd3*/
          if ( ammo ) /*0x6f4ddb*/
            (*(void (__thiscall **)(int))(*(_DWORD *)ammo + 248))(ammo); /*0x6f4ddf*/
        }
        if ( BuildingClass::GetHealthRatio((int *)v7->__pad_0) >= *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] /*0x6f4dfd*/
                                                                            + 5880) )
        {
          v25 = *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v7->__pad_0 + 132))(v7) + 160); /*0x6f4e17*/
          v7->health = v25; /*0x6f4e1e*/
          v7->estimatedHealth = v25; /*0x6f4e21*/
          result = 33; /*0x6f4e25*/
        }
        else
        {
          result = 1; /*0x6f4e01*/
        }
      }
      break; /*0x6f4e0a*/
    case 30:
      v8 = (_DWORD *)(*(int (**)(void))(*v5 + 1012))(); /*0x6f4adb*/
      if ( !v8 || !*v8 ) /*0x6f4ae9*/
        goto LABEL_45; /*0x6f4aec*/
      (*(void (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)v7->__pad_0 + 968))(v7, *(_DWORD *)aP2->__pad_0); /*0x6f4afd*/
      (*(void (__thiscall **)(TechnoClass *, int, _DWORD))(*(_DWORD *)v7->__pad_0 + 488))(v7, 1, 0); /*0x6f4b0b*/
      result = 1; /*0x6f4b13*/
      break; /*0x6f4b1c*/
    case 31:
      edi24 = v5[191]; /*0x6f4c9e*/
      if ( edi24 == *(_DWORD *)((*(int (**)(void))(*v5 + 132))() + 1668) ) /*0x6f4cb2*/
      {
LABEL_25:
        result = 10; /*0x6f4cb4*/
      }
      else
      {
        LODWORD(v7->pitchAngle) = edi24 + 1; /*0x6f4cc8*/
        result = 1; /*0x6f4cc3*/
      }
      break; /*0x6f4cbf*/
    default:
LABEL_45:
      result = ObjectClass::ProcessGroupInput((int)v7, (RadioClass *)aP0, a2, aP2); /*0x6f4e3f*/
      break; /*0x6f4e4c*/
  }
  return result; /*0x6f4b11*/
}


// ==== 0x006F4EB0  TechnoClass::PushNearbyUnits  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::PushNearbyUnits(#377 *this)
{
  _DWORD *v2; // eax
  _WORD *v3; // edi
  int result; // eax
  int i; // ebx
  int v6; // edi
  _DWORD *v7; // eax
  _WORD *v8; // eax
  int v9; // eax
  int j; // edi
  int v11; // [esp-8h] [ebp-3Ch]
  int v12; // [esp+8h] [ebp-2Ch]
  int v13; // [esp+Ch] [ebp-28h] BYREF
  _DWORD v14[3]; // [esp+10h] [ebp-24h] BYREF
  void **v15; // [esp+1Ch] [ebp-18h] BYREF
  void *Block; // [esp+20h] [ebp-14h]
  int v17; // [esp+24h] [ebp-10h]
  int v18; // [esp+28h] [ebp-Ch]
  int v19; // [esp+2Ch] [ebp-8h]
  int v20; // [esp+30h] [ebp-4h]

  v2 = (_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD *))(this->q048)(this, v14); /*0x6f4ec0*/
  LOWORD(v12) = *v2 / 256; /*0x6f4ed3*/
  HIWORD(v12) = v2[1] / 256; /*0x6f4eec*/
  v13 = v12; /*0x6f4ef9*/
  v3 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v13); /*0x6f4f03*/
  if ( this->parachute == 2 /*0x6f4f27*/
    && HouseClass_Player
    && *((#375 **)this + 135) != HouseClass_Player
    && !Cell::IsPassableOffset(v3, *((_DWORD *)HouseClass_Player + 12)) )
  {
    (*(void (__thiscall **)(#377 *))(this->initialOwner)(this); /*0x6f4f34*/
  }
  result = Cell::HasOccupierBit(v3, *(_DWORD *)(this->Owner + 48)); /*0x6f4f46*/
  if ( (_BYTE)result ) /*0x6f4f4d*/
  {
    result = (*(int (__thiscall **)(#377 *))(this->sprayOffsetIndex)(this); /*0x6f4f57*/
    if ( (_BYTE)result ) /*0x6f4f5f*/
    {
      EventClass::resetEvent(&v15, 0, 0); /*0x6f4f6e*/
      v15 = &vt_DynamicVectorClass_TechnoClass; /*0x6f4f78*/
      v20 = 10; /*0x6f4f80*/
      v19 = 0; /*0x6f4f88*/
      for ( i = MEMORY[0xA8EC88] - 1; i >= 0; --i ) /*0x6f4f95*/
      {
        v6 = *((_DWORD *)MEMORY[0xA8EC7C] + i); /*0x6f4fa1*/
        if ( *(#377 **)(v6 + 692) == this ) /*0x6f4faa*/
        {
          v11 = *(_DWORD *)(*(_DWORD *)(v6 + 540) + 48); /*0x6f4fbd*/
          v7 = (_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD *))(this->q048)(this, v14); /*0x6f4fc3*/
          v8 = Coord::To_Cell(&MEMORY[0x87F7E8], v7); /*0x6f4fcc*/
          if ( (Cell::IsPassableOffset(v8, v11) || *(_DWORD *)(v6 + 540) == this->Owner) /*0x6f5019*/
            && (v19 < v17
             || (BYTE1(v18) || !v17)
             && v20 > 0
             && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v15[2])(&v15, v20 + v17, 0)) )
          {
            v9 = v19++; /*0x6f5024*/
            *((_DWORD *)Block + v9) = v6; /*0x6f502f*/
          }
        }
      }
      (*(void (__thiscall **)(#377 *, _DWORD))(this->audioController3)(this, 0); /*0x6f503f*/
      for ( j = v19 - 1; j >= 0; --j ) /*0x6f504f*/
        (*(void (__thiscall **)(_DWORD, #377 *))(**((_DWORD **)Block + j) + 968))(*((_DWORD *)Block + j), this); /*0x6f505b*/
      result = (int)Block; /*0x6f5064*/
      v15 = &vt_VectorClass_TechnoClass; /*0x6f5068*/
      if ( Block ) /*0x6f5072*/
      {
        if ( BYTE1(v18) ) /*0x6f507a*/
          __3_YAXPAX_Z(Block); /*0x6f507d*/
      }
    }
  }
  return result; /*0x6f5085*/
}


// ==== 0x006F5090  TechnoClass::CompleteProduction  this=TechnoClass  sig=csp ====
int __thiscall FootClass::CompleteProduction(#377 *this)
{
  int result; // eax
  _DWORD *v3; // ecx
  _DWORD *v4; // eax
  int v5; // eax
  void **v6; // ecx
  void *v7; // eax
  IUnknown *v8; // [esp+4h] [ebp-10h]
  _BYTE v9[12]; // [esp+8h] [ebp-Ch] BYREF
  IUnknown aP1; // [esp+18h] [ebp+4h] BYREF

  result = aP1.field_0; /*0x6f5090*/
  if ( aP1.field_0 == 2 ) /*0x6f509d*/
  {
    v3 = (_DWORD *)this->temporalUsing; /*0x6f50a3*/
    if ( v3 && v3[10] ) /*0x6f50ad*/
      FactoryClass::CompleteItem(v3); /*0x6f50b4*/
    v4 = (_DWORD *)(*(int (__thiscall **)(#377 *, _BYTE *))(this->q048)(this, v9); /*0x6f50c2*/
    LOWORD(v8) = *v4 / 256; /*0x6f50d5*/
    HIWORD(v8) = v4[1] / 256; /*0x6f50eb*/
    v5 = *(_DWORD *)this; /*0x6f50f4*/
    aP1.field_0 = (int)v8; /*0x6f50f6*/
    (*(void (__thiscall **)(#377 *))(v5 + 1056))(this); /*0x6f50fa*/
    v6 = (void **)this->attachedTag; /*0x6f5100*/
    if ( v6 ) /*0x6f5105*/
      TeamClass::Update_0(v6, 34, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6844], 0, 0); /*0x6f5115*/
    if ( !this->q3D5 && LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], &aP1, (TechnoClass *)1) ) /*0x6f5130*/
      this->q3D5 = 1; /*0x6f5139*/
    if ( !this->isDiscoveredByCurrentPlayer /*0x6f5160*/
      && (*((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1) + 300) & 0x10) != 0 )
    {
      (*(void (__thiscall **)(#377 *, IUnknown *))(this->q198)(this, HouseClass_Player); /*0x6f516c*/
    }
    v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1); /*0x6f517c*/
    BuildingClass::CreateIdleAnim((int)v7); /*0x6f5183*/
  }
  return result; /*0x6f5188*/
}


// ==== 0x006F5EF0  DrawTacticalLine3D  this=-  sig=csp ====
int __fastcall Tactical_DrawLine3D(_DWORD *a1, int *a2, int a3)
{
  int *v5; // edx
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int *v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  struct IPersistStreamVtbl *lpVtbl; // edx
  struct IPersistStreamVtbl *v17; // edx
  int v19; // [esp+0h] [ebp-34h]
  int v20; // [esp+4h] [ebp-30h]
  _DWORD v21[2]; // [esp+10h] [ebp-24h] BYREF
  int v22; // [esp+18h] [ebp-1Ch]
  int v23; // [esp+1Ch] [ebp-18h]
  int v24; // [esp+20h] [ebp-14h]
  int v25; // [esp+24h] [ebp-10h] BYREF
  _DWORD v26[3]; // [esp+28h] [ebp-Ch] BYREF

  v5 = Coord::Subtract(v26, (3 * *a1 + *a2) / 4, (3 * a1[1] + a2[1]) / 4, (3 * a1[2] + a2[2]) / 4); /*0x6f5f45*/
  v6 = a1[1]; /*0x6f5f47*/
  v7 = *v5; /*0x6f5f4a*/
  v8 = v5[1]; /*0x6f5f4c*/
  v9 = v5[2]; /*0x6f5f4f*/
  v21[1] = v8; /*0x6f5f52*/
  v10 = a2[1]; /*0x6f5f56*/
  v21[0] = v7; /*0x6f5f59*/
  v11 = *a2; /*0x6f5f5d*/
  v22 = v9; /*0x6f5f5f*/
  v12 = Coord::Subtract(v26, (3 * v11 + *a1) / 4, (3 * v10 + v6) / 4, (3 * a2[2] + a1[2]) / 4); /*0x6f5fa0*/
  v13 = v12[1]; /*0x6f5fa9*/
  v14 = v12[2]; /*0x6f5fac*/
  v23 = *v12; /*0x6f5faf*/
  v24 = v13; /*0x6f5fb3*/
  v15 = a1[2]; /*0x6f5fb7*/
  v25 = v14; /*0x6f5fca*/
  lpVtbl = MEMORY[0x887324]->__tail_0; /*0x6f5fd1*/
  if ( v15 <= v22 ) /*0x6f5fd3*/
    ((void (__stdcall *)(_DWORD *, _DWORD *, int, _DWORD, int, int))lpVtbl[3].QueryInterface)(v21, a1, a3, 0, v19, v20); /*0x6f5fe3*/
  else
    ((void (__stdcall *)(_DWORD *, _DWORD *, int, _DWORD, int, int))lpVtbl[3].QueryInterface)(a1, v21, a3, 0, v19, v20); /*0x6f5fdb*/
  v17 = MEMORY[0x887324]->__tail_0; /*0x6f5ff8*/
  if ( a2[2] <= v26[1] ) /*0x6f5ffa*/
    return ((int (__stdcall *)(int *, int *))v17[3].QueryInterface)(&v25, a2); /*0x6f6015*/
  else
    return ((int (__stdcall *)(int *, int *))v17[3].QueryInterface)(a2, &v25); /*0x6f6002*/
}


// ==== 0x006F6030  globalHelper_0F6030  this=-  sig=csp ====
int __fastcall sub_6F6030(int *a1, _DWORD *a2, int a3)
{
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // edi
  int v8; // kr00_4
  struct IPersistStreamVtbl *lpVtbl; // eax
  _DWORD v11[3]; // [esp+10h] [ebp-Ch] BYREF

  v4 = *a1; /*0x6f603b*/
  v5 = a1[1]; /*0x6f603d*/
  v6 = a1[2]; /*0x6f6040*/
  v7 = 3 * v5 + a2[1]; /*0x6f6056*/
  v8 = 3 * v6 + a2[2]; /*0x6f6072*/
  v11[0] = (3 * v4 + *a2) / 4; /*0x6f6089*/
  v11[1] = v7 / 4; /*0x6f608d*/
  v11[2] = v8 / 4; /*0x6f6091*/
  lpVtbl = MEMORY[0x887324]->__tail_0; /*0x6f6095*/
  if ( v6 <= v8 / 4 ) /*0x6f6098*/
    return ((int (__stdcall *)(_DWORD *, int *, int, _DWORD))lpVtbl[3].QueryInterface)(v11, a1, a3, 0); /*0x6f60b3*/
  else
    return ((int (__stdcall *)(int *, _DWORD *, int, _DWORD))lpVtbl[3].QueryInterface)(a1, v11, a3, 0); /*0x6f60a0*/
}


// ==== 0x006F60C0  TechnoClass::vt_entry_448  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::vt_entry_448(#377 *this)
{
  int result; // eax

  return result; /*0x6f60c0*/
}


// ==== 0x006F60D0  TechnoClass::DrawSelectionBox  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::DrawSelectionBox(#377 *this)
{
  int v1; // edi
  int result; // eax
  int v4; // edi
  int v5; // eax
  int *v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // ebp
  int *v10; // eax
  int v11; // esi
  int v12; // ebp
  int v13; // edi
  int v14; // ebx
  int *v15; // eax
  int *v16; // eax
  int *v17; // eax
  int *v18; // eax
  int *v19; // eax
  int *v20; // eax
  int *v21; // eax
  int *v22; // eax
  int *v23; // eax
  int *v24; // eax
  int v25; // [esp-8h] [ebp-60h]
  int v26; // [esp+Ch] [ebp-4Ch]
  int v27; // [esp+10h] [ebp-48h]
  int v28; // [esp+14h] [ebp-44h]
  int v29; // [esp+18h] [ebp-40h]
  int v30; // [esp+1Ch] [ebp-3Ch] BYREF
  int v31; // [esp+20h] [ebp-38h]
  int v32; // [esp+24h] [ebp-34h]
  int v33; // [esp+28h] [ebp-30h] BYREF
  int v34; // [esp+2Ch] [ebp-2Ch]
  int v35; // [esp+30h] [ebp-28h]
  int v36; // [esp+34h] [ebp-24h] BYREF
  int v37; // [esp+38h] [ebp-20h]
  int v38; // [esp+3Ch] [ebp-1Ch]
  int v39; // [esp+40h] [ebp-18h] BYREF
  int v40; // [esp+44h] [ebp-14h] BYREF
  int v41; // [esp+48h] [ebp-10h] BYREF
  _DWORD v42[3]; // [esp+4Ch] [ebp-Ch] BYREF

  result = (*(int (__thiscall **)(#377 *))(this->fallRate)(this); /*0x6f60d8*/
  if ( result == 6 ) /*0x6f60de*/
  {
    LOBYTE(result) = this->isSelected; /*0x6f60e4*/
    if ( (_BYTE)result ) /*0x6f60ec*/
    {
      result = (*(int (__thiscall **)(#377 *))(this->fallRate)(this); /*0x6f60f6*/
      if ( result != 15 ) /*0x6f60fc*/
      {
        v25 = v1; /*0x6f6106*/
        v4 = 15; /*0x6f6109*/
        if ( (*(int (__thiscall **)(#377 *, int))(this->airstrikeTintStage_e)(this, v25) < -4 ) /*0x6f6117*/
          v4 = 12; /*0x6f6119*/
        v5 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x6f6122*/
        v6 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v5 + 124))(v5, &v41); /*0x6f6134*/
        v7 = *v6; /*0x6f6136*/
        v8 = v6[1]; /*0x6f6138*/
        v30 = v6[2]; /*0x6f613e*/
        v28 = v7 / 2; /*0x6f6147*/
        v9 = v8 / 2; /*0x6f6157*/
        v29 = v8 / 2; /*0x6f615c*/
        if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x6f6163*/
          v27 = *(unsigned __int8 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + v4); /*0x6f6170*/
        else
          v27 = *(unsigned __int16 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 2 * v4); /*0x6f6182*/
        v10 = (int *)(*(int (__thiscall **)(#377 *, int *))(this->q048)(this, &v40); /*0x6f618f*/
        v11 = *v10; /*0x6f6192*/
        v12 = -v9; /*0x6f6198*/
        v13 = v10[1]; /*0x6f619a*/
        v14 = v10[2]; /*0x6f61a3*/
        Coord::Subtract(&v30, -v27, v12, v29); /*0x6f61b1*/
        v15 = Coord::Subtract(v42, v11 + v30, v13 + v31, v14 + v32); /*0x6f61d1*/
        v36 = *v15; /*0x6f61da*/
        v37 = v15[1]; /*0x6f61e2*/
        v38 = v15[2]; /*0x6f61f2*/
        Coord::Subtract(&v33, -v27, v12, 0); /*0x6f61f6*/
        v16 = Coord::Subtract(v42, v11 + v33, v13 + v34, v14 + v35); /*0x6f6216*/
        v39 = *v16; /*0x6f621d*/
        v40 = v16[1]; /*0x6f6229*/
        v41 = v16[2]; /*0x6f6238*/
        DrawTacticalLine3D(&v39, &v36, v26); /*0x6f623c*/
        Coord::Subtract(&v39, v27, v12, 0); /*0x6f624d*/
        v17 = Coord::Subtract(v42, v11 + v39, v13 + v40, v14 + v41); /*0x6f626d*/
        v33 = *v17; /*0x6f6274*/
        v34 = v17[1]; /*0x6f627b*/
        v35 = v17[2]; /*0x6f628e*/
        Coord::Subtract(&v36, -v27, v12, 0); /*0x6f6292*/
        v18 = Coord::Subtract(v42, v11 + v36, v13 + v37, v14 + v38); /*0x6f62b2*/
        v30 = *v18; /*0x6f62b9*/
        v31 = v18[1]; /*0x6f62c5*/
        v32 = v18[2]; /*0x6f62d4*/
        DrawTacticalLine3D(&v30, &v33, v26); /*0x6f62d8*/
        Coord::Subtract(&v39, -v27, v28, 0); /*0x6f62ed*/
        v19 = Coord::Subtract(v42, v11 + v39, v13 + v40, v14 + v41); /*0x6f630d*/
        v33 = *v19; /*0x6f6316*/
        v34 = v19[1]; /*0x6f6322*/
        v35 = v19[2]; /*0x6f632e*/
        Coord::Subtract(&v36, -v27, v12, 0); /*0x6f6332*/
        v20 = Coord::Subtract(v42, v11 + v36, v13 + v37, v14 + v38); /*0x6f6352*/
        v30 = *v20; /*0x6f6359*/
        v31 = v20[1]; /*0x6f6364*/
        v32 = v20[2]; /*0x6f636b*/
        DrawTacticalLine3D(&v30, &v33, v26); /*0x6f6378*/
        v21 = Coord::Subtract(v42, v11 - v27, v13 + v28, v14 + v29); /*0x6f6398*/
        v36 = *v21; /*0x6f639f*/
        v37 = v21[1]; /*0x6f63ab*/
        v38 = v21[2]; /*0x6f63bc*/
        Coord::Subtract(&v39, -v27, v12, v29); /*0x6f63c0*/
        v22 = Coord::Subtract(v42, v11 + v39, v13 + v40, v14 + v41); /*0x6f63e0*/
        v33 = *v22; /*0x6f63e7*/
        v34 = v22[1]; /*0x6f63ee*/
        v35 = v22[2]; /*0x6f63fd*/
        DrawTacticalLine3D(&v33, &v36, v26); /*0x6f6406*/
        v23 = Coord::Subtract(v42, v11 + v27, v13 + v12, v14 + v29); /*0x6f6423*/
        v36 = *v23; /*0x6f642a*/
        v37 = v23[1]; /*0x6f6431*/
        v38 = v23[2]; /*0x6f6447*/
        Coord::Subtract(&v39, -v27, v12, v29); /*0x6f644b*/
        v24 = Coord::Subtract(v42, v11 + v39, v40 + v13, v41 + v14); /*0x6f6469*/
        v33 = *v24; /*0x6f6470*/
        v34 = v24[1]; /*0x6f6477*/
        v35 = v24[2]; /*0x6f6486*/
        return DrawTacticalLine3D(&v33, &v36, v26); /*0x6f648f*/
      }
    }
  }
  return result; /*0x6f6497*/
}


// ==== 0x006F64A0  TechnoClass::DrawHealthBar  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::DrawHealthBar(#377 *this)
{
  int v2; // eax
  int *v3; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // ebp
  _DWORD *v7; // eax
  int v8; // ebx
  int *v9; // eax
  int v10; // edi
  int *v11; // eax
  int v12; // ebx
  int *v13; // eax
  int v14; // ebx
  double HealthRatio; // st7
  int v16; // ebp
  _DWORD *v17; // edi
  int v18; // ebp
  int v19; // ecx
  bool v20; // zf
  int v21; // ebp
  int v22; // ecx
  char v23; // bl
  int result; // eax
  int v25; // ecx
  int v26; // eax
  char v27; // al
  _DWORD *v28; // edi
  int v29; // edx
  int v30; // ebx
  int v31; // ebp
  int v32; // edx
  double v33; // st7
  int v34; // eax
  int i; // ebx
  int v36; // eax
  int v37; // eax
  int v38; // [esp+10h] [ebp-3Ch]
  unsigned int v39; // [esp+14h] [ebp-38h]
  unsigned int v40; // [esp+14h] [ebp-38h]
  int v41; // [esp+18h] [ebp-34h]
  int v42; // [esp+18h] [ebp-34h]
  int v43; // [esp+1Ch] [ebp-30h]
  int v44; // [esp+1Ch] [ebp-30h]
  int v45; // [esp+20h] [ebp-2Ch]
  int v46; // [esp+24h] [ebp-28h]
  int v47; // [esp+28h] [ebp-24h]
  int v48; // [esp+2Ch] [ebp-20h] BYREF
  int v49; // [esp+30h] [ebp-1Ch]
  int v50; // [esp+34h] [ebp-18h] BYREF
  int v51; // [esp+38h] [ebp-14h]
  int v52; // [esp+40h] [ebp-Ch] BYREF
  int v53; // [esp+44h] [ebp-8h]
  int v54; // [esp+48h] [ebp-4h]
  _DWORD *v55; // [esp+50h] [ebp+4h]
  int v56; // [esp+50h] [ebp+4h]
  int v57; // [esp+50h] [ebp+4h]
  int v58; // [esp+50h] [ebp+4h]
  int *v59; // [esp+54h] [ebp+8h]

  if ( (*(int (__thiscall **)(#377 *))(this->fallRate)(this) == 6 )
  {
    (*(void (__thiscall **)(#377 *))(this->airstrikeTintStage_e)(this); /*0x6f64bb*/
    v2 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x6f64c5*/
    v3 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v2 + 124))(v2, &v50); /*0x6f64d4*/
    v4 = *v3; /*0x6f64d7*/
    v5 = v3[1]; /*0x6f64dd*/
    v6 = v3[2]; /*0x6f64e0*/
    v7 = Coord::Subtract(&v50, *v3 / 2, v5 / 2, v6 / 2); /*0x6f64fb*/
    v8 = v5 - v7[1]; /*0x6f650b*/
    v52 = *v7 - v4; /*0x6f6523*/
    v53 = v8; /*0x6f652e*/
    v54 = v6; /*0x6f6532*/
    v9 = Coord::To_ScreenRaw(&v50, &v52); /*0x6f6536*/
    v43 = *v9; /*0x6f6541*/
    v10 = v9[1]; /*0x6f6549*/
    v45 = v10; /*0x6f6564*/
    v53 = -v53; /*0x6f656a*/
    v11 = Coord::To_ScreenRaw(&v50, &v52); /*0x6f656e*/
    v48 = *v11; /*0x6f6579*/
    v12 = v11[1]; /*0x6f6581*/
    v54 = 0; /*0x6f6592*/
    v53 = -v53; /*0x6f659a*/
    v13 = Coord::To_ScreenRaw(&v50, &v52); /*0x6f659e*/
    v46 = *v13; /*0x6f65a5*/
    v47 = v13[1]; /*0x6f65c0*/
    v53 = -v53; /*0x6f65cb*/
    v14 = (v10 - v12) / 2; /*0x6f65cf*/
    HealthRatio = BuildingClass::GetHealthRatio((int *)this); /*0x6f65d7*/
    v16 = Math::RoundToInt(HealthRatio * (double)v14); /*0x6f65e5*/
    v38 = v16; /*0x6f65ee*/
    if ( v16 <= 1 ) /*0x6f65f2*/
    {
      v38 = 1; /*0x6f65f4*/
      v16 = 1; /*0x6f65f8*/
    }
    if ( v16 >= v14 ) /*0x6f65fc*/
    {
      v38 = v14; /*0x6f65fe*/
      v16 = v14; /*0x6f6602*/
    }
    v39 = 1; /*0x6f6606*/
    if ( ObjectClass::IsYellowHP((int *)this) ) /*0x6f660a*/
    {
      v39 = 2; /*0x6f6613*/
    }
    else if ( BuildingClass::IsHealthLow((int *)this) ) /*0x6f661f*/
    {
      v39 = 4; /*0x6f6628*/
    }
    v17 = v55; /*0x6f6630*/
    v51 = 2 - 2 * v14; /*0x6f6640*/
    if ( v16 > 0 ) /*0x6f6644*/
    {
      v18 = 0; /*0x6f664e*/
      v56 = 0; /*0x6f6650*/
      v41 = v38; /*0x6f6654*/
      do /*0x6f66d6*/
      {
        v19 = v45 + v17[1]; /*0x6f666b*/
        v48 = v43 + *v17 + 4 * v14 + 3 - v18; /*0x6f6673*/
        v49 = v51 + v19 + 2 - v56; /*0x6f6698*/
        DrawToSurfaceSHP( /*0x6f66ba*/
          MEMORY[0x887314],
          MEMORY[0x87F6C4],
          MEMORY[0xAC147C],
          v39,
          &v48,
          v59,
          1536,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
        v18 += 4; /*0x6f66c7*/
        v20 = v41 == 1; /*0x6f66cd*/
        v56 -= 2; /*0x6f66ce*/
        --v41; /*0x6f66d2*/
      }
      while ( !v20 ); /*0x6f66d6*/
      v16 = v38; /*0x6f66d8*/
    }
    if ( v16 < v14 ) /*0x6f66de*/
    {
      v21 = -2 * v16; /*0x6f66ec*/
      v57 = 4 * v38; /*0x6f66f7*/
      v42 = v14 - v38; /*0x6f66fb*/
      do /*0x6f677b*/
      {
        v22 = v45 + v17[1] + v51 + 2; /*0x6f6718*/
        v48 = v43 + *v17 + 4 * v14 + 3 - v57; /*0x6f6728*/
        v49 = v22 - v21; /*0x6f6741*/
        DrawToSurfaceSHP( /*0x6f675f*/
          MEMORY[0x887314],
          MEMORY[0x87F6C4],
          MEMORY[0xAC147C],
          0,
          &v48,
          v59,
          1536,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
        v21 -= 2; /*0x6f676f*/
        v20 = v42 == 1; /*0x6f6772*/
        v57 += 4; /*0x6f6773*/
        --v42; /*0x6f6777*/
      }
      while ( !v20 ); /*0x6f677b*/
    }
    v23 = 0; /*0x6f6789*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith(*((#375 **)this + 135), HouseClass_Player) /*0x6f67b0*/
      || ((1 << *(_DWORD *)(*((_DWORD *)HouseClass_Player + 13) + 184)) & this->hasParachute) != 0 )
    {
      v23 = 1; /*0x6f67b2*/
    }
    if ( this
      && (*(int (__thiscall **)(#377 *))(this->fallRate)(this) == 6
      && *(_BYTE *)(*((*(int (__thiscall **)(#377 *))(this->fallRate)(this) == 6
                    ? (_DWORD *)((char *)this + 1312)
                    : (_DWORD *)1312)
                  + 5499) )
    {
      v23 = 1; /*0x6f67e6*/
    }
    result = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x6f67ec*/
    if ( *(_BYTE *)(result + 984) || v23 ) /*0x6f67fe*/
    {
      v25 = v17[1]; /*0x6f6810*/
      v50 = v46 + *v17; /*0x6f6813*/
      v26 = *(_DWORD *)this; /*0x6f6817*/
      v51 = v47 + v25; /*0x6f681b*/
      return (*(int (__thiscall **)(#377 *, int *, _DWORD *, int *))(v26 + 1104))(this, &v50, v17, v59); /*0x6f682c*/
    }
  }
  else
  {
    v20 = (*(int (__thiscall **)(#377 *))(this->fallRate)(this) == 15; /*0x6f6843*/
    v27 = this->isSelected; /*0x6f6846*/
    if ( v20 ) /*0x6f684c*/
    {
      v28 = v55; /*0x6f6852*/
      if ( v27 ) /*0x6f6858*/
      {
        v29 = *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 992) - 25 + v55[1]; /*0x6f6884*/
        v50 = *v55 + 11; /*0x6f688b*/
        v51 = v29; /*0x6f6899*/
        DrawToSurfaceSHP( /*0x6f68b4*/
          MEMORY[0x887314],
          MEMORY[0x87F6C4],
          MEMORY[0xAC1478],
          1u,
          &v50,
          v59,
          3584,
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
      v44 = -5; /*0x6f68c3*/
      v30 = 8; /*0x6f68db*/
      v31 = *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 992) - 24; /*0x6f68e0*/
    }
    else
    {
      v28 = v55; /*0x6f68e8*/
      if ( v27 ) /*0x6f68ee*/
      {
        v32 = *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 992) - 26 + v55[1]; /*0x6f6918*/
        v50 = *v55 + 1; /*0x6f691f*/
        v51 = v32; /*0x6f692d*/
        DrawToSurfaceSHP( /*0x6f6947*/
          MEMORY[0x887314],
          MEMORY[0x87F6C4],
          MEMORY[0xAC1478],
          0,
          &v50,
          v59,
          3584,
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
      v44 = -15; /*0x6f6956*/
      v30 = 17; /*0x6f696e*/
      v31 = *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 992) - 25; /*0x6f6973*/
    }
    v33 = BuildingClass::GetHealthRatio((int *)this); /*0x6f697c*/
    v34 = Math::RoundToInt(v33 * (double)v30); /*0x6f6985*/
    v58 = v34; /*0x6f698d*/
    if ( v34 <= 1 ) /*0x6f6991*/
    {
      v58 = 1; /*0x6f6993*/
      v34 = 1; /*0x6f699b*/
    }
    if ( v34 >= v30 ) /*0x6f69a1*/
      v58 = v30; /*0x6f69a3*/
    v40 = 16; /*0x6f69a9*/
    if ( BuildingClass::GetHealthRatio((int *)this) <= *(double *)&MEMORY[0x8871E0][1].? ) /*0x6f69c7*/
      v40 = 17; /*0x6f69c9*/
    if ( BuildingClass::GetHealthRatio((int *)this) <= *(double *)&MEMORY[0x8871E0][1].? ) /*0x6f69e9*/
      v40 = 18; /*0x6f69eb*/
    for ( i = 0; i < v58; ++i ) /*0x6f69fb*/
    {
      v36 = v44 + *v28 + 2 * i; /*0x6f6a0e*/
      v51 = v31 + v28[1]; /*0x6f6a11*/
      v50 = v36; /*0x6f6a15*/
      DrawToSurfaceSHP( /*0x6f6a4a*/
        MEMORY[0x887314],
        MEMORY[0x87F6C4],
        MEMORY[0xAC147C],
        v40,
        &v50,
        v59,
        1536,
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
    if ( (unsigned __int8)HouseClass::IsAlliedWith(*((#375 **)this + 135), HouseClass_Player) /*0x6f6a8c*/
      || (result = this->hasParachute, ((1 << *(_DWORD *)(*((_DWORD *)HouseClass_Player + 13) + 184)) & result) != 0) )
    {
      v37 = *v28 - 10; /*0x6f6a96*/
      v51 = v28[1] + 10; /*0x6f6a99*/
      v50 = v37; /*0x6f6aa1*/
      return (*(int (__thiscall **)(#377 *, int *, _DWORD *, int *))(this->secondaryTurretIndex)(this, &v50, v28, v59); /*0x6f6ab0*/
    }
  }
  return result; /*0x6f6832*/
}


// ==== 0x006F6AC0  TechnoClass::CleanupDeploy  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CleanupDeploy(void *this)
{
  BuildingTypeClass *DB; // edi
  _DWORD *v3; // edi
  BuildingTypeClass *v4; // eax
  int v6; // [esp+0h] [ebp-1Ch]
  _DWORD v7[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( this->inLimbo || !(*(int (__thiscall **)(void *))(this->hasParachute)(this) ) /*0x6f6ad7*/
    return RadioClass::ProcessCmd((#374 *)this); /*0x6f6adf*/
  if ( *(_BYTE *)((*(int (__thiscall **)(void *))(this->hasParachute)(this) + 1518) ) /*0x6f6aef*/
    (*(void (__thiscall **)(void *, _DWORD, _DWORD, int, IUnknown *))(this->q123)( /*0x6f6b06*/
      this,
      0,
      0,
      1,
      HouseClass_Player);
  else
    (*(void (__thiscall **)(void *, _DWORD, _DWORD, _DWORD, _DWORD))(this->q123)(this, 0, 0, 0, 0); /*0x6f6b16*/
  v7[0] = this->q027; /*0x6f6b25*/
  v7[1] = this->owningHouseIndex; /*0x6f6b2c*/
  v7[2] = this->q029; /*0x6f6b37*/
  MapClass::RevealArea2( /*0x6f6b4f*/
    &MEMORY[0x87F7E8],
    (IUnknown *)v7,
    (MouseClass *)(this->isInLogic - 3),
    (MouseClass *)(this->isInLogic + 3),
    0);
  if ( *(_BYTE *)((*(int (__thiscall **)(void *))(this->hasParachute)(this) + 3281) ) /*0x6f6b5e*/
    (*(void (__thiscall **)(void *))(this->isTether)(this); /*0x6f6b6a*/
  if ( *(_DWORD *)((*(int (__thiscall **)(void *))(this->hasParachute)(this) + 1528) ) /*0x6f6b7a*/
    TechnoClass::RemoveFromDynamicVector(&MEMORY[0x87F5D8], (TechnoClass *)this); /*0x6f6b88*/
  if ( *(_BYTE *)((*(int (__thiscall **)(void *))(this->hasParachute)(this) + 1508) ) /*0x6f6b98*/
  {
    DB = (BuildingTypeClass *)CCINIClass::GetDB((_DWORD *)this + 69); /*0x6f6bab*/
    if ( DB ) /*0x6f6baf*/
    {
      do /*0x6f6bc7*/
      {
        (*(void (__thiscall **)(BuildingTypeClass *, _DWORD))(*(_DWORD *)DB->vtable0 + 968))(DB, 0); /*0x6f6bb6*/
        DB = *(BuildingTypeClass **)&DB->BarrelVoxel[12]; /*0x6f6bbc*/
      }
      while ( DB && (DB->abstractFlags & 4) != 0 ); /*0x6f6bc7*/
    }
  }
  HouseClass::RegisterGain(this->Owner, (TechnoClass *)this, 0); /*0x6f6bd1*/
  if ( (*(int (__thiscall **)(void *))(this->locomotorTarget)(this) > 0 ) /*0x6f6be2*/
  {
    if ( this && (this->abstractFlags & 4) != 0 ) /*0x6f6bec*/
    {
      v3 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)this + 686); /*0x6f6bff*/
      if ( v3 ) /*0x6f6c03*/
        goto LABEL_20; /*0x6f6c03*/
    }
    else
    {
      v3 = (_DWORD *)(*(int (__thiscall **)(void *))(this->q1BC)(this); /*0x6f6c11*/
      if ( v3 ) /*0x6f6c15*/
      {
LABEL_20:
        v6 = -this->threatPosed; /*0x6f6c17*/
        v4 = (BuildingTypeClass *)(*(int (__thiscall **)(void *))(this->attachedBomb)(this); /*0x6f6c24*/
        CellClass::SetThreatBounds(v3, v4, v6); /*0x6f6c2a*/
        this->threatPosed = 0; /*0x6f6c2f*/
      }
    }
  }
  if ( this->q423 ) /*0x6f6c35*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 1176))(this); /*0x6f6c44*/
  Mixer::ReleaseChannel((int **)this + 290); /*0x6f6c50*/
  this->isTurretRotateSoundPlaying = 1; /*0x6f6c5b*/
  this->q128 = 0; /*0x6f6c65*/
  Mixer::ReleaseChannel((int **)this + 297); /*0x6f6c6b*/
  this->isGattlingSoundPlaying = 0; /*0x6f6c76*/
  this->q12F = 0; /*0x6f6c7c*/
  Mixer::ReleaseChannel((int **)this + 304); /*0x6f6c82*/
  this->isAudio5Active = 0; /*0x6f6c87*/
  this->audioHandle5 = 0; /*0x6f6c8d*/
  return RadioClass::ProcessCmd((#374 *)this); /*0x6f6c9a*/
}


// ==== 0x006F6CA0  TechnoClass::FinishDeploy  this=TechnoClass  sig=csp ====
char TechnoClass::FinishDeploy(FootClass *aP0, TechnoClass *aP1, FootClass *aP2)
{
  TechnoClass *v3; // ecx
  BuildingLightClass *v5; // edi
  TechnoClass *esi1; // esi
  MouseClass *v8; // edx
  __int16 ax6; // ax
  int v9; // eax
  __int16 v10; // cx
  BuildingTypeClass *v12; // edx
  BuildingTypeClass *v13; // edx
  _DWORD *edi12; // edi
  BuildingTypeClass *v14; // eax
  BuildingTypeClass *v16; // edx
  BuildingTypeClass *eax13a; // eax
  int v17; // ecx
  int v18; // edx
  int *v19; // eax
  BuildingTypeClass *v21; // [esp+Ch] [ebp-28h]
  BuildingLightClass *v22; // [esp+1Ch] [ebp-18h] BYREF
  _DWORD var14[2]; // [esp+20h] [ebp-14h] BYREF
  _DWORD v23[3]; // [esp+28h] [ebp-Ch] BYREF

  v5 = (BuildingLightClass *)aP0; /*0x6f6ca9*/
  esi1 = v3; /*0x6f6cae*/
  if ( !(unsigned __int8)ObjectClass::Deploy((#374 *)v3) ) /*0x6f6cb1*/
    return 0; /*0x6f6f2a*/
  LOWORD(aP0) = *(_DWORD *)v5->__pad_0 / 256; /*0x6f6cce*/
  HIWORD(aP0) = *(_DWORD *)&v5->__pad_0[4] / 256; /*0x6f6ce6*/
  BYTE1(esi1->barrelRecoil[6]) = LayerClass::IsWithinUsableArea( /*0x6f6cfe*/
                                   &stru_87C374.__pad_14B0[8132],
                                   (IUnknown *)&aP0,
                                   (TechnoClass *)1);
  if ( !esi1->isAliveFlag ) /*0x6f6d04*/
    return 1; /*0x6f6d0f*/
  (*(void (__thiscall **)(TechnoClass *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)esi1->__pad_0 + 1160))( /*0x6f6d27*/
    esi1,
    0,
    0,
    0,
    0,
    0);
  var14[0] = esi1->location[0]; /*0x6f6d39*/
  v8 = (MouseClass *)(esi1->lastSightRange + 3); /*0x6f6d46*/
  var14[1] = esi1->location[1]; /*0x6f6d49*/
  v23[0] = esi1->location[2]; /*0x6f6d55*/
  MapClass::RevealArea2(&stru_87C374.__pad_14B0[8132], (IUnknown *)var14, 0, v8, 0); /*0x6f6d61*/
  if ( *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 1528) ) /*0x6f6d70*/
    TechnoClass::checkRange(&stru_87C374.__pad_14B0[7604], esi1); /*0x6f6d80*/
  HouseClass::RegisterGain_0((int)esi1->focus, esi1, 0); /*0x6f6d8f*/
  LOBYTE(ax6) = 0; /*0x6f6d94*/
  HIBYTE(ax6) = (_BYTE)aP2; /*0x6f6d9a*/
  LOWORD(aP2) = ax6; /*0x6f6da5*/
  FacingClass::Set_SyncLog((FacingClass *)&esi1->target_laser_timer[2], (DirStruct *)&aP2); /*0x6f6daa*/
  LOWORD(aP2) = 0x4000; /*0x6f6dbc*/
  FacingClass::Set_SyncLog((FacingClass *)esi1->barrelFacing, (DirStruct *)&aP2); /*0x6f6dc3*/
  v9 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1); /*0x6f6dcc*/
  LOBYTE(v10) = 0; /*0x6f6dd2*/
  HIBYTE(v10) = *(_BYTE *)(v9 + 976); /*0x6f6dd9*/
  LOWORD(aP2) = 0x4000 - v10; /*0x6f6de5*/
  FacingClass::Update((FacingClass *)esi1->barrelFacing, (DirStruct *)&aP2); /*0x6f6df5*/
  v12 = *(BuildingTypeClass **)esi1->__pad_0; /*0x6f6dfa*/
  *(_DWORD *)&esi1->__pad_491[11] = 1; /*0x6f6dfe*/
  *(_DWORD *)&esi1->__pad_491[15] = 0; /*0x6f6e08*/
  if ( (*(int (__thiscall **)(TechnoClass *))&v12->BarrelVoxel[8])(esi1) == 15 ) /*0x6f6e19*/
    LOBYTE(esi1->disguiseBlinkTimer[2]) = 1; /*0x6f6e1b*/
  (*(void (__thiscall **)(TechnoClass *, int))(*(_DWORD *)esi1->__pad_0 + 1156))(esi1, 1); /*0x6f6e2a*/
  v13 = *(BuildingTypeClass **)esi1->__pad_0; /*0x6f6e30*/
  LOBYTE(esi1->disguiseBlinkTimer[2]) = 0; /*0x6f6e34*/
  if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))&v13->ImageFile[8])(esi1) ) /*0x6f6e3b*/
    (*(void (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 492))(esi1); /*0x6f6e49*/
  esi1->__pad_3F7[41] = 10 /*0x6f6e6f*/
                      * (*(_DWORD *)&v5->__pad_0[8]
                       / *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5820));
  LOWORD(aP1) = *(_DWORD *)v5->__pad_0 / 256; /*0x6f6e83*/
  HIWORD(aP1) = *(_DWORD *)&v5->__pad_0[4] / 256; /*0x6f6e97*/
  if ( !LayerClass::IsWithinUsableArea(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP1, (TechnoClass *)1) ) /*0x6f6ea4*/
    esi1->__pad_3F7[36] = 0; /*0x6f6ead*/
  edi12 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 444))(esi1); /*0x6f6ebd*/
  if ( edi12 ) /*0x6f6ec1*/
  {
    v14 = (BuildingTypeClass *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)esi1->__pad_0 + 704))(esi1); /*0x6f6ec7*/
    v16 = *(BuildingTypeClass **)esi1->__pad_0; /*0x6f6ecd*/
    v21 = v14; /*0x6f6ecf*/
    esi1->threatPosed = (int)v14; /*0x6f6ed2*/
    eax13a = (BuildingTypeClass *)(*(int (__thiscall **)(TechnoClass *))&v16->BarrelVoxel[20])(esi1); /*0x6f6ed8*/
    CellClass::SetThreatBounds(edi12, eax13a, (int)v21); /*0x6f6ede*/
  }
  v17 = esi1->location[1]; /*0x6f6ee5*/
  v18 = esi1->location[2]; /*0x6f6ee8*/
  v23[0] = esi1->location[0]; /*0x6f6eeb*/
  v23[1] = v17; /*0x6f6eef*/
  v23[2] = v18; /*0x6f6f04*/
  v19 = Coord::WorldToScreen((int)&stru_87C374.__pad_14B0[8132], (MouseClass *)&v22, (MouseClass *)v23, 1); /*0x6f6f08*/
  esi1->reloadTimer[2] = *v19; /*0x6f6f10*/
  esi1->currentBurstCount = v19[1]; /*0x6f6f1a*/
  return 1; /*0x6f6d0e*/
}


// ==== 0x006F6F60  TechnoClass::ComputeSlopeDifference  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ComputeSlopeDifference(void *this, TechnoClass *aP1)
{
  _DWORD *v4; // eax
  int v5; // eax
  _DWORD *v6; // eax
  IUnknown *v7; // esi
  IUnknown *v8; // edi
  int SlopeIndex; // ebx
  int v10; // ecx
  int v11; // edi
  double v12; // st7
  int v13; // esi
  int v14; // eax
  TechnoClass *v16; // [esp+18h] [ebp-14h] BYREF
  TechnoClass *v17; // [esp+1Ch] [ebp-10h] BYREF
  _BYTE v18[12]; // [esp+20h] [ebp-Ch] BYREF
  TechnoClass *aP1a; // [esp+30h] [ebp+4h]

  if ( !(*(unsigned __int8 (__thiscall **)(void *))(this->customSound_controller)(this) /*0x6f6f7c*/
    || !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 80))(aP1) )
  {
    return 0; /*0x6f70c8*/
  }
  v4 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(this->q048)(this, v18); /*0x6f6f91*/
  LOWORD(aP1a) = *v4 / 256; /*0x6f6fa4*/
  HIWORD(aP1a) = v4[1] / 256; /*0x6f6fbd*/
  v5 = *(_DWORD *)aP1->__pad_0; /*0x6f6fc6*/
  v16 = aP1a; /*0x6f6fca*/
  v6 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, _BYTE *))(v5 + 72))(aP1, v18); /*0x6f6fce*/
  LOWORD(aP1a) = *v6 / 256; /*0x6f6fe1*/
  HIWORD(aP1a) = v6[1] / 256; /*0x6f6ffa*/
  v17 = aP1a; /*0x6f7007*/
  v7 = (IUnknown *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v16); /*0x6f7015*/
  v8 = (IUnknown *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v17); /*0x6f7022*/
  SlopeIndex = Cell::GetSlopeIndex((int)v8); /*0x6f702d*/
  if ( Cell::GetSlopeIndex((int)v7) - SlopeIndex >= 0 ) /*0x6f7037*/
  {
    v11 = Cell::GetSlopeIndex((int)v8); /*0x6f7046*/
    v10 = Cell::GetSlopeIndex((int)v7) - v11; /*0x6f704f*/
  }
  else
  {
    v10 = 0; /*0x6f7039*/
  }
  v12 = (double)(v10 / *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6200)) /*0x6f7068*/
      * *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6208);
  if ( v12 >= *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6216) ) /*0x6f707d*/
    v12 = *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6216); /*0x6f7081*/
  v13 = v10 * *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[7072]; /*0x6f708d*/
  v14 = Math::RoundToInt(v12); /*0x6f7090*/
  Math::Sqrt((double)(v13 * v13 + (v14 << 8) * (v14 << 8))); /*0x6f70b2*/
  return Math::RoundToInt(v12); /*0x6f70bf*/
}


// ==== 0x006F70E0  TechnoClass::ComputeSlopePenalty  this=AbstractClass  sig=csp ====
unsigned int __thiscall sub_6F70E0(void *this, int *a2)
{
  _DWORD *v4; // eax
  int v5; // eax
  _DWORD *v6; // eax
  void *v7; // esi
  void *v8; // edi
  int SlopeIndex; // ebx
  int v10; // eax
  int v11; // edi
  double v12; // st7
  int v14; // [esp+8h] [ebp-14h] BYREF
  int v15; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v16[12]; // [esp+10h] [ebp-Ch] BYREF
  int v17; // [esp+20h] [ebp+4h]

  if ( !(*(unsigned __int8 (__thiscall **)(void *))(this->q050)(this) /*0x6f70fc*/
    || !(*(unsigned __int8 (__thiscall **)(int *))(*a2 + 80))(a2) )
  {
    return 0; /*0x6f7214*/
  }
  v4 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(this->q048)(this, v16); /*0x6f7111*/
  LOWORD(v17) = *v4 / 256; /*0x6f7124*/
  HIWORD(v17) = v4[1] / 256; /*0x6f713d*/
  v5 = *a2; /*0x6f7146*/
  v14 = v17; /*0x6f714a*/
  v6 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(v5 + 72))(a2, v16); /*0x6f714e*/
  LOWORD(v17) = *v6 / 256; /*0x6f7161*/
  HIWORD(v17) = v6[1] / 256; /*0x6f717a*/
  v15 = v17; /*0x6f7187*/
  v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v14); /*0x6f7195*/
  v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v15); /*0x6f71a2*/
  SlopeIndex = Cell::GetSlopeIndex((int)v8); /*0x6f71ad*/
  if ( Cell::GetSlopeIndex((int)v7) - SlopeIndex >= 0 ) /*0x6f71b7*/
  {
    v11 = Cell::GetSlopeIndex((int)v8); /*0x6f71c6*/
    v10 = Cell::GetSlopeIndex((int)v7) - v11; /*0x6f71cd*/
  }
  else
  {
    v10 = 0; /*0x6f71b9*/
  }
  v12 = (double)(v10 / MEMORY[0x8871E0][1].?[11]) * *(double *)&MEMORY[0x8871E0][1].?[13]; /*0x6f71e4*/
  if ( v12 >= *(double *)&MEMORY[0x8871E0][1].?[1] ) /*0x6f71f9*/
    v12 = *(double *)&MEMORY[0x8871E0][1].?[1]; /*0x6f71fd*/
  return (unsigned int)Math::RoundToInt(v12) << 8; /*0x6f7208*/
}


// ==== 0x006F7220  TechnoClass::CheckTargetLOS  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::CheckTargetLOS(_DWORD *this, IUnknown *aP1, AbstractClass *aP2, TechnoClass *aP3)
{
  int queuedMission; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  double v13; // st7
  int v14; // ebx
  int v15; // ecx
  double v16; // st7
  IUnknown *v17; // ebx
  double v18; // st7
  IUnknown *v19; // eax
  bool v20; // zf
  int v21; // eax
  int v22; // edx
  double v23; // st7
  int v24; // eax
  int var2C_4; // [esp+1Ch] [ebp-28h]
  IUnknown *v26; // [esp+24h] [ebp-20h]
  IUnknown *v27; // [esp+24h] [ebp-20h]
  IUnknown *FoundationHeight; // [esp+24h] [ebp-20h]
  IUnknown *a1; // [esp+2Ch] [ebp-18h] BYREF
  int v31; // [esp+30h] [ebp-14h]
  int GroundHeight; // [esp+34h] [ebp-10h]
  char *v33; // [esp+38h] [ebp-Ch] BYREF
  int v34; // [esp+3Ch] [ebp-8h]
  int v35; // [esp+40h] [ebp-4h]

  if ( !aP2 || !aP3 ) /*0x6f7242*/
    return 0; /*0x6f7242*/
  queuedMission = aP3->queuedMission; /*0x6f7248*/
  if ( queuedMission == -512 ) /*0x6f7254*/
    return 1; /*0x6f725e*/
  if ( (*(unsigned __int8 (**)(void))(*(_DWORD *)aP2->__pad_0 + 84))() ) /*0x6f7263*/
    queuedMission += *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 1676); /*0x6f7274*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1024))(this) ) /*0x6f727e*/
    queuedMission = (*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3912) /*0x6f729f*/
                   + (*(int (__thiscall **)(_DWORD *))(*this + 1028))(this)) << 8;
  if ( this->spawnManager && (*(int (__thiscall **)(_DWORD *))(*this + 44))(this) != 6 ) /*0x6f72b6*/
    queuedMission += *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3924) << 8; /*0x6f72c6*/
  if ( this->currentBurstCount ) /*0x6f72c8*/
    queuedMission += *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3932) << 8; /*0x6f72e1*/
  v7 = queuedMission; /*0x6f72e9*/
  var2C_4 = aP3->location[1]; /*0x6f72eb*/
  if ( *(_BYTE *)(var2C_4 + 663) ) /*0x6f72ef*/
    v7 = queuedMission + TechnoClass::ComputeSlopeDifference(this, (TechnoClass *)aP2); /*0x6f7306*/
  v8 = (*(int (__thiscall **)(AbstractClass *, char **))(*(_DWORD *)aP2->__pad_0 + 72))(aP2, &v33); /*0x6f7314*/
  a1 = *(IUnknown **)v8; /*0x6f7319*/
  v31 = *(_DWORD *)(v8 + 4); /*0x6f7322*/
  v9 = *(_DWORD *)aP2->__pad_0; /*0x6f7326*/
  GroundHeight = *(_DWORD *)(v8 + 8); /*0x6f732b*/
  if ( (*(unsigned __int8 (__thiscall **)(AbstractClass *))(v9 + 80))(aP2) /*0x6f7361*/
    && (GroundHeight = Cell::GetGroundHeight((IUnknown *)&a1),
        (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&a1) + 80) & 0x100) != 0) )
  {
    v10 = *(_DWORD *)&stru_B05488.__pad_579C[16128] + GroundHeight; /*0x6f736d*/
    GroundHeight += *(_DWORD *)&stru_B05488.__pad_579C[16128]; /*0x6f736f*/
  }
  else
  {
    v10 = GroundHeight; /*0x6f7375*/
  }
  v26 = *(IUnknown **)&aP3->missionQueued; /*0x6f7387*/
  if ( v26 ) /*0x6f738b*/
  {
    v11 = aP1->field_4; /*0x6f7395*/
    v33 = (char *)(aP1->field_0 - (_DWORD)a1); /*0x6f7398*/
    v12 = aP1->field_8; /*0x6f73a2*/
    v34 = v11 - v31; /*0x6f73a5*/
    v35 = v12 - v10; /*0x6f73af*/
    v13 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x6f73d7*/
                                        (double)(int)v33 * (double)(int)v33
                                      + (double)(v12 - v10) * (double)(v12 - v10)
                                      + (double)(v11 - v31) * (double)(v11 - v31)));
    if ( (int)Math::RoundToInt(v13) < (int)v26 ) /*0x6f73e8*/
      return 0; /*0x6f73e8*/
    v10 = GroundHeight; /*0x6f73ee*/
  }
  if ( *(_BYTE *)(var2C_4 + 667) )
  {
    v14 = aP1->field_4; /*0x6f740a*/
    v33 = (char *)a1 - aP1->field_0; /*0x6f7413*/
    v15 = aP1->field_8; /*0x6f7419*/
    v34 = v31 - v14; /*0x6f741c*/
    v35 = v10 - v15; /*0x6f742d*/
    v16 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(int)v33 * (double)(int)v33 + (double)(v31 - v14) /*0x6f7442*/
                                                                                                * (double)(v31 - v14)));
    v27 = (IUnknown *)Math::RoundToInt(v16); /*0x6f744f*/
    v17 = (IUnknown *)queuedMission; /*0x6f7457*/
    if ( *(_BYTE *)(var2C_4 + 663) ) /*0x6f7459*/
      v17 = (IUnknown *)(queuedMission + TechnoClass::ComputeSlopePenalty(this, (int *)aP2->__pad_0)); /*0x6f7472*/
    if ( (int)v27 <= (int)v17 )
    {
      v18 = *(_BYTE *)(aP3->location[1] + 661)
          ? RulesClass::GetFiringDistance()
          : (double)*(int *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5816);
      v19 = (IUnknown *)TechnoClass::ComputeScanRange(v17, v18); /*0x6f74b4*/
      if ( globalHelper_08ABC0(v19, (int)v27, v35, v18) /*0x6f7504*/
        && ((*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&a1) + 80) & 0x100) == 0
         || GroundHeight - aP1->field_8 < 3 * *(_DWORD *)&stru_B05488.__pad_579C[16144]) )
      {
        return TrajectoryHelper::FindFirstImpenetrableObstacle(aP1, (int *)&a1, (int)aP3, (void *)this->Owner) == 0; /*0x6f7652*/
      }
    }
  }
  else
  {
    if ( (*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)aP2->__pad_0 + 44))(aP2) == 6 ) /*0x6f752b*/
    {
      FoundationHeight = (IUnknown *)BuildingTypeClass::GetFoundationHeight(aP2[36].uniqueId, 0); /*0x6f7542*/
      v7 += ((_DWORD)FoundationHeight + BuildingTypeClass::GetFoundationWidth((_DWORD *)aP2[36].uniqueId)) << 6; /*0x6f7554*/
    }
    v20 = (*(int (__thiscall **)(_DWORD *))(*this + 44))(this) == 3; /*0x6f7561*/
    v21 = aP1->field_0; /*0x6f7564*/
    if ( v20 ) /*0x6f7566*/
    {
      v23 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x6f75e5*/
                                          (double)(v21 - (int)a1) * (double)(v21 - (int)a1)
                                        + (double)(aP1->field_4 - v31) * (double)(aP1->field_4 - v31)));
    }
    else
    {
      v22 = aP1->field_8; /*0x6f7577*/
      v34 = aP1->field_4 - v31; /*0x6f757a*/
      v33 = (char *)(v21 - (_DWORD)a1); /*0x6f7588*/
      v35 = v22 - GroundHeight; /*0x6f758c*/
      v23 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x6f75b0*/
                                          (double)(v21 - (int)a1) * (double)(v21 - (int)a1)
                                        + (double)(v22 - GroundHeight) * (double)(v22 - GroundHeight)
                                        + (double)v34 * (double)v34));
    }
    if ( (int)Math::RoundToInt(v23) <= v7 ) /*0x6f75f9*/
    {
      if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], aP1) + 80) & 0x100) == 0 ) /*0x6f760f*/
        return TrajectoryHelper::FindFirstImpenetrableObstacle(aP1, (int *)&a1, (int)aP3, (void *)this->Owner) == 0; /*0x6f760f*/
      v24 = *(_DWORD *)&stru_B05488.__pad_579C[16128] + Cell::GetGroundHeight(aP1); /*0x6f7625*/
      if ( aP1->field_8 >= v24 || GroundHeight < v24 ) /*0x6f762f*/
        return TrajectoryHelper::FindFirstImpenetrableObstacle(aP1, (int *)&a1, (int)aP3, (void *)this->Owner) == 0; /*0x6f762f*/
    }
  }
  return 0; /*0x6f7258*/
}


// ==== 0x006F7660  TechnoClass::IsInRange  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsInRange(#377 *this)
{
  int result; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  double v5; // st7
  char v6; // fps^1
  double v7; // st7
  bool v8; // c0
  char v9; // c2
  bool v10; // c3
  float v11; // [esp+14h] [ebp-24h]
  __int16 v12; // [esp+18h] [ebp-20h]
  __int16 v13; // [esp+1Ah] [ebp-1Eh]
  __int16 v14; // [esp+20h] [ebp-18h] BYREF
  int v15; // [esp+22h] [ebp-16h]
  _BYTE v16[12]; // [esp+2Ch] [ebp-Ch] BYREF
  int v17; // [esp+3Ch] [ebp+4h]

  result = (*(int (__thiscall **)(#377 *))(this->isDiscoveredByComputer)(this); /*0x6f7668*/
  if ( !(_BYTE)result ) /*0x6f7670*/
    goto LABEL_5; /*0x6f7670*/
  result = *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(#377 *))(this->chronoWarpedByHouse)(this) + 172); /*0x6f7682*/
  if ( !result ) /*0x6f768a*/
    goto LABEL_5; /*0x6f768a*/
  v11 = *(float *)(result + 292) - *(float *)(result + 296); /*0x6f76a5*/
  v3 = (_DWORD *)(*(int (__thiscall **)(#377 *, __int16 *))(this->q048)(this, &v14); /*0x6f76a9*/
  v12 = *v3 / 256; /*0x6f76bc*/
  v13 = v3[1] / 256; /*0x6f76d6*/
  v4 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v17 + 72))(v17, v16); /*0x6f76e0*/
  v14 = *v4 / 256; /*0x6f76f6*/
  LOWORD(v15) = v4[1] / 256; /*0x6f770e*/
  v5 = Math::Sqrt( /*0x6f774a*/
         (double)(__int16)(v12 - v14) * (double)(__int16)(v12 - v14)
       + (double)(__int16)(v13 - v15) * (double)(__int16)(v13 - v15));
  result = (__int16)Math::RoundToInt(v5); /*0x6f7757*/
  v7 = (double)(__int16)result; /*0x6f775e*/
  v8 = v7 < v11; /*0x6f7762*/
  v9 = 0; /*0x6f7762*/
  v10 = v7 == v11; /*0x6f7762*/
  BYTE1(result) = v6; /*0x6f7766*/
  if ( v7 <= v11 ) /*0x6f776b*/
    LOBYTE(result) = 1; /*0x6f776d*/
  else
LABEL_5:
    LOBYTE(result) = 0; /*0x6f7776*/
  return result; /*0x6f776f*/
}


// ==== 0x006F7780  TechnoClass::CheckCellPassable2  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CheckCellPassable2(#377 *this)
{
  int v2; // edi
  int v3; // eax
  int v5; // [esp+10h] [ebp+4h]

  v2 = *(_DWORD *)this; /*0x6f778a*/
  v3 = (*(int (__thiscall **)(#377 *, int))(this->spawnManager)(this, v5); /*0x6f778c*/
  return (*(int (__thiscall **)(#377 *, int, int))(v2 + 936))(this, v5, v3); /*0x6f779c*/
}


// ==== 0x006F77B0  TechnoClass::ValidateTarget  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ValidateTarget(#377 *this)
{
  int result; // eax
  AbstractClass *v2; // ebx
  int *v4; // eax
  int v5; // edx
  int v6; // eax
  TechnoClass *v7; // edi
  _DWORD *v8; // eax
  void *v9; // eax
  int *v10; // eax
  char v11; // cl
  int v12; // eax
  int v13; // [esp+14h] [ebp-24h] BYREF
  int v14; // [esp+18h] [ebp-20h]
  int v15; // [esp+1Ch] [ebp-1Ch]
  _BYTE v16[12]; // [esp+20h] [ebp-18h] BYREF
  _BYTE v17[12]; // [esp+2Ch] [ebp-Ch] BYREF
  AbstractClass *aP2; // [esp+3Ch] [ebp+4h]
  AbstractClass *aP2a; // [esp+3Ch] [ebp+4h]
  AbstractClass *v20; // [esp+40h] [ebp+8h] BYREF

  v2 = aP2; /*0x6f77b4*/
  if ( aP2 ) /*0x6f77bd*/
  {
    v4 = (int *)(*(int (__thiscall **)(#377 *, _BYTE *))(this->q048)(this, v16); /*0x6f77d3*/
    v13 = *v4; /*0x6f77d8*/
    v14 = v4[1]; /*0x6f77df*/
    v5 = v4[2]; /*0x6f77e7*/
    v6 = *(_DWORD *)this; /*0x6f77ea*/
    v15 = v5; /*0x6f77ef*/
    v7 = *(TechnoClass **)(*(int (__thiscall **)(#377 *, AbstractClass *))(v6 + 1016))(this, v20); /*0x6f77f9*/
    if ( v7 ) /*0x6f77fd*/
    {
      if ( v7->__pad_115[31] ) /*0x6f7803*/
      {
        v8 = (_DWORD *)(*(int (__thiscall **)(#377 *, _BYTE *))(this->q048)(this, v16); /*0x6f781a*/
        LOWORD(aP2a) = *v8 / 256; /*0x6f782d*/
        HIWORD(aP2a) = v8[1] / 256; /*0x6f7845*/
        v20 = aP2a; /*0x6f784e*/
        v9 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v20); /*0x6f7858*/
        v10 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v9 + 72))(v9, v17); /*0x6f7866*/
        v13 = *v10; /*0x6f786b*/
        v14 = v10[1]; /*0x6f7872*/
        v11 = this->onBridge; /*0x6f7876*/
        v12 = v10[2]; /*0x6f787c*/
        v15 = v12; /*0x6f7881*/
        if ( v11 ) /*0x6f7885*/
          v15 = *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[7056] + v12; /*0x6f788d*/
      }
    }
    if ( (*(unsigned __int8 (__thiscall **)(#377 *))(this->q054)(this) ) /*0x6f7895*/
      v15 = *(_DWORD *)((*(int (__thiscall **)(AbstractClass *, _BYTE *))(*(_DWORD *)v2->__pad_0 + 72))(v2, v17) + 8); /*0x6f78ab*/
    LOBYTE(result) = TechnoClass::CheckTargetLOS(this, (IUnknown *)&v13, v2, v7); /*0x6f78b8*/
  }
  else
  {
    LOBYTE(result) = 1; /*0x6f77c0*/
  }
  return result; /*0x6f77bf*/
}


// ==== 0x006F78D0  TechnoClass::CheckAndFireAtTarget  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CheckAndFireAtTarget(#377 *this)
{
  int v2; // edi
  int *v3; // eax
  int v4; // eax
  int v6; // [esp+Ch] [ebp+4h]

  v2 = (*(int (__thiscall **)(#377 *))(this->isOnCarryall)(this); /*0x6f78de*/
  v3 = (int *)(*(int (__thiscall **)(#377 *, int))(this->q3F8)(this, v2); /*0x6f78e3*/
  if ( v3 && (v4 = *v3) != 0 && *(_BYTE *)(v4 + 310) ) /*0x6f78f3*/
    return (*(int (__thiscall **)(#377 *, int, int))(this->qEA0)(this, v6, v2); /*0x6f7907*/
  else
    return (*(int (__thiscall **)(#377 *, int))(this->q0EB)(this, v6); /*0x6f791b*/
}


// ==== 0x006F7930  TechnoClass::CheckCellPassable  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CheckCellPassable(#377 *this)
{
  void *v2; // eax
  int v3; // ebx
  void *v4; // edi
  int v5; // eax
  _DWORD *v7; // [esp+10h] [ebp+4h]

  v2 = Coord::To_Cell(&MEMORY[0x87F7E8], v7); /*0x6f793f*/
  v3 = *(_DWORD *)this; /*0x6f7944*/
  v4 = v2; /*0x6f7946*/
  v5 = (*(int (__thiscall **)(#377 *, void *))(this->spawnManager)(this, v2); /*0x6f794b*/
  return (*(int (__thiscall **)(#377 *, void *, int))(v3 + 936))(this, v4, v5); /*0x6f795b*/
}


// ==== 0x006F7970  TechnoClass::CheckCellPassable3  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CheckCellPassable3(#377 *this)
{
  int v2; // edi
  void *v3; // eax
  _DWORD *v5; // [esp+Ch] [ebp+4h]
  int v6; // [esp+10h] [ebp+8h]

  v2 = *(_DWORD *)this; /*0x6f797d*/
  v3 = Coord::To_Cell(&MEMORY[0x87F7E8], v5); /*0x6f7985*/
  return (*(int (__thiscall **)(#377 *, void *, int))(v2 + 936))(this, v3, v6); /*0x6f7993*/
}


// ==== 0x006F79A0  TechnoClass::GetBridgeDamageMult  this=TechnoClass  sig=csp ====
double __thiscall TechnoClass_GetBridgeDamageMult(_DWORD **this, __int16 *a2)
{
  int *v2; // eax
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  __int16 v8; // cx
  int v9; // eax
  __int16 v10; // ax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  __int16 v13; // ax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  int v16; // edi
  __int16 v17; // cx
  int v18; // eax
  __int16 v19; // ax
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  int v26; // [esp+10h] [ebp-30h] BYREF
  int v27; // [esp+14h] [ebp-2Ch]
  int v28; // [esp+18h] [ebp-28h]
  int v29; // [esp+1Ch] [ebp-24h]
  int v30; // [esp+20h] [ebp-20h]
  int v31; // [esp+24h] [ebp-1Ch]
  int v32; // [esp+28h] [ebp-18h]
  int v33; // [esp+2Ch] [ebp-14h]
  int v34; // [esp+32h] [ebp-Eh]
  double v35; // [esp+38h] [ebp-8h]

  v2 = (int *)((int (__fastcall *)(_DWORD **))(*this)[253])(this); /*0x6f79b2*/
  if ( !v2 ) /*0x6f79ba*/
    return 1.0; /*0x6f79ba*/
  v3 = *v2; /*0x6f79c0*/
  if ( !v3 || !*(_BYTE *)(v3 + 326) ) /*0x6f79ca*/
    return 1.0; /*0x6f7c8a*/
  v4 = 1; /*0x6f79de*/
  v35 = 1.0; /*0x6f79e3*/
  v32 = *((_DWORD *)MEMORY[0x8871E0] + 1292) / 256; /*0x6f7a07*/
  v5 = v32; /*0x6f7a02*/
  if ( v32 > 1 ) /*0x6f7a0b*/
  {
    v6 = -1; /*0x6f7a11*/
    v27 = -1; /*0x6f7a14*/
    do /*0x6f7c77*/
    {
      v7 = v6; /*0x6f7a1a*/
      if ( v6 <= v4 ) /*0x6f7a1c*/
      {
        do /*0x6f7b35*/
        {
          v8 = *a2; /*0x6f7a25*/
          v9 = v7 + *a2; /*0x6f7a31*/
          if ( v9 >= MEMORY[0x87F90C] && v9 < MEMORY[0x87F90C] + MEMORY[0x87F914] ) /*0x6f7a45*/
          {
            v10 = a2[1]; /*0x6f7a4e*/
            if ( v10 - v4 >= MEMORY[0x87F910] ) /*0x6f7a5d*/
            {
              LOWORD(v34) = -(__int16)v4; /*0x6f7a65*/
              LOWORD(v28) = v7 + v8; /*0x6f7a6a*/
              HIWORD(v28) = v10 - v4; /*0x6f7a7a*/
              v26 = v28; /*0x6f7a87*/
              v11 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v26); /*0x6f7a8c*/
              v12 = Cell::IsBridge(v11); /*0x6f7a93*/
              if ( v12 ) /*0x6f7a9a*/
              {
                if ( Object::IsAlliedWithObjectHouse(this->Owner, (int)v12) ) /*0x6f7aa7*/
                  v35 = v35 * 0.5; /*0x6f7aba*/
              }
            }
            v13 = a2[1]; /*0x6f7abe*/
            if ( v4 + v13 < MEMORY[0x87F910] + MEMORY[0x87F918] ) /*0x6f7ad7*/
            {
              HIWORD(v29) = v4 + v13; /*0x6f7ade*/
              LOWORD(v29) = v7 + *a2; /*0x6f7aee*/
              v26 = v29; /*0x6f7afc*/
              v14 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v26); /*0x6f7b00*/
              v15 = Cell::IsBridge(v14); /*0x6f7b07*/
              if ( v15 ) /*0x6f7b0e*/
              {
                if ( Object::IsAlliedWithObjectHouse(this->Owner, (int)v15) ) /*0x6f7b1b*/
                  v35 = v35 * 0.5; /*0x6f7b2e*/
              }
            }
          }
          ++v7; /*0x6f7b32*/
        }
        while ( v7 <= v4 ); /*0x6f7b35*/
        v6 = v27; /*0x6f7b3b*/
        v5 = v32; /*0x6f7b3f*/
      }
      v16 = v6 + 1; /*0x6f7b43*/
      if ( v6 + 1 < v4 ) /*0x6f7b48*/
      {
        do /*0x6f7c61*/
        {
          v17 = a2[1]; /*0x6f7b51*/
          v18 = v16 + v17; /*0x6f7b5e*/
          if ( v18 >= MEMORY[0x87F910] && v18 < MEMORY[0x87F910] + MEMORY[0x87F918] ) /*0x6f7b72*/
          {
            v19 = *a2; /*0x6f7b7b*/
            if ( *a2 - v4 >= MEMORY[0x87F90C] ) /*0x6f7b89*/
            {
              LOWORD(v33) = -(__int16)v4; /*0x6f7b91*/
              HIWORD(v30) = v16 + v17; /*0x6f7b9c*/
              LOWORD(v30) = v19 - v4; /*0x6f7ba5*/
              v26 = v30; /*0x6f7bb4*/
              v20 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v26); /*0x6f7bb8*/
              v21 = Cell::IsBridge(v20); /*0x6f7bbf*/
              if ( v21 ) /*0x6f7bc6*/
              {
                if ( Object::IsAlliedWithObjectHouse(this->Owner, (int)v21) ) /*0x6f7bd3*/
                  v35 = v35 * 0.5; /*0x6f7be6*/
              }
            }
            if ( v4 + *a2 < MEMORY[0x87F90C] + MEMORY[0x87F914] ) /*0x6f7c02*/
            {
              LOWORD(v31) = v4 + *a2; /*0x6f7c09*/
              HIWORD(v31) = a2[1] + v16; /*0x6f7c1a*/
              v26 = v31; /*0x6f7c27*/
              v22 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v26); /*0x6f7c2c*/
              v23 = Cell::IsBridge(v22); /*0x6f7c33*/
              if ( v23 ) /*0x6f7c3a*/
              {
                if ( Object::IsAlliedWithObjectHouse(this->Owner, (int)v23) ) /*0x6f7c47*/
                  v35 = v35 * 0.5; /*0x6f7c5a*/
              }
            }
          }
          ++v16; /*0x6f7c5e*/
        }
        while ( v16 < v4 ); /*0x6f7c61*/
        v6 = v27; /*0x6f7c67*/
        v5 = v32; /*0x6f7c6b*/
      }
      ++v4; /*0x6f7c6f*/
      v27 = --v6; /*0x6f7c73*/
    }
    while ( v4 < v5 ); /*0x6f7c77*/
  }
  return v35; /*0x6f7c81*/
}


// ==== 0x006F7CA0  TechnoClass::EvaluateTarget  this=AbstractClass  sig=csp ====
char __thiscall TechnoClass::EvaluateTarget(
        int *this,
        IUnknown *aP1,
        int a3,
        IUnknown *aP3,
        TechnoClass *aP4,
        int *a5,
        IUnknown *aP6,
        int a2)
{
  char v9; // al
  TechnoClass *v10; // esi
  int v11; // ebx
  int v12; // ebp
  IUnknown *v13; // eax
  _WORD *v14; // eax
  int *v15; // edx
  IUnknown *v16; // ebp
  int v17; // eax
  IUnknown *v18; // ecx
  IUnknown *v19; // eax
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  char v23; // bl
  _DWORD *v24; // ebp
  int v25; // eax
  IUnknown *v26; // eax
  _DWORD *v27; // eax
  char result; // al
  int v29; // eax
  int v30; // ecx
  int v31; // edx
  _DWORD *v32; // ebp
  char v33; // al
  int v34; // edx
  _DWORD *v35; // ebp
  _DWORD *v36; // eax
  int v37; // edx
  int v38; // ebx
  double v39; // st7
  int v40; // ebp
  IUnknown *v41; // eax
  bool v42; // zf
  int v43; // ebp
  _DWORD *v44; // eax
  IUnknown *v46; // ebx
  int ecx56; // ecx
  int v47; // edx
  int v48; // eax
  int v49; // eax
  double v50; // st7
  IUnknown *v51; // ebp
  int v52; // eax
  bool v53; // bl
  bool v54; // al
  int v55; // eax
  bool v56; // bl
  bool v57; // al
  IUnknown *v58; // ebp
  int v59; // edx
  int v60; // eax
  _DWORD *v61; // eax
  _DWORD *v62; // ebp
  _DWORD *v63; // eax
  double v64; // st7
  __int64 v65; // rax
  IUnknown **v66; // ebp
  int v67; // eax
  HouseClass *v69; // eax
  int enemyHouseIndex; // eax
  TechnoClass *v70; // ebx
  IUnknown *v71; // ecx
  int v72; // eax
  int v73; // eax
  int v74; // eax
  _DWORD *v75; // eax
  _DWORD *v76; // eax
  double BridgeDamageMult; // st7
  IUnknown *v79; // eax
  IUnknown *var44_4; // [esp+2Ch] [ebp-40h]
  IUnknown *v80; // [esp+2Ch] [ebp-40h]
  char v81; // [esp+43h] [ebp-29h]
  int v82; // [esp+44h] [ebp-28h]
  double v83; // [esp+48h] [ebp-24h] BYREF
  int v84; // [esp+50h] [ebp-1Ch]
  _DWORD v85[2]; // [esp+54h] [ebp-18h] BYREF
  int v86; // [esp+5Ch] [ebp-10h]
  _BYTE v87[12]; // [esp+60h] [ebp-Ch] BYREF
  IUnknown *aP1a; // [esp+70h] [ebp+4h]

  v9 = (*(int (__thiscall **)(int *))(*this + 816))(this); /*0x6f7cab*/
  v10 = aP4; /*0x6f7cb1*/
  v81 = v9; /*0x6f7cba*/
  v11 = (*(int (__thiscall **)(int *, TechnoClass *))(*this + 740))(this, aP4); /*0x6f7cc4*/
  v82 = v11; /*0x6f7ccb*/
  v12 = *(_DWORD *)(*(int (__thiscall **)(int *, int))(*this + 1016))(this, v11); /*0x6f7cd5*/
  if ( ((unsigned int)aP1 & 0x18200) == 0 /*0x6f7cf1*/
    && (*(int (__thiscall **)(int *, TechnoClass *, int))(*this + 956))(this, v10, v11) == 5 )
  {
    return 0; /*0x6f7cf1*/
  }
  if ( v10->estimatedHealth <= 0 && *(_DWORD *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 916) == 2 ) /*0x6f7d13*/
    return 0; /*0x6f7d13*/
  if ( v12 /*0x6f7d4f*/
    && *(_DWORD *)(v12 + 172)
    && *(double *)(*(_DWORD *)(v12 + 172)
                 + 8 * *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 132))(v10) + 156)
                 + 160) <= 0.02 )
  {
    return 0; /*0x6f7d4f*/
  }
  if ( *(_DWORD *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 1540) == 2 /*0x6f7d82*/
    && (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 80))(v10)
    && *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 444))(v10) + 236) != 2 )
  {
    return 0; /*0x6f7d82*/
  }
  if ( !v10 ) /*0x6f7d8a*/
    return 0; /*0x6f7d8a*/
  if ( v10->inLimbo ) /*0x6f7d90*/
    return 0; /*0x6f7d90*/
  if ( !v10->health ) /*0x6f7d9e*/
    return 0; /*0x6f7d9e*/
  if ( v10->owner == (void *)2 ) /*0x6f7daf*/
  {
    var44_4 = *(IUnknown **)(this->q21C + 48); /*0x6f7dc0*/
    v13 = (IUnknown *)(*(int (__thiscall **)(TechnoClass *, _DWORD *))(*(_DWORD *)v10->__pad_0 + 72))(v10, v85); /*0x6f7dc4*/
    v14 = Coord::To_Cell(&MEMORY[0x87F7E8], v13); /*0x6f7dcd*/
    if ( !Cell::IsPassableOffset(v14, var44_4) && (void *)this->q21C != v10->focus ) /*0x6f7deb*/
      return 0; /*0x6f7deb*/
  }
  if ( !BYTE1(v10->barrelRecoil[6]) ) /*0x6f7df1*/
    return 0; /*0x6f7df1*/
  if ( MissionClass::GetMissionControl(v10)[4] ) /*0x6f7e06*/
    return 0; /*0x6f7e06*/
  if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 456))(v10) < -20 ) /*0x6f7e1e*/
    return 0; /*0x6f7e1e*/
  v15 = (int *)(*(int (__thiscall **)(TechnoClass *, _DWORD *))(*(_DWORD *)v10->__pad_0 + 72))(v10, v85); /*0x6f7e30*/
  v16 = aP6; /*0x6f7e32*/
  v17 = *v15; /*0x6f7e39*/
  v18 = (IUnknown *)v15[1]; /*0x6f7e3b*/
  v86 = v15[2]; /*0x6f7e41*/
  if ( aP6 != (IUnknown *)-1 ) /*0x6f7e45*/
  {
    LOWORD(aP4) = v17 / 256; /*0x6f7e53*/
    v19 = v18; /*0x6f7e5a*/
    LOBYTE(v18) = v10->onBridge; /*0x6f7e5b*/
    v20 = *this; /*0x6f7e69*/
    HIWORD(aP4) = (int)v19 / 256; /*0x6f7e6e*/
    v80 = v18; /*0x6f7e77*/
    v21 = (*(int (__thiscall **)(int *))(v20 + 132))(this); /*0x6f7e7e*/
    if ( (IUnknown *)MapClass::GetTileIndex(&MEMORY[0x87F7E8], (IUnknown *)&aP4, *(IUnknown **)(v21 + 1460), v80) != v16 ) /*0x6f7e9c*/
      return 0; /*0x6f7e9c*/
  }
  v22 = this->q11C; /*0x6f7ea2*/
  v23 = 0; /*0x6f7ea8*/
  v24 = 0; /*0x6f7eaa*/
  if ( v22 ) /*0x6f7eae*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v22 + 132))(v22) + 1508) ) /*0x6f7eb8*/
    {
      v25 = *(_DWORD *)(this->q11C + 704); /*0x6f7ec8*/
      if ( v25 ) /*0x6f7ed0*/
      {
        v24 = *(_DWORD **)(v25 + 540); /*0x6f7ed2*/
        v23 = 1; /*0x6f7ed8*/
      }
    }
  }
  if ( (*(int (__thiscall **)(int *))(*this + 44))(this) == 15 && this->q6D8 /*0x6f7f0c*/
    || *(_BYTE *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 1728)
    || this->q298 )
  {
    if ( !v23 ) /*0x6f7feb*/
      goto LABEL_46; /*0x6f7feb*/
    goto LABEL_44; /*0x6f7feb*/
  }
  if ( v23 ) /*0x6f7f1c*/
  {
LABEL_44:
    if ( v24 && Object::IsAlliedWithObjectHouse(v24, (IUnknown *)v10) ) /*0x6f7ff4*/
      return 0; /*0x6f7ffb*/
    goto LABEL_46; /*0x6f7ffb*/
  }
  if ( Object::IsAlliedWithObjectHouse((_DWORD *)this->q21C, (IUnknown *)v10) ) /*0x6f7f29*/
  {
    if ( TechnoClass::GetValue(this, (ObjectClass *)0xFFFFFFFF) >= 0 && !v81 /*0x6f7f67*/
      || BuildingClass::GetHealthRatio((int *)v10->__pad_0) == *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108]
                                                                         + 5880) )
    {
      return 0; /*0x6f7f67*/
    }
    if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 44))(v10) == 2 /*0x6f7f83*/
      && (*(int (__thiscall **)(int *))(*this + 44))(this) == 1 )
    {
      if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 456))(v10) > 0 ) /*0x6f7f91*/
        return 0; /*0x6f7f91*/
      v26 = (IUnknown *)(*(int (__thiscall **)(TechnoClass *, _DWORD *))(*(_DWORD *)v10->__pad_0 + 72))(v10, v85); /*0x6f7fa0*/
      v27 = Coord::To_Cell(&MEMORY[0x87F7E8], v26); /*0x6f7fa9*/
      if ( Cell::IsBridge(v27) ) /*0x6f7fb0*/
        return 0; /*0x6f7fc2*/
    }
    else if ( (*(int (__thiscall **)(int *))(*this + 44))(this) == 1 ) /*0x6f7fcf*/
    {
      result = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 128))(v10); /*0x6f7fd5*/
      if ( !result ) /*0x6f7fdd*/
        return result; /*0x6f7fdd*/
    }
  }
LABEL_46:
  if ( this == (int *)v10 ) /*0x6f8003*/
    return 0; /*0x6f8003*/
  if ( (MEMORY[0xA8B230]->nextScenario[0] & 0x800) != 0 ) /*0x6f8014*/
  {
    v29 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 136))(v10); /*0x6f801a*/
    v30 = 0; /*0x6f8026*/
    v31 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2892); /*0x6f8028*/
    if ( v31 > 0 ) /*0x6f8030*/
    {
      v32 = *(_DWORD **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2880); /*0x6f8032*/
      while ( *v32 != v29 ) /*0x6f803b*/
      {
        ++v30; /*0x6f8041*/
        ++v32; /*0x6f8042*/
        if ( v30 >= v31 ) /*0x6f8047*/
          goto LABEL_52; /*0x6f8047*/
      }
      return 0; /*0x6f803b*/
    }
  }
LABEL_52:
  v33 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 84))(v10); /*0x6f8049*/
  v34 = *(_DWORD *)v10->__pad_0; /*0x6f8050*/
  if ( v33 ) /*0x6f8054*/
  {
    v35 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, _DWORD *))(v34 + 72))(v10, v85); /*0x6f8066*/
    v36 = (_DWORD *)(*(int (__thiscall **)(int *, double *))(*this + 72))(this, &v83); /*0x6f806f*/
    v37 = *(_DWORD *)v10->__pad_0; /*0x6f8077*/
    aP4 = (TechnoClass *)(*v35 - *v36); /*0x6f807b*/
    v83 = (double)(int)aP4; /*0x6f808a*/
    v38 = (*(int (__thiscall **)(TechnoClass *, _DWORD *))(v37 + 72))(v10, v85); /*0x6f8093*/
    aP4 = (TechnoClass *)(*(_DWORD *)(v38 + 4) /*0x6f80aa*/
                        - *(_DWORD *)((*(int (__thiscall **)(int *, _BYTE *))(*this + 72))(this, v87) + 4));
    v39 = Math::Sqrt((double)(int)aP4 * (double)(int)aP4 + v83 * v83); /*0x6f80c5*/
    v40 = Math::RoundToInt(v39); /*0x6f80d2*/
    v41 = aP3; /*0x6f80d4*/
    v42 = aP3 == 0; /*0x6f80d8*/
    if ( (int)aP3 <= 0 ) /*0x6f80da*/
      goto LABEL_59; /*0x6f80da*/
    if ( v40 > (int)aP3 ) /*0x6f80e2*/
      return 0; /*0x6f80f1*/
  }
  else
  {
    v43 = (*(int (__thiscall **)(TechnoClass *, _BYTE *))(v34 + 72))(v10, v87); /*0x6f8100*/
    v44 = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(*this + 72))(this, v85); /*0x6f8109*/
    v46 = *(IUnknown **)(v43 + 4); /*0x6f8111*/
    ecx56 = *v44 - *(_DWORD *)v43; /*0x6f8114*/
    v47 = v44[1]; /*0x6f8116*/
    v48 = v44[2]; /*0x6f8119*/
    LODWORD(v83) = ecx56; /*0x6f811c*/
    v49 = v48 - *(_DWORD *)(v43 + 8); /*0x6f8125*/
    HIDWORD(v83) = v47 - (_DWORD)v46; /*0x6f8127*/
    v84 = v49; /*0x6f812b*/
    v50 = Math::Sqrt( /*0x6f8157*/
            (double)ecx56 * (double)ecx56
          + (double)v49 * (double)v49
          + (double)(v47 - (int)v46) * (double)(v47 - (int)v46));
    v40 = Math::RoundToInt(v50); /*0x6f8164*/
    v41 = aP3; /*0x6f8166*/
    v42 = aP3 == 0; /*0x6f816a*/
    if ( (int)aP3 <= 0 ) /*0x6f816c*/
      goto LABEL_59; /*0x6f816c*/
    if ( v40 > (int)aP3 ) /*0x6f8170*/
      return 0; /*0x6f8170*/
  }
  v42 = v41 == 0; /*0x6f8176*/
LABEL_59:
  if ( v42 ) /*0x6f8178*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 684))(this) ) /*0x6f817e*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int *, TechnoClass *, int))(*this + 936))(this, v10, v82) ) /*0x6f81b8*/
        return 0; /*0x6f81b8*/
    }
    else if ( v40 > *(_DWORD *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 1464) ) /*0x6f8198*/
    {
      return 0; /*0x6f81a3*/
    }
  }
  if ( (unsigned __int8)House::IsHumanPlayer((#375 *)this->q21C) /*0x6f81f4*/
    && !v10->__pad_3F7[35]
    && !v10->__pad_3F7[36]
    && !MEMORY[0xA8B238]
    && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 44))(v10) != 2 )
  {
    return 0; /*0x6f81f4*/
  }
  if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 44))(v10) == 6 /*0x6f820c*/
    && *(_BYTE *)(*(_DWORD *)v10[1].__pad_0 + 5889) )
  {
    return 0; /*0x6f820c*/
  }
  aP4 = (TechnoClass *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 44))(v10); /*0x6f822a*/
  if ( ((1 << (char)aP4) & a3) == 0 /*0x6f8242*/
    && ((a3 & 2) == 0 || !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 128))(v10)) )
  {
    return 0; /*0x6f8242*/
  }
  v51 = (IUnknown *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 132))(v10); /*0x6f825a*/
  aP6 = v51; /*0x6f825c*/
  if ( !v51->__pad_220[17] ) /*0x6f8260*/
    return 0; /*0x6f8260*/
  if ( MEMORY[0xA8B238] && *(_BYTE *)(*((_DWORD *)v10->focus + 13) + 422) ) /*0x6f8284*/
  {
    if ( (unsigned __int8)House::IsCurrentPlayer((#375 *)this->q21C) /*0x6f82bf*/
      || (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 44))(v10) != 6
      || (*(int (__thiscall **)(int *))(*this + 44))(this) != 15 )
    {
      return 0; /*0x6f82bf*/
    }
    v52 = this->q5D4; /*0x6f82c5*/
    LOBYTE(aP3) = 0; /*0x6f82cb*/
    if ( v52 ) /*0x6f82d2*/
      LOBYTE(aP3) = *(_BYTE *)(*(_DWORD *)(v52 + 36) + 246) != 0; /*0x6f82e1*/
    v53 = *(_BYTE *)(*(_DWORD *)v10[1].__pad_0 + 5458) /*0x6f82f4*/
       && *(_BYTE *)(this->q1B0 + 3779)
       && v10->focus != (void *)this->q21C;
    v54 = *(_BYTE *)(this->q1B0 + 3764) && BuildingClass::CanRepair(v10, (TechnoClass *)this); /*0x6f832a*/
    if ( !MEMORY[0xA8B238] || (_BYTE)aP3 || !v53 && !v54 ) /*0x6f835e*/
      return 0; /*0x6f835e*/
  }
  if ( v51->__pad_220[18] /*0x6f83a3*/
    && !v10->locomotorTarget
    && !LOBYTE(v10->locomotorSource)
    && ((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 44))(v10) != 6
     || *(_BYTE *)(*((_DWORD *)v10->focus + 13) + 422)) )
  {
    if ( (unsigned __int8)House::IsCurrentPlayer((#375 *)this->q21C) /*0x6f83de*/
      || (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 44))(v10) != 6
      || (*(int (__thiscall **)(int *))(*this + 44))(this) != 15 )
    {
      return 0; /*0x6f83de*/
    }
    v55 = this->q5D4; /*0x6f83e4*/
    LOBYTE(aP3) = 0; /*0x6f83ea*/
    if ( v55 ) /*0x6f83f1*/
      LOBYTE(aP3) = *(_BYTE *)(*(_DWORD *)(v55 + 36) + 246) != 0; /*0x6f8400*/
    v56 = *(_BYTE *)(*(_DWORD *)v10[1].__pad_0 + 5458) /*0x6f8413*/
       && *(_BYTE *)(this->q1B0 + 3779)
       && v10->focus != (void *)this->q21C;
    v57 = *(_BYTE *)(this->q1B0 + 3764) && BuildingClass::CanRepair(v10, (TechnoClass *)this); /*0x6f8449*/
    if ( !MEMORY[0xA8B238] || (_BYTE)aP3 || !v56 && !v57 ) /*0x6f847d*/
      return 0; /*0x6f847d*/
  }
  v58 = aP6; /*0x6f8483*/
  if ( aP6->__pad_BC0[212] ) /*0x6f8487*/
  {
    if ( (*(int (__thiscall **)(int *))(*this + 44))(this) == 15 && *(_BYTE *)(this->q1B0 + 3782) ) /*0x6f84a3*/
      return 0; /*0x6f84ab*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)v10->__pad_0 + 200))(v10, this->q21C) /*0x6f84d4*/
    || *(_BYTE *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 3377) )
  {
    goto LABEL_129; /*0x6f84dc*/
  }
  v59 = v10->infantryBlinkTimer[2]; /*0x6f84de*/
  v60 = v10->disguiseBlinkTimer[1]; /*0x6f84e4*/
  if ( v59 != -1 ) /*0x6f84ed*/
  {
    if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v59 < v60 ) /*0x6f84f9*/
    {
      v60 -= *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v59; /*0x6f84ff*/
      goto LABEL_126; /*0x6f84ff*/
    }
    return 0; /*0x6f8952*/
  }
LABEL_126:
  if ( !v60 /*0x6f854b*/
    || (unsigned __int8)House::IsCurrentPlayer((#375 *)this->q21C)
    || Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)0x63) > *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108]
                                                                                                + 3604)
                                                                                    + 4
                                                                                    * *(_DWORD *)(this->q21C + 388)) )
  {
    return 0; /*0x6f854b*/
  }
LABEL_129:
  if ( ((unsigned __int16)aP1 & 0x100) != 0 ) /*0x6f855c*/
  {
    (*(void (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 60))(v10); /*0x6f8562*/
    return 0; /*0x6f856e*/
  }
  if ( (BYTE1(aP1) & 2) != 0 && (aP4 != (TechnoClass *)6 || !v58->__pad_14B0[194]) ) /*0x6f8581*/
    return 0; /*0x6f8589*/
  if ( this /*0x6f85e6*/
    && (v42 = (*(_BYTE *)(this + 5) & 4) == 0, LOBYTE(aP3) = (*(_BYTE *)(this + 5) & 4) != 0, !v42)
    && this->q5D4
    || !(unsigned __int8)House::IsCurrentPlayer((#375 *)this->q21C)
    || (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 128))(v10)
    || aP4 != (TechnoClass *)6
    || (v61 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 1012))(v10)) != 0
    && *v61
    && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 704))(v10) )
  {
    if ( !v81 ) /*0x6f860a*/
      goto LABEL_150; /*0x6f860a*/
  }
  else if ( !v81 ) /*0x6f85f6*/
  {
    return 0; /*0x6f8601*/
  }
  if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 44))(v10) != 6 /*0x6f865f*/
    || (unsigned __int8)HouseClass::IsAlliedWith((void *)this->q21C, (IUnknown *)v10->focus)
    && (BuildingClass::GetHealthRatio((int *)v10->__pad_0) > *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108]
                                                                       + 5896)
     || !(*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)v10[1].__pad_0 + 132))(
           *(_DWORD *)v10[1].__pad_0,
           this->q21C)) )
  {
    return 0; /*0x6f8667*/
  }
LABEL_150:
  if ( ((unsigned __int8)aP1 & 0x40) != 0 && !*(_DWORD *)&v58->__pad_71C[228] ) /*0x6f8674*/
    return 0; /*0x6f8674*/
  v83 = *(double *)(this + 39); /*0x6f868e*/
  v84 = this->q0A4; /*0x6f86a6*/
  v62 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v83); /*0x6f86b5*/
  v85[0] = v10->location[0]; /*0x6f86b9*/
  v85[1] = v10->location[1]; /*0x6f86c5*/
  v86 = v10->location[2]; /*0x6f86d1*/
  v63 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v85); /*0x6f86d5*/
  if ( (v62[80] & 0x100) != 0 && (v63[80] & 0x100) != 0 && this->q08C != v10->onBridge ) /*0x6f86f8*/
    return 0; /*0x6f86f8*/
  v64 = TechnoClass::ComputeDamage(this, (ObjectClass *)v10, (_DWORD *)a2); /*0x6f8706*/
  v65 = Math::RoundToInt(v64); /*0x6f870b*/
  v66 = (IUnknown **)a5; /*0x6f8710*/
  *a5 = v65; /*0x6f8716*/
  if ( *(_DWORD *)((*(int (__fastcall **)(int *, _DWORD))(*this + 132))(this, HIDWORD(v65)) + 916) == 1 ) /*0x6f8728*/
  {
    if ( v10->estimatedHealth <= 0 ) /*0x6f872f*/
    {
      v67 = (int)*v66 / 2; /*0x6f8737*/
LABEL_160:
      *v66 = (IUnknown *)v67; /*0x6f875c*/
      goto LABEL_161; /*0x6f875c*/
    }
    if ( v10->estimatedHealth <= *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 132))(v10) /*0x6f8755*/
                                           + 160)
                               / 2 )
    {
      v67 = 2 * (_DWORD)*v66; /*0x6f875a*/
      goto LABEL_160; /*0x6f875a*/
    }
  }
LABEL_161:
  v69 = (HouseClass *)this->q21C; /*0x6f875f*/
  if ( v69->allToHunt ) /*0x6f8765*/
  {
    enemyHouseIndex = v69->enemyHouseIndex; /*0x6f876f*/
    if ( enemyHouseIndex != -1 && v10->focus != *(void **)&HouseClass_Array->__pad_0[4 * enemyHouseIndex] ) /*0x6f8789*/
      *v66 = (IUnknown *)1; /*0x6f878b*/
  }
  v70 = aP4; /*0x6f8796*/
  if ( (BYTE1(aP1) & 8) != 0 ) /*0x6f879d*/
  {
    v71 = aP6; /*0x6f879f*/
    if ( aP4 == (TechnoClass *)6 ) /*0x6f87a6*/
    {
      v72 = *(_DWORD *)&aP6->__pad_DFC[228]; /*0x6f87a8*/
      if ( v72 <= 0 ) /*0x6f87b0*/
        *v66 = 0; /*0x6f87c3*/
      else
        *v66 = (IUnknown *)((char *)*v66 + 1000 * v72); /*0x6f87be*/
    }
  }
  else
  {
    v71 = aP6; /*0x6f87cc*/
  }
  if ( SBYTE1(aP1) < 0 ) /*0x6f87d3*/
  {
    if ( v70 != (TechnoClass *)6 ) /*0x6f87d8*/
      return 0; /*0x6f87d8*/
    v73 = *(_DWORD *)&v71->__pad_14B0[208]; /*0x6f87de*/
    if ( v73 <= 0 ) /*0x6f87e6*/
      return 0; /*0x6f87e6*/
    *v66 = (IUnknown *)((char *)*v66 + 1000 * v73); /*0x6f87f8*/
  }
  if ( ((unsigned int)aP1 & 0x10000) != 0 ) /*0x6f8801*/
  {
    if ( v70 != (TechnoClass *)6 || !v71->__pad_14B0[162] ) /*0x6f880c*/
      return 0; /*0x6f8814*/
    *v66 = (IUnknown *)((char *)*v66 + 1000); /*0x6f881a*/
  }
  if ( (BYTE1(aP1) & 0x10) != 0 && v70 == (TechnoClass *)6 && !*(_DWORD *)&v71->__pad_DFC[188] ) /*0x6f882b*/
    *v66 = 0; /*0x6f8835*/
  if ( (BYTE1(aP1) & 0x20) != 0 )
  {
    if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 44))(v10) == 6
      && *(_BYTE *)(*(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 44))(v10) == 6
                              ? &v10[1]
                              : (TechnoClass *)1312)->__pad_0
                  + 5499) )
    {
      v74 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 44))(v10); /*0x6f8873*/
      if ( !(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)(v74 == 6 ? v10 : 0)->__pad_0 + 1032))(v74 == 6 ? v10 : 0) )
        return 0; /*0x6f8898*/
    }
    else
    {
      v75 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v10->__pad_0 + 1012))(v10); /*0x6f889f*/
      if ( !v75 || !*v75 || v70 != (TechnoClass *)6 ) /*0x6f88b9*/
        return 0; /*0x6f88b9*/
    }
  }
  v76 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, _BYTE *))(*(_DWORD *)v10->__pad_0 + 72))(v10, v87); /*0x6f88c8*/
  LOWORD(aP1a) = *v76 / 256; /*0x6f88db*/
  HIWORD(aP1a) = v76[1] / 256; /*0x6f88f3*/
  aP3 = aP1a; /*0x6f88fc*/
  BridgeDamageMult = TechnoClass::GetBridgeDamageMult((_DWORD **)this, (__int16 *)&aP3); /*0x6f8903*/
  if ( BridgeDamageMult != 1.0 ) /*0x6f8913*/
    *v66 = (IUnknown *)Math::RoundToInt(BridgeDamageMult); /*0x6f8921*/
  v79 = *v66; /*0x6f8928*/
  if ( !*v66 ) /*0x6f892d*/
  {
    *v66 = 0; /*0x6f8948*/
    return 0; /*0x6f8948*/
  }
  if ( (int)v79 < 1 ) /*0x6f8932*/
    v79 = (IUnknown *)1; /*0x6f8934*/
  *v66 = v79; /*0x6f893a*/
  return 1; /*0x6f7fb9*/
}


// ==== 0x006F8960  SelectTechnoClassAreaTarget  this=AbstractClass  sig=csp ====
char __fastcall SelectTechnoClassAreaTarget(
        IUnknown *aP0,
        IUnknown *aP1,
        IUnknown *a2,
        IUnknown *aP3,
        IUnknown *aP4,
        IUnknown *aP3a,
        IUnknown *aP6,
        int *a7,
        int a9)
{
  _DWORD *v10; // ebx
  int v11; // eax
  int v13; // edi
  TechnoClass *v14; // ebp
  int v15; // ecx
  _DWORD *v16; // ebx
  int v17; // eax
  char v18; // bl
  char aP1a; // [esp+1Ch] [ebp+Ch]

  aP6->field_0 = 0; /*0x6f8972*/
  *a7 = 0; /*0x6f8979*/
  v10 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)aP4); /*0x6f898d*/
  if ( a9 != -1 ) /*0x6f8992*/
  {
    v11 = (*(int (__thiscall **)(IUnknown *))(aP0->field_0 + 132))(aP0); /*0x6f899a*/
    if ( MapClass::GetTileIndex(&stru_87C374.__pad_14B0[8132], aP4, *(IUnknown **)(v11 + 1460), (IUnknown *)1) != a9 ) /*0x6f89b4*/
      return 0; /*0x6f89bc*/
  }
  v13 = v10[58]; /*0x6f89bf*/
  v14 = 0; /*0x6f89c5*/
  if ( !v13 ) /*0x6f89c9*/
    v13 = v10[57]; /*0x6f89cb*/
  v15 = *(_DWORD *)aP0->__pad_11C; /*0x6f89d1*/
  v16 = 0; /*0x6f89d7*/
  aP1a = 0; /*0x6f89db*/
  if ( v15 ) /*0x6f89e0*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v15 + 132))(v15) + 1508) ) /*0x6f89ea*/
    {
      v17 = *(_DWORD *)(*(_DWORD *)aP0->__pad_11C + 704); /*0x6f89fa*/
      if ( v17 ) /*0x6f8a02*/
      {
        v16 = *(_DWORD **)(v17 + 540); /*0x6f8a04*/
        aP1a = 1; /*0x6f8a0a*/
      }
    }
  }
  if ( !v13 ) /*0x6f8a11*/
    return 0; /*0x6f8b53*/
  while ( 1 ) /*0x6f8a17*/
  {
    if ( (IUnknown *)v13 == aP0 ) /*0x6f8a19*/
      goto LABEL_33; /*0x6f8a19*/
    if ( (*(_BYTE *)(v13 + 20) & 1) == 0 ) /*0x6f8a2e*/
    {
      v14 = 0; /*0x6f8a23*/
      goto LABEL_33; /*0x6f8a25*/
    }
    v14 = (TechnoClass *)v13; /*0x6f8a34*/
    if ( TechnoClass::GetValue(aP0, (ObjectClass *)0xFFFFFFFF) >= 0 ) /*0x6f8a3d*/
      break; /*0x6f8a3d*/
    if ( BuildingClass::GetHealthRatio((int *)v13) < *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5880) /*0x6f8a64*/
      && Object::IsAlliedWithObjectHouse((_DWORD *)aP0->field_21C, (IUnknown *)v13) )
    {
      goto LABEL_34; /*0x6f8a6b*/
    }
LABEL_33:
    v13 = *(_DWORD *)(v13 + 48); /*0x6f8b3e*/
    if ( !v13 ) /*0x6f8b43*/
      goto LABEL_34; /*0x6f8b43*/
  }
  if ( (Object::IsAlliedWithObjectHouse((_DWORD *)aP0->field_21C, (IUnknown *)v13) || aP1a) /*0x6f8b3c*/
    && !*(_BYTE *)((*(int (__thiscall **)(IUnknown *))(aP0->field_0 + 132))(aP0) + 1728)
    && !aP0->__pad_220[120]
    && (!aP1a || !v16 || !Object::IsAlliedWithObjectHouse(v16, (IUnknown *)v13))
    && ((*(int (__thiscall **)(IUnknown *))(aP0->field_0 + 44))(aP0) != 15
     || !aP0->__pad_690[72]
     && (!*(_BYTE *)(*(_DWORD *)&aP0->__pad_690[48] + 3779)
      || *(_DWORD *)&aP0->__pad_A8[4] != 11
      || BuildingClass::GetHealthRatio((int *)v13) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5896)
      || (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13) != 6
      || (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v13 + 1312) + 132))(
           *(_DWORD *)(v13 + 1312),
           *(_DWORD *)(v13 + 540)) <= 0)) )
  {
    goto LABEL_33; /*0x6f8b3c*/
  }
LABEL_34:
  if ( !v14 ) /*0x6f8b4b*/
    return 0; /*0x6f8b4b*/
  v18 = 0; /*0x6f8b5b*/
  aP6->field_0 = (int)v14; /*0x6f8b5d*/
  if ( !Object::IsAlliedWithObjectHouse((_DWORD *)aP0->field_21C, (IUnknown *)v14)
    || TechnoClass::GetValue(aP0, (ObjectClass *)0xFFFFFFFF) < 0
    || !(unsigned __int8)House::IsCurrentPlayer((#375 *)aP0->field_21C)
    && aP0
    && (*(int (__thiscall **)(IUnknown *))(aP0->field_0 + 44))(aP0) == 15
    && *(_BYTE *)(*((*(int (__thiscall **)(IUnknown *))(aP0->field_0 + 44))(aP0) == 15
                  ? (_DWORD *)&aP0->__pad_690[48]
                  : (_DWORD *)1728)
                + 3779)
    || *(_BYTE *)((*(int (__thiscall **)(IUnknown *))(aP0->field_0 + 132))(aP0) + 1728)
    || aP0->__pad_220[120]
    || aP1a )
  {
    return TechnoClass::EvaluateTarget( /*0x6f8c05*/
             &aP0->field_0,
             a2,
             (int)aP3,
             aP3a,
             v14,
             a7,
             (IUnknown *)0xFFFFFFFF,
             (int)&stru_B05488.__pad_579C[15980]);
  }
  return v18; /*0x6f89b6*/
}


// ==== 0x006F8C10  TechnoClass::EvaluateBuildingTarget  this=AbstractClass  sig=csp ====
int __thiscall TechnoClass_EvaluateBuildingTarget(#375 **this, __int16 *a2)
{
  _DWORD *v3; // edi
  int v4; // eax
  #375 *v5; // ebp
  void *v6; // eax
  int v7; // eax
  int v8; // ecx
  #375 *v9; // edx
  int *v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // edi
  int v16; // ebx
  _DWORD *v17; // eax
  int v18; // ecx
  int v19; // edx
  double v20; // st7
  __int64 v21; // rax
  int v23; // [esp+24h] [ebp-18h] BYREF
  int v24; // [esp+28h] [ebp-14h]
  int v25; // [esp+2Ch] [ebp-10h]
  _BYTE v26[12]; // [esp+30h] [ebp-Ch] BYREF

  if ( (unsigned __int8)House::IsCurrentPlayer(this->q21C) ) /*0x6f8c1e*/
    return 0; /*0x6f8c1e*/
  if ( !*((_BYTE *)&MEMORY[0x8871E0][1].CrateArmourSound + 80 * *((_DWORD *)this->q21C + 97) + 1) ) /*0x6f8c43*/
    return 0; /*0x6f8c43*/
  v3 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], a2); /*0x6f8c61*/
  v4 = v3[17]; /*0x6f8c63*/
  if ( v4 == -1 ) /*0x6f8c69*/
    return 0; /*0x6f8c69*/
  if ( !*(_BYTE *)(*(_DWORD *)&MEMORY[0xA83D84]->vtable0[4 * v4] + 680) ) /*0x6f8c78*/
    return 0; /*0x6f8c78*/
  v5 = *this; /*0x6f8c87*/
  v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], a2); /*0x6f8c8f*/
  v7 = (*((int (__thiscall **)(#375 **, void *))v5 + 185))(this, v6); /*0x6f8c97*/
  v8 = *a2 << 8; /*0x6f8ca7*/
  v24 = (a2[1] << 8) + 128; /*0x6f8cb7*/
  v9 = *this; /*0x6f8cbb*/
  v23 = v8 + 128; /*0x6f8cc1*/
  v25 = 0; /*0x6f8cc8*/
  if ( !(*((unsigned __int8 (__thiscall **)(#375 **, int *, int))v9 + 89))(this, &v23, v7) ) /*0x6f8cd0*/
    return 0; /*0x6f8cd0*/
  v10 = (int *)(*((int (__thiscall **)(#375 **))*this + 253))(this); /*0x6f8ce3*/
  if ( !v10 ) /*0x6f8ceb*/
    return 0; /*0x6f8ceb*/
  v11 = *v10; /*0x6f8cf1*/
  if ( !v11 ) /*0x6f8cf5*/
    return 0; /*0x6f8cf5*/
  v12 = *(_DWORD *)(v11 + 172); /*0x6f8cfb*/
  if ( !v12 ) /*0x6f8d03*/
    return 0; /*0x6f8d03*/
  v13 = *(_DWORD *)(v11 + 160); /*0x6f8d09*/
  if ( v13 ) /*0x6f8d11*/
  {
    if ( !*(_BYTE *)(v13 + 677) ) /*0x6f8d13*/
      return 0; /*0x6f8d13*/
  }
  if ( !*(_BYTE *)(v12 + 324) ) /*0x6f8d21*/
    return 0; /*0x6f8d21*/
  v14 = v3[20]; /*0x6f8d2f*/
  if ( v14 == -1 /*0x6f8d4b*/
    || (unsigned __int8)HouseClass::IsAlliedWith(this->q21C, *(#375 **)&HouseClass_Array->__pad_0[4 * v14]) )
  {
    return 0; /*0x6f8de5*/
  }
  v15 = (*a2 << 8) + 128; /*0x6f8d6e*/
  v16 = (a2[1] << 8) + 128; /*0x6f8d74*/
  v17 = (_DWORD *)(*((int (__thiscall **)(#375 **, _BYTE *))*this + 18))(this, v26); /*0x6f8d7a*/
  v18 = v17[1] - v16; /*0x6f8d84*/
  v23 = *v17 - v15; /*0x6f8d86*/
  v19 = v17[2]; /*0x6f8d8a*/
  v24 = v18; /*0x6f8d8d*/
  v25 = v19; /*0x6f8d91*/
  v20 = Math::Sqrt((double)v23 * (double)v23 + (double)v19 * (double)v19 + (double)v18 * (double)v18); /*0x6f8dbd*/
  v21 = Math::RoundToInt(v20); /*0x6f8dc5*/
  return (*((int (__fastcall **)(#375 **, _DWORD, _DWORD))*this + 90))(this, HIDWORD(v21), 0) - v21; /*0x6f8dda*/
}


// ==== 0x006F9DB0  TechnoClass::GetID  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetID(#377 *this)
{
  return *(_DWORD *)(this->Owner + 48); /*0x6f9db9*/
}


// ==== 0x006F9DC0  TechnoClass::GetTarget  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetTarget(#377 *this)
{
  return this->Owner; /*0x6f9dc6*/
}


// ==== 0x006F9DD0  TechnoClass::SetTargetIfAllowed  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass_SetTargetIfAllowed(_DWORD *this, int a2)
{
  int result; // eax

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, #375 *))(*this + 200))(this, HouseClass_Player) /*0x6f9df6*/
    || (result = (*(int (__thiscall **)(_DWORD *, int))(*this + 208))(this, 1)) != 0 )
  {
    this->q0F0 = a2; /*0x6f9dfc*/
    return a2; /*0x6f9df8*/
  }
  return result; /*0x6f9e02*/
}


// ==== 0x006F9E10  TechnoClass::IsInvisible  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::IsInvisible(#377 *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x6f9e15*/
  if ( *(_DWORD *)(result + 176) ) /*0x6f9e1b*/
  {
    result = *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 176); /*0x6f9e33*/
    LOBYTE(result) = *(_BYTE *)result == 0; /*0x6f9e3d*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6f9e25*/
  }
  return result; /*0x6f9e27*/
}


// ==== 0x006F9E50  TechnoClass::Begin  this=TechnoClass  sig=csp ====
char __thiscall MovementAI::Begin(int *this)
{
  int ecx7; // ecx
  CoordStruct *v2; // eax
  int v4; // eax
  int eax18; // eax
  IUnknown *v5; // edx
  int v7; // eax
  int edi28; // edi
  int *ebx28; // ebx
  ParticleSystemClass *v8; // edi
  int eax44; // eax
  TechnoClass *v9; // ecx
  int v13; // eax
  AbstractClass *v11; // eax
  int v15; // eax
  _DWORD *v16; // eax
  _DWORD *edi54; // edi
  int v18; // ecx
  #375 *focus; // edi
  FootClass *v17; // eax
  bool v21; // bl
  bool v22; // al
  bool al86; // al
  int v24; // ecx
  IUnknown *v23; // edi
  int v26; // eax
  int v27; // eax
  _DWORD *eax103; // eax
  int edi105; // edi
  SlaveManagerClass *v28; // edx
  HouseClass *v29; // eax
  HouseClass *v32; // edi
  int v33; // eax
  int v34; // edx
  char v35; // al
  int v36; // eax
  int v37; // edx
  int eax135; // eax
  int v39; // eax
  IUnknown *v38; // ebx
  int v41; // edi
  int v42; // eax
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  int v47; // edi
  bool v48; // bl
  int v49; // edi
  int eax170; // eax
  int v51; // ecx
  int v52; // edi
  int InfSelfHealStep; // eax
  CaptureManagerClass *v50; // ecx
  IUnknown *v55; // eax
  _DWORD *v56; // eax
  IUnknown *v57; // eax
  _DWORD *v58; // eax
  int v59; // ecx
  int edi208; // edi
  int edi211; // edi
  _DWORD *v62; // eax
  int *v63; // edi
  int v64; // eax
  int v65; // edx
  TechnoClass *v60; // eax
  TechnoClass *v61; // eax
  int v68; // ecx
  int v69; // edx
  int v70; // edx
  int v71; // ebx
  int *v72; // edi
  int *v73; // eax
  int ebx243; // ebx
  int v75; // edx
  int v76; // eax
  int ecx246; // ecx
  int v78; // ebp
  int v79; // edi
  TechnoTypeClass *v74; // eax
  int v81; // ecx
  int v82; // eax
  int v83; // ebp
  int eax265; // eax
  BuildingTypeClass *v77; // edi
  _DWORD *v86; // eax
  int v87; // ecx
  int edx265; // edx
  int edi265; // edi
  int ebx265; // ebx
  int v91; // eax
  ParticleSystemClass *v84; // eax
  int i; // ecx
  int v94; // eax
  TechnoTypeClass *v88; // [esp+6Eh] [ebp-7Ch]
  TechnoTypeClass *v89; // [esp+6Eh] [ebp-7Ch]
  TechnoTypeClass *v90; // [esp+6Eh] [ebp-7Ch]
  _DWORD *v99; // [esp+72h] [ebp-78h]
  char v100; // [esp+84h] [ebp-66h]
  bool v101; // [esp+85h] [ebp-65h]
  int v102; // [esp+86h] [ebp-64h]
  bool v103; // [esp+86h] [ebp-64h]
  int v104; // [esp+86h] [ebp-64h]
  int v105; // [esp+8Ah] [ebp-60h] BYREF
  double v106; // [esp+8Eh] [ebp-5Ch] BYREF
  int v107; // [esp+96h] [ebp-54h]
  char v108[4]; // [esp+9Ah] [ebp-50h] BYREF
  int v109; // [esp+9Eh] [ebp-4Ch]
  char v110[12]; // [esp+A6h] [ebp-44h] BYREF
  char v111[4]; // [esp+B2h] [ebp-38h] BYREF
  char v112[12]; // [esp+B6h] [ebp-34h] BYREF
  char v113[16]; // [esp+C2h] [ebp-28h] BYREF
  void **v114; // [esp+D2h] [ebp-18h] BYREF
  void *Block; // [esp+D6h] [ebp-14h]
  int v116; // [esp+DAh] [ebp-10h]
  char v117; // [esp+DEh] [ebp-Ch]
  char v118; // [esp+DFh] [ebp-Bh]
  TechnoTypeClass *v119; // [esp+E2h] [ebp-8h]
  int v120; // [esp+E6h] [ebp-4h]

  if ( this->isMouseHovering )
    this->isMouseHovering = 0;
  if ( *(_BYTE *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 3285) )
  {
    v106 = *(double *)(this + 39);
    v107 = this->q029;
    StartAudioController((int)&v106, (int)(this + 297));
  }
  UpdateTechnoIdleTimer(this);
  UpdateTimedStateMachine(this);
  if ( this->currentWeaponSlot_e != -1 )
  {
    if ( !AudioSource::Get((int **)this + 311) )
    {
      ecx7 = this->currentWeaponSlot_e;
      this->voiceFlags = ecx7;
      PlayVocClass(ecx7, 0x2000, 1.0, (int)(this + 311));
LABEL_9:
      this->currentWeaponSlot_e = -1;
      goto LABEL_10;
    }
    if ( this->voiceFlags == this->currentWeaponSlot_e )
      goto LABEL_9;
  }
LABEL_10:
  if ( this->chronoLockRemaining )
  {
    v2 = (CoordStruct *)(this->chronoDestCoords - 1);
    this->chronoDestCoords = (int)v2;
    if ( (int)v2 <= 0 )
    {
      this->chronoLockRemaining = 0;
      this->chronoDestCoords = 0;
      (*(void (__thiscall **)(int *, _DWORD))(*this + 968))(this, 0);
      if ( *(_BYTE *)(this->Owner + 492) )
        (*(void (__thiscall **)(int *, int, _DWORD))(*this + 488))(this, 5, 0);
      else
        (*(void (__thiscall **)(int *, int, _DWORD))(*this + 488))(this, 15, 0);
    }
  }
  v4 = this->health;
  if ( this->referenceCount > v4 )
    this->referenceCount = v4;
  if ( (MEMORY[0xA8D63C].__pad_14B0[664] & 4) != 0 )
  {
    eax18 = this->referenceCount;
    if ( eax18 < this->health )
    {
      if ( eax18 + 30 < 0 )
        this->referenceCount = -30;
      ++this->referenceCount;
    }
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 3233) )
  {
    if ( this->q128 )
    {
      if ( this->isTurretRotateSoundPlaying )
      {
        AudioController::Stop(this + 290);
        v106 = *(double *)(this + 39);
        v5 = (IUnknown *)*this;
        v107 = this->q029;
        v7 = (*(int (__thiscall **)(int *))&v5->__pad_68[28])(this);
        StartAudioControllerAt(*(_DWORD *)(v7 + 1376), (int)&v106, (int)(this + 290));
        this->isTurretRotateSoundPlaying = 0;
      }
    }
    else
    {
      Mixer::ReleaseChannel((int **)this + 290);
      this->isTurretRotateSoundPlaying = 1;
    }
    v106 = *(double *)(this + 39);
    v107 = this->q029;
    StartAudioController((int)&v106, (int)(this + 290));
  }
  edi28 = this->q04F;
  ebx28 = this + 84;
  if ( edi28 != FootClass::CheckAccelLimit((float *)this + 84) )
  {
    if ( edi28 != -1 )
    {
      if ( FootClass::CheckAccelLimit((float *)this + 84) )
      {
        if ( FootClass::CheckAccelLimit((float *)this + 84) == 1
          && (unsigned __int8)House::IsHumanPlayer((#375 *)this->Owner) )
        {
          v106 = *(double *)(this + 39);
          v107 = this->q029;
          StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 552), (int)&v106, 0);
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[54140], -1, -1);
        }
      }
      else
      {
        if ( (unsigned __int8)House::IsHumanPlayer((#375 *)this->Owner) )
        {
          v106 = *(double *)(this + 39);
          v107 = this->q029;
          StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 556), (int)&v106, 0);
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[54140], -1, -1);
        }
        this->ambientSoundController = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 3048);
      }
    }
    this->q04F = FootClass::CheckAccelLimit((float *)this + 84);
  }
  if ( this->isOnMap
    && *(_BYTE *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 1517)
    && !(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] % *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 788)) )
  {
    v8 = *(ParticleSystemClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 792);
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)(this->Owner + 36) + 24))(this->Owner + 36) < (int)v8 )
      v8 = (ParticleSystemClass *)(*(int (__stdcall **)(int))(*(_DWORD *)(this->Owner + 36) + 24))(this->Owner + 36);
    HouseClass::ProcessPowerDrain(this->Owner, (IUnknown *)v8);
    HouseClass::AddPower(*(_DWORD **)(this->isOnMap + 540), (IUnknown *)v8);
  }
  eax44 = this->forceShielded;
  if ( eax44 && Object::IsAlliedWithObjectHouse(*(_DWORD **)(eax44 + 540), (IUnknown *)this) )
  {
    v9 = (TechnoClass *)this->alignmentPadding75;
    if ( v9 )
    {
      (*(void (__thiscall **)(TechnoClass *))(*(_DWORD *)v9->__pad_0 + 248))(v9);
      this->alignmentPadding75 = 0;
    }
    v13 = this->forceShielded;
    if ( v13 )
    {
      *(_DWORD *)(v13 + 464) = 0;
      v11 = *(AbstractClass **)(this->forceShielded + 540);
      if ( v11 )
        v11[622].__pad_0[0] = 1;
      this->forceShielded = 0;
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 664))(this) )
  {
    (*(void (__thiscall **)(int *))(*this + 1052))(this);
    LOBYTE(v15) = this->isAliveFlag;
    if ( !(_BYTE)v15 )
      return v15;
  }
  v16 = (_DWORD *)(*(int (__thiscall **)(int *, double *))(*this + 72))(this, &v106);
  LOWORD(v102) = *v16 / 256;
  HIWORD(v102) = v16[1] / 256;
  v105 = v102;
  edi54 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v105);
  if ( !*(_BYTE *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 1828)
    || !MovementAI::IsPathMovementAllowed(edi54)
    || this && (*(int (__thiscall **)(int *))(*this + 44))(this) == 2 )
  {
    if ( this->behindAnim )
    {
      if ( (*(int (__thiscall **)(int *))(*this + 44))(this) != 6 )
        (*(void (__thiscall **)(int *))(*this + 132))(this);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)this->behindAnim + 248))(this->behindAnim);
      this->behindAnim = 0;
    }
  }
  else
  {
    DrawBuildingRangeIndicator((void ***)this, (TechnoClass *)v108, (int)v113);
  }
  v18 = this->q11C;
  LOBYTE(ebx28) = 0;
  focus = 0;
  if ( v18
    && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v18 + 132))(v18) + 1508)
    && (v17 = *(FootClass **)(this->q11C + 704)) != 0 )
  {
    focus = (#375 *)v17->focus;
    LOBYTE(ebx28) = 1;
    if ( (unsigned __int8)House::IsCurrentPlayer(focus) )
      goto LABEL_93;
  }
  else if ( (unsigned __int8)House::IsCurrentPlayer((#375 *)this->Owner) )
  {
    goto LABEL_93;
  }
  if ( this->sprayOffsetIndex_e )
  {
    v88 = (TechnoTypeClass *)this->sprayOffsetIndex_e;
    if ( (_BYTE)ebx28 )
    {
      if ( !Object::IsAlliedWithObjectSimpleHouse(focus, v88) )
        goto LABEL_93;
    }
    else if ( !Object::IsAlliedWithObjectSimpleHouse((_DWORD *)this->Owner, v88) )
    {
      goto LABEL_93;
    }
    v21 = (*(int (__thiscall **)(int *))(*this + 44))(this) == 15;
    v22 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->sprayOffsetIndex_e + 44))(this->sprayOffsetIndex_e) == 6;
    v101 = v22;
    if ( !v21 || !v22 || (v100 = 1, !BuildingClass::CanRepair((_DWORD *)this->sprayOffsetIndex_e, (TechnoClass *)this)) )
      v100 = 0;
    LOBYTE(ebx28) = v21 && *(_BYTE *)(this->airstrikeTimer + 3779);
    al86 = *(_DWORD *)(*(int (__thiscall **)(int *, int))(*this + 1016))(this, 1)
        && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int *, int))(*this + 1016))(this, 1) + 172) + 344)
        && v101
        && *(_BYTE *)(*(_DWORD *)(this->sprayOffsetIndex_e + 1312) + 5493);
    if ( !(_BYTE)ebx28 && !al86 && !v100 && !this->chronoLockRemaining )
      (*(void (__thiscall **)(int *, _DWORD))(*this + 968))(this, 0);
  }
LABEL_93:
  if ( this->sprayOffsetIndex_e )
  {
    if ( !(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] % 16) )
    {
      v24 = this->q02B;
      if ( v24 != 8 && v24 != 17 )
      {
        v23 = (IUnknown *)*this;
        v26 = (*(int (__thiscall **)(int *, _DWORD))(*this + 740))(this, this->sprayOffsetIndex_e);
        v27 = (*(int (__thiscall **)(int *, _DWORD, int))v23->__pad_3BC)(this, this->sprayOffsetIndex_e, v26);
        if ( v27 == 5 || v27 == 6 )
          (*(void (__thiscall **)(int *, _DWORD))(*this + 968))(this, 0);
      }
    }
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 3234) )
  {
    TechnoClass::Update2(this + 246);
    TechnoClass::Update2(this + 254);
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 2064) )
  {
    eax103 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 132))(this);
    if ( HouseClass::HasPower(eax103) )
    {
      if ( !*(_BYTE *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 3285) )
      {
        edi105 = 0;
        if ( this->bunkerLinkedUnit <= 0 )
        {
LABEL_115:
          this->q049 = edi105;
          goto LABEL_116;
        }
        v28 = (SlaveManagerClass *)this->slaveManager;
        v29 = (HouseClass *)this->originalOwnerHouse;
        if ( v28 != (SlaveManagerClass *)-1 )
        {
          if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - (int)v28 >= (int)v29 )
          {
            v32 = 0;
LABEL_110:
            v33 = (*(int (__thiscall **)(int *))(*this + 132))(this);
            v34 = (int)v32 * *(_DWORD *)(v33 + 2056) % this->bunkerLinkedUnit;
            edi105 = (int)v32 * *(_DWORD *)(v33 + 2056) / this->bunkerLinkedUnit;
            if ( edi105 < *(_DWORD *)((*(int (__fastcall **)(int *, int))(*this + 132))(this, v34) + 2056) )
            {
              if ( edi105 < 0 )
                edi105 = 0;
            }
            else
            {
              edi105 = *(_DWORD *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 2056) - 1;
            }
            goto LABEL_115;
          }
          v29 = (HouseClass *)((char *)v29 - (*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - (_DWORD)v28));
        }
        v32 = v29;
        goto LABEL_110;
      }
    }
  }
LABEL_116:
  if ( MovementAI::IsProgressAtEnd((int)(this + 212)) )
    MovementAI::Check((_BYTE *)this + 848);
  v35 = this->q41E;
  if ( v35 )
    this->q41E = v35 - 1;
  if ( this->sprayOffsetIndex_e )
  {
    if ( this->shouldLoseTarget )
    {
      v36 = this->q02B;
      if ( !v36
        || v36 == 7
        || v36 == 13
        || v36 == 14
        || v36 == 16
        || v36 == 18
        || v36 == 19
        || v36 == 20
        || v36 == 22
        || v36 == 23
        || v36 == 28
        || v36 == 24 )
      {
        (*(void (__thiscall **)(int *, _DWORD))(*this + 968))(this, 0);
      }
    }
  }
  ++this->q031;
  ObjectClass::ProcessCloaking((int)this);
  v37 = this->q060;
  eax135 = this->q188;
  if ( v37 == -1 )
  {
LABEL_138:
    if ( eax135 )
      goto LABEL_148;
    goto LABEL_139;
  }
  if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v37 < eax135 )
  {
    eax135 -= *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v37;
    goto LABEL_138;
  }
LABEL_139:
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 1220))(this) )
  {
    (*(void (__thiscall **)(int *))(*this + 1228))(this);
  }
  else
  {
    v39 = this->q02B;
    if ( (v39 == 2 || v39 == 10 || v39 == 5) && FootClass::CanEnterCell((int)this, (int)ebx28) )
    {
      v38 = (IUnknown *)*this;
      v41 = this->sprayOffsetIndex_e;
      this->voiceHandle = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664];
      v42 = (*(int (__thiscall **)(int *, double *, int))v38->__pad_48)(this, &v106, 1);
      if ( (*(unsigned __int8 (__thiscall **)(int *, int))&v38->__pad_2B8[228])(this, v42) )
      {
        if ( this->sprayOffsetIndex_e != v41 )
          this->shouldLoseTarget = 1;
      }
    }
  }
LABEL_148:
  v43 = this->attachedBomb;
  if ( v43 && !this->inLimbo && BombClass::TimeToExplode(v43) )
    TechnoClass::ApplyDamageEffects(this->attachedBomb);
  v44 = this->mindControlledBy_a_unit;
  if ( v44 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v44 + 92))(v44);
  v45 = this->rockerLinkedUnit;
  if ( v45 )
    CaptureManagerClass::HandleOverload(v45);
  LOBYTE(v15) = this->isAliveFlag;
  if ( !(_BYTE)v15 )
    return v15;
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 660))(this) )
  {
    ++this->health;
    if ( BuildingClass::GetHealthRatio(this) > *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5888)
      || (*(int (__thiscall **)(int *))(*this + 456))(this) < -10 )
    {
      v46 = this->missionData;
      if ( v46 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v46 + 248))(v46);
    }
  }
  v47 = this->health;
  v48 = v47 >= *(_DWORD *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 160);
  if ( !v47 )
    v48 = 1;
  if ( (*(int (__thiscall **)(int *))(*this + 44))(this) != 1
    || *(_BYTE *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 3479)
    || v48 )
  {
    if ( ((*(int (__thiscall **)(int *))(*this + 44))(this) == 15
       || (*(int (__thiscall **)(int *))(*this + 44))(this) == 1
       && *(_BYTE *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 3479))
      && !v48
      && !(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] % *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 48))
      && TechnoClass::processExperienceGain((_DWORD *)this->Owner) )
    {
      v52 = *(_DWORD *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 160) - this->health;
      if ( HouseClass::GetInfSelfHealStep((_DWORD *)this->Owner) >= v52 )
        InfSelfHealStep = *(_DWORD *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 160) - this->health;
      else
        InfSelfHealStep = HouseClass::GetInfSelfHealStep((_DWORD *)this->Owner);
      this->health += InfSelfHealStep;
    }
  }
  else if ( !(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]
            % *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 56))
         && TechnoClass::updateVeterancy((_DWORD *)this->Owner) )
  {
    v49 = *(_DWORD *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 160) - this->health;
    eax170 = HouseClass::GetUnitSelfHealStep((_DWORD *)this->Owner) >= v49
           ? *(_DWORD *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 160) - this->health
           : HouseClass::GetUnitSelfHealStep((_DWORD *)this->Owner);
    this->health += eax170;
    if ( BuildingClass::GetHealthRatio(this) > *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5888)
      || (*(int (__thiscall **)(int *))(*this + 456))(this) < -10 )
    {
      v51 = this->missionData;
      if ( v51 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v51 + 248))(v51);
    }
  }
  (*(void (__thiscall **)(int *, _DWORD))(*this + 1040))(this, 0);
  v50 = (CaptureManagerClass *)this->queuedMission;
  if ( v50 )
    (*(void (__thiscall **)(CaptureManagerClass *))(*(_DWORD *)v50->__pad_0 + 92))(v50);
  if ( !this->parachute )
  {
    v89 = *(TechnoTypeClass **)(this->Owner + 48);
    v55 = (IUnknown *)(*(int (__thiscall **)(int *, double *))(*this + 72))(this, &v106);
    v56 = Coord::To_Cell(&MEMORY[0x87F7E8], v55);
    if ( Cell::HasOccupierBit(v56, (IUnknown *)v89) )
      (*(void (__thiscall **)(int *))(*this + 1056))(this);
  }
  if ( this->parachute == 2 )
  {
    v90 = *(TechnoTypeClass **)(this->Owner + 48);
    v57 = (IUnknown *)(*(int (__thiscall **)(int *, double *))(*this + 72))(this, &v106);
    v58 = Coord::To_Cell(&MEMORY[0x87F7E8], v57);
    if ( !Cell::HasOccupierBit(v58, (IUnknown *)v90) )
      (*(void (__thiscall **)(int *))(*this + 1056))(this);
  }
  if ( !MEMORY[0xA8B238]
    && !(unsigned __int8)House::IsHumanPlayer((#375 *)this->Owner)
    && this->sprayOffsetIndex_e
    && !Object::IsAlliedWithObjectSimpleHouse((_DWORD *)this->Owner, (_BYTE *)this->sprayOffsetIndex_e)
    && TechnoClass::GetValue(this, (ObjectClass *)0xFFFFFFFF) < 0 )
  {
    (*(void (__thiscall **)(int *, _DWORD))(*this + 968))(this, 0);
  }
  if ( this->sprayOffsetIndex_e
    && MEMORY[0xA8B238]
    && *(_BYTE *)(this->Owner + 492)
    && TechnoClass::GetValue(this, (ObjectClass *)0xFFFFFFFF) < 0
    && !Object::IsAlliedWithObjectSimpleHouse((_DWORD *)this->Owner, (_BYTE *)this->sprayOffsetIndex_e) )
  {
    (*(void (__thiscall **)(int *, _DWORD))(*this + 968))(this, 0);
  }
  v59 = this->sprayOffsetIndex_e;
  if ( v59 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v59 + 44))(v59) == 2 )
    {
      edi208 = this->sprayOffsetIndex_e;
      if ( (*(int (__thiscall **)(int *))(*this + 44))(this) == 1
        && TechnoClass::GetValue(this, (ObjectClass *)0xFFFFFFFF) < 0 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)edi208 + 456))(edi208) > 0
          || (edi211 = edi208 + 156,
              v106 = *(double *)edi211,
              v107 = *(_DWORD *)(edi211 + 8),
              v62 = Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)&v106),
              Cell::IsBridge(v62)) )
        {
          (*(void (__thiscall **)(int *, _DWORD))(*this + 968))(this, 0);
        }
      }
    }
  }
  if ( (*(int (__thiscall **)(int *))(*this + 44))(this) != 2 )
  {
    if ( this->sprayOffsetIndex_e )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int *))(*this + 656))(this) )
      {
        v63 = 0;
        if ( !this || (*(_BYTE *)(this + 5) & 4) == 0 || (v63 = this, !this->q169) )
        {
          if ( !(*(unsigned __int8 (__thiscall **)(int *, _DWORD))(*this + 708))(this, this->sprayOffsetIndex_e)
            || this->inOpenToppedTransport )
          {
            if ( this && (*(_BYTE *)(this + 5) & 4) != 0 )
              (*(void (__thiscall **)(int *, _DWORD))(*v63 + 1340))(v63, 0);
            if ( !v63 || !v63[361] )
            {
              v64 = (*(int (__thiscall **)(int *, _DWORD))(*this + 740))(this, this->sprayOffsetIndex_e);
              if ( !(*(unsigned __int8 (__thiscall **)(int *, _DWORD, int))(*this + 936))(this, this->sprayOffsetIndex_e, v64) )
                (*(void (__thiscall **)(int *, _DWORD))(*this + 968))(this, 0);
            }
          }
        }
      }
    }
  }
  if ( (*(int (__thiscall **)(int *))(*this + 44))(this) == 6 )
    goto LABEL_236;
  v65 = this->q040;
  v60 = (TechnoClass *)this->q042;
  if ( v65 != -1 )
  {
    if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v65 >= (int)v60 )
      goto LABEL_233;
    v60 = (TechnoClass *)((char *)v60 - (*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v65));
  }
  if ( v60 )
  {
LABEL_235:
    this->transporter = 0;
    goto LABEL_236;
  }
LABEL_233:
  v61 = (TechnoClass *)this->q043;
  if ( !v61 )
    goto LABEL_235;
  v68 = this->q044;
  v69 = this->q0F8;
  this->transporter = 1;
  this->q0F8 = v68 + v69;
  v70 = v109;
  this->q040 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664];
  this->currentTurretNumber = v70;
  this->q042 = (int)v61;
LABEL_236:
  v71 = this->ambientSoundController;
  v72 = this + 60;
  v103 = (*(_BYTE *)(this + 60) & 2) == 2;
  if ( TechnoClass::UpdateThunk((_BYTE *)this + 240) )
    (*(void (__thiscall **)(int *, int))(*this + 292))(this, 2);
  if ( v71
    && v71 != *v72
    && (*(int (__thiscall **)(int *))(*this + 44))(this) == 6
    && v103 != ((*(_BYTE *)v72 & 2) == 2) )
  {
    v73 = (int *)(*(int (__thiscall **)(int *, char *))(*this + 300))(this, v111);
    Cell::CreateCrater(*v73, v73[1], v73[2], v73[3], 0);
    sub_452000(this);
  }
  ebx243 = (*(int (__thiscall **)(int *))(*this + 132))(this);
  if ( *(_BYTE *)(ebx243 + 3215)
    && BuildingClass::GetHealthRatio(this) < *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5888)
    && (*(int (__thiscall **)(int *))(*this + 456))(this) > -10 )
  {
    v75 = *(_DWORD *)(ebx243 + 1928);
    v76 = 0;
    ecx246 = 10;
    v78 = 0;
    Block = 0;
    v116 = 0;
    v117 = 1;
    v118 = 0;
    v114 = &vt_DynamicVectorClass_ParticleSystemTypeClass_const;
    v120 = 10;
    v119 = 0;
    if ( v75 > 0 )
    {
      while ( 1 )
      {
        v79 = *(_DWORD *)(ebx243 + 1916) + 4 * v78;
        if ( *(_DWORD *)(*(_DWORD *)v79 + 692) != 3 )
          goto LABEL_257;
        if ( (int)v119 < v76 )
          goto LABEL_255;
        if ( (v118 || !v76) && ecx246 > 0 )
          break;
LABEL_257:
        if ( ++v78 >= *(_DWORD *)(ebx243 + 1928) )
          goto LABEL_258;
        ecx246 = v120;
      }
      if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v114[2])(&v114, ecx246 + v76, 0) )
      {
LABEL_255:
        v74 = v119;
        v119 = (TechnoTypeClass *)((char *)v119 + 1);
        *((_DWORD *)Block + (_DWORD)v74) = *(_DWORD *)v79;
      }
      v76 = v116;
      goto LABEL_257;
    }
LABEL_258:
    if ( !this->sparkParticles && (int)v119 > 0 )
    {
      if ( BuildingClass::GetHealthRatio(this) >= *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5896) )
      {
        v82 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1380);
        LODWORD(v106) = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1376);
        HIDWORD(v106) = v82;
      }
      else
      {
        v81 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1372);
        LODWORD(v106) = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1368);
        HIDWORD(v106) = v81;
      }
      v104 = Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)0x7FFFFFFE);
      if ( (double)v104 * 4.656612877414201e-10 < v106 )
      {
        v83 = __2_YAPAXI_Z(0x100u);
        if ( v83 )
        {
          eax265 = (*(int (__thiscall **)(int *, char *))(*this + 132))(this, v110);
          v77 = (BuildingTypeClass *)BuildingTypeClass::GetUpgradeOffset(eax265, v99);
          v86 = (_DWORD *)(*(int (__thiscall **)(int *, char *))(*this + 72))(this, v112);
          v87 = *v86 + *(_DWORD *)v77->vtable0;
          edx265 = *(_DWORD *)&v77->vtable0[4];
          edi265 = *(_DWORD *)&v77->vtable0[8];
          ebx265 = v86[2];
          v106 = COERCE_DOUBLE(__PAIR64__(v86[1] + edx265, v87));
          v107 = ebx265 + edi265;
          v91 = Random::Range(
                  &MEMORY[0xA8B230]->random[1],
                  0,
                  (IUnknown *)((char *)&v119[-1].TargetDistanceCoefficient + 3));
          v84 = ParticleSystemClass::Constructor(
                  v83,
                  *((IUnknown **)Block + v91),
                  (IUnknown *)&v106,
                  0,
                  (IUnknown *)this,
                  (IUnknown *)&stru_B05488.__pad_579C[15980],
                  0);
        }
        else
        {
          v84 = 0;
        }
        this->sparkParticles = (int)v84;
      }
    }
    v114 = &vt_VectorClass_ParticleSystemTypeClass_const;
    if ( Block && v118 )
      __3_YAXPAX_Z(Block);
  }
  (*(void (__thiscall **)(int *, _DWORD))(*this + 1184))(this, 0);
  v15 = this->empLockRemaining;
  if ( v15 > 0 )
  {
    this->empLockRemaining = --v15;
    if ( !v15 )
    {
      v15 = (*(int (__thiscall **)(int *))(*this + 44))(this);
      if ( v15 == 6 )
      {
        if ( this )
        {
          LOBYTE(v15) = *(_BYTE *)(this->gattlingValue + 5889);
          if ( !(_BYTE)v15 )
          {
            BuildingClass::EnableStuff((int)this);
            LOBYTE(v15) = *(_BYTE *)(this->gattlingValue + 5796);
            if ( (_BYTE)v15 )
            {
              v15 = this->Owner;
              *(_BYTE *)(v15 + 22393) = 1;
            }
          }
        }
      }
      else if ( this && (*(_BYTE *)(this + 5) & 4) != 0 )
      {
        if ( this->q674 )
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)this->q674 + 88))(this->q674);
        LOBYTE(v15) = MEMORY[0xA8D63C].__pad_1258[292];
        for ( i = 0; i < *(int *)&MEMORY[0xA8D63C].__pad_1258[292]; ++i )
        {
          v94 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[280] + 4 * i);
          if ( v94
            && *(int **)(v94 + 204) == this
            && *(_DWORD *)(v94 + 200) == *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6132) )
          {
            *(_BYTE *)(v94 + 405) = 0;
          }
          LOBYTE(v15) = MEMORY[0xA8D63C].__pad_1258[292];
        }
      }
    }
  }
  return v15;
}


// ==== 0x006FB010  TechnoClass::StepAnimFrame  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::StepAnimFrame(#377 *this)
{
  int result; // eax
  int v3; // edi
  int v4; // edx
  int v5; // edx

  result = *(_DWORD *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1668); /*0x6fb01c*/
  if ( result != -1 ) /*0x6fb025*/
  {
    v3 = this->q0BF; /*0x6fb027*/
    if ( v3 < result ) /*0x6fb02f*/
    {
      v4 = this->q07F; /*0x6fb031*/
      result = this->inLimbo; /*0x6fb037*/
      if ( v4 != -1 ) /*0x6fb040*/
      {
        if ( (int)MEMORY[0xA8ED84] - v4 >= result ) /*0x6fb04c*/
        {
LABEL_7:
          v5 = *(_DWORD *)this; /*0x6fb054*/
          this->q0BF = v3 + 1; /*0x6fb05b*/
          (*(void (__thiscall **)(#377 *, int))(v5 + 292))(this, 2); /*0x6fb061*/
          return TechnoClass::CalcAnimDelay(this); /*0x6fb069*/
        }
        result -= (int)MEMORY[0xA8ED84] - v4; /*0x6fb04e*/
      }
      if ( result ) /*0x6fb052*/
        return result; /*0x6fb052*/
      goto LABEL_7; /*0x6fb052*/
    }
  }
  return result; /*0x6fb06e*/
}


// ==== 0x006FB080  TechnoClass::CalcAnimDelay  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass_CalcAnimDelay(_DWORD *this)
{
  int result; // eax
  int v3; // ecx
  _DWORD *v4; // esi
  int v5; // ebx
  int v6; // edi
  _DWORD *v7; // esi
  int v8; // [esp+8h] [ebp-8h]

  result = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 1668); /*0x6fb08e*/
  v3 = this->pitchAngle; /*0x6fb094*/
  if ( v3 < result ) /*0x6fb09c*/
  {
    if ( v3 || *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 1692) == -1 ) /*0x6fb0b7*/
    {
      if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 996) ) /*0x6fb0f2*/
        v5 = this->pitchAngle / *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 996); /*0x6fb11c*/
      else
        v5 = 1; /*0x6fb0fc*/
      v6 = v5 * v5 * *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 1696); /*0x6fb135*/
      result = v6 + *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 1688); /*0x6fb14a*/
      v7 = this + 127; /*0x6fb14c*/
      *v7 = MEMORY[0xA8ED84]; /*0x6fb154*/
      v7[1] = v8; /*0x6fb15a*/
      v7[2] = result; /*0x6fb15d*/
    }
    else
    {
      result = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 1692); /*0x6fb0c9*/
      v4 = this + 127; /*0x6fb0cf*/
      *v4 = MEMORY[0xA8ED84]; /*0x6fb0d5*/
      v4[1] = v8; /*0x6fb0db*/
      v4[2] = result; /*0x6fb0de*/
    }
  }
  return result; /*0x6fb0e1*/
}


// ==== 0x006FB170  TechnoClass::RevealShroud  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::RevealShroud(#377 *this)
{
  int result; // eax
  int v3; // edi
  int v4; // ebp
  int v5; // ebx
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // ebx
  int i; // eax
  int v15; // eax
  int v16; // ebp
  int v17; // edx
  #375 *v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  #375 *v23; // eax
  _DWORD *v24; // eax
  int v25; // [esp+4h] [ebp-20h] BYREF
  int v26; // [esp+8h] [ebp-1Ch]
  int v27; // [esp+Ch] [ebp-18h]
  int v28; // [esp+10h] [ebp-14h]
  int v29; // [esp+14h] [ebp-10h]
  int v30; // [esp+18h] [ebp-Ch]
  __int16 v31; // [esp+1Ch] [ebp-8h]
  __int16 v32; // [esp+1Eh] [ebp-6h]

  result = (int)HouseClass_Player; /*0x6fb170*/
  if ( HouseClass_Player ) /*0x6fb17d*/
  {
    LOBYTE(result) = this->isGeneratingGap; /*0x6fb183*/
    if ( !(_BYTE)result ) /*0x6fb18b*/
    {
      result = (*(int (__thiscall **)(#377 *))(this->storedTiberium)(this); /*0x6fb193*/
      if ( (_BYTE)result ) /*0x6fb19b*/
      {
        if ( !this->gapRadius ) /*0x6fb1a1*/
          this->gapRadius = *(char *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3282); /*0x6fb1bc*/
        v3 = this->q027; /*0x6fb1cb*/
        this->isGeneratingGap = 1; /*0x6fb1cd*/
        v4 = this->owningHouseIndex; /*0x6fb1d4*/
        v5 = this->q029; /*0x6fb1d7*/
        v6 = ZCoordToScreenY(v5); /*0x6fb1dc*/
        v7 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v6) >> 32) - v6) >> 31) /*0x6fb1fb*/
             + ((int)(((unsigned __int64)(2004318071LL * v6) >> 32) - v6) >> 4)) << 8)
           + v3;
        v8 = ZCoordToScreenY(v5); /*0x6fb1fd*/
        v9 = ((unsigned __int64)(2004318071LL * v8) >> 32) - v8; /*0x6fb20b*/
        v10 = v7; /*0x6fb20d*/
        v11 = this->gapRadius; /*0x6fb21e*/
        v12 = -2 - v11; /*0x6fb229*/
        v13 = -2 - v11; /*0x6fb232*/
        v29 = v11; /*0x6fb236*/
        v31 = v10 / 256; /*0x6fb23d*/
        v30 = -2 - v11; /*0x6fb24b*/
        v32 = (int)(((((unsigned int)v9 >> 31) + (v9 >> 4)) << 8) + v4) / 256; /*0x6fb254*/
        for ( i = v11 + 2; v13 < i; ++v13 ) /*0x6fb25e*/
        {
          if ( v12 < i ) /*0x6fb266*/
          {
            v15 = v13 * v13; /*0x6fb271*/
            v16 = (v11 + 1) * (v11 + 1); /*0x6fb274*/
            v28 = v13 * v13; /*0x6fb277*/
            v27 = v16; /*0x6fb27b*/
            while ( 1 ) /*0x6fb285*/
            {
              if ( v15 + v12 * v12 < v16 ) /*0x6fb28e*/
              {
                v17 = *(_DWORD *)this; /*0x6fb2a2*/
                LOWORD(v26) = v13 + v31; /*0x6fb2a4*/
                HIWORD(v26) = v12 + v32; /*0x6fb2a9*/
                v25 = v26; /*0x6fb2b2*/
                v18 = (#375 *)(*(int (__thiscall **)(#377 *))(v17 + 60))(this); /*0x6fb2b8*/
                if ( !(unsigned __int8)House::IsHumanPlayer(v18) /*0x6fb2e9*/
                  && !(unsigned __int8)HouseClass::IsAlliedWith(*((#375 **)this + 135), HouseClass_Player)
                  && !*((_BYTE *)HouseClass_Player + 501) )
                {
                  if ( *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v25) + 76) != 1 /*0x6fb32c*/
                    && *((int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v25) + 76) >= 0 )
                  {
                    v19 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v25); /*0x6fb338*/
                    ++v19[76]; /*0x6fb349*/
                  }
                  v20 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v25); /*0x6fb355*/
                  ++v20[77]; /*0x6fb366*/
                  if ( *((int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v25) + 76) >= 1 ) /*0x6fb37d*/
                  {
                    v21 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v25); /*0x6fb389*/
                    v21[75] &= ~0x10u; /*0x6fb3a0*/
                    v22 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v25); /*0x6fb3a8*/
                    v22[75] &= ~8u; /*0x6fb3bb*/
                  }
                  v16 = v27; /*0x6fb3bd*/
                }
                v23 = (#375 *)(*(int (__thiscall **)(#377 *))(this->ambientSoundController)(this); /*0x6fb3c5*/
                if ( (unsigned __int8)House::IsHumanPlayer(v23) /*0x6fb3ef*/
                  || (unsigned __int8)HouseClass::IsAlliedWith(*((#375 **)this + 135), HouseClass_Player)
                  || *((_BYTE *)HouseClass_Player + 501) )
                {
                  v24 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v25); /*0x6fb403*/
                  ++v24[79]; /*0x6fb414*/
                }
              }
              v11 = v29; /*0x6fb416*/
              ++v12; /*0x6fb41a*/
              i = v29 + 2; /*0x6fb41b*/
              if ( v12 >= v29 + 2 ) /*0x6fb420*/
                break; /*0x6fb420*/
              v15 = v28; /*0x6fb281*/
            }
            v12 = v30; /*0x6fb426*/
          }
        }
        if ( HouseClass_Player ) /*0x6fb43d*/
          *((_BYTE *)HouseClass_Player + 576) = 0; /*0x6fb43f*/
        FogOfWar::Render((int **)&MEMORY[0x87F7E8]); /*0x6fb44b*/
        return MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2); /*0x6fb457*/
      }
    }
  }
  return result; /*0x6fb45c*/
}


// ==== 0x006FB470  TechnoClass::RemoveShroud  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::RemoveShroud(#377 *this)
{
  int result; // eax
  int v3; // edi
  int v4; // ebp
  int v5; // ebx
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // ebx
  int i; // eax
  int v15; // eax
  int v16; // ebp
  int v17; // edx
  #375 *v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  #375 *v23; // eax
  _DWORD *v24; // eax
  int v25; // [esp+4h] [ebp-1Ch] BYREF
  int v26; // [esp+8h] [ebp-18h]
  int j; // [esp+Ch] [ebp-14h]
  int v28; // [esp+10h] [ebp-10h]
  int v29; // [esp+14h] [ebp-Ch]
  __int16 v30; // [esp+18h] [ebp-8h]
  __int16 v31; // [esp+1Ah] [ebp-6h]

  result = (int)HouseClass_Player; /*0x6fb470*/
  if ( HouseClass_Player ) /*0x6fb47d*/
  {
    LOBYTE(result) = this->isGeneratingGap; /*0x6fb483*/
    if ( (_BYTE)result ) /*0x6fb48b*/
    {
      if ( !this->gapRadius ) /*0x6fb491*/
        this->gapRadius = *(char *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3282); /*0x6fb4aa*/
      v3 = this->q027; /*0x6fb4b9*/
      this->isGeneratingGap = 0; /*0x6fb4bb*/
      v4 = this->owningHouseIndex; /*0x6fb4c2*/
      v5 = this->q029; /*0x6fb4c5*/
      v6 = ZCoordToScreenY(v5); /*0x6fb4ca*/
      v7 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v6) >> 32) - v6) >> 31) /*0x6fb4e9*/
           + ((int)(((unsigned __int64)(2004318071LL * v6) >> 32) - v6) >> 4)) << 8)
         + v3;
      v8 = ZCoordToScreenY(v5); /*0x6fb4eb*/
      v9 = ((unsigned __int64)(2004318071LL * v8) >> 32) - v8; /*0x6fb4f9*/
      v10 = v7; /*0x6fb4fb*/
      v11 = this->gapRadius; /*0x6fb50c*/
      v12 = -2 - v11; /*0x6fb517*/
      v13 = -2 - v11; /*0x6fb520*/
      v28 = v11; /*0x6fb524*/
      v30 = v10 / 256; /*0x6fb52b*/
      v29 = -2 - v11; /*0x6fb539*/
      v31 = (int)(((((unsigned int)v9 >> 31) + (v9 >> 4)) << 8) + v4) / 256; /*0x6fb542*/
      for ( i = v11 + 2; v13 < i; ++v13 ) /*0x6fb54c*/
      {
        if ( v12 < i ) /*0x6fb554*/
        {
          v15 = v13 * v13; /*0x6fb55f*/
          v16 = (v11 + 1) * (v11 + 1); /*0x6fb562*/
          for ( j = v13 * v13; ; v15 = j ) /*0x6fb565*/
          {
            if ( v15 + v12 * v12 < v16 ) /*0x6fb578*/
            {
              v17 = *(_DWORD *)this; /*0x6fb58c*/
              LOWORD(v26) = v13 + v30; /*0x6fb58e*/
              HIWORD(v26) = v12 + v31; /*0x6fb593*/
              v25 = v26; /*0x6fb59c*/
              v18 = (#375 *)(*(int (__thiscall **)(#377 *))(v17 + 60))(this); /*0x6fb5a2*/
              if ( !(unsigned __int8)House::IsHumanPlayer(v18) /*0x6fb5d3*/
                && !(unsigned __int8)HouseClass::IsAlliedWith(*((#375 **)this + 135), HouseClass_Player)
                && !*((_BYTE *)HouseClass_Player + 501) )
              {
                v19 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v25); /*0x6fb5eb*/
                --v19[77]; /*0x6fb5fc*/
                if ( *((_BYTE *)HouseClass_Player + 22394) ) /*0x6fb603*/
                {
                  if ( *((int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v25) + 77) <= 0 ) /*0x6fb628*/
                  {
                    v20 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v25); /*0x6fb634*/
                    --v20[76]; /*0x6fb645*/
                    if ( *((int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v25) + 76) <= 0 ) /*0x6fb65e*/
                    {
                      v21 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v25); /*0x6fb66a*/
                      v21[75] |= 8u; /*0x6fb681*/
                      v22 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v25); /*0x6fb689*/
                      v22[75] |= 0x10u; /*0x6fb69c*/
                    }
                  }
                }
              }
              v23 = (#375 *)(*(int (__thiscall **)(#377 *))(this->ambientSoundController)(this); /*0x6fb6a2*/
              if ( (unsigned __int8)House::IsHumanPlayer(v23) /*0x6fb6cc*/
                || (unsigned __int8)HouseClass::IsAlliedWith(*((#375 **)this + 135), HouseClass_Player)
                || *((_BYTE *)HouseClass_Player + 501) )
              {
                v24 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v25); /*0x6fb6e0*/
                --v24[79]; /*0x6fb6f1*/
              }
            }
            v11 = v28; /*0x6fb6f3*/
            ++v12; /*0x6fb6f7*/
            i = v28 + 2; /*0x6fb6f8*/
            if ( v12 >= v28 + 2 ) /*0x6fb6fd*/
              break; /*0x6fb6fd*/
          }
          v12 = v29; /*0x6fb703*/
        }
      }
      if ( HouseClass_Player ) /*0x6fb71a*/
        *((_BYTE *)HouseClass_Player + 576) = 0; /*0x6fb71c*/
      FogOfWar::Render((int **)&MEMORY[0x87F7E8]); /*0x6fb728*/
      return MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2); /*0x6fb734*/
    }
  }
  return result; /*0x6fb739*/
}


// ==== 0x006FB740  TechnoClass::UpdateLocomotion  this=TechnoClass  sig=csp ====
void __thiscall FootClass::UpdateLocomotion(_DWORD *this, int a2)
{
  int v3; // edi
  _DWORD *Member; // edi
  AbstractClass *v5; // eax
  int v6; // edx
  HouseClass *v7; // ecx
  TerrainTypeClass *v8; // edi
  AbstractClass *v9; // eax
  int v10; // ecx
  HouseClass *v11; // edx
  HouseClass *v12; // edx
  int v13; // eax
  IUnknown *v14; // eax
  IUnknown *v15; // edi
  int v16; // eax
  HouseClass *v17; // ecx
  HouseClass *v18; // eax
  int v19; // eax
  int v20; // eax
  IUnknown *v21; // eax
  int v22; // edx
  int v23; // ebp
  int v24; // edi
  IUnknown *v25; // eax
  _WORD *v26; // eax
  HouseClass *v27; // eax
  int j; // edi
  IUnknown *v29; // [esp+4h] [ebp-38h]
  DynamicVector *v30; // [esp+18h] [ebp-24h] BYREF
  HouseClass *v31; // [esp+1Ch] [ebp-20h]
  void **v32; // [esp+24h] [ebp-18h] BYREF
  HouseClass *Block; // [esp+28h] [ebp-14h]
  int v34; // [esp+2Ch] [ebp-10h]
  char v35; // [esp+30h] [ebp-Ch]
  char v36; // [esp+31h] [ebp-Bh]
  HouseClass *i; // [esp+34h] [ebp-8h]
  int v38; // [esp+38h] [ebp-4h]

  if ( this->focus ) /*0x6fb74b*/
  {
    v8 = (TerrainTypeClass *)&CONTAINING_RECORD(this, TerrainTypeClass, __pad_0)->Theater; /*0x6fb8ea*/
    if ( CDTimerClass::TimeRemaining(this + 139) || (v9 = (AbstractClass *)this->q238) == 0 ) /*0x6fb903*/
    {
      this->cloakState = 0; /*0x6fb934*/
    }
    else
    {
      v10 = this->warpFactor; /*0x6fb905*/
      v11 = (HouseClass *)this->owner; /*0x6fb90b*/
      this->cloakState = 1; /*0x6fb913*/
      this->owner = (char *)v11 + v10; /*0x6fb91a*/
      v12 = v31; /*0x6fb926*/
      *(_DWORD *)v8->__pad_0 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x6fb92a*/
      this->cloakDelayTimer = v12; /*0x6fb92c*/
      this->q234 = v9; /*0x6fb92f*/
    }
    if ( (int)this->owner < 0 ) /*0x6fb940*/
      this->owner = 0; /*0x6fb942*/
    switch ( this->focus ) /*0x6fb94f*/
    {
      case 1: /*0x6fb94f*/
        (*(void (__thiscall **)(_DWORD *, int))(*this + 292))(this, 2); /*0x6fba49*/
        if ( !this->q238 ) /*0x6fba4f*/
        {
          this->q22C = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x6fba67*/
          v18 = v31; /*0x6fba69*/
          this->q238 = 1; /*0x6fba6d*/
          this->cloakDelayTimer = v18; /*0x6fba73*/
          this->q234 = 1; /*0x6fba76*/
        }
        v19 = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 104))(this, 1, 0) - 2; /*0x6fba83*/
        if ( v19 ) /*0x6fba86*/
        {
          v20 = v19 - 1; /*0x6fba8c*/
          if ( !v20 || v20 == 2 ) /*0x6fba92*/
          {
            this->focus = 2; /*0x6fba98*/
            v21 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x6fbaa2*/
            this->q238 = 0; /*0x6fbaaf*/
            this->q22C = v21; /*0x6fbab7*/
            this->cloakDelayTimer = v31; /*0x6fbabd*/
            this->q234 = 0; /*0x6fbac0*/
            v22 = *this; /*0x6fbac3*/
            this->owner = 0; /*0x6fbac7*/
            (*(void (__thiscall **)(_DWORD *, int))(v22 + 292))(this, 2); /*0x6fbacd*/
            if ( (*(int (__thiscall **)(_DWORD *))(*this + 44))(this) != 1 || this->q6CC == -1 ) /*0x6fbae6*/
            {
              Block = 0; /*0x6fbafc*/
              v34 = 0; /*0x6fbb00*/
              v35 = 1; /*0x6fbb04*/
              v23 = *(_DWORD *)&HouseClass_Player.__pad_5568[22996] - 1; /*0x6fbb09*/
              v36 = 0; /*0x6fbb0c*/
              v32 = &vt_DynamicVectorClass_TechnoClass; /*0x6fbb12*/
              v38 = 10; /*0x6fbb1a*/
              for ( i = 0; v23 >= 0; --v23 ) /*0x6fbb26*/
              {
                v24 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22984] + 4 * v23); /*0x6fbb32*/
                if ( *(_DWORD **)(v24 + 692) == this ) /*0x6fbb3b*/
                {
                  v29 = *(IUnknown **)(*(_DWORD *)(v24 + 540) + 48); /*0x6fbb4a*/
                  v25 = (IUnknown *)(*(int (__thiscall **)(_DWORD *, DynamicVector **))(*this + 72))(this, &v30); /*0x6fbb50*/
                  v26 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v25); /*0x6fbb59*/
                  if ( (Cell::IsPassableOffset(v26, v29) || *(_DWORD *)(v24 + 540) == this->Owner) /*0x6fbba3*/
                    && ((int)i < v34
                     || (v36 || !v34)
                     && v38 > 0
                     && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v32[2])(&v32, v38 + v34, 0)) )
                  {
                    v27 = i; /*0x6fbbae*/
                    i = (HouseClass *)((char *)i + 1); /*0x6fbbb1*/
                    *(_DWORD *)&Block->__pad_0[4 * (_DWORD)v27] = v24; /*0x6fbbb9*/
                  }
                }
              }
              (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 220))(this, 0); /*0x6fbbc8*/
              for ( j = (int)&i[-1].HouseClass_field_160B4 + 3; j >= 0; --j ) /*0x6fbbd7*/
                (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)&Block->__pad_0[4 * j] + 968))( /*0x6fbbe3*/
                  *(_DWORD *)&Block->__pad_0[4 * j],
                  this);
              v32 = &vt_VectorClass_TechnoClass; /*0x6fbbf0*/
              if ( Block && v36 ) /*0x6fbc00*/
                __3_YAXPAX_Z(Block); /*0x6fbc03*/
            }
            else
            {
              (*(void (__thiscall **)(_DWORD *))(*this + 252))(this); /*0x6fbaec*/
            }
            if ( (*(int (__thiscall **)(_DWORD *))(*this + 44))(this) == 1 /*0x6fbc1d*/
              && !(unsigned __int8)House::IsCurrentPlayer((#375 *)this->Owner) )
            {
              (*(void (__thiscall **)(_DWORD *, char *, int, _DWORD))(*this + 372))( /*0x6fbc32*/
                this,
                &stru_B05488.__pad_579C[15980],
                1,
                0);
            }
          }
        }
        else if ( BuildingClass::GetHealthRatio(this) <= *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5896) /*0x6fbc72*/
               && Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)0x63) < 10 )
        {
          (*(void (__thiscall **)(_DWORD *, int))(*this + 1116))(this, 1); /*0x6fbc7a*/
        }
        break;
      case 2: /*0x6fb94f*/
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 676))(this) ) /*0x6fba20*/
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 1116))(this, 0); /*0x6fba33*/
        break;
      case 3: /*0x6fb94f*/
        (*(void (__thiscall **)(_DWORD *, int))(*this + 292))(this, 2); /*0x6fb969*/
        v13 = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 104))(this, 1, 0); /*0x6fb976*/
        if ( v13 ) /*0x6fb97b*/
        {
          if ( v13 == 1 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 672))(this) ) /*0x6fb988*/
            (*(void (__thiscall **)(_DWORD *, int))(*this + 1120))(this, 1); /*0x6fb99c*/
        }
        else
        {
          v14 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x6fb9ac*/
          this->q238 = 0; /*0x6fb9b9*/
          this->q22C = v14; /*0x6fb9bf*/
          this->cloakDelayTimer = v31; /*0x6fb9c5*/
          this->q234 = 0; /*0x6fb9c8*/
          this->owner = 0; /*0x6fb9cb*/
          this->focus = 0; /*0x6fb9d1*/
          v15 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x6fb9dd*/
          v16 = Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5136) * 900.0); /*0x6fb9ef*/
          v17 = v31; /*0x6fb9f4*/
          this->warpFactor_e = v15; /*0x6fba00*/
          this->alignmentPadding91 = v17; /*0x6fba02*/
          this->q092 = v16; /*0x6fba07*/
          (*(void (__thiscall **)(_DWORD *, int))(*this + 292))(this, 2); /*0x6fba0c*/
        }
        break;
    }
  }
  else if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 648))(this) /*0x6fb7f1*/
         && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 892))(this)
         && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 896))(this)
         && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 468))(this)
         && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 472))(this)
         || (VeterancyStruct::IsVeteran((float *)this + 84) || VeterancyStruct::IsElite((float *)this + 84))
         && ((v3 = (*(int (__thiscall **)(_DWORD *))(*this + 132))(this), VeterancyStruct::IsVeteran((float *)this + 84))
          && *(_BYTE *)(v3 + 674)
          || VeterancyStruct::IsElite((float *)this + 84) && (*(_BYTE *)(v3 + 674) || *(_BYTE *)(v3 + 692))) )
  {
    Member = (_DWORD *)Team::GetMember(this, 0); /*0x6fb805*/
    if ( !Member || (*(int (__thiscall **)(_DWORD *))(*Member + 44))(Member) != 6 || !*(_BYTE *)(Member[328] + 5821) ) /*0x6fb81d*/
    {
      if ( CDTimerClass::TimeRemaining(this + 139) || (v5 = (AbstractClass *)this->q238) == 0 ) /*0x6fb842*/
      {
        this->cloakState = 0; /*0x6fb873*/
      }
      else
      {
        v6 = this->warpFactor; /*0x6fb844*/
        v7 = (HouseClass *)this->owner; /*0x6fb84a*/
        this->cloakState = 1; /*0x6fb852*/
        this->owner = (char *)v7 + v6; /*0x6fb859*/
        this->q22C = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x6fb865*/
        this->cloakDelayTimer = v31; /*0x6fb86b*/
        this->q234 = v5; /*0x6fb86e*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 672))(this) /*0x6fb8cf*/
        && (BuildingClass::GetHealthRatio(this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5896)
         || Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)0x63) < 4) )
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 1120))(this, 0); /*0x6fb8a9*/
      }
    }
  }
}


// ==== 0x006FBC90  TechnoClass::ShouldNotBeCloaked  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass::ShouldNotBeCloaked(float *this)
{
  int v2; // edi
  _DWORD *v3; // eax
  int v4; // eax
  _DWORD *v5; // eax
  int v7; // [esp-4h] [ebp-24h]
  int v8; // [esp+Ch] [ebp-14h]
  int v9; // [esp+10h] [ebp-10h] BYREF
  _BYTE v10[12]; // [esp+14h] [ebp-Ch] BYREF

  if ( ((*(unsigned __int8 (__thiscall **)(float *))(this->temporalUsing_e)(this) || this->q3D2) /*0x6fbcdc*/
    && !(*(unsigned __int8 (__thiscall **)(float *))(this->currentBurstIndex)(this)
    && !(*(unsigned __int8 (__thiscall **)(float *))(this->target_laser_timer)(this)
    && !(*(unsigned __int8 (__thiscall **)(float *))(this->drainTarget)(this)
    && !(*(unsigned __int8 (__thiscall **)(float *))(this->drainingMe)(this) )
  {
    return 0; /*0x6fbcdc*/
  }
  if ( VeterancyStruct::IsVeteran(this + 84) || VeterancyStruct::IsElite(this + 84) ) /*0x6fbcfd*/
  {
    v2 = (*(int (__thiscall **)(float *))(this->hasParachute)(this); /*0x6fbd12*/
    if ( VeterancyStruct::IsVeteran(this + 84) ) /*0x6fbd14*/
    {
      if ( *(_BYTE *)(v2 + 674) ) /*0x6fbd1d*/
        return 0; /*0x6fbd1d*/
    }
    if ( VeterancyStruct::IsElite(this + 84) && (*(_BYTE *)(v2 + 674) || *(_BYTE *)(v2 + 692)) ) /*0x6fbd40*/
      return 0; /*0x6fbd40*/
  }
  v3 = (_DWORD *)(*(int (__thiscall **)(float *, _BYTE *))(this->q048)(this, v10); /*0x6fbd53*/
  LOWORD(v8) = *v3 / 256; /*0x6fbd66*/
  HIWORD(v8) = v3[1] / 256; /*0x6fbd7a*/
  v4 = this->Owner; /*0x6fbd83*/
  v9 = v8; /*0x6fbd89*/
  v7 = *(_DWORD *)(v4 + 48); /*0x6fbd94*/
  v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v9); /*0x6fbd9b*/
  return !Cell::HasOccupierBit(v5, v7); /*0x6fbdb6*/
}


// ==== 0x006FBDC0  TechnoClass::ShouldBeCloaked  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass::ShouldBeCloaked(void *this)
{
  int v2; // edi
  _DWORD *v3; // eax
  int v4; // eax
  _DWORD *v5; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // [esp-4h] [ebp-24h]
  int v12; // [esp+Ch] [ebp-14h]
  int v13; // [esp+10h] [ebp-10h] BYREF
  _BYTE v14[12]; // [esp+14h] [ebp-Ch] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(void *))(this->temporalUsing_e)(this) ) /*0x6fbdca*/
  {
    if ( !VeterancyStruct::IsVeteran((float *)this + 84) && !VeterancyStruct::IsElite((float *)this + 84) /*0x6fbe2e*/
      || ((v2 = (*(int (__thiscall **)(void *))(this->hasParachute)(this),
           !VeterancyStruct::IsVeteran((float *)this + 84))
       || !*(_BYTE *)(v2 + 674))
      && (!VeterancyStruct::IsElite((float *)this + 84) || !*(_BYTE *)(v2 + 674) && !*(_BYTE *)(v2 + 692)) )
    {
      v3 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(this->q048)(this, v14); /*0x6fbe41*/
      LOWORD(v12) = *v3 / 256; /*0x6fbe54*/
      HIWORD(v12) = v3[1] / 256; /*0x6fbe68*/
      v4 = this->Owner; /*0x6fbe71*/
      v13 = v12; /*0x6fbe77*/
      v11 = *(_DWORD *)(v4 + 48); /*0x6fbe82*/
      v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v13); /*0x6fbe89*/
      if ( !Cell::HasOccupierBit(v5, v11) && !this->q3D2 ) /*0x6fbe99*/
        return 0; /*0x6fbeab*/
    }
  }
  if ( this->parachute == 2 ) /*0x6fbeb3*/
    return 0; /*0x6fbebd*/
  v7 = this->slaveManager; /*0x6fbebe*/
  v8 = this->originalOwnerHouse; /*0x6fbec4*/
  if ( v7 != -1 ) /*0x6fbecd*/
  {
    if ( (int)MEMORY[0xA8ED84] - v7 >= v8 ) /*0x6fbed9*/
      goto LABEL_19; /*0x6fbed9*/
    v8 -= (int)MEMORY[0xA8ED84] - v7; /*0x6fbedb*/
  }
  if ( v8 ) /*0x6fbedf*/
    return 0; /*0x6fbee9*/
LABEL_19:
  if ( this->sprayOffsetIndex_e /*0x6fbef9*/
    && (*(unsigned __int8 (__thiscall **)(void *, _DWORD))(this->q0EB)(this, this->sprayOffsetIndex_e) )
  {
    return 0; /*0x6fbf0b*/
  }
  if ( (*(int (__thiscall **)(void *))(this->fallRate)(this) != 6 && this->owner ) /*0x6fbf18*/
    return 0; /*0x6fbf2a*/
  v9 = this->isAliveFlag; /*0x6fbf2b*/
  v10 = this->q092; /*0x6fbf31*/
  if ( v9 != -1 ) /*0x6fbf3a*/
  {
    if ( (int)MEMORY[0xA8ED84] - v9 >= v10 ) /*0x6fbf46*/
      return (!this->currentMission || !this || (this->abstractFlags & 4) == 0 || !*((_BYTE *)this + 1709)) /*0x6fbf46*/
          && (*(int (__thiscall **)(void *))(this->airstrikeTintStage_e)(this) <= 0;
    v10 -= (int)MEMORY[0xA8ED84] - v9; /*0x6fbf48*/
  }
  if ( v10 ) /*0x6fbf4c*/
    return 0; /*0x6fbf56*/
  return (!this->currentMission || !this || (this->abstractFlags & 4) == 0 || !*((_BYTE *)this + 1709)) /*0x6fbea3*/
      && (*(int (__thiscall **)(void *))(this->airstrikeTintStage_e)(this) <= 0;
}


// ==== 0x006FBFA0  TechnoClass::ExecuteMoveCommand  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ExecuteMoveCommand(#377 *this)
{
  ScreenCaptureCommandClass *result; // eax
  void **v3; // ecx

  if ( (this->isDiscoveredByCurrentPlayer /*0x6fbfce*/
     || (unsigned __int8)House::IsHumanPlayer(*((#375 **)this + 135))
     || (result = (ScreenCaptureCommandClass *)g_hWnd) == 0)
    && (result = (ScreenCaptureCommandClass *)ObjectClass::HandleSelection(this), (_BYTE)result) )
  {
    v3 = (void **)this->attachedTag; /*0x6fbfd0*/
    if ( v3 ) /*0x6fbfd5*/
      TeamClass::Update_0(v3, 33, (AbstractClass *)this, *(IUnknown **)&MEMORY[0xB077F8].__pad_579C[6844], 0, 0); /*0x6fbfe4*/
    if ( (unsigned __int8)House::IsHumanPlayer(*((#375 **)this + 135)) /*0x6fc001*/
      || *(_BYTE *)(*(_DWORD *)(this->Owner + 52) + 422) )
    {
      if ( g_MoveFeedback ) /*0x6fc012*/
        (*(void (__thiscall **)(#377 *))(this->tiberiumCollectionState)(this); /*0x6fc018*/
    }
    TechnoClass::IsProductionChainActive(this); /*0x6fc020*/
    LOBYTE(result) = 1; /*0x6fc025*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6fc029*/
  }
  return (int)result->__pad_0; /*0x6fc027*/
}


// ==== 0x006FC030  TechnoClass::CanMoveToCell  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::CanMoveToCell(_DWORD *this)
{
  _DWORD *v3; // eax

  if ( this->mindControlRingAnim ) /*0x6fc033*/
    return 0; /*0x6fc03d*/
  if ( this->airstrikeTintStage_e ) /*0x6fc041*/
    return 0; /*0x6fc04b*/
  if ( this->spawnManager ) /*0x6fc04f*/
    return 0; /*0x6fc059*/
  if ( this->isTether ) /*0x6fc05d*/
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 444))(this); /*0x6fc06b*/
    if ( Cell::IsBridge(v3) ) /*0x6fc073*/
      return 0; /*0x6fc07c*/
  }
  return AbstractClass::COMStub_79((#374 *)this); /*0x6fc03f*/
}


// ==== 0x006FC090  TechnoClass::Vt240Thunk  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::Vt240Thunk(#377 *this)
{
  int v2; // [esp+4h] [ebp+4h]
  int v3; // [esp+8h] [ebp+8h]

  return (*(int (__thiscall **)(#377 *, int, int, _DWORD))(this->q0F0)(this, v2, v3, 0); /*0x6fc0a4*/
}


// ==== 0x006FC0B0  TechnoClass::ReadINI  this=TechnoClass  sig=csp ====
int __fastcall TriggerTypeClass::ReadINI(_DWORD *a0, TechnoClass *aP1, TechnoClass *aP2, int a4, TechnoClass *aP4)
{
  int v7; // eax
  TechnoClass *v8; // ebp
  IUnknown *v9; // eax
  IUnknown *v10; // edi
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  _BYTE *v22; // eax
  bool v23; // bl
  TechnoClass *v24; // eax
  TechnoClass *v25; // edi
  TechnoClass *v26; // eax
  int v27; // edx
  int v28; // edx
  int v29; // eax
  SlaveManagerClass *v30; // edx
  HouseClass *v31; // eax
  char v32; // al
  int v33; // edi
  int *location; // ebp
  int v35; // edx
  int v36; // eax
  TechnoClass *v37; // [esp+8h] [ebp-24h]
  int v38; // [esp+1Ch] [ebp-10h]
  int v39; // [esp+20h] [ebp-Ch] BYREF
  int v40; // [esp+24h] [ebp-8h]

  if ( !aP2 || a0[183] ) /*0x6fc0c5*/
    return 5; /*0x6fc0c5*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a0 + 472))(a0) ) /*0x6fc0d5*/
    return 3; /*0x6fc0eb*/
  if ( (TechnoClass *)a0[171] == aP2 ) /*0x6fc0f4*/
    return 3; /*0x6fc102*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a0 + 468))(a0) /*0x6fc145*/
    || *((_BYTE *)a0 + 456)
    || *((_BYTE *)a0 + 973)
    || aP2 == (TechnoClass *)a0[115]
    || aP2 == (TechnoClass *)a0[71] )
  {
    return 5; /*0x6fc145*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a0 + 476))(a0) ) /*0x6fc14f*/
  {
    v7 = a0[157]; /*0x6fc159*/
    if ( v7 ) /*0x6fc161*/
    {
      if ( aP2 == *(TechnoClass **)(v7 + 40) ) /*0x6fc166*/
        return 3; /*0x6fc174*/
    }
  }
  v8 = (aP2->abstractFlags & 1) != 0 ? aP2 : 0;
  v9 = (IUnknown *)(*(int (__thiscall **)(TechnoClass *, int *))(*(_DWORD *)aP2->__pad_0 + 72))(aP2, &v39); /*0x6fc18e*/
  v10 = (IUnknown *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v9); /*0x6fc19e*/
  if ( a0 ) /*0x6fc1a0*/
  {
    if ( (a0[5] & 4) != 0 && *((_BYTE *)a0 + 1709) ) /*0x6fc1a8*/
      return 5; /*0x6fc1b0*/
  }
  if ( v8 ) /*0x6fc1b8*/
  {
    if ( v8->inLimbo /*0x6fc23f*/
      || *((_BYTE *)a0 + 664)
      && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 132))(v8) + 1680)
      || *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*a0 + 132))(a0) + 1683)
      && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 132))(v8) + 1684)
      || v8->__pad_26A[18]
      || !*(_BYTE *)(a0[135] + 492)
      && (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 352))(v8) )
    {
      return 5; /*0x6fc247*/
    }
    if ( (*(int (__thiscall **)(TechnoClass *, int, _DWORD))(*(_DWORD *)v8->__pad_0 + 104))(v8, 1, a0[135]) == 5 /*0x6fc296*/
      && !Cell::IsPassableOffset(v10, *(IUnknown **)(a0[135] + 48))
      && (TechnoClass::GetValue(a0, (ObjectClass *)0xFFFFFFFF) > 0
       || !(unsigned __int8)HouseClass::IsAlliedWith(v8->focus, (IUnknown *)a0[135])) )
    {
      return 6; /*0x6fc29d*/
    }
    if ( v8->__pad_3F7[33] /*0x6fc2cc*/
      && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 132))(v8) + 3434)
      && !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 84))(v8) )
    {
      return 5; /*0x6fc2cc*/
    }
  }
  if ( *((_BYTE *)a0 + 141) ) /*0x6fc2d2*/
    return 5; /*0x6fc2d2*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a0 + 892))(a0) ) /*0x6fc2e4*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*a0 + 44))(a0) != 1 ) /*0x6fc2f8*/
      return 6; /*0x6fc2f8*/
    v11 = a0[433]; /*0x6fc2fe*/
    if ( !*(_BYTE *)(v11 + 3609) && !*(_BYTE *)(v11 + 3608) ) /*0x6fc30e*/
      return 6; /*0x6fc30e*/
  }
  v12 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*a0 + 1016))(a0, a4); /*0x6fc32b*/
  v38 = v12; /*0x6fc32f*/
  if ( !v12 || *(_BYTE *)(v12 + 335) && HouseClass::IonSensitivesShouldBeOffline() ) /*0x6fc349*/
    return 6; /*0x6fc350*/
  if ( *(_BYTE *)(v12 + 322) ) /*0x6fc356*/
  {
    if ( v8 && v8->drainTarget ) /*0x6fc364*/
      return 5; /*0x6fc36c*/
    if ( !v8 ) /*0x6fc378*/
      goto LABEL_52; /*0x6fc378*/
    if ( !*(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 132))(v8) + 1519) ) /*0x6fc385*/
      return 5; /*0x6fc876*/
  }
  if ( v8 /*0x6fc3bf*/
    && v8->spawnManager
    && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 44))(v8) == 1
    && (double)*(int *)(v12 + 180) < 384.0 )
  {
    return 5; /*0x6fc3bf*/
  }
LABEL_52:
  if ( a0 )
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*a0 + 44))(a0) == 1 )
    {
      v13 = (*(int (__thiscall **)(_DWORD *))(*a0 + 44))(a0); /*0x6fc3d9*/
      if ( TechnoClass::HasDeployFlags(v13 == 1 ? a0 : 0) )
        return 5; /*0x6fc3e7*/
    }
  }
  v14 = *(_DWORD *)(v12 + 172); /*0x6fc3f4*/
  if ( v14 ) /*0x6fc3fc*/
  {
    if ( *(_BYTE *)(v14 + 365) /*0x6fc417*/
      && v8
      && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 132))(v8) + 3381) )
    {
      return 5; /*0x6fc417*/
    }
  }
  v15 = *(_DWORD *)(v12 + 172); /*0x6fc425*/
  if ( v15 )
  {
    if ( *(_BYTE *)(v15 + 365) && v8 && v8->spawnManager ) /*0x6fc43d*/
      return 5; /*0x6fc43d*/
    if ( *(_BYTE *)(v15 + 347) )
    {
      if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 44))(aP2) == 1 )
      {
        v16 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 44))(aP2); /*0x6fc469*/
        if ( TechnoClass::HasDeployFlags(v16 == 1 ? aP2 : 0) )
          return 5; /*0x6fc477*/
      }
    }
  }
  v17 = *(_DWORD *)(v12 + 172); /*0x6fc484*/
  if ( v17
    && *(_BYTE *)(v17 + 347)
    && (aP2->abstractFlags & 4) != 0
    && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 132))(aP2) + 3476) )
  {
    if ( !*((aP2->abstractFlags & 4) != 0 ? aP2[1].veterancy : (int *)1652) )
      WinAPI::Wrapper(-2147467261); /*0x6fc4cf*/
    v37 = (TechnoClass *)*((aP2->abstractFlags & 4) != 0 ? aP2[1].veterancy : (int *)1652);
    if ( (*(unsigned __int8 (__stdcall **)(TechnoClass *))(*(_DWORD *)v37->__pad_0 + 128))(v37) ) /*0x6fc4dd*/
      return 5; /*0x6fc4dd*/
  }
  v18 = *(_DWORD *)(v12 + 172); /*0x6fc4ef*/
  if ( v18 )
  {
    if ( *(_BYTE *)(v18 + 347)
      && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 44))(aP2) == 1
      && *(_BYTE *)(*((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 44))(aP2) == 1
                    ? &aP2[1].ironTintTimer[2]
                    : (int *)1732)
                  + 3603)
      && *((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 44))(aP2) == 1
         ? &aP2->currentMission
         : (int *)172) == 16 )
    {
      return 5; /*0x6fc546*/
    }
  }
  v19 = *(_DWORD *)(v12 + 172); /*0x6fc54c*/
  if ( v19 ) /*0x6fc554*/
  {
    if ( *(_BYTE *)(v19 + 347) /*0x6fc56f*/
      && v8
      && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 132))(v8) + 3479) )
    {
      return 5; /*0x6fc56f*/
    }
  }
  if ( *((_BYTE *)a0 + 130) ) /*0x6fc57d*/
  {
    if ( !*(_BYTE *)(v12 + 323) ) /*0x6fc587*/
      return 5; /*0x6fc587*/
    v20 = a0[71]; /*0x6fc599*/
    if ( v20 ) /*0x6fc5a1*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v20 + 468))(v20) ) /*0x6fc5a5*/
        return 5; /*0x6fc5a5*/
    }
  }
  if ( *((_BYTE *)a0 + 130) ) /*0x6fc5b3*/
  {
    v21 = a0[71]; /*0x6fc5bd*/
    if ( v21 ) /*0x6fc5c5*/
    {
      if ( *(_DWORD *)(v21 + 284) ) /*0x6fc5c7*/
        return 5; /*0x6fc5c7*/
    }
  }
  if ( v8 /*0x6fc5f8*/
    && *(_DWORD *)(v12 + 172)
    && (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 468))(v8)
    && !*(_BYTE *)(*(_DWORD *)(v12 + 172) + 346) )
  {
    return 5; /*0x6fc600*/
  }
  if ( *(_BYTE *)(v12 + 305) ) /*0x6fc606*/
  {
    if ( !TechnoClass::CheckTargetCell(a0) && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a0 + 896))(a0) ) /*0x6fc623*/
    {
      if ( !SpawnManagerClass::CountAliveSpawns((int *)a0[180]) ) /*0x6fc637*/
        return 3; /*0x6fc64c*/
      goto LABEL_98; /*0x6fc63e*/
    }
    return 6; /*0x6fcd2c*/
  }
LABEL_98:
  if ( *(_BYTE *)(*(_DWORD *)(v12 + 172) + 346) /*0x6fc67b*/
    && v8
    && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 44))(v8) == 2
    && *(_BYTE *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 132))(v8) + 3412) )
  {
    return 5; /*0x6fc683*/
  }
  v22 = *(_BYTE **)(*(int (__thiscall **)(_DWORD *, bool))(*a0 + 1016))(a0, a4 == 0); /*0x6fc69f*/
  if ( v22 && (v22[297] && a0[193] || v22[301] && a0[197] || v22[298] && a0[194] || v22[304] && a0[201]) ) /*0x6fc6f7*/
    return 6; /*0x6fc6ff*/
  if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 84))(aP2)
    && !*(_BYTE *)(*(_DWORD *)(v12 + 160) + 676) )
  {
    return aP2 != (TechnoClass *)a0[171] ? 5 : 3;
  }
  if ( (aP2->abstractFlags & 4) != 0 /*0x6fc75c*/
    && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 120))(aP2) != 2
    && !*(_BYTE *)(*(_DWORD *)(v12 + 160) + 676) )
  {
    return 5; /*0x6fc75c*/
  }
  if ( v8 )
  {
    v23 = *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 444))(v8) + 236) == 2 /*0x6fc796*/
       || *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 444))(v8) + 236) == 6;
    if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 84))(v8) ) /*0x6fc79d*/
      v23 = 0; /*0x6fc7a4*/
    if ( v8->onBridge ) /*0x6fc7a6*/
    {
      v23 = 0; /*0x6fc7b0*/
    }
    else if ( v23 && (*(int (__thiscall **)(_DWORD *, TechnoClass *))(*a0 + 744))(a0, aP2) == -1 ) /*0x6fc7ca*/
    {
      return 5; /*0x6fc7ca*/
    }
    if ( !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 80))(aP2) || v23 ) /*0x6fc7e3*/
      goto LABEL_139; /*0x6fc7e3*/
  }
  else
  {
    if ( !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 84))(aP2) /*0x6fc7fc*/
      && !*(_BYTE *)(*(_DWORD *)(v12 + 160) + 677) )
    {
      return 5; /*0x6fc812*/
    }
    if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 44))(aP2) != 11
      || *((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 44))(aP2) == 11 ? aP2->animation : (int *)236) == 2
      || *((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 44))(aP2) == 11 ? aP2->animation : (int *)236) == 6 )
    {
      goto LABEL_139; /*0x6fc855*/
    }
  }
  if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*a0 + 132))(a0) + 1540) == 1 ) /*0x6fc868*/
    return 5; /*0x6fc868*/
LABEL_139:
  if ( *(_BYTE *)(v12 + 348) ) /*0x6fc87d*/
  {
    v24 = (TechnoClass *)a0[171]; /*0x6fc887*/
    v25 = aP2; /*0x6fc88d*/
    if ( v24 && v24 != aP2 && a0[201] && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP2->__pad_0 + 44))(aP2) != 6 ) /*0x6fc8ad*/
      return 3; /*0x6fc8bb*/
  }
  else
  {
    v25 = aP2; /*0x6fc8be*/
  }
  if ( *(_BYTE *)(v38 + 348) ) /*0x6fc8c2*/
  {
    v26 = (TechnoClass *)a0[171]; /*0x6fc8cc*/
    if ( v26 ) /*0x6fc8d4*/
    {
      if ( v26 == v25 && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v25->__pad_0 + 44))(v25) != 6 ) /*0x6fc8e4*/
        return 3; /*0x6fc8f2*/
    }
  }
  if ( a4 /*0x6fc93a*/
    || !a0
    || (*(int (__thiscall **)(_DWORD *))(*a0 + 44))(a0) != 1
    || (v27 = a0[238] % *(_DWORD *)(v38 + 156), v27 >= 2)
    || (v28 = *(_DWORD *)(a0[433] + 4 * v27 + 3648), v28 == -1)
    || (v29 = a0[432], v29 == -1) )
  {
    v30 = (SlaveManagerClass *)a0[187]; /*0x6fc94f*/
    v31 = (HouseClass *)a0[189]; /*0x6fc955*/
    if ( v30 != (SlaveManagerClass *)-1 ) /*0x6fc95e*/
    {
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (int)v30 >= (int)v31 ) /*0x6fc96a*/
        goto LABEL_164; /*0x6fc96a*/
      v31 = (HouseClass *)((char *)v31 - (*(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (_DWORD)v30)); /*0x6fc96c*/
    }
    if ( v31 ) /*0x6fc970*/
      return 3; /*0x6fc97e*/
  }
  else if ( v29 != v28 ) /*0x6fc93e*/
  {
    return 3; /*0x6fc94c*/
  }
LABEL_164:
  if ( *(_BYTE *)(v38 + 297) && a0[193] ) /*0x6fc98b*/
    return 3; /*0x6fc9a1*/
  if ( *(_BYTE *)(v38 + 301) && a0[197] ) /*0x6fc9ae*/
    return 3; /*0x6fc9c4*/
  if ( *(_BYTE *)(v38 + 298) && a0[194] ) /*0x6fc9d1*/
    return 3; /*0x6fc9e7*/
  if ( *(_BYTE *)(v38 + 304) && a0[201] ) /*0x6fc9f4*/
    return 3; /*0x6fca0a*/
  if ( !a0[191] ) /*0x6fca0d*/
    return 1; /*0x6fca23*/
  if ( *(_BYTE *)(v38 + 307) && a0[136] && ((*(int (__thiscall **)(_DWORD *))(*a0 + 44))(a0) != 2 || a0[136] == 2) ) /*0x6fca4d*/
    return 9; /*0x6fca5b*/
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*a0 + 132))(a0) + 3367) ) /*0x6fca68*/
    return 8; /*0x6fca7e*/
  if ( *(_BYTE *)(*(_DWORD *)(v38 + 172) + 345)
    && a0
    && (a0[5] & 4) != 0
    && !ParasiteClass::CanInfect((_DWORD *)a0[423], (v25->abstractFlags & 4) != 0 ? v25 : 0) )
  {
    return 5; /*0x6fcac2*/
  }
  v32 = *(_BYTE *)(*(_DWORD *)(v38 + 172) + 345); /*0x6fcacb*/
  if ( v32 && (v25->abstractFlags & 4) != 0 && *(int *)&HouseClass_Player.__pad_5568[23248] < v25[1].radarFlashTimer[0] ) /*0x6fcae9*/
    return 5; /*0x6fcaf7*/
  if ( !v8 ) /*0x6fcafc*/
    goto LABEL_231; /*0x6fcafc*/
  if ( v32 && (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 352))(v8) ) /*0x6fcb0b*/
    return 5; /*0x6fcb21*/
  if ( *(_BYTE *)(*(_DWORD *)(v38 + 172) + 341) && !CaptureManagerClass::CanCapture(a0[175], v8) ) /*0x6fcb3b*/
    return 5; /*0x6fcb50*/
  v33 = *(_DWORD *)(v38 + 172); /*0x6fcb56*/
  if ( *(double *)(v33 /*0x6fcb7c*/
                 + 8 * *(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 132))(v8) + 156)
                 + 160) == 0.0 )
    return 5; /*0x6fcb8a*/
  if ( *(_BYTE *)(v33 + 366) && !v8->attachedBomb ) /*0x6fcb97*/
    return 5; /*0x6fcbaa*/
  if ( *(_BYTE *)(v33 + 343) && v8->attachedBomb ) /*0x6fcbb7*/
    return 5; /*0x6fcbca*/
  if ( BYTE1(v8->barrelRecoil[4]) ) /*0x6fcbcd*/
    return 5; /*0x6fcbe3*/
  if ( *((_BYTE *)a0 + 140) == v8->onBridge ) /*0x6fcbf4*/
    goto LABEL_231; /*0x6fcbf4*/
  if ( (*(int (__thiscall **)(_DWORD *))(*a0 + 444))(a0) /*0x6fcc4c*/
    && (*(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*a0 + 444))(a0) + 320) & 0x100) != 0
    && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a0 + 84))(a0)
    && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 444))(v8)
    && (*(_DWORD *)((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v8->__pad_0 + 444))(v8) + 320) & 0x100) != 0 )
  {
    return 5; /*0x6fcc5a*/
  }
  location = v8->location; /*0x6fcc63*/
  v39 = a0[39]; /*0x6fcc6b*/
  v35 = a0[40]; /*0x6fcc72*/
  v39 = *location; /*0x6fcc75*/
  v40 = v35; /*0x6fcc79*/
  v36 = a0[41]; /*0x6fcc80*/
  v40 = location[1]; /*0x6fcc83*/
  if ( *(_BYTE *)(*(_DWORD *)(v38 + 172) + 345) ) /*0x6fcc90*/
  {
    if ( (int)abs32(v36 - location[2]) > 2 * *(_DWORD *)&stru_B05488.__pad_579C[16144] ) /*0x6fccac*/
      return 5; /*0x6fccb1*/
  }
LABEL_231:
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*a0 + 132))(a0) + 3479) /*0x6fccd5*/
    && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a0 + 896))(a0) )
  {
    return 5; /*0x6fcce2*/
  }
  if ( !(_BYTE)aP4 || (*(unsigned __int8 (__thiscall **)(_DWORD *, TechnoClass *, int))(*a0 + 936))(a0, aP2, a4) ) /*0x6fcd04*/
    return 0; /*0x6fcd20*/
  return 8; /*0x6fc0df*/
}


// ==== 0x006FCD40  TechnoClass::ProcessDeploymentState  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::_vt232(#377 *this)
{
  _DWORD *v2; // ecx

  (*(void (__thiscall **)(#377 *, _DWORD))(this->unknown_short_3C8)(this, 0); /*0x6fcd47*/
  (*(void (__thiscall **)(#377 *, _DWORD, int))(this->q120)(this, 0, 1); /*0x6fcd55*/
  (*(void (__thiscall **)(#377 *, int))(this->gapRadius_e)(this, 3); /*0x6fcd61*/
  if ( !this || (this->abstractFlags & 4) == 0 || !*((_BYTE *)this + 1709) ) /*0x6fcd71*/
  {
    v2 = (_DWORD *)this->queuedMission; /*0x6fcd7b*/
    if ( v2 ) /*0x6fcd83*/
    {
      TaskManager::Update(v2); /*0x6fcd85*/
      UnitClass::ProcessIdleOrders(*((_DWORD **)this + 180)); /*0x6fcd90*/
    }
    (*(void (__thiscall **)(#377 *, int))(this->q0DC)(this, 1); /*0x6fcd9b*/
  }
  return (*(int (__thiscall **)(#377 *))(this->initialOwner)(this); /*0x6fcdab*/
}


// ==== 0x006FCDB0  TechnoClass::AssignTarget_SyncLog  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass_AssignTarget_SyncLog(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int *v6; // ebp
  int v7; // eax
  int v8; // eax
  int v9; // ebp
  int v10; // ecx
  _DWORD v12[3]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = a2; /*0x6fcdb8*/
  v4 = this->sprayOffsetIndex_e; /*0x6fcdbe*/
  this->q1430 = 0; /*0x6fcdc4*/
  if ( a2 == v4 ) /*0x6fcdcc*/
    return v4; /*0x6fcdcc*/
  v5 = this->owningHouseIndex0; /*0x6fcdd2*/
  if ( v5 && *(_DWORD **)(v5 + 76) == this ) /*0x6fcddf*/
    WTFMode::ResetUnitFlags(v5); /*0x6fcde1*/
  v4 = (*(int (__thiscall **)(_DWORD *))(*this + 44))(this); /*0x6fcdeb*/
  if ( v4 == 2 ) /*0x6fcdf1*/
  {
    if ( !a2 ) /*0x6fcdf5*/
      goto LABEL_38; /*0x6fcdf5*/
    v4 = (*(int (__thiscall **)(_DWORD *))(*this + 132))(this); /*0x6fcdff*/
    if ( *(_BYTE *)(v4 + 3412) ) /*0x6fce05*/
    {
      v4 = (*(int (__thiscall **)(_DWORD *))(*this + 132))(this); /*0x6fce11*/
      if ( !*(_BYTE *)(v4 + 3432) ) /*0x6fce17*/
      {
        if ( this->pitchAngle ) /*0x6fce1f*/
        {
          if ( this->currentMission == 1 ) /*0x6fce2e*/
          {
            v4 = this->missionStatus; /*0x6fce30*/
            if ( v4 > 4 && v4 < 10 ) /*0x6fce3e*/
            {
              this->pitchAngle = 0; /*0x6fce40*/
              goto LABEL_38; /*0x6fce46*/
            }
          }
        }
      }
    }
  }
  if ( a2 ) /*0x6fce4d*/
  {
    if ( (*(_BYTE *)(a2 + 20) & 1) != 0 ) /*0x6fce57*/
    {
      v4 = *(_DWORD *)(a2 + 740); /*0x6fce59*/
      v6 = (int *)(a2 + 740); /*0x6fce5f*/
      if ( v4 ) /*0x6fce67*/
      {
        v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2); /*0x6fce6d*/
        if ( v4 != 6 ) /*0x6fce73*/
        {
          if ( this->temporalUsing ) /*0x6fce75*/
            v3 = *v6; /*0x6fce7d*/
          v7 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1016))(this, 0); /*0x6fce8b*/
          if ( v7 ) /*0x6fce8f*/
          {
            v8 = *(_DWORD *)(v7 + 172); /*0x6fce91*/
            if ( v8 ) /*0x6fce99*/
            {
              if ( *(_BYTE *)(v8 + 347) ) /*0x6fce9b*/
                v3 = *v6; /*0x6fcea3*/
            }
          }
          v4 = this->owningHouseIndex0; /*0x6fcea6*/
          if ( v4 && *(_DWORD **)(v4 + 76) == this ) /*0x6fceb3*/
            v3 = *v6; /*0x6fceb5*/
        }
      }
    }
    if ( (_DWORD *)v3 == this ) /*0x6fceba*/
    {
      v12[0] = this->location; /*0x6fcec8*/
      v12[1] = this->locationY; /*0x6fced4*/
      v12[2] = this->locationZ; /*0x6fcedb*/
      v4 = (int)Coord::To_Cell(&MEMORY[0x87F7E8], v12); /*0x6fcee4*/
      v3 = v4; /*0x6fcee9*/
      goto LABEL_39; /*0x6fceeb*/
    }
    if ( !v3 ) /*0x6fceef*/
      goto LABEL_39; /*0x6fceef*/
    LOBYTE(v4) = *(_BYTE *)(v3 + 20); /*0x6fcef1*/
    if ( (v4 & 2) == 0 ) /*0x6fcef6*/
      goto LABEL_39; /*0x6fcef6*/
    if ( *(_BYTE *)(v3 + 144) && *(_DWORD *)(v3 + 108) ) /*0x6fcf00*/
    {
      LOBYTE(v4) = (v4 & 4) != 0; /*0x6fcf08*/
      if ( !(_BYTE)v4 ) /*0x6fcf0e*/
        goto LABEL_39; /*0x6fcf0e*/
      v9 = v3; /*0x6fcf16*/
      if ( *(_BYTE *)(v3 + 973) ) /*0x6fcf10*/
        v3 = 0; /*0x6fcf1c*/
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 44))(v9); /*0x6fcf23*/
      if ( v4 != 15 ) /*0x6fcf29*/
        goto LABEL_39; /*0x6fcf29*/
      LOBYTE(v4) = TechnoClass::IsEnteringOrCapturingStructure(v9); /*0x6fcf2d*/
      if ( !(_BYTE)v4 ) /*0x6fcf34*/
        goto LABEL_39; /*0x6fcf34*/
    }
  }
LABEL_38:
  v3 = 0; /*0x6fcf36*/
LABEL_39:
  v10 = this->captureManager; /*0x6fcf38*/
  this->sprayOffsetIndex_e = v3; /*0x6fcf3e*/
  if ( v10 && !v3 ) /*0x6fcf4b*/
    LOBYTE(v4) = SpawnManagerClass::SetTarget(0); /*0x6fcf4e*/
  if ( !this->sprayOffsetIndex_e ) /*0x6fcf53*/
    this->q3B8 = 0; /*0x6fcf5b*/
  if ( this->fireParticles ) /*0x6fcf61*/
  {
    LOBYTE(v4) = (*(int (__thiscall **)(_DWORD *, int))(*this + 940))(this, v3); /*0x6fcf6e*/
    if ( !(_BYTE)v4 ) /*0x6fcf76*/
    {
      LOBYTE(v4) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->fireParticles + 248))(this->fireParticles); /*0x6fcf80*/
      this->fireParticles = 0; /*0x6fcf86*/
    }
  }
  return v4; /*0x6fcf8c*/
}


// ==== 0x006FCFA0  TechnoClass::CalculateROF  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CalculateROF(#377 *this)
{
  int v3; // edi
  #377 *v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // ebp
  int v9; // ebx
  int v10; // [esp+Ch] [ebp+4h]
  int v11; // [esp+Ch] [ebp+4h]

  if ( (*(int (__thiscall **)(#377 *))(this->fallRate)(this) == 6 && *((int *)this + 191) > 1 ) /*0x6fcfb5*/
    return 1; /*0x6fcfb8*/
  v3 = *(_DWORD *)(*(int (__thiscall **)(#377 *, int))(this->q3F8)(this, v10); /*0x6fcfd0*/
  if ( !v3 ) /*0x6fcfd4*/
    return 1; /*0x6fcfd7*/
  if ( *(_BYTE *)(v3 + 304) /*0x6fd028*/
    || *(_BYTE *)(v3 + 298) && this->sparkParticles
    || *(_BYTE *)(v3 + 297) && this->fireParticles
    || *(_BYTE *)(v3 + 301) && this->q0C5 )
  {
    return *(_DWORD *)(v3 + 176); /*0x6fd1fa*/
  }
  if ( this )
    v4 = (*(int (__thiscall **)(#377 *))(this->fallRate)(this) == 1 ? this : 0;
  else
    v4 = 0; /*0x6fd03a*/
  v5 = this->q3B8; /*0x6fd04e*/
  if ( v5 >= *(_DWORD *)(v3 + 156) ) /*0x6fd05c*/
  {
    v7 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2); /*0x6fd0b0*/
    v8 = Math::RoundToInt((double)*(int *)(v3 + 176) * *(double *)(this->Owner + 424) + (double)v7); /*0x6fd0da*/
    v11 = v8; /*0x6fd0de*/
    if ( VeterancyStruct::IsVeteran((float *)this + 84) || VeterancyStruct::IsElite((float *)this + 84) ) /*0x6fd0ed*/
    {
      if ( (v9 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this), /*0x6fd12c*/
            VeterancyStruct::IsVeteran((float *)this + 84))
        && *(_BYTE *)(v9 + 672)
        || VeterancyStruct::IsElite((float *)this + 84) && (*(_BYTE *)(v9 + 672) || *(_BYTE *)(v9 + 690)) )
      {
        v8 = Math::RoundToInt((double)v8 * *(double *)&MEMORY[0x8871E0]->?); /*0x6fd14a*/
        v11 = v8; /*0x6fd14c*/
      }
    }
    if ( (*(unsigned __int8 (__thiscall **)(#377 *))(this->passengers_e)(this) ) /*0x6fd154*/
    {
      if ( (*(int (__thiscall **)(#377 *))(this->q1020)(this) > 0 ) /*0x6fd16a*/
      {
        v8 /= (*(int (__thiscall **)(#377 *))(this->q1020)(this); /*0x6fd17d*/
        v11 = v8; /*0x6fd17f*/
      }
      if ( *((float *)&MEMORY[0x8871E0]->? + 1) > 0.0 ) /*0x6fd19a*/
      {
        v8 = Math::RoundToInt((double)v11 / *((float *)&MEMORY[0x8871E0]->? + 1)); /*0x6fd1ab*/
        v11 = v8; /*0x6fd1ad*/
      }
    }
    if ( this->alignmentPaddingB9 /*0x6fd1de*/
      && (*(int (__thiscall **)(#377 *))(this->fallRate)(this) != 6
      && *(float *)&MEMORY[0x8871E0]->? != 0.0 )
    {
      return Math::RoundToInt((double)v11 / *(float *)&MEMORY[0x8871E0]->?); /*0x6fd1ef*/
    }
    return v8; /*0x6fd1f1*/
  }
  else
  {
    if ( v5 <= 0 ) /*0x6fd060*/
      return Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 3, 5); /*0x6fd060*/
    if ( v5 > 4 ) /*0x6fd065*/
      return Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 3, 5); /*0x6fd065*/
    if ( !v4 ) /*0x6fd069*/
      return Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 3, 5); /*0x6fd069*/
    v6 = *(_DWORD *)(*((_DWORD *)v4 + 433) + 4 * v5 + 3652); /*0x6fd071*/
    if ( v6 == -1 ) /*0x6fd07b*/
      return Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 3, 5); /*0x6fd094*/
    else
      return v6; /*0x6fd07e*/
  }
}


// ==== 0x006FD210  TechnoClass::CreateFireEffect  this=IUnknown  sig=csp ====
char *__thiscall TechnoClass::CreateFireEffect(_DWORD *this, IUnknown *aP1, IUnknown *aP2, IUnknown *aP3, int *a4)
{
  char v6; // cl
  char *v7; // edi
  unsigned __int8 v8; // al
  unsigned __int8 v9; // cl
  int v10; // ecx
  int v11; // ecx
  TechnoTypeClass *v12; // edx
  int *v13; // eax
  TechnoTypeClass *v14; // edx
  int v15; // eax
  int *v16; // eax
  int v17; // edx
  int v18; // ebp
  _DWORD *v19; // eax
  int *v20; // eax
  int *v21; // eax
  int v22; // esi
  int v23; // ebp
  int v24; // ebx
  int v25; // ecx
  char v26; // al
  char v27; // dl
  char *result; // eax
  int **v29; // [esp-18h] [ebp-68h]
  int *v30; // [esp-14h] [ebp-64h] BYREF
  int v31[5]; // [esp-10h] [ebp-60h] BYREF
  IUnknown *v32; // [esp+4h] [ebp-4Ch]
  __int16 v33; // [esp+18h] [ebp-38h] BYREF
  char v34; // [esp+1Ah] [ebp-36h]
  int v35; // [esp+1Ch] [ebp-34h] BYREF
  char *v36; // [esp+24h] [ebp-2Ch]
  int v37; // [esp+28h] [ebp-28h]
  int v38[3]; // [esp+2Ch] [ebp-24h] BYREF
  int v39; // [esp+38h] [ebp-18h] BYREF
  int v40; // [esp+3Ch] [ebp-14h]
  TechnoTypeClass *v41; // [esp+40h] [ebp-10h]
  _DWORD v42[3]; // [esp+44h] [ebp-Ch] BYREF
  int *a4a; // [esp+60h] [ebp+10h]

  v37 = aP3->__pad_144[10]; /*0x6fd224*/
  v6 = aP3->__pad_144[9]; /*0x6fd228*/
  v33 = 0; /*0x6fd230*/
  v34 = 0; /*0x6fd23a*/
  if ( v6 ) /*0x6fd23f*/
  {
    v7 = (char *)(this->q21C + 22268); /*0x6fd247*/
    v8 = *(_BYTE *)(this->q21C + 22269); /*0x6fd24f*/
    v9 = *(_BYTE *)(this->q21C + 22270); /*0x6fd252*/
    LOBYTE(v33) = (unsigned __int8)*v7 >> 1; /*0x6fd257*/
    HIBYTE(v33) = v8 >> 1; /*0x6fd263*/
    v34 = v9 >> 1; /*0x6fd267*/
    v36 = (char *)&v33; /*0x6fd26b*/
  }
  else
  {
    v7 = &aP3->__pad_11C[4]; /*0x6fd271*/
    v36 = &aP3->__pad_11C[7]; /*0x6fd27c*/
  }
  v10 = *a4; /*0x6fd28c*/
  v35 = 0; /*0x6fd28e*/
  if ( v10 == *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6908] /*0x6fd2ae*/
    && a4[1] == *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6912]
    && a4[2] == *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[6916] )
  {
    v13 = (int *)(*(int (__thiscall **)(_DWORD *, int *, IUnknown *, _DWORD, _DWORD, _DWORD))(*this + 176))( /*0x6fd2e9*/
                   this,
                   v38,
                   aP2,
                   0,
                   0,
                   0);
    v39 = *v13; /*0x6fd2f1*/
    v40 = v13[1]; /*0x6fd2f8*/
    v14 = (TechnoTypeClass *)v13[2]; /*0x6fd2fe*/
    v15 = *this; /*0x6fd301*/
    v41 = v14; /*0x6fd303*/
    if ( (*(int (__thiscall **)(_DWORD *))(v15 + 44))(this) == 6 ) /*0x6fd30d*/
    {
      v16 = Coord::To_ScreenRaw(&v35, &v39); /*0x6fd31f*/
      v17 = *this; /*0x6fd326*/
      v38[0] = *v16; /*0x6fd328*/
      v18 = v16[1]; /*0x6fd32e*/
      v19 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(v17 + 172))(this, v42); /*0x6fd336*/
      v20 = Coord::To_ScreenRaw(v38, v19); /*0x6fd348*/
      v35 = *v20; /*0x6fd34f*/
      v35 = v18 - v20[1]; /*0x6fd358*/
      if ( v35 > 0 ) /*0x6fd35c*/
        v35 = 0; /*0x6fd35e*/
    }
  }
  else
  {
    v11 = a4[1]; /*0x6fd2b2*/
    v39 = *a4; /*0x6fd2b5*/
    v12 = (TechnoTypeClass *)a4[2]; /*0x6fd2b9*/
    v40 = v11; /*0x6fd2bc*/
    v41 = v12; /*0x6fd2c0*/
  }
  if ( aP1 && (aP1->__pad_10[4] & 2) != 0 ) /*0x6fd372*/
    v21 = (int *)(*(int (__stdcall **)(_DWORD *))(aP1->field_0 + 164))(v42); /*0x6fd37b*/
  else
    v21 = (int *)(*(int (__stdcall **)(_DWORD *))(aP1->field_0 + 88))(v42); /*0x6fd38a*/
  v22 = *v21; /*0x6fd38d*/
  v32 = (IUnknown *)92; /*0x6fd38f*/
  v23 = v21[1]; /*0x6fd391*/
  v24 = v21[2]; /*0x6fd394*/
  a4a = (int *)__2_YAPAXI_Z(0x5Cu); /*0x6fd39f*/
  if ( !a4a ) /*0x6fd3a5*/
    return 0; /*0x6fd453*/
  v32 = 0; /*0x6fd3af*/
  v31[4] = 1065353216; /*0x6fd3b1*/
  v31[3] = 1; /*0x6fd3b6*/
  v31[2] = 0; /*0x6fd3b8*/
  v31[1] = v37; /*0x6fd3ba*/
  v31[0] = v25; /*0x6fd3bf*/
  v26 = aP3->__pad_11C[12]; /*0x6fd3c9*/
  LOWORD(v31[0]) = *(_WORD *)&aP3->__pad_11C[10]; /*0x6fd3cf*/
  v30 = v31; /*0x6fd3d6*/
  BYTE2(v31[0]) = v26; /*0x6fd3d7*/
  v27 = v36[2]; /*0x6fd3dd*/
  LOWORD(v30) = *(_WORD *)v36; /*0x6fd3e2*/
  v29 = &v30; /*0x6fd3e5*/
  BYTE2(v30) = v27; /*0x6fd3e6*/
  LOWORD(v29) = *(_WORD *)v7; /*0x6fd3f3*/
  BYTE2(v29) = v7[2]; /*0x6fd3f6*/
  result = TimerClass::Construct( /*0x6fd42b*/
             (char *)a4a,
             v39,
             v40,
             v41,
             v22,
             v23,
             v24,
             v35,
             1,
             (int)v29,
             (int)v30,
             v31[0],
             v37,
             0,
             1,
             1065353216,
             0);
  if ( result ) /*0x6fd432*/
  {
    if ( aP3->__pad_144[9] ) /*0x6fd438*/
      result[32] = 1; /*0x6fd442*/
  }
  return result; /*0x6fd446*/
}


// ==== 0x006FD460  TechnoClass::CreateRadarBlip  this=IUnknown  sig=csp ====
int __thiscall TechnoClass::CreateRadarBlip(int *this, TechnoClass *aP1, IUnknown *aP2, IUnknown *aP3)
{
  rc_ptr_base *v5; // esi
  _DWORD *v6; // eax
  int *v8; // eax
  int v9; // edx
  int v10; // esi
  IUnknown *v11; // eax
  _DWORD *v12; // eax
  int *v13; // eax
  IUnknown **v14; // eax
  IUnknown **v15; // ecx
  IUnknown *v16; // eax
  int v17; // edi
  int v18; // ebp
  _DWORD *v19; // [esp+10h] [ebp-20h]
  int v20; // [esp+14h] [ebp-1Ch] BYREF
  int v21; // [esp+1Ch] [ebp-14h] BYREF
  _BYTE v22[12]; // [esp+24h] [ebp-Ch] BYREF

  v5 = 0; /*0x6fd46b*/
  v6 = (_DWORD *)__2_YAPAXI_Z(0x30u); /*0x6fd46d*/
  if ( !v6 ) /*0x6fd477*/
    return 0; /*0x6fd477*/
  v19 = TechnoClass::ResetDamageAccumulator(v6); /*0x6fd482*/
  if ( !v19 ) /*0x6fd486*/
    return 0; /*0x6fd488*/
  if ( (*(int (__thiscall **)(int *))(*this + 44))(this) == 6 ) /*0x6fd4a2*/
  {
    v8 = Coord::To_ScreenRaw(&v20, aP3); /*0x6fd4b0*/
    v9 = *v8; /*0x6fd4b5*/
    v10 = v8[1]; /*0x6fd4be*/
    v11 = (IUnknown *)*this; /*0x6fd4c1*/
    v21 = v9; /*0x6fd4c3*/
    v12 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))&v11->__pad_A8[4])(this, v22); /*0x6fd4c7*/
    v13 = Coord::To_ScreenRaw(&v21, v12); /*0x6fd4d9*/
    v20 = *v13; /*0x6fd4e0*/
    v5 = (rc_ptr_base *)(v10 - v13[1]); /*0x6fd4e4*/
    if ( (int)v5 > 0 ) /*0x6fd4e9*/
      v5 = 0; /*0x6fd4eb*/
  }
  if ( aP1 && (aP1->abstractFlags & 2) != 0 ) /*0x6fd4f9*/
    v14 = (IUnknown **)(*(int (__stdcall **)(_BYTE *))(*(_DWORD *)aP1->__pad_0 + 164))(v22); /*0x6fd502*/
  else
    v14 = (IUnknown **)(*(int (__stdcall **)(_BYTE *))(*(_DWORD *)aP1->__pad_0 + 88))(v22); /*0x6fd511*/
  v15 = v14; /*0x6fd514*/
  v16 = *v14; /*0x6fd516*/
  v17 = (int)v15[1]; /*0x6fd518*/
  v18 = (int)v15[2]; /*0x6fd51b*/
  if ( aP2 ) /*0x6fd524*/
    *((_BYTE *)v19 + 44) = HIBYTE(aP2->field_150); /*0x6fd530*/
  TechnoClass::CreateTrailParticle(v19, aP3->field_0, aP3->field_4, aP3->field_8, (int)v16, v17, v18, (int)v5); /*0x6fd55a*/
  return (int)v19; /*0x6fd48a*/
}


// ==== 0x006FD570  TechnoClass::CreateFiringRadarBlip  this=IUnknown  sig=csp ====
_DWORD *__thiscall TechnoClass::CreateFiringRadarBlip(int this, InfantryClass *aP1)
{
  int v3; // ebx
  IUnknown *v4; // ebp
  _DWORD *v5; // eax
  _DWORD *RadarBlip; // edi
  _DWORD v8[3]; // [esp+1Ch] [ebp-18h] BYREF
  _BYTE v9[12]; // [esp+28h] [ebp-Ch] BYREF

  v3 = (*(int (__thiscall **)(int, InfantryClass *))(this->q0B9)(this, aP1); /*0x6fd588*/
  v4 = *(IUnknown **)(*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1016))(this, v3); /*0x6fd593*/
  v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, int, _DWORD, _DWORD, _DWORD))(this->q02C)( /*0x6fd5ae*/
                   this,
                   v9,
                   v3,
                   0,
                   0,
                   0);
  v8[0] = *v5; /*0x6fd5b6*/
  v8[1] = v5[1]; /*0x6fd5c2*/
  v8[2] = v5[2]; /*0x6fd5cd*/
  RadarBlip = (_DWORD *)TechnoClass::CreateRadarBlip((int *)this, (TechnoClass *)aP1, v4, (IUnknown *)v8); /*0x6fd5d6*/
  if ( RadarBlip /*0x6fd5f2*/
    && (*(int (__thiscall **)(int))(this->q02C)(this) == 1
    && *(_BYTE *)(this + 144)
    && !*(_DWORD *)(this + 1756) )
  {
    *(_DWORD *)(this + 1756) = RadarBlip; /*0x6fd600*/
    TechnoClass::updateSightRange(RadarBlip, (IUnknown *)this, v3); /*0x6fd606*/
  }
  return RadarBlip; /*0x6fd60d*/
}


// ==== 0x006FD620  TechnoClass::CreateFireBeamEffect  this=IUnknown  sig=csp ====
char *__thiscall TechnoClass::CreateFireBeamEffect(int *this, InfantryClass *aP1, int a3)
{
  double *v4; // eax
  int v5; // ebx
  double *v6; // esi
  int *v7; // eax
  int v8; // edx
  int *v9; // eax
  int *v10; // eax
  int v11; // edi
  int *v12; // eax
  int v13; // ebx
  _DWORD *v14; // eax
  int v15; // eax
  int v16; // ecx
  __int16 v18; // [esp+1Ch] [ebp-3Ch] BYREF
  char v19; // [esp+1Eh] [ebp-3Ah]
  int v20; // [esp+20h] [ebp-38h] BYREF
  int v21[3]; // [esp+28h] [ebp-30h] BYREF
  _DWORD v22[3]; // [esp+34h] [ebp-24h] BYREF
  int v23; // [esp+40h] [ebp-18h] BYREF
  int v24; // [esp+44h] [ebp-14h]
  int v25; // [esp+48h] [ebp-10h]
  int v26; // [esp+4Ch] [ebp-Ch] BYREF
  int v27; // [esp+50h] [ebp-8h]
  int v28; // [esp+54h] [ebp-4h]

  v4 = RadBeam::Create((rc_ptr_base *)1); /*0x6fd62e*/
  v5 = *this; /*0x6fd636*/
  v6 = v4; /*0x6fd638*/
  v20 = 0; /*0x6fd650*/
  v7 = (int *)(*(int (__thiscall **)(int *, int *, _DWORD, _DWORD, _DWORD, _DWORD))(v5 + 176))(this, v21, 0, 0, 0, 0); /*0x6fd657*/
  v23 = *v7; /*0x6fd65f*/
  v24 = v7[1]; /*0x6fd668*/
  v8 = *this; /*0x6fd66c*/
  v25 = v7[2]; /*0x6fd671*/
  v9 = (int *)(*(int (__thiscall **)(int *, int *))(v8 + 172))(this, v21); /*0x6fd67a*/
  v26 = *v9; /*0x6fd684*/
  v27 = v9[1]; /*0x6fd68b*/
  v28 = v9[2]; /*0x6fd692*/
  if ( v24 == v27 ) /*0x6fd69c*/
  {
    v13 = v20; /*0x6fd6de*/
  }
  else
  {
    v10 = Coord::To_ScreenRaw(&v20, &v23); /*0x6fd6ae*/
    v21[0] = *v10; /*0x6fd6b9*/
    v11 = v10[1]; /*0x6fd6c3*/
    v12 = Coord::To_ScreenRaw(v21, &v26); /*0x6fd6cc*/
    v20 = *v12; /*0x6fd6d3*/
    v13 = v11 - v12[1]; /*0x6fd6da*/
  }
  if ( aP1 && (aP1->abstractFlags & 2) != 0 ) /*0x6fd6ee*/
    v14 = (_DWORD *)(*(int (__thiscall **)(InfantryClass *, int *))(*(_DWORD *)aP1->__pad_0 + 164))(aP1, v21); /*0x6fd707*/
  else
    v14 = (_DWORD *)(*(int (__thiscall **)(InfantryClass *, int *))(*(_DWORD *)aP1->__pad_0 + 88))(aP1, v21); /*0x6fd6f9*/
  v22[0] = *v14; /*0x6fd713*/
  v22[1] = v14[1]; /*0x6fd71a*/
  v15 = v14[2]; /*0x6fd71e*/
  v18 = 0; /*0x6fd721*/
  v22[2] = v15; /*0x6fd726*/
  v19 = 0; /*0x6fd732*/
  if ( a3 == 1 ) /*0x6fd737*/
  {
    v16 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6246; /*0x6fd758*/
  }
  else if ( a3 == 2 ) /*0x6fd740*/
  {
    v16 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6249; /*0x6fd74a*/
  }
  else
  {
    v16 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6192; /*0x6fd742*/
  }
  v18 = *(_WORD *)v16; /*0x6fd761*/
  v19 = *(_BYTE *)(v16 + 2); /*0x6fd770*/
  TechnoClass::drawPipScale(v6, &v23); /*0x6fd774*/
  TechnoClass::drawSpawnPips(v6, v22); /*0x6fd780*/
  TechnoClass::drawAmmoPips(v6, 15); /*0x6fd789*/
  TechnoClass::drawTiberiumPips(v6, 0, 1078198272); /*0x6fd797*/
  TechnoClass::drawSelectionBox((char *)v6, (int)&v18); /*0x6fd7a3*/
  TechnoClass::drawHealthBar(v6, v13); /*0x6fd7ab*/
  if ( a3 == 2 )
  {
    TechnoClass::drawMindControlPips(v6, 1); /*0x6fd7b9*/
    TechnoClass::drawPassengerPips(v6, 1); /*0x6fd7c2*/
    if ( aP1 )
    {
      if ( (aP1->abstractFlags & 1) != 0 )
      {
        *((_DWORD *)v6 + 1) = aP1; /*0x6fd7d1*/
        *((aP1->abstractFlags & 1) != 0 ? &aP1->firingRadBeam : (void **)1296) = v6;
      }
    }
  }
  return (char *)v6; /*0x6fd7e7*/
}


// ==== 0x006FD800  ObjectClass::SpreadRadiationAreaEffect  this=IUnknown  sig=csp ====
int __thiscall SpreadRadiationAreaEffect(void *this, InfantryClass *aP1)
{
  int v2; // eax
  int result; // eax
  int v4; // ecx
  _DWORD *v5; // eax
  ObjectClass *Coords; // eax
  int v7; // esi
  int v8; // eax
  double *v9; // esi
  int v10; // edi
  int v11; // ebx
  __int16 v12; // [esp+1Ch] [ebp-50h] BYREF
  char v13; // [esp+1Eh] [ebp-4Eh]
  int v14; // [esp+20h] [ebp-4Ch]
  int v15; // [esp+24h] [ebp-48h]
  ObjectClass *v16; // [esp+28h] [ebp-44h]
  int v17; // [esp+2Ch] [ebp-40h]
  ObjectClass *v18; // [esp+30h] [ebp-3Ch] BYREF
  int v19; // [esp+34h] [ebp-38h]
  __int16 v20; // [esp+38h] [ebp-34h]
  __int16 v21; // [esp+3Ah] [ebp-32h]
  __int16 v22; // [esp+40h] [ebp-2Ch]
  __int16 v23; // [esp+42h] [ebp-2Ah]
  int v24; // [esp+48h] [ebp-24h] BYREF
  int v25; // [esp+4Ch] [ebp-20h]
  int v26; // [esp+50h] [ebp-1Ch]
  int v27; // [esp+54h] [ebp-18h] BYREF
  IUnknown *v28; // [esp+58h] [ebp-14h]
  int v29; // [esp+5Ch] [ebp-10h]
  int v30[3]; // [esp+60h] [ebp-Ch] BYREF

  v2 = (*(int (__thiscall **)(void *, int *))(this->q012)(this, &v24); /*0x6fd813*/
  v17 = 0; /*0x6fd818*/
  v27 = *(_DWORD *)v2; /*0x6fd822*/
  v28 = *(IUnknown **)(v2 + 4); /*0x6fd829*/
  v29 = *(_DWORD *)(v2 + 8); /*0x6fd830*/
  v22 = v27 / 256; /*0x6fd840*/
  v23 = (int)v28 / 256; /*0x6fd853*/
  v12 = *(_WORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6192); /*0x6fd865*/
  result = -1; /*0x6fd86d*/
  v13 = *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6194); /*0x6fd870*/
  v15 = -1; /*0x6fd874*/
  do /*0x6fd9e6*/
  {
    v4 = -1; /*0x6fd878*/
    v14 = -1; /*0x6fd87b*/
    do /*0x6fd9d8*/
    {
      if ( result || v4 ) /*0x6fd885*/
      {
        v20 = (_WORD)aP1 * result; /*0x6fd89a*/
        v21 = v4 * (_WORD)aP1; /*0x6fd89f*/
        LOWORD(v16) = v22 + (_WORD)aP1 * result; /*0x6fd8ae*/
        HIWORD(v16) = v4 * (_WORD)aP1 + v23; /*0x6fd8bd*/
        v18 = v16; /*0x6fd8ca*/
        v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v18); /*0x6fd8d5*/
        Coords = (ObjectClass *)CellClass::GetCoords(v5, v30); /*0x6fd8dc*/
        v24 = *(_DWORD *)Coords->__pad_0; /*0x6fd8e8*/
        v25 = *(_DWORD *)&Coords->__pad_0[4]; /*0x6fd8f6*/
        v26 = *(_DWORD *)&Coords->__pad_0[8]; /*0x6fd8fd*/
        v7 = Random::Range(&MEMORY[0x87F8E4].__pad_5568[7484], (IUnknown *)0xFFFFFF80, (IUnknown *)0x80); /*0x6fd912*/
        v8 = Random::Range(&MEMORY[0x87F8E4].__pad_5568[7484], (IUnknown *)0xFFFFFF80, (IUnknown *)0x80); /*0x6fd914*/
        v24 += v7; /*0x6fd925*/
        v25 += v8; /*0x6fd92e*/
        v9 = RadBeam::Create((rc_ptr_base *)2); /*0x6fd93b*/
        TechnoClass::drawSelectionBox((char *)v9, (int)&v12); /*0x6fd940*/
        v10 = Random::Range(&MEMORY[0x87F8E4].__pad_5568[7484], (IUnknown *)5, (IUnknown *)0x14); /*0x6fd95f*/
        v19 = Random::Range(&MEMORY[0x87F8E4].__pad_5568[7484], (IUnknown *)0x64, (IUnknown *)0x1F4); /*0x6fd96f*/
        v11 = Random::Range(&MEMORY[0x87F8E4].__pad_5568[7484], 0, (IUnknown *)0x14); /*0x6fd97f*/
        TechnoClass::drawPipScale(v9, &v27); /*0x6fd981*/
        TechnoClass::drawSpawnPips(v9, &v24); /*0x6fd98d*/
        TechnoClass::drawAmmoPips(v9, v10); /*0x6fd995*/
        TechnoClass::drawTiberiumPips( /*0x6fd9a6*/
          v9,
          COERCE_UNSIGNED_INT64((double)v19),
          HIDWORD(COERCE_UNSIGNED_INT64((double)v19)));
        SpreadRadiationAreaEffect_Helper(v9, 0, 0); /*0x6fd9b1*/
        SpreadRadiationAreaEffect_Helper_659530(v9, v11); /*0x6fd9b9*/
        if ( v17 <= v10 ) /*0x6fd9c2*/
          v17 = v10; /*0x6fd9c4*/
        v4 = v14; /*0x6fd9c8*/
        result = v15; /*0x6fd9cc*/
      }
      v14 = ++v4; /*0x6fd9d4*/
    }
    while ( v4 <= 1 ); /*0x6fd9d8*/
    v15 = ++result; /*0x6fd9e2*/
  }
  while ( result <= 1 ); /*0x6fd9e6*/
  return result; /*0x6fd9ec*/
}


// ==== 0x006FDA00  TechnoClass::GetFiringAngle  this=TechnoClass  sig=csp ====
int *TechnoClass::GetFiringAngle(TechnoClass *aP0, int a2, int a3, int _50, int *a4, int a6, int a7)
{
  TechnoClass *v7; // ecx
  int v8; // ebx
  int v9; // ebp
  int v10; // edi
  TechnoClass *v11; // esi
  int v12; // eax
  __int16 v13; // cx
  int *TargetCoords; // eax
  int v15; // edi
  int v16; // ebx
  int ebp2; // ebp
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  int v20; // edi
  ObjectTypeClass *v17; // edx
  void *v22; // ebp
  int v23; // eax
  _DWORD *v24; // edi
  int v25; // eax
  double v26; // st7
  void *v27; // ebx
  int WeaponRange; // edi
  char IsCloseEnoughToBuilding; // al
  int v31; // [esp+4h] [ebp-3Ch]
  double v32; // [esp+8h] [ebp-38h]
  int v33; // [esp+14h] [ebp-2Ch]
  int v34; // [esp+18h] [ebp-28h]
  int v35; // [esp+1Ch] [ebp-24h]
  int v36; // [esp+24h] [ebp-1Ch] BYREF
  double FiringDistance; // [esp+28h] [ebp-18h]
  int v38; // [esp+34h] [ebp-Ch] BYREF
  int v39; // [esp+38h] [ebp-8h]
  int v40; // [esp+3Ch] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+40h] [ebp+0h]
  int *a4a; // [esp+54h] [ebp+14h]

  v11 = v7; /*0x6fda04*/
  v12 = (*(int (**)(void))(*(_DWORD *)v7->__pad_0 + 132))(); /*0x6fda08*/
  LOBYTE(v13) = 0; /*0x6fda0e*/
  HIBYTE(v13) = *(_BYTE *)(v12 + 976); /*0x6fda10*/
  LOWORD(v36) = v13; /*0x6fda1c*/
  if ( a2 ) /*0x6fda21*/
  {
    v35 = v8; /*0x6fda27*/
    v34 = v9; /*0x6fda28*/
    v33 = v10; /*0x6fda2d*/
    TargetCoords = TechnoClass::GetTargetCoords((AbstractClass **)v11, &v38); /*0x6fda31*/
    v15 = *TargetCoords; /*0x6fda36*/
    v16 = TargetCoords[1]; /*0x6fda3a*/
    ebp2 = TargetCoords[2]; /*0x6fda3d*/
    v18 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, int, int, int))(*(_DWORD *)v11->__pad_0 + 132))( /*0x6fda42*/
                      v11,
                      v33,
                      v34,
                      v35);
    if ( HouseClass::HasPower(v18) ) /*0x6fda4a*/
      a4a = *(int **)&v11->__pad_115[35]; /*0x6fda59*/
    else
      a4a = 0; /*0x6fda5f*/
    v19 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, int *, int *))(*(_DWORD *)v11->__pad_0 + 768))(v11, &v38, a4a); /*0x6fda75*/
    v20 = v15 - *v19; /*0x6fda82*/
    v17 = *(ObjectTypeClass **)v11->__pad_0; /*0x6fda84*/
    v40 = v16 - v19[1]; /*0x6fda86*/
    v22 = (void *)(ebp2 - v19[2]); /*0x6fda8f*/
    v39 = v20; /*0x6fda91*/
    retaddr = v22; /*0x6fda95*/
    v23 = (*(int (__thiscall **)(TechnoClass *, int))&v17[1].__pad_14D[23])(v11, a3); /*0x6fda9e*/
    v24 = *(_DWORD **)v23; /*0x6fdaa4*/
    v25 = *(_DWORD *)(*(_DWORD *)v23 + 160); /*0x6fdab1*/
    FiringDistance = (double)*(int *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5816); /*0x6fdab9*/
    if ( v25 && *(_BYTE *)(v25 + 661) ) /*0x6fdabf*/
      FiringDistance = RulesClass::GetFiringDistance(); /*0x6fdace*/
    v26 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(pow((double)v38, 2.0) + pow((double)v39, 2.0))); /*0x6fdaf8*/
    v27 = (void *)Math::RoundToInt(v26); /*0x6fdb05*/
    WeaponRange = TechnoClass::GetWeaponRange(v24, v27); /*0x6fdb17*/
    v32 = FiringDistance; /*0x6fdb23*/
    v31 = v40; /*0x6fdb24*/
    IsCloseEnoughToBuilding = TechnoClass::IsCloseEnoughToBuilding(v11, a3); /*0x6fdb29*/
    if ( ComputeMathFacingAngle(IsCloseEnoughToBuilding, WeaponRange, (int)v27, v31, v32, &v36) ) /*0x6fdb32*/
    {
      *(_DWORD *)aP0->__pad_0 = v36; /*0x6fdb5f*/
      return (int *)aP0->__pad_0; /*0x6fdb56*/
    }
    else
    {
      LOWORD(a2) = -8192; /*0x6fdb42*/
      *(_DWORD *)aP0->__pad_0 = a2; /*0x6fdb4e*/
      return (int *)aP0->__pad_0; /*0x6fdb3e*/
    }
  }
  else
  {
    *(_DWORD *)aP0->__pad_0 = v36; /*0x6fdb70*/
    return (int *)aP0->__pad_0; /*0x6fdb67*/
  }
}


// ==== 0x006FDB80  TechnoClass::ComputeAudioFalloffDamage  this=IUnknown  sig=csp ====
int __thiscall sub_6FDB80(void *this, int a2, int a3)
{
  int result; // eax
  int v6; // ebx
  _DWORD *v7; // eax
  double v8; // st7
  int v9; // ebx
  int v10; // ebp
  int v11; // eax
  int v12; // [esp+14h] [ebp+4h]

  if ( !a2 ) /*0x6fdb8d*/
    return 0; /*0x6fdb8d*/
  result = *(_DWORD *)(a3 + 164); /*0x6fdb9d*/
  if ( *(_BYTE *)(a3 + 304) || *(_BYTE *)(a3 + 297) ) /*0x6fdbaf*/
    return 0; /*0x6fdd38*/
  if ( result > 0 ) /*0x6fdbbf*/
  {
    v12 = Math::RoundToInt(*(double *)(this->q21C + 392) * *((double *)this + 44) * (double)*(int *)(a3 + 164)); /*0x6fdbe8*/
    if ( VeterancyStruct::IsVeteran((float *)this + 84) || VeterancyStruct::IsElite((float *)this + 84) ) /*0x6fdbf9*/
    {
      if ( (v6 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 132))(this), /*0x6fdc38*/
            VeterancyStruct::IsVeteran((float *)this + 84))
        && *(_BYTE *)(v6 + 670)
        || VeterancyStruct::IsElite((float *)this + 84) && (*(_BYTE *)(v6 + 670) || *(_BYTE *)(v6 + 688)) )
      {
        v12 = Math::RoundToInt((double)v12 * *(double *)&MEMORY[0x8871E0]->GameForming); /*0x6fdc56*/
      }
    }
    v7 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 132))(this); /*0x6fdc66*/
    v8 = TechnoClass::GetDamageMultiplier((_DWORD *)*(_DWORD *)(a2 + 540), v7); /*0x6fdc73*/
    v9 = Math::RoundToInt((double)v12 / (v8 * *((double *)this + 43))); /*0x6fdc8d*/
    if ( VeterancyStruct::IsVeteran((float *)(a2 + 336)) || VeterancyStruct::IsElite((float *)(a2 + 336)) ) /*0x6fdca0*/
    {
      if ( (v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2), VeterancyStruct::IsVeteran((float *)(a2 + 336))) /*0x6fdcdf*/
        && *(_BYTE *)(v10 + 669)
        || VeterancyStruct::IsElite((float *)(a2 + 336)) && (*(_BYTE *)(v10 + 669) || *(_BYTE *)(v10 + 687)) )
      {
        v9 = Math::RoundToInt((double)v9 / *(double *)&MEMORY[0x8871E0]->?); /*0x6fdcfe*/
      }
    }
    if ( v9 < 1 ) /*0x6fdd03*/
      v9 = 1; /*0x6fdd05*/
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 136))(a2); /*0x6fdd10*/
    return ComputeTechnoClassDamageFalloff(v9, *(_DWORD *)(a3 + 172), *(_DWORD *)(v11 + 156), 0); /*0x6fdd29*/
  }
  return result; /*0x6fdd30*/
}


// ==== 0x006FF950  nullsub_45  this=-  sig=ida-proto ====
void __cdecl nullsub_45()
{
  ; /*0x6ff950*/
}


// ==== 0x006FF960  TechnoClass::DrawTargetLine  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass_DrawTargetLine(int *this)
{
  int v2; // eax
  _DWORD *v3; // eax
  int *TargetCoords; // eax
  int v5; // esi
  int *v6; // eax
  int *v7; // eax
  int v8; // edi
  int *v9; // eax
  int v10; // eax
  int v12; // [esp+18h] [ebp-84h] BYREF
  int v13; // [esp+1Ch] [ebp-80h]
  int v14; // [esp+20h] [ebp-7Ch] BYREF
  int v15; // [esp+24h] [ebp-78h]
  int v16; // [esp+28h] [ebp-74h] BYREF
  int v17; // [esp+2Ch] [ebp-70h]
  int v18; // [esp+30h] [ebp-6Ch]
  int v19; // [esp+34h] [ebp-68h]
  int v20; // [esp+38h] [ebp-64h] BYREF
  int v21; // [esp+3Ch] [ebp-60h]
  int v22; // [esp+40h] [ebp-5Ch]
  int v23; // [esp+44h] [ebp-58h]
  int v24[3]; // [esp+48h] [ebp-54h] BYREF
  _DWORD v25[3]; // [esp+54h] [ebp-48h] BYREF
  _DWORD v26[3]; // [esp+60h] [ebp-3Ch] BYREF
  int v27[4]; // [esp+6Ch] [ebp-30h] BYREF
  _DWORD v28[4]; // [esp+7Ch] [ebp-20h] BYREF
  _DWORD v29[4]; // [esp+8Ch] [ebp-10h] BYREF

  v2 = this->sprayOffsetIndex_e; /*0x6ff96a*/
  if ( v2 )
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(int *, int *, _DWORD))(*this + 768))(this, v24, 0); /*0x6ff983*/
    v26[0] = *v3; /*0x6ff98b*/
    v26[1] = v3[1]; /*0x6ff992*/
    v26[2] = v3[2]; /*0x6ff9a0*/
    TargetCoords = TechnoClass::GetTargetCoords(this, v24); /*0x6ff9a4*/
    v25[0] = *TargetCoords; /*0x6ff9ab*/
    v25[1] = TargetCoords[1]; /*0x6ff9bd*/
    v25[2] = TargetCoords[2]; /*0x6ff9c9*/
    Coord::To_Screen(MEMORY[0x887324], v26, &v12); /*0x6ff9cd*/
    Coord::To_Screen(MEMORY[0x887324], v25, &v14); /*0x6ff9e2*/
    v13 += MEMORY[0x886FA4]; /*0x6ff9fd*/
    v15 += MEMORY[0x886FA4]; /*0x6ffa01*/
    v5 = *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1
       ? *(unsigned __int8 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 8)
       : *(unsigned __int16 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 16);
    v24[1] = v13 - 2; /*0x6ffa3a*/
    v24[0] = v12 - 2; /*0x6ffa48*/
    v6 = Rect::Construct(v29, v24, 3, 3); /*0x6ffa4c*/
    v20 = *v6; /*0x6ffa55*/
    v21 = v6[1]; /*0x6ffa5e*/
    v22 = v6[2]; /*0x6ffa65*/
    v23 = v6[3]; /*0x6ffa74*/
    v7 = ClipRectIntersection(v28, &MEMORY[0x886FA0], &v20, 0, 0); /*0x6ffa7e*/
    v16 = *v7; /*0x6ffa86*/
    v17 = v7[1]; /*0x6ffa8d*/
    v18 = v7[2]; /*0x6ffa94*/
    v19 = v7[3]; /*0x6ffaa1*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(MEMORY[0x887314], &v16, v5); /*0x6ffaac*/
    v8 = *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1
       ? *(unsigned __int8 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 8)
       : *(unsigned __int16 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 16);
    v18 = 3; /*0x6ffae7*/
    v17 = v15 - 2; /*0x6ffaf6*/
    v16 = v14 - 2; /*0x6ffb04*/
    v19 = 3; /*0x6ffb08*/
    v9 = ClipRectIntersection(v28, &MEMORY[0x886FA0], &v16, 0, 0); /*0x6ffb0c*/
    v20 = *v9; /*0x6ffb14*/
    v21 = v9[1]; /*0x6ffb1b*/
    v22 = v9[2]; /*0x6ffb22*/
    v23 = v9[3]; /*0x6ffb2f*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(MEMORY[0x887314], &v20, v8); /*0x6ffb3a*/
    v27[1] = MEMORY[0x886FA4]; /*0x6ffb4e*/
    v27[0] = MEMORY[0x886FA0]; /*0x6ffb56*/
    v27[2] = MEMORY[0x886FA8]; /*0x6ffb5f*/
    v27[3] = MEMORY[0x886FAC]; /*0x6ffb6c*/
    LOBYTE(v2) = ClipLine(&v12, &v14, v27); /*0x6ffb70*/
    if ( (_BYTE)v2 ) /*0x6ffb77*/
    {
      if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x6ffb82*/
        v10 = *(unsigned __int8 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 8); /*0x6ffb8c*/
      else
        v10 = *(unsigned __int16 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 16); /*0x6ffb99*/
      LOBYTE(v2) = (*(int (__stdcall **)(int *, int *, int, void *, int))(*(_DWORD *)MEMORY[0x887314] + 72))( /*0x6ffbd2*/
                     &v12,
                     &v14,
                     v10,
                     &MEMORY[0x84310C],
                     7 * (int)MEMORY[0xA8ED84] % 16);
    }
  }
  return v2; /*0x6ffbd5*/
}


// ==== 0x006FFBE0  TechnoClass::ExecuteMissionCmd  this=TechnoClass  sig=csp ====
int __thiscall ScriptAction::ExecuteMissionCmd(#377 *this)
{
  bool v2; // al
  int v3; // edi
  _BYTE *WaypointCoords; // eax
  int result; // eax
  unsigned int v6; // ebx
  int v7; // eax
  _BYTE *v8; // eax
  int v9[27]; // [esp-70h] [ebp-108h] BYREF
  int v10; // [esp-4h] [ebp-9Ch]
  _DWORD v11[2]; // [esp+10h] [ebp-88h] BYREF
  _BYTE v12[8]; // [esp+18h] [ebp-80h] BYREF
  _BYTE v13[8]; // [esp+20h] [ebp-78h] BYREF
  char v14[108]; // [esp+28h] [ebp-70h] BYREF
  __int16 v15; // [esp+94h] [ebp-4h]
  char v16; // [esp+96h] [ebp-2h]
  int v17; // [esp+9Ch] [ebp+4h]
  IUnknown *v18; // [esp+A0h] [ebp+8h]
  IUnknown *v19; // [esp+A4h] [ebp+Ch]
  IUnknown *aP1; // [esp+A8h] [ebp+10h]

  v2 = Render_Draw_731BF0() && (*(unsigned __int8 (__thiscall **)(#377 *))(this->audioController5)(this); /*0x6ffc03*/
  v3 = v17; /*0x6ffc09*/
  if ( (v17 == 2 || v17 == 1) && v2 ) /*0x6ffc1c*/
    v3 = 29; /*0x6ffc1e*/
  if ( FactoryClass::GetFlag() ) /*0x6ffc23*/
  {
    ScriptAction::GetWaypointCoords(&v9[26], aP1); /*0x6ffc3d*/
    ScriptAction::GetWaypointCoords(&v9[24], v19); /*0x6ffc4f*/
    ScriptAction::GetWaypointCoords(&v9[22], v18); /*0x6ffc61*/
    WaypointCoords = ScriptAction::GetWaypointCoords(v12, (IUnknown *)this); /*0x6ffc6c*/
    ScriptAction::InitActionFields( /*0x6ffc8e*/
      v14,
      *(_DWORD *)(HouseClass_Player.field_0 + 48),
      *(_DWORD *)WaypointCoords,
      WaypointCoords[4],
      v3,
      v9[22],
      v9[23],
      v9[24],
      v9[25],
      v9[26],
      v10);
    qmemcpy(v9, v14, sizeof(v9)); /*0x6ffca4*/
    LOWORD(v10) = v15; /*0x6ffca6*/
    BYTE2(v10) = v16; /*0x6ffca8*/
    Object_Helper_637DD0( /*0x6ffca9*/
      v9[0],
      v9[1],
      v9[2],
      v9[3],
      v9[4],
      v9[5],
      v9[6],
      v9[7],
      v9[8],
      v9[9],
      v9[10],
      v9[11],
      v9[12],
      v9[13],
      v9[14],
      v9[15],
      v9[16],
      v9[17],
      v9[18],
      v9[19],
      v9[20],
      v9[21],
      v9[22],
      v9[23],
      v9[24],
      v9[25],
      v9[26],
      v10);
    LOBYTE(result) = 0; /*0x6ffcae*/
  }
  else
  {
    if ( g_MoveFeedback ) /*0x6ffccb*/
    {
      switch ( v3 ) /*0x6ffcd4*/
      {
        case 10: /*0x6ffcd4*/
          (*(void (__thiscall **)(#377 *))(*(_DWORD *)this + 860))(this); /*0x6ffcda*/
          break;
        case 1: /*0x6ffcd4*/
          (*(void (__thiscall **)(#377 *, IUnknown *))(this->barrelFacing)(this, v18); /*0x6ffcef*/
          break;
        case 2: /*0x6ffcd4*/
        case 29: /*0x6ffcd4*/
          (*(void (__thiscall **)(#377 *))(*(_DWORD *)this + 872))(this); /*0x6ffd9f*/
          break;
        case 7: /*0x6ffcd4*/
          (*(void (__thiscall **)(#377 *))(*(_DWORD *)this + 856))(this); /*0x6ffd15*/
          break;
        case 8: /*0x6ffcd4*/
          (*(void (__thiscall **)(#377 *))(this->unloadTimer)(this); /*0x6ffd29*/
          break;
        case 16: /*0x6ffcd4*/
          (*(void (__thiscall **)(#377 *))(*(_DWORD *)this + 876))(this); /*0x6ffd3a*/
          break;
        default:
          if ( *(int *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 1200) > 0 ) /*0x6ffd59*/
          {
            v6 = Random::State(&stru_87C374.__pad_579C[20600]); /*0x6ffd65*/
            v7 = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x6ffd6b*/
            v11[0] = *(_DWORD *)this; /*0x6ffd7b*/
            (*(void (__thiscall **)(#377 *, _DWORD))(v11[0] + 852))( /*0x6ffd93*/
              this,
              *(_DWORD *)(*(_DWORD *)(v7 + 1188) + 4 * (v6 % *(_DWORD *)(v7 + 1200))));
          }
          break;
      }
    }
    ScriptAction::GetWaypointCoords(v11, v19); /*0x6ffdb1*/
    ScriptAction::GetWaypointCoords(v12, v18); /*0x6ffdbb*/
    v8 = ScriptAction::GetWaypointCoords(v13, (IUnknown *)this); /*0x6ffdce*/
    Object_Init(v3, (int)v12, *(_DWORD *)v8, v8[4], (int)v11); /*0x6ffde6*/
    LOBYTE(result) = 1; /*0x6ffdee*/
  }
  return result; /*0x6ffcb0*/
}


// ==== 0x006FFE00  TechnoClass::RecordEvent  this=TechnoClass  sig=csp ====
int __thiscall NetworkClass::RecordEvent(#377 *this)
{
  _BYTE *WaypointCoords; // eax
  int result; // eax
  char *v3; // edi
  _BYTE v4[8]; // [esp+8h] [ebp-78h] BYREF
  char v5[108]; // [esp+10h] [ebp-70h] BYREF
  __int16 v6; // [esp+7Ch] [ebp-4h]
  char v7; // [esp+7Eh] [ebp-2h]
  unsigned __int8 v8; // [esp+84h] [ebp+4h]

  WaypointCoords = ScriptAction::GetWaypointCoords(v4, (IUnknown *)this); /*0x6ffe0a*/
  EventClass::Add( /*0x6ffe34*/
    v5,
    *(AbstractClass **)&HouseClass_Player->__pad_28[8],
    v8,
    *(_DWORD *)WaypointCoords,
    WaypointCoords[4]);
  if ( FactoryClass::GetFlag() ) /*0x6ffe39*/
  {
    result = NetworkClass::ExecutePlanningModeCmd(v5); /*0x6ffe46*/
    LOBYTE(result) = 0; /*0x6ffe4b*/
  }
  else
  {
    if ( Networking_LastEventIndex < 128 ) /*0x6ffe5f*/
    {
      v3 = &g_NetworkPacketIndex[111 * Networking_NextPacketIndex]; /*0x6ffe75*/
      qmemcpy(v3, v5, 0x6Cu); /*0x6ffe7c*/
      v3 += 108; /*0x6ffe7c*/
      *(_WORD *)v3 = v6; /*0x6ffe7e*/
      v3[2] = v7; /*0x6ffe80*/
      g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x6ffe8d*/
      Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x6ffe9d*/
      result = ++Networking_LastEventIndex; /*0x6ffea7*/
    }
    LOBYTE(result) = 1; /*0x6ffeae*/
  }
  return result; /*0x6ffe4d*/
}


// ==== 0x006FFEC0  TechnoClass::HandleCursorClick  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::HandleCursorClick(_BYTE *this, _BYTE *a1, TechnoClass *aP2)
{
  int v5; // ebx
  int v7; // eax
  char v8; // bl
  int v9; // ebp
  int v10; // edx
  int v11; // eax
  char v12; // bl
  char v13; // bl
  char v14; // al
  bool v15; // bl
  bool v16; // bl
  bool v17; // bl
  int v18; // ebx
  char v19; // [esp+14h] [ebp-Ch]
  char v20; // [esp+14h] [ebp-Ch]
  bool v21; // [esp+15h] [ebp-Bh]
  char v22; // [esp+16h] [ebp-Ah]
  int v23; // [esp+18h] [ebp-8h]
  int v24; // [esp+1Ch] [ebp-4h]
  char a1a; // [esp+24h] [ebp+4h]
  char a1b; // [esp+24h] [ebp+4h]
  char a1c; // [esp+24h] [ebp+4h]
  char aP2a; // [esp+28h] [ebp+8h]

  if ( this->chronoLockRemaining /*0x6ffefd*/
    || this->q0AA && !*(_BYTE *)((*(int (__thiscall **)(_BYTE *))(this->hasParachute)(this) + 1682)
    || !a1 )
  {
    return 0; /*0x6ffefd*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(this->drainTarget)(this) ) /*0x6fff07*/
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(this->isBerserk)(this) /*0x6fff40*/
      || !(unsigned __int8)House::IsHumanPlayer(*((#375 **)this + 135))
      || (v5 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 56))(a1),
          v5 == (*(int (__thiscall **)(_BYTE *))(this->attachedBomb)(this)) )
    {
      if ( (!this->isALoaner || !this->isOwnedByCurrentPlayer) /*0x6fff70*/
        && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 312))(a1)
        && !a1[131] )
      {
        return 7; /*0x6fff8a*/
      }
    }
    return 0; /*0x6fff78*/
  }
  if ( a1 == this && *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[476] == 1 ) /*0x6fff9c*/
  {
    v7 = *((_DWORD *)a1 + 14); /*0x6fff9e*/
    if ( v7 ) /*0x6fffa3*/
    {
      if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)(v7 + 40)) ) /*0x6fffa8*/
      {
        if ( BombClass::IsDeathBomb(*((_DWORD **)a1 + 14)) == 1 /*0x6fffc2*/
          && *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4053) )
        {
          return 55; /*0x6fffd8*/
        }
        if ( !BombClass::IsDeathBomb(*((_DWORD **)a1 + 14)) /*0x6fffed*/
          && *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4052) )
        {
          return 55; /*0x700003*/
        }
      }
    }
  }
  v8 = (char)aP2; /*0x700006*/
  if ( !(_BYTE)aP2 /*0x70002f*/
    && (Mouse::IsButtonDown(MEMORY[0xA8D63C].__pad_14B0[268]) || Mouse::IsButtonDown(MEMORY[0xA8D63C].__pad_14B0[272])) )
  {
    a1a = 1; /*0x700038*/
  }
  else
  {
    a1a = 0; /*0x700041*/
    if ( (_BYTE)aP2 ) /*0x700046*/
      goto LABEL_32; /*0x700046*/
  }
  if ( Mouse::IsButtonDown(MEMORY[0xA8D63C].__pad_14B0[276]) || Mouse::IsButtonDown(MEMORY[0xA8D63C].__pad_14B0[280]) ) /*0x700069*/
  {
    aP2a = 1; /*0x700072*/
LABEL_33:
    if ( Mouse::IsButtonDown(MEMORY[0xA8D63C].__pad_14B0[284]) || Mouse::IsButtonDown(MEMORY[0xA8D63C].__pad_14B0[288]) ) /*0x7000a3*/
    {
      if ( aP2a ) /*0x7000b2*/
      {
        aP2a = 0; /*0x7000b4*/
      }
      else if ( (unsigned __int8)House::IsHumanPlayer(*((#375 **)this + 135)) && !this->isALoaner ) /*0x7000fa*/
      {
        return 8; /*0x700110*/
      }
    }
    goto LABEL_37; /*0x7000b4*/
  }
LABEL_32:
  aP2a = 0; /*0x700079*/
  if ( !v8 ) /*0x700080*/
    goto LABEL_33; /*0x700080*/
LABEL_37:
  if ( a1 == this && *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[476] == 1 ) /*0x7000c7*/
  {
    if ( (unsigned __int8)House::IsHumanPlayer(*((#375 **)this + 135)) ) /*0x7000d3*/
      return 4; /*0x7000e8*/
    if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[476] == 1 /*0x700136*/
      && *(_BYTE *)(this->Owner + 493)
      && !MEMORY[0xA8B238]
      && this )
    {
      if ( (*(int (__thiscall **)(_BYTE *))(this->fallRate)(this) == 1 /*0x70015b*/
        && *(int *)(this->q1B1 + 1504) > 0
        && *((int *)this + 69) > 0 )
      {
        return 4; /*0x700169*/
      }
      if ( (*(int (__thiscall **)(_BYTE *))(this->fallRate)(this) == 2 && this->q6C9 ) /*0x700178*/
        return 4; /*0x70018e*/
    }
  }
  if ( !(unsigned __int8)House::IsHumanPlayer(*((#375 **)this + 135)) /*0x7001c2*/
    || !Object::IsAlliedWithObjectHouse(*((_DWORD **)this + 135), (IUnknown *)a1)
    || (*(int (__thiscall **)(_BYTE *))(this->fallRate)(this) == 2
    || !aP2a )
  {
    goto LABEL_62; /*0x7001c2*/
  }
  if ( a1a ) /*0x7001ca*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(this->locationY)(this) ) /*0x7001d0*/
      return 26; /*0x7001e6*/
LABEL_62:
    if ( a1a /*0x700204*/
      && (unsigned __int8)House::IsHumanPlayer(*((#375 **)this + 135))
      && (*(unsigned __int8 (__thiscall **)(_BYTE *))(this->locationY)(this) )
    {
      return 1; /*0x700217*/
    }
  }
  v24 = (*(int (__thiscall **)(_BYTE *))(this->hasParachute)(this); /*0x70021a*/
  v23 = (*(int (__thiscall **)(_BYTE *, _BYTE *))(this->spawnManager)(this, a1); /*0x700237*/
  if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 124))(a1) ) /*0x700240*/
    goto LABEL_141; /*0x700240*/
  v9 = *(_DWORD *)(*(int (__thiscall **)(_BYTE *, int))(this->q3F8)(this, v23); /*0x70025b*/
  if ( *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 3436) ) /*0x70025d*/
    goto LABEL_76; /*0x700265*/
  if ( (a1[20] & 1) != 0 ) /*0x70026b*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 132))(a1) + 3376) ) /*0x700277*/
      goto LABEL_76; /*0x70027f*/
    if ( (a1[20] & 1) != 0 ) /*0x700285*/
    {
      v10 = *((_DWORD *)a1 + 123); /*0x700287*/
      v11 = *((_DWORD *)a1 + 125); /*0x70028d*/
      if ( v10 == -1 ) /*0x700296*/
        goto LABEL_74; /*0x700296*/
      if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v10 < v11 ) /*0x7002a2*/
      {
        v11 -= *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v10; /*0x7002a4*/
LABEL_74:
        if ( !v11 ) /*0x7002a8*/
          goto LABEL_75; /*0x7002a8*/
LABEL_76:
        v12 = 1; /*0x7002ae*/
        goto LABEL_77; /*0x7002ae*/
      }
    }
  }
LABEL_75:
  v12 = 0; /*0x7002aa*/
LABEL_77:
  if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)a1 + 200))(a1, this->Owner) || v12 ) /*0x7002c7*/
  {
    a1b = 0; /*0x7002e2*/
    goto LABEL_82; /*0x7002e2*/
  }
  a1b = 1; /*0x7002cf*/
  if ( (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)a1 + 208))(a1, 1) ) /*0x7002d4*/
  {
LABEL_82:
    v13 = 0; /*0x7002e7*/
    goto LABEL_83; /*0x7002e7*/
  }
  v13 = 1; /*0x7002de*/
LABEL_83:
  v14 = (*(int (__thiscall **)(_BYTE *, _BYTE *))(this->isSpawned)(this, a1); /*0x7002e9*/
  v22 = v14; /*0x7002f8*/
  v21 = !a1b || v13 && v14; /*0x70030f*/
  if ( !v9 /*0x70034d*/
    || !*(_BYTE *)(*(_DWORD *)(v9 + 172) + 343)
    || !(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 132))(a1)
    || (v19 = 1, *(int *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 132))(a1) + 1504) <= 0) )
  {
    v19 = 0; /*0x70034f*/
  }
  v15 = v9 && *(_BYTE *)(*(_DWORD *)(v9 + 172) + 331) && (a1[20] & 4) != 0 && *((_DWORD *)a1 + 421); /*0x700381*/
  if ( *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(this->hasParachute)(this) + 1728) /*0x7003b9*/
    || *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(this->hasParachute)(this) + 1729) && !v19
    || v15 )
  {
    v15 = 1; /*0x7003bb*/
  }
  if ( !Object::IsAlliedWithObjectHouse(*((_DWORD **)this + 135), (IUnknown *)a1) || (v20 = 0, v15) ) /*0x7003d4*/
    v20 = 1; /*0x7003d6*/
  v16 = a1b && v15; /*0x7003e7*/
  if ( (unsigned __int8)House::IsHumanPlayer(*((#375 **)this + 135)) /*0x70043e*/
    && (aP2a
     || v20 && (v21 || v16) && (*(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 136))(a1) + 561) || v22)) )
  {
    v17 = (*(int (__thiscall **)(_BYTE *))(this->fallRate)(this) == 15 && *(_BYTE *)(v24 + 3774); /*0x70044e*/
    if ( ((*(unsigned __int8 (__thiscall **)(_BYTE *))(this->isBerserk)(this) || v17) /*0x700492*/
      && ((*(unsigned __int8 (__thiscall **)(_BYTE *))(this->locationY)(this)
       || (*(unsigned __int8 (__thiscall **)(_BYTE *, _BYTE *, int))(this->qEA0)(this, a1, v23)) )
    {
      a1c = 0; /*0x7004a2*/
      if ( v17 /*0x700527*/
        && (!*(_BYTE *)(this->airstrikeTimer + 3780)
         && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 44))(a1) == 6
         && *(_BYTE *)(*((_DWORD *)a1 + 328) + 5490)
         || *(_BYTE *)(this->airstrikeTimer + 3780)
         && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 44))(a1) == 6
         && *(_BYTE *)(*((_DWORD *)a1 + 328) + 5494)
         || *(_BYTE *)(this->airstrikeTimer + 3778)
         && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 44))(a1) == 6
         && *(_BYTE *)(*((_DWORD *)a1 + 328) + 5495)) )
      {
        a1c = 1; /*0x700531*/
      }
      if ( (*(int (__thiscall **)(_BYTE *, _BYTE *, int, int))(this->q0F0)(this, a1, v23, 1) != 5 /*0x70055b*/
        || a1c
        || aP2a )
      {
        return 5; /*0x700569*/
      }
    }
  }
LABEL_141:
  if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(this->isBerserk)(this) /*0x70059b*/
    || !(unsigned __int8)House::IsHumanPlayer(*((#375 **)this + 135))
    || (v18 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 56))(a1),
        v18 == (*(int (__thiscall **)(_BYTE *))(this->attachedBomb)(this)) )
  {
    if ( (!this->isALoaner || !this->isOwnedByCurrentPlayer) /*0x7005cd*/
      && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 312))(a1)
      && !a1[131]
      && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 468))(a1) )
    {
      return 7; /*0x7005e3*/
    }
  }
  return 0; /*0x6fff7e*/
}

