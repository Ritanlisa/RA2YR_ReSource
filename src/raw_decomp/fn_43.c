// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00430010  sub_430010  this=-  sig=ida-proto ====
void sub_430010()
{
  unk_89C448 = 0.0174532925199433 * 45.0; /*0x43001c*/
}


// ==== 0x00430030  sub_430030  this=-  sig=ida-proto ====
void sub_430030()
{
  unk_89C3A0 = 0.0174532925199433 * 60.0; /*0x43003c*/
}


// ==== 0x00430050  sub_430050  this=-  sig=ida-proto ====
void sub_430050()
{
  unk_89C378 = 0.0174532925199433 * 90.0; /*0x43005c*/
}


// ==== 0x00430070  sub_430070  this=-  sig=ida-proto ====
__int64 sub_430070()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89C378 - unk_89C3A0); /*0x430082*/
  result = Math::RoundToInt(v0 * unk_89C398 * 0.5); /*0x430096*/
  unk_89C470 = result; /*0x43009b*/
  return result; /*0x4300a0*/
}


// ==== 0x004300B0  sub_4300B0  this=-  sig=ida-proto ====
void sub_4300B0()
{
  unk_89C3A8 = Math::ArcTan((double)unk_89C470 * 0.00390625); /*0x4300c7*/
}


// ==== 0x004300E0  sub_4300E0  this=-  sig=ida-proto ====
void sub_4300E0()
{
  unk_89C440 = Math::ArcTan((double)(2 * unk_89C470) / unk_89C398); /*0x430102*/
}


// ==== 0x00430110  sub_430110  this=-  sig=ida-proto ====
__int64 sub_430110()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89C470) + 0.5); /*0x43012b*/
  unk_89C464 = result; /*0x430130*/
  return result; /*0x430136*/
}


// ==== 0x00430140  sub_430140  this=-  sig=ida-proto ====
int sub_430140()
{
  unk_89C390 = 0; /*0x430142*/
  unk_89C392 = 0; /*0x430148*/
  return 0; /*0x43014e*/
}


// ==== 0x00430150  sub_430150  this=-  sig=ida-proto ====
int sub_430150()
{
  unk_89C430 = 0; /*0x430152*/
  unk_89C434 = 0; /*0x430157*/
  unk_89C438 = 0; /*0x43015c*/
  return 0; /*0x430161*/
}


// ==== 0x00430170  sub_430170  this=-  sig=ida-proto ====
int sub_430170()
{
  unk_89C460 = 0; /*0x430175*/
  unk_89C458 = 128; /*0x43017f*/
  unk_89C45C = 128; /*0x430184*/
  return 128; /*0x430189*/
}


// ==== 0x00430190  sub_430190  this=-  sig=ida-proto ====
int sub_430190()
{
  memset(dword_89C3B0, 0, sizeof(dword_89C3B0)); /*0x43019d*/
  unk_89C410 = 0; /*0x4301a4*/
  unk_89C42C = 0; /*0x4301a9*/
  return atexit(sub_4301C0); /*0x4301b6*/
}


// ==== 0x004301C0  sub_4301C0  this=-  sig=ida-proto ====
void __cdecl sub_4301C0()
{
  void **v0; // esi
  int v1; // ebx
  int v2; // edi

  if ( unk_89C410 ) /*0x4301c7*/
  {
    v0 = (void **)dword_89C3B0; /*0x4301cc*/
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
    unk_89C410 = 0; /*0x4301fb*/
  }
}


// ==== 0x00430250  ObjectClass::RenderBuildingTag  this=int  sig=csp ====
char __thiscall RenderBuildingTag(int this, int a2, int a3, int a4, int a5, int a6)
{
  size_t v7; // eax
  char v8; // al
  wchar_t *v9; // eax
  wchar_t *v10; // esi
  wchar_t *v11; // eax
  wchar_t *v12; // esi
  wchar_t *v13; // eax
  BitFont *v14; // edi
  int v15; // eax
  void **v16; // eax
  AbstractClass *v17; // esi
  int v19; // [esp+Ch] [ebp-15Ch] BYREF
  __int16 v20; // [esp+10h] [ebp-158h]
  unsigned __int8 v21; // [esp+12h] [ebp-156h]
  AbstractClass aP2; // [esp+18h] [ebp-150h] BYREF
  void *v23; // [esp+3Ch] [ebp-12Ch]
  void *v24; // [esp+40h] [ebp-128h]
  void *v25; // [esp+44h] [ebp-124h]
  AbstractClass aP1[8]; // [esp+48h] [ebp-120h] BYREF

  v19 = *((_DWORD *)MEMORY[0xB054D4] /*0x430283*/
        + *(_DWORD *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * *(_DWORD *)(this + 272)] + 90196));
  LOBYTE(v7) = Coord::To_Screen( /*0x430289*/
                 *(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432],
                 (_DWORD *)this,
                 (IUnknown *)&aP2.__pad_0[8]);
  if ( (_BYTE)v7 )
  {
    DrawToSurfaceSHP(
      a2,
      *(_DWORD *)(v19 + 780),
      dword_89C474,
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] % (unk_89C41C / 2)
    + ((*(_BYTE *)(this + 12) & 2) != 0 ? unk_89C41C / 2 : 0),
      (int *)&aP2.__pad_0[8],
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
      qmemcpy(&aP1[0].NeedsSaveOrLink, (const void *)(this + 14), 0x100u); /*0x43031e*/
      if ( (v8 & 2) == 0 ) /*0x430320*/
        goto LABEL_11; /*0x430320*/
      if ( MEMORY[0xA8BC79] ) /*0x430329*/
      {
        if ( timeGetTime() % 0x1F4 < 0xFA ) /*0x430340*/
        {
          v9 = wcsrchr((const wchar_t *)&aP1[0].NeedsSaveOrLink, 0x5Fu); /*0x430349*/
          v10 = v9; /*0x43034e*/
          if ( v9 ) /*0x430355*/
          {
            if ( wcslen(v9) == 1 ) /*0x430363*/
              *v10 = 32; /*0x430365*/
          }
        }
      }
      if ( (*(_BYTE *)(this + 12) & 2) == 0 || !MEMORY[0xA8BC79] ) /*0x430377*/
      {
LABEL_11:
        v11 = wcsrchr((const wchar_t *)&aP1[0].NeedsSaveOrLink, 0x5Fu); /*0x430380*/
        v12 = v11; /*0x430385*/
        if ( v11 && wcslen(v11) == 1 /*0x4303bd*/
          || (v13 = wcsrchr((const wchar_t *)&aP1[0].NeedsSaveOrLink, 0x20u), (v12 = v13) != 0) && wcslen(v13) == 1 )
        {
          *v12 = 0; /*0x4303bf*/
        }
      }
      v14 = (BitFont *)aP0; /*0x4303c4*/
      *(_DWORD *)aP2.__pad_0 = 0; /*0x4303e2*/
      *(_DWORD *)&aP2.__pad_0[4] = 0; /*0x4303e6*/
      Text::Layout( /*0x4303ea*/
        aP0,
        (unsigned __int16 *)&aP1[0].NeedsSaveOrLink,
        &aP2,
        (AbstractClass *)&aP2.__pad_0[4],
        (AbstractClass *)0xC8);
      aP2.nextArrayIndex = *(_DWORD *)aP2.__pad_0 + 8; /*0x43040a*/
      aP2.abstractFlags = *(_DWORD *)&aP2.__pad_0[12] + 32; /*0x430415*/
      aP2.uniqueId = *(_DWORD *)&aP2.__pad_0[8] - *(_DWORD *)aP2.__pad_0 / 2 - 4; /*0x43041d*/
      aP2.referenceCount = *(_DWORD *)&aP2.__pad_0[4] + 8; /*0x430428*/
      v15 = Color::ConvertToRGB((unsigned __int8 *)(v19 + 776), (int)&v19); /*0x430433*/
      v20 = *(_WORD *)v15; /*0x43043c*/
      v21 = *(_BYTE *)(v15 + 2); /*0x43044c*/
      v16 = (void **)ClipRectIntersection(&aP1[0].uniqueId, &aP2.uniqueId, &a3, 0, 0); /*0x430459*/
      aP2.NeedsSaveOrLink = *v16; /*0x430464*/
      v23 = v16[1]; /*0x430473*/
      v24 = v16[2]; /*0x43047a*/
      v25 = v16[3]; /*0x430498*/
      v17 = (AbstractClass *)(((unsigned __int8)v20 >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656]) /*0x4304d4*/
                            | (HIBYTE(v20) >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672])
                            | (v21 >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664]));
      (*(void (__thiscall **)(int, void **, _DWORD))(*(_DWORD *)a2 + 20))(a2, &aP2.NeedsSaveOrLink, 0); /*0x4304d6*/
      (*(void (__thiscall **)(int, void **, AbstractClass *))(*(_DWORD *)a2 + 88))(a2, &aP2.NeedsSaveOrLink, v17); /*0x4304e4*/
      Char::Swap(v14, (ObjectClass *)1); /*0x4304eb*/
      *(_DWORD *)aP1[0].__pad_0 = a3; /*0x430505*/
      *(_DWORD *)&aP1[0].__pad_0[8] = a5 + a3 - 1; /*0x430514*/
      *(_DWORD *)&aP1[0].__pad_0[4] = a4; /*0x430518*/
      *(_DWORD *)&aP1[0].__pad_0[12] = a6 + a4 - 1; /*0x430527*/
      TextGroup::SetRect(v14, aP1); /*0x43052b*/
      Property::Set(v14, v17); /*0x430533*/
      LOBYTE(v7) = Font::Print( /*0x430568*/
                     (int)v14,
                     a2,
                     &aP1[0].NeedsSaveOrLink,
                     aP2.uniqueId + 4,
                     aP2.abstractFlags + 4,
                     200,
                     aP2.referenceCount,
                     0,
                     0,
                     0);
    }
  }
  return v7; /*0x43056e*/
}


// ==== 0x00430580  nullsub_97  this=unknown  sig=csp ====
void __stdcall nullsub_97(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  ; /*0x430580*/
}


// ==== 0x00430590  ObjectClass::method  this=VOID_PTR  sig=csp ====
char __thiscall sub_430590(_DWORD *this, int a2, int a3, int a4, int a5)
{
  char result; // al

  if ( a2 != unk_89C430 || a3 != unk_89C434 || a4 != unk_89C438 ) /*0x4305b6*/
  {
    *this = a2; /*0x4305ba*/
    *(this + 1) = a3; /*0x4305bc*/
    *(this + 2) = a4; /*0x4305bf*/
  }
  result = a5; /*0x4305c2*/
  if ( a5 < 8 ) /*0x4305cb*/
  {
    *(this + 68) = a5; /*0x4305cd*/
    result = *((_BYTE *)this + 12) | 1; /*0x4305d6*/
    *((_BYTE *)this + 12) = result; /*0x4305d8*/
  }
  return result; /*0x4305c6*/
}


// ==== 0x004305E0  ObjectClass::method_4305E0  this=VOID_PTR  sig=csp ====
char __thiscall sub_4305E0(_BYTE *this, char a2)
{
  char result; // al

  result = *(this + 12) & 0xFD | (2 * (a2 & 1)); /*0x4305ee*/
  *(this + 12) = result; /*0x4305f0*/
  return result; /*0x4305f3*/
}


// ==== 0x00430600  nullsub_98  this=-  sig=ida-proto ====
void nullsub_98()
{
  ; /*0x430600*/
}


// ==== 0x00430610  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_430610(_BYTE *this)
{
  this->vtable4 &= ~1u; /*0x430610*/
}


// ==== 0x00430650  BuildingPlacement::RenderBuildingPlacementShadow  this=CampaignClass  sig=csp ====
int __thiscall BuildingPlacement::RenderBuildingPlacementShadow(
        MouseClass *this,
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
  int v14; // ebp
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
  result = dword_89C428 + 1; /*0x43066c*/
  v10 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] % unk_89C42C; /*0x43066f*/
  if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] % unk_89C42C < dword_89C428 + 1 || (_BYTE)a7 ) /*0x430677*/
  {
    v11 = Coord::WorldToScreen((int)&MEMORY[0x87F7E8], (MouseClass *)&v27, this, 1); /*0x43068a*/
    v12 = *v11; /*0x43068f*/
    v25 = *v11; /*0x430691*/
    v13 = v11[1]; /*0x430695*/
    v26 = v13; /*0x43069f*/
    if ( v10 < dword_89C428 && !v7 ) /*0x4306a7*/
    {
      DrawToSurfaceSHP( /*0x4306fa*/
        a2,
        *(_DWORD *)(*((_DWORD *)MEMORY[0xB054D4]
                    + *(_DWORD *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * *(_DWORD *)this->__pad_110] + 90196))
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
    v14 = dword_89C420; /*0x430707*/
    v15 = dword_89C424; /*0x43070d*/
    v35 = v12 - dword_89C420 / 2; /*0x430729*/
    v16 = v13 - dword_89C424 / 2; /*0x43072f*/
    v17 = v35 + *(_DWORD *)&MEMORY[0x87F8E4].__pad_125C[324]; /*0x430736*/
    v18 = v16 + *(_DWORD *)&MEMORY[0x87F8E4].__pad_125C[328]; /*0x43073e*/
    v36 = v16; /*0x430740*/
    if ( *(int *)&MEMORY[0x87F8E4].__pad_1D4[3908] <= 0 || *(int *)&MEMORY[0x87F8E4].__pad_1D4[3912] <= 0 ) /*0x430754*/
    {
      v31 = v35 + *(_DWORD *)&MEMORY[0x87F8E4].__pad_125C[324]; /*0x430819*/
      v32 = v16 + *(_DWORD *)&MEMORY[0x87F8E4].__pad_125C[328]; /*0x43081d*/
      v33 = dword_89C420; /*0x430821*/
      v34 = dword_89C424; /*0x430825*/
    }
    else if ( dword_89C420 <= 0 || dword_89C424 <= 0 ) /*0x430764*/
    {
      v31 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3900]; /*0x430807*/
      v32 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3904]; /*0x43080b*/
      v33 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3908]; /*0x43080f*/
      v34 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3912]; /*0x430813*/
    }
    else
    {
      v19 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3900]; /*0x43076a*/
      v29 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3908]; /*0x430776*/
      v28 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3904]; /*0x430782*/
      v30 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3912]; /*0x430786*/
      if ( *(int *)&MEMORY[0x87F8E4].__pad_1D4[3900] > v17 ) /*0x43078a*/
      {
        v19 = v35 + *(_DWORD *)&MEMORY[0x87F8E4].__pad_125C[324]; /*0x430794*/
        v29 += *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3900] - v17; /*0x430796*/
      }
      if ( *(int *)&MEMORY[0x87F8E4].__pad_1D4[3904] > v18 ) /*0x43079c*/
      {
        v28 = v16 + *(_DWORD *)&MEMORY[0x87F8E4].__pad_125C[328]; /*0x4307a6*/
        v30 += *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3904] - v18; /*0x4307aa*/
      }
      if ( v19 + v29 < v17 + dword_89C420 ) /*0x4307b9*/
        v29 = v17 - v19 + dword_89C420 + 1; /*0x4307c1*/
      v20 = v30; /*0x4307c5*/
      if ( v30 + v28 < v18 + dword_89C424 ) /*0x4307d4*/
        v20 = v18 - v28 + dword_89C424 + 1; /*0x4307da*/
      v31 = v19; /*0x4307e2*/
      v34 = v20; /*0x4307ea*/
      v16 = v36; /*0x4307ee*/
      v32 = v28; /*0x4307f2*/
      v33 = v29; /*0x4307f6*/
    }
    v21 = ClipRectIntersection(&v27, &v31, (int *)&MEMORY[0x87F8E4].__pad_125C[324], 0, 0); /*0x43083a*/
    v22 = v16; /*0x430841*/
    *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3900] = *v21; /*0x430843*/
    *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3904] = v21[1]; /*0x43084c*/
    *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3908] = v21[2]; /*0x430855*/
    *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3912] = v21[3]; /*0x43085e*/
    result = v16 + v15; /*0x430863*/
    a7 = v16 + v15; /*0x430868*/
    if ( v16 < v16 + v15 ) /*0x43086c*/
    {
      v23 = v35; /*0x43086e*/
      v24 = v35 + v14; /*0x430872*/
      do /*0x4308a4*/
      {
        if ( v23 < v24 ) /*0x43087b*/
        {
          do /*0x430897*/
          {
            v27 = v23; /*0x430881*/
            v28 = v22; /*0x43088b*/
            FogOfWar::RevealCell((int)&MEMORY[0x87F7E8], (IUnknown *)&v27); /*0x43088f*/
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


// ==== 0x00430980  Game::initScenario  this=int  sig=csp ====
void __thiscall sub_430980(void **this)
{
  void **v2; // esi
  int v3; // ebx
  int v4; // edi

  if ( *(this + 24) ) /*0x430983*/
  {
    v2 = this; /*0x43098d*/
    v3 = 8; /*0x43098f*/
    do /*0x4309b5*/
    {
      v4 = 3; /*0x430994*/
      do /*0x4309b2*/
      {
        if ( *v2 ) /*0x430999*/
        {
          __3_YAXPAX_Z(*v2); /*0x4309a0*/
          *v2 = 0; /*0x4309a8*/
        }
        ++v2; /*0x4309ae*/
        --v4; /*0x4309b1*/
      }
      while ( v4 ); /*0x4309b2*/
      --v3; /*0x4309b4*/
    }
    while ( v3 ); /*0x4309b5*/
    *(this + 24) = 0; /*0x4309b9*/
  }
}


// ==== 0x004309D0  CCFileClass::Create  this=int  sig=csp ====
void __thiscall sub_4309D0(_DWORD *this)
{
  __int16 *EntireFile; // eax
  __int16 *v3; // eax
  int v4; // eax
  int v5[9]; // [esp+4h] [ebp-48h] BYREF
  int v6[9]; // [esp+28h] [ebp-24h] BYREF

  RawFileClass::Construct(v6, (int)stru_818A5C); /*0x4309df*/
  EntireFile = (__int16 *)CCFileClass::ReadEntireFile(v6); /*0x4309e8*/
  dword_89C474 = (int)EntireFile; /*0x4309ef*/
  if ( EntireFile || (EntireFile = (__int16 *)SearchMIXFile(stru_818A5C, 0), (dword_89C474 = (int)EntireFile) != 0) ) /*0x430a09*/
  {
    *(this + 25) = EntireFile[1]; /*0x430a0f*/
    *(this + 26) = *(__int16 *)(dword_89C474 + 4); /*0x430a1c*/
    *(this + 27) = *(__int16 *)(dword_89C474 + 6); /*0x430a28*/
  }
  else
  {
    Debug::Log(); /*0x430a32*/
  }
  RawFileClass::Construct(v5, (int)MEMORY[0x818A30]); /*0x430a43*/
  v3 = (__int16 *)CCFileClass::ReadEntireFile(v5); /*0x430a4c*/
  dword_89C478 = (int)v3; /*0x430a53*/
  if ( v3 || (v3 = (__int16 *)SearchMIXFile(MEMORY[0x818A30], 0), (dword_89C478 = (int)v3) != 0) ) /*0x430a6d*/
  {
    *(this + 28) = v3[1]; /*0x430a73*/
    *(this + 29) = *(__int16 *)(dword_89C478 + 4); /*0x430a7f*/
    v4 = *(__int16 *)(dword_89C478 + 6); /*0x430a88*/
    *(this + 30) = v4; /*0x430a8c*/
    *(this + 31) = 4 * v4; /*0x430a92*/
  }
  else
  {
    Debug::Log(); /*0x430a9c*/
  }
  RawFileClass::Dtor(v5); /*0x430aa8*/
  RawFileClass::Dtor(v6); /*0x430ab1*/
}


// ==== 0x00430AC0  ObjectClass::RenderAlliedBuildingTags  this=int  sig=csp ====
int __thiscall RenderAlliedBuildingTags(int *this, int a2, int a3, int a4, int a5, int a6)
{
  int result; // eax
  int *v7; // edi
  int v8; // esi
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  result = *(this + 24); /*0x430ac0*/
  if ( result ) /*0x430acc*/
  {
    v7 = this; /*0x430ada*/
    v10 = 8; /*0x430adc*/
    do /*0x430b84*/
    {
      v9 = 3; /*0x430ae4*/
      do /*0x430b75*/
      {
        v8 = *v7; /*0x430aec*/
        if ( *v7 /*0x430b3b*/
          && (*(_BYTE *)(v8 + 12) & 1) != 0
          && HouseClass::IsAllied(HouseClass_Player, *(_DWORD *)(v8 + 272))
          && (unsigned __int8)HouseClass::IsAlliedWith(
                                *(#375 **)&HouseClass_Array->__pad_0[4 * *(_DWORD *)(v8 + 272)],
                                HouseClass_Player)
          && !*(_BYTE *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * *(_DWORD *)(v8 + 272)] + 501) )
        {
          RenderBuildingTag(v8, a2, a3, a4, a5, a6); /*0x430b64*/
        }
        ++v7; /*0x430b6d*/
        --v9; /*0x430b71*/
      }
      while ( v9 ); /*0x430b75*/
      result = --v10; /*0x430b7f*/
    }
    while ( v10 ); /*0x430b84*/
  }
  return result; /*0x430b8a*/
}


// ==== 0x00430BA0  ObjectClass::PlacePlayerBeacon  this=int  sig=csp ====
void __thiscall PlacePlayerBeacon(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v7; // edi
  int v8; // ecx
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  int v12; // eax
  _DWORD *i; // ecx
  char v14; // al
  wchar_t *String; // eax
  wchar_t *v16; // eax
  int v17; // esi
  int v18; // ecx
  _DWORD *v19; // edi
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

  v7 = this + 3 * a2; /*0x430bba*/
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
    v11 = v10; /*0x430bff*/
    *v10 = unk_89C430; /*0x430c01*/
    v10[1] = unk_89C434; /*0x430c08*/
    v10[2] = unk_89C438; /*0x430c10*/
    *((_BYTE *)v10 + 12) &= 0xFCu; /*0x430c1d*/
    memset((char *)v10 + 14, 0, 0x100u); /*0x430c22*/
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
    *(this + 2 * a2 + v12 + a2) = v11; /*0x430c72*/
  }
  else
  {
    v18 = a6 + 2 * a2 + a2; /*0x430e62*/
    v19 = this + v18; /*0x430e6a*/
    if ( *v19 ) /*0x430e64*/
    {
      __3_YAXPAX_Z((void *)*(this + v18)); /*0x430e71*/
      --*(this + 24); /*0x430e7d*/
    }
    *v19 = v11; /*0x430e80*/
  }
  if ( a3 != unk_89C430 || a4 != unk_89C434 || a5 != unk_89C438 ) /*0x430ca3*/
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
  ++*(this + 24); /*0x430cd1*/
  if ( MEMORY[0xA8B238][0] && MEMORY[0xA8B238][0] != 5 ) /*0x430ce4*/
  {
    if ( a2 == *((_DWORD *)HouseClass_Player + 12) ) /*0x430cf3*/
    {
      v20 = *((_DWORD *)HouseClass_Player + 22549); /*0x430d0b*/
      String = GetStringCSF(aTxtBeaconHelp1, 0, aDRa2mdpostBeac, 811); /*0x430d1d*/
      MessageListClass::AddMessage(MEMORY[0xA8BC60], 0, 0, String, v20, 16454, 225, 0); /*0x430d2c*/
      v21 = *((_DWORD *)HouseClass_Player + 22549); /*0x430d4a*/
      v16 = GetStringCSF(aTxtBeaconHelp2, 0, aDRa2mdpostBeac, 812); /*0x430d5a*/
      MessageListClass::AddMessage(MEMORY[0xA8BC60], 0, 0, v16, v21, 16454, 225, 0); /*0x430d69*/
      VoxClass::FindAndPlay(aEvaBeaconplace, -1); /*0x430d78*/
      PlayVocClass(MEMORY[0x8871E0]->AirstrikeAbortSound, 0x2000, 1.0, 0); /*0x430d94*/
      v24 = 32; /*0x430d9f*/
      strcpy(v25, ToWideStringChar(*(char **)MEMORY[0xA8DA78])); /*0x430dcf*/
      v29 = a6; /*0x430de6*/
      v17 = 1; /*0x430def*/
      v26 = a3; /*0x430df6*/
      v27 = a4; /*0x430dfa*/
      v28 = a5; /*0x430dfe*/
      for ( j = a2; v17 < MEMORY[0xA8DA84]; ++v17 ) /*0x430e06*/
      {
        Debug::Log(); /*0x430e1b*/
        Network::SendMessage( /*0x430e41*/
          (int)MEMORY[0xA8E9C0],
          (int)&v24,
          61,
          1,
          *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v17) + 40,
          0,
          0);
      }
    }
    else if ( (v11[3] & 1) != 0 && HouseClass::IsAllied(HouseClass_Player, v11[68]) ) /*0x430e98*/
    {
      if ( (unsigned __int8)HouseClass::IsAlliedWith( /*0x430eb6*/
                              *(#375 **)&HouseClass_Array->__pad_0[4 * v11[68]],
                              HouseClass_Player) )
      {
        if ( !*(_BYTE *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * v11[68]] + 501) ) /*0x430ece*/
        {
          LOWORD(v22) = a3 / 256; /*0x430ee6*/
          HIWORD(v22) = a4 / 256; /*0x430ef9*/
          if ( CreateTriggerClassIfFarEnough(11, (unsigned __int8)(a4 >> 31), v22) ) /*0x430f08*/
            VoxClass::FindAndPlay(MEMORY[0x818A68], -1); /*0x430f1b*/
        }
      }
    }
  }
}


// ==== 0x00430F30  MapClass::isCellAccessible  this=int  sig=csp ====
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


// ==== 0x00430F60  sub_430F60  this=unknown  sig=csp ====
_DWORD *__stdcall sub_430F60(_DWORD *a1)
{
  *a1 = 0; /*0x430f68*/
  a1[1] = 0; /*0x430f6a*/
  return a1; /*0x430f6d*/
}


// ==== 0x00430F70  PlayerClass::FindNearestWaypoint  this=int  sig=csp ====
char __thiscall sub_430F70(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD **v4; // edi
  int v5; // esi
  _DWORD *v6; // eax
  double v7; // st7
  bool v8; // cc
  int v10; // esi
  int v11; // [esp+18h] [ebp-18h]
  _DWORD *v12; // [esp+1Ch] [ebp-14h]

  if ( !*(this + 24) ) /*0x430f79*/
    return 0; /*0x431026*/
  v4 = (_DWORD **)this; /*0x430f8b*/
  v11 = 0; /*0x430f8d*/
  v12 = this; /*0x430f95*/
LABEL_3:
  v5 = 0; /*0x430f99*/
  while ( 1 ) /*0x430f9b*/
  {
    if ( *v4 ) /*0x430f9b*/
    {
      v6 = *v4; /*0x430f9b*/
      v7 = Math::Sqrt( /*0x430fec*/
             (double)(a2 - *v6) * (double)(a2 - *v6)
           + (double)(a4 - v6[2]) * (double)(a4 - v6[2])
           + (double)(a3 - v6[1]) * (double)(a3 - v6[1]));
      if ( (int)Math::RoundToInt(v7) < 128 ) /*0x430ffe*/
        break; /*0x430ffe*/
    }
    ++v5; /*0x431000*/
    ++v4; /*0x431001*/
    if ( v5 >= 3 ) /*0x431007*/
    {
      v4 = (_DWORD **)(v12 + 3); /*0x431012*/
      v8 = ++v11 < 8; /*0x431015*/
      v12 += 3; /*0x43101c*/
      if ( v8 ) /*0x431020*/
        goto LABEL_3; /*0x431020*/
      return 0; /*0x431020*/
    }
  }
  v10 = *(this + 2 * v11 + v5 + v11); /*0x43103e*/
  if ( !v10 ) /*0x431043*/
    return 0; /*0x431043*/
  MapClass::UnselectAll_ClearLimboLaunchers(); /*0x431045*/
  *(_BYTE *)(v10 + 12) |= 2u; /*0x431050*/
  return 1; /*0x431028*/
}


// ==== 0x00431090  Radar::FindNearestRadarTarget  this=int  sig=csp ====
int __thiscall sub_431090(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD **v4; // edi
  int i; // esi
  _DWORD *v6; // eax
  double v7; // st7
  bool v8; // cc
  int v10; // [esp+18h] [ebp-18h]
  _DWORD *v11; // [esp+1Ch] [ebp-14h]

  if ( *(this + 24) ) /*0x431099*/
  {
    v4 = (_DWORD **)this; /*0x4310ab*/
    v10 = 0; /*0x4310ad*/
    v11 = this; /*0x4310b5*/
    while ( 2 ) /*0x4310b9*/
    {
      for ( i = 0; i < 3; ++i ) /*0x4310b9*/
      {
        if ( *v4 ) /*0x4310bb*/
        {
          v6 = *v4; /*0x4310bb*/
          v7 = Math::Sqrt( /*0x43110c*/
                 (double)(a2 - *v6) * (double)(a2 - *v6)
               + (double)(a4 - v6[2]) * (double)(a4 - v6[2])
               + (double)(a3 - v6[1]) * (double)(a3 - v6[1]));
          if ( (int)Math::RoundToInt(v7) < 128 ) /*0x43111e*/
            return *(this + 2 * v10 + i + v10); /*0x431161*/
        }
        ++v4; /*0x431121*/
      }
      v4 = (_DWORD **)(v11 + 3); /*0x431132*/
      v8 = ++v10 < 8; /*0x431135*/
      v11 += 3; /*0x43113c*/
      if ( v8 ) /*0x431140*/
        continue; /*0x431140*/
      break;
    }
  }
  return 0; /*0x431148*/
}


// ==== 0x00431170  BufferIO::FindActiveChannel  this=int  sig=csp ====
int __thiscall BufferIO::FindActiveChannel(int *this, CampaignScore *aP1)
{
  int v2; // ebp
  int *v3; // esi
  int v4; // edx
  int *v5; // ecx
  int result; // eax

  if ( !*(this + 24) ) /*0x431170*/
    return 0; /*0x4311b3*/
  v2 = 0; /*0x43117f*/
  v3 = this; /*0x431181*/
LABEL_3:
  v4 = 0; /*0x431185*/
  v5 = v3; /*0x431187*/
  while ( 1 ) /*0x431189*/
  {
    result = *v5; /*0x431189*/
    if ( *v5 ) /*0x431189*/
    {
      if ( (*(_BYTE *)(result + 12) & 2) != 0 /*0x43119f*/
        && (aP1 == (CampaignScore *)-1 || aP1 == *(CampaignScore **)(result + 272)) )
      {
        return result; /*0x4311b5*/
      }
    }
    ++v4; /*0x4311a1*/
    ++v5; /*0x4311a2*/
    if ( v4 >= 3 ) /*0x4311a8*/
    {
      ++v2; /*0x4311aa*/
      v3 += 3; /*0x4311ab*/
      if ( v2 < 8 ) /*0x4311b1*/
        goto LABEL_3; /*0x4311b1*/
      return 0; /*0x4311b1*/
    }
  }
}


// ==== 0x004311C0  Network::SendBeaconDelete  this=int  sig=csp ====
char __thiscall Network_SendBeaconDelete(int *this, int a2, int a3)
{
  int v4; // eax
  int v5; // edi
  int *v6; // esi
  int v7; // edx
  int *v8; // ecx
  int v9; // esi
  _DWORD *v10; // eax
  int v11; // ebx
  int v12; // esi
  char v14; // [esp+13h] [ebp-1DDh]
  int v15; // [esp+14h] [ebp-1DCh]
  _BYTE v16[16]; // [esp+18h] [ebp-1D8h] BYREF
  int v17; // [esp+28h] [ebp-1C8h] BYREF
  char v18[452]; // [esp+2Ch] [ebp-1C4h] BYREF

  v4 = *(this + 24); /*0x4311cc*/
  if ( v4 ) /*0x4311d1*/
  {
    if ( a2 == -1 && a3 == -1 ) /*0x4311ed*/
    {
      v14 = 1; /*0x4311ef*/
      v5 = 0; /*0x4311f4*/
      v6 = this; /*0x4311f6*/
LABEL_5:
      v7 = 0; /*0x4311fa*/
      v8 = v6; /*0x4311fc*/
      while ( 1 ) /*0x4311fe*/
      {
        v4 = *v8; /*0x4311fe*/
        if ( *v8 ) /*0x4311fe*/
        {
          if ( (*(_BYTE *)(v4 + 12) & 2) != 0 ) /*0x431207*/
            break; /*0x431207*/
        }
        ++v7; /*0x431209*/
        ++v8; /*0x43120a*/
        if ( v7 >= 3 ) /*0x431210*/
        {
          ++v5; /*0x431212*/
          v6 += 3; /*0x431213*/
          if ( v5 >= 8 ) /*0x431219*/
            return v4; /*0x431219*/
          goto LABEL_5; /*0x431219*/
        }
      }
      v9 = *v8; /*0x431265*/
    }
    else
    {
      v14 = 0; /*0x431224*/
      v4 = a3 + 2 * a2 + a2; /*0x431229*/
      v9 = *(this + v4); /*0x43122b*/
    }
    if ( v9 ) /*0x431231*/
    {
      v4 = *(_DWORD *)(v9 + 272); /*0x43123d*/
      v15 = v4; /*0x431243*/
      if ( v4 == *((_DWORD *)HouseClass_Player + 12) || !v14 ) /*0x431252*/
      {
        if ( (*(_BYTE *)(v9 + 12) & 1) != 0 /*0x4312a6*/
          && HouseClass::IsAllied(HouseClass_Player, v4)
          && (unsigned __int8)HouseClass::IsAlliedWith(
                                *(#375 **)&HouseClass_Array->__pad_0[4 * *(_DWORD *)(v9 + 272)],
                                HouseClass_Player)
          && !*(_BYTE *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * *(_DWORD *)(v9 + 272)] + 501) )
        {
          v10 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)MEMORY[0x880A04] + 120))( /*0x4312bf*/
                            MEMORY[0x880A04],
                            v16);
          ((void (__stdcall *)(int, char, _DWORD, _DWORD, _DWORD, int))BuildingPlacement::RenderBuildingPlacementShadow)( /*0x4312e6*/
            MEMORY[0x880A04],
            *v10,
            v10[1],
            v10[2],
            v10[3],
            1);
        }
        __3_YAXPAX_Z((void *)v9); /*0x4312ec*/
        v11 = 0; /*0x4312f8*/
        v4 = (int)(this + 3 * v15); /*0x4312fd*/
        while ( v9 != *(_DWORD *)v4 ) /*0x431303*/
        {
          ++v11; /*0x431305*/
          v4 += 4; /*0x431306*/
          if ( v11 >= 3 ) /*0x43130c*/
            return v4; /*0x43130c*/
        }
        *(this + 2 * v15 + v11 + v15) = 0; /*0x431322*/
        --*(this + 24); /*0x43132e*/
        LOBYTE(v4) = MEMORY[0xA8B238][0]; /*0x431331*/
        if ( MEMORY[0xA8B238][0] ) /*0x431338*/
        {
          if ( MEMORY[0xA8B238][0] != 5 ) /*0x431341*/
          {
            LOBYTE(v4) = (_BYTE)HouseClass_Player; /*0x431347*/
            if ( v15 == *((_DWORD *)HouseClass_Player + 12) ) /*0x43134f*/
            {
              LOBYTE(v4) = v14; /*0x431355*/
              if ( v14 ) /*0x43135b*/
              {
                v17 = 33; /*0x431367*/
                strcpy(v18, ToWideStringChar(*(char **)MEMORY[0xA8DA78])); /*0x431390*/
                LOBYTE(v4) = MEMORY[0xA8DA84]; /*0x431394*/
                v12 = 1; /*0x4313a2*/
                v18[56] = v15; /*0x4313a9*/
                for ( v18[55] = v11; v12 < MEMORY[0xA8DA84]; ++v12 ) /*0x4313b1*/
                {
                  Debug::Log(); /*0x4313c2*/
                  Network::SendMessage( /*0x4313e9*/
                    (int)MEMORY[0xA8E9C0],
                    (int)&v17,
                    61,
                    1,
                    *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v12) + 40,
                    0,
                    0);
                  LOBYTE(v4) = MEMORY[0xA8DA84]; /*0x4313ee*/
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
  return v4; /*0x431258*/
}


// ==== 0x00431410  HouseClass::createStartingUnits  this=int  sig=csp ====
char __thiscall sub_431410(int *this, int a2)
{
  int v3; // eax
  int v4; // esi
  int *v5; // edi

  v3 = *(this + 24); /*0x431413*/
  if ( v3 ) /*0x431418*/
  {
    LOBYTE(v3) = 3 * a2; /*0x431421*/
    v4 = 0; /*0x431424*/
    v5 = this + 3 * a2; /*0x431426*/
    do /*0x43143f*/
    {
      if ( *v5 ) /*0x43142a*/
        LOBYTE(v3) = Network::SendBeaconDelete(this, a2, v4); /*0x431433*/
      ++v4; /*0x431438*/
      ++v5; /*0x431439*/
    }
    while ( v4 < 3 ); /*0x43143f*/
  }
  return v3; /*0x431444*/
}


// ==== 0x00431450  Network::SendBeacon  this=int  sig=csp ====
char __thiscall Network::SendBeacon(int *this, CellStruct *aP1, int a3, int a4, char a5)
{
  int v5; // eax
  int v6; // edi
  int *v7; // esi
  int v8; // edx
  int *v9; // ecx
  int v10; // edx
  int v11; // ebp
  char *v12; // eax
  char v13; // dl
  char v14; // cl
  int *v15; // ecx
  int i; // esi
  CellStruct *v16; // ecx
  char v19; // [esp+13h] [ebp-1D9h]
  int v21; // [esp+14h] [ebp-1D8h]
  int v22; // [esp+24h] [ebp-1C8h] BYREF
  char v23[43]; // [esp+28h] [ebp-1C4h] BYREF
  char v24; // [esp+53h] [ebp-199h]
  char v25; // [esp+54h] [ebp-198h]
  wchar_t Destination[203]; // [esp+55h] [ebp-197h] BYREF

  if ( a3 == -1 && a4 == -1 ) /*0x431474*/
  {
    v5 = *(this + 24); /*0x431476*/
    v19 = 1; /*0x431479*/
    if ( !v5 ) /*0x431480*/
      return v5; /*0x431480*/
    v6 = 0; /*0x431486*/
    v7 = this; /*0x431488*/
LABEL_5:
    v8 = 0; /*0x43148c*/
    v9 = v7; /*0x43148e*/
    while ( 1 ) /*0x431490*/
    {
      v5 = *v9; /*0x431490*/
      if ( *v9 ) /*0x431490*/
      {
        if ( (*(_BYTE *)(v5 + 12) & 2) != 0 ) /*0x431499*/
          break; /*0x431499*/
      }
      ++v8; /*0x43149f*/
      ++v9; /*0x4314a0*/
      if ( v8 >= 3 ) /*0x4314a6*/
      {
        ++v6; /*0x4314a8*/
        v7 += 3; /*0x4314a9*/
        if ( v6 >= 8 ) /*0x4314af*/
          return v5; /*0x4314af*/
        goto LABEL_5; /*0x4314af*/
      }
    }
    v11 = *v9; /*0x43158a*/
  }
  else
  {
    v10 = a4 + 2 * a3; /*0x4314b7*/
    v19 = 0; /*0x4314ba*/
    LOBYTE(v5) = v10 + a3; /*0x4314bf*/
    v11 = *(this + v10 + a3); /*0x4314c1*/
  }
  if ( v11 ) /*0x4314c6*/
  {
    memset((void *)(v11 + 14), 0, 0x100u); /*0x4314e1*/
    if ( aP1 ) /*0x4314e3*/
      wcsncpy((wchar_t *)(v11 + 14), (const wchar_t *)aP1, 0x7Fu); /*0x4314e9*/
    LOBYTE(v5) = (_BYTE)MEMORY[0xA8B238]; /*0x4314f1*/
    if ( MEMORY[0xA8B238] && MEMORY[0xA8B238] != (CellStruct *)5 ) /*0x431501*/
    {
      if ( v19 && *(_DWORD *)(v11 + 272) == *(_DWORD *)&HouseClass_Player->__pad_28[8] && a5 ) /*0x431533*/
      {
        v22 = 34; /*0x43153f*/
        strcpy(v23, ToWideStringChar(**(char ***)&MEMORY[0xA8D63C].__pad_430[12])); /*0x431568*/
        if ( aP1 ) /*0x431573*/
        {
          wcsncpy(Destination, (const wchar_t *)aP1, 0x80u); /*0x431580*/
        }
        else
        {
          v12 = CharToWideString(&MEMORY[0x87F8E4].__pad_5568[20760]); /*0x431596*/
          wcscpy(Destination, (const wchar_t *)v12); /*0x4315a1*/
        }
        v13 = -1; /*0x4315b2*/
        v14 = HouseClass_Player->__pad_28[8]; /*0x4315b5*/
        v24 = -1; /*0x4315b8*/
        v25 = v14; /*0x4315bc*/
        v5 = 0; /*0x4315c0*/
        v15 = this + 3 * v14; /*0x4315c8*/
        do /*0x4315dc*/
        {
          if ( *v15 == v11 ) /*0x4315cd*/
          {
            v13 = v5; /*0x4315cf*/
            v24 = v5; /*0x4315d1*/
          }
          ++v5; /*0x4315d5*/
          ++v15; /*0x4315d6*/
        }
        while ( v5 < 3 ); /*0x4315dc*/
        if ( v13 != -1 ) /*0x4315e1*/
        {
          LOBYTE(v5) = MEMORY[0xA8D63C].__pad_430[24]; /*0x4315e7*/
          for ( i = 1; i < *(int *)&MEMORY[0xA8D63C].__pad_430[24]; ++i ) /*0x4315f3*/
          {
            Debug::Log(); /*0x431608*/
            Network::SendMessage( /*0x431632*/
              (int)&MEMORY[0xA8D63C].__pad_1258[300],
              (int)&v22,
              455,
              1,
              *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * i) + 40,
              0,
              0);
            LOBYTE(v5) = MEMORY[0xA8D63C].__pad_430[24]; /*0x431637*/
          }
        }
      }
      else
      {
        v5 = *(_DWORD *)(v11 + 272); /*0x43164e*/
        if ( v5 != *(_DWORD *)&HouseClass_Player->__pad_28[8] && (*(_BYTE *)(v11 + 12) & 1) != 0 ) /*0x431663*/
        {
          LOBYTE(v5) = HouseClass::IsAllied(HouseClass_Player, (IUnknown *)v5); /*0x43166a*/
          if ( (_BYTE)v5 ) /*0x431671*/
          {
            LOBYTE(v5) = HouseClass::IsAlliedWith( /*0x431688*/
                           *(void **)&HouseClass_Array->__pad_0[4 * *(_DWORD *)(v11 + 272)],
                           HouseClass_Player);
            if ( (_BYTE)v5 ) /*0x43168f*/
            {
              v5 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * *(_DWORD *)(v11 + 272)]; /*0x43169d*/
              if ( !*(_BYTE *)(v5 + 501) ) /*0x4316a0*/
              {
                v16 = *(CellStruct **)(v11 + 4); /*0x4316b4*/
                LOWORD(v21) = *(_DWORD *)v11 / 256; /*0x4316c3*/
                HIWORD(v21) = (int)v16 / 256; /*0x4316db*/
                LOBYTE(v5) = CreateTriggerClassIfFarEnough(11, (unsigned __int8)((int)v16 >> 31), v21); /*0x4316e5*/
              }
            }
          }
        }
      }
    }
  }
  return v5; /*0x431641*/
}


// ==== 0x00431700  HouseClass::Render  this=int  sig=csp ====
int __thiscall sub_431700(int *this, int a2, int a3, int a4, int a5, int a6)
{
  int result; // eax
  int *v7; // edi
  int v8; // esi
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  result = *(this + 24); /*0x431700*/
  if ( result ) /*0x43170c*/
  {
    result = dword_89C428 + 1; /*0x431720*/
    if ( (int)MEMORY[0xA8ED84] % *(this + 31) < dword_89C428 + 1 ) /*0x431723*/
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
            && HouseClass::IsAllied(HouseClass_Player, *(_DWORD *)(v8 + 272))
            && (unsigned __int8)HouseClass::IsAlliedWith(
                                  *(#375 **)&HouseClass_Array->__pad_0[4 * *(_DWORD *)(v8 + 272)],
                                  HouseClass_Player)
            && !*(_BYTE *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * *(_DWORD *)(v8 + 272)] + 501) )
          {
            BuildingPlacement::RenderBuildingPlacementShadow((int *)v8, a2, a3, a4, a5, a6, 0); /*0x4317bf*/
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


// ==== 0x00431800  HouseClass::ProcessData  this=int  sig=csp ====
bool __thiscall sub_431800(int *this)
{
  int *v1; // ebx
  int v2; // ebp
  int *v3; // edi
  int v4; // esi
  char v6; // [esp+3h] [ebp-9h]
  int v7; // [esp+4h] [ebp-8h]

  if ( !*(this + 24) ) /*0x431803*/
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
      v4 = *v3; /*0x431829*/
      if ( *v3 ) /*0x431829*/
      {
        if ( (*(_BYTE *)(v4 + 12) & 1) != 0 /*0x431878*/
          && HouseClass::IsAllied(HouseClass_Player, *(_DWORD *)(v4 + 272))
          && (unsigned __int8)HouseClass::IsAlliedWith(
                                *(#375 **)&HouseClass_Array->__pad_0[4 * *(_DWORD *)(v4 + 272)],
                                HouseClass_Player)
          && !*(_BYTE *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * *(_DWORD *)(v4 + 272)] + 501) )
        {
          break; /*0x431878*/
        }
      }
      ++v2; /*0x431882*/
      ++v3; /*0x431883*/
      if ( v2 >= 3 ) /*0x431889*/
        goto LABEL_12; /*0x431889*/
    }
    v6 = 1; /*0x43188d*/
LABEL_12:
    v1 += 3; /*0x431892*/
    --v7; /*0x43189a*/
  }
  while ( v7 ); /*0x43189e*/
  return v6 && (int)MEMORY[0xA8ED84] % *(this + 31) < dword_89C428 + 1; /*0x4318c3*/
}


// ==== 0x004318D0  sub_4318D0  this=-  sig=ida-proto ====
int sub_4318D0()
{
  unk_89C480 = 0; /*0x4318d2*/
  unk_89C484 = 0; /*0x4318d7*/
  unk_89C488 = 0; /*0x4318dc*/
  unk_89C48C = 0; /*0x4318e1*/
  return 0; /*0x4318e6*/
}


// ==== 0x00431920  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_431920(_DWORD *this)
{
  this->vtable3 = 0; /*0x431922*/
  this->vtable4 = 0; /*0x431925*/
  this->uniqueId = 0; /*0x431928*/
  return 0; /*0x43192b*/
}


// ==== 0x00431930  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_431930(int *this, int a2)
{
  unsigned int v3; // eax
  int result; // eax
  int v5; // [esp+8h] [ebp-4h]

  if ( (_BYTE)a2 ) /*0x43193c*/
  {
    *(this + 2) = 0; /*0x43193e*/
    *(this + 3) = 0; /*0x431941*/
    this->vtable2 = 0; /*0x431944*/
  }
  v3 = Timer::ReadTSC(&a2); /*0x43194c*/
  result = (a2 << 28) | (v3 >> 4); /*0x431962*/
  *this = result; /*0x431964*/
  *(this + 1) = v5; /*0x431966*/
  return result; /*0x431969*/
}


// ==== 0x00431A30  ObjectClass::Set  this=BufferIOFileClass  sig=csp ====
int __thiscall sub_431A30(int this, char *Source)
{
  *(_BYTE *)(this + 4) = 0; /*0x431a39*/
  *(_DWORD *)(this + 8) = 1; /*0x431a3c*/
  *(_DWORD *)(this + 12) = 0; /*0x431a43*/
  *(_DWORD *)(this + 16) = -1; /*0x431a46*/
  *(_DWORD *)(this + 20) = -1; /*0x431a49*/
  *(_DWORD *)(this + 24) = 0; /*0x431a4c*/
  *(_WORD *)(this + 28) = 0; /*0x431a4f*/
  *(_WORD *)(this + 30) = 0; /*0x431a53*/
  *(_BYTE *)(this + 32) = 0; /*0x431a57*/
  *(_BYTE *)(this + 36) = 0; /*0x431a5a*/
  *(_BYTE *)(this + 37) = 0; /*0x431a5d*/
  *(_BYTE *)(this + 38) = 0; /*0x431a60*/
  *(_BYTE *)(this + 39) = 0; /*0x431a63*/
  *(_BYTE *)(this + 40) = 0; /*0x431a66*/
  *(_BYTE *)(this + 41) = 0; /*0x431a69*/
  *(_DWORD *)(this + 44) = 0; /*0x431a6c*/
  *(_DWORD *)(this + 48) = 0; /*0x431a6f*/
  *(_DWORD *)(this + 52) = 0; /*0x431a72*/
  *(_DWORD *)(this + 56) = 0; /*0x431a75*/
  *(_DWORD *)(this + 60) = 0; /*0x431a78*/
  *(_DWORD *)(this + 64) = -1; /*0x431a7b*/
  *(_DWORD *)(this + 68) = -1; /*0x431a7e*/
  *(_DWORD *)(this + 72) = 0; /*0x431a81*/
  *(_DWORD *)(this + 76) = 0; /*0x431a84*/
  *(_DWORD *)(this + 80) = 0; /*0x431a87*/
  *(_DWORD *)this = &BufferIOFileClass::`vftable'; /*0x431a8a*/
  if ( ObjectClass::GetMember06((_DWORD *)this) && *(_BYTE *)(this + 41) ) /*0x431a9a*/
  {
    if ( !strcmp(Source, (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 4))(this)) ) /*0x431ab7*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 4))(this); /*0x431ae6*/
      return this; /*0x431aed*/
    }
    BufferIO::Flush(this); /*0x431af2*/
    *(_BYTE *)(this + 39) = 0; /*0x431af7*/
  }
  FileClass::SetName((_DWORD *)this, Source); /*0x431b01*/
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 4))(this); /*0x431b0a*/
  return this; /*0x431aeb*/
}


// ==== 0x00431B20  BufferIOFileClass::Constructor  this=BufferIOFileClass  sig=csp ====
_BYTE *__thiscall BufferIOFileClass::Constructor(_BYTE *this)
{
  *(this + 4) = 0; /*0x431b27*/
  *((_DWORD *)this + 2) = 1; /*0x431b2a*/
  *((_DWORD *)this + 3) = 0; /*0x431b31*/
  *((_DWORD *)this + 4) = -1; /*0x431b34*/
  this->q014 = -1; /*0x431b37*/
  this->__pad_018 = 0; /*0x431b3a*/
  *((_WORD *)this + 14) = 0; /*0x431b3d*/
  *((_WORD *)this + 15) = 0; /*0x431b41*/
  *(this + 32) = 0; /*0x431b45*/
  this->BufferOffset = 0; /*0x431b48*/
  this->q025 = 0; /*0x431b4b*/
  *(this + 38) = 0; /*0x431b4e*/
  *(this + 39) = 0; /*0x431b51*/
  this->BufferSize = 0; /*0x431b54*/
  this->q029 = 0; /*0x431b57*/
  this->BufferPosition = 0; /*0x431b5a*/
  this->FileBaseOffset = 0; /*0x431b5d*/
  this->BufferReadSize = 0; /*0x431b60*/
  this->StreamSize = 0; /*0x431b63*/
  this->BufferMaxSize = 0; /*0x431b66*/
  this->BufferCursor = -1; /*0x431b69*/
  this->TotalBytesRead = -1; /*0x431b6c*/
  this->TotalBytesWritten = 0; /*0x431b6f*/
  this->__pad_04C = 0; /*0x431b72*/
  this->q050 = 0; /*0x431b75*/
  *(_DWORD *)this = &BufferIOFileClass::`vftable'; /*0x431b78*/
  return this; /*0x431b7e*/
}


// ==== 0x00431B80  BufferIOFileClass::Dtor  this=BufferIOFileClass  sig=csp ====
int __thiscall BufferIOFileClass_Dtor(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)this->FileBaseOffset; /*0x431b86*/
  *this = &BufferIOFileClass::`vftable'; /*0x431b89*/
  if ( v2 ) /*0x431b91*/
  {
    if ( *((_BYTE *)this + 36) ) /*0x431b93*/
    {
      __3_YAXPAX_Z(v2); /*0x431b99*/
      *((_BYTE *)this + 36) = 0; /*0x431ba1*/
    }
    this->FileBaseOffset = 0; /*0x431ba4*/
  }
  this->BufferReadSize = 0; /*0x431ba9*/
  *((_BYTE *)this + 37) = 0; /*0x431bac*/
  *((_BYTE *)this + 39) = 0; /*0x431baf*/
  *((_BYTE *)this + 40) = 0; /*0x431bb2*/
  *((_BYTE *)this + 41) = 0; /*0x431bb5*/
  return RawFileClass::Dtor(this); /*0x431bbd*/
}


// ==== 0x00431BC0  ObjectClass::method_431BC0  this=ObjectClass  sig=csp ====
bool __thiscall sub_431BC0(size_t *this, int a2, size_t a3)
{
  int v5; // edi
  signed int v6; // eax
  int v7; // edi
  bool v8; // zf
  size_t v9; // eax
  signed int v10; // [esp+24h] [ebp+4h]
  int v11; // [esp+28h] [ebp+8h]

  if ( this->vtable4 ) /*0x431bc8*/
    return !a2 && !a3; /*0x431bdb*/
  if ( (*(unsigned __int8 (__thiscall **)(size_t *, _DWORD))(*this + 20))(this, 0) ) /*0x431bef*/
    *(this + 18) = (*(int (__thiscall **)(size_t *))(*this + 44))(this); /*0x431bfd*/
  else
    *(this + 18) = 0; /*0x431c02*/
  v5 = a2; /*0x431c05*/
  if ( a2 ) /*0x431c0f*/
  {
    if ( a2 < 1024 ) /*0x431c17*/
    {
      v5 = 1024; /*0x431c1b*/
      if ( a3 ) /*0x431c20*/
        (*(void (__thiscall **)(size_t *, int, _DWORD, _DWORD))(*this + 64))(this, 22, 0, 0); /*0x431c2a*/
    }
    *(this + 13) = v5; /*0x431c2f*/
    if ( v5 ) /*0x431c32*/
      goto LABEL_14; /*0x431c32*/
  }
  else
  {
    *(this + 13) = *(this + 18); /*0x431c53*/
  }
  if ( a3 ) /*0x431c36*/
    return 0; /*0x431d83*/
LABEL_14:
  if ( !*(this + 13) ) /*0x431c41*/
    return 0; /*0x431c41*/
  if ( a3 ) /*0x431c49*/
    this->vtable4 = a3; /*0x431c4b*/
  else
    this->vtable4 = (size_t)__2_YAPAXI_Z(*(this + 13)); /*0x431c61*/
  if ( !this->vtable4 ) /*0x431c67*/
  {
    (*(void (__thiscall **)(size_t *, int, _DWORD, _DWORD))(*this + 64))(this, 12, 0, 0); /*0x431d7d*/
    return 0; /*0x431d7d*/
  }
  v6 = *(this + 18); /*0x431c6d*/
  this->isAliveFlag = 1; /*0x431c75*/
  this->isInLogic = 0; /*0x431c79*/
  *(this + 14) = 0; /*0x431c7c*/
  *(this + 15) = 0; /*0x431c7f*/
  this->uniqueId = -1; /*0x431c82*/
  *(this + 17) = -1; /*0x431c85*/
  *(this + 19) = 0; /*0x431c88*/
  this->abstractFlags = 0; /*0x431c8b*/
  if ( v6 ) /*0x431c8e*/
  {
    v7 = 0; /*0x431c97*/
    v11 = 0; /*0x431c9b*/
    v10 = v6; /*0x431c9f*/
    if ( v6 > (int)*(this + 13) ) /*0x431ca3*/
      v10 = *(this + 13); /*0x431ca5*/
    v8 = (*(unsigned __int8 (__thiscall **)(size_t *))(*this + 24))(this) == 0; /*0x431cb0*/
    v9 = *this; /*0x431cb2*/
    if ( v8 ) /*0x431cb6*/
    {
      if ( (*(int (__thiscall **)(size_t *, int))(v9 + 28))(this, 1) ) /*0x431d02*/
      {
        this->abstractFlags = FileClass::Seek((int *)this, 0, 1u); /*0x431d13*/
        v11 = 1; /*0x431d16*/
      }
    }
    else
    {
      v7 = (*(int (__thiscall **)(size_t *, _DWORD))(v9 + 40))(this, 0); /*0x431cbe*/
      if ( *(this + 5) == -1 ) /*0x431cc5*/
        this->abstractFlags = v7; /*0x431cd6*/
      else
        this->abstractFlags = FileClass::Seek((int *)this, 0, 1u); /*0x431cd1*/
      if ( (int)*(this + 18) > (int)*(this + 13) ) /*0x431ce1*/
      {
        *(this + 15) = v7; /*0x431cf8*/
        *(this + 19) = v7; /*0x431cfb*/
      }
      else
      {
        if ( v7 ) /*0x431ce5*/
          (*(void (__thiscall **)(size_t *, _DWORD, _DWORD))(*this + 40))(this, 0, 0); /*0x431ced*/
        *(this + 14) = v7; /*0x431cf0*/
        *(this + 19) = v7; /*0x431cf3*/
      }
    }
    if ( (*(int (__thiscall **)(size_t *, _DWORD, signed int))(*this + 36))(this, this->vtable4, v10) != v10 ) /*0x431d30*/
      (*(void (__thiscall **)(size_t *, int, _DWORD, _DWORD))(*this + 64))(this, 5, 0, 0); /*0x431d3a*/
    if ( v11 ) /*0x431d41*/
    {
      (*(void (__thiscall **)(size_t *))(*this + 52))(this); /*0x431d47*/
      *((_BYTE *)this + 39) = 1; /*0x431d4a*/
      *((_BYTE *)this + 41) = 1; /*0x431d4e*/
      return 1; /*0x431d58*/
    }
    (*(void (__thiscall **)(size_t *, int, _DWORD))(*this + 40))(this, v7, 0); /*0x431d61*/
    *((_BYTE *)this + 39) = 1; /*0x431d64*/
  }
  *((_BYTE *)this + 41) = 1; /*0x431d68*/
  return 1; /*0x431be1*/
}


// ==== 0x00431D90  ObjectClass::method_431D90  this=ObjectClass  sig=csp ====
void __thiscall sub_431D90(int this)
{
  if ( *(_DWORD *)(this + 48) ) /*0x431d96*/
  {
    if ( *(_BYTE *)(this + 36) ) /*0x431d9d*/
    {
      __3_YAXPAX_Z(*(void **)(this + 48)); /*0x431da3*/
      *(_BYTE *)(this + 36) = 0; /*0x431dab*/
    }
    *(_DWORD *)(this + 48) = 0; /*0x431dae*/
  }
  *(_DWORD *)(this + 52) = 0; /*0x431db1*/
  *(_BYTE *)(this + 37) = 0; /*0x431db4*/
  *(_BYTE *)(this + 39) = 0; /*0x431db7*/
  *(_BYTE *)(this + 40) = 0; /*0x431dba*/
  *(_BYTE *)(this + 41) = 0; /*0x431dbd*/
}


// ==== 0x00431DD0  BufferIO::Flush  this=BufferIO  sig=csp ====
char __thiscall BufferIO::Flush(int this)
{
  int v2; // eax
  AnimClass *v3; // edi

  if ( !*(_BYTE *)(this + 41) || !*(_BYTE *)(this + 40) ) /*0x431dde*/
    return 0; /*0x431e70*/
  v2 = *(_DWORD *)(this + 64); /*0x431de9*/
  v3 = (AnimClass *)(*(_DWORD *)(this + 68) - v2); /*0x431df3*/
  if ( *(_BYTE *)(this + 38) ) /*0x431dec*/
  {
    FileClass::Seek((int *)this, v2 + *(_DWORD *)(this + 80) + *(_DWORD *)(this + 60), 0); /*0x431e08*/
    FileClass::Write2((int *)this, *(LPCVOID *)(this + 48), (IUnknown *)v3); /*0x431e14*/
    FileClass::Seek((int *)this, *(_DWORD *)(this + 80) + *(_DWORD *)(this + 76), 0); /*0x431e26*/
  }
  else
  {
    FileClass::Open2((const CHAR **)this, (const CHAR *)1); /*0x431e38*/
    FileClass::Seek((int *)this, *(_DWORD *)(this + 64) + *(_DWORD *)(this + 60) + *(_DWORD *)(this + 80), 0); /*0x431e4f*/
    FileClass::Write2((int *)this, *(LPCVOID *)(this + 48), (IUnknown *)v3); /*0x431e5b*/
    FileClass::CloseHandle((HANDLE *)this); /*0x431e62*/
  }
  *(_BYTE *)(this + 40) = 0; /*0x431e2b*/
  return 1; /*0x431e32*/
}


// ==== 0x00431E80  BufferIOFileClass::SetName  this=BufferIOFileClass  sig=csp ====
int __thiscall CCFileClass::SetName(_BYTE *this, IUnknown *aP1)
{
  if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 4))(this) && this->q029 ) /*0x431e91*/
  {
    if ( !strcmp((const char *)aP1, (const char *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 4))(this)) ) /*0x431ead*/
      return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 4))(this); /*0x431ee1*/
    BufferIO::Flush((int)this); /*0x431ee6*/
    *(this + 39) = 0; /*0x431eeb*/
  }
  FileClass::SetName(this, (char *)aP1); /*0x431ef2*/
  return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 4))(this); /*0x431edf*/
}


// ==== 0x00431F10  BufferIOFileClass::IsReady  this=BufferIOFileClass  sig=csp ====
char __thiscall File_IsReady(_BYTE *this, int a2)
{
  if ( this->q029 ) /*0x431f10*/
    return 1; /*0x431f17*/
  else
    return FileClass::Open(0); /*0x431f1e*/
}


// ==== 0x00431F30  BufferIOFileClass::Read  this=BufferIOFileClass  sig=csp ====
bool __thiscall BufferIOFileClass::_vt06(int this)
{
  return *(_BYTE *)(this + 37) && *(_BYTE *)(this + 41) || *(_DWORD *)(this + 20) != -1; /*0x431f40*/
}


// ==== 0x00431F50  BufferIOFileClass::Write  this=BufferIOFileClass  sig=csp ====
BOOL __thiscall BufferIOFileClass::Write(void *this, int a2, CDFileClass *aP1)
{
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 8))(this, a2); /*0x431f5c*/
  return BufferIOFileClass::Open((int)this, aP1); /*0x431f6b*/
}


// ==== 0x00431F70  BufferIOFileClass::Open  this=BufferIOFileClass  sig=csp ====
BOOL __thiscall BufferIOFileClass::Open(int this, CDFileClass *aP1)
{
  int v3; // eax
  CDFileClass *v4; // eax
  int v5; // edx
  int v6; // eax

  if ( *(_BYTE *)(this + 41) ) /*0x431f76*/
  {
    BufferIO::Flush(this); /*0x431f7b*/
    if ( *(_BYTE *)(this + 38) ) /*0x431f80*/
    {
      if ( *(_DWORD *)(this + 80) ) /*0x431f85*/
      {
        v3 = *(_DWORD *)this; /*0x431f8a*/
        *(_BYTE *)(this + 41) = 0; /*0x431f8e*/
        (*(void (__thiscall **)(int))(v3 + 52))(this); /*0x431f91*/
        *(_BYTE *)(this + 41) = 1; /*0x431f94*/
        *(_BYTE *)(this + 38) = 0; /*0x431f98*/
        *(_BYTE *)(this + 37) = 0; /*0x431f9b*/
        goto LABEL_8; /*0x431f9e*/
      }
      FileClass::CloseHandle((HANDLE *)this); /*0x431fa2*/
      *(_BYTE *)(this + 38) = 0; /*0x431fa7*/
    }
    *(_BYTE *)(this + 37) = 0; /*0x431faa*/
  }
  else
  {
    FileClass::CloseHandle((HANDLE *)this); /*0x431faf*/
  }
LABEL_8:
  v4 = aP1; /*0x431fb4*/
  if ( *(_BYTE *)(this + 41) ) /*0x431fb4*/
  {
    *(_DWORD *)(this + 44) = aP1; /*0x431fc6*/
    if ( aP1 == (CDFileClass *)1 ) /*0x431fc9*/
    {
      if ( *(_DWORD *)(this + 72) <= *(_DWORD *)(this + 52) ) /*0x431fd3*/
      {
        *(_BYTE *)(this + 38) = 0; /*0x431fd5*/
LABEL_19:
        *(_DWORD *)(this + 56) = 0; /*0x432023*/
        *(_DWORD *)(this + 60) = 0; /*0x432029*/
        *(_DWORD *)(this + 64) = -1; /*0x43202c*/
        *(_DWORD *)(this + 68) = -1; /*0x43202f*/
        *(_DWORD *)(this + 76) = 0; /*0x432032*/
        *(_BYTE *)(this + 37) = 1; /*0x432035*/
        return 1; /*0x432040*/
      }
    }
    else if ( aP1 == (CDFileClass *)2 ) /*0x431fdd*/
    {
      FileClass::Open2((const CHAR **)this, (const CHAR *)2); /*0x431fe2*/
      FileClass::CloseHandle((HANDLE *)this); /*0x431fe9*/
      v4 = (CDFileClass *)3; /*0x431fee*/
      *(_DWORD *)(this + 80) = 0; /*0x431ff3*/
    }
    if ( *(_DWORD *)(this + 80) ) /*0x431ff6*/
    {
      v5 = *(_DWORD *)this; /*0x431ffb*/
      *(_BYTE *)(this + 41) = 0; /*0x432000*/
      (*(void (__thiscall **)(int, CDFileClass *))(v5 + 28))(this, v4); /*0x432003*/
      *(_BYTE *)(this + 41) = 1; /*0x432006*/
    }
    else
    {
      FileClass::Open2((const CHAR **)this, v4->__pad_0); /*0x43200f*/
    }
    v6 = *(_DWORD *)(this + 44); /*0x432014*/
    *(_BYTE *)(this + 38) = 1; /*0x432017*/
    if ( v6 == 2 ) /*0x43201e*/
      *(_DWORD *)(this + 72) = 0; /*0x432020*/
    goto LABEL_19; /*0x432020*/
  }
  return FileClass::Open2((const CHAR **)this, aP1->__pad_0); /*0x432039*/
}


// ==== 0x00432050  BufferIOFileClass::BufferedWriter  this=BufferIOFileClass  sig=csp ====
DWORD __thiscall FileClass::BufferedWriter(int *this, CCFileClass *aP1, DWORD nNumberOfBytesToWrite)
{
  DWORD result; // eax
  signed int v5; // ebx
  int v6; // eax
  signed int v7; // edi
  AbstractClass *v8; // ebp
  AudioController *v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  LONG v16; // edx
  LONG v17; // eax
  AudioController *v18; // edx
  BlowStraw *v19; // edi
  CCFileClass *v20; // [esp-8h] [ebp-20h]
  BlowStraw *v21; // [esp+10h] [ebp-8h]
  int v22; // [esp+14h] [ebp-4h]

  v22 = 0; /*0x43205b*/
  if ( !(*(unsigned __int8 (__thiscall **)(int *))(*this + 24))(this) ) /*0x43205f*/
  {
    result = (*(int (__thiscall **)(int *, int))(*this + 28))(this, 2); /*0x43206c*/
    if ( !result ) /*0x432071*/
      return result; /*0x432071*/
    this->q014 = FileClass::Seek(this, 0, 1u); /*0x432085*/
    v22 = 1; /*0x432088*/
  }
  if ( *((_BYTE *)this + 41) ) /*0x432090*/
  {
    v21 = 0; /*0x4320a2*/
    if ( *(this + 11) == 1 ) /*0x4320a6*/
    {
      (*(void (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 64))(this, 13, 0, 0); /*0x432262*/
    }
    else
    {
      v5 = nNumberOfBytesToWrite; /*0x4320ac*/
      if ( nNumberOfBytesToWrite ) /*0x4320b2*/
      {
        do /*0x43224c*/
        {
          v6 = *(this + 13); /*0x4320b9*/
          v7 = v6 - *(this + 14); /*0x4320c1*/
          if ( v5 < v7 ) /*0x4320c5*/
            v7 = v5; /*0x4320c7*/
          if ( v7 != v6 && !*((_BYTE *)this + 39) ) /*0x4320d1*/
          {
            if ( *(this + 18) >= v6 ) /*0x4320e1*/
            {
              v8 = (AbstractClass *)*(this + 13); /*0x4320ee*/
              *(this + 15) = *(this + 19); /*0x4320f3*/
            }
            else
            {
              v8 = (AbstractClass *)*(this + 18); /*0x4320e3*/
              *(this + 15) = 0; /*0x4320e5*/
            }
            if ( this->q014 ) /*0x4320f6*/
            {
              v9 = (AudioController *)*this; /*0x432100*/
              v20 = (CCFileClass *)*(this + 19); /*0x432104*/
              *((_BYTE *)this + 41) = 0; /*0x432107*/
              (*(void (__thiscall **)(int *, CCFileClass *, _DWORD))&v9->__pad_10[24])(this, v20, 0); /*0x43210b*/
              (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 36))(this, *(this + 12), *(this + 13)); /*0x43211a*/
              (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 40))(this, *(this + 19), 0); /*0x432127*/
              *((_BYTE *)this + 41) = 1; /*0x43212a*/
            }
            else
            {
              FileClass::Seek(this, *(this + 15), 0); /*0x432138*/
              FileClass::Read(this, (BufferIOFileClass *)*(this + 12), v8); /*0x432144*/
            }
            *(this + 14) = 0; /*0x43214c*/
            *(this + 16) = -1; /*0x432153*/
            *(this + 17) = -1; /*0x432156*/
            *((_BYTE *)this + 39) = 1; /*0x432159*/
          }
          memcpy((void *)(*(this + 12) + *(this + 14)), &v21->__pad_0[(_DWORD)aP1], v7); /*0x432175*/
          v10 = *(this + 14); /*0x43217e*/
          v21 = (BlowStraw *)((char *)v21 + v7); /*0x432186*/
          v11 = *(this + 16); /*0x43218a*/
          v5 -= v7; /*0x43218d*/
          *((_BYTE *)this + 40) = 1; /*0x432191*/
          if ( v11 == -1 ) /*0x432195*/
          {
            *(this + 16) = v10; /*0x432197*/
            *(this + 17) = v10; /*0x43219a*/
          }
          else if ( v11 > v10 ) /*0x4321a1*/
          {
            *(this + 16) = v10; /*0x4321a3*/
          }
          v12 = v10 + v7; /*0x4321a6*/
          v13 = *(this + 17); /*0x4321a9*/
          *(this + 14) = v12; /*0x4321ae*/
          if ( v13 < v12 ) /*0x4321b1*/
            *(this + 17) = v12; /*0x4321b3*/
          v14 = *(this + 18); /*0x4321b9*/
          v15 = v12 + *(this + 15); /*0x4321bc*/
          *(this + 19) = v15; /*0x4321c0*/
          if ( v14 < v15 ) /*0x4321c3*/
            *(this + 18) = v15; /*0x4321c5*/
          if ( v12 == *(this + 13) ) /*0x4321cb*/
          {
            BufferIO::Flush((int)this); /*0x4321cf*/
            v16 = *(this + 19); /*0x4321d4*/
            *(this + 14) = 0; /*0x4321d7*/
            *(this + 15) = v16; /*0x4321e0*/
            *(this + 16) = -1; /*0x4321e3*/
            *(this + 17) = -1; /*0x4321e6*/
            if ( v5 && (v17 = v16, *(this + 18) > v16) ) /*0x4321f2*/
            {
              if ( this->q014 ) /*0x4321f4*/
              {
                v18 = (AudioController *)*this; /*0x4321fb*/
                *((_BYTE *)this + 41) = 0; /*0x432202*/
                (*(void (__thiscall **)(int *, LONG, _DWORD))&v18->__pad_10[24])(this, v17, 0); /*0x432206*/
                (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 36))(this, *(this + 12), *(this + 13)); /*0x432215*/
                (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 40))(this, *(this + 19), 0); /*0x432222*/
                *((_BYTE *)this + 41) = 1; /*0x432225*/
              }
              else
              {
                FileClass::Seek(this, v16, 0); /*0x432230*/
                FileClass::Read(this, (BufferIOFileClass *)*(this + 12), (AbstractClass *)*(this + 13)); /*0x43223f*/
              }
            }
            else
            {
              *((_BYTE *)this + 39) = 0; /*0x432246*/
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
    v19 = (BlowStraw *)FileClass::Write2(this, aP1, (IUnknown *)nNumberOfBytesToWrite); /*0x43227d*/
  }
LABEL_38:
  if ( v22 ) /*0x432285*/
    (*(void (__thiscall **)(int *))(*this + 52))(this); /*0x43228b*/
  return (DWORD)v19; /*0x432073*/
}


// ==== 0x004322A0  BufferIOFileClass::BufferedReader  this=BufferIOFileClass  sig=csp ====
DWORD __thiscall FileClass::BufferedReader(int this, BufferIOFileClass *aP1, DWORD nNumberOfBytesToRead)
{
  BlowStraw *v4; // ebx
  BlowStraw *v5; // edi
  AbstractClass *v6; // ebp
  AudioController *v7; // edx
  char *v8; // eax
  char *v9; // ecx
  LONG v10; // eax
  AudioController *v11; // edx
  DWORD v12; // edi
  BufferIOFileClass *v14; // [esp-8h] [ebp-20h]
  BlowStraw *v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]

  v16 = 0; /*0x4322ab*/
  if ( !(*(unsigned __int8 (__thiscall **)(int))(this->__pad_018)(this) /*0x4322bc*/
    && (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 28))(this, 1) )
  {
    *(_DWORD *)(this + 80) = FileClass::Seek((int *)this, 0, 1u); /*0x4322cd*/
    v16 = 1; /*0x4322d0*/
  }
  if ( !*(_BYTE *)(this + 41) ) /*0x4322dd*/
  {
    v12 = FileClass::Read((_DWORD *)this, aP1, (AbstractClass *)nNumberOfBytesToRead); /*0x432492*/
    goto LABEL_29; /*0x432492*/
  }
  v15 = 0; /*0x4322ea*/
  if ( *(_DWORD *)(this + 44) == 2 ) /*0x4322ee*/
  {
    (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(this->BufferCursor)(this, 13, 0, 0); /*0x432477*/
    goto LABEL_27; /*0x432477*/
  }
  v4 = (BlowStraw *)nNumberOfBytesToRead; /*0x4322f4*/
  if ( !nNumberOfBytesToRead ) /*0x4322fa*/
  {
LABEL_27:
    v12 = 0; /*0x43247a*/
    goto LABEL_29; /*0x43247f*/
  }
  do /*0x432461*/
  {
    v5 = (BlowStraw *)(*(_DWORD *)(this + 52) - *(_DWORD *)(this + 56)); /*0x43230d*/
    if ( (int)v4 < (int)v5 ) /*0x43230f*/
      v5 = v4; /*0x432311*/
    if ( !*(_BYTE *)(this + 39) ) /*0x432313*/
    {
      if ( *(_DWORD *)(this + 72) >= *(_DWORD *)(this + 52) ) /*0x432323*/
      {
        v6 = *(AbstractClass **)(this + 52); /*0x432333*/
        *(_DWORD *)(this + 60) = *(_DWORD *)(this + 76); /*0x432335*/
      }
      else
      {
        v6 = *(AbstractClass **)(this + 72); /*0x432325*/
        *(_DWORD *)(this + 60) = 0; /*0x432327*/
      }
      if ( *(_DWORD *)(this + 80) ) /*0x432338*/
      {
        v7 = *(AudioController **)this; /*0x432342*/
        v14 = *(BufferIOFileClass **)(this + 76); /*0x432346*/
        *(_BYTE *)(this + 41) = 0; /*0x432349*/
        (*(void (__thiscall **)(int, BufferIOFileClass *, _DWORD))&v7->__pad_10[24])(this, v14, 0); /*0x43234d*/
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(this->BufferOffset)( /*0x43235c*/
          this,
          *(_DWORD *)(this + 48),
          *(_DWORD *)(this + 52));
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(this->BufferSize)(this, *(_DWORD *)(this + 76), 0); /*0x432369*/
        *(_BYTE *)(this + 41) = 1; /*0x43236c*/
      }
      else
      {
        FileClass::Seek((int *)this, *(_DWORD *)(this + 60), 0); /*0x43237a*/
        FileClass::Read((_DWORD *)this, *(BufferIOFileClass **)(this + 48), v6); /*0x432386*/
      }
      *(_DWORD *)(this + 56) = 0; /*0x43238e*/
      *(_DWORD *)(this + 64) = -1; /*0x432395*/
      *(_DWORD *)(this + 68) = -1; /*0x432398*/
      *(_BYTE *)(this + 39) = 1; /*0x43239b*/
    }
    memcpy(&v15->__pad_0[(_DWORD)aP1], (const void *)(*(_DWORD *)(this + 48) + *(_DWORD *)(this + 56)), (size_t)v5); /*0x4323b9*/
    v8 = &v5->__pad_0[*(_DWORD *)(this + 56)]; /*0x4323c7*/
    v15 = (BlowStraw *)((char *)v15 + (_DWORD)v5); /*0x4323c9*/
    v4 = (BlowStraw *)((char *)v4 - (int)v5); /*0x4323d7*/
    *(_DWORD *)(this + 76) = &v8[*(_DWORD *)(this + 60)]; /*0x4323d9*/
    v9 = *(char **)(this + 52); /*0x4323dc*/
    *(_DWORD *)(this + 56) = v8; /*0x4323e1*/
    if ( v8 == v9 ) /*0x4323e4*/
    {
      BufferIO::Flush(this); /*0x4323e8*/
      v10 = *(_DWORD *)(this + 76); /*0x4323ed*/
      *(_DWORD *)(this + 56) = 0; /*0x4323f0*/
      *(_DWORD *)(this + 60) = v10; /*0x4323f9*/
      *(_DWORD *)(this + 64) = -1; /*0x4323fc*/
      *(_DWORD *)(this + 68) = -1; /*0x4323ff*/
      if ( v4 && *(_DWORD *)(this + 72) > v10 ) /*0x432407*/
      {
        if ( *(_DWORD *)(this + 80) ) /*0x432409*/
        {
          v11 = *(AudioController **)this; /*0x432410*/
          *(_BYTE *)(this + 41) = 0; /*0x432417*/
          (*(void (__thiscall **)(int, LONG, _DWORD))&v11->__pad_10[24])(this, v10, 0); /*0x43241b*/
          (*(void (__thiscall **)(int, _DWORD, _DWORD))(this->BufferOffset)( /*0x43242a*/
            this,
            *(_DWORD *)(this + 48),
            *(_DWORD *)(this + 52));
          (*(void (__thiscall **)(int, _DWORD, _DWORD))(this->BufferSize)(this, *(_DWORD *)(this + 76), 0); /*0x432437*/
          *(_BYTE *)(this + 41) = 1; /*0x43243a*/
        }
        else
        {
          FileClass::Seek((int *)this, v10, 0); /*0x432445*/
          FileClass::Read((_DWORD *)this, *(BufferIOFileClass **)(this + 48), *(AbstractClass **)(this + 52)); /*0x432454*/
        }
      }
      else
      {
        *(_BYTE *)(this + 39) = 0; /*0x43245b*/
      }
    }
  }
  while ( v4 ); /*0x432461*/
  v12 = (DWORD)v15; /*0x432467*/
LABEL_29:
  if ( v16 ) /*0x43249a*/
    (*(void (__thiscall **)(int))(this->BufferReadSize)(this); /*0x4324a0*/
  return v12; /*0x4324a5*/
}


// ==== 0x004324B0  BufferIOFileClass::SeekInternal  this=BufferIOFileClass  sig=csp ====
int __thiscall BufferIOFileClass_SeekInternal(int this, LONG lDistanceToMove, DWORD dwMoveMethod)
{
  int v4; // eax
  LONG v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v14; // [esp-8h] [ebp-14h]
  char v15; // [esp+Bh] [ebp-1h]

  if ( !*(_BYTE *)(this + 41) ) /*0x4324b7*/
    return FileClass::Seek((int *)this, lDistanceToMove, dwMoveMethod); /*0x43258f*/
  v15 = 0; /*0x4324c4*/
  if ( dwMoveMethod ) /*0x4324ca*/
  {
    if ( dwMoveMethod == 2 ) /*0x4324cf*/
      *(_DWORD *)(this + 76) = *(_DWORD *)(this + 72); /*0x4324d4*/
  }
  else
  {
    *(_DWORD *)(this + 76) = 0; /*0x4324d9*/
  }
  v4 = *(_DWORD *)(this + 80); /*0x4324dc*/
  v5 = lDistanceToMove; /*0x4324df*/
  if ( v4 && lDistanceToMove >= v4 ) /*0x4324e9*/
  {
    v5 = lDistanceToMove - v4; /*0x4324eb*/
    v15 = 1; /*0x4324ed*/
  }
  v6 = *(_DWORD *)(this + 76); /*0x4324f2*/
  *(_DWORD *)(this + 76) = v5 + v6; /*0x4324f7*/
  if ( v5 + v6 < 0 ) /*0x4324fa*/
    *(_DWORD *)(this + 76) = 0; /*0x4324fc*/
  v7 = *(_DWORD *)(this + 72); /*0x4324ff*/
  if ( *(_DWORD *)(this + 76) > v7 ) /*0x432507*/
    *(_DWORD *)(this + 76) = v7; /*0x432509*/
  v8 = *(_DWORD *)(this + 52); /*0x43250c*/
  if ( v7 > v8 ) /*0x432511*/
  {
    v9 = *(_DWORD *)(this + 76); /*0x43251b*/
    v10 = *(_DWORD *)(this + 60); /*0x43251e*/
    if ( v9 < v10 || v9 >= v10 + v8 ) /*0x432529*/
    {
      BufferIO::Flush(this); /*0x432534*/
      if ( *(_DWORD *)(this + 80) ) /*0x432539*/
      {
        v11 = *(_DWORD *)this; /*0x432541*/
        v14 = *(_DWORD *)(this + 76); /*0x432544*/
        *(_BYTE *)(this + 41) = 0; /*0x432547*/
        (*(void (__thiscall **)(int, int, _DWORD))(v11 + 40))(this, v14, 0); /*0x43254a*/
        *(_BYTE *)(this + 41) = 1; /*0x43254d*/
      }
      else
      {
        FileClass::Seek((int *)this, *(_DWORD *)(this + 76), 0); /*0x43255a*/
      }
      *(_BYTE *)(this + 39) = 0; /*0x43255f*/
    }
    else
    {
      *(_DWORD *)(this + 56) = v9 - v10; /*0x43252d*/
    }
  }
  else
  {
    *(_DWORD *)(this + 56) = *(_DWORD *)(this + 76); /*0x432516*/
  }
  v12 = *(_DWORD *)(this + 80); /*0x432562*/
  if ( v12 && v15 ) /*0x43256d*/
    return v12 + *(_DWORD *)(this + 76); /*0x432573*/
  else
    return *(_DWORD *)(this + 76); /*0x43257a*/
}


// ==== 0x004325A0  BufferIOFileClass::SetSize  this=BufferIOFileClass  sig=csp ====
int __thiscall BufferIOFileClass::_vt11(int *this)
{
  if ( *((_BYTE *)this + 37) && *((_BYTE *)this + 41) ) /*0x4325a7*/
    return *(this + 18); /*0x4325ae*/
  else
    return CCFileClass::GetFileSize(this); /*0x4325b2*/
}


// ==== 0x004325C0  BufferIOFileClass::Close  this=BufferIOFileClass  sig=csp ====
char __thiscall CCFileClass_Close(_BYTE *this)
{
  char result; // al
  int v3; // eax

  if ( !this->q029 ) /*0x4325c3*/
    return ((int (*)(void))FileClass::CloseHandle)(); /*0x432607*/
  BufferIO::Flush(); /*0x4325ca*/
  result = *(this + 38); /*0x4325cf*/
  if ( result ) /*0x4325d4*/
  {
    if ( this->q050 ) /*0x4325d6*/
    {
      v3 = *(_DWORD *)this; /*0x4325dd*/
      this->q029 = 0; /*0x4325e1*/
      result = (*(int (__thiscall **)(_BYTE *))(v3 + 52))(this); /*0x4325e5*/
      this->q029 = 1; /*0x4325e8*/
      *(this + 38) = 0; /*0x4325ec*/
      this->q025 = 0; /*0x4325f0*/
      return result; /*0x4325f5*/
    }
    result = FileClass::CloseHandle(this); /*0x4325f8*/
    *(this + 38) = 0; /*0x4325fd*/
  }
  this->q025 = 0; /*0x432601*/
  return result; /*0x4325f4*/
}


// ==== 0x00432610  BufferIOFileClass::QueryInterface  this=BufferIOFileClass  sig=csp ====
BufferIOFileClass *__thiscall BufferIOFileClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 12); /*0x432616*/
  *Block = &BufferIOFileClass::`vftable'; /*0x432619*/
  if ( v3 ) /*0x432621*/
  {
    if ( *((_BYTE *)Block + 36) ) /*0x432623*/
    {
      __3_YAXPAX_Z(v3); /*0x432629*/
      *((_BYTE *)Block + 36) = 0; /*0x432631*/
    }
    *(Block + 12) = 0; /*0x432634*/
  }
  *(Block + 13) = 0; /*0x432639*/
  *((_BYTE *)Block + 37) = 0; /*0x43263c*/
  *((_BYTE *)Block + 39) = 0; /*0x43263f*/
  *((_BYTE *)Block + 40) = 0; /*0x432642*/
  *((_BYTE *)Block + 41) = 0; /*0x432645*/
  RawFileClass::Dtor(Block); /*0x432648*/
  if ( (a2 & 1) != 0 ) /*0x432652*/
    __3_YAXPAX_Z(Block); /*0x432655*/
  return (BufferIOFileClass *)Block; /*0x43265f*/
}


// ==== 0x00432670  sub_432670  this=-  sig=ida-proto ====
int sub_432670()
{
  unk_89C498 = 0; /*0x432672*/
  unk_89C49C = 0; /*0x432677*/
  unk_89C4A0 = 0; /*0x43267c*/
  unk_89C4A4 = 0; /*0x432681*/
  return 0; /*0x432686*/
}


// ==== 0x00432690  BinkMovie::Close  this=int  sig=csp ====
_DWORD *__thiscall BinkMovie_Close(_DWORD *this, char *FullPath)
{
  *(_BYTE *)this = 0; /*0x432695*/
  *(this + 1) = 0; /*0x432697*/
  *(this + 3) = 0; /*0x43269a*/
  *(this + 8) = 0; /*0x43269d*/
  *((_BYTE *)this + 45) = 0; /*0x4326a0*/
  *(this + 10) = -1; /*0x4326a8*/
  *((_BYTE *)this + 44) = 1; /*0x4326af*/
  BinkMovie::InitFromFile(FullPath); /*0x4326b3*/
  return this; /*0x4326ba*/
}


// ==== 0x004326C0  BinkMovie::Open  this=int  sig=csp ====
_DWORD *__thiscall BinkMovie_Open(_DWORD *this, char *FullPath, int a3)
{
  *(this + 3) = a3; /*0x4326ce*/
  *(_BYTE *)this = 0; /*0x4326d3*/
  *(this + 1) = 0; /*0x4326d5*/
  *(this + 8) = 0; /*0x4326d8*/
  *(this + 10) = -1; /*0x4326db*/
  *((_BYTE *)this + 44) = 1; /*0x4326e2*/
  *((_BYTE *)this + 45) = 0; /*0x4326e6*/
  BinkMovie::InitFromFile(FullPath); /*0x4326e9*/
  return this; /*0x4326f0*/
}


// ==== 0x00432700  BinkMovie::Stop  this=BinkMovie  sig=csp ====
int __thiscall BinkMovie_Stop(int this)
{
  void *v2; // edi
  int result; // eax

  v2 = *(void **)(this + 32); /*0x432704*/
  if ( v2 ) /*0x432709*/
  {
    BinkMovie::FreeSurfaceTracker(*(_DWORD *)(this + 32)); /*0x43270d*/
    __3_YAXPAX_Z(v2); /*0x432713*/
    *(_DWORD *)(this + 32) = 0; /*0x43271b*/
  }
  if ( *(_DWORD *)(this + 4) ) /*0x432722*/
  {
    BinkClose(*(_DWORD *)(this + 4)); /*0x43272a*/
    *(_DWORD *)(this + 4) = 0; /*0x432730*/
  }
  result = *(_DWORD *)(this + 40); /*0x432737*/
  if ( result != -1 ) /*0x43273d*/
  {
    result = CloseHandle(*(HANDLE *)(this + 40)); /*0x432740*/
    *(_DWORD *)(this + 40) = -1; /*0x432746*/
  }
  return result; /*0x43274d*/
}


// ==== 0x00432750  BinkMovie::InitFromFile  this=int  sig=csp ====
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
      v9 = BinkOpen(*(_DWORD *)(this + 40), &unk_800000); /*0x432849*/
      goto LABEL_14; /*0x432849*/
    }
  }
LABEL_15:
  if ( *(_DWORD *)(this + 4) )
  {
    flt_89C490 = MEMORY[0xA8EB9C]; /*0x43287c*/
    v13 = Math::RoundToInt(*(float *)&MEMORY[0xA8EB9C] * 32768.0); /*0x43288d*/
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
        v20 = MEMORY[0x88730C]; /*0x4328e3*/
        *(_DWORD *)(this + 12) = MEMORY[0x88730C]; /*0x4328e5*/
        v16 = ((*(int (__thiscall **)(int))(*(_DWORD *)v20 + 124))(v20) - v17) / 2; /*0x4328f9*/
        v21 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 128))(*(_DWORD *)(this + 12)); /*0x4328fb*/
      }
      else
      {
        *(_DWORD *)(this + 12) = MEMORY[0x887308]; /*0x43290d*/
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
    *(_DWORD *)(this + 8) = BinkDDSurfaceType(*(_DWORD *)(MEMORY[0x887308] + 28)); /*0x432a44*/
    return 1; /*0x432a4a*/
  }
  else
  {
    Error = (const char *)BinkGetError(); /*0x432857*/
    Debug::Log("Bink Error: %s\n", Error);
    return 0; /*0x43286b*/
  }
}


// ==== 0x00432AB0  BinkMovieHandle::RenderFrameClipped  this=int  sig=csp ====
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


// ==== 0x00432BD0  BinkMovieHandle::Check  this=VOID_PTR  sig=csp ====
int __thiscall sub_432BD0(_DWORD *this, int a2)
{
  int result; // eax

  result = BinkGoto(*(this + 1), a2, 1); /*0x432bde*/
  *(this + 12) = 0; /*0x432be4*/
  return result; /*0x432beb*/
}


// ==== 0x00432C10  WeaponTypeClass::COMStub_432C10  this=VOID_PTR  sig=csp ====
int __thiscall sub_432C10(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  int result; // eax

  v2 = (_DWORD *)*(this + 8); /*0x432c10*/
  if ( v2 ) /*0x432c15*/
    return AbstractClass::getTotalValue(v2, a2); /*0x432c1c*/
  return result; /*0x432c21*/
}


// ==== 0x00432C30  BinkMovie::Pause  this=VOID_PTR  sig=csp ====
int __thiscall BinkMovie_Pause(_DWORD *this, unsigned __int8 a2)
{
  return BinkPause(*(this + 1), a2); /*0x432c44*/
}


// ==== 0x00432C50  BinkMovieHandle::IsAtEnd  this=VOID_PTR  sig=csp ====
BOOL __thiscall BinkMovie_IsAtEnd(_DWORD *this)
{
  int v1; // eax
  unsigned int v2; // edx

  v1 = *(this + 1); /*0x432c50*/
  v2 = *(_DWORD *)(v1 + 12); /*0x432c54*/
  return v2 >= *(_DWORD *)(v1 + 8) || v2 < *(this + 12); /*0x432c5c*/
}


// ==== 0x00432C70  BinkMovie::Play  this=VOID_PTR  sig=csp ====
int __thiscall BinkMovie_Play(_BYTE *this)
{
  const char *Error; // eax
  void (__stdcall *v4)(HWND, LPPOINT); // ebp
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  _DWORD v11[4]; // [esp+4h] [ebp-4Ch] BYREF
  struct tagRECT Rect; // [esp+14h] [ebp-3Ch] BYREF
  struct tagRECT v13; // [esp+24h] [ebp-2Ch] BYREF
  MSG Msg; // [esp+34h] [ebp-1Ch] BYREF

  if ( *((_DWORD *)this + 1) )
  {
    Timer::PumpMessages(MEMORY[0x87F770]); /*0x432c9f*/
    v4 = (void (__stdcall *)(HWND, LPPOINT))ClientToScreen; /*0x432caa*/
    *(this + 44) = 1; /*0x432cb0*/
    *(this + 45) = 0; /*0x432cb4*/
    while ( 1 ) /*0x432cb8*/
    {
      v5 = *((_DWORD *)this + 1); /*0x432cb8*/
      v6 = *(_DWORD *)(v5 + 12); /*0x432cbb*/
      if ( v6 >= *(_DWORD *)(v5 + 8) || v6 < *((_DWORD *)this + 12) ) /*0x432ccc*/
        break; /*0x432ccc*/
      ++unk_AA0430; /*0x432cdd*/
      if ( GameLoopMessagePump(&Msg, 0, 0, 0, 0) ) /*0x432ceb*/
      {
        if ( !IsMessageDialog(&Msg, 0, 0) ) /*0x432d05*/
          return Timer::PumpMessages(MEMORY[0x87F770]); /*0x432d05*/
        TranslateMessage(&Msg); /*0x432d10*/
        DispatchMessageA(&Msg); /*0x432d1b*/
      }
      else
      {
        if ( !*(this + 44) ) /*0x432d23*/
          Sleep(0x21u); /*0x432d2c*/
        v7 = *((_DWORD *)this + 3); /*0x432d32*/
        if ( v7 == MEMORY[0x887308] ) /*0x432d3d*/
        {
          GetClientRect(g_hWnd, &Rect); /*0x432d4a*/
          v4(g_hWnd, (LPPOINT)&Rect); /*0x432d58*/
          BinkMovie::RenderLoop( /*0x432d74*/
            *((_DWORD *)this + 3),
            Rect.left + *((_DWORD *)this + 4),
            Rect.top + *((_DWORD *)this + 5));
        }
        else if ( (unsigned __int8)BinkMovie::RenderLoop(v7, *((_DWORD *)this + 4), *((_DWORD *)this + 5)) ) /*0x432d89*/
        {
          GetClientRect(g_hWnd, &v13); /*0x432d9e*/
          v4(g_hWnd, (LPPOINT)&v13); /*0x432dab*/
          v8 = *((_DWORD *)this + 4); /*0x432db4*/
          v9 = *((_DWORD *)this + 5); /*0x432db6*/
          v11[2] = *((_DWORD *)this + 6); /*0x432dbc*/
          v11[3] = *((_DWORD *)this + 7); /*0x432dc9*/
          v10 = *((_DWORD *)this + 3); /*0x432dd3*/
          v11[1] = v13.top + v9; /*0x432dd6*/
          v11[0] = v13.left + v8; /*0x432de1*/
          (*(void (__thiscall **)(int, _DWORD *, int, _BYTE *, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))( /*0x432dec*/
            MEMORY[0x887308],
            v11,
            v10,
            this + 16,
            0,
            1);
          v4 = (void (__stdcall *)(HWND, LPPOINT))ClientToScreen; /*0x432def*/
        }
        if ( (unsigned __int16)EventQueue::Process(MEMORY[0x87F770]) /*0x432e21*/
          && !*this
          && (unsigned __int16)EventQueue::Read(MEMORY[0x87F770]) == 2075 )
        {
          return Timer::PumpMessages(MEMORY[0x87F770]); /*0x432e21*/
        }
      }
    }
    return Timer::PumpMessages(MEMORY[0x87F770]); /*0x432e27*/
  }
  else
  {
    Error = (const char *)BinkGetError(); /*0x432c7d*/
    return Debug::Log("Bink Error: %s\n", Error);
  }
}


// ==== 0x00432E40  BinkMovie::RenderLoop  this=int  sig=csp ====
bool __thiscall BinkMovie::RenderLoop(int this, DSurface *aP1, int a3, int a4)
{
  int v5; // eax
  char v6; // al
  int v7; // edx
  int v8; // eax
  int v9; // eax
  bool result; // al
  _DWORD *v12; // ecx
  char v13; // bl
  int v14; // ebp
  int v15; // eax
  int v16; // ecx
  int v17; // [esp-Ch] [ebp-24h]
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF
  DSurface *aP1a; // [esp+1Ch] [ebp+4h]

  if ( flt_89C490[0] != *(float *)&MEMORY[0xA8D63C].__pad_14B0[176] ) /*0x432e58*/
  {
    flt_89C490[0] = *(float *)&MEMORY[0xA8D63C].__pad_14B0[176]; /*0x432e5f*/
    v5 = Math::RoundToInt(*(float *)&MEMORY[0xA8D63C].__pad_14B0[176] * 32768.0); /*0x432e70*/
    BinkSetVolume(*(_DWORD *)(this + 4), v5); /*0x432e7a*/
  }
  v6 = *(_BYTE *)(this + 44); /*0x432e87*/
  if ( MEMORY[0xA8D63C].__pad_14B0[660] ) /*0x432e8a*/
  {
    if ( !v6 ) /*0x432eb8*/
    {
      Debug::Log(); /*0x432ebf*/
      v8 = *(_DWORD *)(this + 4); /*0x432ec4*/
      *(_BYTE *)(this + 44) = 1; /*0x432eca*/
      BinkPause(v8, 0); /*0x432ed1*/
      v9 = *(_DWORD *)(this + 12); /*0x432ed7*/
      if ( v9 == *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9404] ) /*0x432ee2*/
      {
        GetClientRect((HWND)g_hWnd, &Rect); /*0x432ef0*/
        ClientToScreen((HWND)g_hWnd, (LPPOINT)&Rect); /*0x432f02*/
        BinkMovie::RenderSingleFrame( /*0x432f22*/
          (_DWORD *)this,
          *(_DWORD *)(this + 12),
          Rect.left + *(_DWORD *)(this + 16),
          Rect.top + *(_DWORD *)(this + 20),
          1);
      }
      else
      {
        BinkMovie::RenderSingleFrame((_DWORD *)this, v9, *(_DWORD *)(this + 16), *(_DWORD *)(this + 20), 1); /*0x432f31*/
      }
    }
  }
  else if ( v6 == 1 ) /*0x432e8e*/
  {
    Debug::Log(); /*0x432e99*/
    v7 = *(_DWORD *)(this + 4); /*0x432e9e*/
    *(_BYTE *)(this + 44) = 0; /*0x432ea4*/
    BinkPause(v7, 1); /*0x432eab*/
  }
  if ( *(_BYTE *)(this + 45) || (result = BinkWait(*(_DWORD *)(this + 4)) == 0) ) /*0x432f49*/
  {
    do /*0x43300d*/
    {
      BinkDoFrame(*(_DWORD *)(this + 4)); /*0x432f62*/
      v12 = *(_DWORD **)(this + 32); /*0x432f68*/
      v13 = 0; /*0x432f6b*/
      *(_BYTE *)(this + 45) = 0; /*0x432f6f*/
      if ( v12 ) /*0x432f73*/
      {
        v13 = BinkMovie::CheckKeyframeTransition( /*0x432f85*/
                v12,
                (CellStruct *)(*(_DWORD *)(this + 36) * *(_DWORD *)(*(_DWORD *)(this + 4) + 12)));
        if ( v13 ) /*0x432f89*/
          BinkMovie::AdjustSurfaceFormat((int *)this, aP1); /*0x432f8e*/
      }
      aP1a = (DSurface *)(*(int (__thiscall **)(DSurface *, _DWORD, _DWORD))(aP1->field_0 + 92))(aP1, 0, 0); /*0x432fa0*/
      if ( aP1a ) /*0x432fa4*/
      {
        v14 = (*(int (__thiscall **)(DSurface *))(aP1->field_0 + 116))(aP1); /*0x432fb1*/
        v15 = (*(int (__thiscall **)(DSurface *))(aP1->field_0 + 128))(aP1); /*0x432fb3*/
        v16 = *(_DWORD *)(this + 8); /*0x432fb9*/
        if ( v13 ) /*0x432fbe*/
          v16 |= 0x80000000; /*0x432fc0*/
        BinkCopyToBuffer(*(_DWORD *)(this + 4), aP1a, v14, v15, a3, a4, v16); /*0x432fdc*/
        (*(void (__thiscall **)(DSurface *))(aP1->field_0 + 96))(aP1); /*0x432fe6*/
      }
      BinkMovie::BlitToTarget((_DWORD *)this, aP1); /*0x432fec*/
      v17 = *(_DWORD *)(this + 4); /*0x432ff4*/
      *(_DWORD *)(this + 48) = *(_DWORD *)(v17 + 12); /*0x432ff8*/
      BinkNextFrame(v17); /*0x432ffb*/
    }
    while ( !BinkWait(*(_DWORD *)(this + 4)) ); /*0x43300d*/
    return 1; /*0x433016*/
  }
  return result; /*0x432f50*/
}


// ==== 0x00433040  BinkMovieHandle::RenderFrameToSurface  this=VOID_PTR  sig=csp ====
bool __thiscall BinkMovie_RenderFrameToSurface(int *this)
{
  return BinkMovie::RenderLoop((int)this, *(this + 3), *(this + 4), *(this + 5)); /*0x433051*/
}


// ==== 0x00433060  BinkMovieHandle::CopyFrameToSurface  this=BinkMovieHandle  sig=csp ====
_DWORD *__thiscall BinkMovieHandle::CopyFrameToSurface(int *this)
{
  DSurface *v2; // edi
  int v3; // ebx
  int v4; // ebp
  int v5; // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // eax
  int v10; // [esp+10h] [ebp-18h]
  int v11; // [esp+10h] [ebp-18h]
  int v12; // [esp+14h] [ebp-14h]
  int v13; // [esp+14h] [ebp-14h]
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  v2 = (DSurface *)*(this + 3); /*0x43306e*/
  if ( v2 == *(DSurface **)&MEMORY[0x87F8E4].__pad_5568[9404] ) /*0x433073*/
  {
    GetClientRect((HWND)g_hWnd, &Rect); /*0x433085*/
    ClientToScreen((HWND)g_hWnd, (LPPOINT)&Rect); /*0x433096*/
    v3 = Rect.left + this->tempPath; /*0x4330a7*/
    v4 = Rect.top + *(this + 5); /*0x4330ae*/
    v2 = (DSurface *)*(this + 3); /*0x4330b0*/
    BinkMovie::AdjustSurfaceFormat(this, v2); /*0x4330b4*/
    v12 = (*(int (__thiscall **)(DSurface *, _DWORD, _DWORD))(v2->field_0 + 92))(v2, 0, 0); /*0x4330c8*/
    if ( v12 ) /*0x4330cc*/
    {
      v10 = (*(int (__thiscall **)(DSurface *))(v2->field_0 + 116))(v2); /*0x4330dd*/
      v5 = (*(int (__thiscall **)(DSurface *))(v2->field_0 + 128))(v2); /*0x4330e1*/
      BinkCopyToBuffer(*(this + 1), v12, v10, v5, v3, v4, *(this + 2) | 0x80000000); /*0x4330fe*/
LABEL_6:
      (*(void (__thiscall **)(DSurface *))(v2->field_0 + 96))(v2); /*0x43315b*/
    }
  }
  else
  {
    v6 = *(this + 5); /*0x433103*/
    v13 = this->tempPath; /*0x433109*/
    BinkMovie::AdjustSurfaceFormat(this, (DSurface *)*(this + 3)); /*0x43310d*/
    v7 = (*(int (__thiscall **)(DSurface *, _DWORD, _DWORD))(v2->field_0 + 92))(v2, 0, 0); /*0x43311f*/
    if ( v7 ) /*0x433123*/
    {
      v11 = (*(int (__thiscall **)(DSurface *))(v2->field_0 + 116))(v2); /*0x433130*/
      v8 = (*(int (__thiscall **)(DSurface *))(v2->field_0 + 128))(v2); /*0x433134*/
      BinkCopyToBuffer(*(this + 1), v7, v11, v8, v13, v6, *(this + 2) | 0x80000000); /*0x433155*/
      goto LABEL_6; /*0x433155*/
    }
  }
  return BinkMovie::BlitToTarget(this, v2); /*0x43316a*/
}


// ==== 0x00433180  BinkMovieClass::SetPosition  this=BinkMovieClass  sig=csp ====
_DWORD *__thiscall BinkMovieClass::SetPosition(int *this, DSurface *aP1, int a3, int a4)
{
  int v5; // ebx
  int v6; // ebp
  int v7; // eax

  BinkMovie::AdjustSurfaceFormat(this, aP1); /*0x43318a*/
  v5 = (*(int (__thiscall **)(DSurface *, _DWORD, _DWORD))(aP1->field_0 + 92))(aP1, 0, 0); /*0x43319c*/
  if ( v5 ) /*0x4331a0*/
  {
    v6 = (*(int (__thiscall **)(DSurface *))(aP1->field_0 + 116))(aP1); /*0x4331ae*/
    v7 = (*(int (__thiscall **)(DSurface *))(aP1->field_0 + 128))(aP1); /*0x4331b0*/
    BinkCopyToBuffer(*(this + 1), v5, v6, v7, a3, a4, *(this + 2) | 0x80000000); /*0x4331d1*/
    (*(void (__thiscall **)(DSurface *))(aP1->field_0 + 96))(aP1); /*0x4331db*/
  }
  return BinkMovie::BlitToTarget(this, aP1); /*0x4331e7*/
}


// ==== 0x004331F0  BinkMovie::RenderSingleFrame  this=int  sig=csp ====
_DWORD *__thiscall BinkMovie::RenderSingleFrame(int *this, DSurface *aP1, int a3, int a4, char a5)
{
  int v6; // ebx
  int v7; // ebp
  int v8; // eax
  int v9; // ecx

  if ( a5 ) /*0x4331ff*/
    BinkMovie::AdjustSurfaceFormat(this, aP1); /*0x433202*/
  v6 = (*(int (__thiscall **)(DSurface *, _DWORD, _DWORD))(aP1->field_0 + 92))(aP1, 0, 0); /*0x433214*/
  if ( v6 ) /*0x433218*/
  {
    v7 = (*(int (__thiscall **)(DSurface *))(aP1->field_0 + 116))(aP1); /*0x433226*/
    v8 = (*(int (__thiscall **)(DSurface *))(aP1->field_0 + 128))(aP1); /*0x433228*/
    v9 = *(this + 2); /*0x433232*/
    if ( a5 ) /*0x433237*/
      v9 |= 0x80000000; /*0x433239*/
    BinkCopyToBuffer(*(this + 1), v6, v7, v8, a3, a4, v9); /*0x433251*/
    (*(void (__thiscall **)(DSurface *))(aP1->field_0 + 96))(aP1); /*0x43325b*/
  }
  return BinkMovie::BlitToTarget(this, aP1); /*0x433267*/
}


// ==== 0x00433270  BinkMovie::BlitToTarget  this=VOID_PTR  sig=csp ====
_DWORD *__thiscall BinkMovie::BlitToTarget(_DWORD *this, DSurface *aP1)
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

  result = (_DWORD *)*(this + 8); /*0x433277*/
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
        v9 = *(this + 6); /*0x4332e4*/
        v15[3] = v4[3]; /*0x4332ea*/
        v10 = (v9 - v13) / 2 + v7; /*0x4332fd*/
        v11 = *(this + 7) - v14 + v8; /*0x433309*/
        v12 = *(this + 5); /*0x43330b*/
        v15[0] = *(this + 4) + v10; /*0x43330e*/
        v15[1] = v12 + v11; /*0x43331c*/
        return (_DWORD *)(*(int (__thiscall **)(DSurface *, _DWORD *, int, int *, int, int))(aP1->field_0 + 8))( /*0x433323*/
                           aP1,
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


// ==== 0x00433330  BinkMovie::AdjustSurfaceFormat  this=BinkMovieHandle  sig=csp ====
int __thiscall BinkMovie::AdjustSurfaceFormat(int *this, DSurface *aP1)
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

  result = this->renderTarget; /*0x433336*/
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
        v7 = *(this + 6) - v5[2]; /*0x43339a*/
        v8 = *(this + 7) - v6 + v10; /*0x4333b0*/
        v9 += this->tempPath + (((int)v7 - HIDWORD(v7)) >> 1); /*0x4333bb*/
        v10 = *(this + 5) + v8; /*0x4333c5*/
        return (*(int (__thiscall **)(DSurface *, int *, _DWORD))(aP1->field_0 + 20))(aP1, &v9, 0); /*0x4333cf*/
      }
    }
  }
  return result; /*0x4333d3*/
}


// ==== 0x004333F0  BinkMovieClass::RenderFrameToSurface  this=BinkMovieClass  sig=csp ====
unsigned __int8 __thiscall BinkMovieClass::RenderFrameToSurface(int this)
{
  unsigned __int8 result; // al
  int v3; // eax
  int v4; // ecx
  DSurface *v5; // edi
  int v6; // ebx
  int v7; // ebp
  int v8; // eax
  int v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // [esp+10h] [ebp-18h]
  int v13; // [esp+10h] [ebp-18h]
  int v14; // [esp+14h] [ebp-14h]
  int v15; // [esp+14h] [ebp-14h]
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  result = *(_BYTE *)(this + 44); /*0x433400*/
  if ( MEMORY[0xA8D63C].__pad_14B0[660] ) /*0x433403*/
  {
    if ( result ) /*0x433434*/
      return result; /*0x433434*/
    Debug::Log(); /*0x43343f*/
    v4 = *(_DWORD *)(this + 4); /*0x433444*/
    *(_BYTE *)(this + 44) = 1; /*0x43344a*/
    BinkPause(v4, 0); /*0x433451*/
    v5 = *(DSurface **)(this + 12); /*0x433457*/
    if ( v5 == *(DSurface **)&MEMORY[0x87F8E4].__pad_5568[9404] ) /*0x433461*/
    {
      GetClientRect((HWND)g_hWnd, &Rect); /*0x433472*/
      ClientToScreen((HWND)g_hWnd, (LPPOINT)&Rect); /*0x433484*/
      v6 = Rect.left + *(_DWORD *)(this + 16); /*0x433495*/
      v7 = Rect.top + *(_DWORD *)(this + 20); /*0x43349c*/
      v5 = *(DSurface **)(this + 12); /*0x43349e*/
      BinkMovie::AdjustSurfaceFormat((int *)this, v5); /*0x4334a2*/
      v14 = (*(int (__thiscall **)(DSurface *, _DWORD, _DWORD))(v5->field_0 + 92))(v5, 0, 0); /*0x4334b6*/
      if ( v14 ) /*0x4334ba*/
      {
        v12 = (*(int (__thiscall **)(DSurface *))(v5->field_0 + 116))(v5); /*0x4334cb*/
        v8 = (*(int (__thiscall **)(DSurface *))(v5->field_0 + 128))(v5); /*0x4334cf*/
        BinkCopyToBuffer(*(_DWORD *)(this + 4), v14, v12, v8, v6, v7, *(_DWORD *)(this + 8) | 0x80000000); /*0x4334ec*/
LABEL_10:
        (*(void (__thiscall **)(DSurface *))(v5->field_0 + 96))(v5); /*0x433549*/
      }
    }
    else
    {
      v9 = *(_DWORD *)(this + 20); /*0x4334f1*/
      v15 = *(_DWORD *)(this + 16); /*0x4334f7*/
      BinkMovie::AdjustSurfaceFormat((int *)this, *(DSurface **)(this + 12)); /*0x4334fb*/
      v10 = (*(int (__thiscall **)(DSurface *, _DWORD, _DWORD))(v5->field_0 + 92))(v5, 0, 0); /*0x43350d*/
      if ( v10 ) /*0x433511*/
      {
        v13 = (*(int (__thiscall **)(DSurface *))(v5->field_0 + 116))(v5); /*0x43351e*/
        v11 = (*(int (__thiscall **)(DSurface *))(v5->field_0 + 128))(v5); /*0x433522*/
        BinkCopyToBuffer(*(_DWORD *)(this + 4), v10, v13, v11, v15, v9, *(_DWORD *)(this + 8) | 0x80000000); /*0x433543*/
        goto LABEL_10; /*0x433543*/
      }
    }
    return (unsigned __int8)BinkMovie::BlitToTarget((_DWORD *)this, v5); /*0x433553*/
  }
  if ( result == 1 ) /*0x433407*/
  {
    Debug::Log(); /*0x433412*/
    v3 = *(_DWORD *)(this + 4); /*0x433417*/
    *(_BYTE *)(this + 44) = 0; /*0x43341d*/
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


// ==== 0x00433770  BinkMovieClass::OpenFile  this=int  sig=csp ====
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
  unk_89C4A8 = 0; /*0x433862*/
  unk_89C4AC = 0; /*0x433867*/
  unk_89C4B0 = 0; /*0x43386c*/
  unk_89C4B4 = 0; /*0x433871*/
  return 0; /*0x433876*/
}


// ==== 0x00433880  BitTextClass::ParseFontData  this=BitFont  sig=csp ====
int __thiscall sub_433880(int this, char *Source)
{
  struct tagRECT *v3; // ebp
  _DWORD *Font; // eax

  v3 = (struct tagRECT *)(this + 48); /*0x43388a*/
  *(_DWORD *)this = &vt_BitFont; /*0x433895*/
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
    sub_434700((_DWORD *)this); /*0x4338ed*/
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


// ==== 0x00433990  File::LoadFont  this=int  sig=csp ====
_DWORD *__thiscall LoadFontFile(char *Source)
{
  unsigned int v2; // ebp
  _DWORD *v3; // esi
  _DWORD *v4; // eax
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
  void *v22; // eax
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
  v4 = __2_YAPAXI_Z(0x6Cu); /*0x43399f*/
  if ( v4 ) /*0x4339a9*/
  {
    v5 = CCFileClass::Construct(v4, Source); /*0x4339b2*/
    v6 = v5; /*0x4339b7*/
    if ( v5 ) /*0x4339bb*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v5 + 20))(v5, 0) /*0x4339f0*/
        || !(*(int (__thiscall **)(_DWORD *, int))(*v6 + 28))(v6, 1)
        || (v3 = __2_YAPAXI_Z(0x24u)) == 0 )
      {
LABEL_35:
        (*(void (__thiscall **)(_DWORD *, int))*v6)(v6, 1); /*0x433bee*/
        return v3; /*0x433bf4*/
      }
      memset(v3, 0, 0x24u); /*0x433a04*/
      v7 = __2_YAPAXI_Z(0x20000u); /*0x433a0b*/
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
                  if ( v22 && (*(int (__thiscall **)(_DWORD *, void *, size_t))(*v6 + 36))(v6, v22, v20) == v20 ) /*0x433bc1*/
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


// ==== 0x00433C70  Property::Set  this=AbstractClass  sig=csp ====
__int16 __thiscall Property::Set(_WORD *this, AbstractClass *aP1)
{
  __int16 result; // ax

  result = *(this + 18); /*0x433c75*/
  *(this + 18) = (_WORD)aP1; /*0x433c79*/
  return result; /*0x433c7d*/
}


// ==== 0x00433C80  ObjectClass::method_433C80  this=ObjectClass  sig=csp ====
__int16 __thiscall sub_433C80(_WORD *this, __int16 a2)
{
  *(this + 19) = a2; /*0x433c85*/
  return *(this + 18); /*0x433c8d*/
}


// ==== 0x00433C90  Char::Swap  this=AbstractClass  sig=csp ====
char __thiscall Char::Swap(_BYTE *this, ObjectClass *aP1)
{
  char result; // al

  result = this->q041; /*0x433c94*/
  this->q041 = (_BYTE)aP1; /*0x433c97*/
  return result; /*0x433c9a*/
}


// ==== 0x00433CA0  TextGroup::SetRect  this=AbstractClass  sig=csp ====
_DWORD *__thiscall TextGroup::SetRect(_DWORD *this, AbstractClass *aP1)
{
  AbstractClass *result; // eax

  result = aP1; /*0x433ca0*/
  if ( aP1 ) /*0x433ca8*/
  {
    this->q030 = *(_DWORD *)aP1->__pad_0; /*0x433cac*/
    this->q034 = *(_DWORD *)&aP1->__pad_0[4]; /*0x433cb2*/
    this->q038 = *(_DWORD *)&aP1->__pad_0[8]; /*0x433cb8*/
    result = *(AbstractClass **)&aP1->__pad_0[12]; /*0x433cbb*/
    this->q03C = result; /*0x433cbe*/
  }
  else
  {
    this->q03C = 0; /*0x433cc4*/
    this->q038 = 0; /*0x433cc7*/
    this->q034 = 0; /*0x433cca*/
    this->q030 = 0; /*0x433ccd*/
  }
  return result->__pad_0; /*0x433cc1*/
}


// ==== 0x00433CE0  ObjectClass::method_433CE0  this=VOID_PTR  sig=csp ====
char __thiscall sub_433CE0(_BYTE *this, char a2)
{
  char result; // al

  result = *(this + 64); /*0x433ce4*/
  *(this + 64) = a2; /*0x433ce7*/
  return result; /*0x433cea*/
}


// ==== 0x00433CF0  Text::Layout  this=AbstractClass  sig=csp ====
char __thiscall Text::Layout(
        _DWORD *this,
        unsigned __int16 *a1,
        AbstractClass *aP2,
        AbstractClass *aP3,
        AbstractClass *aP4)
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
  AbstractClass *v15; // [esp+4h] [ebp-1Ch]
  unsigned __int16 *v16; // [esp+Ch] [ebp-14h]
  _DWORD *v17; // [esp+10h] [ebp-10h]
  AbstractClass *v18; // [esp+14h] [ebp-Ch]
  AbstractClass *v19; // [esp+18h] [ebp-8h]
  unsigned __int16 i; // [esp+1Ch] [ebp-4h]
  AbstractClass *a1a; // [esp+24h] [ebp+4h]

  v5 = 0; /*0x433cf6*/
  v18 = 0; /*0x433cff*/
  v17 = (_DWORD *)*(this + 1); /*0x433d03*/
  if ( v17 && a1 ) /*0x433d13*/
  {
    v6 = *a1; /*0x433d1f*/
    v7 = 0; /*0x433d22*/
    v8 = 0; /*0x433d24*/
    v9 = a1 + 1; /*0x433d26*/
    a1a = 0; /*0x433d2c*/
    v19 = (AbstractClass *)*(this + 7); /*0x433d30*/
    v15 = v19; /*0x433d34*/
    v16 = 0; /*0x433d38*/
    for ( i = v6; v6; i = v6 ) /*0x433d40*/
    {
      switch ( v6 ) /*0x433d5c*/
      {
        case 9u: /*0x433d5c*/
          v7 = *(this + 10) + v7 - (*(this + 10) + v7) % *(this + 10); /*0x433d92*/
          break; /*0x433d94*/
        case 0xAu: /*0x433d5c*/
        case 0xDu: /*0x433d5c*/
          if ( v5 != 13 ) /*0x433d67*/
          {
            v7 = 0; /*0x433d75*/
            v8 = 0; /*0x433d77*/
            v15 = (AbstractClass *)((char *)v15 + (_DWORD)v19); /*0x433d7b*/
          }
          break; /*0x433d7f*/
        case 0x20u: /*0x433d5c*/
          v16 = v9; /*0x433d9d*/
          v18 = a1a; /*0x433da1*/
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
          if ( v10 || (v10 = (unsigned __int8 *)*(this + 2)) != 0 ) /*0x433dd7*/
          {
            ++v8; /*0x433de1*/
            v12 = *(this + 11); /*0x433de2*/
            v13 = *v10; /*0x433de5*/
            v7 += v12 + v13; /*0x433dea*/
            if ( aP4 && v7 > (int)aP4 ) /*0x433df6*/
            {
              if ( v16 ) /*0x433dfe*/
              {
                if ( v8 > 1 ) /*0x433e03*/
                {
                  v9 = v16; /*0x433e09*/
                  a1a = v18; /*0x433e0b*/
                }
              }
              else
              {
                if ( v8 > 1 ) /*0x433e14*/
                {
                  v7 -= v13 + v12; /*0x433e18*/
                  --v9; /*0x433e1a*/
                }
                if ( v7 > (int)a1a ) /*0x433e21*/
                  a1a = (AbstractClass *)v7; /*0x433e23*/
              }
              v7 = 0; /*0x433e2f*/
              v8 = 0; /*0x433e31*/
              v16 = 0; /*0x433e35*/
              v15 = (AbstractClass *)((char *)v15 + (_DWORD)v19); /*0x433e39*/
            }
            else if ( v7 > (int)a1a ) /*0x433e43*/
            {
              a1a = (AbstractClass *)v7; /*0x433e45*/
            }
          }
          break; /*0x433e3d*/
      }
      v6 = *v9; /*0x433e49*/
      v5 = i; /*0x433e4c*/
      ++v9; /*0x433e50*/
    }
    if ( aP2 ) /*0x433e69*/
      *(_DWORD *)aP2->__pad_0 = a1a; /*0x433e6f*/
    if ( aP3 ) /*0x433e77*/
      *(_DWORD *)aP3->__pad_0 = v15; /*0x433e7d*/
    return 1; /*0x433e7f*/
  }
  else
  {
    if ( aP3 ) /*0x433e8e*/
      *(_DWORD *)aP3->__pad_0 = 0; /*0x433e90*/
    if ( aP2 ) /*0x433e98*/
      *(_DWORD *)aP2->__pad_0 = 0; /*0x433e9a*/
    return 0; /*0x433e9c*/
  }
}


// ==== 0x00433ED0  Text::MeasureWidth  this=VOID_PTR  sig=csp ====
int __stdcall Text::MeasureWidth(CampaignScore *aP0, int aP2)
{
  _DWORD *v2; // ecx

  Text::Layout(v2, (unsigned __int16 *)aP0, (AbstractClass *)&aP2, 0, (AbstractClass *)aP2); /*0x433ee1*/
  return aP2; /*0x433eea*/
}


// ==== 0x00433F50  MessageListClass::CountCharsInWidth  this=int  sig=csp ====
int __thiscall sub_433F50(_DWORD *this, _WORD *a2, int a3, int a4, int a5)
{
  _DWORD *v5; // edx
  int v6; // ebp
  _DWORD *v7; // ebx
  _WORD *v8; // ecx
  unsigned __int16 v9; // di
  unsigned __int8 *v10; // eax
  int v11; // edx
  int v12; // edx
  int v14; // edx
  _WORD *v15; // ecx
  int v16; // eax
  int v17; // [esp+8h] [ebp-8h]

  v5 = this; /*0x433f53*/
  v6 = 0; /*0x433f57*/
  v7 = (_DWORD *)*(this + 1); /*0x433f59*/
  v17 = 0; /*0x433f62*/
  if ( !v7 ) /*0x433f66*/
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
        v6 = v5[10] + v6 - (v5[10] + v6) % v5[10]; /*0x433fee*/
      }
      else if ( v9 != 10 && v9 != 13 ) /*0x433fa1*/
      {
        v10 = 0; /*0x433fa3*/
        v11 = *(unsigned __int16 *)(v7[6] + 2 * v9); /*0x433fae*/
        if ( (_WORD)v11 ) /*0x433fb4*/
          v10 = (unsigned __int8 *)(v7[7] + (v11 - 1) * v7[5]); /*0x433fbd*/
        v8 = a2; /*0x433fc0*/
        if ( v10 || (v10 = (unsigned __int8 *)*(this + 2)) != 0 ) /*0x433fd1*/
          v6 += *v10 + *(this + 11); /*0x433fe0*/
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


// ==== 0x00434100  ObjectClass::method  this=VOID_PTR  sig=csp ====
int __thiscall sub_434100(_DWORD *this, int a2)
{
  int result; // eax

  result = *(this + 10); /*0x434104*/
  *(this + 10) = a2; /*0x434107*/
  return result; /*0x43410a*/
}


// ==== 0x00434110  Field::Int_Set  this=AbstractClass  sig=csp ====
int __thiscall Field::Int_Set(_DWORD *this, AbstractClass *aP1)
{
  this->needsSave = aP1; /*0x434114*/
  return (int)aP1->__pad_0; /*0x434117*/
}


// ==== 0x00434120  FontClass::RenderGlyph  this=AbstractClass  sig=csp ====
int __thiscall FontClass::RenderGlyph(
        int this,
        AbstractClass *aP1,
        AbstractClass *aP2,
        AbstractClass *aP3,
        AbstractClass *aP4)
{
  unsigned __int16 v5; // di
  _DWORD *v8; // ecx
  unsigned __int8 *v9; // eax
  int v10; // edx
  int v11; // edi
  int v12; // ebp
  LONG v13; // ebx
  AbstractClass *v14; // edx
  unsigned __int8 *v15; // ebp
  LONG v16; // edi
  char *v17; // eax
  int v18; // esi
  _WORD *v19; // esi
  int v20; // ecx
  AbstractClass *v21; // eax
  char v22; // dl
  bool v23; // zf
  __int16 v24; // bp
  _WORD *v25; // esi
  char *v26; // eax
  int v27; // ecx
  _WORD *v28; // esi
  char *v29; // eax
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
  int v70; // [esp+10h] [ebp-30h]
  unsigned __int8 *v71; // [esp+14h] [ebp-2Ch]
  _WORD *v72; // [esp+18h] [ebp-28h]
  int v73; // [esp+1Ch] [ebp-24h]
  struct tagRECT rc; // [esp+20h] [ebp-20h] BYREF
  LONG v75; // [esp+30h] [ebp-10h] BYREF
  LONG v76; // [esp+34h] [ebp-Ch]
  LONG v77; // [esp+38h] [ebp-8h]
  LONG v78; // [esp+3Ch] [ebp-4h]
  __int16 aP1a; // [esp+44h] [ebp+4h]
  char *yTop; // [esp+4Ch] [ebp+Ch]
  int yTopa; // [esp+4Ch] [ebp+Ch]
  int aP4a; // [esp+50h] [ebp+10h]

  v5 = (unsigned __int16)aP1; /*0x434127*/
  v70 = this; /*0x434131*/
  if ( (_WORD)aP1 == 9 ) /*0x434135*/
    return (int)&aP2->__pad_0[*(_DWORD *)(this + 40) /*0x434155*/
                            - (int)&aP2->__pad_0[*(_DWORD *)(this + 40) - *(_DWORD *)(this + 32)]
                            % *(_DWORD *)(this + 40)];
  aP1a = *(_WORD *)(this + 36); /*0x43415c*/
  if ( aP4 != (AbstractClass *)-1 ) /*0x434168*/
    aP1a = (__int16)aP4; /*0x43416a*/
  v8 = *(_DWORD **)(this + 4); /*0x43416e*/
  v9 = 0; /*0x434171*/
  if ( v8 ) /*0x434175*/
  {
    v10 = *(unsigned __int16 *)(v8[6] + 2 * v5); /*0x434182*/
    if ( (_WORD)v10 ) /*0x434188*/
      v9 = (unsigned __int8 *)(v8[7] + (v10 - 1) * v8[5]); /*0x434191*/
  }
  if ( !v9 ) /*0x434196*/
  {
    if ( &v69 != (int *)-68 ) /*0x43419e*/
      aP1a ^= 0x5555u; /*0x4341a0*/
    v9 = *(unsigned __int8 **)(this + 8); /*0x4341a8*/
    if ( !v9 ) /*0x4341ad*/
      return (int)aP2->__pad_0; /*0x4341ba*/
  }
  if ( !*(_DWORD *)(this + 12) ) /*0x4341bd*/
    return (int)aP2->__pad_0; /*0x4341cf*/
  v11 = v8[2]; /*0x4341d5*/
  v71 = v9 + 1; /*0x4341d8*/
  aP4a = *v9; /*0x4341e7*/
  if ( !*(_BYTE *)(this + 65) ) /*0x4341e0*/
    goto LABEL_71; /*0x4341e0*/
  SetRect(&rc, (int)aP2, (int)aP3, (int)&aP2->__pad_0[*v9 - 1], (int)&aP3->__pad_0[v11 - 1]); /*0x43420a*/
  v12 = v70; /*0x434210*/
  if ( !sub_434840(&v75, &rc, (_DWORD *)(v70 + 48)) ) /*0x434224*/
    return (int)&aP2->__pad_0[aP4a + *(_DWORD *)(v12 + 44)]; /*0x43423f*/
  v13 = v75; /*0x434242*/
  if ( rc.left >= v75 && rc.right <= v77 && rc.top >= v76 && rc.bottom <= v78 ) /*0x43426c*/
  {
LABEL_71:
    v47 = v11; /*0x434409*/
    v48 = v11 - 1; /*0x43440d*/
    v49 = *(_DWORD *)(v70 + 12) + 2 * ((_DWORD)aP2 + (_DWORD)aP3 * *(_DWORD *)(v70 + 16)); /*0x434410*/
    if ( !v47 ) /*0x434413*/
    {
LABEL_102:
      v14 = (AbstractClass *)v70; /*0x4344e0*/
      return (int)&aP2->__pad_0[aP4a + *(_DWORD *)&v14[1].__pad_0[8]]; /*0x4344e0*/
    }
    yTopa = v48 + 1; /*0x43441e*/
    v50 = v71; /*0x434422*/
LABEL_73:
    v51 = aP4a; /*0x434426*/
    v52 = (char *)v50; /*0x43442a*/
    v53 = (_WORD *)v49; /*0x43442c*/
    while ( 1 ) /*0x43442e*/
    {
      v54 = *v52++; /*0x43442e*/
      if ( v54 ) /*0x434433*/
      {
        if ( v54 < 0 ) /*0x434440*/
          *v53 = aP1a; /*0x434442*/
        v55 = v53 + 1; /*0x434445*/
        v56 = v51 - 1; /*0x434448*/
        if ( v56 <= 0 ) /*0x43444b*/
          goto LABEL_101; /*0x43444b*/
        if ( (v54 & 0x40) != 0 ) /*0x434450*/
          *v55 = aP1a; /*0x434452*/
        v57 = v55 + 1; /*0x434455*/
        v58 = v56 - 1; /*0x434458*/
        if ( v58 <= 0 ) /*0x43445b*/
          goto LABEL_101; /*0x43445b*/
        if ( (v54 & 0x20) != 0 ) /*0x434460*/
          *v57 = aP1a; /*0x434462*/
        v59 = v57 + 1; /*0x434465*/
        v60 = v58 - 1; /*0x434468*/
        if ( v60 <= 0 ) /*0x43446b*/
          goto LABEL_101; /*0x43446b*/
        if ( (v54 & 0x10) != 0 ) /*0x434470*/
          *v59 = aP1a; /*0x434472*/
        v61 = v59 + 1; /*0x434475*/
        v62 = v60 - 1; /*0x434478*/
        if ( v62 <= 0 ) /*0x43447b*/
          goto LABEL_101; /*0x43447b*/
        if ( (v54 & 8) != 0 ) /*0x434480*/
          *v61 = aP1a; /*0x434482*/
        v63 = v61 + 1; /*0x434485*/
        v64 = v62 - 1; /*0x434488*/
        if ( v64 <= 0 ) /*0x43448b*/
          goto LABEL_101; /*0x43448b*/
        if ( (v54 & 4) != 0 ) /*0x434490*/
          *v63 = aP1a; /*0x434492*/
        v65 = v63 + 1; /*0x434495*/
        v66 = v64 - 1; /*0x434498*/
        if ( v66 <= 0 ) /*0x43449b*/
          goto LABEL_101; /*0x43449b*/
        if ( (v54 & 2) != 0 ) /*0x4344a0*/
          *v65 = aP1a; /*0x4344a2*/
        v67 = v65 + 1; /*0x4344a5*/
        v68 = v66 - 1; /*0x4344a8*/
        if ( v68 <= 0 ) /*0x4344ab*/
        {
LABEL_101:
          v50 += *(_DWORD *)(v70 + 24); /*0x4344c1*/
          v23 = yTopa == 1; /*0x4344d1*/
          v49 += 2 * *(_DWORD *)(v70 + 16); /*0x4344d2*/
          --yTopa; /*0x4344d6*/
          if ( v23 ) /*0x4344da*/
            goto LABEL_102; /*0x4344da*/
          goto LABEL_73; /*0x4344da*/
        }
        if ( (v54 & 1) != 0 ) /*0x4344b0*/
          *v67 = aP1a; /*0x4344b2*/
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
  v14 = (AbstractClass *)v70; /*0x434276*/
  v15 = &v71[(v76 - rc.top) * *(_DWORD *)(v70 + 24)]; /*0x43428c*/
  v16 = v77; /*0x434295*/
  v17 = &aP2->__pad_0[((_DWORD)aP3 + v76 - rc.top) * *(_DWORD *)(v70 + 16)]; /*0x434299*/
  v18 = *(_DWORD *)(v70 + 12); /*0x43429b*/
  v71 = v15; /*0x43429e*/
  v19 = (_WORD *)(v18 + 2 * (_DWORD)v17); /*0x4342a2*/
  v72 = v19; /*0x4342a8*/
  if ( v78 - v76 == -1 ) /*0x4342ae*/
    return (int)&aP2->__pad_0[aP4a + *(_DWORD *)&v14[1].__pad_0[8]]; /*0x4342ae*/
  v73 = v78 - v76 + 1; /*0x4342b5*/
  do /*0x4343ed*/
  {
    v20 = aP4a; /*0x4342b9*/
    v21 = aP2; /*0x4342bd*/
    yTop = (char *)v15; /*0x4342c1*/
    while ( 1 ) /*0x4342c9*/
    {
      v22 = *yTop; /*0x4342c9*/
      v23 = *yTop++ == 0; /*0x4342cd*/
      if ( !v23 ) /*0x4342d3*/
        break; /*0x4342d3*/
      v19 += 8; /*0x4342d5*/
      v20 -= 8; /*0x4342d8*/
      v21 = (AbstractClass *)((char *)v21 + 8); /*0x4342db*/
LABEL_68:
      if ( v20 <= 0 ) /*0x4343bf*/
        goto LABEL_69; /*0x4343bf*/
    }
    if ( (int)v21 < v13 || (int)v21 > v16 || v22 >= 0 ) /*0x4342ee*/
    {
      v24 = aP1a; /*0x4342f9*/
    }
    else
    {
      v24 = aP1a; /*0x4342f0*/
      *v19 = aP1a; /*0x4342f4*/
    }
    v25 = v19 + 1; /*0x4342fd*/
    v26 = &v21->__pad_0[1]; /*0x434300*/
    v27 = v20 - 1; /*0x434301*/
    if ( v27 > 0 ) /*0x434304*/
    {
      if ( (int)v26 >= v13 && (int)v26 <= v16 && (v22 & 0x40) != 0 ) /*0x434315*/
        *v25 = v24; /*0x434317*/
      v28 = v25 + 1; /*0x43431a*/
      v29 = v26 + 1; /*0x43431d*/
      v30 = v27 - 1; /*0x43431e*/
      if ( v30 > 0 ) /*0x434321*/
      {
        if ( (int)v29 >= v13 && (int)v29 <= v16 && (v22 & 0x20) != 0 ) /*0x434332*/
          *v28 = v24; /*0x434334*/
        v31 = v28 + 1; /*0x434337*/
        v32 = (LONG)(v29 + 1); /*0x43433a*/
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
                  v21 = (AbstractClass *)(v44 + 1); /*0x4343bb*/
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
    v14 = (AbstractClass *)v70; /*0x4343c5*/
    v15 = &v71[*(_DWORD *)(v70 + 24)]; /*0x4343d4*/
    v46 = *(_DWORD *)(v70 + 16); /*0x4343d6*/
    v71 = v15; /*0x4343d9*/
    v19 = &v72[v46]; /*0x4343dd*/
    v23 = v73 == 1; /*0x4343e4*/
    v72 = v19; /*0x4343e5*/
    --v73; /*0x4343e9*/
  }
  while ( !v23 ); /*0x4343ed*/
  return (int)&aP2->__pad_0[aP4a + *(_DWORD *)&v14[1].__pad_0[8]]; /*0x43414c*/
}


// ==== 0x00434500  FontClass::RenderText  this=AbstractClass  sig=csp ====
int __thiscall FontClass::RenderText(int this, AbstractClass *aP1, int xLeft, int yTop, AbstractClass *aP4, int a6)
{
  AbstractClass *v6; // esi
  unsigned __int16 *v8; // edx
  bool v9; // zf
  unsigned __int16 v10; // bx
  int v11; // ecx
  int v12; // ebp
  int v13; // edx
  int v14; // eax
  int result; // eax
  __int16 v16; // [esp+10h] [ebp-10h]
  unsigned __int8 v17[2]; // [esp+14h] [ebp-Ch] BYREF
  unsigned __int8 v18; // [esp+16h] [ebp-Ah]
  int v19; // [esp+18h] [ebp-8h]
  int v20; // [esp+1Ch] [ebp-4h]

  LOWORD(v6) = *(_WORD *)aP1->__pad_0; /*0x43450a*/
  v8 = (unsigned __int16 *)&aP1->__pad_0[2]; /*0x434510*/
  v9 = *(_WORD *)aP1->__pad_0 == 0; /*0x434513*/
  v10 = *(_WORD *)(this + 36); /*0x434516*/
  v19 = 0; /*0x43451a*/
  aP1 = (AbstractClass *)((char *)aP1 + 2); /*0x434522*/
  if ( v9 ) /*0x434526*/
  {
LABEL_14:
    result = xLeft; /*0x43467b*/
    *(_WORD *)(this + 36) = v10; /*0x43467f*/
    return result; /*0x43468a*/
  }
  v11 = a6; /*0x43452c*/
  v20 = a6 - 1; /*0x434533*/
  v12 = 31 * (9 - a6); /*0x434543*/
  while ( !v11 ) /*0x434547*/
  {
LABEL_8:
    if ( (_WORD)v6 != 13 && (_WORD)v6 != 10 ) /*0x434637*/
    {
      v14 = FontClass::RenderGlyph(this, v6, (AbstractClass *)xLeft, (AbstractClass *)yTop, (AbstractClass *)0xFFFFFFFF); /*0x434648*/
      v11 = a6; /*0x43464d*/
      xLeft = v14; /*0x434651*/
    }
    if ( !aP4 || (aP4 = (AbstractClass *)((char *)aP4 - 1)) != 0 ) /*0x434662*/
    {
      LOWORD(v6) = *(_WORD *)aP1->__pad_0; /*0x434668*/
      v8 = (unsigned __int16 *)&aP1->__pad_0[2]; /*0x43466b*/
      v9 = *(_WORD *)aP1->__pad_0 == 0; /*0x43466e*/
      aP1 = (AbstractClass *)((char *)aP1 + 2); /*0x434671*/
      if ( !v9 ) /*0x434675*/
        continue; /*0x434675*/
    }
    goto LABEL_14; /*0x434675*/
  }
  if ( v19 < v11 ) /*0x434551*/
  {
    if ( v20 < 8 ) /*0x43455c*/
    {
      LOBYTE(v16) = (unsigned __int8)(v10 >> MEMORY[0x89F690].__pad_14B0[656]) << MEMORY[0x89F690].__pad_14B0[660]; /*0x43458e*/
      HIBYTE(v16) = (unsigned __int8)(v10 >> MEMORY[0x89F690].__pad_14B0[672]) << MEMORY[0x89F690].__pad_14B0[676]; /*0x43459b*/
      *(_WORD *)v17 = v16; /*0x4345b1*/
      v18 = (unsigned __int8)(v10 >> MEMORY[0x89F690].__pad_14B0[664]) << MEMORY[0x89F690].__pad_14B0[668]; /*0x4345ba*/
      Color::Lerp(v17, (ObjectClass *)v12, &byte_A80220); /*0x4345be*/
      LOWORD(v13) = (unsigned __int8)(v18 >> MEMORY[0x89F690].__pad_14B0[668]); /*0x4345ee*/
      v11 = a6; /*0x43460e*/
      *(_WORD *)(this + 36) = ((unsigned __int8)(v17[0] >> MEMORY[0x89F690].__pad_14B0[660]) << MEMORY[0x89F690].__pad_14B0[656]) /*0x434614*/
                            | (v13 << MEMORY[0x89F690].__pad_14B0[664])
                            | ((unsigned __int8)(v17[1] >> MEMORY[0x89F690].__pad_14B0[676]) << MEMORY[0x89F690].__pad_14B0[672]);
    }
    v12 += 31; /*0x43461c*/
    ++v19; /*0x434620*/
    --v20; /*0x434629*/
    goto LABEL_8; /*0x434629*/
  }
  *(_WORD *)(this + 36) = v10; /*0x434699*/
  Text::Layout((_DWORD *)this, v8, (AbstractClass *)&aP1, 0, 0); /*0x43469d*/
  return (int)&aP1->__pad_0[xLeft]; /*0x434683*/
}


// ==== 0x004346C0  Font::GetGlyphDataForChar  this=AbstractClass  sig=csp ====
int __thiscall Font::GetGlyphDataForChar(_DWORD *this, AbstractClass *aP1)
{
  AbstractClass *v2; // ecx
  int result; // eax
  int v4; // edx

  v2 = (AbstractClass *)this->vtable2; /*0x4346c0*/
  result = 0; /*0x4346c3*/
  if ( v2 ) /*0x4346c7*/
  {
    v4 = *(unsigned __int16 *)(v2->nextArrayIndex + 2 * (unsigned __int16)aP1); /*0x4346da*/
    if ( (_WORD)v4 ) /*0x4346e2*/
      return v2->referenceCount + (v4 - 1) * v2->abstractFlags; /*0x4346eb*/
  }
  return result; /*0x4346ee*/
}


// ==== 0x00434700  ObjectClass::method  this=BitFont  sig=csp ====
_BYTE *__thiscall sub_434700(_DWORD *this)
{
  _BYTE *result; // eax
  _DWORD *v3; // edx
  int v4; // ecx
  _BYTE *v5; // ecx
  _BYTE *v6; // edi
  int v7; // edx
  unsigned int v8; // ebp
  unsigned int v9; // ecx

  result = malloc(*(_DWORD *)(this->q004 + 4) * *(_DWORD *)(this->q004 + 8) + 2); /*0x434713*/
  v3 = (_DWORD *)this->q004; /*0x434718*/
  this->q008 = result; /*0x434720*/
  if ( v3 ) /*0x434723*/
  {
    v4 = *(unsigned __int16 *)(v3[6] + 176); /*0x43472a*/
    if ( (_WORD)v4 ) /*0x434733*/
    {
      v5 = (_BYTE *)(v3[7] + (v4 - 1) * v3[5]); /*0x43473e*/
      if ( v5 ) /*0x434741*/
      {
        v6 = v5 + 1; /*0x434745*/
        *result = *v5; /*0x434748*/
        v7 = this->q004; /*0x43474a*/
        v8 = 0; /*0x434750*/
        for ( result = (_BYTE *)(this->q008 + 1); v8 < *(_DWORD *)(v7 + 8); ++v8 ) /*0x434752*/
        {
          v9 = 0; /*0x43475e*/
          if ( *(_DWORD *)(v7 + 4) ) /*0x43475b*/
          {
            do /*0x434774*/
            {
              *result++ = ~*v6++; /*0x434769*/
              ++v9; /*0x434770*/
            }
            while ( v9 < *(_DWORD *)(this->q004 + 4) ); /*0x434774*/
          }
          v7 = this->q004; /*0x434776*/
        }
      }
    }
  }
  return result; /*0x434780*/
}


// ==== 0x00434840  sub_434840  this=int  sig=csp ====
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


// ==== 0x004348F0  FontRenderer::InitContext  this=AbstractClass  sig=csp ====
int __thiscall FontRenderer_InitContext(_DWORD *this, int *a2)
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

  this->vtable4 = (*(int (__thiscall **)(int *, _DWORD, _DWORD))(*a2 + 92))(a2, 0, 0); /*0x434908*/
  this->uniqueId = (unsigned int)(*(int (__thiscall **)(int *))(*a2 + 116))(a2) >> 1; /*0x434914*/
  v3 = *a2; /*0x434917*/
  v10 = 0; /*0x43491b*/
  v11 = 0; /*0x434923*/
  v12 = (*(int (__thiscall **)(int *))(v3 + 124))(a2) - 1; /*0x434931*/
  v4 = (*(int (__thiscall **)(int *))(*a2 + 128))(a2); /*0x434937*/
  v5 = this->q034 | this->q03C | this->q038; /*0x43494b*/
  result = v4 - 1; /*0x43494d*/
  v7 = this->q030; /*0x43494e*/
  v13 = result; /*0x434950*/
  if ( v7 | v5 ) /*0x434954*/
    return sub_434840(this + 12, this + 12, &v10); /*0x434980*/
  v8 = v10; /*0x434958*/
  this->q03C = result; /*0x43495c*/
  this->q030 = v8; /*0x43495f*/
  v9 = v12; /*0x434965*/
  this->q034 = v11; /*0x434969*/
  this->q038 = v9; /*0x43496c*/
  return result; /*0x43496f*/
}


// ==== 0x00434990  BufferIO::Cleanup  this=AbstractClass  sig=csp ====
int __thiscall BufferIO::Cleanup(_DWORD *this, AbstractClass *aP1)
{
  (*(void (__thiscall **)(AbstractClass *))(*(_DWORD *)aP1->__pad_0 + 96))(aP1); /*0x434999*/
  this->vtable4 = 0; /*0x43499e*/
  this->uniqueId = 0; /*0x4349a1*/
  return 0; /*0x4349a4*/
}


// ==== 0x004349B0  FontClass::GetPixelData  this=AbstractClass  sig=csp ====
int __thiscall FontClass_GetPixelData(_DWORD *this, unsigned __int16 a2)
{
  _DWORD *v2; // ecx
  int v3; // eax
  unsigned __int8 *v4; // eax

  v2 = (_DWORD *)this->vtable2; /*0x4349b0*/
  if ( v2 /*0x4349dc*/
    && (v3 = *(unsigned __int16 *)(v2[6] + 2 * a2), (_WORD)v3)
    && (v4 = (unsigned __int8 *)(v2[7] + (v3 - 1) * v2[5])) != 0 )
  {
    return *v4; /*0x4349e2*/
  }
  else
  {
    return 0; /*0x4349e7*/
  }
}


// ==== 0x004349F0  ObjectClass::method_4349F0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_4349F0(int this)
{
  BOOL result; // eax

  *(_DWORD *)(this + 4) = 0; /*0x4349f9*/
  *(_DWORD *)(this + 32) = 0; /*0x4349fc*/
  *(_DWORD *)(this + 12) = 0; /*0x4349ff*/
  *(_DWORD *)(this + 8) = 0; /*0x434a02*/
  *(_WORD *)(this + 36) = 0x7FFF; /*0x434a0f*/
  *(_WORD *)(this + 38) = 13653; /*0x434a15*/
  *(_DWORD *)(this + 40) = 64; /*0x434a1b*/
  *(_BYTE *)(this + 64) = 1; /*0x434a22*/
  *(_BYTE *)(this + 65) = 1; /*0x434a25*/
  *(_DWORD *)(this + 24) = 1; /*0x434a28*/
  *(_DWORD *)(this + 28) = 1; /*0x434a2b*/
  result = SetRect((LPRECT)(this + 48), 0, 0, 0, 0); /*0x434a2e*/
  *(_DWORD *)(this + 44) = 1; /*0x434a34*/
  return result; /*0x434a37*/
}


// ==== 0x00434A40  BufferIOFileClass::Constructor_BitFont  this=BitFont  sig=csp ====
BitFont *__thiscall BufferIOFileClass::Constructor_BitFont(void ***Block, char a2)
{
  void *v3; // eax
  void **v4; // esi

  v3 = *(Block + 2); /*0x434a43*/
  *Block = &vt_BitFont; /*0x434a46*/
  if ( v3 ) /*0x434a4e*/
    free(v3); /*0x434a51*/
  v4 = *(Block + 1); /*0x434a5a*/
  if ( v4 ) /*0x434a5f*/
  {
    if ( v4[6] ) /*0x434a61*/
      __3_YAXPAX_Z(v4[6]); /*0x434a69*/
    if ( v4[7] ) /*0x434a71*/
      __3_YAXPAX_Z(v4[7]); /*0x434a79*/
    __3_YAXPAX_Z(v4); /*0x434a82*/
  }
  if ( (a2 & 1) != 0 ) /*0x434a91*/
    __3_YAXPAX_Z(Block); /*0x434a94*/
  return (BitFont *)Block; /*0x434a9e*/
}


// ==== 0x00434AB0  sub_434AB0  this=-  sig=ida-proto ====
int sub_434AB0()
{
  unk_89C4C0 = 0; /*0x434ab2*/
  unk_89C4C4 = 0; /*0x434ab7*/
  unk_89C4C8 = 0; /*0x434abc*/
  unk_89C4CC = 0; /*0x434ac1*/
  return 0; /*0x434ac6*/
}


// ==== 0x00434AD0  BitTextClass::LoadFont  this=BitTextClass  sig=csp ====
_DWORD *__thiscall BitTextClass::LoadFont(_DWORD *this)
{
  int v2; // eax

  *this = &BitText::`vftable'; /*0x434ad5*/
  v2 = __2_YAPAXI_Z(68); /*0x434adb*/
  if ( v2 ) /*0x434ae5*/
  {
    MEMORY[0x87F7E8][29498] = BitTextClass::ParseFontData(v2, aGameFnt); /*0x434af3*/
    return this; /*0x434af8*/
  }
  else
  {
    MEMORY[0x87F7E8][29498] = 0; /*0x434afe*/
    return this; /*0x434afc*/
  }
}


// ==== 0x00434B40  sub_434B40  this=unknown  sig=csp ====
int __stdcall sub_434B40(AbstractClass *aP0, int *a1, unsigned __int16 aP1, int xLeft, int yTop)
{
  int v5; // edi

  if ( !aP0 ) /*0x434b4c*/
    return xLeft; /*0x434b89*/
  FontRenderer::InitContext(aP0, a1); /*0x434b56*/
  Field::Int_Set(aP0, (AbstractClass *)xLeft); /*0x434b5e*/
  v5 = FontClass::RenderGlyph( /*0x434b7a*/
         (int)aP0,
         (AbstractClass *)aP1,
         (AbstractClass *)xLeft,
         (AbstractClass *)yTop,
         (AbstractClass *)0xFFFFFFFF);
  BufferIO::Cleanup(aP0, (AbstractClass *)a1); /*0x434b7c*/
  return v5; /*0x434b84*/
}


// ==== 0x00434B90  FontRenderer::DrawText  this=int  sig=csp ====
int __stdcall FontRenderer::DrawText(
        AbstractClass *aP0,
        int *a1,
        unsigned __int16 *a2,
        int xLeft,
        int yTop,
        int aP4,
        int a7)
{
  int v7; // edi

  if ( !aP0 ) /*0x434b9c*/
    return xLeft; /*0x434be1*/
  FontRenderer::InitContext(aP0, a1); /*0x434ba6*/
  Field::Int_Set(aP0, (AbstractClass *)xLeft); /*0x434bae*/
  v7 = FontClass::RenderText((int)aP0, (AbstractClass *)a2, xLeft, yTop, (AbstractClass *)aP4, a7); /*0x434bd2*/
  BufferIO::Cleanup(aP0, (AbstractClass *)a1); /*0x434bd4*/
  return v7; /*0x434bdc*/
}


// ==== 0x00434BF0  sub_434BF0  this=unknown  sig=csp ====
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


// ==== 0x00434CD0  Font::Print  this=int  sig=csp ====
char __stdcall Font::Print(
        AbstractClass *aP0,
        AbstractClass *aP1,
        AbstractClass *aP2,
        int aP1a,
        AbstractClass *aP4,
        AbstractClass *aP5,
        AbstractClass *aP6,
        AbstractClass *aP7,
        AbstractClass *aP8,
        AbstractClass *aP9)
{
  int v10; // edi
  AbstractClass *v11; // ebp
  __int16 v12; // ax
  int v13; // ebx
  ObjectClass *v14; // esi
  AbstractClass *v15; // edx
  AbstractClass *v16; // ecx
  int v17; // eax
  AbstractClass *v18; // ecx
  int v19; // edi
  char *v20; // ebx
  ObjectClass *v21; // eax
  ObjectClass *v22; // eax
  AbstractClass *v23; // ecx
  int referenceCount; // eax
  unsigned __int8 *GlyphDataForChar; // eax
  int eax28; // eax
  AbstractClass *v26; // ecx
  int v28; // eax
  AbstractClass *edx41; // edx
  AbstractClass *v29; // ecx
  int v31; // ebx
  char *v32; // edi
  AbstractClass *ecx43; // ecx
  ObjectClass *v33; // eax
  int v35; // eax
  AbstractClass *v36; // ecx
  int v38; // eax
  AbstractClass *v39; // edx
  char *v40; // ebx
  char *v41; // edi
  AbstractClass *v42; // ecx
  AbstractClass *v43; // eax
  __int16 var30; // [esp+10h] [ebp-30h]
  AbstractClass *v44; // [esp+14h] [ebp-2Ch] BYREF
  AbstractClass *v45; // [esp+18h] [ebp-28h]
  AbstractClass *xLeft; // [esp+1Ch] [ebp-24h]
  int v48; // [esp+20h] [ebp-20h]
  AbstractClass *v49; // [esp+24h] [ebp-1Ch]
  AbstractClass *v50; // [esp+28h] [ebp-18h]
  int v51; // [esp+2Ch] [ebp-14h]
  unsigned __int8 v52[8]; // [esp+30h] [ebp-10h] BYREF
  unsigned __int8 v53[8]; // [esp+38h] [ebp-8h] BYREF
  __int16 aP5a; // [esp+58h] [ebp+18h]

  v10 = 0; /*0x434cdb*/
  if ( !aP0 ) /*0x434cdf*/
    return 0; /*0x434cdf*/
  v11 = aP2; /*0x434ce5*/
  if ( !aP2 ) /*0x434ceb*/
    return 0; /*0x43530a*/
  FontRenderer::InitContext(aP0, (int *)aP1->__pad_0); /*0x434cf8*/
  Field::Int_Set(aP0, (AbstractClass *)aP1a); /*0x434d04*/
  v12 = 0; /*0x434d0f*/
  v13 = 0; /*0x434d11*/
  v14 = (ObjectClass *)*(unsigned __int16 *)aP0[1].__pad_0; /*0x434d13*/
  HIWORD(v15) = HIWORD(aP2); /*0x434d17*/
  v16 = 0; /*0x434d19*/
  v48 = 0; /*0x434d1b*/
  LOWORD(v15) = *(_WORD *)aP2->__pad_0; /*0x434d1f*/
  v51 = 0; /*0x434d22*/
  v49 = 0; /*0x434d29*/
  v45 = 0; /*0x434d2d*/
  v50 = v15; /*0x434d31*/
  if ( (_WORD)v15 ) /*0x434d35*/
  {
LABEL_4:
    switch ( (__int16)v50 ) /*0x434d59*/
    {
      case 9: /*0x434d59*/
        v10 = *(_DWORD *)&aP0[1].__pad_0[4] /*0x434ef7*/
            + v10
            - (*(_DWORD *)&aP0[1].__pad_0[4] + v10) % *(_DWORD *)&aP0[1].__pad_0[4];
        goto LABEL_55; /*0x434ef9*/
      case 10: /*0x434d59*/
      case 13: /*0x434d59*/
        if ( v12 == 13 ) /*0x434d64*/
          goto LABEL_23; /*0x434d64*/
        v17 = 0; /*0x434d6e*/
        if ( (int)aP5 > v10 ) /*0x434d72*/
        {
          if ( ((unsigned __int8)aP7 & 1) != 0 ) /*0x434d7b*/
          {
            v17 = (int)&aP5->__pad_0[-v10] / 2; /*0x434d84*/
          }
          else if ( ((unsigned __int8)aP7 & 2) != 0 ) /*0x434d8b*/
          {
            v17 = (int)&aP5->__pad_0[-v10]; /*0x434d8f*/
          }
        }
        xLeft = (AbstractClass *)(aP1a + v17); /*0x434d97*/
        if ( v11 >= aP2 ) /*0x434da1*/
          goto LABEL_20; /*0x434da1*/
        v18 = aP8; /*0x434da7*/
        v19 = (char *)aP8 - (char *)v45 - 1; /*0x434db7*/
        v20 = &aP9->__pad_0[(char *)v45 - (char *)aP8 + 1]; /*0x434dba*/
        while ( 2 ) /*0x434dc4*/
        {
          ++v20; /*0x434dc4*/
          --v19; /*0x434dca*/
          v45 = (AbstractClass *)((char *)v45 + 1); /*0x434dcb*/
          v21 = v14; /*0x434dd1*/
          if ( !v18 ) /*0x434dd3*/
            goto LABEL_18; /*0x434dd3*/
          if ( (int)v45 >= (int)v18 ) /*0x434ddd*/
            goto LABEL_73; /*0x434ddd*/
          if ( v19 < (int)aP9 ) /*0x434de7*/
          {
            v22 = (ObjectClass *)Palette::6BitTo16Bit( /*0x434e2e*/
                                   &v44,
                                   (unsigned __int8)((unsigned __int16)v14 >> stru_89E138.__pad_14B0[6120]) << stru_89E138.__pad_14B0[6124],
                                   (unsigned __int8)((unsigned __int16)v14 >> stru_89E138.__pad_14B0[6136]) << stru_89E138.__pad_14B0[6140],
                                   (unsigned __int8)((unsigned __int16)v14 >> stru_89E138.__pad_14B0[6128]) << stru_89E138.__pad_14B0[6132]);
            *(_WORD *)v52 = *(_WORD *)v22->__pad_0; /*0x434e3b*/
            v52[2] = v22->__pad_0[2]; /*0x434e4c*/
            Color::Lerp(v52, (ObjectClass *)((_DWORD)v20 * (255 / (int)aP9)), &byte_A80220); /*0x434e59*/
            v21 = (ObjectClass *)PackRGB565(v52[0], v52[1], v52[2]); /*0x434e7c*/
          }
LABEL_18:
          if ( v21 == (ObjectClass *)-1 ) /*0x434e84*/
            goto LABEL_73; /*0x434e84*/
          LOWORD(v18) = *(_WORD *)v11->__pad_0; /*0x434e8e*/
          v11 = (AbstractClass *)((char *)v11 + 2); /*0x434e9e*/
          xLeft = (AbstractClass *)FontClass::RenderGlyph((int)aP0, v18, xLeft, aP4, (AbstractClass *)v21); /*0x434ea6*/
          if ( v11 < aP2 ) /*0x434eb0*/
          {
            v18 = aP8; /*0x434dc0*/
            continue; /*0x434dc0*/
          }
          break;
        }
LABEL_20:
        v23 = aP0; /*0x434eb6*/
        v10 = 0; /*0x434ebe*/
        v13 = 0; /*0x434ec0*/
        referenceCount = aP0->referenceCount; /*0x434ec2*/
        v48 += referenceCount; /*0x434ec7*/
        if ( aP6 && v48 >= (int)aP6 ) /*0x434ed7*/
          goto LABEL_57; /*0x434ed7*/
        aP4 = (AbstractClass *)((char *)aP4 + referenceCount); /*0x434edd*/
LABEL_23:
        v11 = (AbstractClass *)((char *)v11 + 2); /*0x434ee1*/
        goto LABEL_55; /*0x434ee4*/
      case 32: /*0x434d59*/
        v51 = v10; /*0x434f02*/
        v49 = aP2; /*0x434f06*/
        goto LABEL_26; /*0x434f06*/
      default:
LABEL_26:
        GlyphDataForChar = (unsigned __int8 *)Font::GetGlyphDataForChar(aP0, v50); /*0x434f0a*/
        if ( !GlyphDataForChar ) /*0x434f1a*/
        {
          GlyphDataForChar = (unsigned __int8 *)Font::GetGlyphDataForChar(aP0, (AbstractClass *)0x3F); /*0x434f22*/
          if ( !GlyphDataForChar ) /*0x434f29*/
            goto LABEL_55; /*0x434f29*/
        }
        ++v13; /*0x434f37*/
        eax28 = *GlyphDataForChar + *(_DWORD *)&aP0[1].__pad_0[8]; /*0x434f3b*/
        v10 += eax28; /*0x434f41*/
        if ( !aP5 || v10 <= (int)aP5 ) /*0x434f4d*/
          goto LABEL_55; /*0x434f4d*/
        v26 = v49; /*0x434f53*/
        if ( v49 ) /*0x434f59*/
        {
          if ( v13 > 1 ) /*0x434f5e*/
          {
            v10 = v51; /*0x434f60*/
            aP2 = v49; /*0x434f64*/
          }
        }
        else if ( v13 > 1 ) /*0x434f6d*/
        {
          v10 -= eax28; /*0x434f6f*/
          aP2 = (AbstractClass *)((char *)aP2 - 2); /*0x434f78*/
        }
        v28 = 0; /*0x434f80*/
        if ( (int)aP5 > v10 ) /*0x434f84*/
        {
          if ( ((unsigned __int8)aP7 & 1) != 0 ) /*0x434f8d*/
          {
            v28 = (int)&aP5->__pad_0[-v10] / 2; /*0x434f96*/
          }
          else if ( ((unsigned __int8)aP7 & 2) != 0 ) /*0x434f9d*/
          {
            v28 = (int)&aP5->__pad_0[-v10]; /*0x434fa1*/
          }
        }
        xLeft = (AbstractClass *)(aP1a + v28); /*0x434fa9*/
        if ( v11 >= aP2 ) /*0x434fb3*/
          goto LABEL_50; /*0x434fb3*/
        edx41 = aP8; /*0x434fb9*/
        v29 = v45; /*0x434fbd*/
        v31 = (char *)aP8 - (char *)v45 - 1; /*0x434fcb*/
        v32 = &aP9->__pad_0[(char *)v45 - (char *)aP8 + 1]; /*0x434fce*/
        break; /*0x434fd2*/
    }
    while ( 1 ) /*0x434fdc*/
    {
      ecx43 = (AbstractClass *)&v29->__pad_0[1]; /*0x434fdc*/
      ++v32; /*0x434fdd*/
      --v31; /*0x434fde*/
      v45 = ecx43; /*0x434fdf*/
      v33 = v14; /*0x434fe5*/
      if ( edx41 ) /*0x434fe7*/
      {
        if ( (int)ecx43 >= (int)edx41 ) /*0x434fef*/
          break; /*0x434fef*/
        if ( v31 < (int)aP9 ) /*0x434ff9*/
        {
          LOBYTE(var30) = (unsigned __int8)((unsigned __int16)v14 >> stru_89E138.__pad_14B0[6120]) << stru_89E138.__pad_14B0[6124]; /*0x435028*/
          HIBYTE(var30) = (unsigned __int8)((unsigned __int16)v14 >> stru_89E138.__pad_14B0[6136]) << stru_89E138.__pad_14B0[6140]; /*0x435035*/
          *(_WORD *)v53 = var30; /*0x43504b*/
          v53[2] = (unsigned __int8)((unsigned __int16)v14 >> stru_89E138.__pad_14B0[6128]) << stru_89E138.__pad_14B0[6132]; /*0x435054*/
          Color::Lerp(v53, (ObjectClass *)((_DWORD)v32 * (255 / (int)aP9)), &byte_A80220); /*0x435066*/
          HIWORD(ecx43) = *(_WORD *)&stru_89E138.__pad_14B0[6122]; /*0x4350b2*/
          v33 = (ObjectClass *)((v53[0] >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120]) /*0x4350ba*/
                              | (v53[2] >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128])
                              | (v53[1] >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136]));
        }
      }
      if ( v33 == (ObjectClass *)-1 ) /*0x4350bf*/
        break; /*0x4350bf*/
      LOWORD(ecx43) = *(_WORD *)v11->__pad_0; /*0x4350c9*/
      v11 = (AbstractClass *)((char *)v11 + 2); /*0x4350d9*/
      xLeft = (AbstractClass *)FontClass::RenderGlyph((int)aP0, ecx43, xLeft, aP4, (AbstractClass *)v33); /*0x4350e1*/
      if ( v11 >= aP2 ) /*0x4350eb*/
      {
        v26 = v49; /*0x4350f1*/
LABEL_50:
        if ( aP2 == v26 ) /*0x4350f9*/
        {
          v49 = 0; /*0x4350fb*/
          v11 = (AbstractClass *)((char *)v11 + 2); /*0x435103*/
        }
        v23 = aP0; /*0x435106*/
        v10 = 0; /*0x43510e*/
        v13 = 0; /*0x435110*/
        v35 = aP0->referenceCount; /*0x435112*/
        v48 += v35; /*0x435117*/
        if ( aP6 && v48 >= (int)aP6 ) /*0x435127*/
        {
LABEL_57:
          BufferIO::Cleanup(v23, aP1); /*0x43514d*/
          return 1; /*0x435160*/
        }
        aP4 = (AbstractClass *)((char *)aP4 + v35); /*0x435129*/
LABEL_55:
        v12 = (__int16)v50; /*0x43512d*/
        v36 = (AbstractClass *)&aP2->__pad_0[2]; /*0x435135*/
        aP2 = v36; /*0x435138*/
        LOWORD(v36) = *(_WORD *)v36->__pad_0; /*0x43513c*/
        v50 = v36; /*0x435142*/
        if ( !(_WORD)v36 ) /*0x435146*/
        {
          v16 = v45; /*0x435163*/
          goto LABEL_59; /*0x435163*/
        }
        goto LABEL_4; /*0x435146*/
      }
      edx41 = aP8; /*0x434fd4*/
      v29 = v45; /*0x434fd8*/
    }
  }
  else
  {
LABEL_59:
    v38 = 0; /*0x435167*/
    if ( (int)aP5 > v10 ) /*0x43516f*/
    {
      if ( ((unsigned __int8)aP7 & 1) != 0 ) /*0x435178*/
      {
        v38 = (int)&aP5->__pad_0[-v10] / 2; /*0x435181*/
      }
      else if ( ((unsigned __int8)aP7 & 2) != 0 ) /*0x435188*/
      {
        v38 = (int)&aP5->__pad_0[-v10]; /*0x43518c*/
      }
    }
    xLeft = (AbstractClass *)(aP1a + v38); /*0x435194*/
    if ( v11 < aP2 ) /*0x43519e*/
    {
      v39 = aP8; /*0x4351a4*/
      v40 = (char *)((char *)aP8 - (char *)v16 - 1); /*0x4351b2*/
      v41 = &aP9->__pad_0[(char *)v16 - (char *)aP8 + 1]; /*0x4351b5*/
      while ( 1 ) /*0x4351b9*/
      {
        v42 = (AbstractClass *)&v16->__pad_0[1]; /*0x4351b9*/
        ++v41; /*0x4351ba*/
        --v40; /*0x4351bb*/
        v45 = v42; /*0x4351bc*/
        v43 = (AbstractClass *)v14; /*0x4351c2*/
        if ( v39 ) /*0x4351c4*/
        {
          if ( (int)v42 >= (int)v39 ) /*0x4351cc*/
            break; /*0x4351cc*/
          if ( (int)v40 < (int)aP9 ) /*0x4351d6*/
          {
            LOBYTE(aP5a) = (unsigned __int8)((unsigned __int16)v14 >> stru_89E138.__pad_14B0[6120]) << stru_89E138.__pad_14B0[6124]; /*0x435205*/
            HIBYTE(aP5a) = (unsigned __int8)((unsigned __int16)v14 >> stru_89E138.__pad_14B0[6136]) << stru_89E138.__pad_14B0[6140]; /*0x435212*/
            *(_WORD *)v53 = aP5a; /*0x435228*/
            v53[2] = (unsigned __int8)((unsigned __int16)v14 >> stru_89E138.__pad_14B0[6128]) << stru_89E138.__pad_14B0[6132]; /*0x435231*/
            Color::Lerp(v53, (ObjectClass *)((_DWORD)v41 * (255 / (int)aP9)), &byte_A80220); /*0x435243*/
            HIWORD(v42) = *(_WORD *)&stru_89E138.__pad_14B0[6122]; /*0x43528f*/
            v43 = (AbstractClass *)((v53[0] >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120]) /*0x435297*/
                                  | (v53[2] >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128])
                                  | (v53[1] >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136]));
          }
        }
        if ( v43 == (AbstractClass *)-1 ) /*0x43529c*/
          break; /*0x43529c*/
        LOWORD(v42) = *(_WORD *)v11->__pad_0; /*0x4352a2*/
        v11 = (AbstractClass *)((char *)v11 + 2); /*0x4352b2*/
        xLeft = (AbstractClass *)FontClass::RenderGlyph((int)aP0, v42, xLeft, aP4, v43); /*0x4352ba*/
        if ( v11 >= aP2 ) /*0x4352c4*/
          break; /*0x4352c4*/
        v16 = v45; /*0x4352c6*/
        v39 = aP8; /*0x4352ca*/
      }
    }
  }
LABEL_73:
  BufferIO::Cleanup(aP0, aP1); /*0x4352ed*/
  return 1; /*0x435157*/
}


// ==== 0x00435340  sub_435340  this=unknown  sig=csp ====
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


// ==== 0x004353F0  sub_4353F0  this=unknown  sig=csp ====
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
BitTextClass *__thiscall BufferIOFileClass::Constructor_BitText(_DWORD *Block, char a2)
{
  BitFont *v3; // esi

  *Block = &vt_BitText; /*0x435564*/
  v3 = (BitFont *)aP0; /*0x43556a*/
  if ( aP0 ) /*0x435572*/
    (**(void (__thiscall ***)(int, int))aP0)(aP0, 1); /*0x43557a*/
  if ( v3 == (BitFont *)aP0 ) /*0x435582*/
    aP0 = 0; /*0x435584*/
  if ( (a2 & 1) != 0 ) /*0x435593*/
    __3_YAXPAX_Z(Block); /*0x435596*/
  return (BitTextClass *)Block; /*0x4355a0*/
}


// ==== 0x004355B0  Palette::6BitTo16Bit  this=ConvertClass  sig=csp ====
_BYTE *__thiscall Palette_6BitTo16Bit(_BYTE *this, char a2, char a3, char a4)
{
  *this = a2; /*0x4355ba*/
  *(this + 1) = a3; /*0x4355c0*/
  *(this + 2) = a4; /*0x4355c3*/
  return this; /*0x4355c6*/
}


// ==== 0x004355D0  PackRGB565  this=unknown  sig=csp ====
int __fastcall PackRGB565(int a1, int a2, int a3)
{
  return (a1 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x43560b*/
       | (a2 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
       | (a3 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
}


// ==== 0x00435610  sub_435610  this=-  sig=ida-proto ====
void sub_435610()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x43561c*/
  unk_89C4F8 = Math::Sqrt(v0 + v0); /*0x43562e*/
}


// ==== 0x00435640  sub_435640  this=-  sig=ida-proto ====
void sub_435640()
{
  unk_89C548 = unk_89C4F8 / 60.0; /*0x43564c*/
}


// ==== 0x00435660  sub_435660  this=-  sig=ida-proto ====
void sub_435660()
{
  unk_89C530 = 1.0 / unk_89C548; /*0x43566c*/
}


// ==== 0x00435680  sub_435680  this=-  sig=ida-proto ====
void sub_435680()
{
  unk_89C528 = 0.0174532925199433 * 45.0; /*0x43568c*/
}


// ==== 0x004356A0  sub_4356A0  this=-  sig=ida-proto ====
void sub_4356A0()
{
  unk_89C500 = 0.0174532925199433 * 60.0; /*0x4356ac*/
}


// ==== 0x004356C0  sub_4356C0  this=-  sig=ida-proto ====
void sub_4356C0()
{
  unk_89C4D8 = 0.0174532925199433 * 90.0; /*0x4356cc*/
}


// ==== 0x004356E0  sub_4356E0  this=-  sig=ida-proto ====
__int64 sub_4356E0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89C4D8 - unk_89C500); /*0x4356f2*/
  result = Math::RoundToInt(v0 * unk_89C4F8 * 0.5); /*0x435706*/
  unk_89C550 = result; /*0x43570b*/
  return result; /*0x435710*/
}


// ==== 0x00435720  sub_435720  this=-  sig=ida-proto ====
void sub_435720()
{
  unk_89C508 = Math::ArcTan((double)unk_89C550 * 0.00390625); /*0x435737*/
}


// ==== 0x00435750  sub_435750  this=-  sig=ida-proto ====
void sub_435750()
{
  unk_89C520 = Math::ArcTan((double)(2 * unk_89C550) / unk_89C4F8); /*0x435772*/
}


// ==== 0x00435780  sub_435780  this=-  sig=ida-proto ====
__int64 sub_435780()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89C550) + 0.5); /*0x43579b*/
  unk_89C544 = result; /*0x4357a0*/
  return result; /*0x4357a6*/
}


// ==== 0x004357B0  sub_4357B0  this=-  sig=ida-proto ====
int sub_4357B0()
{
  unk_89C4F0 = 0; /*0x4357b2*/
  return 0; /*0x4357be*/
}


// ==== 0x004357C0  sub_4357C0  this=-  sig=ida-proto ====
int sub_4357C0()
{
  unk_89C510 = 0; /*0x4357c2*/
  unk_89C514 = 0; /*0x4357c7*/
  unk_89C518 = 0; /*0x4357cc*/
  return 0; /*0x4357d1*/
}


// ==== 0x004357E0  sub_4357E0  this=-  sig=ida-proto ====
int sub_4357E0()
{
  unk_89C540 = 0; /*0x4357e5*/
  unk_89C538 = 128; /*0x4357ef*/
  unk_89C53C = 128; /*0x4357f4*/
  return 128; /*0x4357f9*/
}


// ==== 0x00435800  sub_435800  this=-  sig=ida-proto ====
int sub_435800()
{
  unk_89C4E0 = 0; /*0x435802*/
  unk_89C4E4 = 0; /*0x435807*/
  unk_89C4E8 = 0; /*0x43580c*/
  unk_89C4EC = 0; /*0x435811*/
  return 0; /*0x435816*/
}


// ==== 0x00435820  BuildingLightClass::CTOR  this=BuildingLightClass  sig=csp ====
BuildingLightClass *__thiscall BuildingLightClass::CTOR(int *this, BuildingClass *aP1)
{
  int v3; // edx
  int v4; // eax
  _DWORD *Value; // eax
  double v6; // st7
  double v7; // st7
  IUnknown *v8; // eax
  int *v9; // eax
  BuildingLightClass *v11; // ecx
  BuildingLightClass *v12; // edx
  BuildingLightClass *ecx8; // ecx
  int v13; // edi
  int v14; // eax
  double v15; // st7
  double v16; // st7
  IUnknown *v17; // eax
  int *v18; // eax
  BuildingLightClass *v20; // edx
  int eax8f; // eax
  int v21; // eax
  CCINIClass *v23; // edx
  bool zf15; // zf
  signed int v24; // eax
  BuildingClass *v27; // [esp-8h] [ebp-68h]
  BuildingClass *v28; // [esp-8h] [ebp-68h]
  BuildingLightClass *_FFFFFFFC; // [esp-4h] [ebp-64h]
  double aP0; // [esp+10h] [ebp-50h]
  int v30; // [esp+18h] [ebp-48h]
  double v31; // [esp+18h] [ebp-48h]
  double v32; // [esp+18h] [ebp-48h]
  double v33; // [esp+20h] [ebp-40h]
  double v34; // [esp+28h] [ebp-38h] BYREF
  double v35; // [esp+30h] [ebp-30h]
  BuildingLightClass *v36; // [esp+3Ch] [ebp-24h]
  BuildingLightClass *v37; // [esp+40h] [ebp-20h]
  BuildingLightClass *v38; // [esp+44h] [ebp-1Ch]
  int v39; // [esp+48h] [ebp-18h] BYREF
  BuildingLightClass *v40; // [esp+4Ch] [ebp-14h]
  BuildingLightClass *v41; // [esp+50h] [ebp-10h]
  _DWORD v42[3]; // [esp+54h] [ebp-Ch] BYREF

  ObjectClass::ctor(this); /*0x43582e*/
  this->fallRate = 0; /*0x43583b*/
  *(this + 45) = 0; /*0x435841*/
  *(this + 46) = unk_89C510; /*0x43584f*/
  *(this + 47) = unk_89C514; /*0x435857*/
  this->nextObject = unk_89C518; /*0x435860*/
  *(this + 49) = unk_89C510; /*0x43586f*/
  *(this + 50) = unk_89C514; /*0x43587b*/
  v3 = unk_89C518; /*0x43587e*/
  this->attachedTag = 0; /*0x435884*/
  *(this + 53) = 0; /*0x43588a*/
  *(this + 51) = v3; /*0x435890*/
  *((_BYTE *)this + 216) = 0; /*0x435896*/
  *(this + 55) = 0; /*0x43589d*/
  this->attachedBomb = 0; /*0x4358a3*/
  *(this + 57) = (int)aP1; /*0x4358a9*/
  *this = (int)&BuildingLightClass::`vftable'; /*0x4358af*/
  *(this + 1) = (int)&BuildingLightClass::`vftable'; /*0x4358b5*/
  *(this + 2) = (int)&BuildingLightClass::`vftable'; /*0x4358bc*/
  *(this + 3) = (int)&vt_BuildingLightClass; /*0x4358c3*/
  if ( dword_8B41A0 < dword_8B4198 /*0x435900*/
    || (unk_8B419D || !dword_8B4198)
    && dword_8B41A4 > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_8B4190 + 8))(
         &dword_8B4190,
         dword_8B4198 + dword_8B41A4,
         0) )
  {
    v4 = dword_8B41A0++; /*0x43590d*/
    *((_DWORD *)unk_8B4194 + v4) = this; /*0x43591c*/
  }
  if ( aP1 ) /*0x435924*/
  {
    v36 = (BuildingLightClass *)aP1->location[0]; /*0x435934*/
    v37 = (BuildingLightClass *)aP1->location[1]; /*0x435940*/
    v30 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1932); /*0x43594d*/
    v38 = (BuildingLightClass *)aP1->location[2]; /*0x435951*/
    Value = ProgressTimer::GetValue(&aP1->target_laser_timer[2], (IUnknown *)((char *)&v34 + 4)); /*0x435967*/
    _FFFFFFFC = v38; /*0x43597d*/
    aP0 = (double)(*(__int16 *)Value - 0x3FFF) * -0.00009587672516830327; /*0x435988*/
    v31 = (double)v30; /*0x43599a*/
    v35 = (double)(int)v37; /*0x4359a2*/
    v6 = Math::SinCos((IUnknown *)LODWORD(aP0)); /*0x4359a6*/
    v27 = (BuildingClass *)Math::RoundToInt(v35 - v6 * v31); /*0x4359bf*/
    v7 = Math::ArcTan2((IUnknown *)LODWORD(aP0)); /*0x4359c6*/
    v8 = (IUnknown *)Math::RoundToInt(v7 * v31 + (double)(int)v36); /*0x4359d6*/
    v9 = Coord3D::Set(v42, v8, (MouseClass *)v27, (int)_FFFFFFFC); /*0x4359e0*/
    v39 = *v9; /*0x4359e9*/
    v40 = (BuildingLightClass *)v9[1]; /*0x4359f0*/
    v11 = v40; /*0x4359ed*/
    v12 = (BuildingLightClass *)v9[2]; /*0x4359f4*/
    *(this + 49) = v39; /*0x4359f7*/
    *(this + 50) = (int)v11; /*0x4359fd*/
    v41 = v12; /*0x435a03*/
    *(this + 51) = (int)v12; /*0x435a07*/
    ecx8 = (BuildingLightClass *)aP1->location[1]; /*0x435a0f*/
    v13 = aP1->location[2]; /*0x435a18*/
    v36 = (BuildingLightClass *)aP1->location[0]; /*0x435a1b*/
    v14 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1928); /*0x435a1f*/
    v37 = ecx8; /*0x435a25*/
    LODWORD(v31) = -v14; /*0x435a34*/
    v33 = (double)(*(__int16 *)ProgressTimer::GetValue(&aP1->target_laser_timer[2], (IUnknown *)((char *)&v34 + 4)) /*0x435a54*/
                 - 0x3FFF)
        * -0.00009587672516830327;
    v32 = (double)SLODWORD(v31); /*0x435a65*/
    v35 = (double)(int)v37; /*0x435a6f*/
    v15 = Math::SinCos((IUnknown *)LODWORD(v33)); /*0x435a73*/
    v28 = (BuildingClass *)Math::RoundToInt(v35 - v15 * v32); /*0x435a8c*/
    v16 = Math::ArcTan2((IUnknown *)LODWORD(v33)); /*0x435a8f*/
    v17 = (IUnknown *)Math::RoundToInt(v16 * v32 + (double)(int)v36); /*0x435a9f*/
    v18 = Coord3D::Set(v42, v17, (MouseClass *)v28, v13); /*0x435aa9*/
    *(this + 46) = *v18; /*0x435ab0*/
    *(this + 47) = v18[1]; /*0x435ab5*/
    v20 = (BuildingLightClass *)v18[2]; /*0x435abc*/
    eax8f = *this; /*0x435abf*/
    this->nextObject = (int)v20; /*0x435ac4*/
    (*(void (__thiscall **)(int *, int *))(eax8f + 436))(this, &v39); /*0x435ac7*/
    v39 = *(this + 39); /*0x435ad7*/
    v40 = (BuildingLightClass *)this->owningHouseIndex; /*0x435ae3*/
    v41 = (BuildingLightClass *)*(this + 41); /*0x435aec*/
    if ( (unsigned __int8)ObjectClass::Deploy((#374 *)this) ) /*0x435af0*/
      ObjectClass::SetDeployState((ObjectClass *)this, 0); /*0x435b01*/
    BuildingLightClass::FindTarget(this, (CCINIClass *)1); /*0x435b0a*/
    v21 = 0; /*0x435b15*/
    if ( dword_8B41A0 <= 0 ) /*0x435b19*/
    {
LABEL_14:
      v21 = -1; /*0x435b2d*/
    }
    else
    {
      v23 = (CCINIClass *)unk_8B4194; /*0x435b1b*/
      while ( *(int **)v23->__pad_0 != this ) /*0x435b23*/
      {
        ++v21; /*0x435b25*/
        v23 = (CCINIClass *)((char *)v23 + 4); /*0x435b26*/
        if ( v21 >= dword_8B41A0 ) /*0x435b2b*/
          goto LABEL_14; /*0x435b2b*/
      }
    }
    v24 = v21 & 0x80000001; /*0x435b30*/
    zf15 = v24 == 0; /*0x435b30*/
    if ( v24 < 0 ) /*0x435b35*/
      zf15 = (((_BYTE)v24 - 1) | 0xFFFFFFFE) == -1; /*0x435b3b*/
    *((_BYTE *)this + 216) = !zf15; /*0x435b3f*/
  }
  return (BuildingLightClass *)this; /*0x435b47*/
}


// ==== 0x00435BE0  BuildingLightClass::Draw_Start  this=BuildingLightClass  sig=csp ====
char __thiscall BuildingLightClass::Draw_Start(int *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  _BYTE *v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // edi
  _DWORD *v9; // eax
  int *v10; // eax
  double v11; // st7
  int v12; // ebp
  _DWORD *v13; // edi
  _DWORD *v14; // eax
  int *v15; // eax
  int v16; // ebx
  int v17; // edi
  int v18; // eax
  _DWORD *v19; // edi
  int *v20; // edi
  int v21; // ebp
  int *v22; // ecx
  int v23; // eax
  int *v24; // eax
  int v25; // ebx
  int v26; // eax
  _DWORD *v27; // eax
  float *v28; // eax
  int v29; // eax
  float *v30; // eax
  double v31; // st7
  float v32; // edx
  int v33; // eax
  double v34; // st7
  int v35; // ebp
  int v36; // eax
  double v37; // st7
  int v38; // esi
  int v39; // eax
  float *v40; // eax
  float v41; // ecx
  int v42; // esi
  int v43; // ebp
  int v44; // esi
  int v45; // eax
  int v46; // esi
  int v47; // ecx
  int v48; // edi
  int v49; // ebx
  int v50; // ebp
  int v51; // eax
  int v52; // ebp
  int v53; // eax
  float v55; // [esp+1Ch] [ebp-D8h]
  float v56; // [esp+1Ch] [ebp-D8h]
  float v57; // [esp+30h] [ebp-C4h]
  _DWORD *Block; // [esp+34h] [ebp-C0h]
  void *Blocka; // [esp+34h] [ebp-C0h]
  float Blockb; // [esp+34h] [ebp-C0h]
  float v61; // [esp+38h] [ebp-BCh] BYREF
  float v62; // [esp+3Ch] [ebp-B8h]
  float v63; // [esp+40h] [ebp-B4h]
  int v64; // [esp+44h] [ebp-B0h]
  int v65; // [esp+48h] [ebp-ACh] BYREF
  int v66; // [esp+4Ch] [ebp-A8h]
  int v67; // [esp+50h] [ebp-A4h]
  int v68; // [esp+54h] [ebp-A0h] BYREF
  int v69; // [esp+58h] [ebp-9Ch]
  int v70; // [esp+5Ch] [ebp-98h]
  int v71; // [esp+60h] [ebp-94h] BYREF
  int v72; // [esp+64h] [ebp-90h]
  int v73; // [esp+68h] [ebp-8Ch] BYREF
  float v74; // [esp+6Ch] [ebp-88h]
  int v75; // [esp+70h] [ebp-84h] BYREF
  float v76; // [esp+74h] [ebp-80h]
  float v77; // [esp+78h] [ebp-7Ch]
  int v78[2]; // [esp+7Ch] [ebp-78h] BYREF
  float v79[3]; // [esp+84h] [ebp-70h] BYREF
  double v80; // [esp+90h] [ebp-64h] BYREF
  _DWORD v81[3]; // [esp+9Ch] [ebp-58h] BYREF
  _DWORD v82[3]; // [esp+A8h] [ebp-4Ch] BYREF
  float v83[4]; // [esp+B4h] [ebp-40h] BYREF
  float v84[12]; // [esp+C4h] [ebp-30h] BYREF

  v4 = *(this + 55); /*0x435bec*/
  if ( v4 )
  {
    v5 = *(this + 57); /*0x435bfa*/
    if ( v5 )
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5); /*0x435c0a*/
      if ( v4 == 6 )
      {
        v6 = (_BYTE *)*(this + 57); /*0x435c16*/
        if ( v6 )
        {
          LOBYTE(v4) = v6[144]; /*0x435c24*/
          if ( (_BYTE)v4 )
          {
            LOBYTE(v4) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 848))(*(this + 57)); /*0x435c36*/
            if ( (_BYTE)v4 )
            {
              LOBYTE(v4) = v6[1767]; /*0x435c44*/
              if ( !(_BYTE)v4 )
              {
                if ( (*(_DWORD *)MEMORY[0xA8B230] & 0x1000) == 0
                  || (v61 = *((float *)this + 39),
                      v62 = *((float *)this + 40),
                      v63 = *((float *)this + 41),
                      LOBYTE(v4) = Game::Stub3((int)&v61),
                      !(_BYTE)v4) )
                {
                  v7 = __2_YAPAXI_Z(0x18u); /*0x435c95*/
                  if ( v7 ) /*0x435c9f*/
                    Block = ObjectClass::RegisterInArray(v7, *(this + 39), this->owningHouseIndex, *(this + 41), 16); /*0x435cc5*/
                  else
                    Block = 0; /*0x435ccb*/
                  v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)*(this + 57) + 72))( /*0x435ce5*/
                                   *(this + 57),
                                   &v68);
                  v9 = (_DWORD *)(*(int (__thiscall **)(int *, float *))(*this + 72))(this, &v61); /*0x435cee*/
                  v10 = Vector3::Subtract(v9, &v65, v8); /*0x435cf9*/
                  v11 = Math::Sqrt( /*0x435d22*/
                          (double)*v10 * (double)*v10
                        + (double)v10[1] * (double)v10[1]
                        + (double)v10[2] * (double)v10[2]);
                  v12 = Math::RoundToInt(v11); /*0x435d35*/
                  v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)*(this + 57) + 72))( /*0x435d43*/
                                    *(this + 57),
                                    &v68);
                  v14 = (_DWORD *)(*(int (__thiscall **)(int *, float *))(*this + 72))(this, &v61); /*0x435d4c*/
                  v15 = Vector3::Subtract(v14, &v65, v13); /*0x435d57*/
                  v16 = Coord::Length(v15); /*0x435d63*/
                  v17 = MEMORY[0x8871E0]->NodGateOne[1]; /*0x435d6a*/
                  if ( v16 >= v17 ) /*0x435d72*/
                    v64 = (v16 - v17) / ((MEMORY[0x8871E0]->NodGateOne[0] - v17) / 10); /*0x435da0*/
                  else
                    v64 = 0; /*0x435d74*/
                  if ( v12 > v17 && *(this + 55) == 3 )
                  {
                    v18 = v64 + 80 <= 0 ? 0 : v64 + 80;
                    if ( v18 >= 89 ) /*0x435dc5*/
                      v18 = 89; /*0x435dc7*/
                    v19 = Block; /*0x435dcc*/
                    Block[3] = v18; /*0x435dd0*/
                  }
                  else
                  {
                    v19 = Block; /*0x435dd9*/
                    Block[3] = 80; /*0x435ddb*/
                  }
                  BuildingLight::CalculateShading(v19); /*0x435de4*/
                  if ( v19 ) /*0x435deb*/
                  {
                    BuildingLightQueue::RemoveEntry(v19); /*0x435def*/
                    __3_YAXPAX_Z(v19); /*0x435df5*/
                  }
                  v20 = this + 39; /*0x435dfd*/
                  v21 = *(this + 39); /*0x435e05*/
                  v69 = this->owningHouseIndex; /*0x435e0a*/
                  v22 = (int *)*(this + 57); /*0x435e0e*/
                  v23 = *v22; /*0x435e17*/
                  v70 = *(this + 41); /*0x435e19*/
                  v24 = (int *)(*(int (__thiscall **)(int *, float *))(v23 + 72))(v22, &v61); /*0x435e22*/
                  v65 = *v24; /*0x435e27*/
                  v66 = v24[1]; /*0x435e35*/
                  v25 = v24[2]; /*0x435e39*/
                  v26 = *this; /*0x435e3c*/
                  v67 = v25; /*0x435e3e*/
                  v27 = (_DWORD *)(*(int (__thiscall **)(int *, double *))(v26 + 72))(this, &v80); /*0x435e42*/
                  v28 = (float *)Coord::Subtract(v83, *v27 - v65, v27[1] - v66, v27[2] - v25); /*0x435e65*/
                  v61 = *v28; /*0x435e6c*/
                  v62 = v28[1]; /*0x435e77*/
                  v63 = v28[2]; /*0x435e7e*/
                  Blocka = (void *)Coord::Length((int *)&v61); /*0x435e89*/
                  v29 = BuildingLightClass::CalculateDistanceIntensity((_DWORD **)this); /*0x435e8d*/
                  v4 = MEMORY[0x8871E0]->BuildWeapons[0] + Math::RoundToInt((double)v29 * 5.973333333333333); /*0x435eb5*/
                  if ( (int)Blocka >= v4 ) /*0x435ebd*/
                  {
                    v80 = BuildingLight::CalcIntensity((double)v4 / (double)(int)Blocka); /*0x435ed6*/
                    Matrix3x4::Identity(v84); /*0x435ee4*/
                    v55 = v80; /*0x435ef5*/
                    Matrix2D::Rotate(v84, v55); /*0x435ef8*/
                    v79[0] = (float)(v21 - v65); /*0x435f23*/
                    v79[1] = (float)(v69 - v66); /*0x435f3e*/
                    v79[2] = (float)(v70 - v25); /*0x435f46*/
                    v30 = TransformMatrix3x4Point(v83, v84, v79); /*0x435f4a*/
                    v31 = (double)v65; /*0x435f51*/
                    v32 = v30[1]; /*0x435f55*/
                    v61 = *v30; /*0x435f58*/
                    v62 = v32; /*0x435f5c*/
                    Blockb = v31; /*0x435f60*/
                    v63 = v30[2]; /*0x435f6b*/
                    v33 = Math::RoundToInt(v31 + v61); /*0x435f6f*/
                    v34 = (double)v66; /*0x435f74*/
                    v35 = v33; /*0x435f78*/
                    v77 = v34; /*0x435f7a*/
                    v36 = Math::RoundToInt(v34 + v62); /*0x435f82*/
                    v37 = (double)v67; /*0x435f87*/
                    v38 = v36; /*0x435f8b*/
                    v57 = v37; /*0x435f8d*/
                    v39 = Math::RoundToInt(v37 + v63); /*0x435f95*/
                    v82[0] = v35; /*0x435fa1*/
                    v82[1] = v38; /*0x435fa8*/
                    v82[2] = v39; /*0x435faf*/
                    Matrix3x4::Identity(v84); /*0x435fb6*/
                    v56 = -v80; /*0x435fc9*/
                    Matrix2D::Rotate(v84, v56); /*0x435fcc*/
                    v40 = TransformMatrix3x4Point(v83, v84, v79); /*0x435fe4*/
                    v41 = v40[1]; /*0x435fef*/
                    v61 = *v40; /*0x435ff2*/
                    v62 = v41; /*0x435ff6*/
                    v63 = v40[2]; /*0x435ffd*/
                    v42 = Math::RoundToInt(Blockb + v61); /*0x436012*/
                    v43 = Math::RoundToInt(v77 + v62); /*0x436021*/
                    v81[2] = Math::RoundToInt(v57 + v63); /*0x436028*/
                    v81[0] = v42; /*0x436042*/
                    v81[1] = v43; /*0x436049*/
                    Coord::To_Screen(MEMORY[0x887324], v82, &v75); /*0x436050*/
                    Coord::To_Screen(MEMORY[0x887324], v81, &v73); /*0x436065*/
                    v68 = v65; /*0x436078*/
                    v70 = v25 + 430; /*0x43607c*/
                    v69 = v66; /*0x436090*/
                    Coord::To_Screen(MEMORY[0x887324], &v68, &v71); /*0x436094*/
                    v75 += MEMORY[0x886FA0]; /*0x4360ae*/
                    LODWORD(v74) += MEMORY[0x886FA4]; /*0x4360be*/
                    v72 += MEMORY[0x886FA4]; /*0x4360d0*/
                    v78[1] = v72; /*0x4360d4*/
                    LODWORD(v76) += MEMORY[0x886FA4]; /*0x4360de*/
                    v73 += MEMORY[0x886FA0]; /*0x4360e2*/
                    v71 += MEMORY[0x886FA0]; /*0x4360e6*/
                    v78[0] = v71; /*0x4360ea*/
                    v44 = ZCoordToScreenY(v25 + 400); /*0x4360f5*/
                    v45 = v20[1]; /*0x4360f7*/
                    v46 = -v44; /*0x4360fd*/
                    v47 = v20[2] + 250; /*0x4360ff*/
                    v68 = *v20; /*0x436105*/
                    v69 = v45; /*0x436109*/
                    v48 = -(int)ZCoordToScreenY(v47); /*0x436121*/
                    if ( ClipLine(&v71, &v75, &MEMORY[0x886FA0]) ) /*0x436123*/
                    {
                      v49 = v64; /*0x43612c*/
                      v50 = *(_DWORD *)MEMORY[0x887314]; /*0x436140*/
                      v51 = (*(int (__thiscall **)(int, float *, int *, int *, int, int, int, _DWORD))(*(_DWORD *)MEMORY[0x887314] + 120))( /*0x43615b*/
                              MEMORY[0x887314],
                              v83,
                              &v71,
                              &v75,
                              75 - 6 * v64,
                              v46,
                              v48,
                              0);
                      (*(void (__thiscall **)(int, int))(v50 + 56))(MEMORY[0x887314], v51); /*0x436165*/
                    }
                    else
                    {
                      v49 = v64; /*0x43616a*/
                    }
                    LOBYTE(v4) = ClipLine(v78, &v73, &MEMORY[0x886FA0]); /*0x43617b*/
                    if ( (_BYTE)v4 ) /*0x436182*/
                    {
                      v52 = *(_DWORD *)MEMORY[0x887314]; /*0x43618f*/
                      v53 = (*(int (__thiscall **)(int, float *, int *, int *, int, int, int, _DWORD))(*(_DWORD *)MEMORY[0x887314] + 120))( /*0x4361af*/
                              MEMORY[0x887314],
                              v83,
                              v78,
                              &v73,
                              75 - 6 * v49,
                              v46,
                              v48,
                              0);
                      LOBYTE(v4) = (*(int (__thiscall **)(int, int))(v52 + 56))(MEMORY[0x887314], v53); /*0x4361b9*/
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
  return v4; /*0x4361bc*/
}


// ==== 0x004361D0  BuildingLightClass::SD_vt23  this=BuildingLightClass  sig=csp ====
char __thiscall BuildingLightClass::SD_vt23(int **this)
{
  ObjectClass *v2; // ecx
  int **v3; // eax
  int *v4; // ebx
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  int v7; // ebp
  BuildingTypeClass *v8; // ecx
  int v9; // edx
  int v10; // eax
  float v11; // eax
  double v12; // st7
  int *v13; // ebx
  int v14; // ecx
  int *v15; // eax
  int *location; // ecx
  ObjectClass *v17; // esi
  int v18; // ebx
  int v19; // ebp
  double v20; // st7
  unsigned __int8 v22; // c0
  unsigned __int8 v23; // c3
  int v24; // eax
  int v25; // ecx
  float *v26; // eax
  BuildingTypeClass *v27; // esi
  BuildingTypeClass *v28; // ebx
  double v29; // st7
  double v30; // st7
  char v31; // al
  double v33; // st7
  unsigned __int8 v34; // c0
  unsigned __int8 v35; // c3
  double v36; // st7
  double v37; // st7
  double v38; // st7
  int v39; // edx
  int v40; // esi
  int v41; // eax
  float *v42; // eax
  double v43; // st7
  void *attachedTag; // eax
  ObjectClass *v45; // esi
  _DWORD *v46; // esi
  _DWORD *v47; // eax
  IUnknown *v48; // eax
  double v49; // st7
  int v50; // eax
  int v51; // ebp
  int v52; // esi
  int v53; // edx
  ObjectClass *v54; // eax
  _DWORD *nextArrayIndex; // ecx
  __int16 v56; // ax
  int v57; // ebx
  TechnoClass *v58; // esi
  int v59; // edx
  int v60; // ebp
  int v61; // ebx
  int *v62; // eax
  int v63; // ecx
  int v64; // edx
  int v65; // eax
  double v66; // st7
  float v68; // [esp+18h] [ebp-D4h]
  float v69; // [esp+18h] [ebp-D4h]
  BuildingTypeClass *v70; // [esp+30h] [ebp-BCh]
  char v71; // [esp+37h] [ebp-B5h]
  BuildingTypeClass *v72; // [esp+38h] [ebp-B4h] BYREF
  float v73; // [esp+3Ch] [ebp-B0h]
  float v74; // [esp+40h] [ebp-ACh]
  ObjectClass *v75; // [esp+44h] [ebp-A8h] BYREF
  int v76; // [esp+48h] [ebp-A4h]
  int v77; // [esp+4Ch] [ebp-A0h]
  int v78; // [esp+50h] [ebp-9Ch]
  BuildingTypeClass *v79; // [esp+54h] [ebp-98h] BYREF
  BuildingTypeClass *v80; // [esp+58h] [ebp-94h]
  int *v81; // [esp+5Ch] [ebp-90h]
  AbstractClass *aP2; // [esp+60h] [ebp-8Ch]
  BuildingTypeClass *v83; // [esp+64h] [ebp-88h]
  _DWORD v84[3]; // [esp+68h] [ebp-84h] BYREF
  Tactical *v85; // [esp+74h] [ebp-78h]
  _DWORD *v86; // [esp+78h] [ebp-74h]
  int v87; // [esp+7Ch] [ebp-70h] BYREF
  int v88[3]; // [esp+80h] [ebp-6Ch] BYREF
  float v89[3]; // [esp+8Ch] [ebp-60h] BYREF
  _DWORD v90[3]; // [esp+98h] [ebp-54h] BYREF
  float v91[3]; // [esp+A4h] [ebp-48h] BYREF
  float v92[12]; // [esp+B0h] [ebp-3Ch] BYREF
  char v93[12]; // [esp+E0h] [ebp-Ch] BYREF

  v2 = (ObjectClass *)*(this + 57); /*0x4361e4*/
  if ( !v2 || !v2->isAliveFlag ) /*0x4361f2*/
  {
    LOBYTE(attachedTag) = ((char (__thiscall *)(int **))(*this)[62])(this); /*0x4368e5*/
    return (char)attachedTag; /*0x4368e5*/
  }
  if ( *(this + 55) == (int *)1 ) /*0x436207*/
  {
    v30 = *((double *)this + 26) + *((double *)this + 22); /*0x43643f*/
    v31 = *((_BYTE *)this + 216); /*0x436445*/
    *((double *)this + 22) = v30; /*0x43644d*/
    if ( v31 ) /*0x43645f*/
    {
      v33 = *((double *)this + 26); /*0x43646b*/
      if ( !(v34 | v35) ) /*0x436473*/
      {
        v36 = v33 - *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1944); /*0x436478*/
        *((double *)this + 26) = v36; /*0x43647e*/
        if ( v36 < 0.0 ) /*0x43648f*/
        {
          this->attachedTag = 0; /*0x436495*/
          *(this + 53) = 0; /*0x43649b*/
          *((_BYTE *)this + 216) = 0; /*0x4364a1*/
        }
        goto LABEL_28; /*0x4364a8*/
      }
      if ( v33 < *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1936) ) /*0x4364b8*/
      {
        v37 = *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1944) + *((double *)this + 26); /*0x4364c0*/
LABEL_27:
        *((double *)this + 26) = v37; /*0x43652e*/
      }
    }
    else
    {
      if ( v30 < *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1952) * -0.5 ) /*0x4364d7*/
      {
        v38 = *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1944) + *((double *)this + 26); /*0x4364df*/
        *((double *)this + 26) = v38; /*0x4364e5*/
        if ( v38 > 0.0 ) /*0x4364f6*/
        {
          this->attachedTag = 0; /*0x4364f8*/
          *(this + 53) = 0; /*0x4364fe*/
          *((_BYTE *)this + 216) = 1; /*0x436504*/
        }
        goto LABEL_28; /*0x43650b*/
      }
      if ( -*(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1936) < *((double *)this + 26) ) /*0x436520*/
      {
        v37 = *((double *)this + 26) - *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1944); /*0x436528*/
        goto LABEL_27; /*0x436528*/
      }
    }
LABEL_28:
    Matrix3x4::Identity(v92); /*0x436534*/
    v69 = *((double *)this + 22); /*0x43654e*/
    Matrix2D::Rotate(v92, v69); /*0x436551*/
    v39 = (int)*(this + 50); /*0x436562*/
    v40 = (int)*(this + 47); /*0x436568*/
    v41 = (char *)*(this + 51) - (char *)this->nextObject; /*0x436586*/
    *(float *)&v72 = (float)((char *)*(this + 49) - (char *)*(this + 46)); /*0x436590*/
    v73 = (float)(v39 - v40); /*0x4365a8*/
    v74 = (float)v41; /*0x4365b0*/
    v42 = TransformMatrix3x4Point(v89, v92, (float *)&v72); /*0x4365b4*/
    v43 = (double)(int)*(this + 46); /*0x4365bb*/
    v72 = *(BuildingTypeClass **)v42; /*0x4365c1*/
    v73 = v42[1]; /*0x4365c8*/
    v74 = v42[2]; /*0x4365d3*/
    v27 = (BuildingTypeClass *)Math::RoundToInt(v43 + *(float *)&v72); /*0x4365e2*/
    v28 = (BuildingTypeClass *)Math::RoundToInt((double)(int)*(this + 47) + v73); /*0x4365f3*/
    v29 = (double)(int)this->nextObject + v74; /*0x4365f5*/
LABEL_29:
    v15 = (int *)Math::RoundToInt(v29); /*0x4365f9*/
    v79 = v27; /*0x4365fe*/
    v80 = v28; /*0x436602*/
    goto LABEL_30; /*0x436602*/
  }
  if ( *(this + 55) == (int *)2 ) /*0x43620e*/
  {
    location = v2->location; /*0x43632f*/
    v17 = (ObjectClass *)*location; /*0x436335*/
    v75 = (ObjectClass *)*location; /*0x436337*/
    v18 = location[1]; /*0x43633b*/
    v76 = v18; /*0x43633e*/
    v19 = location[2]; /*0x436342*/
    v77 = v19; /*0x43634b*/
    v20 = *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1936) * 4.0 + *((double *)this + 22); /*0x43635b*/
    *((double *)this + 22) = v20; /*0x436367*/
    if ( !(v22 | v23) ) /*0x43636f*/
      *((double *)this + 22) = v20 - 6.283185307179586; /*0x43637a*/
    Matrix3x4::Identity(v92); /*0x43638b*/
    v68 = *((double *)this + 22); /*0x43639e*/
    Matrix2D::Rotate(v92, v68); /*0x4363a1*/
    v24 = (int)*(this + 50); /*0x4363ac*/
    v25 = (int)*(this + 51); /*0x4363b4*/
    *(float *)&v72 = (float)((char *)*(this + 49) - (char *)v17); /*0x4363ce*/
    v73 = (float)(v24 - v18); /*0x4363e9*/
    v74 = (float)(v25 - v19); /*0x4363f1*/
    v26 = TransformMatrix3x4Point(v91, v92, (float *)&v72); /*0x4363f5*/
    v72 = *(BuildingTypeClass **)v26; /*0x436400*/
    v73 = v26[1]; /*0x436407*/
    v74 = v26[2]; /*0x436412*/
    v27 = (BuildingTypeClass *)Math::RoundToInt((double)(int)v75 + *(float *)&v72); /*0x43641f*/
    v28 = (BuildingTypeClass *)Math::RoundToInt((double)v76 + v73); /*0x43642e*/
    v29 = (double)v77 + v74; /*0x436430*/
    goto LABEL_29; /*0x436434*/
  }
  if ( *(this + 55) == (int *)3 ) /*0x436215*/
  {
    v4 = this->attachedBomb; /*0x436222*/
    if ( !v4 ) /*0x43622a*/
      goto LABEL_12; /*0x43622a*/
    if ( !*((_BYTE *)v4 + 144) ) /*0x436230*/
      goto LABEL_12; /*0x436230*/
    v5 = (_DWORD *)(*(int (__thiscall **)(ObjectClass *, char *))(*(_DWORD *)v2->__pad_0 + 72))(v2, v93); /*0x43624d*/
    v6 = (_DWORD *)(*(int (__thiscall **)(int *, ObjectClass **))(*v4 + 72))(v4, &v75); /*0x436256*/
    v7 = v5[1]; /*0x43625d*/
    v8 = (BuildingTypeClass *)(*v6 - *v5); /*0x436260*/
    v9 = v6[1]; /*0x436262*/
    v10 = v6[2]; /*0x436265*/
    v72 = v8; /*0x436268*/
    LODWORD(v11) = v10 - v5[2]; /*0x436271*/
    LODWORD(v73) = v9 - v7; /*0x436273*/
    v74 = v11; /*0x436277*/
    v12 = Math::Sqrt( /*0x4362a3*/
            (double)(int)v8 * (double)(int)v8
          + (double)SLODWORD(v11) * (double)SLODWORD(v11)
          + (double)(v9 - v7) * (double)(v9 - v7));
    if ( (int)Math::RoundToInt(v12) >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1928) ) /*0x4362bc*/
    {
LABEL_12:
      BuildingLightClass::FindTarget(this, (CCINIClass *)1); /*0x436325*/
      goto LABEL_31; /*0x43632a*/
    }
    v13 = v4 + 39; /*0x4362be*/
    v88[0] = *v13; /*0x4362cb*/
    v88[1] = v13[1]; /*0x4362d8*/
    v14 = v13[2]; /*0x4362de*/
    v84[1] = *(this + 39); /*0x4362e1*/
    v88[2] = v14; /*0x4362e5*/
    v84[2] = this->owningHouseIndex; /*0x4362f0*/
    v85 = (Tactical *)*(this + 41); /*0x4362f8*/
    v3 = (int **)Color::RGBFromFloat(v90, (IUnknown *)v88, 0.25); /*0x436307*/
  }
  else
  {
    v3 = this + 39; /*0x436217*/
  }
  v79 = (BuildingTypeClass *)*v3; /*0x43630e*/
  v80 = (BuildingTypeClass *)v3[1]; /*0x436315*/
  v15 = v3[2]; /*0x436319*/
LABEL_30:
  v81 = v15; /*0x436606*/
LABEL_31:
  ((void (__thiscall *)(int **, BuildingTypeClass **))(*this)[109])(this, &v79); /*0x43660a*/
  attachedTag = (void *)(*(int (__thiscall **)(_DWORD))(**(this + 57) + 44))(*(this + 57)); /*0x436621*/
  if ( attachedTag == (void *)6 ) /*0x436627*/
  {
    v45 = (ObjectClass *)*(this + 57); /*0x436629*/
    aP2 = (AbstractClass *)v45; /*0x43662f*/
  }
  else
  {
    aP2 = 0; /*0x436635*/
    v45 = 0; /*0x43663d*/
  }
  if ( *(this + 55) == (int *)1 ) /*0x436648*/
  {
    if ( v45 ) /*0x436650*/
    {
      LOBYTE(attachedTag) = v45->isAliveFlag; /*0x436656*/
      if ( (_BYTE)attachedTag ) /*0x43665e*/
      {
        LOBYTE(attachedTag) = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v45->__pad_0 + 848))(v45); /*0x436668*/
        if ( (_BYTE)attachedTag ) /*0x436670*/
        {
          attachedTag = v45->attachedTag; /*0x436676*/
          if ( attachedTag ) /*0x43667b*/
          {
            v71 = 0; /*0x43668a*/
            v72 = *(BuildingTypeClass **)((int (__thiscall *)(int **, _DWORD *))(*this)[110])(this, v84); /*0x43669b*/
            v46 = (_DWORD *)(*(int (__thiscall **)(_DWORD, float *))(**(this + 57) + 72))(*(this + 57), v89); /*0x4366ad*/
            v47 = (_DWORD *)((int (__thiscall *)(int **, float *))(*this)[18])(this, v91); /*0x4366b9*/
            v48 = Coord::Subtract( /*0x4366dc*/
                    v90,
                    (IUnknown *)(*v47 - *v46),
                    (IUnknown *)(v47[1] - v46[1]),
                    (IUnknown *)(v47[2] - v46[2]));
            v75 = (ObjectClass *)v48->field_0; /*0x4366e6*/
            v76 = v48->field_4; /*0x4366ed*/
            v77 = v48->field_8; /*0x4366f8*/
            v49 = Math::Sqrt((double)(int)v75 * (double)(int)v75 + (double)v77 * (double)v77 + (double)v76 * (double)v76); /*0x43671d*/
            v50 = Math::RoundToInt(v49); /*0x436725*/
            v51 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108]; /*0x43672a*/
            v52 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1932); /*0x436732*/
            if ( v50 >= v52 ) /*0x43673a*/
              v78 = (v50 - v52) / ((*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1928) - v52) / 10); /*0x436768*/
            else
              v78 = 0; /*0x43673c*/
            v53 = Math::RoundToInt((double)v78 * 5.973333333333333) + *(_DWORD *)(v51 + 1960) + 30; /*0x436781*/
            v54 = (ObjectClass *)*(this + 57); /*0x436785*/
            v84[0] = v53; /*0x43678b*/
            nextArrayIndex = (_DWORD *)v54[3].nextArrayIndex; /*0x43678f*/
            v56 = -1; /*0x436795*/
            v86 = nextArrayIndex; /*0x436798*/
            v70 = (BuildingTypeClass *)-1; /*0x43679c*/
            do /*0x4368b1*/
            {
              v57 = -1; /*0x4367a4*/
              v83 = (BuildingTypeClass *)-1; /*0x4367a9*/
              LOWORD(v78) = (_WORD)v72 + v56; /*0x4367ad*/
              do /*0x43689f*/
              {
                HIWORD(v78) = v57 + HIWORD(v72); /*0x4367bd*/
                v87 = v78; /*0x4367c6*/
                v58 = (TechnoClass *)*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v87) + 57); /*0x4367d4*/
                if ( v58 ) /*0x4367dc*/
                {
                  do /*0x43688d*/
                  {
                    if ( ((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v58->__pad_0 + 44))(v58) == 15 /*0x436803*/
                       || (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v58->__pad_0 + 44))(v58) == 1)
                      && !Object::IsAlliedWithObjectHouse(v86, (IUnknown *)v58) )
                    {
                      v59 = *(_DWORD *)v58->__pad_0; /*0x436812*/
                      v60 = (int)*(this + 39); /*0x436814*/
                      v61 = (int)this->owningHouseIndex; /*0x436816*/
                      v85 = (Tactical *)*(this + 41); /*0x436820*/
                      v62 = (int *)(*(int (__thiscall **)(TechnoClass *, float *))(v59 + 72))(v58, v89); /*0x436827*/
                      v63 = *v62; /*0x43682a*/
                      v64 = v62[1]; /*0x43682c*/
                      v65 = v62[2]; /*0x43682f*/
                      v75 = (ObjectClass *)(v63 - v60); /*0x436838*/
                      v76 = v64 - v61; /*0x436844*/
                      v77 = v65 - (_DWORD)v85; /*0x436848*/
                      v66 = Math::Sqrt( /*0x436870*/
                              (double)(v65 - (int)v85) * (double)(v65 - (int)v85)
                            + (double)(v64 - v61) * (double)(v64 - v61)
                            + (double)(int)v75 * (double)(int)v75);
                      if ( (int)Math::RoundToInt(v66) < v84[0] ) /*0x436881*/
                        v71 = 1; /*0x436883*/
                    }
                    v58 = (TechnoClass *)v58->nextObject; /*0x436888*/
                  }
                  while ( v58 ); /*0x43688d*/
                  v57 = (int)v83; /*0x436893*/
                }
                v83 = (BuildingTypeClass *)++v57; /*0x43689b*/
              }
              while ( v57 < 2 ); /*0x43689f*/
              v56 = (_WORD)v70 + 1; /*0x4368a9*/
              v70 = (BuildingTypeClass *)((char *)v70 + 1); /*0x4368ad*/
            }
            while ( (int)v70 < 2 ); /*0x4368b1*/
            LOBYTE(attachedTag) = v71; /*0x4368b7*/
            if ( v71 ) /*0x4368bd*/
              LOBYTE(attachedTag) = TeamClass::Update_0((void **)aP2[1].uniqueId, 35, aP2, (IUnknown *)unk_89C4F0, 0, 0); /*0x4368d4*/
          }
        }
      }
    }
  }
  return (char)attachedTag; /*0x4368d9*/
}


// ==== 0x00436900  BuildingLightClass::SD_vt12  this=BuildingLightClass  sig=csp ====
int BuildingLightClass::SD_vt12()
{
  return 232; /*0x436905*/
}


// ==== 0x00436910  BuildingLightClass::SD_vt03  this=BuildingLightClass  sig=csp ====
int __stdcall BuildingLightClass::SD_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x436916*/
    return -2147467261; /*0x436918*/
  *a2 = 1417814616; /*0x436926*/
  a2[1] = 298965160; /*0x43692e*/
  a2[2] = 1610638004; /*0x436937*/
  a2[3] = 2041169559; /*0x436940*/
  return 0; /*0x43691d*/
}


// ==== 0x00436950  BuildingLightClass::SD_vt05  this=BuildingLightClass  sig=csp ====
int __thiscall BuildingLightClass::SD_vt05(void *this, ObjectClass *aP1, int aP1a)
{
  ObjectClass *Register; // edi

  Register = (ObjectClass *)BuildingClass::SaveLoad_Register((#374 *)this); /*0x436961*/
  if ( (int)Register >= 0 ) /*0x436965*/
  {
    if ( aP1 ) /*0x436969*/
    {
      ObjectClass::Init(aP1, (AbstractClass *)&aP1a); /*0x436972*/
      *(_DWORD *)aP1->__pad_0 = &BuildingLightClass::`vftable'; /*0x436977*/
      *(_DWORD *)&aP1->__pad_0[4] = &BuildingLightClass::`vftable'; /*0x43697d*/
      *(_DWORD *)&aP1->__pad_0[8] = &BuildingLightClass::`vftable'; /*0x436984*/
      *(_DWORD *)&aP1->__pad_0[12] = &vt_BuildingLightClass; /*0x43698b*/
    }
    ObjectPtr::RegisterForTracking( /*0x43699e*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP1[1].attachedBomb);
    ObjectPtr::RegisterForTracking( /*0x4369af*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP1[1].attachedTag);
  }
  return (int)Register->__pad_0; /*0x4369b6*/
}


// ==== 0x004369C0  BuildingLightClass::SD_vt06  this=BuildingLightClass  sig=csp ====
int __stdcall BuildingLightClass::SD_vt06(TechnoTypeClass *aP0, int *a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x4369d4*/
}


// ==== 0x004369E0  BuildingLightClass::SD_vt34  this=BuildingLightClass  sig=csp ====
int BuildingLightClass::SD_vt34()
{
  return 0; /*0x4369e2*/
}


// ==== 0x004369F0  BuildingLightClass::SD_vt30  this=BuildingLightClass  sig=csp ====
int BuildingLightClass::SD_vt30()
{
  return 3; /*0x4369f5*/
}


// ==== 0x00436A00  BuildingLightClass::SD_vt10  this=BuildingLightClass  sig=csp ====
int __thiscall BuildingLightClass::SD_vt10(int this, int a2, ObjectClass *aP2)
{
  ObjectClass *result; // eax

  Object::Unlink((#374 *)this); /*0x436a0e*/
  result = 0; /*0x436a19*/
  if ( *(_DWORD *)(this + 224) == a2 ) /*0x436a1d*/
    *(_DWORD *)(this + 224) = 0; /*0x436a1f*/
  if ( *(_DWORD *)(this + 228) == a2 ) /*0x436a2b*/
    *(_DWORD *)(this + 228) = 0; /*0x436a2d*/
  return (int)result->__pad_0; /*0x436a33*/
}


// ==== 0x00436BE0  BuildingLightClass::FindTarget  this=BuildingLightClass  sig=csp ====
_DWORD *__thiscall BuildingLightClass::FindTarget(_DWORD *this, CCINIClass *aP1)
{
  CCINIClass *result; // eax
  BuildingLightClass *v3; // edi
  int v4; // edx
  ObjectClass *v5; // eax
  int v6; // ebx
  TechnoClass *v7; // esi
  int v8; // eax
  int *location; // ecx
  int v10; // edi
  int v11; // ebx
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // edx
  double v15; // st7
  TechnoClass *v16; // eax
  BuildingLightClass *v17; // [esp+1Ch] [ebp-4Ch]
  int v18; // [esp+20h] [ebp-48h]
  TechnoClass *v19; // [esp+24h] [ebp-44h]
  int v21; // [esp+2Ch] [ebp-3Ch]
  TechnoClass *v22; // [esp+30h] [ebp-38h]
  int v23; // [esp+34h] [ebp-34h] BYREF
  _DWORD *nextArrayIndex; // [esp+38h] [ebp-30h] BYREF
  int v25; // [esp+3Ch] [ebp-2Ch]
  int v26; // [esp+44h] [ebp-24h]
  int v27; // [esp+48h] [ebp-20h]
  int v28; // [esp+4Ch] [ebp-1Ch]
  int v29; // [esp+58h] [ebp-10h]
  char v30[12]; // [esp+5Ch] [ebp-Ch] BYREF

  result = aP1; /*0x436be9*/
  v3 = (BuildingLightClass *)this; /*0x436bef*/
  *(this + 44) = 0; /*0x436bfa*/
  this->BehaviourMode = aP1; /*0x436c00*/
  this->__pad_0B4 = 0; /*0x436c06*/
  if ( aP1 == (CCINIClass *)3 ) /*0x436c0c*/
  {
    v4 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD **))(*this + 440))(this, &nextArrayIndex); /*0x436c21*/
    v5 = (ObjectClass *)v3->FollowingObject; /*0x436c23*/
    v25 = v4; /*0x436c29*/
    v19 = (TechnoClass *)&unk_98967F; /*0x436c2d*/
    v22 = 0; /*0x436c3b*/
    nextArrayIndex = (_DWORD *)v5[3].nextArrayIndex; /*0x436c3f*/
    v17 = (BuildingLightClass *)-1; /*0x436c43*/
    do /*0x436d74*/
    {
      v6 = -1; /*0x436c53*/
      v21 = -1; /*0x436c58*/
      LOWORD(v18) = v25 + (_WORD)v17; /*0x436c5c*/
      do /*0x436d62*/
      {
        HIWORD(v18) = v6 + HIWORD(v25); /*0x436c6c*/
        v23 = v18; /*0x436c7b*/
        v7 = (TechnoClass *)*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v23) + 57); /*0x436c84*/
        if ( v7 ) /*0x436c8c*/
        {
          while ( 1 ) /*0x436c98*/
          {
            if ( ((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v7->__pad_0 + 44))(v7) == 15 /*0x436cb9*/
               || (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v7->__pad_0 + 44))(v7) == 1)
              && !Object::IsAlliedWithObjectHouse(nextArrayIndex, (IUnknown *)v7) )
            {
              v8 = *(_DWORD *)v7->__pad_0; /*0x436ccc*/
              location = v3->location; /*0x436cce*/
              v10 = v3->location[0]; /*0x436cd0*/
              v11 = location[1]; /*0x436cd2*/
              v29 = location[2]; /*0x436cdf*/
              v12 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, char *))(v8 + 72))(v7, v30); /*0x436ce3*/
              v13 = v12[1] - v11; /*0x436ced*/
              v26 = *v12 - v10; /*0x436cf3*/
              v14 = v12[2]; /*0x436cf7*/
              v27 = v13; /*0x436cfa*/
              v28 = v14 - v29; /*0x436d07*/
              v15 = Math::Sqrt((double)v26 * (double)v26 + (double)(v14 - v29) * (double)(v14 - v29) + (double)v13 * (double)v13); /*0x436d2c*/
              v16 = (TechnoClass *)Math::RoundToInt(v15); /*0x436d34*/
              if ( (int)v16 < (int)v19 ) /*0x436d3d*/
              {
                v22 = v7; /*0x436d3f*/
                v19 = v16; /*0x436d43*/
              }
            }
            v7 = (TechnoClass *)v7->nextObject; /*0x436d47*/
            if ( !v7 ) /*0x436d4c*/
              break; /*0x436d4c*/
            v3 = (BuildingLightClass *)this; /*0x436c94*/
          }
          v6 = v21; /*0x436d52*/
          v3 = (BuildingLightClass *)this; /*0x436d56*/
        }
        v21 = ++v6; /*0x436d5e*/
      }
      while ( v6 < 2 ); /*0x436d62*/
      v17 = (BuildingLightClass *)((char *)v17 + 1); /*0x436d70*/
    }
    while ( (int)v17 < 2 ); /*0x436d74*/
    result = (CCINIClass *)v22; /*0x436d7a*/
    if ( v22 ) /*0x436d80*/
      v3->BuildingLightClass_field_E0 = (int)v22; /*0x436d82*/
  }
  return result->__pad_0; /*0x436d88*/
}


// ==== 0x00436DA0  ObjectClass::method_436DA0  this=ObjectClass  sig=csp ====
double __thiscall sub_436DA0(_DWORD **this)
{
  _DWORD *v2; // edi
  _DWORD *v3; // eax
  double v4; // st7
  int v5; // eax
  int v6; // esi
  double result; // st7
  int v8; // [esp+1Ch] [ebp-28h]
  int v9; // [esp+24h] [ebp-20h]
  int v10; // [esp+28h] [ebp-1Ch]
  _BYTE v11[12]; // [esp+2Ch] [ebp-18h] BYREF
  _BYTE v12[12]; // [esp+38h] [ebp-Ch] BYREF

  v2 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(this + 57) + 72))(*(this + 57), v11); /*0x436dbc*/
  v3 = (_DWORD *)((int (__thiscall *)(_DWORD **, _BYTE *))(*this)[18])(this, v12); /*0x436dc3*/
  v9 = v3[1] - v2[1]; /*0x436de0*/
  v10 = v3[2] - v2[2]; /*0x436de4*/
  v4 = Math::Sqrt((double)(*v3 - *v2) * (double)(*v3 - *v2) + (double)v10 * (double)v10 + (double)v9 * (double)v9); /*0x436e10*/
  v5 = Math::RoundToInt(v4); /*0x436e18*/
  v6 = MEMORY[0x8871E0]->NodGateOne[1]; /*0x436e25*/
  if ( v5 >= v6 ) /*0x436e2d*/
    v8 = (v5 - v6) / ((MEMORY[0x8871E0]->NodGateOne[0] - v6) / 10); /*0x436e5b*/
  else
    v8 = 0; /*0x436e2f*/
  result = (double)v8 * 5.973333333333333; /*0x436e63*/
  Math::RoundToInt(result); /*0x436e69*/
  return result; /*0x436e74*/
}


// ==== 0x00436E80  BuildingLightClass::CalculateDistanceIntensity  this=BuildingLightClass  sig=csp ====
int __thiscall sub_436E80(_DWORD **this)
{
  _DWORD *v2; // edi
  _DWORD *v3; // eax
  double v4; // st7
  int v5; // edi
  int v6; // esi
  int v8; // [esp+20h] [ebp-1Ch]
  _BYTE v9[12]; // [esp+24h] [ebp-18h] BYREF
  _BYTE v10[12]; // [esp+30h] [ebp-Ch] BYREF

  v2 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(this + 57) + 72))(*(this + 57), v9); /*0x436e9b*/
  v3 = (_DWORD *)((int (__thiscall *)(_DWORD **, _BYTE *))(*this)[18])(this, v10); /*0x436ea2*/
  v8 = v3[2] - v2[2]; /*0x436eca*/
  v4 = Math::Sqrt( /*0x436eef*/
         (double)(*v3 - *v2) * (double)(*v3 - *v2)
       + (double)v8 * (double)v8
       + (double)(v3[1] - v2[1]) * (double)(v3[1] - v2[1]));
  v5 = Math::RoundToInt(v4); /*0x436efc*/
  v6 = MEMORY[0x8871E0]->NodGateOne[1]; /*0x436f03*/
  if ( v5 >= v6 ) /*0x436f0b*/
    return (v5 - v6) / ((MEMORY[0x8871E0]->NodGateOne[0] - v6) / 10); /*0x436f36*/
  else
    return 0; /*0x436f0e*/
}


// ==== 0x00436F40  BuildingLightClass::SD_vt13  this=BuildingLightClass  sig=csp ====
int __thiscall BuildingLightClass::SD_vt13(int this, unsigned int *a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // eax
  int v6; // esi
  int v7; // eax

  HouseClass::ProcessPower((#374 *)this); /*0x436f49*/
  Checksummer::Add_double(a2, *(_DWORD *)(this + 176), *(_DWORD *)(this + 180)); /*0x436f5e*/
  Power::TimerProcess(*(_DWORD *)(this + 184)); /*0x436f6c*/
  Power::TimerProcess(*(_DWORD *)(this + 188)); /*0x436f7a*/
  Power::TimerProcess(*(_DWORD *)(this + 192)); /*0x436f88*/
  Power::TimerProcess(*(_DWORD *)(this + 196)); /*0x436f96*/
  Power::TimerProcess(*(_DWORD *)(this + 200)); /*0x436fa4*/
  Power::TimerProcess(*(_DWORD *)(this + 204)); /*0x436fb2*/
  Checksummer::Add_double(a2, *(_DWORD *)(this + 208), *(_DWORD *)(this + 212)); /*0x436fc7*/
  LOBYTE(v3) = *(_BYTE *)(this + 216); /*0x436fcc*/
  Power::FlagProcess((int *)a2, v3); /*0x436fd5*/
  Power::TimerProcess(*(_DWORD *)(this + 220)); /*0x436fe3*/
  result = *(_DWORD *)(this + 224); /*0x436fe8*/
  if ( result ) /*0x436ff0*/
  {
    v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(result + 4) + 16))(result + 4); /*0x436ff9*/
    result = Power::TimerProcess(v5); /*0x436fff*/
  }
  v6 = *(_DWORD *)(this + 228); /*0x437004*/
  if ( v6 ) /*0x43700c*/
  {
    v7 = (*(int (__stdcall **)(int))(*(_DWORD *)(v6 + 4) + 16))(v6 + 4); /*0x437015*/
    return Power::TimerProcess(v7); /*0x43701b*/
  }
  return result; /*0x437020*/
}


// ==== 0x00437030  BuildingLightClass::SD_vt53  this=BuildingLightClass  sig=csp ====
char __thiscall BuildingLightClass::SD_vt53(#374 *this)
{
  if ( !(unsigned __int8)ObjectClass::Undeploy(this) ) /*0x437033*/
    return 0; /*0x43704b*/
  VectorClass::RemoveItem((int *)&MEMORY[0x87F778], (ObjectClass *)this); /*0x437042*/
  return 1; /*0x437049*/
}


// ==== 0x00437050  BuildingLightClass::SD_vt54  this=BuildingLightClass  sig=csp ====
char __thiscall BuildingLightClass::SD_vt54(#374 *this, int a2, int a3)
{
  if ( !(unsigned __int8)ObjectClass::Deploy(this) ) /*0x43705f*/
    return 0; /*0x43707b*/
  ObjectClass::SetDeployState((ObjectClass *)this, 0); /*0x437070*/
  return 1; /*0x437077*/
}


// ==== 0x00437090  Coord3D::Set  this=IUnknown  sig=csp ====
_DWORD *__thiscall Coord3D::Set(_DWORD *this, IUnknown *aP1, MouseClass *aP2, int a4)
{
  *this = aP1; /*0x43709a*/
  this->q004 = aP2; /*0x4370a0*/
  this->q008 = a4; /*0x4370a3*/
  return this; /*0x4370a6*/
}


// ==== 0x004370B0  BuildingLightClass::SD_vt11  this=BuildingLightClass  sig=csp ====
int BuildingLightClass::SD_vt11()
{
  return 19; /*0x4370b5*/
}


// ==== 0x004370C0  BuildingLightClass::SDDTOR  this=BuildingLightClass  sig=csp ====
BuildingLightClass *__thiscall BuildingLightClass::SDDTOR(#374 *Block, char a2)
{
  int v3; // eax
  #374 *v5; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)Block = &BuildingLightClass::`vftable'; /*0x4370c4*/
  *((_DWORD *)Block + 1) = &BuildingLightClass::`vftable'; /*0x4370ca*/
  *((_DWORD *)Block + 2) = &BuildingLightClass::`vftable'; /*0x4370d1*/
  *((_DWORD *)Block + 3) = &vt_BuildingLightClass; /*0x4370d8*/
  if ( (unsigned __int8)ObjectClass::Undeploy(Block) ) /*0x4370df*/
    VectorClass::RemoveItem((int *)&MEMORY[0x87F778], (ObjectClass *)Block); /*0x4370ee*/
  v5 = Block; /*0x437103*/
  v3 = (*(int (__thiscall **)(char *, #374 **))(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62308] + 16))( /*0x437107*/
         &MEMORY[0x89F690].__pad_579C[62308],
         &v5);
  if ( v3 != -1 && v3 < *(int *)&MEMORY[0x89F690].__pad_579C[62324] ) /*0x437117*/
  {
    --*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62324]; /*0x43711c*/
    for ( ; /*0x437122*/
          v3 < *(int *)&MEMORY[0x89F690].__pad_579C[62324];
          *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62312] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62312]
                                                                                               + 4 * v3) )
    {
      ++v3; /*0x43712a*/
    }
  }
  ObjectClass::Dtor(Block); /*0x43713e*/
  if ( (a2 & 1) != 0 ) /*0x437148*/
    OperatorDelete(Block); /*0x43714b*/
  return (BuildingLightClass *)Block; /*0x437155*/
}


// ==== 0x00437160  Vector3::Subtract  this=IUnknown  sig=csp ====
int *__thiscall Vector3::Subtract(_DWORD *this, IUnknown *aP1, IUnknown *aP2)
{
  int v3; // edx
  int v4; // esi
  int v6; // ecx

  v3 = *this - aP2->field_0; /*0x43716d*/
  v4 = this->q004 - aP2->field_4; /*0x437175*/
  v6 = this->q008 - aP2->field_8; /*0x43717e*/
  aP1->field_0 = v3; /*0x437182*/
  aP1->field_4 = v4; /*0x437184*/
  aP1->field_8 = v6; /*0x437187*/
  return &aP1->field_0; /*0x43718a*/
}


// ==== 0x00437190  sub_437190  this=-  sig=ida-proto ====
int sub_437190()
{
  unk_89C558 = 0; /*0x437192*/
  unk_89C55C = 0; /*0x437197*/
  unk_89C560 = 0; /*0x43719c*/
  unk_89C564 = 0; /*0x4371a1*/
  return 0; /*0x4371a6*/
}


// ==== 0x004371D0  Helper::ProcessData  this=AbstractClass  sig=csp ====
char __fastcall sub_4371D0(void **a1, int a2, int *a3)
{
  int v6; // ebx
  int v7; // eax
  int v8; // edx
  void *v9; // eax
  void *v10[4]; // [esp+8h] [ebp-30h] BYREF
  int (__thiscall **v11)(void *, char); // [esp+18h] [ebp-20h] BYREF
  int v12; // [esp+1Ch] [ebp-1Ch]
  int v13; // [esp+20h] [ebp-18h]
  int v14; // [esp+24h] [ebp-14h]
  int v15; // [esp+28h] [ebp-10h]
  _DWORD v16[3]; // [esp+2Ch] [ebp-Ch] BYREF

  if ( *(int *)(a2 + 8) <= 0 || *(int *)(a2 + 12) <= 0 ) /*0x4371e5*/
    return 0; /*0x4371e8*/
  v6 = *a3; /*0x4371fa*/
  v7 = (*((int (__thiscall **)(void **))*a1 + 28))(a1); /*0x4371fc*/
  v8 = *(_DWORD *)(a2 + 12); /*0x437202*/
  v12 = *(_DWORD *)(a2 + 8); /*0x437205*/
  v13 = v8; /*0x437215*/
  v14 = 0; /*0x437219*/
  v11 = &XSurface_Vtable; /*0x437221*/
  v15 = v7; /*0x437229*/
  Buffer::Init(v16, v6, v7 * v8 * v12); /*0x43722d*/
  v9 = *(void **)(a2 + 8); /*0x437235*/
  v10[3] = *(void **)(a2 + 12); /*0x437241*/
  v11 = &BSurface_Vtable; /*0x43724b*/
  v10[0] = 0; /*0x437253*/
  v10[1] = 0; /*0x43725b*/
  v10[2] = v9; /*0x437263*/
  LOBYTE(v6) = XSurface::BlitPart((int *)&v11, v10, a1, (void **)a2, 0, 1); /*0x437270*/
  Vector::Clear((int)v16); /*0x437272*/
  return v6; /*0x4371e7*/
}


// ==== 0x00437290  sub_437290  this=AbstractClass  sig=csp ====
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
char __fastcall BlitterCopySHP(
        XSurface *aP0,
        XSurface *aP1,
        XSurface *aP2,
        XSurface *aP3,
        int a4,
        XSurface *aP5,
        XSurface *aP6,
        XSurface *aP7,
        XSurface *aP8,
        int a10,
        int a11,
        int a12)
{
  XSurface *v12; // eax
  int Width; // edx
  int Height; // edx
  XSurface *v16; // edx
  int LockCount; // eax
  int v18; // ebp
  int v19; // eax
  int v20; // edx
  int v21; // ebx
  char result; // al
  int v23; // eax
  int v24; // edx
  unsigned __int8 v25; // di
  MouseClass *v26; // ebp
  int v27; // edi
  int v28; // edi
  int v29; // ecx
  XSurface *v30; // edi
  int v31; // eax
  int v32; // esi
  int v33; // esi
  int v34; // eax
  int v35; // edx
  XSurface *v36; // esi
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
  XSurface *v48; // ebx
  XSurface **v49; // esi
  unsigned int v50; // edi
  unsigned int v51; // eax
  int v52; // eax
  unsigned int v53; // eax
  int v54; // eax
  int v55; // ecx
  XSurface **v56; // esi
  unsigned int v57; // edi
  unsigned int v58; // eax
  int v59; // eax
  unsigned int v60; // eax
  unsigned int v61; // [esp+20h] [ebp-4Ch]
  int a7; // [esp+24h] [ebp-48h] BYREF
  unsigned int SamplePosition; // [esp+28h] [ebp-44h]
  int v64; // [esp+2Ch] [ebp-40h]
  int v65; // [esp+30h] [ebp-3Ch]
  int v66; // [esp+34h] [ebp-38h]
  int v67; // [esp+38h] [ebp-34h]
  int v68; // [esp+3Ch] [ebp-30h]
  XSurface *v69; // [esp+40h] [ebp-2Ch]
  int v70; // [esp+44h] [ebp-28h]
  int v71; // [esp+48h] [ebp-24h]
  int v72; // [esp+4Ch] [ebp-20h] BYREF
  int v73; // [esp+50h] [ebp-1Ch]
  int v74; // [esp+54h] [ebp-18h]
  int v75; // [esp+58h] [ebp-14h]
  _DWORD v76[2]; // [esp+5Ch] [ebp-10h] BYREF
  int v77; // [esp+64h] [ebp-8h]
  int v78; // [esp+68h] [ebp-4h]

  v12 = aP5; /*0x4373b3*/
  v76[0] = *(_DWORD *)aP5->__pad_0; /*0x4373c1*/
  v69 = aP0; /*0x4373c5*/
  Width = aP5->Width; /*0x4373c9*/
  LOBYTE(aP5) = 0; /*0x4373cc*/
  v76[1] = Width; /*0x4373d1*/
  a7 = 0; /*0x4373d5*/
  Height = v12->Height; /*0x4373d9*/
  SamplePosition = 0; /*0x4373dc*/
  v77 = Height; /*0x4373e0*/
  v16 = aP2; /*0x4373e4*/
  LockCount = v12->LockCount; /*0x4373e8*/
  aP2 = 0; /*0x4373eb*/
  v78 = LockCount; /*0x4373ef*/
  v72 = *(_DWORD *)v16->__pad_0; /*0x4373f5*/
  v61 = 0; /*0x4373f9*/
  v18 = 0; /*0x437400*/
  v73 = v16->Width; /*0x437402*/
  v65 = 0; /*0x437406*/
  v19 = v16->Height; /*0x43740a*/
  v66 = 0; /*0x43740d*/
  v74 = v19; /*0x437411*/
  v20 = v16->LockCount; /*0x437419*/
  v64 = 0; /*0x43741c*/
  v75 = v20; /*0x437423*/
  v67 = 0; /*0x437427*/
  v68 = 0; /*0x43742b*/
  aP8 = (XSurface *)(24 * (_DWORD)aP8 + 8484624); /*0x43743a*/
  v21 = 0; /*0x43745f*/
  result = CalcSurfaceBlitRects( /*0x437461*/
             (int)aP0,
             (int *)aP1->__pad_0,
             (IUnknown *)&v72,
             (int)aP3,
             (int *)a4,
             (IUnknown *)v76,
             &aP5,
             &a7,
             (int *)&aP2);
  if ( result ) /*0x437468*/
  {
    if ( *(_DWORD *)&stru_87C374.__pad_14B0[4224] ) /*0x43747c*/
    {
      v23 = *(_DWORD *)aP1->__pad_0; /*0x437485*/
      v24 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 4); /*0x43748d*/
      v71 = v73 + aP1->Width; /*0x437490*/
      v25 = v71 - v24; /*0x437494*/
      v70 = v72 + v23; /*0x43749a*/
      v61 = StreamClass::ReadAndSeek( /*0x4374ac*/
              *(int *)&stru_87C374.__pad_14B0[4224],
              (MouseClass *)(v72 + v23),
              (MouseClass *)(v71 - v24));
      v21 = (2 * (v25 & 1)) | ((unsigned __int8)v70 ^ v25) & 1; /*0x4374b7*/
    }
    if ( *(_DWORD *)&stru_87C374.__pad_579C[23348] ) /*0x4374c3*/
    {
      v26 = (MouseClass *)(v72 + *(_DWORD *)aP1->__pad_0); /*0x4374d6*/
      v27 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 4); /*0x4374d8*/
      v71 = v73 + aP1->Width; /*0x4374dd*/
      SamplePosition = Audio::GetSamplePosition(*(int *)&stru_87C374.__pad_579C[23348], v26, (MouseClass *)(v71 - v27)); /*0x4374ea*/
      v64 = 0; /*0x4374f2*/
      v28 = aP8->LockCount; /*0x4374fa*/
      v67 = aP8->Height; /*0x437502*/
      v68 = v28; /*0x437509*/
      v29 = v28 / v67; /*0x43750d*/
      if ( LOBYTE(aP8[1].Width) ) /*0x437513*/
      {
        v18 = aP8->Width /*0x437545*/
            * ((int)&aP7->__pad_0[(unsigned __int16)(*(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 4)
                                                   + *(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 36)
                                                   - v73
                                                   - LOWORD(aP1->Width))]
             / aP8->Width);
      }
      else
      {
        v18 = v29 /*0x437585*/
            * ((int)&aP7->__pad_0[(unsigned __int16)(*(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 4)
                                                   + *(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 36)
                                                   - v75
                                                   - v73
                                                   - LOWORD(aP1->Width)
                                                   + 1)]
             / v29)
            - v75 / v29;
        v64 = v28 - v75 % v29; /*0x437592*/
        if ( v64 == v28 ) /*0x437596*/
        {
          v64 = 0; /*0x43759c*/
          v18 += *(_DWORD *)aP8[1].__pad_0; /*0x4375a4*/
        }
      }
    }
    v30 = v69; /*0x4375a7*/
    v31 = (*(int (__thiscall **)(XSurface *))(*(_DWORD *)v69->__pad_0 + 112))(v69); /*0x4375af*/
    v32 = v74 * v31; /*0x4375b6*/
    if ( v32 == (*(int (__thiscall **)(XSurface *))(*(_DWORD *)v30->__pad_0 + 116))(v30) /*0x4375d8*/
      && (v33 = (*(int (__thiscall **)(XSurface *))(*(_DWORD *)v30->__pad_0 + 116))(v30),
          v33 == (*(int (__thiscall **)(XSurface *))(*(_DWORD *)aP3->__pad_0 + 116))(aP3)) )
    {
      v34 = v78 * v77; /*0x4375e2*/
      if ( v78 * v77 >= v75 * v74 ) /*0x4375ee*/
        v34 = v75 * v74; /*0x4375f0*/
      v35 = *(_DWORD *)aP6->__pad_0; /*0x4375fc*/
      if ( (_BYTE)aP5 ) /*0x4375fe*/
        (*(void (__stdcall **)(int, XSurface *, int, _DWORD, _DWORD, _DWORD, int))(v35 + 12))( /*0x437616*/
          a7,
          aP2,
          v34,
          0,
          0,
          0,
          1000);
      else
        (*(void (__stdcall **)(int, XSurface *, int, _DWORD, _DWORD, _DWORD, int, _DWORD))(v35 + 4))( /*0x437636*/
          a7,
          aP2,
          v34,
          0,
          0,
          0,
          1000,
          0);
    }
    else
    {
      v36 = aP3; /*0x43763e*/
      aP7 = (XSurface *)(*(int (__thiscall **)(XSurface *))(*(_DWORD *)aP3->__pad_0 + 116))(aP3); /*0x437649*/
      v37 = (*(int (__thiscall **)(XSurface *))(*(_DWORD *)v30->__pad_0 + 116))(v30); /*0x437654*/
      a4 = v37; /*0x43765d*/
      if ( *(_DWORD *)&stru_87C374.__pad_579C[23348] ) /*0x437661*/
        v65 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 40); /*0x437666*/
      if ( *(_DWORD *)&stru_87C374.__pad_14B0[4224] ) /*0x437671*/
        v66 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 40); /*0x437676*/
      if ( (_BYTE)aP5 ) /*0x437680*/
      {
        a4 = -v37; /*0x437690*/
        aP7 = (XSurface *)-(int)aP7; /*0x43769c*/
        v38 = *(_DWORD *)v36->__pad_0; /*0x4376a0*/
        v66 = -v66; /*0x4376a4*/
        v65 = -v65; /*0x4376aa*/
        v39 = (*(int (__thiscall **)(XSurface *))(v38 + 116))(v36); /*0x4376ae*/
        v40 = *(_DWORD *)v30->__pad_0; /*0x4376b5*/
        aP2 = (XSurface *)((char *)aP2 + (v78 - 1) * v39); /*0x4376c1*/
        v41 = (*(int (__thiscall **)(XSurface *))(v40 + 116))(v30); /*0x4376c7*/
        v42 = v78; /*0x4376d3*/
        v43 = (v75 - 1) * v41 + a7; /*0x4376da*/
        a7 = v43; /*0x4376e3*/
        if ( *(_DWORD *)&stru_87C374.__pad_579C[23348] ) /*0x4376e7*/
        {
          v44 = SamplePosition + 2 * (v78 + 0x7FFFFFFF * *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 40)); /*0x4376fb*/
          if ( v44 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x437703*/
            v44 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x437705*/
          SamplePosition = v44; /*0x43770d*/
          v18 += 1 - v78; /*0x437713*/
        }
        if ( *(_DWORD *)&stru_87C374.__pad_14B0[4224] ) /*0x43771d*/
        {
          v45 = v61 + 2 * (v78 + 0x7FFFFFFF * *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 40)); /*0x437731*/
          if ( v45 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x437739*/
            v45 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32); /*0x43773b*/
          v61 = v45; /*0x43773e*/
        }
      }
      else
      {
        v42 = v78; /*0x437744*/
        v43 = a7; /*0x437748*/
      }
      if ( v42 >= v75 ) /*0x437752*/
        v42 = v75; /*0x437754*/
      if ( (_BYTE)aP5 ) /*0x43775c*/
      {
        if ( v42 > 0 ) /*0x437764*/
        {
          v46 = a10; /*0x43776a*/
          v47 = a11; /*0x43776e*/
          v48 = aP2; /*0x437775*/
          v70 = v42; /*0x437779*/
          v49 = (XSurface **)aP6; /*0x43777d*/
          while ( 1 ) /*0x43778e*/
          {
            if ( (_WORD)v47 ) /*0x437791*/
            {
              aP6 = *v49; /*0x43779a*/
              v50 = SamplePosition; /*0x43779e*/
              (*(void (__thiscall **)(XSurface **, int, XSurface *, int, int, unsigned int, unsigned int, int, int))aP6[1].__pad_0)( /*0x4377b6*/
                v49,
                v43,
                v48,
                v77,
                v18,
                SamplePosition,
                v61,
                v46,
                v47);
            }
            else
            {
              v50 = SamplePosition; /*0x4377bb*/
              ((void (__thiscall *)(XSurface **, int, XSurface *, int, int, unsigned int, unsigned int, int))(*v49)->LockCount)( /*0x4377d4*/
                v49,
                v43,
                v48,
                v77,
                v18,
                SamplePosition,
                v61,
                v46);
            }
            v43 = a4 + a7; /*0x4377e3*/
            a7 += a4; /*0x4377e9*/
            v48 = (XSurface *)((char *)aP2 + (_DWORD)aP7); /*0x4377ed*/
            aP2 = (XSurface *)((char *)aP2 + (_DWORD)aP7); /*0x4377f7*/
            if ( *(_DWORD *)&stru_87C374.__pad_579C[23348] ) /*0x4377fb*/
            {
              v51 = v50 + 2 * v65; /*0x437801*/
              if ( v51 < *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 24) ) /*0x437809*/
                v51 += *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x43780b*/
              SamplePosition = v51; /*0x437812*/
              v52 = v67 + v64; /*0x43781a*/
              v64 += v67; /*0x437822*/
              if ( v64 >= v68 ) /*0x437826*/
              {
                v18 += *(_DWORD *)aP8[1].__pad_0; /*0x43782c*/
                v64 = v52 - v68; /*0x437831*/
              }
            }
            if ( *(_DWORD *)&stru_87C374.__pad_14B0[4224] ) /*0x43783d*/
            {
              v53 = v61 + 2 * v66; /*0x437847*/
              if ( v53 < *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 24) ) /*0x43784f*/
                v53 += *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32); /*0x437851*/
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
        v56 = (XSurface **)aP6; /*0x437883*/
        while ( 1 ) /*0x437894*/
        {
          if ( (_WORD)v55 ) /*0x437897*/
          {
            aP6 = *v56; /*0x4378a1*/
            v57 = SamplePosition; /*0x4378a5*/
            ((void (__thiscall *)(XSurface **, int, XSurface *, int, int, unsigned int, unsigned int, int, int, int))aP6->Height)( /*0x4378c1*/
              v56,
              v43,
              aP2,
              v77,
              v18,
              SamplePosition,
              v61,
              v54,
              v21,
              v55);
          }
          else
          {
            v57 = SamplePosition; /*0x4378c6*/
            ((void (__thiscall *)(XSurface **, int, XSurface *, int, int, unsigned int, unsigned int, int, int))(*v56)->Width)( /*0x4378e4*/
              v56,
              v43,
              aP2,
              v77,
              v18,
              SamplePosition,
              v61,
              v54,
              v21);
          }
          v43 = a4 + a7; /*0x4378f3*/
          v21 ^= 3u; /*0x4378f9*/
          a7 += a4; /*0x4378fe*/
          aP2 = (XSurface *)((char *)aP2 + (_DWORD)aP7); /*0x437902*/
          if ( *(_DWORD *)&stru_87C374.__pad_579C[23348] ) /*0x43790e*/
          {
            v58 = v57 + 2 * v65; /*0x437914*/
            if ( v58 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x43791c*/
              v58 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x43791e*/
            SamplePosition = v58; /*0x437925*/
            v59 = v67 + v64; /*0x43792d*/
            v64 += v67; /*0x437935*/
            if ( v64 >= v68 ) /*0x437939*/
            {
              v18 += *(_DWORD *)aP8[1].__pad_0; /*0x43793f*/
              v64 = v59 - v68; /*0x437944*/
            }
          }
          if ( *(_DWORD *)&stru_87C374.__pad_14B0[4224] ) /*0x437950*/
          {
            v60 = v61 + 2 * v66; /*0x43795a*/
            if ( v60 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x437962*/
              v60 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32); /*0x437964*/
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
    (*(void (__thiscall **)(XSurface *))(*(_DWORD *)v30->__pad_0 + 96))(v30); /*0x437982*/
    (*(void (__thiscall **)(XSurface *))(*(_DWORD *)aP3->__pad_0 + 96))(aP3); /*0x43798b*/
    return 1; /*0x43798e*/
  }
  return result; /*0x43746a*/
}


// ==== 0x004379A0  sub_4379A0  this=-  sig=ida-proto ====
bool __fastcall sub_4379A0(
        IUnknown *a1,
        IUnknown *a2,
        _DWORD *a4,
        int arg4,
        TechnoClass *aP6,
        int a6,
        int a7,
        TechnoClass *aP9,
        int a9)
{
  int *v11; // eax
  int *v13; // [esp-28h] [ebp-54h]
  _BYTE v14[20]; // [esp+Ch] [ebp-20h] BYREF
  int v15[3]; // [esp+20h] [ebp-Ch] BYREF

  v13 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *, int))(*a4 + 120))(a4, v14, arg4); /*0x4379e4*/
  v11 = (int *)(*(int (__thiscall **)(IUnknown *))(a1->field_0 + 120))(a1); /*0x4379ec*/
  return BlitterRLEBlitSHP(a1, v11, (TechnoClass *)v15, a2, a4, v13, aP6, a6, a7, aP9, a9, 0, 0, 0, 0); /*0x4379f8*/
}


// ==== 0x00437A10  BlitterRLEBlitSHP  this=AbstractClass  sig=csp ====
bool __fastcall BlitterRLEBlitSHP(
        IUnknown *aP0,
        int *a1,
        TechnoClass *aP2,
        IUnknown *aP3,
        _DWORD *a4,
        int *a5,
        TechnoClass *aP6,
        int a8,
        int a9,
        TechnoClass *aP9,
        int a11,
        int a12,
        TechnoClass *aP12,
        int a14,
        int a15)
{
  int v16; // edx
  int v17; // esi
  int v18; // ebp
  int v19; // ebx
  bool result; // al
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  MouseClass *v23; // edx
  int v24; // esi
  MouseClass *v25; // esi
  int v26; // ecx
  int v27; // eax
  int *v28; // ebp
  int v29; // eax
  int v30; // ecx
  MouseClass *v31; // ebp
  MouseClass *v32; // edi
  unsigned __int16 *v33; // edi
  int v34; // eax
  IUnknown *v35; // ebp
  int LockCount; // eax
  int v37; // edx
  unsigned int v38; // eax
  char *v39; // eax
  unsigned int v40; // eax
  AbstractClass *v41; // [esp+24h] [ebp-80h]
  char *v42; // [esp+38h] [ebp-6Ch]
  unsigned int SamplePosition; // [esp+3Ch] [ebp-68h]
  unsigned int v44; // [esp+40h] [ebp-64h]
  int v46; // [esp+48h] [ebp-5Ch]
  char *v47; // [esp+4Ch] [ebp-58h]
  int v48; // [esp+50h] [ebp-54h]
  int v49; // [esp+54h] [ebp-50h]
  int v50; // [esp+58h] [ebp-4Ch]
  int v51; // [esp+5Ch] [ebp-48h]
  int v52; // [esp+60h] [ebp-44h]
  char v53[8]; // [esp+64h] [ebp-40h] BYREF
  AbstractClass aP1; // [esp+6Ch] [ebp-38h] BYREF
  int v55; // [esp+90h] [ebp-14h]
  XSurface v56; // [esp+94h] [ebp-10h] BYREF
  int aP2b; // [esp+A8h] [ebp+4h]
  TechnoClass *aP2a; // [esp+A8h] [ebp+4h]
  _DWORD *a4a; // [esp+B0h] [ebp+Ch]
  int *a5a; // [esp+B4h] [ebp+10h]
  int v61; // [esp+BCh] [ebp+18h]
  int v62; // [esp+C0h] [ebp+1Ch]

  v16 = a5[1]; /*0x437a23*/
  *(_DWORD *)v56.__pad_0 = *a5; /*0x437a26*/
  v56.Width = v16; /*0x437a2a*/
  v17 = 0; /*0x437a2e*/
  SamplePosition = 0; /*0x437a33*/
  v56.Height = a5[2]; /*0x437a37*/
  v44 = 0; /*0x437a3b*/
  v56.LockCount = a5[3]; /*0x437a49*/
  v42 = 0; /*0x437a4d*/
  v49 = 0; /*0x437a53*/
  aP1.nextArrayIndex = *(_DWORD *)aP2->__pad_0; /*0x437a57*/
  v51 = 0; /*0x437a5b*/
  a5a = 0; /*0x437a62*/
  aP1.referenceCount = *(_DWORD *)&aP2->__pad_0[4]; /*0x437a69*/
  v46 = 0; /*0x437a6d*/
  v47 = 0; /*0x437a74*/
  aP1.NeedsSaveOrLink = *(void **)&aP2->__pad_0[8]; /*0x437a78*/
  v55 = *(_DWORD *)&aP2->__pad_0[12]; /*0x437a8d*/
  v18 = 24 * a9 + 8484624; /*0x437a9c*/
  v50 = 0; /*0x437aa7*/
  v19 = 0; /*0x437aab*/
  v52 = v18; /*0x437aad*/
  result = IntersectSurfaceRects((IUnknown *)&aP1.nextArrayIndex, (int)a1, &v56, (int)a4); /*0x437ab1*/
  if ( !result ) /*0x437ab8*/
    return result; /*0x437ab8*/
  v62 = *(_DWORD *)v56.__pad_0 - *a4; /*0x437ad6*/
  v48 = v56.Width - a4[1]; /*0x437ae7*/
  v41 = (AbstractClass *)CellStruct::Copy(&aP1.nextArrayIndex, (IUnknown *)v53); /*0x437afd*/
  v21 = CellStruct::Copy(a1, (IUnknown *)&aP1.__pad_0[8]); /*0x437b02*/
  v22 = Coord2D::Add(v21, &aP1, v41); /*0x437b09*/
  a4a = (_DWORD *)(*(int (__thiscall **)(IUnknown *, _DWORD, _DWORD))(aP0->field_0 + 92))(aP0, *v22, v22[1]); /*0x437b28*/
  if ( !a4a ) /*0x437b2f*/
    return 0; /*0x437b3a*/
  if ( *(_DWORD *)&stru_87C374.__pad_579C[23348] ) /*0x437b45*/
  {
    v23 = (MouseClass *)(*a1 + aP1.nextArrayIndex); /*0x437b5c*/
    v24 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 4); /*0x437b5e*/
    *(_DWORD *)&aP1.__pad_0[12] = aP1.referenceCount + a1[1]; /*0x437b61*/
    v25 = (MouseClass *)(*(_DWORD *)&aP1.__pad_0[12] - v24); /*0x437b67*/
    SamplePosition = Audio::GetSamplePosition(*(int *)&stru_87C374.__pad_579C[23348], v23, v25); /*0x437b73*/
    v46 = *(_DWORD *)(v18 + 8); /*0x437b7c*/
    a5a = 0; /*0x437b80*/
    v47 = *(char **)(v18 + 12); /*0x437b91*/
    v49 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 40); /*0x437b95*/
    v26 = (int)v47 / v46; /*0x437b9e*/
    if ( *(_BYTE *)(v18 + 20) ) /*0x437ba0*/
    {
      v27 = a12; /*0x437bcd*/
      v17 = *(_DWORD *)(v18 + 4) /*0x437bd4*/
          * ((a8 + (unsigned __int16)(*(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 36) - (_WORD)v25))
           / *(_DWORD *)(v18 + 4));
      if ( a12 ) /*0x437bd9*/
      {
LABEL_7:
        v28 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v27 + 120))(v27, &aP1.__pad_0[8]); /*0x437bdf*/
        v29 = *v28; /*0x437bed*/
        v50 = v28[2]; /*0x437bf6*/
        v30 = a14 + v28[1]; /*0x437c0d*/
        aP1.abstractFlags = v28[3]; /*0x437c16*/
        v42 = (char *)(*(int (__thiscall **)(int, char *, int))(*(_DWORD *)a12 + 92))( /*0x437c30*/
                        a12,
                        &aP12->__pad_0[v29 + v62],
                        v30 + v48);
        goto LABEL_12; /*0x437c34*/
      }
    }
    else
    {
      v17 = a8 /*0x437c67*/
          + (unsigned __int16)(*(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 4)
                             + *(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 36)
                             - *((_WORD *)a1 + 2)
                             - *(_WORD *)&aP2->__pad_0[12]
                             - *(_WORD *)&aP2->__pad_0[4]
                             + 1);
      v27 = a12; /*0x437c69*/
      if ( a12 ) /*0x437c72*/
        goto LABEL_7; /*0x437c72*/
      aP2b = *(_DWORD *)&aP2->__pad_0[4] + *(_DWORD *)&aP2->__pad_0[12] - aP1.referenceCount; /*0x437c82*/
      v17 = v26 * (v17 / v26) - aP2b / v26; /*0x437c9d*/
      a5a = (int *)&v47[-(aP2b % v26)]; /*0x437cb3*/
      if ( a5a == (int *)v47 ) /*0x437cba*/
      {
        a5a = 0; /*0x437cbf*/
        v17 += *(_DWORD *)(v18 + 16); /*0x437cca*/
      }
    }
    v42 = (char *)&unk_89C568; /*0x437ccc*/
  }
LABEL_12:
  if ( *(_DWORD *)&stru_87C374.__pad_14B0[4224] ) /*0x437cdc*/
  {
    v31 = (MouseClass *)(*a1 + aP1.nextArrayIndex); /*0x437ce7*/
    v32 = (MouseClass *)(aP1.referenceCount + a1[1] - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 4)); /*0x437cfa*/
    v44 = StreamClass::ReadAndSeek(*(int *)&stru_87C374.__pad_14B0[4224], v31, v32); /*0x437d18*/
    v51 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 40); /*0x437d1c*/
    v19 = (2 * ((unsigned __int8)v32 & 1)) | ((unsigned __int8)v31 ^ (unsigned __int8)v32) & 1; /*0x437d20*/
  }
  v33 = (unsigned __int16 *)(*(int (__thiscall **)(IUnknown *, _DWORD, _DWORD))(aP3->field_0 + 92))(aP3, 0, 0); /*0x437d36*/
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
    v35 = aP0; /*0x437d66*/
    v61 = (*(int (__thiscall **)(IUnknown *))(aP0->field_0 + 116))(aP0); /*0x437d76*/
    LockCount = v56.LockCount; /*0x437d7d*/
    if ( v56.LockCount >= v55 ) /*0x437d83*/
      LockCount = v55; /*0x437d85*/
    if ( LockCount > 0 ) /*0x437d89*/
    {
      aP2a = (TechnoClass *)LockCount; /*0x437d96*/
      do /*0x437eda*/
      {
        v37 = *(_DWORD *)aP6->__pad_0; /*0x437da4*/
        if ( (_WORD)a15 ) /*0x437daa*/
          (*(void (__thiscall **)(TechnoClass *, _DWORD *, unsigned __int16 *, int, int, int, unsigned int, unsigned int, TechnoClass *, int, char *, int))(v37 + 8))( /*0x437de4*/
            aP6,
            a4a,
            v33 + 1,
            v56.Height,
            v62,
            v17,
            SamplePosition,
            v44,
            aP9,
            v19,
            v42,
            a15);
        else
          (*(void (__thiscall **)(TechnoClass *, _DWORD *, unsigned __int16 *, int, int, int, unsigned int, unsigned int, TechnoClass *, int, char *))(v37 + 4))( /*0x437e20*/
            aP6,
            a4a,
            v33 + 1,
            v56.Height,
            v62,
            v17,
            SamplePosition,
            v44,
            aP9,
            v19,
            v42);
        a4a = (_DWORD *)((char *)a4a + v61); /*0x437e38*/
        v19 ^= 3u; /*0x437e45*/
        v33 = (unsigned __int16 *)((char *)v33 + *v33); /*0x437e48*/
        if ( *(_DWORD *)&stru_87C374.__pad_579C[23348] ) /*0x437e4c*/
        {
          v38 = SamplePosition + 2 * v49; /*0x437e56*/
          if ( v38 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 28) ) /*0x437e5e*/
            v38 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 32); /*0x437e60*/
          SamplePosition = v38; /*0x437e63*/
          if ( a12 ) /*0x437e70*/
          {
            v42 += v50; /*0x437e7c*/
          }
          else
          {
            v39 = (char *)a5a + v46; /*0x437e8d*/
            a5a = (int *)((char *)a5a + v46); /*0x437e95*/
            if ( (int)a5a >= (int)v47 ) /*0x437e9c*/
            {
              v17 += *(_DWORD *)(v52 + 16); /*0x437ea2*/
              a5a = (int *)(v39 - v47); /*0x437ea7*/
            }
          }
          v40 = v44 + 2 * v51; /*0x437eb6*/
          if ( v40 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 28) ) /*0x437ec2*/
            v40 -= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 32); /*0x437ec4*/
          v44 = v40; /*0x437ec7*/
        }
        aP2a = (TechnoClass *)((char *)aP2a - 1); /*0x437ed3*/
      }
      while ( aP2a ); /*0x437eda*/
      v35 = aP0; /*0x437ee0*/
    }
    (*(void (__thiscall **)(IUnknown *))(v35->field_0 + 96))(v35); /*0x437ee9*/
    (*(void (__thiscall **)(IUnknown *))(aP3->field_0 + 96))(aP3); /*0x437ef5*/
    return 1; /*0x437ef8*/
  }
  else
  {
    (*(void (__thiscall **)(IUnknown *))(aP0->field_0 + 96))(aP0); /*0x437d42*/
    return 0; /*0x437d45*/
  }
}


// ==== 0x00437F10  Coord2D::Add  this=IUnknown  sig=csp ====
_DWORD *__thiscall Coord2D::Add(_DWORD *this, AbstractClass *aP1, AbstractClass *aP2)
{
  int v3; // esi

  v3 = this->q004 + *(_DWORD *)&aP2->__pad_0[4]; /*0x437f21*/
  *(_DWORD *)aP1->__pad_0 = *this + *(_DWORD *)aP2->__pad_0; /*0x437f27*/
  *(_DWORD *)&aP1->__pad_0[4] = v3; /*0x437f29*/
  return aP1->__pad_0; /*0x437f2c*/
}


// ==== 0x00437F30  CellStruct::Copy  this=IUnknown  sig=csp ====
_DWORD *__thiscall CellStruct::Copy(int *this, IUnknown *aP1)
{
  AbstractClass *v3; // edx
  int v4; // ecx

  v3 = (AbstractClass *)*this; /*0x437f34*/
  v4 = *(this + 1); /*0x437f36*/
  aP1->field_0 = (int)v3; /*0x437f39*/
  aP1->field_4 = v4; /*0x437f3b*/
  return &aP1->field_0; /*0x437f3e*/
}


// ==== 0x00437F50  ObjectClass::method_437F50  this=int  sig=csp ====
_DWORD *__thiscall sub_437F50(_DWORD *this)
{
  HRESULT v2; // esi
  LPVOID ppv; // [esp+Ch] [ebp-4h] BYREF

  *this = 0; /*0x437f68*/
  v2 = CoCreateInstance(&stru_7E9500, 0, 7u, &riid, &ppv); /*0x437f74*/
  if ( v2 < 0 ) /*0x437f78*/
    goto LABEL_5; /*0x437f78*/
  v2 = OleRun((LPUNKNOWN)ppv); /*0x437f85*/
  if ( v2 >= 0 ) /*0x437f89*/
    v2 = (**(int (__stdcall ***)(LPVOID, void *, _DWORD *))ppv)(ppv, &unk_818C08, this); /*0x437f9a*/
  (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv); /*0x437fa3*/
  if ( v2 < 0 ) /*0x437fa8*/
  {
LABEL_5:
    if ( v2 != -2147467262 ) /*0x437fb0*/
      WinAPI::Wrapper(v2); /*0x437fb3*/
  }
  return this; /*0x437fba*/
}


// ==== 0x00437FC0  COMObject::Release  this=CampaignClass  sig=csp ====
int __thiscall COMObject_Release(int *this)
{
  int result; // eax

  result = *this; /*0x437fc0*/
  if ( *this ) /*0x437fc0*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x437fc9*/
  return result; /*0x437fcc*/
}


// ==== 0x00437FD0  GameClass::initGameMode  this=VOID_PTR  sig=csp ====
int __thiscall sub_437FD0(_DWORD *this, int a2, int a3)
{
  if ( !*this ) /*0x437fd3*/
    WinAPI::Wrapper(-2147467261); /*0x437fdd*/
  return (*(int (__stdcall **)(_DWORD, int, int))(*(_DWORD *)*this + 12))(*this, a3, a2); /*0x437ff4*/
}


// ==== 0x00438000  BlowPipe::Draw  this=VOID_PTR  sig=csp ====
int __thiscall BlowPipe::Draw(_DWORD *this, int a2, int a3, int a4)
{
  if ( !*this ) /*0x438003*/
    WinAPI::Wrapper(-2147467261); /*0x43800d*/
  (*(void (__stdcall **)(_DWORD, int, int, int))(*(_DWORD *)*this + 24))(*this, a3, a2, a4); /*0x438026*/
  return a3; /*0x43802b*/
}


// ==== 0x00438030  BlowPipe::DrawAlt  this=VOID_PTR  sig=csp ====
int __thiscall BlowPipe::DrawAlt(_DWORD *this, int a2, int a3, int a4)
{
  if ( !*this ) /*0x438033*/
    WinAPI::Wrapper(-2147467261); /*0x43803d*/
  (*(void (__stdcall **)(_DWORD, int, int, int))(*(_DWORD *)*this + 28))(*this, a3, a2, a4); /*0x438056*/
  return a3; /*0x43805b*/
}


// ==== 0x00438060  BlowPipe::AddRef  this=BlowPipe  sig=csp ====
int __thiscall BlowPipe::AddRef(Pipe *this)
{
  Pipe *v2; // edi
  Pipe *v3; // eax

  v2 = 0; /*0x438064*/
  v3 = (Pipe *)this->q018; /*0x438066*/
  if ( (int)v3 > 0 && this->Pipe_field_0x0C ) /*0x43806d*/
    v2 = Delegate::Dispatch(this, this + 1, v3); /*0x438080*/
  this->q018 = 0; /*0x438084*/
  return (int)v2 + GameClass::GetRelatedObject(this); /*0x438092*/
}


// ==== 0x004380A0  BlowPipe::Read  this=BlowPipe  sig=csp ====
char *__thiscall BlowPipe::Read(_DWORD *this, BombClass *aP1, signed int Size)
{
  BombClass *v3; // ebx
  size_t v4; // ebp
  BombClass *v6; // eax
  size_t v7; // edi
  size_t v8; // eax
  _DWORD *v9; // ecx
  size_t v10; // ebp
  _DWORD *v11; // ecx
  _DWORD *v13; // [esp-10h] [ebp-1Ch]
  _DWORD *v14; // [esp-8h] [ebp-14h]
  _DWORD *v15; // [esp-8h] [ebp-14h]
  Pipe *Src; // [esp+10h] [ebp+4h]
  size_t Sizea; // [esp+14h] [ebp+8h]

  v3 = aP1; /*0x4380a1*/
  v4 = Size; /*0x4380a6*/
  if ( !aP1 || Size < 1 || !this->BlowPipe_field_0x0C ) /*0x4380be*/
    return (char *)Delegate::Dispatch(this, (Pipe *)aP1, (Pipe *)Size); /*0x4381b8*/
  v6 = (BombClass *)this->q018; /*0x4380c9*/
  Src = 0; /*0x4380cf*/
  if ( v6 ) /*0x4380d7*/
  {
    v7 = 8 - (_DWORD)v6; /*0x4380de*/
    if ( 8 - (int)v6 >= Size ) /*0x4380e2*/
      v7 = Size; /*0x4380e4*/
    memcpy((char *)this + this->q018 + 16, (AbstractClass *)v3, v7); /*0x4380f0*/
    v3 = (BombClass *)((char *)v3 + v7); /*0x4380fd*/
    v8 = v7 + this->q018; /*0x4380ff*/
    v4 = Size - v7; /*0x438101*/
    this->q018 = v8; /*0x438106*/
    Size -= v7; /*0x438109*/
    if ( v8 == 8 ) /*0x43810d*/
    {
      v9 = (_DWORD *)this->BlowPipe_field_0x0C; /*0x438112*/
      v14 = this + 4; /*0x43811b*/
      v13 = this + 4; /*0x43811d*/
      if ( *(this + 7) == 1 ) /*0x43811e*/
        BlowPipe::DrawAlt(v9, (int)v13, 8, (int)v14); /*0x438120*/
      else
        BlowPipe::Draw(v9, (int)v13, 8, (int)v14); /*0x438127*/
      Src = Delegate::Dispatch(this, (Pipe *)this + 1, (Pipe *)8); /*0x438136*/
      this->q018 = 0; /*0x43813a*/
    }
  }
  if ( v4 >= 8 ) /*0x438144*/
  {
    v10 = v4 >> 3; /*0x43814a*/
    Sizea = Size - 8 * v10; /*0x438154*/
    do /*0x43818e*/
    {
      v11 = (_DWORD *)this->BlowPipe_field_0x0C; /*0x43815b*/
      v15 = this + 4; /*0x438164*/
      if ( *(this + 7) == 1 ) /*0x438168*/
        BlowPipe::DrawAlt(v11, (int)v3, 8, (int)v15); /*0x43816a*/
      else
        BlowPipe::Draw(v11, (int)v3, 8, (int)v15); /*0x438171*/
      v3 = (BombClass *)((char *)v3 + 8); /*0x438184*/
      --v10; /*0x438189*/
      Src = (Pipe *)((char *)Src + (_DWORD)Delegate::Dispatch(this, (Pipe *)this + 1, (Pipe *)8)); /*0x43818a*/
    }
    while ( v10 ); /*0x43818e*/
    v4 = Sizea; /*0x438190*/
  }
  if ( (int)v4 > 0 ) /*0x438197*/
  {
    memcpy(this + 4, (AbstractClass *)v3, v4); /*0x43819f*/
    this->q018 = v4; /*0x4381a7*/
  }
  return Src->__pad_0; /*0x4381ae*/
}


// ==== 0x004381D0  GameClass::processFrame  this=VOID_PTR  sig=csp ====
_DWORD *__thiscall sub_4381D0(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // ecx

  result = (_DWORD *)*(this + 3); /*0x4381d3*/
  if ( !result ) /*0x4381d8*/
  {
    v5 = __2_YAPAXI_Z(4u); /*0x4381dc*/
    if ( v5 ) /*0x4381e6*/
      result = sub_437F50(v5); /*0x4381ea*/
    else
      result = 0; /*0x4381f1*/
    *(this + 3) = result; /*0x4381f3*/
  }
  v6 = (_DWORD *)*(this + 3); /*0x4381f6*/
  if ( v6 ) /*0x4381fc*/
    return (_DWORD *)GameClass::initGameMode(v6, a2, a3); /*0x438208*/
  return result; /*0x4381f9*/
}


// ==== 0x00438210  BlowStraw::Get  this=BlowStraw  sig=csp ====
size_t __thiscall BlowStraw::Get(int *this, Straw *aP1, signed int Size)
{
  Straw *v3; // ebx
  signed int v5; // ebp
  BombClass *v7; // eax
  size_t v8; // edi
  BombClass *v9; // eax
  BombClass *v10; // ebx
  _DWORD *v11; // ecx
  int *v12; // [esp-10h] [ebp-1Ch]
  int *v13; // [esp-8h] [ebp-14h]
  size_t Sizea; // [esp+14h] [ebp+8h]

  v3 = aP1; /*0x438211*/
  if ( !aP1 ) /*0x43821b*/
    return 0; /*0x43821b*/
  v5 = Size; /*0x438221*/
  if ( Size <= 0 ) /*0x438227*/
    return 0; /*0x4382ed*/
  if ( !*(this + 3) ) /*0x43822d*/
    return Delegate::Invoke(this, (int)aP1, (Straw *)Size); /*0x438236*/
  Sizea = 0; /*0x438242*/
  while ( 1 ) /*0x438250*/
  {
    v7 = (BombClass *)*(this + 6); /*0x438250*/
    if ( (int)v7 > 0 ) /*0x438255*/
    {
      v8 = v5; /*0x438259*/
      if ( v5 >= (int)v7 ) /*0x43825b*/
        v8 = *(this + 6); /*0x43825d*/
      memcpy(v3, (const void *)((char *)this - (char *)v7 + 24), v8); /*0x438269*/
      *(this + 6) -= v8; /*0x438278*/
      v5 -= v8; /*0x43827f*/
      aP1 = (Straw *)((char *)v3 + v8); /*0x438283*/
      Sizea += v8; /*0x438287*/
    }
    if ( !v5 ) /*0x43828d*/
      break; /*0x43828d*/
    v9 = (BombClass *)Delegate::Invoke(this, (int)(this + 4), (Straw *)8); /*0x438297*/
    v10 = v9; /*0x43829c*/
    if ( !v9 ) /*0x4382a0*/
      break; /*0x4382a0*/
    if ( v9 == (BombClass *)8 ) /*0x4382a5*/
    {
      v11 = (_DWORD *)*(this + 3); /*0x4382aa*/
      v13 = this + 4; /*0x4382ad*/
      v12 = this + 4; /*0x4382b2*/
      if ( *(this + 7) == 1 ) /*0x4382b3*/
        BlowPipe::DrawAlt(v11, (int)v12, 8, (int)v13); /*0x4382b5*/
      else
        BlowPipe::Draw(v11, (int)v12, 8, (int)v13); /*0x4382bc*/
    }
    else
    {
      memcpy((void *)((char *)this - (char *)v9 + 24), this + 4, (size_t)v9); /*0x4382cd*/
    }
    *(this + 6) = (int)v10; /*0x4382d7*/
    if ( v5 <= 0 ) /*0x4382da*/
      break; /*0x4382da*/
    v3 = aP1; /*0x43824c*/
  }
  return Sizea; /*0x43823b*/
}


// ==== 0x00438300  GameClass::updateUI  this=VOID_PTR  sig=csp ====
_DWORD *__thiscall sub_438300(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // ecx

  result = (_DWORD *)*(this + 3); /*0x438303*/
  if ( !result ) /*0x438308*/
  {
    v5 = __2_YAPAXI_Z(4u); /*0x43830c*/
    if ( v5 ) /*0x438316*/
      result = sub_437F50(v5); /*0x43831a*/
    else
      result = 0; /*0x438321*/
    *(this + 3) = result; /*0x438323*/
  }
  v6 = (_DWORD *)*(this + 3); /*0x438326*/
  if ( v6 ) /*0x43832c*/
    return (_DWORD *)GameClass::initGameMode(v6, a2, a3); /*0x438338*/
  return result; /*0x438329*/
}


// ==== 0x00438340  sub_438340  this=-  sig=ida-proto ====
void sub_438340()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x43834c*/
  unk_89C6A0 = Math::Sqrt(v0 + v0); /*0x43835e*/
}


// ==== 0x00438370  sub_438370  this=-  sig=ida-proto ====
void sub_438370()
{
  unk_89C6F0 = unk_89C6A0 / 60.0; /*0x43837c*/
}


// ==== 0x00438390  sub_438390  this=-  sig=ida-proto ====
void sub_438390()
{
  unk_89C6D8 = 1.0 / unk_89C6F0; /*0x43839c*/
}


// ==== 0x004383B0  sub_4383B0  this=-  sig=ida-proto ====
void sub_4383B0()
{
  unk_89C6D0 = 0.0174532925199433 * 45.0; /*0x4383bc*/
}


// ==== 0x004383D0  sub_4383D0  this=-  sig=ida-proto ====
void sub_4383D0()
{
  unk_89C6A8 = 0.0174532925199433 * 60.0; /*0x4383dc*/
}


// ==== 0x004383F0  sub_4383F0  this=-  sig=ida-proto ====
void sub_4383F0()
{
  unk_89C680 = 0.0174532925199433 * 90.0; /*0x4383fc*/
}


// ==== 0x00438410  sub_438410  this=-  sig=ida-proto ====
__int64 sub_438410()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89C680 - unk_89C6A8); /*0x438422*/
  result = Math::RoundToInt(v0 * unk_89C6A0 * 0.5); /*0x438436*/
  unk_89C6F8 = result; /*0x43843b*/
  return result; /*0x438440*/
}


// ==== 0x00438450  sub_438450  this=-  sig=ida-proto ====
void sub_438450()
{
  unk_89C6B0 = Math::ArcTan((double)unk_89C6F8 * 0.00390625); /*0x438467*/
}


// ==== 0x00438480  sub_438480  this=-  sig=ida-proto ====
void sub_438480()
{
  unk_89C6C8 = Math::ArcTan((double)(2 * unk_89C6F8) / unk_89C6A0); /*0x4384a2*/
}


// ==== 0x004384B0  sub_4384B0  this=-  sig=ida-proto ====
__int64 sub_4384B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89C6F8) + 0.5); /*0x4384cb*/
  unk_89C6EC = result; /*0x4384d0*/
  return result; /*0x4384d6*/
}


// ==== 0x004384E0  sub_4384E0  this=-  sig=ida-proto ====
int sub_4384E0()
{
  unk_89C698 = 0; /*0x4384e2*/
  unk_89C69A = 0; /*0x4384e8*/
  return 0; /*0x4384ee*/
}


// ==== 0x004384F0  sub_4384F0  this=-  sig=ida-proto ====
int sub_4384F0()
{
  unk_89C6B8 = 0; /*0x4384f2*/
  unk_89C6BC = 0; /*0x4384f7*/
  unk_89C6C0 = 0; /*0x4384fc*/
  return 0; /*0x438501*/
}


// ==== 0x00438510  sub_438510  this=-  sig=ida-proto ====
int sub_438510()
{
  unk_89C6E8 = 0; /*0x438515*/
  unk_89C6E0 = 128; /*0x43851f*/
  unk_89C6E4 = 128; /*0x438524*/
  return 128; /*0x438529*/
}


// ==== 0x00438530  sub_438530  this=-  sig=ida-proto ====
int sub_438530()
{
  unk_89C688 = 0; /*0x438532*/
  unk_89C68C = 0; /*0x438537*/
  unk_89C690 = 0; /*0x43853c*/
  unk_89C694 = 0; /*0x438541*/
  return 0; /*0x438546*/
}


// ==== 0x00438550  BombClass::InitPool  this=BombClass  sig=ida-proto ====
int BombClass_InitPool()
{
  unk_89C66C = 0; /*0x438557*/
  dword_89C670 = 0; /*0x43855c*/
  unk_89C674 = 1; /*0x438561*/
  unk_89C675 = 0; /*0x438568*/
  dword_89C668 = (int)&vt_DynamicVectorClass_BombClass; /*0x43856d*/
  dword_89C67C = 10; /*0x438577*/
  dword_89C678 = 0; /*0x438581*/
  return atexit(globalHelper_038590); /*0x43858c*/
}


// ==== 0x00438590  globalHelper_038590  this=-  sig=ida-proto ====
void __cdecl sub_438590()
{
  dword_89C668 = (int)&vt_VectorClass_BombClass; /*0x438598*/
  if ( unk_89C66C && unk_89C675 ) /*0x4385ac*/
  {
    __3_YAXPAX_Z(unk_89C66C); /*0x4385af*/
    unk_89C66C = 0; /*0x4385b7*/
  }
  unk_89C675 = 0; /*0x4385bd*/
  dword_89C670 = 0; /*0x4385c3*/
}


// ==== 0x004385D0  BombClass::AbstractClass  this=BombClass  sig=csp ====
int __thiscall BombClass::AbstractClass(int this)
{
  int v2; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x4385d4*/
  *(_DWORD *)(this + 84) = 0; /*0x4385de*/
  *(_DWORD *)this = &BombClass::`vftable'; /*0x4385e1*/
  *(_DWORD *)(this + 4) = &BombClass::`vftable'; /*0x4385e7*/
  *(_DWORD *)(this + 8) = &BombClass::`vftable'; /*0x4385ee*/
  *(_DWORD *)(this + 12) = &vt_BombClass; /*0x4385f5*/
  *(_DWORD *)(this + 40) = 0; /*0x4385fc*/
  *(_DWORD *)(this + 44) = 0; /*0x4385ff*/
  *(_BYTE *)(this + 88) = 0; /*0x438602*/
  AudioController::Init((_DWORD *)(this + 60)); /*0x438605*/
  *(_DWORD *)(this + 80) = MEMORY[0x8871E0]->ZoomInFactor; /*0x438615*/
  if ( dword_89C678 < dword_89C670 /*0x43864a*/
    || (unk_89C675 || !dword_89C670)
    && dword_89C67C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89C668 + 8))(
         &dword_89C668,
         dword_89C670 + dword_89C67C,
         0) )
  {
    v2 = dword_89C678++; /*0x438657*/
    *((_DWORD *)unk_89C66C + v2) = this; /*0x438666*/
  }
  return this; /*0x43866b*/
}


// ==== 0x00438720  TechnoClass::ApplyDamageEffects  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass_ApplyDamageEffects(int this)
{
  int result; // eax
  char v3; // cl
  int *v4; // edx
  void **v5; // edi
  int v6; // ebx
  void *VersusMultiplier; // eax
  int v8; // ecx
  int v9; // ebx
  int v10; // ebp
  _WORD *v11; // eax
  int v12; // edi
  _WORD *v13; // eax
  __int16 v14; // cx
  int v15; // eax
  int v16; // eax
  void *v17; // [esp-8h] [ebp-40h]
  char v18; // [esp+13h] [ebp-25h]
  int v19; // [esp+14h] [ebp-24h]
  int v20; // [esp+14h] [ebp-24h]
  int v21; // [esp+18h] [ebp-20h] BYREF
  int v22; // [esp+1Ch] [ebp-1Ch] BYREF
  int v23; // [esp+20h] [ebp-18h] BYREF
  _BYTE v24[4]; // [esp+24h] [ebp-14h] BYREF
  _BYTE v25[4]; // [esp+28h] [ebp-10h] BYREF
  int v26; // [esp+2Ch] [ebp-Ch] BYREF
  int v27; // [esp+30h] [ebp-8h]
  int v28; // [esp+34h] [ebp-4h]

  result = *(_DWORD *)(this + 44); /*0x43872b*/
  if ( result && !*(_BYTE *)(this + 88) ) /*0x438736*/
  {
    v3 = *(_BYTE *)(result + 129); /*0x438741*/
    *(_DWORD *)(result + 56) = 0; /*0x438747*/
    if ( v3 ) /*0x43874c*/
    {
      *(_BYTE *)(*(_DWORD *)(this + 44) + 104) = 0; /*0x438751*/
      *(_BYTE *)(this + 88) = 1; /*0x438755*/
    }
    else
    {
      *(_BYTE *)(*(_DWORD *)(this + 44) + 104) = 0; /*0x438764*/
      v4 = (int *)(*(_DWORD *)(this + 44) + 156); /*0x43876b*/
      *(_BYTE *)(this + 88) = 1; /*0x438771*/
      v26 = *v4; /*0x438777*/
      v27 = v4[1]; /*0x438783*/
      v28 = v4[2]; /*0x43878a*/
      PlaySoundEffectAt( /*0x4387a3*/
        &v26,
        *((_DWORD *)MEMORY[0x8871E0] + 1011),
        *(_DWORD **)(this + 36),
        *((_DWORD *)MEMORY[0x8871E0] + 1010),
        1,
        0);
      v5 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4387b2*/
      if ( v5 ) /*0x4387b9*/
      {
        LOWORD(v19) = v26 / 256; /*0x4387d9*/
        HIWORD(v19) = v27 / 256; /*0x4387ee*/
        v21 = v19; /*0x4387f7*/
        v6 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v21) + 59); /*0x438800*/
        v17 = (void *)Return::HRESULT_Fail(v26, v27, v28); /*0x438825*/
        VersusMultiplier = (void *)GetWarheadVersusMultiplier( /*0x43884a*/
                                     *((_DWORD *)MEMORY[0x8871E0] + 1011),
                                     *((_DWORD *)MEMORY[0x8871E0] + 1010),
                                     v6,
                                     &v26);
        AnimClass::ctor(v5, VersusMultiplier, &v26, 0, 1, (void *)0x2600, v17, 0); /*0x438852*/
      }
      v8 = *(_DWORD *)(this + 44); /*0x438857*/
      if ( v8 /*0x438879*/
        && (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 44))(v8) == 6
        && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 44) + 1312) + 5814) )
      {
        v18 = 0; /*0x438887*/
        v9 = -2; /*0x43888c*/
        do /*0x438946*/
        {
          v10 = -2; /*0x438891*/
          do /*0x43893c*/
          {
            v11 = (_WORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 44) + 440))( /*0x4388a0*/
                             *(_DWORD *)(this + 44),
                             v24);
            HIWORD(v20) = v9 + v11[1]; /*0x4388b3*/
            LOWORD(v20) = *v11 + v10; /*0x4388b8*/
            v22 = v20; /*0x4388c5*/
            v12 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v22) + 14); /*0x4388d7*/
            v13 = (_WORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 44) + 440))( /*0x4388e1*/
                             *(_DWORD *)(this + 44),
                             v25);
            v14 = *v13 + v10; /*0x4388ee*/
            HIWORD(v21) = v9 + v13[1]; /*0x4388f4*/
            LOWORD(v21) = v14; /*0x4388f9*/
            v23 = v21; /*0x438906*/
            v15 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v23) + 17); /*0x43891b*/
            if ( v12 >= g_TerrainBridgeIndex && v12 < g_TerrainBridgeIndex + 16 || v15 >= 74 && v15 <= 101 ) /*0x438931*/
              v18 = 1; /*0x438933*/
            ++v10; /*0x438938*/
          }
          while ( v10 < 3 ); /*0x43893c*/
          ++v9; /*0x438942*/
        }
        while ( v9 < 3 ); /*0x438946*/
        v16 = (*(int (__stdcall **)(_BYTE *))(**(_DWORD **)(this + 44) + 440))(v25); /*0x43895e*/
        if ( v18 ) /*0x438957*/
          MapClass::ApplyTerrainDamage(v16); /*0x43896a*/
        else
          TerrainClass::ProcessSlope(v16); /*0x438982*/
      }
    }
    *(_DWORD *)(this + 36) = 0; /*0x43898c*/
    *(_DWORD *)(this + 44) = 0; /*0x43898f*/
    *(_DWORD *)(this + 40) = 0; /*0x438992*/
    result = AudioFile::Stop((_DWORD *)(this + 60)); /*0x438995*/
    *(_DWORD *)(this + 84) = 0; /*0x43899a*/
  }
  return result; /*0x43899d*/
}


// ==== 0x004389B0  ObjectClass::CleanupAudioAndRefs  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass_CleanupAudioAndRefs(int this)
{
  int v2; // eax
  int result; // eax

  v2 = *(_DWORD *)(this + 44); /*0x4389b6*/
  if ( v2 ) /*0x4389bb*/
  {
    *(_DWORD *)(v2 + 56) = 0; /*0x4389bd*/
    *(_BYTE *)(*(_DWORD *)(this + 44) + 104) = 0; /*0x4389c3*/
  }
  *(_BYTE *)(this + 88) = 1; /*0x4389c9*/
  *(_DWORD *)(this + 36) = 0; /*0x4389cd*/
  *(_DWORD *)(this + 44) = 0; /*0x4389d0*/
  *(_DWORD *)(this + 40) = 0; /*0x4389d3*/
  result = AudioFile::Stop((_DWORD *)(this + 60)); /*0x4389d6*/
  *(_DWORD *)(this + 84) = 0; /*0x4389db*/
  return result; /*0x4389de*/
}


// ==== 0x004389F0  BombClass::IsDeathBomb  this=VOID_PTR  sig=csp ====
int __thiscall BombClass::IsDeathBomb(_DWORD *this)
{
  return *(this + 12); /*0x4389f3*/
}


// ==== 0x00438A00  BombClass::GetCurrentFrame  this=int  sig=csp ====
Iostream_init *__thiscall BombClass::GetCurrentFrame(_DWORD *this)
{
  int v2; // ecx

  if ( *(this + 12) == 1 ) /*0x438a04*/
    return (Iostream_init *)12; /*0x438a06*/
  v2 = 2 * (((int)MEMORY[0xA8ED84] - *(this + 13)) / (MEMORY[0x8871E0]->?[1] / 6)); /*0x438a4c*/
  if ( (int)MEMORY[0xA8ED84] % (2 * MEMORY[0x8871E0]->?[3]) >= MEMORY[0x8871E0]->?[3] ) /*0x438a53*/
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
bool __thiscall BombClass::TimeToExplode(int this)
{
  return !*(_DWORD *)(this + 48) && (int)MEMORY[0xA8ED84] > *(_DWORD *)(this + 56) && !*(_BYTE *)(this + 88); /*0x438a8c*/
}


// ==== 0x00438A90  BombClass::Stat  this=BombClass  sig=csp ====
int __thiscall BombClass::_vt13(int this, int *a2)
{
  int v3; // edx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax

  AbstractClass::ProcessPower((#378 *)this); /*0x438a99*/
  v4 = *(_DWORD *)(this + 40); /*0x438a9e*/
  if ( v4 ) /*0x438aa3*/
  {
    v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(v4 + 4) + 16))(v4 + 4); /*0x438aac*/
    Power::TimerProcess(v5); /*0x438ab2*/
  }
  v6 = *(_DWORD *)(this + 36); /*0x438ab7*/
  if ( v6 ) /*0x438abc*/
  {
    v7 = (*(int (__stdcall **)(int))(*(_DWORD *)(v6 + 4) + 16))(v6 + 4); /*0x438ac5*/
    Power::TimerProcess(v7); /*0x438acb*/
  }
  v8 = *(_DWORD *)(this + 44); /*0x438ad0*/
  if ( v8 ) /*0x438ad5*/
  {
    v9 = (*(int (__stdcall **)(int))(*(_DWORD *)(v8 + 4) + 16))(v8 + 4); /*0x438ade*/
    Power::TimerProcess(v9); /*0x438ae4*/
  }
  LOBYTE(v3) = *(_BYTE *)(this + 88); /*0x438ae9*/
  return Power::FlagProcess(a2, v3); /*0x438af4*/
}


// ==== 0x00438B00  BombClass::ddtor  this=BombClass  sig=csp ====
int __stdcall BombClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x438b06*/
    return -2147467261; /*0x438b08*/
  *a2 = 108652931; /*0x438b16*/
  a2[1] = 299085213; /*0x438b1e*/
  a2[2] = 268441278; /*0x438b27*/
  a2[3] = 1822515787; /*0x438b30*/
  return 0; /*0x438b0d*/
}


// ==== 0x00438B40  BombClass::Write  this=BombClass  sig=csp ====
int __stdcall BombClass::Write(AbstractClass *aP0, int aP1)
{
  AbstractClass *Prefix_0; // edi

  Prefix_0 = (AbstractClass *)AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x438b51*/
  if ( (int)Prefix_0 >= 0 ) /*0x438b55*/
  {
    if ( aP0 ) /*0x438b59*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x438b62*/
      *(_DWORD *)aP0->__pad_0 = &BombClass::`vftable'; /*0x438b67*/
      *(_DWORD *)&aP0->__pad_0[4] = &BombClass::`vftable'; /*0x438b6d*/
      *(_DWORD *)&aP0->__pad_0[8] = &BombClass::`vftable'; /*0x438b74*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_BombClass; /*0x438b7b*/
    }
    AudioController::Init(&aP0[1].nextArrayIndex); /*0x438b85*/
    *(_DWORD *)&aP0[2].__pad_0[12] = 0; /*0x438b8d*/
    ObjectPtr::RegisterForTracking( /*0x438b9a*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]); /*0x438ba8*/
    ObjectPtr::RegisterForTracking( /*0x438bb6*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[8]);
  }
  return (int)Prefix_0->__pad_0; /*0x438bbd*/
}


// ==== 0x00438BD0  BombClass::Seek  this=BombClass  sig=csp ====
int __stdcall BombClass::Seek(TechnoTypeClass *aP0, int *a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x438be4*/
}


// ==== 0x00438BF0  ObjectClass::DispatchBuildingAudioEvents  this=int  sig=csp ====
int __thiscall DispatchBuildingAudioEvents(int *this)
{
  int i; // esi
  _DWORD *v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int j; // ebx
  _DWORD *v11; // esi
  int v12; // ecx
  int v13; // eax
  int *v14; // eax
  int v15; // eax
  int result; // eax
  int v17; // eax
  int v18; // ebx
  char v19; // al
  int v20; // ebp
  int v21; // esi
  #375 *v22; // eax
  _DWORD *v23; // ebp
  _DWORD *v24; // eax
  int v25; // ecx
  int v26; // edx
  double v27; // st7
  __int64 v28; // rax
  char v29; // [esp+26h] [ebp-2Eh]
  char v30; // [esp+27h] [ebp-2Dh]
  int v31; // [esp+28h] [ebp-2Ch]
  int v32; // [esp+2Ch] [ebp-28h]
  int v33; // [esp+30h] [ebp-24h] BYREF
  int v34; // [esp+34h] [ebp-20h]
  int v35; // [esp+38h] [ebp-1Ch]
  _DWORD v36[3]; // [esp+3Ch] [ebp-18h] BYREF
  char v37[12]; // [esp+48h] [ebp-Ch] BYREF

  for ( i = *(this + 4) - 1; i >= 0; --i ) /*0x438c03*/
  {
    v3 = *(_DWORD **)(*(this + 1) + 4 * i); /*0x438c08*/
    if ( v3 ) /*0x438c0d*/
    {
      if ( !v3[11] ) /*0x438c36*/
      {
        (*(void (__thiscall **)(_DWORD *, int))(*v3 + 32))(v3, 1); /*0x438c41*/
        v7 = *(this + 4); /*0x438c44*/
        if ( i < v7 ) /*0x438c49*/
        {
          v8 = v7 - 1; /*0x438c4b*/
          v9 = i; /*0x438c4e*/
          for ( *(this + 4) = v8; /*0x438c55*/
                v9 < *(this + 4);
                *(_DWORD *)(*(this + 1) + 4 * v9 - 4) = *(_DWORD *)(*(this + 1) + 4 * v9) )
          {
            ++v9; /*0x438c5a*/
          }
        }
      }
    }
    else
    {
      v4 = *(this + 4); /*0x438c0f*/
      if ( i < v4 ) /*0x438c14*/
      {
        v5 = v4 - 1; /*0x438c16*/
        v6 = i; /*0x438c19*/
        for ( *(this + 4) = v5; v6 < *(this + 4); *(_DWORD *)(*(this + 1) + 4 * v6 - 4) = *(_DWORD *)(*(this + 1) + 4 * v6) ) /*0x438c20*/
          ++v6; /*0x438c25*/
      }
    }
  }
  for ( j = *(this + 4) - 1; j >= 0; --j ) /*0x438c70*/
  {
    v11 = *(_DWORD **)(*(this + 1) + 4 * j); /*0x438c79*/
    v12 = v11[20]; /*0x438c7c*/
    if ( v12 != -1 ) /*0x438c82*/
    {
      v13 = v11[11]; /*0x438c84*/
      if ( *(_BYTE *)(v13 + 129) ) /*0x438c87*/
      {
        AudioController::Stop(v11 + 15); /*0x438c94*/
        v11[21] = 0; /*0x438c99*/
      }
      else
      {
        v14 = (int *)(v13 + 156); /*0x438ca9*/
        if ( v11[21] ) /*0x438ca2*/
        {
          v36[0] = *v14; /*0x438cdf*/
          v36[1] = v14[1]; /*0x438cea*/
          v36[2] = v14[2]; /*0x438cf4*/
          StartAudioController((int)v36, (int)(v11 + 15)); /*0x438cf8*/
        }
        else
        {
          v33 = *v14; /*0x438cb0*/
          v34 = v14[1]; /*0x438cb7*/
          v35 = v14[2]; /*0x438cc6*/
          StartAudioControllerAt(v12, (int)&v33, (int)(v11 + 15)); /*0x438cca*/
          v11[21] = 1; /*0x438ccf*/
        }
      }
    }
  }
  v15 = *(this + 12); /*0x438d04*/
  if ( v15 > 0 ) /*0x438d09*/
  {
    result = v15 - 1; /*0x438d0b*/
    *(this + 12) = result; /*0x438d0c*/
    return result; /*0x438d16*/
  }
  v17 = *(this + 4); /*0x438d17*/
  *(this + 12) = 45; /*0x438d1a*/
  result = v17 - 1; /*0x438d21*/
  v32 = result; /*0x438d22*/
  if ( result >= 0 ) /*0x438d26*/
  {
    while ( 1 ) /*0x438d2f*/
    {
      v29 = 0; /*0x438d2f*/
      v18 = *(_DWORD *)(*(this + 1) + 4 * result); /*0x438d34*/
      v30 = *(_BYTE *)(*(_DWORD *)(v18 + 44) + 104); /*0x438d40*/
      if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)(v18 + 40)) ) /*0x438d44*/
      {
        v19 = 1; /*0x438d4d*/
        goto LABEL_33; /*0x438d4f*/
      }
      v20 = 0; /*0x438d57*/
      v31 = 0; /*0x438d5b*/
      if ( *(this + 10) <= 0 ) /*0x438d5f*/
        goto LABEL_32; /*0x438d5f*/
      while ( 1 ) /*0x438d68*/
      {
        v21 = *(_DWORD *)(*(this + 7) + 4 * v20); /*0x438d68*/
        v22 = (#375 *)(*(int (__thiscall **)(int))(*(_DWORD *)v21 + 60))(v21); /*0x438d6f*/
        if ( (unsigned __int8)House::IsHumanPlayer(v22) ) /*0x438d74*/
          break; /*0x438d74*/
LABEL_29:
        v31 = ++v20; /*0x438e17*/
        if ( v20 >= *(this + 10) ) /*0x438e1b*/
          goto LABEL_32; /*0x438e1b*/
      }
      v23 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(v18 + 44) + 72))( /*0x438d92*/
                        *(_DWORD *)(v18 + 44),
                        v36);
      v24 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v21 + 72))(v21, v37); /*0x438d99*/
      v25 = v24[1]; /*0x438da3*/
      v33 = *v24 - *v23; /*0x438da6*/
      v26 = v24[2]; /*0x438daf*/
      v34 = v25 - v23[1]; /*0x438db2*/
      v35 = v26 - v23[2]; /*0x438dbe*/
      v27 = Math::Sqrt((double)v33 * (double)v33 + (double)v34 * (double)v34 + (double)v35 * (double)v35); /*0x438de7*/
      v28 = Math::RoundToInt(v27); /*0x438def*/
      if ( (int)v28 >= *(_DWORD *)((*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v21 + 132))(v21, HIDWORD(v28)) + 1528) << 8 ) /*0x438e0b*/
        break; /*0x438e0b*/
      v29 = 1; /*0x438e22*/
LABEL_32:
      v19 = v29; /*0x438e27*/
LABEL_33:
      *(_BYTE *)(*(_DWORD *)(v18 + 44) + 104) = v19; /*0x438e2b*/
      if ( v19 != v30 ) /*0x438e37*/
        *(_BYTE *)(*(_DWORD *)(v18 + 44) + 128) = 1; /*0x438e3c*/
      result = --v32; /*0x438e47*/
      if ( v32 < 0 ) /*0x438e4c*/
        return result; /*0x438e4c*/
    }
    v20 = v31; /*0x438e0d*/
    goto LABEL_29; /*0x438e0d*/
  }
  return result; /*0x438d0f*/
}


// ==== 0x00438E60  nullsub_99  this=-  sig=ida-proto ====
void nullsub_99()
{
  ; /*0x438e60*/
}


// ==== 0x00438E70  AbstractClass::Initialize  this=int  sig=csp ====
void __thiscall AbstractClass::Initialize(_DWORD *this, TechnoClass *aP1, TechnoClass *aP2)
{
  AbstractClass *v4; // eax
  AbstractClass *v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  _DWORD v12[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( aP1 /*0x438ea3*/
    && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1) == 15
    && aP2
    && !aP2->attachedBomb )
  {
    v4 = (AbstractClass *)__2_YAPAXI_Z(0x5Cu); /*0x438eaf*/
    v5 = v4; /*0x438eb4*/
    if ( v4 ) /*0x438ebb*/
    {
      AbstractClass::Constructor(v4); /*0x438ec3*/
      *(_DWORD *)&v5[2].__pad_0[12] = 0; /*0x438ecb*/
      *(_DWORD *)v5->__pad_0 = &BombClass::`vftable'; /*0x438ece*/
      *(_DWORD *)&v5->__pad_0[4] = &BombClass::`vftable'; /*0x438ed4*/
      *(_DWORD *)&v5->__pad_0[8] = &BombClass::`vftable'; /*0x438edb*/
      *(_DWORD *)&v5->__pad_0[12] = &vt_BombClass; /*0x438ee2*/
      *(_DWORD *)&v5[1].__pad_0[4] = 0; /*0x438ee9*/
      *(_DWORD *)&v5[1].__pad_0[8] = 0; /*0x438eec*/
      LOBYTE(v5[2].uniqueId) = 0; /*0x438eef*/
      AudioController::Init(&v5[1].nextArrayIndex); /*0x438ef2*/
      *(_DWORD *)&v5[2].__pad_0[8] = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 524); /*0x438f03*/
      if ( dword_89C678 < dword_89C670 /*0x438f37*/
        || (unk_89C675 || !dword_89C670)
        && dword_89C67C > 0
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_89C668 + 8))(
             &dword_89C668,
             dword_89C670 + dword_89C67C,
             0) )
      {
        v6 = dword_89C678++; /*0x438f44*/
        *((_DWORD *)unk_89C66C + v6) = v5; /*0x438f53*/
      }
    }
    else
    {
      v5 = 0; /*0x438f58*/
    }
    *(_DWORD *)&v5[1].__pad_0[4] = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)aP1->__pad_0 + 60))(aP1); /*0x438f62*/
    *(_DWORD *)v5[1].__pad_0 = aP1; /*0x438f69*/
    *(_DWORD *)&v5[1].__pad_0[8] = aP2; /*0x438f6c*/
    v5[1].uniqueId = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x438f75*/
    v7 = v5[1].uniqueId + *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4048); /*0x438f87*/
    *(_DWORD *)&v5[1].__pad_0[12] = 0; /*0x438f89*/
    v5[1].abstractFlags = v7; /*0x438f8c*/
    aP2->attachedBomb = v5; /*0x438f8f*/
    v8 = *(this + 2); /*0x438f92*/
    if ( *(this + 4) < v8 /*0x438fb4*/
      || (*((_BYTE *)this + 13) || !v8)
      && (v9 = *(this + 5), v9 > 0)
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v8 + v9, 0) )
    {
      v10 = *(this + 4); /*0x438fbb*/
      v11 = *(this + 1); /*0x438fbe*/
      *(this + 4) = v10 + 1; /*0x438fc4*/
      *(_DWORD *)(v11 + 4 * v10) = v5; /*0x438fc7*/
    }
    *(this + 12) = 1; /*0x438fca*/
    if ( *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 528) != -1 ) /*0x438fde*/
    {
      if ( (unsigned __int8)House::IsHumanPlayer((#375 *)aP1->focus) ) /*0x438fe6*/
      {
        v12[0] = aP2->location[0]; /*0x438ffc*/
        v12[1] = aP2->location[1]; /*0x439007*/
        v12[2] = aP2->location[2]; /*0x439013*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 528), (int)v12, 0); /*0x43901d*/
      }
    }
  }
}


// ==== 0x00439080  TechnoClass::checkRange  this=int  sig=csp ====
char __thiscall TechnoClass::checkRange(_DWORD *this, TechnoClass *aP1)
{
  HashTable *v2; // eax
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // eax
  int v6; // edx

  v2 = (HashTable *)*(this + 10); /*0x439080*/
  v3 = this + 6; /*0x439084*/
  v4 = *(this + 8); /*0x439087*/
  if ( (int)v2 < v4 /*0x4390ae*/
    || ((LOBYTE(v5) = *((_BYTE *)v3 + 13), (_BYTE)v5) || !v4)
    && (v5 = v3[5], v5 > 0)
    && (LOBYTE(v5) = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v4 + v5, 0), (_BYTE)v5) )
  {
    v5 = v3[4]; /*0x4390b0*/
    v6 = v3[1]; /*0x4390b3*/
    v3[4] = v5 + 1; /*0x4390b9*/
    *(_DWORD *)(v6 + 4 * v5) = aP1; /*0x4390c0*/
  }
  return v5; /*0x4390c3*/
}


// ==== 0x004390D0  TechnoClass::RemoveFromDynamicVector  this=int  sig=csp ====
int __thiscall TechnoClass::RemoveFromDynamicVector(_DWORD *this, TechnoClass *aP1)
{
  _DWORD *v2; // esi
  int result; // eax
  int v4; // ecx
  int v5; // ecx

  v2 = this + 6; /*0x4390d4*/
  result = (*(int (__thiscall **)(_DWORD *, TechnoClass **))(*(this + 6) + 16))(this + 6, &aP1); /*0x4390de*/
  if ( result != -1 ) /*0x4390e4*/
  {
    v4 = v2[4]; /*0x4390e6*/
    if ( result < v4 ) /*0x4390eb*/
    {
      v5 = v4 - 1; /*0x4390ed*/
      for ( v2[4] = v5; result < v2[4]; *(_DWORD *)(v2[1] + 4 * result - 4) = *(_DWORD *)(v2[1] + 4 * result) ) /*0x4390f3*/
        ++result; /*0x4390f8*/
    }
  }
  return result; /*0x439107*/
}


// ==== 0x00439110  Stream::FlushAndReset  this=int  sig=csp ====
int __thiscall Stream::FlushAndReset(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // edi

  v1 = this; /*0x439111*/
  v2 = *this; /*0x439114*/
  v3 = *(this + 2); /*0x439116*/
  *(this + 12) = 45; /*0x439119*/
  (*(void (**)(void))(v2 + 12))(); /*0x439120*/
  (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v1 + 8))(v1, v3, 0); /*0x43912a*/
  v4 = v1[6]; /*0x43912d*/
  v5 = v1[8]; /*0x439130*/
  v1 += 6; /*0x439133*/
  (*(void (__thiscall **)(_DWORD *))(v4 + 12))(v1); /*0x439138*/
  return (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*v1 + 8))(v1, v5, 0); /*0x439145*/
}


// ==== 0x00439150  AbstractClass::processDetection  this=int  sig=csp ====
int __thiscall AbstractClass::processDetection(int *this, AbstractClass *aP1)
{
  AbstractClass *v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int result; // eax
  int i; // ecx
  int v9; // eax

  v3 = aP1; /*0x439158*/
  v4 = (*(int (__thiscall **)(int *, AbstractClass **))(*this + 16))(this, &aP1); /*0x439165*/
  if ( v4 != -1 ) /*0x43916b*/
  {
    v5 = *(this + 4); /*0x43916d*/
    if ( v4 < v5 ) /*0x439172*/
    {
      v6 = v5 - 1; /*0x439174*/
      for ( *(this + 4) = v6; v4 < *(this + 4); *(_DWORD *)(*(this + 1) + 4 * v4 - 4) = *(_DWORD *)(*(this + 1) + 4 * v4) ) /*0x43917a*/
        ++v4; /*0x43917f*/
    }
  }
  result = *(this + 4); /*0x43918e*/
  for ( i = 0; i < result; ++i ) /*0x439197*/
  {
    v9 = *(_DWORD *)(*(this + 1) + 4 * i); /*0x43919c*/
    if ( v9 ) /*0x4391a1*/
    {
      if ( *(AbstractClass **)(v9 + 36) == v3 ) /*0x4391a6*/
        *(_DWORD *)(v9 + 36) = 0; /*0x4391a8*/
    }
    result = *(this + 4); /*0x4391ab*/
  }
  return result; /*0x4391b3*/
}


// ==== 0x004391C0  SaveGame::LoadArrayData  this=int  sig=csp ====
int __thiscall sub_4391C0(int *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // ebx
  int v6; // ecx
  int i; // ebx
  int v8; // [esp+40h] [ebp-4h] BYREF

  v3 = *a2; /*0x4391cc*/
  v8 = *(this + 4); /*0x4391d9*/
  result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(a2, &v8, 4, 0); /*0x4391dd*/
  if ( result >= 0 ) /*0x4391e2*/
  {
    v5 = 0; /*0x4391e8*/
    if ( v8 <= 0 ) /*0x4391ec*/
    {
LABEL_5:
      v6 = *a2; /*0x43920c*/
      v8 = *(this + 10); /*0x43921b*/
      result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v6 + 16))(a2, &v8, 4, 0); /*0x43921f*/
      if ( result >= 0 ) /*0x439224*/
      {
        for ( i = 0; i < v8; ++i ) /*0x43922e*/
        {
          result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, *(this + 7) + 4 * i, 4, 0); /*0x43923e*/
          if ( result < 0 ) /*0x439243*/
            break; /*0x439243*/
        }
      }
    }
    else
    {
      while ( 1 ) /*0x4391fc*/
      {
        result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, *(this + 1) + 4 * v5, 4, 0); /*0x4391fc*/
        if ( result < 0 ) /*0x439201*/
          break; /*0x439201*/
        if ( ++v5 >= v8 ) /*0x43920a*/
          goto LABEL_5; /*0x43920a*/
      }
    }
  }
  return result; /*0x43924e*/
}


// ==== 0x00439260  LoadGame::DeserializePointerArrays  this=int  sig=csp ====
int __thiscall sub_439260(_DWORD *this, int a2)
{
  int v2; // ebx
  int result; // eax
  int v5; // eax
  int v6; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // esi
  int v12; // ebp
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // edx
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
          ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(*(this + 1) + 4 * v11++)); /*0x4392ff*/
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
              ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(*(this + 7) + 4 * v18++)); /*0x4393b0*/
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
            v14 = *(this + 8); /*0x43934b*/
            if ( *(this + 10) < v14 /*0x439373*/
              || (*((_BYTE *)this + 37) || !v14)
              && (v15 = *(this + 11), v15 > 0)
              && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*(this + 6) + 8))(this + 6, v14 + v15, 0) )
            {
              v16 = *(this + 10); /*0x43937a*/
              v17 = *(this + 7); /*0x43937d*/
              *(this + 10) = v16 + 1; /*0x439383*/
              *(_DWORD *)(v17 + 4 * v16) = v21; /*0x43938a*/
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
        v7 = *(this + 2); /*0x4392a5*/
        if ( *(this + 4) < v7 /*0x4392ca*/
          || (*((_BYTE *)this + 13) || !v7)
          && (v8 = *(this + 5), v8 > 0)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v7 + v8, 0) )
        {
          v9 = *(this + 4); /*0x4392d1*/
          v10 = *(this + 1); /*0x4392d4*/
          *(this + 4) = v9 + 1; /*0x4392da*/
          *(_DWORD *)(v10 + 4 * v9) = v20; /*0x4392e1*/
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
int BombClass::_vt12()
{
  return 92; /*0x4393d5*/
}


// ==== 0x004393E0  BombClass::StubReturn68  this=BombClass  sig=csp ====
int BombClass::_vt11()
{
  return 68; /*0x4393e5*/
}


// ==== 0x004393F0  BombClass::CopyTo  this=BombClass  sig=csp ====
BombClass *__thiscall BombClass::CopyTo(_DWORD *Block, char a2)
{
  int v3; // eax
  _DWORD *v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &BombClass::`vftable'; /*0x4393f7*/
  *(Block + 1) = &BombClass::`vftable'; /*0x4393fd*/
  *(Block + 2) = &BombClass::`vftable'; /*0x439404*/
  *(Block + 3) = &vt_BombClass; /*0x43940b*/
  AudioFileClass::Release(Block + 15); /*0x439412*/
  v5 = Block; /*0x439427*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(dword_89C668 + 16))(&dword_89C668, &v5); /*0x43942b*/
  if ( v3 != -1 && v3 < dword_89C678 && v3 < --dword_89C678 ) /*0x439446*/
  {
    do /*0x43945e*/
    {
      ++v3; /*0x43944e*/
      *((_DWORD *)unk_89C66C + v3 - 1) = *((_DWORD *)unk_89C66C + v3); /*0x439452*/
    }
    while ( v3 < dword_89C678 ); /*0x43945e*/
  }
  AbstractClass::DTOR(Block); /*0x439462*/
  if ( (a2 & 1) != 0 ) /*0x43946c*/
    __3_YAXPAX_Z(Block); /*0x43946f*/
  return (BombClass *)Block; /*0x439479*/
}


// ==== 0x00439480  sub_439480  this=-  sig=ida-proto ====
int sub_439480()
{
  unk_89C708 = 0; /*0x439482*/
  unk_89C70C = 0; /*0x439487*/
  unk_89C710 = 0; /*0x43948c*/
  unk_89C714 = 0; /*0x439491*/
  return 0; /*0x439496*/
}


// ==== 0x004394A0  sub_4394A0  this=-  sig=ida-proto ====
void sub_4394A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4394ac*/
  unk_89C720 = Math::Sqrt(v0 + v0); /*0x4394be*/
}


// ==== 0x004394D0  sub_4394D0  this=-  sig=ida-proto ====
void sub_4394D0()
{
  unk_89C770 = unk_89C720 / 60.0; /*0x4394dc*/
}


// ==== 0x004394F0  sub_4394F0  this=-  sig=ida-proto ====
void sub_4394F0()
{
  unk_89C758 = 1.0 / unk_89C770; /*0x4394fc*/
}


// ==== 0x00439510  sub_439510  this=-  sig=ida-proto ====
void sub_439510()
{
  unk_89C750 = 0.0174532925199433 * 45.0; /*0x43951c*/
}


// ==== 0x00439530  sub_439530  this=-  sig=ida-proto ====
void sub_439530()
{
  unk_89C728 = 0.0174532925199433 * 60.0; /*0x43953c*/
}


// ==== 0x00439550  sub_439550  this=-  sig=ida-proto ====
void sub_439550()
{
  unk_89C700 = 0.0174532925199433 * 90.0; /*0x43955c*/
}


// ==== 0x00439570  sub_439570  this=-  sig=ida-proto ====
__int64 sub_439570()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89C700 - unk_89C728); /*0x439582*/
  result = Math::RoundToInt(v0 * unk_89C720 * 0.5); /*0x439596*/
  unk_89C778 = result; /*0x43959b*/
  return result; /*0x4395a0*/
}


// ==== 0x004395B0  sub_4395B0  this=-  sig=ida-proto ====
void sub_4395B0()
{
  unk_89C730 = Math::ArcTan((double)unk_89C778 * 0.00390625); /*0x4395c7*/
}


// ==== 0x004395E0  sub_4395E0  this=-  sig=ida-proto ====
void sub_4395E0()
{
  unk_89C748 = Math::ArcTan((double)(2 * unk_89C778) / unk_89C720); /*0x439602*/
}


// ==== 0x00439610  sub_439610  this=-  sig=ida-proto ====
__int64 sub_439610()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89C778) + 0.5); /*0x43962b*/
  unk_89C76C = result; /*0x439630*/
  return result; /*0x439636*/
}


// ==== 0x00439640  sub_439640  this=-  sig=ida-proto ====
int sub_439640()
{
  unk_89C718 = 0; /*0x439642*/
  unk_89C71A = 0; /*0x439648*/
  return 0; /*0x43964e*/
}


// ==== 0x00439650  sub_439650  this=-  sig=ida-proto ====
int sub_439650()
{
  unk_89C738 = 0; /*0x439652*/
  unk_89C73C = 0; /*0x439657*/
  unk_89C740 = 0; /*0x43965c*/
  return 0; /*0x439661*/
}


// ==== 0x00439670  sub_439670  this=-  sig=ida-proto ====
int sub_439670()
{
  unk_89C768 = 0; /*0x439675*/
  unk_89C760 = 128; /*0x43967f*/
  unk_89C764 = 128; /*0x439684*/
  return 128; /*0x439689*/
}


// ==== 0x004397E0  AnimClass::InitRotation  this=AbstractClass  sig=csp ====
// local variable allocation has failed, the output may be wrong!
_DWORD *__thiscall AnimClass::InitRotation(
        void *this,
        IUnknown *aP1,
        int a3,
        int a4,
        int a5,
        int a6,
        IUnknown *aP6,
        IUnknown *aP7,
        _DWORD *a8,
        IUnknown *aP9)
{
  double v11; // st7
  float v12; // eax
  float v13; // ecx
  IUnknown *v14; // edx
  float *v15; // eax
  float *v16; // eax
  IUnknown *v18; // [esp+4h] [ebp-64h]
  float v19; // [esp+Ch] [ebp-5Ch] BYREF
  float v20; // [esp+10h] [ebp-58h]
  IUnknown *v21; // [esp+14h] [ebp-54h]
  IUnknown *v22; // [esp+18h] [ebp-50h] BYREF
  IUnknown *v23; // [esp+1Ch] [ebp-4Ch]
  float v24; // [esp+20h] [ebp-48h]
  float v25[4]; // [esp+28h] [ebp-40h] BYREF
  float v26[12]; // [esp+38h] [ebp-30h] BYREF
  int v27; // [esp+70h] [ebp+8h]
  ScenarioClass *a8a; // [esp+88h] [ebp+20h]

  *(_DWORD *)this = a3; /*0x4397f7*/
  this->vtable2 = a4; /*0x4397fd*/
  this->vtable3 = a5; /*0x439804*/
  this->vtable4 = a6; /*0x43980e*/
  this->uniqueId = aP6; /*0x439815*/
  this->abstractFlags = aP7; /*0x439818*/
  *((float *)this + 6) = (float)aP1->field_0; /*0x439829*/
  *((float *)this + 7) = (float)aP1->field_4; /*0x43982f*/
  *((float *)this + 8) = (float)aP1->field_8; /*0x439838*/
  this->q024 = *a8; /*0x43983d*/
  this->q028 = a8[1]; /*0x439842*/
  this->q02C = a8[2]; /*0x439848*/
  v27 = Random::Range(&MEMORY[0xA8B230]->random[1], (IUnknown *)0xFFFF0001, (IUnknown *)0xFFFF); /*0x43985c*/
  a8a = (ScenarioClass *)Random::Range(&MEMORY[0xA8B230]->random[1], (IUnknown *)0xFFFF0001, (IUnknown *)0xFFFF); /*0x439890*/
  v19 = (double)Random::Range(&MEMORY[0xA8B230]->random[1], (IUnknown *)0xFFFF0001, (IUnknown *)0xFFFF) * 0.000015259022; /*0x4398ad*/
  v20 = (double)(int)a8a * 0.000015259022; /*0x4398be*/
  *(float *)&v21 = (double)v27 * 0.000015259022; /*0x4398cc*/
  v11 = Math::Sqrt(v20 * v20 + *(float *)&v21 * *(float *)&v21 + v19 * v19); /*0x4398ef*/
  if ( v11 == 0.0 ) /*0x439902*/
  {
    v12 = v19; /*0x43992e*/
    v13 = v20; /*0x439932*/
    v14 = v21; /*0x439936*/
  }
  else
  {
    *(float *)&v22 = v19 / v11; /*0x43990a*/
    v12 = *(float *)&v22; /*0x439914*/
    *(float *)&v23 = v20 / v11; /*0x439918*/
    v13 = *(float *)&v23; /*0x43991c*/
    v24 = *(float *)&v21 / v11; /*0x439924*/
    v14 = (IUnknown *)LODWORD(v24); /*0x439928*/
  }
  v20 = v13; /*0x439944*/
  v21 = v14; /*0x439948*/
  *(float *)&v18 = *(double *)&aP9; /*0x439950*/
  v19 = v12; /*0x439957*/
  v15 = FromQuaternionAxisAngle((float *)&v22, &v19, *(float *)&v18); /*0x43995b*/
  Float4::Copy((float *)this + 16, (IUnknown *)v25, (IUnknown *)v15); /*0x439969*/
  Matrix3x4::Identity(v26); /*0x439972*/
  v16 = ConvertMatrixToQuaternion(v25, v26); /*0x43997f*/
  return Float4::Copy((float *)this + 12, (IUnknown *)&v22, (IUnknown *)v16); /*0x439992*/
}


// ==== 0x004399A0  Coord::GetCoords  this=int  sig=csp ====
_DWORD *__thiscall Coord::GetCoords(float *this, int *outCoords)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax

  v3 = Math::RoundToInt(*(this + 6)); /*0x4399b0*/
  v4 = Math::RoundToInt(*(this + 7)); /*0x4399ba*/
  v5 = Math::RoundToInt(*(this + 8)); /*0x4399bc*/
  *outCoords = v3; /*0x4399c7*/
  outCoords[1] = v4; /*0x4399cb*/
  outCoords[2] = v5; /*0x4399cf*/
  return outCoords; /*0x4399c9*/
}


// ==== 0x004399E0  VoxelAnimClass::QuaternionToMatrix  this=int  sig=csp ====
float *__thiscall sub_4399E0(float *this, float *a2)
{
  float *v2; // esi
  float v4[12]; // [esp+8h] [ebp-30h] BYREF

  v2 = ToQuaternionMatrix(v4, this + 12); /*0x4399f1*/
  qmemcpy(a2, v2, 0x30u); /*0x4399fe*/
  return a2; /*0x439a00*/
}


// ==== 0x00439A10  JumpjetLocomotionClass::ComputeVectorLengthMetric  this=JumpjetLocomotionClass  sig=csp ====
double __thiscall sub_439A10(int this)
{
  int v2; // eax
  double v3; // st7
  int v4; // eax
  double v5; // st7
  int GroundHeight; // eax
  int v7; // edi
  double v8; // st7
  int v10; // [esp+10h] [ebp-1Ch]
  int v11; // [esp+14h] [ebp-18h]
  int v12; // [esp+18h] [ebp-14h]
  int v13; // [esp+1Ch] [ebp-10h]
  _DWORD v14[3]; // [esp+20h] [ebp-Ch] BYREF

  v2 = Math::RoundToInt(*(float *)(this + 24)); /*0x439a1a*/
  v3 = *(float *)(this + 28); /*0x439a1f*/
  v14[0] = v2; /*0x439a22*/
  v4 = Math::RoundToInt(v3); /*0x439a26*/
  v5 = *(float *)(this + 32); /*0x439a2b*/
  v14[1] = v4; /*0x439a2e*/
  v14[2] = Math::RoundToInt(v5); /*0x439a37*/
  GroundHeight = Cell::GetGroundHeight(v14); /*0x439a45*/
  v7 = Math::RoundToInt(*(float *)(this + 32) - (double)GroundHeight); /*0x439a5e*/
  v10 = v7; /*0x439a66*/
  if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v14) + 80) & 0x100) != 0 && v7 >= MEMORY[0x89C76C] ) /*0x439a81*/
    v10 = v7 - MEMORY[0x89C76C]; /*0x439a85*/
  v11 = Math::RoundToInt(*(float *)(this + 36)); /*0x439a94*/
  v12 = Math::RoundToInt(*(float *)(this + 40)); /*0x439aa1*/
  v13 = Math::RoundToInt((double)v10 * *(double *)(this + 8) + *(float *)(this + 44)); /*0x439ab8*/
  v8 = Math::Sqrt((double)v13 * (double)v13 + (double)v11 * (double)v11 + (double)v12 * (double)v12); /*0x439adc*/
  return (double)(int)Math::RoundToInt(v8); /*0x439af2*/
}


// ==== 0x00439B00  JumpjetLocomotionClass::Update2  this=int  sig=csp ====
int __thiscall JumpjetLocomotionClass_Update2(char *this)
{
  float *v1; // esi
  double v2; // st7
  float *v3; // ebp
  char *v4; // ebx
  double v5; // st6
  float v6; // edx
  double v7; // st6
  float v8; // eax
  int v9; // eax
  float v10; // ecx
  double v11; // st7
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // edi
  double v15; // st7
  _DWORD *v16; // eax
  int v17; // ebx
  int Byte284; // eax
  float *v19; // eax
  double v20; // st7
  float v21; // edx
  float *v22; // eax
  float *v23; // eax
  float *v24; // edi
  float v25; // edx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // esi
  float v30; // ecx
  float v31; // edx
  int v32; // ecx
  int v33; // edx
  float v34; // ecx
  int v35; // eax
  float *v36; // eax
  double v37; // st7
  float *v38; // eax
  double v39; // st7
  int result; // eax
  int v41; // [esp+0h] [ebp-148h]
  int v42; // [esp+0h] [ebp-148h]
  int v43; // [esp+0h] [ebp-148h]
  int v44; // [esp+0h] [ebp-148h]
  int v45; // [esp+0h] [ebp-148h]
  int v46; // [esp+4h] [ebp-144h]
  int v47; // [esp+4h] [ebp-144h]
  float v48; // [esp+4h] [ebp-144h]
  int v49; // [esp+4h] [ebp-144h]
  int v50; // [esp+4h] [ebp-144h]
  float v51; // [esp+8h] [ebp-140h]
  bool v52; // [esp+19h] [ebp-12Fh]
  char v53; // [esp+1Ah] [ebp-12Eh]
  char v54; // [esp+1Bh] [ebp-12Dh]
  float v55; // [esp+1Ch] [ebp-12Ch]
  float v56; // [esp+1Ch] [ebp-12Ch]
  float v57; // [esp+1Ch] [ebp-12Ch]
  double v58; // [esp+20h] [ebp-128h] BYREF
  float v59; // [esp+28h] [ebp-120h]
  char *v60; // [esp+2Ch] [ebp-11Ch]
  int v61; // [esp+30h] [ebp-118h]
  int GroundHeight; // [esp+34h] [ebp-114h]
  float v63; // [esp+38h] [ebp-110h]
  float v64; // [esp+3Ch] [ebp-10Ch]
  float v65; // [esp+40h] [ebp-108h]
  int v66; // [esp+44h] [ebp-104h]
  int v67; // [esp+48h] [ebp-100h]
  float v68; // [esp+4Ch] [ebp-FCh]
  _DWORD v69[3]; // [esp+50h] [ebp-F8h] BYREF
  _DWORD v70[2]; // [esp+5Ch] [ebp-ECh] BYREF
  int v71; // [esp+64h] [ebp-E4h]
  double v72; // [esp+6Ch] [ebp-DCh] BYREF
  float v73[4]; // [esp+78h] [ebp-D0h] BYREF
  float v74[12]; // [esp+88h] [ebp-C0h] BYREF
  float v75[12]; // [esp+B8h] [ebp-90h] BYREF
  float v76[12]; // [esp+E8h] [ebp-60h] BYREF
  char v77[48]; // [esp+118h] [ebp-30h] BYREF

  v1 = (float *)this; /*0x439b09*/
  v60 = this; /*0x439b0b*/
  v2 = *((double *)this + 2); /*0x439b17*/
  v3 = (float *)(this + 24); /*0x439b1a*/
  v58 = v2; /*0x439b22*/
  v5 = *((float *)this + 11); /*0x439b28*/
  v6 = *((float *)this + 7); /*0x439b2b*/
  v63 = *((float *)this + 6); /*0x439b2e*/
  v7 = v5 - *((double *)this + 1); /*0x439b32*/
  v8 = *((float *)this + 8); /*0x439b35*/
  v4 = this + 36; /*0x439b1d*/
  v64 = v6; /*0x439b3a*/
  v65 = v8; /*0x439b3e*/
  v66 = *((_DWORD *)this + 9); /*0x439b44*/
  v9 = *((_DWORD *)this + 10); /*0x439b4a*/
  LODWORD(v72) = *(_DWORD *)this; /*0x439b4d*/
  v67 = v9; /*0x439b51*/
  v10 = *((float *)this + 11); /*0x439b58*/
  HIDWORD(v72) = *((_DWORD *)v60 + 1); /*0x439b5b*/
  *((float *)v4 + 2) = v7; /*0x439b5f*/
  v68 = v10; /*0x439b62*/
  if ( v2 > 0.0 ) /*0x439b71*/
  {
    v11 = JumpjetLocomotionClass::ComputeVectorLengthMetric_0(v4); /*0x439b75*/
    if ( v11 > v58 ) /*0x439b83*/
    {
      v51 = v11 / v11; /*0x439b8c*/
      Coord::Scale((float *)v4, v51); /*0x439b8f*/
    }
  }
  v46 = Math::RoundToInt(v3[2]); /*0x439ba4*/
  v41 = Math::RoundToInt(v3[1]); /*0x439bad*/
  v12 = Math::RoundToInt(*v3); /*0x439bae*/
  Coord3D::Set(v70, v12, v41, v46); /*0x439bb8*/
  Vector3::AddAssign(v4); /*0x439bc0*/
  v47 = Math::RoundToInt(v3[2]); /*0x439bd0*/
  v42 = Math::RoundToInt(v3[1]); /*0x439bd9*/
  v13 = Math::RoundToInt(*v3); /*0x439bda*/
  Coord3D::Set(v69, v13, v42, v47); /*0x439be4*/
  GroundHeight = Cell::GetGroundHeight(v69); /*0x439bfe*/
  v61 = unk_89C76C + GroundHeight; /*0x439c09*/
  v14 = Coord::To_Cell(&MEMORY[0x87F7E8], v69); /*0x439c17*/
  v54 = 0; /*0x439c19*/
  v53 = 0; /*0x439c1e*/
  if ( (v14[80] & 0x100) != 0 || (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v70) + 80) & 0x100) != 0 ) /*0x439c46*/
  {
    if ( v69[2] < v61 ) /*0x439c56*/
    {
      if ( v71 >= v61 ) /*0x439c65*/
        v54 = 1; /*0x439c67*/
    }
    else if ( v71 < v61 ) /*0x439c5a*/
    {
      v53 = 1; /*0x439c5c*/
    }
  }
  v52 = 0; /*0x439c70*/
  if ( !v54 && !v53 ) /*0x439c83*/
  {
    v15 = (double)GroundHeight; /*0x439c89*/
    if ( v15 <= v3[2] && v3[2] - 150.0 < v15 ) /*0x439ca9*/
    {
      v16 = Cell::IsBridge(v14); /*0x439cad*/
      LODWORD(v58) = v16; /*0x439cb4*/
      if ( !v16 ) /*0x439cb8*/
      {
        if ( !BuildingPlacement::ValidateType(v14, -1, -1) ) /*0x439cc0*/
        {
          v52 = 0; /*0x439cc9*/
          goto LABEL_24; /*0x439ccd*/
        }
        v16 = (_DWORD *)LODWORD(v58); /*0x439ccf*/
      }
      v52 = 1; /*0x439cd5*/
      if ( v16 ) /*0x439cda*/
      {
        if ( *(_BYTE *)(v16[328] + 5823) ) /*0x439ce2*/
          v52 = v16[390] < 8; /*0x439cf5*/
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v16 + 128))(v16) ) /*0x439cfe*/
          v52 = 0; /*0x439d08*/
      }
    }
  }
LABEL_24:
  *(float *)&v58 = (float)GroundHeight; /*0x439d11*/
  if ( v3[2] < (double)*(float *)&v58 ) /*0x439d29*/
  {
    if ( !v54 ) /*0x439d4a*/
    {
      if ( !v53 ) /*0x439d5b*/
      {
LABEL_33:
        if ( (double)(GroundHeight - 100) < v3[2] ) /*0x439d88*/
          v3[2] = *(float *)&v58; /*0x439d8e*/
        goto LABEL_35; /*0x439d8e*/
      }
      goto LABEL_32; /*0x439d5b*/
    }
LABEL_30:
    v3[2] = (float)v61; /*0x439d4c*/
    goto LABEL_35; /*0x439d53*/
  }
  if ( v54 ) /*0x439d2d*/
    goto LABEL_30; /*0x439d2d*/
  if ( !v53 ) /*0x439d35*/
  {
    if ( !v52 ) /*0x439d3d*/
    {
      v17 = 0; /*0x439d3f*/
      goto LABEL_43; /*0x439d43*/
    }
    goto LABEL_33; /*0x439d3d*/
  }
LABEL_32:
  v3[2] = (float)(v61 - 20); /*0x439d5d*/
LABEL_35:
  Byte284 = CellClass::GetByte284(v69); /*0x439d91*/
  qmemcpy(v75, CopyAudioData(v77, Byte284), sizeof(v75)); /*0x439dc4*/
  v19 = InvertMatrix3x3Signs(v76, v75); /*0x439dcd*/
  v20 = *((float *)v4 + 1); /*0x439dd2*/
  v21 = *(float *)v4; /*0x439de3*/
  qmemcpy(v74, v19, sizeof(v74)); /*0x439de5*/
  *(float *)&v43 = -v20; /*0x439df2*/
  Triple::Set(&v58, SLODWORD(v21), v43, *((_DWORD *)v4 + 2)); /*0x439df6*/
  v22 = Matrix3x3::TransformPoint(v74, v73, (float *)&v58); /*0x439e0c*/
  v58 = *(double *)v22; /*0x439e17*/
  v48 = v72; /*0x439e2a*/
  v59 = v22[2]; /*0x439e2d*/
  Coord::Scale((float *)&v58, v48); /*0x439e31*/
  v59 = -v59; /*0x439e46*/
  v23 = Matrix3x3::TransformPoint(v75, (float *)&v72, (float *)&v58); /*0x439e51*/
  v24 = (float *)v60; /*0x439e58*/
  v58 = *(double *)v23; /*0x439e5c*/
  v25 = v23[2]; /*0x439e6c*/
  v26 = LODWORD(v58); /*0x439e6f*/
  v59 = v25; /*0x439e79*/
  *((float *)v4 + 1) = -*((float *)&v58 + 1); /*0x439e7f*/
  *((float *)v4 + 2) = v25; /*0x439e82*/
  *(_DWORD *)v4 = v26; /*0x439e87*/
  v55 = -*(float *)Function::645D00(0); /*0x439e92*/
  *(float *)Function::645D00(0) = v55; /*0x439ea5*/
  v56 = -*(float *)Function::645D00(1); /*0x439eb2*/
  *(float *)Function::645D00(1) = v56; /*0x439ec5*/
  v57 = -*(float *)Function::645D00(2); /*0x439ed2*/
  *(float *)Function::645D00(2) = v57; /*0x439ee3*/
  v49 = Math::RoundToInt(v24[8]); /*0x439ef0*/
  v44 = Math::RoundToInt(v24[7]); /*0x439ef9*/
  v27 = Math::RoundToInt(*v3); /*0x439efa*/
  Coord::Subtract(v69, v27, v44, v49); /*0x439f04*/
  v50 = Math::RoundToInt(v65); /*0x439f16*/
  v45 = Math::RoundToInt(v64); /*0x439f20*/
  v28 = Math::RoundToInt(v63); /*0x439f21*/
  Coord::Subtract(v70, v28, v45, v50); /*0x439f2b*/
  v29 = *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], v70) + 283); /*0x439f3f*/
  if ( *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], v69) + 283) - v29 >= 2 /*0x439fb1*/
    && (v68 < -0.0002 && v24[8] > (double)v65 || v68 >= -0.0003 && v68 + v65 + 1.0 < v24[8]) )
  {
    v30 = v64; /*0x439fbb*/
    v31 = v65; /*0x439fbf*/
    *v3 = v63; /*0x439fc3*/
    v3[1] = v30; /*0x439fc6*/
    v32 = v66; /*0x439fc9*/
    v3[2] = v31; /*0x439fcf*/
    v33 = v67; /*0x439fd2*/
    *(_DWORD *)v4 = v32; /*0x439fd6*/
    v34 = v68; /*0x439fd8*/
    *((_DWORD *)v4 + 1) = v33; /*0x439fdc*/
    *((float *)v4 + 2) = v34; /*0x439fe4*/
    Coord::To_Cell(&MEMORY[0x87F7E8], v69); /*0x439ff1*/
    v35 = JumpjetLocomotionClass::AdjustClimbFacing(v70); /*0x439ff8*/
    if ( v35 != -1 ) /*0x43a000*/
    {
      qmemcpy(v74, (const void *)Locomotor_Update(v76, v35), sizeof(v74)); /*0x43a01f*/
      v36 = TransformMatrix3x4Point(v73, v74, (float *)v4); /*0x43a02c*/
      *(float *)v4 = *v36; /*0x43a035*/
      *((float *)v4 + 1) = v36[1]; /*0x43a03a*/
      *((float *)v4 + 2) = v36[2]; /*0x43a040*/
      v37 = *(double *)v60; /*0x43a047*/
      *(float *)v4 = v37 * *(float *)v4; /*0x43a04d*/
      *((float *)v4 + 1) = v37 * *((float *)v4 + 1); /*0x43a054*/
      *((float *)v4 + 2) = v37 * *((float *)v4 + 2); /*0x43a05a*/
    }
  }
  v1 = (float *)v60; /*0x43a05d*/
  v17 = 1; /*0x43a061*/
LABEL_43:
  v38 = QuaternionMathMultiply(v73, v1 + 12, v1 + 16); /*0x43a066*/
  Float4::Copy(v1 + 12, v70, v38); /*0x43a080*/
  v39 = JumpjetLocomotionClass::ComputeVectorLengthMetric(v1); /*0x43a087*/
  result = 2; /*0x43a098*/
  if ( v39 >= 2.5 ) /*0x43a09d*/
    return v17; /*0x43a09f*/
  return result; /*0x43a0a1*/
}


// ==== 0x0043A0B0  Triple::Set  this=int  sig=csp ====
IUnknown *__thiscall Triple::Set(_DWORD *this, IUnknown *aP1, IUnknown *aP2, IUnknown *aP3)
{
  *this = aP1; /*0x43a0ba*/
  *(this + 1) = aP2; /*0x43a0c0*/
  *(this + 2) = aP3; /*0x43a0c3*/
  return (IUnknown *)this; /*0x43a0c6*/
}


// ==== 0x0043A0D0  Coord::Scale  this=BuildingTypeClass  sig=csp ====
float *__thiscall Coord::Scale(float *this, IUnknown *aP1)
{
  *this = *(float *)&aP1 * *this; /*0x43a0d8*/
  *(this + 1) = *(float *)&aP1 * *(this + 1); /*0x43a0e1*/
  *(this + 2) = *(float *)&aP1 * *(this + 2); /*0x43a0eb*/
  return this; /*0x43a0ee*/
}


// ==== 0x0043A100  Vector3::AddAssign  this=int  sig=csp ====
float *__thiscall Vector3::AddAssign(float *this, MouseClass *aP1)
{
  *this = *(float *)&aP1->field_0 + *this; /*0x43a10a*/
  *(this + 1) = *(float *)&aP1->field_4 + *(this + 1); /*0x43a112*/
  *(this + 2) = *(float *)&aP1->field_8 + *(this + 2); /*0x43a11b*/
  return this; /*0x43a11e*/
}


// ==== 0x0043A130  JumpjetLocomotionClass::ComputeVectorLengthMetric_0  this=int  sig=csp ====
void __thiscall sub_43A130(float *this)
{
  Math::Sqrt(*this * *this + *(this + 1) * *(this + 1) + *(this + 2) * *(this + 2)); /*0x43a154*/
}


// ==== 0x0043A160  sub_43A160  this=-  sig=ida-proto ====
void sub_43A160()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x43a16c*/
  unk_89C790 = Math::Sqrt(v0 + v0); /*0x43a17e*/
}


// ==== 0x0043A190  sub_43A190  this=-  sig=ida-proto ====
void sub_43A190()
{
  unk_89C7E0 = unk_89C790 / 60.0; /*0x43a19c*/
}


// ==== 0x0043A1B0  sub_43A1B0  this=-  sig=ida-proto ====
void sub_43A1B0()
{
  unk_89C7C8 = 1.0 / unk_89C7E0; /*0x43a1bc*/
}


// ==== 0x0043A1D0  sub_43A1D0  this=-  sig=ida-proto ====
void sub_43A1D0()
{
  unk_89C7C0 = 0.0174532925199433 * 45.0; /*0x43a1dc*/
}


// ==== 0x0043A1F0  sub_43A1F0  this=-  sig=ida-proto ====
void sub_43A1F0()
{
  unk_89C798 = 0.0174532925199433 * 60.0; /*0x43a1fc*/
}


// ==== 0x0043A210  sub_43A210  this=-  sig=ida-proto ====
void sub_43A210()
{
  unk_89C780 = 0.0174532925199433 * 90.0; /*0x43a21c*/
}


// ==== 0x0043A230  sub_43A230  this=-  sig=ida-proto ====
__int64 sub_43A230()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89C780 - unk_89C798); /*0x43a242*/
  result = Math::RoundToInt(v0 * unk_89C790 * 0.5); /*0x43a256*/
  unk_89C7E8 = result; /*0x43a25b*/
  return result; /*0x43a260*/
}


// ==== 0x0043A270  sub_43A270  this=-  sig=ida-proto ====
void sub_43A270()
{
  unk_89C7A0 = Math::ArcTan((double)unk_89C7E8 * 0.00390625); /*0x43a287*/
}


// ==== 0x0043A2A0  sub_43A2A0  this=-  sig=ida-proto ====
void sub_43A2A0()
{
  unk_89C7B8 = Math::ArcTan((double)(2 * unk_89C7E8) / unk_89C790); /*0x43a2c2*/
}


// ==== 0x0043A2D0  sub_43A2D0  this=-  sig=ida-proto ====
__int64 sub_43A2D0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89C7E8) + 0.5); /*0x43a2eb*/
  unk_89C7DC = result; /*0x43a2f0*/
  return result; /*0x43a2f6*/
}


// ==== 0x0043A300  sub_43A300  this=-  sig=ida-proto ====
int sub_43A300()
{
  unk_89C788 = 0; /*0x43a302*/
  unk_89C78A = 0; /*0x43a308*/
  return 0; /*0x43a30e*/
}


// ==== 0x0043A310  sub_43A310  this=-  sig=ida-proto ====
int sub_43A310()
{
  unk_89C7A8 = 0; /*0x43a312*/
  unk_89C7AC = 0; /*0x43a317*/
  unk_89C7B0 = 0; /*0x43a31c*/
  return 0; /*0x43a321*/
}


// ==== 0x0043A330  sub_43A330  this=-  sig=ida-proto ====
int sub_43A330()
{
  unk_89C7D8 = 0; /*0x43a335*/
  unk_89C7D0 = 128; /*0x43a33f*/
  unk_89C7D4 = 128; /*0x43a344*/
  return 128; /*0x43a349*/
}


// ==== 0x0043A350  NeuronClass::NeuronClass  this=NeuronClass  sig=csp ====
int __thiscall NeuronClass::NeuronClass(int this)
{
  int v2; // eax
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x43a353*/
  *(_DWORD *)(this + 36) = 0; /*0x43a358*/
  *(_DWORD *)(this + 40) = 0; /*0x43a35f*/
  *(_DWORD *)(this + 44) = 0; /*0x43a366*/
  *(_DWORD *)(this + 48) = MEMORY[0xA8ED84]; /*0x43a372*/
  *(_DWORD *)this = &NeuronClass::`vftable'; /*0x43a375*/
  *(_DWORD *)(this + 4) = &NeuronClass::`vftable'; /*0x43a37b*/
  *(_DWORD *)(this + 8) = &NeuronClass::`vftable'; /*0x43a382*/
  *(_DWORD *)(this + 12) = &vt_NeuronClass; /*0x43a389*/
  if ( MEMORY[0xB0F5E8] < MEMORY[0xB0F5E0] /*0x43a3c5*/
    || (MEMORY[0xB0F5E5] || !MEMORY[0xB0F5E0])
    && MEMORY[0xB0F5EC] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F5D8] + 8))(
         &MEMORY[0xB0F5D8],
         MEMORY[0xB0F5E0] + MEMORY[0xB0F5EC],
         0) )
  {
    v2 = MEMORY[0xB0F5E8]++; /*0x43a3d2*/
    *((_DWORD *)MEMORY[0xB0F5DC] + v2) = this; /*0x43a3e1*/
  }
  if ( MEMORY[0xB0F680] < MEMORY[0xB0F678] /*0x43a41b*/
    || (MEMORY[0xB0F67D] || !MEMORY[0xB0F678])
    && MEMORY[0xB0F684] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F670] + 8))(
         &MEMORY[0xB0F670],
         MEMORY[0xB0F678] + MEMORY[0xB0F684],
         0) )
  {
    v3 = MEMORY[0xB0F680]++; /*0x43a428*/
    *((_DWORD *)MEMORY[0xB0F674] + v3) = this; /*0x43a437*/
  }
  return this; /*0x43a43c*/
}


// ==== 0x0043A500  NeuronClass::GetClassID  this=NeuronClass  sig=csp ====
int __stdcall COM_GetClassID(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x43a506*/
    return -2147467261; /*0x43a508*/
  *a2 = 605729558; /*0x43a516*/
  a2[1] = 298994933; /*0x43a51e*/
  a2[2] = 268445372; /*0x43a527*/
  a2[3] = 1303416651; /*0x43a530*/
  return 0; /*0x43a50d*/
}


// ==== 0x0043A540  NeuronClass::Fire  this=NeuronClass  sig=csp ====
int __stdcall NeuronClass::Fire(AbstractClass *aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x43a54b*/
  if ( result >= 0 ) /*0x43a552*/
  {
    if ( aP0 ) /*0x43a556*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x43a55f*/
      *(_DWORD *)aP0->__pad_0 = &NeuronClass::`vftable'; /*0x43a564*/
      *(_DWORD *)&aP0->__pad_0[4] = &NeuronClass::`vftable'; /*0x43a56a*/
      *(_DWORD *)&aP0->__pad_0[8] = &NeuronClass::`vftable'; /*0x43a571*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_NeuronClass; /*0x43a578*/
    }
    ObjectPtr::RegisterForTracking( /*0x43a588*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]); /*0x43a596*/
    ObjectPtr::RegisterForTracking( /*0x43a5a4*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[8]);
    return 0; /*0x43a5a9*/
  }
  return result; /*0x43a5ab*/
}


// ==== 0x0043A5B0  NeuronClass::Update  this=NeuronClass  sig=csp ====
int __stdcall NeuronClass::Update(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x43a5bf*/
  if ( result >= 0 ) /*0x43a5c6*/
    return 0; /*0x43a5c8*/
  return result; /*0x43a5ca*/
}


// ==== 0x0043A5D0  NeuronClass::Update  this=NeuronClass  sig=csp ====
int __thiscall Power_Update(_DWORD *this, int *a2)
{
  AbstractClass::ProcessPower((int)this, a2); /*0x43a5d9*/
  return Power::TimerProcess((int)MEMORY[0xA8ED84] - this->q030); /*0x43a5f0*/
}


// ==== 0x0043A600  BrainClass::method_43A600  this=BrainClass  sig=csp ====
void __thiscall sub_43A600(BrainClass *this)
{
  int v2; // esi
  int v3; // ebp
  int v4; // ecx
  void *v5; // eax

  v2 = 0; /*0x43a608*/
  this->vfptr = &vt_BrainClass; /*0x43a60a*/
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
  *((_DWORD *)this + 1) = &vt_VectorClass_NeuronClass; /*0x43a642*/
  if ( v5 && *((_BYTE *)this + 17) ) /*0x43a64c*/
  {
    __3_YAXPAX_Z(v5); /*0x43a652*/
    *((_DWORD *)this + 2) = 0; /*0x43a65a*/
  }
  *((_BYTE *)this + 17) = 0; /*0x43a65d*/
  *((_DWORD *)this + 3) = 0; /*0x43a660*/
}


// ==== 0x0043A670  ObjectClass::method_43A670  this=ObjectClass  sig=csp ====
int __thiscall sub_43A670(int *this)
{
  int v2; // esi
  int v3; // ebx
  int v4; // ecx

  v2 = 0; /*0x43a675*/
  v3 = *(this + 5); /*0x43a677*/
  if ( v3 > 0 ) /*0x43a67c*/
  {
    do /*0x43a69d*/
    {
      v4 = *(_DWORD *)(*(this + 2) + 4 * v2); /*0x43a681*/
      if ( v4 ) /*0x43a686*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 32))(v4, 1); /*0x43a68c*/
      ++v2; /*0x43a692*/
      *(_DWORD *)(*(this + 2) + 4 * v2 - 4) = 0; /*0x43a695*/
    }
    while ( v2 < v3 ); /*0x43a69d*/
  }
  return (*(int (__thiscall **)(int *))(*(this + 1) + 12))(this + 1); /*0x43a6a8*/
}


// ==== 0x0043A6B0  ObjectClass::method_43A6B0  this=ObjectClass  sig=csp ====
int __thiscall sub_43A6B0(int *this, int a2, int a3)
{
  int v4; // esi
  int v5; // ebx
  int v6; // ecx

  v4 = 0; /*0x43a6b5*/
  v5 = *(this + 5); /*0x43a6b7*/
  if ( v5 > 0 ) /*0x43a6bc*/
  {
    do /*0x43a6dd*/
    {
      v6 = *(_DWORD *)(*(this + 2) + 4 * v4); /*0x43a6c1*/
      if ( v6 ) /*0x43a6c6*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 32))(v6, 1); /*0x43a6cc*/
      ++v4; /*0x43a6d2*/
      *(_DWORD *)(*(this + 2) + 4 * v4 - 4) = 0; /*0x43a6d5*/
    }
    while ( v4 < v5 ); /*0x43a6dd*/
  }
  (*(void (__thiscall **)(int *))(*(this + 1) + 12))(this + 1); /*0x43a6e5*/
  *(this + 7) = a2; /*0x43a6f0*/
  this->vtable3 = a3; /*0x43a6f3*/
  return a2; /*0x43a6f6*/
}


// ==== 0x0043A770  ObjectClass::method_43A770  this=ObjectClass  sig=csp ====
int __thiscall sub_43A770(_DWORD *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // esi
  int result; // eax
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // edi
  int v9; // ebp
  _DWORD *v10; // [esp-8h] [ebp-20h]
  int v11; // [esp-4h] [ebp-1Ch]

  v3 = a2; /*0x43a773*/
  if ( !a2 ) /*0x43a77c*/
    return -2147467261; /*0x43a781*/
  v6 = (_DWORD *)this->abstractFlags; /*0x43a78a*/
  v7 = *a2; /*0x43a78d*/
  v10 = a2; /*0x43a798*/
  a2 = v6; /*0x43a799*/
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
        v11 = *(_DWORD *)(this->vtable3 + 4 * v8); /*0x43a7ba*/
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
int __thiscall sub_43A7E0(int this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int result; // eax
  int v5; // eax
  AbstractClass *v6; // eax
  AbstractClass *v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // edx
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
        *(_DWORD *)v7[1].__pad_0 = 0; /*0x43a847*/
        *(_DWORD *)&v7[1].__pad_0[4] = 0; /*0x43a84a*/
        *(_DWORD *)&v7[1].__pad_0[8] = 0; /*0x43a84d*/
        *(_DWORD *)&v7[1].__pad_0[12] = MEMORY[0xA8ED84]; /*0x43a856*/
        *(_DWORD *)v7->__pad_0 = &NeuronClass::`vftable'; /*0x43a859*/
        *(_DWORD *)&v7->__pad_0[4] = &NeuronClass::`vftable'; /*0x43a85f*/
        *(_DWORD *)&v7->__pad_0[8] = &NeuronClass::`vftable'; /*0x43a866*/
        *(_DWORD *)&v7->__pad_0[12] = &vt_NeuronClass; /*0x43a86d*/
        if ( MEMORY[0xB0F5E8] < MEMORY[0xB0F5E0] /*0x43a8a5*/
          || (MEMORY[0xB0F5E5] || !MEMORY[0xB0F5E0])
          && MEMORY[0xB0F5EC] > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F5D8] + 8))(
               &MEMORY[0xB0F5D8],
               MEMORY[0xB0F5E0] + MEMORY[0xB0F5EC],
               0) )
        {
          v8 = MEMORY[0xB0F5E8]++; /*0x43a8b2*/
          *((_DWORD *)MEMORY[0xB0F5DC] + v8) = v7; /*0x43a8c1*/
        }
        if ( MEMORY[0xB0F680] < MEMORY[0xB0F678] /*0x43a8f8*/
          || (MEMORY[0xB0F67D] || !MEMORY[0xB0F678])
          && MEMORY[0xB0F684] > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0F670] + 8))(
               &MEMORY[0xB0F670],
               MEMORY[0xB0F678] + MEMORY[0xB0F684],
               0) )
        {
          v9 = MEMORY[0xB0F680]++; /*0x43a905*/
          *((_DWORD *)MEMORY[0xB0F674] + v9) = v7; /*0x43a914*/
        }
        result = (*(int (__stdcall **)(AbstractClass *, _DWORD *))(*(_DWORD *)v7->__pad_0 + 20))(v7, v2); /*0x43a91b*/
        if ( result < 0 ) /*0x43a920*/
          return result; /*0x43a920*/
        if ( *(_DWORD *)(this + 20) < *(_DWORD *)(this + 32) ) /*0x43a92a*/
        {
          v10 = *(_DWORD *)(this + 12); /*0x43a92c*/
          if ( *(_DWORD *)(this + 20) < v10 /*0x43a951*/
            || (*(_BYTE *)(this + 17) || !v10)
            && (v11 = *(_DWORD *)(this + 24), v11 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 4) + 8))(this + 4, v10 + v11, 0) )
          {
            v12 = *(_DWORD *)(this + 20); /*0x43a958*/
            v13 = *(_DWORD *)(this + 8); /*0x43a95b*/
            *(_DWORD *)(this + 20) = v12 + 1; /*0x43a961*/
            *(_DWORD *)(v13 + 4 * v12) = v7; /*0x43a964*/
          }
          v2 = a2; /*0x43a967*/
          *(_DWORD *)&v7[1].__pad_0[8] = this; /*0x43a96b*/
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
int NeuronClass::_vt11()
{
  return 60; /*0x43a9a5*/
}


// ==== 0x0043A9B0  NeuronClass::StubReturn56  this=NeuronClass  sig=csp ====
int NeuronClass::_vt12()
{
  return 56; /*0x43a9b5*/
}


// ==== 0x0043A9C0  NeuronClass::Reset  this=NeuronClass  sig=csp ====
NeuronClass *__thiscall NeuronClass::Reset(_DWORD *Block, char a2)
{
  int v3; // eax
  int v4; // eax
  _DWORD *v6; // [esp+4h] [ebp-4h] BYREF

  *Block = &NeuronClass::`vftable'; /*0x43a9cd*/
  *(Block + 1) = &NeuronClass::`vftable'; /*0x43a9d3*/
  *(Block + 2) = &NeuronClass::`vftable'; /*0x43a9da*/
  *(Block + 3) = &vt_NeuronClass; /*0x43a9e1*/
  v6 = Block; /*0x43a9ef*/
  v3 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v6); /*0x43a9f3*/
  if ( v3 != -1 && v3 < MEMORY[0xB0F680] && v3 < --MEMORY[0xB0F680] ) /*0x43aa0e*/
  {
    do /*0x43aa26*/
    {
      ++v3; /*0x43aa16*/
      *((_DWORD *)MEMORY[0xB0F674] + v3 - 1) = *((_DWORD *)MEMORY[0xB0F674] + v3); /*0x43aa1a*/
    }
    while ( v3 < MEMORY[0xB0F680] ); /*0x43aa26*/
  }
  v6 = Block; /*0x43aa38*/
  v4 = (*(int (__thiscall **)(int *, _DWORD **))(MEMORY[0xB0F5D8] + 16))(&MEMORY[0xB0F5D8], &v6); /*0x43aa3c*/
  if ( v4 != -1 && v4 < MEMORY[0xB0F5E8] && v4 < --MEMORY[0xB0F5E8] ) /*0x43aa57*/
  {
    do /*0x43aa6f*/
    {
      ++v4; /*0x43aa5f*/
      *((_DWORD *)MEMORY[0xB0F5DC] + v4 - 1) = *((_DWORD *)MEMORY[0xB0F5DC] + v4); /*0x43aa63*/
    }
    while ( v4 < MEMORY[0xB0F5E8] ); /*0x43aa6f*/
  }
  AbstractClass::DTOR(Block); /*0x43aa73*/
  if ( (a2 & 1) != 0 ) /*0x43aa7d*/
    __3_YAXPAX_Z(Block); /*0x43aa80*/
  return (NeuronClass *)Block; /*0x43aa8a*/
}


// ==== 0x0043AA90  BrainClass::method_43AA90  this=BrainClass  sig=csp ====
_DWORD *__thiscall sub_43AA90(BrainClass *this, char a2)
{
  int v3; // esi
  int v4; // ebp
  int v5; // ecx
  void *v6; // eax

  v3 = 0; /*0x43aa95*/
  this->vfptr = &vt_BrainClass; /*0x43aa97*/
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
  *((_DWORD *)this + 1) = &vt_VectorClass_NeuronClass; /*0x43aad3*/
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
int __thiscall NeuronClass_25_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x43ab2a*/
}


// ==== 0x0043AB30  _VectorClass_PAVNeuronClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall NeuronClass_25_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x43ab32*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x43ab3d*/
  {
    v3 = 0; /*0x43ab3f*/
    if ( v2 <= 0 ) /*0x43ab43*/
      return 1; /*0x43ab63*/
    v4 = (_DWORD *)*(this + 1); /*0x43ab45*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x43ab4b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x43ab54*/
    {
      ++v3; /*0x43ab56*/
      ++v4; /*0x43ab57*/
      if ( v3 >= v2 ) /*0x43ab5c*/
        return 1; /*0x43ab5c*/
    }
  }
  return 0; /*0x43ab5e*/
}


// ==== 0x0043AB70  _VectorClass_PAVNeuronClass::Release  this=VectorClass  sig=csp ====
char __thiscall NeuronClass_25_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x43ab7c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x43ab86*/
    if ( a3 ) /*0x43ab8c*/
      v4 = a3; /*0x43aba2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x43ab9e*/
    *((_BYTE *)this + 12) = 1; /*0x43aba6*/
    if ( v4 ) /*0x43abaa*/
    {
      if ( this->Items ) /*0x43abb5*/
      {
        v6 = this->Capacity; /*0x43abbc*/
        if ( a2 < v6 ) /*0x43abc1*/
          v6 = a2; /*0x43abc3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x43abc9*/
          ++i; /*0x43abce*/
        if ( *((_BYTE *)this + 13) ) /*0x43abdb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x43abe6*/
          this->Items = 0; /*0x43abee*/
        }
      }
      this->Items = v4; /*0x43abf7*/
      this->Capacity = a2; /*0x43abff*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x43ac02*/
      return 1; /*0x43ac08*/
    }
    else
    {
      return 0; /*0x43abaf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x43ac12*/
    return 1; /*0x43ac18*/
  }
}


// ==== 0x0043AC20  _VectorClass_PAVNeuronClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall NeuronClass_25_::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x43ac2d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x43ac33*/
    *(_DWORD *)(this + 4) = 0; /*0x43ac3b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x43ac3e*/
  *(_DWORD *)(this + 8) = 0; /*0x43ac41*/
}


// ==== 0x0043AC50  _VectorClass_PAVNeuronClass::Activate  this=VectorClass  sig=csp ====
int __thiscall NeuronClass_25_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x43ac50*/
    return 0; /*0x43ac58*/
  v3 = *(_DWORD *)(this + 8); /*0x43ac5e*/
  result = 0; /*0x43ac61*/
  if ( v3 <= 0 ) /*0x43ac65*/
    return -1; /*0x43ac7c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x43ac6b*/
  {
    if ( ++result >= v3 ) /*0x43ac7a*/
      return -1; /*0x43ac7a*/
  }
  return result; /*0x43ac5a*/
}


// ==== 0x0043AC90  _VectorClass_PAVNeuronClass::Fire  this=VectorClass  sig=csp ====
unsigned int __thiscall NeuronClass_25_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x43ac90*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x43aca5*/
  else
    return 0; /*0x43ac97*/
}


// ==== 0x0043ACB0  _VectorClass_PAVNeuronClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall NeuronClass_25_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x43acb3*/
  *Block = &vt_VectorClass_NeuronClass; /*0x43acb6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x43acc0*/
  {
    __3_YAXPAX_Z(v3); /*0x43acc8*/
    *(Block + 1) = 0; /*0x43acd0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x43acdb*/
  *(Block + 2) = 0; /*0x43ace1*/
  if ( (a2 & 1) != 0 ) /*0x43ace8*/
    __3_YAXPAX_Z(Block); /*0x43aceb*/
  return (VectorClass *)Block; /*0x43acf5*/
}


// ==== 0x0043AD00  Buffer::Init  this=AbstractClass  sig=csp ====
_DWORD *__thiscall Buffer::Init(_DWORD *this, int a2, AbstractClass *aP2)
{
  *this = a2; /*0x43ad0d*/
  this->vtable2 = aP2; /*0x43ad0f*/
  *((_BYTE *)this + 8) = 0; /*0x43ad12*/
  if ( !a2 && (int)aP2 > 0 ) /*0x43ad1a*/
  {
    *this = __2_YAPAXI_Z((size_t)aP2); /*0x43ad25*/
    *((_BYTE *)this + 8) = 1; /*0x43ad27*/
  }
  return this; /*0x43ad2d*/
}


// ==== 0x0043ADC0  INIClass::loadFile  this=int  sig=csp ====
_DWORD *__thiscall INIClass::loadFile(_DWORD *this, AbstractClass *aP1)
{
  *this = 0; /*0x43adc9*/
  *(this + 1) = aP1; /*0x43adcf*/
  *((_BYTE *)this + 8) = 0; /*0x43add2*/
  if ( (int)aP1 > 0 ) /*0x43add6*/
  {
    *this = __2_YAPAXI_Z((size_t)aP1); /*0x43ade1*/
    *((_BYTE *)this + 8) = 1; /*0x43ade3*/
  }
  return this; /*0x43ade9*/
}


// ==== 0x0043ADF0  ObjectClass::method_43ADF0  this=ObjectClass  sig=csp ====
ObjectClass *__thiscall sub_43ADF0(_BYTE *this, _DWORD *a1)
{
  this->vtable3 = 0; /*0x43adf6*/
  *(_DWORD *)this = *a1; /*0x43adfc*/
  this->vtable2 = a1[1]; /*0x43ae01*/
  return (ObjectClass *)this; /*0x43ae04*/
}


// ==== 0x0043AE10  StaticButtonClass::ReleaseBuffer  this=VOID_PTR  sig=csp ====
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


// ==== 0x0043AE50  Vector::Clear  this=VOID_PTR  sig=csp ====
void __thiscall Vector_Clear(int this)
{
  if ( *(_BYTE *)(this + 8) ) /*0x43ae53*/
    __3_YAXPAX_Z(*(void **)this); /*0x43ae5d*/
  *(_DWORD *)this = 0; /*0x43ae65*/
  *(_DWORD *)(this + 4) = 0; /*0x43ae6b*/
  *(_BYTE *)(this + 8) = 0; /*0x43ae72*/
}


// ==== 0x0043AF10  ObjectClass::method_43AF10  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_43AF10(_DWORD *this)
{
  *this = 0; /*0x43af14*/
  this->vtable2 = 0; /*0x43af16*/
  *((_BYTE *)this + 8) = 0; /*0x43af19*/
  return this; /*0x43af1c*/
}


// ==== 0x0043AF40  sub_43AF40  this=-  sig=ida-proto ====
void sub_43AF40()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x43af4c*/
  unk_89C820 = Math::Sqrt(v0 + v0); /*0x43af5e*/
}


// ==== 0x0043AF70  sub_43AF70  this=-  sig=ida-proto ====
void sub_43AF70()
{
  unk_89C880 = unk_89C820 / 60.0; /*0x43af7c*/
}


// ==== 0x0043AF90  sub_43AF90  this=-  sig=ida-proto ====
void sub_43AF90()
{
  unk_89C868 = 1.0 / unk_89C880; /*0x43af9c*/
}


// ==== 0x0043AFB0  sub_43AFB0  this=-  sig=ida-proto ====
void sub_43AFB0()
{
  unk_89C860 = 0.0174532925199433 * 45.0; /*0x43afbc*/
}


// ==== 0x0043AFD0  sub_43AFD0  this=-  sig=ida-proto ====
void sub_43AFD0()
{
  unk_89C830 = 0.0174532925199433 * 60.0; /*0x43afdc*/
}


// ==== 0x0043AFF0  sub_43AFF0  this=-  sig=ida-proto ====
void sub_43AFF0()
{
  unk_89C7F8 = 0.0174532925199433 * 90.0; /*0x43affc*/
}


// ==== 0x0043B010  sub_43B010  this=-  sig=ida-proto ====
__int64 sub_43B010()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89C7F8 - unk_89C830); /*0x43b022*/
  result = Math::RoundToInt(v0 * unk_89C820 * 0.5); /*0x43b036*/
  unk_89C888 = result; /*0x43b03b*/
  return result; /*0x43b040*/
}


// ==== 0x0043B050  sub_43B050  this=-  sig=ida-proto ====
void sub_43B050()
{
  unk_89C840 = Math::ArcTan((double)unk_89C888 * 0.00390625); /*0x43b067*/
}


// ==== 0x0043B080  sub_43B080  this=-  sig=ida-proto ====
void sub_43B080()
{
  unk_89C858 = Math::ArcTan((double)(2 * unk_89C888) / unk_89C820); /*0x43b0a2*/
}


// ==== 0x0043B0B0  sub_43B0B0  this=-  sig=ida-proto ====
__int64 sub_43B0B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89C888) + 0.5); /*0x43b0cb*/
  unk_89C87C = result; /*0x43b0d0*/
  return result; /*0x43b0d6*/
}


// ==== 0x0043B0E0  sub_43B0E0  this=-  sig=ida-proto ====
int sub_43B0E0()
{
  dword_89C818 = 0; /*0x43b0e2*/
  return 0; /*0x43b0ee*/
}


// ==== 0x0043B0F0  sub_43B0F0  this=-  sig=ida-proto ====
int sub_43B0F0()
{
  aP5 = 0; /*0x43b0f2*/
  unk_89C84C = 0; /*0x43b0f7*/
  unk_89C850 = 0; /*0x43b0fc*/
  return 0; /*0x43b101*/
}


// ==== 0x0043B110  sub_43B110  this=-  sig=ida-proto ====
int sub_43B110()
{
  unk_89C878 = 0; /*0x43b115*/
  unk_89C870 = 128; /*0x43b11f*/
  unk_89C874 = 128; /*0x43b124*/
  return 128; /*0x43b129*/
}


// ==== 0x0043B130  sub_43B130  this=-  sig=ida-proto ====
int sub_43B130()
{
  unk_89C808 = 0; /*0x43b132*/
  unk_89C80C = 0; /*0x43b137*/
  unk_89C810 = 0; /*0x43b13c*/
  unk_89C814 = 0; /*0x43b141*/
  return 0; /*0x43b146*/
}


// ==== 0x0043B150  ObjectClass::DetectNearbyAlliedThreat  this=int  sig=csp ====
bool __thiscall DetectNearbyAlliedThreat(#375 **this)
{
  #375 **v1; // ebx
  int v2; // eax
  _DWORD *v3; // esi
  #375 *v4; // edi
  int *v5; // eax
  int v6; // ebx
  int v7; // edx
  int v8; // ebp
  _DWORD *v9; // edi
  int *v10; // eax
  bool result; // al
  int *v12; // eax
  int v13; // ebx
  int v14; // ebp
  int *CoordsCellClass; // edi
  int *v16; // eax
  #375 *v17; // eax
  #375 *v18; // edi
  int *v19; // eax
  int v20; // ebx
  int v21; // ebp
  int *v22; // edi
  int *v23; // eax
  double v24; // st7
  int *v25; // eax
  int v26; // ebp
  int v27; // ebx
  int v28; // edx
  int v29; // eax
  _DWORD *v30; // edi
  int *v31; // eax
  int i; // [esp+28h] [ebp-F8h]
  int v34; // [esp+2Ch] [ebp-F4h]
  int v35[3]; // [esp+3Ch] [ebp-E4h] BYREF
  int v36[3]; // [esp+48h] [ebp-D8h] BYREF
  int v37[5]; // [esp+54h] [ebp-CCh] BYREF
  int v38; // [esp+68h] [ebp-B8h]
  int v39; // [esp+74h] [ebp-ACh]
  int v40; // [esp+80h] [ebp-A0h]
  int v41; // [esp+8Ch] [ebp-94h]
  int v42[3]; // [esp+90h] [ebp-90h] BYREF
  char v43[12]; // [esp+9Ch] [ebp-84h] BYREF
  char v44[12]; // [esp+A8h] [ebp-78h] BYREF
  int v45[3]; // [esp+B4h] [ebp-6Ch] BYREF
  char v46[12]; // [esp+C0h] [ebp-60h] BYREF
  int v47[3]; // [esp+CCh] [ebp-54h] BYREF
  int v48[3]; // [esp+D8h] [ebp-48h] BYREF
  char v49[12]; // [esp+E4h] [ebp-3Ch] BYREF
  char v50[12]; // [esp+F0h] [ebp-30h] BYREF
  char v51[12]; // [esp+FCh] [ebp-24h] BYREF
  int v52[3]; // [esp+108h] [ebp-18h] BYREF
  int v53[3]; // [esp+114h] [ebp-Ch] BYREF

  v1 = this; /*0x43b15d*/
  if ( !(unsigned __int8)HouseClass::IsAlliedWith(HouseClass_Player, *(this + 135)) )
  {
    v2 = 0; /*0x43b18b*/
    v34 = *((_DWORD *)HouseClass_Player + 78); /*0x43b18f*/
    for ( i = 0; i < v34; ++i )
    {
      v3 = *(_DWORD **)(*((_DWORD *)HouseClass_Player + 75) + 4 * v2); /*0x43b1a9*/
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v3 + 848))(v3) ) /*0x43b1b8*/
        goto LABEL_23; /*0x43b1b8*/
      v4 = v1[173]; /*0x43b1be*/
      if ( v4 ) /*0x43b1c6*/
      {
        if ( (*((_BYTE *)v4 + 20) & 1) != 0 ) /*0x43b1d0*/
        {
          v5 = (int *)(*(int (__thiscall **)(_DWORD *, char *))(*v3 + 72))(v3, v50); /*0x43b1e2*/
          v6 = *v5; /*0x43b1e5*/
          v7 = *(_DWORD *)v4; /*0x43b1e7*/
          v8 = v5[1]; /*0x43b1e9*/
          v41 = v5[2]; /*0x43b1f6*/
          v9 = (_DWORD *)(*(int (__thiscall **)(#375 *, char *))(v7 + 72))(v4, v44); /*0x43b200*/
          v10 = Coord::Subtract(v52, v6 - *v9, v8 - v9[1], v41 - v9[2]); /*0x43b21c*/
          v35[0] = *v10; /*0x43b223*/
          v35[1] = v10[1]; /*0x43b22e*/
          v35[2] = v10[2]; /*0x43b235*/
          result = (int)Coord::Length(v35) <= *(_DWORD *)(v3[328] + 5900) << 8; /*0x43b24f*/
          if ( result ) /*0x43b254*/
            return result; /*0x43b254*/
LABEL_10:
          v1 = this; /*0x43b2f8*/
          goto LABEL_11; /*0x43b2f8*/
        }
        if ( (*(int (__thiscall **)(#375 *))(*(_DWORD *)v4 + 44))(v1[173]) == 11 ) /*0x43b26e*/
        {
          v12 = (int *)(*(int (__thiscall **)(_DWORD *, char *))(*v3 + 72))(v3, v46); /*0x43b280*/
          v13 = *v12; /*0x43b283*/
          v14 = v12[1]; /*0x43b28d*/
          v40 = v12[2]; /*0x43b293*/
          CoordsCellClass = CellClass::GetCoords(v4, v42); /*0x43b29e*/
          v16 = Coord::Subtract(v48, v13 - *CoordsCellClass, v14 - CoordsCellClass[1], v40 - CoordsCellClass[2]); /*0x43b2ba*/
          v36[0] = *v16; /*0x43b2c1*/
          v36[1] = v16[1]; /*0x43b2cc*/
          v36[2] = v16[2]; /*0x43b2d3*/
          result = (int)Coord::Length(v36) <= *(_DWORD *)(v3[328] + 5900) << 8; /*0x43b2ed*/
          if ( result ) /*0x43b2f2*/
            return result; /*0x43b2f2*/
          goto LABEL_10; /*0x43b2f2*/
        }
      }
LABEL_11:
      if ( !v1 || ((_BYTE)v1[5] & 4) == 0 ) /*0x43b310*/
        goto LABEL_23; /*0x43b310*/
      v17 = v1[358]; /*0x43b316*/
      v18 = v17 ? (#375 *)*((_DWORD *)v1[355] + (_DWORD)v17 - 1) : v1[361];
      if ( !v18 ) /*0x43b334*/
        goto LABEL_23; /*0x43b334*/
      if ( (*(int (__thiscall **)(#375 *))(*(_DWORD *)v18 + 44))(v18) == 11 ) /*0x43b349*/
      {
        v19 = (int *)(*(int (__thiscall **)(_DWORD *, char *))(*v3 + 72))(v3, v43); /*0x43b35b*/
        v20 = *v19; /*0x43b35e*/
        v21 = v19[1]; /*0x43b362*/
        v39 = v19[2]; /*0x43b370*/
        v22 = CellClass::GetCoords(v18, v45); /*0x43b379*/
        v23 = Coord::Subtract(v47, v20 - *v22, v21 - v22[1], v39 - v22[2]); /*0x43b395*/
        v24 = Math::Sqrt((double)*v23 * (double)*v23 + (double)v23[2] * (double)v23[2] + (double)v23[1] * (double)v23[1]); /*0x43b3d6*/
        result = (int)Math::RoundToInt(v24) <= *(_DWORD *)(v3[328] + 5900) << 8; /*0x43b3f4*/
        if ( result ) /*0x43b3f9*/
          return result; /*0x43b3f9*/
LABEL_22:
        v1 = this; /*0x43b48e*/
        goto LABEL_23; /*0x43b48e*/
      }
      if ( (*((_BYTE *)v18 + 20) & 1) != 0 ) /*0x43b408*/
      {
        v25 = (int *)(*(int (__thiscall **)(_DWORD *, char *))(*v3 + 72))(v3, v49); /*0x43b41a*/
        v26 = *v25; /*0x43b41d*/
        v27 = v25[1]; /*0x43b429*/
        v28 = v25[2]; /*0x43b42c*/
        v29 = *(_DWORD *)v18; /*0x43b42f*/
        v38 = v28; /*0x43b431*/
        v30 = (_DWORD *)(*(int (__thiscall **)(#375 *, char *))(v29 + 72))(v18, v51); /*0x43b438*/
        v31 = Coord::Subtract(v53, v26 - *v30, v27 - v30[1], v38 - v30[2]); /*0x43b454*/
        v37[0] = *v31; /*0x43b45b*/
        v37[1] = v31[1]; /*0x43b462*/
        v37[2] = v31[2]; /*0x43b46d*/
        result = (int)Coord::Length(v37) <= *(_DWORD *)(v3[328] + 5900) << 8; /*0x43b487*/
        if ( result ) /*0x43b48c*/
          return result; /*0x43b48c*/
        goto LABEL_22; /*0x43b48c*/
      }
LABEL_23:
      v2 = i + 1; /*0x43b492*/
    }
  }
  return 0; /*0x43b4a9*/
}


// ==== 0x0043B4C0  Cell::CanPlaceBuilding  this=VOID_PTR  sig=csp ====
char __fastcall Cell::CanPlaceBuilding(IUnknown *this, _DWORD *a2)
{
  int v2; // esi
  int v3; // edi
  _DWORD *v4; // ebp
  int *v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // ebx
  ObjectClass *Coords; // eax
  double v10; // st7
  int v12; // [esp+1Ch] [ebp-30h]
  int v14; // [esp+24h] [ebp-28h]
  char v15[12]; // [esp+34h] [ebp-18h] BYREF
  char v16[12]; // [esp+40h] [ebp-Ch] BYREF

  if ( (unsigned __int8)HouseClass::IsAlliedWith(HouseClass_Player, this) ) /*0x43b4d8*/
    return 0; /*0x43b4d8*/
  v2 = 0; /*0x43b4ea*/
  v12 = 0; /*0x43b4ec*/
  v3 = *(_DWORD *)&HouseClass_Player->__pad_134[4]; /*0x43b4f0*/
  v14 = v3; /*0x43b4f8*/
  if ( v3 <= 0 ) /*0x43b4fc*/
    return 0; /*0x43b5c9*/
  while ( 1 ) /*0x43b50e*/
  {
    v4 = *(_DWORD **)(*(_DWORD *)&HouseClass_Player->__pad_11C[16] + 4 * v2); /*0x43b50e*/
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
  Coords = (ObjectClass *)CellClass::GetCoords(a2, (int *)v16); /*0x43b542*/
  v10 = Math::Sqrt( /*0x43b58b*/
          (double)(v6 - *(_DWORD *)Coords->__pad_0) * (double)(v6 - *(_DWORD *)Coords->__pad_0)
        + (double)(v7 - *(_DWORD *)&Coords->__pad_0[4]) * (double)(v7 - *(_DWORD *)&Coords->__pad_0[4])
        + (double)(v8 - *(_DWORD *)&Coords->__pad_0[8]) * (double)(v8 - *(_DWORD *)&Coords->__pad_0[8]));
  if ( (int)Math::RoundToInt(v10) > *(_DWORD *)(v4[328] + 5900) << 8 ) /*0x43b5a9*/
  {
    v2 = v12; /*0x43b5ab*/
    v3 = v14; /*0x43b5af*/
    goto LABEL_6; /*0x43b5af*/
  }
  return 1; /*0x43b5c2*/
}


// ==== 0x0043B5E0  HouseClass::PsiWarn  this=unknown  sig=csp ====
void **__fastcall HouseClass::PsiWarn(InfantryClass *aP0, int a2, int arg0, void *a3)
{
  CoordStruct *v6; // edi
  void **v7; // eax
  AnimClass *v9; // esi
  CoordStruct aP2; // [esp+Ch] [ebp-18h] BYREF
  _BYTE v11[12]; // [esp+18h] [ebp-Ch] BYREF

  v6 = *(CoordStruct **)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * AnimTypeClass::FindIndex(a3)); /*0x43b5fb*/
  aP2 = *(CoordStruct *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 72))(a2, v11); /*0x43b60a*/
  v7 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x43b621*/
  if ( v7 ) /*0x43b62b*/
    v9 = AnimClass::ctor(v7, v6, &aP2, 0, (CoordStruct *)1, (void *)0x600, 0, 0); /*0x43b647*/
  else
    v9 = 0; /*0x43b64b*/
  AnimClass::SetField95(v9, arg0); /*0x43b654*/
  Function::Method_424CA0(v9, (int)aP0); /*0x43b65c*/
  v9->__pad_194[9] = 1; /*0x43b661*/
  return (void **)v9; /*0x43b66a*/
}


// ==== 0x0043B680  BuildingClass::ctor  this=BuildingClass  sig=csp ====
_DWORD *__thiscall sub_43B680(_DWORD *this, int a2)
{
  wchar_t *v3; // ecx

  TechnoClass::Constructor(a2); /*0x43b688*/
  *(this + 392) = 0; /*0x43b694*/
  *((_BYTE *)this + 1572) = 0; /*0x43b69a*/
  v3 = MEMORY[0xA8ED84]; /*0x43b6a0*/
  *(this + 396) = 0; /*0x43b6a6*/
  this->q628 = v3; /*0x43b6ac*/
  *(this + 397) = 0; /*0x43b6b7*/
  *(this + 398) = 1; /*0x43b6bd*/
  this->Occupants = 0; /*0x43b6c3*/
  this->FiringOccupantIndex = 0; /*0x43b6c9*/
  *((_BYTE *)this + 1656) = 1; /*0x43b6cf*/
  *((_BYTE *)this + 1657) = 0; /*0x43b6d5*/
  this->Overpowerers = &vt_DynamicVectorClass_InfantryClass; /*0x43b6db*/
  *(this + 416) = 10; /*0x43b6e5*/
  *(this + 415) = 0; /*0x43b6eb*/
  *(this + 418) = 0; /*0x43b6f1*/
  *(this + 419) = 0; /*0x43b6f7*/
  *((_BYTE *)this + 1680) = 1; /*0x43b6fd*/
  *((_BYTE *)this + 1681) = 0; /*0x43b703*/
  this->q684 = &vt_DynamicVectorClass_InfantryClass; /*0x43b709*/
  *(this + 422) = 10; /*0x43b713*/
  this->q694 = 0; /*0x43b719*/
  *this = &BuildingClass_Vtable; /*0x43b71f*/
  this->vtable2 = &BuildingClass_Vtable2; /*0x43b725*/
  this->vtable3 = &BuildingClass_Vtable3; /*0x43b72c*/
  this->vtable4 = &BuildingClass_Vtable4; /*0x43b733*/
  return this; /*0x43b73c*/
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
  int v11; // ebp
  int v12; // edi
  int v13; // eax
  _DWORD *v14; // ecx
  int v15; // eax
  int v16; // eax
  int Vtable3; // [esp+18h] [ebp+4h]

  TechnoClass::TechnoClass((_DWORD *)this, a3); /*0x43b74b*/
  *(_DWORD *)(this + 1312) = a2; /*0x43b756*/
  *(_DWORD *)(this + 1316) = 0; /*0x43b75c*/
  *(_DWORD *)(this + 1320) = dword_A8ED54[12]; /*0x43b76b*/
  *(_DWORD *)(this + 1328) = 0; /*0x43b771*/
  *(_DWORD *)(this + 1332) = -1; /*0x43b777*/
  *(_DWORD *)(this + 1336) = -1; /*0x43b77d*/
  *(_DWORD *)(this + 1340) = 0; /*0x43b783*/
  *(_DWORD *)(this + 1344) = 0; /*0x43b789*/
  *(_DWORD *)(this + 1348) = 0; /*0x43b78f*/
  *(_DWORD *)(this + 1352) = 0; /*0x43b795*/
  *(_DWORD *)(this + 1356) = 0; /*0x43b79b*/
  *(_DWORD *)(this + 1360) = dword_A8ED54[12]; /*0x43b7a7*/
  *(_DWORD *)(this + 1368) = 0; /*0x43b7ad*/
  *(_BYTE *)(this + 1512) = 0; /*0x43b7b3*/
  *(_DWORD *)(this + 1528) = -1; /*0x43b7b9*/
  *(_DWORD *)(this + 1532) = -1; /*0x43b7bf*/
  *(_DWORD *)(this + 1536) = 0; /*0x43b7c5*/
  v4 = dword_A8ED54[12]; /*0x43b7cb*/
  *(_DWORD *)(this + 1548) = 0; /*0x43b7d1*/
  *(_DWORD *)(this + 1540) = v4; /*0x43b7d7*/
  *(_DWORD *)(this + 1552) = 0; /*0x43b7dd*/
  *(_DWORD *)(this + 1556) = 0; /*0x43b7e3*/
  *(_DWORD *)(this + 1560) = 0; /*0x43b7e9*/
  *(_DWORD *)(this + 1564) = 0; /*0x43b7ef*/
  *(_DWORD *)(this + 1568) = 0; /*0x43b7f5*/
  *(_BYTE *)(this + 1572) = 0; /*0x43b7fb*/
  *(_DWORD *)(this + 1576) = dword_A8ED54[12]; /*0x43b807*/
  *(_DWORD *)(this + 1584) = 0; /*0x43b80d*/
  *(_DWORD *)(this + 1588) = 0; /*0x43b813*/
  *(_DWORD *)(this + 1592) = 1; /*0x43b819*/
  *(_DWORD *)(this + 1596) = MEMORY[0x87F7E8][29704]; /*0x43b82f*/
  *(_DWORD *)(this + 1600) = MEMORY[0x87F7E8][29705]; /*0x43b83b*/
  *(_DWORD *)(this + 1604) = MEMORY[0x87F7E8][29706]; /*0x43b844*/
  *(_DWORD *)(this + 1608) = MEMORY[0x87F7E8][29707]; /*0x43b84d*/
  *(_DWORD *)(this + 1612) = MEMORY[0x87F7E8][29720]; /*0x43b85c*/
  *(_DWORD *)(this + 1616) = MEMORY[0x87F7E8][29721]; /*0x43b868*/
  *(_DWORD *)(this + 1620) = MEMORY[0x87F7E8][29722]; /*0x43b871*/
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
  v5 = dword_A8ED54[12]; /*0x43b92b*/
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
  AbstractClass::GenerateUniqueID(this + 4); /*0x43ba15*/
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
  AudioController::Init((_DWORD *)(this + 1696)); /*0x43baa9*/
  AudioController::Init((_DWORD *)(this + 1716)); /*0x43bab4*/
  LOWORD(a3) = 0x4000; /*0x43babd*/
  FacingClass::Update((char *)(this + 880), &a3); /*0x43bacb*/
  *(_DWORD *)(this + 1568) = 0; /*0x43bad0*/
  if ( MEMORY[0x87F7E8][539866] < MEMORY[0x87F7E8][539864] /*0x43bb08*/
    || (BYTE1(MEMORY[0x87F7E8][539865]) || !MEMORY[0x87F7E8][539864])
    && MEMORY[0x87F7E8][539867] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(MEMORY[0x87F7E8][539862] + 8))(
         &MEMORY[0x87F7E8][539862],
         MEMORY[0x87F7E8][539867] + MEMORY[0x87F7E8][539864],
         0) )
  {
    v8 = MEMORY[0x87F7E8][539866]++; /*0x43bb15*/
    *(_DWORD *)(MEMORY[0x87F7E8][539863] + 4 * v8) = this; /*0x43bb24*/
  }
  BuildingClass::Update((#377 *)this); /*0x43bb29*/
  if ( dword_A8ED54[131647] < dword_A8ED54[131645] /*0x43bb62*/
    || (BYTE1(dword_A8ED54[131646]) || !dword_A8ED54[131645])
    && dword_A8ED54[131648] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8ED54[131643] + 8))(
         &dword_A8ED54[131643],
         dword_A8ED54[131648] + dword_A8ED54[131645],
         0) )
  {
    v9 = dword_A8ED54[131647]++; /*0x43bb6f*/
    *(_DWORD *)(dword_A8ED54[131644] + 4 * v9) = this; /*0x43bb7e*/
  }
  if ( dword_A8ED54[131613] < dword_A8ED54[131611] /*0x43bbb5*/
    || (BYTE1(dword_A8ED54[131612]) || !dword_A8ED54[131611])
    && dword_A8ED54[131614] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8ED54[131609] + 8))(
         &dword_A8ED54[131609],
         dword_A8ED54[131614] + dword_A8ED54[131611],
         0) )
  {
    v10 = dword_A8ED54[131613]++; /*0x43bbc2*/
    *(_DWORD *)(dword_A8ED54[131610] + 4 * v10) = this; /*0x43bbd1*/
  }
  Vtable3 = AbstractClass::GetVtable3(this + 4); /*0x43bbe0*/
  if ( dword_A8ED54[130748] + 1 <= dword_A8ED54[130749] ) /*0x43bbec*/
    goto LABEL_29; /*0x43bbec*/
  if ( dword_A8ED54[130749] ) /*0x43bbf4*/
  {
    v11 = dword_A8ED54[130749]; /*0x43bbfd*/
    if ( dword_A8ED54[130749] < 0 ) /*0x43bc01*/
      goto LABEL_30; /*0x43bc01*/
  }
  else
  {
    v11 = 10; /*0x43bbf6*/
  }
  a3 = v11 + dword_A8ED54[130749]; /*0x43bc09*/
  v12 = __2_YAPAXI_Z(8 * (v11 + dword_A8ED54[130749])); /*0x43bc16*/
  if ( v12 ) /*0x43bc1d*/
  {
    v13 = 0; /*0x43bc27*/
    --a3; /*0x43bc2a*/
    if ( dword_A8ED54[130748] > 0 ) /*0x43bc36*/
    {
      do /*0x43bc57*/
      {
        v14 = (_DWORD *)(dword_A8ED54[130747] + 8 * v13++); /*0x43bc3e*/
        *(_DWORD *)(v12 + 8 * v13 - 8) = *v14; /*0x43bc44*/
        *(_DWORD *)(v12 + 8 * v13 - 4) = v14[1]; /*0x43bc4b*/
      }
      while ( v13 < dword_A8ED54[130748] ); /*0x43bc57*/
    }
    __3_YAXPAX_Z((void *)dword_A8ED54[130747]); /*0x43bc60*/
    dword_A8ED54[130747] = v12; /*0x43bc6f*/
    dword_A8ED54[130749] += v11; /*0x43bc75*/
    dword_A8ED54[130751] = 0; /*0x43bc7a*/
LABEL_29:
    *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748]) = Vtable3; /*0x43bc80*/
    *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748] + 4) = this; /*0x43bc9e*/
    LOBYTE(dword_A8ED54[130750]) = 0; /*0x43bca8*/
    ++dword_A8ED54[130748]; /*0x43bcae*/
  }
LABEL_30:
  v15 = *(_DWORD *)(this + 1312); /*0x43bcb3*/
  if ( v15 ) /*0x43bcbb*/
  {
    v16 = *(_DWORD *)(v15 + 6016); /*0x43bcbd*/
    if ( v16 < 1 ) /*0x43bcc6*/
      v16 = 1; /*0x43bcc8*/
    RadioClass::SetLinkCount((_DWORD *)this, v16); /*0x43bcd0*/
    return this; /*0x43bcd5*/
  }
  else
  {
    RadioClass::SetLinkCount((_DWORD *)this, 1); /*0x43bce2*/
    return this; /*0x43bce7*/
  }
}


// ==== 0x0043BCF0  BuildingClass::Dtor  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Dtor(void **this)
{
  void **v2; // edi
  int v3; // edx
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  void **v8; // edi
  int v9; // ebx
  int v10; // eax
  char v11; // cl
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // ecx
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  char *v20; // eax
  int v21; // eax
  int v22; // ecx
  int i; // eax
  _DWORD *v24; // eax
  int v25; // edi
  int v26; // ebx
  void *v27; // eax
  void *v28; // eax
  void **Vtable3; // [esp+18h] [ebp-4h] BYREF

  v2 = this + 429; /*0x43bcf7*/
  *this = &BuildingClass_Vtable; /*0x43bcfd*/
  *(this + 1) = &BuildingClass_Vtable2; /*0x43bd05*/
  *(this + 2) = &BuildingClass_Vtable3; /*0x43bd0c*/
  *(this + 3) = &BuildingClass_Vtable4; /*0x43bd13*/
  Mixer::ReleaseChannel((int **)this + 429); /*0x43bd1a*/
  Mixer::ReleaseChannel((int **)this + 424); /*0x43bd27*/
  AudioFileClass::Release(v2); /*0x43bd2e*/
  AudioFileClass::Release(this + 424); /*0x43bd35*/
  v4 = (int)*(this + 389); /*0x43bd3a*/
  if ( v4 ) /*0x43bd44*/
  {
    MapClass::ScrollOnce(v4, 0); /*0x43bd47*/
    v5 = (int)*(this + 389); /*0x43bd4c*/
    if ( v5 ) /*0x43bd54*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x43bd5a*/
    *(this + 389) = 0; /*0x43bd5d*/
  }
  LOBYTE(v3) = 1; /*0x43bd63*/
  AbstractClass::AnnounceExpiredPointer(this, v3); /*0x43bd67*/
  BuildingClass::Sell((#377 *)this); /*0x43bd6e*/
  Vtable3 = this; /*0x43bd83*/
  v6 = (*(int (__thiscall **)(_DWORD *, void ***))(MEMORY[0x87F7E8][539862] + 16))(&MEMORY[0x87F7E8][539862], &Vtable3); /*0x43bd87*/
  if ( v6 != -1 ) /*0x43bd8d*/
    Vector::RemoveAt(&MEMORY[0x87F7E8][539862], v6); /*0x43bd95*/
  Vtable3 = this; /*0x43bdaa*/
  v7 = (*(int (__thiscall **)(_DWORD *, void ***))(MEMORY[0x87F7E8][53886] + 16))(&MEMORY[0x87F7E8][53886], &Vtable3); /*0x43bdae*/
  if ( v7 != -1 ) /*0x43bdb4*/
    Vector::RemoveAt(&MEMORY[0x87F7E8][53886], v7); /*0x43bdbc*/
  BuildingClass::ClearAnims((int *)this, -2); /*0x43bdc5*/
  BuildingTypeClass::IsPowered((int)this->gattlingValue); /*0x43bdd0*/
  v8 = this + 370; /*0x43bdd5*/
  v9 = 8; /*0x43bddb*/
  do /*0x43bdf4*/
  {
    if ( *v8 ) /*0x43bde0*/
    {
      (*(void (__thiscall **)(void *))(*(_DWORD *)*v8 + 248))(*v8); /*0x43bde8*/
      *v8 = 0; /*0x43bdee*/
    }
    ++v8; /*0x43bdf0*/
    --v9; /*0x43bdf3*/
  }
  while ( v9 ); /*0x43bdf4*/
  if ( LOBYTE(MEMORY[0x87F7E8][539758]) ) /*0x43bdfd*/
  {
    v10 = (int)this->gattlingValue; /*0x43bdff*/
    if ( v10 ) /*0x43be07*/
    {
      if ( *(_BYTE *)(v10 + 5831) ) /*0x43be09*/
      {
        v11 = *((_BYTE *)this + 1772); /*0x43be13*/
        *((_BYTE *)this + 1771) = -1; /*0x43be19*/
        if ( !v11 ) /*0x43be22*/
          *((_BYTE *)this + 1772) = *(_BYTE *)(v10 + 5895); /*0x43be2a*/
        *((_BYTE *)this + 128) = 1; /*0x43be34*/
        *((_BYTE *)this + 1772) = 1; /*0x43be3b*/
        BuildingClass::CleanupOccupation((#377 *)this); /*0x43be42*/
      }
    }
  }
  v12 = *((_DWORD *)this->gattlingValue + 1468); /*0x43be50*/
  if ( (v12 == -1 /*0x43bee8*/
     || (v13 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(MEMORY[0x87F7E8][528693] + 4 * v12) + 40) + 200)) == 0
     || DynamicVector::GetOrGrow((_DWORD *)*(this + 135) + 5460, *(_DWORD *)(v13 + 3576)))
    && *((_DWORD *)this->gattlingValue + 1468) != -1
    || ((v14 = *((_DWORD *)this->gattlingValue + 1469), v14 == -1)
     || (v15 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(MEMORY[0x87F7E8][528693] + 4 * v14) + 40) + 200)) == 0
     || DynamicVector::GetOrGrow((_DWORD *)*(this + 135) + 5460, *(_DWORD *)(v15 + 3576)))
    && *((_DWORD *)this->gattlingValue + 1469) != -1 )
  {
    SuperWeapon::UpdateSuperWeaponsOwnedHouseClass((int)*(this + 135)); /*0x43bef0*/
  }
  if ( LOBYTE(MEMORY[0x87F7E8][539758]) ) /*0x43befc*/
  {
    if ( *(this + 27) != *(this + 337) ) /*0x43bf09*/
      *((_BYTE *)*(this + 135) + 22392) = 1; /*0x43bf11*/
    if ( LOBYTE(MEMORY[0x87F7E8][539758]) && this->gattlingValue ) /*0x43bf21*/
    {
      v16 = *(this + 135); /*0x43bf29*/
      if ( v16 ) /*0x43bf31*/
        HouseClass::DecrementUnitCount(v16, this); /*0x43bf34*/
      BuildingClass::Sell((#377 *)this); /*0x43bf3b*/
    }
  }
  v17 = (int)*(this + 329); /*0x43bf40*/
  if ( v17 ) /*0x43bf48*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v17 + 32))(v17, 1); /*0x43bf4e*/
  *(this + 329) = 0; /*0x43bf51*/
  Vtable3 = this; /*0x43bf67*/
  v18 = (*(int (__thiscall **)(int *, void ***))(dword_A8ED54[131609] + 16))(&dword_A8ED54[131609], &Vtable3); /*0x43bf6b*/
  if ( v18 != -1 ) /*0x43bf70*/
    DynamicVector::RemoveItem(&dword_A8ED54[131609], v18); /*0x43bf78*/
  Vtable3 = this; /*0x43bf8d*/
  v19 = (*(int (__thiscall **)(int *, void ***))(dword_A8ED54[131643] + 16))(&dword_A8ED54[131643], &Vtable3); /*0x43bf91*/
  if ( v19 != -1 ) /*0x43bf96*/
    DynamicVector::RemoveItem(&dword_A8ED54[131643], v19); /*0x43bf9e*/
  Vtable3 = (void **)AbstractClass::GetVtable3((int)(this + 1)); /*0x43bfac*/
  v20 = BuildingTypeClass::Dequeue((char **)&dword_A8ED54[130747], (int *)&Vtable3); /*0x43bfba*/
  if ( v20 ) /*0x43bfc1*/
  {
    v21 = (int)&v20[-dword_A8ED54[130747]] >> 3; /*0x43bfc9*/
    if ( v21 != -1 ) /*0x43bfce*/
    {
      v22 = v21 + 1; /*0x43bfd0*/
      for ( i = dword_A8ED54[130748]; v22 < dword_A8ED54[130748]; i = dword_A8ED54[130748] ) /*0x43bfda*/
      {
        v24 = (_DWORD *)(dword_A8ED54[130747] + 8 * v22++); /*0x43bfe2*/
        *(v24 - 2) = *v24; /*0x43bfe8*/
        *(v24 - 1) = v24[1]; /*0x43bfee*/
      }
      dword_A8ED54[130748] = i - 1; /*0x43c003*/
      *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748]) = 0; /*0x43c008*/
      *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748] + 4) = 0; /*0x43c018*/
      dword_A8ED54[130751] = 0; /*0x43c01c*/
    }
  }
  this->gattlingValue = 0; /*0x43c022*/
  this->isChronosphereImmune = 0; /*0x43c02e*/
  v25 = (int)*(this + 413); /*0x43c03a*/
  (*((void (__thiscall **)(void **))*(this + 411) + 3))(this + 411); /*0x43c03d*/
  (*((void (__thiscall **)(void **, int, _DWORD))*(this + 411) + 2))(this + 411, v25, 0); /*0x43c048*/
  v26 = (int)*(this + 419); /*0x43c051*/
  (*((void (__thiscall **)(void **))*(this + 417) + 3))(this + 417); /*0x43c05f*/
  (*((void (__thiscall **)(void **, int, _DWORD))*(this + 417) + 2))(this + 417, v26, 0); /*0x43c069*/
  v27 = *(this + 418); /*0x43c06c*/
  *(this + 417) = &VectorClass<InfantryClass *>::`vftable'; /*0x43c073*/
  if ( v27 && *((_BYTE *)this + 1681) ) /*0x43c07b*/
  {
    __3_YAXPAX_Z(v27); /*0x43c083*/
    *(this + 418) = 0; /*0x43c08b*/
  }
  *((_BYTE *)this + 1681) = 0; /*0x43c08e*/
  *(this + 419) = 0; /*0x43c092*/
  v28 = *(this + 412); /*0x43c095*/
  *(this + 411) = &VectorClass<InfantryClass *>::`vftable'; /*0x43c098*/
  if ( v28 && *((_BYTE *)this + 1657) ) /*0x43c0a3*/
  {
    __3_YAXPAX_Z(v28); /*0x43c0ab*/
    *(this + 412) = 0; /*0x43c0b3*/
  }
  *((_BYTE *)this + 1657) = 0; /*0x43c0b8*/
  *(this + 413) = 0; /*0x43c0bc*/
  return TechnoClass::DTOR((int)this); /*0x43c0c4*/
}


// ==== 0x0043C0D0  ObjectClass::CreateDominatorDestructionEffects  this=BuildingClass  sig=csp ====
int *__thiscall CreateDominatorDestructionEffects(_DWORD *this)
{
  int *result; // eax
  int **v3; // edi
  int v4; // ebp
  int *v5; // eax
  int v6; // ecx
  int v7; // edx
  _DWORD *v8; // eax
  int *v9; // ebx
  int FoundationHeightBuildingTypeClass; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // [esp+10h] [ebp-2Ch]
  _DWORD *v14; // [esp+14h] [ebp-28h]
  int *v15; // [esp+18h] [ebp-24h]
  int v16; // [esp+1Ch] [ebp-20h] BYREF
  int v17; // [esp+24h] [ebp-18h] BYREF
  int v18; // [esp+28h] [ebp-14h]
  int v19; // [esp+2Ch] [ebp-10h]
  _BYTE v20[12]; // [esp+30h] [ebp-Ch] BYREF

  result = (int *)MEMORY[0x8871E0]->?; /*0x43c0db*/
  v15 = result; /*0x43c0e6*/
  if ( result ) /*0x43c0ea*/
  {
    v3 = (int **)(this + 370); /*0x43c105*/
    v13 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, (int)result - 1); /*0x43c10b*/
    v4 = 5592; /*0x43c10f*/
    v14 = this + 370; /*0x43c114*/
    do /*0x43c28e*/
    {
      result = (int *)(this->Type + v4); /*0x43c121*/
      if ( *result == aP5 && result[1] == unk_89C84C || *v3 ) /*0x43c13d*/
        break; /*0x43c140*/
      v5 = World::ToScreen((float *)MEMORY[0x887324], &v16, result); /*0x43c152*/
      v6 = *v5; /*0x43c157*/
      v18 = v5[1]; /*0x43c15e*/
      v19 = 0; /*0x43c162*/
      v7 = *this; /*0x43c166*/
      v17 = v6; /*0x43c16c*/
      v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(v7 + 172))(this, v20); /*0x43c173*/
      v17 += *v8; /*0x43c189*/
      v18 += v8[1]; /*0x43c197*/
      v19 += v8[2]; /*0x43c1a0*/
      result = (int *)__2_YAPAXI_Z(0x1C8u); /*0x43c1a4*/
      if ( result ) /*0x43c1ae*/
      {
        result = (int *)AnimClass::ctor( /*0x43c1dc*/
                          (void **)result,
                          *(void **)(MEMORY[0x8871E0]->? + 4 * v13),
                          &v17,
                          0,
                          1,
                          (void *)0x600,
                          0,
                          0);
        v9 = result; /*0x43c1e1*/
        if ( result ) /*0x43c1e5*/
        {
          *v3 = result; /*0x43c1eb*/
          FoundationHeightBuildingTypeClass = BuildingTypeClass::GetFoundationHeight(this->Type, 0); /*0x43c200*/
          v11 = (3 /*0x43c21e*/
               * (*(_DWORD *)(this->Type + v4 + 4)
                - 15
                * (BuildingTypeClass::GetFoundationWidth((_DWORD *)this->Type) + FoundationHeightBuildingTypeClass))) >> 1;
          v9[64] = v11 - 10; /*0x43c225*/
          if ( v11 - 10 > 0 ) /*0x43c22b*/
            v9[64] = 0; /*0x43c22d*/
          v12 = *(_DWORD *)(v9[50] + 704); /*0x43c23d*/
          if ( v12 > 0 ) /*0x43c245*/
            v9[43] = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, v12 - 1); /*0x43c25b*/
          result = (int *)++v13; /*0x43c269*/
          if ( v13 >= (int)v15 ) /*0x43c270*/
            v13 = 0; /*0x43c272*/
        }
      }
      v4 += 8; /*0x43c27e*/
      v3 = (int **)++v14; /*0x43c281*/
    }
    while ( v4 < 5656 ); /*0x43c28e*/
  }
  return result; /*0x43c294*/
}


// ==== 0x0043C2D0  BuildingClass::MissionController  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::MissionController(#377 *this)
{
  int v1; // ebp
  int result; // eax
  int v4; // eax
  int v5; // ebx
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  _BYTE *v9; // eax
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // ebx
  _BYTE *v13; // edi
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ebp
  _DWORD *v17; // eax
  void *v18; // eax
  void *v19; // ebp
  int v20; // eax
  int Member; // eax
  _DWORD *v22; // ebp
  _DWORD *v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  double v28; // st7
  _BYTE *v29; // eax
  _WORD *v30; // eax
  int i; // ebp
  int v32; // ebx
  _BYTE *v33; // esi
  int v34; // ecx
  _BYTE *v35; // eax
  int v36; // eax
  _DWORD *v37; // edi
  _DWORD *v38; // eax
  int v39; // ecx
  int v40; // edx
  int v41; // eax
  int v42; // ecx
  double v43; // st7
  _BYTE *v44; // esi
  int v45; // [esp+30h] [ebp-40h] BYREF
  int v46; // [esp+34h] [ebp-3Ch]
  int v47; // [esp+38h] [ebp-38h]
  int v48; // [esp+3Ch] [ebp-34h]
  _DWORD v49[3]; // [esp+40h] [ebp-30h] BYREF
  char v50[12]; // [esp+4Ch] [ebp-24h] BYREF
  _BYTE v51[12]; // [esp+58h] [ebp-18h] BYREF
  _BYTE v52[12]; // [esp+64h] [ebp-Ch] BYREF
  int v53; // [esp+74h] [ebp+4h]
  char v54; // [esp+74h] [ebp+4h]
  int v55; // [esp+74h] [ebp+4h]
  int v56; // [esp+78h] [ebp+8h] BYREF
  _DWORD *v57; // [esp+7Ch] [ebp+Ch]

  v1 = v56; /*0x43c2d5*/
  switch ( v56 )
  {
    case 3:
      BuildingClass::StartProduction((int *)this, 1); /*0x43cd05*/
      TechnoClass::Mission_RepairDispatch((int *)this, v1, v53, v1, v57); /*0x43cd17*/
      return 1; /*0x43cd28*/
    case 8:
      v36 = this->Type; /*0x43cd2b*/
      if ( !*(_BYTE *)(v36 + 5801) && !*(_BYTE *)(v36 + 5803) ) /*0x43cd3f*/
        goto LABEL_151; /*0x43cd3f*/
      v37 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v53 + 72))(v53, v52); /*0x43cd5b*/
      v38 = (_DWORD *)(*(int (__thiscall **)(#377 *, _BYTE *))(this->q048)(this, v51); /*0x43cd64*/
      v39 = *v38 - *v37; /*0x43cd6b*/
      v40 = v38[1]; /*0x43cd6d*/
      v41 = v38[2]; /*0x43cd70*/
      v46 = v39; /*0x43cd73*/
      v42 = v37[2]; /*0x43cd7f*/
      v47 = v40 - v37[1]; /*0x43cd82*/
      v48 = v41 - v42; /*0x43cd8c*/
      v43 = Math::Sqrt((double)v46 * (double)v46 + (double)(v41 - v42) * (double)(v41 - v42) + (double)v47 * (double)v47); /*0x43cdb1*/
      if ( (int)Math::RoundToInt(v43) < 384 ) /*0x43cdc3*/
        return 1; /*0x43cdc8*/
LABEL_151:
      TechnoClass::Mission_RepairDispatch((int *)this, v1, v53, v1, v57); /*0x43cddd*/
      v44 = (_BYTE *)this->Type; /*0x43cde2*/
      if ( v44[5821] || v44[5801] || v44[5803] ) /*0x43cdfc*/
        return 23; /*0x43ce18*/
      else
        return 1; /*0x43ce09*/
    case 11:
      (*(void (__thiscall **)(#377 *, int, _DWORD))(this->q1E8)(this, 20, 0); /*0x43cc41*/
      goto LABEL_144; /*0x43cc47*/
    case 12:
      if ( (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) != 19 ) /*0x43cc59*/
      {
        (*(void (__thiscall **)(#377 *, int, _DWORD))(this->q1E8)(this, 5, 0); /*0x43cc67*/
        if ( *(_BYTE *)(this->Type + 5817) ) /*0x43cc73*/
        {
          BuildingClass::ClearAnims((int *)this, 7); /*0x43cc81*/
          BuildingClass::ClearAnims((int *)this, 18); /*0x43cc8a*/
          if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)(MEMORY[0x87F7E8][7806] + 5888) ) /*0x43cca7*/
          {
            v34 = 0; /*0x43ccc1*/
            v35 = (_BYTE *)(this->Type + 4460); /*0x43ccc3*/
          }
          else
          {
            v34 = 1; /*0x43ccaf*/
            v35 = (_BYTE *)(this->Type + 4476); /*0x43ccb4*/
          }
          if ( v35 && *v35 ) /*0x43cccc*/
            BuildingClass::PlayAnim(this, MEMORY[0x87F7E8][7806], v35, 8, v34, 0, 0); /*0x43ccdb*/
        }
      }
LABEL_144:
      TechnoClass::Mission_RepairDispatch((int *)this, v1, v53, v1, v57); /*0x43cce0*/
      return 1; /*0x43cced*/
    case 13:
      if ( !*(_BYTE *)(this->Type + 5821) ) /*0x43ce32*/
        return TechnoClass::Mission_RepairDispatch((int *)this, v1, v53, v1, v57); /*0x43ce32*/
      return 1; /*0x43ce40*/
    case 14:
      v12 = v57; /*0x43c7e9*/
      v13 = (_BYTE *)v53; /*0x43c7ed*/
      TechnoClass::Mission_RepairDispatch((int *)this, v56, v53, v56, v57); /*0x43c7f6*/
      if ( !*((_BYTE *)this + 1632) ) /*0x43c7fb*/
        return 10; /*0x43c811*/
      if ( *(_BYTE *)(this->Type + 5801) ) /*0x43c81a*/
      {
        if ( Array::Contains((int *)this, v53) ) /*0x43c827*/
        {
          result = (*(int (__thiscall **)(#377 *, int, int))(*(_DWORD *)this + 632))(this, 34, v53); /*0x43c837*/
          if ( result == 10 ) /*0x43c840*/
            return result; /*0x43c840*/
        }
      }
      if ( *(_BYTE *)(this->Type + 5803) /*0x43c86a*/
        && Array::Contains((int *)this, v53)
        && !TechnoClass::CanSelfRepair((_BYTE *)v53) )
      {
        return 10; /*0x43c87f*/
      }
      v14 = this->Type; /*0x43c882*/
      if ( !*(_BYTE *)(v14 + 5825) && !*(_BYTE *)(v14 + 5826) )
      {
        if ( !Array::Contains((int *)this, v53) && Array::ContainsValue((int *)this, v53) ) /*0x43c8b3*/
        {
          (*(void (__thiscall **)(#377 *, int, int))(*(_DWORD *)this + 632))(this, 2, v53); /*0x43c8c3*/
          Array::Contains((int *)this, v53); /*0x43c8cc*/
        }
        v54 = 0; /*0x43c8d4*/
        if ( Array::Contains((int *)this, (int)v13) )
        {
          v15 = this->Type; /*0x43c8e2*/
          if ( *(_BYTE *)(v15 + 5811) || *(_BYTE *)(v15 + 5820) )
          {
            v16 = v13 ? ((v13[20] & 4) != 0 ? (unsigned int)v13 : 0) : 0;
            v17 = (_DWORD *)(*(int (__thiscall **)(#377 *, char *, unsigned int))(this->lineTrailer)( /*0x43c91b*/
                              this,
                              v50,
                              v16);
            v18 = Coord::To_Cell(MEMORY[0x87F7E8], v17); /*0x43c927*/
            v19 = *(void **)(v16 + 1444); /*0x43c92c*/
            if ( v19 ) /*0x43c934*/
            {
              if ( v18 != v19 ) /*0x43c938*/
                v54 = 1; /*0x43c93a*/
            }
          }
        }
        if ( Team::GetMember(this, 0) ) /*0x43c943*/
        {
          v20 = this->Type; /*0x43c950*/
          if ( *(_BYTE *)(v20 + 5801) || *(_BYTE *)(v20 + 5803) ) /*0x43c960*/
          {
            Member = Team::GetMember(this, 0); /*0x43c972*/
            v22 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)Member + 72))(Member, v51); /*0x43c985*/
            v23 = (_DWORD *)(*(int (__thiscall **)(#377 *, _BYTE *))(this->q048)(this, v52); /*0x43c98e*/
            v24 = *v23 - *v22; /*0x43c996*/
            v25 = v23[1]; /*0x43c998*/
            v26 = v23[2]; /*0x43c99b*/
            v46 = v24; /*0x43c99e*/
            v27 = v22[2]; /*0x43c9aa*/
            v47 = v25 - v22[1]; /*0x43c9ad*/
            v48 = v26 - v27; /*0x43c9b7*/
            v28 = Math::Sqrt((double)v46 * (double)v46 + (double)(v26 - v27) * (double)(v26 - v27) + (double)v47 * (double)v47); /*0x43c9dc*/
            if ( (int)Math::RoundToInt(v28) > 128 ) /*0x43c9ee*/
              v54 = 1; /*0x43c9f0*/
          }
        }
        if ( (*(int (__thiscall **)(#377 *, int, _BYTE *))(*(_DWORD *)this + 632))(this, 19, v13) == 1 || v54 ) /*0x43ca0d*/
        {
          *v12 = this; /*0x43ca13*/
          v29 = (_BYTE *)this->Type; /*0x43ca15*/
          if ( v29[5811] || v29[5820] ) /*0x43ca25*/
          {
            v30 = (_WORD *)(*(int (__thiscall **)(#377 *, int *))(*(_DWORD *)this + 440))(this, &v45); /*0x43ca7a*/
            LOWORD(v55) = *v30 + 3; /*0x43ca8d*/
            HIWORD(v55) = v30[1] + 1; /*0x43ca92*/
            v56 = v55; /*0x43ca9f*/
            *v12 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v56); /*0x43caae*/
            if ( (*(int (__thiscall **)(#377 *, int, _DWORD *, _BYTE *))(*(_DWORD *)this + 636))(this, 18, v12, v13) == 20 ) /*0x43cac1*/
            {
              (*(void (__thiscall **)(#377 *, int, _BYTE *))(*(_DWORD *)this + 632))(this, 24, v13); /*0x43cace*/
              if ( (*(int (__thiscall **)(#377 *, int, _BYTE *))(*(_DWORD *)this + 632))(this, 22, v13) != 1 ) /*0x43cae4*/
              {
                (*(void (__thiscall **)(_BYTE *, _DWORD *, int, int))(*(_DWORD *)v13 + 372))( /*0x43caf7*/
                  v13,
                  &MEMORY[0x87F7E8][29720],
                  1,
                  1);
                return 1; /*0x43cb09*/
              }
            }
          }
          else if ( v29[5835] ) /*0x43ca2f*/
          {
            *v12 = this; /*0x43ca3d*/
            if ( (*(int (__thiscall **)(#377 *, int, _DWORD *, _BYTE *))(*(_DWORD *)this + 636))(this, 18, v12, v13) == 20 ) /*0x43ca50*/
            {
              (*(void (__thiscall **)(#377 *, int))(*(_DWORD *)this + 628))(this, 24); /*0x43ca5c*/
              return 1; /*0x43ca6e*/
            }
          }
        }
        return 1; /*0x43ca50*/
      }
      if ( Array::ContainsValue((int *)this, v53) ) /*0x43cb0f*/
      {
        v49[0] = *((_DWORD *)this + 39); /*0x43cb83*/
        v49[1] = this->q0A0; /*0x43cb94*/
        v49[2] = *((_DWORD *)this + 41); /*0x43cb9b*/
        *v12 = Coord::To_Cell(MEMORY[0x87F7E8], v49); /*0x43cba4*/
        (*(void (__thiscall **)(#377 *, int, _DWORD *, int))(*(_DWORD *)this + 636))(this, 18, v12, v53); /*0x43cbae*/
        return 1; /*0x43cbc0*/
      }
      for ( i = 0; i < this->q0E8; ++i ) /*0x43cb22*/
      {
        v32 = Team::GetMember(this, i); /*0x43cb2c*/
        if ( (*(int (__thiscall **)(#377 *, int, int))(*(_DWORD *)this + 632))(this, 34, v32) == 10 ) /*0x43cb3e*/
          (*(void (__thiscall **)(#377 *, int, int))(*(_DWORD *)this + 632))(this, 23, v32); /*0x43cb47*/
      }
      if ( !Array::ContainsValue((int *)this, v53) ) /*0x43cb5b*/
        return 10; /*0x43cb62*/
      return 1; /*0x43cb62*/
    case 15:
      TechnoClass::Mission_RepairDispatch((int *)this, v56, v53, v56, v57); /*0x43c305*/
      if ( !Object::IsAlliedWithObjectHouse(*((_DWORD **)this + 135), v53) ) /*0x43c311*/
        return 0; /*0x43c318*/
      if ( (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) == 18 ) /*0x43c333*/
        return 10; /*0x43c333*/
      if ( (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) == 19 ) /*0x43c346*/
        return 10; /*0x43c346*/
      if ( !this->BuildingClass_field_int_534 ) /*0x43c34c*/
        return 10; /*0x43c34c*/
      if ( !MEMORY[0x87F7E8][539633] && !Array::ContainsValue((int *)this, v53) ) /*0x43c366*/
      {
        v4 = this->Type; /*0x43c36f*/
        if ( !*(_BYTE *)(v4 + 5806) && !*(_BYTE *)(v4 + 5807) ) /*0x43c37f*/
          return 10; /*0x43c387*/
      }
      if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v53 + 132))(v53) + 1460) != 5 /*0x43c3e6*/
        && (*(_BYTE *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3278)
         && !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v53 + 132))(v53) + 3278)
         || !*(_BYTE *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3278)
         && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v53 + 132))(v53) + 3278)) )
      {
        return 10; /*0x43c3fc*/
      }
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v53 + 132))(v53) + 3434) ) /*0x43c409*/
        return 10; /*0x43c41f*/
      if ( !*((_BYTE *)this + 1632) ) /*0x43c422*/
        return 10; /*0x43c438*/
      v5 = this->Type; /*0x43c43b*/
      if ( !*(_BYTE *)(v5 + 5806) && !*(_BYTE *)(v5 + 5807) ) /*0x43c453*/
        goto LABEL_33; /*0x43c453*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) == 1 && !*(_BYTE *)(this->Type + 5806) /*0x43c487*/
        || (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) == 15 && !*(_BYTE *)(this->Type + 5807) )
      {
        return 10; /*0x43c49d*/
      }
      if ( *(_DWORD *)(v53 + 700) && (unsigned __int8)CellClass::HasContent() ) /*0x43c4aa*/
        return 10; /*0x43c4bf*/
      v5 = this->Type; /*0x43c4c2*/
      if ( *((_DWORD *)this + 69) + 1 <= *(_DWORD *)(v5 + 1504) /*0x43c4f2*/
        && *(double *)((*(int (__thiscall **)(int))(*(_DWORD *)v53 + 132))(v53) + 896) <= *(double *)(v5 + 904) )
      {
        return 1; /*0x43c4f2*/
      }
LABEL_33:
      if ( *(_BYTE *)(v5 + 5805) ) /*0x43c4f8*/
        return 1; /*0x43c500*/
      if ( *(_BYTE *)(v5 + 5803) ) /*0x43c506*/
      {
        if ( TechnoClass::CanSelfRepair((_BYTE *)v53) /*0x43c52f*/
          && (*(int (__thiscall **)(#377 *, int, int))(*(_DWORD *)this + 632))(this, 35, v53) != 1 )
        {
          return 1; /*0x43c541*/
        }
        return 10; /*0x43cb74*/
      }
      if ( *(_BYTE *)(v5 + 5801) ) /*0x43c544*/
      {
        if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) == 1 /*0x43c57a*/
           || (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) == 2)
          && (*(int (__thiscall **)(#377 *, int, int))(*(_DWORD *)this + 632))(this, 35, v53) != 1 )
        {
          return 1; /*0x43c58c*/
        }
        return 10; /*0x43c57a*/
      }
      if ( !*(_BYTE *)(v5 + 5826) && !*(_BYTE *)(v5 + 5825)
        || (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) != 15 )
      {
        v8 = this->Type; /*0x43c620*/
        if ( *(_BYTE *)(v8 + 5835) )
          return (*(int (__stdcall **)(int))(*(_DWORD *)(v53 + 4) + 12))(v53 + 4) != 2 ? 10 : 1;
        if ( !*(_BYTE *)(v8 + 5811) /*0x43c682*/
          || (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) != 1
          || !*(_BYTE *)(*(_DWORD *)(v53 + 1732) + 3598)
          || !MEMORY[0x87F7E8][539633] && this->q118 )
        {
          if ( !*(_BYTE *)(this->Type + 5820) /*0x43c6ba*/
            || (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) != 1
            || !*(_BYTE *)(*(_DWORD *)(v53 + 1732) + 3599) )
          {
            return 0; /*0x43c6c2*/
          }
          if ( !MEMORY[0x87F7E8][539633] ) /*0x43c6cf*/
            return !this->q118; /*0x43c323*/
        }
        return 1; /*0x43ccfe*/
      }
      if ( v53 )
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 44))(v53) == 15 ? v53 : 0;
      else
        v6 = 0; /*0x43c5b3*/
      if ( *(_DWORD *)(v6 + 700) && (unsigned __int8)CellClass::HasContent() ) /*0x43c5d5*/
        return 10; /*0x43c5e1*/
      if ( (unsigned __int8)BuildingClass::IsBeingRepairedOrCaptured(v6) ) /*0x43c5ef*/
        return 10; /*0x43c5fb*/
      v7 = -(this->pitchAngle != 0); /*0x43c610*/
      LOBYTE(v7) = v7 & 0xF7; /*0x43c613*/
      return v7 + 10;
    case 16:
      if ( this->q118 /*0x43cbf4*/
        || !Array::ContainsValue((int *)this, v53)
        || *((_BYTE *)this + 129)
        || this->focus != (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 60))(v53) )
      {
        return 10; /*0x43cbf4*/
      }
      v33 = (_BYTE *)this->Type; /*0x43cbfa*/
      if ( v33[5819] || v33[5801] ) /*0x43cc0e*/
        return 1; /*0x43cc16*/
      if ( !v33[5820] ) /*0x43cc24*/
        return 10; /*0x43cc24*/
      return 1; /*0x43cc36*/
    case 21:
      if ( (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) == 19 ) /*0x43c6ff*/
        return 10; /*0x43c70d*/
      v9 = (_BYTE *)this->Type; /*0x43c710*/
      if ( v9[5806] || v9[5807] ) /*0x43c724*/
        return 1; /*0x43c72c*/
      if ( v9[5801] || v9[5802] || v9[5825] || v9[5826] ) /*0x43c750*/
      {
        v11 = *(_DWORD *)this; /*0x43c7b5*/
        *((_BYTE *)this + 1757) = 1; /*0x43c7bd*/
        (*(void (__thiscall **)(#377 *, int, _DWORD))(v11 + 488))(this, 20, 0); /*0x43c7c4*/
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v53 + 488))(v53, 0, 0); /*0x43c7d4*/
        return 1; /*0x43c7dd*/
      }
      else if ( v9[5803] ) /*0x43c75a*/
      {
        v10 = *(_DWORD *)this; /*0x43c764*/
        *((_BYTE *)this + 1757) = 1; /*0x43c76c*/
        (*(void (__thiscall **)(#377 *, int, _DWORD))(v10 + 488))(this, 20, 0); /*0x43c773*/
        return 1; /*0x43c77c*/
      }
      else if ( v9[5811] ) /*0x43c788*/
      {
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v53 + 488))(v53, 16, 0); /*0x43c7a0*/
        return 1; /*0x43c7a9*/
      }
      else
      {
        return TechnoClass::Mission_RepairDispatch((int *)this, v1, v53, v1, v57); /*0x43ce43*/
      }
    default:
      return TechnoClass::Mission_RepairDispatch((int *)this, v1, v53, v1, v57);
  }
}


// ==== 0x0043CEA0  BuildingClass::DrawFactoryProduction  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::DrawFactoryProduction(#377 *this)
{
  int result; // eax
  int *v3; // eax
  int v4; // ebx
  int v5; // ebp
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

  if ( !MEMORY[0xA8ED6B] ) /*0x43ceb0*/
  {
    result = (int)g_hWnd; /*0x43ceb2*/
    if ( g_hWnd ) /*0x43ceb9*/
    {
      if ( !v18 && !*((_BYTE *)this + 128) || !*((_BYTE *)this + 116) || *((_BYTE *)this + 129) ) /*0x43cedc*/
        goto LABEL_20; /*0x43cedc*/
    }
  }
  *((_BYTE *)this + 128) = 0; /*0x43cefd*/
  v3 = ClipRectIntersection(v16, v17, &MEMORY[0x886FA0], 0, 0); /*0x43cf04*/
  *v17 = *v3; /*0x43cf0d*/
  v17[1] = v3[1]; /*0x43cf12*/
  v17[2] = v3[2]; /*0x43cf18*/
  v17[3] = v3[3]; /*0x43cf1e*/
  v4 = MEMORY[0x886FA0]; /*0x43cf23*/
  v5 = MEMORY[0x886FA4]; /*0x43cf29*/
  v6 = (_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD *))(this->q12C)(this, v16); /*0x43cf36*/
  v7 = v6[1]; /*0x43cf3e*/
  v8 = v4 + *v6; /*0x43cf41*/
  v9 = v6[2]; /*0x43cf43*/
  result = v6[3]; /*0x43cf46*/
  v10 = v7 + v5; /*0x43cf49*/
  if ( *v17 >= v8 + v9 ) /*0x43cf51*/
    goto LABEL_20; /*0x43cf51*/
  v11 = v17[1]; /*0x43cf57*/
  result += v10; /*0x43cf5a*/
  if ( v11 < result && (result = *v17 + v17[2], result > v8) && v11 + v17[3] > v10 ) /*0x43cf78*/
  {
    v12 = (_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD *))(this->currentMission)(this, v16); /*0x43cf8c*/
    Coord::To_Screen(MEMORY[0x887324], v12, &v14); /*0x43cf99*/
    if ( *v17 > MEMORY[0x886FA0] ) /*0x43cfa7*/
      v14 += MEMORY[0x886FA0] - *v17; /*0x43cfb1*/
    v13 = v17[1]; /*0x43cfb5*/
    result = MEMORY[0x886FA4]; /*0x43cfb8*/
    if ( v13 > MEMORY[0x886FA4] ) /*0x43cfbf*/
    {
      result = MEMORY[0x886FA4] - v13; /*0x43cfc1*/
      v15 += MEMORY[0x886FA4] - v13; /*0x43cfc9*/
    }
    if ( v19 ) /*0x43cfd3*/
    {
      if ( !*((_BYTE *)this + 1767) ) /*0x43cfd5*/
      {
        result = (*(int (__thiscall **)(#377 *, int *, int *))(*(_DWORD *)this + 1252))(this, &v14, v17); /*0x43cfe9*/
        LOBYTE(result) = 1; /*0x43cff2*/
        return result; /*0x43cff8*/
      }
    }
    else
    {
      result = (*(int (__thiscall **)(#377 *, int *, int *))(*(_DWORD *)this + 276))(this, &v14, v17); /*0x43d005*/
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
int __thiscall BuildingClass::DisplayProductionFrame(#377 *this)
{
  int v2; // edx
  int v3; // eax
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
  _DWORD v25[2]; // [esp+48h] [ebp-24h] BYREF
  int v26; // [esp+50h] [ebp-1Ch]
  int v27; // [esp+54h] [ebp-18h]
  int v28; // [esp+58h] [ebp-14h]
  int v29; // [esp+5Ch] [ebp-10h]
  int v30; // [esp+60h] [ebp-Ch]
  int v31; // [esp+64h] [ebp-8h]
  _DWORD *v32; // [esp+68h] [ebp-4h]
  int v33; // [esp+70h] [ebp+4h] BYREF
  int *v34; // [esp+74h] [ebp+8h]
  _BYTE v35[8]; // [esp+78h] [ebp+Ch] BYREF
  char v36; // [esp+80h] [ebp+14h] BYREF

  v2 = *(_DWORD *)(*(int (__thiscall **)(#377 *, int *))(*(_DWORD *)this + 440))(this, &v24); /*0x43d046*/
  v3 = *(_DWORD *)this; /*0x43d048*/
  v25[0] = v2; /*0x43d04c*/
  result = (*(int (__thiscall **)(#377 *))(v3 + 108))(this); /*0x43d050*/
  v5 = result; /*0x43d053*/
  v24 = result; /*0x43d057*/
  if ( result ) /*0x43d05b*/
  {
    LOBYTE(result) = *(_BYTE *)(this->Type + 5889); /*0x43d067*/
    if ( !(_BYTE)result ) /*0x43d06f*/
    {
      if ( (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) != 24 /*0x43d091*/
        || (LOBYTE(result) = Flag::CheckNone((_BYTE *)this + 848), (_BYTE)result) )
      {
        if ( (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) == 16 /*0x43d0ac*/
          && *(_DWORD *)(this->Type + 5348) )
        {
          Type = AbstractClass::GetType(*((_DWORD **)this + 329)); /*0x43d0bc*/
          if ( Type && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)Type + 132))(Type) + 3476) ) /*0x43d0cf*/
            v5 = *(_DWORD *)(this->Type + 5372); /*0x43d0df*/
          else
            v5 = *(_DWORD *)(this->Type + 5348); /*0x43d0ed*/
          v24 = v5; /*0x43d0f3*/
        }
        v7 = v34; /*0x43d0fc*/
        v8 = *(_DWORD *)(v33 + 4); /*0x43d103*/
        v27 = *(_DWORD *)v33; /*0x43d106*/
        v28 = v8; /*0x43d10a*/
        v33 = *(__int16 *)(v5 + 4); /*0x43d112*/
        v9 = v8 - v33 / 2; /*0x43d11d*/
        v29 = *v34; /*0x43d123*/
        v30 = v34[1]; /*0x43d12a*/
        v31 = v34[2]; /*0x43d131*/
        v32 = (_DWORD *)v34[3]; /*0x43d13a*/
        v10 = (int)v32; /*0x43d135*/
        if ( (int)v32 > v9 ) /*0x43d13e*/
        {
          v10 = v8 - v33 / 2; /*0x43d140*/
          v32 = (_DWORD *)v10; /*0x43d142*/
        }
        if ( v10 > 0 ) /*0x43d148*/
        {
          v11 = (__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v25); /*0x43d15e*/
          v12 = (*(int (__thiscall **)(#377 *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(this->drainTarget)( /*0x43d173*/
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
          ProductionFrame = BuildingClass::GetProductionFrame((int *)this); /*0x43d19b*/
          ((void (__thiscall *)(#377 *, int, int, _BYTE *, char *, _DWORD, int, int))loc_705E00)( /*0x43d1a4*/
            this,
            v5,
            ProductionFrame,
            v35,
            &v36,
            0,
            256,
            v22);
          v8 = v28; /*0x43d1a9*/
        }
        v26 = v8; /*0x43d1af*/
        v14 = *v7; /*0x43d1b5*/
        v26 = v8 - v9; /*0x43d1b7*/
        v29 = v14; /*0x43d1bb*/
        v15 = v7[1]; /*0x43d1bf*/
        result = v9 + v15; /*0x43d1c5*/
        v16 = v7[2]; /*0x43d1c7*/
        v30 = v9 + v15; /*0x43d1ca*/
        v31 = v16; /*0x43d1ce*/
        v17 = v33; /*0x43d1d2*/
        v32 = (_DWORD *)v7[3]; /*0x43d1d9*/
        v25[1] = v27; /*0x43d1e1*/
        v18 = v15 + v7[3]; /*0x43d1e8*/
        v32 = (_DWORD *)v33; /*0x43d1f0*/
        if ( v9 + v15 + v33 > v18 ) /*0x43d1f5*/
        {
          v17 = v18 - result; /*0x43d1f9*/
          v32 = (_DWORD *)(v18 - result); /*0x43d1fb*/
        }
        if ( result < v15 ) /*0x43d201*/
        {
          result = v9; /*0x43d205*/
          v30 = v15; /*0x43d209*/
          v17 += v9; /*0x43d20d*/
          v32 = (_DWORD *)v17; /*0x43d215*/
          v26 += v9; /*0x43d219*/
        }
        if ( v17 > 0 ) /*0x43d21f*/
        {
          v19 = (__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v25); /*0x43d235*/
          v20 = (*(int (__thiscall **)(#377 *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(this->drainTarget)( /*0x43d24a*/
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
          v23 = -(int)ZCoordToScreenY(v20); /*0x43d259*/
          v21 = BuildingClass::GetProductionFrame((int *)this); /*0x43d26d*/
          return ((int (__thiscall *)(#377 *, _DWORD *, int, int *, char *, _DWORD, int, int))loc_705E00)( /*0x43d27a*/
                   this,
                   v32,
                   v21,
                   &v33,
                   &v36,
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
int __thiscall BuildingClass::Draw(#377 *this)
{
  int v2; // edx
  int (__thiscall **vfptr0)(#377 *); // eax
  int result; // eax
  char *v5; // ecx
  int v6; // edx
  int (__thiscall **v7)(#377 *); // edx
  int v8; // edi
  int v9; // edi
  int v10; // eax
  char *v11; // edx
  unsigned __int8 v12; // bl
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  char *v17; // edx
  unsigned __int8 v18; // bl
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  double v24; // st7
  int v25; // ebx
  int v26; // eax
  int v27; // ebp
  __int16 *v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  int v34; // eax
  int v35; // ebp
  _DWORD *v36; // eax
  _DWORD *v37; // ecx
  int v38; // ebx
  int v39; // kr08_4
  __int16 *v40; // eax
  int v41; // eax
  __int64 v42; // rax
  __int16 *v43; // eax
  int v44; // eax
  int ProductionFrame; // eax
  __int16 *v46; // eax
  int v47; // eax
  __int16 *v48; // eax
  int v49; // eax
  void *v50; // [esp+62h] [ebp-5Ch]
  int v51; // [esp+6Ah] [ebp-54h]
  int v52; // [esp+6Eh] [ebp-50h]
  int v53; // [esp+72h] [ebp-4Ch]
  int v54; // [esp+72h] [ebp-4Ch]
  int v55; // [esp+72h] [ebp-4Ch]
  unsigned __int8 v56; // [esp+87h] [ebp-37h]
  unsigned __int8 v57; // [esp+87h] [ebp-37h]
  unsigned __int8 v58; // [esp+88h] [ebp-36h]
  unsigned __int8 v59; // [esp+88h] [ebp-36h]
  char v60; // [esp+89h] [ebp-35h]
  int v61; // [esp+8Ah] [ebp-34h]
  int v62; // [esp+8Eh] [ebp-30h] BYREF
  int v63; // [esp+92h] [ebp-2Ch]
  void *v64; // [esp+96h] [ebp-28h]
  __int16 v65[4]; // [esp+9Ah] [ebp-24h] BYREF
  int v66; // [esp+A2h] [ebp-1Ch]
  int v67; // [esp+A6h] [ebp-18h]
  int v68; // [esp+AAh] [ebp-14h] BYREF
  int v69; // [esp+AEh] [ebp-10h]
  _BYTE v70[4]; // [esp+B2h] [ebp-Ch] BYREF
  int v71; // [esp+B6h] [ebp-8h]
  void *retaddr; // [esp+BEh] [ebp+0h]
  int v73; // [esp+C2h] [ebp+4h]
  int v74; // [esp+C6h] [ebp+8h]
  int v75; // [esp+E6h] [ebp+28h]
  int v76; // [esp+EAh] [ebp+2Ch]

  v2 = *(_DWORD *)(*(int (__thiscall **)(#377 *, __int16 *))(*(_DWORD *)this + 440))(this, v65); /*0x43d2a8*/
  vfptr0 = *(int (__thiscall ***)(#377 *))this; /*0x43d2aa*/
  v62 = v2; /*0x43d2ae*/
  result = vfptr0[27](this); /*0x43d2b2*/
  v61 = result; /*0x43d2b7*/
  if ( result ) /*0x43d2bb*/
  {
    if ( this /*0x43d2e8*/
      && (*(int (__thiscall **)(#377 *))(this->fallRate)(this) == 6
      && !this->BuildingClass_field_int_534
      && (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) == 19 )
    {
      v5 = (char *)this + 1372; /*0x43d2ea*/
      v6 = 21; /*0x43d2f0*/
      do /*0x43d306*/
      {
        if ( *(_DWORD *)v5 ) /*0x43d2f5*/
          *(_BYTE *)(*(_DWORD *)v5 + 413) = 1; /*0x43d2fb*/
        v5 += 4; /*0x43d302*/
        --v6; /*0x43d305*/
      }
      while ( v6 ); /*0x43d306*/
    }
    result = this->Type; /*0x43d308*/
    if ( !*(_BYTE *)(result + 5889) ) /*0x43d30e*/
    {
      v7 = *(int (__thiscall ***)(#377 *))this; /*0x43d322*/
      v63 = *(_DWORD *)(result + 5408); /*0x43d324*/
      v66 = 198; /*0x43d32a*/
      v67 = 446; /*0x43d332*/
      v60 = 0; /*0x43d33a*/
      if ( v7[97](this) == 16 ) /*0x43d348*/
      {
        v8 = Array::Get(this, 0); /*0x43d353*/
        if ( v8 ) /*0x43d357*/
        {
          if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v8 + 132))(v8) + 3476) /*0x43d377*/
            || *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v8 + 132))(v8) + 3434) )
          {
            v60 = 1; /*0x43d381*/
          }
        }
      }
      v9 = 0; /*0x43d38c*/
      if ( !this->owningHouseIndex0 ) /*0x43d390*/
      {
LABEL_22:
        if ( !(*(unsigned __int8 (__thiscall **)(#377 *))(this->q160)(this) || this->airstrikeTintStage != 1 ) /*0x43d449*/
          goto LABEL_29; /*0x43d449*/
        v16 = MEMORY[0x8871E0][1].?[13]; /*0x43d455*/
        v17 = (char *)MEMORY[0x8871E0] + 2 * v16; /*0x43d45b*/
        v18 = v17[v16 + 6261]; /*0x43d468*/
        v59 = v17[v16 + 6260]; /*0x43d475*/
        v57 = v17[v16 + 6262]; /*0x43d47f*/
        v19 = DDraw::GetStatus() - 1; /*0x43d488*/
        if ( v19 ) /*0x43d489*/
        {
          if ( --v19 ) /*0x43d48c*/
          {
LABEL_28:
            LOWORD(v20) = v59; /*0x43d4cc*/
            LOWORD(v19) = v57; /*0x43d4d2*/
            LOWORD(v21) = v18 >> 1; /*0x43d4dd*/
            v9 |= v19 | (32 * ((32 * v20) | v21)); /*0x43d4e9*/
LABEL_29:
            v22 = (_DWORD *)(*(int (__thiscall **)(#377 *, _BYTE *))(this->q048)(this, v70); /*0x43d4eb*/
            LOWORD(v64) = *v22 / 256; /*0x43d507*/
            HIWORD(v64) = v22[1] / 256; /*0x43d51f*/
            *(_DWORD *)v65 = v64; /*0x43d528*/
            v23 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v65); /*0x43d532*/
            if ( CellClass::QuickPassable(v23) ) /*0x43d539*/
              v9 = 0; /*0x43d542*/
            if ( (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) == 24 /*0x43d575*/
              && (Window::IsVisible((_BYTE *)this + 848)
               || BuildingClass::CheckFlag24((_BYTE *)this + 848)
               || BuildingClass::CheckPowerFlags((_BYTE *)this + 848)) )
            {
              v24 = Animation::GetProgress((char *)this + 848); /*0x43d584*/
              v25 = Math::RoundToInt(v24 * (double)*(int *)(this->Type + 5880)); /*0x43d59c*/
              if ( BuildingClass::CheckFlag24((_BYTE *)this + 848) ) /*0x43d59e*/
                v25 = *(_DWORD *)(this->Type + 5880) - v25; /*0x43d5b5*/
              if ( Flag::CheckNone((_BYTE *)this + 848) ) /*0x43d5b9*/
                v25 = 0; /*0x43d5c2*/
              if ( BuildingClass::CheckPowerFlags((_BYTE *)this + 848) ) /*0x43d5c6*/
                v25 = *(_DWORD *)(this->Type + 5880) - 1; /*0x43d5db*/
              v26 = *(_DWORD *)(this->Type + 5880); /*0x43d5e2*/
              if ( v25 >= v26 ) /*0x43d5ea*/
                v25 = v26 - 1; /*0x43d5ec*/
              if ( v25 < 0 ) /*0x43d5f1*/
                v25 = 0; /*0x43d5f3*/
              *(_DWORD *)v65 = (*(int (__thiscall **)(#377 *))(this->health)(this); /*0x43d5fe*/
              if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&MEMORY[0x8871E0][1].? ) /*0x43d618*/
                v27 = 0; /*0x43d629*/
              else
                v27 = *(_DWORD *)(this->Type + 5880) + 1; /*0x43d626*/
              v28 = (__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v62); /*0x43d63f*/
              v29 = (*(int (__thiscall **)(#377 *, int, int, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(this->drainTarget)( /*0x43d654*/
                      this,
                      2,
                      1,
                      v28[133],
                      v9,
                      0,
                      0,
                      0,
                      0,
                      0);
              v30 = ZCoordToScreenY(v29); /*0x43d65c*/
              return ((int (__thiscall *)(#377 *, void *, int, int, int, _DWORD, int, int))loc_705E00)( /*0x43d683*/
                       this,
                       retaddr,
                       v25 + v27,
                       v75,
                       v76,
                       0,
                       256,
                       v71 - v30);
            }
            else
            {
              if ( (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) == 16 ) /*0x43d69f*/
              {
                if ( v60 ) /*0x43d6a7*/
                {
                  v31 = this->Type; /*0x43d6a9*/
                  if ( *(_DWORD *)(v31 + 5372) ) /*0x43d6af*/
                  {
                    v61 = *(_DWORD *)(v31 + 5372); /*0x43d7d2*/
                    v63 = -40; /*0x43d7d6*/
                  }
                }
                else
                {
                  v32 = this->Type; /*0x43d6bf*/
                  if ( *(_DWORD *)(v32 + 5348) ) /*0x43d6c5*/
                  {
                    v61 = *(_DWORD *)(v32 + 5348); /*0x43d6cf*/
                    v63 = -20; /*0x43d6d3*/
                  }
                }
              }
              v33 = (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this); /*0x43d6df*/
              if ( v33 != 18 && v33 != 19 ) /*0x43d6ed*/
              {
                v34 = *(_DWORD *)(this->Type + 5428); /*0x43d6fc*/
                v66 = *(_DWORD *)(this->Type + 5424) + 198; /*0x43d70a*/
                v67 = v34 + 446; /*0x43d70e*/
              }
              v35 = (BuildingTypeClass::GetFoundationHeight(this->Type, 0) << 8) - 256; /*0x43d72a*/
              v68 = (BuildingTypeClass::GetFoundationWidth(*((_DWORD **)this + 328)) << 8) - 256; /*0x43d74d*/
              v69 = v35; /*0x43d751*/
              v36 = (_DWORD *)TacticalClass::AdjustForZShapeMove((int)v65, (int)&v68); /*0x43d755*/
              v37 = (_DWORD *)this->Type; /*0x43d76e*/
              v38 = v67 - v36[1]; /*0x43d774*/
              v66 -= *v36; /*0x43d776*/
              v67 = v38; /*0x43d77a*/
              v64 = unk_89DDBC; /*0x43d77e*/
              if ( BuildingTypeClass::GetFoundationWidth(v37) >= 8 ) /*0x43d78a*/
                v64 = 0; /*0x43d78c*/
              if ( *(int *)(v74 + 12) > 0 ) /*0x43d7a1*/
              {
                v39 = *(__int16 *)(v61 + 6); /*0x43d7c1*/
                if ( BuildingClass::GetProductionFrame((int *)this) < v39 / 2 ) /*0x43d7c7*/
                  BuildingClass::GetProductionFrame((int *)this); /*0x43d7cb*/
                v52 = v67; /*0x43d802*/
                v51 = v66; /*0x43d803*/
                v50 = v64; /*0x43d806*/
                v40 = (__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v62); /*0x43d812*/
                v41 = (*(int (__thiscall **)(#377 *, int, int, int, int, void *, _DWORD, int, int, _DWORD))(this->drainTarget)( /*0x43d836*/
                        this,
                        2,
                        1,
                        *(__int16 *)(this->Type + 5448) + v40[133],
                        v9,
                        v50,
                        0,
                        v51,
                        v52,
                        0);
                v42 = ZCoordToScreenY(v41); /*0x43d83e*/
                ((void (__fastcall *)(#377 *, _DWORD, int, int, int, int, _DWORD, int, _DWORD))loc_705E00)( /*0x43d85f*/
                  this,
                  HIDWORD(v42),
                  v69,
                  v76,
                  v73,
                  v74,
                  0,
                  256,
                  v71 - v42);
              }
              if ( *(_DWORD *)(this->Type + 5400) && this->BuildingClass_field_int_534 ) /*0x43d874*/
              {
                v43 = (__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v62); /*0x43d892*/
                v44 = (*(int (__thiscall **)(#377 *, _DWORD, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(this->drainTarget)( /*0x43d8b6*/
                        this,
                        0,
                        1,
                        *(__int16 *)(this->Type + 5448) + v43[133],
                        v9,
                        0,
                        0,
                        0,
                        0,
                        0);
                v53 = -1 - ZCoordToScreenY(v44); /*0x43d8c8*/
                ProductionFrame = BuildingClass::GetProductionFrame((int *)this); /*0x43d8d4*/
                ((void (__thiscall *)(#377 *, _DWORD, int, int, int, _DWORD, int, int))loc_705E00)( /*0x43d8e9*/
                  this,
                  *(_DWORD *)(this->Type + 5400),
                  ProductionFrame,
                  v73,
                  v74,
                  0,
                  256,
                  v53);
              }
              result = (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this); /*0x43d8f2*/
              if ( result == 16 ) /*0x43d8fb*/
              {
                if ( v60 ) /*0x43d907*/
                {
                  result = this->Type; /*0x43d909*/
                  if ( *(_DWORD *)(result + 5380) ) /*0x43d90f*/
                  {
                    BuildingClass::GetHealthRatio((int *)this); /*0x43d9da*/
                    v48 = (__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v62); /*0x43da16*/
                    v49 = (*(int (__thiscall **)(#377 *, _DWORD, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(this->drainTarget)( /*0x43da3a*/
                            this,
                            0,
                            1,
                            *(__int16 *)(this->Type + 5448) + v48[133],
                            v9,
                            0,
                            0,
                            0,
                            0,
                            0);
                    v55 = -(int)ZCoordToScreenY(v49); /*0x43da55*/
                    return ((int (__thiscall *)(#377 *, _DWORD, int, int, int, _DWORD, int, int))loc_705E00)( /*0x43da67*/
                             this,
                             *(_DWORD *)(this->Type + 5380),
                             v76,
                             v73,
                             v74,
                             0,
                             256,
                             v55);
                  }
                }
                else
                {
                  result = *(_DWORD *)(this->Type + 5356); /*0x43d92d*/
                  if ( result ) /*0x43d935*/
                  {
                    BuildingClass::GetHealthRatio((int *)this); /*0x43d93d*/
                    v46 = (__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v62); /*0x43d978*/
                    v47 = (*(int (__thiscall **)(#377 *, _DWORD, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(this->drainTarget)( /*0x43d99c*/
                            this,
                            0,
                            1,
                            *(__int16 *)(this->Type + 5448) + v46[133],
                            v9,
                            0,
                            0,
                            0,
                            0,
                            0);
                    v54 = -(int)ZCoordToScreenY(v47); /*0x43d9b7*/
                    return ((int (__thiscall *)(#377 *, _DWORD, int, int, int, _DWORD, int, int))loc_705E00)( /*0x43d9c9*/
                             this,
                             *(_DWORD *)(this->Type + 5356),
                             v76,
                             v73,
                             v74,
                             0,
                             256,
                             v54);
                  }
                }
              }
            }
            return result; /*0x43d68f*/
          }
          LOWORD(v20) = v57; /*0x43d494*/
          LOWORD(v21) = v18; /*0x43d4a0*/
          v19 = v20 | (32 * (v21 | (v59 << 6))); /*0x43d4a7*/
          v9 |= v19; /*0x43d4a9*/
        }
        LOWORD(v20) = v59; /*0x43d4ab*/
        LOWORD(v21) = v18 >> 1; /*0x43d4b8*/
        LOWORD(v19) = v57; /*0x43d4ba*/
        v20 *= 32; /*0x43d4c0*/
        v21 = v19 | ((v20 | v21) << 6); /*0x43d4c8*/
        v9 |= v21; /*0x43d4ca*/
        goto LABEL_28; /*0x43d4ca*/
      }
      v10 = MEMORY[0x8871E0][1].?[10]; /*0x43d39c*/
      v11 = (char *)MEMORY[0x8871E0] + 2 * v10; /*0x43d3a2*/
      v12 = v11[v10 + 6261]; /*0x43d3af*/
      v56 = v11[v10 + 6260]; /*0x43d3bc*/
      v58 = v11[v10 + 6262]; /*0x43d3c6*/
      v13 = DDraw::GetStatus() - 1; /*0x43d3cf*/
      if ( v13 ) /*0x43d3d0*/
      {
        if ( --v13 ) /*0x43d3d3*/
        {
LABEL_21:
          LOWORD(v15) = v56; /*0x43d411*/
          LOWORD(v14) = v58; /*0x43d417*/
          LOWORD(v13) = v12 >> 1; /*0x43d422*/
          v9 |= v14 | (32 * ((32 * v15) | v13)); /*0x43d42e*/
          goto LABEL_22; /*0x43d42e*/
        }
        LOWORD(v9) = v56; /*0x43d3d5*/
        LOWORD(v15) = v58; /*0x43d3db*/
        v9 = v15 | (32 * (v12 | (v9 << 6))); /*0x43d3ee*/
      }
      LOWORD(v15) = v56; /*0x43d3f0*/
      LOWORD(v13) = v12 >> 1; /*0x43d3fd*/
      LOWORD(v14) = v58; /*0x43d3ff*/
      v15 *= 32; /*0x43d405*/
      v13 = v14 | ((v15 | v13) << 6); /*0x43d40d*/
      v9 |= v13; /*0x43d40f*/
      goto LABEL_21; /*0x43d40f*/
    }
  }
  return result; /*0x43d688*/
}


// ==== 0x0043DA80  BuildingClass::DrawPlacementPreview  this=BuildingClass  sig=csp ====
int __thiscall FootClass::DrawPlacementPreview(#377 *this)
{
  int v2; // edx
  BuildingTypeClass *vfptr0; // eax
  int i; // edi
  float *v5; // eax
  float *v6; // esi
  float *v7; // eax
  float v8; // ecx
  float v9; // edx
  _DWORD *v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // edx
  unsigned __int8 v15; // bl
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  unsigned __int8 v21; // bl
  int v22; // eax
  int v23; // edx
  int v24; // ecx
  _DWORD *v25; // eax
  _DWORD *v26; // eax
  int result; // eax
  double Progress; // st7
  int v29; // edi
  int v30; // eax
  BuildingTypeClass *v31; // eax
  int v32; // eax
  int v33; // esi
  int v34; // ecx
  BuildingTypeClass *v35; // ecx
  char v36; // dl
  unsigned int v37; // ebx
  unsigned int v38; // edi
  BuildingTypeClass *v39; // eax
  int v40; // esi
  int v41; // ecx
  int v42; // ecx
  int v43; // ebx
  int v44; // edi
  BuildingTypeClass *v45; // ecx
  int v46; // eax
  BuildingTypeClass *v47; // esi
  BuildingTypeClass *v48; // edi
  float *inited; // eax
  float *v50; // eax
  BuildingTypeClass *v51; // esi
  BuildingTypeClass *v52; // edi
  float *v53; // eax
  float *v54; // eax
  BuildingTypeClass *v55; // esi
  BuildingTypeClass *v56; // edi
  float *v57; // eax
  float *v58; // eax
  BuildingTypeClass *v59; // ecx
  int v60; // eax
  int v61; // edx
  BuildingTypeClass *v62; // esi
  int v63; // ecx
  BuildingTypeClass *v64; // ebx
  float *v65; // eax
  float *v66; // eax
  char v67; // dl
  int v68; // eax
  _BYTE *v69; // edi
  BuildingTypeClass *v70; // ecx
  BuildingTypeClass *v71; // esi
  int v72; // eax
  int v73; // edx
  int v74; // ecx
  BuildingTypeClass *v75; // ebx
  float *v76; // eax
  float *v77; // eax
  ParticleSystemClass *v78; // [esp+8Eh] [ebp-138h]
  ParticleSystemClass *v79; // [esp+8Eh] [ebp-138h]
  ParticleSystemClass *v80; // [esp+8Eh] [ebp-138h]
  ParticleSystemClass *v81; // [esp+8Eh] [ebp-138h]
  ParticleSystemClass *v82; // [esp+8Eh] [ebp-138h]
  int v83; // [esp+92h] [ebp-134h]
  int v84; // [esp+92h] [ebp-134h]
  int v85; // [esp+92h] [ebp-134h]
  int v86; // [esp+92h] [ebp-134h]
  int v87; // [esp+92h] [ebp-134h]
  float aP1; // [esp+96h] [ebp-130h]
  float aP1a; // [esp+96h] [ebp-130h]
  ParticleSystemClass *aP1b; // [esp+96h] [ebp-130h]
  ParticleSystemClass *aP1c; // [esp+96h] [ebp-130h]
  float aP1d; // [esp+96h] [ebp-130h]
  float aP1e; // [esp+96h] [ebp-130h]
  float aP1f; // [esp+96h] [ebp-130h]
  IUnknown *v95; // [esp+9Ah] [ebp-12Ch]
  unsigned __int8 v96; // [esp+ACh] [ebp-11Ah]
  unsigned __int8 v97; // [esp+ACh] [ebp-11Ah]
  char v98; // [esp+ACh] [ebp-11Ah]
  bool v99; // [esp+ACh] [ebp-11Ah]
  unsigned __int8 v100; // [esp+ADh] [ebp-119h]
  unsigned __int8 v101; // [esp+ADh] [ebp-119h]
  int v102; // [esp+AEh] [ebp-118h] BYREF
  int v103; // [esp+B2h] [ebp-114h]
  int v104; // [esp+B6h] [ebp-110h]
  float v105; // [esp+BAh] [ebp-10Ch] BYREF
  float v106; // [esp+BEh] [ebp-108h]
  float v107; // [esp+C2h] [ebp-104h]
  int v108; // [esp+C6h] [ebp-100h] BYREF
  int v109; // [esp+CAh] [ebp-FCh] BYREF
  int v110; // [esp+CEh] [ebp-F8h] BYREF
  int v111; // [esp+D2h] [ebp-F4h] BYREF
  float v112; // [esp+D6h] [ebp-F0h] BYREF
  float v113; // [esp+DAh] [ebp-ECh]
  float v114; // [esp+DEh] [ebp-E8h]
  float v115; // [esp+E2h] [ebp-E4h] BYREF
  float v116; // [esp+E6h] [ebp-E0h]
  float v117; // [esp+EAh] [ebp-DCh]
  float v118; // [esp+EEh] [ebp-D8h] BYREF
  float v119; // [esp+F2h] [ebp-D4h]
  float v120; // [esp+F6h] [ebp-D0h]
  float v121[12]; // [esp+FAh] [ebp-CCh] BYREF
  float v122[12]; // [esp+12Ah] [ebp-9Ch] BYREF
  _BYTE v123[12]; // [esp+15Ah] [ebp-6Ch] BYREF
  float v124[12]; // [esp+166h] [ebp-60h] BYREF
  float v125[12]; // [esp+196h] [ebp-30h] BYREF
  _DWORD *v126; // [esp+1CAh] [ebp+4h]
  IUnknown *v127; // [esp+1CEh] [ebp+8h]

  v2 = *(_DWORD *)(*(int (__thiscall **)(#377 *, int *))(*(_DWORD *)this + 440))(this, &v102);
  vfptr0 = *(BuildingTypeClass **)this;
  v108 = v2;
  if ( (*(int (__thiscall **)(#377 *))&vfptr0->__pad_14D[55])(this) == 16
    && (Window::IsVisible((_BYTE *)this + 848)
     || BuildingClass::CheckPowerFlags((_BYTE *)this + 848)
     || Flag::CheckNone((_BYTE *)this + 848)
     || BuildingClass::CheckFlag24((_BYTE *)this + 848)) )
  {
    if ( *((_BYTE *)this + 1048) )
    {
      for ( i = 0; i < this->q0E8; ++i )
      {
        v5 = (float *)Array::Get(this, i);
        v6 = v5;
        if ( v5 )
        {
          if ( !*((_BYTE *)v5 + 129) && (*(int (__thiscall **)(float *))(*(_DWORD *)v5 + 44))(v5) != 6 )
          {
            v7 = (float *)(*(int (__thiscall **)(float *, float *, _DWORD))(*(_DWORD *)v6 + 76))(v6, &v115, 0);
            v112 = *v7;
            v113 = v7[1];
            v114 = v7[2];
            v118 = v6[39];
            v119 = v6[40];
            v114 = v6[41];
            if ( !g_hWnd
              || MEMORY[0xA8D63C].__pad_14B0[639]
              || (MEMORY[0xA8B230]->nextScenario[0] & 0x1000) == 0
              || (v8 = v6[40], v105 = v6[39], v9 = v6[41], v106 = v8, v107 = v9, !Game::Stub3((int)&v105))
              && !Game::Stub3((int)&v112) )
            {
              v10 = (_DWORD *)(*(int (__thiscall **)(float *, _BYTE *, int *))(*(_DWORD *)v6 + 172))(v6, v123, &v109);
              Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], v10, v95);
              v95 = v127;
              (*(void (__thiscall **)(float *, int *))(*(_DWORD *)v6 + 276))(v6, &v110);
            }
          }
        }
      }
    }
  }
  v11 = this->owningHouseIndex0;
  v12 = 0;
  v104 = 0;
  if ( v11 )
  {
    v13 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6308);
    v14 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2 * v13;
    v15 = *(_BYTE *)(v13 + v14 + 4174 + 2087);
    v100 = *(_BYTE *)(v13 + v14 + 6260);
    v96 = *(_BYTE *)(v13 + v14 + 6262);
    v16 = DDraw::GetStatus() - 1;
    if ( v16 )
    {
      if ( --v16 )
      {
LABEL_23:
        LOWORD(v18) = v100;
        LOWORD(v17) = v96;
        LOWORD(v16) = v15 >> 1;
        v12 |= v17 | (32 * ((32 * v18) | v16));
        v104 = v12;
        goto LABEL_24;
      }
      LOWORD(v12) = v100;
      LOWORD(v18) = v96;
      v12 = v18 | (32 * (v15 | (v12 << 6)));
    }
    LOWORD(v18) = v100;
    LOWORD(v16) = v15 >> 1;
    LOWORD(v17) = v96;
    v18 *= 32;
    v16 = v17 | ((v18 | v16) << 6);
    v12 |= v16;
    goto LABEL_23;
  }
LABEL_24:
  if ( (*(unsigned __int8 (__thiscall **)(#377 *))(this->q160)(this) && this->airstrikeTintStage == 1 )
  {
    v19 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6320);
    v20 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2 * v19;
    v21 = *(_BYTE *)(v19 + v20 + 4174 + 2087);
    v97 = *(_BYTE *)(v19 + v20 + 6260);
    v101 = *(_BYTE *)(v19 + v20 + 6262);
    v22 = DDraw::GetStatus() - 1;
    if ( v22 )
    {
      if ( --v22 )
      {
LABEL_30:
        LOWORD(v23) = v97;
        LOWORD(v22) = v101;
        LOWORD(v24) = v21 >> 1;
        v104 = v22 | (32 * ((32 * v23) | v24)) | v12;
        goto LABEL_31;
      }
      LOWORD(v23) = v101;
      LOWORD(v24) = v21;
      v22 = v23 | (32 * (v24 | (v97 << 6)));
      v12 |= v22;
    }
    LOWORD(v23) = v97;
    LOWORD(v24) = v21 >> 1;
    LOWORD(v22) = v101;
    v23 *= 32;
    v24 = v22 | ((v23 | v24) << 6);
    v12 |= v24;
    goto LABEL_30;
  }
LABEL_31:
  v25 = (_DWORD *)(*(int (__thiscall **)(#377 *, _BYTE *))(this->q048)(this, v123);
  LOWORD(v103) = *v25 / 256;
  HIWORD(v103) = v25[1] / 256;
  v102 = v103;
  v26 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v102);
  if ( CellClass::QuickPassable(v26) )
    v104 = 0;
  result = (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this);
  if ( result == 16 )
  {
    result = *(_DWORD *)(this->Type + 5388);
    if ( result )
    {
      if ( Flag::CheckNone((_BYTE *)this + 848)
        || Window::IsVisible((_BYTE *)this + 848)
        || BuildingClass::CheckFlag24((_BYTE *)this + 848)
        || BuildingClass::CheckPowerFlags((_BYTE *)this + 848) )
      {
        Progress = Animation::GetProgress((int)this + 848);
        v29 = Math::RoundToInt(Progress * (double)*(int *)(this->Type + 3840));
        if ( BuildingClass::CheckFlag24((_BYTE *)this + 848) )
          v29 = *(_DWORD *)(this->Type + 3840) - v29;
        if ( Flag::CheckNone((_BYTE *)this + 848) )
          v29 = 0;
        v30 = *(_DWORD *)(this->Type + 3840);
        if ( v29 >= v30 )
          v29 = v30 - 1;
        if ( v29 < 0 )
          v29 = 0;
        if ( BuildingClass::GetHealthRatio((int *)this) <= *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108]
                                                                     + 5888) )
        {
          v31 = (BuildingTypeClass *)this->Type;
          if ( v31->DamagedDoor )
            v29 += v31->DoorStages;
        }
        v32 = (*(int (__thiscall **)(#377 *))(this->drainTarget)(this);
        v33 = -5 - ZCoordToScreenY(v32);
        v34 = *((__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v108) + 133);
        ((void (__thiscall *)(#377 *, _DWORD, int, _DWORD *, IUnknown *, _DWORD, int, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))loc_705E00)(
          this,
          *(_DWORD *)(this->Type + 5388),
          v29,
          v126,
          v127,
          0,
          256,
          v33,
          0,
          0,
          v34,
          0,
          0,
          0,
          0,
          0,
          0);
        if ( BuildingClass::CheckFlag24((_BYTE *)this + 848) && !v29 )
          *((_BYTE *)this + 128) = 1;
      }
    }
  }
  v35 = (BuildingTypeClass *)this->Type;
  if ( v35->TurretAnimIsVoxel )
  {
    result = this->currentMission;
    v36 = 0;
    if ( (result == 18 || this->queuedMission == 18)
      && this->q0F8 < v35->BuildingAnimFrame[1] + v35->BuildingAnimFrame[0] - 1 )
    {
      v36 = 1;
    }
    if ( (result != 19 || (result = this->q0F8, result <= 0)) && !v36
      || (LOBYTE(result) = v35->Artillary, (_BYTE)result) )
    {
      if ( MEMORY[0x87F8E4].__pad_5568[9676] )
      {
        v37 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, (IUnknown *)&v102) >> 10) + 1) >> 1) & 0x1F;
        v38 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, (IUnknown *)&v102) >> 10) + 1) >> 1) & 0x1F;
      }
      else
      {
        v37 = -1;
        v38 = -1;
      }
      v39 = (BuildingTypeClass *)this->Type;
      LOBYTE(v40) = 0;
      v103 = 0;
      v102 = 0;
      v41 = v39->ChargerTurrets[0];
      if ( v41 )
        v103 = this->gattlingValue % *(_DWORD *)(v41 + 8);
      v42 = *(_DWORD *)(this->Type + 196);
      if ( v42 )
      {
        v40 = this->gattlingValue % *(_DWORD *)(v42 + 8);
        v102 = v40;
      }
      v43 = ((unsigned __int8)v103 << 16) | v37;
      v44 = ((unsigned __int8)v40 << 16) | v38;
      Matrix3x4::Identity(v121);
      result = this->Type;
      if ( *(_DWORD *)(result + 184) )
      {
        v102 = (((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, (IUnknown *)&v111) >> 10) + 1) >> 1)
              & 0x1F)
             - 8;
        aP1 = (double)v102 * -0.1963495408493621;
        Matrix2D::Rotate(v121, aP1);
        v102 = *(_DWORD *)(this->Type + 1824) / 8;
        aP1a = (float)v102;
        Matrix3x4::Translate(v121, (ParticleSystemClass *)LODWORD(aP1a));
        v112 = -v121[3];
        v115 = v121[3];
        v117 = v121[11];
        v113 = -v121[7];
        qmemcpy(v122, v121, sizeof(v122));
        v105 = v112;
        v116 = v121[7];
        v114 = -v121[11];
        v106 = v113;
        v107 = v114;
        Matrix3x3::Multiply(v122, &v105);
        if ( *((_DWORD *)this + 252) )
        {
          *(float *)&aP1b = -*((float *)this + 251);
          Matrix3x4::Translate(v121, aP1b);
          v43 = -1;
        }
        if ( *((_DWORD *)this + 260) )
        {
          *(float *)&aP1c = -*((float *)this + 259);
          Matrix3x4::Translate(v122, aP1c);
          v43 = -1;
        }
        v102 = (((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 440, (IUnknown *)&v111) >> 10) + 1) >> 1)
              & 0x1F)
             - 8;
        aP1d = -((double)v102 * -0.1963495408493621);
        Matrix3D::RotateZ(v122, aP1d);
        Matrix3x3::Multiply(v122, &v115);
        v45 = (BuildingTypeClass *)this->Type;
        v46 = *v126 + v45->?[165];
        v110 = v45->?[166] + v126[1];
        v109 = v46;
        if ( (((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, (IUnknown *)&v111) >> 13) + 1) >> 1) & 3) == 0
          || (((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, (IUnknown *)&v102) >> 13) + 1) >> 1) & 3) == 3 )
        {
          v98 = 0;
          if ( *(_DWORD *)(this->Type + 192) && *(_DWORD *)(this->Type + 196) )
          {
            v47 = (BuildingTypeClass *)this->Type;
            v48 = *(BuildingTypeClass **)this;
            v83 = v104;
            v78 = (ParticleSystemClass *)*((__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v108) + 133);
            inited = (float *)AudioConfig::InitDefault(v125);
            v50 = MultiplyMatrix3x4(v124, inited, v122);
            (*(void (__thiscall **)(#377 *, int *, _DWORD, int, int *, IUnknown *, int *, float *, ParticleSystemClass *, int, _DWORD))&v48->DebrisTypes[304])(
              this,
              &v47->ChargerTurrets[1],
              0,
              v43,
              &v47->VoxelCaches[15],
              v127,
              &v109,
              v50,
              v78,
              v83,
              0);
          }
        }
        else
        {
          v98 = 1;
        }
        v51 = (BuildingTypeClass *)this->Type;
        v52 = *(BuildingTypeClass **)this;
        v84 = v104;
        v79 = (ParticleSystemClass *)*((__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v108) + 133);
        v53 = (float *)AudioConfig::InitDefault(v124);
        v54 = MultiplyMatrix3x4(v125, v53, v121);
        result = (*(int (__thiscall **)(#377 *, int *, int, int, int *, IUnknown *, int *, float *, ParticleSystemClass *, int, _DWORD))&v52->DebrisTypes[304])(
                   this,
                   v51->BarrelVoxel_2,
                   v103,
                   v43,
                   &v51->VoxelCaches[5],
                   v127,
                   &v109,
                   v54,
                   v79,
                   v84,
                   0);
        LOBYTE(result) = v98;
        if ( v98 )
        {
          result = this->Type + 192;
          if ( *(_DWORD *)result )
          {
            if ( *(_DWORD *)(this->Type + 196) )
            {
              v55 = (BuildingTypeClass *)this->Type;
              v56 = *(BuildingTypeClass **)this;
              v85 = v104;
              v80 = (ParticleSystemClass *)*((__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v108) + 133);
              v57 = (float *)AudioConfig::InitDefault(v124);
              v58 = MultiplyMatrix3x4(v125, v57, v122);
              return (*(int (__thiscall **)(#377 *, int *, _DWORD, int, int *, IUnknown *, int *, float *, ParticleSystemClass *, int, _DWORD))&v56->DebrisTypes[304])(
                       this,
                       &v55->ChargerTurrets[1],
                       0,
                       v43,
                       &v55->VoxelCaches[15],
                       v127,
                       &v109,
                       v58,
                       v80,
                       v85,
                       0);
            }
          }
        }
      }
      else if ( *(_DWORD *)(result + 192) && *(_DWORD *)(result + 196) )
      {
        v105 = v121[3];
        v106 = v121[7];
        v107 = v121[11];
        v112 = -v121[3];
        v118 = v121[3];
        v119 = v121[7];
        v113 = -v121[7];
        v115 = v112;
        v114 = -v121[11];
        v120 = v121[11];
        v116 = v113;
        v117 = v114;
        Matrix3x3::Multiply(v121, &v115);
        v103 = (((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, (IUnknown *)&v111) >> 10) + 1) >> 1)
              & 0x1F)
             - 8;
        aP1e = (double)v103 * -0.1963495408493621;
        Matrix2D::Rotate(v121, aP1e);
        v103 = (((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 440, (IUnknown *)&v111) >> 10) + 1) >> 1)
              & 0x1F)
             - 8;
        aP1f = -((double)v103 * -0.1963495408493621);
        Matrix3D::RotateZ(v121, aP1f);
        Matrix3x3::Multiply(v121, &v118);
        v59 = (BuildingTypeClass *)this->Type;
        v60 = v59->?[165];
        v61 = v59->?[166];
        v62 = v59;
        v63 = v126[1];
        v64 = *(BuildingTypeClass **)this;
        v109 = *v126 + v60;
        v110 = v61 + v63;
        v86 = v104;
        v81 = (ParticleSystemClass *)*((__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v108) + 133);
        v65 = (float *)AudioConfig::InitDefault(v124);
        v66 = MultiplyMatrix3x4(v125, v65, v121);
        return (*(int (__thiscall **)(#377 *, int *, int, int, int *, IUnknown *, int *, float *, ParticleSystemClass *, int, _DWORD))&v64->DebrisTypes[304])(
                 this,
                 &v62->ChargerTurrets[1],
                 v102,
                 v44,
                 &v62->VoxelCaches[15],
                 v127,
                 &v109,
                 v66,
                 v81,
                 v86,
                 0);
      }
    }
  }
  else
  {
    LOBYTE(result) = v35->BarrelAnimIsVoxel;
    if ( (_BYTE)result )
    {
      result = this->currentMission;
      v67 = 0;
      if ( (result == 18 || this->queuedMission == 18)
        && this->q0F8 < v35->BuildingAnimFrame[1] + v35->BuildingAnimFrame[0] - 1 )
      {
        v67 = 1;
      }
      if ( result != 19 || (result = this->q0F8, result <= 0) )
      {
        if ( !v67 )
        {
          qmemcpy(v122, BuildingClass::BuildTurretTransform((int)this, v124), sizeof(v122));
          v68 = (int)(dword_818CB0
                    + (((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, (IUnknown *)&v111) >> 10) + 1) >> 1)
                     & 0x1F))
              % 32;
          v69 = (_BYTE *)*((_DWORD *)this + 352);
          v99 = v68 <= 16;
          if ( v68 <= 16 && v69 )
          {
            if ( byte_818CB4 )
              v69[413] = 0;
            (*(void (__thiscall **)(_BYTE *, char *, int, _DWORD))(*(_DWORD *)v69 + 260))(
              v69,
              &MEMORY[0x87F8E4].__pad_5568[8532],
              1,
              0);
            v69[413] = 1;
          }
          v70 = (BuildingTypeClass *)this->Type;
          v71 = v70;
          v72 = v70->?[165];
          v73 = v70->?[166];
          v74 = v126[1];
          v75 = *(BuildingTypeClass **)this;
          v109 = *v126 + v72;
          v110 = v73 + v74;
          v87 = v104;
          v82 = (ParticleSystemClass *)*((__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v108) + 133);
          v76 = (float *)AudioConfig::InitDefault(v124);
          v77 = MultiplyMatrix3x4(v125, v76, v122);
          result = (*(int (__thiscall **)(#377 *, int *, _DWORD, int, int *, IUnknown *, int *, float *, ParticleSystemClass *, int, _DWORD))&v75->DebrisTypes[304])(
                     this,
                     &v71->ChargerTurrets[1],
                     0,
                     -1,
                     v71->VoxelCaches,
                     v127,
                     &v109,
                     v77,
                     v82,
                     v87,
                     0);
          LOBYTE(result) = v99;
          if ( !v99 && v69 )
          {
            if ( byte_818CB4 )
              v69[413] = 0;
            result = (*(int (__thiscall **)(_BYTE *, char *, int, _DWORD))(*(_DWORD *)v69 + 260))(
                       v69,
                       &MEMORY[0x87F8E4].__pad_5568[8532],
                       1,
                       0);
            v69[413] = 1;
          }
        }
      }
    }
  }
  return result;
}


// ==== 0x0043E7B0  BuildingClass::DrawVisible  this=int  sig=csp ====
void __thiscall BuildingClass::DrawVisible(void *this, int *a1, IUnknown *aP2)
{
  int v4; // eax
  IUnknown *v5; // ecx
  int v6; // eax
  _DWORD *BuildLimit; // eax
  FactoryClass *Type; // eax
  int v9; // eax
  int v10; // eax
  _DWORD v11[2]; // [esp+Ch] [ebp-8h] BYREF

  (*(void (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 440))(this, v11); /*0x43e7c1*/
  if ( *((_BYTE *)this + 131) /*0x43e80c*/
    && ((unsigned __int8)HouseClass::IsAlliedWith(*((void **)this + 135), HouseClass_Player)
     || ((1 << *(_DWORD *)(HouseClass_Player->field_34 + 184)) & *((_DWORD *)this + 132)) != 0) )
  {
    v4 = *a1 - 10; /*0x43e816*/
    v11[1] = a1[1] + 10; /*0x43e819*/
    v11[0] = v4; /*0x43e822*/
    (*(void (__thiscall **)(void *, _DWORD *, int *, IUnknown *))(*(_DWORD *)this + 1112))(this, v11, a1, aP2); /*0x43e82c*/
  }
  if ( ((1 << *(_DWORD *)(HouseClass_Player->field_34 + 184)) & *((_DWORD *)this + 132)) != 0 && *((_BYTE *)this + 131) ) /*0x43e856*/
  {
    if ( (unsigned __int8)House::IsCurrentPlayer(*((#375 **)this + 135)) ) /*0x43e86a*/
    {
      v6 = *((_DWORD *)this + 328); /*0x43e873*/
      LOBYTE(v5) = *(_BYTE *)(v6 + 3278); /*0x43e87b*/
      BuildLimit = (_DWORD *)HouseClass::GetBuildLimit(*((_DWORD **)this + 135), *(_DWORD *)(v6 + 3768), v5, 0); /*0x43e88f*/
    }
    else
    {
      BuildLimit = (_DWORD *)*((_DWORD *)this + 329); /*0x43e896*/
    }
    if ( BuildLimit ) /*0x43e89e*/
    {
      Type = (FactoryClass *)AbstractClass::GetType(BuildLimit); /*0x43e8a2*/
      if ( Type ) /*0x43e8a9*/
      {
        v9 = (*(int (__thiscall **)(FactoryClass *))(*(_DWORD *)Type->__pad_0 + 132))(Type); /*0x43e8b4*/
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 152))(v9); /*0x43e8d3*/
        DrawToSurfaceSHP( /*0x43e8e6*/
          *(int *)&MEMORY[0x87F8E4].__pad_5568[9416],
          (int)MEMORY[0x87F6C4],
          v10,
          0,
          a1,
          &aP2->field_0,
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
int __thiscall BuildingClass::GetZDrawOffset(#377 *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // esi

  v2 = (*(int (__thiscall **)(#377 *))(this->drainTarget)(this); /*0x43e905*/
  v3 = ZCoordToScreenY(v2); /*0x43e90d*/
  v4 = this->Type; /*0x43e912*/
  if ( *(_BYTE *)(v4 + 5829) ) /*0x43e91c*/
    return *(_DWORD *)(v4 + 4584) - v3; /*0x43e92d*/
  else
    return -v3; /*0x43e930*/
}


// ==== 0x0043E940  TechnoClass::ComputeTargetAngle  this=BuildingClass  sig=csp ====
int __thiscall TechnoClass::ComputeTargetAngle(#377 *this)
{
  int *TargetCoords; // eax
  int v3; // edi
  BuildingTypeClass *vfptr0; // edx
  int v5; // ebx
  int v6; // eax
  BuildingTypeClass *v9; // edx
  int v8; // eax
  void *edx3; // edx
  int v10; // ecx
  int v11; // eax
  BuildingTypeClass *v14; // esi
  int v13; // ecx
  int eax3d; // eax
  _DWORD *v15; // eax
  unsigned int v16; // edi
  int v17; // ebx
  int v18; // esi
  int result; // eax
  double v20; // st7
  double v21; // st7
  IUnknown *aP0; // eax
  int v23; // eax
  int v24; // edx
  int *v25; // eax
  void *v26; // eax
  AbstractClass *v29; // ebx
  int v28; // eax
  int edx13a; // edx
  _DWORD *v30; // eax
  int v31; // edi
  double v32; // st7
  char IsCloseEnoughToBuilding; // al
  double v34; // st7
  char v35; // al
  int v36; // [esp+24h] [ebp-64h]
  int v37; // [esp+24h] [ebp-64h]
  __int128 var64_4; // [esp+28h] [ebp-60h]
  double v39; // [esp+2Ch] [ebp-5Ch]
  AbstractClass *v43; // [esp+38h] [ebp-50h]
  int v41; // [esp+3Ch] [ebp-4Ch]
  int *v42; // [esp+40h] [ebp-48h]
  AbstractClass aP2; // [esp+44h] [ebp-44h] BYREF
  int v44; // [esp+68h] [ebp-20h]
  int v45; // [esp+6Ch] [ebp-1Ch]
  int v46; // [esp+70h] [ebp-18h] BYREF
  int v47; // [esp+74h] [ebp-14h]
  int v48; // [esp+78h] [ebp-10h]
  int v49[2]; // [esp+7Ch] [ebp-Ch] BYREF
  int v50; // [esp+84h] [ebp-4h]
  _WORD *v51; // [esp+90h] [ebp+8h]
  AbstractClass *aP1; // [esp+94h] [ebp+Ch]

  if ( *(_BYTE *)(*(_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD))(*(_DWORD *)this + 1016))(this, 0) + 329) ) /*0x43e95a*/
  {
    (*(void (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this); /*0x43e96c*/
    if ( aP1 ) /*0x43e977*/
    {
      TargetCoords = TechnoClass::GetTargetCoords((AbstractClass **)this, v49); /*0x43e984*/
      v3 = *TargetCoords; /*0x43e989*/
      vfptr0 = *(BuildingTypeClass **)this; /*0x43e98b*/
      v5 = TargetCoords[1]; /*0x43e98f*/
      v50 = TargetCoords[2]; /*0x43e995*/
      v6 = (*(int (__thiscall **)(#377 *, _DWORD))&vfptr0->DebrisTypes[228])(this, 0); /*0x43e99b*/
      v9 = *(BuildingTypeClass **)this; /*0x43e9a4*/
      v48 = *(_DWORD *)(v6 + 12); /*0x43e9a6*/
      v8 = ((int (__thiscall *)(#377 *, char *))v9->AlphaImage)(this, &aP2.__pad_0[12]); /*0x43e9b1*/
      edx3 = *(void **)v8; /*0x43e9b7*/
      v10 = *(_DWORD *)(v8 + 4); /*0x43e9b9*/
      v11 = *(_DWORD *)(v8 + 8); /*0x43e9bc*/
      v14 = (BuildingTypeClass *)this->Type; /*0x43e9bf*/
      v47 = v10; /*0x43e9c9*/
      v13 = v14->?[165]; /*0x43e9cd*/
      aP2.NeedsSaveOrLink = edx3; /*0x43e9d3*/
      v48 += v11; /*0x43e9d7*/
      eax3d = v14->?[166]; /*0x43e9db*/
      v46 = (int)edx3; /*0x43e9e1*/
      aP2.uniqueId = eax3d; /*0x43e9e5*/
      *(_DWORD *)&aP2.__pad_0[12] = v13; /*0x43e9f1*/
      v15 = World::ToScreen( /*0x43e9fd*/
              *(float **)&stru_87C374.__pad_579C[22548],
              (AbstractClass *)&aP2.__pad_0[4],
              (AbstractClass *)&aP2.__pad_0[12]);
      v16 = v3 - ((unsigned int)aP2.NeedsSaveOrLink + *v15); /*0x43ea11*/
      v17 = v5 - (v15[1] + v47); /*0x43ea1d*/
      aP2.NeedsSaveOrLink = (void *)v16; /*0x43ea21*/
      v18 = v50 - v48; /*0x43ea25*/
      v44 = v17; /*0x43ea27*/
      v45 = v50 - v48; /*0x43ea2b*/
      if ( v50 == v48 ) /*0x43ea2f*/
      {
        *v51 = 0x4000; /*0x43ea34*/
        return (int)v51; /*0x43ea31*/
      }
      else
      {
        *(_DWORD *)&aP2.__pad_0[4] = v16 * v16 + v17 * v17; /*0x43ea51*/
        *(double *)&aP2.__pad_0[12] = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)*(int *)&aP2.__pad_0[4])); /*0x43ea61*/
        v20 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x43ea8a*/
                                            (double)(int)aP2.NeedsSaveOrLink * (double)(int)aP2.NeedsSaveOrLink
                                          + (double)v45 * (double)v45
                                          + (double)v44 * (double)v44));
        *(_DWORD *)&aP2.__pad_0[4] = Math::RoundToInt(v20); /*0x43ea97*/
        *(double *)&aP2.__pad_0[12] = *(double *)&aP2.__pad_0[12] / (double)*(int *)&aP2.__pad_0[4]; /*0x43eaa3*/
        if ( *(double *)&aP2.__pad_0[12] > 1.0 ) /*0x43eab2*/
        {
          *(_DWORD *)&aP2.__pad_0[12] = 0; /*0x43eab4*/
          aP2.uniqueId = 1072693248; /*0x43eabc*/
        }
        v21 = BuildingLight::CalcIntensity(*(double *)&aP2.__pad_0[12]); /*0x43eace*/
        *(_WORD *)&aP2.__pad_0[4] = Math::RoundToInt(v21 * 16384.0 * 0.6366197723675814); /*0x43eae9*/
        result = (int)v51; /*0x43eafb*/
        if ( v18 < 0 ) /*0x43eaee*/
          *(_WORD *)&aP2.__pad_0[4] = 0x8000 - *(_WORD *)&aP2.__pad_0[4]; /*0x43eafe*/
        *(_DWORD *)v51 = *(_DWORD *)&aP2.__pad_0[4]; /*0x43eb07*/
      }
    }
    else
    {
      *(_DWORD *)v51 = *ProgressTimer::GetValue((_WORD *)this + 440, (IUnknown *)&aP2.__pad_0[12]); /*0x43eb39*/
      return (int)v51; /*0x43eb36*/
    }
  }
  else if ( *(_BYTE *)(this->Type + 5827) ) /*0x43eb4a*/
  {
    aP0 = (IUnknown *)(*(int (__thiscall **)(AbstractClass *, int *))(*(_DWORD *)aP1->__pad_0 + 72))(aP1, v49); /*0x43eb64*/
    Cell::GetGroundHeight(aP0); /*0x43eb6d*/
    v23 = (*(int (__thiscall **)(AbstractClass *, int *))(*(_DWORD *)aP1->__pad_0 + 72))(aP1, &v46); /*0x43eb7b*/
    v24 = *(_DWORD *)(v23 + 4); /*0x43eb80*/
    aP2.NeedsSaveOrLink = *(void **)v23; /*0x43eb8a*/
    v44 = v24; /*0x43eb90*/
    v25 = (int *)(*(int (__thiscall **)(#377 *, int *, _DWORD, _DWORD, _DWORD, _DWORD))(this->suspendedMission)( /*0x43eba6*/
                   this,
                   v49,
                   0,
                   0,
                   0,
                   0);
    v46 = *v25; /*0x43ebb5*/
    v47 = v25[1]; /*0x43ebc3*/
    v48 = v25[2]; /*0x43ebca*/
    *((double *)&var64_4 + 1) = (double)(int)aP2.NeedsSaveOrLink - (double)v46; /*0x43ebce*/
    *(double *)&var64_4 = (double)v47 - (double)v44; /*0x43ebda*/
    Math::CalcAngle((AbstractClass *)var64_4, *(double *)((char *)&var64_4 + 4)); /*0x43ebdd*/
    *((double *)&var64_4 + 1) = (double)*(int *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5816); /*0x43ebf5*/
    v26 = (void *)ObjectClass::DistanceTo(this, aP1); /*0x43ebf9*/
    v29 = (AbstractClass *)TechnoClass::ComputeScanRange(v26, *((double *)&var64_4 + 1)); /*0x43ec07*/
    v28 = (*(int (__thiscall **)(#377 *, int *, _DWORD))(*(_DWORD *)this + 768))(this, v49, 0); /*0x43ec12*/
    aP2.NeedsSaveOrLink = *(void **)v28; /*0x43ec1a*/
    v44 = *(_DWORD *)(v28 + 4); /*0x43ec23*/
    edx13a = *(_DWORD *)aP1->__pad_0; /*0x43ec27*/
    v45 = *(_DWORD *)(v28 + 8); /*0x43ec2c*/
    v30 = (_DWORD *)(*(int (__thiscall **)(AbstractClass *, int *))(edx13a + 72))(aP1, v49); /*0x43ec35*/
    v31 = v30[2] - v45; /*0x43ec50*/
    *(_DWORD *)&aP2.__pad_0[12] = (*v30 - (unsigned int)aP2.NeedsSaveOrLink) /*0x43ec64*/
                                * (*v30 - (unsigned int)aP2.NeedsSaveOrLink)
                                + (v30[1] - v44) * (v30[1] - v44);
    *(double *)&aP2.__pad_0[12] = (double)*(int *)&aP2.__pad_0[12]; /*0x43ec74*/
    *(double *)((char *)&var64_4 + 4) = (double)*(int *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5816); /*0x43ec86*/
    v32 = Math::Sqrt(*(AbstractClass **)&aP2.__pad_0[12]); /*0x43ec8c*/
    v36 = Math::RoundToInt(v32); /*0x43ec99*/
    IsCloseEnoughToBuilding = TechnoClass::IsCloseEnoughToBuilding(this, 0); /*0x43ec9e*/
    if ( !ComputeMathFacingAngle( /*0x43eca7*/
            IsCloseEnoughToBuilding,
            (int)v29,
            v36,
            v31,
            *(double *)((char *)&var64_4 + 4),
            &aP2.__pad_0[4]) )
    {
      v39 = (double)*(int *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5816); /*0x43eccc*/
      v34 = Math::Sqrt(*(AbstractClass **)&aP2.__pad_0[12]); /*0x43ecd2*/
      v37 = Math::RoundToInt(v34); /*0x43ecdf*/
      v35 = TechnoClass::IsCloseEnoughToBuilding(this, 0); /*0x43ecf4*/
      ComputeMathFacingAngle(v35, 10 * (int)v29 / 8, v37, v31, v39, &aP2.__pad_0[4]); /*0x43ecfd*/
    }
    *(_DWORD *)v51 = *(_DWORD *)&aP2.__pad_0[4]; /*0x43ed09*/
    return (int)v51; /*0x43ed02*/
  }
  else
  {
    *(_DWORD *)v51 = *TechnoClass::GetFiringAngle( /*0x43ed2b*/
                        (TechnoClass *)&aP2.__pad_0[12],
                        (int)aP1,
                        (int)v43,
                        v41,
                        v42,
                        *(int *)aP2.__pad_0,
                        *(int *)&aP2.__pad_0[4]);
    return (int)v51; /*0x43ed26*/
  }
  return result; /*0x43ea39*/
}


// ==== 0x0043ED40  BuildingClass::GetTurretAngle  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetTurretAngle(#377 *this)
{
  int v2; // esi
  int *v3; // ecx
  int v4; // edi
  int *v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // edx
  int *v9; // eax
  double v10; // st7
  int v12[3]; // [esp+24h] [ebp-18h] BYREF
  int v13; // [esp+30h] [ebp-Ch] BYREF
  int v14; // [esp+34h] [ebp-8h]
  int v15; // [esp+38h] [ebp-4h]
  int *v16; // [esp+40h] [ebp+4h]
  int v17; // [esp+44h] [ebp+8h]
  int v18; // [esp+44h] [ebp+8h]

  v15 = unk_89C850; /*0x43ed4b*/
  v2 = aP5; /*0x43ed50*/
  v3 = (int *)this->Type; /*0x43ed56*/
  v4 = unk_89C84C; /*0x43ed5d*/
  if ( v3[913] != 0xFFFF || v3[914] != 0xFFFF ) /*0x43ed7e*/
  {
    v5 = World::ToScreen((float *)MEMORY[0x887324], v12, v3 + 913); /*0x43ed86*/
LABEL_7:
    v2 = *v5; /*0x43edb9*/
    v4 = v5[1]; /*0x43edc0*/
    v15 = 0; /*0x43edc2*/
    goto LABEL_8; /*0x43edc2*/
  }
  v6 = v3[1145]; /*0x43ed88*/
  v12[0] = v3[1144]; /*0x43ed96*/
  v12[1] = v6; /*0x43ed9a*/
  if ( v12[0] || v6 ) /*0x43eda2*/
  {
    v5 = World::ToScreen((float *)MEMORY[0x887324], &v13, v12); /*0x43edb4*/
    goto LABEL_7; /*0x43edb4*/
  }
LABEL_8:
  v7 = (_DWORD *)(*(int (__thiscall **)(#377 *, int *))(this->q048)(this, v12); /*0x43edc6*/
  v8 = v7[1]; /*0x43edd4*/
  v13 = v2 + *v7; /*0x43eddb*/
  v14 = v4 + v8; /*0x43ede3*/
  v9 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v17 + 72))(v17, v12); /*0x43edee*/
  v18 = *v9; /*0x43edf6*/
  v10 = Math::CalcAngle((double)v14 - (double)v9[1], (double)*v9 - (double)v13); /*0x43ee13*/
  LOWORD(v18) = Math::RoundToInt((v10 - 1.570796326794897) * -10430.06004058427); /*0x43ee2c*/
  *v16 = v18; /*0x43ee3b*/
  return (int)v16; /*0x43ee39*/
}


// ==== 0x0043EE50  ObjectClass::method_43EE50  this=ObjectClass  sig=csp ====
int __thiscall sub_43EE50(_DWORD *this)
{
  _DWORD *Value; // eax
  int v3; // esi
  int result; // eax
  int v5; // [esp+8h] [ebp-4h] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1020))(this) || !*(this + 352) ) /*0x43ee63*/
    return 0; /*0x43eea7*/
  Value = ProgressTimer::GetValue((_WORD *)this + 452, &v5); /*0x43ee76*/
  v3 = *(this + 352); /*0x43ee7d*/
  result = dword_7F4890[((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F]; /*0x43ee8e*/
  if ( v3 ) /*0x43ee95*/
  {
    *(_DWORD *)(v3 + 172) = result; /*0x43ee97*/
    *(_DWORD *)(v3 + 196) = 0; /*0x43ee9d*/
  }
  return result; /*0x43eea3*/
}


// ==== 0x0043EEB0  BuildingClass::Cleanup  this=BuildingClass  sig=csp ====
void __thiscall sub_43EEB0(int *this, int a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  char v5[64]; // [esp+8h] [ebp-40h] BYREF

  if ( a2 != *(this + 383) && !*(_BYTE *)(this->gattlingValue + 5829) ) /*0x43eecd*/
  {
    BuildingClass::ClearAnims(this, 9); /*0x43eedf*/
    if ( a2 != -1 ) /*0x43eee7*/
    {
      strcpy(v5, (const char *)(this->gattlingValue + 504)); /*0x43ef17*/
      v3 = strlen(asc_818D7C) + 1; /*0x43ef38*/
      qmemcpy(&v5[strlen(v5)], asc_818D7C, v3); /*0x43ef45*/
      v4 = strlen(v5); /*0x43ef5f*/
      v5[v4] = a2 + 66; /*0x43ef62*/
      v5[v4 + 1] = 0; /*0x43ef66*/
      BuildingClass::PlayAnim(this, v3, v5, 9, 0, 0, 0); /*0x43ef72*/
      *(this + 383) = a2; /*0x43ef78*/
    }
  }
}


// ==== 0x0043EF90  BuildingClass::GetProductionFrame  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass_GetProductionFrame(int *this)
{
  int v2; // eax
  int v3; // edi
  _DWORD *v5; // esi
  int v6; // edx
  int v7; // eax
  int v8; // edx
  int v9; // edx

  v2 = this->gattlingValue; /*0x43ef94*/
  v3 = *(this + 62); /*0x43ef9a*/
  if ( *(_BYTE *)(v2 + 5823) ) /*0x43efa0*/
    return *(this + 390); /*0x43efb2*/
  if ( *(_BYTE *)(v2 + 5824) ) /*0x43efb3*/
    return *(this + 391); /*0x43efc5*/
  if ( !*(this + 333) ) /*0x43efc6*/
  {
    if ( *(_BYTE *)(v2 + 5815) ) /*0x43efd0*/
      v3 = *(_DWORD *)(v2 + 3844) + *(_DWORD *)(v2 + 3848) - v3 - 1; /*0x43efeb*/
    if ( (*(int (__thiscall **)(int *))(*this + 388))(this) == 19 ) /*0x43effa*/
      return *(_DWORD *)(this->gattlingValue + 12 * *(this + 333) + 3844) /*0x43f02b*/
           + *(_DWORD *)(this->gattlingValue + 12 * *(this + 333) + 3848)
           - v3
           - 1;
    return v3; /*0x43f16f*/
  }
  if ( *(_BYTE *)(v2 + 5499) ) /*0x43f02c*/
  {
    v3 = 0; /*0x43f03e*/
    if ( (*(int (__thiscall **)(int *))(*this + 1032))(this) > 0 ) /*0x43f048*/
      v3 = 2; /*0x43f04a*/
    if ( BuildingClass::GetHealthRatio(this) <= *((double *)MEMORY[0x8871E0] + 737) /*0x43f094*/
      || *(int *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 1588) > 0
      && BuildingClass::GetHealthRatio(this) <= *((double *)MEMORY[0x8871E0] + 736) )
    {
      ++v3; /*0x43f096*/
    }
    if ( *(_DWORD *)(this->gattlingValue + 1588) == -1 && v3 == 3 ) /*0x43f0ad*/
      return 1; /*0x43f0bc*/
    return v3; /*0x43f0ad*/
  }
  if ( !*(_BYTE *)(v2 + 5815) ) /*0x43f0c7*/
  {
    if ( BuildingClass::GetHealthRatio(this) <= *((double *)MEMORY[0x8871E0] + 736) ) /*0x43f10c*/
    {
      if ( *(this + 333) == 1 ) /*0x43f115*/
        return v3 + 1; /*0x43f11c*/
      v5 = (_DWORD *)this->gattlingValue; /*0x43f11d*/
      v6 = v5[967]; /*0x43f12f*/
      v7 = v5[964] + v5[965]; /*0x43f135*/
      if ( v7 <= v6 + v5[968] ) /*0x43f141*/
        v7 = v6 + v5[968]; /*0x43f143*/
      v8 = v5[973]; /*0x43f14b*/
      if ( v7 <= v8 + v5[974] ) /*0x43f155*/
        v7 = v8 + v5[974]; /*0x43f157*/
      v9 = v5[976]; /*0x43f15f*/
      if ( v7 <= v9 + v5[977] ) /*0x43f169*/
        v7 = v9 + v5[977]; /*0x43f16b*/
      v3 += v7; /*0x43f16d*/
    }
    return v3; /*0x43f16d*/
  }
  if ( BuildingClass::GetHealthRatio(this) > *((double *)MEMORY[0x8871E0] + 736) ) /*0x43f0df*/
    return 0; /*0x43f0f2*/
  else
    return *(_DWORD *)(this->gattlingValue + 5880) + 1; /*0x43f0ef*/
}


// ==== 0x0043F180  BuildingClass::ProductionDisplayUpdate  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProductionDisplayUpdate(#377 *this)
{
  BuildingClass *v1; // edi
  int result; // eax
  BuildingTypeClass *v3; // eax
  IUnknown *v4; // ebx
  BuildingTypeClass *v5; // esi
  void *v6; // eax
  int FoundationWidth; // eax
  BuildingTypeClass *v8; // ecx
  AbstractClass *FoundationHeight; // eax
  int v10; // ebp
  int v11; // esi
  AbstractClass *focus; // ecx
  BuildingTypeClass *v13; // eax
  void *v14; // eax
  unsigned __int8 *v15; // eax
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
  void *v26; // eax
  int v27; // edx
  int v28; // eax
  IUnknown *v29; // eax
  int v30; // ebp
  int v31; // esi
  __int16 v32; // bx
  void *v33; // eax
  #374 *v34; // eax
  BuildingTypeClass *v35; // esi
  void *v36; // eax
  BuildingTypeClass *v37; // ecx
  BuildingTypeClass *v38; // esi
  int v39; // eax
  int v40; // eax
  int *Anims; // ebp
  int *v42; // esi
  _DWORD *v43; // eax
  IUnknown *v44; // eax
  int v45; // edx
  int v46; // eax
  BuildingTypeClass *v47; // eax
  BuildingTypeClass *v48; // ecx
  int v49; // eax
  int v50; // ebx
  unsigned __int8 *v51; // eax
  int v52; // ecx
  int v53; // ebp
  int v54; // ecx
  __int16 v55; // di
  __int16 v56; // ax
  int v57; // esi
  __int16 v58; // bx
  __int16 v59; // di
  void *v60; // eax
  int v61; // edx
  int v62; // ebp
  char *v63; // edi
  int v64; // esi
  void *v65; // eax
  int v66; // eax
  BuildingTypeClass *v67; // esi
  BuildingClass *v68; // eax
  _DWORD *v69; // eax
  int v70; // ecx
  AbstractClass *v71; // edx
  int Translucency; // ebx
  AnimClass *v73; // ecx
  int v74; // ebp
  bool v75; // zf
  int v76; // ebx
  AnimClass *v77; // ecx
  int v78; // esi
  IUnknown *v79; // [esp+10h] [ebp-CCh]
  AbstractClass *v80; // [esp+14h] [ebp-C8h]
  AbstractClass *v81; // [esp+18h] [ebp-C4h]
  AbstractClass *v82; // [esp+2Ch] [ebp-B0h]
  AbstractClass *v83; // [esp+2Ch] [ebp-B0h]
  AbstractClass *v84; // [esp+2Ch] [ebp-B0h]
  AbstractClass *v85; // [esp+2Ch] [ebp-B0h]
  AbstractClass *v86; // [esp+2Ch] [ebp-B0h]
  BuildingTypeClass *v87; // [esp+30h] [ebp-ACh] BYREF
  int *v88; // [esp+34h] [ebp-A8h]
  int j; // [esp+38h] [ebp-A4h]
  char v90; // [esp+3Fh] [ebp-9Dh]
  IUnknown *i; // [esp+40h] [ebp-9Ch]
  __int16 v92[4]; // [esp+44h] [ebp-98h] BYREF
  BuildingClass *v93; // [esp+4Ch] [ebp-90h] BYREF
  BuildingClass *v94; // [esp+50h] [ebp-8Ch]
  int v95; // [esp+54h] [ebp-88h]
  int v96; // [esp+58h] [ebp-84h]
  int k; // [esp+5Ch] [ebp-80h]
  int v98; // [esp+60h] [ebp-7Ch]
  int v99; // [esp+64h] [ebp-78h]
  BuildingTypeClass *v100; // [esp+68h] [ebp-74h]
  int v101; // [esp+6Ch] [ebp-70h] BYREF
  int v102; // [esp+70h] [ebp-6Ch] BYREF
  int v103; // [esp+74h] [ebp-68h] BYREF
  int v104; // [esp+78h] [ebp-64h] BYREF
  _DWORD v105[3]; // [esp+7Ch] [ebp-60h] BYREF
  int v106[3]; // [esp+88h] [ebp-54h] BYREF
  _DWORD v107[3]; // [esp+94h] [ebp-48h] BYREF
  _DWORD v108[3]; // [esp+A0h] [ebp-3Ch] BYREF
  int v109[3]; // [esp+ACh] [ebp-30h] BYREF
  char v110[12]; // [esp+B8h] [ebp-24h] BYREF
  char v111[12]; // [esp+C4h] [ebp-18h] BYREF
  _DWORD v112[3]; // [esp+D0h] [ebp-Ch] BYREF
  IUnknown *aP1; // [esp+E0h] [ebp+4h]

  v1 = (BuildingClass *)this; /*0x43f191*/
  v93 = (BuildingClass *)this; /*0x43f194*/
  if ( TechnoClass::UpdateProdWithSound(this, aP1) )
  {
    result = (*(int (__thiscall **)(BuildingClass *, int *))(*(_DWORD *)v1->__pad_0 + 440))(v1, &v101); /*0x43f1ae*/
    *(_DWORD *)v92 = *(_DWORD *)result; /*0x43f1b9*/
    switch ( (unsigned int)aP1 )
    {
      case 0u:
        MapClass::ApplyOverlayReveal(&MEMORY[0x87F7E8], (MouseClass *)v92, v1); /*0x43f1d5*/
        LOBYTE(result) = 1; /*0x43f1dd*/
        break; /*0x43f1e6*/
      case 1u:
      case 3u:
        v3 = (BuildingTypeClass *)v1->Type; /*0x43f1e9*/
        v4 = 0; /*0x43f1ef*/
        if ( v3->ToTile ) /*0x43f1f1*/
        {
          v5 = *(BuildingTypeClass **)v1->__pad_0; /*0x43f1fd*/
          v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v92); /*0x43f210*/
          if ( (*(int (__thiscall **)(BuildingClass *, void *, int, int, _DWORD, int))&v5->__pad_14D[95])( /*0x43f218*/
                 v1,
                 v6,
                 -1,
                 -1,
                 0,
                 1) )
          {
            goto LABEL_33; /*0x43f218*/
          }
          FoundationWidth = BuildingTypeClass::GetFoundationWidth((_DWORD *)v1->Type); /*0x43f22c*/
          v8 = (BuildingTypeClass *)v1->Type; /*0x43f231*/
          v88 = (int *)FoundationWidth; /*0x43f238*/
          FoundationHeight = (AbstractClass *)BuildingTypeClass::GetFoundationHeight((int)v8, 0); /*0x43f23c*/
          v10 = 0; /*0x43f241*/
          v82 = FoundationHeight; /*0x43f245*/
          v90 = 0; /*0x43f249*/
          for ( i = 0; v10 < (int)v82; i = (IUnknown *)v10 ) /*0x43f251*/
          {
            v11 = 0; /*0x43f25b*/
            for ( j = 0; v11 < (int)v88; j = v11 ) /*0x43f263*/
            {
              HIWORD(v100) = v10 + v92[1]; /*0x43f276*/
              focus = (AbstractClass *)v1->focus; /*0x43f27b*/
              LOWORD(v100) = v11 + v92[0]; /*0x43f281*/
              v13 = (BuildingTypeClass *)v1->Type; /*0x43f28a*/
              v87 = v100; /*0x43f290*/
              v81 = focus; /*0x43f294*/
              v80 = (AbstractClass *)v13; /*0x43f29b*/
              v79 = *(IUnknown **)&v13->DebrisTypes[872]; /*0x43f2a0*/
              v14 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v87); /*0x43f2a7*/
              if ( CellClass::IsPassable((int)v14, v79, (IUnknown *)v80, (IUnknown *)v81) /*0x43f2fb*/
                && *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v87) + 14) != *(_DWORD *)(*((_DWORD *)v1->Type + 918) + 660)
                && *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v87) + 59) != 1 )
              {
                v15 = (unsigned __int8 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v87); /*0x43f30b*/
                v16 = *((_DWORD *)v15 + 18); /*0x43f310*/
                if ( v16 != -1 ) /*0x43f316*/
                {
                  v17 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[304] + 4 * v16); /*0x43f322*/
                  v94 = (BuildingClass *)*((_DWORD *)v15 + 9); /*0x43f32a*/
                  v18 = *(_DWORD *)(v17 + 664); /*0x43f334*/
                  v19 = v15[287] % v18; /*0x43f343*/
                  v20 = v15[287] / v18; /*0x43f347*/
                  v21 = *(_DWORD *)(v17 + 668); /*0x43f349*/
                  LOWORD(v94) = (_WORD)v94 - v19; /*0x43f34f*/
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
                          v25 = v23 + (_WORD)v94; /*0x43f387*/
                          LOWORD(v98) = v23 + (_WORD)v94; /*0x43f38f*/
                          v103 = v98; /*0x43f398*/
                          *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v103) + 18) = -1; /*0x43f3a1*/
                          LOWORD(k) = v25; /*0x43f3a8*/
                          v102 = k; /*0x43f3bb*/
                          v26 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v102); /*0x43f3bf*/
                          BuildingClass::CreateDestructionCrater((int)v26); /*0x43f3c6*/
                          v18 = *(_DWORD *)(v17 + 664); /*0x43f3cb*/
                          ++v23; /*0x43f3d1*/
                        }
                        while ( v23 < v18 ); /*0x43f3d4*/
                        v22 = v99; /*0x43f3d6*/
                        v1 = v93; /*0x43f3da*/
                      }
                      v27 = *(_DWORD *)(v17 + 668); /*0x43f3de*/
                      v99 = ++v22; /*0x43f3e7*/
                    }
                    while ( v22 < v27 ); /*0x43f3eb*/
                  }
                  v10 = (int)i; /*0x43f3f1*/
                  v11 = j; /*0x43f3f5*/
                }
                v28 = (*(int (__thiscall **)(_DWORD, void *))(**((_DWORD **)v1->Type + 918) + 140))( /*0x43f410*/
                        *((_DWORD *)v1->Type + 918),
                        v1->focus);
                v107[2] = 0; /*0x43f429*/
                v107[0] = ((__int16)v87 << 8) + 128; /*0x43f433*/
                v107[1] = (SHIWORD(v87) << 8) + 128; /*0x43f441*/
                (*(void (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v28 + 216))(v28, v107, 0); /*0x43f44b*/
                if ( v1->focus == HouseClass_Player ) /*0x43f45e*/
                {
                  v106[0] = ((__int16)v87 << 8) + 128; /*0x43f47f*/
                  v106[1] = (SHIWORD(v87) << 8) + 128; /*0x43f492*/
                  v106[2] = 0; /*0x43f4a1*/
                  MapClass::RevealArea1((int *)&MEMORY[0x87F7E8], v106, 1, (#375 *)HouseClass_Player, 0, 0, 0, 1, 0); /*0x43f4a8*/
                  v109[0] = ((__int16)v87 << 8) + 128; /*0x43f4ce*/
                  v109[1] = (SHIWORD(v87) << 8) + 128; /*0x43f4e4*/
                  v109[2] = 0; /*0x43f4f3*/
                  MapClass::RevealArea1((int *)&MEMORY[0x87F7E8], v109, 1, (#375 *)HouseClass_Player, 0, 0, 0, 1, 1); /*0x43f4fa*/
                }
                v90 = 1; /*0x43f4ff*/
              }
              ++v11; /*0x43f508*/
            }
            FoundationHeight = v82; /*0x43f515*/
            ++v10; /*0x43f519*/
          }
          i = 0; /*0x43f529*/
          j = (int)&FoundationHeight->__pad_0[2]; /*0x43f52f*/
          if ( (int)&FoundationHeight->__pad_0[2] > 0 ) /*0x43f533*/
          {
            v29 = 0; /*0x43f539*/
            v30 = (int)v88 + 2; /*0x43f53b*/
            do /*0x43f5a7*/
            {
              v31 = 0; /*0x43f542*/
              if ( v30 > 0 ) /*0x43f546*/
              {
                HIWORD(v94) = (_WORD)v29 - 1; /*0x43f549*/
                v32 = (_WORD)v29 - 1; /*0x43f54e*/
                do /*0x43f596*/
                {
                  LOWORD(v94) = v31 - 1; /*0x43f559*/
                  LOWORD(v83) = v92[0] + v31 - 1; /*0x43f568*/
                  HIWORD(v83) = v32 + v92[1]; /*0x43f574*/
                  v93 = (BuildingClass *)v83; /*0x43f57d*/
                  v33 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v93); /*0x43f587*/
                  BuildingClass::CreatePlacementCrater(v33); /*0x43f58e*/
                  ++v31; /*0x43f593*/
                }
                while ( v31 < v30 ); /*0x43f596*/
                v29 = i; /*0x43f598*/
              }
              v29 = (IUnknown *)((char *)v29 + 1); /*0x43f5a0*/
              i = v29; /*0x43f5a3*/
            }
            while ( (int)v29 < j ); /*0x43f5a7*/
          }
          if ( !v90 ) /*0x43f5b1*/
          {
LABEL_33:
            TechnoClass::UpdateProdWithSound(v1, 0); /*0x43f5db*/
            goto LABEL_34; /*0x43f5db*/
          }
          (*(void (__thiscall **)(BuildingClass *, int))(*(_DWORD *)v1->__pad_0 + 640))(v1, 3); /*0x43f5b9*/
          result = (*(int (__thiscall **)(BuildingClass *))(*(_DWORD *)v1->__pad_0 + 248))(v1); /*0x43f5c3*/
          LOBYTE(result) = 1; /*0x43f5cc*/
        }
        else if ( v3->Wall ) /*0x43f5ef*/
        {
          v34 = (#374 *)__2_YAPAXI_Z(0xB0u); /*0x43f5fe*/
          if ( v34 ) /*0x43f608*/
            Object::SpawnAtCell(v34, *((_DWORD *)v1->Type + 917), v92, *(_DWORD *)(*((_DWORD *)v1->focus + 13) + 184)); /*0x43f62e*/
          (*(void (__thiscall **)(BuildingClass *, int))(*(_DWORD *)v1->__pad_0 + 640))(v1, 3); /*0x43f639*/
          result = (*(int (__thiscall **)(BuildingClass *))(*(_DWORD *)v1->__pad_0 + 248))(v1); /*0x43f643*/
          LOBYTE(result) = 1; /*0x43f64c*/
        }
        else
        {
          if ( aP1 != (IUnknown *)3 ) /*0x43f65b*/
          {
            v35 = *(BuildingTypeClass **)v1->__pad_0; /*0x43f65d*/
            v36 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v92); /*0x43f670*/
            result = (*(int (__thiscall **)(BuildingClass *, void *, int, int, _DWORD, int))&v35->__pad_14D[95])( /*0x43f678*/
                       v1,
                       v36,
                       -1,
                       -1,
                       0,
                       1);
            if ( result ) /*0x43f680*/
              goto LABEL_34; /*0x43f680*/
          }
          MapClass::FillRevealBuffer(&MEMORY[0x87F7E8], (MouseClass *)v92, (IUnknown *)v1); /*0x43f691*/
          v37 = (BuildingTypeClass *)v1->Type; /*0x43f6a0*/
          v38 = *(BuildingTypeClass **)v1->__pad_0; /*0x43f6a6*/
          v108[2] = 0; /*0x43f6b0*/
          v108[1] = (v92[1] << 8) + 128; /*0x43f6ba*/
          v108[0] = (v92[0] << 8) + 128; /*0x43f6cf*/
          v39 = (*(int (__thiscall **)(BuildingTypeClass *, char *, _DWORD *))(*(_DWORD *)v37->vtable0 + 108))( /*0x43f6e0*/
                  v37,
                  v110,
                  v108);
          (*(void (__thiscall **)(BuildingClass *, int))&v38->__pad_14D[103])(v1, v39); /*0x43f6e6*/
          v40 = (*(int (__thiscall **)(BuildingClass *, _DWORD *))(*(_DWORD *)v1->__pad_0 + 172))(v1, v105); /*0x43f6f5*/
          Anims = v1->Anims; /*0x43f6fd*/
          v94 = *(BuildingClass **)v40; /*0x43f703*/
          v95 = *(_DWORD *)(v40 + 4); /*0x43f70a*/
          v96 = *(_DWORD *)(v40 + 8); /*0x43f711*/
          do /*0x43f795*/
          {
            v42 = (int *)*Anims; /*0x43f715*/
            if ( *Anims ) /*0x43f715*/
            {
              v43 = Matrix3x4::TransformCell( /*0x43f738*/
                      *(float **)&MEMORY[0x87F8E4].__pad_5568[9432],
                      (AbstractClass *)v111,
                      (AbstractClass *)&v4->__pad_DFC[(unsigned int)v1->Type + 384]);
              v44 = Coord::Subtract( /*0x43f761*/
                      v112,
                      (IUnknown *)&v94->__pad_0[*v43],
                      (IUnknown *)(v95 + v43[1]),
                      (IUnknown *)(v96 + v43[2]));
              v105[0] = v44->field_0; /*0x43f768*/
              v105[1] = v44->field_4; /*0x43f76f*/
              v45 = v44->field_8; /*0x43f777*/
              v46 = *v42; /*0x43f77a*/
              v105[2] = v45; /*0x43f77f*/
              (*(void (__thiscall **)(int *, _DWORD *))(v46 + 436))(v42, v105); /*0x43f783*/
            }
            v4 = (IUnknown *)((char *)v4 + 68); /*0x43f789*/
            ++Anims; /*0x43f78c*/
          }
          while ( (int)v4 < 1428 ); /*0x43f795*/
          v47 = (BuildingTypeClass *)BuildingTypeClass::GetFoundationWidth((_DWORD *)v1->Type); /*0x43f7a1*/
          v48 = (BuildingTypeClass *)v1->Type; /*0x43f7a6*/
          v87 = v47; /*0x43f7ae*/
          v49 = BuildingTypeClass::GetFoundationHeight((int)v48, 0); /*0x43f7b2*/
          v98 = v49; /*0x43f7b9*/
          i = 0; /*0x43f7bd*/
          if ( v49 > 0 ) /*0x43f7c5*/
          {
            do /*0x43f916*/
            {
              v50 = 0; /*0x43f7cf*/
              for ( k = 0; v50 < (int)v87; k = v50 ) /*0x43f7d7*/
              {
                LOWORD(v84) = v50 + v92[0]; /*0x43f7ee*/
                HIWORD(v84) = (_WORD)i + v92[1]; /*0x43f7f3*/
                v93 = (BuildingClass *)v84; /*0x43f800*/
                v51 = (unsigned __int8 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v93); /*0x43f80a*/
                v52 = *((_DWORD *)v51 + 18); /*0x43f80f*/
                if ( v52 != -1 ) /*0x43f815*/
                {
                  v88 = 0; /*0x43f821*/
                  v53 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[304] + 4 * v52); /*0x43f829*/
                  v94 = (BuildingClass *)*((_DWORD *)v51 + 9); /*0x43f831*/
                  v54 = *(_DWORD *)(v53 + 664); /*0x43f83b*/
                  v55 = v51[287] % v54; /*0x43f84a*/
                  v56 = v51[287] / v54; /*0x43f84e*/
                  LOWORD(v94) = (_WORD)v94 - v55; /*0x43f850*/
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
                          v59 = v57 + (_WORD)v94; /*0x43f88c*/
                          LOWORD(j) = v57 + (_WORD)v94; /*0x43f894*/
                          v104 = j; /*0x43f89d*/
                          *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v104) + 18) = -1; /*0x43f8a6*/
                          LOWORD(v99) = v59; /*0x43f8ad*/
                          v101 = v99; /*0x43f8c0*/
                          v60 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v101); /*0x43f8c4*/
                          BuildingClass::CreateDestructionCrater((int)v60); /*0x43f8cb*/
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
              i = (IUnknown *)((char *)i + 1); /*0x43f912*/
            }
            while ( (int)i < v98 ); /*0x43f916*/
            v49 = v98; /*0x43f91c*/
          }
          result = v49 + 2; /*0x43f91e*/
          v62 = 0; /*0x43f921*/
          j = result; /*0x43f925*/
          if ( result <= 0 ) /*0x43f929*/
            goto LABEL_92; /*0x43f929*/
          v63 = &v87->vtable0[2]; /*0x43f933*/
          do /*0x43f995*/
          {
            v64 = 0; /*0x43f936*/
            if ( (int)v63 > 0 ) /*0x43f93a*/
            {
              HIWORD(v94) = v62 - 1; /*0x43f93f*/
              do /*0x43f98c*/
              {
                LOWORD(v94) = v64 - 1; /*0x43f94f*/
                LOWORD(v85) = v92[0] + v64 - 1; /*0x43f95e*/
                HIWORD(v85) = v62 - 1 + v92[1]; /*0x43f96a*/
                v93 = (BuildingClass *)v85; /*0x43f979*/
                v65 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v93); /*0x43f97d*/
                BuildingClass::CreatePlacementCrater(v65); /*0x43f984*/
                ++v64; /*0x43f989*/
              }
              while ( v64 < (int)v63 ); /*0x43f98c*/
              result = j; /*0x43f98e*/
            }
            ++v62; /*0x43f992*/
          }
          while ( v62 < result ); /*0x43f995*/
          LOBYTE(result) = 1; /*0x43f99a*/
        }
        break; /*0x43f5d5*/
      case 2u:
        v93 = (BuildingClass *)(*(int (__thiscall **)(BuildingClass *))(*(_DWORD *)v1->__pad_0 + 484))(v1); /*0x43f9b0*/
        v66 = (*(int (__thiscall **)(BuildingClass *))(*(_DWORD *)v1->__pad_0 + 444))(v1); /*0x43f9b8*/
        v67 = (BuildingTypeClass *)(*(int (__thiscall **)(BuildingClass *, _DWORD))(*(_DWORD *)v1->__pad_0 + 1124))( /*0x43f9d0*/
                                     v1,
                                     *(__int16 *)(v66 + 266));
        if ( (*(unsigned __int8 (__thiscall **)(BuildingClass *))(*(_DWORD *)v1->__pad_0 + 352))(v1)
          || v1->owningHouseIndex0
          && (v1
            ? (v68 = (*(int (__thiscall **)(BuildingClass *))(*(_DWORD *)v1->__pad_0 + 44))(v1) == 6 ? v1 : 0)
            : (v68 = 0),
              *(BuildingClass **)(v1->owningHouseIndex0 + 80) == v68) )
        {
          LOWORD(v67) = Techno::StartInvulnerability((int)v67); /*0x43fa17*/
        }
        *(_WORD *)v1->BuildingClass_field_short_700 = (_WORD)v67; /*0x43fa19*/
        j = (unsigned __int16)v67; /*0x43fa26*/
        v88 = v1->Anims; /*0x43fa30*/
        v86 = (AbstractClass *)21; /*0x43fa34*/
        do /*0x43fabc*/
        {
          v69 = (_DWORD *)*v88; /*0x43fa40*/
          if ( *v88 ) /*0x43fa40*/
          {
            v70 = v69[50]; /*0x43fa46*/
            if ( v70 && *(_BYTE *)(v70 + 860) ) /*0x43fa50*/
            {
              v71 = (AbstractClass *)j; /*0x43fa5e*/
              v69[53] = v93; /*0x43fa62*/
              v69[63] = v71; /*0x43fa68*/
            }
            Translucency = v1->Translucency; /*0x43fa6e*/
            if ( Translucency == 15 /*0x43fa88*/
              && (*(int (__thiscall **)(BuildingClass *, _DWORD, _DWORD))(*(_DWORD *)v1->__pad_0 + 104))(v1, 0, 0) == 5 )
            {
              LOBYTE(Translucency) = 16; /*0x43fa8a*/
            }
            v73 = (AnimClass *)v1->Anims; /*0x43fa8f*/
            v74 = 21; /*0x43fa91*/
            do /*0x43faa6*/
            {
              if ( v73->field_0 ) /*0x43fa96*/
                *(_BYTE *)(v73->field_0 + 376) = Translucency; /*0x43fa9c*/
              v73 = (AnimClass *)((char *)v73 + 4); /*0x43faa2*/
              --v74; /*0x43faa5*/
            }
            while ( v74 ); /*0x43faa6*/
          }
          v75 = v86 == (AbstractClass *)1; /*0x43fab3*/
          ++v88; /*0x43fab4*/
          v86 = (AbstractClass *)((char *)v86 - 1); /*0x43fab8*/
        }
        while ( !v75 ); /*0x43fabc*/
        v76 = v1->Translucency; /*0x43fac2*/
        if ( v76 == 15 /*0x43fadc*/
          && (*(int (__thiscall **)(BuildingClass *, _DWORD, _DWORD))(*(_DWORD *)v1->__pad_0 + 104))(v1, 0, 0) == 5 )
        {
          LOBYTE(v76) = 16; /*0x43fade*/
        }
        v77 = (AnimClass *)v1->Anims; /*0x43fae3*/
        v78 = 21; /*0x43fae5*/
        do /*0x43fafa*/
        {
          result = v77->field_0; /*0x43faea*/
          if ( v77->field_0 ) /*0x43faea*/
            *(_BYTE *)(result + 376) = v76; /*0x43faf0*/
          v77 = (AnimClass *)((char *)v77 + 4); /*0x43faf6*/
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
int __thiscall BuildingClass::ProcessSpreadEffect(#377 *this)
{
  char v2; // bl
  BuildingTypeClass *v3; // eax
  int v4; // eax
  BuildingTypeClass *v5; // eax
  char v6; // bl
  AnimClass *v7; // edi
  int v8; // ebp
  int v9; // ecx
  int v10; // edi
  int v11; // ecx
  _DWORD *v12; // eax
  int v13; // edi
  int v14; // edx
  AbstractClass *v15; // eax
  int v16; // eax
  int v17; // ecx
  int result; // eax
  BuildingTypeClass *v19; // eax
  int Member81; // ebx
  int v21; // edi
  int v22; // eax
  unsigned int v23; // eax
  BuildingTypeClass *v24; // edx
  int *v25; // edi
  char *ProductionTimeMult; // eax
  int v27; // eax
  AnimClass *v28; // edi
  int v29; // ebx
  TimerStruct *v30; // edx
  int i; // edx
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // edi
  TimerStruct *v36; // edx
  int v37; // eax
  BuildingTypeClass *v38; // ecx
  int v39; // ebx
  int v40; // ebp
  _WORD *v41; // eax
  int v42; // edi
  _WORD *v43; // eax
  int v44; // eax
  __int16 *v45; // eax
  BuildingTypeClass *v46; // ecx
  int MaxNumberOccupants; // eax
  int v48; // ebx
  int v49; // edi
  int *v50; // eax
  int v51; // ecx
  int v52; // edx
  BuildingTypeClass *vfptr0; // eax
  _DWORD *v54; // eax
  int v55; // ecx
  int v56; // edx
  AnimClass *v57; // eax
  void **v58; // eax
  AnimClass *v59; // eax
  void **v60; // eax
  char v61; // [esp+13h] [ebp-39h]
  int v62; // [esp+14h] [ebp-38h]
  int v63; // [esp+18h] [ebp-34h]
  int v64; // [esp+1Ch] [ebp-30h] BYREF
  int v65; // [esp+20h] [ebp-2Ch] BYREF
  AnimClass *v66; // [esp+24h] [ebp-28h] BYREF
  char v67[4]; // [esp+28h] [ebp-24h] BYREF
  _BYTE v68[32]; // [esp+2Ch] [ebp-20h] BYREF

  v2 = (*(unsigned __int8 (__thiscall **)(#377 *))(*(_DWORD *)this + 848))(this) /*0x43fb57*/
    && (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) != 18
    && (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) != 19;
  v3 = (BuildingTypeClass *)this->Type; /*0x43fb61*/
  if ( v2 == *((_BYTE *)this + 1736) ) /*0x43fb67*/
  {
    if ( v3->SecretUnit != -1 || v3->SecretBuilding != -1 ) /*0x43fc0a*/
    {
      *(_DWORD *)&v68[8] = *((_DWORD *)this + 39); /*0x43fc18*/
      *(_DWORD *)&v68[12] = this->q0A0; /*0x43fc25*/
      *(_DWORD *)&v68[16] = *((_DWORD *)this + 41); /*0x43fc2c*/
      StartAudioController((int)&v68[8], (int)this + 1716); /*0x43fc34*/
    }
  }
  else
  {
    if ( v3->SecretUnit != -1 || v3->SecretBuilding != -1 ) /*0x43fb80*/
    {
      AudioFile::Stop((_DWORD *)this + 429); /*0x43fb8a*/
      v4 = this->q0A0; /*0x43fb9b*/
      *(_DWORD *)&v68[8] = *((_DWORD *)this + 39); /*0x43fb9e*/
      *(_DWORD *)&v68[12] = v4; /*0x43fba2*/
      v5 = (BuildingTypeClass *)this->Type; /*0x43fba6*/
      *(_DWORD *)&v68[16] = *((_DWORD *)this + 41); /*0x43fbb0*/
      if ( v2 ) /*0x43fb99*/
        StartAudioControllerAt(v5->SecretUnit, (int)&v68[8], (int)this + 1716); /*0x43fbbe*/
      else
        StartAudioControllerAt(v5->SecretBuilding, (int)&v68[8], (int)this + 1716); /*0x43fbe3*/
    }
    Animation::UpdateBuildingAnimations((int)this); /*0x43fbea*/
    *((_BYTE *)this + 1736) = v2; /*0x43fbef*/
  }
  if ( *(_BYTE *)(this->Type + 5499) ) /*0x43fc41*/
  {
    if ( BuildingClass::GetHealthRatio((int *)this) <= *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5896) ) /*0x43fc60*/
    {
      v6 = 1; /*0x43fc62*/
      goto LABEL_22; /*0x43fc64*/
    }
  }
  else if ( BuildingClass::GetHealthRatio((int *)this) <= *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] /*0x43fc7c*/
                                                                    + 5888) )
  {
    v6 = 1; /*0x43fc7e*/
    goto LABEL_22; /*0x43fc80*/
  }
  v6 = 0; /*0x43fc82*/
LABEL_22:
  if ( v6 != *((_BYTE *)this + 1512) ) /*0x43fc8a*/
  {
    if ( v6 ) /*0x43fc8e*/
    {
      CreateDominatorDestructionEffects(this); /*0x43fc92*/
    }
    else
    {
      v7 = (AnimClass *)((char *)this + 1480); /*0x43fc99*/
      v8 = 8; /*0x43fc9f*/
      do /*0x43fcbc*/
      {
        if ( v7->field_0 ) /*0x43fca4*/
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)v7->field_0 + 248))(v7->field_0); /*0x43fcac*/
          v7->field_0 = 0; /*0x43fcb2*/
        }
        v7 = (AnimClass *)((char *)v7 + 4); /*0x43fcb8*/
        --v8; /*0x43fcbb*/
      }
      while ( v8 ); /*0x43fcbc*/
    }
    *((_BYTE *)this + 1512) = v6; /*0x43fcbe*/
  }
  if ( *(_BYTE *)(this->Type + 3233) ) /*0x43fccd*/
    this->turretIsRotating = TimerClass::Active((int)this + 904); /*0x43fce7*/
  else
    this->turretIsRotating = 0; /*0x43fcef*/
  v9 = *((_DWORD *)this + 158); /*0x43fcf9*/
  if ( v9 ) /*0x43fd01*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 92))(v9); /*0x43fd05*/
  if ( (*(unsigned __int8 (__thiscall **)(#377 *))(this->drainingMe)(this) /*0x43fd1e*/
    || (*(unsigned __int8 (__thiscall **)(#377 *))(this->drainAnim)(this) )
  {
    v46 = (BuildingTypeClass *)this->Type; /*0x4403d4*/
    MaxNumberOccupants = v46->MaxNumberOccupants; /*0x4403e0*/
    if ( MaxNumberOccupants && *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 836) ) /*0x4403ee*/
    {
      v48 = 0; /*0x4403fc*/
      if ( MaxNumberOccupants > 0 ) /*0x440400*/
      {
        v49 = 5512; /*0x440406*/
        do /*0x4404e9*/
        {
          if ( !((v48 + *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]) % 24) /*0x440428*/
            && *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 836) )
          {
            v50 = World::ToScreen( /*0x440445*/
                    *(float **)&MEMORY[0x87F8E4].__pad_5568[9432],
                    (AbstractClass *)v68,
                    (AbstractClass *)&v46->vtable0[v49]);
            v51 = v50[1]; /*0x44044a*/
            v52 = *v50; /*0x44044d*/
            vfptr0 = *(BuildingTypeClass **)this; /*0x44044f*/
            *(_DWORD *)&v68[12] = v51; /*0x440451*/
            *(_DWORD *)&v68[8] = v52; /*0x440459*/
            *(_DWORD *)&v68[16] = 0; /*0x440460*/
            v54 = (_DWORD *)((int (__thiscall *)(#377 *, _BYTE *))vfptr0->AlphaImage)(this, &v68[20]); /*0x440468*/
            v55 = *(_DWORD *)&v68[8] + *v54; /*0x440478*/
            v56 = v54[1]; /*0x44047a*/
            v57 = (AnimClass *)(*(_DWORD *)&v68[16] + v54[2]); /*0x440486*/
            *(_DWORD *)&v68[8] = v55; /*0x44048d*/
            *(_DWORD *)&v68[12] += v56; /*0x440491*/
            *(_DWORD *)&v68[16] = v57; /*0x440495*/
            v58 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x440499*/
            if ( v58 ) /*0x4404a3*/
              v59 = AnimClass::ctor( /*0x4404c6*/
                      v58,
                      *(CoordStruct **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 836),
                      (CoordStruct *)&v68[8],
                      0,
                      (CoordStruct *)1,
                      (void *)0x600,
                      0,
                      0);
            else
              v59 = 0; /*0x4404cd*/
            v59->field_100 = -200; /*0x4404cf*/
          }
          v46 = (BuildingTypeClass *)this->Type; /*0x4404d9*/
          ++v48; /*0x4404df*/
          v49 += 8; /*0x4404e0*/
        }
        while ( v48 < v46->MaxNumberOccupants ); /*0x4404e9*/
      }
    }
    else if ( !(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] % 24) ) /*0x4404fc*/
    {
      if ( *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 836) ) /*0x440502*/
      {
        v60 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x440511*/
        if ( v60 ) /*0x44051b*/
        {
          *(_DWORD *)&v68[8] = *((_DWORD *)this + 39); /*0x440530*/
          *(_DWORD *)&v68[12] = this->q0A0; /*0x440539*/
          *(_DWORD *)&v68[16] = *((_DWORD *)this + 41); /*0x440545*/
          AnimClass::ctor( /*0x440558*/
            v60,
            *(CoordStruct **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 836),
            (CoordStruct *)&v68[8],
            0,
            (CoordStruct *)1,
            (void *)0x600,
            0,
            0);
        }
      }
    }
    result = this->sprayOffsetIndex; /*0x44055d*/
    if ( result ) /*0x440565*/
      return (*(int (__thiscall **)(#377 *, _DWORD))(*(_DWORD *)this + 968))(this, 0); /*0x440565*/
    return result; /*0x440565*/
  }
  v10 = this->q6D0; /*0x43fd2c*/
  v11 = *((_DWORD *)this + 438); /*0x43fd32*/
  v12 = (_DWORD *)((char *)this + 1744); /*0x43fd3e*/
  if ( v10 != -1 ) /*0x43fd46*/
  {
    if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v10 >= v11 ) /*0x43fd4e*/
      goto LABEL_46; /*0x43fd4e*/
    v11 -= *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - v10; /*0x43fd54*/
  }
  if ( v11 == 1 ) /*0x43fd59*/
  {
    v13 = *(_DWORD *)&v68[12]; /*0x43fd5b*/
    *v12 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x43fd63*/
    *((_DWORD *)this + 437) = v13; /*0x43fd65*/
    *((_DWORD *)this + 438) = 0; /*0x43fd68*/
    v14 = *(_DWORD *)(this->Type + 5472); /*0x43fd77*/
    *v12 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x43fd7d*/
    *((_DWORD *)this + 437) = *(_DWORD *)&v68[12]; /*0x43fd83*/
    *((_DWORD *)this + 438) = v14; /*0x43fd86*/
    if ( !*(_BYTE *)(*(_DWORD *)(this->focus + 52) + 422) ) /*0x43fd92*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(#377 *))(*(_DWORD *)this + 848))(this) ) /*0x43fda0*/
      {
        v15 = *(AbstractClass **)(this->Type + 5468); /*0x43fdb0*/
        if ( (int)v15 <= 0 ) /*0x43fdb8*/
          HouseClass::ProcessPowerDrain(this->focus, (IUnknown *)-(int)v15); /*0x43fdd1*/
        else
          HouseClass::AddPower(*((_DWORD **)this + 135), *(IUnknown **)(this->Type + 5468)); /*0x43fdc1*/
      }
    }
  }
LABEL_46:
  v16 = this->owningHouseIndex0; /*0x43fdd6*/
  if ( v16 && *(#377 **)(v16 + 80) == this ) /*0x43fde3*/
    (*(void (__thiscall **)(#377 *, int))(this->q124)(this, 2); /*0x43fdeb*/
  if ( *(_BYTE *)(this->Type + 5816) ) /*0x43fdf7*/
  {
    v17 = this->sprayOffsetIndex; /*0x43fe01*/
    if ( v17 ) /*0x43fe09*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v17 + 84))(v17) ) /*0x43fe0d*/
        (*(void (__thiscall **)(#377 *, _DWORD))(*(_DWORD *)this + 968))(this, 0); /*0x43fe1a*/
    }
  }
  BuildingClass::UpdateAnimFrames((int)this); /*0x43fe22*/
  if ( (*(unsigned __int8 (__thiscall **)(#377 *))(*(_DWORD *)this + 512))(this) /*0x43fe43*/
    && this->BuildingClass_field_int_534
    && (*(unsigned __int8 (__thiscall **)(#377 *))(this->q1EC)(this) )
  {
    *((_BYTE *)this + 1757) = 0; /*0x43fe4d*/
  }
  MovementAI::Begin((int *)this); /*0x43fe56*/
  LOBYTE(result) = this->isChronosphereImmune; /*0x43fe5b*/
  if ( !(_BYTE)result ) /*0x43fe63*/
    return result; /*0x43fe63*/
  if ( *(_BYTE *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3285) /*0x43fe86*/
    && TechnoClass::GetMember81(this) > 0 )
  {
    ++this->gattlingValue; /*0x43fe88*/
  }
  if ( !this->pitchAngle ) /*0x43fe8e*/
  {
    v19 = (BuildingTypeClass *)this->Type; /*0x43fe98*/
    if ( !v19->Hospital && !v19->Armory ) /*0x43fea8*/
      this->pitchAngle = *(_DWORD *)&v19->DebrisTypes[880]; /*0x43feb8*/
  }
  if ( (*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 388))(this) != 1 )
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3285) )
    {
      if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - this->q120 > *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108]
                                                                                             + 3588)
                                                                                 + 5 )
      {
        TechnoClass::GattlingValueRateDown_GattlingRateDownDelay(this, *(_DWORD *)(this->Type + 3344)); /*0x43ff19*/
        Member81 = TechnoClass::GetMember81(this); /*0x43ff27*/
        v21 = BuildingClass::checkPlacement(this); /*0x43ff2e*/
        if ( v21 > 0 )
        {
          v22 = VeterancyStruct::IsElite((float *)this + 84)
              ? *(_DWORD *)(this->Type + 4 * v21 + 3312)
              : *(_DWORD *)(this->Type + 4 * v21 + 3288);
          if ( Member81 < v22 ) /*0x43ff61*/
            TechnoClass::SetSpread(this, (BuildingTypeClass *)(v21 - 1)); /*0x43ff67*/
        }
      }
    }
    if ( *(_BYTE *)((*(int (__thiscall **)(#377 *))(*(_DWORD *)this + 132))(this) + 3285) /*0x43ff89*/
      && TechnoClass::GetMember81(this) > 0 )
    {
      ++this->gattlingValue; /*0x43ff8b*/
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(#377 *))(*(_DWORD *)this + 512))(this) /*0x43ffa3*/
    && (*(unsigned __int8 (__thiscall **)(#377 *))(this->q1EC)(this) )
  {
    *((_BYTE *)this + 1757) = 0; /*0x43ffad*/
  }
  v23 = this->BuildingClass_field_int_538; /*0x43ffb4*/
  if ( v23 != -1 ) /*0x43ffbc*/
  {
    if ( this->BuildingClass_field_int_534 != v23 ) /*0x43ffc8*/
    {
      v24 = (BuildingTypeClass *)this->Type; /*0x43ffca*/
      this->BuildingClass_field_int_534 = v23; /*0x43ffd5*/
      v25 = &v24->BuildingAnimFrame[3 * v23]; /*0x43ffdb*/
      if ( v23 < 2 ) /*0x43ffe2*/
        ProductionTimeMult = Rules::GetProductionTimeMult( /*0x44000d*/
                               (int *)&MEMORY[0xA8D63C].__pad_14B0[116],
                               (CellStruct *)v24->BuildingAnimFrame[3 * v23 + 2]);
      else
        ProductionTimeMult = (char *)v24->BuildingAnimFrame[3 * v23 + 2]; /*0x43ffef*/
      this->turretChargeTimer = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x43fff8*/
      this->currentTurretNumber = *(_DWORD *)&v68[12]; /*0x440028*/
      this->secondaryTurretIndex = ProductionTimeMult; /*0x44002b*/
      this->behindAnim = ProductionTimeMult; /*0x44002e*/
      this->q0F8 = *v25; /*0x440036*/
    }
    this->BuildingClass_field_int_538 = -1; /*0x44003c*/
  }
  v27 = this->health; /*0x440042*/
  if ( v27 != this->BuildingClass_field_544 ) /*0x44004d*/
  {
    *(_BYTE *)(this->focus + 22392) = 1; /*0x440055*/
    *(_BYTE *)(this->focus + 22393) = 1; /*0x440062*/
    v27 = this->health; /*0x440069*/
    this->BuildingClass_field_544 = v27; /*0x44006c*/
  }
  if ( !v27 ) /*0x440074*/
  {
    v28 = (AnimClass *)((char *)this + 1480); /*0x440076*/
    v29 = 8; /*0x44007c*/
    do /*0x440099*/
    {
      if ( v28->field_0 ) /*0x440081*/
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v28->field_0 + 248))(v28->field_0); /*0x440089*/
        v28->field_0 = 0; /*0x44008f*/
      }
      v28 = (AnimClass *)((char *)v28 + 4); /*0x440095*/
      --v29; /*0x440098*/
    }
    while ( v29 ); /*0x440099*/
    v30 = (TimerStruct *)*((_DWORD *)this + 330); /*0x44009b*/
    result = *((_DWORD *)this + 332); /*0x4400a1*/
    if ( v30 != (TimerStruct *)-1 ) /*0x4400a9*/
    {
      if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - (int)v30 >= result ) /*0x4400b5*/
      {
LABEL_98:
        (*(void (__thiscall **)(#377 *))(*(_DWORD *)this + 212))(this); /*0x4400c1*/
        BuildingClass::EjectCrew((int *)this, *((TechnoClass **)this + 336)); /*0x4400d4*/
        (*(void (__thiscall **)(#377 *))(this->q0F8)(this); /*0x4400dd*/
        LOBYTE(result) = BuildingClass::AfterDestruction(this); /*0x4400e5*/
        return result; /*0x4400f1*/
      }
      result -= *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - (_DWORD)v30; /*0x4400b7*/
    }
    if ( result ) /*0x4400bb*/
      return result; /*0x4400bb*/
    goto LABEL_98; /*0x4400bb*/
  }
  BuildingClass::UpdatePrism((int *)this); /*0x4400f4*/
  if ( *(_BYTE *)(this->Type + 5493) ) /*0x4400ff*/
  {
    for ( i = *((_DWORD *)this + 415) - 1; i >= 0; --i ) /*0x440114*/
    {
      if ( *(#377 **)(*(_DWORD *)(this->Occupants + 4 * i) + 692) != this ) /*0x440125*/
      {
        v32 = *((_DWORD *)this + 415); /*0x440127*/
        if ( i < v32 ) /*0x44012f*/
        {
          v33 = v32 - 1; /*0x440131*/
          v34 = i; /*0x440134*/
          for ( *((_DWORD *)this + 415) = v33; /*0x44013e*/
                v34 < *((_DWORD *)this + 415);
                *(_DWORD *)(this->Occupants + 4 * v34 - 4) = *(_DWORD *)(this->Occupants + 4 * v34) )
          {
            ++v34; /*0x440146*/
          }
        }
      }
    }
    v35 = *((_DWORD *)this + 415); /*0x44015b*/
    *((_BYTE *)this + 1633) = v35 >= 3 /*0x440196*/
                           || HouseClass::GetPowerRatio((int *)this->focus) == 1.0
                           && *((_BYTE *)this + 1632)
                           && v35 >= 1;
  }
  if ( *(_BYTE *)(this->Type + 5499) ) /*0x4401a3*/
    BuildingClass::ProcessStructureAbandoned((int)this); /*0x4401af*/
  BuildingClass::ProcessActiveAnimation(this); /*0x4401b6*/
  if ( *(_DWORD *)(this->Type + 3768) ) /*0x4401c1*/
    ProcessAutoProduction(this); /*0x4401cd*/
  if ( !*((_BYTE *)this + 1759) ) /*0x4401da*/
    goto LABEL_138; /*0x4401da*/
  v36 = (TimerStruct *)*((_DWORD *)this + 330); /*0x4401e0*/
  v37 = *((_DWORD *)this + 332); /*0x4401e6*/
  if ( v36 != (TimerStruct *)-1 ) /*0x4401ee*/
  {
    if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - (int)v36 >= v37 ) /*0x4401fa*/
    {
LABEL_121:
      v38 = (BuildingTypeClass *)this->Type; /*0x440206*/
      v66 = (AnimClass *)this->health; /*0x44020f*/
      if ( v38->BridgeRepairHut ) /*0x440213*/
      {
        v61 = 0; /*0x440221*/
        v39 = -2; /*0x440226*/
        do /*0x4402de*/
        {
          v40 = -2; /*0x44022b*/
          do /*0x4402d4*/
          {
            v41 = (_WORD *)(*(int (__thiscall **)(#377 *, char *))(*(_DWORD *)this + 440))(this, v67); /*0x440239*/
            HIWORD(v62) = v39 + v41[1]; /*0x44024c*/
            LOWORD(v62) = *v41 + v40; /*0x440251*/
            v64 = v62; /*0x44025e*/
            v42 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v64) + 14); /*0x44026d*/
            v43 = (_WORD *)(*(int (__thiscall **)(#377 *, _BYTE *))(*(_DWORD *)this + 440))(this, v68); /*0x440279*/
            HIWORD(v63) = v39 + v43[1]; /*0x44028c*/
            LOWORD(v63) = *v43 + v40; /*0x440291*/
            v65 = v63; /*0x44029e*/
            v44 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v65) + 17); /*0x4402b3*/
            if ( v42 >= g_TerrainBridgeIndex && v42 < g_TerrainBridgeIndex + 16 || v44 >= 74 && v44 <= 101 ) /*0x4402c9*/
              v61 = 1; /*0x4402cb*/
            ++v40; /*0x4402d0*/
          }
          while ( v40 < 3 ); /*0x4402d4*/
          ++v39; /*0x4402da*/
        }
        while ( v39 < 3 ); /*0x4402de*/
        v45 = (__int16 *)(*(int (__thiscall **)(#377 *, _BYTE *))(*(_DWORD *)this + 440))(this, v68); /*0x4402f5*/
        if ( v61 ) /*0x4402ec*/
          MapClass::ApplyTerrainDamage(&MEMORY[0x87F7E8], v45); /*0x440301*/
        else
          TerrainClass::ProcessSlope(&MEMORY[0x87F7E8], v45); /*0x44031b*/
        *((_BYTE *)this + 1759) = 0; /*0x440320*/
        this->C4AppliedBy = 0; /*0x440327*/
      }
      else
      {
        result = (*(int (__thiscall **)(#377 *, AnimClass **, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)this + 364))( /*0x440358*/
                   this,
                   &v66,
                   0,
                   *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4008),
                   this->C4AppliedBy,
                   1,
                   0,
                   0);
      }
      LOBYTE(result) = this->isChronosphereImmune; /*0x44035e*/
      if ( !(_BYTE)result ) /*0x440366*/
        return result; /*0x440366*/
      (*(void (__thiscall **)(#377 *, int))(this->q124)(this, 2); /*0x440372*/
      goto LABEL_138; /*0x440372*/
    }
    v37 -= *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664] - (_DWORD)v36; /*0x4401fc*/
  }
  if ( !v37 ) /*0x440200*/
    goto LABEL_121; /*0x440200*/
LABEL_138:
  result = this->sprayOffsetIndex; /*0x440378*/
  if ( result ) /*0x440380*/
  {
    result = (*(int (__thiscall **)(#377 *, _DWORD))(*(_DWORD *)this + 940))(this, this->sprayOffsetIndex); /*0x44038b*/
    if ( !(_BYTE)result ) /*0x440393*/
    {
      if ( (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 173) + 44))(this->sprayOffsetIndex) != 2 ) /*0x4403a7*/
        return (*(int (__thiscall **)(#377 *, _DWORD))(*(_DWORD *)this + 968))(this, 0); /*0x4403a7*/
      result = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 173) + 80))(this->sprayOffsetIndex); /*0x4403b5*/
      if ( (_BYTE)result ) /*0x4403ba*/
        return (*(int (__thiscall **)(#377 *, _DWORD))(*(_DWORD *)this + 968))(this, 0); /*0x440567*/
    }
  }
  return result; /*0x4400ea*/
}

