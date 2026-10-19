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
      if ( (int)dword_A8ED84 - v21 >= v22 ) /*0x6f033f*/
      {
        v28 = 0; /*0x6f0381*/
        goto LABEL_28; /*0x6f0389*/
      }
      v22 -= (int)dword_A8ED84 - v21; /*0x6f0341*/
    }
    v28 = v22; /*0x6f0343*/
LABEL_28:
    DefaultTimer = Super::GetDefaultTimer((_DWORD *)v7); /*0x6f0347*/
    if ( *(_BYTE *)(v7 + 109) && 1.0 - *(float *)&dword_8871E0->? >= (double)v28 / (double)DefaultTimer ) /*0x6f037d*/
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
int __thiscall FootClass::GetGameSpeedFromSession(FootClass *this)
{
  int v1; // eax
  int v3; // [esp+0h] [ebp-8h] BYREF

  v1 = *SessionClass::GetEntry((SessionClass *)this->?, &v3); /*0x6f03c0*/
  if ( v1 == 54 || v1 == 53 ) /*0x6f03ca*/
    return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5920); /*0x6f03e2*/
  else
    return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5916); /*0x6f03d2*/
}



// ==== 0x006F03F0  ObjectClass::method_6F03F0  this=ObjectClass  sig=csp ====
char __thiscall sub_6F03F0(ObjectClass *this)
{
  int *v1; // esi

  v1 = (int *)this->customSound_controller[1]; /*0x6f03f2*/
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
int TeamClass::StubReturn160(TeamClass *this)
{
  return 160; /*0x6f0435*/
}



// ==== 0x006F0440  TeamClass::StubReturn34  this=TeamClass  sig=csp ====
int TeamClass::StubReturn34(TeamClass *this)
{
  return 34; /*0x6f0445*/
}



// ==== 0x006F0450  TeamClass::ProcessEvent  this=TeamClass  sig=csp ====
void **__thiscall TeamClass::ProcessEvent(TeamClass *this, char a2)
{
  TeamClass::Destructor(this); /*0x6f0453*/
  if ( (a2 & 1) != 0 ) /*0x6f045d*/
    __3_YAXPAX_Z(this); /*0x6f0460*/
  return &this->AbstractClass; /*0x6f046a*/
}



// ==== 0x006F0470  sub_6F0470  this=-  sig=ida-proto ====
void sub_6F0470()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6f047c*/
  dbl_B0E9D0 = Math::Sqrt(v0 + v0); /*0x6f048e*/
}



// ==== 0x006F04A0  sub_6F04A0  this=-  sig=ida-proto ====
void sub_6F04A0()
{
  dbl_B0EA20 = dbl_B0E9D0 / 60.0; /*0x6f04ac*/
}



// ==== 0x006F04C0  sub_6F04C0  this=-  sig=ida-proto ====
void sub_6F04C0()
{
  dbl_B0EA08 = 1.0 / dbl_B0EA20; /*0x6f04cc*/
}



// ==== 0x006F04E0  sub_6F04E0  this=-  sig=ida-proto ====
void sub_6F04E0()
{
  dbl_B0EA00 = 0.0174532925199433 * 45.0; /*0x6f04ec*/
}



// ==== 0x006F0500  sub_6F0500  this=-  sig=ida-proto ====
void sub_6F0500()
{
  dbl_B0E9D8 = 0.0174532925199433 * 60.0; /*0x6f050c*/
}



// ==== 0x006F0520  sub_6F0520  this=-  sig=ida-proto ====
void sub_6F0520()
{
  dbl_B0E9B0 = 0.0174532925199433 * 90.0; /*0x6f052c*/
}



// ==== 0x006F0540  sub_6F0540  this=-  sig=ida-proto ====
__int64 sub_6F0540()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0E9B0 - dbl_B0E9D8); /*0x6f0552*/
  result = Math::RoundToInt(v0 * dbl_B0E9D0 * 0.5); /*0x6f0566*/
  dword_B0EA28 = result; /*0x6f056b*/
  return result; /*0x6f0570*/
}



// ==== 0x006F0580  sub_6F0580  this=-  sig=ida-proto ====
void sub_6F0580()
{
  dbl_B0E9E0 = Math::ArcTan((double)dword_B0EA28 * 0.00390625); /*0x6f0597*/
}



// ==== 0x006F05B0  sub_6F05B0  this=-  sig=ida-proto ====
void sub_6F05B0()
{
  dbl_B0E9F8 = Math::ArcTan((double)(2 * dword_B0EA28) / dbl_B0E9D0); /*0x6f05d2*/
}



// ==== 0x006F05E0  sub_6F05E0  this=-  sig=ida-proto ====
__int64 sub_6F05E0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0EA28) + 0.5); /*0x6f05fb*/
  dword_B0EA1C = result; /*0x6f0600*/
  return result; /*0x6f0606*/
}



// ==== 0x006F0610  sub_6F0610  this=-  sig=ida-proto ====
int sub_6F0610()
{
  dword_B0E9C8 = 0; /*0x6f0612*/
  return 0; /*0x6f061e*/
}



// ==== 0x006F0620  sub_6F0620  this=-  sig=ida-proto ====
int sub_6F0620()
{
  dword_B0E9E8 = 0; /*0x6f0622*/
  dword_B0E9EC = 0; /*0x6f0627*/
  dword_B0E9F0 = 0; /*0x6f062c*/
  return 0; /*0x6f0631*/
}



// ==== 0x006F0640  sub_6F0640  this=-  sig=ida-proto ====
int sub_6F0640()
{
  dword_B0EA18 = 0; /*0x6f0645*/
  dword_B0EA10 = 128; /*0x6f064f*/
  dword_B0EA14 = 128; /*0x6f0654*/
  return 128; /*0x6f0659*/
}



// ==== 0x006F0660  sub_6F0660  this=-  sig=ida-proto ====
int sub_6F0660()
{
  dword_B0E9B8 = 0; /*0x6f0662*/
  dword_B0E9BC = 0; /*0x6f0667*/
  dword_B0E9C0 = 0; /*0x6f066c*/
  dword_B0E9C4 = 0; /*0x6f0671*/
  return 0; /*0x6f0676*/
}



// ==== 0x006F06E0  TeamTypeClass::LoadBase  this=TeamTypeClass  sig=csp ====
_DWORD *__thiscall TechnoTypeClass::LoadBase(TeamTypeClass *this, char *Source)
{
  int v3; // ecx
  char v4; // al
  int v5; // eax
  TeamTypeClass **v6; // edx
  int v7; // eax

  AbstractTypeClass::Constructor((int *)this, Source); /*0x6f06ea*/
  *((_DWORD *)this + 38) = -1; /*0x6f06f7*/
  *((_DWORD *)this + 39) = -1; /*0x6f06ff*/
  this->TeamTypeClass_field_28 = 1; /*0x6f0705*/
  this->pad_29 = 0; /*0x6f070b*/
  *((_DWORD *)this + 42) = 0; /*0x6f0723*/
  this->q02B = 0; /*0x6f073b*/
  this->TeamTypeClass_field_2C = 0; /*0x6f0753*/
  *((_DWORD *)this + 45) = 7; /*0x6f076b*/
  *((_DWORD *)this + 46) = -1; /*0x6f0775*/
  this->q02F = 0; /*0x6f077b*/
  this->TeamTypeClass_field_30 = 0; /*0x6f0781*/
  this->q031 = 0; /*0x6f0787*/
  *((_DWORD *)this + 50) = -1; /*0x6f078d*/
  this->alignmentPadding = 0; /*0x6f0793*/
  this->TeamTypeClass_field_34 = 0; /*0x6f0799*/
  *((_DWORD *)this + 53) = -1; /*0x6f079f*/
  *((_DWORD *)this + 54) = -1; /*0x6f07a5*/
  *((_DWORD *)this + 55) = 0; /*0x6f07ab*/
  this->TeamTypeClass_field_38 = 0; /*0x6f07b1*/
  *((_DWORD *)this + 57) = 0; /*0x6f07b7*/
  this->q03A = 0; /*0x6f07bd*/
  this->q03B = 9; /*0x6f07c3*/
  this->TeamTypeClass_field_3C = 1; /*0x6f07cd*/
  *((_BYTE *)this + 241) = 0; /*0x6f07d3*/
  *((_BYTE *)this + 242) = 0; /*0x6f07d9*/
  *((_BYTE *)this + 243) = 0; /*0x6f07df*/
  this->UINameLabel = 0; /*0x6f07e5*/
  *((_BYTE *)this + 245) = 1; /*0x6f07eb*/
  *((_BYTE *)this + 246) = 0; /*0x6f07f1*/
  *((_BYTE *)this + 247) = 0; /*0x6f07f7*/
  this->AbstractClass = &TeamTypeClass::`vftable'; /*0x6f07fd*/
  this->? = &TeamTypeClass::`vftable'; /*0x6f0803*/
  this->? = &TeamTypeClass::`vftable'; /*0x6f080a*/
  this->? = &TeamTypeClass::`vftable'; /*0x6f0811*/
  v3 = *(_DWORD *)&stru_A8EB00.?[204]; /*0x6f0818*/
  if ( *(int *)&stru_A8EB00.?[204] < *(int *)&stru_A8EB00.?[196] /*0x6f0857*/
    || (stru_A8EB00.?[201] || !*(_DWORD *)&stru_A8EB00.?[196])
    && *(int *)&stru_A8EB00.?[208] > 0
    && (v4 = (*(int (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&stru_A8EB00.?[188] + 8))(
               &stru_A8EB00.?[188],
               *(_DWORD *)&stru_A8EB00.?[196] + *(_DWORD *)&stru_A8EB00.?[208],
               0),
        v3 = *(_DWORD *)&stru_A8EB00.?[204],
        v4) )
  {
    *(_DWORD *)&stru_A8EB00.?[204] = v3 + 1; /*0x6f085c*/
    *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v3) = this; /*0x6f0868*/
    v3 = *(_DWORD *)&stru_A8EB00.?[204]; /*0x6f086b*/
  }
  v5 = 0; /*0x6f0871*/
  if ( v3 <= 0 ) /*0x6f0875*/
  {
LABEL_11:
    v5 = -1; /*0x6f0889*/
  }
  else
  {
    v6 = *(TeamTypeClass ***)&stru_A8EB00.?[192]; /*0x6f0877*/
    while ( *v6 != this ) /*0x6f087f*/
    {
      ++v5; /*0x6f0881*/
      ++v6; /*0x6f0882*/
      if ( v5 >= v3 ) /*0x6f0887*/
        goto LABEL_11; /*0x6f0887*/
    }
  }
  *((_DWORD *)this + 38) = v5; /*0x6f088b*/
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x6f08c5*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v7 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x6f08d2*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7) = this; /*0x6f08e1*/
  }
  return &this->AbstractClass; /*0x6f08e6*/
}



// ==== 0x006F09C0  TeamClass::CreateOneOf  this=TeamTypeClass  sig=csp ====
int __thiscall TeamClass::CreateOneOf(int this, TeamClass *a2)
{
  TeamClass *OwnerHouse; // edi
  int v4; // eax
  int v6; // eax

  Debug::Log(); /*0x6f09c9*/
  OwnerHouse = a2; /*0x6f09ce*/
  if ( !a2 ) /*0x6f09d7*/
  {
    OwnerHouse = *(TeamClass **)(this + 196); /*0x6f09d9*/
    if ( !OwnerHouse ) /*0x6f09e1*/
    {
      if ( !(unsigned __int8)BuildingType::IsSpecialType(*(void **)(this + 200)) ) /*0x6f09e9*/
        return 0; /*0x6f09e9*/
      OwnerHouse = (TeamClass *)BuildingType::FindOwnerHouse(*(void **)(this + 200)); /*0x6f09fd*/
      if ( !OwnerHouse ) /*0x6f0a01*/
        return 0; /*0x6f0a01*/
    }
  }
  if ( !dword_A8E7AC ) /*0x6f0a0a*/
  {
    v4 = *(_DWORD *)(this + 184); /*0x6f0a0c*/
    if ( v4 >= 0 ) /*0x6f0a14*/
    {
      if ( *(_DWORD *)&dword_A8B238 ) /*0x6f0a1e*/
      {
        if ( TeamClass::CountActiveTeamsForType(OwnerHouse, this) >= *(_DWORD *)(this + 184) ) /*0x6f0a3d*/
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
  return MissionClass::Construct(v6, this, (int)OwnerHouse, 0); /*0x6f0a28*/
}



// ==== 0x006F0A70  TeamTypeClass::DestroyAllInstances  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::DestroyAllInstances(TeamTypeClass *this)
{
  int result; // eax
  int i; // esi
  TeamTypeClass **v4; // ecx

  result = (int)FootClass_Array.?; /*0x6f0a70*/
  for ( i = 0; i < (int)FootClass_Array.?; ++i ) /*0x6f0a7d*/
  {
    v4 = (TeamTypeClass **)*((_DWORD *)&FootClass_Array.?->ObjectClass + i); /*0x6f0a84*/
    if ( this == v4[9] ) /*0x6f0a8a*/
    {
      if ( v4 ) /*0x6f0a8e*/
        ((void (__thiscall *)(TeamTypeClass **, int))(*v4)->?)(v4, 1); /*0x6f0a94*/
      --i; /*0x6f0a97*/
    }
    result = (int)FootClass_Array.?; /*0x6f0a98*/
  }
  return result; /*0x6f0aa2*/
}



// ==== 0x006F0AB0  AISelectTeamHouseClass  this=-  sig=csp ====
int __fastcall HouseClass_AI_SelectTeam(void ***a1, int a2, int a3)
{
  int v3; // esi
  int v5; // eax
  int v6; // ebx
  char *v7; // ecx
  int v8; // edx
  int v9; // ecx
  int WallPenetratorThreshold_high; // edx
  int *v11; // ecx
  int v12; // esi
  char *v13; // edi
  int v14; // ebp
  _DWORD *v15; // eax
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
  _DWORD *v31; // ebx
  int v32; // esi
  char *v33; // edi
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  _DWORD *v37; // eax
  int i; // eax
  int v39; // ecx
  int v40; // esi
  bool v41; // zf
  int v42; // eax
  void *v43; // eax
  int v44; // ecx
  int v45; // eax
  void ***v46; // ecx
  void *v47; // eax
  int v48; // edx
  int v50; // ecx
  char v51; // [esp+13h] [ebp-4Dh]
  _DWORD v53[2]; // [esp+18h] [ebp-48h] BYREF
  int v54; // [esp+20h] [ebp-40h]
  void ***v55; // [esp+24h] [ebp-3Ch]
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
  int v67; // [esp+5Ch] [ebp-4h]

  v3 = 0; /*0x6f0ab6*/
  v55 = a1; /*0x6f0ab9*/
  Team_Helper_6F2230(0, 0); /*0x6f0ac9*/
  v5 = *(_DWORD *)(a2 + 22016); /*0x6f0ace*/
  v56 = &TypeList<TeamTypeClass const *>::`vftable'; /*0x6f0ad4*/
  v54 = 0; /*0x6f0adf*/
  if ( v5 != -1 ) /*0x6f0ae3*/
    v54 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * v5]; /*0x6f0aee*/
  if ( Random::Range((_DWORD *)dword_A8B230 + 134, 1, 100) <= *(_DWORD *)(a2 + 22108) && *(_BYTE *)(a2 + 498) ) /*0x6f0b12*/
  {
    v6 = 0; /*0x6f0b26*/
    if ( dword_8B40F8 > 0 ) /*0x6f0b2a*/
    {
      v7 = (char *)dword_8B40EC; /*0x6f0b2c*/
      v8 = dword_8B40F8; /*0x6f0b32*/
      do /*0x6f0b4d*/
      {
        if ( *(_DWORD *)(*(_DWORD *)v7 + 44) == a2 ) /*0x6f0b39*/
        {
          ++v6; /*0x6f0b3e*/
          if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)v7 + 36) + 246) ) /*0x6f0b3f*/
            ++v3; /*0x6f0b48*/
        }
        v7 += 4; /*0x6f0b49*/
        --v8; /*0x6f0b4c*/
      }
      while ( v8 ); /*0x6f0b4d*/
    }
    v9 = 4 * *(_DWORD *)(a2 + 388); /*0x6f0b5b*/
    WallPenetratorThreshold_high = HIDWORD(dword_8871E0->?); /*0x6f0b5e*/
    LOBYTE(v53[0]) = 0; /*0x6f0b64*/
    if ( v6 < *(_DWORD *)(WallPenetratorThreshold_high + v9) || v3 < v6 / 2 ) /*0x6f0b77*/
    {
      if ( v3 > *(_DWORD *)(LODWORD(dword_8871E0->?) + v9) ) /*0x6f0bd4*/
        LOBYTE(v53[0]) = 1; /*0x6f0bd6*/
    }
    else
    {
      v11 = 0; /*0x6f0b79*/
      v12 = 0x7FFFFFFF; /*0x6f0b7b*/
      if ( dword_8B40F8 > 0 ) /*0x6f0b82*/
      {
        v13 = (char *)dword_8B40EC; /*0x6f0b84*/
        v14 = dword_8B40F8; /*0x6f0b8a*/
        do /*0x6f0bb6*/
        {
          v15 = *(_DWORD **)v13; /*0x6f0b90*/
          if ( *(_DWORD *)(*(_DWORD *)v13 + 44) == a2 && *(_BYTE *)(v15[9] + 246) && v15[20] < v12 ) /*0x6f0bac*/
          {
            v11 = *(int **)v13; /*0x6f0bae*/
            v12 = v15[20]; /*0x6f0bb0*/
          }
          v13 += 4; /*0x6f0bb2*/
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
    if ( v6 < *(_DWORD *)(HIDWORD(dword_8871E0->?) + 4 * *(_DWORD *)(a2 + 388)) ) /*0x6f0bf4*/
    {
      v17 = 0; /*0x6f0bfa*/
      Team_Helper_6F27F0(0, 0); /*0x6f0c02*/
      v62 = &DynamicVectorClass<DiscreteDistributionClass<AITriggerTypeClass>::DistributionObject<AITriggerTypeClass *>>::`vftable'; /*0x6f0c0b*/
      v66 = 10; /*0x6f0c13*/
      v65 = 0; /*0x6f0c1b*/
      v67 = 0; /*0x6f0c1f*/
      TeamTypeClass_28::ClearBuffer(&v62); /*0x6f0c23*/
      v51 = 0; /*0x6f0c2e*/
      if ( dword_A8B210 > 0 ) /*0x6f0c34*/
      {
        v18 = v53[0]; /*0x6f0c3a*/
        while ( 1 ) /*0x6f0c44*/
        {
          v19 = *((_DWORD *)dword_A8B204 + v17); /*0x6f0c44*/
          if ( !v19 || TriggerClass::EvaluateCondition(v19, (_DWORD *)a2, v54, v18) != 1 ) /*0x6f0c5f*/
            goto LABEL_34; /*0x6f0c5f*/
          v20 = Math::RoundToInt(*(double *)(v19 + 184)); /*0x6f0c6c*/
          if ( v20 == 5000 ) /*0x6f0c78*/
            break; /*0x6f0c78*/
          if ( !v51 ) /*0x6f0c9a*/
            goto LABEL_33; /*0x6f0c9a*/
LABEL_34:
          if ( ++v17 >= dword_A8B210 ) /*0x6f0cbe*/
            goto LABEL_35; /*0x6f0cbe*/
        }
        if ( !v51 ) /*0x6f0c7c*/
        {
          v51 = 1; /*0x6f0c86*/
          v67 = 0; /*0x6f0c8b*/
          ((void (__thiscall *)(void ***))v62[3])(&v62); /*0x6f0c93*/
        }
LABEL_33:
        v53[0] = v19; /*0x6f0c9c*/
        v53[1] = v20; /*0x6f0ca9*/
        Team_Helper_6F25E0(v53); /*0x6f0cad*/
        v67 += v20; /*0x6f0cb2*/
        goto LABEL_34; /*0x6f0cb2*/
      }
LABEL_35:
      v21 = 0; /*0x6f0cc4*/
      if ( !v67 ) /*0x6f0ccd*/
        goto LABEL_58; /*0x6f0ccd*/
      if ( !v65 ) /*0x6f0cd9*/
        goto LABEL_58; /*0x6f0cd9*/
      v22 = Random::Range((_DWORD *)dword_A8B230 + 134, 1, v67); /*0x6f0cee*/
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
      v62 = &VectorClass<DiscreteDistributionClass<AITriggerTypeClass>::DistributionObject<AITriggerTypeClass *>>::`vftable'; /*0x6f0dc2*/
      if ( v63 && v64 ) /*0x6f0dd8*/
        Team_Helper_6F26E0(v63, 3); /*0x6f0de0*/
    }
  }
  v31 = Block; /*0x6f0de5*/
  v32 = 0; /*0x6f0dee*/
  if ( dword_8B40F8 <= 0 ) /*0x6f0df2*/
  {
LABEL_71:
    for ( i = 0; i < v60; v31 = Block ) /*0x6f0e4b*/
    {
      v39 = v31[i++]; /*0x6f0e4d*/
      *(_BYTE *)(v39 + 169) = 1; /*0x6f0e51*/
    }
    v40 = (int)v55; /*0x6f0e64*/
    v41 = v55 == &v56; /*0x6f0e6e*/
    v55[1] = 0; /*0x6f0e70*/
    *(_DWORD *)(v40 + 8) = 0; /*0x6f0e73*/
    *(_BYTE *)(v40 + 12) = 1; /*0x6f0e76*/
    *(_BYTE *)(v40 + 13) = 0; /*0x6f0e7a*/
    *(_DWORD *)v40 = &VectorClass<TeamTypeClass const *>::`vftable'; /*0x6f0e7e*/
    if ( !v41 ) /*0x6f0e84*/
    {
      VectorClass::ClearAndFree3(v40); /*0x6f0e8c*/
      v42 = v58; /*0x6f0e92*/
      v41 = v58 == 0; /*0x6f0e96*/
      *(_DWORD *)(v40 + 8) = v58; /*0x6f0e98*/
      if ( v41 ) /*0x6f0e9b*/
      {
        *(_DWORD *)(v40 + 4) = 0; /*0x6f0f70*/
        *(_BYTE *)(v40 + 13) = 0; /*0x6f0f73*/
      }
      else
      {
        v43 = __2_YAPAXI_Z(4 * v42); /*0x6f0ea5*/
        *(_DWORD *)(v40 + 4) = v43; /*0x6f0eaf*/
        if ( v43 ) /*0x6f0eb2*/
        {
          v44 = *(_DWORD *)(v40 + 8); /*0x6f0eb8*/
          v45 = 0; /*0x6f0ebb*/
          *(_BYTE *)(v40 + 13) = 1; /*0x6f0ebf*/
          if ( v44 > 0 ) /*0x6f0ec3*/
          {
            do /*0x6f0edc*/
            {
              *(_DWORD *)(*(_DWORD *)(v40 + 4) + 4 * v45) = *((_DWORD *)Block + v45); /*0x6f0ed3*/
              ++v45; /*0x6f0ed9*/
            }
            while ( v45 < *(_DWORD *)(v40 + 8) ); /*0x6f0edc*/
          }
        }
      }
      v31 = Block; /*0x6f0f77*/
    }
    v50 = v61; /*0x6f0f7f*/
    *(_DWORD *)(v40 + 16) = v60; /*0x6f0f85*/
    *(_DWORD *)(v40 + 20) = v50; /*0x6f0f88*/
    *(_DWORD *)v40 = &TypeList<TeamTypeClass const *>::`vftable'; /*0x6f0f8b*/
    v56 = &VectorClass<TeamTypeClass const *>::`vftable'; /*0x6f0f91*/
    if ( v31 ) /*0x6f0f99*/
    {
      if ( v59 ) /*0x6f0fa1*/
        __3_YAXPAX_Z(v31); /*0x6f0fa4*/
    }
  }
  else
  {
    v33 = (char *)dword_8B40EC; /*0x6f0df4*/
    while ( 1 ) /*0x6f0dfa*/
    {
      v34 = *(_DWORD *)v33; /*0x6f0dfa*/
      if ( *(_DWORD *)(*(_DWORD *)v33 + 44) == a2 && (*(_BYTE *)(v34 + 123) || !*(_BYTE *)(v34 + 127)) ) /*0x6f0e0c*/
      {
        v35 = 0; /*0x6f0e17*/
        if ( v60 > 0 ) /*0x6f0e1b*/
          break; /*0x6f0e1b*/
      }
LABEL_70:
      ++v32; /*0x6f0e36*/
      v33 += 4; /*0x6f0e3c*/
      if ( v32 >= dword_8B40F8 ) /*0x6f0e41*/
        goto LABEL_71; /*0x6f0e41*/
    }
    v36 = *(_DWORD *)(v34 + 36); /*0x6f0e1d*/
    v37 = Block; /*0x6f0e20*/
    while ( v36 != *v37 ) /*0x6f0e24*/
    {
      ++v35; /*0x6f0e2e*/
      ++v37; /*0x6f0e2f*/
      if ( v35 >= v60 ) /*0x6f0e34*/
        goto LABEL_70; /*0x6f0e34*/
    }
    v60 = 0; /*0x6f0ee7*/
    if ( Block && v59 ) /*0x6f0ef3*/
    {
      __3_YAXPAX_Z(Block); /*0x6f0ef6*/
      Block = 0; /*0x6f0efe*/
    }
    v40 = (int)v55; /*0x6f0f02*/
    v46 = v55; /*0x6f0f0b*/
    v59 = 0; /*0x6f0f0d*/
    v58 = 0; /*0x6f0f12*/
    v55[1] = 0; /*0x6f0f16*/
    v46[2] = 0; /*0x6f0f19*/
    *((_BYTE *)v46 + 12) = 1; /*0x6f0f1c*/
    *((_BYTE *)v46 + 13) = 0; /*0x6f0f20*/
    *v46 = &VectorClass<TeamTypeClass const *>::`vftable'; /*0x6f0f24*/
    Team_Helper_6F2780(&v56); /*0x6f0f2a*/
    *(_DWORD *)v40 = &TypeList<TeamTypeClass const *>::`vftable'; /*0x6f0f2f*/
    v56 = &VectorClass<TeamTypeClass const *>::`vftable'; /*0x6f0f35*/
    v47 = Block; /*0x6f0f3d*/
    v48 = v61; /*0x6f0f45*/
    v41 = Block == 0; /*0x6f0f49*/
    *(_DWORD *)(v40 + 16) = v60; /*0x6f0f4b*/
    *(_DWORD *)(v40 + 20) = v48; /*0x6f0f4e*/
    if ( !v41 && v59 ) /*0x6f0f59*/
    {
      __3_YAXPAX_Z(v47); /*0x6f0f5c*/
      return v40; /*0x6f0f6d*/
    }
  }
  return v40; /*0x6f0f66*/
}



// ==== 0x006F0FC0  TeamTypeClass::FindByName  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::FindByName(TeamTypeClass *this)
{
  int v2; // esi

  if ( !this ) /*0x6f0fc6*/
    return 0; /*0x6f0fc6*/
  v2 = 0; /*0x6f0fcd*/
  if ( *(int *)&stru_A8EB00.?[204] <= 0 ) /*0x6f0fd1*/
    return 0; /*0x6f1010*/
  while ( _strcmpi((char *)this, (char *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v2) + 36)) /*0x6f1004*/
       && _strcmpi((char *)this, (char *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v2) + 100)) )
  {
    if ( ++v2 >= *(int *)&stru_A8EB00.?[204] ) /*0x6f100e*/
      return 0; /*0x6f100e*/
  }
  return *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v2); /*0x6f1010*/
}



// ==== 0x006F1030  TeamTypeClass::GetTeam  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::GetTeam(TeamTypeClass *this, int a2, int a3)
{
  int result; // eax
  int v4; // ecx

  result = a2; /*0x6f1030*/
  if ( this->TeamTypeClass_field_34 == a2 ) /*0x6f103f*/
    this->TeamTypeClass_field_34 = 0; /*0x6f1041*/
  if ( this->q031 == a2 ) /*0x6f104d*/
    this->q031 = 0; /*0x6f104f*/
  if ( *((_DWORD *)this + 57) == a2 ) /*0x6f105b*/
    *((_DWORD *)this + 57) = 0; /*0x6f105d*/
  if ( this->TeamTypeClass_field_38 == a2 ) /*0x6f1069*/
    this->TeamTypeClass_field_38 = 0; /*0x6f106b*/
  v4 = this->TeamTypeClass_field_38; /*0x6f1071*/
  if ( v4 ) /*0x6f1079*/
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 40))(v4, a2, a3); /*0x6f1083*/
  return result; /*0x6f1086*/
}



// ==== 0x006F1090  TeamTypeClass::LoadFromINI  this=TeamTypeClass  sig=csp ====
char __thiscall TeamTypeClass::LoadFromINI(TeamTypeClass *this, unsigned __int8 ***a2)
{
  int v3; // ecx
  int v4; // eax
  HouseClass *v5; // ebp
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
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  char *v26; // ebp
  char *v27; // eax
  int v28; // ecx
  int v29; // eax
  char v30; // al
  char v31; // cl
  char v32; // al
  char v33; // al
  char v34; // cl
  char v35; // al
  int v36; // ecx
  char *v37; // eax
  char *v38; // eax
  int *v39; // ebp
  int *ScriptType; // eax
  _DWORD *v41; // ebp
  _DWORD *TaskForce; // eax
  int v44; // [esp-Ch] [ebp-D4h]
  char v45; // [esp-Ch] [ebp-D4h]
  char v46; // [esp-Ch] [ebp-D4h]
  char v47; // [esp-Ch] [ebp-D4h]
  char v48; // [esp-Ch] [ebp-D4h]
  char v49; // [esp-Ch] [ebp-D4h]
  int v50; // [esp-Ch] [ebp-D4h]
  char v51; // [esp-Ch] [ebp-D4h]
  char v52; // [esp-Ch] [ebp-D4h]
  char v53[64]; // [esp+8h] [ebp-C0h] BYREF
  char Destination[128]; // [esp+48h] [ebp-80h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x6f10a3*/
  if ( !(unsigned __int8)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)this, a2) ) /*0x6f10b2*/
    return 0; /*0x6f10b2*/
  v3 = this->q031; /*0x6f10b8*/
  v4 = -1; /*0x6f10be*/
  if ( v3 ) /*0x6f10c3*/
    v4 = *(_DWORD *)(*(_DWORD *)(v3 + 52) + 184); /*0x6f10c8*/
  v5 = (HouseClass *)SuperWeaponTypeClass::FindOrCreate( /*0x6f10e1*/
                       (SuperWeaponTypeClass *)a2,
                       (unsigned __int8 *)&this->TeamTypeClass_field_24,
                       (unsigned __int8 *)&g_INI_Key_Special.SidebarImageFile[1],
                       v4);
  if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6f10e5*/
  {
    *((_DWORD *)this + 50) = v5; /*0x6f10ee*/
    this->q031 = 0; /*0x6f10f4*/
  }
  else if ( v5 != (HouseClass *)-1 ) /*0x6f1103*/
  {
    this->q031 = HouseClass::FindOwner(v5); /*0x6f110c*/
    *((_DWORD *)this + 50) = -1; /*0x6f1112*/
  }
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x6f112b*/
                    (bool *)a2,
                    (unsigned __int8 *)&this->TeamTypeClass_field_24,
                    (unsigned __int8 *)&g_INI_Key_TRUCKA.?[3],
                    this->TeamTypeClass_field_28);
  v44 = this->TeamTypeClass_field_30; /*0x6f1138*/
  this->TeamTypeClass_field_28 = Int_Overwrite; /*0x6f113f*/
  this->TeamTypeClass_field_30 = INIClass::ReadInt_Overwrite( /*0x6f114a*/
                             (bool *)a2,
                             (unsigned __int8 *)&this->TeamTypeClass_field_24,
                             (unsigned __int8 *)&g_INI_Key_TRUCKA.?[1],
                             v44);
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x6f115f*/
                     (int *)a2,
                     (unsigned __int8 *)&this->TeamTypeClass_field_24,
                     (unsigned __int8 *)g_INI_Key_TRUCKA.?,
                     this->pad_29);
  v8 = *((_BYTE *)this + 165); /*0x6f1164*/
  this->pad_29 = Bool_Overwrite; /*0x6f116a*/
  v9 = INIClass::ReadBool_Overwrite( /*0x6f1179*/
         (int *)a2,
         (unsigned __int8 *)&this->TeamTypeClass_field_24,
         (unsigned __int8 *)&g_INI_Key_TRUCKA.?,
         v8);
  v45 = *((_BYTE *)this + 166); /*0x6f1186*/
  *((_BYTE *)this + 165) = v9; /*0x6f118d*/
  *((_BYTE *)this + 166) = INIClass::ReadBool_Overwrite( /*0x6f1198*/
                             (int *)a2,
                             (unsigned __int8 *)&this->TeamTypeClass_field_24,
                             (unsigned __int8 *)&g_INI_Key_TRUCKA.?[1],
                             v45);
  v10 = INIClass::ReadBool_Overwrite( /*0x6f11ad*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)g_INI_Key_TRUCKA.?,
          *((_BYTE *)this + 167));
  v11 = *((_BYTE *)this + 169); /*0x6f11b2*/
  *((_BYTE *)this + 167) = v10; /*0x6f11b8*/
  v12 = INIClass::ReadBool_Overwrite( /*0x6f11c7*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?[1],
          v11);
  v46 = *((_BYTE *)this + 170); /*0x6f11d4*/
  *((_BYTE *)this + 169) = v12; /*0x6f11db*/
  *((_BYTE *)this + 170) = INIClass::ReadBool_Overwrite( /*0x6f11e6*/
                             (int *)a2,
                             (unsigned __int8 *)&this->TeamTypeClass_field_24,
                             (unsigned __int8 *)g_INI_Key_TRUCKA.?,
                             v46);
  v13 = INIClass::ReadBool_Overwrite( /*0x6f11fb*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?[14],
          *((_BYTE *)this + 171));
  v14 = this->TeamTypeClass_field_2C; /*0x6f1200*/
  *((_BYTE *)this + 171) = v13; /*0x6f1206*/
  v15 = INIClass::ReadBool_Overwrite( /*0x6f1215*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?[6],
          v14);
  v47 = *((_BYTE *)this + 177); /*0x6f1222*/
  this->TeamTypeClass_field_2C = v15; /*0x6f1229*/
  *((_BYTE *)this + 177) = INIClass::ReadBool_Overwrite( /*0x6f1234*/
                             (int *)a2,
                             (unsigned __int8 *)&this->TeamTypeClass_field_24,
                             (unsigned __int8 *)&g_INI_Key_TRUCKA.?[4],
                             v47);
  v16 = INIClass::ReadBool_Overwrite( /*0x6f1249*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?,
          *((_BYTE *)this + 168));
  v17 = this->q02B; /*0x6f124e*/
  *((_BYTE *)this + 168) = v16; /*0x6f1254*/
  v18 = INIClass::ReadBool_Overwrite( /*0x6f1263*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?[18],
          v17);
  v48 = *((_BYTE *)this + 175); /*0x6f1270*/
  this->q02B = v18; /*0x6f1277*/
  *((_BYTE *)this + 175) = INIClass::ReadBool_Overwrite( /*0x6f1282*/
                             (int *)a2,
                             (unsigned __int8 *)&this->TeamTypeClass_field_24,
                             (unsigned __int8 *)&g_INI_Key_TRUCKA.?[16],
                             v48);
  v19 = INIClass::ReadBool_Overwrite( /*0x6f1297*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?[12],
          *((_BYTE *)this + 174));
  v20 = *((_BYTE *)this + 173); /*0x6f129c*/
  *((_BYTE *)this + 174) = v19; /*0x6f12a2*/
  v21 = INIClass::ReadBool_Overwrite( /*0x6f12b1*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?[9],
          v20);
  v49 = *((_BYTE *)this + 179); /*0x6f12be*/
  *((_BYTE *)this + 173) = v21; /*0x6f12c5*/
  *((_BYTE *)this + 179) = INIClass::ReadBool_Overwrite( /*0x6f12d0*/
                             (int *)a2,
                             (unsigned __int8 *)&this->TeamTypeClass_field_24,
                             (unsigned __int8 *)&g_INI_Key_TRUCKA.?[6],
                             v49);
  v22 = INIClass::ReadInt_Overwrite( /*0x6f12e5*/
          (bool *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?[3],
          *((_DWORD *)this + 45));
  v23 = *((_DWORD *)this + 46); /*0x6f12ea*/
  *((_DWORD *)this + 45) = v22; /*0x6f12f0*/
  v24 = INIClass::ReadInt_Overwrite( /*0x6f12ff*/
          (bool *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?[2],
          v23);
  v50 = this->alignmentPadding; /*0x6f130c*/
  *((_DWORD *)this + 46) = v24; /*0x6f1313*/
  v25 = INIClass::ReadInt_Overwrite( /*0x6f1319*/
          (bool *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)g_INI_Key_TechLevel,
          v50);
  v26 = (char *)this->TeamTypeClass_field_34; /*0x6f131e*/
  this->alignmentPadding = v25; /*0x6f1324*/
  if ( INIClass::GetString( /*0x6f1341*/
         (INIClass *)a2,
         (unsigned __int8 *)&this->TeamTypeClass_field_24,
         (unsigned __int8 *)off_81728C,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v27 = TagTypeClass::FindOrCreate(Destination); /*0x6f134e*/
  }
  else
  {
    v27 = v26; /*0x6f1355*/
  }
  v28 = *((_DWORD *)this + 39); /*0x6f1357*/
  this->TeamTypeClass_field_34 = v27; /*0x6f135d*/
  v29 = INIClass::ReadInt_Overwrite( /*0x6f136c*/
          (bool *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)g_INI_Key_Group,
          v28);
  v51 = *((_BYTE *)this + 242); /*0x6f1379*/
  *((_DWORD *)this + 39) = v29; /*0x6f1380*/
  *((_BYTE *)this + 242) = INIClass::ReadBool_Overwrite( /*0x6f138b*/
                             (int *)a2,
                             (unsigned __int8 *)&this->TeamTypeClass_field_24,
                             (unsigned __int8 *)&g_INI_Key_TRUCKA.?[1],
                             v51);
  v30 = INIClass::ReadBool_Overwrite( /*0x6f13a0*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?,
          *((_BYTE *)this + 243));
  v31 = *((_BYTE *)this + 246); /*0x6f13a5*/
  *((_BYTE *)this + 243) = v30; /*0x6f13ab*/
  v32 = INIClass::ReadBool_Overwrite( /*0x6f13ba*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)g_INI_Key_IsBaseDefense,
          v31);
  v52 = *((_BYTE *)this + 247); /*0x6f13c7*/
  *((_BYTE *)this + 246) = v32; /*0x6f13ce*/
  *((_BYTE *)this + 247) = INIClass::ReadBool_Overwrite( /*0x6f13d9*/
                             (int *)a2,
                             (unsigned __int8 *)&this->TeamTypeClass_field_24,
                             (unsigned __int8 *)&g_INI_Key_TRUCKA.?[5],
                             v52);
  v33 = INIClass::ReadBool_Overwrite( /*0x6f13ee*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?[4],
          this->UINameLabel);
  v34 = *((_BYTE *)this + 245); /*0x6f13f3*/
  this->UINameLabel = v33; /*0x6f13f9*/
  v35 = INIClass::ReadBool_Overwrite( /*0x6f1408*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?[147],
          v34);
  v36 = *((_DWORD *)this + 53); /*0x6f140d*/
  *((_BYTE *)this + 245) = v35; /*0x6f141a*/
  v37 = Waypoint::To_String(v36); /*0x6f1420*/
  if ( INIClass::GetString( /*0x6f1435*/
         (INIClass *)a2,
         (unsigned __int8 *)&this->TeamTypeClass_field_24,
         (unsigned __int8 *)aWaypoint,
         v37,
         v53,
         64) > 0 )
    *((_DWORD *)this + 53) = String::To_Waypoint(v53); /*0x6f1440*/
  v38 = Waypoint::To_String(*((_DWORD *)this + 54)); /*0x6f1453*/
  if ( INIClass::GetString( /*0x6f1468*/
         (INIClass *)a2,
         (unsigned __int8 *)&this->TeamTypeClass_field_24,
         (unsigned __int8 *)&g_INI_Key_TRUCKA.?[127],
         v38,
         v53,
         64) > 0 )
    *((_DWORD *)this + 54) = String::To_Waypoint(v53); /*0x6f1473*/
  v39 = (int *)this->TeamTypeClass_field_38; /*0x6f1479*/
  if ( INIClass::GetString( /*0x6f1496*/
         (INIClass *)a2,
         (unsigned __int8 *)&this->TeamTypeClass_field_24,
         (unsigned __int8 *)&g_INI_Key_Special.?[8],
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    ScriptType = TeamTypeClass::CreateScriptType(Destination); /*0x6f14a3*/
  }
  else
  {
    ScriptType = v39; /*0x6f14aa*/
  }
  v41 = (_DWORD *)*((_DWORD *)this + 57); /*0x6f14ac*/
  this->TeamTypeClass_field_38 = ScriptType; /*0x6f14c9*/
  if ( INIClass::GetString( /*0x6f14cf*/
         (INIClass *)a2,
         (unsigned __int8 *)&this->TeamTypeClass_field_24,
         (unsigned __int8 *)aTaskforce,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    TaskForce = TeamTypeClass::FindOrCreateTaskForce(Destination); /*0x6f14dc*/
  }
  else
  {
    TaskForce = v41; /*0x6f14e3*/
  }
  *((_DWORD *)this + 57) = TaskForce; /*0x6f14e6*/
  if ( !TaskForce ) /*0x6f14ef*/
  {
    if ( dword_A8E8E0 <= 0 ) /*0x6f14f8*/
      return 0; /*0x6f14f8*/
    *((_DWORD *)this + 57) = *(_DWORD *)dword_A8E8D4; /*0x6f1501*/
  }
  if ( this->TeamTypeClass_field_38 ) /*0x6f1507*/
    return 1; /*0x6f1532*/
  if ( *(int *)&FootClass_Array.? > 0 ) /*0x6f1518*/
  {
    this->TeamTypeClass_field_38 = *(_DWORD *)FootClass_Array.?[5]; /*0x6f1522*/
    return 1; /*0x6f1522*/
  }
  return 0; /*0x6f1528*/
}



// ==== 0x006F1550  TeamTypeClass::GetMaxCount  this=TeamTypeClass  sig=csp ====
char __thiscall TeamTypeClass::GetMaxCount(TeamTypeClass *this, char *a2)
{
  int v3; // eax
  int v4; // ebp
  int *p_TeamTypeClass_field_24; // edi
  int v6; // eax
  char *v7; // eax
  char *v8; // eax
  int v9; // eax
  int v10; // esi

  if ( !AbstractTypeClass::WriteINI((AbstractTypeClass *)this, a2) ) /*0x6f1559*/
    return 0; /*0x6f185b*/
  v3 = this->q031; /*0x6f1566*/
  v4 = -1; /*0x6f156d*/
  if ( v3 ) /*0x6f1573*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)(v3 + 52) + 184); /*0x6f1578*/
  }
  else if ( (unsigned __int8)BuildingType::IsSpecialType(*((void **)this + 50)) ) /*0x6f1586*/
  {
    v4 = *((_DWORD *)this + 50); /*0x6f158f*/
  }
  p_TeamTypeClass_field_24 = &this->TeamTypeClass_field_24; /*0x6f159d*/
  INIClass::SetInt( /*0x6f15a9*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[3],
    this->TeamTypeClass_field_28,
    0);
  INIClass::SetInt( /*0x6f15bf*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[1],
    this->TeamTypeClass_field_30,
    0);
  INIClass::SetBool( /*0x6f15d3*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)g_INI_Key_TRUCKA.?,
    this->pad_29);
  INIClass::SetBool( /*0x6f15e7*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?,
    *((_BYTE *)this + 165));
  INIClass::SetBool( /*0x6f15fb*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[1],
    *((_BYTE *)this + 166));
  INIClass::SetBool( /*0x6f160f*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)g_INI_Key_TRUCKA.?,
    *((_BYTE *)this + 167));
  INIClass::SetHouseName( /*0x6f161d*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_Special.SidebarImageFile[1],
    (void *)v4);
  INIClass::SetBool( /*0x6f1631*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?,
    *((_BYTE *)this + 168));
  INIClass::SetBool( /*0x6f1645*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[1],
    *((_BYTE *)this + 169));
  INIClass::SetBool( /*0x6f1659*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)g_INI_Key_TRUCKA.?,
    *((_BYTE *)this + 170));
  INIClass::SetBool( /*0x6f166d*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &g_INI_Key_TRUCKA.?[14],
    *((_BYTE *)this + 171));
  INIClass::SetBool( /*0x6f1681*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &g_INI_Key_TRUCKA.?[6],
    this->TeamTypeClass_field_2C);
  INIClass::SetBool( /*0x6f1695*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &g_INI_Key_TRUCKA.?[4],
    *((_BYTE *)this + 177));
  INIClass::SetBool( /*0x6f16a9*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[18],
    this->q02B);
  INIClass::SetBool( /*0x6f16bd*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[12],
    *((_BYTE *)this + 174));
  INIClass::SetBool( /*0x6f16d1*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[9],
    *((_BYTE *)this + 173));
  INIClass::SetBool( /*0x6f16e5*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[16],
    *((_BYTE *)this + 175));
  INIClass::SetInt( /*0x6f16fb*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[3],
    *((_DWORD *)this + 45),
    0);
  INIClass::SetInt( /*0x6f1711*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[2],
    *((_DWORD *)this + 46),
    0);
  INIClass::SetInt(a2, (unsigned __int8 *)&this->TeamTypeClass_field_24, g_INI_Key_TechLevel, this->alignmentPadding, 0); /*0x6f1727*/
  INIClass::SetInt(a2, (unsigned __int8 *)&this->TeamTypeClass_field_24, g_INI_Key_Group, *((_DWORD *)this + 39), 0); /*0x6f173d*/
  INIClass::SetBool( /*0x6f1751*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[6],
    *((_BYTE *)this + 179));
  INIClass::SetBool( /*0x6f1765*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &g_INI_Key_TRUCKA.?[1],
    *((_BYTE *)this + 242));
  INIClass::SetBool(a2, (unsigned __int8 *)&this->TeamTypeClass_field_24, &g_INI_Key_TRUCKA.?, *((_BYTE *)this + 243)); /*0x6f1779*/
  INIClass::SetBool( /*0x6f178d*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &g_INI_Key_TRUCKA.?[4],
    this->UINameLabel);
  INIClass::SetBool( /*0x6f17a1*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &g_INI_Key_TRUCKA.?[147],
    *((_BYTE *)this + 245));
  INIClass::SetBool( /*0x6f17b5*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    g_INI_Key_IsBaseDefense,
    *((_BYTE *)this + 246));
  INIClass::SetBool( /*0x6f17c9*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &g_INI_Key_TRUCKA.?[5],
    *((_BYTE *)this + 247));
  v6 = this->TeamTypeClass_field_34; /*0x6f17ce*/
  if ( v6 ) /*0x6f17d6*/
    INIClass::SetString(a2, (unsigned __int8 *)&this->TeamTypeClass_field_24, off_81728C, (char *)(v6 + 36)); /*0x6f17e4*/
  v7 = Waypoint::To_String(*((_DWORD *)this + 53)); /*0x6f17ef*/
  INIClass::SetString(a2, (unsigned __int8 *)&this->TeamTypeClass_field_24, aWaypoint, v7); /*0x6f17fd*/
  v8 = Waypoint::To_String(*((_DWORD *)this + 54)); /*0x6f1808*/
  INIClass::SetString(a2, (unsigned __int8 *)&this->TeamTypeClass_field_24, &g_INI_Key_TRUCKA.?[127], v8); /*0x6f1816*/
  v9 = this->TeamTypeClass_field_38; /*0x6f181b*/
  if ( v9 ) /*0x6f1823*/
    INIClass::SetString( /*0x6f1831*/
      a2,
      (unsigned __int8 *)&this->TeamTypeClass_field_24,
      &g_INI_Key_Special.?[8],
      (char *)(v9 + 36));
  v10 = *((_DWORD *)this + 57); /*0x6f1836*/
  if ( v10 ) /*0x6f183e*/
    INIClass::SetString(a2, (unsigned __int8 *)p_TeamTypeClass_field_24, aTaskforce, (char *)(v10 + 36)); /*0x6f184c*/
  return 1; /*0x6f1853*/
}



// ==== 0x006F1870  TeamTypeClass::GetGroup  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::GetGroup(TeamTypeClass *this)
{
  int result; // eax
  int v2; // ecx

  result = *((_DWORD *)this + 39); /*0x6f1870*/
  if ( result == -1 ) /*0x6f1879*/
  {
    v2 = *((_DWORD *)this + 57); /*0x6f1880*/
    if ( v2 ) /*0x6f1888*/
      return *(_DWORD *)(v2 + 152); /*0x6f188a*/
  }
  return result; /*0x6f1890*/
}



// ==== 0x006F18A0  TechnoClass::GetWaypointCoords  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::GetWaypointCoords(TechnoClass *this, _DWORD *a2)
{
  int v2; // eax
  int v4; // ecx
  TechnoClass *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x6f18a0*/
  v2 = this->?[0]; /*0x6f18a1*/
  if ( v2 == -1 ) /*0x6f18aa*/
  {
    *a2 = *(_DWORD *)&g_BuildingLoadQueue_Array.?[59]; /*0x6f18b6*/
    return a2; /*0x6f18ac*/
  }
  else
  {
    v4 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v5, v2); /*0x6f18cd*/
    *a2 = v4; /*0x6f18d3*/
    return a2; /*0x6f18cf*/
  }
}



// ==== 0x006F18E0  TeamTypeClass::GetTransportWaypoint  this=TeamTypeClass  sig=csp ====
_DWORD *__thiscall TeamTypeClass::GetTransportWaypoint(TeamTypeClass *this, _DWORD *a2)
{
  int v2; // eax
  int v4; // ecx
  TeamTypeClass *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x6f18e0*/
  v2 = *((_DWORD *)this + 54); /*0x6f18e1*/
  if ( v2 == -1 ) /*0x6f18ea*/
  {
    *a2 = *(_DWORD *)&g_BuildingLoadQueue_Array.?[59]; /*0x6f18f6*/
    return a2; /*0x6f18ec*/
  }
  else
  {
    v4 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v5, v2); /*0x6f190d*/
    *a2 = v4; /*0x6f1913*/
    return a2; /*0x6f190f*/
  }
}



// ==== 0x006F1920  TechnoClass::Create  this=Coord  sig=csp ====
_DWORD *__thiscall TechnoClass::Create(char *Source)
{
  int v2; // esi
  TeamTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6f193c*/
    return 0; /*0x6f199f*/
  v2 = 0; /*0x6f194d*/
  if ( *(int *)&stru_A8EB00.?[204] <= 0 ) /*0x6f1951*/
  {
LABEL_6:
    v3 = (TeamTypeClass *)__2_YAPAXI_Z(0xF8u); /*0x6f1976*/
    if ( v3 ) /*0x6f1985*/
      return TechnoTypeClass::LoadBase(v3, Source); /*0x6f1991*/
    return 0; /*0x6f1985*/
  }
  while ( _strcmpi((char *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v2) + 36), Source) ) /*0x6f196a*/
  {
    if ( ++v2 >= *(int *)&stru_A8EB00.?[204] ) /*0x6f1974*/
      goto LABEL_6; /*0x6f1974*/
  }
  return *(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v2); /*0x6f198f*/
}



// ==== 0x006F19B0  SmallFunc_6F19B0  this=INIClass  sig=csp ====
int __fastcall SmallFunc_6F19B0(INIClass *a1, int a2)
{
  int result; // eax
  int v4; // ebp
  int i; // ebx
  unsigned __int8 *StringByIndex; // eax
  int v7; // esi
  TeamTypeClass *v8; // eax
  _DWORD *Base; // esi
  char Source[32]; // [esp+10h] [ebp-20h] BYREF

  result = INIClass::GetKeyCount(a1->__pad_0, (unsigned __int8 *)g_INI_Key_TRUCKA.?); /*0x6f19c1*/
  v4 = result; /*0x6f19c6*/
  for ( i = 0; i < v4; Base[58] = a2 ) /*0x6f19cc*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1->__pad_0, (unsigned __int8 *)g_INI_Key_TRUCKA.?, i); /*0x6f19db*/
    INIClass::GetString(a1, (unsigned __int8 *)g_INI_Key_TRUCKA.?, StringByIndex, &g_INI_DefaultBuffer, Source, 32); /*0x6f19f4*/
    if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6f1a19*/
      goto LABEL_10; /*0x6f1a19*/
    v7 = 0; /*0x6f1a2a*/
    if ( *(int *)&stru_A8EB00.?[204] > 0 ) /*0x6f1a2e*/
    {
      while ( _strcmpi((char *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v7) + 36), Source) ) /*0x6f1a4c*/
      {
        if ( ++v7 >= *(int *)&stru_A8EB00.?[204] ) /*0x6f1a56*/
          goto LABEL_7; /*0x6f1a56*/
      }
      Base = *(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v7); /*0x6f1a7f*/
      goto LABEL_11; /*0x6f1a82*/
    }
LABEL_7:
    v8 = (TeamTypeClass *)__2_YAPAXI_Z(0xF8u); /*0x6f1a5d*/
    if ( v8 ) /*0x6f1a67*/
      Base = TechnoTypeClass::LoadBase(v8, Source); /*0x6f1a75*/
    else
LABEL_10:
      Base = 0; /*0x6f1a84*/
LABEL_11:
    result = (*(int (__thiscall **)(_DWORD *, INIClass *))(*Base + 100))(Base, a1); /*0x6f1a86*/
    ++i; /*0x6f1a8e*/
  }
  return result; /*0x6f1aa2*/
}



// ==== 0x006F1AB0  TeamTypeClass::ReadScriptData  this=TeamTypeClass  sig=csp ====
int __fastcall TeamTypeClass::ReadScriptData(INIClass *a1, int a2)
{
  int KeyCount; // ebx
  int i; // edi
  unsigned __int8 *StringByIndex; // eax
  int result; // eax
  int v8; // ebx
  int j; // edi
  int v10; // [esp-4h] [ebp-34h]
  char Buffer[32]; // [esp+10h] [ebp-20h] BYREF

  KeyCount = INIClass::GetKeyCount(a1->__pad_0, (unsigned __int8 *)g_INI_Key_TRUCKA.?); /*0x6f1ac5*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6f1acb*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1->__pad_0, (unsigned __int8 *)g_INI_Key_TRUCKA.?, i); /*0x6f1ad5*/
    INIClass::GetString(a1, (unsigned __int8 *)g_INI_Key_TRUCKA.?, StringByIndex, &g_INI_DefaultBuffer, Buffer, 32); /*0x6f1aee*/
    INIClass::ClearSection((int *)a1->__pad_0, (int)Buffer, 0); /*0x6f1afc*/
  }
  INIClass::ClearSection((int *)a1->__pad_0, (int)g_INI_Key_TRUCKA.?, 0); /*0x6f1b0f*/
  result = *(_DWORD *)&stru_A8EB00.?[204]; /*0x6f1b14*/
  v8 = 0; /*0x6f1b19*/
  for ( j = 0; j < *(int *)&stru_A8EB00.?[204]; ++j ) /*0x6f1b1f*/
  {
    if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * j) + 232) == a2 ) /*0x6f1b2f*/
    {
      v10 = v8++; /*0x6f1b37*/
      sprintf(Buffer, "%d", v10); /*0x6f1b3f*/
      INIClass::SetString( /*0x6f1b5f*/
        a1->__pad_0,
        (unsigned __int8 *)g_INI_Key_TRUCKA.?,
        Buffer,
        (char *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * j) + 36));
      (*(void (__thiscall **)(_DWORD, INIClass *))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * j) + 104))( /*0x6f1b6f*/
        *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * j),
        a1);
    }
    result = *(_DWORD *)&stru_A8EB00.?[204]; /*0x6f1b72*/
  }
  return result; /*0x6f1b7c*/
}



// ==== 0x006F1B90  TeamTypeClass::SaveToINI  this=TeamTypeClass  sig=csp ====
int __stdcall TeamTypeClass::SaveToINI(TeamTypeClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6f1b9f*/
  if ( result >= 0 ) /*0x6f1ba6*/
    return 0; /*0x6f1ba8*/
  return result; /*0x6f1baa*/
}



// ==== 0x006F1BB0  TeamTypeClass::LoadTypeData  this=TeamTypeClass  sig=csp ====
int __stdcall TeamTypeClass::LoadTypeData(TeamTypeClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6f1bbb*/
  if ( result >= 0 ) /*0x6f1bc2*/
  {
    if ( this ) /*0x6f1bc6*/
    {
      AbstractTypeClass::Init((int)this, (int)&a2); /*0x6f1bcf*/
      this->AbstractClass = &TeamTypeClass::`vftable'; /*0x6f1bd4*/
      this->? = &TeamTypeClass::`vftable'; /*0x6f1bda*/
      this->? = &TeamTypeClass::`vftable'; /*0x6f1be1*/
      this->? = &TeamTypeClass::`vftable'; /*0x6f1be8*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 49); /*0x6f1bfb*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 52); /*0x6f1c0c*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 56); /*0x6f1c1d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 57); /*0x6f1c2e*/
    return 0; /*0x6f1c33*/
  }
  return result; /*0x6f1c35*/
}



// ==== 0x006F1C40  TeamTypeClass::GetClassIdentifier  this=TeamTypeClass  sig=csp ====
int __stdcall TeamTypeClass::GetClassIdentifier(TeamTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6f1c46*/
    return -2147467261; /*0x6f1c48*/
  *a2 = -774134194; /*0x6f1c56*/
  a2[1] = 298977144; /*0x6f1c5e*/
  a2[2] = 1610655148; /*0x6f1c67*/
  a2[3] = unk_7E978C; /*0x6f1c70*/
  return 0; /*0x6f1c4d*/
}



// ==== 0x006F1C80  TeamTypeClass::PowerDrainUpdate  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::PowerDrainUpdate(TeamTypeClass *this, int *a2)
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

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x6f1c89*/
  Power::TimerProcess(*((_DWORD *)this + 39)); /*0x6f1c97*/
  LOBYTE(v3) = *((_BYTE *)this + 168); /*0x6f1c9c*/
  Power::FlagProcess((Power *)a2, v3); /*0x6f1ca5*/
  LOBYTE(v4) = *((_BYTE *)this + 169); /*0x6f1caa*/
  v5 = Power::FlagProcess((Power *)a2, v4); /*0x6f1cb3*/
  LOBYTE(v5) = *((_BYTE *)this + 170); /*0x6f1cb8*/
  Power::FlagProcess((Power *)a2, v5); /*0x6f1cc1*/
  LOBYTE(v6) = *((_BYTE *)this + 171); /*0x6f1cc6*/
  Power::FlagProcess((Power *)a2, v6); /*0x6f1ccf*/
  LOBYTE(v7) = this->q02B; /*0x6f1cd4*/
  v8 = Power::FlagProcess((Power *)a2, v7); /*0x6f1cdd*/
  LOBYTE(v8) = *((_BYTE *)this + 173); /*0x6f1ce2*/
  Power::FlagProcess((Power *)a2, v8); /*0x6f1ceb*/
  LOBYTE(v9) = *((_BYTE *)this + 174); /*0x6f1cf0*/
  Power::FlagProcess((Power *)a2, v9); /*0x6f1cf9*/
  LOBYTE(v10) = *((_BYTE *)this + 175); /*0x6f1cfe*/
  v11 = Power::FlagProcess((Power *)a2, v10); /*0x6f1d07*/
  LOBYTE(v11) = this->TeamTypeClass_field_2C; /*0x6f1d0c*/
  Power::FlagProcess((Power *)a2, v11); /*0x6f1d15*/
  LOBYTE(v12) = *((_BYTE *)this + 177); /*0x6f1d1a*/
  Power::FlagProcess((Power *)a2, v12); /*0x6f1d23*/
  Power::TimerProcess(*((_DWORD *)this + 45)); /*0x6f1d31*/
  Power::TimerProcess(*((_DWORD *)this + 46)); /*0x6f1d3f*/
  Power::TimerProcess(this->q02F); /*0x6f1d4d*/
  v13 = this->q031; /*0x6f1d52*/
  if ( v13 ) /*0x6f1d5a*/
  {
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13); /*0x6f1d5e*/
    Power::TimerProcess(v14); /*0x6f1d64*/
  }
  v15 = this->q031; /*0x6f1d69*/
  if ( v15 ) /*0x6f1d71*/
  {
    v16 = (*(int (__stdcall **)(int))(*(_DWORD *)(v15 + 4) + 16))(v15 + 4); /*0x6f1d7a*/
    Power::TimerProcess(v16); /*0x6f1d80*/
  }
  Power::TimerProcess(this->alignmentPadding); /*0x6f1d8e*/
  v17 = this->TeamTypeClass_field_34; /*0x6f1d93*/
  if ( v17 ) /*0x6f1d9b*/
  {
    v18 = (*(int (__stdcall **)(int))(*(_DWORD *)(v17 + 4) + 16))(v17 + 4); /*0x6f1da4*/
    Power::TimerProcess(v18); /*0x6f1daa*/
  }
  Power::TimerProcess(*((_DWORD *)this + 53)); /*0x6f1db8*/
  Power::TimerProcess(*((_DWORD *)this + 54)); /*0x6f1dc6*/
  Power::TimerProcess(*((_DWORD *)this + 55)); /*0x6f1dd4*/
  result = this->TeamTypeClass_field_38; /*0x6f1dd9*/
  if ( result ) /*0x6f1de1*/
  {
    v20 = (*(int (__stdcall **)(int))(*(_DWORD *)(result + 4) + 16))(result + 4); /*0x6f1dea*/
    result = Power::TimerProcess(v20); /*0x6f1df0*/
  }
  v21 = *((_DWORD *)this + 57); /*0x6f1df5*/
  if ( v21 ) /*0x6f1dfd*/
  {
    v22 = (*(int (__stdcall **)(int))(*(_DWORD *)(v21 + 4) + 16))(v21 + 4); /*0x6f1e06*/
    return Power::TimerProcess(v22); /*0x6f1e0c*/
  }
  return result; /*0x6f1e11*/
}



// ==== 0x006F1E20  TriggerClass::EvaluateObjectForTrigger  this=TriggerClass  sig=csp ====
bool __thiscall sub_6F1E20(int this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  bool result; // al

  v4 = *(_DWORD *)(a2 + 1492); /*0x6f1e28*/
  result = 0; /*0x6f1f1b*/
  if ( (!v4 || this != *(_DWORD *)(v4 + 36)) && *(int *)(a2 + 108) > 0 ) /*0x6f1e40*/
  {
    if ( *(_BYTE *)(a2 + 144) ) /*0x6f1e46*/
    {
      if ( !*(_BYTE *)(a2 + 129) && !Team::AllMembersValid((int *)a2) && *(_DWORD *)(a2 + 540) == a3 ) /*0x6f1e7d*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 388))(a2) == -1 /*0x6f1e9e*/
          || (v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 388))(a2), IPersistStream::SetField(v5)) )
        {
          if ( (*(_BYTE *)(a2 + 1057) || *(_BYTE *)(this + 169)) && (*(_BYTE *)(a2 + 1058) || !*(_BYTE *)(this + 169)) ) /*0x6f1ec5*/
          {
            v6 = *(_DWORD *)(a2 + 1492); /*0x6f1ecf*/
            if ( (!v6 || *(_DWORD *)(*(_DWORD *)(v6 + 36) + 180) < *(_DWORD *)(this + 180)) /*0x6f1f09*/
              && ((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) != 2
               || !*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 1016))(a2, 0)
               || *(_DWORD *)(a2 + 764)) )
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
int __thiscall TeamTypeClass::FlashAllInstances(TeamTypeClass *this, int a2)
{
  int result; // eax
  int i; // esi
  int v5; // ecx

  result = (int)FootClass_Array.?; /*0x6f1f30*/
  for ( i = 0; i < (int)FootClass_Array.?; ++i ) /*0x6f1f3d*/
  {
    v5 = *((_DWORD *)&FootClass_Array.?->ObjectClass + i); /*0x6f1f49*/
    if ( *(TeamTypeClass **)(v5 + 36) == this ) /*0x6f1f4f*/
      TeamTypeClass::Check((TeamTypeClass *)v5, a2); /*0x6f1f52*/
    result = (int)FootClass_Array.?; /*0x6f1f57*/
  }
  return result; /*0x6f1f62*/
}



// ==== 0x006F1F70  TeamTypeClass::FindFirstInstance  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::FindFirstInstance(TeamTypeClass *this)
{
  int v1; // edx
  ParticleSystemClass *i; // esi
  int result; // eax

  v1 = 0; /*0x6f1f78*/
  if ( (int)FootClass_Array.? <= 0 ) /*0x6f1f7c*/
    return 0; /*0x6f1f93*/
  for ( i = FootClass_Array.?; ; i = (ParticleSystemClass *)((char *)i + 4) ) /*0x6f1f7e*/
  {
    result = (int)i->ObjectClass; /*0x6f1f84*/
    if ( *((TeamTypeClass **)i->ObjectClass + 9) == this ) /*0x6f1f89*/
      break; /*0x6f1f89*/
    if ( ++v1 >= (int)FootClass_Array.? ) /*0x6f1f91*/
      return 0; /*0x6f1f91*/
  }
  return result; /*0x6f1f95*/
}



// ==== 0x006F1FA0  TeamTypeClass::ProcessTaskForce  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::ProcessTaskForce(TeamTypeClass *this)
{
  int v2; // edi
  int result; // eax
  int v4; // ebp
  int v5; // eax

  v2 = 0; /*0x6f1fa7*/
  result = *((_DWORD *)this + 57); /*0x6f1fa9*/
  this->TeamTypeClass_field_3C = 1; /*0x6f1faf*/
  *((_BYTE *)this + 241) = 0; /*0x6f1fb6*/
  this->q03B = 9; /*0x6f1fbc*/
  if ( *(int *)(result + 156) > 0 ) /*0x6f1fcc*/
  {
    v4 = 168; /*0x6f1fcf*/
    do /*0x6f201d*/
    {
      v5 = *(_DWORD *)(result + v4); /*0x6f1fd4*/
      if ( *(_BYTE *)(v5 + 3278) ) /*0x6f1fd7*/
      {
        if ( *(_DWORD *)(v5 + 1504) ) /*0x6f1fdf*/
          *((_BYTE *)this + 241) = 1; /*0x6f1fef*/
        else
          this->TeamTypeClass_field_3C = 0; /*0x6f1fe7*/
      }
      this->q03B = globalHelper_0889F0(*(_DWORD *)(v5 + 1460), this->q03B); /*0x6f2007*/
      result = *((_DWORD *)this + 57); /*0x6f200d*/
      ++v2; /*0x6f2013*/
      v4 += 8; /*0x6f2014*/
    }
    while ( v2 < *(_DWORD *)(result + 156) ); /*0x6f201d*/
  }
  if ( *((_BYTE *)this + 246) ) /*0x6f2020*/
    this->TeamTypeClass_field_3C = 0; /*0x6f2028*/
  return result; /*0x6f202e*/
}



// ==== 0x006F2040  Helper_6F2040  this=-  sig=ida-proto ====
int sub_6F2040()
{
  int result; // eax
  int i; // esi

  result = dword_A8ECB0; /*0x6f2040*/
  for ( i = 0; i < dword_A8ECB0; ++i ) /*0x6f204a*/
  {
    TeamTypeClass::ProcessTaskForce(*((_DWORD *)dword_A8ECA4 + i)); /*0x6f2054*/
    result = dword_A8ECB0; /*0x6f2059*/
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
int TeamTypeClass::GetTypeIdentifier(TeamTypeClass *this)
{
  return 35; /*0x6f20a5*/
}



// ==== 0x006F20B0  TeamTypeClass::GetObjectSize  this=TeamTypeClass  sig=csp ====
int TeamTypeClass::GetObjectSize(TeamTypeClass *this)
{
  return 248; /*0x6f20b5*/
}



// ==== 0x006F20C0  TeamTypeClass::GetAuxField  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::GetAuxField(TeamTypeClass *this)
{
  return *((_DWORD *)this + 38); /*0x6f20c6*/
}



// ==== 0x006F20D0  TeamTypeClass::ddtor  this=TeamTypeClass  sig=csp ====
void **__thiscall TeamTypeClass::ddtor(TeamTypeClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  TeamTypeClass *v6; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &TeamTypeClass::`vftable'; /*0x6f20d6*/
  this->? = &TeamTypeClass::`vftable'; /*0x6f20dc*/
  this->? = &TeamTypeClass::`vftable'; /*0x6f20e3*/
  this->? = &TeamTypeClass::`vftable'; /*0x6f20ea*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x6f20f1*/
  v6 = this; /*0x6f2106*/
  v3 = (*(int (__thiscall **)(_BYTE *, TeamTypeClass **))(*(_DWORD *)&stru_A8EB00.?[188] + 16))( /*0x6f210a*/
         &stru_A8EB00.?[188],
         &v6);
  if ( v3 != -1 && v3 < *(int *)&stru_A8EB00.?[204] ) /*0x6f211a*/
  {
    --*(_DWORD *)&stru_A8EB00.?[204]; /*0x6f211f*/
    for ( ; /*0x6f2125*/
          v3 < *(int *)&stru_A8EB00.?[204];
          *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v3) )
    {
      ++v3; /*0x6f212d*/
    }
  }
  v6 = this; /*0x6f214f*/
  v4 = (*(int (__thiscall **)(int *, TeamTypeClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x6f2153*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v6);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x6f2163*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x6f2168*/
    for ( ; /*0x6f216e*/
          v4 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v4) )
    {
      ++v4; /*0x6f2176*/
    }
  }
  AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x6f218a*/
  if ( (a2 & 1) != 0 ) /*0x6f2194*/
    __3_YAXPAX_Z(this); /*0x6f2197*/
  return &this->AbstractClass; /*0x6f21a1*/
}



// ==== 0x006F21B0  _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall TeamTypeClass_28::ClearBuffer(
        _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this)
{
  int v2; // eax

  v2 = *(_DWORD *)&this->m_1[3]; /*0x6f21b6*/
  this->m_10 = 0; /*0x6f21b9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6f21c0*/
  {
    __3_YAXPAX_Z((void *)(v2 - 4)); /*0x6f21d1*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6f21d9*/
  }
  BYTE1(this->m_C) = 0; /*0x6f21dc*/
  this->m_8 = 0; /*0x6f21df*/
}



// ==== 0x006F21F0  _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall TeamTypeClass_28::PointerToIndex(
        _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6f21f0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x6f2205*/
  else
    return 0; /*0x6f21f7*/
}



// ==== 0x006F2210  _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::Seek  this=VectorClass  sig=csp ====
_DWORD *__thiscall TeamTypeClass_28::Seek(
        _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this,
        _DWORD *a2,
        int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x6f2210*/
  v4 = *(_DWORD *)(v3 + 8 * a3); /*0x6f2217*/
  v5 = v3 + 8 * a3; /*0x6f221a*/
  *a2 = v4; /*0x6f2221*/
  a2[1] = *(_DWORD *)(v5 + 4); /*0x6f2226*/
  return a2; /*0x6f2229*/
}



// ==== 0x006F2230  VectorClass::Team_Helper_6F2230  this=VectorClass  sig=csp ====
_DWORD *__thiscall Team_Helper_6F2230(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x6f2239*/
  this->Capacity = a2; /*0x6f2240*/
  this->IsInitialized = 1; /*0x6f2243*/
  this->IsAllocated = 0; /*0x6f2247*/
  this->vtable0 = &VectorClass<TeamTypeClass const *>::`vftable'; /*0x6f224b*/
  if ( a2 ) /*0x6f2251*/
  {
    if ( a3 ) /*0x6f2259*/
    {
      this->Items = (void *)a3; /*0x6f225b*/
    }
    else
    {
      this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x6f226c*/
      this->IsAllocated = 1; /*0x6f226f*/
    }
  }
  this->vtable0 = &DynamicVectorClass<TeamTypeClass const *>::`vftable'; /*0x6f2273*/
  *((_DWORD *)this + 5) = 10; /*0x6f2279*/
  this->Items = 0; /*0x6f2280*/
  return &this->vtable0; /*0x6f2289*/
}



// ==== 0x006F2290  _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall TeamTypeClass_28::AddRef(
        _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this,
        int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x6f229b*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x6f22a0*/
  {
    v3 = 0; /*0x6f22a2*/
    if ( m_8 <= 0 ) /*0x6f22a6*/
      return 1; /*0x6f22d6*/
    v4 = *(_DWORD *)(a2 + 4); /*0x6f22a8*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x6f22ab*/
    v6 = (_DWORD *)(v4 + 4); /*0x6f22ae*/
    v7 = v4 - (_DWORD)v5; /*0x6f22b1*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x6f22c3*/
    {
      ++v3; /*0x6f22c5*/
      v6 += 2; /*0x6f22c6*/
      v5 += 2; /*0x6f22c9*/
      if ( v3 >= m_8 ) /*0x6f22ce*/
        return 1; /*0x6f22ce*/
    }
  }
  return 0; /*0x6f22d0*/
}



// ==== 0x006F22F0  _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall TeamTypeClass_28::Release(
        _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this,
        int a2,
        int *a3)
{
  int *v4; // ebx
  int *v5; // eax
  int *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // eax

  if ( a2 ) /*0x6f22fc*/
  {
    v4 = a3; /*0x6f2302*/
    LOBYTE(this->m_C) = 0; /*0x6f2306*/
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
    LOBYTE(this->m_C) = 1; /*0x6f2362*/
    if ( v6 ) /*0x6f2366*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6f2371*/
      {
        m_8 = this->m_8; /*0x6f2378*/
        if ( a2 < m_8 ) /*0x6f237d*/
          m_8 = a2; /*0x6f237f*/
        v13 = 0; /*0x6f2381*/
        if ( m_8 > 0 ) /*0x6f2385*/
        {
          do /*0x6f239d*/
          {
            v14 = *(_DWORD *)&this->m_1[3]; /*0x6f2387*/
            ++v13; /*0x6f238a*/
            v6[2 * v13 - 2] = *(_DWORD *)(v14 + 8 * v13 - 8); /*0x6f2391*/
            v6[2 * v13 - 1] = *(_DWORD *)(v14 + 8 * v13 - 4); /*0x6f2399*/
          }
          while ( v13 < m_8 ); /*0x6f239d*/
          v4 = a3; /*0x6f239f*/
        }
        if ( BYTE1(this->m_C) ) /*0x6f23a3*/
        {
          v15 = *(_DWORD *)&this->m_1[3]; /*0x6f23aa*/
          if ( v15 ) /*0x6f23af*/
            __3_YAXPAX_Z((void *)(v15 - 4)); /*0x6f23b9*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6f23c1*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v6; /*0x6f23ca*/
      this->m_8 = a2; /*0x6f23d2*/
      BYTE1(this->m_C) = v4 == 0; /*0x6f23d5*/
      return 1; /*0x6f23db*/
    }
    else
    {
      return 0; /*0x6f236b*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6f23e5*/
    return 1; /*0x6f23eb*/
  }
}



// ==== 0x006F2400  _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall TeamTypeClass_28::ddtor(
        _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this)
{
  int v2; // eax

  v2 = *(_DWORD *)&this->m_1[3]; /*0x6f2406*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6f240d*/
  {
    __3_YAXPAX_Z((void *)(v2 - 4)); /*0x6f241e*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6f2426*/
  }
  BYTE1(this->m_C) = 0; /*0x6f2429*/
  this->m_8 = 0; /*0x6f242c*/
}



// ==== 0x006F2440  _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::Read  this=VectorClass  sig=csp ====
int __thiscall TeamTypeClass_28::Read(
        _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this,
        _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6f2440*/
    return 0; /*0x6f244e*/
  m_8 = this->m_8; /*0x6f2454*/
  result = 0; /*0x6f2457*/
  if ( m_8 <= 0 ) /*0x6f245b*/
    return -1; /*0x6f247c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x6f2461*/
  {
    if ( ++result >= m_8 ) /*0x6f247a*/
      return -1; /*0x6f247a*/
  }
  return result; /*0x6f244b*/
}



// ==== 0x006F2490  _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall TeamTypeClass_28::Write(
        _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6f2490*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x6f24a5*/
  else
    return 0; /*0x6f2497*/
}



// ==== 0x006F24B0  _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall TeamTypeClass_28::SetCapacity(
        _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this,
        int a2,
        int *a3)
{
  int *v4; // ebp
  int *v5; // eax
  int *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v12; // eax
  int v13; // edx
  int *v14; // eax
  int *v15; // ebp
  int v16; // eax

  if ( a2 ) /*0x6f24bc*/
  {
    v4 = a3; /*0x6f24c2*/
    LOBYTE(this->m_C) = 0; /*0x6f24c6*/
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
    LOBYTE(this->m_C) = 1; /*0x6f2523*/
    if ( !v6 ) /*0x6f2527*/
      return 0; /*0x6f25c7*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6f252d*/
    {
      m_8 = this->m_8; /*0x6f2534*/
      if ( a2 < m_8 ) /*0x6f2539*/
        m_8 = a2; /*0x6f253b*/
      v12 = 0; /*0x6f253d*/
      if ( m_8 > 0 ) /*0x6f2541*/
      {
        do /*0x6f2559*/
        {
          v13 = *(_DWORD *)&this->m_1[3]; /*0x6f2543*/
          ++v12; /*0x6f2546*/
          v6[2 * v12 - 2] = *(_DWORD *)(v13 + 8 * v12 - 8); /*0x6f254d*/
          v6[2 * v12 - 1] = *(_DWORD *)(v13 + 8 * v12 - 4); /*0x6f2555*/
        }
        while ( v12 < m_8 ); /*0x6f2559*/
        v4 = a3; /*0x6f255b*/
      }
      if ( BYTE1(this->m_C) ) /*0x6f255f*/
      {
        v14 = *(int **)&this->m_1[3]; /*0x6f2566*/
        if ( v14 ) /*0x6f256b*/
        {
          v15 = v14 - 1; /*0x6f2570*/
          Array::ForEachReverse(v14, 8, *(v14 - 1), (int (__thiscall *)(int))nullsub_240); /*0x6f257c*/
          __3_YAXPAX_Z(v15); /*0x6f2582*/
          v4 = a3; /*0x6f2587*/
        }
        *(_DWORD *)&this->m_1[3] = 0; /*0x6f258e*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v6; /*0x6f2597*/
    this->m_8 = a2; /*0x6f259f*/
    BYTE1(this->m_C) = v4 == 0; /*0x6f25a2*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6f25ab*/
  }
  v16 = this->m_8; /*0x6f25ae*/
  if ( v16 < this->m_10 ) /*0x6f25b6*/
    this->m_10 = v16; /*0x6f25b8*/
  return 1; /*0x6f25bb*/
}



// ==== 0x006F25D0  nullsub_240  this=-  sig=ida-proto ====
void __thiscall nullsub_240(void *this)
{
  ; /*0x6f25d0*/
}



// ==== 0x006F25E0  ObjectClass::Team_Helper_6F25E0  this=ObjectClass  sig=csp ====
char __thiscall Team_Helper_6F25E0(ObjectClass *this, _DWORD *a2)
{
  void *vtable2; // ecx
  int abstractFlags; // eax
  int uniqueId; // eax
  _DWORD *vtable1; // edx

  vtable2 = this->?; /*0x6f25e3*/
  if ( this->? >= (int)vtable2 ) /*0x6f25eb*/
  {
    if ( !BYTE1(this->?) && vtable2 ) /*0x6f25f6*/
      return 0; /*0x6f25f6*/
    abstractFlags = this->?; /*0x6f25f8*/
    if ( abstractFlags <= 0 /*0x6f2608*/
      || !(*((unsigned __int8 (__thiscall **)(ObjectClass *, int, _DWORD))this->AbstractClass + 2))(
            this,
            (int)vtable2 + abstractFlags,
            0) )
    {
      return 0; /*0x6f260f*/
    }
  }
  uniqueId = this->?; /*0x6f2615*/
  vtable1 = this->?; /*0x6f2618*/
  this->? = uniqueId + 1; /*0x6f261e*/
  vtable1[2 * uniqueId] = *a2; /*0x6f2627*/
  vtable1[2 * uniqueId + 1] = a2[1]; /*0x6f262e*/
  return 1; /*0x6f2611*/
}



// ==== 0x006F2640  _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::FindItem  this=DynamicVector  sig=csp ====
int __thiscall TeamTypeClass_28::FindItem(
        _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x6f2640*/
  result = 0; /*0x6f2645*/
  if ( m_10 <= 0 ) /*0x6f264b*/
    return -1; /*0x6f266c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x6f2651*/
  {
    if ( ++result >= m_10 ) /*0x6f266a*/
      return -1; /*0x6f266a*/
  }
  return result; /*0x6f266f*/
}



// ==== 0x006F2680  _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall TeamTypeClass_28::QueryInterface(
        _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this,
        char a2)
{
  int v3; // eax

  v3 = *(_DWORD *)&this->m_1[3]; /*0x6f2683*/
  *(_DWORD *)this->__pad_0 = &VectorClass<DiscreteDistributionClass<AITriggerTypeClass>::DistributionObject<AITriggerTypeClass *>>::`vftable'; /*0x6f2686*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6f2690*/
  {
    __3_YAXPAX_Z((void *)(v3 - 4)); /*0x6f26a3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6f26ab*/
  }
  BYTE1(this->m_C) = 0; /*0x6f26b6*/
  this->m_8 = 0; /*0x6f26bc*/
  if ( (a2 & 1) != 0 ) /*0x6f26c3*/
    __3_YAXPAX_Z(this); /*0x6f26c6*/
  return this->__pad_0; /*0x6f26d0*/
}



// ==== 0x006F26E0  ObjectClass::Team_Helper_6F26E0  this=ObjectClass  sig=csp ====
char *__thiscall sub_6F26E0(char *Block, char a2)
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
_DWORD *__thiscall TeamTypeClass_28::Constructor(
        _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this,
        char a2)
{
  int v3; // eax

  v3 = *(_DWORD *)&this->m_1[3]; /*0x6f2723*/
  *(_DWORD *)this->__pad_0 = &VectorClass<DiscreteDistributionClass<AITriggerTypeClass>::DistributionObject<AITriggerTypeClass *>>::`vftable'; /*0x6f2726*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6f2730*/
  {
    __3_YAXPAX_Z((void *)(v3 - 4)); /*0x6f2743*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6f274b*/
  }
  BYTE1(this->m_C) = 0; /*0x6f2756*/
  this->m_8 = 0; /*0x6f275c*/
  if ( (a2 & 1) != 0 ) /*0x6f2763*/
    __3_YAXPAX_Z(this); /*0x6f2766*/
  return this->__pad_0; /*0x6f2770*/
}



// ==== 0x006F2780  ObjectClass::Team_Helper_6F2780  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Team_Helper_6F2780(ObjectClass *this, _DWORD *a2)
{
  void *v3; // eax
  void *v4; // eax
  void *vtable2; // ecx
  int v6; // eax

  if ( this == (ObjectClass *)a2 ) /*0x6f278a*/
    return &this->AbstractClass; /*0x6f278a*/
  (*((void (__thiscall **)(ObjectClass *))this->AbstractClass + 3))(this); /*0x6f278e*/
  v3 = (void *)a2[2]; /*0x6f2791*/
  this->? = v3; /*0x6f2796*/
  if ( !v3 ) /*0x6f2799*/
  {
    this->? = 0; /*0x6f27da*/
    BYTE1(this->?) = 0; /*0x6f27e1*/
    return &this->AbstractClass; /*0x6f27e5*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * (_DWORD)v3); /*0x6f27a3*/
  this->? = v4; /*0x6f27ab*/
  if ( !v4 ) /*0x6f27b0*/
    return &this->AbstractClass; /*0x6f27b0*/
  vtable2 = this->?; /*0x6f27b2*/
  v6 = 0; /*0x6f27b5*/
  BYTE1(this->?) = 1; /*0x6f27b9*/
  if ( (int)vtable2 <= 0 ) /*0x6f27bd*/
    return &this->AbstractClass; /*0x6f27bd*/
  do /*0x6f27d1*/
  {
    *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x6f27c8*/
    ++v6; /*0x6f27ce*/
  }
  while ( v6 < (int)this->? ); /*0x6f27d1*/
  return &this->AbstractClass; /*0x6f27d5*/
}



// ==== 0x006F27F0  VectorClass::Team_Helper_6F27F0  this=VectorClass  sig=csp ====
_DWORD *__thiscall Team_Helper_6F27F0(VectorClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  int *v7; // eax
  void *v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx

  this->Items = 0; /*0x6f27fa*/
  this->Capacity = a2; /*0x6f2801*/
  this->IsInitialized = 1; /*0x6f2804*/
  this->IsAllocated = 0; /*0x6f2808*/
  this->vtable0 = &VectorClass<DiscreteDistributionClass<AITriggerTypeClass>::DistributionObject<AITriggerTypeClass *>>::`vftable'; /*0x6f280c*/
  if ( !a2 ) /*0x6f2812*/
    return &this->vtable0; /*0x6f2812*/
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
    return &this->vtable0; /*0x6f283f*/
  }
  v7 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x6f284a*/
  if ( !v7 ) /*0x6f2854*/
  {
    this->IsAllocated = 1; /*0x6f2884*/
    this->Items = 0; /*0x6f2888*/
    return &this->vtable0; /*0x6f288b*/
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
  this->IsAllocated = 1; /*0x6f2874*/
  this->Items = v8; /*0x6f2878*/
  return &this->vtable0; /*0x6f283d*/
}



// ==== 0x006F28A0  sub_6F28A0  this=-  sig=ida-proto ====
void sub_6F28A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6f28ac*/
  dbl_B0EA58 = Math::Sqrt(v0 + v0); /*0x6f28be*/
}



// ==== 0x006F28D0  sub_6F28D0  this=-  sig=ida-proto ====
void sub_6F28D0()
{
  dbl_B0EB28 = dbl_B0EA58 / 60.0; /*0x6f28dc*/
}



// ==== 0x006F28F0  sub_6F28F0  this=-  sig=ida-proto ====
void sub_6F28F0()
{
  dbl_B0EB10 = 1.0 / dbl_B0EB28; /*0x6f28fc*/
}



// ==== 0x006F2910  sub_6F2910  this=-  sig=ida-proto ====
void sub_6F2910()
{
  dbl_B0EB08 = 0.0174532925199433 * 45.0; /*0x6f291c*/
}



// ==== 0x006F2930  sub_6F2930  this=-  sig=ida-proto ====
void sub_6F2930()
{
  dbl_B0EA60 = 0.0174532925199433 * 60.0; /*0x6f293c*/
}



// ==== 0x006F2950  sub_6F2950  this=-  sig=ida-proto ====
void sub_6F2950()
{
  dbl_B0EA30 = 0.0174532925199433 * 90.0; /*0x6f295c*/
}



// ==== 0x006F2970  sub_6F2970  this=-  sig=ida-proto ====
__int64 sub_6F2970()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0EA30 - dbl_B0EA60); /*0x6f2982*/
  result = Math::RoundToInt(v0 * dbl_B0EA58 * 0.5); /*0x6f2996*/
  dword_B0EB34 = result; /*0x6f299b*/
  return result; /*0x6f29a0*/
}



// ==== 0x006F29B0  sub_6F29B0  this=-  sig=ida-proto ====
void sub_6F29B0()
{
  dbl_B0EA68 = Math::ArcTan((double)dword_B0EB34 * 0.00390625); /*0x6f29c7*/
}



// ==== 0x006F29E0  sub_6F29E0  this=-  sig=ida-proto ====
void sub_6F29E0()
{
  dbl_B0EAA0 = Math::ArcTan((double)(2 * dword_B0EB34) / dbl_B0EA58); /*0x6f2a02*/
}



// ==== 0x006F2A10  sub_6F2A10  this=-  sig=ida-proto ====
__int64 sub_6F2A10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0EB34) + 0.5); /*0x6f2a2b*/
  dword_B0EB24 = result; /*0x6f2a30*/
  return result; /*0x6f2a36*/
}



// ==== 0x006F2A40  sub_6F2A40  this=-  sig=ida-proto ====
int sub_6F2A40()
{
  dword_B0EA50 = 0; /*0x6f2a42*/
  return 0; /*0x6f2a4e*/
}



// ==== 0x006F2A50  sub_6F2A50  this=-  sig=ida-proto ====
int sub_6F2A50()
{
  dword_B0EA90 = 0; /*0x6f2a52*/
  dword_B0EA94 = 0; /*0x6f2a57*/
  dword_B0EA98 = 0; /*0x6f2a5c*/
  return 0; /*0x6f2a61*/
}



// ==== 0x006F2A70  sub_6F2A70  this=-  sig=ida-proto ====
int sub_6F2A70()
{
  dword_B0EB20 = 0; /*0x6f2a75*/
  dword_B0EB18 = 128; /*0x6f2a7f*/
  dword_B0EB1C = 128; /*0x6f2a84*/
  return 128; /*0x6f2a89*/
}



// ==== 0x006F2A90  sub_6F2A90  this=-  sig=ida-proto ====
int sub_6F2A90()
{
  dword_B0EA40 = 0; /*0x6f2a92*/
  dword_B0EA44 = 0; /*0x6f2a97*/
  dword_B0EA48 = 0; /*0x6f2a9c*/
  dword_B0EA4C = 0; /*0x6f2aa1*/
  return 0; /*0x6f2aa6*/
}



// ==== 0x006F2AB0  sub_6F2AB0  this=-  sig=ida-proto ====
int sub_6F2AB0()
{
  dword_B0EA80 = (int)dword_A8ED84; /*0x6f2aba*/
  dword_B0EA88 = 0; /*0x6f2abf*/
  return atexit(sub_6F2AD0); /*0x6f2acf*/
}



// ==== 0x006F2AD0  sub_6F2AD0  this=-  sig=ida-proto ====
void __cdecl sub_6F2AD0()
{
  if ( (byte_B0EA38 & 1) == 0 ) /*0x6f2ada*/
    byte_B0EA38 |= 1u; /*0x6f2ade*/
}



// ==== 0x006F2AF0  sub_6F2AF0  this=-  sig=ida-proto ====
int sub_6F2AF0()
{
  dword_B0EA70 = Timer::GetTicks(); /*0x6f2aff*/
  dword_B0EA78 = 0; /*0x6f2b04*/
  return atexit(sub_6F2B20); /*0x6f2b14*/
}



// ==== 0x006F2B20  sub_6F2B20  this=-  sig=ida-proto ====
void __cdecl sub_6F2B20()
{
  if ( (byte_B0EA38 & 2) == 0 ) /*0x6f2b2a*/
    byte_B0EA38 |= 2u; /*0x6f2b2e*/
}



// ==== 0x006F2B40  TechnoClass::TechnoClass  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::TechnoClass(TechnoClass *this, int a2)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax

  RadioClass::Release((RadioClass *)this); /*0x6f2b46*/
  this->flashing[0] = 0; /*0x6f2b52*/
  LOBYTE(this->flashing[1]) = 0; /*0x6f2b58*/
  this->animation[0] = 0; /*0x6f2b5e*/
  LOBYTE(this->animation[1]) = 0; /*0x6f2b64*/
  v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2b6a*/
  this->animation[4] = 0; /*0x6f2b6f*/
  this->animation[2] = v3; /*0x6f2b75*/
  this->animation[5] = 0; /*0x6f2b7b*/
  this->animation[6] = 1; /*0x6f2b81*/
  this->passengers[0] = 0; /*0x6f2b87*/
  this->passengers[1] = 0; /*0x6f2b8d*/
  this->transporter = 0; /*0x6f2b93*/
  this->turretChargeTimer = -100; /*0x6f2b9c*/
  this->currentTurretNumber = -1; /*0x6f2ba6*/
  this->secondaryTurretIndex = -1; /*0x6f2bac*/
  this->behindAnim = 0; /*0x6f2bb2*/
  this->deployAnim = 0; /*0x6f2bb8*/
  this->inAirFlag = 0; /*0x6f2bbe*/
  this->currentWeaponSlot = 0; /*0x6f2bc4*/
  this->currentRank = -1; /*0x6f2bca*/
  this->gattlingStage = 0; /*0x6f2bd0*/
  this->gattlingValue = 0; /*0x6f2bd6*/
  this->ammoReloadTimer = 0; /*0x6f2be2*/
  unknown_libname_35((ObjectClass *)this->veterancy); /*0x6f2be8*/
  this->armorMultiplier[0] = 0; /*0x6f2bf2*/
  this->armorMultiplier[1] = 1072693248; /*0x6f2bf8*/
  this->firepowerMultiplier[0] = 0; /*0x6f2bfe*/
  this->firepowerMultiplier[1] = 1072693248; /*0x6f2c04*/
  this->idleActionTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2c10*/
  this->idleActionTimer[2] = 0; /*0x6f2c16*/
  v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2c1c*/
  this->radarFlashTimer[2] = 0; /*0x6f2c22*/
  this->radarFlashTimer[0] = v4; /*0x6f2c28*/
  this->targetingTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2c33*/
  this->targetingTimer[2] = 45; /*0x6f2c39*/
  v5 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2c43*/
  this->ironCurtainTimer[1] = 0; /*0x6f2c49*/
  *(_DWORD *)this->__pad_18C = v5; /*0x6f2c4f*/
  this->ironCurtainTimer[2] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2c5b*/
  this->ironTintTimer[1] = 0; /*0x6f2c61*/
  this->ironTintTimer[2] = 10; /*0x6f2c67*/
  this->ironTintStage = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2c76*/
  this->airstrikeTimer[1] = 0; /*0x6f2c7c*/
  v6 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2c82*/
  this->airstrikeTintTimer[1] = 0; /*0x6f2c88*/
  this->airstrikeTimer[2] = v6; /*0x6f2c8e*/
  *(_DWORD *)this->__pad_1C4 = 0; /*0x6f2c94*/
  this->__pad_1C4[4] = 0; /*0x6f2c9a*/
  this->drainTarget = 0; /*0x6f2ca0*/
  this->drainingMe = 0; /*0x6f2ca6*/
  this->drainAnim = 0; /*0x6f2cac*/
  this->isDisguisedFlag = 0; /*0x6f2cb2*/
  this->disguiseCreationFrame = 0; /*0x6f2cb8*/
  v7 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2cbe*/
  this->infantryBlinkTimer[2] = 0; /*0x6f2cc4*/
  this->infantryBlinkTimer[0] = v7; /*0x6f2cca*/
  this->disguiseBlinkTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2cd5*/
  this->disguiseBlinkTimer[2] = 0; /*0x6f2cdb*/
  this->isTargetedByChrono = 0; /*0x6f2ce1*/
  this->reloadTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2ced*/
  this->reloadTimer[2] = 0; /*0x6f2cf3*/
  this->currentBurstCount = 0; /*0x6f2cf9*/
  this->currentBarrelIndex = 0; /*0x6f2cff*/
  this->displayProductionTo[0] = 0; /*0x6f2d05*/
  this->controlGroup = -1; /*0x6f2d0f*/
  this->focus = 0; /*0x6f2d15*/
  this->owner = (HouseClass *)a2; /*0x6f2d1b*/
  this->cloakState = 0; /*0x6f2d21*/
  this->cloakProgress[0] = 0; /*0x6f2d27*/
  LOBYTE(this->cloakProgress[1]) = 0; /*0x6f2d2d*/
  this->cloakProgress[2] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2d38*/
  this->cloakProgress[4] = 0; /*0x6f2d3e*/
  this->cloakProgress[5] = 0; /*0x6f2d44*/
  this->cloakProgress[6] = 1; /*0x6f2d4a*/
  v8 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2d50*/
  this->cloakDelayTimer[2] = 0; /*0x6f2d56*/
  this->cloakDelayTimer[0] = v8; /*0x6f2d5c*/
  this->warpFactor = 0.0; /*0x6f2d62*/
  this->isChronosphereImmune = 0; /*0x6f2d68*/
  this->lastSightCoords[0] = g_BuildingLoadQueue_Array.?[3]; /*0x6f2d79*/
  this->lastSightCoords[1] = g_BuildingLoadQueue_Array.?[4]; /*0x6f2d85*/
  this->lastSightCoords[2] = g_BuildingLoadQueue_Array.?[5]; /*0x6f2d93*/
  this->lastSightRange = 0; /*0x6f2d96*/
  this->lastSightHeight = 0; /*0x6f2d9c*/
  this->gapSuperCharged = 0; /*0x6f2da2*/
  this->isGeneratingGap = 0; /*0x6f2da8*/
  this->gapRadius = 0; /*0x6f2dae*/
  this->isBeingWarpedOut = 0; /*0x6f2db4*/
  this->isWarpingOut = 0; /*0x6f2dba*/
  this->isWarpEffectActive = 0; /*0x6f2dc0*/
  this->temporalUsing = 0; /*0x6f2dc6*/
  this->temporalTargetingMe = 0; /*0x6f2dcc*/
  this->isImmobilized = 0; /*0x6f2dd2*/
  this->owningHouseIndex0 = 0; /*0x6f2dd8*/
  this->chronoLockRemaining = 0; /*0x6f2dde*/
  this->chronoDestCoords[0] = g_BuildingLoadQueue_Array.?[3]; /*0x6f2dea*/
  this->chronoDestCoords[1] = g_BuildingLoadQueue_Array.?[4]; /*0x6f2df1*/
  v9 = g_BuildingLoadQueue_Array.?[5]; /*0x6f2df4*/
  this->bunkerLinkedUnit = 0; /*0x6f2dfa*/
  this->pitchAngle = 0.0; /*0x6f2e00*/
  this->chronoDestCoords[2] = v9; /*0x6f2e06*/
  this->airstrike = 0; /*0x6f2e09*/
  this->isBerserk = 0; /*0x6f2e0f*/
  this->isBerserk_duration_left = 0; /*0x6f2e15*/
  this->sprayOffsetIndex = 0; /*0x6f2e1b*/
  this->isUncrushable = 0; /*0x6f2e21*/
  this->rockerLinkedUnit = 0; /*0x6f2e27*/
  this->locomotorTarget = 0; /*0x6f2e2d*/
  this->locomotorSource = 0; /*0x6f2e33*/
  this->target = 0; /*0x6f2e39*/
  this->lastTarget = 0; /*0x6f2e3f*/
  this->captureManager = 0; /*0x6f2e45*/
  this->mindControlledBy = 0; /*0x6f2e4b*/
  this->mindControlledBy_a_unit = 0; /*0x6f2e51*/
  this->mindControlRingAnim = 0; /*0x6f2e57*/
  this->mindControlledBy_house = 0; /*0x6f2e5d*/
  this->spawnManager = 0; /*0x6f2e63*/
  this->spawnOwner = 0; /*0x6f2e69*/
  this->slaveManager = 0; /*0x6f2e6f*/
  this->slaveOwner = 0; /*0x6f2e75*/
  this->originalOwnerHouse = 0; /*0x6f2e7b*/
  this->diskLaserTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2e86*/
  this->diskLaserTimer[2] = 0; /*0x6f2e8c*/
  this->diskLaserChargeState = 0; /*0x6f2e98*/
  this->ammo = -1; /*0x6f2e9e*/
  this->unitValue = 0; /*0x6f2ea4*/
  this->damageParticles_2 = 0; /*0x6f2eaa*/
  this->railgunParticles_2 = 0; /*0x6f2eb0*/
  this->auxParticles1 = 0; /*0x6f2eb6*/
  this->auxParticles2 = 0; /*0x6f2ebc*/
  this->firingParticles = 0; /*0x6f2ec2*/
  this->waveEffect = (WaveClass *)-1; /*0x6f2ec8*/
  Delegate::GetField((Delegate *)&this->tiltSidewaysAngle); /*0x6f2ece*/
  TechnoClass::checkCloakState((TechnoClass *)this->storedTiberium); /*0x6f2ed9*/
  FrameSnapshot::InitMax((FrameSnapshot *)this->barrelFacing, 3); /*0x6f2ee6*/
  FrameSnapshot::Init((FrameSnapshot *)this->primaryFacing); /*0x6f2ef1*/
  FrameSnapshot::Init((FrameSnapshot *)this->secondaryFacing); /*0x6f2efc*/
  this->currentBurstIndex = 0; /*0x6f2f01*/
  this->targetLaserTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2f0d*/
  this->targetLaserTimer[2] = 0; /*0x6f2f13*/
  *(_WORD *)this->unknown_3CA = 0; /*0x6f2f1e*/
  this->countedAsOwned = 0; /*0x6f2f25*/
  this->isSinking = 0; /*0x6f2f2b*/
  this->wasAlreadySinking = 0; /*0x6f2f31*/
  this->isReceivingDamageEffect = 0; /*0x6f2f37*/
  this->isUseless = 0; /*0x6f2f3d*/
  this->hasBeenAttacked = 0; /*0x6f2f43*/
  this->isCloakableFlag = 0; /*0x6f2f49*/
  this->isPrimaryFactory = 0; /*0x6f2f4f*/
  this->isALoaner = 0; /*0x6f2f55*/
  this->isInPlayfield = 0; /*0x6f2f5b*/
  this->turretRecoil[0] = 2; /*0x6f2f61*/
  this->turretRecoil[1] = 1; /*0x6f2f67*/
  this->turretRecoil[2] = 1; /*0x6f2f6d*/
  this->turretRecoil[3] = 1; /*0x6f2f73*/
  this->turretRecoil[5] = 0; /*0x6f2f79*/
  this->turretRecoil[6] = 0; /*0x6f2f7f*/
  this->barrelRecoil[0] = 2; /*0x6f2f85*/
  this->barrelRecoil[1] = 1; /*0x6f2f8b*/
  this->barrelRecoil[2] = 1; /*0x6f2f91*/
  this->barrelRecoil[3] = 1; /*0x6f2f97*/
  this->barrelRecoil[5] = 0; /*0x6f2f9d*/
  this->barrelRecoil[6] = 0; /*0x6f2fa3*/
  this->isTether = 0; /*0x6f2fa9*/
  this->isAlternativeTether = 0; /*0x6f2faf*/
  this->isOwnedByCurrentPlayer = 0; /*0x6f2fb5*/
  this->isDiscoveredByCurrentPlayer = 0; /*0x6f2fbb*/
  this->isDiscoveredByComputer = 0; /*0x6f2fc1*/
  this->isSelectedByPlayer = 0; /*0x6f2fc7*/
  this->isUnderCursor = 0; /*0x6f2fcd*/
  this->isCommandLineTarget = 0; /*0x6f2fd3*/
  this->sightRangeBonus = 0; /*0x6f2fd9*/
  this->isRecruitableByAlly = 1; /*0x6f2fdf*/
  this->isRecruitableByEnemy = 1; /*0x6f2fe6*/
  this->isRadarTracked = 0; /*0x6f2fed*/
  this->isOnCarryall = 0; /*0x6f2ff3*/
  this->isCrashing = 0; /*0x6f2ff9*/
  this->wasAlreadyCrashing = 0; /*0x6f2fff*/
  this->isBeingManipulated = 0; /*0x6f3005*/
  this->manipulatedByUnit = 0; /*0x6f300b*/
  this->chronoWarpedByHouse = 0; /*0x6f3011*/
  this->isChronoImmuneFlag = 0; /*0x6f3017*/
  this->isMouseHovering = 0; /*0x6f301d*/
  this->shouldBeReselectOnUnlimbo = 0; /*0x6f3023*/
  this->previousTeam = 0; /*0x6f3029*/
  this->isCountedAsOwned_special = 0; /*0x6f302f*/
  this->isAbsorbed = 0; /*0x6f3035*/
  this->isGrindingInProgress = 0; /*0x6f303b*/
  this->grindingAnimHandle = 0; /*0x6f3046*/
  this->currentTargetThreatValues[1] = 0; /*0x6f3051*/
  this->currentTargetThreatValues[2] = 0; /*0x6f3057*/
  LOBYTE(this->currentTargetThreatValues[3]) = 1; /*0x6f305d*/
  BYTE1(this->currentTargetThreatValues[3]) = 0; /*0x6f3064*/
  this->currentTargetThreatValues[0] = (int)&DynamicVectorClass<int>::`vftable'; /*0x6f306a*/
  this->currentTargetThreatValues[5] = 10; /*0x6f3074*/
  this->currentTargetThreatValues[4] = 0; /*0x6f307a*/
  this->currentTargets[1] = 0; /*0x6f3080*/
  this->currentTargets[2] = 0; /*0x6f3086*/
  LOBYTE(this->currentTargets[3]) = 1; /*0x6f308c*/
  BYTE1(this->currentTargets[3]) = 0; /*0x6f3093*/
  this->currentTargets[0] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x6f3099*/
  this->currentTargets[5] = 10; /*0x6f309f*/
  this->currentTargets[4] = 0; /*0x6f30a5*/
  this->attackedTargets[1] = 0; /*0x6f30ab*/
  this->attackedTargets[2] = 0; /*0x6f30b1*/
  LOBYTE(this->attackedTargets[3]) = 1; /*0x6f30b7*/
  BYTE1(this->attackedTargets[3]) = 0; /*0x6f30be*/
  this->attackedTargets[0] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x6f30c4*/
  this->attackedTargets[5] = 10; /*0x6f30ca*/
  this->attackedTargets[4] = 0; /*0x6f30d0*/
  this->isTurretRotateSoundPlaying = 1; /*0x6f30d6*/
  this->turretIsRotating = 0; /*0x6f30dc*/
  this->isGattlingSoundPlaying = 0; /*0x6f30e2*/
  this->unknown_4BC = 0; /*0x6f30e8*/
  this->isUnusedGattlingSoundPlaying = 0; /*0x6f30ee*/
  this->unknown_4D8 = 0; /*0x6f30f4*/
  this->unknown_bool_4F8 = 0; /*0x6f30fa*/
  this->unknown_4FC = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f3106*/
  this->queueUpToEnter = 0; /*0x6f310c*/
  this->empLockRemaining = 0; /*0x6f3112*/
  this->firingRadBeam = 0; /*0x6f3118*/
  this->planningToken = 0; /*0x6f311e*/
  this->disguiseAsType = 0; /*0x6f3124*/
  this->disguisedAsHouse = 0; /*0x6f312a*/
  this->RadioClass = &TechnoClass::`vftable'; /*0x6f3130*/
  this->? = &TechnoClass::`vftable'; /*0x6f3136*/
  this->? = &TechnoClass::`vftable'; /*0x6f313d*/
  this->? = &off_7F4934; /*0x6f314a*/
  AudioController::Init((AudioController *)this->turretRotateSoundController); /*0x6f3151*/
  AudioController::Init((AudioController *)this->gattlingSoundController); /*0x6f315c*/
  AudioController::Init((AudioController *)this->unusedGattlingSoundController); /*0x6f3167*/
  AudioController::Init((AudioController *)this->queuedVoiceSoundController); /*0x6f3172*/
  this->queuedVoiceIndex = -1; /*0x6f3177*/
  this->unknown_4F4 = -1; /*0x6f317d*/
  if ( *(int *)&stru_A8EB00.?[164] < *(int *)&stru_A8EB00.?[156] /*0x6f31b6*/
    || (stru_A8EB00.?[161] || !*(_DWORD *)&stru_A8EB00.?[156])
    && *(int *)&stru_A8EB00.?[168] > 0
    && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&stru_A8EB00.?[148] + 8))(
         &stru_A8EB00.?[148],
         *(_DWORD *)&stru_A8EB00.?[168] + *(_DWORD *)&stru_A8EB00.?[156],
         0) )
  {
    v10 = (*(_DWORD *)&stru_A8EB00.?[164])++; /*0x6f31c3*/
    *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v10) = this; /*0x6f31d2*/
  }
  if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E88[16] < *(int *)&g_BuildingLoadQueue_Array.__pad_E88[8] /*0x6f3209*/
    || (g_BuildingLoadQueue_Array.__pad_E88[13] || !*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E88[8])
    && *(int *)&g_BuildingLoadQueue_Array.__pad_E88[20] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E88 + 8))(
         g_BuildingLoadQueue_Array.__pad_E88,
         *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E88[20] + *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E88[8],
         0) )
  {
    v11 = (*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E88[16])++; /*0x6f3216*/
    *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E88[4] + 4 * v11) = this; /*0x6f3225*/
  }
  LOBYTE(this->?) |= 1u; /*0x6f3237*/
  this->initialOwner = (HouseClass *)a2; /*0x6f3241*/
  memset(&this->fireParticles, 0, 0x20u); /*0x6f3247*/
  *(_WORD *)this->unknown_short_3C8 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x6f3259*/
  return &this->RadioClass; /*0x6f3262*/
}



// ==== 0x006F3270  ObjectClass::Vt34Thunk  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::Vt34Thunk(ObjectClass *this)
{
  return (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this);
}



// ==== 0x006F3280  TechnoClass::IsNotAircraftOrBuilding  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsNotAircraftOrBuilding(TechnoClass *this)
{
  int result; // eax

  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 97))(this); /*0x6f3285*/
  LOBYTE(result) = result /*0x6f32c5*/
                && (result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 97))(this), result != 6)
                && (result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 97))(this), result != 16)
                && (result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this),
                    !*(_BYTE *)(result + 3220));
  return result; /*0x6f32c3*/
}



// ==== 0x006F32D0  TechnoClass::CanInitiateSell  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CanInitiateSell(TechnoClass *this)
{
  int result; // eax

  result = this->?; /*0x6f32d3*/
  if ( result > 0 /*0x6f330c*/
    && !this->?
    && this->isInPlayfield
    && (result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this), result != 6)
    && this->isDiscoveredByCurrentPlayer
    && (result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this), *(_BYTE *)(result + 560)) )
  {
    result = House::IsHumanPlayer((House *)this->owner); /*0x6f331c*/
    LOBYTE(result) = (_BYTE)result != 0; /*0x6f3323*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6f3328*/
  }
  return result; /*0x6f3326*/
}



// ==== 0x006F3330  TechnoClass::SelectWeapon  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::SelectWeapon(TechnoClass *this)
{
  HouseClass *v2; // eax
  int result; // eax
  int v4; // edi
  int v5; // ebx
  _BYTE *v6; // ebp
  int gattlingStage; // esi
  int v8; // eax
  int v9; // eax
  bool v10; // bl
  _DWORD *v11; // [esp+1Ch] [ebp+4h]

  v2 = (HouseClass *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6f333b*/
  if ( (unsigned __int8)HouseClass::HasPower(v2)
    && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3285) )
  {
    return this->currentWeaponSlot != -1 ? this->currentWeaponSlot : 0;
  }
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 256))(this) ) /*0x6f337d*/
    return 0; /*0x6f337d*/
  v4 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, 1); /*0x6f3397*/
  if ( !v4 ) /*0x6f339f*/
    return 0; /*0x6f339f*/
  v5 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 254))(this, 0); /*0x6f33b1*/
  if ( !v5 || *(_BYTE *)(v4 + 310) || !v11 ) /*0x6f33d3*/
    return 0; /*0x6f33d3*/
  if ( this->? && *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3408) != -1 ) /*0x6f33f4*/
    return *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3408); /*0x6f340d*/
  v6 = (v11[5] & 1) != 0 ? (_BYTE *)v11 : 0;
  if ( !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3285) )
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
        && !this->drainTarget
        && !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)v6) )
      {
        return 1; /*0x6f35a5*/
      }
      if ( *(_BYTE *)(v4 + 336) && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 97))(this) == 16 ) /*0x6f35c3*/
        return 1; /*0x6f35d1*/
      if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6 && *((_BYTE *)this + 1633) ) /*0x6f35e0*/
        return 1; /*0x6f35f6*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) == 6 /*0x6f362f*/
        && (unsigned __int8)Object::IsAlliedWithObjectSimpleHouse((Object *)this->owner, v11)
        && *(_BYTE *)(*(_DWORD *)(v4 + 172) + 344)
        && *(_BYTE *)(v11[328] + 5493) )
      {
        return 1; /*0x6f3645*/
      }
      if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 2 && *((_BYTE *)this + 1738) ) /*0x6f3658*/
        return 1; /*0x6f366e*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) == 11 /*0x6f36ca*/
        && (v11[59] != 2 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v11 + 80))(v11)
         || (v11[80] & 0x100) != 0
         && *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3278))
        && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v11 + 84))(v11)
        && *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1540) == 2 )
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
          result = (*((int (__thiscall **)(TechnoClass *, _DWORD *))this->RadioClass + 186))(this, v11); /*0x6f37a2*/
          if ( result != -1 ) /*0x6f37ab*/
            return result; /*0x6f37ab*/
          return 0; /*0x6f37ab*/
        }
        if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6) /*0x6f37d6*/
          && *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1540) == 2 )
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
  gattlingStage = this->gattlingStage; /*0x6f3436*/
  if ( *(_BYTE *)(*(_DWORD *)(v4 + 160) + 676) /*0x6f3455*/
    && v6
    && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6) )
  {
    return 2 * gattlingStage + 1; /*0x6f345c*/
  }
  else
  {
    return 2 * gattlingStage; /*0x6f346a*/
  }
}



// ==== 0x006F3820  TechnoClass::CanTargetHouse  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CanTargetHouse(TechnoClass *this)
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
  switch ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1536) ) /*0x6f38a3*/
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
BOOL __thiscall TechnoClass::GetCrewCount(TechnoClass *this)
{
  return *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3277) != 0; /*0x6f3967*/
}



// ==== 0x006F3970  TechnoClass::GetValue  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetValue(TechnoClass *this, int a2)
{
  int v2; // edi
  int v4; // ebx
  HouseClass *v5; // eax
  int *v6; // eax
  int result; // eax
  int v8; // edi
  int v9; // edi
  int v10; // edi

  v2 = 0; /*0x6f3977*/
  if ( a2 == -1 ) /*0x6f397e*/
  {
    v4 = 0; /*0x6f3986*/
    v5 = (HouseClass *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6f3988*/
    if ( !(unsigned __int8)HouseClass::HasPower(v5) /*0x6f39a3*/
      || *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3285) )
    {
      if ( *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 254))(this, 0) ) /*0x6f3a00*/
      {
        v8 = *(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 254))(this, 0) /*0x6f3a17*/
                       + 164);
        v4 = 1; /*0x6f3a27*/
        v2 = *(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 254))(this, 0) /*0x6f3a2c*/
                       + 152)
           + v8;
      }
      if ( *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, 1) ) /*0x6f3a3e*/
      {
        v9 = *(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, 1) + 164) /*0x6f3a5b*/
           + v2;
        v2 = *(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, 1) + 152) /*0x6f3a6d*/
           + v9;
        ++v4; /*0x6f3a6f*/
      }
      if ( v4 <= 0 ) /*0x6f3a72*/
        return 0; /*0x6f3a72*/
      return v2 / v4; /*0x6f3a7c*/
    }
    else
    {
      v6 = (int *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, this->currentWeaponSlot); /*0x6f39b8*/
      if ( !v6 ) /*0x6f39c0*/
        return 0; /*0x6f39c7*/
      result = *v6; /*0x6f39ca*/
      if ( result ) /*0x6f39ce*/
        return *(_DWORD *)(result + 152) + *(_DWORD *)(result + 164); /*0x6f39ed*/
    }
  }
  else
  {
    if ( *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, a2) ) /*0x6f3a8e*/
    {
      v10 = *(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, a2) + 164); /*0x6f3aa3*/
      return *(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, a2) + 152) /*0x6f3ab3*/
           + v10;
    }
    return v2; /*0x6f3ab9*/
  }
  return result; /*0x6f39c2*/
}



// ==== 0x006F3AD0  TechnoClass::ComputeTransform  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::ComputeTransform(TechnoClass *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // ecx
  int v8; // ebp
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // ebp
  const void *v13; // eax
  int (__thiscall **vtable0)(TechnoClass *, _BYTE *); // eax
  _DWORD *v15; // esi
  int v16; // eax
  float *v17; // eax
  float v18; // edx
  int v19; // eax
  int v20; // esi
  int v21; // eax
  int v22; // edi
  int v23; // eax
  int v24; // edx
  int v25; // kr00_4
  int v26; // ebp
  int *v27; // eax
  int v28; // ecx
  int v29; // edx
  int v30; // eax
  float v32; // [esp+8h] [ebp-E4h]
  float v33; // [esp+8h] [ebp-E4h]
  float v34; // [esp+Ch] [ebp-E0h]
  float v35; // [esp+10h] [ebp-DCh]
  float v36; // [esp+10h] [ebp-DCh]
  int v37; // [esp+28h] [ebp-C4h]
  double v38; // [esp+2Ch] [ebp-C0h] BYREF
  float v39; // [esp+34h] [ebp-B8h]
  int v40; // [esp+38h] [ebp-B4h]
  int v41; // [esp+3Ch] [ebp-B0h]
  float v42[3]; // [esp+40h] [ebp-ACh] BYREF
  _BYTE v43[4]; // [esp+4Ch] [ebp-A0h] BYREF
  float v44[3]; // [esp+50h] [ebp-9Ch] BYREF
  Matrix3x4 v45; // [esp+5Ch] [ebp-90h] BYREF
  Transform v46[12]; // [esp+8Ch] [ebp-60h] BYREF
  _BYTE v47[48]; // [esp+BCh] [ebp-30h] BYREF

  v41 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6f3aeb*/
  v7 = 0; /*0x6f3aef*/
  v8 = 0; /*0x6f3af1*/
  v9 = 0; /*0x6f3af3*/
  if ( a3 >= 0 ) /*0x6f3af7*/
  {
    v11 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, a3); /*0x6f3b28*/
    v7 = v11[1]; /*0x6f3b2e*/
    v8 = v11[2]; /*0x6f3b31*/
    v9 = v11[3]; /*0x6f3b34*/
  }
  else if ( -a3 <= 5 ) /*0x6f3afe*/
  {
    v10 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6f3b04*/
    v7 = *(_DWORD *)(v10 - 12 * a3 + 2128); /*0x6f3b14*/
    v8 = *(_DWORD *)(v10 - 12 * a3 + 2132); /*0x6f3b1b*/
    v9 = *(_DWORD *)(v10 - 12 * a3 + 2136); /*0x6f3b1e*/
  }
  v12 = a5 + v8; /*0x6f3b47*/
  v40 = a4 + v7; /*0x6f3b49*/
  v37 = a6 + v9; /*0x6f3b58*/
  if ( this && (this->? & 4) != 0 && *((_DWORD *)this + 413) ) /*0x6f3b6c*/
  {
    v13 = (const void *)(*(int (__stdcall **)(_DWORD, _BYTE *, _DWORD))(**((_DWORD **)this + 413) + 36))( /*0x6f3b9b*/
                          *((_DWORD *)this + 413),
                          v47,
                          0);
    Transform::Copy(v46, v13); /*0x6f3ba3*/
    vtable0 = (int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass; /*0x6f3ba8*/
    qmemcpy(&v45, v46, sizeof(v45)); /*0x6f3bb7*/
    v15 = (_DWORD *)vtable0[170](this, v43); /*0x6f3bd1*/
    v38 = (double)(int)((((unsigned int)((*v15 >> 10) + 1) >> 1) & 0x1F) - 8) * -0.1963495408493621 /*0x6f3c12*/
        - (double)(int)((((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v38) >> 10) + 1) >> 1)
                       & 0x1F)
                      - 8)
        * -0.1963495408493621;
  }
  else
  {
    Matrix3x4::Identity(&v45); /*0x6f3c1e*/
    v38 = (double)(int)((((unsigned int)((*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, double *))this->RadioClass /*0x6f3c4e*/
                                                      + 170))(
                                                       this,
                                                       &v38) >> 10)
                                       + 1) >> 1)
                       & 0x1F)
                      - 8)
        * -0.1963495408493621;
  }
  v32 = (float)*(int *)(v41 + 1824); /*0x6f3c65*/
  Vector::MatrixMulVectorMath(v45.m_Data, v32, 0.0, 0.0); /*0x6f3c68*/
  v35 = v38; /*0x6f3c76*/
  Matrix2D::Rotate(v45.m_Data, v35); /*0x6f3c79*/
  v16 = -(this->currentBurstIndex % 2 != 0); /*0x6f3c9a*/
  LOBYTE(v16) = v16 & 0xFE; /*0x6f3c9d*/
  v34 = (float)(v12 * (v16 + 1)); /*0x6f3cab*/
  v33 = (float)v40; /*0x6f3cb7*/
  v36 = (float)v37; /*0x6f3c8e*/
  Vector::MatrixMulVectorMath(v45.m_Data, v33, v34, v36); /*0x6f3cba*/
  memset(v42, 0, sizeof(v42)); /*0x6f3ccc*/
  v17 = TransformMatrix3x4Point(v44, (float *)v45.m_Data, v42); /*0x6f3ce4*/
  *(float *)&v38 = *v17; /*0x6f3ceb*/
  v18 = v17[2]; /*0x6f3cf6*/
  *((float *)&v38 + 1) = v17[1]; /*0x6f3cf9*/
  v39 = v18; /*0x6f3cfd*/
  LOWORD(v19) = Math::RoundToInt(*(float *)&v38); /*0x6f3d01*/
  v20 = v19; /*0x6f3d0c*/
  LOWORD(v21) = Math::RoundToInt(-*((float *)&v38 + 1)); /*0x6f3d0e*/
  v22 = v21; /*0x6f3d17*/
  v25 = Math::RoundToInt(v39); /*0x6f3d19*/
  LOWORD(v24) = HIWORD(v25); /*0x6f3d19*/
  LOWORD(v23) = v25; /*0x6f3d19*/
  v26 = v23; /*0x6f3d22*/
  v27 = (int *)(*((int (__fastcall **)(TechnoClass *, int, float *))this->RadioClass + 43))(this, v24, v44); /*0x6f3d29*/
  v28 = *v27; /*0x6f3d2f*/
  v29 = v27[1]; /*0x6f3d31*/
  v30 = v27[2]; /*0x6f3d34*/
  *a2 = v20 + v28; /*0x6f3d46*/
  a2[1] = v22 + v29; /*0x6f3d48*/
  a2[2] = v26 + v30; /*0x6f3d4b*/
  return a2; /*0x6f3d50*/
}



// ==== 0x006F3D60  TechnoClass::GetTurretOffset  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::GetTurretOffset(TechnoClass *this, _DWORD *a2, int a3)
{
  int v4; // ebp
  const void *v5; // eax
  int (__thiscall **vtable0)(TechnoClass *, _BYTE *); // eax
  _DWORD *v7; // esi
  float *v8; // eax
  int v9; // edx
  float v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // ebp
  int *v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  float v22; // [esp+4h] [ebp-D8h]
  float v23; // [esp+Ch] [ebp-D0h]
  double v24; // [esp+24h] [ebp-B8h] BYREF
  float v25; // [esp+2Ch] [ebp-B0h]
  float v26[3]; // [esp+30h] [ebp-ACh] BYREF
  _BYTE v27[4]; // [esp+3Ch] [ebp-A0h] BYREF
  float v28[3]; // [esp+40h] [ebp-9Ch] BYREF
  Matrix3x4 v29; // [esp+4Ch] [ebp-90h] BYREF
  Transform v30[12]; // [esp+7Ch] [ebp-60h] BYREF
  _BYTE v31[48]; // [esp+ACh] [ebp-30h] BYREF

  v4 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6f3d76*/
  if ( this && (this->? & 4) != 0 && *((_DWORD *)this + 413) ) /*0x6f3d88*/
  {
    v5 = (const void *)(*(int (__stdcall **)(_DWORD, _BYTE *, _DWORD))(**((_DWORD **)this + 413) + 36))( /*0x6f3db7*/
                         *((_DWORD *)this + 413),
                         v31,
                         0);
    Transform::Copy(v30, v5); /*0x6f3dbf*/
    vtable0 = (int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass; /*0x6f3dc4*/
    qmemcpy(&v29, v30, sizeof(v29)); /*0x6f3dd3*/
    v7 = (_DWORD *)vtable0[170](this, v27); /*0x6f3ded*/
    v24 = (double)(int)((((unsigned int)((*v7 >> 10) + 1) >> 1) & 0x1F) - 8) * -0.1963495408493621 /*0x6f3e2e*/
        - (double)(int)((((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v24) >> 10) + 1) >> 1)
                       & 0x1F)
                      - 8)
        * -0.1963495408493621;
  }
  else
  {
    Matrix3x4::Identity(&v29); /*0x6f3e3a*/
    v24 = (double)(int)((((unsigned int)((*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, double *))this->RadioClass /*0x6f3e6a*/
                                                      + 170))(
                                                       this,
                                                       &v24) >> 10)
                                       + 1) >> 1)
                       & 0x1F)
                      - 8)
        * -0.1963495408493621;
  }
  v22 = (float)*(int *)(v4 + 1824); /*0x6f3e7d*/
  Vector::MatrixMulVectorMath(v29.m_Data, v22, 0.0, 0.0); /*0x6f3e80*/
  v23 = v24; /*0x6f3e8e*/
  Matrix2D::Rotate(v29.m_Data, v23); /*0x6f3e91*/
  memset(v26, 0, sizeof(v26)); /*0x6f3ea3*/
  v8 = TransformMatrix3x4Point(v28, (float *)v29.m_Data, v26); /*0x6f3ebb*/
  *(float *)&v24 = *v8; /*0x6f3ec2*/
  v9 = *((_DWORD *)v8 + 1); /*0x6f3ec6*/
  v10 = v8[2]; /*0x6f3ecd*/
  HIDWORD(v24) = v9; /*0x6f3ed0*/
  v25 = v10; /*0x6f3ed4*/
  LOWORD(v11) = Math::RoundToInt(*(float *)&v24); /*0x6f3ed8*/
  v12 = v11; /*0x6f3ee3*/
  LOWORD(v13) = Math::RoundToInt(-*((float *)&v24 + 1)); /*0x6f3ee5*/
  v14 = v13; /*0x6f3eee*/
  LOWORD(v15) = Math::RoundToInt(v25); /*0x6f3ef0*/
  v16 = v15; /*0x6f3ef7*/
  v17 = (int *)(*((int (__thiscall **)(TechnoClass *, float *))this->RadioClass + 43))(this, v28); /*0x6f3f00*/
  v18 = *v17; /*0x6f3f06*/
  v19 = v17[1]; /*0x6f3f08*/
  v20 = v17[2]; /*0x6f3f0b*/
  *a2 = v12 + v18; /*0x6f3f1d*/
  a2[1] = v14 + v19; /*0x6f3f1f*/
  a2[2] = v16 + v20; /*0x6f3f22*/
  return a2; /*0x6f3f27*/
}



// ==== 0x006F3F40  TechnoClass::Update  this=TechnoClass  sig=csp ====
_DWORD *__usercall TechnoClass::Update@<eax>(TechnoClass *this, int a2@<edi>)
{
  int v2; // ecx
  TechnoClass *v3; // esi
  Object *v4; // eax
  _DWORD *result; // eax
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  TemporalClass *v18; // eax
  TemporalClass *v19; // eax
  int (__thiscall **vtable0)(TechnoClass *, _DWORD); // edx
  int v21; // eax
  int v22; // eax
  HouseClass *owner; // eax
  int sideIndex; // eax
  _DWORD *v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // [esp-Ch] [ebp-10h]
  int v30; // [esp-Ch] [ebp-10h]
  int v31; // [esp-8h] [ebp-Ch]
  int v32; // [esp-8h] [ebp-Ch]
  int v33; // [esp-4h] [ebp-8h]
  int v34; // [esp-4h] [ebp-8h]

  v3 = (TechnoClass *)v2; /*0x6f3f41*/
  v4 = *(Object **)(v2 + 540); /*0x6f3f43*/
  if ( v4 ) /*0x6f3f4b*/
    *(_BYTE *)(v2 + 1050) = dword_A83D4C == v4; /*0x6f3f55*/
  result = (_DWORD *)(*(int (**)(void))(*(_DWORD *)v2 + 132))(); /*0x6f3f69*/
  if ( result ) /*0x6f3f71*/
  {
    if ( !v3->planningToken ) /*0x6f3f77*/
      TechnoClass::CreatePlanningNode(v3); /*0x6f3f83*/
    if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *, int))v3->RadioClass + 33))(v3, a2) + 3416) ) /*0x6f3f93*/
    {
      v6 = __2_YAPAXI_Z(0x74u); /*0x6f3fa4*/
      if ( v6 ) /*0x6f3fab*/
      {
        v33 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3) + 3428); /*0x6f3fbf*/
        v31 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3) + 3424); /*0x6f3fd0*/
        v29 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3) + 3420); /*0x6f3fe1*/
        v7 = (*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3); /*0x6f3fe4*/
        v8 = SpawnManagerClass::SpawnManagerClass(v6, (int)v3, *(_DWORD *)(v7 + 3416), v29, v31, v33); /*0x6f3ff4*/
      }
      else
      {
        v8 = 0; /*0x6f3ffb*/
      }
      v3->spawnManager = (SpawnManagerClass *)v8; /*0x6f3ffd*/
    }
    if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3) + 3392) ) /*0x6f400d*/
    {
      v9 = __2_YAPAXI_Z(0x64u); /*0x6f401e*/
      if ( v9 ) /*0x6f4025*/
      {
        v34 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3) + 3404); /*0x6f4039*/
        v32 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3) + 3400); /*0x6f404a*/
        v30 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3) + 3396); /*0x6f405b*/
        v10 = (*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3); /*0x6f405e*/
        v11 = SlaveManagerClass::ctor(v9, (int)v3, *(_DWORD *)(v10 + 3392), v30, v32, v34); /*0x6f406e*/
      }
      else
      {
        v11 = 0; /*0x6f4075*/
      }
      v3->slaveManager = (SlaveManagerClass *)v11; /*0x6f4077*/
    }
    if ( *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))v3->RadioClass + 254))(v3, 0) /*0x6f40a2*/
      && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))v3->RadioClass + 254))(v3, 0)
                              + 172)
                  + 341) )
    {
      v12 = __2_YAPAXI_Z(0x50u); /*0x6f40b3*/
      if ( v12 ) /*0x6f40ba*/
      {
        LOBYTE(v13) = *(_BYTE *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 254))(v3) + 320); /*0x6f40cc*/
        v14 = (*((int (__thiscall **)(TechnoClass *, _DWORD, int))v3->RadioClass + 254))(v3, 0, v13); /*0x6f40d7*/
        v15 = CaptureManagerClass::CaptureManagerClass(v12, (int)v3, *(_DWORD *)(*(_DWORD *)v14 + 164), 0); /*0x6f40e9*/
      }
      else
      {
        v15 = 0; /*0x6f40f0*/
      }
      v3->captureManager = (CaptureManagerClass *)v15; /*0x6f40f2*/
    }
    if ( (*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 11))(v3) != 6 /*0x6f412a*/
      && *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))v3->RadioClass + 254))(v3, 0)
      && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))v3->RadioClass + 254))(v3, 0)
                              + 172)
                  + 345) )
    {
      v16 = __2_YAPAXI_Z(0x58u); /*0x6f4136*/
      if ( v16 ) /*0x6f4140*/
        v17 = ParasiteClass::ParasiteClass(v16, (int)v3); /*0x6f4145*/
      else
        v17 = 0; /*0x6f414c*/
      v3[1].radarFlashTimer[2] = v17; /*0x6f414e*/
    }
    if ( *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))v3->RadioClass + 254))(v3, 0) /*0x6f4179*/
      && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))v3->RadioClass + 254))(v3, 0)
                              + 172)
                  + 346) )
    {
      v18 = (TemporalClass *)__2_YAPAXI_Z(0x50u); /*0x6f4185*/
      if ( v18 ) /*0x6f418f*/
        v19 = (TemporalClass *)TemporalClass::TemporalClass(v18, (int)v3); /*0x6f4194*/
      else
        v19 = 0; /*0x6f419b*/
      vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD))v3->RadioClass; /*0x6f419d*/
      v3->temporalUsing = v19; /*0x6f41a3*/
      v3->temporalUsing[1].? = *(_DWORD *)(*(_DWORD *)vtable0[254](v3, 0) + 164); /*0x6f41bd*/
    }
    if ( *(int *)((*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3) + 1564) > 0 ) /*0x6f41d2*/
    {
      v21 = __2_YAPAXI_Z(0x60u); /*0x6f41d6*/
      if ( v21 ) /*0x6f41e0*/
        v22 = AirstrikeClass::AirstrikeClass(v21, (int)v3); /*0x6f41e5*/
      else
        v22 = 0; /*0x6f41ec*/
      v3->airstrike = (AirstrikeClass *)v22; /*0x6f41ee*/
    }
    if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3) + 3375) /*0x6f4212*/
      && *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3) + 3376) )
    {
      owner = v3->owner; /*0x6f421c*/
      v3->isDisguisedFlag = 1; /*0x6f4222*/
      v3->disguisedAsHouse = owner; /*0x6f4229*/
      sideIndex = owner->sideIndex; /*0x6f422f*/
      if ( sideIndex ) /*0x6f4237*/
      {
        if ( sideIndex == 1 ) /*0x6f4250*/
          v3->disguiseAsType = *(ObjectTypeClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3420); /*0x6f425d*/
        else
          v3->disguiseAsType = *(ObjectTypeClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3424); /*0x6f4271*/
      }
      else
      {
        v3->disguiseAsType = *(ObjectTypeClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3416); /*0x6f4245*/
      }
    }
    v25 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3); /*0x6f427b*/
    v26 = v25[809]; /*0x6f4281*/
    v25 += 809; /*0x6f4287*/
    v3->turretRecoil[0] = v26; /*0x6f428c*/
    v3->turretRecoil[1] = v25[1]; /*0x6f4295*/
    v3->turretRecoil[2] = v25[2]; /*0x6f429e*/
    v3->turretRecoil[3] = v25[3]; /*0x6f42a7*/
    v27 = (*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3); /*0x6f42b1*/
    v28 = *(_DWORD *)(v27 + 3256); /*0x6f42b7*/
    result = (_DWORD *)(v27 + 3256); /*0x6f42bd*/
    v3->barrelRecoil[0] = v28; /*0x6f42c2*/
    v3->barrelRecoil[1] = result[1]; /*0x6f42cb*/
    v3->barrelRecoil[2] = result[2]; /*0x6f42d4*/
    v3->barrelRecoil[3] = result[3]; /*0x6f42dd*/
    v3->isTurretRotateSoundPlaying = 1; /*0x6f42e3*/
    v3->turretIsRotating = 0; /*0x6f42ed*/
  }
  return result; /*0x6f42f7*/
}



// ==== 0x006F4300  TechnoClass::Constructor  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::Constructor(TechnoClass *this, int a2)
{
  int v3; // ecx
  int v4; // ecx
  TechnoClass **v5; // edx
  int v6; // eax
  char v8; // [esp+10h] [ebp+4h]

  Helper_65A7E0((RadioClass *)this, a2); /*0x6f430b*/
  this->ironTintStage = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f4317*/
  this->airstrikeTimer[1] = 0; /*0x6f431d*/
  v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f4323*/
  this->airstrikeTintTimer[1] = 0; /*0x6f4329*/
  this->airstrikeTimer[2] = v3; /*0x6f432f*/
  this->cloakProgress[0] = 0; /*0x6f4335*/
  LOBYTE(this->cloakProgress[1]) = 0; /*0x6f433b*/
  this->cloakProgress[2] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f434c*/
  this->cloakProgress[4] = 0; /*0x6f4352*/
  this->cloakProgress[5] = 0; /*0x6f435f*/
  this->cloakProgress[6] = 1; /*0x6f4365*/
  __4type_info_AAEAAV0_ABV0__Z(&this->storedTiberium[2], a2); /*0x6f436b*/
  this->turretRecoil[1] = 1; /*0x6f4375*/
  this->turretRecoil[0] = 2; /*0x6f437b*/
  this->turretRecoil[2] = 1; /*0x6f4381*/
  this->turretRecoil[3] = 1; /*0x6f4387*/
  this->turretRecoil[5] = 0; /*0x6f438d*/
  this->turretRecoil[6] = 0; /*0x6f4393*/
  this->barrelRecoil[1] = 1; /*0x6f4399*/
  this->barrelRecoil[2] = 1; /*0x6f439f*/
  this->barrelRecoil[3] = 1; /*0x6f43a5*/
  this->barrelRecoil[0] = 2; /*0x6f43b5*/
  this->barrelRecoil[5] = 0; /*0x6f43bb*/
  this->barrelRecoil[6] = 0; /*0x6f43c1*/
  VectorClass::Construct((VectorClass *)this->currentTargetThreatValues, 0, 0); /*0x6f43c7*/
  this->currentTargetThreatValues[0] = (int)&DynamicVectorClass<int>::`vftable'; /*0x6f43d1*/
  this->currentTargetThreatValues[5] = 10; /*0x6f43d7*/
  this->currentTargetThreatValues[4] = 0; /*0x6f43da*/
  AbstractClassVector::Construct((AbstractClassVector *)this->currentTargets, 0, 0); /*0x6f43e7*/
  this->currentTargets[0] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x6f43ec*/
  this->currentTargets[5] = 10; /*0x6f43f2*/
  this->currentTargets[4] = 0; /*0x6f43f5*/
  AbstractClassVector::Construct((AbstractClassVector *)this->attackedTargets, 0, 0); /*0x6f4402*/
  this->attackedTargets[0] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x6f4407*/
  this->attackedTargets[5] = 10; /*0x6f440d*/
  this->attackedTargets[4] = 0; /*0x6f4410*/
  this->RadioClass = &TechnoClass::`vftable'; /*0x6f4413*/
  this->? = &TechnoClass::`vftable'; /*0x6f4419*/
  this->? = &TechnoClass::`vftable'; /*0x6f4420*/
  this->? = &off_7F4934; /*0x6f4427*/
  v4 = 0; /*0x6f4433*/
  v8 = 0; /*0x6f4437*/
  if ( *(int *)&stru_A8EB00.?[164] > 0 ) /*0x6f443b*/
  {
    v5 = *(TechnoClass ***)&stru_A8EB00.?[152]; /*0x6f443d*/
    while ( *v5 != this ) /*0x6f4445*/
    {
      ++v4; /*0x6f4447*/
      ++v5; /*0x6f4448*/
      if ( v4 >= *(int *)&stru_A8EB00.?[164] ) /*0x6f444d*/
        goto LABEL_7; /*0x6f444d*/
    }
    v8 = 1; /*0x6f4451*/
  }
LABEL_7:
  AudioController::Init((AudioController *)this->turretRotateSoundController); /*0x6f4456*/
  AudioController::Init((AudioController *)this->gattlingSoundController); /*0x6f4467*/
  AudioController::Init((AudioController *)this->unusedGattlingSoundController); /*0x6f4472*/
  AudioController::Init((AudioController *)this->queuedVoiceSoundController); /*0x6f447d*/
  this->queuedVoiceIndex = -1; /*0x6f4485*/
  this->unknown_4F4 = -1; /*0x6f448b*/
  if ( !v8 /*0x6f44ca*/
    && (*(int *)&stru_A8EB00.?[164] < *(int *)&stru_A8EB00.?[156]
     || (stru_A8EB00.?[161] || !*(_DWORD *)&stru_A8EB00.?[156])
     && *(int *)&stru_A8EB00.?[168] > 0
     && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&stru_A8EB00.?[148] + 8))(
          &stru_A8EB00.?[148],
          *(_DWORD *)&stru_A8EB00.?[156] + *(_DWORD *)&stru_A8EB00.?[168],
          0)) )
  {
    v6 = (*(_DWORD *)&stru_A8EB00.?[164])++; /*0x6f44d7*/
    *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v6) = this; /*0x6f44e6*/
  }
  return &this->RadioClass; /*0x6f44ec*/
}



// ==== 0x006F4500  TechnoClass::DTOR  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::DTOR(int this)
{
  Sidebar *v2; // ecx
  int v3; // ecx
  int v4; // ecx
  TechnoClass *v5; // ecx
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
  ObjectClass *v17; // [esp+10h] [ebp-Ch]
  int v18; // [esp+18h] [ebp-4h] BYREF

  v2 = *(Sidebar **)(this + 1300); /*0x6f4507*/
  *(_DWORD *)this = &TechnoClass::`vftable'; /*0x6f450d*/
  *(_DWORD *)(this + 4) = &TechnoClass::`vftable'; /*0x6f4515*/
  *(_DWORD *)(this + 8) = &TechnoClass::`vftable'; /*0x6f451c*/
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
  v5 = *(TechnoClass **)(this + 728); /*0x6f4565*/
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
  AudioFile::Stop((AudioFile *)(this + 1160)); /*0x6f45cd*/
  AudioFileClass::Release((AudioFileClass *)(this + 1160)); /*0x6f45d4*/
  AudioFile::Stop((AudioFile *)(this + 1188)); /*0x6f45e1*/
  AudioFileClass::Release((AudioFileClass *)(this + 1188)); /*0x6f45e8*/
  AudioFile::Stop((AudioFile *)(this + 1216)); /*0x6f45f5*/
  AudioFileClass::Release((AudioFileClass *)(this + 1216)); /*0x6f45fc*/
  AudioFileClass::Release((AudioFileClass *)(this + 1244)); /*0x6f4607*/
  *(_DWORD *)(this + 540) = 0; /*0x6f4610*/
  *(_BYTE *)(this + 1050) = 0; /*0x6f4616*/
  v18 = this; /*0x6f4628*/
  v9 = (*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)&stru_A8EB00.?[148] + 16))(&stru_A8EB00.?[148], &v18); /*0x6f462c*/
  if ( v9 != -1 ) /*0x6f4633*/
    FactoryClass::RemoveItem((FactoryClass *)&stru_A8EB00.?[148], v9); /*0x6f463b*/
  v18 = this; /*0x6f4650*/
  v10 = (*(int (__thiscall **)(char *, int *))(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E88 + 16))( /*0x6f4654*/
          g_BuildingLoadQueue_Array.__pad_E88,
          &v18);
  if ( v10 != -1 ) /*0x6f465a*/
    DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.__pad_E88, v10); /*0x6f4662*/
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
  *(_DWORD *)(this + 1136) = &VectorClass<AbstractClass *>::`vftable'; /*0x6f469d*/
  AbstractClassVector::ddtor(this + 1136); /*0x6f46a3*/
  v13 = *(void **)(this + 1116); /*0x6f46a8*/
  *(_DWORD *)(this + 1112) = &VectorClass<AbstractClass *>::`vftable'; /*0x6f46ae*/
  if ( v13 && *(_BYTE *)(this + 1125) ) /*0x6f46bc*/
  {
    __3_YAXPAX_Z(v13); /*0x6f46c5*/
    *(_DWORD *)(this + 1116) = 0; /*0x6f46cd*/
  }
  *(_BYTE *)(this + 1125) = 0; /*0x6f46d3*/
  *(_DWORD *)(this + 1120) = 0; /*0x6f46d9*/
  v14 = *(void **)(this + 1092); /*0x6f46df*/
  *(_DWORD *)(this + 1088) = &VectorClass<int>::`vftable'; /*0x6f46e5*/
  if ( v14 && *(_BYTE *)(this + 1101) ) /*0x6f46f3*/
  {
    __3_YAXPAX_Z(v14); /*0x6f46fc*/
    *(_DWORD *)(this + 1092) = 0; /*0x6f4704*/
  }
  *(_BYTE *)(this + 1101) = 0; /*0x6f4710*/
  *(_DWORD *)(this + 1096) = 0; /*0x6f4716*/
  nullsub_69(v17); /*0x6f471c*/
  *(_DWORD *)this = &RadioClass::`vftable'; /*0x6f4721*/
  *(_DWORD *)(this + 4) = &RadioClass::`vftable'; /*0x6f4727*/
  *(_DWORD *)(this + 8) = &RadioClass::`vftable'; /*0x6f472e*/
  *(_DWORD *)(this + 12) = &RadioClass::`vftable'; /*0x6f4735*/
  v15 = *(void **)(this + 228); /*0x6f473c*/
  *(_DWORD *)(this + 224) = &VectorClass<TechnoClass *>::`vftable'; /*0x6f4742*/
  if ( v15 && *(_BYTE *)(this + 237) ) /*0x6f4750*/
  {
    __3_YAXPAX_Z(v15); /*0x6f4759*/
    *(_DWORD *)(this + 228) = 0; /*0x6f4761*/
  }
  *(_BYTE *)(this + 237) = 0; /*0x6f4767*/
  *(_DWORD *)(this + 232) = 0; /*0x6f476d*/
  *(_DWORD *)this = &MissionClass::`vftable'; /*0x6f4775*/
  *(_DWORD *)(this + 4) = &MissionClass::`vftable'; /*0x6f477b*/
  *(_DWORD *)(this + 8) = &MissionClass::`vftable'; /*0x6f4782*/
  *(_DWORD *)(this + 12) = &MissionClass::`vftable'; /*0x6f4789*/
  return ObjectClass::Dtor((ObjectClass *)this); /*0x6f4795*/
}



// ==== 0x006F47A0  HouseClass::CalcProductionSpeed  this=HouseClass  sig=csp ====
int __thiscall HouseClass::CalcProductionSpeed(HouseClass *this)
{
  int v2; // eax
  _DWORD *v3; // eax
  double v4; // st7
  double v5; // st7
  int v6; // eax
  int v7; // edx
  int v8; // kr00_4
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  int FactoryCount; // ecx
  int v13; // edi
  int v14; // eax
  int result; // eax
  int v16; // [esp+8h] [ebp-8h]
  int v17; // [esp+8h] [ebp-8h]
  float v18; // [esp+Ch] [ebp-4h]
  char v19; // [esp+Ch] [ebp-4h]
  float v20; // [esp+Ch] [ebp-4h]

  v2 = (*((int (__thiscall **)(HouseClass *))this->AbstractClass + 34))(this); /*0x6f47a9*/
  v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 136))(v2); /*0x6f47b9*/
  v3 = (_DWORD *)(*((int (__thiscall **)(HouseClass *))this->AbstractClass + 33))(this); /*0x6f47c1*/
  v4 = HouseClass::GetBuildingDamageMultiplier((HouseClass *)this->planningPaths[3], v3) * (double)v16; /*0x6f47d3*/
  Math::RoundToInt(v4); /*0x6f47d7*/
  (*((void (__thiscall **)(HouseClass *))this->AbstractClass + 33))(this); /*0x6f47e4*/
  Math::RoundToInt(v4); /*0x6f47f4*/
  HouseClass::GetPowerRatio((HouseClass *)this->planningPaths[3]); /*0x6f4803*/
  v18 = v4; /*0x6f4808*/
  v5 = 1.0 - (1.0 - v18) * *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1400); /*0x6f4822*/
  if ( v5 <= *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1392) ) /*0x6f4837*/
    v5 = *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1392); /*0x6f483b*/
  if ( v18 < 1.0 && v5 >= *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1396) ) /*0x6f4861*/
    v5 = *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1396); /*0x6f4865*/
  if ( v5 == 0.0 ) /*0x6f4876*/
    v5 = 0.0099999998; /*0x6f487a*/
  v8 = Math::RoundToInt(v5); /*0x6f4886*/
  LOWORD(v7) = HIWORD(v8); /*0x6f4886*/
  LOWORD(v6) = v8; /*0x6f4886*/
  v9 = v6; /*0x6f488b*/
  v17 = v6; /*0x6f4891*/
  v19 = 0; /*0x6f4897*/
  if ( (*((int (__fastcall **)(HouseClass *, int))this->AbstractClass + 11))(this, v7) == 1 ) /*0x6f48a2*/
  {
    v10 = (*((int (__thiscall **)(HouseClass *))this->AbstractClass + 33))(this); /*0x6f48a8*/
    if ( v10 ) /*0x6f48b0*/
      v19 = *(_BYTE *)(v10 + 3278); /*0x6f48b8*/
  }
  v11 = (*((int (__thiscall **)(HouseClass *))this->AbstractClass + 11))(this); /*0x6f48c5*/
  FactoryCount = HouseClass::GetFactoryCount((HouseClass *)this->planningPaths[3], v11, v19); /*0x6f48d4*/
  v20 = *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1404); /*0x6f48e1*/
  if ( v20 > 0.0 && FactoryCount - 1 > 0 ) /*0x6f48fb*/
  {
    v13 = FactoryCount - 1; /*0x6f48fe*/
    do /*0x6f4914*/
    {
      LOWORD(v14) = Math::RoundToInt((double)v17 * v20); /*0x6f4908*/
      v9 = v14; /*0x6f490d*/
      --v13; /*0x6f490f*/
      v17 = v14; /*0x6f4910*/
    }
    while ( v13 ); /*0x6f4914*/
  }
  if ( (*((int (__thiscall **)(HouseClass *))this->AbstractClass + 11))(this) != 6 /*0x6f4929*/
    || !*(_BYTE *)(this->builtInfantryTypes[126] + 5489) )
  {
    return v9; /*0x6f494e*/
  }
  LOWORD(result) = Math::RoundToInt((double)v17 * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1880)); /*0x6f4943*/
  return result; /*0x6f4948*/
}



// ==== 0x006F4960  TechnoClass::SetHouseFlag  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::SetHouseFlag(TechnoClass *this, void *a2)
{
  HouseClass *owner; // eax
  TeamClass *attachedTag; // ecx

  if ( a2 == dword_A83D4C ) /*0x6f4972*/
  {
    if ( this->isDiscoveredByCurrentPlayer ) /*0x6f4974*/
      return 0; /*0x6f4983*/
  }
  else
  {
    if ( this->isDiscoveredByComputer ) /*0x6f4986*/
      return 0; /*0x6f498e*/
    this->isDiscoveredByComputer = 1; /*0x6f4990*/
  }
  if ( !(unsigned __int8)AbstractClass::IsNotNull((ObjectClass *)this) ) /*0x6f49a0*/
    return 0; /*0x6f49a0*/
  if ( !(unsigned __int8)House::IsCurrentPlayer((House *)a2) /*0x6f49ba*/
    && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 97))(this) == 14 )
  {
    (*((void (__thiscall **)(TechnoClass *, int, _DWORD))this->RadioClass + 122))(this, 15, 0); /*0x6f49c4*/
  }
  if ( a2 != dword_A83D4C ) /*0x6f49d0*/
  {
    this->isDiscoveredByComputer = 1; /*0x6f4a31*/
    return 1; /*0x6f4a31*/
  }
  owner = this->owner; /*0x6f49d2*/
  this->isDiscoveredByCurrentPlayer = 1; /*0x6f49d8*/
  LOBYTE(owner->HouseClass_field_timer_B[2]) = 1; /*0x6f49de*/
  BYTE1(this->owner->HouseClass_field_timer_B[2]) = 1; /*0x6f49ea*/
  if ( this->isOwnedByCurrentPlayer ) /*0x6f49f0*/
    return 1; /*0x6f4a38*/
  if ( !dword_A8E7AC ) /*0x6f4a01*/
  {
    attachedTag = (TeamClass *)this->?; /*0x6f4a03*/
    if ( attachedTag ) /*0x6f4a08*/
      TeamClass::Update_0(attachedTag, 4, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x6f4a18*/
  }
  this->owner->isDiscoveredByPlayer = 1; /*0x6f4a25*/
  return 1; /*0x6f497e*/
}



// ==== 0x006F4A40  TechnoClass::CheckPlayerOwned  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CheckPlayerOwned(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = this->isDiscoveredByCurrentPlayer; /*0x6f4a43*/
  if ( (_BYTE)result ) /*0x6f4a4b*/
  {
    result = House::IsCurrentPlayer((House *)this->owner); /*0x6f4a53*/
    if ( !(_BYTE)result ) /*0x6f4a5a*/
      this->isDiscoveredByCurrentPlayer = 0; /*0x6f4a5c*/
  }
  return result; /*0x6f4a62*/
}



// ==== 0x006F4A70  TechnoClass::UpdateProdWithSound  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::UpdateProdWithSound(TechnoClass *this, int a2)
{
  int result; // eax

  result = ObjectClass::UpdateProductionDisplay((ObjectClass *)this); /*0x6f4a78*/
  if ( (_BYTE)result ) /*0x6f4a7f*/
  {
    if ( this->isTether ) /*0x6f4a81*/
      result = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 157))(this, 13); /*0x6f4a91*/
    LOBYTE(result) = 1; /*0x6f4a97*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6f4a9d*/
  }
  return result; /*0x6f4a99*/
}



// ==== 0x006F4AB0  TechnoClass::Mission_RepairDispatch  this=TechnoClass  sig=csp ====
int __userpurge TechnoClass::Mission_RepairDispatch@<eax>(TechnoClass *this, int a2@<ebp>, int a3, int a4, _DWORD *a5)
{
  BuildingClass *v5; // ecx
  BuildingClass *v6; // esi
  _DWORD *v7; // eax
  int result; // eax
  unsigned int v9; // eax
  void (__thiscall **vtable0)(BuildingClass *, int, TechnoClass *); // edx
  void (__thiscall **v11)(BuildingClass *, int, TechnoClass *); // edx
  void (__thiscall **v12)(BuildingClass *, int, TechnoClass *); // edx
  void (__thiscall **v13)(BuildingClass *, int, TechnoClass *); // edx
  TechnoClass *v14; // edi
  int ammo; // edi
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  int v20; // edi
  int v21; // ecx
  int v22; // eax
  _DWORD *v23; // eax
  ParticleSystemClass *damageParticles; // ecx
  int v28; // eax
  BuildingClass *v29; // [esp+0h] [ebp-18h]
  int v30; // [esp+10h] [ebp-8h]

  v6 = v5; /*0x6f4abd*/
  switch ( a3 )
  {
    case 3:
      v14 = this; /*0x6f4c56*/
      if ( v5->? ) /*0x6f4c50*/
      {
        if ( this->isTether ) /*0x6f4c5e*/
          (*((void (__thiscall **)(BuildingClass *, int, TechnoClass *))v5->TechnoClass + 158))(v5, 25, this); /*0x6f4c6d*/
      }
      goto LABEL_23; /*0x6f4c6d*/
    case 7:
    case 9:
    case 22:
      v14 = this; /*0x6f4c6f*/
      (*((void (__thiscall **)(BuildingClass *, int, TechnoClass *))v5->TechnoClass + 158))(v5, 24, this); /*0x6f4c7a*/
LABEL_23:
      ObjectClass::ProcessGroupInput((int)v6, (int)v14, a3, a4); /*0x6f4c80*/
      return 1; /*0x6f4c99*/
    case 8:
      (*((void (__thiscall **)(BuildingClass *, int, TechnoClass *))v5->TechnoClass + 158))(v5, 25, this); /*0x6f4c34*/
      return (*((int (__thiscall **)(BuildingClass *, int, TechnoClass *))v6->TechnoClass + 158))(v6, 3, this); /*0x6f4c4d*/
    case 24:
      if ( (*((int (**)(void))v5->TechnoClass + 11))() == 2 )
      {
        v9 = v6 ? ((*((int (__thiscall **)(BuildingClass *))v6->TechnoClass + 11))(v6) == 2 ? (unsigned int)v6 : 0) : 0;
        if ( *(_BYTE *)(*(_DWORD *)(v9 + 1732) + 3597) ) /*0x6f4b4b*/
          goto LABEL_45; /*0x6f4b4b*/
      }
      if ( v6->? ) /*0x6f4b59*/
        goto LABEL_45; /*0x6f4b61*/
      vtable0 = (void (__thiscall **)(BuildingClass *, int, TechnoClass *))v6->TechnoClass; /*0x6f4b6b*/
      v6->? = 1; /*0x6f4b72*/
      vtable0[158](v6, 24, this); /*0x6f4b79*/
      result = 1; /*0x6f4b81*/
      break; /*0x6f4b8a*/
    case 25:
      if ( !v5->? ) /*0x6f4b95*/
        goto LABEL_45; /*0x6f4b95*/
      v11 = (void (__thiscall **)(BuildingClass *, int, TechnoClass *))v5->TechnoClass; /*0x6f4b9f*/
      v5->? = 0; /*0x6f4ba6*/
      v11[158](v5, 25, this); /*0x6f4bad*/
      result = 1; /*0x6f4bb5*/
      break; /*0x6f4bbe*/
    case 26:
      if ( v5->? ) /*0x6f4bc1*/
        goto LABEL_45; /*0x6f4bc9*/
      v12 = (void (__thiscall **)(BuildingClass *, int, TechnoClass *))v5->TechnoClass; /*0x6f4bd3*/
      v5->? = 1; /*0x6f4bda*/
      v12[158](v5, 26, this); /*0x6f4be1*/
      result = 1; /*0x6f4be9*/
      break; /*0x6f4bf2*/
    case 27:
      if ( !v5->? ) /*0x6f4bfd*/
        goto LABEL_45; /*0x6f4bfd*/
      v13 = (void (__thiscall **)(BuildingClass *, int, TechnoClass *))v5->TechnoClass; /*0x6f4c07*/
      v5->? = 0; /*0x6f4c0e*/
      v13[158](v5, 27, this); /*0x6f4c15*/
      result = 1; /*0x6f4c1d*/
      break; /*0x6f4c26*/
    case 28:
      BuildingClass::GetHealthRatio(v5); /*0x6f4cd9*/
      _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6f4cde*/
      __asm /*0x6f4ce3*/
      {
        fcomp qword ptr [eax+16F8h]
        fnstsw ax
      }
      if ( (_EAX & 0x100) == 0 ) /*0x6f4cee*/
        goto LABEL_25; /*0x6f4cee*/
      v17 = (*((int (__thiscall **)(BuildingClass *))v6->TechnoClass + 33))(v6); /*0x6f4cf4*/
      v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 176))(v17); /*0x6f4d04*/
      v19 = (*((int (__thiscall **)(BuildingClass *))v6->TechnoClass + 33))(v6); /*0x6f4d0a*/
      v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 180))(v19); /*0x6f4d1a*/
      if ( v20 <= 1 ) /*0x6f4d1f*/
        v20 = 1; /*0x6f4d21*/
      if ( (*(int (__stdcall **)(int *))(v6->?->arrayIndex + 24))(&v6->?->arrayIndex) < v18 ) /*0x6f4d37*/
      {
        result = 32; /*0x6f4e33*/
      }
      else
      {
        if ( v18 ) /*0x6f4d3f*/
          HouseClass::ProcessPowerDrain((int *)v6->?, v18); /*0x6f4d48*/
        v21 = v20 + v6->?; /*0x6f4d55*/
        v6->? += v20; /*0x6f4d59*/
        v6->? = v21; /*0x6f4d5c*/
        if ( v6 ) /*0x6f4d5f*/
        {
          if ( (v6->? & 4) != 0 ) /*0x6f4d6e*/
          {
            v22 = v6->Audio8[2]; /*0x6f4d70*/
            if ( v22 ) /*0x6f4d78*/
            {
              v23 = (_DWORD *)(*(_DWORD *)(v22 + 1692) + 44); /*0x6f4d86*/
              *v23 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f4d8e*/
              v23[1] = v30; /*0x6f4d94*/
              v23[2] = 50; /*0x6f4d97*/
              BuildingClass::Deploy(v29, a2, v20); /*0x6f4da6*/
            }
          }
        }
        BuildingClass::GetHealthRatio(v6); /*0x6f4dad*/
        _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6f4db2*/
        __asm /*0x6f4db7*/
        {
          fcomp qword ptr [eax+1700h]
          fnstsw ax
        }
        if ( (_EAX & 0x4100) == 0 || (*((int (__thiscall **)(BuildingClass *))v6->TechnoClass + 114))(v6) < -10 ) /*0x6f4dd1*/
        {
          damageParticles = v6->?; /*0x6f4dd3*/
          if ( damageParticles ) /*0x6f4ddb*/
            (*((void (__thiscall **)(ParticleSystemClass *))damageParticles->ObjectClass + 62))(damageParticles); /*0x6f4ddf*/
        }
        BuildingClass::GetHealthRatio(v6); /*0x6f4de7*/
        _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6f4dec*/
        __asm /*0x6f4df2*/
        {
          fcomp qword ptr [ecx+16F8h]
          fnstsw ax
        }
        if ( (_AX & 0x100) != 0 ) /*0x6f4dfd*/
        {
          result = 1; /*0x6f4e01*/
        }
        else
        {
          v28 = *(_DWORD *)((*((int (__thiscall **)(BuildingClass *))v6->TechnoClass + 33))(v6) + 160); /*0x6f4e17*/
          v6->? = v28; /*0x6f4e1e*/
          v6->? = v28; /*0x6f4e21*/
          result = 33; /*0x6f4e25*/
        }
      }
      break; /*0x6f4e0a*/
    case 30:
      v7 = (_DWORD *)(*((int (**)(void))v5->TechnoClass + 253))(); /*0x6f4adb*/
      if ( !v7 || !*v7 ) /*0x6f4ae9*/
        goto LABEL_45; /*0x6f4aec*/
      (*((void (__thiscall **)(BuildingClass *, _DWORD))v6->TechnoClass + 242))(v6, *(_DWORD *)a4); /*0x6f4afd*/
      (*((void (__thiscall **)(BuildingClass *, int, _DWORD))v6->TechnoClass + 122))(v6, 1, 0); /*0x6f4b0b*/
      result = 1; /*0x6f4b13*/
      break; /*0x6f4b1c*/
    case 31:
      ammo = v5->?; /*0x6f4c9e*/
      if ( ammo == *(_DWORD *)((*((int (**)(void))v5->TechnoClass + 33))() + 1668) ) /*0x6f4cb2*/
      {
LABEL_25:
        result = 10; /*0x6f4cb4*/
      }
      else
      {
        v6->? = ammo + 1; /*0x6f4cc8*/
        result = 1; /*0x6f4cc3*/
      }
      break; /*0x6f4cbf*/
    default:
LABEL_45:
      result = ObjectClass::ProcessGroupInput((int)v6, (int)this, a3, a4); /*0x6f4e3f*/
      break; /*0x6f4e4c*/
  }
  return result; /*0x6f4b11*/
}



// ==== 0x006F4EB0  TechnoClass::PushNearbyUnits  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::PushNearbyUnits(TechnoClass *this)
{
  _DWORD *v2; // eax
  Cell *v3; // edi
  int result; // eax
  int i; // ebx
  int v6; // edi
  _DWORD *v7; // eax
  CellClass *v8; // eax
  int v9; // eax
  int j; // edi
  int v11; // [esp-8h] [ebp-3Ch]
  int v12; // [esp+8h] [ebp-2Ch]
  __int16 v13[2]; // [esp+Ch] [ebp-28h] BYREF
  _DWORD v14[3]; // [esp+10h] [ebp-24h] BYREF
  void **v15; // [esp+1Ch] [ebp-18h] BYREF
  void *Block; // [esp+20h] [ebp-14h]
  int v17; // [esp+24h] [ebp-10h]
  int v18; // [esp+28h] [ebp-Ch]
  int v19; // [esp+2Ch] [ebp-8h]
  int v20; // [esp+30h] [ebp-4h]

  v2 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD *))this->RadioClass + 18))(this, v14); /*0x6f4ec0*/
  LOWORD(v12) = *v2 / 256; /*0x6f4ed3*/
  HIWORD(v12) = v2[1] / 256; /*0x6f4eec*/
  *(_DWORD *)v13 = v12; /*0x6f4ef9*/
  v3 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13); /*0x6f4f03*/
  if ( this->cloakState == 2 /*0x6f4f27*/
    && dword_A83D4C
    && (Object *)this->owner != dword_A83D4C
    && !(unsigned __int8)Cell::IsPassableOffset(v3, (int)dword_A83D4C->Object_field_0x30) )
  {
    (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 84))(this); /*0x6f4f34*/
  }
  result = Cell::HasOccupierBit(v3, this->owner->relatedTagsCount); /*0x6f4f46*/
  if ( (_BYTE)result ) /*0x6f4f4d*/
  {
    result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 168))(this); /*0x6f4f57*/
    if ( (_BYTE)result ) /*0x6f4f5f*/
    {
      EventClass::resetEvent((EventClass *)&v15, 0, 0); /*0x6f4f6e*/
      v15 = &DynamicVectorClass<TechnoClass *>::`vftable'; /*0x6f4f78*/
      v20 = 10; /*0x6f4f80*/
      v19 = 0; /*0x6f4f88*/
      for ( i = *(_DWORD *)&stru_A8EB00.?[164] - 1; i >= 0; --i ) /*0x6f4f95*/
      {
        v6 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i); /*0x6f4fa1*/
        if ( *(TechnoClass **)(v6 + 692) == this ) /*0x6f4faa*/
        {
          v11 = *(_DWORD *)(*(_DWORD *)(v6 + 540) + 48); /*0x6f4fbd*/
          v7 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD *))this->RadioClass + 18))(this, v14); /*0x6f4fc3*/
          v8 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v7); /*0x6f4fcc*/
          if ( ((unsigned __int8)Cell::IsPassableOffset((Cell *)v8, v11) || *(HouseClass **)(v6 + 540) == this->owner) /*0x6f5019*/
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
      (*((void (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 280))(this, 0); /*0x6f503f*/
      for ( j = v19 - 1; j >= 0; --j ) /*0x6f504f*/
        (*(void (__thiscall **)(_DWORD, TechnoClass *))(**((_DWORD **)Block + j) + 968))(*((_DWORD *)Block + j), this); /*0x6f505b*/
      result = (int)Block; /*0x6f5064*/
      v15 = &VectorClass<TechnoClass *>::`vftable'; /*0x6f5068*/
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
int __thiscall FootClass::CompleteProduction(TechnoClass *this)
{
  int result; // eax
  FactoryClass *temporalUsing; // ecx
  _DWORD *v4; // eax
  void (__thiscall **vtable0)(TechnoClass *); // eax
  TeamClass *attachedTag; // ecx
  BuildingClass *v7; // eax
  int v8; // [esp+4h] [ebp-10h]
  _BYTE v9[12]; // [esp+8h] [ebp-Ch] BYREF
  int v10; // [esp+18h] [ebp+4h] BYREF

  result = v10; /*0x6f5090*/
  if ( v10 == 2 ) /*0x6f509d*/
  {
    temporalUsing = (FactoryClass *)this->temporalUsing; /*0x6f50a3*/
    if ( temporalUsing && temporalUsing->production[1] ) /*0x6f50ad*/
      FactoryClass::CompleteItem(temporalUsing); /*0x6f50b4*/
    v4 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v9); /*0x6f50c2*/
    LOWORD(v8) = *v4 / 256; /*0x6f50d5*/
    HIWORD(v8) = v4[1] / 256; /*0x6f50eb*/
    vtable0 = (void (__thiscall **)(TechnoClass *))this->RadioClass; /*0x6f50f4*/
    v10 = v8; /*0x6f50f6*/
    vtable0[264](this); /*0x6f50fa*/
    attachedTag = (TeamClass *)this->?; /*0x6f5100*/
    if ( attachedTag ) /*0x6f5105*/
      TeamClass::Update_0(attachedTag, 34, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x6f5115*/
    if ( !this->isInPlayfield /*0x6f5130*/
      && (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&v10, 1) )
    {
      this->isInPlayfield = 1; /*0x6f5139*/
    }
    if ( !this->isDiscoveredByCurrentPlayer /*0x6f5160*/
      && (*((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v10) + 300) & 0x10) != 0 )
    {
      (*((void (__thiscall **)(TechnoClass *, Object *))this->RadioClass + 102))(this, dword_A83D4C); /*0x6f516c*/
    }
    v7 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v10); /*0x6f517c*/
    BuildingClass::CreateIdleAnim(v7); /*0x6f5183*/
  }
  return result; /*0x6f5188*/
}



// ==== 0x006F5190  TechnoClass::DrawHealthBar  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::DrawHealthBar(TechnoClass *this)
{
  int result; // eax
  TechnoClass *v2; // ebp
  __int16 *v3; // eax
  CellClass *v4; // eax
  _DWORD *v5; // eax
  Iostream_init *CurrentFrame; // eax
  __int16 *v7; // eax
  CellClass *v8; // eax
  _DWORD *v9; // eax
  int v10; // ecx
  int *v11; // esi
  int v12; // eax
  int *v13; // eax
  int v14; // ebx
  int v15; // kr04_4
  int v16; // esi
  int v17; // edi
  _DWORD *v18; // eax
  int v19; // edx
  int (__thiscall **vtable0)(TechnoClass *); // eax
  int *v21; // eax
  int *v22; // eax
  int v23; // ebp
  int *v24; // eax
  int *v25; // eax
  int *v26; // eax
  Coord3D *v27; // eax
  Coord3D *v28; // eax
  Coord *v29; // eax
  int v30; // edx
  int *v31; // eax
  int *v32; // eax
  Coord3D *v33; // eax
  Coord3D *v34; // eax
  Coord *v35; // eax
  int *v36; // eax
  int v37; // eax
  bool v38; // cc
  int v39; // eax
  int *v40; // eax
  int *v41; // eax
  Coord3D *v42; // eax
  Coord3D *v43; // eax
  Coord *v44; // eax
  int *v45; // eax
  int v46; // edx
  int *v47; // eax
  Coord3D *v48; // eax
  Coord3D *v49; // eax
  Coord *v50; // eax
  int *v51; // eax
  int v52; // edx
  int *v53; // eax
  int *v54; // eax
  Coord3D *v55; // eax
  Coord3D *v56; // eax
  Coord *v57; // eax
  int *v58; // eax
  int v59; // edx
  int v60; // edi
  int *v61; // eax
  int *v62; // eax
  Coord3D *v63; // eax
  Coord3D *v64; // eax
  Coord *v65; // eax
  int *v66; // eax
  int v67; // edx
  int *v68; // eax
  int *v69; // eax
  int *v70; // edi
  char v71; // al
  int (__thiscall **v72)(TechnoClass *, int, _DWORD); // edx
  int Coord3D_field_0x04; // [esp+50h] [ebp-98h]
  int v74; // [esp+54h] [ebp-94h]
  int v75; // [esp+60h] [ebp-88h]
  int v76; // [esp+60h] [ebp-88h]
  Coord3D v77; // [esp+64h] [ebp-84h] BYREF
  Coord3D v78; // [esp+70h] [ebp-78h] BYREF
  int v79; // [esp+7Ch] [ebp-6Ch] BYREF
  int v80; // [esp+80h] [ebp-68h]
  int Coord3D_field_0x08; // [esp+84h] [ebp-64h] BYREF
  Coord3D v82; // [esp+88h] [ebp-60h] BYREF
  int v83; // [esp+94h] [ebp-54h] BYREF
  int v84; // [esp+98h] [ebp-50h]
  int v85; // [esp+9Ch] [ebp-4Ch] BYREF
  int v86; // [esp+A0h] [ebp-48h] BYREF
  int v87; // [esp+A4h] [ebp-44h]
  int v88; // [esp+A8h] [ebp-40h] BYREF
  int v89; // [esp+ACh] [ebp-3Ch] BYREF
  int v90; // [esp+B0h] [ebp-38h]
  int v91; // [esp+B4h] [ebp-34h] BYREF
  int v92; // [esp+B8h] [ebp-30h] BYREF
  int v93; // [esp+BCh] [ebp-2Ch]
  int v94; // [esp+C0h] [ebp-28h] BYREF
  int v95[2]; // [esp+C4h] [ebp-24h] BYREF
  int v96; // [esp+CCh] [ebp-1Ch] BYREF
  _DWORD v97[2]; // [esp+D0h] [ebp-18h] BYREF
  int v98; // [esp+D8h] [ebp-10h] BYREF
  _DWORD v99[2]; // [esp+DCh] [ebp-Ch] BYREF
  TechnoClass *v100; // [esp+E4h] [ebp-4h] BYREF
  TechnoClass *retaddr; // [esp+E8h] [ebp+0h]
  int *v102; // [esp+ECh] [ebp+4h]
  int *v103; // [esp+F0h] [ebp+8h]
  int *v104; // [esp+F4h] [ebp+Ch]

  v2 = this; /*0x6f5197*/
  LOBYTE(result) = this->isSinking; /*0x6f519b*/
  v100 = this; /*0x6f51a1*/
  if ( !(_BYTE)result )
  {
    if ( this->? ) /*0x6f51b0*/
    {
      if ( this->? ) /*0x6f51bb*/
      {
        v3 = (__int16 *)(*((int (__thiscall **)(TechnoClass *, int *))this->RadioClass + 110))( /*0x6f51d0*/
                          this,
                          &Coord3D_field_0x08);
        v4 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v3); /*0x6f51dc*/
        if ( !(unsigned __int8)CellClass::QuickPassable(v4) ) /*0x6f51e3*/
        {
          v5 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, int *))v2->RadioClass + 43))(v2, &v85); /*0x6f51fb*/
          Coord::To_Screen((Coord *)g_TacticalClass_Instance, v5, &Coord3D_field_0x08); /*0x6f5208*/
          CurrentFrame = BombClass::GetCurrentFrame(v2->?); /*0x6f5230*/
          DrawToSurfaceSHP( /*0x6f524e*/
            (int)g_DSurface_Hidden_2,
            *(int *)&stru_87F5F0.__pad_58[128],
            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4064),
            (unsigned int)CurrentFrame,
            &Coord3D_field_0x08,
            &DSurface_ViewBounds.field_0,
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
      }
    }
    if ( v2
      && (*((int (__thiscall **)(TechnoClass *))v2->RadioClass + 11))(v2) == 6
      && *((*((int (__thiscall **)(TechnoClass *))v2->RadioClass + 11))(v2) == 6 ? &v2[1].__pad_1C4[4] : (char *)1768)
      && (v7 = (__int16 *)(*((int (__thiscall **)(TechnoClass *, int *))v2->RadioClass + 110))(v2, &Coord3D_field_0x08),
          v8 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v7),
          !(unsigned __int8)CellClass::QuickPassable(v8)) )
    {
      v9 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, int *))v2->RadioClass + 43))(v2, &v85); /*0x6f52c6*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, v9, &Coord3D_field_0x08); /*0x6f52d3*/
      v10 = (int)Rules::GetProductionTimeMult((Rules *)&stru_A8EB00.ObjectTypeClass[24], 14) / 4; /*0x6f52ec*/
      if ( v10 < 2 ) /*0x6f52f2*/
        v10 = 2; /*0x6f52f4*/
      v11 = v103; /*0x6f52fe*/
      DrawToSurfaceSHP( /*0x6f5340*/
        (int)g_DSurface_Hidden_2,
        *(int *)&stru_87F5F0.__pad_58[128],
        FileSystem_WRENCH_SHP,
        6 * (*(_DWORD *)&stru_A8EB00.?[416] % v10) / (v10 - 1),
        &Coord3D_field_0x08,
        v103,
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
    else
    {
      v11 = v103; /*0x6f5347*/
    }
    result = (*((int (__thiscall **)(TechnoClass *, Object *))v2->RadioClass + 50))(v2, dword_A83D4C); /*0x6f5359*/
    if ( !(_BYTE)result ) /*0x6f5361*/
    {
      result = (*((int (__thiscall **)(TechnoClass *, _DWORD, _DWORD))v2->RadioClass + 26))(v2, 0, 0); /*0x6f536c*/
      if ( result != 5 ) /*0x6f5372*/
        result = (*((int (__thiscall **)(TechnoClass *, int *, int *))v2->RadioClass + 277))(v2, v102, v11); /*0x6f5382*/
    }
    if ( v2->? ) /*0x6f5388*/
    {
      if ( (*((int (__thiscall **)(TechnoClass *))v2->RadioClass + 11))(v2) == 6 ) /*0x6f53a2*/
      {
        v75 = 15; /*0x6f53ad*/
        if ( (*((int (__thiscall **)(TechnoClass *))v2->RadioClass + 114))(v2) < -4 ) /*0x6f53be*/
          v75 = 12; /*0x6f53c0*/
        v12 = (*((int (__thiscall **)(TechnoClass *))v2->RadioClass + 33))(v2); /*0x6f53cd*/
        v13 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v12 + 124))(v12, &v86); /*0x6f53dc*/
        v14 = v13[2]; /*0x6f53e6*/
        v15 = *v13; /*0x6f53ec*/
        v16 = *v13 / 2; /*0x6f53fa*/
        v17 = v13[1] / 2; /*0x6f53ff*/
        if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x6f5404*/
          v76 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + v75); /*0x6f5415*/
        else
          v76 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 2 * v75); /*0x6f542b*/
        v18 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, int *))v2->RadioClass + 18))(v2, &v86); /*0x6f5439*/
        *(_DWORD *)v77.__pad_0 = *v18; /*0x6f543e*/
        v77.Coord3D_field_0x04 = v18[1]; /*0x6f5445*/
        v19 = v18[2]; /*0x6f544b*/
        vtable0 = (int (__thiscall **)(TechnoClass *))v2->RadioClass; /*0x6f544e*/
        v77.Coord3D_field_0x08 = v19; /*0x6f5451*/
        if ( vtable0[11](v2) != 15 ) /*0x6f545b*/
        {
          v79 = *(_DWORD *)v77.__pad_0 - v16; /*0x6f5472*/
          Coord3D_field_0x08 = v77.Coord3D_field_0x08; /*0x6f547a*/
          v80 = v17 + v77.Coord3D_field_0x04; /*0x6f5487*/
          v78 = *(Coord3D *)Coord::Subtract( /*0x6f5498*/
                              (Coord *)&v86,
                              v16 + *(_DWORD *)v77.__pad_0,
                              v17 + v77.Coord3D_field_0x04,
                              v77.Coord3D_field_0x08);
          DrawTacticalLine3D(&v78, &v79, v76); /*0x6f54b7*/
          *(_DWORD *)v82.__pad_0 = -v17; /*0x6f54c9*/
          v21 = Coord::Subtract( /*0x6f54db*/
                  (Coord *)&v86,
                  v16 + *(_DWORD *)v77.__pad_0,
                  v77.Coord3D_field_0x04 - v17,
                  v77.Coord3D_field_0x08);
          v79 = *v21; /*0x6f54e2*/
          v80 = v21[1]; /*0x6f54ee*/
          Coord3D_field_0x08 = v21[2]; /*0x6f54fb*/
          v78 = *(Coord3D *)Coord::Subtract( /*0x6f5512*/
                              (Coord *)&v86,
                              v16 + *(_DWORD *)v77.__pad_0,
                              v17 + v77.Coord3D_field_0x04,
                              v77.Coord3D_field_0x08);
          DrawTacticalLine3D(&v78, &v79, v76); /*0x6f5531*/
          v78 = *(Coord3D *)Coord::Subtract( /*0x6f5557*/
                              (Coord *)&v86,
                              *(_DWORD *)v77.__pad_0 - v16,
                              v17 + v77.Coord3D_field_0x04,
                              v14 + v77.Coord3D_field_0x08);
          Coord::Subtract((Coord *)&v79, -v16, v17, 0); /*0x6f5571*/
          v22 = Coord::Subtract( /*0x6f559b*/
                  (Coord *)&v86,
                  *(_DWORD *)v77.__pad_0 + v79,
                  v80 + v77.Coord3D_field_0x04,
                  Coord3D_field_0x08 + v77.Coord3D_field_0x08);
          v83 = *v22; /*0x6f55a2*/
          v84 = v22[1]; /*0x6f55ae*/
          v85 = v22[2]; /*0x6f55bd*/
          DrawTacticalLine3D(&v83, (int *)v78.__pad_0, v76); /*0x6f55c1*/
          v23 = *(_DWORD *)v82.__pad_0; /*0x6f55ce*/
          v24 = Coord::Subtract( /*0x6f55e3*/
                  (Coord *)&v86,
                  v16 + *(_DWORD *)v77.__pad_0,
                  *(_DWORD *)v82.__pad_0 + v77.Coord3D_field_0x04,
                  v14 + v77.Coord3D_field_0x08);
          v83 = *v24; /*0x6f55ea*/
          v84 = v24[1]; /*0x6f55f1*/
          v85 = v24[2]; /*0x6f5600*/
          v25 = Coord::Subtract( /*0x6f5613*/
                  (Coord *)&v86,
                  v16 + *(_DWORD *)v77.__pad_0,
                  v23 + v77.Coord3D_field_0x04,
                  v77.Coord3D_field_0x08);
          v79 = *v25; /*0x6f561a*/
          v80 = v25[1]; /*0x6f5626*/
          Coord3D_field_0x08 = v25[2]; /*0x6f5635*/
          DrawTacticalLine3D(&v79, &v83, v76); /*0x6f5639*/
          v2 = retaddr; /*0x6f563e*/
        }
        if ( v2->? > 0 /*0x6f5667*/
          && ((unsigned __int8)HouseClass::IsAlliedWith((#375 *)v2->owner, (#375 *)dword_A83D4C)
           || *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6118)) )
        {
          (*((void (__thiscall **)(TechnoClass *, int *, int *))v2->RadioClass + 274))(v2, v103, v104); /*0x6f5686*/
        }
        if ( (*((int (__thiscall **)(TechnoClass *))v2->RadioClass + 11))(v2) == 15 ) /*0x6f5697*/
        {
          Coord::Subtract((Coord *)&v89, v15 / 2, v17, 0); /*0x6f5a06*/
          v47 = Coord::Subtract( /*0x6f5a30*/
                  (Coord *)&v92,
                  *(_DWORD *)v77.__pad_0 + v89,
                  v90 + v77.Coord3D_field_0x04,
                  v91 + v77.Coord3D_field_0x08);
          v86 = *v47; /*0x6f5a39*/
          v87 = v47[1]; /*0x6f5a45*/
          v88 = v47[2]; /*0x6f5a4c*/
          *(_DWORD *)v82.__pad_0 = v15 / -2; /*0x6f5a55*/
          Coord::Subtract((Coord *)&v83, v15 / -2, v17, 0); /*0x6f5a59*/
          v78 = *(Coord3D *)Coord::Subtract( /*0x6f5a8c*/
                              (Coord *)&v92,
                              *(_DWORD *)v77.__pad_0 + v83,
                              v84 + v77.Coord3D_field_0x04,
                              v85 + v77.Coord3D_field_0x08);
          v48 = (Coord3D *)Coord3D::Add(&v78, v95, &v78); /*0x6f5ace*/
          v49 = (Coord3D *)Coord3D::Add(v48, v99, &v78); /*0x6f5ad5*/
          v50 = (Coord *)Coord3D::Add(v49, v97, &v86); /*0x6f5adc*/
          v51 = Coord::Divide(v50, &v92, 4); /*0x6f5ae3*/
          v79 = *v51; /*0x6f5aea*/
          v80 = v51[1]; /*0x6f5af1*/
          Coord3D_field_0x08 = v51[2]; /*0x6f5afc*/
          v52 = (int)*g_TacticalClass_Instance; /*0x6f5b0e*/
          if ( v78.Coord3D_field_0x08 <= Coord3D_field_0x08 ) /*0x6f5b11*/
            (*(void (__stdcall **)(int *, Coord3D *, int, _DWORD, int, int))(v52 + 96))( /*0x6f5b28*/
              &v79,
              &v78,
              v76,
              0,
              Coord3D_field_0x04,
              v74);
          else
            (*(void (__stdcall **)(Coord3D *, int *, int, _DWORD, int, int))(v52 + 96))( /*0x6f5b1c*/
              &v78,
              &v79,
              v76,
              0,
              Coord3D_field_0x04,
              v74);
          Coord::Subtract((Coord *)&v88, v82.Coord3D_field_0x08, v17, v14); /*0x6f5b36*/
          v53 = Coord::Subtract( /*0x6f5b63*/
                  (Coord *)&v96,
                  v77.Coord3D_field_0x08 + v88,
                  v89 + *(_DWORD *)v78.__pad_0,
                  v90 + v78.Coord3D_field_0x04);
          v85 = *v53; /*0x6f5b6c*/
          v86 = v53[1]; /*0x6f5b74*/
          v87 = v53[2]; /*0x6f5b84*/
          Coord::Subtract((Coord *)&v91, v82.Coord3D_field_0x08, v17, 0); /*0x6f5b88*/
          v54 = Coord::Subtract( /*0x6f5bb2*/
                  (Coord *)&v96,
                  v77.Coord3D_field_0x08 + v91,
                  v92 + *(_DWORD *)v78.__pad_0,
                  v93 + v78.Coord3D_field_0x04);
          v78.Coord3D_field_0x08 = *v54; /*0x6f5bbb*/
          v79 = v54[1]; /*0x6f5bc7*/
          v80 = v54[2]; /*0x6f5bd3*/
          v55 = (Coord3D *)Coord3D::Add((Coord3D *)&v78.Coord3D_field_0x08, &v100, &v78.Coord3D_field_0x08); /*0x6f5bfa*/
          v56 = (Coord3D *)Coord3D::Add(v55, &v98, &v78.Coord3D_field_0x08); /*0x6f5c01*/
          v57 = (Coord *)Coord3D::Add(v56, &v94, &v85); /*0x6f5c08*/
          v58 = Coord::Divide(v57, &v96, 4); /*0x6f5c0f*/
          Coord3D_field_0x08 = *v58; /*0x6f5c16*/
          *(_DWORD *)v82.__pad_0 = v58[1]; /*0x6f5c1d*/
          v82.Coord3D_field_0x04 = v58[2]; /*0x6f5c30*/
          v59 = (int)*g_TacticalClass_Instance; /*0x6f5c38*/
          if ( v80 <= v82.Coord3D_field_0x04 ) /*0x6f5c3d*/
            (*(void (__stdcall **)(int *, int *, int, _DWORD))(v59 + 96))( /*0x6f5c54*/
              &Coord3D_field_0x08,
              &v78.Coord3D_field_0x08,
              v77.Coord3D_field_0x04,
              0);
          else
            (*(void (__stdcall **)(int *, int *, int, _DWORD))(v59 + 96))( /*0x6f5c48*/
              &v78.Coord3D_field_0x08,
              &Coord3D_field_0x08,
              v77.Coord3D_field_0x04,
              0);
          v60 = -v17; /*0x6f5c57*/
          Coord::Subtract((Coord *)&v88, v15 / 2, v60, 0); /*0x6f5c61*/
          v61 = Coord::Subtract( /*0x6f5c8b*/
                  (Coord *)&v96,
                  v77.Coord3D_field_0x08 + v88,
                  v89 + *(_DWORD *)v78.__pad_0,
                  v90 + v78.Coord3D_field_0x04);
          v85 = *v61; /*0x6f5c93*/
          v86 = v61[1]; /*0x6f5c9c*/
          v87 = v61[2]; /*0x6f5ca7*/
          Coord::Subtract((Coord *)&v91, v15 / 2, v60, v14); /*0x6f5cab*/
          v62 = Coord::Subtract( /*0x6f5cd5*/
                  (Coord *)&v96,
                  v77.Coord3D_field_0x08 + v91,
                  v92 + *(_DWORD *)v78.__pad_0,
                  v93 + v78.Coord3D_field_0x04);
          v78.Coord3D_field_0x08 = *v62; /*0x6f5cde*/
          v79 = v62[1]; /*0x6f5cea*/
          v80 = v62[2]; /*0x6f5cf6*/
          v63 = (Coord3D *)Coord3D::Add((Coord3D *)&v78.Coord3D_field_0x08, &v100, &v78.Coord3D_field_0x08); /*0x6f5d1d*/
          v64 = (Coord3D *)Coord3D::Add(v63, &v98, &v78.Coord3D_field_0x08); /*0x6f5d24*/
          v65 = (Coord *)Coord3D::Add(v64, &v94, &v85); /*0x6f5d2b*/
          v66 = Coord::Divide(v65, &v96, 4); /*0x6f5d32*/
          Coord3D_field_0x08 = *v66; /*0x6f5d39*/
          *(_DWORD *)v82.__pad_0 = v66[1]; /*0x6f5d40*/
          v82.Coord3D_field_0x04 = v66[2]; /*0x6f5d4b*/
          v74 = 0; /*0x6f5d5b*/
          v67 = (int)*g_TacticalClass_Instance; /*0x6f5d5d*/
          Coord3D_field_0x04 = v77.Coord3D_field_0x04; /*0x6f5d5f*/
          if ( v80 <= v82.Coord3D_field_0x04 ) /*0x6f5d60*/
            (*(void (__stdcall **)(int *, int *))(v67 + 96))(&Coord3D_field_0x08, &v78.Coord3D_field_0x08); /*0x6f5d77*/
          else
            (*(void (__stdcall **)(int *, int *))(v67 + 96))(&v78.Coord3D_field_0x08, &Coord3D_field_0x08); /*0x6f5d6b*/
          Coord::Subtract((Coord *)&v86, *(int *)v82.__pad_0, v60, v14); /*0x6f5d85*/
          v68 = Coord::Subtract( /*0x6f5db2*/
                  (Coord *)v95,
                  *(_DWORD *)v77.__pad_0 + v86,
                  v87 + v77.Coord3D_field_0x04,
                  v88 + v77.Coord3D_field_0x08);
          v89 = *v68; /*0x6f5dba*/
          v90 = v68[1]; /*0x6f5dc3*/
          v91 = v68[2]; /*0x6f5dce*/
          Coord::Subtract((Coord *)&v79, v15 / 2, v60, v14); /*0x6f5dd2*/
          v69 = Coord3D::Add(&v77, &v92, &v79); /*0x6f5de5*/
          v83 = *v69; /*0x6f5dec*/
          v84 = v69[1]; /*0x6f5df3*/
          v85 = v69[2]; /*0x6f5dfe*/
          globalHelper_0F6030(&v83, &v89, v76); /*0x6f5e0b*/
        }
        else
        {
          Coord::Subtract((Coord *)&v83, v15 / 2, v17, v14); /*0x6f56a4*/
          v26 = Coord::Subtract( /*0x6f56ce*/
                  (Coord *)&v86,
                  *(_DWORD *)v77.__pad_0 + v83,
                  v84 + v77.Coord3D_field_0x04,
                  v85 + v77.Coord3D_field_0x08);
          v79 = *v26; /*0x6f56d5*/
          v80 = v26[1]; /*0x6f56e1*/
          Coord3D_field_0x08 = v26[2]; /*0x6f56ee*/
          v82 = *(Coord3D *)Coord::Subtract( /*0x6f5707*/
                              (Coord *)&v86,
                              v16 + *(_DWORD *)v77.__pad_0,
                              v17 + v77.Coord3D_field_0x04,
                              v77.Coord3D_field_0x08);
          v27 = (Coord3D *)Coord3D::Add(&v82, v97, &v82); /*0x6f5746*/
          v28 = (Coord3D *)Coord3D::Add(v27, v99, &v82); /*0x6f574d*/
          v29 = (Coord *)Coord3D::Add(v28, &v89, &v79); /*0x6f5754*/
          v78 = *(Coord3D *)Coord::Divide(v29, &v86, 4); /*0x6f5764*/
          v30 = (int)*g_TacticalClass_Instance; /*0x6f5786*/
          if ( v82.Coord3D_field_0x08 <= v78.Coord3D_field_0x08 ) /*0x6f5789*/
            (*(void (__stdcall **)(Coord3D *, Coord3D *, int, _DWORD, int, int))(v30 + 96))( /*0x6f57a0*/
              &v78,
              &v82,
              v76,
              0,
              Coord3D_field_0x04,
              v74);
          else
            (*(void (__stdcall **)(Coord3D *, Coord3D *, int, _DWORD, int, int))(v30 + 96))( /*0x6f5794*/
              &v82,
              &v78,
              v76,
              0,
              Coord3D_field_0x04,
              v74);
          Coord::Subtract((Coord *)&v85, v15 / 2, v17, v14); /*0x6f57aa*/
          v31 = Coord::Subtract( /*0x6f57d7*/
                  (Coord *)&v98,
                  v77.Coord3D_field_0x08 + v85,
                  v86 + *(_DWORD *)v78.__pad_0,
                  v87 + v78.Coord3D_field_0x04);
          v91 = *v31; /*0x6f57df*/
          v92 = v31[1]; /*0x6f57ea*/
          v93 = v31[2]; /*0x6f57f7*/
          Coord::Subtract((Coord *)&Coord3D_field_0x08, v15 / 2, -v17, v14); /*0x6f57fb*/
          v32 = Coord::Subtract( /*0x6f5828*/
                  (Coord *)&v98,
                  v77.Coord3D_field_0x08 + Coord3D_field_0x08,
                  *(_DWORD *)v82.__pad_0 + *(_DWORD *)v78.__pad_0,
                  v82.Coord3D_field_0x04 + v78.Coord3D_field_0x04);
          v82.Coord3D_field_0x08 = *v32; /*0x6f5831*/
          v83 = v32[1]; /*0x6f5838*/
          v84 = v32[2]; /*0x6f584a*/
          v33 = (Coord3D *)Coord3D::Add((Coord3D *)&v82.Coord3D_field_0x08, &v94, &v82.Coord3D_field_0x08); /*0x6f5873*/
          v34 = (Coord3D *)Coord3D::Add(v33, &v88, &v82.Coord3D_field_0x08); /*0x6f587a*/
          v35 = (Coord *)Coord3D::Add(v34, &v100, &v91); /*0x6f5881*/
          v36 = Coord::Divide(v35, &v98, 4); /*0x6f5888*/
          v78.Coord3D_field_0x08 = *v36; /*0x6f588f*/
          v79 = v36[1]; /*0x6f5896*/
          v37 = v36[2]; /*0x6f589a*/
          v38 = v84 <= v37; /*0x6f58a5*/
          v80 = v37; /*0x6f58ad*/
          v39 = (int)*g_TacticalClass_Instance; /*0x6f58b4*/
          if ( v38 ) /*0x6f58b6*/
            (*(void (__stdcall **)(int *, int *, int, _DWORD))(v39 + 96))( /*0x6f58cd*/
              &v78.Coord3D_field_0x08,
              &v82.Coord3D_field_0x08,
              v77.Coord3D_field_0x04,
              0);
          else
            (*(void (__stdcall **)(int *, int *, int, _DWORD))(v39 + 96))( /*0x6f58c1*/
              &v82.Coord3D_field_0x08,
              &v78.Coord3D_field_0x08,
              v77.Coord3D_field_0x04,
              0);
          Coord::Subtract((Coord *)&v91, v15 / 2, v17, v14); /*0x6f58d7*/
          v40 = Coord::Subtract( /*0x6f5901*/
                  (Coord *)&v94,
                  v77.Coord3D_field_0x08 + v91,
                  v92 + *(_DWORD *)v78.__pad_0,
                  v93 + v78.Coord3D_field_0x04);
          Coord3D_field_0x08 = *v40; /*0x6f5909*/
          *(_DWORD *)v82.__pad_0 = v40[1]; /*0x6f5915*/
          v82.Coord3D_field_0x04 = v40[2]; /*0x6f591f*/
          Coord::Subtract((Coord *)&v85, v15 / -2, v17, v14); /*0x6f5923*/
          v41 = Coord::Subtract( /*0x6f594d*/
                  (Coord *)&v94,
                  v77.Coord3D_field_0x08 + v85,
                  v86 + *(_DWORD *)v78.__pad_0,
                  v87 + v78.Coord3D_field_0x04);
          v82.Coord3D_field_0x08 = *v41; /*0x6f5956*/
          v83 = v41[1]; /*0x6f5962*/
          v84 = v41[2]; /*0x6f596e*/
          v42 = (Coord3D *)Coord3D::Add((Coord3D *)&v82.Coord3D_field_0x08, &v88, &v82.Coord3D_field_0x08); /*0x6f5995*/
          v43 = (Coord3D *)Coord3D::Add(v42, &v100, &v82.Coord3D_field_0x08); /*0x6f599c*/
          v44 = (Coord *)Coord3D::Add(v43, &v98, &Coord3D_field_0x08); /*0x6f59a3*/
          v45 = Coord::Divide(v44, &v94, 4); /*0x6f59aa*/
          v78.Coord3D_field_0x08 = *v45; /*0x6f59b1*/
          v79 = v45[1]; /*0x6f59b8*/
          v80 = v45[2]; /*0x6f59c3*/
          v74 = 0; /*0x6f59d3*/
          v46 = (int)*g_TacticalClass_Instance; /*0x6f59d5*/
          Coord3D_field_0x04 = v77.Coord3D_field_0x04; /*0x6f59d7*/
          if ( v84 <= v80 ) /*0x6f59d8*/
            (*(void (__stdcall **)(int *, int *))(v46 + 96))(&v78.Coord3D_field_0x08, &v82.Coord3D_field_0x08); /*0x6f59f6*/
          else
            (*(void (__stdcall **)(int *, int *))(v46 + 96))(&v82.Coord3D_field_0x08, &v78.Coord3D_field_0x08); /*0x6f59e4*/
        }
        v11 = v104; /*0x6f5e10*/
      }
      v70 = v103; /*0x6f5e17*/
      result = (*((int (__thiscall **)(TechnoClass *, int *, int *))v2->RadioClass + 275))(v2, v103, v11); /*0x6f5e27*/
    }
    else
    {
      v70 = v102; /*0x6f5e30*/
    }
    LOBYTE(result) = v2->isMouseHovering; /*0x6f5e37*/
    if ( (_BYTE)result ) /*0x6f5e3f*/
    {
      LOBYTE(result) = v2->?; /*0x6f5e41*/
      if ( !(_BYTE)result ) /*0x6f5e49*/
      {
        v71 = (*((int (__thiscall **)(TechnoClass *, Object *, int))v2->RadioClass + 50))( /*0x6f5e57*/
                v2,
                dword_A83D4C,
                Coord3D_field_0x04);
        v72 = (int (__thiscall **)(TechnoClass *, int, _DWORD))v2->RadioClass; /*0x6f5e5d*/
        if ( v71 ) /*0x6f5e64*/
        {
          result = v72[52](v2, 1, v74); /*0x6f5e68*/
          if ( result ) /*0x6f5e70*/
            result = (*((int (__thiscall **)(TechnoClass *, int *, int *, int))v2->RadioClass + 275))(v2, v70, v11, 1); /*0x6f5e7b*/
        }
        else
        {
          result = ((int (__thiscall **)(TechnoClass *, int, int *))v72)[275](v2, (int)v70, v11); /*0x6f5e87*/
        }
      }
    }
    if ( (TechnoClass *)g_BuildingLoadQueue_Array.? == v2 ) /*0x6f5e93*/
    {
      result = g_BuildingLoadQueue_Array.?[0]; /*0x6f5e95*/
      if ( g_BuildingLoadQueue_Array.?[0] > 0 ) /*0x6f5e9c*/
      {
        result = Timer::GetRemainingMs((Timer *)&g_BuildingLoadQueue_Array.?); /*0x6f5ea3*/
        if ( result > 0 ) /*0x6f5eaa*/
          return DrawToSurfaceSHP( /*0x6f5ede*/
                   (int)g_DSurface_Hidden_2,
                   *(int *)&stru_87F5F0.__pad_58[124],
                   FileSystem_TALKBUBL_SHP,
                   g_BuildingLoadQueue_Array.?[0] - 1,
                   v70,
                   v11,
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
    }
  }
  return result; /*0x6f5ee3*/
}


// ==== 0x006F5EF0  DrawTacticalLine3D  this=Coord  sig=csp ====
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
  lpVtbl = g_TacticalClass_Instance->__tail_0; /*0x6f5fd1*/
  if ( v15 <= v22 ) /*0x6f5fd3*/
    ((void (__stdcall *)(_DWORD *, _DWORD *, int, _DWORD, int, int))lpVtbl[3].QueryInterface)(v21, a1, a3, 0, v19, v20); /*0x6f5fe3*/
  else
    ((void (__stdcall *)(_DWORD *, _DWORD *, int, _DWORD, int, int))lpVtbl[3].QueryInterface)(a1, v21, a3, 0, v19, v20); /*0x6f5fdb*/
  v17 = g_TacticalClass_Instance->__tail_0; /*0x6f5ff8*/
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
  lpVtbl = g_TacticalClass_Instance->__tail_0; /*0x6f6095*/
  if ( v6 <= v8 / 4 ) /*0x6f6098*/
    return ((int (__stdcall *)(_DWORD *, int *, int, _DWORD))lpVtbl[3].QueryInterface)(v11, a1, a3, 0); /*0x6f60b3*/
  else
    return ((int (__stdcall *)(int *, _DWORD *, int, _DWORD))lpVtbl[3].QueryInterface)(a1, v11, a3, 0); /*0x6f60a0*/
}



// ==== 0x006F60C0  TechnoClass::g_var_370bdd  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::g_var_370bdd(TechnoClass *this)
{
  int result; // eax

  return result; /*0x6f60c0*/
}



// ==== 0x006F60D0  TechnoClass::DrawSelectionBox  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::DrawSelectionBox(TechnoClass *this)
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

  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this); /*0x6f60d8*/
  if ( result == 6 ) /*0x6f60de*/
  {
    LOBYTE(result) = this->?; /*0x6f60e4*/
    if ( (_BYTE)result ) /*0x6f60ec*/
    {
      result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this); /*0x6f60f6*/
      if ( result != 15 ) /*0x6f60fc*/
      {
        v25 = v1; /*0x6f6106*/
        v4 = 15; /*0x6f6109*/
        if ( (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 114))(this, v25) < -4 ) /*0x6f6117*/
          v4 = 12; /*0x6f6119*/
        v5 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6f6122*/
        v6 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v5 + 124))(v5, &v41); /*0x6f6134*/
        v7 = *v6; /*0x6f6136*/
        v8 = v6[1]; /*0x6f6138*/
        v30 = v6[2]; /*0x6f613e*/
        v28 = v7 / 2; /*0x6f6147*/
        v9 = v8 / 2; /*0x6f6157*/
        v29 = v8 / 2; /*0x6f615c*/
        if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x6f6163*/
          v27 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + v4); /*0x6f6170*/
        else
          v27 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 2 * v4); /*0x6f6182*/
        v10 = (int *)(*((int (__thiscall **)(TechnoClass *, int *))this->RadioClass + 18))(this, &v40); /*0x6f618f*/
        v11 = *v10; /*0x6f6192*/
        v12 = -v9; /*0x6f6198*/
        v13 = v10[1]; /*0x6f619a*/
        v14 = v10[2]; /*0x6f61a3*/
        Coord::Subtract((Coord *)&v30, -v27, v12, v29); /*0x6f61b1*/
        v15 = Coord::Subtract((Coord *)v42, v11 + v30, v13 + v31, v14 + v32); /*0x6f61d1*/
        v36 = *v15; /*0x6f61da*/
        v37 = v15[1]; /*0x6f61e2*/
        v38 = v15[2]; /*0x6f61f2*/
        Coord::Subtract((Coord *)&v33, -v27, v12, 0); /*0x6f61f6*/
        v16 = Coord::Subtract((Coord *)v42, v11 + v33, v13 + v34, v14 + v35); /*0x6f6216*/
        v39 = *v16; /*0x6f621d*/
        v40 = v16[1]; /*0x6f6229*/
        v41 = v16[2]; /*0x6f6238*/
        DrawTacticalLine3D(&v39, &v36, v26); /*0x6f623c*/
        Coord::Subtract((Coord *)&v39, v27, v12, 0); /*0x6f624d*/
        v17 = Coord::Subtract((Coord *)v42, v11 + v39, v13 + v40, v14 + v41); /*0x6f626d*/
        v33 = *v17; /*0x6f6274*/
        v34 = v17[1]; /*0x6f627b*/
        v35 = v17[2]; /*0x6f628e*/
        Coord::Subtract((Coord *)&v36, -v27, v12, 0); /*0x6f6292*/
        v18 = Coord::Subtract((Coord *)v42, v11 + v36, v13 + v37, v14 + v38); /*0x6f62b2*/
        v30 = *v18; /*0x6f62b9*/
        v31 = v18[1]; /*0x6f62c5*/
        v32 = v18[2]; /*0x6f62d4*/
        DrawTacticalLine3D(&v30, &v33, v26); /*0x6f62d8*/
        Coord::Subtract((Coord *)&v39, -v27, v28, 0); /*0x6f62ed*/
        v19 = Coord::Subtract((Coord *)v42, v11 + v39, v13 + v40, v14 + v41); /*0x6f630d*/
        v33 = *v19; /*0x6f6316*/
        v34 = v19[1]; /*0x6f6322*/
        v35 = v19[2]; /*0x6f632e*/
        Coord::Subtract((Coord *)&v36, -v27, v12, 0); /*0x6f6332*/
        v20 = Coord::Subtract((Coord *)v42, v11 + v36, v13 + v37, v14 + v38); /*0x6f6352*/
        v30 = *v20; /*0x6f6359*/
        v31 = v20[1]; /*0x6f6364*/
        v32 = v20[2]; /*0x6f636b*/
        DrawTacticalLine3D(&v30, &v33, v26); /*0x6f6378*/
        v21 = Coord::Subtract((Coord *)v42, v11 - v27, v13 + v28, v14 + v29); /*0x6f6398*/
        v36 = *v21; /*0x6f639f*/
        v37 = v21[1]; /*0x6f63ab*/
        v38 = v21[2]; /*0x6f63bc*/
        Coord::Subtract((Coord *)&v39, -v27, v12, v29); /*0x6f63c0*/
        v22 = Coord::Subtract((Coord *)v42, v11 + v39, v13 + v40, v14 + v41); /*0x6f63e0*/
        v33 = *v22; /*0x6f63e7*/
        v34 = v22[1]; /*0x6f63ee*/
        v35 = v22[2]; /*0x6f63fd*/
        DrawTacticalLine3D(&v33, &v36, v26); /*0x6f6406*/
        v23 = Coord::Subtract((Coord *)v42, v11 + v27, v13 + v12, v14 + v29); /*0x6f6423*/
        v36 = *v23; /*0x6f642a*/
        v37 = v23[1]; /*0x6f6431*/
        v38 = v23[2]; /*0x6f6447*/
        Coord::Subtract((Coord *)&v39, -v27, v12, v29); /*0x6f644b*/
        v24 = Coord::Subtract((Coord *)v42, v11 + v39, v40 + v13, v41 + v14); /*0x6f6469*/
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
int __thiscall BuildingClass::DrawHealthBar(TechnoClass *this)
{
  double v1; // st7
  int v3; // eax
  int *v4; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // ebp
  _DWORD *v8; // eax
  int v9; // ebx
  int *v10; // eax
  int v11; // edi
  int *v12; // eax
  int v13; // ebx
  int *v14; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // ebp
  _DWORD *v18; // edi
  int v19; // ebp
  int v20; // ecx
  bool v21; // zf
  int v22; // ebp
  int v23; // ecx
  char v24; // bl
  int result; // eax
  int v26; // ecx
  int (__thiscall **vtable0)(TechnoClass *, int *, _DWORD *, int *); // eax
  char isSelected; // al
  _DWORD *v29; // edi
  int v30; // edx
  int v31; // ebx
  int v32; // ebp
  int v33; // edx
  int v34; // eax
  int i; // ebx
  int v40; // eax
  int v41; // eax
  int v42; // [esp+10h] [ebp-3Ch]
  unsigned int v43; // [esp+14h] [ebp-38h]
  unsigned int v44; // [esp+14h] [ebp-38h]
  int v45; // [esp+18h] [ebp-34h]
  int v46; // [esp+18h] [ebp-34h]
  int v47; // [esp+18h] [ebp-34h]
  int v48; // [esp+1Ch] [ebp-30h]
  int v49; // [esp+1Ch] [ebp-30h]
  int v50; // [esp+20h] [ebp-2Ch]
  int v51; // [esp+24h] [ebp-28h]
  int v52; // [esp+28h] [ebp-24h]
  int v53; // [esp+2Ch] [ebp-20h] BYREF
  int v54; // [esp+30h] [ebp-1Ch]
  int v55; // [esp+34h] [ebp-18h] BYREF
  int v56; // [esp+38h] [ebp-14h]
  int v57; // [esp+40h] [ebp-Ch] BYREF
  int v58; // [esp+44h] [ebp-8h]
  int v59; // [esp+48h] [ebp-4h]
  _DWORD *v60; // [esp+50h] [ebp+4h]
  int v61; // [esp+50h] [ebp+4h]
  int v62; // [esp+50h] [ebp+4h]
  int v63; // [esp+50h] [ebp+4h]
  int v64; // [esp+50h] [ebp+4h]
  int *v65; // [esp+54h] [ebp+8h]

  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6 )
  {
    (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 114))(this); /*0x6f64bb*/
    v3 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6f64c5*/
    v4 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v3 + 124))(v3, &v55); /*0x6f64d4*/
    v5 = *v4; /*0x6f64d7*/
    v6 = v4[1]; /*0x6f64dd*/
    v7 = v4[2]; /*0x6f64e0*/
    v8 = Coord::Subtract((Coord *)&v55, *v4 / 2, v6 / 2, v7 / 2); /*0x6f64fb*/
    v9 = v6 - v8[1]; /*0x6f650b*/
    v57 = *v8 - v5; /*0x6f6523*/
    v58 = v9; /*0x6f652e*/
    v59 = v7; /*0x6f6532*/
    v10 = Coord::To_ScreenRaw(&v55, &v57); /*0x6f6536*/
    v48 = *v10; /*0x6f6541*/
    v11 = v10[1]; /*0x6f6549*/
    v50 = v11; /*0x6f6564*/
    v58 = -v58; /*0x6f656a*/
    v12 = Coord::To_ScreenRaw(&v55, &v57); /*0x6f656e*/
    v53 = *v12; /*0x6f6579*/
    v13 = v12[1]; /*0x6f6581*/
    v59 = 0; /*0x6f6592*/
    v58 = -v58; /*0x6f659a*/
    v14 = Coord::To_ScreenRaw(&v55, &v57); /*0x6f659e*/
    v51 = *v14; /*0x6f65a5*/
    v52 = v14[1]; /*0x6f65c0*/
    v58 = -v58; /*0x6f65cb*/
    v15 = (v11 - v13) / 2; /*0x6f65cf*/
    v45 = v15; /*0x6f65d3*/
    BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x6f65d7*/
    __asm { fimul [esp+4Ch+var_34] } /*0x6f65dc*/
    LOWORD(v16) = Math::RoundToInt(v1); /*0x6f65e0*/
    v17 = v16; /*0x6f65e5*/
    v42 = v16; /*0x6f65ee*/
    if ( v16 <= 1 ) /*0x6f65f2*/
    {
      v42 = 1; /*0x6f65f4*/
      v17 = 1; /*0x6f65f8*/
    }
    if ( v17 >= v15 ) /*0x6f65fc*/
    {
      v42 = v15; /*0x6f65fe*/
      v17 = v15; /*0x6f6602*/
    }
    v43 = 1; /*0x6f6606*/
    if ( ObjectClass::IsYellowHP((ObjectClass *)this) ) /*0x6f660a*/
    {
      v43 = 2; /*0x6f6613*/
    }
    else if ( (unsigned __int8)BuildingClass::IsHealthLow((BuildingClass *)this) ) /*0x6f661f*/
    {
      v43 = 4; /*0x6f6628*/
    }
    v18 = v60; /*0x6f6630*/
    v56 = 2 - 2 * v15; /*0x6f6640*/
    if ( v17 > 0 ) /*0x6f6644*/
    {
      v19 = 0; /*0x6f664e*/
      v61 = 0; /*0x6f6650*/
      v46 = v42; /*0x6f6654*/
      do /*0x6f66d6*/
      {
        v20 = v50 + v18[1]; /*0x6f666b*/
        v53 = v48 + *v18 + 4 * v15 + 3 - v19; /*0x6f6673*/
        v54 = v56 + v20 + 2 - v61; /*0x6f6698*/
        DrawToSurfaceSHP( /*0x6f66ba*/
          (int)g_DSurface_Hidden_2,
          *(int *)&stru_87F5F0.__pad_58[124],
          FileSystem_PIPS_SHP,
          v43,
          &v53,
          v65,
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
        v19 += 4; /*0x6f66c7*/
        v21 = v46 == 1; /*0x6f66cd*/
        v61 -= 2; /*0x6f66ce*/
        --v46; /*0x6f66d2*/
      }
      while ( !v21 ); /*0x6f66d6*/
      v17 = v42; /*0x6f66d8*/
    }
    if ( v17 < v15 ) /*0x6f66de*/
    {
      v22 = -2 * v17; /*0x6f66ec*/
      v62 = 4 * v42; /*0x6f66f7*/
      v47 = v15 - v42; /*0x6f66fb*/
      do /*0x6f677b*/
      {
        v23 = v50 + v18[1] + v56 + 2; /*0x6f6718*/
        v53 = v48 + *v18 + 4 * v15 + 3 - v62; /*0x6f6728*/
        v54 = v23 - v22; /*0x6f6741*/
        DrawToSurfaceSHP( /*0x6f675f*/
          (int)g_DSurface_Hidden_2,
          *(int *)&stru_87F5F0.__pad_58[124],
          FileSystem_PIPS_SHP,
          0,
          &v53,
          v65,
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
        v22 -= 2; /*0x6f676f*/
        v21 = v47 == 1; /*0x6f6772*/
        v62 += 4; /*0x6f6773*/
        --v47; /*0x6f6777*/
      }
      while ( !v21 ); /*0x6f677b*/
    }
    v24 = 0; /*0x6f6789*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, (#375 *)dword_A83D4C) /*0x6f67b0*/
      || ((1 << *((_DWORD *)dword_A83D4C->Object_field_0x34 + 46)) & this->displayProductionTo[0]) != 0 )
    {
      v24 = 1; /*0x6f67b2*/
    }
    if ( this
      && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6
      && *((_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6
                   ? this + 1
                   : (TechnoClass *)1312)->RadioClass
         + 5499) )
    {
      v24 = 1; /*0x6f67e6*/
    }
    result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6f67ec*/
    if ( *(_BYTE *)(result + 984) || v24 ) /*0x6f67fe*/
    {
      v26 = v18[1]; /*0x6f6810*/
      v55 = v51 + *v18; /*0x6f6813*/
      vtable0 = (int (__thiscall **)(TechnoClass *, int *, _DWORD *, int *))this->RadioClass; /*0x6f6817*/
      v56 = v52 + v26; /*0x6f681b*/
      return vtable0[276](this, &v55, v18, v65); /*0x6f682c*/
    }
  }
  else
  {
    v21 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 15; /*0x6f6843*/
    isSelected = this->?; /*0x6f6846*/
    if ( v21 ) /*0x6f684c*/
    {
      v29 = v60; /*0x6f6852*/
      if ( isSelected ) /*0x6f6858*/
      {
        v30 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 992) - 25 + v60[1]; /*0x6f6884*/
        v55 = *v60 + 11; /*0x6f688b*/
        v56 = v30; /*0x6f6899*/
        DrawToSurfaceSHP( /*0x6f68b4*/
          (int)g_DSurface_Hidden_2,
          *(int *)&stru_87F5F0.__pad_58[124],
          FileSystem_PIPBRD_SHP,
          1u,
          &v55,
          v65,
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
      v49 = -5; /*0x6f68c3*/
      v31 = 8; /*0x6f68db*/
      v32 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 992) - 24; /*0x6f68e0*/
    }
    else
    {
      v29 = v60; /*0x6f68e8*/
      if ( isSelected ) /*0x6f68ee*/
      {
        v33 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 992) - 26 + v60[1]; /*0x6f6918*/
        v55 = *v60 + 1; /*0x6f691f*/
        v56 = v33; /*0x6f692d*/
        DrawToSurfaceSHP( /*0x6f6947*/
          (int)g_DSurface_Hidden_2,
          *(int *)&stru_87F5F0.__pad_58[124],
          FileSystem_PIPBRD_SHP,
          0,
          &v55,
          v65,
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
      v49 = -15; /*0x6f6956*/
      v31 = 17; /*0x6f696e*/
      v32 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 992) - 25; /*0x6f6973*/
    }
    v63 = v31; /*0x6f6978*/
    BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x6f697c*/
    __asm { fimul [esp+4Ch+arg_0] } /*0x6f6981*/
    LOWORD(v34) = Math::RoundToInt(v1); /*0x6f6985*/
    v64 = v34; /*0x6f698d*/
    if ( v34 <= 1 ) /*0x6f6991*/
    {
      v64 = 1; /*0x6f6993*/
      v34 = 1; /*0x6f699b*/
    }
    if ( v34 >= v31 ) /*0x6f69a1*/
      v64 = v31; /*0x6f69a3*/
    v44 = 16; /*0x6f69a9*/
    BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x6f69b1*/
    _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6f69b6*/
    __asm /*0x6f69bc*/
    {
      fcomp qword ptr [ecx+1700h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x6f69c7*/
      v44 = 17; /*0x6f69c9*/
    BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x6f69d3*/
    _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6f69d8*/
    __asm /*0x6f69de*/
    {
      fcomp qword ptr [edx+1708h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x6f69e9*/
      v44 = 18; /*0x6f69eb*/
    for ( i = 0; i < v64; ++i ) /*0x6f69fb*/
    {
      v40 = v49 + *v29 + 2 * i; /*0x6f6a0e*/
      v56 = v32 + v29[1]; /*0x6f6a11*/
      v55 = v40; /*0x6f6a15*/
      DrawToSurfaceSHP( /*0x6f6a4a*/
        (int)g_DSurface_Hidden_2,
        *(int *)&stru_87F5F0.__pad_58[124],
        FileSystem_PIPS_SHP,
        v44,
        &v55,
        v65,
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
    if ( (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, (#375 *)dword_A83D4C) /*0x6f6a8c*/
      || (result = this->displayProductionTo[0], ((1 << *((_DWORD *)dword_A83D4C->Object_field_0x34 + 46)) & result) != 0) )
    {
      v41 = *v29 - 10; /*0x6f6a96*/
      v56 = v29[1] + 10; /*0x6f6a99*/
      v55 = v41; /*0x6f6aa1*/
      return (*((int (__thiscall **)(TechnoClass *, int *, _DWORD *, int *))this->RadioClass + 276))( /*0x6f6ab0*/
               this,
               &v55,
               v29,
               v65);
    }
  }
  return result; /*0x6f6832*/
}



// ==== 0x006F6AC0  TechnoClass::CleanupDeploy  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CleanupDeploy(TechnoClass *this)
{
  int DB; // edi
  CellClass *v3; // edi
  int v4; // eax
  int v6; // [esp+0h] [ebp-1Ch]
  int v7[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( this->? || !(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) ) /*0x6f6ad7*/
    return RadioClass::ProcessCmd((RadioClass *)this); /*0x6f6adf*/
  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1518) ) /*0x6f6aef*/
    (*((void (__thiscall **)(TechnoClass *, _DWORD, _DWORD, int, Object *))this->RadioClass + 291))( /*0x6f6b06*/
      this,
      0,
      0,
      1,
      dword_A83D4C);
  else
    (*((void (__thiscall **)(TechnoClass *, _DWORD, _DWORD, _DWORD, _DWORD))this->RadioClass + 291))(this, 0, 0, 0, 0); /*0x6f6b16*/
  v7[0] = this->?[0]; /*0x6f6b25*/
  v7[1] = this->?[1]; /*0x6f6b2c*/
  v7[2] = this->?[2]; /*0x6f6b37*/
  MapClass::RevealArea2( /*0x6f6b4f*/
    (MapClass *)&stru_87F5F0.__pad_58[416],
    v7,
    this->lastSightRange - 3,
    this->lastSightRange + 3,
    0);
  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3281) ) /*0x6f6b5e*/
    (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 262))(this); /*0x6f6b6a*/
  if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1528) ) /*0x6f6b7a*/
    TechnoClass::RemoveFromDynamicVector((TechnoClass *)&stru_87F5D8, (char)this); /*0x6f6b88*/
  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1508) ) /*0x6f6b98*/
  {
    DB = CCINIClass::GetDB((CCINIClass *)this->passengers); /*0x6f6bab*/
    if ( DB ) /*0x6f6baf*/
    {
      do /*0x6f6bc7*/
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)DB + 968))(DB, 0); /*0x6f6bb6*/
        DB = *(_DWORD *)(DB + 48); /*0x6f6bbc*/
      }
      while ( DB && (*(_BYTE *)(DB + 20) & 4) != 0 ); /*0x6f6bc7*/
    }
  }
  HouseClass::RegisterGain((int)this->owner, (int)this, 0); /*0x6f6bd1*/
  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 176))(this) > 0 ) /*0x6f6be2*/
  {
    if ( this && (this->? & 4) != 0 ) /*0x6f6bec*/
    {
      v3 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)this + 686); /*0x6f6bff*/
      if ( v3 ) /*0x6f6c03*/
        goto LABEL_20; /*0x6f6c03*/
    }
    else
    {
      v3 = (CellClass *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 111))(this); /*0x6f6c11*/
      if ( v3 ) /*0x6f6c15*/
      {
LABEL_20:
        v6 = -this->threatPosed; /*0x6f6c17*/
        v4 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 14))(this); /*0x6f6c24*/
        CellClass::SetThreatBounds(v3, v4, v6); /*0x6f6c2a*/
        this->threatPosed = 0; /*0x6f6c2f*/
      }
    }
  }
  if ( this->isRadarTracked ) /*0x6f6c35*/
    (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 294))(this); /*0x6f6c44*/
  Mixer::ReleaseChannel((Mixer *)this->turretRotateSoundController); /*0x6f6c50*/
  this->isTurretRotateSoundPlaying = 1; /*0x6f6c5b*/
  this->turretIsRotating = 0; /*0x6f6c65*/
  Mixer::ReleaseChannel((Mixer *)this->gattlingSoundController); /*0x6f6c6b*/
  this->isGattlingSoundPlaying = 0; /*0x6f6c76*/
  this->unknown_4BC = 0; /*0x6f6c7c*/
  Mixer::ReleaseChannel((Mixer *)this->unusedGattlingSoundController); /*0x6f6c82*/
  this->isUnusedGattlingSoundPlaying = 0; /*0x6f6c87*/
  this->unknown_4D8 = 0; /*0x6f6c8d*/
  return RadioClass::ProcessCmd((RadioClass *)this); /*0x6f6c9a*/
}



// ==== 0x006F6CA0  TechnoClass::FinishDeploy  this=TechnoClass  sig=csp ====
char __userpurge TechnoClass::FinishDeploy@<al>(TechnoClass *this, int a2@<ebx>, int *a3, int a4, __int16 a5)
{
  ObjectClass *v5; // ecx
  TechnoClass *v6; // edi
  int *v7; // esi
  int v9; // edx
  __int16 v10; // ax
  int v11; // eax
  __int16 v12; // cx
  int v13; // edx
  int v14; // edx
  CellClass *v15; // edi
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int *v21; // eax
  int v22; // [esp+Ch] [ebp-28h]
  int v23; // [esp+1Ch] [ebp-18h] BYREF
  int v24[2]; // [esp+20h] [ebp-14h] BYREF
  int v25[3]; // [esp+28h] [ebp-Ch] BYREF

  v6 = this; /*0x6f6ca9*/
  v7 = (int *)v5; /*0x6f6cae*/
  if ( !(unsigned __int8)ObjectClass::Deploy(v5) ) /*0x6f6cb1*/
    return 0; /*0x6f6f2a*/
  LOWORD(this) = (int)v6->RadioClass / 256; /*0x6f6cce*/
  HIWORD(this) = (int)v6->? / 256; /*0x6f6ce6*/
  *((_BYTE *)v7 + 981) = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&this, 1); /*0x6f6cfe*/
  if ( !*((_BYTE *)v7 + 144) ) /*0x6f6d04*/
    return 1; /*0x6f6d0f*/
  (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*v7 + 1160))(v7, 0, 0, 0, 0, 0, a2); /*0x6f6d27*/
  v24[0] = v7[39]; /*0x6f6d39*/
  v9 = v7[152] + 3; /*0x6f6d46*/
  v24[1] = v7[40]; /*0x6f6d49*/
  v25[0] = v7[41]; /*0x6f6d55*/
  MapClass::RevealArea2((MapClass *)&stru_87F5F0.__pad_58[416], v24, 0, v9, 0); /*0x6f6d61*/
  if ( *(_DWORD *)((*(int (__thiscall **)(int *))(*v7 + 132))(v7) + 1528) ) /*0x6f6d70*/
    TechnoClass::checkRange((TechnoClass *)&stru_87F5D8, (int)v7); /*0x6f6d80*/
  HouseClass::RegisterGain_0(v7[135], (BuildingClass *)v7, 0); /*0x6f6d8f*/
  LOBYTE(v10) = 0; /*0x6f6d94*/
  HIBYTE(v10) = a4; /*0x6f6d9a*/
  LOWORD(a4) = v10; /*0x6f6da5*/
  FacingClass::Set_SyncLog((char *)v7 + 904, &a4); /*0x6f6daa*/
  LOWORD(a4) = 0x4000; /*0x6f6dbc*/
  FacingClass::Set_SyncLog((char *)v7 + 880, &a4); /*0x6f6dc3*/
  v11 = (*(int (__thiscall **)(int *))(*v7 + 132))(v7); /*0x6f6dcc*/
  LOBYTE(v12) = 0; /*0x6f6dd2*/
  HIBYTE(v12) = *(_BYTE *)(v11 + 976); /*0x6f6dd9*/
  LOWORD(a4) = 0x4000 - v12; /*0x6f6de5*/
  FacingClass::Update((char *)v7 + 880, &a4); /*0x6f6df5*/
  v13 = *v7; /*0x6f6dfa*/
  v7[295] = 1; /*0x6f6dfe*/
  v7[296] = 0; /*0x6f6e08*/
  if ( (*(int (__thiscall **)(int *))(v13 + 44))(v7) == 15 ) /*0x6f6e19*/
    *((_BYTE *)v7 + 504) = 1; /*0x6f6e1b*/
  (*(void (__thiscall **)(int *, int))(*v7 + 1156))(v7, 1); /*0x6f6e2a*/
  v14 = *v7; /*0x6f6e30*/
  *((_BYTE *)v7 + 504) = 0; /*0x6f6e34*/
  if ( (*(unsigned __int8 (__thiscall **)(int *))(v14 + 512))(v7) ) /*0x6f6e3b*/
    (*(void (__thiscall **)(int *))(*v7 + 492))(v7); /*0x6f6e49*/
  *((_BYTE *)v7 + 1056) = 10 * ((int)v6->? / *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5820)); /*0x6f6e6f*/
  LOWORD(a3) = (int)v6->RadioClass / 256; /*0x6f6e83*/
  HIWORD(a3) = (int)v6->? / 256; /*0x6f6e97*/
  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3, 1) ) /*0x6f6ea4*/
    *((_BYTE *)v7 + 1051) = 0; /*0x6f6ead*/
  v15 = (CellClass *)(*(int (__thiscall **)(int *))(*v7 + 444))(v7); /*0x6f6ebd*/
  if ( v15 ) /*0x6f6ec1*/
  {
    v16 = (*(int (__thiscall **)(int *))(*v7 + 704))(v7); /*0x6f6ec7*/
    v17 = *v7; /*0x6f6ecd*/
    v22 = v16; /*0x6f6ecf*/
    v7[322] = v16; /*0x6f6ed2*/
    v18 = (*(int (__thiscall **)(int *))(v17 + 56))(v7); /*0x6f6ed8*/
    CellClass::SetThreatBounds(v15, v18, v22); /*0x6f6ede*/
  }
  v19 = v7[40]; /*0x6f6ee5*/
  v20 = v7[41]; /*0x6f6ee8*/
  v25[0] = v7[39]; /*0x6f6eeb*/
  v25[1] = v19; /*0x6f6eef*/
  v25[2] = v20; /*0x6f6f04*/
  v21 = Coord::WorldToScreen((Coord *)&stru_87F5F0.__pad_58[416], &v23, v25, 1); /*0x6f6f08*/
  v7[130] = *v21; /*0x6f6f10*/
  v7[131] = v21[1]; /*0x6f6f1a*/
  return 1; /*0x6f6d0e*/
}



// ==== 0x006F6F60  TechnoClass::ComputeSlopeDifference  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ComputeSlopeDifference(TechnoClass *this, int *a2)
{
  double v2; // st7
  _DWORD *v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  void *v8; // esi
  void *v9; // edi
  int SlopeIndex; // ebx
  int v11; // ecx
  int v12; // edi
  int v13; // esi
  int v14; // eax
  int result; // eax
  __int16 v16[2]; // [esp+18h] [ebp-14h] BYREF
  __int16 v17[2]; // [esp+1Ch] [ebp-10h] BYREF
  _BYTE v18[12]; // [esp+20h] [ebp-Ch] BYREF
  int *v19; // [esp+30h] [ebp+4h]

  if ( !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 20))(this) /*0x6f6f7c*/
    || !(*(unsigned __int8 (__thiscall **)(int *))(*a2 + 80))(a2) )
  {
    return 0; /*0x6f70c8*/
  }
  v5 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v18); /*0x6f6f91*/
  LOWORD(v19) = *v5 / 256; /*0x6f6fa4*/
  HIWORD(v19) = v5[1] / 256; /*0x6f6fbd*/
  v6 = *a2; /*0x6f6fc6*/
  *(_DWORD *)v16 = v19; /*0x6f6fca*/
  v7 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(v6 + 72))(a2, v18); /*0x6f6fce*/
  LOWORD(v19) = *v7 / 256; /*0x6f6fe1*/
  HIWORD(v19) = v7[1] / 256; /*0x6f6ffa*/
  *(_DWORD *)v17 = v19; /*0x6f7007*/
  v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x6f7015*/
  v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17); /*0x6f7022*/
  SlopeIndex = Cell::GetSlopeIndex((int)v9); /*0x6f702d*/
  if ( Cell::GetSlopeIndex((int)v8) - SlopeIndex >= 0 ) /*0x6f7037*/
  {
    v12 = Cell::GetSlopeIndex((int)v9); /*0x6f7046*/
    v11 = Cell::GetSlopeIndex((int)v8) - v12; /*0x6f704f*/
  }
  else
  {
    v11 = 0; /*0x6f7039*/
  }
  v13 = v11 * g_BuildingLoadQueue_Array.?[1]; /*0x6f708d*/
  LOWORD(v14) = Math::RoundToInt(v2); /*0x6f7090*/
  Math::Sqrt((double)(v13 * v13 + (v14 << 8) * (v14 << 8))); /*0x6f70b2*/
  LOWORD(result) = Math::RoundToInt(v2); /*0x6f70ba*/
  return result; /*0x6f70bf*/
}



// ==== 0x006F70E0  TechnoClass::ComputeSlopePenalty  this=TechnoClass  sig=csp ====
unsigned int __thiscall TechnoClass::ComputeSlopePenalty(TechnoClass *this, int *a2)
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
  int v13; // eax
  __int16 v15[2]; // [esp+8h] [ebp-14h] BYREF
  __int16 v16[2]; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v17[12]; // [esp+10h] [ebp-Ch] BYREF
  int *v18; // [esp+20h] [ebp+4h]

  if ( !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 20))(this) /*0x6f70fc*/
    || !(*(unsigned __int8 (__thiscall **)(int *))(*a2 + 80))(a2) )
  {
    return 0; /*0x6f7214*/
  }
  v4 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v17); /*0x6f7111*/
  LOWORD(v18) = *v4 / 256; /*0x6f7124*/
  HIWORD(v18) = v4[1] / 256; /*0x6f713d*/
  v5 = *a2; /*0x6f7146*/
  *(_DWORD *)v15 = v18; /*0x6f714a*/
  v6 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(v5 + 72))(a2, v17); /*0x6f714e*/
  LOWORD(v18) = *v6 / 256; /*0x6f7161*/
  HIWORD(v18) = v6[1] / 256; /*0x6f717a*/
  *(_DWORD *)v16 = v18; /*0x6f7187*/
  v7 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v15); /*0x6f7195*/
  v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x6f71a2*/
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
  v12 = (double)(v10 / *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6200)) /*0x6f71e4*/
      * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6208);
  if ( v12 >= *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6216) ) /*0x6f71f9*/
    v12 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6216); /*0x6f71fd*/
  LOWORD(v13) = Math::RoundToInt(v12); /*0x6f7203*/
  return v13 << 8; /*0x6f7208*/
}



// ==== 0x006F7220  TechnoClass::CheckTargetLOS  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::CheckTargetLOS(TechnoClass *this, int *a2, int *a3, _DWORD *a4)
{
  double v4; // st7
  int v6; // edi
  int v8; // ebx
  int *v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // ebx
  int v16; // ecx
  int v17; // eax
  TechnoClass *v18; // ebx
  int v20; // eax
  bool v21; // zf
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // eax
  double v26; // [esp+4h] [ebp-40h]
  double v27; // [esp+4h] [ebp-40h]
  double v28; // [esp+4h] [ebp-40h]
  int v30; // [esp+1Ch] [ebp-28h]
  double v31; // [esp+1Ch] [ebp-28h]
  int v32; // [esp+24h] [ebp-20h]
  int v33; // [esp+24h] [ebp-20h]
  int FoundationHeight; // [esp+24h] [ebp-20h]
  int v35; // [esp+24h] [ebp-20h]
  int v36; // [esp+28h] [ebp-1Ch]
  int v37; // [esp+2Ch] [ebp-18h] BYREF
  int v38; // [esp+30h] [ebp-14h]
  int GroundHeight; // [esp+34h] [ebp-10h]
  int v40; // [esp+38h] [ebp-Ch] BYREF
  int v41; // [esp+3Ch] [ebp-8h]
  int v42; // [esp+40h] [ebp-4h]

  if ( !a3 || !a4 ) /*0x6f7242*/
    return 0; /*0x6f7242*/
  v6 = a4[45]; /*0x6f7248*/
  if ( v6 == -512 ) /*0x6f7254*/
    return 1; /*0x6f725e*/
  if ( (*(unsigned __int8 (**)(void))(*a3 + 84))() ) /*0x6f7263*/
    v6 += *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1676); /*0x6f7274*/
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 256))(this) ) /*0x6f727e*/
    v6 = (*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3912) /*0x6f729f*/
        + (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 257))(this)) << 8;
  if ( this->bunkerLinkedUnit && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 6 ) /*0x6f72b6*/
    v6 += *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3924) << 8; /*0x6f72c6*/
  if ( this->? ) /*0x6f72c8*/
    v6 += *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3932) << 8; /*0x6f72e1*/
  v8 = v6; /*0x6f72e9*/
  v30 = a4[40]; /*0x6f72eb*/
  if ( *(_BYTE *)(v30 + 663) ) /*0x6f72ef*/
    v8 = v6 + TechnoClass::ComputeSlopeDifference(this, a3); /*0x6f7306*/
  v9 = (int *)(*(int (__thiscall **)(int *, int *))(*a3 + 72))(a3, &v40); /*0x6f7314*/
  v37 = *v9; /*0x6f7319*/
  v38 = v9[1]; /*0x6f7322*/
  v10 = *a3; /*0x6f7326*/
  GroundHeight = v9[2]; /*0x6f732b*/
  if ( (*(unsigned __int8 (__thiscall **)(int *))(v10 + 80))(a3) /*0x6f7361*/
    && (GroundHeight = Cell::GetGroundHeight(&v37),
        (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v37)->flags[0] & 0x100) != 0) )
  {
    v11 = g_BuildingLoadQueue_Array.?[1] + GroundHeight; /*0x6f736d*/
    GroundHeight += g_BuildingLoadQueue_Array.?[1]; /*0x6f736f*/
  }
  else
  {
    v11 = GroundHeight; /*0x6f7375*/
  }
  v32 = a4[46]; /*0x6f7387*/
  if ( v32 ) /*0x6f738b*/
  {
    v12 = a2[1]; /*0x6f7395*/
    v40 = *a2 - v37; /*0x6f7398*/
    v13 = a2[2]; /*0x6f73a2*/
    v41 = v12 - v38; /*0x6f73a5*/
    __asm { fild [esp+38h+var_8] } /*0x6f73ab*/
    v42 = v13 - v11; /*0x6f73af*/
    __asm /*0x6f73b6*/
    {
      fild [esp+40h+var_4]
      fild [esp+40h+var_C]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fld st(3)
      fmul st, st(4)
      faddp st(1), st
      fstp [esp+40h+var_44+4]; double
      fstp st
      fstp st
      fstp st
    }
    Math::Sqrt(v26); /*0x6f73d7*/
    LOWORD(v14) = Math::RoundToInt(v4); /*0x6f73df*/
    if ( v14 < v32 ) /*0x6f73e8*/
      return 0; /*0x6f73e8*/
    v11 = GroundHeight; /*0x6f73ee*/
  }
  if ( *(_BYTE *)(v30 + 667) ) /*0x6f73f6*/
  {
    v15 = a2[1]; /*0x6f740a*/
    v40 = v37 - *a2; /*0x6f7413*/
    v16 = a2[2]; /*0x6f7419*/
    v41 = v38 - v15; /*0x6f741c*/
    __asm /*0x6f7423*/
    {
      fild [esp+40h+var_8]
      fild [esp+40h+var_C]
    }
    v42 = v11 - v16; /*0x6f742d*/
    __asm /*0x6f7431*/
    {
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+40h+var_44+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v27); /*0x6f7442*/
    LOWORD(v17) = Math::RoundToInt(v4); /*0x6f744a*/
    v33 = v17; /*0x6f744f*/
    v18 = (TechnoClass *)v6; /*0x6f7457*/
    if ( *(_BYTE *)(v30 + 663) ) /*0x6f7459*/
      v18 = (TechnoClass *)(v6 + TechnoClass::ComputeSlopePenalty(this, a3)); /*0x6f7472*/
    if ( v33 <= (int)v18 ) /*0x6f7478*/
    {
      if ( *(_BYTE *)(a4[40] + 661) ) /*0x6f7487*/
      {
        RulesClass::GetFiringDistance(); /*0x6f7491*/
      }
      else
      {
        _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6f7498*/
        __asm { fild dword ptr [ecx+16B8h] } /*0x6f749e*/
      }
      __asm { fstp qword ptr [esp+38h+var_2C+4] } /*0x6f74a4*/
      v20 = TechnoClass::ComputeScanRange(v18, v31); /*0x6f74b4*/
      if ( globalHelper_08ABC0(v20, v33, v42, v31) /*0x6f7504*/
        && ((Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v37)->flags[0] & 0x100) == 0
         || GroundHeight - a2[2] < 3 * g_BuildingLoadQueue_Array.?[1]) )
      {
        return TrajectoryHelper::FindFirstImpenetrableObstacle(a2, &v37, (int)a4, (#375 *)this->owner) == 0; /*0x6f7652*/
      }
    }
  }
  else
  {
    if ( (*(int (__thiscall **)(int *))(*a3 + 44))(a3) == 6 ) /*0x6f752b*/
    {
      FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)a3[328], 0); /*0x6f7542*/
      v8 += (BuildingTypeClass::GetFoundationWidth((BuildingTypeClass *)a3[328]) + FoundationHeight) << 6; /*0x6f7554*/
    }
    v21 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 3; /*0x6f7561*/
    v22 = *a2; /*0x6f7564*/
    if ( v21 ) /*0x6f7566*/
    {
      v35 = v22 - v37; /*0x6f75c1*/
      v36 = a2[1] - v38; /*0x6f75c5*/
      __asm /*0x6f75cc*/
      {
        fild [esp+40h+var_1C]
        fild [esp+40h+var_20]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fstp [esp+40h+var_44+4]; double
      }
    }
    else
    {
      v23 = a2[2]; /*0x6f7577*/
      v41 = a2[1] - v38; /*0x6f757a*/
      __asm { fild [esp+38h+var_8] } /*0x6f7582*/
      v40 = v22 - v37; /*0x6f7588*/
      v42 = v23 - GroundHeight; /*0x6f758c*/
      __asm /*0x6f7593*/
      {
        fild [esp+40h+var_4]
        fild [esp+40h+var_C]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fld st(3)
        fmul st, st(4)
        faddp st(1), st
        fstp [esp+40h+var_44+4]
        fstp st
      }
    }
    __asm /*0x6f75e1*/
    {
      fstp st
      fstp st
    }
    Math::Sqrt(v28); /*0x6f75e5*/
    LOWORD(v24) = Math::RoundToInt(v4); /*0x6f75ed*/
    if ( v24 <= v8 ) /*0x6f75f9*/
    {
      if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2)->flags[0] & 0x100) == 0 ) /*0x6f760f*/
        return TrajectoryHelper::FindFirstImpenetrableObstacle(a2, &v37, (int)a4, (#375 *)this->owner) == 0; /*0x6f760f*/
      v25 = g_BuildingLoadQueue_Array.?[1] + Cell::GetGroundHeight(a2); /*0x6f7625*/
      if ( a2[2] >= v25 || GroundHeight < v25 ) /*0x6f762f*/
        return TrajectoryHelper::FindFirstImpenetrableObstacle(a2, &v37, (int)a4, (#375 *)this->owner) == 0; /*0x6f762f*/
    }
  }
  return 0; /*0x6f7258*/
}



// ==== 0x006F7660  TechnoClass::IsInRange  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsInRange(TechnoClass *this)
{
  int result; // eax
  double v3; // st7
  _DWORD *v4; // eax
  _DWORD *v5; // eax
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

  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 248))(this); /*0x6f7668*/
  if ( !(_BYTE)result ) /*0x6f7670*/
    goto LABEL_5; /*0x6f7670*/
  result = *(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 252))(this) + 172); /*0x6f7682*/
  if ( !result ) /*0x6f768a*/
    goto LABEL_5; /*0x6f768a*/
  v3 = *(float *)(result + 292) - *(float *)(result + 296); /*0x6f769a*/
  v11 = v3; /*0x6f76a5*/
  v4 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, __int16 *))this->RadioClass + 18))(this, &v14); /*0x6f76a9*/
  v12 = *v4 / 256; /*0x6f76bc*/
  v13 = v4[1] / 256; /*0x6f76d6*/
  v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v17 + 72))(v17, v16); /*0x6f76e0*/
  v14 = *v5 / 256; /*0x6f76f6*/
  LOWORD(v15) = v5[1] / 256; /*0x6f770e*/
  Math::Sqrt( /*0x6f774a*/
    (double)(__int16)(v12 - v14) * (double)(__int16)(v12 - v14)
  + (double)(__int16)(v13 - v15) * (double)(__int16)(v13 - v15));
  result = (__int16)Math::RoundToInt(v3); /*0x6f7757*/
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
int __thiscall TechnoClass::CheckCellPassable2(TechnoClass *this)
{
  int (__thiscall **vtable0)(TechnoClass *, _DWORD, int); // edi
  int v3; // eax
  int v5; // [esp+10h] [ebp+4h]

  vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD, int))this->RadioClass; /*0x6f778a*/
  v3 = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 185))(this, v5); /*0x6f778c*/
  return vtable0[234](this, v5, v3); /*0x6f779c*/
}



// ==== 0x006F77B0  TechnoClass::ValidateTarget  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ValidateTarget(TechnoClass *this)
{
  int result; // eax
  int *v2; // ebx
  int *v4; // eax
  int v5; // edx
  int (__thiscall **vtable0)(TechnoClass *, _DWORD); // eax
  int v7; // edi
  _DWORD *v8; // eax
  void *v9; // eax
  int *v10; // eax
  char onBridge; // cl
  int v12; // eax
  int v13; // [esp+14h] [ebp-24h] BYREF
  int v14; // [esp+18h] [ebp-20h]
  int v15; // [esp+1Ch] [ebp-1Ch]
  _BYTE v16[12]; // [esp+20h] [ebp-18h] BYREF
  _BYTE v17[12]; // [esp+2Ch] [ebp-Ch] BYREF
  int *v18; // [esp+3Ch] [ebp+4h]
  int *v19; // [esp+3Ch] [ebp+4h]
  int *v20; // [esp+40h] [ebp+8h] BYREF

  v2 = v18; /*0x6f77b4*/
  if ( v18 ) /*0x6f77bd*/
  {
    v4 = (int *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v16); /*0x6f77d3*/
    v13 = *v4; /*0x6f77d8*/
    v14 = v4[1]; /*0x6f77df*/
    v5 = v4[2]; /*0x6f77e7*/
    vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass; /*0x6f77ea*/
    v15 = v5; /*0x6f77ef*/
    v7 = *(_DWORD *)((int (__thiscall **)(TechnoClass *, int *))vtable0)[254](this, v20); /*0x6f77f9*/
    if ( v7 ) /*0x6f77fd*/
    {
      if ( *(_BYTE *)(v7 + 308) ) /*0x6f7803*/
      {
        v8 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v16); /*0x6f781a*/
        LOWORD(v19) = *v8 / 256; /*0x6f782d*/
        HIWORD(v19) = v8[1] / 256; /*0x6f7845*/
        v20 = v19; /*0x6f784e*/
        v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v20); /*0x6f7858*/
        v10 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v9 + 72))(v9, v17); /*0x6f7866*/
        v13 = *v10; /*0x6f786b*/
        v14 = v10[1]; /*0x6f7872*/
        onBridge = this->?; /*0x6f7876*/
        v12 = v10[2]; /*0x6f787c*/
        v15 = v12; /*0x6f7881*/
        if ( onBridge ) /*0x6f7885*/
          v15 = g_BuildingLoadQueue_Array.?[1] + v12; /*0x6f788d*/
      }
    }
    if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 21))(this) ) /*0x6f7895*/
      v15 = *(_DWORD *)((*(int (__thiscall **)(int *, _BYTE *))(*v2 + 72))(v2, v17) + 8); /*0x6f78ab*/
    LOBYTE(result) = TechnoClass::CheckTargetLOS(this, &v13, v2, (_DWORD *)v7); /*0x6f78b8*/
  }
  else
  {
    LOBYTE(result) = 1; /*0x6f77c0*/
  }
  return result; /*0x6f77bf*/
}



// ==== 0x006F78D0  TechnoClass::CheckAndFireAtTarget  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CheckAndFireAtTarget(TechnoClass *this)
{
  int v2; // edi
  int *v3; // eax
  int v4; // eax
  int v6; // [esp+Ch] [ebp+4h]

  v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 250))(this); /*0x6f78de*/
  v3 = (int *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, v2); /*0x6f78e3*/
  if ( v3 && (v4 = *v3) != 0 && *(_BYTE *)(v4 + 310) ) /*0x6f78f3*/
    return (*((int (__thiscall **)(TechnoClass *, int, int))this->RadioClass + 234))(this, v6, v2); /*0x6f7907*/
  else
    return (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 235))(this, v6); /*0x6f791b*/
}



// ==== 0x006F7930  TechnoClass::CheckCellPassable  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CheckCellPassable(TechnoClass *this)
{
  CellClass *v2; // eax
  int (__thiscall **vtable0)(TechnoClass *, _DWORD, int); // ebx
  CellClass *v4; // edi
  int v5; // eax
  _DWORD *v7; // [esp+10h] [ebp+4h]

  v2 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v7); /*0x6f793f*/
  vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD, int))this->RadioClass; /*0x6f7944*/
  v4 = v2; /*0x6f7946*/
  v5 = (*((int (__thiscall **)(TechnoClass *, CellClass *))this->RadioClass + 185))(this, v2); /*0x6f794b*/
  return ((int (__thiscall **)(TechnoClass *, CellClass *, int))vtable0)[234](this, v4, v5); /*0x6f795b*/
}



// ==== 0x006F7970  TechnoClass::CheckCellPassable3  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CheckCellPassable3(TechnoClass *this)
{
  int (__thiscall **vtable0)(TechnoClass *, CellClass *, _DWORD); // edi
  CellClass *v3; // eax
  _DWORD *v5; // [esp+Ch] [ebp+4h]
  int v6; // [esp+10h] [ebp+8h]

  vtable0 = (int (__thiscall **)(TechnoClass *, CellClass *, _DWORD))this->RadioClass; /*0x6f797d*/
  v3 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v5); /*0x6f7985*/
  return vtable0[234](this, v3, v6); /*0x6f7993*/
}



// ==== 0x006F79A0  TechnoClass::GetBridgeDamageMult  this=TechnoClass  sig=csp ====
double __thiscall TechnoClass::GetBridgeDamageMult(TechnoClass *this, __int16 *a2)
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
  Cell *v11; // eax
  _DWORD *v12; // eax
  __int16 v13; // ax
  Cell *v14; // eax
  _DWORD *v15; // eax
  int v16; // edi
  __int16 v17; // cx
  int v18; // eax
  __int16 v19; // ax
  Cell *v20; // eax
  _DWORD *v21; // eax
  Cell *v22; // eax
  _DWORD *v23; // eax
  __int16 v26[2]; // [esp+10h] [ebp-30h] BYREF
  int v27; // [esp+14h] [ebp-2Ch]
  int v28; // [esp+18h] [ebp-28h]
  int v29; // [esp+1Ch] [ebp-24h]
  int v30; // [esp+20h] [ebp-20h]
  int v31; // [esp+24h] [ebp-1Ch]
  int v32; // [esp+28h] [ebp-18h]
  int v33; // [esp+2Ch] [ebp-14h]
  int v34; // [esp+32h] [ebp-Eh]
  double v35; // [esp+38h] [ebp-8h]

  v2 = (int *)(*((int (__fastcall **)(TechnoClass *))this->RadioClass + 253))(this); /*0x6f79b2*/
  if ( !v2 ) /*0x6f79ba*/
    return 1.0; /*0x6f79ba*/
  v3 = *v2; /*0x6f79c0*/
  if ( !v3 || !*(_BYTE *)(v3 + 326) ) /*0x6f79ca*/
    return 1.0; /*0x6f7c8a*/
  v4 = 1; /*0x6f79de*/
  v35 = 1.0; /*0x6f79e3*/
  v32 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5168) / 256; /*0x6f7a07*/
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
          if ( v9 >= *(int *)&stru_87F5F0.__pad_58[708] /*0x6f7a45*/
            && v9 < *(_DWORD *)&stru_87F5F0.__pad_58[708] + *(_DWORD *)&stru_87F5F0.__pad_58[716] )
          {
            v10 = a2[1]; /*0x6f7a4e*/
            if ( v10 - v4 >= *(int *)&stru_87F5F0.__pad_58[712] ) /*0x6f7a5d*/
            {
              LOWORD(v34) = -(__int16)v4; /*0x6f7a65*/
              LOWORD(v28) = v7 + v8; /*0x6f7a6a*/
              HIWORD(v28) = v10 - v4; /*0x6f7a7a*/
              *(_DWORD *)v26 = v28; /*0x6f7a87*/
              v11 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v26); /*0x6f7a8c*/
              v12 = Cell::IsBridge(v11); /*0x6f7a93*/
              if ( v12 ) /*0x6f7a9a*/
              {
                if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)v12) ) /*0x6f7aa7*/
                  v35 = v35 * 0.5; /*0x6f7aba*/
              }
            }
            v13 = a2[1]; /*0x6f7abe*/
            if ( v4 + v13 < *(_DWORD *)&stru_87F5F0.__pad_58[712] + *(_DWORD *)&stru_87F5F0.__pad_58[720] ) /*0x6f7ad7*/
            {
              HIWORD(v29) = v4 + v13; /*0x6f7ade*/
              LOWORD(v29) = v7 + *a2; /*0x6f7aee*/
              *(_DWORD *)v26 = v29; /*0x6f7afc*/
              v14 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v26); /*0x6f7b00*/
              v15 = Cell::IsBridge(v14); /*0x6f7b07*/
              if ( v15 ) /*0x6f7b0e*/
              {
                if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)v15) ) /*0x6f7b1b*/
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
          if ( v18 >= *(int *)&stru_87F5F0.__pad_58[712] /*0x6f7b72*/
            && v18 < *(_DWORD *)&stru_87F5F0.__pad_58[712] + *(_DWORD *)&stru_87F5F0.__pad_58[720] )
          {
            v19 = *a2; /*0x6f7b7b*/
            if ( *a2 - v4 >= *(int *)&stru_87F5F0.__pad_58[708] ) /*0x6f7b89*/
            {
              LOWORD(v33) = -(__int16)v4; /*0x6f7b91*/
              HIWORD(v30) = v16 + v17; /*0x6f7b9c*/
              LOWORD(v30) = v19 - v4; /*0x6f7ba5*/
              *(_DWORD *)v26 = v30; /*0x6f7bb4*/
              v20 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v26); /*0x6f7bb8*/
              v21 = Cell::IsBridge(v20); /*0x6f7bbf*/
              if ( v21 ) /*0x6f7bc6*/
              {
                if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)v21) ) /*0x6f7bd3*/
                  v35 = v35 * 0.5; /*0x6f7be6*/
              }
            }
            if ( v4 + *a2 < *(_DWORD *)&stru_87F5F0.__pad_58[708] + *(_DWORD *)&stru_87F5F0.__pad_58[716] ) /*0x6f7c02*/
            {
              LOWORD(v31) = v4 + *a2; /*0x6f7c09*/
              HIWORD(v31) = a2[1] + v16; /*0x6f7c1a*/
              *(_DWORD *)v26 = v31; /*0x6f7c27*/
              v22 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v26); /*0x6f7c2c*/
              v23 = Cell::IsBridge(v22); /*0x6f7c33*/
              if ( v23 ) /*0x6f7c3a*/
              {
                if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)v23) ) /*0x6f7c47*/
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



// ==== 0x006F7CA0  TechnoClass::EvaluateTarget  this=TechnoClass  sig=csp ====
char __userpurge TechnoClass::EvaluateTarget@<al>(
        TechnoClass *this,
        double a2@<st0>,
        int a3,
        int a4,
        int a5,
        int a6,
        int *a7,
        int a8,
        _DWORD *a9)
{
  int *v9; // ecx
  int *v10; // edi
  char v11; // al
  int *v12; // esi
  int v13; // ebx
  int v14; // ebp
  _DWORD *v17; // eax
  CellClass *v18; // eax
  int *v19; // edx
  int *v20; // ebp
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  char v24; // cl
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  char v28; // bl
  Object *v29; // ebp
  int v30; // eax
  _DWORD *v33; // eax
  CellClass *v34; // eax
  char result; // al
  int v36; // eax
  int v37; // ecx
  int v38; // edx
  _DWORD *v39; // ebp
  char v40; // al
  int v41; // edx
  _DWORD *v42; // ebp
  _DWORD *v43; // eax
  int v44; // edx
  int v45; // ebx
  int v46; // eax
  int v47; // ebp
  int v48; // eax
  bool v49; // zf
  _DWORD *v50; // ebp
  _DWORD *v51; // eax
  int v52; // ebx
  int v53; // ecx
  int v54; // edx
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // ebp
  int v59; // eax
  bool v60; // bl
  bool v61; // al
  int v62; // eax
  bool v63; // bl
  bool v64; // al
  int *v65; // ebp
  int v66; // edx
  int v67; // eax
  _DWORD *v68; // eax
  CellClass *v71; // ebp
  CellClass *v72; // eax
  double v73; // st7
  int v74; // eax
  int v75; // edx
  int v76; // kr04_4
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // ebx
  int *v82; // ecx
  int v83; // eax
  int v84; // eax
  int v85; // eax
  _DWORD *v86; // eax
  _DWORD *v87; // eax
  double BridgeDamageMult; // st7
  int v90; // eax
  int v91; // eax
  double v92; // [esp+28h] [ebp-44h]
  double v93; // [esp+28h] [ebp-44h]
  int v94; // [esp+2Ch] [ebp-40h]
  char v95; // [esp+2Ch] [ebp-40h]
  char v96; // [esp+43h] [ebp-29h]
  int v97; // [esp+44h] [ebp-28h]
  double v98; // [esp+48h] [ebp-24h] BYREF
  int v99; // [esp+50h] [ebp-1Ch]
  _DWORD v100[2]; // [esp+54h] [ebp-18h] BYREF
  int v101; // [esp+5Ch] [ebp-10h]
  _BYTE v102[12]; // [esp+60h] [ebp-Ch] BYREF
  TechnoClass *thisa; // [esp+70h] [ebp+4h]

  v10 = v9; /*0x6f7ca7*/
  v11 = (*(int (**)(void))(*v9 + 816))(); /*0x6f7cab*/
  v12 = (int *)a5; /*0x6f7cb1*/
  v96 = v11; /*0x6f7cba*/
  v13 = (*(int (__thiscall **)(int *, int))(*v10 + 740))(v10, a5); /*0x6f7cc4*/
  v97 = v13; /*0x6f7ccb*/
  v14 = *(_DWORD *)(*(int (__thiscall **)(int *, int))(*v10 + 1016))(v10, v13); /*0x6f7cd5*/
  if ( ((unsigned int)this & 0x18200) == 0 /*0x6f7cf1*/
    && (*(int (__thiscall **)(int *, int *, int))(*v10 + 956))(v10, v12, v13) == 5 )
  {
    return 0; /*0x6f7cf1*/
  }
  if ( v12[28] <= 0 && *(_DWORD *)((*(int (__thiscall **)(int *))(*v10 + 132))(v10) + 916) == 2 ) /*0x6f7d13*/
    return 0; /*0x6f7d13*/
  if ( v14 ) /*0x6f7d1b*/
  {
    if ( *(_DWORD *)(v14 + 172) ) /*0x6f7d1d*/
    {
      _EAX = *(_DWORD *)((*(int (__thiscall **)(int *))(*v12 + 132))(v12) + 156); /*0x6f7d31*/
      _ECX = *(_DWORD *)(v14 + 172); /*0x6f7d37*/
      __asm /*0x6f7d3d*/
      {
        fld qword ptr [ecx+eax*8+0A0h]
        fcomp ds:flt_7F4E38
        fnstsw ax
      }
      if ( (_EAX & 0x4100) != 0 ) /*0x6f7d4f*/
        return 0; /*0x6f7d4f*/
    }
  }
  if ( *(_DWORD *)((*(int (__thiscall **)(int *))(*v10 + 132))(v10) + 1540) == 2 /*0x6f7d82*/
    && (*(unsigned __int8 (__thiscall **)(int *))(*v12 + 80))(v12)
    && *(_DWORD *)((*(int (__thiscall **)(int *))(*v12 + 444))(v12) + 236) != 2 )
  {
    return 0; /*0x6f7d82*/
  }
  if ( !v12 ) /*0x6f7d8a*/
    return 0; /*0x6f7d8a*/
  if ( *((_BYTE *)v12 + 129) ) /*0x6f7d90*/
    return 0; /*0x6f7d90*/
  if ( !v12[27] ) /*0x6f7d9e*/
    return 0; /*0x6f7d9e*/
  if ( v12[136] == 2 ) /*0x6f7daf*/
  {
    v94 = *(_DWORD *)(v10[135] + 48); /*0x6f7dc0*/
    v17 = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(*v12 + 72))(v12, v100); /*0x6f7dc4*/
    v18 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v17); /*0x6f7dcd*/
    if ( !(unsigned __int8)Cell::IsPassableOffset((Cell *)v18, v94) && v10[135] != v12[135] ) /*0x6f7deb*/
      return 0; /*0x6f7deb*/
  }
  if ( !*((_BYTE *)v12 + 981) ) /*0x6f7df1*/
    return 0; /*0x6f7df1*/
  if ( MissionClass::GetMissionControl((MissionClass *)v12)[4] ) /*0x6f7e06*/
    return 0; /*0x6f7e06*/
  if ( (*(int (__thiscall **)(int *))(*v12 + 456))(v12) < -20 ) /*0x6f7e1e*/
    return 0; /*0x6f7e1e*/
  v19 = (int *)(*(int (__thiscall **)(int *, _DWORD *))(*v12 + 72))(v12, v100); /*0x6f7e30*/
  v20 = a7; /*0x6f7e32*/
  v21 = *v19; /*0x6f7e39*/
  v22 = v19[1]; /*0x6f7e3b*/
  v101 = v19[2]; /*0x6f7e41*/
  if ( a7 != (int *)-1 ) /*0x6f7e45*/
  {
    LOWORD(a5) = v21 / 256; /*0x6f7e53*/
    v23 = v22; /*0x6f7e5a*/
    v24 = *((_BYTE *)v12 + 140); /*0x6f7e5b*/
    v25 = *v10; /*0x6f7e69*/
    HIWORD(a5) = v23 / 256; /*0x6f7e6e*/
    v95 = v24; /*0x6f7e77*/
    v26 = (*(int (__thiscall **)(int *))(v25 + 132))(v10); /*0x6f7e7e*/
    if ( (int *)MapClass::GetTileIndex( /*0x6f7e9c*/
                  (MapClass *)&stru_87F5F0.__pad_58[416],
                  (__int16 *)&a5,
                  *(_DWORD *)(v26 + 1460),
                  v95) != v20 )
      return 0; /*0x6f7e9c*/
  }
  v27 = v10[71]; /*0x6f7ea2*/
  v28 = 0; /*0x6f7ea8*/
  v29 = 0; /*0x6f7eaa*/
  if ( v27 ) /*0x6f7eae*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v27 + 132))(v27) + 1508) ) /*0x6f7eb8*/
    {
      v30 = *(_DWORD *)(v10[71] + 704); /*0x6f7ec8*/
      if ( v30 ) /*0x6f7ed0*/
      {
        v29 = *(Object **)(v30 + 540); /*0x6f7ed2*/
        v28 = 1; /*0x6f7ed8*/
      }
    }
  }
  if ( (*(int (__thiscall **)(int *))(*v10 + 44))(v10) == 15 && *((_BYTE *)v10 + 1752) /*0x6f7f0c*/
    || *(_BYTE *)((*(int (__thiscall **)(int *))(*v10 + 132))(v10) + 1728)
    || *((_BYTE *)v10 + 664) )
  {
    if ( !v28 ) /*0x6f7feb*/
      goto LABEL_46; /*0x6f7feb*/
    goto LABEL_44; /*0x6f7feb*/
  }
  if ( v28 ) /*0x6f7f1c*/
  {
LABEL_44:
    if ( v29 && (unsigned __int8)Object::IsAlliedWithObjectHouse(v29, (int)v12) ) /*0x6f7ff4*/
      return 0; /*0x6f7ffb*/
    goto LABEL_46; /*0x6f7ffb*/
  }
  if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)v10[135], (int)v12) ) /*0x6f7f29*/
  {
    if ( TechnoClass::GetValue((TechnoClass *)v10, -1) >= 0 && !v96 ) /*0x6f7f49*/
      return 0; /*0x6f7f49*/
    BuildingClass::GetHealthRatio((BuildingClass *)v12); /*0x6f7f51*/
    _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6f7f56*/
    __asm /*0x6f7f5c*/
    {
      fcomp qword ptr [ecx+16F8h]
      fnstsw ax
    }
    if ( (_AX & 0x4000) != 0 ) /*0x6f7f67*/
      return 0; /*0x6f7f67*/
    if ( (*(int (__thiscall **)(int *))(*v12 + 44))(v12) == 2 && (*(int (__thiscall **)(int *))(*v10 + 44))(v10) == 1 ) /*0x6f7f83*/
    {
      if ( (*(int (__thiscall **)(int *))(*v12 + 456))(v12) > 0 ) /*0x6f7f91*/
        return 0; /*0x6f7f91*/
      v33 = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(*v12 + 72))(v12, v100); /*0x6f7fa0*/
      v34 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v33); /*0x6f7fa9*/
      if ( Cell::IsBridge((Cell *)v34) ) /*0x6f7fb0*/
        return 0; /*0x6f7fc2*/
    }
    else if ( (*(int (__thiscall **)(int *))(*v10 + 44))(v10) == 1 ) /*0x6f7fcf*/
    {
      result = (*(int (__thiscall **)(int *))(*v12 + 128))(v12); /*0x6f7fd5*/
      if ( !result ) /*0x6f7fdd*/
        return result; /*0x6f7fdd*/
    }
  }
LABEL_46:
  if ( v10 == v12 ) /*0x6f8003*/
    return 0; /*0x6f8003*/
  if ( ((int)dword_A8B230->vtable0 & 0x800) != 0 ) /*0x6f8014*/
  {
    v36 = (*(int (__thiscall **)(int *))(*v12 + 136))(v12); /*0x6f801a*/
    v37 = 0; /*0x6f8026*/
    v38 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2892); /*0x6f8028*/
    if ( v38 > 0 ) /*0x6f8030*/
    {
      v39 = *(_DWORD **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2880); /*0x6f8032*/
      while ( *v39 != v36 ) /*0x6f803b*/
      {
        ++v37; /*0x6f8041*/
        ++v39; /*0x6f8042*/
        if ( v37 >= v38 ) /*0x6f8047*/
          goto LABEL_52; /*0x6f8047*/
      }
      return 0; /*0x6f803b*/
    }
  }
LABEL_52:
  v40 = (*(int (__thiscall **)(int *))(*v12 + 84))(v12); /*0x6f8049*/
  v41 = *v12; /*0x6f8050*/
  if ( v40 ) /*0x6f8054*/
  {
    v42 = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(v41 + 72))(v12, v100); /*0x6f8066*/
    v43 = (_DWORD *)(*(int (__thiscall **)(int *, double *))(*v10 + 72))(v10, &v98); /*0x6f806f*/
    v44 = *v12; /*0x6f8077*/
    a5 = *v42 - *v43; /*0x6f807b*/
    __asm { fild [esp+3Ch+arg_C] } /*0x6f8083*/
    __asm { fstp qword ptr [esp+40h+var_24] }
    v45 = (*(int (__thiscall **)(int *, _DWORD *))(v44 + 72))(v12, v100); /*0x6f8093*/
    a5 = *(_DWORD *)(v45 + 4) - *(_DWORD *)((*(int (__thiscall **)(int *, _BYTE *))(*v10 + 72))(v10, v102) + 4); /*0x6f80aa*/
    __asm /*0x6f80ae*/
    {
      fild [esp+44h+arg_C]
      fld st
      fmul st, st(1)
      fld qword ptr [esp+44h+var_24]
      fmul qword ptr [esp+44h+var_24]
      faddp st(1), st
      fstp [esp+44h+var_44]; double
      fstp st
    }
    Math::Sqrt(v92); /*0x6f80c5*/
    LOWORD(v46) = Math::RoundToInt(a2); /*0x6f80cd*/
    v47 = v46; /*0x6f80d2*/
    v48 = a4; /*0x6f80d4*/
    v49 = a4 == 0; /*0x6f80d8*/
    if ( a4 <= 0 ) /*0x6f80da*/
      goto LABEL_59; /*0x6f80da*/
    if ( v47 > a4 ) /*0x6f80e2*/
      return 0; /*0x6f80f1*/
  }
  else
  {
    v50 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(v41 + 72))(v12, v102); /*0x6f8100*/
    v51 = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(*v10 + 72))(v10, v100); /*0x6f8109*/
    v52 = v50[1]; /*0x6f8111*/
    v53 = *v51 - *v50; /*0x6f8114*/
    v54 = v51[1]; /*0x6f8116*/
    v55 = v51[2]; /*0x6f8119*/
    LODWORD(v98) = v53; /*0x6f811c*/
    v56 = v55 - v50[2]; /*0x6f8125*/
    HIDWORD(v98) = v54 - v52; /*0x6f8127*/
    v99 = v56; /*0x6f812b*/
    __asm /*0x6f812f*/
    {
      fild [esp+3Ch+var_24+4]
      fild [esp+3Ch+var_1C]
      fild [esp+3Ch+var_24]
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
      fstp [esp+44h+var_44]; double
      fstp st
      fstp st
      fstp st
    }
    Math::Sqrt(v93); /*0x6f8157*/
    LOWORD(v57) = Math::RoundToInt(a2); /*0x6f815f*/
    v47 = v57; /*0x6f8164*/
    v48 = a4; /*0x6f8166*/
    v49 = a4 == 0; /*0x6f816a*/
    if ( a4 <= 0 ) /*0x6f816c*/
      goto LABEL_59; /*0x6f816c*/
    if ( v47 > a4 ) /*0x6f8170*/
      return 0; /*0x6f8170*/
  }
  v49 = v48 == 0; /*0x6f8176*/
LABEL_59:
  if ( v49 ) /*0x6f8178*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*v10 + 684))(v10) ) /*0x6f817e*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int *, int *, int))(*v10 + 936))(v10, v12, v97) ) /*0x6f81b8*/
        return 0; /*0x6f81b8*/
    }
    else if ( v47 > *(_DWORD *)((*(int (__thiscall **)(int *))(*v10 + 132))(v10) + 1464) ) /*0x6f8198*/
    {
      return 0; /*0x6f81a3*/
    }
  }
  if ( (unsigned __int8)House::IsHumanPlayer((House *)v10[135]) /*0x6f81f4*/
    && !*((_BYTE *)v12 + 1050)
    && !*((_BYTE *)v12 + 1051)
    && !*(_DWORD *)&dword_A8B238
    && (*(int (__thiscall **)(int *))(*v12 + 44))(v12) != 2 )
  {
    return 0; /*0x6f81f4*/
  }
  if ( (*(int (__thiscall **)(int *))(*v12 + 44))(v12) == 6 && *(_BYTE *)(v12[328] + 5889) ) /*0x6f820c*/
    return 0; /*0x6f820c*/
  a5 = (*(int (__thiscall **)(int *))(*v12 + 44))(v12); /*0x6f822a*/
  if ( ((1 << a5) & a3) == 0 && ((a3 & 2) == 0 || !(*(unsigned __int8 (__thiscall **)(int *))(*v12 + 128))(v12)) ) /*0x6f8242*/
    return 0; /*0x6f8242*/
  v58 = (*(int (__thiscall **)(int *))(*v12 + 132))(v12); /*0x6f825a*/
  a7 = (int *)v58; /*0x6f825c*/
  if ( !*(_BYTE *)(v58 + 561) ) /*0x6f8260*/
    return 0; /*0x6f8260*/
  if ( *(_DWORD *)&dword_A8B238 && *(_BYTE *)(*(_DWORD *)(v12[135] + 52) + 422) ) /*0x6f8284*/
  {
    if ( (unsigned __int8)House::IsCurrentPlayer((House *)v10[135]) /*0x6f82bf*/
      || (*(int (__thiscall **)(int *))(*v12 + 44))(v12) != 6
      || (*(int (__thiscall **)(int *))(*v10 + 44))(v10) != 15 )
    {
      return 0; /*0x6f82bf*/
    }
    v59 = v10[373]; /*0x6f82c5*/
    LOBYTE(a4) = 0; /*0x6f82cb*/
    if ( v59 ) /*0x6f82d2*/
      LOBYTE(a4) = *(_BYTE *)(*(_DWORD *)(v59 + 36) + 246) != 0; /*0x6f82e1*/
    v60 = *(_BYTE *)(v12[328] + 5458) && *(_BYTE *)(v10[432] + 3779) && v12[135] != v10[135]; /*0x6f82f4*/
    v61 = *(_BYTE *)(v10[432] + 3764) && (unsigned __int8)BuildingClass::CanRepair((BuildingClass *)v12, (int)v10); /*0x6f832a*/
    if ( !*(_DWORD *)&dword_A8B238 || (_BYTE)a4 || !v60 && !v61 ) /*0x6f835e*/
      return 0; /*0x6f835e*/
  }
  if ( *(_BYTE *)(v58 + 562) /*0x6f83a3*/
    && !v12[176]
    && !*((_BYTE *)v12 + 708)
    && ((*(int (__thiscall **)(int *))(*v12 + 44))(v12) != 6 || *(_BYTE *)(*(_DWORD *)(v12[135] + 52) + 422)) )
  {
    if ( (unsigned __int8)House::IsCurrentPlayer((House *)v10[135]) /*0x6f83de*/
      || (*(int (__thiscall **)(int *))(*v12 + 44))(v12) != 6
      || (*(int (__thiscall **)(int *))(*v10 + 44))(v10) != 15 )
    {
      return 0; /*0x6f83de*/
    }
    v62 = v10[373]; /*0x6f83e4*/
    LOBYTE(a4) = 0; /*0x6f83ea*/
    if ( v62 ) /*0x6f83f1*/
      LOBYTE(a4) = *(_BYTE *)(*(_DWORD *)(v62 + 36) + 246) != 0; /*0x6f8400*/
    v63 = *(_BYTE *)(v12[328] + 5458) && *(_BYTE *)(v10[432] + 3779) && v12[135] != v10[135]; /*0x6f8413*/
    v64 = *(_BYTE *)(v10[432] + 3764) && (unsigned __int8)BuildingClass::CanRepair((BuildingClass *)v12, (int)v10); /*0x6f8449*/
    if ( !*(_DWORD *)&dword_A8B238 || (_BYTE)a4 || !v63 && !v64 ) /*0x6f847d*/
      return 0; /*0x6f847d*/
  }
  v65 = a7; /*0x6f8483*/
  if ( *((_BYTE *)a7 + 3220) ) /*0x6f8487*/
  {
    if ( (*(int (__thiscall **)(int *))(*v10 + 44))(v10) == 15 && *(_BYTE *)(v10[432] + 3782) ) /*0x6f84a3*/
      return 0; /*0x6f84ab*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int *, int))(*v12 + 200))(v12, v10[135]) /*0x6f84d4*/
    || *(_BYTE *)((*(int (__thiscall **)(int *))(*v10 + 132))(v10) + 3377) )
  {
    goto LABEL_129; /*0x6f84dc*/
  }
  v66 = v12[123]; /*0x6f84de*/
  v67 = v12[125]; /*0x6f84e4*/
  if ( v66 != -1 ) /*0x6f84ed*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v66 < v67 ) /*0x6f84f9*/
    {
      v67 -= *(_DWORD *)&stru_A8EB00.?[416] - v66; /*0x6f84ff*/
      goto LABEL_126; /*0x6f84ff*/
    }
    return 0; /*0x6f8952*/
  }
LABEL_126:
  if ( !v67 /*0x6f854b*/
    || (unsigned __int8)House::IsCurrentPlayer((House *)v10[135])
    || Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) > *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]
                                                                                                 + 3604)
                                                                                     + 4 * *(_DWORD *)(v10[135] + 388)) )
  {
    return 0; /*0x6f854b*/
  }
LABEL_129:
  if ( ((unsigned __int16)this & 0x100) != 0 ) /*0x6f855c*/
  {
    (*(void (__thiscall **)(int *))(*v12 + 60))(v12); /*0x6f8562*/
    return 0; /*0x6f856e*/
  }
  if ( (BYTE1(this) & 2) != 0 && (a5 != 6 || !*((_BYTE *)v65 + 5490)) ) /*0x6f8581*/
    return 0; /*0x6f8589*/
  if ( v10 && (v49 = (v10[5] & 4) == 0, LOBYTE(a4) = (v10[5] & 4) != 0, !v49) && v10[373] /*0x6f85e6*/
    || !(unsigned __int8)House::IsCurrentPlayer((House *)v10[135])
    || (*(unsigned __int8 (__thiscall **)(int *))(*v12 + 128))(v12)
    || a5 != 6
    || (v68 = (_DWORD *)(*(int (__thiscall **)(int *))(*v12 + 1012))(v12)) != 0
    && *v68
    && (*(int (__thiscall **)(int *))(*v12 + 704))(v12) )
  {
    if ( !v96 ) /*0x6f860a*/
      goto LABEL_150; /*0x6f860a*/
  }
  else if ( !v96 ) /*0x6f85f6*/
  {
    return 0; /*0x6f8601*/
  }
  if ( (*(int (__thiscall **)(int *))(*v12 + 44))(v12) != 6 ) /*0x6f8616*/
    return 0; /*0x6f8616*/
  if ( (unsigned __int8)HouseClass::IsAlliedWith((#375 *)v10[135], (#375 *)v12[135]) ) /*0x6f8629*/
  {
    BuildingClass::GetHealthRatio((BuildingClass *)v12); /*0x6f8634*/
    _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6f8639*/
    __asm /*0x6f863f*/
    {
      fcomp qword ptr [edx+1708h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 || !(*(int (__thiscall **)(int, int))(*(_DWORD *)v12[328] + 132))(v12[328], v10[135]) ) /*0x6f865f*/
      return 0; /*0x6f8667*/
  }
LABEL_150:
  if ( ((unsigned __int8)this & 0x40) != 0 && !v65[512] ) /*0x6f8674*/
    return 0; /*0x6f8674*/
  v98 = *(double *)(v10 + 39); /*0x6f868e*/
  v99 = v10[41]; /*0x6f86a6*/
  v71 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v98); /*0x6f86b5*/
  v100[0] = v12[39]; /*0x6f86b9*/
  v100[1] = v12[40]; /*0x6f86c5*/
  v101 = v12[41]; /*0x6f86d1*/
  v72 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v100); /*0x6f86d5*/
  if ( (v71->flags[0] & 0x100) != 0 && (v72->flags[0] & 0x100) != 0 && *((_BYTE *)v10 + 140) != *((_BYTE *)v12 + 140) ) /*0x6f86f8*/
    return 0; /*0x6f86f8*/
  v73 = TechnoClass::ComputeDamage((TechnoClass *)v10, v12, (_DWORD *)a8); /*0x6f8706*/
  v76 = Math::RoundToInt(v73); /*0x6f870b*/
  LOWORD(v75) = HIWORD(v76); /*0x6f870b*/
  LOWORD(v74) = v76; /*0x6f870b*/
  _EBP = (int *)a6; /*0x6f8710*/
  *(_DWORD *)a6 = v74; /*0x6f8716*/
  if ( *(_DWORD *)((*(int (__fastcall **)(int *, int))(*v10 + 132))(v10, v75) + 916) == 1 ) /*0x6f8728*/
  {
    if ( v12[28] <= 0 ) /*0x6f872f*/
    {
      v78 = *_EBP / 2; /*0x6f8737*/
LABEL_160:
      *_EBP = v78; /*0x6f875c*/
      goto LABEL_161; /*0x6f875c*/
    }
    if ( v12[28] <= *(_DWORD *)((*(int (__thiscall **)(int *))(*v12 + 132))(v12) + 160) / 2 ) /*0x6f8755*/
    {
      v78 = 2 * *_EBP; /*0x6f875a*/
      goto LABEL_160; /*0x6f875a*/
    }
  }
LABEL_161:
  v79 = v10[135]; /*0x6f875f*/
  if ( *(_BYTE *)(v79 + 585) ) /*0x6f8765*/
  {
    v80 = *(_DWORD *)(v79 + 22016); /*0x6f876f*/
    if ( v80 != -1 && v12[135] != *((_DWORD *)stru_A80220.? + v80) ) /*0x6f8789*/
      *_EBP = 1; /*0x6f878b*/
  }
  v81 = a5; /*0x6f8796*/
  if ( (BYTE1(this) & 8) != 0 ) /*0x6f879d*/
  {
    v82 = a7; /*0x6f879f*/
    if ( a5 == 6 ) /*0x6f87a6*/
    {
      v83 = a7[952]; /*0x6f87a8*/
      if ( v83 <= 0 ) /*0x6f87b0*/
        *_EBP = 0; /*0x6f87c3*/
      else
        *_EBP += 1000 * v83; /*0x6f87be*/
    }
  }
  else
  {
    v82 = a7; /*0x6f87cc*/
  }
  if ( SBYTE1(this) < 0 ) /*0x6f87d3*/
  {
    if ( v81 != 6 ) /*0x6f87d8*/
      return 0; /*0x6f87d8*/
    v84 = v82[1376]; /*0x6f87de*/
    if ( v84 <= 0 ) /*0x6f87e6*/
      return 0; /*0x6f87e6*/
    *_EBP += 1000 * v84; /*0x6f87f8*/
  }
  if ( ((unsigned int)this & 0x10000) != 0 ) /*0x6f8801*/
  {
    if ( v81 != 6 || !*((_BYTE *)v82 + 5458) ) /*0x6f880c*/
      return 0; /*0x6f8814*/
    *_EBP += 1000; /*0x6f881a*/
  }
  if ( (BYTE1(this) & 0x10) != 0 && v81 == 6 && !v82[942] ) /*0x6f882b*/
    *_EBP = 0; /*0x6f8835*/
  if ( (BYTE1(this) & 0x20) != 0 )
  {
    if ( (*(int (__thiscall **)(int *))(*v12 + 44))(v12) == 6
      && *(_BYTE *)(*((*(int (__thiscall **)(int *))(*v12 + 44))(v12) == 6 ? v12 + 328 : (int *)1312) + 5499) )
    {
      v85 = (*(int (__thiscall **)(int *))(*v12 + 44))(v12); /*0x6f8873*/
      if ( !(*(int (__thiscall **)(int *))(*(v85 == 6 ? v12 : 0) + 1032))(v85 == 6 ? v12 : 0) )
        return 0; /*0x6f8898*/
    }
    else
    {
      v86 = (_DWORD *)(*(int (__thiscall **)(int *))(*v12 + 1012))(v12); /*0x6f889f*/
      if ( !v86 || !*v86 || v81 != 6 ) /*0x6f88b9*/
        return 0; /*0x6f88b9*/
    }
  }
  v87 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(*v12 + 72))(v12, v102); /*0x6f88c8*/
  LOWORD(thisa) = *v87 / 256; /*0x6f88db*/
  HIWORD(thisa) = v87[1] / 256; /*0x6f88f3*/
  a4 = (int)thisa; /*0x6f88fc*/
  BridgeDamageMult = TechnoClass::GetBridgeDamageMult((TechnoClass *)v10, (__int16 *)&a4); /*0x6f8903*/
  __asm /*0x6f8908*/
  {
    fcom ds:dbl_7E1718
    fnstsw ax
  }
  if ( (_AX & 0x4000) != 0 ) /*0x6f8913*/
  {
    __asm { fstp st } /*0x6f8926*/
  }
  else
  {
    __asm /*0x6f8915*/
    {
      fild dword ptr [ebp+0]
      fmul st, st(1)
    }
    LOWORD(v90) = Math::RoundToInt(BridgeDamageMult); /*0x6f891a*/
    __asm { fstp st } /*0x6f891f*/
    *_EBP = v90; /*0x6f8921*/
  }
  v91 = *_EBP; /*0x6f8928*/
  if ( !*_EBP ) /*0x6f892d*/
  {
    *_EBP = 0; /*0x6f8948*/
    return 0; /*0x6f8948*/
  }
  if ( v91 < 1 ) /*0x6f8932*/
    v91 = 1; /*0x6f8934*/
  *_EBP = v91; /*0x6f893a*/
  return 1; /*0x6f7fb9*/
}



// ==== 0x006F8960  SelectTechnoClassAreaTarget  this=TechnoClass  sig=csp ====
char __userpurge SelectTechnoClassAreaTarget@<al>(
        TechnoClass *a1@<ecx>,
        int a2@<edx>,
        double a3@<st0>,
        TechnoClass *a4,
        int a5,
        __int16 *a6,
        int a7,
        int *a8,
        int *a9,
        int a10)
{
  _DWORD *v11; // ebx
  int v12; // eax
  int v14; // edi
  int v15; // ebp
  TechnoClass *transporter; // ecx
  Object *owner; // ebx
  TechnoClass *mindControlledBy; // eax
  char v23; // bl
  _DWORD *v24; // [esp+0h] [ebp-10h]
  char v25; // [esp+1Ch] [ebp+Ch]

  *a8 = 0; /*0x6f8972*/
  *a9 = 0; /*0x6f8979*/
  v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a6); /*0x6f898d*/
  if ( a10 != -1 ) /*0x6f8992*/
  {
    v12 = (*((int (__thiscall **)(TechnoClass *))a1->RadioClass + 33))(a1); /*0x6f899a*/
    if ( MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], a6, *(_DWORD *)(v12 + 1460), 1) != a10 ) /*0x6f89b4*/
      return 0; /*0x6f89bc*/
  }
  v14 = v11[58]; /*0x6f89bf*/
  v15 = 0; /*0x6f89c5*/
  if ( !v14 ) /*0x6f89c9*/
    v14 = v11[57]; /*0x6f89cb*/
  transporter = a1->transporter; /*0x6f89d1*/
  owner = 0; /*0x6f89d7*/
  v25 = 0; /*0x6f89db*/
  if ( transporter ) /*0x6f89e0*/
  {
    if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))transporter->RadioClass + 33))(transporter) + 1508) ) /*0x6f89ea*/
    {
      mindControlledBy = a1->transporter->mindControlledBy; /*0x6f89fa*/
      if ( mindControlledBy ) /*0x6f8a02*/
      {
        owner = (Object *)mindControlledBy->owner; /*0x6f8a04*/
        v25 = 1; /*0x6f8a0a*/
      }
    }
  }
  if ( !v14 ) /*0x6f8a11*/
    return 0; /*0x6f8b53*/
  while ( 1 ) /*0x6f8a17*/
  {
    if ( (TechnoClass *)v14 == a1 ) /*0x6f8a19*/
      goto LABEL_33; /*0x6f8a19*/
    if ( (*(_BYTE *)(v14 + 20) & 1) == 0 ) /*0x6f8a2e*/
    {
      v15 = 0; /*0x6f8a23*/
      goto LABEL_33; /*0x6f8a25*/
    }
    v15 = v14; /*0x6f8a34*/
    if ( TechnoClass::GetValue(a1, -1) >= 0 ) /*0x6f8a3d*/
      break; /*0x6f8a3d*/
    BuildingClass::GetHealthRatio((BuildingClass *)v14); /*0x6f8a41*/
    _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6f8a46*/
    __asm /*0x6f8a4c*/
    {
      fcomp qword ptr [ecx+16F8h]
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 && (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)a1->owner, v14) ) /*0x6f8a64*/
      goto LABEL_34; /*0x6f8a6b*/
LABEL_33:
    v14 = *(_DWORD *)(v14 + 48); /*0x6f8b3e*/
    if ( !v14 ) /*0x6f8b43*/
      goto LABEL_34; /*0x6f8b43*/
  }
  if ( ((unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)a1->owner, v14) || v25) /*0x6f8ac7*/
    && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))a1->RadioClass + 33))(a1) + 1728)
    && !a1->isBerserk
    && (!v25 || !owner || !(unsigned __int8)Object::IsAlliedWithObjectHouse(owner, v14)) )
  {
    if ( (*((int (__thiscall **)(TechnoClass *))a1->RadioClass + 11))(a1) != 15 ) /*0x6f8ada*/
      goto LABEL_33; /*0x6f8ada*/
    if ( !LOBYTE(a1[1].airstrikeTintTimer[0]) ) /*0x6f8adc*/
    {
      if ( !*(_BYTE *)(a1[1].ironTintTimer[1] + 3779) ) /*0x6f8aec*/
        goto LABEL_33; /*0x6f8aec*/
      if ( a1->? != 11 ) /*0x6f8afd*/
        goto LABEL_33; /*0x6f8afd*/
      BuildingClass::GetHealthRatio((BuildingClass *)v14); /*0x6f8b01*/
      _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6f8b06*/
      __asm /*0x6f8b0c*/
      {
        fcomp qword ptr [edx+1708h]
        fnstsw ax
      }
      if ( (_AX & 0x4100) == 0 /*0x6f8b3c*/
        || (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 44))(v14) != 6
        || (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v14 + 1312) + 132))(
             *(_DWORD *)(v14 + 1312),
             *(_DWORD *)(v14 + 540)) <= 0 )
      {
        goto LABEL_33; /*0x6f8b3c*/
      }
    }
  }
LABEL_34:
  if ( !v15 ) /*0x6f8b4b*/
    return 0; /*0x6f8b4b*/
  v23 = 0; /*0x6f8b5b*/
  *a8 = v15; /*0x6f8b5d*/
  if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)a1->owner, v15)
    || TechnoClass::GetValue(a1, -1) < 0
    || !(unsigned __int8)House::IsCurrentPlayer((House *)a1->owner)
    && a1
    && (*((int (__thiscall **)(TechnoClass *))a1->RadioClass + 11))(a1) == 15
    && *(_BYTE *)(*((*((int (__thiscall **)(TechnoClass *))a1->RadioClass + 11))(a1) == 15
                  ? &a1[1].ironTintTimer[1]
                  : (int *)1728)
                + 3779)
    || *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))a1->RadioClass + 33))(a1) + 1728)
    || a1->isBerserk
    || v25 )
  {
    return TechnoClass::EvaluateTarget( /*0x6f8c05*/
             a4,
             a3,
             a5,
             a7,
             v15,
             (int)a9,
             (int *)0xFFFFFFFF,
             (int)&g_BuildingLoadQueue_Array.?[3],
             v24);
  }
  return v23; /*0x6f89b6*/
}



// ==== 0x006F8C10  TechnoClass::EvaluateBuildingTarget  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::EvaluateBuildingTarget(TechnoClass *this, __int16 *a2)
{
  double v2; // st7
  _DWORD *v4; // edi
  int v5; // eax
  int (__thiscall **vtable0)(TechnoClass *, void *); // ebp
  void *v7; // eax
  int v8; // eax
  int v9; // ecx
  unsigned __int8 (__thiscall **v10)(TechnoClass *, int *, int); // edx
  int *v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // edi
  int v17; // ebx
  _DWORD *v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // edx
  int v23; // kr00_4
  int v25; // [esp+24h] [ebp-18h] BYREF
  int v26; // [esp+28h] [ebp-14h]
  int v27; // [esp+2Ch] [ebp-10h]
  _BYTE v28[12]; // [esp+30h] [ebp-Ch] BYREF

  if ( (unsigned __int8)House::IsCurrentPlayer((House *)this->owner) ) /*0x6f8c1e*/
    return 0; /*0x6f8c1e*/
  if ( !*(_BYTE *)(80 * *(_DWORD *)&this->owner->__pad_13C[72] + *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5505) ) /*0x6f8c43*/
    return 0; /*0x6f8c43*/
  v4 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x6f8c61*/
  v5 = v4[17]; /*0x6f8c63*/
  if ( v5 == -1 ) /*0x6f8c69*/
    return 0; /*0x6f8c69*/
  if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v5) + 680) ) /*0x6f8c78*/
    return 0; /*0x6f8c78*/
  vtable0 = (int (__thiscall **)(TechnoClass *, void *))this->RadioClass; /*0x6f8c87*/
  v7 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x6f8c8f*/
  v8 = vtable0[185](this, v7); /*0x6f8c97*/
  v9 = *a2 << 8; /*0x6f8ca7*/
  v26 = (a2[1] << 8) + 128; /*0x6f8cb7*/
  v10 = (unsigned __int8 (__thiscall **)(TechnoClass *, int *, int))this->RadioClass; /*0x6f8cbb*/
  v25 = v9 + 128; /*0x6f8cc1*/
  v27 = 0; /*0x6f8cc8*/
  if ( !v10[89](this, &v25, v8) ) /*0x6f8cd0*/
    return 0; /*0x6f8cd0*/
  v11 = (int *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 253))(this); /*0x6f8ce3*/
  if ( !v11 ) /*0x6f8ceb*/
    return 0; /*0x6f8ceb*/
  v12 = *v11; /*0x6f8cf1*/
  if ( !v12 ) /*0x6f8cf5*/
    return 0; /*0x6f8cf5*/
  v13 = *(_DWORD *)(v12 + 172); /*0x6f8cfb*/
  if ( !v13 ) /*0x6f8d03*/
    return 0; /*0x6f8d03*/
  v14 = *(_DWORD *)(v12 + 160); /*0x6f8d09*/
  if ( v14 ) /*0x6f8d11*/
  {
    if ( !*(_BYTE *)(v14 + 677) ) /*0x6f8d13*/
      return 0; /*0x6f8d13*/
  }
  if ( !*(_BYTE *)(v13 + 324) ) /*0x6f8d21*/
    return 0; /*0x6f8d21*/
  v15 = v4[20]; /*0x6f8d2f*/
  if ( v15 == -1 || (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, *((#375 **)stru_A80220.? + v15)) ) /*0x6f8d4b*/
    return 0; /*0x6f8de5*/
  v16 = (*a2 << 8) + 128; /*0x6f8d6e*/
  v17 = (a2[1] << 8) + 128; /*0x6f8d74*/
  v18 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v28); /*0x6f8d7a*/
  v19 = v18[1] - v17; /*0x6f8d84*/
  v25 = *v18 - v16; /*0x6f8d86*/
  v20 = v18[2]; /*0x6f8d8a*/
  v26 = v19; /*0x6f8d8d*/
  v27 = v20; /*0x6f8d91*/
  Math::Sqrt((double)v25 * (double)v25 + (double)v20 * (double)v20 + (double)v19 * (double)v19); /*0x6f8dbd*/
  v23 = Math::RoundToInt(v2); /*0x6f8dc5*/
  LOWORD(v22) = HIWORD(v23); /*0x6f8dc5*/
  LOWORD(v21) = v23; /*0x6f8dc5*/
  return (*((int (__fastcall **)(TechnoClass *, int, _DWORD))this->RadioClass + 90))(this, v22, 0) - v21; /*0x6f8dda*/
}



// ==== 0x006F8DF0  TechnoClass::SelectAutoTarget_Start_AU  this=TechnoClass  sig=csp ====
void *__fastcall TechnoClass::SelectAutoTarget_Start_AU(TechnoClass *this, int a2, int a3, int a4, char a5)
{
  double v5; // st7
  int (__thiscall **vtable0)(TechnoClass *); // eax
  int v9; // ebx
  _DWORD *v10; // eax
  int (__thiscall **v11)(TechnoClass *, int); // edx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  TechnoClass *transporter; // ecx
  int v18; // edi
  int v19; // eax
  HouseClass *v20; // eax
  int v21; // eax
  int v22; // edi
  int v23; // ecx
  unsigned __int8 (__thiscall **v24)(TechnoClass *); // edx
  void *v25; // eax
  int j; // ebp
  HouseClass *v27; // ecx
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  int v31; // edx
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // edx
  int v36; // edi
  int v37; // ebx
  int v38; // eax
  int v39; // ebp
  int v40; // ecx
  int v41; // eax
  int v42; // edx
  int v43; // ecx
  int v44; // eax
  int v45; // eax
  int v46; // edx
  int v47; // eax
  int v48; // eax
  int v49; // ebp
  int v50; // ecx
  int v51; // eax
  int v52; // edx
  int v53; // ecx
  int v54; // eax
  int v55; // eax
  int v56; // edx
  int v57; // eax
  int v58; // ebx
  int v59; // eax
  int v60; // ebp
  int v61; // ecx
  int v62; // eax
  int v63; // edx
  int v64; // ecx
  int v65; // eax
  int v66; // eax
  int v67; // edx
  int v68; // eax
  int v69; // eax
  int v70; // ebp
  int v71; // ecx
  int v72; // eax
  int v73; // edx
  int v74; // ecx
  int v75; // eax
  int v76; // eax
  int v77; // edx
  int v78; // eax
  int v79; // edi
  char v80; // bl
  int i; // ebp
  HouseClass *owner; // ecx
  int v83; // edi
  int v84; // eax
  int v85; // ebx
  int v86; // ebp
  HouseClass *v87; // ecx
  int v88; // edi
  _DWORD *v89; // [esp+4Ch] [ebp-6Ch]
  bool v90; // [esp+5Fh] [ebp-59h]
  int v91; // [esp+60h] [ebp-58h]
  int v92; // [esp+64h] [ebp-54h] BYREF
  int v93; // [esp+68h] [ebp-50h]
  void *v94; // [esp+6Ch] [ebp-4Ch]
  int v95; // [esp+70h] [ebp-48h]
  __int16 v96[2]; // [esp+74h] [ebp-44h] BYREF
  int v97; // [esp+78h] [ebp-40h]
  int v98; // [esp+7Ch] [ebp-3Ch]
  __int16 v99[2]; // [esp+80h] [ebp-38h] BYREF
  int v100; // [esp+84h] [ebp-34h]
  int *TileIndex; // [esp+88h] [ebp-30h]
  int v102; // [esp+8Ch] [ebp-2Ch]
  int v103; // [esp+90h] [ebp-28h]
  int v104; // [esp+94h] [ebp-24h]
  int *v105; // [esp+98h] [ebp-20h]
  __int16 v106[2]; // [esp+9Ch] [ebp-1Ch] BYREF
  __int16 v107; // [esp+A0h] [ebp-18h]
  __int16 v108[4]; // [esp+A4h] [ebp-14h] BYREF
  char v109[4]; // [esp+ACh] [ebp-Ch] BYREF

  v94 = 0; /*0x6f8e05*/
  ++*(_DWORD *)&stru_A8EB00.?[80]; /*0x6f8e09*/
  vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x6f8e0f*/
  v93 = -1; /*0x6f8e11*/
  TileIndex = (int *)-1; /*0x6f8e15*/
  if ( *(_BYTE *)(vtable0[33](this) + 3360) && (unsigned __int8)House::IsCurrentPlayer((House *)this->owner) ) /*0x6f8e2f*/
    return 0; /*0x6f8e41*/
  LOWORD(v9) = a3; /*0x6f8e44*/
  if ( (a3 & 1) == 0 /*0x6f8e63*/
    && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 6
    && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 2 )
  {
    v10 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 18))(this); /*0x6f8e6e*/
    LOWORD(TileIndex) = *v10 / 256; /*0x6f8e83*/
    v11 = (int (__thiscall **)(TechnoClass *, int))this->RadioClass; /*0x6f8e94*/
    HIWORD(TileIndex) = v10[1] / 256; /*0x6f8e99*/
    v105 = TileIndex; /*0x6f8ea2*/
    v12 = v11[33](this, 1); /*0x6f8ea8*/
    TileIndex = (int *)MapClass::GetTileIndex( /*0x6f8ec4*/
                         (MapClass *)&stru_87F5F0.__pad_58[416],
                         v106,
                         *(_DWORD *)(v12 + 1460),
                         (char)v109);
  }
  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 15 ) /*0x6f8ed2*/
  {
    if ( TechnoClass::GetValue(this, -1) < 0 ) /*0x6f8ede*/
    {
      v9 = a3 & 3 | 0x4008; /*0x6f8ee3*/
LABEL_16:
      a3 = v9; /*0x6f8f25*/
      goto LABEL_17; /*0x6f8f25*/
    }
    if ( *(_BYTE *)(this->airstrikeTimer + 3779) ) /*0x6f8ef1*/
    {
      LOWORD(v9) = a3 & 0xFFE7; /*0x6f8efb*/
      a3 &= 0xFFFFFFE7; /*0x6f8efe*/
    }
  }
  else if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 1 /*0x6f8f1a*/
         && TechnoClass::GetValue(this, -1) < 0 )
  {
    v9 = a3 & 3 | 0x4010; /*0x6f8f1f*/
    goto LABEL_16; /*0x6f8f1f*/
  }
LABEL_17:
  v91 = 0; /*0x6f8f29*/
  if ( (v9 & 0x100) != 0 ) /*0x6f8f30*/
    v91 = 32834; /*0x6f8f32*/
  v13 = v9 & 4; /*0x6f8f3a*/
  if ( v13 ) /*0x6f8f3d*/
  {
    v14 = v91; /*0x6f8f3f*/
    LOBYTE(v14) = v91 | 4; /*0x6f8f43*/
    v91 = v14; /*0x6f8f45*/
  }
  if ( (a3 & 0x1BA60) != 0 ) /*0x6f8f52*/
    v91 |= 0x40u; /*0x6f8f54*/
  if ( (a3 & 8) != 0 ) /*0x6f8f5b*/
  {
    v15 = v91; /*0x6f8f5d*/
    BYTE1(v15) = BYTE1(v91) | 0x80; /*0x6f8f61*/
    v91 = v15; /*0x6f8f64*/
  }
  if ( (a3 & 0x50) != 0 ) /*0x6f8f6a*/
  {
    v16 = v91; /*0x6f8f6c*/
    LOBYTE(v16) = v91 | 2; /*0x6f8f70*/
    v91 = v16; /*0x6f8f72*/
  }
  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1712) ) /*0x6f8f80*/
  {
    (*(void (__thiscall **)(int *))(this->currentTargets[0] + 12))(this->currentTargets); /*0x6f8f96*/
    (*(void (__thiscall **)(int *))(this->currentTargetThreatValues[0] + 12))(this->currentTargetThreatValues); /*0x6f8fa5*/
  }
  transporter = this->transporter; /*0x6f8fa8*/
  v90 = 0; /*0x6f8fae*/
  if ( transporter /*0x6f8fbf*/
    && *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))transporter->RadioClass + 33))(transporter) + 1508) )
  {
    v90 = this->transporter->mindControlledBy != 0; /*0x6f8fd7*/
  }
  if ( (a3 & 3) == 0 )
  {
    v80 = a5; /*0x6f9b72*/
    if ( (v91 & 4) != 0 ) /*0x6f9b78*/
    {
      for ( i = 0; i < dword_A8E3A0; ++i ) /*0x6f9b87*/
      {
        owner = this->owner; /*0x6f9b93*/
        v83 = *((_DWORD *)dword_A8E394 + i); /*0x6f9b99*/
        *(_DWORD *)v106 = 0; /*0x6f9b9c*/
        if ( (!(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)owner, v83) /*0x6f9c3e*/
           || *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1728)
           || this->isBerserk
           || v90)
          && (!v80 || *(_DWORD *)(*(_DWORD *)(v83 + 540) + 48) == this->owner->enemyHouseIndex)
          && ((a3 & 0x4000) == 0 || (unsigned __int8)HouseClass::IsAlliedWith(
                                                       (#375 *)this->owner,
                                                       *(#375 **)(v83 + 540)))
          && TechnoClass::EvaluateTarget(
               (TechnoClass *)a3,
               v5,
               v91,
               -1,
               v83,
               (int)v106,
               (int *)0xFFFFFFFF,
               (int)&g_BuildingLoadQueue_Array.?[3],
               v89)
          && *(int *)v106 > v93 )
        {
          v94 = (void *)v83; /*0x6f9c40*/
          v93 = *(_DWORD *)v106; /*0x6f9c44*/
        }
      }
    }
    if ( (a3 & 0x10) != 0 ) /*0x6f9c5b*/
    {
      v84 = v91; /*0x6f9c5d*/
      LOBYTE(v84) = v91 | 4; /*0x6f9c61*/
      v91 = v84; /*0x6f9c63*/
    }
    v85 = 0; /*0x6f9c6c*/
    if ( *(int *)&stru_A8EB00.?[164] > 0 )
    {
      v86 = a4; /*0x6f9c76*/
      do
      {
        v87 = this->owner; /*0x6f9c80*/
        v88 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v85); /*0x6f9c86*/
        a4 = 0; /*0x6f9c89*/
        if ( (!(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)v87, v88)
           || TechnoClass::GetValue(this, -1) < 0
           || !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner)
           && this
           && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 15
           && *((_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 15
                        ? (TechnoClass *)((char *)this + 1728)
                        : (TechnoClass *)1728)->RadioClass
              + 3779)
           || *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1728)
           || this->isBerserk
           || v90)
          && *(_DWORD *)(v88 + 148) == 2
          && (!a5 || *(_DWORD *)(*(_DWORD *)(v88 + 540) + 48) == this->owner->enemyHouseIndex)
          && ((a3 & 0x4000) == 0 || (unsigned __int8)HouseClass::IsAlliedWith(
                                                       (#375 *)this->owner,
                                                       *(#375 **)(v88 + 540)))
          && TechnoClass::EvaluateTarget((TechnoClass *)a3, v5, v91, -1, v88, (int)&a4, TileIndex, v86, v89)
          && a4 > v93 )
        {
          v94 = (void *)v88; /*0x6f9d8b*/
          v93 = a4; /*0x6f9d8f*/
        }
        ++v85; /*0x6f9d98*/
      }
      while ( v85 < *(int *)&stru_A8EB00.?[164] );
    }
    return v94; /*0x6f9d9b*/
  }
  v18 = 0; /*0x6f8fe8*/
  v97 = 0; /*0x6f8fec*/
  if ( (a3 & 1) != 0 ) /*0x6f8ff0*/
  {
    v19 = (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 199))(this, 0); /*0x6f8ff5*/
LABEL_39:
    v18 = v19; /*0x6f901e*/
    v97 = v19; /*0x6f9020*/
    goto LABEL_40; /*0x6f9020*/
  }
  if ( (a3 & 2) != 0 ) /*0x6f8ff9*/
  {
    if ( this->? == 25 ) /*0x6f9002*/
      v19 = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 199))(this, 2); /*0x6f900a*/
    else
      v19 = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 199))(this, 1); /*0x6f9018*/
    goto LABEL_39; /*0x6f9010*/
  }
LABEL_40:
  if ( TechnoClass::GetValue(this, -1) < 0 && this->? == 5 ) /*0x6f9037*/
  {
    v18 = 512; /*0x6f9039*/
    v97 = 512; /*0x6f903e*/
  }
  v100 = v18 / 256; /*0x6f9052*/
  if ( !v18 ) /*0x6f9056*/
  {
    v20 = (HouseClass *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6f9060*/
    if ( !(unsigned __int8)HouseClass::HasPower(v20) /*0x6f907b*/
      || *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3285) )
    {
      if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3433) /*0x6f90c2*/
        && *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3479)
        && *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3348) )
      {
        v21 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1464); /*0x6f90d6*/
      }
      else
      {
        v22 = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 90))(this, 1); /*0x6f90ea*/
        if ( (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 90))(this, 0) <= v22 ) /*0x6f90fa*/
          v21 = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 90))(this, 1); /*0x6f9110*/
        else
          v21 = (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 90))(this, 0); /*0x6f9102*/
      }
    }
    else
    {
      v21 = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 90))(this, this->currentWeaponSlot); /*0x6f908e*/
    }
    v100 = v21 / 256 /*0x6f9144*/
         + *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1676) / 256
         + 1;
  }
  v23 = a4; /*0x6f9148*/
  LOWORD(a4) = *(_DWORD *)a4 / 256; /*0x6f915a*/
  v24 = (unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass; /*0x6f916b*/
  HIWORD(a4) = *(_DWORD *)(v23 + 4) / 256; /*0x6f9170*/
  *(_DWORD *)v108 = a4; /*0x6f9179*/
  if ( v24[256](this) ) /*0x6f917f*/
    v100 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 257))(this) /*0x6f91a3*/
         + *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3912)
         + 1;
  if ( v13 ) /*0x6f91a9*/
  {
    v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v108); /*0x6f91c8*/
    AircraftTrackerClass::FillCurrentVector((int)&g_CellClassManager, (int)v25, v100); /*0x6f91d3*/
    for ( j = VectorClass::RemoveObjectById(&g_CellClassManager); j; j = VectorClass::RemoveObjectById(&g_CellClassManager) ) /*0x6f91e6*/
    {
      v27 = this->owner; /*0x6f91ec*/
      a4 = 0; /*0x6f91f3*/
      if ( (!(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)v27, j) /*0x6f92ac*/
         || *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1728)
         || this->isBerserk
         || v90)
        && ((a3 & 0x4000) == 0 || (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, *(#375 **)(j + 540)))
        && *(_BYTE *)(j + 116)
        && (*(int (__thiscall **)(int))(*(_DWORD *)j + 120))(j) != 2
        && (!a5 || *(_DWORD *)(*(_DWORD *)(j + 540) + 48) == this->owner->enemyHouseIndex)
        && TechnoClass::EvaluateTarget(
             (TechnoClass *)a3,
             v5,
             v91 | 0x8002,
             v97,
             j,
             (int)&a4,
             (int *)0xFFFFFFFF,
             (int)&g_BuildingLoadQueue_Array.?[3],
             v89) )
      {
        if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1712) ) /*0x6f92c3*/
        {
          v28 = this->currentTargets[2]; /*0x6f92d1*/
          if ( this->currentTargets[4] < v28 /*0x6f9302*/
            || (BYTE1(this->currentTargets[3]) || !v28)
            && (v29 = this->currentTargets[5], v29 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->currentTargets[0] + 8))(
                 this->currentTargets,
                 v28 + v29,
                 0) )
          {
            v30 = this->currentTargets[4]; /*0x6f9309*/
            v31 = this->currentTargets[1]; /*0x6f930c*/
            this->currentTargets[4] = v30 + 1; /*0x6f9312*/
            *(_DWORD *)(v31 + 4 * v30) = j; /*0x6f9315*/
          }
          v32 = this->currentTargetThreatValues[2]; /*0x6f9318*/
          if ( this->currentTargetThreatValues[4] < v32 /*0x6f9349*/
            || (BYTE1(this->currentTargetThreatValues[3]) || !v32)
            && (v33 = this->currentTargetThreatValues[5], v33 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->currentTargetThreatValues[0] + 8))(
                 this->currentTargetThreatValues,
                 v32 + v33,
                 0) )
          {
            v34 = this->currentTargetThreatValues[4]; /*0x6f9350*/
            v35 = this->currentTargetThreatValues[1]; /*0x6f9353*/
            this->currentTargetThreatValues[4] = v34 + 1; /*0x6f9359*/
            *(_DWORD *)(v35 + 4 * v34) = a4; /*0x6f9360*/
          }
        }
        if ( a4 > v93 ) /*0x6f936d*/
        {
          v94 = (void *)j; /*0x6f936f*/
          v93 = a4; /*0x6f9373*/
        }
      }
    }
  }
  if ( (a3 & 0x10) != 0 ) /*0x6f9391*/
    v91 |= 4u; /*0x6f9393*/
  if ( a3 == 5 ) /*0x6f9398*/
    return v94; /*0x6f9398*/
  v99[0] = 0; /*0x6f93a9*/
  v99[1] = 0; /*0x6f93ae*/
  v98 = 0; /*0x6f93b3*/
  v95 = 0; /*0x6f93b7*/
  if ( v100 <= 0 ) /*0x6f93bb*/
    return v94; /*0x6f9da1*/
  while ( 1 ) /*0x6f93c7*/
  {
    v36 = -v95; /*0x6f93c7*/
    v102 = -v95; /*0x6f93cb*/
    if ( -v95 <= v95 ) /*0x6f93cf*/
    {
      *(_WORD *)&v109[2] = -(__int16)v95; /*0x6f93d7*/
      while ( 1 ) /*0x6f93f2*/
      {
        HIWORD(v103) = *(_WORD *)&v109[2] + v108[1]; /*0x6f93f2*/
        LOWORD(v103) = v36 + v108[0]; /*0x6f93f7*/
        *(_DWORD *)v96 = v103; /*0x6f940a*/
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v96) ) /*0x6f940e*/
        {
          v37 = a3; /*0x6f941f*/
          if ( SelectTechnoClassAreaTarget( /*0x6f9490*/
                 this,
                 (int)v96,
                 v5,
                 (TechnoClass *)a3,
                 v91,
                 v96,
                 v97,
                 &a4,
                 &v92,
                 (int)TileIndex)
            && a4
            && (!a5 || *(_DWORD *)(*(_DWORD *)(a4 + 540) + 48) == this->owner->enemyHouseIndex)
            && ((a3 & 0x4000) == 0
             || (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, *(#375 **)(a4 + 540))) )
          {
            if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1712) ) /*0x6f94a7*/
            {
              v38 = this->currentTargets[2]; /*0x6f94b5*/
              v39 = a4; /*0x6f94c1*/
              if ( this->currentTargets[4] < v38 /*0x6f94ea*/
                || (BYTE1(this->currentTargets[3]) || !v38)
                && (v40 = this->currentTargets[5], v40 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->currentTargets[0] + 8))(
                     this->currentTargets,
                     v38 + v40,
                     0) )
              {
                v41 = this->currentTargets[4]; /*0x6f94f1*/
                v42 = this->currentTargets[1]; /*0x6f94f4*/
                this->currentTargets[4] = v41 + 1; /*0x6f94fa*/
                *(_DWORD *)(v42 + 4 * v41) = v39; /*0x6f94fd*/
              }
              v43 = this->currentTargetThreatValues[2]; /*0x6f9500*/
              if ( this->currentTargetThreatValues[4] < v43 /*0x6f9531*/
                || (BYTE1(this->currentTargetThreatValues[3]) || !v43)
                && (v44 = this->currentTargetThreatValues[5], v44 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->currentTargetThreatValues[0] + 8))(
                     this->currentTargetThreatValues,
                     v43 + v44,
                     0) )
              {
                v45 = this->currentTargetThreatValues[4]; /*0x6f9538*/
                v46 = this->currentTargetThreatValues[1]; /*0x6f953b*/
                this->currentTargetThreatValues[4] = v45 + 1; /*0x6f9541*/
                *(_DWORD *)(v46 + 4 * v45) = v92; /*0x6f9548*/
              }
            }
            if ( v93 < v92 ) /*0x6f9555*/
            {
              v93 = v92; /*0x6f955b*/
              v94 = (void *)a4; /*0x6f955f*/
            }
          }
          if ( !v94 ) /*0x6f9569*/
          {
            v47 = TechnoClass::EvaluateBuildingTarget(this, v96); /*0x6f9572*/
            v92 = v47; /*0x6f957b*/
            if ( v98 < v47 ) /*0x6f9581*/
            {
              v98 = v47; /*0x6f9587*/
              *(_DWORD *)v99 = *(_DWORD *)v96; /*0x6f958b*/
            }
          }
          LOWORD(v36) = v102; /*0x6f958f*/
        }
        else
        {
          v37 = a3; /*0x6f9b0e*/
        }
        HIWORD(v104) = v95 + v108[1]; /*0x6f95a3*/
        LOWORD(v104) = v36 + v108[0]; /*0x6f95a8*/
        *(_DWORD *)v96 = v104; /*0x6f95bb*/
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v96) ) /*0x6f95bf*/
        {
          if ( SelectTechnoClassAreaTarget( /*0x6f963d*/
                 this,
                 (int)v96,
                 v5,
                 (TechnoClass *)v37,
                 v91,
                 v96,
                 v97,
                 &a4,
                 &v92,
                 (int)TileIndex)
            && a4
            && (!a5 || *(_DWORD *)(*(_DWORD *)(a4 + 540) + 48) == this->owner->enemyHouseIndex)
            && ((v37 & 0x4000) == 0
             || (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, *(#375 **)(a4 + 540))) )
          {
            if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1712) ) /*0x6f9654*/
            {
              v48 = this->currentTargets[2]; /*0x6f9662*/
              v49 = a4; /*0x6f966e*/
              if ( this->currentTargets[4] < v48 /*0x6f9697*/
                || (BYTE1(this->currentTargets[3]) || !v48)
                && (v50 = this->currentTargets[5], v50 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->currentTargets[0] + 8))(
                     this->currentTargets,
                     v48 + v50,
                     0) )
              {
                v51 = this->currentTargets[4]; /*0x6f969e*/
                v52 = this->currentTargets[1]; /*0x6f96a1*/
                this->currentTargets[4] = v51 + 1; /*0x6f96a7*/
                *(_DWORD *)(v52 + 4 * v51) = v49; /*0x6f96aa*/
              }
              v53 = this->currentTargetThreatValues[2]; /*0x6f96ad*/
              if ( this->currentTargetThreatValues[4] < v53 /*0x6f96de*/
                || (BYTE1(this->currentTargetThreatValues[3]) || !v53)
                && (v54 = this->currentTargetThreatValues[5], v54 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->currentTargetThreatValues[0] + 8))(
                     this->currentTargetThreatValues,
                     v53 + v54,
                     0) )
              {
                v55 = this->currentTargetThreatValues[4]; /*0x6f96e5*/
                v56 = this->currentTargetThreatValues[1]; /*0x6f96e8*/
                this->currentTargetThreatValues[4] = v55 + 1; /*0x6f96ee*/
                *(_DWORD *)(v56 + 4 * v55) = v92; /*0x6f96f5*/
              }
            }
            if ( v93 < v92 ) /*0x6f9702*/
            {
              v93 = v92; /*0x6f9708*/
              v94 = (void *)a4; /*0x6f970c*/
            }
          }
          if ( !v94 ) /*0x6f9716*/
          {
            v57 = TechnoClass::EvaluateBuildingTarget(this, v96); /*0x6f971f*/
            v92 = v57; /*0x6f9728*/
            if ( v98 < v57 ) /*0x6f972e*/
            {
              v98 = v57; /*0x6f9734*/
              *(_DWORD *)v99 = *(_DWORD *)v96; /*0x6f9738*/
            }
          }
        }
        if ( ++v102 > v95 ) /*0x6f974b*/
          break; /*0x6f974b*/
        LOWORD(v36) = v102; /*0x6f93de*/
      }
    }
    v58 = 1 - v95; /*0x6f975a*/
    if ( 1 - v95 < v95 ) /*0x6f975e*/
    {
      v107 = -(__int16)v95; /*0x6f9768*/
      do /*0x6f9adc*/
      {
        LOWORD(v105) = v108[0] + v107; /*0x6f977b*/
        HIWORD(v105) = v58 + v108[1]; /*0x6f9786*/
        *(_DWORD *)v96 = v105; /*0x6f9795*/
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v96) ) /*0x6f9799*/
        {
          if ( SelectTechnoClassAreaTarget(this, a3, v5, (TechnoClass *)a3, v91, v96, v97, &a4, &v92, (int)TileIndex) /*0x6f9822*/
            && a4
            && (!a5 || *(_DWORD *)(*(_DWORD *)(a4 + 540) + 48) == this->owner->enemyHouseIndex)
            && ((a3 & 0x4000) == 0
             || (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, *(#375 **)(a4 + 540))) )
          {
            if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1712) ) /*0x6f9839*/
            {
              v59 = this->currentTargets[2]; /*0x6f9847*/
              v60 = a4; /*0x6f9853*/
              if ( this->currentTargets[4] < v59 /*0x6f987c*/
                || (BYTE1(this->currentTargets[3]) || !v59)
                && (v61 = this->currentTargets[5], v61 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->currentTargets[0] + 8))(
                     this->currentTargets,
                     v59 + v61,
                     0) )
              {
                v62 = this->currentTargets[4]; /*0x6f9883*/
                v63 = this->currentTargets[1]; /*0x6f9886*/
                this->currentTargets[4] = v62 + 1; /*0x6f988c*/
                *(_DWORD *)(v63 + 4 * v62) = v60; /*0x6f988f*/
              }
              v64 = this->currentTargetThreatValues[2]; /*0x6f9892*/
              if ( this->currentTargetThreatValues[4] < v64 /*0x6f98c3*/
                || (BYTE1(this->currentTargetThreatValues[3]) || !v64)
                && (v65 = this->currentTargetThreatValues[5], v65 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->currentTargetThreatValues[0] + 8))(
                     this->currentTargetThreatValues,
                     v64 + v65,
                     0) )
              {
                v66 = this->currentTargetThreatValues[4]; /*0x6f98ca*/
                v67 = this->currentTargetThreatValues[1]; /*0x6f98cd*/
                this->currentTargetThreatValues[4] = v66 + 1; /*0x6f98d3*/
                *(_DWORD *)(v67 + 4 * v66) = v92; /*0x6f98da*/
              }
            }
            if ( v93 < v92 ) /*0x6f98e7*/
            {
              v93 = v92; /*0x6f98ed*/
              v94 = (void *)a4; /*0x6f98f1*/
            }
          }
          if ( !v94 ) /*0x6f98fb*/
          {
            v68 = TechnoClass::EvaluateBuildingTarget(this, v96); /*0x6f9904*/
            v92 = v68; /*0x6f990d*/
            if ( v98 < v68 ) /*0x6f9913*/
            {
              v98 = v68; /*0x6f9919*/
              *(_DWORD *)v99 = *(_DWORD *)v96; /*0x6f991d*/
            }
          }
        }
        v106[0] = v108[0] + v95; /*0x6f9931*/
        v106[1] = v58 + v108[1]; /*0x6f9936*/
        *(_DWORD *)v96 = *(_DWORD *)v106; /*0x6f9949*/
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v96) ) /*0x6f994d*/
        {
          if ( SelectTechnoClassAreaTarget( /*0x6f99d6*/
                 this,
                 (int)v96,
                 v5,
                 (TechnoClass *)a3,
                 v91,
                 v96,
                 v97,
                 &a4,
                 &v92,
                 (int)TileIndex)
            && a4
            && (!a5 || *(_DWORD *)(*(_DWORD *)(a4 + 540) + 48) == this->owner->enemyHouseIndex)
            && ((a3 & 0x4000) == 0
             || (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, *(#375 **)(a4 + 540))) )
          {
            if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1712) ) /*0x6f99ed*/
            {
              v69 = this->currentTargets[2]; /*0x6f99fb*/
              v70 = a4; /*0x6f9a07*/
              if ( this->currentTargets[4] < v69 /*0x6f9a30*/
                || (BYTE1(this->currentTargets[3]) || !v69)
                && (v71 = this->currentTargets[5], v71 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->currentTargets[0] + 8))(
                     this->currentTargets,
                     v69 + v71,
                     0) )
              {
                v72 = this->currentTargets[4]; /*0x6f9a37*/
                v73 = this->currentTargets[1]; /*0x6f9a3a*/
                this->currentTargets[4] = v72 + 1; /*0x6f9a40*/
                *(_DWORD *)(v73 + 4 * v72) = v70; /*0x6f9a43*/
              }
              v74 = this->currentTargetThreatValues[2]; /*0x6f9a46*/
              if ( this->currentTargetThreatValues[4] < v74 /*0x6f9a77*/
                || (BYTE1(this->currentTargetThreatValues[3]) || !v74)
                && (v75 = this->currentTargetThreatValues[5], v75 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->currentTargetThreatValues[0] + 8))(
                     this->currentTargetThreatValues,
                     v74 + v75,
                     0) )
              {
                v76 = this->currentTargetThreatValues[4]; /*0x6f9a7e*/
                v77 = this->currentTargetThreatValues[1]; /*0x6f9a81*/
                this->currentTargetThreatValues[4] = v76 + 1; /*0x6f9a87*/
                *(_DWORD *)(v77 + 4 * v76) = v92; /*0x6f9a8e*/
              }
            }
            if ( v93 < v92 ) /*0x6f9a9b*/
            {
              v93 = v92; /*0x6f9aa1*/
              v94 = (void *)a4; /*0x6f9aa5*/
            }
          }
          if ( !v94 ) /*0x6f9aaf*/
          {
            v78 = TechnoClass::EvaluateBuildingTarget(this, v96); /*0x6f9ab8*/
            v92 = v78; /*0x6f9ac1*/
            if ( v98 < v78 ) /*0x6f9ac7*/
            {
              v98 = v78; /*0x6f9acd*/
              *(_DWORD *)v99 = *(_DWORD *)v96; /*0x6f9ad1*/
            }
          }
        }
        ++v58; /*0x6f9ad9*/
      }
      while ( v58 < v95 ); /*0x6f9adc*/
    }
    if ( v94 ) /*0x6f9aec*/
    {
      v79 = v95; /*0x6f9af0*/
      if ( v95 == v100 / 4 || v95 == v100 / 2 ) /*0x6f9b0a*/
        return v94; /*0x6f9b52*/
    }
    else
    {
      v79 = v95; /*0x6f9b17*/
    }
    if ( v99[0] != *(_WORD *)&g_BuildingLoadQueue_Array.?[24] || v99[1] != *(_WORD *)&g_BuildingLoadQueue_Array.? ) /*0x6f9b35*/
      break; /*0x6f9b35*/
    v95 = v79 + 1; /*0x6f9b3a*/
    if ( v79 + 1 >= v100 ) /*0x6f9b3e*/
      return v94; /*0x6f9b3e*/
  }
  return CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v99); /*0x6f8e38*/
}


// ==== 0x006F9DB0  TechnoClass::GetID  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetID(TechnoClass *this)
{
  return this->owner->relatedTagsCount; /*0x6f9db9*/
}



// ==== 0x006F9DC0  TechnoClass::GetTarget  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetTarget(TechnoClass *this)
{
  return (int)this->owner; /*0x6f9dc6*/
}



// ==== 0x006F9DD0  TechnoClass::SetTargetIfAllowed  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::SetTargetIfAllowed(TechnoClass *this, int a2)
{
  int result; // eax

  if ( !(*((unsigned __int8 (__thiscall **)(TechnoClass *, Object *))this->RadioClass + 50))(this, dword_A83D4C) /*0x6f9df6*/
    || (result = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 52))(this, 1)) != 0 )
  {
    this->flashing[0] = a2; /*0x6f9dfc*/
    return a2; /*0x6f9df8*/
  }
  return result; /*0x6f9e02*/
}



// ==== 0x006F9E10  TechnoClass::IsInvisible  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::IsInvisible(TechnoClass *this)
{
  int result; // eax

  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6f9e15*/
  if ( *(_DWORD *)(result + 176) ) /*0x6f9e1b*/
  {
    result = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 176); /*0x6f9e33*/
    LOBYTE(result) = *(_BYTE *)result == 0; /*0x6f9e3d*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6f9e25*/
  }
  return result; /*0x6f9e27*/
}



// ==== 0x006F9E50  TechnoClass::Begin  this=TechnoClass  sig=csp ====
char __thiscall MovementAI::Begin(TechnoClass *this)
{
  int queuedVoiceIndex; // ecx
  int v3; // eax
  int health; // eax
  int estimatedHealth; // eax
  int (__thiscall **vtable0)(TechnoClass *); // edx
  int v7; // eax
  int currentRank; // edi
  int *veterancy; // ebx
  int v10; // edi
  TechnoClass *drainTarget; // eax
  AnimClass *drainAnim; // ecx
  TechnoClass *v13; // eax
  HouseClass *owner; // eax
  HouseClass *empLockRemaining; // eax
  _DWORD *v16; // eax
  MovementAI *v17; // edi
  TechnoClass *transporter; // ecx
  House *v19; // edi
  TechnoClass *mindControlledBy; // eax
  bool v21; // bl
  bool v22; // al
  bool v23; // al
  int currentMission; // ecx
  int (__thiscall **v25)(TechnoClass *, AbstractClass *, int); // edi
  int v26; // eax
  int v27; // eax
  HouseClass *v28; // eax
  int v29; // edi
  int v30; // edx
  int v31; // eax
  int v32; // edi
  int v33; // eax
  int v34; // edx
  char isUnderCursor; // al
  int v36; // eax
  int v37; // edx
  int v38; // eax... [34977 chars total]



// ==== 0x006FB010  TechnoClass::StepAnimFrame  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::StepAnimFrame(TechnoClass *this)
{
  int result; // eax
  int ammo; // edi
  int v4; // edx
  void (__thiscall **vtable0)(TechnoClass *, int); // edx

  result = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1668); /*0x6fb01c*/
  if ( result != -1 ) /*0x6fb025*/
  {
    ammo = this->ammo; /*0x6fb027*/
    if ( ammo < result ) /*0x6fb02f*/
    {
      v4 = this->reloadTimer[0]; /*0x6fb031*/
      result = this->reloadTimer[2]; /*0x6fb037*/
      if ( v4 != -1 ) /*0x6fb040*/
      {
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v4 >= result ) /*0x6fb04c*/
        {
LABEL_7:
          vtable0 = (void (__thiscall **)(TechnoClass *, int))this->RadioClass; /*0x6fb054*/
          this->ammo = ammo + 1; /*0x6fb05b*/
          vtable0[73](this, 2); /*0x6fb061*/
          return TechnoClass::CalcAnimDelay(this); /*0x6fb069*/
        }
        result -= *(_DWORD *)&stru_A8EB00.?[416] - v4; /*0x6fb04e*/
      }
      if ( result ) /*0x6fb052*/
        return result; /*0x6fb052*/
      goto LABEL_7; /*0x6fb052*/
    }
  }
  return result; /*0x6fb06e*/
}



// ==== 0x006FB080  TechnoClass::CalcAnimDelay  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CalcAnimDelay(TechnoClass *this)
{
  int result; // eax
  int ammo; // ecx
  int *v4; // esi
  int v5; // ebx
  int v6; // edi
  int *reloadTimer; // esi
  int v8; // [esp+8h] [ebp-8h]

  result = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1668); /*0x6fb08e*/
  ammo = this->ammo; /*0x6fb094*/
  if ( ammo < result ) /*0x6fb09c*/
  {
    if ( ammo || *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1692) == -1 ) /*0x6fb0b7*/
    {
      if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 996) ) /*0x6fb0f2*/
        v5 = this->ammo / *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 996); /*0x6fb11c*/
      else
        v5 = 1; /*0x6fb0fc*/
      v6 = v5 * v5 * *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1696); /*0x6fb135*/
      result = v6 + *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1688); /*0x6fb14a*/
      reloadTimer = this->reloadTimer; /*0x6fb14c*/
      *reloadTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6fb154*/
      reloadTimer[1] = v8; /*0x6fb15a*/
      reloadTimer[2] = result; /*0x6fb15d*/
    }
    else
    {
      result = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1692); /*0x6fb0c9*/
      v4 = this->reloadTimer; /*0x6fb0cf*/
      *v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6fb0d5*/
      v4[1] = v8; /*0x6fb0db*/
      v4[2] = result; /*0x6fb0de*/
    }
  }
  return result; /*0x6fb0e1*/
}



// ==== 0x006FB170  TechnoClass::RevealShroud  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::RevealShroud(TechnoClass *this)
{
  int result; // eax
  int v3; // edi
  int v4; // ebp
  int v5; // ebx
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  int v9; // edx
  signed int v10; // eax
  int gapRadius; // ecx
  int v12; // edi
  int v13; // ebx
  int i; // eax
  int v15; // eax
  int v16; // ebp
  int (__thiscall **vtable0)(TechnoClass *); // edx
  House *v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  House *v23; // eax
  _DWORD *v24; // eax
  __int16 v25[2]; // [esp+4h] [ebp-20h] BYREF
  int v26; // [esp+8h] [ebp-1Ch]
  int v27; // [esp+Ch] [ebp-18h]
  int v28; // [esp+10h] [ebp-14h]
  int v29; // [esp+14h] [ebp-10h]
  int v30; // [esp+18h] [ebp-Ch]
  __int16 v31; // [esp+1Ch] [ebp-8h]
  __int16 v32; // [esp+1Eh] [ebp-6h]

  result = (int)dword_A83D4C; /*0x6fb170*/
  if ( dword_A83D4C ) /*0x6fb17d*/
  {
    LOBYTE(result) = this->isGeneratingGap; /*0x6fb183*/
    if ( !(_BYTE)result ) /*0x6fb18b*/
    {
      result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 212))(this); /*0x6fb193*/
      if ( (_BYTE)result ) /*0x6fb19b*/
      {
        if ( !this->gapRadius ) /*0x6fb1a1*/
          this->gapRadius = *(char *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3282); /*0x6fb1bc*/
        v3 = this->?[0]; /*0x6fb1cb*/
        this->isGeneratingGap = 1; /*0x6fb1cd*/
        v4 = this->?[1]; /*0x6fb1d4*/
        v5 = this->?[2]; /*0x6fb1d7*/
        v6 = ZCoordToScreenY(v5); /*0x6fb1dc*/
        v7 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v6) >> 32) - v6) >> 31) /*0x6fb1fb*/
             + ((int)(((unsigned __int64)(2004318071LL * v6) >> 32) - v6) >> 4)) << 8)
           + v3;
        v8 = ZCoordToScreenY(v5); /*0x6fb1fd*/
        v9 = ((unsigned __int64)(2004318071LL * v8) >> 32) - v8; /*0x6fb20b*/
        v10 = v7; /*0x6fb20d*/
        gapRadius = this->gapRadius; /*0x6fb21e*/
        v12 = -2 - gapRadius; /*0x6fb229*/
        v13 = -2 - gapRadius; /*0x6fb232*/
        v29 = gapRadius; /*0x6fb236*/
        v31 = v10 / 256; /*0x6fb23d*/
        v30 = -2 - gapRadius; /*0x6fb24b*/
        v32 = (int)(((((unsigned int)v9 >> 31) + (v9 >> 4)) << 8) + v4) / 256; /*0x6fb254*/
        for ( i = gapRadius + 2; v13 < i; ++v13 ) /*0x6fb25e*/
        {
          if ( v12 < i ) /*0x6fb266*/
          {
            v15 = v13 * v13; /*0x6fb271*/
            v16 = (gapRadius + 1) * (gapRadius + 1); /*0x6fb274*/
            v28 = v13 * v13; /*0x6fb277*/
            v27 = v16; /*0x6fb27b*/
            while ( 1 ) /*0x6fb285*/
            {
              if ( v15 + v12 * v12 < v16 ) /*0x6fb28e*/
              {
                vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x6fb2a2*/
                LOWORD(v26) = v13 + v31; /*0x6fb2a4*/
                HIWORD(v26) = v12 + v32; /*0x6fb2a9*/
                *(_DWORD *)v25 = v26; /*0x6fb2b2*/
                v18 = (House *)vtable0[15](this); /*0x6fb2b8*/
                if ( !(unsigned __int8)House::IsHumanPlayer(v18) /*0x6fb2e9*/
                  && !(unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, (#375 *)dword_A83D4C)
                  && !dword_A83D4C->__pad_140[181] )
                {
                  if ( *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25) + 76) != 1 /*0x6fb32c*/
                    && *((int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25) + 76) >= 0 )
                  {
                    v19 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb338*/
                    ++v19[76]; /*0x6fb349*/
                  }
                  v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb355*/
                  ++v20[77]; /*0x6fb366*/
                  if ( *((int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25) + 76) >= 1 ) /*0x6fb37d*/
                  {
                    v21 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb389*/
                    v21[75] &= ~0x10u; /*0x6fb3a0*/
                    v22 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb3a8*/
                    v22[75] &= ~8u; /*0x6fb3bb*/
                  }
                  v16 = v27; /*0x6fb3bd*/
                }
                v23 = (House *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 15))(this); /*0x6fb3c5*/
                if ( (unsigned __int8)House::IsHumanPlayer(v23) /*0x6fb3ef*/
                  || (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, (#375 *)dword_A83D4C)
                  || dword_A83D4C->__pad_140[181] )
                {
                  v24 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb403*/
                  ++v24[79]; /*0x6fb414*/
                }
              }
              gapRadius = v29; /*0x6fb416*/
              ++v12; /*0x6fb41a*/
              i = v29 + 2; /*0x6fb41b*/
              if ( v12 >= v29 + 2 ) /*0x6fb420*/
                break; /*0x6fb420*/
              v15 = v28; /*0x6fb281*/
            }
            v12 = v30; /*0x6fb426*/
          }
        }
        if ( dword_A83D4C ) /*0x6fb43d*/
          dword_A83D4C->__pad_140[256] = 0; /*0x6fb43f*/
        FogOfWar::Render((FogOfWar *)&stru_87F5F0.__pad_58[416]); /*0x6fb44b*/
        return MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x6fb457*/
      }
    }
  }
  return result; /*0x6fb45c*/
}



// ==== 0x006FB470  TechnoClass::RemoveShroud  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::RemoveShroud(TechnoClass *this)
{
  int result; // eax
  int v3; // edi
  int v4; // ebp
  int v5; // ebx
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  int v9; // edx
  signed int v10; // eax
  int gapRadius; // ecx
  int v12; // edi
  int v13; // ebx
  int i; // eax
  int v15; // eax
  int v16; // ebp
  int (__thiscall **vtable0)(TechnoClass *); // edx
  House *v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  House *v23; // eax
  _DWORD *v24; // eax
  __int16 v25[2]; // [esp+4h] [ebp-1Ch] BYREF
  int v26; // [esp+8h] [ebp-18h]
  int j; // [esp+Ch] [ebp-14h]
  int v28; // [esp+10h] [ebp-10h]
  int v29; // [esp+14h] [ebp-Ch]
  __int16 v30; // [esp+18h] [ebp-8h]
  __int16 v31; // [esp+1Ah] [ebp-6h]

  result = (int)dword_A83D4C; /*0x6fb470*/
  if ( dword_A83D4C ) /*0x6fb47d*/
  {
    LOBYTE(result) = this->isGeneratingGap; /*0x6fb483*/
    if ( (_BYTE)result ) /*0x6fb48b*/
    {
      if ( !this->gapRadius ) /*0x6fb491*/
        this->gapRadius = *(char *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3282); /*0x6fb4aa*/
      v3 = this->?[0]; /*0x6fb4b9*/
      this->isGeneratingGap = 0; /*0x6fb4bb*/
      v4 = this->?[1]; /*0x6fb4c2*/
      v5 = this->?[2]; /*0x6fb4c5*/
      v6 = ZCoordToScreenY(v5); /*0x6fb4ca*/
      v7 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v6) >> 32) - v6) >> 31) /*0x6fb4e9*/
           + ((int)(((unsigned __int64)(2004318071LL * v6) >> 32) - v6) >> 4)) << 8)
         + v3;
      v8 = ZCoordToScreenY(v5); /*0x6fb4eb*/
      v9 = ((unsigned __int64)(2004318071LL * v8) >> 32) - v8; /*0x6fb4f9*/
      v10 = v7; /*0x6fb4fb*/
      gapRadius = this->gapRadius; /*0x6fb50c*/
      v12 = -2 - gapRadius; /*0x6fb517*/
      v13 = -2 - gapRadius; /*0x6fb520*/
      v28 = gapRadius; /*0x6fb524*/
      v30 = v10 / 256; /*0x6fb52b*/
      v29 = -2 - gapRadius; /*0x6fb539*/
      v31 = (int)(((((unsigned int)v9 >> 31) + (v9 >> 4)) << 8) + v4) / 256; /*0x6fb542*/
      for ( i = gapRadius + 2; v13 < i; ++v13 ) /*0x6fb54c*/
      {
        if ( v12 < i ) /*0x6fb554*/
        {
          v15 = v13 * v13; /*0x6fb55f*/
          v16 = (gapRadius + 1) * (gapRadius + 1); /*0x6fb562*/
          for ( j = v13 * v13; ; v15 = j ) /*0x6fb565*/
          {
            if ( v15 + v12 * v12 < v16 ) /*0x6fb578*/
            {
              vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x6fb58c*/
              LOWORD(v26) = v13 + v30; /*0x6fb58e*/
              HIWORD(v26) = v12 + v31; /*0x6fb593*/
              *(_DWORD *)v25 = v26; /*0x6fb59c*/
              v18 = (House *)vtable0[15](this); /*0x6fb5a2*/
              if ( !(unsigned __int8)House::IsHumanPlayer(v18) /*0x6fb5d3*/
                && !(unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, (#375 *)dword_A83D4C)
                && !dword_A83D4C->__pad_140[181] )
              {
                v19 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb5eb*/
                --v19[77]; /*0x6fb5fc*/
                if ( dword_A83D4C[33].__pad_B0[42] ) /*0x6fb603*/
                {
                  if ( *((int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25) + 77) <= 0 ) /*0x6fb628*/
                  {
                    v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb634*/
                    --v20[76]; /*0x6fb645*/
                    if ( *((int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25) + 76) <= 0 ) /*0x6fb65e*/
                    {
                      v21 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb66a*/
                      v21[75] |= 8u; /*0x6fb681*/
                      v22 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb689*/
                      v22[75] |= 0x10u; /*0x6fb69c*/
                    }
                  }
                }
              }
              v23 = (House *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 15))(this); /*0x6fb6a2*/
              if ( (unsigned __int8)House::IsHumanPlayer(v23) /*0x6fb6cc*/
                || (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, (#375 *)dword_A83D4C)
                || dword_A83D4C->__pad_140[181] )
              {
                v24 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb6e0*/
                --v24[79]; /*0x6fb6f1*/
              }
            }
            gapRadius = v28; /*0x6fb6f3*/
            ++v12; /*0x6fb6f7*/
            i = v28 + 2; /*0x6fb6f8*/
            if ( v12 >= v28 + 2 ) /*0x6fb6fd*/
              break; /*0x6fb6fd*/
          }
          v12 = v29; /*0x6fb703*/
        }
      }
      if ( dword_A83D4C ) /*0x6fb71a*/
        dword_A83D4C->__pad_140[256] = 0; /*0x6fb71c*/
      FogOfWar::Render((FogOfWar *)&stru_87F5F0.__pad_58[416]); /*0x6fb728*/
      return MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x6fb734*/
    }
  }
  return result; /*0x6fb739*/
}



// ==== 0x006FB740  TechnoClass::UpdateLocomotion  this=TechnoClass  sig=csp ====
void __thiscall FootClass::UpdateLocomotion(TechnoClass *this, double a2, int a3)
{
  double v3; // st7
  int v5; // edi
  _DWORD *Member; // edi
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int *v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // edx
  int v16; // eax
  wchar_t *v17; // eax
  wchar_t *v19; // edi
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  wchar_t *v25; // eax
  int vtable0; // edx
  int v27; // ebp
  int v28; // edi
  _DWORD *v29; // eax
  CellClass *v30; // eax
  int v31; // eax
  int j; // edi
  int v34; // [esp+4h] [ebp-38h]
  int v35; // [esp+18h] [ebp-24h] BYREF
  int v36; // [esp+1Ch] [ebp-20h]
  void **v37; // [esp+24h] [ebp-18h] BYREF
  void *Block; // [esp+28h] [ebp-14h]
  int v39; // [esp+2Ch] [ebp-10h]
  char v40; // [esp+30h] [ebp-Ch]
  char v41; // [esp+31h] [ebp-Bh]
  int i; // [esp+34h] [ebp-8h]
  int v43; // [esp+38h] [ebp-4h]

  if ( this->cloakState ) /*0x6fb74b*/
  {
    v11 = &this->cloakProgress[2]; /*0x6fb8ea*/
    if ( Locomotor::GetSpeed((Locomotor *)&this->cloakProgress[2]) || (v12 = this->cloakProgress[5]) == 0 ) /*0x6fb903*/
    {
      LOBYTE(this->cloakProgress[1]) = 0; /*0x6fb934*/
    }
    else
    {
      v13 = this->cloakProgress[6]; /*0x6fb905*/
      v14 = this->cloakProgress[0]; /*0x6fb90b*/
      LOBYTE(this->cloakProgress[1]) = 1; /*0x6fb913*/
      this->cloakProgress[0] = v13 + v14; /*0x6fb91a*/
      v15 = v36; /*0x6fb926*/
      *v11 = (int)dword_A8ED84; /*0x6fb92a*/
      this->cloakProgress[3] = v15; /*0x6fb92c*/
      this->cloakProgress[4] = v12; /*0x6fb92f*/
    }
    if ( this->cloakProgress[0] < 0 ) /*0x6fb940*/
      this->cloakProgress[0] = 0; /*0x6fb942*/
    switch ( this->cloakState ) /*0x6fb94f*/
    {
      case 1: /*0x6fb94f*/
        (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 292))(this, 2); /*0x6fba49*/
        if ( !this->cloakProgress[5] ) /*0x6fba4f*/
        {
          this->cloakProgress[2] = (int)dword_A8ED84; /*0x6fba67*/
          v22 = v36; /*0x6fba69*/
          this->cloakProgress[5] = 1; /*0x6fba6d*/
          this->cloakProgress[3] = v22; /*0x6fba73*/
          this->cloakProgress[4] = 1; /*0x6fba76*/
        }
        v23 = (*(int (__thiscall **)(TechnoClass *, int, _DWORD))(this->vtable0 + 104))(this, 1, 0) - 2; /*0x6fba83*/
        if ( v23 ) /*0x6fba86*/
        {
          v24 = v23 - 1; /*0x6fba8c*/
          if ( !v24 || v24 == 2 ) /*0x6fba92*/
          {
            this->cloakState = 2; /*0x6fba98*/
            v25 = dword_A8ED84; /*0x6fbaa2*/
            this->cloakProgress[5] = 0; /*0x6fbaaf*/
            this->cloakProgress[2] = (int)v25; /*0x6fbab7*/
            this->cloakProgress[3] = v36; /*0x6fbabd*/
            this->cloakProgress[4] = 0; /*0x6fbac0*/
            vtable0 = this->vtable0; /*0x6fbac3*/
            this->cloakProgress[0] = 0; /*0x6fbac7*/
            (*(void (__thiscall **)(TechnoClass *, int))(vtable0 + 292))(this, 2); /*0x6fbacd*/
            if ( (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) != 1 || *((_DWORD *)this + 435) == -1 ) /*0x6fbae6*/
            {
              Block = 0; /*0x6fbafc*/
              v39 = 0; /*0x6fbb00*/
              v40 = 1; /*0x6fbb04*/
              v27 = dword_A8EC88 - 1; /*0x6fbb09*/
              v41 = 0; /*0x6fbb0c*/
              v37 = &DynamicVectorClass<TechnoClass *>::`vftable'; /*0x6fbb12*/
              v43 = 10; /*0x6fbb1a*/
              for ( i = 0; v27 >= 0; --v27 ) /*0x6fbb26*/
              {
                v28 = *((_DWORD *)dword_A8EC7C + v27); /*0x6fbb32*/
                if ( *(TechnoClass **)(v28 + 692) == this ) /*0x6fbb3b*/
                {
                  v34 = *(_DWORD *)(*(_DWORD *)(v28 + 540) + 48); /*0x6fbb4a*/
                  v29 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, int *))(this->vtable0 + 72))(this, &v35); /*0x6fbb50*/
                  v30 = Coord::To_Cell((Coord *)&dword_87F7E8, v29); /*0x6fbb59*/
                  if ( ((unsigned __int8)Cell::IsPassableOffset((Cell *)v30, v34) /*0x6fbba3*/
                     || *(_DWORD *)(v28 + 540) == this->owner)
                    && (i < v39
                     || (v41 || !v39)
                     && v43 > 0
                     && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v37[2])(&v37, v43 + v39, 0)) )
                  {
                    v31 = i++; /*0x6fbbae*/
                    *((_DWORD *)Block + v31) = v28; /*0x6fbbb9*/
                  }
                }
              }
              (*(void (__thiscall **)(TechnoClass *, _DWORD))(this->vtable0 + 220))(this, 0); /*0x6fbbc8*/
              for ( j = i - 1; j >= 0; --j ) /*0x6fbbd7*/
                (*(void (__thiscall **)(_DWORD, TechnoClass *))(**((_DWORD **)Block + j) + 968))( /*0x6fbbe3*/
                  *((_DWORD *)Block + j),
                  this);
              v37 = &VectorClass<TechnoClass *>::`vftable'; /*0x6fbbf0*/
              if ( Block && v41 ) /*0x6fbc00*/
                __3_YAXPAX_Z(Block); /*0x6fbc03*/
            }
            else
            {
              (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 252))(this); /*0x6fbaec*/
            }
            if ( (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) == 1 /*0x6fbc1d*/
              && !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner) )
            {
              (*(void (__thiscall **)(TechnoClass *, _DWORD *, int, _DWORD))(this->vtable0 + 372))( /*0x6fbc32*/
                this,
                &dword_B0EA90,
                1,
                0);
            }
          }
        }
        else
        {
          BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x6fbc44*/
          _EAX = dword_8871E0; /*0x6fbc49*/
          __asm /*0x6fbc4e*/
          {
            fcomp qword ptr [eax+1708h]
            fnstsw ax
          }
          if ( (BYTE1(_EAX) & 0x41) != 0 && Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < 10 ) /*0x6fbc72*/
            (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 1116))(this, 1); /*0x6fbc7a*/
        }
        break;
      case 2: /*0x6fb94f*/
        if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 676))(this) ) /*0x6fba20*/
          (*(void (__thiscall **)(TechnoClass *, _DWORD))(this->vtable0 + 1116))(this, 0); /*0x6fba33*/
        break;
      case 3: /*0x6fb94f*/
        (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 292))(this, 2); /*0x6fb969*/
        v16 = (*(int (__thiscall **)(TechnoClass *, int, _DWORD))(this->vtable0 + 104))(this, 1, 0); /*0x6fb976*/
        if ( v16 ) /*0x6fb97b*/
        {
          if ( v16 == 1 && (*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 672))(this) ) /*0x6fb988*/
            (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 1120))(this, 1); /*0x6fb99c*/
        }
        else
        {
          v17 = dword_A8ED84; /*0x6fb9ac*/
          this->cloakProgress[5] = 0; /*0x6fb9b9*/
          this->cloakProgress[2] = (int)v17; /*0x6fb9bf*/
          this->cloakProgress[3] = v36; /*0x6fb9c5*/
          this->cloakProgress[4] = 0; /*0x6fb9c8*/
          this->cloakProgress[0] = 0; /*0x6fb9cb*/
          this->cloakState = 0; /*0x6fb9d1*/
          _ECX = dword_8871E0; /*0x6fb9d7*/
          v19 = dword_A8ED84; /*0x6fb9dd*/
          __asm /*0x6fb9e3*/
          {
            fld qword ptr [ecx+1410h]
            fmul ds:dbl_7E27F8
          }
          LOWORD(v20) = Math::RoundToInt(v3); /*0x6fb9ef*/
          v21 = v36; /*0x6fb9f4*/
          this->cloakDelayTimer[0] = (int)v19; /*0x6fba00*/
          this->cloakDelayTimer[1] = v21; /*0x6fba02*/
          this->cloakDelayTimer[2] = v20; /*0x6fba07*/
          (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 292))(this, 2); /*0x6fba0c*/
        }
        break;
    }
  }
  else if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 648))(this) /*0x6fb7f1*/
         && !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 892))(this)
         && !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 896))(this)
         && !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 468))(this)
         && !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 472))(this)
         || ((unsigned __int8)Audio::IsMediumVolume(&this->veterancy) || (unsigned __int8)Audio::IsLoud(&this->veterancy))
         && ((v5 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this),
              (unsigned __int8)Audio::IsMediumVolume(&this->veterancy))
          && *(_BYTE *)(v5 + 674)
          || (unsigned __int8)Audio::IsLoud(&this->veterancy) && (*(_BYTE *)(v5 + 674) || *(_BYTE *)(v5 + 692))) )
  {
    Member = (_DWORD *)Team::GetMember((Team *)this, 0); /*0x6fb805*/
    if ( !Member || (*(int (__thiscall **)(_DWORD *))(*Member + 44))(Member) != 6 || !*(_BYTE *)(Member[328] + 5821) ) /*0x6fb81d*/
    {
      if ( Locomotor::GetSpeed((Locomotor *)&this->cloakProgress[2]) || (v7 = this->cloakProgress[5]) == 0 ) /*0x6fb842*/
      {
        LOBYTE(this->cloakProgress[1]) = 0; /*0x6fb873*/
      }
      else
      {
        v8 = this->cloakProgress[6]; /*0x6fb844*/
        v9 = this->cloakProgress[0]; /*0x6fb84a*/
        LOBYTE(this->cloakProgress[1]) = 1; /*0x6fb852*/
        this->cloakProgress[0] = v8 + v9; /*0x6fb859*/
        this->cloakProgress[2] = (int)dword_A8ED84; /*0x6fb865*/
        this->cloakProgress[3] = v36; /*0x6fb86b*/
        this->cloakProgress[4] = v7; /*0x6fb86e*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 672))(this) ) /*0x6fb87d*/
      {
        BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x6fb88d*/
        _EAX = dword_8871E0; /*0x6fb892*/
        __asm /*0x6fb897*/
        {
          fcomp qword ptr [eax+1708h]
          fnstsw ax
        }
        if ( (BYTE1(_EAX) & 0x41) == 0 || Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < 4 ) /*0x6fb8cf*/
          (*(void (__thiscall **)(TechnoClass *, _DWORD))(this->vtable0 + 1120))(this, 0); /*0x6fb8a9*/
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

  if ( ((*(unsigned __int8 (__thiscall **)(float *))(this->chronoDestCoords)(this) || this->q3D2) /*0x6fbcdc*/
    && !(*(unsigned __int8 (__thiscall **)(float *))(this->currentBurstIndex)(this)
    && !(*(unsigned __int8 (__thiscall **)(float *))(this->target_laser_timer)(this)
    && !(*(unsigned __int8 (__thiscall **)(float *))(this->drainAnim)(this)
    && !(*(unsigned __int8 (__thiscall **)(float *))(this->isDisguisedFlag)(this) )
  {
    return 0; /*0x6fbcdc*/
  }
  if ( Audio::IsMediumVolume(this + 84) || Audio::IsLoud(this + 84) ) /*0x6fbcfd*/
  {
    v2 = (*(int (__thiscall **)(float *))(this->hasParachute)(this); /*0x6fbd12*/
    if ( Audio::IsMediumVolume(this + 84) ) /*0x6fbd14*/
    {
      if ( *(_BYTE *)(v2 + 674) ) /*0x6fbd1d*/
        return 0; /*0x6fbd1d*/
    }
    if ( Audio::IsLoud(this + 84) && (*(_BYTE *)(v2 + 674) || *(_BYTE *)(v2 + 692)) ) /*0x6fbd40*/
      return 0; /*0x6fbd40*/
  }
  v3 = (_DWORD *)(*(int (__thiscall **)(float *, _BYTE *))(this->u32_48)(this, v10); /*0x6fbd53*/
  LOWORD(v8) = *v3 / 256; /*0x6fbd66*/
  HIWORD(v8) = v3[1] / 256; /*0x6fbd7a*/
  v4 = this->owner; /*0x6fbd83*/
  v9 = v8; /*0x6fbd89*/
  v7 = *(_DWORD *)(v4 + 48); /*0x6fbd94*/
  v5 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v9); /*0x6fbd9b*/
  return !Cell::HasOccupierBit(v5, v7); /*0x6fbdb6*/
}



// ==== 0x006FBDC0  TechnoClass::ShouldBeCloaked  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass::ShouldBeCloaked(TechnoClass *this)
{
  int v2; // edi
  _DWORD *v3; // eax
  HouseClass *owner; // eax
  Cell *v5; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int relatedTagsCount; // [esp-4h] [ebp-24h]
  int v12; // [esp+Ch] [ebp-14h]
  __int16 v13[2]; // [esp+10h] [ebp-10h] BYREF
  _BYTE v14[12]; // [esp+14h] [ebp-Ch] BYREF

  if ( !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 162))(this) ) /*0x6fbdca*/
  {
    if ( !(unsigned __int8)Audio::IsMediumVolume(this->veterancy) && !(unsigned __int8)Audio::IsLoud(this->veterancy) /*0x6fbe2e*/
      || ((v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this),
           !(unsigned __int8)Audio::IsMediumVolume(this->veterancy))
       || !*(_BYTE *)(v2 + 674))
      && (!(unsigned __int8)Audio::IsLoud(this->veterancy) || !*(_BYTE *)(v2 + 674) && !*(_BYTE *)(v2 + 692)) )
    {
      v3 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v14); /*0x6fbe41*/
      LOWORD(v12) = *v3 / 256; /*0x6fbe54*/
      HIWORD(v12) = v3[1] / 256; /*0x6fbe68*/
      owner = this->owner; /*0x6fbe71*/
      *(_DWORD *)v13 = v12; /*0x6fbe77*/
      relatedTagsCount = owner->relatedTagsCount; /*0x6fbe82*/
      v5 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13); /*0x6fbe89*/
      if ( !(unsigned __int8)Cell::HasOccupierBit(v5, relatedTagsCount) && !this->isCloakableFlag ) /*0x6fbe99*/
        return 0; /*0x6fbeab*/
    }
  }
  if ( this->cloakState == 2 ) /*0x6fbeb3*/
    return 0; /*0x6fbebd*/
  v7 = this->diskLaserTimer[0]; /*0x6fbebe*/
  v8 = this->diskLaserTimer[2]; /*0x6fbec4*/
  if ( v7 != -1 ) /*0x6fbecd*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v7 >= v8 ) /*0x6fbed9*/
      goto LABEL_19; /*0x6fbed9*/
    v8 -= *(_DWORD *)&stru_A8EB00.?[416] - v7; /*0x6fbedb*/
  }
  if ( v8 ) /*0x6fbedf*/
    return 0; /*0x6fbee9*/
LABEL_19:
  if ( this->target /*0x6fbef9*/
    && (*((unsigned __int8 (__thiscall **)(TechnoClass *, AbstractClass *))this->RadioClass + 235))(this, this->target) )
  {
    return 0; /*0x6fbf0b*/
  }
  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 6 && this->cloakProgress[0] ) /*0x6fbf18*/
    return 0; /*0x6fbf2a*/
  v9 = this->cloakDelayTimer[0]; /*0x6fbf2b*/
  v10 = this->cloakDelayTimer[2]; /*0x6fbf31*/
  if ( v9 != -1 ) /*0x6fbf3a*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v9 >= v10 ) /*0x6fbf46*/
      return (!this->locomotorSource || !this || (this->? & 4) == 0 || !*((_BYTE *)this + 1709)) /*0x6fbf46*/
          && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 114))(this) <= 0;
    v10 -= *(_DWORD *)&stru_A8EB00.?[416] - v9; /*0x6fbf48*/
  }
  if ( v10 ) /*0x6fbf4c*/
    return 0; /*0x6fbf56*/
  return (!this->locomotorSource || !this || (this->? & 4) == 0 || !*((_BYTE *)this + 1709)) /*0x6fbea3*/
      && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 114))(this) <= 0;
}



// ==== 0x006FBFA0  TechnoClass::ExecuteMoveCommand  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ExecuteMoveCommand(TechnoClass *this)
{
  int result; // eax
  TeamClass *attachedTag; // ecx

  if ( (this->isDiscoveredByCurrentPlayer /*0x6fbfce*/
     || (unsigned __int8)House::IsHumanPlayer((House *)this->owner)
     || (result = (int)g_hWnd) == 0)
    && (result = ObjectClass::HandleSelection((ObjectClass *)this), (_BYTE)result) )
  {
    attachedTag = (TeamClass *)this->?; /*0x6fbfd0*/
    if ( attachedTag ) /*0x6fbfd5*/
      TeamClass::Update_0(attachedTag, 33, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x6fbfe4*/
    if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) /*0x6fc001*/
      || *(_BYTE *)(this->owner->relatedTagsCapacity + 422) )
    {
      if ( g_MoveFeedback ) /*0x6fc012*/
        (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 216))(this); /*0x6fc018*/
    }
    TechnoClass::IsProductionChainActive(this); /*0x6fc020*/
    LOBYTE(result) = 1; /*0x6fc025*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6fc029*/
  }
  return result; /*0x6fc027*/
}



// ==== 0x006FC030  TechnoClass::CanMoveToCell  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::CanMoveToCell(TechnoClass *this)
{
  Cell *v3; // eax

  if ( this->slaveOwner ) /*0x6fc033*/
    return 0; /*0x6fc03d*/
  if ( this->__pad_1C4[4] ) /*0x6fc041*/
    return 0; /*0x6fc04b*/
  if ( this->bunkerLinkedUnit ) /*0x6fc04f*/
    return 0; /*0x6fc059*/
  if ( this->isTether ) /*0x6fc05d*/
  {
    v3 = (Cell *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 111))(this); /*0x6fc06b*/
    if ( Cell::IsBridge(v3) ) /*0x6fc073*/
      return 0; /*0x6fc07c*/
  }
  return AbstractClass::COMStub_79((ObjectClass *)this); /*0x6fc03f*/
}



// ==== 0x006FC090  TechnoClass::Vt240Thunk  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::Vt240Thunk(TechnoClass *this)
{
  int v2; // [esp+4h] [ebp+4h]
  int v3; // [esp+8h] [ebp+8h]

  return (*((int (__thiscall **)(TechnoClass *, int, int, _DWORD))this->RadioClass + 240))(this, v2, v3, 0); /*0x6fc0a4*/
}



// ==== 0x006FC0B0  TechnoClass::ReadINI  this=TechnoClass  sig=csp ====
int __fastcall TriggerTypeClass::ReadINI(TechnoClass *this, int a2, _BYTE *a3, int a4, char a5)
{
  TemporalClass *temporalUsing; // eax
  #375 **v8; // ebp
  _DWORD *v9; // eax
  CellClass *v10; // edi
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  TechnoClass *transporter; // ecx
  TechnoClass *v21; // eax
  _BYTE *v22; // eax
  bool v23; // bl
  FootClass *locomotorTarget; // eax
  FootClass *v25; // edi
  FootClass *v26; // eax
  int v27; // edx
  int v28; // edx
  int v29; // eax
  int v30; // edx
  int v31; // eax
  char v32; // al
  int v33; // edi
  int *v34; // ebp
  int v35; // edx
  int v36; // eax
  int v37; // [esp+8h] [ebp-24h]
  int v38; // [esp+1Ch] [ebp-10h]
  int v39; // [esp+20h] [ebp-Ch] BYREF
  int v40; // [esp+24h] [ebp-8h]

  if ( !a3 || this->slaveOwner ) /*0x6fc0c5*/
    return 5; /*0x6fc0c5*/
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 118))(this) ) /*0x6fc0d5*/
    return 3; /*0x6fc0eb*/
  if ( this->locomotorTarget == (FootClass *)a3 ) /*0x6fc0f4*/
    return 3; /*0x6fc102*/
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 117))(this) /*0x6fc145*/
    || this->__pad_1C4[4]
    || this->isSinking
    || a3 == (_BYTE *)this->drainTarget
    || a3 == (_BYTE *)this->transporter )
  {
    return 5; /*0x6fc145*/
  }
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 119))(this) ) /*0x6fc14f*/
  {
    temporalUsing = this->temporalUsing; /*0x6fc159*/
    if ( temporalUsing ) /*0x6fc161*/
    {
      if ( a3 == *(_BYTE **)temporalUsing->__pad_28 ) /*0x6fc166*/
        return 3; /*0x6fc174*/
    }
  }
  v8 = (a3[20] & 1) != 0 ? (#375 **)a3 : 0;
  v9 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)a3 + 72))(a3, &v39); /*0x6fc18e*/
  v10 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v9); /*0x6fc19e*/
  if ( this ) /*0x6fc1a0*/
  {
    if ( (this->? & 4) != 0 && *((_BYTE *)this + 1709) ) /*0x6fc1a8*/
      return 5; /*0x6fc1b0*/
  }
  if ( v8 ) /*0x6fc1b8*/
  {
    if ( *((_BYTE *)v8 + 129) /*0x6fc23f*/
      || this->isBerserk && *(_BYTE *)((*((int (__thiscall **)(#375 **))*v8 + 33))(v8) + 1680)
      || *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1683)
      && *(_BYTE *)((*((int (__thiscall **)(#375 **))*v8 + 33))(v8) + 1684)
      || *((_BYTE *)v8 + 636)
      || !this->owner->currentPlayer && (*((unsigned __int8 (__thiscall **)(#375 **))*v8 + 88))(v8) )
    {
      return 5; /*0x6fc247*/
    }
    if ( (*((int (__thiscall **)(#375 **, int, HouseClass *))*v8 + 26))(v8, 1, this->owner) == 5 /*0x6fc296*/
      && !(unsigned __int8)Cell::IsPassableOffset((Cell *)v10, this->owner->relatedTagsCount)
      && (TechnoClass::GetValue(this, -1) > 0 || !(unsigned __int8)HouseClass::IsAlliedWith(
                                                                     v8[135],
                                                                     (#375 *)this->owner)) )
    {
      return 6; /*0x6fc29d*/
    }
    if ( *((_BYTE *)v8 + 1048) /*0x6fc2cc*/
      && *(_BYTE *)((*((int (__thiscall **)(#375 **))*v8 + 33))(v8) + 3434)
      && !(*((unsigned __int8 (__thiscall **)(#375 **))*v8 + 21))(v8) )
    {
      return 5; /*0x6fc2cc*/
    }
  }
  if ( this->? ) /*0x6fc2d2*/
    return 5; /*0x6fc2d2*/
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 223))(this) ) /*0x6fc2e4*/
  {
    if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 1 ) /*0x6fc2f8*/
      return 6; /*0x6fc2f8*/
    v11 = *((_DWORD *)this + 433); /*0x6fc2fe*/
    if ( !*(_BYTE *)(v11 + 3609) && !*(_BYTE *)(v11 + 3608) ) /*0x6fc30e*/
      return 6; /*0x6fc30e*/
  }
  v12 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, a4); /*0x6fc32b*/
  v38 = v12; /*0x6fc32f*/
  if ( !v12 || *(_BYTE *)(v12 + 335) && HouseClass::IonSensitivesShouldBeOffline() ) /*0x6fc349*/
    return 6; /*0x6fc350*/
  if ( *(_BYTE *)(v12 + 322) ) /*0x6fc356*/
  {
    if ( v8 && v8[116] ) /*0x6fc364*/
      return 5; /*0x6fc36c*/
    if ( !v8 ) /*0x6fc378*/
      goto LABEL_52; /*0x6fc378*/
    if ( !*(_BYTE *)((*((int (__thiscall **)(#375 **))*v8 + 33))(v8) + 1519) ) /*0x6fc385*/
      return 5; /*0x6fc876*/
  }
  if ( v8 && v8[185] && (*((int (__thiscall **)(#375 **))*v8 + 11))(v8) == 1 && (double)*(int *)(v12 + 180) < 384.0 ) /*0x6fc3bf*/
    return 5; /*0x6fc3bf*/
LABEL_52:
  if ( this )
  {
    if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 1 )
    {
      v13 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this); /*0x6fc3d9*/
      if ( (unsigned __int8)TechnoClass::HasDeployFlags(v13 == 1 ? this : 0) )
        return 5; /*0x6fc3e7*/
    }
  }
  v14 = *(_DWORD *)(v12 + 172); /*0x6fc3f4*/
  if ( v14 ) /*0x6fc3fc*/
  {
    if ( *(_BYTE *)(v14 + 365) && v8 && *(_BYTE *)((*((int (__thiscall **)(#375 **))*v8 + 33))(v8) + 3381) ) /*0x6fc417*/
      return 5; /*0x6fc417*/
  }
  v15 = *(_DWORD *)(v12 + 172); /*0x6fc425*/
  if ( v15 )
  {
    if ( *(_BYTE *)(v15 + 365) && v8 && v8[185] ) /*0x6fc43d*/
      return 5; /*0x6fc43d*/
    if ( *(_BYTE *)(v15 + 347) )
    {
      if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 44))(a3) == 1 )
      {
        v16 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 44))(a3); /*0x6fc469*/
        if ( (unsigned __int8)TechnoClass::HasDeployFlags(v16 == 1 ? (TechnoClass *)a3 : 0) )
          return 5; /*0x6fc477*/
      }
    }
  }
  v17 = *(_DWORD *)(v12 + 172); /*0x6fc484*/
  if ( v17
    && *(_BYTE *)(v17 + 347)
    && (a3[20] & 4) != 0
    && *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 132))(a3) + 3476) )
  {
    if ( !*((a3[20] & 4) != 0 ? (_DWORD *)(a3 + 1652) : (_DWORD *)1652) )
      WinAPI::Wrapper(-2147467261); /*0x6fc4cf*/
    v37 = *((a3[20] & 4) != 0 ? (_DWORD *)(a3 + 1652) : (_DWORD *)1652);
    if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v37 + 128))(v37) ) /*0x6fc4dd*/
      return 5; /*0x6fc4dd*/
  }
  v18 = *(_DWORD *)(v12 + 172); /*0x6fc4ef*/
  if ( v18 )
  {
    if ( *(_BYTE *)(v18 + 347)
      && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 44))(a3) == 1
      && *(_BYTE *)(*((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 44))(a3) == 1
                    ? (_DWORD *)(a3 + 1732)
                    : (_DWORD *)1732)
                  + 3603)
      && *((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 44))(a3) == 1 ? (_DWORD *)(a3 + 172) : (_DWORD *)172) == 16 )
    {
      return 5; /*0x6fc546*/
    }
  }
  v19 = *(_DWORD *)(v12 + 172); /*0x6fc54c*/
  if ( v19 ) /*0x6fc554*/
  {
    if ( *(_BYTE *)(v19 + 347) && v8 && *(_BYTE *)((*((int (__thiscall **)(#375 **))*v8 + 33))(v8) + 3479) ) /*0x6fc56f*/
      return 5; /*0x6fc56f*/
  }
  if ( this->? ) /*0x6fc57d*/
  {
    if ( !*(_BYTE *)(v12 + 323) ) /*0x6fc587*/
      return 5; /*0x6fc587*/
    transporter = this->transporter; /*0x6fc599*/
    if ( transporter ) /*0x6fc5a1*/
    {
      if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))transporter->RadioClass + 117))(transporter) ) /*0x6fc5a5*/
        return 5; /*0x6fc5a5*/
    }
  }
  if ( this->? ) /*0x6fc5b3*/
  {
    v21 = this->transporter; /*0x6fc5bd*/
    if ( v21 ) /*0x6fc5c5*/
    {
      if ( v21->transporter ) /*0x6fc5c7*/
        return 5; /*0x6fc5c7*/
    }
  }
  if ( v8 /*0x6fc5f8*/
    && *(_DWORD *)(v12 + 172)
    && (*((unsigned __int8 (__thiscall **)(#375 **))*v8 + 117))(v8)
    && !*(_BYTE *)(*(_DWORD *)(v12 + 172) + 346) )
  {
    return 5; /*0x6fc600*/
  }
  if ( *(_BYTE *)(v12 + 305) ) /*0x6fc606*/
  {
    if ( !TechnoClass::CheckTargetCell(this) /*0x6fc623*/
      && !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 224))(this) )
    {
      if ( !SpawnManagerClass::CountAliveSpawns(this->spawnManager) ) /*0x6fc637*/
        return 3; /*0x6fc64c*/
      goto LABEL_98; /*0x6fc63e*/
    }
    return 6; /*0x6fcd2c*/
  }
LABEL_98:
  if ( *(_BYTE *)(*(_DWORD *)(v12 + 172) + 346) /*0x6fc67b*/
    && v8
    && (*((int (__thiscall **)(#375 **))*v8 + 11))(v8) == 2
    && *(_BYTE *)((*((int (__thiscall **)(#375 **))*v8 + 33))(v8) + 3412) )
  {
    return 5; /*0x6fc683*/
  }
  v22 = *(_BYTE **)(*((int (__thiscall **)(TechnoClass *, bool))this->RadioClass + 254))(this, a4 == 0); /*0x6fc69f*/
  if ( v22 /*0x6fc6f7*/
    && (v22[297] && this->fireParticles
     || v22[301] && this->railgunParticles
     || v22[298] && this->sparkParticles
     || v22[304] && this->damageParticles_2) )
  {
    return 6; /*0x6fc6ff*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 84))(a3)
    && !*(_BYTE *)(*(_DWORD *)(v12 + 160) + 676) )
  {
    return a3 != (_BYTE *)this->locomotorTarget ? 5 : 3;
  }
  if ( (a3[20] & 4) != 0 /*0x6fc75c*/
    && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 120))(a3) != 2
    && !*(_BYTE *)(*(_DWORD *)(v12 + 160) + 676) )
  {
    return 5; /*0x6fc75c*/
  }
  if ( v8 )
  {
    v23 = *(_DWORD *)((*((int (__thiscall **)(#375 **))*v8 + 111))(v8) + 236) == 2 /*0x6fc796*/
       || *(_DWORD *)((*((int (__thiscall **)(#375 **))*v8 + 111))(v8) + 236) == 6;
    if ( (*((unsigned __int8 (__thiscall **)(#375 **))*v8 + 21))(v8) ) /*0x6fc79d*/
      v23 = 0; /*0x6fc7a4*/
    if ( *((_BYTE *)v8 + 140) ) /*0x6fc7a6*/
    {
      v23 = 0; /*0x6fc7b0*/
    }
    else if ( v23 && (*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 186))(this, a3) == -1 ) /*0x6fc7ca*/
    {
      return 5; /*0x6fc7ca*/
    }
    if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 80))(a3) || v23 ) /*0x6fc7e3*/
      goto LABEL_139; /*0x6fc7e3*/
  }
  else
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 84))(a3) /*0x6fc7fc*/
      && !*(_BYTE *)(*(_DWORD *)(v12 + 160) + 677) )
    {
      return 5; /*0x6fc812*/
    }
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 44))(a3) != 11
      || *((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 44))(a3) == 11 ? (_DWORD *)(a3 + 236) : (_DWORD *)236) == 2
      || *((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 44))(a3) == 11 ? (_DWORD *)(a3 + 236) : (_DWORD *)236) == 6 )
    {
      goto LABEL_139; /*0x6fc855*/
    }
  }
  if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1540) == 1 ) /*0x6fc868*/
    return 5; /*0x6fc868*/
LABEL_139:
  if ( *(_BYTE *)(v12 + 348) ) /*0x6fc87d*/
  {
    locomotorTarget = this->locomotorTarget; /*0x6fc887*/
    v25 = (FootClass *)a3; /*0x6fc88d*/
    if ( locomotorTarget /*0x6fc8ad*/
      && locomotorTarget != (FootClass *)a3
      && this->damageParticles_2
      && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 44))(a3) != 6 )
    {
      return 3; /*0x6fc8bb*/
    }
  }
  else
  {
    v25 = (FootClass *)a3; /*0x6fc8be*/
  }
  if ( *(_BYTE *)(v38 + 348) ) /*0x6fc8c2*/
  {
    v26 = this->locomotorTarget; /*0x6fc8cc*/
    if ( v26 ) /*0x6fc8d4*/
    {
      if ( v26 == v25 && (*((int (__thiscall **)(FootClass *))v25->TechnoClass + 11))(v25) != 6 ) /*0x6fc8e4*/
        return 3; /*0x6fc8f2*/
    }
  }
  if ( a4 /*0x6fc93a*/
    || !this
    || (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 1
    || (v27 = this->currentBurstIndex % *(_DWORD *)(v38 + 156), v27 >= 2)
    || (v28 = *(_DWORD *)(*((_DWORD *)this + 433) + 4 * v27 + 3648), v28 == -1)
    || (v29 = this->airstrikeTimer, v29 == -1) )
  {
    v30 = this->diskLaserTimer[0]; /*0x6fc94f*/
    v31 = this->diskLaserTimer[2]; /*0x6fc955*/
    if ( v30 != -1 ) /*0x6fc95e*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v30 >= v31 ) /*0x6fc96a*/
        goto LABEL_164; /*0x6fc96a*/
      v31 -= *(_DWORD *)&stru_A8EB00.?[416] - v30; /*0x6fc96c*/
    }
    if ( v31 ) /*0x6fc970*/
      return 3; /*0x6fc97e*/
  }
  else if ( v29 != v28 ) /*0x6fc93e*/
  {
    return 3; /*0x6fc94c*/
  }
LABEL_164:
  if ( *(_BYTE *)(v38 + 297) && this->fireParticles ) /*0x6fc98b*/
    return 3; /*0x6fc9a1*/
  if ( *(_BYTE *)(v38 + 301) && this->railgunParticles ) /*0x6fc9ae*/
    return 3; /*0x6fc9c4*/
  if ( *(_BYTE *)(v38 + 298) && this->sparkParticles ) /*0x6fc9d1*/
    return 3; /*0x6fc9e7*/
  if ( *(_BYTE *)(v38 + 304) && this->damageParticles_2 ) /*0x6fc9f4*/
    return 3; /*0x6fca0a*/
  if ( !this->ammo ) /*0x6fca0d*/
    return 1; /*0x6fca23*/
  if ( *(_BYTE *)(v38 + 307) /*0x6fca4d*/
    && this->cloakState
    && ((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 2 || this->cloakState == 2) )
  {
    return 9; /*0x6fca5b*/
  }
  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3367) ) /*0x6fca68*/
    return 8; /*0x6fca7e*/
  if ( *(_BYTE *)(*(_DWORD *)(v38 + 172) + 345)
    && this
    && (this->? & 4) != 0
    && !ParasiteClass::CanInfect(*((ParasiteClass **)this + 423), (v25->? & 4) != 0 ? v25 : 0) )
  {
    return 5; /*0x6fcac2*/
  }
  v32 = *(_BYTE *)(*(_DWORD *)(v38 + 172) + 345); /*0x6fcacb*/
  if ( v32 && (v25->? & 4) != 0 && *(int *)&stru_A8EB00.?[416] < v25->unknown698 ) /*0x6fcae9*/
    return 5; /*0x6fcaf7*/
  if ( !v8 ) /*0x6fcafc*/
    goto LABEL_231; /*0x6fcafc*/
  if ( v32 && (*((unsigned __int8 (__thiscall **)(#375 **))*v8 + 88))(v8) ) /*0x6fcb0b*/
    return 5; /*0x6fcb21*/
  if ( *(_BYTE *)(*(_DWORD *)(v38 + 172) + 341) && !CaptureManagerClass::CanCapture((int)this->captureManager, v8) ) /*0x6fcb3b*/
    return 5; /*0x6fcb50*/
  v33 = *(_DWORD *)(v38 + 172); /*0x6fcb56*/
  if ( *(double *)(v33 + 8 * *(_DWORD *)((*((int (__thiscall **)(#375 **))*v8 + 33))(v8) + 156) + 160) == 0.0 ) /*0x6fcb7c*/
    return 5; /*0x6fcb8a*/
  if ( *(_BYTE *)(v33 + 366) && !v8[14] ) /*0x6fcb97*/
    return 5; /*0x6fcbaa*/
  if ( *(_BYTE *)(v33 + 343) && v8[14] ) /*0x6fcbb7*/
    return 5; /*0x6fcbca*/
  if ( *((_BYTE *)v8 + 973) ) /*0x6fcbcd*/
    return 5; /*0x6fcbe3*/
  if ( this->? == *((_BYTE *)v8 + 140) ) /*0x6fcbf4*/
    goto LABEL_231; /*0x6fcbf4*/
  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 111))(this) /*0x6fcc4c*/
    && (*(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 111))(this) + 320) & 0x100) != 0
    && !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 21))(this)
    && (*((int (__thiscall **)(#375 **))*v8 + 111))(v8)
    && (*(_DWORD *)((*((int (__thiscall **)(#375 **))*v8 + 111))(v8) + 320) & 0x100) != 0 )
  {
    return 5; /*0x6fcc5a*/
  }
  v34 = (int *)(v8 + 39); /*0x6fcc63*/
  v39 = this->?[0]; /*0x6fcc6b*/
  v35 = this->?[1]; /*0x6fcc72*/
  v39 = *v34; /*0x6fcc75*/
  v40 = v35; /*0x6fcc79*/
  v36 = this->?[2]; /*0x6fcc80*/
  v40 = v34[1]; /*0x6fcc83*/
  if ( *(_BYTE *)(*(_DWORD *)(v38 + 172) + 345) ) /*0x6fcc90*/
  {
    if ( (int)abs32(v36 - v34[2]) > 2 * g_BuildingLoadQueue_Array.?[1] ) /*0x6fccac*/
      return 5; /*0x6fccb1*/
  }
LABEL_231:
  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3479) /*0x6fccd5*/
    && (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 224))(this) )
  {
    return 5; /*0x6fcce2*/
  }
  if ( !a5 || (*((unsigned __int8 (__thiscall **)(TechnoClass *, _BYTE *, int))this->RadioClass + 234))(this, a3, a4) ) /*0x6fcd04*/
    return 0; /*0x6fcd20*/
  return 8; /*0x6fc0df*/
}



// ==== 0x006FCD40  TechnoClass::ProcessDeploymentState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ProcessDeploymentState(TechnoClass *this)
{
  SpawnManagerClass *spawnManager; // ecx

  (*((void (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 242))(this, 0); /*0x6fcd47*/
  (*((void (__thiscall **)(TechnoClass *, _DWORD, int))this->RadioClass + 288))(this, 0, 1); /*0x6fcd55*/
  (*((void (__thiscall **)(TechnoClass *, int))this->RadioClass + 160))(this, 3); /*0x6fcd61*/
  if ( !this || (this->? & 4) == 0 || !*((_BYTE *)this + 1709) ) /*0x6fcd71*/
  {
    spawnManager = this->spawnManager; /*0x6fcd7b*/
    if ( spawnManager ) /*0x6fcd83*/
    {
      TaskManager::Update((TaskManager *)spawnManager); /*0x6fcd85*/
      UnitClass::ProcessIdleOrders((UnitClass *)this->spawnManager); /*0x6fcd90*/
    }
    (*((void (__thiscall **)(TechnoClass *, int))this->RadioClass + 55))(this, 1); /*0x6fcd9b*/
  }
  return (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 84))(this); /*0x6fcdab*/
}



// ==== 0x006FCDB0  TechnoClass::AssignTarget_SyncLog  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::AssignTarget_SyncLog(TechnoClass *this, int a2)
{
  int v3; // edi
  int result; // eax
  AirstrikeClass *airstrike; // ecx
  int *v6; // ebp
  int v7; // eax
  int v8; // eax
  TechnoClass *v9; // ebp
  SpawnManagerClass *spawnManager; // ecx
  _DWORD v11[3]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = a2; /*0x6fcdb8*/
  result = (int)this->target; /*0x6fcdbe*/
  LOBYTE(this->shouldLoseTarget) = 0; /*0x6fcdc4*/
  if ( a2 == result ) /*0x6fcdcc*/
    return result; /*0x6fcdcc*/
  airstrike = this->airstrike; /*0x6fcdd2*/
  if ( airstrike && airstrike->owner == this ) /*0x6fcddf*/
    WTFMode::ResetUnitFlags((WTFMode *)airstrike); /*0x6fcde1*/
  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this); /*0x6fcdeb*/
  if ( result == 2 ) /*0x6fcdf1*/
  {
    if ( !a2 ) /*0x6fcdf5*/
      goto LABEL_38; /*0x6fcdf5*/
    result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6fcdff*/
    if ( *(_BYTE *)(result + 3412) ) /*0x6fce05*/
    {
      result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6fce11*/
      if ( !*(_BYTE *)(result + 3432) ) /*0x6fce17*/
      {
        if ( this->ammo ) /*0x6fce1f*/
        {
          if ( this->? == 1 ) /*0x6fce2e*/
          {
            result = this->?; /*0x6fce30*/
            if ( result > 4 && result < 10 ) /*0x6fce3e*/
            {
              this->ammo = 0; /*0x6fce40*/
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
      result = *(_DWORD *)(a2 + 740); /*0x6fce59*/
      v6 = (int *)(a2 + 740); /*0x6fce5f*/
      if ( result ) /*0x6fce67*/
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2); /*0x6fce6d*/
        if ( result != 6 ) /*0x6fce73*/
        {
          if ( this->temporalUsing ) /*0x6fce75*/
            v3 = *v6; /*0x6fce7d*/
          v7 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 254))(this, 0); /*0x6fce8b*/
          if ( v7 ) /*0x6fce8f*/
          {
            v8 = *(_DWORD *)(v7 + 172); /*0x6fce91*/
            if ( v8 ) /*0x6fce99*/
            {
              if ( *(_BYTE *)(v8 + 347) ) /*0x6fce9b*/
                v3 = *v6; /*0x6fcea3*/
            }
          }
          result = (int)this->airstrike; /*0x6fcea6*/
          if ( result && *(TechnoClass **)(result + 76) == this ) /*0x6fceb3*/
            v3 = *v6; /*0x6fceb5*/
        }
      }
    }
    if ( (TechnoClass *)v3 == this ) /*0x6fceba*/
    {
      v11[0] = this->?[0]; /*0x6fcec8*/
      v11[1] = this->?[1]; /*0x6fced4*/
      v11[2] = this->?[2]; /*0x6fcedb*/
      result = (int)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v11); /*0x6fcee4*/
      v3 = result; /*0x6fcee9*/
      goto LABEL_39; /*0x6fceeb*/
    }
    if ( !v3 ) /*0x6fceef*/
      goto LABEL_39; /*0x6fceef*/
    LOBYTE(result) = *(_BYTE *)(v3 + 20); /*0x6fcef1*/
    if ( (result & 2) == 0 ) /*0x6fcef6*/
      goto LABEL_39; /*0x6fcef6*/
    if ( *(_BYTE *)(v3 + 144) && *(_DWORD *)(v3 + 108) ) /*0x6fcf00*/
    {
      LOBYTE(result) = (result & 4) != 0; /*0x6fcf08*/
      if ( !(_BYTE)result ) /*0x6fcf0e*/
        goto LABEL_39; /*0x6fcf0e*/
      v9 = (TechnoClass *)v3; /*0x6fcf16*/
      if ( *(_BYTE *)(v3 + 973) ) /*0x6fcf10*/
        v3 = 0; /*0x6fcf1c*/
      result = (*((int (__thiscall **)(TechnoClass *))v9->RadioClass + 11))(v9); /*0x6fcf23*/
      if ( result != 15 ) /*0x6fcf29*/
        goto LABEL_39; /*0x6fcf29*/
      result = TechnoClass::IsEnteringOrCapturingStructure(v9); /*0x6fcf2d*/
      if ( !(_BYTE)result ) /*0x6fcf34*/
        goto LABEL_39; /*0x6fcf34*/
    }
  }
LABEL_38:
  v3 = 0; /*0x6fcf36*/
LABEL_39:
  spawnManager = this->spawnManager; /*0x6fcf38*/
  this->target = (AbstractClass *)v3; /*0x6fcf3e*/
  if ( spawnManager && !v3 ) /*0x6fcf4b*/
    result = SpawnManagerClass::SetTarget(spawnManager, 0); /*0x6fcf4e*/
  if ( !this->target ) /*0x6fcf53*/
    this->currentBurstIndex = 0; /*0x6fcf5b*/
  if ( this->fireParticles ) /*0x6fcf61*/
  {
    result = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 235))(this, v3); /*0x6fcf6e*/
    if ( !(_BYTE)result ) /*0x6fcf76*/
    {
      result = (*((int (__thiscall **)(ParticleSystemClass *))this->fireParticles->ObjectClass + 62))(this->fireParticles); /*0x6fcf80*/
      this->fireParticles = 0; /*0x6fcf86*/
    }
  }
  return result; /*0x6fcf8c*/
}



// ==== 0x006FCFA0  TechnoClass::CalculateROF  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CalculateROF(TechnoClass *this)
{
  int v3; // edi
  TechnoClass *v4; // eax
  int currentBurstIndex; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // [esp+Ch] [ebp+4h]
  int v15; // [esp+Ch] [ebp+4h]

  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6 && this->ammo > 1 ) /*0x6fcfb5*/
    return 1; /*0x6fcfb8*/
  v3 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, v14); /*0x6fcfd0*/
  if ( !v3 ) /*0x6fcfd4*/
    return 1; /*0x6fcfd7*/
  if ( *(_BYTE *)(v3 + 304) /*0x6fd028*/
    || *(_BYTE *)(v3 + 298) && this->sparkParticles
    || *(_BYTE *)(v3 + 297) && this->fireParticles
    || *(_BYTE *)(v3 + 301) && this->railgunParticles )
  {
    return *(_DWORD *)(v3 + 176); /*0x6fd1fa*/
  }
  if ( this )
    v4 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 1 ? this : 0;
  else
    v4 = 0; /*0x6fd03a*/
  currentBurstIndex = this->currentBurstIndex; /*0x6fd04e*/
  if ( currentBurstIndex >= *(_DWORD *)(v3 + 156) ) /*0x6fd05c*/
  {
    v7 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x6fd0b0*/
    LOWORD(v8) = Math::RoundToInt((double)*(int *)(v3 + 176) * *(double *)&this->owner->__pad_13C[108] + (double)v7); /*0x6fd0cf*/
    v9 = v8; /*0x6fd0da*/
    v15 = v8; /*0x6fd0de*/
    if ( (unsigned __int8)Audio::IsMediumVolume(this->veterancy) || (unsigned __int8)Audio::IsLoud(this->veterancy) ) /*0x6fd0ed*/
    {
      if ( (v10 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this), /*0x6fd12c*/
            (unsigned __int8)Audio::IsMediumVolume(this->veterancy))
        && *(_BYTE *)(v10 + 672)
        || (unsigned __int8)Audio::IsLoud(this->veterancy) && (*(_BYTE *)(v10 + 672) || *(_BYTE *)(v10 + 690)) )
      {
        LOWORD(v11) = Math::RoundToInt((double)v15 * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1680)); /*0x6fd145*/
        v9 = v11; /*0x6fd14a*/
        v15 = v11; /*0x6fd14c*/
      }
    }
    if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 256))(this) ) /*0x6fd154*/
    {
      if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 258))(this) > 0 ) /*0x6fd16a*/
      {
        v9 /= (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 258))(this); /*0x6fd17d*/
        v15 = v9; /*0x6fd17f*/
      }
      if ( *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3908) > 0.0 ) /*0x6fd19a*/
      {
        LOWORD(v12) = Math::RoundToInt((double)v15 / *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3908)); /*0x6fd1a6*/
        v9 = v12; /*0x6fd1ab*/
        v15 = v12; /*0x6fd1ad*/
      }
    }
    if ( this->bunkerLinkedUnit /*0x6fd1de*/
      && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 6
      && *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3920) != 0.0 )
    {
      LOWORD(v13) = Math::RoundToInt((double)v15 / *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3920)); /*0x6fd1ea*/
      return v13; /*0x6fd1ef*/
    }
    return v9; /*0x6fd1f1*/
  }
  else
  {
    if ( currentBurstIndex <= 0 ) /*0x6fd060*/
      return Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 3, 5); /*0x6fd060*/
    if ( currentBurstIndex > 4 ) /*0x6fd065*/
      return Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 3, 5); /*0x6fd065*/
    if ( !v4 ) /*0x6fd069*/
      return Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 3, 5); /*0x6fd069*/
    v6 = *(_DWORD *)(v4[1].ironTintTimer[2] + 4 * currentBurstIndex + 3652); /*0x6fd071*/
    if ( v6 == -1 ) /*0x6fd07b*/
      return Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 3, 5); /*0x6fd094*/
    else
      return v6; /*0x6fd07e*/
  }
}



// ==== 0x006FD210  TechnoClass::CreateFireEffect  this=TechnoClass  sig=csp ====
char *__thiscall TechnoClass::CreateFireEffect(TechnoClass *this, _BYTE *a2, int a3, int a4, int *a5)
{
  char v6; // cl
  int *v7; // edi
  unsigned __int8 v8; // al
  unsigned __int8 v9; // cl
  int v10; // ecx
  int v11; // ecx
  int v12; // edx
  int *v13; // eax
  int v14; // edx
  int (__thiscall **vtable0)(TechnoClass *); // eax
  int *v16; // eax
  int (__thiscall **v17)(TechnoClass *, _DWORD *); // edx
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
  int v32; // [esp+4h] [ebp-4Ch]
  __int16 v33; // [esp+18h] [ebp-38h] BYREF
  char v34; // [esp+1Ah] [ebp-36h]
  int v35; // [esp+1Ch] [ebp-34h] BYREF
  __int16 *v36; // [esp+24h] [ebp-2Ch]
  int v37; // [esp+28h] [ebp-28h]
  int v38[3]; // [esp+2Ch] [ebp-24h] BYREF
  int v39; // [esp+38h] [ebp-18h] BYREF
  int v40; // [esp+3Ch] [ebp-14h]
  int v41; // [esp+40h] [ebp-10h]
  _DWORD v42[3]; // [esp+44h] [ebp-Ch] BYREF
  int *v43; // [esp+60h] [ebp+10h]

  v37 = *(char *)(a4 + 334); /*0x6fd224*/
  v6 = *(_BYTE *)(a4 + 333); /*0x6fd228*/
  v33 = 0; /*0x6fd230*/
  v34 = 0; /*0x6fd23a*/
  if ( v6 ) /*0x6fd23f*/
  {
    v7 = &this->owner->base[5]; /*0x6fd247*/
    v8 = BYTE1(this->owner->base[5]); /*0x6fd24f*/
    v9 = BYTE2(this->owner->base[5]); /*0x6fd252*/
    LOBYTE(v33) = *(_BYTE *)v7 >> 1; /*0x6fd257*/
    HIBYTE(v33) = v8 >> 1; /*0x6fd263*/
    v34 = v9 >> 1; /*0x6fd267*/
    v36 = &v33; /*0x6fd26b*/
  }
  else
  {
    v7 = (int *)(a4 + 288); /*0x6fd271*/
    v36 = (__int16 *)(a4 + 291); /*0x6fd27c*/
  }
  v10 = *a5; /*0x6fd28c*/
  v35 = 0; /*0x6fd28e*/
  if ( v10 == g_BuildingLoadQueue_Array.?[3] /*0x6fd2ae*/
    && a5[1] == g_BuildingLoadQueue_Array.?[4]
    && a5[2] == g_BuildingLoadQueue_Array.?[5] )
  {
    v13 = (int *)(*((int (__thiscall **)(TechnoClass *, int *, int, _DWORD, _DWORD, _DWORD))this->RadioClass + 44))( /*0x6fd2e9*/
                   this,
                   v38,
                   a3,
                   0,
                   0,
                   0);
    v39 = *v13; /*0x6fd2f1*/
    v40 = v13[1]; /*0x6fd2f8*/
    v14 = v13[2]; /*0x6fd2fe*/
    vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x6fd301*/
    v41 = v14; /*0x6fd303*/
    if ( vtable0[11](this) == 6 ) /*0x6fd30d*/
    {
      v16 = Coord::To_ScreenRaw(&v35, &v39); /*0x6fd31f*/
      v17 = (int (__thiscall **)(TechnoClass *, _DWORD *))this->RadioClass; /*0x6fd326*/
      v38[0] = *v16; /*0x6fd328*/
      v18 = v16[1]; /*0x6fd32e*/
      v19 = (_DWORD *)v17[43](this, v42); /*0x6fd336*/
      v20 = Coord::To_ScreenRaw(v38, v19); /*0x6fd348*/
      v35 = *v20; /*0x6fd34f*/
      v35 = v18 - v20[1]; /*0x6fd358*/
      if ( v35 > 0 ) /*0x6fd35c*/
        v35 = 0; /*0x6fd35e*/
    }
  }
  else
  {
    v11 = a5[1]; /*0x6fd2b2*/
    v39 = *a5; /*0x6fd2b5*/
    v12 = a5[2]; /*0x6fd2b9*/
    v40 = v11; /*0x6fd2bc*/
    v41 = v12; /*0x6fd2c0*/
  }
  if ( a2 && (a2[20] & 2) != 0 ) /*0x6fd372*/
    v21 = (int *)(*(int (__stdcall **)(_DWORD *))(*(_DWORD *)a2 + 164))(v42); /*0x6fd37b*/
  else
    v21 = (int *)(*(int (__stdcall **)(_DWORD *))(*(_DWORD *)a2 + 88))(v42); /*0x6fd38a*/
  v22 = *v21; /*0x6fd38d*/
  v32 = 92; /*0x6fd38f*/
  v23 = v21[1]; /*0x6fd391*/
  v24 = v21[2]; /*0x6fd394*/
  v43 = (int *)__2_YAPAXI_Z(0x5Cu); /*0x6fd39f*/
  if ( !v43 ) /*0x6fd3a5*/
    return 0; /*0x6fd453*/
  v32 = 0; /*0x6fd3af*/
  v31[4] = 1065353216; /*0x6fd3b1*/
  v31[3] = 1; /*0x6fd3b6*/
  v31[2] = 0; /*0x6fd3b8*/
  v31[1] = v37; /*0x6fd3ba*/
  v31[0] = v25; /*0x6fd3bf*/
  v26 = *(_BYTE *)(a4 + 296); /*0x6fd3c9*/
  LOWORD(v31[0]) = *(_WORD *)(a4 + 294); /*0x6fd3cf*/
  v30 = v31; /*0x6fd3d6*/
  BYTE2(v31[0]) = v26; /*0x6fd3d7*/
  v27 = *((_BYTE *)v36 + 2); /*0x6fd3dd*/
  LOWORD(v30) = *v36; /*0x6fd3e2*/
  v29 = &v30; /*0x6fd3e5*/
  BYTE2(v30) = v27; /*0x6fd3e6*/
  LOWORD(v29) = *(_WORD *)v7; /*0x6fd3f3*/
  BYTE2(v29) = *((_BYTE *)v7 + 2); /*0x6fd3f6*/
  result = TimerClass::Construct( /*0x6fd42b*/
             (char *)v43,
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
    if ( *(_BYTE *)(a4 + 333) ) /*0x6fd438*/
      result[32] = 1; /*0x6fd442*/
  }
  return result; /*0x6fd446*/
}



// ==== 0x006FD460  TechnoClass::CreateRadarBlip  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CreateRadarBlip(TechnoClass *this, _BYTE *a2, int a3, _DWORD *a4)
{
  int v5; // esi
  TechnoClass *v6; // eax
  int *v8; // eax
  int v9; // edx
  int v10; // esi
  int (__thiscall **vtable0)(TechnoClass *, _BYTE *); // eax
  _DWORD *v12; // eax
  int *v13; // eax
  int *v14; // eax
  int *v15; // ecx
  int v16; // eax
  int v17; // edi
  int v18; // ebp
  TechnoClass *v19; // [esp+10h] [ebp-20h]
  int v20; // [esp+14h] [ebp-1Ch] BYREF
  int v21; // [esp+1Ch] [ebp-14h] BYREF
  _BYTE v22[12]; // [esp+24h] [ebp-Ch] BYREF

  v5 = 0; /*0x6fd46b*/
  v6 = (TechnoClass *)__2_YAPAXI_Z(0x30u); /*0x6fd46d*/
  if ( !v6 ) /*0x6fd477*/
    return 0; /*0x6fd477*/
  v19 = (TechnoClass *)TechnoClass::ResetDamageAccumulator(v6); /*0x6fd482*/
  if ( !v19 ) /*0x6fd486*/
    return 0; /*0x6fd488*/
  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6 ) /*0x6fd4a2*/
  {
    v8 = Coord::To_ScreenRaw(&v20, a4); /*0x6fd4b0*/
    v9 = *v8; /*0x6fd4b5*/
    v10 = v8[1]; /*0x6fd4be*/
    vtable0 = (int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass; /*0x6fd4c1*/
    v21 = v9; /*0x6fd4c3*/
    v12 = (_DWORD *)vtable0[43](this, v22); /*0x6fd4c7*/
    v13 = Coord::To_ScreenRaw(&v21, v12); /*0x6fd4d9*/
    v20 = *v13; /*0x6fd4e0*/
    v5 = v10 - v13[1]; /*0x6fd4e4*/
    if ( v5 > 0 ) /*0x6fd4e9*/
      v5 = 0; /*0x6fd4eb*/
  }
  if ( a2 && (a2[20] & 2) != 0 ) /*0x6fd4f9*/
    v14 = (int *)(*(int (__stdcall **)(_BYTE *))(*(_DWORD *)a2 + 164))(v22); /*0x6fd502*/
  else
    v14 = (int *)(*(int (__stdcall **)(_BYTE *))(*(_DWORD *)a2 + 88))(v22); /*0x6fd511*/
  v15 = v14; /*0x6fd514*/
  v16 = *v14; /*0x6fd516*/
  v17 = v15[1]; /*0x6fd518*/
  v18 = v15[2]; /*0x6fd51b*/
  if ( a3 ) /*0x6fd524*/
    LOBYTE(v19->?) = *(_BYTE *)(a3 + 339); /*0x6fd530*/
  TechnoClass::CreateTrailParticle(v19, *a4, a4[1], a4[2], v16, v17, v18, v5); /*0x6fd55a*/
  return (int)v19; /*0x6fd48a*/
}



// ==== 0x006FD570  TechnoClass::CreateFiringRadarBlip  this=TechnoClass  sig=csp ====
TechnoClass *__thiscall TechnoClass::CreateFiringRadarBlip(TechnoClass *this, _BYTE *a2)
{
  int v3; // ebx
  int v4; // ebp
  _DWORD *v5; // eax
  TechnoClass *RadarBlip; // edi
  _DWORD v8[3]; // [esp+1Ch] [ebp-18h] BYREF
  _BYTE v9[12]; // [esp+28h] [ebp-Ch] BYREF

  v3 = (*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 185))(this, a2); /*0x6fd588*/
  v4 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, v3); /*0x6fd593*/
  v5 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *, int, _DWORD, _DWORD, _DWORD))this->RadioClass + 44))( /*0x6fd5ae*/
                   this,
                   v9,
                   v3,
                   0,
                   0,
                   0);
  v8[0] = *v5; /*0x6fd5b6*/
  v8[1] = v5[1]; /*0x6fd5c2*/
  v8[2] = v5[2]; /*0x6fd5cd*/
  RadarBlip = (TechnoClass *)TechnoClass::CreateRadarBlip(this, a2, v4, v8); /*0x6fd5d6*/
  if ( RadarBlip /*0x6fd5f2*/
    && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 1
    && this->?
    && !this->q1B7 )
  {
    this->q1B7 = RadarBlip; /*0x6fd600*/
    TechnoClass::updateSightRange(RadarBlip, this, v3); /*0x6fd606*/
  }
  return RadarBlip; /*0x6fd60d*/
}



// ==== 0x006FD620  TechnoClass::CreateFireBeamEffect  this=TechnoClass  sig=csp ====
char *__thiscall TechnoClass::CreateFireBeamEffect(TechnoClass *this, _BYTE *a2, int a3)
{
  int v4; // eax
  void *vtable0; // ebx
  TechnoClass *v6; // esi
  int *v7; // eax
  int (__thiscall **v8)(TechnoClass *, int *); // edx
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

  v4 = RadBeam::Create((RadBeam *)1); /*0x6fd62e*/
  vtable0 = this->RadioClass; /*0x6fd636*/
  v6 = (TechnoClass *)v4; /*0x6fd638*/
  v20 = 0; /*0x6fd650*/
  v7 = (int *)(*((int (__thiscall **)(TechnoClass *, int *, _DWORD, _DWORD, _DWORD, _DWORD))vtable0 + 44))( /*0x6fd657*/
                this,
                v21,
                0,
                0,
                0,
                0);
  v23 = *v7; /*0x6fd65f*/
  v24 = v7[1]; /*0x6fd668*/
  v8 = (int (__thiscall **)(TechnoClass *, int *))this->RadioClass; /*0x6fd66c*/
  v25 = v7[2]; /*0x6fd671*/
  v9 = (int *)v8[43](this, v21); /*0x6fd67a*/
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
  if ( a2 && (a2[20] & 2) != 0 ) /*0x6fd6ee*/
    v14 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)a2 + 164))(a2, v21); /*0x6fd707*/
  else
    v14 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)a2 + 88))(a2, v21); /*0x6fd6f9*/
  v22[0] = *v14; /*0x6fd713*/
  v22[1] = v14[1]; /*0x6fd71a*/
  v15 = v14[2]; /*0x6fd71e*/
  v18 = 0; /*0x6fd721*/
  v22[2] = v15; /*0x6fd726*/
  v19 = 0; /*0x6fd732*/
  if ( a3 == 1 ) /*0x6fd737*/
  {
    v16 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6246; /*0x6fd758*/
  }
  else if ( a3 == 2 ) /*0x6fd740*/
  {
    v16 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6249; /*0x6fd74a*/
  }
  else
  {
    v16 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6192; /*0x6fd742*/
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
    if ( a2 )
    {
      if ( (a2[20] & 1) != 0 )
      {
        v6->? = a2; /*0x6fd7d1*/
        *((a2[20] & 1) != 0 ? (_DWORD *)(a2 + 1296) : (_DWORD *)1296) = v6;
      }
    }
  }
  return (char *)v6; /*0x6fd7e7*/
}



// ==== 0x006FD800  ObjectClass::SpreadRadiationAreaEffect  this=ObjectClass  sig=csp ====
int __thiscall SpreadRadiationAreaEffect(ObjectClass *this, __int16 a2)
{
  int *v2; // eax
  int result; // eax
  int v4; // ecx
  CellClass *v5; // eax
  int *Coords; // eax
  int v7; // esi
  int v8; // eax
  char *v9; // esi
  int v10; // edi
  int v11; // ebx
  __int16 v12; // [esp+1Ch] [ebp-50h] BYREF
  char v13; // [esp+1Eh] [ebp-4Eh]
  int v14; // [esp+20h] [ebp-4Ch]
  int v15; // [esp+24h] [ebp-48h]
  int v16; // [esp+28h] [ebp-44h]
  int v17; // [esp+2Ch] [ebp-40h]
  __int16 v18[2]; // [esp+30h] [ebp-3Ch] BYREF
  int v19; // [esp+34h] [ebp-38h]
  __int16 v20; // [esp+38h] [ebp-34h]
  __int16 v21; // [esp+3Ah] [ebp-32h]
  __int16 v22; // [esp+40h] [ebp-2Ch]
  __int16 v23; // [esp+42h] [ebp-2Ah]
  int v24; // [esp+48h] [ebp-24h] BYREF
  int v25; // [esp+4Ch] [ebp-20h]
  int v26; // [esp+50h] [ebp-1Ch]
  int v27; // [esp+54h] [ebp-18h] BYREF
  int v28; // [esp+58h] [ebp-14h]
  int v29; // [esp+5Ch] [ebp-10h]
  int v30[3]; // [esp+60h] [ebp-Ch] BYREF

  v2 = (int *)(*((int (__thiscall **)(ObjectClass *, int *))this->AbstractClass + 18))(this, &v24); /*0x6fd813*/
  v17 = 0; /*0x6fd818*/
  v27 = *v2; /*0x6fd822*/
  v28 = v2[1]; /*0x6fd829*/
  v29 = v2[2]; /*0x6fd830*/
  v22 = v27 / 256; /*0x6fd840*/
  v23 = v28 / 256; /*0x6fd853*/
  v12 = *(_WORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6192); /*0x6fd865*/
  result = -1; /*0x6fd86d*/
  v13 = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6194); /*0x6fd870*/
  v15 = -1; /*0x6fd874*/
  do /*0x6fd9e6*/
  {
    v4 = -1; /*0x6fd878*/
    v14 = -1; /*0x6fd87b*/
    do /*0x6fd9d8*/
    {
      if ( result || v4 ) /*0x6fd885*/
      {
        v20 = a2 * result; /*0x6fd89a*/
        v21 = v4 * a2; /*0x6fd89f*/
        LOWORD(v16) = v22 + a2 * result; /*0x6fd8ae*/
        HIWORD(v16) = v4 * a2 + v23; /*0x6fd8bd*/
        *(_DWORD *)v18 = v16; /*0x6fd8ca*/
        v5 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v18); /*0x6fd8d5*/
        Coords = CellClass::GetCoords(v5, v30); /*0x6fd8dc*/
        v24 = *Coords; /*0x6fd8e8*/
        v25 = Coords[1]; /*0x6fd8f6*/
        v26 = Coords[2]; /*0x6fd8fd*/
        v7 = Random::Range(&Randomizer_Global, -128, 128); /*0x6fd912*/
        v8 = Random::Range(&Randomizer_Global, -128, 128); /*0x6fd914*/
        v24 += v7; /*0x6fd925*/
        v25 += v8; /*0x6fd92e*/
        v9 = (char *)RadBeam::Create((RadBeam *)2); /*0x6fd93b*/
        TechnoClass::drawSelectionBox(v9, (int)&v12); /*0x6fd940*/
        v10 = Random::Range(&Randomizer_Global, 5, 20); /*0x6fd95f*/
        v19 = Random::Range(&Randomizer_Global, 100, 500); /*0x6fd96f*/
        v11 = Random::Range(&Randomizer_Global, 0, 20); /*0x6fd97f*/
        TechnoClass::drawPipScale((TechnoClass *)v9, &v27); /*0x6fd981*/
        TechnoClass::drawSpawnPips((TechnoClass *)v9, &v24); /*0x6fd98d*/
        TechnoClass::drawAmmoPips((TechnoClass *)v9, v10); /*0x6fd995*/
        TechnoClass::drawTiberiumPips( /*0x6fd9a6*/
          (TechnoClass *)v9,
          COERCE_UNSIGNED_INT64((double)v19),
          HIDWORD(COERCE_UNSIGNED_INT64((double)v19)));
        SpreadRadiationAreaEffect_Helper((ObjectClass *)v9, 0, 0); /*0x6fd9b1*/
        SpreadRadiationAreaEffect_Helper_659530((ObjectClass *)v9, v11); /*0x6fd9b9*/
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
int *__userpurge TechnoClass::GetFiringAngle@<eax>(
        TechnoClass *this,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        int *a5,
        int a6,
        int a7)
{
  TechnoClass *v7; // ecx
  double v8; // st7
  TechnoClass *v9; // esi
  int v10; // eax
  __int16 v11; // cx
  int *TargetCoords; // eax
  int v13; // edi
  int v14; // ebx
  int v15; // ebp
  HouseClass *v16; // eax
  _DWORD *v17; // eax
  int v18; // edi
  int (__thiscall **vtable0)(TechnoClass *, int); // edx
  void *v20; // ebp
  int v21; // eax
  TechnoClass *v22; // edi
  int v23; // eax
  void *v24; // eax
  int v25; // ebx
  int WeaponRange; // edi
  char IsCloseEnoughToBuilding; // al
  int v29; // [esp+4h] [ebp-3Ch]
  double v30; // [esp+8h] [ebp-38h]
  void *v34; // [esp+24h] [ebp-1Ch] BYREF
  double FiringDistance; // [esp+28h] [ebp-18h]
  int v36; // [esp+34h] [ebp-Ch] BYREF
  int v37; // [esp+38h] [ebp-8h]
  int v38; // [esp+3Ch] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+40h] [ebp+0h]
  int currentWeaponSlot; // [esp+54h] [ebp+14h]

  v9 = v7; /*0x6fda04*/
  v10 = (*((int (**)(void))v7->RadioClass + 33))(); /*0x6fda08*/
  LOBYTE(v11) = 0; /*0x6fda0e*/
  HIBYTE(v11) = *(_BYTE *)(v10 + 976); /*0x6fda10*/
  LOWORD(v34) = v11; /*0x6fda1c*/
  if ( a5 ) /*0x6fda21*/
  {
    TargetCoords = TechnoClass::GetTargetCoords(v9, &v36); /*0x6fda31*/
    v13 = *TargetCoords; /*0x6fda36*/
    v14 = TargetCoords[1]; /*0x6fda3a*/
    v15 = TargetCoords[2]; /*0x6fda3d*/
    v16 = (HouseClass *)(*((int (__thiscall **)(TechnoClass *, int, int, int))v9->RadioClass + 33))(v9, a4, a3, a2); /*0x6fda42*/
    if ( (unsigned __int8)HouseClass::HasPower(v16) ) /*0x6fda4a*/
      currentWeaponSlot = v9->currentWeaponSlot; /*0x6fda59*/
    else
      currentWeaponSlot = 0; /*0x6fda5f*/
    v17 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, int *, int))v9->RadioClass + 192))( /*0x6fda75*/
                      v9,
                      &v36,
                      currentWeaponSlot);
    v18 = v13 - *v17; /*0x6fda82*/
    vtable0 = (int (__thiscall **)(TechnoClass *, int))v9->RadioClass; /*0x6fda84*/
    v38 = v14 - v17[1]; /*0x6fda86*/
    v20 = (void *)(v15 - v17[2]); /*0x6fda8f*/
    v37 = v18; /*0x6fda91*/
    retaddr = v20; /*0x6fda95*/
    v21 = vtable0[254](v9, a6); /*0x6fda9e*/
    v22 = *(TechnoClass **)v21; /*0x6fdaa4*/
    v23 = *(_DWORD *)(*(_DWORD *)v21 + 160); /*0x6fdab1*/
    FiringDistance = (double)*(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5816); /*0x6fdab9*/
    if ( v23 && *(_BYTE *)(v23 + 661) ) /*0x6fdabf*/
      FiringDistance = RulesClass::GetFiringDistance(); /*0x6fdace*/
    Math::Sqrt(pow((double)v36, 2.0) + pow((double)v37, 2.0)); /*0x6fdaf8*/
    LOWORD(v24) = Math::RoundToInt(v8); /*0x6fdb00*/
    v25 = (int)v24; /*0x6fdb05*/
    WeaponRange = TechnoClass::GetWeaponRange(v22, v24); /*0x6fdb17*/
    v30 = FiringDistance; /*0x6fdb23*/
    v29 = v38; /*0x6fdb24*/
    IsCloseEnoughToBuilding = TechnoClass::IsCloseEnoughToBuilding(v9, a6); /*0x6fdb29*/
    if ( (unsigned __int8)ComputeMathFacingAngle(IsCloseEnoughToBuilding, WeaponRange, v25, v29, v30, &v34) ) /*0x6fdb32*/
    {
      this->RadioClass = v34; /*0x6fdb5f*/
      return (int *)this; /*0x6fdb56*/
    }
    else
    {
      LOWORD(a5) = -8192; /*0x6fdb42*/
      this->RadioClass = a5; /*0x6fdb4e*/
      return (int *)this; /*0x6fdb3e*/
    }
  }
  else
  {
    this->RadioClass = v34; /*0x6fdb70*/
    return (int *)this; /*0x6fdb67*/
  }
}



// ==== 0x006FDB80  TechnoClass::ComputeAudioFalloffDamage  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ComputeAudioFalloffDamage(TechnoClass *this, int a2, int a3)
{
  int result; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  _DWORD *v9; // eax
  double DamageMultiplier; // st7
  int v11; // eax
  int v12; // ebx
  int v13; // ebp
  int v14; // eax
  int v15; // eax
  int v16; // [esp+14h] [ebp+4h]
  int v17; // [esp+14h] [ebp+4h]

  if ( !a2 ) /*0x6fdb8d*/
    return 0; /*0x6fdb8d*/
  result = *(_DWORD *)(a3 + 164); /*0x6fdb9d*/
  if ( *(_BYTE *)(a3 + 304) || *(_BYTE *)(a3 + 297) ) /*0x6fdbaf*/
    return 0; /*0x6fdd38*/
  if ( result > 0 ) /*0x6fdbbf*/
  {
    LOWORD(v6) = Math::RoundToInt( /*0x6fdbdd*/
                   *(double *)&this->owner->__pad_13C[76]
                 * *(double *)this->firepowerMultiplier
                 * (double)*(int *)(a3 + 164));
    v16 = v6; /*0x6fdbe8*/
    if ( (unsigned __int8)Audio::IsMediumVolume(this->veterancy) || (unsigned __int8)Audio::IsLoud(this->veterancy) ) /*0x6fdbf9*/
    {
      if ( (v7 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this), /*0x6fdc38*/
            (unsigned __int8)Audio::IsMediumVolume(this->veterancy))
        && *(_BYTE *)(v7 + 670)
        || (unsigned __int8)Audio::IsLoud(this->veterancy) && (*(_BYTE *)(v7 + 670) || *(_BYTE *)(v7 + 688)) )
      {
        LOWORD(v8) = Math::RoundToInt((double)v16 * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1648)); /*0x6fdc51*/
        v16 = v8; /*0x6fdc56*/
      }
    }
    v9 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6fdc66*/
    DamageMultiplier = TechnoClass::GetDamageMultiplier((TechnoClass *)*(_DWORD *)(a2 + 540), v9); /*0x6fdc73*/
    LOWORD(v11) = Math::RoundToInt((double)v16 / (DamageMultiplier * *(double *)this->armorMultiplier)); /*0x6fdc82*/
    v12 = v11; /*0x6fdc8d*/
    v17 = v11; /*0x6fdc91*/
    if ( (unsigned __int8)Audio::IsMediumVolume((int *)(a2 + 336)) || (unsigned __int8)Audio::IsLoud((int *)(a2 + 336)) ) /*0x6fdca0*/
    {
      if ( (v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2), /*0x6fdcdf*/
            (unsigned __int8)Audio::IsMediumVolume((int *)(a2 + 336)))
        && *(_BYTE *)(v13 + 669)
        || (unsigned __int8)Audio::IsLoud((int *)(a2 + 336)) && (*(_BYTE *)(v13 + 669) || *(_BYTE *)(v13 + 687)) )
      {
        LOWORD(v14) = Math::RoundToInt((double)v17 / *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1672)); /*0x6fdcf9*/
        v12 = v14; /*0x6fdcfe*/
      }
    }
    if ( v12 < 1 ) /*0x6fdd03*/
      v12 = 1; /*0x6fdd05*/
    v15 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 136))(a2); /*0x6fdd10*/
    return ComputeTechnoClassDamageFalloff(v12, *(_DWORD *)(a3 + 172), *(_DWORD *)(v15 + 156), 0); /*0x6fdd29*/
  }
  return result; /*0x6fdd30*/
}



// ==== 0x006FDD50  TechnoClass::FireWeapon  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::FireWeapon(TechnoClass *this)
{
  double FiringDistance; // st7
  int v3; // ebx
  _BYTE *v4; // eax
  int v5; // edx
  int v6; // eax
  void *vtable0; // edx
  _DWORD *v9; // eax
  int v10; // eax
  House *v11; // eax
  House *v12; // edi
  int *v13; // eax
  int *v14; // eax
  int v15; // edx
  int v16; // eax
  _DWORD *v17; // eax
  void *v18; // eax
  int *v19; // eax
  int *v20; // eax
  int v21; // eax
  int v22; // edi
  int v23; // eax
  TechnoClass *v24; // ebx
  char deployAnim; // al
  int v26; // edi
  int v28; // eax
  int v30; // eax
  int v32; // eax
  int v34; // eax
  int v36; // eax
  DiskLaserClass *v37; // eax
  DiskLaserClass *v38; // ebx
  int v39; // eax
  TechnoClass *v40; // ecx
  void *v41; // eax
  int WeaponRange; // eax
  int currentMission; // edx
  int v44; // ecx
  TechnoClass *UIObjectCOM; // eax
  TechnoClass *v46; // edi
  bool v47; // zf
  AbstractClass *target; // eax
  int v49; // edi
  int updated; // eax
  int *TargetC... [52811 chars total]


// ==== 0x006FF950  nullsub_45  this=-  sig=ida-proto ====
void __cdecl nullsub_45()
{
  ; /*0x6ff950*/
}



// ==== 0x006FF960  TechnoClass::DrawTargetLine  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::DrawTargetLine(TechnoClass *this)
{
  AbstractClass *target; // eax
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
  Rect v29; // [esp+8Ch] [ebp-10h] BYREF

  target = this->target; /*0x6ff96a*/
  if ( target )
  {
    v3 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, int *, _DWORD))this->RadioClass + 192))(this, v24, 0); /*0x6ff983*/
    v26[0] = *v3; /*0x6ff98b*/
    v26[1] = v3[1]; /*0x6ff992*/
    v26[2] = v3[2]; /*0x6ff9a0*/
    TargetCoords = TechnoClass::GetTargetCoords(this, v24); /*0x6ff9a4*/
    v25[0] = *TargetCoords; /*0x6ff9ab*/
    v25[1] = TargetCoords[1]; /*0x6ff9bd*/
    v25[2] = TargetCoords[2]; /*0x6ff9c9*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, v26, &v12); /*0x6ff9cd*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, v25, &v14); /*0x6ff9e2*/
    v13 += (int)DSurface_ViewBounds.field_4; /*0x6ff9fd*/
    v15 += (int)DSurface_ViewBounds.field_4; /*0x6ffa01*/
    v5 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1
       ? *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 8)
       : *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 16);
    v24[1] = v13 - 2; /*0x6ffa3a*/
    v24[0] = v12 - 2; /*0x6ffa48*/
    v6 = Rect::Construct(&v29, v24, 3, 3); /*0x6ffa4c*/
    v20 = *v6; /*0x6ffa55*/
    v21 = v6[1]; /*0x6ffa5e*/
    v22 = v6[2]; /*0x6ffa65*/
    v23 = v6[3]; /*0x6ffa74*/
    v7 = ClipRectIntersection(v28, &DSurface_ViewBounds.field_0, &v20, 0, 0); /*0x6ffa7e*/
    v16 = *v7; /*0x6ffa86*/
    v17 = v7[1]; /*0x6ffa8d*/
    v18 = v7[2]; /*0x6ffa94*/
    v19 = v7[3]; /*0x6ffaa1*/
    (*(void (__thiscall **)(AudioStream *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6ffaac*/
      g_DSurface_Hidden_2,
      &v16,
      v5);
    v8 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1
       ? *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 8)
       : *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 16);
    v18 = 3; /*0x6ffae7*/
    v17 = v15 - 2; /*0x6ffaf6*/
    v16 = v14 - 2; /*0x6ffb04*/
    v19 = 3; /*0x6ffb08*/
    v9 = ClipRectIntersection(v28, &DSurface_ViewBounds.field_0, &v16, 0, 0); /*0x6ffb0c*/
    v20 = *v9; /*0x6ffb14*/
    v21 = v9[1]; /*0x6ffb1b*/
    v22 = v9[2]; /*0x6ffb22*/
    v23 = v9[3]; /*0x6ffb2f*/
    (*(void (__thiscall **)(AudioStream *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6ffb3a*/
      g_DSurface_Hidden_2,
      &v20,
      v8);
    v27[1] = (int)DSurface_ViewBounds.field_4; /*0x6ffb4e*/
    v27[0] = DSurface_ViewBounds.field_0; /*0x6ffb56*/
    v27[2] = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x6ffb5f*/
    v27[3] = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x6ffb6c*/
    LOBYTE(target) = ClipLine(&v12, &v14, v27); /*0x6ffb70*/
    if ( (_BYTE)target ) /*0x6ffb77*/
    {
      if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x6ffb82*/
        v10 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 8); /*0x6ffb8c*/
      else
        v10 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 16); /*0x6ffb99*/
      LOBYTE(target) = (*(char (__stdcall **)(int *, int *, int, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 /*0x6ffbd2*/
                                                                            + 72))(
                         &v12,
                         &v14,
                         v10,
                         &g_INI_Key_TRUCKA.?[4],
                         7 * *(_DWORD *)&stru_A8EB00.?[416] % 16);
    }
  }
  return (char)target; /*0x6ffbd5*/
}



// ==== 0x006FFBE0  TechnoClass::ExecuteMissionCmd  this=TechnoClass  sig=csp ====
int __thiscall ScriptAction::ExecuteMissionCmd(TechnoClass *this)
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
  _DWORD *v18; // [esp+A0h] [ebp+8h]
  _DWORD *v19; // [esp+A4h] [ebp+Ch]
  _DWORD *v20; // [esp+A8h] [ebp+10h]

  v2 = Render_Draw_731BF0() && (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 304))(this); /*0x6ffc03*/
  v3 = v17; /*0x6ffc09*/
  if ( (v17 == 2 || v17 == 1) && v2 ) /*0x6ffc1c*/
    v3 = 29; /*0x6ffc1e*/
  if ( (unsigned __int8)FactoryClass::GetFlag() ) /*0x6ffc23*/
  {
    ScriptAction::GetWaypointCoords((ScriptAction *)&v9[26], v20); /*0x6ffc3d*/
    ScriptAction::GetWaypointCoords((ScriptAction *)&v9[24], v19); /*0x6ffc4f*/
    ScriptAction::GetWaypointCoords((ScriptAction *)&v9[22], v18); /*0x6ffc61*/
    WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v12, this); /*0x6ffc6c*/
    ScriptAction::InitActionFields( /*0x6ffc8e*/
      v14,
      (int)dword_A83D4C->Object_field_0x30,
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
          (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 215))(this); /*0x6ffcda*/
          break;
        case 1: /*0x6ffcd4*/
          (*((void (__thiscall **)(TechnoClass *, _DWORD *))this->RadioClass + 220))(this, v18); /*0x6ffcef*/
          break;
        case 2: /*0x6ffcd4*/
        case 29: /*0x6ffcd4*/
          (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 218))(this); /*0x6ffd9f*/
          break;
        case 7: /*0x6ffcd4*/
          (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 214))(this); /*0x6ffd15*/
          break;
        case 8: /*0x6ffcd4*/
          (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 217))(this); /*0x6ffd29*/
          break;
        case 16: /*0x6ffcd4*/
          (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 219))(this); /*0x6ffd3a*/
          break;
        default:
          if ( *(int *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1200) > 0 ) /*0x6ffd59*/
          {
            v6 = Random::State(&Randomizer_Global); /*0x6ffd65*/
            v7 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6ffd6b*/
            v11[0] = this->RadioClass; /*0x6ffd7b*/
            (*(void (__thiscall **)(TechnoClass *, _DWORD))(v11[0] + 852))( /*0x6ffd93*/
              this,
              *(_DWORD *)(*(_DWORD *)(v7 + 1188) + 4 * (v6 % *(_DWORD *)(v7 + 1200))));
          }
          break;
      }
    }
    ScriptAction::GetWaypointCoords((ScriptAction *)v11, v19); /*0x6ffdb1*/
    ScriptAction::GetWaypointCoords((ScriptAction *)v12, v18); /*0x6ffdbb*/
    v8 = ScriptAction::GetWaypointCoords((ScriptAction *)v13, this); /*0x6ffdce*/
    Object_Init(v3, (int)v12, *(_DWORD *)v8, v8[4], (int)v11); /*0x6ffde6*/
    LOBYTE(result) = 1; /*0x6ffdee*/
  }
  return result; /*0x6ffcb0*/
}



// ==== 0x006FFE00  TechnoClass::RecordEvent  this=TechnoClass  sig=csp ====
int __thiscall NetworkClass::RecordEvent(TechnoClass *this)
{
  _BYTE *WaypointCoords; // eax
  int result; // eax
  char *v3; // edi
  _BYTE v4[8]; // [esp+8h] [ebp-78h] BYREF
  char v5[108]; // [esp+10h] [ebp-70h] BYREF
  __int16 v6; // [esp+7Ch] [ebp-4h]
  char v7; // [esp+7Eh] [ebp-2h]
  unsigned __int8 v8; // [esp+84h] [ebp+4h]

  WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v4, this); /*0x6ffe0a*/
  EventClass::Add(v5, (int)dword_A83D4C->Object_field_0x30, v8, *(_DWORD *)WaypointCoords, WaypointCoords[4]); /*0x6ffe34*/
  result = FactoryClass::GetFlag(); /*0x6ffe39*/
  if ( (_BYTE)result ) /*0x6ffe40*/
  {
    result = NetworkClass::ExecutePlanningModeCmd(v5); /*0x6ffe46*/
    LOBYTE(result) = 0; /*0x6ffe4b*/
  }
  else
  {
    if ( (int)stru_A80220.lineTrailer < 128 ) /*0x6ffe5f*/
    {
      v3 = (char *)&byte_A802D4 + 111 * dword_A802D0; /*0x6ffe75*/
      qmemcpy(v3, v5, 0x6Cu); /*0x6ffe7c*/
      v3 += 108; /*0x6ffe7c*/
      *(_WORD *)v3 = v6; /*0x6ffe7e*/
      v3[2] = v7; /*0x6ffe80*/
      dword_A83A54[dword_A802D0] = timeGetTime(); /*0x6ffe8d*/
      dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x6ffe9d*/
      result = (int)++stru_A80220.lineTrailer; /*0x6ffea7*/
    }
    LOBYTE(result) = 1; /*0x6ffeae*/
  }
  return result; /*0x6ffe4d*/
}



// ==== 0x006FFEC0  TechnoClass::HandleCursorClick  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::HandleCursorClick(TechnoClass *this, _BYTE *a2, char a3)
{
  int v5; // ebx
  int v7; // eax
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
  char v25; // [esp+24h] [ebp+4h]
  char v26; // [esp+24h] [ebp+4h]
  char v27; // [esp+24h] [ebp+4h]
  char v28; // [esp+28h] [ebp+8h]

  if ( this->isBerserk /*0x6ffefd*/
    || this->rockerLinkedUnit
    && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1682)
    || !a2 )
  {
    return 0; /*0x6ffefd*/
  }
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 117))(this) ) /*0x6fff07*/
  {
    if ( !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 171))(this) /*0x6fff40*/
      || !(unsigned __int8)House::IsHumanPlayer((House *)this->owner)
      || (v5 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 56))(a2),
          v5 == (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 14))(this)) )
    {
      if ( (!this->isALoaner || !this->isOwnedByCurrentPlayer) /*0x6fff70*/
        && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 312))(a2)
        && !a2[131] )
      {
        return 7; /*0x6fff8a*/
      }
    }
    return 0; /*0x6fff78*/
  }
  if ( a2 == (_BYTE *)this && *(_DWORD *)&stru_A8EB00.?[228] == 1 ) /*0x6fff9c*/
  {
    v7 = *((_DWORD *)a2 + 14); /*0x6fff9e*/
    if ( v7 ) /*0x6fffa3*/
    {
      if ( (unsigned __int8)House::IsHumanPlayer(*(House **)(v7 + 40)) ) /*0x6fffa8*/
      {
        if ( BombClass::IsDeathBomb(*((BombClass **)a2 + 14)) == 1 /*0x6fffc2*/
          && *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4053) )
        {
          return 55; /*0x6fffd8*/
        }
        if ( !BombClass::IsDeathBomb(*((BombClass **)a2 + 14)) /*0x6fffed*/
          && *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4052) )
        {
          return 55; /*0x700003*/
        }
      }
    }
  }
  if ( !a3 /*0x70002f*/
    && ((unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[20])
     || (unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[24])) )
  {
    v25 = 1; /*0x700038*/
  }
  else
  {
    v25 = 0; /*0x700041*/
    if ( a3 ) /*0x700046*/
      goto LABEL_32; /*0x700046*/
  }
  if ( (unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[28]) /*0x700069*/
    || (unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[32]) )
  {
    v28 = 1; /*0x700072*/
LABEL_33:
    if ( (unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[36]) /*0x7000a3*/
      || (unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[40]) )
    {
      if ( v28 ) /*0x7000b2*/
      {
        v28 = 0; /*0x7000b4*/
      }
      else if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) && !this->isALoaner ) /*0x7000fa*/
      {
        return 8; /*0x700110*/
      }
    }
    goto LABEL_37; /*0x7000b4*/
  }
LABEL_32:
  v28 = 0; /*0x700079*/
  if ( !a3 ) /*0x700080*/
    goto LABEL_33; /*0x700080*/
LABEL_37:
  if ( a2 == (_BYTE *)this && *(_DWORD *)&stru_A8EB00.?[228] == 1 ) /*0x7000c7*/
  {
    if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) ) /*0x7000d3*/
      return 4; /*0x7000e8*/
    if ( *(_DWORD *)&stru_A8EB00.?[228] == 1 && this->owner->playerControl && !*(_DWORD *)&dword_A8B238 && this ) /*0x700136*/
    {
      if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 1 /*0x70015b*/
        && *(int *)(*((_DWORD *)this + 433) + 1504) > 0
        && this->passengers[0] > 0 )
      {
        return 4; /*0x700169*/
      }
      if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 2 && *((_BYTE *)this + 1737) ) /*0x700178*/
        return 4; /*0x70018e*/
    }
  }
  if ( !(unsigned __int8)House::IsHumanPlayer((House *)this->owner) /*0x7001c2*/
    || !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)a2)
    || (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 2
    || !v28 )
  {
    goto LABEL_62; /*0x7001c2*/
  }
  if ( v25 ) /*0x7001ca*/
  {
    if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 40))(this) ) /*0x7001d0*/
      return 26; /*0x7001e6*/
LABEL_62:
    if ( v25 /*0x700204*/
      && (unsigned __int8)House::IsHumanPlayer((House *)this->owner)
      && (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 40))(this) )
    {
      return 1; /*0x700217*/
    }
  }
  v24 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70021a*/
  v23 = (*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 185))(this, a2); /*0x700237*/
  if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 124))(a2) ) /*0x700240*/
    goto LABEL_141; /*0x700240*/
  v9 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, v23); /*0x70025b*/
  if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3436) ) /*0x70025d*/
    goto LABEL_76; /*0x700265*/
  if ( (a2[20] & 1) != 0 ) /*0x70026b*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 132))(a2) + 3376) ) /*0x700277*/
      goto LABEL_76; /*0x70027f*/
    if ( (a2[20] & 1) != 0 ) /*0x700285*/
    {
      v10 = *((_DWORD *)a2 + 123); /*0x700287*/
      v11 = *((_DWORD *)a2 + 125); /*0x70028d*/
      if ( v10 == -1 ) /*0x700296*/
        goto LABEL_74; /*0x700296*/
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v10 < v11 ) /*0x7002a2*/
      {
        v11 -= *(_DWORD *)&stru_A8EB00.?[416] - v10; /*0x7002a4*/
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
  if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *, HouseClass *))(*(_DWORD *)a2 + 200))(a2, this->owner) || v12 ) /*0x7002c7*/
  {
    v26 = 0; /*0x7002e2*/
    goto LABEL_82; /*0x7002e2*/
  }
  v26 = 1; /*0x7002cf*/
  if ( (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)a2 + 208))(a2, 1) ) /*0x7002d4*/
  {
LABEL_82:
    v13 = 0; /*0x7002e7*/
    goto LABEL_83; /*0x7002e7*/
  }
  v13 = 1; /*0x7002de*/
LABEL_83:
  v14 = (*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 230))(this, a2); /*0x7002e9*/
  v22 = v14; /*0x7002f8*/
  v21 = !v26 || v13 && v14; /*0x70030f*/
  if ( !v9 /*0x70034d*/
    || !*(_BYTE *)(*(_DWORD *)(v9 + 172) + 343)
    || !(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 132))(a2)
    || (v19 = 1, *(int *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 132))(a2) + 1504) <= 0) )
  {
    v19 = 0; /*0x70034f*/
  }
  v15 = v9 && *(_BYTE *)(*(_DWORD *)(v9 + 172) + 331) && (a2[20] & 4) != 0 && *((_DWORD *)a2 + 421); /*0x700381*/
  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1728) /*0x7003b9*/
    || *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1729) && !v19
    || v15 )
  {
    v15 = 1; /*0x7003bb*/
  }
  if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)a2) || (v20 = 0, v15) ) /*0x7003d4*/
    v20 = 1; /*0x7003d6*/
  v16 = v26 && v15; /*0x7003e7*/
  if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) /*0x70043e*/
    && (v28
     || v20 && (v21 || v16) && (*(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 136))(a2) + 561) || v22)) )
  {
    v17 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 15 && *(_BYTE *)(v24 + 3774); /*0x70044e*/
    if ( ((*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 171))(this) || v17) /*0x700492*/
      && ((*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 40))(this)
       || (*((unsigned __int8 (__thiscall **)(TechnoClass *, _BYTE *, int))this->RadioClass + 234))(this, a2, v23)) )
    {
      v27 = 0; /*0x7004a2*/
      if ( v17 /*0x700527*/
        && (!*(_BYTE *)(this->airstrikeTimer + 3780)
         && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 44))(a2) == 6
         && *(_BYTE *)(*((_DWORD *)a2 + 328) + 5490)
         || *(_BYTE *)(this->airstrikeTimer + 3780)
         && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 44))(a2) == 6
         && *(_BYTE *)(*((_DWORD *)a2 + 328) + 5494)
         || *(_BYTE *)(this->airstrikeTimer + 3778)
         && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 44))(a2) == 6
         && *(_BYTE *)(*((_DWORD *)a2 + 328) + 5495)) )
      {
        v27 = 1; /*0x700531*/
      }
      if ( (*((int (__thiscall **)(TechnoClass *, _BYTE *, int, int))this->RadioClass + 240))(this, a2, v23, 1) != 5 /*0x70055b*/
        || v27
        || v28 )
      {
        return 5; /*0x700569*/
      }
    }
  }
LABEL_141:
  if ( !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 171))(this) /*0x70059b*/
    || !(unsigned __int8)House::IsHumanPlayer((House *)this->owner)
    || (v18 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 56))(a2),
        v18 == (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 14))(this)) )
  {
    if ( (!this->isALoaner || !this->isOwnedByCurrentPlayer) /*0x7005cd*/
      && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 312))(a2)
      && !a2[131]
      && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 468))(a2) )
    {
      return 7; /*0x7005e3*/
    }
  }
  return 0; /*0x6fff7e*/
}



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
      if ( (int)dword_A8ED84 - v21 >= v22 ) /*0x6f033f*/
      {
        v28 = 0; /*0x6f0381*/
        goto LABEL_28; /*0x6f0389*/
      }
      v22 -= (int)dword_A8ED84 - v21; /*0x6f0341*/
    }
    v28 = v22; /*0x6f0343*/
LABEL_28:
    DefaultTimer = Super::GetDefaultTimer((_DWORD *)v7); /*0x6f0347*/
    if ( *(_BYTE *)(v7 + 109) && 1.0 - *(float *)&dword_8871E0->? >= (double)v28 / (double)DefaultTimer ) /*0x6f037d*/
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
int __thiscall FootClass::GetGameSpeedFromSession(FootClass *this)
{
  int v1; // eax
  int v3; // [esp+0h] [ebp-8h] BYREF

  v1 = *SessionClass::GetEntry((SessionClass *)this->?, &v3); /*0x6f03c0*/
  if ( v1 == 54 || v1 == 53 ) /*0x6f03ca*/
    return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5920); /*0x6f03e2*/
  else
    return *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5916); /*0x6f03d2*/
}



// ==== 0x006F03F0  ObjectClass::method_6F03F0  this=ObjectClass  sig=csp ====
char __thiscall sub_6F03F0(ObjectClass *this)
{
  int *v1; // esi

  v1 = (int *)this->customSound_controller[1]; /*0x6f03f2*/
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
int TeamClass::StubReturn160(TeamClass *this)
{
  return 160; /*0x6f0435*/
}



// ==== 0x006F0440  TeamClass::StubReturn34  this=TeamClass  sig=csp ====
int TeamClass::StubReturn34(TeamClass *this)
{
  return 34; /*0x6f0445*/
}



// ==== 0x006F0450  TeamClass::ProcessEvent  this=TeamClass  sig=csp ====
void **__thiscall TeamClass::ProcessEvent(TeamClass *this, char a2)
{
  TeamClass::Destructor(this); /*0x6f0453*/
  if ( (a2 & 1) != 0 ) /*0x6f045d*/
    __3_YAXPAX_Z(this); /*0x6f0460*/
  return &this->AbstractClass; /*0x6f046a*/
}



// ==== 0x006F0470  sub_6F0470  this=-  sig=ida-proto ====
void sub_6F0470()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6f047c*/
  dbl_B0E9D0 = Math::Sqrt(v0 + v0); /*0x6f048e*/
}



// ==== 0x006F04A0  sub_6F04A0  this=-  sig=ida-proto ====
void sub_6F04A0()
{
  dbl_B0EA20 = dbl_B0E9D0 / 60.0; /*0x6f04ac*/
}



// ==== 0x006F04C0  sub_6F04C0  this=-  sig=ida-proto ====
void sub_6F04C0()
{
  dbl_B0EA08 = 1.0 / dbl_B0EA20; /*0x6f04cc*/
}



// ==== 0x006F04E0  sub_6F04E0  this=-  sig=ida-proto ====
void sub_6F04E0()
{
  dbl_B0EA00 = 0.0174532925199433 * 45.0; /*0x6f04ec*/
}



// ==== 0x006F0500  sub_6F0500  this=-  sig=ida-proto ====
void sub_6F0500()
{
  dbl_B0E9D8 = 0.0174532925199433 * 60.0; /*0x6f050c*/
}



// ==== 0x006F0520  sub_6F0520  this=-  sig=ida-proto ====
void sub_6F0520()
{
  dbl_B0E9B0 = 0.0174532925199433 * 90.0; /*0x6f052c*/
}



// ==== 0x006F0540  sub_6F0540  this=-  sig=ida-proto ====
__int64 sub_6F0540()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0E9B0 - dbl_B0E9D8); /*0x6f0552*/
  result = Math::RoundToInt(v0 * dbl_B0E9D0 * 0.5); /*0x6f0566*/
  dword_B0EA28 = result; /*0x6f056b*/
  return result; /*0x6f0570*/
}



// ==== 0x006F0580  sub_6F0580  this=-  sig=ida-proto ====
void sub_6F0580()
{
  dbl_B0E9E0 = Math::ArcTan((double)dword_B0EA28 * 0.00390625); /*0x6f0597*/
}



// ==== 0x006F05B0  sub_6F05B0  this=-  sig=ida-proto ====
void sub_6F05B0()
{
  dbl_B0E9F8 = Math::ArcTan((double)(2 * dword_B0EA28) / dbl_B0E9D0); /*0x6f05d2*/
}



// ==== 0x006F05E0  sub_6F05E0  this=-  sig=ida-proto ====
__int64 sub_6F05E0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0EA28) + 0.5); /*0x6f05fb*/
  dword_B0EA1C = result; /*0x6f0600*/
  return result; /*0x6f0606*/
}



// ==== 0x006F0610  sub_6F0610  this=-  sig=ida-proto ====
int sub_6F0610()
{
  dword_B0E9C8 = 0; /*0x6f0612*/
  return 0; /*0x6f061e*/
}



// ==== 0x006F0620  sub_6F0620  this=-  sig=ida-proto ====
int sub_6F0620()
{
  dword_B0E9E8 = 0; /*0x6f0622*/
  dword_B0E9EC = 0; /*0x6f0627*/
  dword_B0E9F0 = 0; /*0x6f062c*/
  return 0; /*0x6f0631*/
}



// ==== 0x006F0640  sub_6F0640  this=-  sig=ida-proto ====
int sub_6F0640()
{
  dword_B0EA18 = 0; /*0x6f0645*/
  dword_B0EA10 = 128; /*0x6f064f*/
  dword_B0EA14 = 128; /*0x6f0654*/
  return 128; /*0x6f0659*/
}



// ==== 0x006F0660  sub_6F0660  this=-  sig=ida-proto ====
int sub_6F0660()
{
  dword_B0E9B8 = 0; /*0x6f0662*/
  dword_B0E9BC = 0; /*0x6f0667*/
  dword_B0E9C0 = 0; /*0x6f066c*/
  dword_B0E9C4 = 0; /*0x6f0671*/
  return 0; /*0x6f0676*/
}



// ==== 0x006F06E0  TeamTypeClass::LoadBase  this=TeamTypeClass  sig=csp ====
_DWORD *__thiscall TechnoTypeClass::LoadBase(TeamTypeClass *this, char *Source)
{
  int v3; // ecx
  char v4; // al
  int v5; // eax
  TeamTypeClass **v6; // edx
  int v7; // eax

  AbstractTypeClass::Constructor((int *)this, Source); /*0x6f06ea*/
  *((_DWORD *)this + 38) = -1; /*0x6f06f7*/
  *((_DWORD *)this + 39) = -1; /*0x6f06ff*/
  this->TeamTypeClass_field_28 = 1; /*0x6f0705*/
  this->pad_29 = 0; /*0x6f070b*/
  *((_DWORD *)this + 42) = 0; /*0x6f0723*/
  this->q02B = 0; /*0x6f073b*/
  this->TeamTypeClass_field_2C = 0; /*0x6f0753*/
  *((_DWORD *)this + 45) = 7; /*0x6f076b*/
  *((_DWORD *)this + 46) = -1; /*0x6f0775*/
  this->q02F = 0; /*0x6f077b*/
  this->TeamTypeClass_field_30 = 0; /*0x6f0781*/
  this->q031 = 0; /*0x6f0787*/
  *((_DWORD *)this + 50) = -1; /*0x6f078d*/
  this->alignmentPadding = 0; /*0x6f0793*/
  this->TeamTypeClass_field_34 = 0; /*0x6f0799*/
  *((_DWORD *)this + 53) = -1; /*0x6f079f*/
  *((_DWORD *)this + 54) = -1; /*0x6f07a5*/
  *((_DWORD *)this + 55) = 0; /*0x6f07ab*/
  this->TeamTypeClass_field_38 = 0; /*0x6f07b1*/
  *((_DWORD *)this + 57) = 0; /*0x6f07b7*/
  this->q03A = 0; /*0x6f07bd*/
  this->q03B = 9; /*0x6f07c3*/
  this->TeamTypeClass_field_3C = 1; /*0x6f07cd*/
  *((_BYTE *)this + 241) = 0; /*0x6f07d3*/
  *((_BYTE *)this + 242) = 0; /*0x6f07d9*/
  *((_BYTE *)this + 243) = 0; /*0x6f07df*/
  this->UINameLabel = 0; /*0x6f07e5*/
  *((_BYTE *)this + 245) = 1; /*0x6f07eb*/
  *((_BYTE *)this + 246) = 0; /*0x6f07f1*/
  *((_BYTE *)this + 247) = 0; /*0x6f07f7*/
  this->AbstractClass = &TeamTypeClass::`vftable'; /*0x6f07fd*/
  this->? = &TeamTypeClass::`vftable'; /*0x6f0803*/
  this->? = &TeamTypeClass::`vftable'; /*0x6f080a*/
  this->? = &TeamTypeClass::`vftable'; /*0x6f0811*/
  v3 = *(_DWORD *)&stru_A8EB00.?[204]; /*0x6f0818*/
  if ( *(int *)&stru_A8EB00.?[204] < *(int *)&stru_A8EB00.?[196] /*0x6f0857*/
    || (stru_A8EB00.?[201] || !*(_DWORD *)&stru_A8EB00.?[196])
    && *(int *)&stru_A8EB00.?[208] > 0
    && (v4 = (*(int (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&stru_A8EB00.?[188] + 8))(
               &stru_A8EB00.?[188],
               *(_DWORD *)&stru_A8EB00.?[196] + *(_DWORD *)&stru_A8EB00.?[208],
               0),
        v3 = *(_DWORD *)&stru_A8EB00.?[204],
        v4) )
  {
    *(_DWORD *)&stru_A8EB00.?[204] = v3 + 1; /*0x6f085c*/
    *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v3) = this; /*0x6f0868*/
    v3 = *(_DWORD *)&stru_A8EB00.?[204]; /*0x6f086b*/
  }
  v5 = 0; /*0x6f0871*/
  if ( v3 <= 0 ) /*0x6f0875*/
  {
LABEL_11:
    v5 = -1; /*0x6f0889*/
  }
  else
  {
    v6 = *(TeamTypeClass ***)&stru_A8EB00.?[192]; /*0x6f0877*/
    while ( *v6 != this ) /*0x6f087f*/
    {
      ++v5; /*0x6f0881*/
      ++v6; /*0x6f0882*/
      if ( v5 >= v3 ) /*0x6f0887*/
        goto LABEL_11; /*0x6f0887*/
    }
  }
  *((_DWORD *)this + 38) = v5; /*0x6f088b*/
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x6f08c5*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v7 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x6f08d2*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7) = this; /*0x6f08e1*/
  }
  return &this->AbstractClass; /*0x6f08e6*/
}



// ==== 0x006F09C0  TeamClass::CreateOneOf  this=TeamTypeClass  sig=csp ====
int __thiscall TeamClass::CreateOneOf(int this, TeamClass *a2)
{
  TeamClass *OwnerHouse; // edi
  int v4; // eax
  int v6; // eax

  Debug::Log(); /*0x6f09c9*/
  OwnerHouse = a2; /*0x6f09ce*/
  if ( !a2 ) /*0x6f09d7*/
  {
    OwnerHouse = *(TeamClass **)(this + 196); /*0x6f09d9*/
    if ( !OwnerHouse ) /*0x6f09e1*/
    {
      if ( !(unsigned __int8)BuildingType::IsSpecialType(*(void **)(this + 200)) ) /*0x6f09e9*/
        return 0; /*0x6f09e9*/
      OwnerHouse = (TeamClass *)BuildingType::FindOwnerHouse(*(void **)(this + 200)); /*0x6f09fd*/
      if ( !OwnerHouse ) /*0x6f0a01*/
        return 0; /*0x6f0a01*/
    }
  }
  if ( !dword_A8E7AC ) /*0x6f0a0a*/
  {
    v4 = *(_DWORD *)(this + 184); /*0x6f0a0c*/
    if ( v4 >= 0 ) /*0x6f0a14*/
    {
      if ( *(_DWORD *)&dword_A8B238 ) /*0x6f0a1e*/
      {
        if ( TeamClass::CountActiveTeamsForType(OwnerHouse, this) >= *(_DWORD *)(this + 184) ) /*0x6f0a3d*/
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
  return MissionClass::Construct(v6, this, (int)OwnerHouse, 0); /*0x6f0a28*/
}



// ==== 0x006F0A70  TeamTypeClass::DestroyAllInstances  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::DestroyAllInstances(TeamTypeClass *this)
{
  int result; // eax
  int i; // esi
  TeamTypeClass **v4; // ecx

  result = (int)FootClass_Array.?; /*0x6f0a70*/
  for ( i = 0; i < (int)FootClass_Array.?; ++i ) /*0x6f0a7d*/
  {
    v4 = (TeamTypeClass **)*((_DWORD *)&FootClass_Array.?->ObjectClass + i); /*0x6f0a84*/
    if ( this == v4[9] ) /*0x6f0a8a*/
    {
      if ( v4 ) /*0x6f0a8e*/
        ((void (__thiscall *)(TeamTypeClass **, int))(*v4)->?)(v4, 1); /*0x6f0a94*/
      --i; /*0x6f0a97*/
    }
    result = (int)FootClass_Array.?; /*0x6f0a98*/
  }
  return result; /*0x6f0aa2*/
}



// ==== 0x006F0AB0  AISelectTeamHouseClass  this=-  sig=csp ====
int __fastcall HouseClass_AI_SelectTeam(void ***a1, int a2, int a3)
{
  int v3; // esi
  int v5; // eax
  int v6; // ebx
  char *v7; // ecx
  int v8; // edx
  int v9; // ecx
  int WallPenetratorThreshold_high; // edx
  int *v11; // ecx
  int v12; // esi
  char *v13; // edi
  int v14; // ebp
  _DWORD *v15; // eax
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
  _DWORD *v31; // ebx
  int v32; // esi
  char *v33; // edi
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  _DWORD *v37; // eax
  int i; // eax
  int v39; // ecx
  int v40; // esi
  bool v41; // zf
  int v42; // eax
  void *v43; // eax
  int v44; // ecx
  int v45; // eax
  void ***v46; // ecx
  void *v47; // eax
  int v48; // edx
  int v50; // ecx
  char v51; // [esp+13h] [ebp-4Dh]
  _DWORD v53[2]; // [esp+18h] [ebp-48h] BYREF
  int v54; // [esp+20h] [ebp-40h]
  void ***v55; // [esp+24h] [ebp-3Ch]
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
  int v67; // [esp+5Ch] [ebp-4h]

  v3 = 0; /*0x6f0ab6*/
  v55 = a1; /*0x6f0ab9*/
  Team_Helper_6F2230(0, 0); /*0x6f0ac9*/
  v5 = *(_DWORD *)(a2 + 22016); /*0x6f0ace*/
  v56 = &TypeList<TeamTypeClass const *>::`vftable'; /*0x6f0ad4*/
  v54 = 0; /*0x6f0adf*/
  if ( v5 != -1 ) /*0x6f0ae3*/
    v54 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * v5]; /*0x6f0aee*/
  if ( Random::Range((_DWORD *)dword_A8B230 + 134, 1, 100) <= *(_DWORD *)(a2 + 22108) && *(_BYTE *)(a2 + 498) ) /*0x6f0b12*/
  {
    v6 = 0; /*0x6f0b26*/
    if ( dword_8B40F8 > 0 ) /*0x6f0b2a*/
    {
      v7 = (char *)dword_8B40EC; /*0x6f0b2c*/
      v8 = dword_8B40F8; /*0x6f0b32*/
      do /*0x6f0b4d*/
      {
        if ( *(_DWORD *)(*(_DWORD *)v7 + 44) == a2 ) /*0x6f0b39*/
        {
          ++v6; /*0x6f0b3e*/
          if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)v7 + 36) + 246) ) /*0x6f0b3f*/
            ++v3; /*0x6f0b48*/
        }
        v7 += 4; /*0x6f0b49*/
        --v8; /*0x6f0b4c*/
      }
      while ( v8 ); /*0x6f0b4d*/
    }
    v9 = 4 * *(_DWORD *)(a2 + 388); /*0x6f0b5b*/
    WallPenetratorThreshold_high = HIDWORD(dword_8871E0->?); /*0x6f0b5e*/
    LOBYTE(v53[0]) = 0; /*0x6f0b64*/
    if ( v6 < *(_DWORD *)(WallPenetratorThreshold_high + v9) || v3 < v6 / 2 ) /*0x6f0b77*/
    {
      if ( v3 > *(_DWORD *)(LODWORD(dword_8871E0->?) + v9) ) /*0x6f0bd4*/
        LOBYTE(v53[0]) = 1; /*0x6f0bd6*/
    }
    else
    {
      v11 = 0; /*0x6f0b79*/
      v12 = 0x7FFFFFFF; /*0x6f0b7b*/
      if ( dword_8B40F8 > 0 ) /*0x6f0b82*/
      {
        v13 = (char *)dword_8B40EC; /*0x6f0b84*/
        v14 = dword_8B40F8; /*0x6f0b8a*/
        do /*0x6f0bb6*/
        {
          v15 = *(_DWORD **)v13; /*0x6f0b90*/
          if ( *(_DWORD *)(*(_DWORD *)v13 + 44) == a2 && *(_BYTE *)(v15[9] + 246) && v15[20] < v12 ) /*0x6f0bac*/
          {
            v11 = *(int **)v13; /*0x6f0bae*/
            v12 = v15[20]; /*0x6f0bb0*/
          }
          v13 += 4; /*0x6f0bb2*/
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
    if ( v6 < *(_DWORD *)(HIDWORD(dword_8871E0->?) + 4 * *(_DWORD *)(a2 + 388)) ) /*0x6f0bf4*/
    {
      v17 = 0; /*0x6f0bfa*/
      Team_Helper_6F27F0(0, 0); /*0x6f0c02*/
      v62 = &DynamicVectorClass<DiscreteDistributionClass<AITriggerTypeClass>::DistributionObject<AITriggerTypeClass *>>::`vftable'; /*0x6f0c0b*/
      v66 = 10; /*0x6f0c13*/
      v65 = 0; /*0x6f0c1b*/
      v67 = 0; /*0x6f0c1f*/
      TeamTypeClass_28::ClearBuffer(&v62); /*0x6f0c23*/
      v51 = 0; /*0x6f0c2e*/
      if ( dword_A8B210 > 0 ) /*0x6f0c34*/
      {
        v18 = v53[0]; /*0x6f0c3a*/
        while ( 1 ) /*0x6f0c44*/
        {
          v19 = *((_DWORD *)dword_A8B204 + v17); /*0x6f0c44*/
          if ( !v19 || TriggerClass::EvaluateCondition(v19, (_DWORD *)a2, v54, v18) != 1 ) /*0x6f0c5f*/
            goto LABEL_34; /*0x6f0c5f*/
          v20 = Math::RoundToInt(*(double *)(v19 + 184)); /*0x6f0c6c*/
          if ( v20 == 5000 ) /*0x6f0c78*/
            break; /*0x6f0c78*/
          if ( !v51 ) /*0x6f0c9a*/
            goto LABEL_33; /*0x6f0c9a*/
LABEL_34:
          if ( ++v17 >= dword_A8B210 ) /*0x6f0cbe*/
            goto LABEL_35; /*0x6f0cbe*/
        }
        if ( !v51 ) /*0x6f0c7c*/
        {
          v51 = 1; /*0x6f0c86*/
          v67 = 0; /*0x6f0c8b*/
          ((void (__thiscall *)(void ***))v62[3])(&v62); /*0x6f0c93*/
        }
LABEL_33:
        v53[0] = v19; /*0x6f0c9c*/
        v53[1] = v20; /*0x6f0ca9*/
        Team_Helper_6F25E0(v53); /*0x6f0cad*/
        v67 += v20; /*0x6f0cb2*/
        goto LABEL_34; /*0x6f0cb2*/
      }
LABEL_35:
      v21 = 0; /*0x6f0cc4*/
      if ( !v67 ) /*0x6f0ccd*/
        goto LABEL_58; /*0x6f0ccd*/
      if ( !v65 ) /*0x6f0cd9*/
        goto LABEL_58; /*0x6f0cd9*/
      v22 = Random::Range((_DWORD *)dword_A8B230 + 134, 1, v67); /*0x6f0cee*/
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
      v62 = &VectorClass<DiscreteDistributionClass<AITriggerTypeClass>::DistributionObject<AITriggerTypeClass *>>::`vftable'; /*0x6f0dc2*/
      if ( v63 && v64 ) /*0x6f0dd8*/
        Team_Helper_6F26E0(v63, 3); /*0x6f0de0*/
    }
  }
  v31 = Block; /*0x6f0de5*/
  v32 = 0; /*0x6f0dee*/
  if ( dword_8B40F8 <= 0 ) /*0x6f0df2*/
  {
LABEL_71:
    for ( i = 0; i < v60; v31 = Block ) /*0x6f0e4b*/
    {
      v39 = v31[i++]; /*0x6f0e4d*/
      *(_BYTE *)(v39 + 169) = 1; /*0x6f0e51*/
    }
    v40 = (int)v55; /*0x6f0e64*/
    v41 = v55 == &v56; /*0x6f0e6e*/
    v55[1] = 0; /*0x6f0e70*/
    *(_DWORD *)(v40 + 8) = 0; /*0x6f0e73*/
    *(_BYTE *)(v40 + 12) = 1; /*0x6f0e76*/
    *(_BYTE *)(v40 + 13) = 0; /*0x6f0e7a*/
    *(_DWORD *)v40 = &VectorClass<TeamTypeClass const *>::`vftable'; /*0x6f0e7e*/
    if ( !v41 ) /*0x6f0e84*/
    {
      VectorClass::ClearAndFree3(v40); /*0x6f0e8c*/
      v42 = v58; /*0x6f0e92*/
      v41 = v58 == 0; /*0x6f0e96*/
      *(_DWORD *)(v40 + 8) = v58; /*0x6f0e98*/
      if ( v41 ) /*0x6f0e9b*/
      {
        *(_DWORD *)(v40 + 4) = 0; /*0x6f0f70*/
        *(_BYTE *)(v40 + 13) = 0; /*0x6f0f73*/
      }
      else
      {
        v43 = __2_YAPAXI_Z(4 * v42); /*0x6f0ea5*/
        *(_DWORD *)(v40 + 4) = v43; /*0x6f0eaf*/
        if ( v43 ) /*0x6f0eb2*/
        {
          v44 = *(_DWORD *)(v40 + 8); /*0x6f0eb8*/
          v45 = 0; /*0x6f0ebb*/
          *(_BYTE *)(v40 + 13) = 1; /*0x6f0ebf*/
          if ( v44 > 0 ) /*0x6f0ec3*/
          {
            do /*0x6f0edc*/
            {
              *(_DWORD *)(*(_DWORD *)(v40 + 4) + 4 * v45) = *((_DWORD *)Block + v45); /*0x6f0ed3*/
              ++v45; /*0x6f0ed9*/
            }
            while ( v45 < *(_DWORD *)(v40 + 8) ); /*0x6f0edc*/
          }
        }
      }
      v31 = Block; /*0x6f0f77*/
    }
    v50 = v61; /*0x6f0f7f*/
    *(_DWORD *)(v40 + 16) = v60; /*0x6f0f85*/
    *(_DWORD *)(v40 + 20) = v50; /*0x6f0f88*/
    *(_DWORD *)v40 = &TypeList<TeamTypeClass const *>::`vftable'; /*0x6f0f8b*/
    v56 = &VectorClass<TeamTypeClass const *>::`vftable'; /*0x6f0f91*/
    if ( v31 ) /*0x6f0f99*/
    {
      if ( v59 ) /*0x6f0fa1*/
        __3_YAXPAX_Z(v31); /*0x6f0fa4*/
    }
  }
  else
  {
    v33 = (char *)dword_8B40EC; /*0x6f0df4*/
    while ( 1 ) /*0x6f0dfa*/
    {
      v34 = *(_DWORD *)v33; /*0x6f0dfa*/
      if ( *(_DWORD *)(*(_DWORD *)v33 + 44) == a2 && (*(_BYTE *)(v34 + 123) || !*(_BYTE *)(v34 + 127)) ) /*0x6f0e0c*/
      {
        v35 = 0; /*0x6f0e17*/
        if ( v60 > 0 ) /*0x6f0e1b*/
          break; /*0x6f0e1b*/
      }
LABEL_70:
      ++v32; /*0x6f0e36*/
      v33 += 4; /*0x6f0e3c*/
      if ( v32 >= dword_8B40F8 ) /*0x6f0e41*/
        goto LABEL_71; /*0x6f0e41*/
    }
    v36 = *(_DWORD *)(v34 + 36); /*0x6f0e1d*/
    v37 = Block; /*0x6f0e20*/
    while ( v36 != *v37 ) /*0x6f0e24*/
    {
      ++v35; /*0x6f0e2e*/
      ++v37; /*0x6f0e2f*/
      if ( v35 >= v60 ) /*0x6f0e34*/
        goto LABEL_70; /*0x6f0e34*/
    }
    v60 = 0; /*0x6f0ee7*/
    if ( Block && v59 ) /*0x6f0ef3*/
    {
      __3_YAXPAX_Z(Block); /*0x6f0ef6*/
      Block = 0; /*0x6f0efe*/
    }
    v40 = (int)v55; /*0x6f0f02*/
    v46 = v55; /*0x6f0f0b*/
    v59 = 0; /*0x6f0f0d*/
    v58 = 0; /*0x6f0f12*/
    v55[1] = 0; /*0x6f0f16*/
    v46[2] = 0; /*0x6f0f19*/
    *((_BYTE *)v46 + 12) = 1; /*0x6f0f1c*/
    *((_BYTE *)v46 + 13) = 0; /*0x6f0f20*/
    *v46 = &VectorClass<TeamTypeClass const *>::`vftable'; /*0x6f0f24*/
    Team_Helper_6F2780(&v56); /*0x6f0f2a*/
    *(_DWORD *)v40 = &TypeList<TeamTypeClass const *>::`vftable'; /*0x6f0f2f*/
    v56 = &VectorClass<TeamTypeClass const *>::`vftable'; /*0x6f0f35*/
    v47 = Block; /*0x6f0f3d*/
    v48 = v61; /*0x6f0f45*/
    v41 = Block == 0; /*0x6f0f49*/
    *(_DWORD *)(v40 + 16) = v60; /*0x6f0f4b*/
    *(_DWORD *)(v40 + 20) = v48; /*0x6f0f4e*/
    if ( !v41 && v59 ) /*0x6f0f59*/
    {
      __3_YAXPAX_Z(v47); /*0x6f0f5c*/
      return v40; /*0x6f0f6d*/
    }
  }
  return v40; /*0x6f0f66*/
}



// ==== 0x006F0FC0  TeamTypeClass::FindByName  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::FindByName(TeamTypeClass *this)
{
  int v2; // esi

  if ( !this ) /*0x6f0fc6*/
    return 0; /*0x6f0fc6*/
  v2 = 0; /*0x6f0fcd*/
  if ( *(int *)&stru_A8EB00.?[204] <= 0 ) /*0x6f0fd1*/
    return 0; /*0x6f1010*/
  while ( _strcmpi((char *)this, (char *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v2) + 36)) /*0x6f1004*/
       && _strcmpi((char *)this, (char *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v2) + 100)) )
  {
    if ( ++v2 >= *(int *)&stru_A8EB00.?[204] ) /*0x6f100e*/
      return 0; /*0x6f100e*/
  }
  return *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v2); /*0x6f1010*/
}



// ==== 0x006F1030  TeamTypeClass::GetTeam  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::GetTeam(TeamTypeClass *this, int a2, int a3)
{
  int result; // eax
  int v4; // ecx

  result = a2; /*0x6f1030*/
  if ( this->TeamTypeClass_field_34 == a2 ) /*0x6f103f*/
    this->TeamTypeClass_field_34 = 0; /*0x6f1041*/
  if ( this->q031 == a2 ) /*0x6f104d*/
    this->q031 = 0; /*0x6f104f*/
  if ( *((_DWORD *)this + 57) == a2 ) /*0x6f105b*/
    *((_DWORD *)this + 57) = 0; /*0x6f105d*/
  if ( this->TeamTypeClass_field_38 == a2 ) /*0x6f1069*/
    this->TeamTypeClass_field_38 = 0; /*0x6f106b*/
  v4 = this->TeamTypeClass_field_38; /*0x6f1071*/
  if ( v4 ) /*0x6f1079*/
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 40))(v4, a2, a3); /*0x6f1083*/
  return result; /*0x6f1086*/
}



// ==== 0x006F1090  TeamTypeClass::LoadFromINI  this=TeamTypeClass  sig=csp ====
char __thiscall TeamTypeClass::LoadFromINI(TeamTypeClass *this, unsigned __int8 ***a2)
{
  int v3; // ecx
  int v4; // eax
  HouseClass *v5; // ebp
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
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  char *v26; // ebp
  char *v27; // eax
  int v28; // ecx
  int v29; // eax
  char v30; // al
  char v31; // cl
  char v32; // al
  char v33; // al
  char v34; // cl
  char v35; // al
  int v36; // ecx
  char *v37; // eax
  char *v38; // eax
  int *v39; // ebp
  int *ScriptType; // eax
  _DWORD *v41; // ebp
  _DWORD *TaskForce; // eax
  int v44; // [esp-Ch] [ebp-D4h]
  char v45; // [esp-Ch] [ebp-D4h]
  char v46; // [esp-Ch] [ebp-D4h]
  char v47; // [esp-Ch] [ebp-D4h]
  char v48; // [esp-Ch] [ebp-D4h]
  char v49; // [esp-Ch] [ebp-D4h]
  int v50; // [esp-Ch] [ebp-D4h]
  char v51; // [esp-Ch] [ebp-D4h]
  char v52; // [esp-Ch] [ebp-D4h]
  char v53[64]; // [esp+8h] [ebp-C0h] BYREF
  char Destination[128]; // [esp+48h] [ebp-80h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x6f10a3*/
  if ( !(unsigned __int8)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)this, a2) ) /*0x6f10b2*/
    return 0; /*0x6f10b2*/
  v3 = this->q031; /*0x6f10b8*/
  v4 = -1; /*0x6f10be*/
  if ( v3 ) /*0x6f10c3*/
    v4 = *(_DWORD *)(*(_DWORD *)(v3 + 52) + 184); /*0x6f10c8*/
  v5 = (HouseClass *)SuperWeaponTypeClass::FindOrCreate( /*0x6f10e1*/
                       (SuperWeaponTypeClass *)a2,
                       (unsigned __int8 *)&this->TeamTypeClass_field_24,
                       (unsigned __int8 *)&g_INI_Key_Special.SidebarImageFile[1],
                       v4);
  if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6f10e5*/
  {
    *((_DWORD *)this + 50) = v5; /*0x6f10ee*/
    this->q031 = 0; /*0x6f10f4*/
  }
  else if ( v5 != (HouseClass *)-1 ) /*0x6f1103*/
  {
    this->q031 = HouseClass::FindOwner(v5); /*0x6f110c*/
    *((_DWORD *)this + 50) = -1; /*0x6f1112*/
  }
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x6f112b*/
                    (bool *)a2,
                    (unsigned __int8 *)&this->TeamTypeClass_field_24,
                    (unsigned __int8 *)&g_INI_Key_TRUCKA.?[3],
                    this->TeamTypeClass_field_28);
  v44 = this->TeamTypeClass_field_30; /*0x6f1138*/
  this->TeamTypeClass_field_28 = Int_Overwrite; /*0x6f113f*/
  this->TeamTypeClass_field_30 = INIClass::ReadInt_Overwrite( /*0x6f114a*/
                             (bool *)a2,
                             (unsigned __int8 *)&this->TeamTypeClass_field_24,
                             (unsigned __int8 *)&g_INI_Key_TRUCKA.?[1],
                             v44);
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x6f115f*/
                     (int *)a2,
                     (unsigned __int8 *)&this->TeamTypeClass_field_24,
                     (unsigned __int8 *)g_INI_Key_TRUCKA.?,
                     this->pad_29);
  v8 = *((_BYTE *)this + 165); /*0x6f1164*/
  this->pad_29 = Bool_Overwrite; /*0x6f116a*/
  v9 = INIClass::ReadBool_Overwrite( /*0x6f1179*/
         (int *)a2,
         (unsigned __int8 *)&this->TeamTypeClass_field_24,
         (unsigned __int8 *)&g_INI_Key_TRUCKA.?,
         v8);
  v45 = *((_BYTE *)this + 166); /*0x6f1186*/
  *((_BYTE *)this + 165) = v9; /*0x6f118d*/
  *((_BYTE *)this + 166) = INIClass::ReadBool_Overwrite( /*0x6f1198*/
                             (int *)a2,
                             (unsigned __int8 *)&this->TeamTypeClass_field_24,
                             (unsigned __int8 *)&g_INI_Key_TRUCKA.?[1],
                             v45);
  v10 = INIClass::ReadBool_Overwrite( /*0x6f11ad*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)g_INI_Key_TRUCKA.?,
          *((_BYTE *)this + 167));
  v11 = *((_BYTE *)this + 169); /*0x6f11b2*/
  *((_BYTE *)this + 167) = v10; /*0x6f11b8*/
  v12 = INIClass::ReadBool_Overwrite( /*0x6f11c7*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?[1],
          v11);
  v46 = *((_BYTE *)this + 170); /*0x6f11d4*/
  *((_BYTE *)this + 169) = v12; /*0x6f11db*/
  *((_BYTE *)this + 170) = INIClass::ReadBool_Overwrite( /*0x6f11e6*/
                             (int *)a2,
                             (unsigned __int8 *)&this->TeamTypeClass_field_24,
                             (unsigned __int8 *)g_INI_Key_TRUCKA.?,
                             v46);
  v13 = INIClass::ReadBool_Overwrite( /*0x6f11fb*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?[14],
          *((_BYTE *)this + 171));
  v14 = this->TeamTypeClass_field_2C; /*0x6f1200*/
  *((_BYTE *)this + 171) = v13; /*0x6f1206*/
  v15 = INIClass::ReadBool_Overwrite( /*0x6f1215*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?[6],
          v14);
  v47 = *((_BYTE *)this + 177); /*0x6f1222*/
  this->TeamTypeClass_field_2C = v15; /*0x6f1229*/
  *((_BYTE *)this + 177) = INIClass::ReadBool_Overwrite( /*0x6f1234*/
                             (int *)a2,
                             (unsigned __int8 *)&this->TeamTypeClass_field_24,
                             (unsigned __int8 *)&g_INI_Key_TRUCKA.?[4],
                             v47);
  v16 = INIClass::ReadBool_Overwrite( /*0x6f1249*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?,
          *((_BYTE *)this + 168));
  v17 = this->q02B; /*0x6f124e*/
  *((_BYTE *)this + 168) = v16; /*0x6f1254*/
  v18 = INIClass::ReadBool_Overwrite( /*0x6f1263*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?[18],
          v17);
  v48 = *((_BYTE *)this + 175); /*0x6f1270*/
  this->q02B = v18; /*0x6f1277*/
  *((_BYTE *)this + 175) = INIClass::ReadBool_Overwrite( /*0x6f1282*/
                             (int *)a2,
                             (unsigned __int8 *)&this->TeamTypeClass_field_24,
                             (unsigned __int8 *)&g_INI_Key_TRUCKA.?[16],
                             v48);
  v19 = INIClass::ReadBool_Overwrite( /*0x6f1297*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?[12],
          *((_BYTE *)this + 174));
  v20 = *((_BYTE *)this + 173); /*0x6f129c*/
  *((_BYTE *)this + 174) = v19; /*0x6f12a2*/
  v21 = INIClass::ReadBool_Overwrite( /*0x6f12b1*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?[9],
          v20);
  v49 = *((_BYTE *)this + 179); /*0x6f12be*/
  *((_BYTE *)this + 173) = v21; /*0x6f12c5*/
  *((_BYTE *)this + 179) = INIClass::ReadBool_Overwrite( /*0x6f12d0*/
                             (int *)a2,
                             (unsigned __int8 *)&this->TeamTypeClass_field_24,
                             (unsigned __int8 *)&g_INI_Key_TRUCKA.?[6],
                             v49);
  v22 = INIClass::ReadInt_Overwrite( /*0x6f12e5*/
          (bool *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?[3],
          *((_DWORD *)this + 45));
  v23 = *((_DWORD *)this + 46); /*0x6f12ea*/
  *((_DWORD *)this + 45) = v22; /*0x6f12f0*/
  v24 = INIClass::ReadInt_Overwrite( /*0x6f12ff*/
          (bool *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?[2],
          v23);
  v50 = this->alignmentPadding; /*0x6f130c*/
  *((_DWORD *)this + 46) = v24; /*0x6f1313*/
  v25 = INIClass::ReadInt_Overwrite( /*0x6f1319*/
          (bool *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)g_INI_Key_TechLevel,
          v50);
  v26 = (char *)this->TeamTypeClass_field_34; /*0x6f131e*/
  this->alignmentPadding = v25; /*0x6f1324*/
  if ( INIClass::GetString( /*0x6f1341*/
         (INIClass *)a2,
         (unsigned __int8 *)&this->TeamTypeClass_field_24,
         (unsigned __int8 *)off_81728C,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v27 = TagTypeClass::FindOrCreate(Destination); /*0x6f134e*/
  }
  else
  {
    v27 = v26; /*0x6f1355*/
  }
  v28 = *((_DWORD *)this + 39); /*0x6f1357*/
  this->TeamTypeClass_field_34 = v27; /*0x6f135d*/
  v29 = INIClass::ReadInt_Overwrite( /*0x6f136c*/
          (bool *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)g_INI_Key_Group,
          v28);
  v51 = *((_BYTE *)this + 242); /*0x6f1379*/
  *((_DWORD *)this + 39) = v29; /*0x6f1380*/
  *((_BYTE *)this + 242) = INIClass::ReadBool_Overwrite( /*0x6f138b*/
                             (int *)a2,
                             (unsigned __int8 *)&this->TeamTypeClass_field_24,
                             (unsigned __int8 *)&g_INI_Key_TRUCKA.?[1],
                             v51);
  v30 = INIClass::ReadBool_Overwrite( /*0x6f13a0*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?,
          *((_BYTE *)this + 243));
  v31 = *((_BYTE *)this + 246); /*0x6f13a5*/
  *((_BYTE *)this + 243) = v30; /*0x6f13ab*/
  v32 = INIClass::ReadBool_Overwrite( /*0x6f13ba*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)g_INI_Key_IsBaseDefense,
          v31);
  v52 = *((_BYTE *)this + 247); /*0x6f13c7*/
  *((_BYTE *)this + 246) = v32; /*0x6f13ce*/
  *((_BYTE *)this + 247) = INIClass::ReadBool_Overwrite( /*0x6f13d9*/
                             (int *)a2,
                             (unsigned __int8 *)&this->TeamTypeClass_field_24,
                             (unsigned __int8 *)&g_INI_Key_TRUCKA.?[5],
                             v52);
  v33 = INIClass::ReadBool_Overwrite( /*0x6f13ee*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?[4],
          this->UINameLabel);
  v34 = *((_BYTE *)this + 245); /*0x6f13f3*/
  this->UINameLabel = v33; /*0x6f13f9*/
  v35 = INIClass::ReadBool_Overwrite( /*0x6f1408*/
          (int *)a2,
          (unsigned __int8 *)&this->TeamTypeClass_field_24,
          (unsigned __int8 *)&g_INI_Key_TRUCKA.?[147],
          v34);
  v36 = *((_DWORD *)this + 53); /*0x6f140d*/
  *((_BYTE *)this + 245) = v35; /*0x6f141a*/
  v37 = Waypoint::To_String(v36); /*0x6f1420*/
  if ( INIClass::GetString( /*0x6f1435*/
         (INIClass *)a2,
         (unsigned __int8 *)&this->TeamTypeClass_field_24,
         (unsigned __int8 *)aWaypoint,
         v37,
         v53,
         64) > 0 )
    *((_DWORD *)this + 53) = String::To_Waypoint(v53); /*0x6f1440*/
  v38 = Waypoint::To_String(*((_DWORD *)this + 54)); /*0x6f1453*/
  if ( INIClass::GetString( /*0x6f1468*/
         (INIClass *)a2,
         (unsigned __int8 *)&this->TeamTypeClass_field_24,
         (unsigned __int8 *)&g_INI_Key_TRUCKA.?[127],
         v38,
         v53,
         64) > 0 )
    *((_DWORD *)this + 54) = String::To_Waypoint(v53); /*0x6f1473*/
  v39 = (int *)this->TeamTypeClass_field_38; /*0x6f1479*/
  if ( INIClass::GetString( /*0x6f1496*/
         (INIClass *)a2,
         (unsigned __int8 *)&this->TeamTypeClass_field_24,
         (unsigned __int8 *)&g_INI_Key_Special.?[8],
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    ScriptType = TeamTypeClass::CreateScriptType(Destination); /*0x6f14a3*/
  }
  else
  {
    ScriptType = v39; /*0x6f14aa*/
  }
  v41 = (_DWORD *)*((_DWORD *)this + 57); /*0x6f14ac*/
  this->TeamTypeClass_field_38 = ScriptType; /*0x6f14c9*/
  if ( INIClass::GetString( /*0x6f14cf*/
         (INIClass *)a2,
         (unsigned __int8 *)&this->TeamTypeClass_field_24,
         (unsigned __int8 *)aTaskforce,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    TaskForce = TeamTypeClass::FindOrCreateTaskForce(Destination); /*0x6f14dc*/
  }
  else
  {
    TaskForce = v41; /*0x6f14e3*/
  }
  *((_DWORD *)this + 57) = TaskForce; /*0x6f14e6*/
  if ( !TaskForce ) /*0x6f14ef*/
  {
    if ( dword_A8E8E0 <= 0 ) /*0x6f14f8*/
      return 0; /*0x6f14f8*/
    *((_DWORD *)this + 57) = *(_DWORD *)dword_A8E8D4; /*0x6f1501*/
  }
  if ( this->TeamTypeClass_field_38 ) /*0x6f1507*/
    return 1; /*0x6f1532*/
  if ( *(int *)&FootClass_Array.? > 0 ) /*0x6f1518*/
  {
    this->TeamTypeClass_field_38 = *(_DWORD *)FootClass_Array.?[5]; /*0x6f1522*/
    return 1; /*0x6f1522*/
  }
  return 0; /*0x6f1528*/
}



// ==== 0x006F1550  TeamTypeClass::GetMaxCount  this=TeamTypeClass  sig=csp ====
char __thiscall TeamTypeClass::GetMaxCount(TeamTypeClass *this, char *a2)
{
  int v3; // eax
  int v4; // ebp
  int *p_TeamTypeClass_field_24; // edi
  int v6; // eax
  char *v7; // eax
  char *v8; // eax
  int v9; // eax
  int v10; // esi

  if ( !AbstractTypeClass::WriteINI((AbstractTypeClass *)this, a2) ) /*0x6f1559*/
    return 0; /*0x6f185b*/
  v3 = this->q031; /*0x6f1566*/
  v4 = -1; /*0x6f156d*/
  if ( v3 ) /*0x6f1573*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)(v3 + 52) + 184); /*0x6f1578*/
  }
  else if ( (unsigned __int8)BuildingType::IsSpecialType(*((void **)this + 50)) ) /*0x6f1586*/
  {
    v4 = *((_DWORD *)this + 50); /*0x6f158f*/
  }
  p_TeamTypeClass_field_24 = &this->TeamTypeClass_field_24; /*0x6f159d*/
  INIClass::SetInt( /*0x6f15a9*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[3],
    this->TeamTypeClass_field_28,
    0);
  INIClass::SetInt( /*0x6f15bf*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[1],
    this->TeamTypeClass_field_30,
    0);
  INIClass::SetBool( /*0x6f15d3*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)g_INI_Key_TRUCKA.?,
    this->pad_29);
  INIClass::SetBool( /*0x6f15e7*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?,
    *((_BYTE *)this + 165));
  INIClass::SetBool( /*0x6f15fb*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[1],
    *((_BYTE *)this + 166));
  INIClass::SetBool( /*0x6f160f*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)g_INI_Key_TRUCKA.?,
    *((_BYTE *)this + 167));
  INIClass::SetHouseName( /*0x6f161d*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_Special.SidebarImageFile[1],
    (void *)v4);
  INIClass::SetBool( /*0x6f1631*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?,
    *((_BYTE *)this + 168));
  INIClass::SetBool( /*0x6f1645*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[1],
    *((_BYTE *)this + 169));
  INIClass::SetBool( /*0x6f1659*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)g_INI_Key_TRUCKA.?,
    *((_BYTE *)this + 170));
  INIClass::SetBool( /*0x6f166d*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &g_INI_Key_TRUCKA.?[14],
    *((_BYTE *)this + 171));
  INIClass::SetBool( /*0x6f1681*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &g_INI_Key_TRUCKA.?[6],
    this->TeamTypeClass_field_2C);
  INIClass::SetBool( /*0x6f1695*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &g_INI_Key_TRUCKA.?[4],
    *((_BYTE *)this + 177));
  INIClass::SetBool( /*0x6f16a9*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[18],
    this->q02B);
  INIClass::SetBool( /*0x6f16bd*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[12],
    *((_BYTE *)this + 174));
  INIClass::SetBool( /*0x6f16d1*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[9],
    *((_BYTE *)this + 173));
  INIClass::SetBool( /*0x6f16e5*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[16],
    *((_BYTE *)this + 175));
  INIClass::SetInt( /*0x6f16fb*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[3],
    *((_DWORD *)this + 45),
    0);
  INIClass::SetInt( /*0x6f1711*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[2],
    *((_DWORD *)this + 46),
    0);
  INIClass::SetInt(a2, (unsigned __int8 *)&this->TeamTypeClass_field_24, g_INI_Key_TechLevel, this->alignmentPadding, 0); /*0x6f1727*/
  INIClass::SetInt(a2, (unsigned __int8 *)&this->TeamTypeClass_field_24, g_INI_Key_Group, *((_DWORD *)this + 39), 0); /*0x6f173d*/
  INIClass::SetBool( /*0x6f1751*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    (char *)&g_INI_Key_TRUCKA.?[6],
    *((_BYTE *)this + 179));
  INIClass::SetBool( /*0x6f1765*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &g_INI_Key_TRUCKA.?[1],
    *((_BYTE *)this + 242));
  INIClass::SetBool(a2, (unsigned __int8 *)&this->TeamTypeClass_field_24, &g_INI_Key_TRUCKA.?, *((_BYTE *)this + 243)); /*0x6f1779*/
  INIClass::SetBool( /*0x6f178d*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &g_INI_Key_TRUCKA.?[4],
    this->UINameLabel);
  INIClass::SetBool( /*0x6f17a1*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &g_INI_Key_TRUCKA.?[147],
    *((_BYTE *)this + 245));
  INIClass::SetBool( /*0x6f17b5*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    g_INI_Key_IsBaseDefense,
    *((_BYTE *)this + 246));
  INIClass::SetBool( /*0x6f17c9*/
    a2,
    (unsigned __int8 *)&this->TeamTypeClass_field_24,
    &g_INI_Key_TRUCKA.?[5],
    *((_BYTE *)this + 247));
  v6 = this->TeamTypeClass_field_34; /*0x6f17ce*/
  if ( v6 ) /*0x6f17d6*/
    INIClass::SetString(a2, (unsigned __int8 *)&this->TeamTypeClass_field_24, off_81728C, (char *)(v6 + 36)); /*0x6f17e4*/
  v7 = Waypoint::To_String(*((_DWORD *)this + 53)); /*0x6f17ef*/
  INIClass::SetString(a2, (unsigned __int8 *)&this->TeamTypeClass_field_24, aWaypoint, v7); /*0x6f17fd*/
  v8 = Waypoint::To_String(*((_DWORD *)this + 54)); /*0x6f1808*/
  INIClass::SetString(a2, (unsigned __int8 *)&this->TeamTypeClass_field_24, &g_INI_Key_TRUCKA.?[127], v8); /*0x6f1816*/
  v9 = this->TeamTypeClass_field_38; /*0x6f181b*/
  if ( v9 ) /*0x6f1823*/
    INIClass::SetString( /*0x6f1831*/
      a2,
      (unsigned __int8 *)&this->TeamTypeClass_field_24,
      &g_INI_Key_Special.?[8],
      (char *)(v9 + 36));
  v10 = *((_DWORD *)this + 57); /*0x6f1836*/
  if ( v10 ) /*0x6f183e*/
    INIClass::SetString(a2, (unsigned __int8 *)p_TeamTypeClass_field_24, aTaskforce, (char *)(v10 + 36)); /*0x6f184c*/
  return 1; /*0x6f1853*/
}



// ==== 0x006F1870  TeamTypeClass::GetGroup  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::GetGroup(TeamTypeClass *this)
{
  int result; // eax
  int v2; // ecx

  result = *((_DWORD *)this + 39); /*0x6f1870*/
  if ( result == -1 ) /*0x6f1879*/
  {
    v2 = *((_DWORD *)this + 57); /*0x6f1880*/
    if ( v2 ) /*0x6f1888*/
      return *(_DWORD *)(v2 + 152); /*0x6f188a*/
  }
  return result; /*0x6f1890*/
}



// ==== 0x006F18A0  TechnoClass::GetWaypointCoords  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::GetWaypointCoords(TechnoClass *this, _DWORD *a2)
{
  int v2; // eax
  int v4; // ecx
  TechnoClass *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x6f18a0*/
  v2 = this->?[0]; /*0x6f18a1*/
  if ( v2 == -1 ) /*0x6f18aa*/
  {
    *a2 = *(_DWORD *)&g_BuildingLoadQueue_Array.?[59]; /*0x6f18b6*/
    return a2; /*0x6f18ac*/
  }
  else
  {
    v4 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v5, v2); /*0x6f18cd*/
    *a2 = v4; /*0x6f18d3*/
    return a2; /*0x6f18cf*/
  }
}



// ==== 0x006F18E0  TeamTypeClass::GetTransportWaypoint  this=TeamTypeClass  sig=csp ====
_DWORD *__thiscall TeamTypeClass::GetTransportWaypoint(TeamTypeClass *this, _DWORD *a2)
{
  int v2; // eax
  int v4; // ecx
  TeamTypeClass *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x6f18e0*/
  v2 = *((_DWORD *)this + 54); /*0x6f18e1*/
  if ( v2 == -1 ) /*0x6f18ea*/
  {
    *a2 = *(_DWORD *)&g_BuildingLoadQueue_Array.?[59]; /*0x6f18f6*/
    return a2; /*0x6f18ec*/
  }
  else
  {
    v4 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v5, v2); /*0x6f190d*/
    *a2 = v4; /*0x6f1913*/
    return a2; /*0x6f190f*/
  }
}



// ==== 0x006F1920  TechnoClass::Create  this=Coord  sig=csp ====
_DWORD *__thiscall TechnoClass::Create(char *Source)
{
  int v2; // esi
  TeamTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6f193c*/
    return 0; /*0x6f199f*/
  v2 = 0; /*0x6f194d*/
  if ( *(int *)&stru_A8EB00.?[204] <= 0 ) /*0x6f1951*/
  {
LABEL_6:
    v3 = (TeamTypeClass *)__2_YAPAXI_Z(0xF8u); /*0x6f1976*/
    if ( v3 ) /*0x6f1985*/
      return TechnoTypeClass::LoadBase(v3, Source); /*0x6f1991*/
    return 0; /*0x6f1985*/
  }
  while ( _strcmpi((char *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v2) + 36), Source) ) /*0x6f196a*/
  {
    if ( ++v2 >= *(int *)&stru_A8EB00.?[204] ) /*0x6f1974*/
      goto LABEL_6; /*0x6f1974*/
  }
  return *(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v2); /*0x6f198f*/
}



// ==== 0x006F19B0  SmallFunc_6F19B0  this=INIClass  sig=csp ====
int __fastcall SmallFunc_6F19B0(INIClass *a1, int a2)
{
  int result; // eax
  int v4; // ebp
  int i; // ebx
  unsigned __int8 *StringByIndex; // eax
  int v7; // esi
  TeamTypeClass *v8; // eax
  _DWORD *Base; // esi
  char Source[32]; // [esp+10h] [ebp-20h] BYREF

  result = INIClass::GetKeyCount(a1->__pad_0, (unsigned __int8 *)g_INI_Key_TRUCKA.?); /*0x6f19c1*/
  v4 = result; /*0x6f19c6*/
  for ( i = 0; i < v4; Base[58] = a2 ) /*0x6f19cc*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1->__pad_0, (unsigned __int8 *)g_INI_Key_TRUCKA.?, i); /*0x6f19db*/
    INIClass::GetString(a1, (unsigned __int8 *)g_INI_Key_TRUCKA.?, StringByIndex, &g_INI_DefaultBuffer, Source, 32); /*0x6f19f4*/
    if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6f1a19*/
      goto LABEL_10; /*0x6f1a19*/
    v7 = 0; /*0x6f1a2a*/
    if ( *(int *)&stru_A8EB00.?[204] > 0 ) /*0x6f1a2e*/
    {
      while ( _strcmpi((char *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v7) + 36), Source) ) /*0x6f1a4c*/
      {
        if ( ++v7 >= *(int *)&stru_A8EB00.?[204] ) /*0x6f1a56*/
          goto LABEL_7; /*0x6f1a56*/
      }
      Base = *(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v7); /*0x6f1a7f*/
      goto LABEL_11; /*0x6f1a82*/
    }
LABEL_7:
    v8 = (TeamTypeClass *)__2_YAPAXI_Z(0xF8u); /*0x6f1a5d*/
    if ( v8 ) /*0x6f1a67*/
      Base = TechnoTypeClass::LoadBase(v8, Source); /*0x6f1a75*/
    else
LABEL_10:
      Base = 0; /*0x6f1a84*/
LABEL_11:
    result = (*(int (__thiscall **)(_DWORD *, INIClass *))(*Base + 100))(Base, a1); /*0x6f1a86*/
    ++i; /*0x6f1a8e*/
  }
  return result; /*0x6f1aa2*/
}



// ==== 0x006F1AB0  TeamTypeClass::ReadScriptData  this=TeamTypeClass  sig=csp ====
int __fastcall TeamTypeClass::ReadScriptData(INIClass *a1, int a2)
{
  int KeyCount; // ebx
  int i; // edi
  unsigned __int8 *StringByIndex; // eax
  int result; // eax
  int v8; // ebx
  int j; // edi
  int v10; // [esp-4h] [ebp-34h]
  char Buffer[32]; // [esp+10h] [ebp-20h] BYREF

  KeyCount = INIClass::GetKeyCount(a1->__pad_0, (unsigned __int8 *)g_INI_Key_TRUCKA.?); /*0x6f1ac5*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6f1acb*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1->__pad_0, (unsigned __int8 *)g_INI_Key_TRUCKA.?, i); /*0x6f1ad5*/
    INIClass::GetString(a1, (unsigned __int8 *)g_INI_Key_TRUCKA.?, StringByIndex, &g_INI_DefaultBuffer, Buffer, 32); /*0x6f1aee*/
    INIClass::ClearSection((int *)a1->__pad_0, (int)Buffer, 0); /*0x6f1afc*/
  }
  INIClass::ClearSection((int *)a1->__pad_0, (int)g_INI_Key_TRUCKA.?, 0); /*0x6f1b0f*/
  result = *(_DWORD *)&stru_A8EB00.?[204]; /*0x6f1b14*/
  v8 = 0; /*0x6f1b19*/
  for ( j = 0; j < *(int *)&stru_A8EB00.?[204]; ++j ) /*0x6f1b1f*/
  {
    if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * j) + 232) == a2 ) /*0x6f1b2f*/
    {
      v10 = v8++; /*0x6f1b37*/
      sprintf(Buffer, "%d", v10); /*0x6f1b3f*/
      INIClass::SetString( /*0x6f1b5f*/
        a1->__pad_0,
        (unsigned __int8 *)g_INI_Key_TRUCKA.?,
        Buffer,
        (char *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * j) + 36));
      (*(void (__thiscall **)(_DWORD, INIClass *))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * j) + 104))( /*0x6f1b6f*/
        *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * j),
        a1);
    }
    result = *(_DWORD *)&stru_A8EB00.?[204]; /*0x6f1b72*/
  }
  return result; /*0x6f1b7c*/
}



// ==== 0x006F1B90  TeamTypeClass::SaveToINI  this=TeamTypeClass  sig=csp ====
int __stdcall TeamTypeClass::SaveToINI(TeamTypeClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6f1b9f*/
  if ( result >= 0 ) /*0x6f1ba6*/
    return 0; /*0x6f1ba8*/
  return result; /*0x6f1baa*/
}



// ==== 0x006F1BB0  TeamTypeClass::LoadTypeData  this=TeamTypeClass  sig=csp ====
int __stdcall TeamTypeClass::LoadTypeData(TeamTypeClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6f1bbb*/
  if ( result >= 0 ) /*0x6f1bc2*/
  {
    if ( this ) /*0x6f1bc6*/
    {
      AbstractTypeClass::Init((int)this, (int)&a2); /*0x6f1bcf*/
      this->AbstractClass = &TeamTypeClass::`vftable'; /*0x6f1bd4*/
      this->? = &TeamTypeClass::`vftable'; /*0x6f1bda*/
      this->? = &TeamTypeClass::`vftable'; /*0x6f1be1*/
      this->? = &TeamTypeClass::`vftable'; /*0x6f1be8*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 49); /*0x6f1bfb*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 52); /*0x6f1c0c*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 56); /*0x6f1c1d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 57); /*0x6f1c2e*/
    return 0; /*0x6f1c33*/
  }
  return result; /*0x6f1c35*/
}



// ==== 0x006F1C40  TeamTypeClass::GetClassIdentifier  this=TeamTypeClass  sig=csp ====
int __stdcall TeamTypeClass::GetClassIdentifier(TeamTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6f1c46*/
    return -2147467261; /*0x6f1c48*/
  *a2 = -774134194; /*0x6f1c56*/
  a2[1] = 298977144; /*0x6f1c5e*/
  a2[2] = 1610655148; /*0x6f1c67*/
  a2[3] = unk_7E978C; /*0x6f1c70*/
  return 0; /*0x6f1c4d*/
}



// ==== 0x006F1C80  TeamTypeClass::PowerDrainUpdate  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::PowerDrainUpdate(TeamTypeClass *this, int *a2)
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

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x6f1c89*/
  Power::TimerProcess(*((_DWORD *)this + 39)); /*0x6f1c97*/
  LOBYTE(v3) = *((_BYTE *)this + 168); /*0x6f1c9c*/
  Power::FlagProcess((Power *)a2, v3); /*0x6f1ca5*/
  LOBYTE(v4) = *((_BYTE *)this + 169); /*0x6f1caa*/
  v5 = Power::FlagProcess((Power *)a2, v4); /*0x6f1cb3*/
  LOBYTE(v5) = *((_BYTE *)this + 170); /*0x6f1cb8*/
  Power::FlagProcess((Power *)a2, v5); /*0x6f1cc1*/
  LOBYTE(v6) = *((_BYTE *)this + 171); /*0x6f1cc6*/
  Power::FlagProcess((Power *)a2, v6); /*0x6f1ccf*/
  LOBYTE(v7) = this->q02B; /*0x6f1cd4*/
  v8 = Power::FlagProcess((Power *)a2, v7); /*0x6f1cdd*/
  LOBYTE(v8) = *((_BYTE *)this + 173); /*0x6f1ce2*/
  Power::FlagProcess((Power *)a2, v8); /*0x6f1ceb*/
  LOBYTE(v9) = *((_BYTE *)this + 174); /*0x6f1cf0*/
  Power::FlagProcess((Power *)a2, v9); /*0x6f1cf9*/
  LOBYTE(v10) = *((_BYTE *)this + 175); /*0x6f1cfe*/
  v11 = Power::FlagProcess((Power *)a2, v10); /*0x6f1d07*/
  LOBYTE(v11) = this->TeamTypeClass_field_2C; /*0x6f1d0c*/
  Power::FlagProcess((Power *)a2, v11); /*0x6f1d15*/
  LOBYTE(v12) = *((_BYTE *)this + 177); /*0x6f1d1a*/
  Power::FlagProcess((Power *)a2, v12); /*0x6f1d23*/
  Power::TimerProcess(*((_DWORD *)this + 45)); /*0x6f1d31*/
  Power::TimerProcess(*((_DWORD *)this + 46)); /*0x6f1d3f*/
  Power::TimerProcess(this->q02F); /*0x6f1d4d*/
  v13 = this->q031; /*0x6f1d52*/
  if ( v13 ) /*0x6f1d5a*/
  {
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13); /*0x6f1d5e*/
    Power::TimerProcess(v14); /*0x6f1d64*/
  }
  v15 = this->q031; /*0x6f1d69*/
  if ( v15 ) /*0x6f1d71*/
  {
    v16 = (*(int (__stdcall **)(int))(*(_DWORD *)(v15 + 4) + 16))(v15 + 4); /*0x6f1d7a*/
    Power::TimerProcess(v16); /*0x6f1d80*/
  }
  Power::TimerProcess(this->alignmentPadding); /*0x6f1d8e*/
  v17 = this->TeamTypeClass_field_34; /*0x6f1d93*/
  if ( v17 ) /*0x6f1d9b*/
  {
    v18 = (*(int (__stdcall **)(int))(*(_DWORD *)(v17 + 4) + 16))(v17 + 4); /*0x6f1da4*/
    Power::TimerProcess(v18); /*0x6f1daa*/
  }
  Power::TimerProcess(*((_DWORD *)this + 53)); /*0x6f1db8*/
  Power::TimerProcess(*((_DWORD *)this + 54)); /*0x6f1dc6*/
  Power::TimerProcess(*((_DWORD *)this + 55)); /*0x6f1dd4*/
  result = this->TeamTypeClass_field_38; /*0x6f1dd9*/
  if ( result ) /*0x6f1de1*/
  {
    v20 = (*(int (__stdcall **)(int))(*(_DWORD *)(result + 4) + 16))(result + 4); /*0x6f1dea*/
    result = Power::TimerProcess(v20); /*0x6f1df0*/
  }
  v21 = *((_DWORD *)this + 57); /*0x6f1df5*/
  if ( v21 ) /*0x6f1dfd*/
  {
    v22 = (*(int (__stdcall **)(int))(*(_DWORD *)(v21 + 4) + 16))(v21 + 4); /*0x6f1e06*/
    return Power::TimerProcess(v22); /*0x6f1e0c*/
  }
  return result; /*0x6f1e11*/
}



// ==== 0x006F1E20  TriggerClass::EvaluateObjectForTrigger  this=TriggerClass  sig=csp ====
bool __thiscall sub_6F1E20(int this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  bool result; // al

  v4 = *(_DWORD *)(a2 + 1492); /*0x6f1e28*/
  result = 0; /*0x6f1f1b*/
  if ( (!v4 || this != *(_DWORD *)(v4 + 36)) && *(int *)(a2 + 108) > 0 ) /*0x6f1e40*/
  {
    if ( *(_BYTE *)(a2 + 144) ) /*0x6f1e46*/
    {
      if ( !*(_BYTE *)(a2 + 129) && !Team::AllMembersValid((int *)a2) && *(_DWORD *)(a2 + 540) == a3 ) /*0x6f1e7d*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 388))(a2) == -1 /*0x6f1e9e*/
          || (v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 388))(a2), IPersistStream::SetField(v5)) )
        {
          if ( (*(_BYTE *)(a2 + 1057) || *(_BYTE *)(this + 169)) && (*(_BYTE *)(a2 + 1058) || !*(_BYTE *)(this + 169)) ) /*0x6f1ec5*/
          {
            v6 = *(_DWORD *)(a2 + 1492); /*0x6f1ecf*/
            if ( (!v6 || *(_DWORD *)(*(_DWORD *)(v6 + 36) + 180) < *(_DWORD *)(this + 180)) /*0x6f1f09*/
              && ((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) != 2
               || !*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 1016))(a2, 0)
               || *(_DWORD *)(a2 + 764)) )
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
int __thiscall TeamTypeClass::FlashAllInstances(TeamTypeClass *this, int a2)
{
  int result; // eax
  int i; // esi
  int v5; // ecx

  result = (int)FootClass_Array.?; /*0x6f1f30*/
  for ( i = 0; i < (int)FootClass_Array.?; ++i ) /*0x6f1f3d*/
  {
    v5 = *((_DWORD *)&FootClass_Array.?->ObjectClass + i); /*0x6f1f49*/
    if ( *(TeamTypeClass **)(v5 + 36) == this ) /*0x6f1f4f*/
      TeamTypeClass::Check((TeamTypeClass *)v5, a2); /*0x6f1f52*/
    result = (int)FootClass_Array.?; /*0x6f1f57*/
  }
  return result; /*0x6f1f62*/
}



// ==== 0x006F1F70  TeamTypeClass::FindFirstInstance  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::FindFirstInstance(TeamTypeClass *this)
{
  int v1; // edx
  ParticleSystemClass *i; // esi
  int result; // eax

  v1 = 0; /*0x6f1f78*/
  if ( (int)FootClass_Array.? <= 0 ) /*0x6f1f7c*/
    return 0; /*0x6f1f93*/
  for ( i = FootClass_Array.?; ; i = (ParticleSystemClass *)((char *)i + 4) ) /*0x6f1f7e*/
  {
    result = (int)i->ObjectClass; /*0x6f1f84*/
    if ( *((TeamTypeClass **)i->ObjectClass + 9) == this ) /*0x6f1f89*/
      break; /*0x6f1f89*/
    if ( ++v1 >= (int)FootClass_Array.? ) /*0x6f1f91*/
      return 0; /*0x6f1f91*/
  }
  return result; /*0x6f1f95*/
}



// ==== 0x006F1FA0  TeamTypeClass::ProcessTaskForce  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::ProcessTaskForce(TeamTypeClass *this)
{
  int v2; // edi
  int result; // eax
  int v4; // ebp
  int v5; // eax

  v2 = 0; /*0x6f1fa7*/
  result = *((_DWORD *)this + 57); /*0x6f1fa9*/
  this->TeamTypeClass_field_3C = 1; /*0x6f1faf*/
  *((_BYTE *)this + 241) = 0; /*0x6f1fb6*/
  this->q03B = 9; /*0x6f1fbc*/
  if ( *(int *)(result + 156) > 0 ) /*0x6f1fcc*/
  {
    v4 = 168; /*0x6f1fcf*/
    do /*0x6f201d*/
    {
      v5 = *(_DWORD *)(result + v4); /*0x6f1fd4*/
      if ( *(_BYTE *)(v5 + 3278) ) /*0x6f1fd7*/
      {
        if ( *(_DWORD *)(v5 + 1504) ) /*0x6f1fdf*/
          *((_BYTE *)this + 241) = 1; /*0x6f1fef*/
        else
          this->TeamTypeClass_field_3C = 0; /*0x6f1fe7*/
      }
      this->q03B = globalHelper_0889F0(*(_DWORD *)(v5 + 1460), this->q03B); /*0x6f2007*/
      result = *((_DWORD *)this + 57); /*0x6f200d*/
      ++v2; /*0x6f2013*/
      v4 += 8; /*0x6f2014*/
    }
    while ( v2 < *(_DWORD *)(result + 156) ); /*0x6f201d*/
  }
  if ( *((_BYTE *)this + 246) ) /*0x6f2020*/
    this->TeamTypeClass_field_3C = 0; /*0x6f2028*/
  return result; /*0x6f202e*/
}



// ==== 0x006F2040  Helper_6F2040  this=-  sig=ida-proto ====
int sub_6F2040()
{
  int result; // eax
  int i; // esi

  result = dword_A8ECB0; /*0x6f2040*/
  for ( i = 0; i < dword_A8ECB0; ++i ) /*0x6f204a*/
  {
    TeamTypeClass::ProcessTaskForce(*((_DWORD *)dword_A8ECA4 + i)); /*0x6f2054*/
    result = dword_A8ECB0; /*0x6f2059*/
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
int TeamTypeClass::GetTypeIdentifier(TeamTypeClass *this)
{
  return 35; /*0x6f20a5*/
}



// ==== 0x006F20B0  TeamTypeClass::GetObjectSize  this=TeamTypeClass  sig=csp ====
int TeamTypeClass::GetObjectSize(TeamTypeClass *this)
{
  return 248; /*0x6f20b5*/
}



// ==== 0x006F20C0  TeamTypeClass::GetAuxField  this=TeamTypeClass  sig=csp ====
int __thiscall TeamTypeClass::GetAuxField(TeamTypeClass *this)
{
  return *((_DWORD *)this + 38); /*0x6f20c6*/
}



// ==== 0x006F20D0  TeamTypeClass::ddtor  this=TeamTypeClass  sig=csp ====
void **__thiscall TeamTypeClass::ddtor(TeamTypeClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  TeamTypeClass *v6; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &TeamTypeClass::`vftable'; /*0x6f20d6*/
  this->? = &TeamTypeClass::`vftable'; /*0x6f20dc*/
  this->? = &TeamTypeClass::`vftable'; /*0x6f20e3*/
  this->? = &TeamTypeClass::`vftable'; /*0x6f20ea*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x6f20f1*/
  v6 = this; /*0x6f2106*/
  v3 = (*(int (__thiscall **)(_BYTE *, TeamTypeClass **))(*(_DWORD *)&stru_A8EB00.?[188] + 16))( /*0x6f210a*/
         &stru_A8EB00.?[188],
         &v6);
  if ( v3 != -1 && v3 < *(int *)&stru_A8EB00.?[204] ) /*0x6f211a*/
  {
    --*(_DWORD *)&stru_A8EB00.?[204]; /*0x6f211f*/
    for ( ; /*0x6f2125*/
          v3 < *(int *)&stru_A8EB00.?[204];
          *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[192] + 4 * v3) )
    {
      ++v3; /*0x6f212d*/
    }
  }
  v6 = this; /*0x6f214f*/
  v4 = (*(int (__thiscall **)(int *, TeamTypeClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x6f2153*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v6);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x6f2163*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x6f2168*/
    for ( ; /*0x6f216e*/
          v4 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v4) )
    {
      ++v4; /*0x6f2176*/
    }
  }
  AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x6f218a*/
  if ( (a2 & 1) != 0 ) /*0x6f2194*/
    __3_YAXPAX_Z(this); /*0x6f2197*/
  return &this->AbstractClass; /*0x6f21a1*/
}



// ==== 0x006F21B0  _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall TeamTypeClass_28::ClearBuffer(
        _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this)
{
  int v2; // eax

  v2 = *(_DWORD *)&this->m_1[3]; /*0x6f21b6*/
  this->m_10 = 0; /*0x6f21b9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6f21c0*/
  {
    __3_YAXPAX_Z((void *)(v2 - 4)); /*0x6f21d1*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6f21d9*/
  }
  BYTE1(this->m_C) = 0; /*0x6f21dc*/
  this->m_8 = 0; /*0x6f21df*/
}



// ==== 0x006F21F0  _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall TeamTypeClass_28::PointerToIndex(
        _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6f21f0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x6f2205*/
  else
    return 0; /*0x6f21f7*/
}



// ==== 0x006F2210  _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::Seek  this=VectorClass  sig=csp ====
_DWORD *__thiscall TeamTypeClass_28::Seek(
        _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this,
        _DWORD *a2,
        int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = *(_DWORD *)&this->m_1[3]; /*0x6f2210*/
  v4 = *(_DWORD *)(v3 + 8 * a3); /*0x6f2217*/
  v5 = v3 + 8 * a3; /*0x6f221a*/
  *a2 = v4; /*0x6f2221*/
  a2[1] = *(_DWORD *)(v5 + 4); /*0x6f2226*/
  return a2; /*0x6f2229*/
}



// ==== 0x006F2230  VectorClass::Team_Helper_6F2230  this=VectorClass  sig=csp ====
_DWORD *__thiscall Team_Helper_6F2230(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x6f2239*/
  this->Capacity = a2; /*0x6f2240*/
  this->IsInitialized = 1; /*0x6f2243*/
  this->IsAllocated = 0; /*0x6f2247*/
  this->vtable0 = &VectorClass<TeamTypeClass const *>::`vftable'; /*0x6f224b*/
  if ( a2 ) /*0x6f2251*/
  {
    if ( a3 ) /*0x6f2259*/
    {
      this->Items = (void *)a3; /*0x6f225b*/
    }
    else
    {
      this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x6f226c*/
      this->IsAllocated = 1; /*0x6f226f*/
    }
  }
  this->vtable0 = &DynamicVectorClass<TeamTypeClass const *>::`vftable'; /*0x6f2273*/
  *((_DWORD *)this + 5) = 10; /*0x6f2279*/
  this->Items = 0; /*0x6f2280*/
  return &this->vtable0; /*0x6f2289*/
}



// ==== 0x006F2290  _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall TeamTypeClass_28::AddRef(
        _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this,
        int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x6f229b*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x6f22a0*/
  {
    v3 = 0; /*0x6f22a2*/
    if ( m_8 <= 0 ) /*0x6f22a6*/
      return 1; /*0x6f22d6*/
    v4 = *(_DWORD *)(a2 + 4); /*0x6f22a8*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x6f22ab*/
    v6 = (_DWORD *)(v4 + 4); /*0x6f22ae*/
    v7 = v4 - (_DWORD)v5; /*0x6f22b1*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *v6 ) /*0x6f22c3*/
    {
      ++v3; /*0x6f22c5*/
      v6 += 2; /*0x6f22c6*/
      v5 += 2; /*0x6f22c9*/
      if ( v3 >= m_8 ) /*0x6f22ce*/
        return 1; /*0x6f22ce*/
    }
  }
  return 0; /*0x6f22d0*/
}



// ==== 0x006F22F0  _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall TeamTypeClass_28::Release(
        _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this,
        int a2,
        int *a3)
{
  int *v4; // ebx
  int *v5; // eax
  int *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // eax

  if ( a2 ) /*0x6f22fc*/
  {
    v4 = a3; /*0x6f2302*/
    LOBYTE(this->m_C) = 0; /*0x6f2306*/
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
    LOBYTE(this->m_C) = 1; /*0x6f2362*/
    if ( v6 ) /*0x6f2366*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6f2371*/
      {
        m_8 = this->m_8; /*0x6f2378*/
        if ( a2 < m_8 ) /*0x6f237d*/
          m_8 = a2; /*0x6f237f*/
        v13 = 0; /*0x6f2381*/
        if ( m_8 > 0 ) /*0x6f2385*/
        {
          do /*0x6f239d*/
          {
            v14 = *(_DWORD *)&this->m_1[3]; /*0x6f2387*/
            ++v13; /*0x6f238a*/
            v6[2 * v13 - 2] = *(_DWORD *)(v14 + 8 * v13 - 8); /*0x6f2391*/
            v6[2 * v13 - 1] = *(_DWORD *)(v14 + 8 * v13 - 4); /*0x6f2399*/
          }
          while ( v13 < m_8 ); /*0x6f239d*/
          v4 = a3; /*0x6f239f*/
        }
        if ( BYTE1(this->m_C) ) /*0x6f23a3*/
        {
          v15 = *(_DWORD *)&this->m_1[3]; /*0x6f23aa*/
          if ( v15 ) /*0x6f23af*/
            __3_YAXPAX_Z((void *)(v15 - 4)); /*0x6f23b9*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6f23c1*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v6; /*0x6f23ca*/
      this->m_8 = a2; /*0x6f23d2*/
      BYTE1(this->m_C) = v4 == 0; /*0x6f23d5*/
      return 1; /*0x6f23db*/
    }
    else
    {
      return 0; /*0x6f236b*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6f23e5*/
    return 1; /*0x6f23eb*/
  }
}



// ==== 0x006F2400  _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall TeamTypeClass_28::ddtor(
        _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this)
{
  int v2; // eax

  v2 = *(_DWORD *)&this->m_1[3]; /*0x6f2406*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6f240d*/
  {
    __3_YAXPAX_Z((void *)(v2 - 4)); /*0x6f241e*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6f2426*/
  }
  BYTE1(this->m_C) = 0; /*0x6f2429*/
  this->m_8 = 0; /*0x6f242c*/
}



// ==== 0x006F2440  _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::Read  this=VectorClass  sig=csp ====
int __thiscall TeamTypeClass_28::Read(
        _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this,
        _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6f2440*/
    return 0; /*0x6f244e*/
  m_8 = this->m_8; /*0x6f2454*/
  result = 0; /*0x6f2457*/
  if ( m_8 <= 0 ) /*0x6f245b*/
    return -1; /*0x6f247c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x6f2461*/
  {
    if ( ++result >= m_8 ) /*0x6f247a*/
      return -1; /*0x6f247a*/
  }
  return result; /*0x6f244b*/
}



// ==== 0x006F2490  _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall TeamTypeClass_28::Write(
        _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6f2490*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 3; /*0x6f24a5*/
  else
    return 0; /*0x6f2497*/
}



// ==== 0x006F24B0  _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall TeamTypeClass_28::SetCapacity(
        _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this,
        int a2,
        int *a3)
{
  int *v4; // ebp
  int *v5; // eax
  int *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v12; // eax
  int v13; // edx
  int *v14; // eax
  int *v15; // ebp
  int v16; // eax

  if ( a2 ) /*0x6f24bc*/
  {
    v4 = a3; /*0x6f24c2*/
    LOBYTE(this->m_C) = 0; /*0x6f24c6*/
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
    LOBYTE(this->m_C) = 1; /*0x6f2523*/
    if ( !v6 ) /*0x6f2527*/
      return 0; /*0x6f25c7*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6f252d*/
    {
      m_8 = this->m_8; /*0x6f2534*/
      if ( a2 < m_8 ) /*0x6f2539*/
        m_8 = a2; /*0x6f253b*/
      v12 = 0; /*0x6f253d*/
      if ( m_8 > 0 ) /*0x6f2541*/
      {
        do /*0x6f2559*/
        {
          v13 = *(_DWORD *)&this->m_1[3]; /*0x6f2543*/
          ++v12; /*0x6f2546*/
          v6[2 * v12 - 2] = *(_DWORD *)(v13 + 8 * v12 - 8); /*0x6f254d*/
          v6[2 * v12 - 1] = *(_DWORD *)(v13 + 8 * v12 - 4); /*0x6f2555*/
        }
        while ( v12 < m_8 ); /*0x6f2559*/
        v4 = a3; /*0x6f255b*/
      }
      if ( BYTE1(this->m_C) ) /*0x6f255f*/
      {
        v14 = *(int **)&this->m_1[3]; /*0x6f2566*/
        if ( v14 ) /*0x6f256b*/
        {
          v15 = v14 - 1; /*0x6f2570*/
          Array::ForEachReverse(v14, 8, *(v14 - 1), (int (__thiscall *)(int))nullsub_240); /*0x6f257c*/
          __3_YAXPAX_Z(v15); /*0x6f2582*/
          v4 = a3; /*0x6f2587*/
        }
        *(_DWORD *)&this->m_1[3] = 0; /*0x6f258e*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v6; /*0x6f2597*/
    this->m_8 = a2; /*0x6f259f*/
    BYTE1(this->m_C) = v4 == 0; /*0x6f25a2*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6f25ab*/
  }
  v16 = this->m_8; /*0x6f25ae*/
  if ( v16 < this->m_10 ) /*0x6f25b6*/
    this->m_10 = v16; /*0x6f25b8*/
  return 1; /*0x6f25bb*/
}



// ==== 0x006F25D0  nullsub_240  this=-  sig=ida-proto ====
void __thiscall nullsub_240(void *this)
{
  ; /*0x6f25d0*/
}



// ==== 0x006F25E0  ObjectClass::Team_Helper_6F25E0  this=ObjectClass  sig=csp ====
char __thiscall Team_Helper_6F25E0(ObjectClass *this, _DWORD *a2)
{
  void *vtable2; // ecx
  int abstractFlags; // eax
  int uniqueId; // eax
  _DWORD *vtable1; // edx

  vtable2 = this->?; /*0x6f25e3*/
  if ( this->? >= (int)vtable2 ) /*0x6f25eb*/
  {
    if ( !BYTE1(this->?) && vtable2 ) /*0x6f25f6*/
      return 0; /*0x6f25f6*/
    abstractFlags = this->?; /*0x6f25f8*/
    if ( abstractFlags <= 0 /*0x6f2608*/
      || !(*((unsigned __int8 (__thiscall **)(ObjectClass *, int, _DWORD))this->AbstractClass + 2))(
            this,
            (int)vtable2 + abstractFlags,
            0) )
    {
      return 0; /*0x6f260f*/
    }
  }
  uniqueId = this->?; /*0x6f2615*/
  vtable1 = this->?; /*0x6f2618*/
  this->? = uniqueId + 1; /*0x6f261e*/
  vtable1[2 * uniqueId] = *a2; /*0x6f2627*/
  vtable1[2 * uniqueId + 1] = a2[1]; /*0x6f262e*/
  return 1; /*0x6f2611*/
}



// ==== 0x006F2640  _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::FindItem  this=DynamicVector  sig=csp ====
int __thiscall TeamTypeClass_28::FindItem(
        _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x6f2640*/
  result = 0; /*0x6f2645*/
  if ( m_10 <= 0 ) /*0x6f264b*/
    return -1; /*0x6f266c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1]; i += 2 ) /*0x6f2651*/
  {
    if ( ++result >= m_10 ) /*0x6f266a*/
      return -1; /*0x6f266a*/
  }
  return result; /*0x6f266f*/
}



// ==== 0x006F2680  _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall TeamTypeClass_28::QueryInterface(
        _VectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this,
        char a2)
{
  int v3; // eax

  v3 = *(_DWORD *)&this->m_1[3]; /*0x6f2683*/
  *(_DWORD *)this->__pad_0 = &VectorClass<DiscreteDistributionClass<AITriggerTypeClass>::DistributionObject<AITriggerTypeClass *>>::`vftable'; /*0x6f2686*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6f2690*/
  {
    __3_YAXPAX_Z((void *)(v3 - 4)); /*0x6f26a3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6f26ab*/
  }
  BYTE1(this->m_C) = 0; /*0x6f26b6*/
  this->m_8 = 0; /*0x6f26bc*/
  if ( (a2 & 1) != 0 ) /*0x6f26c3*/
    __3_YAXPAX_Z(this); /*0x6f26c6*/
  return this->__pad_0; /*0x6f26d0*/
}



// ==== 0x006F26E0  ObjectClass::Team_Helper_6F26E0  this=ObjectClass  sig=csp ====
char *__thiscall sub_6F26E0(char *Block, char a2)
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
_DWORD *__thiscall TeamTypeClass_28::Constructor(
        _DynamicVectorClass_V_DistributionObject_PAVAITriggerTypeClass_DiscreteDistributionClass_VAITriggerTypeClass *this,
        char a2)
{
  int v3; // eax

  v3 = *(_DWORD *)&this->m_1[3]; /*0x6f2723*/
  *(_DWORD *)this->__pad_0 = &VectorClass<DiscreteDistributionClass<AITriggerTypeClass>::DistributionObject<AITriggerTypeClass *>>::`vftable'; /*0x6f2726*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6f2730*/
  {
    __3_YAXPAX_Z((void *)(v3 - 4)); /*0x6f2743*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6f274b*/
  }
  BYTE1(this->m_C) = 0; /*0x6f2756*/
  this->m_8 = 0; /*0x6f275c*/
  if ( (a2 & 1) != 0 ) /*0x6f2763*/
    __3_YAXPAX_Z(this); /*0x6f2766*/
  return this->__pad_0; /*0x6f2770*/
}



// ==== 0x006F2780  ObjectClass::Team_Helper_6F2780  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Team_Helper_6F2780(ObjectClass *this, _DWORD *a2)
{
  void *v3; // eax
  void *v4; // eax
  void *vtable2; // ecx
  int v6; // eax

  if ( this == (ObjectClass *)a2 ) /*0x6f278a*/
    return &this->AbstractClass; /*0x6f278a*/
  (*((void (__thiscall **)(ObjectClass *))this->AbstractClass + 3))(this); /*0x6f278e*/
  v3 = (void *)a2[2]; /*0x6f2791*/
  this->? = v3; /*0x6f2796*/
  if ( !v3 ) /*0x6f2799*/
  {
    this->? = 0; /*0x6f27da*/
    BYTE1(this->?) = 0; /*0x6f27e1*/
    return &this->AbstractClass; /*0x6f27e5*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * (_DWORD)v3); /*0x6f27a3*/
  this->? = v4; /*0x6f27ab*/
  if ( !v4 ) /*0x6f27b0*/
    return &this->AbstractClass; /*0x6f27b0*/
  vtable2 = this->?; /*0x6f27b2*/
  v6 = 0; /*0x6f27b5*/
  BYTE1(this->?) = 1; /*0x6f27b9*/
  if ( (int)vtable2 <= 0 ) /*0x6f27bd*/
    return &this->AbstractClass; /*0x6f27bd*/
  do /*0x6f27d1*/
  {
    *((_DWORD *)this->? + v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x6f27c8*/
    ++v6; /*0x6f27ce*/
  }
  while ( v6 < (int)this->? ); /*0x6f27d1*/
  return &this->AbstractClass; /*0x6f27d5*/
}



// ==== 0x006F27F0  VectorClass::Team_Helper_6F27F0  this=VectorClass  sig=csp ====
_DWORD *__thiscall Team_Helper_6F27F0(VectorClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  int *v7; // eax
  void *v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx

  this->Items = 0; /*0x6f27fa*/
  this->Capacity = a2; /*0x6f2801*/
  this->IsInitialized = 1; /*0x6f2804*/
  this->IsAllocated = 0; /*0x6f2808*/
  this->vtable0 = &VectorClass<DiscreteDistributionClass<AITriggerTypeClass>::DistributionObject<AITriggerTypeClass *>>::`vftable'; /*0x6f280c*/
  if ( !a2 ) /*0x6f2812*/
    return &this->vtable0; /*0x6f2812*/
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
    return &this->vtable0; /*0x6f283f*/
  }
  v7 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x6f284a*/
  if ( !v7 ) /*0x6f2854*/
  {
    this->IsAllocated = 1; /*0x6f2884*/
    this->Items = 0; /*0x6f2888*/
    return &this->vtable0; /*0x6f288b*/
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
  this->IsAllocated = 1; /*0x6f2874*/
  this->Items = v8; /*0x6f2878*/
  return &this->vtable0; /*0x6f283d*/
}



// ==== 0x006F28A0  sub_6F28A0  this=-  sig=ida-proto ====
void sub_6F28A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6f28ac*/
  dbl_B0EA58 = Math::Sqrt(v0 + v0); /*0x6f28be*/
}



// ==== 0x006F28D0  sub_6F28D0  this=-  sig=ida-proto ====
void sub_6F28D0()
{
  dbl_B0EB28 = dbl_B0EA58 / 60.0; /*0x6f28dc*/
}



// ==== 0x006F28F0  sub_6F28F0  this=-  sig=ida-proto ====
void sub_6F28F0()
{
  dbl_B0EB10 = 1.0 / dbl_B0EB28; /*0x6f28fc*/
}



// ==== 0x006F2910  sub_6F2910  this=-  sig=ida-proto ====
void sub_6F2910()
{
  dbl_B0EB08 = 0.0174532925199433 * 45.0; /*0x6f291c*/
}



// ==== 0x006F2930  sub_6F2930  this=-  sig=ida-proto ====
void sub_6F2930()
{
  dbl_B0EA60 = 0.0174532925199433 * 60.0; /*0x6f293c*/
}



// ==== 0x006F2950  sub_6F2950  this=-  sig=ida-proto ====
void sub_6F2950()
{
  dbl_B0EA30 = 0.0174532925199433 * 90.0; /*0x6f295c*/
}



// ==== 0x006F2970  sub_6F2970  this=-  sig=ida-proto ====
__int64 sub_6F2970()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0EA30 - dbl_B0EA60); /*0x6f2982*/
  result = Math::RoundToInt(v0 * dbl_B0EA58 * 0.5); /*0x6f2996*/
  dword_B0EB34 = result; /*0x6f299b*/
  return result; /*0x6f29a0*/
}



// ==== 0x006F29B0  sub_6F29B0  this=-  sig=ida-proto ====
void sub_6F29B0()
{
  dbl_B0EA68 = Math::ArcTan((double)dword_B0EB34 * 0.00390625); /*0x6f29c7*/
}



// ==== 0x006F29E0  sub_6F29E0  this=-  sig=ida-proto ====
void sub_6F29E0()
{
  dbl_B0EAA0 = Math::ArcTan((double)(2 * dword_B0EB34) / dbl_B0EA58); /*0x6f2a02*/
}



// ==== 0x006F2A10  sub_6F2A10  this=-  sig=ida-proto ====
__int64 sub_6F2A10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0EB34) + 0.5); /*0x6f2a2b*/
  dword_B0EB24 = result; /*0x6f2a30*/
  return result; /*0x6f2a36*/
}



// ==== 0x006F2A40  sub_6F2A40  this=-  sig=ida-proto ====
int sub_6F2A40()
{
  dword_B0EA50 = 0; /*0x6f2a42*/
  return 0; /*0x6f2a4e*/
}



// ==== 0x006F2A50  sub_6F2A50  this=-  sig=ida-proto ====
int sub_6F2A50()
{
  dword_B0EA90 = 0; /*0x6f2a52*/
  dword_B0EA94 = 0; /*0x6f2a57*/
  dword_B0EA98 = 0; /*0x6f2a5c*/
  return 0; /*0x6f2a61*/
}



// ==== 0x006F2A70  sub_6F2A70  this=-  sig=ida-proto ====
int sub_6F2A70()
{
  dword_B0EB20 = 0; /*0x6f2a75*/
  dword_B0EB18 = 128; /*0x6f2a7f*/
  dword_B0EB1C = 128; /*0x6f2a84*/
  return 128; /*0x6f2a89*/
}



// ==== 0x006F2A90  sub_6F2A90  this=-  sig=ida-proto ====
int sub_6F2A90()
{
  dword_B0EA40 = 0; /*0x6f2a92*/
  dword_B0EA44 = 0; /*0x6f2a97*/
  dword_B0EA48 = 0; /*0x6f2a9c*/
  dword_B0EA4C = 0; /*0x6f2aa1*/
  return 0; /*0x6f2aa6*/
}



// ==== 0x006F2AB0  sub_6F2AB0  this=-  sig=ida-proto ====
int sub_6F2AB0()
{
  dword_B0EA80 = (int)dword_A8ED84; /*0x6f2aba*/
  dword_B0EA88 = 0; /*0x6f2abf*/
  return atexit(sub_6F2AD0); /*0x6f2acf*/
}



// ==== 0x006F2AD0  sub_6F2AD0  this=-  sig=ida-proto ====
void __cdecl sub_6F2AD0()
{
  if ( (byte_B0EA38 & 1) == 0 ) /*0x6f2ada*/
    byte_B0EA38 |= 1u; /*0x6f2ade*/
}



// ==== 0x006F2AF0  sub_6F2AF0  this=-  sig=ida-proto ====
int sub_6F2AF0()
{
  dword_B0EA70 = Timer::GetTicks(); /*0x6f2aff*/
  dword_B0EA78 = 0; /*0x6f2b04*/
  return atexit(sub_6F2B20); /*0x6f2b14*/
}



// ==== 0x006F2B20  sub_6F2B20  this=-  sig=ida-proto ====
void __cdecl sub_6F2B20()
{
  if ( (byte_B0EA38 & 2) == 0 ) /*0x6f2b2a*/
    byte_B0EA38 |= 2u; /*0x6f2b2e*/
}



// ==== 0x006F2B40  TechnoClass::TechnoClass  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::TechnoClass(TechnoClass *this, int a2)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax

  RadioClass::Release((RadioClass *)this); /*0x6f2b46*/
  this->flashing[0] = 0; /*0x6f2b52*/
  LOBYTE(this->flashing[1]) = 0; /*0x6f2b58*/
  this->animation[0] = 0; /*0x6f2b5e*/
  LOBYTE(this->animation[1]) = 0; /*0x6f2b64*/
  v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2b6a*/
  this->animation[4] = 0; /*0x6f2b6f*/
  this->animation[2] = v3; /*0x6f2b75*/
  this->animation[5] = 0; /*0x6f2b7b*/
  this->animation[6] = 1; /*0x6f2b81*/
  this->passengers[0] = 0; /*0x6f2b87*/
  this->passengers[1] = 0; /*0x6f2b8d*/
  this->transporter = 0; /*0x6f2b93*/
  this->turretChargeTimer = -100; /*0x6f2b9c*/
  this->currentTurretNumber = -1; /*0x6f2ba6*/
  this->secondaryTurretIndex = -1; /*0x6f2bac*/
  this->behindAnim = 0; /*0x6f2bb2*/
  this->deployAnim = 0; /*0x6f2bb8*/
  this->inAirFlag = 0; /*0x6f2bbe*/
  this->currentWeaponSlot = 0; /*0x6f2bc4*/
  this->currentRank = -1; /*0x6f2bca*/
  this->gattlingStage = 0; /*0x6f2bd0*/
  this->gattlingValue = 0; /*0x6f2bd6*/
  this->ammoReloadTimer = 0; /*0x6f2be2*/
  unknown_libname_35((ObjectClass *)this->veterancy); /*0x6f2be8*/
  this->armorMultiplier[0] = 0; /*0x6f2bf2*/
  this->armorMultiplier[1] = 1072693248; /*0x6f2bf8*/
  this->firepowerMultiplier[0] = 0; /*0x6f2bfe*/
  this->firepowerMultiplier[1] = 1072693248; /*0x6f2c04*/
  this->idleActionTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2c10*/
  this->idleActionTimer[2] = 0; /*0x6f2c16*/
  v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2c1c*/
  this->radarFlashTimer[2] = 0; /*0x6f2c22*/
  this->radarFlashTimer[0] = v4; /*0x6f2c28*/
  this->targetingTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2c33*/
  this->targetingTimer[2] = 45; /*0x6f2c39*/
  v5 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2c43*/
  this->ironCurtainTimer[1] = 0; /*0x6f2c49*/
  *(_DWORD *)this->__pad_18C = v5; /*0x6f2c4f*/
  this->ironCurtainTimer[2] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2c5b*/
  this->ironTintTimer[1] = 0; /*0x6f2c61*/
  this->ironTintTimer[2] = 10; /*0x6f2c67*/
  this->ironTintStage = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2c76*/
  this->airstrikeTimer[1] = 0; /*0x6f2c7c*/
  v6 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2c82*/
  this->airstrikeTintTimer[1] = 0; /*0x6f2c88*/
  this->airstrikeTimer[2] = v6; /*0x6f2c8e*/
  *(_DWORD *)this->__pad_1C4 = 0; /*0x6f2c94*/
  this->__pad_1C4[4] = 0; /*0x6f2c9a*/
  this->drainTarget = 0; /*0x6f2ca0*/
  this->drainingMe = 0; /*0x6f2ca6*/
  this->drainAnim = 0; /*0x6f2cac*/
  this->isDisguisedFlag = 0; /*0x6f2cb2*/
  this->disguiseCreationFrame = 0; /*0x6f2cb8*/
  v7 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2cbe*/
  this->infantryBlinkTimer[2] = 0; /*0x6f2cc4*/
  this->infantryBlinkTimer[0] = v7; /*0x6f2cca*/
  this->disguiseBlinkTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2cd5*/
  this->disguiseBlinkTimer[2] = 0; /*0x6f2cdb*/
  this->isTargetedByChrono = 0; /*0x6f2ce1*/
  this->reloadTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2ced*/
  this->reloadTimer[2] = 0; /*0x6f2cf3*/
  this->currentBurstCount = 0; /*0x6f2cf9*/
  this->currentBarrelIndex = 0; /*0x6f2cff*/
  this->displayProductionTo[0] = 0; /*0x6f2d05*/
  this->controlGroup = -1; /*0x6f2d0f*/
  this->focus = 0; /*0x6f2d15*/
  this->owner = (HouseClass *)a2; /*0x6f2d1b*/
  this->cloakState = 0; /*0x6f2d21*/
  this->cloakProgress[0] = 0; /*0x6f2d27*/
  LOBYTE(this->cloakProgress[1]) = 0; /*0x6f2d2d*/
  this->cloakProgress[2] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2d38*/
  this->cloakProgress[4] = 0; /*0x6f2d3e*/
  this->cloakProgress[5] = 0; /*0x6f2d44*/
  this->cloakProgress[6] = 1; /*0x6f2d4a*/
  v8 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2d50*/
  this->cloakDelayTimer[2] = 0; /*0x6f2d56*/
  this->cloakDelayTimer[0] = v8; /*0x6f2d5c*/
  this->warpFactor = 0.0; /*0x6f2d62*/
  this->isChronosphereImmune = 0; /*0x6f2d68*/
  this->lastSightCoords[0] = g_BuildingLoadQueue_Array.?[3]; /*0x6f2d79*/
  this->lastSightCoords[1] = g_BuildingLoadQueue_Array.?[4]; /*0x6f2d85*/
  this->lastSightCoords[2] = g_BuildingLoadQueue_Array.?[5]; /*0x6f2d93*/
  this->lastSightRange = 0; /*0x6f2d96*/
  this->lastSightHeight = 0; /*0x6f2d9c*/
  this->gapSuperCharged = 0; /*0x6f2da2*/
  this->isGeneratingGap = 0; /*0x6f2da8*/
  this->gapRadius = 0; /*0x6f2dae*/
  this->isBeingWarpedOut = 0; /*0x6f2db4*/
  this->isWarpingOut = 0; /*0x6f2dba*/
  this->isWarpEffectActive = 0; /*0x6f2dc0*/
  this->temporalUsing = 0; /*0x6f2dc6*/
  this->temporalTargetingMe = 0; /*0x6f2dcc*/
  this->isImmobilized = 0; /*0x6f2dd2*/
  this->owningHouseIndex0 = 0; /*0x6f2dd8*/
  this->chronoLockRemaining = 0; /*0x6f2dde*/
  this->chronoDestCoords[0] = g_BuildingLoadQueue_Array.?[3]; /*0x6f2dea*/
  this->chronoDestCoords[1] = g_BuildingLoadQueue_Array.?[4]; /*0x6f2df1*/
  v9 = g_BuildingLoadQueue_Array.?[5]; /*0x6f2df4*/
  this->bunkerLinkedUnit = 0; /*0x6f2dfa*/
  this->pitchAngle = 0.0; /*0x6f2e00*/
  this->chronoDestCoords[2] = v9; /*0x6f2e06*/
  this->airstrike = 0; /*0x6f2e09*/
  this->isBerserk = 0; /*0x6f2e0f*/
  this->isBerserk_duration_left = 0; /*0x6f2e15*/
  this->sprayOffsetIndex = 0; /*0x6f2e1b*/
  this->isUncrushable = 0; /*0x6f2e21*/
  this->rockerLinkedUnit = 0; /*0x6f2e27*/
  this->locomotorTarget = 0; /*0x6f2e2d*/
  this->locomotorSource = 0; /*0x6f2e33*/
  this->target = 0; /*0x6f2e39*/
  this->lastTarget = 0; /*0x6f2e3f*/
  this->captureManager = 0; /*0x6f2e45*/
  this->mindControlledBy = 0; /*0x6f2e4b*/
  this->mindControlledBy_a_unit = 0; /*0x6f2e51*/
  this->mindControlRingAnim = 0; /*0x6f2e57*/
  this->mindControlledBy_house = 0; /*0x6f2e5d*/
  this->spawnManager = 0; /*0x6f2e63*/
  this->spawnOwner = 0; /*0x6f2e69*/
  this->slaveManager = 0; /*0x6f2e6f*/
  this->slaveOwner = 0; /*0x6f2e75*/
  this->originalOwnerHouse = 0; /*0x6f2e7b*/
  this->diskLaserTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2e86*/
  this->diskLaserTimer[2] = 0; /*0x6f2e8c*/
  this->diskLaserChargeState = 0; /*0x6f2e98*/
  this->ammo = -1; /*0x6f2e9e*/
  this->unitValue = 0; /*0x6f2ea4*/
  this->damageParticles_2 = 0; /*0x6f2eaa*/
  this->railgunParticles_2 = 0; /*0x6f2eb0*/
  this->auxParticles1 = 0; /*0x6f2eb6*/
  this->auxParticles2 = 0; /*0x6f2ebc*/
  this->firingParticles = 0; /*0x6f2ec2*/
  this->waveEffect = (WaveClass *)-1; /*0x6f2ec8*/
  Delegate::GetField((Delegate *)&this->tiltSidewaysAngle); /*0x6f2ece*/
  TechnoClass::checkCloakState((TechnoClass *)this->storedTiberium); /*0x6f2ed9*/
  FrameSnapshot::InitMax((FrameSnapshot *)this->barrelFacing, 3); /*0x6f2ee6*/
  FrameSnapshot::Init((FrameSnapshot *)this->primaryFacing); /*0x6f2ef1*/
  FrameSnapshot::Init((FrameSnapshot *)this->secondaryFacing); /*0x6f2efc*/
  this->currentBurstIndex = 0; /*0x6f2f01*/
  this->targetLaserTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f2f0d*/
  this->targetLaserTimer[2] = 0; /*0x6f2f13*/
  *(_WORD *)this->unknown_3CA = 0; /*0x6f2f1e*/
  this->countedAsOwned = 0; /*0x6f2f25*/
  this->isSinking = 0; /*0x6f2f2b*/
  this->wasAlreadySinking = 0; /*0x6f2f31*/
  this->isReceivingDamageEffect = 0; /*0x6f2f37*/
  this->isUseless = 0; /*0x6f2f3d*/
  this->hasBeenAttacked = 0; /*0x6f2f43*/
  this->isCloakableFlag = 0; /*0x6f2f49*/
  this->isPrimaryFactory = 0; /*0x6f2f4f*/
  this->isALoaner = 0; /*0x6f2f55*/
  this->isInPlayfield = 0; /*0x6f2f5b*/
  this->turretRecoil[0] = 2; /*0x6f2f61*/
  this->turretRecoil[1] = 1; /*0x6f2f67*/
  this->turretRecoil[2] = 1; /*0x6f2f6d*/
  this->turretRecoil[3] = 1; /*0x6f2f73*/
  this->turretRecoil[5] = 0; /*0x6f2f79*/
  this->turretRecoil[6] = 0; /*0x6f2f7f*/
  this->barrelRecoil[0] = 2; /*0x6f2f85*/
  this->barrelRecoil[1] = 1; /*0x6f2f8b*/
  this->barrelRecoil[2] = 1; /*0x6f2f91*/
  this->barrelRecoil[3] = 1; /*0x6f2f97*/
  this->barrelRecoil[5] = 0; /*0x6f2f9d*/
  this->barrelRecoil[6] = 0; /*0x6f2fa3*/
  this->isTether = 0; /*0x6f2fa9*/
  this->isAlternativeTether = 0; /*0x6f2faf*/
  this->isOwnedByCurrentPlayer = 0; /*0x6f2fb5*/
  this->isDiscoveredByCurrentPlayer = 0; /*0x6f2fbb*/
  this->isDiscoveredByComputer = 0; /*0x6f2fc1*/
  this->isSelectedByPlayer = 0; /*0x6f2fc7*/
  this->isUnderCursor = 0; /*0x6f2fcd*/
  this->isCommandLineTarget = 0; /*0x6f2fd3*/
  this->sightRangeBonus = 0; /*0x6f2fd9*/
  this->isRecruitableByAlly = 1; /*0x6f2fdf*/
  this->isRecruitableByEnemy = 1; /*0x6f2fe6*/
  this->isRadarTracked = 0; /*0x6f2fed*/
  this->isOnCarryall = 0; /*0x6f2ff3*/
  this->isCrashing = 0; /*0x6f2ff9*/
  this->wasAlreadyCrashing = 0; /*0x6f2fff*/
  this->isBeingManipulated = 0; /*0x6f3005*/
  this->manipulatedByUnit = 0; /*0x6f300b*/
  this->chronoWarpedByHouse = 0; /*0x6f3011*/
  this->isChronoImmuneFlag = 0; /*0x6f3017*/
  this->isMouseHovering = 0; /*0x6f301d*/
  this->shouldBeReselectOnUnlimbo = 0; /*0x6f3023*/
  this->previousTeam = 0; /*0x6f3029*/
  this->isCountedAsOwned_special = 0; /*0x6f302f*/
  this->isAbsorbed = 0; /*0x6f3035*/
  this->isGrindingInProgress = 0; /*0x6f303b*/
  this->grindingAnimHandle = 0; /*0x6f3046*/
  this->currentTargetThreatValues[1] = 0; /*0x6f3051*/
  this->currentTargetThreatValues[2] = 0; /*0x6f3057*/
  LOBYTE(this->currentTargetThreatValues[3]) = 1; /*0x6f305d*/
  BYTE1(this->currentTargetThreatValues[3]) = 0; /*0x6f3064*/
  this->currentTargetThreatValues[0] = (int)&DynamicVectorClass<int>::`vftable'; /*0x6f306a*/
  this->currentTargetThreatValues[5] = 10; /*0x6f3074*/
  this->currentTargetThreatValues[4] = 0; /*0x6f307a*/
  this->currentTargets[1] = 0; /*0x6f3080*/
  this->currentTargets[2] = 0; /*0x6f3086*/
  LOBYTE(this->currentTargets[3]) = 1; /*0x6f308c*/
  BYTE1(this->currentTargets[3]) = 0; /*0x6f3093*/
  this->currentTargets[0] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x6f3099*/
  this->currentTargets[5] = 10; /*0x6f309f*/
  this->currentTargets[4] = 0; /*0x6f30a5*/
  this->attackedTargets[1] = 0; /*0x6f30ab*/
  this->attackedTargets[2] = 0; /*0x6f30b1*/
  LOBYTE(this->attackedTargets[3]) = 1; /*0x6f30b7*/
  BYTE1(this->attackedTargets[3]) = 0; /*0x6f30be*/
  this->attackedTargets[0] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x6f30c4*/
  this->attackedTargets[5] = 10; /*0x6f30ca*/
  this->attackedTargets[4] = 0; /*0x6f30d0*/
  this->isTurretRotateSoundPlaying = 1; /*0x6f30d6*/
  this->turretIsRotating = 0; /*0x6f30dc*/
  this->isGattlingSoundPlaying = 0; /*0x6f30e2*/
  this->unknown_4BC = 0; /*0x6f30e8*/
  this->isUnusedGattlingSoundPlaying = 0; /*0x6f30ee*/
  this->unknown_4D8 = 0; /*0x6f30f4*/
  this->unknown_bool_4F8 = 0; /*0x6f30fa*/
  this->unknown_4FC = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f3106*/
  this->queueUpToEnter = 0; /*0x6f310c*/
  this->empLockRemaining = 0; /*0x6f3112*/
  this->firingRadBeam = 0; /*0x6f3118*/
  this->planningToken = 0; /*0x6f311e*/
  this->disguiseAsType = 0; /*0x6f3124*/
  this->disguisedAsHouse = 0; /*0x6f312a*/
  this->RadioClass = &TechnoClass::`vftable'; /*0x6f3130*/
  this->? = &TechnoClass::`vftable'; /*0x6f3136*/
  this->? = &TechnoClass::`vftable'; /*0x6f313d*/
  this->? = &off_7F4934; /*0x6f314a*/
  AudioController::Init((AudioController *)this->turretRotateSoundController); /*0x6f3151*/
  AudioController::Init((AudioController *)this->gattlingSoundController); /*0x6f315c*/
  AudioController::Init((AudioController *)this->unusedGattlingSoundController); /*0x6f3167*/
  AudioController::Init((AudioController *)this->queuedVoiceSoundController); /*0x6f3172*/
  this->queuedVoiceIndex = -1; /*0x6f3177*/
  this->unknown_4F4 = -1; /*0x6f317d*/
  if ( *(int *)&stru_A8EB00.?[164] < *(int *)&stru_A8EB00.?[156] /*0x6f31b6*/
    || (stru_A8EB00.?[161] || !*(_DWORD *)&stru_A8EB00.?[156])
    && *(int *)&stru_A8EB00.?[168] > 0
    && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&stru_A8EB00.?[148] + 8))(
         &stru_A8EB00.?[148],
         *(_DWORD *)&stru_A8EB00.?[168] + *(_DWORD *)&stru_A8EB00.?[156],
         0) )
  {
    v10 = (*(_DWORD *)&stru_A8EB00.?[164])++; /*0x6f31c3*/
    *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v10) = this; /*0x6f31d2*/
  }
  if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E88[16] < *(int *)&g_BuildingLoadQueue_Array.__pad_E88[8] /*0x6f3209*/
    || (g_BuildingLoadQueue_Array.__pad_E88[13] || !*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E88[8])
    && *(int *)&g_BuildingLoadQueue_Array.__pad_E88[20] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E88 + 8))(
         g_BuildingLoadQueue_Array.__pad_E88,
         *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E88[20] + *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E88[8],
         0) )
  {
    v11 = (*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E88[16])++; /*0x6f3216*/
    *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E88[4] + 4 * v11) = this; /*0x6f3225*/
  }
  LOBYTE(this->?) |= 1u; /*0x6f3237*/
  this->initialOwner = (HouseClass *)a2; /*0x6f3241*/
  memset(&this->fireParticles, 0, 0x20u); /*0x6f3247*/
  *(_WORD *)this->unknown_short_3C8 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x6f3259*/
  return &this->RadioClass; /*0x6f3262*/
}



// ==== 0x006F3270  ObjectClass::Vt34Thunk  this=TechnoClass  sig=csp ====
int __thiscall ObjectClass::Vt34Thunk(ObjectClass *this)
{
  return (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 34))(this);
}



// ==== 0x006F3280  TechnoClass::IsNotAircraftOrBuilding  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsNotAircraftOrBuilding(TechnoClass *this)
{
  int result; // eax

  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 97))(this); /*0x6f3285*/
  LOBYTE(result) = result /*0x6f32c5*/
                && (result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 97))(this), result != 6)
                && (result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 97))(this), result != 16)
                && (result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this),
                    !*(_BYTE *)(result + 3220));
  return result; /*0x6f32c3*/
}



// ==== 0x006F32D0  TechnoClass::CanInitiateSell  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CanInitiateSell(TechnoClass *this)
{
  int result; // eax

  result = this->?; /*0x6f32d3*/
  if ( result > 0 /*0x6f330c*/
    && !this->?
    && this->isInPlayfield
    && (result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this), result != 6)
    && this->isDiscoveredByCurrentPlayer
    && (result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this), *(_BYTE *)(result + 560)) )
  {
    result = House::IsHumanPlayer((House *)this->owner); /*0x6f331c*/
    LOBYTE(result) = (_BYTE)result != 0; /*0x6f3323*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6f3328*/
  }
  return result; /*0x6f3326*/
}



// ==== 0x006F3330  TechnoClass::SelectWeapon  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::SelectWeapon(TechnoClass *this)
{
  HouseClass *v2; // eax
  int result; // eax
  int v4; // edi
  int v5; // ebx
  _BYTE *v6; // ebp
  int gattlingStage; // esi
  int v8; // eax
  int v9; // eax
  bool v10; // bl
  _DWORD *v11; // [esp+1Ch] [ebp+4h]

  v2 = (HouseClass *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6f333b*/
  if ( (unsigned __int8)HouseClass::HasPower(v2)
    && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3285) )
  {
    return this->currentWeaponSlot != -1 ? this->currentWeaponSlot : 0;
  }
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 256))(this) ) /*0x6f337d*/
    return 0; /*0x6f337d*/
  v4 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, 1); /*0x6f3397*/
  if ( !v4 ) /*0x6f339f*/
    return 0; /*0x6f339f*/
  v5 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 254))(this, 0); /*0x6f33b1*/
  if ( !v5 || *(_BYTE *)(v4 + 310) || !v11 ) /*0x6f33d3*/
    return 0; /*0x6f33d3*/
  if ( this->? && *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3408) != -1 ) /*0x6f33f4*/
    return *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3408); /*0x6f340d*/
  v6 = (v11[5] & 1) != 0 ? (_BYTE *)v11 : 0;
  if ( !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3285) )
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
        && !this->drainTarget
        && !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)v6) )
      {
        return 1; /*0x6f35a5*/
      }
      if ( *(_BYTE *)(v4 + 336) && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 97))(this) == 16 ) /*0x6f35c3*/
        return 1; /*0x6f35d1*/
      if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6 && *((_BYTE *)this + 1633) ) /*0x6f35e0*/
        return 1; /*0x6f35f6*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) == 6 /*0x6f362f*/
        && (unsigned __int8)Object::IsAlliedWithObjectSimpleHouse((Object *)this->owner, v11)
        && *(_BYTE *)(*(_DWORD *)(v4 + 172) + 344)
        && *(_BYTE *)(v11[328] + 5493) )
      {
        return 1; /*0x6f3645*/
      }
      if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 2 && *((_BYTE *)this + 1738) ) /*0x6f3658*/
        return 1; /*0x6f366e*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v11 + 44))(v11) == 11 /*0x6f36ca*/
        && (v11[59] != 2 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v11 + 80))(v11)
         || (v11[80] & 0x100) != 0
         && *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3278))
        && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v11 + 84))(v11)
        && *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1540) == 2 )
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
          result = (*((int (__thiscall **)(TechnoClass *, _DWORD *))this->RadioClass + 186))(this, v11); /*0x6f37a2*/
          if ( result != -1 ) /*0x6f37ab*/
            return result; /*0x6f37ab*/
          return 0; /*0x6f37ab*/
        }
        if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6) /*0x6f37d6*/
          && *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1540) == 2 )
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
  gattlingStage = this->gattlingStage; /*0x6f3436*/
  if ( *(_BYTE *)(*(_DWORD *)(v4 + 160) + 676) /*0x6f3455*/
    && v6
    && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 84))(v6) )
  {
    return 2 * gattlingStage + 1; /*0x6f345c*/
  }
  else
  {
    return 2 * gattlingStage; /*0x6f346a*/
  }
}



// ==== 0x006F3820  TechnoClass::CanTargetHouse  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CanTargetHouse(TechnoClass *this)
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
  switch ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1536) ) /*0x6f38a3*/
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
BOOL __thiscall TechnoClass::GetCrewCount(TechnoClass *this)
{
  return *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3277) != 0; /*0x6f3967*/
}



// ==== 0x006F3970  TechnoClass::GetValue  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetValue(TechnoClass *this, int a2)
{
  int v2; // edi
  int v4; // ebx
  HouseClass *v5; // eax
  int *v6; // eax
  int result; // eax
  int v8; // edi
  int v9; // edi
  int v10; // edi

  v2 = 0; /*0x6f3977*/
  if ( a2 == -1 ) /*0x6f397e*/
  {
    v4 = 0; /*0x6f3986*/
    v5 = (HouseClass *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6f3988*/
    if ( !(unsigned __int8)HouseClass::HasPower(v5) /*0x6f39a3*/
      || *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3285) )
    {
      if ( *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 254))(this, 0) ) /*0x6f3a00*/
      {
        v8 = *(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 254))(this, 0) /*0x6f3a17*/
                       + 164);
        v4 = 1; /*0x6f3a27*/
        v2 = *(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 254))(this, 0) /*0x6f3a2c*/
                       + 152)
           + v8;
      }
      if ( *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, 1) ) /*0x6f3a3e*/
      {
        v9 = *(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, 1) + 164) /*0x6f3a5b*/
           + v2;
        v2 = *(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, 1) + 152) /*0x6f3a6d*/
           + v9;
        ++v4; /*0x6f3a6f*/
      }
      if ( v4 <= 0 ) /*0x6f3a72*/
        return 0; /*0x6f3a72*/
      return v2 / v4; /*0x6f3a7c*/
    }
    else
    {
      v6 = (int *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, this->currentWeaponSlot); /*0x6f39b8*/
      if ( !v6 ) /*0x6f39c0*/
        return 0; /*0x6f39c7*/
      result = *v6; /*0x6f39ca*/
      if ( result ) /*0x6f39ce*/
        return *(_DWORD *)(result + 152) + *(_DWORD *)(result + 164); /*0x6f39ed*/
    }
  }
  else
  {
    if ( *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, a2) ) /*0x6f3a8e*/
    {
      v10 = *(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, a2) + 164); /*0x6f3aa3*/
      return *(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, a2) + 152) /*0x6f3ab3*/
           + v10;
    }
    return v2; /*0x6f3ab9*/
  }
  return result; /*0x6f39c2*/
}



// ==== 0x006F3AD0  TechnoClass::ComputeTransform  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::ComputeTransform(TechnoClass *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // ecx
  int v8; // ebp
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // ebp
  const void *v13; // eax
  int (__thiscall **vtable0)(TechnoClass *, _BYTE *); // eax
  _DWORD *v15; // esi
  int v16; // eax
  float *v17; // eax
  float v18; // edx
  int v19; // eax
  int v20; // esi
  int v21; // eax
  int v22; // edi
  int v23; // eax
  int v24; // edx
  int v25; // kr00_4
  int v26; // ebp
  int *v27; // eax
  int v28; // ecx
  int v29; // edx
  int v30; // eax
  float v32; // [esp+8h] [ebp-E4h]
  float v33; // [esp+8h] [ebp-E4h]
  float v34; // [esp+Ch] [ebp-E0h]
  float v35; // [esp+10h] [ebp-DCh]
  float v36; // [esp+10h] [ebp-DCh]
  int v37; // [esp+28h] [ebp-C4h]
  double v38; // [esp+2Ch] [ebp-C0h] BYREF
  float v39; // [esp+34h] [ebp-B8h]
  int v40; // [esp+38h] [ebp-B4h]
  int v41; // [esp+3Ch] [ebp-B0h]
  float v42[3]; // [esp+40h] [ebp-ACh] BYREF
  _BYTE v43[4]; // [esp+4Ch] [ebp-A0h] BYREF
  float v44[3]; // [esp+50h] [ebp-9Ch] BYREF
  Matrix3x4 v45; // [esp+5Ch] [ebp-90h] BYREF
  Transform v46[12]; // [esp+8Ch] [ebp-60h] BYREF
  _BYTE v47[48]; // [esp+BCh] [ebp-30h] BYREF

  v41 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6f3aeb*/
  v7 = 0; /*0x6f3aef*/
  v8 = 0; /*0x6f3af1*/
  v9 = 0; /*0x6f3af3*/
  if ( a3 >= 0 ) /*0x6f3af7*/
  {
    v11 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, a3); /*0x6f3b28*/
    v7 = v11[1]; /*0x6f3b2e*/
    v8 = v11[2]; /*0x6f3b31*/
    v9 = v11[3]; /*0x6f3b34*/
  }
  else if ( -a3 <= 5 ) /*0x6f3afe*/
  {
    v10 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6f3b04*/
    v7 = *(_DWORD *)(v10 - 12 * a3 + 2128); /*0x6f3b14*/
    v8 = *(_DWORD *)(v10 - 12 * a3 + 2132); /*0x6f3b1b*/
    v9 = *(_DWORD *)(v10 - 12 * a3 + 2136); /*0x6f3b1e*/
  }
  v12 = a5 + v8; /*0x6f3b47*/
  v40 = a4 + v7; /*0x6f3b49*/
  v37 = a6 + v9; /*0x6f3b58*/
  if ( this && (this->? & 4) != 0 && *((_DWORD *)this + 413) ) /*0x6f3b6c*/
  {
    v13 = (const void *)(*(int (__stdcall **)(_DWORD, _BYTE *, _DWORD))(**((_DWORD **)this + 413) + 36))( /*0x6f3b9b*/
                          *((_DWORD *)this + 413),
                          v47,
                          0);
    Transform::Copy(v46, v13); /*0x6f3ba3*/
    vtable0 = (int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass; /*0x6f3ba8*/
    qmemcpy(&v45, v46, sizeof(v45)); /*0x6f3bb7*/
    v15 = (_DWORD *)vtable0[170](this, v43); /*0x6f3bd1*/
    v38 = (double)(int)((((unsigned int)((*v15 >> 10) + 1) >> 1) & 0x1F) - 8) * -0.1963495408493621 /*0x6f3c12*/
        - (double)(int)((((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v38) >> 10) + 1) >> 1)
                       & 0x1F)
                      - 8)
        * -0.1963495408493621;
  }
  else
  {
    Matrix3x4::Identity(&v45); /*0x6f3c1e*/
    v38 = (double)(int)((((unsigned int)((*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, double *))this->RadioClass /*0x6f3c4e*/
                                                      + 170))(
                                                       this,
                                                       &v38) >> 10)
                                       + 1) >> 1)
                       & 0x1F)
                      - 8)
        * -0.1963495408493621;
  }
  v32 = (float)*(int *)(v41 + 1824); /*0x6f3c65*/
  Vector::MatrixMulVectorMath(v45.m_Data, v32, 0.0, 0.0); /*0x6f3c68*/
  v35 = v38; /*0x6f3c76*/
  Matrix2D::Rotate(v45.m_Data, v35); /*0x6f3c79*/
  v16 = -(this->currentBurstIndex % 2 != 0); /*0x6f3c9a*/
  LOBYTE(v16) = v16 & 0xFE; /*0x6f3c9d*/
  v34 = (float)(v12 * (v16 + 1)); /*0x6f3cab*/
  v33 = (float)v40; /*0x6f3cb7*/
  v36 = (float)v37; /*0x6f3c8e*/
  Vector::MatrixMulVectorMath(v45.m_Data, v33, v34, v36); /*0x6f3cba*/
  memset(v42, 0, sizeof(v42)); /*0x6f3ccc*/
  v17 = TransformMatrix3x4Point(v44, (float *)v45.m_Data, v42); /*0x6f3ce4*/
  *(float *)&v38 = *v17; /*0x6f3ceb*/
  v18 = v17[2]; /*0x6f3cf6*/
  *((float *)&v38 + 1) = v17[1]; /*0x6f3cf9*/
  v39 = v18; /*0x6f3cfd*/
  LOWORD(v19) = Math::RoundToInt(*(float *)&v38); /*0x6f3d01*/
  v20 = v19; /*0x6f3d0c*/
  LOWORD(v21) = Math::RoundToInt(-*((float *)&v38 + 1)); /*0x6f3d0e*/
  v22 = v21; /*0x6f3d17*/
  v25 = Math::RoundToInt(v39); /*0x6f3d19*/
  LOWORD(v24) = HIWORD(v25); /*0x6f3d19*/
  LOWORD(v23) = v25; /*0x6f3d19*/
  v26 = v23; /*0x6f3d22*/
  v27 = (int *)(*((int (__fastcall **)(TechnoClass *, int, float *))this->RadioClass + 43))(this, v24, v44); /*0x6f3d29*/
  v28 = *v27; /*0x6f3d2f*/
  v29 = v27[1]; /*0x6f3d31*/
  v30 = v27[2]; /*0x6f3d34*/
  *a2 = v20 + v28; /*0x6f3d46*/
  a2[1] = v22 + v29; /*0x6f3d48*/
  a2[2] = v26 + v30; /*0x6f3d4b*/
  return a2; /*0x6f3d50*/
}



// ==== 0x006F3D60  TechnoClass::GetTurretOffset  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::GetTurretOffset(TechnoClass *this, _DWORD *a2, int a3)
{
  int v4; // ebp
  const void *v5; // eax
  int (__thiscall **vtable0)(TechnoClass *, _BYTE *); // eax
  _DWORD *v7; // esi
  float *v8; // eax
  int v9; // edx
  float v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // ebp
  int *v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  float v22; // [esp+4h] [ebp-D8h]
  float v23; // [esp+Ch] [ebp-D0h]
  double v24; // [esp+24h] [ebp-B8h] BYREF
  float v25; // [esp+2Ch] [ebp-B0h]
  float v26[3]; // [esp+30h] [ebp-ACh] BYREF
  _BYTE v27[4]; // [esp+3Ch] [ebp-A0h] BYREF
  float v28[3]; // [esp+40h] [ebp-9Ch] BYREF
  Matrix3x4 v29; // [esp+4Ch] [ebp-90h] BYREF
  Transform v30[12]; // [esp+7Ch] [ebp-60h] BYREF
  _BYTE v31[48]; // [esp+ACh] [ebp-30h] BYREF

  v4 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6f3d76*/
  if ( this && (this->? & 4) != 0 && *((_DWORD *)this + 413) ) /*0x6f3d88*/
  {
    v5 = (const void *)(*(int (__stdcall **)(_DWORD, _BYTE *, _DWORD))(**((_DWORD **)this + 413) + 36))( /*0x6f3db7*/
                         *((_DWORD *)this + 413),
                         v31,
                         0);
    Transform::Copy(v30, v5); /*0x6f3dbf*/
    vtable0 = (int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass; /*0x6f3dc4*/
    qmemcpy(&v29, v30, sizeof(v29)); /*0x6f3dd3*/
    v7 = (_DWORD *)vtable0[170](this, v27); /*0x6f3ded*/
    v24 = (double)(int)((((unsigned int)((*v7 >> 10) + 1) >> 1) & 0x1F) - 8) * -0.1963495408493621 /*0x6f3e2e*/
        - (double)(int)((((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v24) >> 10) + 1) >> 1)
                       & 0x1F)
                      - 8)
        * -0.1963495408493621;
  }
  else
  {
    Matrix3x4::Identity(&v29); /*0x6f3e3a*/
    v24 = (double)(int)((((unsigned int)((*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, double *))this->RadioClass /*0x6f3e6a*/
                                                      + 170))(
                                                       this,
                                                       &v24) >> 10)
                                       + 1) >> 1)
                       & 0x1F)
                      - 8)
        * -0.1963495408493621;
  }
  v22 = (float)*(int *)(v4 + 1824); /*0x6f3e7d*/
  Vector::MatrixMulVectorMath(v29.m_Data, v22, 0.0, 0.0); /*0x6f3e80*/
  v23 = v24; /*0x6f3e8e*/
  Matrix2D::Rotate(v29.m_Data, v23); /*0x6f3e91*/
  memset(v26, 0, sizeof(v26)); /*0x6f3ea3*/
  v8 = TransformMatrix3x4Point(v28, (float *)v29.m_Data, v26); /*0x6f3ebb*/
  *(float *)&v24 = *v8; /*0x6f3ec2*/
  v9 = *((_DWORD *)v8 + 1); /*0x6f3ec6*/
  v10 = v8[2]; /*0x6f3ecd*/
  HIDWORD(v24) = v9; /*0x6f3ed0*/
  v25 = v10; /*0x6f3ed4*/
  LOWORD(v11) = Math::RoundToInt(*(float *)&v24); /*0x6f3ed8*/
  v12 = v11; /*0x6f3ee3*/
  LOWORD(v13) = Math::RoundToInt(-*((float *)&v24 + 1)); /*0x6f3ee5*/
  v14 = v13; /*0x6f3eee*/
  LOWORD(v15) = Math::RoundToInt(v25); /*0x6f3ef0*/
  v16 = v15; /*0x6f3ef7*/
  v17 = (int *)(*((int (__thiscall **)(TechnoClass *, float *))this->RadioClass + 43))(this, v28); /*0x6f3f00*/
  v18 = *v17; /*0x6f3f06*/
  v19 = v17[1]; /*0x6f3f08*/
  v20 = v17[2]; /*0x6f3f0b*/
  *a2 = v12 + v18; /*0x6f3f1d*/
  a2[1] = v14 + v19; /*0x6f3f1f*/
  a2[2] = v16 + v20; /*0x6f3f22*/
  return a2; /*0x6f3f27*/
}



// ==== 0x006F3F40  TechnoClass::Update  this=TechnoClass  sig=csp ====
_DWORD *__usercall TechnoClass::Update@<eax>(TechnoClass *this, int a2@<edi>)
{
  int v2; // ecx
  TechnoClass *v3; // esi
  Object *v4; // eax
  _DWORD *result; // eax
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  TemporalClass *v18; // eax
  TemporalClass *v19; // eax
  int (__thiscall **vtable0)(TechnoClass *, _DWORD); // edx
  int v21; // eax
  int v22; // eax
  HouseClass *owner; // eax
  int sideIndex; // eax
  _DWORD *v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // [esp-Ch] [ebp-10h]
  int v30; // [esp-Ch] [ebp-10h]
  int v31; // [esp-8h] [ebp-Ch]
  int v32; // [esp-8h] [ebp-Ch]
  int v33; // [esp-4h] [ebp-8h]
  int v34; // [esp-4h] [ebp-8h]

  v3 = (TechnoClass *)v2; /*0x6f3f41*/
  v4 = *(Object **)(v2 + 540); /*0x6f3f43*/
  if ( v4 ) /*0x6f3f4b*/
    *(_BYTE *)(v2 + 1050) = dword_A83D4C == v4; /*0x6f3f55*/
  result = (_DWORD *)(*(int (**)(void))(*(_DWORD *)v2 + 132))(); /*0x6f3f69*/
  if ( result ) /*0x6f3f71*/
  {
    if ( !v3->planningToken ) /*0x6f3f77*/
      TechnoClass::CreatePlanningNode(v3); /*0x6f3f83*/
    if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *, int))v3->RadioClass + 33))(v3, a2) + 3416) ) /*0x6f3f93*/
    {
      v6 = __2_YAPAXI_Z(0x74u); /*0x6f3fa4*/
      if ( v6 ) /*0x6f3fab*/
      {
        v33 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3) + 3428); /*0x6f3fbf*/
        v31 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3) + 3424); /*0x6f3fd0*/
        v29 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3) + 3420); /*0x6f3fe1*/
        v7 = (*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3); /*0x6f3fe4*/
        v8 = SpawnManagerClass::SpawnManagerClass(v6, (int)v3, *(_DWORD *)(v7 + 3416), v29, v31, v33); /*0x6f3ff4*/
      }
      else
      {
        v8 = 0; /*0x6f3ffb*/
      }
      v3->spawnManager = (SpawnManagerClass *)v8; /*0x6f3ffd*/
    }
    if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3) + 3392) ) /*0x6f400d*/
    {
      v9 = __2_YAPAXI_Z(0x64u); /*0x6f401e*/
      if ( v9 ) /*0x6f4025*/
      {
        v34 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3) + 3404); /*0x6f4039*/
        v32 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3) + 3400); /*0x6f404a*/
        v30 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3) + 3396); /*0x6f405b*/
        v10 = (*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3); /*0x6f405e*/
        v11 = SlaveManagerClass::ctor(v9, (int)v3, *(_DWORD *)(v10 + 3392), v30, v32, v34); /*0x6f406e*/
      }
      else
      {
        v11 = 0; /*0x6f4075*/
      }
      v3->slaveManager = (SlaveManagerClass *)v11; /*0x6f4077*/
    }
    if ( *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))v3->RadioClass + 254))(v3, 0) /*0x6f40a2*/
      && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))v3->RadioClass + 254))(v3, 0)
                              + 172)
                  + 341) )
    {
      v12 = __2_YAPAXI_Z(0x50u); /*0x6f40b3*/
      if ( v12 ) /*0x6f40ba*/
      {
        LOBYTE(v13) = *(_BYTE *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 254))(v3) + 320); /*0x6f40cc*/
        v14 = (*((int (__thiscall **)(TechnoClass *, _DWORD, int))v3->RadioClass + 254))(v3, 0, v13); /*0x6f40d7*/
        v15 = CaptureManagerClass::CaptureManagerClass(v12, (int)v3, *(_DWORD *)(*(_DWORD *)v14 + 164), 0); /*0x6f40e9*/
      }
      else
      {
        v15 = 0; /*0x6f40f0*/
      }
      v3->captureManager = (CaptureManagerClass *)v15; /*0x6f40f2*/
    }
    if ( (*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 11))(v3) != 6 /*0x6f412a*/
      && *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))v3->RadioClass + 254))(v3, 0)
      && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))v3->RadioClass + 254))(v3, 0)
                              + 172)
                  + 345) )
    {
      v16 = __2_YAPAXI_Z(0x58u); /*0x6f4136*/
      if ( v16 ) /*0x6f4140*/
        v17 = ParasiteClass::ParasiteClass(v16, (int)v3); /*0x6f4145*/
      else
        v17 = 0; /*0x6f414c*/
      v3[1].radarFlashTimer[2] = v17; /*0x6f414e*/
    }
    if ( *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))v3->RadioClass + 254))(v3, 0) /*0x6f4179*/
      && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))v3->RadioClass + 254))(v3, 0)
                              + 172)
                  + 346) )
    {
      v18 = (TemporalClass *)__2_YAPAXI_Z(0x50u); /*0x6f4185*/
      if ( v18 ) /*0x6f418f*/
        v19 = (TemporalClass *)TemporalClass::TemporalClass(v18, (int)v3); /*0x6f4194*/
      else
        v19 = 0; /*0x6f419b*/
      vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD))v3->RadioClass; /*0x6f419d*/
      v3->temporalUsing = v19; /*0x6f41a3*/
      v3->temporalUsing[1].? = *(_DWORD *)(*(_DWORD *)vtable0[254](v3, 0) + 164); /*0x6f41bd*/
    }
    if ( *(int *)((*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3) + 1564) > 0 ) /*0x6f41d2*/
    {
      v21 = __2_YAPAXI_Z(0x60u); /*0x6f41d6*/
      if ( v21 ) /*0x6f41e0*/
        v22 = AirstrikeClass::AirstrikeClass(v21, (int)v3); /*0x6f41e5*/
      else
        v22 = 0; /*0x6f41ec*/
      v3->airstrike = (AirstrikeClass *)v22; /*0x6f41ee*/
    }
    if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3) + 3375) /*0x6f4212*/
      && *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3) + 3376) )
    {
      owner = v3->owner; /*0x6f421c*/
      v3->isDisguisedFlag = 1; /*0x6f4222*/
      v3->disguisedAsHouse = owner; /*0x6f4229*/
      sideIndex = owner->sideIndex; /*0x6f422f*/
      if ( sideIndex ) /*0x6f4237*/
      {
        if ( sideIndex == 1 ) /*0x6f4250*/
          v3->disguiseAsType = *(ObjectTypeClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3420); /*0x6f425d*/
        else
          v3->disguiseAsType = *(ObjectTypeClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3424); /*0x6f4271*/
      }
      else
      {
        v3->disguiseAsType = *(ObjectTypeClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3416); /*0x6f4245*/
      }
    }
    v25 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3); /*0x6f427b*/
    v26 = v25[809]; /*0x6f4281*/
    v25 += 809; /*0x6f4287*/
    v3->turretRecoil[0] = v26; /*0x6f428c*/
    v3->turretRecoil[1] = v25[1]; /*0x6f4295*/
    v3->turretRecoil[2] = v25[2]; /*0x6f429e*/
    v3->turretRecoil[3] = v25[3]; /*0x6f42a7*/
    v27 = (*((int (__thiscall **)(TechnoClass *))v3->RadioClass + 33))(v3); /*0x6f42b1*/
    v28 = *(_DWORD *)(v27 + 3256); /*0x6f42b7*/
    result = (_DWORD *)(v27 + 3256); /*0x6f42bd*/
    v3->barrelRecoil[0] = v28; /*0x6f42c2*/
    v3->barrelRecoil[1] = result[1]; /*0x6f42cb*/
    v3->barrelRecoil[2] = result[2]; /*0x6f42d4*/
    v3->barrelRecoil[3] = result[3]; /*0x6f42dd*/
    v3->isTurretRotateSoundPlaying = 1; /*0x6f42e3*/
    v3->turretIsRotating = 0; /*0x6f42ed*/
  }
  return result; /*0x6f42f7*/
}



// ==== 0x006F4300  TechnoClass::Constructor  this=TechnoClass  sig=csp ====
_DWORD *__thiscall TechnoClass::Constructor(TechnoClass *this, int a2)
{
  int v3; // ecx
  int v4; // ecx
  TechnoClass **v5; // edx
  int v6; // eax
  char v8; // [esp+10h] [ebp+4h]

  Helper_65A7E0((RadioClass *)this, a2); /*0x6f430b*/
  this->ironTintStage = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f4317*/
  this->airstrikeTimer[1] = 0; /*0x6f431d*/
  v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f4323*/
  this->airstrikeTintTimer[1] = 0; /*0x6f4329*/
  this->airstrikeTimer[2] = v3; /*0x6f432f*/
  this->cloakProgress[0] = 0; /*0x6f4335*/
  LOBYTE(this->cloakProgress[1]) = 0; /*0x6f433b*/
  this->cloakProgress[2] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f434c*/
  this->cloakProgress[4] = 0; /*0x6f4352*/
  this->cloakProgress[5] = 0; /*0x6f435f*/
  this->cloakProgress[6] = 1; /*0x6f4365*/
  __4type_info_AAEAAV0_ABV0__Z(&this->storedTiberium[2], a2); /*0x6f436b*/
  this->turretRecoil[1] = 1; /*0x6f4375*/
  this->turretRecoil[0] = 2; /*0x6f437b*/
  this->turretRecoil[2] = 1; /*0x6f4381*/
  this->turretRecoil[3] = 1; /*0x6f4387*/
  this->turretRecoil[5] = 0; /*0x6f438d*/
  this->turretRecoil[6] = 0; /*0x6f4393*/
  this->barrelRecoil[1] = 1; /*0x6f4399*/
  this->barrelRecoil[2] = 1; /*0x6f439f*/
  this->barrelRecoil[3] = 1; /*0x6f43a5*/
  this->barrelRecoil[0] = 2; /*0x6f43b5*/
  this->barrelRecoil[5] = 0; /*0x6f43bb*/
  this->barrelRecoil[6] = 0; /*0x6f43c1*/
  VectorClass::Construct((VectorClass *)this->currentTargetThreatValues, 0, 0); /*0x6f43c7*/
  this->currentTargetThreatValues[0] = (int)&DynamicVectorClass<int>::`vftable'; /*0x6f43d1*/
  this->currentTargetThreatValues[5] = 10; /*0x6f43d7*/
  this->currentTargetThreatValues[4] = 0; /*0x6f43da*/
  AbstractClassVector::Construct((AbstractClassVector *)this->currentTargets, 0, 0); /*0x6f43e7*/
  this->currentTargets[0] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x6f43ec*/
  this->currentTargets[5] = 10; /*0x6f43f2*/
  this->currentTargets[4] = 0; /*0x6f43f5*/
  AbstractClassVector::Construct((AbstractClassVector *)this->attackedTargets, 0, 0); /*0x6f4402*/
  this->attackedTargets[0] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x6f4407*/
  this->attackedTargets[5] = 10; /*0x6f440d*/
  this->attackedTargets[4] = 0; /*0x6f4410*/
  this->RadioClass = &TechnoClass::`vftable'; /*0x6f4413*/
  this->? = &TechnoClass::`vftable'; /*0x6f4419*/
  this->? = &TechnoClass::`vftable'; /*0x6f4420*/
  this->? = &off_7F4934; /*0x6f4427*/
  v4 = 0; /*0x6f4433*/
  v8 = 0; /*0x6f4437*/
  if ( *(int *)&stru_A8EB00.?[164] > 0 ) /*0x6f443b*/
  {
    v5 = *(TechnoClass ***)&stru_A8EB00.?[152]; /*0x6f443d*/
    while ( *v5 != this ) /*0x6f4445*/
    {
      ++v4; /*0x6f4447*/
      ++v5; /*0x6f4448*/
      if ( v4 >= *(int *)&stru_A8EB00.?[164] ) /*0x6f444d*/
        goto LABEL_7; /*0x6f444d*/
    }
    v8 = 1; /*0x6f4451*/
  }
LABEL_7:
  AudioController::Init((AudioController *)this->turretRotateSoundController); /*0x6f4456*/
  AudioController::Init((AudioController *)this->gattlingSoundController); /*0x6f4467*/
  AudioController::Init((AudioController *)this->unusedGattlingSoundController); /*0x6f4472*/
  AudioController::Init((AudioController *)this->queuedVoiceSoundController); /*0x6f447d*/
  this->queuedVoiceIndex = -1; /*0x6f4485*/
  this->unknown_4F4 = -1; /*0x6f448b*/
  if ( !v8 /*0x6f44ca*/
    && (*(int *)&stru_A8EB00.?[164] < *(int *)&stru_A8EB00.?[156]
     || (stru_A8EB00.?[161] || !*(_DWORD *)&stru_A8EB00.?[156])
     && *(int *)&stru_A8EB00.?[168] > 0
     && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&stru_A8EB00.?[148] + 8))(
          &stru_A8EB00.?[148],
          *(_DWORD *)&stru_A8EB00.?[156] + *(_DWORD *)&stru_A8EB00.?[168],
          0)) )
  {
    v6 = (*(_DWORD *)&stru_A8EB00.?[164])++; /*0x6f44d7*/
    *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v6) = this; /*0x6f44e6*/
  }
  return &this->RadioClass; /*0x6f44ec*/
}



// ==== 0x006F4500  TechnoClass::DTOR  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::DTOR(int this)
{
  Sidebar *v2; // ecx
  int v3; // ecx
  int v4; // ecx
  TechnoClass *v5; // ecx
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
  ObjectClass *v17; // [esp+10h] [ebp-Ch]
  int v18; // [esp+18h] [ebp-4h] BYREF

  v2 = *(Sidebar **)(this + 1300); /*0x6f4507*/
  *(_DWORD *)this = &TechnoClass::`vftable'; /*0x6f450d*/
  *(_DWORD *)(this + 4) = &TechnoClass::`vftable'; /*0x6f4515*/
  *(_DWORD *)(this + 8) = &TechnoClass::`vftable'; /*0x6f451c*/
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
  v5 = *(TechnoClass **)(this + 728); /*0x6f4565*/
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
  AudioFile::Stop((AudioFile *)(this + 1160)); /*0x6f45cd*/
  AudioFileClass::Release((AudioFileClass *)(this + 1160)); /*0x6f45d4*/
  AudioFile::Stop((AudioFile *)(this + 1188)); /*0x6f45e1*/
  AudioFileClass::Release((AudioFileClass *)(this + 1188)); /*0x6f45e8*/
  AudioFile::Stop((AudioFile *)(this + 1216)); /*0x6f45f5*/
  AudioFileClass::Release((AudioFileClass *)(this + 1216)); /*0x6f45fc*/
  AudioFileClass::Release((AudioFileClass *)(this + 1244)); /*0x6f4607*/
  *(_DWORD *)(this + 540) = 0; /*0x6f4610*/
  *(_BYTE *)(this + 1050) = 0; /*0x6f4616*/
  v18 = this; /*0x6f4628*/
  v9 = (*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)&stru_A8EB00.?[148] + 16))(&stru_A8EB00.?[148], &v18); /*0x6f462c*/
  if ( v9 != -1 ) /*0x6f4633*/
    FactoryClass::RemoveItem((FactoryClass *)&stru_A8EB00.?[148], v9); /*0x6f463b*/
  v18 = this; /*0x6f4650*/
  v10 = (*(int (__thiscall **)(char *, int *))(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E88 + 16))( /*0x6f4654*/
          g_BuildingLoadQueue_Array.__pad_E88,
          &v18);
  if ( v10 != -1 ) /*0x6f465a*/
    DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.__pad_E88, v10); /*0x6f4662*/
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
  *(_DWORD *)(this + 1136) = &VectorClass<AbstractClass *>::`vftable'; /*0x6f469d*/
  AbstractClassVector::ddtor(this + 1136); /*0x6f46a3*/
  v13 = *(void **)(this + 1116); /*0x6f46a8*/
  *(_DWORD *)(this + 1112) = &VectorClass<AbstractClass *>::`vftable'; /*0x6f46ae*/
  if ( v13 && *(_BYTE *)(this + 1125) ) /*0x6f46bc*/
  {
    __3_YAXPAX_Z(v13); /*0x6f46c5*/
    *(_DWORD *)(this + 1116) = 0; /*0x6f46cd*/
  }
  *(_BYTE *)(this + 1125) = 0; /*0x6f46d3*/
  *(_DWORD *)(this + 1120) = 0; /*0x6f46d9*/
  v14 = *(void **)(this + 1092); /*0x6f46df*/
  *(_DWORD *)(this + 1088) = &VectorClass<int>::`vftable'; /*0x6f46e5*/
  if ( v14 && *(_BYTE *)(this + 1101) ) /*0x6f46f3*/
  {
    __3_YAXPAX_Z(v14); /*0x6f46fc*/
    *(_DWORD *)(this + 1092) = 0; /*0x6f4704*/
  }
  *(_BYTE *)(this + 1101) = 0; /*0x6f4710*/
  *(_DWORD *)(this + 1096) = 0; /*0x6f4716*/
  nullsub_69(v17); /*0x6f471c*/
  *(_DWORD *)this = &RadioClass::`vftable'; /*0x6f4721*/
  *(_DWORD *)(this + 4) = &RadioClass::`vftable'; /*0x6f4727*/
  *(_DWORD *)(this + 8) = &RadioClass::`vftable'; /*0x6f472e*/
  *(_DWORD *)(this + 12) = &RadioClass::`vftable'; /*0x6f4735*/
  v15 = *(void **)(this + 228); /*0x6f473c*/
  *(_DWORD *)(this + 224) = &VectorClass<TechnoClass *>::`vftable'; /*0x6f4742*/
  if ( v15 && *(_BYTE *)(this + 237) ) /*0x6f4750*/
  {
    __3_YAXPAX_Z(v15); /*0x6f4759*/
    *(_DWORD *)(this + 228) = 0; /*0x6f4761*/
  }
  *(_BYTE *)(this + 237) = 0; /*0x6f4767*/
  *(_DWORD *)(this + 232) = 0; /*0x6f476d*/
  *(_DWORD *)this = &MissionClass::`vftable'; /*0x6f4775*/
  *(_DWORD *)(this + 4) = &MissionClass::`vftable'; /*0x6f477b*/
  *(_DWORD *)(this + 8) = &MissionClass::`vftable'; /*0x6f4782*/
  *(_DWORD *)(this + 12) = &MissionClass::`vftable'; /*0x6f4789*/
  return ObjectClass::Dtor((ObjectClass *)this); /*0x6f4795*/
}



// ==== 0x006F47A0  HouseClass::CalcProductionSpeed  this=HouseClass  sig=csp ====
int __thiscall HouseClass::CalcProductionSpeed(HouseClass *this)
{
  int v2; // eax
  _DWORD *v3; // eax
  double v4; // st7
  double v5; // st7
  int v6; // eax
  int v7; // edx
  int v8; // kr00_4
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  int FactoryCount; // ecx
  int v13; // edi
  int v14; // eax
  int result; // eax
  int v16; // [esp+8h] [ebp-8h]
  int v17; // [esp+8h] [ebp-8h]
  float v18; // [esp+Ch] [ebp-4h]
  char v19; // [esp+Ch] [ebp-4h]
  float v20; // [esp+Ch] [ebp-4h]

  v2 = (*((int (__thiscall **)(HouseClass *))this->AbstractClass + 34))(this); /*0x6f47a9*/
  v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 136))(v2); /*0x6f47b9*/
  v3 = (_DWORD *)(*((int (__thiscall **)(HouseClass *))this->AbstractClass + 33))(this); /*0x6f47c1*/
  v4 = HouseClass::GetBuildingDamageMultiplier((HouseClass *)this->planningPaths[3], v3) * (double)v16; /*0x6f47d3*/
  Math::RoundToInt(v4); /*0x6f47d7*/
  (*((void (__thiscall **)(HouseClass *))this->AbstractClass + 33))(this); /*0x6f47e4*/
  Math::RoundToInt(v4); /*0x6f47f4*/
  HouseClass::GetPowerRatio((HouseClass *)this->planningPaths[3]); /*0x6f4803*/
  v18 = v4; /*0x6f4808*/
  v5 = 1.0 - (1.0 - v18) * *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1400); /*0x6f4822*/
  if ( v5 <= *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1392) ) /*0x6f4837*/
    v5 = *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1392); /*0x6f483b*/
  if ( v18 < 1.0 && v5 >= *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1396) ) /*0x6f4861*/
    v5 = *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1396); /*0x6f4865*/
  if ( v5 == 0.0 ) /*0x6f4876*/
    v5 = 0.0099999998; /*0x6f487a*/
  v8 = Math::RoundToInt(v5); /*0x6f4886*/
  LOWORD(v7) = HIWORD(v8); /*0x6f4886*/
  LOWORD(v6) = v8; /*0x6f4886*/
  v9 = v6; /*0x6f488b*/
  v17 = v6; /*0x6f4891*/
  v19 = 0; /*0x6f4897*/
  if ( (*((int (__fastcall **)(HouseClass *, int))this->AbstractClass + 11))(this, v7) == 1 ) /*0x6f48a2*/
  {
    v10 = (*((int (__thiscall **)(HouseClass *))this->AbstractClass + 33))(this); /*0x6f48a8*/
    if ( v10 ) /*0x6f48b0*/
      v19 = *(_BYTE *)(v10 + 3278); /*0x6f48b8*/
  }
  v11 = (*((int (__thiscall **)(HouseClass *))this->AbstractClass + 11))(this); /*0x6f48c5*/
  FactoryCount = HouseClass::GetFactoryCount((HouseClass *)this->planningPaths[3], v11, v19); /*0x6f48d4*/
  v20 = *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1404); /*0x6f48e1*/
  if ( v20 > 0.0 && FactoryCount - 1 > 0 ) /*0x6f48fb*/
  {
    v13 = FactoryCount - 1; /*0x6f48fe*/
    do /*0x6f4914*/
    {
      LOWORD(v14) = Math::RoundToInt((double)v17 * v20); /*0x6f4908*/
      v9 = v14; /*0x6f490d*/
      --v13; /*0x6f490f*/
      v17 = v14; /*0x6f4910*/
    }
    while ( v13 ); /*0x6f4914*/
  }
  if ( (*((int (__thiscall **)(HouseClass *))this->AbstractClass + 11))(this) != 6 /*0x6f4929*/
    || !*(_BYTE *)(this->builtInfantryTypes[126] + 5489) )
  {
    return v9; /*0x6f494e*/
  }
  LOWORD(result) = Math::RoundToInt((double)v17 * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1880)); /*0x6f4943*/
  return result; /*0x6f4948*/
}



// ==== 0x006F4960  TechnoClass::SetHouseFlag  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::SetHouseFlag(TechnoClass *this, void *a2)
{
  HouseClass *owner; // eax
  TeamClass *attachedTag; // ecx

  if ( a2 == dword_A83D4C ) /*0x6f4972*/
  {
    if ( this->isDiscoveredByCurrentPlayer ) /*0x6f4974*/
      return 0; /*0x6f4983*/
  }
  else
  {
    if ( this->isDiscoveredByComputer ) /*0x6f4986*/
      return 0; /*0x6f498e*/
    this->isDiscoveredByComputer = 1; /*0x6f4990*/
  }
  if ( !(unsigned __int8)AbstractClass::IsNotNull((ObjectClass *)this) ) /*0x6f49a0*/
    return 0; /*0x6f49a0*/
  if ( !(unsigned __int8)House::IsCurrentPlayer((House *)a2) /*0x6f49ba*/
    && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 97))(this) == 14 )
  {
    (*((void (__thiscall **)(TechnoClass *, int, _DWORD))this->RadioClass + 122))(this, 15, 0); /*0x6f49c4*/
  }
  if ( a2 != dword_A83D4C ) /*0x6f49d0*/
  {
    this->isDiscoveredByComputer = 1; /*0x6f4a31*/
    return 1; /*0x6f4a31*/
  }
  owner = this->owner; /*0x6f49d2*/
  this->isDiscoveredByCurrentPlayer = 1; /*0x6f49d8*/
  LOBYTE(owner->HouseClass_field_timer_B[2]) = 1; /*0x6f49de*/
  BYTE1(this->owner->HouseClass_field_timer_B[2]) = 1; /*0x6f49ea*/
  if ( this->isOwnedByCurrentPlayer ) /*0x6f49f0*/
    return 1; /*0x6f4a38*/
  if ( !dword_A8E7AC ) /*0x6f4a01*/
  {
    attachedTag = (TeamClass *)this->?; /*0x6f4a03*/
    if ( attachedTag ) /*0x6f4a08*/
      TeamClass::Update_0(attachedTag, 4, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x6f4a18*/
  }
  this->owner->isDiscoveredByPlayer = 1; /*0x6f4a25*/
  return 1; /*0x6f497e*/
}



// ==== 0x006F4A40  TechnoClass::CheckPlayerOwned  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CheckPlayerOwned(TechnoClass *this)
{
  int result; // eax

  LOBYTE(result) = this->isDiscoveredByCurrentPlayer; /*0x6f4a43*/
  if ( (_BYTE)result ) /*0x6f4a4b*/
  {
    result = House::IsCurrentPlayer((House *)this->owner); /*0x6f4a53*/
    if ( !(_BYTE)result ) /*0x6f4a5a*/
      this->isDiscoveredByCurrentPlayer = 0; /*0x6f4a5c*/
  }
  return result; /*0x6f4a62*/
}



// ==== 0x006F4A70  TechnoClass::UpdateProdWithSound  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::UpdateProdWithSound(TechnoClass *this, int a2)
{
  int result; // eax

  result = ObjectClass::UpdateProductionDisplay((ObjectClass *)this); /*0x6f4a78*/
  if ( (_BYTE)result ) /*0x6f4a7f*/
  {
    if ( this->isTether ) /*0x6f4a81*/
      result = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 157))(this, 13); /*0x6f4a91*/
    LOBYTE(result) = 1; /*0x6f4a97*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6f4a9d*/
  }
  return result; /*0x6f4a99*/
}



// ==== 0x006F4AB0  TechnoClass::Mission_RepairDispatch  this=TechnoClass  sig=csp ====
int __userpurge TechnoClass::Mission_RepairDispatch@<eax>(TechnoClass *this, int a2@<ebp>, int a3, int a4, _DWORD *a5)
{
  BuildingClass *v5; // ecx
  BuildingClass *v6; // esi
  _DWORD *v7; // eax
  int result; // eax
  unsigned int v9; // eax
  void (__thiscall **vtable0)(BuildingClass *, int, TechnoClass *); // edx
  void (__thiscall **v11)(BuildingClass *, int, TechnoClass *); // edx
  void (__thiscall **v12)(BuildingClass *, int, TechnoClass *); // edx
  void (__thiscall **v13)(BuildingClass *, int, TechnoClass *); // edx
  TechnoClass *v14; // edi
  int ammo; // edi
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  int v20; // edi
  int v21; // ecx
  int v22; // eax
  _DWORD *v23; // eax
  ParticleSystemClass *damageParticles; // ecx
  int v28; // eax
  BuildingClass *v29; // [esp+0h] [ebp-18h]
  int v30; // [esp+10h] [ebp-8h]

  v6 = v5; /*0x6f4abd*/
  switch ( a3 )
  {
    case 3:
      v14 = this; /*0x6f4c56*/
      if ( v5->? ) /*0x6f4c50*/
      {
        if ( this->isTether ) /*0x6f4c5e*/
          (*((void (__thiscall **)(BuildingClass *, int, TechnoClass *))v5->TechnoClass + 158))(v5, 25, this); /*0x6f4c6d*/
      }
      goto LABEL_23; /*0x6f4c6d*/
    case 7:
    case 9:
    case 22:
      v14 = this; /*0x6f4c6f*/
      (*((void (__thiscall **)(BuildingClass *, int, TechnoClass *))v5->TechnoClass + 158))(v5, 24, this); /*0x6f4c7a*/
LABEL_23:
      ObjectClass::ProcessGroupInput((int)v6, (int)v14, a3, a4); /*0x6f4c80*/
      return 1; /*0x6f4c99*/
    case 8:
      (*((void (__thiscall **)(BuildingClass *, int, TechnoClass *))v5->TechnoClass + 158))(v5, 25, this); /*0x6f4c34*/
      return (*((int (__thiscall **)(BuildingClass *, int, TechnoClass *))v6->TechnoClass + 158))(v6, 3, this); /*0x6f4c4d*/
    case 24:
      if ( (*((int (**)(void))v5->TechnoClass + 11))() == 2 )
      {
        v9 = v6 ? ((*((int (__thiscall **)(BuildingClass *))v6->TechnoClass + 11))(v6) == 2 ? (unsigned int)v6 : 0) : 0;
        if ( *(_BYTE *)(*(_DWORD *)(v9 + 1732) + 3597) ) /*0x6f4b4b*/
          goto LABEL_45; /*0x6f4b4b*/
      }
      if ( v6->? ) /*0x6f4b59*/
        goto LABEL_45; /*0x6f4b61*/
      vtable0 = (void (__thiscall **)(BuildingClass *, int, TechnoClass *))v6->TechnoClass; /*0x6f4b6b*/
      v6->? = 1; /*0x6f4b72*/
      vtable0[158](v6, 24, this); /*0x6f4b79*/
      result = 1; /*0x6f4b81*/
      break; /*0x6f4b8a*/
    case 25:
      if ( !v5->? ) /*0x6f4b95*/
        goto LABEL_45; /*0x6f4b95*/
      v11 = (void (__thiscall **)(BuildingClass *, int, TechnoClass *))v5->TechnoClass; /*0x6f4b9f*/
      v5->? = 0; /*0x6f4ba6*/
      v11[158](v5, 25, this); /*0x6f4bad*/
      result = 1; /*0x6f4bb5*/
      break; /*0x6f4bbe*/
    case 26:
      if ( v5->? ) /*0x6f4bc1*/
        goto LABEL_45; /*0x6f4bc9*/
      v12 = (void (__thiscall **)(BuildingClass *, int, TechnoClass *))v5->TechnoClass; /*0x6f4bd3*/
      v5->? = 1; /*0x6f4bda*/
      v12[158](v5, 26, this); /*0x6f4be1*/
      result = 1; /*0x6f4be9*/
      break; /*0x6f4bf2*/
    case 27:
      if ( !v5->? ) /*0x6f4bfd*/
        goto LABEL_45; /*0x6f4bfd*/
      v13 = (void (__thiscall **)(BuildingClass *, int, TechnoClass *))v5->TechnoClass; /*0x6f4c07*/
      v5->? = 0; /*0x6f4c0e*/
      v13[158](v5, 27, this); /*0x6f4c15*/
      result = 1; /*0x6f4c1d*/
      break; /*0x6f4c26*/
    case 28:
      BuildingClass::GetHealthRatio(v5); /*0x6f4cd9*/
      _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6f4cde*/
      __asm /*0x6f4ce3*/
      {
        fcomp qword ptr [eax+16F8h]
        fnstsw ax
      }
      if ( (_EAX & 0x100) == 0 ) /*0x6f4cee*/
        goto LABEL_25; /*0x6f4cee*/
      v17 = (*((int (__thiscall **)(BuildingClass *))v6->TechnoClass + 33))(v6); /*0x6f4cf4*/
      v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 176))(v17); /*0x6f4d04*/
      v19 = (*((int (__thiscall **)(BuildingClass *))v6->TechnoClass + 33))(v6); /*0x6f4d0a*/
      v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 180))(v19); /*0x6f4d1a*/
      if ( v20 <= 1 ) /*0x6f4d1f*/
        v20 = 1; /*0x6f4d21*/
      if ( (*(int (__stdcall **)(int *))(v6->?->arrayIndex + 24))(&v6->?->arrayIndex) < v18 ) /*0x6f4d37*/
      {
        result = 32; /*0x6f4e33*/
      }
      else
      {
        if ( v18 ) /*0x6f4d3f*/
          HouseClass::ProcessPowerDrain((int *)v6->?, v18); /*0x6f4d48*/
        v21 = v20 + v6->?; /*0x6f4d55*/
        v6->? += v20; /*0x6f4d59*/
        v6->? = v21; /*0x6f4d5c*/
        if ( v6 ) /*0x6f4d5f*/
        {
          if ( (v6->? & 4) != 0 ) /*0x6f4d6e*/
          {
            v22 = v6->Audio8[2]; /*0x6f4d70*/
            if ( v22 ) /*0x6f4d78*/
            {
              v23 = (_DWORD *)(*(_DWORD *)(v22 + 1692) + 44); /*0x6f4d86*/
              *v23 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6f4d8e*/
              v23[1] = v30; /*0x6f4d94*/
              v23[2] = 50; /*0x6f4d97*/
              BuildingClass::Deploy(v29, a2, v20); /*0x6f4da6*/
            }
          }
        }
        BuildingClass::GetHealthRatio(v6); /*0x6f4dad*/
        _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6f4db2*/
        __asm /*0x6f4db7*/
        {
          fcomp qword ptr [eax+1700h]
          fnstsw ax
        }
        if ( (_EAX & 0x4100) == 0 || (*((int (__thiscall **)(BuildingClass *))v6->TechnoClass + 114))(v6) < -10 ) /*0x6f4dd1*/
        {
          damageParticles = v6->?; /*0x6f4dd3*/
          if ( damageParticles ) /*0x6f4ddb*/
            (*((void (__thiscall **)(ParticleSystemClass *))damageParticles->ObjectClass + 62))(damageParticles); /*0x6f4ddf*/
        }
        BuildingClass::GetHealthRatio(v6); /*0x6f4de7*/
        _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6f4dec*/
        __asm /*0x6f4df2*/
        {
          fcomp qword ptr [ecx+16F8h]
          fnstsw ax
        }
        if ( (_AX & 0x100) != 0 ) /*0x6f4dfd*/
        {
          result = 1; /*0x6f4e01*/
        }
        else
        {
          v28 = *(_DWORD *)((*((int (__thiscall **)(BuildingClass *))v6->TechnoClass + 33))(v6) + 160); /*0x6f4e17*/
          v6->? = v28; /*0x6f4e1e*/
          v6->? = v28; /*0x6f4e21*/
          result = 33; /*0x6f4e25*/
        }
      }
      break; /*0x6f4e0a*/
    case 30:
      v7 = (_DWORD *)(*((int (**)(void))v5->TechnoClass + 253))(); /*0x6f4adb*/
      if ( !v7 || !*v7 ) /*0x6f4ae9*/
        goto LABEL_45; /*0x6f4aec*/
      (*((void (__thiscall **)(BuildingClass *, _DWORD))v6->TechnoClass + 242))(v6, *(_DWORD *)a4); /*0x6f4afd*/
      (*((void (__thiscall **)(BuildingClass *, int, _DWORD))v6->TechnoClass + 122))(v6, 1, 0); /*0x6f4b0b*/
      result = 1; /*0x6f4b13*/
      break; /*0x6f4b1c*/
    case 31:
      ammo = v5->?; /*0x6f4c9e*/
      if ( ammo == *(_DWORD *)((*((int (**)(void))v5->TechnoClass + 33))() + 1668) ) /*0x6f4cb2*/
      {
LABEL_25:
        result = 10; /*0x6f4cb4*/
      }
      else
      {
        v6->? = ammo + 1; /*0x6f4cc8*/
        result = 1; /*0x6f4cc3*/
      }
      break; /*0x6f4cbf*/
    default:
LABEL_45:
      result = ObjectClass::ProcessGroupInput((int)v6, (int)this, a3, a4); /*0x6f4e3f*/
      break; /*0x6f4e4c*/
  }
  return result; /*0x6f4b11*/
}



// ==== 0x006F4EB0  TechnoClass::PushNearbyUnits  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::PushNearbyUnits(TechnoClass *this)
{
  _DWORD *v2; // eax
  Cell *v3; // edi
  int result; // eax
  int i; // ebx
  int v6; // edi
  _DWORD *v7; // eax
  CellClass *v8; // eax
  int v9; // eax
  int j; // edi
  int v11; // [esp-8h] [ebp-3Ch]
  int v12; // [esp+8h] [ebp-2Ch]
  __int16 v13[2]; // [esp+Ch] [ebp-28h] BYREF
  _DWORD v14[3]; // [esp+10h] [ebp-24h] BYREF
  void **v15; // [esp+1Ch] [ebp-18h] BYREF
  void *Block; // [esp+20h] [ebp-14h]
  int v17; // [esp+24h] [ebp-10h]
  int v18; // [esp+28h] [ebp-Ch]
  int v19; // [esp+2Ch] [ebp-8h]
  int v20; // [esp+30h] [ebp-4h]

  v2 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD *))this->RadioClass + 18))(this, v14); /*0x6f4ec0*/
  LOWORD(v12) = *v2 / 256; /*0x6f4ed3*/
  HIWORD(v12) = v2[1] / 256; /*0x6f4eec*/
  *(_DWORD *)v13 = v12; /*0x6f4ef9*/
  v3 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13); /*0x6f4f03*/
  if ( this->cloakState == 2 /*0x6f4f27*/
    && dword_A83D4C
    && (Object *)this->owner != dword_A83D4C
    && !(unsigned __int8)Cell::IsPassableOffset(v3, (int)dword_A83D4C->Object_field_0x30) )
  {
    (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 84))(this); /*0x6f4f34*/
  }
  result = Cell::HasOccupierBit(v3, this->owner->relatedTagsCount); /*0x6f4f46*/
  if ( (_BYTE)result ) /*0x6f4f4d*/
  {
    result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 168))(this); /*0x6f4f57*/
    if ( (_BYTE)result ) /*0x6f4f5f*/
    {
      EventClass::resetEvent((EventClass *)&v15, 0, 0); /*0x6f4f6e*/
      v15 = &DynamicVectorClass<TechnoClass *>::`vftable'; /*0x6f4f78*/
      v20 = 10; /*0x6f4f80*/
      v19 = 0; /*0x6f4f88*/
      for ( i = *(_DWORD *)&stru_A8EB00.?[164] - 1; i >= 0; --i ) /*0x6f4f95*/
      {
        v6 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i); /*0x6f4fa1*/
        if ( *(TechnoClass **)(v6 + 692) == this ) /*0x6f4faa*/
        {
          v11 = *(_DWORD *)(*(_DWORD *)(v6 + 540) + 48); /*0x6f4fbd*/
          v7 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD *))this->RadioClass + 18))(this, v14); /*0x6f4fc3*/
          v8 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v7); /*0x6f4fcc*/
          if ( ((unsigned __int8)Cell::IsPassableOffset((Cell *)v8, v11) || *(HouseClass **)(v6 + 540) == this->owner) /*0x6f5019*/
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
      (*((void (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 280))(this, 0); /*0x6f503f*/
      for ( j = v19 - 1; j >= 0; --j ) /*0x6f504f*/
        (*(void (__thiscall **)(_DWORD, TechnoClass *))(**((_DWORD **)Block + j) + 968))(*((_DWORD *)Block + j), this); /*0x6f505b*/
      result = (int)Block; /*0x6f5064*/
      v15 = &VectorClass<TechnoClass *>::`vftable'; /*0x6f5068*/
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
int __thiscall FootClass::CompleteProduction(TechnoClass *this)
{
  int result; // eax
  FactoryClass *temporalUsing; // ecx
  _DWORD *v4; // eax
  void (__thiscall **vtable0)(TechnoClass *); // eax
  TeamClass *attachedTag; // ecx
  BuildingClass *v7; // eax
  int v8; // [esp+4h] [ebp-10h]
  _BYTE v9[12]; // [esp+8h] [ebp-Ch] BYREF
  int v10; // [esp+18h] [ebp+4h] BYREF

  result = v10; /*0x6f5090*/
  if ( v10 == 2 ) /*0x6f509d*/
  {
    temporalUsing = (FactoryClass *)this->temporalUsing; /*0x6f50a3*/
    if ( temporalUsing && temporalUsing->production[1] ) /*0x6f50ad*/
      FactoryClass::CompleteItem(temporalUsing); /*0x6f50b4*/
    v4 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v9); /*0x6f50c2*/
    LOWORD(v8) = *v4 / 256; /*0x6f50d5*/
    HIWORD(v8) = v4[1] / 256; /*0x6f50eb*/
    vtable0 = (void (__thiscall **)(TechnoClass *))this->RadioClass; /*0x6f50f4*/
    v10 = v8; /*0x6f50f6*/
    vtable0[264](this); /*0x6f50fa*/
    attachedTag = (TeamClass *)this->?; /*0x6f5100*/
    if ( attachedTag ) /*0x6f5105*/
      TeamClass::Update_0(attachedTag, 34, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x6f5115*/
    if ( !this->isInPlayfield /*0x6f5130*/
      && (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&v10, 1) )
    {
      this->isInPlayfield = 1; /*0x6f5139*/
    }
    if ( !this->isDiscoveredByCurrentPlayer /*0x6f5160*/
      && (*((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v10) + 300) & 0x10) != 0 )
    {
      (*((void (__thiscall **)(TechnoClass *, Object *))this->RadioClass + 102))(this, dword_A83D4C); /*0x6f516c*/
    }
    v7 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v10); /*0x6f517c*/
    BuildingClass::CreateIdleAnim(v7); /*0x6f5183*/
  }
  return result; /*0x6f5188*/
}



// ==== 0x006F5190  TechnoClass::DrawHealthBar  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::DrawHealthBar(TechnoClass *this)
{
  int result; // eax
  TechnoClass *v2; // ebp
  __int16 *v3; // eax
  CellClass *v4; // eax
  _DWORD *v5; // eax
  Iostream_init *CurrentFrame; // eax
  __int16 *v7; // eax
  CellClass *v8; // eax
  _DWORD *v9; // eax
  int v10; // ecx
  int *v11; // esi
  int v12; // eax
  int *v13; // eax
  int v14; // ebx
  int v15; // kr04_4
  int v16; // esi
  int v17; // edi
  _DWORD *v18; // eax
  int v19; // edx
  int (__thiscall **vtable0)(TechnoClass *); // eax
  int *v21; // eax
  int *v22; // eax
  int v23; // ebp
  int *v24; // eax
  int *v25; // eax
  int *v26; // eax
  Coord3D *v27; // eax
  Coord3D *v28; // eax
  Coord *v29; // eax
  int v30; // edx
  int *v31; // eax
  int *v32; // eax
  Coord3D *v33; // eax
  Coord3D *v34; // eax
  Coord *v35; // eax
  int *v36; // eax
  int v37; // eax
  bool v38; // cc
  int v39; // eax
  int *v40; // eax
  int *v41; // eax
  Coord3D *v42; // eax
  Coord3D *v43; // eax
  Coord *v44; // eax
  int *v45; // eax
  int v46; // edx
  int *v47; // eax
  Coord3D *v48; // eax
  Coord3D *v49; // eax
  Coord *v50; // eax
  int *v51; // eax
  int v52; // edx
  int *v53; // eax
  int *v54; // eax
  Coord3D *v55; // eax
  Coord3D *v56; // eax
  Coord *v57; // eax
  int *v58; // eax
  int v59; // edx
  int v60; // edi
  int *v61; // eax
  int *v62; // eax
  Coord3D *v63; // eax
  Coord3D *v64; // eax
  Coord *v65; // eax
  int *v66; // eax
  int v67; // edx
  int *v68; // eax
  int *v69; // eax
  int *v70; // edi
  char v71; // al
  int (__thiscall **v72)(TechnoClass *, int, _DWORD); // edx
  int Coord3D_field_0x04; // [esp+50h] [ebp-98h]
  int v74; // [esp+54h] [ebp-94h]
  int v75; // [esp+60h] [ebp-88h]
  int v76; // [esp+60h] [ebp-88h]
  Coord3D v77; // [esp+64h] [ebp-84h] BYREF
  Coord3D v78; // [esp+70h] [ebp-78h] BYREF
  int v79; // [esp+7Ch] [ebp-6Ch] BYREF
  int v80; // [esp+80h] [ebp-68h]
  int Coord3D_field_0x08; // [esp+84h] [ebp-64h] BYREF
  Coord3D v82; // [esp+88h] [ebp-60h] BYREF
  int v83; // [esp+94h] [ebp-54h] BYREF
  int v84; // [esp+98h] [ebp-50h]
  int v85; // [esp+9Ch] [ebp-4Ch] BYREF
  int v86; // [esp+A0h] [ebp-48h] BYREF
  int v87; // [esp+A4h] [ebp-44h]
  int v88; // [esp+A8h] [ebp-40h] BYREF
  int v89; // [esp+ACh] [ebp-3Ch] BYREF
  int v90; // [esp+B0h] [ebp-38h]
  int v91; // [esp+B4h] [ebp-34h] BYREF
  int v92; // [esp+B8h] [ebp-30h] BYREF
  int v93; // [esp+BCh] [ebp-2Ch]
  int v94; // [esp+C0h] [ebp-28h] BYREF
  int v95[2]; // [esp+C4h] [ebp-24h] BYREF
  int v96; // [esp+CCh] [ebp-1Ch] BYREF
  _DWORD v97[2]; // [esp+D0h] [ebp-18h] BYREF
  int v98; // [esp+D8h] [ebp-10h] BYREF
  _DWORD v99[2]; // [esp+DCh] [ebp-Ch] BYREF
  TechnoClass *v100; // [esp+E4h] [ebp-4h] BYREF
  TechnoClass *retaddr; // [esp+E8h] [ebp+0h]
  int *v102; // [esp+ECh] [ebp+4h]
  int *v103; // [esp+F0h] [ebp+8h]
  int *v104; // [esp+F4h] [ebp+Ch]

  v2 = this; /*0x6f5197*/
  LOBYTE(result) = this->isSinking; /*0x6f519b*/
  v100 = this; /*0x6f51a1*/
  if ( !(_BYTE)result )
  {
    if ( this->? ) /*0x6f51b0*/
    {
      if ( this->? ) /*0x6f51bb*/
      {
        v3 = (__int16 *)(*((int (__thiscall **)(TechnoClass *, int *))this->RadioClass + 110))( /*0x6f51d0*/
                          this,
                          &Coord3D_field_0x08);
        v4 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v3); /*0x6f51dc*/
        if ( !(unsigned __int8)CellClass::QuickPassable(v4) ) /*0x6f51e3*/
        {
          v5 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, int *))v2->RadioClass + 43))(v2, &v85); /*0x6f51fb*/
          Coord::To_Screen((Coord *)g_TacticalClass_Instance, v5, &Coord3D_field_0x08); /*0x6f5208*/
          CurrentFrame = BombClass::GetCurrentFrame(v2->?); /*0x6f5230*/
          DrawToSurfaceSHP( /*0x6f524e*/
            (int)g_DSurface_Hidden_2,
            *(int *)&stru_87F5F0.__pad_58[128],
            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4064),
            (unsigned int)CurrentFrame,
            &Coord3D_field_0x08,
            &DSurface_ViewBounds.field_0,
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
      }
    }
    if ( v2
      && (*((int (__thiscall **)(TechnoClass *))v2->RadioClass + 11))(v2) == 6
      && *((*((int (__thiscall **)(TechnoClass *))v2->RadioClass + 11))(v2) == 6 ? &v2[1].__pad_1C4[4] : (char *)1768)
      && (v7 = (__int16 *)(*((int (__thiscall **)(TechnoClass *, int *))v2->RadioClass + 110))(v2, &Coord3D_field_0x08),
          v8 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v7),
          !(unsigned __int8)CellClass::QuickPassable(v8)) )
    {
      v9 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, int *))v2->RadioClass + 43))(v2, &v85); /*0x6f52c6*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, v9, &Coord3D_field_0x08); /*0x6f52d3*/
      v10 = (int)Rules::GetProductionTimeMult((Rules *)&stru_A8EB00.ObjectTypeClass[24], 14) / 4; /*0x6f52ec*/
      if ( v10 < 2 ) /*0x6f52f2*/
        v10 = 2; /*0x6f52f4*/
      v11 = v103; /*0x6f52fe*/
      DrawToSurfaceSHP( /*0x6f5340*/
        (int)g_DSurface_Hidden_2,
        *(int *)&stru_87F5F0.__pad_58[128],
        FileSystem_WRENCH_SHP,
        6 * (*(_DWORD *)&stru_A8EB00.?[416] % v10) / (v10 - 1),
        &Coord3D_field_0x08,
        v103,
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
    else
    {
      v11 = v103; /*0x6f5347*/
    }
    result = (*((int (__thiscall **)(TechnoClass *, Object *))v2->RadioClass + 50))(v2, dword_A83D4C); /*0x6f5359*/
    if ( !(_BYTE)result ) /*0x6f5361*/
    {
      result = (*((int (__thiscall **)(TechnoClass *, _DWORD, _DWORD))v2->RadioClass + 26))(v2, 0, 0); /*0x6f536c*/
      if ( result != 5 ) /*0x6f5372*/
        result = (*((int (__thiscall **)(TechnoClass *, int *, int *))v2->RadioClass + 277))(v2, v102, v11); /*0x6f5382*/
    }
    if ( v2->? ) /*0x6f5388*/
    {
      if ( (*((int (__thiscall **)(TechnoClass *))v2->RadioClass + 11))(v2) == 6 ) /*0x6f53a2*/
      {
        v75 = 15; /*0x6f53ad*/
        if ( (*((int (__thiscall **)(TechnoClass *))v2->RadioClass + 114))(v2) < -4 ) /*0x6f53be*/
          v75 = 12; /*0x6f53c0*/
        v12 = (*((int (__thiscall **)(TechnoClass *))v2->RadioClass + 33))(v2); /*0x6f53cd*/
        v13 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v12 + 124))(v12, &v86); /*0x6f53dc*/
        v14 = v13[2]; /*0x6f53e6*/
        v15 = *v13; /*0x6f53ec*/
        v16 = *v13 / 2; /*0x6f53fa*/
        v17 = v13[1] / 2; /*0x6f53ff*/
        if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x6f5404*/
          v76 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + v75); /*0x6f5415*/
        else
          v76 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 2 * v75); /*0x6f542b*/
        v18 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, int *))v2->RadioClass + 18))(v2, &v86); /*0x6f5439*/
        *(_DWORD *)v77.__pad_0 = *v18; /*0x6f543e*/
        v77.Coord3D_field_0x04 = v18[1]; /*0x6f5445*/
        v19 = v18[2]; /*0x6f544b*/
        vtable0 = (int (__thiscall **)(TechnoClass *))v2->RadioClass; /*0x6f544e*/
        v77.Coord3D_field_0x08 = v19; /*0x6f5451*/
        if ( vtable0[11](v2) != 15 ) /*0x6f545b*/
        {
          v79 = *(_DWORD *)v77.__pad_0 - v16; /*0x6f5472*/
          Coord3D_field_0x08 = v77.Coord3D_field_0x08; /*0x6f547a*/
          v80 = v17 + v77.Coord3D_field_0x04; /*0x6f5487*/
          v78 = *(Coord3D *)Coord::Subtract( /*0x6f5498*/
                              (Coord *)&v86,
                              v16 + *(_DWORD *)v77.__pad_0,
                              v17 + v77.Coord3D_field_0x04,
                              v77.Coord3D_field_0x08);
          DrawTacticalLine3D(&v78, &v79, v76); /*0x6f54b7*/
          *(_DWORD *)v82.__pad_0 = -v17; /*0x6f54c9*/
          v21 = Coord::Subtract( /*0x6f54db*/
                  (Coord *)&v86,
                  v16 + *(_DWORD *)v77.__pad_0,
                  v77.Coord3D_field_0x04 - v17,
                  v77.Coord3D_field_0x08);
          v79 = *v21; /*0x6f54e2*/
          v80 = v21[1]; /*0x6f54ee*/
          Coord3D_field_0x08 = v21[2]; /*0x6f54fb*/
          v78 = *(Coord3D *)Coord::Subtract( /*0x6f5512*/
                              (Coord *)&v86,
                              v16 + *(_DWORD *)v77.__pad_0,
                              v17 + v77.Coord3D_field_0x04,
                              v77.Coord3D_field_0x08);
          DrawTacticalLine3D(&v78, &v79, v76); /*0x6f5531*/
          v78 = *(Coord3D *)Coord::Subtract( /*0x6f5557*/
                              (Coord *)&v86,
                              *(_DWORD *)v77.__pad_0 - v16,
                              v17 + v77.Coord3D_field_0x04,
                              v14 + v77.Coord3D_field_0x08);
          Coord::Subtract((Coord *)&v79, -v16, v17, 0); /*0x6f5571*/
          v22 = Coord::Subtract( /*0x6f559b*/
                  (Coord *)&v86,
                  *(_DWORD *)v77.__pad_0 + v79,
                  v80 + v77.Coord3D_field_0x04,
                  Coord3D_field_0x08 + v77.Coord3D_field_0x08);
          v83 = *v22; /*0x6f55a2*/
          v84 = v22[1]; /*0x6f55ae*/
          v85 = v22[2]; /*0x6f55bd*/
          DrawTacticalLine3D(&v83, (int *)v78.__pad_0, v76); /*0x6f55c1*/
          v23 = *(_DWORD *)v82.__pad_0; /*0x6f55ce*/
          v24 = Coord::Subtract( /*0x6f55e3*/
                  (Coord *)&v86,
                  v16 + *(_DWORD *)v77.__pad_0,
                  *(_DWORD *)v82.__pad_0 + v77.Coord3D_field_0x04,
                  v14 + v77.Coord3D_field_0x08);
          v83 = *v24; /*0x6f55ea*/
          v84 = v24[1]; /*0x6f55f1*/
          v85 = v24[2]; /*0x6f5600*/
          v25 = Coord::Subtract( /*0x6f5613*/
                  (Coord *)&v86,
                  v16 + *(_DWORD *)v77.__pad_0,
                  v23 + v77.Coord3D_field_0x04,
                  v77.Coord3D_field_0x08);
          v79 = *v25; /*0x6f561a*/
          v80 = v25[1]; /*0x6f5626*/
          Coord3D_field_0x08 = v25[2]; /*0x6f5635*/
          DrawTacticalLine3D(&v79, &v83, v76); /*0x6f5639*/
          v2 = retaddr; /*0x6f563e*/
        }
        if ( v2->? > 0 /*0x6f5667*/
          && ((unsigned __int8)HouseClass::IsAlliedWith((#375 *)v2->owner, (#375 *)dword_A83D4C)
           || *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6118)) )
        {
          (*((void (__thiscall **)(TechnoClass *, int *, int *))v2->RadioClass + 274))(v2, v103, v104); /*0x6f5686*/
        }
        if ( (*((int (__thiscall **)(TechnoClass *))v2->RadioClass + 11))(v2) == 15 ) /*0x6f5697*/
        {
          Coord::Subtract((Coord *)&v89, v15 / 2, v17, 0); /*0x6f5a06*/
          v47 = Coord::Subtract( /*0x6f5a30*/
                  (Coord *)&v92,
                  *(_DWORD *)v77.__pad_0 + v89,
                  v90 + v77.Coord3D_field_0x04,
                  v91 + v77.Coord3D_field_0x08);
          v86 = *v47; /*0x6f5a39*/
          v87 = v47[1]; /*0x6f5a45*/
          v88 = v47[2]; /*0x6f5a4c*/
          *(_DWORD *)v82.__pad_0 = v15 / -2; /*0x6f5a55*/
          Coord::Subtract((Coord *)&v83, v15 / -2, v17, 0); /*0x6f5a59*/
          v78 = *(Coord3D *)Coord::Subtract( /*0x6f5a8c*/
                              (Coord *)&v92,
                              *(_DWORD *)v77.__pad_0 + v83,
                              v84 + v77.Coord3D_field_0x04,
                              v85 + v77.Coord3D_field_0x08);
          v48 = (Coord3D *)Coord3D::Add(&v78, v95, &v78); /*0x6f5ace*/
          v49 = (Coord3D *)Coord3D::Add(v48, v99, &v78); /*0x6f5ad5*/
          v50 = (Coord *)Coord3D::Add(v49, v97, &v86); /*0x6f5adc*/
          v51 = Coord::Divide(v50, &v92, 4); /*0x6f5ae3*/
          v79 = *v51; /*0x6f5aea*/
          v80 = v51[1]; /*0x6f5af1*/
          Coord3D_field_0x08 = v51[2]; /*0x6f5afc*/
          v52 = (int)*g_TacticalClass_Instance; /*0x6f5b0e*/
          if ( v78.Coord3D_field_0x08 <= Coord3D_field_0x08 ) /*0x6f5b11*/
            (*(void (__stdcall **)(int *, Coord3D *, int, _DWORD, int, int))(v52 + 96))( /*0x6f5b28*/
              &v79,
              &v78,
              v76,
              0,
              Coord3D_field_0x04,
              v74);
          else
            (*(void (__stdcall **)(Coord3D *, int *, int, _DWORD, int, int))(v52 + 96))( /*0x6f5b1c*/
              &v78,
              &v79,
              v76,
              0,
              Coord3D_field_0x04,
              v74);
          Coord::Subtract((Coord *)&v88, v82.Coord3D_field_0x08, v17, v14); /*0x6f5b36*/
          v53 = Coord::Subtract( /*0x6f5b63*/
                  (Coord *)&v96,
                  v77.Coord3D_field_0x08 + v88,
                  v89 + *(_DWORD *)v78.__pad_0,
                  v90 + v78.Coord3D_field_0x04);
          v85 = *v53; /*0x6f5b6c*/
          v86 = v53[1]; /*0x6f5b74*/
          v87 = v53[2]; /*0x6f5b84*/
          Coord::Subtract((Coord *)&v91, v82.Coord3D_field_0x08, v17, 0); /*0x6f5b88*/
          v54 = Coord::Subtract( /*0x6f5bb2*/
                  (Coord *)&v96,
                  v77.Coord3D_field_0x08 + v91,
                  v92 + *(_DWORD *)v78.__pad_0,
                  v93 + v78.Coord3D_field_0x04);
          v78.Coord3D_field_0x08 = *v54; /*0x6f5bbb*/
          v79 = v54[1]; /*0x6f5bc7*/
          v80 = v54[2]; /*0x6f5bd3*/
          v55 = (Coord3D *)Coord3D::Add((Coord3D *)&v78.Coord3D_field_0x08, &v100, &v78.Coord3D_field_0x08); /*0x6f5bfa*/
          v56 = (Coord3D *)Coord3D::Add(v55, &v98, &v78.Coord3D_field_0x08); /*0x6f5c01*/
          v57 = (Coord *)Coord3D::Add(v56, &v94, &v85); /*0x6f5c08*/
          v58 = Coord::Divide(v57, &v96, 4); /*0x6f5c0f*/
          Coord3D_field_0x08 = *v58; /*0x6f5c16*/
          *(_DWORD *)v82.__pad_0 = v58[1]; /*0x6f5c1d*/
          v82.Coord3D_field_0x04 = v58[2]; /*0x6f5c30*/
          v59 = (int)*g_TacticalClass_Instance; /*0x6f5c38*/
          if ( v80 <= v82.Coord3D_field_0x04 ) /*0x6f5c3d*/
            (*(void (__stdcall **)(int *, int *, int, _DWORD))(v59 + 96))( /*0x6f5c54*/
              &Coord3D_field_0x08,
              &v78.Coord3D_field_0x08,
              v77.Coord3D_field_0x04,
              0);
          else
            (*(void (__stdcall **)(int *, int *, int, _DWORD))(v59 + 96))( /*0x6f5c48*/
              &v78.Coord3D_field_0x08,
              &Coord3D_field_0x08,
              v77.Coord3D_field_0x04,
              0);
          v60 = -v17; /*0x6f5c57*/
          Coord::Subtract((Coord *)&v88, v15 / 2, v60, 0); /*0x6f5c61*/
          v61 = Coord::Subtract( /*0x6f5c8b*/
                  (Coord *)&v96,
                  v77.Coord3D_field_0x08 + v88,
                  v89 + *(_DWORD *)v78.__pad_0,
                  v90 + v78.Coord3D_field_0x04);
          v85 = *v61; /*0x6f5c93*/
          v86 = v61[1]; /*0x6f5c9c*/
          v87 = v61[2]; /*0x6f5ca7*/
          Coord::Subtract((Coord *)&v91, v15 / 2, v60, v14); /*0x6f5cab*/
          v62 = Coord::Subtract( /*0x6f5cd5*/
                  (Coord *)&v96,
                  v77.Coord3D_field_0x08 + v91,
                  v92 + *(_DWORD *)v78.__pad_0,
                  v93 + v78.Coord3D_field_0x04);
          v78.Coord3D_field_0x08 = *v62; /*0x6f5cde*/
          v79 = v62[1]; /*0x6f5cea*/
          v80 = v62[2]; /*0x6f5cf6*/
          v63 = (Coord3D *)Coord3D::Add((Coord3D *)&v78.Coord3D_field_0x08, &v100, &v78.Coord3D_field_0x08); /*0x6f5d1d*/
          v64 = (Coord3D *)Coord3D::Add(v63, &v98, &v78.Coord3D_field_0x08); /*0x6f5d24*/
          v65 = (Coord *)Coord3D::Add(v64, &v94, &v85); /*0x6f5d2b*/
          v66 = Coord::Divide(v65, &v96, 4); /*0x6f5d32*/
          Coord3D_field_0x08 = *v66; /*0x6f5d39*/
          *(_DWORD *)v82.__pad_0 = v66[1]; /*0x6f5d40*/
          v82.Coord3D_field_0x04 = v66[2]; /*0x6f5d4b*/
          v74 = 0; /*0x6f5d5b*/
          v67 = (int)*g_TacticalClass_Instance; /*0x6f5d5d*/
          Coord3D_field_0x04 = v77.Coord3D_field_0x04; /*0x6f5d5f*/
          if ( v80 <= v82.Coord3D_field_0x04 ) /*0x6f5d60*/
            (*(void (__stdcall **)(int *, int *))(v67 + 96))(&Coord3D_field_0x08, &v78.Coord3D_field_0x08); /*0x6f5d77*/
          else
            (*(void (__stdcall **)(int *, int *))(v67 + 96))(&v78.Coord3D_field_0x08, &Coord3D_field_0x08); /*0x6f5d6b*/
          Coord::Subtract((Coord *)&v86, *(int *)v82.__pad_0, v60, v14); /*0x6f5d85*/
          v68 = Coord::Subtract( /*0x6f5db2*/
                  (Coord *)v95,
                  *(_DWORD *)v77.__pad_0 + v86,
                  v87 + v77.Coord3D_field_0x04,
                  v88 + v77.Coord3D_field_0x08);
          v89 = *v68; /*0x6f5dba*/
          v90 = v68[1]; /*0x6f5dc3*/
          v91 = v68[2]; /*0x6f5dce*/
          Coord::Subtract((Coord *)&v79, v15 / 2, v60, v14); /*0x6f5dd2*/
          v69 = Coord3D::Add(&v77, &v92, &v79); /*0x6f5de5*/
          v83 = *v69; /*0x6f5dec*/
          v84 = v69[1]; /*0x6f5df3*/
          v85 = v69[2]; /*0x6f5dfe*/
          globalHelper_0F6030(&v83, &v89, v76); /*0x6f5e0b*/
        }
        else
        {
          Coord::Subtract((Coord *)&v83, v15 / 2, v17, v14); /*0x6f56a4*/
          v26 = Coord::Subtract( /*0x6f56ce*/
                  (Coord *)&v86,
                  *(_DWORD *)v77.__pad_0 + v83,
                  v84 + v77.Coord3D_field_0x04,
                  v85 + v77.Coord3D_field_0x08);
          v79 = *v26; /*0x6f56d5*/
          v80 = v26[1]; /*0x6f56e1*/
          Coord3D_field_0x08 = v26[2]; /*0x6f56ee*/
          v82 = *(Coord3D *)Coord::Subtract( /*0x6f5707*/
                              (Coord *)&v86,
                              v16 + *(_DWORD *)v77.__pad_0,
                              v17 + v77.Coord3D_field_0x04,
                              v77.Coord3D_field_0x08);
          v27 = (Coord3D *)Coord3D::Add(&v82, v97, &v82); /*0x6f5746*/
          v28 = (Coord3D *)Coord3D::Add(v27, v99, &v82); /*0x6f574d*/
          v29 = (Coord *)Coord3D::Add(v28, &v89, &v79); /*0x6f5754*/
          v78 = *(Coord3D *)Coord::Divide(v29, &v86, 4); /*0x6f5764*/
          v30 = (int)*g_TacticalClass_Instance; /*0x6f5786*/
          if ( v82.Coord3D_field_0x08 <= v78.Coord3D_field_0x08 ) /*0x6f5789*/
            (*(void (__stdcall **)(Coord3D *, Coord3D *, int, _DWORD, int, int))(v30 + 96))( /*0x6f57a0*/
              &v78,
              &v82,
              v76,
              0,
              Coord3D_field_0x04,
              v74);
          else
            (*(void (__stdcall **)(Coord3D *, Coord3D *, int, _DWORD, int, int))(v30 + 96))( /*0x6f5794*/
              &v82,
              &v78,
              v76,
              0,
              Coord3D_field_0x04,
              v74);
          Coord::Subtract((Coord *)&v85, v15 / 2, v17, v14); /*0x6f57aa*/
          v31 = Coord::Subtract( /*0x6f57d7*/
                  (Coord *)&v98,
                  v77.Coord3D_field_0x08 + v85,
                  v86 + *(_DWORD *)v78.__pad_0,
                  v87 + v78.Coord3D_field_0x04);
          v91 = *v31; /*0x6f57df*/
          v92 = v31[1]; /*0x6f57ea*/
          v93 = v31[2]; /*0x6f57f7*/
          Coord::Subtract((Coord *)&Coord3D_field_0x08, v15 / 2, -v17, v14); /*0x6f57fb*/
          v32 = Coord::Subtract( /*0x6f5828*/
                  (Coord *)&v98,
                  v77.Coord3D_field_0x08 + Coord3D_field_0x08,
                  *(_DWORD *)v82.__pad_0 + *(_DWORD *)v78.__pad_0,
                  v82.Coord3D_field_0x04 + v78.Coord3D_field_0x04);
          v82.Coord3D_field_0x08 = *v32; /*0x6f5831*/
          v83 = v32[1]; /*0x6f5838*/
          v84 = v32[2]; /*0x6f584a*/
          v33 = (Coord3D *)Coord3D::Add((Coord3D *)&v82.Coord3D_field_0x08, &v94, &v82.Coord3D_field_0x08); /*0x6f5873*/
          v34 = (Coord3D *)Coord3D::Add(v33, &v88, &v82.Coord3D_field_0x08); /*0x6f587a*/
          v35 = (Coord *)Coord3D::Add(v34, &v100, &v91); /*0x6f5881*/
          v36 = Coord::Divide(v35, &v98, 4); /*0x6f5888*/
          v78.Coord3D_field_0x08 = *v36; /*0x6f588f*/
          v79 = v36[1]; /*0x6f5896*/
          v37 = v36[2]; /*0x6f589a*/
          v38 = v84 <= v37; /*0x6f58a5*/
          v80 = v37; /*0x6f58ad*/
          v39 = (int)*g_TacticalClass_Instance; /*0x6f58b4*/
          if ( v38 ) /*0x6f58b6*/
            (*(void (__stdcall **)(int *, int *, int, _DWORD))(v39 + 96))( /*0x6f58cd*/
              &v78.Coord3D_field_0x08,
              &v82.Coord3D_field_0x08,
              v77.Coord3D_field_0x04,
              0);
          else
            (*(void (__stdcall **)(int *, int *, int, _DWORD))(v39 + 96))( /*0x6f58c1*/
              &v82.Coord3D_field_0x08,
              &v78.Coord3D_field_0x08,
              v77.Coord3D_field_0x04,
              0);
          Coord::Subtract((Coord *)&v91, v15 / 2, v17, v14); /*0x6f58d7*/
          v40 = Coord::Subtract( /*0x6f5901*/
                  (Coord *)&v94,
                  v77.Coord3D_field_0x08 + v91,
                  v92 + *(_DWORD *)v78.__pad_0,
                  v93 + v78.Coord3D_field_0x04);
          Coord3D_field_0x08 = *v40; /*0x6f5909*/
          *(_DWORD *)v82.__pad_0 = v40[1]; /*0x6f5915*/
          v82.Coord3D_field_0x04 = v40[2]; /*0x6f591f*/
          Coord::Subtract((Coord *)&v85, v15 / -2, v17, v14); /*0x6f5923*/
          v41 = Coord::Subtract( /*0x6f594d*/
                  (Coord *)&v94,
                  v77.Coord3D_field_0x08 + v85,
                  v86 + *(_DWORD *)v78.__pad_0,
                  v87 + v78.Coord3D_field_0x04);
          v82.Coord3D_field_0x08 = *v41; /*0x6f5956*/
          v83 = v41[1]; /*0x6f5962*/
          v84 = v41[2]; /*0x6f596e*/
          v42 = (Coord3D *)Coord3D::Add((Coord3D *)&v82.Coord3D_field_0x08, &v88, &v82.Coord3D_field_0x08); /*0x6f5995*/
          v43 = (Coord3D *)Coord3D::Add(v42, &v100, &v82.Coord3D_field_0x08); /*0x6f599c*/
          v44 = (Coord *)Coord3D::Add(v43, &v98, &Coord3D_field_0x08); /*0x6f59a3*/
          v45 = Coord::Divide(v44, &v94, 4); /*0x6f59aa*/
          v78.Coord3D_field_0x08 = *v45; /*0x6f59b1*/
          v79 = v45[1]; /*0x6f59b8*/
          v80 = v45[2]; /*0x6f59c3*/
          v74 = 0; /*0x6f59d3*/
          v46 = (int)*g_TacticalClass_Instance; /*0x6f59d5*/
          Coord3D_field_0x04 = v77.Coord3D_field_0x04; /*0x6f59d7*/
          if ( v84 <= v80 ) /*0x6f59d8*/
            (*(void (__stdcall **)(int *, int *))(v46 + 96))(&v78.Coord3D_field_0x08, &v82.Coord3D_field_0x08); /*0x6f59f6*/
          else
            (*(void (__stdcall **)(int *, int *))(v46 + 96))(&v82.Coord3D_field_0x08, &v78.Coord3D_field_0x08); /*0x6f59e4*/
        }
        v11 = v104; /*0x6f5e10*/
      }
      v70 = v103; /*0x6f5e17*/
      result = (*((int (__thiscall **)(TechnoClass *, int *, int *))v2->RadioClass + 275))(v2, v103, v11); /*0x6f5e27*/
    }
    else
    {
      v70 = v102; /*0x6f5e30*/
    }
    LOBYTE(result) = v2->isMouseHovering; /*0x6f5e37*/
    if ( (_BYTE)result ) /*0x6f5e3f*/
    {
      LOBYTE(result) = v2->?; /*0x6f5e41*/
      if ( !(_BYTE)result ) /*0x6f5e49*/
      {
        v71 = (*((int (__thiscall **)(TechnoClass *, Object *, int))v2->RadioClass + 50))( /*0x6f5e57*/
                v2,
                dword_A83D4C,
                Coord3D_field_0x04);
        v72 = (int (__thiscall **)(TechnoClass *, int, _DWORD))v2->RadioClass; /*0x6f5e5d*/
        if ( v71 ) /*0x6f5e64*/
        {
          result = v72[52](v2, 1, v74); /*0x6f5e68*/
          if ( result ) /*0x6f5e70*/
            result = (*((int (__thiscall **)(TechnoClass *, int *, int *, int))v2->RadioClass + 275))(v2, v70, v11, 1); /*0x6f5e7b*/
        }
        else
        {
          result = ((int (__thiscall **)(TechnoClass *, int, int *))v72)[275](v2, (int)v70, v11); /*0x6f5e87*/
        }
      }
    }
    if ( (TechnoClass *)g_BuildingLoadQueue_Array.? == v2 ) /*0x6f5e93*/
    {
      result = g_BuildingLoadQueue_Array.?[0]; /*0x6f5e95*/
      if ( g_BuildingLoadQueue_Array.?[0] > 0 ) /*0x6f5e9c*/
      {
        result = Timer::GetRemainingMs((Timer *)&g_BuildingLoadQueue_Array.?); /*0x6f5ea3*/
        if ( result > 0 ) /*0x6f5eaa*/
          return DrawToSurfaceSHP( /*0x6f5ede*/
                   (int)g_DSurface_Hidden_2,
                   *(int *)&stru_87F5F0.__pad_58[124],
                   FileSystem_TALKBUBL_SHP,
                   g_BuildingLoadQueue_Array.?[0] - 1,
                   v70,
                   v11,
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
    }
  }
  return result; /*0x6f5ee3*/
}


// ==== 0x006F5EF0  DrawTacticalLine3D  this=Coord  sig=csp ====
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
  lpVtbl = g_TacticalClass_Instance->__tail_0; /*0x6f5fd1*/
  if ( v15 <= v22 ) /*0x6f5fd3*/
    ((void (__stdcall *)(_DWORD *, _DWORD *, int, _DWORD, int, int))lpVtbl[3].QueryInterface)(v21, a1, a3, 0, v19, v20); /*0x6f5fe3*/
  else
    ((void (__stdcall *)(_DWORD *, _DWORD *, int, _DWORD, int, int))lpVtbl[3].QueryInterface)(a1, v21, a3, 0, v19, v20); /*0x6f5fdb*/
  v17 = g_TacticalClass_Instance->__tail_0; /*0x6f5ff8*/
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
  lpVtbl = g_TacticalClass_Instance->__tail_0; /*0x6f6095*/
  if ( v6 <= v8 / 4 ) /*0x6f6098*/
    return ((int (__stdcall *)(_DWORD *, int *, int, _DWORD))lpVtbl[3].QueryInterface)(v11, a1, a3, 0); /*0x6f60b3*/
  else
    return ((int (__stdcall *)(int *, _DWORD *, int, _DWORD))lpVtbl[3].QueryInterface)(a1, v11, a3, 0); /*0x6f60a0*/
}



// ==== 0x006F60C0  TechnoClass::g_var_370bdd  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::g_var_370bdd(TechnoClass *this)
{
  int result; // eax

  return result; /*0x6f60c0*/
}



// ==== 0x006F60D0  TechnoClass::DrawSelectionBox  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::DrawSelectionBox(TechnoClass *this)
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

  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this); /*0x6f60d8*/
  if ( result == 6 ) /*0x6f60de*/
  {
    LOBYTE(result) = this->?; /*0x6f60e4*/
    if ( (_BYTE)result ) /*0x6f60ec*/
    {
      result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this); /*0x6f60f6*/
      if ( result != 15 ) /*0x6f60fc*/
      {
        v25 = v1; /*0x6f6106*/
        v4 = 15; /*0x6f6109*/
        if ( (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 114))(this, v25) < -4 ) /*0x6f6117*/
          v4 = 12; /*0x6f6119*/
        v5 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6f6122*/
        v6 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v5 + 124))(v5, &v41); /*0x6f6134*/
        v7 = *v6; /*0x6f6136*/
        v8 = v6[1]; /*0x6f6138*/
        v30 = v6[2]; /*0x6f613e*/
        v28 = v7 / 2; /*0x6f6147*/
        v9 = v8 / 2; /*0x6f6157*/
        v29 = v8 / 2; /*0x6f615c*/
        if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x6f6163*/
          v27 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + v4); /*0x6f6170*/
        else
          v27 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 2 * v4); /*0x6f6182*/
        v10 = (int *)(*((int (__thiscall **)(TechnoClass *, int *))this->RadioClass + 18))(this, &v40); /*0x6f618f*/
        v11 = *v10; /*0x6f6192*/
        v12 = -v9; /*0x6f6198*/
        v13 = v10[1]; /*0x6f619a*/
        v14 = v10[2]; /*0x6f61a3*/
        Coord::Subtract((Coord *)&v30, -v27, v12, v29); /*0x6f61b1*/
        v15 = Coord::Subtract((Coord *)v42, v11 + v30, v13 + v31, v14 + v32); /*0x6f61d1*/
        v36 = *v15; /*0x6f61da*/
        v37 = v15[1]; /*0x6f61e2*/
        v38 = v15[2]; /*0x6f61f2*/
        Coord::Subtract((Coord *)&v33, -v27, v12, 0); /*0x6f61f6*/
        v16 = Coord::Subtract((Coord *)v42, v11 + v33, v13 + v34, v14 + v35); /*0x6f6216*/
        v39 = *v16; /*0x6f621d*/
        v40 = v16[1]; /*0x6f6229*/
        v41 = v16[2]; /*0x6f6238*/
        DrawTacticalLine3D(&v39, &v36, v26); /*0x6f623c*/
        Coord::Subtract((Coord *)&v39, v27, v12, 0); /*0x6f624d*/
        v17 = Coord::Subtract((Coord *)v42, v11 + v39, v13 + v40, v14 + v41); /*0x6f626d*/
        v33 = *v17; /*0x6f6274*/
        v34 = v17[1]; /*0x6f627b*/
        v35 = v17[2]; /*0x6f628e*/
        Coord::Subtract((Coord *)&v36, -v27, v12, 0); /*0x6f6292*/
        v18 = Coord::Subtract((Coord *)v42, v11 + v36, v13 + v37, v14 + v38); /*0x6f62b2*/
        v30 = *v18; /*0x6f62b9*/
        v31 = v18[1]; /*0x6f62c5*/
        v32 = v18[2]; /*0x6f62d4*/
        DrawTacticalLine3D(&v30, &v33, v26); /*0x6f62d8*/
        Coord::Subtract((Coord *)&v39, -v27, v28, 0); /*0x6f62ed*/
        v19 = Coord::Subtract((Coord *)v42, v11 + v39, v13 + v40, v14 + v41); /*0x6f630d*/
        v33 = *v19; /*0x6f6316*/
        v34 = v19[1]; /*0x6f6322*/
        v35 = v19[2]; /*0x6f632e*/
        Coord::Subtract((Coord *)&v36, -v27, v12, 0); /*0x6f6332*/
        v20 = Coord::Subtract((Coord *)v42, v11 + v36, v13 + v37, v14 + v38); /*0x6f6352*/
        v30 = *v20; /*0x6f6359*/
        v31 = v20[1]; /*0x6f6364*/
        v32 = v20[2]; /*0x6f636b*/
        DrawTacticalLine3D(&v30, &v33, v26); /*0x6f6378*/
        v21 = Coord::Subtract((Coord *)v42, v11 - v27, v13 + v28, v14 + v29); /*0x6f6398*/
        v36 = *v21; /*0x6f639f*/
        v37 = v21[1]; /*0x6f63ab*/
        v38 = v21[2]; /*0x6f63bc*/
        Coord::Subtract((Coord *)&v39, -v27, v12, v29); /*0x6f63c0*/
        v22 = Coord::Subtract((Coord *)v42, v11 + v39, v13 + v40, v14 + v41); /*0x6f63e0*/
        v33 = *v22; /*0x6f63e7*/
        v34 = v22[1]; /*0x6f63ee*/
        v35 = v22[2]; /*0x6f63fd*/
        DrawTacticalLine3D(&v33, &v36, v26); /*0x6f6406*/
        v23 = Coord::Subtract((Coord *)v42, v11 + v27, v13 + v12, v14 + v29); /*0x6f6423*/
        v36 = *v23; /*0x6f642a*/
        v37 = v23[1]; /*0x6f6431*/
        v38 = v23[2]; /*0x6f6447*/
        Coord::Subtract((Coord *)&v39, -v27, v12, v29); /*0x6f644b*/
        v24 = Coord::Subtract((Coord *)v42, v11 + v39, v40 + v13, v41 + v14); /*0x6f6469*/
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
int __thiscall BuildingClass::DrawHealthBar(TechnoClass *this)
{
  double v1; // st7
  int v3; // eax
  int *v4; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // ebp
  _DWORD *v8; // eax
  int v9; // ebx
  int *v10; // eax
  int v11; // edi
  int *v12; // eax
  int v13; // ebx
  int *v14; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // ebp
  _DWORD *v18; // edi
  int v19; // ebp
  int v20; // ecx
  bool v21; // zf
  int v22; // ebp
  int v23; // ecx
  char v24; // bl
  int result; // eax
  int v26; // ecx
  int (__thiscall **vtable0)(TechnoClass *, int *, _DWORD *, int *); // eax
  char isSelected; // al
  _DWORD *v29; // edi
  int v30; // edx
  int v31; // ebx
  int v32; // ebp
  int v33; // edx
  int v34; // eax
  int i; // ebx
  int v40; // eax
  int v41; // eax
  int v42; // [esp+10h] [ebp-3Ch]
  unsigned int v43; // [esp+14h] [ebp-38h]
  unsigned int v44; // [esp+14h] [ebp-38h]
  int v45; // [esp+18h] [ebp-34h]
  int v46; // [esp+18h] [ebp-34h]
  int v47; // [esp+18h] [ebp-34h]
  int v48; // [esp+1Ch] [ebp-30h]
  int v49; // [esp+1Ch] [ebp-30h]
  int v50; // [esp+20h] [ebp-2Ch]
  int v51; // [esp+24h] [ebp-28h]
  int v52; // [esp+28h] [ebp-24h]
  int v53; // [esp+2Ch] [ebp-20h] BYREF
  int v54; // [esp+30h] [ebp-1Ch]
  int v55; // [esp+34h] [ebp-18h] BYREF
  int v56; // [esp+38h] [ebp-14h]
  int v57; // [esp+40h] [ebp-Ch] BYREF
  int v58; // [esp+44h] [ebp-8h]
  int v59; // [esp+48h] [ebp-4h]
  _DWORD *v60; // [esp+50h] [ebp+4h]
  int v61; // [esp+50h] [ebp+4h]
  int v62; // [esp+50h] [ebp+4h]
  int v63; // [esp+50h] [ebp+4h]
  int v64; // [esp+50h] [ebp+4h]
  int *v65; // [esp+54h] [ebp+8h]

  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6 )
  {
    (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 114))(this); /*0x6f64bb*/
    v3 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6f64c5*/
    v4 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v3 + 124))(v3, &v55); /*0x6f64d4*/
    v5 = *v4; /*0x6f64d7*/
    v6 = v4[1]; /*0x6f64dd*/
    v7 = v4[2]; /*0x6f64e0*/
    v8 = Coord::Subtract((Coord *)&v55, *v4 / 2, v6 / 2, v7 / 2); /*0x6f64fb*/
    v9 = v6 - v8[1]; /*0x6f650b*/
    v57 = *v8 - v5; /*0x6f6523*/
    v58 = v9; /*0x6f652e*/
    v59 = v7; /*0x6f6532*/
    v10 = Coord::To_ScreenRaw(&v55, &v57); /*0x6f6536*/
    v48 = *v10; /*0x6f6541*/
    v11 = v10[1]; /*0x6f6549*/
    v50 = v11; /*0x6f6564*/
    v58 = -v58; /*0x6f656a*/
    v12 = Coord::To_ScreenRaw(&v55, &v57); /*0x6f656e*/
    v53 = *v12; /*0x6f6579*/
    v13 = v12[1]; /*0x6f6581*/
    v59 = 0; /*0x6f6592*/
    v58 = -v58; /*0x6f659a*/
    v14 = Coord::To_ScreenRaw(&v55, &v57); /*0x6f659e*/
    v51 = *v14; /*0x6f65a5*/
    v52 = v14[1]; /*0x6f65c0*/
    v58 = -v58; /*0x6f65cb*/
    v15 = (v11 - v13) / 2; /*0x6f65cf*/
    v45 = v15; /*0x6f65d3*/
    BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x6f65d7*/
    __asm { fimul [esp+4Ch+var_34] } /*0x6f65dc*/
    LOWORD(v16) = Math::RoundToInt(v1); /*0x6f65e0*/
    v17 = v16; /*0x6f65e5*/
    v42 = v16; /*0x6f65ee*/
    if ( v16 <= 1 ) /*0x6f65f2*/
    {
      v42 = 1; /*0x6f65f4*/
      v17 = 1; /*0x6f65f8*/
    }
    if ( v17 >= v15 ) /*0x6f65fc*/
    {
      v42 = v15; /*0x6f65fe*/
      v17 = v15; /*0x6f6602*/
    }
    v43 = 1; /*0x6f6606*/
    if ( ObjectClass::IsYellowHP((ObjectClass *)this) ) /*0x6f660a*/
    {
      v43 = 2; /*0x6f6613*/
    }
    else if ( (unsigned __int8)BuildingClass::IsHealthLow((BuildingClass *)this) ) /*0x6f661f*/
    {
      v43 = 4; /*0x6f6628*/
    }
    v18 = v60; /*0x6f6630*/
    v56 = 2 - 2 * v15; /*0x6f6640*/
    if ( v17 > 0 ) /*0x6f6644*/
    {
      v19 = 0; /*0x6f664e*/
      v61 = 0; /*0x6f6650*/
      v46 = v42; /*0x6f6654*/
      do /*0x6f66d6*/
      {
        v20 = v50 + v18[1]; /*0x6f666b*/
        v53 = v48 + *v18 + 4 * v15 + 3 - v19; /*0x6f6673*/
        v54 = v56 + v20 + 2 - v61; /*0x6f6698*/
        DrawToSurfaceSHP( /*0x6f66ba*/
          (int)g_DSurface_Hidden_2,
          *(int *)&stru_87F5F0.__pad_58[124],
          FileSystem_PIPS_SHP,
          v43,
          &v53,
          v65,
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
        v19 += 4; /*0x6f66c7*/
        v21 = v46 == 1; /*0x6f66cd*/
        v61 -= 2; /*0x6f66ce*/
        --v46; /*0x6f66d2*/
      }
      while ( !v21 ); /*0x6f66d6*/
      v17 = v42; /*0x6f66d8*/
    }
    if ( v17 < v15 ) /*0x6f66de*/
    {
      v22 = -2 * v17; /*0x6f66ec*/
      v62 = 4 * v42; /*0x6f66f7*/
      v47 = v15 - v42; /*0x6f66fb*/
      do /*0x6f677b*/
      {
        v23 = v50 + v18[1] + v56 + 2; /*0x6f6718*/
        v53 = v48 + *v18 + 4 * v15 + 3 - v62; /*0x6f6728*/
        v54 = v23 - v22; /*0x6f6741*/
        DrawToSurfaceSHP( /*0x6f675f*/
          (int)g_DSurface_Hidden_2,
          *(int *)&stru_87F5F0.__pad_58[124],
          FileSystem_PIPS_SHP,
          0,
          &v53,
          v65,
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
        v22 -= 2; /*0x6f676f*/
        v21 = v47 == 1; /*0x6f6772*/
        v62 += 4; /*0x6f6773*/
        --v47; /*0x6f6777*/
      }
      while ( !v21 ); /*0x6f677b*/
    }
    v24 = 0; /*0x6f6789*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, (#375 *)dword_A83D4C) /*0x6f67b0*/
      || ((1 << *((_DWORD *)dword_A83D4C->Object_field_0x34 + 46)) & this->displayProductionTo[0]) != 0 )
    {
      v24 = 1; /*0x6f67b2*/
    }
    if ( this
      && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6
      && *((_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6
                   ? this + 1
                   : (TechnoClass *)1312)->RadioClass
         + 5499) )
    {
      v24 = 1; /*0x6f67e6*/
    }
    result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6f67ec*/
    if ( *(_BYTE *)(result + 984) || v24 ) /*0x6f67fe*/
    {
      v26 = v18[1]; /*0x6f6810*/
      v55 = v51 + *v18; /*0x6f6813*/
      vtable0 = (int (__thiscall **)(TechnoClass *, int *, _DWORD *, int *))this->RadioClass; /*0x6f6817*/
      v56 = v52 + v26; /*0x6f681b*/
      return vtable0[276](this, &v55, v18, v65); /*0x6f682c*/
    }
  }
  else
  {
    v21 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 15; /*0x6f6843*/
    isSelected = this->?; /*0x6f6846*/
    if ( v21 ) /*0x6f684c*/
    {
      v29 = v60; /*0x6f6852*/
      if ( isSelected ) /*0x6f6858*/
      {
        v30 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 992) - 25 + v60[1]; /*0x6f6884*/
        v55 = *v60 + 11; /*0x6f688b*/
        v56 = v30; /*0x6f6899*/
        DrawToSurfaceSHP( /*0x6f68b4*/
          (int)g_DSurface_Hidden_2,
          *(int *)&stru_87F5F0.__pad_58[124],
          FileSystem_PIPBRD_SHP,
          1u,
          &v55,
          v65,
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
      v49 = -5; /*0x6f68c3*/
      v31 = 8; /*0x6f68db*/
      v32 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 992) - 24; /*0x6f68e0*/
    }
    else
    {
      v29 = v60; /*0x6f68e8*/
      if ( isSelected ) /*0x6f68ee*/
      {
        v33 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 992) - 26 + v60[1]; /*0x6f6918*/
        v55 = *v60 + 1; /*0x6f691f*/
        v56 = v33; /*0x6f692d*/
        DrawToSurfaceSHP( /*0x6f6947*/
          (int)g_DSurface_Hidden_2,
          *(int *)&stru_87F5F0.__pad_58[124],
          FileSystem_PIPBRD_SHP,
          0,
          &v55,
          v65,
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
      v49 = -15; /*0x6f6956*/
      v31 = 17; /*0x6f696e*/
      v32 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 992) - 25; /*0x6f6973*/
    }
    v63 = v31; /*0x6f6978*/
    BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x6f697c*/
    __asm { fimul [esp+4Ch+arg_0] } /*0x6f6981*/
    LOWORD(v34) = Math::RoundToInt(v1); /*0x6f6985*/
    v64 = v34; /*0x6f698d*/
    if ( v34 <= 1 ) /*0x6f6991*/
    {
      v64 = 1; /*0x6f6993*/
      v34 = 1; /*0x6f699b*/
    }
    if ( v34 >= v31 ) /*0x6f69a1*/
      v64 = v31; /*0x6f69a3*/
    v44 = 16; /*0x6f69a9*/
    BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x6f69b1*/
    _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6f69b6*/
    __asm /*0x6f69bc*/
    {
      fcomp qword ptr [ecx+1700h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x6f69c7*/
      v44 = 17; /*0x6f69c9*/
    BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x6f69d3*/
    _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6f69d8*/
    __asm /*0x6f69de*/
    {
      fcomp qword ptr [edx+1708h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x6f69e9*/
      v44 = 18; /*0x6f69eb*/
    for ( i = 0; i < v64; ++i ) /*0x6f69fb*/
    {
      v40 = v49 + *v29 + 2 * i; /*0x6f6a0e*/
      v56 = v32 + v29[1]; /*0x6f6a11*/
      v55 = v40; /*0x6f6a15*/
      DrawToSurfaceSHP( /*0x6f6a4a*/
        (int)g_DSurface_Hidden_2,
        *(int *)&stru_87F5F0.__pad_58[124],
        FileSystem_PIPS_SHP,
        v44,
        &v55,
        v65,
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
    if ( (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, (#375 *)dword_A83D4C) /*0x6f6a8c*/
      || (result = this->displayProductionTo[0], ((1 << *((_DWORD *)dword_A83D4C->Object_field_0x34 + 46)) & result) != 0) )
    {
      v41 = *v29 - 10; /*0x6f6a96*/
      v56 = v29[1] + 10; /*0x6f6a99*/
      v55 = v41; /*0x6f6aa1*/
      return (*((int (__thiscall **)(TechnoClass *, int *, _DWORD *, int *))this->RadioClass + 276))( /*0x6f6ab0*/
               this,
               &v55,
               v29,
               v65);
    }
  }
  return result; /*0x6f6832*/
}



// ==== 0x006F6AC0  TechnoClass::CleanupDeploy  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CleanupDeploy(TechnoClass *this)
{
  int DB; // edi
  CellClass *v3; // edi
  int v4; // eax
  int v6; // [esp+0h] [ebp-1Ch]
  int v7[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( this->? || !(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) ) /*0x6f6ad7*/
    return RadioClass::ProcessCmd((RadioClass *)this); /*0x6f6adf*/
  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1518) ) /*0x6f6aef*/
    (*((void (__thiscall **)(TechnoClass *, _DWORD, _DWORD, int, Object *))this->RadioClass + 291))( /*0x6f6b06*/
      this,
      0,
      0,
      1,
      dword_A83D4C);
  else
    (*((void (__thiscall **)(TechnoClass *, _DWORD, _DWORD, _DWORD, _DWORD))this->RadioClass + 291))(this, 0, 0, 0, 0); /*0x6f6b16*/
  v7[0] = this->?[0]; /*0x6f6b25*/
  v7[1] = this->?[1]; /*0x6f6b2c*/
  v7[2] = this->?[2]; /*0x6f6b37*/
  MapClass::RevealArea2( /*0x6f6b4f*/
    (MapClass *)&stru_87F5F0.__pad_58[416],
    v7,
    this->lastSightRange - 3,
    this->lastSightRange + 3,
    0);
  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3281) ) /*0x6f6b5e*/
    (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 262))(this); /*0x6f6b6a*/
  if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1528) ) /*0x6f6b7a*/
    TechnoClass::RemoveFromDynamicVector((TechnoClass *)&stru_87F5D8, (char)this); /*0x6f6b88*/
  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1508) ) /*0x6f6b98*/
  {
    DB = CCINIClass::GetDB((CCINIClass *)this->passengers); /*0x6f6bab*/
    if ( DB ) /*0x6f6baf*/
    {
      do /*0x6f6bc7*/
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)DB + 968))(DB, 0); /*0x6f6bb6*/
        DB = *(_DWORD *)(DB + 48); /*0x6f6bbc*/
      }
      while ( DB && (*(_BYTE *)(DB + 20) & 4) != 0 ); /*0x6f6bc7*/
    }
  }
  HouseClass::RegisterGain((int)this->owner, (int)this, 0); /*0x6f6bd1*/
  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 176))(this) > 0 ) /*0x6f6be2*/
  {
    if ( this && (this->? & 4) != 0 ) /*0x6f6bec*/
    {
      v3 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)this + 686); /*0x6f6bff*/
      if ( v3 ) /*0x6f6c03*/
        goto LABEL_20; /*0x6f6c03*/
    }
    else
    {
      v3 = (CellClass *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 111))(this); /*0x6f6c11*/
      if ( v3 ) /*0x6f6c15*/
      {
LABEL_20:
        v6 = -this->threatPosed; /*0x6f6c17*/
        v4 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 14))(this); /*0x6f6c24*/
        CellClass::SetThreatBounds(v3, v4, v6); /*0x6f6c2a*/
        this->threatPosed = 0; /*0x6f6c2f*/
      }
    }
  }
  if ( this->isRadarTracked ) /*0x6f6c35*/
    (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 294))(this); /*0x6f6c44*/
  Mixer::ReleaseChannel((Mixer *)this->turretRotateSoundController); /*0x6f6c50*/
  this->isTurretRotateSoundPlaying = 1; /*0x6f6c5b*/
  this->turretIsRotating = 0; /*0x6f6c65*/
  Mixer::ReleaseChannel((Mixer *)this->gattlingSoundController); /*0x6f6c6b*/
  this->isGattlingSoundPlaying = 0; /*0x6f6c76*/
  this->unknown_4BC = 0; /*0x6f6c7c*/
  Mixer::ReleaseChannel((Mixer *)this->unusedGattlingSoundController); /*0x6f6c82*/
  this->isUnusedGattlingSoundPlaying = 0; /*0x6f6c87*/
  this->unknown_4D8 = 0; /*0x6f6c8d*/
  return RadioClass::ProcessCmd((RadioClass *)this); /*0x6f6c9a*/
}



// ==== 0x006F6CA0  TechnoClass::FinishDeploy  this=TechnoClass  sig=csp ====
char __userpurge TechnoClass::FinishDeploy@<al>(TechnoClass *this, int a2@<ebx>, int *a3, int a4, __int16 a5)
{
  ObjectClass *v5; // ecx
  TechnoClass *v6; // edi
  int *v7; // esi
  int v9; // edx
  __int16 v10; // ax
  int v11; // eax
  __int16 v12; // cx
  int v13; // edx
  int v14; // edx
  CellClass *v15; // edi
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int *v21; // eax
  int v22; // [esp+Ch] [ebp-28h]
  int v23; // [esp+1Ch] [ebp-18h] BYREF
  int v24[2]; // [esp+20h] [ebp-14h] BYREF
  int v25[3]; // [esp+28h] [ebp-Ch] BYREF

  v6 = this; /*0x6f6ca9*/
  v7 = (int *)v5; /*0x6f6cae*/
  if ( !(unsigned __int8)ObjectClass::Deploy(v5) ) /*0x6f6cb1*/
    return 0; /*0x6f6f2a*/
  LOWORD(this) = (int)v6->RadioClass / 256; /*0x6f6cce*/
  HIWORD(this) = (int)v6->? / 256; /*0x6f6ce6*/
  *((_BYTE *)v7 + 981) = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&this, 1); /*0x6f6cfe*/
  if ( !*((_BYTE *)v7 + 144) ) /*0x6f6d04*/
    return 1; /*0x6f6d0f*/
  (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*v7 + 1160))(v7, 0, 0, 0, 0, 0, a2); /*0x6f6d27*/
  v24[0] = v7[39]; /*0x6f6d39*/
  v9 = v7[152] + 3; /*0x6f6d46*/
  v24[1] = v7[40]; /*0x6f6d49*/
  v25[0] = v7[41]; /*0x6f6d55*/
  MapClass::RevealArea2((MapClass *)&stru_87F5F0.__pad_58[416], v24, 0, v9, 0); /*0x6f6d61*/
  if ( *(_DWORD *)((*(int (__thiscall **)(int *))(*v7 + 132))(v7) + 1528) ) /*0x6f6d70*/
    TechnoClass::checkRange((TechnoClass *)&stru_87F5D8, (int)v7); /*0x6f6d80*/
  HouseClass::RegisterGain_0(v7[135], (BuildingClass *)v7, 0); /*0x6f6d8f*/
  LOBYTE(v10) = 0; /*0x6f6d94*/
  HIBYTE(v10) = a4; /*0x6f6d9a*/
  LOWORD(a4) = v10; /*0x6f6da5*/
  FacingClass::Set_SyncLog((char *)v7 + 904, &a4); /*0x6f6daa*/
  LOWORD(a4) = 0x4000; /*0x6f6dbc*/
  FacingClass::Set_SyncLog((char *)v7 + 880, &a4); /*0x6f6dc3*/
  v11 = (*(int (__thiscall **)(int *))(*v7 + 132))(v7); /*0x6f6dcc*/
  LOBYTE(v12) = 0; /*0x6f6dd2*/
  HIBYTE(v12) = *(_BYTE *)(v11 + 976); /*0x6f6dd9*/
  LOWORD(a4) = 0x4000 - v12; /*0x6f6de5*/
  FacingClass::Update((char *)v7 + 880, &a4); /*0x6f6df5*/
  v13 = *v7; /*0x6f6dfa*/
  v7[295] = 1; /*0x6f6dfe*/
  v7[296] = 0; /*0x6f6e08*/
  if ( (*(int (__thiscall **)(int *))(v13 + 44))(v7) == 15 ) /*0x6f6e19*/
    *((_BYTE *)v7 + 504) = 1; /*0x6f6e1b*/
  (*(void (__thiscall **)(int *, int))(*v7 + 1156))(v7, 1); /*0x6f6e2a*/
  v14 = *v7; /*0x6f6e30*/
  *((_BYTE *)v7 + 504) = 0; /*0x6f6e34*/
  if ( (*(unsigned __int8 (__thiscall **)(int *))(v14 + 512))(v7) ) /*0x6f6e3b*/
    (*(void (__thiscall **)(int *))(*v7 + 492))(v7); /*0x6f6e49*/
  *((_BYTE *)v7 + 1056) = 10 * ((int)v6->? / *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5820)); /*0x6f6e6f*/
  LOWORD(a3) = (int)v6->RadioClass / 256; /*0x6f6e83*/
  HIWORD(a3) = (int)v6->? / 256; /*0x6f6e97*/
  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3, 1) ) /*0x6f6ea4*/
    *((_BYTE *)v7 + 1051) = 0; /*0x6f6ead*/
  v15 = (CellClass *)(*(int (__thiscall **)(int *))(*v7 + 444))(v7); /*0x6f6ebd*/
  if ( v15 ) /*0x6f6ec1*/
  {
    v16 = (*(int (__thiscall **)(int *))(*v7 + 704))(v7); /*0x6f6ec7*/
    v17 = *v7; /*0x6f6ecd*/
    v22 = v16; /*0x6f6ecf*/
    v7[322] = v16; /*0x6f6ed2*/
    v18 = (*(int (__thiscall **)(int *))(v17 + 56))(v7); /*0x6f6ed8*/
    CellClass::SetThreatBounds(v15, v18, v22); /*0x6f6ede*/
  }
  v19 = v7[40]; /*0x6f6ee5*/
  v20 = v7[41]; /*0x6f6ee8*/
  v25[0] = v7[39]; /*0x6f6eeb*/
  v25[1] = v19; /*0x6f6eef*/
  v25[2] = v20; /*0x6f6f04*/
  v21 = Coord::WorldToScreen((Coord *)&stru_87F5F0.__pad_58[416], &v23, v25, 1); /*0x6f6f08*/
  v7[130] = *v21; /*0x6f6f10*/
  v7[131] = v21[1]; /*0x6f6f1a*/
  return 1; /*0x6f6d0e*/
}



// ==== 0x006F6F60  TechnoClass::ComputeSlopeDifference  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ComputeSlopeDifference(TechnoClass *this, int *a2)
{
  double v2; // st7
  _DWORD *v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  void *v8; // esi
  void *v9; // edi
  int SlopeIndex; // ebx
  int v11; // ecx
  int v12; // edi
  int v13; // esi
  int v14; // eax
  int result; // eax
  __int16 v16[2]; // [esp+18h] [ebp-14h] BYREF
  __int16 v17[2]; // [esp+1Ch] [ebp-10h] BYREF
  _BYTE v18[12]; // [esp+20h] [ebp-Ch] BYREF
  int *v19; // [esp+30h] [ebp+4h]

  if ( !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 20))(this) /*0x6f6f7c*/
    || !(*(unsigned __int8 (__thiscall **)(int *))(*a2 + 80))(a2) )
  {
    return 0; /*0x6f70c8*/
  }
  v5 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v18); /*0x6f6f91*/
  LOWORD(v19) = *v5 / 256; /*0x6f6fa4*/
  HIWORD(v19) = v5[1] / 256; /*0x6f6fbd*/
  v6 = *a2; /*0x6f6fc6*/
  *(_DWORD *)v16 = v19; /*0x6f6fca*/
  v7 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(v6 + 72))(a2, v18); /*0x6f6fce*/
  LOWORD(v19) = *v7 / 256; /*0x6f6fe1*/
  HIWORD(v19) = v7[1] / 256; /*0x6f6ffa*/
  *(_DWORD *)v17 = v19; /*0x6f7007*/
  v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x6f7015*/
  v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17); /*0x6f7022*/
  SlopeIndex = Cell::GetSlopeIndex((int)v9); /*0x6f702d*/
  if ( Cell::GetSlopeIndex((int)v8) - SlopeIndex >= 0 ) /*0x6f7037*/
  {
    v12 = Cell::GetSlopeIndex((int)v9); /*0x6f7046*/
    v11 = Cell::GetSlopeIndex((int)v8) - v12; /*0x6f704f*/
  }
  else
  {
    v11 = 0; /*0x6f7039*/
  }
  v13 = v11 * g_BuildingLoadQueue_Array.?[1]; /*0x6f708d*/
  LOWORD(v14) = Math::RoundToInt(v2); /*0x6f7090*/
  Math::Sqrt((double)(v13 * v13 + (v14 << 8) * (v14 << 8))); /*0x6f70b2*/
  LOWORD(result) = Math::RoundToInt(v2); /*0x6f70ba*/
  return result; /*0x6f70bf*/
}



// ==== 0x006F70E0  TechnoClass::ComputeSlopePenalty  this=TechnoClass  sig=csp ====
unsigned int __thiscall TechnoClass::ComputeSlopePenalty(TechnoClass *this, int *a2)
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
  int v13; // eax
  __int16 v15[2]; // [esp+8h] [ebp-14h] BYREF
  __int16 v16[2]; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v17[12]; // [esp+10h] [ebp-Ch] BYREF
  int *v18; // [esp+20h] [ebp+4h]

  if ( !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 20))(this) /*0x6f70fc*/
    || !(*(unsigned __int8 (__thiscall **)(int *))(*a2 + 80))(a2) )
  {
    return 0; /*0x6f7214*/
  }
  v4 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v17); /*0x6f7111*/
  LOWORD(v18) = *v4 / 256; /*0x6f7124*/
  HIWORD(v18) = v4[1] / 256; /*0x6f713d*/
  v5 = *a2; /*0x6f7146*/
  *(_DWORD *)v15 = v18; /*0x6f714a*/
  v6 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(v5 + 72))(a2, v17); /*0x6f714e*/
  LOWORD(v18) = *v6 / 256; /*0x6f7161*/
  HIWORD(v18) = v6[1] / 256; /*0x6f717a*/
  *(_DWORD *)v16 = v18; /*0x6f7187*/
  v7 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v15); /*0x6f7195*/
  v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x6f71a2*/
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
  v12 = (double)(v10 / *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6200)) /*0x6f71e4*/
      * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6208);
  if ( v12 >= *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6216) ) /*0x6f71f9*/
    v12 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6216); /*0x6f71fd*/
  LOWORD(v13) = Math::RoundToInt(v12); /*0x6f7203*/
  return v13 << 8; /*0x6f7208*/
}



// ==== 0x006F7220  TechnoClass::CheckTargetLOS  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::CheckTargetLOS(TechnoClass *this, int *a2, int *a3, _DWORD *a4)
{
  double v4; // st7
  int v6; // edi
  int v8; // ebx
  int *v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // ebx
  int v16; // ecx
  int v17; // eax
  TechnoClass *v18; // ebx
  int v20; // eax
  bool v21; // zf
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // eax
  double v26; // [esp+4h] [ebp-40h]
  double v27; // [esp+4h] [ebp-40h]
  double v28; // [esp+4h] [ebp-40h]
  int v30; // [esp+1Ch] [ebp-28h]
  double v31; // [esp+1Ch] [ebp-28h]
  int v32; // [esp+24h] [ebp-20h]
  int v33; // [esp+24h] [ebp-20h]
  int FoundationHeight; // [esp+24h] [ebp-20h]
  int v35; // [esp+24h] [ebp-20h]
  int v36; // [esp+28h] [ebp-1Ch]
  int v37; // [esp+2Ch] [ebp-18h] BYREF
  int v38; // [esp+30h] [ebp-14h]
  int GroundHeight; // [esp+34h] [ebp-10h]
  int v40; // [esp+38h] [ebp-Ch] BYREF
  int v41; // [esp+3Ch] [ebp-8h]
  int v42; // [esp+40h] [ebp-4h]

  if ( !a3 || !a4 ) /*0x6f7242*/
    return 0; /*0x6f7242*/
  v6 = a4[45]; /*0x6f7248*/
  if ( v6 == -512 ) /*0x6f7254*/
    return 1; /*0x6f725e*/
  if ( (*(unsigned __int8 (**)(void))(*a3 + 84))() ) /*0x6f7263*/
    v6 += *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1676); /*0x6f7274*/
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 256))(this) ) /*0x6f727e*/
    v6 = (*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3912) /*0x6f729f*/
        + (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 257))(this)) << 8;
  if ( this->bunkerLinkedUnit && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 6 ) /*0x6f72b6*/
    v6 += *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3924) << 8; /*0x6f72c6*/
  if ( this->? ) /*0x6f72c8*/
    v6 += *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3932) << 8; /*0x6f72e1*/
  v8 = v6; /*0x6f72e9*/
  v30 = a4[40]; /*0x6f72eb*/
  if ( *(_BYTE *)(v30 + 663) ) /*0x6f72ef*/
    v8 = v6 + TechnoClass::ComputeSlopeDifference(this, a3); /*0x6f7306*/
  v9 = (int *)(*(int (__thiscall **)(int *, int *))(*a3 + 72))(a3, &v40); /*0x6f7314*/
  v37 = *v9; /*0x6f7319*/
  v38 = v9[1]; /*0x6f7322*/
  v10 = *a3; /*0x6f7326*/
  GroundHeight = v9[2]; /*0x6f732b*/
  if ( (*(unsigned __int8 (__thiscall **)(int *))(v10 + 80))(a3) /*0x6f7361*/
    && (GroundHeight = Cell::GetGroundHeight(&v37),
        (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v37)->flags[0] & 0x100) != 0) )
  {
    v11 = g_BuildingLoadQueue_Array.?[1] + GroundHeight; /*0x6f736d*/
    GroundHeight += g_BuildingLoadQueue_Array.?[1]; /*0x6f736f*/
  }
  else
  {
    v11 = GroundHeight; /*0x6f7375*/
  }
  v32 = a4[46]; /*0x6f7387*/
  if ( v32 ) /*0x6f738b*/
  {
    v12 = a2[1]; /*0x6f7395*/
    v40 = *a2 - v37; /*0x6f7398*/
    v13 = a2[2]; /*0x6f73a2*/
    v41 = v12 - v38; /*0x6f73a5*/
    __asm { fild [esp+38h+var_8] } /*0x6f73ab*/
    v42 = v13 - v11; /*0x6f73af*/
    __asm /*0x6f73b6*/
    {
      fild [esp+40h+var_4]
      fild [esp+40h+var_C]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fld st(3)
      fmul st, st(4)
      faddp st(1), st
      fstp [esp+40h+var_44+4]; double
      fstp st
      fstp st
      fstp st
    }
    Math::Sqrt(v26); /*0x6f73d7*/
    LOWORD(v14) = Math::RoundToInt(v4); /*0x6f73df*/
    if ( v14 < v32 ) /*0x6f73e8*/
      return 0; /*0x6f73e8*/
    v11 = GroundHeight; /*0x6f73ee*/
  }
  if ( *(_BYTE *)(v30 + 667) ) /*0x6f73f6*/
  {
    v15 = a2[1]; /*0x6f740a*/
    v40 = v37 - *a2; /*0x6f7413*/
    v16 = a2[2]; /*0x6f7419*/
    v41 = v38 - v15; /*0x6f741c*/
    __asm /*0x6f7423*/
    {
      fild [esp+40h+var_8]
      fild [esp+40h+var_C]
    }
    v42 = v11 - v16; /*0x6f742d*/
    __asm /*0x6f7431*/
    {
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+40h+var_44+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v27); /*0x6f7442*/
    LOWORD(v17) = Math::RoundToInt(v4); /*0x6f744a*/
    v33 = v17; /*0x6f744f*/
    v18 = (TechnoClass *)v6; /*0x6f7457*/
    if ( *(_BYTE *)(v30 + 663) ) /*0x6f7459*/
      v18 = (TechnoClass *)(v6 + TechnoClass::ComputeSlopePenalty(this, a3)); /*0x6f7472*/
    if ( v33 <= (int)v18 ) /*0x6f7478*/
    {
      if ( *(_BYTE *)(a4[40] + 661) ) /*0x6f7487*/
      {
        RulesClass::GetFiringDistance(); /*0x6f7491*/
      }
      else
      {
        _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6f7498*/
        __asm { fild dword ptr [ecx+16B8h] } /*0x6f749e*/
      }
      __asm { fstp qword ptr [esp+38h+var_2C+4] } /*0x6f74a4*/
      v20 = TechnoClass::ComputeScanRange(v18, v31); /*0x6f74b4*/
      if ( globalHelper_08ABC0(v20, v33, v42, v31) /*0x6f7504*/
        && ((Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v37)->flags[0] & 0x100) == 0
         || GroundHeight - a2[2] < 3 * g_BuildingLoadQueue_Array.?[1]) )
      {
        return TrajectoryHelper::FindFirstImpenetrableObstacle(a2, &v37, (int)a4, (#375 *)this->owner) == 0; /*0x6f7652*/
      }
    }
  }
  else
  {
    if ( (*(int (__thiscall **)(int *))(*a3 + 44))(a3) == 6 ) /*0x6f752b*/
    {
      FoundationHeight = BuildingTypeClass::GetFoundationHeight((int *)a3[328], 0); /*0x6f7542*/
      v8 += (BuildingTypeClass::GetFoundationWidth((BuildingTypeClass *)a3[328]) + FoundationHeight) << 6; /*0x6f7554*/
    }
    v21 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 3; /*0x6f7561*/
    v22 = *a2; /*0x6f7564*/
    if ( v21 ) /*0x6f7566*/
    {
      v35 = v22 - v37; /*0x6f75c1*/
      v36 = a2[1] - v38; /*0x6f75c5*/
      __asm /*0x6f75cc*/
      {
        fild [esp+40h+var_1C]
        fild [esp+40h+var_20]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fstp [esp+40h+var_44+4]; double
      }
    }
    else
    {
      v23 = a2[2]; /*0x6f7577*/
      v41 = a2[1] - v38; /*0x6f757a*/
      __asm { fild [esp+38h+var_8] } /*0x6f7582*/
      v40 = v22 - v37; /*0x6f7588*/
      v42 = v23 - GroundHeight; /*0x6f758c*/
      __asm /*0x6f7593*/
      {
        fild [esp+40h+var_4]
        fild [esp+40h+var_C]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fld st(3)
        fmul st, st(4)
        faddp st(1), st
        fstp [esp+40h+var_44+4]
        fstp st
      }
    }
    __asm /*0x6f75e1*/
    {
      fstp st
      fstp st
    }
    Math::Sqrt(v28); /*0x6f75e5*/
    LOWORD(v24) = Math::RoundToInt(v4); /*0x6f75ed*/
    if ( v24 <= v8 ) /*0x6f75f9*/
    {
      if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2)->flags[0] & 0x100) == 0 ) /*0x6f760f*/
        return TrajectoryHelper::FindFirstImpenetrableObstacle(a2, &v37, (int)a4, (#375 *)this->owner) == 0; /*0x6f760f*/
      v25 = g_BuildingLoadQueue_Array.?[1] + Cell::GetGroundHeight(a2); /*0x6f7625*/
      if ( a2[2] >= v25 || GroundHeight < v25 ) /*0x6f762f*/
        return TrajectoryHelper::FindFirstImpenetrableObstacle(a2, &v37, (int)a4, (#375 *)this->owner) == 0; /*0x6f762f*/
    }
  }
  return 0; /*0x6f7258*/
}



// ==== 0x006F7660  TechnoClass::IsInRange  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::IsInRange(TechnoClass *this)
{
  int result; // eax
  double v3; // st7
  _DWORD *v4; // eax
  _DWORD *v5; // eax
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

  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 248))(this); /*0x6f7668*/
  if ( !(_BYTE)result ) /*0x6f7670*/
    goto LABEL_5; /*0x6f7670*/
  result = *(_DWORD *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 252))(this) + 172); /*0x6f7682*/
  if ( !result ) /*0x6f768a*/
    goto LABEL_5; /*0x6f768a*/
  v3 = *(float *)(result + 292) - *(float *)(result + 296); /*0x6f769a*/
  v11 = v3; /*0x6f76a5*/
  v4 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, __int16 *))this->RadioClass + 18))(this, &v14); /*0x6f76a9*/
  v12 = *v4 / 256; /*0x6f76bc*/
  v13 = v4[1] / 256; /*0x6f76d6*/
  v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v17 + 72))(v17, v16); /*0x6f76e0*/
  v14 = *v5 / 256; /*0x6f76f6*/
  LOWORD(v15) = v5[1] / 256; /*0x6f770e*/
  Math::Sqrt( /*0x6f774a*/
    (double)(__int16)(v12 - v14) * (double)(__int16)(v12 - v14)
  + (double)(__int16)(v13 - v15) * (double)(__int16)(v13 - v15));
  result = (__int16)Math::RoundToInt(v3); /*0x6f7757*/
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
int __thiscall TechnoClass::CheckCellPassable2(TechnoClass *this)
{
  int (__thiscall **vtable0)(TechnoClass *, _DWORD, int); // edi
  int v3; // eax
  int v5; // [esp+10h] [ebp+4h]

  vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD, int))this->RadioClass; /*0x6f778a*/
  v3 = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 185))(this, v5); /*0x6f778c*/
  return vtable0[234](this, v5, v3); /*0x6f779c*/
}



// ==== 0x006F77B0  TechnoClass::ValidateTarget  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ValidateTarget(TechnoClass *this)
{
  int result; // eax
  int *v2; // ebx
  int *v4; // eax
  int v5; // edx
  int (__thiscall **vtable0)(TechnoClass *, _DWORD); // eax
  int v7; // edi
  _DWORD *v8; // eax
  void *v9; // eax
  int *v10; // eax
  char onBridge; // cl
  int v12; // eax
  int v13; // [esp+14h] [ebp-24h] BYREF
  int v14; // [esp+18h] [ebp-20h]
  int v15; // [esp+1Ch] [ebp-1Ch]
  _BYTE v16[12]; // [esp+20h] [ebp-18h] BYREF
  _BYTE v17[12]; // [esp+2Ch] [ebp-Ch] BYREF
  int *v18; // [esp+3Ch] [ebp+4h]
  int *v19; // [esp+3Ch] [ebp+4h]
  int *v20; // [esp+40h] [ebp+8h] BYREF

  v2 = v18; /*0x6f77b4*/
  if ( v18 ) /*0x6f77bd*/
  {
    v4 = (int *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v16); /*0x6f77d3*/
    v13 = *v4; /*0x6f77d8*/
    v14 = v4[1]; /*0x6f77df*/
    v5 = v4[2]; /*0x6f77e7*/
    vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass; /*0x6f77ea*/
    v15 = v5; /*0x6f77ef*/
    v7 = *(_DWORD *)((int (__thiscall **)(TechnoClass *, int *))vtable0)[254](this, v20); /*0x6f77f9*/
    if ( v7 ) /*0x6f77fd*/
    {
      if ( *(_BYTE *)(v7 + 308) ) /*0x6f7803*/
      {
        v8 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v16); /*0x6f781a*/
        LOWORD(v19) = *v8 / 256; /*0x6f782d*/
        HIWORD(v19) = v8[1] / 256; /*0x6f7845*/
        v20 = v19; /*0x6f784e*/
        v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v20); /*0x6f7858*/
        v10 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v9 + 72))(v9, v17); /*0x6f7866*/
        v13 = *v10; /*0x6f786b*/
        v14 = v10[1]; /*0x6f7872*/
        onBridge = this->?; /*0x6f7876*/
        v12 = v10[2]; /*0x6f787c*/
        v15 = v12; /*0x6f7881*/
        if ( onBridge ) /*0x6f7885*/
          v15 = g_BuildingLoadQueue_Array.?[1] + v12; /*0x6f788d*/
      }
    }
    if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 21))(this) ) /*0x6f7895*/
      v15 = *(_DWORD *)((*(int (__thiscall **)(int *, _BYTE *))(*v2 + 72))(v2, v17) + 8); /*0x6f78ab*/
    LOBYTE(result) = TechnoClass::CheckTargetLOS(this, &v13, v2, (_DWORD *)v7); /*0x6f78b8*/
  }
  else
  {
    LOBYTE(result) = 1; /*0x6f77c0*/
  }
  return result; /*0x6f77bf*/
}



// ==== 0x006F78D0  TechnoClass::CheckAndFireAtTarget  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CheckAndFireAtTarget(TechnoClass *this)
{
  int v2; // edi
  int *v3; // eax
  int v4; // eax
  int v6; // [esp+Ch] [ebp+4h]

  v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 250))(this); /*0x6f78de*/
  v3 = (int *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, v2); /*0x6f78e3*/
  if ( v3 && (v4 = *v3) != 0 && *(_BYTE *)(v4 + 310) ) /*0x6f78f3*/
    return (*((int (__thiscall **)(TechnoClass *, int, int))this->RadioClass + 234))(this, v6, v2); /*0x6f7907*/
  else
    return (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 235))(this, v6); /*0x6f791b*/
}



// ==== 0x006F7930  TechnoClass::CheckCellPassable  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CheckCellPassable(TechnoClass *this)
{
  CellClass *v2; // eax
  int (__thiscall **vtable0)(TechnoClass *, _DWORD, int); // ebx
  CellClass *v4; // edi
  int v5; // eax
  _DWORD *v7; // [esp+10h] [ebp+4h]

  v2 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v7); /*0x6f793f*/
  vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD, int))this->RadioClass; /*0x6f7944*/
  v4 = v2; /*0x6f7946*/
  v5 = (*((int (__thiscall **)(TechnoClass *, CellClass *))this->RadioClass + 185))(this, v2); /*0x6f794b*/
  return ((int (__thiscall **)(TechnoClass *, CellClass *, int))vtable0)[234](this, v4, v5); /*0x6f795b*/
}



// ==== 0x006F7970  TechnoClass::CheckCellPassable3  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CheckCellPassable3(TechnoClass *this)
{
  int (__thiscall **vtable0)(TechnoClass *, CellClass *, _DWORD); // edi
  CellClass *v3; // eax
  _DWORD *v5; // [esp+Ch] [ebp+4h]
  int v6; // [esp+10h] [ebp+8h]

  vtable0 = (int (__thiscall **)(TechnoClass *, CellClass *, _DWORD))this->RadioClass; /*0x6f797d*/
  v3 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v5); /*0x6f7985*/
  return vtable0[234](this, v3, v6); /*0x6f7993*/
}



// ==== 0x006F79A0  TechnoClass::GetBridgeDamageMult  this=TechnoClass  sig=csp ====
double __thiscall TechnoClass::GetBridgeDamageMult(TechnoClass *this, __int16 *a2)
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
  Cell *v11; // eax
  _DWORD *v12; // eax
  __int16 v13; // ax
  Cell *v14; // eax
  _DWORD *v15; // eax
  int v16; // edi
  __int16 v17; // cx
  int v18; // eax
  __int16 v19; // ax
  Cell *v20; // eax
  _DWORD *v21; // eax
  Cell *v22; // eax
  _DWORD *v23; // eax
  __int16 v26[2]; // [esp+10h] [ebp-30h] BYREF
  int v27; // [esp+14h] [ebp-2Ch]
  int v28; // [esp+18h] [ebp-28h]
  int v29; // [esp+1Ch] [ebp-24h]
  int v30; // [esp+20h] [ebp-20h]
  int v31; // [esp+24h] [ebp-1Ch]
  int v32; // [esp+28h] [ebp-18h]
  int v33; // [esp+2Ch] [ebp-14h]
  int v34; // [esp+32h] [ebp-Eh]
  double v35; // [esp+38h] [ebp-8h]

  v2 = (int *)(*((int (__fastcall **)(TechnoClass *))this->RadioClass + 253))(this); /*0x6f79b2*/
  if ( !v2 ) /*0x6f79ba*/
    return 1.0; /*0x6f79ba*/
  v3 = *v2; /*0x6f79c0*/
  if ( !v3 || !*(_BYTE *)(v3 + 326) ) /*0x6f79ca*/
    return 1.0; /*0x6f7c8a*/
  v4 = 1; /*0x6f79de*/
  v35 = 1.0; /*0x6f79e3*/
  v32 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5168) / 256; /*0x6f7a07*/
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
          if ( v9 >= *(int *)&stru_87F5F0.__pad_58[708] /*0x6f7a45*/
            && v9 < *(_DWORD *)&stru_87F5F0.__pad_58[708] + *(_DWORD *)&stru_87F5F0.__pad_58[716] )
          {
            v10 = a2[1]; /*0x6f7a4e*/
            if ( v10 - v4 >= *(int *)&stru_87F5F0.__pad_58[712] ) /*0x6f7a5d*/
            {
              LOWORD(v34) = -(__int16)v4; /*0x6f7a65*/
              LOWORD(v28) = v7 + v8; /*0x6f7a6a*/
              HIWORD(v28) = v10 - v4; /*0x6f7a7a*/
              *(_DWORD *)v26 = v28; /*0x6f7a87*/
              v11 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v26); /*0x6f7a8c*/
              v12 = Cell::IsBridge(v11); /*0x6f7a93*/
              if ( v12 ) /*0x6f7a9a*/
              {
                if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)v12) ) /*0x6f7aa7*/
                  v35 = v35 * 0.5; /*0x6f7aba*/
              }
            }
            v13 = a2[1]; /*0x6f7abe*/
            if ( v4 + v13 < *(_DWORD *)&stru_87F5F0.__pad_58[712] + *(_DWORD *)&stru_87F5F0.__pad_58[720] ) /*0x6f7ad7*/
            {
              HIWORD(v29) = v4 + v13; /*0x6f7ade*/
              LOWORD(v29) = v7 + *a2; /*0x6f7aee*/
              *(_DWORD *)v26 = v29; /*0x6f7afc*/
              v14 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v26); /*0x6f7b00*/
              v15 = Cell::IsBridge(v14); /*0x6f7b07*/
              if ( v15 ) /*0x6f7b0e*/
              {
                if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)v15) ) /*0x6f7b1b*/
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
          if ( v18 >= *(int *)&stru_87F5F0.__pad_58[712] /*0x6f7b72*/
            && v18 < *(_DWORD *)&stru_87F5F0.__pad_58[712] + *(_DWORD *)&stru_87F5F0.__pad_58[720] )
          {
            v19 = *a2; /*0x6f7b7b*/
            if ( *a2 - v4 >= *(int *)&stru_87F5F0.__pad_58[708] ) /*0x6f7b89*/
            {
              LOWORD(v33) = -(__int16)v4; /*0x6f7b91*/
              HIWORD(v30) = v16 + v17; /*0x6f7b9c*/
              LOWORD(v30) = v19 - v4; /*0x6f7ba5*/
              *(_DWORD *)v26 = v30; /*0x6f7bb4*/
              v20 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v26); /*0x6f7bb8*/
              v21 = Cell::IsBridge(v20); /*0x6f7bbf*/
              if ( v21 ) /*0x6f7bc6*/
              {
                if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)v21) ) /*0x6f7bd3*/
                  v35 = v35 * 0.5; /*0x6f7be6*/
              }
            }
            if ( v4 + *a2 < *(_DWORD *)&stru_87F5F0.__pad_58[708] + *(_DWORD *)&stru_87F5F0.__pad_58[716] ) /*0x6f7c02*/
            {
              LOWORD(v31) = v4 + *a2; /*0x6f7c09*/
              HIWORD(v31) = a2[1] + v16; /*0x6f7c1a*/
              *(_DWORD *)v26 = v31; /*0x6f7c27*/
              v22 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v26); /*0x6f7c2c*/
              v23 = Cell::IsBridge(v22); /*0x6f7c33*/
              if ( v23 ) /*0x6f7c3a*/
              {
                if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)v23) ) /*0x6f7c47*/
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



// ==== 0x006F7CA0  TechnoClass::EvaluateTarget  this=TechnoClass  sig=csp ====
char __userpurge TechnoClass::EvaluateTarget@<al>(
        TechnoClass *this,
        double a2@<st0>,
        int a3,
        int a4,
        int a5,
        int a6,
        int *a7,
        int a8,
        _DWORD *a9)
{
  int *v9; // ecx
  int *v10; // edi
  char v11; // al
  int *v12; // esi
  int v13; // ebx
  int v14; // ebp
  _DWORD *v17; // eax
  CellClass *v18; // eax
  int *v19; // edx
  int *v20; // ebp
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  char v24; // cl
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  char v28; // bl
  Object *v29; // ebp
  int v30; // eax
  _DWORD *v33; // eax
  CellClass *v34; // eax
  char result; // al
  int v36; // eax
  int v37; // ecx
  int v38; // edx
  _DWORD *v39; // ebp
  char v40; // al
  int v41; // edx
  _DWORD *v42; // ebp
  _DWORD *v43; // eax
  int v44; // edx
  int v45; // ebx
  int v46; // eax
  int v47; // ebp
  int v48; // eax
  bool v49; // zf
  _DWORD *v50; // ebp
  _DWORD *v51; // eax
  int v52; // ebx
  int v53; // ecx
  int v54; // edx
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // ebp
  int v59; // eax
  bool v60; // bl
  bool v61; // al
  int v62; // eax
  bool v63; // bl
  bool v64; // al
  int *v65; // ebp
  int v66; // edx
  int v67; // eax
  _DWORD *v68; // eax
  CellClass *v71; // ebp
  CellClass *v72; // eax
  double v73; // st7
  int v74; // eax
  int v75; // edx
  int v76; // kr04_4
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // ebx
  int *v82; // ecx
  int v83; // eax
  int v84; // eax
  int v85; // eax
  _DWORD *v86; // eax
  _DWORD *v87; // eax
  double BridgeDamageMult; // st7
  int v90; // eax
  int v91; // eax
  double v92; // [esp+28h] [ebp-44h]
  double v93; // [esp+28h] [ebp-44h]
  int v94; // [esp+2Ch] [ebp-40h]
  char v95; // [esp+2Ch] [ebp-40h]
  char v96; // [esp+43h] [ebp-29h]
  int v97; // [esp+44h] [ebp-28h]
  double v98; // [esp+48h] [ebp-24h] BYREF
  int v99; // [esp+50h] [ebp-1Ch]
  _DWORD v100[2]; // [esp+54h] [ebp-18h] BYREF
  int v101; // [esp+5Ch] [ebp-10h]
  _BYTE v102[12]; // [esp+60h] [ebp-Ch] BYREF
  TechnoClass *thisa; // [esp+70h] [ebp+4h]

  v10 = v9; /*0x6f7ca7*/
  v11 = (*(int (**)(void))(*v9 + 816))(); /*0x6f7cab*/
  v12 = (int *)a5; /*0x6f7cb1*/
  v96 = v11; /*0x6f7cba*/
  v13 = (*(int (__thiscall **)(int *, int))(*v10 + 740))(v10, a5); /*0x6f7cc4*/
  v97 = v13; /*0x6f7ccb*/
  v14 = *(_DWORD *)(*(int (__thiscall **)(int *, int))(*v10 + 1016))(v10, v13); /*0x6f7cd5*/
  if ( ((unsigned int)this & 0x18200) == 0 /*0x6f7cf1*/
    && (*(int (__thiscall **)(int *, int *, int))(*v10 + 956))(v10, v12, v13) == 5 )
  {
    return 0; /*0x6f7cf1*/
  }
  if ( v12[28] <= 0 && *(_DWORD *)((*(int (__thiscall **)(int *))(*v10 + 132))(v10) + 916) == 2 ) /*0x6f7d13*/
    return 0; /*0x6f7d13*/
  if ( v14 ) /*0x6f7d1b*/
  {
    if ( *(_DWORD *)(v14 + 172) ) /*0x6f7d1d*/
    {
      _EAX = *(_DWORD *)((*(int (__thiscall **)(int *))(*v12 + 132))(v12) + 156); /*0x6f7d31*/
      _ECX = *(_DWORD *)(v14 + 172); /*0x6f7d37*/
      __asm /*0x6f7d3d*/
      {
        fld qword ptr [ecx+eax*8+0A0h]
        fcomp ds:flt_7F4E38
        fnstsw ax
      }
      if ( (_EAX & 0x4100) != 0 ) /*0x6f7d4f*/
        return 0; /*0x6f7d4f*/
    }
  }
  if ( *(_DWORD *)((*(int (__thiscall **)(int *))(*v10 + 132))(v10) + 1540) == 2 /*0x6f7d82*/
    && (*(unsigned __int8 (__thiscall **)(int *))(*v12 + 80))(v12)
    && *(_DWORD *)((*(int (__thiscall **)(int *))(*v12 + 444))(v12) + 236) != 2 )
  {
    return 0; /*0x6f7d82*/
  }
  if ( !v12 ) /*0x6f7d8a*/
    return 0; /*0x6f7d8a*/
  if ( *((_BYTE *)v12 + 129) ) /*0x6f7d90*/
    return 0; /*0x6f7d90*/
  if ( !v12[27] ) /*0x6f7d9e*/
    return 0; /*0x6f7d9e*/
  if ( v12[136] == 2 ) /*0x6f7daf*/
  {
    v94 = *(_DWORD *)(v10[135] + 48); /*0x6f7dc0*/
    v17 = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(*v12 + 72))(v12, v100); /*0x6f7dc4*/
    v18 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v17); /*0x6f7dcd*/
    if ( !(unsigned __int8)Cell::IsPassableOffset((Cell *)v18, v94) && v10[135] != v12[135] ) /*0x6f7deb*/
      return 0; /*0x6f7deb*/
  }
  if ( !*((_BYTE *)v12 + 981) ) /*0x6f7df1*/
    return 0; /*0x6f7df1*/
  if ( MissionClass::GetMissionControl((MissionClass *)v12)[4] ) /*0x6f7e06*/
    return 0; /*0x6f7e06*/
  if ( (*(int (__thiscall **)(int *))(*v12 + 456))(v12) < -20 ) /*0x6f7e1e*/
    return 0; /*0x6f7e1e*/
  v19 = (int *)(*(int (__thiscall **)(int *, _DWORD *))(*v12 + 72))(v12, v100); /*0x6f7e30*/
  v20 = a7; /*0x6f7e32*/
  v21 = *v19; /*0x6f7e39*/
  v22 = v19[1]; /*0x6f7e3b*/
  v101 = v19[2]; /*0x6f7e41*/
  if ( a7 != (int *)-1 ) /*0x6f7e45*/
  {
    LOWORD(a5) = v21 / 256; /*0x6f7e53*/
    v23 = v22; /*0x6f7e5a*/
    v24 = *((_BYTE *)v12 + 140); /*0x6f7e5b*/
    v25 = *v10; /*0x6f7e69*/
    HIWORD(a5) = v23 / 256; /*0x6f7e6e*/
    v95 = v24; /*0x6f7e77*/
    v26 = (*(int (__thiscall **)(int *))(v25 + 132))(v10); /*0x6f7e7e*/
    if ( (int *)MapClass::GetTileIndex( /*0x6f7e9c*/
                  (MapClass *)&stru_87F5F0.__pad_58[416],
                  (__int16 *)&a5,
                  *(_DWORD *)(v26 + 1460),
                  v95) != v20 )
      return 0; /*0x6f7e9c*/
  }
  v27 = v10[71]; /*0x6f7ea2*/
  v28 = 0; /*0x6f7ea8*/
  v29 = 0; /*0x6f7eaa*/
  if ( v27 ) /*0x6f7eae*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v27 + 132))(v27) + 1508) ) /*0x6f7eb8*/
    {
      v30 = *(_DWORD *)(v10[71] + 704); /*0x6f7ec8*/
      if ( v30 ) /*0x6f7ed0*/
      {
        v29 = *(Object **)(v30 + 540); /*0x6f7ed2*/
        v28 = 1; /*0x6f7ed8*/
      }
    }
  }
  if ( (*(int (__thiscall **)(int *))(*v10 + 44))(v10) == 15 && *((_BYTE *)v10 + 1752) /*0x6f7f0c*/
    || *(_BYTE *)((*(int (__thiscall **)(int *))(*v10 + 132))(v10) + 1728)
    || *((_BYTE *)v10 + 664) )
  {
    if ( !v28 ) /*0x6f7feb*/
      goto LABEL_46; /*0x6f7feb*/
    goto LABEL_44; /*0x6f7feb*/
  }
  if ( v28 ) /*0x6f7f1c*/
  {
LABEL_44:
    if ( v29 && (unsigned __int8)Object::IsAlliedWithObjectHouse(v29, (int)v12) ) /*0x6f7ff4*/
      return 0; /*0x6f7ffb*/
    goto LABEL_46; /*0x6f7ffb*/
  }
  if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)v10[135], (int)v12) ) /*0x6f7f29*/
  {
    if ( TechnoClass::GetValue((TechnoClass *)v10, -1) >= 0 && !v96 ) /*0x6f7f49*/
      return 0; /*0x6f7f49*/
    BuildingClass::GetHealthRatio((BuildingClass *)v12); /*0x6f7f51*/
    _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6f7f56*/
    __asm /*0x6f7f5c*/
    {
      fcomp qword ptr [ecx+16F8h]
      fnstsw ax
    }
    if ( (_AX & 0x4000) != 0 ) /*0x6f7f67*/
      return 0; /*0x6f7f67*/
    if ( (*(int (__thiscall **)(int *))(*v12 + 44))(v12) == 2 && (*(int (__thiscall **)(int *))(*v10 + 44))(v10) == 1 ) /*0x6f7f83*/
    {
      if ( (*(int (__thiscall **)(int *))(*v12 + 456))(v12) > 0 ) /*0x6f7f91*/
        return 0; /*0x6f7f91*/
      v33 = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(*v12 + 72))(v12, v100); /*0x6f7fa0*/
      v34 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v33); /*0x6f7fa9*/
      if ( Cell::IsBridge((Cell *)v34) ) /*0x6f7fb0*/
        return 0; /*0x6f7fc2*/
    }
    else if ( (*(int (__thiscall **)(int *))(*v10 + 44))(v10) == 1 ) /*0x6f7fcf*/
    {
      result = (*(int (__thiscall **)(int *))(*v12 + 128))(v12); /*0x6f7fd5*/
      if ( !result ) /*0x6f7fdd*/
        return result; /*0x6f7fdd*/
    }
  }
LABEL_46:
  if ( v10 == v12 ) /*0x6f8003*/
    return 0; /*0x6f8003*/
  if ( ((int)dword_A8B230->vtable0 & 0x800) != 0 ) /*0x6f8014*/
  {
    v36 = (*(int (__thiscall **)(int *))(*v12 + 136))(v12); /*0x6f801a*/
    v37 = 0; /*0x6f8026*/
    v38 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2892); /*0x6f8028*/
    if ( v38 > 0 ) /*0x6f8030*/
    {
      v39 = *(_DWORD **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2880); /*0x6f8032*/
      while ( *v39 != v36 ) /*0x6f803b*/
      {
        ++v37; /*0x6f8041*/
        ++v39; /*0x6f8042*/
        if ( v37 >= v38 ) /*0x6f8047*/
          goto LABEL_52; /*0x6f8047*/
      }
      return 0; /*0x6f803b*/
    }
  }
LABEL_52:
  v40 = (*(int (__thiscall **)(int *))(*v12 + 84))(v12); /*0x6f8049*/
  v41 = *v12; /*0x6f8050*/
  if ( v40 ) /*0x6f8054*/
  {
    v42 = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(v41 + 72))(v12, v100); /*0x6f8066*/
    v43 = (_DWORD *)(*(int (__thiscall **)(int *, double *))(*v10 + 72))(v10, &v98); /*0x6f806f*/
    v44 = *v12; /*0x6f8077*/
    a5 = *v42 - *v43; /*0x6f807b*/
    __asm { fild [esp+3Ch+arg_C] } /*0x6f8083*/
    __asm { fstp qword ptr [esp+40h+var_24] }
    v45 = (*(int (__thiscall **)(int *, _DWORD *))(v44 + 72))(v12, v100); /*0x6f8093*/
    a5 = *(_DWORD *)(v45 + 4) - *(_DWORD *)((*(int (__thiscall **)(int *, _BYTE *))(*v10 + 72))(v10, v102) + 4); /*0x6f80aa*/
    __asm /*0x6f80ae*/
    {
      fild [esp+44h+arg_C]
      fld st
      fmul st, st(1)
      fld qword ptr [esp+44h+var_24]
      fmul qword ptr [esp+44h+var_24]
      faddp st(1), st
      fstp [esp+44h+var_44]; double
      fstp st
    }
    Math::Sqrt(v92); /*0x6f80c5*/
    LOWORD(v46) = Math::RoundToInt(a2); /*0x6f80cd*/
    v47 = v46; /*0x6f80d2*/
    v48 = a4; /*0x6f80d4*/
    v49 = a4 == 0; /*0x6f80d8*/
    if ( a4 <= 0 ) /*0x6f80da*/
      goto LABEL_59; /*0x6f80da*/
    if ( v47 > a4 ) /*0x6f80e2*/
      return 0; /*0x6f80f1*/
  }
  else
  {
    v50 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(v41 + 72))(v12, v102); /*0x6f8100*/
    v51 = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD *))(*v10 + 72))(v10, v100); /*0x6f8109*/
    v52 = v50[1]; /*0x6f8111*/
    v53 = *v51 - *v50; /*0x6f8114*/
    v54 = v51[1]; /*0x6f8116*/
    v55 = v51[2]; /*0x6f8119*/
    LODWORD(v98) = v53; /*0x6f811c*/
    v56 = v55 - v50[2]; /*0x6f8125*/
    HIDWORD(v98) = v54 - v52; /*0x6f8127*/
    v99 = v56; /*0x6f812b*/
    __asm /*0x6f812f*/
    {
      fild [esp+3Ch+var_24+4]
      fild [esp+3Ch+var_1C]
      fild [esp+3Ch+var_24]
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
      fstp [esp+44h+var_44]; double
      fstp st
      fstp st
      fstp st
    }
    Math::Sqrt(v93); /*0x6f8157*/
    LOWORD(v57) = Math::RoundToInt(a2); /*0x6f815f*/
    v47 = v57; /*0x6f8164*/
    v48 = a4; /*0x6f8166*/
    v49 = a4 == 0; /*0x6f816a*/
    if ( a4 <= 0 ) /*0x6f816c*/
      goto LABEL_59; /*0x6f816c*/
    if ( v47 > a4 ) /*0x6f8170*/
      return 0; /*0x6f8170*/
  }
  v49 = v48 == 0; /*0x6f8176*/
LABEL_59:
  if ( v49 ) /*0x6f8178*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*v10 + 684))(v10) ) /*0x6f817e*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int *, int *, int))(*v10 + 936))(v10, v12, v97) ) /*0x6f81b8*/
        return 0; /*0x6f81b8*/
    }
    else if ( v47 > *(_DWORD *)((*(int (__thiscall **)(int *))(*v10 + 132))(v10) + 1464) ) /*0x6f8198*/
    {
      return 0; /*0x6f81a3*/
    }
  }
  if ( (unsigned __int8)House::IsHumanPlayer((House *)v10[135]) /*0x6f81f4*/
    && !*((_BYTE *)v12 + 1050)
    && !*((_BYTE *)v12 + 1051)
    && !*(_DWORD *)&dword_A8B238
    && (*(int (__thiscall **)(int *))(*v12 + 44))(v12) != 2 )
  {
    return 0; /*0x6f81f4*/
  }
  if ( (*(int (__thiscall **)(int *))(*v12 + 44))(v12) == 6 && *(_BYTE *)(v12[328] + 5889) ) /*0x6f820c*/
    return 0; /*0x6f820c*/
  a5 = (*(int (__thiscall **)(int *))(*v12 + 44))(v12); /*0x6f822a*/
  if ( ((1 << a5) & a3) == 0 && ((a3 & 2) == 0 || !(*(unsigned __int8 (__thiscall **)(int *))(*v12 + 128))(v12)) ) /*0x6f8242*/
    return 0; /*0x6f8242*/
  v58 = (*(int (__thiscall **)(int *))(*v12 + 132))(v12); /*0x6f825a*/
  a7 = (int *)v58; /*0x6f825c*/
  if ( !*(_BYTE *)(v58 + 561) ) /*0x6f8260*/
    return 0; /*0x6f8260*/
  if ( *(_DWORD *)&dword_A8B238 && *(_BYTE *)(*(_DWORD *)(v12[135] + 52) + 422) ) /*0x6f8284*/
  {
    if ( (unsigned __int8)House::IsCurrentPlayer((House *)v10[135]) /*0x6f82bf*/
      || (*(int (__thiscall **)(int *))(*v12 + 44))(v12) != 6
      || (*(int (__thiscall **)(int *))(*v10 + 44))(v10) != 15 )
    {
      return 0; /*0x6f82bf*/
    }
    v59 = v10[373]; /*0x6f82c5*/
    LOBYTE(a4) = 0; /*0x6f82cb*/
    if ( v59 ) /*0x6f82d2*/
      LOBYTE(a4) = *(_BYTE *)(*(_DWORD *)(v59 + 36) + 246) != 0; /*0x6f82e1*/
    v60 = *(_BYTE *)(v12[328] + 5458) && *(_BYTE *)(v10[432] + 3779) && v12[135] != v10[135]; /*0x6f82f4*/
    v61 = *(_BYTE *)(v10[432] + 3764) && (unsigned __int8)BuildingClass::CanRepair((BuildingClass *)v12, (int)v10); /*0x6f832a*/
    if ( !*(_DWORD *)&dword_A8B238 || (_BYTE)a4 || !v60 && !v61 ) /*0x6f835e*/
      return 0; /*0x6f835e*/
  }
  if ( *(_BYTE *)(v58 + 562) /*0x6f83a3*/
    && !v12[176]
    && !*((_BYTE *)v12 + 708)
    && ((*(int (__thiscall **)(int *))(*v12 + 44))(v12) != 6 || *(_BYTE *)(*(_DWORD *)(v12[135] + 52) + 422)) )
  {
    if ( (unsigned __int8)House::IsCurrentPlayer((House *)v10[135]) /*0x6f83de*/
      || (*(int (__thiscall **)(int *))(*v12 + 44))(v12) != 6
      || (*(int (__thiscall **)(int *))(*v10 + 44))(v10) != 15 )
    {
      return 0; /*0x6f83de*/
    }
    v62 = v10[373]; /*0x6f83e4*/
    LOBYTE(a4) = 0; /*0x6f83ea*/
    if ( v62 ) /*0x6f83f1*/
      LOBYTE(a4) = *(_BYTE *)(*(_DWORD *)(v62 + 36) + 246) != 0; /*0x6f8400*/
    v63 = *(_BYTE *)(v12[328] + 5458) && *(_BYTE *)(v10[432] + 3779) && v12[135] != v10[135]; /*0x6f8413*/
    v64 = *(_BYTE *)(v10[432] + 3764) && (unsigned __int8)BuildingClass::CanRepair((BuildingClass *)v12, (int)v10); /*0x6f8449*/
    if ( !*(_DWORD *)&dword_A8B238 || (_BYTE)a4 || !v63 && !v64 ) /*0x6f847d*/
      return 0; /*0x6f847d*/
  }
  v65 = a7; /*0x6f8483*/
  if ( *((_BYTE *)a7 + 3220) ) /*0x6f8487*/
  {
    if ( (*(int (__thiscall **)(int *))(*v10 + 44))(v10) == 15 && *(_BYTE *)(v10[432] + 3782) ) /*0x6f84a3*/
      return 0; /*0x6f84ab*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int *, int))(*v12 + 200))(v12, v10[135]) /*0x6f84d4*/
    || *(_BYTE *)((*(int (__thiscall **)(int *))(*v10 + 132))(v10) + 3377) )
  {
    goto LABEL_129; /*0x6f84dc*/
  }
  v66 = v12[123]; /*0x6f84de*/
  v67 = v12[125]; /*0x6f84e4*/
  if ( v66 != -1 ) /*0x6f84ed*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v66 < v67 ) /*0x6f84f9*/
    {
      v67 -= *(_DWORD *)&stru_A8EB00.?[416] - v66; /*0x6f84ff*/
      goto LABEL_126; /*0x6f84ff*/
    }
    return 0; /*0x6f8952*/
  }
LABEL_126:
  if ( !v67 /*0x6f854b*/
    || (unsigned __int8)House::IsCurrentPlayer((House *)v10[135])
    || Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) > *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]
                                                                                                 + 3604)
                                                                                     + 4 * *(_DWORD *)(v10[135] + 388)) )
  {
    return 0; /*0x6f854b*/
  }
LABEL_129:
  if ( ((unsigned __int16)this & 0x100) != 0 ) /*0x6f855c*/
  {
    (*(void (__thiscall **)(int *))(*v12 + 60))(v12); /*0x6f8562*/
    return 0; /*0x6f856e*/
  }
  if ( (BYTE1(this) & 2) != 0 && (a5 != 6 || !*((_BYTE *)v65 + 5490)) ) /*0x6f8581*/
    return 0; /*0x6f8589*/
  if ( v10 && (v49 = (v10[5] & 4) == 0, LOBYTE(a4) = (v10[5] & 4) != 0, !v49) && v10[373] /*0x6f85e6*/
    || !(unsigned __int8)House::IsCurrentPlayer((House *)v10[135])
    || (*(unsigned __int8 (__thiscall **)(int *))(*v12 + 128))(v12)
    || a5 != 6
    || (v68 = (_DWORD *)(*(int (__thiscall **)(int *))(*v12 + 1012))(v12)) != 0
    && *v68
    && (*(int (__thiscall **)(int *))(*v12 + 704))(v12) )
  {
    if ( !v96 ) /*0x6f860a*/
      goto LABEL_150; /*0x6f860a*/
  }
  else if ( !v96 ) /*0x6f85f6*/
  {
    return 0; /*0x6f8601*/
  }
  if ( (*(int (__thiscall **)(int *))(*v12 + 44))(v12) != 6 ) /*0x6f8616*/
    return 0; /*0x6f8616*/
  if ( (unsigned __int8)HouseClass::IsAlliedWith((#375 *)v10[135], (#375 *)v12[135]) ) /*0x6f8629*/
  {
    BuildingClass::GetHealthRatio((BuildingClass *)v12); /*0x6f8634*/
    _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6f8639*/
    __asm /*0x6f863f*/
    {
      fcomp qword ptr [edx+1708h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 || !(*(int (__thiscall **)(int, int))(*(_DWORD *)v12[328] + 132))(v12[328], v10[135]) ) /*0x6f865f*/
      return 0; /*0x6f8667*/
  }
LABEL_150:
  if ( ((unsigned __int8)this & 0x40) != 0 && !v65[512] ) /*0x6f8674*/
    return 0; /*0x6f8674*/
  v98 = *(double *)(v10 + 39); /*0x6f868e*/
  v99 = v10[41]; /*0x6f86a6*/
  v71 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v98); /*0x6f86b5*/
  v100[0] = v12[39]; /*0x6f86b9*/
  v100[1] = v12[40]; /*0x6f86c5*/
  v101 = v12[41]; /*0x6f86d1*/
  v72 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v100); /*0x6f86d5*/
  if ( (v71->flags[0] & 0x100) != 0 && (v72->flags[0] & 0x100) != 0 && *((_BYTE *)v10 + 140) != *((_BYTE *)v12 + 140) ) /*0x6f86f8*/
    return 0; /*0x6f86f8*/
  v73 = TechnoClass::ComputeDamage((TechnoClass *)v10, v12, (_DWORD *)a8); /*0x6f8706*/
  v76 = Math::RoundToInt(v73); /*0x6f870b*/
  LOWORD(v75) = HIWORD(v76); /*0x6f870b*/
  LOWORD(v74) = v76; /*0x6f870b*/
  _EBP = (int *)a6; /*0x6f8710*/
  *(_DWORD *)a6 = v74; /*0x6f8716*/
  if ( *(_DWORD *)((*(int (__fastcall **)(int *, int))(*v10 + 132))(v10, v75) + 916) == 1 ) /*0x6f8728*/
  {
    if ( v12[28] <= 0 ) /*0x6f872f*/
    {
      v78 = *_EBP / 2; /*0x6f8737*/
LABEL_160:
      *_EBP = v78; /*0x6f875c*/
      goto LABEL_161; /*0x6f875c*/
    }
    if ( v12[28] <= *(_DWORD *)((*(int (__thiscall **)(int *))(*v12 + 132))(v12) + 160) / 2 ) /*0x6f8755*/
    {
      v78 = 2 * *_EBP; /*0x6f875a*/
      goto LABEL_160; /*0x6f875a*/
    }
  }
LABEL_161:
  v79 = v10[135]; /*0x6f875f*/
  if ( *(_BYTE *)(v79 + 585) ) /*0x6f8765*/
  {
    v80 = *(_DWORD *)(v79 + 22016); /*0x6f876f*/
    if ( v80 != -1 && v12[135] != *((_DWORD *)stru_A80220.? + v80) ) /*0x6f8789*/
      *_EBP = 1; /*0x6f878b*/
  }
  v81 = a5; /*0x6f8796*/
  if ( (BYTE1(this) & 8) != 0 ) /*0x6f879d*/
  {
    v82 = a7; /*0x6f879f*/
    if ( a5 == 6 ) /*0x6f87a6*/
    {
      v83 = a7[952]; /*0x6f87a8*/
      if ( v83 <= 0 ) /*0x6f87b0*/
        *_EBP = 0; /*0x6f87c3*/
      else
        *_EBP += 1000 * v83; /*0x6f87be*/
    }
  }
  else
  {
    v82 = a7; /*0x6f87cc*/
  }
  if ( SBYTE1(this) < 0 ) /*0x6f87d3*/
  {
    if ( v81 != 6 ) /*0x6f87d8*/
      return 0; /*0x6f87d8*/
    v84 = v82[1376]; /*0x6f87de*/
    if ( v84 <= 0 ) /*0x6f87e6*/
      return 0; /*0x6f87e6*/
    *_EBP += 1000 * v84; /*0x6f87f8*/
  }
  if ( ((unsigned int)this & 0x10000) != 0 ) /*0x6f8801*/
  {
    if ( v81 != 6 || !*((_BYTE *)v82 + 5458) ) /*0x6f880c*/
      return 0; /*0x6f8814*/
    *_EBP += 1000; /*0x6f881a*/
  }
  if ( (BYTE1(this) & 0x10) != 0 && v81 == 6 && !v82[942] ) /*0x6f882b*/
    *_EBP = 0; /*0x6f8835*/
  if ( (BYTE1(this) & 0x20) != 0 )
  {
    if ( (*(int (__thiscall **)(int *))(*v12 + 44))(v12) == 6
      && *(_BYTE *)(*((*(int (__thiscall **)(int *))(*v12 + 44))(v12) == 6 ? v12 + 328 : (int *)1312) + 5499) )
    {
      v85 = (*(int (__thiscall **)(int *))(*v12 + 44))(v12); /*0x6f8873*/
      if ( !(*(int (__thiscall **)(int *))(*(v85 == 6 ? v12 : 0) + 1032))(v85 == 6 ? v12 : 0) )
        return 0; /*0x6f8898*/
    }
    else
    {
      v86 = (_DWORD *)(*(int (__thiscall **)(int *))(*v12 + 1012))(v12); /*0x6f889f*/
      if ( !v86 || !*v86 || v81 != 6 ) /*0x6f88b9*/
        return 0; /*0x6f88b9*/
    }
  }
  v87 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(*v12 + 72))(v12, v102); /*0x6f88c8*/
  LOWORD(thisa) = *v87 / 256; /*0x6f88db*/
  HIWORD(thisa) = v87[1] / 256; /*0x6f88f3*/
  a4 = (int)thisa; /*0x6f88fc*/
  BridgeDamageMult = TechnoClass::GetBridgeDamageMult((TechnoClass *)v10, (__int16 *)&a4); /*0x6f8903*/
  __asm /*0x6f8908*/
  {
    fcom ds:dbl_7E1718
    fnstsw ax
  }
  if ( (_AX & 0x4000) != 0 ) /*0x6f8913*/
  {
    __asm { fstp st } /*0x6f8926*/
  }
  else
  {
    __asm /*0x6f8915*/
    {
      fild dword ptr [ebp+0]
      fmul st, st(1)
    }
    LOWORD(v90) = Math::RoundToInt(BridgeDamageMult); /*0x6f891a*/
    __asm { fstp st } /*0x6f891f*/
    *_EBP = v90; /*0x6f8921*/
  }
  v91 = *_EBP; /*0x6f8928*/
  if ( !*_EBP ) /*0x6f892d*/
  {
    *_EBP = 0; /*0x6f8948*/
    return 0; /*0x6f8948*/
  }
  if ( v91 < 1 ) /*0x6f8932*/
    v91 = 1; /*0x6f8934*/
  *_EBP = v91; /*0x6f893a*/
  return 1; /*0x6f7fb9*/
}



// ==== 0x006F8960  SelectTechnoClassAreaTarget  this=TechnoClass  sig=csp ====
char __userpurge SelectTechnoClassAreaTarget@<al>(
        TechnoClass *a1@<ecx>,
        int a2@<edx>,
        double a3@<st0>,
        TechnoClass *a4,
        int a5,
        __int16 *a6,
        int a7,
        int *a8,
        int *a9,
        int a10)
{
  _DWORD *v11; // ebx
  int v12; // eax
  int v14; // edi
  int v15; // ebp
  TechnoClass *transporter; // ecx
  Object *owner; // ebx
  TechnoClass *mindControlledBy; // eax
  char v23; // bl
  _DWORD *v24; // [esp+0h] [ebp-10h]
  char v25; // [esp+1Ch] [ebp+Ch]

  *a8 = 0; /*0x6f8972*/
  *a9 = 0; /*0x6f8979*/
  v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a6); /*0x6f898d*/
  if ( a10 != -1 ) /*0x6f8992*/
  {
    v12 = (*((int (__thiscall **)(TechnoClass *))a1->RadioClass + 33))(a1); /*0x6f899a*/
    if ( MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], a6, *(_DWORD *)(v12 + 1460), 1) != a10 ) /*0x6f89b4*/
      return 0; /*0x6f89bc*/
  }
  v14 = v11[58]; /*0x6f89bf*/
  v15 = 0; /*0x6f89c5*/
  if ( !v14 ) /*0x6f89c9*/
    v14 = v11[57]; /*0x6f89cb*/
  transporter = a1->transporter; /*0x6f89d1*/
  owner = 0; /*0x6f89d7*/
  v25 = 0; /*0x6f89db*/
  if ( transporter ) /*0x6f89e0*/
  {
    if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))transporter->RadioClass + 33))(transporter) + 1508) ) /*0x6f89ea*/
    {
      mindControlledBy = a1->transporter->mindControlledBy; /*0x6f89fa*/
      if ( mindControlledBy ) /*0x6f8a02*/
      {
        owner = (Object *)mindControlledBy->owner; /*0x6f8a04*/
        v25 = 1; /*0x6f8a0a*/
      }
    }
  }
  if ( !v14 ) /*0x6f8a11*/
    return 0; /*0x6f8b53*/
  while ( 1 ) /*0x6f8a17*/
  {
    if ( (TechnoClass *)v14 == a1 ) /*0x6f8a19*/
      goto LABEL_33; /*0x6f8a19*/
    if ( (*(_BYTE *)(v14 + 20) & 1) == 0 ) /*0x6f8a2e*/
    {
      v15 = 0; /*0x6f8a23*/
      goto LABEL_33; /*0x6f8a25*/
    }
    v15 = v14; /*0x6f8a34*/
    if ( TechnoClass::GetValue(a1, -1) >= 0 ) /*0x6f8a3d*/
      break; /*0x6f8a3d*/
    BuildingClass::GetHealthRatio((BuildingClass *)v14); /*0x6f8a41*/
    _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6f8a46*/
    __asm /*0x6f8a4c*/
    {
      fcomp qword ptr [ecx+16F8h]
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 && (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)a1->owner, v14) ) /*0x6f8a64*/
      goto LABEL_34; /*0x6f8a6b*/
LABEL_33:
    v14 = *(_DWORD *)(v14 + 48); /*0x6f8b3e*/
    if ( !v14 ) /*0x6f8b43*/
      goto LABEL_34; /*0x6f8b43*/
  }
  if ( ((unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)a1->owner, v14) || v25) /*0x6f8ac7*/
    && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))a1->RadioClass + 33))(a1) + 1728)
    && !a1->isBerserk
    && (!v25 || !owner || !(unsigned __int8)Object::IsAlliedWithObjectHouse(owner, v14)) )
  {
    if ( (*((int (__thiscall **)(TechnoClass *))a1->RadioClass + 11))(a1) != 15 ) /*0x6f8ada*/
      goto LABEL_33; /*0x6f8ada*/
    if ( !LOBYTE(a1[1].airstrikeTintTimer[0]) ) /*0x6f8adc*/
    {
      if ( !*(_BYTE *)(a1[1].ironTintTimer[1] + 3779) ) /*0x6f8aec*/
        goto LABEL_33; /*0x6f8aec*/
      if ( a1->? != 11 ) /*0x6f8afd*/
        goto LABEL_33; /*0x6f8afd*/
      BuildingClass::GetHealthRatio((BuildingClass *)v14); /*0x6f8b01*/
      _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6f8b06*/
      __asm /*0x6f8b0c*/
      {
        fcomp qword ptr [edx+1708h]
        fnstsw ax
      }
      if ( (_AX & 0x4100) == 0 /*0x6f8b3c*/
        || (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 44))(v14) != 6
        || (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v14 + 1312) + 132))(
             *(_DWORD *)(v14 + 1312),
             *(_DWORD *)(v14 + 540)) <= 0 )
      {
        goto LABEL_33; /*0x6f8b3c*/
      }
    }
  }
LABEL_34:
  if ( !v15 ) /*0x6f8b4b*/
    return 0; /*0x6f8b4b*/
  v23 = 0; /*0x6f8b5b*/
  *a8 = v15; /*0x6f8b5d*/
  if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)a1->owner, v15)
    || TechnoClass::GetValue(a1, -1) < 0
    || !(unsigned __int8)House::IsCurrentPlayer((House *)a1->owner)
    && a1
    && (*((int (__thiscall **)(TechnoClass *))a1->RadioClass + 11))(a1) == 15
    && *(_BYTE *)(*((*((int (__thiscall **)(TechnoClass *))a1->RadioClass + 11))(a1) == 15
                  ? &a1[1].ironTintTimer[1]
                  : (int *)1728)
                + 3779)
    || *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))a1->RadioClass + 33))(a1) + 1728)
    || a1->isBerserk
    || v25 )
  {
    return TechnoClass::EvaluateTarget( /*0x6f8c05*/
             a4,
             a3,
             a5,
             a7,
             v15,
             (int)a9,
             (int *)0xFFFFFFFF,
             (int)&g_BuildingLoadQueue_Array.?[3],
             v24);
  }
  return v23; /*0x6f89b6*/
}



// ==== 0x006F8C10  TechnoClass::EvaluateBuildingTarget  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::EvaluateBuildingTarget(TechnoClass *this, __int16 *a2)
{
  double v2; // st7
  _DWORD *v4; // edi
  int v5; // eax
  int (__thiscall **vtable0)(TechnoClass *, void *); // ebp
  void *v7; // eax
  int v8; // eax
  int v9; // ecx
  unsigned __int8 (__thiscall **v10)(TechnoClass *, int *, int); // edx
  int *v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // edi
  int v17; // ebx
  _DWORD *v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // edx
  int v23; // kr00_4
  int v25; // [esp+24h] [ebp-18h] BYREF
  int v26; // [esp+28h] [ebp-14h]
  int v27; // [esp+2Ch] [ebp-10h]
  _BYTE v28[12]; // [esp+30h] [ebp-Ch] BYREF

  if ( (unsigned __int8)House::IsCurrentPlayer((House *)this->owner) ) /*0x6f8c1e*/
    return 0; /*0x6f8c1e*/
  if ( !*(_BYTE *)(80 * *(_DWORD *)&this->owner->__pad_13C[72] + *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5505) ) /*0x6f8c43*/
    return 0; /*0x6f8c43*/
  v4 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x6f8c61*/
  v5 = v4[17]; /*0x6f8c63*/
  if ( v5 == -1 ) /*0x6f8c69*/
    return 0; /*0x6f8c69*/
  if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_34 + 4 * v5) + 680) ) /*0x6f8c78*/
    return 0; /*0x6f8c78*/
  vtable0 = (int (__thiscall **)(TechnoClass *, void *))this->RadioClass; /*0x6f8c87*/
  v7 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x6f8c8f*/
  v8 = vtable0[185](this, v7); /*0x6f8c97*/
  v9 = *a2 << 8; /*0x6f8ca7*/
  v26 = (a2[1] << 8) + 128; /*0x6f8cb7*/
  v10 = (unsigned __int8 (__thiscall **)(TechnoClass *, int *, int))this->RadioClass; /*0x6f8cbb*/
  v25 = v9 + 128; /*0x6f8cc1*/
  v27 = 0; /*0x6f8cc8*/
  if ( !v10[89](this, &v25, v8) ) /*0x6f8cd0*/
    return 0; /*0x6f8cd0*/
  v11 = (int *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 253))(this); /*0x6f8ce3*/
  if ( !v11 ) /*0x6f8ceb*/
    return 0; /*0x6f8ceb*/
  v12 = *v11; /*0x6f8cf1*/
  if ( !v12 ) /*0x6f8cf5*/
    return 0; /*0x6f8cf5*/
  v13 = *(_DWORD *)(v12 + 172); /*0x6f8cfb*/
  if ( !v13 ) /*0x6f8d03*/
    return 0; /*0x6f8d03*/
  v14 = *(_DWORD *)(v12 + 160); /*0x6f8d09*/
  if ( v14 ) /*0x6f8d11*/
  {
    if ( !*(_BYTE *)(v14 + 677) ) /*0x6f8d13*/
      return 0; /*0x6f8d13*/
  }
  if ( !*(_BYTE *)(v13 + 324) ) /*0x6f8d21*/
    return 0; /*0x6f8d21*/
  v15 = v4[20]; /*0x6f8d2f*/
  if ( v15 == -1 || (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, *((#375 **)stru_A80220.? + v15)) ) /*0x6f8d4b*/
    return 0; /*0x6f8de5*/
  v16 = (*a2 << 8) + 128; /*0x6f8d6e*/
  v17 = (a2[1] << 8) + 128; /*0x6f8d74*/
  v18 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v28); /*0x6f8d7a*/
  v19 = v18[1] - v17; /*0x6f8d84*/
  v25 = *v18 - v16; /*0x6f8d86*/
  v20 = v18[2]; /*0x6f8d8a*/
  v26 = v19; /*0x6f8d8d*/
  v27 = v20; /*0x6f8d91*/
  Math::Sqrt((double)v25 * (double)v25 + (double)v20 * (double)v20 + (double)v19 * (double)v19); /*0x6f8dbd*/
  v23 = Math::RoundToInt(v2); /*0x6f8dc5*/
  LOWORD(v22) = HIWORD(v23); /*0x6f8dc5*/
  LOWORD(v21) = v23; /*0x6f8dc5*/
  return (*((int (__fastcall **)(TechnoClass *, int, _DWORD))this->RadioClass + 90))(this, v22, 0) - v21; /*0x6f8dda*/
}



// ==== 0x006F8DF0  TechnoClass::SelectAutoTarget_Start_AU  this=TechnoClass  sig=csp ====
void *__fastcall TechnoClass::SelectAutoTarget_Start_AU(TechnoClass *this, int a2, int a3, int a4, char a5)
{
  double v5; // st7
  int (__thiscall **vtable0)(TechnoClass *); // eax
  int v9; // ebx
  _DWORD *v10; // eax
  int (__thiscall **v11)(TechnoClass *, int); // edx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  TechnoClass *transporter; // ecx
  int v18; // edi
  int v19; // eax
  HouseClass *v20; // eax
  int v21; // eax
  int v22; // edi
  int v23; // ecx
  unsigned __int8 (__thiscall **v24)(TechnoClass *); // edx
  void *v25; // eax
  int j; // ebp
  HouseClass *v27; // ecx
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  int v31; // edx
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // edx
  int v36; // edi
  int v37; // ebx
  int v38; // eax
  int v39; // ebp
  int v40; // ecx
  int v41; // eax
  int v42; // edx
  int v43; // ecx
  int v44; // eax
  int v45; // eax
  int v46; // edx
  int v47; // eax
  int v48; // eax
  int v49; // ebp
  int v50; // ecx
  int v51; // eax
  int v52; // edx
  int v53; // ecx
  int v54; // eax
  int v55; // eax
  int v56; // edx
  int v57; // eax
  int v58; // ebx
  int v59; // eax
  int v60; // ebp
  int v61; // ecx
  int v62; // eax
  int v63; // edx
  int v64; // ecx
  int v65; // eax
  int v66; // eax
  int v67; // edx
  int v68; // eax
  int v69; // eax
  int v70; // ebp
  int v71; // ecx
  int v72; // eax
  int v73; // edx
  int v74; // ecx
  int v75; // eax
  int v76; // eax
  int v77; // edx
  int v78; // eax
  int v79; // edi
  char v80; // bl
  int i; // ebp
  HouseClass *owner; // ecx
  int v83; // edi
  int v84; // eax
  int v85; // ebx
  int v86; // ebp
  HouseClass *v87; // ecx
  int v88; // edi
  _DWORD *v89; // [esp+4Ch] [ebp-6Ch]
  bool v90; // [esp+5Fh] [ebp-59h]
  int v91; // [esp+60h] [ebp-58h]
  int v92; // [esp+64h] [ebp-54h] BYREF
  int v93; // [esp+68h] [ebp-50h]
  void *v94; // [esp+6Ch] [ebp-4Ch]
  int v95; // [esp+70h] [ebp-48h]
  __int16 v96[2]; // [esp+74h] [ebp-44h] BYREF
  int v97; // [esp+78h] [ebp-40h]
  int v98; // [esp+7Ch] [ebp-3Ch]
  __int16 v99[2]; // [esp+80h] [ebp-38h] BYREF
  int v100; // [esp+84h] [ebp-34h]
  int *TileIndex; // [esp+88h] [ebp-30h]
  int v102; // [esp+8Ch] [ebp-2Ch]
  int v103; // [esp+90h] [ebp-28h]
  int v104; // [esp+94h] [ebp-24h]
  int *v105; // [esp+98h] [ebp-20h]
  __int16 v106[2]; // [esp+9Ch] [ebp-1Ch] BYREF
  __int16 v107; // [esp+A0h] [ebp-18h]
  __int16 v108[4]; // [esp+A4h] [ebp-14h] BYREF
  char v109[4]; // [esp+ACh] [ebp-Ch] BYREF

  v94 = 0; /*0x6f8e05*/
  ++*(_DWORD *)&stru_A8EB00.?[80]; /*0x6f8e09*/
  vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x6f8e0f*/
  v93 = -1; /*0x6f8e11*/
  TileIndex = (int *)-1; /*0x6f8e15*/
  if ( *(_BYTE *)(vtable0[33](this) + 3360) && (unsigned __int8)House::IsCurrentPlayer((House *)this->owner) ) /*0x6f8e2f*/
    return 0; /*0x6f8e41*/
  LOWORD(v9) = a3; /*0x6f8e44*/
  if ( (a3 & 1) == 0 /*0x6f8e63*/
    && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 6
    && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 2 )
  {
    v10 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 18))(this); /*0x6f8e6e*/
    LOWORD(TileIndex) = *v10 / 256; /*0x6f8e83*/
    v11 = (int (__thiscall **)(TechnoClass *, int))this->RadioClass; /*0x6f8e94*/
    HIWORD(TileIndex) = v10[1] / 256; /*0x6f8e99*/
    v105 = TileIndex; /*0x6f8ea2*/
    v12 = v11[33](this, 1); /*0x6f8ea8*/
    TileIndex = (int *)MapClass::GetTileIndex( /*0x6f8ec4*/
                         (MapClass *)&stru_87F5F0.__pad_58[416],
                         v106,
                         *(_DWORD *)(v12 + 1460),
                         (char)v109);
  }
  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 15 ) /*0x6f8ed2*/
  {
    if ( TechnoClass::GetValue(this, -1) < 0 ) /*0x6f8ede*/
    {
      v9 = a3 & 3 | 0x4008; /*0x6f8ee3*/
LABEL_16:
      a3 = v9; /*0x6f8f25*/
      goto LABEL_17; /*0x6f8f25*/
    }
    if ( *(_BYTE *)(this->airstrikeTimer + 3779) ) /*0x6f8ef1*/
    {
      LOWORD(v9) = a3 & 0xFFE7; /*0x6f8efb*/
      a3 &= 0xFFFFFFE7; /*0x6f8efe*/
    }
  }
  else if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 1 /*0x6f8f1a*/
         && TechnoClass::GetValue(this, -1) < 0 )
  {
    v9 = a3 & 3 | 0x4010; /*0x6f8f1f*/
    goto LABEL_16; /*0x6f8f1f*/
  }
LABEL_17:
  v91 = 0; /*0x6f8f29*/
  if ( (v9 & 0x100) != 0 ) /*0x6f8f30*/
    v91 = 32834; /*0x6f8f32*/
  v13 = v9 & 4; /*0x6f8f3a*/
  if ( v13 ) /*0x6f8f3d*/
  {
    v14 = v91; /*0x6f8f3f*/
    LOBYTE(v14) = v91 | 4; /*0x6f8f43*/
    v91 = v14; /*0x6f8f45*/
  }
  if ( (a3 & 0x1BA60) != 0 ) /*0x6f8f52*/
    v91 |= 0x40u; /*0x6f8f54*/
  if ( (a3 & 8) != 0 ) /*0x6f8f5b*/
  {
    v15 = v91; /*0x6f8f5d*/
    BYTE1(v15) = BYTE1(v91) | 0x80; /*0x6f8f61*/
    v91 = v15; /*0x6f8f64*/
  }
  if ( (a3 & 0x50) != 0 ) /*0x6f8f6a*/
  {
    v16 = v91; /*0x6f8f6c*/
    LOBYTE(v16) = v91 | 2; /*0x6f8f70*/
    v91 = v16; /*0x6f8f72*/
  }
  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1712) ) /*0x6f8f80*/
  {
    (*(void (__thiscall **)(int *))(this->currentTargets[0] + 12))(this->currentTargets); /*0x6f8f96*/
    (*(void (__thiscall **)(int *))(this->currentTargetThreatValues[0] + 12))(this->currentTargetThreatValues); /*0x6f8fa5*/
  }
  transporter = this->transporter; /*0x6f8fa8*/
  v90 = 0; /*0x6f8fae*/
  if ( transporter /*0x6f8fbf*/
    && *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))transporter->RadioClass + 33))(transporter) + 1508) )
  {
    v90 = this->transporter->mindControlledBy != 0; /*0x6f8fd7*/
  }
  if ( (a3 & 3) == 0 )
  {
    v80 = a5; /*0x6f9b72*/
    if ( (v91 & 4) != 0 ) /*0x6f9b78*/
    {
      for ( i = 0; i < dword_A8E3A0; ++i ) /*0x6f9b87*/
      {
        owner = this->owner; /*0x6f9b93*/
        v83 = *((_DWORD *)dword_A8E394 + i); /*0x6f9b99*/
        *(_DWORD *)v106 = 0; /*0x6f9b9c*/
        if ( (!(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)owner, v83) /*0x6f9c3e*/
           || *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1728)
           || this->isBerserk
           || v90)
          && (!v80 || *(_DWORD *)(*(_DWORD *)(v83 + 540) + 48) == this->owner->enemyHouseIndex)
          && ((a3 & 0x4000) == 0 || (unsigned __int8)HouseClass::IsAlliedWith(
                                                       (#375 *)this->owner,
                                                       *(#375 **)(v83 + 540)))
          && TechnoClass::EvaluateTarget(
               (TechnoClass *)a3,
               v5,
               v91,
               -1,
               v83,
               (int)v106,
               (int *)0xFFFFFFFF,
               (int)&g_BuildingLoadQueue_Array.?[3],
               v89)
          && *(int *)v106 > v93 )
        {
          v94 = (void *)v83; /*0x6f9c40*/
          v93 = *(_DWORD *)v106; /*0x6f9c44*/
        }
      }
    }
    if ( (a3 & 0x10) != 0 ) /*0x6f9c5b*/
    {
      v84 = v91; /*0x6f9c5d*/
      LOBYTE(v84) = v91 | 4; /*0x6f9c61*/
      v91 = v84; /*0x6f9c63*/
    }
    v85 = 0; /*0x6f9c6c*/
    if ( *(int *)&stru_A8EB00.?[164] > 0 )
    {
      v86 = a4; /*0x6f9c76*/
      do
      {
        v87 = this->owner; /*0x6f9c80*/
        v88 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v85); /*0x6f9c86*/
        a4 = 0; /*0x6f9c89*/
        if ( (!(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)v87, v88)
           || TechnoClass::GetValue(this, -1) < 0
           || !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner)
           && this
           && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 15
           && *((_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 15
                        ? (TechnoClass *)((char *)this + 1728)
                        : (TechnoClass *)1728)->RadioClass
              + 3779)
           || *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1728)
           || this->isBerserk
           || v90)
          && *(_DWORD *)(v88 + 148) == 2
          && (!a5 || *(_DWORD *)(*(_DWORD *)(v88 + 540) + 48) == this->owner->enemyHouseIndex)
          && ((a3 & 0x4000) == 0 || (unsigned __int8)HouseClass::IsAlliedWith(
                                                       (#375 *)this->owner,
                                                       *(#375 **)(v88 + 540)))
          && TechnoClass::EvaluateTarget((TechnoClass *)a3, v5, v91, -1, v88, (int)&a4, TileIndex, v86, v89)
          && a4 > v93 )
        {
          v94 = (void *)v88; /*0x6f9d8b*/
          v93 = a4; /*0x6f9d8f*/
        }
        ++v85; /*0x6f9d98*/
      }
      while ( v85 < *(int *)&stru_A8EB00.?[164] );
    }
    return v94; /*0x6f9d9b*/
  }
  v18 = 0; /*0x6f8fe8*/
  v97 = 0; /*0x6f8fec*/
  if ( (a3 & 1) != 0 ) /*0x6f8ff0*/
  {
    v19 = (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 199))(this, 0); /*0x6f8ff5*/
LABEL_39:
    v18 = v19; /*0x6f901e*/
    v97 = v19; /*0x6f9020*/
    goto LABEL_40; /*0x6f9020*/
  }
  if ( (a3 & 2) != 0 ) /*0x6f8ff9*/
  {
    if ( this->? == 25 ) /*0x6f9002*/
      v19 = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 199))(this, 2); /*0x6f900a*/
    else
      v19 = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 199))(this, 1); /*0x6f9018*/
    goto LABEL_39; /*0x6f9010*/
  }
LABEL_40:
  if ( TechnoClass::GetValue(this, -1) < 0 && this->? == 5 ) /*0x6f9037*/
  {
    v18 = 512; /*0x6f9039*/
    v97 = 512; /*0x6f903e*/
  }
  v100 = v18 / 256; /*0x6f9052*/
  if ( !v18 ) /*0x6f9056*/
  {
    v20 = (HouseClass *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6f9060*/
    if ( !(unsigned __int8)HouseClass::HasPower(v20) /*0x6f907b*/
      || *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3285) )
    {
      if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3433) /*0x6f90c2*/
        && *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3479)
        && *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3348) )
      {
        v21 = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1464); /*0x6f90d6*/
      }
      else
      {
        v22 = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 90))(this, 1); /*0x6f90ea*/
        if ( (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 90))(this, 0) <= v22 ) /*0x6f90fa*/
          v21 = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 90))(this, 1); /*0x6f9110*/
        else
          v21 = (*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 90))(this, 0); /*0x6f9102*/
      }
    }
    else
    {
      v21 = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 90))(this, this->currentWeaponSlot); /*0x6f908e*/
    }
    v100 = v21 / 256 /*0x6f9144*/
         + *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1676) / 256
         + 1;
  }
  v23 = a4; /*0x6f9148*/
  LOWORD(a4) = *(_DWORD *)a4 / 256; /*0x6f915a*/
  v24 = (unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass; /*0x6f916b*/
  HIWORD(a4) = *(_DWORD *)(v23 + 4) / 256; /*0x6f9170*/
  *(_DWORD *)v108 = a4; /*0x6f9179*/
  if ( v24[256](this) ) /*0x6f917f*/
    v100 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 257))(this) /*0x6f91a3*/
         + *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3912)
         + 1;
  if ( v13 ) /*0x6f91a9*/
  {
    v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v108); /*0x6f91c8*/
    AircraftTrackerClass::FillCurrentVector((int)&g_CellClassManager, (int)v25, v100); /*0x6f91d3*/
    for ( j = VectorClass::RemoveObjectById(&g_CellClassManager); j; j = VectorClass::RemoveObjectById(&g_CellClassManager) ) /*0x6f91e6*/
    {
      v27 = this->owner; /*0x6f91ec*/
      a4 = 0; /*0x6f91f3*/
      if ( (!(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)v27, j) /*0x6f92ac*/
         || *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1728)
         || this->isBerserk
         || v90)
        && ((a3 & 0x4000) == 0 || (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, *(#375 **)(j + 540)))
        && *(_BYTE *)(j + 116)
        && (*(int (__thiscall **)(int))(*(_DWORD *)j + 120))(j) != 2
        && (!a5 || *(_DWORD *)(*(_DWORD *)(j + 540) + 48) == this->owner->enemyHouseIndex)
        && TechnoClass::EvaluateTarget(
             (TechnoClass *)a3,
             v5,
             v91 | 0x8002,
             v97,
             j,
             (int)&a4,
             (int *)0xFFFFFFFF,
             (int)&g_BuildingLoadQueue_Array.?[3],
             v89) )
      {
        if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1712) ) /*0x6f92c3*/
        {
          v28 = this->currentTargets[2]; /*0x6f92d1*/
          if ( this->currentTargets[4] < v28 /*0x6f9302*/
            || (BYTE1(this->currentTargets[3]) || !v28)
            && (v29 = this->currentTargets[5], v29 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->currentTargets[0] + 8))(
                 this->currentTargets,
                 v28 + v29,
                 0) )
          {
            v30 = this->currentTargets[4]; /*0x6f9309*/
            v31 = this->currentTargets[1]; /*0x6f930c*/
            this->currentTargets[4] = v30 + 1; /*0x6f9312*/
            *(_DWORD *)(v31 + 4 * v30) = j; /*0x6f9315*/
          }
          v32 = this->currentTargetThreatValues[2]; /*0x6f9318*/
          if ( this->currentTargetThreatValues[4] < v32 /*0x6f9349*/
            || (BYTE1(this->currentTargetThreatValues[3]) || !v32)
            && (v33 = this->currentTargetThreatValues[5], v33 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->currentTargetThreatValues[0] + 8))(
                 this->currentTargetThreatValues,
                 v32 + v33,
                 0) )
          {
            v34 = this->currentTargetThreatValues[4]; /*0x6f9350*/
            v35 = this->currentTargetThreatValues[1]; /*0x6f9353*/
            this->currentTargetThreatValues[4] = v34 + 1; /*0x6f9359*/
            *(_DWORD *)(v35 + 4 * v34) = a4; /*0x6f9360*/
          }
        }
        if ( a4 > v93 ) /*0x6f936d*/
        {
          v94 = (void *)j; /*0x6f936f*/
          v93 = a4; /*0x6f9373*/
        }
      }
    }
  }
  if ( (a3 & 0x10) != 0 ) /*0x6f9391*/
    v91 |= 4u; /*0x6f9393*/
  if ( a3 == 5 ) /*0x6f9398*/
    return v94; /*0x6f9398*/
  v99[0] = 0; /*0x6f93a9*/
  v99[1] = 0; /*0x6f93ae*/
  v98 = 0; /*0x6f93b3*/
  v95 = 0; /*0x6f93b7*/
  if ( v100 <= 0 ) /*0x6f93bb*/
    return v94; /*0x6f9da1*/
  while ( 1 ) /*0x6f93c7*/
  {
    v36 = -v95; /*0x6f93c7*/
    v102 = -v95; /*0x6f93cb*/
    if ( -v95 <= v95 ) /*0x6f93cf*/
    {
      *(_WORD *)&v109[2] = -(__int16)v95; /*0x6f93d7*/
      while ( 1 ) /*0x6f93f2*/
      {
        HIWORD(v103) = *(_WORD *)&v109[2] + v108[1]; /*0x6f93f2*/
        LOWORD(v103) = v36 + v108[0]; /*0x6f93f7*/
        *(_DWORD *)v96 = v103; /*0x6f940a*/
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v96) ) /*0x6f940e*/
        {
          v37 = a3; /*0x6f941f*/
          if ( SelectTechnoClassAreaTarget( /*0x6f9490*/
                 this,
                 (int)v96,
                 v5,
                 (TechnoClass *)a3,
                 v91,
                 v96,
                 v97,
                 &a4,
                 &v92,
                 (int)TileIndex)
            && a4
            && (!a5 || *(_DWORD *)(*(_DWORD *)(a4 + 540) + 48) == this->owner->enemyHouseIndex)
            && ((a3 & 0x4000) == 0
             || (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, *(#375 **)(a4 + 540))) )
          {
            if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1712) ) /*0x6f94a7*/
            {
              v38 = this->currentTargets[2]; /*0x6f94b5*/
              v39 = a4; /*0x6f94c1*/
              if ( this->currentTargets[4] < v38 /*0x6f94ea*/
                || (BYTE1(this->currentTargets[3]) || !v38)
                && (v40 = this->currentTargets[5], v40 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->currentTargets[0] + 8))(
                     this->currentTargets,
                     v38 + v40,
                     0) )
              {
                v41 = this->currentTargets[4]; /*0x6f94f1*/
                v42 = this->currentTargets[1]; /*0x6f94f4*/
                this->currentTargets[4] = v41 + 1; /*0x6f94fa*/
                *(_DWORD *)(v42 + 4 * v41) = v39; /*0x6f94fd*/
              }
              v43 = this->currentTargetThreatValues[2]; /*0x6f9500*/
              if ( this->currentTargetThreatValues[4] < v43 /*0x6f9531*/
                || (BYTE1(this->currentTargetThreatValues[3]) || !v43)
                && (v44 = this->currentTargetThreatValues[5], v44 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->currentTargetThreatValues[0] + 8))(
                     this->currentTargetThreatValues,
                     v43 + v44,
                     0) )
              {
                v45 = this->currentTargetThreatValues[4]; /*0x6f9538*/
                v46 = this->currentTargetThreatValues[1]; /*0x6f953b*/
                this->currentTargetThreatValues[4] = v45 + 1; /*0x6f9541*/
                *(_DWORD *)(v46 + 4 * v45) = v92; /*0x6f9548*/
              }
            }
            if ( v93 < v92 ) /*0x6f9555*/
            {
              v93 = v92; /*0x6f955b*/
              v94 = (void *)a4; /*0x6f955f*/
            }
          }
          if ( !v94 ) /*0x6f9569*/
          {
            v47 = TechnoClass::EvaluateBuildingTarget(this, v96); /*0x6f9572*/
            v92 = v47; /*0x6f957b*/
            if ( v98 < v47 ) /*0x6f9581*/
            {
              v98 = v47; /*0x6f9587*/
              *(_DWORD *)v99 = *(_DWORD *)v96; /*0x6f958b*/
            }
          }
          LOWORD(v36) = v102; /*0x6f958f*/
        }
        else
        {
          v37 = a3; /*0x6f9b0e*/
        }
        HIWORD(v104) = v95 + v108[1]; /*0x6f95a3*/
        LOWORD(v104) = v36 + v108[0]; /*0x6f95a8*/
        *(_DWORD *)v96 = v104; /*0x6f95bb*/
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v96) ) /*0x6f95bf*/
        {
          if ( SelectTechnoClassAreaTarget( /*0x6f963d*/
                 this,
                 (int)v96,
                 v5,
                 (TechnoClass *)v37,
                 v91,
                 v96,
                 v97,
                 &a4,
                 &v92,
                 (int)TileIndex)
            && a4
            && (!a5 || *(_DWORD *)(*(_DWORD *)(a4 + 540) + 48) == this->owner->enemyHouseIndex)
            && ((v37 & 0x4000) == 0
             || (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, *(#375 **)(a4 + 540))) )
          {
            if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1712) ) /*0x6f9654*/
            {
              v48 = this->currentTargets[2]; /*0x6f9662*/
              v49 = a4; /*0x6f966e*/
              if ( this->currentTargets[4] < v48 /*0x6f9697*/
                || (BYTE1(this->currentTargets[3]) || !v48)
                && (v50 = this->currentTargets[5], v50 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->currentTargets[0] + 8))(
                     this->currentTargets,
                     v48 + v50,
                     0) )
              {
                v51 = this->currentTargets[4]; /*0x6f969e*/
                v52 = this->currentTargets[1]; /*0x6f96a1*/
                this->currentTargets[4] = v51 + 1; /*0x6f96a7*/
                *(_DWORD *)(v52 + 4 * v51) = v49; /*0x6f96aa*/
              }
              v53 = this->currentTargetThreatValues[2]; /*0x6f96ad*/
              if ( this->currentTargetThreatValues[4] < v53 /*0x6f96de*/
                || (BYTE1(this->currentTargetThreatValues[3]) || !v53)
                && (v54 = this->currentTargetThreatValues[5], v54 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->currentTargetThreatValues[0] + 8))(
                     this->currentTargetThreatValues,
                     v53 + v54,
                     0) )
              {
                v55 = this->currentTargetThreatValues[4]; /*0x6f96e5*/
                v56 = this->currentTargetThreatValues[1]; /*0x6f96e8*/
                this->currentTargetThreatValues[4] = v55 + 1; /*0x6f96ee*/
                *(_DWORD *)(v56 + 4 * v55) = v92; /*0x6f96f5*/
              }
            }
            if ( v93 < v92 ) /*0x6f9702*/
            {
              v93 = v92; /*0x6f9708*/
              v94 = (void *)a4; /*0x6f970c*/
            }
          }
          if ( !v94 ) /*0x6f9716*/
          {
            v57 = TechnoClass::EvaluateBuildingTarget(this, v96); /*0x6f971f*/
            v92 = v57; /*0x6f9728*/
            if ( v98 < v57 ) /*0x6f972e*/
            {
              v98 = v57; /*0x6f9734*/
              *(_DWORD *)v99 = *(_DWORD *)v96; /*0x6f9738*/
            }
          }
        }
        if ( ++v102 > v95 ) /*0x6f974b*/
          break; /*0x6f974b*/
        LOWORD(v36) = v102; /*0x6f93de*/
      }
    }
    v58 = 1 - v95; /*0x6f975a*/
    if ( 1 - v95 < v95 ) /*0x6f975e*/
    {
      v107 = -(__int16)v95; /*0x6f9768*/
      do /*0x6f9adc*/
      {
        LOWORD(v105) = v108[0] + v107; /*0x6f977b*/
        HIWORD(v105) = v58 + v108[1]; /*0x6f9786*/
        *(_DWORD *)v96 = v105; /*0x6f9795*/
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v96) ) /*0x6f9799*/
        {
          if ( SelectTechnoClassAreaTarget(this, a3, v5, (TechnoClass *)a3, v91, v96, v97, &a4, &v92, (int)TileIndex) /*0x6f9822*/
            && a4
            && (!a5 || *(_DWORD *)(*(_DWORD *)(a4 + 540) + 48) == this->owner->enemyHouseIndex)
            && ((a3 & 0x4000) == 0
             || (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, *(#375 **)(a4 + 540))) )
          {
            if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1712) ) /*0x6f9839*/
            {
              v59 = this->currentTargets[2]; /*0x6f9847*/
              v60 = a4; /*0x6f9853*/
              if ( this->currentTargets[4] < v59 /*0x6f987c*/
                || (BYTE1(this->currentTargets[3]) || !v59)
                && (v61 = this->currentTargets[5], v61 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->currentTargets[0] + 8))(
                     this->currentTargets,
                     v59 + v61,
                     0) )
              {
                v62 = this->currentTargets[4]; /*0x6f9883*/
                v63 = this->currentTargets[1]; /*0x6f9886*/
                this->currentTargets[4] = v62 + 1; /*0x6f988c*/
                *(_DWORD *)(v63 + 4 * v62) = v60; /*0x6f988f*/
              }
              v64 = this->currentTargetThreatValues[2]; /*0x6f9892*/
              if ( this->currentTargetThreatValues[4] < v64 /*0x6f98c3*/
                || (BYTE1(this->currentTargetThreatValues[3]) || !v64)
                && (v65 = this->currentTargetThreatValues[5], v65 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->currentTargetThreatValues[0] + 8))(
                     this->currentTargetThreatValues,
                     v64 + v65,
                     0) )
              {
                v66 = this->currentTargetThreatValues[4]; /*0x6f98ca*/
                v67 = this->currentTargetThreatValues[1]; /*0x6f98cd*/
                this->currentTargetThreatValues[4] = v66 + 1; /*0x6f98d3*/
                *(_DWORD *)(v67 + 4 * v66) = v92; /*0x6f98da*/
              }
            }
            if ( v93 < v92 ) /*0x6f98e7*/
            {
              v93 = v92; /*0x6f98ed*/
              v94 = (void *)a4; /*0x6f98f1*/
            }
          }
          if ( !v94 ) /*0x6f98fb*/
          {
            v68 = TechnoClass::EvaluateBuildingTarget(this, v96); /*0x6f9904*/
            v92 = v68; /*0x6f990d*/
            if ( v98 < v68 ) /*0x6f9913*/
            {
              v98 = v68; /*0x6f9919*/
              *(_DWORD *)v99 = *(_DWORD *)v96; /*0x6f991d*/
            }
          }
        }
        v106[0] = v108[0] + v95; /*0x6f9931*/
        v106[1] = v58 + v108[1]; /*0x6f9936*/
        *(_DWORD *)v96 = *(_DWORD *)v106; /*0x6f9949*/
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v96) ) /*0x6f994d*/
        {
          if ( SelectTechnoClassAreaTarget( /*0x6f99d6*/
                 this,
                 (int)v96,
                 v5,
                 (TechnoClass *)a3,
                 v91,
                 v96,
                 v97,
                 &a4,
                 &v92,
                 (int)TileIndex)
            && a4
            && (!a5 || *(_DWORD *)(*(_DWORD *)(a4 + 540) + 48) == this->owner->enemyHouseIndex)
            && ((a3 & 0x4000) == 0
             || (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, *(#375 **)(a4 + 540))) )
          {
            if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1712) ) /*0x6f99ed*/
            {
              v69 = this->currentTargets[2]; /*0x6f99fb*/
              v70 = a4; /*0x6f9a07*/
              if ( this->currentTargets[4] < v69 /*0x6f9a30*/
                || (BYTE1(this->currentTargets[3]) || !v69)
                && (v71 = this->currentTargets[5], v71 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->currentTargets[0] + 8))(
                     this->currentTargets,
                     v69 + v71,
                     0) )
              {
                v72 = this->currentTargets[4]; /*0x6f9a37*/
                v73 = this->currentTargets[1]; /*0x6f9a3a*/
                this->currentTargets[4] = v72 + 1; /*0x6f9a40*/
                *(_DWORD *)(v73 + 4 * v72) = v70; /*0x6f9a43*/
              }
              v74 = this->currentTargetThreatValues[2]; /*0x6f9a46*/
              if ( this->currentTargetThreatValues[4] < v74 /*0x6f9a77*/
                || (BYTE1(this->currentTargetThreatValues[3]) || !v74)
                && (v75 = this->currentTargetThreatValues[5], v75 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->currentTargetThreatValues[0] + 8))(
                     this->currentTargetThreatValues,
                     v74 + v75,
                     0) )
              {
                v76 = this->currentTargetThreatValues[4]; /*0x6f9a7e*/
                v77 = this->currentTargetThreatValues[1]; /*0x6f9a81*/
                this->currentTargetThreatValues[4] = v76 + 1; /*0x6f9a87*/
                *(_DWORD *)(v77 + 4 * v76) = v92; /*0x6f9a8e*/
              }
            }
            if ( v93 < v92 ) /*0x6f9a9b*/
            {
              v93 = v92; /*0x6f9aa1*/
              v94 = (void *)a4; /*0x6f9aa5*/
            }
          }
          if ( !v94 ) /*0x6f9aaf*/
          {
            v78 = TechnoClass::EvaluateBuildingTarget(this, v96); /*0x6f9ab8*/
            v92 = v78; /*0x6f9ac1*/
            if ( v98 < v78 ) /*0x6f9ac7*/
            {
              v98 = v78; /*0x6f9acd*/
              *(_DWORD *)v99 = *(_DWORD *)v96; /*0x6f9ad1*/
            }
          }
        }
        ++v58; /*0x6f9ad9*/
      }
      while ( v58 < v95 ); /*0x6f9adc*/
    }
    if ( v94 ) /*0x6f9aec*/
    {
      v79 = v95; /*0x6f9af0*/
      if ( v95 == v100 / 4 || v95 == v100 / 2 ) /*0x6f9b0a*/
        return v94; /*0x6f9b52*/
    }
    else
    {
      v79 = v95; /*0x6f9b17*/
    }
    if ( v99[0] != *(_WORD *)&g_BuildingLoadQueue_Array.?[24] || v99[1] != *(_WORD *)&g_BuildingLoadQueue_Array.? ) /*0x6f9b35*/
      break; /*0x6f9b35*/
    v95 = v79 + 1; /*0x6f9b3a*/
    if ( v79 + 1 >= v100 ) /*0x6f9b3e*/
      return v94; /*0x6f9b3e*/
  }
  return CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v99); /*0x6f8e38*/
}


// ==== 0x006F9DB0  TechnoClass::GetID  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetID(TechnoClass *this)
{
  return this->owner->relatedTagsCount; /*0x6f9db9*/
}



// ==== 0x006F9DC0  TechnoClass::GetTarget  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::GetTarget(TechnoClass *this)
{
  return (int)this->owner; /*0x6f9dc6*/
}



// ==== 0x006F9DD0  TechnoClass::SetTargetIfAllowed  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::SetTargetIfAllowed(TechnoClass *this, int a2)
{
  int result; // eax

  if ( !(*((unsigned __int8 (__thiscall **)(TechnoClass *, Object *))this->RadioClass + 50))(this, dword_A83D4C) /*0x6f9df6*/
    || (result = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 52))(this, 1)) != 0 )
  {
    this->flashing[0] = a2; /*0x6f9dfc*/
    return a2; /*0x6f9df8*/
  }
  return result; /*0x6f9e02*/
}



// ==== 0x006F9E10  TechnoClass::IsInvisible  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::IsInvisible(TechnoClass *this)
{
  int result; // eax

  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6f9e15*/
  if ( *(_DWORD *)(result + 176) ) /*0x6f9e1b*/
  {
    result = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 176); /*0x6f9e33*/
    LOBYTE(result) = *(_BYTE *)result == 0; /*0x6f9e3d*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6f9e25*/
  }
  return result; /*0x6f9e27*/
}



// ==== 0x006F9E50  TechnoClass::Begin  this=TechnoClass  sig=csp ====
char __thiscall MovementAI::Begin(TechnoClass *this)
{
  int queuedVoiceIndex; // ecx
  int v3; // eax
  int health; // eax
  int estimatedHealth; // eax
  int (__thiscall **vtable0)(TechnoClass *); // edx
  int v7; // eax
  int currentRank; // edi
  int *veterancy; // ebx
  int v10; // edi
  TechnoClass *drainTarget; // eax
  AnimClass *drainAnim; // ecx
  TechnoClass *v13; // eax
  HouseClass *owner; // eax
  HouseClass *empLockRemaining; // eax
  _DWORD *v16; // eax
  MovementAI *v17; // edi
  TechnoClass *transporter; // ecx
  House *v19; // edi
  TechnoClass *mindControlledBy; // eax
  bool v21; // bl
  bool v22; // al
  bool v23; // al
  int currentMission; // ecx
  int (__thiscall **v25)(TechnoClass *, AbstractClass *, int); // edi
  int v26; // eax
  int v27; // eax
  HouseClass *v28; // eax
  int v29; // edi
  int v30; // edx
  int v31; // eax
  int v32; // edi
  int v33; // eax
  int v34; // edx
  char isUnderCursor; // al
  int v36; // eax
  int v37; // edx
  int v38; // eax... [34977 chars total]



// ==== 0x006FB010  TechnoClass::StepAnimFrame  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::StepAnimFrame(TechnoClass *this)
{
  int result; // eax
  int ammo; // edi
  int v4; // edx
  void (__thiscall **vtable0)(TechnoClass *, int); // edx

  result = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1668); /*0x6fb01c*/
  if ( result != -1 ) /*0x6fb025*/
  {
    ammo = this->ammo; /*0x6fb027*/
    if ( ammo < result ) /*0x6fb02f*/
    {
      v4 = this->reloadTimer[0]; /*0x6fb031*/
      result = this->reloadTimer[2]; /*0x6fb037*/
      if ( v4 != -1 ) /*0x6fb040*/
      {
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v4 >= result ) /*0x6fb04c*/
        {
LABEL_7:
          vtable0 = (void (__thiscall **)(TechnoClass *, int))this->RadioClass; /*0x6fb054*/
          this->ammo = ammo + 1; /*0x6fb05b*/
          vtable0[73](this, 2); /*0x6fb061*/
          return TechnoClass::CalcAnimDelay(this); /*0x6fb069*/
        }
        result -= *(_DWORD *)&stru_A8EB00.?[416] - v4; /*0x6fb04e*/
      }
      if ( result ) /*0x6fb052*/
        return result; /*0x6fb052*/
      goto LABEL_7; /*0x6fb052*/
    }
  }
  return result; /*0x6fb06e*/
}



// ==== 0x006FB080  TechnoClass::CalcAnimDelay  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CalcAnimDelay(TechnoClass *this)
{
  int result; // eax
  int ammo; // ecx
  int *v4; // esi
  int v5; // ebx
  int v6; // edi
  int *reloadTimer; // esi
  int v8; // [esp+8h] [ebp-8h]

  result = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1668); /*0x6fb08e*/
  ammo = this->ammo; /*0x6fb094*/
  if ( ammo < result ) /*0x6fb09c*/
  {
    if ( ammo || *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1692) == -1 ) /*0x6fb0b7*/
    {
      if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 996) ) /*0x6fb0f2*/
        v5 = this->ammo / *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 996); /*0x6fb11c*/
      else
        v5 = 1; /*0x6fb0fc*/
      v6 = v5 * v5 * *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1696); /*0x6fb135*/
      result = v6 + *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1688); /*0x6fb14a*/
      reloadTimer = this->reloadTimer; /*0x6fb14c*/
      *reloadTimer = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6fb154*/
      reloadTimer[1] = v8; /*0x6fb15a*/
      reloadTimer[2] = result; /*0x6fb15d*/
    }
    else
    {
      result = *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1692); /*0x6fb0c9*/
      v4 = this->reloadTimer; /*0x6fb0cf*/
      *v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6fb0d5*/
      v4[1] = v8; /*0x6fb0db*/
      v4[2] = result; /*0x6fb0de*/
    }
  }
  return result; /*0x6fb0e1*/
}



// ==== 0x006FB170  TechnoClass::RevealShroud  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::RevealShroud(TechnoClass *this)
{
  int result; // eax
  int v3; // edi
  int v4; // ebp
  int v5; // ebx
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  int v9; // edx
  signed int v10; // eax
  int gapRadius; // ecx
  int v12; // edi
  int v13; // ebx
  int i; // eax
  int v15; // eax
  int v16; // ebp
  int (__thiscall **vtable0)(TechnoClass *); // edx
  House *v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  House *v23; // eax
  _DWORD *v24; // eax
  __int16 v25[2]; // [esp+4h] [ebp-20h] BYREF
  int v26; // [esp+8h] [ebp-1Ch]
  int v27; // [esp+Ch] [ebp-18h]
  int v28; // [esp+10h] [ebp-14h]
  int v29; // [esp+14h] [ebp-10h]
  int v30; // [esp+18h] [ebp-Ch]
  __int16 v31; // [esp+1Ch] [ebp-8h]
  __int16 v32; // [esp+1Eh] [ebp-6h]

  result = (int)dword_A83D4C; /*0x6fb170*/
  if ( dword_A83D4C ) /*0x6fb17d*/
  {
    LOBYTE(result) = this->isGeneratingGap; /*0x6fb183*/
    if ( !(_BYTE)result ) /*0x6fb18b*/
    {
      result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 212))(this); /*0x6fb193*/
      if ( (_BYTE)result ) /*0x6fb19b*/
      {
        if ( !this->gapRadius ) /*0x6fb1a1*/
          this->gapRadius = *(char *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3282); /*0x6fb1bc*/
        v3 = this->?[0]; /*0x6fb1cb*/
        this->isGeneratingGap = 1; /*0x6fb1cd*/
        v4 = this->?[1]; /*0x6fb1d4*/
        v5 = this->?[2]; /*0x6fb1d7*/
        v6 = ZCoordToScreenY(v5); /*0x6fb1dc*/
        v7 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v6) >> 32) - v6) >> 31) /*0x6fb1fb*/
             + ((int)(((unsigned __int64)(2004318071LL * v6) >> 32) - v6) >> 4)) << 8)
           + v3;
        v8 = ZCoordToScreenY(v5); /*0x6fb1fd*/
        v9 = ((unsigned __int64)(2004318071LL * v8) >> 32) - v8; /*0x6fb20b*/
        v10 = v7; /*0x6fb20d*/
        gapRadius = this->gapRadius; /*0x6fb21e*/
        v12 = -2 - gapRadius; /*0x6fb229*/
        v13 = -2 - gapRadius; /*0x6fb232*/
        v29 = gapRadius; /*0x6fb236*/
        v31 = v10 / 256; /*0x6fb23d*/
        v30 = -2 - gapRadius; /*0x6fb24b*/
        v32 = (int)(((((unsigned int)v9 >> 31) + (v9 >> 4)) << 8) + v4) / 256; /*0x6fb254*/
        for ( i = gapRadius + 2; v13 < i; ++v13 ) /*0x6fb25e*/
        {
          if ( v12 < i ) /*0x6fb266*/
          {
            v15 = v13 * v13; /*0x6fb271*/
            v16 = (gapRadius + 1) * (gapRadius + 1); /*0x6fb274*/
            v28 = v13 * v13; /*0x6fb277*/
            v27 = v16; /*0x6fb27b*/
            while ( 1 ) /*0x6fb285*/
            {
              if ( v15 + v12 * v12 < v16 ) /*0x6fb28e*/
              {
                vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x6fb2a2*/
                LOWORD(v26) = v13 + v31; /*0x6fb2a4*/
                HIWORD(v26) = v12 + v32; /*0x6fb2a9*/
                *(_DWORD *)v25 = v26; /*0x6fb2b2*/
                v18 = (House *)vtable0[15](this); /*0x6fb2b8*/
                if ( !(unsigned __int8)House::IsHumanPlayer(v18) /*0x6fb2e9*/
                  && !(unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, (#375 *)dword_A83D4C)
                  && !dword_A83D4C->__pad_140[181] )
                {
                  if ( *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25) + 76) != 1 /*0x6fb32c*/
                    && *((int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25) + 76) >= 0 )
                  {
                    v19 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb338*/
                    ++v19[76]; /*0x6fb349*/
                  }
                  v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb355*/
                  ++v20[77]; /*0x6fb366*/
                  if ( *((int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25) + 76) >= 1 ) /*0x6fb37d*/
                  {
                    v21 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb389*/
                    v21[75] &= ~0x10u; /*0x6fb3a0*/
                    v22 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb3a8*/
                    v22[75] &= ~8u; /*0x6fb3bb*/
                  }
                  v16 = v27; /*0x6fb3bd*/
                }
                v23 = (House *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 15))(this); /*0x6fb3c5*/
                if ( (unsigned __int8)House::IsHumanPlayer(v23) /*0x6fb3ef*/
                  || (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, (#375 *)dword_A83D4C)
                  || dword_A83D4C->__pad_140[181] )
                {
                  v24 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb403*/
                  ++v24[79]; /*0x6fb414*/
                }
              }
              gapRadius = v29; /*0x6fb416*/
              ++v12; /*0x6fb41a*/
              i = v29 + 2; /*0x6fb41b*/
              if ( v12 >= v29 + 2 ) /*0x6fb420*/
                break; /*0x6fb420*/
              v15 = v28; /*0x6fb281*/
            }
            v12 = v30; /*0x6fb426*/
          }
        }
        if ( dword_A83D4C ) /*0x6fb43d*/
          dword_A83D4C->__pad_140[256] = 0; /*0x6fb43f*/
        FogOfWar::Render((FogOfWar *)&stru_87F5F0.__pad_58[416]); /*0x6fb44b*/
        return MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x6fb457*/
      }
    }
  }
  return result; /*0x6fb45c*/
}



// ==== 0x006FB470  TechnoClass::RemoveShroud  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::RemoveShroud(TechnoClass *this)
{
  int result; // eax
  int v3; // edi
  int v4; // ebp
  int v5; // ebx
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  int v9; // edx
  signed int v10; // eax
  int gapRadius; // ecx
  int v12; // edi
  int v13; // ebx
  int i; // eax
  int v15; // eax
  int v16; // ebp
  int (__thiscall **vtable0)(TechnoClass *); // edx
  House *v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  House *v23; // eax
  _DWORD *v24; // eax
  __int16 v25[2]; // [esp+4h] [ebp-1Ch] BYREF
  int v26; // [esp+8h] [ebp-18h]
  int j; // [esp+Ch] [ebp-14h]
  int v28; // [esp+10h] [ebp-10h]
  int v29; // [esp+14h] [ebp-Ch]
  __int16 v30; // [esp+18h] [ebp-8h]
  __int16 v31; // [esp+1Ah] [ebp-6h]

  result = (int)dword_A83D4C; /*0x6fb470*/
  if ( dword_A83D4C ) /*0x6fb47d*/
  {
    LOBYTE(result) = this->isGeneratingGap; /*0x6fb483*/
    if ( (_BYTE)result ) /*0x6fb48b*/
    {
      if ( !this->gapRadius ) /*0x6fb491*/
        this->gapRadius = *(char *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3282); /*0x6fb4aa*/
      v3 = this->?[0]; /*0x6fb4b9*/
      this->isGeneratingGap = 0; /*0x6fb4bb*/
      v4 = this->?[1]; /*0x6fb4c2*/
      v5 = this->?[2]; /*0x6fb4c5*/
      v6 = ZCoordToScreenY(v5); /*0x6fb4ca*/
      v7 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v6) >> 32) - v6) >> 31) /*0x6fb4e9*/
           + ((int)(((unsigned __int64)(2004318071LL * v6) >> 32) - v6) >> 4)) << 8)
         + v3;
      v8 = ZCoordToScreenY(v5); /*0x6fb4eb*/
      v9 = ((unsigned __int64)(2004318071LL * v8) >> 32) - v8; /*0x6fb4f9*/
      v10 = v7; /*0x6fb4fb*/
      gapRadius = this->gapRadius; /*0x6fb50c*/
      v12 = -2 - gapRadius; /*0x6fb517*/
      v13 = -2 - gapRadius; /*0x6fb520*/
      v28 = gapRadius; /*0x6fb524*/
      v30 = v10 / 256; /*0x6fb52b*/
      v29 = -2 - gapRadius; /*0x6fb539*/
      v31 = (int)(((((unsigned int)v9 >> 31) + (v9 >> 4)) << 8) + v4) / 256; /*0x6fb542*/
      for ( i = gapRadius + 2; v13 < i; ++v13 ) /*0x6fb54c*/
      {
        if ( v12 < i ) /*0x6fb554*/
        {
          v15 = v13 * v13; /*0x6fb55f*/
          v16 = (gapRadius + 1) * (gapRadius + 1); /*0x6fb562*/
          for ( j = v13 * v13; ; v15 = j ) /*0x6fb565*/
          {
            if ( v15 + v12 * v12 < v16 ) /*0x6fb578*/
            {
              vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x6fb58c*/
              LOWORD(v26) = v13 + v30; /*0x6fb58e*/
              HIWORD(v26) = v12 + v31; /*0x6fb593*/
              *(_DWORD *)v25 = v26; /*0x6fb59c*/
              v18 = (House *)vtable0[15](this); /*0x6fb5a2*/
              if ( !(unsigned __int8)House::IsHumanPlayer(v18) /*0x6fb5d3*/
                && !(unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, (#375 *)dword_A83D4C)
                && !dword_A83D4C->__pad_140[181] )
              {
                v19 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb5eb*/
                --v19[77]; /*0x6fb5fc*/
                if ( dword_A83D4C[33].__pad_B0[42] ) /*0x6fb603*/
                {
                  if ( *((int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25) + 77) <= 0 ) /*0x6fb628*/
                  {
                    v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb634*/
                    --v20[76]; /*0x6fb645*/
                    if ( *((int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25) + 76) <= 0 ) /*0x6fb65e*/
                    {
                      v21 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb66a*/
                      v21[75] |= 8u; /*0x6fb681*/
                      v22 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb689*/
                      v22[75] |= 0x10u; /*0x6fb69c*/
                    }
                  }
                }
              }
              v23 = (House *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 15))(this); /*0x6fb6a2*/
              if ( (unsigned __int8)House::IsHumanPlayer(v23) /*0x6fb6cc*/
                || (unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->owner, (#375 *)dword_A83D4C)
                || dword_A83D4C->__pad_140[181] )
              {
                v24 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb6e0*/
                --v24[79]; /*0x6fb6f1*/
              }
            }
            gapRadius = v28; /*0x6fb6f3*/
            ++v12; /*0x6fb6f7*/
            i = v28 + 2; /*0x6fb6f8*/
            if ( v12 >= v28 + 2 ) /*0x6fb6fd*/
              break; /*0x6fb6fd*/
          }
          v12 = v29; /*0x6fb703*/
        }
      }
      if ( dword_A83D4C ) /*0x6fb71a*/
        dword_A83D4C->__pad_140[256] = 0; /*0x6fb71c*/
      FogOfWar::Render((FogOfWar *)&stru_87F5F0.__pad_58[416]); /*0x6fb728*/
      return MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x6fb734*/
    }
  }
  return result; /*0x6fb739*/
}



// ==== 0x006FB740  TechnoClass::UpdateLocomotion  this=TechnoClass  sig=csp ====
void __thiscall FootClass::UpdateLocomotion(TechnoClass *this, double a2, int a3)
{
  double v3; // st7
  int v5; // edi
  _DWORD *Member; // edi
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int *v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // edx
  int v16; // eax
  wchar_t *v17; // eax
  wchar_t *v19; // edi
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  wchar_t *v25; // eax
  int vtable0; // edx
  int v27; // ebp
  int v28; // edi
  _DWORD *v29; // eax
  CellClass *v30; // eax
  int v31; // eax
  int j; // edi
  int v34; // [esp+4h] [ebp-38h]
  int v35; // [esp+18h] [ebp-24h] BYREF
  int v36; // [esp+1Ch] [ebp-20h]
  void **v37; // [esp+24h] [ebp-18h] BYREF
  void *Block; // [esp+28h] [ebp-14h]
  int v39; // [esp+2Ch] [ebp-10h]
  char v40; // [esp+30h] [ebp-Ch]
  char v41; // [esp+31h] [ebp-Bh]
  int i; // [esp+34h] [ebp-8h]
  int v43; // [esp+38h] [ebp-4h]

  if ( this->cloakState ) /*0x6fb74b*/
  {
    v11 = &this->cloakProgress[2]; /*0x6fb8ea*/
    if ( Locomotor::GetSpeed((Locomotor *)&this->cloakProgress[2]) || (v12 = this->cloakProgress[5]) == 0 ) /*0x6fb903*/
    {
      LOBYTE(this->cloakProgress[1]) = 0; /*0x6fb934*/
    }
    else
    {
      v13 = this->cloakProgress[6]; /*0x6fb905*/
      v14 = this->cloakProgress[0]; /*0x6fb90b*/
      LOBYTE(this->cloakProgress[1]) = 1; /*0x6fb913*/
      this->cloakProgress[0] = v13 + v14; /*0x6fb91a*/
      v15 = v36; /*0x6fb926*/
      *v11 = (int)dword_A8ED84; /*0x6fb92a*/
      this->cloakProgress[3] = v15; /*0x6fb92c*/
      this->cloakProgress[4] = v12; /*0x6fb92f*/
    }
    if ( this->cloakProgress[0] < 0 ) /*0x6fb940*/
      this->cloakProgress[0] = 0; /*0x6fb942*/
    switch ( this->cloakState ) /*0x6fb94f*/
    {
      case 1: /*0x6fb94f*/
        (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 292))(this, 2); /*0x6fba49*/
        if ( !this->cloakProgress[5] ) /*0x6fba4f*/
        {
          this->cloakProgress[2] = (int)dword_A8ED84; /*0x6fba67*/
          v22 = v36; /*0x6fba69*/
          this->cloakProgress[5] = 1; /*0x6fba6d*/
          this->cloakProgress[3] = v22; /*0x6fba73*/
          this->cloakProgress[4] = 1; /*0x6fba76*/
        }
        v23 = (*(int (__thiscall **)(TechnoClass *, int, _DWORD))(this->vtable0 + 104))(this, 1, 0) - 2; /*0x6fba83*/
        if ( v23 ) /*0x6fba86*/
        {
          v24 = v23 - 1; /*0x6fba8c*/
          if ( !v24 || v24 == 2 ) /*0x6fba92*/
          {
            this->cloakState = 2; /*0x6fba98*/
            v25 = dword_A8ED84; /*0x6fbaa2*/
            this->cloakProgress[5] = 0; /*0x6fbaaf*/
            this->cloakProgress[2] = (int)v25; /*0x6fbab7*/
            this->cloakProgress[3] = v36; /*0x6fbabd*/
            this->cloakProgress[4] = 0; /*0x6fbac0*/
            vtable0 = this->vtable0; /*0x6fbac3*/
            this->cloakProgress[0] = 0; /*0x6fbac7*/
            (*(void (__thiscall **)(TechnoClass *, int))(vtable0 + 292))(this, 2); /*0x6fbacd*/
            if ( (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) != 1 || *((_DWORD *)this + 435) == -1 ) /*0x6fbae6*/
            {
              Block = 0; /*0x6fbafc*/
              v39 = 0; /*0x6fbb00*/
              v40 = 1; /*0x6fbb04*/
              v27 = dword_A8EC88 - 1; /*0x6fbb09*/
              v41 = 0; /*0x6fbb0c*/
              v37 = &DynamicVectorClass<TechnoClass *>::`vftable'; /*0x6fbb12*/
              v43 = 10; /*0x6fbb1a*/
              for ( i = 0; v27 >= 0; --v27 ) /*0x6fbb26*/
              {
                v28 = *((_DWORD *)dword_A8EC7C + v27); /*0x6fbb32*/
                if ( *(TechnoClass **)(v28 + 692) == this ) /*0x6fbb3b*/
                {
                  v34 = *(_DWORD *)(*(_DWORD *)(v28 + 540) + 48); /*0x6fbb4a*/
                  v29 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, int *))(this->vtable0 + 72))(this, &v35); /*0x6fbb50*/
                  v30 = Coord::To_Cell((Coord *)&dword_87F7E8, v29); /*0x6fbb59*/
                  if ( ((unsigned __int8)Cell::IsPassableOffset((Cell *)v30, v34) /*0x6fbba3*/
                     || *(_DWORD *)(v28 + 540) == this->owner)
                    && (i < v39
                     || (v41 || !v39)
                     && v43 > 0
                     && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v37[2])(&v37, v43 + v39, 0)) )
                  {
                    v31 = i++; /*0x6fbbae*/
                    *((_DWORD *)Block + v31) = v28; /*0x6fbbb9*/
                  }
                }
              }
              (*(void (__thiscall **)(TechnoClass *, _DWORD))(this->vtable0 + 220))(this, 0); /*0x6fbbc8*/
              for ( j = i - 1; j >= 0; --j ) /*0x6fbbd7*/
                (*(void (__thiscall **)(_DWORD, TechnoClass *))(**((_DWORD **)Block + j) + 968))( /*0x6fbbe3*/
                  *((_DWORD *)Block + j),
                  this);
              v37 = &VectorClass<TechnoClass *>::`vftable'; /*0x6fbbf0*/
              if ( Block && v41 ) /*0x6fbc00*/
                __3_YAXPAX_Z(Block); /*0x6fbc03*/
            }
            else
            {
              (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 252))(this); /*0x6fbaec*/
            }
            if ( (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 44))(this) == 1 /*0x6fbc1d*/
              && !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner) )
            {
              (*(void (__thiscall **)(TechnoClass *, _DWORD *, int, _DWORD))(this->vtable0 + 372))( /*0x6fbc32*/
                this,
                &dword_B0EA90,
                1,
                0);
            }
          }
        }
        else
        {
          BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x6fbc44*/
          _EAX = dword_8871E0; /*0x6fbc49*/
          __asm /*0x6fbc4e*/
          {
            fcomp qword ptr [eax+1708h]
            fnstsw ax
          }
          if ( (BYTE1(_EAX) & 0x41) != 0 && Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < 10 ) /*0x6fbc72*/
            (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 1116))(this, 1); /*0x6fbc7a*/
        }
        break;
      case 2: /*0x6fb94f*/
        if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 676))(this) ) /*0x6fba20*/
          (*(void (__thiscall **)(TechnoClass *, _DWORD))(this->vtable0 + 1116))(this, 0); /*0x6fba33*/
        break;
      case 3: /*0x6fb94f*/
        (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 292))(this, 2); /*0x6fb969*/
        v16 = (*(int (__thiscall **)(TechnoClass *, int, _DWORD))(this->vtable0 + 104))(this, 1, 0); /*0x6fb976*/
        if ( v16 ) /*0x6fb97b*/
        {
          if ( v16 == 1 && (*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 672))(this) ) /*0x6fb988*/
            (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 1120))(this, 1); /*0x6fb99c*/
        }
        else
        {
          v17 = dword_A8ED84; /*0x6fb9ac*/
          this->cloakProgress[5] = 0; /*0x6fb9b9*/
          this->cloakProgress[2] = (int)v17; /*0x6fb9bf*/
          this->cloakProgress[3] = v36; /*0x6fb9c5*/
          this->cloakProgress[4] = 0; /*0x6fb9c8*/
          this->cloakProgress[0] = 0; /*0x6fb9cb*/
          this->cloakState = 0; /*0x6fb9d1*/
          _ECX = dword_8871E0; /*0x6fb9d7*/
          v19 = dword_A8ED84; /*0x6fb9dd*/
          __asm /*0x6fb9e3*/
          {
            fld qword ptr [ecx+1410h]
            fmul ds:dbl_7E27F8
          }
          LOWORD(v20) = Math::RoundToInt(v3); /*0x6fb9ef*/
          v21 = v36; /*0x6fb9f4*/
          this->cloakDelayTimer[0] = (int)v19; /*0x6fba00*/
          this->cloakDelayTimer[1] = v21; /*0x6fba02*/
          this->cloakDelayTimer[2] = v20; /*0x6fba07*/
          (*(void (__thiscall **)(TechnoClass *, int))(this->vtable0 + 292))(this, 2); /*0x6fba0c*/
        }
        break;
    }
  }
  else if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 648))(this) /*0x6fb7f1*/
         && !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 892))(this)
         && !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 896))(this)
         && !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 468))(this)
         && !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 472))(this)
         || ((unsigned __int8)Audio::IsMediumVolume(&this->veterancy) || (unsigned __int8)Audio::IsLoud(&this->veterancy))
         && ((v5 = (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 132))(this),
              (unsigned __int8)Audio::IsMediumVolume(&this->veterancy))
          && *(_BYTE *)(v5 + 674)
          || (unsigned __int8)Audio::IsLoud(&this->veterancy) && (*(_BYTE *)(v5 + 674) || *(_BYTE *)(v5 + 692))) )
  {
    Member = (_DWORD *)Team::GetMember((Team *)this, 0); /*0x6fb805*/
    if ( !Member || (*(int (__thiscall **)(_DWORD *))(*Member + 44))(Member) != 6 || !*(_BYTE *)(Member[328] + 5821) ) /*0x6fb81d*/
    {
      if ( Locomotor::GetSpeed((Locomotor *)&this->cloakProgress[2]) || (v7 = this->cloakProgress[5]) == 0 ) /*0x6fb842*/
      {
        LOBYTE(this->cloakProgress[1]) = 0; /*0x6fb873*/
      }
      else
      {
        v8 = this->cloakProgress[6]; /*0x6fb844*/
        v9 = this->cloakProgress[0]; /*0x6fb84a*/
        LOBYTE(this->cloakProgress[1]) = 1; /*0x6fb852*/
        this->cloakProgress[0] = v8 + v9; /*0x6fb859*/
        this->cloakProgress[2] = (int)dword_A8ED84; /*0x6fb865*/
        this->cloakProgress[3] = v36; /*0x6fb86b*/
        this->cloakProgress[4] = v7; /*0x6fb86e*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 672))(this) ) /*0x6fb87d*/
      {
        BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x6fb88d*/
        _EAX = dword_8871E0; /*0x6fb892*/
        __asm /*0x6fb897*/
        {
          fcomp qword ptr [eax+1708h]
          fnstsw ax
        }
        if ( (BYTE1(_EAX) & 0x41) == 0 || Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < 4 ) /*0x6fb8cf*/
          (*(void (__thiscall **)(TechnoClass *, _DWORD))(this->vtable0 + 1120))(this, 0); /*0x6fb8a9*/
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

  if ( ((*(unsigned __int8 (__thiscall **)(float *))(this->chronoDestCoords)(this) || this->q3D2) /*0x6fbcdc*/
    && !(*(unsigned __int8 (__thiscall **)(float *))(this->currentBurstIndex)(this)
    && !(*(unsigned __int8 (__thiscall **)(float *))(this->target_laser_timer)(this)
    && !(*(unsigned __int8 (__thiscall **)(float *))(this->drainAnim)(this)
    && !(*(unsigned __int8 (__thiscall **)(float *))(this->isDisguisedFlag)(this) )
  {
    return 0; /*0x6fbcdc*/
  }
  if ( Audio::IsMediumVolume(this + 84) || Audio::IsLoud(this + 84) ) /*0x6fbcfd*/
  {
    v2 = (*(int (__thiscall **)(float *))(this->hasParachute)(this); /*0x6fbd12*/
    if ( Audio::IsMediumVolume(this + 84) ) /*0x6fbd14*/
    {
      if ( *(_BYTE *)(v2 + 674) ) /*0x6fbd1d*/
        return 0; /*0x6fbd1d*/
    }
    if ( Audio::IsLoud(this + 84) && (*(_BYTE *)(v2 + 674) || *(_BYTE *)(v2 + 692)) ) /*0x6fbd40*/
      return 0; /*0x6fbd40*/
  }
  v3 = (_DWORD *)(*(int (__thiscall **)(float *, _BYTE *))(this->u32_48)(this, v10); /*0x6fbd53*/
  LOWORD(v8) = *v3 / 256; /*0x6fbd66*/
  HIWORD(v8) = v3[1] / 256; /*0x6fbd7a*/
  v4 = this->owner; /*0x6fbd83*/
  v9 = v8; /*0x6fbd89*/
  v7 = *(_DWORD *)(v4 + 48); /*0x6fbd94*/
  v5 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v9); /*0x6fbd9b*/
  return !Cell::HasOccupierBit(v5, v7); /*0x6fbdb6*/
}



// ==== 0x006FBDC0  TechnoClass::ShouldBeCloaked  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass::ShouldBeCloaked(TechnoClass *this)
{
  int v2; // edi
  _DWORD *v3; // eax
  HouseClass *owner; // eax
  Cell *v5; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int relatedTagsCount; // [esp-4h] [ebp-24h]
  int v12; // [esp+Ch] [ebp-14h]
  __int16 v13[2]; // [esp+10h] [ebp-10h] BYREF
  _BYTE v14[12]; // [esp+14h] [ebp-Ch] BYREF

  if ( !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 162))(this) ) /*0x6fbdca*/
  {
    if ( !(unsigned __int8)Audio::IsMediumVolume(this->veterancy) && !(unsigned __int8)Audio::IsLoud(this->veterancy) /*0x6fbe2e*/
      || ((v2 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this),
           !(unsigned __int8)Audio::IsMediumVolume(this->veterancy))
       || !*(_BYTE *)(v2 + 674))
      && (!(unsigned __int8)Audio::IsLoud(this->veterancy) || !*(_BYTE *)(v2 + 674) && !*(_BYTE *)(v2 + 692)) )
    {
      v3 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 18))(this, v14); /*0x6fbe41*/
      LOWORD(v12) = *v3 / 256; /*0x6fbe54*/
      HIWORD(v12) = v3[1] / 256; /*0x6fbe68*/
      owner = this->owner; /*0x6fbe71*/
      *(_DWORD *)v13 = v12; /*0x6fbe77*/
      relatedTagsCount = owner->relatedTagsCount; /*0x6fbe82*/
      v5 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13); /*0x6fbe89*/
      if ( !(unsigned __int8)Cell::HasOccupierBit(v5, relatedTagsCount) && !this->isCloakableFlag ) /*0x6fbe99*/
        return 0; /*0x6fbeab*/
    }
  }
  if ( this->cloakState == 2 ) /*0x6fbeb3*/
    return 0; /*0x6fbebd*/
  v7 = this->diskLaserTimer[0]; /*0x6fbebe*/
  v8 = this->diskLaserTimer[2]; /*0x6fbec4*/
  if ( v7 != -1 ) /*0x6fbecd*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v7 >= v8 ) /*0x6fbed9*/
      goto LABEL_19; /*0x6fbed9*/
    v8 -= *(_DWORD *)&stru_A8EB00.?[416] - v7; /*0x6fbedb*/
  }
  if ( v8 ) /*0x6fbedf*/
    return 0; /*0x6fbee9*/
LABEL_19:
  if ( this->target /*0x6fbef9*/
    && (*((unsigned __int8 (__thiscall **)(TechnoClass *, AbstractClass *))this->RadioClass + 235))(this, this->target) )
  {
    return 0; /*0x6fbf0b*/
  }
  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 6 && this->cloakProgress[0] ) /*0x6fbf18*/
    return 0; /*0x6fbf2a*/
  v9 = this->cloakDelayTimer[0]; /*0x6fbf2b*/
  v10 = this->cloakDelayTimer[2]; /*0x6fbf31*/
  if ( v9 != -1 ) /*0x6fbf3a*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v9 >= v10 ) /*0x6fbf46*/
      return (!this->locomotorSource || !this || (this->? & 4) == 0 || !*((_BYTE *)this + 1709)) /*0x6fbf46*/
          && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 114))(this) <= 0;
    v10 -= *(_DWORD *)&stru_A8EB00.?[416] - v9; /*0x6fbf48*/
  }
  if ( v10 ) /*0x6fbf4c*/
    return 0; /*0x6fbf56*/
  return (!this->locomotorSource || !this || (this->? & 4) == 0 || !*((_BYTE *)this + 1709)) /*0x6fbea3*/
      && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 114))(this) <= 0;
}



// ==== 0x006FBFA0  TechnoClass::ExecuteMoveCommand  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ExecuteMoveCommand(TechnoClass *this)
{
  int result; // eax
  TeamClass *attachedTag; // ecx

  if ( (this->isDiscoveredByCurrentPlayer /*0x6fbfce*/
     || (unsigned __int8)House::IsHumanPlayer((House *)this->owner)
     || (result = (int)g_hWnd) == 0)
    && (result = ObjectClass::HandleSelection((ObjectClass *)this), (_BYTE)result) )
  {
    attachedTag = (TeamClass *)this->?; /*0x6fbfd0*/
    if ( attachedTag ) /*0x6fbfd5*/
      TeamClass::Update_0(attachedTag, 33, (int)this, *(int *)&g_BuildingLoadQueue_Array.?[24], 0, 0); /*0x6fbfe4*/
    if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) /*0x6fc001*/
      || *(_BYTE *)(this->owner->relatedTagsCapacity + 422) )
    {
      if ( g_MoveFeedback ) /*0x6fc012*/
        (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 216))(this); /*0x6fc018*/
    }
    TechnoClass::IsProductionChainActive(this); /*0x6fc020*/
    LOBYTE(result) = 1; /*0x6fc025*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6fc029*/
  }
  return result; /*0x6fc027*/
}



// ==== 0x006FC030  TechnoClass::CanMoveToCell  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::CanMoveToCell(TechnoClass *this)
{
  Cell *v3; // eax

  if ( this->slaveOwner ) /*0x6fc033*/
    return 0; /*0x6fc03d*/
  if ( this->__pad_1C4[4] ) /*0x6fc041*/
    return 0; /*0x6fc04b*/
  if ( this->bunkerLinkedUnit ) /*0x6fc04f*/
    return 0; /*0x6fc059*/
  if ( this->isTether ) /*0x6fc05d*/
  {
    v3 = (Cell *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 111))(this); /*0x6fc06b*/
    if ( Cell::IsBridge(v3) ) /*0x6fc073*/
      return 0; /*0x6fc07c*/
  }
  return AbstractClass::COMStub_79((ObjectClass *)this); /*0x6fc03f*/
}



// ==== 0x006FC090  TechnoClass::Vt240Thunk  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::Vt240Thunk(TechnoClass *this)
{
  int v2; // [esp+4h] [ebp+4h]
  int v3; // [esp+8h] [ebp+8h]

  return (*((int (__thiscall **)(TechnoClass *, int, int, _DWORD))this->RadioClass + 240))(this, v2, v3, 0); /*0x6fc0a4*/
}



// ==== 0x006FC0B0  TechnoClass::ReadINI  this=TechnoClass  sig=csp ====
int __fastcall TriggerTypeClass::ReadINI(TechnoClass *this, int a2, _BYTE *a3, int a4, char a5)
{
  TemporalClass *temporalUsing; // eax
  #375 **v8; // ebp
  _DWORD *v9; // eax
  CellClass *v10; // edi
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  TechnoClass *transporter; // ecx
  TechnoClass *v21; // eax
  _BYTE *v22; // eax
  bool v23; // bl
  FootClass *locomotorTarget; // eax
  FootClass *v25; // edi
  FootClass *v26; // eax
  int v27; // edx
  int v28; // edx
  int v29; // eax
  int v30; // edx
  int v31; // eax
  char v32; // al
  int v33; // edi
  int *v34; // ebp
  int v35; // edx
  int v36; // eax
  int v37; // [esp+8h] [ebp-24h]
  int v38; // [esp+1Ch] [ebp-10h]
  int v39; // [esp+20h] [ebp-Ch] BYREF
  int v40; // [esp+24h] [ebp-8h]

  if ( !a3 || this->slaveOwner ) /*0x6fc0c5*/
    return 5; /*0x6fc0c5*/
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 118))(this) ) /*0x6fc0d5*/
    return 3; /*0x6fc0eb*/
  if ( this->locomotorTarget == (FootClass *)a3 ) /*0x6fc0f4*/
    return 3; /*0x6fc102*/
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 117))(this) /*0x6fc145*/
    || this->__pad_1C4[4]
    || this->isSinking
    || a3 == (_BYTE *)this->drainTarget
    || a3 == (_BYTE *)this->transporter )
  {
    return 5; /*0x6fc145*/
  }
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 119))(this) ) /*0x6fc14f*/
  {
    temporalUsing = this->temporalUsing; /*0x6fc159*/
    if ( temporalUsing ) /*0x6fc161*/
    {
      if ( a3 == *(_BYTE **)temporalUsing->__pad_28 ) /*0x6fc166*/
        return 3; /*0x6fc174*/
    }
  }
  v8 = (a3[20] & 1) != 0 ? (#375 **)a3 : 0;
  v9 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)a3 + 72))(a3, &v39); /*0x6fc18e*/
  v10 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v9); /*0x6fc19e*/
  if ( this ) /*0x6fc1a0*/
  {
    if ( (this->? & 4) != 0 && *((_BYTE *)this + 1709) ) /*0x6fc1a8*/
      return 5; /*0x6fc1b0*/
  }
  if ( v8 ) /*0x6fc1b8*/
  {
    if ( *((_BYTE *)v8 + 129) /*0x6fc23f*/
      || this->isBerserk && *(_BYTE *)((*((int (__thiscall **)(#375 **))*v8 + 33))(v8) + 1680)
      || *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1683)
      && *(_BYTE *)((*((int (__thiscall **)(#375 **))*v8 + 33))(v8) + 1684)
      || *((_BYTE *)v8 + 636)
      || !this->owner->currentPlayer && (*((unsigned __int8 (__thiscall **)(#375 **))*v8 + 88))(v8) )
    {
      return 5; /*0x6fc247*/
    }
    if ( (*((int (__thiscall **)(#375 **, int, HouseClass *))*v8 + 26))(v8, 1, this->owner) == 5 /*0x6fc296*/
      && !(unsigned __int8)Cell::IsPassableOffset((Cell *)v10, this->owner->relatedTagsCount)
      && (TechnoClass::GetValue(this, -1) > 0 || !(unsigned __int8)HouseClass::IsAlliedWith(
                                                                     v8[135],
                                                                     (#375 *)this->owner)) )
    {
      return 6; /*0x6fc29d*/
    }
    if ( *((_BYTE *)v8 + 1048) /*0x6fc2cc*/
      && *(_BYTE *)((*((int (__thiscall **)(#375 **))*v8 + 33))(v8) + 3434)
      && !(*((unsigned __int8 (__thiscall **)(#375 **))*v8 + 21))(v8) )
    {
      return 5; /*0x6fc2cc*/
    }
  }
  if ( this->? ) /*0x6fc2d2*/
    return 5; /*0x6fc2d2*/
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 223))(this) ) /*0x6fc2e4*/
  {
    if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 1 ) /*0x6fc2f8*/
      return 6; /*0x6fc2f8*/
    v11 = *((_DWORD *)this + 433); /*0x6fc2fe*/
    if ( !*(_BYTE *)(v11 + 3609) && !*(_BYTE *)(v11 + 3608) ) /*0x6fc30e*/
      return 6; /*0x6fc30e*/
  }
  v12 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, a4); /*0x6fc32b*/
  v38 = v12; /*0x6fc32f*/
  if ( !v12 || *(_BYTE *)(v12 + 335) && HouseClass::IonSensitivesShouldBeOffline() ) /*0x6fc349*/
    return 6; /*0x6fc350*/
  if ( *(_BYTE *)(v12 + 322) ) /*0x6fc356*/
  {
    if ( v8 && v8[116] ) /*0x6fc364*/
      return 5; /*0x6fc36c*/
    if ( !v8 ) /*0x6fc378*/
      goto LABEL_52; /*0x6fc378*/
    if ( !*(_BYTE *)((*((int (__thiscall **)(#375 **))*v8 + 33))(v8) + 1519) ) /*0x6fc385*/
      return 5; /*0x6fc876*/
  }
  if ( v8 && v8[185] && (*((int (__thiscall **)(#375 **))*v8 + 11))(v8) == 1 && (double)*(int *)(v12 + 180) < 384.0 ) /*0x6fc3bf*/
    return 5; /*0x6fc3bf*/
LABEL_52:
  if ( this )
  {
    if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 1 )
    {
      v13 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this); /*0x6fc3d9*/
      if ( (unsigned __int8)TechnoClass::HasDeployFlags(v13 == 1 ? this : 0) )
        return 5; /*0x6fc3e7*/
    }
  }
  v14 = *(_DWORD *)(v12 + 172); /*0x6fc3f4*/
  if ( v14 ) /*0x6fc3fc*/
  {
    if ( *(_BYTE *)(v14 + 365) && v8 && *(_BYTE *)((*((int (__thiscall **)(#375 **))*v8 + 33))(v8) + 3381) ) /*0x6fc417*/
      return 5; /*0x6fc417*/
  }
  v15 = *(_DWORD *)(v12 + 172); /*0x6fc425*/
  if ( v15 )
  {
    if ( *(_BYTE *)(v15 + 365) && v8 && v8[185] ) /*0x6fc43d*/
      return 5; /*0x6fc43d*/
    if ( *(_BYTE *)(v15 + 347) )
    {
      if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 44))(a3) == 1 )
      {
        v16 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 44))(a3); /*0x6fc469*/
        if ( (unsigned __int8)TechnoClass::HasDeployFlags(v16 == 1 ? (TechnoClass *)a3 : 0) )
          return 5; /*0x6fc477*/
      }
    }
  }
  v17 = *(_DWORD *)(v12 + 172); /*0x6fc484*/
  if ( v17
    && *(_BYTE *)(v17 + 347)
    && (a3[20] & 4) != 0
    && *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 132))(a3) + 3476) )
  {
    if ( !*((a3[20] & 4) != 0 ? (_DWORD *)(a3 + 1652) : (_DWORD *)1652) )
      WinAPI::Wrapper(-2147467261); /*0x6fc4cf*/
    v37 = *((a3[20] & 4) != 0 ? (_DWORD *)(a3 + 1652) : (_DWORD *)1652);
    if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v37 + 128))(v37) ) /*0x6fc4dd*/
      return 5; /*0x6fc4dd*/
  }
  v18 = *(_DWORD *)(v12 + 172); /*0x6fc4ef*/
  if ( v18 )
  {
    if ( *(_BYTE *)(v18 + 347)
      && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 44))(a3) == 1
      && *(_BYTE *)(*((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 44))(a3) == 1
                    ? (_DWORD *)(a3 + 1732)
                    : (_DWORD *)1732)
                  + 3603)
      && *((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 44))(a3) == 1 ? (_DWORD *)(a3 + 172) : (_DWORD *)172) == 16 )
    {
      return 5; /*0x6fc546*/
    }
  }
  v19 = *(_DWORD *)(v12 + 172); /*0x6fc54c*/
  if ( v19 ) /*0x6fc554*/
  {
    if ( *(_BYTE *)(v19 + 347) && v8 && *(_BYTE *)((*((int (__thiscall **)(#375 **))*v8 + 33))(v8) + 3479) ) /*0x6fc56f*/
      return 5; /*0x6fc56f*/
  }
  if ( this->? ) /*0x6fc57d*/
  {
    if ( !*(_BYTE *)(v12 + 323) ) /*0x6fc587*/
      return 5; /*0x6fc587*/
    transporter = this->transporter; /*0x6fc599*/
    if ( transporter ) /*0x6fc5a1*/
    {
      if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))transporter->RadioClass + 117))(transporter) ) /*0x6fc5a5*/
        return 5; /*0x6fc5a5*/
    }
  }
  if ( this->? ) /*0x6fc5b3*/
  {
    v21 = this->transporter; /*0x6fc5bd*/
    if ( v21 ) /*0x6fc5c5*/
    {
      if ( v21->transporter ) /*0x6fc5c7*/
        return 5; /*0x6fc5c7*/
    }
  }
  if ( v8 /*0x6fc5f8*/
    && *(_DWORD *)(v12 + 172)
    && (*((unsigned __int8 (__thiscall **)(#375 **))*v8 + 117))(v8)
    && !*(_BYTE *)(*(_DWORD *)(v12 + 172) + 346) )
  {
    return 5; /*0x6fc600*/
  }
  if ( *(_BYTE *)(v12 + 305) ) /*0x6fc606*/
  {
    if ( !TechnoClass::CheckTargetCell(this) /*0x6fc623*/
      && !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 224))(this) )
    {
      if ( !SpawnManagerClass::CountAliveSpawns(this->spawnManager) ) /*0x6fc637*/
        return 3; /*0x6fc64c*/
      goto LABEL_98; /*0x6fc63e*/
    }
    return 6; /*0x6fcd2c*/
  }
LABEL_98:
  if ( *(_BYTE *)(*(_DWORD *)(v12 + 172) + 346) /*0x6fc67b*/
    && v8
    && (*((int (__thiscall **)(#375 **))*v8 + 11))(v8) == 2
    && *(_BYTE *)((*((int (__thiscall **)(#375 **))*v8 + 33))(v8) + 3412) )
  {
    return 5; /*0x6fc683*/
  }
  v22 = *(_BYTE **)(*((int (__thiscall **)(TechnoClass *, bool))this->RadioClass + 254))(this, a4 == 0); /*0x6fc69f*/
  if ( v22 /*0x6fc6f7*/
    && (v22[297] && this->fireParticles
     || v22[301] && this->railgunParticles
     || v22[298] && this->sparkParticles
     || v22[304] && this->damageParticles_2) )
  {
    return 6; /*0x6fc6ff*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 84))(a3)
    && !*(_BYTE *)(*(_DWORD *)(v12 + 160) + 676) )
  {
    return a3 != (_BYTE *)this->locomotorTarget ? 5 : 3;
  }
  if ( (a3[20] & 4) != 0 /*0x6fc75c*/
    && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 120))(a3) != 2
    && !*(_BYTE *)(*(_DWORD *)(v12 + 160) + 676) )
  {
    return 5; /*0x6fc75c*/
  }
  if ( v8 )
  {
    v23 = *(_DWORD *)((*((int (__thiscall **)(#375 **))*v8 + 111))(v8) + 236) == 2 /*0x6fc796*/
       || *(_DWORD *)((*((int (__thiscall **)(#375 **))*v8 + 111))(v8) + 236) == 6;
    if ( (*((unsigned __int8 (__thiscall **)(#375 **))*v8 + 21))(v8) ) /*0x6fc79d*/
      v23 = 0; /*0x6fc7a4*/
    if ( *((_BYTE *)v8 + 140) ) /*0x6fc7a6*/
    {
      v23 = 0; /*0x6fc7b0*/
    }
    else if ( v23 && (*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 186))(this, a3) == -1 ) /*0x6fc7ca*/
    {
      return 5; /*0x6fc7ca*/
    }
    if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 80))(a3) || v23 ) /*0x6fc7e3*/
      goto LABEL_139; /*0x6fc7e3*/
  }
  else
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 84))(a3) /*0x6fc7fc*/
      && !*(_BYTE *)(*(_DWORD *)(v12 + 160) + 677) )
    {
      return 5; /*0x6fc812*/
    }
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 44))(a3) != 11
      || *((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 44))(a3) == 11 ? (_DWORD *)(a3 + 236) : (_DWORD *)236) == 2
      || *((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 44))(a3) == 11 ? (_DWORD *)(a3 + 236) : (_DWORD *)236) == 6 )
    {
      goto LABEL_139; /*0x6fc855*/
    }
  }
  if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1540) == 1 ) /*0x6fc868*/
    return 5; /*0x6fc868*/
LABEL_139:
  if ( *(_BYTE *)(v12 + 348) ) /*0x6fc87d*/
  {
    locomotorTarget = this->locomotorTarget; /*0x6fc887*/
    v25 = (FootClass *)a3; /*0x6fc88d*/
    if ( locomotorTarget /*0x6fc8ad*/
      && locomotorTarget != (FootClass *)a3
      && this->damageParticles_2
      && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a3 + 44))(a3) != 6 )
    {
      return 3; /*0x6fc8bb*/
    }
  }
  else
  {
    v25 = (FootClass *)a3; /*0x6fc8be*/
  }
  if ( *(_BYTE *)(v38 + 348) ) /*0x6fc8c2*/
  {
    v26 = this->locomotorTarget; /*0x6fc8cc*/
    if ( v26 ) /*0x6fc8d4*/
    {
      if ( v26 == v25 && (*((int (__thiscall **)(FootClass *))v25->TechnoClass + 11))(v25) != 6 ) /*0x6fc8e4*/
        return 3; /*0x6fc8f2*/
    }
  }
  if ( a4 /*0x6fc93a*/
    || !this
    || (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 1
    || (v27 = this->currentBurstIndex % *(_DWORD *)(v38 + 156), v27 >= 2)
    || (v28 = *(_DWORD *)(*((_DWORD *)this + 433) + 4 * v27 + 3648), v28 == -1)
    || (v29 = this->airstrikeTimer, v29 == -1) )
  {
    v30 = this->diskLaserTimer[0]; /*0x6fc94f*/
    v31 = this->diskLaserTimer[2]; /*0x6fc955*/
    if ( v30 != -1 ) /*0x6fc95e*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v30 >= v31 ) /*0x6fc96a*/
        goto LABEL_164; /*0x6fc96a*/
      v31 -= *(_DWORD *)&stru_A8EB00.?[416] - v30; /*0x6fc96c*/
    }
    if ( v31 ) /*0x6fc970*/
      return 3; /*0x6fc97e*/
  }
  else if ( v29 != v28 ) /*0x6fc93e*/
  {
    return 3; /*0x6fc94c*/
  }
LABEL_164:
  if ( *(_BYTE *)(v38 + 297) && this->fireParticles ) /*0x6fc98b*/
    return 3; /*0x6fc9a1*/
  if ( *(_BYTE *)(v38 + 301) && this->railgunParticles ) /*0x6fc9ae*/
    return 3; /*0x6fc9c4*/
  if ( *(_BYTE *)(v38 + 298) && this->sparkParticles ) /*0x6fc9d1*/
    return 3; /*0x6fc9e7*/
  if ( *(_BYTE *)(v38 + 304) && this->damageParticles_2 ) /*0x6fc9f4*/
    return 3; /*0x6fca0a*/
  if ( !this->ammo ) /*0x6fca0d*/
    return 1; /*0x6fca23*/
  if ( *(_BYTE *)(v38 + 307) /*0x6fca4d*/
    && this->cloakState
    && ((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 2 || this->cloakState == 2) )
  {
    return 9; /*0x6fca5b*/
  }
  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3367) ) /*0x6fca68*/
    return 8; /*0x6fca7e*/
  if ( *(_BYTE *)(*(_DWORD *)(v38 + 172) + 345)
    && this
    && (this->? & 4) != 0
    && !ParasiteClass::CanInfect(*((ParasiteClass **)this + 423), (v25->? & 4) != 0 ? v25 : 0) )
  {
    return 5; /*0x6fcac2*/
  }
  v32 = *(_BYTE *)(*(_DWORD *)(v38 + 172) + 345); /*0x6fcacb*/
  if ( v32 && (v25->? & 4) != 0 && *(int *)&stru_A8EB00.?[416] < v25->unknown698 ) /*0x6fcae9*/
    return 5; /*0x6fcaf7*/
  if ( !v8 ) /*0x6fcafc*/
    goto LABEL_231; /*0x6fcafc*/
  if ( v32 && (*((unsigned __int8 (__thiscall **)(#375 **))*v8 + 88))(v8) ) /*0x6fcb0b*/
    return 5; /*0x6fcb21*/
  if ( *(_BYTE *)(*(_DWORD *)(v38 + 172) + 341) && !CaptureManagerClass::CanCapture((int)this->captureManager, v8) ) /*0x6fcb3b*/
    return 5; /*0x6fcb50*/
  v33 = *(_DWORD *)(v38 + 172); /*0x6fcb56*/
  if ( *(double *)(v33 + 8 * *(_DWORD *)((*((int (__thiscall **)(#375 **))*v8 + 33))(v8) + 156) + 160) == 0.0 ) /*0x6fcb7c*/
    return 5; /*0x6fcb8a*/
  if ( *(_BYTE *)(v33 + 366) && !v8[14] ) /*0x6fcb97*/
    return 5; /*0x6fcbaa*/
  if ( *(_BYTE *)(v33 + 343) && v8[14] ) /*0x6fcbb7*/
    return 5; /*0x6fcbca*/
  if ( *((_BYTE *)v8 + 973) ) /*0x6fcbcd*/
    return 5; /*0x6fcbe3*/
  if ( this->? == *((_BYTE *)v8 + 140) ) /*0x6fcbf4*/
    goto LABEL_231; /*0x6fcbf4*/
  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 111))(this) /*0x6fcc4c*/
    && (*(_DWORD *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 111))(this) + 320) & 0x100) != 0
    && !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 21))(this)
    && (*((int (__thiscall **)(#375 **))*v8 + 111))(v8)
    && (*(_DWORD *)((*((int (__thiscall **)(#375 **))*v8 + 111))(v8) + 320) & 0x100) != 0 )
  {
    return 5; /*0x6fcc5a*/
  }
  v34 = (int *)(v8 + 39); /*0x6fcc63*/
  v39 = this->?[0]; /*0x6fcc6b*/
  v35 = this->?[1]; /*0x6fcc72*/
  v39 = *v34; /*0x6fcc75*/
  v40 = v35; /*0x6fcc79*/
  v36 = this->?[2]; /*0x6fcc80*/
  v40 = v34[1]; /*0x6fcc83*/
  if ( *(_BYTE *)(*(_DWORD *)(v38 + 172) + 345) ) /*0x6fcc90*/
  {
    if ( (int)abs32(v36 - v34[2]) > 2 * g_BuildingLoadQueue_Array.?[1] ) /*0x6fccac*/
      return 5; /*0x6fccb1*/
  }
LABEL_231:
  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 3479) /*0x6fccd5*/
    && (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 224))(this) )
  {
    return 5; /*0x6fcce2*/
  }
  if ( !a5 || (*((unsigned __int8 (__thiscall **)(TechnoClass *, _BYTE *, int))this->RadioClass + 234))(this, a3, a4) ) /*0x6fcd04*/
    return 0; /*0x6fcd20*/
  return 8; /*0x6fc0df*/
}



// ==== 0x006FCD40  TechnoClass::ProcessDeploymentState  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ProcessDeploymentState(TechnoClass *this)
{
  SpawnManagerClass *spawnManager; // ecx

  (*((void (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 242))(this, 0); /*0x6fcd47*/
  (*((void (__thiscall **)(TechnoClass *, _DWORD, int))this->RadioClass + 288))(this, 0, 1); /*0x6fcd55*/
  (*((void (__thiscall **)(TechnoClass *, int))this->RadioClass + 160))(this, 3); /*0x6fcd61*/
  if ( !this || (this->? & 4) == 0 || !*((_BYTE *)this + 1709) ) /*0x6fcd71*/
  {
    spawnManager = this->spawnManager; /*0x6fcd7b*/
    if ( spawnManager ) /*0x6fcd83*/
    {
      TaskManager::Update((TaskManager *)spawnManager); /*0x6fcd85*/
      UnitClass::ProcessIdleOrders((UnitClass *)this->spawnManager); /*0x6fcd90*/
    }
    (*((void (__thiscall **)(TechnoClass *, int))this->RadioClass + 55))(this, 1); /*0x6fcd9b*/
  }
  return (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 84))(this); /*0x6fcdab*/
}



// ==== 0x006FCDB0  TechnoClass::AssignTarget_SyncLog  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::AssignTarget_SyncLog(TechnoClass *this, int a2)
{
  int v3; // edi
  int result; // eax
  AirstrikeClass *airstrike; // ecx
  int *v6; // ebp
  int v7; // eax
  int v8; // eax
  TechnoClass *v9; // ebp
  SpawnManagerClass *spawnManager; // ecx
  _DWORD v11[3]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = a2; /*0x6fcdb8*/
  result = (int)this->target; /*0x6fcdbe*/
  LOBYTE(this->shouldLoseTarget) = 0; /*0x6fcdc4*/
  if ( a2 == result ) /*0x6fcdcc*/
    return result; /*0x6fcdcc*/
  airstrike = this->airstrike; /*0x6fcdd2*/
  if ( airstrike && airstrike->owner == this ) /*0x6fcddf*/
    WTFMode::ResetUnitFlags((WTFMode *)airstrike); /*0x6fcde1*/
  result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this); /*0x6fcdeb*/
  if ( result == 2 ) /*0x6fcdf1*/
  {
    if ( !a2 ) /*0x6fcdf5*/
      goto LABEL_38; /*0x6fcdf5*/
    result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6fcdff*/
    if ( *(_BYTE *)(result + 3412) ) /*0x6fce05*/
    {
      result = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6fce11*/
      if ( !*(_BYTE *)(result + 3432) ) /*0x6fce17*/
      {
        if ( this->ammo ) /*0x6fce1f*/
        {
          if ( this->? == 1 ) /*0x6fce2e*/
          {
            result = this->?; /*0x6fce30*/
            if ( result > 4 && result < 10 ) /*0x6fce3e*/
            {
              this->ammo = 0; /*0x6fce40*/
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
      result = *(_DWORD *)(a2 + 740); /*0x6fce59*/
      v6 = (int *)(a2 + 740); /*0x6fce5f*/
      if ( result ) /*0x6fce67*/
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2); /*0x6fce6d*/
        if ( result != 6 ) /*0x6fce73*/
        {
          if ( this->temporalUsing ) /*0x6fce75*/
            v3 = *v6; /*0x6fce7d*/
          v7 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 254))(this, 0); /*0x6fce8b*/
          if ( v7 ) /*0x6fce8f*/
          {
            v8 = *(_DWORD *)(v7 + 172); /*0x6fce91*/
            if ( v8 ) /*0x6fce99*/
            {
              if ( *(_BYTE *)(v8 + 347) ) /*0x6fce9b*/
                v3 = *v6; /*0x6fcea3*/
            }
          }
          result = (int)this->airstrike; /*0x6fcea6*/
          if ( result && *(TechnoClass **)(result + 76) == this ) /*0x6fceb3*/
            v3 = *v6; /*0x6fceb5*/
        }
      }
    }
    if ( (TechnoClass *)v3 == this ) /*0x6fceba*/
    {
      v11[0] = this->?[0]; /*0x6fcec8*/
      v11[1] = this->?[1]; /*0x6fced4*/
      v11[2] = this->?[2]; /*0x6fcedb*/
      result = (int)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v11); /*0x6fcee4*/
      v3 = result; /*0x6fcee9*/
      goto LABEL_39; /*0x6fceeb*/
    }
    if ( !v3 ) /*0x6fceef*/
      goto LABEL_39; /*0x6fceef*/
    LOBYTE(result) = *(_BYTE *)(v3 + 20); /*0x6fcef1*/
    if ( (result & 2) == 0 ) /*0x6fcef6*/
      goto LABEL_39; /*0x6fcef6*/
    if ( *(_BYTE *)(v3 + 144) && *(_DWORD *)(v3 + 108) ) /*0x6fcf00*/
    {
      LOBYTE(result) = (result & 4) != 0; /*0x6fcf08*/
      if ( !(_BYTE)result ) /*0x6fcf0e*/
        goto LABEL_39; /*0x6fcf0e*/
      v9 = (TechnoClass *)v3; /*0x6fcf16*/
      if ( *(_BYTE *)(v3 + 973) ) /*0x6fcf10*/
        v3 = 0; /*0x6fcf1c*/
      result = (*((int (__thiscall **)(TechnoClass *))v9->RadioClass + 11))(v9); /*0x6fcf23*/
      if ( result != 15 ) /*0x6fcf29*/
        goto LABEL_39; /*0x6fcf29*/
      result = TechnoClass::IsEnteringOrCapturingStructure(v9); /*0x6fcf2d*/
      if ( !(_BYTE)result ) /*0x6fcf34*/
        goto LABEL_39; /*0x6fcf34*/
    }
  }
LABEL_38:
  v3 = 0; /*0x6fcf36*/
LABEL_39:
  spawnManager = this->spawnManager; /*0x6fcf38*/
  this->target = (AbstractClass *)v3; /*0x6fcf3e*/
  if ( spawnManager && !v3 ) /*0x6fcf4b*/
    result = SpawnManagerClass::SetTarget(spawnManager, 0); /*0x6fcf4e*/
  if ( !this->target ) /*0x6fcf53*/
    this->currentBurstIndex = 0; /*0x6fcf5b*/
  if ( this->fireParticles ) /*0x6fcf61*/
  {
    result = (*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 235))(this, v3); /*0x6fcf6e*/
    if ( !(_BYTE)result ) /*0x6fcf76*/
    {
      result = (*((int (__thiscall **)(ParticleSystemClass *))this->fireParticles->ObjectClass + 62))(this->fireParticles); /*0x6fcf80*/
      this->fireParticles = 0; /*0x6fcf86*/
    }
  }
  return result; /*0x6fcf8c*/
}



// ==== 0x006FCFA0  TechnoClass::CalculateROF  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CalculateROF(TechnoClass *this)
{
  int v3; // edi
  TechnoClass *v4; // eax
  int currentBurstIndex; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // [esp+Ch] [ebp+4h]
  int v15; // [esp+Ch] [ebp+4h]

  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6 && this->ammo > 1 ) /*0x6fcfb5*/
    return 1; /*0x6fcfb8*/
  v3 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, v14); /*0x6fcfd0*/
  if ( !v3 ) /*0x6fcfd4*/
    return 1; /*0x6fcfd7*/
  if ( *(_BYTE *)(v3 + 304) /*0x6fd028*/
    || *(_BYTE *)(v3 + 298) && this->sparkParticles
    || *(_BYTE *)(v3 + 297) && this->fireParticles
    || *(_BYTE *)(v3 + 301) && this->railgunParticles )
  {
    return *(_DWORD *)(v3 + 176); /*0x6fd1fa*/
  }
  if ( this )
    v4 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 1 ? this : 0;
  else
    v4 = 0; /*0x6fd03a*/
  currentBurstIndex = this->currentBurstIndex; /*0x6fd04e*/
  if ( currentBurstIndex >= *(_DWORD *)(v3 + 156) ) /*0x6fd05c*/
  {
    v7 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x6fd0b0*/
    LOWORD(v8) = Math::RoundToInt((double)*(int *)(v3 + 176) * *(double *)&this->owner->__pad_13C[108] + (double)v7); /*0x6fd0cf*/
    v9 = v8; /*0x6fd0da*/
    v15 = v8; /*0x6fd0de*/
    if ( (unsigned __int8)Audio::IsMediumVolume(this->veterancy) || (unsigned __int8)Audio::IsLoud(this->veterancy) ) /*0x6fd0ed*/
    {
      if ( (v10 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this), /*0x6fd12c*/
            (unsigned __int8)Audio::IsMediumVolume(this->veterancy))
        && *(_BYTE *)(v10 + 672)
        || (unsigned __int8)Audio::IsLoud(this->veterancy) && (*(_BYTE *)(v10 + 672) || *(_BYTE *)(v10 + 690)) )
      {
        LOWORD(v11) = Math::RoundToInt((double)v15 * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1680)); /*0x6fd145*/
        v9 = v11; /*0x6fd14a*/
        v15 = v11; /*0x6fd14c*/
      }
    }
    if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 256))(this) ) /*0x6fd154*/
    {
      if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 258))(this) > 0 ) /*0x6fd16a*/
      {
        v9 /= (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 258))(this); /*0x6fd17d*/
        v15 = v9; /*0x6fd17f*/
      }
      if ( *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3908) > 0.0 ) /*0x6fd19a*/
      {
        LOWORD(v12) = Math::RoundToInt((double)v15 / *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3908)); /*0x6fd1a6*/
        v9 = v12; /*0x6fd1ab*/
        v15 = v12; /*0x6fd1ad*/
      }
    }
    if ( this->bunkerLinkedUnit /*0x6fd1de*/
      && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) != 6
      && *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3920) != 0.0 )
    {
      LOWORD(v13) = Math::RoundToInt((double)v15 / *(float *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3920)); /*0x6fd1ea*/
      return v13; /*0x6fd1ef*/
    }
    return v9; /*0x6fd1f1*/
  }
  else
  {
    if ( currentBurstIndex <= 0 ) /*0x6fd060*/
      return Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 3, 5); /*0x6fd060*/
    if ( currentBurstIndex > 4 ) /*0x6fd065*/
      return Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 3, 5); /*0x6fd065*/
    if ( !v4 ) /*0x6fd069*/
      return Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 3, 5); /*0x6fd069*/
    v6 = *(_DWORD *)(v4[1].ironTintTimer[2] + 4 * currentBurstIndex + 3652); /*0x6fd071*/
    if ( v6 == -1 ) /*0x6fd07b*/
      return Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 3, 5); /*0x6fd094*/
    else
      return v6; /*0x6fd07e*/
  }
}



// ==== 0x006FD210  TechnoClass::CreateFireEffect  this=TechnoClass  sig=csp ====
char *__thiscall TechnoClass::CreateFireEffect(TechnoClass *this, _BYTE *a2, int a3, int a4, int *a5)
{
  char v6; // cl
  int *v7; // edi
  unsigned __int8 v8; // al
  unsigned __int8 v9; // cl
  int v10; // ecx
  int v11; // ecx
  int v12; // edx
  int *v13; // eax
  int v14; // edx
  int (__thiscall **vtable0)(TechnoClass *); // eax
  int *v16; // eax
  int (__thiscall **v17)(TechnoClass *, _DWORD *); // edx
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
  int v32; // [esp+4h] [ebp-4Ch]
  __int16 v33; // [esp+18h] [ebp-38h] BYREF
  char v34; // [esp+1Ah] [ebp-36h]
  int v35; // [esp+1Ch] [ebp-34h] BYREF
  __int16 *v36; // [esp+24h] [ebp-2Ch]
  int v37; // [esp+28h] [ebp-28h]
  int v38[3]; // [esp+2Ch] [ebp-24h] BYREF
  int v39; // [esp+38h] [ebp-18h] BYREF
  int v40; // [esp+3Ch] [ebp-14h]
  int v41; // [esp+40h] [ebp-10h]
  _DWORD v42[3]; // [esp+44h] [ebp-Ch] BYREF
  int *v43; // [esp+60h] [ebp+10h]

  v37 = *(char *)(a4 + 334); /*0x6fd224*/
  v6 = *(_BYTE *)(a4 + 333); /*0x6fd228*/
  v33 = 0; /*0x6fd230*/
  v34 = 0; /*0x6fd23a*/
  if ( v6 ) /*0x6fd23f*/
  {
    v7 = &this->owner->base[5]; /*0x6fd247*/
    v8 = BYTE1(this->owner->base[5]); /*0x6fd24f*/
    v9 = BYTE2(this->owner->base[5]); /*0x6fd252*/
    LOBYTE(v33) = *(_BYTE *)v7 >> 1; /*0x6fd257*/
    HIBYTE(v33) = v8 >> 1; /*0x6fd263*/
    v34 = v9 >> 1; /*0x6fd267*/
    v36 = &v33; /*0x6fd26b*/
  }
  else
  {
    v7 = (int *)(a4 + 288); /*0x6fd271*/
    v36 = (__int16 *)(a4 + 291); /*0x6fd27c*/
  }
  v10 = *a5; /*0x6fd28c*/
  v35 = 0; /*0x6fd28e*/
  if ( v10 == g_BuildingLoadQueue_Array.?[3] /*0x6fd2ae*/
    && a5[1] == g_BuildingLoadQueue_Array.?[4]
    && a5[2] == g_BuildingLoadQueue_Array.?[5] )
  {
    v13 = (int *)(*((int (__thiscall **)(TechnoClass *, int *, int, _DWORD, _DWORD, _DWORD))this->RadioClass + 44))( /*0x6fd2e9*/
                   this,
                   v38,
                   a3,
                   0,
                   0,
                   0);
    v39 = *v13; /*0x6fd2f1*/
    v40 = v13[1]; /*0x6fd2f8*/
    v14 = v13[2]; /*0x6fd2fe*/
    vtable0 = (int (__thiscall **)(TechnoClass *))this->RadioClass; /*0x6fd301*/
    v41 = v14; /*0x6fd303*/
    if ( vtable0[11](this) == 6 ) /*0x6fd30d*/
    {
      v16 = Coord::To_ScreenRaw(&v35, &v39); /*0x6fd31f*/
      v17 = (int (__thiscall **)(TechnoClass *, _DWORD *))this->RadioClass; /*0x6fd326*/
      v38[0] = *v16; /*0x6fd328*/
      v18 = v16[1]; /*0x6fd32e*/
      v19 = (_DWORD *)v17[43](this, v42); /*0x6fd336*/
      v20 = Coord::To_ScreenRaw(v38, v19); /*0x6fd348*/
      v35 = *v20; /*0x6fd34f*/
      v35 = v18 - v20[1]; /*0x6fd358*/
      if ( v35 > 0 ) /*0x6fd35c*/
        v35 = 0; /*0x6fd35e*/
    }
  }
  else
  {
    v11 = a5[1]; /*0x6fd2b2*/
    v39 = *a5; /*0x6fd2b5*/
    v12 = a5[2]; /*0x6fd2b9*/
    v40 = v11; /*0x6fd2bc*/
    v41 = v12; /*0x6fd2c0*/
  }
  if ( a2 && (a2[20] & 2) != 0 ) /*0x6fd372*/
    v21 = (int *)(*(int (__stdcall **)(_DWORD *))(*(_DWORD *)a2 + 164))(v42); /*0x6fd37b*/
  else
    v21 = (int *)(*(int (__stdcall **)(_DWORD *))(*(_DWORD *)a2 + 88))(v42); /*0x6fd38a*/
  v22 = *v21; /*0x6fd38d*/
  v32 = 92; /*0x6fd38f*/
  v23 = v21[1]; /*0x6fd391*/
  v24 = v21[2]; /*0x6fd394*/
  v43 = (int *)__2_YAPAXI_Z(0x5Cu); /*0x6fd39f*/
  if ( !v43 ) /*0x6fd3a5*/
    return 0; /*0x6fd453*/
  v32 = 0; /*0x6fd3af*/
  v31[4] = 1065353216; /*0x6fd3b1*/
  v31[3] = 1; /*0x6fd3b6*/
  v31[2] = 0; /*0x6fd3b8*/
  v31[1] = v37; /*0x6fd3ba*/
  v31[0] = v25; /*0x6fd3bf*/
  v26 = *(_BYTE *)(a4 + 296); /*0x6fd3c9*/
  LOWORD(v31[0]) = *(_WORD *)(a4 + 294); /*0x6fd3cf*/
  v30 = v31; /*0x6fd3d6*/
  BYTE2(v31[0]) = v26; /*0x6fd3d7*/
  v27 = *((_BYTE *)v36 + 2); /*0x6fd3dd*/
  LOWORD(v30) = *v36; /*0x6fd3e2*/
  v29 = &v30; /*0x6fd3e5*/
  BYTE2(v30) = v27; /*0x6fd3e6*/
  LOWORD(v29) = *(_WORD *)v7; /*0x6fd3f3*/
  BYTE2(v29) = *((_BYTE *)v7 + 2); /*0x6fd3f6*/
  result = TimerClass::Construct( /*0x6fd42b*/
             (char *)v43,
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
    if ( *(_BYTE *)(a4 + 333) ) /*0x6fd438*/
      result[32] = 1; /*0x6fd442*/
  }
  return result; /*0x6fd446*/
}



// ==== 0x006FD460  TechnoClass::CreateRadarBlip  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::CreateRadarBlip(TechnoClass *this, _BYTE *a2, int a3, _DWORD *a4)
{
  int v5; // esi
  TechnoClass *v6; // eax
  int *v8; // eax
  int v9; // edx
  int v10; // esi
  int (__thiscall **vtable0)(TechnoClass *, _BYTE *); // eax
  _DWORD *v12; // eax
  int *v13; // eax
  int *v14; // eax
  int *v15; // ecx
  int v16; // eax
  int v17; // edi
  int v18; // ebp
  TechnoClass *v19; // [esp+10h] [ebp-20h]
  int v20; // [esp+14h] [ebp-1Ch] BYREF
  int v21; // [esp+1Ch] [ebp-14h] BYREF
  _BYTE v22[12]; // [esp+24h] [ebp-Ch] BYREF

  v5 = 0; /*0x6fd46b*/
  v6 = (TechnoClass *)__2_YAPAXI_Z(0x30u); /*0x6fd46d*/
  if ( !v6 ) /*0x6fd477*/
    return 0; /*0x6fd477*/
  v19 = (TechnoClass *)TechnoClass::ResetDamageAccumulator(v6); /*0x6fd482*/
  if ( !v19 ) /*0x6fd486*/
    return 0; /*0x6fd488*/
  if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 6 ) /*0x6fd4a2*/
  {
    v8 = Coord::To_ScreenRaw(&v20, a4); /*0x6fd4b0*/
    v9 = *v8; /*0x6fd4b5*/
    v10 = v8[1]; /*0x6fd4be*/
    vtable0 = (int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass; /*0x6fd4c1*/
    v21 = v9; /*0x6fd4c3*/
    v12 = (_DWORD *)vtable0[43](this, v22); /*0x6fd4c7*/
    v13 = Coord::To_ScreenRaw(&v21, v12); /*0x6fd4d9*/
    v20 = *v13; /*0x6fd4e0*/
    v5 = v10 - v13[1]; /*0x6fd4e4*/
    if ( v5 > 0 ) /*0x6fd4e9*/
      v5 = 0; /*0x6fd4eb*/
  }
  if ( a2 && (a2[20] & 2) != 0 ) /*0x6fd4f9*/
    v14 = (int *)(*(int (__stdcall **)(_BYTE *))(*(_DWORD *)a2 + 164))(v22); /*0x6fd502*/
  else
    v14 = (int *)(*(int (__stdcall **)(_BYTE *))(*(_DWORD *)a2 + 88))(v22); /*0x6fd511*/
  v15 = v14; /*0x6fd514*/
  v16 = *v14; /*0x6fd516*/
  v17 = v15[1]; /*0x6fd518*/
  v18 = v15[2]; /*0x6fd51b*/
  if ( a3 ) /*0x6fd524*/
    LOBYTE(v19->?) = *(_BYTE *)(a3 + 339); /*0x6fd530*/
  TechnoClass::CreateTrailParticle(v19, *a4, a4[1], a4[2], v16, v17, v18, v5); /*0x6fd55a*/
  return (int)v19; /*0x6fd48a*/
}



// ==== 0x006FD570  TechnoClass::CreateFiringRadarBlip  this=TechnoClass  sig=csp ====
TechnoClass *__thiscall TechnoClass::CreateFiringRadarBlip(TechnoClass *this, _BYTE *a2)
{
  int v3; // ebx
  int v4; // ebp
  _DWORD *v5; // eax
  TechnoClass *RadarBlip; // edi
  _DWORD v8[3]; // [esp+1Ch] [ebp-18h] BYREF
  _BYTE v9[12]; // [esp+28h] [ebp-Ch] BYREF

  v3 = (*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 185))(this, a2); /*0x6fd588*/
  v4 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, v3); /*0x6fd593*/
  v5 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *, int, _DWORD, _DWORD, _DWORD))this->RadioClass + 44))( /*0x6fd5ae*/
                   this,
                   v9,
                   v3,
                   0,
                   0,
                   0);
  v8[0] = *v5; /*0x6fd5b6*/
  v8[1] = v5[1]; /*0x6fd5c2*/
  v8[2] = v5[2]; /*0x6fd5cd*/
  RadarBlip = (TechnoClass *)TechnoClass::CreateRadarBlip(this, a2, v4, v8); /*0x6fd5d6*/
  if ( RadarBlip /*0x6fd5f2*/
    && (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 1
    && this->?
    && !this->q1B7 )
  {
    this->q1B7 = RadarBlip; /*0x6fd600*/
    TechnoClass::updateSightRange(RadarBlip, this, v3); /*0x6fd606*/
  }
  return RadarBlip; /*0x6fd60d*/
}



// ==== 0x006FD620  TechnoClass::CreateFireBeamEffect  this=TechnoClass  sig=csp ====
char *__thiscall TechnoClass::CreateFireBeamEffect(TechnoClass *this, _BYTE *a2, int a3)
{
  int v4; // eax
  void *vtable0; // ebx
  TechnoClass *v6; // esi
  int *v7; // eax
  int (__thiscall **v8)(TechnoClass *, int *); // edx
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

  v4 = RadBeam::Create((RadBeam *)1); /*0x6fd62e*/
  vtable0 = this->RadioClass; /*0x6fd636*/
  v6 = (TechnoClass *)v4; /*0x6fd638*/
  v20 = 0; /*0x6fd650*/
  v7 = (int *)(*((int (__thiscall **)(TechnoClass *, int *, _DWORD, _DWORD, _DWORD, _DWORD))vtable0 + 44))( /*0x6fd657*/
                this,
                v21,
                0,
                0,
                0,
                0);
  v23 = *v7; /*0x6fd65f*/
  v24 = v7[1]; /*0x6fd668*/
  v8 = (int (__thiscall **)(TechnoClass *, int *))this->RadioClass; /*0x6fd66c*/
  v25 = v7[2]; /*0x6fd671*/
  v9 = (int *)v8[43](this, v21); /*0x6fd67a*/
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
  if ( a2 && (a2[20] & 2) != 0 ) /*0x6fd6ee*/
    v14 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)a2 + 164))(a2, v21); /*0x6fd707*/
  else
    v14 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)a2 + 88))(a2, v21); /*0x6fd6f9*/
  v22[0] = *v14; /*0x6fd713*/
  v22[1] = v14[1]; /*0x6fd71a*/
  v15 = v14[2]; /*0x6fd71e*/
  v18 = 0; /*0x6fd721*/
  v22[2] = v15; /*0x6fd726*/
  v19 = 0; /*0x6fd732*/
  if ( a3 == 1 ) /*0x6fd737*/
  {
    v16 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6246; /*0x6fd758*/
  }
  else if ( a3 == 2 ) /*0x6fd740*/
  {
    v16 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6249; /*0x6fd74a*/
  }
  else
  {
    v16 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6192; /*0x6fd742*/
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
    if ( a2 )
    {
      if ( (a2[20] & 1) != 0 )
      {
        v6->? = a2; /*0x6fd7d1*/
        *((a2[20] & 1) != 0 ? (_DWORD *)(a2 + 1296) : (_DWORD *)1296) = v6;
      }
    }
  }
  return (char *)v6; /*0x6fd7e7*/
}



// ==== 0x006FD800  ObjectClass::SpreadRadiationAreaEffect  this=ObjectClass  sig=csp ====
int __thiscall SpreadRadiationAreaEffect(ObjectClass *this, __int16 a2)
{
  int *v2; // eax
  int result; // eax
  int v4; // ecx
  CellClass *v5; // eax
  int *Coords; // eax
  int v7; // esi
  int v8; // eax
  char *v9; // esi
  int v10; // edi
  int v11; // ebx
  __int16 v12; // [esp+1Ch] [ebp-50h] BYREF
  char v13; // [esp+1Eh] [ebp-4Eh]
  int v14; // [esp+20h] [ebp-4Ch]
  int v15; // [esp+24h] [ebp-48h]
  int v16; // [esp+28h] [ebp-44h]
  int v17; // [esp+2Ch] [ebp-40h]
  __int16 v18[2]; // [esp+30h] [ebp-3Ch] BYREF
  int v19; // [esp+34h] [ebp-38h]
  __int16 v20; // [esp+38h] [ebp-34h]
  __int16 v21; // [esp+3Ah] [ebp-32h]
  __int16 v22; // [esp+40h] [ebp-2Ch]
  __int16 v23; // [esp+42h] [ebp-2Ah]
  int v24; // [esp+48h] [ebp-24h] BYREF
  int v25; // [esp+4Ch] [ebp-20h]
  int v26; // [esp+50h] [ebp-1Ch]
  int v27; // [esp+54h] [ebp-18h] BYREF
  int v28; // [esp+58h] [ebp-14h]
  int v29; // [esp+5Ch] [ebp-10h]
  int v30[3]; // [esp+60h] [ebp-Ch] BYREF

  v2 = (int *)(*((int (__thiscall **)(ObjectClass *, int *))this->AbstractClass + 18))(this, &v24); /*0x6fd813*/
  v17 = 0; /*0x6fd818*/
  v27 = *v2; /*0x6fd822*/
  v28 = v2[1]; /*0x6fd829*/
  v29 = v2[2]; /*0x6fd830*/
  v22 = v27 / 256; /*0x6fd840*/
  v23 = v28 / 256; /*0x6fd853*/
  v12 = *(_WORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6192); /*0x6fd865*/
  result = -1; /*0x6fd86d*/
  v13 = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6194); /*0x6fd870*/
  v15 = -1; /*0x6fd874*/
  do /*0x6fd9e6*/
  {
    v4 = -1; /*0x6fd878*/
    v14 = -1; /*0x6fd87b*/
    do /*0x6fd9d8*/
    {
      if ( result || v4 ) /*0x6fd885*/
      {
        v20 = a2 * result; /*0x6fd89a*/
        v21 = v4 * a2; /*0x6fd89f*/
        LOWORD(v16) = v22 + a2 * result; /*0x6fd8ae*/
        HIWORD(v16) = v4 * a2 + v23; /*0x6fd8bd*/
        *(_DWORD *)v18 = v16; /*0x6fd8ca*/
        v5 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v18); /*0x6fd8d5*/
        Coords = CellClass::GetCoords(v5, v30); /*0x6fd8dc*/
        v24 = *Coords; /*0x6fd8e8*/
        v25 = Coords[1]; /*0x6fd8f6*/
        v26 = Coords[2]; /*0x6fd8fd*/
        v7 = Random::Range(&Randomizer_Global, -128, 128); /*0x6fd912*/
        v8 = Random::Range(&Randomizer_Global, -128, 128); /*0x6fd914*/
        v24 += v7; /*0x6fd925*/
        v25 += v8; /*0x6fd92e*/
        v9 = (char *)RadBeam::Create((RadBeam *)2); /*0x6fd93b*/
        TechnoClass::drawSelectionBox(v9, (int)&v12); /*0x6fd940*/
        v10 = Random::Range(&Randomizer_Global, 5, 20); /*0x6fd95f*/
        v19 = Random::Range(&Randomizer_Global, 100, 500); /*0x6fd96f*/
        v11 = Random::Range(&Randomizer_Global, 0, 20); /*0x6fd97f*/
        TechnoClass::drawPipScale((TechnoClass *)v9, &v27); /*0x6fd981*/
        TechnoClass::drawSpawnPips((TechnoClass *)v9, &v24); /*0x6fd98d*/
        TechnoClass::drawAmmoPips((TechnoClass *)v9, v10); /*0x6fd995*/
        TechnoClass::drawTiberiumPips( /*0x6fd9a6*/
          (TechnoClass *)v9,
          COERCE_UNSIGNED_INT64((double)v19),
          HIDWORD(COERCE_UNSIGNED_INT64((double)v19)));
        SpreadRadiationAreaEffect_Helper((ObjectClass *)v9, 0, 0); /*0x6fd9b1*/
        SpreadRadiationAreaEffect_Helper_659530((ObjectClass *)v9, v11); /*0x6fd9b9*/
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
int *__userpurge TechnoClass::GetFiringAngle@<eax>(
        TechnoClass *this,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        int *a5,
        int a6,
        int a7)
{
  TechnoClass *v7; // ecx
  double v8; // st7
  TechnoClass *v9; // esi
  int v10; // eax
  __int16 v11; // cx
  int *TargetCoords; // eax
  int v13; // edi
  int v14; // ebx
  int v15; // ebp
  HouseClass *v16; // eax
  _DWORD *v17; // eax
  int v18; // edi
  int (__thiscall **vtable0)(TechnoClass *, int); // edx
  void *v20; // ebp
  int v21; // eax
  TechnoClass *v22; // edi
  int v23; // eax
  void *v24; // eax
  int v25; // ebx
  int WeaponRange; // edi
  char IsCloseEnoughToBuilding; // al
  int v29; // [esp+4h] [ebp-3Ch]
  double v30; // [esp+8h] [ebp-38h]
  void *v34; // [esp+24h] [ebp-1Ch] BYREF
  double FiringDistance; // [esp+28h] [ebp-18h]
  int v36; // [esp+34h] [ebp-Ch] BYREF
  int v37; // [esp+38h] [ebp-8h]
  int v38; // [esp+3Ch] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+40h] [ebp+0h]
  int currentWeaponSlot; // [esp+54h] [ebp+14h]

  v9 = v7; /*0x6fda04*/
  v10 = (*((int (**)(void))v7->RadioClass + 33))(); /*0x6fda08*/
  LOBYTE(v11) = 0; /*0x6fda0e*/
  HIBYTE(v11) = *(_BYTE *)(v10 + 976); /*0x6fda10*/
  LOWORD(v34) = v11; /*0x6fda1c*/
  if ( a5 ) /*0x6fda21*/
  {
    TargetCoords = TechnoClass::GetTargetCoords(v9, &v36); /*0x6fda31*/
    v13 = *TargetCoords; /*0x6fda36*/
    v14 = TargetCoords[1]; /*0x6fda3a*/
    v15 = TargetCoords[2]; /*0x6fda3d*/
    v16 = (HouseClass *)(*((int (__thiscall **)(TechnoClass *, int, int, int))v9->RadioClass + 33))(v9, a4, a3, a2); /*0x6fda42*/
    if ( (unsigned __int8)HouseClass::HasPower(v16) ) /*0x6fda4a*/
      currentWeaponSlot = v9->currentWeaponSlot; /*0x6fda59*/
    else
      currentWeaponSlot = 0; /*0x6fda5f*/
    v17 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, int *, int))v9->RadioClass + 192))( /*0x6fda75*/
                      v9,
                      &v36,
                      currentWeaponSlot);
    v18 = v13 - *v17; /*0x6fda82*/
    vtable0 = (int (__thiscall **)(TechnoClass *, int))v9->RadioClass; /*0x6fda84*/
    v38 = v14 - v17[1]; /*0x6fda86*/
    v20 = (void *)(v15 - v17[2]); /*0x6fda8f*/
    v37 = v18; /*0x6fda91*/
    retaddr = v20; /*0x6fda95*/
    v21 = vtable0[254](v9, a6); /*0x6fda9e*/
    v22 = *(TechnoClass **)v21; /*0x6fdaa4*/
    v23 = *(_DWORD *)(*(_DWORD *)v21 + 160); /*0x6fdab1*/
    FiringDistance = (double)*(int *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5816); /*0x6fdab9*/
    if ( v23 && *(_BYTE *)(v23 + 661) ) /*0x6fdabf*/
      FiringDistance = RulesClass::GetFiringDistance(); /*0x6fdace*/
    Math::Sqrt(pow((double)v36, 2.0) + pow((double)v37, 2.0)); /*0x6fdaf8*/
    LOWORD(v24) = Math::RoundToInt(v8); /*0x6fdb00*/
    v25 = (int)v24; /*0x6fdb05*/
    WeaponRange = TechnoClass::GetWeaponRange(v22, v24); /*0x6fdb17*/
    v30 = FiringDistance; /*0x6fdb23*/
    v29 = v38; /*0x6fdb24*/
    IsCloseEnoughToBuilding = TechnoClass::IsCloseEnoughToBuilding(v9, a6); /*0x6fdb29*/
    if ( (unsigned __int8)ComputeMathFacingAngle(IsCloseEnoughToBuilding, WeaponRange, v25, v29, v30, &v34) ) /*0x6fdb32*/
    {
      this->RadioClass = v34; /*0x6fdb5f*/
      return (int *)this; /*0x6fdb56*/
    }
    else
    {
      LOWORD(a5) = -8192; /*0x6fdb42*/
      this->RadioClass = a5; /*0x6fdb4e*/
      return (int *)this; /*0x6fdb3e*/
    }
  }
  else
  {
    this->RadioClass = v34; /*0x6fdb70*/
    return (int *)this; /*0x6fdb67*/
  }
}



// ==== 0x006FDB80  TechnoClass::ComputeAudioFalloffDamage  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ComputeAudioFalloffDamage(TechnoClass *this, int a2, int a3)
{
  int result; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  _DWORD *v9; // eax
  double DamageMultiplier; // st7
  int v11; // eax
  int v12; // ebx
  int v13; // ebp
  int v14; // eax
  int v15; // eax
  int v16; // [esp+14h] [ebp+4h]
  int v17; // [esp+14h] [ebp+4h]

  if ( !a2 ) /*0x6fdb8d*/
    return 0; /*0x6fdb8d*/
  result = *(_DWORD *)(a3 + 164); /*0x6fdb9d*/
  if ( *(_BYTE *)(a3 + 304) || *(_BYTE *)(a3 + 297) ) /*0x6fdbaf*/
    return 0; /*0x6fdd38*/
  if ( result > 0 ) /*0x6fdbbf*/
  {
    LOWORD(v6) = Math::RoundToInt( /*0x6fdbdd*/
                   *(double *)&this->owner->__pad_13C[76]
                 * *(double *)this->firepowerMultiplier
                 * (double)*(int *)(a3 + 164));
    v16 = v6; /*0x6fdbe8*/
    if ( (unsigned __int8)Audio::IsMediumVolume(this->veterancy) || (unsigned __int8)Audio::IsLoud(this->veterancy) ) /*0x6fdbf9*/
    {
      if ( (v7 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this), /*0x6fdc38*/
            (unsigned __int8)Audio::IsMediumVolume(this->veterancy))
        && *(_BYTE *)(v7 + 670)
        || (unsigned __int8)Audio::IsLoud(this->veterancy) && (*(_BYTE *)(v7 + 670) || *(_BYTE *)(v7 + 688)) )
      {
        LOWORD(v8) = Math::RoundToInt((double)v16 * *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1648)); /*0x6fdc51*/
        v16 = v8; /*0x6fdc56*/
      }
    }
    v9 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6fdc66*/
    DamageMultiplier = TechnoClass::GetDamageMultiplier((TechnoClass *)*(_DWORD *)(a2 + 540), v9); /*0x6fdc73*/
    LOWORD(v11) = Math::RoundToInt((double)v16 / (DamageMultiplier * *(double *)this->armorMultiplier)); /*0x6fdc82*/
    v12 = v11; /*0x6fdc8d*/
    v17 = v11; /*0x6fdc91*/
    if ( (unsigned __int8)Audio::IsMediumVolume((int *)(a2 + 336)) || (unsigned __int8)Audio::IsLoud((int *)(a2 + 336)) ) /*0x6fdca0*/
    {
      if ( (v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2), /*0x6fdcdf*/
            (unsigned __int8)Audio::IsMediumVolume((int *)(a2 + 336)))
        && *(_BYTE *)(v13 + 669)
        || (unsigned __int8)Audio::IsLoud((int *)(a2 + 336)) && (*(_BYTE *)(v13 + 669) || *(_BYTE *)(v13 + 687)) )
      {
        LOWORD(v14) = Math::RoundToInt((double)v17 / *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1672)); /*0x6fdcf9*/
        v12 = v14; /*0x6fdcfe*/
      }
    }
    if ( v12 < 1 ) /*0x6fdd03*/
      v12 = 1; /*0x6fdd05*/
    v15 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 136))(a2); /*0x6fdd10*/
    return ComputeTechnoClassDamageFalloff(v12, *(_DWORD *)(a3 + 172), *(_DWORD *)(v15 + 156), 0); /*0x6fdd29*/
  }
  return result; /*0x6fdd30*/
}



// ==== 0x006FDD50  TechnoClass::FireWeapon  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::FireWeapon(TechnoClass *this)
{
  double FiringDistance; // st7
  int v3; // ebx
  _BYTE *v4; // eax
  int v5; // edx
  int v6; // eax
  void *vtable0; // edx
  _DWORD *v9; // eax
  int v10; // eax
  House *v11; // eax
  House *v12; // edi
  int *v13; // eax
  int *v14; // eax
  int v15; // edx
  int v16; // eax
  _DWORD *v17; // eax
  void *v18; // eax
  int *v19; // eax
  int *v20; // eax
  int v21; // eax
  int v22; // edi
  int v23; // eax
  TechnoClass *v24; // ebx
  char deployAnim; // al
  int v26; // edi
  int v28; // eax
  int v30; // eax
  int v32; // eax
  int v34; // eax
  int v36; // eax
  DiskLaserClass *v37; // eax
  DiskLaserClass *v38; // ebx
  int v39; // eax
  TechnoClass *v40; // ecx
  void *v41; // eax
  int WeaponRange; // eax
  int currentMission; // edx
  int v44; // ecx
  TechnoClass *UIObjectCOM; // eax
  TechnoClass *v46; // edi
  bool v47; // zf
  AbstractClass *target; // eax
  int v49; // edi
  int updated; // eax
  int *TargetC... [52811 chars total]


// ==== 0x006FF950  nullsub_45  this=-  sig=ida-proto ====
void __cdecl nullsub_45()
{
  ; /*0x6ff950*/
}



// ==== 0x006FF960  TechnoClass::DrawTargetLine  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::DrawTargetLine(TechnoClass *this)
{
  AbstractClass *target; // eax
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
  Rect v29; // [esp+8Ch] [ebp-10h] BYREF

  target = this->target; /*0x6ff96a*/
  if ( target )
  {
    v3 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, int *, _DWORD))this->RadioClass + 192))(this, v24, 0); /*0x6ff983*/
    v26[0] = *v3; /*0x6ff98b*/
    v26[1] = v3[1]; /*0x6ff992*/
    v26[2] = v3[2]; /*0x6ff9a0*/
    TargetCoords = TechnoClass::GetTargetCoords(this, v24); /*0x6ff9a4*/
    v25[0] = *TargetCoords; /*0x6ff9ab*/
    v25[1] = TargetCoords[1]; /*0x6ff9bd*/
    v25[2] = TargetCoords[2]; /*0x6ff9c9*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, v26, &v12); /*0x6ff9cd*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, v25, &v14); /*0x6ff9e2*/
    v13 += (int)DSurface_ViewBounds.field_4; /*0x6ff9fd*/
    v15 += (int)DSurface_ViewBounds.field_4; /*0x6ffa01*/
    v5 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1
       ? *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 8)
       : *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 16);
    v24[1] = v13 - 2; /*0x6ffa3a*/
    v24[0] = v12 - 2; /*0x6ffa48*/
    v6 = Rect::Construct(&v29, v24, 3, 3); /*0x6ffa4c*/
    v20 = *v6; /*0x6ffa55*/
    v21 = v6[1]; /*0x6ffa5e*/
    v22 = v6[2]; /*0x6ffa65*/
    v23 = v6[3]; /*0x6ffa74*/
    v7 = ClipRectIntersection(v28, &DSurface_ViewBounds.field_0, &v20, 0, 0); /*0x6ffa7e*/
    v16 = *v7; /*0x6ffa86*/
    v17 = v7[1]; /*0x6ffa8d*/
    v18 = v7[2]; /*0x6ffa94*/
    v19 = v7[3]; /*0x6ffaa1*/
    (*(void (__thiscall **)(AudioStream *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6ffaac*/
      g_DSurface_Hidden_2,
      &v16,
      v5);
    v8 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1
       ? *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 8)
       : *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 16);
    v18 = 3; /*0x6ffae7*/
    v17 = v15 - 2; /*0x6ffaf6*/
    v16 = v14 - 2; /*0x6ffb04*/
    v19 = 3; /*0x6ffb08*/
    v9 = ClipRectIntersection(v28, &DSurface_ViewBounds.field_0, &v16, 0, 0); /*0x6ffb0c*/
    v20 = *v9; /*0x6ffb14*/
    v21 = v9[1]; /*0x6ffb1b*/
    v22 = v9[2]; /*0x6ffb22*/
    v23 = v9[3]; /*0x6ffb2f*/
    (*(void (__thiscall **)(AudioStream *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x6ffb3a*/
      g_DSurface_Hidden_2,
      &v20,
      v8);
    v27[1] = (int)DSurface_ViewBounds.field_4; /*0x6ffb4e*/
    v27[0] = DSurface_ViewBounds.field_0; /*0x6ffb56*/
    v27[2] = *(_DWORD *)DSurface_ViewBounds.__pad_8; /*0x6ffb5f*/
    v27[3] = *(_DWORD *)&DSurface_ViewBounds.__pad_8[4]; /*0x6ffb6c*/
    LOBYTE(target) = ClipLine(&v12, &v14, v27); /*0x6ffb70*/
    if ( (_BYTE)target ) /*0x6ffb77*/
    {
      if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x6ffb82*/
        v10 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 8); /*0x6ffb8c*/
      else
        v10 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372) + 16); /*0x6ffb99*/
      LOBYTE(target) = (*(char (__stdcall **)(int *, int *, int, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 /*0x6ffbd2*/
                                                                            + 72))(
                         &v12,
                         &v14,
                         v10,
                         &g_INI_Key_TRUCKA.?[4],
                         7 * *(_DWORD *)&stru_A8EB00.?[416] % 16);
    }
  }
  return (char)target; /*0x6ffbd5*/
}



// ==== 0x006FFBE0  TechnoClass::ExecuteMissionCmd  this=TechnoClass  sig=csp ====
int __thiscall ScriptAction::ExecuteMissionCmd(TechnoClass *this)
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
  _DWORD *v18; // [esp+A0h] [ebp+8h]
  _DWORD *v19; // [esp+A4h] [ebp+Ch]
  _DWORD *v20; // [esp+A8h] [ebp+10h]

  v2 = Render_Draw_731BF0() && (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 304))(this); /*0x6ffc03*/
  v3 = v17; /*0x6ffc09*/
  if ( (v17 == 2 || v17 == 1) && v2 ) /*0x6ffc1c*/
    v3 = 29; /*0x6ffc1e*/
  if ( (unsigned __int8)FactoryClass::GetFlag() ) /*0x6ffc23*/
  {
    ScriptAction::GetWaypointCoords((ScriptAction *)&v9[26], v20); /*0x6ffc3d*/
    ScriptAction::GetWaypointCoords((ScriptAction *)&v9[24], v19); /*0x6ffc4f*/
    ScriptAction::GetWaypointCoords((ScriptAction *)&v9[22], v18); /*0x6ffc61*/
    WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v12, this); /*0x6ffc6c*/
    ScriptAction::InitActionFields( /*0x6ffc8e*/
      v14,
      (int)dword_A83D4C->Object_field_0x30,
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
          (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 215))(this); /*0x6ffcda*/
          break;
        case 1: /*0x6ffcd4*/
          (*((void (__thiscall **)(TechnoClass *, _DWORD *))this->RadioClass + 220))(this, v18); /*0x6ffcef*/
          break;
        case 2: /*0x6ffcd4*/
        case 29: /*0x6ffcd4*/
          (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 218))(this); /*0x6ffd9f*/
          break;
        case 7: /*0x6ffcd4*/
          (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 214))(this); /*0x6ffd15*/
          break;
        case 8: /*0x6ffcd4*/
          (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 217))(this); /*0x6ffd29*/
          break;
        case 16: /*0x6ffcd4*/
          (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 219))(this); /*0x6ffd3a*/
          break;
        default:
          if ( *(int *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1200) > 0 ) /*0x6ffd59*/
          {
            v6 = Random::State(&Randomizer_Global); /*0x6ffd65*/
            v7 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x6ffd6b*/
            v11[0] = this->RadioClass; /*0x6ffd7b*/
            (*(void (__thiscall **)(TechnoClass *, _DWORD))(v11[0] + 852))( /*0x6ffd93*/
              this,
              *(_DWORD *)(*(_DWORD *)(v7 + 1188) + 4 * (v6 % *(_DWORD *)(v7 + 1200))));
          }
          break;
      }
    }
    ScriptAction::GetWaypointCoords((ScriptAction *)v11, v19); /*0x6ffdb1*/
    ScriptAction::GetWaypointCoords((ScriptAction *)v12, v18); /*0x6ffdbb*/
    v8 = ScriptAction::GetWaypointCoords((ScriptAction *)v13, this); /*0x6ffdce*/
    Object_Init(v3, (int)v12, *(_DWORD *)v8, v8[4], (int)v11); /*0x6ffde6*/
    LOBYTE(result) = 1; /*0x6ffdee*/
  }
  return result; /*0x6ffcb0*/
}



// ==== 0x006FFE00  TechnoClass::RecordEvent  this=TechnoClass  sig=csp ====
int __thiscall NetworkClass::RecordEvent(TechnoClass *this)
{
  _BYTE *WaypointCoords; // eax
  int result; // eax
  char *v3; // edi
  _BYTE v4[8]; // [esp+8h] [ebp-78h] BYREF
  char v5[108]; // [esp+10h] [ebp-70h] BYREF
  __int16 v6; // [esp+7Ch] [ebp-4h]
  char v7; // [esp+7Eh] [ebp-2h]
  unsigned __int8 v8; // [esp+84h] [ebp+4h]

  WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v4, this); /*0x6ffe0a*/
  EventClass::Add(v5, (int)dword_A83D4C->Object_field_0x30, v8, *(_DWORD *)WaypointCoords, WaypointCoords[4]); /*0x6ffe34*/
  result = FactoryClass::GetFlag(); /*0x6ffe39*/
  if ( (_BYTE)result ) /*0x6ffe40*/
  {
    result = NetworkClass::ExecutePlanningModeCmd(v5); /*0x6ffe46*/
    LOBYTE(result) = 0; /*0x6ffe4b*/
  }
  else
  {
    if ( (int)stru_A80220.lineTrailer < 128 ) /*0x6ffe5f*/
    {
      v3 = (char *)&byte_A802D4 + 111 * dword_A802D0; /*0x6ffe75*/
      qmemcpy(v3, v5, 0x6Cu); /*0x6ffe7c*/
      v3 += 108; /*0x6ffe7c*/
      *(_WORD *)v3 = v6; /*0x6ffe7e*/
      v3[2] = v7; /*0x6ffe80*/
      dword_A83A54[dword_A802D0] = timeGetTime(); /*0x6ffe8d*/
      dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x6ffe9d*/
      result = (int)++stru_A80220.lineTrailer; /*0x6ffea7*/
    }
    LOBYTE(result) = 1; /*0x6ffeae*/
  }
  return result; /*0x6ffe4d*/
}



// ==== 0x006FFEC0  TechnoClass::HandleCursorClick  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::HandleCursorClick(TechnoClass *this, _BYTE *a2, char a3)
{
  int v5; // ebx
  int v7; // eax
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
  char v25; // [esp+24h] [ebp+4h]
  char v26; // [esp+24h] [ebp+4h]
  char v27; // [esp+24h] [ebp+4h]
  char v28; // [esp+28h] [ebp+8h]

  if ( this->isBerserk /*0x6ffefd*/
    || this->rockerLinkedUnit
    && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1682)
    || !a2 )
  {
    return 0; /*0x6ffefd*/
  }
  if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 117))(this) ) /*0x6fff07*/
  {
    if ( !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 171))(this) /*0x6fff40*/
      || !(unsigned __int8)House::IsHumanPlayer((House *)this->owner)
      || (v5 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 56))(a2),
          v5 == (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 14))(this)) )
    {
      if ( (!this->isALoaner || !this->isOwnedByCurrentPlayer) /*0x6fff70*/
        && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 312))(a2)
        && !a2[131] )
      {
        return 7; /*0x6fff8a*/
      }
    }
    return 0; /*0x6fff78*/
  }
  if ( a2 == (_BYTE *)this && *(_DWORD *)&stru_A8EB00.?[228] == 1 ) /*0x6fff9c*/
  {
    v7 = *((_DWORD *)a2 + 14); /*0x6fff9e*/
    if ( v7 ) /*0x6fffa3*/
    {
      if ( (unsigned __int8)House::IsHumanPlayer(*(House **)(v7 + 40)) ) /*0x6fffa8*/
      {
        if ( BombClass::IsDeathBomb(*((BombClass **)a2 + 14)) == 1 /*0x6fffc2*/
          && *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4053) )
        {
          return 55; /*0x6fffd8*/
        }
        if ( !BombClass::IsDeathBomb(*((BombClass **)a2 + 14)) /*0x6fffed*/
          && *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4052) )
        {
          return 55; /*0x700003*/
        }
      }
    }
  }
  if ( !a3 /*0x70002f*/
    && ((unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[20])
     || (unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[24])) )
  {
    v25 = 1; /*0x700038*/
  }
  else
  {
    v25 = 0; /*0x700041*/
    if ( a3 ) /*0x700046*/
      goto LABEL_32; /*0x700046*/
  }
  if ( (unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[28]) /*0x700069*/
    || (unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[32]) )
  {
    v28 = 1; /*0x700072*/
LABEL_33:
    if ( (unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[36]) /*0x7000a3*/
      || (unsigned __int8)Mouse::IsButtonDown(stru_A8EB00.?[40]) )
    {
      if ( v28 ) /*0x7000b2*/
      {
        v28 = 0; /*0x7000b4*/
      }
      else if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) && !this->isALoaner ) /*0x7000fa*/
      {
        return 8; /*0x700110*/
      }
    }
    goto LABEL_37; /*0x7000b4*/
  }
LABEL_32:
  v28 = 0; /*0x700079*/
  if ( !a3 ) /*0x700080*/
    goto LABEL_33; /*0x700080*/
LABEL_37:
  if ( a2 == (_BYTE *)this && *(_DWORD *)&stru_A8EB00.?[228] == 1 ) /*0x7000c7*/
  {
    if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) ) /*0x7000d3*/
      return 4; /*0x7000e8*/
    if ( *(_DWORD *)&stru_A8EB00.?[228] == 1 && this->owner->playerControl && !*(_DWORD *)&dword_A8B238 && this ) /*0x700136*/
    {
      if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 1 /*0x70015b*/
        && *(int *)(*((_DWORD *)this + 433) + 1504) > 0
        && this->passengers[0] > 0 )
      {
        return 4; /*0x700169*/
      }
      if ( (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 2 && *((_BYTE *)this + 1737) ) /*0x700178*/
        return 4; /*0x70018e*/
    }
  }
  if ( !(unsigned __int8)House::IsHumanPlayer((House *)this->owner) /*0x7001c2*/
    || !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)a2)
    || (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 2
    || !v28 )
  {
    goto LABEL_62; /*0x7001c2*/
  }
  if ( v25 ) /*0x7001ca*/
  {
    if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 40))(this) ) /*0x7001d0*/
      return 26; /*0x7001e6*/
LABEL_62:
    if ( v25 /*0x700204*/
      && (unsigned __int8)House::IsHumanPlayer((House *)this->owner)
      && (*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 40))(this) )
    {
      return 1; /*0x700217*/
    }
  }
  v24 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x70021a*/
  v23 = (*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 185))(this, a2); /*0x700237*/
  if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 124))(a2) ) /*0x700240*/
    goto LABEL_141; /*0x700240*/
  v9 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int))this->RadioClass + 254))(this, v23); /*0x70025b*/
  if ( *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3436) ) /*0x70025d*/
    goto LABEL_76; /*0x700265*/
  if ( (a2[20] & 1) != 0 ) /*0x70026b*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 132))(a2) + 3376) ) /*0x700277*/
      goto LABEL_76; /*0x70027f*/
    if ( (a2[20] & 1) != 0 ) /*0x700285*/
    {
      v10 = *((_DWORD *)a2 + 123); /*0x700287*/
      v11 = *((_DWORD *)a2 + 125); /*0x70028d*/
      if ( v10 == -1 ) /*0x700296*/
        goto LABEL_74; /*0x700296*/
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v10 < v11 ) /*0x7002a2*/
      {
        v11 -= *(_DWORD *)&stru_A8EB00.?[416] - v10; /*0x7002a4*/
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
  if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *, HouseClass *))(*(_DWORD *)a2 + 200))(a2, this->owner) || v12 ) /*0x7002c7*/
  {
    v26 = 0; /*0x7002e2*/
    goto LABEL_82; /*0x7002e2*/
  }
  v26 = 1; /*0x7002cf*/
  if ( (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)a2 + 208))(a2, 1) ) /*0x7002d4*/
  {
LABEL_82:
    v13 = 0; /*0x7002e7*/
    goto LABEL_83; /*0x7002e7*/
  }
  v13 = 1; /*0x7002de*/
LABEL_83:
  v14 = (*((int (__thiscall **)(TechnoClass *, _BYTE *))this->RadioClass + 230))(this, a2); /*0x7002e9*/
  v22 = v14; /*0x7002f8*/
  v21 = !v26 || v13 && v14; /*0x70030f*/
  if ( !v9 /*0x70034d*/
    || !*(_BYTE *)(*(_DWORD *)(v9 + 172) + 343)
    || !(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 132))(a2)
    || (v19 = 1, *(int *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 132))(a2) + 1504) <= 0) )
  {
    v19 = 0; /*0x70034f*/
  }
  v15 = v9 && *(_BYTE *)(*(_DWORD *)(v9 + 172) + 331) && (a2[20] & 4) != 0 && *((_DWORD *)a2 + 421); /*0x700381*/
  if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1728) /*0x7003b9*/
    || *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this) + 1729) && !v19
    || v15 )
  {
    v15 = 1; /*0x7003bb*/
  }
  if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)a2) || (v20 = 0, v15) ) /*0x7003d4*/
    v20 = 1; /*0x7003d6*/
  v16 = v26 && v15; /*0x7003e7*/
  if ( (unsigned __int8)House::IsHumanPlayer((House *)this->owner) /*0x70043e*/
    && (v28
     || v20 && (v21 || v16) && (*(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 136))(a2) + 561) || v22)) )
  {
    v17 = (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 11))(this) == 15 && *(_BYTE *)(v24 + 3774); /*0x70044e*/
    if ( ((*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 171))(this) || v17) /*0x700492*/
      && ((*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 40))(this)
       || (*((unsigned __int8 (__thiscall **)(TechnoClass *, _BYTE *, int))this->RadioClass + 234))(this, a2, v23)) )
    {
      v27 = 0; /*0x7004a2*/
      if ( v17 /*0x700527*/
        && (!*(_BYTE *)(this->airstrikeTimer + 3780)
         && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 44))(a2) == 6
         && *(_BYTE *)(*((_DWORD *)a2 + 328) + 5490)
         || *(_BYTE *)(this->airstrikeTimer + 3780)
         && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 44))(a2) == 6
         && *(_BYTE *)(*((_DWORD *)a2 + 328) + 5494)
         || *(_BYTE *)(this->airstrikeTimer + 3778)
         && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 44))(a2) == 6
         && *(_BYTE *)(*((_DWORD *)a2 + 328) + 5495)) )
      {
        v27 = 1; /*0x700531*/
      }
      if ( (*((int (__thiscall **)(TechnoClass *, _BYTE *, int, int))this->RadioClass + 240))(this, a2, v23, 1) != 5 /*0x70055b*/
        || v27
        || v28 )
      {
        return 5; /*0x700569*/
      }
    }
  }
LABEL_141:
  if ( !(*((unsigned __int8 (__thiscall **)(TechnoClass *))this->RadioClass + 171))(this) /*0x70059b*/
    || !(unsigned __int8)House::IsHumanPlayer((House *)this->owner)
    || (v18 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 56))(a2),
        v18 == (*((int (__thiscall **)(TechnoClass *))this->RadioClass + 14))(this)) )
  {
    if ( (!this->isALoaner || !this->isOwnedByCurrentPlayer) /*0x7005cd*/
      && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 312))(a2)
      && !a2[131]
      && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 468))(a2) )
    {
      return 7; /*0x7005e3*/
    }
  }
  return 0; /*0x6fff7e*/
}


