// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00430010  sub_430010  this=-  sig=ida-proto ====
void sub_430010()
{
  dbl_89C448 = 0.0174532925199433 * 45.0; /*0x43001c*/
}



// ==== 0x00430030  sub_430030  this=-  sig=ida-proto ====
void sub_430030()
{
  dbl_89C3A0 = 0.0174532925199433 * 60.0; /*0x43003c*/
}



// ==== 0x00430050  sub_430050  this=-  sig=ida-proto ====
void sub_430050()
{
  dbl_89C378 = 0.0174532925199433 * 90.0; /*0x43005c*/
}



// ==== 0x00430070  sub_430070  this=-  sig=ida-proto ====
__int64 sub_430070()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89C378 - dbl_89C3A0); /*0x430082*/
  result = Math::RoundToInt(v0 * dbl_89C398 * 0.5); /*0x430096*/
  dword_89C470 = result; /*0x43009b*/
  return result; /*0x4300a0*/
}



// ==== 0x004300B0  sub_4300B0  this=-  sig=ida-proto ====
void sub_4300B0()
{
  dbl_89C3A8 = Math::ArcTan((double)dword_89C470 * 0.00390625); /*0x4300c7*/
}



// ==== 0x004300E0  sub_4300E0  this=-  sig=ida-proto ====
void sub_4300E0()
{
  dbl_89C440 = Math::ArcTan((double)(2 * dword_89C470) / dbl_89C398); /*0x430102*/
}



// ==== 0x00430110  sub_430110  this=-  sig=ida-proto ====
__int64 sub_430110()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C470) + 0.5); /*0x43012b*/
  dword_89C464 = result; /*0x430130*/
  return result; /*0x430136*/
}



// ==== 0x00430140  sub_430140  this=-  sig=ida-proto ====
int sub_430140()
{
  word_89C390 = 0; /*0x430142*/
  word_89C392 = 0; /*0x430148*/
  return 0; /*0x43014e*/
}



// ==== 0x00430150  sub_430150  this=-  sig=ida-proto ====
int sub_430150()
{
  dword_89C430 = 0; /*0x430152*/
  dword_89C434 = 0; /*0x430157*/
  dword_89C438 = 0; /*0x43015c*/
  return 0; /*0x430161*/
}



// ==== 0x00430170  sub_430170  this=-  sig=ida-proto ====
int sub_430170()
{
  dword_89C460 = 0; /*0x430175*/
  dword_89C458 = 128; /*0x43017f*/
  dword_89C45C = 128; /*0x430184*/
  return 128; /*0x430189*/
}



// ==== 0x00430190  sub_430190  this=-  sig=ida-proto ====
int sub_430190()
{
  memset(g_VisibilitySystem, 0, sizeof(g_VisibilitySystem)); /*0x43019d*/
  dword_89C410 = 0; /*0x4301a4*/
  dword_89C42C = 0; /*0x4301a9*/
  return atexit(sub_4301C0); /*0x4301b6*/
}



// ==== 0x004301C0  sub_4301C0  this=-  sig=ida-proto ====
void __cdecl sub_4301C0()
{
  void **v0; // esi
  int v1; // ebx
  int v2; // edi

  if ( dword_89C410 ) /*0x4301c7*/
  {
    v0 = (void **)g_VisibilitySystem; /*0x4301cc*/
    v1 = 8; /*0x4301d1*/
    do /*0x4301f7*/
    {
      v2 = 3; /*0x4301d6*/
      do /*0x4301f4*/
      {
        if ( *v0 ) /*0x4301db*/
        {
          __3_YAXPAX_Z(*v0); /*0x4301e2*/
          *v0 = 0; /*0x4301ea*/
        }
        ++v0; /*0x4301f0*/
        --v2; /*0x4301f3*/
      }
      while ( v2 ); /*0x4301f4*/
      --v1; /*0x4301f6*/
    }
    while ( v1 ); /*0x4301f7*/
    dword_89C410 = 0; /*0x4301fb*/
  }
}



// ==== 0x00430250  ObjectClass::RenderBuildingTag  this=ObjectClass  sig=csp ====
char __thiscall RenderBuildingTag(int this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // eax
  char v8; // al
  wchar_t *v9; // eax
  wchar_t *v10; // esi
  wchar_t *v11; // eax
  wchar_t *v12; // esi
  wchar_t *v13; // eax
  Char *v14; // edi
  int v15; // eax
  _DWORD *v16; // eax
  int v17; // esi
  int v19; // [esp+Ch] [ebp-15Ch] BYREF
  __int16 v20; // [esp+10h] [ebp-158h]
  unsigned __int8 v21; // [esp+12h] [ebp-156h]
  int v22; // [esp+18h] [ebp-150h] BYREF
  int v23; // [esp+1Ch] [ebp-14Ch] BYREF
  int v24[2]; // [esp+20h] [ebp-148h] BYREF
  int v25; // [esp+28h] [ebp-140h] BYREF
  int v26; // [esp+2Ch] [ebp-13Ch]
  int v27; // [esp+30h] [ebp-138h]
  int v28; // [esp+34h] [ebp-134h]
  _DWORD v29[4]; // [esp+38h] [ebp-130h] BYREF
  _DWORD v30[4]; // [esp+48h] [ebp-120h] BYREF
  _DWORD v31[4]; // [esp+58h] [ebp-110h] BYREF
  wchar_t Str[128]; // [esp+68h] [ebp-100h] BYREF

  v19 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] /*0x430283*/
                  + 4 * *(_DWORD *)(*((_DWORD *)stru_A80220.? + *(_DWORD *)(this + 272)) + 90196));
  LOBYTE(v7) = Coord::To_Screen((Coord *)g_TacticalClass_Instance, (_DWORD *)this, v24); /*0x430289*/
  if ( (_BYTE)v7 )
  {
    DrawToSurfaceSHP(
      a2,
      *(_DWORD *)(v19 + 780),
      dword_89C474,
      *(_DWORD *)&stru_A8EB00.?[416] % (g_VisibilitySystem.health / 2)
    + ((*(_BYTE *)(this + 12) & 2) != 0 ? g_VisibilitySystem.health / 2 : 0),
      v24,
      &a3,
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
    v7 = wcslen((const wchar_t *)(this + 14)); /*0x4302ff*/
    if ( v7 ) /*0x430309*/
    {
      v8 = *(_BYTE *)(this + 12); /*0x43030f*/
      qmemcpy(Str, (const void *)(this + 14), sizeof(Str)); /*0x43031e*/
      if ( (v8 & 2) == 0 ) /*0x430320*/
        goto LABEL_11; /*0x430320*/
      if ( stru_A8BB1C.__pad_87[214] ) /*0x430329*/
      {
        if ( timeGetTime() % 0x1F4 < 0xFA ) /*0x430340*/
        {
          v9 = wcsrchr(Str, 0x5Fu); /*0x430349*/
          v10 = v9; /*0x43034e*/
          if ( v9 ) /*0x430355*/
          {
            if ( wcslen(v9) == 1 ) /*0x430363*/
              *v10 = 32; /*0x430365*/
          }
        }
      }
      if ( (*(_BYTE *)(this + 12) & 2) == 0 || !stru_A8BB1C.__pad_87[214] ) /*0x430377*/
      {
LABEL_11:
        v11 = wcsrchr(Str, 0x5Fu); /*0x430380*/
        v12 = v11; /*0x430385*/
        if ( v11 && wcslen(v11) == 1 || (v13 = wcsrchr(Str, 0x20u), (v12 = v13) != 0) && wcslen(v13) == 1 ) /*0x4303bd*/
          *v12 = 0; /*0x4303bf*/
      }
      v14 = (Char *)g_FogOfWarState; /*0x4303c4*/
      v22 = 0; /*0x4303e2*/
      v23 = 0; /*0x4303e6*/
      Text::Layout(g_FogOfWarState, Str, &v22, &v23, 200); /*0x4303ea*/
      v27 = v22 + 8; /*0x43040a*/
      v26 = v24[1] + 32; /*0x430415*/
      v25 = v24[0] - v22 / 2 - 4; /*0x43041d*/
      v28 = v23 + 8; /*0x430428*/
      v15 = Color::ConvertToRGB((Color *)(v19 + 776), (int)&v19); /*0x430433*/
      v20 = *(_WORD *)v15; /*0x43043c*/
      v21 = *(_BYTE *)(v15 + 2); /*0x43044c*/
      v16 = ClipRectIntersection(v31, &v25, &a3, 0, 0); /*0x430459*/
      v29[0] = *v16; /*0x430464*/
      v29[1] = v16[1]; /*0x430473*/
      v29[2] = v16[2]; /*0x43047a*/
      v29[3] = v16[3]; /*0x430498*/
      v17 = ((unsigned __int8)v20 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4304d4*/
          | (HIBYTE(v20) >> g_BitMask_Blue << g_BitMask_Green)
          | (v21 >> g_BitMask_Red << g_BitShift_Blue);
      (*(void (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)a2 + 20))(a2, v29, 0); /*0x4304d6*/
      (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a2 + 88))(a2, v29, v17); /*0x4304e4*/
      Char::Swap(v14, 1); /*0x4304eb*/
      v30[0] = a3; /*0x430505*/
      v30[2] = a5 + a3 - 1; /*0x430514*/
      v30[1] = a4; /*0x430518*/
      v30[3] = a6 + a4 - 1; /*0x430527*/
      TextGroup::SetRect((TextGroup *)v14, v30); /*0x43052b*/
      Property::Set((Property *)v14, v17); /*0x430533*/
      LOBYTE(v7) = Font::Print((int)v14, a2, Str, v25 + 4, v26 + 4, 200, v28, 0, 0, 0); /*0x430568*/
    }
  }
  return v7; /*0x43056e*/
}



// ==== 0x00430580  nullsub_97  this=-  sig=csp ====
void __stdcall nullsub_97(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  ; /*0x430580*/
}



// ==== 0x00430590  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_430590(_DWORD *this, int a2, int a3, int a4, int a5)
{
  char result; // al

  if ( a2 != dword_89C430 || a3 != dword_89C434 || a4 != dword_89C438 ) /*0x4305b6*/
  {
    *this = a2; /*0x4305ba*/
    this->vtable2 = a3; /*0x4305bc*/
    this->vtable3 = a4; /*0x4305bf*/
  }
  result = a5; /*0x4305c2*/
  if ( a5 < 8 ) /*0x4305cb*/
  {
    this->q044 = a5; /*0x4305cd*/
    result = this->nextObject | 1; /*0x4305d6*/
    this->nextObject = result; /*0x4305d8*/
  }
  return result; /*0x4305c6*/
}



// ==== 0x004305E0  ObjectClass::method_4305E0  this=ObjectClass  sig=csp ====
char __thiscall sub_4305E0(_BYTE *this, char a2)
{
  char result; // al

  result = this->vtable4 & 0xFD | (2 * (a2 & 1)); /*0x4305ee*/
  this->vtable4 = result; /*0x4305f0*/
  return result; /*0x4305f3*/
}



// ==== 0x00430600  nullsub_98  this=-  sig=ida-proto ====
void nullsub_98()
{
  ; /*0x430600*/
}



// ==== 0x00430610  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_430610(ObjectClass *this)
{
  LOBYTE(this->?) &= ~1u; /*0x430610*/
}



// ==== 0x00430650  BuildingPlacement::RenderBuildingPlacementShadow  this=BuildingPlacement  sig=csp ====
int __thiscall BuildingPlacement::RenderBuildingPlacementShadow(
        BuildingPlacement *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  char v7; // bl
  int result; // eax
  signed int v10; // edi
  int *v11; // eax
  int v12; // ecx
  int v13; // esi
  int estimatedHealth; // ebp
  int v15; // edi
  int v16; // esi
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // esi
  _DWORD *v21; // eax
  int v22; // ebx
  int v23; // esi
  int v24; // edi
  int v25; // [esp+10h] [ebp-38h] BYREF
  int v26; // [esp+14h] [ebp-34h]
  int v27; // [esp+18h] [ebp-30h] BYREF
  int v28; // [esp+1Ch] [ebp-2Ch]
  int v29; // [esp+20h] [ebp-28h]
  int v30; // [esp+24h] [ebp-24h]
  int v31; // [esp+28h] [ebp-20h] BYREF
  int v32; // [esp+2Ch] [ebp-1Ch]
  int v33; // [esp+30h] [ebp-18h]
  int v34; // [esp+34h] [ebp-14h]
  int v35; // [esp+38h] [ebp-10h]
  int v36; // [esp+3Ch] [ebp-Ch]

  v7 = a7; /*0x430665*/
  result = g_VisibilitySystem.spawnStatus + 1; /*0x43066c*/
  v10 = *(_DWORD *)&stru_A8EB00.?[416] % g_VisibilitySystem.visibilityFlags; /*0x43066f*/
  if ( *(_DWORD *)&stru_A8EB00.?[416] % g_VisibilitySystem.visibilityFlags < g_VisibilitySystem.spawnStatus + 1 /*0x430677*/
    || (_BYTE)a7 )
  {
    v11 = Coord::WorldToScreen((Coord *)&stru_87F5F0.__pad_58[416], &v27, (int *)this->__pad_0, 1); /*0x43068a*/
    v12 = *v11; /*0x43068f*/
    v25 = *v11; /*0x430691*/
    v13 = v11[1]; /*0x430695*/
    v26 = v13; /*0x43069f*/
    if ( v10 < g_VisibilitySystem.spawnStatus && !v7 ) /*0x4306a7*/
    {
      DrawToSurfaceSHP( /*0x4306fa*/
        a2,
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3]
                              + 4 * *(_DWORD *)(*((_DWORD *)stru_A80220.? + *((_DWORD *)this + 68)) + 90196))
                  + 780),
        dword_89C478,
        v10,
        &v25,
        &a3,
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
      v12 = v25; /*0x4306ff*/
      v13 = v26; /*0x430703*/
    }
    estimatedHealth = g_VisibilitySystem.estimatedHealth; /*0x430707*/
    v15 = *(_DWORD *)&g_VisibilitySystem.isOnMap; /*0x43070d*/
    v35 = v12 - g_VisibilitySystem.estimatedHealth / 2; /*0x430729*/
    v16 = v13 - *(_DWORD *)&g_VisibilitySystem.isOnMap / 2; /*0x43072f*/
    v17 = v35 + *(_DWORD *)&stru_87F5F0.__pad_E12[2178]; /*0x430736*/
    v18 = v16 + *(_DWORD *)&stru_87F5F0.__pad_E12[2182]; /*0x43073e*/
    v36 = v16; /*0x430740*/
    if ( *(int *)&stru_87F5F0.__pad_E12[1530] <= 0 || *(int *)&stru_87F5F0.__pad_E12[1534] <= 0 ) /*0x430754*/
    {
      v31 = v35 + *(_DWORD *)&stru_87F5F0.__pad_E12[2178]; /*0x430819*/
      v32 = v16 + *(_DWORD *)&stru_87F5F0.__pad_E12[2182]; /*0x43081d*/
      v33 = g_VisibilitySystem.estimatedHealth; /*0x430821*/
      v34 = *(_DWORD *)&g_VisibilitySystem.isOnMap; /*0x430825*/
    }
    else if ( g_VisibilitySystem.estimatedHealth <= 0 || *(int *)&g_VisibilitySystem.isOnMap <= 0 ) /*0x430764*/
    {
      v31 = *(_DWORD *)&stru_87F5F0.__pad_E12[1522]; /*0x430807*/
      v32 = *(_DWORD *)&stru_87F5F0.__pad_E12[1526]; /*0x43080b*/
      v33 = *(_DWORD *)&stru_87F5F0.__pad_E12[1530]; /*0x43080f*/
      v34 = *(_DWORD *)&stru_87F5F0.__pad_E12[1534]; /*0x430813*/
    }
    else
    {
      v19 = *(_DWORD *)&stru_87F5F0.__pad_E12[1522]; /*0x43076a*/
      v29 = *(_DWORD *)&stru_87F5F0.__pad_E12[1530]; /*0x430776*/
      v28 = *(_DWORD *)&stru_87F5F0.__pad_E12[1526]; /*0x430782*/
      v30 = *(_DWORD *)&stru_87F5F0.__pad_E12[1534]; /*0x430786*/
      if ( *(int *)&stru_87F5F0.__pad_E12[1522] > v17 ) /*0x43078a*/
      {
        v19 = v35 + *(_DWORD *)&stru_87F5F0.__pad_E12[2178]; /*0x430794*/
        v29 += *(_DWORD *)&stru_87F5F0.__pad_E12[1522] - v17; /*0x430796*/
      }
      if ( *(int *)&stru_87F5F0.__pad_E12[1526] > v18 ) /*0x43079c*/
      {
        v28 = v16 + *(_DWORD *)&stru_87F5F0.__pad_E12[2182]; /*0x4307a6*/
        v30 += *(_DWORD *)&stru_87F5F0.__pad_E12[1526] - v18; /*0x4307aa*/
      }
      if ( v19 + v29 < v17 + g_VisibilitySystem.estimatedHealth ) /*0x4307b9*/
        v29 = v17 - v19 + g_VisibilitySystem.estimatedHealth + 1; /*0x4307c1*/
      v20 = v30; /*0x4307c5*/
      if ( v30 + v28 < v18 + *(_DWORD *)&g_VisibilitySystem.isOnMap ) /*0x4307d4*/
        v20 = v18 - v28 + *(_DWORD *)&g_VisibilitySystem.isOnMap + 1; /*0x4307da*/
      v31 = v19; /*0x4307e2*/
      v34 = v20; /*0x4307ea*/
      v16 = v36; /*0x4307ee*/
      v32 = v28; /*0x4307f2*/
      v33 = v29; /*0x4307f6*/
    }
    v21 = ClipRectIntersection(&v27, &v31, (int *)&stru_87F5F0.__pad_E12[2178], 0, 0); /*0x43083a*/
    v22 = v16; /*0x430841*/
    *(_DWORD *)&stru_87F5F0.__pad_E12[1522] = *v21; /*0x430843*/
    *(_DWORD *)&stru_87F5F0.__pad_E12[1526] = v21[1]; /*0x43084c*/
    *(_DWORD *)&stru_87F5F0.__pad_E12[1530] = v21[2]; /*0x430855*/
    *(_DWORD *)&stru_87F5F0.__pad_E12[1534] = v21[3]; /*0x43085e*/
    result = v16 + v15; /*0x430863*/
    a7 = v16 + v15; /*0x430868*/
    if ( v16 < v16 + v15 ) /*0x43086c*/
    {
      v23 = v35; /*0x43086e*/
      v24 = v35 + estimatedHealth; /*0x430872*/
      do /*0x4308a4*/
      {
        if ( v23 < v24 ) /*0x43087b*/
        {
          do /*0x430897*/
          {
            v27 = v23; /*0x430881*/
            v28 = v22; /*0x43088b*/
            FogOfWar::RevealCell((int)&stru_87F5F0.__pad_58[416], &v27); /*0x43088f*/
            ++v23; /*0x430894*/
          }
          while ( v23 < v24 ); /*0x430897*/
          v23 = v35; /*0x430899*/
          result = a7; /*0x43089d*/
        }
        ++v22; /*0x4308a1*/
      }
      while ( v22 < result ); /*0x4308a4*/
    }
  }
  return result; /*0x4308a6*/
}



// ==== 0x00430980  Game::initScenario  this=Game  sig=csp ====
void __thiscall Game::initScenario(Game *this)
{
  Game *v2; // esi
  int v3; // ebx
  int v4; // edi

  if ( *(_DWORD *)&this->__pad_44[28] ) /*0x430983*/
  {
    v2 = this; /*0x43098d*/
    v3 = 8; /*0x43098f*/
    do /*0x4309b5*/
    {
      v4 = 3; /*0x430994*/
      do /*0x4309b2*/
      {
        if ( *(_DWORD *)v2->__pad_0 ) /*0x430999*/
        {
          __3_YAXPAX_Z(*(void **)v2->__pad_0); /*0x4309a0*/
          *(_DWORD *)v2->__pad_0 = 0; /*0x4309a8*/
        }
        v2 = (Game *)((char *)v2 + 4); /*0x4309ae*/
        --v4; /*0x4309b1*/
      }
      while ( v4 ); /*0x4309b2*/
      --v3; /*0x4309b4*/
    }
    while ( v3 ); /*0x4309b5*/
    *(_DWORD *)&this->__pad_44[28] = 0; /*0x4309b9*/
  }
}



// ==== 0x004309D0  CCFileClass::Create  this=CCFileClass  sig=csp ====
void __thiscall CCFileClass::Create(CCFileClass *this)
{
  __int16 *EntireFile; // eax
  __int16 *v3; // eax
  int v4; // eax
  RawFileClass v5; // [esp+4h] [ebp-48h] BYREF
  RawFileClass v6; // [esp+28h] [ebp-24h] BYREF

  RawFileClass::Construct(&v6, (int)aPbeaconShp); /*0x4309df*/
  EntireFile = (__int16 *)CCFileClass::ReadEntireFile((CCFileClass *)&v6); /*0x4309e8*/
  dword_89C474 = (int)EntireFile; /*0x4309ef*/
  if ( EntireFile || (EntireFile = (__int16 *)SearchMIXFile(aPbeaconShp, 0), (dword_89C474 = (int)EntireFile) != 0) ) /*0x430a09*/
  {
    this->tail_19 = EntireFile[1]; /*0x430a0f*/
    *((_DWORD *)this + 26) = *(__int16 *)(dword_89C474 + 4); /*0x430a1c*/
    *((_DWORD *)this + 27) = *(__int16 *)(dword_89C474 + 6); /*0x430a28*/
  }
  else
  {
    Debug::Log(); /*0x430a32*/
  }
  RawFileClass::Construct(&v5, (int)aRdrbeacnShp); /*0x430a43*/
  v3 = (__int16 *)CCFileClass::ReadEntireFile((CCFileClass *)&v5); /*0x430a4c*/
  dword_89C478 = (int)v3; /*0x430a53*/
  if ( v3 || (v3 = (__int16 *)SearchMIXFile(aRdrbeacnShp, 0), (dword_89C478 = (int)v3) != 0) ) /*0x430a6d*/
  {
    this->BufferDirty = v3[1]; /*0x430a73*/
    this->BufferReadPending = *(__int16 *)(dword_89C478 + 4); /*0x430a7f*/
    v4 = *(__int16 *)(dword_89C478 + 6); /*0x430a88*/
    this->BufferWritePending = v4; /*0x430a8c*/
    this->FlushOnClose = 4 * v4; /*0x430a92*/
  }
  else
  {
    Debug::Log(); /*0x430a9c*/
  }
  RawFileClass::Dtor(&v5); /*0x430aa8*/
  RawFileClass::Dtor(&v6); /*0x430ab1*/
}



// ==== 0x00430AC0  ObjectClass::RenderAlliedBuildingTags  this=ObjectClass  sig=csp ====
int __thiscall RenderAlliedBuildingTags(ObjectClass *this, int a2, int a3, int a4, int a5, int a6)
{
  int result; // eax
  ObjectClass *v7; // edi
  int vtable0; // esi
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  result = this->customSound_controller[4]; /*0x430ac0*/
  if ( result ) /*0x430acc*/
  {
    v7 = this; /*0x430ada*/
    v10 = 8; /*0x430adc*/
    do /*0x430b84*/
    {
      v9 = 3; /*0x430ae4*/
      do /*0x430b75*/
      {
        vtable0 = (int)v7->AbstractClass; /*0x430aec*/
        if ( v7->AbstractClass /*0x430b3b*/
          && (*(_BYTE *)(vtable0 + 12) & 1) != 0
          && (unsigned __int8)HouseClass::IsAllied((HouseClass *)dword_A83D4C, *(_DWORD *)(vtable0 + 272))
          && (unsigned __int8)HouseClass::IsAlliedWith(
                                *((#375 **)stru_A80220.? + *(_DWORD *)(vtable0 + 272)),
                                (#375 *)dword_A83D4C)
          && !*(_BYTE *)(*((_DWORD *)stru_A80220.? + *(_DWORD *)(vtable0 + 272)) + 501) )
        {
          RenderBuildingTag(vtable0, a2, a3, a4, a5, a6); /*0x430b64*/
        }
        v7 = (ObjectClass *)((char *)v7 + 4); /*0x430b6d*/
        --v9; /*0x430b71*/
      }
      while ( v9 ); /*0x430b75*/
      result = --v10; /*0x430b7f*/
    }
    while ( v10 ); /*0x430b84*/
  }
  return result; /*0x430b8a*/
}



// ==== 0x00430BA0  ObjectClass::PlacePlayerBeacon  this=ObjectClass  sig=csp ====
void __thiscall PlacePlayerBeacon(ObjectClass *this, int a2, int a3, int a4, int a5, int a6)
{
  char *v7; // edi
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // eax
  int *v11; // esi
  int v12; // eax
  _DWORD *i; // ecx
  char v14; // al
  wchar_t *StringCSF; // eax
  wchar_t *v16; // eax
  int v17; // esi
  int v18; // ecx
  void **v19; // edi
  int v20; // [esp-10h] [ebp-1F0h]
  int v21; // [esp-10h] [ebp-1F0h]
  int v22; // [esp+10h] [ebp-1D0h]
  int v24; // [esp+18h] [ebp-1C8h] BYREF
  char v25[43]; // [esp+1Ch] [ebp-1C4h] BYREF
  int v26; // [esp+47h] [ebp-199h]
  int v27; // [esp+4Bh] [ebp-195h]
  int v28; // [esp+4Fh] [ebp-191h]
  char v29; // [esp+53h] [ebp-18Dh]
  char j; // [esp+54h] [ebp-18Ch]

  v7 = (char *)this + 12 * a2; /*0x430bba*/
  v8 = 0; /*0x430bbe*/
  v9 = v7; /*0x430bc4*/
  while ( *v9 ) /*0x430bc9*/
  {
    ++v8; /*0x430bcb*/
    ++v9; /*0x430bcc*/
    if ( v8 >= 3 ) /*0x430bd2*/
    {
      if ( a6 == -1 ) /*0x430bdc*/
        return; /*0x430bdc*/
      break; /*0x430bdc*/
    }
  }
  v10 = __2_YAPAXI_Z(0x114u); /*0x430be2*/
  if ( v10 ) /*0x430bf3*/
  {
    v11 = (int *)v10; /*0x430bff*/
    *(_DWORD *)v10 = *(_DWORD *)&g_VisibilitySystem.needsRedraw; /*0x430c01*/
    *(_DWORD *)(v10 + 4) = *(_DWORD *)&g_VisibilitySystem.hasParachute; /*0x430c08*/
    *(_DWORD *)(v10 + 8) = g_VisibilitySystem.parachute; /*0x430c10*/
    *(_BYTE *)(v10 + 12) &= 0xFCu; /*0x430c1d*/
    memset((void *)(v10 + 14), 0, 0x100u); /*0x430c22*/
  }
  else
  {
    v11 = 0; /*0x430c2a*/
  }
  if ( a6 == -1 ) /*0x430c36*/
  {
    v12 = 0; /*0x430c3c*/
    for ( i = v7; *i; ++i ) /*0x430c3e*/
    {
      if ( ++v12 >= 3 ) /*0x430c4c*/
      {
        __3_YAXPAX_Z(v11); /*0x430c4f*/
        return; /*0x430c61*/
      }
    }
    LOBYTE(a6) = v12; /*0x430c6b*/
    *((_DWORD *)&this->AbstractClass + 2 * a2 + v12 + a2) = v11; /*0x430c72*/
  }
  else
  {
    v18 = a6 + 2 * a2 + a2; /*0x430e62*/
    v19 = &this->AbstractClass + v18; /*0x430e6a*/
    if ( *v19 ) /*0x430e64*/
    {
      __3_YAXPAX_Z(*(&this->AbstractClass + v18)); /*0x430e71*/
      --this->customSound_controller[4]; /*0x430e7d*/
    }
    *v19 = v11; /*0x430e80*/
  }
  if ( a3 != *(_DWORD *)&g_VisibilitySystem.needsRedraw /*0x430ca3*/
    || a4 != *(_DWORD *)&g_VisibilitySystem.hasParachute
    || (AnimClass *)a5 != g_VisibilitySystem.parachute )
  {
    *v11 = a3; /*0x430cae*/
    v11[1] = a4; /*0x430cb0*/
    v11[2] = a5; /*0x430cb3*/
  }
  if ( a2 < 8 ) /*0x430cb9*/
  {
    v14 = *((_BYTE *)v11 + 12); /*0x430cbb*/
    v11[68] = a2; /*0x430cbe*/
    *((_BYTE *)v11 + 12) = v14 | 1; /*0x430cc6*/
  }
  ++this->customSound_controller[4]; /*0x430cd1*/
  if ( *(_DWORD *)&dword_A8B238 && *(_DWORD *)&dword_A8B238 != 5 ) /*0x430ce4*/
  {
    if ( (void *)a2 == dword_A83D4C->Object_field_0x30 ) /*0x430cf3*/
    {
      v20 = *(_DWORD *)&dword_A83D4C[134].__pad_90[4]; /*0x430d0b*/
      StringCSF = GetStringCSF(&aTxtBeaconHelp1, 0, "D:\\ra2mdpost\\Beacon.CPP", 811); /*0x430d1d*/
      MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, StringCSF, v20, 16454, 225, 0); /*0x430d2c*/
      v21 = *(_DWORD *)&dword_A83D4C[134].__pad_90[4]; /*0x430d4a*/
      v16 = GetStringCSF((wchar_t *)stru_818A68.Priority, 0, "D:\\ra2mdpost\\Beacon.CPP", 812); /*0x430d5a*/
      MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, v16, v21, 16454, 225, 0); /*0x430d69*/
      VoxClass::FindAndPlay((VoxClass *)&stru_818A68.YuriVoice[8], -1); /*0x430d78*/
      PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 460), 0x2000, 1.0, 0); /*0x430d94*/
      v24 = 32; /*0x430d9f*/
      strcpy(v25, ToWideStringChar((char *)*dword_A8DA78)); /*0x430dcf*/
      v29 = a6; /*0x430de6*/
      v17 = 1; /*0x430def*/
      v26 = a3; /*0x430df6*/
      v27 = a4; /*0x430dfa*/
      v28 = a5; /*0x430dfe*/
      for ( j = a2; v17 < dword_A8DA84; ++v17 ) /*0x430e06*/
      {
        Debug::Log(); /*0x430e1b*/
        Network::SendMessage(&unk_A8E9C0.Socket, (int)&v24, 61, 1, dword_A8DA78[v17] + 40, 0, 0); /*0x430e41*/
      }
    }
    else if ( (v11[3] & 1) != 0 ) /*0x430e8b*/
    {
      if ( (unsigned __int8)HouseClass::IsAllied((HouseClass *)dword_A83D4C, v11[68]) ) /*0x430e98*/
      {
        if ( (unsigned __int8)HouseClass::IsAlliedWith(*((#375 **)stru_A80220.? + v11[68]), (#375 *)dword_A83D4C) ) /*0x430eb6*/
        {
          if ( !*(_BYTE *)(*((_DWORD *)stru_A80220.? + v11[68]) + 501) ) /*0x430ece*/
          {
            LOWORD(v22) = a3 / 256; /*0x430ee6*/
            HIWORD(v22) = a4 / 256; /*0x430ef9*/
            if ( (unsigned __int8)CreateTriggerClassIfFarEnough(11, (unsigned __int8)(a4 >> 31), v22) ) /*0x430f08*/
              VoxClass::FindAndPlay(&stru_818A68, -1); /*0x430f1b*/
          }
        }
      }
    }
  }
}



// ==== 0x00430F30  MapClass::isCellAccessible  this=MapClass  sig=csp ====
char __thiscall sub_430F30(char *this, int a2)
{
  int v2; // eax
  char *i; // ecx

  v2 = 0; /*0x430f34*/
  for ( i = this + 12 * a2; *(_DWORD *)i; i += 4 ) /*0x430f39*/
  {
    if ( ++v2 >= 3 ) /*0x430f48*/
      return 0; /*0x430f4c*/
  }
  return 1; /*0x430f4c*/
}



// ==== 0x00430F60  sub_430F60  this=-  sig=csp ====
_DWORD *__stdcall sub_430F60(_DWORD *a1)
{
  *a1 = 0; /*0x430f68*/
  a1[1] = 0; /*0x430f6a*/
  return a1; /*0x430f6d*/
}



// ==== 0x00430F70  PlayerClass::FindNearestWaypoint  this=PlayerClass  sig=csp ====
char __thiscall PlayerClass::FindNearestWaypoint(PlayerClass *this, int a2, int a3, int a4)
{
  double v4; // st7
  PlayerClass *p_PlayerClass_field_0x0C; // edi
  int v6; // esi
  _DWORD *v7; // eax
  int v8; // eax
  bool v9; // sf
  bool v10; // of
  int v12; // esi
  double v13; // [esp+0h] [ebp-30h]
  MapClass *v14; // [esp+8h] [ebp-28h]
  int v15; // [esp+18h] [ebp-18h]
  PlayerClass *v16; // [esp+1Ch] [ebp-14h]
  int v18; // [esp+24h] [ebp-Ch]
  int v19; // [esp+28h] [ebp-8h]
  int v20; // [esp+2Ch] [ebp-4h]

  if ( !this->q018 ) /*0x430f79*/
    return 0; /*0x431026*/
  p_PlayerClass_field_0x0C = this; /*0x430f8b*/
  v15 = 0; /*0x430f8d*/
  v16 = this; /*0x430f95*/
LABEL_3:
  v6 = 0; /*0x430f99*/
  while ( 1 ) /*0x430f9b*/
  {
    v7 = *(_DWORD **)p_PlayerClass_field_0x0C->__pad_0; /*0x430f9b*/
    if ( *(_DWORD *)p_PlayerClass_field_0x0C->__pad_0 ) /*0x430f9b*/
    {
      v19 = a3 - v7[1]; /*0x430fb6*/
      __asm { fild [esp+28h+var_8] } /*0x430fbc*/
      v20 = a4 - v7[2]; /*0x430fc0*/
      v18 = a2 - *v7; /*0x430fc4*/
      __asm /*0x430fc8*/
      {
        fild [esp+28h+var_4]
        fild [esp+28h+var_C]
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
        fstp [esp+30h+var_30]; double
        fstp st
        fstp st
        fstp st
      }
      Math::Sqrt(v13); /*0x430fec*/
      LOWORD(v8) = Math::RoundToInt(v4); /*0x430ff4*/
      if ( v8 < 128 ) /*0x430ffe*/
        break; /*0x430ffe*/
    }
    ++v6; /*0x431000*/
    p_PlayerClass_field_0x0C = (PlayerClass *)((char *)p_PlayerClass_field_0x0C + 4); /*0x431001*/
    if ( v6 >= 3 ) /*0x431007*/
    {
      p_PlayerClass_field_0x0C = (PlayerClass *)&v16->PlayerClass_field_0x0C; /*0x431012*/
      v10 = __OFSUB__(v15 + 1, 8); /*0x431015*/
      v9 = v15 - 7 < 0; /*0x431015*/
      ++v15; /*0x431018*/
      v16 = (PlayerClass *)((char *)v16 + 12); /*0x43101c*/
      if ( v9 != v10 ) /*0x431020*/
        goto LABEL_3; /*0x431020*/
      return 0; /*0x431020*/
    }
  }
  v12 = *(_DWORD *)&this->__pad_0[8 * v15 + 4 * v6 + 4 * v15]; /*0x43103e*/
  if ( !v12 ) /*0x431043*/
    return 0; /*0x431043*/
  MapClass::UnselectAll_ClearLimboLaunchers(v14); /*0x431045*/
  *(_BYTE *)(v12 + 12) |= 2u; /*0x431050*/
  return 1; /*0x431028*/
}



// ==== 0x00431090  Radar::FindNearestRadarTarget  this=Radar  sig=csp ====
int __thiscall Radar::FindNearestRadarTarget(Radar *this, int a2, int a3, int a4)
{
  double v4; // st7
  Radar *p_Radar_field_0xC; // edi
  int i; // esi
  _DWORD *v7; // eax
  int v8; // eax
  bool v9; // sf
  bool v10; // of
  double v12; // [esp+0h] [ebp-30h]
  int v13; // [esp+18h] [ebp-18h]
  Radar *v14; // [esp+1Ch] [ebp-14h]
  int v16; // [esp+24h] [ebp-Ch]
  int v17; // [esp+28h] [ebp-8h]
  int v18; // [esp+2Ch] [ebp-4h]

  if ( this->Radar_field_0x60 ) /*0x431099*/
  {
    p_Radar_field_0xC = this; /*0x4310ab*/
    v13 = 0; /*0x4310ad*/
    v14 = this; /*0x4310b5*/
    while ( 2 ) /*0x4310b9*/
    {
      for ( i = 0; i < 3; ++i ) /*0x4310b9*/
      {
        v7 = *(_DWORD **)p_Radar_field_0xC->__pad_0; /*0x4310bb*/
        if ( *(_DWORD *)p_Radar_field_0xC->__pad_0 ) /*0x4310bb*/
        {
          v17 = a3 - v7[1]; /*0x4310d6*/
          __asm { fild [esp+28h+var_8] } /*0x4310dc*/
          v18 = a4 - v7[2]; /*0x4310e0*/
          v16 = a2 - *v7; /*0x4310e4*/
          __asm /*0x4310e8*/
          {
            fild [esp+28h+var_4]
            fild [esp+28h+var_C]
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
            fstp [esp+30h+var_30]; double
            fstp st
            fstp st
            fstp st
          }
          Math::Sqrt(v12); /*0x43110c*/
          LOWORD(v8) = Math::RoundToInt(v4); /*0x431114*/
          if ( v8 < 128 ) /*0x43111e*/
            return *(_DWORD *)&this->__pad_0[8 * v13 + 4 * i + 4 * v13]; /*0x431161*/
        }
        p_Radar_field_0xC = (Radar *)((char *)p_Radar_field_0xC + 4); /*0x431121*/
      }
      p_Radar_field_0xC = (Radar *)&v14->Radar_field_0xC; /*0x431132*/
      v10 = __OFSUB__(v13 + 1, 8); /*0x431135*/
      v9 = v13 - 7 < 0; /*0x431135*/
      ++v13; /*0x431138*/
      v14 = (Radar *)((char *)v14 + 12); /*0x43113c*/
      if ( v9 != v10 ) /*0x431140*/
        continue; /*0x431140*/
      break;
    }
  }
  return 0; /*0x431148*/
}



// ==== 0x00431170  BufferIO::FindActiveChannel  this=BufferIO  sig=csp ====
int __thiscall BufferIO::FindActiveChannel(BufferIO *this, int a2)
{
  int v2; // ebp
  BufferIO *v3; // esi
  int v4; // edx
  int *v5; // ecx
  int result; // eax

  if ( !*((_DWORD *)this + 24) ) /*0x431170*/
    return 0; /*0x4311b3*/
  v2 = 0; /*0x43117f*/
  v3 = this; /*0x431181*/
LABEL_3:
  v4 = 0; /*0x431185*/
  v5 = (int *)v3; /*0x431187*/
  while ( 1 ) /*0x431189*/
  {
    result = *v5; /*0x431189*/
    if ( *v5 ) /*0x431189*/
    {
      if ( (*(_BYTE *)(result + 12) & 2) != 0 && (a2 == -1 || a2 == *(_DWORD *)(result + 272)) ) /*0x43119f*/
        return result; /*0x4311b5*/
    }
    ++v4; /*0x4311a1*/
    ++v5; /*0x4311a2*/
    if ( v4 >= 3 ) /*0x4311a8*/
    {
      ++v2; /*0x4311aa*/
      ++v3; /*0x4311ab*/
      if ( v2 < 8 ) /*0x4311b1*/
        goto LABEL_3; /*0x4311b1*/
      return 0; /*0x4311b1*/
    }
  }
}



// ==== 0x004311C0  Network::SendBeaconDelete  this=Network  sig=csp ====
int __thiscall Network::SendBeaconDelete(Network *this, int a2, int a3)
{
  int result; // eax
  int v5; // edi
  Network *v6; // esi
  int v7; // edx
  int *p_Network_field_0x0; // ecx
  int v9; // esi
  int *v10; // eax
  int v11; // ebx
  int v12; // esi
  char v13; // [esp+13h] [ebp-1DDh]
  int v14; // [esp+14h] [ebp-1DCh]
  int v15[4]; // [esp+18h] [ebp-1D8h] BYREF
  int v16; // [esp+28h] [ebp-1C8h] BYREF
  char v17[452]; // [esp+2Ch] [ebp-1C4h] BYREF

  result = (int)this->Network_field_0x60; /*0x4311cc*/
  if ( result ) /*0x4311d1*/
  {
    if ( a2 == -1 && a3 == -1 ) /*0x4311ed*/
    {
      v13 = 1; /*0x4311ef*/
      v5 = 0; /*0x4311f4*/
      v6 = this; /*0x4311f6*/
LABEL_5:
      v7 = 0; /*0x4311fa*/
      p_Network_field_0x0 = &v6->Network_field_0x0; /*0x4311fc*/
      while ( 1 ) /*0x4311fe*/
      {
        result = *p_Network_field_0x0; /*0x4311fe*/
        if ( *p_Network_field_0x0 ) /*0x4311fe*/
        {
          if ( (*(_BYTE *)(result + 12) & 2) != 0 ) /*0x431207*/
            break; /*0x431207*/
        }
        ++v7; /*0x431209*/
        ++p_Network_field_0x0; /*0x43120a*/
        if ( v7 >= 3 ) /*0x431210*/
        {
          ++v5; /*0x431212*/
          v6 = (Network *)((char *)v6 + 12); /*0x431213*/
          if ( v5 >= 8 ) /*0x431219*/
            return result; /*0x431219*/
          goto LABEL_5; /*0x431219*/
        }
      }
      v9 = *p_Network_field_0x0; /*0x431265*/
    }
    else
    {
      v13 = 0; /*0x431224*/
      result = a3 + 2 * a2 + a2; /*0x431229*/
      v9 = *(&this->Network_field_0x0 + result); /*0x43122b*/
    }
    if ( v9 ) /*0x431231*/
    {
      result = *(_DWORD *)(v9 + 272); /*0x43123d*/
      v14 = result; /*0x431243*/
      if ( (void *)result == dword_A83D4C->Object_field_0x30 || !v13 ) /*0x431252*/
      {
        if ( (*(_BYTE *)(v9 + 12) & 1) != 0 /*0x4312a6*/
          && (unsigned __int8)HouseClass::IsAllied((HouseClass *)dword_A83D4C, result)
          && (unsigned __int8)HouseClass::IsAlliedWith(
                                *((#375 **)stru_A80220.? + *(_DWORD *)(v9 + 272)),
                                (#375 *)dword_A83D4C)
          && !*(_BYTE *)(*((_DWORD *)stru_A80220.? + *(_DWORD *)(v9 + 272)) + 501) )
        {
          v10 = (int *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)&stru_87F5F0.__pad_E12[1538] + 120))( /*0x4312bf*/
                         *(_DWORD *)&stru_87F5F0.__pad_E12[1538],
                         v15);
          BuildingPlacement::RenderBuildingPlacementShadow( /*0x4312e6*/
            (BuildingPlacement *)v9,
            *(int *)&stru_87F5F0.__pad_E12[1538],
            *v10,
            v10[1],
            v10[2],
            v10[3],
            1);
        }
        __3_YAXPAX_Z((void *)v9); /*0x4312ec*/
        v11 = 0; /*0x4312f8*/
        result = (int)this + 12 * v14; /*0x4312fd*/
        while ( v9 != *(_DWORD *)result ) /*0x431303*/
        {
          ++v11; /*0x431305*/
          result += 4; /*0x431306*/
          if ( v11 >= 3 ) /*0x43130c*/
            return result; /*0x43130c*/
        }
        *(&this->Network_field_0x0 + 2 * v14 + v11 + v14) = 0; /*0x431322*/
        --this->Network_field_0x60; /*0x43132e*/
        result = *(_DWORD *)&dword_A8B238; /*0x431331*/
        if ( *(_DWORD *)&dword_A8B238 ) /*0x431338*/
        {
          if ( *(_DWORD *)&dword_A8B238 != 5 ) /*0x431341*/
          {
            result = (int)dword_A83D4C; /*0x431347*/
            if ( (void *)v14 == dword_A83D4C->Object_field_0x30 ) /*0x43134f*/
            {
              LOBYTE(result) = v13; /*0x431355*/
              if ( v13 ) /*0x43135b*/
              {
                v16 = 33; /*0x431367*/
                strcpy(v17, ToWideStringChar((char *)*dword_A8DA78)); /*0x431390*/
                result = dword_A8DA84; /*0x431394*/
                v12 = 1; /*0x4313a2*/
                v17[56] = v14; /*0x4313a9*/
                for ( v17[55] = v11; v12 < dword_A8DA84; ++v12 ) /*0x4313b1*/
                {
                  Debug::Log(); /*0x4313c2*/
                  Network::SendMessage(&unk_A8E9C0.Socket, (int)&v16, 61, 1, dword_A8DA78[v12] + 40, 0, 0); /*0x4313e9*/
                  result = dword_A8DA84; /*0x4313ee*/
                }
              }
            }
          }
        }
      }
      else
      {
        *(_BYTE *)(v9 + 12) &= 0xFCu; /*0x431254*/
      }
    }
  }
  return result; /*0x431258*/
}



// ==== 0x00431410  HouseClass::createStartingUnits  this=HouseClass  sig=csp ====
int __thiscall HouseClass::createStartingUnits(HouseClass *this, int a2)
{
  int result; // eax
  int v4; // esi
  void **v5; // edi

  result = this->grindersCount; /*0x431413*/
  if ( result ) /*0x431418*/
  {
    result = 3 * a2; /*0x431421*/
    v4 = 0; /*0x431424*/
    v5 = &this->AbstractClass + 3 * a2; /*0x431426*/
    do /*0x43143f*/
    {
      if ( *v5 ) /*0x43142a*/
        result = Network::SendBeaconDelete((Network *)this, a2, v4); /*0x431433*/
      ++v4; /*0x431438*/
      ++v5; /*0x431439*/
    }
    while ( v4 < 3 ); /*0x43143f*/
  }
  return result; /*0x431444*/
}



// ==== 0x00431450  Network::SendBeacon  this=Network  sig=csp ====
int __thiscall Network::SendBeacon(Network *this, wchar_t *Source, int a3, int a4, char a5)
{
  int result; // eax
  int v6; // edi
  Network *v7; // esi
  int v8; // edx
  int *p_Network_field_0x0; // ecx
  int v10; // ebp
  char *v11; // eax
  char v12; // dl
  char Object_field_0x30; // cl
  int *v14; // ecx
  int i; // esi
  int v16; // ecx
  char v17; // [esp+13h] [ebp-1D9h]
  int v19; // [esp+14h] [ebp-1D8h]
  int v20; // [esp+24h] [ebp-1C8h] BYREF
  char v21[43]; // [esp+28h] [ebp-1C4h] BYREF
  char v22; // [esp+53h] [ebp-199h]
  char v23; // [esp+54h] [ebp-198h]
  wchar_t Destination[203]; // [esp+55h] [ebp-197h] BYREF

  if ( a3 == -1 && a4 == -1 ) /*0x431474*/
  {
    result = (int)this->Network_field_0x60; /*0x431476*/
    v17 = 1; /*0x431479*/
    if ( !result ) /*0x431480*/
      return result; /*0x431480*/
    v6 = 0; /*0x431486*/
    v7 = this; /*0x431488*/
LABEL_5:
    v8 = 0; /*0x43148c*/
    p_Network_field_0x0 = &v7->Network_field_0x0; /*0x43148e*/
    while ( 1 ) /*0x431490*/
    {
      result = *p_Network_field_0x0; /*0x431490*/
      if ( *p_Network_field_0x0 ) /*0x431490*/
      {
        if ( (*(_BYTE *)(result + 12) & 2) != 0 ) /*0x431499*/
          break; /*0x431499*/
      }
      ++v8; /*0x43149f*/
      ++p_Network_field_0x0; /*0x4314a0*/
      if ( v8 >= 3 ) /*0x4314a6*/
      {
        ++v6; /*0x4314a8*/
        v7 = (Network *)((char *)v7 + 12); /*0x4314a9*/
        if ( v6 >= 8 ) /*0x4314af*/
          return result; /*0x4314af*/
        goto LABEL_5; /*0x4314af*/
      }
    }
    v10 = *p_Network_field_0x0; /*0x43158a*/
  }
  else
  {
    v17 = 0; /*0x4314ba*/
    result = a4 + 2 * a3 + a3; /*0x4314bf*/
    v10 = *(&this->Network_field_0x0 + result); /*0x4314c1*/
  }
  if ( v10 ) /*0x4314c6*/
  {
    memset((void *)(v10 + 14), 0, 0x100u); /*0x4314e1*/
    if ( Source ) /*0x4314e3*/
      wcsncpy((wchar_t *)(v10 + 14), Source, 0x7Fu); /*0x4314e9*/
    result = *(_DWORD *)&dword_A8B238; /*0x4314f1*/
    if ( *(_DWORD *)&dword_A8B238 && *(_DWORD *)&dword_A8B238 != 5 ) /*0x431501*/
    {
      if ( v17 && *(void **)(v10 + 272) == dword_A83D4C->Object_field_0x30 && a5 ) /*0x431533*/
      {
        v20 = 34; /*0x43153f*/
        strcpy(v21, ToWideStringChar((char *)*dword_A8DA78)); /*0x431568*/
        if ( Source ) /*0x431573*/
        {
          wcsncpy(Destination, Source, 0x80u); /*0x431580*/
        }
        else
        {
          v11 = CharToWideString(&g_INI_DefaultBuffer); /*0x431596*/
          wcscpy(Destination, (const wchar_t *)v11); /*0x4315a1*/
        }
        v12 = -1; /*0x4315b2*/
        Object_field_0x30 = (char)dword_A83D4C->Object_field_0x30; /*0x4315b5*/
        v22 = -1; /*0x4315b8*/
        v23 = Object_field_0x30; /*0x4315bc*/
        result = 0; /*0x4315c0*/
        v14 = &this->Network_field_0x0 + 3 * Object_field_0x30; /*0x4315c8*/
        do /*0x4315dc*/
        {
          if ( *v14 == v10 ) /*0x4315cd*/
          {
            v12 = result; /*0x4315cf*/
            v22 = result; /*0x4315d1*/
          }
          ++result; /*0x4315d5*/
          ++v14; /*0x4315d6*/
        }
        while ( result < 3 ); /*0x4315dc*/
        if ( v12 != -1 ) /*0x4315e1*/
        {
          result = dword_A8DA84; /*0x4315e7*/
          for ( i = 1; i < dword_A8DA84; ++i ) /*0x4315f3*/
          {
            Debug::Log(); /*0x431608*/
            Network::SendMessage(&unk_A8E9C0.Socket, (int)&v20, 455, 1, dword_A8DA78[i] + 40, 0, 0); /*0x431632*/
            result = dword_A8DA84; /*0x431637*/
          }
        }
      }
      else
      {
        result = *(_DWORD *)(v10 + 272); /*0x43164e*/
        if ( (void *)result != dword_A83D4C->Object_field_0x30 && (*(_BYTE *)(v10 + 12) & 1) != 0 ) /*0x431663*/
        {
          result = HouseClass::IsAllied((HouseClass *)dword_A83D4C, result); /*0x43166a*/
          if ( (_BYTE)result ) /*0x431671*/
          {
            result = HouseClass::IsAlliedWith(*((#375 **)stru_A80220.? + *(_DWORD *)(v10 + 272)), (#375 *)dword_A83D4C); /*0x431688*/
            if ( (_BYTE)result ) /*0x43168f*/
            {
              result = *((_DWORD *)stru_A80220.? + *(_DWORD *)(v10 + 272)); /*0x43169d*/
              if ( !*(_BYTE *)(result + 501) ) /*0x4316a0*/
              {
                v16 = *(_DWORD *)(v10 + 4); /*0x4316b4*/
                LOWORD(v19) = *(_DWORD *)v10 / 256; /*0x4316c3*/
                HIWORD(v19) = v16 / 256; /*0x4316db*/
                return CreateTriggerClassIfFarEnough(11, (unsigned __int8)(v16 >> 31), v19); /*0x4316e5*/
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x431641*/
}



// ==== 0x00431700  HouseClass::Render  this=HouseClass  sig=csp ====
int __thiscall HouseClass::Render(HouseClass *this, int a2, int a3, int a4, int a5, int a6)
{
  int result; // eax
  int *v7; // edi
  int v8; // esi
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  result = this->grindersCount; /*0x431700*/
  if ( result ) /*0x43170c*/
  {
    result = g_VisibilitySystem.spawnStatus + 1; /*0x431720*/
    if ( *(_DWORD *)&stru_A8EB00.?[416] % this->bunkersCapacity < g_VisibilitySystem.spawnStatus + 1 ) /*0x431723*/
    {
      result = (int)this; /*0x431731*/
      v10 = 8; /*0x431733*/
      do /*0x4317e1*/
      {
        v7 = (int *)result; /*0x43173b*/
        v9 = 3; /*0x43173d*/
        do /*0x4317d0*/
        {
          v8 = *v7; /*0x431745*/
          if ( *v7 /*0x431794*/
            && (*(_BYTE *)(v8 + 12) & 1) != 0
            && (unsigned __int8)HouseClass::IsAllied((HouseClass *)dword_A83D4C, *(_DWORD *)(v8 + 272))
            && (unsigned __int8)HouseClass::IsAlliedWith(
                                  *((#375 **)stru_A80220.? + *(_DWORD *)(v8 + 272)),
                                  (#375 *)dword_A83D4C)
            && !*(_BYTE *)(*((_DWORD *)stru_A80220.? + *(_DWORD *)(v8 + 272)) + 501) )
          {
            BuildingPlacement::RenderBuildingPlacementShadow((BuildingPlacement *)v8, a2, a3, a4, a5, a6, 0); /*0x4317bf*/
          }
          ++v7; /*0x4317c8*/
          --v9; /*0x4317cc*/
        }
        while ( v9 ); /*0x4317d0*/
        result = (int)v7; /*0x4317da*/
        --v10; /*0x4317dd*/
      }
      while ( v10 ); /*0x4317e1*/
    }
  }
  return result; /*0x4317e7*/
}



// ==== 0x00431800  HouseClass::ProcessData  this=HouseClass  sig=csp ====
bool __thiscall HouseClass::ProcessData(HouseClass *this)
{
  HouseClass *v1; // ebx
  int v2; // ebp
  HouseClass *v3; // edi
  void *vtable0; // esi
  char v6; // [esp+3h] [ebp-9h]
  int v7; // [esp+4h] [ebp-8h]

  if ( !this->grindersCount ) /*0x431803*/
    return 0; /*0x431803*/
  v6 = 0; /*0x431816*/
  v1 = this; /*0x43181b*/
  v7 = 8; /*0x43181d*/
  do /*0x43189e*/
  {
    v2 = 0; /*0x431825*/
    v3 = v1; /*0x431827*/
    while ( 1 ) /*0x431829*/
    {
      vtable0 = v3->AbstractClass; /*0x431829*/
      if ( v3->AbstractClass ) /*0x431829*/
      {
        if ( (*((_BYTE *)vtable0 + 12) & 1) != 0 /*0x431878*/
          && (unsigned __int8)HouseClass::IsAllied((HouseClass *)dword_A83D4C, *((_DWORD *)vtable0 + 68))
          && (unsigned __int8)HouseClass::IsAlliedWith(
                                *((#375 **)stru_A80220.? + *((_DWORD *)vtable0 + 68)),
                                (#375 *)dword_A83D4C)
          && !*(_BYTE *)(*((_DWORD *)stru_A80220.? + *((_DWORD *)vtable0 + 68)) + 501) )
        {
          break; /*0x431878*/
        }
      }
      ++v2; /*0x431882*/
      v3 = (HouseClass *)((char *)v3 + 4); /*0x431883*/
      if ( v2 >= 3 ) /*0x431889*/
        goto LABEL_12; /*0x431889*/
    }
    v6 = 1; /*0x43188d*/
LABEL_12:
    v1 = (HouseClass *)((char *)v1 + 12); /*0x431892*/
    --v7; /*0x43189a*/
  }
  while ( v7 ); /*0x43189e*/
  return v6 && *(_DWORD *)&stru_A8EB00.?[416] % this->bunkersCapacity < g_VisibilitySystem.spawnStatus + 1; /*0x4318c3*/
}



// ==== 0x004318D0  sub_4318D0  this=-  sig=ida-proto ====
int sub_4318D0()
{
  dword_89C480 = 0; /*0x4318d2*/
  dword_89C484 = 0; /*0x4318d7*/
  dword_89C488 = 0; /*0x4318dc*/
  dword_89C48C = 0; /*0x4318e1*/
  return 0; /*0x4318e6*/
}



// ==== 0x00431920  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_431920(ObjectClass *this)
{
  this->? = 0; /*0x431922*/
  this->? = 0; /*0x431925*/
  this->? = 0; /*0x431928*/
  return 0; /*0x43192b*/
}



// ==== 0x00431930  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_431930(ObjectClass *this, int a2)
{
  unsigned int v3; // eax
  int result; // eax
  void *v5; // [esp+8h] [ebp-4h]

  if ( (_BYTE)a2 ) /*0x43193c*/
  {
    this->? = 0; /*0x43193e*/
    this->? = 0; /*0x431941*/
    this->? = 0; /*0x431944*/
  }
  v3 = Timer::ReadTSC(&a2); /*0x43194c*/
  result = (a2 << 28) | (v3 >> 4); /*0x431962*/
  this->AbstractClass = (void *)result; /*0x431964*/
  this->? = v5; /*0x431966*/
  return result; /*0x431969*/
}



// ==== 0x00431A30  ObjectClass::Set  this=BufferIOFileClass  sig=csp ====
int __thiscall ObjectClass::Set(ObjectClass *this, char *Source)
{
  LOBYTE(this->vtable1) = 0; /*0x431a39*/
  this->vtable2 = 1; /*0x431a3c*/
  this->vtable3 = 0; /*0x431a43*/
  this->uniqueId = -1; /*0x431a46*/
  this->abstractFlags = -1; /*0x431a49*/
  this->nextArrayIndex = 0; /*0x431a4c*/
  this->referenceCount = 0; /*0x431a4f*/
  LOBYTE(this->NeedsSaveOrLink) = 0; /*0x431a57*/
  this->occupant = 0; /*0x431a5a*/
  LOBYTE(this->owningHouseIndex) = 0; /*0x431a66*/
  BYTE1(this->owningHouseIndex) = 0; /*0x431a69*/
  this->fallRate = 0; /*0x431a6c*/
  this->nextObject = 0; /*0x431a6f*/
  this->attachedTag = 0; /*0x431a72*/
  this->attachedBomb = 0; /*0x431a75*/
  this->ambientSoundController[0] = 0; /*0x431a78*/
  this->ambientSoundController[1] = -1; /*0x431a7b*/
  this->ambientSoundController[2] = -1; /*0x431a7e*/
  this->ambientSoundController[3] = 0; /*0x431a81*/
  this->ambientSoundController[4] = 0; /*0x431a84*/
  this->customSound_controller[0] = 0; /*0x431a87*/
  this->vtable0 = (int)&BufferIOFileClass::`vftable'; /*0x431a8a*/
  if ( ObjectClass::GetMember06((RawFileClass *)this) && BYTE1(this->owningHouseIndex) ) /*0x431a9a*/
  {
    if ( !strcmp(Source, (const char *)(*(int (__thiscall **)(ObjectClass *))(this->vtable0 + 4))(this)) ) /*0x431ab7*/
    {
      (*(void (__thiscall **)(ObjectClass *))(this->vtable0 + 4))(this); /*0x431ae6*/
      return (int)this; /*0x431aed*/
    }
    BufferIO::Flush((BufferIO *)this); /*0x431af2*/
    HIBYTE(this->occupant) = 0; /*0x431af7*/
  }
  FileClass::SetName((BufferIOFileClass *)this, Source); /*0x431b01*/
  (*(void (__thiscall **)(ObjectClass *))(this->vtable0 + 4))(this); /*0x431b0a*/
  return (int)this; /*0x431aeb*/
}



// ==== 0x00431B20  BufferIOFileClass::Constructor  this=BufferIOFileClass  sig=csp ====
_BYTE *__thiscall BufferIOFileClass::Constructor(CCFileClass *this)
{
  LOBYTE(this->FilePointer) = 0; /*0x431b27*/
  this->FileSize = 1; /*0x431b2a*/
  this->Handle = 0; /*0x431b31*/
  this->FileName = -1; /*0x431b34*/
  *(_DWORD *)this->FileTimeDateLo = -1; /*0x431b37*/
  *(_DWORD *)this->FileNameAllocated = 0; /*0x431b3a*/
  *(_WORD *)this->BufferDirty = 0; /*0x431b3d*/
  *(_WORD *)this->BufferWritePending = 0; /*0x431b41*/
  this->CacheReadAhead[0] = 0; /*0x431b45*/
  this->BufferOffset = 0; /*0x431b48*/
  LOBYTE(this->BufferSize) = 0; /*0x431b54*/
  BYTE1(this->BufferSize) = 0; /*0x431b57*/
  this->BufferPosition = 0; /*0x431b5a*/
  this->FileBaseOffset = 0; /*0x431b5d*/
  this->BufferReadSize = 0; /*0x431b60*/
  this->StreamSize = 0; /*0x431b63*/
  this->BufferMaxSize = 0; /*0x431b66*/
  this->BufferCursor = -1; /*0x431b69*/
  this->TotalBytesRead = -1; /*0x431b6c*/
  this->TotalBytesWritten = 0; /*0x431b6f*/
  this->FileID = 0; /*0x431b72*/
  this->MixFileIndex = 0; /*0x431b75*/
  this->FileClass = (FileClass)&BufferIOFileClass::`vftable'; /*0x431b78*/
  return &this->FileClass; /*0x431b7e*/
}



// ==== 0x00431B80  BufferIOFileClass::Dtor  this=BufferIOFileClass  sig=csp ====
int __thiscall BufferIOFileClass::Dtor(BufferIOFileClass *this)
{
  void *FileBaseOffset; // eax

  FileBaseOffset = (void *)this->FileBaseOffset; /*0x431b86*/
  this->FileClass = (FileClass)&BufferIOFileClass::`vftable'; /*0x431b89*/
  if ( FileBaseOffset ) /*0x431b91*/
  {
    if ( LOBYTE(this->BufferOffset) ) /*0x431b93*/
    {
      __3_YAXPAX_Z(FileBaseOffset); /*0x431b99*/
      LOBYTE(this->BufferOffset) = 0; /*0x431ba1*/
    }
    this->FileBaseOffset = 0; /*0x431ba4*/
  }
  this->BufferReadSize = 0; /*0x431ba9*/
  BYTE1(this->BufferOffset) = 0; /*0x431bac*/
  HIBYTE(this->BufferOffset) = 0; /*0x431baf*/
  LOBYTE(this->BufferSize) = 0; /*0x431bb2*/
  BYTE1(this->BufferSize) = 0; /*0x431bb5*/
  return RawFileClass::Dtor(this); /*0x431bbd*/
}



// ==== 0x00431BC0  ObjectClass::method_431BC0  this=ObjectClass  sig=csp ====
bool __thiscall sub_431BC0(ObjectClass *this, int a2, size_t a3)
{
  int v5; // edi
  int v6; // eax
  BombClass *v7; // edi
  bool v8; // zf
  int (__thiscall **vtable0)(ObjectClass *, int); // eax
  TagClass *attachedTag; // [esp+24h] [ebp+4h]
  size_t v11; // [esp+28h] [ebp+8h]

  if ( this->nextObject ) /*0x431bc8*/
    return !a2 && !a3; /*0x431bdb*/
  if ( (*((unsigned __int8 (__thiscall **)(ObjectClass *, _DWORD))this->AbstractClass + 5))(this, 0) ) /*0x431bef*/
    this->ambientSoundController[3] = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 11))(this); /*0x431bfd*/
  else
    this->ambientSoundController[3] = 0; /*0x431c02*/
  v5 = a2; /*0x431c05*/
  if ( a2 ) /*0x431c0f*/
  {
    if ( a2 < 1024 ) /*0x431c17*/
    {
      v5 = 1024; /*0x431c1b*/
      if ( a3 ) /*0x431c20*/
        (*((void (__thiscall **)(ObjectClass *, int, _DWORD, _DWORD))this->AbstractClass + 16))(this, 22, 0, 0); /*0x431c2a*/
    }
    this->attachedTag = (TagClass *)v5; /*0x431c2f*/
    if ( v5 ) /*0x431c32*/
      goto LABEL_14; /*0x431c32*/
  }
  else
  {
    this->attachedTag = (TagClass *)this->ambientSoundController[3]; /*0x431c53*/
  }
  if ( a3 ) /*0x431c36*/
    return 0; /*0x431d83*/
LABEL_14:
  if ( !this->attachedTag ) /*0x431c41*/
    return 0; /*0x431c41*/
  if ( a3 ) /*0x431c49*/
    this->nextObject = (ObjectClass *)a3; /*0x431c4b*/
  else
    this->nextObject = (ObjectClass *)__2_YAPAXI_Z((size_t)this->attachedTag); /*0x431c61*/
  if ( !this->nextObject ) /*0x431c67*/
  {
    (*((void (__thiscall **)(ObjectClass *, int, _DWORD, _DWORD))this->AbstractClass + 16))(this, 12, 0, 0); /*0x431d7d*/
    return 0; /*0x431d7d*/
  }
  v6 = this->ambientSoundController[3]; /*0x431c6d*/
  LOBYTE(this->occupant) = 1; /*0x431c75*/
  BYTE2(this->occupant) = 0; /*0x431c79*/
  this->attachedBomb = 0; /*0x431c7c*/
  this->ambientSoundController[0] = 0; /*0x431c7f*/
  this->ambientSoundController[1] = -1; /*0x431c82*/
  this->ambientSoundController[2] = -1; /*0x431c85*/
  this->ambientSoundController[4] = 0; /*0x431c88*/
  this->customSound_controller[0] = 0; /*0x431c8b*/
  if ( v6 ) /*0x431c8e*/
  {
    v7 = 0; /*0x431c97*/
    v11 = 0; /*0x431c9b*/
    attachedTag = (TagClass *)v6; /*0x431c9f*/
    if ( v6 > (int)this->attachedTag ) /*0x431ca3*/
      attachedTag = this->attachedTag; /*0x431ca5*/
    v8 = (*((unsigned __int8 (__thiscall **)(ObjectClass *))this->AbstractClass + 6))(this) == 0; /*0x431cb0*/
    vtable0 = (int (__thiscall **)(ObjectClass *, int))this->AbstractClass; /*0x431cb2*/
    if ( v8 ) /*0x431cb6*/
    {
      if ( vtable0[7](this, 1) ) /*0x431d02*/
      {
        this->customSound_controller[0] = FileClass::Seek((RawFileClass *)this, 0, 1u); /*0x431d13*/
        v11 = 1; /*0x431d16*/
      }
    }
    else
    {
      v7 = (BombClass *)vtable0[10](this, 0); /*0x431cbe*/
      if ( this->? == -1 ) /*0x431cc5*/
        this->customSound_controller[0] = (int)v7; /*0x431cd6*/
      else
        this->customSound_controller[0] = FileClass::Seek((RawFileClass *)this, 0, 1u); /*0x431cd1*/
      if ( this->ambientSoundController[3] > (int)this->attachedTag ) /*0x431ce1*/
      {
        this->ambientSoundController[0] = (int)v7; /*0x431cf8*/
        this->ambientSoundController[4] = (int)v7; /*0x431cfb*/
      }
      else
      {
        if ( v7 ) /*0x431ce5*/
          (*((void (__thiscall **)(ObjectClass *, _DWORD, _DWORD))this->AbstractClass + 10))(this, 0, 0); /*0x431ced*/
        this->attachedBomb = v7; /*0x431cf0*/
        this->ambientSoundController[4] = (int)v7; /*0x431cf3*/
      }
    }
    if ( (TagClass *)(*((int (__thiscall **)(ObjectClass *, ObjectClass *, TagClass *))this->AbstractClass + 9))( /*0x431d30*/
                       this,
                       this->nextObject,
                       attachedTag) != attachedTag )
      (*((void (__thiscall **)(ObjectClass *, int, _DWORD, _DWORD))this->AbstractClass + 16))(this, 5, 0, 0); /*0x431d3a*/
    if ( v11 ) /*0x431d41*/
    {
      (*((void (__thiscall **)(ObjectClass *))this->AbstractClass + 13))(this); /*0x431d47*/
      HIBYTE(this->occupant) = 1; /*0x431d4a*/
      BYTE1(this->owningHouseIndex) = 1; /*0x431d4e*/
      return 1; /*0x431d58*/
    }
    (*((void (__thiscall **)(ObjectClass *, BombClass *, _DWORD))this->AbstractClass + 10))(this, v7, 0); /*0x431d61*/
    HIBYTE(this->occupant) = 1; /*0x431d64*/
  }
  BYTE1(this->owningHouseIndex) = 1; /*0x431d68*/
  return 1; /*0x431be1*/
}



// ==== 0x00431D90  ObjectClass::method_431D90  this=ObjectClass  sig=csp ====
void __thiscall sub_431D90(ObjectClass *this)
{
  if ( this->nextObject ) /*0x431d96*/
  {
    if ( LOBYTE(this->occupant) ) /*0x431d9d*/
    {
      __3_YAXPAX_Z(this->nextObject); /*0x431da3*/
      LOBYTE(this->occupant) = 0; /*0x431dab*/
    }
    this->nextObject = 0; /*0x431dae*/
  }
  this->attachedTag = 0; /*0x431db1*/
  BYTE1(this->occupant) = 0; /*0x431db4*/
  HIBYTE(this->occupant) = 0; /*0x431db7*/
  LOBYTE(this->owningHouseIndex) = 0; /*0x431dba*/
  BYTE1(this->owningHouseIndex) = 0; /*0x431dbd*/
}



// ==== 0x00431DD0  BufferIO::Flush  this=BufferIO  sig=csp ====
int __thiscall BufferIO::Flush(BufferIO *this)
{
  int result; // eax
  int v3; // eax
  DWORD v4; // edi

  if ( *((_BYTE *)this + 41) && *((_BYTE *)this + 40) ) /*0x431dde*/
  {
    v3 = this->q004; /*0x431de9*/
    v4 = *((_DWORD *)this + 17) - v3; /*0x431df3*/
    if ( *((_BYTE *)this + 38) ) /*0x431dec*/
    {
      FileClass::Seek((RawFileClass *)this, v3 + *((_DWORD *)this + 20) + *((_DWORD *)this + 15), 0); /*0x431e08*/
      FileClass::Write2((RawFileClass *)this, *((LPCVOID *)this + 12), v4); /*0x431e14*/
      result = FileClass::Seek((RawFileClass *)this, *((_DWORD *)this + 20) + *((_DWORD *)this + 19), 0); /*0x431e26*/
    }
    else
    {
      FileClass::Open2((RawFileClass *)this, (const CHAR *)1); /*0x431e38*/
      FileClass::Seek((RawFileClass *)this, this->q004 + *((_DWORD *)this + 15) + *((_DWORD *)this + 20), 0); /*0x431e4f*/
      FileClass::Write2((RawFileClass *)this, *((LPCVOID *)this + 12), v4); /*0x431e5b*/
      result = FileClass::CloseHandle((RawFileClass *)this); /*0x431e62*/
    }
    *((_BYTE *)this + 40) = 0; /*0x431e2b*/
    LOBYTE(result) = 1; /*0x431e30*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x431e70*/
  }
  return result; /*0x431e32*/
}



// ==== 0x00431E80  BufferIOFileClass::SetName  this=BufferIOFileClass  sig=csp ====
int __thiscall CCFileClass::SetName(BufferIOFileClass *this, char *Source)
{
  if ( (*(int (__thiscall **)(BufferIOFileClass *))(*(_DWORD *)&this->FileClass + 4))(this) && BYTE1(this->BufferSize) ) /*0x431e91*/
  {
    if ( !strcmp( /*0x431ead*/
            Source,
            (const char *)(*(int (__thiscall **)(BufferIOFileClass *))(*(_DWORD *)&this->FileClass + 4))(this)) )
      return (*(int (__thiscall **)(BufferIOFileClass *))(*(_DWORD *)&this->FileClass + 4))(this); /*0x431ee1*/
    BufferIO::Flush((BufferIO *)this); /*0x431ee6*/
    HIBYTE(this->BufferOffset) = 0; /*0x431eeb*/
  }
  FileClass::SetName(this, Source); /*0x431ef2*/
  return (*(int (__thiscall **)(BufferIOFileClass *))(*(_DWORD *)&this->FileClass + 4))(this); /*0x431edf*/
}



// ==== 0x00431F10  BufferIOFileClass::IsReady  this=BufferIOFileClass  sig=csp ====
int __thiscall File::IsReady(BufferIOFileClass *this, int a2)
{
  int result; // eax

  if ( !BYTE1(this->BufferSize) ) /*0x431f10*/
    return FileClass::Open((RawFileClass *)this, 0); /*0x431f1e*/
  LOBYTE(result) = 1; /*0x431f17*/
  return result; /*0x431f19*/
}



// ==== 0x00431F30  BufferIOFileClass::Read  this=BufferIOFileClass  sig=csp ====
bool __thiscall BufferIOFileClass::Read(BufferIOFileClass *this)
{
  BOOL v1; // eax

  if ( BYTE1(this->BufferOffset) && BYTE1(this->BufferSize) ) /*0x431f37*/
    LOBYTE(v1) = 1; /*0x431f3e*/
  else
    return *(_DWORD *)this->? != -1; /*0x431f49*/
  return v1; /*0x431f40*/
}



// ==== 0x00431F50  BufferIOFileClass::Write  this=BufferIOFileClass  sig=csp ====
BOOL __thiscall BufferIOFileClass::Write(BufferIOFileClass *this, int a2, const CHAR *a3)
{
  (*(void (__thiscall **)(BufferIOFileClass *, int))(*(_DWORD *)&this->FileClass + 8))(this, a2); /*0x431f5c*/
  return BufferIOFileClass::Open((CCFileClass *)this, a3); /*0x431f6b*/
}



// ==== 0x00431F70  BufferIOFileClass::Open  this=BufferIOFileClass  sig=csp ====
int __thiscall BufferIOFileClass::Open(CCFileClass *this, const CHAR *a2)
{
  FileClass v3; // eax
  const CHAR *v4; // eax
  FileClass v5; // edx
  int BufferPosition; // eax

  if ( BYTE1(this->BufferSize) ) /*0x431f76*/
  {
    BufferIO::Flush((BufferIO *)this); /*0x431f7b*/
    if ( BYTE2(this->BufferOffset) ) /*0x431f80*/
    {
      if ( this->MixFileIndex ) /*0x431f85*/
      {
        v3 = this->FileClass; /*0x431f8a*/
        BYTE1(this->BufferSize) = 0; /*0x431f8e*/
        (*(void (__thiscall **)(CCFileClass *))(*(_DWORD *)&v3 + 52))(this); /*0x431f91*/
        BYTE1(this->BufferSize) = 1; /*0x431f94*/
        BYTE2(this->BufferOffset) = 0; /*0x431f98*/
        BYTE1(this->BufferOffset) = 0; /*0x431f9b*/
        goto LABEL_8; /*0x431f9e*/
      }
      FileClass::CloseHandle(this); /*0x431fa2*/
      BYTE2(this->BufferOffset) = 0; /*0x431fa7*/
    }
    BYTE1(this->BufferOffset) = 0; /*0x431faa*/
  }
  else
  {
    FileClass::CloseHandle(this); /*0x431faf*/
  }
LABEL_8:
  v4 = a2; /*0x431fb4*/
  if ( BYTE1(this->BufferSize) ) /*0x431fb4*/
  {
    this->BufferPosition = (int)a2; /*0x431fc6*/
    if ( a2 == (const CHAR *)1 ) /*0x431fc9*/
    {
      if ( this->TotalBytesWritten <= this->BufferReadSize ) /*0x431fd3*/
      {
        BYTE2(this->BufferOffset) = 0; /*0x431fd5*/
LABEL_19:
        this->StreamSize = 0; /*0x432023*/
        this->BufferMaxSize = 0; /*0x432029*/
        this->BufferCursor = -1; /*0x43202c*/
        this->TotalBytesRead = -1; /*0x43202f*/
        this->FileID = 0; /*0x432032*/
        BYTE1(this->BufferOffset) = 1; /*0x432035*/
        return 1; /*0x432040*/
      }
    }
    else if ( a2 == (const CHAR *)2 ) /*0x431fdd*/
    {
      FileClass::Open2(this, (const CHAR *)2); /*0x431fe2*/
      FileClass::CloseHandle(this); /*0x431fe9*/
      v4 = (const CHAR *)3; /*0x431fee*/
      this->MixFileIndex = 0; /*0x431ff3*/
    }
    if ( this->MixFileIndex ) /*0x431ff6*/
    {
      v5 = this->FileClass; /*0x431ffb*/
      BYTE1(this->BufferSize) = 0; /*0x432000*/
      (*(void (__thiscall **)(CCFileClass *, const CHAR *))(*(_DWORD *)&v5 + 28))(this, v4); /*0x432003*/
      BYTE1(this->BufferSize) = 1; /*0x432006*/
    }
    else
    {
      FileClass::Open2(this, v4); /*0x43200f*/
    }
    BufferPosition = this->BufferPosition; /*0x432014*/
    BYTE2(this->BufferOffset) = 1; /*0x432017*/
    if ( BufferPosition == 2 ) /*0x43201e*/
      this->TotalBytesWritten = 0; /*0x432020*/
    goto LABEL_19; /*0x432020*/
  }
  return FileClass::Open2(this, a2); /*0x432039*/
}



// ==== 0x00432050  BufferIOFileClass::BufferedWriter  this=BufferIOFileClass  sig=csp ====
int __thiscall FileClass::BufferedWriter(CCFileClass *this, char *lpBuffer, DWORD nNumberOfBytesToWrite)
{
  int result; // eax
  signed int v5; // ebx
  int BufferReadSize; // eax
  signed int v7; // edi
  signed int TotalBytesWritten; // ebp
  FileClass v9; // edx
  int StreamSize; // ecx
  int BufferCursor; // eax
  int v12; // eax
  int TotalBytesRead; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  FileClass v18; // edx
  int v19; // edi
  int FileID; // [esp-8h] [ebp-20h]
  int v21; // [esp+10h] [ebp-8h]
  int v22; // [esp+14h] [ebp-4h]

  v22 = 0; /*0x43205b*/
  if ( !(*(unsigned __int8 (__thiscall **)(CCFileClass *))(*(_DWORD *)&this->FileClass + 24))(this) ) /*0x43205f*/
  {
    result = (*(int (__thiscall **)(CCFileClass *, int))(*(_DWORD *)&this->FileClass + 28))(this, 2); /*0x43206c*/
    if ( !result ) /*0x432071*/
      return result; /*0x432071*/
    this->MixFileIndex = FileClass::Seek(this, 0, 1u); /*0x432085*/
    v22 = 1; /*0x432088*/
  }
  if ( BYTE1(this->BufferSize) ) /*0x432090*/
  {
    v21 = 0; /*0x4320a2*/
    if ( this->BufferPosition == 1 ) /*0x4320a6*/
    {
      (*(void (__thiscall **)(CCFileClass *, int, _DWORD, _DWORD))(*(_DWORD *)&this->FileClass + 64))(this, 13, 0, 0); /*0x432262*/
    }
    else
    {
      v5 = nNumberOfBytesToWrite; /*0x4320ac*/
      if ( nNumberOfBytesToWrite ) /*0x4320b2*/
      {
        do /*0x43224c*/
        {
          BufferReadSize = this->BufferReadSize; /*0x4320b9*/
          v7 = BufferReadSize - this->StreamSize; /*0x4320c1*/
          if ( v5 < v7 ) /*0x4320c5*/
            v7 = v5; /*0x4320c7*/
          if ( v7 != BufferReadSize && !HIBYTE(this->BufferOffset) ) /*0x4320d1*/
          {
            if ( this->TotalBytesWritten >= BufferReadSize ) /*0x4320e1*/
            {
              TotalBytesWritten = this->BufferReadSize; /*0x4320ee*/
              this->BufferMaxSize = this->FileID; /*0x4320f3*/
            }
            else
            {
              TotalBytesWritten = this->TotalBytesWritten; /*0x4320e3*/
              this->BufferMaxSize = 0; /*0x4320e5*/
            }
            if ( this->MixFileIndex ) /*0x4320f6*/
            {
              v9 = this->FileClass; /*0x432100*/
              FileID = this->FileID; /*0x432104*/
              BYTE1(this->BufferSize) = 0; /*0x432107*/
              (*(void (__thiscall **)(CCFileClass *, int, _DWORD))(*(_DWORD *)&v9 + 40))(this, FileID, 0); /*0x43210b*/
              (*(void (__thiscall **)(CCFileClass *, int, int))(*(_DWORD *)&this->FileClass + 36))( /*0x43211a*/
                this,
                this->FileBaseOffset,
                this->BufferReadSize);
              (*(void (__thiscall **)(CCFileClass *, int, _DWORD))(*(_DWORD *)&this->FileClass + 40))( /*0x432127*/
                this,
                this->FileID,
                0);
              BYTE1(this->BufferSize) = 1; /*0x43212a*/
            }
            else
            {
              FileClass::Seek(this, this->BufferMaxSize, 0); /*0x432138*/
              FileClass::Read(this, (char *)this->FileBaseOffset, TotalBytesWritten); /*0x432144*/
            }
            this->StreamSize = 0; /*0x43214c*/
            this->BufferCursor = -1; /*0x432153*/
            this->TotalBytesRead = -1; /*0x432156*/
            HIBYTE(this->BufferOffset) = 1; /*0x432159*/
          }
          memcpy((void *)(this->FileBaseOffset + this->StreamSize), &lpBuffer[v21], v7); /*0x432175*/
          StreamSize = this->StreamSize; /*0x43217e*/
          v21 += v7; /*0x432186*/
          BufferCursor = this->BufferCursor; /*0x43218a*/
          v5 -= v7; /*0x43218d*/
          LOBYTE(this->BufferSize) = 1; /*0x432191*/
          if ( BufferCursor == -1 ) /*0x432195*/
          {
            this->BufferCursor = StreamSize; /*0x432197*/
            this->TotalBytesRead = StreamSize; /*0x43219a*/
          }
          else if ( BufferCursor > StreamSize ) /*0x4321a1*/
          {
            this->BufferCursor = StreamSize; /*0x4321a3*/
          }
          v12 = StreamSize + v7; /*0x4321a6*/
          TotalBytesRead = this->TotalBytesRead; /*0x4321a9*/
          this->StreamSize = v12; /*0x4321ae*/
          if ( TotalBytesRead < v12 ) /*0x4321b1*/
            this->TotalBytesRead = v12; /*0x4321b3*/
          v14 = this->TotalBytesWritten; /*0x4321b9*/
          v15 = v12 + this->BufferMaxSize; /*0x4321bc*/
          this->FileID = v15; /*0x4321c0*/
          if ( v14 < v15 ) /*0x4321c3*/
            this->TotalBytesWritten = v15; /*0x4321c5*/
          if ( v12 == this->BufferReadSize ) /*0x4321cb*/
          {
            BufferIO::Flush((BufferIO *)this); /*0x4321cf*/
            v16 = this->FileID; /*0x4321d4*/
            this->StreamSize = 0; /*0x4321d7*/
            this->BufferMaxSize = v16; /*0x4321e0*/
            this->BufferCursor = -1; /*0x4321e3*/
            this->TotalBytesRead = -1; /*0x4321e6*/
            if ( v5 && (v17 = v16, this->TotalBytesWritten > v16) ) /*0x4321f2*/
            {
              if ( this->MixFileIndex ) /*0x4321f4*/
              {
                v18 = this->FileClass; /*0x4321fb*/
                BYTE1(this->BufferSize) = 0; /*0x432202*/
                (*(void (__thiscall **)(CCFileClass *, int, _DWORD))(*(_DWORD *)&v18 + 40))(this, v17, 0); /*0x432206*/
                (*(void (__thiscall **)(CCFileClass *, int, int))(*(_DWORD *)&this->FileClass + 36))( /*0x432215*/
                  this,
                  this->FileBaseOffset,
                  this->BufferReadSize);
                (*(void (__thiscall **)(CCFileClass *, int, _DWORD))(*(_DWORD *)&this->FileClass + 40))( /*0x432222*/
                  this,
                  this->FileID,
                  0);
                BYTE1(this->BufferSize) = 1; /*0x432225*/
              }
              else
              {
                FileClass::Seek(this, v16, 0); /*0x432230*/
                FileClass::Read(this, (char *)this->FileBaseOffset, this->BufferReadSize); /*0x43223f*/
              }
            }
            else
            {
              HIBYTE(this->BufferOffset) = 0; /*0x432246*/
            }
          }
        }
        while ( v5 ); /*0x43224c*/
        v19 = v21; /*0x432252*/
        goto LABEL_38; /*0x432258*/
      }
    }
    v19 = 0; /*0x432265*/
  }
  else
  {
    v19 = FileClass::Write2(this, lpBuffer, nNumberOfBytesToWrite); /*0x43227d*/
  }
LABEL_38:
  if ( v22 ) /*0x432285*/
    (*(void (__thiscall **)(CCFileClass *))(*(_DWORD *)&this->FileClass + 52))(this); /*0x43228b*/
  return v19; /*0x432073*/
}



// ==== 0x004322A0  BufferIOFileClass::BufferedReader  this=BufferIOFileClass  sig=csp ====
int __thiscall FileClass::BufferedReader(CCFileClass *this, char *lpBuffer, DWORD nNumberOfBytesToRead)
{
  signed int v4; // ebx
  signed int v5; // edi
  signed int BufferReadSize; // ebp
  FileClass v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  FileClass v11; // edx
  int v12; // edi
  int FileID; // [esp-8h] [ebp-20h]
  int v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]

  v16 = 0; /*0x4322ab*/
  if ( !(*(unsigned __int8 (__thiscall **)(CCFileClass *))(*(_DWORD *)&this->FileClass + 24))(this) /*0x4322bc*/
    && (*(int (__thiscall **)(CCFileClass *, int))(*(_DWORD *)&this->FileClass + 28))(this, 1) )
  {
    this->MixFileIndex = FileClass::Seek(this, 0, 1u); /*0x4322cd*/
    v16 = 1; /*0x4322d0*/
  }
  if ( !BYTE1(this->BufferSize) ) /*0x4322dd*/
  {
    v12 = FileClass::Read(this, lpBuffer, nNumberOfBytesToRead); /*0x432492*/
    goto LABEL_29; /*0x432492*/
  }
  v15 = 0; /*0x4322ea*/
  if ( this->BufferPosition == 2 ) /*0x4322ee*/
  {
    (*(void (__thiscall **)(CCFileClass *, int, _DWORD, _DWORD))(*(_DWORD *)&this->FileClass + 64))(this, 13, 0, 0); /*0x432477*/
    goto LABEL_27; /*0x432477*/
  }
  v4 = nNumberOfBytesToRead; /*0x4322f4*/
  if ( !nNumberOfBytesToRead ) /*0x4322fa*/
  {
LABEL_27:
    v12 = 0; /*0x43247a*/
    goto LABEL_29; /*0x43247f*/
  }
  do /*0x432461*/
  {
    v5 = this->BufferReadSize - this->StreamSize; /*0x43230d*/
    if ( v4 < v5 ) /*0x43230f*/
      v5 = v4; /*0x432311*/
    if ( !HIBYTE(this->BufferOffset) ) /*0x432313*/
    {
      if ( this->TotalBytesWritten >= this->BufferReadSize ) /*0x432323*/
      {
        BufferReadSize = this->BufferReadSize; /*0x432333*/
        this->BufferMaxSize = this->FileID; /*0x432335*/
      }
      else
      {
        BufferReadSize = this->TotalBytesWritten; /*0x432325*/
        this->BufferMaxSize = 0; /*0x432327*/
      }
      if ( this->MixFileIndex ) /*0x432338*/
      {
        v7 = this->FileClass; /*0x432342*/
        FileID = this->FileID; /*0x432346*/
        BYTE1(this->BufferSize) = 0; /*0x432349*/
        (*(void (__thiscall **)(CCFileClass *, int, _DWORD))(*(_DWORD *)&v7 + 40))(this, FileID, 0); /*0x43234d*/
        (*(void (__thiscall **)(CCFileClass *, int, int))(*(_DWORD *)&this->FileClass + 36))( /*0x43235c*/
          this,
          this->FileBaseOffset,
          this->BufferReadSize);
        (*(void (__thiscall **)(CCFileClass *, int, _DWORD))(*(_DWORD *)&this->FileClass + 40))(this, this->FileID, 0); /*0x432369*/
        BYTE1(this->BufferSize) = 1; /*0x43236c*/
      }
      else
      {
        FileClass::Seek(this, this->BufferMaxSize, 0); /*0x43237a*/
        FileClass::Read(this, (char *)this->FileBaseOffset, BufferReadSize); /*0x432386*/
      }
      this->StreamSize = 0; /*0x43238e*/
      this->BufferCursor = -1; /*0x432395*/
      this->TotalBytesRead = -1; /*0x432398*/
      HIBYTE(this->BufferOffset) = 1; /*0x43239b*/
    }
    memcpy(&lpBuffer[v15], (const void *)(this->FileBaseOffset + this->StreamSize), v5); /*0x4323b9*/
    v8 = v5 + this->StreamSize; /*0x4323c7*/
    v15 += v5; /*0x4323c9*/
    v4 -= v5; /*0x4323d7*/
    this->FileID = this->BufferMaxSize + v8; /*0x4323d9*/
    v9 = this->BufferReadSize; /*0x4323dc*/
    this->StreamSize = v8; /*0x4323e1*/
    if ( v8 == v9 ) /*0x4323e4*/
    {
      BufferIO::Flush((BufferIO *)this); /*0x4323e8*/
      v10 = this->FileID; /*0x4323ed*/
      this->StreamSize = 0; /*0x4323f0*/
      this->BufferMaxSize = v10; /*0x4323f9*/
      this->BufferCursor = -1; /*0x4323fc*/
      this->TotalBytesRead = -1; /*0x4323ff*/
      if ( v4 && this->TotalBytesWritten > v10 ) /*0x432407*/
      {
        if ( this->MixFileIndex ) /*0x432409*/
        {
          v11 = this->FileClass; /*0x432410*/
          BYTE1(this->BufferSize) = 0; /*0x432417*/
          (*(void (__thiscall **)(CCFileClass *, int, _DWORD))(*(_DWORD *)&v11 + 40))(this, v10, 0); /*0x43241b*/
          (*(void (__thiscall **)(CCFileClass *, int, int))(*(_DWORD *)&this->FileClass + 36))( /*0x43242a*/
            this,
            this->FileBaseOffset,
            this->BufferReadSize);
          (*(void (__thiscall **)(CCFileClass *, int, _DWORD))(*(_DWORD *)&this->FileClass + 40))(this, this->FileID, 0); /*0x432437*/
          BYTE1(this->BufferSize) = 1; /*0x43243a*/
        }
        else
        {
          FileClass::Seek(this, v10, 0); /*0x432445*/
          FileClass::Read(this, (char *)this->FileBaseOffset, this->BufferReadSize); /*0x432454*/
        }
      }
      else
      {
        HIBYTE(this->BufferOffset) = 0; /*0x43245b*/
      }
    }
  }
  while ( v4 ); /*0x432461*/
  v12 = v15; /*0x432467*/
LABEL_29:
  if ( v16 ) /*0x43249a*/
    (*(void (__thiscall **)(CCFileClass *))(*(_DWORD *)&this->FileClass + 52))(this); /*0x4324a0*/
  return v12; /*0x4324a5*/
}



// ==== 0x004324B0  BufferIOFileClass::SeekInternal  this=BufferIOFileClass  sig=csp ====
int __thiscall BufferIOFileClass::SeekInternal(CCFileClass *this, LONG lDistanceToMove, DWORD dwMoveMethod)
{
  int MixFileIndex; // eax
  LONG v5; // ecx
  int FileID; // eax
  int TotalBytesWritten; // eax
  int BufferReadSize; // edx
  int v9; // eax
  int BufferMaxSize; // ecx
  FileClass v11; // eax
  int v12; // ecx
  int v14; // [esp-8h] [ebp-14h]
  char v15; // [esp+Bh] [ebp-1h]

  if ( !BYTE1(this->BufferSize) ) /*0x4324b7*/
    return FileClass::Seek(this, lDistanceToMove, dwMoveMethod); /*0x43258f*/
  v15 = 0; /*0x4324c4*/
  if ( dwMoveMethod ) /*0x4324ca*/
  {
    if ( dwMoveMethod == 2 ) /*0x4324cf*/
      this->FileID = this->TotalBytesWritten; /*0x4324d4*/
  }
  else
  {
    this->FileID = 0; /*0x4324d9*/
  }
  MixFileIndex = this->MixFileIndex; /*0x4324dc*/
  v5 = lDistanceToMove; /*0x4324df*/
  if ( MixFileIndex && lDistanceToMove >= MixFileIndex ) /*0x4324e9*/
  {
    v5 = lDistanceToMove - MixFileIndex; /*0x4324eb*/
    v15 = 1; /*0x4324ed*/
  }
  FileID = this->FileID; /*0x4324f2*/
  this->FileID = v5 + FileID; /*0x4324f7*/
  if ( v5 + FileID < 0 ) /*0x4324fa*/
    this->FileID = 0; /*0x4324fc*/
  TotalBytesWritten = this->TotalBytesWritten; /*0x4324ff*/
  if ( this->FileID > TotalBytesWritten ) /*0x432507*/
    this->FileID = TotalBytesWritten; /*0x432509*/
  BufferReadSize = this->BufferReadSize; /*0x43250c*/
  if ( TotalBytesWritten > BufferReadSize ) /*0x432511*/
  {
    v9 = this->FileID; /*0x43251b*/
    BufferMaxSize = this->BufferMaxSize; /*0x43251e*/
    if ( v9 < BufferMaxSize || v9 >= BufferMaxSize + BufferReadSize ) /*0x432529*/
    {
      BufferIO::Flush((BufferIO *)this); /*0x432534*/
      if ( this->MixFileIndex ) /*0x432539*/
      {
        v11 = this->FileClass; /*0x432541*/
        v14 = this->FileID; /*0x432544*/
        BYTE1(this->BufferSize) = 0; /*0x432547*/
        (*(void (__thiscall **)(CCFileClass *, int, _DWORD))(*(_DWORD *)&v11 + 40))(this, v14, 0); /*0x43254a*/
        BYTE1(this->BufferSize) = 1; /*0x43254d*/
      }
      else
      {
        FileClass::Seek(this, this->FileID, 0); /*0x43255a*/
      }
      HIBYTE(this->BufferOffset) = 0; /*0x43255f*/
    }
    else
    {
      this->StreamSize = v9 - BufferMaxSize; /*0x43252d*/
    }
  }
  else
  {
    this->StreamSize = this->FileID; /*0x432516*/
  }
  v12 = this->MixFileIndex; /*0x432562*/
  if ( v12 && v15 ) /*0x43256d*/
    return v12 + this->FileID; /*0x432573*/
  else
    return this->FileID; /*0x43257a*/
}



// ==== 0x004325A0  BufferIOFileClass::SetSize  this=BufferIOFileClass  sig=csp ====
int __thiscall BufferIOFileClass::SetSize(BufferIOFileClass *this)
{
  if ( BYTE1(this->BufferOffset) && BYTE1(this->BufferSize) ) /*0x4325a7*/
    return this->TotalBytesWritten; /*0x4325ae*/
  else
    return CCFileClass::GetFileSize((RawFileClass *)this); /*0x4325b2*/
}



// ==== 0x004325C0  BufferIOFileClass::Close  this=BufferIOFileClass  sig=csp ====
char __thiscall CCFileClass::Close(CCFileClass *this)
{
  char result; // al
  FileClass v3; // eax

  if ( !BYTE1(this->BufferSize) ) /*0x4325c3*/
    return FileClass::CloseHandle(this); /*0x432607*/
  BufferIO::Flush((BufferIO *)this); /*0x4325ca*/
  result = BYTE2(this->BufferOffset); /*0x4325cf*/
  if ( result ) /*0x4325d4*/
  {
    if ( this->MixFileIndex ) /*0x4325d6*/
    {
      v3 = this->FileClass; /*0x4325dd*/
      BYTE1(this->BufferSize) = 0; /*0x4325e1*/
      result = (*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)&v3 + 52))(this); /*0x4325e5*/
      BYTE1(this->BufferSize) = 1; /*0x4325e8*/
      BYTE2(this->BufferOffset) = 0; /*0x4325ec*/
      BYTE1(this->BufferOffset) = 0; /*0x4325f0*/
      return result; /*0x4325f5*/
    }
    result = FileClass::CloseHandle(this); /*0x4325f8*/
    BYTE2(this->BufferOffset) = 0; /*0x4325fd*/
  }
  BYTE1(this->BufferOffset) = 0; /*0x432601*/
  return result; /*0x4325f4*/
}



// ==== 0x00432610  BufferIOFileClass::QueryInterface  this=BufferIOFileClass  sig=csp ====
_DWORD *__thiscall BufferIOFileClass::QueryInterface(BufferIOFileClass *this, char a2)
{
  void *FileBaseOffset; // eax

  FileBaseOffset = (void *)this->FileBaseOffset; /*0x432616*/
  this->FileClass = (FileClass)&BufferIOFileClass::`vftable'; /*0x432619*/
  if ( FileBaseOffset ) /*0x432621*/
  {
    if ( LOBYTE(this->BufferOffset) ) /*0x432623*/
    {
      __3_YAXPAX_Z(FileBaseOffset); /*0x432629*/
      LOBYTE(this->BufferOffset) = 0; /*0x432631*/
    }
    this->FileBaseOffset = 0; /*0x432634*/
  }
  this->BufferReadSize = 0; /*0x432639*/
  BYTE1(this->BufferOffset) = 0; /*0x43263c*/
  HIBYTE(this->BufferOffset) = 0; /*0x43263f*/
  LOBYTE(this->BufferSize) = 0; /*0x432642*/
  BYTE1(this->BufferSize) = 0; /*0x432645*/
  RawFileClass::Dtor(this); /*0x432648*/
  if ( (a2 & 1) != 0 ) /*0x432652*/
    __3_YAXPAX_Z(this); /*0x432655*/
  return &this->FileClass; /*0x43265f*/
}



// ==== 0x00432670  sub_432670  this=-  sig=ida-proto ====
int sub_432670()
{
  dword_89C498 = 0; /*0x432672*/
  dword_89C49C = 0; /*0x432677*/
  dword_89C4A0 = 0; /*0x43267c*/
  dword_89C4A4 = 0; /*0x432681*/
  return 0; /*0x432686*/
}



// ==== 0x00432690  BinkMovie::Close  this=BinkMovie  sig=csp ====
_DWORD *__thiscall BinkMovie::Close(BinkMovie *this, char *FullPath)
{
  this->__pad_0[0] = 0; /*0x432695*/
  this->BinkMovie_field_0x4[0] = 0; /*0x432697*/
  this->BinkMovie_field_0xC = 0; /*0x43269a*/
  this->BinkMovie_field_0x20 = 0; /*0x43269d*/
  *((_BYTE *)this + 45) = 0; /*0x4326a0*/
  this->q00A = -1; /*0x4326a8*/
  *((_BYTE *)this + 44) = 1; /*0x4326af*/
  BinkMovie::InitFromFile((int)this, (LPCSTR *)FullPath); /*0x4326b3*/
  return this->__pad_0; /*0x4326ba*/
}



// ==== 0x004326C0  BinkMovie::Open  this=BinkMovie  sig=csp ====
_DWORD *__thiscall BinkMovie::Open(BinkMovie *this, char *FullPath, int a3)
{
  this->BinkMovie_field_0xC = (void *)a3; /*0x4326ce*/
  this->__pad_0[0] = 0; /*0x4326d3*/
  this->BinkMovie_field_0x4[0] = 0; /*0x4326d5*/
  this->BinkMovie_field_0x20 = 0; /*0x4326d8*/
  this->q00A = -1; /*0x4326db*/
  *((_BYTE *)this + 44) = 1; /*0x4326e2*/
  *((_BYTE *)this + 45) = 0; /*0x4326e6*/
  BinkMovie::InitFromFile((int)this, (LPCSTR *)FullPath); /*0x4326e9*/
  return this->__pad_0; /*0x4326f0*/
}



// ==== 0x00432700  BinkMovie::Stop  this=BinkMovie  sig=csp ====
int __thiscall BinkMovie::Stop(BinkMovie *this)
{
  void *BinkMovie_field_0x20; // edi
  int result; // eax

  BinkMovie_field_0x20 = (void *)this->BinkMovie_field_0x20; /*0x432704*/
  if ( BinkMovie_field_0x20 ) /*0x432709*/
  {
    BinkMovie::FreeSurfaceTracker((BinkMovie *)this->BinkMovie_field_0x20); /*0x43270d*/
    __3_YAXPAX_Z(BinkMovie_field_0x20); /*0x432713*/
    this->BinkMovie_field_0x20 = 0; /*0x43271b*/
  }
  if ( this->BinkMovie_field_0x4[0] ) /*0x432722*/
  {
    BinkClose(this->BinkMovie_field_0x4[0]); /*0x43272a*/
    this->BinkMovie_field_0x4[0] = 0; /*0x432730*/
  }
  result = this->q00A; /*0x432737*/
  if ( result != -1 ) /*0x43273d*/
  {
    result = CloseHandle(*((HANDLE *)this + 10)); /*0x432740*/
    this->q00A = -1; /*0x432746*/
  }
  return result; /*0x43274d*/
}



// ==== 0x00432750  BinkMovie::InitFromFile  this=BinkMovie  sig=csp ====
char __thiscall sub_432750(int this, LPCSTR *FullPath)
{
  int v3; // ebp
  void *v4; // edi
  int v5; // eax
  char *v6; // edi
  int v7; // eax
  bool v8; // bl
  int v9; // eax
  HANDLE FileA; // eax
  const char *Error; // eax
  int v13; // eax
  _DWORD *v14; // eax
  int *v15; // ecx
  LONG v16; // edi
  int v17; // ebx
  LONG v18; // edx
  int v19; // ecx
  int v20; // ecx
  int v21; // eax
  LPCSTR *v22; // ecx
  int v23; // edx
  LPCSTR v24; // eax
  LONG bottom; // edi
  LONG left; // eax
  LONG v27; // edx
  LONG lDistanceToMove[5]; // [esp+10h] [ebp-68h] BYREF
  struct tagRECT Rect; // [esp+24h] [ebp-54h] BYREF
  LONG v30; // [esp+40h] [ebp-38h]
  _BYTE v31[16]; // [esp+44h] [ebp-34h] BYREF
  _BYTE v32[36]; // [esp+54h] [ebp-24h] BYREF

  v3 = 0; /*0x432759*/
  v4 = *(void **)(this + 32); /*0x43275b*/
  if ( v4 ) /*0x432760*/
  {
    BinkMovie::FreeSurfaceTracker(*(_DWORD *)(this + 32)); /*0x432764*/
    __3_YAXPAX_Z(v4); /*0x43276a*/
    *(_DWORD *)(this + 32) = 0; /*0x432772*/
  }
  if ( *(_DWORD *)(this + 4) ) /*0x432775*/
  {
    BinkClose(*(_DWORD *)(this + 4)); /*0x43277d*/
    *(_DWORD *)(this + 4) = 0; /*0x432783*/
  }
  if ( *(_DWORD *)(this + 40) != -1 ) /*0x43278c*/
  {
    CloseHandle(*(HANDLE *)(this + 40)); /*0x43278f*/
    *(_DWORD *)(this + 40) = -1; /*0x432795*/
  }
  *(_DWORD *)(this + 48) = 0; /*0x43279c*/
  if ( Audio::IsSoundEnabled() ) /*0x43279f*/
  {
    v5 = Audio::GetDirectSound(); /*0x4327a8*/
    BinkSetSoundSystem(BinkOpenDirectSound, v5); /*0x4327b4*/
  }
  v6 = (char *)FullPath; /*0x4327ba*/
  v7 = RawFileClass::Construct(FullPath); /*0x4327c3*/
  v8 = (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 20))(v7, 0) == 1; /*0x4327d6*/
  RawFileClass::Dtor(v32); /*0x4327d9*/
  if ( v8 ) /*0x4327e0*/
  {
    v9 = BinkOpen(v6, 0); /*0x4327e4*/
LABEL_14:
    *(_DWORD *)(this + 4) = v9; /*0x43284f*/
    goto LABEL_15; /*0x43284f*/
  }
  lDistanceToMove[0] = 0; /*0x4327f8*/
  FullPath = 0; /*0x4327fc*/
  if ( (unsigned __int8)LookupFileInfoCache(&FullPath, lDistanceToMove, 0) == 1 ) /*0x43280a*/
  {
    FileA = CreateFileA(FullPath[3], 0x80000000, 3u, 0, 3u, 0x8000080u, 0); /*0x432824*/
    *(_DWORD *)(this + 40) = FileA; /*0x43282d*/
    if ( FileA != (HANDLE)-1 ) /*0x432830*/
    {
      SetFilePointer(FileA, lDistanceToMove[0], 0, 0); /*0x43283a*/
      v9 = BinkOpen(*(_DWORD *)(this + 40), &ToggleClass::`RTTI Class Hierarchy Descriptor'); /*0x432849*/
      goto LABEL_14; /*0x432849*/
    }
  }
LABEL_15:
  if ( *(_DWORD *)(this + 4) )
  {
    dword_89C490 = flt_A8EB9C; /*0x43287c*/
    v13 = Math::RoundToInt(*(float *)&flt_A8EB9C * 32768.0); /*0x43288d*/
    BinkSetVolume(*(_DWORD *)(this + 4), v13); /*0x432897*/
    *(_DWORD *)(this + 36) = 0x3C /*0x4328b5*/
                           / (unsigned int)(*(_DWORD *)(*(_DWORD *)(this + 4) + 20)
                                          / *(_DWORD *)(*(_DWORD *)(this + 4) + 24));
    v14 = (_DWORD *)BinkMovie::CreateSurfaceTracker(v6); /*0x4328b8*/
    v15 = *(int **)(this + 4); /*0x4328bd*/
    *(_DWORD *)(this + 32) = v14; /*0x4328c0*/
    v16 = 0; /*0x4328c3*/
    v17 = *v15; /*0x4328c5*/
    v18 = v15[1]; /*0x4328c7*/
    v19 = *(_DWORD *)(this + 12); /*0x4328ca*/
    v30 = v18; /*0x4328cd*/
    if ( !v19 ) /*0x4328d3*/
    {
      if ( v14 && *v14 ) /*0x4328d9*/
      {
        v20 = g_DSurface_Hidden; /*0x4328e3*/
        *(_DWORD *)(this + 12) = g_DSurface_Hidden; /*0x4328e5*/
        v16 = ((*(int (__thiscall **)(int))(*(_DWORD *)v20 + 124))(v20) - v17) / 2; /*0x4328f9*/
        v21 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 128))(*(_DWORD *)(this + 12)); /*0x4328fb*/
      }
      else
      {
        *(_DWORD *)(this + 12) = g_DSurface_Primary; /*0x43290d*/
        GetClientRect(g_hWnd, &Rect); /*0x432917*/
        v16 = (Rect.right - Rect.left - v17) / 2; /*0x432936*/
        v21 = Rect.bottom - Rect.top; /*0x432938*/
      }
      v3 = (v21 - v30) / 2; /*0x432943*/
    }
    FullPath = (LPCSTR *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 12) + 120))( /*0x43295e*/
                           *(_DWORD *)(this + 12),
                           v31);
    Rect::Set(0, 0, 0, 0); /*0x432965*/
    v22 = (LPCSTR *)v3; /*0x43296e*/
    Rect.bottom = v30; /*0x432974*/
    Rect.left = v16; /*0x432978*/
    v23 = (int)FullPath[2]; /*0x43297c*/
    if ( v23 <= 0 ) /*0x432981*/
      goto LABEL_40; /*0x432981*/
    lDistanceToMove[0] = (LONG)FullPath[3]; /*0x43298c*/
    if ( lDistanceToMove[0] <= 0 || v17 <= 0 || v30 <= 0 ) /*0x4329a0*/
      goto LABEL_40; /*0x4329a0*/
    v24 = *FullPath; /*0x4329a2*/
    if ( v16 < (int)*FullPath ) /*0x4329a7*/
    {
      Rect.left = (LONG)*FullPath; /*0x4329ab*/
      v17 = v16 + v17 - (_DWORD)v24; /*0x4329af*/
    }
    if ( v17 < 1 ) /*0x4329b4*/
      goto LABEL_40; /*0x4329b4*/
    FullPath = (LPCSTR *)FullPath[1]; /*0x4329bb*/
    if ( v3 < (int)FullPath ) /*0x4329bf*/
    {
      v22 = FullPath; /*0x4329c9*/
      Rect.bottom += v3 - (_DWORD)FullPath; /*0x4329cb*/
    }
    if ( Rect.bottom < 1 ) /*0x4329d4*/
      goto LABEL_40; /*0x4329d4*/
    if ( v17 + Rect.left > (int)&v24[v23] ) /*0x4329e1*/
      v17 = (int)&v24[v23 - Rect.left]; /*0x4329e9*/
    if ( v17 < 1 ) /*0x4329ee*/
      goto LABEL_40; /*0x4329ee*/
    bottom = Rect.bottom; /*0x4329f8*/
    if ( (int)v22 + Rect.bottom > (int)FullPath + lDistanceToMove[0] ) /*0x432a03*/
      bottom = (char *)FullPath + lDistanceToMove[0] - (char *)v22; /*0x432a07*/
    if ( bottom < 1 ) /*0x432a0c*/
    {
LABEL_40:
      left = lDistanceToMove[1]; /*0x432a16*/
      v22 = (LPCSTR *)lDistanceToMove[2]; /*0x432a1a*/
      v27 = lDistanceToMove[3]; /*0x432a1e*/
      bottom = lDistanceToMove[4]; /*0x432a22*/
    }
    else
    {
      left = Rect.left; /*0x432a0e*/
      v27 = v17; /*0x432a12*/
    }
    *(_DWORD *)(this + 16) = left; /*0x432a29*/
    *(_DWORD *)(this + 20) = v22; /*0x432a2c*/
    *(_DWORD *)(this + 24) = v27; /*0x432a2f*/
    *(_DWORD *)(this + 28) = bottom; /*0x432a32*/
    *(_DWORD *)(this + 8) = BinkDDSurfaceType(*(_DWORD *)(g_DSurface_Primary + 28)); /*0x432a44*/
    return 1; /*0x432a4a*/
  }
  else
  {
    Error = (const char *)BinkGetError(); /*0x432857*/
    Debug::Log("Bink Error: %s\n", Error);
    return 0; /*0x43286b*/
  }
}



// ==== 0x00432AB0  BinkMovieHandle::RenderFrameClipped  this=BinkMovieHandle  sig=csp ====
int __thiscall sub_432AB0(int this, int a2, int a3)
{
  int *v3; // eax
  int v4; // ebp
  int v5; // esi
  int *v6; // edi
  int result; // eax
  int v8; // ebx
  int v9; // ecx
  int v10; // ebp
  int v11; // edi
  int v12; // ebx
  int v13; // edx
  int v14; // esi
  int v16; // [esp+14h] [ebp-20h]
  int v18; // [esp+20h] [ebp-14h]
  _BYTE v19[16]; // [esp+24h] [ebp-10h] BYREF
  int v20; // [esp+3Ch] [ebp+8h]

  v3 = *(int **)(this + 4); /*0x432ab3*/
  v4 = v3[1]; /*0x432ac3*/
  v5 = *v3; /*0x432ac7*/
  v6 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 12) + 120))(*(_DWORD *)(this + 12), v19); /*0x432ad8*/
  result = 0; /*0x432ade*/
  v8 = v6[2]; /*0x432ae0*/
  v9 = 0; /*0x432ae3*/
  v16 = a2; /*0x432ae7*/
  v18 = v4; /*0x432aef*/
  if ( v8 <= 0 ) /*0x432af3*/
    goto LABEL_18; /*0x432af3*/
  v20 = v6[3]; /*0x432afe*/
  if ( v20 <= 0 || v5 <= 0 || v4 <= 0 ) /*0x432b12*/
    goto LABEL_18; /*0x432b12*/
  v10 = *v6; /*0x432b18*/
  if ( a2 < *v6 ) /*0x432b20*/
  {
    v16 = *v6; /*0x432b24*/
    v5 = a2 + v5 - v10; /*0x432b28*/
  }
  if ( v5 < 1 ) /*0x432b33*/
    goto LABEL_18; /*0x432b33*/
  v11 = v6[1]; /*0x432b35*/
  if ( a3 < v11 ) /*0x432b42*/
  {
    v18 += a3 - v11; /*0x432b50*/
    a3 = v11; /*0x432b54*/
  }
  if ( v18 < 1 ) /*0x432b5d*/
    goto LABEL_18; /*0x432b5d*/
  if ( v5 + v16 > v8 + v10 ) /*0x432b6a*/
    v5 = v8 + v10 - v16; /*0x432b72*/
  if ( v5 < 1 ) /*0x432b77*/
    goto LABEL_18; /*0x432b77*/
  v12 = v18; /*0x432b81*/
  if ( v18 + a3 > v20 + v11 ) /*0x432b90*/
    v12 = v20 + v11 - a3; /*0x432b94*/
  if ( v12 < 1 ) /*0x432b99*/
  {
LABEL_18:
    v13 = 0; /*0x432ba7*/
    v14 = 0; /*0x432ba9*/
  }
  else
  {
    result = v16; /*0x432b9b*/
    v9 = a3; /*0x432b9f*/
    v13 = v5; /*0x432ba1*/
    v14 = v12; /*0x432ba3*/
  }
  *(_DWORD *)(this + 16) = result; /*0x432bb2*/
  *(_DWORD *)(this + 20) = v9; /*0x432bb4*/
  *(_DWORD *)(this + 24) = v13; /*0x432bb7*/
  *(_DWORD *)(this + 28) = v14; /*0x432bba*/
  return result; /*0x432bbd*/
}



// ==== 0x00432BD0  BinkMovieHandle::Check  this=BinkMovieHandle  sig=csp ====
int __thiscall BinkMovieHandle::Check(BinkMovieHandle *this, int a2)
{
  int result; // eax

  result = BinkGoto(this->tempPath, a2, 1); /*0x432bde*/
  this->memoryBuffer = 0; /*0x432be4*/
  return result; /*0x432beb*/
}



// ==== 0x00432C10  WeaponTypeClass::COMStub_432C10  this=WeaponTypeClass  sig=csp ====
int __thiscall COMStub_432C10(WeaponTypeClass *this, int a2)
{
  AbstractClass *NeedsSaveOrLink; // ecx
  int result; // eax

  NeedsSaveOrLink = (AbstractClass *)this->?; /*0x432c10*/
  if ( NeedsSaveOrLink ) /*0x432c15*/
    return AbstractClass::getTotalValue(NeedsSaveOrLink, a2); /*0x432c1c*/
  return result; /*0x432c21*/
}



// ==== 0x00432C30  BinkMovie::Pause  this=BinkMovie  sig=csp ====
int __thiscall BinkMovie::Pause(BinkMovie *this, unsigned __int8 a2)
{
  return BinkPause(this->BinkMovie_field_0x4[0], a2); /*0x432c44*/
}



// ==== 0x00432C50  BinkMovieHandle::IsAtEnd  this=BinkMovieHandle  sig=csp ====
int __thiscall BinkMovie::IsAtEnd(BinkMovieHandle *this)
{
  _DWORD *tempPath; // eax
  void *v2; // edx

  tempPath = this->tempPath; /*0x432c50*/
  v2 = (void *)tempPath[3]; /*0x432c54*/
  return (unsigned int)v2 >= tempPath[2] || v2 < this->memoryBuffer; /*0x432c5c*/
}



// ==== 0x00432C70  BinkMovie::Play  this=BinkMovie  sig=csp ====
int __thiscall BinkMovie::Play(BinkMovie *this)
{
  void (__stdcall *v3)(HWND, LPPOINT); // ebp
  int BinkMovie_field_0x4; // eax
  unsigned int v5; // ecx
  DSurface *BinkMovie_field_0xC; // eax
  int BinkMovie_field_0x10; // eax
  int BinkMovie_field_0x14; // ecx
  int v9; // edx
  _DWORD v10[4]; // [esp+4h] [ebp-4Ch] BYREF
  struct tagRECT Rect; // [esp+14h] [ebp-3Ch] BYREF
  struct tagRECT v12; // [esp+24h] [ebp-2Ch] BYREF
  MSG Msg; // [esp+34h] [ebp-1Ch] BYREF

  if ( this->BinkMovie_field_0x4 ) /*0x432c76*/
  {
    Timer::PumpMessages((Timer *)dword_87F770); /*0x432c9f*/
    v3 = (void (__stdcall *)(HWND, LPPOINT))ClientToScreen; /*0x432caa*/
    *((_BYTE *)this + 44) = 1; /*0x432cb0*/
    *((_BYTE *)this + 45) = 0; /*0x432cb4*/
    while ( 1 ) /*0x432cb8*/
    {
      BinkMovie_field_0x4 = this->BinkMovie_field_0x4; /*0x432cb8*/
      v5 = *(_DWORD *)(BinkMovie_field_0x4 + 12); /*0x432cbb*/
      if ( v5 >= *(_DWORD *)(BinkMovie_field_0x4 + 8) || v5 < this->q00C ) /*0x432ccc*/
        break; /*0x432ccc*/
      ++dword_AA0430; /*0x432cdd*/
      if ( GameLoopMessagePump(&Msg, 0, 0, 0, 0) ) /*0x432ceb*/
      {
        if ( !IsMessageDialog(&Msg, 0, 0, 0) ) /*0x432d05*/
          return Timer::PumpMessages((Timer *)dword_87F770); /*0x432d05*/
        TranslateMessage(&Msg); /*0x432d10*/
        DispatchMessageA(&Msg); /*0x432d1b*/
      }
      else
      {
        if ( !*((_BYTE *)this + 44) ) /*0x432d23*/
          Sleep(0x21u); /*0x432d2c*/
        BinkMovie_field_0xC = (DSurface *)this->BinkMovie_field_0xC; /*0x432d32*/
        if ( BinkMovie_field_0xC == g_DSurface_Primary ) /*0x432d3d*/
        {
          GetClientRect(g_hWnd, &Rect); /*0x432d4a*/
          v3(g_hWnd, (LPPOINT)&Rect); /*0x432d58*/
          BinkMovie::RenderLoop( /*0x432d74*/
            (bool *)this->__pad_0,
            this->BinkMovie_field_0xC,
            Rect.left + this->BinkMovie_field_0x10,
            Rect.top + this->BinkMovie_field_0x14);
        }
        else if ( (unsigned __int8)BinkMovie::RenderLoop( /*0x432d89*/
                                     (bool *)this->__pad_0,
                                     (int)BinkMovie_field_0xC,
                                     this->BinkMovie_field_0x10,
                                     this->BinkMovie_field_0x14) )
        {
          GetClientRect(g_hWnd, &v12); /*0x432d9e*/
          v3(g_hWnd, (LPPOINT)&v12); /*0x432dab*/
          BinkMovie_field_0x10 = this->BinkMovie_field_0x10; /*0x432db4*/
          BinkMovie_field_0x14 = this->BinkMovie_field_0x14; /*0x432db6*/
          v10[2] = *(_DWORD *)this->__pad_18; /*0x432dbc*/
          v10[3] = *(_DWORD *)&this->__pad_18[4]; /*0x432dc9*/
          v9 = this->BinkMovie_field_0xC; /*0x432dd3*/
          v10[1] = v12.top + BinkMovie_field_0x14; /*0x432dd6*/
          v10[0] = v12.left + BinkMovie_field_0x10; /*0x432de1*/
          (*(void (__thiscall **)(DSurface *, _DWORD *, int, int *, _DWORD, int))(g_DSurface_Primary->DSurface_field_0x0 /*0x432dec*/
                                                                                + 8))(
            g_DSurface_Primary,
            v10,
            v9,
            &this->BinkMovie_field_0x10,
            0,
            1);
          v3 = (void (__stdcall *)(HWND, LPPOINT))ClientToScreen; /*0x432def*/
        }
        if ( EventQueue::Process((EventQueue *)dword_87F770) /*0x432e21*/
          && !this->__pad_0[0]
          && EventQueue::Read((EventQueue *)dword_87F770) == 2075 )
        {
          return Timer::PumpMessages((Timer *)dword_87F770); /*0x432e21*/
        }
      }
    }
    return Timer::PumpMessages((Timer *)dword_87F770); /*0x432e27*/
  }
  else
  {
    BinkGetError(); /*0x432c7d*/
    return Debug::Log(); /*0x432c89*/
  }
}



// ==== 0x00432E40  BinkMovie::RenderLoop  this=BinkMovie  sig=csp ====
int __thiscall BinkMovie::RenderLoop(bool *this, int a2, int a3, int a4)
{
  int v5; // eax
  char v6; // al
  int v7; // edx
  int v8; // eax
  DSurface *v9; // eax
  int result; // eax
  BinkMovie *v12; // ecx
  char v13; // bl
  int v14; // ebp
  int v15; // eax
  int v16; // ecx
  int v17; // [esp-Ch] [ebp-24h]
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF
  int v19; // [esp+1Ch] [ebp+4h]

  if ( *(float *)&dword_89C490 != flt_A8EB9C ) /*0x432e58*/
  {
    dword_89C490 = LODWORD(flt_A8EB9C); /*0x432e5f*/
    LOWORD(v5) = Math::RoundToInt(flt_A8EB9C * 32768.0); /*0x432e70*/
    BinkSetVolume(this->u32_4, v5); /*0x432e7a*/
  }
  v6 = *(this + 44); /*0x432e87*/
  if ( byte_A8ED80 ) /*0x432e8a*/
  {
    if ( !v6 ) /*0x432eb8*/
    {
      Debug::Log(); /*0x432ebf*/
      v8 = this->u32_4; /*0x432ec4*/
      *(this + 44) = 1; /*0x432eca*/
      BinkPause(v8, 0); /*0x432ed1*/
      v9 = (DSurface *)this->q00C; /*0x432ed7*/
      if ( v9 == g_DSurface_Primary ) /*0x432ee2*/
      {
        GetClientRect(g_hWnd, &Rect); /*0x432ef0*/
        ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x432f02*/
        BinkMovie::RenderSingleFrame( /*0x432f22*/
          (BinkMovie *)this,
          this->q00C,
          Rect.left + this->u32_4,
          Rect.top + this->u32_14,
          1);
      }
      else
      {
        BinkMovie::RenderSingleFrame((BinkMovie *)this, (int)v9, this->u32_4, this->u32_14, 1); /*0x432f31*/
      }
    }
  }
  else if ( v6 == 1 ) /*0x432e8e*/
  {
    Debug::Log(); /*0x432e99*/
    v7 = this->u32_4; /*0x432e9e*/
    *(this + 44) = 0; /*0x432ea4*/
    BinkPause(v7, 1); /*0x432eab*/
  }
  if ( *(this + 45) || (result = BinkWait(this->u32_4), LOBYTE(result) = result == 0, (_BYTE)result) ) /*0x432f4e*/
  {
    do /*0x43300d*/
    {
      BinkDoFrame(this->u32_4); /*0x432f62*/
      v12 = (BinkMovie *)this->q008; /*0x432f68*/
      v13 = 0; /*0x432f6b*/
      *(this + 45) = 0; /*0x432f6f*/
      if ( v12 ) /*0x432f73*/
      {
        v13 = BinkMovie::CheckKeyframeTransition(v12, *((_DWORD *)this + 9) * *(_DWORD *)(this->u32_4 + 12)); /*0x432f85*/
        if ( v13 ) /*0x432f89*/
          BinkMovie::AdjustSurfaceFormat((BinkMovie *)this, a2); /*0x432f8e*/
      }
      v19 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x432fa0*/
      if ( v19 ) /*0x432fa4*/
      {
        v14 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2); /*0x432fb1*/
        v15 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 128))(a2); /*0x432fb3*/
        v16 = this->q008; /*0x432fb9*/
        if ( v13 ) /*0x432fbe*/
          v16 |= 0x80000000; /*0x432fc0*/
        BinkCopyToBuffer(this->u32_4, v19, v14, v15, a3, a4, v16); /*0x432fdc*/
        (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x432fe6*/
      }
      BinkMovie::BlitToTarget((BinkMovie *)this, a2); /*0x432fec*/
      v17 = this->u32_4; /*0x432ff4*/
      this->q00C = *(_DWORD *)(v17 + 12); /*0x432ff8*/
      BinkNextFrame(v17); /*0x432ffb*/
      result = BinkWait(this->u32_4); /*0x433005*/
    }
    while ( !result ); /*0x43300d*/
    LOBYTE(result) = 1; /*0x433016*/
  }
  return result; /*0x432f50*/
}



// ==== 0x00433040  BinkMovieHandle::RenderFrameToSurface  this=BinkMovieHandle  sig=csp ====
bool __thiscall BinkMovie::RenderFrameToSurface(BinkMovieHandle *this)
{
  return BinkMovie::RenderLoop((bool *)this->MovieHandle, this->width, this->height, this->currentFrame); /*0x433051*/
}



// ==== 0x00433060  BinkMovieHandle::CopyFrameToSurface  this=BinkMovieHandle  sig=csp ====
_DWORD *__thiscall BinkMovieHandle::CopyFrameToSurface(BinkMovieHandle *this)
{
  DSurface *width; // edi
  int v3; // ebx
  int v4; // ebp
  int v5; // eax
  int currentFrame; // ebp
  int v7; // ebx
  int v8; // eax
  int v10; // [esp+10h] [ebp-18h]
  int v11; // [esp+10h] [ebp-18h]
  int v12; // [esp+14h] [ebp-14h]
  int height; // [esp+14h] [ebp-14h]
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  width = (DSurface *)this->width; /*0x43306e*/
  if ( width == g_DSurface_Primary ) /*0x433073*/
  {
    GetClientRect(g_hWnd, &Rect); /*0x433085*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x433096*/
    v3 = Rect.left + this->height; /*0x4330a7*/
    v4 = Rect.top + this->currentFrame; /*0x4330ae*/
    width = (DSurface *)this->width; /*0x4330b0*/
    BinkMovie::AdjustSurfaceFormat((BinkMovie *)this, (int)width); /*0x4330b4*/
    v12 = (*((int (__thiscall **)(DSurface *, _DWORD, _DWORD))width->DSurface_field_0x0 + 23))(width, 0, 0); /*0x4330c8*/
    if ( v12 ) /*0x4330cc*/
    {
      v10 = (*((int (__thiscall **)(DSurface *))width->DSurface_field_0x0 + 29))(width); /*0x4330dd*/
      v5 = (*((int (__thiscall **)(DSurface *))width->DSurface_field_0x0 + 32))(width); /*0x4330e1*/
      BinkCopyToBuffer(this->tempPath, v12, v10, v5, v3, v4, (int)this->renderTarget | 0x80000000); /*0x4330fe*/
LABEL_6:
      (*((void (__thiscall **)(DSurface *))width->DSurface_field_0x0 + 24))(width); /*0x43315b*/
    }
  }
  else
  {
    currentFrame = this->currentFrame; /*0x433103*/
    height = this->height; /*0x433109*/
    BinkMovie::AdjustSurfaceFormat((BinkMovie *)this, this->width); /*0x43310d*/
    v7 = (*((int (__thiscall **)(DSurface *, _DWORD, _DWORD))width->DSurface_field_0x0 + 23))(width, 0, 0); /*0x43311f*/
    if ( v7 ) /*0x433123*/
    {
      v11 = (*((int (__thiscall **)(DSurface *))width->DSurface_field_0x0 + 29))(width); /*0x433130*/
      v8 = (*((int (__thiscall **)(DSurface *))width->DSurface_field_0x0 + 32))(width); /*0x433134*/
      BinkCopyToBuffer(this->tempPath, v7, v11, v8, height, currentFrame, (int)this->renderTarget | 0x80000000); /*0x433155*/
      goto LABEL_6; /*0x433155*/
    }
  }
  return BinkMovie::BlitToTarget((BinkMovie *)this, (int)width); /*0x43316a*/
}



// ==== 0x00433180  BinkMovieClass::SetPosition  this=BinkMovieClass  sig=csp ====
_DWORD *__thiscall BinkMovieClass::SetPosition(BinkMovieClass *this, int a2, int a3, int a4)
{
  int v5; // ebx
  int v6; // ebp
  int v7; // eax

  BinkMovie::AdjustSurfaceFormat((BinkMovie *)this, a2); /*0x43318a*/
  v5 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x43319c*/
  if ( v5 ) /*0x4331a0*/
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2); /*0x4331ae*/
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 128))(a2); /*0x4331b0*/
    BinkCopyToBuffer(this->BinkMovieClass_field_0x04, v5, v6, v7, a3, a4, this->BinkMovieClass_field_0x08 | 0x80000000); /*0x4331d1*/
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x4331db*/
  }
  return BinkMovie::BlitToTarget((BinkMovie *)this, a2); /*0x4331e7*/
}



// ==== 0x004331F0  BinkMovie::RenderSingleFrame  this=BinkMovie  sig=csp ====
int __thiscall BinkMovie::RenderSingleFrame(BinkMovie *this, int a2, int a3, int a4, char a5)
{
  int v6; // ebx
  int v7; // ebp
  int v8; // eax
  unsigned int BinkMovie_field_0x8; // ecx

  if ( a5 ) /*0x4331ff*/
    BinkMovie::AdjustSurfaceFormat(this, a2); /*0x433202*/
  v6 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x433214*/
  if ( v6 ) /*0x433218*/
  {
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2); /*0x433226*/
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 128))(a2); /*0x433228*/
    BinkMovie_field_0x8 = (unsigned int)this->BinkMovie_field_0x8; /*0x433232*/
    if ( a5 ) /*0x433237*/
      BinkMovie_field_0x8 |= 0x80000000; /*0x433239*/
    BinkCopyToBuffer(this->BinkMovie_field_0x4[0], v6, v7, v8, a3, a4, BinkMovie_field_0x8); /*0x433251*/
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x43325b*/
  }
  return (int)BinkMovie::BlitToTarget(this, a2); /*0x433267*/
}



// ==== 0x00433270  BinkMovie::BlitToTarget  this=BinkMovie  sig=csp ====
_DWORD *__thiscall BinkMovie::BlitToTarget(BinkMovie *this, int a2)
{
  _DWORD *result; // eax
  int *v4; // ebp
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  int v11; // ebx
  int v12; // eax
  int v13; // [esp+10h] [ebp-28h]
  int v14; // [esp+14h] [ebp-24h]
  _DWORD v15[4]; // [esp+18h] [ebp-20h] BYREF
  _BYTE v16[16]; // [esp+28h] [ebp-10h] BYREF

  result = (_DWORD *)this->BinkMovie_field_0x20; /*0x433277*/
  if ( result ) /*0x43327c*/
  {
    if ( *result ) /*0x433282*/
    {
      v4 = result + 5; /*0x43328e*/
      if ( (int)result[7] > 0 && (int)result[8] > 0 ) /*0x43329e*/
      {
        v5 = result[4]; /*0x4332a6*/
        v6 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 120))(v5, v16); /*0x4332b2*/
        v13 = *(_DWORD *)(v6 + 8); /*0x4332cb*/
        v7 = *v4; /*0x4332d4*/
        v14 = *(_DWORD *)(v6 + 12); /*0x4332d6*/
        v8 = v4[1]; /*0x4332da*/
        v15[2] = v4[2]; /*0x4332e0*/
        v9 = *(_DWORD *)this->__pad_18; /*0x4332e4*/
        v15[3] = v4[3]; /*0x4332ea*/
        v10 = (v9 - v13) / 2 + v7; /*0x4332fd*/
        v11 = *(_DWORD *)&this->__pad_18[4] - v14 + v8; /*0x433309*/
        v12 = this->BinkMovie_field_0x14[0]; /*0x43330b*/
        v15[0] = this->BinkMovie_field_0x10[0] + v10; /*0x43330e*/
        v15[1] = v12 + v11; /*0x43331c*/
        return (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int, int *, int, int))(*(_DWORD *)a2 + 8))( /*0x433323*/
                           a2,
                           v15,
                           v5,
                           v4,
                           1,
                           1);
      }
    }
  }
  return result; /*0x433328*/
}



// ==== 0x00433330  BinkMovie::AdjustSurfaceFormat  this=BinkMovie  sig=csp ====
int __thiscall BinkMovie::AdjustSurfaceFormat(BinkMovie *this, int a2)
{
  int result; // eax
  int v4; // edx
  int *v5; // eax
  int v6; // edi
  __int64 v7; // rax
  int v8; // ecx
  int v9; // [esp+4h] [ebp-30h] BYREF
  int v10; // [esp+8h] [ebp-2Ch]
  int v11; // [esp+Ch] [ebp-28h]
  int v12; // [esp+10h] [ebp-24h]
  int v13; // [esp+14h] [ebp-20h]
  int v14; // [esp+18h] [ebp-1Ch]
  _BYTE v15[16]; // [esp+24h] [ebp-10h] BYREF

  result = this->BinkMovie_field_0x20; /*0x433336*/
  if ( result ) /*0x43333b*/
  {
    if ( *(_DWORD *)result ) /*0x433341*/
    {
      v9 = *(_DWORD *)(result + 36); /*0x433351*/
      v10 = *(_DWORD *)(result + 40); /*0x433358*/
      v11 = *(_DWORD *)(result + 44); /*0x43335f*/
      v4 = *(_DWORD *)(result + 48); /*0x433363*/
      v12 = v4; /*0x433368*/
      if ( v11 > 0 && v4 > 0 ) /*0x433370*/
      {
        v5 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(result + 16) + 120))( /*0x43337d*/
                      *(_DWORD *)(result + 16),
                      v15);
        v13 = *v5; /*0x433384*/
        v14 = v5[1]; /*0x43338b*/
        v6 = v5[3]; /*0x433392*/
        v7 = *(_DWORD *)this->__pad_18 - v5[2]; /*0x43339a*/
        v8 = *(_DWORD *)&this->__pad_18[4] - v6 + v10; /*0x4333b0*/
        v9 += this->BinkMovie_field_0x10[0] + (((int)v7 - HIDWORD(v7)) >> 1); /*0x4333bb*/
        v10 = this->BinkMovie_field_0x14[0] + v8; /*0x4333c5*/
        return (*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)a2 + 20))(a2, &v9, 0); /*0x4333cf*/
      }
    }
  }
  return result; /*0x4333d3*/
}



// ==== 0x004333F0  BinkMovieClass::RenderFrameToSurface  this=BinkMovieClass  sig=csp ====
unsigned int __thiscall BinkMovieClass::RenderFrameToSurface(BinkMovieClass *this)
{
  unsigned int result; // eax
  int v3; // eax
  int BinkMovieClass_field_0x04; // ecx
  DSurface *BinkMovieClass_field_0x0C; // edi
  int v6; // ebx
  int v7; // ebp
  int v8; // eax
  int v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // [esp+10h] [ebp-18h]
  int v13; // [esp+10h] [ebp-18h]
  int v14; // [esp+14h] [ebp-14h]
  int BinkMovieClass_field_0x10; // [esp+14h] [ebp-14h]
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  LOBYTE(result) = *((_BYTE *)this + 44); /*0x433400*/
  if ( stru_A8EB00.?[412] ) /*0x433403*/
  {
    if ( (_BYTE)result ) /*0x433434*/
      return result; /*0x433434*/
    Debug::Log(); /*0x43343f*/
    BinkMovieClass_field_0x04 = this->BinkMovieClass_field_0x04; /*0x433444*/
    *((_BYTE *)this + 44) = 1; /*0x43344a*/
    BinkPause(BinkMovieClass_field_0x04, 0); /*0x433451*/
    BinkMovieClass_field_0x0C = (DSurface *)this->BinkMovieClass_field_0x0C; /*0x433457*/
    if ( BinkMovieClass_field_0x0C == g_DSurface_Primary ) /*0x433461*/
    {
      GetClientRect(g_hWnd, &Rect); /*0x433472*/
      ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x433484*/
      v6 = Rect.left + this->BinkMovieClass_field_0x10; /*0x433495*/
      v7 = Rect.top + *((_DWORD *)this + 5); /*0x43349c*/
      BinkMovieClass_field_0x0C = (DSurface *)this->BinkMovieClass_field_0x0C; /*0x43349e*/
      BinkMovie::AdjustSurfaceFormat((BinkMovie *)this, (int)BinkMovieClass_field_0x0C); /*0x4334a2*/
      v14 = (*((int (__thiscall **)(DSurface *, _DWORD, _DWORD))BinkMovieClass_field_0x0C->DSurface_field_0x0 + 23))( /*0x4334b6*/
              BinkMovieClass_field_0x0C,
              0,
              0);
      if ( v14 ) /*0x4334ba*/
      {
        v12 = (*((int (__thiscall **)(DSurface *))BinkMovieClass_field_0x0C->DSurface_field_0x0 + 29))(BinkMovieClass_field_0x0C); /*0x4334cb*/
        v8 = (*((int (__thiscall **)(DSurface *))BinkMovieClass_field_0x0C->DSurface_field_0x0 + 32))(BinkMovieClass_field_0x0C); /*0x4334cf*/
        BinkCopyToBuffer( /*0x4334ec*/
          this->BinkMovieClass_field_0x04,
          v14,
          v12,
          v8,
          v6,
          v7,
          this->BinkMovieClass_field_0x08 | 0x80000000);
LABEL_10:
        (*((void (__thiscall **)(DSurface *))BinkMovieClass_field_0x0C->DSurface_field_0x0 + 24))(BinkMovieClass_field_0x0C); /*0x433549*/
      }
    }
    else
    {
      v9 = *((_DWORD *)this + 5); /*0x4334f1*/
      BinkMovieClass_field_0x10 = this->BinkMovieClass_field_0x10; /*0x4334f7*/
      BinkMovie::AdjustSurfaceFormat((BinkMovie *)this, this->BinkMovieClass_field_0x0C); /*0x4334fb*/
      v10 = (*((int (__thiscall **)(DSurface *, _DWORD, _DWORD))BinkMovieClass_field_0x0C->DSurface_field_0x0 + 23))( /*0x43350d*/
              BinkMovieClass_field_0x0C,
              0,
              0);
      if ( v10 ) /*0x433511*/
      {
        v13 = (*((int (__thiscall **)(DSurface *))BinkMovieClass_field_0x0C->DSurface_field_0x0 + 29))(BinkMovieClass_field_0x0C); /*0x43351e*/
        v11 = (*((int (__thiscall **)(DSurface *))BinkMovieClass_field_0x0C->DSurface_field_0x0 + 32))(BinkMovieClass_field_0x0C); /*0x433522*/
        BinkCopyToBuffer( /*0x433543*/
          this->BinkMovieClass_field_0x04,
          v10,
          v13,
          v11,
          BinkMovieClass_field_0x10,
          v9,
          this->BinkMovieClass_field_0x08 | 0x80000000);
        goto LABEL_10; /*0x433543*/
      }
    }
    return (unsigned int)BinkMovie::BlitToTarget((BinkMovie *)this, (int)BinkMovieClass_field_0x0C); /*0x433553*/
  }
  if ( (_BYTE)result == 1 ) /*0x433407*/
  {
    Debug::Log(); /*0x433412*/
    v3 = this->BinkMovieClass_field_0x04; /*0x433417*/
    *((_BYTE *)this + 44) = 0; /*0x43341d*/
    return BinkPause(v3, 1); /*0x433424*/
  }
  return result; /*0x43342a*/
}



// ==== 0x00433560  sub_433560  this=-  sig=ida-proto ====
char __fastcall sub_433560(int a1, _BYTE *a2)
{
  *(_DWORD *)a1 = a2; /*0x433560*/
  *(_BYTE *)(a1 + 4) = 0; /*0x433562*/
  return *a2 & 1; /*0x43356a*/
}



// ==== 0x004335A0  sub_4335A0  this=-  sig=ida-proto ====
char __fastcall sub_4335A0(int a1, _BYTE *a2, char a3)
{
  *(_DWORD *)a1 = a2; /*0x4335a4*/
  *(_BYTE *)(a1 + 4) = 0; /*0x4335a6*/
  *a2 = a3; /*0x4335aa*/
  return a3; /*0x4335ac*/
}



// ==== 0x004335E0  BinkMovieClass::AllocateRenderSurface  this=CampaignScore  sig=csp ====
int __fastcall sub_4335E0(_BYTE *a1, _BYTE *a2, int a3)
{
  char v4; // bl
  int v5; // ecx
  int v6; // ebp
  _BYTE *v7; // esi
  char v8; // al
  bool v9; // zf
  char v11; // [esp+18h] [ebp-Ch]
  char v12; // [esp+18h] [ebp-Ch]
  char v13; // [esp+20h] [ebp-4h]
  int v14; // [esp+28h] [ebp+4h]

  v4 = 0; /*0x4335e9*/
  v5 = 0; /*0x4335eb*/
  v6 = 1; /*0x4335ed*/
  v13 = 0; /*0x4335f4*/
  v7 = a2; /*0x4335fa*/
  *a2 = *a1 & 1; /*0x4335fc*/
  if ( a3 != 1 ) /*0x433603*/
  {
    v14 = a3 - 1; /*0x433609*/
    while ( 1 ) /*0x433613*/
    {
      if ( !((v5 + 1) % 7u) ) /*0x433621*/
      {
        v11 = ++v4; /*0x43362c*/
        if ( v4 == 8 ) /*0x433630*/
        {
          v4 = 0; /*0x433632*/
          ++v7; /*0x433634*/
          v11 = 0; /*0x433635*/
          *v7 = 0; /*0x433639*/
        }
        ++v6; /*0x43364d*/
        *v7 |= 1 << v11; /*0x43364e*/
      }
      if ( ++v13 == 8 ) /*0x43365c*/
      {
        v13 = 0; /*0x43365e*/
        ++a1; /*0x433663*/
      }
      v8 = ((1 << v13) & (unsigned __int8)*a1) != 0; /*0x433675*/
      v12 = ++v4; /*0x43367d*/
      if ( v4 == 8 ) /*0x433681*/
      {
        v4 = 0; /*0x433683*/
        ++v7; /*0x433685*/
        v12 = 0; /*0x433686*/
        *v7 = 0; /*0x43368a*/
      }
      v9 = v14 == 1; /*0x4336a0*/
      *v7 |= v8 << v12; /*0x4336a1*/
      --v14; /*0x4336a3*/
      if ( v9 ) /*0x4336a7*/
        break; /*0x4336a7*/
      ++v5; /*0x43360f*/
    }
  }
  return v6; /*0x4336ad*/
}



// ==== 0x004336C0  BinkMovieClass::ReleaseRenderSurface  this=BinkMovieClass  sig=ida-proto ====
unsigned int __fastcall sub_4336C0(unsigned __int8 *a1, _BYTE *a2, int a3)
{
  unsigned __int8 *v3; // esi
  char v4; // bl
  int v5; // ecx
  unsigned int result; // eax
  int v7; // edi
  _BYTE *v8; // ebp
  char v9; // al
  char v10; // [esp+18h] [ebp-4h]

  v3 = a1; /*0x4336c6*/
  v4 = 0; /*0x4336cf*/
  *a2 = *a1 & 1; /*0x4336d7*/
  v5 = 0; /*0x4336d9*/
  result = (unsigned int)(a3 + 7) >> 3; /*0x4336db*/
  v7 = a3 - 1; /*0x4336de*/
  v8 = a2; /*0x4336e3*/
  v10 = 0; /*0x4336e5*/
  if ( a3 != 1 ) /*0x4336e9*/
  {
    while ( 1 ) /*0x4336f1*/
    {
      if ( !((v5 + 1) % 7u) && ++v4 == 8 ) /*0x43370a*/
      {
        v4 = 0; /*0x43370c*/
        ++v3; /*0x43370e*/
      }
      if ( ++v4 == 8 ) /*0x433714*/
      {
        v4 = 0; /*0x433716*/
        ++v3; /*0x433718*/
      }
      v9 = ((1 << v4) & *v3) != 0; /*0x43372c*/
      if ( ++v10 == 8 ) /*0x433738*/
      {
        ++v8; /*0x43373a*/
        v10 = 0; /*0x43373b*/
        *v8 = 0; /*0x433740*/
      }
      --v7; /*0x433755*/
      *v8 |= v9 << v10; /*0x433756*/
      if ( !v7 ) /*0x433759*/
        break; /*0x433759*/
      ++v5; /*0x4336ed*/
    }
    return (unsigned int)(a3 + 7) >> 3; /*0x43375b*/
  }
  return result; /*0x43375f*/
}



// ==== 0x00433770  BinkMovieClass::OpenFile  this=Coord  sig=csp ====
unsigned int __fastcall sub_433770(unsigned __int8 *a1, _BYTE *a2, unsigned int a3)
{
  unsigned __int8 *v3; // esi
  char v4; // bl
  int v5; // eax
  _BYTE *v6; // edi
  char v7; // al
  unsigned int v9; // [esp+10h] [ebp-14h]
  int v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+18h] [ebp-Ch]
  char v12; // [esp+20h] [ebp-4h]

  v3 = a1; /*0x433776*/
  v4 = 0; /*0x433780*/
  *a2 = *a1 & 1; /*0x433785*/
  v5 = 0; /*0x433788*/
  v6 = a2; /*0x43378c*/
  v12 = 0; /*0x43378e*/
  v10 = 0; /*0x433792*/
  v9 = 0; /*0x433796*/
  if ( a3 ) /*0x43379a*/
  {
    while ( 1 ) /*0x4337ae*/
    {
      v11 = v5 + 1; /*0x4337ae*/
      if ( !((v5 + 1) % 7u) && ++v4 == 8 ) /*0x4337bd*/
      {
        v4 = 0; /*0x4337bf*/
        ++v3; /*0x4337c1*/
      }
      if ( ++v4 == 8 ) /*0x4337c7*/
      {
        v4 = 0; /*0x4337c9*/
        ++v3; /*0x4337cb*/
      }
      v7 = ((1 << v4) & *v3) != 0; /*0x4337df*/
      if ( ++v12 == 8 ) /*0x4337eb*/
      {
        ++v6; /*0x4337ed*/
        v12 = 0; /*0x4337ee*/
        *v6 = 0; /*0x4337f3*/
      }
      *v6 |= v7 << v12; /*0x43380b*/
      if ( !(++v10 % 16) ) /*0x43381c*/
      {
        ++v9; /*0x433829*/
        if ( !*((_WORD *)v6 - 1) ) /*0x433824*/
          break; /*0x433824*/
      }
      if ( v9 >= a3 ) /*0x433839*/
        goto LABEL_14; /*0x433839*/
      v5 = v11; /*0x4337a2*/
    }
  }
  else
  {
LABEL_14:
    *(_WORD *)&a2[2 * a3 - 2] = 0; /*0x433841*/
  }
  return v9; /*0x43384e*/
}



// ==== 0x00433860  sub_433860  this=-  sig=ida-proto ====
int sub_433860()
{
  dword_89C4A8 = 0; /*0x433862*/
  dword_89C4AC = 0; /*0x433867*/
  dword_89C4B0 = 0; /*0x43386c*/
  dword_89C4B4 = 0; /*0x433871*/
  return 0; /*0x433876*/
}



// ==== 0x00433880  BitTextClass::ParseFontData  this=BitFont  sig=csp ====
int __thiscall BitTextClass::ParseFontData(int this, char *Source)
{
  struct tagRECT *v3; // ebp
  _DWORD *Font; // eax

  v3 = (struct tagRECT *)(this + 48); /*0x43388a*/
  *(_DWORD *)this = &BitFont::`vftable'; /*0x433895*/
  *(_DWORD *)(this + 4) = 0; /*0x43389b*/
  *(_WORD *)(this + 36) = 0x7FFF; /*0x43389e*/
  *(_WORD *)(this + 38) = 13653; /*0x4338a4*/
  *(_DWORD *)(this + 40) = 64; /*0x4338aa*/
  *(_BYTE *)(this + 64) = 1; /*0x4338b1*/
  *(_BYTE *)(this + 65) = 1; /*0x4338b4*/
  *(_DWORD *)(this + 24) = 1; /*0x4338b7*/
  *(_DWORD *)(this + 28) = 1; /*0x4338ba*/
  *(_DWORD *)(this + 32) = 0; /*0x4338bd*/
  *(_DWORD *)(this + 12) = 0; /*0x4338c0*/
  *(_DWORD *)(this + 8) = 0; /*0x4338c3*/
  SetRect((LPRECT)(this + 48), 0, 0, 0, 0); /*0x4338c6*/
  *(_DWORD *)(this + 44) = 1; /*0x4338d0*/
  Font = File::LoadFont(Source); /*0x4338d3*/
  *(_DWORD *)(this + 4) = Font; /*0x4338da*/
  if ( Font ) /*0x4338dd*/
  {
    *(_DWORD *)(this + 24) = Font[1]; /*0x4338e2*/
    *(_DWORD *)(this + 28) = Font[3]; /*0x4338ea*/
    sub_434700((ObjectClass *)this); /*0x4338ed*/
  }
  else
  {
    *(_DWORD *)(this + 4) = 0; /*0x433900*/
    *(_WORD *)(this + 36) = 0x7FFF; /*0x433903*/
    *(_WORD *)(this + 38) = 13653; /*0x433909*/
    *(_DWORD *)(this + 40) = 64; /*0x43390f*/
    *(_BYTE *)(this + 64) = 1; /*0x433916*/
    *(_BYTE *)(this + 65) = 1; /*0x433919*/
    *(_DWORD *)(this + 24) = 1; /*0x43391c*/
    *(_DWORD *)(this + 28) = 1; /*0x43391f*/
    *(_DWORD *)(this + 32) = 0; /*0x433922*/
    *(_DWORD *)(this + 12) = 0; /*0x433925*/
    *(_DWORD *)(this + 8) = 0; /*0x433928*/
    SetRect(v3, 0, 0, 0, 0); /*0x43392b*/
    *(_DWORD *)(this + 44) = 1; /*0x433931*/
  }
  return this; /*0x4338f4*/
}



// ==== 0x00433990  File::LoadFont  this=File  sig=csp ====
_DWORD *__thiscall File::LoadFont(char *Source)
{
  unsigned int v2; // ebp
  _DWORD *v3; // esi
  CCFileClass *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  void *v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  unsigned int v12; // eax
  void **v13; // edi
  int v14; // eax
  unsigned int v15; // edx
  void **v16; // ecx
  int v17; // eax
  char *v18; // edx
  _WORD *v19; // eax
  size_t v20; // edi
  int v21; // ecx
  int v22; // eax
  void **v24; // [esp+30h] [ebp-44h]
  _DWORD v25[7]; // [esp+34h] [ebp-40h] BYREF
  char v26[4]; // [esp+50h] [ebp-24h] BYREF
  int v27; // [esp+54h] [ebp-20h]
  int v28; // [esp+58h] [ebp-1Ch]
  int v29; // [esp+5Ch] [ebp-18h]
  int v30; // [esp+60h] [ebp-14h]
  unsigned int v31; // [esp+64h] [ebp-10h]
  int v32; // [esp+68h] [ebp-Ch]
  int v33; // [esp+6Ch] [ebp-8h]
  int v34; // [esp+70h] [ebp-4h]

  v2 = 0; /*0x43399b*/
  v3 = 0; /*0x43399d*/
  v4 = (CCFileClass *)__2_YAPAXI_Z(0x6Cu); /*0x43399f*/
  if ( v4 ) /*0x4339a9*/
  {
    v5 = CCFileClass::Construct(v4, Source); /*0x4339b2*/
    v6 = v5; /*0x4339b7*/
    if ( v5 ) /*0x4339bb*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v5 + 20))(v5, 0) /*0x4339f0*/
        || !(*(int (__thiscall **)(_DWORD *, int))(*v6 + 28))(v6, 1)
        || (v3 = (_DWORD *)__2_YAPAXI_Z(0x24u)) == 0 )
      {
LABEL_35:
        (*(void (__thiscall **)(_DWORD *, int))*v6)(v6, 1); /*0x433bee*/
        return v3; /*0x433bf4*/
      }
      memset(v3, 0, 0x24u); /*0x433a04*/
      v7 = (void *)__2_YAPAXI_Z(0x20000u); /*0x433a0b*/
      v3[6] = v7; /*0x433a12*/
      if ( v7 ) /*0x433a15*/
      {
        memset(v7, 0, 0x20000u); /*0x433a22*/
        if ( (*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*v6 + 36))(v6, v25, 28) == 28 ) /*0x433a35*/
        {
          if ( v25[0] == 1416523622 ) /*0x433a44*/
          {
            v3[2] = v25[3]; /*0x433a4f*/
            v3[3] = v25[4]; /*0x433a56*/
            v3[1] = v25[2]; /*0x433a5d*/
            *v3 = v25[1]; /*0x433a64*/
            v3[5] = v25[6]; /*0x433a6a*/
            v8 = v3[6]; /*0x433a71*/
            v3[4] = v25[5]; /*0x433a74*/
            if ( (*(int (__thiscall **)(_DWORD *, int, int))(*v6 + 36))(v6, v8, 0x20000) == 0x20000 ) /*0x433a84*/
              goto LABEL_24; /*0x433a84*/
          }
          else if ( v25[0] == 1951297350 ) /*0x433a94*/
          {
            (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v6 + 40))(v6, 0, 0); /*0x433aa0*/
            if ( (*(int (__thiscall **)(_DWORD *, char *, int))(*v6 + 36))(v6, v26, 36) == 36 ) /*0x433ab4*/
            {
              v9 = v28; /*0x433abe*/
              v10 = v29; /*0x433ac2*/
              v3[3] = v30; /*0x433ac6*/
              v11 = v32; /*0x433ac9*/
              v3[1] = v9; /*0x433acd*/
              v3[5] = v11; /*0x433ad0*/
              v12 = v31; /*0x433ad3*/
              v3[2] = v10; /*0x433ad7*/
              *v3 = v27; /*0x433ae1*/
              v13 = (void **)malloc(12 * v12); /*0x433aec*/
              v24 = v13; /*0x433af3*/
              if ( v13 ) /*0x433af7*/
              {
                (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v6 + 40))(v6, v33, 0); /*0x433b07*/
                v14 = (*(int (__thiscall **)(_DWORD *, void **, unsigned int))(*v6 + 36))(v6, v13, 12 * v31); /*0x433b1a*/
                v15 = v31; /*0x433b1d*/
                if ( v14 == 12 * v31 ) /*0x433b29*/
                {
                  v3[4] = 0; /*0x433b31*/
                  if ( v15 ) /*0x433b34*/
                  {
                    v16 = v13 + 2; /*0x433b36*/
                    do /*0x433b67*/
                    {
                      v17 = (int)*(v16 - 1); /*0x433b39*/
                      if ( v17 <= (int)*v16 ) /*0x433b42*/
                      {
                        LOWORD(v13) = *((_WORD *)v16 - 4); /*0x433b3c*/
                        v18 = (char *)v13 + 1; /*0x433b44*/
                        do /*0x433b5b*/
                        {
                          *(_WORD *)(v3[6] + 2 * v17++) = (_WORD)v18; /*0x433b4a*/
                          ++v3[4]; /*0x433b53*/
                          v13 = (void **)*v16; /*0x433b56*/
                          ++v18; /*0x433b58*/
                        }
                        while ( v17 <= (int)*v16 ); /*0x433b5b*/
                        v15 = v31; /*0x433b5d*/
                      }
                      ++v2; /*0x433b61*/
                      v16 += 3; /*0x433b62*/
                    }
                    while ( v2 < v15 ); /*0x433b67*/
                    v13 = v24; /*0x433b69*/
                  }
                  free(v13); /*0x433b6e*/
                  (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v6 + 40))(v6, v34, 0); /*0x433b81*/
LABEL_24:
                  v19 = (_WORD *)v3[6]; /*0x433b84*/
                  v20 = v3[5] * v3[4]; /*0x433b8a*/
                  v21 = 0x10000; /*0x433b90*/
                  v3[8] = 0; /*0x433b95*/
                  do /*0x433ba4*/
                  {
                    if ( *v19 ) /*0x433b98*/
                      ++v3[8]; /*0x433b9d*/
                    ++v19; /*0x433ba0*/
                    --v21; /*0x433ba3*/
                  }
                  while ( v21 ); /*0x433ba4*/
                  v22 = __2_YAPAXI_Z(v20); /*0x433ba7*/
                  v3[7] = v22; /*0x433bb1*/
                  if ( v22 && (*(int (__thiscall **)(_DWORD *, int, size_t))(*v6 + 36))(v6, v22, v20) == v20 ) /*0x433bc1*/
                    goto LABEL_35; /*0x433bc1*/
                }
              }
            }
          }
        }
      }
      if ( v3[6] ) /*0x433bc3*/
        __3_YAXPAX_Z((void *)v3[6]); /*0x433bcb*/
      if ( v3[7] ) /*0x433bd3*/
        __3_YAXPAX_Z((void *)v3[7]); /*0x433bdb*/
      __3_YAXPAX_Z(v3); /*0x433be4*/
      v3 = 0; /*0x433bec*/
      goto LABEL_35; /*0x433bec*/
    }
  }
  return v3; /*0x433bf8*/
}



// ==== 0x00433C70  Property::Set  this=Property  sig=csp ====
__int16 __thiscall Property::Set(Property *this, __int16 a2)
{
  __int16 result; // ax

  result = *((_WORD *)this + 18); /*0x433c75*/
  *((_WORD *)this + 18) = a2; /*0x433c79*/
  return result; /*0x433c7d*/
}



// ==== 0x00433C80  ObjectClass::method_433C80  this=ObjectClass  sig=csp ====
__int16 __thiscall sub_433C80(ObjectClass *this, __int16 a2)
{
  HIWORD(this->occupant) = a2; /*0x433c85*/
  return this->occupant; /*0x433c8d*/
}



// ==== 0x00433C90  Char::Swap  this=Char  sig=csp ====
int __thiscall Char::Swap(Char *this, char a2)
{
  int result; // eax

  LOBYTE(result) = *((_BYTE *)this + 65); /*0x433c94*/
  *((_BYTE *)this + 65) = a2; /*0x433c97*/
  return result; /*0x433c9a*/
}



// ==== 0x00433CA0  TextGroup::SetRect  this=TextGroup  sig=csp ====
_DWORD *__thiscall TextGroup::SetRect(TextGroup *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2; /*0x433ca0*/
  if ( a2 ) /*0x433ca8*/
  {
    *(this + 12) = *(TextGroup *)a2; /*0x433cac*/
    *(this + 13) = (TextGroup)a2[1]; /*0x433cb2*/
    *(this + 14) = (TextGroup)a2[2]; /*0x433cb8*/
    result = (_DWORD *)a2[3]; /*0x433cbb*/
    *((_DWORD *)this + 15) = result; /*0x433cbe*/
  }
  else
  {
    *((_DWORD *)this + 15) = 0; /*0x433cc4*/
    *((_DWORD *)this + 14) = 0; /*0x433cc7*/
    *((_DWORD *)this + 13) = 0; /*0x433cca*/
    *((_DWORD *)this + 12) = 0; /*0x433ccd*/
  }
  return result; /*0x433cc1*/
}



// ==== 0x00433CE0  ObjectClass::method_433CE0  this=ObjectClass  sig=csp ====
char __thiscall sub_433CE0(_BYTE *this, char a2)
{
  char result; // al

  result = this->q040; /*0x433ce4*/
  this->q040 = a2; /*0x433ce7*/
  return result; /*0x433cea*/
}



// ==== 0x00433CF0  Text::Layout  this=Text  sig=csp ====
int __thiscall Text::Layout(Text *this, unsigned __int16 *a2, int *a3, _DWORD *a4, int a5)
{
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // di
  int v7; // esi
  int v8; // ebp
  unsigned __int16 *v9; // ebx
  unsigned __int8 *v10; // eax
  int v11; // edx
  int v12; // edx
  int v13; // eax
  int result; // eax
  int v15; // [esp+4h] [ebp-1Ch]
  unsigned __int16 *v16; // [esp+Ch] [ebp-14h]
  _DWORD *v17; // [esp+10h] [ebp-10h]
  unsigned __int16 *v18; // [esp+14h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-8h]
  unsigned __int16 i; // [esp+1Ch] [ebp-4h]
  unsigned __int16 *v21; // [esp+24h] [ebp+4h]

  v5 = 0; /*0x433cf6*/
  v18 = 0; /*0x433cff*/
  v17 = (_DWORD *)*((_DWORD *)this + 1); /*0x433d03*/
  if ( v17 && a2 ) /*0x433d13*/
  {
    v6 = *a2; /*0x433d1f*/
    v7 = 0; /*0x433d22*/
    v8 = 0; /*0x433d24*/
    v9 = a2 + 1; /*0x433d26*/
    v21 = 0; /*0x433d2c*/
    v19 = *((_DWORD *)this + 7); /*0x433d30*/
    v15 = v19; /*0x433d34*/
    v16 = 0; /*0x433d38*/
    for ( i = v6; v6; i = v6 ) /*0x433d40*/
    {
      switch ( v6 ) /*0x433d5c*/
      {
        case 9u: /*0x433d5c*/
          v7 = *((_DWORD *)this + 10) + v7 - (*((_DWORD *)this + 10) + v7) % *((_DWORD *)this + 10); /*0x433d92*/
          break; /*0x433d94*/
        case 0xAu: /*0x433d5c*/
        case 0xDu: /*0x433d5c*/
          if ( v5 != 13 ) /*0x433d67*/
          {
            v7 = 0; /*0x433d75*/
            v8 = 0; /*0x433d77*/
            v15 += v19; /*0x433d7b*/
          }
          break; /*0x433d7f*/
        case 0x20u: /*0x433d5c*/
          v16 = v9; /*0x433d9d*/
          v18 = v21; /*0x433da1*/
          goto LABEL_9; /*0x433da1*/
        default:
LABEL_9:
          v10 = 0; /*0x433da5*/
          if ( v17 ) /*0x433dad*/
          {
            v11 = *(unsigned __int16 *)(v17[6] + 2 * v6); /*0x433db4*/
            if ( (_WORD)v11 ) /*0x433dba*/
              v10 = (unsigned __int8 *)(v17[7] + (v11 - 1) * v17[5]); /*0x433dc7*/
          }
          if ( v10 || (v10 = (unsigned __int8 *)*((_DWORD *)this + 2)) != 0 ) /*0x433dd7*/
          {
            ++v8; /*0x433de1*/
            v12 = *((_DWORD *)this + 11); /*0x433de2*/
            v13 = *v10; /*0x433de5*/
            v7 += v12 + v13; /*0x433dea*/
            if ( a5 && v7 > a5 ) /*0x433df6*/
            {
              if ( v16 ) /*0x433dfe*/
              {
                if ( v8 > 1 ) /*0x433e03*/
                {
                  v9 = v16; /*0x433e09*/
                  v21 = v18; /*0x433e0b*/
                }
              }
              else
              {
                if ( v8 > 1 ) /*0x433e14*/
                {
                  v7 -= v13 + v12; /*0x433e18*/
                  --v9; /*0x433e1a*/
                }
                if ( v7 > (int)v21 ) /*0x433e21*/
                  v21 = (unsigned __int16 *)v7; /*0x433e23*/
              }
              v7 = 0; /*0x433e2f*/
              v8 = 0; /*0x433e31*/
              v16 = 0; /*0x433e35*/
              v15 += v19; /*0x433e39*/
            }
            else if ( v7 > (int)v21 ) /*0x433e43*/
            {
              v21 = (unsigned __int16 *)v7; /*0x433e45*/
            }
          }
          break; /*0x433e3d*/
      }
      v6 = *v9; /*0x433e49*/
      v5 = i; /*0x433e4c*/
      ++v9; /*0x433e50*/
    }
    if ( a3 ) /*0x433e69*/
      *a3 = (int)v21; /*0x433e6f*/
    result = (int)a4; /*0x433e71*/
    if ( a4 ) /*0x433e77*/
      *a4 = v15; /*0x433e7d*/
    LOBYTE(result) = 1; /*0x433e7f*/
  }
  else
  {
    if ( a4 ) /*0x433e8e*/
      *a4 = 0; /*0x433e90*/
    result = (int)a3; /*0x433e92*/
    if ( a3 ) /*0x433e98*/
      *a3 = 0; /*0x433e9a*/
    LOBYTE(result) = 0; /*0x433e9c*/
  }
  return result; /*0x433e81*/
}



// ==== 0x00433ED0  Text::MeasureWidth  this=CampaignScore  sig=csp ====
int __stdcall Text_MeasureWidth(int a1, int a2)
{
  Text::Layout(a1, &a2, 0, a2); /*0x433ee1*/
  return a2; /*0x433eea*/
}



// ==== 0x00433F50  MessageListClass::CountCharsInWidth  this=MessageListClass  sig=csp ====
int __thiscall MessageListClass::CountCharsInWidth(MessageListClass *this, _WORD *a2, int a3, int a4, int a5)
{
  MessageListClass *v5; // edx
  int v6; // ebp
  _DWORD *MaxMessageCount; // ebx
  _WORD *v8; // ecx
  unsigned __int16 v9; // di
  unsigned __int8 *ScrollOffset; // eax
  int v11; // edx
  int v12; // edx
  int v14; // edx
  _WORD *v15; // ecx
  int v16; // eax
  int v17; // [esp+8h] [ebp-8h]

  v5 = this; /*0x433f53*/
  v6 = 0; /*0x433f57*/
  MaxMessageCount = (_DWORD *)this->MaxMessageCount; /*0x433f59*/
  v17 = 0; /*0x433f62*/
  if ( !MaxMessageCount ) /*0x433f66*/
    return 0; /*0x433f66*/
  v8 = a2; /*0x433f6c*/
  if ( !a2 ) /*0x433f72*/
    return 0; /*0x434092*/
  v9 = *a2; /*0x433f7a*/
  if ( *a2 ) /*0x433f7a*/
  {
    while ( 1 ) /*0x433f99*/
    {
      if ( v9 == 9 ) /*0x433f99*/
      {
        v6 = v5->MessageRect[2] + v6 - (v5->MessageRect[2] + v6) % v5->MessageRect[2]; /*0x433fee*/
      }
      else if ( v9 != 10 && v9 != 13 ) /*0x433fa1*/
      {
        ScrollOffset = 0; /*0x433fa3*/
        v11 = *(unsigned __int16 *)(MaxMessageCount[6] + 2 * v9); /*0x433fae*/
        if ( (_WORD)v11 ) /*0x433fb4*/
          ScrollOffset = (unsigned __int8 *)(MaxMessageCount[7] + (v11 - 1) * MaxMessageCount[5]); /*0x433fbd*/
        v8 = a2; /*0x433fc0*/
        if ( ScrollOffset || (ScrollOffset = (unsigned __int8 *)this->ScrollOffset) != 0 ) /*0x433fd1*/
          v6 += *ScrollOffset + this->MessageRect[3]; /*0x433fe0*/
      }
      v12 = ++v17; /*0x433ff8*/
      if ( v6 > a3 ) /*0x433fff*/
        break; /*0x433fff*/
      if ( a4 && v12 == a4 || a5 && (v9 == 13 || v9 == 10) ) /*0x43401f*/
        return v17; /*0x43401f*/
      v9 = v8[1]; /*0x434021*/
      a2 = ++v8; /*0x43402b*/
      if ( !v9 ) /*0x43402f*/
        return v17; /*0x434040*/
      v5 = this; /*0x433f88*/
    }
    v14 = v12 - 1; /*0x434047*/
    v17 = v14; /*0x43404a*/
    if ( a5 ) /*0x43404e*/
    {
      if ( v9 > 0x20u ) /*0x434054*/
      {
        v15 = v8 - 1; /*0x434056*/
        v16 = v14; /*0x434059*/
        if ( v14 ) /*0x43405d*/
        {
          while ( *v15 > 0x20u ) /*0x434063*/
          {
            --v16; /*0x434065*/
            --v15; /*0x434066*/
            if ( !v16 ) /*0x43406b*/
              return v14; /*0x434078*/
          }
          if ( v16 ) /*0x43407d*/
            return v16; /*0x43407f*/
        }
      }
    }
  }
  return v17; /*0x43403b*/
}



// ==== 0x00434100  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_434100(_DWORD *this, int a2)
{
  int result; // eax

  result = this->owningHouseIndex; /*0x434104*/
  this->owningHouseIndex = a2; /*0x434107*/
  return result; /*0x43410a*/
}



// ==== 0x00434110  Field::Int_Set  this=Field  sig=csp ====
int __thiscall Field::Int_Set(Field *this, int a2)
{
  *((_DWORD *)this + 8) = a2; /*0x434114*/
  return a2; /*0x434117*/
}



// ==== 0x00434120  FontClass::RenderGlyph  this=BitFont  sig=csp ====
int __thiscall FontClass_RenderGlyph(int this, unsigned __int16 a2, int xLeft, int yTop, int a5)
{
  _DWORD *v8; // ecx
  unsigned __int8 *v9; // eax
  int v10; // edx
  int v11; // edi
  _DWORD *v12; // ebp
  LONG v13; // ebx
  _DWORD *v14; // edx
  unsigned __int8 *v15; // ebp
  LONG v16; // edi
  int v17; // eax
  int v18; // esi
  _WORD *v19; // esi
  int v20; // ecx
  int v21; // eax
  char v22; // dl
  bool v23; // zf
  __int16 v24; // bp
  _WORD *v25; // esi
  int v26; // eax
  int v27; // ecx
  _WORD *v28; // esi
  LONG v29; // eax
  int v30; // ecx
  _WORD *v31; // esi
  LONG v32; // eax
  int v33; // ecx
  _WORD *v34; // esi
  LONG v35; // eax
  int v36; // ecx
  _WORD *v37; // esi
  LONG v38; // eax
  int v39; // ecx
  _WORD *v40; // esi
  LONG v41; // eax
  int v42; // ecx
  _WORD *v43; // esi
  LONG v44; // eax
  int v45; // ecx
  int v46; // ecx
  int v47; // eax
  int v48; // edi
  int v49; // ebp
  unsigned __int8 *v50; // edi
  int v51; // eax
  char *v52; // ebx
  _WORD *v53; // ecx
  char v54; // dl
  _WORD *v55; // ecx
  int v56; // eax
  _WORD *v57; // ecx
  int v58; // eax
  _WORD *v59; // ecx
  int v60; // eax
  _WORD *v61; // ecx
  int v62; // eax
  _WORD *v63; // ecx
  int v64; // eax
  _WORD *v65; // ecx
  int v66; // eax
  _WORD *v67; // ecx
  int v68; // eax
  int v69; // [esp+0h] [ebp-40h] BYREF
  _DWORD *v70; // [esp+10h] [ebp-30h]
  unsigned __int8 *v71; // [esp+14h] [ebp-2Ch]
  _WORD *v72; // [esp+18h] [ebp-28h]
  int v73; // [esp+1Ch] [ebp-24h]
  struct tagRECT rc; // [esp+20h] [ebp-20h] BYREF
  LONG v75; // [esp+30h] [ebp-10h] BYREF
  LONG v76; // [esp+34h] [ebp-Ch]
  LONG v77; // [esp+38h] [ebp-8h]
  LONG v78; // [esp+3Ch] [ebp-4h]
  __int16 v79; // [esp+44h] [ebp+4h]
  char *yTopa; // [esp+4Ch] [ebp+Ch]
  int yTopb; // [esp+4Ch] [ebp+Ch]
  int v82; // [esp+50h] [ebp+10h]

  v70 = (_DWORD *)this; /*0x434131*/
  if ( a2 == 9 ) /*0x434135*/
    return *(_DWORD *)(this + 40) /*0x434155*/
         + xLeft
         - (*(_DWORD *)(this + 40) + xLeft - *(_DWORD *)(this + 32)) % *(_DWORD *)(this + 40);
  v79 = *(_WORD *)(this + 36); /*0x43415c*/
  if ( a5 != -1 ) /*0x434168*/
    v79 = a5; /*0x43416a*/
  v8 = *(_DWORD **)(this + 4); /*0x43416e*/
  v9 = 0; /*0x434171*/
  if ( v8 ) /*0x434175*/
  {
    v10 = *(unsigned __int16 *)(v8[6] + 2 * a2); /*0x434182*/
    if ( (_WORD)v10 ) /*0x434188*/
      v9 = (unsigned __int8 *)(v8[7] + (v10 - 1) * v8[5]); /*0x434191*/
  }
  if ( !v9 ) /*0x434196*/
  {
    if ( &v69 != (int *)-68 ) /*0x43419e*/
      v79 ^= 0x5555u; /*0x4341a0*/
    v9 = *(unsigned __int8 **)(this + 8); /*0x4341a8*/
    if ( !v9 ) /*0x4341ad*/
      return xLeft; /*0x4341ba*/
  }
  if ( !*(_DWORD *)(this + 12) ) /*0x4341bd*/
    return xLeft; /*0x4341cf*/
  v11 = v8[2]; /*0x4341d5*/
  v71 = v9 + 1; /*0x4341d8*/
  v82 = *v9; /*0x4341e7*/
  if ( !*(_BYTE *)(this + 65) ) /*0x4341e0*/
    goto LABEL_71; /*0x4341e0*/
  SetRect(&rc, xLeft, yTop, *v9 + xLeft - 1, v11 + yTop - 1); /*0x43420a*/
  v12 = v70; /*0x434210*/
  if ( !(unsigned __int8)sub_434840(&v75, &rc, v70 + 12) ) /*0x434224*/
    return xLeft + v82 + v12[11]; /*0x43423f*/
  v13 = v75; /*0x434242*/
  if ( rc.left >= v75 && rc.right <= v77 && rc.top >= v76 && rc.bottom <= v78 ) /*0x43426c*/
  {
LABEL_71:
    v47 = v11; /*0x434409*/
    v48 = v11 - 1; /*0x43440d*/
    v49 = v70[3] + 2 * (xLeft + yTop * v70[4]); /*0x434410*/
    if ( !v47 ) /*0x434413*/
    {
LABEL_102:
      v14 = v70; /*0x4344e0*/
      return xLeft + v82 + v14[11]; /*0x4344e0*/
    }
    yTopb = v48 + 1; /*0x43441e*/
    v50 = v71; /*0x434422*/
LABEL_73:
    v51 = v82; /*0x434426*/
    v52 = (char *)v50; /*0x43442a*/
    v53 = (_WORD *)v49; /*0x43442c*/
    while ( 1 ) /*0x43442e*/
    {
      v54 = *v52++; /*0x43442e*/
      if ( v54 ) /*0x434433*/
      {
        if ( v54 < 0 ) /*0x434440*/
          *v53 = v79; /*0x434442*/
        v55 = v53 + 1; /*0x434445*/
        v56 = v51 - 1; /*0x434448*/
        if ( v56 <= 0 ) /*0x43444b*/
          goto LABEL_101; /*0x43444b*/
        if ( (v54 & 0x40) != 0 ) /*0x434450*/
          *v55 = v79; /*0x434452*/
        v57 = v55 + 1; /*0x434455*/
        v58 = v56 - 1; /*0x434458*/
        if ( v58 <= 0 ) /*0x43445b*/
          goto LABEL_101; /*0x43445b*/
        if ( (v54 & 0x20) != 0 ) /*0x434460*/
          *v57 = v79; /*0x434462*/
        v59 = v57 + 1; /*0x434465*/
        v60 = v58 - 1; /*0x434468*/
        if ( v60 <= 0 ) /*0x43446b*/
          goto LABEL_101; /*0x43446b*/
        if ( (v54 & 0x10) != 0 ) /*0x434470*/
          *v59 = v79; /*0x434472*/
        v61 = v59 + 1; /*0x434475*/
        v62 = v60 - 1; /*0x434478*/
        if ( v62 <= 0 ) /*0x43447b*/
          goto LABEL_101; /*0x43447b*/
        if ( (v54 & 8) != 0 ) /*0x434480*/
          *v61 = v79; /*0x434482*/
        v63 = v61 + 1; /*0x434485*/
        v64 = v62 - 1; /*0x434488*/
        if ( v64 <= 0 ) /*0x43448b*/
          goto LABEL_101; /*0x43448b*/
        if ( (v54 & 4) != 0 ) /*0x434490*/
          *v63 = v79; /*0x434492*/
        v65 = v63 + 1; /*0x434495*/
        v66 = v64 - 1; /*0x434498*/
        if ( v66 <= 0 ) /*0x43449b*/
          goto LABEL_101; /*0x43449b*/
        if ( (v54 & 2) != 0 ) /*0x4344a0*/
          *v65 = v79; /*0x4344a2*/
        v67 = v65 + 1; /*0x4344a5*/
        v68 = v66 - 1; /*0x4344a8*/
        if ( v68 <= 0 ) /*0x4344ab*/
        {
LABEL_101:
          v50 += v70[6]; /*0x4344c1*/
          v23 = yTopb == 1; /*0x4344d1*/
          v49 += 2 * v70[4]; /*0x4344d2*/
          --yTopb; /*0x4344d6*/
          if ( v23 ) /*0x4344da*/
            goto LABEL_102; /*0x4344da*/
          goto LABEL_73; /*0x4344da*/
        }
        if ( (v54 & 1) != 0 ) /*0x4344b0*/
          *v67 = v79; /*0x4344b2*/
        v53 = v67 + 1; /*0x4344b5*/
        v51 = v68 - 1; /*0x4344b8*/
      }
      else
      {
        v53 += 8; /*0x434435*/
        v51 -= 8; /*0x434438*/
      }
      if ( v51 <= 0 ) /*0x4344bb*/
        goto LABEL_101; /*0x4344bb*/
    }
  }
  v14 = v70; /*0x434276*/
  v15 = &v71[(v76 - rc.top) * v70[6]]; /*0x43428c*/
  v16 = v77; /*0x434295*/
  v17 = xLeft + (v76 - rc.top + yTop) * v70[4]; /*0x434299*/
  v18 = v70[3]; /*0x43429b*/
  v71 = v15; /*0x43429e*/
  v19 = (_WORD *)(v18 + 2 * v17); /*0x4342a2*/
  v72 = v19; /*0x4342a8*/
  if ( v78 - v76 == -1 ) /*0x4342ae*/
    return xLeft + v82 + v14[11]; /*0x4342ae*/
  v73 = v78 - v76 + 1; /*0x4342b5*/
  do /*0x4343ed*/
  {
    v20 = v82; /*0x4342b9*/
    v21 = xLeft; /*0x4342bd*/
    yTopa = (char *)v15; /*0x4342c1*/
    while ( 1 ) /*0x4342c9*/
    {
      v22 = *yTopa; /*0x4342c9*/
      v23 = *yTopa++ == 0; /*0x4342cd*/
      if ( !v23 ) /*0x4342d3*/
        break; /*0x4342d3*/
      v19 += 8; /*0x4342d5*/
      v20 -= 8; /*0x4342d8*/
      v21 += 8; /*0x4342db*/
LABEL_68:
      if ( v20 <= 0 ) /*0x4343bf*/
        goto LABEL_69; /*0x4343bf*/
    }
    if ( v21 < v13 || v21 > v16 || v22 >= 0 ) /*0x4342ee*/
    {
      v24 = v79; /*0x4342f9*/
    }
    else
    {
      v24 = v79; /*0x4342f0*/
      *v19 = v79; /*0x4342f4*/
    }
    v25 = v19 + 1; /*0x4342fd*/
    v26 = v21 + 1; /*0x434300*/
    v27 = v20 - 1; /*0x434301*/
    if ( v27 > 0 ) /*0x434304*/
    {
      if ( v26 >= v13 && v26 <= v16 && (v22 & 0x40) != 0 ) /*0x434315*/
        *v25 = v24; /*0x434317*/
      v28 = v25 + 1; /*0x43431a*/
      v29 = v26 + 1; /*0x43431d*/
      v30 = v27 - 1; /*0x43431e*/
      if ( v30 > 0 ) /*0x434321*/
      {
        if ( v29 >= v13 && v29 <= v16 && (v22 & 0x20) != 0 ) /*0x434332*/
          *v28 = v24; /*0x434334*/
        v31 = v28 + 1; /*0x434337*/
        v32 = v29 + 1; /*0x43433a*/
        v33 = v30 - 1; /*0x43433b*/
        if ( v33 > 0 ) /*0x43433e*/
        {
          if ( v32 >= v13 && v32 <= v16 && (v22 & 0x10) != 0 ) /*0x43434f*/
            *v31 = v24; /*0x434351*/
          v34 = v31 + 1; /*0x434354*/
          v35 = v32 + 1; /*0x434357*/
          v36 = v33 - 1; /*0x434358*/
          if ( v36 > 0 ) /*0x43435b*/
          {
            if ( v35 >= v13 && v35 <= v16 && (v22 & 8) != 0 ) /*0x434368*/
              *v34 = v24; /*0x43436a*/
            v37 = v34 + 1; /*0x43436d*/
            v38 = v35 + 1; /*0x434370*/
            v39 = v36 - 1; /*0x434371*/
            if ( v39 > 0 ) /*0x434374*/
            {
              if ( v38 >= v13 && v38 <= v16 && (v22 & 4) != 0 ) /*0x434381*/
                *v37 = v24; /*0x434383*/
              v40 = v37 + 1; /*0x434386*/
              v41 = v38 + 1; /*0x434389*/
              v42 = v39 - 1; /*0x43438a*/
              if ( v42 > 0 ) /*0x43438d*/
              {
                if ( v41 >= v13 && v41 <= v16 && (v22 & 2) != 0 ) /*0x43439a*/
                  *v40 = v24; /*0x43439c*/
                v43 = v40 + 1; /*0x43439f*/
                v44 = v41 + 1; /*0x4343a2*/
                v45 = v42 - 1; /*0x4343a3*/
                if ( v45 > 0 ) /*0x4343a6*/
                {
                  if ( v44 >= v13 && v44 <= v16 && (v22 & 1) != 0 ) /*0x4343b3*/
                    *v43 = v24; /*0x4343b5*/
                  v19 = v43 + 1; /*0x4343b8*/
                  v21 = v44 + 1; /*0x4343bb*/
                  v20 = v45 - 1; /*0x4343bc*/
                  goto LABEL_68; /*0x4343bc*/
                }
              }
            }
          }
        }
      }
    }
LABEL_69:
    v14 = v70; /*0x4343c5*/
    v15 = &v71[v70[6]]; /*0x4343d4*/
    v46 = v70[4]; /*0x4343d6*/
    v71 = v15; /*0x4343d9*/
    v19 = &v72[v46]; /*0x4343dd*/
    v23 = v73 == 1; /*0x4343e4*/
    v72 = v19; /*0x4343e5*/
    --v73; /*0x4343e9*/
  }
  while ( !v23 ); /*0x4343ed*/
  return xLeft + v82 + v14[11]; /*0x43414c*/
}



// ==== 0x00434500  FontClass::RenderText  this=BitFont  sig=csp ====
int __thiscall FontClass::RenderText(int *this, unsigned __int16 *a2, int xLeft, int yTop, int a5, int a6)
{
  unsigned __int16 v6; // si
  unsigned __int16 *v8; // edx
  bool v9; // zf
  unsigned __int16 v10; // bx
  int v11; // ecx
  unsigned __int8 v12; // bp
  int v13; // edx
  int v14; // eax
  int result; // eax
  __int16 v16; // [esp+10h] [ebp-10h]
  Color v17; // [esp+14h] [ebp-Ch] BYREF
  int v18; // [esp+18h] [ebp-8h]
  int v19; // [esp+1Ch] [ebp-4h]

  v6 = *a2; /*0x43450a*/
  v8 = a2 + 1; /*0x434510*/
  v9 = *a2 == 0; /*0x434513*/
  v10 = *((_WORD *)this + 18); /*0x434516*/
  v18 = 0; /*0x43451a*/
  ++a2; /*0x434522*/
  if ( v9 ) /*0x434526*/
  {
LABEL_14:
    result = xLeft; /*0x43467b*/
    *((_WORD *)this + 18) = v10; /*0x43467f*/
    return result; /*0x43468a*/
  }
  v11 = a6; /*0x43452c*/
  v19 = a6 - 1; /*0x434533*/
  v12 = 31 * (9 - a6); /*0x434543*/
  while ( !v11 ) /*0x434547*/
  {
LABEL_8:
    if ( v6 != 13 && v6 != 10 ) /*0x434637*/
    {
      v14 = FontClass::RenderGlyph((int)this, v6, xLeft, yTop, -1); /*0x434648*/
      v11 = a6; /*0x43464d*/
      xLeft = v14; /*0x434651*/
    }
    if ( !a5 || (--a5, a5) ) /*0x434662*/
    {
      v6 = *a2; /*0x434668*/
      v8 = a2 + 1; /*0x43466b*/
      v9 = *a2++ == 0; /*0x43466e*/
      if ( !v9 ) /*0x434675*/
        continue; /*0x434675*/
    }
    goto LABEL_14; /*0x434675*/
  }
  if ( v18 < v11 ) /*0x434551*/
  {
    if ( v19 < 8 ) /*0x43455c*/
    {
      LOBYTE(v16) = (unsigned __int8)(v10 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x43458e*/
      HIBYTE(v16) = (unsigned __int8)(v10 >> g_BitMask_Green) << g_BitMask_Blue; /*0x43459b*/
      LOWORD(v17.Color_field_00) = v16; /*0x4345b1*/
      BYTE2(v17.Color_field_00) = (unsigned __int8)(v10 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4345ba*/
      Color::Lerp(&v17, v12, (unsigned __int8 *)&stru_A80220); /*0x4345be*/
      LOWORD(v13) = (unsigned __int8)(BYTE2(v17.Color_field_00) >> g_BitMask_Red); /*0x4345ee*/
      v11 = a6; /*0x43460e*/
      *((_WORD *)this + 18) = ((unsigned __int8)(LOBYTE(v17.Color_field_00) >> g_BitShift_Green_0) << g_BitShift_Red) /*0x434614*/
                            | (v13 << g_BitShift_Blue)
                            | ((unsigned __int8)(BYTE1(v17.Color_field_00) >> g_BitMask_Blue) << g_BitMask_Green);
    }
    v12 += 31; /*0x43461c*/
    ++v18; /*0x434620*/
    --v19; /*0x434629*/
    goto LABEL_8; /*0x434629*/
  }
  *((_WORD *)this + 18) = v10; /*0x434699*/
  Text::Layout((Text *)this, v8, (int *)&a2, 0, 0); /*0x43469d*/
  return (int)a2 + xLeft; /*0x434683*/
}



// ==== 0x004346C0  Font::GetGlyphDataForChar  this=Font  sig=csp ====
int __thiscall Font::GetGlyphDataForChar(Font *this, unsigned __int16 a2)
{
  _DWORD *Font_field_04; // ecx
  int result; // eax
  int v4; // edx

  Font_field_04 = (_DWORD *)this->Font_field_04; /*0x4346c0*/
  result = 0; /*0x4346c3*/
  if ( Font_field_04 ) /*0x4346c7*/
  {
    v4 = *(unsigned __int16 *)(Font_field_04[6] + 2 * a2); /*0x4346da*/
    if ( (_WORD)v4 ) /*0x4346e2*/
      return Font_field_04[7] + (v4 - 1) * Font_field_04[5]; /*0x4346eb*/
  }
  return result; /*0x4346ee*/
}



// ==== 0x00434700  ObjectClass::method  this=ObjectClass  sig=csp ====
_BYTE *__thiscall sub_434700(ObjectClass *this)
{
  _BYTE *result; // eax
  _DWORD *vtable1; // edx
  int v4; // ecx
  _BYTE *v5; // ecx
  _BYTE *v6; // edi
  _DWORD *v7; // edx
  unsigned int v8; // ebp
  unsigned int v9; // ecx

  result = malloc(*((_DWORD *)this->? + 1) * *((_DWORD *)this->? + 2) + 2); /*0x434713*/
  vtable1 = this->?; /*0x434718*/
  this->? = result; /*0x434720*/
  if ( vtable1 ) /*0x434723*/
  {
    v4 = *(unsigned __int16 *)(vtable1[6] + 176); /*0x43472a*/
    if ( (_WORD)v4 ) /*0x434733*/
    {
      v5 = (_BYTE *)(vtable1[7] + (v4 - 1) * vtable1[5]); /*0x43473e*/
      if ( v5 ) /*0x434741*/
      {
        v6 = v5 + 1; /*0x434745*/
        *result = *v5; /*0x434748*/
        v7 = this->?; /*0x43474a*/
        v8 = 0; /*0x434750*/
        for ( result = (char *)this->? + 1; v8 < v7[2]; ++v8 ) /*0x434752*/
        {
          v9 = 0; /*0x43475e*/
          if ( v7[1] ) /*0x43475b*/
          {
            do /*0x434774*/
            {
              *result++ = ~*v6++; /*0x434769*/
              ++v9; /*0x434770*/
            }
            while ( v9 < *((_DWORD *)this->? + 1) ); /*0x434774*/
          }
          v7 = this->?; /*0x434776*/
        }
      }
    }
  }
  return result; /*0x434780*/
}



// ==== 0x00434840  sub_434840  this=-  sig=csp ====
char __stdcall sub_434840(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // edx

  if ( a2[1] > a3[3] || a3[1] > a2[3] || *a2 > a3[2] || *a3 > a2[2] ) /*0x43486d*/
  {
    *a1 = 0; /*0x4348ca*/
    a1[1] = 0; /*0x4348d0*/
    a1[2] = -1; /*0x4348d7*/
    a1[3] = -1; /*0x4348da*/
    return 0; /*0x4348dd*/
  }
  else
  {
    *a1 = *a2; /*0x434878*/
    a1[1] = a2[1]; /*0x43487d*/
    a1[2] = a2[2]; /*0x434883*/
    a1[3] = a2[3]; /*0x43488a*/
    v3 = a3[1]; /*0x43488d*/
    if ( a1[1] < v3 ) /*0x434893*/
      a1[1] = v3; /*0x434895*/
    if ( *a1 < *a3 ) /*0x43489e*/
      *a1 = *a3; /*0x4348a0*/
    v4 = a3[3]; /*0x4348a2*/
    if ( a1[3] > v4 ) /*0x4348aa*/
      a1[3] = v4; /*0x4348ac*/
    v5 = a3[2]; /*0x4348af*/
    if ( a1[2] > v5 ) /*0x4348b7*/
      a1[2] = v5; /*0x4348b9*/
    return 1; /*0x4348bc*/
  }
}



// ==== 0x004348F0  FontRenderer::InitContext  this=FontRenderer  sig=csp ====
int __thiscall FontRenderer::InitContext(FontRenderer *this, int *a2)
{
  int v3; // edx
  int v4; // eax
  int v5; // edx
  int result; // eax
  int v7; // edi
  int v8; // edx
  int v9; // edx
  int v10; // [esp+8h] [ebp-10h] BYREF
  int v11; // [esp+Ch] [ebp-Ch]
  int v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]

  *((_DWORD *)this + 3) = (*(int (__thiscall **)(int *, _DWORD, _DWORD))(*a2 + 92))(a2, 0, 0); /*0x434908*/
  this->q004 = (unsigned int)(*(int (__thiscall **)(int *))(*a2 + 116))(a2) >> 1; /*0x434914*/
  v3 = *a2; /*0x434917*/
  v10 = 0; /*0x43491b*/
  v11 = 0; /*0x434923*/
  v12 = (*(int (__thiscall **)(int *))(v3 + 124))(a2) - 1; /*0x434931*/
  v4 = (*(int (__thiscall **)(int *))(*a2 + 128))(a2); /*0x434937*/
  v5 = *((_DWORD *)this + 13) | *((_DWORD *)this + 15) | *((_DWORD *)this + 14); /*0x43494b*/
  result = v4 - 1; /*0x43494d*/
  v7 = *((_DWORD *)this + 12); /*0x43494e*/
  v13 = result; /*0x434950*/
  if ( v7 | v5 ) /*0x434954*/
  {
    LOBYTE(result) = sub_434840((_DWORD *)this + 12, (_DWORD *)this + 12, &v10); /*0x434980*/
  }
  else
  {
    v8 = v10; /*0x434958*/
    *((_DWORD *)this + 15) = result; /*0x43495c*/
    *((_DWORD *)this + 12) = v8; /*0x43495f*/
    v9 = v12; /*0x434965*/
    *((_DWORD *)this + 13) = v11; /*0x434969*/
    *((_DWORD *)this + 14) = v9; /*0x43496c*/
  }
  return result; /*0x43496f*/
}



// ==== 0x00434990  BufferIO::Cleanup  this=BufferIO  sig=csp ====
int __thiscall BufferIO::Cleanup(BufferIO *this, int a2)
{
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x434999*/
  *((_DWORD *)this + 3) = 0; /*0x43499e*/
  this->q004 = 0; /*0x4349a1*/
  return 0; /*0x4349a4*/
}



// ==== 0x004349B0  FontClass::GetPixelData  this=FontClass  sig=csp ====
int __thiscall FontClass::GetPixelData(FontClass *this, unsigned __int16 a2)
{
  _DWORD *FontClass_field_0x04; // ecx
  int v3; // eax
  unsigned __int8 *v4; // eax

  FontClass_field_0x04 = (_DWORD *)this->FontClass_field_0x04; /*0x4349b0*/
  if ( FontClass_field_0x04 /*0x4349dc*/
    && (v3 = *(unsigned __int16 *)(FontClass_field_0x04[6] + 2 * a2), (_WORD)v3)
    && (v4 = (unsigned __int8 *)(FontClass_field_0x04[7] + (v3 - 1) * FontClass_field_0x04[5])) != 0 )
  {
    return *v4; /*0x4349e2*/
  }
  else
  {
    return 0; /*0x4349e7*/
  }
}



// ==== 0x004349F0  ObjectClass::method_4349F0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_4349F0(ObjectClass *this)
{
  BOOL result; // eax

  this->? = 0; /*0x4349f9*/
  this->? = 0; /*0x4349fc*/
  this->? = 0; /*0x4349ff*/
  this->? = 0; /*0x434a02*/
  this->occupant = 894795775; /*0x434a0f*/
  this->owningHouseIndex = 64; /*0x434a1b*/
  LOBYTE(this->ambientSoundController[1]) = 1; /*0x434a22*/
  BYTE1(this->ambientSoundController[1]) = 1; /*0x434a25*/
  this->? = 1; /*0x434a28*/
  this->? = 1; /*0x434a2b*/
  result = SetRect((LPRECT)&this->nextObject, 0, 0, 0, 0); /*0x434a2e*/
  this->fallRate = 1; /*0x434a34*/
  return result; /*0x434a37*/
}



// ==== 0x00434A40  BufferIOFileClass::Constructor_BitFont  this=BitFont  sig=csp ====
void ***__thiscall BufferIOFileClass::Constructor_BitFont(BufferIOFileClass *this, char a2)
{
  void *FileSize; // eax
  void **FilePointer; // esi

  FileSize = (void *)this->?; /*0x434a43*/
  *(_DWORD *)this->RawFileClass = &BitFont::`vftable'; /*0x434a46*/
  if ( FileSize ) /*0x434a4e*/
    free(FileSize); /*0x434a51*/
  FilePointer = (void **)this->?; /*0x434a5a*/
  if ( FilePointer ) /*0x434a5f*/
  {
    if ( FilePointer[6] ) /*0x434a61*/
      __3_YAXPAX_Z(FilePointer[6]); /*0x434a69*/
    if ( FilePointer[7] ) /*0x434a71*/
      __3_YAXPAX_Z(FilePointer[7]); /*0x434a79*/
    __3_YAXPAX_Z(FilePointer); /*0x434a82*/
  }
  if ( (a2 & 1) != 0 ) /*0x434a91*/
    __3_YAXPAX_Z(this); /*0x434a94*/
  return (void ***)this; /*0x434a9e*/
}



// ==== 0x00434AB0  sub_434AB0  this=-  sig=ida-proto ====
int sub_434AB0()
{
  dword_89C4C0 = 0; /*0x434ab2*/
  dword_89C4C4 = 0; /*0x434ab7*/
  dword_89C4C8 = 0; /*0x434abc*/
  dword_89C4CC = 0; /*0x434ac1*/
  return 0; /*0x434ac6*/
}



// ==== 0x00434AD0  BitTextClass::LoadFont  this=BitTextClass  sig=csp ====
_DWORD *__thiscall BitTextClass::LoadFont(BitTextClass *this)
{
  int v2; // eax

  this->m_FontBitmap = &BitText::`vftable'; /*0x434ad5*/
  v2 = __2_YAPAXI_Z(0x44u); /*0x434adb*/
  if ( v2 ) /*0x434ae5*/
  {
    g_FogOfWarState = (Text *)BitTextClass::ParseFontData(v2, aGameFnt); /*0x434af3*/
    return &this->m_FontBitmap; /*0x434af8*/
  }
  else
  {
    g_FogOfWarState = 0; /*0x434afe*/
    return &this->m_FontBitmap; /*0x434afc*/
  }
}



// ==== 0x00434B40  sub_434B40  this=-  sig=csp ====
int __stdcall sub_434B40(_DWORD *a1, int *a2, unsigned __int16 a3, int xLeft, int yTop)
{
  int v5; // edi

  if ( !a1 ) /*0x434b4c*/
    return xLeft; /*0x434b89*/
  FontRenderer::InitContext(a1, a2); /*0x434b56*/
  Field::Int_Set(a1, xLeft); /*0x434b5e*/
  v5 = FontClass::RenderGlyph((int)a1, a3, xLeft, yTop, -1); /*0x434b7a*/
  BufferIO::Cleanup(a1, (int)a2); /*0x434b7c*/
  return v5; /*0x434b84*/
}



// ==== 0x00434B90  FontRenderer::DrawText  this=FontRenderer  sig=csp ====
int __stdcall FontRenderer::DrawText(_DWORD *a1, int *a2, unsigned __int16 *a3, int xLeft, int yTop, int a6, int a7)
{
  int v7; // edi

  if ( !a1 ) /*0x434b9c*/
    return xLeft; /*0x434be1*/
  FontRenderer::InitContext(a1, a2); /*0x434ba6*/
  Field::Int_Set(a1, xLeft); /*0x434bae*/
  v7 = FontClass::RenderText((int)a1, a3, xLeft, yTop, a6, a7); /*0x434bd2*/
  BufferIO::Cleanup(a1, (int)a2); /*0x434bd4*/
  return v7; /*0x434bdc*/
}



// ==== 0x00434BF0  sub_434BF0  this=-  sig=csp ====
int __stdcall sub_434BF0(int a1, int *a2, unsigned __int16 *a3, int xLeft, int yTop, int a6)
{
  int result; // eax
  int v7; // ebx

  result = 0; /*0x434bf6*/
  if ( a1 ) /*0x434bfb*/
  {
    if ( *(_BYTE *)(a1 + 64) ) /*0x434c01*/
    {
      *(_DWORD *)(a1 + 44) = 2; /*0x434c14*/
      FontRenderer::InitContext((_DWORD *)a1, a2); /*0x434c1b*/
      Field::Int_Set((_DWORD *)a1, xLeft); /*0x434c27*/
      FontClass::RenderText(a1, a3, xLeft, yTop, a6, 0); /*0x434c40*/
      BufferIO::Cleanup((_DWORD *)a1, (int)a2); /*0x434c48*/
      FontRenderer::InitContext((_DWORD *)a1, a2); /*0x434c51*/
      Field::Int_Set((_DWORD *)a1, xLeft + 1); /*0x434c59*/
      v7 = FontClass::RenderText(a1, a3, xLeft + 1, yTop, a6, 0); /*0x434c76*/
      BufferIO::Cleanup((_DWORD *)a1, (int)a2); /*0x434c78*/
      *(_DWORD *)(a1 + 44) = 1; /*0x434c7e*/
    }
    else
    {
      FontRenderer::InitContext((_DWORD *)a1, a2); /*0x434c94*/
      Field::Int_Set((_DWORD *)a1, xLeft); /*0x434ca0*/
      v7 = FontClass::RenderText(a1, a3, xLeft, yTop, a6, 0); /*0x434cc1*/
      BufferIO::Cleanup((_DWORD *)a1, (int)a2); /*0x434cc3*/
    }
    return v7; /*0x434c86*/
  }
  return result; /*0x434c85*/
}



// ==== 0x00434CD0  Font::Print  this=Font  sig=csp ====
int __stdcall Font::Print(int a1, int a2, _WORD *a3, int a4, int yTop, int a6, int a7, char a8, int a9, int a10)
{
  int result; // eax
  int v11; // edi
  unsigned __int16 *v12; // ebp
  __int16 v13; // ax
  int v14; // ebx
  int v15; // esi
  _WORD *v16; // edx
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // edi
  char v21; // bl
  int v22; // eax
  _BYTE *v23; // eax
  _DWORD *v24; // ecx
  int v25; // eax
  unsigned __int8 *GlyphDataForChar; // eax
  int v27; // eax
  _WORD *v28; // ecx
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  int v32; // ebx
  char v33; // di
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  _WORD *v37; // ecx
  int v38; // eax
  int v39; // edx
  int v40; // ebx
  char v41; // di
  int v42; // ecx
  int v43; // eax
  unsigned __int16 v44; // [esp-10h] [ebp-50h]
  unsigned __int16 v45; // [esp-10h] [ebp-50h]
  unsigned __int16 v46; // [esp-10h] [ebp-50h]
  __int16 v47; // [esp+10h] [ebp-30h]
  char v48[4]; // [esp+14h] [ebp-2Ch] BYREF
  int v49; // [esp+18h] [ebp-28h]
  int xLeft; // [esp+1Ch] [ebp-24h]
  int v51; // [esp+20h] [ebp-20h]
  _WORD *v52; // [esp+24h] [ebp-1Ch]
  _WORD *v53; // [esp+28h] [ebp-18h]
  int v54; // [esp+2Ch] [ebp-14h]
  __int16 v55; // [esp+30h] [ebp-10h] BYREF
  unsigned __int8 v56; // [esp+32h] [ebp-Eh]
  __int16 v57; // [esp+38h] [ebp-8h] BYREF
  unsigned __int8 v58; // [esp+3Ah] [ebp-6h]
  __int16 v59; // [esp+58h] [ebp+18h]

  v11 = 0; /*0x434cdb*/
  if ( a1 && (v12 = a3) != 0 ) /*0x434ceb*/
  {
    FontRenderer::InitContext((_DWORD *)a1, (int *)a2); /*0x434cf8*/
    Field::Int_Set((_DWORD *)a1, a4); /*0x434d04*/
    v13 = 0; /*0x434d0f*/
    v14 = 0; /*0x434d11*/
    v15 = *(unsigned __int16 *)(a1 + 36); /*0x434d13*/
    HIWORD(v16) = HIWORD(a3); /*0x434d17*/
    v17 = 0; /*0x434d19*/
    v51 = 0; /*0x434d1b*/
    LOWORD(v16) = *a3; /*0x434d1f*/
    v54 = 0; /*0x434d22*/
    v52 = 0; /*0x434d29*/
    v49 = 0; /*0x434d2d*/
    v53 = v16; /*0x434d31*/
    if ( (_WORD)v16 ) /*0x434d35*/
    {
LABEL_4:
      switch ( (__int16)v53 ) /*0x434d59*/
      {
        case 9: /*0x434d59*/
          v11 = *(_DWORD *)(a1 + 40) + v11 - (*(_DWORD *)(a1 + 40) + v11) % *(_DWORD *)(a1 + 40); /*0x434ef7*/
          goto LABEL_55; /*0x434ef9*/
        case 10: /*0x434d59*/
        case 13: /*0x434d59*/
          if ( v13 == 13 ) /*0x434d64*/
            goto LABEL_23; /*0x434d64*/
          v18 = 0; /*0x434d6e*/
          if ( a6 > v11 ) /*0x434d72*/
          {
            if ( (a8 & 1) != 0 ) /*0x434d7b*/
            {
              v18 = (a6 - v11) / 2; /*0x434d84*/
            }
            else if ( (a8 & 2) != 0 ) /*0x434d8b*/
            {
              v18 = a6 - v11; /*0x434d8f*/
            }
          }
          xLeft = a4 + v18; /*0x434d97*/
          if ( v12 >= a3 ) /*0x434da1*/
            goto LABEL_20; /*0x434da1*/
          v19 = a9; /*0x434da7*/
          v20 = a9 - v49 - 1; /*0x434db7*/
          v21 = v49 - a9 + a10 + 1; /*0x434dba*/
          while ( 2 ) /*0x434dc4*/
          {
            ++v21; /*0x434dc4*/
            --v20; /*0x434dca*/
            ++v49; /*0x434dcb*/
            v22 = v15; /*0x434dd1*/
            if ( !v19 ) /*0x434dd3*/
              goto LABEL_18; /*0x434dd3*/
            if ( v49 >= v19 ) /*0x434ddd*/
              goto LABEL_73; /*0x434ddd*/
            if ( v20 < a10 ) /*0x434de7*/
            {
              v23 = Palette::SixBitTo16Bit( /*0x434e2e*/
                      v48,
                      (unsigned __int8)((unsigned __int16)v15 >> g_BitShift_Red) << g_BitShift_Green_0,
                      (unsigned __int8)((unsigned __int16)v15 >> g_BitMask_Green) << g_BitMask_Blue,
                      (unsigned __int8)((unsigned __int16)v15 >> g_BitShift_Blue) << g_BitMask_Red);
              v55 = *(_WORD *)v23; /*0x434e3b*/
              v56 = v23[2]; /*0x434e4c*/
              Color::Lerp((unsigned __int8 *)&v55, v21 * (255 / a10), (unsigned __int8 *)&stru_A80220); /*0x434e59*/
              v22 = PackRGB565((unsigned __int8)v55, HIBYTE(v55), v56); /*0x434e7c*/
            }
LABEL_18:
            if ( v22 == -1 ) /*0x434e84*/
              goto LABEL_73; /*0x434e84*/
            v44 = *v12++; /*0x434e99*/
            xLeft = FontClass::RenderGlyph(a1, v44, xLeft, yTop, v22); /*0x434ea6*/
            if ( v12 < a3 ) /*0x434eb0*/
            {
              v19 = a9; /*0x434dc0*/
              continue; /*0x434dc0*/
            }
            break;
          }
LABEL_20:
          v24 = (_DWORD *)a1; /*0x434eb6*/
          v11 = 0; /*0x434ebe*/
          v14 = 0; /*0x434ec0*/
          v25 = *(_DWORD *)(a1 + 28); /*0x434ec2*/
          v51 += v25; /*0x434ec7*/
          if ( a7 && v51 >= a7 ) /*0x434ed7*/
            goto LABEL_57; /*0x434ed7*/
          yTop += v25; /*0x434edd*/
LABEL_23:
          ++v12; /*0x434ee1*/
          goto LABEL_55; /*0x434ee4*/
        case 32: /*0x434d59*/
          v54 = v11; /*0x434f02*/
          v52 = a3; /*0x434f06*/
          goto LABEL_26; /*0x434f06*/
        default:
LABEL_26:
          GlyphDataForChar = (unsigned __int8 *)Font::GetGlyphDataForChar((_DWORD *)a1, (unsigned __int16)v53); /*0x434f0a*/
          if ( !GlyphDataForChar ) /*0x434f1a*/
          {
            GlyphDataForChar = (unsigned __int8 *)Font::GetGlyphDataForChar((_DWORD *)a1, 0x3Fu); /*0x434f22*/
            if ( !GlyphDataForChar ) /*0x434f29*/
              goto LABEL_55; /*0x434f29*/
          }
          ++v14; /*0x434f37*/
          v27 = *GlyphDataForChar + *(_DWORD *)(a1 + 44); /*0x434f3b*/
          v11 += v27; /*0x434f41*/
          if ( !a6 || v11 <= a6 ) /*0x434f4d*/
            goto LABEL_55; /*0x434f4d*/
          v28 = v52; /*0x434f53*/
          if ( v52 ) /*0x434f59*/
          {
            if ( v14 > 1 ) /*0x434f5e*/
            {
              v11 = v54; /*0x434f60*/
              a3 = v52; /*0x434f64*/
            }
          }
          else if ( v14 > 1 ) /*0x434f6d*/
          {
            v11 -= v27; /*0x434f6f*/
            --a3; /*0x434f78*/
          }
          v29 = 0; /*0x434f80*/
          if ( a6 > v11 ) /*0x434f84*/
          {
            if ( (a8 & 1) != 0 ) /*0x434f8d*/
            {
              v29 = (a6 - v11) / 2; /*0x434f96*/
            }
            else if ( (a8 & 2) != 0 ) /*0x434f9d*/
            {
              v29 = a6 - v11; /*0x434fa1*/
            }
          }
          xLeft = a4 + v29; /*0x434fa9*/
          if ( v12 >= a3 ) /*0x434fb3*/
            goto LABEL_50; /*0x434fb3*/
          v30 = a9; /*0x434fb9*/
          v31 = v49; /*0x434fbd*/
          v32 = a9 - v49 - 1; /*0x434fcb*/
          v33 = v49 - a9 + a10 + 1; /*0x434fce*/
          break; /*0x434fd2*/
      }
      while ( 1 ) /*0x434fdc*/
      {
        v34 = v31 + 1; /*0x434fdc*/
        ++v33; /*0x434fdd*/
        --v32; /*0x434fde*/
        v49 = v34; /*0x434fdf*/
        v35 = v15; /*0x434fe5*/
        if ( v30 ) /*0x434fe7*/
        {
          if ( v34 >= v30 ) /*0x434fef*/
            break; /*0x434fef*/
          if ( v32 < a10 ) /*0x434ff9*/
          {
            LOBYTE(v47) = (unsigned __int8)((unsigned __int16)v15 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x435028*/
            HIBYTE(v47) = (unsigned __int8)((unsigned __int16)v15 >> g_BitMask_Green) << g_BitMask_Blue; /*0x435035*/
            v57 = v47; /*0x43504b*/
            v58 = (unsigned __int8)((unsigned __int16)v15 >> g_BitShift_Blue) << g_BitMask_Red; /*0x435054*/
            Color::Lerp((unsigned __int8 *)&v57, v33 * (255 / a10), (unsigned __int8 *)&stru_A80220); /*0x435066*/
            v35 = ((unsigned __int8)v57 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4350ba*/
                | (v58 >> g_BitMask_Red << g_BitShift_Blue)
                | (HIBYTE(v57) >> g_BitMask_Blue << g_BitMask_Green);
          }
        }
        if ( v35 == -1 ) /*0x4350bf*/
          break; /*0x4350bf*/
        v45 = *v12++; /*0x4350d4*/
        xLeft = FontClass::RenderGlyph(a1, v45, xLeft, yTop, v35); /*0x4350e1*/
        if ( v12 >= a3 ) /*0x4350eb*/
        {
          v28 = v52; /*0x4350f1*/
LABEL_50:
          if ( a3 == v28 ) /*0x4350f9*/
          {
            v52 = 0; /*0x4350fb*/
            ++v12; /*0x435103*/
          }
          v24 = (_DWORD *)a1; /*0x435106*/
          v11 = 0; /*0x43510e*/
          v14 = 0; /*0x435110*/
          v36 = *(_DWORD *)(a1 + 28); /*0x435112*/
          v51 += v36; /*0x435117*/
          if ( a7 && v51 >= a7 ) /*0x435127*/
          {
LABEL_57:
            result = BufferIO::Cleanup(v24, a2); /*0x43514d*/
            LOBYTE(result) = 1; /*0x43515a*/
            return result; /*0x435160*/
          }
          yTop += v36; /*0x435129*/
LABEL_55:
          v13 = (__int16)v53; /*0x43512d*/
          v37 = a3 + 1; /*0x435135*/
          a3 = v37; /*0x435138*/
          LOWORD(v37) = *v37; /*0x43513c*/
          v53 = v37; /*0x435142*/
          if ( !(_WORD)v37 ) /*0x435146*/
          {
            v17 = v49; /*0x435163*/
            goto LABEL_59; /*0x435163*/
          }
          goto LABEL_4; /*0x435146*/
        }
        v30 = a9; /*0x434fd4*/
        v31 = v49; /*0x434fd8*/
      }
    }
    else
    {
LABEL_59:
      v38 = 0; /*0x435167*/
      if ( a6 > v11 ) /*0x43516f*/
      {
        if ( (a8 & 1) != 0 ) /*0x435178*/
        {
          v38 = (a6 - v11) / 2; /*0x435181*/
        }
        else if ( (a8 & 2) != 0 ) /*0x435188*/
        {
          v38 = a6 - v11; /*0x43518c*/
        }
      }
      xLeft = a4 + v38; /*0x435194*/
      if ( v12 < a3 ) /*0x43519e*/
      {
        v39 = a9; /*0x4351a4*/
        v40 = a9 - v17 - 1; /*0x4351b2*/
        v41 = v17 - a9 + a10 + 1; /*0x4351b5*/
        while ( 1 ) /*0x4351b9*/
        {
          v42 = v17 + 1; /*0x4351b9*/
          ++v41; /*0x4351ba*/
          --v40; /*0x4351bb*/
          v49 = v42; /*0x4351bc*/
          v43 = v15; /*0x4351c2*/
          if ( v39 ) /*0x4351c4*/
          {
            if ( v42 >= v39 ) /*0x4351cc*/
              break; /*0x4351cc*/
            if ( v40 < a10 ) /*0x4351d6*/
            {
              LOBYTE(v59) = (unsigned __int8)((unsigned __int16)v15 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x435205*/
              HIBYTE(v59) = (unsigned __int8)((unsigned __int16)v15 >> g_BitMask_Green) << g_BitMask_Blue; /*0x435212*/
              v57 = v59; /*0x435228*/
              v58 = (unsigned __int8)((unsigned __int16)v15 >> g_BitShift_Blue) << g_BitMask_Red; /*0x435231*/
              Color::Lerp((unsigned __int8 *)&v57, v41 * (255 / a10), (unsigned __int8 *)&stru_A80220); /*0x435243*/
              v43 = ((unsigned __int8)v57 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x435297*/
                  | (v58 >> g_BitMask_Red << g_BitShift_Blue)
                  | (HIBYTE(v57) >> g_BitMask_Blue << g_BitMask_Green);
            }
          }
          if ( v43 == -1 ) /*0x43529c*/
            break; /*0x43529c*/
          v46 = *v12++; /*0x4352ad*/
          xLeft = FontClass::RenderGlyph(a1, v46, xLeft, yTop, v43); /*0x4352ba*/
          if ( v12 >= a3 ) /*0x4352c4*/
            break; /*0x4352c4*/
          v17 = v49; /*0x4352c6*/
          v39 = a9; /*0x4352ca*/
        }
      }
    }
LABEL_73:
    result = BufferIO::Cleanup((_DWORD *)a1, a2); /*0x4352ed*/
    LOBYTE(result) = 1; /*0x4352fe*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x43530a*/
  }
  return result; /*0x435157*/
}



// ==== 0x00435340  sub_435340  this=-  sig=csp ====
char __stdcall sub_435340(int a1, int a2, _WORD *a3, int a4, int yTop, int a6, int a7, char a8, int a9, int a10)
{
  __int16 v11; // bp

  if ( !a1 ) /*0x43534a*/
    return 0; /*0x43534d*/
  Field::Int_Set((_DWORD *)a1, a4); /*0x43535c*/
  v11 = Property::Set((_WORD *)a1, *(_WORD *)(a1 + 38)); /*0x435375*/
  Font::Print(a1, a2, a3, a4 + 1, yTop + 1, a6, a7, a8, a9, a10); /*0x43539f*/
  Property::Set((_WORD *)a1, v11); /*0x4353a7*/
  return Font::Print(a1, a2, a3, a4, yTop, a6, a7, a8, a9, a10); /*0x43534c*/
}



// ==== 0x004353F0  sub_4353F0  this=-  sig=csp ====
char __stdcall sub_4353F0(int a1, int a2, _WORD *a3, int a4, int yTop, int a6, int a7, char a8, int a9, int a10)
{
  char result; // al

  if ( !a1 ) /*0x4353fa*/
    return 0; /*0x4353fd*/
  Field::Int_Set((_DWORD *)a1, a4); /*0x43540b*/
  if ( !*(_BYTE *)(a1 + 64) ) /*0x435410*/
    return Font::Print(a1, a2, a3, a4, yTop, a6, a7, a8, a9, a10); /*0x4354b8*/
  *(_DWORD *)(a1 + 44) = 2; /*0x435428*/
  Font::Print(a1, a2, a3, a4, yTop, a6, a7, a8, a9, a10); /*0x43544b*/
  result = Font::Print(a1, a2, a3, a4 + 1, yTop, a6, a7, a8, a9, a10); /*0x435479*/
  *(_DWORD *)(a1 + 44) = 1; /*0x43547f*/
  return result; /*0x4353fc*/
}



// ==== 0x00435560  BufferIOFileClass::Constructor_BitText  this=BitTextClass  sig=csp ====
_DWORD *__thiscall BufferIOFileClass::Constructor_BitText(BufferIOFileClass *this, char a2)
{
  Text *v3; // esi

  *(_DWORD *)this->RawFileClass = &BitText::`vftable'; /*0x435564*/
  v3 = g_FogOfWarState; /*0x43556a*/
  if ( g_FogOfWarState ) /*0x435572*/
    (*(void (__thiscall **)(Text *, int))g_FogOfWarState->Text_field_00)(g_FogOfWarState, 1); /*0x43557a*/
  if ( v3 == g_FogOfWarState ) /*0x435582*/
    g_FogOfWarState = 0; /*0x435584*/
  if ( (a2 & 1) != 0 ) /*0x435593*/
    __3_YAXPAX_Z(this); /*0x435596*/
  return this->RawFileClass; /*0x4355a0*/
}



// ==== 0x004355B0  Palette::6BitTo16Bit  this=Palette  sig=csp ====
_BYTE *__thiscall Palette::SixBitTo16Bit(Palette *this, char a2, char a3, char a4)
{
  this->m_Colors[0] = a2; /*0x4355ba*/
  this->m_Colors[1] = a3; /*0x4355c0*/
  this->m_Colors[2] = a4; /*0x4355c3*/
  return this->m_Colors; /*0x4355c6*/
}



// ==== 0x004355D0  PackRGB565  this=-  sig=csp ====
int __fastcall PackRGB565(int a1, int a2, int a3)
{
  return (a1 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x43560b*/
       | (a2 >> g_BitMask_Blue << g_BitMask_Green)
       | (a3 >> g_BitMask_Red << g_BitShift_Blue);
}



// ==== 0x00435610  sub_435610  this=-  sig=ida-proto ====
void sub_435610()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x43561c*/
  dbl_89C4F8 = Math::Sqrt(v0 + v0); /*0x43562e*/
}



// ==== 0x00435640  sub_435640  this=-  sig=ida-proto ====
void sub_435640()
{
  dbl_89C548 = dbl_89C4F8 / 60.0; /*0x43564c*/
}



// ==== 0x00435660  sub_435660  this=-  sig=ida-proto ====
void sub_435660()
{
  dbl_89C530 = 1.0 / dbl_89C548; /*0x43566c*/
}



// ==== 0x00435680  sub_435680  this=-  sig=ida-proto ====
void sub_435680()
{
  dbl_89C528 = 0.0174532925199433 * 45.0; /*0x43568c*/
}



// ==== 0x004356A0  sub_4356A0  this=-  sig=ida-proto ====
void sub_4356A0()
{
  dbl_89C500 = 0.0174532925199433 * 60.0; /*0x4356ac*/
}



// ==== 0x004356C0  sub_4356C0  this=-  sig=ida-proto ====
void sub_4356C0()
{
  dbl_89C4D8 = 0.0174532925199433 * 90.0; /*0x4356cc*/
}



// ==== 0x004356E0  sub_4356E0  this=-  sig=ida-proto ====
__int64 sub_4356E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89C4D8 - dbl_89C500); /*0x4356f2*/
  result = Math::RoundToInt(v0 * dbl_89C4F8 * 0.5); /*0x435706*/
  dword_89C550 = result; /*0x43570b*/
  return result; /*0x435710*/
}



// ==== 0x00435720  sub_435720  this=-  sig=ida-proto ====
void sub_435720()
{
  dbl_89C508 = Math::ArcTan((double)dword_89C550 * 0.00390625); /*0x435737*/
}



// ==== 0x00435750  sub_435750  this=-  sig=ida-proto ====
void sub_435750()
{
  dbl_89C520 = Math::ArcTan((double)(2 * dword_89C550) / dbl_89C4F8); /*0x435772*/
}



// ==== 0x00435780  sub_435780  this=-  sig=ida-proto ====
__int64 sub_435780()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C550) + 0.5); /*0x43579b*/
  dword_89C544 = result; /*0x4357a0*/
  return result; /*0x4357a6*/
}



// ==== 0x004357B0  sub_4357B0  this=-  sig=ida-proto ====
int sub_4357B0()
{
  dword_89C4F0 = 0; /*0x4357b2*/
  return 0; /*0x4357be*/
}



// ==== 0x004357C0  sub_4357C0  this=-  sig=ida-proto ====
int sub_4357C0()
{
  dword_89C510 = 0; /*0x4357c2*/
  dword_89C514 = 0; /*0x4357c7*/
  dword_89C518 = 0; /*0x4357cc*/
  return 0; /*0x4357d1*/
}



// ==== 0x004357E0  sub_4357E0  this=-  sig=ida-proto ====
int sub_4357E0()
{
  dword_89C540 = 0; /*0x4357e5*/
  dword_89C538 = 128; /*0x4357ef*/
  dword_89C53C = 128; /*0x4357f4*/
  return 128; /*0x4357f9*/
}



// ==== 0x00435800  sub_435800  this=-  sig=ida-proto ====
int sub_435800()
{
  dword_89C4E0 = 0; /*0x435802*/
  dword_89C4E4 = 0; /*0x435807*/
  dword_89C4E8 = 0; /*0x43580c*/
  dword_89C4EC = 0; /*0x435811*/
  return 0; /*0x435816*/
}



// ==== 0x00435820  BuildingLightClass::CTOR  this=BuildingLightClass  sig=csp ====
int *__userpurge BuildingLightClass::CTOR@<eax>(BuildingLightClass *this, double a2@<st0>, int a3)
{
  ObjectClass *v3; // ecx
  ObjectClass *v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int *v9; // eax
  int v10; // ecx
  void *v11; // edx
  int v12; // ecx
  int v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  void **v17; // eax
  int v18; // edx
  void (__thiscall **vtable0)(ObjectClass *, int *); // eax
  int v20; // eax
  ObjectClass **v21; // edx
  bool v22; // zf
  signed int v23; // eax
  int v25; // [esp-8h] [ebp-68h]
  int v26; // [esp-8h] [ebp-68h]
  int v27; // [esp-4h] [ebp-64h]
  int v28; // [esp+10h] [ebp-50h]
  double v29; // [esp+10h] [ebp-50h]
  int v30; // [esp+18h] [ebp-48h]
  double v31; // [esp+18h] [ebp-48h]
  int v33; // [esp+20h] [ebp-40h]
  double v34; // [esp+20h] [ebp-40h]
  _DWORD v35[2]; // [esp+28h] [ebp-38h] BYREF
  int v37; // [esp+3Ch] [ebp-24h]
  int v38; // [esp+40h] [ebp-20h]
  int v39; // [esp+44h] [ebp-1Ch]
  int v40; // [esp+48h] [ebp-18h] BYREF
  int v41; // [esp+4Ch] [ebp-14h]
  int v42; // [esp+50h] [ebp-10h]
  Coord3D v43; // [esp+54h] [ebp-Ch] BYREF

  v4 = v3; /*0x43582c*/
  ObjectClass::ctor(v3); /*0x43582e*/
  v4[1].? = 0; /*0x43583b*/
  v4[1].? = 0; /*0x435841*/
  v4[1].? = (void *)dword_89C510; /*0x43584f*/
  v4[1].? = dword_89C514; /*0x435857*/
  v4[1].? = dword_89C518; /*0x435860*/
  v4[1].? = dword_89C510; /*0x43586f*/
  v4[1].? = dword_89C514; /*0x43587b*/
  v5 = dword_89C518; /*0x43587e*/
  v4[1].occupant = 0; /*0x435884*/
  v4[1].owningHouseIndex = 0; /*0x43588a*/
  v4[1].? = (void *)v5; /*0x435890*/
  LOBYTE(v4[1].fallRate) = 0; /*0x435896*/
  v4[1].nextObject = 0; /*0x43589d*/
  v4[1].attachedTag = 0; /*0x4358a3*/
  v4[1].attachedBomb = (BombClass *)this; /*0x4358a9*/
  v4->AbstractClass = &BuildingLightClass::`vftable'; /*0x4358af*/
  v4->? = &BuildingLightClass::`vftable'; /*0x4358b5*/
  v4->? = &BuildingLightClass::`vftable'; /*0x4358bc*/
  v4->? = &BuildingLightClass::`vftable'; /*0x4358c3*/
  if ( FootClass_Array.?[2] < FootClass_Array.?[0] /*0x435900*/
    || (BYTE1(FootClass_Array.?[1]) || !FootClass_Array.?[0])
    && FootClass_Array.?[3] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&FootClass_Array.? + 8))(
         &FootClass_Array.?,
         FootClass_Array.?[0] + FootClass_Array.?[3],
         0) )
  {
    v6 = FootClass_Array.?[2]++; /*0x43590d*/
    *(_DWORD *)(*(_DWORD *)&FootClass_Array.? + 4 * v6) = v4; /*0x43591c*/
  }
  if ( this ) /*0x435924*/
  {
    v37 = this->?[0]; /*0x435934*/
    v38 = this->?[1]; /*0x435940*/
    v30 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1932); /*0x43594d*/
    v39 = this->?[2]; /*0x435951*/
    v28 = *(__int16 *)ProgressTimer::GetValue((ProgressTimer *)((char *)this + 904), &v35[1]) - 0x3FFF; /*0x435979*/
    v27 = v39; /*0x43597d*/
    __asm /*0x43597e*/
    {
      fild dword ptr [esp+64h+var_50]
      fmul ds:dbl_7E2810
      fstp [esp+64h+var_50]
      fild dword ptr [esp+64h+var_48]
    }
    __asm
    {
      fstp [esp+6Ch+var_48]
      fild [esp+6Ch+var_20]
      fstp [esp+6Ch+var_30]
    }
    Math::SinCos(v29); /*0x4359a6*/
    __asm { fmul [esp+6Ch+var_48] } /*0x4359ab*/
    __asm { fsubr [esp+64h+var_30] }
    LOWORD(v7) = Math::RoundToInt(a2); /*0x4359b6*/
    v25 = v7; /*0x4359bf*/
    Math::ArcTan2(v29); /*0x4359c6*/
    __asm { fmul [esp+70h+var_48] } /*0x4359cb*/
    __asm { fiadd [esp+68h+var_24] }
    LOWORD(v8) = Math::RoundToInt(a2); /*0x4359d6*/
    v9 = Coord3D::Set(&v43, v8, v25, v27); /*0x4359e0*/
    v40 = *v9; /*0x4359e9*/
    v41 = v9[1]; /*0x4359f0*/
    v10 = v41; /*0x4359ed*/
    v11 = (void *)v9[2]; /*0x4359f4*/
    v4[1].? = v40; /*0x4359f7*/
    v4[1].? = v10; /*0x4359fd*/
    v42 = (int)v11; /*0x435a03*/
    v4[1].? = v11; /*0x435a07*/
    v12 = this->?[1]; /*0x435a0f*/
    v13 = this->?[2]; /*0x435a18*/
    v37 = this->?[0]; /*0x435a1b*/
    v14 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1928); /*0x435a1f*/
    v38 = v12; /*0x435a25*/
    LODWORD(v31) = -v14; /*0x435a34*/
    v33 = *(__int16 *)ProgressTimer::GetValue((ProgressTimer *)((char *)this + 904), &v35[1]) - 0x3FFF; /*0x435a46*/
    __asm /*0x435a4a*/
    {
      fild [esp+60h+var_40]
      fmul ds:dbl_7E2810
      fstp qword ptr [esp+60h+var_40]
      fild dword ptr [esp+60h+var_48]
    }
    __asm
    {
      fstp [esp+64h+var_48]
      fild [esp+64h+var_20]
    }
    __asm { fstp [esp+6Ch+var_30] }
    Math::SinCos(v34); /*0x435a73*/
    __asm { fmul [esp+6Ch+var_48] } /*0x435a78*/
    __asm { fsubr [esp+64h+var_30] }
    LOWORD(v15) = Math::RoundToInt(a2); /*0x435a83*/
    v26 = v15; /*0x435a8c*/
    Math::ArcTan2(v34); /*0x435a8f*/
    __asm { fmul [esp+70h+var_48] } /*0x435a94*/
    __asm { fiadd [esp+68h+var_24] }
    LOWORD(v16) = Math::RoundToInt(a2); /*0x435a9f*/
    v17 = (void **)Coord3D::Set(&v43, v16, v26, v13); /*0x435aa9*/
    v4[1].? = *v17; /*0x435ab0*/
    v4[1].? = (int)v17[1]; /*0x435ab5*/
    v18 = (int)v17[2]; /*0x435abc*/
    vtable0 = (void (__thiscall **)(ObjectClass *, int *))v4->AbstractClass; /*0x435abf*/
    v4[1].? = v18; /*0x435ac4*/
    vtable0[109](v4, &v40); /*0x435ac7*/
    v40 = v4->location[0]; /*0x435ad7*/
    v41 = v4->location[1]; /*0x435ae3*/
    v42 = v4->location[2]; /*0x435aec*/
    if ( (unsigned __int8)ObjectClass::Deploy(v4) ) /*0x435af0*/
      ObjectClass::SetDeployState((LogicClass *)v4, 0); /*0x435b01*/
    BuildingLightClass::FindTarget((BuildingLightClass *)v4, (_DWORD *)1); /*0x435b0a*/
    v20 = 0; /*0x435b15*/
    if ( FootClass_Array.?[2] <= 0 ) /*0x435b19*/
    {
LABEL_14:
      v20 = -1; /*0x435b2d*/
    }
    else
    {
      v21 = *(ObjectClass ***)&FootClass_Array.?; /*0x435b1b*/
      while ( *v21 != v4 ) /*0x435b23*/
      {
        ++v20; /*0x435b25*/
        ++v21; /*0x435b26*/
        if ( v20 >= FootClass_Array.?[2] ) /*0x435b2b*/
          goto LABEL_14; /*0x435b2b*/
      }
    }
    v23 = v20 & 0x80000001; /*0x435b30*/
    v22 = v23 == 0; /*0x435b30*/
    if ( v23 < 0 ) /*0x435b35*/
      v22 = (((_BYTE)v23 - 1) | 0xFFFFFFFE) == -1; /*0x435b3b*/
    LOBYTE(v4[1].fallRate) = !v22; /*0x435b3f*/
  }
  return (int *)v4; /*0x435b47*/
}



// ==== 0x00435BE0  BuildingLightClass::Draw_Start  this=BuildingLightClass  sig=csp ====
char __thiscall BuildingLightClass::Draw_Start(BuildingLightClass *this, int a2, int a3)
{
  double v3; // st7
  __m64 v4; // mm0
  int BehaviourMode; // eax
  ObjectClass *FollowingObject; // ecx
  ObjectClass *v8; // edi
  ObjectClass *v9; // eax
  _DWORD *v10; // edi
  Vector3 *v11; // eax
  int v13; // eax
  int v14; // ebp
  _DWORD *v15; // edi
  Vector3 *v16; // eax
  int *v17; // eax
  int v18; // ebx
  int v19; // edi
  int v20; // eax
  BuildingLightQueue *v21; // edi
  int *location; // edi
  int v23; // ebp
  ObjectClass *v24; // ecx
  int (__thiscall **vtable0)(ObjectClass *, int *); // eax
  int *v26; // eax
  int v27; // ebx
  int (__thiscall **v28)(BuildingLightClass *, double *); // eax
  _DWORD *v29; // eax
  int *v30; // eax
  int v31; // eax
  int *v32; // eax
  int v33; // edx
  int v34; // eax
  int v35; // ebp
  int v36; // eax
  int v37; // esi
  int v38; // eax
  int *v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // esi
  int v43; // eax
  int v44; // ebp
  int v45; // eax
  int v46; // esi
  int v47; // eax
  int v48; // esi
  int v49; // ecx
  int v50; // edi
  int v51; // ebx
  int v52; // ebp
  int v53; // eax
  int v54; // ebp
  int v55; // eax
  double v57; // [esp+18h] [ebp-DCh]
  double v58; // [esp+18h] [ebp-DCh]
  float v59; // [esp+1Ch] [ebp-D8h]
  float v60; // [esp+1Ch] [ebp-D8h]
  BuildingLight *v61; // [esp+20h] [ebp-D4h]
  int v62; // [esp+30h] [ebp-C4h]
  int v63; // [esp+30h] [ebp-C4h]
  int v64; // [esp+30h] [ebp-C4h]
  int v65; // [esp+30h] [ebp-C4h]
  int v66; // [esp+30h] [ebp-C4h]
  BuildingLightQueue *Block; // [esp+34h] [ebp-C0h]
  void *Blocka; // [esp+34h] [ebp-C0h]
  int v71; // [esp+38h] [ebp-BCh] BYREF
  int v72; // [esp+3Ch] [ebp-B8h]
  int v73; // [esp+40h] [ebp-B4h]
  int v74; // [esp+44h] [ebp-B0h]
  int v75; // [esp+48h] [ebp-ACh] BYREF
  int v76; // [esp+4Ch] [ebp-A8h]
  int v77; // [esp+50h] [ebp-A4h]
  int v78; // [esp+54h] [ebp-A0h] BYREF
  int v79; // [esp+58h] [ebp-9Ch]
  int v80; // [esp+5Ch] [ebp-98h]
  int v81; // [esp+60h] [ebp-94h] BYREF
  int v82; // [esp+64h] [ebp-90h]
  int v83; // [esp+68h] [ebp-8Ch] BYREF
  float v84; // [esp+6Ch] [ebp-88h]
  int v85; // [esp+70h] [ebp-84h] BYREF
  float v86; // [esp+74h] [ebp-80h]
  int v88[2]; // [esp+7Ch] [ebp-78h] BYREF
  float v89[3]; // [esp+84h] [ebp-70h] BYREF
  double v90; // [esp+90h] [ebp-64h] BYREF
  _DWORD v91[3]; // [esp+9Ch] [ebp-58h] BYREF
  _DWORD v92[3]; // [esp+A8h] [ebp-4Ch] BYREF
  float v93[4]; // [esp+B4h] [ebp-40h] BYREF
  Matrix3x4 v94; // [esp+C4h] [ebp-30h] BYREF

  BehaviourMode = this->BehaviourMode; /*0x435bec*/
  if ( BehaviourMode )
  {
    FollowingObject = this->FollowingObject; /*0x435bfa*/
    if ( FollowingObject )
    {
      BehaviourMode = (*((int (__thiscall **)(ObjectClass *))FollowingObject->AbstractClass + 11))(FollowingObject); /*0x435c0a*/
      if ( BehaviourMode == 6 )
      {
        v8 = this->FollowingObject; /*0x435c16*/
        if ( v8 )
        {
          LOBYTE(BehaviourMode) = v8->isAliveFlag; /*0x435c24*/
          if ( (_BYTE)BehaviourMode )
          {
            LOBYTE(BehaviourMode) = (*((int (__thiscall **)(ObjectClass *))v8->AbstractClass + 212))(this->FollowingObject); /*0x435c36*/
            if ( (_BYTE)BehaviourMode )
            {
              LOBYTE(BehaviourMode) = HIBYTE(v8[10].fallRate); /*0x435c44*/
              if ( !(_BYTE)BehaviourMode )
              {
                if ( ((int)dword_A8B230->vtable0 & 0x1000) == 0
                  || (v71 = this->?[0],
                      v72 = this->?[1],
                      v73 = this->?[2],
                      LOBYTE(BehaviourMode) = Game::Stub3((int)&v71),
                      !(_BYTE)BehaviourMode) )
                {
                  v9 = (ObjectClass *)__2_YAPAXI_Z(0x18u); /*0x435c95*/
                  if ( v9 ) /*0x435c9f*/
                    Block = (BuildingLightQueue *)ObjectClass::RegisterInArray( /*0x435cc5*/
                                                    v9,
                                                    this->?[0],
                                                    this->?[1],
                                                    this->?[2],
                                                    16);
                  else
                    Block = 0; /*0x435ccb*/
                  v10 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, int *))this->FollowingObject->AbstractClass + 18))( /*0x435ce5*/
                                    this->FollowingObject,
                                    &v78);
                  v11 = (Vector3 *)(*((int (__thiscall **)(BuildingLightClass *, int *))this->ObjectClass + 18))( /*0x435cee*/
                                     this,
                                     &v71);
                  _EAX = Vector3::Subtract(v11, &v75, v10); /*0x435cf9*/
                  __asm /*0x435cfe*/
                  {
                    fild dword ptr [eax+8]
                    fild dword ptr [eax+4]
                    fild dword ptr [eax]
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
                    fstp qword ptr [esp+0DCh+var_DC]; double
                    fstp st
                    fstp st
                    fstp st
                  }
                  Math::Sqrt(v57); /*0x435d22*/
                  LOWORD(v13) = Math::RoundToInt(v3); /*0x435d2a*/
                  v14 = v13; /*0x435d35*/
                  v15 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, int *))this->FollowingObject->AbstractClass + 18))( /*0x435d43*/
                                    this->FollowingObject,
                                    &v78);
                  v16 = (Vector3 *)(*((int (__thiscall **)(BuildingLightClass *, int *))this->ObjectClass + 18))( /*0x435d4c*/
                                     this,
                                     &v71);
                  v17 = Vector3::Subtract(v16, &v75, v15); /*0x435d57*/
                  v18 = Coord::Length((Coord *)v17); /*0x435d63*/
                  v19 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1932); /*0x435d6a*/
                  if ( v18 >= v19 ) /*0x435d72*/
                    v74 = (v18 - v19) / ((*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1928) - v19) / 10); /*0x435da0*/
                  else
                    v74 = 0; /*0x435d74*/
                  if ( v14 > v19 && this->BehaviourMode == 3 )
                  {
                    v20 = v74 + 80 <= 0 ? 0 : v74 + 80;
                    if ( v20 >= 89 ) /*0x435dc5*/
                      v20 = 89; /*0x435dc7*/
                    v21 = Block; /*0x435dcc*/
                    Block[3] = (BuildingLightQueue)v20; /*0x435dd0*/
                  }
                  else
                  {
                    v21 = Block; /*0x435dd9*/
                    Block[3] = (BuildingLightQueue)80; /*0x435ddb*/
                  }
                  BuildingLight::CalculateShading(v61, v4); /*0x435de4*/
                  if ( v21 ) /*0x435deb*/
                  {
                    BuildingLightQueue::RemoveEntry(v21); /*0x435def*/
                    __3_YAXPAX_Z(v21); /*0x435df5*/
                  }
                  location = this->?; /*0x435dfd*/
                  v23 = this->?[0]; /*0x435e05*/
                  v79 = this->?[1]; /*0x435e0a*/
                  v24 = this->FollowingObject; /*0x435e0e*/
                  vtable0 = (int (__thiscall **)(ObjectClass *, int *))v24->AbstractClass; /*0x435e17*/
                  v80 = this->?[2]; /*0x435e19*/
                  v26 = (int *)vtable0[18](v24, &v71); /*0x435e22*/
                  v75 = *v26; /*0x435e27*/
                  v76 = v26[1]; /*0x435e35*/
                  v27 = v26[2]; /*0x435e39*/
                  v28 = (int (__thiscall **)(BuildingLightClass *, double *))this->ObjectClass; /*0x435e3c*/
                  v77 = v27; /*0x435e3e*/
                  v29 = (_DWORD *)v28[18](this, &v90); /*0x435e42*/
                  v30 = Coord::Subtract((Coord *)v93, *v29 - v75, v29[1] - v76, v29[2] - v27); /*0x435e65*/
                  v71 = *v30; /*0x435e6c*/
                  v72 = v30[1]; /*0x435e77*/
                  v73 = v30[2]; /*0x435e7e*/
                  Blocka = (void *)Coord::Length((Coord *)&v71); /*0x435e89*/
                  v62 = BuildingLightClass::CalculateDistanceIntensity(this); /*0x435e92*/
                  __asm /*0x435e96*/
                  {
                    fild [esp+0D4h+var_C4]
                    fmul ds:dbl_7E3A98
                  }
                  LOWORD(v31) = Math::RoundToInt(v3); /*0x435ea0*/
                  BehaviourMode = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1960) + v31; /*0x435eb5*/
                  v63 = BehaviourMode; /*0x435eb9*/
                  if ( (int)Blocka >= BehaviourMode ) /*0x435ebd*/
                  {
                    __asm { fild [esp+0D4h+var_C4] } /*0x435ec3*/
                    __asm
                    {
                      fidiv [esp+0DCh+Block]
                      fstp qword ptr [esp+0DCh+var_DC]; double
                    }
                    BuildingLight::CalcIntensity(v58); /*0x435ed1*/
                    __asm { fstp [esp+0DCh+var_64] } /*0x435ed6*/
                    Matrix3x4::Identity(&v94); /*0x435ee4*/
                    __asm { fld [esp+0D4h+var_64] } /*0x435ee9*/
                    __asm { fstp [esp+0D8h+var_DC+4]; float }
                    Matrix2D::Rotate(v94.m_Data, v59); /*0x435ef8*/
                    v64 = v23 - v75; /*0x435f0b*/
                    __asm { fild [esp+0D4h+var_C4] } /*0x435f11*/
                    v65 = v79 - v76; /*0x435f15*/
                    __asm /*0x435f23*/
                    {
                      fstp [esp+0D4h+var_70]
                      fild [esp+0D4h+var_C4]
                    }
                    v66 = v80 - v27; /*0x435f2b*/
                    __asm /*0x435f3e*/
                    {
                      fstp [esp+0D8h+var_6C]
                      fild [esp+0D8h+var_C4]
                      fstp [esp+0D8h+var_68]
                    }
                    v32 = (int *)TransformMatrix3x4Point(v93, (float *)v94.m_Data, v89); /*0x435f4a*/
                    __asm { fild [esp+0D4h+var_AC] } /*0x435f51*/
                    v33 = v32[1]; /*0x435f55*/
                    v71 = *v32; /*0x435f58*/
                    v72 = v33; /*0x435f5c*/
                    __asm /*0x435f60*/
                    {
                      fst [esp+0D4h+Block]
                      fadd [esp+0D4h+var_BC]
                    }
                    v73 = v32[2]; /*0x435f6b*/
                    LOWORD(v34) = Math::RoundToInt(v3); /*0x435f6f*/
                    __asm { fild [esp+0D4h+var_A8] } /*0x435f74*/
                    v35 = v34; /*0x435f78*/
                    __asm /*0x435f7a*/
                    {
                      fst [esp+0D4h+var_7C]
                      fadd [esp+0D4h+var_B8]
                    }
                    LOWORD(v36) = Math::RoundToInt(v3); /*0x435f82*/
                    __asm { fild [esp+0D4h+var_A4] } /*0x435f87*/
                    v37 = v36; /*0x435f8b*/
                    __asm /*0x435f8d*/
                    {
                      fst [esp+0D4h+var_C4]
                      fadd [esp+0D4h+var_B4]
                    }
                    LOWORD(v38) = Math::RoundToInt(v3); /*0x435f95*/
                    v92[0] = v35; /*0x435fa1*/
                    v92[1] = v37; /*0x435fa8*/
                    v92[2] = v38; /*0x435faf*/
                    Matrix3x4::Identity(&v94); /*0x435fb6*/
                    __asm { fld [esp+0D4h+var_64] } /*0x435fbb*/
                    __asm
                    {
                      fchs
                      fstp [esp+0D8h+var_DC+4]; float
                    }
                    Matrix2D::Rotate(v94.m_Data, v60); /*0x435fcc*/
                    v39 = (int *)TransformMatrix3x4Point(v93, (float *)v94.m_Data, v89); /*0x435fe4*/
                    __asm { fld [esp+0D4h+Block] } /*0x435feb*/
                    v40 = v39[1]; /*0x435fef*/
                    v71 = *v39; /*0x435ff2*/
                    v72 = v40; /*0x435ff6*/
                    v73 = v39[2]; /*0x435ffd*/
                    __asm { fadd [esp+0D4h+var_BC] } /*0x436001*/
                    LOWORD(v41) = Math::RoundToInt(v3); /*0x436005*/
                    __asm /*0x43600a*/
                    {
                      fld [esp+0D4h+var_7C]
                      fadd [esp+0D4h+var_B8]
                    }
                    v42 = v41; /*0x436012*/
                    LOWORD(v43) = Math::RoundToInt(v3); /*0x436014*/
                    __asm /*0x436019*/
                    {
                      fld [esp+0D4h+var_C4]
                      fadd [esp+0D4h+var_B4]
                    }
                    v44 = v43; /*0x436021*/
                    LOWORD(v45) = Math::RoundToInt(v3); /*0x436023*/
                    v91[2] = v45; /*0x436028*/
                    v91[0] = v42; /*0x436042*/
                    v91[1] = v44; /*0x436049*/
                    Coord::To_Screen((Coord *)g_TacticalClass_Instance, v92, &v85); /*0x436050*/
                    Coord::To_Screen((Coord *)g_TacticalClass_Instance, v91, &v83); /*0x436065*/
                    v78 = v75; /*0x436078*/
                    v80 = v27 + 430; /*0x43607c*/
                    v79 = v76; /*0x436090*/
                    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v78, &v81); /*0x436094*/
                    v85 += DSurface_ViewBounds.field_0; /*0x4360ae*/
                    LODWORD(v84) += DSurface_ViewBounds.field_4; /*0x4360be*/
                    v82 += (int)DSurface_ViewBounds.field_4; /*0x4360d0*/
                    v88[1] = v82; /*0x4360d4*/
                    LODWORD(v86) += DSurface_ViewBounds.field_4; /*0x4360de*/
                    v83 += DSurface_ViewBounds.field_0; /*0x4360e2*/
                    v81 += DSurface_ViewBounds.field_0; /*0x4360e6*/
                    v88[0] = v81; /*0x4360ea*/
                    v46 = ZCoordToScreenY(v27 + 400); /*0x4360f5*/
                    v47 = location[1]; /*0x4360f7*/
                    v48 = -v46; /*0x4360fd*/
                    v49 = location[2] + 250; /*0x4360ff*/
                    v78 = *location; /*0x436105*/
                    v79 = v47; /*0x436109*/
                    v50 = -ZCoordToScreenY(v49); /*0x436121*/
                    if ( (unsigned __int8)ClipLine(&v81, &v85, &DSurface_ViewBounds.field_0) ) /*0x436123*/
                    {
                      v51 = v74; /*0x43612c*/
                      v52 = *(_DWORD *)g_DSurface_Hidden_2->__pad_0; /*0x436140*/
                      v53 = (*(int (__thiscall **)(AudioStream *, float *, int *, int *, int, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x43615b*/
                              g_DSurface_Hidden_2,
                              v93,
                              &v81,
                              &v85,
                              75 - 6 * v74,
                              v48,
                              v50,
                              0);
                      (*(void (__thiscall **)(AudioStream *, int))(v52 + 56))(g_DSurface_Hidden_2, v53); /*0x436165*/
                    }
                    else
                    {
                      v51 = v74; /*0x43616a*/
                    }
                    LOBYTE(BehaviourMode) = ClipLine(v88, &v83, &DSurface_ViewBounds.field_0); /*0x43617b*/
                    if ( (_BYTE)BehaviourMode ) /*0x436182*/
                    {
                      v54 = *(_DWORD *)g_DSurface_Hidden_2->__pad_0; /*0x43618f*/
                      v55 = (*(int (__thiscall **)(AudioStream *, float *, int *, int *, int, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x4361af*/
                              g_DSurface_Hidden_2,
                              v93,
                              v88,
                              &v83,
                              75 - 6 * v51,
                              v48,
                              v50,
                              0);
                      LOBYTE(BehaviourMode) = (*(char (__thiscall **)(AudioStream *, int))(v54 + 56))( /*0x4361b9*/
                                                g_DSurface_Hidden_2,
                                                v55);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return BehaviourMode; /*0x4361bc*/
}



// ==== 0x004361D0  BuildingLightClass::SD_vt23  this=BuildingLightClass  sig=csp ====
char __thiscall BuildingLightClass::SD_vt23(BuildingLightClass *this)
{
  double v1; // st7
  ObjectClass *FollowingObject; // ecx
  int *v4; // eax
  int *BuildingLightClass_field_E0; // ebx
  _DWORD *v6; // esi
  _DWORD *v7; // eax
  int v8; // ebp
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  float v12; // eax
  int v13; // eax
  int *v14; // ebx
  int v15; // ecx
  int v16; // eax
  int *location; // ecx
  int v18; // esi
  int v19; // ebx
  int v20; // ebp
  double v21; // st7
  unsigned __int8 v23; // c0
  unsigned __int8 v24; // c3
  int v25; // eax
  int v26; // ecx
  float *v27; // eax
  int v28; // eax
  int v29; // esi
  int v30; // eax
  int v31; // ebx
  double v32; // st7
  int BuildingLightClass_field_D8; // eax
  double v35; // st7
  unsigned __int8 v36; // c0
  unsigned __int8 v37; // c3
  double v38; // st7
  double v39; // st7
  double v40; // st7
  int v41; // edx
  int v42; // esi
  int v43; // eax
  float *v44; // eax
  double v45; // st7
  int v46; // eax
  int v47; // eax
  int attachedTag; // eax
  ObjectClass *v49; // esi
  _DWORD *v50; // esi
  _DWORD *v51; // eax
  int *v52; // eax
  int v53; // eax
  int v54; // ebp
  int v55; // esi
  double v56; // st7
  int v57; // eax
  int v58; // edx
  ObjectClass *v59; // eax
  Object *nextArrayIndex; // ecx
  __int16 v61; // ax
  int v62; // ebx
  _DWORD *v63; // esi
  int v64; // edx
  int v65; // ebp
  int v66; // ebx
  int *v67; // eax
  int v68; // ecx
  int v69; // edx
  int v70; // eax
  int v71; // eax
  float v73; // [esp+18h] [ebp-D4h]
  float v74; // [esp+18h] [ebp-D4h]
  int v75; // [esp+30h] [ebp-BCh]
  char v76; // [esp+37h] [ebp-B5h]
  float v77; // [esp+38h] [ebp-B4h] BYREF
  float v78; // [esp+3Ch] [ebp-B0h]
  float v79; // [esp+40h] [ebp-ACh]
  int v80; // [esp+44h] [ebp-A8h] BYREF
  int v81; // [esp+48h] [ebp-A4h]
  int v82; // [esp+4Ch] [ebp-A0h]
  int v83; // [esp+50h] [ebp-9Ch]
  int v84; // [esp+54h] [ebp-98h] BYREF
  int v85; // [esp+58h] [ebp-94h]
  int v86; // [esp+5Ch] [ebp-90h]
  int v87; // [esp+60h] [ebp-8Ch]
  int v88; // [esp+64h] [ebp-88h]
  _DWORD v89[3]; // [esp+68h] [ebp-84h] BYREF
  int v90; // [esp+74h] [ebp-78h]
  Object *v91; // [esp+78h] [ebp-74h]
  __int16 v92[2]; // [esp+7Ch] [ebp-70h] BYREF
  int v93[3]; // [esp+80h] [ebp-6Ch] BYREF
  float v94[3]; // [esp+8Ch] [ebp-60h] BYREF
  Color v95[3]; // [esp+98h] [ebp-54h] BYREF
  float v96[3]; // [esp+A4h] [ebp-48h] BYREF
  Matrix3x4 v97; // [esp+B0h] [ebp-3Ch] BYREF
  char v98[12]; // [esp+E0h] [ebp-Ch] BYREF

  FollowingObject = this->FollowingObject; /*0x4361e4*/
  if ( !FollowingObject || !FollowingObject->isAliveFlag ) /*0x4361f2*/
  {
    LOBYTE(attachedTag) = (*((char (__thiscall **)(BuildingLightClass *))this->ObjectClass + 62))(this); /*0x4368e5*/
    return attachedTag; /*0x4368e5*/
  }
  switch ( this->BehaviourMode ) /*0x436207*/
  {
    case 1: /*0x436207*/
      v32 = *(double *)&this->BuildingLightClass_field_D0 + *(double *)&this->Speed[1]; /*0x43643f*/
      BuildingLightClass_field_D8 = (unsigned __int8)this->BuildingLightClass_field_D8; /*0x436445*/
      *(double *)&this->Speed[1] = v32; /*0x43644d*/
      if ( (_BYTE)BuildingLightClass_field_D8 ) /*0x43645f*/
      {
        v35 = *(double *)&this->BuildingLightClass_field_D0; /*0x43646b*/
        if ( !(v36 | v37) ) /*0x436473*/
        {
          v38 = v35 - *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1944); /*0x436478*/
          *(double *)&this->BuildingLightClass_field_D0 = v38; /*0x43647e*/
          if ( v38 < 0.0 ) /*0x43648f*/
          {
            this->BuildingLightClass_field_D0 = 0; /*0x436495*/
            *(_DWORD *)this->__pad_D4 = 0; /*0x43649b*/
            this->BuildingLightClass_field_D8 = 0; /*0x4364a1*/
          }
          goto LABEL_28; /*0x4364a8*/
        }
        if ( v35 < *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1936) ) /*0x4364b8*/
        {
          v39 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1944) /*0x4364c0*/
              + *(double *)&this->BuildingLightClass_field_D0;
LABEL_27:
          *(double *)&this->BuildingLightClass_field_D0 = v39; /*0x43652e*/
        }
      }
      else
      {
        if ( v32 < *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1952) * -0.5 ) /*0x4364d7*/
        {
          v40 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1944) /*0x4364df*/
              + *(double *)&this->BuildingLightClass_field_D0;
          *(double *)&this->BuildingLightClass_field_D0 = v40; /*0x4364e5*/
          if ( v40 > 0.0 ) /*0x4364f6*/
          {
            this->BuildingLightClass_field_D0 = 0; /*0x4364f8*/
            *(_DWORD *)this->__pad_D4 = 0; /*0x4364fe*/
            this->BuildingLightClass_field_D8 = 1; /*0x436504*/
          }
          goto LABEL_28; /*0x43650b*/
        }
        if ( -*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1936) < *(double *)&this->BuildingLightClass_field_D0 ) /*0x436520*/
        {
          v39 = *(double *)&this->BuildingLightClass_field_D0 /*0x436528*/
              - *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1944);
          goto LABEL_27; /*0x436528*/
        }
      }
LABEL_28:
      Matrix3x4::Identity(&v97); /*0x436534*/
      v74 = *(double *)&this->Speed[1]; /*0x43654e*/
      Matrix2D::Rotate(v97.m_Data, v74); /*0x436551*/
      v41 = this->BuildingLightClass_field_C4[1]; /*0x436562*/
      v42 = this->BuildingLightClass_field_B8[1]; /*0x436568*/
      v43 = this->BuildingLightClass_field_C4[2] - this->BuildingLightClass_field_B8[2]; /*0x436586*/
      v77 = (float)(this->BuildingLightClass_field_C4[0] - this->BuildingLightClass_field_B8[0]); /*0x436590*/
      v78 = (float)(v41 - v42); /*0x4365a8*/
      v79 = (float)v43; /*0x4365b0*/
      v44 = TransformMatrix3x4Point(v94, (float *)v97.m_Data, &v77); /*0x4365b4*/
      v45 = (double)this->BuildingLightClass_field_B8[0]; /*0x4365bb*/
      v77 = *v44; /*0x4365c1*/
      v78 = v44[1]; /*0x4365c8*/
      v79 = v44[2]; /*0x4365d3*/
      LOWORD(v46) = Math::RoundToInt(v45 + v77); /*0x4365d7*/
      v29 = v46; /*0x4365e2*/
      LOWORD(v47) = Math::RoundToInt((double)this->BuildingLightClass_field_B8[1] + v78); /*0x4365e8*/
      v31 = v47; /*0x4365f3*/
      v1 = (double)this->BuildingLightClass_field_B8[2] + v79; /*0x4365f5*/
LABEL_29:
      LOWORD(v16) = Math::RoundToInt(v1); /*0x4365f9*/
      v84 = v29; /*0x4365fe*/
      v85 = v31; /*0x436602*/
      goto LABEL_30; /*0x436602*/
    case 2: /*0x436207*/
      location = FollowingObject->location; /*0x43632f*/
      v18 = *location; /*0x436335*/
      v80 = *location; /*0x436337*/
      v19 = location[1]; /*0x43633b*/
      v81 = v19; /*0x43633e*/
      v20 = location[2]; /*0x436342*/
      v82 = v20; /*0x43634b*/
      v21 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1936) * 4.0 + *(double *)&this->Speed[1]; /*0x43635b*/
      *(double *)&this->Speed[1] = v21; /*0x436367*/
      if ( !(v23 | v24) ) /*0x43636f*/
        *(double *)&this->Speed[1] = v21 - 6.283185307179586; /*0x43637a*/
      Matrix3x4::Identity(&v97); /*0x43638b*/
      v73 = *(double *)&this->Speed[1]; /*0x43639e*/
      Matrix2D::Rotate(v97.m_Data, v73); /*0x4363a1*/
      v25 = this->BuildingLightClass_field_C4[1]; /*0x4363ac*/
      v26 = this->BuildingLightClass_field_C4[2]; /*0x4363b4*/
      v77 = (float)(this->BuildingLightClass_field_C4[0] - v18); /*0x4363ce*/
      v78 = (float)(v25 - v19); /*0x4363e9*/
      v79 = (float)(v26 - v20); /*0x4363f1*/
      v27 = TransformMatrix3x4Point(v96, (float *)v97.m_Data, &v77); /*0x4363f5*/
      v77 = *v27; /*0x436400*/
      v78 = v27[1]; /*0x436407*/
      v79 = v27[2]; /*0x436412*/
      LOWORD(v28) = Math::RoundToInt((double)v80 + v77); /*0x436416*/
      v29 = v28; /*0x43641f*/
      LOWORD(v30) = Math::RoundToInt((double)v81 + v78); /*0x436425*/
      v31 = v30; /*0x43642e*/
      v1 = (double)v82 + v79; /*0x436430*/
      goto LABEL_29; /*0x436434*/
    case 3: /*0x436207*/
      BuildingLightClass_field_E0 = (int *)this->BuildingLightClass_field_E0; /*0x436222*/
      if ( !BuildingLightClass_field_E0 ) /*0x43622a*/
        goto LABEL_12; /*0x43622a*/
      if ( !*((_BYTE *)BuildingLightClass_field_E0 + 144) ) /*0x436230*/
        goto LABEL_12; /*0x436230*/
      v6 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, char *))FollowingObject->AbstractClass + 18))( /*0x43624d*/
                       FollowingObject,
                       v98);
      v7 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(*BuildingLightClass_field_E0 + 72))( /*0x436256*/
                       BuildingLightClass_field_E0,
                       &v80);
      v8 = v6[1]; /*0x43625d*/
      v9 = *v7 - *v6; /*0x436260*/
      v10 = v7[1]; /*0x436262*/
      v11 = v7[2]; /*0x436265*/
      v77 = *(float *)&v9; /*0x436268*/
      LODWORD(v12) = v11 - v6[2]; /*0x436271*/
      LODWORD(v78) = v10 - v8; /*0x436273*/
      v79 = v12; /*0x436277*/
      Math::Sqrt( /*0x4362a3*/
        (double)v9 * (double)v9
      + (double)SLODWORD(v12) * (double)SLODWORD(v12)
      + (double)(v10 - v8) * (double)(v10 - v8));
      LOWORD(v13) = Math::RoundToInt(v1); /*0x4362ab*/
      if ( v13 >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1928) ) /*0x4362bc*/
      {
LABEL_12:
        BuildingLightClass::FindTarget(this, (_DWORD *)1); /*0x436325*/
        goto LABEL_31; /*0x43632a*/
      }
      v14 = BuildingLightClass_field_E0 + 39; /*0x4362be*/
      v93[0] = *v14; /*0x4362cb*/
      v93[1] = v14[1]; /*0x4362d8*/
      v15 = v14[2]; /*0x4362de*/
      v89[1] = this->?[0]; /*0x4362e1*/
      v93[2] = v15; /*0x4362e5*/
      v89[2] = this->?[1]; /*0x4362f0*/
      v90 = this->?[2]; /*0x4362f8*/
      v4 = Color::RGBFromFloat(v95, (int)v93, 0.25); /*0x436307*/
      break;
    default:
      v4 = this->?; /*0x436217*/
      break;
  }
  v84 = *v4; /*0x43630e*/
  v85 = v4[1]; /*0x436315*/
  v16 = v4[2]; /*0x436319*/
LABEL_30:
  v86 = v16; /*0x436606*/
LABEL_31:
  (*((void (__thiscall **)(BuildingLightClass *, int *))this->ObjectClass + 109))(this, &v84); /*0x43660a*/
  attachedTag = (*((int (__thiscall **)(ObjectClass *))this->FollowingObject->AbstractClass + 11))(this->FollowingObject); /*0x436621*/
  if ( attachedTag == 6 ) /*0x436627*/
  {
    v49 = this->FollowingObject; /*0x436629*/
    v87 = (int)v49; /*0x43662f*/
  }
  else
  {
    v87 = 0; /*0x436635*/
    v49 = 0; /*0x43663d*/
  }
  if ( this->BehaviourMode == 1 ) /*0x436648*/
  {
    if ( v49 ) /*0x436650*/
    {
      LOBYTE(attachedTag) = v49->isAliveFlag; /*0x436656*/
      if ( (_BYTE)attachedTag ) /*0x43665e*/
      {
        LOBYTE(attachedTag) = (*((int (__thiscall **)(ObjectClass *))v49->AbstractClass + 212))(v49); /*0x436668*/
        if ( (_BYTE)attachedTag ) /*0x436670*/
        {
          attachedTag = (int)v49->attachedTag; /*0x436676*/
          if ( attachedTag ) /*0x43667b*/
          {
            v76 = 0; /*0x43668a*/
            v77 = *(float *)(*((int (__thiscall **)(BuildingLightClass *, _DWORD *))this->ObjectClass + 110))(this, v89); /*0x43669b*/
            v50 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, float *))this->FollowingObject->AbstractClass + 18))( /*0x4366ad*/
                              this->FollowingObject,
                              v94);
            v51 = (_DWORD *)(*((int (__thiscall **)(BuildingLightClass *, float *))this->ObjectClass + 18))(this, v96); /*0x4366b9*/
            v52 = Coord::Subtract((Coord *)v95, *v51 - *v50, v51[1] - v50[1], v51[2] - v50[2]); /*0x4366dc*/
            v80 = *v52; /*0x4366e6*/
            v81 = v52[1]; /*0x4366ed*/
            v82 = v52[2]; /*0x4366f8*/
            Math::Sqrt((double)v80 * (double)v80 + (double)v82 * (double)v82 + (double)v81 * (double)v81); /*0x43671d*/
            LOWORD(v53) = Math::RoundToInt(v1); /*0x436725*/
            v54 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43672a*/
            v55 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1932); /*0x436732*/
            if ( v53 >= v55 ) /*0x43673a*/
              v83 = (v53 - v55) / ((*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1928) - v55) / 10); /*0x436768*/
            else
              v83 = 0; /*0x43673c*/
            v56 = (double)v83 * 5.973333333333333; /*0x436770*/
            LOWORD(v57) = Math::RoundToInt(v56); /*0x436776*/
            v58 = v57 + *(_DWORD *)(v54 + 1960) + 30; /*0x436781*/
            v59 = this->FollowingObject; /*0x436785*/
            v89[0] = v58; /*0x43678b*/
            nextArrayIndex = (Object *)v59[3].?; /*0x43678f*/
            v61 = -1; /*0x436795*/
            v91 = nextArrayIndex; /*0x436798*/
            v75 = -1; /*0x43679c*/
            do /*0x4368b1*/
            {
              v62 = -1; /*0x4367a4*/
              v88 = -1; /*0x4367a9*/
              LOWORD(v83) = LOWORD(v77) + v61; /*0x4367ad*/
              do /*0x43689f*/
              {
                HIWORD(v83) = v62 + HIWORD(v77); /*0x4367bd*/
                *(_DWORD *)v92 = v83; /*0x4367c6*/
                v63 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v92) + 57); /*0x4367d4*/
                if ( v63 ) /*0x4367dc*/
                {
                  do /*0x43688d*/
                  {
                    if ( ((*(int (__thiscall **)(_DWORD *))(*v63 + 44))(v63) == 15 /*0x436803*/
                       || (*(int (__thiscall **)(_DWORD *))(*v63 + 44))(v63) == 1)
                      && !(unsigned __int8)Object::IsAlliedWithObjectHouse(v91, (int)v63) )
                    {
                      v64 = *v63; /*0x436812*/
                      v65 = this->?[0]; /*0x436814*/
                      v66 = this->?[1]; /*0x436816*/
                      v90 = this->?[2]; /*0x436820*/
                      v67 = (int *)(*(int (__thiscall **)(_DWORD *, float *))(v64 + 72))(v63, v94); /*0x436827*/
                      v68 = *v67; /*0x43682a*/
                      v69 = v67[1]; /*0x43682c*/
                      v70 = v67[2]; /*0x43682f*/
                      v80 = v68 - v65; /*0x436838*/
                      v81 = v69 - v66; /*0x436844*/
                      v82 = v70 - v90; /*0x436848*/
                      Math::Sqrt( /*0x436870*/
                        (double)(v70 - v90) * (double)(v70 - v90)
                      + (double)(v69 - v66) * (double)(v69 - v66)
                      + (double)v80 * (double)v80);
                      LOWORD(v71) = Math::RoundToInt(v56); /*0x436878*/
                      if ( v71 < v89[0] ) /*0x436881*/
                        v76 = 1; /*0x436883*/
                    }
                    v63 = (_DWORD *)v63[12]; /*0x436888*/
                  }
                  while ( v63 ); /*0x43688d*/
                  v62 = v88; /*0x436893*/
                }
                v88 = ++v62; /*0x43689b*/
              }
              while ( v62 < 2 ); /*0x43689f*/
              v61 = ++v75; /*0x4368a9*/
            }
            while ( v75 < 2 ); /*0x4368b1*/
            LOBYTE(attachedTag) = v76; /*0x4368b7*/
            if ( v76 ) /*0x4368bd*/
              LOBYTE(attachedTag) = TeamClass::Update_0(*(TeamClass **)(v87 + 52), 35, v87, dword_89C4F0, 0, 0); /*0x4368d4*/
          }
        }
      }
    }
  }
  return attachedTag; /*0x4368d9*/
}



// ==== 0x00436900  BuildingLightClass::SD_vt12  this=BuildingLightClass  sig=csp ====
int BuildingLightClass::SD_vt12(BuildingLightClass *this)
{
  return 232; /*0x436905*/
}



// ==== 0x00436910  BuildingLightClass::SD_vt03  this=BuildingLightClass  sig=csp ====
int __stdcall BuildingLightClass::SD_vt03(BuildingLightClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x436916*/
    return -2147467261; /*0x436918*/
  *a2 = 1417814616; /*0x436926*/
  a2[1] = 298965160; /*0x43692e*/
  a2[2] = 1610638004; /*0x436937*/
  a2[3] = unk_7E973C; /*0x436940*/
  return 0; /*0x43691d*/
}



// ==== 0x00436950  BuildingLightClass::SD_vt05  this=BuildingLightClass  sig=csp ====
int __thiscall BuildingLightClass::SD_vt05(BuildingLightClass *this, _DWORD *a2, int a3)
{
  int Register; // edi

  Register = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x436961*/
  if ( Register >= 0 ) /*0x436965*/
  {
    if ( a2 ) /*0x436969*/
    {
      ObjectClass::Init((ObjectClass *)a2, (int)&a3); /*0x436972*/
      *a2 = &BuildingLightClass::`vftable'; /*0x436977*/
      a2[1] = &BuildingLightClass::`vftable'; /*0x43697d*/
      a2[2] = &BuildingLightClass::`vftable'; /*0x436984*/
      a2[3] = &BuildingLightClass::`vftable'; /*0x43698b*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 57); /*0x43699e*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 56); /*0x4369af*/
  }
  return Register; /*0x4369b6*/
}



// ==== 0x004369C0  BuildingLightClass::SD_vt06  this=BuildingLightClass  sig=csp ====
int __stdcall BuildingLightClass::SD_vt06(BuildingLightClass *this, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x4369d4*/
}



// ==== 0x004369E0  BuildingLightClass::SD_vt34  this=BuildingLightClass  sig=csp ====
int BuildingLightClass::SD_vt34(BuildingLightClass *this)
{
  return 0; /*0x4369e2*/
}



// ==== 0x004369F0  BuildingLightClass::SD_vt30  this=BuildingLightClass  sig=csp ====
int BuildingLightClass::SD_vt30(BuildingLightClass *this)
{
  return 3; /*0x4369f5*/
}



// ==== 0x00436A00  BuildingLightClass::SD_vt10  this=BuildingLightClass  sig=csp ====
int __thiscall BuildingLightClass::SD_vt10(BuildingLightClass *this, int a2, int a3)
{
  int result; // eax

  Object::Unlink((ObjectClass *)this); /*0x436a0e*/
  result = 0; /*0x436a19*/
  if ( this->BuildingLightClass_field_E0 == a2 ) /*0x436a1d*/
    this->BuildingLightClass_field_E0 = 0; /*0x436a1f*/
  if ( this->FollowingObject == (ObjectClass *)a2 ) /*0x436a2b*/
    this->FollowingObject = 0; /*0x436a2d*/
  return result; /*0x436a33*/
}



// ==== 0x00436BE0  BuildingLightClass::FindTarget  this=BuildingLightClass  sig=csp ====
_DWORD *__thiscall BuildingLightClass::FindTarget(BuildingLightClass *this, _DWORD *a2)
{
  double v2; // st7
  _DWORD *result; // eax
  BuildingLightClass *v4; // edi
  int v5; // edx
  ObjectClass *FollowingObject; // eax
  int v7; // ebx
  _DWORD *v8; // esi
  int v9; // eax
  int *location; // ecx
  int v11; // edi
  int v12; // ebx
  _DWORD *v13; // eax
  int v14; // ecx
  int v15; // edx
  void *v16; // eax
  int v17; // [esp+1Ch] [ebp-4Ch]
  int v18; // [esp+20h] [ebp-48h]
  void *v19; // [esp+24h] [ebp-44h]
  int v21; // [esp+2Ch] [ebp-3Ch]
  _DWORD *v22; // [esp+30h] [ebp-38h]
  __int16 v23[2]; // [esp+34h] [ebp-34h] BYREF
  Object *nextArrayIndex; // [esp+38h] [ebp-30h] BYREF
  int v25; // [esp+3Ch] [ebp-2Ch]
  int v26; // [esp+44h] [ebp-24h]
  int v27; // [esp+48h] [ebp-20h]
  int v28; // [esp+4Ch] [ebp-1Ch]
  int v29; // [esp+58h] [ebp-10h]
  char v30[12]; // [esp+5Ch] [ebp-Ch] BYREF

  result = a2; /*0x436be9*/
  v4 = this; /*0x436bef*/
  this->Speed[1] = 0; /*0x436bfa*/
  this->BehaviourMode = (int)a2; /*0x436c00*/
  *(_DWORD *)this->__pad_B4 = 0; /*0x436c06*/
  if ( a2 == (_DWORD *)3 ) /*0x436c0c*/
  {
    v5 = *(_DWORD *)(*((int (__thiscall **)(BuildingLightClass *, Object **))this->ObjectClass + 110))( /*0x436c21*/
                      this,
                      &nextArrayIndex);
    FollowingObject = v4->FollowingObject; /*0x436c23*/
    v25 = v5; /*0x436c29*/
    v19 = &unk_98967F; /*0x436c2d*/
    v22 = 0; /*0x436c3b*/
    nextArrayIndex = (Object *)FollowingObject[3].?; /*0x436c3f*/
    v17 = -1; /*0x436c43*/
    do /*0x436d74*/
    {
      v7 = -1; /*0x436c53*/
      v21 = -1; /*0x436c58*/
      LOWORD(v18) = v25 + v17; /*0x436c5c*/
      do /*0x436d62*/
      {
        HIWORD(v18) = v7 + HIWORD(v25); /*0x436c6c*/
        *(_DWORD *)v23 = v18; /*0x436c7b*/
        v8 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v23) + 57); /*0x436c84*/
        if ( v8 ) /*0x436c8c*/
        {
          while ( 1 ) /*0x436c98*/
          {
            if ( ((*(int (__thiscall **)(_DWORD *))(*v8 + 44))(v8) == 15 /*0x436cb9*/
               || (*(int (__thiscall **)(_DWORD *))(*v8 + 44))(v8) == 1)
              && !(unsigned __int8)Object::IsAlliedWithObjectHouse(nextArrayIndex, (int)v8) )
            {
              v9 = *v8; /*0x436ccc*/
              location = v4->?; /*0x436cce*/
              v11 = v4->?[0]; /*0x436cd0*/
              v12 = location[1]; /*0x436cd2*/
              v29 = location[2]; /*0x436cdf*/
              v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(v9 + 72))(v8, v30); /*0x436ce3*/
              v14 = v13[1] - v12; /*0x436ced*/
              v26 = *v13 - v11; /*0x436cf3*/
              v15 = v13[2]; /*0x436cf7*/
              v27 = v14; /*0x436cfa*/
              v28 = v15 - v29; /*0x436d07*/
              Math::Sqrt((double)v26 * (double)v26 + (double)(v15 - v29) * (double)(v15 - v29) + (double)v14 /*0x436d2c*/
                                                                                               * (double)v14);
              LOWORD(v16) = Math::RoundToInt(v2); /*0x436d34*/
              if ( (int)v16 < (int)v19 ) /*0x436d3d*/
              {
                v22 = v8; /*0x436d3f*/
                v19 = v16; /*0x436d43*/
              }
            }
            v8 = (_DWORD *)v8[12]; /*0x436d47*/
            if ( !v8 ) /*0x436d4c*/
              break; /*0x436d4c*/
            v4 = this; /*0x436c94*/
          }
          v7 = v21; /*0x436d52*/
          v4 = this; /*0x436d56*/
        }
        v21 = ++v7; /*0x436d5e*/
      }
      while ( v7 < 2 ); /*0x436d62*/
      ++v17; /*0x436d70*/
    }
    while ( v17 < 2 ); /*0x436d74*/
    result = v22; /*0x436d7a*/
    if ( v22 ) /*0x436d80*/
      v4->BuildingLightClass_field_E0 = (int)v22; /*0x436d82*/
  }
  return result; /*0x436d88*/
}



// ==== 0x00436DA0  ObjectClass::method_436DA0  this=ObjectClass  sig=csp ====
double __thiscall sub_436DA0(ObjectClass *this)
{
  double result; // st7
  _DWORD *v3; // edi
  _DWORD *v4; // eax
  int v5; // [esp+24h] [ebp-20h]
  int v6; // [esp+28h] [ebp-1Ch]
  _BYTE v7[12]; // [esp+2Ch] [ebp-18h] BYREF
  _BYTE v8[12]; // [esp+38h] [ebp-Ch] BYREF

  v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**((_DWORD **)this + 57) + 72))(this->u32_39, v7); /*0x436dbc*/
  v4 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, _BYTE *))this->AbstractClass + 18))(this, v8); /*0x436dc3*/
  v5 = v4[1] - v3[1]; /*0x436de0*/
  v6 = v4[2] - v3[2]; /*0x436de4*/
  Math::Sqrt((double)(*v4 - *v3) * (double)(*v4 - *v3) + (double)v6 * (double)v6 + (double)v5 * (double)v5); /*0x436e10*/
  Math::RoundToInt(result); /*0x436e18*/
  Math::RoundToInt(result); /*0x436e69*/
  return result; /*0x436e74*/
}



// ==== 0x00436E80  BuildingLightClass::CalculateDistanceIntensity  this=BuildingLightClass  sig=csp ====
int __thiscall BuildingLightClass::CalculateDistanceIntensity(BuildingLightClass *this)
{
  double v1; // st7
  _DWORD *v3; // edi
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // esi
  int v8; // [esp+20h] [ebp-1Ch]
  _BYTE v9[12]; // [esp+24h] [ebp-18h] BYREF
  _BYTE v10[12]; // [esp+30h] [ebp-Ch] BYREF

  v3 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, _BYTE *))this->FollowingObject->AbstractClass + 18))( /*0x436e9b*/
                   this->FollowingObject,
                   v9);
  v4 = (_DWORD *)(*((int (__thiscall **)(BuildingLightClass *, _BYTE *))this->ObjectClass + 18))(this, v10); /*0x436ea2*/
  v8 = v4[2] - v3[2]; /*0x436eca*/
  Math::Sqrt( /*0x436eef*/
    (double)(*v4 - *v3) * (double)(*v4 - *v3)
  + (double)v8 * (double)v8
  + (double)(v4[1] - v3[1]) * (double)(v4[1] - v3[1]));
  LOWORD(v5) = Math::RoundToInt(v1); /*0x436ef7*/
  v6 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1932); /*0x436f03*/
  if ( v5 >= v6 ) /*0x436f0b*/
    return (v5 - v6) / ((*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1928) - v6) / 10); /*0x436f36*/
  else
    return 0; /*0x436f0e*/
}



// ==== 0x00436F40  BuildingLightClass::SD_vt13  this=BuildingLightClass  sig=csp ====
int __thiscall BuildingLightClass::SD_vt13(BuildingLightClass *this, unsigned int *a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // eax
  ObjectClass *FollowingObject; // esi
  int v7; // eax

  HouseClass::ProcessPower((ObjectClass *)this); /*0x436f49*/
  Checksummer::Add_double((Checksummer *)a2, this->Speed[1], *(_DWORD *)this->__pad_B4); /*0x436f5e*/
  Power::TimerProcess(this->BuildingLightClass_field_B8[0]); /*0x436f6c*/
  Power::TimerProcess(this->BuildingLightClass_field_B8[1]); /*0x436f7a*/
  Power::TimerProcess(this->BuildingLightClass_field_B8[2]); /*0x436f88*/
  Power::TimerProcess(this->BuildingLightClass_field_C4[0]); /*0x436f96*/
  Power::TimerProcess(this->BuildingLightClass_field_C4[1]); /*0x436fa4*/
  Power::TimerProcess(this->BuildingLightClass_field_C4[2]); /*0x436fb2*/
  Checksummer::Add_double((Checksummer *)a2, this->BuildingLightClass_field_D0, *(_DWORD *)this->__pad_D4); /*0x436fc7*/
  LOBYTE(v3) = this->BuildingLightClass_field_D8; /*0x436fcc*/
  Power::FlagProcess((Power *)a2, v3); /*0x436fd5*/
  Power::TimerProcess(this->BehaviourMode); /*0x436fe3*/
  result = this->BuildingLightClass_field_E0; /*0x436fe8*/
  if ( result ) /*0x436ff0*/
  {
    v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(result + 4) + 16))(result + 4); /*0x436ff9*/
    result = Power::TimerProcess(v5); /*0x436fff*/
  }
  FollowingObject = this->FollowingObject; /*0x437004*/
  if ( FollowingObject ) /*0x43700c*/
  {
    v7 = (*((int (__stdcall **)(void **))FollowingObject->? + 4))(&FollowingObject->?); /*0x437015*/
    return Power::TimerProcess(v7); /*0x43701b*/
  }
  return result; /*0x437020*/
}



// ==== 0x00437030  BuildingLightClass::SD_vt53  this=BuildingLightClass  sig=csp ====
char __thiscall BuildingLightClass::SD_vt53(BuildingLightClass *this)
{
  if ( !(unsigned __int8)ObjectClass::Undeploy(this) ) /*0x437033*/
    return 0; /*0x43704b*/
  VectorClass::RemoveItem((DynamicVectorClass *)&dword_87F778, (int)this); /*0x437042*/
  return 1; /*0x437049*/
}



// ==== 0x00437050  BuildingLightClass::SD_vt54  this=BuildingLightClass  sig=csp ====
char __thiscall BuildingLightClass::SD_vt54(BuildingLightClass *this, int a2, int a3)
{
  if ( !(unsigned __int8)ObjectClass::Deploy((ObjectClass *)this) ) /*0x43705f*/
    return 0; /*0x43707b*/
  ObjectClass::SetDeployState((LogicClass *)this, 0); /*0x437070*/
  return 1; /*0x437077*/
}



// ==== 0x00437090  Coord3D::Set  this=Coord3D  sig=csp ====
_DWORD *__thiscall Coord3D::Set(Coord3D *this, int a2, int a3, int a4)
{
  *(_DWORD *)this->__pad_0 = a2; /*0x43709a*/
  this->Coord3D_field_0x04 = a3; /*0x4370a0*/
  this->Coord3D_field_0x08 = a4; /*0x4370a3*/
  return this->__pad_0; /*0x4370a6*/
}



// ==== 0x004370B0  BuildingLightClass::SD_vt11  this=BuildingLightClass  sig=csp ====
int BuildingLightClass::SD_vt11(BuildingLightClass *this)
{
  return 19; /*0x4370b5*/
}



// ==== 0x004370C0  BuildingLightClass::SDDTOR  this=BuildingLightClass  sig=csp ====
ObjectClass *__thiscall BuildingLightClass::SDDTOR(BuildingLightClass *this, char a2)
{
  int v3; // eax
  BuildingLightClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->vtable0 = (int)&BuildingLightClass::`vftable'; /*0x4370c4*/
  this->vtable1 = (int)&BuildingLightClass::`vftable'; /*0x4370ca*/
  this->vtable2 = (int)&BuildingLightClass::`vftable'; /*0x4370d1*/
  this->vtable3 = (int)&BuildingLightClass::`vftable'; /*0x4370d8*/
  if ( (unsigned __int8)ObjectClass::Undeploy(this) ) /*0x4370df*/
    VectorClass::RemoveItem((DynamicVectorClass *)&dword_87F778, (int)this); /*0x4370ee*/
  v5 = this; /*0x437103*/
  v3 = (*(int (__thiscall **)(int *, BuildingLightClass **))(dword_8B4190 + 16))(&dword_8B4190, &v5); /*0x437107*/
  if ( v3 != -1 && v3 < dword_8B41A0 && v3 < --dword_8B41A0 ) /*0x437122*/
  {
    do /*0x43713a*/
    {
      ++v3; /*0x43712a*/
      *((_DWORD *)dword_8B4194 + v3 - 1) = *((_DWORD *)dword_8B4194 + v3); /*0x43712e*/
    }
    while ( v3 < dword_8B41A0 ); /*0x43713a*/
  }
  ObjectClass::Dtor(this); /*0x43713e*/
  if ( (a2 & 1) != 0 ) /*0x437148*/
    __3_YAXPAX_Z(this); /*0x43714b*/
  return this; /*0x437155*/
}



// ==== 0x00437160  Vector3::Subtract  this=Vector3  sig=csp ====
int *__thiscall Vector3::Subtract(Vector3 *this, int *a2, _DWORD *a3)
{
  int v3; // edx
  int v4; // esi
  int v6; // ecx

  v3 = *(_DWORD *)this->__pad_0 - *a3; /*0x43716d*/
  v4 = this->Vector3_field_0x04 - a3[1]; /*0x437175*/
  v6 = this->Vector3_field_0x08 - a3[2]; /*0x43717e*/
  *a2 = v3; /*0x437182*/
  a2[1] = v4; /*0x437184*/
  a2[2] = v6; /*0x437187*/
  return a2; /*0x43718a*/
}



// ==== 0x00437190  sub_437190  this=-  sig=ida-proto ====
int sub_437190()
{
  dword_89C558 = 0; /*0x437192*/
  dword_89C55C = 0; /*0x437197*/
  dword_89C560 = 0; /*0x43719c*/
  dword_89C564 = 0; /*0x4371a1*/
  return 0; /*0x4371a6*/
}



// ==== 0x004371D0  Helper::ProcessData  this=Helper  sig=csp ====
char __fastcall Helper::ProcessData(void **a1, int a2, int *a3)
{
  int v6; // ebx
  int v7; // eax
  int v8; // edx
  void *v9; // eax
  void *v10[4]; // [esp+8h] [ebp-30h] BYREF
  XSurface v11; // [esp+18h] [ebp-20h] BYREF
  int v12; // [esp+28h] [ebp-10h]
  int v13[3]; // [esp+2Ch] [ebp-Ch] BYREF

  if ( *(int *)(a2 + 8) <= 0 || *(int *)(a2 + 12) <= 0 ) /*0x4371e5*/
    return 0; /*0x4371e8*/
  v6 = *a3; /*0x4371fa*/
  v7 = (*((int (__thiscall **)(void **))*a1 + 28))(a1); /*0x4371fc*/
  v8 = *(_DWORD *)(a2 + 12); /*0x437202*/
  v11.? = *(_DWORD *)(a2 + 8); /*0x437205*/
  v11.? = v8; /*0x437215*/
  v11.LockCount = 0; /*0x437219*/
  *(_DWORD *)v11.Surface = &XSurface_Vtable; /*0x437221*/
  v12 = v7; /*0x437229*/
  Buffer::Init((Buffer *)v13, v6, v7 * v8 * v11.?); /*0x43722d*/
  v9 = *(void **)(a2 + 8); /*0x437235*/
  v10[3] = *(void **)(a2 + 12); /*0x437241*/
  *(_DWORD *)v11.Surface = &BSurface_Vtable; /*0x43724b*/
  v10[0] = 0; /*0x437253*/
  v10[1] = 0; /*0x43725b*/
  v10[2] = v9; /*0x437263*/
  LOBYTE(v6) = XSurface::BlitPart(&v11, v10, a1, (void **)a2, 0, 1); /*0x437270*/
  Vector::Clear((int)v13); /*0x437272*/
  return v6; /*0x4371e7*/
}



// ==== 0x00437290  sub_437290  this=-  sig=csp ====
char __fastcall sub_437290(int *a1, int a2, int *a3)
{
  int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  _DWORD v11[4]; // [esp+8h] [ebp-30h] BYREF
  int (__thiscall **v12)(void *, char); // [esp+18h] [ebp-20h] BYREF
  int v13; // [esp+1Ch] [ebp-1Ch]
  int v14; // [esp+20h] [ebp-18h]
  int v15; // [esp+24h] [ebp-14h]
  int v16; // [esp+28h] [ebp-10h]
  _DWORD v17[3]; // [esp+2Ch] [ebp-Ch] BYREF

  if ( *(int *)(a2 + 8) <= 0 || *(int *)(a2 + 12) <= 0 ) /*0x4372a5*/
    return 0; /*0x4372a8*/
  v6 = *a3; /*0x4372ba*/
  v7 = (*(int (__thiscall **)(int *))(*a1 + 112))(a1); /*0x4372bc*/
  v8 = *(_DWORD *)(a2 + 12); /*0x4372c2*/
  v13 = *(_DWORD *)(a2 + 8); /*0x4372c5*/
  v14 = v8; /*0x4372d5*/
  v15 = 0; /*0x4372d9*/
  v12 = &XSurface_Vtable; /*0x4372e1*/
  v16 = v7; /*0x4372e9*/
  Buffer::Init(v17, v6, v7 * v8 * v13); /*0x4372ed*/
  v9 = *(_DWORD *)(a2 + 12); /*0x4372f5*/
  v10 = *a1; /*0x4372f8*/
  v11[2] = *(_DWORD *)(a2 + 8); /*0x4372fa*/
  v11[3] = v9; /*0x4372fe*/
  v12 = &BSurface_Vtable; /*0x437313*/
  v11[0] = 0; /*0x43731b*/
  v11[1] = 0; /*0x437323*/
  LOBYTE(v6) = (*(int (__thiscall **)(int *, int, int (__thiscall ***)(void *, char), _DWORD *, _DWORD, int))(v10 + 8))( /*0x437332*/
                 a1,
                 a2,
                 &v12,
                 v11,
                 0,
                 1);
  Vector::Clear((int)v17); /*0x437334*/
  return v6; /*0x4372a7*/
}



// ==== 0x00437350  BlitterCopySimpleSHP  this=XSurface  sig=csp ====
char __fastcall SHP_Blitter_CopySimple(int *a1, int *a2, int a3, int a4, int *a5, int a6, int a7, int a8, int a9)
{
  _DWORD *v11; // eax
  _DWORD *v13; // [esp-1Ch] [ebp-48h]
  _BYTE v14[20]; // [esp+Ch] [ebp-20h] BYREF
  int v15[3]; // [esp+20h] [ebp-Ch] BYREF

  v13 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a3 + 120))(a3, v14, a4); /*0x43738e*/
  v11 = (_DWORD *)(*(int (__thiscall **)(int *))(*a1 + 120))(a1); /*0x437396*/
  return BlitterCopySHP(a1, v11, v15, a2, a3, v13, a5, a6, a7, a8, a9, 0); /*0x4373a2*/
}



// ==== 0x004373B0  BlitterCopySHP  this=XSurface  sig=csp ====
char __fastcall SHP_Blitter_Copy(
        int *a1,
        _DWORD *a2,
        int *a3,
        int *a4,
        int a5,
        _DWORD *a6,
        int *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  _DWORD *v12; // eax
  int v14; // edx
  int v15; // edx
  int *v16; // edx
  int v17; // eax
  int v18; // ebp
  int v19; // eax
  int v20; // edx
  int v21; // ebx
  char result; // al
  int v23; // eax
  int v24; // edx
  unsigned __int8 v25; // di
  int v26; // ebp
  int v27; // edi
  int v28; // edi
  int v29; // ecx
  int *v30; // edi
  int v31; // eax
  int v32; // esi
  int v33; // esi
  int v34; // eax
  int v35; // edx
  int *v36; // esi
  int v37; // ecx
  int v38; // edx
  int v39; // eax
  int v40; // edx
  int v41; // eax
  int v42; // esi
  int v43; // edx
  unsigned int v44; // ecx
  unsigned int v45; // eax
  int v46; // eax
  int v47; // ecx
  char *v48; // ebx
  int *v49; // esi
  unsigned int v50; // edi
  unsigned int v51; // eax
  int v52; // eax
  unsigned int v53; // eax
  int v54; // eax
  int v55; // ecx
  int *v56; // esi
  unsigned int v57; // edi
  unsigned int v58; // eax
  int v59; // eax
  unsigned int v60; // eax
  unsigned int v61; // [esp+20h] [ebp-4Ch]
  int v62; // [esp+24h] [ebp-48h] BYREF
  unsigned int v63; // [esp+28h] [ebp-44h]
  int v64; // [esp+2Ch] [ebp-40h]
  int v65; // [esp+30h] [ebp-3Ch]
  int v66; // [esp+34h] [ebp-38h]
  int v67; // [esp+38h] [ebp-34h]
  int v68; // [esp+3Ch] [ebp-30h]
  int *v69; // [esp+40h] [ebp-2Ch]
  int v70; // [esp+44h] [ebp-28h]
  int v71; // [esp+48h] [ebp-24h]
  int v72; // [esp+4Ch] [ebp-20h] BYREF
  int v73; // [esp+50h] [ebp-1Ch]
  int v74; // [esp+54h] [ebp-18h]
  int v75; // [esp+58h] [ebp-14h]
  _DWORD v76[2]; // [esp+5Ch] [ebp-10h] BYREF
  int v77; // [esp+64h] [ebp-8h]
  int v78; // [esp+68h] [ebp-4h]

  v12 = a6; /*0x4373b3*/
  v76[0] = *a6; /*0x4373c1*/
  v69 = a1; /*0x4373c5*/
  v14 = a6[1]; /*0x4373c9*/
  LOBYTE(a6) = 0; /*0x4373cc*/
  v76[1] = v14; /*0x4373d1*/
  v62 = 0; /*0x4373d5*/
  v15 = v12[2]; /*0x4373d9*/
  v63 = 0; /*0x4373dc*/
  v77 = v15; /*0x4373e0*/
  v16 = a3; /*0x4373e4*/
  v17 = v12[3]; /*0x4373e8*/
  a3 = 0; /*0x4373eb*/
  v78 = v17; /*0x4373ef*/
  v72 = *v16; /*0x4373f5*/
  v61 = 0; /*0x4373f9*/
  v18 = 0; /*0x437400*/
  v73 = v16[1]; /*0x437402*/
  v65 = 0; /*0x437406*/
  v19 = v16[2]; /*0x43740a*/
  v66 = 0; /*0x43740d*/
  v74 = v19; /*0x437411*/
  v20 = v16[3]; /*0x437419*/
  v64 = 0; /*0x43741c*/
  v75 = v20; /*0x437423*/
  v67 = 0; /*0x437427*/
  v68 = 0; /*0x43742b*/
  a9 = 24 * a9 + 8484624; /*0x43743a*/
  v21 = 0; /*0x43745f*/
  result = CalcSurfaceBlitRects(&v72, a4, a5, v76, &a6, &v62, &a3); /*0x437461*/
  if ( result ) /*0x437468*/
  {
    if ( dword_87E8A4 ) /*0x43747c*/
    {
      v23 = *a2; /*0x437485*/
      v24 = *((_DWORD *)dword_87E8A4 + 1); /*0x43748d*/
      v71 = v73 + a2[1]; /*0x437490*/
      v25 = v71 - v24; /*0x437494*/
      v70 = v72 + v23; /*0x43749a*/
      v61 = StreamClass::ReadAndSeek(v72 + v23, v71 - v24); /*0x4374ac*/
      v21 = (2 * (v25 & 1)) | ((unsigned __int8)v70 ^ v25) & 1; /*0x4374b7*/
    }
    if ( g_ZBufferDescriptor ) /*0x4374c3*/
    {
      v26 = v72 + *a2; /*0x4374d6*/
      v27 = *((_DWORD *)g_ZBufferDescriptor + 1); /*0x4374d8*/
      v71 = v73 + a2[1]; /*0x4374dd*/
      v63 = Audio::GetSamplePosition(v26, v71 - v27); /*0x4374ea*/
      v64 = 0; /*0x4374f2*/
      v28 = *(_DWORD *)(a9 + 12); /*0x4374fa*/
      v67 = *(_DWORD *)(a9 + 8); /*0x437502*/
      v68 = v28; /*0x437509*/
      v29 = v28 / v67; /*0x43750d*/
      if ( *(_BYTE *)(a9 + 20) ) /*0x437513*/
      {
        v18 = *(_DWORD *)(a9 + 4) /*0x437545*/
            * ((a8
              + (unsigned __int16)(*((_WORD *)g_ZBufferDescriptor + 2)
                                 + *((_WORD *)g_ZBufferDescriptor + 18)
                                 - v73
                                 - *((_WORD *)a2 + 2)))
             / *(_DWORD *)(a9 + 4));
      }
      else
      {
        v18 = v29 /*0x437585*/
            * ((a8
              + (unsigned __int16)(*((_WORD *)g_ZBufferDescriptor + 2)
                                 + *((_WORD *)g_ZBufferDescriptor + 18)
                                 - v75
                                 - v73
                                 - *((_WORD *)a2 + 2)
                                 + 1))
             / v29)
            - v75 / v29;
        v64 = v28 - v75 % v29; /*0x437592*/
        if ( v64 == v28 ) /*0x437596*/
        {
          v64 = 0; /*0x43759c*/
          v18 += *(_DWORD *)(a9 + 16); /*0x4375a4*/
        }
      }
    }
    v30 = v69; /*0x4375a7*/
    v31 = (*(int (__thiscall **)(int *))(*v69 + 112))(v69); /*0x4375af*/
    v32 = v74 * v31; /*0x4375b6*/
    if ( v32 == (*(int (__thiscall **)(int *))(*v30 + 116))(v30) /*0x4375d8*/
      && (v33 = (*(int (__thiscall **)(int *))(*v30 + 116))(v30), v33 == (*(int (__thiscall **)(int *))(*a4 + 116))(a4)) )
    {
      v34 = v78 * v77; /*0x4375e2*/
      if ( v78 * v77 >= v75 * v74 ) /*0x4375ee*/
        v34 = v75 * v74; /*0x4375f0*/
      v35 = *a7; /*0x4375fc*/
      if ( (_BYTE)a6 ) /*0x4375fe*/
        (*(void (__stdcall **)(int, int *, int, _DWORD, _DWORD, _DWORD, int))(v35 + 12))(v62, a3, v34, 0, 0, 0, 1000); /*0x437616*/
      else
        (*(void (__stdcall **)(int, int *, int, _DWORD, _DWORD, _DWORD, int, _DWORD))(v35 + 4))( /*0x437636*/
          v62,
          a3,
          v34,
          0,
          0,
          0,
          1000,
          0);
    }
    else
    {
      v36 = a4; /*0x43763e*/
      a8 = (*(int (__thiscall **)(int *))(*a4 + 116))(a4); /*0x437649*/
      v37 = (*(int (__thiscall **)(int *))(*v30 + 116))(v30); /*0x437654*/
      a5 = v37; /*0x43765d*/
      if ( g_ZBufferDescriptor ) /*0x437661*/
        v65 = *((_DWORD *)g_ZBufferDescriptor + 10); /*0x437666*/
      if ( dword_87E8A4 ) /*0x437671*/
        v66 = *((_DWORD *)dword_87E8A4 + 10); /*0x437676*/
      if ( (_BYTE)a6 ) /*0x437680*/
      {
        a5 = -v37; /*0x437690*/
        a8 = -a8; /*0x43769c*/
        v38 = *v36; /*0x4376a0*/
        v66 = -v66; /*0x4376a4*/
        v65 = -v65; /*0x4376aa*/
        v39 = (*(int (__thiscall **)(int *))(v38 + 116))(v36); /*0x4376ae*/
        v40 = *v30; /*0x4376b5*/
        a3 = (int *)((char *)a3 + (v78 - 1) * v39); /*0x4376c1*/
        v41 = (*(int (__thiscall **)(int *))(v40 + 116))(v30); /*0x4376c7*/
        v42 = v78; /*0x4376d3*/
        v43 = (v75 - 1) * v41 + v62; /*0x4376da*/
        v62 = v43; /*0x4376e3*/
        if ( g_ZBufferDescriptor ) /*0x4376e7*/
        {
          v44 = v63 + 2 * (v78 + 0x7FFFFFFF * *((_DWORD *)g_ZBufferDescriptor + 10)); /*0x4376fb*/
          if ( v44 >= *((_DWORD *)g_ZBufferDescriptor + 7) ) /*0x437703*/
            v44 -= *((_DWORD *)g_ZBufferDescriptor + 8); /*0x437705*/
          v63 = v44; /*0x43770d*/
          v18 += 1 - v78; /*0x437713*/
        }
        if ( dword_87E8A4 ) /*0x43771d*/
        {
          v45 = v61 + 2 * (v78 + 0x7FFFFFFF * *((_DWORD *)dword_87E8A4 + 10)); /*0x437731*/
          if ( v45 >= *((_DWORD *)dword_87E8A4 + 7) ) /*0x437739*/
            v45 -= *((_DWORD *)dword_87E8A4 + 8); /*0x43773b*/
          v61 = v45; /*0x43773e*/
        }
      }
      else
      {
        v42 = v78; /*0x437744*/
        v43 = v62; /*0x437748*/
      }
      if ( v42 >= v75 ) /*0x437752*/
        v42 = v75; /*0x437754*/
      if ( (_BYTE)a6 ) /*0x43775c*/
      {
        if ( v42 > 0 ) /*0x437764*/
        {
          v46 = a10; /*0x43776a*/
          v47 = a11; /*0x43776e*/
          v48 = (char *)a3; /*0x437775*/
          v70 = v42; /*0x437779*/
          v49 = a7; /*0x43777d*/
          while ( 1 ) /*0x43778e*/
          {
            if ( (_WORD)v47 ) /*0x437791*/
            {
              a7 = (int *)*v49; /*0x43779a*/
              v50 = v63; /*0x43779e*/
              ((void (__thiscall *)(int *, int, char *, int, int, unsigned int, unsigned int, int, int))a7[4])( /*0x4377b6*/
                v49,
                v43,
                v48,
                v77,
                v18,
                v63,
                v61,
                v46,
                v47);
            }
            else
            {
              v50 = v63; /*0x4377bb*/
              (*(void (__thiscall **)(int *, int, char *, int, int, unsigned int, unsigned int, int))(*v49 + 12))( /*0x4377d4*/
                v49,
                v43,
                v48,
                v77,
                v18,
                v63,
                v61,
                v46);
            }
            v43 = a5 + v62; /*0x4377e3*/
            v62 += a5; /*0x4377e9*/
            v48 = (char *)a3 + a8; /*0x4377ed*/
            a3 = (int *)((char *)a3 + a8); /*0x4377f7*/
            if ( g_ZBufferDescriptor ) /*0x4377fb*/
            {
              v51 = v50 + 2 * v65; /*0x437801*/
              if ( v51 < *((_DWORD *)g_ZBufferDescriptor + 6) ) /*0x437809*/
                v51 += *((_DWORD *)g_ZBufferDescriptor + 8); /*0x43780b*/
              v63 = v51; /*0x437812*/
              v52 = v67 + v64; /*0x43781a*/
              v64 += v67; /*0x437822*/
              if ( v64 >= v68 ) /*0x437826*/
              {
                v18 += *(_DWORD *)(a9 + 16); /*0x43782c*/
                v64 = v52 - v68; /*0x437831*/
              }
            }
            if ( dword_87E8A4 ) /*0x43783d*/
            {
              v53 = v61 + 2 * v66; /*0x437847*/
              if ( v53 < *((_DWORD *)dword_87E8A4 + 6) ) /*0x43784f*/
                v53 += *((_DWORD *)dword_87E8A4 + 8); /*0x437851*/
              v61 = v53; /*0x437854*/
            }
            if ( !--v70 ) /*0x437861*/
              break; /*0x437861*/
            v46 = a10; /*0x437783*/
            v47 = a11; /*0x437787*/
          }
        }
      }
      else if ( v42 > 0 ) /*0x43786e*/
      {
        v54 = a10; /*0x437874*/
        v55 = a11; /*0x437878*/
        v70 = v42; /*0x43787f*/
        v56 = a7; /*0x437883*/
        while ( 1 ) /*0x437894*/
        {
          if ( (_WORD)v55 ) /*0x437897*/
          {
            a7 = (int *)*v56; /*0x4378a1*/
            v57 = v63; /*0x4378a5*/
            ((void (__thiscall *)(int *, int, int *, int, int, unsigned int, unsigned int, int, int, int))a7[2])( /*0x4378c1*/
              v56,
              v43,
              a3,
              v77,
              v18,
              v63,
              v61,
              v54,
              v21,
              v55);
          }
          else
          {
            v57 = v63; /*0x4378c6*/
            (*(void (__thiscall **)(int *, int, int *, int, int, unsigned int, unsigned int, int, int))(*v56 + 4))( /*0x4378e4*/
              v56,
              v43,
              a3,
              v77,
              v18,
              v63,
              v61,
              v54,
              v21);
          }
          v43 = a5 + v62; /*0x4378f3*/
          v21 ^= 3u; /*0x4378f9*/
          v62 += a5; /*0x4378fe*/
          a3 = (int *)((char *)a3 + a8); /*0x437902*/
          if ( g_ZBufferDescriptor ) /*0x43790e*/
          {
            v58 = v57 + 2 * v65; /*0x437914*/
            if ( v58 >= *((_DWORD *)g_ZBufferDescriptor + 7) ) /*0x43791c*/
              v58 -= *((_DWORD *)g_ZBufferDescriptor + 8); /*0x43791e*/
            v63 = v58; /*0x437925*/
            v59 = v67 + v64; /*0x43792d*/
            v64 += v67; /*0x437935*/
            if ( v64 >= v68 ) /*0x437939*/
            {
              v18 += *(_DWORD *)(a9 + 16); /*0x43793f*/
              v64 = v59 - v68; /*0x437944*/
            }
          }
          if ( dword_87E8A4 ) /*0x437950*/
          {
            v60 = v61 + 2 * v66; /*0x43795a*/
            if ( v60 >= *((_DWORD *)dword_87E8A4 + 7) ) /*0x437962*/
              v60 -= *((_DWORD *)dword_87E8A4 + 8); /*0x437964*/
            v61 = v60; /*0x437967*/
          }
          if ( !--v70 ) /*0x437974*/
            break; /*0x437974*/
          v55 = a11; /*0x437889*/
          v54 = a10; /*0x437890*/
        }
      }
      v30 = v69; /*0x43797a*/
    }
    (*(void (__thiscall **)(int *))(*v30 + 96))(v30); /*0x437982*/
    (*(void (__thiscall **)(int *))(*a4 + 96))(a4); /*0x43798b*/
    return 1; /*0x43798e*/
  }
  return result; /*0x43746a*/
}



// ==== 0x004379A0  sub_4379A0  this=-  sig=ida-proto ====
bool __fastcall sub_4379A0(int a1, int a2, _DWORD *a3, int a4, int *a5, int a6, int a7, int a8, int a9)
{
  _DWORD *v11; // eax
  int *v13; // [esp-28h] [ebp-54h]
  _BYTE v14[20]; // [esp+Ch] [ebp-20h] BYREF
  int v15[3]; // [esp+20h] [ebp-Ch] BYREF

  v13 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *, int))(*a3 + 120))(a3, v14, a4); /*0x4379e4*/
  v11 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 120))(a1); /*0x4379ec*/
  return BlitterRLEBlitSHP(a1, v11, v15, a2, a3, v13, a5, a6, a7, a8, a9, 0, 0, 0, 0); /*0x4379f8*/
}



// ==== 0x00437A10  BlitterRLEBlitSHP  this=-  sig=csp ====
char __fastcall BlitterRLEBlitSHP(
        int a1,
        CellStruct *a2,
        int *a3,
        int a4,
        _DWORD *a5,
        int *a6,
        int *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  int v16; // edx
  int v17; // esi
  int v18; // ebp
  int v19; // ebx
  char result; // al
  Coord2D *v21; // eax
  _DWORD *v22; // eax
  int v23; // edx
  int Stream_field_04; // esi
  int v25; // esi
  int v26; // ecx
  int v27; // eax
  int *v28; // ebp
  int v29; // eax
  int v30; // ecx
  int v31; // ebp
  int v32; // edi
  unsigned __int16 *v33; // edi
  int v34; // eax
  int v35; // ebp
  int v36; // eax
  int v37; // edx
  unsigned int v38; // eax
  int v39; // eax
  unsigned int v40; // eax
  _DWORD *v41; // [esp+24h] [ebp-80h]
  char *v42; // [esp+38h] [ebp-6Ch]
  int SamplePosition; // [esp+3Ch] [ebp-68h]
  int v44; // [esp+40h] [ebp-64h]
  int v46; // [esp+48h] [ebp-5Ch]
  int v47; // [esp+4Ch] [ebp-58h]
  int v48; // [esp+50h] [ebp-54h]
  StreamClass *m_Stream; // [esp+54h] [ebp-50h]
  int v50; // [esp+58h] [ebp-4Ch]
  int v51; // [esp+5Ch] [ebp-48h]
  int v52; // [esp+60h] [ebp-44h]
  char v53[8]; // [esp+64h] [ebp-40h] BYREF
  char v54[8]; // [esp+6Ch] [ebp-38h] BYREF
  int v55; // [esp+74h] [ebp-30h] BYREF
  char *v56; // [esp+78h] [ebp-2Ch]
  int v57; // [esp+80h] [ebp-24h]
  int v58; // [esp+84h] [ebp-20h] BYREF
  int v59; // [esp+88h] [ebp-1Ch]
  int v60; // [esp+8Ch] [ebp-18h]
  int v61; // [esp+90h] [ebp-14h]
  int v62; // [esp+94h] [ebp-10h] BYREF
  int v63; // [esp+98h] [ebp-Ch]
  int v64; // [esp+9Ch] [ebp-8h]
  int v65; // [esp+A0h] [ebp-4h]
  int v66; // [esp+A8h] [ebp+4h]
  int v67; // [esp+A8h] [ebp+4h]
  int v68; // [esp+B0h] [ebp+Ch]
  int v69; // [esp+B4h] [ebp+10h]
  int v70; // [esp+BCh] [ebp+18h]
  int v71; // [esp+C0h] [ebp+1Ch]

  v16 = a6[1]; /*0x437a23*/
  v62 = *a6; /*0x437a26*/
  v63 = v16; /*0x437a2a*/
  v17 = 0; /*0x437a2e*/
  SamplePosition = 0; /*0x437a33*/
  v64 = a6[2]; /*0x437a37*/
  v44 = 0; /*0x437a3b*/
  v65 = a6[3]; /*0x437a49*/
  v42 = 0; /*0x437a4d*/
  m_Stream = 0; /*0x437a53*/
  v58 = *a3; /*0x437a57*/
  v51 = 0; /*0x437a5b*/
  v69 = 0; /*0x437a62*/
  v59 = a3[1]; /*0x437a69*/
  v46 = 0; /*0x437a6d*/
  v47 = 0; /*0x437a74*/
  v60 = a3[2]; /*0x437a78*/
  v61 = a3[3]; /*0x437a8d*/
  v18 = 24 * a9 + 8484624; /*0x437a9c*/
  v50 = 0; /*0x437aa7*/
  v19 = 0; /*0x437aab*/
  v52 = v18; /*0x437aad*/
  result = IntersectSurfaceRects(&v58, (int)a2, &v62, (int)a5); /*0x437ab1*/
  if ( !result ) /*0x437ab8*/
    return result; /*0x437ab8*/
  v71 = v62 - *a5; /*0x437ad6*/
  v48 = v63 - a5[1]; /*0x437ae7*/
  v41 = CellStruct::Copy((CellStruct *)&v58, v53); /*0x437afd*/
  v21 = (Coord2D *)CellStruct::Copy(a2, &v55); /*0x437b02*/
  v22 = Coord2D::Add(v21, v54, v41); /*0x437b09*/
  v68 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 92))(a1, *v22, v22[1]); /*0x437b28*/
  if ( !v68 ) /*0x437b2f*/
    return 0; /*0x437b3a*/
  if ( g_ZBufferDescriptor ) /*0x437b45*/
  {
    v23 = a2->field_0 + v58; /*0x437b5c*/
    Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x437b5e*/
    v56 = (char *)a2->field_4 + v59; /*0x437b61*/
    v25 = (int)&v56[-Stream_field_04]; /*0x437b67*/
    SamplePosition = Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v23, v25); /*0x437b73*/
    v46 = *(_DWORD *)(v18 + 8); /*0x437b7c*/
    v69 = 0; /*0x437b80*/
    v47 = *(_DWORD *)(v18 + 12); /*0x437b91*/
    m_Stream = g_ZBufferDescriptor[2].m_Stream; /*0x437b95*/
    v26 = v47 / v46; /*0x437b9e*/
    if ( *(_BYTE *)(v18 + 20) ) /*0x437ba0*/
    {
      v27 = a12; /*0x437bcd*/
      v17 = *(_DWORD *)(v18 + 4) /*0x437bd4*/
          * ((a8 + (unsigned __int16)(LOWORD(g_ZBufferDescriptor[1].Stream_field_10) - v25))
           / *(_DWORD *)(v18 + 4));
      if ( a12 ) /*0x437bd9*/
      {
LABEL_7:
        v28 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v27 + 120))(v27, &v55); /*0x437bdf*/
        v29 = *v28; /*0x437bed*/
        v50 = v28[2]; /*0x437bf6*/
        v30 = a14 + v28[1]; /*0x437c0d*/
        v57 = v28[3]; /*0x437c16*/
        v42 = (char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)a12 + 92))(a12, v71 + a13 + v29, v30 + v48); /*0x437c30*/
        goto LABEL_12; /*0x437c34*/
      }
    }
    else
    {
      v17 = a8 /*0x437c67*/
          + (unsigned __int16)(LOWORD(g_ZBufferDescriptor->Stream_field_04)
                             + LOWORD(g_ZBufferDescriptor[1].Stream_field_10)
                             - LOWORD(a2->field_4)
                             - *((_WORD *)a3 + 6)
                             - *((_WORD *)a3 + 2)
                             + 1);
      v27 = a12; /*0x437c69*/
      if ( a12 ) /*0x437c72*/
        goto LABEL_7; /*0x437c72*/
      v66 = a3[1] + a3[3] - v59; /*0x437c82*/
      v17 = v26 * (v17 / v26) - v66 / v26; /*0x437c9d*/
      v69 = v47 - v66 % v26; /*0x437cb3*/
      if ( v69 == v47 ) /*0x437cba*/
      {
        v69 = 0; /*0x437cbf*/
        v17 += *(_DWORD *)(v18 + 16); /*0x437cca*/
      }
    }
    v42 = (char *)&unk_89C568; /*0x437ccc*/
  }
LABEL_12:
  if ( *(_DWORD *)&stru_87E790.__pad_D8[60] ) /*0x437cdc*/
  {
    v31 = a2->field_0 + v58; /*0x437ce7*/
    v32 = (int)a2->field_4 + v59 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 4); /*0x437cfa*/
    v44 = StreamClass::ReadAndSeek(*(int **)&stru_87E790.__pad_D8[60], v31, v32); /*0x437d18*/
    v51 = *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 40); /*0x437d1c*/
    v19 = (2 * (v32 & 1)) | ((unsigned __int8)v31 ^ (unsigned __int8)v32) & 1; /*0x437d20*/
  }
  v33 = (unsigned __int16 *)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a4 + 92))(a4, 0, 0); /*0x437d36*/
  if ( v33 ) /*0x437d3a*/
  {
    v34 = v48; /*0x437d51*/
    if ( v48 > 0 ) /*0x437d57*/
    {
      do /*0x437d64*/
      {
        v19 ^= 3u; /*0x437d5b*/
        v33 = (unsigned __int16 *)((char *)v33 + *v33); /*0x437d61*/
        --v34; /*0x437d63*/
      }
      while ( v34 ); /*0x437d64*/
    }
    v35 = a1; /*0x437d66*/
    v70 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 116))(a1); /*0x437d76*/
    v36 = v65; /*0x437d7d*/
    if ( v65 >= v61 ) /*0x437d83*/
      v36 = v61; /*0x437d85*/
    if ( v36 > 0 ) /*0x437d89*/
    {
      v67 = v36; /*0x437d96*/
      do /*0x437eda*/
      {
        v37 = *a7; /*0x437da4*/
        if ( (_WORD)a15 ) /*0x437daa*/
          (*(void (__thiscall **)(int *, int, unsigned __int16 *, int, int, int, int, int, int, int, char *, int))(v37 + 8))( /*0x437de4*/
            a7,
            v68,
            v33 + 1,
            v64,
            v71,
            v17,
            SamplePosition,
            v44,
            a10,
            v19,
            v42,
            a15);
        else
          (*(void (__thiscall **)(int *, int, unsigned __int16 *, int, int, int, int, int, int, int, char *))(v37 + 4))( /*0x437e20*/
            a7,
            v68,
            v33 + 1,
            v64,
            v71,
            v17,
            SamplePosition,
            v44,
            a10,
            v19,
            v42);
        v68 += v70; /*0x437e38*/
        v19 ^= 3u; /*0x437e45*/
        v33 = (unsigned __int16 *)((char *)v33 + *v33); /*0x437e48*/
        if ( g_ZBufferDescriptor ) /*0x437e4c*/
        {
          v38 = SamplePosition + 2 * (_DWORD)m_Stream; /*0x437e56*/
          if ( v38 >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x437e5e*/
            v38 -= g_ZBufferDescriptor[1].Stream_field_0C; /*0x437e60*/
          SamplePosition = v38; /*0x437e63*/
          if ( a12 ) /*0x437e70*/
          {
            v42 += v50; /*0x437e7c*/
          }
          else
          {
            v39 = v46 + v69; /*0x437e8d*/
            v69 += v46; /*0x437e95*/
            if ( v69 >= v47 ) /*0x437e9c*/
            {
              v17 += *(_DWORD *)(v52 + 16); /*0x437ea2*/
              v69 = v39 - v47; /*0x437ea7*/
            }
          }
          v40 = v44 + 2 * v51; /*0x437eb6*/
          if ( v40 >= *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) ) /*0x437ec2*/
            v40 -= *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32); /*0x437ec4*/
          v44 = v40; /*0x437ec7*/
        }
        --v67; /*0x437ed3*/
      }
      while ( v67 ); /*0x437eda*/
      v35 = a1; /*0x437ee0*/
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v35 + 96))(v35); /*0x437ee9*/
    (*(void (__thiscall **)(int))(*(_DWORD *)a4 + 96))(a4); /*0x437ef5*/
    return 1; /*0x437ef8*/
  }
  else
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 96))(a1); /*0x437d42*/
    return 0; /*0x437d45*/
  }
}



// ==== 0x00437F10  Coord2D::Add  this=Coord2D  sig=csp ====
_DWORD *__thiscall Coord2D::Add(Coord2D *this, _DWORD *a2, _DWORD *a3)
{
  int v3; // esi

  v3 = this->Coord2D_field_0x04 + a3[1]; /*0x437f21*/
  *a2 = *(_DWORD *)this->__pad_0 + *a3; /*0x437f27*/
  a2[1] = v3; /*0x437f29*/
  return a2; /*0x437f2c*/
}



// ==== 0x00437F30  CellStruct::Copy  this=IUnknown  sig=csp ====
_DWORD *__thiscall CellStruct::Copy(CellStruct *this, _DWORD *a2)
{
  int v3; // edx
  void *v4; // ecx

  v3 = this->field_0; /*0x437f34*/
  v4 = this->field_4; /*0x437f36*/
  *a2 = v3; /*0x437f39*/
  a2[1] = v4; /*0x437f3b*/
  return a2; /*0x437f3e*/
}



// ==== 0x00437F50  ObjectClass::method_437F50  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_437F50(ObjectClass *this)
{
  HRESULT v2; // esi
  LPVOID ppv; // [esp+Ch] [ebp-4h] BYREF

  this->AbstractClass = 0; /*0x437f68*/
  v2 = CoCreateInstance(&stru_7E9500, 0, 7u, &riid, &ppv); /*0x437f74*/
  if ( v2 < 0 ) /*0x437f78*/
    goto LABEL_5; /*0x437f78*/
  v2 = OleRun((LPUNKNOWN)ppv); /*0x437f85*/
  if ( v2 >= 0 ) /*0x437f89*/
    v2 = (**(int (__stdcall ***)(LPVOID, void *, ObjectClass *))ppv)(ppv, &unk_818C08, this); /*0x437f9a*/
  (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x437fa3*/
  if ( v2 < 0 ) /*0x437fa8*/
  {
LABEL_5:
    if ( v2 != -2147467262 ) /*0x437fb0*/
      WinAPI::Wrapper(v2); /*0x437fb3*/
  }
  return &this->AbstractClass; /*0x437fba*/
}



// ==== 0x00437FC0  COMObject::Release  this=COMObject  sig=csp ====
int __thiscall COMObject::Release(COMObject *this)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x437fc0*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x437fc0*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x437fc9*/
  return result; /*0x437fcc*/
}



// ==== 0x00437FD0  GameClass::initGameMode  this=GameClass  sig=csp ====
int __thiscall GameClass::initGameMode(GameClass *this, int a2, int a3)
{
  if ( !*(_DWORD *)this->__pad_0 ) /*0x437fd3*/
    WinAPI::Wrapper(-2147467261); /*0x437fdd*/
  return (*(int (__stdcall **)(_DWORD, int, int))(**(_DWORD **)this->__pad_0 + 12))(*(_DWORD *)this->__pad_0, a3, a2); /*0x437ff4*/
}



// ==== 0x00438000  BlowPipe::Draw  this=BlowPipe  sig=csp ====
int __thiscall BlowPipe::Draw(BlowPipe *this, int a2, int a3, int a4)
{
  if ( !*(_DWORD *)this->__pad_0 ) /*0x438003*/
    WinAPI::Wrapper(-2147467261); /*0x43800d*/
  (*(void (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)this->__pad_0 + 24))(*(_DWORD *)this->__pad_0, a3, a2, a4); /*0x438026*/
  return a3; /*0x43802b*/
}



// ==== 0x00438030  BlowPipe::DrawAlt  this=BlowPipe  sig=csp ====
int __thiscall BlowPipe::DrawAlt(BlowPipe *this, int a2, int a3, int a4)
{
  if ( !*(_DWORD *)this->__pad_0 ) /*0x438033*/
    WinAPI::Wrapper(-2147467261); /*0x43803d*/
  (*(void (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)this->__pad_0 + 28))(*(_DWORD *)this->__pad_0, a3, a2, a4); /*0x438056*/
  return a3; /*0x43805b*/
}



// ==== 0x00438060  BlowPipe::AddRef  this=BlowPipe  sig=csp ====
int __thiscall BlowPipe::AddRef(BlowPipe *this)
{
  int v2; // edi
  int v3; // eax

  v2 = 0; /*0x438064*/
  v3 = *((_DWORD *)this + 6); /*0x438066*/
  if ( v3 > 0 && this->BlowPipe_field_0x0C ) /*0x43806d*/
    v2 = Delegate::Dispatch((Pipe *)this, (int)&this->BlowPipe_field_0x10, v3); /*0x438080*/
  *((_DWORD *)this + 6) = 0; /*0x438084*/
  return v2 + GameClass::GetRelatedObject((Pipe *)this); /*0x438092*/
}



// ==== 0x004380A0  BlowPipe::Read  this=BlowPipe  sig=csp ====
char *__thiscall BlowPipe::Read(BlowPipe *this, char *Src, signed int Size)
{
  char *v3; // ebx
  size_t v4; // ebp
  int v6; // eax
  size_t v7; // edi
  size_t v8; // eax
  BlowPipe *BlowPipe_field_0x0C; // ecx
  size_t v10; // ebp
  BlowPipe *v11; // ecx
  int *v13; // [esp-10h] [ebp-1Ch]
  int *p_BlowPipe_field_0x10; // [esp-8h] [ebp-14h]
  int *v15; // [esp-8h] [ebp-14h]
  char *Srca; // [esp+10h] [ebp+4h]
  size_t Sizea; // [esp+14h] [ebp+8h]

  v3 = Src; /*0x4380a1*/
  v4 = Size; /*0x4380a6*/
  if ( !Src || Size < 1 || !this->BlowPipe_field_0x0C ) /*0x4380be*/
    return (char *)Delegate::Dispatch((Pipe *)this, (int)Src, Size); /*0x4381b8*/
  v6 = *((_DWORD *)this + 6); /*0x4380c9*/
  Srca = 0; /*0x4380cf*/
  if ( v6 ) /*0x4380d7*/
  {
    v7 = 8 - v6; /*0x4380de*/
    if ( 8 - v6 >= Size ) /*0x4380e2*/
      v7 = Size; /*0x4380e4*/
    memcpy((char *)&this->BlowPipe_field_0x10 + *((_DWORD *)this + 6), v3, v7); /*0x4380f0*/
    v3 += v7; /*0x4380fd*/
    v8 = v7 + *((_DWORD *)this + 6); /*0x4380ff*/
    v4 = Size - v7; /*0x438101*/
    *((_DWORD *)this + 6) = v8; /*0x438106*/
    Size -= v7; /*0x438109*/
    if ( v8 == 8 ) /*0x43810d*/
    {
      BlowPipe_field_0x0C = (BlowPipe *)this->BlowPipe_field_0x0C; /*0x438112*/
      p_BlowPipe_field_0x10 = &this->BlowPipe_field_0x10; /*0x43811b*/
      v13 = &this->BlowPipe_field_0x10; /*0x43811d*/
      if ( *((_DWORD *)this + 7) == 1 ) /*0x43811e*/
        BlowPipe::DrawAlt(BlowPipe_field_0x0C, (int)v13, 8, (int)p_BlowPipe_field_0x10); /*0x438120*/
      else
        BlowPipe::Draw(BlowPipe_field_0x0C, (int)v13, 8, (int)p_BlowPipe_field_0x10); /*0x438127*/
      Srca = (char *)Delegate::Dispatch((Pipe *)this, (int)&this->BlowPipe_field_0x10, 8); /*0x438136*/
      *((_DWORD *)this + 6) = 0; /*0x43813a*/
    }
  }
  if ( v4 >= 8 ) /*0x438144*/
  {
    v10 = v4 >> 3; /*0x43814a*/
    Sizea = Size - 8 * v10; /*0x438154*/
    do /*0x43818e*/
    {
      v11 = (BlowPipe *)this->BlowPipe_field_0x0C; /*0x43815b*/
      v15 = &this->BlowPipe_field_0x10; /*0x438164*/
      if ( *((_DWORD *)this + 7) == 1 ) /*0x438168*/
        BlowPipe::DrawAlt(v11, (int)v3, 8, (int)v15); /*0x43816a*/
      else
        BlowPipe::Draw(v11, (int)v3, 8, (int)v15); /*0x438171*/
      v3 += 8; /*0x438184*/
      --v10; /*0x438189*/
      Srca += Delegate::Dispatch((Pipe *)this, (int)&this->BlowPipe_field_0x10, 8); /*0x43818a*/
    }
    while ( v10 ); /*0x43818e*/
    v4 = Sizea; /*0x438190*/
  }
  if ( (int)v4 > 0 ) /*0x438197*/
  {
    memcpy(&this->BlowPipe_field_0x10, v3, v4); /*0x43819f*/
    *((_DWORD *)this + 6) = v4; /*0x4381a7*/
  }
  return Srca; /*0x4381ae*/
}



// ==== 0x004381D0  GameClass::processFrame  this=GameClass  sig=csp ====
_DWORD *__thiscall GameClass::processFrame(GameClass *this, int a2, int a3)
{
  _DWORD *result; // eax
  ObjectClass *v5; // eax
  GameClass *v6; // ecx

  result = *(_DWORD **)&this->__pad_8[4]; /*0x4381d3*/
  if ( !result ) /*0x4381d8*/
  {
    v5 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x4381dc*/
    if ( v5 ) /*0x4381e6*/
      result = sub_437F50(v5); /*0x4381ea*/
    else
      result = 0; /*0x4381f1*/
    *(_DWORD *)&this->__pad_8[4] = result; /*0x4381f3*/
  }
  v6 = *(GameClass **)&this->__pad_8[4]; /*0x4381f6*/
  if ( v6 ) /*0x4381fc*/
    return (_DWORD *)GameClass::initGameMode(v6, a2, a3); /*0x438208*/
  return result; /*0x4381f9*/
}



// ==== 0x00438210  BlowStraw::Get  this=BlowStraw  sig=csp ====
int __thiscall BlowStraw::Get(BlowStraw *this, char *a2, signed int Size)
{
  char *v3; // ebx
  signed int v5; // ebp
  int v7; // eax
  size_t v8; // edi
  size_t v9; // eax
  size_t v10; // ebx
  BlowPipe *v11; // ecx
  char *v12; // [esp-10h] [ebp-1Ch]
  char *v13; // [esp-8h] [ebp-14h]
  size_t Sizea; // [esp+14h] [ebp+8h]

  v3 = a2; /*0x438211*/
  if ( !a2 ) /*0x43821b*/
    return 0; /*0x43821b*/
  v5 = Size; /*0x438221*/
  if ( Size <= 0 ) /*0x438227*/
    return 0; /*0x4382ed*/
  if ( !*((_DWORD *)this + 3) ) /*0x43822d*/
    return Delegate::Invoke((Straw *)this, (int)a2, Size); /*0x438236*/
  Sizea = 0; /*0x438242*/
  while ( 1 ) /*0x438250*/
  {
    v7 = *((_DWORD *)this + 6); /*0x438250*/
    if ( v7 > 0 ) /*0x438255*/
    {
      v8 = v5; /*0x438259*/
      if ( v5 >= v7 ) /*0x43825b*/
        v8 = *((_DWORD *)this + 6); /*0x43825d*/
      memcpy(v3, (char *)this - v7 + 24, v8); /*0x438269*/
      *((_DWORD *)this + 6) -= v8; /*0x438278*/
      v5 -= v8; /*0x43827f*/
      a2 = &v3[v8]; /*0x438283*/
      Sizea += v8; /*0x438287*/
    }
    if ( !v5 ) /*0x43828d*/
      break; /*0x43828d*/
    v9 = Delegate::Invoke((Straw *)this, (int)this + 16, 8); /*0x438297*/
    v10 = v9; /*0x43829c*/
    if ( !v9 ) /*0x4382a0*/
      break; /*0x4382a0*/
    if ( v9 == 8 ) /*0x4382a5*/
    {
      v11 = (BlowPipe *)*((_DWORD *)this + 3); /*0x4382aa*/
      v13 = (char *)this + 16; /*0x4382ad*/
      v12 = (char *)this + 16; /*0x4382b2*/
      if ( *((_DWORD *)this + 7) == 1 ) /*0x4382b3*/
        BlowPipe::DrawAlt(v11, (int)v12, 8, (int)v13); /*0x4382b5*/
      else
        BlowPipe::Draw(v11, (int)v12, 8, (int)v13); /*0x4382bc*/
    }
    else
    {
      memcpy((char *)this - v9 + 24, (char *)this + 16, v9); /*0x4382cd*/
    }
    *((_DWORD *)this + 6) = v10; /*0x4382d7*/
    if ( v5 <= 0 ) /*0x4382da*/
      break; /*0x4382da*/
    v3 = a2; /*0x43824c*/
  }
  return Sizea; /*0x43823b*/
}



// ==== 0x00438300  GameClass::updateUI  this=GameClass  sig=csp ====
_DWORD *__thiscall GameClass::updateUI(GameClass *this, int a2, int a3)
{
  _DWORD *result; // eax
  ObjectClass *v5; // eax
  GameClass *v6; // ecx

  result = *(_DWORD **)&this->__pad_8[4]; /*0x438303*/
  if ( !result ) /*0x438308*/
  {
    v5 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x43830c*/
    if ( v5 ) /*0x438316*/
      result = sub_437F50(v5); /*0x43831a*/
    else
      result = 0; /*0x438321*/
    *(_DWORD *)&this->__pad_8[4] = result; /*0x438323*/
  }
  v6 = *(GameClass **)&this->__pad_8[4]; /*0x438326*/
  if ( v6 ) /*0x43832c*/
    return (_DWORD *)GameClass::initGameMode(v6, a2, a3); /*0x438338*/
  return result; /*0x438329*/
}



// ==== 0x00438340  sub_438340  this=-  sig=ida-proto ====
void sub_438340()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x43834c*/
  dbl_89C6A0 = Math::Sqrt(v0 + v0); /*0x43835e*/
}



// ==== 0x00438370  sub_438370  this=-  sig=ida-proto ====
void sub_438370()
{
  dbl_89C6F0 = dbl_89C6A0 / 60.0; /*0x43837c*/
}



// ==== 0x00438390  sub_438390  this=-  sig=ida-proto ====
void sub_438390()
{
  dbl_89C6D8 = 1.0 / dbl_89C6F0; /*0x43839c*/
}



// ==== 0x004383B0  sub_4383B0  this=-  sig=ida-proto ====
void sub_4383B0()
{
  dbl_89C6D0 = 0.0174532925199433 * 45.0; /*0x4383bc*/
}



// ==== 0x004383D0  sub_4383D0  this=-  sig=ida-proto ====
void sub_4383D0()
{
  dbl_89C6A8 = 0.0174532925199433 * 60.0; /*0x4383dc*/
}



// ==== 0x004383F0  sub_4383F0  this=-  sig=ida-proto ====
void sub_4383F0()
{
  dbl_89C680 = 0.0174532925199433 * 90.0; /*0x4383fc*/
}



// ==== 0x00438410  sub_438410  this=-  sig=ida-proto ====
__int64 sub_438410()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89C680 - dbl_89C6A8); /*0x438422*/
  result = Math::RoundToInt(v0 * dbl_89C6A0 * 0.5); /*0x438436*/
  dword_89C6F8 = result; /*0x43843b*/
  return result; /*0x438440*/
}



// ==== 0x00438450  sub_438450  this=-  sig=ida-proto ====
void sub_438450()
{
  dbl_89C6B0 = Math::ArcTan((double)dword_89C6F8 * 0.00390625); /*0x438467*/
}



// ==== 0x00438480  sub_438480  this=-  sig=ida-proto ====
void sub_438480()
{
  dbl_89C6C8 = Math::ArcTan((double)(2 * dword_89C6F8) / dbl_89C6A0); /*0x4384a2*/
}



// ==== 0x004384B0  sub_4384B0  this=-  sig=ida-proto ====
__int64 sub_4384B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C6F8) + 0.5); /*0x4384cb*/
  dword_89C6EC = result; /*0x4384d0*/
  return result; /*0x4384d6*/
}



// ==== 0x004384E0  sub_4384E0  this=-  sig=ida-proto ====
int sub_4384E0()
{
  word_89C698 = 0; /*0x4384e2*/
  word_89C69A = 0; /*0x4384e8*/
  return 0; /*0x4384ee*/
}



// ==== 0x004384F0  sub_4384F0  this=-  sig=ida-proto ====
int sub_4384F0()
{
  dword_89C6B8 = 0; /*0x4384f2*/
  dword_89C6BC = 0; /*0x4384f7*/
  dword_89C6C0 = 0; /*0x4384fc*/
  return 0; /*0x438501*/
}



// ==== 0x00438510  sub_438510  this=-  sig=ida-proto ====
int sub_438510()
{
  dword_89C6E8 = 0; /*0x438515*/
  dword_89C6E0 = 128; /*0x43851f*/
  dword_89C6E4 = 128; /*0x438524*/
  return 128; /*0x438529*/
}



// ==== 0x00438530  sub_438530  this=-  sig=ida-proto ====
int sub_438530()
{
  dword_89C688 = 0; /*0x438532*/
  dword_89C68C = 0; /*0x438537*/
  dword_89C690 = 0; /*0x43853c*/
  dword_89C694 = 0; /*0x438541*/
  return 0; /*0x438546*/
}



// ==== 0x00438550  BombClass::InitPool  this=BombClass  sig=ida-proto ====
int BombClass_InitPool()
{
  dword_89C66C = 0; /*0x438557*/
  dword_89C670 = 0; /*0x43855c*/
  byte_89C674 = 1; /*0x438561*/
  byte_89C675 = 0; /*0x438568*/
  dword_89C668 = (int)&DynamicVectorClass<BombClass *>::`vftable'; /*0x43856d*/
  dword_89C67C = 10; /*0x438577*/
  dword_89C678 = 0; /*0x438581*/
  return atexit(globalHelper_038590); /*0x43858c*/
}



// ==== 0x00438590  globalHelper_038590  this=-  sig=ida-proto ====
void __cdecl sub_438590()
{
  dword_89C668 = (int)&VectorClass<BombClass *>::`vftable'; /*0x438598*/
  if ( dword_89C66C && byte_89C675 ) /*0x4385ac*/
  {
    __3_YAXPAX_Z(dword_89C66C); /*0x4385af*/
    dword_89C66C = 0; /*0x4385b7*/
  }
  byte_89C675 = 0; /*0x4385bd*/
  dword_89C670 = 0; /*0x4385c3*/
}



// ==== 0x004385D0  BombClass::AbstractClass  this=BombClass  sig=csp ====
int __thiscall BombClass::AbstractClass(BombClass *this)
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x4385d4*/
  this->BombClass_field_54 = 0; /*0x4385de*/
  this->AbstractClass = &BombClass::`vftable'; /*0x4385e1*/
  this->? = &BombClass::`vftable'; /*0x4385e7*/
  this->? = &BombClass::`vftable'; /*0x4385ee*/
  this->? = &BombClass::`vftable'; /*0x4385f5*/
  this->BombClass_field_28 = 0; /*0x4385fc*/
  this->BombClass_field_2C = 0; /*0x4385ff*/
  this->BombClass_field_58 = 0; /*0x438602*/
  AudioController::Init((AudioController *)&this->audioController[3]); /*0x438605*/
  *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 524); /*0x438615*/
  if ( dword_89C678 < dword_89C670 /*0x43864a*/
    || (byte_89C675 || !dword_89C670)
    && dword_89C67C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89C668 + 8))(
         &dword_89C668,
         dword_89C670 + dword_89C67C,
         0) )
  {
    v2 = dword_89C678++; /*0x438657*/
    *((_DWORD *)dword_89C66C + v2) = this; /*0x438666*/
  }
  return (int)this; /*0x43866b*/
}



// ==== 0x00438720  TechnoClass::ApplyDamageEffects  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ApplyDamageEffects(TechnoClass *this)
{
  int result; // eax
  char v3; // cl
  int *v4; // edx
  AnimClass *v5; // edi
  int v6; // ebx
  void *WarheadVersusMultiplier; // eax
  int fallRate; // ecx
  int v9; // ebx
  int v10; // ebp
  _WORD *v11; // eax
  int v12; // edi
  _WORD *v13; // eax
  __int16 v14; // cx
  int v15; // eax
  __int16 *v16; // eax
  void *v17; // [esp-8h] [ebp-40h]
  char v18; // [esp+13h] [ebp-25h]
  int v19; // [esp+14h] [ebp-24h]
  int v20; // [esp+14h] [ebp-24h]
  __int16 v21[2]; // [esp+18h] [ebp-20h] BYREF
  __int16 v22[2]; // [esp+1Ch] [ebp-1Ch] BYREF
  __int16 v23[2]; // [esp+20h] [ebp-18h] BYREF
  _BYTE v24[4]; // [esp+24h] [ebp-14h] BYREF
  _BYTE v25[4]; // [esp+28h] [ebp-10h] BYREF
  int v26; // [esp+2Ch] [ebp-Ch] BYREF
  int v27; // [esp+30h] [ebp-8h]
  int v28; // [esp+34h] [ebp-4h]

  result = this->?; /*0x43872b*/
  if ( result && !LOBYTE(this->?[2]) ) /*0x438736*/
  {
    v3 = *(_BYTE *)(result + 129); /*0x438741*/
    *(_DWORD *)(result + 56) = 0; /*0x438747*/
    if ( v3 ) /*0x43874c*/
    {
      *(_BYTE *)(this->? + 104) = 0; /*0x438751*/
      LOBYTE(this->?[2]) = 1; /*0x438755*/
    }
    else
    {
      *(_BYTE *)(this->? + 104) = 0; /*0x438764*/
      v4 = (int *)(this->? + 156); /*0x43876b*/
      LOBYTE(this->?[2]) = 1; /*0x438771*/
      v26 = *v4; /*0x438777*/
      v27 = v4[1]; /*0x438783*/
      v28 = v4[2]; /*0x43878a*/
      PlaySoundEffectAt( /*0x4387a3*/
        &v26,
        *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4044),
        (_DWORD *)this->?,
        *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4040),
        1,
        0);
      v5 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4387b2*/
      if ( v5 ) /*0x4387b9*/
      {
        LOWORD(v19) = v26 / 256; /*0x4387d9*/
        HIWORD(v19) = v27 / 256; /*0x4387ee*/
        *(_DWORD *)v21 = v19; /*0x4387f7*/
        v6 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v21) + 59); /*0x438800*/
        v17 = (void *)Return::HRESULT_Fail(v26, v27, v28); /*0x438825*/
        WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier( /*0x43884a*/
                                            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4044),
                                            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4040),
                                            v6,
                                            &v26);
        AnimClass::ctor(v5, WarheadVersusMultiplier, &v26, 0, 1, (void *)0x2600, v17, 0); /*0x438852*/
      }
      fallRate = this->?; /*0x438857*/
      if ( fallRate /*0x438879*/
        && (*(int (__thiscall **)(int))(*(_DWORD *)fallRate + 44))(fallRate) == 6
        && *(_BYTE *)(*(_DWORD *)(this->? + 1312) + 5814) )
      {
        v18 = 0; /*0x438887*/
        v9 = -2; /*0x43888c*/
        do /*0x438946*/
        {
          v10 = -2; /*0x438891*/
          do /*0x43893c*/
          {
            v11 = (_WORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->? + 440))(this->?, v24); /*0x4388a0*/
            HIWORD(v20) = v9 + v11[1]; /*0x4388b3*/
            LOWORD(v20) = *v11 + v10; /*0x4388b8*/
            *(_DWORD *)v22 = v20; /*0x4388c5*/
            v12 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v22) + 14); /*0x4388d7*/
            v13 = (_WORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->? + 440))(this->?, v25); /*0x4388e1*/
            v14 = *v13 + v10; /*0x4388ee*/
            v21[1] = v9 + v13[1]; /*0x4388f4*/
            v21[0] = v14; /*0x4388f9*/
            *(_DWORD *)v23 = *(_DWORD *)v21; /*0x438906*/
            v15 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v23) + 17); /*0x43891b*/
            if ( v12 >= g_TerrainBridgeIndex && v12 < g_TerrainBridgeIndex + 16 || v15 >= 74 && v15 <= 101 ) /*0x438931*/
              v18 = 1; /*0x438933*/
            ++v10; /*0x438938*/
          }
          while ( v10 < 3 ); /*0x43893c*/
          ++v9; /*0x438942*/
        }
        while ( v9 < 3 ); /*0x438946*/
        v16 = (__int16 *)(*(int (__stdcall **)(_BYTE *))(*(_DWORD *)this->? + 440))(v25); /*0x43895e*/
        if ( v18 ) /*0x438957*/
          MapClass::ApplyTerrainDamage((MapClass *)&stru_87F5F0.__pad_58[416], v16); /*0x43896a*/
        else
          TerrainClass::ProcessSlope((TerrainClass *)&stru_87F5F0.__pad_58[416], v16); /*0x438982*/
      }
    }
    this->? = 0; /*0x43898c*/
    this->? = 0; /*0x43898f*/
    this->? = 0; /*0x438992*/
    result = AudioFile::Stop((AudioFile *)this->?); /*0x438995*/
    this->?[1] = 0; /*0x43899a*/
  }
  return result; /*0x43899d*/
}



// ==== 0x004389B0  ObjectClass::CleanupAudioAndRefs  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::CleanupAudioAndRefs(ObjectClass *this)
{
  int fallRate; // eax
  int result; // eax

  fallRate = this->fallRate; /*0x4389b6*/
  if ( fallRate ) /*0x4389bb*/
  {
    *(_DWORD *)(fallRate + 56) = 0; /*0x4389bd*/
    *(_BYTE *)(this->fallRate + 104) = 0; /*0x4389c3*/
  }
  LOBYTE(this->customSound_controller[2]) = 1; /*0x4389c9*/
  this->occupant = 0; /*0x4389cd*/
  this->fallRate = 0; /*0x4389d0*/
  this->owningHouseIndex = 0; /*0x4389d3*/
  result = AudioFile::Stop((AudioFile *)this->ambientSoundController); /*0x4389d6*/
  this->customSound_controller[1] = 0; /*0x4389db*/
  return result; /*0x4389de*/
}



// ==== 0x004389F0  BombClass::IsDeathBomb  this=BombClass  sig=csp ====
int __thiscall BombClass::IsDeathBomb(BombClass *this)
{
  return this->audioController[0]; /*0x4389f3*/
}



// ==== 0x00438A00  BombClass::GetCurrentFrame  this=BombClass  sig=csp ====
Iostream_init *__thiscall BombClass::GetCurrentFrame(BombClass *this)
{
  int v2; // ecx

  if ( this->audioController[0] == 1 ) /*0x438a04*/
    return (Iostream_init *)12; /*0x438a06*/
  v2 = 2 /*0x438a4c*/
     * ((*(_DWORD *)&stru_A8EB00.?[416] - this->audioController[1])
      / (*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4048)
       / 6));
  if ( *(_DWORD *)&stru_A8EB00.?[416] % (2 * *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4056)) >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4056) ) /*0x438a53*/
    ++v2; /*0x438a55*/
  if ( v2 < 12 ) /*0x438a59*/
    return __0Iostream_init_QAE_XZ_1((Iostream_init *)v2); /*0x438a59*/
  else
    return __0Iostream_init_QAE_XZ_1((Iostream_init *)0xB); /*0x438a5c*/
}



// ==== 0x00438A60  ObjectClass::??0Iostream_init_QAE_XZ_1  this=ObjectClass  sig=csp ====
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_1(Iostream_init *this)
{
  return this; /*0x438a62*/
}



// ==== 0x00438A70  BombClass::TimeToExplode  this=BombClass  sig=csp ====
bool __thiscall BombClass::TimeToExplode(BombClass *this)
{
  return !this->audioController[0] /*0x438a8c*/
      && *(int *)&stru_A8EB00.?[416] > this->audioController[2]
      && !this->BombClass_field_58;
}



// ==== 0x00438A90  BombClass::Stat  this=BombClass  sig=csp ====
int __thiscall BombClass::Stat(BombClass *this, int *a2)
{
  int v3; // edx
  int BombClass_field_28; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int BombClass_field_2C; // eax
  int v9; // eax

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x438a99*/
  BombClass_field_28 = this->BombClass_field_28; /*0x438a9e*/
  if ( BombClass_field_28 ) /*0x438aa3*/
  {
    v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(BombClass_field_28 + 4) + 16))(BombClass_field_28 + 4); /*0x438aac*/
    Power::TimerProcess(v5); /*0x438ab2*/
  }
  v6 = *(_DWORD *)this->__pad_24; /*0x438ab7*/
  if ( v6 ) /*0x438abc*/
  {
    v7 = (*(int (__stdcall **)(int))(*(_DWORD *)(v6 + 4) + 16))(v6 + 4); /*0x438ac5*/
    Power::TimerProcess(v7); /*0x438acb*/
  }
  BombClass_field_2C = this->BombClass_field_2C; /*0x438ad0*/
  if ( BombClass_field_2C ) /*0x438ad5*/
  {
    v9 = (*(int (__stdcall **)(int))(*(_DWORD *)(BombClass_field_2C + 4) + 16))(BombClass_field_2C + 4); /*0x438ade*/
    Power::TimerProcess(v9); /*0x438ae4*/
  }
  LOBYTE(v3) = this->BombClass_field_58; /*0x438ae9*/
  return Power::FlagProcess((Power *)a2, v3); /*0x438af4*/
}



// ==== 0x00438B00  BombClass::ddtor  this=BombClass  sig=csp ====
int __stdcall BombClass::ddtor(BombClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x438b06*/
    return -2147467261; /*0x438b08*/
  *a2 = 108652931; /*0x438b16*/
  a2[1] = 299085213; /*0x438b1e*/
  a2[2] = 268441278; /*0x438b27*/
  a2[3] = unk_7E98BC; /*0x438b30*/
  return 0; /*0x438b0d*/
}



// ==== 0x00438B40  BombClass::Write  this=BombClass  sig=csp ====
int __stdcall BombClass::Write(BombClass *this, int a2)
{
  int Prefix_0; // edi

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x438b51*/
  if ( Prefix_0 >= 0 ) /*0x438b55*/
  {
    if ( this ) /*0x438b59*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x438b62*/
      this->AbstractClass = &BombClass::`vftable'; /*0x438b67*/
      this->? = &BombClass::`vftable'; /*0x438b6d*/
      this->? = &BombClass::`vftable'; /*0x438b74*/
      this->? = &BombClass::`vftable'; /*0x438b7b*/
    }
    AudioController::Init((AudioController *)&this->audioController[3]); /*0x438b85*/
    this->BombClass_field_54 = 0; /*0x438b8d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->BombClass_field_28); /*0x438b9a*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this->__pad_24); /*0x438ba8*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->BombClass_field_2C); /*0x438bb6*/
  }
  return Prefix_0; /*0x438bbd*/
}



// ==== 0x00438BD0  BombClass::Seek  this=BombClass  sig=csp ====
int __stdcall BombClass::Seek(BombClass *this, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x438be4*/
}



// ==== 0x00438BF0  ObjectClass::DispatchBuildingAudioEvents  this=ObjectClass  sig=csp ====
int __thiscall DispatchBuildingAudioEvents(ObjectClass *this)
{
  double v1; // st7
  int i; // esi
  _DWORD *v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int uniqueId; // eax
  int v9; // ecx
  int v10; // eax
  int j; // ebx
  AudioController *v12; // esi
  int v13; // ecx
  char *AudioController_field_04; // eax
  int *v15; // eax
  ObjectClass *nextObject; // eax
  int result; // eax
  int v18; // eax
  int v19; // ebx
  char v20; // al
  int v21; // ebp
  int v22; // esi
  House *v23; // eax
  _DWORD *v24; // ebp
  _DWORD *v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // edx
  int v30; // kr00_4
  char v31; // [esp+26h] [ebp-2Eh]
  char v32; // [esp+27h] [ebp-2Dh]
  int v33; // [esp+28h] [ebp-2Ch]
  int v34; // [esp+2Ch] [ebp-28h]
  int v35; // [esp+30h] [ebp-24h] BYREF
  int v36; // [esp+34h] [ebp-20h]
  int v37; // [esp+38h] [ebp-1Ch]
  _DWORD v38[3]; // [esp+3Ch] [ebp-18h] BYREF
  char v39[12]; // [esp+48h] [ebp-Ch] BYREF

  for ( i = this->? - 1; i >= 0; --i ) /*0x438c03*/
  {
    v4 = (_DWORD *)*((_DWORD *)this->? + i); /*0x438c08*/
    if ( v4 ) /*0x438c0d*/
    {
      if ( !v4[11] ) /*0x438c36*/
      {
        (*(void (__thiscall **)(_DWORD *, int))(*v4 + 32))(v4, 1); /*0x438c41*/
        uniqueId = this->?; /*0x438c44*/
        if ( i < uniqueId ) /*0x438c49*/
        {
          v9 = uniqueId - 1; /*0x438c4b*/
          v10 = i; /*0x438c4e*/
          for ( this->? = v9; v10 < this->?; *((_DWORD *)this->? + v10 - 1) = *((_DWORD *)this->? + v10) ) /*0x438c55*/
            ++v10; /*0x438c5a*/
        }
      }
    }
    else
    {
      v5 = this->?; /*0x438c0f*/
      if ( i < v5 ) /*0x438c14*/
      {
        v6 = v5 - 1; /*0x438c16*/
        v7 = i; /*0x438c19*/
        for ( this->? = v6; v7 < this->?; *((_DWORD *)this->? + v7 - 1) = *((_DWORD *)this->? + v7) ) /*0x438c20*/
          ++v7; /*0x438c25*/
      }
    }
  }
  for ( j = this->? - 1; j >= 0; --j ) /*0x438c70*/
  {
    v12 = (AudioController *)*((_DWORD *)this->? + j); /*0x438c79*/
    v13 = v12[4].AudioController_field_00[0]; /*0x438c7c*/
    if ( v13 != -1 ) /*0x438c82*/
    {
      AudioController_field_04 = (char *)v12[2].AudioController_field_04; /*0x438c84*/
      if ( AudioController_field_04[129] ) /*0x438c87*/
      {
        AudioController::Stop(v12 + 3); /*0x438c94*/
        v12[4].AudioController_field_04 = 0; /*0x438c99*/
      }
      else
      {
        v15 = (int *)(AudioController_field_04 + 156); /*0x438ca9*/
        if ( v12[4].AudioController_field_04 ) /*0x438ca2*/
        {
          v38[0] = *v15; /*0x438cdf*/
          v38[1] = v15[1]; /*0x438cea*/
          v38[2] = v15[2]; /*0x438cf4*/
          StartAudioController(v38, (int **)&v12[3]); /*0x438cf8*/
        }
        else
        {
          v35 = *v15; /*0x438cb0*/
          v36 = v15[1]; /*0x438cb7*/
          v37 = v15[2]; /*0x438cc6*/
          StartAudioControllerAt(v13, &v35, (int **)&v12[3]); /*0x438cca*/
          v12[4].AudioController_field_04 = (void *)1; /*0x438ccf*/
        }
      }
    }
  }
  nextObject = this->nextObject; /*0x438d04*/
  if ( (int)nextObject > 0 ) /*0x438d09*/
  {
    result = (int)&nextObject[-1].lineTrailer + 3; /*0x438d0b*/
    this->nextObject = (ObjectClass *)result; /*0x438d0c*/
    return result; /*0x438d16*/
  }
  v18 = this->?; /*0x438d17*/
  this->nextObject = (ObjectClass *)45; /*0x438d1a*/
  result = v18 - 1; /*0x438d21*/
  v34 = result; /*0x438d22*/
  if ( result >= 0 ) /*0x438d26*/
  {
    while ( 1 ) /*0x438d2f*/
    {
      v31 = 0; /*0x438d2f*/
      v19 = *((_DWORD *)this->? + result); /*0x438d34*/
      v32 = *(_BYTE *)(*(_DWORD *)(v19 + 44) + 104); /*0x438d40*/
      if ( (unsigned __int8)House::IsHumanPlayer(*(House **)(v19 + 40)) ) /*0x438d44*/
      {
        v20 = 1; /*0x438d4d*/
        goto LABEL_33; /*0x438d4f*/
      }
      v21 = 0; /*0x438d57*/
      v33 = 0; /*0x438d5b*/
      if ( this->owningHouseIndex <= 0 ) /*0x438d5f*/
        goto LABEL_32; /*0x438d5f*/
      while ( 1 ) /*0x438d68*/
      {
        v22 = *(_DWORD *)(this->? + 4 * v21); /*0x438d68*/
        v23 = (House *)(*(int (__thiscall **)(int))(*(_DWORD *)v22 + 60))(v22); /*0x438d6f*/
        if ( (unsigned __int8)House::IsHumanPlayer(v23) ) /*0x438d74*/
          break; /*0x438d74*/
LABEL_29:
        v33 = ++v21; /*0x438e17*/
        if ( v21 >= this->owningHouseIndex ) /*0x438e1b*/
          goto LABEL_32; /*0x438e1b*/
      }
      v24 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(v19 + 44) + 72))( /*0x438d92*/
                        *(_DWORD *)(v19 + 44),
                        v38);
      v25 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v22 + 72))(v22, v39); /*0x438d99*/
      v26 = v25[1]; /*0x438da3*/
      v35 = *v25 - *v24; /*0x438da6*/
      v27 = v25[2]; /*0x438daf*/
      v36 = v26 - v24[1]; /*0x438db2*/
      v37 = v27 - v24[2]; /*0x438dbe*/
      Math::Sqrt((double)v35 * (double)v35 + (double)v36 * (double)v36 + (double)v37 * (double)v37); /*0x438de7*/
      v30 = Math::RoundToInt(v1); /*0x438def*/
      LOWORD(v29) = HIWORD(v30); /*0x438def*/
      LOWORD(v28) = v30; /*0x438def*/
      if ( v28 >= *(_DWORD *)((*(int (__fastcall **)(int, int))(*(_DWORD *)v22 + 132))(v22, v29) + 1528) << 8 ) /*0x438e0b*/
        break; /*0x438e0b*/
      v31 = 1; /*0x438e22*/
LABEL_32:
      v20 = v31; /*0x438e27*/
LABEL_33:
      *(_BYTE *)(*(_DWORD *)(v19 + 44) + 104) = v20; /*0x438e2b*/
      if ( v20 != v32 ) /*0x438e37*/
        *(_BYTE *)(*(_DWORD *)(v19 + 44) + 128) = 1; /*0x438e3c*/
      result = --v34; /*0x438e47*/
      if ( v34 < 0 ) /*0x438e4c*/
        return result; /*0x438e4c*/
    }
    v21 = v33; /*0x438e0d*/
    goto LABEL_29; /*0x438e0d*/
  }
  return result; /*0x438d0f*/
}



// ==== 0x00438E60  nullsub_99  this=-  sig=ida-proto ====
void nullsub_99()
{
  ; /*0x438e60*/
}



// ==== 0x00438E70  AbstractClass::Initialize  this=AbstractClass  sig=csp ====
void __thiscall AbstractClass::Initialize(AbstractClass *this, void *a2, _DWORD *a3)
{
  AbstractClass *v4; // eax
  AbstractClass *v5; // esi
  int v6; // eax
  int v7; // ecx
  void *vtable2; // eax
  int abstractFlags; // ecx
  int uniqueId; // eax
  _DWORD *vtable1; // edx
  _DWORD v12[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( a2 && (*(int (__thiscall **)(void *))(*(_DWORD *)a2 + 44))(a2) == 15 && a3 && !a3[14] ) /*0x438ea3*/
  {
    v4 = (AbstractClass *)__2_YAPAXI_Z(0x5Cu); /*0x438eaf*/
    v5 = v4; /*0x438eb4*/
    if ( v4 ) /*0x438ebb*/
    {
      AbstractClass::Constructor(v4); /*0x438ec3*/
      v5[2].vtable3 = 0; /*0x438ecb*/
      v5->vtable0 = &BombClass::`vftable'; /*0x438ece*/
      v5->vtable1 = &BombClass::`vftable'; /*0x438ed4*/
      v5->vtable2 = &BombClass::`vftable'; /*0x438edb*/
      v5->vtable3 = &BombClass::`vftable'; /*0x438ee2*/
      v5[1].vtable1 = 0; /*0x438ee9*/
      v5[1].vtable2 = 0; /*0x438eec*/
      LOBYTE(v5[2].uniqueId) = 0; /*0x438eef*/
      AudioController::Init((AudioController *)&v5[1].nextArrayIndex); /*0x438ef2*/
      v5[2].vtable2 = *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 524); /*0x438f03*/
      if ( dword_89C678 < dword_89C670 /*0x438f37*/
        || (byte_89C675 || !dword_89C670)
        && dword_89C67C > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89C668 + 8))(
             &dword_89C668,
             dword_89C670 + dword_89C67C,
             0) )
      {
        v6 = dword_89C678++; /*0x438f44*/
        *((_DWORD *)dword_89C66C + v6) = v5; /*0x438f53*/
      }
    }
    else
    {
      v5 = 0; /*0x438f58*/
    }
    v5[1].vtable1 = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)a2 + 60))(a2); /*0x438f62*/
    v5[1].vtable0 = a2; /*0x438f69*/
    v5[1].vtable2 = a3; /*0x438f6c*/
    v5[1].uniqueId = *(_DWORD *)&stru_A8EB00.?[416]; /*0x438f75*/
    v7 = v5[1].uniqueId + *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4048); /*0x438f87*/
    v5[1].vtable3 = 0; /*0x438f89*/
    v5[1].abstractFlags = v7; /*0x438f8c*/
    a3[14] = v5; /*0x438f8f*/
    vtable2 = this->vtable2; /*0x438f92*/
    if ( this->uniqueId < (int)vtable2 /*0x438fb4*/
      || (BYTE1(this->vtable3) || !vtable2)
      && (abstractFlags = this->abstractFlags, abstractFlags > 0)
      && (*((unsigned __int8 (__thiscall **)(AbstractClass *, int, _DWORD))this->vtable0 + 2))(
           this,
           (int)vtable2 + abstractFlags,
           0) )
    {
      uniqueId = this->uniqueId; /*0x438fbb*/
      vtable1 = this->vtable1; /*0x438fbe*/
      this->uniqueId = uniqueId + 1; /*0x438fc4*/
      vtable1[uniqueId] = v5; /*0x438fc7*/
    }
    this->vtable4 = 1; /*0x438fca*/
    if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 528) != -1 ) /*0x438fde*/
    {
      if ( (unsigned __int8)House::IsHumanPlayer(*((House **)a2 + 135)) ) /*0x438fe6*/
      {
        v12[0] = a3[39]; /*0x438ffc*/
        v12[1] = a3[40]; /*0x439007*/
        v12[2] = a3[41]; /*0x439013*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 528), v12, 0); /*0x43901d*/
      }
    }
  }
}



// ==== 0x00439080  TechnoClass::checkRange  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::checkRange(TechnoClass *this, int a2)
{
  int owningHouseIndex; // eax
  int *p_nextArrayIndex; // esi
  void *NeedsSaveOrLink; // ecx
  int v5; // eax
  int v6; // edx

  owningHouseIndex = this->?; /*0x439080*/
  p_nextArrayIndex = &this->?; /*0x439084*/
  NeedsSaveOrLink = this->?; /*0x439087*/
  if ( owningHouseIndex < (int)NeedsSaveOrLink /*0x4390ae*/
    || ((LOBYTE(v5) = *((_BYTE *)p_nextArrayIndex + 13), (_BYTE)v5) || !NeedsSaveOrLink)
    && (v5 = p_nextArrayIndex[5], v5 > 0)
    && (LOBYTE(v5) = (*(int (__thiscall **)(int *, int, _DWORD))(*p_nextArrayIndex + 8))(
                       p_nextArrayIndex,
                       (int)NeedsSaveOrLink + v5,
                       0),
        (_BYTE)v5) )
  {
    v5 = p_nextArrayIndex[4]; /*0x4390b0*/
    v6 = p_nextArrayIndex[1]; /*0x4390b3*/
    p_nextArrayIndex[4] = v5 + 1; /*0x4390b9*/
    *(_DWORD *)(v6 + 4 * v5) = a2; /*0x4390c0*/
  }
  return v5; /*0x4390c3*/
}



// ==== 0x004390D0  TechnoClass::RemoveFromDynamicVector  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::RemoveFromDynamicVector(TechnoClass *this, char a2)
{
  int *p_nextArrayIndex; // esi
  int result; // eax
  int v4; // ecx
  int v5; // ecx

  p_nextArrayIndex = &this->?; /*0x4390d4*/
  result = (*(int (__thiscall **)(int *, char *))(this->? + 16))(&this->?, &a2); /*0x4390de*/
  if ( result != -1 ) /*0x4390e4*/
  {
    v4 = p_nextArrayIndex[4]; /*0x4390e6*/
    if ( result < v4 ) /*0x4390eb*/
    {
      v5 = v4 - 1; /*0x4390ed*/
      for ( p_nextArrayIndex[4] = v5; /*0x4390f3*/
            result < p_nextArrayIndex[4];
            *(_DWORD *)(p_nextArrayIndex[1] + 4 * result - 4) = *(_DWORD *)(p_nextArrayIndex[1] + 4 * result) )
      {
        ++result; /*0x4390f8*/
      }
    }
  }
  return result; /*0x439107*/
}



// ==== 0x00439110  Stream::FlushAndReset  this=Stream  sig=csp ====
int __thiscall Stream::FlushAndReset(Stream *this)
{
  Stream *v1; // esi
  StreamClass *m_Stream; // eax
  int Stream_field_08; // edi
  int Stream_field_04; // eax
  int Stream_field_0C; // edi

  v1 = this; /*0x439111*/
  m_Stream = this->m_Stream; /*0x439114*/
  Stream_field_08 = this->Stream_field_08; /*0x439116*/
  this->Stream_field_0C = 45; /*0x439119*/
  ((void (*)(void))m_Stream->m_Size)(); /*0x439120*/
  ((void (__thiscall *)(Stream *, int, _DWORD))v1->m_Stream->m_Position)(v1, Stream_field_08, 0); /*0x43912a*/
  Stream_field_04 = v1[1].Stream_field_04; /*0x43912d*/
  Stream_field_0C = v1[1].Stream_field_0C; /*0x439130*/
  v1 = (Stream *)((char *)v1 + 24); /*0x439133*/
  (*(void (__thiscall **)(Stream *))(Stream_field_04 + 12))(v1); /*0x439138*/
  return ((int (__thiscall *)(Stream *, int, _DWORD))v1->m_Stream->m_Position)(v1, Stream_field_0C, 0); /*0x439145*/
}



// ==== 0x00439150  AbstractClass::processDetection  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::processDetection(AbstractClass *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int uniqueId; // ecx
  int v6; // ecx
  int result; // eax
  int i; // ecx
  int v9; // eax

  v3 = a2; /*0x439158*/
  v4 = (*((int (__thiscall **)(AbstractClass *, int *))this->vtable0 + 4))(this, &a2); /*0x439165*/
  if ( v4 != -1 ) /*0x43916b*/
  {
    uniqueId = this->uniqueId; /*0x43916d*/
    if ( v4 < uniqueId ) /*0x439172*/
    {
      v6 = uniqueId - 1; /*0x439174*/
      for ( this->uniqueId = v6; v4 < this->uniqueId; *((_DWORD *)this->vtable1 + v4 - 1) = *((_DWORD *)this->vtable1 /*0x43917a*/
                                                                                            + v4) )
        ++v4; /*0x43917f*/
    }
  }
  result = this->uniqueId; /*0x43918e*/
  for ( i = 0; i < result; ++i ) /*0x439197*/
  {
    v9 = *((_DWORD *)this->vtable1 + i); /*0x43919c*/
    if ( v9 ) /*0x4391a1*/
    {
      if ( *(_DWORD *)(v9 + 36) == v3 ) /*0x4391a6*/
        *(_DWORD *)(v9 + 36) = 0; /*0x4391a8*/
    }
    result = this->uniqueId; /*0x4391ab*/
  }
  return result; /*0x4391b3*/
}



// ==== 0x004391C0  SaveGame::LoadArrayData  this=SaveGame  sig=csp ====
int __thiscall SaveGame::LoadArrayData(SaveGame *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // ebx
  int v6; // ecx
  int i; // ebx
  int v8; // [esp+40h] [ebp-4h] BYREF

  v3 = *a2; /*0x4391cc*/
  v8 = *(_DWORD *)&this->__pad_0[16]; /*0x4391d9*/
  result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(a2, &v8, 4, 0); /*0x4391dd*/
  if ( result >= 0 ) /*0x4391e2*/
  {
    v5 = 0; /*0x4391e8*/
    if ( v8 <= 0 ) /*0x4391ec*/
    {
LABEL_5:
      v6 = *a2; /*0x43920c*/
      v8 = *(_DWORD *)&this->__pad_0[40]; /*0x43921b*/
      result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v6 + 16))(a2, &v8, 4, 0); /*0x43921f*/
      if ( result >= 0 ) /*0x439224*/
      {
        for ( i = 0; i < v8; ++i ) /*0x43922e*/
        {
          result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))( /*0x43923e*/
                     a2,
                     *(_DWORD *)&this->__pad_0[28] + 4 * i,
                     4,
                     0);
          if ( result < 0 ) /*0x439243*/
            break; /*0x439243*/
        }
      }
    }
    else
    {
      while ( 1 ) /*0x4391fc*/
      {
        result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))( /*0x4391fc*/
                   a2,
                   *(_DWORD *)&this->__pad_0[4] + 4 * v5,
                   4,
                   0);
        if ( result < 0 ) /*0x439201*/
          break; /*0x439201*/
        if ( ++v5 >= v8 ) /*0x43920a*/
          goto LABEL_5; /*0x43920a*/
      }
    }
  }
  return result; /*0x43924e*/
}



// ==== 0x00439260  LoadGame::DeserializePointerArrays  this=LoadGame  sig=csp ====
int __thiscall LoadGame::DeserializePointerArrays(LoadGame *this, int a2)
{
  int v2; // ebx
  int result; // eax
  int v5; // eax
  int v6; // esi
  int LoadGame_field_0x08; // ecx
  int LoadGame_field_0x14; // eax
  int LoadGame_field_0x10; // eax
  int LoadGame_field_0x04; // edx
  int v11; // esi
  int v12; // ebp
  int v13; // eax
  int LoadGame_field_0x20; // ecx
  int LoadGame_field_0x2C; // eax
  int LoadGame_field_0x28; // eax
  int LoadGame_field_0x1C; // edx
  int v18; // esi
  int v19; // [esp+50h] [ebp-Ch]
  int v20; // [esp+54h] [ebp-8h] BYREF
  int v21; // [esp+58h] [ebp-4h] BYREF

  v2 = a2; /*0x439264*/
  result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &a2, 4, 0); /*0x439279*/
  if ( result >= 0 ) /*0x43927e*/
  {
    v5 = a2; /*0x439284*/
    v6 = 0; /*0x439288*/
    if ( a2 <= 0 ) /*0x43928c*/
    {
LABEL_11:
      v11 = 0; /*0x4392ed*/
      if ( v5 > 0 ) /*0x4392f1*/
      {
        do /*0x43930b*/
          ObjectPtr::RegisterForTracking( /*0x4392ff*/
            (int)&SwizzleManagerClass_Instance,
            (int *)(this->LoadGame_field_0x04 + 4 * v11++));
        while ( v11 < a2 ); /*0x43930b*/
      }
      v12 = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &a2, 4, 0); /*0x43931c*/
      if ( v12 >= 0 ) /*0x439320*/
      {
        v13 = a2; /*0x439326*/
        v19 = 0; /*0x43932a*/
        if ( a2 <= 0 ) /*0x439334*/
        {
LABEL_23:
          v18 = 0; /*0x43939e*/
          if ( v13 > 0 ) /*0x4393a2*/
          {
            do /*0x4393bc*/
              ObjectPtr::RegisterForTracking( /*0x4393b0*/
                (int)&SwizzleManagerClass_Instance,
                (int *)(this->LoadGame_field_0x1C + 4 * v18++));
            while ( v18 < a2 ); /*0x4393bc*/
          }
        }
        else
        {
          while ( 1 ) /*0x439345*/
          {
            v12 = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v21, 4, 0); /*0x439345*/
            if ( v12 < 0 ) /*0x439349*/
              break; /*0x439349*/
            LoadGame_field_0x20 = this->LoadGame_field_0x20; /*0x43934b*/
            if ( this->LoadGame_field_0x28 < LoadGame_field_0x20 /*0x439373*/
              || (BYTE1(this->LoadGame_field_0x24) || !LoadGame_field_0x20)
              && (LoadGame_field_0x2C = this->LoadGame_field_0x2C, LoadGame_field_0x2C > 0)
              && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->LoadGame_field_0x18 + 8))(
                   &this->LoadGame_field_0x18,
                   LoadGame_field_0x20 + LoadGame_field_0x2C,
                   0) )
            {
              LoadGame_field_0x28 = this->LoadGame_field_0x28; /*0x43937a*/
              LoadGame_field_0x1C = this->LoadGame_field_0x1C; /*0x43937d*/
              this->LoadGame_field_0x28 = LoadGame_field_0x28 + 1; /*0x439383*/
              *(_DWORD *)(LoadGame_field_0x1C + 4 * LoadGame_field_0x28) = v21; /*0x43938a*/
            }
            v13 = a2; /*0x439391*/
            if ( ++v19 >= a2 ) /*0x43939c*/
              goto LABEL_23; /*0x43939c*/
          }
        }
      }
      return v12; /*0x4393be*/
    }
    else
    {
      while ( 1 ) /*0x43929a*/
      {
        result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v20, 4, 0); /*0x43929a*/
        if ( result < 0 ) /*0x43929f*/
          break; /*0x43929f*/
        LoadGame_field_0x08 = this->LoadGame_field_0x08; /*0x4392a5*/
        if ( this->LoadGame_field_0x10 < LoadGame_field_0x08 /*0x4392ca*/
          || (BYTE1(this->LoadGame_field_0x0C) || !LoadGame_field_0x08)
          && (LoadGame_field_0x14 = this->LoadGame_field_0x14, LoadGame_field_0x14 > 0)
          && (*(unsigned __int8 (__thiscall **)(LoadGame *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
               this,
               LoadGame_field_0x08 + LoadGame_field_0x14,
               0) )
        {
          LoadGame_field_0x10 = this->LoadGame_field_0x10; /*0x4392d1*/
          LoadGame_field_0x04 = this->LoadGame_field_0x04; /*0x4392d4*/
          this->LoadGame_field_0x10 = LoadGame_field_0x10 + 1; /*0x4392da*/
          *(_DWORD *)(LoadGame_field_0x04 + 4 * LoadGame_field_0x10) = v20; /*0x4392e1*/
        }
        v5 = a2; /*0x4392e4*/
        if ( ++v6 >= a2 ) /*0x4392eb*/
          goto LABEL_11; /*0x4392eb*/
      }
    }
  }
  return result; /*0x4393c0*/
}



// ==== 0x004393D0  BombClass::StubReturn92  this=BombClass  sig=csp ====
int BombClass::StubReturn92(BombClass *this)
{
  return 92; /*0x4393d5*/
}



// ==== 0x004393E0  BombClass::StubReturn68  this=BombClass  sig=csp ====
int BombClass::StubReturn68(BombClass *this)
{
  return 68; /*0x4393e5*/
}



// ==== 0x004393F0  BombClass::CopyTo  this=BombClass  sig=csp ====
_DWORD *__thiscall BombClass::CopyTo(BombClass *this, char a2)
{
  int v3; // eax
  BombClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &BombClass::`vftable'; /*0x4393f7*/
  this->? = &BombClass::`vftable'; /*0x4393fd*/
  this->? = &BombClass::`vftable'; /*0x439404*/
  this->? = &BombClass::`vftable'; /*0x43940b*/
  AudioFileClass::Release((AudioFileClass *)&this->audioController[3]); /*0x439412*/
  v5 = this; /*0x439427*/
  v3 = (*(int (__thiscall **)(int *, BombClass **))(dword_89C668 + 16))(&dword_89C668, &v5); /*0x43942b*/
  if ( v3 != -1 && v3 < dword_89C678 && v3 < --dword_89C678 ) /*0x439446*/
  {
    do /*0x43945e*/
    {
      ++v3; /*0x43944e*/
      *((_DWORD *)dword_89C66C + v3 - 1) = *((_DWORD *)dword_89C66C + v3); /*0x439452*/
    }
    while ( v3 < dword_89C678 ); /*0x43945e*/
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x439462*/
  if ( (a2 & 1) != 0 ) /*0x43946c*/
    __3_YAXPAX_Z(this); /*0x43946f*/
  return &this->AbstractClass; /*0x439479*/
}



// ==== 0x00439480  sub_439480  this=-  sig=ida-proto ====
int sub_439480()
{
  dword_89C708 = 0; /*0x439482*/
  dword_89C70C = 0; /*0x439487*/
  dword_89C710 = 0; /*0x43948c*/
  dword_89C714 = 0; /*0x439491*/
  return 0; /*0x439496*/
}



// ==== 0x004394A0  sub_4394A0  this=-  sig=ida-proto ====
void sub_4394A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4394ac*/
  dbl_89C720 = Math::Sqrt(v0 + v0); /*0x4394be*/
}



// ==== 0x004394D0  sub_4394D0  this=-  sig=ida-proto ====
void sub_4394D0()
{
  dbl_89C770 = dbl_89C720 / 60.0; /*0x4394dc*/
}



// ==== 0x004394F0  sub_4394F0  this=-  sig=ida-proto ====
void sub_4394F0()
{
  dbl_89C758 = 1.0 / dbl_89C770; /*0x4394fc*/
}



// ==== 0x00439510  sub_439510  this=-  sig=ida-proto ====
void sub_439510()
{
  dbl_89C750 = 0.0174532925199433 * 45.0; /*0x43951c*/
}



// ==== 0x00439530  sub_439530  this=-  sig=ida-proto ====
void sub_439530()
{
  dbl_89C728 = 0.0174532925199433 * 60.0; /*0x43953c*/
}



// ==== 0x00439550  sub_439550  this=-  sig=ida-proto ====
void sub_439550()
{
  dbl_89C700 = 0.0174532925199433 * 90.0; /*0x43955c*/
}



// ==== 0x00439570  sub_439570  this=-  sig=ida-proto ====
__int64 sub_439570()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89C700 - dbl_89C728); /*0x439582*/
  result = Math::RoundToInt(v0 * dbl_89C720 * 0.5); /*0x439596*/
  dword_89C778 = result; /*0x43959b*/
  return result; /*0x4395a0*/
}



// ==== 0x004395B0  sub_4395B0  this=-  sig=ida-proto ====
void sub_4395B0()
{
  dbl_89C730 = Math::ArcTan((double)dword_89C778 * 0.00390625); /*0x4395c7*/
}



// ==== 0x004395E0  sub_4395E0  this=-  sig=ida-proto ====
void sub_4395E0()
{
  dbl_89C748 = Math::ArcTan((double)(2 * dword_89C778) / dbl_89C720); /*0x439602*/
}



// ==== 0x00439610  sub_439610  this=-  sig=ida-proto ====
__int64 sub_439610()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C778) + 0.5); /*0x43962b*/
  dword_89C76C = result; /*0x439630*/
  return result; /*0x439636*/
}



// ==== 0x00439640  sub_439640  this=-  sig=ida-proto ====
int sub_439640()
{
  word_89C718 = 0; /*0x439642*/
  word_89C71A = 0; /*0x439648*/
  return 0; /*0x43964e*/
}



// ==== 0x00439650  sub_439650  this=-  sig=ida-proto ====
int sub_439650()
{
  dword_89C738 = 0; /*0x439652*/
  dword_89C73C = 0; /*0x439657*/
  dword_89C740 = 0; /*0x43965c*/
  return 0; /*0x439661*/
}



// ==== 0x00439670  sub_439670  this=-  sig=ida-proto ====
int sub_439670()
{
  dword_89C768 = 0; /*0x439675*/
  dword_89C760 = 128; /*0x43967f*/
  dword_89C764 = 128; /*0x439684*/
  return 128; /*0x439689*/
}



// ==== 0x004397E0  AnimClass::InitRotation  this=AnimClass  sig=csp ====
_DWORD *__thiscall AnimClass::InitRotation(
        AnimClass *this,
        int *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _DWORD *a9,
        double a10)
{
  float v16; // eax
  float v17; // ecx
  float v18; // edx
  float *v19; // eax
  float *v20; // eax
  double v22; // [esp+0h] [ebp-68h]
  float v23; // [esp+4h] [ebp-64h]
  float v24; // [esp+Ch] [ebp-5Ch] BYREF
  float v25; // [esp+10h] [ebp-58h]
  float v26; // [esp+14h] [ebp-54h]
  float v27; // [esp+18h] [ebp-50h] BYREF
  float v28; // [esp+1Ch] [ebp-4Ch]
  float v29; // [esp+20h] [ebp-48h]
  float v30[4]; // [esp+28h] [ebp-40h] BYREF
  Matrix3x4 v31; // [esp+38h] [ebp-30h] BYREF
  int *v32; // [esp+6Ch] [ebp+4h]
  int v33; // [esp+70h] [ebp+8h]
  _DWORD *v34; // [esp+88h] [ebp+20h]

  this->AnimClass_field_0x0 = (void *)a3; /*0x4397f7*/
  this->AnimClass_field_0x4 = (void *)a4; /*0x4397fd*/
  this->AnimClass_field_0x8 = (void *)a5; /*0x439804*/
  *(_DWORD *)this->__pad_C = a6; /*0x43980e*/
  _EAX = a2; /*0x439811*/
  *(_DWORD *)&this->__pad_C[4] = a7; /*0x439815*/
  this->AnimClass_field_0x14 = (WinModemClass *)a8; /*0x439818*/
  __asm { fild dword ptr [eax] } /*0x43981b*/
  __asm { fstp dword ptr [esi+18h] }
  *(float *)this->__pad_18 = _ET1; /*0x439829*/
  __asm /*0x43982c*/
  {
    fild dword ptr [eax+4]
    fstp dword ptr [esi+1Ch]
  }
  *(float *)&this->__pad_18[4] = _ET1; /*0x43982f*/
  __asm { fild dword ptr [eax+8] } /*0x439832*/
  __asm { fstp dword ptr [esi+20h] }
  *(float *)&this->__pad_18[8] = _ET1; /*0x439838*/
  this->AnimClass_field_0x24 = (void *)*a9; /*0x43983d*/
  *(_QWORD *)this->__pad_28 = *(_QWORD *)(a9 + 1); /*0x439842*/
  v33 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -65535, 0xFFFF); /*0x43985c*/
  v34 = (_DWORD *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -65535, 0xFFFF); /*0x439890*/
  v32 = (int *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -65535, 0xFFFF); /*0x43989c*/
  __asm /*0x4398a3*/
  {
    fild [esp+68h+arg_0]
    fmul ds:flt_7E3560
    fstp [esp+68h+var_5C]
    fild [esp+68h+arg_1C]
    fmul ds:flt_7E3560
    fstp [esp+68h+var_58]
    fild [esp+68h+arg_4]
    fmul ds:flt_7E3560
    fstp [esp+68h+var_54]
    fld [esp+68h+var_58]
    fmul [esp+68h+var_58]
    fld [esp+68h+var_54]
    fmul [esp+68h+var_54]
    faddp st(1), st
    fld [esp+68h+var_5C]
    fmul [esp+68h+var_5C]
    faddp st(1), st
    fstp [esp+68h+var_68]; double
  }
  Math::Sqrt(v22); /*0x4398ef*/
  __asm { fcom ds:dbl_7E2800 } /*0x4398f4*/
  __asm { fnstsw ax }
  if ( (_AX & 0x4000) != 0 ) /*0x439902*/
  {
    v16 = v24; /*0x43992e*/
    v17 = v25; /*0x439932*/
    v18 = v26; /*0x439936*/
    __asm { fstp st } /*0x43993a*/
  }
  else
  {
    __asm /*0x439904*/
    {
      fld [esp+60h+var_5C]
      fdiv st, st(1)
      fstp [esp+60h+var_50]
      fld [esp+60h+var_58]
      fdiv st, st(1)
    }
    v16 = v27; /*0x439914*/
    __asm { fstp [esp+60h+var_4C] } /*0x439918*/
    v17 = v28; /*0x43991c*/
    __asm /*0x439920*/
    {
      fdivr [esp+60h+var_54]
      fstp [esp+60h+var_48]
    }
    v18 = v29; /*0x439928*/
  }
  __asm { fld [esp+60h+arg_20] } /*0x43993c*/
  v25 = v17; /*0x439944*/
  v26 = v18; /*0x439948*/
  __asm { fstp dword ptr [esp+64h+var_68+4]; float } /*0x439950*/
  v24 = v16; /*0x439957*/
  v19 = FromQuaternionAxisAngle(&v27, &v24, v23); /*0x43995b*/
  Float4::Copy((float *)this->AnimClass_field_0x40, v30, v19); /*0x439969*/
  Matrix3x4::Identity(&v31); /*0x439972*/
  v20 = ConvertMatrixToQuaternion(v30, (float *)v31.m_Data); /*0x43997f*/
  return Float4::Copy((float *)this->AnimClass_field_0x30, &v27, v20); /*0x439992*/
}



// ==== 0x004399A0  Coord::GetCoords  this=Coord  sig=csp ====
int Coord::GetCoords(int *this, _DWORD *a2)
{
  int v2; // ecx
  int v3; // esi
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // eax

  v3 = v2; /*0x4399a2*/
  LOWORD(v4) = Math::RoundToInt(*(float *)(v2 + 24)); /*0x4399a8*/
  v5 = v4; /*0x4399b0*/
  LOWORD(v6) = Math::RoundToInt(*(float *)(v3 + 28)); /*0x4399b2*/
  v7 = v6; /*0x4399ba*/
  LOWORD(v8) = Math::RoundToInt(*(float *)(v3 + 32)); /*0x4399bc*/
  *this = v5; /*0x4399c7*/
  this->q004 = v7; /*0x4399cb*/
  this->q008 = v8; /*0x4399cf*/
  return (int)this; /*0x4399c9*/
}



// ==== 0x004399E0  VoxelAnimClass::QuaternionToMatrix  this=VoxelAnimClass  sig=csp ====
float *__thiscall sub_4399E0(float *this, float *a2)
{
  float *v2; // esi
  float v4[12]; // [esp+8h] [ebp-30h] BYREF

  v2 = ToQuaternionMatrix(v4, this + 12); /*0x4399f1*/
  qmemcpy(a2, v2, 0x30u); /*0x4399fe*/
  return a2; /*0x439a00*/
}



// ==== 0x00439A10  JumpjetLocomotionClass::ComputeVectorLengthMetric  this=JumpjetLocomotionClass  sig=csp ====
double __thiscall JumpjetLocomotionClass::ComputeVectorLengthMetric(JumpjetLocomotionClass *this)
{
  int v2; // eax
  double v3; // st7
  int v4; // eax
  double Climb; // st7
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v12; // [esp+14h] [ebp-18h]
  int v13; // [esp+18h] [ebp-14h]
  _DWORD v14[3]; // [esp+20h] [ebp-Ch] BYREF

  LOWORD(v2) = Math::RoundToInt(*(float *)&this->TurnRate); /*0x439a1a*/
  v3 = *(float *)&this->Speed; /*0x439a1f*/
  v14[0] = v2; /*0x439a22*/
  LOWORD(v4) = Math::RoundToInt(v3); /*0x439a26*/
  Climb = this->Climb; /*0x439a2b*/
  v14[1] = v4; /*0x439a2e*/
  LOWORD(v6) = Math::RoundToInt(Climb); /*0x439a32*/
  v14[2] = v6; /*0x439a37*/
  Cell::GetGroundHeight(v14); /*0x439a45*/
  Math::RoundToInt(Climb); /*0x439a55*/
  Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v14); /*0x439a6a*/
  LOWORD(v7) = Math::RoundToInt(Climb); /*0x439a8c*/
  v12 = v7; /*0x439a94*/
  LOWORD(v8) = Math::RoundToInt(Climb); /*0x439a98*/
  v13 = v8; /*0x439aa1*/
  LOWORD(v9) = Math::RoundToInt(Climb); /*0x439aab*/
  Math::Sqrt((double)v9 * (double)v9 + (double)v12 * (double)v12 + (double)v13 * (double)v13); /*0x439adc*/
  LOWORD(v10) = Math::RoundToInt(Climb); /*0x439ae4*/
  return (double)v10; /*0x439af2*/
}



// ==== 0x00439B00  JumpjetLocomotionClass::Update2  this=JumpjetLocomotionClass  sig=csp ====
int __usercall JumpjetLocomotionClass::Update2@<eax>(double *this@<ecx>, float *a2@<edi>)
{
  double *v2; // esi
  double v3; // st7
  float *v4; // ebp
  char *v5; // ebx
  double v6; // st6
  float v7; // edx
  double v8; // st6
  float v9; // eax
  int v10; // eax
  float v11; // ecx
  int *v12; // eax
  int v13; // eax
  int v14; // eax
  int *v15; // eax
  int v16; // eax
  int v17; // eax
  Cell *v18; // edi
  double v19; // st7
  _DWORD *v20; // eax
  int v21; // ebx
  int Byte284; // eax
  float *v23; // eax
  double v24; // st7
  float v25; // edx
  int v26; // eax
  Triple *v27; // eax
  double *v28; // edi
  char *v29; // esi
  float v30; // edx
  Triple v31; // eax
  int *v32; // eax
  int v33; // eax
  int v34; // eax
  int *v35; // eax
  int v36; // eax
  int v37; // eax
  int level; // esi
  float v39; // ecx
  float v40; // edx
  int v41; // ecx
  int v42; // edx
  float v43; // ecx
  CellClass *v44; // eax
  int v45; // eax
  float *v46; // eax
  double v47; // st7
  float *v48; // eax
  double v49; // st7
  int result; // eax
  int v51; // [esp+0h] [ebp-148h]
  int v52; // [esp+0h] [ebp-148h]
  int v53; // [esp+0h] [ebp-148h]
  int v54; // [esp+0h] [ebp-148h]
  int v55; // [esp+0h] [ebp-148h]
  int *v56; // [esp+4h] [ebp-144h]
  int *v57; // [esp+4h] [ebp-144h]
  int *v58; // [esp+4h] [ebp-144h]
  int *v59; // [esp+4h] [ebp-144h]
  int *v60; // [esp+4h] [ebp-144h]
  int *v61; // [esp+8h] [ebp-140h]
  int *v62; // [esp+8h] [ebp-140h]
  float v63; // [esp+8h] [ebp-140h]
  float *v64; // [esp+8h] [ebp-140h]
  float v65; // [esp+Ch] [ebp-13Ch]
  bool v66; // [esp+19h] [ebp-12Fh]
  char v67; // [esp+1Ah] [ebp-12Eh]
  char v68; // [esp+1Bh] [ebp-12Dh]
  float v69; // [esp+1Ch] [ebp-12Ch]
  float v70; // [esp+1Ch] [ebp-12Ch]
  float v71; // [esp+1Ch] [ebp-12Ch]
  Triple v72[2]; // [esp+20h] [ebp-128h] BYREF
  float v73; // [esp+28h] [ebp-120h]
  double *v74; // [esp+2Ch] [ebp-11Ch]
  int v75; // [esp+30h] [ebp-118h]
  int GroundHeight; // [esp+34h] [ebp-114h]
  float v77; // [esp+38h] [ebp-110h]
  float v78; // [esp+3Ch] [ebp-10Ch]
  float v79; // [esp+40h] [ebp-108h]
  int v80; // [esp+44h] [ebp-104h]
  int v81; // [esp+48h] [ebp-100h]
  float v82; // [esp+4Ch] [ebp-FCh]
  Coord3D v83; // [esp+50h] [ebp-F8h] BYREF
  Coord3D v84; // [esp+5Ch] [ebp-ECh] BYREF
  int v85[2]; // [esp+6Ch] [ebp-DCh] BYREF
  int v86[4]; // [esp+78h] [ebp-D0h] BYREF
  float v87[12]; // [esp+88h] [ebp-C0h] BYREF
  float v88[12]; // [esp+B8h] [ebp-90h] BYREF
  float v89[12]; // [esp+E8h] [ebp-60h] BYREF
  char v90[48]; // [esp+118h] [ebp-30h] BYREF

  v2 = this; /*0x439b09*/
  v74 = this; /*0x439b0b*/
  v3 = this->Owner; /*0x439b17*/
  v4 = (float *)(this + 3); /*0x439b1a*/
  *(double *)v72[0].__tail_0 = v3; /*0x439b22*/
  v6 = *((float *)this + 11); /*0x439b28*/
  v7 = *((float *)this + 7); /*0x439b2b*/
  v77 = *((float *)this + 6); /*0x439b2e*/
  v8 = v6 - this->vtable2; /*0x439b32*/
  v9 = *((float *)this + 8); /*0x439b35*/
  v5 = (char *)this + 36; /*0x439b1d*/
  v78 = v7; /*0x439b3a*/
  v79 = v9; /*0x439b3e*/
  v80 = this->Crash; /*0x439b44*/
  v10 = this->Height; /*0x439b4a*/
  v85[0] = *(_DWORD *)this; /*0x439b4d*/
  v81 = v10; /*0x439b51*/
  v11 = *((float *)this + 11); /*0x439b58*/
  v85[1] = *((_DWORD *)v74 + 1); /*0x439b5b*/
  *((float *)v5 + 2) = v8; /*0x439b5f*/
  v82 = v11; /*0x439b62*/
  if ( v3 > 0.0 ) /*0x439b71*/
  {
    JumpjetLocomotionClass::ComputeVectorLengthMetric_0((float *)v5); /*0x439b75*/
    if ( v3 > *(double *)v72[0].__tail_0 ) /*0x439b83*/
    {
      *(float *)&v61 = v3 / v3; /*0x439b8c*/
      Coord::Scale(v61, v65); /*0x439b8f*/
    }
  }
  LOWORD(v12) = Math::RoundToInt(v4[2]); /*0x439b9c*/
  v56 = v12; /*0x439ba4*/
  LOWORD(v13) = Math::RoundToInt(v4[1]); /*0x439ba5*/
  v51 = v13; /*0x439bad*/
  LOWORD(v14) = Math::RoundToInt(*v4); /*0x439bae*/
  Coord3D::Set(&v84, v14, v51, (int)v56); /*0x439bb8*/
  Vector3::AddAssign((int *)v5, a2); /*0x439bc0*/
  LOWORD(v15) = Math::RoundToInt(v4[2]); /*0x439bc8*/
  v57 = v15; /*0x439bd0*/
  LOWORD(v16) = Math::RoundToInt(v4[1]); /*0x439bd1*/
  v52 = v16; /*0x439bd9*/
  LOWORD(v17) = Math::RoundToInt(*v4); /*0x439bda*/
  Coord3D::Set(&v83, v17, v52, (int)v57); /*0x439be4*/
  GroundHeight = Cell::GetGroundHeight(&v83); /*0x439bfe*/
  v75 = dword_89C76C + GroundHeight; /*0x439c09*/
  v18 = (Cell *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v83); /*0x439c17*/
  v68 = 0; /*0x439c19*/
  v67 = 0; /*0x439c1e*/
  if ( ((int)v18->Cell_field_0x140 & 0x100) != 0 /*0x439c46*/
    || (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v84)->flags[0] & 0x100) != 0 )
  {
    if ( v83.Coord3D_field_0x08 < v75 ) /*0x439c56*/
    {
      if ( v84.Coord3D_field_0x08 >= v75 ) /*0x439c65*/
        v68 = 1; /*0x439c67*/
    }
    else if ( v84.Coord3D_field_0x08 < v75 ) /*0x439c5a*/
    {
      v67 = 1; /*0x439c5c*/
    }
  }
  v66 = 0; /*0x439c70*/
  if ( !v68 && !v67 ) /*0x439c83*/
  {
    v19 = (double)GroundHeight; /*0x439c89*/
    if ( v19 <= v4[2] && v4[2] - 150.0 < v19 ) /*0x439ca9*/
    {
      v20 = Cell::IsBridge(v18); /*0x439cad*/
      v72[0] = (Triple)v20; /*0x439cb4*/
      if ( !v20 ) /*0x439cb8*/
      {
        if ( !(unsigned __int8)BuildingPlacement::ValidateType((BuildingPlacement *)v18, -1, -1) ) /*0x439cc0*/
        {
          v66 = 0; /*0x439cc9*/
          goto LABEL_24; /*0x439ccd*/
        }
        v20 = (_DWORD *)v72[0]; /*0x439ccf*/
      }
      v66 = 1; /*0x439cd5*/
      if ( v20 ) /*0x439cda*/
      {
        if ( *(_BYTE *)(v20[328] + 5823) ) /*0x439ce2*/
          v66 = v20[390] < 8; /*0x439cf5*/
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v20 + 128))(v20) ) /*0x439cfe*/
          v66 = 0; /*0x439d08*/
      }
    }
  }
LABEL_24:
  *(float *)v72 = (float)GroundHeight; /*0x439d11*/
  if ( v4[2] < (double)*(_DWORD *)v72 ) /*0x439d29*/
  {
    if ( !v68 ) /*0x439d4a*/
    {
      if ( !v67 ) /*0x439d5b*/
      {
LABEL_33:
        if ( (double)(GroundHeight - 100) < v4[2] ) /*0x439d88*/
          v4[2] = *(float *)v72; /*0x439d8e*/
        goto LABEL_35; /*0x439d8e*/
      }
      goto LABEL_32; /*0x439d5b*/
    }
LABEL_30:
    v4[2] = (float)v75; /*0x439d4c*/
    goto LABEL_35; /*0x439d53*/
  }
  if ( v68 ) /*0x439d2d*/
    goto LABEL_30; /*0x439d2d*/
  if ( !v67 ) /*0x439d35*/
  {
    if ( !v66 ) /*0x439d3d*/
    {
      v21 = 0; /*0x439d3f*/
      goto LABEL_43; /*0x439d43*/
    }
    goto LABEL_33; /*0x439d3d*/
  }
LABEL_32:
  v4[2] = (float)(v75 - 20); /*0x439d5d*/
LABEL_35:
  Byte284 = CellClass::GetByte284(&v83); /*0x439d91*/
  qmemcpy(v88, CopyAudioData(v90, Byte284), sizeof(v88)); /*0x439dc4*/
  v23 = InvertMatrix3x3Signs(v89, v88); /*0x439dcd*/
  v24 = *((float *)v5 + 1); /*0x439dd2*/
  v25 = *(float *)v5; /*0x439de3*/
  qmemcpy(v87, v23, sizeof(v87)); /*0x439de5*/
  *(float *)&v53 = -v24; /*0x439df2*/
  Triple::Set(v72, SLODWORD(v25), v53, *((_DWORD *)v5 + 2)); /*0x439df6*/
  v26 = Matrix3x3::TransformPoint(v86, (float *)v72, (float *)v62); /*0x439e0c*/
  v72[0] = *(Triple *)v26; /*0x439e17*/
  v72[1] = *(Triple *)(v26 + 4); /*0x439e1e*/
  *(float *)&v58 = *(double *)v85; /*0x439e2a*/
  v73 = *(float *)(v26 + 8); /*0x439e2d*/
  Coord::Scale(v58, v63); /*0x439e31*/
  v73 = -v73; /*0x439e46*/
  v27 = (Triple *)Matrix3x3::TransformPoint(v85, (float *)v72, v64); /*0x439e51*/
  v28 = v74; /*0x439e58*/
  v72[0] = *v27; /*0x439e5c*/
  v29 = (char *)(v74 + 8); /*0x439e65*/
  v72[1] = v27[1]; /*0x439e68*/
  v30 = *(float *)&v27[2]; /*0x439e6c*/
  v31 = v72[0]; /*0x439e6f*/
  v73 = v30; /*0x439e79*/
  *((float *)v5 + 1) = -*(float *)&v72[1]; /*0x439e7f*/
  *((float *)v5 + 2) = v30; /*0x439e82*/
  *(Triple *)v5 = v31; /*0x439e87*/
  v69 = -*(float *)Function::645D00(v29, 0); /*0x439e92*/
  *(float *)Function::645D00(v29, 0) = v69; /*0x439ea5*/
  v70 = -*(float *)Function::645D00(v29, 1); /*0x439eb2*/
  *(float *)Function::645D00(v29, 1) = v70; /*0x439ec5*/
  v71 = -*(float *)Function::645D00(v29, 2); /*0x439ed2*/
  *(float *)Function::645D00(v29, 2) = v71; /*0x439ee3*/
  LOWORD(v32) = Math::RoundToInt(*((float *)v28 + 8)); /*0x439ee8*/
  v59 = v32; /*0x439ef0*/
  LOWORD(v33) = Math::RoundToInt(*((float *)v28 + 7)); /*0x439ef1*/
  v54 = v33; /*0x439ef9*/
  LOWORD(v34) = Math::RoundToInt(*v4); /*0x439efa*/
  Coord::Subtract((Coord *)&v83, v34, v54, (int)v59); /*0x439f04*/
  LOWORD(v35) = Math::RoundToInt(v79); /*0x439f0d*/
  v60 = v35; /*0x439f16*/
  LOWORD(v36) = Math::RoundToInt(v78); /*0x439f17*/
  v55 = v36; /*0x439f20*/
  LOWORD(v37) = Math::RoundToInt(v77); /*0x439f21*/
  Coord::Subtract((Coord *)&v84, v37, v55, (int)v60); /*0x439f2b*/
  level = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v84)->level; /*0x439f3f*/
  if ( Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v83)->level - level >= 2 /*0x439fb1*/
    && (v82 < -0.0002 && *((float *)v28 + 8) > (double)v79 || v82 >= -0.0003 && v82 + v79 + 1.0 < *((float *)v28 + 8)) )
  {
    v39 = v78; /*0x439fbb*/
    v40 = v79; /*0x439fbf*/
    *v4 = v77; /*0x439fc3*/
    v4[1] = v39; /*0x439fc6*/
    v41 = v80; /*0x439fc9*/
    v4[2] = v40; /*0x439fcf*/
    v42 = v81; /*0x439fd2*/
    *(_DWORD *)v5 = v41; /*0x439fd6*/
    v43 = v82; /*0x439fd8*/
    *((_DWORD *)v5 + 1) = v42; /*0x439fdc*/
    *((float *)v5 + 2) = v43; /*0x439fe4*/
    v44 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v83); /*0x439ff1*/
    v45 = JumpjetLocomotionClass::AdjustClimbFacing((JumpjetLocomotionClass *)v44, &v84); /*0x439ff8*/
    if ( v45 != -1 ) /*0x43a000*/
    {
      qmemcpy(v87, Locomotor_Update((char *)v89, v45), sizeof(v87)); /*0x43a01f*/
      v46 = TransformMatrix3x4Point((float *)v86, v87, (float *)v5); /*0x43a02c*/
      *(float *)v5 = *v46; /*0x43a035*/
      *((float *)v5 + 1) = v46[1]; /*0x43a03a*/
      *((float *)v5 + 2) = v46[2]; /*0x43a040*/
      v47 = *v74; /*0x43a047*/
      *(float *)v5 = v47 * *(float *)v5; /*0x43a04d*/
      *((float *)v5 + 1) = v47 * *((float *)v5 + 1); /*0x43a054*/
      *((float *)v5 + 2) = v47 * *((float *)v5 + 2); /*0x43a05a*/
    }
  }
  v2 = v74; /*0x43a05d*/
  v21 = 1; /*0x43a061*/
LABEL_43:
  v48 = QuaternionMathMultiply((float *)v86, (float *)v2 + 12, (float *)v2 + 16); /*0x43a066*/
  Float4::Copy((float *)v2 + 12, &v84, v48); /*0x43a080*/
  v49 = JumpjetLocomotionClass::ComputeVectorLengthMetric((JumpjetLocomotionClass *)v2); /*0x43a087*/
  result = 2; /*0x43a098*/
  if ( v49 >= 2.5 ) /*0x43a09d*/
    return v21; /*0x43a09f*/
  return result; /*0x43a0a1*/
}



// ==== 0x0043A0B0  Triple::Set  this=Triple  sig=csp ====
_DWORD *__thiscall Triple::Set(Triple *this, int a2, int a3, int a4)
{
  *this = (Triple)a2; /*0x43a0ba*/
  *((_DWORD *)this + 1) = a3; /*0x43a0c0*/
  *((_DWORD *)this + 2) = a4; /*0x43a0c3*/
  return this; /*0x43a0c6*/
}



// ==== 0x0043A0D0  Coord::Scale  this=Coord  sig=csp ====
int Coord::Scale(int *this, float a2)
{
  float *v2; // ecx

  *v2 = *(float *)&this * *v2; /*0x43a0d8*/
  v2[1] = *(float *)&this * v2[1]; /*0x43a0e1*/
  v2[2] = *(float *)&this * v2[2]; /*0x43a0eb*/
  return (int)v2; /*0x43a0ee*/
}



// ==== 0x0043A100  Vector3::AddAssign  this=Vector3  sig=csp ====
int Vector3::AddAssign(int *this, float *a2)
{
  float *v2; // ecx

  *v2 = *(float *)this + *v2; /*0x43a10a*/
  v2[1] = *((float *)this + 1) + v2[1]; /*0x43a112*/
  v2[2] = *((float *)this + 2) + v2[2]; /*0x43a11b*/
  return (int)v2; /*0x43a11e*/
}



// ==== 0x0043A130  JumpjetLocomotionClass::ComputeVectorLengthMetric_0  this=Tactical  sig=csp ====
void __thiscall sub_43A130(float *this)
{
  Math::Sqrt(*this * *this + this->vtable2 * this->vtable2 + this->vtable3 * this->vtable3); /*0x43a154*/
}



// ==== 0x0043A160  sub_43A160  this=-  sig=ida-proto ====
void sub_43A160()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x43a16c*/
  dbl_89C790 = Math::Sqrt(v0 + v0); /*0x43a17e*/
}



// ==== 0x0043A190  sub_43A190  this=-  sig=ida-proto ====
void sub_43A190()
{
  dbl_89C7E0 = dbl_89C790 / 60.0; /*0x43a19c*/
}



// ==== 0x0043A1B0  sub_43A1B0  this=-  sig=ida-proto ====
void sub_43A1B0()
{
  dbl_89C7C8 = 1.0 / dbl_89C7E0; /*0x43a1bc*/
}



// ==== 0x0043A1D0  sub_43A1D0  this=-  sig=ida-proto ====
void sub_43A1D0()
{
  dbl_89C7C0 = 0.0174532925199433 * 45.0; /*0x43a1dc*/
}



// ==== 0x0043A1F0  sub_43A1F0  this=-  sig=ida-proto ====
void sub_43A1F0()
{
  dbl_89C798 = 0.0174532925199433 * 60.0; /*0x43a1fc*/
}



// ==== 0x0043A210  sub_43A210  this=-  sig=ida-proto ====
void sub_43A210()
{
  dbl_89C780 = 0.0174532925199433 * 90.0; /*0x43a21c*/
}



// ==== 0x0043A230  sub_43A230  this=-  sig=ida-proto ====
__int64 sub_43A230()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89C780 - dbl_89C798); /*0x43a242*/
  result = Math::RoundToInt(v0 * dbl_89C790 * 0.5); /*0x43a256*/
  dword_89C7E8 = result; /*0x43a25b*/
  return result; /*0x43a260*/
}



// ==== 0x0043A270  sub_43A270  this=-  sig=ida-proto ====
void sub_43A270()
{
  dbl_89C7A0 = Math::ArcTan((double)dword_89C7E8 * 0.00390625); /*0x43a287*/
}



// ==== 0x0043A2A0  sub_43A2A0  this=-  sig=ida-proto ====
void sub_43A2A0()
{
  dbl_89C7B8 = Math::ArcTan((double)(2 * dword_89C7E8) / dbl_89C790); /*0x43a2c2*/
}



// ==== 0x0043A2D0  sub_43A2D0  this=-  sig=ida-proto ====
__int64 sub_43A2D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C7E8) + 0.5); /*0x43a2eb*/
  dword_89C7DC = result; /*0x43a2f0*/
  return result; /*0x43a2f6*/
}



// ==== 0x0043A300  sub_43A300  this=-  sig=ida-proto ====
int sub_43A300()
{
  word_89C788 = 0; /*0x43a302*/
  word_89C78A = 0; /*0x43a308*/
  return 0; /*0x43a30e*/
}



// ==== 0x0043A310  sub_43A310  this=-  sig=ida-proto ====
int sub_43A310()
{
  dword_89C7A8 = 0; /*0x43a312*/
  dword_89C7AC = 0; /*0x43a317*/
  dword_89C7B0 = 0; /*0x43a31c*/
  return 0; /*0x43a321*/
}



// ==== 0x0043A330  sub_43A330  this=-  sig=ida-proto ====
int sub_43A330()
{
  dword_89C7D8 = 0; /*0x43a335*/
  dword_89C7D0 = 128; /*0x43a33f*/
  dword_89C7D4 = 128; /*0x43a344*/
  return 128; /*0x43a349*/
}



// ==== 0x0043A350  NeuronClass::NeuronClass  this=NeuronClass  sig=csp ====
int __thiscall NeuronClass::NeuronClass(NeuronClass *this)
{
  int v2; // eax
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x43a353*/
  *((_DWORD *)this + 9) = 0; /*0x43a358*/
  *((_DWORD *)this + 10) = 0; /*0x43a35f*/
  *((_DWORD *)this + 11) = 0; /*0x43a366*/
  this->vtable4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x43a372*/
  *(_DWORD *)this->__pad_0 = &NeuronClass::`vftable'; /*0x43a375*/
  this->NeuronClass_field_0x04 = (int)&NeuronClass::`vftable'; /*0x43a37b*/
  this->NeuronClass_field_0x08 = (int)&NeuronClass::`vftable'; /*0x43a382*/
  this->NeuronClass_field_0x0C = (int)&NeuronClass::`vftable'; /*0x43a389*/
  if ( g_BuildingLoadQueue_Array.?[1] < g_BuildingLoadQueue_Array.? /*0x43a3c5*/
    || (BYTE1(g_BuildingLoadQueue_Array.?[0]) || !g_BuildingLoadQueue_Array.?)
    && g_BuildingLoadQueue_Array.?[2] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_BuildingLoadQueue_Array.?[2] + 8))(
         &g_BuildingLoadQueue_Array.?[2],
         g_BuildingLoadQueue_Array.? + g_BuildingLoadQueue_Array.?[2],
         0) )
  {
    v2 = g_BuildingLoadQueue_Array.?[1]++; /*0x43a3d2*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v2) = this; /*0x43a3e1*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x43a41b*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v3 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x43a428*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3) = this; /*0x43a437*/
  }
  return (int)this->__pad_0; /*0x43a43c*/
}



// ==== 0x0043A500  NeuronClass::GetClassID  this=NeuronClass  sig=csp ====
int __stdcall COM::GetClassID(NeuronClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x43a506*/
    return -2147467261; /*0x43a508*/
  *a2 = 605729558; /*0x43a516*/
  a2[1] = 298994933; /*0x43a51e*/
  a2[2] = 268445372; /*0x43a527*/
  a2[3] = unk_7E998C; /*0x43a530*/
  return 0; /*0x43a50d*/
}



// ==== 0x0043A540  NeuronClass::Fire  this=NeuronClass  sig=csp ====
int __stdcall NeuronClass::Fire(NeuronClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x43a54b*/
  if ( result >= 0 ) /*0x43a552*/
  {
    if ( this ) /*0x43a556*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x43a55f*/
      *(_DWORD *)this->__pad_0 = &NeuronClass::`vftable'; /*0x43a564*/
      this->NeuronClass_field_0x04 = (int)&NeuronClass::`vftable'; /*0x43a56a*/
      this->NeuronClass_field_0x08 = (int)&NeuronClass::`vftable'; /*0x43a571*/
      this->NeuronClass_field_0x0C = (int)&NeuronClass::`vftable'; /*0x43a578*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 10); /*0x43a588*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 9); /*0x43a596*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 11); /*0x43a5a4*/
    return 0; /*0x43a5a9*/
  }
  return result; /*0x43a5ab*/
}



// ==== 0x0043A5B0  NeuronClass::Update  this=NeuronClass  sig=csp ====
int __stdcall NeuronClass::Update(NeuronClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this->__pad_0, a2, a3); /*0x43a5bf*/
  if ( result >= 0 ) /*0x43a5c6*/
    return 0; /*0x43a5c8*/
  return result; /*0x43a5ca*/
}



// ==== 0x0043A5D0  NeuronClass::Update  this=NeuronClass  sig=csp ====
int __thiscall Power::Update(NeuronClass *this, int *a2)
{
  AbstractClass::ProcessPower((AbstractClass *)this); /*0x43a5d9*/
  return Power::TimerProcess(*(_DWORD *)&stru_A8EB00.?[416] - this->vtable4); /*0x43a5f0*/
}



// ==== 0x0043A600  BrainClass::method_43A600  this=BrainClass  sig=csp ====
void __thiscall sub_43A600(BrainClass *this)
{
  int v2; // esi
  int v3; // ebp
  int v4; // ecx
  void *v5; // eax

  v2 = 0; /*0x43a608*/
  this->vfptr = (int)&BrainClass::`vftable'; /*0x43a60a*/
  v3 = *((_DWORD *)this + 5); /*0x43a610*/
  if ( v3 > 0 ) /*0x43a615*/
  {
    do /*0x43a632*/
    {
      v4 = *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v2); /*0x43a61a*/
      if ( v4 ) /*0x43a61f*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 32))(v4, 1); /*0x43a625*/
      ++v2; /*0x43a62b*/
      *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v2 - 4) = 0; /*0x43a62e*/
    }
    while ( v2 < v3 ); /*0x43a632*/
  }
  (*(void (__thiscall **)(BrainClass *))(*((_DWORD *)this + 1) + 12))(this + 1); /*0x43a63c*/
  v5 = (void *)*((_DWORD *)this + 2); /*0x43a63f*/
  *((_DWORD *)this + 1) = &VectorClass<NeuronClass *>::`vftable'; /*0x43a642*/
  if ( v5 && *((_BYTE *)this + 17) ) /*0x43a64c*/
  {
    __3_YAXPAX_Z(v5); /*0x43a652*/
    *((_DWORD *)this + 2) = 0; /*0x43a65a*/
  }
  *((_BYTE *)this + 17) = 0; /*0x43a65d*/
  *((_DWORD *)this + 3) = 0; /*0x43a660*/
}



// ==== 0x0043A670  ObjectClass::method_43A670  this=ObjectClass  sig=csp ====
int __thiscall sub_43A670(ObjectClass *this)
{
  int v2; // esi
  int abstractFlags; // ebx
  int v4; // ecx

  v2 = 0; /*0x43a675*/
  abstractFlags = this->?; /*0x43a677*/
  if ( abstractFlags > 0 ) /*0x43a67c*/
  {
    do /*0x43a69d*/
    {
      v4 = *((_DWORD *)this->? + v2); /*0x43a681*/
      if ( v4 ) /*0x43a686*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 32))(v4, 1); /*0x43a68c*/
      *((_DWORD *)this->? + v2++) = 0; /*0x43a695*/
    }
    while ( v2 < abstractFlags ); /*0x43a69d*/
  }
  return (*((int (__thiscall **)(void **))this->? + 3))(&this->?); /*0x43a6a8*/
}



// ==== 0x0043A6B0  ObjectClass::method_43A6B0  this=ObjectClass  sig=csp ====
int __thiscall sub_43A6B0(ObjectClass *this, int a2, int a3)
{
  int v4; // esi
  int abstractFlags; // ebx
  int v6; // ecx

  v4 = 0; /*0x43a6b5*/
  abstractFlags = this->?; /*0x43a6b7*/
  if ( abstractFlags > 0 ) /*0x43a6bc*/
  {
    do /*0x43a6dd*/
    {
      v6 = *((_DWORD *)this->? + v4); /*0x43a6c1*/
      if ( v6 ) /*0x43a6c6*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 32))(v6, 1); /*0x43a6cc*/
      *((_DWORD *)this->? + v4++) = 0; /*0x43a6d5*/
    }
    while ( v4 < abstractFlags ); /*0x43a6dd*/
  }
  (*((void (__thiscall **)(void **))this->? + 3))(&this->?); /*0x43a6e5*/
  this->? = a2; /*0x43a6f0*/
  this->? = (void *)a3; /*0x43a6f3*/
  return a2; /*0x43a6f6*/
}



// ==== 0x0043A770  ObjectClass::method_43A770  this=ObjectClass  sig=csp ====
int __thiscall sub_43A770(ObjectClass *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // esi
  int result; // eax
  _DWORD *abstractFlags; // eax
  int v7; // ecx
  int v8; // edi
  int v9; // ebp
  _DWORD *v10; // [esp-8h] [ebp-20h]
  int v11; // [esp-4h] [ebp-1Ch]

  v3 = a2; /*0x43a773*/
  if ( !a2 ) /*0x43a77c*/
    return -2147467261; /*0x43a781*/
  abstractFlags = (_DWORD *)this->?; /*0x43a78a*/
  v7 = *a2; /*0x43a78d*/
  v10 = a2; /*0x43a798*/
  a2 = abstractFlags; /*0x43a799*/
  result = (*(int (__stdcall **)(_DWORD *, _DWORD **, int, _DWORD))(v7 + 16))(v10, &a2, 4, 0); /*0x43a79d*/
  if ( result >= 0 ) /*0x43a7a2*/
  {
    v8 = 0; /*0x43a7a8*/
    if ( (int)a2 <= 0 ) /*0x43a7ac*/
    {
      return 0; /*0x43a7cd*/
    }
    else
    {
      v9 = a3; /*0x43a7ae*/
      while ( 1 ) /*0x43a7ba*/
      {
        v11 = *((_DWORD *)this->? + v8); /*0x43a7ba*/
        result = (*(int (__stdcall **)(int, _DWORD *, int))(*(_DWORD *)v11 + 24))(v11, v3, v9); /*0x43a7bd*/
        if ( result < 0 ) /*0x43a7c2*/
          break; /*0x43a7c2*/
        if ( ++v8 >= (int)a2 ) /*0x43a7cb*/
          return 0; /*0x43a7cb*/
      }
    }
  }
  return result; /*0x43a77e*/
}



// ==== 0x0043A7E0  AbstractClass::Construct  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::Construct(AbstractClass *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int result; // eax
  int v5; // eax
  AbstractClass *v6; // eax
  AbstractClass *v7; // esi
  int v8; // eax
  int v9; // eax
  void *vtable3; // ecx
  int nextArrayIndex; // eax
  int abstractFlags; // eax
  _DWORD *vtable2; // edx
  int v14; // [esp+30h] [ebp-8h] BYREF
  int v15; // [esp+34h] [ebp-4h]

  v2 = a2; /*0x43a7e7*/
  if ( !a2 ) /*0x43a7f1*/
    return -2147467261; /*0x43a7f6*/
  v5 = *a2; /*0x43a802*/
  v14 = 0; /*0x43a80d*/
  result = (*(int (__stdcall **)(_DWORD *, int *, int, _DWORD))(v5 + 12))(a2, &v14, 4, 0); /*0x43a811*/
  if ( result >= 0 ) /*0x43a816*/
  {
    v15 = 0; /*0x43a820*/
    if ( v14 <= 0 ) /*0x43a826*/
    {
      return 0; /*0x43a993*/
    }
    else
    {
      while ( 1 ) /*0x43a82e*/
      {
        v6 = (AbstractClass *)__2_YAPAXI_Z(0x38u); /*0x43a82e*/
        v7 = v6; /*0x43a833*/
        if ( !v6 ) /*0x43a83a*/
          break; /*0x43a83a*/
        AbstractClass::Constructor(v6); /*0x43a842*/
        v7[1].vtable0 = 0; /*0x43a847*/
        v7[1].vtable1 = 0; /*0x43a84a*/
        v7[1].vtable2 = 0; /*0x43a84d*/
        v7[1].vtable3 = *(void **)&stru_A8EB00.?[416]; /*0x43a856*/
        v7->vtable0 = &NeuronClass::`vftable'; /*0x43a859*/
        v7->vtable1 = &NeuronClass::`vftable'; /*0x43a85f*/
        v7->vtable2 = &NeuronClass::`vftable'; /*0x43a866*/
        v7->vtable3 = &NeuronClass::`vftable'; /*0x43a86d*/
        if ( g_BuildingLoadQueue_Array.?[1] < g_BuildingLoadQueue_Array.? /*0x43a8a5*/
          || (BYTE1(g_BuildingLoadQueue_Array.?[0]) || !g_BuildingLoadQueue_Array.?)
          && g_BuildingLoadQueue_Array.?[2] > 0
          && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_BuildingLoadQueue_Array.?[2] + 8))(
               &g_BuildingLoadQueue_Array.?[2],
               g_BuildingLoadQueue_Array.? + g_BuildingLoadQueue_Array.?[2],
               0) )
        {
          v8 = g_BuildingLoadQueue_Array.?[1]++; /*0x43a8b2*/
          *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v8) = v7; /*0x43a8c1*/
        }
        if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x43a8f8*/
          || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
          && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
               &g_BuildingLoadQueue_Array.LightVisibility,
               g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
               0) )
        {
          v9 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x43a905*/
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v9) = v7; /*0x43a914*/
        }
        result = (*((int (__stdcall **)(AbstractClass *, _DWORD *))v7->vtable0 + 5))(v7, v2); /*0x43a91b*/
        if ( result < 0 ) /*0x43a920*/
          return result; /*0x43a920*/
        if ( this->abstractFlags < (int)this->NeedsSaveOrLink ) /*0x43a92a*/
        {
          vtable3 = this->vtable3; /*0x43a92c*/
          if ( this->abstractFlags < (int)vtable3 /*0x43a951*/
            || (BYTE1(this->uniqueId) || !vtable3)
            && (nextArrayIndex = this->nextArrayIndex, nextArrayIndex > 0)
            && (*((unsigned __int8 (__thiscall **)(void **, int, _DWORD))this->vtable1 + 2))(
                 &this->vtable1,
                 (int)vtable3 + nextArrayIndex,
                 0) )
          {
            abstractFlags = this->abstractFlags; /*0x43a958*/
            vtable2 = this->vtable2; /*0x43a95b*/
            this->abstractFlags = abstractFlags + 1; /*0x43a961*/
            vtable2[abstractFlags] = v7; /*0x43a964*/
          }
          v2 = a2; /*0x43a967*/
          v7[1].vtable2 = this; /*0x43a96b*/
        }
        if ( ++v15 >= v14 ) /*0x43a97d*/
          return 0; /*0x43a97d*/
      }
      return -2147024882; /*0x43a987*/
    }
  }
  return result; /*0x43a7f3*/
}



// ==== 0x0043A9A0  NeuronClass::StubReturn60  this=NeuronClass  sig=csp ====
int NeuronClass::StubReturn60(NeuronClass *this)
{
  return 60; /*0x43a9a5*/
}



// ==== 0x0043A9B0  NeuronClass::StubReturn56  this=NeuronClass  sig=csp ====
int NeuronClass::StubReturn56(NeuronClass *this)
{
  return 56; /*0x43a9b5*/
}



// ==== 0x0043A9C0  NeuronClass::Reset  this=NeuronClass  sig=csp ====
_DWORD *__thiscall NeuronClass::Reset(NeuronClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  NeuronClass *v6; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this->__pad_0 = &NeuronClass::`vftable'; /*0x43a9cd*/
  this->NeuronClass_field_0x04 = (int)&NeuronClass::`vftable'; /*0x43a9d3*/
  this->NeuronClass_field_0x08 = (int)&NeuronClass::`vftable'; /*0x43a9da*/
  this->NeuronClass_field_0x0C = (int)&NeuronClass::`vftable'; /*0x43a9e1*/
  v6 = this; /*0x43a9ef*/
  v3 = (*(int (__thiscall **)(int *, NeuronClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x43a9f3*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v6);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x43aa03*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x43aa08*/
    for ( ; /*0x43aa0e*/
          v3 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v3) )
    {
      ++v3; /*0x43aa16*/
    }
  }
  v6 = this; /*0x43aa38*/
  v4 = (*(int (__thiscall **)(char *, NeuronClass **))(*(_DWORD *)&g_BuildingLoadQueue_Array.?[2] + 16))( /*0x43aa3c*/
         &g_BuildingLoadQueue_Array.?[2],
         &v6);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.?[1] ) /*0x43aa4c*/
  {
    --g_BuildingLoadQueue_Array.?[1]; /*0x43aa51*/
    for ( ; /*0x43aa57*/
          v4 < g_BuildingLoadQueue_Array.?[1];
          *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v4 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v4) )
    {
      ++v4; /*0x43aa5f*/
    }
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x43aa73*/
  if ( (a2 & 1) != 0 ) /*0x43aa7d*/
    __3_YAXPAX_Z(this); /*0x43aa80*/
  return this->__pad_0; /*0x43aa8a*/
}



// ==== 0x0043AA90  BrainClass::method_43AA90  this=BrainClass  sig=csp ====
_DWORD *__thiscall sub_43AA90(BrainClass *this, char a2)
{
  int v3; // esi
  int v4; // ebp
  int v5; // ecx
  void *v6; // eax

  v3 = 0; /*0x43aa95*/
  this->vfptr = (int)&BrainClass::`vftable'; /*0x43aa97*/
  v4 = *((_DWORD *)this + 5); /*0x43aa9d*/
  if ( v4 > 0 ) /*0x43aaa2*/
  {
    do /*0x43aac3*/
    {
      v5 = *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v3); /*0x43aaa7*/
      if ( v5 ) /*0x43aaac*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x43aab2*/
      ++v3; /*0x43aab8*/
      *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v3 - 4) = 0; /*0x43aabb*/
    }
    while ( v3 < v4 ); /*0x43aac3*/
  }
  (*(void (__thiscall **)(BrainClass *))(*((_DWORD *)this + 1) + 12))(this + 1); /*0x43aacd*/
  v6 = (void *)*((_DWORD *)this + 2); /*0x43aad0*/
  *((_DWORD *)this + 1) = &VectorClass<NeuronClass *>::`vftable'; /*0x43aad3*/
  if ( v6 && *((_BYTE *)this + 17) ) /*0x43aadd*/
  {
    __3_YAXPAX_Z(v6); /*0x43aae5*/
    *((_DWORD *)this + 2) = 0; /*0x43aaed*/
  }
  *((_BYTE *)this + 17) = 0; /*0x43aaf8*/
  *((_DWORD *)this + 3) = 0; /*0x43aafe*/
  if ( (a2 & 1) != 0 ) /*0x43ab05*/
    __3_YAXPAX_Z(this); /*0x43ab08*/
  return &this->vfptr; /*0x43ab12*/
}



// ==== 0x0043AB20  _VectorClass_PAVNeuronClass::Update  this=VectorClass  sig=csp ====
int __thiscall NeuronClass_25::Update(_VectorClass_PAVNeuronClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x43ab2a*/
}



// ==== 0x0043AB30  _VectorClass_PAVNeuronClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall NeuronClass_25::AddRef(_VectorClass_PAVNeuronClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x43ab32*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x43ab3d*/
  {
    v3 = 0; /*0x43ab3f*/
    if ( m_8 <= 0 ) /*0x43ab43*/
      return 1; /*0x43ab63*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x43ab45*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x43ab4b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x43ab54*/
    {
      ++v3; /*0x43ab56*/
      ++v4; /*0x43ab57*/
      if ( v3 >= m_8 ) /*0x43ab5c*/
        return 1; /*0x43ab5c*/
    }
  }
  return 0; /*0x43ab5e*/
}



// ==== 0x0043AB70  _VectorClass_PAVNeuronClass::Release  this=VectorClass  sig=csp ====
char __thiscall NeuronClass_25::Release(_VectorClass_PAVNeuronClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x43ab7c*/
  {
    LOBYTE(this->m_C) = 0; /*0x43ab86*/
    if ( a3 ) /*0x43ab8c*/
      v4 = a3; /*0x43aba2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x43ab9e*/
    LOBYTE(this->m_C) = 1; /*0x43aba6*/
    if ( v4 ) /*0x43abaa*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x43abb5*/
      {
        m_8 = this->m_8; /*0x43abbc*/
        if ( a2 < m_8 ) /*0x43abc1*/
          m_8 = a2; /*0x43abc3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x43abc9*/
          ++i; /*0x43abce*/
        if ( BYTE1(this->m_C) ) /*0x43abdb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x43abe6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x43abee*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x43abf7*/
      this->m_8 = a2; /*0x43abff*/
      BYTE1(this->m_C) = a3 == 0; /*0x43ac02*/
      return 1; /*0x43ac08*/
    }
    else
    {
      return 0; /*0x43abaf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVNeuronClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x43ac12*/
    return 1; /*0x43ac18*/
  }
}



// ==== 0x0043AC20  _VectorClass_PAVNeuronClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall NeuronClass_25::ddtor(_VectorClass_PAVNeuronClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x43ac2d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x43ac33*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x43ac3b*/
  }
  BYTE1(this->m_C) = 0; /*0x43ac3e*/
  this->m_8 = 0; /*0x43ac41*/
}



// ==== 0x0043AC50  _VectorClass_PAVNeuronClass::Activate  this=VectorClass  sig=csp ====
int __thiscall NeuronClass_25::Activate(_VectorClass_PAVNeuronClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x43ac50*/
    return 0; /*0x43ac58*/
  m_8 = this->m_8; /*0x43ac5e*/
  result = 0; /*0x43ac61*/
  if ( m_8 <= 0 ) /*0x43ac65*/
    return -1; /*0x43ac7c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x43ac6b*/
  {
    if ( ++result >= m_8 ) /*0x43ac7a*/
      return -1; /*0x43ac7a*/
  }
  return result; /*0x43ac5a*/
}



// ==== 0x0043AC90  _VectorClass_PAVNeuronClass::Fire  this=VectorClass  sig=csp ====
unsigned int __thiscall NeuronClass_25::Fire(_VectorClass_PAVNeuronClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x43ac90*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x43aca5*/
  else
    return 0; /*0x43ac97*/
}



// ==== 0x0043ACB0  _VectorClass_PAVNeuronClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall NeuronClass_25::QueryInterface(_VectorClass_PAVNeuronClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x43acb3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<NeuronClass *>::`vftable'; /*0x43acb6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x43acc0*/
  {
    __3_YAXPAX_Z(v3); /*0x43acc8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x43acd0*/
  }
  BYTE1(this->m_C) = 0; /*0x43acdb*/
  this->m_8 = 0; /*0x43ace1*/
  if ( (a2 & 1) != 0 ) /*0x43ace8*/
    __3_YAXPAX_Z(this); /*0x43aceb*/
  return this->__pad_0; /*0x43acf5*/
}



// ==== 0x0043AD00  Buffer::Init  this=Buffer  sig=csp ====
_DWORD *__thiscall Buffer::Init(Buffer *this, int a2, int Size)
{
  this->Buffer_field_00 = a2; /*0x43ad0d*/
  this->Buffer_field_04 = Size; /*0x43ad0f*/
  LOBYTE(this->Buffer_field_08) = 0; /*0x43ad12*/
  if ( !a2 && Size > 0 ) /*0x43ad1a*/
  {
    this->Buffer_field_00 = __2_YAPAXI_Z(Size); /*0x43ad25*/
    LOBYTE(this->Buffer_field_08) = 1; /*0x43ad27*/
  }
  return &this->Buffer_field_00; /*0x43ad2d*/
}



// ==== 0x0043ADC0  INIClass::loadFile  this=INIClass  sig=csp ====
_DWORD *__thiscall INIClass::loadFile(INIClass *this, int Size)
{
  *(_DWORD *)this->__pad_0 = 0; /*0x43adc9*/
  this->headNode[0] = Size; /*0x43adcf*/
  LOBYTE(this->headNode[1]) = 0; /*0x43add2*/
  if ( Size > 0 ) /*0x43add6*/
  {
    *(_DWORD *)this->__pad_0 = __2_YAPAXI_Z(Size); /*0x43ade1*/
    LOBYTE(this->headNode[1]) = 1; /*0x43ade3*/
  }
  return this->__pad_0; /*0x43ade9*/
}



// ==== 0x0043ADF0  ObjectClass::method_43ADF0  this=ObjectClass  sig=csp ====
_BYTE *__thiscall sub_43ADF0(ObjectClass *this, _DWORD *a2)
{
  LOBYTE(this->?) = 0; /*0x43adf6*/
  this->AbstractClass = (void *)*a2; /*0x43adfc*/
  this->? = (void *)a2[1]; /*0x43ae01*/
  return this; /*0x43ae04*/
}



// ==== 0x0043AE10  StaticButtonClass::ReleaseBuffer  this=StaticButtonClass  sig=csp ====
int __thiscall sub_43AE10(int this, _DWORD *a2)
{
  if ( a2 != (_DWORD *)this ) /*0x43ae1a*/
  {
    if ( *(_BYTE *)(this + 8) ) /*0x43ae1c*/
      __3_YAXPAX_Z(*(void **)this); /*0x43ae26*/
    *(_BYTE *)(this + 8) = 0; /*0x43ae2e*/
    *(_DWORD *)this = *a2; /*0x43ae34*/
    *(_DWORD *)(this + 4) = a2[1]; /*0x43ae39*/
  }
  return this; /*0x43ae3e*/
}



// ==== 0x0043AE50  Vector::Clear  this=Vector  sig=csp ====
int __thiscall Vector::Clear(int this)
{
  int result; // eax

  LOBYTE(result) = *(_BYTE *)(this + 8); /*0x43ae53*/
  if ( (_BYTE)result ) /*0x43ae58*/
    __3_YAXPAX_Z(*(void **)this); /*0x43ae5d*/
  *(_DWORD *)this = 0; /*0x43ae65*/
  *(_DWORD *)(this + 4) = 0; /*0x43ae6b*/
  *(_BYTE *)(this + 8) = 0; /*0x43ae72*/
  return result; /*0x43ae76*/
}



// ==== 0x0043AF10  ObjectClass::method_43AF10  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_43AF10(ObjectClass *this)
{
  this->AbstractClass = 0; /*0x43af14*/
  this->? = 0; /*0x43af16*/
  LOBYTE(this->?) = 0; /*0x43af19*/
  return &this->AbstractClass; /*0x43af1c*/
}



// ==== 0x0043AF40  sub_43AF40  this=-  sig=ida-proto ====
void sub_43AF40()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x43af4c*/
  dbl_89C820 = Math::Sqrt(v0 + v0); /*0x43af5e*/
}



// ==== 0x0043AF70  sub_43AF70  this=-  sig=ida-proto ====
void sub_43AF70()
{
  dbl_89C880 = dbl_89C820 / 60.0; /*0x43af7c*/
}



// ==== 0x0043AF90  sub_43AF90  this=-  sig=ida-proto ====
void sub_43AF90()
{
  dbl_89C868 = 1.0 / dbl_89C880; /*0x43af9c*/
}



// ==== 0x0043AFB0  sub_43AFB0  this=-  sig=ida-proto ====
void sub_43AFB0()
{
  dbl_89C860 = 0.0174532925199433 * 45.0; /*0x43afbc*/
}



// ==== 0x0043AFD0  sub_43AFD0  this=-  sig=ida-proto ====
void sub_43AFD0()
{
  dbl_89C830 = 0.0174532925199433 * 60.0; /*0x43afdc*/
}



// ==== 0x0043AFF0  sub_43AFF0  this=-  sig=ida-proto ====
void sub_43AFF0()
{
  dbl_89C7F8 = 0.0174532925199433 * 90.0; /*0x43affc*/
}



// ==== 0x0043B010  sub_43B010  this=-  sig=ida-proto ====
__int64 sub_43B010()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89C7F8 - dbl_89C830); /*0x43b022*/
  result = Math::RoundToInt(v0 * dbl_89C820 * 0.5); /*0x43b036*/
  dword_89C888 = result; /*0x43b03b*/
  return result; /*0x43b040*/
}



// ==== 0x0043B050  sub_43B050  this=-  sig=ida-proto ====
void sub_43B050()
{
  dbl_89C840 = Math::ArcTan((double)dword_89C888 * 0.00390625); /*0x43b067*/
}



// ==== 0x0043B080  sub_43B080  this=-  sig=ida-proto ====
void sub_43B080()
{
  dbl_89C858 = Math::ArcTan((double)(2 * dword_89C888) / dbl_89C820); /*0x43b0a2*/
}



// ==== 0x0043B0B0  sub_43B0B0  this=-  sig=ida-proto ====
__int64 sub_43B0B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C888) + 0.5); /*0x43b0cb*/
  dword_89C87C = result; /*0x43b0d0*/
  return result; /*0x43b0d6*/
}



// ==== 0x0043B0E0  sub_43B0E0  this=-  sig=ida-proto ====
int sub_43B0E0()
{
  g_TerrainTypeTable = 0; /*0x43b0e2*/
  return 0; /*0x43b0ee*/
}



// ==== 0x0043B0F0  sub_43B0F0  this=-  sig=ida-proto ====
int sub_43B0F0()
{
  g_BuildingClassPool = 0; /*0x43b0f2*/
  dword_89C84C = 0; /*0x43b0f7*/
  dword_89C850 = 0; /*0x43b0fc*/
  return 0; /*0x43b101*/
}



// ==== 0x0043B110  sub_43B110  this=-  sig=ida-proto ====
int sub_43B110()
{
  dword_89C878 = 0; /*0x43b115*/
  dword_89C870 = 128; /*0x43b11f*/
  dword_89C874 = 128; /*0x43b124*/
  return 128; /*0x43b129*/
}



// ==== 0x0043B130  sub_43B130  this=-  sig=ida-proto ====
int sub_43B130()
{
  dword_89C808 = 0; /*0x43b132*/
  dword_89C80C = 0; /*0x43b137*/
  dword_89C810 = 0; /*0x43b13c*/
  dword_89C814 = 0; /*0x43b141*/
  return 0; /*0x43b146*/
}



// ==== 0x0043B150  ObjectClass::DetectNearbyAlliedThreat  this=ObjectClass  sig=csp ====
bool __thiscall DetectNearbyAlliedThreat(TechnoClass *this)
{
  double v1; // st7
  TechnoClass *v2; // ebx
  int v3; // eax
  _DWORD *v4; // esi
  int target; // edi
  int *v6; // eax
  int v7; // ebx
  int v8; // edx
  int v9; // ebp
  _DWORD *v10; // edi
  _DWORD *v11; // eax
  bool result; // al
  int *v13; // eax
  int v14; // ebx
  int v15; // ebp
  int *Coords; // edi
  _DWORD *v17; // eax
  int spawnStatus; // eax
  CellClass *v19; // edi
  int *v20; // eax
  int v21; // ebx
  int v22; // ebp
  int *v23; // edi
  int *v24; // eax
  int v25; // eax
  int *v26; // eax
  int v27; // ebp
  int v28; // ebx
  int v29; // edx
  int mapCoords; // eax
  _DWORD *v31; // edi
  _DWORD *v32; // eax
  int i; // [esp+28h] [ebp-F8h]
  int v35; // [esp+2Ch] [ebp-F4h]
  _DWORD v36[3]; // [esp+3Ch] [ebp-E4h] BYREF
  _DWORD v37[3]; // [esp+48h] [ebp-D8h] BYREF
  _DWORD v38[5]; // [esp+54h] [ebp-CCh] BYREF
  int v39; // [esp+68h] [ebp-B8h]
  int v40; // [esp+74h] [ebp-ACh]
  int v41; // [esp+80h] [ebp-A0h]
  int v42; // [esp+8Ch] [ebp-94h]
  int v43[3]; // [esp+90h] [ebp-90h] BYREF
  char v44[12]; // [esp+9Ch] [ebp-84h] BYREF
  char v45[12]; // [esp+A8h] [ebp-78h] BYREF
  int v46[3]; // [esp+B4h] [ebp-6Ch] BYREF
  char v47[12]; // [esp+C0h] [ebp-60h] BYREF
  int v48[3]; // [esp+CCh] [ebp-54h] BYREF
  int v49[3]; // [esp+D8h] [ebp-48h] BYREF
  char v50[12]; // [esp+E4h] [ebp-3Ch] BYREF
  char v51[12]; // [esp+F0h] [ebp-30h] BYREF
  char v52[12]; // [esp+FCh] [ebp-24h] BYREF
  int v53[3]; // [esp+108h] [ebp-18h] BYREF
  int v54[3]; // [esp+114h] [ebp-Ch] BYREF

  v2 = this; /*0x43b15d*/
  if ( !(unsigned __int8)HouseClass::IsAlliedWith((HouseClass *)dword_A83D4C) )
  {
    v3 = 0; /*0x43b18b*/
    v35 = *(_DWORD *)&dword_A83D4C->__pad_EC[76]; /*0x43b18f*/
    for ( i = 0; i < v35; ++i )
    {
      v4 = *(_DWORD **)(*(_DWORD *)&dword_A83D4C->__pad_EC[64] + 4 * v3); /*0x43b1a9*/
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v4 + 848))(v4) ) /*0x43b1b8*/
        goto LABEL_23; /*0x43b1b8*/
      target = v2->target; /*0x43b1be*/
      if ( target ) /*0x43b1c6*/
      {
        if ( (*(_BYTE *)(target + 20) & 1) != 0 ) /*0x43b1d0*/
        {
          v6 = (int *)(*(int (__thiscall **)(_DWORD *, char *))(*v4 + 72))(v4, v51); /*0x43b1e2*/
          v7 = *v6; /*0x43b1e5*/
          v8 = *(_DWORD *)target; /*0x43b1e7*/
          v9 = v6[1]; /*0x43b1e9*/
          v42 = v6[2]; /*0x43b1f6*/
          v10 = (_DWORD *)(*(int (__thiscall **)(int, char *))(v8 + 72))(target, v45); /*0x43b200*/
          v11 = Coord::Subtract((Coord *)v53, v7 - *v10, v9 - v10[1], v42 - v10[2]); /*0x43b21c*/
          v36[0] = *v11; /*0x43b223*/
          v36[1] = v11[1]; /*0x43b22e*/
          v36[2] = v11[2]; /*0x43b235*/
          result = (int)Coord::Length((Coord *)v36) <= *(_DWORD *)(v4[328] + 5900) << 8; /*0x43b24f*/
          if ( result ) /*0x43b254*/
            return result; /*0x43b254*/
LABEL_10:
          v2 = this; /*0x43b2f8*/
          goto LABEL_11; /*0x43b2f8*/
        }
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)target + 44))(v2->target) == 11 ) /*0x43b26e*/
        {
          v13 = (int *)(*(int (__thiscall **)(_DWORD *, char *))(*v4 + 72))(v4, v47); /*0x43b280*/
          v14 = *v13; /*0x43b283*/
          v15 = v13[1]; /*0x43b28d*/
          v41 = v13[2]; /*0x43b293*/
          Coords = CellClass::GetCoords((CellClass *)target, v43); /*0x43b29e*/
          v17 = Coord::Subtract((Coord *)v49, v14 - *Coords, v15 - Coords[1], v41 - Coords[2]); /*0x43b2ba*/
          v37[0] = *v17; /*0x43b2c1*/
          v37[1] = v17[1]; /*0x43b2cc*/
          v37[2] = v17[2]; /*0x43b2d3*/
          result = (int)Coord::Length((Coord *)v37) <= *(_DWORD *)(v4[328] + 5900) << 8; /*0x43b2ed*/
          if ( result ) /*0x43b2f2*/
            return result; /*0x43b2f2*/
          goto LABEL_10; /*0x43b2f2*/
        }
      }
LABEL_11:
      if ( !v2 || (v2->abstractFlags & 4) == 0 ) /*0x43b310*/
        goto LABEL_23; /*0x43b310*/
      spawnStatus = v2[1].spawnStatus; /*0x43b316*/
      v19 = spawnStatus ? *(CellClass **)(v2[1].health + 4 * spawnStatus - 4) : *(CellClass **)v2[1].hasParachute;
      if ( !v19 ) /*0x43b334*/
        goto LABEL_23; /*0x43b334*/
      if ( (*(int (__thiscall **)(CellClass *))(v19->mapCoords + 44))(v19) == 11 ) /*0x43b349*/
      {
        v20 = (int *)(*(int (__thiscall **)(_DWORD *, char *))(*v4 + 72))(v4, v44); /*0x43b35b*/
        v21 = *v20; /*0x43b35e*/
        v22 = v20[1]; /*0x43b362*/
        v40 = v20[2]; /*0x43b370*/
        v23 = CellClass::GetCoords(v19, v46); /*0x43b379*/
        v24 = Coord::Subtract((Coord *)v48, v21 - *v23, v22 - v23[1], v40 - v23[2]); /*0x43b395*/
        Math::Sqrt((double)*v24 * (double)*v24 + (double)v24[2] * (double)v24[2] + (double)v24[1] * (double)v24[1]); /*0x43b3d6*/
        LOWORD(v25) = Math::RoundToInt(v1); /*0x43b3de*/
        result = v25 <= *(_DWORD *)(v4[328] + 5900) << 8; /*0x43b3f4*/
        if ( result ) /*0x43b3f9*/
          return result; /*0x43b3f9*/
LABEL_22:
        v2 = this; /*0x43b48e*/
        goto LABEL_23; /*0x43b48e*/
      }
      if ( (v19->isoTileTypeIndex & 1) != 0 ) /*0x43b408*/
      {
        v26 = (int *)(*(int (__thiscall **)(_DWORD *, char *))(*v4 + 72))(v4, v50); /*0x43b41a*/
        v27 = *v26; /*0x43b41d*/
        v28 = v26[1]; /*0x43b429*/
        v29 = v26[2]; /*0x43b42c*/
        mapCoords = v19->mapCoords; /*0x43b42f*/
        v39 = v29; /*0x43b431*/
        v31 = (_DWORD *)(*(int (__thiscall **)(CellClass *, char *))(mapCoords + 72))(v19, v52); /*0x43b438*/
        v32 = Coord::Subtract((Coord *)v54, v27 - *v31, v28 - v31[1], v39 - v31[2]); /*0x43b454*/
        v38[0] = *v32; /*0x43b45b*/
        v38[1] = v32[1]; /*0x43b462*/
        v38[2] = v32[2]; /*0x43b46d*/
        result = (int)Coord::Length((Coord *)v38) <= *(_DWORD *)(v4[328] + 5900) << 8; /*0x43b487*/
        if ( result ) /*0x43b48c*/
          return result; /*0x43b48c*/
        goto LABEL_22; /*0x43b48c*/
      }
LABEL_23:
      v3 = i + 1; /*0x43b492*/
    }
  }
  return 0; /*0x43b4a9*/
}



// ==== 0x0043B4C0  Cell::CanPlaceBuilding  this=Cell  sig=csp ====
char __fastcall Cell::CanPlaceBuilding(#375 *this, _DWORD *a2)
{
  int v2; // esi
  int v3; // edi
  _DWORD *v4; // ebp
  int *v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // ebx
  int *Coords; // eax
  double v10; // st7
  int v12; // [esp+1Ch] [ebp-30h]
  int v14; // [esp+24h] [ebp-28h]
  char v15[12]; // [esp+34h] [ebp-18h] BYREF
  char v16[12]; // [esp+40h] [ebp-Ch] BYREF

  if ( (unsigned __int8)HouseClass::IsAlliedWith(dword_A83D4C, this) ) /*0x43b4d8*/
    return 0; /*0x43b4d8*/
  v2 = 0; /*0x43b4ea*/
  v12 = 0; /*0x43b4ec*/
  v3 = *((_DWORD *)dword_A83D4C + 78); /*0x43b4f0*/
  v14 = v3; /*0x43b4f8*/
  if ( v3 <= 0 ) /*0x43b4fc*/
    return 0; /*0x43b5c9*/
  while ( 1 ) /*0x43b50e*/
  {
    v4 = *(_DWORD **)(*((_DWORD *)dword_A83D4C + 75) + 4 * v2); /*0x43b50e*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v4 + 848))(v4) ) /*0x43b516*/
      break; /*0x43b516*/
LABEL_6:
    v12 = ++v2; /*0x43b5b6*/
    if ( v2 >= v3 ) /*0x43b5ba*/
      return 0; /*0x43b5ba*/
  }
  v5 = (int *)(*(int (__thiscall **)(_DWORD *, char *))(*v4 + 72))(v4, v15); /*0x43b52e*/
  v6 = *v5; /*0x43b531*/
  v7 = v5[1]; /*0x43b53c*/
  v8 = v5[2]; /*0x43b53f*/
  Coords = CellClass::GetCoords(a2, (int *)v16); /*0x43b542*/
  v10 = Math::Sqrt( /*0x43b58b*/
          (double)(v6 - *Coords) * (double)(v6 - *Coords)
        + (double)(v7 - Coords[1]) * (double)(v7 - Coords[1])
        + (double)(v8 - Coords[2]) * (double)(v8 - Coords[2]));
  if ( (int)Math::RoundToInt(v10) > *(_DWORD *)(v4[328] + 5900) << 8 ) /*0x43b5a9*/
  {
    v2 = v12; /*0x43b5ab*/
    v3 = v14; /*0x43b5af*/
    goto LABEL_6; /*0x43b5af*/
  }
  return 1; /*0x43b5c2*/
}



// ==== 0x0043B5E0  HouseClass::PsiWarn  this=HouseClass  sig=csp ====
void **__fastcall HouseClass::PsiWarn(int a1, int a2, int a3, AnimTypeClass *a4)
{
  void *v6; // edi
  int *v7; // eax
  AnimClass *v8; // eax
  void **v9; // esi
  int v11[3]; // [esp+Ch] [ebp-18h] BYREF
  _BYTE v12[12]; // [esp+18h] [ebp-Ch] BYREF

  v6 = (void *)*((_DWORD *)dword_8B4154 + AnimTypeClass::FindIndex(a4)); /*0x43b5fb*/
  v7 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 72))(a2, v12); /*0x43b605*/
  v11[0] = *v7; /*0x43b60a*/
  v11[1] = v7[1]; /*0x43b616*/
  v11[2] = v7[2]; /*0x43b61d*/
  v8 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x43b621*/
  if ( v8 ) /*0x43b62b*/
    v9 = AnimClass::ctor(v8, v6, v11, 0, 1, (void *)0x600, 0, 0); /*0x43b647*/
  else
    v9 = 0; /*0x43b64b*/
  BuildingClass::SetField95((BuildingClass *)v9, a3); /*0x43b654*/
  Function::Method_424CA0((Function *)v9, a1); /*0x43b65c*/
  *((_BYTE *)v9 + 413) = 1; /*0x43b661*/
  return v9; /*0x43b66a*/
}



// ==== 0x0043B680  BuildingClass::ctor  this=BuildingClass  sig=csp ====
_DWORD *__thiscall BuildingClass::ctor(BuildingClass *this, int a2)
{
  int v3; // ecx

  TechnoClass::Constructor((TechnoClass *)this, a2); /*0x43b688*/
  this->RepairProgress[0] = 0; /*0x43b694*/
  LOBYTE(this->RepairProgress[1]) = 0; /*0x43b69a*/
  v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x43b6a0*/
  *(_DWORD *)&this->__pad_628[8] = 0; /*0x43b6a6*/
  *(_DWORD *)this->__pad_628 = v3; /*0x43b6ac*/
  *(_DWORD *)&this->__pad_628[12] = 0; /*0x43b6b7*/
  *(_DWORD *)&this->__pad_628[16] = 1; /*0x43b6bd*/
  this->Occupants[0] = 0; /*0x43b6c3*/
  this->FiringOccupantIndex = 0; /*0x43b6c9*/
  LOBYTE(this->Audio7[0]) = 1; /*0x43b6cf*/
  BYTE1(this->Audio7[0]) = 0; /*0x43b6d5*/
  this->Overpowerers[0] = (int)&DynamicVectorClass<InfantryClass *>::`vftable'; /*0x43b6db*/
  this->Audio7[2] = 10; /*0x43b6e5*/
  this->Audio7[1] = 0; /*0x43b6eb*/
  this->Audio7[4] = 0; /*0x43b6f1*/
  this->Audio8[0] = 0; /*0x43b6f7*/
  LOBYTE(this->Audio8[1]) = 1; /*0x43b6fd*/
  BYTE1(this->Audio8[1]) = 0; /*0x43b703*/
  this->Audio7[3] = (int)&DynamicVectorClass<InfantryClass *>::`vftable'; /*0x43b709*/
  this->Audio8[3] = 10; /*0x43b713*/
  this->Audio8[2] = 0; /*0x43b719*/
  this->TechnoClass = &BuildingClass_Vtable; /*0x43b71f*/
  this->? = &BuildingClass_Vtable2; /*0x43b725*/
  this->? = &BuildingClass_Vtable3; /*0x43b72c*/
  this->? = &BuildingClass_Vtable4; /*0x43b733*/
  return &this->TechnoClass; /*0x43b73c*/
}



// ==== 0x0043B740  BuildingClass::Construct  this=AbstractClass  sig=csp ====
int __thiscall BuildingClass::Construct(int this, int a2, int a3)
{
  int v4; // edx
  int v5; // edx
  __int16 v6; // cx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int vtable2; // ebp
  _DWORD *v12; // edi
  int v13; // eax
  _DWORD *v14; // ecx
  int v15; // eax
  int v16; // eax
  int Vtable3; // [esp+18h] [ebp+4h]

  TechnoClass::TechnoClass((TechnoClass *)this, a3); /*0x43b74b*/
  *(_DWORD *)(this + 1312) = a2; /*0x43b756*/
  *(_DWORD *)(this + 1316) = 0; /*0x43b75c*/
  *(_DWORD *)(this + 1320) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x43b76b*/
  *(_DWORD *)(this + 1328) = 0; /*0x43b771*/
  *(_DWORD *)(this + 1332) = -1; /*0x43b777*/
  *(_DWORD *)(this + 1336) = -1; /*0x43b77d*/
  *(_DWORD *)(this + 1340) = 0; /*0x43b783*/
  *(_DWORD *)(this + 1344) = 0; /*0x43b789*/
  *(_DWORD *)(this + 1348) = 0; /*0x43b78f*/
  *(_DWORD *)(this + 1352) = 0; /*0x43b795*/
  *(_DWORD *)(this + 1356) = 0; /*0x43b79b*/
  *(_DWORD *)(this + 1360) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x43b7a7*/
  *(_DWORD *)(this + 1368) = 0; /*0x43b7ad*/
  *(_BYTE *)(this + 1512) = 0; /*0x43b7b3*/
  *(_DWORD *)(this + 1528) = -1; /*0x43b7b9*/
  *(_DWORD *)(this + 1532) = -1; /*0x43b7bf*/
  *(_DWORD *)(this + 1536) = 0; /*0x43b7c5*/
  v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x43b7cb*/
  *(_DWORD *)(this + 1548) = 0; /*0x43b7d1*/
  *(_DWORD *)(this + 1540) = v4; /*0x43b7d7*/
  *(_DWORD *)(this + 1552) = 0; /*0x43b7dd*/
  *(_DWORD *)(this + 1556) = 0; /*0x43b7e3*/
  *(_DWORD *)(this + 1560) = 0; /*0x43b7e9*/
  *(_DWORD *)(this + 1564) = 0; /*0x43b7ef*/
  *(_DWORD *)(this + 1568) = 0; /*0x43b7f5*/
  *(_BYTE *)(this + 1572) = 0; /*0x43b7fb*/
  *(_DWORD *)(this + 1576) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x43b807*/
  *(_DWORD *)(this + 1584) = 0; /*0x43b80d*/
  *(_DWORD *)(this + 1588) = 0; /*0x43b813*/
  *(_DWORD *)(this + 1592) = 1; /*0x43b819*/
  *(_DWORD *)(this + 1596) = dword_89C808; /*0x43b82f*/
  *(_DWORD *)(this + 1600) = dword_89C80C; /*0x43b83b*/
  *(_DWORD *)(this + 1604) = dword_89C810; /*0x43b844*/
  *(_DWORD *)(this + 1608) = dword_89C814; /*0x43b84d*/
  *(_DWORD *)(this + 1612) = g_BuildingClassPool; /*0x43b85c*/
  *(_DWORD *)(this + 1616) = dword_89C84C; /*0x43b868*/
  *(_DWORD *)(this + 1620) = dword_89C850; /*0x43b871*/
  *(_DWORD *)(this + 1624) = 0; /*0x43b876*/
  *(_DWORD *)(this + 1628) = 0; /*0x43b87c*/
  *(_BYTE *)(this + 1632) = 1; /*0x43b882*/
  *(_BYTE *)(this + 1633) = 0; /*0x43b889*/
  *(_BYTE *)(this + 1634) = 0; /*0x43b88f*/
  *(_DWORD *)(this + 1636) = 0; /*0x43b895*/
  *(_BYTE *)(this + 1640) = 0; /*0x43b89b*/
  *(_BYTE *)(this + 1641) = 0; /*0x43b8ab*/
  *(_DWORD *)(this + 1648) = 0; /*0x43b8b1*/
  *(_DWORD *)(this + 1652) = 0; /*0x43b8b7*/
  *(_BYTE *)(this + 1656) = 1; /*0x43b8bd*/
  *(_BYTE *)(this + 1657) = 0; /*0x43b8c4*/
  *(_DWORD *)(this + 1644) = &DynamicVectorClass<InfantryClass *>::`vftable'; /*0x43b8ca*/
  *(_DWORD *)(this + 1664) = 10; /*0x43b8d0*/
  *(_DWORD *)(this + 1660) = 0; /*0x43b8d6*/
  *(_DWORD *)(this + 1672) = 0; /*0x43b8dc*/
  *(_DWORD *)(this + 1676) = 0; /*0x43b8e2*/
  *(_BYTE *)(this + 1680) = 1; /*0x43b8e8*/
  *(_BYTE *)(this + 1681) = 0; /*0x43b8ef*/
  *(_DWORD *)(this + 1668) = &DynamicVectorClass<InfantryClass *>::`vftable'; /*0x43b8f5*/
  *(_DWORD *)(this + 1688) = 10; /*0x43b8fb*/
  *(_DWORD *)(this + 1684) = 0; /*0x43b901*/
  *(_DWORD *)(this + 1692) = 0; /*0x43b907*/
  *(_BYTE *)(this + 1736) = 0; /*0x43b90d*/
  *(_BYTE *)(this + 1737) = 0; /*0x43b913*/
  *(_BYTE *)(this + 1738) = 0; /*0x43b919*/
  *(_BYTE *)(this + 1739) = 0; /*0x43b91f*/
  *(_BYTE *)(this + 1740) = 0; /*0x43b925*/
  v5 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x43b92b*/
  *(_DWORD *)(this + 1752) = 0; /*0x43b931*/
  *(_DWORD *)(this + 1744) = v5; /*0x43b937*/
  *(_BYTE *)(this + 1756) = 1; /*0x43b93d*/
  *(_BYTE *)(this + 1757) = 0; /*0x43b944*/
  *(_BYTE *)(this + 1758) = 0; /*0x43b94d*/
  *(_BYTE *)(this + 1759) = 0; /*0x43b953*/
  *(_BYTE *)(this + 1760) = 0; /*0x43b95a*/
  *(_BYTE *)(this + 1761) = 0; /*0x43b960*/
  *(_BYTE *)(this + 1762) = 0; /*0x43b966*/
  *(_BYTE *)(this + 1763) = 0; /*0x43b96c*/
  *(_BYTE *)(this + 1764) = 0; /*0x43b972*/
  *(_BYTE *)(this + 1765) = 0; /*0x43b978*/
  *(_BYTE *)(this + 1766) = 0; /*0x43b97e*/
  *(_BYTE *)(this + 1767) = 0; /*0x43b984*/
  *(_BYTE *)(this + 1768) = 0; /*0x43b98a*/
  *(_BYTE *)(this + 1769) = 0; /*0x43b990*/
  *(_BYTE *)(this + 1770) = 1; /*0x43b996*/
  *(_BYTE *)(this + 1771) = 0; /*0x43b99d*/
  *(_BYTE *)(this + 1772) = 0; /*0x43b9a3*/
  *(_BYTE *)(this + 1773) = 0; /*0x43b9a9*/
  *(_DWORD *)(this + 1776) = 0; /*0x43b9af*/
  *(_DWORD *)(this + 1780) = 0; /*0x43b9b5*/
  *(_BYTE *)(this + 1784) = 0; /*0x43b9bb*/
  *(_BYTE *)(this + 1785) = 0; /*0x43b9c1*/
  *(_BYTE *)(this + 1786) = 0; /*0x43b9c7*/
  *(_DWORD *)(this + 1788) = 0; /*0x43b9cd*/
  *(_WORD *)(this + 1792) = 1000; /*0x43b9d3*/
  *(_BYTE *)(this + 1794) = 0; /*0x43b9dc*/
  *(_BYTE *)(this + 1795) = -1; /*0x43b9e2*/
  *(_DWORD *)(this + 1796) = 0; /*0x43b9e8*/
  *(_DWORD *)(this + 1812) = 0; /*0x43b9ee*/
  *(_DWORD *)(this + 1816) = 0; /*0x43b9f4*/
  *(_DWORD *)this = &BuildingClass_Vtable; /*0x43b9fa*/
  *(_DWORD *)(this + 4) = &BuildingClass_Vtable2; /*0x43ba00*/
  *(_DWORD *)(this + 8) = &BuildingClass_Vtable3; /*0x43ba07*/
  *(_DWORD *)(this + 12) = &BuildingClass_Vtable4; /*0x43ba0e*/
  AbstractClass::GenerateUniqueID((AbstractClass *)(this + 4)); /*0x43ba15*/
  *(_DWORD *)(this + 1516) = 0; /*0x43ba22*/
  LOBYTE(v6) = 0; /*0x43ba28*/
  *(_DWORD *)(this + 1520) = 0; /*0x43ba2a*/
  *(_DWORD *)(this + 1524) = 0; /*0x43ba30*/
  *(_DWORD *)(this + 1800) = 0; /*0x43ba36*/
  v7 = *(_DWORD *)(this + 1312); /*0x43ba38*/
  *(_DWORD *)(this + 1804) = 0; /*0x43ba3e*/
  *(_DWORD *)(this + 1808) = 0; /*0x43ba43*/
  if ( v7 ) /*0x43ba46*/
  {
    HIBYTE(v6) = *(_BYTE *)(v7 + 5904); /*0x43ba48*/
    LOWORD(a3) = v6; /*0x43ba52*/
    FacingClass::Update((char *)(this + 880), &a3); /*0x43ba5e*/
  }
  memset((void *)(this + 1372), 0, 0x54u); /*0x43ba70*/
  memset((void *)(this + 1480), 0, 0x20u); /*0x43ba7d*/
  *(_DWORD *)(this + 1456) = 0; /*0x43ba7f*/
  *(_DWORD *)(this + 1460) = 0; /*0x43ba8b*/
  *(_DWORD *)(this + 1464) = 0; /*0x43ba91*/
  *(_DWORD *)(this + 1468) = 0; /*0x43ba97*/
  *(_DWORD *)(this + 1472) = 0; /*0x43ba9d*/
  *(_BYTE *)(this + 1476) = 0; /*0x43baa3*/
  AudioController::Init((AudioController *)(this + 1696)); /*0x43baa9*/
  AudioController::Init((AudioController *)(this + 1716)); /*0x43bab4*/
  LOWORD(a3) = 0x4000; /*0x43babd*/
  FacingClass::Update((char *)(this + 880), &a3); /*0x43bacb*/
  *(_DWORD *)(this + 1568) = 0; /*0x43bad0*/
  if ( stru_A8EB00.ObjectTypeClass[20] < stru_A8EB00.ObjectTypeClass[18] /*0x43bb08*/
    || (BYTE1(stru_A8EB00.ObjectTypeClass[19]) || !stru_A8EB00.ObjectTypeClass[18])
    && stru_A8EB00.ObjectTypeClass[21] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_A8EB00.ObjectTypeClass[16] + 8))(
         &stru_A8EB00.ObjectTypeClass[16],
         stru_A8EB00.ObjectTypeClass[21] + stru_A8EB00.ObjectTypeClass[18],
         0) )
  {
    v8 = stru_A8EB00.ObjectTypeClass[20]++; /*0x43bb15*/
    *(_DWORD *)(stru_A8EB00.ObjectTypeClass[17] + 4 * v8) = this; /*0x43bb24*/
  }
  BuildingClass::Update((BuildingClass *)this); /*0x43bb29*/
  if ( g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[1] < g_BuildingLoadQueue_Array.BuildCat[0] /*0x43bb62*/
    || (BYTE1(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[0]) || !g_BuildingLoadQueue_Array.BuildCat[0])
    && g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[2] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.Buildup[0] + 8))(
         g_BuildingLoadQueue_Array.Buildup,
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[2] + g_BuildingLoadQueue_Array.BuildCat[0],
         0) )
  {
    v9 = g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[1]++; /*0x43bb6f*/
    *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.BuildupLoaded + 4 * v9) = this; /*0x43bb7e*/
  }
  if ( g_BuildingLoadQueue_Array.?[1] < g_BuildingLoadQueue_Array.? /*0x43bbb5*/
    || (BYTE1(g_BuildingLoadQueue_Array.?[0]) || !g_BuildingLoadQueue_Array.?)
    && g_BuildingLoadQueue_Array.?[2] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[0] + 8))(
         g_BuildingLoadQueue_Array.?,
         g_BuildingLoadQueue_Array.?[2] + g_BuildingLoadQueue_Array.?,
         0) )
  {
    v10 = g_BuildingLoadQueue_Array.?[1]++; /*0x43bbc2*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v10) = this; /*0x43bbd1*/
  }
  Vtable3 = AbstractClass::GetVtable3((AbstractClass *)(this + 4)); /*0x43bbe0*/
  if ( (int)g_BuildingLoadQueue_Array.? + 1 <= (int)g_BuildingLoadQueue_Array.? ) /*0x43bbec*/
    goto LABEL_29; /*0x43bbec*/
  if ( g_BuildingLoadQueue_Array.? ) /*0x43bbf4*/
  {
    vtable2 = (int)g_BuildingLoadQueue_Array.?; /*0x43bbfd*/
    if ( (int)g_BuildingLoadQueue_Array.? < 0 ) /*0x43bc01*/
      goto LABEL_30; /*0x43bc01*/
  }
  else
  {
    vtable2 = 10; /*0x43bbf6*/
  }
  a3 = (int)g_BuildingLoadQueue_Array.? + vtable2; /*0x43bc09*/
  v12 = (_DWORD *)__2_YAPAXI_Z(8 * ((int)g_BuildingLoadQueue_Array.? + vtable2)); /*0x43bc16*/
  if ( v12 ) /*0x43bc1d*/
  {
    v13 = 0; /*0x43bc27*/
    --a3; /*0x43bc2a*/
    if ( (int)g_BuildingLoadQueue_Array.? > 0 ) /*0x43bc36*/
    {
      do /*0x43bc57*/
      {
        v14 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v13++; /*0x43bc3e*/
        v12[2 * v13 - 2] = *v14; /*0x43bc44*/
        v12[2 * v13 - 1] = v14[1]; /*0x43bc4b*/
      }
      while ( v13 < (int)g_BuildingLoadQueue_Array.? ); /*0x43bc57*/
    }
    __3_YAXPAX_Z(g_BuildingLoadQueue_Array.TechnoTypeClass); /*0x43bc60*/
    g_BuildingLoadQueue_Array.TechnoTypeClass = v12; /*0x43bc6f*/
    g_BuildingLoadQueue_Array.? = (char *)g_BuildingLoadQueue_Array.? + vtable2; /*0x43bc75*/
    g_BuildingLoadQueue_Array.? = 0; /*0x43bc7a*/
LABEL_29:
    *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = Vtable3; /*0x43bc80*/
    *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = this; /*0x43bc9e*/
    LOBYTE(g_BuildingLoadQueue_Array.?) = 0; /*0x43bca8*/
    ++g_BuildingLoadQueue_Array.?; /*0x43bcae*/
  }
LABEL_30:
  v15 = *(_DWORD *)(this + 1312); /*0x43bcb3*/
  if ( v15 ) /*0x43bcbb*/
  {
    v16 = *(_DWORD *)(v15 + 6016); /*0x43bcbd*/
    if ( v16 < 1 ) /*0x43bcc6*/
      v16 = 1; /*0x43bcc8*/
    RadioClass::SetLinkCount((RadioClass *)this, v16); /*0x43bcd0*/
    return this; /*0x43bcd5*/
  }
  else
  {
    RadioClass::SetLinkCount((RadioClass *)this, 1); /*0x43bce2*/
    return this; /*0x43bce7*/
  }
}



// ==== 0x0043BCF0  BuildingClass::Dtor  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Dtor(BuildingClass *this)
{
  int *Audio8_2; // edi
  int v3; // edx
  LightSourceClass *LightSource; // ecx
  LightSourceClass *v5; // ecx
  int v6; // eax
  int v7; // eax
  int *DamageFireAnims; // edi
  int v9; // ebx
  BuildingTypeClass *Type; // eax
  char CloakRadius; // cl
  int SuperWeapon; // eax
  int v13; // eax
  int SuperWeapon2; // eax
  int v15; // eax
  HouseClass *owner; // ecx
  FactoryClass *Factory; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  signed int v21; // eax
  int v22; // ecx
  char *i; // eax
  _DWORD *v24; // eax
  int FiringOccupantIndex; // edi
  int v26; // ebx
  void *v27; // eax
  void *v28; // eax
  int Vtable3; // [esp+18h] [ebp-4h] BYREF

  Audio8_2 = this->Audio8_2; /*0x43bcf7*/
  this->TechnoClass = &BuildingClass_Vtable; /*0x43bcfd*/
  this->? = &BuildingClass_Vtable2; /*0x43bd05*/
  this->? = &BuildingClass_Vtable3; /*0x43bd0c*/
  this->? = &BuildingClass_Vtable4; /*0x43bd13*/
  Mixer::ReleaseChannel((Mixer *)this->Audio8_2); /*0x43bd1a*/
  Mixer::ReleaseChannel((Mixer *)&this->WasOnline); /*0x43bd27*/
  AudioFileClass::Release((AudioFileClass *)Audio8_2); /*0x43bd2e*/
  AudioFileClass::Release((AudioFileClass *)&this->WasOnline); /*0x43bd35*/
  LightSource = this->LightSource; /*0x43bd3a*/
  if ( LightSource ) /*0x43bd44*/
  {
    MapClass::ScrollOnce((int)LightSource, 0); /*0x43bd47*/
    v5 = this->LightSource; /*0x43bd4c*/
    if ( v5 ) /*0x43bd54*/
      (*((void (__thiscall **)(LightSourceClass *, int))v5->AbstractClass + 8))(v5, 1); /*0x43bd5a*/
    this->LightSource = 0; /*0x43bd5d*/
  }
  LOBYTE(v3) = 1; /*0x43bd63*/
  AbstractClass::AnnounceExpiredPointer(&this->TechnoClass, v3); /*0x43bd67*/
  BuildingClass::Sell(this); /*0x43bd6e*/
  Vtable3 = (int)this; /*0x43bd83*/
  v6 = (*(int (__thiscall **)(int *, int *))(stru_A8EB00.ObjectTypeClass[16] + 16))( /*0x43bd87*/
         &stru_A8EB00.ObjectTypeClass[16],
         &Vtable3);
  if ( v6 != -1 ) /*0x43bd8d*/
    Vector::RemoveAt((Vector *)&stru_A8EB00.ObjectTypeClass[16], v6); /*0x43bd95*/
  Vtable3 = (int)this; /*0x43bdaa*/
  v7 = (*(int (__thiscall **)(char *, int *))(*(_DWORD *)&FootClass_Array.? + 16))(&FootClass_Array.?, &Vtable3); /*0x43bdae*/
  if ( v7 != -1 ) /*0x43bdb4*/
    Vector::RemoveAt((Vector *)&FootClass_Array.?, v7); /*0x43bdbc*/
  BuildingClass::ClearAnims(this, -2); /*0x43bdc5*/
  BuildingTypeClass::IsPowered(this->Type); /*0x43bdd0*/
  DamageFireAnims = this->DamageFireAnims; /*0x43bdd5*/
  v9 = 8; /*0x43bddb*/
  do /*0x43bdf4*/
  {
    if ( *DamageFireAnims ) /*0x43bde0*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)*DamageFireAnims + 248))(*DamageFireAnims); /*0x43bde8*/
      *DamageFireAnims = 0; /*0x43bdee*/
    }
    ++DamageFireAnims; /*0x43bdf0*/
    --v9; /*0x43bdf3*/
  }
  while ( v9 ); /*0x43bdf4*/
  if ( byte_A8E9A0 ) /*0x43bdfd*/
  {
    Type = this->Type; /*0x43bdff*/
    if ( Type ) /*0x43be07*/
    {
      if ( Type->CloakGenerator ) /*0x43be09*/
      {
        CloakRadius = this->CloakRadius; /*0x43be13*/
        this->HasCloakingData = -1; /*0x43be19*/
        if ( !CloakRadius ) /*0x43be22*/
          this->CloakRadius = Type->CloakRadiusInCells; /*0x43be2a*/
        this->? = 1; /*0x43be34*/
        this->CloakRadius = 1; /*0x43be3b*/
        BuildingClass::CleanupOccupation(this); /*0x43be42*/
      }
    }
  }
  SuperWeapon = this->Type->SuperWeapon; /*0x43be50*/
  if ( (SuperWeapon == -1 /*0x43bee8*/
     || (v13 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_A83CBC + SuperWeapon) + 40) + 200)) == 0
     || DynamicVector::GetOrGrow((DynamicVector *)this->?->ownedInfantryTypes2, *(_DWORD *)(v13 + 3576)))
    && this->Type->SuperWeapon != -1
    || ((SuperWeapon2 = this->Type->SuperWeapon2, SuperWeapon2 == -1)
     || (v15 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_A83CBC + SuperWeapon2) + 40) + 200)) == 0
     || DynamicVector::GetOrGrow((DynamicVector *)this->?->ownedInfantryTypes2, *(_DWORD *)(v15 + 3576)))
    && this->Type->SuperWeapon2 != -1 )
  {
    SuperWeapon::UpdateSuperWeaponsOwnedHouseClass((SuperWeapon *)this->?); /*0x43bef0*/
  }
  if ( byte_A8E9A0 ) /*0x43befc*/
  {
    if ( this->? != this->BuildingClass_field_544 ) /*0x43bf09*/
      LOBYTE(this->?->HouseClass_field_timer_B[2]) = 1; /*0x43bf11*/
    if ( byte_A8E9A0 && this->Type ) /*0x43bf21*/
    {
      owner = this->?; /*0x43bf29*/
      if ( owner ) /*0x43bf31*/
        HouseClass::DecrementUnitCount(owner, this); /*0x43bf34*/
      BuildingClass::Sell(this); /*0x43bf3b*/
    }
  }
  Factory = this->Factory; /*0x43bf40*/
  if ( Factory ) /*0x43bf48*/
    (*((void (__thiscall **)(FactoryClass *, int))Factory->AbstractClass + 8))(Factory, 1); /*0x43bf4e*/
  this->Factory = 0; /*0x43bf51*/
  Vtable3 = (int)this; /*0x43bf67*/
  v18 = (*(int (__thiscall **)(int *, int *))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x43bf6b*/
          g_BuildingLoadQueue_Array.?,
          &Vtable3);
  if ( v18 != -1 ) /*0x43bf70*/
    DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.?, v18); /*0x43bf78*/
  Vtable3 = (int)this; /*0x43bf8d*/
  v19 = (*(int (__thiscall **)(int *, int *))(g_BuildingLoadQueue_Array.Buildup[0] + 16))( /*0x43bf91*/
          g_BuildingLoadQueue_Array.Buildup,
          &Vtable3);
  if ( v19 != -1 ) /*0x43bf96*/
    DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.Buildup, v19); /*0x43bf9e*/
  Vtable3 = AbstractClass::GetVtable3((AbstractClass *)&this->?); /*0x43bfac*/
  v20 = BuildingTypeClass::Dequeue(&g_BuildingLoadQueue_Array, &Vtable3); /*0x43bfba*/
  if ( v20 ) /*0x43bfc1*/
  {
    v21 = (signed int)(v20 - (unsigned int)g_BuildingLoadQueue_Array.TechnoTypeClass) >> 3; /*0x43bfc9*/
    if ( v21 != -1 ) /*0x43bfce*/
    {
      v22 = v21 + 1; /*0x43bfd0*/
      for ( i = (char *)g_BuildingLoadQueue_Array.?; /*0x43bfda*/
            v22 < (int)g_BuildingLoadQueue_Array.?;
            i = (char *)g_BuildingLoadQueue_Array.? )
      {
        v24 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v22++; /*0x43bfe2*/
        *(v24 - 2) = *v24; /*0x43bfe8*/
        *(v24 - 1) = v24[1]; /*0x43bfee*/
      }
      g_BuildingLoadQueue_Array.? = i - 1; /*0x43c003*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = 0; /*0x43c008*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = 0; /*0x43c018*/
      g_BuildingLoadQueue_Array.? = 0; /*0x43c01c*/
    }
  }
  this->Type = 0; /*0x43c022*/
  this->? = 0; /*0x43c02e*/
  FiringOccupantIndex = this->FiringOccupantIndex; /*0x43c03a*/
  (*(void (__thiscall **)(int *))(this->Overpowerers[0] + 12))(this->Overpowerers); /*0x43c03d*/
  (*(void (__thiscall **)(int *, int, _DWORD))(this->Overpowerers[0] + 8))(this->Overpowerers, FiringOccupantIndex, 0); /*0x43c048*/
  v26 = this->Audio8[0]; /*0x43c051*/
  (*(void (__thiscall **)(int *))(this->Audio7[3] + 12))(&this->Audio7[3]); /*0x43c05f*/
  (*(void (__thiscall **)(int *, int, _DWORD))(this->Audio7[3] + 8))(&this->Audio7[3], v26, 0); /*0x43c069*/
  v27 = (void *)this->Audio7[4]; /*0x43c06c*/
  this->Audio7[3] = (int)&VectorClass<InfantryClass *>::`vftable'; /*0x43c073*/
  if ( v27 && BYTE1(this->Audio8[1]) ) /*0x43c07b*/
  {
    __3_YAXPAX_Z(v27); /*0x43c083*/
    this->Audio7[4] = 0; /*0x43c08b*/
  }
  BYTE1(this->Audio8[1]) = 0; /*0x43c08e*/
  this->Audio8[0] = 0; /*0x43c092*/
  v28 = (void *)this->Occupants[0]; /*0x43c095*/
  this->Overpowerers[0] = (int)&VectorClass<InfantryClass *>::`vftable'; /*0x43c098*/
  if ( v28 && BYTE1(this->Audio7[0]) ) /*0x43c0a3*/
  {
    __3_YAXPAX_Z(v28); /*0x43c0ab*/
    this->Occupants[0] = 0; /*0x43c0b3*/
  }
  BYTE1(this->Audio7[0]) = 0; /*0x43c0b8*/
  this->FiringOccupantIndex = 0; /*0x43c0bc*/
  return TechnoClass::DTOR((int)this); /*0x43c0c4*/
}



// ==== 0x0043C0D0  ObjectClass::CreateDominatorDestructionEffects  this=ObjectClass  sig=csp ====
void **__thiscall CreateDominatorDestructionEffects(TechnoClass *this)
{
  void **result; // eax
  TechnoClass *v3; // edi
  int v4; // ebp
  int *v5; // eax
  int v6; // ecx
  int vtable0; // edx
  _DWORD *v8; // eax
  void **v9; // ebx
  int FoundationHeight; // edi
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+0h] [ebp-3Ch]
  int v14; // [esp+10h] [ebp-2Ch]
  char *v15; // [esp+14h] [ebp-28h]
  void **v16; // [esp+18h] [ebp-24h]
  int v17; // [esp+1Ch] [ebp-20h] BYREF
  int v18; // [esp+24h] [ebp-18h] BYREF
  int v19; // [esp+28h] [ebp-14h]
  int v20; // [esp+2Ch] [ebp-10h]
  _BYTE v21[12]; // [esp+30h] [ebp-Ch] BYREF

  result = *(void ***)&dword_8871E0->__pad_240[112]; /*0x43c0db*/
  v16 = result; /*0x43c0e6*/
  if ( result ) /*0x43c0ea*/
  {
    v3 = (TechnoClass *)((char *)this + 1480); /*0x43c105*/
    v14 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, (int)result - 1); /*0x43c10b*/
    v4 = 5592; /*0x43c10f*/
    v15 = (char *)this + 1480; /*0x43c114*/
    do /*0x43c28e*/
    {
      result = (void **)(*((_DWORD *)this + 328) + v4); /*0x43c121*/
      if ( *result == (void *)g_BuildingClassPool && result[1] == (void *)dword_89C84C || v3->vtable0 ) /*0x43c13d*/
        break; /*0x43c140*/
      v5 = (int *)World::ToScreen(&v17, result, v13); /*0x43c152*/
      v6 = *v5; /*0x43c157*/
      v19 = v5[1]; /*0x43c15e*/
      v20 = 0; /*0x43c162*/
      vtable0 = this->vtable0; /*0x43c166*/
      v18 = v6; /*0x43c16c*/
      v8 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, _BYTE *))(vtable0 + 172))(this, v21); /*0x43c173*/
      v18 += *v8; /*0x43c189*/
      v19 += v8[1]; /*0x43c197*/
      v20 += v8[2]; /*0x43c1a0*/
      result = (void **)__2_YAPAXI_Z(0x1C8u); /*0x43c1a4*/
      if ( result ) /*0x43c1ae*/
      {
        result = AnimClass::ctor( /*0x43c1dc*/
                   (AnimClass *)result,
                   *(void **)(*(_DWORD *)&dword_8871E0->__pad_240[100] + 4 * v14),
                   &v18,
                   0,
                   1,
                   (void *)0x600,
                   0,
                   0);
        v9 = result; /*0x43c1e1*/
        if ( result ) /*0x43c1e5*/
        {
          v3->vtable0 = (int)result; /*0x43c1eb*/
          FoundationHeight = BuildingTypeClass::GetFoundationHeight(*((int **)this + 328), 0); /*0x43c200*/
          v11 = (3 /*0x43c21e*/
               * (*(_DWORD *)(*((_DWORD *)this + 328) + v4 + 4)
                - 15 * (BuildingTypeClass::GetFoundationWidth(*((BuildingTypeClass **)this + 328)) + FoundationHeight))) >> 1;
          v9[64] = (void *)(v11 - 10); /*0x43c225*/
          if ( v11 - 10 > 0 ) /*0x43c22b*/
            v9[64] = 0; /*0x43c22d*/
          v12 = *((_DWORD *)v9[50] + 176); /*0x43c23d*/
          if ( v12 > 0 ) /*0x43c245*/
            v9[43] = (void *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v12 - 1); /*0x43c25b*/
          result = (void **)++v14; /*0x43c269*/
          if ( v14 >= (int)v16 ) /*0x43c270*/
            v14 = 0; /*0x43c272*/
        }
      }
      v4 += 8; /*0x43c27e*/
      v3 = (TechnoClass *)(v15 + 4); /*0x43c281*/
      v15 += 4; /*0x43c28a*/
    }
    while ( v4 < 5656 ); /*0x43c28e*/
  }
  return result; /*0x43c294*/
}



// ==== 0x0043C2D0  BuildingClass::MissionController  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::MissionController(BuildingClass *this)
{
  double v1; // st7
  int v2; // ebp
  int result; // eax
  BuildingTypeClass *v5; // eax
  CellClass *captureManager; // ecx
  BuildingClass *v9; // ebx
  CellClass *v10; // ecx
  int v11; // eax
  BuildingTypeClass *v12; // eax
  BuildingTypeClass *v13; // eax
  void (__thiscall **v14)(BuildingClass *, int, _DWORD); // eax
  void (__thiscall **vtable0)(BuildingClass *, int, _DWORD); // eax
  _DWORD *v16; // ebx
  TechnoClass *v17; // edi
  BuildingTypeClass *v18; // eax
  BuildingTypeClass *v19; // eax
  unsigned int v20; // ebp
  _DWORD *v21; // eax
  CellClass *v22; // eax
  CellClass *v23; // ebp
  BuildingTypeClass *v24; // eax
  int Member; // eax
  _DWORD *v26; // ebp
  _DWORD *v27; // eax
  int v28; // ecx
  int v29; // edx
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  BuildingTypeClass *v33; // eax
  _WORD *v34; // eax
  int i; // ebp
  int v36; // ebx
  BuildingTypeClass *v37; // esi
  int v40; // ecx
  char *v41; // eax
  BuildingTypeClass *Type; // eax
  _DWORD *v43; // edi
  _DWORD *v44; // eax
  int v45; // ecx
  int v46; // edx
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  BuildingTypeClass *v50; // esi
  double v51; // [esp+18h] [ebp-58h]
  double v52; // [esp+18h] [ebp-58h]
  _DWORD *v53; // [esp+20h] [ebp-50h]
  int v54; // [esp+30h] [ebp-40h] BYREF
  int v55; // [esp+34h] [ebp-3Ch]
  int v56; // [esp+38h] [ebp-38h]
  int v57; // [esp+3Ch] [ebp-34h]
  _DWORD v58[3]; // [esp+40h] [ebp-30h] BYREF
  char v59[12]; // [esp+4Ch] [ebp-24h] BYREF
  _BYTE v60[12]; // [esp+58h] [ebp-18h] BYREF
  _BYTE v61[12]; // [esp+64h] [ebp-Ch] BYREF
  TechnoClass *v62; // [esp+74h] [ebp+4h]
  char v63; // [esp+74h] [ebp+4h]
  TechnoClass *v64; // [esp+74h] [ebp+4h]
  TechnoClass *v65; // [esp+78h] [ebp+8h] BYREF
  int v66; // [esp+7Ch] [ebp+Ch]

  v2 = (int)v65; /*0x43c2d5*/
  switch ( (unsigned int)v65 )
  {
    case 3u:
      BuildingClass::StartProduction(this, 1); /*0x43cd05*/
      TechnoClass::Mission_RepairDispatch(v62, v2, v2, v66, v53); /*0x43cd17*/
      return 1; /*0x43cd28*/
    case 8u:
      Type = this->Type; /*0x43cd2b*/
      if ( !Type->UnitRepair && !Type->Bunker ) /*0x43cd3f*/
        goto LABEL_151; /*0x43cd3f*/
      v43 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))v62->RadioClass + 18))(v62, v61); /*0x43cd5b*/
      v44 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v60); /*0x43cd64*/
      v45 = *v44 - *v43; /*0x43cd6b*/
      v46 = v44[1]; /*0x43cd6d*/
      v47 = v44[2]; /*0x43cd70*/
      v55 = v45; /*0x43cd73*/
      v48 = v43[2]; /*0x43cd7f*/
      v56 = v46 - v43[1]; /*0x43cd82*/
      __asm { fild [esp+58h+var_38] } /*0x43cd88*/
      v57 = v47 - v48; /*0x43cd8c*/
      __asm /*0x43cd90*/
      {
        fild [esp+58h+var_34]
        fild [esp+58h+var_3C]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fld st(3)
        fmul st, st(4)
        faddp st(1), st
        fstp [esp+58h+var_58]; double
        fstp st
        fstp st
        fstp st
      }
      Math::Sqrt(v52); /*0x43cdb1*/
      LOWORD(v49) = Math::RoundToInt(v1); /*0x43cdb9*/
      if ( v49 < 384 ) /*0x43cdc3*/
        return 1; /*0x43cdc8*/
LABEL_151:
      TechnoClass::Mission_RepairDispatch(v62, v2, v2, v66, v53); /*0x43cddd*/
      v50 = this->Type; /*0x43cde2*/
      if ( v50->WeaponsFactory || v50->UnitRepair || v50->Bunker ) /*0x43cdfc*/
        return 23; /*0x43ce18*/
      else
        return 1; /*0x43ce09*/
    case 0xBu:
      (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 20, 0); /*0x43cc41*/
      goto LABEL_144; /*0x43cc47*/
    case 0xCu:
      if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) != 19 ) /*0x43cc59*/
      {
        (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 5, 0); /*0x43cc67*/
        if ( this->Type->ConstructionYard ) /*0x43cc73*/
        {
          BuildingClass::ClearAnims(this, 7); /*0x43cc81*/
          BuildingClass::ClearAnims(this, 18); /*0x43cc8a*/
          BuildingClass::GetHealthRatio(this); /*0x43cc91*/
          _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43cc96*/
          __asm /*0x43cc9c*/
          {
            fcomp qword ptr [edx+1700h]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x43cca7*/
          {
            v40 = 1; /*0x43ccaf*/
            v41 = &this->Type->__pad_F70[524]; /*0x43ccb4*/
          }
          else
          {
            v40 = 0; /*0x43ccc1*/
            v41 = &this->Type->__pad_F70[508]; /*0x43ccc3*/
          }
          if ( v41 && *v41 ) /*0x43cccc*/
            BuildingClass::PlayAnim(this, *(int *)&DSurface_ViewBounds.__pad_FC[324], v41, 8, v40, 0, 0); /*0x43ccdb*/
        }
      }
LABEL_144:
      TechnoClass::Mission_RepairDispatch(v62, v2, v2, v66, v53); /*0x43cce0*/
      return 1; /*0x43cced*/
    case 0xDu:
      if ( !this->Type->WeaponsFactory ) /*0x43ce32*/
        return TechnoClass::Mission_RepairDispatch(v62, v2, v2, v66, v53); /*0x43ce32*/
      return 1; /*0x43ce40*/
    case 0xEu:
      v16 = (_DWORD *)v66; /*0x43c7e9*/
      v17 = v62; /*0x43c7ed*/
      TechnoClass::Mission_RepairDispatch(v62, (int)v65, (int)v65, v66, v53); /*0x43c7f6*/
      if ( !this->HasPower ) /*0x43c7fb*/
        return 10; /*0x43c811*/
      if ( this->Type->UnitRepair ) /*0x43c81a*/
      {
        if ( (unsigned __int8)Array::Contains((Array *)this, (int)v62) ) /*0x43c827*/
        {
          result = (*((int (__thiscall **)(BuildingClass *, int, TechnoClass *))this->TechnoClass + 158))(this, 34, v62); /*0x43c837*/
          if ( result == 10 ) /*0x43c840*/
            return result; /*0x43c840*/
        }
      }
      if ( this->Type->Bunker /*0x43c86a*/
        && (unsigned __int8)Array::Contains((Array *)this, (int)v62)
        && !TechnoClass::CanSelfRepair(v62) )
      {
        return 10; /*0x43c87f*/
      }
      v18 = this->Type; /*0x43c882*/
      if ( !v18->Hospital && !v18->Armory )
      {
        if ( !(unsigned __int8)Array::Contains((Array *)this, (int)v62) /*0x43c8b3*/
          && (unsigned __int8)Array::ContainsValue((Array *)this, (int)v62) )
        {
          (*((void (__thiscall **)(BuildingClass *, int, TechnoClass *))this->TechnoClass + 158))(this, 2, v62); /*0x43c8c3*/
          Array::Contains((Array *)this, (int)v62); /*0x43c8cc*/
        }
        v63 = 0; /*0x43c8d4*/
        if ( (unsigned __int8)Array::Contains((Array *)this, (int)v17) )
        {
          v19 = this->Type; /*0x43c8e2*/
          if ( v19->DockUnload || v19->Weeder )
          {
            v20 = v17 ? ((v17->? & 4) != 0 ? (unsigned int)v17 : 0) : 0;
            v21 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *, unsigned int))this->TechnoClass + 42))( /*0x43c91b*/
                              this,
                              v59,
                              v20);
            v22 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v21); /*0x43c927*/
            v23 = *(CellClass **)(v20 + 1444); /*0x43c92c*/
            if ( v23 ) /*0x43c934*/
            {
              if ( v22 != v23 ) /*0x43c938*/
                v63 = 1; /*0x43c93a*/
            }
          }
        }
        if ( Team::GetMember((Team *)this, 0) ) /*0x43c943*/
        {
          v24 = this->Type; /*0x43c950*/
          if ( v24->UnitRepair || v24->Bunker ) /*0x43c960*/
          {
            Member = Team::GetMember((Team *)this, 0); /*0x43c972*/
            v26 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)Member + 72))(Member, v60); /*0x43c985*/
            v27 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v61); /*0x43c98e*/
            v28 = *v27 - *v26; /*0x43c996*/
            v29 = v27[1]; /*0x43c998*/
            v30 = v27[2]; /*0x43c99b*/
            v55 = v28; /*0x43c99e*/
            v31 = v26[2]; /*0x43c9aa*/
            v56 = v29 - v26[1]; /*0x43c9ad*/
            __asm { fild [esp+58h+var_38] } /*0x43c9b3*/
            v57 = v30 - v31; /*0x43c9b7*/
            __asm /*0x43c9bb*/
            {
              fild [esp+58h+var_34]
              fild [esp+58h+var_3C]
              fld st
              fmul st, st(1)
              fld st(2)
              fmul st, st(3)
              faddp st(1), st
              fld st(3)
              fmul st, st(4)
              faddp st(1), st
              fstp [esp+58h+var_58]; double
              fstp st
              fstp st
              fstp st
            }
            Math::Sqrt(v51); /*0x43c9dc*/
            LOWORD(v32) = Math::RoundToInt(v1); /*0x43c9e4*/
            if ( v32 > 128 ) /*0x43c9ee*/
              v63 = 1; /*0x43c9f0*/
          }
        }
        if ( (*((int (__thiscall **)(BuildingClass *, int, TechnoClass *))this->TechnoClass + 158))(this, 19, v17) == 1 /*0x43ca0d*/
          || v63 )
        {
          *v16 = this; /*0x43ca13*/
          v33 = this->Type; /*0x43ca15*/
          if ( v33->DockUnload || v33->Weeder ) /*0x43ca25*/
          {
            v34 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 110))(this, &v54); /*0x43ca7a*/
            LOWORD(v64) = *v34 + 3; /*0x43ca8d*/
            HIWORD(v64) = v34[1] + 1; /*0x43ca92*/
            v65 = v64; /*0x43ca9f*/
            *v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v65); /*0x43caae*/
            if ( (*((int (__thiscall **)(BuildingClass *, int, _DWORD *, TechnoClass *))this->TechnoClass + 159))( /*0x43cac1*/
                   this,
                   18,
                   v16,
                   v17) == 20 )
            {
              (*((void (__thiscall **)(BuildingClass *, int, TechnoClass *))this->TechnoClass + 158))(this, 24, v17); /*0x43cace*/
              if ( (*((int (__thiscall **)(BuildingClass *, int, TechnoClass *))this->TechnoClass + 158))(this, 22, v17) != 1 ) /*0x43cae4*/
              {
                (*((void (__thiscall **)(TechnoClass *, _DWORD *, int, int))v17->RadioClass + 93))( /*0x43caf7*/
                  v17,
                  &g_BuildingClassPool,
                  1,
                  1);
                return 1; /*0x43cb09*/
              }
            }
          }
          else if ( v33->Helipad ) /*0x43ca2f*/
          {
            *v16 = this; /*0x43ca3d*/
            if ( (*((int (__thiscall **)(BuildingClass *, int, _DWORD *, TechnoClass *))this->TechnoClass + 159))( /*0x43ca50*/
                   this,
                   18,
                   v16,
                   v17) == 20 )
            {
              (*((void (__thiscall **)(BuildingClass *, int))this->TechnoClass + 157))(this, 24); /*0x43ca5c*/
              return 1; /*0x43ca6e*/
            }
          }
        }
        return 1; /*0x43ca50*/
      }
      if ( (unsigned __int8)Array::ContainsValue((Array *)this, (int)v62) ) /*0x43cb0f*/
      {
        v58[0] = this->?[0]; /*0x43cb83*/
        v58[1] = this->?[1]; /*0x43cb94*/
        v58[2] = this->?[2]; /*0x43cb9b*/
        *v16 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v58); /*0x43cba4*/
        (*((void (__thiscall **)(BuildingClass *, int, _DWORD *, TechnoClass *))this->TechnoClass + 159))( /*0x43cbae*/
          this,
          18,
          v16,
          v62);
        return 1; /*0x43cbc0*/
      }
      for ( i = 0; i < this->?[2]; ++i ) /*0x43cb22*/
      {
        v36 = Team::GetMember((Team *)this, i); /*0x43cb2c*/
        if ( (*((int (__thiscall **)(BuildingClass *, int, int))this->TechnoClass + 158))(this, 34, v36) == 10 ) /*0x43cb3e*/
          (*((void (__thiscall **)(BuildingClass *, int, int))this->TechnoClass + 158))(this, 23, v36); /*0x43cb47*/
      }
      if ( !(unsigned __int8)Array::ContainsValue((Array *)this, (int)v62) ) /*0x43cb5b*/
        return 10; /*0x43cb62*/
      return 1; /*0x43cb62*/
    case 0xFu:
      TechnoClass::Mission_RepairDispatch(v62, (int)v65, (int)v65, v66, v53); /*0x43c305*/
      if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, (int)v62) ) /*0x43c311*/
        return 0; /*0x43c318*/
      if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 18 ) /*0x43c333*/
        return 10; /*0x43c333*/
      if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 19 ) /*0x43c346*/
        return 10; /*0x43c346*/
      if ( !this->BuildingClass_field_int_534 ) /*0x43c34c*/
        return 10; /*0x43c34c*/
      if ( !dword_A8E7AC && !(unsigned __int8)Array::ContainsValue((Array *)this, (int)v62) ) /*0x43c366*/
      {
        v5 = this->Type; /*0x43c36f*/
        if ( !v5->UnitAbsorb && !v5->InfantryAbsorb ) /*0x43c37f*/
          return 10; /*0x43c387*/
      }
      if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 33))(v62) + 1460) != 5 /*0x43c3e6*/
        && (*(_BYTE *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 33))(this) + 3278)
         && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 33))(v62) + 3278)
         || !*(_BYTE *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 33))(this) + 3278)
         && *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 33))(v62) + 3278)) )
      {
        return 10; /*0x43c3fc*/
      }
      if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 33))(v62) + 3434) ) /*0x43c409*/
        return 10; /*0x43c41f*/
      if ( !this->HasPower ) /*0x43c422*/
        return 10; /*0x43c438*/
      _EBX = this->Type; /*0x43c43b*/
      if ( !_EBX->UnitAbsorb && !_EBX->InfantryAbsorb ) /*0x43c453*/
        goto LABEL_33; /*0x43c453*/
      if ( (*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 11))(v62) == 1 && !this->Type->UnitAbsorb /*0x43c487*/
        || (*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 11))(v62) == 15 && !this->Type->InfantryAbsorb )
      {
        return 10; /*0x43c49d*/
      }
      captureManager = (CellClass *)v62->captureManager; /*0x43c4a0*/
      if ( captureManager && (unsigned __int8)CellClass::HasContent(captureManager) ) /*0x43c4aa*/
        return 10; /*0x43c4bf*/
      _EBX = this->Type; /*0x43c4c2*/
      if ( this->?[0] + 1 <= _EBX->? ) /*0x43c4d5*/
      {
        _EAX = (*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 33))(v62); /*0x43c4db*/
        __asm /*0x43c4e1*/
        {
          fld qword ptr [eax+380h]
          fcomp qword ptr [ebx+388h]
          fnstsw ax
        }
        if ( (_EAX & 0x4100) != 0 ) /*0x43c4f2*/
          return 1; /*0x43c4f2*/
      }
LABEL_33:
      if ( _EBX->Grinding ) /*0x43c4f8*/
        return 1; /*0x43c500*/
      if ( _EBX->Bunker ) /*0x43c506*/
      {
        if ( TechnoClass::CanSelfRepair(v62) /*0x43c52f*/
          && (*((int (__thiscall **)(BuildingClass *, int, TechnoClass *))this->TechnoClass + 158))(this, 35, v62) != 1 )
        {
          return 1; /*0x43c541*/
        }
        return 10; /*0x43cb74*/
      }
      if ( _EBX->UnitRepair ) /*0x43c544*/
      {
        if ( ((*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 11))(v62) == 1 /*0x43c57a*/
           || (*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 11))(v62) == 2)
          && (*((int (__thiscall **)(BuildingClass *, int, TechnoClass *))this->TechnoClass + 158))(this, 35, v62) != 1 )
        {
          return 1; /*0x43c58c*/
        }
        return 10; /*0x43c57a*/
      }
      if ( !_EBX->Armory && !_EBX->Hospital || (*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 11))(v62) != 15 )
      {
        v12 = this->Type; /*0x43c620*/
        if ( v12->Helipad )
          return (*((int (__stdcall **)(void **))v62->? + 3))(&v62->?) != 2 ? 10 : 1;
        if ( !v12->DockUnload /*0x43c682*/
          || (*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 11))(v62) != 1
          || !*(_BYTE *)(v62[1].ironTintTimer[2] + 3598)
          || !dword_A8E7AC && this->?[1] )
        {
          if ( !this->Type->Weeder /*0x43c6ba*/
            || (*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 11))(v62) != 1
            || !*(_BYTE *)(v62[1].ironTintTimer[2] + 3599) )
          {
            return 0; /*0x43c6c2*/
          }
          if ( !dword_A8E7AC ) /*0x43c6cf*/
            return !this->?[1]; /*0x43c323*/
        }
        return 1; /*0x43ccfe*/
      }
      if ( v62 )
        v9 = (*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 11))(v62) == 15 ? (BuildingClass *)v62 : 0;
      else
        v9 = 0; /*0x43c5b3*/
      v10 = (CellClass *)v9->?; /*0x43c5cb*/
      if ( v10 && (unsigned __int8)CellClass::HasContent(v10) ) /*0x43c5d5*/
        return 10; /*0x43c5e1*/
      if ( (unsigned __int8)BuildingClass::IsBeingRepairedOrCaptured(v9) ) /*0x43c5ef*/
        return 10; /*0x43c5fb*/
      v11 = -(this->? != 0); /*0x43c610*/
      LOBYTE(v11) = v11 & 0xF7; /*0x43c613*/
      return v11 + 10;
    case 0x10u:
      if ( this->?[1] /*0x43cbf4*/
        || !(unsigned __int8)Array::ContainsValue((Array *)this, (int)v62)
        || this->?
        || this->? != (HouseClass *)(*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 15))(v62) )
      {
        return 10; /*0x43cbf4*/
      }
      v37 = this->Type; /*0x43cbfa*/
      if ( v37->Refinery || v37->UnitRepair ) /*0x43cc0e*/
        return 1; /*0x43cc16*/
      if ( !v37->Weeder ) /*0x43cc24*/
        return 10; /*0x43cc24*/
      return 1; /*0x43cc36*/
    case 0x15u:
      if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 19 ) /*0x43c6ff*/
        return 10; /*0x43c70d*/
      v13 = this->Type; /*0x43c710*/
      if ( v13->UnitAbsorb || v13->InfantryAbsorb ) /*0x43c724*/
        return 1; /*0x43c72c*/
      if ( v13->UnitRepair || v13->UnitReload || v13->Hospital || v13->Armory ) /*0x43c750*/
      {
        vtable0 = (void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass; /*0x43c7b5*/
        this->BuildingClass_field_bool_6DD = 1; /*0x43c7bd*/
        vtable0[122](this, 20, 0); /*0x43c7c4*/
        (*((void (__thiscall **)(TechnoClass *, _DWORD, _DWORD))v62->RadioClass + 122))(v62, 0, 0); /*0x43c7d4*/
        return 1; /*0x43c7dd*/
      }
      else if ( v13->Bunker ) /*0x43c75a*/
      {
        v14 = (void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass; /*0x43c764*/
        this->BuildingClass_field_bool_6DD = 1; /*0x43c76c*/
        v14[122](this, 20, 0); /*0x43c773*/
        return 1; /*0x43c77c*/
      }
      else if ( v13->DockUnload ) /*0x43c788*/
      {
        (*((void (__thiscall **)(TechnoClass *, int, _DWORD))v62->RadioClass + 122))(v62, 16, 0); /*0x43c7a0*/
        return 1; /*0x43c7a9*/
      }
      else
      {
        return TechnoClass::Mission_RepairDispatch(v62, v2, v2, v66, v53); /*0x43ce43*/
      }
    default:
      return TechnoClass::Mission_RepairDispatch(v62, v2, v2, v66, v53);
  }
}



// ==== 0x0043CEA0  BuildingClass::DrawFactoryProduction  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::DrawFactoryProduction(BuildingClass *this)
{
  int result; // eax
  int *v3; // eax
  int v4; // ebx
  char *v5; // ebp
  _DWORD *v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // ebx
  int v10; // ebp
  int v11; // ebx
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // [esp+10h] [ebp-18h] BYREF
  int v15; // [esp+14h] [ebp-14h]
  _DWORD v16[4]; // [esp+18h] [ebp-10h] BYREF
  int *v17; // [esp+2Ch] [ebp+4h]
  char v18; // [esp+30h] [ebp+8h]
  char v19; // [esp+34h] [ebp+Ch]

  if ( !stru_A8EB00.?[391] ) /*0x43ceb0*/
  {
    result = (int)g_hWnd; /*0x43ceb2*/
    if ( g_hWnd ) /*0x43ceb9*/
    {
      if ( !v18 && !this->? || !this->? || this->? ) /*0x43cedc*/
        goto LABEL_20; /*0x43cedc*/
    }
  }
  this->? = 0; /*0x43cefd*/
  v3 = ClipRectIntersection(v16, v17, &DSurface_ViewBounds.field_0, 0, 0); /*0x43cf04*/
  *v17 = *v3; /*0x43cf0d*/
  v17[1] = v3[1]; /*0x43cf12*/
  v17[2] = v3[2]; /*0x43cf18*/
  v17[3] = v3[3]; /*0x43cf1e*/
  v4 = DSurface_ViewBounds.field_0; /*0x43cf23*/
  v5 = (char *)DSurface_ViewBounds.field_4; /*0x43cf29*/
  v6 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD *))this->TechnoClass + 75))(this, v16); /*0x43cf36*/
  v7 = v6[1]; /*0x43cf3e*/
  v8 = v4 + *v6; /*0x43cf41*/
  v9 = v6[2]; /*0x43cf43*/
  result = v6[3]; /*0x43cf46*/
  v10 = (int)&v5[v7]; /*0x43cf49*/
  if ( *v17 >= v8 + v9 ) /*0x43cf51*/
    goto LABEL_20; /*0x43cf51*/
  v11 = v17[1]; /*0x43cf57*/
  result += v10; /*0x43cf5a*/
  if ( v11 < result && (result = *v17 + v17[2], result > v8) && v11 + v17[3] > v10 ) /*0x43cf78*/
  {
    v12 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD *))this->TechnoClass + 43))(this, v16); /*0x43cf8c*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, v12, &v14); /*0x43cf99*/
    if ( *v17 > DSurface_ViewBounds.field_0 ) /*0x43cfa7*/
      v14 += DSurface_ViewBounds.field_0 - *v17; /*0x43cfb1*/
    v13 = v17[1]; /*0x43cfb5*/
    result = (int)DSurface_ViewBounds.field_4; /*0x43cfb8*/
    if ( v13 > (int)DSurface_ViewBounds.field_4 ) /*0x43cfbf*/
    {
      result = (int)DSurface_ViewBounds.field_4 - v13; /*0x43cfc1*/
      v15 += (int)DSurface_ViewBounds.field_4 - v13; /*0x43cfc9*/
    }
    if ( v19 ) /*0x43cfd3*/
    {
      if ( !this->IsFogged ) /*0x43cfd5*/
      {
        result = (*((int (__thiscall **)(BuildingClass *, int *, int *))this->TechnoClass + 313))(this, &v14, v17); /*0x43cfe9*/
        LOBYTE(result) = 1; /*0x43cff2*/
        return result; /*0x43cff8*/
      }
    }
    else
    {
      result = (*((int (__thiscall **)(BuildingClass *, int *, int *))this->TechnoClass + 69))(this, &v14, v17); /*0x43d005*/
    }
    LOBYTE(result) = 1; /*0x43d00e*/
  }
  else
  {
LABEL_20:
    LOBYTE(result) = 0; /*0x43d01a*/
  }
  return result; /*0x43cfef*/
}



// ==== 0x0043D030  BuildingClass::DisplayProductionFrame  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::DisplayProductionFrame(BuildingClass *this)
{
  int v2; // edx
  int (__thiscall **vtable0)(BuildingClass *); // eax
  int result; // eax
  int v5; // ebp
  int Type; // eax
  int *v7; // ebx
  int v8; // ecx
  int v9; // edi
  int v10; // eax
  __int16 *v11; // eax
  int v12; // eax
  int ProductionFrame; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // ebp
  int v17; // ebp
  int v18; // edx
  __int16 *v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // [esp+30h] [ebp-3Ch]
  int v23; // [esp+38h] [ebp-34h]
  int v24; // [esp+44h] [ebp-28h] BYREF
  __int16 v25[2]; // [esp+48h] [ebp-24h] BYREF
  int v26; // [esp+4Ch] [ebp-20h]
  int v27; // [esp+50h] [ebp-1Ch]
  int v28; // [esp+54h] [ebp-18h]
  int v29; // [esp+58h] [ebp-14h]
  int v30; // [esp+5Ch] [ebp-10h]
  int v31; // [esp+60h] [ebp-Ch]
  int v32; // [esp+64h] [ebp-8h]
  _DWORD *v33; // [esp+68h] [ebp-4h]
  int v34; // [esp+70h] [ebp+4h] BYREF
  int *v35; // [esp+74h] [ebp+8h]
  __int64 v36; // [esp+78h] [ebp+Ch] BYREF
  char v37; // [esp+80h] [ebp+14h] BYREF

  v2 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 110))(this, &v24); /*0x43d046*/
  vtable0 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x43d048*/
  *(_DWORD *)v25 = v2; /*0x43d04c*/
  result = vtable0[27](this); /*0x43d050*/
  v5 = result; /*0x43d053*/
  v24 = result; /*0x43d057*/
  if ( result ) /*0x43d05b*/
  {
    LOBYTE(result) = this->Type->InvisibleInGame; /*0x43d067*/
    if ( !(_BYTE)result ) /*0x43d06f*/
    {
      if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) != 24 /*0x43d091*/
        || (result = Flag::CheckNone((Flag *)this->?), (_BYTE)result) )
      {
        if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 16 /*0x43d0ac*/
          && *(_DWORD *)&this->Type->__pad_F70[1396] )
        {
          Type = AbstractClass::GetType((AbstractClass *)this->Factory); /*0x43d0bc*/
          if ( Type && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)Type + 132))(Type) + 3476) ) /*0x43d0cf*/
            v5 = *(_DWORD *)&this->Type->__pad_F70[1420]; /*0x43d0df*/
          else
            v5 = *(_DWORD *)&this->Type->__pad_F70[1396]; /*0x43d0ed*/
          v24 = v5; /*0x43d0f3*/
        }
        v7 = v35; /*0x43d0fc*/
        v8 = *(_DWORD *)(v34 + 4); /*0x43d103*/
        v28 = *(_DWORD *)v34; /*0x43d106*/
        v29 = v8; /*0x43d10a*/
        v34 = *(__int16 *)(v5 + 4); /*0x43d112*/
        v9 = v8 - v34 / 2; /*0x43d11d*/
        v30 = *v35; /*0x43d123*/
        v31 = v35[1]; /*0x43d12a*/
        v32 = v35[2]; /*0x43d131*/
        v33 = (_DWORD *)v35[3]; /*0x43d13a*/
        v10 = (int)v33; /*0x43d135*/
        if ( (int)v33 > v9 ) /*0x43d13e*/
        {
          v10 = v8 - v34 / 2; /*0x43d140*/
          v33 = (_DWORD *)v10; /*0x43d142*/
        }
        if ( v10 > 0 ) /*0x43d148*/
        {
          v11 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x43d15e*/
          v12 = (*((int (__thiscall **)(BuildingClass *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass /*0x43d173*/
                 + 116))(
                  this,
                  2,
                  0,
                  v11[133],
                  0,
                  0,
                  0,
                  0,
                  0,
                  0);
          v22 = -2 - ZCoordToScreenY(v12); /*0x43d18f*/
          ProductionFrame = BuildingClass::GetProductionFrame(this); /*0x43d19b*/
          ((void (__thiscall *)(BuildingClass *, int, int, __int64 *, char *, _DWORD, int, int))loc_705E00)( /*0x43d1a4*/
            this,
            v5,
            ProductionFrame,
            &v36,
            &v37,
            0,
            256,
            v22);
          v8 = v29; /*0x43d1a9*/
        }
        v27 = v8; /*0x43d1af*/
        v14 = *v7; /*0x43d1b5*/
        v27 = v8 - v9; /*0x43d1b7*/
        v30 = v14; /*0x43d1bb*/
        v15 = v7[1]; /*0x43d1bf*/
        result = v9 + v15; /*0x43d1c5*/
        v16 = v7[2]; /*0x43d1c7*/
        v31 = v9 + v15; /*0x43d1ca*/
        v32 = v16; /*0x43d1ce*/
        v17 = v34; /*0x43d1d2*/
        v33 = (_DWORD *)v7[3]; /*0x43d1d9*/
        v26 = v28; /*0x43d1e1*/
        v18 = v15 + v7[3]; /*0x43d1e8*/
        v33 = (_DWORD *)v34; /*0x43d1f0*/
        if ( v9 + v15 + v34 > v18 ) /*0x43d1f5*/
        {
          v17 = v18 - result; /*0x43d1f9*/
          v33 = (_DWORD *)(v18 - result); /*0x43d1fb*/
        }
        if ( result < v15 ) /*0x43d201*/
        {
          result = v9; /*0x43d205*/
          v31 = v15; /*0x43d209*/
          v17 += v9; /*0x43d20d*/
          v33 = (_DWORD *)v17; /*0x43d215*/
          v27 += v9; /*0x43d219*/
        }
        if ( v17 > 0 ) /*0x43d21f*/
        {
          v19 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x43d235*/
          v20 = (*((int (__thiscall **)(BuildingClass *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass /*0x43d24a*/
                 + 116))(
                  this,
                  0,
                  0,
                  v19[133],
                  0,
                  0,
                  0,
                  0,
                  0,
                  0);
          v23 = -ZCoordToScreenY(v20); /*0x43d259*/
          v21 = BuildingClass::GetProductionFrame(this); /*0x43d26d*/
          return ((int (__thiscall *)(BuildingClass *, _DWORD *, int, int *, char *, _DWORD, int, int))loc_705E00)( /*0x43d27a*/
                   this,
                   v33,
                   v21,
                   &v34,
                   &v37,
                   0,
                   256,
                   v23);
        }
      }
    }
  }
  return result; /*0x43d27f*/
}



// ==== 0x0043D290  BuildingClass::Draw  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Draw(BuildingClass *this)
{
  double v1; // st7
  int v3; // edx
  int (__thiscall **vtable0)(BuildingClass *); // eax
  int result; // eax
  int *Anims; // ecx
  int v7; // edx
  int (__usercall **v8)@<eax>(BuildingClass *@<ecx>); // edx
  int v9; // edi
  int v10; // edi
  int v11; // eax
  int v12; // edx
  unsigned __int8 v13; // bl
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  unsigned __int8 v19; // bl
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  _DWORD *v23; // eax
  CellClass *v24; // eax
  double v25; // st7
  int v26; // eax
  int v27; // ebx
  int GateStages; // eax
  int v29; // ebp
  __int16 *v30; // eax
  int v31; // eax
  int v32; // eax
  BuildingTypeClass *Type; // ecx
  BuildingTypeClass *v34; // edx
  int v35; // eax
  int v36; // eax
  int v37; // ebp
  int *v38; // eax
  BuildingTypeClass *v39; // ecx
  int v40; // ebx
  int v41; // kr08_4
  __int16 *v42; // eax
  int v43; // eax
  int v44; // eax
  __int16 *v45; // eax
  int v46; // eax
  int ProductionFrame; // eax
  __int16 *v48; // eax
  int v49; // eax
  __int16 *v50; // eax
  int v51; // eax
  MixFileClass *v52; // [esp+62h] [ebp-5Ch]
  int v53; // [esp+6Ah] [ebp-54h]
  int v54; // [esp+6Eh] [ebp-50h]
  int v55; // [esp+72h] [ebp-4Ch]
  int v56; // [esp+72h] [ebp-4Ch]
  int v57; // [esp+72h] [ebp-4Ch]
  unsigned __int8 v58; // [esp+87h] [ebp-37h]
  unsigned __int8 v59; // [esp+87h] [ebp-37h]
  unsigned __int8 v60; // [esp+88h] [ebp-36h]
  unsigned __int8 v61; // [esp+88h] [ebp-36h]
  char v62; // [esp+89h] [ebp-35h]
  int v63; // [esp+8Ah] [ebp-34h]
  __int16 v64[2]; // [esp+8Eh] [ebp-30h] BYREF
  int v65; // [esp+92h] [ebp-2Ch]
  MixFileClass *v66; // [esp+96h] [ebp-28h]
  __int16 v67[4]; // [esp+9Ah] [ebp-24h] BYREF
  int v68; // [esp+A2h] [ebp-1Ch]
  int v69; // [esp+A6h] [ebp-18h]
  int v70; // [esp+AAh] [ebp-14h] BYREF
  int v71; // [esp+AEh] [ebp-10h]
  _BYTE v72[4]; // [esp+B2h] [ebp-Ch] BYREF
  int v73; // [esp+B6h] [ebp-8h]
  void *retaddr; // [esp+BEh] [ebp+0h]
  int v75; // [esp+C2h] [ebp+4h]
  int v76; // [esp+C6h] [ebp+8h]
  int v77; // [esp+E6h] [ebp+28h]
  int v78; // [esp+EAh] [ebp+2Ch]

  v3 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, __int16 *))this->TechnoClass + 110))(this, v67); /*0x43d2a8*/
  vtable0 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x43d2aa*/
  *(_DWORD *)v64 = v3; /*0x43d2ae*/
  result = vtable0[27](this); /*0x43d2b2*/
  v63 = result; /*0x43d2b7*/
  if ( result ) /*0x43d2bb*/
  {
    if ( this /*0x43d2e8*/
      && (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 11))(this) == 6
      && !this->BuildingClass_field_int_534
      && (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 19 )
    {
      Anims = this->Anims; /*0x43d2ea*/
      v7 = 21; /*0x43d2f0*/
      do /*0x43d306*/
      {
        if ( *Anims ) /*0x43d2f5*/
          *(_BYTE *)(*Anims + 413) = 1; /*0x43d2fb*/
        ++Anims; /*0x43d302*/
        --v7; /*0x43d305*/
      }
      while ( v7 ); /*0x43d306*/
    }
    result = (int)this->Type; /*0x43d308*/
    if ( !*(_BYTE *)(result + 5889) ) /*0x43d30e*/
    {
      v8 = (int (__usercall **)@<eax>(BuildingClass *@<ecx>))this->TechnoClass; /*0x43d322*/
      v65 = *(_DWORD *)(result + 5408); /*0x43d324*/
      v68 = 198; /*0x43d32a*/
      v69 = 446; /*0x43d332*/
      v62 = 0; /*0x43d33a*/
      if ( v8[97](this) == 16 ) /*0x43d348*/
      {
        v9 = Array::Get((Array *)this, 0); /*0x43d353*/
        if ( v9 ) /*0x43d357*/
        {
          if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v9 + 132))(v9) + 3476) /*0x43d377*/
            || *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v9 + 132))(v9) + 3434) )
          {
            v62 = 1; /*0x43d381*/
          }
        }
      }
      v10 = 0; /*0x43d38c*/
      if ( !this->? ) /*0x43d390*/
      {
LABEL_22:
        if ( !(*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 88))(this) || this->? != 1 ) /*0x43d449*/
          goto LABEL_29; /*0x43d449*/
        v17 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6320); /*0x43d455*/
        v18 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2 * v17; /*0x43d45b*/
        v19 = *(_BYTE *)(v17 + v18 + 4174 + 2087); /*0x43d468*/
        v61 = *(_BYTE *)(v17 + v18 + 6260); /*0x43d475*/
        v59 = *(_BYTE *)(v17 + v18 + 6262); /*0x43d47f*/
        v20 = DDraw::GetStatus() - 1; /*0x43d488*/
        if ( v20 ) /*0x43d489*/
        {
          if ( --v20 ) /*0x43d48c*/
          {
LABEL_28:
            LOWORD(v21) = v61; /*0x43d4cc*/
            LOWORD(v20) = v59; /*0x43d4d2*/
            LOWORD(v22) = v19 >> 1; /*0x43d4dd*/
            v10 |= v20 | (32 * ((32 * v21) | v22)); /*0x43d4e9*/
LABEL_29:
            v23 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v72); /*0x43d4eb*/
            LOWORD(v66) = *v23 / 256; /*0x43d507*/
            HIWORD(v66) = v23[1] / 256; /*0x43d51f*/
            *(_DWORD *)v67 = v66; /*0x43d528*/
            v24 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v67); /*0x43d532*/
            if ( (unsigned __int8)CellClass::QuickPassable(v24) ) /*0x43d539*/
              v10 = 0; /*0x43d542*/
            if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 24 /*0x43d575*/
              && ((unsigned __int8)Window::IsVisible((Window *)this->?)
               || (unsigned __int8)BuildingClass::CheckFlag24((BuildingClass *)this->?)
               || (unsigned __int8)BuildingClass::CheckPowerFlags((BuildingClass *)this->?)) )
            {
              Animation::GetProgress((Animation *)this->?); /*0x43d584*/
              v25 = v1 * (double)this->Type->GateStages; /*0x43d58f*/
              LOWORD(v26) = Math::RoundToInt(v25); /*0x43d595*/
              v27 = v26; /*0x43d59c*/
              if ( (unsigned __int8)BuildingClass::CheckFlag24((BuildingClass *)this->?) ) /*0x43d59e*/
                v27 = this->Type->GateStages - v27; /*0x43d5b5*/
              if ( (unsigned __int8)Flag::CheckNone((Flag *)this->?) ) /*0x43d5b9*/
                v27 = 0; /*0x43d5c2*/
              if ( (unsigned __int8)BuildingClass::CheckPowerFlags((BuildingClass *)this->?) ) /*0x43d5c6*/
                v27 = this->Type->GateStages - 1; /*0x43d5db*/
              GateStages = this->Type->GateStages; /*0x43d5e2*/
              if ( v27 >= GateStages ) /*0x43d5ea*/
                v27 = GateStages - 1; /*0x43d5ec*/
              if ( v27 < 0 ) /*0x43d5f1*/
                v27 = 0; /*0x43d5f3*/
              *(_DWORD *)v67 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 27))(this); /*0x43d5fe*/
              BuildingClass::GetHealthRatio(this); /*0x43d602*/
              if ( v25 > *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5888) ) /*0x43d618*/
                v29 = 0; /*0x43d629*/
              else
                v29 = this->Type->GateStages + 1; /*0x43d626*/
              v30 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v64); /*0x43d63f*/
              v31 = (*((int (__thiscall **)(BuildingClass *, int, int, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass /*0x43d654*/
                     + 116))(
                      this,
                      2,
                      1,
                      v30[133],
                      v10,
                      0,
                      0,
                      0,
                      0,
                      0);
              v32 = ZCoordToScreenY(v31); /*0x43d65c*/
              return ((int (__thiscall *)(BuildingClass *, void *, int, int, int, _DWORD, int, int))loc_705E00)( /*0x43d683*/
                       this,
                       retaddr,
                       v27 + v29,
                       v77,
                       v78,
                       0,
                       256,
                       v73 - v32);
            }
            else
            {
              if ( (*((int (__usercall **)@<eax>(BuildingClass *@<ecx>))this->TechnoClass + 97))(this) == 16 ) /*0x43d69f*/
              {
                if ( v62 ) /*0x43d6a7*/
                {
                  Type = this->Type; /*0x43d6a9*/
                  if ( *(_DWORD *)&Type->__pad_F70[1420] ) /*0x43d6af*/
                  {
                    v63 = *(_DWORD *)&Type->__pad_F70[1420]; /*0x43d7d2*/
                    v65 = -40; /*0x43d7d6*/
                  }
                }
                else
                {
                  v34 = this->Type; /*0x43d6bf*/
                  if ( *(_DWORD *)&v34->__pad_F70[1396] ) /*0x43d6c5*/
                  {
                    v63 = *(_DWORD *)&v34->__pad_F70[1396]; /*0x43d6cf*/
                    v65 = -20; /*0x43d6d3*/
                  }
                }
              }
              v35 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this); /*0x43d6df*/
              if ( v35 != 18 && v35 != 19 ) /*0x43d6ed*/
              {
                v36 = *(_DWORD *)&this->Type->__pad_F70[1476]; /*0x43d6fc*/
                v68 = *(_DWORD *)&this->Type->__pad_F70[1472] + 198; /*0x43d70a*/
                v69 = v36 + 446; /*0x43d70e*/
              }
              v37 = (BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0) << 8) - 256; /*0x43d72a*/
              v70 = (BuildingTypeClass::GetFoundationWidth(this->Type) << 8) - 256; /*0x43d74d*/
              v71 = v37; /*0x43d751*/
              v38 = TacticalClass::AdjustForZShapeMove((int *)v67, &v70); /*0x43d755*/
              v39 = this->Type; /*0x43d76e*/
              v40 = v69 - v38[1]; /*0x43d774*/
              v68 -= *v38; /*0x43d776*/
              v69 = v40; /*0x43d77a*/
              v66 = dword_89DDBC; /*0x43d77e*/
              if ( BuildingTypeClass::GetFoundationWidth(v39) >= 8 ) /*0x43d78a*/
                v66 = 0; /*0x43d78c*/
              if ( *(int *)(v76 + 12) > 0 ) /*0x43d7a1*/
              {
                v41 = *(__int16 *)(v63 + 6); /*0x43d7c1*/
                if ( BuildingClass::GetProductionFrame(this) < v41 / 2 ) /*0x43d7c7*/
                  BuildingClass::GetProductionFrame(this); /*0x43d7cb*/
                v54 = v69; /*0x43d802*/
                v53 = v68; /*0x43d803*/
                v52 = v66; /*0x43d806*/
                v42 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v64); /*0x43d812*/
                v43 = (*((int (__thiscall **)(BuildingClass *, int, int, int, int, MixFileClass *, _DWORD, int, int, _DWORD))this->TechnoClass /*0x43d836*/
                       + 116))(
                        this,
                        2,
                        1,
                        *(__int16 *)this->Type->ExtraLight + v42[133],
                        v10,
                        v52,
                        0,
                        v53,
                        v54,
                        0);
                v44 = ZCoordToScreenY(v43); /*0x43d83e*/
                ((void (__thiscall *)(BuildingClass *, int, int, int, int, _DWORD, int, int))loc_705E00)( /*0x43d85f*/
                  this,
                  v71,
                  v78,
                  v75,
                  v76,
                  0,
                  256,
                  v73 - v44);
              }
              if ( *(_DWORD *)&this->Type->__pad_F70[1448] && this->BuildingClass_field_int_534 ) /*0x43d874*/
              {
                v45 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v64); /*0x43d892*/
                v46 = (*((int (__thiscall **)(BuildingClass *, _DWORD, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass /*0x43d8b6*/
                       + 116))(
                        this,
                        0,
                        1,
                        *(__int16 *)this->Type->ExtraLight + v45[133],
                        v10,
                        0,
                        0,
                        0,
                        0,
                        0);
                v55 = -1 - ZCoordToScreenY(v46); /*0x43d8c8*/
                ProductionFrame = BuildingClass::GetProductionFrame(this); /*0x43d8d4*/
                ((void (__thiscall *)(BuildingClass *, _DWORD, int, int, int, _DWORD, int, int))loc_705E00)( /*0x43d8e9*/
                  this,
                  *(_DWORD *)&this->Type->__pad_F70[1448],
                  ProductionFrame,
                  v75,
                  v76,
                  0,
                  256,
                  v55);
              }
              result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this); /*0x43d8f2*/
              if ( result == 16 ) /*0x43d8fb*/
              {
                if ( v62 ) /*0x43d907*/
                {
                  result = (int)this->Type; /*0x43d909*/
                  if ( *(_DWORD *)(result + 5380) ) /*0x43d90f*/
                  {
                    BuildingClass::GetHealthRatio(this); /*0x43d9da*/
                    v50 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v64); /*0x43da16*/
                    v51 = (*((int (__thiscall **)(BuildingClass *, _DWORD, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass /*0x43da3a*/
                           + 116))(
                            this,
                            0,
                            1,
                            *(__int16 *)this->Type->ExtraLight + v50[133],
                            v10,
                            0,
                            0,
                            0,
                            0,
                            0);
                    v57 = -ZCoordToScreenY(v51); /*0x43da55*/
                    return ((int (__thiscall *)(BuildingClass *, _DWORD, int, int, int, _DWORD, int, int))loc_705E00)( /*0x43da67*/
                             this,
                             *(_DWORD *)&this->Type->__pad_F70[1428],
                             v78,
                             v75,
                             v76,
                             0,
                             256,
                             v57);
                  }
                }
                else
                {
                  result = *(_DWORD *)&this->Type->__pad_F70[1404]; /*0x43d92d*/
                  if ( result ) /*0x43d935*/
                  {
                    BuildingClass::GetHealthRatio(this); /*0x43d93d*/
                    v48 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v64); /*0x43d978*/
                    v49 = (*((int (__thiscall **)(BuildingClass *, _DWORD, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass /*0x43d99c*/
                           + 116))(
                            this,
                            0,
                            1,
                            *(__int16 *)this->Type->ExtraLight + v48[133],
                            v10,
                            0,
                            0,
                            0,
                            0,
                            0);
                    v56 = -ZCoordToScreenY(v49); /*0x43d9b7*/
                    return ((int (__thiscall *)(BuildingClass *, _DWORD, int, int, int, _DWORD, int, int))loc_705E00)( /*0x43d9c9*/
                             this,
                             *(_DWORD *)&this->Type->__pad_F70[1404],
                             v78,
                             v75,
                             v76,
                             0,
                             256,
                             v56);
                  }
                }
              }
            }
            return result; /*0x43d68f*/
          }
          LOWORD(v21) = v59; /*0x43d494*/
          LOWORD(v22) = v19; /*0x43d4a0*/
          v20 = v21 | (32 * (v22 | (v61 << 6))); /*0x43d4a7*/
          v10 |= v20; /*0x43d4a9*/
        }
        LOWORD(v21) = v61; /*0x43d4ab*/
        LOWORD(v22) = v19 >> 1; /*0x43d4b8*/
        LOWORD(v20) = v59; /*0x43d4ba*/
        v21 *= 32; /*0x43d4c0*/
        v22 = v20 | ((v21 | v22) << 6); /*0x43d4c8*/
        v10 |= v22; /*0x43d4ca*/
        goto LABEL_28; /*0x43d4ca*/
      }
      v11 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6308); /*0x43d39c*/
      v12 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2 * v11; /*0x43d3a2*/
      v13 = *(_BYTE *)(v11 + v12 + 4174 + 2087); /*0x43d3af*/
      v58 = *(_BYTE *)(v11 + v12 + 6260); /*0x43d3bc*/
      v60 = *(_BYTE *)(v11 + v12 + 6262); /*0x43d3c6*/
      v14 = DDraw::GetStatus() - 1; /*0x43d3cf*/
      if ( v14 ) /*0x43d3d0*/
      {
        if ( --v14 ) /*0x43d3d3*/
        {
LABEL_21:
          LOWORD(v16) = v58; /*0x43d411*/
          LOWORD(v15) = v60; /*0x43d417*/
          LOWORD(v14) = v13 >> 1; /*0x43d422*/
          v10 |= v15 | (32 * ((32 * v16) | v14)); /*0x43d42e*/
          goto LABEL_22; /*0x43d42e*/
        }
        LOWORD(v10) = v58; /*0x43d3d5*/
        LOWORD(v16) = v60; /*0x43d3db*/
        v10 = v16 | (32 * (v13 | (v10 << 6))); /*0x43d3ee*/
      }
      LOWORD(v16) = v58; /*0x43d3f0*/
      LOWORD(v14) = v13 >> 1; /*0x43d3fd*/
      LOWORD(v15) = v60; /*0x43d3ff*/
      v16 *= 32; /*0x43d405*/
      v14 = v15 | ((v16 | v14) << 6); /*0x43d40d*/
      v10 |= v14; /*0x43d40f*/
      goto LABEL_21; /*0x43d40f*/
    }
  }
  return result; /*0x43d688*/
}



// ==== 0x0043DA80  BuildingClass::DrawPlacementPreview  this=BuildingClass  sig=csp ====
int __thiscall FootClass::DrawPlacementPreview(BuildingClass *this)
{
  double v1; // st7
  int v3; // edx
  int (__thiscall **vtable0)(BuildingClass *); // eax
  int i; // edi
  int *v6; // eax
  int *v7; // esi
  int v8; // eax
  float v9; // ecx
  float v10; // edx
  _DWORD *v11; // eax
  AirstrikeClass *airstrike; // eax
  int v13; // esi
  int v14; // eax
  int v15; // edx
  unsigned __int8 v16; // bl
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  int v21; // edx
  unsigned __int8 v22; // bl
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  _DWORD *v26; // eax
  CellClass *v27; // eax
  int result; // eax
  int v29; // eax
  int v30; // edi
  int DoorStages; // eax
  BuildingTypeClass *Type; // eax
  int v33; // eax
  int v34; // esi
  int v35; // ecx
  BuildingTypeClass *v36; // ecx
  char v37; // dl
  unsigned int v38; // ebx
  unsigned int v39; // edi
  BuildingTypeClass *v40; // eax
  int v41; // esi
  int v42; // ecx
  int v43; // ecx
  int v4... [23647 chars total]



// ==== 0x0043E7B0  BuildingClass::DrawVisible  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::DrawVisible(BuildingClass *this, int *a2, int *a3)
{
  int v4; // eax
  FactoryClass *BuildLimit; // eax
  int Type; // eax
  int v7; // eax
  int v8; // eax
  _DWORD v9[2]; // [esp+Ch] [ebp-8h] BYREF

  (*((void (__thiscall **)(BuildingClass *, _DWORD *))this->TechnoClass + 110))(this, v9); /*0x43e7c1*/
  if ( this->? /*0x43e80c*/
    && ((unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->?, (#375 *)dword_A83D4C)
     || ((1 << *((_DWORD *)dword_A83D4C->Object_field_0x34 + 46)) & this->?[0]) != 0) )
  {
    v4 = *a2 - 10; /*0x43e816*/
    v9[1] = a2[1] + 10; /*0x43e819*/
    v9[0] = v4; /*0x43e822*/
    (*((void (__thiscall **)(BuildingClass *, _DWORD *, int *, int *))this->TechnoClass + 278))(this, v9, a2, a3); /*0x43e82c*/
  }
  if ( ((1 << *((_DWORD *)dword_A83D4C->Object_field_0x34 + 46)) & this->?[0]) != 0 && this->? ) /*0x43e856*/
  {
    if ( (unsigned __int8)House::IsCurrentPlayer((House *)this->?) ) /*0x43e86a*/
      BuildLimit = (FactoryClass *)HouseClass::GetBuildLimit(this->?, this->Type->Factory[0], this->Type->?[1], 0); /*0x43e88f*/
    else
      BuildLimit = this->Factory; /*0x43e896*/
    if ( BuildLimit ) /*0x43e89e*/
    {
      Type = AbstractClass::GetType((AbstractClass *)BuildLimit); /*0x43e8a2*/
      if ( Type ) /*0x43e8a9*/
      {
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)Type + 132))(Type); /*0x43e8b4*/
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 152))(v7); /*0x43e8d3*/
        DrawToSurfaceSHP( /*0x43e8e6*/
          (int)g_DSurface_Hidden_2,
          *(int *)&stru_87F5F0.__pad_58[124],
          v8,
          0,
          a2,
          a3,
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
}



// ==== 0x0043E900  BuildingClass::GetZDrawOffset  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetZDrawOffset(BuildingClass *this)
{
  int v2; // eax
  int v3; // eax
  BuildingTypeClass *Type; // esi

  v2 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 116))(this); /*0x43e905*/
  v3 = ZCoordToScreenY(v2); /*0x43e90d*/
  Type = this->Type; /*0x43e912*/
  if ( Type->TurretAnimIsVoxel ) /*0x43e91c*/
    return *(_DWORD *)&Type->__pad_F70[632] - v3; /*0x43e92d*/
  else
    return -v3; /*0x43e930*/
}



// ==== 0x0043E940  TechnoClass::ComputeTargetAngle  this=BuildingClass  sig=csp ====
int __thiscall TechnoClass::ComputeTargetAngle(TechnoClass *this)
{
  int v1; // ebx
  int v2; // edi
  double v3; // st7
  int *TargetCoords; // eax
  int v6; // edi
  int (__thiscall **vtable0)(TechnoClass *, _DWORD); // edx
  int v8; // ebx
  int v9; // eax
  int (__thiscall **v10)(TechnoClass *, double *); // edx
  int *v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // esi
  unsigned int v16; // ecx
  unsigned int v17; // eax
  _DWORD *v18; // eax
  int v19; // edi
  int v20; // ebx
  int v21; // esi
  int result; // eax
  _DWORD *v24; // eax
  int *v25; // eax
  int v26; // edx
  int *v27; // eax
  TechnoClass *v29; // eax
  int v30; // ebx
  int *v31; // eax
  int v32; // edx
  _DWORD *v33; // eax
  int v34; // edi
  int v36; // eax
  char IsCloseEnoughToBuilding; // al
  int v39; // eax
  char v40; // al
  int v41; // [esp+24h] [ebp-64h]
  int v42; // [esp+24h] [ebp-64h]
  double v43; // [esp+28h] [ebp-60h]
  double v44; // [esp+2Ch] [ebp-5Ch]
  double v45; // [esp+2Ch] [ebp-5Ch]
  double v46; // [esp+30h] [ebp-58h]
  double v47; // [esp+30h] [ebp-58h]
  double v48; // [esp+30h] [ebp-58h]
  double v49; // [esp+30h] [ebp-58h]
  int *v50; // [esp+38h] [ebp-50h]
  int v51; // [esp+3Ch] [ebp-4Ch]
  int v52[3]; // [esp+44h] [ebp-44h] BYREF
  double v53[2]; // [esp+50h] [ebp-38h] BYREF
  int v54; // [esp+64h] [ebp-24h]
  int v55; // [esp+68h] [ebp-20h]
  int v56; // [esp+6Ch] [ebp-1Ch]
  int v57; // [esp+70h] [ebp-18h] BYREF
  int v58; // [esp+74h] [ebp-14h]
  int v59; // [esp+78h] [ebp-10h]
  int v60[2]; // [esp+7Ch] [ebp-Ch] BYREF
  int v61; // [esp+84h] [ebp-4h]
  int savedregs; // [esp+88h] [ebp+0h] BYREF
  _WORD *v63; // [esp+90h] [ebp+8h]
  int *v64; // [esp+94h] [ebp+Ch]

  if ( *(_BYTE *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 254))(this, 0) + 329) ) /*0x43e95a*/
  {
    (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x43e96c*/
    if ( v64 ) /*0x43e977*/
    {
      TargetCoords = TechnoClass::GetTargetCoords(this, v60); /*0x43e984*/
      v6 = *TargetCoords; /*0x43e989*/
      vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass; /*0x43e98b*/
      v8 = TargetCoords[1]; /*0x43e98f*/
      v61 = TargetCoords[2]; /*0x43e995*/
      v9 = vtable0[254](this, 0); /*0x43e99b*/
      v10 = (int (__thiscall **)(TechnoClass *, double *))this->RadioClass; /*0x43e9a4*/
      v59 = *(_DWORD *)(v9 + 12); /*0x43e9a6*/
      v11 = (int *)v10[43](this, v53); /*0x43e9b1*/
      v12 = *v11; /*0x43e9b7*/
      v13 = v11[1]; /*0x43e9b9*/
      v14 = v11[2]; /*0x43e9bc*/
      v15 = this->gattlingValue; /*0x43e9bf*/
      v58 = v13; /*0x43e9c9*/
      v16 = *(_DWORD *)(v15 + 4576); /*0x43e9cd*/
      v54 = v12; /*0x43e9d3*/
      v59 += v14; /*0x43e9d7*/
      v17 = *(_DWORD *)(v15 + 4580); /*0x43e9db*/
      v57 = v12; /*0x43e9e1*/
      *(_QWORD *)&v53[0] = __PAIR64__(v17, v16); /*0x43e9f1*/
      v18 = (_DWORD *)World::ToScreen(&v52[1], v53, v50); /*0x43e9fd*/
      v19 = v6 - (v54 + *v18); /*0x43ea11*/
      v20 = v8 - (v18[1] + v58); /*0x43ea1d*/
      v54 = v19; /*0x43ea21*/
      v21 = v61 - v59; /*0x43ea25*/
      v55 = v20; /*0x43ea27*/
      v56 = v61 - v59; /*0x43ea2b*/
      if ( v61 == v59 ) /*0x43ea2f*/
      {
        *v63 = 0x4000; /*0x43ea34*/
        return (int)v63; /*0x43ea31*/
      }
      else
      {
        v52[1] = v19 * v19 + v20 * v20; /*0x43ea51*/
        __asm /*0x43ea55*/
        {
          fild [esp+58h+var_44+4]
          fstp [esp+58h+var_58]; double
        }
        Math::Sqrt(v46); /*0x43ea5c*/
        __asm /*0x43ea61*/
        {
          fstp qword ptr [esp+58h+var_38]
          fild [esp+58h+var_20]
          fild [esp+58h+var_1C]
          fild [esp+58h+var_24]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fld st(3)
          fmul st, st(4)
          faddp st(1), st
          fstp [esp+58h+var_58]; double
          fstp st
          fstp st
          fstp st
        }
        Math::Sqrt(v47); /*0x43ea8a*/
        LOWORD(_EAX) = Math::RoundToInt(v3); /*0x43ea92*/
        v52[1] = _EAX; /*0x43ea97*/
        __asm /*0x43ea9b*/
        {
          fild [esp+50h+var_44+4]
          fdivr qword ptr [esp+50h+var_38]
          fst qword ptr [esp+50h+var_38]
          fcomp ds:dbl_7E1718
          fnstsw ax
        }
        if ( (_EAX & 0x4100) == 0 ) /*0x43eab2*/
          v53[0] = 1.0; /*0x43eab4*/
        BuildingLight::CalcIntensity(v53[0]); /*0x43eace*/
        __asm { fmul ds:dbl_7E4418 } /*0x43ead3*/
        __asm { fmul ds:dbl_7E4410 }
        LOWORD(v52[1]) = Math::RoundToInt(v3); /*0x43eae9*/
        result = (int)v63; /*0x43eafb*/
        if ( v21 < 0 ) /*0x43eaee*/
          LOWORD(v52[1]) = 0x8000 - LOWORD(v52[1]); /*0x43eafe*/
        *(_DWORD *)v63 = v52[1]; /*0x43eb07*/
      }
    }
    else
    {
      *(_DWORD *)v63 = *ProgressTimer::GetValue((ProgressTimer *)this->barrelFacing, v53); /*0x43eb39*/
      return (int)v63; /*0x43eb36*/
    }
  }
  else if ( *(_BYTE *)(this->gattlingValue + 5827) ) /*0x43eb4a*/
  {
    v24 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(*v64 + 72))(v64, v60); /*0x43eb64*/
    Cell::GetGroundHeight(v24); /*0x43eb6d*/
    v25 = (int *)(*(int (__thiscall **)(int *, int *))(*v64 + 72))(v64, &v57); /*0x43eb7b*/
    v26 = v25[1]; /*0x43eb80*/
    v54 = *v25; /*0x43eb8a*/
    v55 = v26; /*0x43eb90*/
    v27 = (int *)(*((int (__thiscall **)(TechnoClass *, int *, _DWORD, _DWORD, _DWORD, _DWORD))this->RadioClass + 44))( /*0x43eba6*/
                   this,
                   v60,
                   0,
                   0,
                   0,
                   0);
    __asm { fild [esp+50h+var_24] } /*0x43ebac*/
    v57 = *v27; /*0x43ebb5*/
    __asm { fisub [esp+60h+var_18] } /*0x43ebbc*/
    v58 = v27[1]; /*0x43ebc3*/
    v59 = v27[2]; /*0x43ebca*/
    __asm /*0x43ebce*/
    {
      fstp [esp+60h+var_58]; double
      fild [esp+60h+var_14]
      fisub [esp+60h+var_20]
      fstp [esp+60h+var_64+4]; double
    }
    Math::CalcAngle(v43, v48); /*0x43ebdd*/
    _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43ebe2*/
    __asm /*0x43ebeb*/
    {
      fstp st
      fild dword ptr [ecx+16B8h]
    }
    __asm { fstp [esp+58h+var_58]; double }
    v29 = (TechnoClass *)ObjectClass::DistanceTo((ObjectClass *)this, (int)v64); /*0x43ebf9*/
    v30 = TechnoClass::ComputeScanRange(v29, v49); /*0x43ec07*/
    v31 = (int *)(*((int (__thiscall **)(TechnoClass *, int *, _DWORD))this->RadioClass + 192))(this, v60, 0); /*0x43ec12*/
    v54 = *v31; /*0x43ec1a*/
    v55 = v31[1]; /*0x43ec23*/
    v32 = *v64; /*0x43ec27*/
    v56 = v31[2]; /*0x43ec2c*/
    v33 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(v32 + 72))(v64, v60); /*0x43ec35*/
    v34 = v33[2] - v56; /*0x43ec50*/
    _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43ec5c*/
    LODWORD(v53[0]) = (*v33 - v54) * (*v33 - v54) + (v33[1] - v55) * (v33[1] - v55); /*0x43ec64*/
    __asm { fild [esp+50h+var_38] } /*0x43ec6c*/
    __asm
    {
      fstp qword ptr [esp+5Ch+var_38]
      fild dword ptr [ecx+16B8h]
    }
    __asm { fstp qword ptr [esp]; double }
    Math::Sqrt(v53[0]); /*0x43ec8c*/
    LOWORD(v36) = Math::RoundToInt(v3); /*0x43ec94*/
    v41 = v36; /*0x43ec99*/
    IsCloseEnoughToBuilding = TechnoClass::IsCloseEnoughToBuilding(this, 0); /*0x43ec9e*/
    if ( !(unsigned __int8)ComputeMathFacingAngle(IsCloseEnoughToBuilding, v30, v41, v34, v44, &v52[1]) ) /*0x43eca7*/
    {
      _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43ecb0*/
      __asm { fild dword ptr [edx+16B8h] } /*0x43ecbe*/
      __asm { fstp qword ptr [esp]; double }
      Math::Sqrt(v53[0]); /*0x43ecd2*/
      LOWORD(v39) = Math::RoundToInt(v3); /*0x43ecda*/
      v42 = v39; /*0x43ecdf*/
      v40 = TechnoClass::IsCloseEnoughToBuilding(this, 0); /*0x43ecf4*/
      ComputeMathFacingAngle(v40, 10 * v30 / 8, v42, v34, v45, &v52[1]); /*0x43ecfd*/
    }
    *(_DWORD *)v63 = v52[1]; /*0x43ed09*/
    return (int)v63; /*0x43ed02*/
  }
  else
  {
    *(_DWORD *)v63 = *TechnoClass::GetFiringAngle((TechnoClass *)v53, v1, (int)&savedregs, v2, v64, (int)v50, v51); /*0x43ed2b*/
    return (int)v63; /*0x43ed26*/
  }
  return result; /*0x43ea39*/
}



// ==== 0x0043ED40  BuildingClass::GetTurretAngle  this=BuildingClass  sig=csp ====
int __thiscall FootClass::GetTurretAngle(BuildingClass *this)
{
  double v1; // st7
  int v3; // esi
  BuildingTypeClass *Type; // ecx
  int v5; // edi
  int *v6; // eax
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // edx
  int *v10; // eax
  int *v12; // [esp+18h] [ebp-24h]
  int v13[3]; // [esp+24h] [ebp-18h] BYREF
  int v14; // [esp+30h] [ebp-Ch] BYREF
  int v15; // [esp+34h] [ebp-8h]
  int v16; // [esp+38h] [ebp-4h]
  int *v17; // [esp+40h] [ebp+4h]
  int v18; // [esp+44h] [ebp+8h]
  int v19; // [esp+44h] [ebp+8h]

  v16 = dword_89C850; /*0x43ed4b*/
  v3 = g_BuildingClassPool; /*0x43ed50*/
  Type = this->Type; /*0x43ed56*/
  v5 = dword_89C84C; /*0x43ed5d*/
  if ( Type->PrimaryFirePixelOffset[0] != 0xFFFF || Type->PrimaryFirePixelOffset[1] != 0xFFFF ) /*0x43ed7e*/
  {
    v6 = (int *)World::ToScreen(v13, Type->PrimaryFirePixelOffset, v12); /*0x43ed86*/
LABEL_7:
    v3 = *v6; /*0x43edb9*/
    v5 = v6[1]; /*0x43edc0*/
    v16 = 0; /*0x43edc2*/
    goto LABEL_8; /*0x43edc2*/
  }
  v7 = *(_DWORD *)&Type->__pad_F70[628]; /*0x43ed88*/
  v13[0] = *(_DWORD *)&Type->__pad_F70[624]; /*0x43ed96*/
  v13[1] = v7; /*0x43ed9a*/
  if ( v13[0] || v7 ) /*0x43eda2*/
  {
    v6 = (int *)World::ToScreen(&v14, v13, v12); /*0x43edb4*/
    goto LABEL_7; /*0x43edb4*/
  }
LABEL_8:
  v8 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 18))(this, v13); /*0x43edc6*/
  v9 = v8[1]; /*0x43edd4*/
  v14 = v3 + *v8; /*0x43eddb*/
  v15 = v5 + v9; /*0x43ede3*/
  v10 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v18 + 72))(v18, v13); /*0x43edee*/
  v19 = *v10; /*0x43edf6*/
  Math::CalcAngle((double)v15 - (double)v10[1], (double)*v10 - (double)v14); /*0x43ee13*/
  LOWORD(v19) = Math::RoundToInt((v1 - 1.570796326794897) * -10430.06004058427); /*0x43ee2c*/
  *v17 = v19; /*0x43ee3b*/
  return (int)v17; /*0x43ee39*/
}



// ==== 0x0043EE50  ObjectClass::method_43EE50  this=ObjectClass  sig=csp ====
int __thiscall sub_43EE50(TechnoClass *this)
{
  _DWORD *Value; // eax
  int v3; // esi
  int result; // eax
  int v5; // [esp+8h] [ebp-4h] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 1020))(this) || !this->q058 ) /*0x43ee63*/
    return 0; /*0x43eea7*/
  Value = ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v5); /*0x43ee76*/
  v3 = this->q058; /*0x43ee7d*/
  result = dword_7F4890[((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F]; /*0x43ee8e*/
  if ( v3 ) /*0x43ee95*/
  {
    *(_DWORD *)(v3 + 172) = result; /*0x43ee97*/
    *(_DWORD *)(v3 + 196) = 0; /*0x43ee9d*/
  }
  return result; /*0x43eea3*/
}



// ==== 0x0043EEB0  BuildingClass::Cleanup  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::Cleanup(BuildingClass *this, int a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  char v5[64]; // [esp+8h] [ebp-40h] BYREF

  if ( a2 != this->SuperWeaponToken && !this->Type->TurretAnimIsVoxel ) /*0x43eecd*/
  {
    BuildingClass::ClearAnims(this, 9); /*0x43eedf*/
    if ( a2 != -1 ) /*0x43eee7*/
    {
      strcpy(v5, this->Type->?); /*0x43ef17*/
      v3 = strlen(asc_818D7C) + 1; /*0x43ef38*/
      qmemcpy(&v5[strlen(v5)], asc_818D7C, v3); /*0x43ef45*/
      v4 = strlen(v5); /*0x43ef5f*/
      v5[v4] = a2 + 66; /*0x43ef62*/
      v5[v4 + 1] = 0; /*0x43ef66*/
      BuildingClass::PlayAnim(this, v3, v5, 9, 0, 0, 0); /*0x43ef72*/
      this->SuperWeaponToken = a2; /*0x43ef78*/
    }
  }
}



// ==== 0x0043EF90  BuildingClass::GetProductionFrame  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetProductionFrame(BuildingClass *this)
{
  BuildingTypeClass *Type; // eax
  int v3; // edi
  BuildingTypeClass *v12; // esi
  int v13; // edx
  int v14; // eax
  int v15; // edx
  int v16; // edx

  Type = this->Type; /*0x43ef94*/
  v3 = this->?[0]; /*0x43ef9a*/
  if ( Type->LaserFence ) /*0x43efa0*/
    return this->LaserFenceFrame; /*0x43efb2*/
  if ( Type->FirestormWall ) /*0x43efb3*/
    return this->FirestormWallFrame; /*0x43efc5*/
  if ( !this->BuildingClass_field_int_534 ) /*0x43efc6*/
  {
    if ( Type->Gate ) /*0x43efd0*/
      v3 = Type->BuildingAnimFrame[0] + Type->BuildingAnimFrame[1] - v3 - 1; /*0x43efeb*/
    if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 19 ) /*0x43effa*/
      return this->Type->BuildingAnimFrame[3 * this->BuildingClass_field_int_534] /*0x43f02b*/
           + this->Type->BuildingAnimFrame[3 * this->BuildingClass_field_int_534 + 1]
           - v3
           - 1;
    return v3; /*0x43f16f*/
  }
  if ( Type->CanBeOccupied ) /*0x43f02c*/
  {
    v3 = 0; /*0x43f03e*/
    if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) > 0 ) /*0x43f048*/
      v3 = 2; /*0x43f04a*/
    BuildingClass::GetHealthRatio(this); /*0x43f051*/
    _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43f056*/
    __asm /*0x43f05c*/
    {
      fcomp qword ptr [ecx+1708h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x43f067*/
      goto LABEL_16; /*0x43f067*/
    if ( *(int *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 33))(this) + 1588) > 0 ) /*0x43f07b*/
    {
      BuildingClass::GetHealthRatio(this); /*0x43f07f*/
      _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43f084*/
      __asm /*0x43f089*/
      {
        fcomp qword ptr [eax+1700h]
        fnstsw ax
      }
      if ( (_EAX & 0x4100) != 0 ) /*0x43f094*/
LABEL_16:
        ++v3; /*0x43f096*/
    }
    if ( this->Type->? == -1 && v3 == 3 ) /*0x43f0ad*/
      return 1; /*0x43f0bc*/
    return v3; /*0x43f0ad*/
  }
  if ( !Type->Gate ) /*0x43f0c7*/
  {
    BuildingClass::GetHealthRatio(this); /*0x43f0f6*/
    _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43f0fb*/
    __asm /*0x43f101*/
    {
      fcomp qword ptr [ecx+1700h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x43f10c*/
    {
      if ( this->BuildingClass_field_int_534 == 1 ) /*0x43f115*/
        return v3 + 1; /*0x43f11c*/
      v12 = this->Type; /*0x43f11d*/
      v13 = v12->BuildingAnim[0]; /*0x43f12f*/
      v14 = v12->BuildingAnimFrame[3] + v12->BuildingAnimFrame[4]; /*0x43f135*/
      if ( v14 <= v13 + v12->BuildingAnim[1] ) /*0x43f141*/
        v14 = v13 + v12->BuildingAnim[1]; /*0x43f143*/
      v15 = v12->BuildingAnim[6]; /*0x43f14b*/
      if ( v14 <= v15 + v12->BuildingAnim[7] ) /*0x43f155*/
        v14 = v15 + v12->BuildingAnim[7]; /*0x43f157*/
      v16 = v12->BuildingAnim[9]; /*0x43f15f*/
      if ( v14 <= v16 + v12->BuildingAnim[10] ) /*0x43f169*/
        v14 = v16 + v12->BuildingAnim[10]; /*0x43f16b*/
      v3 += v14; /*0x43f16d*/
    }
    return v3; /*0x43f16d*/
  }
  BuildingClass::GetHealthRatio(this); /*0x43f0c9*/
  _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43f0ce*/
  __asm /*0x43f0d4*/
  {
    fcomp qword ptr [edx+1700h]
    fnstsw ax
  }
  if ( (_AX & 0x4100) != 0 ) /*0x43f0df*/
    return this->Type->GateStages + 1; /*0x43f0ef*/
  else
    return 0; /*0x43f0f2*/
}



// ==== 0x0043F180  BuildingClass::ProductionDisplayUpdate  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProductionDisplayUpdate(BuildingClass *this)
{
  BuildingClass *v1; // edi
  int result; // eax
  BuildingTypeClass *Type; // eax
  int v4; // ebx
  int (__thiscall **vtable0)(BuildingClass *, void *, int, int, _DWORD, int); // esi
  void *v6; // eax
  int FoundationWidth; // eax
  int *v8; // ecx
  int FoundationHeight; // eax
  int v10; // ebp
  int v11; // esi
  HouseClass *owner; // ecx
  BuildingTypeClass *v13; // eax
  int *v14; // eax
  _DWORD *v15; // eax
  int v16; // ecx
  int v17; // ebp
  int v18; // ecx
  __int16 v19; // bx
  __int16 v20; // ax
  int v21; // edx
  int v22; // eax
  int v23; // esi
  __int16 v24; // bx
  __int16 v25; // di
  BuildingClass *v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // ebp
  int v31; // esi
  __int16 v32; // bx
  BuildingClass *v33; // eax
  #374 *v34; // eax
  int (__thiscall **v35)(BuildingClass *, void *, int, int, _DWORD, int); // esi
  void *v36; // eax
  BuildingTypeClass *v37; // ecx
  void (__thiscall **v38)(BuildingClass *, int); // esi
  int v39; // eax
  int *v40; // eax
  int *Anims; // ebp
  int *v42; // esi
  _DWORD *v43; // eax
  _DWORD *v44; // eax
  int v45; // edx
  int v46; // eax
  int v47; // eax
  int *v48; // ecx
  int v49; // eax
  int v50; // ebx
  _DWORD *v51; // eax
  int v52; // ecx
  int v53; // ebp
  int v54; // ecx
  __int16 v55; // di
  __int16 v56; // ax
  int v57; // esi
  __int16 v58; // bx
  __int16 v59; // di
  BuildingClass *v60; // eax
  int v61; // edx
  int v62; // ebp
  int v63; // edi
  int v64; // esi
  BuildingClass *v65; // eax
  int v66; // eax
  int v67; // esi
  BuildingClass *v68; // eax
  _DWORD *v69; // eax
  int v70; // ecx
  int v71; // edx
  int Translucency; // ebx
  int *v73; // ecx
  int v74; // ebp
  bool v75; // zf
  int v76; // ebx
  int *v77; // ecx
  int v78; // esi
  int v79; // [esp+10h] [ebp-CCh]
  int v80; // [esp+14h] [ebp-C8h]
  int v81; // [esp+18h] [ebp-C4h]
  int v82; // [esp+2Ch] [ebp-B0h]
  int v83; // [esp+2Ch] [ebp-B0h]
  int v84; // [esp+2Ch] [ebp-B0h]
  int v85; // [esp+2Ch] [ebp-B0h]
  int v86; // [esp+2Ch] [ebp-B0h]
  __int16 v87[2]; // [esp+30h] [ebp-ACh] BYREF
  int *v88; // [esp+34h] [ebp-A8h]
  int j; // [esp+38h] [ebp-A4h]
  char v90; // [esp+3Fh] [ebp-9Dh]
  int i; // [esp+40h] [ebp-9Ch]
  __int16 v92[4]; // [esp+44h] [ebp-98h] BYREF
  __int16 v93[2]; // [esp+4Ch] [ebp-90h] BYREF
  int v94; // [esp+50h] [ebp-8Ch]
  int v95; // [esp+54h] [ebp-88h]
  int v96; // [esp+58h] [ebp-84h]
  int k; // [esp+5Ch] [ebp-80h]
  int v98; // [esp+60h] [ebp-7Ch]
  int v99; // [esp+64h] [ebp-78h]
  int v100; // [esp+68h] [ebp-74h]
  __int16 v101[2]; // [esp+6Ch] [ebp-70h] BYREF
  __int16 v102[2]; // [esp+70h] [ebp-6Ch] BYREF
  __int16 v103[2]; // [esp+74h] [ebp-68h] BYREF
  __int16 v104[2]; // [esp+78h] [ebp-64h] BYREF
  _DWORD v105[3]; // [esp+7Ch] [ebp-60h] BYREF
  int v106[3]; // [esp+88h] [ebp-54h] BYREF
  _DWORD v107[3]; // [esp+94h] [ebp-48h] BYREF
  _DWORD v108[3]; // [esp+A0h] [ebp-3Ch] BYREF
  int v109[3]; // [esp+ACh] [ebp-30h] BYREF
  char v110[12]; // [esp+B8h] [ebp-24h] BYREF
  char v111[12]; // [esp+C4h] [ebp-18h] BYREF
  int v112[3]; // [esp+D0h] [ebp-Ch] BYREF
  int v113; // [esp+E0h] [ebp+4h]

  v1 = this; /*0x43f191*/
  *(_DWORD *)v93 = this; /*0x43f194*/
  result = TechnoClass::UpdateProdWithSound((TechnoClass *)this, v113); /*0x43f198*/
  if ( (_BYTE)result )
  {
    result = (*((int (__thiscall **)(BuildingClass *, __int16 *))v1->TechnoClass + 110))(v1, v101); /*0x43f1ae*/
    *(_DWORD *)v92 = *(_DWORD *)result; /*0x43f1b9*/
    switch ( v113 )
    {
      case 0:
        result = MapClass::ApplyOverlayReveal((MapClass *)&stru_87F5F0.__pad_58[416], v92, (char *)v1); /*0x43f1d5*/
        LOBYTE(result) = 1; /*0x43f1dd*/
        break; /*0x43f1e6*/
      case 1:
      case 3:
        Type = v1->Type; /*0x43f1e9*/
        v4 = 0; /*0x43f1ef*/
        if ( Type->ToTile ) /*0x43f1f1*/
        {
          vtable0 = (int (__thiscall **)(BuildingClass *, void *, int, int, _DWORD, int))v1->TechnoClass; /*0x43f1fd*/
          v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v92); /*0x43f210*/
          if ( vtable0[107](v1, v6, -1, -1, 0, 1) ) /*0x43f218*/
            goto LABEL_33; /*0x43f218*/
          FoundationWidth = BuildingTypeClass::GetFoundationWidth(v1->Type); /*0x43f22c*/
          v8 = (int *)v1->Type; /*0x43f231*/
          v88 = (int *)FoundationWidth; /*0x43f238*/
          FoundationHeight = BuildingTypeClass::GetFoundationHeight(v8, 0); /*0x43f23c*/
          v10 = 0; /*0x43f241*/
          v82 = FoundationHeight; /*0x43f245*/
          v90 = 0; /*0x43f249*/
          for ( i = 0; v10 < v82; i = v10 ) /*0x43f251*/
          {
            v11 = 0; /*0x43f25b*/
            for ( j = 0; v11 < (int)v88; j = v11 ) /*0x43f263*/
            {
              HIWORD(v100) = v10 + v92[1]; /*0x43f276*/
              owner = v1->?; /*0x43f27b*/
              LOWORD(v100) = v11 + v92[0]; /*0x43f281*/
              v13 = v1->Type; /*0x43f28a*/
              *(_DWORD *)v87 = v100; /*0x43f290*/
              v81 = (int)owner; /*0x43f294*/
              v80 = (int)v13; /*0x43f29b*/
              v79 = v13->?[0]; /*0x43f2a0*/
              v14 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v87); /*0x43f2a7*/
              if ( (unsigned __int8)CellClass::IsPassable(v14, v79, v80, v81) /*0x43f2fb*/
                && *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v87) + 14) != *(_DWORD *)(v1->Type->ToTile + 660)
                && *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v87) + 59) != 1 )
              {
                v15 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v87); /*0x43f30b*/
                v16 = v15[18]; /*0x43f310*/
                if ( v16 != -1 ) /*0x43f316*/
                {
                  v17 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * v16); /*0x43f322*/
                  v94 = v15[9]; /*0x43f32a*/
                  v18 = *(_DWORD *)(v17 + 664); /*0x43f334*/
                  v19 = *((unsigned __int8 *)v15 + 287) % v18; /*0x43f343*/
                  v20 = *((unsigned __int8 *)v15 + 287) / v18; /*0x43f347*/
                  v21 = *(_DWORD *)(v17 + 668); /*0x43f349*/
                  LOWORD(v94) = v94 - v19; /*0x43f34f*/
                  HIWORD(v94) -= v20; /*0x43f354*/
                  v22 = 0; /*0x43f359*/
                  v99 = 0; /*0x43f35d*/
                  if ( v21 > 0 ) /*0x43f361*/
                  {
                    do /*0x43f3eb*/
                    {
                      v23 = 0; /*0x43f367*/
                      if ( v18 > 0 ) /*0x43f36b*/
                      {
                        v24 = HIWORD(v94) + v22; /*0x43f371*/
                        HIWORD(k) = HIWORD(v94) + v22; /*0x43f374*/
                        do /*0x43f3d4*/
                        {
                          HIWORD(v98) = v24; /*0x43f381*/
                          v25 = v23 + v94; /*0x43f387*/
                          LOWORD(v98) = v23 + v94; /*0x43f38f*/
                          *(_DWORD *)v103 = v98; /*0x43f398*/
                          *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v103) + 18) = -1; /*0x43f3a1*/
                          LOWORD(k) = v25; /*0x43f3a8*/
                          *(_DWORD *)v102 = k; /*0x43f3bb*/
                          v26 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v102); /*0x43f3bf*/
                          BuildingClass::CreateDestructionCrater(v26); /*0x43f3c6*/
                          v18 = *(_DWORD *)(v17 + 664); /*0x43f3cb*/
                          ++v23; /*0x43f3d1*/
                        }
                        while ( v23 < v18 ); /*0x43f3d4*/
                        v22 = v99; /*0x43f3d6*/
                        v1 = *(BuildingClass **)v93; /*0x43f3da*/
                      }
                      v27 = *(_DWORD *)(v17 + 668); /*0x43f3de*/
                      v99 = ++v22; /*0x43f3e7*/
                    }
                    while ( v22 < v27 ); /*0x43f3eb*/
                  }
                  v10 = i; /*0x43f3f1*/
                  v11 = j; /*0x43f3f5*/
                }
                v28 = (*(int (__thiscall **)(int, HouseClass *))(*(_DWORD *)v1->Type->ToTile + 140))( /*0x43f410*/
                        v1->Type->ToTile,
                        v1->?);
                v107[2] = 0; /*0x43f429*/
                v107[0] = (v87[0] << 8) + 128; /*0x43f433*/
                v107[1] = (v87[1] << 8) + 128; /*0x43f441*/
                (*(void (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v28 + 216))(v28, v107, 0); /*0x43f44b*/
                if ( (Object *)v1->? == dword_A83D4C ) /*0x43f45e*/
                {
                  v106[0] = (v87[0] << 8) + 128; /*0x43f47f*/
                  v106[1] = (v87[1] << 8) + 128; /*0x43f492*/
                  v106[2] = 0; /*0x43f4a1*/
                  MapClass::RevealArea1((MapClass *)&stru_87F5F0.__pad_58[416], v106, 1, dword_A83D4C, 0, 0, 0, 1, 0); /*0x43f4a8*/
                  v109[0] = (v87[0] << 8) + 128; /*0x43f4ce*/
                  v109[1] = (v87[1] << 8) + 128; /*0x43f4e4*/
                  v109[2] = 0; /*0x43f4f3*/
                  MapClass::RevealArea1((MapClass *)&stru_87F5F0.__pad_58[416], v109, 1, dword_A83D4C, 0, 0, 0, 1, 1); /*0x43f4fa*/
                }
                v90 = 1; /*0x43f4ff*/
              }
              ++v11; /*0x43f508*/
            }
            FoundationHeight = v82; /*0x43f515*/
            ++v10; /*0x43f519*/
          }
          i = 0; /*0x43f529*/
          j = FoundationHeight + 2; /*0x43f52f*/
          if ( FoundationHeight + 2 > 0 ) /*0x43f533*/
          {
            v29 = 0; /*0x43f539*/
            v30 = (int)v88 + 2; /*0x43f53b*/
            do /*0x43f5a7*/
            {
              v31 = 0; /*0x43f542*/
              if ( v30 > 0 ) /*0x43f546*/
              {
                HIWORD(v94) = v29 - 1; /*0x43f549*/
                v32 = v29 - 1; /*0x43f54e*/
                do /*0x43f596*/
                {
                  LOWORD(v94) = v31 - 1; /*0x43f559*/
                  LOWORD(v83) = v92[0] + v31 - 1; /*0x43f568*/
                  HIWORD(v83) = v32 + v92[1]; /*0x43f574*/
                  *(_DWORD *)v93 = v83; /*0x43f57d*/
                  v33 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v93); /*0x43f587*/
                  BuildingClass::CreatePlacementCrater(v33); /*0x43f58e*/
                  ++v31; /*0x43f593*/
                }
                while ( v31 < v30 ); /*0x43f596*/
                v29 = i; /*0x43f598*/
              }
              i = ++v29; /*0x43f5a3*/
            }
            while ( v29 < j ); /*0x43f5a7*/
          }
          if ( !v90 ) /*0x43f5b1*/
          {
LABEL_33:
            result = TechnoClass::UpdateProdWithSound((TechnoClass *)v1, 0); /*0x43f5db*/
            goto LABEL_34; /*0x43f5db*/
          }
          (*((void (__thiscall **)(BuildingClass *, int))v1->TechnoClass + 160))(v1, 3); /*0x43f5b9*/
          result = (*((int (__thiscall **)(BuildingClass *))v1->TechnoClass + 62))(v1); /*0x43f5c3*/
          LOBYTE(result) = 1; /*0x43f5cc*/
        }
        else if ( Type->Wall ) /*0x43f5ef*/
        {
          v34 = (#374 *)__2_YAPAXI_Z(0xB0u); /*0x43f5fe*/
          if ( v34 ) /*0x43f608*/
            Object::SpawnAtCell(v34, v1->Type->ToOverlay[0], v92, *(_DWORD *)(v1->?->relatedTagsCapacity + 184)); /*0x43f62e*/
          (*((void (__thiscall **)(BuildingClass *, int))v1->TechnoClass + 160))(v1, 3); /*0x43f639*/
          result = (*((int (__thiscall **)(BuildingClass *))v1->TechnoClass + 62))(v1); /*0x43f643*/
          LOBYTE(result) = 1; /*0x43f64c*/
        }
        else
        {
          if ( v113 != 3 ) /*0x43f65b*/
          {
            v35 = (int (__thiscall **)(BuildingClass *, void *, int, int, _DWORD, int))v1->TechnoClass; /*0x43f65d*/
            v36 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v92); /*0x43f670*/
            result = v35[107](v1, v36, -1, -1, 0, 1); /*0x43f678*/
            if ( result ) /*0x43f680*/
              goto LABEL_34; /*0x43f680*/
          }
          MapClass::FillRevealBuffer((MapClass *)&stru_87F5F0.__pad_58[416], v92, v1); /*0x43f691*/
          v37 = v1->Type; /*0x43f6a0*/
          v38 = (void (__thiscall **)(BuildingClass *, int))v1->TechnoClass; /*0x43f6a6*/
          v108[2] = 0; /*0x43f6b0*/
          v108[1] = (v92[1] << 8) + 128; /*0x43f6ba*/
          v108[0] = (v92[0] << 8) + 128; /*0x43f6cf*/
          v39 = (*((int (__thiscall **)(BuildingTypeClass *, char *, _DWORD *))v37->TechnoTypeClass + 27))( /*0x43f6e0*/
                  v37,
                  v110,
                  v108);
          v38[109](v1, v39); /*0x43f6e6*/
          v40 = (int *)(*((int (__thiscall **)(BuildingClass *, _DWORD *))v1->TechnoClass + 43))(v1, v105); /*0x43f6f5*/
          Anims = v1->Anims; /*0x43f6fd*/
          v94 = *v40; /*0x43f703*/
          v95 = v40[1]; /*0x43f70a*/
          v96 = v40[2]; /*0x43f711*/
          do /*0x43f795*/
          {
            v42 = (int *)*Anims; /*0x43f715*/
            if ( *Anims ) /*0x43f715*/
            {
              v43 = Matrix3x4::TransformCell( /*0x43f738*/
                      (float *)g_TacticalClass_Instance,
                      v111,
                      (int *)&v1->Type->__pad_F70[v4 + 12]);
              v44 = Coord::Subtract((Coord *)v112, *v43 + v94, v95 + v43[1], v96 + v43[2]); /*0x43f761*/
              v105[0] = *v44; /*0x43f768*/
              v105[1] = v44[1]; /*0x43f76f*/
              v45 = v44[2]; /*0x43f777*/
              v46 = *v42; /*0x43f77a*/
              v105[2] = v45; /*0x43f77f*/
              (*(void (__thiscall **)(int *, _DWORD *))(v46 + 436))(v42, v105); /*0x43f783*/
            }
            v4 += 68; /*0x43f789*/
            ++Anims; /*0x43f78c*/
          }
          while ( v4 < 1428 ); /*0x43f795*/
          v47 = BuildingTypeClass::GetFoundationWidth(v1->Type); /*0x43f7a1*/
          v48 = (int *)v1->Type; /*0x43f7a6*/
          *(_DWORD *)v87 = v47; /*0x43f7ae*/
          v49 = BuildingTypeClass::GetFoundationHeight(v48, 0); /*0x43f7b2*/
          v98 = v49; /*0x43f7b9*/
          i = 0; /*0x43f7bd*/
          if ( v49 > 0 ) /*0x43f7c5*/
          {
            do /*0x43f916*/
            {
              v50 = 0; /*0x43f7cf*/
              for ( k = 0; v50 < *(int *)v87; k = v50 ) /*0x43f7d7*/
              {
                LOWORD(v84) = v50 + v92[0]; /*0x43f7ee*/
                HIWORD(v84) = i + v92[1]; /*0x43f7f3*/
                *(_DWORD *)v93 = v84; /*0x43f800*/
                v51 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v93); /*0x43f80a*/
                v52 = v51[18]; /*0x43f80f*/
                if ( v52 != -1 ) /*0x43f815*/
                {
                  v88 = 0; /*0x43f821*/
                  v53 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * v52); /*0x43f829*/
                  v94 = v51[9]; /*0x43f831*/
                  v54 = *(_DWORD *)(v53 + 664); /*0x43f83b*/
                  v55 = *((unsigned __int8 *)v51 + 287) % v54; /*0x43f84a*/
                  v56 = *((unsigned __int8 *)v51 + 287) / v54; /*0x43f84e*/
                  LOWORD(v94) = v94 - v55; /*0x43f850*/
                  HIWORD(v94) -= v56; /*0x43f855*/
                  if ( *(int *)(v53 + 668) > 0 ) /*0x43f862*/
                  {
                    do /*0x43f8ec*/
                    {
                      v57 = 0; /*0x43f868*/
                      if ( v54 > 0 ) /*0x43f86c*/
                      {
                        v58 = HIWORD(v94) + (_WORD)v88; /*0x43f876*/
                        HIWORD(v99) = HIWORD(v94) + (_WORD)v88; /*0x43f879*/
                        do /*0x43f8d9*/
                        {
                          HIWORD(j) = v58; /*0x43f886*/
                          v59 = v57 + v94; /*0x43f88c*/
                          LOWORD(j) = v57 + v94; /*0x43f894*/
                          *(_DWORD *)v104 = j; /*0x43f89d*/
                          *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v104) + 18) = -1; /*0x43f8a6*/
                          LOWORD(v99) = v59; /*0x43f8ad*/
                          *(_DWORD *)v101 = v99; /*0x43f8c0*/
                          v60 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v101); /*0x43f8c4*/
                          BuildingClass::CreateDestructionCrater(v60); /*0x43f8cb*/
                          v54 = *(_DWORD *)(v53 + 664); /*0x43f8d0*/
                          ++v57; /*0x43f8d6*/
                        }
                        while ( v57 < v54 ); /*0x43f8d9*/
                      }
                      v61 = *(_DWORD *)(v53 + 668); /*0x43f8df*/
                      v88 = (int *)((char *)v88 + 1); /*0x43f8e8*/
                    }
                    while ( (int)v88 < v61 ); /*0x43f8ec*/
                    v50 = k; /*0x43f8f2*/
                  }
                }
                ++v50; /*0x43f8fa*/
              }
              ++i; /*0x43f912*/
            }
            while ( i < v98 ); /*0x43f916*/
            v49 = v98; /*0x43f91c*/
          }
          result = v49 + 2; /*0x43f91e*/
          v62 = 0; /*0x43f921*/
          j = result; /*0x43f925*/
          if ( result <= 0 ) /*0x43f929*/
            goto LABEL_92; /*0x43f929*/
          v63 = *(_DWORD *)v87 + 2; /*0x43f933*/
          do /*0x43f995*/
          {
            v64 = 0; /*0x43f936*/
            if ( v63 > 0 ) /*0x43f93a*/
            {
              HIWORD(v94) = v62 - 1; /*0x43f93f*/
              do /*0x43f98c*/
              {
                LOWORD(v94) = v64 - 1; /*0x43f94f*/
                LOWORD(v85) = v92[0] + v64 - 1; /*0x43f95e*/
                HIWORD(v85) = v62 - 1 + v92[1]; /*0x43f96a*/
                *(_DWORD *)v93 = v85; /*0x43f979*/
                v65 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v93); /*0x43f97d*/
                BuildingClass::CreatePlacementCrater(v65); /*0x43f984*/
                ++v64; /*0x43f989*/
              }
              while ( v64 < v63 ); /*0x43f98c*/
              result = j; /*0x43f98e*/
            }
            ++v62; /*0x43f992*/
          }
          while ( v62 < result ); /*0x43f995*/
          LOBYTE(result) = 1; /*0x43f99a*/
        }
        break; /*0x43f5d5*/
      case 2:
        *(_DWORD *)v93 = (*((int (__thiscall **)(BuildingClass *))v1->TechnoClass + 121))(v1); /*0x43f9b0*/
        v66 = (*((int (__thiscall **)(BuildingClass *))v1->TechnoClass + 111))(v1); /*0x43f9b8*/
        v67 = (*((int (__thiscall **)(BuildingClass *, _DWORD))v1->TechnoClass + 281))(v1, *(__int16 *)(v66 + 266)); /*0x43f9d0*/
        if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))v1->TechnoClass + 88))(v1)
          || v1->?
          && (v1 ? (v68 = (*((int (__thiscall **)(BuildingClass *))v1->TechnoClass + 11))(v1) == 6 ? v1 : 0) : (v68 = 0),
              (BuildingClass *)v1->?->AirstrikeClass_field_50 == v68) )
        {
          LOWORD(v67) = Techno::StartInvulnerability(v67); /*0x43fa17*/
        }
        *(_WORD *)v1->BuildingClass_field_short_700 = v67; /*0x43fa19*/
        j = (unsigned __int16)v67; /*0x43fa26*/
        v88 = v1->Anims; /*0x43fa30*/
        v86 = 21; /*0x43fa34*/
        do /*0x43fabc*/
        {
          v69 = (_DWORD *)*v88; /*0x43fa40*/
          if ( *v88 ) /*0x43fa40*/
          {
            v70 = v69[50]; /*0x43fa46*/
            if ( v70 && *(_BYTE *)(v70 + 860) ) /*0x43fa50*/
            {
              v71 = j; /*0x43fa5e*/
              v69[53] = *(_DWORD *)v93; /*0x43fa62*/
              v69[63] = v71; /*0x43fa68*/
            }
            Translucency = v1->Translucency; /*0x43fa6e*/
            if ( Translucency == 15 /*0x43fa88*/
              && (*((int (__thiscall **)(BuildingClass *, _DWORD, _DWORD))v1->TechnoClass + 26))(v1, 0, 0) == 5 )
            {
              LOBYTE(Translucency) = 16; /*0x43fa8a*/
            }
            v73 = v1->Anims; /*0x43fa8f*/
            v74 = 21; /*0x43fa91*/
            do /*0x43faa6*/
            {
              if ( *v73 ) /*0x43fa96*/
                *(_BYTE *)(*v73 + 376) = Translucency; /*0x43fa9c*/
              ++v73; /*0x43faa2*/
              --v74; /*0x43faa5*/
            }
            while ( v74 ); /*0x43faa6*/
          }
          v75 = v86 == 1; /*0x43fab3*/
          ++v88; /*0x43fab4*/
          --v86; /*0x43fab8*/
        }
        while ( !v75 ); /*0x43fabc*/
        v76 = v1->Translucency; /*0x43fac2*/
        if ( v76 == 15 && (*((int (__thiscall **)(BuildingClass *, _DWORD, _DWORD))v1->TechnoClass + 26))(v1, 0, 0) == 5 ) /*0x43fadc*/
          LOBYTE(v76) = 16; /*0x43fade*/
        v77 = v1->Anims; /*0x43fae3*/
        v78 = 21; /*0x43fae5*/
        do /*0x43fafa*/
        {
          result = *v77; /*0x43faea*/
          if ( *v77 ) /*0x43faea*/
            *(_BYTE *)(result + 376) = v76; /*0x43faf0*/
          ++v77; /*0x43faf6*/
          --v78; /*0x43faf9*/
        }
        while ( v78 ); /*0x43fafa*/
        goto LABEL_92; /*0x43fafa*/
      default:
LABEL_92:
        LOBYTE(result) = 1; /*0x43fafc*/
        break; /*0x43faff*/
    }
  }
  else
  {
LABEL_34:
    LOBYTE(result) = 0; /*0x43f5e0*/
  }
  return result; /*0x43f1da*/
}



// ==== 0x0043FB20  BuildingClass::ProcessSpreadEffect  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessSpreadEffect(BuildingClass *this)
{
  double v1; // st7
  char v3; // bl
  int Type; // eax
  int v5; // eax
  int v6; // eax
  char v8; // bl
  int *DamageFireAnims; // edi
  int v12; // ebp
  int temporalTargetingMe; // ecx
  int v14; // edi
  int v15; // ecx
  char *v16; // eax
  int v17; // edi
  int v18; // edx
  int v19; // eax
  int airstrike; // eax
  int target; // ecx
  int result; // eax
  int v23; // eax
  int Member81; // ebx
  int v25; // edi
  int v26; // eax
  unsigned int BuildingClass_field_int_538; // eax
  int v28; // edx
  int *v29; // edi
  char *ProductionTimeMult; // eax
  int health; // eax
  int *v32; // edi
  int v33; // ebx
  int v34; // edx
  int i; // edx
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // edi
  int v41; // edx
  int v42; // eax
  int v43; // ecx
  int v44; // ebx
  int v45; // ebp
  _WORD *v46; // eax
  int v47; // edi
  _WORD *v48; // eax
  int v49; // eax
  __int16 *v50; // eax
  int v51; // ecx
  int v52; // eax
  int v53; // ebx
  int v54; // edi
  int *v55; // eax
  int v56; // ecx
  int v57; // edx
  int vtable0; // eax
  _DWORD *v59; // eax
  int v60; // ecx
  int v61; // edx
  int v62; // eax
  AnimClass *v63; // eax
  void **v64; // eax
  AnimClass *v65; // eax
  BuildingClass *v66; // [esp+0h] [ebp-4Ch]
  BuildingClass *v67; // [esp+0h] [ebp-4Ch]
  char v68; // [esp+13h] [ebp-39h]
  int v69; // [esp+14h] [ebp-38h]
  int v70; // [esp+18h] [ebp-34h]
  __int16 v71[2]; // [esp+1Ch] [ebp-30h] BYREF
  __int16 v72[2]; // [esp+20h] [ebp-2Ch] BYREF
  int v73; // [esp+24h] [ebp-28h] BYREF
  char v74[4]; // [esp+28h] [ebp-24h] BYREF
  int v75[2]; // [esp+2Ch] [ebp-20h] BYREF
  int v76; // [esp+34h] [ebp-18h] BYREF
  int v77; // [esp+38h] [ebp-14h]
  int v78; // [esp+3Ch] [ebp-10h]
  char v79[12]; // [esp+40h] [ebp-Ch] BYREF

  v3 = (*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->vtable0 + 848))(this) /*0x43fb57*/
    && (*(int (__thiscall **)(BuildingClass *))(this->vtable0 + 388))(this) != 18
    && (*(int (__thiscall **)(BuildingClass *))(this->vtable0 + 388))(this) != 19;
  Type = this->Type; /*0x43fb61*/
  if ( v3 == this->__pad_6B8[16] ) /*0x43fb67*/
  {
    if ( *(_DWORD *)(Type + 3712) != -1 || *(_DWORD *)(Type + 3716) != -1 ) /*0x43fc0a*/
    {
      v76 = this->location[0]; /*0x43fc18*/
      v77 = this->location[1]; /*0x43fc25*/
      v78 = this->location[2]; /*0x43fc2c*/
      StartAudioController(&v76, (AudioSource *)&this->Audio8_2); /*0x43fc34*/
    }
  }
  else
  {
    if ( *(_DWORD *)(Type + 3712) != -1 || *(_DWORD *)(Type + 3716) != -1 ) /*0x43fb80*/
    {
      AudioFile::Stop((AudioFile *)&this->Audio8_2); /*0x43fb8a*/
      v5 = this->location[1]; /*0x43fb9b*/
      v76 = this->location[0]; /*0x43fb9e*/
      v77 = v5; /*0x43fba2*/
      v6 = this->Type; /*0x43fba6*/
      v78 = this->location[2]; /*0x43fbb0*/
      if ( v3 ) /*0x43fb99*/
        StartAudioControllerAt(*(_DWORD *)(v6 + 3712), &v76, (int **)&this->Audio8_2); /*0x43fbbe*/
      else
        StartAudioControllerAt(*(_DWORD *)(v6 + 3716), &v76, (int **)&this->Audio8_2); /*0x43fbe3*/
    }
    Animation::UpdateBuildingAnimations((Animation *)this); /*0x43fbea*/
    this->__pad_6B8[16] = v3; /*0x43fbef*/
  }
  if ( *(_BYTE *)(this->Type + 5499) ) /*0x43fc41*/
  {
    BuildingClass::GetHealthRatio(this); /*0x43fc4b*/
    _EAX = dword_8871E0; /*0x43fc50*/
    __asm /*0x43fc55*/
    {
      fcomp qword ptr [eax+1708h]
      fnstsw ax
    }
    if ( (BYTE1(_EAX) & 0x41) != 0 ) /*0x43fc60*/
    {
      v8 = 1; /*0x43fc62*/
      goto LABEL_22; /*0x43fc64*/
    }
  }
  else
  {
    BuildingClass::GetHealthRatio(this); /*0x43fc66*/
    _ECX = dword_8871E0; /*0x43fc6b*/
    __asm /*0x43fc71*/
    {
      fcomp qword ptr [ecx+1700h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x43fc7c*/
    {
      v8 = 1; /*0x43fc7e*/
      goto LABEL_22; /*0x43fc80*/
    }
  }
  v8 = 0; /*0x43fc82*/
LABEL_22:
  if ( v8 != this->RequiresDamageFires[0] ) /*0x43fc8a*/
  {
    if ( v8 ) /*0x43fc8e*/
    {
      CreateDominatorDestructionEffects(this); /*0x43fc92*/
    }
    else
    {
      DamageFireAnims = this->DamageFireAnims; /*0x43fc99*/
      v12 = 8; /*0x43fc9f*/
      do /*0x43fcbc*/
      {
        if ( *DamageFireAnims ) /*0x43fca4*/
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)*DamageFireAnims + 248))(*DamageFireAnims); /*0x43fcac*/
          *DamageFireAnims = 0; /*0x43fcb2*/
        }
        ++DamageFireAnims; /*0x43fcb8*/
        --v12; /*0x43fcbb*/
      }
      while ( v12 ); /*0x43fcbc*/
    }
    this->RequiresDamageFires[0] = v8; /*0x43fcbe*/
  }
  if ( *(_BYTE *)(this->Type + 3233) ) /*0x43fccd*/
    this->turretIsRotating = (unsigned __int8)TimerClass::Active((int)this->primaryFacing); /*0x43fce7*/
  else
    this->turretIsRotating = 0; /*0x43fcef*/
  temporalTargetingMe = this->temporalTargetingMe; /*0x43fcf9*/
  if ( temporalTargetingMe ) /*0x43fd01*/
    (*(void (__thiscall **)(int))(*(_DWORD *)temporalTargetingMe + 92))(temporalTargetingMe); /*0x43fd05*/
  if ( (*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->vtable0 + 468))(this) /*0x43fd1e*/
    || (*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->vtable0 + 472))(this) )
  {
    v51 = this->Type; /*0x4403d4*/
    v52 = *(_DWORD *)(v51 + 5504); /*0x4403e0*/
    if ( v52 && *(_DWORD *)&dword_8871E0->__pad_240[260] ) /*0x4403ee*/
    {
      v53 = 0; /*0x4403fc*/
      if ( v52 > 0 ) /*0x440400*/
      {
        v54 = 5512; /*0x440406*/
        do /*0x4404e9*/
        {
          if ( !(((int)dword_A8ED84 + v53) % 24) && *(_DWORD *)&dword_8871E0->__pad_240[260] ) /*0x440428*/
          {
            v55 = (int *)World::ToScreen(v75, (_DWORD *)(v54 + v51), &v66->vtable0); /*0x440445*/
            v56 = v55[1]; /*0x44044a*/
            v57 = *v55; /*0x44044d*/
            vtable0 = this->vtable0; /*0x44044f*/
            v77 = v56; /*0x440451*/
            v76 = v57; /*0x440459*/
            v78 = 0; /*0x440460*/
            v59 = (_DWORD *)(*(int (__thiscall **)(BuildingClass *, char *))(vtable0 + 172))(this, v79); /*0x440468*/
            v60 = v76 + *v59; /*0x440478*/
            v61 = v59[1]; /*0x44047a*/
            v62 = v78 + v59[2]; /*0x440486*/
            v76 = v60; /*0x44048d*/
            v77 += v61; /*0x440491*/
            v78 = v62; /*0x440495*/
            v63 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x440499*/
            if ( v63 ) /*0x4404a3*/
              v64 = AnimClass::ctor(v63, *(void **)&dword_8871E0->__pad_240[260], &v76, 0, 1, (void *)0x600, 0, 0); /*0x4404c6*/
            else
              v64 = 0; /*0x4404cd*/
            v64[64] = (void *)-200; /*0x4404cf*/
          }
          v51 = this->Type; /*0x4404d9*/
          ++v53; /*0x4404df*/
          v54 += 8; /*0x4404e0*/
        }
        while ( v53 < *(_DWORD *)(v51 + 5504) ); /*0x4404e9*/
      }
    }
    else if ( !((int)dword_A8ED84 % 24) ) /*0x4404fc*/
    {
      if ( *(_DWORD *)&dword_8871E0->__pad_240[260] ) /*0x440502*/
      {
        v65 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x440511*/
        if ( v65 ) /*0x44051b*/
        {
          v76 = this->location[0]; /*0x440530*/
          v77 = this->location[1]; /*0x440539*/
          v78 = this->location[2]; /*0x440545*/
          AnimClass::ctor(v65, *(void **)&dword_8871E0->__pad_240[260], &v76, 0, 1, (void *)0x600, 0, 0); /*0x440558*/
        }
      }
    }
    result = this->target; /*0x44055d*/
    if ( result ) /*0x440565*/
      return (*(int (__thiscall **)(BuildingClass *, _DWORD))(this->vtable0 + 968))(this, 0); /*0x440565*/
    return result; /*0x440565*/
  }
  v14 = *(_DWORD *)&this->__pad_6B8[24]; /*0x43fd2c*/
  v15 = *(_DWORD *)&this->__pad_6B8[32]; /*0x43fd32*/
  v16 = &this->__pad_6B8[24]; /*0x43fd3e*/
  if ( v14 != -1 ) /*0x43fd46*/
  {
    if ( (int)dword_A8ED84 - v14 >= v15 ) /*0x43fd4e*/
      goto LABEL_46; /*0x43fd4e*/
    v15 -= (int)dword_A8ED84 - v14; /*0x43fd54*/
  }
  if ( v15 == 1 ) /*0x43fd59*/
  {
    v17 = v77; /*0x43fd5b*/
    *(_DWORD *)v16 = dword_A8ED84; /*0x43fd63*/
    *(_DWORD *)&this->__pad_6B8[28] = v17; /*0x43fd65*/
    *(_DWORD *)&this->__pad_6B8[32] = 0; /*0x43fd68*/
    v18 = *(_DWORD *)(this->Type + 5472); /*0x43fd77*/
    *(_DWORD *)v16 = dword_A8ED84; /*0x43fd7d*/
    *(_DWORD *)&this->__pad_6B8[28] = v77; /*0x43fd83*/
    *(_DWORD *)&this->__pad_6B8[32] = v18; /*0x43fd86*/
    if ( !*(_BYTE *)(*(_DWORD *)(this->owner + 52) + 422) ) /*0x43fd92*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->vtable0 + 848))(this) ) /*0x43fda0*/
      {
        v19 = *(_DWORD *)(this->Type + 5468); /*0x43fdb0*/
        if ( v19 <= 0 ) /*0x43fdb8*/
          HouseClass::ProcessPowerDrain((int *)this->owner, -v19); /*0x43fdd1*/
        else
          HouseClass::AddPower((HouseClass *)this->owner, *(_DWORD *)(this->Type + 5468)); /*0x43fdc1*/
      }
    }
  }
LABEL_46:
  airstrike = this->airstrike; /*0x43fdd6*/
  if ( airstrike && *(BuildingClass **)(airstrike + 80) == this ) /*0x43fde3*/
    (*(void (__thiscall **)(BuildingClass *, int))(this->vtable0 + 292))(this, 2); /*0x43fdeb*/
  if ( *(_BYTE *)(this->Type + 5816) ) /*0x43fdf7*/
  {
    target = this->target; /*0x43fe01*/
    if ( target ) /*0x43fe09*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)target + 84))(target) ) /*0x43fe0d*/
        v1 = ((double (__thiscall *)(BuildingClass *, _DWORD))*(_DWORD *)(this->vtable0 + 968))(this, 0); /*0x43fe1a*/
    }
  }
  BuildingClass::UpdateAnimFrames(v66, v1); /*0x43fe22*/
  if ( (*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->vtable0 + 512))(this) /*0x43fe43*/
    && this->BuildingClass_field_int_534
    && (*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->vtable0 + 492))(this) )
  {
    this->BuildingClass_field_bool_6DD[0] = 0; /*0x43fe4d*/
  }
  MovementAI::Begin(this); /*0x43fe56*/
  LOBYTE(result) = this->isAliveFlag[0]; /*0x43fe5b*/
  if ( !(_BYTE)result ) /*0x43fe63*/
    return result; /*0x43fe63*/
  if ( *(_BYTE *)((*(int (__thiscall **)(BuildingClass *))(this->vtable0 + 132))(this) + 3285) /*0x43fe86*/
    && TechnoClass::GetMember81(this) > 0 )
  {
    ++this->ammoReloadTimer; /*0x43fe88*/
  }
  if ( !this->ammo ) /*0x43fe8e*/
  {
    v23 = this->Type; /*0x43fe98*/
    if ( !*(_BYTE *)(v23 + 5825) && !*(_BYTE *)(v23 + 5826) ) /*0x43fea8*/
      this->ammo = *(_DWORD *)(v23 + 1668); /*0x43feb8*/
  }
  if ( (*(int (__thiscall **)(BuildingClass *))(this->vtable0 + 388))(this) != 1 )
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(BuildingClass *))(this->vtable0 + 132))(this) + 3285) )
    {
      if ( (int)dword_A8ED84 - this->turretChargeTimer > *(_DWORD *)&dword_8871E0->__pad_C3C[456] + 5 )
      {
        TechnoClass::GattlingValueRateDown_GattlingRateDownDelay(this, *(_DWORD *)(this->Type + 3344)); /*0x43ff19*/
        Member81 = TechnoClass::GetMember81(this); /*0x43ff27*/
        v25 = BuildingClass::checkPlacement(this); /*0x43ff2e*/
        if ( v25 > 0 )
        {
          v26 = (unsigned __int8)Audio::IsLoud(&this->veterancy)
              ? *(_DWORD *)(this->Type + 4 * v25 + 3312)
              : *(_DWORD *)(this->Type + 4 * v25 + 3288);
          if ( Member81 < v26 ) /*0x43ff61*/
            TechnoClass::SetSpread(this, v25 - 1); /*0x43ff67*/
        }
      }
    }
    if ( *(_BYTE *)((*(int (__thiscall **)(BuildingClass *))(this->vtable0 + 132))(this) + 3285) /*0x43ff89*/
      && TechnoClass::GetMember81(this) > 0 )
    {
      ++this->ammoReloadTimer; /*0x43ff8b*/
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->vtable0 + 512))(this) /*0x43ffa3*/
    && (*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->vtable0 + 492))(this) )
  {
    this->BuildingClass_field_bool_6DD[0] = 0; /*0x43ffad*/
  }
  BuildingClass_field_int_538 = this->BuildingClass_field_int_538; /*0x43ffb4*/
  if ( BuildingClass_field_int_538 != -1 ) /*0x43ffbc*/
  {
    if ( this->BuildingClass_field_int_534 != BuildingClass_field_int_538 ) /*0x43ffc8*/
    {
      v28 = this->Type; /*0x43ffca*/
      this->BuildingClass_field_int_534 = BuildingClass_field_int_538; /*0x43ffd5*/
      v29 = (int *)(v28 + 12 * BuildingClass_field_int_538 + 3844); /*0x43ffdb*/
      if ( BuildingClass_field_int_538 < 2 ) /*0x43ffe2*/
        ProductionTimeMult = Rules::GetProductionTimeMult( /*0x44000d*/
                               (Rules *)&dword_A8EB60,
                               *(_DWORD *)(v28 + 12 * BuildingClass_field_int_538 + 3852));
      else
        ProductionTimeMult = *(char **)(v28 + 12 * BuildingClass_field_int_538 + 3852); /*0x43ffef*/
      this->animation[2] = (int)dword_A8ED84; /*0x43fff8*/
      this->animation[3] = v77; /*0x440028*/
      this->animation[4] = (int)ProductionTimeMult; /*0x44002b*/
      this->animation[5] = (int)ProductionTimeMult; /*0x44002e*/
      this->animation[0] = *v29; /*0x440036*/
    }
    this->BuildingClass_field_int_538 = -1; /*0x44003c*/
  }
  health = this->health; /*0x440042*/
  if ( health != this->BuildingClass_field_544 ) /*0x44004d*/
  {
    *(_BYTE *)(this->owner + 22392) = 1; /*0x440055*/
    *(_BYTE *)(this->owner + 22393) = 1; /*0x440062*/
    health = this->health; /*0x440069*/
    this->BuildingClass_field_544 = health; /*0x44006c*/
  }
  if ( !health ) /*0x440074*/
  {
    v32 = this->DamageFireAnims; /*0x440076*/
    v33 = 8; /*0x44007c*/
    do /*0x440099*/
    {
      if ( *v32 ) /*0x440081*/
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)*v32 + 248))(*v32); /*0x440089*/
        *v32 = 0; /*0x44008f*/
      }
      ++v32; /*0x440095*/
      --v33; /*0x440098*/
    }
    while ( v33 ); /*0x440099*/
    v34 = this->C4Timer[0]; /*0x44009b*/
    result = this->C4Timer[2]; /*0x4400a1*/
    if ( v34 != -1 ) /*0x4400a9*/
    {
      if ( (int)dword_A8ED84 - v34 >= result ) /*0x4400b5*/
      {
LABEL_98:
        (*(void (__thiscall **)(BuildingClass *))(this->vtable0 + 212))(this); /*0x4400c1*/
        BuildingClass::EjectCrew(this, (_BYTE *)this->C4AppliedBy); /*0x4400d4*/
        (*(void (__thiscall **)(BuildingClass *))(this->vtable0 + 248))(this); /*0x4400dd*/
        return BuildingClass::AfterDestruction(this); /*0x4400f1*/
      }
      result -= (int)dword_A8ED84 - v34; /*0x4400b7*/
    }
    if ( result ) /*0x4400bb*/
      return result; /*0x4400bb*/
    goto LABEL_98; /*0x4400bb*/
  }
  BuildingClass::UpdatePrism(this); /*0x4400f4*/
  if ( *(_BYTE *)(this->Type + 5493) ) /*0x4400ff*/
  {
    for ( i = this->Audio7[1] - 1; i >= 0; --i ) /*0x440114*/
    {
      if ( *(BuildingClass **)(*(_DWORD *)(this->Occupants + 4 * i) + 692) != this ) /*0x440125*/
      {
        v36 = this->Audio7[1]; /*0x440127*/
        if ( i < v36 ) /*0x44012f*/
        {
          v37 = v36 - 1; /*0x440131*/
          v38 = i; /*0x440134*/
          for ( this->Audio7[1] = v37; /*0x44013e*/
                v38 < this->Audio7[1];
                *(_DWORD *)(this->Occupants + 4 * v38 - 4) = *(_DWORD *)(this->Occupants + 4 * v38) )
          {
            ++v38; /*0x440146*/
          }
        }
      }
    }
    v39 = this->Audio7[1]; /*0x44015b*/
    if ( v39 >= 3 ) /*0x440164*/
      goto LABEL_111; /*0x440164*/
    HouseClass::GetPowerRatio((HouseClass *)this->owner); /*0x44016c*/
    __asm /*0x440171*/
    {
      fcomp ds:dbl_7E1718
      fnstsw ax
    }
    if ( (_AX & 0x4000) == 0 ) /*0x44017c*/
      goto LABEL_110; /*0x44017c*/
    if ( this->HasPower[0] && v39 >= 1 ) /*0x44018b*/
LABEL_111:
      this->IsOverpowered[0] = 1; /*0x440196*/
    else
LABEL_110:
      this->IsOverpowered[0] = 0; /*0x44018d*/
  }
  if ( *(_BYTE *)(this->Type + 5499) ) /*0x4401a3*/
    BuildingClass::ProcessStructureAbandoned(this); /*0x4401af*/
  BuildingClass::ProcessActiveAnimation(v67, v1); /*0x4401b6*/
  if ( *(_DWORD *)(this->Type + 3768) ) /*0x4401c1*/
    ProcessAutoProduction(this); /*0x4401cd*/
  if ( !this->C4Applied[0] ) /*0x4401da*/
    goto LABEL_138; /*0x4401da*/
  v41 = this->C4Timer[0]; /*0x4401e0*/
  v42 = this->C4Timer[2]; /*0x4401e6*/
  if ( v41 != -1 ) /*0x4401ee*/
  {
    if ( (int)dword_A8ED84 - v41 >= v42 ) /*0x4401fa*/
    {
LABEL_121:
      v43 = this->Type; /*0x440206*/
      v73 = this->health; /*0x44020f*/
      if ( *(_BYTE *)(v43 + 5814) ) /*0x440213*/
      {
        v68 = 0; /*0x440221*/
        v44 = -2; /*0x440226*/
        do /*0x4402de*/
        {
          v45 = -2; /*0x44022b*/
          do /*0x4402d4*/
          {
            v46 = (_WORD *)(*(int (__thiscall **)(BuildingClass *, char *))(this->vtable0 + 440))(this, v74); /*0x440239*/
            HIWORD(v69) = v44 + v46[1]; /*0x44024c*/
            LOWORD(v69) = *v46 + v45; /*0x440251*/
            *(_DWORD *)v71 = v69; /*0x44025e*/
            v47 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v71) + 14); /*0x44026d*/
            v48 = (_WORD *)(*(int (__thiscall **)(BuildingClass *, int *))(this->vtable0 + 440))(this, v75); /*0x440279*/
            HIWORD(v70) = v44 + v48[1]; /*0x44028c*/
            LOWORD(v70) = *v48 + v45; /*0x440291*/
            *(_DWORD *)v72 = v70; /*0x44029e*/
            v49 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v72) + 17); /*0x4402b3*/
            if ( v47 >= g_TerrainBridgeIndex && v47 < g_TerrainBridgeIndex + 16 || v49 >= 74 && v49 <= 101 ) /*0x4402c9*/
              v68 = 1; /*0x4402cb*/
            ++v45; /*0x4402d0*/
          }
          while ( v45 < 3 ); /*0x4402d4*/
          ++v44; /*0x4402da*/
        }
        while ( v44 < 3 ); /*0x4402de*/
        v50 = (__int16 *)(*(int (__thiscall **)(BuildingClass *, int *))(this->vtable0 + 440))(this, v75); /*0x4402f5*/
        if ( v68 ) /*0x4402ec*/
          MapClass::ApplyTerrainDamage((MapClass *)&dword_87F7E8, v50); /*0x440301*/
        else
          TerrainClass::ProcessSlope((TerrainClass *)&dword_87F7E8, v50); /*0x44031b*/
        this->C4Applied[0] = 0; /*0x440320*/
        this->C4AppliedBy = 0; /*0x440327*/
      }
      else
      {
        result = (*(int (__thiscall **)(BuildingClass *, int *, _DWORD, _DWORD, int, int, _DWORD, _DWORD))(this->vtable0 + 364))( /*0x440358*/
                   this,
                   &v73,
                   0,
                   *(_DWORD *)&dword_8871E0->__pad_C3C[876],
                   this->C4AppliedBy,
                   1,
                   0,
                   0);
      }
      LOBYTE(result) = this->isAliveFlag[0]; /*0x44035e*/
      if ( !(_BYTE)result ) /*0x440366*/
        return result; /*0x440366*/
      (*(void (__thiscall **)(BuildingClass *, int))(this->vtable0 + 292))(this, 2); /*0x440372*/
      goto LABEL_138; /*0x440372*/
    }
    v42 -= (int)dword_A8ED84 - v41; /*0x4401fc*/
  }
  if ( !v42 ) /*0x440200*/
    goto LABEL_121; /*0x440200*/
LABEL_138:
  result = this->target; /*0x440378*/
  if ( result ) /*0x440380*/
  {
    result = (*(int (__thiscall **)(BuildingClass *, int))(this->vtable0 + 940))(this, this->target); /*0x44038b*/
    if ( !(_BYTE)result ) /*0x440393*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)this->target + 44))(this->target) != 2 ) /*0x4403a7*/
        return (*(int (__thiscall **)(BuildingClass *, _DWORD))(this->vtable0 + 968))(this, 0); /*0x4403a7*/
      result = (*(int (__thiscall **)(int))(*(_DWORD *)this->target + 80))(this->target); /*0x4403b5*/
      if ( (_BYTE)result ) /*0x4403ba*/
        return (*(int (__thiscall **)(BuildingClass *, _DWORD))(this->vtable0 + 968))(this, 0); /*0x440567*/
    }
  }
  return result; /*0x4400ea*/
}



// ==== 0x00430010  sub_430010  this=-  sig=ida-proto ====
void sub_430010()
{
  dbl_89C448 = 0.0174532925199433 * 45.0; /*0x43001c*/
}



// ==== 0x00430030  sub_430030  this=-  sig=ida-proto ====
void sub_430030()
{
  dbl_89C3A0 = 0.0174532925199433 * 60.0; /*0x43003c*/
}



// ==== 0x00430050  sub_430050  this=-  sig=ida-proto ====
void sub_430050()
{
  dbl_89C378 = 0.0174532925199433 * 90.0; /*0x43005c*/
}



// ==== 0x00430070  sub_430070  this=-  sig=ida-proto ====
__int64 sub_430070()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89C378 - dbl_89C3A0); /*0x430082*/
  result = Math::RoundToInt(v0 * dbl_89C398 * 0.5); /*0x430096*/
  dword_89C470 = result; /*0x43009b*/
  return result; /*0x4300a0*/
}



// ==== 0x004300B0  sub_4300B0  this=-  sig=ida-proto ====
void sub_4300B0()
{
  dbl_89C3A8 = Math::ArcTan((double)dword_89C470 * 0.00390625); /*0x4300c7*/
}



// ==== 0x004300E0  sub_4300E0  this=-  sig=ida-proto ====
void sub_4300E0()
{
  dbl_89C440 = Math::ArcTan((double)(2 * dword_89C470) / dbl_89C398); /*0x430102*/
}



// ==== 0x00430110  sub_430110  this=-  sig=ida-proto ====
__int64 sub_430110()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C470) + 0.5); /*0x43012b*/
  dword_89C464 = result; /*0x430130*/
  return result; /*0x430136*/
}



// ==== 0x00430140  sub_430140  this=-  sig=ida-proto ====
int sub_430140()
{
  word_89C390 = 0; /*0x430142*/
  word_89C392 = 0; /*0x430148*/
  return 0; /*0x43014e*/
}



// ==== 0x00430150  sub_430150  this=-  sig=ida-proto ====
int sub_430150()
{
  dword_89C430 = 0; /*0x430152*/
  dword_89C434 = 0; /*0x430157*/
  dword_89C438 = 0; /*0x43015c*/
  return 0; /*0x430161*/
}



// ==== 0x00430170  sub_430170  this=-  sig=ida-proto ====
int sub_430170()
{
  dword_89C460 = 0; /*0x430175*/
  dword_89C458 = 128; /*0x43017f*/
  dword_89C45C = 128; /*0x430184*/
  return 128; /*0x430189*/
}



// ==== 0x00430190  sub_430190  this=-  sig=ida-proto ====
int sub_430190()
{
  memset(g_VisibilitySystem, 0, sizeof(g_VisibilitySystem)); /*0x43019d*/
  dword_89C410 = 0; /*0x4301a4*/
  dword_89C42C = 0; /*0x4301a9*/
  return atexit(sub_4301C0); /*0x4301b6*/
}



// ==== 0x004301C0  sub_4301C0  this=-  sig=ida-proto ====
void __cdecl sub_4301C0()
{
  void **v0; // esi
  int v1; // ebx
  int v2; // edi

  if ( dword_89C410 ) /*0x4301c7*/
  {
    v0 = (void **)g_VisibilitySystem; /*0x4301cc*/
    v1 = 8; /*0x4301d1*/
    do /*0x4301f7*/
    {
      v2 = 3; /*0x4301d6*/
      do /*0x4301f4*/
      {
        if ( *v0 ) /*0x4301db*/
        {
          __3_YAXPAX_Z(*v0); /*0x4301e2*/
          *v0 = 0; /*0x4301ea*/
        }
        ++v0; /*0x4301f0*/
        --v2; /*0x4301f3*/
      }
      while ( v2 ); /*0x4301f4*/
      --v1; /*0x4301f6*/
    }
    while ( v1 ); /*0x4301f7*/
    dword_89C410 = 0; /*0x4301fb*/
  }
}



// ==== 0x00430250  ObjectClass::RenderBuildingTag  this=ObjectClass  sig=csp ====
char __thiscall RenderBuildingTag(int this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // eax
  char v8; // al
  wchar_t *v9; // eax
  wchar_t *v10; // esi
  wchar_t *v11; // eax
  wchar_t *v12; // esi
  wchar_t *v13; // eax
  Char *v14; // edi
  int v15; // eax
  _DWORD *v16; // eax
  int v17; // esi
  int v19; // [esp+Ch] [ebp-15Ch] BYREF
  __int16 v20; // [esp+10h] [ebp-158h]
  unsigned __int8 v21; // [esp+12h] [ebp-156h]
  int v22; // [esp+18h] [ebp-150h] BYREF
  int v23; // [esp+1Ch] [ebp-14Ch] BYREF
  int v24[2]; // [esp+20h] [ebp-148h] BYREF
  int v25; // [esp+28h] [ebp-140h] BYREF
  int v26; // [esp+2Ch] [ebp-13Ch]
  int v27; // [esp+30h] [ebp-138h]
  int v28; // [esp+34h] [ebp-134h]
  _DWORD v29[4]; // [esp+38h] [ebp-130h] BYREF
  _DWORD v30[4]; // [esp+48h] [ebp-120h] BYREF
  _DWORD v31[4]; // [esp+58h] [ebp-110h] BYREF
  wchar_t Str[128]; // [esp+68h] [ebp-100h] BYREF

  v19 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] /*0x430283*/
                  + 4 * *(_DWORD *)(*((_DWORD *)stru_A80220.? + *(_DWORD *)(this + 272)) + 90196));
  LOBYTE(v7) = Coord::To_Screen((Coord *)g_TacticalClass_Instance, (_DWORD *)this, v24); /*0x430289*/
  if ( (_BYTE)v7 )
  {
    DrawToSurfaceSHP(
      a2,
      *(_DWORD *)(v19 + 780),
      dword_89C474,
      *(_DWORD *)&stru_A8EB00.?[416] % (g_VisibilitySystem.health / 2)
    + ((*(_BYTE *)(this + 12) & 2) != 0 ? g_VisibilitySystem.health / 2 : 0),
      v24,
      &a3,
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
    v7 = wcslen((const wchar_t *)(this + 14)); /*0x4302ff*/
    if ( v7 ) /*0x430309*/
    {
      v8 = *(_BYTE *)(this + 12); /*0x43030f*/
      qmemcpy(Str, (const void *)(this + 14), sizeof(Str)); /*0x43031e*/
      if ( (v8 & 2) == 0 ) /*0x430320*/
        goto LABEL_11; /*0x430320*/
      if ( stru_A8BB1C.__pad_87[214] ) /*0x430329*/
      {
        if ( timeGetTime() % 0x1F4 < 0xFA ) /*0x430340*/
        {
          v9 = wcsrchr(Str, 0x5Fu); /*0x430349*/
          v10 = v9; /*0x43034e*/
          if ( v9 ) /*0x430355*/
          {
            if ( wcslen(v9) == 1 ) /*0x430363*/
              *v10 = 32; /*0x430365*/
          }
        }
      }
      if ( (*(_BYTE *)(this + 12) & 2) == 0 || !stru_A8BB1C.__pad_87[214] ) /*0x430377*/
      {
LABEL_11:
        v11 = wcsrchr(Str, 0x5Fu); /*0x430380*/
        v12 = v11; /*0x430385*/
        if ( v11 && wcslen(v11) == 1 || (v13 = wcsrchr(Str, 0x20u), (v12 = v13) != 0) && wcslen(v13) == 1 ) /*0x4303bd*/
          *v12 = 0; /*0x4303bf*/
      }
      v14 = (Char *)g_FogOfWarState; /*0x4303c4*/
      v22 = 0; /*0x4303e2*/
      v23 = 0; /*0x4303e6*/
      Text::Layout(g_FogOfWarState, Str, &v22, &v23, 200); /*0x4303ea*/
      v27 = v22 + 8; /*0x43040a*/
      v26 = v24[1] + 32; /*0x430415*/
      v25 = v24[0] - v22 / 2 - 4; /*0x43041d*/
      v28 = v23 + 8; /*0x430428*/
      v15 = Color::ConvertToRGB((Color *)(v19 + 776), (int)&v19); /*0x430433*/
      v20 = *(_WORD *)v15; /*0x43043c*/
      v21 = *(_BYTE *)(v15 + 2); /*0x43044c*/
      v16 = ClipRectIntersection(v31, &v25, &a3, 0, 0); /*0x430459*/
      v29[0] = *v16; /*0x430464*/
      v29[1] = v16[1]; /*0x430473*/
      v29[2] = v16[2]; /*0x43047a*/
      v29[3] = v16[3]; /*0x430498*/
      v17 = ((unsigned __int8)v20 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4304d4*/
          | (HIBYTE(v20) >> g_BitMask_Blue << g_BitMask_Green)
          | (v21 >> g_BitMask_Red << g_BitShift_Blue);
      (*(void (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)a2 + 20))(a2, v29, 0); /*0x4304d6*/
      (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a2 + 88))(a2, v29, v17); /*0x4304e4*/
      Char::Swap(v14, 1); /*0x4304eb*/
      v30[0] = a3; /*0x430505*/
      v30[2] = a5 + a3 - 1; /*0x430514*/
      v30[1] = a4; /*0x430518*/
      v30[3] = a6 + a4 - 1; /*0x430527*/
      TextGroup::SetRect((TextGroup *)v14, v30); /*0x43052b*/
      Property::Set((Property *)v14, v17); /*0x430533*/
      LOBYTE(v7) = Font::Print((int)v14, a2, Str, v25 + 4, v26 + 4, 200, v28, 0, 0, 0); /*0x430568*/
    }
  }
  return v7; /*0x43056e*/
}



// ==== 0x00430580  nullsub_97  this=-  sig=csp ====
void __stdcall nullsub_97(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  ; /*0x430580*/
}



// ==== 0x00430590  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_430590(_DWORD *this, int a2, int a3, int a4, int a5)
{
  char result; // al

  if ( a2 != dword_89C430 || a3 != dword_89C434 || a4 != dword_89C438 ) /*0x4305b6*/
  {
    *this = a2; /*0x4305ba*/
    this->vtable2 = a3; /*0x4305bc*/
    this->vtable3 = a4; /*0x4305bf*/
  }
  result = a5; /*0x4305c2*/
  if ( a5 < 8 ) /*0x4305cb*/
  {
    this->q044 = a5; /*0x4305cd*/
    result = this->nextObject | 1; /*0x4305d6*/
    this->nextObject = result; /*0x4305d8*/
  }
  return result; /*0x4305c6*/
}



// ==== 0x004305E0  ObjectClass::method_4305E0  this=ObjectClass  sig=csp ====
char __thiscall sub_4305E0(_BYTE *this, char a2)
{
  char result; // al

  result = this->vtable4 & 0xFD | (2 * (a2 & 1)); /*0x4305ee*/
  this->vtable4 = result; /*0x4305f0*/
  return result; /*0x4305f3*/
}



// ==== 0x00430600  nullsub_98  this=-  sig=ida-proto ====
void nullsub_98()
{
  ; /*0x430600*/
}



// ==== 0x00430610  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_430610(ObjectClass *this)
{
  LOBYTE(this->?) &= ~1u; /*0x430610*/
}



// ==== 0x00430650  BuildingPlacement::RenderBuildingPlacementShadow  this=BuildingPlacement  sig=csp ====
int __thiscall BuildingPlacement::RenderBuildingPlacementShadow(
        BuildingPlacement *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  char v7; // bl
  int result; // eax
  signed int v10; // edi
  int *v11; // eax
  int v12; // ecx
  int v13; // esi
  int estimatedHealth; // ebp
  int v15; // edi
  int v16; // esi
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // esi
  _DWORD *v21; // eax
  int v22; // ebx
  int v23; // esi
  int v24; // edi
  int v25; // [esp+10h] [ebp-38h] BYREF
  int v26; // [esp+14h] [ebp-34h]
  int v27; // [esp+18h] [ebp-30h] BYREF
  int v28; // [esp+1Ch] [ebp-2Ch]
  int v29; // [esp+20h] [ebp-28h]
  int v30; // [esp+24h] [ebp-24h]
  int v31; // [esp+28h] [ebp-20h] BYREF
  int v32; // [esp+2Ch] [ebp-1Ch]
  int v33; // [esp+30h] [ebp-18h]
  int v34; // [esp+34h] [ebp-14h]
  int v35; // [esp+38h] [ebp-10h]
  int v36; // [esp+3Ch] [ebp-Ch]

  v7 = a7; /*0x430665*/
  result = g_VisibilitySystem.spawnStatus + 1; /*0x43066c*/
  v10 = *(_DWORD *)&stru_A8EB00.?[416] % g_VisibilitySystem.visibilityFlags; /*0x43066f*/
  if ( *(_DWORD *)&stru_A8EB00.?[416] % g_VisibilitySystem.visibilityFlags < g_VisibilitySystem.spawnStatus + 1 /*0x430677*/
    || (_BYTE)a7 )
  {
    v11 = Coord::WorldToScreen((Coord *)&stru_87F5F0.__pad_58[416], &v27, (int *)this->__pad_0, 1); /*0x43068a*/
    v12 = *v11; /*0x43068f*/
    v25 = *v11; /*0x430691*/
    v13 = v11[1]; /*0x430695*/
    v26 = v13; /*0x43069f*/
    if ( v10 < g_VisibilitySystem.spawnStatus && !v7 ) /*0x4306a7*/
    {
      DrawToSurfaceSHP( /*0x4306fa*/
        a2,
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3]
                              + 4 * *(_DWORD *)(*((_DWORD *)stru_A80220.? + *((_DWORD *)this + 68)) + 90196))
                  + 780),
        dword_89C478,
        v10,
        &v25,
        &a3,
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
      v12 = v25; /*0x4306ff*/
      v13 = v26; /*0x430703*/
    }
    estimatedHealth = g_VisibilitySystem.estimatedHealth; /*0x430707*/
    v15 = *(_DWORD *)&g_VisibilitySystem.isOnMap; /*0x43070d*/
    v35 = v12 - g_VisibilitySystem.estimatedHealth / 2; /*0x430729*/
    v16 = v13 - *(_DWORD *)&g_VisibilitySystem.isOnMap / 2; /*0x43072f*/
    v17 = v35 + *(_DWORD *)&stru_87F5F0.__pad_E12[2178]; /*0x430736*/
    v18 = v16 + *(_DWORD *)&stru_87F5F0.__pad_E12[2182]; /*0x43073e*/
    v36 = v16; /*0x430740*/
    if ( *(int *)&stru_87F5F0.__pad_E12[1530] <= 0 || *(int *)&stru_87F5F0.__pad_E12[1534] <= 0 ) /*0x430754*/
    {
      v31 = v35 + *(_DWORD *)&stru_87F5F0.__pad_E12[2178]; /*0x430819*/
      v32 = v16 + *(_DWORD *)&stru_87F5F0.__pad_E12[2182]; /*0x43081d*/
      v33 = g_VisibilitySystem.estimatedHealth; /*0x430821*/
      v34 = *(_DWORD *)&g_VisibilitySystem.isOnMap; /*0x430825*/
    }
    else if ( g_VisibilitySystem.estimatedHealth <= 0 || *(int *)&g_VisibilitySystem.isOnMap <= 0 ) /*0x430764*/
    {
      v31 = *(_DWORD *)&stru_87F5F0.__pad_E12[1522]; /*0x430807*/
      v32 = *(_DWORD *)&stru_87F5F0.__pad_E12[1526]; /*0x43080b*/
      v33 = *(_DWORD *)&stru_87F5F0.__pad_E12[1530]; /*0x43080f*/
      v34 = *(_DWORD *)&stru_87F5F0.__pad_E12[1534]; /*0x430813*/
    }
    else
    {
      v19 = *(_DWORD *)&stru_87F5F0.__pad_E12[1522]; /*0x43076a*/
      v29 = *(_DWORD *)&stru_87F5F0.__pad_E12[1530]; /*0x430776*/
      v28 = *(_DWORD *)&stru_87F5F0.__pad_E12[1526]; /*0x430782*/
      v30 = *(_DWORD *)&stru_87F5F0.__pad_E12[1534]; /*0x430786*/
      if ( *(int *)&stru_87F5F0.__pad_E12[1522] > v17 ) /*0x43078a*/
      {
        v19 = v35 + *(_DWORD *)&stru_87F5F0.__pad_E12[2178]; /*0x430794*/
        v29 += *(_DWORD *)&stru_87F5F0.__pad_E12[1522] - v17; /*0x430796*/
      }
      if ( *(int *)&stru_87F5F0.__pad_E12[1526] > v18 ) /*0x43079c*/
      {
        v28 = v16 + *(_DWORD *)&stru_87F5F0.__pad_E12[2182]; /*0x4307a6*/
        v30 += *(_DWORD *)&stru_87F5F0.__pad_E12[1526] - v18; /*0x4307aa*/
      }
      if ( v19 + v29 < v17 + g_VisibilitySystem.estimatedHealth ) /*0x4307b9*/
        v29 = v17 - v19 + g_VisibilitySystem.estimatedHealth + 1; /*0x4307c1*/
      v20 = v30; /*0x4307c5*/
      if ( v30 + v28 < v18 + *(_DWORD *)&g_VisibilitySystem.isOnMap ) /*0x4307d4*/
        v20 = v18 - v28 + *(_DWORD *)&g_VisibilitySystem.isOnMap + 1; /*0x4307da*/
      v31 = v19; /*0x4307e2*/
      v34 = v20; /*0x4307ea*/
      v16 = v36; /*0x4307ee*/
      v32 = v28; /*0x4307f2*/
      v33 = v29; /*0x4307f6*/
    }
    v21 = ClipRectIntersection(&v27, &v31, (int *)&stru_87F5F0.__pad_E12[2178], 0, 0); /*0x43083a*/
    v22 = v16; /*0x430841*/
    *(_DWORD *)&stru_87F5F0.__pad_E12[1522] = *v21; /*0x430843*/
    *(_DWORD *)&stru_87F5F0.__pad_E12[1526] = v21[1]; /*0x43084c*/
    *(_DWORD *)&stru_87F5F0.__pad_E12[1530] = v21[2]; /*0x430855*/
    *(_DWORD *)&stru_87F5F0.__pad_E12[1534] = v21[3]; /*0x43085e*/
    result = v16 + v15; /*0x430863*/
    a7 = v16 + v15; /*0x430868*/
    if ( v16 < v16 + v15 ) /*0x43086c*/
    {
      v23 = v35; /*0x43086e*/
      v24 = v35 + estimatedHealth; /*0x430872*/
      do /*0x4308a4*/
      {
        if ( v23 < v24 ) /*0x43087b*/
        {
          do /*0x430897*/
          {
            v27 = v23; /*0x430881*/
            v28 = v22; /*0x43088b*/
            FogOfWar::RevealCell((int)&stru_87F5F0.__pad_58[416], &v27); /*0x43088f*/
            ++v23; /*0x430894*/
          }
          while ( v23 < v24 ); /*0x430897*/
          v23 = v35; /*0x430899*/
          result = a7; /*0x43089d*/
        }
        ++v22; /*0x4308a1*/
      }
      while ( v22 < result ); /*0x4308a4*/
    }
  }
  return result; /*0x4308a6*/
}



// ==== 0x00430980  Game::initScenario  this=Game  sig=csp ====
void __thiscall Game::initScenario(Game *this)
{
  Game *v2; // esi
  int v3; // ebx
  int v4; // edi

  if ( *(_DWORD *)&this->__pad_44[28] ) /*0x430983*/
  {
    v2 = this; /*0x43098d*/
    v3 = 8; /*0x43098f*/
    do /*0x4309b5*/
    {
      v4 = 3; /*0x430994*/
      do /*0x4309b2*/
      {
        if ( *(_DWORD *)v2->__pad_0 ) /*0x430999*/
        {
          __3_YAXPAX_Z(*(void **)v2->__pad_0); /*0x4309a0*/
          *(_DWORD *)v2->__pad_0 = 0; /*0x4309a8*/
        }
        v2 = (Game *)((char *)v2 + 4); /*0x4309ae*/
        --v4; /*0x4309b1*/
      }
      while ( v4 ); /*0x4309b2*/
      --v3; /*0x4309b4*/
    }
    while ( v3 ); /*0x4309b5*/
    *(_DWORD *)&this->__pad_44[28] = 0; /*0x4309b9*/
  }
}



// ==== 0x004309D0  CCFileClass::Create  this=CCFileClass  sig=csp ====
void __thiscall CCFileClass::Create(CCFileClass *this)
{
  __int16 *EntireFile; // eax
  __int16 *v3; // eax
  int v4; // eax
  RawFileClass v5; // [esp+4h] [ebp-48h] BYREF
  RawFileClass v6; // [esp+28h] [ebp-24h] BYREF

  RawFileClass::Construct(&v6, (int)aPbeaconShp); /*0x4309df*/
  EntireFile = (__int16 *)CCFileClass::ReadEntireFile((CCFileClass *)&v6); /*0x4309e8*/
  dword_89C474 = (int)EntireFile; /*0x4309ef*/
  if ( EntireFile || (EntireFile = (__int16 *)SearchMIXFile(aPbeaconShp, 0), (dword_89C474 = (int)EntireFile) != 0) ) /*0x430a09*/
  {
    this->tail_19 = EntireFile[1]; /*0x430a0f*/
    *((_DWORD *)this + 26) = *(__int16 *)(dword_89C474 + 4); /*0x430a1c*/
    *((_DWORD *)this + 27) = *(__int16 *)(dword_89C474 + 6); /*0x430a28*/
  }
  else
  {
    Debug::Log(); /*0x430a32*/
  }
  RawFileClass::Construct(&v5, (int)aRdrbeacnShp); /*0x430a43*/
  v3 = (__int16 *)CCFileClass::ReadEntireFile((CCFileClass *)&v5); /*0x430a4c*/
  dword_89C478 = (int)v3; /*0x430a53*/
  if ( v3 || (v3 = (__int16 *)SearchMIXFile(aRdrbeacnShp, 0), (dword_89C478 = (int)v3) != 0) ) /*0x430a6d*/
  {
    this->BufferDirty = v3[1]; /*0x430a73*/
    this->BufferReadPending = *(__int16 *)(dword_89C478 + 4); /*0x430a7f*/
    v4 = *(__int16 *)(dword_89C478 + 6); /*0x430a88*/
    this->BufferWritePending = v4; /*0x430a8c*/
    this->FlushOnClose = 4 * v4; /*0x430a92*/
  }
  else
  {
    Debug::Log(); /*0x430a9c*/
  }
  RawFileClass::Dtor(&v5); /*0x430aa8*/
  RawFileClass::Dtor(&v6); /*0x430ab1*/
}



// ==== 0x00430AC0  ObjectClass::RenderAlliedBuildingTags  this=ObjectClass  sig=csp ====
int __thiscall RenderAlliedBuildingTags(ObjectClass *this, int a2, int a3, int a4, int a5, int a6)
{
  int result; // eax
  ObjectClass *v7; // edi
  int vtable0; // esi
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  result = this->customSound_controller[4]; /*0x430ac0*/
  if ( result ) /*0x430acc*/
  {
    v7 = this; /*0x430ada*/
    v10 = 8; /*0x430adc*/
    do /*0x430b84*/
    {
      v9 = 3; /*0x430ae4*/
      do /*0x430b75*/
      {
        vtable0 = (int)v7->AbstractClass; /*0x430aec*/
        if ( v7->AbstractClass /*0x430b3b*/
          && (*(_BYTE *)(vtable0 + 12) & 1) != 0
          && (unsigned __int8)HouseClass::IsAllied((HouseClass *)dword_A83D4C, *(_DWORD *)(vtable0 + 272))
          && (unsigned __int8)HouseClass::IsAlliedWith(
                                *((#375 **)stru_A80220.? + *(_DWORD *)(vtable0 + 272)),
                                (#375 *)dword_A83D4C)
          && !*(_BYTE *)(*((_DWORD *)stru_A80220.? + *(_DWORD *)(vtable0 + 272)) + 501) )
        {
          RenderBuildingTag(vtable0, a2, a3, a4, a5, a6); /*0x430b64*/
        }
        v7 = (ObjectClass *)((char *)v7 + 4); /*0x430b6d*/
        --v9; /*0x430b71*/
      }
      while ( v9 ); /*0x430b75*/
      result = --v10; /*0x430b7f*/
    }
    while ( v10 ); /*0x430b84*/
  }
  return result; /*0x430b8a*/
}



// ==== 0x00430BA0  ObjectClass::PlacePlayerBeacon  this=ObjectClass  sig=csp ====
void __thiscall PlacePlayerBeacon(ObjectClass *this, int a2, int a3, int a4, int a5, int a6)
{
  char *v7; // edi
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // eax
  int *v11; // esi
  int v12; // eax
  _DWORD *i; // ecx
  char v14; // al
  wchar_t *StringCSF; // eax
  wchar_t *v16; // eax
  int v17; // esi
  int v18; // ecx
  void **v19; // edi
  int v20; // [esp-10h] [ebp-1F0h]
  int v21; // [esp-10h] [ebp-1F0h]
  int v22; // [esp+10h] [ebp-1D0h]
  int v24; // [esp+18h] [ebp-1C8h] BYREF
  char v25[43]; // [esp+1Ch] [ebp-1C4h] BYREF
  int v26; // [esp+47h] [ebp-199h]
  int v27; // [esp+4Bh] [ebp-195h]
  int v28; // [esp+4Fh] [ebp-191h]
  char v29; // [esp+53h] [ebp-18Dh]
  char j; // [esp+54h] [ebp-18Ch]

  v7 = (char *)this + 12 * a2; /*0x430bba*/
  v8 = 0; /*0x430bbe*/
  v9 = v7; /*0x430bc4*/
  while ( *v9 ) /*0x430bc9*/
  {
    ++v8; /*0x430bcb*/
    ++v9; /*0x430bcc*/
    if ( v8 >= 3 ) /*0x430bd2*/
    {
      if ( a6 == -1 ) /*0x430bdc*/
        return; /*0x430bdc*/
      break; /*0x430bdc*/
    }
  }
  v10 = __2_YAPAXI_Z(0x114u); /*0x430be2*/
  if ( v10 ) /*0x430bf3*/
  {
    v11 = (int *)v10; /*0x430bff*/
    *(_DWORD *)v10 = *(_DWORD *)&g_VisibilitySystem.needsRedraw; /*0x430c01*/
    *(_DWORD *)(v10 + 4) = *(_DWORD *)&g_VisibilitySystem.hasParachute; /*0x430c08*/
    *(_DWORD *)(v10 + 8) = g_VisibilitySystem.parachute; /*0x430c10*/
    *(_BYTE *)(v10 + 12) &= 0xFCu; /*0x430c1d*/
    memset((void *)(v10 + 14), 0, 0x100u); /*0x430c22*/
  }
  else
  {
    v11 = 0; /*0x430c2a*/
  }
  if ( a6 == -1 ) /*0x430c36*/
  {
    v12 = 0; /*0x430c3c*/
    for ( i = v7; *i; ++i ) /*0x430c3e*/
    {
      if ( ++v12 >= 3 ) /*0x430c4c*/
      {
        __3_YAXPAX_Z(v11); /*0x430c4f*/
        return; /*0x430c61*/
      }
    }
    LOBYTE(a6) = v12; /*0x430c6b*/
    *((_DWORD *)&this->AbstractClass + 2 * a2 + v12 + a2) = v11; /*0x430c72*/
  }
  else
  {
    v18 = a6 + 2 * a2 + a2; /*0x430e62*/
    v19 = &this->AbstractClass + v18; /*0x430e6a*/
    if ( *v19 ) /*0x430e64*/
    {
      __3_YAXPAX_Z(*(&this->AbstractClass + v18)); /*0x430e71*/
      --this->customSound_controller[4]; /*0x430e7d*/
    }
    *v19 = v11; /*0x430e80*/
  }
  if ( a3 != *(_DWORD *)&g_VisibilitySystem.needsRedraw /*0x430ca3*/
    || a4 != *(_DWORD *)&g_VisibilitySystem.hasParachute
    || (AnimClass *)a5 != g_VisibilitySystem.parachute )
  {
    *v11 = a3; /*0x430cae*/
    v11[1] = a4; /*0x430cb0*/
    v11[2] = a5; /*0x430cb3*/
  }
  if ( a2 < 8 ) /*0x430cb9*/
  {
    v14 = *((_BYTE *)v11 + 12); /*0x430cbb*/
    v11[68] = a2; /*0x430cbe*/
    *((_BYTE *)v11 + 12) = v14 | 1; /*0x430cc6*/
  }
  ++this->customSound_controller[4]; /*0x430cd1*/
  if ( *(_DWORD *)&dword_A8B238 && *(_DWORD *)&dword_A8B238 != 5 ) /*0x430ce4*/
  {
    if ( (void *)a2 == dword_A83D4C->Object_field_0x30 ) /*0x430cf3*/
    {
      v20 = *(_DWORD *)&dword_A83D4C[134].__pad_90[4]; /*0x430d0b*/
      StringCSF = GetStringCSF(&aTxtBeaconHelp1, 0, "D:\\ra2mdpost\\Beacon.CPP", 811); /*0x430d1d*/
      MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, StringCSF, v20, 16454, 225, 0); /*0x430d2c*/
      v21 = *(_DWORD *)&dword_A83D4C[134].__pad_90[4]; /*0x430d4a*/
      v16 = GetStringCSF((wchar_t *)stru_818A68.Priority, 0, "D:\\ra2mdpost\\Beacon.CPP", 812); /*0x430d5a*/
      MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, v16, v21, 16454, 225, 0); /*0x430d69*/
      VoxClass::FindAndPlay((VoxClass *)&stru_818A68.YuriVoice[8], -1); /*0x430d78*/
      PlayVocClass(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 460), 0x2000, 1.0, 0); /*0x430d94*/
      v24 = 32; /*0x430d9f*/
      strcpy(v25, ToWideStringChar((char *)*dword_A8DA78)); /*0x430dcf*/
      v29 = a6; /*0x430de6*/
      v17 = 1; /*0x430def*/
      v26 = a3; /*0x430df6*/
      v27 = a4; /*0x430dfa*/
      v28 = a5; /*0x430dfe*/
      for ( j = a2; v17 < dword_A8DA84; ++v17 ) /*0x430e06*/
      {
        Debug::Log(); /*0x430e1b*/
        Network::SendMessage(&unk_A8E9C0.Socket, (int)&v24, 61, 1, dword_A8DA78[v17] + 40, 0, 0); /*0x430e41*/
      }
    }
    else if ( (v11[3] & 1) != 0 ) /*0x430e8b*/
    {
      if ( (unsigned __int8)HouseClass::IsAllied((HouseClass *)dword_A83D4C, v11[68]) ) /*0x430e98*/
      {
        if ( (unsigned __int8)HouseClass::IsAlliedWith(*((#375 **)stru_A80220.? + v11[68]), (#375 *)dword_A83D4C) ) /*0x430eb6*/
        {
          if ( !*(_BYTE *)(*((_DWORD *)stru_A80220.? + v11[68]) + 501) ) /*0x430ece*/
          {
            LOWORD(v22) = a3 / 256; /*0x430ee6*/
            HIWORD(v22) = a4 / 256; /*0x430ef9*/
            if ( (unsigned __int8)CreateTriggerClassIfFarEnough(11, (unsigned __int8)(a4 >> 31), v22) ) /*0x430f08*/
              VoxClass::FindAndPlay(&stru_818A68, -1); /*0x430f1b*/
          }
        }
      }
    }
  }
}



// ==== 0x00430F30  MapClass::isCellAccessible  this=MapClass  sig=csp ====
char __thiscall sub_430F30(char *this, int a2)
{
  int v2; // eax
  char *i; // ecx

  v2 = 0; /*0x430f34*/
  for ( i = this + 12 * a2; *(_DWORD *)i; i += 4 ) /*0x430f39*/
  {
    if ( ++v2 >= 3 ) /*0x430f48*/
      return 0; /*0x430f4c*/
  }
  return 1; /*0x430f4c*/
}



// ==== 0x00430F60  sub_430F60  this=-  sig=csp ====
_DWORD *__stdcall sub_430F60(_DWORD *a1)
{
  *a1 = 0; /*0x430f68*/
  a1[1] = 0; /*0x430f6a*/
  return a1; /*0x430f6d*/
}



// ==== 0x00430F70  PlayerClass::FindNearestWaypoint  this=PlayerClass  sig=csp ====
char __thiscall PlayerClass::FindNearestWaypoint(PlayerClass *this, int a2, int a3, int a4)
{
  double v4; // st7
  PlayerClass *p_PlayerClass_field_0x0C; // edi
  int v6; // esi
  _DWORD *v7; // eax
  int v8; // eax
  bool v9; // sf
  bool v10; // of
  int v12; // esi
  double v13; // [esp+0h] [ebp-30h]
  MapClass *v14; // [esp+8h] [ebp-28h]
  int v15; // [esp+18h] [ebp-18h]
  PlayerClass *v16; // [esp+1Ch] [ebp-14h]
  int v18; // [esp+24h] [ebp-Ch]
  int v19; // [esp+28h] [ebp-8h]
  int v20; // [esp+2Ch] [ebp-4h]

  if ( !this->q018 ) /*0x430f79*/
    return 0; /*0x431026*/
  p_PlayerClass_field_0x0C = this; /*0x430f8b*/
  v15 = 0; /*0x430f8d*/
  v16 = this; /*0x430f95*/
LABEL_3:
  v6 = 0; /*0x430f99*/
  while ( 1 ) /*0x430f9b*/
  {
    v7 = *(_DWORD **)p_PlayerClass_field_0x0C->__pad_0; /*0x430f9b*/
    if ( *(_DWORD *)p_PlayerClass_field_0x0C->__pad_0 ) /*0x430f9b*/
    {
      v19 = a3 - v7[1]; /*0x430fb6*/
      __asm { fild [esp+28h+var_8] } /*0x430fbc*/
      v20 = a4 - v7[2]; /*0x430fc0*/
      v18 = a2 - *v7; /*0x430fc4*/
      __asm /*0x430fc8*/
      {
        fild [esp+28h+var_4]
        fild [esp+28h+var_C]
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
        fstp [esp+30h+var_30]; double
        fstp st
        fstp st
        fstp st
      }
      Math::Sqrt(v13); /*0x430fec*/
      LOWORD(v8) = Math::RoundToInt(v4); /*0x430ff4*/
      if ( v8 < 128 ) /*0x430ffe*/
        break; /*0x430ffe*/
    }
    ++v6; /*0x431000*/
    p_PlayerClass_field_0x0C = (PlayerClass *)((char *)p_PlayerClass_field_0x0C + 4); /*0x431001*/
    if ( v6 >= 3 ) /*0x431007*/
    {
      p_PlayerClass_field_0x0C = (PlayerClass *)&v16->PlayerClass_field_0x0C; /*0x431012*/
      v10 = __OFSUB__(v15 + 1, 8); /*0x431015*/
      v9 = v15 - 7 < 0; /*0x431015*/
      ++v15; /*0x431018*/
      v16 = (PlayerClass *)((char *)v16 + 12); /*0x43101c*/
      if ( v9 != v10 ) /*0x431020*/
        goto LABEL_3; /*0x431020*/
      return 0; /*0x431020*/
    }
  }
  v12 = *(_DWORD *)&this->__pad_0[8 * v15 + 4 * v6 + 4 * v15]; /*0x43103e*/
  if ( !v12 ) /*0x431043*/
    return 0; /*0x431043*/
  MapClass::UnselectAll_ClearLimboLaunchers(v14); /*0x431045*/
  *(_BYTE *)(v12 + 12) |= 2u; /*0x431050*/
  return 1; /*0x431028*/
}



// ==== 0x00431090  Radar::FindNearestRadarTarget  this=Radar  sig=csp ====
int __thiscall Radar::FindNearestRadarTarget(Radar *this, int a2, int a3, int a4)
{
  double v4; // st7
  Radar *p_Radar_field_0xC; // edi
  int i; // esi
  _DWORD *v7; // eax
  int v8; // eax
  bool v9; // sf
  bool v10; // of
  double v12; // [esp+0h] [ebp-30h]
  int v13; // [esp+18h] [ebp-18h]
  Radar *v14; // [esp+1Ch] [ebp-14h]
  int v16; // [esp+24h] [ebp-Ch]
  int v17; // [esp+28h] [ebp-8h]
  int v18; // [esp+2Ch] [ebp-4h]

  if ( this->Radar_field_0x60 ) /*0x431099*/
  {
    p_Radar_field_0xC = this; /*0x4310ab*/
    v13 = 0; /*0x4310ad*/
    v14 = this; /*0x4310b5*/
    while ( 2 ) /*0x4310b9*/
    {
      for ( i = 0; i < 3; ++i ) /*0x4310b9*/
      {
        v7 = *(_DWORD **)p_Radar_field_0xC->__pad_0; /*0x4310bb*/
        if ( *(_DWORD *)p_Radar_field_0xC->__pad_0 ) /*0x4310bb*/
        {
          v17 = a3 - v7[1]; /*0x4310d6*/
          __asm { fild [esp+28h+var_8] } /*0x4310dc*/
          v18 = a4 - v7[2]; /*0x4310e0*/
          v16 = a2 - *v7; /*0x4310e4*/
          __asm /*0x4310e8*/
          {
            fild [esp+28h+var_4]
            fild [esp+28h+var_C]
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
            fstp [esp+30h+var_30]; double
            fstp st
            fstp st
            fstp st
          }
          Math::Sqrt(v12); /*0x43110c*/
          LOWORD(v8) = Math::RoundToInt(v4); /*0x431114*/
          if ( v8 < 128 ) /*0x43111e*/
            return *(_DWORD *)&this->__pad_0[8 * v13 + 4 * i + 4 * v13]; /*0x431161*/
        }
        p_Radar_field_0xC = (Radar *)((char *)p_Radar_field_0xC + 4); /*0x431121*/
      }
      p_Radar_field_0xC = (Radar *)&v14->Radar_field_0xC; /*0x431132*/
      v10 = __OFSUB__(v13 + 1, 8); /*0x431135*/
      v9 = v13 - 7 < 0; /*0x431135*/
      ++v13; /*0x431138*/
      v14 = (Radar *)((char *)v14 + 12); /*0x43113c*/
      if ( v9 != v10 ) /*0x431140*/
        continue; /*0x431140*/
      break;
    }
  }
  return 0; /*0x431148*/
}



// ==== 0x00431170  BufferIO::FindActiveChannel  this=BufferIO  sig=csp ====
int __thiscall BufferIO::FindActiveChannel(BufferIO *this, int a2)
{
  int v2; // ebp
  BufferIO *v3; // esi
  int v4; // edx
  int *v5; // ecx
  int result; // eax

  if ( !*((_DWORD *)this + 24) ) /*0x431170*/
    return 0; /*0x4311b3*/
  v2 = 0; /*0x43117f*/
  v3 = this; /*0x431181*/
LABEL_3:
  v4 = 0; /*0x431185*/
  v5 = (int *)v3; /*0x431187*/
  while ( 1 ) /*0x431189*/
  {
    result = *v5; /*0x431189*/
    if ( *v5 ) /*0x431189*/
    {
      if ( (*(_BYTE *)(result + 12) & 2) != 0 && (a2 == -1 || a2 == *(_DWORD *)(result + 272)) ) /*0x43119f*/
        return result; /*0x4311b5*/
    }
    ++v4; /*0x4311a1*/
    ++v5; /*0x4311a2*/
    if ( v4 >= 3 ) /*0x4311a8*/
    {
      ++v2; /*0x4311aa*/
      ++v3; /*0x4311ab*/
      if ( v2 < 8 ) /*0x4311b1*/
        goto LABEL_3; /*0x4311b1*/
      return 0; /*0x4311b1*/
    }
  }
}



// ==== 0x004311C0  Network::SendBeaconDelete  this=Network  sig=csp ====
int __thiscall Network::SendBeaconDelete(Network *this, int a2, int a3)
{
  int result; // eax
  int v5; // edi
  Network *v6; // esi
  int v7; // edx
  int *p_Network_field_0x0; // ecx
  int v9; // esi
  int *v10; // eax
  int v11; // ebx
  int v12; // esi
  char v13; // [esp+13h] [ebp-1DDh]
  int v14; // [esp+14h] [ebp-1DCh]
  int v15[4]; // [esp+18h] [ebp-1D8h] BYREF
  int v16; // [esp+28h] [ebp-1C8h] BYREF
  char v17[452]; // [esp+2Ch] [ebp-1C4h] BYREF

  result = (int)this->Network_field_0x60; /*0x4311cc*/
  if ( result ) /*0x4311d1*/
  {
    if ( a2 == -1 && a3 == -1 ) /*0x4311ed*/
    {
      v13 = 1; /*0x4311ef*/
      v5 = 0; /*0x4311f4*/
      v6 = this; /*0x4311f6*/
LABEL_5:
      v7 = 0; /*0x4311fa*/
      p_Network_field_0x0 = &v6->Network_field_0x0; /*0x4311fc*/
      while ( 1 ) /*0x4311fe*/
      {
        result = *p_Network_field_0x0; /*0x4311fe*/
        if ( *p_Network_field_0x0 ) /*0x4311fe*/
        {
          if ( (*(_BYTE *)(result + 12) & 2) != 0 ) /*0x431207*/
            break; /*0x431207*/
        }
        ++v7; /*0x431209*/
        ++p_Network_field_0x0; /*0x43120a*/
        if ( v7 >= 3 ) /*0x431210*/
        {
          ++v5; /*0x431212*/
          v6 = (Network *)((char *)v6 + 12); /*0x431213*/
          if ( v5 >= 8 ) /*0x431219*/
            return result; /*0x431219*/
          goto LABEL_5; /*0x431219*/
        }
      }
      v9 = *p_Network_field_0x0; /*0x431265*/
    }
    else
    {
      v13 = 0; /*0x431224*/
      result = a3 + 2 * a2 + a2; /*0x431229*/
      v9 = *(&this->Network_field_0x0 + result); /*0x43122b*/
    }
    if ( v9 ) /*0x431231*/
    {
      result = *(_DWORD *)(v9 + 272); /*0x43123d*/
      v14 = result; /*0x431243*/
      if ( (void *)result == dword_A83D4C->Object_field_0x30 || !v13 ) /*0x431252*/
      {
        if ( (*(_BYTE *)(v9 + 12) & 1) != 0 /*0x4312a6*/
          && (unsigned __int8)HouseClass::IsAllied((HouseClass *)dword_A83D4C, result)
          && (unsigned __int8)HouseClass::IsAlliedWith(
                                *((#375 **)stru_A80220.? + *(_DWORD *)(v9 + 272)),
                                (#375 *)dword_A83D4C)
          && !*(_BYTE *)(*((_DWORD *)stru_A80220.? + *(_DWORD *)(v9 + 272)) + 501) )
        {
          v10 = (int *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)&stru_87F5F0.__pad_E12[1538] + 120))( /*0x4312bf*/
                         *(_DWORD *)&stru_87F5F0.__pad_E12[1538],
                         v15);
          BuildingPlacement::RenderBuildingPlacementShadow( /*0x4312e6*/
            (BuildingPlacement *)v9,
            *(int *)&stru_87F5F0.__pad_E12[1538],
            *v10,
            v10[1],
            v10[2],
            v10[3],
            1);
        }
        __3_YAXPAX_Z((void *)v9); /*0x4312ec*/
        v11 = 0; /*0x4312f8*/
        result = (int)this + 12 * v14; /*0x4312fd*/
        while ( v9 != *(_DWORD *)result ) /*0x431303*/
        {
          ++v11; /*0x431305*/
          result += 4; /*0x431306*/
          if ( v11 >= 3 ) /*0x43130c*/
            return result; /*0x43130c*/
        }
        *(&this->Network_field_0x0 + 2 * v14 + v11 + v14) = 0; /*0x431322*/
        --this->Network_field_0x60; /*0x43132e*/
        result = *(_DWORD *)&dword_A8B238; /*0x431331*/
        if ( *(_DWORD *)&dword_A8B238 ) /*0x431338*/
        {
          if ( *(_DWORD *)&dword_A8B238 != 5 ) /*0x431341*/
          {
            result = (int)dword_A83D4C; /*0x431347*/
            if ( (void *)v14 == dword_A83D4C->Object_field_0x30 ) /*0x43134f*/
            {
              LOBYTE(result) = v13; /*0x431355*/
              if ( v13 ) /*0x43135b*/
              {
                v16 = 33; /*0x431367*/
                strcpy(v17, ToWideStringChar((char *)*dword_A8DA78)); /*0x431390*/
                result = dword_A8DA84; /*0x431394*/
                v12 = 1; /*0x4313a2*/
                v17[56] = v14; /*0x4313a9*/
                for ( v17[55] = v11; v12 < dword_A8DA84; ++v12 ) /*0x4313b1*/
                {
                  Debug::Log(); /*0x4313c2*/
                  Network::SendMessage(&unk_A8E9C0.Socket, (int)&v16, 61, 1, dword_A8DA78[v12] + 40, 0, 0); /*0x4313e9*/
                  result = dword_A8DA84; /*0x4313ee*/
                }
              }
            }
          }
        }
      }
      else
      {
        *(_BYTE *)(v9 + 12) &= 0xFCu; /*0x431254*/
      }
    }
  }
  return result; /*0x431258*/
}



// ==== 0x00431410  HouseClass::createStartingUnits  this=HouseClass  sig=csp ====
int __thiscall HouseClass::createStartingUnits(HouseClass *this, int a2)
{
  int result; // eax
  int v4; // esi
  void **v5; // edi

  result = this->grindersCount; /*0x431413*/
  if ( result ) /*0x431418*/
  {
    result = 3 * a2; /*0x431421*/
    v4 = 0; /*0x431424*/
    v5 = &this->AbstractClass + 3 * a2; /*0x431426*/
    do /*0x43143f*/
    {
      if ( *v5 ) /*0x43142a*/
        result = Network::SendBeaconDelete((Network *)this, a2, v4); /*0x431433*/
      ++v4; /*0x431438*/
      ++v5; /*0x431439*/
    }
    while ( v4 < 3 ); /*0x43143f*/
  }
  return result; /*0x431444*/
}



// ==== 0x00431450  Network::SendBeacon  this=Network  sig=csp ====
int __thiscall Network::SendBeacon(Network *this, wchar_t *Source, int a3, int a4, char a5)
{
  int result; // eax
  int v6; // edi
  Network *v7; // esi
  int v8; // edx
  int *p_Network_field_0x0; // ecx
  int v10; // ebp
  char *v11; // eax
  char v12; // dl
  char Object_field_0x30; // cl
  int *v14; // ecx
  int i; // esi
  int v16; // ecx
  char v17; // [esp+13h] [ebp-1D9h]
  int v19; // [esp+14h] [ebp-1D8h]
  int v20; // [esp+24h] [ebp-1C8h] BYREF
  char v21[43]; // [esp+28h] [ebp-1C4h] BYREF
  char v22; // [esp+53h] [ebp-199h]
  char v23; // [esp+54h] [ebp-198h]
  wchar_t Destination[203]; // [esp+55h] [ebp-197h] BYREF

  if ( a3 == -1 && a4 == -1 ) /*0x431474*/
  {
    result = (int)this->Network_field_0x60; /*0x431476*/
    v17 = 1; /*0x431479*/
    if ( !result ) /*0x431480*/
      return result; /*0x431480*/
    v6 = 0; /*0x431486*/
    v7 = this; /*0x431488*/
LABEL_5:
    v8 = 0; /*0x43148c*/
    p_Network_field_0x0 = &v7->Network_field_0x0; /*0x43148e*/
    while ( 1 ) /*0x431490*/
    {
      result = *p_Network_field_0x0; /*0x431490*/
      if ( *p_Network_field_0x0 ) /*0x431490*/
      {
        if ( (*(_BYTE *)(result + 12) & 2) != 0 ) /*0x431499*/
          break; /*0x431499*/
      }
      ++v8; /*0x43149f*/
      ++p_Network_field_0x0; /*0x4314a0*/
      if ( v8 >= 3 ) /*0x4314a6*/
      {
        ++v6; /*0x4314a8*/
        v7 = (Network *)((char *)v7 + 12); /*0x4314a9*/
        if ( v6 >= 8 ) /*0x4314af*/
          return result; /*0x4314af*/
        goto LABEL_5; /*0x4314af*/
      }
    }
    v10 = *p_Network_field_0x0; /*0x43158a*/
  }
  else
  {
    v17 = 0; /*0x4314ba*/
    result = a4 + 2 * a3 + a3; /*0x4314bf*/
    v10 = *(&this->Network_field_0x0 + result); /*0x4314c1*/
  }
  if ( v10 ) /*0x4314c6*/
  {
    memset((void *)(v10 + 14), 0, 0x100u); /*0x4314e1*/
    if ( Source ) /*0x4314e3*/
      wcsncpy((wchar_t *)(v10 + 14), Source, 0x7Fu); /*0x4314e9*/
    result = *(_DWORD *)&dword_A8B238; /*0x4314f1*/
    if ( *(_DWORD *)&dword_A8B238 && *(_DWORD *)&dword_A8B238 != 5 ) /*0x431501*/
    {
      if ( v17 && *(void **)(v10 + 272) == dword_A83D4C->Object_field_0x30 && a5 ) /*0x431533*/
      {
        v20 = 34; /*0x43153f*/
        strcpy(v21, ToWideStringChar((char *)*dword_A8DA78)); /*0x431568*/
        if ( Source ) /*0x431573*/
        {
          wcsncpy(Destination, Source, 0x80u); /*0x431580*/
        }
        else
        {
          v11 = CharToWideString(&g_INI_DefaultBuffer); /*0x431596*/
          wcscpy(Destination, (const wchar_t *)v11); /*0x4315a1*/
        }
        v12 = -1; /*0x4315b2*/
        Object_field_0x30 = (char)dword_A83D4C->Object_field_0x30; /*0x4315b5*/
        v22 = -1; /*0x4315b8*/
        v23 = Object_field_0x30; /*0x4315bc*/
        result = 0; /*0x4315c0*/
        v14 = &this->Network_field_0x0 + 3 * Object_field_0x30; /*0x4315c8*/
        do /*0x4315dc*/
        {
          if ( *v14 == v10 ) /*0x4315cd*/
          {
            v12 = result; /*0x4315cf*/
            v22 = result; /*0x4315d1*/
          }
          ++result; /*0x4315d5*/
          ++v14; /*0x4315d6*/
        }
        while ( result < 3 ); /*0x4315dc*/
        if ( v12 != -1 ) /*0x4315e1*/
        {
          result = dword_A8DA84; /*0x4315e7*/
          for ( i = 1; i < dword_A8DA84; ++i ) /*0x4315f3*/
          {
            Debug::Log(); /*0x431608*/
            Network::SendMessage(&unk_A8E9C0.Socket, (int)&v20, 455, 1, dword_A8DA78[i] + 40, 0, 0); /*0x431632*/
            result = dword_A8DA84; /*0x431637*/
          }
        }
      }
      else
      {
        result = *(_DWORD *)(v10 + 272); /*0x43164e*/
        if ( (void *)result != dword_A83D4C->Object_field_0x30 && (*(_BYTE *)(v10 + 12) & 1) != 0 ) /*0x431663*/
        {
          result = HouseClass::IsAllied((HouseClass *)dword_A83D4C, result); /*0x43166a*/
          if ( (_BYTE)result ) /*0x431671*/
          {
            result = HouseClass::IsAlliedWith(*((#375 **)stru_A80220.? + *(_DWORD *)(v10 + 272)), (#375 *)dword_A83D4C); /*0x431688*/
            if ( (_BYTE)result ) /*0x43168f*/
            {
              result = *((_DWORD *)stru_A80220.? + *(_DWORD *)(v10 + 272)); /*0x43169d*/
              if ( !*(_BYTE *)(result + 501) ) /*0x4316a0*/
              {
                v16 = *(_DWORD *)(v10 + 4); /*0x4316b4*/
                LOWORD(v19) = *(_DWORD *)v10 / 256; /*0x4316c3*/
                HIWORD(v19) = v16 / 256; /*0x4316db*/
                return CreateTriggerClassIfFarEnough(11, (unsigned __int8)(v16 >> 31), v19); /*0x4316e5*/
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x431641*/
}



// ==== 0x00431700  HouseClass::Render  this=HouseClass  sig=csp ====
int __thiscall HouseClass::Render(HouseClass *this, int a2, int a3, int a4, int a5, int a6)
{
  int result; // eax
  int *v7; // edi
  int v8; // esi
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  result = this->grindersCount; /*0x431700*/
  if ( result ) /*0x43170c*/
  {
    result = g_VisibilitySystem.spawnStatus + 1; /*0x431720*/
    if ( *(_DWORD *)&stru_A8EB00.?[416] % this->bunkersCapacity < g_VisibilitySystem.spawnStatus + 1 ) /*0x431723*/
    {
      result = (int)this; /*0x431731*/
      v10 = 8; /*0x431733*/
      do /*0x4317e1*/
      {
        v7 = (int *)result; /*0x43173b*/
        v9 = 3; /*0x43173d*/
        do /*0x4317d0*/
        {
          v8 = *v7; /*0x431745*/
          if ( *v7 /*0x431794*/
            && (*(_BYTE *)(v8 + 12) & 1) != 0
            && (unsigned __int8)HouseClass::IsAllied((HouseClass *)dword_A83D4C, *(_DWORD *)(v8 + 272))
            && (unsigned __int8)HouseClass::IsAlliedWith(
                                  *((#375 **)stru_A80220.? + *(_DWORD *)(v8 + 272)),
                                  (#375 *)dword_A83D4C)
            && !*(_BYTE *)(*((_DWORD *)stru_A80220.? + *(_DWORD *)(v8 + 272)) + 501) )
          {
            BuildingPlacement::RenderBuildingPlacementShadow((BuildingPlacement *)v8, a2, a3, a4, a5, a6, 0); /*0x4317bf*/
          }
          ++v7; /*0x4317c8*/
          --v9; /*0x4317cc*/
        }
        while ( v9 ); /*0x4317d0*/
        result = (int)v7; /*0x4317da*/
        --v10; /*0x4317dd*/
      }
      while ( v10 ); /*0x4317e1*/
    }
  }
  return result; /*0x4317e7*/
}



// ==== 0x00431800  HouseClass::ProcessData  this=HouseClass  sig=csp ====
bool __thiscall HouseClass::ProcessData(HouseClass *this)
{
  HouseClass *v1; // ebx
  int v2; // ebp
  HouseClass *v3; // edi
  void *vtable0; // esi
  char v6; // [esp+3h] [ebp-9h]
  int v7; // [esp+4h] [ebp-8h]

  if ( !this->grindersCount ) /*0x431803*/
    return 0; /*0x431803*/
  v6 = 0; /*0x431816*/
  v1 = this; /*0x43181b*/
  v7 = 8; /*0x43181d*/
  do /*0x43189e*/
  {
    v2 = 0; /*0x431825*/
    v3 = v1; /*0x431827*/
    while ( 1 ) /*0x431829*/
    {
      vtable0 = v3->AbstractClass; /*0x431829*/
      if ( v3->AbstractClass ) /*0x431829*/
      {
        if ( (*((_BYTE *)vtable0 + 12) & 1) != 0 /*0x431878*/
          && (unsigned __int8)HouseClass::IsAllied((HouseClass *)dword_A83D4C, *((_DWORD *)vtable0 + 68))
          && (unsigned __int8)HouseClass::IsAlliedWith(
                                *((#375 **)stru_A80220.? + *((_DWORD *)vtable0 + 68)),
                                (#375 *)dword_A83D4C)
          && !*(_BYTE *)(*((_DWORD *)stru_A80220.? + *((_DWORD *)vtable0 + 68)) + 501) )
        {
          break; /*0x431878*/
        }
      }
      ++v2; /*0x431882*/
      v3 = (HouseClass *)((char *)v3 + 4); /*0x431883*/
      if ( v2 >= 3 ) /*0x431889*/
        goto LABEL_12; /*0x431889*/
    }
    v6 = 1; /*0x43188d*/
LABEL_12:
    v1 = (HouseClass *)((char *)v1 + 12); /*0x431892*/
    --v7; /*0x43189a*/
  }
  while ( v7 ); /*0x43189e*/
  return v6 && *(_DWORD *)&stru_A8EB00.?[416] % this->bunkersCapacity < g_VisibilitySystem.spawnStatus + 1; /*0x4318c3*/
}



// ==== 0x004318D0  sub_4318D0  this=-  sig=ida-proto ====
int sub_4318D0()
{
  dword_89C480 = 0; /*0x4318d2*/
  dword_89C484 = 0; /*0x4318d7*/
  dword_89C488 = 0; /*0x4318dc*/
  dword_89C48C = 0; /*0x4318e1*/
  return 0; /*0x4318e6*/
}



// ==== 0x00431920  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_431920(ObjectClass *this)
{
  this->? = 0; /*0x431922*/
  this->? = 0; /*0x431925*/
  this->? = 0; /*0x431928*/
  return 0; /*0x43192b*/
}



// ==== 0x00431930  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_431930(ObjectClass *this, int a2)
{
  unsigned int v3; // eax
  int result; // eax
  void *v5; // [esp+8h] [ebp-4h]

  if ( (_BYTE)a2 ) /*0x43193c*/
  {
    this->? = 0; /*0x43193e*/
    this->? = 0; /*0x431941*/
    this->? = 0; /*0x431944*/
  }
  v3 = Timer::ReadTSC(&a2); /*0x43194c*/
  result = (a2 << 28) | (v3 >> 4); /*0x431962*/
  this->AbstractClass = (void *)result; /*0x431964*/
  this->? = v5; /*0x431966*/
  return result; /*0x431969*/
}



// ==== 0x00431A30  ObjectClass::Set  this=BufferIOFileClass  sig=csp ====
int __thiscall ObjectClass::Set(ObjectClass *this, char *Source)
{
  LOBYTE(this->vtable1) = 0; /*0x431a39*/
  this->vtable2 = 1; /*0x431a3c*/
  this->vtable3 = 0; /*0x431a43*/
  this->uniqueId = -1; /*0x431a46*/
  this->abstractFlags = -1; /*0x431a49*/
  this->nextArrayIndex = 0; /*0x431a4c*/
  this->referenceCount = 0; /*0x431a4f*/
  LOBYTE(this->NeedsSaveOrLink) = 0; /*0x431a57*/
  this->occupant = 0; /*0x431a5a*/
  LOBYTE(this->owningHouseIndex) = 0; /*0x431a66*/
  BYTE1(this->owningHouseIndex) = 0; /*0x431a69*/
  this->fallRate = 0; /*0x431a6c*/
  this->nextObject = 0; /*0x431a6f*/
  this->attachedTag = 0; /*0x431a72*/
  this->attachedBomb = 0; /*0x431a75*/
  this->ambientSoundController[0] = 0; /*0x431a78*/
  this->ambientSoundController[1] = -1; /*0x431a7b*/
  this->ambientSoundController[2] = -1; /*0x431a7e*/
  this->ambientSoundController[3] = 0; /*0x431a81*/
  this->ambientSoundController[4] = 0; /*0x431a84*/
  this->customSound_controller[0] = 0; /*0x431a87*/
  this->vtable0 = (int)&BufferIOFileClass::`vftable'; /*0x431a8a*/
  if ( ObjectClass::GetMember06((RawFileClass *)this) && BYTE1(this->owningHouseIndex) ) /*0x431a9a*/
  {
    if ( !strcmp(Source, (const char *)(*(int (__thiscall **)(ObjectClass *))(this->vtable0 + 4))(this)) ) /*0x431ab7*/
    {
      (*(void (__thiscall **)(ObjectClass *))(this->vtable0 + 4))(this); /*0x431ae6*/
      return (int)this; /*0x431aed*/
    }
    BufferIO::Flush((BufferIO *)this); /*0x431af2*/
    HIBYTE(this->occupant) = 0; /*0x431af7*/
  }
  FileClass::SetName((BufferIOFileClass *)this, Source); /*0x431b01*/
  (*(void (__thiscall **)(ObjectClass *))(this->vtable0 + 4))(this); /*0x431b0a*/
  return (int)this; /*0x431aeb*/
}



// ==== 0x00431B20  BufferIOFileClass::Constructor  this=BufferIOFileClass  sig=csp ====
_BYTE *__thiscall BufferIOFileClass::Constructor(CCFileClass *this)
{
  LOBYTE(this->FilePointer) = 0; /*0x431b27*/
  this->FileSize = 1; /*0x431b2a*/
  this->Handle = 0; /*0x431b31*/
  this->FileName = -1; /*0x431b34*/
  *(_DWORD *)this->FileTimeDateLo = -1; /*0x431b37*/
  *(_DWORD *)this->FileNameAllocated = 0; /*0x431b3a*/
  *(_WORD *)this->BufferDirty = 0; /*0x431b3d*/
  *(_WORD *)this->BufferWritePending = 0; /*0x431b41*/
  this->CacheReadAhead[0] = 0; /*0x431b45*/
  this->BufferOffset = 0; /*0x431b48*/
  LOBYTE(this->BufferSize) = 0; /*0x431b54*/
  BYTE1(this->BufferSize) = 0; /*0x431b57*/
  this->BufferPosition = 0; /*0x431b5a*/
  this->FileBaseOffset = 0; /*0x431b5d*/
  this->BufferReadSize = 0; /*0x431b60*/
  this->StreamSize = 0; /*0x431b63*/
  this->BufferMaxSize = 0; /*0x431b66*/
  this->BufferCursor = -1; /*0x431b69*/
  this->TotalBytesRead = -1; /*0x431b6c*/
  this->TotalBytesWritten = 0; /*0x431b6f*/
  this->FileID = 0; /*0x431b72*/
  this->MixFileIndex = 0; /*0x431b75*/
  this->FileClass = (FileClass)&BufferIOFileClass::`vftable'; /*0x431b78*/
  return &this->FileClass; /*0x431b7e*/
}



// ==== 0x00431B80  BufferIOFileClass::Dtor  this=BufferIOFileClass  sig=csp ====
int __thiscall BufferIOFileClass::Dtor(BufferIOFileClass *this)
{
  void *FileBaseOffset; // eax

  FileBaseOffset = (void *)this->FileBaseOffset; /*0x431b86*/
  this->FileClass = (FileClass)&BufferIOFileClass::`vftable'; /*0x431b89*/
  if ( FileBaseOffset ) /*0x431b91*/
  {
    if ( LOBYTE(this->BufferOffset) ) /*0x431b93*/
    {
      __3_YAXPAX_Z(FileBaseOffset); /*0x431b99*/
      LOBYTE(this->BufferOffset) = 0; /*0x431ba1*/
    }
    this->FileBaseOffset = 0; /*0x431ba4*/
  }
  this->BufferReadSize = 0; /*0x431ba9*/
  BYTE1(this->BufferOffset) = 0; /*0x431bac*/
  HIBYTE(this->BufferOffset) = 0; /*0x431baf*/
  LOBYTE(this->BufferSize) = 0; /*0x431bb2*/
  BYTE1(this->BufferSize) = 0; /*0x431bb5*/
  return RawFileClass::Dtor(this); /*0x431bbd*/
}



// ==== 0x00431BC0  ObjectClass::method_431BC0  this=ObjectClass  sig=csp ====
bool __thiscall sub_431BC0(ObjectClass *this, int a2, size_t a3)
{
  int v5; // edi
  int v6; // eax
  BombClass *v7; // edi
  bool v8; // zf
  int (__thiscall **vtable0)(ObjectClass *, int); // eax
  TagClass *attachedTag; // [esp+24h] [ebp+4h]
  size_t v11; // [esp+28h] [ebp+8h]

  if ( this->nextObject ) /*0x431bc8*/
    return !a2 && !a3; /*0x431bdb*/
  if ( (*((unsigned __int8 (__thiscall **)(ObjectClass *, _DWORD))this->AbstractClass + 5))(this, 0) ) /*0x431bef*/
    this->ambientSoundController[3] = (*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 11))(this); /*0x431bfd*/
  else
    this->ambientSoundController[3] = 0; /*0x431c02*/
  v5 = a2; /*0x431c05*/
  if ( a2 ) /*0x431c0f*/
  {
    if ( a2 < 1024 ) /*0x431c17*/
    {
      v5 = 1024; /*0x431c1b*/
      if ( a3 ) /*0x431c20*/
        (*((void (__thiscall **)(ObjectClass *, int, _DWORD, _DWORD))this->AbstractClass + 16))(this, 22, 0, 0); /*0x431c2a*/
    }
    this->attachedTag = (TagClass *)v5; /*0x431c2f*/
    if ( v5 ) /*0x431c32*/
      goto LABEL_14; /*0x431c32*/
  }
  else
  {
    this->attachedTag = (TagClass *)this->ambientSoundController[3]; /*0x431c53*/
  }
  if ( a3 ) /*0x431c36*/
    return 0; /*0x431d83*/
LABEL_14:
  if ( !this->attachedTag ) /*0x431c41*/
    return 0; /*0x431c41*/
  if ( a3 ) /*0x431c49*/
    this->nextObject = (ObjectClass *)a3; /*0x431c4b*/
  else
    this->nextObject = (ObjectClass *)__2_YAPAXI_Z((size_t)this->attachedTag); /*0x431c61*/
  if ( !this->nextObject ) /*0x431c67*/
  {
    (*((void (__thiscall **)(ObjectClass *, int, _DWORD, _DWORD))this->AbstractClass + 16))(this, 12, 0, 0); /*0x431d7d*/
    return 0; /*0x431d7d*/
  }
  v6 = this->ambientSoundController[3]; /*0x431c6d*/
  LOBYTE(this->occupant) = 1; /*0x431c75*/
  BYTE2(this->occupant) = 0; /*0x431c79*/
  this->attachedBomb = 0; /*0x431c7c*/
  this->ambientSoundController[0] = 0; /*0x431c7f*/
  this->ambientSoundController[1] = -1; /*0x431c82*/
  this->ambientSoundController[2] = -1; /*0x431c85*/
  this->ambientSoundController[4] = 0; /*0x431c88*/
  this->customSound_controller[0] = 0; /*0x431c8b*/
  if ( v6 ) /*0x431c8e*/
  {
    v7 = 0; /*0x431c97*/
    v11 = 0; /*0x431c9b*/
    attachedTag = (TagClass *)v6; /*0x431c9f*/
    if ( v6 > (int)this->attachedTag ) /*0x431ca3*/
      attachedTag = this->attachedTag; /*0x431ca5*/
    v8 = (*((unsigned __int8 (__thiscall **)(ObjectClass *))this->AbstractClass + 6))(this) == 0; /*0x431cb0*/
    vtable0 = (int (__thiscall **)(ObjectClass *, int))this->AbstractClass; /*0x431cb2*/
    if ( v8 ) /*0x431cb6*/
    {
      if ( vtable0[7](this, 1) ) /*0x431d02*/
      {
        this->customSound_controller[0] = FileClass::Seek((RawFileClass *)this, 0, 1u); /*0x431d13*/
        v11 = 1; /*0x431d16*/
      }
    }
    else
    {
      v7 = (BombClass *)vtable0[10](this, 0); /*0x431cbe*/
      if ( this->? == -1 ) /*0x431cc5*/
        this->customSound_controller[0] = (int)v7; /*0x431cd6*/
      else
        this->customSound_controller[0] = FileClass::Seek((RawFileClass *)this, 0, 1u); /*0x431cd1*/
      if ( this->ambientSoundController[3] > (int)this->attachedTag ) /*0x431ce1*/
      {
        this->ambientSoundController[0] = (int)v7; /*0x431cf8*/
        this->ambientSoundController[4] = (int)v7; /*0x431cfb*/
      }
      else
      {
        if ( v7 ) /*0x431ce5*/
          (*((void (__thiscall **)(ObjectClass *, _DWORD, _DWORD))this->AbstractClass + 10))(this, 0, 0); /*0x431ced*/
        this->attachedBomb = v7; /*0x431cf0*/
        this->ambientSoundController[4] = (int)v7; /*0x431cf3*/
      }
    }
    if ( (TagClass *)(*((int (__thiscall **)(ObjectClass *, ObjectClass *, TagClass *))this->AbstractClass + 9))( /*0x431d30*/
                       this,
                       this->nextObject,
                       attachedTag) != attachedTag )
      (*((void (__thiscall **)(ObjectClass *, int, _DWORD, _DWORD))this->AbstractClass + 16))(this, 5, 0, 0); /*0x431d3a*/
    if ( v11 ) /*0x431d41*/
    {
      (*((void (__thiscall **)(ObjectClass *))this->AbstractClass + 13))(this); /*0x431d47*/
      HIBYTE(this->occupant) = 1; /*0x431d4a*/
      BYTE1(this->owningHouseIndex) = 1; /*0x431d4e*/
      return 1; /*0x431d58*/
    }
    (*((void (__thiscall **)(ObjectClass *, BombClass *, _DWORD))this->AbstractClass + 10))(this, v7, 0); /*0x431d61*/
    HIBYTE(this->occupant) = 1; /*0x431d64*/
  }
  BYTE1(this->owningHouseIndex) = 1; /*0x431d68*/
  return 1; /*0x431be1*/
}



// ==== 0x00431D90  ObjectClass::method_431D90  this=ObjectClass  sig=csp ====
void __thiscall sub_431D90(ObjectClass *this)
{
  if ( this->nextObject ) /*0x431d96*/
  {
    if ( LOBYTE(this->occupant) ) /*0x431d9d*/
    {
      __3_YAXPAX_Z(this->nextObject); /*0x431da3*/
      LOBYTE(this->occupant) = 0; /*0x431dab*/
    }
    this->nextObject = 0; /*0x431dae*/
  }
  this->attachedTag = 0; /*0x431db1*/
  BYTE1(this->occupant) = 0; /*0x431db4*/
  HIBYTE(this->occupant) = 0; /*0x431db7*/
  LOBYTE(this->owningHouseIndex) = 0; /*0x431dba*/
  BYTE1(this->owningHouseIndex) = 0; /*0x431dbd*/
}



// ==== 0x00431DD0  BufferIO::Flush  this=BufferIO  sig=csp ====
int __thiscall BufferIO::Flush(BufferIO *this)
{
  int result; // eax
  int v3; // eax
  DWORD v4; // edi

  if ( *((_BYTE *)this + 41) && *((_BYTE *)this + 40) ) /*0x431dde*/
  {
    v3 = this->q004; /*0x431de9*/
    v4 = *((_DWORD *)this + 17) - v3; /*0x431df3*/
    if ( *((_BYTE *)this + 38) ) /*0x431dec*/
    {
      FileClass::Seek((RawFileClass *)this, v3 + *((_DWORD *)this + 20) + *((_DWORD *)this + 15), 0); /*0x431e08*/
      FileClass::Write2((RawFileClass *)this, *((LPCVOID *)this + 12), v4); /*0x431e14*/
      result = FileClass::Seek((RawFileClass *)this, *((_DWORD *)this + 20) + *((_DWORD *)this + 19), 0); /*0x431e26*/
    }
    else
    {
      FileClass::Open2((RawFileClass *)this, (const CHAR *)1); /*0x431e38*/
      FileClass::Seek((RawFileClass *)this, this->q004 + *((_DWORD *)this + 15) + *((_DWORD *)this + 20), 0); /*0x431e4f*/
      FileClass::Write2((RawFileClass *)this, *((LPCVOID *)this + 12), v4); /*0x431e5b*/
      result = FileClass::CloseHandle((RawFileClass *)this); /*0x431e62*/
    }
    *((_BYTE *)this + 40) = 0; /*0x431e2b*/
    LOBYTE(result) = 1; /*0x431e30*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x431e70*/
  }
  return result; /*0x431e32*/
}



// ==== 0x00431E80  BufferIOFileClass::SetName  this=BufferIOFileClass  sig=csp ====
int __thiscall CCFileClass::SetName(BufferIOFileClass *this, char *Source)
{
  if ( (*(int (__thiscall **)(BufferIOFileClass *))(*(_DWORD *)&this->FileClass + 4))(this) && BYTE1(this->BufferSize) ) /*0x431e91*/
  {
    if ( !strcmp( /*0x431ead*/
            Source,
            (const char *)(*(int (__thiscall **)(BufferIOFileClass *))(*(_DWORD *)&this->FileClass + 4))(this)) )
      return (*(int (__thiscall **)(BufferIOFileClass *))(*(_DWORD *)&this->FileClass + 4))(this); /*0x431ee1*/
    BufferIO::Flush((BufferIO *)this); /*0x431ee6*/
    HIBYTE(this->BufferOffset) = 0; /*0x431eeb*/
  }
  FileClass::SetName(this, Source); /*0x431ef2*/
  return (*(int (__thiscall **)(BufferIOFileClass *))(*(_DWORD *)&this->FileClass + 4))(this); /*0x431edf*/
}



// ==== 0x00431F10  BufferIOFileClass::IsReady  this=BufferIOFileClass  sig=csp ====
int __thiscall File::IsReady(BufferIOFileClass *this, int a2)
{
  int result; // eax

  if ( !BYTE1(this->BufferSize) ) /*0x431f10*/
    return FileClass::Open((RawFileClass *)this, 0); /*0x431f1e*/
  LOBYTE(result) = 1; /*0x431f17*/
  return result; /*0x431f19*/
}



// ==== 0x00431F30  BufferIOFileClass::Read  this=BufferIOFileClass  sig=csp ====
bool __thiscall BufferIOFileClass::Read(BufferIOFileClass *this)
{
  BOOL v1; // eax

  if ( BYTE1(this->BufferOffset) && BYTE1(this->BufferSize) ) /*0x431f37*/
    LOBYTE(v1) = 1; /*0x431f3e*/
  else
    return *(_DWORD *)this->? != -1; /*0x431f49*/
  return v1; /*0x431f40*/
}



// ==== 0x00431F50  BufferIOFileClass::Write  this=BufferIOFileClass  sig=csp ====
BOOL __thiscall BufferIOFileClass::Write(BufferIOFileClass *this, int a2, const CHAR *a3)
{
  (*(void (__thiscall **)(BufferIOFileClass *, int))(*(_DWORD *)&this->FileClass + 8))(this, a2); /*0x431f5c*/
  return BufferIOFileClass::Open((CCFileClass *)this, a3); /*0x431f6b*/
}



// ==== 0x00431F70  BufferIOFileClass::Open  this=BufferIOFileClass  sig=csp ====
int __thiscall BufferIOFileClass::Open(CCFileClass *this, const CHAR *a2)
{
  FileClass v3; // eax
  const CHAR *v4; // eax
  FileClass v5; // edx
  int BufferPosition; // eax

  if ( BYTE1(this->BufferSize) ) /*0x431f76*/
  {
    BufferIO::Flush((BufferIO *)this); /*0x431f7b*/
    if ( BYTE2(this->BufferOffset) ) /*0x431f80*/
    {
      if ( this->MixFileIndex ) /*0x431f85*/
      {
        v3 = this->FileClass; /*0x431f8a*/
        BYTE1(this->BufferSize) = 0; /*0x431f8e*/
        (*(void (__thiscall **)(CCFileClass *))(*(_DWORD *)&v3 + 52))(this); /*0x431f91*/
        BYTE1(this->BufferSize) = 1; /*0x431f94*/
        BYTE2(this->BufferOffset) = 0; /*0x431f98*/
        BYTE1(this->BufferOffset) = 0; /*0x431f9b*/
        goto LABEL_8; /*0x431f9e*/
      }
      FileClass::CloseHandle(this); /*0x431fa2*/
      BYTE2(this->BufferOffset) = 0; /*0x431fa7*/
    }
    BYTE1(this->BufferOffset) = 0; /*0x431faa*/
  }
  else
  {
    FileClass::CloseHandle(this); /*0x431faf*/
  }
LABEL_8:
  v4 = a2; /*0x431fb4*/
  if ( BYTE1(this->BufferSize) ) /*0x431fb4*/
  {
    this->BufferPosition = (int)a2; /*0x431fc6*/
    if ( a2 == (const CHAR *)1 ) /*0x431fc9*/
    {
      if ( this->TotalBytesWritten <= this->BufferReadSize ) /*0x431fd3*/
      {
        BYTE2(this->BufferOffset) = 0; /*0x431fd5*/
LABEL_19:
        this->StreamSize = 0; /*0x432023*/
        this->BufferMaxSize = 0; /*0x432029*/
        this->BufferCursor = -1; /*0x43202c*/
        this->TotalBytesRead = -1; /*0x43202f*/
        this->FileID = 0; /*0x432032*/
        BYTE1(this->BufferOffset) = 1; /*0x432035*/
        return 1; /*0x432040*/
      }
    }
    else if ( a2 == (const CHAR *)2 ) /*0x431fdd*/
    {
      FileClass::Open2(this, (const CHAR *)2); /*0x431fe2*/
      FileClass::CloseHandle(this); /*0x431fe9*/
      v4 = (const CHAR *)3; /*0x431fee*/
      this->MixFileIndex = 0; /*0x431ff3*/
    }
    if ( this->MixFileIndex ) /*0x431ff6*/
    {
      v5 = this->FileClass; /*0x431ffb*/
      BYTE1(this->BufferSize) = 0; /*0x432000*/
      (*(void (__thiscall **)(CCFileClass *, const CHAR *))(*(_DWORD *)&v5 + 28))(this, v4); /*0x432003*/
      BYTE1(this->BufferSize) = 1; /*0x432006*/
    }
    else
    {
      FileClass::Open2(this, v4); /*0x43200f*/
    }
    BufferPosition = this->BufferPosition; /*0x432014*/
    BYTE2(this->BufferOffset) = 1; /*0x432017*/
    if ( BufferPosition == 2 ) /*0x43201e*/
      this->TotalBytesWritten = 0; /*0x432020*/
    goto LABEL_19; /*0x432020*/
  }
  return FileClass::Open2(this, a2); /*0x432039*/
}



// ==== 0x00432050  BufferIOFileClass::BufferedWriter  this=BufferIOFileClass  sig=csp ====
int __thiscall FileClass::BufferedWriter(CCFileClass *this, char *lpBuffer, DWORD nNumberOfBytesToWrite)
{
  int result; // eax
  signed int v5; // ebx
  int BufferReadSize; // eax
  signed int v7; // edi
  signed int TotalBytesWritten; // ebp
  FileClass v9; // edx
  int StreamSize; // ecx
  int BufferCursor; // eax
  int v12; // eax
  int TotalBytesRead; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  FileClass v18; // edx
  int v19; // edi
  int FileID; // [esp-8h] [ebp-20h]
  int v21; // [esp+10h] [ebp-8h]
  int v22; // [esp+14h] [ebp-4h]

  v22 = 0; /*0x43205b*/
  if ( !(*(unsigned __int8 (__thiscall **)(CCFileClass *))(*(_DWORD *)&this->FileClass + 24))(this) ) /*0x43205f*/
  {
    result = (*(int (__thiscall **)(CCFileClass *, int))(*(_DWORD *)&this->FileClass + 28))(this, 2); /*0x43206c*/
    if ( !result ) /*0x432071*/
      return result; /*0x432071*/
    this->MixFileIndex = FileClass::Seek(this, 0, 1u); /*0x432085*/
    v22 = 1; /*0x432088*/
  }
  if ( BYTE1(this->BufferSize) ) /*0x432090*/
  {
    v21 = 0; /*0x4320a2*/
    if ( this->BufferPosition == 1 ) /*0x4320a6*/
    {
      (*(void (__thiscall **)(CCFileClass *, int, _DWORD, _DWORD))(*(_DWORD *)&this->FileClass + 64))(this, 13, 0, 0); /*0x432262*/
    }
    else
    {
      v5 = nNumberOfBytesToWrite; /*0x4320ac*/
      if ( nNumberOfBytesToWrite ) /*0x4320b2*/
      {
        do /*0x43224c*/
        {
          BufferReadSize = this->BufferReadSize; /*0x4320b9*/
          v7 = BufferReadSize - this->StreamSize; /*0x4320c1*/
          if ( v5 < v7 ) /*0x4320c5*/
            v7 = v5; /*0x4320c7*/
          if ( v7 != BufferReadSize && !HIBYTE(this->BufferOffset) ) /*0x4320d1*/
          {
            if ( this->TotalBytesWritten >= BufferReadSize ) /*0x4320e1*/
            {
              TotalBytesWritten = this->BufferReadSize; /*0x4320ee*/
              this->BufferMaxSize = this->FileID; /*0x4320f3*/
            }
            else
            {
              TotalBytesWritten = this->TotalBytesWritten; /*0x4320e3*/
              this->BufferMaxSize = 0; /*0x4320e5*/
            }
            if ( this->MixFileIndex ) /*0x4320f6*/
            {
              v9 = this->FileClass; /*0x432100*/
              FileID = this->FileID; /*0x432104*/
              BYTE1(this->BufferSize) = 0; /*0x432107*/
              (*(void (__thiscall **)(CCFileClass *, int, _DWORD))(*(_DWORD *)&v9 + 40))(this, FileID, 0); /*0x43210b*/
              (*(void (__thiscall **)(CCFileClass *, int, int))(*(_DWORD *)&this->FileClass + 36))( /*0x43211a*/
                this,
                this->FileBaseOffset,
                this->BufferReadSize);
              (*(void (__thiscall **)(CCFileClass *, int, _DWORD))(*(_DWORD *)&this->FileClass + 40))( /*0x432127*/
                this,
                this->FileID,
                0);
              BYTE1(this->BufferSize) = 1; /*0x43212a*/
            }
            else
            {
              FileClass::Seek(this, this->BufferMaxSize, 0); /*0x432138*/
              FileClass::Read(this, (char *)this->FileBaseOffset, TotalBytesWritten); /*0x432144*/
            }
            this->StreamSize = 0; /*0x43214c*/
            this->BufferCursor = -1; /*0x432153*/
            this->TotalBytesRead = -1; /*0x432156*/
            HIBYTE(this->BufferOffset) = 1; /*0x432159*/
          }
          memcpy((void *)(this->FileBaseOffset + this->StreamSize), &lpBuffer[v21], v7); /*0x432175*/
          StreamSize = this->StreamSize; /*0x43217e*/
          v21 += v7; /*0x432186*/
          BufferCursor = this->BufferCursor; /*0x43218a*/
          v5 -= v7; /*0x43218d*/
          LOBYTE(this->BufferSize) = 1; /*0x432191*/
          if ( BufferCursor == -1 ) /*0x432195*/
          {
            this->BufferCursor = StreamSize; /*0x432197*/
            this->TotalBytesRead = StreamSize; /*0x43219a*/
          }
          else if ( BufferCursor > StreamSize ) /*0x4321a1*/
          {
            this->BufferCursor = StreamSize; /*0x4321a3*/
          }
          v12 = StreamSize + v7; /*0x4321a6*/
          TotalBytesRead = this->TotalBytesRead; /*0x4321a9*/
          this->StreamSize = v12; /*0x4321ae*/
          if ( TotalBytesRead < v12 ) /*0x4321b1*/
            this->TotalBytesRead = v12; /*0x4321b3*/
          v14 = this->TotalBytesWritten; /*0x4321b9*/
          v15 = v12 + this->BufferMaxSize; /*0x4321bc*/
          this->FileID = v15; /*0x4321c0*/
          if ( v14 < v15 ) /*0x4321c3*/
            this->TotalBytesWritten = v15; /*0x4321c5*/
          if ( v12 == this->BufferReadSize ) /*0x4321cb*/
          {
            BufferIO::Flush((BufferIO *)this); /*0x4321cf*/
            v16 = this->FileID; /*0x4321d4*/
            this->StreamSize = 0; /*0x4321d7*/
            this->BufferMaxSize = v16; /*0x4321e0*/
            this->BufferCursor = -1; /*0x4321e3*/
            this->TotalBytesRead = -1; /*0x4321e6*/
            if ( v5 && (v17 = v16, this->TotalBytesWritten > v16) ) /*0x4321f2*/
            {
              if ( this->MixFileIndex ) /*0x4321f4*/
              {
                v18 = this->FileClass; /*0x4321fb*/
                BYTE1(this->BufferSize) = 0; /*0x432202*/
                (*(void (__thiscall **)(CCFileClass *, int, _DWORD))(*(_DWORD *)&v18 + 40))(this, v17, 0); /*0x432206*/
                (*(void (__thiscall **)(CCFileClass *, int, int))(*(_DWORD *)&this->FileClass + 36))( /*0x432215*/
                  this,
                  this->FileBaseOffset,
                  this->BufferReadSize);
                (*(void (__thiscall **)(CCFileClass *, int, _DWORD))(*(_DWORD *)&this->FileClass + 40))( /*0x432222*/
                  this,
                  this->FileID,
                  0);
                BYTE1(this->BufferSize) = 1; /*0x432225*/
              }
              else
              {
                FileClass::Seek(this, v16, 0); /*0x432230*/
                FileClass::Read(this, (char *)this->FileBaseOffset, this->BufferReadSize); /*0x43223f*/
              }
            }
            else
            {
              HIBYTE(this->BufferOffset) = 0; /*0x432246*/
            }
          }
        }
        while ( v5 ); /*0x43224c*/
        v19 = v21; /*0x432252*/
        goto LABEL_38; /*0x432258*/
      }
    }
    v19 = 0; /*0x432265*/
  }
  else
  {
    v19 = FileClass::Write2(this, lpBuffer, nNumberOfBytesToWrite); /*0x43227d*/
  }
LABEL_38:
  if ( v22 ) /*0x432285*/
    (*(void (__thiscall **)(CCFileClass *))(*(_DWORD *)&this->FileClass + 52))(this); /*0x43228b*/
  return v19; /*0x432073*/
}



// ==== 0x004322A0  BufferIOFileClass::BufferedReader  this=BufferIOFileClass  sig=csp ====
int __thiscall FileClass::BufferedReader(CCFileClass *this, char *lpBuffer, DWORD nNumberOfBytesToRead)
{
  signed int v4; // ebx
  signed int v5; // edi
  signed int BufferReadSize; // ebp
  FileClass v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  FileClass v11; // edx
  int v12; // edi
  int FileID; // [esp-8h] [ebp-20h]
  int v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]

  v16 = 0; /*0x4322ab*/
  if ( !(*(unsigned __int8 (__thiscall **)(CCFileClass *))(*(_DWORD *)&this->FileClass + 24))(this) /*0x4322bc*/
    && (*(int (__thiscall **)(CCFileClass *, int))(*(_DWORD *)&this->FileClass + 28))(this, 1) )
  {
    this->MixFileIndex = FileClass::Seek(this, 0, 1u); /*0x4322cd*/
    v16 = 1; /*0x4322d0*/
  }
  if ( !BYTE1(this->BufferSize) ) /*0x4322dd*/
  {
    v12 = FileClass::Read(this, lpBuffer, nNumberOfBytesToRead); /*0x432492*/
    goto LABEL_29; /*0x432492*/
  }
  v15 = 0; /*0x4322ea*/
  if ( this->BufferPosition == 2 ) /*0x4322ee*/
  {
    (*(void (__thiscall **)(CCFileClass *, int, _DWORD, _DWORD))(*(_DWORD *)&this->FileClass + 64))(this, 13, 0, 0); /*0x432477*/
    goto LABEL_27; /*0x432477*/
  }
  v4 = nNumberOfBytesToRead; /*0x4322f4*/
  if ( !nNumberOfBytesToRead ) /*0x4322fa*/
  {
LABEL_27:
    v12 = 0; /*0x43247a*/
    goto LABEL_29; /*0x43247f*/
  }
  do /*0x432461*/
  {
    v5 = this->BufferReadSize - this->StreamSize; /*0x43230d*/
    if ( v4 < v5 ) /*0x43230f*/
      v5 = v4; /*0x432311*/
    if ( !HIBYTE(this->BufferOffset) ) /*0x432313*/
    {
      if ( this->TotalBytesWritten >= this->BufferReadSize ) /*0x432323*/
      {
        BufferReadSize = this->BufferReadSize; /*0x432333*/
        this->BufferMaxSize = this->FileID; /*0x432335*/
      }
      else
      {
        BufferReadSize = this->TotalBytesWritten; /*0x432325*/
        this->BufferMaxSize = 0; /*0x432327*/
      }
      if ( this->MixFileIndex ) /*0x432338*/
      {
        v7 = this->FileClass; /*0x432342*/
        FileID = this->FileID; /*0x432346*/
        BYTE1(this->BufferSize) = 0; /*0x432349*/
        (*(void (__thiscall **)(CCFileClass *, int, _DWORD))(*(_DWORD *)&v7 + 40))(this, FileID, 0); /*0x43234d*/
        (*(void (__thiscall **)(CCFileClass *, int, int))(*(_DWORD *)&this->FileClass + 36))( /*0x43235c*/
          this,
          this->FileBaseOffset,
          this->BufferReadSize);
        (*(void (__thiscall **)(CCFileClass *, int, _DWORD))(*(_DWORD *)&this->FileClass + 40))(this, this->FileID, 0); /*0x432369*/
        BYTE1(this->BufferSize) = 1; /*0x43236c*/
      }
      else
      {
        FileClass::Seek(this, this->BufferMaxSize, 0); /*0x43237a*/
        FileClass::Read(this, (char *)this->FileBaseOffset, BufferReadSize); /*0x432386*/
      }
      this->StreamSize = 0; /*0x43238e*/
      this->BufferCursor = -1; /*0x432395*/
      this->TotalBytesRead = -1; /*0x432398*/
      HIBYTE(this->BufferOffset) = 1; /*0x43239b*/
    }
    memcpy(&lpBuffer[v15], (const void *)(this->FileBaseOffset + this->StreamSize), v5); /*0x4323b9*/
    v8 = v5 + this->StreamSize; /*0x4323c7*/
    v15 += v5; /*0x4323c9*/
    v4 -= v5; /*0x4323d7*/
    this->FileID = this->BufferMaxSize + v8; /*0x4323d9*/
    v9 = this->BufferReadSize; /*0x4323dc*/
    this->StreamSize = v8; /*0x4323e1*/
    if ( v8 == v9 ) /*0x4323e4*/
    {
      BufferIO::Flush((BufferIO *)this); /*0x4323e8*/
      v10 = this->FileID; /*0x4323ed*/
      this->StreamSize = 0; /*0x4323f0*/
      this->BufferMaxSize = v10; /*0x4323f9*/
      this->BufferCursor = -1; /*0x4323fc*/
      this->TotalBytesRead = -1; /*0x4323ff*/
      if ( v4 && this->TotalBytesWritten > v10 ) /*0x432407*/
      {
        if ( this->MixFileIndex ) /*0x432409*/
        {
          v11 = this->FileClass; /*0x432410*/
          BYTE1(this->BufferSize) = 0; /*0x432417*/
          (*(void (__thiscall **)(CCFileClass *, int, _DWORD))(*(_DWORD *)&v11 + 40))(this, v10, 0); /*0x43241b*/
          (*(void (__thiscall **)(CCFileClass *, int, int))(*(_DWORD *)&this->FileClass + 36))( /*0x43242a*/
            this,
            this->FileBaseOffset,
            this->BufferReadSize);
          (*(void (__thiscall **)(CCFileClass *, int, _DWORD))(*(_DWORD *)&this->FileClass + 40))(this, this->FileID, 0); /*0x432437*/
          BYTE1(this->BufferSize) = 1; /*0x43243a*/
        }
        else
        {
          FileClass::Seek(this, v10, 0); /*0x432445*/
          FileClass::Read(this, (char *)this->FileBaseOffset, this->BufferReadSize); /*0x432454*/
        }
      }
      else
      {
        HIBYTE(this->BufferOffset) = 0; /*0x43245b*/
      }
    }
  }
  while ( v4 ); /*0x432461*/
  v12 = v15; /*0x432467*/
LABEL_29:
  if ( v16 ) /*0x43249a*/
    (*(void (__thiscall **)(CCFileClass *))(*(_DWORD *)&this->FileClass + 52))(this); /*0x4324a0*/
  return v12; /*0x4324a5*/
}



// ==== 0x004324B0  BufferIOFileClass::SeekInternal  this=BufferIOFileClass  sig=csp ====
int __thiscall BufferIOFileClass::SeekInternal(CCFileClass *this, LONG lDistanceToMove, DWORD dwMoveMethod)
{
  int MixFileIndex; // eax
  LONG v5; // ecx
  int FileID; // eax
  int TotalBytesWritten; // eax
  int BufferReadSize; // edx
  int v9; // eax
  int BufferMaxSize; // ecx
  FileClass v11; // eax
  int v12; // ecx
  int v14; // [esp-8h] [ebp-14h]
  char v15; // [esp+Bh] [ebp-1h]

  if ( !BYTE1(this->BufferSize) ) /*0x4324b7*/
    return FileClass::Seek(this, lDistanceToMove, dwMoveMethod); /*0x43258f*/
  v15 = 0; /*0x4324c4*/
  if ( dwMoveMethod ) /*0x4324ca*/
  {
    if ( dwMoveMethod == 2 ) /*0x4324cf*/
      this->FileID = this->TotalBytesWritten; /*0x4324d4*/
  }
  else
  {
    this->FileID = 0; /*0x4324d9*/
  }
  MixFileIndex = this->MixFileIndex; /*0x4324dc*/
  v5 = lDistanceToMove; /*0x4324df*/
  if ( MixFileIndex && lDistanceToMove >= MixFileIndex ) /*0x4324e9*/
  {
    v5 = lDistanceToMove - MixFileIndex; /*0x4324eb*/
    v15 = 1; /*0x4324ed*/
  }
  FileID = this->FileID; /*0x4324f2*/
  this->FileID = v5 + FileID; /*0x4324f7*/
  if ( v5 + FileID < 0 ) /*0x4324fa*/
    this->FileID = 0; /*0x4324fc*/
  TotalBytesWritten = this->TotalBytesWritten; /*0x4324ff*/
  if ( this->FileID > TotalBytesWritten ) /*0x432507*/
    this->FileID = TotalBytesWritten; /*0x432509*/
  BufferReadSize = this->BufferReadSize; /*0x43250c*/
  if ( TotalBytesWritten > BufferReadSize ) /*0x432511*/
  {
    v9 = this->FileID; /*0x43251b*/
    BufferMaxSize = this->BufferMaxSize; /*0x43251e*/
    if ( v9 < BufferMaxSize || v9 >= BufferMaxSize + BufferReadSize ) /*0x432529*/
    {
      BufferIO::Flush((BufferIO *)this); /*0x432534*/
      if ( this->MixFileIndex ) /*0x432539*/
      {
        v11 = this->FileClass; /*0x432541*/
        v14 = this->FileID; /*0x432544*/
        BYTE1(this->BufferSize) = 0; /*0x432547*/
        (*(void (__thiscall **)(CCFileClass *, int, _DWORD))(*(_DWORD *)&v11 + 40))(this, v14, 0); /*0x43254a*/
        BYTE1(this->BufferSize) = 1; /*0x43254d*/
      }
      else
      {
        FileClass::Seek(this, this->FileID, 0); /*0x43255a*/
      }
      HIBYTE(this->BufferOffset) = 0; /*0x43255f*/
    }
    else
    {
      this->StreamSize = v9 - BufferMaxSize; /*0x43252d*/
    }
  }
  else
  {
    this->StreamSize = this->FileID; /*0x432516*/
  }
  v12 = this->MixFileIndex; /*0x432562*/
  if ( v12 && v15 ) /*0x43256d*/
    return v12 + this->FileID; /*0x432573*/
  else
    return this->FileID; /*0x43257a*/
}



// ==== 0x004325A0  BufferIOFileClass::SetSize  this=BufferIOFileClass  sig=csp ====
int __thiscall BufferIOFileClass::SetSize(BufferIOFileClass *this)
{
  if ( BYTE1(this->BufferOffset) && BYTE1(this->BufferSize) ) /*0x4325a7*/
    return this->TotalBytesWritten; /*0x4325ae*/
  else
    return CCFileClass::GetFileSize((RawFileClass *)this); /*0x4325b2*/
}



// ==== 0x004325C0  BufferIOFileClass::Close  this=BufferIOFileClass  sig=csp ====
char __thiscall CCFileClass::Close(CCFileClass *this)
{
  char result; // al
  FileClass v3; // eax

  if ( !BYTE1(this->BufferSize) ) /*0x4325c3*/
    return FileClass::CloseHandle(this); /*0x432607*/
  BufferIO::Flush((BufferIO *)this); /*0x4325ca*/
  result = BYTE2(this->BufferOffset); /*0x4325cf*/
  if ( result ) /*0x4325d4*/
  {
    if ( this->MixFileIndex ) /*0x4325d6*/
    {
      v3 = this->FileClass; /*0x4325dd*/
      BYTE1(this->BufferSize) = 0; /*0x4325e1*/
      result = (*(int (__thiscall **)(CCFileClass *))(*(_DWORD *)&v3 + 52))(this); /*0x4325e5*/
      BYTE1(this->BufferSize) = 1; /*0x4325e8*/
      BYTE2(this->BufferOffset) = 0; /*0x4325ec*/
      BYTE1(this->BufferOffset) = 0; /*0x4325f0*/
      return result; /*0x4325f5*/
    }
    result = FileClass::CloseHandle(this); /*0x4325f8*/
    BYTE2(this->BufferOffset) = 0; /*0x4325fd*/
  }
  BYTE1(this->BufferOffset) = 0; /*0x432601*/
  return result; /*0x4325f4*/
}



// ==== 0x00432610  BufferIOFileClass::QueryInterface  this=BufferIOFileClass  sig=csp ====
_DWORD *__thiscall BufferIOFileClass::QueryInterface(BufferIOFileClass *this, char a2)
{
  void *FileBaseOffset; // eax

  FileBaseOffset = (void *)this->FileBaseOffset; /*0x432616*/
  this->FileClass = (FileClass)&BufferIOFileClass::`vftable'; /*0x432619*/
  if ( FileBaseOffset ) /*0x432621*/
  {
    if ( LOBYTE(this->BufferOffset) ) /*0x432623*/
    {
      __3_YAXPAX_Z(FileBaseOffset); /*0x432629*/
      LOBYTE(this->BufferOffset) = 0; /*0x432631*/
    }
    this->FileBaseOffset = 0; /*0x432634*/
  }
  this->BufferReadSize = 0; /*0x432639*/
  BYTE1(this->BufferOffset) = 0; /*0x43263c*/
  HIBYTE(this->BufferOffset) = 0; /*0x43263f*/
  LOBYTE(this->BufferSize) = 0; /*0x432642*/
  BYTE1(this->BufferSize) = 0; /*0x432645*/
  RawFileClass::Dtor(this); /*0x432648*/
  if ( (a2 & 1) != 0 ) /*0x432652*/
    __3_YAXPAX_Z(this); /*0x432655*/
  return &this->FileClass; /*0x43265f*/
}



// ==== 0x00432670  sub_432670  this=-  sig=ida-proto ====
int sub_432670()
{
  dword_89C498 = 0; /*0x432672*/
  dword_89C49C = 0; /*0x432677*/
  dword_89C4A0 = 0; /*0x43267c*/
  dword_89C4A4 = 0; /*0x432681*/
  return 0; /*0x432686*/
}



// ==== 0x00432690  BinkMovie::Close  this=BinkMovie  sig=csp ====
_DWORD *__thiscall BinkMovie::Close(BinkMovie *this, char *FullPath)
{
  this->__pad_0[0] = 0; /*0x432695*/
  this->BinkMovie_field_0x4[0] = 0; /*0x432697*/
  this->BinkMovie_field_0xC = 0; /*0x43269a*/
  this->BinkMovie_field_0x20 = 0; /*0x43269d*/
  *((_BYTE *)this + 45) = 0; /*0x4326a0*/
  this->q00A = -1; /*0x4326a8*/
  *((_BYTE *)this + 44) = 1; /*0x4326af*/
  BinkMovie::InitFromFile((int)this, (LPCSTR *)FullPath); /*0x4326b3*/
  return this->__pad_0; /*0x4326ba*/
}



// ==== 0x004326C0  BinkMovie::Open  this=BinkMovie  sig=csp ====
_DWORD *__thiscall BinkMovie::Open(BinkMovie *this, char *FullPath, int a3)
{
  this->BinkMovie_field_0xC = (void *)a3; /*0x4326ce*/
  this->__pad_0[0] = 0; /*0x4326d3*/
  this->BinkMovie_field_0x4[0] = 0; /*0x4326d5*/
  this->BinkMovie_field_0x20 = 0; /*0x4326d8*/
  this->q00A = -1; /*0x4326db*/
  *((_BYTE *)this + 44) = 1; /*0x4326e2*/
  *((_BYTE *)this + 45) = 0; /*0x4326e6*/
  BinkMovie::InitFromFile((int)this, (LPCSTR *)FullPath); /*0x4326e9*/
  return this->__pad_0; /*0x4326f0*/
}



// ==== 0x00432700  BinkMovie::Stop  this=BinkMovie  sig=csp ====
int __thiscall BinkMovie::Stop(BinkMovie *this)
{
  void *BinkMovie_field_0x20; // edi
  int result; // eax

  BinkMovie_field_0x20 = (void *)this->BinkMovie_field_0x20; /*0x432704*/
  if ( BinkMovie_field_0x20 ) /*0x432709*/
  {
    BinkMovie::FreeSurfaceTracker((BinkMovie *)this->BinkMovie_field_0x20); /*0x43270d*/
    __3_YAXPAX_Z(BinkMovie_field_0x20); /*0x432713*/
    this->BinkMovie_field_0x20 = 0; /*0x43271b*/
  }
  if ( this->BinkMovie_field_0x4[0] ) /*0x432722*/
  {
    BinkClose(this->BinkMovie_field_0x4[0]); /*0x43272a*/
    this->BinkMovie_field_0x4[0] = 0; /*0x432730*/
  }
  result = this->q00A; /*0x432737*/
  if ( result != -1 ) /*0x43273d*/
  {
    result = CloseHandle(*((HANDLE *)this + 10)); /*0x432740*/
    this->q00A = -1; /*0x432746*/
  }
  return result; /*0x43274d*/
}



// ==== 0x00432750  BinkMovie::InitFromFile  this=BinkMovie  sig=csp ====
char __thiscall sub_432750(int this, LPCSTR *FullPath)
{
  int v3; // ebp
  void *v4; // edi
  int v5; // eax
  char *v6; // edi
  int v7; // eax
  bool v8; // bl
  int v9; // eax
  HANDLE FileA; // eax
  const char *Error; // eax
  int v13; // eax
  _DWORD *v14; // eax
  int *v15; // ecx
  LONG v16; // edi
  int v17; // ebx
  LONG v18; // edx
  int v19; // ecx
  int v20; // ecx
  int v21; // eax
  LPCSTR *v22; // ecx
  int v23; // edx
  LPCSTR v24; // eax
  LONG bottom; // edi
  LONG left; // eax
  LONG v27; // edx
  LONG lDistanceToMove[5]; // [esp+10h] [ebp-68h] BYREF
  struct tagRECT Rect; // [esp+24h] [ebp-54h] BYREF
  LONG v30; // [esp+40h] [ebp-38h]
  _BYTE v31[16]; // [esp+44h] [ebp-34h] BYREF
  _BYTE v32[36]; // [esp+54h] [ebp-24h] BYREF

  v3 = 0; /*0x432759*/
  v4 = *(void **)(this + 32); /*0x43275b*/
  if ( v4 ) /*0x432760*/
  {
    BinkMovie::FreeSurfaceTracker(*(_DWORD *)(this + 32)); /*0x432764*/
    __3_YAXPAX_Z(v4); /*0x43276a*/
    *(_DWORD *)(this + 32) = 0; /*0x432772*/
  }
  if ( *(_DWORD *)(this + 4) ) /*0x432775*/
  {
    BinkClose(*(_DWORD *)(this + 4)); /*0x43277d*/
    *(_DWORD *)(this + 4) = 0; /*0x432783*/
  }
  if ( *(_DWORD *)(this + 40) != -1 ) /*0x43278c*/
  {
    CloseHandle(*(HANDLE *)(this + 40)); /*0x43278f*/
    *(_DWORD *)(this + 40) = -1; /*0x432795*/
  }
  *(_DWORD *)(this + 48) = 0; /*0x43279c*/
  if ( Audio::IsSoundEnabled() ) /*0x43279f*/
  {
    v5 = Audio::GetDirectSound(); /*0x4327a8*/
    BinkSetSoundSystem(BinkOpenDirectSound, v5); /*0x4327b4*/
  }
  v6 = (char *)FullPath; /*0x4327ba*/
  v7 = RawFileClass::Construct(FullPath); /*0x4327c3*/
  v8 = (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 20))(v7, 0) == 1; /*0x4327d6*/
  RawFileClass::Dtor(v32); /*0x4327d9*/
  if ( v8 ) /*0x4327e0*/
  {
    v9 = BinkOpen(v6, 0); /*0x4327e4*/
LABEL_14:
    *(_DWORD *)(this + 4) = v9; /*0x43284f*/
    goto LABEL_15; /*0x43284f*/
  }
  lDistanceToMove[0] = 0; /*0x4327f8*/
  FullPath = 0; /*0x4327fc*/
  if ( (unsigned __int8)LookupFileInfoCache(&FullPath, lDistanceToMove, 0) == 1 ) /*0x43280a*/
  {
    FileA = CreateFileA(FullPath[3], 0x80000000, 3u, 0, 3u, 0x8000080u, 0); /*0x432824*/
    *(_DWORD *)(this + 40) = FileA; /*0x43282d*/
    if ( FileA != (HANDLE)-1 ) /*0x432830*/
    {
      SetFilePointer(FileA, lDistanceToMove[0], 0, 0); /*0x43283a*/
      v9 = BinkOpen(*(_DWORD *)(this + 40), &ToggleClass::`RTTI Class Hierarchy Descriptor'); /*0x432849*/
      goto LABEL_14; /*0x432849*/
    }
  }
LABEL_15:
  if ( *(_DWORD *)(this + 4) )
  {
    dword_89C490 = flt_A8EB9C; /*0x43287c*/
    v13 = Math::RoundToInt(*(float *)&flt_A8EB9C * 32768.0); /*0x43288d*/
    BinkSetVolume(*(_DWORD *)(this + 4), v13); /*0x432897*/
    *(_DWORD *)(this + 36) = 0x3C /*0x4328b5*/
                           / (unsigned int)(*(_DWORD *)(*(_DWORD *)(this + 4) + 20)
                                          / *(_DWORD *)(*(_DWORD *)(this + 4) + 24));
    v14 = (_DWORD *)BinkMovie::CreateSurfaceTracker(v6); /*0x4328b8*/
    v15 = *(int **)(this + 4); /*0x4328bd*/
    *(_DWORD *)(this + 32) = v14; /*0x4328c0*/
    v16 = 0; /*0x4328c3*/
    v17 = *v15; /*0x4328c5*/
    v18 = v15[1]; /*0x4328c7*/
    v19 = *(_DWORD *)(this + 12); /*0x4328ca*/
    v30 = v18; /*0x4328cd*/
    if ( !v19 ) /*0x4328d3*/
    {
      if ( v14 && *v14 ) /*0x4328d9*/
      {
        v20 = g_DSurface_Hidden; /*0x4328e3*/
        *(_DWORD *)(this + 12) = g_DSurface_Hidden; /*0x4328e5*/
        v16 = ((*(int (__thiscall **)(int))(*(_DWORD *)v20 + 124))(v20) - v17) / 2; /*0x4328f9*/
        v21 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 128))(*(_DWORD *)(this + 12)); /*0x4328fb*/
      }
      else
      {
        *(_DWORD *)(this + 12) = g_DSurface_Primary; /*0x43290d*/
        GetClientRect(g_hWnd, &Rect); /*0x432917*/
        v16 = (Rect.right - Rect.left - v17) / 2; /*0x432936*/
        v21 = Rect.bottom - Rect.top; /*0x432938*/
      }
      v3 = (v21 - v30) / 2; /*0x432943*/
    }
    FullPath = (LPCSTR *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 12) + 120))( /*0x43295e*/
                           *(_DWORD *)(this + 12),
                           v31);
    Rect::Set(0, 0, 0, 0); /*0x432965*/
    v22 = (LPCSTR *)v3; /*0x43296e*/
    Rect.bottom = v30; /*0x432974*/
    Rect.left = v16; /*0x432978*/
    v23 = (int)FullPath[2]; /*0x43297c*/
    if ( v23 <= 0 ) /*0x432981*/
      goto LABEL_40; /*0x432981*/
    lDistanceToMove[0] = (LONG)FullPath[3]; /*0x43298c*/
    if ( lDistanceToMove[0] <= 0 || v17 <= 0 || v30 <= 0 ) /*0x4329a0*/
      goto LABEL_40; /*0x4329a0*/
    v24 = *FullPath; /*0x4329a2*/
    if ( v16 < (int)*FullPath ) /*0x4329a7*/
    {
      Rect.left = (LONG)*FullPath; /*0x4329ab*/
      v17 = v16 + v17 - (_DWORD)v24; /*0x4329af*/
    }
    if ( v17 < 1 ) /*0x4329b4*/
      goto LABEL_40; /*0x4329b4*/
    FullPath = (LPCSTR *)FullPath[1]; /*0x4329bb*/
    if ( v3 < (int)FullPath ) /*0x4329bf*/
    {
      v22 = FullPath; /*0x4329c9*/
      Rect.bottom += v3 - (_DWORD)FullPath; /*0x4329cb*/
    }
    if ( Rect.bottom < 1 ) /*0x4329d4*/
      goto LABEL_40; /*0x4329d4*/
    if ( v17 + Rect.left > (int)&v24[v23] ) /*0x4329e1*/
      v17 = (int)&v24[v23 - Rect.left]; /*0x4329e9*/
    if ( v17 < 1 ) /*0x4329ee*/
      goto LABEL_40; /*0x4329ee*/
    bottom = Rect.bottom; /*0x4329f8*/
    if ( (int)v22 + Rect.bottom > (int)FullPath + lDistanceToMove[0] ) /*0x432a03*/
      bottom = (char *)FullPath + lDistanceToMove[0] - (char *)v22; /*0x432a07*/
    if ( bottom < 1 ) /*0x432a0c*/
    {
LABEL_40:
      left = lDistanceToMove[1]; /*0x432a16*/
      v22 = (LPCSTR *)lDistanceToMove[2]; /*0x432a1a*/
      v27 = lDistanceToMove[3]; /*0x432a1e*/
      bottom = lDistanceToMove[4]; /*0x432a22*/
    }
    else
    {
      left = Rect.left; /*0x432a0e*/
      v27 = v17; /*0x432a12*/
    }
    *(_DWORD *)(this + 16) = left; /*0x432a29*/
    *(_DWORD *)(this + 20) = v22; /*0x432a2c*/
    *(_DWORD *)(this + 24) = v27; /*0x432a2f*/
    *(_DWORD *)(this + 28) = bottom; /*0x432a32*/
    *(_DWORD *)(this + 8) = BinkDDSurfaceType(*(_DWORD *)(g_DSurface_Primary + 28)); /*0x432a44*/
    return 1; /*0x432a4a*/
  }
  else
  {
    Error = (const char *)BinkGetError(); /*0x432857*/
    Debug::Log("Bink Error: %s\n", Error);
    return 0; /*0x43286b*/
  }
}



// ==== 0x00432AB0  BinkMovieHandle::RenderFrameClipped  this=BinkMovieHandle  sig=csp ====
int __thiscall sub_432AB0(int this, int a2, int a3)
{
  int *v3; // eax
  int v4; // ebp
  int v5; // esi
  int *v6; // edi
  int result; // eax
  int v8; // ebx
  int v9; // ecx
  int v10; // ebp
  int v11; // edi
  int v12; // ebx
  int v13; // edx
  int v14; // esi
  int v16; // [esp+14h] [ebp-20h]
  int v18; // [esp+20h] [ebp-14h]
  _BYTE v19[16]; // [esp+24h] [ebp-10h] BYREF
  int v20; // [esp+3Ch] [ebp+8h]

  v3 = *(int **)(this + 4); /*0x432ab3*/
  v4 = v3[1]; /*0x432ac3*/
  v5 = *v3; /*0x432ac7*/
  v6 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 12) + 120))(*(_DWORD *)(this + 12), v19); /*0x432ad8*/
  result = 0; /*0x432ade*/
  v8 = v6[2]; /*0x432ae0*/
  v9 = 0; /*0x432ae3*/
  v16 = a2; /*0x432ae7*/
  v18 = v4; /*0x432aef*/
  if ( v8 <= 0 ) /*0x432af3*/
    goto LABEL_18; /*0x432af3*/
  v20 = v6[3]; /*0x432afe*/
  if ( v20 <= 0 || v5 <= 0 || v4 <= 0 ) /*0x432b12*/
    goto LABEL_18; /*0x432b12*/
  v10 = *v6; /*0x432b18*/
  if ( a2 < *v6 ) /*0x432b20*/
  {
    v16 = *v6; /*0x432b24*/
    v5 = a2 + v5 - v10; /*0x432b28*/
  }
  if ( v5 < 1 ) /*0x432b33*/
    goto LABEL_18; /*0x432b33*/
  v11 = v6[1]; /*0x432b35*/
  if ( a3 < v11 ) /*0x432b42*/
  {
    v18 += a3 - v11; /*0x432b50*/
    a3 = v11; /*0x432b54*/
  }
  if ( v18 < 1 ) /*0x432b5d*/
    goto LABEL_18; /*0x432b5d*/
  if ( v5 + v16 > v8 + v10 ) /*0x432b6a*/
    v5 = v8 + v10 - v16; /*0x432b72*/
  if ( v5 < 1 ) /*0x432b77*/
    goto LABEL_18; /*0x432b77*/
  v12 = v18; /*0x432b81*/
  if ( v18 + a3 > v20 + v11 ) /*0x432b90*/
    v12 = v20 + v11 - a3; /*0x432b94*/
  if ( v12 < 1 ) /*0x432b99*/
  {
LABEL_18:
    v13 = 0; /*0x432ba7*/
    v14 = 0; /*0x432ba9*/
  }
  else
  {
    result = v16; /*0x432b9b*/
    v9 = a3; /*0x432b9f*/
    v13 = v5; /*0x432ba1*/
    v14 = v12; /*0x432ba3*/
  }
  *(_DWORD *)(this + 16) = result; /*0x432bb2*/
  *(_DWORD *)(this + 20) = v9; /*0x432bb4*/
  *(_DWORD *)(this + 24) = v13; /*0x432bb7*/
  *(_DWORD *)(this + 28) = v14; /*0x432bba*/
  return result; /*0x432bbd*/
}



// ==== 0x00432BD0  BinkMovieHandle::Check  this=BinkMovieHandle  sig=csp ====
int __thiscall BinkMovieHandle::Check(BinkMovieHandle *this, int a2)
{
  int result; // eax

  result = BinkGoto(this->tempPath, a2, 1); /*0x432bde*/
  this->memoryBuffer = 0; /*0x432be4*/
  return result; /*0x432beb*/
}



// ==== 0x00432C10  WeaponTypeClass::COMStub_432C10  this=WeaponTypeClass  sig=csp ====
int __thiscall COMStub_432C10(WeaponTypeClass *this, int a2)
{
  AbstractClass *NeedsSaveOrLink; // ecx
  int result; // eax

  NeedsSaveOrLink = (AbstractClass *)this->?; /*0x432c10*/
  if ( NeedsSaveOrLink ) /*0x432c15*/
    return AbstractClass::getTotalValue(NeedsSaveOrLink, a2); /*0x432c1c*/
  return result; /*0x432c21*/
}



// ==== 0x00432C30  BinkMovie::Pause  this=BinkMovie  sig=csp ====
int __thiscall BinkMovie::Pause(BinkMovie *this, unsigned __int8 a2)
{
  return BinkPause(this->BinkMovie_field_0x4[0], a2); /*0x432c44*/
}



// ==== 0x00432C50  BinkMovieHandle::IsAtEnd  this=BinkMovieHandle  sig=csp ====
int __thiscall BinkMovie::IsAtEnd(BinkMovieHandle *this)
{
  _DWORD *tempPath; // eax
  void *v2; // edx

  tempPath = this->tempPath; /*0x432c50*/
  v2 = (void *)tempPath[3]; /*0x432c54*/
  return (unsigned int)v2 >= tempPath[2] || v2 < this->memoryBuffer; /*0x432c5c*/
}



// ==== 0x00432C70  BinkMovie::Play  this=BinkMovie  sig=csp ====
int __thiscall BinkMovie::Play(BinkMovie *this)
{
  void (__stdcall *v3)(HWND, LPPOINT); // ebp
  int BinkMovie_field_0x4; // eax
  unsigned int v5; // ecx
  DSurface *BinkMovie_field_0xC; // eax
  int BinkMovie_field_0x10; // eax
  int BinkMovie_field_0x14; // ecx
  int v9; // edx
  _DWORD v10[4]; // [esp+4h] [ebp-4Ch] BYREF
  struct tagRECT Rect; // [esp+14h] [ebp-3Ch] BYREF
  struct tagRECT v12; // [esp+24h] [ebp-2Ch] BYREF
  MSG Msg; // [esp+34h] [ebp-1Ch] BYREF

  if ( this->BinkMovie_field_0x4 ) /*0x432c76*/
  {
    Timer::PumpMessages((Timer *)dword_87F770); /*0x432c9f*/
    v3 = (void (__stdcall *)(HWND, LPPOINT))ClientToScreen; /*0x432caa*/
    *((_BYTE *)this + 44) = 1; /*0x432cb0*/
    *((_BYTE *)this + 45) = 0; /*0x432cb4*/
    while ( 1 ) /*0x432cb8*/
    {
      BinkMovie_field_0x4 = this->BinkMovie_field_0x4; /*0x432cb8*/
      v5 = *(_DWORD *)(BinkMovie_field_0x4 + 12); /*0x432cbb*/
      if ( v5 >= *(_DWORD *)(BinkMovie_field_0x4 + 8) || v5 < this->q00C ) /*0x432ccc*/
        break; /*0x432ccc*/
      ++dword_AA0430; /*0x432cdd*/
      if ( GameLoopMessagePump(&Msg, 0, 0, 0, 0) ) /*0x432ceb*/
      {
        if ( !IsMessageDialog(&Msg, 0, 0, 0) ) /*0x432d05*/
          return Timer::PumpMessages((Timer *)dword_87F770); /*0x432d05*/
        TranslateMessage(&Msg); /*0x432d10*/
        DispatchMessageA(&Msg); /*0x432d1b*/
      }
      else
      {
        if ( !*((_BYTE *)this + 44) ) /*0x432d23*/
          Sleep(0x21u); /*0x432d2c*/
        BinkMovie_field_0xC = (DSurface *)this->BinkMovie_field_0xC; /*0x432d32*/
        if ( BinkMovie_field_0xC == g_DSurface_Primary ) /*0x432d3d*/
        {
          GetClientRect(g_hWnd, &Rect); /*0x432d4a*/
          v3(g_hWnd, (LPPOINT)&Rect); /*0x432d58*/
          BinkMovie::RenderLoop( /*0x432d74*/
            (bool *)this->__pad_0,
            this->BinkMovie_field_0xC,
            Rect.left + this->BinkMovie_field_0x10,
            Rect.top + this->BinkMovie_field_0x14);
        }
        else if ( (unsigned __int8)BinkMovie::RenderLoop( /*0x432d89*/
                                     (bool *)this->__pad_0,
                                     (int)BinkMovie_field_0xC,
                                     this->BinkMovie_field_0x10,
                                     this->BinkMovie_field_0x14) )
        {
          GetClientRect(g_hWnd, &v12); /*0x432d9e*/
          v3(g_hWnd, (LPPOINT)&v12); /*0x432dab*/
          BinkMovie_field_0x10 = this->BinkMovie_field_0x10; /*0x432db4*/
          BinkMovie_field_0x14 = this->BinkMovie_field_0x14; /*0x432db6*/
          v10[2] = *(_DWORD *)this->__pad_18; /*0x432dbc*/
          v10[3] = *(_DWORD *)&this->__pad_18[4]; /*0x432dc9*/
          v9 = this->BinkMovie_field_0xC; /*0x432dd3*/
          v10[1] = v12.top + BinkMovie_field_0x14; /*0x432dd6*/
          v10[0] = v12.left + BinkMovie_field_0x10; /*0x432de1*/
          (*(void (__thiscall **)(DSurface *, _DWORD *, int, int *, _DWORD, int))(g_DSurface_Primary->DSurface_field_0x0 /*0x432dec*/
                                                                                + 8))(
            g_DSurface_Primary,
            v10,
            v9,
            &this->BinkMovie_field_0x10,
            0,
            1);
          v3 = (void (__stdcall *)(HWND, LPPOINT))ClientToScreen; /*0x432def*/
        }
        if ( EventQueue::Process((EventQueue *)dword_87F770) /*0x432e21*/
          && !this->__pad_0[0]
          && EventQueue::Read((EventQueue *)dword_87F770) == 2075 )
        {
          return Timer::PumpMessages((Timer *)dword_87F770); /*0x432e21*/
        }
      }
    }
    return Timer::PumpMessages((Timer *)dword_87F770); /*0x432e27*/
  }
  else
  {
    BinkGetError(); /*0x432c7d*/
    return Debug::Log(); /*0x432c89*/
  }
}



// ==== 0x00432E40  BinkMovie::RenderLoop  this=BinkMovie  sig=csp ====
int __thiscall BinkMovie::RenderLoop(bool *this, int a2, int a3, int a4)
{
  int v5; // eax
  char v6; // al
  int v7; // edx
  int v8; // eax
  DSurface *v9; // eax
  int result; // eax
  BinkMovie *v12; // ecx
  char v13; // bl
  int v14; // ebp
  int v15; // eax
  int v16; // ecx
  int v17; // [esp-Ch] [ebp-24h]
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF
  int v19; // [esp+1Ch] [ebp+4h]

  if ( *(float *)&dword_89C490 != flt_A8EB9C ) /*0x432e58*/
  {
    dword_89C490 = LODWORD(flt_A8EB9C); /*0x432e5f*/
    LOWORD(v5) = Math::RoundToInt(flt_A8EB9C * 32768.0); /*0x432e70*/
    BinkSetVolume(this->u32_4, v5); /*0x432e7a*/
  }
  v6 = *(this + 44); /*0x432e87*/
  if ( byte_A8ED80 ) /*0x432e8a*/
  {
    if ( !v6 ) /*0x432eb8*/
    {
      Debug::Log(); /*0x432ebf*/
      v8 = this->u32_4; /*0x432ec4*/
      *(this + 44) = 1; /*0x432eca*/
      BinkPause(v8, 0); /*0x432ed1*/
      v9 = (DSurface *)this->q00C; /*0x432ed7*/
      if ( v9 == g_DSurface_Primary ) /*0x432ee2*/
      {
        GetClientRect(g_hWnd, &Rect); /*0x432ef0*/
        ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x432f02*/
        BinkMovie::RenderSingleFrame( /*0x432f22*/
          (BinkMovie *)this,
          this->q00C,
          Rect.left + this->u32_4,
          Rect.top + this->u32_14,
          1);
      }
      else
      {
        BinkMovie::RenderSingleFrame((BinkMovie *)this, (int)v9, this->u32_4, this->u32_14, 1); /*0x432f31*/
      }
    }
  }
  else if ( v6 == 1 ) /*0x432e8e*/
  {
    Debug::Log(); /*0x432e99*/
    v7 = this->u32_4; /*0x432e9e*/
    *(this + 44) = 0; /*0x432ea4*/
    BinkPause(v7, 1); /*0x432eab*/
  }
  if ( *(this + 45) || (result = BinkWait(this->u32_4), LOBYTE(result) = result == 0, (_BYTE)result) ) /*0x432f4e*/
  {
    do /*0x43300d*/
    {
      BinkDoFrame(this->u32_4); /*0x432f62*/
      v12 = (BinkMovie *)this->q008; /*0x432f68*/
      v13 = 0; /*0x432f6b*/
      *(this + 45) = 0; /*0x432f6f*/
      if ( v12 ) /*0x432f73*/
      {
        v13 = BinkMovie::CheckKeyframeTransition(v12, *((_DWORD *)this + 9) * *(_DWORD *)(this->u32_4 + 12)); /*0x432f85*/
        if ( v13 ) /*0x432f89*/
          BinkMovie::AdjustSurfaceFormat((BinkMovie *)this, a2); /*0x432f8e*/
      }
      v19 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x432fa0*/
      if ( v19 ) /*0x432fa4*/
      {
        v14 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2); /*0x432fb1*/
        v15 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 128))(a2); /*0x432fb3*/
        v16 = this->q008; /*0x432fb9*/
        if ( v13 ) /*0x432fbe*/
          v16 |= 0x80000000; /*0x432fc0*/
        BinkCopyToBuffer(this->u32_4, v19, v14, v15, a3, a4, v16); /*0x432fdc*/
        (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x432fe6*/
      }
      BinkMovie::BlitToTarget((BinkMovie *)this, a2); /*0x432fec*/
      v17 = this->u32_4; /*0x432ff4*/
      this->q00C = *(_DWORD *)(v17 + 12); /*0x432ff8*/
      BinkNextFrame(v17); /*0x432ffb*/
      result = BinkWait(this->u32_4); /*0x433005*/
    }
    while ( !result ); /*0x43300d*/
    LOBYTE(result) = 1; /*0x433016*/
  }
  return result; /*0x432f50*/
}



// ==== 0x00433040  BinkMovieHandle::RenderFrameToSurface  this=BinkMovieHandle  sig=csp ====
bool __thiscall BinkMovie::RenderFrameToSurface(BinkMovieHandle *this)
{
  return BinkMovie::RenderLoop((bool *)this->MovieHandle, this->width, this->height, this->currentFrame); /*0x433051*/
}



// ==== 0x00433060  BinkMovieHandle::CopyFrameToSurface  this=BinkMovieHandle  sig=csp ====
_DWORD *__thiscall BinkMovieHandle::CopyFrameToSurface(BinkMovieHandle *this)
{
  DSurface *width; // edi
  int v3; // ebx
  int v4; // ebp
  int v5; // eax
  int currentFrame; // ebp
  int v7; // ebx
  int v8; // eax
  int v10; // [esp+10h] [ebp-18h]
  int v11; // [esp+10h] [ebp-18h]
  int v12; // [esp+14h] [ebp-14h]
  int height; // [esp+14h] [ebp-14h]
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  width = (DSurface *)this->width; /*0x43306e*/
  if ( width == g_DSurface_Primary ) /*0x433073*/
  {
    GetClientRect(g_hWnd, &Rect); /*0x433085*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x433096*/
    v3 = Rect.left + this->height; /*0x4330a7*/
    v4 = Rect.top + this->currentFrame; /*0x4330ae*/
    width = (DSurface *)this->width; /*0x4330b0*/
    BinkMovie::AdjustSurfaceFormat((BinkMovie *)this, (int)width); /*0x4330b4*/
    v12 = (*((int (__thiscall **)(DSurface *, _DWORD, _DWORD))width->DSurface_field_0x0 + 23))(width, 0, 0); /*0x4330c8*/
    if ( v12 ) /*0x4330cc*/
    {
      v10 = (*((int (__thiscall **)(DSurface *))width->DSurface_field_0x0 + 29))(width); /*0x4330dd*/
      v5 = (*((int (__thiscall **)(DSurface *))width->DSurface_field_0x0 + 32))(width); /*0x4330e1*/
      BinkCopyToBuffer(this->tempPath, v12, v10, v5, v3, v4, (int)this->renderTarget | 0x80000000); /*0x4330fe*/
LABEL_6:
      (*((void (__thiscall **)(DSurface *))width->DSurface_field_0x0 + 24))(width); /*0x43315b*/
    }
  }
  else
  {
    currentFrame = this->currentFrame; /*0x433103*/
    height = this->height; /*0x433109*/
    BinkMovie::AdjustSurfaceFormat((BinkMovie *)this, this->width); /*0x43310d*/
    v7 = (*((int (__thiscall **)(DSurface *, _DWORD, _DWORD))width->DSurface_field_0x0 + 23))(width, 0, 0); /*0x43311f*/
    if ( v7 ) /*0x433123*/
    {
      v11 = (*((int (__thiscall **)(DSurface *))width->DSurface_field_0x0 + 29))(width); /*0x433130*/
      v8 = (*((int (__thiscall **)(DSurface *))width->DSurface_field_0x0 + 32))(width); /*0x433134*/
      BinkCopyToBuffer(this->tempPath, v7, v11, v8, height, currentFrame, (int)this->renderTarget | 0x80000000); /*0x433155*/
      goto LABEL_6; /*0x433155*/
    }
  }
  return BinkMovie::BlitToTarget((BinkMovie *)this, (int)width); /*0x43316a*/
}



// ==== 0x00433180  BinkMovieClass::SetPosition  this=BinkMovieClass  sig=csp ====
_DWORD *__thiscall BinkMovieClass::SetPosition(BinkMovieClass *this, int a2, int a3, int a4)
{
  int v5; // ebx
  int v6; // ebp
  int v7; // eax

  BinkMovie::AdjustSurfaceFormat((BinkMovie *)this, a2); /*0x43318a*/
  v5 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x43319c*/
  if ( v5 ) /*0x4331a0*/
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2); /*0x4331ae*/
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 128))(a2); /*0x4331b0*/
    BinkCopyToBuffer(this->BinkMovieClass_field_0x04, v5, v6, v7, a3, a4, this->BinkMovieClass_field_0x08 | 0x80000000); /*0x4331d1*/
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x4331db*/
  }
  return BinkMovie::BlitToTarget((BinkMovie *)this, a2); /*0x4331e7*/
}



// ==== 0x004331F0  BinkMovie::RenderSingleFrame  this=BinkMovie  sig=csp ====
int __thiscall BinkMovie::RenderSingleFrame(BinkMovie *this, int a2, int a3, int a4, char a5)
{
  int v6; // ebx
  int v7; // ebp
  int v8; // eax
  unsigned int BinkMovie_field_0x8; // ecx

  if ( a5 ) /*0x4331ff*/
    BinkMovie::AdjustSurfaceFormat(this, a2); /*0x433202*/
  v6 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x433214*/
  if ( v6 ) /*0x433218*/
  {
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2); /*0x433226*/
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 128))(a2); /*0x433228*/
    BinkMovie_field_0x8 = (unsigned int)this->BinkMovie_field_0x8; /*0x433232*/
    if ( a5 ) /*0x433237*/
      BinkMovie_field_0x8 |= 0x80000000; /*0x433239*/
    BinkCopyToBuffer(this->BinkMovie_field_0x4[0], v6, v7, v8, a3, a4, BinkMovie_field_0x8); /*0x433251*/
    (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x43325b*/
  }
  return (int)BinkMovie::BlitToTarget(this, a2); /*0x433267*/
}



// ==== 0x00433270  BinkMovie::BlitToTarget  this=BinkMovie  sig=csp ====
_DWORD *__thiscall BinkMovie::BlitToTarget(BinkMovie *this, int a2)
{
  _DWORD *result; // eax
  int *v4; // ebp
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  int v11; // ebx
  int v12; // eax
  int v13; // [esp+10h] [ebp-28h]
  int v14; // [esp+14h] [ebp-24h]
  _DWORD v15[4]; // [esp+18h] [ebp-20h] BYREF
  _BYTE v16[16]; // [esp+28h] [ebp-10h] BYREF

  result = (_DWORD *)this->BinkMovie_field_0x20; /*0x433277*/
  if ( result ) /*0x43327c*/
  {
    if ( *result ) /*0x433282*/
    {
      v4 = result + 5; /*0x43328e*/
      if ( (int)result[7] > 0 && (int)result[8] > 0 ) /*0x43329e*/
      {
        v5 = result[4]; /*0x4332a6*/
        v6 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 120))(v5, v16); /*0x4332b2*/
        v13 = *(_DWORD *)(v6 + 8); /*0x4332cb*/
        v7 = *v4; /*0x4332d4*/
        v14 = *(_DWORD *)(v6 + 12); /*0x4332d6*/
        v8 = v4[1]; /*0x4332da*/
        v15[2] = v4[2]; /*0x4332e0*/
        v9 = *(_DWORD *)this->__pad_18; /*0x4332e4*/
        v15[3] = v4[3]; /*0x4332ea*/
        v10 = (v9 - v13) / 2 + v7; /*0x4332fd*/
        v11 = *(_DWORD *)&this->__pad_18[4] - v14 + v8; /*0x433309*/
        v12 = this->BinkMovie_field_0x14[0]; /*0x43330b*/
        v15[0] = this->BinkMovie_field_0x10[0] + v10; /*0x43330e*/
        v15[1] = v12 + v11; /*0x43331c*/
        return (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int, int *, int, int))(*(_DWORD *)a2 + 8))( /*0x433323*/
                           a2,
                           v15,
                           v5,
                           v4,
                           1,
                           1);
      }
    }
  }
  return result; /*0x433328*/
}



// ==== 0x00433330  BinkMovie::AdjustSurfaceFormat  this=BinkMovie  sig=csp ====
int __thiscall BinkMovie::AdjustSurfaceFormat(BinkMovie *this, int a2)
{
  int result; // eax
  int v4; // edx
  int *v5; // eax
  int v6; // edi
  __int64 v7; // rax
  int v8; // ecx
  int v9; // [esp+4h] [ebp-30h] BYREF
  int v10; // [esp+8h] [ebp-2Ch]
  int v11; // [esp+Ch] [ebp-28h]
  int v12; // [esp+10h] [ebp-24h]
  int v13; // [esp+14h] [ebp-20h]
  int v14; // [esp+18h] [ebp-1Ch]
  _BYTE v15[16]; // [esp+24h] [ebp-10h] BYREF

  result = this->BinkMovie_field_0x20; /*0x433336*/
  if ( result ) /*0x43333b*/
  {
    if ( *(_DWORD *)result ) /*0x433341*/
    {
      v9 = *(_DWORD *)(result + 36); /*0x433351*/
      v10 = *(_DWORD *)(result + 40); /*0x433358*/
      v11 = *(_DWORD *)(result + 44); /*0x43335f*/
      v4 = *(_DWORD *)(result + 48); /*0x433363*/
      v12 = v4; /*0x433368*/
      if ( v11 > 0 && v4 > 0 ) /*0x433370*/
      {
        v5 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(result + 16) + 120))( /*0x43337d*/
                      *(_DWORD *)(result + 16),
                      v15);
        v13 = *v5; /*0x433384*/
        v14 = v5[1]; /*0x43338b*/
        v6 = v5[3]; /*0x433392*/
        v7 = *(_DWORD *)this->__pad_18 - v5[2]; /*0x43339a*/
        v8 = *(_DWORD *)&this->__pad_18[4] - v6 + v10; /*0x4333b0*/
        v9 += this->BinkMovie_field_0x10[0] + (((int)v7 - HIDWORD(v7)) >> 1); /*0x4333bb*/
        v10 = this->BinkMovie_field_0x14[0] + v8; /*0x4333c5*/
        return (*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)a2 + 20))(a2, &v9, 0); /*0x4333cf*/
      }
    }
  }
  return result; /*0x4333d3*/
}



// ==== 0x004333F0  BinkMovieClass::RenderFrameToSurface  this=BinkMovieClass  sig=csp ====
unsigned int __thiscall BinkMovieClass::RenderFrameToSurface(BinkMovieClass *this)
{
  unsigned int result; // eax
  int v3; // eax
  int BinkMovieClass_field_0x04; // ecx
  DSurface *BinkMovieClass_field_0x0C; // edi
  int v6; // ebx
  int v7; // ebp
  int v8; // eax
  int v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // [esp+10h] [ebp-18h]
  int v13; // [esp+10h] [ebp-18h]
  int v14; // [esp+14h] [ebp-14h]
  int BinkMovieClass_field_0x10; // [esp+14h] [ebp-14h]
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  LOBYTE(result) = *((_BYTE *)this + 44); /*0x433400*/
  if ( stru_A8EB00.?[412] ) /*0x433403*/
  {
    if ( (_BYTE)result ) /*0x433434*/
      return result; /*0x433434*/
    Debug::Log(); /*0x43343f*/
    BinkMovieClass_field_0x04 = this->BinkMovieClass_field_0x04; /*0x433444*/
    *((_BYTE *)this + 44) = 1; /*0x43344a*/
    BinkPause(BinkMovieClass_field_0x04, 0); /*0x433451*/
    BinkMovieClass_field_0x0C = (DSurface *)this->BinkMovieClass_field_0x0C; /*0x433457*/
    if ( BinkMovieClass_field_0x0C == g_DSurface_Primary ) /*0x433461*/
    {
      GetClientRect(g_hWnd, &Rect); /*0x433472*/
      ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x433484*/
      v6 = Rect.left + this->BinkMovieClass_field_0x10; /*0x433495*/
      v7 = Rect.top + *((_DWORD *)this + 5); /*0x43349c*/
      BinkMovieClass_field_0x0C = (DSurface *)this->BinkMovieClass_field_0x0C; /*0x43349e*/
      BinkMovie::AdjustSurfaceFormat((BinkMovie *)this, (int)BinkMovieClass_field_0x0C); /*0x4334a2*/
      v14 = (*((int (__thiscall **)(DSurface *, _DWORD, _DWORD))BinkMovieClass_field_0x0C->DSurface_field_0x0 + 23))( /*0x4334b6*/
              BinkMovieClass_field_0x0C,
              0,
              0);
      if ( v14 ) /*0x4334ba*/
      {
        v12 = (*((int (__thiscall **)(DSurface *))BinkMovieClass_field_0x0C->DSurface_field_0x0 + 29))(BinkMovieClass_field_0x0C); /*0x4334cb*/
        v8 = (*((int (__thiscall **)(DSurface *))BinkMovieClass_field_0x0C->DSurface_field_0x0 + 32))(BinkMovieClass_field_0x0C); /*0x4334cf*/
        BinkCopyToBuffer( /*0x4334ec*/
          this->BinkMovieClass_field_0x04,
          v14,
          v12,
          v8,
          v6,
          v7,
          this->BinkMovieClass_field_0x08 | 0x80000000);
LABEL_10:
        (*((void (__thiscall **)(DSurface *))BinkMovieClass_field_0x0C->DSurface_field_0x0 + 24))(BinkMovieClass_field_0x0C); /*0x433549*/
      }
    }
    else
    {
      v9 = *((_DWORD *)this + 5); /*0x4334f1*/
      BinkMovieClass_field_0x10 = this->BinkMovieClass_field_0x10; /*0x4334f7*/
      BinkMovie::AdjustSurfaceFormat((BinkMovie *)this, this->BinkMovieClass_field_0x0C); /*0x4334fb*/
      v10 = (*((int (__thiscall **)(DSurface *, _DWORD, _DWORD))BinkMovieClass_field_0x0C->DSurface_field_0x0 + 23))( /*0x43350d*/
              BinkMovieClass_field_0x0C,
              0,
              0);
      if ( v10 ) /*0x433511*/
      {
        v13 = (*((int (__thiscall **)(DSurface *))BinkMovieClass_field_0x0C->DSurface_field_0x0 + 29))(BinkMovieClass_field_0x0C); /*0x43351e*/
        v11 = (*((int (__thiscall **)(DSurface *))BinkMovieClass_field_0x0C->DSurface_field_0x0 + 32))(BinkMovieClass_field_0x0C); /*0x433522*/
        BinkCopyToBuffer( /*0x433543*/
          this->BinkMovieClass_field_0x04,
          v10,
          v13,
          v11,
          BinkMovieClass_field_0x10,
          v9,
          this->BinkMovieClass_field_0x08 | 0x80000000);
        goto LABEL_10; /*0x433543*/
      }
    }
    return (unsigned int)BinkMovie::BlitToTarget((BinkMovie *)this, (int)BinkMovieClass_field_0x0C); /*0x433553*/
  }
  if ( (_BYTE)result == 1 ) /*0x433407*/
  {
    Debug::Log(); /*0x433412*/
    v3 = this->BinkMovieClass_field_0x04; /*0x433417*/
    *((_BYTE *)this + 44) = 0; /*0x43341d*/
    return BinkPause(v3, 1); /*0x433424*/
  }
  return result; /*0x43342a*/
}



// ==== 0x00433560  sub_433560  this=-  sig=ida-proto ====
char __fastcall sub_433560(int a1, _BYTE *a2)
{
  *(_DWORD *)a1 = a2; /*0x433560*/
  *(_BYTE *)(a1 + 4) = 0; /*0x433562*/
  return *a2 & 1; /*0x43356a*/
}



// ==== 0x004335A0  sub_4335A0  this=-  sig=ida-proto ====
char __fastcall sub_4335A0(int a1, _BYTE *a2, char a3)
{
  *(_DWORD *)a1 = a2; /*0x4335a4*/
  *(_BYTE *)(a1 + 4) = 0; /*0x4335a6*/
  *a2 = a3; /*0x4335aa*/
  return a3; /*0x4335ac*/
}



// ==== 0x004335E0  BinkMovieClass::AllocateRenderSurface  this=CampaignScore  sig=csp ====
int __fastcall sub_4335E0(_BYTE *a1, _BYTE *a2, int a3)
{
  char v4; // bl
  int v5; // ecx
  int v6; // ebp
  _BYTE *v7; // esi
  char v8; // al
  bool v9; // zf
  char v11; // [esp+18h] [ebp-Ch]
  char v12; // [esp+18h] [ebp-Ch]
  char v13; // [esp+20h] [ebp-4h]
  int v14; // [esp+28h] [ebp+4h]

  v4 = 0; /*0x4335e9*/
  v5 = 0; /*0x4335eb*/
  v6 = 1; /*0x4335ed*/
  v13 = 0; /*0x4335f4*/
  v7 = a2; /*0x4335fa*/
  *a2 = *a1 & 1; /*0x4335fc*/
  if ( a3 != 1 ) /*0x433603*/
  {
    v14 = a3 - 1; /*0x433609*/
    while ( 1 ) /*0x433613*/
    {
      if ( !((v5 + 1) % 7u) ) /*0x433621*/
      {
        v11 = ++v4; /*0x43362c*/
        if ( v4 == 8 ) /*0x433630*/
        {
          v4 = 0; /*0x433632*/
          ++v7; /*0x433634*/
          v11 = 0; /*0x433635*/
          *v7 = 0; /*0x433639*/
        }
        ++v6; /*0x43364d*/
        *v7 |= 1 << v11; /*0x43364e*/
      }
      if ( ++v13 == 8 ) /*0x43365c*/
      {
        v13 = 0; /*0x43365e*/
        ++a1; /*0x433663*/
      }
      v8 = ((1 << v13) & (unsigned __int8)*a1) != 0; /*0x433675*/
      v12 = ++v4; /*0x43367d*/
      if ( v4 == 8 ) /*0x433681*/
      {
        v4 = 0; /*0x433683*/
        ++v7; /*0x433685*/
        v12 = 0; /*0x433686*/
        *v7 = 0; /*0x43368a*/
      }
      v9 = v14 == 1; /*0x4336a0*/
      *v7 |= v8 << v12; /*0x4336a1*/
      --v14; /*0x4336a3*/
      if ( v9 ) /*0x4336a7*/
        break; /*0x4336a7*/
      ++v5; /*0x43360f*/
    }
  }
  return v6; /*0x4336ad*/
}



// ==== 0x004336C0  BinkMovieClass::ReleaseRenderSurface  this=BinkMovieClass  sig=ida-proto ====
unsigned int __fastcall sub_4336C0(unsigned __int8 *a1, _BYTE *a2, int a3)
{
  unsigned __int8 *v3; // esi
  char v4; // bl
  int v5; // ecx
  unsigned int result; // eax
  int v7; // edi
  _BYTE *v8; // ebp
  char v9; // al
  char v10; // [esp+18h] [ebp-4h]

  v3 = a1; /*0x4336c6*/
  v4 = 0; /*0x4336cf*/
  *a2 = *a1 & 1; /*0x4336d7*/
  v5 = 0; /*0x4336d9*/
  result = (unsigned int)(a3 + 7) >> 3; /*0x4336db*/
  v7 = a3 - 1; /*0x4336de*/
  v8 = a2; /*0x4336e3*/
  v10 = 0; /*0x4336e5*/
  if ( a3 != 1 ) /*0x4336e9*/
  {
    while ( 1 ) /*0x4336f1*/
    {
      if ( !((v5 + 1) % 7u) && ++v4 == 8 ) /*0x43370a*/
      {
        v4 = 0; /*0x43370c*/
        ++v3; /*0x43370e*/
      }
      if ( ++v4 == 8 ) /*0x433714*/
      {
        v4 = 0; /*0x433716*/
        ++v3; /*0x433718*/
      }
      v9 = ((1 << v4) & *v3) != 0; /*0x43372c*/
      if ( ++v10 == 8 ) /*0x433738*/
      {
        ++v8; /*0x43373a*/
        v10 = 0; /*0x43373b*/
        *v8 = 0; /*0x433740*/
      }
      --v7; /*0x433755*/
      *v8 |= v9 << v10; /*0x433756*/
      if ( !v7 ) /*0x433759*/
        break; /*0x433759*/
      ++v5; /*0x4336ed*/
    }
    return (unsigned int)(a3 + 7) >> 3; /*0x43375b*/
  }
  return result; /*0x43375f*/
}



// ==== 0x00433770  BinkMovieClass::OpenFile  this=Coord  sig=csp ====
unsigned int __fastcall sub_433770(unsigned __int8 *a1, _BYTE *a2, unsigned int a3)
{
  unsigned __int8 *v3; // esi
  char v4; // bl
  int v5; // eax
  _BYTE *v6; // edi
  char v7; // al
  unsigned int v9; // [esp+10h] [ebp-14h]
  int v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+18h] [ebp-Ch]
  char v12; // [esp+20h] [ebp-4h]

  v3 = a1; /*0x433776*/
  v4 = 0; /*0x433780*/
  *a2 = *a1 & 1; /*0x433785*/
  v5 = 0; /*0x433788*/
  v6 = a2; /*0x43378c*/
  v12 = 0; /*0x43378e*/
  v10 = 0; /*0x433792*/
  v9 = 0; /*0x433796*/
  if ( a3 ) /*0x43379a*/
  {
    while ( 1 ) /*0x4337ae*/
    {
      v11 = v5 + 1; /*0x4337ae*/
      if ( !((v5 + 1) % 7u) && ++v4 == 8 ) /*0x4337bd*/
      {
        v4 = 0; /*0x4337bf*/
        ++v3; /*0x4337c1*/
      }
      if ( ++v4 == 8 ) /*0x4337c7*/
      {
        v4 = 0; /*0x4337c9*/
        ++v3; /*0x4337cb*/
      }
      v7 = ((1 << v4) & *v3) != 0; /*0x4337df*/
      if ( ++v12 == 8 ) /*0x4337eb*/
      {
        ++v6; /*0x4337ed*/
        v12 = 0; /*0x4337ee*/
        *v6 = 0; /*0x4337f3*/
      }
      *v6 |= v7 << v12; /*0x43380b*/
      if ( !(++v10 % 16) ) /*0x43381c*/
      {
        ++v9; /*0x433829*/
        if ( !*((_WORD *)v6 - 1) ) /*0x433824*/
          break; /*0x433824*/
      }
      if ( v9 >= a3 ) /*0x433839*/
        goto LABEL_14; /*0x433839*/
      v5 = v11; /*0x4337a2*/
    }
  }
  else
  {
LABEL_14:
    *(_WORD *)&a2[2 * a3 - 2] = 0; /*0x433841*/
  }
  return v9; /*0x43384e*/
}



// ==== 0x00433860  sub_433860  this=-  sig=ida-proto ====
int sub_433860()
{
  dword_89C4A8 = 0; /*0x433862*/
  dword_89C4AC = 0; /*0x433867*/
  dword_89C4B0 = 0; /*0x43386c*/
  dword_89C4B4 = 0; /*0x433871*/
  return 0; /*0x433876*/
}



// ==== 0x00433880  BitTextClass::ParseFontData  this=BitFont  sig=csp ====
int __thiscall BitTextClass::ParseFontData(int this, char *Source)
{
  struct tagRECT *v3; // ebp
  _DWORD *Font; // eax

  v3 = (struct tagRECT *)(this + 48); /*0x43388a*/
  *(_DWORD *)this = &BitFont::`vftable'; /*0x433895*/
  *(_DWORD *)(this + 4) = 0; /*0x43389b*/
  *(_WORD *)(this + 36) = 0x7FFF; /*0x43389e*/
  *(_WORD *)(this + 38) = 13653; /*0x4338a4*/
  *(_DWORD *)(this + 40) = 64; /*0x4338aa*/
  *(_BYTE *)(this + 64) = 1; /*0x4338b1*/
  *(_BYTE *)(this + 65) = 1; /*0x4338b4*/
  *(_DWORD *)(this + 24) = 1; /*0x4338b7*/
  *(_DWORD *)(this + 28) = 1; /*0x4338ba*/
  *(_DWORD *)(this + 32) = 0; /*0x4338bd*/
  *(_DWORD *)(this + 12) = 0; /*0x4338c0*/
  *(_DWORD *)(this + 8) = 0; /*0x4338c3*/
  SetRect((LPRECT)(this + 48), 0, 0, 0, 0); /*0x4338c6*/
  *(_DWORD *)(this + 44) = 1; /*0x4338d0*/
  Font = File::LoadFont(Source); /*0x4338d3*/
  *(_DWORD *)(this + 4) = Font; /*0x4338da*/
  if ( Font ) /*0x4338dd*/
  {
    *(_DWORD *)(this + 24) = Font[1]; /*0x4338e2*/
    *(_DWORD *)(this + 28) = Font[3]; /*0x4338ea*/
    sub_434700((ObjectClass *)this); /*0x4338ed*/
  }
  else
  {
    *(_DWORD *)(this + 4) = 0; /*0x433900*/
    *(_WORD *)(this + 36) = 0x7FFF; /*0x433903*/
    *(_WORD *)(this + 38) = 13653; /*0x433909*/
    *(_DWORD *)(this + 40) = 64; /*0x43390f*/
    *(_BYTE *)(this + 64) = 1; /*0x433916*/
    *(_BYTE *)(this + 65) = 1; /*0x433919*/
    *(_DWORD *)(this + 24) = 1; /*0x43391c*/
    *(_DWORD *)(this + 28) = 1; /*0x43391f*/
    *(_DWORD *)(this + 32) = 0; /*0x433922*/
    *(_DWORD *)(this + 12) = 0; /*0x433925*/
    *(_DWORD *)(this + 8) = 0; /*0x433928*/
    SetRect(v3, 0, 0, 0, 0); /*0x43392b*/
    *(_DWORD *)(this + 44) = 1; /*0x433931*/
  }
  return this; /*0x4338f4*/
}



// ==== 0x00433990  File::LoadFont  this=File  sig=csp ====
_DWORD *__thiscall File::LoadFont(char *Source)
{
  unsigned int v2; // ebp
  _DWORD *v3; // esi
  CCFileClass *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  void *v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  unsigned int v12; // eax
  void **v13; // edi
  int v14; // eax
  unsigned int v15; // edx
  void **v16; // ecx
  int v17; // eax
  char *v18; // edx
  _WORD *v19; // eax
  size_t v20; // edi
  int v21; // ecx
  int v22; // eax
  void **v24; // [esp+30h] [ebp-44h]
  _DWORD v25[7]; // [esp+34h] [ebp-40h] BYREF
  char v26[4]; // [esp+50h] [ebp-24h] BYREF
  int v27; // [esp+54h] [ebp-20h]
  int v28; // [esp+58h] [ebp-1Ch]
  int v29; // [esp+5Ch] [ebp-18h]
  int v30; // [esp+60h] [ebp-14h]
  unsigned int v31; // [esp+64h] [ebp-10h]
  int v32; // [esp+68h] [ebp-Ch]
  int v33; // [esp+6Ch] [ebp-8h]
  int v34; // [esp+70h] [ebp-4h]

  v2 = 0; /*0x43399b*/
  v3 = 0; /*0x43399d*/
  v4 = (CCFileClass *)__2_YAPAXI_Z(0x6Cu); /*0x43399f*/
  if ( v4 ) /*0x4339a9*/
  {
    v5 = CCFileClass::Construct(v4, Source); /*0x4339b2*/
    v6 = v5; /*0x4339b7*/
    if ( v5 ) /*0x4339bb*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v5 + 20))(v5, 0) /*0x4339f0*/
        || !(*(int (__thiscall **)(_DWORD *, int))(*v6 + 28))(v6, 1)
        || (v3 = (_DWORD *)__2_YAPAXI_Z(0x24u)) == 0 )
      {
LABEL_35:
        (*(void (__thiscall **)(_DWORD *, int))*v6)(v6, 1); /*0x433bee*/
        return v3; /*0x433bf4*/
      }
      memset(v3, 0, 0x24u); /*0x433a04*/
      v7 = (void *)__2_YAPAXI_Z(0x20000u); /*0x433a0b*/
      v3[6] = v7; /*0x433a12*/
      if ( v7 ) /*0x433a15*/
      {
        memset(v7, 0, 0x20000u); /*0x433a22*/
        if ( (*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*v6 + 36))(v6, v25, 28) == 28 ) /*0x433a35*/
        {
          if ( v25[0] == 1416523622 ) /*0x433a44*/
          {
            v3[2] = v25[3]; /*0x433a4f*/
            v3[3] = v25[4]; /*0x433a56*/
            v3[1] = v25[2]; /*0x433a5d*/
            *v3 = v25[1]; /*0x433a64*/
            v3[5] = v25[6]; /*0x433a6a*/
            v8 = v3[6]; /*0x433a71*/
            v3[4] = v25[5]; /*0x433a74*/
            if ( (*(int (__thiscall **)(_DWORD *, int, int))(*v6 + 36))(v6, v8, 0x20000) == 0x20000 ) /*0x433a84*/
              goto LABEL_24; /*0x433a84*/
          }
          else if ( v25[0] == 1951297350 ) /*0x433a94*/
          {
            (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v6 + 40))(v6, 0, 0); /*0x433aa0*/
            if ( (*(int (__thiscall **)(_DWORD *, char *, int))(*v6 + 36))(v6, v26, 36) == 36 ) /*0x433ab4*/
            {
              v9 = v28; /*0x433abe*/
              v10 = v29; /*0x433ac2*/
              v3[3] = v30; /*0x433ac6*/
              v11 = v32; /*0x433ac9*/
              v3[1] = v9; /*0x433acd*/
              v3[5] = v11; /*0x433ad0*/
              v12 = v31; /*0x433ad3*/
              v3[2] = v10; /*0x433ad7*/
              *v3 = v27; /*0x433ae1*/
              v13 = (void **)malloc(12 * v12); /*0x433aec*/
              v24 = v13; /*0x433af3*/
              if ( v13 ) /*0x433af7*/
              {
                (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v6 + 40))(v6, v33, 0); /*0x433b07*/
                v14 = (*(int (__thiscall **)(_DWORD *, void **, unsigned int))(*v6 + 36))(v6, v13, 12 * v31); /*0x433b1a*/
                v15 = v31; /*0x433b1d*/
                if ( v14 == 12 * v31 ) /*0x433b29*/
                {
                  v3[4] = 0; /*0x433b31*/
                  if ( v15 ) /*0x433b34*/
                  {
                    v16 = v13 + 2; /*0x433b36*/
                    do /*0x433b67*/
                    {
                      v17 = (int)*(v16 - 1); /*0x433b39*/
                      if ( v17 <= (int)*v16 ) /*0x433b42*/
                      {
                        LOWORD(v13) = *((_WORD *)v16 - 4); /*0x433b3c*/
                        v18 = (char *)v13 + 1; /*0x433b44*/
                        do /*0x433b5b*/
                        {
                          *(_WORD *)(v3[6] + 2 * v17++) = (_WORD)v18; /*0x433b4a*/
                          ++v3[4]; /*0x433b53*/
                          v13 = (void **)*v16; /*0x433b56*/
                          ++v18; /*0x433b58*/
                        }
                        while ( v17 <= (int)*v16 ); /*0x433b5b*/
                        v15 = v31; /*0x433b5d*/
                      }
                      ++v2; /*0x433b61*/
                      v16 += 3; /*0x433b62*/
                    }
                    while ( v2 < v15 ); /*0x433b67*/
                    v13 = v24; /*0x433b69*/
                  }
                  free(v13); /*0x433b6e*/
                  (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v6 + 40))(v6, v34, 0); /*0x433b81*/
LABEL_24:
                  v19 = (_WORD *)v3[6]; /*0x433b84*/
                  v20 = v3[5] * v3[4]; /*0x433b8a*/
                  v21 = 0x10000; /*0x433b90*/
                  v3[8] = 0; /*0x433b95*/
                  do /*0x433ba4*/
                  {
                    if ( *v19 ) /*0x433b98*/
                      ++v3[8]; /*0x433b9d*/
                    ++v19; /*0x433ba0*/
                    --v21; /*0x433ba3*/
                  }
                  while ( v21 ); /*0x433ba4*/
                  v22 = __2_YAPAXI_Z(v20); /*0x433ba7*/
                  v3[7] = v22; /*0x433bb1*/
                  if ( v22 && (*(int (__thiscall **)(_DWORD *, int, size_t))(*v6 + 36))(v6, v22, v20) == v20 ) /*0x433bc1*/
                    goto LABEL_35; /*0x433bc1*/
                }
              }
            }
          }
        }
      }
      if ( v3[6] ) /*0x433bc3*/
        __3_YAXPAX_Z((void *)v3[6]); /*0x433bcb*/
      if ( v3[7] ) /*0x433bd3*/
        __3_YAXPAX_Z((void *)v3[7]); /*0x433bdb*/
      __3_YAXPAX_Z(v3); /*0x433be4*/
      v3 = 0; /*0x433bec*/
      goto LABEL_35; /*0x433bec*/
    }
  }
  return v3; /*0x433bf8*/
}



// ==== 0x00433C70  Property::Set  this=Property  sig=csp ====
__int16 __thiscall Property::Set(Property *this, __int16 a2)
{
  __int16 result; // ax

  result = *((_WORD *)this + 18); /*0x433c75*/
  *((_WORD *)this + 18) = a2; /*0x433c79*/
  return result; /*0x433c7d*/
}



// ==== 0x00433C80  ObjectClass::method_433C80  this=ObjectClass  sig=csp ====
__int16 __thiscall sub_433C80(ObjectClass *this, __int16 a2)
{
  HIWORD(this->occupant) = a2; /*0x433c85*/
  return this->occupant; /*0x433c8d*/
}



// ==== 0x00433C90  Char::Swap  this=Char  sig=csp ====
int __thiscall Char::Swap(Char *this, char a2)
{
  int result; // eax

  LOBYTE(result) = *((_BYTE *)this + 65); /*0x433c94*/
  *((_BYTE *)this + 65) = a2; /*0x433c97*/
  return result; /*0x433c9a*/
}



// ==== 0x00433CA0  TextGroup::SetRect  this=TextGroup  sig=csp ====
_DWORD *__thiscall TextGroup::SetRect(TextGroup *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2; /*0x433ca0*/
  if ( a2 ) /*0x433ca8*/
  {
    *(this + 12) = *(TextGroup *)a2; /*0x433cac*/
    *(this + 13) = (TextGroup)a2[1]; /*0x433cb2*/
    *(this + 14) = (TextGroup)a2[2]; /*0x433cb8*/
    result = (_DWORD *)a2[3]; /*0x433cbb*/
    *((_DWORD *)this + 15) = result; /*0x433cbe*/
  }
  else
  {
    *((_DWORD *)this + 15) = 0; /*0x433cc4*/
    *((_DWORD *)this + 14) = 0; /*0x433cc7*/
    *((_DWORD *)this + 13) = 0; /*0x433cca*/
    *((_DWORD *)this + 12) = 0; /*0x433ccd*/
  }
  return result; /*0x433cc1*/
}



// ==== 0x00433CE0  ObjectClass::method_433CE0  this=ObjectClass  sig=csp ====
char __thiscall sub_433CE0(_BYTE *this, char a2)
{
  char result; // al

  result = this->q040; /*0x433ce4*/
  this->q040 = a2; /*0x433ce7*/
  return result; /*0x433cea*/
}



// ==== 0x00433CF0  Text::Layout  this=Text  sig=csp ====
int __thiscall Text::Layout(Text *this, unsigned __int16 *a2, int *a3, _DWORD *a4, int a5)
{
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // di
  int v7; // esi
  int v8; // ebp
  unsigned __int16 *v9; // ebx
  unsigned __int8 *v10; // eax
  int v11; // edx
  int v12; // edx
  int v13; // eax
  int result; // eax
  int v15; // [esp+4h] [ebp-1Ch]
  unsigned __int16 *v16; // [esp+Ch] [ebp-14h]
  _DWORD *v17; // [esp+10h] [ebp-10h]
  unsigned __int16 *v18; // [esp+14h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-8h]
  unsigned __int16 i; // [esp+1Ch] [ebp-4h]
  unsigned __int16 *v21; // [esp+24h] [ebp+4h]

  v5 = 0; /*0x433cf6*/
  v18 = 0; /*0x433cff*/
  v17 = (_DWORD *)*((_DWORD *)this + 1); /*0x433d03*/
  if ( v17 && a2 ) /*0x433d13*/
  {
    v6 = *a2; /*0x433d1f*/
    v7 = 0; /*0x433d22*/
    v8 = 0; /*0x433d24*/
    v9 = a2 + 1; /*0x433d26*/
    v21 = 0; /*0x433d2c*/
    v19 = *((_DWORD *)this + 7); /*0x433d30*/
    v15 = v19; /*0x433d34*/
    v16 = 0; /*0x433d38*/
    for ( i = v6; v6; i = v6 ) /*0x433d40*/
    {
      switch ( v6 ) /*0x433d5c*/
      {
        case 9u: /*0x433d5c*/
          v7 = *((_DWORD *)this + 10) + v7 - (*((_DWORD *)this + 10) + v7) % *((_DWORD *)this + 10); /*0x433d92*/
          break; /*0x433d94*/
        case 0xAu: /*0x433d5c*/
        case 0xDu: /*0x433d5c*/
          if ( v5 != 13 ) /*0x433d67*/
          {
            v7 = 0; /*0x433d75*/
            v8 = 0; /*0x433d77*/
            v15 += v19; /*0x433d7b*/
          }
          break; /*0x433d7f*/
        case 0x20u: /*0x433d5c*/
          v16 = v9; /*0x433d9d*/
          v18 = v21; /*0x433da1*/
          goto LABEL_9; /*0x433da1*/
        default:
LABEL_9:
          v10 = 0; /*0x433da5*/
          if ( v17 ) /*0x433dad*/
          {
            v11 = *(unsigned __int16 *)(v17[6] + 2 * v6); /*0x433db4*/
            if ( (_WORD)v11 ) /*0x433dba*/
              v10 = (unsigned __int8 *)(v17[7] + (v11 - 1) * v17[5]); /*0x433dc7*/
          }
          if ( v10 || (v10 = (unsigned __int8 *)*((_DWORD *)this + 2)) != 0 ) /*0x433dd7*/
          {
            ++v8; /*0x433de1*/
            v12 = *((_DWORD *)this + 11); /*0x433de2*/
            v13 = *v10; /*0x433de5*/
            v7 += v12 + v13; /*0x433dea*/
            if ( a5 && v7 > a5 ) /*0x433df6*/
            {
              if ( v16 ) /*0x433dfe*/
              {
                if ( v8 > 1 ) /*0x433e03*/
                {
                  v9 = v16; /*0x433e09*/
                  v21 = v18; /*0x433e0b*/
                }
              }
              else
              {
                if ( v8 > 1 ) /*0x433e14*/
                {
                  v7 -= v13 + v12; /*0x433e18*/
                  --v9; /*0x433e1a*/
                }
                if ( v7 > (int)v21 ) /*0x433e21*/
                  v21 = (unsigned __int16 *)v7; /*0x433e23*/
              }
              v7 = 0; /*0x433e2f*/
              v8 = 0; /*0x433e31*/
              v16 = 0; /*0x433e35*/
              v15 += v19; /*0x433e39*/
            }
            else if ( v7 > (int)v21 ) /*0x433e43*/
            {
              v21 = (unsigned __int16 *)v7; /*0x433e45*/
            }
          }
          break; /*0x433e3d*/
      }
      v6 = *v9; /*0x433e49*/
      v5 = i; /*0x433e4c*/
      ++v9; /*0x433e50*/
    }
    if ( a3 ) /*0x433e69*/
      *a3 = (int)v21; /*0x433e6f*/
    result = (int)a4; /*0x433e71*/
    if ( a4 ) /*0x433e77*/
      *a4 = v15; /*0x433e7d*/
    LOBYTE(result) = 1; /*0x433e7f*/
  }
  else
  {
    if ( a4 ) /*0x433e8e*/
      *a4 = 0; /*0x433e90*/
    result = (int)a3; /*0x433e92*/
    if ( a3 ) /*0x433e98*/
      *a3 = 0; /*0x433e9a*/
    LOBYTE(result) = 0; /*0x433e9c*/
  }
  return result; /*0x433e81*/
}



// ==== 0x00433ED0  Text::MeasureWidth  this=CampaignScore  sig=csp ====
int __stdcall Text_MeasureWidth(int a1, int a2)
{
  Text::Layout(a1, &a2, 0, a2); /*0x433ee1*/
  return a2; /*0x433eea*/
}



// ==== 0x00433F50  MessageListClass::CountCharsInWidth  this=MessageListClass  sig=csp ====
int __thiscall MessageListClass::CountCharsInWidth(MessageListClass *this, _WORD *a2, int a3, int a4, int a5)
{
  MessageListClass *v5; // edx
  int v6; // ebp
  _DWORD *MaxMessageCount; // ebx
  _WORD *v8; // ecx
  unsigned __int16 v9; // di
  unsigned __int8 *ScrollOffset; // eax
  int v11; // edx
  int v12; // edx
  int v14; // edx
  _WORD *v15; // ecx
  int v16; // eax
  int v17; // [esp+8h] [ebp-8h]

  v5 = this; /*0x433f53*/
  v6 = 0; /*0x433f57*/
  MaxMessageCount = (_DWORD *)this->MaxMessageCount; /*0x433f59*/
  v17 = 0; /*0x433f62*/
  if ( !MaxMessageCount ) /*0x433f66*/
    return 0; /*0x433f66*/
  v8 = a2; /*0x433f6c*/
  if ( !a2 ) /*0x433f72*/
    return 0; /*0x434092*/
  v9 = *a2; /*0x433f7a*/
  if ( *a2 ) /*0x433f7a*/
  {
    while ( 1 ) /*0x433f99*/
    {
      if ( v9 == 9 ) /*0x433f99*/
      {
        v6 = v5->MessageRect[2] + v6 - (v5->MessageRect[2] + v6) % v5->MessageRect[2]; /*0x433fee*/
      }
      else if ( v9 != 10 && v9 != 13 ) /*0x433fa1*/
      {
        ScrollOffset = 0; /*0x433fa3*/
        v11 = *(unsigned __int16 *)(MaxMessageCount[6] + 2 * v9); /*0x433fae*/
        if ( (_WORD)v11 ) /*0x433fb4*/
          ScrollOffset = (unsigned __int8 *)(MaxMessageCount[7] + (v11 - 1) * MaxMessageCount[5]); /*0x433fbd*/
        v8 = a2; /*0x433fc0*/
        if ( ScrollOffset || (ScrollOffset = (unsigned __int8 *)this->ScrollOffset) != 0 ) /*0x433fd1*/
          v6 += *ScrollOffset + this->MessageRect[3]; /*0x433fe0*/
      }
      v12 = ++v17; /*0x433ff8*/
      if ( v6 > a3 ) /*0x433fff*/
        break; /*0x433fff*/
      if ( a4 && v12 == a4 || a5 && (v9 == 13 || v9 == 10) ) /*0x43401f*/
        return v17; /*0x43401f*/
      v9 = v8[1]; /*0x434021*/
      a2 = ++v8; /*0x43402b*/
      if ( !v9 ) /*0x43402f*/
        return v17; /*0x434040*/
      v5 = this; /*0x433f88*/
    }
    v14 = v12 - 1; /*0x434047*/
    v17 = v14; /*0x43404a*/
    if ( a5 ) /*0x43404e*/
    {
      if ( v9 > 0x20u ) /*0x434054*/
      {
        v15 = v8 - 1; /*0x434056*/
        v16 = v14; /*0x434059*/
        if ( v14 ) /*0x43405d*/
        {
          while ( *v15 > 0x20u ) /*0x434063*/
          {
            --v16; /*0x434065*/
            --v15; /*0x434066*/
            if ( !v16 ) /*0x43406b*/
              return v14; /*0x434078*/
          }
          if ( v16 ) /*0x43407d*/
            return v16; /*0x43407f*/
        }
      }
    }
  }
  return v17; /*0x43403b*/
}



// ==== 0x00434100  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_434100(_DWORD *this, int a2)
{
  int result; // eax

  result = this->owningHouseIndex; /*0x434104*/
  this->owningHouseIndex = a2; /*0x434107*/
  return result; /*0x43410a*/
}



// ==== 0x00434110  Field::Int_Set  this=Field  sig=csp ====
int __thiscall Field::Int_Set(Field *this, int a2)
{
  *((_DWORD *)this + 8) = a2; /*0x434114*/
  return a2; /*0x434117*/
}



// ==== 0x00434120  FontClass::RenderGlyph  this=BitFont  sig=csp ====
int __thiscall FontClass_RenderGlyph(int this, unsigned __int16 a2, int xLeft, int yTop, int a5)
{
  _DWORD *v8; // ecx
  unsigned __int8 *v9; // eax
  int v10; // edx
  int v11; // edi
  _DWORD *v12; // ebp
  LONG v13; // ebx
  _DWORD *v14; // edx
  unsigned __int8 *v15; // ebp
  LONG v16; // edi
  int v17; // eax
  int v18; // esi
  _WORD *v19; // esi
  int v20; // ecx
  int v21; // eax
  char v22; // dl
  bool v23; // zf
  __int16 v24; // bp
  _WORD *v25; // esi
  int v26; // eax
  int v27; // ecx
  _WORD *v28; // esi
  LONG v29; // eax
  int v30; // ecx
  _WORD *v31; // esi
  LONG v32; // eax
  int v33; // ecx
  _WORD *v34; // esi
  LONG v35; // eax
  int v36; // ecx
  _WORD *v37; // esi
  LONG v38; // eax
  int v39; // ecx
  _WORD *v40; // esi
  LONG v41; // eax
  int v42; // ecx
  _WORD *v43; // esi
  LONG v44; // eax
  int v45; // ecx
  int v46; // ecx
  int v47; // eax
  int v48; // edi
  int v49; // ebp
  unsigned __int8 *v50; // edi
  int v51; // eax
  char *v52; // ebx
  _WORD *v53; // ecx
  char v54; // dl
  _WORD *v55; // ecx
  int v56; // eax
  _WORD *v57; // ecx
  int v58; // eax
  _WORD *v59; // ecx
  int v60; // eax
  _WORD *v61; // ecx
  int v62; // eax
  _WORD *v63; // ecx
  int v64; // eax
  _WORD *v65; // ecx
  int v66; // eax
  _WORD *v67; // ecx
  int v68; // eax
  int v69; // [esp+0h] [ebp-40h] BYREF
  _DWORD *v70; // [esp+10h] [ebp-30h]
  unsigned __int8 *v71; // [esp+14h] [ebp-2Ch]
  _WORD *v72; // [esp+18h] [ebp-28h]
  int v73; // [esp+1Ch] [ebp-24h]
  struct tagRECT rc; // [esp+20h] [ebp-20h] BYREF
  LONG v75; // [esp+30h] [ebp-10h] BYREF
  LONG v76; // [esp+34h] [ebp-Ch]
  LONG v77; // [esp+38h] [ebp-8h]
  LONG v78; // [esp+3Ch] [ebp-4h]
  __int16 v79; // [esp+44h] [ebp+4h]
  char *yTopa; // [esp+4Ch] [ebp+Ch]
  int yTopb; // [esp+4Ch] [ebp+Ch]
  int v82; // [esp+50h] [ebp+10h]

  v70 = (_DWORD *)this; /*0x434131*/
  if ( a2 == 9 ) /*0x434135*/
    return *(_DWORD *)(this + 40) /*0x434155*/
         + xLeft
         - (*(_DWORD *)(this + 40) + xLeft - *(_DWORD *)(this + 32)) % *(_DWORD *)(this + 40);
  v79 = *(_WORD *)(this + 36); /*0x43415c*/
  if ( a5 != -1 ) /*0x434168*/
    v79 = a5; /*0x43416a*/
  v8 = *(_DWORD **)(this + 4); /*0x43416e*/
  v9 = 0; /*0x434171*/
  if ( v8 ) /*0x434175*/
  {
    v10 = *(unsigned __int16 *)(v8[6] + 2 * a2); /*0x434182*/
    if ( (_WORD)v10 ) /*0x434188*/
      v9 = (unsigned __int8 *)(v8[7] + (v10 - 1) * v8[5]); /*0x434191*/
  }
  if ( !v9 ) /*0x434196*/
  {
    if ( &v69 != (int *)-68 ) /*0x43419e*/
      v79 ^= 0x5555u; /*0x4341a0*/
    v9 = *(unsigned __int8 **)(this + 8); /*0x4341a8*/
    if ( !v9 ) /*0x4341ad*/
      return xLeft; /*0x4341ba*/
  }
  if ( !*(_DWORD *)(this + 12) ) /*0x4341bd*/
    return xLeft; /*0x4341cf*/
  v11 = v8[2]; /*0x4341d5*/
  v71 = v9 + 1; /*0x4341d8*/
  v82 = *v9; /*0x4341e7*/
  if ( !*(_BYTE *)(this + 65) ) /*0x4341e0*/
    goto LABEL_71; /*0x4341e0*/
  SetRect(&rc, xLeft, yTop, *v9 + xLeft - 1, v11 + yTop - 1); /*0x43420a*/
  v12 = v70; /*0x434210*/
  if ( !(unsigned __int8)sub_434840(&v75, &rc, v70 + 12) ) /*0x434224*/
    return xLeft + v82 + v12[11]; /*0x43423f*/
  v13 = v75; /*0x434242*/
  if ( rc.left >= v75 && rc.right <= v77 && rc.top >= v76 && rc.bottom <= v78 ) /*0x43426c*/
  {
LABEL_71:
    v47 = v11; /*0x434409*/
    v48 = v11 - 1; /*0x43440d*/
    v49 = v70[3] + 2 * (xLeft + yTop * v70[4]); /*0x434410*/
    if ( !v47 ) /*0x434413*/
    {
LABEL_102:
      v14 = v70; /*0x4344e0*/
      return xLeft + v82 + v14[11]; /*0x4344e0*/
    }
    yTopb = v48 + 1; /*0x43441e*/
    v50 = v71; /*0x434422*/
LABEL_73:
    v51 = v82; /*0x434426*/
    v52 = (char *)v50; /*0x43442a*/
    v53 = (_WORD *)v49; /*0x43442c*/
    while ( 1 ) /*0x43442e*/
    {
      v54 = *v52++; /*0x43442e*/
      if ( v54 ) /*0x434433*/
      {
        if ( v54 < 0 ) /*0x434440*/
          *v53 = v79; /*0x434442*/
        v55 = v53 + 1; /*0x434445*/
        v56 = v51 - 1; /*0x434448*/
        if ( v56 <= 0 ) /*0x43444b*/
          goto LABEL_101; /*0x43444b*/
        if ( (v54 & 0x40) != 0 ) /*0x434450*/
          *v55 = v79; /*0x434452*/
        v57 = v55 + 1; /*0x434455*/
        v58 = v56 - 1; /*0x434458*/
        if ( v58 <= 0 ) /*0x43445b*/
          goto LABEL_101; /*0x43445b*/
        if ( (v54 & 0x20) != 0 ) /*0x434460*/
          *v57 = v79; /*0x434462*/
        v59 = v57 + 1; /*0x434465*/
        v60 = v58 - 1; /*0x434468*/
        if ( v60 <= 0 ) /*0x43446b*/
          goto LABEL_101; /*0x43446b*/
        if ( (v54 & 0x10) != 0 ) /*0x434470*/
          *v59 = v79; /*0x434472*/
        v61 = v59 + 1; /*0x434475*/
        v62 = v60 - 1; /*0x434478*/
        if ( v62 <= 0 ) /*0x43447b*/
          goto LABEL_101; /*0x43447b*/
        if ( (v54 & 8) != 0 ) /*0x434480*/
          *v61 = v79; /*0x434482*/
        v63 = v61 + 1; /*0x434485*/
        v64 = v62 - 1; /*0x434488*/
        if ( v64 <= 0 ) /*0x43448b*/
          goto LABEL_101; /*0x43448b*/
        if ( (v54 & 4) != 0 ) /*0x434490*/
          *v63 = v79; /*0x434492*/
        v65 = v63 + 1; /*0x434495*/
        v66 = v64 - 1; /*0x434498*/
        if ( v66 <= 0 ) /*0x43449b*/
          goto LABEL_101; /*0x43449b*/
        if ( (v54 & 2) != 0 ) /*0x4344a0*/
          *v65 = v79; /*0x4344a2*/
        v67 = v65 + 1; /*0x4344a5*/
        v68 = v66 - 1; /*0x4344a8*/
        if ( v68 <= 0 ) /*0x4344ab*/
        {
LABEL_101:
          v50 += v70[6]; /*0x4344c1*/
          v23 = yTopb == 1; /*0x4344d1*/
          v49 += 2 * v70[4]; /*0x4344d2*/
          --yTopb; /*0x4344d6*/
          if ( v23 ) /*0x4344da*/
            goto LABEL_102; /*0x4344da*/
          goto LABEL_73; /*0x4344da*/
        }
        if ( (v54 & 1) != 0 ) /*0x4344b0*/
          *v67 = v79; /*0x4344b2*/
        v53 = v67 + 1; /*0x4344b5*/
        v51 = v68 - 1; /*0x4344b8*/
      }
      else
      {
        v53 += 8; /*0x434435*/
        v51 -= 8; /*0x434438*/
      }
      if ( v51 <= 0 ) /*0x4344bb*/
        goto LABEL_101; /*0x4344bb*/
    }
  }
  v14 = v70; /*0x434276*/
  v15 = &v71[(v76 - rc.top) * v70[6]]; /*0x43428c*/
  v16 = v77; /*0x434295*/
  v17 = xLeft + (v76 - rc.top + yTop) * v70[4]; /*0x434299*/
  v18 = v70[3]; /*0x43429b*/
  v71 = v15; /*0x43429e*/
  v19 = (_WORD *)(v18 + 2 * v17); /*0x4342a2*/
  v72 = v19; /*0x4342a8*/
  if ( v78 - v76 == -1 ) /*0x4342ae*/
    return xLeft + v82 + v14[11]; /*0x4342ae*/
  v73 = v78 - v76 + 1; /*0x4342b5*/
  do /*0x4343ed*/
  {
    v20 = v82; /*0x4342b9*/
    v21 = xLeft; /*0x4342bd*/
    yTopa = (char *)v15; /*0x4342c1*/
    while ( 1 ) /*0x4342c9*/
    {
      v22 = *yTopa; /*0x4342c9*/
      v23 = *yTopa++ == 0; /*0x4342cd*/
      if ( !v23 ) /*0x4342d3*/
        break; /*0x4342d3*/
      v19 += 8; /*0x4342d5*/
      v20 -= 8; /*0x4342d8*/
      v21 += 8; /*0x4342db*/
LABEL_68:
      if ( v20 <= 0 ) /*0x4343bf*/
        goto LABEL_69; /*0x4343bf*/
    }
    if ( v21 < v13 || v21 > v16 || v22 >= 0 ) /*0x4342ee*/
    {
      v24 = v79; /*0x4342f9*/
    }
    else
    {
      v24 = v79; /*0x4342f0*/
      *v19 = v79; /*0x4342f4*/
    }
    v25 = v19 + 1; /*0x4342fd*/
    v26 = v21 + 1; /*0x434300*/
    v27 = v20 - 1; /*0x434301*/
    if ( v27 > 0 ) /*0x434304*/
    {
      if ( v26 >= v13 && v26 <= v16 && (v22 & 0x40) != 0 ) /*0x434315*/
        *v25 = v24; /*0x434317*/
      v28 = v25 + 1; /*0x43431a*/
      v29 = v26 + 1; /*0x43431d*/
      v30 = v27 - 1; /*0x43431e*/
      if ( v30 > 0 ) /*0x434321*/
      {
        if ( v29 >= v13 && v29 <= v16 && (v22 & 0x20) != 0 ) /*0x434332*/
          *v28 = v24; /*0x434334*/
        v31 = v28 + 1; /*0x434337*/
        v32 = v29 + 1; /*0x43433a*/
        v33 = v30 - 1; /*0x43433b*/
        if ( v33 > 0 ) /*0x43433e*/
        {
          if ( v32 >= v13 && v32 <= v16 && (v22 & 0x10) != 0 ) /*0x43434f*/
            *v31 = v24; /*0x434351*/
          v34 = v31 + 1; /*0x434354*/
          v35 = v32 + 1; /*0x434357*/
          v36 = v33 - 1; /*0x434358*/
          if ( v36 > 0 ) /*0x43435b*/
          {
            if ( v35 >= v13 && v35 <= v16 && (v22 & 8) != 0 ) /*0x434368*/
              *v34 = v24; /*0x43436a*/
            v37 = v34 + 1; /*0x43436d*/
            v38 = v35 + 1; /*0x434370*/
            v39 = v36 - 1; /*0x434371*/
            if ( v39 > 0 ) /*0x434374*/
            {
              if ( v38 >= v13 && v38 <= v16 && (v22 & 4) != 0 ) /*0x434381*/
                *v37 = v24; /*0x434383*/
              v40 = v37 + 1; /*0x434386*/
              v41 = v38 + 1; /*0x434389*/
              v42 = v39 - 1; /*0x43438a*/
              if ( v42 > 0 ) /*0x43438d*/
              {
                if ( v41 >= v13 && v41 <= v16 && (v22 & 2) != 0 ) /*0x43439a*/
                  *v40 = v24; /*0x43439c*/
                v43 = v40 + 1; /*0x43439f*/
                v44 = v41 + 1; /*0x4343a2*/
                v45 = v42 - 1; /*0x4343a3*/
                if ( v45 > 0 ) /*0x4343a6*/
                {
                  if ( v44 >= v13 && v44 <= v16 && (v22 & 1) != 0 ) /*0x4343b3*/
                    *v43 = v24; /*0x4343b5*/
                  v19 = v43 + 1; /*0x4343b8*/
                  v21 = v44 + 1; /*0x4343bb*/
                  v20 = v45 - 1; /*0x4343bc*/
                  goto LABEL_68; /*0x4343bc*/
                }
              }
            }
          }
        }
      }
    }
LABEL_69:
    v14 = v70; /*0x4343c5*/
    v15 = &v71[v70[6]]; /*0x4343d4*/
    v46 = v70[4]; /*0x4343d6*/
    v71 = v15; /*0x4343d9*/
    v19 = &v72[v46]; /*0x4343dd*/
    v23 = v73 == 1; /*0x4343e4*/
    v72 = v19; /*0x4343e5*/
    --v73; /*0x4343e9*/
  }
  while ( !v23 ); /*0x4343ed*/
  return xLeft + v82 + v14[11]; /*0x43414c*/
}



// ==== 0x00434500  FontClass::RenderText  this=BitFont  sig=csp ====
int __thiscall FontClass::RenderText(int *this, unsigned __int16 *a2, int xLeft, int yTop, int a5, int a6)
{
  unsigned __int16 v6; // si
  unsigned __int16 *v8; // edx
  bool v9; // zf
  unsigned __int16 v10; // bx
  int v11; // ecx
  unsigned __int8 v12; // bp
  int v13; // edx
  int v14; // eax
  int result; // eax
  __int16 v16; // [esp+10h] [ebp-10h]
  Color v17; // [esp+14h] [ebp-Ch] BYREF
  int v18; // [esp+18h] [ebp-8h]
  int v19; // [esp+1Ch] [ebp-4h]

  v6 = *a2; /*0x43450a*/
  v8 = a2 + 1; /*0x434510*/
  v9 = *a2 == 0; /*0x434513*/
  v10 = *((_WORD *)this + 18); /*0x434516*/
  v18 = 0; /*0x43451a*/
  ++a2; /*0x434522*/
  if ( v9 ) /*0x434526*/
  {
LABEL_14:
    result = xLeft; /*0x43467b*/
    *((_WORD *)this + 18) = v10; /*0x43467f*/
    return result; /*0x43468a*/
  }
  v11 = a6; /*0x43452c*/
  v19 = a6 - 1; /*0x434533*/
  v12 = 31 * (9 - a6); /*0x434543*/
  while ( !v11 ) /*0x434547*/
  {
LABEL_8:
    if ( v6 != 13 && v6 != 10 ) /*0x434637*/
    {
      v14 = FontClass::RenderGlyph((int)this, v6, xLeft, yTop, -1); /*0x434648*/
      v11 = a6; /*0x43464d*/
      xLeft = v14; /*0x434651*/
    }
    if ( !a5 || (--a5, a5) ) /*0x434662*/
    {
      v6 = *a2; /*0x434668*/
      v8 = a2 + 1; /*0x43466b*/
      v9 = *a2++ == 0; /*0x43466e*/
      if ( !v9 ) /*0x434675*/
        continue; /*0x434675*/
    }
    goto LABEL_14; /*0x434675*/
  }
  if ( v18 < v11 ) /*0x434551*/
  {
    if ( v19 < 8 ) /*0x43455c*/
    {
      LOBYTE(v16) = (unsigned __int8)(v10 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x43458e*/
      HIBYTE(v16) = (unsigned __int8)(v10 >> g_BitMask_Green) << g_BitMask_Blue; /*0x43459b*/
      LOWORD(v17.Color_field_00) = v16; /*0x4345b1*/
      BYTE2(v17.Color_field_00) = (unsigned __int8)(v10 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4345ba*/
      Color::Lerp(&v17, v12, (unsigned __int8 *)&stru_A80220); /*0x4345be*/
      LOWORD(v13) = (unsigned __int8)(BYTE2(v17.Color_field_00) >> g_BitMask_Red); /*0x4345ee*/
      v11 = a6; /*0x43460e*/
      *((_WORD *)this + 18) = ((unsigned __int8)(LOBYTE(v17.Color_field_00) >> g_BitShift_Green_0) << g_BitShift_Red) /*0x434614*/
                            | (v13 << g_BitShift_Blue)
                            | ((unsigned __int8)(BYTE1(v17.Color_field_00) >> g_BitMask_Blue) << g_BitMask_Green);
    }
    v12 += 31; /*0x43461c*/
    ++v18; /*0x434620*/
    --v19; /*0x434629*/
    goto LABEL_8; /*0x434629*/
  }
  *((_WORD *)this + 18) = v10; /*0x434699*/
  Text::Layout((Text *)this, v8, (int *)&a2, 0, 0); /*0x43469d*/
  return (int)a2 + xLeft; /*0x434683*/
}



// ==== 0x004346C0  Font::GetGlyphDataForChar  this=Font  sig=csp ====
int __thiscall Font::GetGlyphDataForChar(Font *this, unsigned __int16 a2)
{
  _DWORD *Font_field_04; // ecx
  int result; // eax
  int v4; // edx

  Font_field_04 = (_DWORD *)this->Font_field_04; /*0x4346c0*/
  result = 0; /*0x4346c3*/
  if ( Font_field_04 ) /*0x4346c7*/
  {
    v4 = *(unsigned __int16 *)(Font_field_04[6] + 2 * a2); /*0x4346da*/
    if ( (_WORD)v4 ) /*0x4346e2*/
      return Font_field_04[7] + (v4 - 1) * Font_field_04[5]; /*0x4346eb*/
  }
  return result; /*0x4346ee*/
}



// ==== 0x00434700  ObjectClass::method  this=ObjectClass  sig=csp ====
_BYTE *__thiscall sub_434700(ObjectClass *this)
{
  _BYTE *result; // eax
  _DWORD *vtable1; // edx
  int v4; // ecx
  _BYTE *v5; // ecx
  _BYTE *v6; // edi
  _DWORD *v7; // edx
  unsigned int v8; // ebp
  unsigned int v9; // ecx

  result = malloc(*((_DWORD *)this->? + 1) * *((_DWORD *)this->? + 2) + 2); /*0x434713*/
  vtable1 = this->?; /*0x434718*/
  this->? = result; /*0x434720*/
  if ( vtable1 ) /*0x434723*/
  {
    v4 = *(unsigned __int16 *)(vtable1[6] + 176); /*0x43472a*/
    if ( (_WORD)v4 ) /*0x434733*/
    {
      v5 = (_BYTE *)(vtable1[7] + (v4 - 1) * vtable1[5]); /*0x43473e*/
      if ( v5 ) /*0x434741*/
      {
        v6 = v5 + 1; /*0x434745*/
        *result = *v5; /*0x434748*/
        v7 = this->?; /*0x43474a*/
        v8 = 0; /*0x434750*/
        for ( result = (char *)this->? + 1; v8 < v7[2]; ++v8 ) /*0x434752*/
        {
          v9 = 0; /*0x43475e*/
          if ( v7[1] ) /*0x43475b*/
          {
            do /*0x434774*/
            {
              *result++ = ~*v6++; /*0x434769*/
              ++v9; /*0x434770*/
            }
            while ( v9 < *((_DWORD *)this->? + 1) ); /*0x434774*/
          }
          v7 = this->?; /*0x434776*/
        }
      }
    }
  }
  return result; /*0x434780*/
}



// ==== 0x00434840  sub_434840  this=-  sig=csp ====
char __stdcall sub_434840(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // edx

  if ( a2[1] > a3[3] || a3[1] > a2[3] || *a2 > a3[2] || *a3 > a2[2] ) /*0x43486d*/
  {
    *a1 = 0; /*0x4348ca*/
    a1[1] = 0; /*0x4348d0*/
    a1[2] = -1; /*0x4348d7*/
    a1[3] = -1; /*0x4348da*/
    return 0; /*0x4348dd*/
  }
  else
  {
    *a1 = *a2; /*0x434878*/
    a1[1] = a2[1]; /*0x43487d*/
    a1[2] = a2[2]; /*0x434883*/
    a1[3] = a2[3]; /*0x43488a*/
    v3 = a3[1]; /*0x43488d*/
    if ( a1[1] < v3 ) /*0x434893*/
      a1[1] = v3; /*0x434895*/
    if ( *a1 < *a3 ) /*0x43489e*/
      *a1 = *a3; /*0x4348a0*/
    v4 = a3[3]; /*0x4348a2*/
    if ( a1[3] > v4 ) /*0x4348aa*/
      a1[3] = v4; /*0x4348ac*/
    v5 = a3[2]; /*0x4348af*/
    if ( a1[2] > v5 ) /*0x4348b7*/
      a1[2] = v5; /*0x4348b9*/
    return 1; /*0x4348bc*/
  }
}



// ==== 0x004348F0  FontRenderer::InitContext  this=FontRenderer  sig=csp ====
int __thiscall FontRenderer::InitContext(FontRenderer *this, int *a2)
{
  int v3; // edx
  int v4; // eax
  int v5; // edx
  int result; // eax
  int v7; // edi
  int v8; // edx
  int v9; // edx
  int v10; // [esp+8h] [ebp-10h] BYREF
  int v11; // [esp+Ch] [ebp-Ch]
  int v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]

  *((_DWORD *)this + 3) = (*(int (__thiscall **)(int *, _DWORD, _DWORD))(*a2 + 92))(a2, 0, 0); /*0x434908*/
  this->q004 = (unsigned int)(*(int (__thiscall **)(int *))(*a2 + 116))(a2) >> 1; /*0x434914*/
  v3 = *a2; /*0x434917*/
  v10 = 0; /*0x43491b*/
  v11 = 0; /*0x434923*/
  v12 = (*(int (__thiscall **)(int *))(v3 + 124))(a2) - 1; /*0x434931*/
  v4 = (*(int (__thiscall **)(int *))(*a2 + 128))(a2); /*0x434937*/
  v5 = *((_DWORD *)this + 13) | *((_DWORD *)this + 15) | *((_DWORD *)this + 14); /*0x43494b*/
  result = v4 - 1; /*0x43494d*/
  v7 = *((_DWORD *)this + 12); /*0x43494e*/
  v13 = result; /*0x434950*/
  if ( v7 | v5 ) /*0x434954*/
  {
    LOBYTE(result) = sub_434840((_DWORD *)this + 12, (_DWORD *)this + 12, &v10); /*0x434980*/
  }
  else
  {
    v8 = v10; /*0x434958*/
    *((_DWORD *)this + 15) = result; /*0x43495c*/
    *((_DWORD *)this + 12) = v8; /*0x43495f*/
    v9 = v12; /*0x434965*/
    *((_DWORD *)this + 13) = v11; /*0x434969*/
    *((_DWORD *)this + 14) = v9; /*0x43496c*/
  }
  return result; /*0x43496f*/
}



// ==== 0x00434990  BufferIO::Cleanup  this=BufferIO  sig=csp ====
int __thiscall BufferIO::Cleanup(BufferIO *this, int a2)
{
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x434999*/
  *((_DWORD *)this + 3) = 0; /*0x43499e*/
  this->q004 = 0; /*0x4349a1*/
  return 0; /*0x4349a4*/
}



// ==== 0x004349B0  FontClass::GetPixelData  this=FontClass  sig=csp ====
int __thiscall FontClass::GetPixelData(FontClass *this, unsigned __int16 a2)
{
  _DWORD *FontClass_field_0x04; // ecx
  int v3; // eax
  unsigned __int8 *v4; // eax

  FontClass_field_0x04 = (_DWORD *)this->FontClass_field_0x04; /*0x4349b0*/
  if ( FontClass_field_0x04 /*0x4349dc*/
    && (v3 = *(unsigned __int16 *)(FontClass_field_0x04[6] + 2 * a2), (_WORD)v3)
    && (v4 = (unsigned __int8 *)(FontClass_field_0x04[7] + (v3 - 1) * FontClass_field_0x04[5])) != 0 )
  {
    return *v4; /*0x4349e2*/
  }
  else
  {
    return 0; /*0x4349e7*/
  }
}



// ==== 0x004349F0  ObjectClass::method_4349F0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_4349F0(ObjectClass *this)
{
  BOOL result; // eax

  this->? = 0; /*0x4349f9*/
  this->? = 0; /*0x4349fc*/
  this->? = 0; /*0x4349ff*/
  this->? = 0; /*0x434a02*/
  this->occupant = 894795775; /*0x434a0f*/
  this->owningHouseIndex = 64; /*0x434a1b*/
  LOBYTE(this->ambientSoundController[1]) = 1; /*0x434a22*/
  BYTE1(this->ambientSoundController[1]) = 1; /*0x434a25*/
  this->? = 1; /*0x434a28*/
  this->? = 1; /*0x434a2b*/
  result = SetRect((LPRECT)&this->nextObject, 0, 0, 0, 0); /*0x434a2e*/
  this->fallRate = 1; /*0x434a34*/
  return result; /*0x434a37*/
}



// ==== 0x00434A40  BufferIOFileClass::Constructor_BitFont  this=BitFont  sig=csp ====
void ***__thiscall BufferIOFileClass::Constructor_BitFont(BufferIOFileClass *this, char a2)
{
  void *FileSize; // eax
  void **FilePointer; // esi

  FileSize = (void *)this->?; /*0x434a43*/
  *(_DWORD *)this->RawFileClass = &BitFont::`vftable'; /*0x434a46*/
  if ( FileSize ) /*0x434a4e*/
    free(FileSize); /*0x434a51*/
  FilePointer = (void **)this->?; /*0x434a5a*/
  if ( FilePointer ) /*0x434a5f*/
  {
    if ( FilePointer[6] ) /*0x434a61*/
      __3_YAXPAX_Z(FilePointer[6]); /*0x434a69*/
    if ( FilePointer[7] ) /*0x434a71*/
      __3_YAXPAX_Z(FilePointer[7]); /*0x434a79*/
    __3_YAXPAX_Z(FilePointer); /*0x434a82*/
  }
  if ( (a2 & 1) != 0 ) /*0x434a91*/
    __3_YAXPAX_Z(this); /*0x434a94*/
  return (void ***)this; /*0x434a9e*/
}



// ==== 0x00434AB0  sub_434AB0  this=-  sig=ida-proto ====
int sub_434AB0()
{
  dword_89C4C0 = 0; /*0x434ab2*/
  dword_89C4C4 = 0; /*0x434ab7*/
  dword_89C4C8 = 0; /*0x434abc*/
  dword_89C4CC = 0; /*0x434ac1*/
  return 0; /*0x434ac6*/
}



// ==== 0x00434AD0  BitTextClass::LoadFont  this=BitTextClass  sig=csp ====
_DWORD *__thiscall BitTextClass::LoadFont(BitTextClass *this)
{
  int v2; // eax

  this->m_FontBitmap = &BitText::`vftable'; /*0x434ad5*/
  v2 = __2_YAPAXI_Z(0x44u); /*0x434adb*/
  if ( v2 ) /*0x434ae5*/
  {
    g_FogOfWarState = (Text *)BitTextClass::ParseFontData(v2, aGameFnt); /*0x434af3*/
    return &this->m_FontBitmap; /*0x434af8*/
  }
  else
  {
    g_FogOfWarState = 0; /*0x434afe*/
    return &this->m_FontBitmap; /*0x434afc*/
  }
}



// ==== 0x00434B40  sub_434B40  this=-  sig=csp ====
int __stdcall sub_434B40(_DWORD *a1, int *a2, unsigned __int16 a3, int xLeft, int yTop)
{
  int v5; // edi

  if ( !a1 ) /*0x434b4c*/
    return xLeft; /*0x434b89*/
  FontRenderer::InitContext(a1, a2); /*0x434b56*/
  Field::Int_Set(a1, xLeft); /*0x434b5e*/
  v5 = FontClass::RenderGlyph((int)a1, a3, xLeft, yTop, -1); /*0x434b7a*/
  BufferIO::Cleanup(a1, (int)a2); /*0x434b7c*/
  return v5; /*0x434b84*/
}



// ==== 0x00434B90  FontRenderer::DrawText  this=FontRenderer  sig=csp ====
int __stdcall FontRenderer::DrawText(_DWORD *a1, int *a2, unsigned __int16 *a3, int xLeft, int yTop, int a6, int a7)
{
  int v7; // edi

  if ( !a1 ) /*0x434b9c*/
    return xLeft; /*0x434be1*/
  FontRenderer::InitContext(a1, a2); /*0x434ba6*/
  Field::Int_Set(a1, xLeft); /*0x434bae*/
  v7 = FontClass::RenderText((int)a1, a3, xLeft, yTop, a6, a7); /*0x434bd2*/
  BufferIO::Cleanup(a1, (int)a2); /*0x434bd4*/
  return v7; /*0x434bdc*/
}



// ==== 0x00434BF0  sub_434BF0  this=-  sig=csp ====
int __stdcall sub_434BF0(int a1, int *a2, unsigned __int16 *a3, int xLeft, int yTop, int a6)
{
  int result; // eax
  int v7; // ebx

  result = 0; /*0x434bf6*/
  if ( a1 ) /*0x434bfb*/
  {
    if ( *(_BYTE *)(a1 + 64) ) /*0x434c01*/
    {
      *(_DWORD *)(a1 + 44) = 2; /*0x434c14*/
      FontRenderer::InitContext((_DWORD *)a1, a2); /*0x434c1b*/
      Field::Int_Set((_DWORD *)a1, xLeft); /*0x434c27*/
      FontClass::RenderText(a1, a3, xLeft, yTop, a6, 0); /*0x434c40*/
      BufferIO::Cleanup((_DWORD *)a1, (int)a2); /*0x434c48*/
      FontRenderer::InitContext((_DWORD *)a1, a2); /*0x434c51*/
      Field::Int_Set((_DWORD *)a1, xLeft + 1); /*0x434c59*/
      v7 = FontClass::RenderText(a1, a3, xLeft + 1, yTop, a6, 0); /*0x434c76*/
      BufferIO::Cleanup((_DWORD *)a1, (int)a2); /*0x434c78*/
      *(_DWORD *)(a1 + 44) = 1; /*0x434c7e*/
    }
    else
    {
      FontRenderer::InitContext((_DWORD *)a1, a2); /*0x434c94*/
      Field::Int_Set((_DWORD *)a1, xLeft); /*0x434ca0*/
      v7 = FontClass::RenderText(a1, a3, xLeft, yTop, a6, 0); /*0x434cc1*/
      BufferIO::Cleanup((_DWORD *)a1, (int)a2); /*0x434cc3*/
    }
    return v7; /*0x434c86*/
  }
  return result; /*0x434c85*/
}



// ==== 0x00434CD0  Font::Print  this=Font  sig=csp ====
int __stdcall Font::Print(int a1, int a2, _WORD *a3, int a4, int yTop, int a6, int a7, char a8, int a9, int a10)
{
  int result; // eax
  int v11; // edi
  unsigned __int16 *v12; // ebp
  __int16 v13; // ax
  int v14; // ebx
  int v15; // esi
  _WORD *v16; // edx
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // edi
  char v21; // bl
  int v22; // eax
  _BYTE *v23; // eax
  _DWORD *v24; // ecx
  int v25; // eax
  unsigned __int8 *GlyphDataForChar; // eax
  int v27; // eax
  _WORD *v28; // ecx
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  int v32; // ebx
  char v33; // di
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  _WORD *v37; // ecx
  int v38; // eax
  int v39; // edx
  int v40; // ebx
  char v41; // di
  int v42; // ecx
  int v43; // eax
  unsigned __int16 v44; // [esp-10h] [ebp-50h]
  unsigned __int16 v45; // [esp-10h] [ebp-50h]
  unsigned __int16 v46; // [esp-10h] [ebp-50h]
  __int16 v47; // [esp+10h] [ebp-30h]
  char v48[4]; // [esp+14h] [ebp-2Ch] BYREF
  int v49; // [esp+18h] [ebp-28h]
  int xLeft; // [esp+1Ch] [ebp-24h]
  int v51; // [esp+20h] [ebp-20h]
  _WORD *v52; // [esp+24h] [ebp-1Ch]
  _WORD *v53; // [esp+28h] [ebp-18h]
  int v54; // [esp+2Ch] [ebp-14h]
  __int16 v55; // [esp+30h] [ebp-10h] BYREF
  unsigned __int8 v56; // [esp+32h] [ebp-Eh]
  __int16 v57; // [esp+38h] [ebp-8h] BYREF
  unsigned __int8 v58; // [esp+3Ah] [ebp-6h]
  __int16 v59; // [esp+58h] [ebp+18h]

  v11 = 0; /*0x434cdb*/
  if ( a1 && (v12 = a3) != 0 ) /*0x434ceb*/
  {
    FontRenderer::InitContext((_DWORD *)a1, (int *)a2); /*0x434cf8*/
    Field::Int_Set((_DWORD *)a1, a4); /*0x434d04*/
    v13 = 0; /*0x434d0f*/
    v14 = 0; /*0x434d11*/
    v15 = *(unsigned __int16 *)(a1 + 36); /*0x434d13*/
    HIWORD(v16) = HIWORD(a3); /*0x434d17*/
    v17 = 0; /*0x434d19*/
    v51 = 0; /*0x434d1b*/
    LOWORD(v16) = *a3; /*0x434d1f*/
    v54 = 0; /*0x434d22*/
    v52 = 0; /*0x434d29*/
    v49 = 0; /*0x434d2d*/
    v53 = v16; /*0x434d31*/
    if ( (_WORD)v16 ) /*0x434d35*/
    {
LABEL_4:
      switch ( (__int16)v53 ) /*0x434d59*/
      {
        case 9: /*0x434d59*/
          v11 = *(_DWORD *)(a1 + 40) + v11 - (*(_DWORD *)(a1 + 40) + v11) % *(_DWORD *)(a1 + 40); /*0x434ef7*/
          goto LABEL_55; /*0x434ef9*/
        case 10: /*0x434d59*/
        case 13: /*0x434d59*/
          if ( v13 == 13 ) /*0x434d64*/
            goto LABEL_23; /*0x434d64*/
          v18 = 0; /*0x434d6e*/
          if ( a6 > v11 ) /*0x434d72*/
          {
            if ( (a8 & 1) != 0 ) /*0x434d7b*/
            {
              v18 = (a6 - v11) / 2; /*0x434d84*/
            }
            else if ( (a8 & 2) != 0 ) /*0x434d8b*/
            {
              v18 = a6 - v11; /*0x434d8f*/
            }
          }
          xLeft = a4 + v18; /*0x434d97*/
          if ( v12 >= a3 ) /*0x434da1*/
            goto LABEL_20; /*0x434da1*/
          v19 = a9; /*0x434da7*/
          v20 = a9 - v49 - 1; /*0x434db7*/
          v21 = v49 - a9 + a10 + 1; /*0x434dba*/
          while ( 2 ) /*0x434dc4*/
          {
            ++v21; /*0x434dc4*/
            --v20; /*0x434dca*/
            ++v49; /*0x434dcb*/
            v22 = v15; /*0x434dd1*/
            if ( !v19 ) /*0x434dd3*/
              goto LABEL_18; /*0x434dd3*/
            if ( v49 >= v19 ) /*0x434ddd*/
              goto LABEL_73; /*0x434ddd*/
            if ( v20 < a10 ) /*0x434de7*/
            {
              v23 = Palette::SixBitTo16Bit( /*0x434e2e*/
                      v48,
                      (unsigned __int8)((unsigned __int16)v15 >> g_BitShift_Red) << g_BitShift_Green_0,
                      (unsigned __int8)((unsigned __int16)v15 >> g_BitMask_Green) << g_BitMask_Blue,
                      (unsigned __int8)((unsigned __int16)v15 >> g_BitShift_Blue) << g_BitMask_Red);
              v55 = *(_WORD *)v23; /*0x434e3b*/
              v56 = v23[2]; /*0x434e4c*/
              Color::Lerp((unsigned __int8 *)&v55, v21 * (255 / a10), (unsigned __int8 *)&stru_A80220); /*0x434e59*/
              v22 = PackRGB565((unsigned __int8)v55, HIBYTE(v55), v56); /*0x434e7c*/
            }
LABEL_18:
            if ( v22 == -1 ) /*0x434e84*/
              goto LABEL_73; /*0x434e84*/
            v44 = *v12++; /*0x434e99*/
            xLeft = FontClass::RenderGlyph(a1, v44, xLeft, yTop, v22); /*0x434ea6*/
            if ( v12 < a3 ) /*0x434eb0*/
            {
              v19 = a9; /*0x434dc0*/
              continue; /*0x434dc0*/
            }
            break;
          }
LABEL_20:
          v24 = (_DWORD *)a1; /*0x434eb6*/
          v11 = 0; /*0x434ebe*/
          v14 = 0; /*0x434ec0*/
          v25 = *(_DWORD *)(a1 + 28); /*0x434ec2*/
          v51 += v25; /*0x434ec7*/
          if ( a7 && v51 >= a7 ) /*0x434ed7*/
            goto LABEL_57; /*0x434ed7*/
          yTop += v25; /*0x434edd*/
LABEL_23:
          ++v12; /*0x434ee1*/
          goto LABEL_55; /*0x434ee4*/
        case 32: /*0x434d59*/
          v54 = v11; /*0x434f02*/
          v52 = a3; /*0x434f06*/
          goto LABEL_26; /*0x434f06*/
        default:
LABEL_26:
          GlyphDataForChar = (unsigned __int8 *)Font::GetGlyphDataForChar((_DWORD *)a1, (unsigned __int16)v53); /*0x434f0a*/
          if ( !GlyphDataForChar ) /*0x434f1a*/
          {
            GlyphDataForChar = (unsigned __int8 *)Font::GetGlyphDataForChar((_DWORD *)a1, 0x3Fu); /*0x434f22*/
            if ( !GlyphDataForChar ) /*0x434f29*/
              goto LABEL_55; /*0x434f29*/
          }
          ++v14; /*0x434f37*/
          v27 = *GlyphDataForChar + *(_DWORD *)(a1 + 44); /*0x434f3b*/
          v11 += v27; /*0x434f41*/
          if ( !a6 || v11 <= a6 ) /*0x434f4d*/
            goto LABEL_55; /*0x434f4d*/
          v28 = v52; /*0x434f53*/
          if ( v52 ) /*0x434f59*/
          {
            if ( v14 > 1 ) /*0x434f5e*/
            {
              v11 = v54; /*0x434f60*/
              a3 = v52; /*0x434f64*/
            }
          }
          else if ( v14 > 1 ) /*0x434f6d*/
          {
            v11 -= v27; /*0x434f6f*/
            --a3; /*0x434f78*/
          }
          v29 = 0; /*0x434f80*/
          if ( a6 > v11 ) /*0x434f84*/
          {
            if ( (a8 & 1) != 0 ) /*0x434f8d*/
            {
              v29 = (a6 - v11) / 2; /*0x434f96*/
            }
            else if ( (a8 & 2) != 0 ) /*0x434f9d*/
            {
              v29 = a6 - v11; /*0x434fa1*/
            }
          }
          xLeft = a4 + v29; /*0x434fa9*/
          if ( v12 >= a3 ) /*0x434fb3*/
            goto LABEL_50; /*0x434fb3*/
          v30 = a9; /*0x434fb9*/
          v31 = v49; /*0x434fbd*/
          v32 = a9 - v49 - 1; /*0x434fcb*/
          v33 = v49 - a9 + a10 + 1; /*0x434fce*/
          break; /*0x434fd2*/
      }
      while ( 1 ) /*0x434fdc*/
      {
        v34 = v31 + 1; /*0x434fdc*/
        ++v33; /*0x434fdd*/
        --v32; /*0x434fde*/
        v49 = v34; /*0x434fdf*/
        v35 = v15; /*0x434fe5*/
        if ( v30 ) /*0x434fe7*/
        {
          if ( v34 >= v30 ) /*0x434fef*/
            break; /*0x434fef*/
          if ( v32 < a10 ) /*0x434ff9*/
          {
            LOBYTE(v47) = (unsigned __int8)((unsigned __int16)v15 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x435028*/
            HIBYTE(v47) = (unsigned __int8)((unsigned __int16)v15 >> g_BitMask_Green) << g_BitMask_Blue; /*0x435035*/
            v57 = v47; /*0x43504b*/
            v58 = (unsigned __int8)((unsigned __int16)v15 >> g_BitShift_Blue) << g_BitMask_Red; /*0x435054*/
            Color::Lerp((unsigned __int8 *)&v57, v33 * (255 / a10), (unsigned __int8 *)&stru_A80220); /*0x435066*/
            v35 = ((unsigned __int8)v57 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4350ba*/
                | (v58 >> g_BitMask_Red << g_BitShift_Blue)
                | (HIBYTE(v57) >> g_BitMask_Blue << g_BitMask_Green);
          }
        }
        if ( v35 == -1 ) /*0x4350bf*/
          break; /*0x4350bf*/
        v45 = *v12++; /*0x4350d4*/
        xLeft = FontClass::RenderGlyph(a1, v45, xLeft, yTop, v35); /*0x4350e1*/
        if ( v12 >= a3 ) /*0x4350eb*/
        {
          v28 = v52; /*0x4350f1*/
LABEL_50:
          if ( a3 == v28 ) /*0x4350f9*/
          {
            v52 = 0; /*0x4350fb*/
            ++v12; /*0x435103*/
          }
          v24 = (_DWORD *)a1; /*0x435106*/
          v11 = 0; /*0x43510e*/
          v14 = 0; /*0x435110*/
          v36 = *(_DWORD *)(a1 + 28); /*0x435112*/
          v51 += v36; /*0x435117*/
          if ( a7 && v51 >= a7 ) /*0x435127*/
          {
LABEL_57:
            result = BufferIO::Cleanup(v24, a2); /*0x43514d*/
            LOBYTE(result) = 1; /*0x43515a*/
            return result; /*0x435160*/
          }
          yTop += v36; /*0x435129*/
LABEL_55:
          v13 = (__int16)v53; /*0x43512d*/
          v37 = a3 + 1; /*0x435135*/
          a3 = v37; /*0x435138*/
          LOWORD(v37) = *v37; /*0x43513c*/
          v53 = v37; /*0x435142*/
          if ( !(_WORD)v37 ) /*0x435146*/
          {
            v17 = v49; /*0x435163*/
            goto LABEL_59; /*0x435163*/
          }
          goto LABEL_4; /*0x435146*/
        }
        v30 = a9; /*0x434fd4*/
        v31 = v49; /*0x434fd8*/
      }
    }
    else
    {
LABEL_59:
      v38 = 0; /*0x435167*/
      if ( a6 > v11 ) /*0x43516f*/
      {
        if ( (a8 & 1) != 0 ) /*0x435178*/
        {
          v38 = (a6 - v11) / 2; /*0x435181*/
        }
        else if ( (a8 & 2) != 0 ) /*0x435188*/
        {
          v38 = a6 - v11; /*0x43518c*/
        }
      }
      xLeft = a4 + v38; /*0x435194*/
      if ( v12 < a3 ) /*0x43519e*/
      {
        v39 = a9; /*0x4351a4*/
        v40 = a9 - v17 - 1; /*0x4351b2*/
        v41 = v17 - a9 + a10 + 1; /*0x4351b5*/
        while ( 1 ) /*0x4351b9*/
        {
          v42 = v17 + 1; /*0x4351b9*/
          ++v41; /*0x4351ba*/
          --v40; /*0x4351bb*/
          v49 = v42; /*0x4351bc*/
          v43 = v15; /*0x4351c2*/
          if ( v39 ) /*0x4351c4*/
          {
            if ( v42 >= v39 ) /*0x4351cc*/
              break; /*0x4351cc*/
            if ( v40 < a10 ) /*0x4351d6*/
            {
              LOBYTE(v59) = (unsigned __int8)((unsigned __int16)v15 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x435205*/
              HIBYTE(v59) = (unsigned __int8)((unsigned __int16)v15 >> g_BitMask_Green) << g_BitMask_Blue; /*0x435212*/
              v57 = v59; /*0x435228*/
              v58 = (unsigned __int8)((unsigned __int16)v15 >> g_BitShift_Blue) << g_BitMask_Red; /*0x435231*/
              Color::Lerp((unsigned __int8 *)&v57, v41 * (255 / a10), (unsigned __int8 *)&stru_A80220); /*0x435243*/
              v43 = ((unsigned __int8)v57 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x435297*/
                  | (v58 >> g_BitMask_Red << g_BitShift_Blue)
                  | (HIBYTE(v57) >> g_BitMask_Blue << g_BitMask_Green);
            }
          }
          if ( v43 == -1 ) /*0x43529c*/
            break; /*0x43529c*/
          v46 = *v12++; /*0x4352ad*/
          xLeft = FontClass::RenderGlyph(a1, v46, xLeft, yTop, v43); /*0x4352ba*/
          if ( v12 >= a3 ) /*0x4352c4*/
            break; /*0x4352c4*/
          v17 = v49; /*0x4352c6*/
          v39 = a9; /*0x4352ca*/
        }
      }
    }
LABEL_73:
    result = BufferIO::Cleanup((_DWORD *)a1, a2); /*0x4352ed*/
    LOBYTE(result) = 1; /*0x4352fe*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x43530a*/
  }
  return result; /*0x435157*/
}



// ==== 0x00435340  sub_435340  this=-  sig=csp ====
char __stdcall sub_435340(int a1, int a2, _WORD *a3, int a4, int yTop, int a6, int a7, char a8, int a9, int a10)
{
  __int16 v11; // bp

  if ( !a1 ) /*0x43534a*/
    return 0; /*0x43534d*/
  Field::Int_Set((_DWORD *)a1, a4); /*0x43535c*/
  v11 = Property::Set((_WORD *)a1, *(_WORD *)(a1 + 38)); /*0x435375*/
  Font::Print(a1, a2, a3, a4 + 1, yTop + 1, a6, a7, a8, a9, a10); /*0x43539f*/
  Property::Set((_WORD *)a1, v11); /*0x4353a7*/
  return Font::Print(a1, a2, a3, a4, yTop, a6, a7, a8, a9, a10); /*0x43534c*/
}



// ==== 0x004353F0  sub_4353F0  this=-  sig=csp ====
char __stdcall sub_4353F0(int a1, int a2, _WORD *a3, int a4, int yTop, int a6, int a7, char a8, int a9, int a10)
{
  char result; // al

  if ( !a1 ) /*0x4353fa*/
    return 0; /*0x4353fd*/
  Field::Int_Set((_DWORD *)a1, a4); /*0x43540b*/
  if ( !*(_BYTE *)(a1 + 64) ) /*0x435410*/
    return Font::Print(a1, a2, a3, a4, yTop, a6, a7, a8, a9, a10); /*0x4354b8*/
  *(_DWORD *)(a1 + 44) = 2; /*0x435428*/
  Font::Print(a1, a2, a3, a4, yTop, a6, a7, a8, a9, a10); /*0x43544b*/
  result = Font::Print(a1, a2, a3, a4 + 1, yTop, a6, a7, a8, a9, a10); /*0x435479*/
  *(_DWORD *)(a1 + 44) = 1; /*0x43547f*/
  return result; /*0x4353fc*/
}



// ==== 0x00435560  BufferIOFileClass::Constructor_BitText  this=BitTextClass  sig=csp ====
_DWORD *__thiscall BufferIOFileClass::Constructor_BitText(BufferIOFileClass *this, char a2)
{
  Text *v3; // esi

  *(_DWORD *)this->RawFileClass = &BitText::`vftable'; /*0x435564*/
  v3 = g_FogOfWarState; /*0x43556a*/
  if ( g_FogOfWarState ) /*0x435572*/
    (*(void (__thiscall **)(Text *, int))g_FogOfWarState->Text_field_00)(g_FogOfWarState, 1); /*0x43557a*/
  if ( v3 == g_FogOfWarState ) /*0x435582*/
    g_FogOfWarState = 0; /*0x435584*/
  if ( (a2 & 1) != 0 ) /*0x435593*/
    __3_YAXPAX_Z(this); /*0x435596*/
  return this->RawFileClass; /*0x4355a0*/
}



// ==== 0x004355B0  Palette::6BitTo16Bit  this=Palette  sig=csp ====
_BYTE *__thiscall Palette::SixBitTo16Bit(Palette *this, char a2, char a3, char a4)
{
  this->m_Colors[0] = a2; /*0x4355ba*/
  this->m_Colors[1] = a3; /*0x4355c0*/
  this->m_Colors[2] = a4; /*0x4355c3*/
  return this->m_Colors; /*0x4355c6*/
}



// ==== 0x004355D0  PackRGB565  this=-  sig=csp ====
int __fastcall PackRGB565(int a1, int a2, int a3)
{
  return (a1 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x43560b*/
       | (a2 >> g_BitMask_Blue << g_BitMask_Green)
       | (a3 >> g_BitMask_Red << g_BitShift_Blue);
}



// ==== 0x00435610  sub_435610  this=-  sig=ida-proto ====
void sub_435610()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x43561c*/
  dbl_89C4F8 = Math::Sqrt(v0 + v0); /*0x43562e*/
}



// ==== 0x00435640  sub_435640  this=-  sig=ida-proto ====
void sub_435640()
{
  dbl_89C548 = dbl_89C4F8 / 60.0; /*0x43564c*/
}



// ==== 0x00435660  sub_435660  this=-  sig=ida-proto ====
void sub_435660()
{
  dbl_89C530 = 1.0 / dbl_89C548; /*0x43566c*/
}



// ==== 0x00435680  sub_435680  this=-  sig=ida-proto ====
void sub_435680()
{
  dbl_89C528 = 0.0174532925199433 * 45.0; /*0x43568c*/
}



// ==== 0x004356A0  sub_4356A0  this=-  sig=ida-proto ====
void sub_4356A0()
{
  dbl_89C500 = 0.0174532925199433 * 60.0; /*0x4356ac*/
}



// ==== 0x004356C0  sub_4356C0  this=-  sig=ida-proto ====
void sub_4356C0()
{
  dbl_89C4D8 = 0.0174532925199433 * 90.0; /*0x4356cc*/
}



// ==== 0x004356E0  sub_4356E0  this=-  sig=ida-proto ====
__int64 sub_4356E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89C4D8 - dbl_89C500); /*0x4356f2*/
  result = Math::RoundToInt(v0 * dbl_89C4F8 * 0.5); /*0x435706*/
  dword_89C550 = result; /*0x43570b*/
  return result; /*0x435710*/
}



// ==== 0x00435720  sub_435720  this=-  sig=ida-proto ====
void sub_435720()
{
  dbl_89C508 = Math::ArcTan((double)dword_89C550 * 0.00390625); /*0x435737*/
}



// ==== 0x00435750  sub_435750  this=-  sig=ida-proto ====
void sub_435750()
{
  dbl_89C520 = Math::ArcTan((double)(2 * dword_89C550) / dbl_89C4F8); /*0x435772*/
}



// ==== 0x00435780  sub_435780  this=-  sig=ida-proto ====
__int64 sub_435780()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C550) + 0.5); /*0x43579b*/
  dword_89C544 = result; /*0x4357a0*/
  return result; /*0x4357a6*/
}



// ==== 0x004357B0  sub_4357B0  this=-  sig=ida-proto ====
int sub_4357B0()
{
  dword_89C4F0 = 0; /*0x4357b2*/
  return 0; /*0x4357be*/
}



// ==== 0x004357C0  sub_4357C0  this=-  sig=ida-proto ====
int sub_4357C0()
{
  dword_89C510 = 0; /*0x4357c2*/
  dword_89C514 = 0; /*0x4357c7*/
  dword_89C518 = 0; /*0x4357cc*/
  return 0; /*0x4357d1*/
}



// ==== 0x004357E0  sub_4357E0  this=-  sig=ida-proto ====
int sub_4357E0()
{
  dword_89C540 = 0; /*0x4357e5*/
  dword_89C538 = 128; /*0x4357ef*/
  dword_89C53C = 128; /*0x4357f4*/
  return 128; /*0x4357f9*/
}



// ==== 0x00435800  sub_435800  this=-  sig=ida-proto ====
int sub_435800()
{
  dword_89C4E0 = 0; /*0x435802*/
  dword_89C4E4 = 0; /*0x435807*/
  dword_89C4E8 = 0; /*0x43580c*/
  dword_89C4EC = 0; /*0x435811*/
  return 0; /*0x435816*/
}



// ==== 0x00435820  BuildingLightClass::CTOR  this=BuildingLightClass  sig=csp ====
int *__userpurge BuildingLightClass::CTOR@<eax>(BuildingLightClass *this, double a2@<st0>, int a3)
{
  ObjectClass *v3; // ecx
  ObjectClass *v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int *v9; // eax
  int v10; // ecx
  void *v11; // edx
  int v12; // ecx
  int v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  void **v17; // eax
  int v18; // edx
  void (__thiscall **vtable0)(ObjectClass *, int *); // eax
  int v20; // eax
  ObjectClass **v21; // edx
  bool v22; // zf
  signed int v23; // eax
  int v25; // [esp-8h] [ebp-68h]
  int v26; // [esp-8h] [ebp-68h]
  int v27; // [esp-4h] [ebp-64h]
  int v28; // [esp+10h] [ebp-50h]
  double v29; // [esp+10h] [ebp-50h]
  int v30; // [esp+18h] [ebp-48h]
  double v31; // [esp+18h] [ebp-48h]
  int v33; // [esp+20h] [ebp-40h]
  double v34; // [esp+20h] [ebp-40h]
  _DWORD v35[2]; // [esp+28h] [ebp-38h] BYREF
  int v37; // [esp+3Ch] [ebp-24h]
  int v38; // [esp+40h] [ebp-20h]
  int v39; // [esp+44h] [ebp-1Ch]
  int v40; // [esp+48h] [ebp-18h] BYREF
  int v41; // [esp+4Ch] [ebp-14h]
  int v42; // [esp+50h] [ebp-10h]
  Coord3D v43; // [esp+54h] [ebp-Ch] BYREF

  v4 = v3; /*0x43582c*/
  ObjectClass::ctor(v3); /*0x43582e*/
  v4[1].? = 0; /*0x43583b*/
  v4[1].? = 0; /*0x435841*/
  v4[1].? = (void *)dword_89C510; /*0x43584f*/
  v4[1].? = dword_89C514; /*0x435857*/
  v4[1].? = dword_89C518; /*0x435860*/
  v4[1].? = dword_89C510; /*0x43586f*/
  v4[1].? = dword_89C514; /*0x43587b*/
  v5 = dword_89C518; /*0x43587e*/
  v4[1].occupant = 0; /*0x435884*/
  v4[1].owningHouseIndex = 0; /*0x43588a*/
  v4[1].? = (void *)v5; /*0x435890*/
  LOBYTE(v4[1].fallRate) = 0; /*0x435896*/
  v4[1].nextObject = 0; /*0x43589d*/
  v4[1].attachedTag = 0; /*0x4358a3*/
  v4[1].attachedBomb = (BombClass *)this; /*0x4358a9*/
  v4->AbstractClass = &BuildingLightClass::`vftable'; /*0x4358af*/
  v4->? = &BuildingLightClass::`vftable'; /*0x4358b5*/
  v4->? = &BuildingLightClass::`vftable'; /*0x4358bc*/
  v4->? = &BuildingLightClass::`vftable'; /*0x4358c3*/
  if ( FootClass_Array.?[2] < FootClass_Array.?[0] /*0x435900*/
    || (BYTE1(FootClass_Array.?[1]) || !FootClass_Array.?[0])
    && FootClass_Array.?[3] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&FootClass_Array.? + 8))(
         &FootClass_Array.?,
         FootClass_Array.?[0] + FootClass_Array.?[3],
         0) )
  {
    v6 = FootClass_Array.?[2]++; /*0x43590d*/
    *(_DWORD *)(*(_DWORD *)&FootClass_Array.? + 4 * v6) = v4; /*0x43591c*/
  }
  if ( this ) /*0x435924*/
  {
    v37 = this->?[0]; /*0x435934*/
    v38 = this->?[1]; /*0x435940*/
    v30 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1932); /*0x43594d*/
    v39 = this->?[2]; /*0x435951*/
    v28 = *(__int16 *)ProgressTimer::GetValue((ProgressTimer *)((char *)this + 904), &v35[1]) - 0x3FFF; /*0x435979*/
    v27 = v39; /*0x43597d*/
    __asm /*0x43597e*/
    {
      fild dword ptr [esp+64h+var_50]
      fmul ds:dbl_7E2810
      fstp [esp+64h+var_50]
      fild dword ptr [esp+64h+var_48]
    }
    __asm
    {
      fstp [esp+6Ch+var_48]
      fild [esp+6Ch+var_20]
      fstp [esp+6Ch+var_30]
    }
    Math::SinCos(v29); /*0x4359a6*/
    __asm { fmul [esp+6Ch+var_48] } /*0x4359ab*/
    __asm { fsubr [esp+64h+var_30] }
    LOWORD(v7) = Math::RoundToInt(a2); /*0x4359b6*/
    v25 = v7; /*0x4359bf*/
    Math::ArcTan2(v29); /*0x4359c6*/
    __asm { fmul [esp+70h+var_48] } /*0x4359cb*/
    __asm { fiadd [esp+68h+var_24] }
    LOWORD(v8) = Math::RoundToInt(a2); /*0x4359d6*/
    v9 = Coord3D::Set(&v43, v8, v25, v27); /*0x4359e0*/
    v40 = *v9; /*0x4359e9*/
    v41 = v9[1]; /*0x4359f0*/
    v10 = v41; /*0x4359ed*/
    v11 = (void *)v9[2]; /*0x4359f4*/
    v4[1].? = v40; /*0x4359f7*/
    v4[1].? = v10; /*0x4359fd*/
    v42 = (int)v11; /*0x435a03*/
    v4[1].? = v11; /*0x435a07*/
    v12 = this->?[1]; /*0x435a0f*/
    v13 = this->?[2]; /*0x435a18*/
    v37 = this->?[0]; /*0x435a1b*/
    v14 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1928); /*0x435a1f*/
    v38 = v12; /*0x435a25*/
    LODWORD(v31) = -v14; /*0x435a34*/
    v33 = *(__int16 *)ProgressTimer::GetValue((ProgressTimer *)((char *)this + 904), &v35[1]) - 0x3FFF; /*0x435a46*/
    __asm /*0x435a4a*/
    {
      fild [esp+60h+var_40]
      fmul ds:dbl_7E2810
      fstp qword ptr [esp+60h+var_40]
      fild dword ptr [esp+60h+var_48]
    }
    __asm
    {
      fstp [esp+64h+var_48]
      fild [esp+64h+var_20]
    }
    __asm { fstp [esp+6Ch+var_30] }
    Math::SinCos(v34); /*0x435a73*/
    __asm { fmul [esp+6Ch+var_48] } /*0x435a78*/
    __asm { fsubr [esp+64h+var_30] }
    LOWORD(v15) = Math::RoundToInt(a2); /*0x435a83*/
    v26 = v15; /*0x435a8c*/
    Math::ArcTan2(v34); /*0x435a8f*/
    __asm { fmul [esp+70h+var_48] } /*0x435a94*/
    __asm { fiadd [esp+68h+var_24] }
    LOWORD(v16) = Math::RoundToInt(a2); /*0x435a9f*/
    v17 = (void **)Coord3D::Set(&v43, v16, v26, v13); /*0x435aa9*/
    v4[1].? = *v17; /*0x435ab0*/
    v4[1].? = (int)v17[1]; /*0x435ab5*/
    v18 = (int)v17[2]; /*0x435abc*/
    vtable0 = (void (__thiscall **)(ObjectClass *, int *))v4->AbstractClass; /*0x435abf*/
    v4[1].? = v18; /*0x435ac4*/
    vtable0[109](v4, &v40); /*0x435ac7*/
    v40 = v4->location[0]; /*0x435ad7*/
    v41 = v4->location[1]; /*0x435ae3*/
    v42 = v4->location[2]; /*0x435aec*/
    if ( (unsigned __int8)ObjectClass::Deploy(v4) ) /*0x435af0*/
      ObjectClass::SetDeployState((LogicClass *)v4, 0); /*0x435b01*/
    BuildingLightClass::FindTarget((BuildingLightClass *)v4, (_DWORD *)1); /*0x435b0a*/
    v20 = 0; /*0x435b15*/
    if ( FootClass_Array.?[2] <= 0 ) /*0x435b19*/
    {
LABEL_14:
      v20 = -1; /*0x435b2d*/
    }
    else
    {
      v21 = *(ObjectClass ***)&FootClass_Array.?; /*0x435b1b*/
      while ( *v21 != v4 ) /*0x435b23*/
      {
        ++v20; /*0x435b25*/
        ++v21; /*0x435b26*/
        if ( v20 >= FootClass_Array.?[2] ) /*0x435b2b*/
          goto LABEL_14; /*0x435b2b*/
      }
    }
    v23 = v20 & 0x80000001; /*0x435b30*/
    v22 = v23 == 0; /*0x435b30*/
    if ( v23 < 0 ) /*0x435b35*/
      v22 = (((_BYTE)v23 - 1) | 0xFFFFFFFE) == -1; /*0x435b3b*/
    LOBYTE(v4[1].fallRate) = !v22; /*0x435b3f*/
  }
  return (int *)v4; /*0x435b47*/
}



// ==== 0x00435BE0  BuildingLightClass::Draw_Start  this=BuildingLightClass  sig=csp ====
char __thiscall BuildingLightClass::Draw_Start(BuildingLightClass *this, int a2, int a3)
{
  double v3; // st7
  __m64 v4; // mm0
  int BehaviourMode; // eax
  ObjectClass *FollowingObject; // ecx
  ObjectClass *v8; // edi
  ObjectClass *v9; // eax
  _DWORD *v10; // edi
  Vector3 *v11; // eax
  int v13; // eax
  int v14; // ebp
  _DWORD *v15; // edi
  Vector3 *v16; // eax
  int *v17; // eax
  int v18; // ebx
  int v19; // edi
  int v20; // eax
  BuildingLightQueue *v21; // edi
  int *location; // edi
  int v23; // ebp
  ObjectClass *v24; // ecx
  int (__thiscall **vtable0)(ObjectClass *, int *); // eax
  int *v26; // eax
  int v27; // ebx
  int (__thiscall **v28)(BuildingLightClass *, double *); // eax
  _DWORD *v29; // eax
  int *v30; // eax
  int v31; // eax
  int *v32; // eax
  int v33; // edx
  int v34; // eax
  int v35; // ebp
  int v36; // eax
  int v37; // esi
  int v38; // eax
  int *v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // esi
  int v43; // eax
  int v44; // ebp
  int v45; // eax
  int v46; // esi
  int v47; // eax
  int v48; // esi
  int v49; // ecx
  int v50; // edi
  int v51; // ebx
  int v52; // ebp
  int v53; // eax
  int v54; // ebp
  int v55; // eax
  double v57; // [esp+18h] [ebp-DCh]
  double v58; // [esp+18h] [ebp-DCh]
  float v59; // [esp+1Ch] [ebp-D8h]
  float v60; // [esp+1Ch] [ebp-D8h]
  BuildingLight *v61; // [esp+20h] [ebp-D4h]
  int v62; // [esp+30h] [ebp-C4h]
  int v63; // [esp+30h] [ebp-C4h]
  int v64; // [esp+30h] [ebp-C4h]
  int v65; // [esp+30h] [ebp-C4h]
  int v66; // [esp+30h] [ebp-C4h]
  BuildingLightQueue *Block; // [esp+34h] [ebp-C0h]
  void *Blocka; // [esp+34h] [ebp-C0h]
  int v71; // [esp+38h] [ebp-BCh] BYREF
  int v72; // [esp+3Ch] [ebp-B8h]
  int v73; // [esp+40h] [ebp-B4h]
  int v74; // [esp+44h] [ebp-B0h]
  int v75; // [esp+48h] [ebp-ACh] BYREF
  int v76; // [esp+4Ch] [ebp-A8h]
  int v77; // [esp+50h] [ebp-A4h]
  int v78; // [esp+54h] [ebp-A0h] BYREF
  int v79; // [esp+58h] [ebp-9Ch]
  int v80; // [esp+5Ch] [ebp-98h]
  int v81; // [esp+60h] [ebp-94h] BYREF
  int v82; // [esp+64h] [ebp-90h]
  int v83; // [esp+68h] [ebp-8Ch] BYREF
  float v84; // [esp+6Ch] [ebp-88h]
  int v85; // [esp+70h] [ebp-84h] BYREF
  float v86; // [esp+74h] [ebp-80h]
  int v88[2]; // [esp+7Ch] [ebp-78h] BYREF
  float v89[3]; // [esp+84h] [ebp-70h] BYREF
  double v90; // [esp+90h] [ebp-64h] BYREF
  _DWORD v91[3]; // [esp+9Ch] [ebp-58h] BYREF
  _DWORD v92[3]; // [esp+A8h] [ebp-4Ch] BYREF
  float v93[4]; // [esp+B4h] [ebp-40h] BYREF
  Matrix3x4 v94; // [esp+C4h] [ebp-30h] BYREF

  BehaviourMode = this->BehaviourMode; /*0x435bec*/
  if ( BehaviourMode )
  {
    FollowingObject = this->FollowingObject; /*0x435bfa*/
    if ( FollowingObject )
    {
      BehaviourMode = (*((int (__thiscall **)(ObjectClass *))FollowingObject->AbstractClass + 11))(FollowingObject); /*0x435c0a*/
      if ( BehaviourMode == 6 )
      {
        v8 = this->FollowingObject; /*0x435c16*/
        if ( v8 )
        {
          LOBYTE(BehaviourMode) = v8->isAliveFlag; /*0x435c24*/
          if ( (_BYTE)BehaviourMode )
          {
            LOBYTE(BehaviourMode) = (*((int (__thiscall **)(ObjectClass *))v8->AbstractClass + 212))(this->FollowingObject); /*0x435c36*/
            if ( (_BYTE)BehaviourMode )
            {
              LOBYTE(BehaviourMode) = HIBYTE(v8[10].fallRate); /*0x435c44*/
              if ( !(_BYTE)BehaviourMode )
              {
                if ( ((int)dword_A8B230->vtable0 & 0x1000) == 0
                  || (v71 = this->?[0],
                      v72 = this->?[1],
                      v73 = this->?[2],
                      LOBYTE(BehaviourMode) = Game::Stub3((int)&v71),
                      !(_BYTE)BehaviourMode) )
                {
                  v9 = (ObjectClass *)__2_YAPAXI_Z(0x18u); /*0x435c95*/
                  if ( v9 ) /*0x435c9f*/
                    Block = (BuildingLightQueue *)ObjectClass::RegisterInArray( /*0x435cc5*/
                                                    v9,
                                                    this->?[0],
                                                    this->?[1],
                                                    this->?[2],
                                                    16);
                  else
                    Block = 0; /*0x435ccb*/
                  v10 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, int *))this->FollowingObject->AbstractClass + 18))( /*0x435ce5*/
                                    this->FollowingObject,
                                    &v78);
                  v11 = (Vector3 *)(*((int (__thiscall **)(BuildingLightClass *, int *))this->ObjectClass + 18))( /*0x435cee*/
                                     this,
                                     &v71);
                  _EAX = Vector3::Subtract(v11, &v75, v10); /*0x435cf9*/
                  __asm /*0x435cfe*/
                  {
                    fild dword ptr [eax+8]
                    fild dword ptr [eax+4]
                    fild dword ptr [eax]
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
                    fstp qword ptr [esp+0DCh+var_DC]; double
                    fstp st
                    fstp st
                    fstp st
                  }
                  Math::Sqrt(v57); /*0x435d22*/
                  LOWORD(v13) = Math::RoundToInt(v3); /*0x435d2a*/
                  v14 = v13; /*0x435d35*/
                  v15 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, int *))this->FollowingObject->AbstractClass + 18))( /*0x435d43*/
                                    this->FollowingObject,
                                    &v78);
                  v16 = (Vector3 *)(*((int (__thiscall **)(BuildingLightClass *, int *))this->ObjectClass + 18))( /*0x435d4c*/
                                     this,
                                     &v71);
                  v17 = Vector3::Subtract(v16, &v75, v15); /*0x435d57*/
                  v18 = Coord::Length((Coord *)v17); /*0x435d63*/
                  v19 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1932); /*0x435d6a*/
                  if ( v18 >= v19 ) /*0x435d72*/
                    v74 = (v18 - v19) / ((*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1928) - v19) / 10); /*0x435da0*/
                  else
                    v74 = 0; /*0x435d74*/
                  if ( v14 > v19 && this->BehaviourMode == 3 )
                  {
                    v20 = v74 + 80 <= 0 ? 0 : v74 + 80;
                    if ( v20 >= 89 ) /*0x435dc5*/
                      v20 = 89; /*0x435dc7*/
                    v21 = Block; /*0x435dcc*/
                    Block[3] = (BuildingLightQueue)v20; /*0x435dd0*/
                  }
                  else
                  {
                    v21 = Block; /*0x435dd9*/
                    Block[3] = (BuildingLightQueue)80; /*0x435ddb*/
                  }
                  BuildingLight::CalculateShading(v61, v4); /*0x435de4*/
                  if ( v21 ) /*0x435deb*/
                  {
                    BuildingLightQueue::RemoveEntry(v21); /*0x435def*/
                    __3_YAXPAX_Z(v21); /*0x435df5*/
                  }
                  location = this->?; /*0x435dfd*/
                  v23 = this->?[0]; /*0x435e05*/
                  v79 = this->?[1]; /*0x435e0a*/
                  v24 = this->FollowingObject; /*0x435e0e*/
                  vtable0 = (int (__thiscall **)(ObjectClass *, int *))v24->AbstractClass; /*0x435e17*/
                  v80 = this->?[2]; /*0x435e19*/
                  v26 = (int *)vtable0[18](v24, &v71); /*0x435e22*/
                  v75 = *v26; /*0x435e27*/
                  v76 = v26[1]; /*0x435e35*/
                  v27 = v26[2]; /*0x435e39*/
                  v28 = (int (__thiscall **)(BuildingLightClass *, double *))this->ObjectClass; /*0x435e3c*/
                  v77 = v27; /*0x435e3e*/
                  v29 = (_DWORD *)v28[18](this, &v90); /*0x435e42*/
                  v30 = Coord::Subtract((Coord *)v93, *v29 - v75, v29[1] - v76, v29[2] - v27); /*0x435e65*/
                  v71 = *v30; /*0x435e6c*/
                  v72 = v30[1]; /*0x435e77*/
                  v73 = v30[2]; /*0x435e7e*/
                  Blocka = (void *)Coord::Length((Coord *)&v71); /*0x435e89*/
                  v62 = BuildingLightClass::CalculateDistanceIntensity(this); /*0x435e92*/
                  __asm /*0x435e96*/
                  {
                    fild [esp+0D4h+var_C4]
                    fmul ds:dbl_7E3A98
                  }
                  LOWORD(v31) = Math::RoundToInt(v3); /*0x435ea0*/
                  BehaviourMode = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1960) + v31; /*0x435eb5*/
                  v63 = BehaviourMode; /*0x435eb9*/
                  if ( (int)Blocka >= BehaviourMode ) /*0x435ebd*/
                  {
                    __asm { fild [esp+0D4h+var_C4] } /*0x435ec3*/
                    __asm
                    {
                      fidiv [esp+0DCh+Block]
                      fstp qword ptr [esp+0DCh+var_DC]; double
                    }
                    BuildingLight::CalcIntensity(v58); /*0x435ed1*/
                    __asm { fstp [esp+0DCh+var_64] } /*0x435ed6*/
                    Matrix3x4::Identity(&v94); /*0x435ee4*/
                    __asm { fld [esp+0D4h+var_64] } /*0x435ee9*/
                    __asm { fstp [esp+0D8h+var_DC+4]; float }
                    Matrix2D::Rotate(v94.m_Data, v59); /*0x435ef8*/
                    v64 = v23 - v75; /*0x435f0b*/
                    __asm { fild [esp+0D4h+var_C4] } /*0x435f11*/
                    v65 = v79 - v76; /*0x435f15*/
                    __asm /*0x435f23*/
                    {
                      fstp [esp+0D4h+var_70]
                      fild [esp+0D4h+var_C4]
                    }
                    v66 = v80 - v27; /*0x435f2b*/
                    __asm /*0x435f3e*/
                    {
                      fstp [esp+0D8h+var_6C]
                      fild [esp+0D8h+var_C4]
                      fstp [esp+0D8h+var_68]
                    }
                    v32 = (int *)TransformMatrix3x4Point(v93, (float *)v94.m_Data, v89); /*0x435f4a*/
                    __asm { fild [esp+0D4h+var_AC] } /*0x435f51*/
                    v33 = v32[1]; /*0x435f55*/
                    v71 = *v32; /*0x435f58*/
                    v72 = v33; /*0x435f5c*/
                    __asm /*0x435f60*/
                    {
                      fst [esp+0D4h+Block]
                      fadd [esp+0D4h+var_BC]
                    }
                    v73 = v32[2]; /*0x435f6b*/
                    LOWORD(v34) = Math::RoundToInt(v3); /*0x435f6f*/
                    __asm { fild [esp+0D4h+var_A8] } /*0x435f74*/
                    v35 = v34; /*0x435f78*/
                    __asm /*0x435f7a*/
                    {
                      fst [esp+0D4h+var_7C]
                      fadd [esp+0D4h+var_B8]
                    }
                    LOWORD(v36) = Math::RoundToInt(v3); /*0x435f82*/
                    __asm { fild [esp+0D4h+var_A4] } /*0x435f87*/
                    v37 = v36; /*0x435f8b*/
                    __asm /*0x435f8d*/
                    {
                      fst [esp+0D4h+var_C4]
                      fadd [esp+0D4h+var_B4]
                    }
                    LOWORD(v38) = Math::RoundToInt(v3); /*0x435f95*/
                    v92[0] = v35; /*0x435fa1*/
                    v92[1] = v37; /*0x435fa8*/
                    v92[2] = v38; /*0x435faf*/
                    Matrix3x4::Identity(&v94); /*0x435fb6*/
                    __asm { fld [esp+0D4h+var_64] } /*0x435fbb*/
                    __asm
                    {
                      fchs
                      fstp [esp+0D8h+var_DC+4]; float
                    }
                    Matrix2D::Rotate(v94.m_Data, v60); /*0x435fcc*/
                    v39 = (int *)TransformMatrix3x4Point(v93, (float *)v94.m_Data, v89); /*0x435fe4*/
                    __asm { fld [esp+0D4h+Block] } /*0x435feb*/
                    v40 = v39[1]; /*0x435fef*/
                    v71 = *v39; /*0x435ff2*/
                    v72 = v40; /*0x435ff6*/
                    v73 = v39[2]; /*0x435ffd*/
                    __asm { fadd [esp+0D4h+var_BC] } /*0x436001*/
                    LOWORD(v41) = Math::RoundToInt(v3); /*0x436005*/
                    __asm /*0x43600a*/
                    {
                      fld [esp+0D4h+var_7C]
                      fadd [esp+0D4h+var_B8]
                    }
                    v42 = v41; /*0x436012*/
                    LOWORD(v43) = Math::RoundToInt(v3); /*0x436014*/
                    __asm /*0x436019*/
                    {
                      fld [esp+0D4h+var_C4]
                      fadd [esp+0D4h+var_B4]
                    }
                    v44 = v43; /*0x436021*/
                    LOWORD(v45) = Math::RoundToInt(v3); /*0x436023*/
                    v91[2] = v45; /*0x436028*/
                    v91[0] = v42; /*0x436042*/
                    v91[1] = v44; /*0x436049*/
                    Coord::To_Screen((Coord *)g_TacticalClass_Instance, v92, &v85); /*0x436050*/
                    Coord::To_Screen((Coord *)g_TacticalClass_Instance, v91, &v83); /*0x436065*/
                    v78 = v75; /*0x436078*/
                    v80 = v27 + 430; /*0x43607c*/
                    v79 = v76; /*0x436090*/
                    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v78, &v81); /*0x436094*/
                    v85 += DSurface_ViewBounds.field_0; /*0x4360ae*/
                    LODWORD(v84) += DSurface_ViewBounds.field_4; /*0x4360be*/
                    v82 += (int)DSurface_ViewBounds.field_4; /*0x4360d0*/
                    v88[1] = v82; /*0x4360d4*/
                    LODWORD(v86) += DSurface_ViewBounds.field_4; /*0x4360de*/
                    v83 += DSurface_ViewBounds.field_0; /*0x4360e2*/
                    v81 += DSurface_ViewBounds.field_0; /*0x4360e6*/
                    v88[0] = v81; /*0x4360ea*/
                    v46 = ZCoordToScreenY(v27 + 400); /*0x4360f5*/
                    v47 = location[1]; /*0x4360f7*/
                    v48 = -v46; /*0x4360fd*/
                    v49 = location[2] + 250; /*0x4360ff*/
                    v78 = *location; /*0x436105*/
                    v79 = v47; /*0x436109*/
                    v50 = -ZCoordToScreenY(v49); /*0x436121*/
                    if ( (unsigned __int8)ClipLine(&v81, &v85, &DSurface_ViewBounds.field_0) ) /*0x436123*/
                    {
                      v51 = v74; /*0x43612c*/
                      v52 = *(_DWORD *)g_DSurface_Hidden_2->__pad_0; /*0x436140*/
                      v53 = (*(int (__thiscall **)(AudioStream *, float *, int *, int *, int, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x43615b*/
                              g_DSurface_Hidden_2,
                              v93,
                              &v81,
                              &v85,
                              75 - 6 * v74,
                              v48,
                              v50,
                              0);
                      (*(void (__thiscall **)(AudioStream *, int))(v52 + 56))(g_DSurface_Hidden_2, v53); /*0x436165*/
                    }
                    else
                    {
                      v51 = v74; /*0x43616a*/
                    }
                    LOBYTE(BehaviourMode) = ClipLine(v88, &v83, &DSurface_ViewBounds.field_0); /*0x43617b*/
                    if ( (_BYTE)BehaviourMode ) /*0x436182*/
                    {
                      v54 = *(_DWORD *)g_DSurface_Hidden_2->__pad_0; /*0x43618f*/
                      v55 = (*(int (__thiscall **)(AudioStream *, float *, int *, int *, int, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x4361af*/
                              g_DSurface_Hidden_2,
                              v93,
                              v88,
                              &v83,
                              75 - 6 * v51,
                              v48,
                              v50,
                              0);
                      LOBYTE(BehaviourMode) = (*(char (__thiscall **)(AudioStream *, int))(v54 + 56))( /*0x4361b9*/
                                                g_DSurface_Hidden_2,
                                                v55);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return BehaviourMode; /*0x4361bc*/
}



// ==== 0x004361D0  BuildingLightClass::SD_vt23  this=BuildingLightClass  sig=csp ====
char __thiscall BuildingLightClass::SD_vt23(BuildingLightClass *this)
{
  double v1; // st7
  ObjectClass *FollowingObject; // ecx
  int *v4; // eax
  int *BuildingLightClass_field_E0; // ebx
  _DWORD *v6; // esi
  _DWORD *v7; // eax
  int v8; // ebp
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  float v12; // eax
  int v13; // eax
  int *v14; // ebx
  int v15; // ecx
  int v16; // eax
  int *location; // ecx
  int v18; // esi
  int v19; // ebx
  int v20; // ebp
  double v21; // st7
  unsigned __int8 v23; // c0
  unsigned __int8 v24; // c3
  int v25; // eax
  int v26; // ecx
  float *v27; // eax
  int v28; // eax
  int v29; // esi
  int v30; // eax
  int v31; // ebx
  double v32; // st7
  int BuildingLightClass_field_D8; // eax
  double v35; // st7
  unsigned __int8 v36; // c0
  unsigned __int8 v37; // c3
  double v38; // st7
  double v39; // st7
  double v40; // st7
  int v41; // edx
  int v42; // esi
  int v43; // eax
  float *v44; // eax
  double v45; // st7
  int v46; // eax
  int v47; // eax
  int attachedTag; // eax
  ObjectClass *v49; // esi
  _DWORD *v50; // esi
  _DWORD *v51; // eax
  int *v52; // eax
  int v53; // eax
  int v54; // ebp
  int v55; // esi
  double v56; // st7
  int v57; // eax
  int v58; // edx
  ObjectClass *v59; // eax
  Object *nextArrayIndex; // ecx
  __int16 v61; // ax
  int v62; // ebx
  _DWORD *v63; // esi
  int v64; // edx
  int v65; // ebp
  int v66; // ebx
  int *v67; // eax
  int v68; // ecx
  int v69; // edx
  int v70; // eax
  int v71; // eax
  float v73; // [esp+18h] [ebp-D4h]
  float v74; // [esp+18h] [ebp-D4h]
  int v75; // [esp+30h] [ebp-BCh]
  char v76; // [esp+37h] [ebp-B5h]
  float v77; // [esp+38h] [ebp-B4h] BYREF
  float v78; // [esp+3Ch] [ebp-B0h]
  float v79; // [esp+40h] [ebp-ACh]
  int v80; // [esp+44h] [ebp-A8h] BYREF
  int v81; // [esp+48h] [ebp-A4h]
  int v82; // [esp+4Ch] [ebp-A0h]
  int v83; // [esp+50h] [ebp-9Ch]
  int v84; // [esp+54h] [ebp-98h] BYREF
  int v85; // [esp+58h] [ebp-94h]
  int v86; // [esp+5Ch] [ebp-90h]
  int v87; // [esp+60h] [ebp-8Ch]
  int v88; // [esp+64h] [ebp-88h]
  _DWORD v89[3]; // [esp+68h] [ebp-84h] BYREF
  int v90; // [esp+74h] [ebp-78h]
  Object *v91; // [esp+78h] [ebp-74h]
  __int16 v92[2]; // [esp+7Ch] [ebp-70h] BYREF
  int v93[3]; // [esp+80h] [ebp-6Ch] BYREF
  float v94[3]; // [esp+8Ch] [ebp-60h] BYREF
  Color v95[3]; // [esp+98h] [ebp-54h] BYREF
  float v96[3]; // [esp+A4h] [ebp-48h] BYREF
  Matrix3x4 v97; // [esp+B0h] [ebp-3Ch] BYREF
  char v98[12]; // [esp+E0h] [ebp-Ch] BYREF

  FollowingObject = this->FollowingObject; /*0x4361e4*/
  if ( !FollowingObject || !FollowingObject->isAliveFlag ) /*0x4361f2*/
  {
    LOBYTE(attachedTag) = (*((char (__thiscall **)(BuildingLightClass *))this->ObjectClass + 62))(this); /*0x4368e5*/
    return attachedTag; /*0x4368e5*/
  }
  switch ( this->BehaviourMode ) /*0x436207*/
  {
    case 1: /*0x436207*/
      v32 = *(double *)&this->BuildingLightClass_field_D0 + *(double *)&this->Speed[1]; /*0x43643f*/
      BuildingLightClass_field_D8 = (unsigned __int8)this->BuildingLightClass_field_D8; /*0x436445*/
      *(double *)&this->Speed[1] = v32; /*0x43644d*/
      if ( (_BYTE)BuildingLightClass_field_D8 ) /*0x43645f*/
      {
        v35 = *(double *)&this->BuildingLightClass_field_D0; /*0x43646b*/
        if ( !(v36 | v37) ) /*0x436473*/
        {
          v38 = v35 - *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1944); /*0x436478*/
          *(double *)&this->BuildingLightClass_field_D0 = v38; /*0x43647e*/
          if ( v38 < 0.0 ) /*0x43648f*/
          {
            this->BuildingLightClass_field_D0 = 0; /*0x436495*/
            *(_DWORD *)this->__pad_D4 = 0; /*0x43649b*/
            this->BuildingLightClass_field_D8 = 0; /*0x4364a1*/
          }
          goto LABEL_28; /*0x4364a8*/
        }
        if ( v35 < *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1936) ) /*0x4364b8*/
        {
          v39 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1944) /*0x4364c0*/
              + *(double *)&this->BuildingLightClass_field_D0;
LABEL_27:
          *(double *)&this->BuildingLightClass_field_D0 = v39; /*0x43652e*/
        }
      }
      else
      {
        if ( v32 < *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1952) * -0.5 ) /*0x4364d7*/
        {
          v40 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1944) /*0x4364df*/
              + *(double *)&this->BuildingLightClass_field_D0;
          *(double *)&this->BuildingLightClass_field_D0 = v40; /*0x4364e5*/
          if ( v40 > 0.0 ) /*0x4364f6*/
          {
            this->BuildingLightClass_field_D0 = 0; /*0x4364f8*/
            *(_DWORD *)this->__pad_D4 = 0; /*0x4364fe*/
            this->BuildingLightClass_field_D8 = 1; /*0x436504*/
          }
          goto LABEL_28; /*0x43650b*/
        }
        if ( -*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1936) < *(double *)&this->BuildingLightClass_field_D0 ) /*0x436520*/
        {
          v39 = *(double *)&this->BuildingLightClass_field_D0 /*0x436528*/
              - *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1944);
          goto LABEL_27; /*0x436528*/
        }
      }
LABEL_28:
      Matrix3x4::Identity(&v97); /*0x436534*/
      v74 = *(double *)&this->Speed[1]; /*0x43654e*/
      Matrix2D::Rotate(v97.m_Data, v74); /*0x436551*/
      v41 = this->BuildingLightClass_field_C4[1]; /*0x436562*/
      v42 = this->BuildingLightClass_field_B8[1]; /*0x436568*/
      v43 = this->BuildingLightClass_field_C4[2] - this->BuildingLightClass_field_B8[2]; /*0x436586*/
      v77 = (float)(this->BuildingLightClass_field_C4[0] - this->BuildingLightClass_field_B8[0]); /*0x436590*/
      v78 = (float)(v41 - v42); /*0x4365a8*/
      v79 = (float)v43; /*0x4365b0*/
      v44 = TransformMatrix3x4Point(v94, (float *)v97.m_Data, &v77); /*0x4365b4*/
      v45 = (double)this->BuildingLightClass_field_B8[0]; /*0x4365bb*/
      v77 = *v44; /*0x4365c1*/
      v78 = v44[1]; /*0x4365c8*/
      v79 = v44[2]; /*0x4365d3*/
      LOWORD(v46) = Math::RoundToInt(v45 + v77); /*0x4365d7*/
      v29 = v46; /*0x4365e2*/
      LOWORD(v47) = Math::RoundToInt((double)this->BuildingLightClass_field_B8[1] + v78); /*0x4365e8*/
      v31 = v47; /*0x4365f3*/
      v1 = (double)this->BuildingLightClass_field_B8[2] + v79; /*0x4365f5*/
LABEL_29:
      LOWORD(v16) = Math::RoundToInt(v1); /*0x4365f9*/
      v84 = v29; /*0x4365fe*/
      v85 = v31; /*0x436602*/
      goto LABEL_30; /*0x436602*/
    case 2: /*0x436207*/
      location = FollowingObject->location; /*0x43632f*/
      v18 = *location; /*0x436335*/
      v80 = *location; /*0x436337*/
      v19 = location[1]; /*0x43633b*/
      v81 = v19; /*0x43633e*/
      v20 = location[2]; /*0x436342*/
      v82 = v20; /*0x43634b*/
      v21 = *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1936) * 4.0 + *(double *)&this->Speed[1]; /*0x43635b*/
      *(double *)&this->Speed[1] = v21; /*0x436367*/
      if ( !(v23 | v24) ) /*0x43636f*/
        *(double *)&this->Speed[1] = v21 - 6.283185307179586; /*0x43637a*/
      Matrix3x4::Identity(&v97); /*0x43638b*/
      v73 = *(double *)&this->Speed[1]; /*0x43639e*/
      Matrix2D::Rotate(v97.m_Data, v73); /*0x4363a1*/
      v25 = this->BuildingLightClass_field_C4[1]; /*0x4363ac*/
      v26 = this->BuildingLightClass_field_C4[2]; /*0x4363b4*/
      v77 = (float)(this->BuildingLightClass_field_C4[0] - v18); /*0x4363ce*/
      v78 = (float)(v25 - v19); /*0x4363e9*/
      v79 = (float)(v26 - v20); /*0x4363f1*/
      v27 = TransformMatrix3x4Point(v96, (float *)v97.m_Data, &v77); /*0x4363f5*/
      v77 = *v27; /*0x436400*/
      v78 = v27[1]; /*0x436407*/
      v79 = v27[2]; /*0x436412*/
      LOWORD(v28) = Math::RoundToInt((double)v80 + v77); /*0x436416*/
      v29 = v28; /*0x43641f*/
      LOWORD(v30) = Math::RoundToInt((double)v81 + v78); /*0x436425*/
      v31 = v30; /*0x43642e*/
      v1 = (double)v82 + v79; /*0x436430*/
      goto LABEL_29; /*0x436434*/
    case 3: /*0x436207*/
      BuildingLightClass_field_E0 = (int *)this->BuildingLightClass_field_E0; /*0x436222*/
      if ( !BuildingLightClass_field_E0 ) /*0x43622a*/
        goto LABEL_12; /*0x43622a*/
      if ( !*((_BYTE *)BuildingLightClass_field_E0 + 144) ) /*0x436230*/
        goto LABEL_12; /*0x436230*/
      v6 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, char *))FollowingObject->AbstractClass + 18))( /*0x43624d*/
                       FollowingObject,
                       v98);
      v7 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(*BuildingLightClass_field_E0 + 72))( /*0x436256*/
                       BuildingLightClass_field_E0,
                       &v80);
      v8 = v6[1]; /*0x43625d*/
      v9 = *v7 - *v6; /*0x436260*/
      v10 = v7[1]; /*0x436262*/
      v11 = v7[2]; /*0x436265*/
      v77 = *(float *)&v9; /*0x436268*/
      LODWORD(v12) = v11 - v6[2]; /*0x436271*/
      LODWORD(v78) = v10 - v8; /*0x436273*/
      v79 = v12; /*0x436277*/
      Math::Sqrt( /*0x4362a3*/
        (double)v9 * (double)v9
      + (double)SLODWORD(v12) * (double)SLODWORD(v12)
      + (double)(v10 - v8) * (double)(v10 - v8));
      LOWORD(v13) = Math::RoundToInt(v1); /*0x4362ab*/
      if ( v13 >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1928) ) /*0x4362bc*/
      {
LABEL_12:
        BuildingLightClass::FindTarget(this, (_DWORD *)1); /*0x436325*/
        goto LABEL_31; /*0x43632a*/
      }
      v14 = BuildingLightClass_field_E0 + 39; /*0x4362be*/
      v93[0] = *v14; /*0x4362cb*/
      v93[1] = v14[1]; /*0x4362d8*/
      v15 = v14[2]; /*0x4362de*/
      v89[1] = this->?[0]; /*0x4362e1*/
      v93[2] = v15; /*0x4362e5*/
      v89[2] = this->?[1]; /*0x4362f0*/
      v90 = this->?[2]; /*0x4362f8*/
      v4 = Color::RGBFromFloat(v95, (int)v93, 0.25); /*0x436307*/
      break;
    default:
      v4 = this->?; /*0x436217*/
      break;
  }
  v84 = *v4; /*0x43630e*/
  v85 = v4[1]; /*0x436315*/
  v16 = v4[2]; /*0x436319*/
LABEL_30:
  v86 = v16; /*0x436606*/
LABEL_31:
  (*((void (__thiscall **)(BuildingLightClass *, int *))this->ObjectClass + 109))(this, &v84); /*0x43660a*/
  attachedTag = (*((int (__thiscall **)(ObjectClass *))this->FollowingObject->AbstractClass + 11))(this->FollowingObject); /*0x436621*/
  if ( attachedTag == 6 ) /*0x436627*/
  {
    v49 = this->FollowingObject; /*0x436629*/
    v87 = (int)v49; /*0x43662f*/
  }
  else
  {
    v87 = 0; /*0x436635*/
    v49 = 0; /*0x43663d*/
  }
  if ( this->BehaviourMode == 1 ) /*0x436648*/
  {
    if ( v49 ) /*0x436650*/
    {
      LOBYTE(attachedTag) = v49->isAliveFlag; /*0x436656*/
      if ( (_BYTE)attachedTag ) /*0x43665e*/
      {
        LOBYTE(attachedTag) = (*((int (__thiscall **)(ObjectClass *))v49->AbstractClass + 212))(v49); /*0x436668*/
        if ( (_BYTE)attachedTag ) /*0x436670*/
        {
          attachedTag = (int)v49->attachedTag; /*0x436676*/
          if ( attachedTag ) /*0x43667b*/
          {
            v76 = 0; /*0x43668a*/
            v77 = *(float *)(*((int (__thiscall **)(BuildingLightClass *, _DWORD *))this->ObjectClass + 110))(this, v89); /*0x43669b*/
            v50 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, float *))this->FollowingObject->AbstractClass + 18))( /*0x4366ad*/
                              this->FollowingObject,
                              v94);
            v51 = (_DWORD *)(*((int (__thiscall **)(BuildingLightClass *, float *))this->ObjectClass + 18))(this, v96); /*0x4366b9*/
            v52 = Coord::Subtract((Coord *)v95, *v51 - *v50, v51[1] - v50[1], v51[2] - v50[2]); /*0x4366dc*/
            v80 = *v52; /*0x4366e6*/
            v81 = v52[1]; /*0x4366ed*/
            v82 = v52[2]; /*0x4366f8*/
            Math::Sqrt((double)v80 * (double)v80 + (double)v82 * (double)v82 + (double)v81 * (double)v81); /*0x43671d*/
            LOWORD(v53) = Math::RoundToInt(v1); /*0x436725*/
            v54 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43672a*/
            v55 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1932); /*0x436732*/
            if ( v53 >= v55 ) /*0x43673a*/
              v83 = (v53 - v55) / ((*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1928) - v55) / 10); /*0x436768*/
            else
              v83 = 0; /*0x43673c*/
            v56 = (double)v83 * 5.973333333333333; /*0x436770*/
            LOWORD(v57) = Math::RoundToInt(v56); /*0x436776*/
            v58 = v57 + *(_DWORD *)(v54 + 1960) + 30; /*0x436781*/
            v59 = this->FollowingObject; /*0x436785*/
            v89[0] = v58; /*0x43678b*/
            nextArrayIndex = (Object *)v59[3].?; /*0x43678f*/
            v61 = -1; /*0x436795*/
            v91 = nextArrayIndex; /*0x436798*/
            v75 = -1; /*0x43679c*/
            do /*0x4368b1*/
            {
              v62 = -1; /*0x4367a4*/
              v88 = -1; /*0x4367a9*/
              LOWORD(v83) = LOWORD(v77) + v61; /*0x4367ad*/
              do /*0x43689f*/
              {
                HIWORD(v83) = v62 + HIWORD(v77); /*0x4367bd*/
                *(_DWORD *)v92 = v83; /*0x4367c6*/
                v63 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v92) + 57); /*0x4367d4*/
                if ( v63 ) /*0x4367dc*/
                {
                  do /*0x43688d*/
                  {
                    if ( ((*(int (__thiscall **)(_DWORD *))(*v63 + 44))(v63) == 15 /*0x436803*/
                       || (*(int (__thiscall **)(_DWORD *))(*v63 + 44))(v63) == 1)
                      && !(unsigned __int8)Object::IsAlliedWithObjectHouse(v91, (int)v63) )
                    {
                      v64 = *v63; /*0x436812*/
                      v65 = this->?[0]; /*0x436814*/
                      v66 = this->?[1]; /*0x436816*/
                      v90 = this->?[2]; /*0x436820*/
                      v67 = (int *)(*(int (__thiscall **)(_DWORD *, float *))(v64 + 72))(v63, v94); /*0x436827*/
                      v68 = *v67; /*0x43682a*/
                      v69 = v67[1]; /*0x43682c*/
                      v70 = v67[2]; /*0x43682f*/
                      v80 = v68 - v65; /*0x436838*/
                      v81 = v69 - v66; /*0x436844*/
                      v82 = v70 - v90; /*0x436848*/
                      Math::Sqrt( /*0x436870*/
                        (double)(v70 - v90) * (double)(v70 - v90)
                      + (double)(v69 - v66) * (double)(v69 - v66)
                      + (double)v80 * (double)v80);
                      LOWORD(v71) = Math::RoundToInt(v56); /*0x436878*/
                      if ( v71 < v89[0] ) /*0x436881*/
                        v76 = 1; /*0x436883*/
                    }
                    v63 = (_DWORD *)v63[12]; /*0x436888*/
                  }
                  while ( v63 ); /*0x43688d*/
                  v62 = v88; /*0x436893*/
                }
                v88 = ++v62; /*0x43689b*/
              }
              while ( v62 < 2 ); /*0x43689f*/
              v61 = ++v75; /*0x4368a9*/
            }
            while ( v75 < 2 ); /*0x4368b1*/
            LOBYTE(attachedTag) = v76; /*0x4368b7*/
            if ( v76 ) /*0x4368bd*/
              LOBYTE(attachedTag) = TeamClass::Update_0(*(TeamClass **)(v87 + 52), 35, v87, dword_89C4F0, 0, 0); /*0x4368d4*/
          }
        }
      }
    }
  }
  return attachedTag; /*0x4368d9*/
}



// ==== 0x00436900  BuildingLightClass::SD_vt12  this=BuildingLightClass  sig=csp ====
int BuildingLightClass::SD_vt12(BuildingLightClass *this)
{
  return 232; /*0x436905*/
}



// ==== 0x00436910  BuildingLightClass::SD_vt03  this=BuildingLightClass  sig=csp ====
int __stdcall BuildingLightClass::SD_vt03(BuildingLightClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x436916*/
    return -2147467261; /*0x436918*/
  *a2 = 1417814616; /*0x436926*/
  a2[1] = 298965160; /*0x43692e*/
  a2[2] = 1610638004; /*0x436937*/
  a2[3] = unk_7E973C; /*0x436940*/
  return 0; /*0x43691d*/
}



// ==== 0x00436950  BuildingLightClass::SD_vt05  this=BuildingLightClass  sig=csp ====
int __thiscall BuildingLightClass::SD_vt05(BuildingLightClass *this, _DWORD *a2, int a3)
{
  int Register; // edi

  Register = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x436961*/
  if ( Register >= 0 ) /*0x436965*/
  {
    if ( a2 ) /*0x436969*/
    {
      ObjectClass::Init((ObjectClass *)a2, (int)&a3); /*0x436972*/
      *a2 = &BuildingLightClass::`vftable'; /*0x436977*/
      a2[1] = &BuildingLightClass::`vftable'; /*0x43697d*/
      a2[2] = &BuildingLightClass::`vftable'; /*0x436984*/
      a2[3] = &BuildingLightClass::`vftable'; /*0x43698b*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 57); /*0x43699e*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 56); /*0x4369af*/
  }
  return Register; /*0x4369b6*/
}



// ==== 0x004369C0  BuildingLightClass::SD_vt06  this=BuildingLightClass  sig=csp ====
int __stdcall BuildingLightClass::SD_vt06(BuildingLightClass *this, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x4369d4*/
}



// ==== 0x004369E0  BuildingLightClass::SD_vt34  this=BuildingLightClass  sig=csp ====
int BuildingLightClass::SD_vt34(BuildingLightClass *this)
{
  return 0; /*0x4369e2*/
}



// ==== 0x004369F0  BuildingLightClass::SD_vt30  this=BuildingLightClass  sig=csp ====
int BuildingLightClass::SD_vt30(BuildingLightClass *this)
{
  return 3; /*0x4369f5*/
}



// ==== 0x00436A00  BuildingLightClass::SD_vt10  this=BuildingLightClass  sig=csp ====
int __thiscall BuildingLightClass::SD_vt10(BuildingLightClass *this, int a2, int a3)
{
  int result; // eax

  Object::Unlink((ObjectClass *)this); /*0x436a0e*/
  result = 0; /*0x436a19*/
  if ( this->BuildingLightClass_field_E0 == a2 ) /*0x436a1d*/
    this->BuildingLightClass_field_E0 = 0; /*0x436a1f*/
  if ( this->FollowingObject == (ObjectClass *)a2 ) /*0x436a2b*/
    this->FollowingObject = 0; /*0x436a2d*/
  return result; /*0x436a33*/
}



// ==== 0x00436BE0  BuildingLightClass::FindTarget  this=BuildingLightClass  sig=csp ====
_DWORD *__thiscall BuildingLightClass::FindTarget(BuildingLightClass *this, _DWORD *a2)
{
  double v2; // st7
  _DWORD *result; // eax
  BuildingLightClass *v4; // edi
  int v5; // edx
  ObjectClass *FollowingObject; // eax
  int v7; // ebx
  _DWORD *v8; // esi
  int v9; // eax
  int *location; // ecx
  int v11; // edi
  int v12; // ebx
  _DWORD *v13; // eax
  int v14; // ecx
  int v15; // edx
  void *v16; // eax
  int v17; // [esp+1Ch] [ebp-4Ch]
  int v18; // [esp+20h] [ebp-48h]
  void *v19; // [esp+24h] [ebp-44h]
  int v21; // [esp+2Ch] [ebp-3Ch]
  _DWORD *v22; // [esp+30h] [ebp-38h]
  __int16 v23[2]; // [esp+34h] [ebp-34h] BYREF
  Object *nextArrayIndex; // [esp+38h] [ebp-30h] BYREF
  int v25; // [esp+3Ch] [ebp-2Ch]
  int v26; // [esp+44h] [ebp-24h]
  int v27; // [esp+48h] [ebp-20h]
  int v28; // [esp+4Ch] [ebp-1Ch]
  int v29; // [esp+58h] [ebp-10h]
  char v30[12]; // [esp+5Ch] [ebp-Ch] BYREF

  result = a2; /*0x436be9*/
  v4 = this; /*0x436bef*/
  this->Speed[1] = 0; /*0x436bfa*/
  this->BehaviourMode = (int)a2; /*0x436c00*/
  *(_DWORD *)this->__pad_B4 = 0; /*0x436c06*/
  if ( a2 == (_DWORD *)3 ) /*0x436c0c*/
  {
    v5 = *(_DWORD *)(*((int (__thiscall **)(BuildingLightClass *, Object **))this->ObjectClass + 110))( /*0x436c21*/
                      this,
                      &nextArrayIndex);
    FollowingObject = v4->FollowingObject; /*0x436c23*/
    v25 = v5; /*0x436c29*/
    v19 = &unk_98967F; /*0x436c2d*/
    v22 = 0; /*0x436c3b*/
    nextArrayIndex = (Object *)FollowingObject[3].?; /*0x436c3f*/
    v17 = -1; /*0x436c43*/
    do /*0x436d74*/
    {
      v7 = -1; /*0x436c53*/
      v21 = -1; /*0x436c58*/
      LOWORD(v18) = v25 + v17; /*0x436c5c*/
      do /*0x436d62*/
      {
        HIWORD(v18) = v7 + HIWORD(v25); /*0x436c6c*/
        *(_DWORD *)v23 = v18; /*0x436c7b*/
        v8 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v23) + 57); /*0x436c84*/
        if ( v8 ) /*0x436c8c*/
        {
          while ( 1 ) /*0x436c98*/
          {
            if ( ((*(int (__thiscall **)(_DWORD *))(*v8 + 44))(v8) == 15 /*0x436cb9*/
               || (*(int (__thiscall **)(_DWORD *))(*v8 + 44))(v8) == 1)
              && !(unsigned __int8)Object::IsAlliedWithObjectHouse(nextArrayIndex, (int)v8) )
            {
              v9 = *v8; /*0x436ccc*/
              location = v4->?; /*0x436cce*/
              v11 = v4->?[0]; /*0x436cd0*/
              v12 = location[1]; /*0x436cd2*/
              v29 = location[2]; /*0x436cdf*/
              v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(v9 + 72))(v8, v30); /*0x436ce3*/
              v14 = v13[1] - v12; /*0x436ced*/
              v26 = *v13 - v11; /*0x436cf3*/
              v15 = v13[2]; /*0x436cf7*/
              v27 = v14; /*0x436cfa*/
              v28 = v15 - v29; /*0x436d07*/
              Math::Sqrt((double)v26 * (double)v26 + (double)(v15 - v29) * (double)(v15 - v29) + (double)v14 /*0x436d2c*/
                                                                                               * (double)v14);
              LOWORD(v16) = Math::RoundToInt(v2); /*0x436d34*/
              if ( (int)v16 < (int)v19 ) /*0x436d3d*/
              {
                v22 = v8; /*0x436d3f*/
                v19 = v16; /*0x436d43*/
              }
            }
            v8 = (_DWORD *)v8[12]; /*0x436d47*/
            if ( !v8 ) /*0x436d4c*/
              break; /*0x436d4c*/
            v4 = this; /*0x436c94*/
          }
          v7 = v21; /*0x436d52*/
          v4 = this; /*0x436d56*/
        }
        v21 = ++v7; /*0x436d5e*/
      }
      while ( v7 < 2 ); /*0x436d62*/
      ++v17; /*0x436d70*/
    }
    while ( v17 < 2 ); /*0x436d74*/
    result = v22; /*0x436d7a*/
    if ( v22 ) /*0x436d80*/
      v4->BuildingLightClass_field_E0 = (int)v22; /*0x436d82*/
  }
  return result; /*0x436d88*/
}



// ==== 0x00436DA0  ObjectClass::method_436DA0  this=ObjectClass  sig=csp ====
double __thiscall sub_436DA0(ObjectClass *this)
{
  double result; // st7
  _DWORD *v3; // edi
  _DWORD *v4; // eax
  int v5; // [esp+24h] [ebp-20h]
  int v6; // [esp+28h] [ebp-1Ch]
  _BYTE v7[12]; // [esp+2Ch] [ebp-18h] BYREF
  _BYTE v8[12]; // [esp+38h] [ebp-Ch] BYREF

  v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**((_DWORD **)this + 57) + 72))(this->u32_39, v7); /*0x436dbc*/
  v4 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, _BYTE *))this->AbstractClass + 18))(this, v8); /*0x436dc3*/
  v5 = v4[1] - v3[1]; /*0x436de0*/
  v6 = v4[2] - v3[2]; /*0x436de4*/
  Math::Sqrt((double)(*v4 - *v3) * (double)(*v4 - *v3) + (double)v6 * (double)v6 + (double)v5 * (double)v5); /*0x436e10*/
  Math::RoundToInt(result); /*0x436e18*/
  Math::RoundToInt(result); /*0x436e69*/
  return result; /*0x436e74*/
}



// ==== 0x00436E80  BuildingLightClass::CalculateDistanceIntensity  this=BuildingLightClass  sig=csp ====
int __thiscall BuildingLightClass::CalculateDistanceIntensity(BuildingLightClass *this)
{
  double v1; // st7
  _DWORD *v3; // edi
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // esi
  int v8; // [esp+20h] [ebp-1Ch]
  _BYTE v9[12]; // [esp+24h] [ebp-18h] BYREF
  _BYTE v10[12]; // [esp+30h] [ebp-Ch] BYREF

  v3 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *, _BYTE *))this->FollowingObject->AbstractClass + 18))( /*0x436e9b*/
                   this->FollowingObject,
                   v9);
  v4 = (_DWORD *)(*((int (__thiscall **)(BuildingLightClass *, _BYTE *))this->ObjectClass + 18))(this, v10); /*0x436ea2*/
  v8 = v4[2] - v3[2]; /*0x436eca*/
  Math::Sqrt( /*0x436eef*/
    (double)(*v4 - *v3) * (double)(*v4 - *v3)
  + (double)v8 * (double)v8
  + (double)(v4[1] - v3[1]) * (double)(v4[1] - v3[1]));
  LOWORD(v5) = Math::RoundToInt(v1); /*0x436ef7*/
  v6 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1932); /*0x436f03*/
  if ( v5 >= v6 ) /*0x436f0b*/
    return (v5 - v6) / ((*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1928) - v6) / 10); /*0x436f36*/
  else
    return 0; /*0x436f0e*/
}



// ==== 0x00436F40  BuildingLightClass::SD_vt13  this=BuildingLightClass  sig=csp ====
int __thiscall BuildingLightClass::SD_vt13(BuildingLightClass *this, unsigned int *a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // eax
  ObjectClass *FollowingObject; // esi
  int v7; // eax

  HouseClass::ProcessPower((ObjectClass *)this); /*0x436f49*/
  Checksummer::Add_double((Checksummer *)a2, this->Speed[1], *(_DWORD *)this->__pad_B4); /*0x436f5e*/
  Power::TimerProcess(this->BuildingLightClass_field_B8[0]); /*0x436f6c*/
  Power::TimerProcess(this->BuildingLightClass_field_B8[1]); /*0x436f7a*/
  Power::TimerProcess(this->BuildingLightClass_field_B8[2]); /*0x436f88*/
  Power::TimerProcess(this->BuildingLightClass_field_C4[0]); /*0x436f96*/
  Power::TimerProcess(this->BuildingLightClass_field_C4[1]); /*0x436fa4*/
  Power::TimerProcess(this->BuildingLightClass_field_C4[2]); /*0x436fb2*/
  Checksummer::Add_double((Checksummer *)a2, this->BuildingLightClass_field_D0, *(_DWORD *)this->__pad_D4); /*0x436fc7*/
  LOBYTE(v3) = this->BuildingLightClass_field_D8; /*0x436fcc*/
  Power::FlagProcess((Power *)a2, v3); /*0x436fd5*/
  Power::TimerProcess(this->BehaviourMode); /*0x436fe3*/
  result = this->BuildingLightClass_field_E0; /*0x436fe8*/
  if ( result ) /*0x436ff0*/
  {
    v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(result + 4) + 16))(result + 4); /*0x436ff9*/
    result = Power::TimerProcess(v5); /*0x436fff*/
  }
  FollowingObject = this->FollowingObject; /*0x437004*/
  if ( FollowingObject ) /*0x43700c*/
  {
    v7 = (*((int (__stdcall **)(void **))FollowingObject->? + 4))(&FollowingObject->?); /*0x437015*/
    return Power::TimerProcess(v7); /*0x43701b*/
  }
  return result; /*0x437020*/
}



// ==== 0x00437030  BuildingLightClass::SD_vt53  this=BuildingLightClass  sig=csp ====
char __thiscall BuildingLightClass::SD_vt53(BuildingLightClass *this)
{
  if ( !(unsigned __int8)ObjectClass::Undeploy(this) ) /*0x437033*/
    return 0; /*0x43704b*/
  VectorClass::RemoveItem((DynamicVectorClass *)&dword_87F778, (int)this); /*0x437042*/
  return 1; /*0x437049*/
}



// ==== 0x00437050  BuildingLightClass::SD_vt54  this=BuildingLightClass  sig=csp ====
char __thiscall BuildingLightClass::SD_vt54(BuildingLightClass *this, int a2, int a3)
{
  if ( !(unsigned __int8)ObjectClass::Deploy((ObjectClass *)this) ) /*0x43705f*/
    return 0; /*0x43707b*/
  ObjectClass::SetDeployState((LogicClass *)this, 0); /*0x437070*/
  return 1; /*0x437077*/
}



// ==== 0x00437090  Coord3D::Set  this=Coord3D  sig=csp ====
_DWORD *__thiscall Coord3D::Set(Coord3D *this, int a2, int a3, int a4)
{
  *(_DWORD *)this->__pad_0 = a2; /*0x43709a*/
  this->Coord3D_field_0x04 = a3; /*0x4370a0*/
  this->Coord3D_field_0x08 = a4; /*0x4370a3*/
  return this->__pad_0; /*0x4370a6*/
}



// ==== 0x004370B0  BuildingLightClass::SD_vt11  this=BuildingLightClass  sig=csp ====
int BuildingLightClass::SD_vt11(BuildingLightClass *this)
{
  return 19; /*0x4370b5*/
}



// ==== 0x004370C0  BuildingLightClass::SDDTOR  this=BuildingLightClass  sig=csp ====
ObjectClass *__thiscall BuildingLightClass::SDDTOR(BuildingLightClass *this, char a2)
{
  int v3; // eax
  BuildingLightClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->vtable0 = (int)&BuildingLightClass::`vftable'; /*0x4370c4*/
  this->vtable1 = (int)&BuildingLightClass::`vftable'; /*0x4370ca*/
  this->vtable2 = (int)&BuildingLightClass::`vftable'; /*0x4370d1*/
  this->vtable3 = (int)&BuildingLightClass::`vftable'; /*0x4370d8*/
  if ( (unsigned __int8)ObjectClass::Undeploy(this) ) /*0x4370df*/
    VectorClass::RemoveItem((DynamicVectorClass *)&dword_87F778, (int)this); /*0x4370ee*/
  v5 = this; /*0x437103*/
  v3 = (*(int (__thiscall **)(int *, BuildingLightClass **))(dword_8B4190 + 16))(&dword_8B4190, &v5); /*0x437107*/
  if ( v3 != -1 && v3 < dword_8B41A0 && v3 < --dword_8B41A0 ) /*0x437122*/
  {
    do /*0x43713a*/
    {
      ++v3; /*0x43712a*/
      *((_DWORD *)dword_8B4194 + v3 - 1) = *((_DWORD *)dword_8B4194 + v3); /*0x43712e*/
    }
    while ( v3 < dword_8B41A0 ); /*0x43713a*/
  }
  ObjectClass::Dtor(this); /*0x43713e*/
  if ( (a2 & 1) != 0 ) /*0x437148*/
    __3_YAXPAX_Z(this); /*0x43714b*/
  return this; /*0x437155*/
}



// ==== 0x00437160  Vector3::Subtract  this=Vector3  sig=csp ====
int *__thiscall Vector3::Subtract(Vector3 *this, int *a2, _DWORD *a3)
{
  int v3; // edx
  int v4; // esi
  int v6; // ecx

  v3 = *(_DWORD *)this->__pad_0 - *a3; /*0x43716d*/
  v4 = this->Vector3_field_0x04 - a3[1]; /*0x437175*/
  v6 = this->Vector3_field_0x08 - a3[2]; /*0x43717e*/
  *a2 = v3; /*0x437182*/
  a2[1] = v4; /*0x437184*/
  a2[2] = v6; /*0x437187*/
  return a2; /*0x43718a*/
}



// ==== 0x00437190  sub_437190  this=-  sig=ida-proto ====
int sub_437190()
{
  dword_89C558 = 0; /*0x437192*/
  dword_89C55C = 0; /*0x437197*/
  dword_89C560 = 0; /*0x43719c*/
  dword_89C564 = 0; /*0x4371a1*/
  return 0; /*0x4371a6*/
}



// ==== 0x004371D0  Helper::ProcessData  this=Helper  sig=csp ====
char __fastcall Helper::ProcessData(void **a1, int a2, int *a3)
{
  int v6; // ebx
  int v7; // eax
  int v8; // edx
  void *v9; // eax
  void *v10[4]; // [esp+8h] [ebp-30h] BYREF
  XSurface v11; // [esp+18h] [ebp-20h] BYREF
  int v12; // [esp+28h] [ebp-10h]
  int v13[3]; // [esp+2Ch] [ebp-Ch] BYREF

  if ( *(int *)(a2 + 8) <= 0 || *(int *)(a2 + 12) <= 0 ) /*0x4371e5*/
    return 0; /*0x4371e8*/
  v6 = *a3; /*0x4371fa*/
  v7 = (*((int (__thiscall **)(void **))*a1 + 28))(a1); /*0x4371fc*/
  v8 = *(_DWORD *)(a2 + 12); /*0x437202*/
  v11.? = *(_DWORD *)(a2 + 8); /*0x437205*/
  v11.? = v8; /*0x437215*/
  v11.LockCount = 0; /*0x437219*/
  *(_DWORD *)v11.Surface = &XSurface_Vtable; /*0x437221*/
  v12 = v7; /*0x437229*/
  Buffer::Init((Buffer *)v13, v6, v7 * v8 * v11.?); /*0x43722d*/
  v9 = *(void **)(a2 + 8); /*0x437235*/
  v10[3] = *(void **)(a2 + 12); /*0x437241*/
  *(_DWORD *)v11.Surface = &BSurface_Vtable; /*0x43724b*/
  v10[0] = 0; /*0x437253*/
  v10[1] = 0; /*0x43725b*/
  v10[2] = v9; /*0x437263*/
  LOBYTE(v6) = XSurface::BlitPart(&v11, v10, a1, (void **)a2, 0, 1); /*0x437270*/
  Vector::Clear((int)v13); /*0x437272*/
  return v6; /*0x4371e7*/
}



// ==== 0x00437290  sub_437290  this=-  sig=csp ====
char __fastcall sub_437290(int *a1, int a2, int *a3)
{
  int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  _DWORD v11[4]; // [esp+8h] [ebp-30h] BYREF
  int (__thiscall **v12)(void *, char); // [esp+18h] [ebp-20h] BYREF
  int v13; // [esp+1Ch] [ebp-1Ch]
  int v14; // [esp+20h] [ebp-18h]
  int v15; // [esp+24h] [ebp-14h]
  int v16; // [esp+28h] [ebp-10h]
  _DWORD v17[3]; // [esp+2Ch] [ebp-Ch] BYREF

  if ( *(int *)(a2 + 8) <= 0 || *(int *)(a2 + 12) <= 0 ) /*0x4372a5*/
    return 0; /*0x4372a8*/
  v6 = *a3; /*0x4372ba*/
  v7 = (*(int (__thiscall **)(int *))(*a1 + 112))(a1); /*0x4372bc*/
  v8 = *(_DWORD *)(a2 + 12); /*0x4372c2*/
  v13 = *(_DWORD *)(a2 + 8); /*0x4372c5*/
  v14 = v8; /*0x4372d5*/
  v15 = 0; /*0x4372d9*/
  v12 = &XSurface_Vtable; /*0x4372e1*/
  v16 = v7; /*0x4372e9*/
  Buffer::Init(v17, v6, v7 * v8 * v13); /*0x4372ed*/
  v9 = *(_DWORD *)(a2 + 12); /*0x4372f5*/
  v10 = *a1; /*0x4372f8*/
  v11[2] = *(_DWORD *)(a2 + 8); /*0x4372fa*/
  v11[3] = v9; /*0x4372fe*/
  v12 = &BSurface_Vtable; /*0x437313*/
  v11[0] = 0; /*0x43731b*/
  v11[1] = 0; /*0x437323*/
  LOBYTE(v6) = (*(int (__thiscall **)(int *, int, int (__thiscall ***)(void *, char), _DWORD *, _DWORD, int))(v10 + 8))( /*0x437332*/
                 a1,
                 a2,
                 &v12,
                 v11,
                 0,
                 1);
  Vector::Clear((int)v17); /*0x437334*/
  return v6; /*0x4372a7*/
}



// ==== 0x00437350  BlitterCopySimpleSHP  this=XSurface  sig=csp ====
char __fastcall SHP_Blitter_CopySimple(int *a1, int *a2, int a3, int a4, int *a5, int a6, int a7, int a8, int a9)
{
  _DWORD *v11; // eax
  _DWORD *v13; // [esp-1Ch] [ebp-48h]
  _BYTE v14[20]; // [esp+Ch] [ebp-20h] BYREF
  int v15[3]; // [esp+20h] [ebp-Ch] BYREF

  v13 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a3 + 120))(a3, v14, a4); /*0x43738e*/
  v11 = (_DWORD *)(*(int (__thiscall **)(int *))(*a1 + 120))(a1); /*0x437396*/
  return BlitterCopySHP(a1, v11, v15, a2, a3, v13, a5, a6, a7, a8, a9, 0); /*0x4373a2*/
}



// ==== 0x004373B0  BlitterCopySHP  this=XSurface  sig=csp ====
char __fastcall SHP_Blitter_Copy(
        int *a1,
        _DWORD *a2,
        int *a3,
        int *a4,
        int a5,
        _DWORD *a6,
        int *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  _DWORD *v12; // eax
  int v14; // edx
  int v15; // edx
  int *v16; // edx
  int v17; // eax
  int v18; // ebp
  int v19; // eax
  int v20; // edx
  int v21; // ebx
  char result; // al
  int v23; // eax
  int v24; // edx
  unsigned __int8 v25; // di
  int v26; // ebp
  int v27; // edi
  int v28; // edi
  int v29; // ecx
  int *v30; // edi
  int v31; // eax
  int v32; // esi
  int v33; // esi
  int v34; // eax
  int v35; // edx
  int *v36; // esi
  int v37; // ecx
  int v38; // edx
  int v39; // eax
  int v40; // edx
  int v41; // eax
  int v42; // esi
  int v43; // edx
  unsigned int v44; // ecx
  unsigned int v45; // eax
  int v46; // eax
  int v47; // ecx
  char *v48; // ebx
  int *v49; // esi
  unsigned int v50; // edi
  unsigned int v51; // eax
  int v52; // eax
  unsigned int v53; // eax
  int v54; // eax
  int v55; // ecx
  int *v56; // esi
  unsigned int v57; // edi
  unsigned int v58; // eax
  int v59; // eax
  unsigned int v60; // eax
  unsigned int v61; // [esp+20h] [ebp-4Ch]
  int v62; // [esp+24h] [ebp-48h] BYREF
  unsigned int v63; // [esp+28h] [ebp-44h]
  int v64; // [esp+2Ch] [ebp-40h]
  int v65; // [esp+30h] [ebp-3Ch]
  int v66; // [esp+34h] [ebp-38h]
  int v67; // [esp+38h] [ebp-34h]
  int v68; // [esp+3Ch] [ebp-30h]
  int *v69; // [esp+40h] [ebp-2Ch]
  int v70; // [esp+44h] [ebp-28h]
  int v71; // [esp+48h] [ebp-24h]
  int v72; // [esp+4Ch] [ebp-20h] BYREF
  int v73; // [esp+50h] [ebp-1Ch]
  int v74; // [esp+54h] [ebp-18h]
  int v75; // [esp+58h] [ebp-14h]
  _DWORD v76[2]; // [esp+5Ch] [ebp-10h] BYREF
  int v77; // [esp+64h] [ebp-8h]
  int v78; // [esp+68h] [ebp-4h]

  v12 = a6; /*0x4373b3*/
  v76[0] = *a6; /*0x4373c1*/
  v69 = a1; /*0x4373c5*/
  v14 = a6[1]; /*0x4373c9*/
  LOBYTE(a6) = 0; /*0x4373cc*/
  v76[1] = v14; /*0x4373d1*/
  v62 = 0; /*0x4373d5*/
  v15 = v12[2]; /*0x4373d9*/
  v63 = 0; /*0x4373dc*/
  v77 = v15; /*0x4373e0*/
  v16 = a3; /*0x4373e4*/
  v17 = v12[3]; /*0x4373e8*/
  a3 = 0; /*0x4373eb*/
  v78 = v17; /*0x4373ef*/
  v72 = *v16; /*0x4373f5*/
  v61 = 0; /*0x4373f9*/
  v18 = 0; /*0x437400*/
  v73 = v16[1]; /*0x437402*/
  v65 = 0; /*0x437406*/
  v19 = v16[2]; /*0x43740a*/
  v66 = 0; /*0x43740d*/
  v74 = v19; /*0x437411*/
  v20 = v16[3]; /*0x437419*/
  v64 = 0; /*0x43741c*/
  v75 = v20; /*0x437423*/
  v67 = 0; /*0x437427*/
  v68 = 0; /*0x43742b*/
  a9 = 24 * a9 + 8484624; /*0x43743a*/
  v21 = 0; /*0x43745f*/
  result = CalcSurfaceBlitRects(&v72, a4, a5, v76, &a6, &v62, &a3); /*0x437461*/
  if ( result ) /*0x437468*/
  {
    if ( dword_87E8A4 ) /*0x43747c*/
    {
      v23 = *a2; /*0x437485*/
      v24 = *((_DWORD *)dword_87E8A4 + 1); /*0x43748d*/
      v71 = v73 + a2[1]; /*0x437490*/
      v25 = v71 - v24; /*0x437494*/
      v70 = v72 + v23; /*0x43749a*/
      v61 = StreamClass::ReadAndSeek(v72 + v23, v71 - v24); /*0x4374ac*/
      v21 = (2 * (v25 & 1)) | ((unsigned __int8)v70 ^ v25) & 1; /*0x4374b7*/
    }
    if ( g_ZBufferDescriptor ) /*0x4374c3*/
    {
      v26 = v72 + *a2; /*0x4374d6*/
      v27 = *((_DWORD *)g_ZBufferDescriptor + 1); /*0x4374d8*/
      v71 = v73 + a2[1]; /*0x4374dd*/
      v63 = Audio::GetSamplePosition(v26, v71 - v27); /*0x4374ea*/
      v64 = 0; /*0x4374f2*/
      v28 = *(_DWORD *)(a9 + 12); /*0x4374fa*/
      v67 = *(_DWORD *)(a9 + 8); /*0x437502*/
      v68 = v28; /*0x437509*/
      v29 = v28 / v67; /*0x43750d*/
      if ( *(_BYTE *)(a9 + 20) ) /*0x437513*/
      {
        v18 = *(_DWORD *)(a9 + 4) /*0x437545*/
            * ((a8
              + (unsigned __int16)(*((_WORD *)g_ZBufferDescriptor + 2)
                                 + *((_WORD *)g_ZBufferDescriptor + 18)
                                 - v73
                                 - *((_WORD *)a2 + 2)))
             / *(_DWORD *)(a9 + 4));
      }
      else
      {
        v18 = v29 /*0x437585*/
            * ((a8
              + (unsigned __int16)(*((_WORD *)g_ZBufferDescriptor + 2)
                                 + *((_WORD *)g_ZBufferDescriptor + 18)
                                 - v75
                                 - v73
                                 - *((_WORD *)a2 + 2)
                                 + 1))
             / v29)
            - v75 / v29;
        v64 = v28 - v75 % v29; /*0x437592*/
        if ( v64 == v28 ) /*0x437596*/
        {
          v64 = 0; /*0x43759c*/
          v18 += *(_DWORD *)(a9 + 16); /*0x4375a4*/
        }
      }
    }
    v30 = v69; /*0x4375a7*/
    v31 = (*(int (__thiscall **)(int *))(*v69 + 112))(v69); /*0x4375af*/
    v32 = v74 * v31; /*0x4375b6*/
    if ( v32 == (*(int (__thiscall **)(int *))(*v30 + 116))(v30) /*0x4375d8*/
      && (v33 = (*(int (__thiscall **)(int *))(*v30 + 116))(v30), v33 == (*(int (__thiscall **)(int *))(*a4 + 116))(a4)) )
    {
      v34 = v78 * v77; /*0x4375e2*/
      if ( v78 * v77 >= v75 * v74 ) /*0x4375ee*/
        v34 = v75 * v74; /*0x4375f0*/
      v35 = *a7; /*0x4375fc*/
      if ( (_BYTE)a6 ) /*0x4375fe*/
        (*(void (__stdcall **)(int, int *, int, _DWORD, _DWORD, _DWORD, int))(v35 + 12))(v62, a3, v34, 0, 0, 0, 1000); /*0x437616*/
      else
        (*(void (__stdcall **)(int, int *, int, _DWORD, _DWORD, _DWORD, int, _DWORD))(v35 + 4))( /*0x437636*/
          v62,
          a3,
          v34,
          0,
          0,
          0,
          1000,
          0);
    }
    else
    {
      v36 = a4; /*0x43763e*/
      a8 = (*(int (__thiscall **)(int *))(*a4 + 116))(a4); /*0x437649*/
      v37 = (*(int (__thiscall **)(int *))(*v30 + 116))(v30); /*0x437654*/
      a5 = v37; /*0x43765d*/
      if ( g_ZBufferDescriptor ) /*0x437661*/
        v65 = *((_DWORD *)g_ZBufferDescriptor + 10); /*0x437666*/
      if ( dword_87E8A4 ) /*0x437671*/
        v66 = *((_DWORD *)dword_87E8A4 + 10); /*0x437676*/
      if ( (_BYTE)a6 ) /*0x437680*/
      {
        a5 = -v37; /*0x437690*/
        a8 = -a8; /*0x43769c*/
        v38 = *v36; /*0x4376a0*/
        v66 = -v66; /*0x4376a4*/
        v65 = -v65; /*0x4376aa*/
        v39 = (*(int (__thiscall **)(int *))(v38 + 116))(v36); /*0x4376ae*/
        v40 = *v30; /*0x4376b5*/
        a3 = (int *)((char *)a3 + (v78 - 1) * v39); /*0x4376c1*/
        v41 = (*(int (__thiscall **)(int *))(v40 + 116))(v30); /*0x4376c7*/
        v42 = v78; /*0x4376d3*/
        v43 = (v75 - 1) * v41 + v62; /*0x4376da*/
        v62 = v43; /*0x4376e3*/
        if ( g_ZBufferDescriptor ) /*0x4376e7*/
        {
          v44 = v63 + 2 * (v78 + 0x7FFFFFFF * *((_DWORD *)g_ZBufferDescriptor + 10)); /*0x4376fb*/
          if ( v44 >= *((_DWORD *)g_ZBufferDescriptor + 7) ) /*0x437703*/
            v44 -= *((_DWORD *)g_ZBufferDescriptor + 8); /*0x437705*/
          v63 = v44; /*0x43770d*/
          v18 += 1 - v78; /*0x437713*/
        }
        if ( dword_87E8A4 ) /*0x43771d*/
        {
          v45 = v61 + 2 * (v78 + 0x7FFFFFFF * *((_DWORD *)dword_87E8A4 + 10)); /*0x437731*/
          if ( v45 >= *((_DWORD *)dword_87E8A4 + 7) ) /*0x437739*/
            v45 -= *((_DWORD *)dword_87E8A4 + 8); /*0x43773b*/
          v61 = v45; /*0x43773e*/
        }
      }
      else
      {
        v42 = v78; /*0x437744*/
        v43 = v62; /*0x437748*/
      }
      if ( v42 >= v75 ) /*0x437752*/
        v42 = v75; /*0x437754*/
      if ( (_BYTE)a6 ) /*0x43775c*/
      {
        if ( v42 > 0 ) /*0x437764*/
        {
          v46 = a10; /*0x43776a*/
          v47 = a11; /*0x43776e*/
          v48 = (char *)a3; /*0x437775*/
          v70 = v42; /*0x437779*/
          v49 = a7; /*0x43777d*/
          while ( 1 ) /*0x43778e*/
          {
            if ( (_WORD)v47 ) /*0x437791*/
            {
              a7 = (int *)*v49; /*0x43779a*/
              v50 = v63; /*0x43779e*/
              ((void (__thiscall *)(int *, int, char *, int, int, unsigned int, unsigned int, int, int))a7[4])( /*0x4377b6*/
                v49,
                v43,
                v48,
                v77,
                v18,
                v63,
                v61,
                v46,
                v47);
            }
            else
            {
              v50 = v63; /*0x4377bb*/
              (*(void (__thiscall **)(int *, int, char *, int, int, unsigned int, unsigned int, int))(*v49 + 12))( /*0x4377d4*/
                v49,
                v43,
                v48,
                v77,
                v18,
                v63,
                v61,
                v46);
            }
            v43 = a5 + v62; /*0x4377e3*/
            v62 += a5; /*0x4377e9*/
            v48 = (char *)a3 + a8; /*0x4377ed*/
            a3 = (int *)((char *)a3 + a8); /*0x4377f7*/
            if ( g_ZBufferDescriptor ) /*0x4377fb*/
            {
              v51 = v50 + 2 * v65; /*0x437801*/
              if ( v51 < *((_DWORD *)g_ZBufferDescriptor + 6) ) /*0x437809*/
                v51 += *((_DWORD *)g_ZBufferDescriptor + 8); /*0x43780b*/
              v63 = v51; /*0x437812*/
              v52 = v67 + v64; /*0x43781a*/
              v64 += v67; /*0x437822*/
              if ( v64 >= v68 ) /*0x437826*/
              {
                v18 += *(_DWORD *)(a9 + 16); /*0x43782c*/
                v64 = v52 - v68; /*0x437831*/
              }
            }
            if ( dword_87E8A4 ) /*0x43783d*/
            {
              v53 = v61 + 2 * v66; /*0x437847*/
              if ( v53 < *((_DWORD *)dword_87E8A4 + 6) ) /*0x43784f*/
                v53 += *((_DWORD *)dword_87E8A4 + 8); /*0x437851*/
              v61 = v53; /*0x437854*/
            }
            if ( !--v70 ) /*0x437861*/
              break; /*0x437861*/
            v46 = a10; /*0x437783*/
            v47 = a11; /*0x437787*/
          }
        }
      }
      else if ( v42 > 0 ) /*0x43786e*/
      {
        v54 = a10; /*0x437874*/
        v55 = a11; /*0x437878*/
        v70 = v42; /*0x43787f*/
        v56 = a7; /*0x437883*/
        while ( 1 ) /*0x437894*/
        {
          if ( (_WORD)v55 ) /*0x437897*/
          {
            a7 = (int *)*v56; /*0x4378a1*/
            v57 = v63; /*0x4378a5*/
            ((void (__thiscall *)(int *, int, int *, int, int, unsigned int, unsigned int, int, int, int))a7[2])( /*0x4378c1*/
              v56,
              v43,
              a3,
              v77,
              v18,
              v63,
              v61,
              v54,
              v21,
              v55);
          }
          else
          {
            v57 = v63; /*0x4378c6*/
            (*(void (__thiscall **)(int *, int, int *, int, int, unsigned int, unsigned int, int, int))(*v56 + 4))( /*0x4378e4*/
              v56,
              v43,
              a3,
              v77,
              v18,
              v63,
              v61,
              v54,
              v21);
          }
          v43 = a5 + v62; /*0x4378f3*/
          v21 ^= 3u; /*0x4378f9*/
          v62 += a5; /*0x4378fe*/
          a3 = (int *)((char *)a3 + a8); /*0x437902*/
          if ( g_ZBufferDescriptor ) /*0x43790e*/
          {
            v58 = v57 + 2 * v65; /*0x437914*/
            if ( v58 >= *((_DWORD *)g_ZBufferDescriptor + 7) ) /*0x43791c*/
              v58 -= *((_DWORD *)g_ZBufferDescriptor + 8); /*0x43791e*/
            v63 = v58; /*0x437925*/
            v59 = v67 + v64; /*0x43792d*/
            v64 += v67; /*0x437935*/
            if ( v64 >= v68 ) /*0x437939*/
            {
              v18 += *(_DWORD *)(a9 + 16); /*0x43793f*/
              v64 = v59 - v68; /*0x437944*/
            }
          }
          if ( dword_87E8A4 ) /*0x437950*/
          {
            v60 = v61 + 2 * v66; /*0x43795a*/
            if ( v60 >= *((_DWORD *)dword_87E8A4 + 7) ) /*0x437962*/
              v60 -= *((_DWORD *)dword_87E8A4 + 8); /*0x437964*/
            v61 = v60; /*0x437967*/
          }
          if ( !--v70 ) /*0x437974*/
            break; /*0x437974*/
          v55 = a11; /*0x437889*/
          v54 = a10; /*0x437890*/
        }
      }
      v30 = v69; /*0x43797a*/
    }
    (*(void (__thiscall **)(int *))(*v30 + 96))(v30); /*0x437982*/
    (*(void (__thiscall **)(int *))(*a4 + 96))(a4); /*0x43798b*/
    return 1; /*0x43798e*/
  }
  return result; /*0x43746a*/
}



// ==== 0x004379A0  sub_4379A0  this=-  sig=ida-proto ====
bool __fastcall sub_4379A0(int a1, int a2, _DWORD *a3, int a4, int *a5, int a6, int a7, int a8, int a9)
{
  _DWORD *v11; // eax
  int *v13; // [esp-28h] [ebp-54h]
  _BYTE v14[20]; // [esp+Ch] [ebp-20h] BYREF
  int v15[3]; // [esp+20h] [ebp-Ch] BYREF

  v13 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *, int))(*a3 + 120))(a3, v14, a4); /*0x4379e4*/
  v11 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 120))(a1); /*0x4379ec*/
  return BlitterRLEBlitSHP(a1, v11, v15, a2, a3, v13, a5, a6, a7, a8, a9, 0, 0, 0, 0); /*0x4379f8*/
}



// ==== 0x00437A10  BlitterRLEBlitSHP  this=-  sig=csp ====
char __fastcall BlitterRLEBlitSHP(
        int a1,
        CellStruct *a2,
        int *a3,
        int a4,
        _DWORD *a5,
        int *a6,
        int *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  int v16; // edx
  int v17; // esi
  int v18; // ebp
  int v19; // ebx
  char result; // al
  Coord2D *v21; // eax
  _DWORD *v22; // eax
  int v23; // edx
  int Stream_field_04; // esi
  int v25; // esi
  int v26; // ecx
  int v27; // eax
  int *v28; // ebp
  int v29; // eax
  int v30; // ecx
  int v31; // ebp
  int v32; // edi
  unsigned __int16 *v33; // edi
  int v34; // eax
  int v35; // ebp
  int v36; // eax
  int v37; // edx
  unsigned int v38; // eax
  int v39; // eax
  unsigned int v40; // eax
  _DWORD *v41; // [esp+24h] [ebp-80h]
  char *v42; // [esp+38h] [ebp-6Ch]
  int SamplePosition; // [esp+3Ch] [ebp-68h]
  int v44; // [esp+40h] [ebp-64h]
  int v46; // [esp+48h] [ebp-5Ch]
  int v47; // [esp+4Ch] [ebp-58h]
  int v48; // [esp+50h] [ebp-54h]
  StreamClass *m_Stream; // [esp+54h] [ebp-50h]
  int v50; // [esp+58h] [ebp-4Ch]
  int v51; // [esp+5Ch] [ebp-48h]
  int v52; // [esp+60h] [ebp-44h]
  char v53[8]; // [esp+64h] [ebp-40h] BYREF
  char v54[8]; // [esp+6Ch] [ebp-38h] BYREF
  int v55; // [esp+74h] [ebp-30h] BYREF
  char *v56; // [esp+78h] [ebp-2Ch]
  int v57; // [esp+80h] [ebp-24h]
  int v58; // [esp+84h] [ebp-20h] BYREF
  int v59; // [esp+88h] [ebp-1Ch]
  int v60; // [esp+8Ch] [ebp-18h]
  int v61; // [esp+90h] [ebp-14h]
  int v62; // [esp+94h] [ebp-10h] BYREF
  int v63; // [esp+98h] [ebp-Ch]
  int v64; // [esp+9Ch] [ebp-8h]
  int v65; // [esp+A0h] [ebp-4h]
  int v66; // [esp+A8h] [ebp+4h]
  int v67; // [esp+A8h] [ebp+4h]
  int v68; // [esp+B0h] [ebp+Ch]
  int v69; // [esp+B4h] [ebp+10h]
  int v70; // [esp+BCh] [ebp+18h]
  int v71; // [esp+C0h] [ebp+1Ch]

  v16 = a6[1]; /*0x437a23*/
  v62 = *a6; /*0x437a26*/
  v63 = v16; /*0x437a2a*/
  v17 = 0; /*0x437a2e*/
  SamplePosition = 0; /*0x437a33*/
  v64 = a6[2]; /*0x437a37*/
  v44 = 0; /*0x437a3b*/
  v65 = a6[3]; /*0x437a49*/
  v42 = 0; /*0x437a4d*/
  m_Stream = 0; /*0x437a53*/
  v58 = *a3; /*0x437a57*/
  v51 = 0; /*0x437a5b*/
  v69 = 0; /*0x437a62*/
  v59 = a3[1]; /*0x437a69*/
  v46 = 0; /*0x437a6d*/
  v47 = 0; /*0x437a74*/
  v60 = a3[2]; /*0x437a78*/
  v61 = a3[3]; /*0x437a8d*/
  v18 = 24 * a9 + 8484624; /*0x437a9c*/
  v50 = 0; /*0x437aa7*/
  v19 = 0; /*0x437aab*/
  v52 = v18; /*0x437aad*/
  result = IntersectSurfaceRects(&v58, (int)a2, &v62, (int)a5); /*0x437ab1*/
  if ( !result ) /*0x437ab8*/
    return result; /*0x437ab8*/
  v71 = v62 - *a5; /*0x437ad6*/
  v48 = v63 - a5[1]; /*0x437ae7*/
  v41 = CellStruct::Copy((CellStruct *)&v58, v53); /*0x437afd*/
  v21 = (Coord2D *)CellStruct::Copy(a2, &v55); /*0x437b02*/
  v22 = Coord2D::Add(v21, v54, v41); /*0x437b09*/
  v68 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 92))(a1, *v22, v22[1]); /*0x437b28*/
  if ( !v68 ) /*0x437b2f*/
    return 0; /*0x437b3a*/
  if ( g_ZBufferDescriptor ) /*0x437b45*/
  {
    v23 = a2->field_0 + v58; /*0x437b5c*/
    Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x437b5e*/
    v56 = (char *)a2->field_4 + v59; /*0x437b61*/
    v25 = (int)&v56[-Stream_field_04]; /*0x437b67*/
    SamplePosition = Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v23, v25); /*0x437b73*/
    v46 = *(_DWORD *)(v18 + 8); /*0x437b7c*/
    v69 = 0; /*0x437b80*/
    v47 = *(_DWORD *)(v18 + 12); /*0x437b91*/
    m_Stream = g_ZBufferDescriptor[2].m_Stream; /*0x437b95*/
    v26 = v47 / v46; /*0x437b9e*/
    if ( *(_BYTE *)(v18 + 20) ) /*0x437ba0*/
    {
      v27 = a12; /*0x437bcd*/
      v17 = *(_DWORD *)(v18 + 4) /*0x437bd4*/
          * ((a8 + (unsigned __int16)(LOWORD(g_ZBufferDescriptor[1].Stream_field_10) - v25))
           / *(_DWORD *)(v18 + 4));
      if ( a12 ) /*0x437bd9*/
      {
LABEL_7:
        v28 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v27 + 120))(v27, &v55); /*0x437bdf*/
        v29 = *v28; /*0x437bed*/
        v50 = v28[2]; /*0x437bf6*/
        v30 = a14 + v28[1]; /*0x437c0d*/
        v57 = v28[3]; /*0x437c16*/
        v42 = (char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)a12 + 92))(a12, v71 + a13 + v29, v30 + v48); /*0x437c30*/
        goto LABEL_12; /*0x437c34*/
      }
    }
    else
    {
      v17 = a8 /*0x437c67*/
          + (unsigned __int16)(LOWORD(g_ZBufferDescriptor->Stream_field_04)
                             + LOWORD(g_ZBufferDescriptor[1].Stream_field_10)
                             - LOWORD(a2->field_4)
                             - *((_WORD *)a3 + 6)
                             - *((_WORD *)a3 + 2)
                             + 1);
      v27 = a12; /*0x437c69*/
      if ( a12 ) /*0x437c72*/
        goto LABEL_7; /*0x437c72*/
      v66 = a3[1] + a3[3] - v59; /*0x437c82*/
      v17 = v26 * (v17 / v26) - v66 / v26; /*0x437c9d*/
      v69 = v47 - v66 % v26; /*0x437cb3*/
      if ( v69 == v47 ) /*0x437cba*/
      {
        v69 = 0; /*0x437cbf*/
        v17 += *(_DWORD *)(v18 + 16); /*0x437cca*/
      }
    }
    v42 = (char *)&unk_89C568; /*0x437ccc*/
  }
LABEL_12:
  if ( *(_DWORD *)&stru_87E790.__pad_D8[60] ) /*0x437cdc*/
  {
    v31 = a2->field_0 + v58; /*0x437ce7*/
    v32 = (int)a2->field_4 + v59 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 4); /*0x437cfa*/
    v44 = StreamClass::ReadAndSeek(*(int **)&stru_87E790.__pad_D8[60], v31, v32); /*0x437d18*/
    v51 = *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 40); /*0x437d1c*/
    v19 = (2 * (v32 & 1)) | ((unsigned __int8)v31 ^ (unsigned __int8)v32) & 1; /*0x437d20*/
  }
  v33 = (unsigned __int16 *)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a4 + 92))(a4, 0, 0); /*0x437d36*/
  if ( v33 ) /*0x437d3a*/
  {
    v34 = v48; /*0x437d51*/
    if ( v48 > 0 ) /*0x437d57*/
    {
      do /*0x437d64*/
      {
        v19 ^= 3u; /*0x437d5b*/
        v33 = (unsigned __int16 *)((char *)v33 + *v33); /*0x437d61*/
        --v34; /*0x437d63*/
      }
      while ( v34 ); /*0x437d64*/
    }
    v35 = a1; /*0x437d66*/
    v70 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 116))(a1); /*0x437d76*/
    v36 = v65; /*0x437d7d*/
    if ( v65 >= v61 ) /*0x437d83*/
      v36 = v61; /*0x437d85*/
    if ( v36 > 0 ) /*0x437d89*/
    {
      v67 = v36; /*0x437d96*/
      do /*0x437eda*/
      {
        v37 = *a7; /*0x437da4*/
        if ( (_WORD)a15 ) /*0x437daa*/
          (*(void (__thiscall **)(int *, int, unsigned __int16 *, int, int, int, int, int, int, int, char *, int))(v37 + 8))( /*0x437de4*/
            a7,
            v68,
            v33 + 1,
            v64,
            v71,
            v17,
            SamplePosition,
            v44,
            a10,
            v19,
            v42,
            a15);
        else
          (*(void (__thiscall **)(int *, int, unsigned __int16 *, int, int, int, int, int, int, int, char *))(v37 + 4))( /*0x437e20*/
            a7,
            v68,
            v33 + 1,
            v64,
            v71,
            v17,
            SamplePosition,
            v44,
            a10,
            v19,
            v42);
        v68 += v70; /*0x437e38*/
        v19 ^= 3u; /*0x437e45*/
        v33 = (unsigned __int16 *)((char *)v33 + *v33); /*0x437e48*/
        if ( g_ZBufferDescriptor ) /*0x437e4c*/
        {
          v38 = SamplePosition + 2 * (_DWORD)m_Stream; /*0x437e56*/
          if ( v38 >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x437e5e*/
            v38 -= g_ZBufferDescriptor[1].Stream_field_0C; /*0x437e60*/
          SamplePosition = v38; /*0x437e63*/
          if ( a12 ) /*0x437e70*/
          {
            v42 += v50; /*0x437e7c*/
          }
          else
          {
            v39 = v46 + v69; /*0x437e8d*/
            v69 += v46; /*0x437e95*/
            if ( v69 >= v47 ) /*0x437e9c*/
            {
              v17 += *(_DWORD *)(v52 + 16); /*0x437ea2*/
              v69 = v39 - v47; /*0x437ea7*/
            }
          }
          v40 = v44 + 2 * v51; /*0x437eb6*/
          if ( v40 >= *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) ) /*0x437ec2*/
            v40 -= *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32); /*0x437ec4*/
          v44 = v40; /*0x437ec7*/
        }
        --v67; /*0x437ed3*/
      }
      while ( v67 ); /*0x437eda*/
      v35 = a1; /*0x437ee0*/
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v35 + 96))(v35); /*0x437ee9*/
    (*(void (__thiscall **)(int))(*(_DWORD *)a4 + 96))(a4); /*0x437ef5*/
    return 1; /*0x437ef8*/
  }
  else
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 96))(a1); /*0x437d42*/
    return 0; /*0x437d45*/
  }
}



// ==== 0x00437F10  Coord2D::Add  this=Coord2D  sig=csp ====
_DWORD *__thiscall Coord2D::Add(Coord2D *this, _DWORD *a2, _DWORD *a3)
{
  int v3; // esi

  v3 = this->Coord2D_field_0x04 + a3[1]; /*0x437f21*/
  *a2 = *(_DWORD *)this->__pad_0 + *a3; /*0x437f27*/
  a2[1] = v3; /*0x437f29*/
  return a2; /*0x437f2c*/
}



// ==== 0x00437F30  CellStruct::Copy  this=IUnknown  sig=csp ====
_DWORD *__thiscall CellStruct::Copy(CellStruct *this, _DWORD *a2)
{
  int v3; // edx
  void *v4; // ecx

  v3 = this->field_0; /*0x437f34*/
  v4 = this->field_4; /*0x437f36*/
  *a2 = v3; /*0x437f39*/
  a2[1] = v4; /*0x437f3b*/
  return a2; /*0x437f3e*/
}



// ==== 0x00437F50  ObjectClass::method_437F50  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_437F50(ObjectClass *this)
{
  HRESULT v2; // esi
  LPVOID ppv; // [esp+Ch] [ebp-4h] BYREF

  this->AbstractClass = 0; /*0x437f68*/
  v2 = CoCreateInstance(&stru_7E9500, 0, 7u, &riid, &ppv); /*0x437f74*/
  if ( v2 < 0 ) /*0x437f78*/
    goto LABEL_5; /*0x437f78*/
  v2 = OleRun((LPUNKNOWN)ppv); /*0x437f85*/
  if ( v2 >= 0 ) /*0x437f89*/
    v2 = (**(int (__stdcall ***)(LPVOID, void *, ObjectClass *))ppv)(ppv, &unk_818C08, this); /*0x437f9a*/
  (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x437fa3*/
  if ( v2 < 0 ) /*0x437fa8*/
  {
LABEL_5:
    if ( v2 != -2147467262 ) /*0x437fb0*/
      WinAPI::Wrapper(v2); /*0x437fb3*/
  }
  return &this->AbstractClass; /*0x437fba*/
}



// ==== 0x00437FC0  COMObject::Release  this=COMObject  sig=csp ====
int __thiscall COMObject::Release(COMObject *this)
{
  int result; // eax

  result = *(_DWORD *)this->__pad_0; /*0x437fc0*/
  if ( *(_DWORD *)this->__pad_0 ) /*0x437fc0*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x437fc9*/
  return result; /*0x437fcc*/
}



// ==== 0x00437FD0  GameClass::initGameMode  this=GameClass  sig=csp ====
int __thiscall GameClass::initGameMode(GameClass *this, int a2, int a3)
{
  if ( !*(_DWORD *)this->__pad_0 ) /*0x437fd3*/
    WinAPI::Wrapper(-2147467261); /*0x437fdd*/
  return (*(int (__stdcall **)(_DWORD, int, int))(**(_DWORD **)this->__pad_0 + 12))(*(_DWORD *)this->__pad_0, a3, a2); /*0x437ff4*/
}



// ==== 0x00438000  BlowPipe::Draw  this=BlowPipe  sig=csp ====
int __thiscall BlowPipe::Draw(BlowPipe *this, int a2, int a3, int a4)
{
  if ( !*(_DWORD *)this->__pad_0 ) /*0x438003*/
    WinAPI::Wrapper(-2147467261); /*0x43800d*/
  (*(void (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)this->__pad_0 + 24))(*(_DWORD *)this->__pad_0, a3, a2, a4); /*0x438026*/
  return a3; /*0x43802b*/
}



// ==== 0x00438030  BlowPipe::DrawAlt  this=BlowPipe  sig=csp ====
int __thiscall BlowPipe::DrawAlt(BlowPipe *this, int a2, int a3, int a4)
{
  if ( !*(_DWORD *)this->__pad_0 ) /*0x438033*/
    WinAPI::Wrapper(-2147467261); /*0x43803d*/
  (*(void (__stdcall **)(_DWORD, int, int, int))(**(_DWORD **)this->__pad_0 + 28))(*(_DWORD *)this->__pad_0, a3, a2, a4); /*0x438056*/
  return a3; /*0x43805b*/
}



// ==== 0x00438060  BlowPipe::AddRef  this=BlowPipe  sig=csp ====
int __thiscall BlowPipe::AddRef(BlowPipe *this)
{
  int v2; // edi
  int v3; // eax

  v2 = 0; /*0x438064*/
  v3 = *((_DWORD *)this + 6); /*0x438066*/
  if ( v3 > 0 && this->BlowPipe_field_0x0C ) /*0x43806d*/
    v2 = Delegate::Dispatch((Pipe *)this, (int)&this->BlowPipe_field_0x10, v3); /*0x438080*/
  *((_DWORD *)this + 6) = 0; /*0x438084*/
  return v2 + GameClass::GetRelatedObject((Pipe *)this); /*0x438092*/
}



// ==== 0x004380A0  BlowPipe::Read  this=BlowPipe  sig=csp ====
char *__thiscall BlowPipe::Read(BlowPipe *this, char *Src, signed int Size)
{
  char *v3; // ebx
  size_t v4; // ebp
  int v6; // eax
  size_t v7; // edi
  size_t v8; // eax
  BlowPipe *BlowPipe_field_0x0C; // ecx
  size_t v10; // ebp
  BlowPipe *v11; // ecx
  int *v13; // [esp-10h] [ebp-1Ch]
  int *p_BlowPipe_field_0x10; // [esp-8h] [ebp-14h]
  int *v15; // [esp-8h] [ebp-14h]
  char *Srca; // [esp+10h] [ebp+4h]
  size_t Sizea; // [esp+14h] [ebp+8h]

  v3 = Src; /*0x4380a1*/
  v4 = Size; /*0x4380a6*/
  if ( !Src || Size < 1 || !this->BlowPipe_field_0x0C ) /*0x4380be*/
    return (char *)Delegate::Dispatch((Pipe *)this, (int)Src, Size); /*0x4381b8*/
  v6 = *((_DWORD *)this + 6); /*0x4380c9*/
  Srca = 0; /*0x4380cf*/
  if ( v6 ) /*0x4380d7*/
  {
    v7 = 8 - v6; /*0x4380de*/
    if ( 8 - v6 >= Size ) /*0x4380e2*/
      v7 = Size; /*0x4380e4*/
    memcpy((char *)&this->BlowPipe_field_0x10 + *((_DWORD *)this + 6), v3, v7); /*0x4380f0*/
    v3 += v7; /*0x4380fd*/
    v8 = v7 + *((_DWORD *)this + 6); /*0x4380ff*/
    v4 = Size - v7; /*0x438101*/
    *((_DWORD *)this + 6) = v8; /*0x438106*/
    Size -= v7; /*0x438109*/
    if ( v8 == 8 ) /*0x43810d*/
    {
      BlowPipe_field_0x0C = (BlowPipe *)this->BlowPipe_field_0x0C; /*0x438112*/
      p_BlowPipe_field_0x10 = &this->BlowPipe_field_0x10; /*0x43811b*/
      v13 = &this->BlowPipe_field_0x10; /*0x43811d*/
      if ( *((_DWORD *)this + 7) == 1 ) /*0x43811e*/
        BlowPipe::DrawAlt(BlowPipe_field_0x0C, (int)v13, 8, (int)p_BlowPipe_field_0x10); /*0x438120*/
      else
        BlowPipe::Draw(BlowPipe_field_0x0C, (int)v13, 8, (int)p_BlowPipe_field_0x10); /*0x438127*/
      Srca = (char *)Delegate::Dispatch((Pipe *)this, (int)&this->BlowPipe_field_0x10, 8); /*0x438136*/
      *((_DWORD *)this + 6) = 0; /*0x43813a*/
    }
  }
  if ( v4 >= 8 ) /*0x438144*/
  {
    v10 = v4 >> 3; /*0x43814a*/
    Sizea = Size - 8 * v10; /*0x438154*/
    do /*0x43818e*/
    {
      v11 = (BlowPipe *)this->BlowPipe_field_0x0C; /*0x43815b*/
      v15 = &this->BlowPipe_field_0x10; /*0x438164*/
      if ( *((_DWORD *)this + 7) == 1 ) /*0x438168*/
        BlowPipe::DrawAlt(v11, (int)v3, 8, (int)v15); /*0x43816a*/
      else
        BlowPipe::Draw(v11, (int)v3, 8, (int)v15); /*0x438171*/
      v3 += 8; /*0x438184*/
      --v10; /*0x438189*/
      Srca += Delegate::Dispatch((Pipe *)this, (int)&this->BlowPipe_field_0x10, 8); /*0x43818a*/
    }
    while ( v10 ); /*0x43818e*/
    v4 = Sizea; /*0x438190*/
  }
  if ( (int)v4 > 0 ) /*0x438197*/
  {
    memcpy(&this->BlowPipe_field_0x10, v3, v4); /*0x43819f*/
    *((_DWORD *)this + 6) = v4; /*0x4381a7*/
  }
  return Srca; /*0x4381ae*/
}



// ==== 0x004381D0  GameClass::processFrame  this=GameClass  sig=csp ====
_DWORD *__thiscall GameClass::processFrame(GameClass *this, int a2, int a3)
{
  _DWORD *result; // eax
  ObjectClass *v5; // eax
  GameClass *v6; // ecx

  result = *(_DWORD **)&this->__pad_8[4]; /*0x4381d3*/
  if ( !result ) /*0x4381d8*/
  {
    v5 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x4381dc*/
    if ( v5 ) /*0x4381e6*/
      result = sub_437F50(v5); /*0x4381ea*/
    else
      result = 0; /*0x4381f1*/
    *(_DWORD *)&this->__pad_8[4] = result; /*0x4381f3*/
  }
  v6 = *(GameClass **)&this->__pad_8[4]; /*0x4381f6*/
  if ( v6 ) /*0x4381fc*/
    return (_DWORD *)GameClass::initGameMode(v6, a2, a3); /*0x438208*/
  return result; /*0x4381f9*/
}



// ==== 0x00438210  BlowStraw::Get  this=BlowStraw  sig=csp ====
int __thiscall BlowStraw::Get(BlowStraw *this, char *a2, signed int Size)
{
  char *v3; // ebx
  signed int v5; // ebp
  int v7; // eax
  size_t v8; // edi
  size_t v9; // eax
  size_t v10; // ebx
  BlowPipe *v11; // ecx
  char *v12; // [esp-10h] [ebp-1Ch]
  char *v13; // [esp-8h] [ebp-14h]
  size_t Sizea; // [esp+14h] [ebp+8h]

  v3 = a2; /*0x438211*/
  if ( !a2 ) /*0x43821b*/
    return 0; /*0x43821b*/
  v5 = Size; /*0x438221*/
  if ( Size <= 0 ) /*0x438227*/
    return 0; /*0x4382ed*/
  if ( !*((_DWORD *)this + 3) ) /*0x43822d*/
    return Delegate::Invoke((Straw *)this, (int)a2, Size); /*0x438236*/
  Sizea = 0; /*0x438242*/
  while ( 1 ) /*0x438250*/
  {
    v7 = *((_DWORD *)this + 6); /*0x438250*/
    if ( v7 > 0 ) /*0x438255*/
    {
      v8 = v5; /*0x438259*/
      if ( v5 >= v7 ) /*0x43825b*/
        v8 = *((_DWORD *)this + 6); /*0x43825d*/
      memcpy(v3, (char *)this - v7 + 24, v8); /*0x438269*/
      *((_DWORD *)this + 6) -= v8; /*0x438278*/
      v5 -= v8; /*0x43827f*/
      a2 = &v3[v8]; /*0x438283*/
      Sizea += v8; /*0x438287*/
    }
    if ( !v5 ) /*0x43828d*/
      break; /*0x43828d*/
    v9 = Delegate::Invoke((Straw *)this, (int)this + 16, 8); /*0x438297*/
    v10 = v9; /*0x43829c*/
    if ( !v9 ) /*0x4382a0*/
      break; /*0x4382a0*/
    if ( v9 == 8 ) /*0x4382a5*/
    {
      v11 = (BlowPipe *)*((_DWORD *)this + 3); /*0x4382aa*/
      v13 = (char *)this + 16; /*0x4382ad*/
      v12 = (char *)this + 16; /*0x4382b2*/
      if ( *((_DWORD *)this + 7) == 1 ) /*0x4382b3*/
        BlowPipe::DrawAlt(v11, (int)v12, 8, (int)v13); /*0x4382b5*/
      else
        BlowPipe::Draw(v11, (int)v12, 8, (int)v13); /*0x4382bc*/
    }
    else
    {
      memcpy((char *)this - v9 + 24, (char *)this + 16, v9); /*0x4382cd*/
    }
    *((_DWORD *)this + 6) = v10; /*0x4382d7*/
    if ( v5 <= 0 ) /*0x4382da*/
      break; /*0x4382da*/
    v3 = a2; /*0x43824c*/
  }
  return Sizea; /*0x43823b*/
}



// ==== 0x00438300  GameClass::updateUI  this=GameClass  sig=csp ====
_DWORD *__thiscall GameClass::updateUI(GameClass *this, int a2, int a3)
{
  _DWORD *result; // eax
  ObjectClass *v5; // eax
  GameClass *v6; // ecx

  result = *(_DWORD **)&this->__pad_8[4]; /*0x438303*/
  if ( !result ) /*0x438308*/
  {
    v5 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x43830c*/
    if ( v5 ) /*0x438316*/
      result = sub_437F50(v5); /*0x43831a*/
    else
      result = 0; /*0x438321*/
    *(_DWORD *)&this->__pad_8[4] = result; /*0x438323*/
  }
  v6 = *(GameClass **)&this->__pad_8[4]; /*0x438326*/
  if ( v6 ) /*0x43832c*/
    return (_DWORD *)GameClass::initGameMode(v6, a2, a3); /*0x438338*/
  return result; /*0x438329*/
}



// ==== 0x00438340  sub_438340  this=-  sig=ida-proto ====
void sub_438340()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x43834c*/
  dbl_89C6A0 = Math::Sqrt(v0 + v0); /*0x43835e*/
}



// ==== 0x00438370  sub_438370  this=-  sig=ida-proto ====
void sub_438370()
{
  dbl_89C6F0 = dbl_89C6A0 / 60.0; /*0x43837c*/
}



// ==== 0x00438390  sub_438390  this=-  sig=ida-proto ====
void sub_438390()
{
  dbl_89C6D8 = 1.0 / dbl_89C6F0; /*0x43839c*/
}



// ==== 0x004383B0  sub_4383B0  this=-  sig=ida-proto ====
void sub_4383B0()
{
  dbl_89C6D0 = 0.0174532925199433 * 45.0; /*0x4383bc*/
}



// ==== 0x004383D0  sub_4383D0  this=-  sig=ida-proto ====
void sub_4383D0()
{
  dbl_89C6A8 = 0.0174532925199433 * 60.0; /*0x4383dc*/
}



// ==== 0x004383F0  sub_4383F0  this=-  sig=ida-proto ====
void sub_4383F0()
{
  dbl_89C680 = 0.0174532925199433 * 90.0; /*0x4383fc*/
}



// ==== 0x00438410  sub_438410  this=-  sig=ida-proto ====
__int64 sub_438410()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89C680 - dbl_89C6A8); /*0x438422*/
  result = Math::RoundToInt(v0 * dbl_89C6A0 * 0.5); /*0x438436*/
  dword_89C6F8 = result; /*0x43843b*/
  return result; /*0x438440*/
}



// ==== 0x00438450  sub_438450  this=-  sig=ida-proto ====
void sub_438450()
{
  dbl_89C6B0 = Math::ArcTan((double)dword_89C6F8 * 0.00390625); /*0x438467*/
}



// ==== 0x00438480  sub_438480  this=-  sig=ida-proto ====
void sub_438480()
{
  dbl_89C6C8 = Math::ArcTan((double)(2 * dword_89C6F8) / dbl_89C6A0); /*0x4384a2*/
}



// ==== 0x004384B0  sub_4384B0  this=-  sig=ida-proto ====
__int64 sub_4384B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C6F8) + 0.5); /*0x4384cb*/
  dword_89C6EC = result; /*0x4384d0*/
  return result; /*0x4384d6*/
}



// ==== 0x004384E0  sub_4384E0  this=-  sig=ida-proto ====
int sub_4384E0()
{
  word_89C698 = 0; /*0x4384e2*/
  word_89C69A = 0; /*0x4384e8*/
  return 0; /*0x4384ee*/
}



// ==== 0x004384F0  sub_4384F0  this=-  sig=ida-proto ====
int sub_4384F0()
{
  dword_89C6B8 = 0; /*0x4384f2*/
  dword_89C6BC = 0; /*0x4384f7*/
  dword_89C6C0 = 0; /*0x4384fc*/
  return 0; /*0x438501*/
}



// ==== 0x00438510  sub_438510  this=-  sig=ida-proto ====
int sub_438510()
{
  dword_89C6E8 = 0; /*0x438515*/
  dword_89C6E0 = 128; /*0x43851f*/
  dword_89C6E4 = 128; /*0x438524*/
  return 128; /*0x438529*/
}



// ==== 0x00438530  sub_438530  this=-  sig=ida-proto ====
int sub_438530()
{
  dword_89C688 = 0; /*0x438532*/
  dword_89C68C = 0; /*0x438537*/
  dword_89C690 = 0; /*0x43853c*/
  dword_89C694 = 0; /*0x438541*/
  return 0; /*0x438546*/
}



// ==== 0x00438550  BombClass::InitPool  this=BombClass  sig=ida-proto ====
int BombClass_InitPool()
{
  dword_89C66C = 0; /*0x438557*/
  dword_89C670 = 0; /*0x43855c*/
  byte_89C674 = 1; /*0x438561*/
  byte_89C675 = 0; /*0x438568*/
  dword_89C668 = (int)&DynamicVectorClass<BombClass *>::`vftable'; /*0x43856d*/
  dword_89C67C = 10; /*0x438577*/
  dword_89C678 = 0; /*0x438581*/
  return atexit(globalHelper_038590); /*0x43858c*/
}



// ==== 0x00438590  globalHelper_038590  this=-  sig=ida-proto ====
void __cdecl sub_438590()
{
  dword_89C668 = (int)&VectorClass<BombClass *>::`vftable'; /*0x438598*/
  if ( dword_89C66C && byte_89C675 ) /*0x4385ac*/
  {
    __3_YAXPAX_Z(dword_89C66C); /*0x4385af*/
    dword_89C66C = 0; /*0x4385b7*/
  }
  byte_89C675 = 0; /*0x4385bd*/
  dword_89C670 = 0; /*0x4385c3*/
}



// ==== 0x004385D0  BombClass::AbstractClass  this=BombClass  sig=csp ====
int __thiscall BombClass::AbstractClass(BombClass *this)
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x4385d4*/
  this->BombClass_field_54 = 0; /*0x4385de*/
  this->AbstractClass = &BombClass::`vftable'; /*0x4385e1*/
  this->? = &BombClass::`vftable'; /*0x4385e7*/
  this->? = &BombClass::`vftable'; /*0x4385ee*/
  this->? = &BombClass::`vftable'; /*0x4385f5*/
  this->BombClass_field_28 = 0; /*0x4385fc*/
  this->BombClass_field_2C = 0; /*0x4385ff*/
  this->BombClass_field_58 = 0; /*0x438602*/
  AudioController::Init((AudioController *)&this->audioController[3]); /*0x438605*/
  *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 524); /*0x438615*/
  if ( dword_89C678 < dword_89C670 /*0x43864a*/
    || (byte_89C675 || !dword_89C670)
    && dword_89C67C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89C668 + 8))(
         &dword_89C668,
         dword_89C670 + dword_89C67C,
         0) )
  {
    v2 = dword_89C678++; /*0x438657*/
    *((_DWORD *)dword_89C66C + v2) = this; /*0x438666*/
  }
  return (int)this; /*0x43866b*/
}



// ==== 0x00438720  TechnoClass::ApplyDamageEffects  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::ApplyDamageEffects(TechnoClass *this)
{
  int result; // eax
  char v3; // cl
  int *v4; // edx
  AnimClass *v5; // edi
  int v6; // ebx
  void *WarheadVersusMultiplier; // eax
  int fallRate; // ecx
  int v9; // ebx
  int v10; // ebp
  _WORD *v11; // eax
  int v12; // edi
  _WORD *v13; // eax
  __int16 v14; // cx
  int v15; // eax
  __int16 *v16; // eax
  void *v17; // [esp-8h] [ebp-40h]
  char v18; // [esp+13h] [ebp-25h]
  int v19; // [esp+14h] [ebp-24h]
  int v20; // [esp+14h] [ebp-24h]
  __int16 v21[2]; // [esp+18h] [ebp-20h] BYREF
  __int16 v22[2]; // [esp+1Ch] [ebp-1Ch] BYREF
  __int16 v23[2]; // [esp+20h] [ebp-18h] BYREF
  _BYTE v24[4]; // [esp+24h] [ebp-14h] BYREF
  _BYTE v25[4]; // [esp+28h] [ebp-10h] BYREF
  int v26; // [esp+2Ch] [ebp-Ch] BYREF
  int v27; // [esp+30h] [ebp-8h]
  int v28; // [esp+34h] [ebp-4h]

  result = this->?; /*0x43872b*/
  if ( result && !LOBYTE(this->?[2]) ) /*0x438736*/
  {
    v3 = *(_BYTE *)(result + 129); /*0x438741*/
    *(_DWORD *)(result + 56) = 0; /*0x438747*/
    if ( v3 ) /*0x43874c*/
    {
      *(_BYTE *)(this->? + 104) = 0; /*0x438751*/
      LOBYTE(this->?[2]) = 1; /*0x438755*/
    }
    else
    {
      *(_BYTE *)(this->? + 104) = 0; /*0x438764*/
      v4 = (int *)(this->? + 156); /*0x43876b*/
      LOBYTE(this->?[2]) = 1; /*0x438771*/
      v26 = *v4; /*0x438777*/
      v27 = v4[1]; /*0x438783*/
      v28 = v4[2]; /*0x43878a*/
      PlaySoundEffectAt( /*0x4387a3*/
        &v26,
        *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4044),
        (_DWORD *)this->?,
        *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4040),
        1,
        0);
      v5 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x4387b2*/
      if ( v5 ) /*0x4387b9*/
      {
        LOWORD(v19) = v26 / 256; /*0x4387d9*/
        HIWORD(v19) = v27 / 256; /*0x4387ee*/
        *(_DWORD *)v21 = v19; /*0x4387f7*/
        v6 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v21) + 59); /*0x438800*/
        v17 = (void *)Return::HRESULT_Fail(v26, v27, v28); /*0x438825*/
        WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier( /*0x43884a*/
                                            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4044),
                                            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4040),
                                            v6,
                                            &v26);
        AnimClass::ctor(v5, WarheadVersusMultiplier, &v26, 0, 1, (void *)0x2600, v17, 0); /*0x438852*/
      }
      fallRate = this->?; /*0x438857*/
      if ( fallRate /*0x438879*/
        && (*(int (__thiscall **)(int))(*(_DWORD *)fallRate + 44))(fallRate) == 6
        && *(_BYTE *)(*(_DWORD *)(this->? + 1312) + 5814) )
      {
        v18 = 0; /*0x438887*/
        v9 = -2; /*0x43888c*/
        do /*0x438946*/
        {
          v10 = -2; /*0x438891*/
          do /*0x43893c*/
          {
            v11 = (_WORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->? + 440))(this->?, v24); /*0x4388a0*/
            HIWORD(v20) = v9 + v11[1]; /*0x4388b3*/
            LOWORD(v20) = *v11 + v10; /*0x4388b8*/
            *(_DWORD *)v22 = v20; /*0x4388c5*/
            v12 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v22) + 14); /*0x4388d7*/
            v13 = (_WORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->? + 440))(this->?, v25); /*0x4388e1*/
            v14 = *v13 + v10; /*0x4388ee*/
            v21[1] = v9 + v13[1]; /*0x4388f4*/
            v21[0] = v14; /*0x4388f9*/
            *(_DWORD *)v23 = *(_DWORD *)v21; /*0x438906*/
            v15 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v23) + 17); /*0x43891b*/
            if ( v12 >= g_TerrainBridgeIndex && v12 < g_TerrainBridgeIndex + 16 || v15 >= 74 && v15 <= 101 ) /*0x438931*/
              v18 = 1; /*0x438933*/
            ++v10; /*0x438938*/
          }
          while ( v10 < 3 ); /*0x43893c*/
          ++v9; /*0x438942*/
        }
        while ( v9 < 3 ); /*0x438946*/
        v16 = (__int16 *)(*(int (__stdcall **)(_BYTE *))(*(_DWORD *)this->? + 440))(v25); /*0x43895e*/
        if ( v18 ) /*0x438957*/
          MapClass::ApplyTerrainDamage((MapClass *)&stru_87F5F0.__pad_58[416], v16); /*0x43896a*/
        else
          TerrainClass::ProcessSlope((TerrainClass *)&stru_87F5F0.__pad_58[416], v16); /*0x438982*/
      }
    }
    this->? = 0; /*0x43898c*/
    this->? = 0; /*0x43898f*/
    this->? = 0; /*0x438992*/
    result = AudioFile::Stop((AudioFile *)this->?); /*0x438995*/
    this->?[1] = 0; /*0x43899a*/
  }
  return result; /*0x43899d*/
}



// ==== 0x004389B0  ObjectClass::CleanupAudioAndRefs  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::CleanupAudioAndRefs(ObjectClass *this)
{
  int fallRate; // eax
  int result; // eax

  fallRate = this->fallRate; /*0x4389b6*/
  if ( fallRate ) /*0x4389bb*/
  {
    *(_DWORD *)(fallRate + 56) = 0; /*0x4389bd*/
    *(_BYTE *)(this->fallRate + 104) = 0; /*0x4389c3*/
  }
  LOBYTE(this->customSound_controller[2]) = 1; /*0x4389c9*/
  this->occupant = 0; /*0x4389cd*/
  this->fallRate = 0; /*0x4389d0*/
  this->owningHouseIndex = 0; /*0x4389d3*/
  result = AudioFile::Stop((AudioFile *)this->ambientSoundController); /*0x4389d6*/
  this->customSound_controller[1] = 0; /*0x4389db*/
  return result; /*0x4389de*/
}



// ==== 0x004389F0  BombClass::IsDeathBomb  this=BombClass  sig=csp ====
int __thiscall BombClass::IsDeathBomb(BombClass *this)
{
  return this->audioController[0]; /*0x4389f3*/
}



// ==== 0x00438A00  BombClass::GetCurrentFrame  this=BombClass  sig=csp ====
Iostream_init *__thiscall BombClass::GetCurrentFrame(BombClass *this)
{
  int v2; // ecx

  if ( this->audioController[0] == 1 ) /*0x438a04*/
    return (Iostream_init *)12; /*0x438a06*/
  v2 = 2 /*0x438a4c*/
     * ((*(_DWORD *)&stru_A8EB00.?[416] - this->audioController[1])
      / (*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4048)
       / 6));
  if ( *(_DWORD *)&stru_A8EB00.?[416] % (2 * *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4056)) >= *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4056) ) /*0x438a53*/
    ++v2; /*0x438a55*/
  if ( v2 < 12 ) /*0x438a59*/
    return __0Iostream_init_QAE_XZ_1((Iostream_init *)v2); /*0x438a59*/
  else
    return __0Iostream_init_QAE_XZ_1((Iostream_init *)0xB); /*0x438a5c*/
}



// ==== 0x00438A60  ObjectClass::??0Iostream_init_QAE_XZ_1  this=ObjectClass  sig=csp ====
Iostream_init *__thiscall __0Iostream_init_QAE_XZ_1(Iostream_init *this)
{
  return this; /*0x438a62*/
}



// ==== 0x00438A70  BombClass::TimeToExplode  this=BombClass  sig=csp ====
bool __thiscall BombClass::TimeToExplode(BombClass *this)
{
  return !this->audioController[0] /*0x438a8c*/
      && *(int *)&stru_A8EB00.?[416] > this->audioController[2]
      && !this->BombClass_field_58;
}



// ==== 0x00438A90  BombClass::Stat  this=BombClass  sig=csp ====
int __thiscall BombClass::Stat(BombClass *this, int *a2)
{
  int v3; // edx
  int BombClass_field_28; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int BombClass_field_2C; // eax
  int v9; // eax

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x438a99*/
  BombClass_field_28 = this->BombClass_field_28; /*0x438a9e*/
  if ( BombClass_field_28 ) /*0x438aa3*/
  {
    v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(BombClass_field_28 + 4) + 16))(BombClass_field_28 + 4); /*0x438aac*/
    Power::TimerProcess(v5); /*0x438ab2*/
  }
  v6 = *(_DWORD *)this->__pad_24; /*0x438ab7*/
  if ( v6 ) /*0x438abc*/
  {
    v7 = (*(int (__stdcall **)(int))(*(_DWORD *)(v6 + 4) + 16))(v6 + 4); /*0x438ac5*/
    Power::TimerProcess(v7); /*0x438acb*/
  }
  BombClass_field_2C = this->BombClass_field_2C; /*0x438ad0*/
  if ( BombClass_field_2C ) /*0x438ad5*/
  {
    v9 = (*(int (__stdcall **)(int))(*(_DWORD *)(BombClass_field_2C + 4) + 16))(BombClass_field_2C + 4); /*0x438ade*/
    Power::TimerProcess(v9); /*0x438ae4*/
  }
  LOBYTE(v3) = this->BombClass_field_58; /*0x438ae9*/
  return Power::FlagProcess((Power *)a2, v3); /*0x438af4*/
}



// ==== 0x00438B00  BombClass::ddtor  this=BombClass  sig=csp ====
int __stdcall BombClass::ddtor(BombClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x438b06*/
    return -2147467261; /*0x438b08*/
  *a2 = 108652931; /*0x438b16*/
  a2[1] = 299085213; /*0x438b1e*/
  a2[2] = 268441278; /*0x438b27*/
  a2[3] = unk_7E98BC; /*0x438b30*/
  return 0; /*0x438b0d*/
}



// ==== 0x00438B40  BombClass::Write  this=BombClass  sig=csp ====
int __stdcall BombClass::Write(BombClass *this, int a2)
{
  int Prefix_0; // edi

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x438b51*/
  if ( Prefix_0 >= 0 ) /*0x438b55*/
  {
    if ( this ) /*0x438b59*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x438b62*/
      this->AbstractClass = &BombClass::`vftable'; /*0x438b67*/
      this->? = &BombClass::`vftable'; /*0x438b6d*/
      this->? = &BombClass::`vftable'; /*0x438b74*/
      this->? = &BombClass::`vftable'; /*0x438b7b*/
    }
    AudioController::Init((AudioController *)&this->audioController[3]); /*0x438b85*/
    this->BombClass_field_54 = 0; /*0x438b8d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->BombClass_field_28); /*0x438b9a*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this->__pad_24); /*0x438ba8*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->BombClass_field_2C); /*0x438bb6*/
  }
  return Prefix_0; /*0x438bbd*/
}



// ==== 0x00438BD0  BombClass::Seek  this=BombClass  sig=csp ====
int __stdcall BombClass::Seek(BombClass *this, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x438be4*/
}



// ==== 0x00438BF0  ObjectClass::DispatchBuildingAudioEvents  this=ObjectClass  sig=csp ====
int __thiscall DispatchBuildingAudioEvents(ObjectClass *this)
{
  double v1; // st7
  int i; // esi
  _DWORD *v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int uniqueId; // eax
  int v9; // ecx
  int v10; // eax
  int j; // ebx
  AudioController *v12; // esi
  int v13; // ecx
  char *AudioController_field_04; // eax
  int *v15; // eax
  ObjectClass *nextObject; // eax
  int result; // eax
  int v18; // eax
  int v19; // ebx
  char v20; // al
  int v21; // ebp
  int v22; // esi
  House *v23; // eax
  _DWORD *v24; // ebp
  _DWORD *v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // edx
  int v30; // kr00_4
  char v31; // [esp+26h] [ebp-2Eh]
  char v32; // [esp+27h] [ebp-2Dh]
  int v33; // [esp+28h] [ebp-2Ch]
  int v34; // [esp+2Ch] [ebp-28h]
  int v35; // [esp+30h] [ebp-24h] BYREF
  int v36; // [esp+34h] [ebp-20h]
  int v37; // [esp+38h] [ebp-1Ch]
  _DWORD v38[3]; // [esp+3Ch] [ebp-18h] BYREF
  char v39[12]; // [esp+48h] [ebp-Ch] BYREF

  for ( i = this->? - 1; i >= 0; --i ) /*0x438c03*/
  {
    v4 = (_DWORD *)*((_DWORD *)this->? + i); /*0x438c08*/
    if ( v4 ) /*0x438c0d*/
    {
      if ( !v4[11] ) /*0x438c36*/
      {
        (*(void (__thiscall **)(_DWORD *, int))(*v4 + 32))(v4, 1); /*0x438c41*/
        uniqueId = this->?; /*0x438c44*/
        if ( i < uniqueId ) /*0x438c49*/
        {
          v9 = uniqueId - 1; /*0x438c4b*/
          v10 = i; /*0x438c4e*/
          for ( this->? = v9; v10 < this->?; *((_DWORD *)this->? + v10 - 1) = *((_DWORD *)this->? + v10) ) /*0x438c55*/
            ++v10; /*0x438c5a*/
        }
      }
    }
    else
    {
      v5 = this->?; /*0x438c0f*/
      if ( i < v5 ) /*0x438c14*/
      {
        v6 = v5 - 1; /*0x438c16*/
        v7 = i; /*0x438c19*/
        for ( this->? = v6; v7 < this->?; *((_DWORD *)this->? + v7 - 1) = *((_DWORD *)this->? + v7) ) /*0x438c20*/
          ++v7; /*0x438c25*/
      }
    }
  }
  for ( j = this->? - 1; j >= 0; --j ) /*0x438c70*/
  {
    v12 = (AudioController *)*((_DWORD *)this->? + j); /*0x438c79*/
    v13 = v12[4].AudioController_field_00[0]; /*0x438c7c*/
    if ( v13 != -1 ) /*0x438c82*/
    {
      AudioController_field_04 = (char *)v12[2].AudioController_field_04; /*0x438c84*/
      if ( AudioController_field_04[129] ) /*0x438c87*/
      {
        AudioController::Stop(v12 + 3); /*0x438c94*/
        v12[4].AudioController_field_04 = 0; /*0x438c99*/
      }
      else
      {
        v15 = (int *)(AudioController_field_04 + 156); /*0x438ca9*/
        if ( v12[4].AudioController_field_04 ) /*0x438ca2*/
        {
          v38[0] = *v15; /*0x438cdf*/
          v38[1] = v15[1]; /*0x438cea*/
          v38[2] = v15[2]; /*0x438cf4*/
          StartAudioController(v38, (int **)&v12[3]); /*0x438cf8*/
        }
        else
        {
          v35 = *v15; /*0x438cb0*/
          v36 = v15[1]; /*0x438cb7*/
          v37 = v15[2]; /*0x438cc6*/
          StartAudioControllerAt(v13, &v35, (int **)&v12[3]); /*0x438cca*/
          v12[4].AudioController_field_04 = (void *)1; /*0x438ccf*/
        }
      }
    }
  }
  nextObject = this->nextObject; /*0x438d04*/
  if ( (int)nextObject > 0 ) /*0x438d09*/
  {
    result = (int)&nextObject[-1].lineTrailer + 3; /*0x438d0b*/
    this->nextObject = (ObjectClass *)result; /*0x438d0c*/
    return result; /*0x438d16*/
  }
  v18 = this->?; /*0x438d17*/
  this->nextObject = (ObjectClass *)45; /*0x438d1a*/
  result = v18 - 1; /*0x438d21*/
  v34 = result; /*0x438d22*/
  if ( result >= 0 ) /*0x438d26*/
  {
    while ( 1 ) /*0x438d2f*/
    {
      v31 = 0; /*0x438d2f*/
      v19 = *((_DWORD *)this->? + result); /*0x438d34*/
      v32 = *(_BYTE *)(*(_DWORD *)(v19 + 44) + 104); /*0x438d40*/
      if ( (unsigned __int8)House::IsHumanPlayer(*(House **)(v19 + 40)) ) /*0x438d44*/
      {
        v20 = 1; /*0x438d4d*/
        goto LABEL_33; /*0x438d4f*/
      }
      v21 = 0; /*0x438d57*/
      v33 = 0; /*0x438d5b*/
      if ( this->owningHouseIndex <= 0 ) /*0x438d5f*/
        goto LABEL_32; /*0x438d5f*/
      while ( 1 ) /*0x438d68*/
      {
        v22 = *(_DWORD *)(this->? + 4 * v21); /*0x438d68*/
        v23 = (House *)(*(int (__thiscall **)(int))(*(_DWORD *)v22 + 60))(v22); /*0x438d6f*/
        if ( (unsigned __int8)House::IsHumanPlayer(v23) ) /*0x438d74*/
          break; /*0x438d74*/
LABEL_29:
        v33 = ++v21; /*0x438e17*/
        if ( v21 >= this->owningHouseIndex ) /*0x438e1b*/
          goto LABEL_32; /*0x438e1b*/
      }
      v24 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(v19 + 44) + 72))( /*0x438d92*/
                        *(_DWORD *)(v19 + 44),
                        v38);
      v25 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v22 + 72))(v22, v39); /*0x438d99*/
      v26 = v25[1]; /*0x438da3*/
      v35 = *v25 - *v24; /*0x438da6*/
      v27 = v25[2]; /*0x438daf*/
      v36 = v26 - v24[1]; /*0x438db2*/
      v37 = v27 - v24[2]; /*0x438dbe*/
      Math::Sqrt((double)v35 * (double)v35 + (double)v36 * (double)v36 + (double)v37 * (double)v37); /*0x438de7*/
      v30 = Math::RoundToInt(v1); /*0x438def*/
      LOWORD(v29) = HIWORD(v30); /*0x438def*/
      LOWORD(v28) = v30; /*0x438def*/
      if ( v28 >= *(_DWORD *)((*(int (__fastcall **)(int, int))(*(_DWORD *)v22 + 132))(v22, v29) + 1528) << 8 ) /*0x438e0b*/
        break; /*0x438e0b*/
      v31 = 1; /*0x438e22*/
LABEL_32:
      v20 = v31; /*0x438e27*/
LABEL_33:
      *(_BYTE *)(*(_DWORD *)(v19 + 44) + 104) = v20; /*0x438e2b*/
      if ( v20 != v32 ) /*0x438e37*/
        *(_BYTE *)(*(_DWORD *)(v19 + 44) + 128) = 1; /*0x438e3c*/
      result = --v34; /*0x438e47*/
      if ( v34 < 0 ) /*0x438e4c*/
        return result; /*0x438e4c*/
    }
    v21 = v33; /*0x438e0d*/
    goto LABEL_29; /*0x438e0d*/
  }
  return result; /*0x438d0f*/
}



// ==== 0x00438E60  nullsub_99  this=-  sig=ida-proto ====
void nullsub_99()
{
  ; /*0x438e60*/
}



// ==== 0x00438E70  AbstractClass::Initialize  this=AbstractClass  sig=csp ====
void __thiscall AbstractClass::Initialize(AbstractClass *this, void *a2, _DWORD *a3)
{
  AbstractClass *v4; // eax
  AbstractClass *v5; // esi
  int v6; // eax
  int v7; // ecx
  void *vtable2; // eax
  int abstractFlags; // ecx
  int uniqueId; // eax
  _DWORD *vtable1; // edx
  _DWORD v12[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( a2 && (*(int (__thiscall **)(void *))(*(_DWORD *)a2 + 44))(a2) == 15 && a3 && !a3[14] ) /*0x438ea3*/
  {
    v4 = (AbstractClass *)__2_YAPAXI_Z(0x5Cu); /*0x438eaf*/
    v5 = v4; /*0x438eb4*/
    if ( v4 ) /*0x438ebb*/
    {
      AbstractClass::Constructor(v4); /*0x438ec3*/
      v5[2].vtable3 = 0; /*0x438ecb*/
      v5->vtable0 = &BombClass::`vftable'; /*0x438ece*/
      v5->vtable1 = &BombClass::`vftable'; /*0x438ed4*/
      v5->vtable2 = &BombClass::`vftable'; /*0x438edb*/
      v5->vtable3 = &BombClass::`vftable'; /*0x438ee2*/
      v5[1].vtable1 = 0; /*0x438ee9*/
      v5[1].vtable2 = 0; /*0x438eec*/
      LOBYTE(v5[2].uniqueId) = 0; /*0x438eef*/
      AudioController::Init((AudioController *)&v5[1].nextArrayIndex); /*0x438ef2*/
      v5[2].vtable2 = *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 524); /*0x438f03*/
      if ( dword_89C678 < dword_89C670 /*0x438f37*/
        || (byte_89C675 || !dword_89C670)
        && dword_89C67C > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89C668 + 8))(
             &dword_89C668,
             dword_89C670 + dword_89C67C,
             0) )
      {
        v6 = dword_89C678++; /*0x438f44*/
        *((_DWORD *)dword_89C66C + v6) = v5; /*0x438f53*/
      }
    }
    else
    {
      v5 = 0; /*0x438f58*/
    }
    v5[1].vtable1 = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)a2 + 60))(a2); /*0x438f62*/
    v5[1].vtable0 = a2; /*0x438f69*/
    v5[1].vtable2 = a3; /*0x438f6c*/
    v5[1].uniqueId = *(_DWORD *)&stru_A8EB00.?[416]; /*0x438f75*/
    v7 = v5[1].uniqueId + *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4048); /*0x438f87*/
    v5[1].vtable3 = 0; /*0x438f89*/
    v5[1].abstractFlags = v7; /*0x438f8c*/
    a3[14] = v5; /*0x438f8f*/
    vtable2 = this->vtable2; /*0x438f92*/
    if ( this->uniqueId < (int)vtable2 /*0x438fb4*/
      || (BYTE1(this->vtable3) || !vtable2)
      && (abstractFlags = this->abstractFlags, abstractFlags > 0)
      && (*((unsigned __int8 (__thiscall **)(AbstractClass *, int, _DWORD))this->vtable0 + 2))(
           this,
           (int)vtable2 + abstractFlags,
           0) )
    {
      uniqueId = this->uniqueId; /*0x438fbb*/
      vtable1 = this->vtable1; /*0x438fbe*/
      this->uniqueId = uniqueId + 1; /*0x438fc4*/
      vtable1[uniqueId] = v5; /*0x438fc7*/
    }
    this->vtable4 = 1; /*0x438fca*/
    if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 528) != -1 ) /*0x438fde*/
    {
      if ( (unsigned __int8)House::IsHumanPlayer(*((House **)a2 + 135)) ) /*0x438fe6*/
      {
        v12[0] = a3[39]; /*0x438ffc*/
        v12[1] = a3[40]; /*0x439007*/
        v12[2] = a3[41]; /*0x439013*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 528), v12, 0); /*0x43901d*/
      }
    }
  }
}



// ==== 0x00439080  TechnoClass::checkRange  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::checkRange(TechnoClass *this, int a2)
{
  int owningHouseIndex; // eax
  int *p_nextArrayIndex; // esi
  void *NeedsSaveOrLink; // ecx
  int v5; // eax
  int v6; // edx

  owningHouseIndex = this->?; /*0x439080*/
  p_nextArrayIndex = &this->?; /*0x439084*/
  NeedsSaveOrLink = this->?; /*0x439087*/
  if ( owningHouseIndex < (int)NeedsSaveOrLink /*0x4390ae*/
    || ((LOBYTE(v5) = *((_BYTE *)p_nextArrayIndex + 13), (_BYTE)v5) || !NeedsSaveOrLink)
    && (v5 = p_nextArrayIndex[5], v5 > 0)
    && (LOBYTE(v5) = (*(int (__thiscall **)(int *, int, _DWORD))(*p_nextArrayIndex + 8))(
                       p_nextArrayIndex,
                       (int)NeedsSaveOrLink + v5,
                       0),
        (_BYTE)v5) )
  {
    v5 = p_nextArrayIndex[4]; /*0x4390b0*/
    v6 = p_nextArrayIndex[1]; /*0x4390b3*/
    p_nextArrayIndex[4] = v5 + 1; /*0x4390b9*/
    *(_DWORD *)(v6 + 4 * v5) = a2; /*0x4390c0*/
  }
  return v5; /*0x4390c3*/
}



// ==== 0x004390D0  TechnoClass::RemoveFromDynamicVector  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::RemoveFromDynamicVector(TechnoClass *this, char a2)
{
  int *p_nextArrayIndex; // esi
  int result; // eax
  int v4; // ecx
  int v5; // ecx

  p_nextArrayIndex = &this->?; /*0x4390d4*/
  result = (*(int (__thiscall **)(int *, char *))(this->? + 16))(&this->?, &a2); /*0x4390de*/
  if ( result != -1 ) /*0x4390e4*/
  {
    v4 = p_nextArrayIndex[4]; /*0x4390e6*/
    if ( result < v4 ) /*0x4390eb*/
    {
      v5 = v4 - 1; /*0x4390ed*/
      for ( p_nextArrayIndex[4] = v5; /*0x4390f3*/
            result < p_nextArrayIndex[4];
            *(_DWORD *)(p_nextArrayIndex[1] + 4 * result - 4) = *(_DWORD *)(p_nextArrayIndex[1] + 4 * result) )
      {
        ++result; /*0x4390f8*/
      }
    }
  }
  return result; /*0x439107*/
}



// ==== 0x00439110  Stream::FlushAndReset  this=Stream  sig=csp ====
int __thiscall Stream::FlushAndReset(Stream *this)
{
  Stream *v1; // esi
  StreamClass *m_Stream; // eax
  int Stream_field_08; // edi
  int Stream_field_04; // eax
  int Stream_field_0C; // edi

  v1 = this; /*0x439111*/
  m_Stream = this->m_Stream; /*0x439114*/
  Stream_field_08 = this->Stream_field_08; /*0x439116*/
  this->Stream_field_0C = 45; /*0x439119*/
  ((void (*)(void))m_Stream->m_Size)(); /*0x439120*/
  ((void (__thiscall *)(Stream *, int, _DWORD))v1->m_Stream->m_Position)(v1, Stream_field_08, 0); /*0x43912a*/
  Stream_field_04 = v1[1].Stream_field_04; /*0x43912d*/
  Stream_field_0C = v1[1].Stream_field_0C; /*0x439130*/
  v1 = (Stream *)((char *)v1 + 24); /*0x439133*/
  (*(void (__thiscall **)(Stream *))(Stream_field_04 + 12))(v1); /*0x439138*/
  return ((int (__thiscall *)(Stream *, int, _DWORD))v1->m_Stream->m_Position)(v1, Stream_field_0C, 0); /*0x439145*/
}



// ==== 0x00439150  AbstractClass::processDetection  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::processDetection(AbstractClass *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int uniqueId; // ecx
  int v6; // ecx
  int result; // eax
  int i; // ecx
  int v9; // eax

  v3 = a2; /*0x439158*/
  v4 = (*((int (__thiscall **)(AbstractClass *, int *))this->vtable0 + 4))(this, &a2); /*0x439165*/
  if ( v4 != -1 ) /*0x43916b*/
  {
    uniqueId = this->uniqueId; /*0x43916d*/
    if ( v4 < uniqueId ) /*0x439172*/
    {
      v6 = uniqueId - 1; /*0x439174*/
      for ( this->uniqueId = v6; v4 < this->uniqueId; *((_DWORD *)this->vtable1 + v4 - 1) = *((_DWORD *)this->vtable1 /*0x43917a*/
                                                                                            + v4) )
        ++v4; /*0x43917f*/
    }
  }
  result = this->uniqueId; /*0x43918e*/
  for ( i = 0; i < result; ++i ) /*0x439197*/
  {
    v9 = *((_DWORD *)this->vtable1 + i); /*0x43919c*/
    if ( v9 ) /*0x4391a1*/
    {
      if ( *(_DWORD *)(v9 + 36) == v3 ) /*0x4391a6*/
        *(_DWORD *)(v9 + 36) = 0; /*0x4391a8*/
    }
    result = this->uniqueId; /*0x4391ab*/
  }
  return result; /*0x4391b3*/
}



// ==== 0x004391C0  SaveGame::LoadArrayData  this=SaveGame  sig=csp ====
int __thiscall SaveGame::LoadArrayData(SaveGame *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // ebx
  int v6; // ecx
  int i; // ebx
  int v8; // [esp+40h] [ebp-4h] BYREF

  v3 = *a2; /*0x4391cc*/
  v8 = *(_DWORD *)&this->__pad_0[16]; /*0x4391d9*/
  result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(a2, &v8, 4, 0); /*0x4391dd*/
  if ( result >= 0 ) /*0x4391e2*/
  {
    v5 = 0; /*0x4391e8*/
    if ( v8 <= 0 ) /*0x4391ec*/
    {
LABEL_5:
      v6 = *a2; /*0x43920c*/
      v8 = *(_DWORD *)&this->__pad_0[40]; /*0x43921b*/
      result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v6 + 16))(a2, &v8, 4, 0); /*0x43921f*/
      if ( result >= 0 ) /*0x439224*/
      {
        for ( i = 0; i < v8; ++i ) /*0x43922e*/
        {
          result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))( /*0x43923e*/
                     a2,
                     *(_DWORD *)&this->__pad_0[28] + 4 * i,
                     4,
                     0);
          if ( result < 0 ) /*0x439243*/
            break; /*0x439243*/
        }
      }
    }
    else
    {
      while ( 1 ) /*0x4391fc*/
      {
        result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))( /*0x4391fc*/
                   a2,
                   *(_DWORD *)&this->__pad_0[4] + 4 * v5,
                   4,
                   0);
        if ( result < 0 ) /*0x439201*/
          break; /*0x439201*/
        if ( ++v5 >= v8 ) /*0x43920a*/
          goto LABEL_5; /*0x43920a*/
      }
    }
  }
  return result; /*0x43924e*/
}



// ==== 0x00439260  LoadGame::DeserializePointerArrays  this=LoadGame  sig=csp ====
int __thiscall LoadGame::DeserializePointerArrays(LoadGame *this, int a2)
{
  int v2; // ebx
  int result; // eax
  int v5; // eax
  int v6; // esi
  int LoadGame_field_0x08; // ecx
  int LoadGame_field_0x14; // eax
  int LoadGame_field_0x10; // eax
  int LoadGame_field_0x04; // edx
  int v11; // esi
  int v12; // ebp
  int v13; // eax
  int LoadGame_field_0x20; // ecx
  int LoadGame_field_0x2C; // eax
  int LoadGame_field_0x28; // eax
  int LoadGame_field_0x1C; // edx
  int v18; // esi
  int v19; // [esp+50h] [ebp-Ch]
  int v20; // [esp+54h] [ebp-8h] BYREF
  int v21; // [esp+58h] [ebp-4h] BYREF

  v2 = a2; /*0x439264*/
  result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &a2, 4, 0); /*0x439279*/
  if ( result >= 0 ) /*0x43927e*/
  {
    v5 = a2; /*0x439284*/
    v6 = 0; /*0x439288*/
    if ( a2 <= 0 ) /*0x43928c*/
    {
LABEL_11:
      v11 = 0; /*0x4392ed*/
      if ( v5 > 0 ) /*0x4392f1*/
      {
        do /*0x43930b*/
          ObjectPtr::RegisterForTracking( /*0x4392ff*/
            (int)&SwizzleManagerClass_Instance,
            (int *)(this->LoadGame_field_0x04 + 4 * v11++));
        while ( v11 < a2 ); /*0x43930b*/
      }
      v12 = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &a2, 4, 0); /*0x43931c*/
      if ( v12 >= 0 ) /*0x439320*/
      {
        v13 = a2; /*0x439326*/
        v19 = 0; /*0x43932a*/
        if ( a2 <= 0 ) /*0x439334*/
        {
LABEL_23:
          v18 = 0; /*0x43939e*/
          if ( v13 > 0 ) /*0x4393a2*/
          {
            do /*0x4393bc*/
              ObjectPtr::RegisterForTracking( /*0x4393b0*/
                (int)&SwizzleManagerClass_Instance,
                (int *)(this->LoadGame_field_0x1C + 4 * v18++));
            while ( v18 < a2 ); /*0x4393bc*/
          }
        }
        else
        {
          while ( 1 ) /*0x439345*/
          {
            v12 = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v21, 4, 0); /*0x439345*/
            if ( v12 < 0 ) /*0x439349*/
              break; /*0x439349*/
            LoadGame_field_0x20 = this->LoadGame_field_0x20; /*0x43934b*/
            if ( this->LoadGame_field_0x28 < LoadGame_field_0x20 /*0x439373*/
              || (BYTE1(this->LoadGame_field_0x24) || !LoadGame_field_0x20)
              && (LoadGame_field_0x2C = this->LoadGame_field_0x2C, LoadGame_field_0x2C > 0)
              && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->LoadGame_field_0x18 + 8))(
                   &this->LoadGame_field_0x18,
                   LoadGame_field_0x20 + LoadGame_field_0x2C,
                   0) )
            {
              LoadGame_field_0x28 = this->LoadGame_field_0x28; /*0x43937a*/
              LoadGame_field_0x1C = this->LoadGame_field_0x1C; /*0x43937d*/
              this->LoadGame_field_0x28 = LoadGame_field_0x28 + 1; /*0x439383*/
              *(_DWORD *)(LoadGame_field_0x1C + 4 * LoadGame_field_0x28) = v21; /*0x43938a*/
            }
            v13 = a2; /*0x439391*/
            if ( ++v19 >= a2 ) /*0x43939c*/
              goto LABEL_23; /*0x43939c*/
          }
        }
      }
      return v12; /*0x4393be*/
    }
    else
    {
      while ( 1 ) /*0x43929a*/
      {
        result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v20, 4, 0); /*0x43929a*/
        if ( result < 0 ) /*0x43929f*/
          break; /*0x43929f*/
        LoadGame_field_0x08 = this->LoadGame_field_0x08; /*0x4392a5*/
        if ( this->LoadGame_field_0x10 < LoadGame_field_0x08 /*0x4392ca*/
          || (BYTE1(this->LoadGame_field_0x0C) || !LoadGame_field_0x08)
          && (LoadGame_field_0x14 = this->LoadGame_field_0x14, LoadGame_field_0x14 > 0)
          && (*(unsigned __int8 (__thiscall **)(LoadGame *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
               this,
               LoadGame_field_0x08 + LoadGame_field_0x14,
               0) )
        {
          LoadGame_field_0x10 = this->LoadGame_field_0x10; /*0x4392d1*/
          LoadGame_field_0x04 = this->LoadGame_field_0x04; /*0x4392d4*/
          this->LoadGame_field_0x10 = LoadGame_field_0x10 + 1; /*0x4392da*/
          *(_DWORD *)(LoadGame_field_0x04 + 4 * LoadGame_field_0x10) = v20; /*0x4392e1*/
        }
        v5 = a2; /*0x4392e4*/
        if ( ++v6 >= a2 ) /*0x4392eb*/
          goto LABEL_11; /*0x4392eb*/
      }
    }
  }
  return result; /*0x4393c0*/
}



// ==== 0x004393D0  BombClass::StubReturn92  this=BombClass  sig=csp ====
int BombClass::StubReturn92(BombClass *this)
{
  return 92; /*0x4393d5*/
}



// ==== 0x004393E0  BombClass::StubReturn68  this=BombClass  sig=csp ====
int BombClass::StubReturn68(BombClass *this)
{
  return 68; /*0x4393e5*/
}



// ==== 0x004393F0  BombClass::CopyTo  this=BombClass  sig=csp ====
_DWORD *__thiscall BombClass::CopyTo(BombClass *this, char a2)
{
  int v3; // eax
  BombClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &BombClass::`vftable'; /*0x4393f7*/
  this->? = &BombClass::`vftable'; /*0x4393fd*/
  this->? = &BombClass::`vftable'; /*0x439404*/
  this->? = &BombClass::`vftable'; /*0x43940b*/
  AudioFileClass::Release((AudioFileClass *)&this->audioController[3]); /*0x439412*/
  v5 = this; /*0x439427*/
  v3 = (*(int (__thiscall **)(int *, BombClass **))(dword_89C668 + 16))(&dword_89C668, &v5); /*0x43942b*/
  if ( v3 != -1 && v3 < dword_89C678 && v3 < --dword_89C678 ) /*0x439446*/
  {
    do /*0x43945e*/
    {
      ++v3; /*0x43944e*/
      *((_DWORD *)dword_89C66C + v3 - 1) = *((_DWORD *)dword_89C66C + v3); /*0x439452*/
    }
    while ( v3 < dword_89C678 ); /*0x43945e*/
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x439462*/
  if ( (a2 & 1) != 0 ) /*0x43946c*/
    __3_YAXPAX_Z(this); /*0x43946f*/
  return &this->AbstractClass; /*0x439479*/
}



// ==== 0x00439480  sub_439480  this=-  sig=ida-proto ====
int sub_439480()
{
  dword_89C708 = 0; /*0x439482*/
  dword_89C70C = 0; /*0x439487*/
  dword_89C710 = 0; /*0x43948c*/
  dword_89C714 = 0; /*0x439491*/
  return 0; /*0x439496*/
}



// ==== 0x004394A0  sub_4394A0  this=-  sig=ida-proto ====
void sub_4394A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4394ac*/
  dbl_89C720 = Math::Sqrt(v0 + v0); /*0x4394be*/
}



// ==== 0x004394D0  sub_4394D0  this=-  sig=ida-proto ====
void sub_4394D0()
{
  dbl_89C770 = dbl_89C720 / 60.0; /*0x4394dc*/
}



// ==== 0x004394F0  sub_4394F0  this=-  sig=ida-proto ====
void sub_4394F0()
{
  dbl_89C758 = 1.0 / dbl_89C770; /*0x4394fc*/
}



// ==== 0x00439510  sub_439510  this=-  sig=ida-proto ====
void sub_439510()
{
  dbl_89C750 = 0.0174532925199433 * 45.0; /*0x43951c*/
}



// ==== 0x00439530  sub_439530  this=-  sig=ida-proto ====
void sub_439530()
{
  dbl_89C728 = 0.0174532925199433 * 60.0; /*0x43953c*/
}



// ==== 0x00439550  sub_439550  this=-  sig=ida-proto ====
void sub_439550()
{
  dbl_89C700 = 0.0174532925199433 * 90.0; /*0x43955c*/
}



// ==== 0x00439570  sub_439570  this=-  sig=ida-proto ====
__int64 sub_439570()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89C700 - dbl_89C728); /*0x439582*/
  result = Math::RoundToInt(v0 * dbl_89C720 * 0.5); /*0x439596*/
  dword_89C778 = result; /*0x43959b*/
  return result; /*0x4395a0*/
}



// ==== 0x004395B0  sub_4395B0  this=-  sig=ida-proto ====
void sub_4395B0()
{
  dbl_89C730 = Math::ArcTan((double)dword_89C778 * 0.00390625); /*0x4395c7*/
}



// ==== 0x004395E0  sub_4395E0  this=-  sig=ida-proto ====
void sub_4395E0()
{
  dbl_89C748 = Math::ArcTan((double)(2 * dword_89C778) / dbl_89C720); /*0x439602*/
}



// ==== 0x00439610  sub_439610  this=-  sig=ida-proto ====
__int64 sub_439610()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C778) + 0.5); /*0x43962b*/
  dword_89C76C = result; /*0x439630*/
  return result; /*0x439636*/
}



// ==== 0x00439640  sub_439640  this=-  sig=ida-proto ====
int sub_439640()
{
  word_89C718 = 0; /*0x439642*/
  word_89C71A = 0; /*0x439648*/
  return 0; /*0x43964e*/
}



// ==== 0x00439650  sub_439650  this=-  sig=ida-proto ====
int sub_439650()
{
  dword_89C738 = 0; /*0x439652*/
  dword_89C73C = 0; /*0x439657*/
  dword_89C740 = 0; /*0x43965c*/
  return 0; /*0x439661*/
}



// ==== 0x00439670  sub_439670  this=-  sig=ida-proto ====
int sub_439670()
{
  dword_89C768 = 0; /*0x439675*/
  dword_89C760 = 128; /*0x43967f*/
  dword_89C764 = 128; /*0x439684*/
  return 128; /*0x439689*/
}



// ==== 0x004397E0  AnimClass::InitRotation  this=AnimClass  sig=csp ====
_DWORD *__thiscall AnimClass::InitRotation(
        AnimClass *this,
        int *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _DWORD *a9,
        double a10)
{
  float v16; // eax
  float v17; // ecx
  float v18; // edx
  float *v19; // eax
  float *v20; // eax
  double v22; // [esp+0h] [ebp-68h]
  float v23; // [esp+4h] [ebp-64h]
  float v24; // [esp+Ch] [ebp-5Ch] BYREF
  float v25; // [esp+10h] [ebp-58h]
  float v26; // [esp+14h] [ebp-54h]
  float v27; // [esp+18h] [ebp-50h] BYREF
  float v28; // [esp+1Ch] [ebp-4Ch]
  float v29; // [esp+20h] [ebp-48h]
  float v30[4]; // [esp+28h] [ebp-40h] BYREF
  Matrix3x4 v31; // [esp+38h] [ebp-30h] BYREF
  int *v32; // [esp+6Ch] [ebp+4h]
  int v33; // [esp+70h] [ebp+8h]
  _DWORD *v34; // [esp+88h] [ebp+20h]

  this->AnimClass_field_0x0 = (void *)a3; /*0x4397f7*/
  this->AnimClass_field_0x4 = (void *)a4; /*0x4397fd*/
  this->AnimClass_field_0x8 = (void *)a5; /*0x439804*/
  *(_DWORD *)this->__pad_C = a6; /*0x43980e*/
  _EAX = a2; /*0x439811*/
  *(_DWORD *)&this->__pad_C[4] = a7; /*0x439815*/
  this->AnimClass_field_0x14 = (WinModemClass *)a8; /*0x439818*/
  __asm { fild dword ptr [eax] } /*0x43981b*/
  __asm { fstp dword ptr [esi+18h] }
  *(float *)this->__pad_18 = _ET1; /*0x439829*/
  __asm /*0x43982c*/
  {
    fild dword ptr [eax+4]
    fstp dword ptr [esi+1Ch]
  }
  *(float *)&this->__pad_18[4] = _ET1; /*0x43982f*/
  __asm { fild dword ptr [eax+8] } /*0x439832*/
  __asm { fstp dword ptr [esi+20h] }
  *(float *)&this->__pad_18[8] = _ET1; /*0x439838*/
  this->AnimClass_field_0x24 = (void *)*a9; /*0x43983d*/
  *(_QWORD *)this->__pad_28 = *(_QWORD *)(a9 + 1); /*0x439842*/
  v33 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -65535, 0xFFFF); /*0x43985c*/
  v34 = (_DWORD *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -65535, 0xFFFF); /*0x439890*/
  v32 = (int *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -65535, 0xFFFF); /*0x43989c*/
  __asm /*0x4398a3*/
  {
    fild [esp+68h+arg_0]
    fmul ds:flt_7E3560
    fstp [esp+68h+var_5C]
    fild [esp+68h+arg_1C]
    fmul ds:flt_7E3560
    fstp [esp+68h+var_58]
    fild [esp+68h+arg_4]
    fmul ds:flt_7E3560
    fstp [esp+68h+var_54]
    fld [esp+68h+var_58]
    fmul [esp+68h+var_58]
    fld [esp+68h+var_54]
    fmul [esp+68h+var_54]
    faddp st(1), st
    fld [esp+68h+var_5C]
    fmul [esp+68h+var_5C]
    faddp st(1), st
    fstp [esp+68h+var_68]; double
  }
  Math::Sqrt(v22); /*0x4398ef*/
  __asm { fcom ds:dbl_7E2800 } /*0x4398f4*/
  __asm { fnstsw ax }
  if ( (_AX & 0x4000) != 0 ) /*0x439902*/
  {
    v16 = v24; /*0x43992e*/
    v17 = v25; /*0x439932*/
    v18 = v26; /*0x439936*/
    __asm { fstp st } /*0x43993a*/
  }
  else
  {
    __asm /*0x439904*/
    {
      fld [esp+60h+var_5C]
      fdiv st, st(1)
      fstp [esp+60h+var_50]
      fld [esp+60h+var_58]
      fdiv st, st(1)
    }
    v16 = v27; /*0x439914*/
    __asm { fstp [esp+60h+var_4C] } /*0x439918*/
    v17 = v28; /*0x43991c*/
    __asm /*0x439920*/
    {
      fdivr [esp+60h+var_54]
      fstp [esp+60h+var_48]
    }
    v18 = v29; /*0x439928*/
  }
  __asm { fld [esp+60h+arg_20] } /*0x43993c*/
  v25 = v17; /*0x439944*/
  v26 = v18; /*0x439948*/
  __asm { fstp dword ptr [esp+64h+var_68+4]; float } /*0x439950*/
  v24 = v16; /*0x439957*/
  v19 = FromQuaternionAxisAngle(&v27, &v24, v23); /*0x43995b*/
  Float4::Copy((float *)this->AnimClass_field_0x40, v30, v19); /*0x439969*/
  Matrix3x4::Identity(&v31); /*0x439972*/
  v20 = ConvertMatrixToQuaternion(v30, (float *)v31.m_Data); /*0x43997f*/
  return Float4::Copy((float *)this->AnimClass_field_0x30, &v27, v20); /*0x439992*/
}



// ==== 0x004399A0  Coord::GetCoords  this=Coord  sig=csp ====
int Coord::GetCoords(int *this, _DWORD *a2)
{
  int v2; // ecx
  int v3; // esi
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // eax

  v3 = v2; /*0x4399a2*/
  LOWORD(v4) = Math::RoundToInt(*(float *)(v2 + 24)); /*0x4399a8*/
  v5 = v4; /*0x4399b0*/
  LOWORD(v6) = Math::RoundToInt(*(float *)(v3 + 28)); /*0x4399b2*/
  v7 = v6; /*0x4399ba*/
  LOWORD(v8) = Math::RoundToInt(*(float *)(v3 + 32)); /*0x4399bc*/
  *this = v5; /*0x4399c7*/
  this->q004 = v7; /*0x4399cb*/
  this->q008 = v8; /*0x4399cf*/
  return (int)this; /*0x4399c9*/
}



// ==== 0x004399E0  VoxelAnimClass::QuaternionToMatrix  this=VoxelAnimClass  sig=csp ====
float *__thiscall sub_4399E0(float *this, float *a2)
{
  float *v2; // esi
  float v4[12]; // [esp+8h] [ebp-30h] BYREF

  v2 = ToQuaternionMatrix(v4, this + 12); /*0x4399f1*/
  qmemcpy(a2, v2, 0x30u); /*0x4399fe*/
  return a2; /*0x439a00*/
}



// ==== 0x00439A10  JumpjetLocomotionClass::ComputeVectorLengthMetric  this=JumpjetLocomotionClass  sig=csp ====
double __thiscall JumpjetLocomotionClass::ComputeVectorLengthMetric(JumpjetLocomotionClass *this)
{
  int v2; // eax
  double v3; // st7
  int v4; // eax
  double Climb; // st7
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v12; // [esp+14h] [ebp-18h]
  int v13; // [esp+18h] [ebp-14h]
  _DWORD v14[3]; // [esp+20h] [ebp-Ch] BYREF

  LOWORD(v2) = Math::RoundToInt(*(float *)&this->TurnRate); /*0x439a1a*/
  v3 = *(float *)&this->Speed; /*0x439a1f*/
  v14[0] = v2; /*0x439a22*/
  LOWORD(v4) = Math::RoundToInt(v3); /*0x439a26*/
  Climb = this->Climb; /*0x439a2b*/
  v14[1] = v4; /*0x439a2e*/
  LOWORD(v6) = Math::RoundToInt(Climb); /*0x439a32*/
  v14[2] = v6; /*0x439a37*/
  Cell::GetGroundHeight(v14); /*0x439a45*/
  Math::RoundToInt(Climb); /*0x439a55*/
  Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v14); /*0x439a6a*/
  LOWORD(v7) = Math::RoundToInt(Climb); /*0x439a8c*/
  v12 = v7; /*0x439a94*/
  LOWORD(v8) = Math::RoundToInt(Climb); /*0x439a98*/
  v13 = v8; /*0x439aa1*/
  LOWORD(v9) = Math::RoundToInt(Climb); /*0x439aab*/
  Math::Sqrt((double)v9 * (double)v9 + (double)v12 * (double)v12 + (double)v13 * (double)v13); /*0x439adc*/
  LOWORD(v10) = Math::RoundToInt(Climb); /*0x439ae4*/
  return (double)v10; /*0x439af2*/
}



// ==== 0x00439B00  JumpjetLocomotionClass::Update2  this=JumpjetLocomotionClass  sig=csp ====
int __usercall JumpjetLocomotionClass::Update2@<eax>(double *this@<ecx>, float *a2@<edi>)
{
  double *v2; // esi
  double v3; // st7
  float *v4; // ebp
  char *v5; // ebx
  double v6; // st6
  float v7; // edx
  double v8; // st6
  float v9; // eax
  int v10; // eax
  float v11; // ecx
  int *v12; // eax
  int v13; // eax
  int v14; // eax
  int *v15; // eax
  int v16; // eax
  int v17; // eax
  Cell *v18; // edi
  double v19; // st7
  _DWORD *v20; // eax
  int v21; // ebx
  int Byte284; // eax
  float *v23; // eax
  double v24; // st7
  float v25; // edx
  int v26; // eax
  Triple *v27; // eax
  double *v28; // edi
  char *v29; // esi
  float v30; // edx
  Triple v31; // eax
  int *v32; // eax
  int v33; // eax
  int v34; // eax
  int *v35; // eax
  int v36; // eax
  int v37; // eax
  int level; // esi
  float v39; // ecx
  float v40; // edx
  int v41; // ecx
  int v42; // edx
  float v43; // ecx
  CellClass *v44; // eax
  int v45; // eax
  float *v46; // eax
  double v47; // st7
  float *v48; // eax
  double v49; // st7
  int result; // eax
  int v51; // [esp+0h] [ebp-148h]
  int v52; // [esp+0h] [ebp-148h]
  int v53; // [esp+0h] [ebp-148h]
  int v54; // [esp+0h] [ebp-148h]
  int v55; // [esp+0h] [ebp-148h]
  int *v56; // [esp+4h] [ebp-144h]
  int *v57; // [esp+4h] [ebp-144h]
  int *v58; // [esp+4h] [ebp-144h]
  int *v59; // [esp+4h] [ebp-144h]
  int *v60; // [esp+4h] [ebp-144h]
  int *v61; // [esp+8h] [ebp-140h]
  int *v62; // [esp+8h] [ebp-140h]
  float v63; // [esp+8h] [ebp-140h]
  float *v64; // [esp+8h] [ebp-140h]
  float v65; // [esp+Ch] [ebp-13Ch]
  bool v66; // [esp+19h] [ebp-12Fh]
  char v67; // [esp+1Ah] [ebp-12Eh]
  char v68; // [esp+1Bh] [ebp-12Dh]
  float v69; // [esp+1Ch] [ebp-12Ch]
  float v70; // [esp+1Ch] [ebp-12Ch]
  float v71; // [esp+1Ch] [ebp-12Ch]
  Triple v72[2]; // [esp+20h] [ebp-128h] BYREF
  float v73; // [esp+28h] [ebp-120h]
  double *v74; // [esp+2Ch] [ebp-11Ch]
  int v75; // [esp+30h] [ebp-118h]
  int GroundHeight; // [esp+34h] [ebp-114h]
  float v77; // [esp+38h] [ebp-110h]
  float v78; // [esp+3Ch] [ebp-10Ch]
  float v79; // [esp+40h] [ebp-108h]
  int v80; // [esp+44h] [ebp-104h]
  int v81; // [esp+48h] [ebp-100h]
  float v82; // [esp+4Ch] [ebp-FCh]
  Coord3D v83; // [esp+50h] [ebp-F8h] BYREF
  Coord3D v84; // [esp+5Ch] [ebp-ECh] BYREF
  int v85[2]; // [esp+6Ch] [ebp-DCh] BYREF
  int v86[4]; // [esp+78h] [ebp-D0h] BYREF
  float v87[12]; // [esp+88h] [ebp-C0h] BYREF
  float v88[12]; // [esp+B8h] [ebp-90h] BYREF
  float v89[12]; // [esp+E8h] [ebp-60h] BYREF
  char v90[48]; // [esp+118h] [ebp-30h] BYREF

  v2 = this; /*0x439b09*/
  v74 = this; /*0x439b0b*/
  v3 = this->Owner; /*0x439b17*/
  v4 = (float *)(this + 3); /*0x439b1a*/
  *(double *)v72[0].__tail_0 = v3; /*0x439b22*/
  v6 = *((float *)this + 11); /*0x439b28*/
  v7 = *((float *)this + 7); /*0x439b2b*/
  v77 = *((float *)this + 6); /*0x439b2e*/
  v8 = v6 - this->vtable2; /*0x439b32*/
  v9 = *((float *)this + 8); /*0x439b35*/
  v5 = (char *)this + 36; /*0x439b1d*/
  v78 = v7; /*0x439b3a*/
  v79 = v9; /*0x439b3e*/
  v80 = this->Crash; /*0x439b44*/
  v10 = this->Height; /*0x439b4a*/
  v85[0] = *(_DWORD *)this; /*0x439b4d*/
  v81 = v10; /*0x439b51*/
  v11 = *((float *)this + 11); /*0x439b58*/
  v85[1] = *((_DWORD *)v74 + 1); /*0x439b5b*/
  *((float *)v5 + 2) = v8; /*0x439b5f*/
  v82 = v11; /*0x439b62*/
  if ( v3 > 0.0 ) /*0x439b71*/
  {
    JumpjetLocomotionClass::ComputeVectorLengthMetric_0((float *)v5); /*0x439b75*/
    if ( v3 > *(double *)v72[0].__tail_0 ) /*0x439b83*/
    {
      *(float *)&v61 = v3 / v3; /*0x439b8c*/
      Coord::Scale(v61, v65); /*0x439b8f*/
    }
  }
  LOWORD(v12) = Math::RoundToInt(v4[2]); /*0x439b9c*/
  v56 = v12; /*0x439ba4*/
  LOWORD(v13) = Math::RoundToInt(v4[1]); /*0x439ba5*/
  v51 = v13; /*0x439bad*/
  LOWORD(v14) = Math::RoundToInt(*v4); /*0x439bae*/
  Coord3D::Set(&v84, v14, v51, (int)v56); /*0x439bb8*/
  Vector3::AddAssign((int *)v5, a2); /*0x439bc0*/
  LOWORD(v15) = Math::RoundToInt(v4[2]); /*0x439bc8*/
  v57 = v15; /*0x439bd0*/
  LOWORD(v16) = Math::RoundToInt(v4[1]); /*0x439bd1*/
  v52 = v16; /*0x439bd9*/
  LOWORD(v17) = Math::RoundToInt(*v4); /*0x439bda*/
  Coord3D::Set(&v83, v17, v52, (int)v57); /*0x439be4*/
  GroundHeight = Cell::GetGroundHeight(&v83); /*0x439bfe*/
  v75 = dword_89C76C + GroundHeight; /*0x439c09*/
  v18 = (Cell *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v83); /*0x439c17*/
  v68 = 0; /*0x439c19*/
  v67 = 0; /*0x439c1e*/
  if ( ((int)v18->Cell_field_0x140 & 0x100) != 0 /*0x439c46*/
    || (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v84)->flags[0] & 0x100) != 0 )
  {
    if ( v83.Coord3D_field_0x08 < v75 ) /*0x439c56*/
    {
      if ( v84.Coord3D_field_0x08 >= v75 ) /*0x439c65*/
        v68 = 1; /*0x439c67*/
    }
    else if ( v84.Coord3D_field_0x08 < v75 ) /*0x439c5a*/
    {
      v67 = 1; /*0x439c5c*/
    }
  }
  v66 = 0; /*0x439c70*/
  if ( !v68 && !v67 ) /*0x439c83*/
  {
    v19 = (double)GroundHeight; /*0x439c89*/
    if ( v19 <= v4[2] && v4[2] - 150.0 < v19 ) /*0x439ca9*/
    {
      v20 = Cell::IsBridge(v18); /*0x439cad*/
      v72[0] = (Triple)v20; /*0x439cb4*/
      if ( !v20 ) /*0x439cb8*/
      {
        if ( !(unsigned __int8)BuildingPlacement::ValidateType((BuildingPlacement *)v18, -1, -1) ) /*0x439cc0*/
        {
          v66 = 0; /*0x439cc9*/
          goto LABEL_24; /*0x439ccd*/
        }
        v20 = (_DWORD *)v72[0]; /*0x439ccf*/
      }
      v66 = 1; /*0x439cd5*/
      if ( v20 ) /*0x439cda*/
      {
        if ( *(_BYTE *)(v20[328] + 5823) ) /*0x439ce2*/
          v66 = v20[390] < 8; /*0x439cf5*/
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v20 + 128))(v20) ) /*0x439cfe*/
          v66 = 0; /*0x439d08*/
      }
    }
  }
LABEL_24:
  *(float *)v72 = (float)GroundHeight; /*0x439d11*/
  if ( v4[2] < (double)*(_DWORD *)v72 ) /*0x439d29*/
  {
    if ( !v68 ) /*0x439d4a*/
    {
      if ( !v67 ) /*0x439d5b*/
      {
LABEL_33:
        if ( (double)(GroundHeight - 100) < v4[2] ) /*0x439d88*/
          v4[2] = *(float *)v72; /*0x439d8e*/
        goto LABEL_35; /*0x439d8e*/
      }
      goto LABEL_32; /*0x439d5b*/
    }
LABEL_30:
    v4[2] = (float)v75; /*0x439d4c*/
    goto LABEL_35; /*0x439d53*/
  }
  if ( v68 ) /*0x439d2d*/
    goto LABEL_30; /*0x439d2d*/
  if ( !v67 ) /*0x439d35*/
  {
    if ( !v66 ) /*0x439d3d*/
    {
      v21 = 0; /*0x439d3f*/
      goto LABEL_43; /*0x439d43*/
    }
    goto LABEL_33; /*0x439d3d*/
  }
LABEL_32:
  v4[2] = (float)(v75 - 20); /*0x439d5d*/
LABEL_35:
  Byte284 = CellClass::GetByte284(&v83); /*0x439d91*/
  qmemcpy(v88, CopyAudioData(v90, Byte284), sizeof(v88)); /*0x439dc4*/
  v23 = InvertMatrix3x3Signs(v89, v88); /*0x439dcd*/
  v24 = *((float *)v5 + 1); /*0x439dd2*/
  v25 = *(float *)v5; /*0x439de3*/
  qmemcpy(v87, v23, sizeof(v87)); /*0x439de5*/
  *(float *)&v53 = -v24; /*0x439df2*/
  Triple::Set(v72, SLODWORD(v25), v53, *((_DWORD *)v5 + 2)); /*0x439df6*/
  v26 = Matrix3x3::TransformPoint(v86, (float *)v72, (float *)v62); /*0x439e0c*/
  v72[0] = *(Triple *)v26; /*0x439e17*/
  v72[1] = *(Triple *)(v26 + 4); /*0x439e1e*/
  *(float *)&v58 = *(double *)v85; /*0x439e2a*/
  v73 = *(float *)(v26 + 8); /*0x439e2d*/
  Coord::Scale(v58, v63); /*0x439e31*/
  v73 = -v73; /*0x439e46*/
  v27 = (Triple *)Matrix3x3::TransformPoint(v85, (float *)v72, v64); /*0x439e51*/
  v28 = v74; /*0x439e58*/
  v72[0] = *v27; /*0x439e5c*/
  v29 = (char *)(v74 + 8); /*0x439e65*/
  v72[1] = v27[1]; /*0x439e68*/
  v30 = *(float *)&v27[2]; /*0x439e6c*/
  v31 = v72[0]; /*0x439e6f*/
  v73 = v30; /*0x439e79*/
  *((float *)v5 + 1) = -*(float *)&v72[1]; /*0x439e7f*/
  *((float *)v5 + 2) = v30; /*0x439e82*/
  *(Triple *)v5 = v31; /*0x439e87*/
  v69 = -*(float *)Function::645D00(v29, 0); /*0x439e92*/
  *(float *)Function::645D00(v29, 0) = v69; /*0x439ea5*/
  v70 = -*(float *)Function::645D00(v29, 1); /*0x439eb2*/
  *(float *)Function::645D00(v29, 1) = v70; /*0x439ec5*/
  v71 = -*(float *)Function::645D00(v29, 2); /*0x439ed2*/
  *(float *)Function::645D00(v29, 2) = v71; /*0x439ee3*/
  LOWORD(v32) = Math::RoundToInt(*((float *)v28 + 8)); /*0x439ee8*/
  v59 = v32; /*0x439ef0*/
  LOWORD(v33) = Math::RoundToInt(*((float *)v28 + 7)); /*0x439ef1*/
  v54 = v33; /*0x439ef9*/
  LOWORD(v34) = Math::RoundToInt(*v4); /*0x439efa*/
  Coord::Subtract((Coord *)&v83, v34, v54, (int)v59); /*0x439f04*/
  LOWORD(v35) = Math::RoundToInt(v79); /*0x439f0d*/
  v60 = v35; /*0x439f16*/
  LOWORD(v36) = Math::RoundToInt(v78); /*0x439f17*/
  v55 = v36; /*0x439f20*/
  LOWORD(v37) = Math::RoundToInt(v77); /*0x439f21*/
  Coord::Subtract((Coord *)&v84, v37, v55, (int)v60); /*0x439f2b*/
  level = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v84)->level; /*0x439f3f*/
  if ( Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v83)->level - level >= 2 /*0x439fb1*/
    && (v82 < -0.0002 && *((float *)v28 + 8) > (double)v79 || v82 >= -0.0003 && v82 + v79 + 1.0 < *((float *)v28 + 8)) )
  {
    v39 = v78; /*0x439fbb*/
    v40 = v79; /*0x439fbf*/
    *v4 = v77; /*0x439fc3*/
    v4[1] = v39; /*0x439fc6*/
    v41 = v80; /*0x439fc9*/
    v4[2] = v40; /*0x439fcf*/
    v42 = v81; /*0x439fd2*/
    *(_DWORD *)v5 = v41; /*0x439fd6*/
    v43 = v82; /*0x439fd8*/
    *((_DWORD *)v5 + 1) = v42; /*0x439fdc*/
    *((float *)v5 + 2) = v43; /*0x439fe4*/
    v44 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v83); /*0x439ff1*/
    v45 = JumpjetLocomotionClass::AdjustClimbFacing((JumpjetLocomotionClass *)v44, &v84); /*0x439ff8*/
    if ( v45 != -1 ) /*0x43a000*/
    {
      qmemcpy(v87, Locomotor_Update((char *)v89, v45), sizeof(v87)); /*0x43a01f*/
      v46 = TransformMatrix3x4Point((float *)v86, v87, (float *)v5); /*0x43a02c*/
      *(float *)v5 = *v46; /*0x43a035*/
      *((float *)v5 + 1) = v46[1]; /*0x43a03a*/
      *((float *)v5 + 2) = v46[2]; /*0x43a040*/
      v47 = *v74; /*0x43a047*/
      *(float *)v5 = v47 * *(float *)v5; /*0x43a04d*/
      *((float *)v5 + 1) = v47 * *((float *)v5 + 1); /*0x43a054*/
      *((float *)v5 + 2) = v47 * *((float *)v5 + 2); /*0x43a05a*/
    }
  }
  v2 = v74; /*0x43a05d*/
  v21 = 1; /*0x43a061*/
LABEL_43:
  v48 = QuaternionMathMultiply((float *)v86, (float *)v2 + 12, (float *)v2 + 16); /*0x43a066*/
  Float4::Copy((float *)v2 + 12, &v84, v48); /*0x43a080*/
  v49 = JumpjetLocomotionClass::ComputeVectorLengthMetric((JumpjetLocomotionClass *)v2); /*0x43a087*/
  result = 2; /*0x43a098*/
  if ( v49 >= 2.5 ) /*0x43a09d*/
    return v21; /*0x43a09f*/
  return result; /*0x43a0a1*/
}



// ==== 0x0043A0B0  Triple::Set  this=Triple  sig=csp ====
_DWORD *__thiscall Triple::Set(Triple *this, int a2, int a3, int a4)
{
  *this = (Triple)a2; /*0x43a0ba*/
  *((_DWORD *)this + 1) = a3; /*0x43a0c0*/
  *((_DWORD *)this + 2) = a4; /*0x43a0c3*/
  return this; /*0x43a0c6*/
}



// ==== 0x0043A0D0  Coord::Scale  this=Coord  sig=csp ====
int Coord::Scale(int *this, float a2)
{
  float *v2; // ecx

  *v2 = *(float *)&this * *v2; /*0x43a0d8*/
  v2[1] = *(float *)&this * v2[1]; /*0x43a0e1*/
  v2[2] = *(float *)&this * v2[2]; /*0x43a0eb*/
  return (int)v2; /*0x43a0ee*/
}



// ==== 0x0043A100  Vector3::AddAssign  this=Vector3  sig=csp ====
int Vector3::AddAssign(int *this, float *a2)
{
  float *v2; // ecx

  *v2 = *(float *)this + *v2; /*0x43a10a*/
  v2[1] = *((float *)this + 1) + v2[1]; /*0x43a112*/
  v2[2] = *((float *)this + 2) + v2[2]; /*0x43a11b*/
  return (int)v2; /*0x43a11e*/
}



// ==== 0x0043A130  JumpjetLocomotionClass::ComputeVectorLengthMetric_0  this=Tactical  sig=csp ====
void __thiscall sub_43A130(float *this)
{
  Math::Sqrt(*this * *this + this->vtable2 * this->vtable2 + this->vtable3 * this->vtable3); /*0x43a154*/
}



// ==== 0x0043A160  sub_43A160  this=-  sig=ida-proto ====
void sub_43A160()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x43a16c*/
  dbl_89C790 = Math::Sqrt(v0 + v0); /*0x43a17e*/
}



// ==== 0x0043A190  sub_43A190  this=-  sig=ida-proto ====
void sub_43A190()
{
  dbl_89C7E0 = dbl_89C790 / 60.0; /*0x43a19c*/
}



// ==== 0x0043A1B0  sub_43A1B0  this=-  sig=ida-proto ====
void sub_43A1B0()
{
  dbl_89C7C8 = 1.0 / dbl_89C7E0; /*0x43a1bc*/
}



// ==== 0x0043A1D0  sub_43A1D0  this=-  sig=ida-proto ====
void sub_43A1D0()
{
  dbl_89C7C0 = 0.0174532925199433 * 45.0; /*0x43a1dc*/
}



// ==== 0x0043A1F0  sub_43A1F0  this=-  sig=ida-proto ====
void sub_43A1F0()
{
  dbl_89C798 = 0.0174532925199433 * 60.0; /*0x43a1fc*/
}



// ==== 0x0043A210  sub_43A210  this=-  sig=ida-proto ====
void sub_43A210()
{
  dbl_89C780 = 0.0174532925199433 * 90.0; /*0x43a21c*/
}



// ==== 0x0043A230  sub_43A230  this=-  sig=ida-proto ====
__int64 sub_43A230()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89C780 - dbl_89C798); /*0x43a242*/
  result = Math::RoundToInt(v0 * dbl_89C790 * 0.5); /*0x43a256*/
  dword_89C7E8 = result; /*0x43a25b*/
  return result; /*0x43a260*/
}



// ==== 0x0043A270  sub_43A270  this=-  sig=ida-proto ====
void sub_43A270()
{
  dbl_89C7A0 = Math::ArcTan((double)dword_89C7E8 * 0.00390625); /*0x43a287*/
}



// ==== 0x0043A2A0  sub_43A2A0  this=-  sig=ida-proto ====
void sub_43A2A0()
{
  dbl_89C7B8 = Math::ArcTan((double)(2 * dword_89C7E8) / dbl_89C790); /*0x43a2c2*/
}



// ==== 0x0043A2D0  sub_43A2D0  this=-  sig=ida-proto ====
__int64 sub_43A2D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C7E8) + 0.5); /*0x43a2eb*/
  dword_89C7DC = result; /*0x43a2f0*/
  return result; /*0x43a2f6*/
}



// ==== 0x0043A300  sub_43A300  this=-  sig=ida-proto ====
int sub_43A300()
{
  word_89C788 = 0; /*0x43a302*/
  word_89C78A = 0; /*0x43a308*/
  return 0; /*0x43a30e*/
}



// ==== 0x0043A310  sub_43A310  this=-  sig=ida-proto ====
int sub_43A310()
{
  dword_89C7A8 = 0; /*0x43a312*/
  dword_89C7AC = 0; /*0x43a317*/
  dword_89C7B0 = 0; /*0x43a31c*/
  return 0; /*0x43a321*/
}



// ==== 0x0043A330  sub_43A330  this=-  sig=ida-proto ====
int sub_43A330()
{
  dword_89C7D8 = 0; /*0x43a335*/
  dword_89C7D0 = 128; /*0x43a33f*/
  dword_89C7D4 = 128; /*0x43a344*/
  return 128; /*0x43a349*/
}



// ==== 0x0043A350  NeuronClass::NeuronClass  this=NeuronClass  sig=csp ====
int __thiscall NeuronClass::NeuronClass(NeuronClass *this)
{
  int v2; // eax
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x43a353*/
  *((_DWORD *)this + 9) = 0; /*0x43a358*/
  *((_DWORD *)this + 10) = 0; /*0x43a35f*/
  *((_DWORD *)this + 11) = 0; /*0x43a366*/
  this->vtable4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x43a372*/
  *(_DWORD *)this->__pad_0 = &NeuronClass::`vftable'; /*0x43a375*/
  this->NeuronClass_field_0x04 = (int)&NeuronClass::`vftable'; /*0x43a37b*/
  this->NeuronClass_field_0x08 = (int)&NeuronClass::`vftable'; /*0x43a382*/
  this->NeuronClass_field_0x0C = (int)&NeuronClass::`vftable'; /*0x43a389*/
  if ( g_BuildingLoadQueue_Array.?[1] < g_BuildingLoadQueue_Array.? /*0x43a3c5*/
    || (BYTE1(g_BuildingLoadQueue_Array.?[0]) || !g_BuildingLoadQueue_Array.?)
    && g_BuildingLoadQueue_Array.?[2] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_BuildingLoadQueue_Array.?[2] + 8))(
         &g_BuildingLoadQueue_Array.?[2],
         g_BuildingLoadQueue_Array.? + g_BuildingLoadQueue_Array.?[2],
         0) )
  {
    v2 = g_BuildingLoadQueue_Array.?[1]++; /*0x43a3d2*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v2) = this; /*0x43a3e1*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x43a41b*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v3 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x43a428*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3) = this; /*0x43a437*/
  }
  return (int)this->__pad_0; /*0x43a43c*/
}



// ==== 0x0043A500  NeuronClass::GetClassID  this=NeuronClass  sig=csp ====
int __stdcall COM::GetClassID(NeuronClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x43a506*/
    return -2147467261; /*0x43a508*/
  *a2 = 605729558; /*0x43a516*/
  a2[1] = 298994933; /*0x43a51e*/
  a2[2] = 268445372; /*0x43a527*/
  a2[3] = unk_7E998C; /*0x43a530*/
  return 0; /*0x43a50d*/
}



// ==== 0x0043A540  NeuronClass::Fire  this=NeuronClass  sig=csp ====
int __stdcall NeuronClass::Fire(NeuronClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x43a54b*/
  if ( result >= 0 ) /*0x43a552*/
  {
    if ( this ) /*0x43a556*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x43a55f*/
      *(_DWORD *)this->__pad_0 = &NeuronClass::`vftable'; /*0x43a564*/
      this->NeuronClass_field_0x04 = (int)&NeuronClass::`vftable'; /*0x43a56a*/
      this->NeuronClass_field_0x08 = (int)&NeuronClass::`vftable'; /*0x43a571*/
      this->NeuronClass_field_0x0C = (int)&NeuronClass::`vftable'; /*0x43a578*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 10); /*0x43a588*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 9); /*0x43a596*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 11); /*0x43a5a4*/
    return 0; /*0x43a5a9*/
  }
  return result; /*0x43a5ab*/
}



// ==== 0x0043A5B0  NeuronClass::Update  this=NeuronClass  sig=csp ====
int __stdcall NeuronClass::Update(NeuronClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this->__pad_0, a2, a3); /*0x43a5bf*/
  if ( result >= 0 ) /*0x43a5c6*/
    return 0; /*0x43a5c8*/
  return result; /*0x43a5ca*/
}



// ==== 0x0043A5D0  NeuronClass::Update  this=NeuronClass  sig=csp ====
int __thiscall Power::Update(NeuronClass *this, int *a2)
{
  AbstractClass::ProcessPower((AbstractClass *)this); /*0x43a5d9*/
  return Power::TimerProcess(*(_DWORD *)&stru_A8EB00.?[416] - this->vtable4); /*0x43a5f0*/
}



// ==== 0x0043A600  BrainClass::method_43A600  this=BrainClass  sig=csp ====
void __thiscall sub_43A600(BrainClass *this)
{
  int v2; // esi
  int v3; // ebp
  int v4; // ecx
  void *v5; // eax

  v2 = 0; /*0x43a608*/
  this->vfptr = (int)&BrainClass::`vftable'; /*0x43a60a*/
  v3 = *((_DWORD *)this + 5); /*0x43a610*/
  if ( v3 > 0 ) /*0x43a615*/
  {
    do /*0x43a632*/
    {
      v4 = *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v2); /*0x43a61a*/
      if ( v4 ) /*0x43a61f*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 32))(v4, 1); /*0x43a625*/
      ++v2; /*0x43a62b*/
      *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v2 - 4) = 0; /*0x43a62e*/
    }
    while ( v2 < v3 ); /*0x43a632*/
  }
  (*(void (__thiscall **)(BrainClass *))(*((_DWORD *)this + 1) + 12))(this + 1); /*0x43a63c*/
  v5 = (void *)*((_DWORD *)this + 2); /*0x43a63f*/
  *((_DWORD *)this + 1) = &VectorClass<NeuronClass *>::`vftable'; /*0x43a642*/
  if ( v5 && *((_BYTE *)this + 17) ) /*0x43a64c*/
  {
    __3_YAXPAX_Z(v5); /*0x43a652*/
    *((_DWORD *)this + 2) = 0; /*0x43a65a*/
  }
  *((_BYTE *)this + 17) = 0; /*0x43a65d*/
  *((_DWORD *)this + 3) = 0; /*0x43a660*/
}



// ==== 0x0043A670  ObjectClass::method_43A670  this=ObjectClass  sig=csp ====
int __thiscall sub_43A670(ObjectClass *this)
{
  int v2; // esi
  int abstractFlags; // ebx
  int v4; // ecx

  v2 = 0; /*0x43a675*/
  abstractFlags = this->?; /*0x43a677*/
  if ( abstractFlags > 0 ) /*0x43a67c*/
  {
    do /*0x43a69d*/
    {
      v4 = *((_DWORD *)this->? + v2); /*0x43a681*/
      if ( v4 ) /*0x43a686*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 32))(v4, 1); /*0x43a68c*/
      *((_DWORD *)this->? + v2++) = 0; /*0x43a695*/
    }
    while ( v2 < abstractFlags ); /*0x43a69d*/
  }
  return (*((int (__thiscall **)(void **))this->? + 3))(&this->?); /*0x43a6a8*/
}



// ==== 0x0043A6B0  ObjectClass::method_43A6B0  this=ObjectClass  sig=csp ====
int __thiscall sub_43A6B0(ObjectClass *this, int a2, int a3)
{
  int v4; // esi
  int abstractFlags; // ebx
  int v6; // ecx

  v4 = 0; /*0x43a6b5*/
  abstractFlags = this->?; /*0x43a6b7*/
  if ( abstractFlags > 0 ) /*0x43a6bc*/
  {
    do /*0x43a6dd*/
    {
      v6 = *((_DWORD *)this->? + v4); /*0x43a6c1*/
      if ( v6 ) /*0x43a6c6*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 32))(v6, 1); /*0x43a6cc*/
      *((_DWORD *)this->? + v4++) = 0; /*0x43a6d5*/
    }
    while ( v4 < abstractFlags ); /*0x43a6dd*/
  }
  (*((void (__thiscall **)(void **))this->? + 3))(&this->?); /*0x43a6e5*/
  this->? = a2; /*0x43a6f0*/
  this->? = (void *)a3; /*0x43a6f3*/
  return a2; /*0x43a6f6*/
}



// ==== 0x0043A770  ObjectClass::method_43A770  this=ObjectClass  sig=csp ====
int __thiscall sub_43A770(ObjectClass *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // esi
  int result; // eax
  _DWORD *abstractFlags; // eax
  int v7; // ecx
  int v8; // edi
  int v9; // ebp
  _DWORD *v10; // [esp-8h] [ebp-20h]
  int v11; // [esp-4h] [ebp-1Ch]

  v3 = a2; /*0x43a773*/
  if ( !a2 ) /*0x43a77c*/
    return -2147467261; /*0x43a781*/
  abstractFlags = (_DWORD *)this->?; /*0x43a78a*/
  v7 = *a2; /*0x43a78d*/
  v10 = a2; /*0x43a798*/
  a2 = abstractFlags; /*0x43a799*/
  result = (*(int (__stdcall **)(_DWORD *, _DWORD **, int, _DWORD))(v7 + 16))(v10, &a2, 4, 0); /*0x43a79d*/
  if ( result >= 0 ) /*0x43a7a2*/
  {
    v8 = 0; /*0x43a7a8*/
    if ( (int)a2 <= 0 ) /*0x43a7ac*/
    {
      return 0; /*0x43a7cd*/
    }
    else
    {
      v9 = a3; /*0x43a7ae*/
      while ( 1 ) /*0x43a7ba*/
      {
        v11 = *((_DWORD *)this->? + v8); /*0x43a7ba*/
        result = (*(int (__stdcall **)(int, _DWORD *, int))(*(_DWORD *)v11 + 24))(v11, v3, v9); /*0x43a7bd*/
        if ( result < 0 ) /*0x43a7c2*/
          break; /*0x43a7c2*/
        if ( ++v8 >= (int)a2 ) /*0x43a7cb*/
          return 0; /*0x43a7cb*/
      }
    }
  }
  return result; /*0x43a77e*/
}



// ==== 0x0043A7E0  AbstractClass::Construct  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::Construct(AbstractClass *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int result; // eax
  int v5; // eax
  AbstractClass *v6; // eax
  AbstractClass *v7; // esi
  int v8; // eax
  int v9; // eax
  void *vtable3; // ecx
  int nextArrayIndex; // eax
  int abstractFlags; // eax
  _DWORD *vtable2; // edx
  int v14; // [esp+30h] [ebp-8h] BYREF
  int v15; // [esp+34h] [ebp-4h]

  v2 = a2; /*0x43a7e7*/
  if ( !a2 ) /*0x43a7f1*/
    return -2147467261; /*0x43a7f6*/
  v5 = *a2; /*0x43a802*/
  v14 = 0; /*0x43a80d*/
  result = (*(int (__stdcall **)(_DWORD *, int *, int, _DWORD))(v5 + 12))(a2, &v14, 4, 0); /*0x43a811*/
  if ( result >= 0 ) /*0x43a816*/
  {
    v15 = 0; /*0x43a820*/
    if ( v14 <= 0 ) /*0x43a826*/
    {
      return 0; /*0x43a993*/
    }
    else
    {
      while ( 1 ) /*0x43a82e*/
      {
        v6 = (AbstractClass *)__2_YAPAXI_Z(0x38u); /*0x43a82e*/
        v7 = v6; /*0x43a833*/
        if ( !v6 ) /*0x43a83a*/
          break; /*0x43a83a*/
        AbstractClass::Constructor(v6); /*0x43a842*/
        v7[1].vtable0 = 0; /*0x43a847*/
        v7[1].vtable1 = 0; /*0x43a84a*/
        v7[1].vtable2 = 0; /*0x43a84d*/
        v7[1].vtable3 = *(void **)&stru_A8EB00.?[416]; /*0x43a856*/
        v7->vtable0 = &NeuronClass::`vftable'; /*0x43a859*/
        v7->vtable1 = &NeuronClass::`vftable'; /*0x43a85f*/
        v7->vtable2 = &NeuronClass::`vftable'; /*0x43a866*/
        v7->vtable3 = &NeuronClass::`vftable'; /*0x43a86d*/
        if ( g_BuildingLoadQueue_Array.?[1] < g_BuildingLoadQueue_Array.? /*0x43a8a5*/
          || (BYTE1(g_BuildingLoadQueue_Array.?[0]) || !g_BuildingLoadQueue_Array.?)
          && g_BuildingLoadQueue_Array.?[2] > 0
          && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_BuildingLoadQueue_Array.?[2] + 8))(
               &g_BuildingLoadQueue_Array.?[2],
               g_BuildingLoadQueue_Array.? + g_BuildingLoadQueue_Array.?[2],
               0) )
        {
          v8 = g_BuildingLoadQueue_Array.?[1]++; /*0x43a8b2*/
          *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v8) = v7; /*0x43a8c1*/
        }
        if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x43a8f8*/
          || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
          && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
               &g_BuildingLoadQueue_Array.LightVisibility,
               g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
               0) )
        {
          v9 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x43a905*/
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v9) = v7; /*0x43a914*/
        }
        result = (*((int (__stdcall **)(AbstractClass *, _DWORD *))v7->vtable0 + 5))(v7, v2); /*0x43a91b*/
        if ( result < 0 ) /*0x43a920*/
          return result; /*0x43a920*/
        if ( this->abstractFlags < (int)this->NeedsSaveOrLink ) /*0x43a92a*/
        {
          vtable3 = this->vtable3; /*0x43a92c*/
          if ( this->abstractFlags < (int)vtable3 /*0x43a951*/
            || (BYTE1(this->uniqueId) || !vtable3)
            && (nextArrayIndex = this->nextArrayIndex, nextArrayIndex > 0)
            && (*((unsigned __int8 (__thiscall **)(void **, int, _DWORD))this->vtable1 + 2))(
                 &this->vtable1,
                 (int)vtable3 + nextArrayIndex,
                 0) )
          {
            abstractFlags = this->abstractFlags; /*0x43a958*/
            vtable2 = this->vtable2; /*0x43a95b*/
            this->abstractFlags = abstractFlags + 1; /*0x43a961*/
            vtable2[abstractFlags] = v7; /*0x43a964*/
          }
          v2 = a2; /*0x43a967*/
          v7[1].vtable2 = this; /*0x43a96b*/
        }
        if ( ++v15 >= v14 ) /*0x43a97d*/
          return 0; /*0x43a97d*/
      }
      return -2147024882; /*0x43a987*/
    }
  }
  return result; /*0x43a7f3*/
}



// ==== 0x0043A9A0  NeuronClass::StubReturn60  this=NeuronClass  sig=csp ====
int NeuronClass::StubReturn60(NeuronClass *this)
{
  return 60; /*0x43a9a5*/
}



// ==== 0x0043A9B0  NeuronClass::StubReturn56  this=NeuronClass  sig=csp ====
int NeuronClass::StubReturn56(NeuronClass *this)
{
  return 56; /*0x43a9b5*/
}



// ==== 0x0043A9C0  NeuronClass::Reset  this=NeuronClass  sig=csp ====
_DWORD *__thiscall NeuronClass::Reset(NeuronClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  NeuronClass *v6; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this->__pad_0 = &NeuronClass::`vftable'; /*0x43a9cd*/
  this->NeuronClass_field_0x04 = (int)&NeuronClass::`vftable'; /*0x43a9d3*/
  this->NeuronClass_field_0x08 = (int)&NeuronClass::`vftable'; /*0x43a9da*/
  this->NeuronClass_field_0x0C = (int)&NeuronClass::`vftable'; /*0x43a9e1*/
  v6 = this; /*0x43a9ef*/
  v3 = (*(int (__thiscall **)(int *, NeuronClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x43a9f3*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v6);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x43aa03*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x43aa08*/
    for ( ; /*0x43aa0e*/
          v3 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v3) )
    {
      ++v3; /*0x43aa16*/
    }
  }
  v6 = this; /*0x43aa38*/
  v4 = (*(int (__thiscall **)(char *, NeuronClass **))(*(_DWORD *)&g_BuildingLoadQueue_Array.?[2] + 16))( /*0x43aa3c*/
         &g_BuildingLoadQueue_Array.?[2],
         &v6);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.?[1] ) /*0x43aa4c*/
  {
    --g_BuildingLoadQueue_Array.?[1]; /*0x43aa51*/
    for ( ; /*0x43aa57*/
          v4 < g_BuildingLoadQueue_Array.?[1];
          *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v4 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v4) )
    {
      ++v4; /*0x43aa5f*/
    }
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x43aa73*/
  if ( (a2 & 1) != 0 ) /*0x43aa7d*/
    __3_YAXPAX_Z(this); /*0x43aa80*/
  return this->__pad_0; /*0x43aa8a*/
}



// ==== 0x0043AA90  BrainClass::method_43AA90  this=BrainClass  sig=csp ====
_DWORD *__thiscall sub_43AA90(BrainClass *this, char a2)
{
  int v3; // esi
  int v4; // ebp
  int v5; // ecx
  void *v6; // eax

  v3 = 0; /*0x43aa95*/
  this->vfptr = (int)&BrainClass::`vftable'; /*0x43aa97*/
  v4 = *((_DWORD *)this + 5); /*0x43aa9d*/
  if ( v4 > 0 ) /*0x43aaa2*/
  {
    do /*0x43aac3*/
    {
      v5 = *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v3); /*0x43aaa7*/
      if ( v5 ) /*0x43aaac*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x43aab2*/
      ++v3; /*0x43aab8*/
      *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v3 - 4) = 0; /*0x43aabb*/
    }
    while ( v3 < v4 ); /*0x43aac3*/
  }
  (*(void (__thiscall **)(BrainClass *))(*((_DWORD *)this + 1) + 12))(this + 1); /*0x43aacd*/
  v6 = (void *)*((_DWORD *)this + 2); /*0x43aad0*/
  *((_DWORD *)this + 1) = &VectorClass<NeuronClass *>::`vftable'; /*0x43aad3*/
  if ( v6 && *((_BYTE *)this + 17) ) /*0x43aadd*/
  {
    __3_YAXPAX_Z(v6); /*0x43aae5*/
    *((_DWORD *)this + 2) = 0; /*0x43aaed*/
  }
  *((_BYTE *)this + 17) = 0; /*0x43aaf8*/
  *((_DWORD *)this + 3) = 0; /*0x43aafe*/
  if ( (a2 & 1) != 0 ) /*0x43ab05*/
    __3_YAXPAX_Z(this); /*0x43ab08*/
  return &this->vfptr; /*0x43ab12*/
}



// ==== 0x0043AB20  _VectorClass_PAVNeuronClass::Update  this=VectorClass  sig=csp ====
int __thiscall NeuronClass_25::Update(_VectorClass_PAVNeuronClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x43ab2a*/
}



// ==== 0x0043AB30  _VectorClass_PAVNeuronClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall NeuronClass_25::AddRef(_VectorClass_PAVNeuronClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x43ab32*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x43ab3d*/
  {
    v3 = 0; /*0x43ab3f*/
    if ( m_8 <= 0 ) /*0x43ab43*/
      return 1; /*0x43ab63*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x43ab45*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x43ab4b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x43ab54*/
    {
      ++v3; /*0x43ab56*/
      ++v4; /*0x43ab57*/
      if ( v3 >= m_8 ) /*0x43ab5c*/
        return 1; /*0x43ab5c*/
    }
  }
  return 0; /*0x43ab5e*/
}



// ==== 0x0043AB70  _VectorClass_PAVNeuronClass::Release  this=VectorClass  sig=csp ====
char __thiscall NeuronClass_25::Release(_VectorClass_PAVNeuronClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x43ab7c*/
  {
    LOBYTE(this->m_C) = 0; /*0x43ab86*/
    if ( a3 ) /*0x43ab8c*/
      v4 = a3; /*0x43aba2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x43ab9e*/
    LOBYTE(this->m_C) = 1; /*0x43aba6*/
    if ( v4 ) /*0x43abaa*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x43abb5*/
      {
        m_8 = this->m_8; /*0x43abbc*/
        if ( a2 < m_8 ) /*0x43abc1*/
          m_8 = a2; /*0x43abc3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x43abc9*/
          ++i; /*0x43abce*/
        if ( BYTE1(this->m_C) ) /*0x43abdb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x43abe6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x43abee*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x43abf7*/
      this->m_8 = a2; /*0x43abff*/
      BYTE1(this->m_C) = a3 == 0; /*0x43ac02*/
      return 1; /*0x43ac08*/
    }
    else
    {
      return 0; /*0x43abaf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVNeuronClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x43ac12*/
    return 1; /*0x43ac18*/
  }
}



// ==== 0x0043AC20  _VectorClass_PAVNeuronClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall NeuronClass_25::ddtor(_VectorClass_PAVNeuronClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x43ac2d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x43ac33*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x43ac3b*/
  }
  BYTE1(this->m_C) = 0; /*0x43ac3e*/
  this->m_8 = 0; /*0x43ac41*/
}



// ==== 0x0043AC50  _VectorClass_PAVNeuronClass::Activate  this=VectorClass  sig=csp ====
int __thiscall NeuronClass_25::Activate(_VectorClass_PAVNeuronClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x43ac50*/
    return 0; /*0x43ac58*/
  m_8 = this->m_8; /*0x43ac5e*/
  result = 0; /*0x43ac61*/
  if ( m_8 <= 0 ) /*0x43ac65*/
    return -1; /*0x43ac7c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x43ac6b*/
  {
    if ( ++result >= m_8 ) /*0x43ac7a*/
      return -1; /*0x43ac7a*/
  }
  return result; /*0x43ac5a*/
}



// ==== 0x0043AC90  _VectorClass_PAVNeuronClass::Fire  this=VectorClass  sig=csp ====
unsigned int __thiscall NeuronClass_25::Fire(_VectorClass_PAVNeuronClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x43ac90*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x43aca5*/
  else
    return 0; /*0x43ac97*/
}



// ==== 0x0043ACB0  _VectorClass_PAVNeuronClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall NeuronClass_25::QueryInterface(_VectorClass_PAVNeuronClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x43acb3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<NeuronClass *>::`vftable'; /*0x43acb6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x43acc0*/
  {
    __3_YAXPAX_Z(v3); /*0x43acc8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x43acd0*/
  }
  BYTE1(this->m_C) = 0; /*0x43acdb*/
  this->m_8 = 0; /*0x43ace1*/
  if ( (a2 & 1) != 0 ) /*0x43ace8*/
    __3_YAXPAX_Z(this); /*0x43aceb*/
  return this->__pad_0; /*0x43acf5*/
}



// ==== 0x0043AD00  Buffer::Init  this=Buffer  sig=csp ====
_DWORD *__thiscall Buffer::Init(Buffer *this, int a2, int Size)
{
  this->Buffer_field_00 = a2; /*0x43ad0d*/
  this->Buffer_field_04 = Size; /*0x43ad0f*/
  LOBYTE(this->Buffer_field_08) = 0; /*0x43ad12*/
  if ( !a2 && Size > 0 ) /*0x43ad1a*/
  {
    this->Buffer_field_00 = __2_YAPAXI_Z(Size); /*0x43ad25*/
    LOBYTE(this->Buffer_field_08) = 1; /*0x43ad27*/
  }
  return &this->Buffer_field_00; /*0x43ad2d*/
}



// ==== 0x0043ADC0  INIClass::loadFile  this=INIClass  sig=csp ====
_DWORD *__thiscall INIClass::loadFile(INIClass *this, int Size)
{
  *(_DWORD *)this->__pad_0 = 0; /*0x43adc9*/
  this->headNode[0] = Size; /*0x43adcf*/
  LOBYTE(this->headNode[1]) = 0; /*0x43add2*/
  if ( Size > 0 ) /*0x43add6*/
  {
    *(_DWORD *)this->__pad_0 = __2_YAPAXI_Z(Size); /*0x43ade1*/
    LOBYTE(this->headNode[1]) = 1; /*0x43ade3*/
  }
  return this->__pad_0; /*0x43ade9*/
}



// ==== 0x0043ADF0  ObjectClass::method_43ADF0  this=ObjectClass  sig=csp ====
_BYTE *__thiscall sub_43ADF0(ObjectClass *this, _DWORD *a2)
{
  LOBYTE(this->?) = 0; /*0x43adf6*/
  this->AbstractClass = (void *)*a2; /*0x43adfc*/
  this->? = (void *)a2[1]; /*0x43ae01*/
  return this; /*0x43ae04*/
}



// ==== 0x0043AE10  StaticButtonClass::ReleaseBuffer  this=StaticButtonClass  sig=csp ====
int __thiscall sub_43AE10(int this, _DWORD *a2)
{
  if ( a2 != (_DWORD *)this ) /*0x43ae1a*/
  {
    if ( *(_BYTE *)(this + 8) ) /*0x43ae1c*/
      __3_YAXPAX_Z(*(void **)this); /*0x43ae26*/
    *(_BYTE *)(this + 8) = 0; /*0x43ae2e*/
    *(_DWORD *)this = *a2; /*0x43ae34*/
    *(_DWORD *)(this + 4) = a2[1]; /*0x43ae39*/
  }
  return this; /*0x43ae3e*/
}



// ==== 0x0043AE50  Vector::Clear  this=Vector  sig=csp ====
int __thiscall Vector::Clear(int this)
{
  int result; // eax

  LOBYTE(result) = *(_BYTE *)(this + 8); /*0x43ae53*/
  if ( (_BYTE)result ) /*0x43ae58*/
    __3_YAXPAX_Z(*(void **)this); /*0x43ae5d*/
  *(_DWORD *)this = 0; /*0x43ae65*/
  *(_DWORD *)(this + 4) = 0; /*0x43ae6b*/
  *(_BYTE *)(this + 8) = 0; /*0x43ae72*/
  return result; /*0x43ae76*/
}



// ==== 0x0043AF10  ObjectClass::method_43AF10  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_43AF10(ObjectClass *this)
{
  this->AbstractClass = 0; /*0x43af14*/
  this->? = 0; /*0x43af16*/
  LOBYTE(this->?) = 0; /*0x43af19*/
  return &this->AbstractClass; /*0x43af1c*/
}



// ==== 0x0043AF40  sub_43AF40  this=-  sig=ida-proto ====
void sub_43AF40()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x43af4c*/
  dbl_89C820 = Math::Sqrt(v0 + v0); /*0x43af5e*/
}



// ==== 0x0043AF70  sub_43AF70  this=-  sig=ida-proto ====
void sub_43AF70()
{
  dbl_89C880 = dbl_89C820 / 60.0; /*0x43af7c*/
}



// ==== 0x0043AF90  sub_43AF90  this=-  sig=ida-proto ====
void sub_43AF90()
{
  dbl_89C868 = 1.0 / dbl_89C880; /*0x43af9c*/
}



// ==== 0x0043AFB0  sub_43AFB0  this=-  sig=ida-proto ====
void sub_43AFB0()
{
  dbl_89C860 = 0.0174532925199433 * 45.0; /*0x43afbc*/
}



// ==== 0x0043AFD0  sub_43AFD0  this=-  sig=ida-proto ====
void sub_43AFD0()
{
  dbl_89C830 = 0.0174532925199433 * 60.0; /*0x43afdc*/
}



// ==== 0x0043AFF0  sub_43AFF0  this=-  sig=ida-proto ====
void sub_43AFF0()
{
  dbl_89C7F8 = 0.0174532925199433 * 90.0; /*0x43affc*/
}



// ==== 0x0043B010  sub_43B010  this=-  sig=ida-proto ====
__int64 sub_43B010()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89C7F8 - dbl_89C830); /*0x43b022*/
  result = Math::RoundToInt(v0 * dbl_89C820 * 0.5); /*0x43b036*/
  dword_89C888 = result; /*0x43b03b*/
  return result; /*0x43b040*/
}



// ==== 0x0043B050  sub_43B050  this=-  sig=ida-proto ====
void sub_43B050()
{
  dbl_89C840 = Math::ArcTan((double)dword_89C888 * 0.00390625); /*0x43b067*/
}



// ==== 0x0043B080  sub_43B080  this=-  sig=ida-proto ====
void sub_43B080()
{
  dbl_89C858 = Math::ArcTan((double)(2 * dword_89C888) / dbl_89C820); /*0x43b0a2*/
}



// ==== 0x0043B0B0  sub_43B0B0  this=-  sig=ida-proto ====
__int64 sub_43B0B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C888) + 0.5); /*0x43b0cb*/
  dword_89C87C = result; /*0x43b0d0*/
  return result; /*0x43b0d6*/
}



// ==== 0x0043B0E0  sub_43B0E0  this=-  sig=ida-proto ====
int sub_43B0E0()
{
  g_TerrainTypeTable = 0; /*0x43b0e2*/
  return 0; /*0x43b0ee*/
}



// ==== 0x0043B0F0  sub_43B0F0  this=-  sig=ida-proto ====
int sub_43B0F0()
{
  g_BuildingClassPool = 0; /*0x43b0f2*/
  dword_89C84C = 0; /*0x43b0f7*/
  dword_89C850 = 0; /*0x43b0fc*/
  return 0; /*0x43b101*/
}



// ==== 0x0043B110  sub_43B110  this=-  sig=ida-proto ====
int sub_43B110()
{
  dword_89C878 = 0; /*0x43b115*/
  dword_89C870 = 128; /*0x43b11f*/
  dword_89C874 = 128; /*0x43b124*/
  return 128; /*0x43b129*/
}



// ==== 0x0043B130  sub_43B130  this=-  sig=ida-proto ====
int sub_43B130()
{
  dword_89C808 = 0; /*0x43b132*/
  dword_89C80C = 0; /*0x43b137*/
  dword_89C810 = 0; /*0x43b13c*/
  dword_89C814 = 0; /*0x43b141*/
  return 0; /*0x43b146*/
}



// ==== 0x0043B150  ObjectClass::DetectNearbyAlliedThreat  this=ObjectClass  sig=csp ====
bool __thiscall DetectNearbyAlliedThreat(TechnoClass *this)
{
  double v1; // st7
  TechnoClass *v2; // ebx
  int v3; // eax
  _DWORD *v4; // esi
  int target; // edi
  int *v6; // eax
  int v7; // ebx
  int v8; // edx
  int v9; // ebp
  _DWORD *v10; // edi
  _DWORD *v11; // eax
  bool result; // al
  int *v13; // eax
  int v14; // ebx
  int v15; // ebp
  int *Coords; // edi
  _DWORD *v17; // eax
  int spawnStatus; // eax
  CellClass *v19; // edi
  int *v20; // eax
  int v21; // ebx
  int v22; // ebp
  int *v23; // edi
  int *v24; // eax
  int v25; // eax
  int *v26; // eax
  int v27; // ebp
  int v28; // ebx
  int v29; // edx
  int mapCoords; // eax
  _DWORD *v31; // edi
  _DWORD *v32; // eax
  int i; // [esp+28h] [ebp-F8h]
  int v35; // [esp+2Ch] [ebp-F4h]
  _DWORD v36[3]; // [esp+3Ch] [ebp-E4h] BYREF
  _DWORD v37[3]; // [esp+48h] [ebp-D8h] BYREF
  _DWORD v38[5]; // [esp+54h] [ebp-CCh] BYREF
  int v39; // [esp+68h] [ebp-B8h]
  int v40; // [esp+74h] [ebp-ACh]
  int v41; // [esp+80h] [ebp-A0h]
  int v42; // [esp+8Ch] [ebp-94h]
  int v43[3]; // [esp+90h] [ebp-90h] BYREF
  char v44[12]; // [esp+9Ch] [ebp-84h] BYREF
  char v45[12]; // [esp+A8h] [ebp-78h] BYREF
  int v46[3]; // [esp+B4h] [ebp-6Ch] BYREF
  char v47[12]; // [esp+C0h] [ebp-60h] BYREF
  int v48[3]; // [esp+CCh] [ebp-54h] BYREF
  int v49[3]; // [esp+D8h] [ebp-48h] BYREF
  char v50[12]; // [esp+E4h] [ebp-3Ch] BYREF
  char v51[12]; // [esp+F0h] [ebp-30h] BYREF
  char v52[12]; // [esp+FCh] [ebp-24h] BYREF
  int v53[3]; // [esp+108h] [ebp-18h] BYREF
  int v54[3]; // [esp+114h] [ebp-Ch] BYREF

  v2 = this; /*0x43b15d*/
  if ( !(unsigned __int8)HouseClass::IsAlliedWith((HouseClass *)dword_A83D4C) )
  {
    v3 = 0; /*0x43b18b*/
    v35 = *(_DWORD *)&dword_A83D4C->__pad_EC[76]; /*0x43b18f*/
    for ( i = 0; i < v35; ++i )
    {
      v4 = *(_DWORD **)(*(_DWORD *)&dword_A83D4C->__pad_EC[64] + 4 * v3); /*0x43b1a9*/
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v4 + 848))(v4) ) /*0x43b1b8*/
        goto LABEL_23; /*0x43b1b8*/
      target = v2->target; /*0x43b1be*/
      if ( target ) /*0x43b1c6*/
      {
        if ( (*(_BYTE *)(target + 20) & 1) != 0 ) /*0x43b1d0*/
        {
          v6 = (int *)(*(int (__thiscall **)(_DWORD *, char *))(*v4 + 72))(v4, v51); /*0x43b1e2*/
          v7 = *v6; /*0x43b1e5*/
          v8 = *(_DWORD *)target; /*0x43b1e7*/
          v9 = v6[1]; /*0x43b1e9*/
          v42 = v6[2]; /*0x43b1f6*/
          v10 = (_DWORD *)(*(int (__thiscall **)(int, char *))(v8 + 72))(target, v45); /*0x43b200*/
          v11 = Coord::Subtract((Coord *)v53, v7 - *v10, v9 - v10[1], v42 - v10[2]); /*0x43b21c*/
          v36[0] = *v11; /*0x43b223*/
          v36[1] = v11[1]; /*0x43b22e*/
          v36[2] = v11[2]; /*0x43b235*/
          result = (int)Coord::Length((Coord *)v36) <= *(_DWORD *)(v4[328] + 5900) << 8; /*0x43b24f*/
          if ( result ) /*0x43b254*/
            return result; /*0x43b254*/
LABEL_10:
          v2 = this; /*0x43b2f8*/
          goto LABEL_11; /*0x43b2f8*/
        }
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)target + 44))(v2->target) == 11 ) /*0x43b26e*/
        {
          v13 = (int *)(*(int (__thiscall **)(_DWORD *, char *))(*v4 + 72))(v4, v47); /*0x43b280*/
          v14 = *v13; /*0x43b283*/
          v15 = v13[1]; /*0x43b28d*/
          v41 = v13[2]; /*0x43b293*/
          Coords = CellClass::GetCoords((CellClass *)target, v43); /*0x43b29e*/
          v17 = Coord::Subtract((Coord *)v49, v14 - *Coords, v15 - Coords[1], v41 - Coords[2]); /*0x43b2ba*/
          v37[0] = *v17; /*0x43b2c1*/
          v37[1] = v17[1]; /*0x43b2cc*/
          v37[2] = v17[2]; /*0x43b2d3*/
          result = (int)Coord::Length((Coord *)v37) <= *(_DWORD *)(v4[328] + 5900) << 8; /*0x43b2ed*/
          if ( result ) /*0x43b2f2*/
            return result; /*0x43b2f2*/
          goto LABEL_10; /*0x43b2f2*/
        }
      }
LABEL_11:
      if ( !v2 || (v2->abstractFlags & 4) == 0 ) /*0x43b310*/
        goto LABEL_23; /*0x43b310*/
      spawnStatus = v2[1].spawnStatus; /*0x43b316*/
      v19 = spawnStatus ? *(CellClass **)(v2[1].health + 4 * spawnStatus - 4) : *(CellClass **)v2[1].hasParachute;
      if ( !v19 ) /*0x43b334*/
        goto LABEL_23; /*0x43b334*/
      if ( (*(int (__thiscall **)(CellClass *))(v19->mapCoords + 44))(v19) == 11 ) /*0x43b349*/
      {
        v20 = (int *)(*(int (__thiscall **)(_DWORD *, char *))(*v4 + 72))(v4, v44); /*0x43b35b*/
        v21 = *v20; /*0x43b35e*/
        v22 = v20[1]; /*0x43b362*/
        v40 = v20[2]; /*0x43b370*/
        v23 = CellClass::GetCoords(v19, v46); /*0x43b379*/
        v24 = Coord::Subtract((Coord *)v48, v21 - *v23, v22 - v23[1], v40 - v23[2]); /*0x43b395*/
        Math::Sqrt((double)*v24 * (double)*v24 + (double)v24[2] * (double)v24[2] + (double)v24[1] * (double)v24[1]); /*0x43b3d6*/
        LOWORD(v25) = Math::RoundToInt(v1); /*0x43b3de*/
        result = v25 <= *(_DWORD *)(v4[328] + 5900) << 8; /*0x43b3f4*/
        if ( result ) /*0x43b3f9*/
          return result; /*0x43b3f9*/
LABEL_22:
        v2 = this; /*0x43b48e*/
        goto LABEL_23; /*0x43b48e*/
      }
      if ( (v19->isoTileTypeIndex & 1) != 0 ) /*0x43b408*/
      {
        v26 = (int *)(*(int (__thiscall **)(_DWORD *, char *))(*v4 + 72))(v4, v50); /*0x43b41a*/
        v27 = *v26; /*0x43b41d*/
        v28 = v26[1]; /*0x43b429*/
        v29 = v26[2]; /*0x43b42c*/
        mapCoords = v19->mapCoords; /*0x43b42f*/
        v39 = v29; /*0x43b431*/
        v31 = (_DWORD *)(*(int (__thiscall **)(CellClass *, char *))(mapCoords + 72))(v19, v52); /*0x43b438*/
        v32 = Coord::Subtract((Coord *)v54, v27 - *v31, v28 - v31[1], v39 - v31[2]); /*0x43b454*/
        v38[0] = *v32; /*0x43b45b*/
        v38[1] = v32[1]; /*0x43b462*/
        v38[2] = v32[2]; /*0x43b46d*/
        result = (int)Coord::Length((Coord *)v38) <= *(_DWORD *)(v4[328] + 5900) << 8; /*0x43b487*/
        if ( result ) /*0x43b48c*/
          return result; /*0x43b48c*/
        goto LABEL_22; /*0x43b48c*/
      }
LABEL_23:
      v3 = i + 1; /*0x43b492*/
    }
  }
  return 0; /*0x43b4a9*/
}



// ==== 0x0043B4C0  Cell::CanPlaceBuilding  this=Cell  sig=csp ====
char __fastcall Cell::CanPlaceBuilding(#375 *this, _DWORD *a2)
{
  int v2; // esi
  int v3; // edi
  _DWORD *v4; // ebp
  int *v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // ebx
  int *Coords; // eax
  double v10; // st7
  int v12; // [esp+1Ch] [ebp-30h]
  int v14; // [esp+24h] [ebp-28h]
  char v15[12]; // [esp+34h] [ebp-18h] BYREF
  char v16[12]; // [esp+40h] [ebp-Ch] BYREF

  if ( (unsigned __int8)HouseClass::IsAlliedWith(dword_A83D4C, this) ) /*0x43b4d8*/
    return 0; /*0x43b4d8*/
  v2 = 0; /*0x43b4ea*/
  v12 = 0; /*0x43b4ec*/
  v3 = *((_DWORD *)dword_A83D4C + 78); /*0x43b4f0*/
  v14 = v3; /*0x43b4f8*/
  if ( v3 <= 0 ) /*0x43b4fc*/
    return 0; /*0x43b5c9*/
  while ( 1 ) /*0x43b50e*/
  {
    v4 = *(_DWORD **)(*((_DWORD *)dword_A83D4C + 75) + 4 * v2); /*0x43b50e*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v4 + 848))(v4) ) /*0x43b516*/
      break; /*0x43b516*/
LABEL_6:
    v12 = ++v2; /*0x43b5b6*/
    if ( v2 >= v3 ) /*0x43b5ba*/
      return 0; /*0x43b5ba*/
  }
  v5 = (int *)(*(int (__thiscall **)(_DWORD *, char *))(*v4 + 72))(v4, v15); /*0x43b52e*/
  v6 = *v5; /*0x43b531*/
  v7 = v5[1]; /*0x43b53c*/
  v8 = v5[2]; /*0x43b53f*/
  Coords = CellClass::GetCoords(a2, (int *)v16); /*0x43b542*/
  v10 = Math::Sqrt( /*0x43b58b*/
          (double)(v6 - *Coords) * (double)(v6 - *Coords)
        + (double)(v7 - Coords[1]) * (double)(v7 - Coords[1])
        + (double)(v8 - Coords[2]) * (double)(v8 - Coords[2]));
  if ( (int)Math::RoundToInt(v10) > *(_DWORD *)(v4[328] + 5900) << 8 ) /*0x43b5a9*/
  {
    v2 = v12; /*0x43b5ab*/
    v3 = v14; /*0x43b5af*/
    goto LABEL_6; /*0x43b5af*/
  }
  return 1; /*0x43b5c2*/
}



// ==== 0x0043B5E0  HouseClass::PsiWarn  this=HouseClass  sig=csp ====
void **__fastcall HouseClass::PsiWarn(int a1, int a2, int a3, AnimTypeClass *a4)
{
  void *v6; // edi
  int *v7; // eax
  AnimClass *v8; // eax
  void **v9; // esi
  int v11[3]; // [esp+Ch] [ebp-18h] BYREF
  _BYTE v12[12]; // [esp+18h] [ebp-Ch] BYREF

  v6 = (void *)*((_DWORD *)dword_8B4154 + AnimTypeClass::FindIndex(a4)); /*0x43b5fb*/
  v7 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 72))(a2, v12); /*0x43b605*/
  v11[0] = *v7; /*0x43b60a*/
  v11[1] = v7[1]; /*0x43b616*/
  v11[2] = v7[2]; /*0x43b61d*/
  v8 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x43b621*/
  if ( v8 ) /*0x43b62b*/
    v9 = AnimClass::ctor(v8, v6, v11, 0, 1, (void *)0x600, 0, 0); /*0x43b647*/
  else
    v9 = 0; /*0x43b64b*/
  BuildingClass::SetField95((BuildingClass *)v9, a3); /*0x43b654*/
  Function::Method_424CA0((Function *)v9, a1); /*0x43b65c*/
  *((_BYTE *)v9 + 413) = 1; /*0x43b661*/
  return v9; /*0x43b66a*/
}



// ==== 0x0043B680  BuildingClass::ctor  this=BuildingClass  sig=csp ====
_DWORD *__thiscall BuildingClass::ctor(BuildingClass *this, int a2)
{
  int v3; // ecx

  TechnoClass::Constructor((TechnoClass *)this, a2); /*0x43b688*/
  this->RepairProgress[0] = 0; /*0x43b694*/
  LOBYTE(this->RepairProgress[1]) = 0; /*0x43b69a*/
  v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x43b6a0*/
  *(_DWORD *)&this->__pad_628[8] = 0; /*0x43b6a6*/
  *(_DWORD *)this->__pad_628 = v3; /*0x43b6ac*/
  *(_DWORD *)&this->__pad_628[12] = 0; /*0x43b6b7*/
  *(_DWORD *)&this->__pad_628[16] = 1; /*0x43b6bd*/
  this->Occupants[0] = 0; /*0x43b6c3*/
  this->FiringOccupantIndex = 0; /*0x43b6c9*/
  LOBYTE(this->Audio7[0]) = 1; /*0x43b6cf*/
  BYTE1(this->Audio7[0]) = 0; /*0x43b6d5*/
  this->Overpowerers[0] = (int)&DynamicVectorClass<InfantryClass *>::`vftable'; /*0x43b6db*/
  this->Audio7[2] = 10; /*0x43b6e5*/
  this->Audio7[1] = 0; /*0x43b6eb*/
  this->Audio7[4] = 0; /*0x43b6f1*/
  this->Audio8[0] = 0; /*0x43b6f7*/
  LOBYTE(this->Audio8[1]) = 1; /*0x43b6fd*/
  BYTE1(this->Audio8[1]) = 0; /*0x43b703*/
  this->Audio7[3] = (int)&DynamicVectorClass<InfantryClass *>::`vftable'; /*0x43b709*/
  this->Audio8[3] = 10; /*0x43b713*/
  this->Audio8[2] = 0; /*0x43b719*/
  this->TechnoClass = &BuildingClass_Vtable; /*0x43b71f*/
  this->? = &BuildingClass_Vtable2; /*0x43b725*/
  this->? = &BuildingClass_Vtable3; /*0x43b72c*/
  this->? = &BuildingClass_Vtable4; /*0x43b733*/
  return &this->TechnoClass; /*0x43b73c*/
}



// ==== 0x0043B740  BuildingClass::Construct  this=AbstractClass  sig=csp ====
int __thiscall BuildingClass::Construct(int this, int a2, int a3)
{
  int v4; // edx
  int v5; // edx
  __int16 v6; // cx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int vtable2; // ebp
  _DWORD *v12; // edi
  int v13; // eax
  _DWORD *v14; // ecx
  int v15; // eax
  int v16; // eax
  int Vtable3; // [esp+18h] [ebp+4h]

  TechnoClass::TechnoClass((TechnoClass *)this, a3); /*0x43b74b*/
  *(_DWORD *)(this + 1312) = a2; /*0x43b756*/
  *(_DWORD *)(this + 1316) = 0; /*0x43b75c*/
  *(_DWORD *)(this + 1320) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x43b76b*/
  *(_DWORD *)(this + 1328) = 0; /*0x43b771*/
  *(_DWORD *)(this + 1332) = -1; /*0x43b777*/
  *(_DWORD *)(this + 1336) = -1; /*0x43b77d*/
  *(_DWORD *)(this + 1340) = 0; /*0x43b783*/
  *(_DWORD *)(this + 1344) = 0; /*0x43b789*/
  *(_DWORD *)(this + 1348) = 0; /*0x43b78f*/
  *(_DWORD *)(this + 1352) = 0; /*0x43b795*/
  *(_DWORD *)(this + 1356) = 0; /*0x43b79b*/
  *(_DWORD *)(this + 1360) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x43b7a7*/
  *(_DWORD *)(this + 1368) = 0; /*0x43b7ad*/
  *(_BYTE *)(this + 1512) = 0; /*0x43b7b3*/
  *(_DWORD *)(this + 1528) = -1; /*0x43b7b9*/
  *(_DWORD *)(this + 1532) = -1; /*0x43b7bf*/
  *(_DWORD *)(this + 1536) = 0; /*0x43b7c5*/
  v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x43b7cb*/
  *(_DWORD *)(this + 1548) = 0; /*0x43b7d1*/
  *(_DWORD *)(this + 1540) = v4; /*0x43b7d7*/
  *(_DWORD *)(this + 1552) = 0; /*0x43b7dd*/
  *(_DWORD *)(this + 1556) = 0; /*0x43b7e3*/
  *(_DWORD *)(this + 1560) = 0; /*0x43b7e9*/
  *(_DWORD *)(this + 1564) = 0; /*0x43b7ef*/
  *(_DWORD *)(this + 1568) = 0; /*0x43b7f5*/
  *(_BYTE *)(this + 1572) = 0; /*0x43b7fb*/
  *(_DWORD *)(this + 1576) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x43b807*/
  *(_DWORD *)(this + 1584) = 0; /*0x43b80d*/
  *(_DWORD *)(this + 1588) = 0; /*0x43b813*/
  *(_DWORD *)(this + 1592) = 1; /*0x43b819*/
  *(_DWORD *)(this + 1596) = dword_89C808; /*0x43b82f*/
  *(_DWORD *)(this + 1600) = dword_89C80C; /*0x43b83b*/
  *(_DWORD *)(this + 1604) = dword_89C810; /*0x43b844*/
  *(_DWORD *)(this + 1608) = dword_89C814; /*0x43b84d*/
  *(_DWORD *)(this + 1612) = g_BuildingClassPool; /*0x43b85c*/
  *(_DWORD *)(this + 1616) = dword_89C84C; /*0x43b868*/
  *(_DWORD *)(this + 1620) = dword_89C850; /*0x43b871*/
  *(_DWORD *)(this + 1624) = 0; /*0x43b876*/
  *(_DWORD *)(this + 1628) = 0; /*0x43b87c*/
  *(_BYTE *)(this + 1632) = 1; /*0x43b882*/
  *(_BYTE *)(this + 1633) = 0; /*0x43b889*/
  *(_BYTE *)(this + 1634) = 0; /*0x43b88f*/
  *(_DWORD *)(this + 1636) = 0; /*0x43b895*/
  *(_BYTE *)(this + 1640) = 0; /*0x43b89b*/
  *(_BYTE *)(this + 1641) = 0; /*0x43b8ab*/
  *(_DWORD *)(this + 1648) = 0; /*0x43b8b1*/
  *(_DWORD *)(this + 1652) = 0; /*0x43b8b7*/
  *(_BYTE *)(this + 1656) = 1; /*0x43b8bd*/
  *(_BYTE *)(this + 1657) = 0; /*0x43b8c4*/
  *(_DWORD *)(this + 1644) = &DynamicVectorClass<InfantryClass *>::`vftable'; /*0x43b8ca*/
  *(_DWORD *)(this + 1664) = 10; /*0x43b8d0*/
  *(_DWORD *)(this + 1660) = 0; /*0x43b8d6*/
  *(_DWORD *)(this + 1672) = 0; /*0x43b8dc*/
  *(_DWORD *)(this + 1676) = 0; /*0x43b8e2*/
  *(_BYTE *)(this + 1680) = 1; /*0x43b8e8*/
  *(_BYTE *)(this + 1681) = 0; /*0x43b8ef*/
  *(_DWORD *)(this + 1668) = &DynamicVectorClass<InfantryClass *>::`vftable'; /*0x43b8f5*/
  *(_DWORD *)(this + 1688) = 10; /*0x43b8fb*/
  *(_DWORD *)(this + 1684) = 0; /*0x43b901*/
  *(_DWORD *)(this + 1692) = 0; /*0x43b907*/
  *(_BYTE *)(this + 1736) = 0; /*0x43b90d*/
  *(_BYTE *)(this + 1737) = 0; /*0x43b913*/
  *(_BYTE *)(this + 1738) = 0; /*0x43b919*/
  *(_BYTE *)(this + 1739) = 0; /*0x43b91f*/
  *(_BYTE *)(this + 1740) = 0; /*0x43b925*/
  v5 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x43b92b*/
  *(_DWORD *)(this + 1752) = 0; /*0x43b931*/
  *(_DWORD *)(this + 1744) = v5; /*0x43b937*/
  *(_BYTE *)(this + 1756) = 1; /*0x43b93d*/
  *(_BYTE *)(this + 1757) = 0; /*0x43b944*/
  *(_BYTE *)(this + 1758) = 0; /*0x43b94d*/
  *(_BYTE *)(this + 1759) = 0; /*0x43b953*/
  *(_BYTE *)(this + 1760) = 0; /*0x43b95a*/
  *(_BYTE *)(this + 1761) = 0; /*0x43b960*/
  *(_BYTE *)(this + 1762) = 0; /*0x43b966*/
  *(_BYTE *)(this + 1763) = 0; /*0x43b96c*/
  *(_BYTE *)(this + 1764) = 0; /*0x43b972*/
  *(_BYTE *)(this + 1765) = 0; /*0x43b978*/
  *(_BYTE *)(this + 1766) = 0; /*0x43b97e*/
  *(_BYTE *)(this + 1767) = 0; /*0x43b984*/
  *(_BYTE *)(this + 1768) = 0; /*0x43b98a*/
  *(_BYTE *)(this + 1769) = 0; /*0x43b990*/
  *(_BYTE *)(this + 1770) = 1; /*0x43b996*/
  *(_BYTE *)(this + 1771) = 0; /*0x43b99d*/
  *(_BYTE *)(this + 1772) = 0; /*0x43b9a3*/
  *(_BYTE *)(this + 1773) = 0; /*0x43b9a9*/
  *(_DWORD *)(this + 1776) = 0; /*0x43b9af*/
  *(_DWORD *)(this + 1780) = 0; /*0x43b9b5*/
  *(_BYTE *)(this + 1784) = 0; /*0x43b9bb*/
  *(_BYTE *)(this + 1785) = 0; /*0x43b9c1*/
  *(_BYTE *)(this + 1786) = 0; /*0x43b9c7*/
  *(_DWORD *)(this + 1788) = 0; /*0x43b9cd*/
  *(_WORD *)(this + 1792) = 1000; /*0x43b9d3*/
  *(_BYTE *)(this + 1794) = 0; /*0x43b9dc*/
  *(_BYTE *)(this + 1795) = -1; /*0x43b9e2*/
  *(_DWORD *)(this + 1796) = 0; /*0x43b9e8*/
  *(_DWORD *)(this + 1812) = 0; /*0x43b9ee*/
  *(_DWORD *)(this + 1816) = 0; /*0x43b9f4*/
  *(_DWORD *)this = &BuildingClass_Vtable; /*0x43b9fa*/
  *(_DWORD *)(this + 4) = &BuildingClass_Vtable2; /*0x43ba00*/
  *(_DWORD *)(this + 8) = &BuildingClass_Vtable3; /*0x43ba07*/
  *(_DWORD *)(this + 12) = &BuildingClass_Vtable4; /*0x43ba0e*/
  AbstractClass::GenerateUniqueID((AbstractClass *)(this + 4)); /*0x43ba15*/
  *(_DWORD *)(this + 1516) = 0; /*0x43ba22*/
  LOBYTE(v6) = 0; /*0x43ba28*/
  *(_DWORD *)(this + 1520) = 0; /*0x43ba2a*/
  *(_DWORD *)(this + 1524) = 0; /*0x43ba30*/
  *(_DWORD *)(this + 1800) = 0; /*0x43ba36*/
  v7 = *(_DWORD *)(this + 1312); /*0x43ba38*/
  *(_DWORD *)(this + 1804) = 0; /*0x43ba3e*/
  *(_DWORD *)(this + 1808) = 0; /*0x43ba43*/
  if ( v7 ) /*0x43ba46*/
  {
    HIBYTE(v6) = *(_BYTE *)(v7 + 5904); /*0x43ba48*/
    LOWORD(a3) = v6; /*0x43ba52*/
    FacingClass::Update((char *)(this + 880), &a3); /*0x43ba5e*/
  }
  memset((void *)(this + 1372), 0, 0x54u); /*0x43ba70*/
  memset((void *)(this + 1480), 0, 0x20u); /*0x43ba7d*/
  *(_DWORD *)(this + 1456) = 0; /*0x43ba7f*/
  *(_DWORD *)(this + 1460) = 0; /*0x43ba8b*/
  *(_DWORD *)(this + 1464) = 0; /*0x43ba91*/
  *(_DWORD *)(this + 1468) = 0; /*0x43ba97*/
  *(_DWORD *)(this + 1472) = 0; /*0x43ba9d*/
  *(_BYTE *)(this + 1476) = 0; /*0x43baa3*/
  AudioController::Init((AudioController *)(this + 1696)); /*0x43baa9*/
  AudioController::Init((AudioController *)(this + 1716)); /*0x43bab4*/
  LOWORD(a3) = 0x4000; /*0x43babd*/
  FacingClass::Update((char *)(this + 880), &a3); /*0x43bacb*/
  *(_DWORD *)(this + 1568) = 0; /*0x43bad0*/
  if ( stru_A8EB00.ObjectTypeClass[20] < stru_A8EB00.ObjectTypeClass[18] /*0x43bb08*/
    || (BYTE1(stru_A8EB00.ObjectTypeClass[19]) || !stru_A8EB00.ObjectTypeClass[18])
    && stru_A8EB00.ObjectTypeClass[21] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_A8EB00.ObjectTypeClass[16] + 8))(
         &stru_A8EB00.ObjectTypeClass[16],
         stru_A8EB00.ObjectTypeClass[21] + stru_A8EB00.ObjectTypeClass[18],
         0) )
  {
    v8 = stru_A8EB00.ObjectTypeClass[20]++; /*0x43bb15*/
    *(_DWORD *)(stru_A8EB00.ObjectTypeClass[17] + 4 * v8) = this; /*0x43bb24*/
  }
  BuildingClass::Update((BuildingClass *)this); /*0x43bb29*/
  if ( g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[1] < g_BuildingLoadQueue_Array.BuildCat[0] /*0x43bb62*/
    || (BYTE1(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[0]) || !g_BuildingLoadQueue_Array.BuildCat[0])
    && g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[2] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.Buildup[0] + 8))(
         g_BuildingLoadQueue_Array.Buildup,
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[2] + g_BuildingLoadQueue_Array.BuildCat[0],
         0) )
  {
    v9 = g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[1]++; /*0x43bb6f*/
    *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.BuildupLoaded + 4 * v9) = this; /*0x43bb7e*/
  }
  if ( g_BuildingLoadQueue_Array.?[1] < g_BuildingLoadQueue_Array.? /*0x43bbb5*/
    || (BYTE1(g_BuildingLoadQueue_Array.?[0]) || !g_BuildingLoadQueue_Array.?)
    && g_BuildingLoadQueue_Array.?[2] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[0] + 8))(
         g_BuildingLoadQueue_Array.?,
         g_BuildingLoadQueue_Array.?[2] + g_BuildingLoadQueue_Array.?,
         0) )
  {
    v10 = g_BuildingLoadQueue_Array.?[1]++; /*0x43bbc2*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v10) = this; /*0x43bbd1*/
  }
  Vtable3 = AbstractClass::GetVtable3((AbstractClass *)(this + 4)); /*0x43bbe0*/
  if ( (int)g_BuildingLoadQueue_Array.? + 1 <= (int)g_BuildingLoadQueue_Array.? ) /*0x43bbec*/
    goto LABEL_29; /*0x43bbec*/
  if ( g_BuildingLoadQueue_Array.? ) /*0x43bbf4*/
  {
    vtable2 = (int)g_BuildingLoadQueue_Array.?; /*0x43bbfd*/
    if ( (int)g_BuildingLoadQueue_Array.? < 0 ) /*0x43bc01*/
      goto LABEL_30; /*0x43bc01*/
  }
  else
  {
    vtable2 = 10; /*0x43bbf6*/
  }
  a3 = (int)g_BuildingLoadQueue_Array.? + vtable2; /*0x43bc09*/
  v12 = (_DWORD *)__2_YAPAXI_Z(8 * ((int)g_BuildingLoadQueue_Array.? + vtable2)); /*0x43bc16*/
  if ( v12 ) /*0x43bc1d*/
  {
    v13 = 0; /*0x43bc27*/
    --a3; /*0x43bc2a*/
    if ( (int)g_BuildingLoadQueue_Array.? > 0 ) /*0x43bc36*/
    {
      do /*0x43bc57*/
      {
        v14 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v13++; /*0x43bc3e*/
        v12[2 * v13 - 2] = *v14; /*0x43bc44*/
        v12[2 * v13 - 1] = v14[1]; /*0x43bc4b*/
      }
      while ( v13 < (int)g_BuildingLoadQueue_Array.? ); /*0x43bc57*/
    }
    __3_YAXPAX_Z(g_BuildingLoadQueue_Array.TechnoTypeClass); /*0x43bc60*/
    g_BuildingLoadQueue_Array.TechnoTypeClass = v12; /*0x43bc6f*/
    g_BuildingLoadQueue_Array.? = (char *)g_BuildingLoadQueue_Array.? + vtable2; /*0x43bc75*/
    g_BuildingLoadQueue_Array.? = 0; /*0x43bc7a*/
LABEL_29:
    *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = Vtable3; /*0x43bc80*/
    *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = this; /*0x43bc9e*/
    LOBYTE(g_BuildingLoadQueue_Array.?) = 0; /*0x43bca8*/
    ++g_BuildingLoadQueue_Array.?; /*0x43bcae*/
  }
LABEL_30:
  v15 = *(_DWORD *)(this + 1312); /*0x43bcb3*/
  if ( v15 ) /*0x43bcbb*/
  {
    v16 = *(_DWORD *)(v15 + 6016); /*0x43bcbd*/
    if ( v16 < 1 ) /*0x43bcc6*/
      v16 = 1; /*0x43bcc8*/
    RadioClass::SetLinkCount((RadioClass *)this, v16); /*0x43bcd0*/
    return this; /*0x43bcd5*/
  }
  else
  {
    RadioClass::SetLinkCount((RadioClass *)this, 1); /*0x43bce2*/
    return this; /*0x43bce7*/
  }
}



// ==== 0x0043BCF0  BuildingClass::Dtor  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Dtor(BuildingClass *this)
{
  int *Audio8_2; // edi
  int v3; // edx
  LightSourceClass *LightSource; // ecx
  LightSourceClass *v5; // ecx
  int v6; // eax
  int v7; // eax
  int *DamageFireAnims; // edi
  int v9; // ebx
  BuildingTypeClass *Type; // eax
  char CloakRadius; // cl
  int SuperWeapon; // eax
  int v13; // eax
  int SuperWeapon2; // eax
  int v15; // eax
  HouseClass *owner; // ecx
  FactoryClass *Factory; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  signed int v21; // eax
  int v22; // ecx
  char *i; // eax
  _DWORD *v24; // eax
  int FiringOccupantIndex; // edi
  int v26; // ebx
  void *v27; // eax
  void *v28; // eax
  int Vtable3; // [esp+18h] [ebp-4h] BYREF

  Audio8_2 = this->Audio8_2; /*0x43bcf7*/
  this->TechnoClass = &BuildingClass_Vtable; /*0x43bcfd*/
  this->? = &BuildingClass_Vtable2; /*0x43bd05*/
  this->? = &BuildingClass_Vtable3; /*0x43bd0c*/
  this->? = &BuildingClass_Vtable4; /*0x43bd13*/
  Mixer::ReleaseChannel((Mixer *)this->Audio8_2); /*0x43bd1a*/
  Mixer::ReleaseChannel((Mixer *)&this->WasOnline); /*0x43bd27*/
  AudioFileClass::Release((AudioFileClass *)Audio8_2); /*0x43bd2e*/
  AudioFileClass::Release((AudioFileClass *)&this->WasOnline); /*0x43bd35*/
  LightSource = this->LightSource; /*0x43bd3a*/
  if ( LightSource ) /*0x43bd44*/
  {
    MapClass::ScrollOnce((int)LightSource, 0); /*0x43bd47*/
    v5 = this->LightSource; /*0x43bd4c*/
    if ( v5 ) /*0x43bd54*/
      (*((void (__thiscall **)(LightSourceClass *, int))v5->AbstractClass + 8))(v5, 1); /*0x43bd5a*/
    this->LightSource = 0; /*0x43bd5d*/
  }
  LOBYTE(v3) = 1; /*0x43bd63*/
  AbstractClass::AnnounceExpiredPointer(&this->TechnoClass, v3); /*0x43bd67*/
  BuildingClass::Sell(this); /*0x43bd6e*/
  Vtable3 = (int)this; /*0x43bd83*/
  v6 = (*(int (__thiscall **)(int *, int *))(stru_A8EB00.ObjectTypeClass[16] + 16))( /*0x43bd87*/
         &stru_A8EB00.ObjectTypeClass[16],
         &Vtable3);
  if ( v6 != -1 ) /*0x43bd8d*/
    Vector::RemoveAt((Vector *)&stru_A8EB00.ObjectTypeClass[16], v6); /*0x43bd95*/
  Vtable3 = (int)this; /*0x43bdaa*/
  v7 = (*(int (__thiscall **)(char *, int *))(*(_DWORD *)&FootClass_Array.? + 16))(&FootClass_Array.?, &Vtable3); /*0x43bdae*/
  if ( v7 != -1 ) /*0x43bdb4*/
    Vector::RemoveAt((Vector *)&FootClass_Array.?, v7); /*0x43bdbc*/
  BuildingClass::ClearAnims(this, -2); /*0x43bdc5*/
  BuildingTypeClass::IsPowered(this->Type); /*0x43bdd0*/
  DamageFireAnims = this->DamageFireAnims; /*0x43bdd5*/
  v9 = 8; /*0x43bddb*/
  do /*0x43bdf4*/
  {
    if ( *DamageFireAnims ) /*0x43bde0*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)*DamageFireAnims + 248))(*DamageFireAnims); /*0x43bde8*/
      *DamageFireAnims = 0; /*0x43bdee*/
    }
    ++DamageFireAnims; /*0x43bdf0*/
    --v9; /*0x43bdf3*/
  }
  while ( v9 ); /*0x43bdf4*/
  if ( byte_A8E9A0 ) /*0x43bdfd*/
  {
    Type = this->Type; /*0x43bdff*/
    if ( Type ) /*0x43be07*/
    {
      if ( Type->CloakGenerator ) /*0x43be09*/
      {
        CloakRadius = this->CloakRadius; /*0x43be13*/
        this->HasCloakingData = -1; /*0x43be19*/
        if ( !CloakRadius ) /*0x43be22*/
          this->CloakRadius = Type->CloakRadiusInCells; /*0x43be2a*/
        this->? = 1; /*0x43be34*/
        this->CloakRadius = 1; /*0x43be3b*/
        BuildingClass::CleanupOccupation(this); /*0x43be42*/
      }
    }
  }
  SuperWeapon = this->Type->SuperWeapon; /*0x43be50*/
  if ( (SuperWeapon == -1 /*0x43bee8*/
     || (v13 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_A83CBC + SuperWeapon) + 40) + 200)) == 0
     || DynamicVector::GetOrGrow((DynamicVector *)this->?->ownedInfantryTypes2, *(_DWORD *)(v13 + 3576)))
    && this->Type->SuperWeapon != -1
    || ((SuperWeapon2 = this->Type->SuperWeapon2, SuperWeapon2 == -1)
     || (v15 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_A83CBC + SuperWeapon2) + 40) + 200)) == 0
     || DynamicVector::GetOrGrow((DynamicVector *)this->?->ownedInfantryTypes2, *(_DWORD *)(v15 + 3576)))
    && this->Type->SuperWeapon2 != -1 )
  {
    SuperWeapon::UpdateSuperWeaponsOwnedHouseClass((SuperWeapon *)this->?); /*0x43bef0*/
  }
  if ( byte_A8E9A0 ) /*0x43befc*/
  {
    if ( this->? != this->BuildingClass_field_544 ) /*0x43bf09*/
      LOBYTE(this->?->HouseClass_field_timer_B[2]) = 1; /*0x43bf11*/
    if ( byte_A8E9A0 && this->Type ) /*0x43bf21*/
    {
      owner = this->?; /*0x43bf29*/
      if ( owner ) /*0x43bf31*/
        HouseClass::DecrementUnitCount(owner, this); /*0x43bf34*/
      BuildingClass::Sell(this); /*0x43bf3b*/
    }
  }
  Factory = this->Factory; /*0x43bf40*/
  if ( Factory ) /*0x43bf48*/
    (*((void (__thiscall **)(FactoryClass *, int))Factory->AbstractClass + 8))(Factory, 1); /*0x43bf4e*/
  this->Factory = 0; /*0x43bf51*/
  Vtable3 = (int)this; /*0x43bf67*/
  v18 = (*(int (__thiscall **)(int *, int *))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x43bf6b*/
          g_BuildingLoadQueue_Array.?,
          &Vtable3);
  if ( v18 != -1 ) /*0x43bf70*/
    DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.?, v18); /*0x43bf78*/
  Vtable3 = (int)this; /*0x43bf8d*/
  v19 = (*(int (__thiscall **)(int *, int *))(g_BuildingLoadQueue_Array.Buildup[0] + 16))( /*0x43bf91*/
          g_BuildingLoadQueue_Array.Buildup,
          &Vtable3);
  if ( v19 != -1 ) /*0x43bf96*/
    DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.Buildup, v19); /*0x43bf9e*/
  Vtable3 = AbstractClass::GetVtable3((AbstractClass *)&this->?); /*0x43bfac*/
  v20 = BuildingTypeClass::Dequeue(&g_BuildingLoadQueue_Array, &Vtable3); /*0x43bfba*/
  if ( v20 ) /*0x43bfc1*/
  {
    v21 = (signed int)(v20 - (unsigned int)g_BuildingLoadQueue_Array.TechnoTypeClass) >> 3; /*0x43bfc9*/
    if ( v21 != -1 ) /*0x43bfce*/
    {
      v22 = v21 + 1; /*0x43bfd0*/
      for ( i = (char *)g_BuildingLoadQueue_Array.?; /*0x43bfda*/
            v22 < (int)g_BuildingLoadQueue_Array.?;
            i = (char *)g_BuildingLoadQueue_Array.? )
      {
        v24 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v22++; /*0x43bfe2*/
        *(v24 - 2) = *v24; /*0x43bfe8*/
        *(v24 - 1) = v24[1]; /*0x43bfee*/
      }
      g_BuildingLoadQueue_Array.? = i - 1; /*0x43c003*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = 0; /*0x43c008*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = 0; /*0x43c018*/
      g_BuildingLoadQueue_Array.? = 0; /*0x43c01c*/
    }
  }
  this->Type = 0; /*0x43c022*/
  this->? = 0; /*0x43c02e*/
  FiringOccupantIndex = this->FiringOccupantIndex; /*0x43c03a*/
  (*(void (__thiscall **)(int *))(this->Overpowerers[0] + 12))(this->Overpowerers); /*0x43c03d*/
  (*(void (__thiscall **)(int *, int, _DWORD))(this->Overpowerers[0] + 8))(this->Overpowerers, FiringOccupantIndex, 0); /*0x43c048*/
  v26 = this->Audio8[0]; /*0x43c051*/
  (*(void (__thiscall **)(int *))(this->Audio7[3] + 12))(&this->Audio7[3]); /*0x43c05f*/
  (*(void (__thiscall **)(int *, int, _DWORD))(this->Audio7[3] + 8))(&this->Audio7[3], v26, 0); /*0x43c069*/
  v27 = (void *)this->Audio7[4]; /*0x43c06c*/
  this->Audio7[3] = (int)&VectorClass<InfantryClass *>::`vftable'; /*0x43c073*/
  if ( v27 && BYTE1(this->Audio8[1]) ) /*0x43c07b*/
  {
    __3_YAXPAX_Z(v27); /*0x43c083*/
    this->Audio7[4] = 0; /*0x43c08b*/
  }
  BYTE1(this->Audio8[1]) = 0; /*0x43c08e*/
  this->Audio8[0] = 0; /*0x43c092*/
  v28 = (void *)this->Occupants[0]; /*0x43c095*/
  this->Overpowerers[0] = (int)&VectorClass<InfantryClass *>::`vftable'; /*0x43c098*/
  if ( v28 && BYTE1(this->Audio7[0]) ) /*0x43c0a3*/
  {
    __3_YAXPAX_Z(v28); /*0x43c0ab*/
    this->Occupants[0] = 0; /*0x43c0b3*/
  }
  BYTE1(this->Audio7[0]) = 0; /*0x43c0b8*/
  this->FiringOccupantIndex = 0; /*0x43c0bc*/
  return TechnoClass::DTOR((int)this); /*0x43c0c4*/
}



// ==== 0x0043C0D0  ObjectClass::CreateDominatorDestructionEffects  this=ObjectClass  sig=csp ====
void **__thiscall CreateDominatorDestructionEffects(TechnoClass *this)
{
  void **result; // eax
  TechnoClass *v3; // edi
  int v4; // ebp
  int *v5; // eax
  int v6; // ecx
  int vtable0; // edx
  _DWORD *v8; // eax
  void **v9; // ebx
  int FoundationHeight; // edi
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+0h] [ebp-3Ch]
  int v14; // [esp+10h] [ebp-2Ch]
  char *v15; // [esp+14h] [ebp-28h]
  void **v16; // [esp+18h] [ebp-24h]
  int v17; // [esp+1Ch] [ebp-20h] BYREF
  int v18; // [esp+24h] [ebp-18h] BYREF
  int v19; // [esp+28h] [ebp-14h]
  int v20; // [esp+2Ch] [ebp-10h]
  _BYTE v21[12]; // [esp+30h] [ebp-Ch] BYREF

  result = *(void ***)&dword_8871E0->__pad_240[112]; /*0x43c0db*/
  v16 = result; /*0x43c0e6*/
  if ( result ) /*0x43c0ea*/
  {
    v3 = (TechnoClass *)((char *)this + 1480); /*0x43c105*/
    v14 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, (int)result - 1); /*0x43c10b*/
    v4 = 5592; /*0x43c10f*/
    v15 = (char *)this + 1480; /*0x43c114*/
    do /*0x43c28e*/
    {
      result = (void **)(*((_DWORD *)this + 328) + v4); /*0x43c121*/
      if ( *result == (void *)g_BuildingClassPool && result[1] == (void *)dword_89C84C || v3->vtable0 ) /*0x43c13d*/
        break; /*0x43c140*/
      v5 = (int *)World::ToScreen(&v17, result, v13); /*0x43c152*/
      v6 = *v5; /*0x43c157*/
      v19 = v5[1]; /*0x43c15e*/
      v20 = 0; /*0x43c162*/
      vtable0 = this->vtable0; /*0x43c166*/
      v18 = v6; /*0x43c16c*/
      v8 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, _BYTE *))(vtable0 + 172))(this, v21); /*0x43c173*/
      v18 += *v8; /*0x43c189*/
      v19 += v8[1]; /*0x43c197*/
      v20 += v8[2]; /*0x43c1a0*/
      result = (void **)__2_YAPAXI_Z(0x1C8u); /*0x43c1a4*/
      if ( result ) /*0x43c1ae*/
      {
        result = AnimClass::ctor( /*0x43c1dc*/
                   (AnimClass *)result,
                   *(void **)(*(_DWORD *)&dword_8871E0->__pad_240[100] + 4 * v14),
                   &v18,
                   0,
                   1,
                   (void *)0x600,
                   0,
                   0);
        v9 = result; /*0x43c1e1*/
        if ( result ) /*0x43c1e5*/
        {
          v3->vtable0 = (int)result; /*0x43c1eb*/
          FoundationHeight = BuildingTypeClass::GetFoundationHeight(*((int **)this + 328), 0); /*0x43c200*/
          v11 = (3 /*0x43c21e*/
               * (*(_DWORD *)(*((_DWORD *)this + 328) + v4 + 4)
                - 15 * (BuildingTypeClass::GetFoundationWidth(*((BuildingTypeClass **)this + 328)) + FoundationHeight))) >> 1;
          v9[64] = (void *)(v11 - 10); /*0x43c225*/
          if ( v11 - 10 > 0 ) /*0x43c22b*/
            v9[64] = 0; /*0x43c22d*/
          v12 = *((_DWORD *)v9[50] + 176); /*0x43c23d*/
          if ( v12 > 0 ) /*0x43c245*/
            v9[43] = (void *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v12 - 1); /*0x43c25b*/
          result = (void **)++v14; /*0x43c269*/
          if ( v14 >= (int)v16 ) /*0x43c270*/
            v14 = 0; /*0x43c272*/
        }
      }
      v4 += 8; /*0x43c27e*/
      v3 = (TechnoClass *)(v15 + 4); /*0x43c281*/
      v15 += 4; /*0x43c28a*/
    }
    while ( v4 < 5656 ); /*0x43c28e*/
  }
  return result; /*0x43c294*/
}



// ==== 0x0043C2D0  BuildingClass::MissionController  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::MissionController(BuildingClass *this)
{
  double v1; // st7
  int v2; // ebp
  int result; // eax
  BuildingTypeClass *v5; // eax
  CellClass *captureManager; // ecx
  BuildingClass *v9; // ebx
  CellClass *v10; // ecx
  int v11; // eax
  BuildingTypeClass *v12; // eax
  BuildingTypeClass *v13; // eax
  void (__thiscall **v14)(BuildingClass *, int, _DWORD); // eax
  void (__thiscall **vtable0)(BuildingClass *, int, _DWORD); // eax
  _DWORD *v16; // ebx
  TechnoClass *v17; // edi
  BuildingTypeClass *v18; // eax
  BuildingTypeClass *v19; // eax
  unsigned int v20; // ebp
  _DWORD *v21; // eax
  CellClass *v22; // eax
  CellClass *v23; // ebp
  BuildingTypeClass *v24; // eax
  int Member; // eax
  _DWORD *v26; // ebp
  _DWORD *v27; // eax
  int v28; // ecx
  int v29; // edx
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  BuildingTypeClass *v33; // eax
  _WORD *v34; // eax
  int i; // ebp
  int v36; // ebx
  BuildingTypeClass *v37; // esi
  int v40; // ecx
  char *v41; // eax
  BuildingTypeClass *Type; // eax
  _DWORD *v43; // edi
  _DWORD *v44; // eax
  int v45; // ecx
  int v46; // edx
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  BuildingTypeClass *v50; // esi
  double v51; // [esp+18h] [ebp-58h]
  double v52; // [esp+18h] [ebp-58h]
  _DWORD *v53; // [esp+20h] [ebp-50h]
  int v54; // [esp+30h] [ebp-40h] BYREF
  int v55; // [esp+34h] [ebp-3Ch]
  int v56; // [esp+38h] [ebp-38h]
  int v57; // [esp+3Ch] [ebp-34h]
  _DWORD v58[3]; // [esp+40h] [ebp-30h] BYREF
  char v59[12]; // [esp+4Ch] [ebp-24h] BYREF
  _BYTE v60[12]; // [esp+58h] [ebp-18h] BYREF
  _BYTE v61[12]; // [esp+64h] [ebp-Ch] BYREF
  TechnoClass *v62; // [esp+74h] [ebp+4h]
  char v63; // [esp+74h] [ebp+4h]
  TechnoClass *v64; // [esp+74h] [ebp+4h]
  TechnoClass *v65; // [esp+78h] [ebp+8h] BYREF
  int v66; // [esp+7Ch] [ebp+Ch]

  v2 = (int)v65; /*0x43c2d5*/
  switch ( (unsigned int)v65 )
  {
    case 3u:
      BuildingClass::StartProduction(this, 1); /*0x43cd05*/
      TechnoClass::Mission_RepairDispatch(v62, v2, v2, v66, v53); /*0x43cd17*/
      return 1; /*0x43cd28*/
    case 8u:
      Type = this->Type; /*0x43cd2b*/
      if ( !Type->UnitRepair && !Type->Bunker ) /*0x43cd3f*/
        goto LABEL_151; /*0x43cd3f*/
      v43 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *, _BYTE *))v62->RadioClass + 18))(v62, v61); /*0x43cd5b*/
      v44 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v60); /*0x43cd64*/
      v45 = *v44 - *v43; /*0x43cd6b*/
      v46 = v44[1]; /*0x43cd6d*/
      v47 = v44[2]; /*0x43cd70*/
      v55 = v45; /*0x43cd73*/
      v48 = v43[2]; /*0x43cd7f*/
      v56 = v46 - v43[1]; /*0x43cd82*/
      __asm { fild [esp+58h+var_38] } /*0x43cd88*/
      v57 = v47 - v48; /*0x43cd8c*/
      __asm /*0x43cd90*/
      {
        fild [esp+58h+var_34]
        fild [esp+58h+var_3C]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fld st(3)
        fmul st, st(4)
        faddp st(1), st
        fstp [esp+58h+var_58]; double
        fstp st
        fstp st
        fstp st
      }
      Math::Sqrt(v52); /*0x43cdb1*/
      LOWORD(v49) = Math::RoundToInt(v1); /*0x43cdb9*/
      if ( v49 < 384 ) /*0x43cdc3*/
        return 1; /*0x43cdc8*/
LABEL_151:
      TechnoClass::Mission_RepairDispatch(v62, v2, v2, v66, v53); /*0x43cddd*/
      v50 = this->Type; /*0x43cde2*/
      if ( v50->WeaponsFactory || v50->UnitRepair || v50->Bunker ) /*0x43cdfc*/
        return 23; /*0x43ce18*/
      else
        return 1; /*0x43ce09*/
    case 0xBu:
      (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 20, 0); /*0x43cc41*/
      goto LABEL_144; /*0x43cc47*/
    case 0xCu:
      if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) != 19 ) /*0x43cc59*/
      {
        (*((void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass + 122))(this, 5, 0); /*0x43cc67*/
        if ( this->Type->ConstructionYard ) /*0x43cc73*/
        {
          BuildingClass::ClearAnims(this, 7); /*0x43cc81*/
          BuildingClass::ClearAnims(this, 18); /*0x43cc8a*/
          BuildingClass::GetHealthRatio(this); /*0x43cc91*/
          _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43cc96*/
          __asm /*0x43cc9c*/
          {
            fcomp qword ptr [edx+1700h]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x43cca7*/
          {
            v40 = 1; /*0x43ccaf*/
            v41 = &this->Type->__pad_F70[524]; /*0x43ccb4*/
          }
          else
          {
            v40 = 0; /*0x43ccc1*/
            v41 = &this->Type->__pad_F70[508]; /*0x43ccc3*/
          }
          if ( v41 && *v41 ) /*0x43cccc*/
            BuildingClass::PlayAnim(this, *(int *)&DSurface_ViewBounds.__pad_FC[324], v41, 8, v40, 0, 0); /*0x43ccdb*/
        }
      }
LABEL_144:
      TechnoClass::Mission_RepairDispatch(v62, v2, v2, v66, v53); /*0x43cce0*/
      return 1; /*0x43cced*/
    case 0xDu:
      if ( !this->Type->WeaponsFactory ) /*0x43ce32*/
        return TechnoClass::Mission_RepairDispatch(v62, v2, v2, v66, v53); /*0x43ce32*/
      return 1; /*0x43ce40*/
    case 0xEu:
      v16 = (_DWORD *)v66; /*0x43c7e9*/
      v17 = v62; /*0x43c7ed*/
      TechnoClass::Mission_RepairDispatch(v62, (int)v65, (int)v65, v66, v53); /*0x43c7f6*/
      if ( !this->HasPower ) /*0x43c7fb*/
        return 10; /*0x43c811*/
      if ( this->Type->UnitRepair ) /*0x43c81a*/
      {
        if ( (unsigned __int8)Array::Contains((Array *)this, (int)v62) ) /*0x43c827*/
        {
          result = (*((int (__thiscall **)(BuildingClass *, int, TechnoClass *))this->TechnoClass + 158))(this, 34, v62); /*0x43c837*/
          if ( result == 10 ) /*0x43c840*/
            return result; /*0x43c840*/
        }
      }
      if ( this->Type->Bunker /*0x43c86a*/
        && (unsigned __int8)Array::Contains((Array *)this, (int)v62)
        && !TechnoClass::CanSelfRepair(v62) )
      {
        return 10; /*0x43c87f*/
      }
      v18 = this->Type; /*0x43c882*/
      if ( !v18->Hospital && !v18->Armory )
      {
        if ( !(unsigned __int8)Array::Contains((Array *)this, (int)v62) /*0x43c8b3*/
          && (unsigned __int8)Array::ContainsValue((Array *)this, (int)v62) )
        {
          (*((void (__thiscall **)(BuildingClass *, int, TechnoClass *))this->TechnoClass + 158))(this, 2, v62); /*0x43c8c3*/
          Array::Contains((Array *)this, (int)v62); /*0x43c8cc*/
        }
        v63 = 0; /*0x43c8d4*/
        if ( (unsigned __int8)Array::Contains((Array *)this, (int)v17) )
        {
          v19 = this->Type; /*0x43c8e2*/
          if ( v19->DockUnload || v19->Weeder )
          {
            v20 = v17 ? ((v17->? & 4) != 0 ? (unsigned int)v17 : 0) : 0;
            v21 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, char *, unsigned int))this->TechnoClass + 42))( /*0x43c91b*/
                              this,
                              v59,
                              v20);
            v22 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v21); /*0x43c927*/
            v23 = *(CellClass **)(v20 + 1444); /*0x43c92c*/
            if ( v23 ) /*0x43c934*/
            {
              if ( v22 != v23 ) /*0x43c938*/
                v63 = 1; /*0x43c93a*/
            }
          }
        }
        if ( Team::GetMember((Team *)this, 0) ) /*0x43c943*/
        {
          v24 = this->Type; /*0x43c950*/
          if ( v24->UnitRepair || v24->Bunker ) /*0x43c960*/
          {
            Member = Team::GetMember((Team *)this, 0); /*0x43c972*/
            v26 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)Member + 72))(Member, v60); /*0x43c985*/
            v27 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v61); /*0x43c98e*/
            v28 = *v27 - *v26; /*0x43c996*/
            v29 = v27[1]; /*0x43c998*/
            v30 = v27[2]; /*0x43c99b*/
            v55 = v28; /*0x43c99e*/
            v31 = v26[2]; /*0x43c9aa*/
            v56 = v29 - v26[1]; /*0x43c9ad*/
            __asm { fild [esp+58h+var_38] } /*0x43c9b3*/
            v57 = v30 - v31; /*0x43c9b7*/
            __asm /*0x43c9bb*/
            {
              fild [esp+58h+var_34]
              fild [esp+58h+var_3C]
              fld st
              fmul st, st(1)
              fld st(2)
              fmul st, st(3)
              faddp st(1), st
              fld st(3)
              fmul st, st(4)
              faddp st(1), st
              fstp [esp+58h+var_58]; double
              fstp st
              fstp st
              fstp st
            }
            Math::Sqrt(v51); /*0x43c9dc*/
            LOWORD(v32) = Math::RoundToInt(v1); /*0x43c9e4*/
            if ( v32 > 128 ) /*0x43c9ee*/
              v63 = 1; /*0x43c9f0*/
          }
        }
        if ( (*((int (__thiscall **)(BuildingClass *, int, TechnoClass *))this->TechnoClass + 158))(this, 19, v17) == 1 /*0x43ca0d*/
          || v63 )
        {
          *v16 = this; /*0x43ca13*/
          v33 = this->Type; /*0x43ca15*/
          if ( v33->DockUnload || v33->Weeder ) /*0x43ca25*/
          {
            v34 = (_WORD *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 110))(this, &v54); /*0x43ca7a*/
            LOWORD(v64) = *v34 + 3; /*0x43ca8d*/
            HIWORD(v64) = v34[1] + 1; /*0x43ca92*/
            v65 = v64; /*0x43ca9f*/
            *v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v65); /*0x43caae*/
            if ( (*((int (__thiscall **)(BuildingClass *, int, _DWORD *, TechnoClass *))this->TechnoClass + 159))( /*0x43cac1*/
                   this,
                   18,
                   v16,
                   v17) == 20 )
            {
              (*((void (__thiscall **)(BuildingClass *, int, TechnoClass *))this->TechnoClass + 158))(this, 24, v17); /*0x43cace*/
              if ( (*((int (__thiscall **)(BuildingClass *, int, TechnoClass *))this->TechnoClass + 158))(this, 22, v17) != 1 ) /*0x43cae4*/
              {
                (*((void (__thiscall **)(TechnoClass *, _DWORD *, int, int))v17->RadioClass + 93))( /*0x43caf7*/
                  v17,
                  &g_BuildingClassPool,
                  1,
                  1);
                return 1; /*0x43cb09*/
              }
            }
          }
          else if ( v33->Helipad ) /*0x43ca2f*/
          {
            *v16 = this; /*0x43ca3d*/
            if ( (*((int (__thiscall **)(BuildingClass *, int, _DWORD *, TechnoClass *))this->TechnoClass + 159))( /*0x43ca50*/
                   this,
                   18,
                   v16,
                   v17) == 20 )
            {
              (*((void (__thiscall **)(BuildingClass *, int))this->TechnoClass + 157))(this, 24); /*0x43ca5c*/
              return 1; /*0x43ca6e*/
            }
          }
        }
        return 1; /*0x43ca50*/
      }
      if ( (unsigned __int8)Array::ContainsValue((Array *)this, (int)v62) ) /*0x43cb0f*/
      {
        v58[0] = this->?[0]; /*0x43cb83*/
        v58[1] = this->?[1]; /*0x43cb94*/
        v58[2] = this->?[2]; /*0x43cb9b*/
        *v16 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v58); /*0x43cba4*/
        (*((void (__thiscall **)(BuildingClass *, int, _DWORD *, TechnoClass *))this->TechnoClass + 159))( /*0x43cbae*/
          this,
          18,
          v16,
          v62);
        return 1; /*0x43cbc0*/
      }
      for ( i = 0; i < this->?[2]; ++i ) /*0x43cb22*/
      {
        v36 = Team::GetMember((Team *)this, i); /*0x43cb2c*/
        if ( (*((int (__thiscall **)(BuildingClass *, int, int))this->TechnoClass + 158))(this, 34, v36) == 10 ) /*0x43cb3e*/
          (*((void (__thiscall **)(BuildingClass *, int, int))this->TechnoClass + 158))(this, 23, v36); /*0x43cb47*/
      }
      if ( !(unsigned __int8)Array::ContainsValue((Array *)this, (int)v62) ) /*0x43cb5b*/
        return 10; /*0x43cb62*/
      return 1; /*0x43cb62*/
    case 0xFu:
      TechnoClass::Mission_RepairDispatch(v62, (int)v65, (int)v65, v66, v53); /*0x43c305*/
      if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->?, (int)v62) ) /*0x43c311*/
        return 0; /*0x43c318*/
      if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 18 ) /*0x43c333*/
        return 10; /*0x43c333*/
      if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 19 ) /*0x43c346*/
        return 10; /*0x43c346*/
      if ( !this->BuildingClass_field_int_534 ) /*0x43c34c*/
        return 10; /*0x43c34c*/
      if ( !dword_A8E7AC && !(unsigned __int8)Array::ContainsValue((Array *)this, (int)v62) ) /*0x43c366*/
      {
        v5 = this->Type; /*0x43c36f*/
        if ( !v5->UnitAbsorb && !v5->InfantryAbsorb ) /*0x43c37f*/
          return 10; /*0x43c387*/
      }
      if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 33))(v62) + 1460) != 5 /*0x43c3e6*/
        && (*(_BYTE *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 33))(this) + 3278)
         && !*(_BYTE *)((*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 33))(v62) + 3278)
         || !*(_BYTE *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 33))(this) + 3278)
         && *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 33))(v62) + 3278)) )
      {
        return 10; /*0x43c3fc*/
      }
      if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 33))(v62) + 3434) ) /*0x43c409*/
        return 10; /*0x43c41f*/
      if ( !this->HasPower ) /*0x43c422*/
        return 10; /*0x43c438*/
      _EBX = this->Type; /*0x43c43b*/
      if ( !_EBX->UnitAbsorb && !_EBX->InfantryAbsorb ) /*0x43c453*/
        goto LABEL_33; /*0x43c453*/
      if ( (*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 11))(v62) == 1 && !this->Type->UnitAbsorb /*0x43c487*/
        || (*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 11))(v62) == 15 && !this->Type->InfantryAbsorb )
      {
        return 10; /*0x43c49d*/
      }
      captureManager = (CellClass *)v62->captureManager; /*0x43c4a0*/
      if ( captureManager && (unsigned __int8)CellClass::HasContent(captureManager) ) /*0x43c4aa*/
        return 10; /*0x43c4bf*/
      _EBX = this->Type; /*0x43c4c2*/
      if ( this->?[0] + 1 <= _EBX->? ) /*0x43c4d5*/
      {
        _EAX = (*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 33))(v62); /*0x43c4db*/
        __asm /*0x43c4e1*/
        {
          fld qword ptr [eax+380h]
          fcomp qword ptr [ebx+388h]
          fnstsw ax
        }
        if ( (_EAX & 0x4100) != 0 ) /*0x43c4f2*/
          return 1; /*0x43c4f2*/
      }
LABEL_33:
      if ( _EBX->Grinding ) /*0x43c4f8*/
        return 1; /*0x43c500*/
      if ( _EBX->Bunker ) /*0x43c506*/
      {
        if ( TechnoClass::CanSelfRepair(v62) /*0x43c52f*/
          && (*((int (__thiscall **)(BuildingClass *, int, TechnoClass *))this->TechnoClass + 158))(this, 35, v62) != 1 )
        {
          return 1; /*0x43c541*/
        }
        return 10; /*0x43cb74*/
      }
      if ( _EBX->UnitRepair ) /*0x43c544*/
      {
        if ( ((*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 11))(v62) == 1 /*0x43c57a*/
           || (*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 11))(v62) == 2)
          && (*((int (__thiscall **)(BuildingClass *, int, TechnoClass *))this->TechnoClass + 158))(this, 35, v62) != 1 )
        {
          return 1; /*0x43c58c*/
        }
        return 10; /*0x43c57a*/
      }
      if ( !_EBX->Armory && !_EBX->Hospital || (*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 11))(v62) != 15 )
      {
        v12 = this->Type; /*0x43c620*/
        if ( v12->Helipad )
          return (*((int (__stdcall **)(void **))v62->? + 3))(&v62->?) != 2 ? 10 : 1;
        if ( !v12->DockUnload /*0x43c682*/
          || (*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 11))(v62) != 1
          || !*(_BYTE *)(v62[1].ironTintTimer[2] + 3598)
          || !dword_A8E7AC && this->?[1] )
        {
          if ( !this->Type->Weeder /*0x43c6ba*/
            || (*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 11))(v62) != 1
            || !*(_BYTE *)(v62[1].ironTintTimer[2] + 3599) )
          {
            return 0; /*0x43c6c2*/
          }
          if ( !dword_A8E7AC ) /*0x43c6cf*/
            return !this->?[1]; /*0x43c323*/
        }
        return 1; /*0x43ccfe*/
      }
      if ( v62 )
        v9 = (*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 11))(v62) == 15 ? (BuildingClass *)v62 : 0;
      else
        v9 = 0; /*0x43c5b3*/
      v10 = (CellClass *)v9->?; /*0x43c5cb*/
      if ( v10 && (unsigned __int8)CellClass::HasContent(v10) ) /*0x43c5d5*/
        return 10; /*0x43c5e1*/
      if ( (unsigned __int8)BuildingClass::IsBeingRepairedOrCaptured(v9) ) /*0x43c5ef*/
        return 10; /*0x43c5fb*/
      v11 = -(this->? != 0); /*0x43c610*/
      LOBYTE(v11) = v11 & 0xF7; /*0x43c613*/
      return v11 + 10;
    case 0x10u:
      if ( this->?[1] /*0x43cbf4*/
        || !(unsigned __int8)Array::ContainsValue((Array *)this, (int)v62)
        || this->?
        || this->? != (HouseClass *)(*((int (__thiscall **)(TechnoClass *))v62->RadioClass + 15))(v62) )
      {
        return 10; /*0x43cbf4*/
      }
      v37 = this->Type; /*0x43cbfa*/
      if ( v37->Refinery || v37->UnitRepair ) /*0x43cc0e*/
        return 1; /*0x43cc16*/
      if ( !v37->Weeder ) /*0x43cc24*/
        return 10; /*0x43cc24*/
      return 1; /*0x43cc36*/
    case 0x15u:
      if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 19 ) /*0x43c6ff*/
        return 10; /*0x43c70d*/
      v13 = this->Type; /*0x43c710*/
      if ( v13->UnitAbsorb || v13->InfantryAbsorb ) /*0x43c724*/
        return 1; /*0x43c72c*/
      if ( v13->UnitRepair || v13->UnitReload || v13->Hospital || v13->Armory ) /*0x43c750*/
      {
        vtable0 = (void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass; /*0x43c7b5*/
        this->BuildingClass_field_bool_6DD = 1; /*0x43c7bd*/
        vtable0[122](this, 20, 0); /*0x43c7c4*/
        (*((void (__thiscall **)(TechnoClass *, _DWORD, _DWORD))v62->RadioClass + 122))(v62, 0, 0); /*0x43c7d4*/
        return 1; /*0x43c7dd*/
      }
      else if ( v13->Bunker ) /*0x43c75a*/
      {
        v14 = (void (__thiscall **)(BuildingClass *, int, _DWORD))this->TechnoClass; /*0x43c764*/
        this->BuildingClass_field_bool_6DD = 1; /*0x43c76c*/
        v14[122](this, 20, 0); /*0x43c773*/
        return 1; /*0x43c77c*/
      }
      else if ( v13->DockUnload ) /*0x43c788*/
      {
        (*((void (__thiscall **)(TechnoClass *, int, _DWORD))v62->RadioClass + 122))(v62, 16, 0); /*0x43c7a0*/
        return 1; /*0x43c7a9*/
      }
      else
      {
        return TechnoClass::Mission_RepairDispatch(v62, v2, v2, v66, v53); /*0x43ce43*/
      }
    default:
      return TechnoClass::Mission_RepairDispatch(v62, v2, v2, v66, v53);
  }
}



// ==== 0x0043CEA0  BuildingClass::DrawFactoryProduction  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::DrawFactoryProduction(BuildingClass *this)
{
  int result; // eax
  int *v3; // eax
  int v4; // ebx
  char *v5; // ebp
  _DWORD *v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // ebx
  int v10; // ebp
  int v11; // ebx
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // [esp+10h] [ebp-18h] BYREF
  int v15; // [esp+14h] [ebp-14h]
  _DWORD v16[4]; // [esp+18h] [ebp-10h] BYREF
  int *v17; // [esp+2Ch] [ebp+4h]
  char v18; // [esp+30h] [ebp+8h]
  char v19; // [esp+34h] [ebp+Ch]

  if ( !stru_A8EB00.?[391] ) /*0x43ceb0*/
  {
    result = (int)g_hWnd; /*0x43ceb2*/
    if ( g_hWnd ) /*0x43ceb9*/
    {
      if ( !v18 && !this->? || !this->? || this->? ) /*0x43cedc*/
        goto LABEL_20; /*0x43cedc*/
    }
  }
  this->? = 0; /*0x43cefd*/
  v3 = ClipRectIntersection(v16, v17, &DSurface_ViewBounds.field_0, 0, 0); /*0x43cf04*/
  *v17 = *v3; /*0x43cf0d*/
  v17[1] = v3[1]; /*0x43cf12*/
  v17[2] = v3[2]; /*0x43cf18*/
  v17[3] = v3[3]; /*0x43cf1e*/
  v4 = DSurface_ViewBounds.field_0; /*0x43cf23*/
  v5 = (char *)DSurface_ViewBounds.field_4; /*0x43cf29*/
  v6 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD *))this->TechnoClass + 75))(this, v16); /*0x43cf36*/
  v7 = v6[1]; /*0x43cf3e*/
  v8 = v4 + *v6; /*0x43cf41*/
  v9 = v6[2]; /*0x43cf43*/
  result = v6[3]; /*0x43cf46*/
  v10 = (int)&v5[v7]; /*0x43cf49*/
  if ( *v17 >= v8 + v9 ) /*0x43cf51*/
    goto LABEL_20; /*0x43cf51*/
  v11 = v17[1]; /*0x43cf57*/
  result += v10; /*0x43cf5a*/
  if ( v11 < result && (result = *v17 + v17[2], result > v8) && v11 + v17[3] > v10 ) /*0x43cf78*/
  {
    v12 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _DWORD *))this->TechnoClass + 43))(this, v16); /*0x43cf8c*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, v12, &v14); /*0x43cf99*/
    if ( *v17 > DSurface_ViewBounds.field_0 ) /*0x43cfa7*/
      v14 += DSurface_ViewBounds.field_0 - *v17; /*0x43cfb1*/
    v13 = v17[1]; /*0x43cfb5*/
    result = (int)DSurface_ViewBounds.field_4; /*0x43cfb8*/
    if ( v13 > (int)DSurface_ViewBounds.field_4 ) /*0x43cfbf*/
    {
      result = (int)DSurface_ViewBounds.field_4 - v13; /*0x43cfc1*/
      v15 += (int)DSurface_ViewBounds.field_4 - v13; /*0x43cfc9*/
    }
    if ( v19 ) /*0x43cfd3*/
    {
      if ( !this->IsFogged ) /*0x43cfd5*/
      {
        result = (*((int (__thiscall **)(BuildingClass *, int *, int *))this->TechnoClass + 313))(this, &v14, v17); /*0x43cfe9*/
        LOBYTE(result) = 1; /*0x43cff2*/
        return result; /*0x43cff8*/
      }
    }
    else
    {
      result = (*((int (__thiscall **)(BuildingClass *, int *, int *))this->TechnoClass + 69))(this, &v14, v17); /*0x43d005*/
    }
    LOBYTE(result) = 1; /*0x43d00e*/
  }
  else
  {
LABEL_20:
    LOBYTE(result) = 0; /*0x43d01a*/
  }
  return result; /*0x43cfef*/
}



// ==== 0x0043D030  BuildingClass::DisplayProductionFrame  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::DisplayProductionFrame(BuildingClass *this)
{
  int v2; // edx
  int (__thiscall **vtable0)(BuildingClass *); // eax
  int result; // eax
  int v5; // ebp
  int Type; // eax
  int *v7; // ebx
  int v8; // ecx
  int v9; // edi
  int v10; // eax
  __int16 *v11; // eax
  int v12; // eax
  int ProductionFrame; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // ebp
  int v17; // ebp
  int v18; // edx
  __int16 *v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // [esp+30h] [ebp-3Ch]
  int v23; // [esp+38h] [ebp-34h]
  int v24; // [esp+44h] [ebp-28h] BYREF
  __int16 v25[2]; // [esp+48h] [ebp-24h] BYREF
  int v26; // [esp+4Ch] [ebp-20h]
  int v27; // [esp+50h] [ebp-1Ch]
  int v28; // [esp+54h] [ebp-18h]
  int v29; // [esp+58h] [ebp-14h]
  int v30; // [esp+5Ch] [ebp-10h]
  int v31; // [esp+60h] [ebp-Ch]
  int v32; // [esp+64h] [ebp-8h]
  _DWORD *v33; // [esp+68h] [ebp-4h]
  int v34; // [esp+70h] [ebp+4h] BYREF
  int *v35; // [esp+74h] [ebp+8h]
  __int64 v36; // [esp+78h] [ebp+Ch] BYREF
  char v37; // [esp+80h] [ebp+14h] BYREF

  v2 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 110))(this, &v24); /*0x43d046*/
  vtable0 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x43d048*/
  *(_DWORD *)v25 = v2; /*0x43d04c*/
  result = vtable0[27](this); /*0x43d050*/
  v5 = result; /*0x43d053*/
  v24 = result; /*0x43d057*/
  if ( result ) /*0x43d05b*/
  {
    LOBYTE(result) = this->Type->InvisibleInGame; /*0x43d067*/
    if ( !(_BYTE)result ) /*0x43d06f*/
    {
      if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) != 24 /*0x43d091*/
        || (result = Flag::CheckNone((Flag *)this->?), (_BYTE)result) )
      {
        if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 16 /*0x43d0ac*/
          && *(_DWORD *)&this->Type->__pad_F70[1396] )
        {
          Type = AbstractClass::GetType((AbstractClass *)this->Factory); /*0x43d0bc*/
          if ( Type && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)Type + 132))(Type) + 3476) ) /*0x43d0cf*/
            v5 = *(_DWORD *)&this->Type->__pad_F70[1420]; /*0x43d0df*/
          else
            v5 = *(_DWORD *)&this->Type->__pad_F70[1396]; /*0x43d0ed*/
          v24 = v5; /*0x43d0f3*/
        }
        v7 = v35; /*0x43d0fc*/
        v8 = *(_DWORD *)(v34 + 4); /*0x43d103*/
        v28 = *(_DWORD *)v34; /*0x43d106*/
        v29 = v8; /*0x43d10a*/
        v34 = *(__int16 *)(v5 + 4); /*0x43d112*/
        v9 = v8 - v34 / 2; /*0x43d11d*/
        v30 = *v35; /*0x43d123*/
        v31 = v35[1]; /*0x43d12a*/
        v32 = v35[2]; /*0x43d131*/
        v33 = (_DWORD *)v35[3]; /*0x43d13a*/
        v10 = (int)v33; /*0x43d135*/
        if ( (int)v33 > v9 ) /*0x43d13e*/
        {
          v10 = v8 - v34 / 2; /*0x43d140*/
          v33 = (_DWORD *)v10; /*0x43d142*/
        }
        if ( v10 > 0 ) /*0x43d148*/
        {
          v11 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x43d15e*/
          v12 = (*((int (__thiscall **)(BuildingClass *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass /*0x43d173*/
                 + 116))(
                  this,
                  2,
                  0,
                  v11[133],
                  0,
                  0,
                  0,
                  0,
                  0,
                  0);
          v22 = -2 - ZCoordToScreenY(v12); /*0x43d18f*/
          ProductionFrame = BuildingClass::GetProductionFrame(this); /*0x43d19b*/
          ((void (__thiscall *)(BuildingClass *, int, int, __int64 *, char *, _DWORD, int, int))loc_705E00)( /*0x43d1a4*/
            this,
            v5,
            ProductionFrame,
            &v36,
            &v37,
            0,
            256,
            v22);
          v8 = v29; /*0x43d1a9*/
        }
        v27 = v8; /*0x43d1af*/
        v14 = *v7; /*0x43d1b5*/
        v27 = v8 - v9; /*0x43d1b7*/
        v30 = v14; /*0x43d1bb*/
        v15 = v7[1]; /*0x43d1bf*/
        result = v9 + v15; /*0x43d1c5*/
        v16 = v7[2]; /*0x43d1c7*/
        v31 = v9 + v15; /*0x43d1ca*/
        v32 = v16; /*0x43d1ce*/
        v17 = v34; /*0x43d1d2*/
        v33 = (_DWORD *)v7[3]; /*0x43d1d9*/
        v26 = v28; /*0x43d1e1*/
        v18 = v15 + v7[3]; /*0x43d1e8*/
        v33 = (_DWORD *)v34; /*0x43d1f0*/
        if ( v9 + v15 + v34 > v18 ) /*0x43d1f5*/
        {
          v17 = v18 - result; /*0x43d1f9*/
          v33 = (_DWORD *)(v18 - result); /*0x43d1fb*/
        }
        if ( result < v15 ) /*0x43d201*/
        {
          result = v9; /*0x43d205*/
          v31 = v15; /*0x43d209*/
          v17 += v9; /*0x43d20d*/
          v33 = (_DWORD *)v17; /*0x43d215*/
          v27 += v9; /*0x43d219*/
        }
        if ( v17 > 0 ) /*0x43d21f*/
        {
          v19 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x43d235*/
          v20 = (*((int (__thiscall **)(BuildingClass *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass /*0x43d24a*/
                 + 116))(
                  this,
                  0,
                  0,
                  v19[133],
                  0,
                  0,
                  0,
                  0,
                  0,
                  0);
          v23 = -ZCoordToScreenY(v20); /*0x43d259*/
          v21 = BuildingClass::GetProductionFrame(this); /*0x43d26d*/
          return ((int (__thiscall *)(BuildingClass *, _DWORD *, int, int *, char *, _DWORD, int, int))loc_705E00)( /*0x43d27a*/
                   this,
                   v33,
                   v21,
                   &v34,
                   &v37,
                   0,
                   256,
                   v23);
        }
      }
    }
  }
  return result; /*0x43d27f*/
}



// ==== 0x0043D290  BuildingClass::Draw  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Draw(BuildingClass *this)
{
  double v1; // st7
  int v3; // edx
  int (__thiscall **vtable0)(BuildingClass *); // eax
  int result; // eax
  int *Anims; // ecx
  int v7; // edx
  int (__usercall **v8)@<eax>(BuildingClass *@<ecx>); // edx
  int v9; // edi
  int v10; // edi
  int v11; // eax
  int v12; // edx
  unsigned __int8 v13; // bl
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  unsigned __int8 v19; // bl
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  _DWORD *v23; // eax
  CellClass *v24; // eax
  double v25; // st7
  int v26; // eax
  int v27; // ebx
  int GateStages; // eax
  int v29; // ebp
  __int16 *v30; // eax
  int v31; // eax
  int v32; // eax
  BuildingTypeClass *Type; // ecx
  BuildingTypeClass *v34; // edx
  int v35; // eax
  int v36; // eax
  int v37; // ebp
  int *v38; // eax
  BuildingTypeClass *v39; // ecx
  int v40; // ebx
  int v41; // kr08_4
  __int16 *v42; // eax
  int v43; // eax
  int v44; // eax
  __int16 *v45; // eax
  int v46; // eax
  int ProductionFrame; // eax
  __int16 *v48; // eax
  int v49; // eax
  __int16 *v50; // eax
  int v51; // eax
  MixFileClass *v52; // [esp+62h] [ebp-5Ch]
  int v53; // [esp+6Ah] [ebp-54h]
  int v54; // [esp+6Eh] [ebp-50h]
  int v55; // [esp+72h] [ebp-4Ch]
  int v56; // [esp+72h] [ebp-4Ch]
  int v57; // [esp+72h] [ebp-4Ch]
  unsigned __int8 v58; // [esp+87h] [ebp-37h]
  unsigned __int8 v59; // [esp+87h] [ebp-37h]
  unsigned __int8 v60; // [esp+88h] [ebp-36h]
  unsigned __int8 v61; // [esp+88h] [ebp-36h]
  char v62; // [esp+89h] [ebp-35h]
  int v63; // [esp+8Ah] [ebp-34h]
  __int16 v64[2]; // [esp+8Eh] [ebp-30h] BYREF
  int v65; // [esp+92h] [ebp-2Ch]
  MixFileClass *v66; // [esp+96h] [ebp-28h]
  __int16 v67[4]; // [esp+9Ah] [ebp-24h] BYREF
  int v68; // [esp+A2h] [ebp-1Ch]
  int v69; // [esp+A6h] [ebp-18h]
  int v70; // [esp+AAh] [ebp-14h] BYREF
  int v71; // [esp+AEh] [ebp-10h]
  _BYTE v72[4]; // [esp+B2h] [ebp-Ch] BYREF
  int v73; // [esp+B6h] [ebp-8h]
  void *retaddr; // [esp+BEh] [ebp+0h]
  int v75; // [esp+C2h] [ebp+4h]
  int v76; // [esp+C6h] [ebp+8h]
  int v77; // [esp+E6h] [ebp+28h]
  int v78; // [esp+EAh] [ebp+2Ch]

  v3 = *(_DWORD *)(*((int (__thiscall **)(BuildingClass *, __int16 *))this->TechnoClass + 110))(this, v67); /*0x43d2a8*/
  vtable0 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x43d2aa*/
  *(_DWORD *)v64 = v3; /*0x43d2ae*/
  result = vtable0[27](this); /*0x43d2b2*/
  v63 = result; /*0x43d2b7*/
  if ( result ) /*0x43d2bb*/
  {
    if ( this /*0x43d2e8*/
      && (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 11))(this) == 6
      && !this->BuildingClass_field_int_534
      && (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 19 )
    {
      Anims = this->Anims; /*0x43d2ea*/
      v7 = 21; /*0x43d2f0*/
      do /*0x43d306*/
      {
        if ( *Anims ) /*0x43d2f5*/
          *(_BYTE *)(*Anims + 413) = 1; /*0x43d2fb*/
        ++Anims; /*0x43d302*/
        --v7; /*0x43d305*/
      }
      while ( v7 ); /*0x43d306*/
    }
    result = (int)this->Type; /*0x43d308*/
    if ( !*(_BYTE *)(result + 5889) ) /*0x43d30e*/
    {
      v8 = (int (__usercall **)@<eax>(BuildingClass *@<ecx>))this->TechnoClass; /*0x43d322*/
      v65 = *(_DWORD *)(result + 5408); /*0x43d324*/
      v68 = 198; /*0x43d32a*/
      v69 = 446; /*0x43d332*/
      v62 = 0; /*0x43d33a*/
      if ( v8[97](this) == 16 ) /*0x43d348*/
      {
        v9 = Array::Get((Array *)this, 0); /*0x43d353*/
        if ( v9 ) /*0x43d357*/
        {
          if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v9 + 132))(v9) + 3476) /*0x43d377*/
            || *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v9 + 132))(v9) + 3434) )
          {
            v62 = 1; /*0x43d381*/
          }
        }
      }
      v10 = 0; /*0x43d38c*/
      if ( !this->? ) /*0x43d390*/
      {
LABEL_22:
        if ( !(*((unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass + 88))(this) || this->? != 1 ) /*0x43d449*/
          goto LABEL_29; /*0x43d449*/
        v17 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6320); /*0x43d455*/
        v18 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2 * v17; /*0x43d45b*/
        v19 = *(_BYTE *)(v17 + v18 + 4174 + 2087); /*0x43d468*/
        v61 = *(_BYTE *)(v17 + v18 + 6260); /*0x43d475*/
        v59 = *(_BYTE *)(v17 + v18 + 6262); /*0x43d47f*/
        v20 = DDraw::GetStatus() - 1; /*0x43d488*/
        if ( v20 ) /*0x43d489*/
        {
          if ( --v20 ) /*0x43d48c*/
          {
LABEL_28:
            LOWORD(v21) = v61; /*0x43d4cc*/
            LOWORD(v20) = v59; /*0x43d4d2*/
            LOWORD(v22) = v19 >> 1; /*0x43d4dd*/
            v10 |= v20 | (32 * ((32 * v21) | v22)); /*0x43d4e9*/
LABEL_29:
            v23 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, _BYTE *))this->TechnoClass + 18))(this, v72); /*0x43d4eb*/
            LOWORD(v66) = *v23 / 256; /*0x43d507*/
            HIWORD(v66) = v23[1] / 256; /*0x43d51f*/
            *(_DWORD *)v67 = v66; /*0x43d528*/
            v24 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v67); /*0x43d532*/
            if ( (unsigned __int8)CellClass::QuickPassable(v24) ) /*0x43d539*/
              v10 = 0; /*0x43d542*/
            if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 24 /*0x43d575*/
              && ((unsigned __int8)Window::IsVisible((Window *)this->?)
               || (unsigned __int8)BuildingClass::CheckFlag24((BuildingClass *)this->?)
               || (unsigned __int8)BuildingClass::CheckPowerFlags((BuildingClass *)this->?)) )
            {
              Animation::GetProgress((Animation *)this->?); /*0x43d584*/
              v25 = v1 * (double)this->Type->GateStages; /*0x43d58f*/
              LOWORD(v26) = Math::RoundToInt(v25); /*0x43d595*/
              v27 = v26; /*0x43d59c*/
              if ( (unsigned __int8)BuildingClass::CheckFlag24((BuildingClass *)this->?) ) /*0x43d59e*/
                v27 = this->Type->GateStages - v27; /*0x43d5b5*/
              if ( (unsigned __int8)Flag::CheckNone((Flag *)this->?) ) /*0x43d5b9*/
                v27 = 0; /*0x43d5c2*/
              if ( (unsigned __int8)BuildingClass::CheckPowerFlags((BuildingClass *)this->?) ) /*0x43d5c6*/
                v27 = this->Type->GateStages - 1; /*0x43d5db*/
              GateStages = this->Type->GateStages; /*0x43d5e2*/
              if ( v27 >= GateStages ) /*0x43d5ea*/
                v27 = GateStages - 1; /*0x43d5ec*/
              if ( v27 < 0 ) /*0x43d5f1*/
                v27 = 0; /*0x43d5f3*/
              *(_DWORD *)v67 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 27))(this); /*0x43d5fe*/
              BuildingClass::GetHealthRatio(this); /*0x43d602*/
              if ( v25 > *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5888) ) /*0x43d618*/
                v29 = 0; /*0x43d629*/
              else
                v29 = this->Type->GateStages + 1; /*0x43d626*/
              v30 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v64); /*0x43d63f*/
              v31 = (*((int (__thiscall **)(BuildingClass *, int, int, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass /*0x43d654*/
                     + 116))(
                      this,
                      2,
                      1,
                      v30[133],
                      v10,
                      0,
                      0,
                      0,
                      0,
                      0);
              v32 = ZCoordToScreenY(v31); /*0x43d65c*/
              return ((int (__thiscall *)(BuildingClass *, void *, int, int, int, _DWORD, int, int))loc_705E00)( /*0x43d683*/
                       this,
                       retaddr,
                       v27 + v29,
                       v77,
                       v78,
                       0,
                       256,
                       v73 - v32);
            }
            else
            {
              if ( (*((int (__usercall **)@<eax>(BuildingClass *@<ecx>))this->TechnoClass + 97))(this) == 16 ) /*0x43d69f*/
              {
                if ( v62 ) /*0x43d6a7*/
                {
                  Type = this->Type; /*0x43d6a9*/
                  if ( *(_DWORD *)&Type->__pad_F70[1420] ) /*0x43d6af*/
                  {
                    v63 = *(_DWORD *)&Type->__pad_F70[1420]; /*0x43d7d2*/
                    v65 = -40; /*0x43d7d6*/
                  }
                }
                else
                {
                  v34 = this->Type; /*0x43d6bf*/
                  if ( *(_DWORD *)&v34->__pad_F70[1396] ) /*0x43d6c5*/
                  {
                    v63 = *(_DWORD *)&v34->__pad_F70[1396]; /*0x43d6cf*/
                    v65 = -20; /*0x43d6d3*/
                  }
                }
              }
              v35 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this); /*0x43d6df*/
              if ( v35 != 18 && v35 != 19 ) /*0x43d6ed*/
              {
                v36 = *(_DWORD *)&this->Type->__pad_F70[1476]; /*0x43d6fc*/
                v68 = *(_DWORD *)&this->Type->__pad_F70[1472] + 198; /*0x43d70a*/
                v69 = v36 + 446; /*0x43d70e*/
              }
              v37 = (BuildingTypeClass::GetFoundationHeight((int *)this->Type, 0) << 8) - 256; /*0x43d72a*/
              v70 = (BuildingTypeClass::GetFoundationWidth(this->Type) << 8) - 256; /*0x43d74d*/
              v71 = v37; /*0x43d751*/
              v38 = TacticalClass::AdjustForZShapeMove((int *)v67, &v70); /*0x43d755*/
              v39 = this->Type; /*0x43d76e*/
              v40 = v69 - v38[1]; /*0x43d774*/
              v68 -= *v38; /*0x43d776*/
              v69 = v40; /*0x43d77a*/
              v66 = dword_89DDBC; /*0x43d77e*/
              if ( BuildingTypeClass::GetFoundationWidth(v39) >= 8 ) /*0x43d78a*/
                v66 = 0; /*0x43d78c*/
              if ( *(int *)(v76 + 12) > 0 ) /*0x43d7a1*/
              {
                v41 = *(__int16 *)(v63 + 6); /*0x43d7c1*/
                if ( BuildingClass::GetProductionFrame(this) < v41 / 2 ) /*0x43d7c7*/
                  BuildingClass::GetProductionFrame(this); /*0x43d7cb*/
                v54 = v69; /*0x43d802*/
                v53 = v68; /*0x43d803*/
                v52 = v66; /*0x43d806*/
                v42 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v64); /*0x43d812*/
                v43 = (*((int (__thiscall **)(BuildingClass *, int, int, int, int, MixFileClass *, _DWORD, int, int, _DWORD))this->TechnoClass /*0x43d836*/
                       + 116))(
                        this,
                        2,
                        1,
                        *(__int16 *)this->Type->ExtraLight + v42[133],
                        v10,
                        v52,
                        0,
                        v53,
                        v54,
                        0);
                v44 = ZCoordToScreenY(v43); /*0x43d83e*/
                ((void (__thiscall *)(BuildingClass *, int, int, int, int, _DWORD, int, int))loc_705E00)( /*0x43d85f*/
                  this,
                  v71,
                  v78,
                  v75,
                  v76,
                  0,
                  256,
                  v73 - v44);
              }
              if ( *(_DWORD *)&this->Type->__pad_F70[1448] && this->BuildingClass_field_int_534 ) /*0x43d874*/
              {
                v45 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v64); /*0x43d892*/
                v46 = (*((int (__thiscall **)(BuildingClass *, _DWORD, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass /*0x43d8b6*/
                       + 116))(
                        this,
                        0,
                        1,
                        *(__int16 *)this->Type->ExtraLight + v45[133],
                        v10,
                        0,
                        0,
                        0,
                        0,
                        0);
                v55 = -1 - ZCoordToScreenY(v46); /*0x43d8c8*/
                ProductionFrame = BuildingClass::GetProductionFrame(this); /*0x43d8d4*/
                ((void (__thiscall *)(BuildingClass *, _DWORD, int, int, int, _DWORD, int, int))loc_705E00)( /*0x43d8e9*/
                  this,
                  *(_DWORD *)&this->Type->__pad_F70[1448],
                  ProductionFrame,
                  v75,
                  v76,
                  0,
                  256,
                  v55);
              }
              result = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this); /*0x43d8f2*/
              if ( result == 16 ) /*0x43d8fb*/
              {
                if ( v62 ) /*0x43d907*/
                {
                  result = (int)this->Type; /*0x43d909*/
                  if ( *(_DWORD *)(result + 5380) ) /*0x43d90f*/
                  {
                    BuildingClass::GetHealthRatio(this); /*0x43d9da*/
                    v50 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v64); /*0x43da16*/
                    v51 = (*((int (__thiscall **)(BuildingClass *, _DWORD, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass /*0x43da3a*/
                           + 116))(
                            this,
                            0,
                            1,
                            *(__int16 *)this->Type->ExtraLight + v50[133],
                            v10,
                            0,
                            0,
                            0,
                            0,
                            0);
                    v57 = -ZCoordToScreenY(v51); /*0x43da55*/
                    return ((int (__thiscall *)(BuildingClass *, _DWORD, int, int, int, _DWORD, int, int))loc_705E00)( /*0x43da67*/
                             this,
                             *(_DWORD *)&this->Type->__pad_F70[1428],
                             v78,
                             v75,
                             v76,
                             0,
                             256,
                             v57);
                  }
                }
                else
                {
                  result = *(_DWORD *)&this->Type->__pad_F70[1404]; /*0x43d92d*/
                  if ( result ) /*0x43d935*/
                  {
                    BuildingClass::GetHealthRatio(this); /*0x43d93d*/
                    v48 = (__int16 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v64); /*0x43d978*/
                    v49 = (*((int (__thiscall **)(BuildingClass *, _DWORD, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))this->TechnoClass /*0x43d99c*/
                           + 116))(
                            this,
                            0,
                            1,
                            *(__int16 *)this->Type->ExtraLight + v48[133],
                            v10,
                            0,
                            0,
                            0,
                            0,
                            0);
                    v56 = -ZCoordToScreenY(v49); /*0x43d9b7*/
                    return ((int (__thiscall *)(BuildingClass *, _DWORD, int, int, int, _DWORD, int, int))loc_705E00)( /*0x43d9c9*/
                             this,
                             *(_DWORD *)&this->Type->__pad_F70[1404],
                             v78,
                             v75,
                             v76,
                             0,
                             256,
                             v56);
                  }
                }
              }
            }
            return result; /*0x43d68f*/
          }
          LOWORD(v21) = v59; /*0x43d494*/
          LOWORD(v22) = v19; /*0x43d4a0*/
          v20 = v21 | (32 * (v22 | (v61 << 6))); /*0x43d4a7*/
          v10 |= v20; /*0x43d4a9*/
        }
        LOWORD(v21) = v61; /*0x43d4ab*/
        LOWORD(v22) = v19 >> 1; /*0x43d4b8*/
        LOWORD(v20) = v59; /*0x43d4ba*/
        v21 *= 32; /*0x43d4c0*/
        v22 = v20 | ((v21 | v22) << 6); /*0x43d4c8*/
        v10 |= v22; /*0x43d4ca*/
        goto LABEL_28; /*0x43d4ca*/
      }
      v11 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6308); /*0x43d39c*/
      v12 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 2 * v11; /*0x43d3a2*/
      v13 = *(_BYTE *)(v11 + v12 + 4174 + 2087); /*0x43d3af*/
      v58 = *(_BYTE *)(v11 + v12 + 6260); /*0x43d3bc*/
      v60 = *(_BYTE *)(v11 + v12 + 6262); /*0x43d3c6*/
      v14 = DDraw::GetStatus() - 1; /*0x43d3cf*/
      if ( v14 ) /*0x43d3d0*/
      {
        if ( --v14 ) /*0x43d3d3*/
        {
LABEL_21:
          LOWORD(v16) = v58; /*0x43d411*/
          LOWORD(v15) = v60; /*0x43d417*/
          LOWORD(v14) = v13 >> 1; /*0x43d422*/
          v10 |= v15 | (32 * ((32 * v16) | v14)); /*0x43d42e*/
          goto LABEL_22; /*0x43d42e*/
        }
        LOWORD(v10) = v58; /*0x43d3d5*/
        LOWORD(v16) = v60; /*0x43d3db*/
        v10 = v16 | (32 * (v13 | (v10 << 6))); /*0x43d3ee*/
      }
      LOWORD(v16) = v58; /*0x43d3f0*/
      LOWORD(v14) = v13 >> 1; /*0x43d3fd*/
      LOWORD(v15) = v60; /*0x43d3ff*/
      v16 *= 32; /*0x43d405*/
      v14 = v15 | ((v16 | v14) << 6); /*0x43d40d*/
      v10 |= v14; /*0x43d40f*/
      goto LABEL_21; /*0x43d40f*/
    }
  }
  return result; /*0x43d688*/
}



// ==== 0x0043DA80  BuildingClass::DrawPlacementPreview  this=BuildingClass  sig=csp ====
int __thiscall FootClass::DrawPlacementPreview(BuildingClass *this)
{
  double v1; // st7
  int v3; // edx
  int (__thiscall **vtable0)(BuildingClass *); // eax
  int i; // edi
  int *v6; // eax
  int *v7; // esi
  int v8; // eax
  float v9; // ecx
  float v10; // edx
  _DWORD *v11; // eax
  AirstrikeClass *airstrike; // eax
  int v13; // esi
  int v14; // eax
  int v15; // edx
  unsigned __int8 v16; // bl
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  int v21; // edx
  unsigned __int8 v22; // bl
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  _DWORD *v26; // eax
  CellClass *v27; // eax
  int result; // eax
  int v29; // eax
  int v30; // edi
  int DoorStages; // eax
  BuildingTypeClass *Type; // eax
  int v33; // eax
  int v34; // esi
  int v35; // ecx
  BuildingTypeClass *v36; // ecx
  char v37; // dl
  unsigned int v38; // ebx
  unsigned int v39; // edi
  BuildingTypeClass *v40; // eax
  int v41; // esi
  int v42; // ecx
  int v43; // ecx
  int v4... [23647 chars total]



// ==== 0x0043E7B0  BuildingClass::DrawVisible  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::DrawVisible(BuildingClass *this, int *a2, int *a3)
{
  int v4; // eax
  FactoryClass *BuildLimit; // eax
  int Type; // eax
  int v7; // eax
  int v8; // eax
  _DWORD v9[2]; // [esp+Ch] [ebp-8h] BYREF

  (*((void (__thiscall **)(BuildingClass *, _DWORD *))this->TechnoClass + 110))(this, v9); /*0x43e7c1*/
  if ( this->? /*0x43e80c*/
    && ((unsigned __int8)HouseClass::IsAlliedWith((#375 *)this->?, (#375 *)dword_A83D4C)
     || ((1 << *((_DWORD *)dword_A83D4C->Object_field_0x34 + 46)) & this->?[0]) != 0) )
  {
    v4 = *a2 - 10; /*0x43e816*/
    v9[1] = a2[1] + 10; /*0x43e819*/
    v9[0] = v4; /*0x43e822*/
    (*((void (__thiscall **)(BuildingClass *, _DWORD *, int *, int *))this->TechnoClass + 278))(this, v9, a2, a3); /*0x43e82c*/
  }
  if ( ((1 << *((_DWORD *)dword_A83D4C->Object_field_0x34 + 46)) & this->?[0]) != 0 && this->? ) /*0x43e856*/
  {
    if ( (unsigned __int8)House::IsCurrentPlayer((House *)this->?) ) /*0x43e86a*/
      BuildLimit = (FactoryClass *)HouseClass::GetBuildLimit(this->?, this->Type->Factory[0], this->Type->?[1], 0); /*0x43e88f*/
    else
      BuildLimit = this->Factory; /*0x43e896*/
    if ( BuildLimit ) /*0x43e89e*/
    {
      Type = AbstractClass::GetType((AbstractClass *)BuildLimit); /*0x43e8a2*/
      if ( Type ) /*0x43e8a9*/
      {
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)Type + 132))(Type); /*0x43e8b4*/
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 152))(v7); /*0x43e8d3*/
        DrawToSurfaceSHP( /*0x43e8e6*/
          (int)g_DSurface_Hidden_2,
          *(int *)&stru_87F5F0.__pad_58[124],
          v8,
          0,
          a2,
          a3,
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
}



// ==== 0x0043E900  BuildingClass::GetZDrawOffset  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetZDrawOffset(BuildingClass *this)
{
  int v2; // eax
  int v3; // eax
  BuildingTypeClass *Type; // esi

  v2 = (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 116))(this); /*0x43e905*/
  v3 = ZCoordToScreenY(v2); /*0x43e90d*/
  Type = this->Type; /*0x43e912*/
  if ( Type->TurretAnimIsVoxel ) /*0x43e91c*/
    return *(_DWORD *)&Type->__pad_F70[632] - v3; /*0x43e92d*/
  else
    return -v3; /*0x43e930*/
}



// ==== 0x0043E940  TechnoClass::ComputeTargetAngle  this=BuildingClass  sig=csp ====
int __thiscall TechnoClass::ComputeTargetAngle(TechnoClass *this)
{
  int v1; // ebx
  int v2; // edi
  double v3; // st7
  int *TargetCoords; // eax
  int v6; // edi
  int (__thiscall **vtable0)(TechnoClass *, _DWORD); // edx
  int v8; // ebx
  int v9; // eax
  int (__thiscall **v10)(TechnoClass *, double *); // edx
  int *v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // esi
  unsigned int v16; // ecx
  unsigned int v17; // eax
  _DWORD *v18; // eax
  int v19; // edi
  int v20; // ebx
  int v21; // esi
  int result; // eax
  _DWORD *v24; // eax
  int *v25; // eax
  int v26; // edx
  int *v27; // eax
  TechnoClass *v29; // eax
  int v30; // ebx
  int *v31; // eax
  int v32; // edx
  _DWORD *v33; // eax
  int v34; // edi
  int v36; // eax
  char IsCloseEnoughToBuilding; // al
  int v39; // eax
  char v40; // al
  int v41; // [esp+24h] [ebp-64h]
  int v42; // [esp+24h] [ebp-64h]
  double v43; // [esp+28h] [ebp-60h]
  double v44; // [esp+2Ch] [ebp-5Ch]
  double v45; // [esp+2Ch] [ebp-5Ch]
  double v46; // [esp+30h] [ebp-58h]
  double v47; // [esp+30h] [ebp-58h]
  double v48; // [esp+30h] [ebp-58h]
  double v49; // [esp+30h] [ebp-58h]
  int *v50; // [esp+38h] [ebp-50h]
  int v51; // [esp+3Ch] [ebp-4Ch]
  int v52[3]; // [esp+44h] [ebp-44h] BYREF
  double v53[2]; // [esp+50h] [ebp-38h] BYREF
  int v54; // [esp+64h] [ebp-24h]
  int v55; // [esp+68h] [ebp-20h]
  int v56; // [esp+6Ch] [ebp-1Ch]
  int v57; // [esp+70h] [ebp-18h] BYREF
  int v58; // [esp+74h] [ebp-14h]
  int v59; // [esp+78h] [ebp-10h]
  int v60[2]; // [esp+7Ch] [ebp-Ch] BYREF
  int v61; // [esp+84h] [ebp-4h]
  int savedregs; // [esp+88h] [ebp+0h] BYREF
  _WORD *v63; // [esp+90h] [ebp+8h]
  int *v64; // [esp+94h] [ebp+Ch]

  if ( *(_BYTE *)(*(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass + 254))(this, 0) + 329) ) /*0x43e95a*/
  {
    (*((void (__thiscall **)(TechnoClass *))this->RadioClass + 33))(this); /*0x43e96c*/
    if ( v64 ) /*0x43e977*/
    {
      TargetCoords = TechnoClass::GetTargetCoords(this, v60); /*0x43e984*/
      v6 = *TargetCoords; /*0x43e989*/
      vtable0 = (int (__thiscall **)(TechnoClass *, _DWORD))this->RadioClass; /*0x43e98b*/
      v8 = TargetCoords[1]; /*0x43e98f*/
      v61 = TargetCoords[2]; /*0x43e995*/
      v9 = vtable0[254](this, 0); /*0x43e99b*/
      v10 = (int (__thiscall **)(TechnoClass *, double *))this->RadioClass; /*0x43e9a4*/
      v59 = *(_DWORD *)(v9 + 12); /*0x43e9a6*/
      v11 = (int *)v10[43](this, v53); /*0x43e9b1*/
      v12 = *v11; /*0x43e9b7*/
      v13 = v11[1]; /*0x43e9b9*/
      v14 = v11[2]; /*0x43e9bc*/
      v15 = this->gattlingValue; /*0x43e9bf*/
      v58 = v13; /*0x43e9c9*/
      v16 = *(_DWORD *)(v15 + 4576); /*0x43e9cd*/
      v54 = v12; /*0x43e9d3*/
      v59 += v14; /*0x43e9d7*/
      v17 = *(_DWORD *)(v15 + 4580); /*0x43e9db*/
      v57 = v12; /*0x43e9e1*/
      *(_QWORD *)&v53[0] = __PAIR64__(v17, v16); /*0x43e9f1*/
      v18 = (_DWORD *)World::ToScreen(&v52[1], v53, v50); /*0x43e9fd*/
      v19 = v6 - (v54 + *v18); /*0x43ea11*/
      v20 = v8 - (v18[1] + v58); /*0x43ea1d*/
      v54 = v19; /*0x43ea21*/
      v21 = v61 - v59; /*0x43ea25*/
      v55 = v20; /*0x43ea27*/
      v56 = v61 - v59; /*0x43ea2b*/
      if ( v61 == v59 ) /*0x43ea2f*/
      {
        *v63 = 0x4000; /*0x43ea34*/
        return (int)v63; /*0x43ea31*/
      }
      else
      {
        v52[1] = v19 * v19 + v20 * v20; /*0x43ea51*/
        __asm /*0x43ea55*/
        {
          fild [esp+58h+var_44+4]
          fstp [esp+58h+var_58]; double
        }
        Math::Sqrt(v46); /*0x43ea5c*/
        __asm /*0x43ea61*/
        {
          fstp qword ptr [esp+58h+var_38]
          fild [esp+58h+var_20]
          fild [esp+58h+var_1C]
          fild [esp+58h+var_24]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fld st(3)
          fmul st, st(4)
          faddp st(1), st
          fstp [esp+58h+var_58]; double
          fstp st
          fstp st
          fstp st
        }
        Math::Sqrt(v47); /*0x43ea8a*/
        LOWORD(_EAX) = Math::RoundToInt(v3); /*0x43ea92*/
        v52[1] = _EAX; /*0x43ea97*/
        __asm /*0x43ea9b*/
        {
          fild [esp+50h+var_44+4]
          fdivr qword ptr [esp+50h+var_38]
          fst qword ptr [esp+50h+var_38]
          fcomp ds:dbl_7E1718
          fnstsw ax
        }
        if ( (_EAX & 0x4100) == 0 ) /*0x43eab2*/
          v53[0] = 1.0; /*0x43eab4*/
        BuildingLight::CalcIntensity(v53[0]); /*0x43eace*/
        __asm { fmul ds:dbl_7E4418 } /*0x43ead3*/
        __asm { fmul ds:dbl_7E4410 }
        LOWORD(v52[1]) = Math::RoundToInt(v3); /*0x43eae9*/
        result = (int)v63; /*0x43eafb*/
        if ( v21 < 0 ) /*0x43eaee*/
          LOWORD(v52[1]) = 0x8000 - LOWORD(v52[1]); /*0x43eafe*/
        *(_DWORD *)v63 = v52[1]; /*0x43eb07*/
      }
    }
    else
    {
      *(_DWORD *)v63 = *ProgressTimer::GetValue((ProgressTimer *)this->barrelFacing, v53); /*0x43eb39*/
      return (int)v63; /*0x43eb36*/
    }
  }
  else if ( *(_BYTE *)(this->gattlingValue + 5827) ) /*0x43eb4a*/
  {
    v24 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(*v64 + 72))(v64, v60); /*0x43eb64*/
    Cell::GetGroundHeight(v24); /*0x43eb6d*/
    v25 = (int *)(*(int (__thiscall **)(int *, int *))(*v64 + 72))(v64, &v57); /*0x43eb7b*/
    v26 = v25[1]; /*0x43eb80*/
    v54 = *v25; /*0x43eb8a*/
    v55 = v26; /*0x43eb90*/
    v27 = (int *)(*((int (__thiscall **)(TechnoClass *, int *, _DWORD, _DWORD, _DWORD, _DWORD))this->RadioClass + 44))( /*0x43eba6*/
                   this,
                   v60,
                   0,
                   0,
                   0,
                   0);
    __asm { fild [esp+50h+var_24] } /*0x43ebac*/
    v57 = *v27; /*0x43ebb5*/
    __asm { fisub [esp+60h+var_18] } /*0x43ebbc*/
    v58 = v27[1]; /*0x43ebc3*/
    v59 = v27[2]; /*0x43ebca*/
    __asm /*0x43ebce*/
    {
      fstp [esp+60h+var_58]; double
      fild [esp+60h+var_14]
      fisub [esp+60h+var_20]
      fstp [esp+60h+var_64+4]; double
    }
    Math::CalcAngle(v43, v48); /*0x43ebdd*/
    _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43ebe2*/
    __asm /*0x43ebeb*/
    {
      fstp st
      fild dword ptr [ecx+16B8h]
    }
    __asm { fstp [esp+58h+var_58]; double }
    v29 = (TechnoClass *)ObjectClass::DistanceTo((ObjectClass *)this, (int)v64); /*0x43ebf9*/
    v30 = TechnoClass::ComputeScanRange(v29, v49); /*0x43ec07*/
    v31 = (int *)(*((int (__thiscall **)(TechnoClass *, int *, _DWORD))this->RadioClass + 192))(this, v60, 0); /*0x43ec12*/
    v54 = *v31; /*0x43ec1a*/
    v55 = v31[1]; /*0x43ec23*/
    v32 = *v64; /*0x43ec27*/
    v56 = v31[2]; /*0x43ec2c*/
    v33 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(v32 + 72))(v64, v60); /*0x43ec35*/
    v34 = v33[2] - v56; /*0x43ec50*/
    _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43ec5c*/
    LODWORD(v53[0]) = (*v33 - v54) * (*v33 - v54) + (v33[1] - v55) * (v33[1] - v55); /*0x43ec64*/
    __asm { fild [esp+50h+var_38] } /*0x43ec6c*/
    __asm
    {
      fstp qword ptr [esp+5Ch+var_38]
      fild dword ptr [ecx+16B8h]
    }
    __asm { fstp qword ptr [esp]; double }
    Math::Sqrt(v53[0]); /*0x43ec8c*/
    LOWORD(v36) = Math::RoundToInt(v3); /*0x43ec94*/
    v41 = v36; /*0x43ec99*/
    IsCloseEnoughToBuilding = TechnoClass::IsCloseEnoughToBuilding(this, 0); /*0x43ec9e*/
    if ( !(unsigned __int8)ComputeMathFacingAngle(IsCloseEnoughToBuilding, v30, v41, v34, v44, &v52[1]) ) /*0x43eca7*/
    {
      _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43ecb0*/
      __asm { fild dword ptr [edx+16B8h] } /*0x43ecbe*/
      __asm { fstp qword ptr [esp]; double }
      Math::Sqrt(v53[0]); /*0x43ecd2*/
      LOWORD(v39) = Math::RoundToInt(v3); /*0x43ecda*/
      v42 = v39; /*0x43ecdf*/
      v40 = TechnoClass::IsCloseEnoughToBuilding(this, 0); /*0x43ecf4*/
      ComputeMathFacingAngle(v40, 10 * v30 / 8, v42, v34, v45, &v52[1]); /*0x43ecfd*/
    }
    *(_DWORD *)v63 = v52[1]; /*0x43ed09*/
    return (int)v63; /*0x43ed02*/
  }
  else
  {
    *(_DWORD *)v63 = *TechnoClass::GetFiringAngle((TechnoClass *)v53, v1, (int)&savedregs, v2, v64, (int)v50, v51); /*0x43ed2b*/
    return (int)v63; /*0x43ed26*/
  }
  return result; /*0x43ea39*/
}



// ==== 0x0043ED40  BuildingClass::GetTurretAngle  this=BuildingClass  sig=csp ====
int __thiscall FootClass::GetTurretAngle(BuildingClass *this)
{
  double v1; // st7
  int v3; // esi
  BuildingTypeClass *Type; // ecx
  int v5; // edi
  int *v6; // eax
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // edx
  int *v10; // eax
  int *v12; // [esp+18h] [ebp-24h]
  int v13[3]; // [esp+24h] [ebp-18h] BYREF
  int v14; // [esp+30h] [ebp-Ch] BYREF
  int v15; // [esp+34h] [ebp-8h]
  int v16; // [esp+38h] [ebp-4h]
  int *v17; // [esp+40h] [ebp+4h]
  int v18; // [esp+44h] [ebp+8h]
  int v19; // [esp+44h] [ebp+8h]

  v16 = dword_89C850; /*0x43ed4b*/
  v3 = g_BuildingClassPool; /*0x43ed50*/
  Type = this->Type; /*0x43ed56*/
  v5 = dword_89C84C; /*0x43ed5d*/
  if ( Type->PrimaryFirePixelOffset[0] != 0xFFFF || Type->PrimaryFirePixelOffset[1] != 0xFFFF ) /*0x43ed7e*/
  {
    v6 = (int *)World::ToScreen(v13, Type->PrimaryFirePixelOffset, v12); /*0x43ed86*/
LABEL_7:
    v3 = *v6; /*0x43edb9*/
    v5 = v6[1]; /*0x43edc0*/
    v16 = 0; /*0x43edc2*/
    goto LABEL_8; /*0x43edc2*/
  }
  v7 = *(_DWORD *)&Type->__pad_F70[628]; /*0x43ed88*/
  v13[0] = *(_DWORD *)&Type->__pad_F70[624]; /*0x43ed96*/
  v13[1] = v7; /*0x43ed9a*/
  if ( v13[0] || v7 ) /*0x43eda2*/
  {
    v6 = (int *)World::ToScreen(&v14, v13, v12); /*0x43edb4*/
    goto LABEL_7; /*0x43edb4*/
  }
LABEL_8:
  v8 = (_DWORD *)(*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 18))(this, v13); /*0x43edc6*/
  v9 = v8[1]; /*0x43edd4*/
  v14 = v3 + *v8; /*0x43eddb*/
  v15 = v5 + v9; /*0x43ede3*/
  v10 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v18 + 72))(v18, v13); /*0x43edee*/
  v19 = *v10; /*0x43edf6*/
  Math::CalcAngle((double)v15 - (double)v10[1], (double)*v10 - (double)v14); /*0x43ee13*/
  LOWORD(v19) = Math::RoundToInt((v1 - 1.570796326794897) * -10430.06004058427); /*0x43ee2c*/
  *v17 = v19; /*0x43ee3b*/
  return (int)v17; /*0x43ee39*/
}



// ==== 0x0043EE50  ObjectClass::method_43EE50  this=ObjectClass  sig=csp ====
int __thiscall sub_43EE50(TechnoClass *this)
{
  _DWORD *Value; // eax
  int v3; // esi
  int result; // eax
  int v5; // [esp+8h] [ebp-4h] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(TechnoClass *))(this->vtable0 + 1020))(this) || !this->q058 ) /*0x43ee63*/
    return 0; /*0x43eea7*/
  Value = ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v5); /*0x43ee76*/
  v3 = this->q058; /*0x43ee7d*/
  result = dword_7F4890[((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F]; /*0x43ee8e*/
  if ( v3 ) /*0x43ee95*/
  {
    *(_DWORD *)(v3 + 172) = result; /*0x43ee97*/
    *(_DWORD *)(v3 + 196) = 0; /*0x43ee9d*/
  }
  return result; /*0x43eea3*/
}



// ==== 0x0043EEB0  BuildingClass::Cleanup  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::Cleanup(BuildingClass *this, int a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  char v5[64]; // [esp+8h] [ebp-40h] BYREF

  if ( a2 != this->SuperWeaponToken && !this->Type->TurretAnimIsVoxel ) /*0x43eecd*/
  {
    BuildingClass::ClearAnims(this, 9); /*0x43eedf*/
    if ( a2 != -1 ) /*0x43eee7*/
    {
      strcpy(v5, this->Type->?); /*0x43ef17*/
      v3 = strlen(asc_818D7C) + 1; /*0x43ef38*/
      qmemcpy(&v5[strlen(v5)], asc_818D7C, v3); /*0x43ef45*/
      v4 = strlen(v5); /*0x43ef5f*/
      v5[v4] = a2 + 66; /*0x43ef62*/
      v5[v4 + 1] = 0; /*0x43ef66*/
      BuildingClass::PlayAnim(this, v3, v5, 9, 0, 0, 0); /*0x43ef72*/
      this->SuperWeaponToken = a2; /*0x43ef78*/
    }
  }
}



// ==== 0x0043EF90  BuildingClass::GetProductionFrame  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetProductionFrame(BuildingClass *this)
{
  BuildingTypeClass *Type; // eax
  int v3; // edi
  BuildingTypeClass *v12; // esi
  int v13; // edx
  int v14; // eax
  int v15; // edx
  int v16; // edx

  Type = this->Type; /*0x43ef94*/
  v3 = this->?[0]; /*0x43ef9a*/
  if ( Type->LaserFence ) /*0x43efa0*/
    return this->LaserFenceFrame; /*0x43efb2*/
  if ( Type->FirestormWall ) /*0x43efb3*/
    return this->FirestormWallFrame; /*0x43efc5*/
  if ( !this->BuildingClass_field_int_534 ) /*0x43efc6*/
  {
    if ( Type->Gate ) /*0x43efd0*/
      v3 = Type->BuildingAnimFrame[0] + Type->BuildingAnimFrame[1] - v3 - 1; /*0x43efeb*/
    if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 97))(this) == 19 ) /*0x43effa*/
      return this->Type->BuildingAnimFrame[3 * this->BuildingClass_field_int_534] /*0x43f02b*/
           + this->Type->BuildingAnimFrame[3 * this->BuildingClass_field_int_534 + 1]
           - v3
           - 1;
    return v3; /*0x43f16f*/
  }
  if ( Type->CanBeOccupied ) /*0x43f02c*/
  {
    v3 = 0; /*0x43f03e*/
    if ( (*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 258))(this) > 0 ) /*0x43f048*/
      v3 = 2; /*0x43f04a*/
    BuildingClass::GetHealthRatio(this); /*0x43f051*/
    _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43f056*/
    __asm /*0x43f05c*/
    {
      fcomp qword ptr [ecx+1708h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x43f067*/
      goto LABEL_16; /*0x43f067*/
    if ( *(int *)((*((int (__thiscall **)(BuildingClass *))this->TechnoClass + 33))(this) + 1588) > 0 ) /*0x43f07b*/
    {
      BuildingClass::GetHealthRatio(this); /*0x43f07f*/
      _EAX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43f084*/
      __asm /*0x43f089*/
      {
        fcomp qword ptr [eax+1700h]
        fnstsw ax
      }
      if ( (_EAX & 0x4100) != 0 ) /*0x43f094*/
LABEL_16:
        ++v3; /*0x43f096*/
    }
    if ( this->Type->? == -1 && v3 == 3 ) /*0x43f0ad*/
      return 1; /*0x43f0bc*/
    return v3; /*0x43f0ad*/
  }
  if ( !Type->Gate ) /*0x43f0c7*/
  {
    BuildingClass::GetHealthRatio(this); /*0x43f0f6*/
    _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43f0fb*/
    __asm /*0x43f101*/
    {
      fcomp qword ptr [ecx+1700h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x43f10c*/
    {
      if ( this->BuildingClass_field_int_534 == 1 ) /*0x43f115*/
        return v3 + 1; /*0x43f11c*/
      v12 = this->Type; /*0x43f11d*/
      v13 = v12->BuildingAnim[0]; /*0x43f12f*/
      v14 = v12->BuildingAnimFrame[3] + v12->BuildingAnimFrame[4]; /*0x43f135*/
      if ( v14 <= v13 + v12->BuildingAnim[1] ) /*0x43f141*/
        v14 = v13 + v12->BuildingAnim[1]; /*0x43f143*/
      v15 = v12->BuildingAnim[6]; /*0x43f14b*/
      if ( v14 <= v15 + v12->BuildingAnim[7] ) /*0x43f155*/
        v14 = v15 + v12->BuildingAnim[7]; /*0x43f157*/
      v16 = v12->BuildingAnim[9]; /*0x43f15f*/
      if ( v14 <= v16 + v12->BuildingAnim[10] ) /*0x43f169*/
        v14 = v16 + v12->BuildingAnim[10]; /*0x43f16b*/
      v3 += v14; /*0x43f16d*/
    }
    return v3; /*0x43f16d*/
  }
  BuildingClass::GetHealthRatio(this); /*0x43f0c9*/
  _EDX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43f0ce*/
  __asm /*0x43f0d4*/
  {
    fcomp qword ptr [edx+1700h]
    fnstsw ax
  }
  if ( (_AX & 0x4100) != 0 ) /*0x43f0df*/
    return this->Type->GateStages + 1; /*0x43f0ef*/
  else
    return 0; /*0x43f0f2*/
}



// ==== 0x0043F180  BuildingClass::ProductionDisplayUpdate  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProductionDisplayUpdate(BuildingClass *this)
{
  BuildingClass *v1; // edi
  int result; // eax
  BuildingTypeClass *Type; // eax
  int v4; // ebx
  int (__thiscall **vtable0)(BuildingClass *, void *, int, int, _DWORD, int); // esi
  void *v6; // eax
  int FoundationWidth; // eax
  int *v8; // ecx
  int FoundationHeight; // eax
  int v10; // ebp
  int v11; // esi
  HouseClass *owner; // ecx
  BuildingTypeClass *v13; // eax
  int *v14; // eax
  _DWORD *v15; // eax
  int v16; // ecx
  int v17; // ebp
  int v18; // ecx
  __int16 v19; // bx
  __int16 v20; // ax
  int v21; // edx
  int v22; // eax
  int v23; // esi
  __int16 v24; // bx
  __int16 v25; // di
  BuildingClass *v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // ebp
  int v31; // esi
  __int16 v32; // bx
  BuildingClass *v33; // eax
  #374 *v34; // eax
  int (__thiscall **v35)(BuildingClass *, void *, int, int, _DWORD, int); // esi
  void *v36; // eax
  BuildingTypeClass *v37; // ecx
  void (__thiscall **v38)(BuildingClass *, int); // esi
  int v39; // eax
  int *v40; // eax
  int *Anims; // ebp
  int *v42; // esi
  _DWORD *v43; // eax
  _DWORD *v44; // eax
  int v45; // edx
  int v46; // eax
  int v47; // eax
  int *v48; // ecx
  int v49; // eax
  int v50; // ebx
  _DWORD *v51; // eax
  int v52; // ecx
  int v53; // ebp
  int v54; // ecx
  __int16 v55; // di
  __int16 v56; // ax
  int v57; // esi
  __int16 v58; // bx
  __int16 v59; // di
  BuildingClass *v60; // eax
  int v61; // edx
  int v62; // ebp
  int v63; // edi
  int v64; // esi
  BuildingClass *v65; // eax
  int v66; // eax
  int v67; // esi
  BuildingClass *v68; // eax
  _DWORD *v69; // eax
  int v70; // ecx
  int v71; // edx
  int Translucency; // ebx
  int *v73; // ecx
  int v74; // ebp
  bool v75; // zf
  int v76; // ebx
  int *v77; // ecx
  int v78; // esi
  int v79; // [esp+10h] [ebp-CCh]
  int v80; // [esp+14h] [ebp-C8h]
  int v81; // [esp+18h] [ebp-C4h]
  int v82; // [esp+2Ch] [ebp-B0h]
  int v83; // [esp+2Ch] [ebp-B0h]
  int v84; // [esp+2Ch] [ebp-B0h]
  int v85; // [esp+2Ch] [ebp-B0h]
  int v86; // [esp+2Ch] [ebp-B0h]
  __int16 v87[2]; // [esp+30h] [ebp-ACh] BYREF
  int *v88; // [esp+34h] [ebp-A8h]
  int j; // [esp+38h] [ebp-A4h]
  char v90; // [esp+3Fh] [ebp-9Dh]
  int i; // [esp+40h] [ebp-9Ch]
  __int16 v92[4]; // [esp+44h] [ebp-98h] BYREF
  __int16 v93[2]; // [esp+4Ch] [ebp-90h] BYREF
  int v94; // [esp+50h] [ebp-8Ch]
  int v95; // [esp+54h] [ebp-88h]
  int v96; // [esp+58h] [ebp-84h]
  int k; // [esp+5Ch] [ebp-80h]
  int v98; // [esp+60h] [ebp-7Ch]
  int v99; // [esp+64h] [ebp-78h]
  int v100; // [esp+68h] [ebp-74h]
  __int16 v101[2]; // [esp+6Ch] [ebp-70h] BYREF
  __int16 v102[2]; // [esp+70h] [ebp-6Ch] BYREF
  __int16 v103[2]; // [esp+74h] [ebp-68h] BYREF
  __int16 v104[2]; // [esp+78h] [ebp-64h] BYREF
  _DWORD v105[3]; // [esp+7Ch] [ebp-60h] BYREF
  int v106[3]; // [esp+88h] [ebp-54h] BYREF
  _DWORD v107[3]; // [esp+94h] [ebp-48h] BYREF
  _DWORD v108[3]; // [esp+A0h] [ebp-3Ch] BYREF
  int v109[3]; // [esp+ACh] [ebp-30h] BYREF
  char v110[12]; // [esp+B8h] [ebp-24h] BYREF
  char v111[12]; // [esp+C4h] [ebp-18h] BYREF
  int v112[3]; // [esp+D0h] [ebp-Ch] BYREF
  int v113; // [esp+E0h] [ebp+4h]

  v1 = this; /*0x43f191*/
  *(_DWORD *)v93 = this; /*0x43f194*/
  result = TechnoClass::UpdateProdWithSound((TechnoClass *)this, v113); /*0x43f198*/
  if ( (_BYTE)result )
  {
    result = (*((int (__thiscall **)(BuildingClass *, __int16 *))v1->TechnoClass + 110))(v1, v101); /*0x43f1ae*/
    *(_DWORD *)v92 = *(_DWORD *)result; /*0x43f1b9*/
    switch ( v113 )
    {
      case 0:
        result = MapClass::ApplyOverlayReveal((MapClass *)&stru_87F5F0.__pad_58[416], v92, (char *)v1); /*0x43f1d5*/
        LOBYTE(result) = 1; /*0x43f1dd*/
        break; /*0x43f1e6*/
      case 1:
      case 3:
        Type = v1->Type; /*0x43f1e9*/
        v4 = 0; /*0x43f1ef*/
        if ( Type->ToTile ) /*0x43f1f1*/
        {
          vtable0 = (int (__thiscall **)(BuildingClass *, void *, int, int, _DWORD, int))v1->TechnoClass; /*0x43f1fd*/
          v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v92); /*0x43f210*/
          if ( vtable0[107](v1, v6, -1, -1, 0, 1) ) /*0x43f218*/
            goto LABEL_33; /*0x43f218*/
          FoundationWidth = BuildingTypeClass::GetFoundationWidth(v1->Type); /*0x43f22c*/
          v8 = (int *)v1->Type; /*0x43f231*/
          v88 = (int *)FoundationWidth; /*0x43f238*/
          FoundationHeight = BuildingTypeClass::GetFoundationHeight(v8, 0); /*0x43f23c*/
          v10 = 0; /*0x43f241*/
          v82 = FoundationHeight; /*0x43f245*/
          v90 = 0; /*0x43f249*/
          for ( i = 0; v10 < v82; i = v10 ) /*0x43f251*/
          {
            v11 = 0; /*0x43f25b*/
            for ( j = 0; v11 < (int)v88; j = v11 ) /*0x43f263*/
            {
              HIWORD(v100) = v10 + v92[1]; /*0x43f276*/
              owner = v1->?; /*0x43f27b*/
              LOWORD(v100) = v11 + v92[0]; /*0x43f281*/
              v13 = v1->Type; /*0x43f28a*/
              *(_DWORD *)v87 = v100; /*0x43f290*/
              v81 = (int)owner; /*0x43f294*/
              v80 = (int)v13; /*0x43f29b*/
              v79 = v13->?[0]; /*0x43f2a0*/
              v14 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v87); /*0x43f2a7*/
              if ( (unsigned __int8)CellClass::IsPassable(v14, v79, v80, v81) /*0x43f2fb*/
                && *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v87) + 14) != *(_DWORD *)(v1->Type->ToTile + 660)
                && *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v87) + 59) != 1 )
              {
                v15 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v87); /*0x43f30b*/
                v16 = v15[18]; /*0x43f310*/
                if ( v16 != -1 ) /*0x43f316*/
                {
                  v17 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * v16); /*0x43f322*/
                  v94 = v15[9]; /*0x43f32a*/
                  v18 = *(_DWORD *)(v17 + 664); /*0x43f334*/
                  v19 = *((unsigned __int8 *)v15 + 287) % v18; /*0x43f343*/
                  v20 = *((unsigned __int8 *)v15 + 287) / v18; /*0x43f347*/
                  v21 = *(_DWORD *)(v17 + 668); /*0x43f349*/
                  LOWORD(v94) = v94 - v19; /*0x43f34f*/
                  HIWORD(v94) -= v20; /*0x43f354*/
                  v22 = 0; /*0x43f359*/
                  v99 = 0; /*0x43f35d*/
                  if ( v21 > 0 ) /*0x43f361*/
                  {
                    do /*0x43f3eb*/
                    {
                      v23 = 0; /*0x43f367*/
                      if ( v18 > 0 ) /*0x43f36b*/
                      {
                        v24 = HIWORD(v94) + v22; /*0x43f371*/
                        HIWORD(k) = HIWORD(v94) + v22; /*0x43f374*/
                        do /*0x43f3d4*/
                        {
                          HIWORD(v98) = v24; /*0x43f381*/
                          v25 = v23 + v94; /*0x43f387*/
                          LOWORD(v98) = v23 + v94; /*0x43f38f*/
                          *(_DWORD *)v103 = v98; /*0x43f398*/
                          *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v103) + 18) = -1; /*0x43f3a1*/
                          LOWORD(k) = v25; /*0x43f3a8*/
                          *(_DWORD *)v102 = k; /*0x43f3bb*/
                          v26 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v102); /*0x43f3bf*/
                          BuildingClass::CreateDestructionCrater(v26); /*0x43f3c6*/
                          v18 = *(_DWORD *)(v17 + 664); /*0x43f3cb*/
                          ++v23; /*0x43f3d1*/
                        }
                        while ( v23 < v18 ); /*0x43f3d4*/
                        v22 = v99; /*0x43f3d6*/
                        v1 = *(BuildingClass **)v93; /*0x43f3da*/
                      }
                      v27 = *(_DWORD *)(v17 + 668); /*0x43f3de*/
                      v99 = ++v22; /*0x43f3e7*/
                    }
                    while ( v22 < v27 ); /*0x43f3eb*/
                  }
                  v10 = i; /*0x43f3f1*/
                  v11 = j; /*0x43f3f5*/
                }
                v28 = (*(int (__thiscall **)(int, HouseClass *))(*(_DWORD *)v1->Type->ToTile + 140))( /*0x43f410*/
                        v1->Type->ToTile,
                        v1->?);
                v107[2] = 0; /*0x43f429*/
                v107[0] = (v87[0] << 8) + 128; /*0x43f433*/
                v107[1] = (v87[1] << 8) + 128; /*0x43f441*/
                (*(void (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v28 + 216))(v28, v107, 0); /*0x43f44b*/
                if ( (Object *)v1->? == dword_A83D4C ) /*0x43f45e*/
                {
                  v106[0] = (v87[0] << 8) + 128; /*0x43f47f*/
                  v106[1] = (v87[1] << 8) + 128; /*0x43f492*/
                  v106[2] = 0; /*0x43f4a1*/
                  MapClass::RevealArea1((MapClass *)&stru_87F5F0.__pad_58[416], v106, 1, dword_A83D4C, 0, 0, 0, 1, 0); /*0x43f4a8*/
                  v109[0] = (v87[0] << 8) + 128; /*0x43f4ce*/
                  v109[1] = (v87[1] << 8) + 128; /*0x43f4e4*/
                  v109[2] = 0; /*0x43f4f3*/
                  MapClass::RevealArea1((MapClass *)&stru_87F5F0.__pad_58[416], v109, 1, dword_A83D4C, 0, 0, 0, 1, 1); /*0x43f4fa*/
                }
                v90 = 1; /*0x43f4ff*/
              }
              ++v11; /*0x43f508*/
            }
            FoundationHeight = v82; /*0x43f515*/
            ++v10; /*0x43f519*/
          }
          i = 0; /*0x43f529*/
          j = FoundationHeight + 2; /*0x43f52f*/
          if ( FoundationHeight + 2 > 0 ) /*0x43f533*/
          {
            v29 = 0; /*0x43f539*/
            v30 = (int)v88 + 2; /*0x43f53b*/
            do /*0x43f5a7*/
            {
              v31 = 0; /*0x43f542*/
              if ( v30 > 0 ) /*0x43f546*/
              {
                HIWORD(v94) = v29 - 1; /*0x43f549*/
                v32 = v29 - 1; /*0x43f54e*/
                do /*0x43f596*/
                {
                  LOWORD(v94) = v31 - 1; /*0x43f559*/
                  LOWORD(v83) = v92[0] + v31 - 1; /*0x43f568*/
                  HIWORD(v83) = v32 + v92[1]; /*0x43f574*/
                  *(_DWORD *)v93 = v83; /*0x43f57d*/
                  v33 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v93); /*0x43f587*/
                  BuildingClass::CreatePlacementCrater(v33); /*0x43f58e*/
                  ++v31; /*0x43f593*/
                }
                while ( v31 < v30 ); /*0x43f596*/
                v29 = i; /*0x43f598*/
              }
              i = ++v29; /*0x43f5a3*/
            }
            while ( v29 < j ); /*0x43f5a7*/
          }
          if ( !v90 ) /*0x43f5b1*/
          {
LABEL_33:
            result = TechnoClass::UpdateProdWithSound((TechnoClass *)v1, 0); /*0x43f5db*/
            goto LABEL_34; /*0x43f5db*/
          }
          (*((void (__thiscall **)(BuildingClass *, int))v1->TechnoClass + 160))(v1, 3); /*0x43f5b9*/
          result = (*((int (__thiscall **)(BuildingClass *))v1->TechnoClass + 62))(v1); /*0x43f5c3*/
          LOBYTE(result) = 1; /*0x43f5cc*/
        }
        else if ( Type->Wall ) /*0x43f5ef*/
        {
          v34 = (#374 *)__2_YAPAXI_Z(0xB0u); /*0x43f5fe*/
          if ( v34 ) /*0x43f608*/
            Object::SpawnAtCell(v34, v1->Type->ToOverlay[0], v92, *(_DWORD *)(v1->?->relatedTagsCapacity + 184)); /*0x43f62e*/
          (*((void (__thiscall **)(BuildingClass *, int))v1->TechnoClass + 160))(v1, 3); /*0x43f639*/
          result = (*((int (__thiscall **)(BuildingClass *))v1->TechnoClass + 62))(v1); /*0x43f643*/
          LOBYTE(result) = 1; /*0x43f64c*/
        }
        else
        {
          if ( v113 != 3 ) /*0x43f65b*/
          {
            v35 = (int (__thiscall **)(BuildingClass *, void *, int, int, _DWORD, int))v1->TechnoClass; /*0x43f65d*/
            v36 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v92); /*0x43f670*/
            result = v35[107](v1, v36, -1, -1, 0, 1); /*0x43f678*/
            if ( result ) /*0x43f680*/
              goto LABEL_34; /*0x43f680*/
          }
          MapClass::FillRevealBuffer((MapClass *)&stru_87F5F0.__pad_58[416], v92, v1); /*0x43f691*/
          v37 = v1->Type; /*0x43f6a0*/
          v38 = (void (__thiscall **)(BuildingClass *, int))v1->TechnoClass; /*0x43f6a6*/
          v108[2] = 0; /*0x43f6b0*/
          v108[1] = (v92[1] << 8) + 128; /*0x43f6ba*/
          v108[0] = (v92[0] << 8) + 128; /*0x43f6cf*/
          v39 = (*((int (__thiscall **)(BuildingTypeClass *, char *, _DWORD *))v37->TechnoTypeClass + 27))( /*0x43f6e0*/
                  v37,
                  v110,
                  v108);
          v38[109](v1, v39); /*0x43f6e6*/
          v40 = (int *)(*((int (__thiscall **)(BuildingClass *, _DWORD *))v1->TechnoClass + 43))(v1, v105); /*0x43f6f5*/
          Anims = v1->Anims; /*0x43f6fd*/
          v94 = *v40; /*0x43f703*/
          v95 = v40[1]; /*0x43f70a*/
          v96 = v40[2]; /*0x43f711*/
          do /*0x43f795*/
          {
            v42 = (int *)*Anims; /*0x43f715*/
            if ( *Anims ) /*0x43f715*/
            {
              v43 = Matrix3x4::TransformCell( /*0x43f738*/
                      (float *)g_TacticalClass_Instance,
                      v111,
                      (int *)&v1->Type->__pad_F70[v4 + 12]);
              v44 = Coord::Subtract((Coord *)v112, *v43 + v94, v95 + v43[1], v96 + v43[2]); /*0x43f761*/
              v105[0] = *v44; /*0x43f768*/
              v105[1] = v44[1]; /*0x43f76f*/
              v45 = v44[2]; /*0x43f777*/
              v46 = *v42; /*0x43f77a*/
              v105[2] = v45; /*0x43f77f*/
              (*(void (__thiscall **)(int *, _DWORD *))(v46 + 436))(v42, v105); /*0x43f783*/
            }
            v4 += 68; /*0x43f789*/
            ++Anims; /*0x43f78c*/
          }
          while ( v4 < 1428 ); /*0x43f795*/
          v47 = BuildingTypeClass::GetFoundationWidth(v1->Type); /*0x43f7a1*/
          v48 = (int *)v1->Type; /*0x43f7a6*/
          *(_DWORD *)v87 = v47; /*0x43f7ae*/
          v49 = BuildingTypeClass::GetFoundationHeight(v48, 0); /*0x43f7b2*/
          v98 = v49; /*0x43f7b9*/
          i = 0; /*0x43f7bd*/
          if ( v49 > 0 ) /*0x43f7c5*/
          {
            do /*0x43f916*/
            {
              v50 = 0; /*0x43f7cf*/
              for ( k = 0; v50 < *(int *)v87; k = v50 ) /*0x43f7d7*/
              {
                LOWORD(v84) = v50 + v92[0]; /*0x43f7ee*/
                HIWORD(v84) = i + v92[1]; /*0x43f7f3*/
                *(_DWORD *)v93 = v84; /*0x43f800*/
                v51 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v93); /*0x43f80a*/
                v52 = v51[18]; /*0x43f80f*/
                if ( v52 != -1 ) /*0x43f815*/
                {
                  v88 = 0; /*0x43f821*/
                  v53 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * v52); /*0x43f829*/
                  v94 = v51[9]; /*0x43f831*/
                  v54 = *(_DWORD *)(v53 + 664); /*0x43f83b*/
                  v55 = *((unsigned __int8 *)v51 + 287) % v54; /*0x43f84a*/
                  v56 = *((unsigned __int8 *)v51 + 287) / v54; /*0x43f84e*/
                  LOWORD(v94) = v94 - v55; /*0x43f850*/
                  HIWORD(v94) -= v56; /*0x43f855*/
                  if ( *(int *)(v53 + 668) > 0 ) /*0x43f862*/
                  {
                    do /*0x43f8ec*/
                    {
                      v57 = 0; /*0x43f868*/
                      if ( v54 > 0 ) /*0x43f86c*/
                      {
                        v58 = HIWORD(v94) + (_WORD)v88; /*0x43f876*/
                        HIWORD(v99) = HIWORD(v94) + (_WORD)v88; /*0x43f879*/
                        do /*0x43f8d9*/
                        {
                          HIWORD(j) = v58; /*0x43f886*/
                          v59 = v57 + v94; /*0x43f88c*/
                          LOWORD(j) = v57 + v94; /*0x43f894*/
                          *(_DWORD *)v104 = j; /*0x43f89d*/
                          *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v104) + 18) = -1; /*0x43f8a6*/
                          LOWORD(v99) = v59; /*0x43f8ad*/
                          *(_DWORD *)v101 = v99; /*0x43f8c0*/
                          v60 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v101); /*0x43f8c4*/
                          BuildingClass::CreateDestructionCrater(v60); /*0x43f8cb*/
                          v54 = *(_DWORD *)(v53 + 664); /*0x43f8d0*/
                          ++v57; /*0x43f8d6*/
                        }
                        while ( v57 < v54 ); /*0x43f8d9*/
                      }
                      v61 = *(_DWORD *)(v53 + 668); /*0x43f8df*/
                      v88 = (int *)((char *)v88 + 1); /*0x43f8e8*/
                    }
                    while ( (int)v88 < v61 ); /*0x43f8ec*/
                    v50 = k; /*0x43f8f2*/
                  }
                }
                ++v50; /*0x43f8fa*/
              }
              ++i; /*0x43f912*/
            }
            while ( i < v98 ); /*0x43f916*/
            v49 = v98; /*0x43f91c*/
          }
          result = v49 + 2; /*0x43f91e*/
          v62 = 0; /*0x43f921*/
          j = result; /*0x43f925*/
          if ( result <= 0 ) /*0x43f929*/
            goto LABEL_92; /*0x43f929*/
          v63 = *(_DWORD *)v87 + 2; /*0x43f933*/
          do /*0x43f995*/
          {
            v64 = 0; /*0x43f936*/
            if ( v63 > 0 ) /*0x43f93a*/
            {
              HIWORD(v94) = v62 - 1; /*0x43f93f*/
              do /*0x43f98c*/
              {
                LOWORD(v94) = v64 - 1; /*0x43f94f*/
                LOWORD(v85) = v92[0] + v64 - 1; /*0x43f95e*/
                HIWORD(v85) = v62 - 1 + v92[1]; /*0x43f96a*/
                *(_DWORD *)v93 = v85; /*0x43f979*/
                v65 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v93); /*0x43f97d*/
                BuildingClass::CreatePlacementCrater(v65); /*0x43f984*/
                ++v64; /*0x43f989*/
              }
              while ( v64 < v63 ); /*0x43f98c*/
              result = j; /*0x43f98e*/
            }
            ++v62; /*0x43f992*/
          }
          while ( v62 < result ); /*0x43f995*/
          LOBYTE(result) = 1; /*0x43f99a*/
        }
        break; /*0x43f5d5*/
      case 2:
        *(_DWORD *)v93 = (*((int (__thiscall **)(BuildingClass *))v1->TechnoClass + 121))(v1); /*0x43f9b0*/
        v66 = (*((int (__thiscall **)(BuildingClass *))v1->TechnoClass + 111))(v1); /*0x43f9b8*/
        v67 = (*((int (__thiscall **)(BuildingClass *, _DWORD))v1->TechnoClass + 281))(v1, *(__int16 *)(v66 + 266)); /*0x43f9d0*/
        if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))v1->TechnoClass + 88))(v1)
          || v1->?
          && (v1 ? (v68 = (*((int (__thiscall **)(BuildingClass *))v1->TechnoClass + 11))(v1) == 6 ? v1 : 0) : (v68 = 0),
              (BuildingClass *)v1->?->AirstrikeClass_field_50 == v68) )
        {
          LOWORD(v67) = Techno::StartInvulnerability(v67); /*0x43fa17*/
        }
        *(_WORD *)v1->BuildingClass_field_short_700 = v67; /*0x43fa19*/
        j = (unsigned __int16)v67; /*0x43fa26*/
        v88 = v1->Anims; /*0x43fa30*/
        v86 = 21; /*0x43fa34*/
        do /*0x43fabc*/
        {
          v69 = (_DWORD *)*v88; /*0x43fa40*/
          if ( *v88 ) /*0x43fa40*/
          {
            v70 = v69[50]; /*0x43fa46*/
            if ( v70 && *(_BYTE *)(v70 + 860) ) /*0x43fa50*/
            {
              v71 = j; /*0x43fa5e*/
              v69[53] = *(_DWORD *)v93; /*0x43fa62*/
              v69[63] = v71; /*0x43fa68*/
            }
            Translucency = v1->Translucency; /*0x43fa6e*/
            if ( Translucency == 15 /*0x43fa88*/
              && (*((int (__thiscall **)(BuildingClass *, _DWORD, _DWORD))v1->TechnoClass + 26))(v1, 0, 0) == 5 )
            {
              LOBYTE(Translucency) = 16; /*0x43fa8a*/
            }
            v73 = v1->Anims; /*0x43fa8f*/
            v74 = 21; /*0x43fa91*/
            do /*0x43faa6*/
            {
              if ( *v73 ) /*0x43fa96*/
                *(_BYTE *)(*v73 + 376) = Translucency; /*0x43fa9c*/
              ++v73; /*0x43faa2*/
              --v74; /*0x43faa5*/
            }
            while ( v74 ); /*0x43faa6*/
          }
          v75 = v86 == 1; /*0x43fab3*/
          ++v88; /*0x43fab4*/
          --v86; /*0x43fab8*/
        }
        while ( !v75 ); /*0x43fabc*/
        v76 = v1->Translucency; /*0x43fac2*/
        if ( v76 == 15 && (*((int (__thiscall **)(BuildingClass *, _DWORD, _DWORD))v1->TechnoClass + 26))(v1, 0, 0) == 5 ) /*0x43fadc*/
          LOBYTE(v76) = 16; /*0x43fade*/
        v77 = v1->Anims; /*0x43fae3*/
        v78 = 21; /*0x43fae5*/
        do /*0x43fafa*/
        {
          result = *v77; /*0x43faea*/
          if ( *v77 ) /*0x43faea*/
            *(_BYTE *)(result + 376) = v76; /*0x43faf0*/
          ++v77; /*0x43faf6*/
          --v78; /*0x43faf9*/
        }
        while ( v78 ); /*0x43fafa*/
        goto LABEL_92; /*0x43fafa*/
      default:
LABEL_92:
        LOBYTE(result) = 1; /*0x43fafc*/
        break; /*0x43faff*/
    }
  }
  else
  {
LABEL_34:
    LOBYTE(result) = 0; /*0x43f5e0*/
  }
  return result; /*0x43f1da*/
}



// ==== 0x0043FB20  BuildingClass::ProcessSpreadEffect  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessSpreadEffect(BuildingClass *this)
{
  double v1; // st7
  char v3; // bl
  int Type; // eax
  int v5; // eax
  int v6; // eax
  char v8; // bl
  int *DamageFireAnims; // edi
  int v12; // ebp
  int temporalTargetingMe; // ecx
  int v14; // edi
  int v15; // ecx
  char *v16; // eax
  int v17; // edi
  int v18; // edx
  int v19; // eax
  int airstrike; // eax
  int target; // ecx
  int result; // eax
  int v23; // eax
  int Member81; // ebx
  int v25; // edi
  int v26; // eax
  unsigned int BuildingClass_field_int_538; // eax
  int v28; // edx
  int *v29; // edi
  char *ProductionTimeMult; // eax
  int health; // eax
  int *v32; // edi
  int v33; // ebx
  int v34; // edx
  int i; // edx
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // edi
  int v41; // edx
  int v42; // eax
  int v43; // ecx
  int v44; // ebx
  int v45; // ebp
  _WORD *v46; // eax
  int v47; // edi
  _WORD *v48; // eax
  int v49; // eax
  __int16 *v50; // eax
  int v51; // ecx
  int v52; // eax
  int v53; // ebx
  int v54; // edi
  int *v55; // eax
  int v56; // ecx
  int v57; // edx
  int vtable0; // eax
  _DWORD *v59; // eax
  int v60; // ecx
  int v61; // edx
  int v62; // eax
  AnimClass *v63; // eax
  void **v64; // eax
  AnimClass *v65; // eax
  BuildingClass *v66; // [esp+0h] [ebp-4Ch]
  BuildingClass *v67; // [esp+0h] [ebp-4Ch]
  char v68; // [esp+13h] [ebp-39h]
  int v69; // [esp+14h] [ebp-38h]
  int v70; // [esp+18h] [ebp-34h]
  __int16 v71[2]; // [esp+1Ch] [ebp-30h] BYREF
  __int16 v72[2]; // [esp+20h] [ebp-2Ch] BYREF
  int v73; // [esp+24h] [ebp-28h] BYREF
  char v74[4]; // [esp+28h] [ebp-24h] BYREF
  int v75[2]; // [esp+2Ch] [ebp-20h] BYREF
  int v76; // [esp+34h] [ebp-18h] BYREF
  int v77; // [esp+38h] [ebp-14h]
  int v78; // [esp+3Ch] [ebp-10h]
  char v79[12]; // [esp+40h] [ebp-Ch] BYREF

  v3 = (*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->vtable0 + 848))(this) /*0x43fb57*/
    && (*(int (__thiscall **)(BuildingClass *))(this->vtable0 + 388))(this) != 18
    && (*(int (__thiscall **)(BuildingClass *))(this->vtable0 + 388))(this) != 19;
  Type = this->Type; /*0x43fb61*/
  if ( v3 == this->__pad_6B8[16] ) /*0x43fb67*/
  {
    if ( *(_DWORD *)(Type + 3712) != -1 || *(_DWORD *)(Type + 3716) != -1 ) /*0x43fc0a*/
    {
      v76 = this->location[0]; /*0x43fc18*/
      v77 = this->location[1]; /*0x43fc25*/
      v78 = this->location[2]; /*0x43fc2c*/
      StartAudioController(&v76, (AudioSource *)&this->Audio8_2); /*0x43fc34*/
    }
  }
  else
  {
    if ( *(_DWORD *)(Type + 3712) != -1 || *(_DWORD *)(Type + 3716) != -1 ) /*0x43fb80*/
    {
      AudioFile::Stop((AudioFile *)&this->Audio8_2); /*0x43fb8a*/
      v5 = this->location[1]; /*0x43fb9b*/
      v76 = this->location[0]; /*0x43fb9e*/
      v77 = v5; /*0x43fba2*/
      v6 = this->Type; /*0x43fba6*/
      v78 = this->location[2]; /*0x43fbb0*/
      if ( v3 ) /*0x43fb99*/
        StartAudioControllerAt(*(_DWORD *)(v6 + 3712), &v76, (int **)&this->Audio8_2); /*0x43fbbe*/
      else
        StartAudioControllerAt(*(_DWORD *)(v6 + 3716), &v76, (int **)&this->Audio8_2); /*0x43fbe3*/
    }
    Animation::UpdateBuildingAnimations((Animation *)this); /*0x43fbea*/
    this->__pad_6B8[16] = v3; /*0x43fbef*/
  }
  if ( *(_BYTE *)(this->Type + 5499) ) /*0x43fc41*/
  {
    BuildingClass::GetHealthRatio(this); /*0x43fc4b*/
    _EAX = dword_8871E0; /*0x43fc50*/
    __asm /*0x43fc55*/
    {
      fcomp qword ptr [eax+1708h]
      fnstsw ax
    }
    if ( (BYTE1(_EAX) & 0x41) != 0 ) /*0x43fc60*/
    {
      v8 = 1; /*0x43fc62*/
      goto LABEL_22; /*0x43fc64*/
    }
  }
  else
  {
    BuildingClass::GetHealthRatio(this); /*0x43fc66*/
    _ECX = dword_8871E0; /*0x43fc6b*/
    __asm /*0x43fc71*/
    {
      fcomp qword ptr [ecx+1700h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x43fc7c*/
    {
      v8 = 1; /*0x43fc7e*/
      goto LABEL_22; /*0x43fc80*/
    }
  }
  v8 = 0; /*0x43fc82*/
LABEL_22:
  if ( v8 != this->RequiresDamageFires[0] ) /*0x43fc8a*/
  {
    if ( v8 ) /*0x43fc8e*/
    {
      CreateDominatorDestructionEffects(this); /*0x43fc92*/
    }
    else
    {
      DamageFireAnims = this->DamageFireAnims; /*0x43fc99*/
      v12 = 8; /*0x43fc9f*/
      do /*0x43fcbc*/
      {
        if ( *DamageFireAnims ) /*0x43fca4*/
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)*DamageFireAnims + 248))(*DamageFireAnims); /*0x43fcac*/
          *DamageFireAnims = 0; /*0x43fcb2*/
        }
        ++DamageFireAnims; /*0x43fcb8*/
        --v12; /*0x43fcbb*/
      }
      while ( v12 ); /*0x43fcbc*/
    }
    this->RequiresDamageFires[0] = v8; /*0x43fcbe*/
  }
  if ( *(_BYTE *)(this->Type + 3233) ) /*0x43fccd*/
    this->turretIsRotating = (unsigned __int8)TimerClass::Active((int)this->primaryFacing); /*0x43fce7*/
  else
    this->turretIsRotating = 0; /*0x43fcef*/
  temporalTargetingMe = this->temporalTargetingMe; /*0x43fcf9*/
  if ( temporalTargetingMe ) /*0x43fd01*/
    (*(void (__thiscall **)(int))(*(_DWORD *)temporalTargetingMe + 92))(temporalTargetingMe); /*0x43fd05*/
  if ( (*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->vtable0 + 468))(this) /*0x43fd1e*/
    || (*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->vtable0 + 472))(this) )
  {
    v51 = this->Type; /*0x4403d4*/
    v52 = *(_DWORD *)(v51 + 5504); /*0x4403e0*/
    if ( v52 && *(_DWORD *)&dword_8871E0->__pad_240[260] ) /*0x4403ee*/
    {
      v53 = 0; /*0x4403fc*/
      if ( v52 > 0 ) /*0x440400*/
      {
        v54 = 5512; /*0x440406*/
        do /*0x4404e9*/
        {
          if ( !(((int)dword_A8ED84 + v53) % 24) && *(_DWORD *)&dword_8871E0->__pad_240[260] ) /*0x440428*/
          {
            v55 = (int *)World::ToScreen(v75, (_DWORD *)(v54 + v51), &v66->vtable0); /*0x440445*/
            v56 = v55[1]; /*0x44044a*/
            v57 = *v55; /*0x44044d*/
            vtable0 = this->vtable0; /*0x44044f*/
            v77 = v56; /*0x440451*/
            v76 = v57; /*0x440459*/
            v78 = 0; /*0x440460*/
            v59 = (_DWORD *)(*(int (__thiscall **)(BuildingClass *, char *))(vtable0 + 172))(this, v79); /*0x440468*/
            v60 = v76 + *v59; /*0x440478*/
            v61 = v59[1]; /*0x44047a*/
            v62 = v78 + v59[2]; /*0x440486*/
            v76 = v60; /*0x44048d*/
            v77 += v61; /*0x440491*/
            v78 = v62; /*0x440495*/
            v63 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x440499*/
            if ( v63 ) /*0x4404a3*/
              v64 = AnimClass::ctor(v63, *(void **)&dword_8871E0->__pad_240[260], &v76, 0, 1, (void *)0x600, 0, 0); /*0x4404c6*/
            else
              v64 = 0; /*0x4404cd*/
            v64[64] = (void *)-200; /*0x4404cf*/
          }
          v51 = this->Type; /*0x4404d9*/
          ++v53; /*0x4404df*/
          v54 += 8; /*0x4404e0*/
        }
        while ( v53 < *(_DWORD *)(v51 + 5504) ); /*0x4404e9*/
      }
    }
    else if ( !((int)dword_A8ED84 % 24) ) /*0x4404fc*/
    {
      if ( *(_DWORD *)&dword_8871E0->__pad_240[260] ) /*0x440502*/
      {
        v65 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x440511*/
        if ( v65 ) /*0x44051b*/
        {
          v76 = this->location[0]; /*0x440530*/
          v77 = this->location[1]; /*0x440539*/
          v78 = this->location[2]; /*0x440545*/
          AnimClass::ctor(v65, *(void **)&dword_8871E0->__pad_240[260], &v76, 0, 1, (void *)0x600, 0, 0); /*0x440558*/
        }
      }
    }
    result = this->target; /*0x44055d*/
    if ( result ) /*0x440565*/
      return (*(int (__thiscall **)(BuildingClass *, _DWORD))(this->vtable0 + 968))(this, 0); /*0x440565*/
    return result; /*0x440565*/
  }
  v14 = *(_DWORD *)&this->__pad_6B8[24]; /*0x43fd2c*/
  v15 = *(_DWORD *)&this->__pad_6B8[32]; /*0x43fd32*/
  v16 = &this->__pad_6B8[24]; /*0x43fd3e*/
  if ( v14 != -1 ) /*0x43fd46*/
  {
    if ( (int)dword_A8ED84 - v14 >= v15 ) /*0x43fd4e*/
      goto LABEL_46; /*0x43fd4e*/
    v15 -= (int)dword_A8ED84 - v14; /*0x43fd54*/
  }
  if ( v15 == 1 ) /*0x43fd59*/
  {
    v17 = v77; /*0x43fd5b*/
    *(_DWORD *)v16 = dword_A8ED84; /*0x43fd63*/
    *(_DWORD *)&this->__pad_6B8[28] = v17; /*0x43fd65*/
    *(_DWORD *)&this->__pad_6B8[32] = 0; /*0x43fd68*/
    v18 = *(_DWORD *)(this->Type + 5472); /*0x43fd77*/
    *(_DWORD *)v16 = dword_A8ED84; /*0x43fd7d*/
    *(_DWORD *)&this->__pad_6B8[28] = v77; /*0x43fd83*/
    *(_DWORD *)&this->__pad_6B8[32] = v18; /*0x43fd86*/
    if ( !*(_BYTE *)(*(_DWORD *)(this->owner + 52) + 422) ) /*0x43fd92*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->vtable0 + 848))(this) ) /*0x43fda0*/
      {
        v19 = *(_DWORD *)(this->Type + 5468); /*0x43fdb0*/
        if ( v19 <= 0 ) /*0x43fdb8*/
          HouseClass::ProcessPowerDrain((int *)this->owner, -v19); /*0x43fdd1*/
        else
          HouseClass::AddPower((HouseClass *)this->owner, *(_DWORD *)(this->Type + 5468)); /*0x43fdc1*/
      }
    }
  }
LABEL_46:
  airstrike = this->airstrike; /*0x43fdd6*/
  if ( airstrike && *(BuildingClass **)(airstrike + 80) == this ) /*0x43fde3*/
    (*(void (__thiscall **)(BuildingClass *, int))(this->vtable0 + 292))(this, 2); /*0x43fdeb*/
  if ( *(_BYTE *)(this->Type + 5816) ) /*0x43fdf7*/
  {
    target = this->target; /*0x43fe01*/
    if ( target ) /*0x43fe09*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)target + 84))(target) ) /*0x43fe0d*/
        v1 = ((double (__thiscall *)(BuildingClass *, _DWORD))*(_DWORD *)(this->vtable0 + 968))(this, 0); /*0x43fe1a*/
    }
  }
  BuildingClass::UpdateAnimFrames(v66, v1); /*0x43fe22*/
  if ( (*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->vtable0 + 512))(this) /*0x43fe43*/
    && this->BuildingClass_field_int_534
    && (*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->vtable0 + 492))(this) )
  {
    this->BuildingClass_field_bool_6DD[0] = 0; /*0x43fe4d*/
  }
  MovementAI::Begin(this); /*0x43fe56*/
  LOBYTE(result) = this->isAliveFlag[0]; /*0x43fe5b*/
  if ( !(_BYTE)result ) /*0x43fe63*/
    return result; /*0x43fe63*/
  if ( *(_BYTE *)((*(int (__thiscall **)(BuildingClass *))(this->vtable0 + 132))(this) + 3285) /*0x43fe86*/
    && TechnoClass::GetMember81(this) > 0 )
  {
    ++this->ammoReloadTimer; /*0x43fe88*/
  }
  if ( !this->ammo ) /*0x43fe8e*/
  {
    v23 = this->Type; /*0x43fe98*/
    if ( !*(_BYTE *)(v23 + 5825) && !*(_BYTE *)(v23 + 5826) ) /*0x43fea8*/
      this->ammo = *(_DWORD *)(v23 + 1668); /*0x43feb8*/
  }
  if ( (*(int (__thiscall **)(BuildingClass *))(this->vtable0 + 388))(this) != 1 )
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(BuildingClass *))(this->vtable0 + 132))(this) + 3285) )
    {
      if ( (int)dword_A8ED84 - this->turretChargeTimer > *(_DWORD *)&dword_8871E0->__pad_C3C[456] + 5 )
      {
        TechnoClass::GattlingValueRateDown_GattlingRateDownDelay(this, *(_DWORD *)(this->Type + 3344)); /*0x43ff19*/
        Member81 = TechnoClass::GetMember81(this); /*0x43ff27*/
        v25 = BuildingClass::checkPlacement(this); /*0x43ff2e*/
        if ( v25 > 0 )
        {
          v26 = (unsigned __int8)Audio::IsLoud(&this->veterancy)
              ? *(_DWORD *)(this->Type + 4 * v25 + 3312)
              : *(_DWORD *)(this->Type + 4 * v25 + 3288);
          if ( Member81 < v26 ) /*0x43ff61*/
            TechnoClass::SetSpread(this, v25 - 1); /*0x43ff67*/
        }
      }
    }
    if ( *(_BYTE *)((*(int (__thiscall **)(BuildingClass *))(this->vtable0 + 132))(this) + 3285) /*0x43ff89*/
      && TechnoClass::GetMember81(this) > 0 )
    {
      ++this->ammoReloadTimer; /*0x43ff8b*/
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->vtable0 + 512))(this) /*0x43ffa3*/
    && (*(unsigned __int8 (__thiscall **)(BuildingClass *))(this->vtable0 + 492))(this) )
  {
    this->BuildingClass_field_bool_6DD[0] = 0; /*0x43ffad*/
  }
  BuildingClass_field_int_538 = this->BuildingClass_field_int_538; /*0x43ffb4*/
  if ( BuildingClass_field_int_538 != -1 ) /*0x43ffbc*/
  {
    if ( this->BuildingClass_field_int_534 != BuildingClass_field_int_538 ) /*0x43ffc8*/
    {
      v28 = this->Type; /*0x43ffca*/
      this->BuildingClass_field_int_534 = BuildingClass_field_int_538; /*0x43ffd5*/
      v29 = (int *)(v28 + 12 * BuildingClass_field_int_538 + 3844); /*0x43ffdb*/
      if ( BuildingClass_field_int_538 < 2 ) /*0x43ffe2*/
        ProductionTimeMult = Rules::GetProductionTimeMult( /*0x44000d*/
                               (Rules *)&dword_A8EB60,
                               *(_DWORD *)(v28 + 12 * BuildingClass_field_int_538 + 3852));
      else
        ProductionTimeMult = *(char **)(v28 + 12 * BuildingClass_field_int_538 + 3852); /*0x43ffef*/
      this->animation[2] = (int)dword_A8ED84; /*0x43fff8*/
      this->animation[3] = v77; /*0x440028*/
      this->animation[4] = (int)ProductionTimeMult; /*0x44002b*/
      this->animation[5] = (int)ProductionTimeMult; /*0x44002e*/
      this->animation[0] = *v29; /*0x440036*/
    }
    this->BuildingClass_field_int_538 = -1; /*0x44003c*/
  }
  health = this->health; /*0x440042*/
  if ( health != this->BuildingClass_field_544 ) /*0x44004d*/
  {
    *(_BYTE *)(this->owner + 22392) = 1; /*0x440055*/
    *(_BYTE *)(this->owner + 22393) = 1; /*0x440062*/
    health = this->health; /*0x440069*/
    this->BuildingClass_field_544 = health; /*0x44006c*/
  }
  if ( !health ) /*0x440074*/
  {
    v32 = this->DamageFireAnims; /*0x440076*/
    v33 = 8; /*0x44007c*/
    do /*0x440099*/
    {
      if ( *v32 ) /*0x440081*/
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)*v32 + 248))(*v32); /*0x440089*/
        *v32 = 0; /*0x44008f*/
      }
      ++v32; /*0x440095*/
      --v33; /*0x440098*/
    }
    while ( v33 ); /*0x440099*/
    v34 = this->C4Timer[0]; /*0x44009b*/
    result = this->C4Timer[2]; /*0x4400a1*/
    if ( v34 != -1 ) /*0x4400a9*/
    {
      if ( (int)dword_A8ED84 - v34 >= result ) /*0x4400b5*/
      {
LABEL_98:
        (*(void (__thiscall **)(BuildingClass *))(this->vtable0 + 212))(this); /*0x4400c1*/
        BuildingClass::EjectCrew(this, (_BYTE *)this->C4AppliedBy); /*0x4400d4*/
        (*(void (__thiscall **)(BuildingClass *))(this->vtable0 + 248))(this); /*0x4400dd*/
        return BuildingClass::AfterDestruction(this); /*0x4400f1*/
      }
      result -= (int)dword_A8ED84 - v34; /*0x4400b7*/
    }
    if ( result ) /*0x4400bb*/
      return result; /*0x4400bb*/
    goto LABEL_98; /*0x4400bb*/
  }
  BuildingClass::UpdatePrism(this); /*0x4400f4*/
  if ( *(_BYTE *)(this->Type + 5493) ) /*0x4400ff*/
  {
    for ( i = this->Audio7[1] - 1; i >= 0; --i ) /*0x440114*/
    {
      if ( *(BuildingClass **)(*(_DWORD *)(this->Occupants + 4 * i) + 692) != this ) /*0x440125*/
      {
        v36 = this->Audio7[1]; /*0x440127*/
        if ( i < v36 ) /*0x44012f*/
        {
          v37 = v36 - 1; /*0x440131*/
          v38 = i; /*0x440134*/
          for ( this->Audio7[1] = v37; /*0x44013e*/
                v38 < this->Audio7[1];
                *(_DWORD *)(this->Occupants + 4 * v38 - 4) = *(_DWORD *)(this->Occupants + 4 * v38) )
          {
            ++v38; /*0x440146*/
          }
        }
      }
    }
    v39 = this->Audio7[1]; /*0x44015b*/
    if ( v39 >= 3 ) /*0x440164*/
      goto LABEL_111; /*0x440164*/
    HouseClass::GetPowerRatio((HouseClass *)this->owner); /*0x44016c*/
    __asm /*0x440171*/
    {
      fcomp ds:dbl_7E1718
      fnstsw ax
    }
    if ( (_AX & 0x4000) == 0 ) /*0x44017c*/
      goto LABEL_110; /*0x44017c*/
    if ( this->HasPower[0] && v39 >= 1 ) /*0x44018b*/
LABEL_111:
      this->IsOverpowered[0] = 1; /*0x440196*/
    else
LABEL_110:
      this->IsOverpowered[0] = 0; /*0x44018d*/
  }
  if ( *(_BYTE *)(this->Type + 5499) ) /*0x4401a3*/
    BuildingClass::ProcessStructureAbandoned(this); /*0x4401af*/
  BuildingClass::ProcessActiveAnimation(v67, v1); /*0x4401b6*/
  if ( *(_DWORD *)(this->Type + 3768) ) /*0x4401c1*/
    ProcessAutoProduction(this); /*0x4401cd*/
  if ( !this->C4Applied[0] ) /*0x4401da*/
    goto LABEL_138; /*0x4401da*/
  v41 = this->C4Timer[0]; /*0x4401e0*/
  v42 = this->C4Timer[2]; /*0x4401e6*/
  if ( v41 != -1 ) /*0x4401ee*/
  {
    if ( (int)dword_A8ED84 - v41 >= v42 ) /*0x4401fa*/
    {
LABEL_121:
      v43 = this->Type; /*0x440206*/
      v73 = this->health; /*0x44020f*/
      if ( *(_BYTE *)(v43 + 5814) ) /*0x440213*/
      {
        v68 = 0; /*0x440221*/
        v44 = -2; /*0x440226*/
        do /*0x4402de*/
        {
          v45 = -2; /*0x44022b*/
          do /*0x4402d4*/
          {
            v46 = (_WORD *)(*(int (__thiscall **)(BuildingClass *, char *))(this->vtable0 + 440))(this, v74); /*0x440239*/
            HIWORD(v69) = v44 + v46[1]; /*0x44024c*/
            LOWORD(v69) = *v46 + v45; /*0x440251*/
            *(_DWORD *)v71 = v69; /*0x44025e*/
            v47 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v71) + 14); /*0x44026d*/
            v48 = (_WORD *)(*(int (__thiscall **)(BuildingClass *, int *))(this->vtable0 + 440))(this, v75); /*0x440279*/
            HIWORD(v70) = v44 + v48[1]; /*0x44028c*/
            LOWORD(v70) = *v48 + v45; /*0x440291*/
            *(_DWORD *)v72 = v70; /*0x44029e*/
            v49 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v72) + 17); /*0x4402b3*/
            if ( v47 >= g_TerrainBridgeIndex && v47 < g_TerrainBridgeIndex + 16 || v49 >= 74 && v49 <= 101 ) /*0x4402c9*/
              v68 = 1; /*0x4402cb*/
            ++v45; /*0x4402d0*/
          }
          while ( v45 < 3 ); /*0x4402d4*/
          ++v44; /*0x4402da*/
        }
        while ( v44 < 3 ); /*0x4402de*/
        v50 = (__int16 *)(*(int (__thiscall **)(BuildingClass *, int *))(this->vtable0 + 440))(this, v75); /*0x4402f5*/
        if ( v68 ) /*0x4402ec*/
          MapClass::ApplyTerrainDamage((MapClass *)&dword_87F7E8, v50); /*0x440301*/
        else
          TerrainClass::ProcessSlope((TerrainClass *)&dword_87F7E8, v50); /*0x44031b*/
        this->C4Applied[0] = 0; /*0x440320*/
        this->C4AppliedBy = 0; /*0x440327*/
      }
      else
      {
        result = (*(int (__thiscall **)(BuildingClass *, int *, _DWORD, _DWORD, int, int, _DWORD, _DWORD))(this->vtable0 + 364))( /*0x440358*/
                   this,
                   &v73,
                   0,
                   *(_DWORD *)&dword_8871E0->__pad_C3C[876],
                   this->C4AppliedBy,
                   1,
                   0,
                   0);
      }
      LOBYTE(result) = this->isAliveFlag[0]; /*0x44035e*/
      if ( !(_BYTE)result ) /*0x440366*/
        return result; /*0x440366*/
      (*(void (__thiscall **)(BuildingClass *, int))(this->vtable0 + 292))(this, 2); /*0x440372*/
      goto LABEL_138; /*0x440372*/
    }
    v42 -= (int)dword_A8ED84 - v41; /*0x4401fc*/
  }
  if ( !v42 ) /*0x440200*/
    goto LABEL_121; /*0x440200*/
LABEL_138:
  result = this->target; /*0x440378*/
  if ( result ) /*0x440380*/
  {
    result = (*(int (__thiscall **)(BuildingClass *, int))(this->vtable0 + 940))(this, this->target); /*0x44038b*/
    if ( !(_BYTE)result ) /*0x440393*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)this->target + 44))(this->target) != 2 ) /*0x4403a7*/
        return (*(int (__thiscall **)(BuildingClass *, _DWORD))(this->vtable0 + 968))(this, 0); /*0x4403a7*/
      result = (*(int (__thiscall **)(int))(*(_DWORD *)this->target + 80))(this->target); /*0x4403b5*/
      if ( (_BYTE)result ) /*0x4403ba*/
        return (*(int (__thiscall **)(BuildingClass *, _DWORD))(this->vtable0 + 968))(this, 0); /*0x440567*/
    }
  }
  return result; /*0x4400ea*/
}


