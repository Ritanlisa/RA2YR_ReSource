// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00690150  nullsub_227  this=-  sig=ida-proto ====
void __cdecl nullsub_227()
{
  ; /*0x690150*/
}



// ==== 0x00690160  Screen::TransitionLoop  this=Screen  sig=csp ====
int __thiscall Screen::TransitionLoop(Screen *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // esi
  int i; // esi
  int v8; // ecx
  int j; // esi
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  int result; // eax
  bool v14; // cc
  int Ticks; // [esp+24h] [ebp-48h]
  int v16; // [esp+2Ch] [ebp-40h]
  _DWORD v17[4]; // [esp+3Ch] [ebp-30h] BYREF
  struct tagRECT Rect; // [esp+4Ch] [ebp-20h] BYREF
  Rect v19; // [esp+5Ch] [ebp-10h] BYREF

  Ticks = Timer::GetTicks(); /*0x690178*/
  v16 = 1; /*0x69017c*/
  do
  {
    Screen::CleanupTransitionObjects(this); /*0x690189*/
    GetClientRect(g_hWnd, &Rect); /*0x69019a*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x6901ab*/
    v3 = *(_DWORD *)this; /*0x6901b1*/
    v4 = this->u32_4; /*0x6901c4*/
    v17[0] = *(_DWORD *)this + Rect.left; /*0x6901c7*/
    v17[1] = v4 + Rect.top; /*0x6901d7*/
    v17[2] = 640; /*0x6901db*/
    v17[3] = 400; /*0x6901e3*/
    Rect::Set(&v19, v3, v4, 640, 400); /*0x6901eb*/
    if ( stru_887598.lineTrailer ) /*0x6901f8*/
      (*(void (__thiscall **)(void *, ObjectClass *, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 60))( /*0x690205*/
        stru_887598.lineTrailer,
        g_DSurface_Hidden,
        0);
    (*((void (__thiscall **)(DSurface *, _DWORD *, ObjectClass *, Rect *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 /*0x690225*/
     + 2))(
      g_DSurface_Primary,
      v17,
      g_DSurface_Hidden,
      &v19,
      0,
      1);
    if ( stru_887598.lineTrailer ) /*0x690230*/
      (*(void (__thiscall **)(void *, ObjectClass *, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 64))( /*0x69023d*/
        stru_887598.lineTrailer,
        g_DSurface_Hidden,
        0);
    do
    {
      Event::Dispatch(); /*0x690240*/
      MessageLoop(); /*0x690245*/
      if ( !stru_A8EB00.?[412] )
      {
        if ( Ticks == -1
          || ((v5 = Timer::GetTicks() - Ticks, v5 >= v16) ? (v6 = 0) : (v6 = v16 - v5), v16 = v6,
                                                                                        stru_A8EB00.?[412] != 1) )
        {
          for ( i = 0; i < this->u32_2C; ++i ) /*0x690292*/
          {
            v8 = *(_DWORD *)(this->q008 + 4 * i); /*0x690297*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8); /*0x69029c*/
          }
          while ( !stru_A8EB00.?[412] ) /*0x6902ae*/
          {
            Sleep(0x1F4u); /*0x6902b5*/
            MessageLoop(); /*0x6902b7*/
          }
          for ( j = 0; j < this->u32_2C; ++j ) /*0x6902cc*/
          {
            v10 = *(_DWORD *)(this->q008 + 4 * j); /*0x6902d1*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x6902d6*/
          }
        }
        Ticks = Timer::GetTicks(); /*0x6902f0*/
      }
      Sleep(0); /*0x6902f6*/
      v11 = v16; /*0x6902fc*/
      if ( Ticks != -1 ) /*0x690302*/
      {
        v12 = Timer::GetTicks() - Ticks; /*0x69030d*/
        if ( v12 >= v16 ) /*0x690313*/
          break; /*0x690313*/
        v11 = v16 - v12; /*0x690315*/
      }
    }
    while ( v11 > 0 );
    Ticks = Timer::GetTicks(); /*0x69031f*/
    result = a2 - 1; /*0x690341*/
    v14 = a2 - 1 <= 0; /*0x690346*/
    v16 = 1; /*0x690348*/
    --a2; /*0x69034c*/
  }
  while ( !v14 );
  return result; /*0x690356*/
}



// ==== 0x00690360  Screen::CleanupTransitionObjects  this=Screen  sig=csp ====
int __thiscall Screen::CleanupTransitionObjects(Screen *this)
{
  int result; // eax
  int i; // edi
  int v4; // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax

  byte_B05584 = 0; /*0x69036b*/
  if ( g_LoadScreenFlag ) /*0x690372*/
  {
    g_LoadScreenFlag = 0; /*0x69037a*/
    (*((void (__thiscall **)(ObjectClass *, _DWORD))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden, 0); /*0x690385*/
    (*((void (__thiscall **)(ObjectClass *, DSurface *, _DWORD, int))g_DSurface_Hidden->AbstractClass + 1))( /*0x69039a*/
      g_DSurface_Hidden,
      DSurface_Alternate,
      0,
      1);
  }
  result = this->u32_2C; /*0x69039d*/
  for ( i = 0; i < result; ++i ) /*0x6903a4*/
  {
    v4 = *(_DWORD *)(this->q008 + 4 * i); /*0x6903ad*/
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 12))(v4, this->q008) == 1 ) /*0x6903b7*/
    {
      v5 = *(void (__thiscall ****)(_DWORD, int))(this->q008 + 4 * i); /*0x6903bc*/
      if ( v5 ) /*0x6903c1*/
        (**v5)(v5, 1); /*0x6903c7*/
      v6 = this->u32_2C; /*0x6903c9*/
      if ( i < v6 ) /*0x6903ce*/
      {
        v7 = v6 - 1; /*0x6903d0*/
        v8 = i; /*0x6903d3*/
        for ( this->u32_2C = v7; /*0x6903da*/
              v8 < this->u32_2C;
              *(_DWORD *)(this->q008 + 4 * v8 - 4) = *(_DWORD *)(this->q008 + 4 * v8) )
        {
          ++v8; /*0x6903df*/
        }
      }
    }
    result = this->u32_2C; /*0x6903ee*/
  }
  return result; /*0x6903f6*/
}



// ==== 0x00690400  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_690400(ObjectClass *this)
{
  char *vtable0; // eax
  char *vtable1; // esi
  int result; // eax
  _DWORD v5[4]; // [esp+8h] [ebp-30h] BYREF
  _DWORD v6[4]; // [esp+18h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+28h] [ebp-10h] BYREF

  GetClientRect(g_hWnd, &Rect); /*0x690412*/
  ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x690423*/
  vtable0 = (char *)this->AbstractClass; /*0x690429*/
  vtable1 = (char *)this->?; /*0x69042f*/
  v5[0] = vtable0; /*0x690432*/
  v6[0] = &vtable0[Rect.left]; /*0x69043d*/
  v5[1] = vtable1; /*0x690441*/
  v6[3] = 400; /*0x69044d*/
  v5[3] = 400; /*0x690451*/
  v6[1] = &vtable1[Rect.top]; /*0x69045b*/
  v6[2] = 640; /*0x690467*/
  v5[2] = 640; /*0x69046b*/
  if ( stru_887598.lineTrailer ) /*0x69046f*/
    (*(void (__thiscall **)(void *, ObjectClass *, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 60))( /*0x69047c*/
      stru_887598.lineTrailer,
      g_DSurface_Hidden,
      0);
  result = (*((int (__thiscall **)(DSurface *, _DWORD *, ObjectClass *, _DWORD *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 /*0x69049c*/
            + 2))(
             g_DSurface_Primary,
             v6,
             g_DSurface_Hidden,
             v5,
             0,
             1);
  if ( stru_887598.lineTrailer ) /*0x6904a7*/
    return (*(int (__thiscall **)(void *, ObjectClass *, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 64))( /*0x6904b4*/
             stru_887598.lineTrailer,
             g_DSurface_Hidden,
             0);
  return result; /*0x6904b7*/
}



// ==== 0x00690530  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_690530(ObjectClass *this, void *a2, int a3)
{
  int i; // esi

  if ( a2 ) /*0x69053b*/
  {
    if ( Audio::IsSoundEnabled() ) /*0x69053d*/
    {
      for ( i = 0; i < this->ambientSoundController[2]; ++i ) /*0x69054d*/
      {
        if ( !_strcmpi((char *)a2, **((char ***)&this->attachedBomb->AbstractClass + i)) ) /*0x690559*/
          break; /*0x690563*/
      }
    }
  }
}



// ==== 0x006905F0  ScoreFontClass::method_6905F0  this=ScoreFontClass  sig=csp ====
char *__thiscall sub_6905F0(ScoreFontClass *this)
{
  void *ScoreFontClass_field_0x0C; // eax
  char *result; // eax

  ScoreFontClass_field_0x0C = (void *)this->ScoreFontClass_field_0x0C; /*0x6905f6*/
  *(_DWORD *)this->__pad_0 = &ScoreFontClass::`vftable'; /*0x6905f9*/
  if ( ScoreFontClass_field_0x0C && this->q004 == 1 ) /*0x690607*/
  {
    __3_YAXPAX_Z(ScoreFontClass_field_0x0C); /*0x69060a*/
    this->ScoreFontClass_field_0x0C = 0; /*0x690612*/
    this->q004 = 0; /*0x690615*/
  }
  result = (char *)--dword_B0558C; /*0x69061d*/
  if ( !dword_B0558C ) /*0x690623*/
  {
    result = (char *)&byte_B05594; /*0x690625*/
    do /*0x690637*/
    {
      *((_DWORD *)result - 1) = 0; /*0x69062a*/
      *result = 0; /*0x69062d*/
      result += 8; /*0x69062f*/
    }
    while ( (int)result < (int)byte_B055AC ); /*0x690637*/
  }
  return result; /*0x690639*/
}



// ==== 0x00690640  ScoreScreen::LoadAudio  this=ScoreScreen  sig=csp ====
int ScoreScreen_LoadAudio()
{
  int result; // eax
  _DWORD v1[22]; // [esp+18h] [ebp-6Ch] BYREF
  _BYTE v2[12]; // [esp+70h] [ebp-14h] BYREF
  int v3; // [esp+7Ch] [ebp-8h]

  result = Audio::IsSoundEnabled(); /*0x690643*/
  if ( result ) /*0x69064a*/
  {
    CCFileClass::Construct3((int)v1); /*0x690654*/
    dword_B05590 = SearchMIXFile(aText1Aud, 0); /*0x690667*/
    if ( !dword_B05590 ) /*0x69066c*/
    {
      (*(void (__thiscall **)(_DWORD *, char *))(v1[0] + 8))(v1, aText1Aud); /*0x69067b*/
      (*(void (__thiscall **)(_DWORD *, int))(v1[0] + 28))(v1, 1); /*0x690688*/
      dword_B05590 = (int)CCFileClass::ReadEntireFile(v1); /*0x690698*/
      byte_B05594 = 1; /*0x69069d*/
      CCFileClass::Reset(v1); /*0x6906a4*/
      Debug::Log(); /*0x6906ae*/
    }
    dword_B05598 = SearchMIXFile(aText2Aud, 0); /*0x6906c4*/
    if ( !dword_B05598 ) /*0x6906c9*/
    {
      (*(void (__thiscall **)(_DWORD *, char *))(v1[0] + 8))(v1, aText2Aud); /*0x6906d8*/
      (*(void (__thiscall **)(_DWORD *, int))(v1[0] + 28))(v1, 1); /*0x6906e5*/
      dword_B05598 = (int)CCFileClass::ReadEntireFile(v1); /*0x6906f5*/
      byte_B0559C = 1; /*0x6906fa*/
      CCFileClass::Reset(v1); /*0x690701*/
      Debug::Log(); /*0x69070b*/
    }
    dword_B055A0 = SearchMIXFile(aText3Aud, 0); /*0x690721*/
    if ( !dword_B055A0 ) /*0x690726*/
    {
      (*(void (__thiscall **)(_DWORD *, char *))(v1[0] + 8))(v1, aText3Aud); /*0x690735*/
      (*(void (__thiscall **)(_DWORD *, int))(v1[0] + 28))(v1, 1); /*0x690742*/
      dword_B055A0 = (int)CCFileClass::ReadEntireFile(v1); /*0x690752*/
      byte_B055A4 = 1; /*0x690757*/
      CCFileClass::Reset(v1); /*0x69075e*/
      Debug::Log(); /*0x690768*/
    }
    v1[0] = &CCFileClass::`vftable'; /*0x690774*/
    v3 = 0; /*0x69077c*/
    Vector::Clear((int)v2); /*0x690784*/
    v1[0] = &off_7E1668; /*0x69078d*/
    return BufferIOFileClass::Dtor(v1); /*0x690795*/
  }
  return result; /*0x69079a*/
}



// ==== 0x006907A0  ScoreFontClass::Release  this=ScoreFontClass  sig=csp ====
int __thiscall ScoreFontClass::Release(ScoreFontClass *this, __int16 *a2)
{
  __int16 *v2; // edi
  int v3; // esi
  __int16 i; // ax

  v2 = a2; /*0x6907a3*/
  v3 = 0; /*0x6907a7*/
  for ( i = *a2; *v2; i = *v2 ) /*0x6907ab*/
  {
    ++v2; /*0x6907b8*/
    v3 += (*(int (__thiscall **)(ScoreFontClass *, __int16))(*(_DWORD *)this->__pad_0 + 4))(this, i) + 1; /*0x6907be*/
  }
  return v3; /*0x6907cc*/
}



// ==== 0x006907E0  ScoreFontClass::AddRef  this=ScoreFontClass  sig=csp ====
int __stdcall ScoreFontClass::AddRef(ScoreFontClass *this)
{
  int v2; // eax
  CHAR szDst; // [esp+7h] [ebp-11h] BYREF
  _DWORD v4[4]; // [esp+8h] [ebp-10h] BYREF

  if ( (_WORD)this == 32 ) /*0x6907f3*/
    return 8; /*0x6907f5*/
  CharToOemBuffA((LPCSTR)&this, &szDst, 1u); /*0x69080d*/
  v2 = szDst - 33; /*0x690818*/
  if ( szDst == 33 ) /*0x69081d*/
  {
    v2 = 0; /*0x69081f*/
  }
  else if ( v2 >= 216 ) /*0x690828*/
  {
    v2 = 216; /*0x69082a*/
  }
  return Building::GetFoundationSize(v4, 3 * v2 + 2)[2]; /*0x6907fa*/
}



// ==== 0x00690850  ScoreFontClass::DrawFoundationChar2  this=ScoreFontClass  sig=csp ====
void __thiscall BuildingClass::DrawFoundationChar2(
        ScoreFontClass *this,
        int a2,
        CHAR szSrc,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int v8; // eax
  int v9; // esi
  int v10; // ecx
  int *v11; // eax
  int v12[2]; // [esp+4h] [ebp-28h] BYREF
  _DWORD v13[4]; // [esp+Ch] [ebp-20h] BYREF
  _BYTE v14[16]; // [esp+1Ch] [ebp-10h] BYREF

  CharToOemBuffA(&szSrc, &szSrc, 1u); /*0x69086a*/
  if ( szSrc != 32 ) /*0x690876*/
  {
    v8 = szSrc - 33; /*0x69087f*/
    if ( szSrc == 33 ) /*0x690884*/
    {
      v8 = 0; /*0x690886*/
    }
    else if ( v8 >= 216 ) /*0x69088f*/
    {
      v8 = 216; /*0x690891*/
    }
    v9 = 3 * v8; /*0x690898*/
    v10 = *Building::GetFoundationSize(v13, 3 * v8 + 2); /*0x6908b5*/
    v12[1] = a5; /*0x6908cc*/
    v12[0] = a4 - v10; /*0x6908d1*/
    v11 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 120))(a2, v14); /*0x6908e4*/
    DrawToSurfaceSHP( /*0x6908fd*/
      a2,
      *((_DWORD *)this + 5),
      this->ScoreFontClass_field_0x0C,
      a6 + v9,
      v12,
      v11,
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
}



// ==== 0x00690910  ScoreFontClass::DrawFoundationChar  this=ScoreFontClass  sig=csp ====
__int16 __thiscall BuildingClass::DrawFoundationChar(
        ScoreFontClass *this,
        int szSrc,
        _WORD *a3,
        int a4,
        int a5,
        int a6)
{
  _WORD *v6; // edi
  __int16 result; // ax
  int v9; // ebx
  int v10; // eax
  int v11; // edi
  int v12; // ecx
  int *v13; // eax
  int v14; // eax
  int v15; // edx
  bool v16; // zf
  CHAR szDst; // [esp+Bh] [ebp-29h] BYREF
  int v18[2]; // [esp+Ch] [ebp-28h] BYREF
  _DWORD v19[4]; // [esp+14h] [ebp-20h] BYREF
  _BYTE v20[16]; // [esp+24h] [ebp-10h] BYREF

  v6 = a3; /*0x690915*/
  result = *a3; /*0x69091b*/
  if ( *a3 ) /*0x69091b*/
  {
    v9 = szSrc; /*0x690928*/
    do /*0x6909f8*/
    {
      if ( result != 32 ) /*0x690931*/
      {
        LOBYTE(szSrc) = *(_BYTE *)v6; /*0x690945*/
        CharToOemBuffA((LPCSTR)&szSrc, &szDst, 1u); /*0x690949*/
        v10 = szDst - 33; /*0x690954*/
        if ( szDst == 33 ) /*0x690959*/
        {
          v10 = 0; /*0x69095b*/
        }
        else if ( v10 >= 216 ) /*0x690964*/
        {
          v10 = 216; /*0x690966*/
        }
        v11 = 3 * v10; /*0x69096b*/
        v12 = *Building::GetFoundationSize(v19, 3 * v10 + 2); /*0x690981*/
        v18[1] = a5; /*0x69098b*/
        v18[0] = a4 - v12; /*0x6909a0*/
        v13 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v9 + 120))(v9, v20); /*0x6909b2*/
        DrawToSurfaceSHP( /*0x6909cb*/
          v9,
          *((_DWORD *)this + 5),
          this->ScoreFontClass_field_0x0C,
          a6 + v11,
          v18,
          v13,
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
        v6 = a3; /*0x6909d0*/
      }
      v14 = (*(int (__thiscall **)(ScoreFontClass *, _WORD))(*(_DWORD *)this->__pad_0 + 4))(this, *v6++); /*0x6909dc*/
      a3 = v6; /*0x6909e6*/
      v15 = a4 + v14 + 1; /*0x6909ea*/
      result = *v6; /*0x6909ee*/
      v16 = *v6 == 0; /*0x6909f1*/
      a4 = v15; /*0x6909f4*/
    }
    while ( !v16 ); /*0x6909f8*/
  }
  return result; /*0x690a00*/
}



// ==== 0x00690A10  ScoreScreen::LoadScoreFont  this=ScoreFontClass  sig=csp ====
_DWORD *__thiscall ScoreScreen::LoadScoreFont(ScoreScreen *this, int a2)
{
  void *v3; // eax
  CCFileClass v5; // [esp+8h] [ebp-6Ch] BYREF
  int v6[3]; // [esp+60h] [ebp-14h] BYREF
  int v7; // [esp+6Ch] [ebp-8h]

  this->ScoreScreen_field_0x04 = 0; /*0x690a19*/
  this->ScoreScreen_field_0x08 = 0; /*0x690a1c*/
  this->ScoreScreen_field_0x0C = 0; /*0x690a1f*/
  this->ScoreScreen_field_0x14 = 0; /*0x690a22*/
  *(_DWORD *)this->__pad_0 = &ScoreFontClass::`vftable'; /*0x690a25*/
  ScoreScreen::LoadAudio(); /*0x690a2b*/
  ++dword_B0558C; /*0x690a3c*/
  *(_DWORD *)this->__pad_0 = &ScoreFullFontClass::`vftable'; /*0x690a44*/
  LOBYTE(this->ScoreScreen_field_0x10) = 0; /*0x690a4a*/
  v3 = SearchMIXFile(g_Str_File_FULLFNT3_SHP, 0); /*0x690a4d*/
  this->ScoreScreen_field_0x0C = (int)v3; /*0x690a54*/
  if ( !v3 ) /*0x690a57*/
  {
    CCFileClass::Construct(&v5, g_Str_File_FULLFNT3_SHP); /*0x690a62*/
    this->ScoreScreen_field_0x0C = (int)CCFileClass::ReadEntireFile(&v5); /*0x690a74*/
    LOBYTE(this->ScoreScreen_field_0x10) = 1; /*0x690a77*/
    CCFileClass::Reset(&v5); /*0x690a7b*/
    Debug::Log(); /*0x690a85*/
    *(_DWORD *)v5.CDFileClass = &CCFileClass::`vftable'; /*0x690a91*/
    v7 = 0; /*0x690a99*/
    Vector::Clear((int)v6); /*0x690a9d*/
    *(_DWORD *)v5.CDFileClass = &off_7E1668; /*0x690aa6*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v5); /*0x690aae*/
  }
  this->ScoreScreen_field_0x04 = 11; /*0x690ab7*/
  this->ScoreScreen_field_0x14 = a2; /*0x690abe*/
  this->ScoreScreen_field_0x08 = 21; /*0x690ac1*/
  return this->__pad_0; /*0x690aca*/
}



// ==== 0x00690AE0  ScoreScreen::LoadCountryFlags  this=ScoreFontClass  sig=csp ====
_DWORD *__thiscall ScoreScreen::LoadCountryFlags(ScoreScreen *this, int a2)
{
  void *v3; // eax
  CCFileClass v5; // [esp+8h] [ebp-6Ch] BYREF
  int v6[3]; // [esp+60h] [ebp-14h] BYREF
  int v7; // [esp+6Ch] [ebp-8h]

  this->ScoreScreen_field_0x04 = 0; /*0x690ae9*/
  this->ScoreScreen_field_0x08 = 0; /*0x690aec*/
  this->ScoreScreen_field_0x0C = 0; /*0x690aef*/
  this->ScoreScreen_field_0x14 = 0; /*0x690af2*/
  *(_DWORD *)this->__pad_0 = &ScoreFontClass::`vftable'; /*0x690af5*/
  ScoreScreen::LoadAudio(); /*0x690afb*/
  ++dword_B0558C; /*0x690b0c*/
  *(_DWORD *)this->__pad_0 = &ScoreBigFontClass::`vftable'; /*0x690b14*/
  LOBYTE(this->ScoreScreen_field_0x10) = 0; /*0x690b1a*/
  v3 = SearchMIXFile(aBigfontShp, 0); /*0x690b1d*/
  this->ScoreScreen_field_0x0C = (int)v3; /*0x690b24*/
  if ( !v3 ) /*0x690b27*/
  {
    CCFileClass::Construct(&v5, aBigfontShp); /*0x690b32*/
    this->ScoreScreen_field_0x0C = (int)CCFileClass::ReadEntireFile(&v5); /*0x690b44*/
    LOBYTE(this->ScoreScreen_field_0x10) = 1; /*0x690b47*/
    CCFileClass::Reset(&v5); /*0x690b4b*/
    Debug::Log(); /*0x690b55*/
    *(_DWORD *)v5.CDFileClass = &CCFileClass::`vftable'; /*0x690b61*/
    v7 = 0; /*0x690b69*/
    Vector::Clear((int)v6); /*0x690b6d*/
    *(_DWORD *)v5.CDFileClass = &off_7E1668; /*0x690b76*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v5); /*0x690b7e*/
  }
  this->ScoreScreen_field_0x04 = 20; /*0x690b87*/
  this->ScoreScreen_field_0x14 = a2; /*0x690b8e*/
  this->ScoreScreen_field_0x08 = 35; /*0x690b91*/
  return this->__pad_0; /*0x690b9a*/
}



// ==== 0x00690C00  ScoreTimeClass::AdvanceFrame  this=ScoreTimeClass  sig=csp ====
char __thiscall ScoreAnimClass::AdvanceFrame(ScoreTimeClass *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int Ticks; // eax
  int v7; // edx
  int v8; // ecx
  int *v9; // eax
  int *v10; // eax
  int v12; // [esp+8h] [ebp-1Ch] BYREF
  int v13; // [esp+Ch] [ebp-18h]
  _BYTE v14[16]; // [esp+14h] [ebp-10h] BYREF

  v3 = this->q014; /*0x690c0a*/
  if ( *(_DWORD *)&this->m_9[3] == -1 ) /*0x690c10*/
  {
LABEL_4:
    if ( v3 ) /*0x690c25*/
      return 0; /*0x690c25*/
    goto LABEL_5; /*0x690c25*/
  }
  v4 = Timer::GetTicks() - *(_DWORD *)&this->m_9[3]; /*0x690c1a*/
  if ( v4 < v3 ) /*0x690c1f*/
  {
    v3 -= v4; /*0x690c21*/
    goto LABEL_4; /*0x690c21*/
  }
LABEL_5:
  v5 = this->q024; /*0x690c2b*/
  Ticks = Timer::GetTicks(); /*0x690c32*/
  v7 = this->q01C; /*0x690c37*/
  v8 = this->q008; /*0x690c3a*/
  *(_DWORD *)&this->m_9[3] = Ticks; /*0x690c3d*/
  this->q004 = v13; /*0x690c45*/
  this->q014 = v5; /*0x690c4a*/
  this->q01C = v7 + 1; /*0x690c4f*/
  if ( v7 + 1 >= v8 ) /*0x690c52*/
    this->q01C = 0; /*0x690c54*/
  v12 = *(_DWORD *)&this->m_1[3]; /*0x690c6d*/
  v13 = *(_DWORD *)&this->m_5[3]; /*0x690c7c*/
  v9 = (int *)(*((int (__thiscall **)(ObjectClass *, _BYTE *))g_DSurface_Hidden->AbstractClass + 30))( /*0x690c8c*/
                g_DSurface_Hidden,
                v14);
  DrawToSurfaceSHP( /*0x690ca6*/
    (int)g_DSurface_Hidden,
    this->q028,
    this->q018,
    this->q01C,
    &v12,
    v9,
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
  v12 = *(_DWORD *)&this->m_1[3]; /*0x690cbd*/
  v13 = *(_DWORD *)&this->m_5[3]; /*0x690ccc*/
  v10 = (int *)(*((int (__thiscall **)(DSurface *, _BYTE *))DSurface_Alternate->DSurface_field_0x0 + 30))( /*0x690cdc*/
                 DSurface_Alternate,
                 v14);
  DrawToSurfaceSHP( /*0x690cf6*/
    (int)DSurface_Alternate,
    this->q028,
    this->q018,
    this->q01C,
    &v12,
    v10,
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
  return 0; /*0x690cfb*/
}



// ==== 0x00690D60  ScorePrintClass::AnimateText  this=ScorePrintClass  sig=csp ====
char __thiscall ScoreAnimClass::AnimateText(ScorePrintClass *this, signed int a2, int a3)
{
  int v3; // ebp
  int v5; // edi
  int v6; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int m_4; // ebx
  char v14; // dl
  int v15; // ebp
  int v16; // [esp+3Ch] [ebp-24h]
  int v17; // [esp+4Ch] [ebp-14h]
  int v18; // [esp+50h] [ebp-10h] BYREF
  int m_8; // [esp+54h] [ebp-Ch]
  int v20; // [esp+58h] [ebp-8h]
  int v21; // [esp+5Ch] [ebp-4h]

  byte_B05584 = 1; /*0x690d63*/
  v5 = *(_DWORD *)this->__pad_14; /*0x690d71*/
  if ( this->m_C == -1 ) /*0x690d77*/
  {
LABEL_4:
    if ( v5 ) /*0x690d8c*/
      return 0; /*0x690d8c*/
    goto LABEL_5; /*0x690d8c*/
  }
  v6 = Timer::GetTicks() - this->m_C; /*0x690d81*/
  if ( v6 < v5 ) /*0x690d86*/
  {
    v5 -= v6; /*0x690d88*/
    goto LABEL_4; /*0x690d88*/
  }
LABEL_5:
  this->m_C = Timer::GetTicks(); /*0x690d92*/
  this->m_10 = m_8; /*0x690da7*/
  *(_DWORD *)this->__pad_14 = 2; /*0x690daa*/
  if ( *(_DWORD *)&this->m_1A[2] > (unsigned int)wcslen(*(const wchar_t **)&this->__pad_14[4]) && this->m_20 > 2 ) /*0x690dc4*/
    return 1; /*0x690dcd*/
  if ( !LOBYTE(this->m_24) )
  {
    v8 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)this->__pad_28 + 8))( /*0x690de0*/
           *(_DWORD *)this->__pad_28,
           *(_DWORD *)&this->__pad_14[4]);
    v9 = this->m_4 - 8 <= 0 ? 0 : this->m_4 - 8;
    v10 = *(_DWORD *)(*(_DWORD *)this->__pad_28 + 8); /*0x690dfd*/
    v20 = v8 + 10; /*0x690e00*/
    v18 = v9; /*0x690e04*/
    m_8 = this->m_8; /*0x690e0f*/
    v21 = v10; /*0x690e1f*/
    (*(void (__thiscall **)(ObjectClass *, int *, DSurface *, int *, _DWORD, int))(g_DSurface_Hidden->vtable0 + 8))( /*0x690e2b*/
      g_DSurface_Hidden,
      &v18,
      DSurface_Alternate,
      &v18,
      0,
      1);
  }
  v11 = *(_DWORD *)&this->m_1A[2]; /*0x690e2e*/
  v12 = 0; /*0x690e31*/
  m_4 = this->m_4; /*0x690e34*/
  v16 = v3; /*0x690e39*/
  v17 = 0; /*0x690e3a*/
  if ( v11 >= 0 ) /*0x690e3e*/
  {
    while ( 1 ) /*0x690e4d*/
    {
      v14 = *(_BYTE *)(*(_DWORD *)&this->__pad_14[4] + 2 * v12); /*0x690e4d*/
      if ( !v14 ) /*0x690e52*/
        break; /*0x690e52*/
      if ( LOBYTE(this->m_24) == 1 || (v15 = v11 - v12, v11 - v12 >= 2) ) /*0x690e61*/
        v15 = 2; /*0x690e63*/
      LOWORD(v5) = v14; /*0x690e6d*/
      (*(void (__thiscall **)(_DWORD, ObjectClass *, int, int, int, int, int, int))(**(_DWORD **)this->__pad_28 + 16))( /*0x690e81*/
        *(_DWORD *)this->__pad_28,
        g_DSurface_Hidden,
        v5,
        m_4,
        this->m_8,
        v15,
        1,
        v16);
      if ( v15 == 2 ) /*0x690e87*/
        (*(void (__thiscall **)(_DWORD, DSurface *, int, int, int, int, _DWORD))(**(_DWORD **)this->__pad_28 + 16))( /*0x690e9e*/
          *(_DWORD *)this->__pad_28,
          DSurface_Alternate,
          v5,
          m_4,
          this->m_8,
          2,
          0);
      v16 = v5; /*0x690ea4*/
      m_4 += (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 4))(*(_DWORD *)this->__pad_28) + 1; /*0x690eae*/
      v11 = *(_DWORD *)&this->m_1A[2]; /*0x690eb2*/
      if ( ++v17 > v11 ) /*0x690ebc*/
      {
        *(_DWORD *)&this->m_1A[2] = v11 + 1; /*0x690ec1*/
        return 0; /*0x690ecb*/
      }
      v12 = v17; /*0x690e46*/
    }
    ++this->m_20; /*0x690ece*/
  }
  ++*(_DWORD *)&this->m_1A[2]; /*0x690ed7*/
  return 0; /*0x690dc6*/
}



// ==== 0x00690F30  ScoreScreen::Constructor  this=ScoreAnimClass  sig=csp ====
_DWORD *__thiscall ScoreScreen::Constructor(ScoreScreen *this, int a2, int a3, int a4)
{
  this->ScoreScreen_field_0x08 = a3; /*0x690f3b*/
  this->ScoreScreen_field_0x04 = a2; /*0x690f41*/
  this->ScoreScreen_field_0x0C = Timer::GetTicks(); /*0x690f4d*/
  this->ScoreScreen_field_0x14 = 0; /*0x690f50*/
  this->ScoreScreen_field_0x18 = a4; /*0x690f57*/
  *(_DWORD *)this->__pad_0 = &ScoreAnimClass::`vftable'; /*0x690f5a*/
  return this->__pad_0; /*0x690f62*/
}



// ==== 0x00690F70  ScoreAnimClass::AddRef  this=ScoreAnimClass  sig=csp ====
signed int __thiscall ScoreAnimClass::AddRef(ScoreAnimClass *this)
{
  signed int result; // eax
  int ScoreAnimClass_field_0x14; // edi

  result = this->ScoreAnimClass_field_0x0C; /*0x690f73*/
  if ( result != -1 ) /*0x690f79*/
  {
    ScoreAnimClass_field_0x14 = this->ScoreAnimClass_field_0x14; /*0x690f7c*/
    result = Timer::GetTicks() - this->ScoreAnimClass_field_0x0C; /*0x690f8c*/
    if ( result >= ScoreAnimClass_field_0x14 ) /*0x690f91*/
    {
      this->ScoreAnimClass_field_0x14 = 0; /*0x690fa4*/
      this->ScoreAnimClass_field_0x0C = -1; /*0x690fa7*/
    }
    else
    {
      this->ScoreAnimClass_field_0x0C = -1; /*0x690f95*/
      this->ScoreAnimClass_field_0x14 = ScoreAnimClass_field_0x14 - result; /*0x690f9c*/
    }
  }
  return result; /*0x690fa0*/
}



// ==== 0x00690FC0  ScoreAnimClass::Release  this=ScoreAnimClass  sig=csp ====
void __thiscall ScoreAnimClass::Release(ScoreAnimClass *this)
{
  if ( this->ScoreAnimClass_field_0x0C == -1 ) /*0x690fc7*/
    this->ScoreAnimClass_field_0x0C = Timer::GetTicks(); /*0x690fd1*/
}



// ==== 0x00690FE0  ScoreAnimClass::Constructor_ScoreAnimClass  this=ScoreAnimClass  sig=csp ====
_DWORD *__thiscall ScoreAnimClass::Constructor_ScoreAnimClass(ScoreAnimClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &ScoreAnimClass::`vftable'; /*0x690fe9*/
  if ( (a2 & 1) != 0 ) /*0x690fef*/
    __3_YAXPAX_Z(this); /*0x690ff2*/
  return this->__pad_0; /*0x690ffc*/
}



// ==== 0x00691000  ScoreTimeClass::Constructor_ScoreAnimClass_0  this=ScoreTimeClass  sig=csp ====
_DWORD *__thiscall ScoreAnimClass::Constructor_ScoreAnimClass_0(ScoreTimeClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &ScoreAnimClass::`vftable'; /*0x691009*/
  if ( (a2 & 1) != 0 ) /*0x69100f*/
    __3_YAXPAX_Z(this); /*0x691012*/
  return this->__pad_0; /*0x69101c*/
}



// ==== 0x00691020  ScorePrintClass::Constructor_ScoreAnimClass_1  this=ScorePrintClass  sig=csp ====
_DWORD *__thiscall ScoreAnimClass::Constructor_ScoreAnimClass_1(ScorePrintClass *this, char a2)
{
  this->m_0 = (int)&ScoreAnimClass::`vftable'; /*0x691029*/
  if ( (a2 & 1) != 0 ) /*0x69102f*/
    __3_YAXPAX_Z(this); /*0x691032*/
  return &this->m_0; /*0x69103c*/
}



// ==== 0x00691040  ScoreFontClass::QueryInterface  this=ScoreFontClass  sig=csp ====
_DWORD *__thiscall ScoreFontClass::QueryInterface(ScoreFontClass *this, char a2)
{
  void *ScoreFontClass_field_0x0C; // eax
  char *v4; // eax

  ScoreFontClass_field_0x0C = (void *)this->ScoreFontClass_field_0x0C; /*0x691046*/
  *(_DWORD *)this->__pad_0 = &ScoreFontClass::`vftable'; /*0x691049*/
  if ( ScoreFontClass_field_0x0C && this->q004 == 1 ) /*0x691057*/
  {
    __3_YAXPAX_Z(ScoreFontClass_field_0x0C); /*0x69105a*/
    this->ScoreFontClass_field_0x0C = 0; /*0x691062*/
    this->q004 = 0; /*0x691065*/
  }
  if ( !--dword_B0558C ) /*0x691073*/
  {
    v4 = (char *)&byte_B05594; /*0x691075*/
    do /*0x691087*/
    {
      *((_DWORD *)v4 - 1) = 0; /*0x69107a*/
      *v4 = 0; /*0x69107d*/
      v4 += 8; /*0x69107f*/
    }
    while ( (int)v4 < (int)byte_B055AC ); /*0x691087*/
  }
  if ( (a2 & 1) != 0 ) /*0x69108e*/
    __3_YAXPAX_Z(this); /*0x691091*/
  return this->__pad_0; /*0x69109b*/
}



// ==== 0x006910A0  ScoreFullFontClass::Constructor_ScoreFontClass  this=ScoreFullFontClass  sig=csp ====
_DWORD *__thiscall ScoreAnimClass::Constructor_ScoreFontClass(ScoreFullFontClass *this, char a2)
{
  void *v3; // eax
  char *v4; // eax

  v3 = (void *)this->field_C; /*0x6910a6*/
  *(_DWORD *)this->__pad_0 = &ScoreFontClass::`vftable'; /*0x6910a9*/
  if ( v3 && this->q010 == 1 ) /*0x6910b7*/
  {
    __3_YAXPAX_Z(v3); /*0x6910ba*/
    this->field_C = 0; /*0x6910c2*/
    this->q010 = 0; /*0x6910c5*/
  }
  if ( !--dword_B0558C ) /*0x6910d3*/
  {
    v4 = (char *)&byte_B05594; /*0x6910d5*/
    do /*0x6910e7*/
    {
      *((_DWORD *)v4 - 1) = 0; /*0x6910da*/
      *v4 = 0; /*0x6910dd*/
      v4 += 8; /*0x6910df*/
    }
    while ( (int)v4 < (int)byte_B055AC ); /*0x6910e7*/
  }
  if ( (a2 & 1) != 0 ) /*0x6910ee*/
    __3_YAXPAX_Z(this); /*0x6910f1*/
  return this->__pad_0; /*0x6910fb*/
}



// ==== 0x00691100  ScoreBigFontClass::Constructor_ScoreFontClass  this=ScoreBigFontClass  sig=csp ====
_DWORD *__thiscall ScoreFontClass::Constructor_ScoreFontClass(ScoreBigFontClass *this, char a2)
{
  void *v3; // eax
  char *v4; // eax

  v3 = (void *)this->field_C; /*0x691106*/
  *(_DWORD *)this->__pad_0 = &ScoreFontClass::`vftable'; /*0x691109*/
  if ( v3 && this->q010 == 1 ) /*0x691117*/
  {
    __3_YAXPAX_Z(v3); /*0x69111a*/
    this->field_C = 0; /*0x691122*/
    this->q010 = 0; /*0x691125*/
  }
  if ( !--dword_B0558C ) /*0x691133*/
  {
    v4 = (char *)&byte_B05594; /*0x691135*/
    do /*0x691147*/
    {
      *((_DWORD *)v4 - 1) = 0; /*0x69113a*/
      *v4 = 0; /*0x69113d*/
      v4 += 8; /*0x69113f*/
    }
    while ( (int)v4 < (int)byte_B055AC ); /*0x691147*/
  }
  if ( (a2 & 1) != 0 ) /*0x69114e*/
    __3_YAXPAX_Z(this); /*0x691151*/
  return this->__pad_0; /*0x69115b*/
}



// ==== 0x00691160  VectorClass::PushBack2  this=VectorClass  sig=csp ====
char __thiscall VectorClass::PushBack2(DynamicVectorClass *this, _DWORD *a2)
{
  int Capacity; // ecx
  int CapacityIncrement; // eax
  int Count; // eax
  int Items; // edx

  Capacity = this->Capacity; /*0x691163*/
  if ( this->Count >= Capacity ) /*0x69116b*/
  {
    if ( !this->IsAllocated[0] && Capacity ) /*0x691176*/
      return 0; /*0x691176*/
    CapacityIncrement = this->CapacityIncrement; /*0x691178*/
    if ( CapacityIncrement <= 0 /*0x691188*/
      || !(*(unsigned __int8 (__thiscall **)(DynamicVectorClass *, int, _DWORD))(this->vtable0 + 8))(
            this,
            Capacity + CapacityIncrement,
            0) )
    {
      return 0; /*0x69118f*/
    }
  }
  Count = this->Count; /*0x691195*/
  Items = this->Items; /*0x691198*/
  this->Count = Count + 1; /*0x69119e*/
  *(_DWORD *)(Items + 4 * Count) = *a2; /*0x6911a8*/
  return 1; /*0x691191*/
}



// ==== 0x006911B0  sub_6911B0  this=-  sig=ida-proto ====
void sub_6911B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6911bc*/
  dbl_B055C8 = Math::Sqrt(v0 + v0); /*0x6911ce*/
}



// ==== 0x006911E0  sub_6911E0  this=-  sig=ida-proto ====
void sub_6911E0()
{
  dbl_B05618 = dbl_B055C8 / 60.0; /*0x6911ec*/
}



// ==== 0x00691200  sub_691200  this=-  sig=ida-proto ====
void sub_691200()
{
  dbl_B05600 = 1.0 / dbl_B05618; /*0x69120c*/
}



// ==== 0x00691220  sub_691220  this=-  sig=ida-proto ====
void sub_691220()
{
  dbl_B055F8 = 0.0174532925199433 * 45.0; /*0x69122c*/
}



// ==== 0x00691240  sub_691240  this=-  sig=ida-proto ====
void sub_691240()
{
  dbl_B055D0 = 0.0174532925199433 * 60.0; /*0x69124c*/
}



// ==== 0x00691260  sub_691260  this=-  sig=ida-proto ====
void sub_691260()
{
  unk_B055A8 = 0.0174532925199433 * 90.0; /*0x69126c*/
}



// ==== 0x00691280  sub_691280  this=-  sig=ida-proto ====
__int64 sub_691280()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_B055A8 - dbl_B055D0); /*0x691292*/
  result = Math::RoundToInt(v0 * dbl_B055C8 * 0.5); /*0x6912a6*/
  dword_B05620 = result; /*0x6912ab*/
  return result; /*0x6912b0*/
}



// ==== 0x006912C0  sub_6912C0  this=-  sig=ida-proto ====
void sub_6912C0()
{
  dbl_B055D8 = Math::ArcTan((double)dword_B05620 * 0.00390625); /*0x6912d7*/
}



// ==== 0x006912F0  sub_6912F0  this=-  sig=ida-proto ====
void sub_6912F0()
{
  dbl_B055F0 = Math::ArcTan((double)(2 * dword_B05620) / dbl_B055C8); /*0x691312*/
}



// ==== 0x00691320  sub_691320  this=-  sig=ida-proto ====
__int64 sub_691320()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B05620) + 0.5); /*0x69133b*/
  dword_B05614 = result; /*0x691340*/
  return result; /*0x691346*/
}



// ==== 0x00691350  sub_691350  this=-  sig=ida-proto ====
int sub_691350()
{
  word_B055C0 = 0; /*0x691352*/
  word_B055C2 = 0; /*0x691358*/
  return 0; /*0x69135e*/
}



// ==== 0x00691360  sub_691360  this=-  sig=ida-proto ====
int sub_691360()
{
  dword_B055E0 = 0; /*0x691362*/
  dword_B055E4 = 0; /*0x691367*/
  dword_B055E8 = 0; /*0x69136c*/
  return 0; /*0x691371*/
}



// ==== 0x00691380  sub_691380  this=-  sig=ida-proto ====
int sub_691380()
{
  dword_B05610 = 0; /*0x691385*/
  dword_B05608 = 128; /*0x69138f*/
  dword_B0560C = 128; /*0x691394*/
  return 128; /*0x691399*/
}



// ==== 0x006913A0  sub_6913A0  this=-  sig=ida-proto ====
int sub_6913A0()
{
  dword_B055B0 = 0; /*0x6913a2*/
  dword_B055B4 = 0; /*0x6913a7*/
  dword_B055B8 = 0; /*0x6913ac*/
  dword_B055BC = 0; /*0x6913b1*/
  return 0; /*0x6913b6*/
}



// ==== 0x006913C0  ScriptClass::Construct  this=ScriptClass  sig=csp ====
AbstractClass *__thiscall ScriptClass::Construct(ScriptClass *this, int a2)
{
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x6913c3*/
  this->field28 = 0; /*0x6913cc*/
  this->buildingType = (ScriptTypeClass *)a2; /*0x6913d3*/
  this->idxCurrentLine = -1; /*0x6913d6*/
  this->AbstractClass = &ScriptClass::`vftable'; /*0x6913dd*/
  this->? = &ScriptClass::`vftable'; /*0x6913e3*/
  this->? = &ScriptClass::`vftable'; /*0x6913ea*/
  this->? = &ScriptClass::`vftable'; /*0x6913f1*/
  if ( dword_8872C0 < dword_8872B8 /*0x69142f*/
    || (byte_8872BD || !dword_8872B8)
    && dword_8872C4 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8872B0 + 8))(
         &dword_8872B0,
         dword_8872B8 + dword_8872C4,
         0) )
  {
    v3 = dword_8872C0++; /*0x69143c*/
    *((_DWORD *)dword_8872B4 + v3) = this; /*0x69144b*/
  }
  return (AbstractClass *)this; /*0x691450*/
}



// ==== 0x006914E0  ScriptClass::PowerDrainUpdate  this=ScriptClass  sig=csp ====
int __thiscall ScriptClass::PowerDrainUpdate(ScriptClass *this, int a2)
{
  AbstractClass::ProcessPower((AbstractClass *)this); /*0x6914e9*/
  return Power::TimerProcess(this->idxCurrentLine); /*0x6914f9*/
}



// ==== 0x00691500  SessionClass::GetEntry  this=AbstractClass  sig=csp ====
_DWORD *__thiscall SessionClass::GetEntry(SessionClass *this, _DWORD *a2)
{
  int v2; // edx
  int v4; // ecx

  v2 = this->Config[5]; /*0x691500*/
  if ( v2 == -1 ) /*0x691506*/
  {
    *a2 = -1; /*0x691510*/
    a2[1] = 0; /*0x691512*/
    return a2; /*0x691508*/
  }
  else
  {
    v4 = this->Config[3]; /*0x691518*/
    *a2 = *(_DWORD *)(v4 + 8 * v2 + 164); /*0x691527*/
    a2[1] = *(_DWORD *)(v4 + 8 * v2 + 168); /*0x691531*/
    return a2; /*0x69151b*/
  }
}



// ==== 0x00691540  ScriptClass::GetNextAction  this=ScriptClass  sig=csp ====
_DWORD *__thiscall ScriptClass::GetNextAction(ScriptClass *this, _DWORD *a2)
{
  ScriptTypeClass *buildingType; // edx
  int idxCurrentLine; // ecx
  _DWORD *result; // eax

  buildingType = this->buildingType; /*0x691540*/
  idxCurrentLine = this->idxCurrentLine; /*0x691543*/
  result = a2; /*0x691554*/
  if ( idxCurrentLine + 1 < buildingType->scriptActions[28] ) /*0x691552*/
  {
    *a2 = buildingType->scriptActions[2 * idxCurrentLine + 31]; /*0x691571*/
    a2[1] = buildingType->scriptActions[2 * idxCurrentLine + 32]; /*0x69157a*/
  }
  else
  {
    *a2 = -1; /*0x69155e*/
    a2[1] = 0; /*0x691560*/
  }
  return result; /*0x69155d*/
}



// ==== 0x00691590  ObjectClass::SetLandTypeMap  this=TOP  sig=csp ====
int __thiscall SetLandTypeMap(ObjectClass *this)
{
  int result; // eax

  this->fallRate = -1; /*0x691590*/
  LOBYTE(result) = 1; /*0x691597*/
  return result; /*0x691599*/
}



// ==== 0x006915A0  TeamClass::SetField11  this=TeamClass  sig=csp ====
char __thiscall TeamClass::SetField11(TeamClass *this, int a2)
{
  this->owner = (HouseClass *)a2; /*0x6915a4*/
  return 1; /*0x6915a9*/
}



// ==== 0x006915B0  TeamClass::Check  this=TOP  sig=csp ====
BOOL __thiscall TeamClass::Check(TeamClass *this)
{
  HouseClass *v1; // eax

  v1 = (HouseClass *)((char *)&this->owner->AbstractClass + 1); /*0x6915b3*/
  this->owner = v1; /*0x6915b4*/
  return (unsigned int)v1 < this->buildingType[1].TeamTypeClass_field_2C; /*0x6915c4*/
}



// ==== 0x006915D0  SessionClass::SetField  this=ScriptClass  sig=csp ====
int __thiscall SessionClass::SetField(SessionClass *this)
{
  return this->Config[5] < *(_DWORD *)(this->Config[3] + 160); /*0x6915e0*/
}



// ==== 0x006915F0  ScriptClass::ddtor  this=ScriptClass  sig=csp ====
int __stdcall ScriptClass::ddtor(ScriptClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6915f6*/
    return -2147467261; /*0x6915f8*/
  *a2 = 1123264070; /*0x691606*/
  a2[1] = 298977161; /*0x69160e*/
  a2[2] = 1610655148; /*0x691617*/
  a2[3] = unk_7E97AC; /*0x691620*/
  return 0; /*0x6915fd*/
}



// ==== 0x00691630  ScriptClass::LoadState  this=ScriptClass  sig=csp ====
int __stdcall ScriptClass::LoadState(ScriptClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x69163b*/
  if ( result >= 0 ) /*0x691642*/
  {
    if ( this ) /*0x691646*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x69164f*/
      this->AbstractClass = &ScriptClass::`vftable'; /*0x691654*/
      this->? = &ScriptClass::`vftable'; /*0x69165a*/
      this->? = &ScriptClass::`vftable'; /*0x691661*/
      this->? = &ScriptClass::`vftable'; /*0x691668*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->buildingType); /*0x691678*/
    return 0; /*0x69167d*/
  }
  return result; /*0x69167f*/
}



// ==== 0x00691690  ScriptClass::SaveState  this=ScriptClass  sig=csp ====
int __stdcall ScriptClass::SaveState(ScriptClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x69169f*/
  if ( result >= 0 ) /*0x6916a6*/
    return 0; /*0x6916a8*/
  return result; /*0x6916aa*/
}



// ==== 0x006916B0  ScriptTypeClass::Constructor  this=ScriptTypeClass  sig=csp ====
_DWORD *__thiscall ScriptTypeClass::Constructor(ScriptTypeClass *this, char *Source)
{
  int v3; // ecx
  char v4; // al
  int v5; // eax
  ScriptTypeClass **v6; // edx

  AbstractTypeClass::Constructor((int *)this, Source); /*0x6916b8*/
  this->scriptActions[27] = 0; /*0x6916bd*/
  this->scriptActions[28] = 0; /*0x6916c7*/
  this->AbstractClass = &ScriptTypeClass::`vftable'; /*0x6916d1*/
  this->? = &ScriptTypeClass::`vftable'; /*0x6916d7*/
  this->? = &ScriptTypeClass::`vftable'; /*0x6916de*/
  this->? = &ScriptTypeClass::`vftable'; /*0x6916e5*/
  v3 = *(_DWORD *)&FootClass_Array.?; /*0x6916ec*/
  if ( *(int *)&FootClass_Array.? < FootClass_Array.?[6] /*0x69172e*/
    || (BYTE1(FootClass_Array.?[7]) || !FootClass_Array.?[6])
    && *(int *)&FootClass_Array.? > 0
    && (v4 = (*(int (__thiscall **)(int *, int, _DWORD))(FootClass_Array.?[4] + 8))(
               &FootClass_Array.?[4],
               FootClass_Array.?[6] + *(_DWORD *)&FootClass_Array.?,
               0),
        v3 = *(_DWORD *)&FootClass_Array.?,
        v4) )
  {
    *(_DWORD *)&FootClass_Array.? = v3 + 1; /*0x691733*/
    *(_DWORD *)(FootClass_Array.?[5] + 4 * v3) = this; /*0x69173f*/
    v3 = *(_DWORD *)&FootClass_Array.?; /*0x691742*/
  }
  v5 = 0; /*0x691748*/
  if ( v3 <= 0 ) /*0x69174c*/
  {
LABEL_11:
    v5 = -1; /*0x691760*/
  }
  else
  {
    v6 = (ScriptTypeClass **)FootClass_Array.?[5]; /*0x69174e*/
    while ( *v6 != this ) /*0x691756*/
    {
      ++v5; /*0x691758*/
      ++v6; /*0x691759*/
      if ( v5 >= v3 ) /*0x69175e*/
        goto LABEL_11; /*0x69175e*/
    }
  }
  this->scriptActions[26] = v5; /*0x691763*/
  return &this->AbstractClass; /*0x69176b*/
}



// ==== 0x006917F0  ScriptTypeClass::GetParameter  this=ScriptTypeClass  sig=csp ====
char __thiscall ScriptTypeClass::GetParameter(ScriptTypeClass *this, char *a2)
{
  int v3; // esi
  ScriptTypeClass *v4; // ebx
  char Buffer[16]; // [esp+8h] [ebp-90h] BYREF
  char Source[128]; // [esp+18h] [ebp-80h] BYREF

  if ( !AbstractTypeClass::WriteINI((AbstractTypeClass *)this, a2) ) /*0x691802*/
    return 0; /*0x691885*/
  v3 = 0; /*0x69180d*/
  v4 = (ScriptTypeClass *)&this->scriptActions[29]; /*0x69180f*/
  do /*0x691873*/
  {
    sprintf(Buffer, "%d", v3); /*0x691820*/
    String::Trim(Buffer); /*0x69182c*/
    if ( v3 >= this->scriptActions[28] ) /*0x691837*/
    {
      INIClass::ClearSection((int *)a2, (int)&this->arrayIndex, (unsigned __int8 *)Buffer); /*0x691867*/
    }
    else
    {
      ScriptTypeClass::FormatToString(v4, Source); /*0x691840*/
      INIClass::SetString(a2, (unsigned __int8 *)&this->arrayIndex, Buffer, Source); /*0x691855*/
    }
    ++v3; /*0x69186c*/
    v4 = (ScriptTypeClass *)((char *)v4 + 8); /*0x69186d*/
  }
  while ( v3 < 50 ); /*0x691873*/
  return 1; /*0x691877*/
}



// ==== 0x006918A0  ScriptTypeClass::GetEvent  this=ScriptTypeClass  sig=csp ====
char __thiscall ScriptTypeClass::GetEvent(ScriptTypeClass *this, unsigned __int8 ***a2)
{
  int v3; // edi
  int v4; // eax
  _DWORD v6[2]; // [esp+8h] [ebp-98h] BYREF
  char Buffer[16]; // [esp+10h] [ebp-90h] BYREF
  char Destination[128]; // [esp+20h] [ebp-80h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x6918b3*/
  if ( !(unsigned __int8)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)this, a2) ) /*0x6918bb*/
    return 0; /*0x691963*/
  v3 = 0; /*0x6918ca*/
  this->scriptActions[28] = 0; /*0x6918cf*/
  do /*0x691951*/
  {
    sprintf(Buffer, "%d", v3); /*0x6918e0*/
    String::Trim(Buffer); /*0x6918ec*/
    if ( INIClass::GetString( /*0x69190f*/
           (INIClass *)a2,
           (unsigned __int8 *)&this->arrayIndex,
           (unsigned __int8 *)Buffer,
           &g_INI_DefaultBuffer,
           Destination,
           128) > 0 )
    {
      ScriptTypeClass::SetField((ScriptTypeClass *)v6, Destination); /*0x69191a*/
      v4 = this->scriptActions[28]; /*0x69191f*/
      if ( v4 < 50 ) /*0x691928*/
      {
        this->scriptActions[2 * v4 + 29] = v6[0]; /*0x69192e*/
        this->scriptActions[2 * v4 + 30] = v6[1]; /*0x691939*/
        ++this->scriptActions[28]; /*0x691947*/
      }
    }
    ++v3; /*0x69194d*/
  }
  while ( v3 < 50 ); /*0x691951*/
  return 1; /*0x691955*/
}



// ==== 0x00691970  ScoreScreenClass::ProcessFrame  this=INIClass  sig=csp ====
int __fastcall ScoreScreenClass::ProcessFrame(INIClass *a1, int a2)
{
  int result; // eax
  int v4; // esi
  int v5; // ebp
  unsigned __int8 *StringByIndex; // eax
  int v7; // esi
  int *v8; // eax
  int *v9; // esi
  int v10; // eax
  bool v11; // zf
  int v12; // ecx
  int **v13; // edx
  int v15; // [esp+14h] [ebp-1Ch]
  char Source[24]; // [esp+18h] [ebp-18h] BYREF

  result = INIClass::GetKeyCount(a1->__pad_0, g_INI_Key_ScriptTypes); /*0x691982*/
  v4 = result; /*0x691987*/
  v5 = 0; /*0x69198b*/
  v15 = result; /*0x69198f*/
  if ( result > 0 ) /*0x691993*/
  {
    while ( 1 ) /*0x6919a1*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1->__pad_0, g_INI_Key_ScriptTypes, v5); /*0x6919a1*/
      result = INIClass::GetString(a1, g_INI_Key_ScriptTypes, StringByIndex, &g_INI_DefaultBuffer, Source, 24); /*0x6919ba*/
      if ( result > 0 ) /*0x6919c1*/
        break; /*0x6919c1*/
LABEL_24:
      if ( ++v5 >= v4 ) /*0x691b1a*/
        return result; /*0x691b1a*/
    }
    if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6919eb*/
      goto LABEL_22; /*0x6919eb*/
    v7 = 0; /*0x691a00*/
    if ( *(int *)&FootClass_Array.? > 0 ) /*0x691a04*/
    {
      while ( _strcmpi((char *)(*(_DWORD *)(FootClass_Array.?[5] + 4 * v7) + 36), Source) ) /*0x691a22*/
      {
        if ( ++v7 >= *(int *)&FootClass_Array.? ) /*0x691a30*/
          goto LABEL_8; /*0x691a30*/
      }
      v9 = *(int **)(FootClass_Array.?[5] + 4 * v7); /*0x691afa*/
      goto LABEL_23; /*0x691afd*/
    }
LABEL_8:
    v8 = (int *)__2_YAPAXI_Z(0x234u); /*0x691a37*/
    v9 = v8; /*0x691a3c*/
    if ( v8 ) /*0x691a43*/
    {
      AbstractTypeClass::Constructor(v8, Source); /*0x691a50*/
      v9[39] = 0; /*0x691a55*/
      v9[40] = 0; /*0x691a5b*/
      *v9 = (int)&ScriptTypeClass::`vftable'; /*0x691a61*/
      v9[1] = (int)&ScriptTypeClass::`vftable'; /*0x691a67*/
      v9[2] = (int)&ScriptTypeClass::`vftable'; /*0x691a6e*/
      v9[3] = (int)&ScriptTypeClass::`vftable'; /*0x691a75*/
      v10 = *(_DWORD *)&FootClass_Array.?; /*0x691a7c*/
      if ( *(int *)&FootClass_Array.? < FootClass_Array.?[6] /*0x691ab9*/
        || (BYTE1(FootClass_Array.?[7]) || !FootClass_Array.?[6])
        && *(int *)&FootClass_Array.? > 0
        && (v11 = (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(FootClass_Array.?[4] + 8))(
                    &FootClass_Array.?[4],
                    FootClass_Array.?[6] + *(_DWORD *)&FootClass_Array.?,
                    0) == 0,
            v10 = *(_DWORD *)&FootClass_Array.?,
            !v11) )
      {
        *(_DWORD *)&FootClass_Array.? = v10 + 1; /*0x691ac4*/
        *(_DWORD *)(FootClass_Array.?[5] + 4 * v10) = v9; /*0x691ac9*/
        v10 = *(_DWORD *)&FootClass_Array.?; /*0x691acc*/
      }
      v12 = 0; /*0x691ad1*/
      if ( v10 <= 0 ) /*0x691ad5*/
      {
LABEL_19:
        v12 = -1; /*0x691ae9*/
      }
      else
      {
        v13 = (int **)FootClass_Array.?[5]; /*0x691ad7*/
        while ( *v13 != v9 ) /*0x691adf*/
        {
          ++v12; /*0x691ae1*/
          ++v13; /*0x691ae2*/
          if ( v12 >= v10 ) /*0x691ae7*/
            goto LABEL_19; /*0x691ae7*/
        }
      }
      v9[38] = v12; /*0x691aec*/
    }
    else
    {
LABEL_22:
      v9 = 0; /*0x691aff*/
    }
LABEL_23:
    result = (*(int (__thiscall **)(int *, INIClass *))(*v9 + 100))(v9, a1); /*0x691b01*/
    v9[39] = a2; /*0x691b0d*/
    v4 = v15; /*0x691b13*/
    goto LABEL_24; /*0x691b13*/
  }
  return result; /*0x691b20*/
}



// ==== 0x00691B30  nullsub_34  this=-  sig=ida-proto ====
void nullsub_34()
{
  ; /*0x691b30*/
}



// ==== 0x00691C00  TeamTypeClass::CreateScriptType  this=AbstractTypeClass  sig=csp ====
int *__thiscall TeamTypeClass::CreateScriptType(char *Source)
{
  int v2; // esi
  int *v3; // eax
  int *v4; // esi
  int v5; // ecx
  char v6; // al
  int v7; // eax
  int **v8; // edx

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x691c20*/
    return 0; /*0x691c2a*/
  v2 = 0; /*0x691c35*/
  if ( dword_8B41D8 <= 0 ) /*0x691c39*/
  {
LABEL_6:
    v3 = (int *)__2_YAPAXI_Z(0x234u); /*0x691c62*/
    v4 = v3; /*0x691c6c*/
    if ( v3 ) /*0x691c73*/
    {
      AbstractTypeClass::Constructor(v3, Source); /*0x691c7c*/
      v4[39] = 0; /*0x691c81*/
      v4[40] = 0; /*0x691c8b*/
      *v4 = (int)&ScriptTypeClass::`vftable'; /*0x691c95*/
      v4[1] = (int)&ScriptTypeClass::`vftable'; /*0x691c9b*/
      v4[2] = (int)&ScriptTypeClass::`vftable'; /*0x691ca2*/
      v4[3] = (int)&ScriptTypeClass::`vftable'; /*0x691ca9*/
      v5 = dword_8B41D8; /*0x691cb0*/
      if ( dword_8B41D8 < dword_8B41D0 /*0x691cf1*/
        || (byte_8B41D5 || !dword_8B41D0)
        && dword_8B41DC > 0
        && (v6 = (*(int (__thiscall **)(int *, int, _DWORD))(dword_8B41C8 + 8))(
                   &dword_8B41C8,
                   dword_8B41D0 + dword_8B41DC,
                   0),
            v5 = dword_8B41D8,
            v6) )
      {
        dword_8B41D8 = v5 + 1; /*0x691cf6*/
        *((_DWORD *)dword_8B41CC + v5) = v4; /*0x691d02*/
        v5 = dword_8B41D8; /*0x691d05*/
      }
      v7 = 0; /*0x691d0b*/
      if ( v5 <= 0 ) /*0x691d0f*/
      {
LABEL_17:
        v7 = -1; /*0x691d23*/
      }
      else
      {
        v8 = (int **)dword_8B41CC; /*0x691d11*/
        while ( *v8 != v4 ) /*0x691d19*/
        {
          ++v7; /*0x691d1b*/
          ++v8; /*0x691d1c*/
          if ( v7 >= v5 ) /*0x691d21*/
            goto LABEL_17; /*0x691d21*/
        }
      }
      v4[38] = v7; /*0x691d26*/
      return v4; /*0x691d30*/
    }
    return 0; /*0x691d3e*/
  }
  while ( _strcmpi((char *)(*((_DWORD *)dword_8B41CC + v2) + 36), Source) ) /*0x691c52*/
  {
    if ( ++v2 >= dword_8B41D8 ) /*0x691c60*/
      goto LABEL_6; /*0x691c60*/
  }
  return (int *)*((_DWORD *)dword_8B41CC + v2); /*0x691d2e*/
}



// ==== 0x00691D50  ScriptTypeClass::GetClassIdentifier  this=ScriptTypeClass  sig=csp ====
int __stdcall ScriptTypeClass::GetClassIdentifier(ScriptTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x691d56*/
    return -2147467261; /*0x691d58*/
  *a2 = 1123264071; /*0x691d66*/
  a2[1] = 298977161; /*0x691d6e*/
  a2[2] = 1610655148; /*0x691d77*/
  a2[3] = unk_7E97BC; /*0x691d80*/
  return 0; /*0x691d5d*/
}



// ==== 0x00691D90  ScriptTypeClass::LoadTypeData  this=ScriptTypeClass  sig=csp ====
int __stdcall ScriptTypeClass::LoadTypeData(ScriptTypeClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x691d9b*/
  if ( result >= 0 ) /*0x691da2*/
  {
    if ( this ) /*0x691da6*/
    {
      AbstractTypeClass::Init((int)this, (int)&a2); /*0x691daf*/
      this->AbstractClass = &ScriptTypeClass::`vftable'; /*0x691db4*/
      this->? = &ScriptTypeClass::`vftable'; /*0x691dba*/
      this->? = &ScriptTypeClass::`vftable'; /*0x691dc1*/
      this->? = &ScriptTypeClass::`vftable'; /*0x691dc8*/
    }
    return 0; /*0x691dcf*/
  }
  return result; /*0x691dd1*/
}



// ==== 0x00691DE0  ScriptTypeClass::SaveToINI  this=ScriptTypeClass  sig=csp ====
int __stdcall ScriptTypeClass::SaveToINI(ScriptTypeClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x691def*/
  if ( result >= 0 ) /*0x691df6*/
    return 0; /*0x691df8*/
  return result; /*0x691dfa*/
}



// ==== 0x00691E00  ScriptTypeClass::PowerDrainUpdate  this=ScriptTypeClass  sig=csp ====
int __thiscall ScriptTypeClass::PowerDrainUpdate(ScriptTypeClass *this, int *a2)
{
  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x691e09*/
  return Power::TimerProcess(this->scriptActions[28]); /*0x691e1c*/
}



// ==== 0x00691E30  ScriptTypeClass::GetAction  this=ScriptTypeClass  sig=csp ====
void __thiscall ScriptTypeClass::GetAction(ScriptTypeClass *this, int a2, int a3)
{
  int v4; // ecx
  int v5; // edi
  int v6; // esi
  int *v7; // edx
  int v8; // eax
  _DWORD *i; // ecx

  if ( a2 ) /*0x691e3c*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 35 ) /*0x691e49*/
    {
      v4 = -1; /*0x691e51*/
      v5 = 0; /*0x691e54*/
      if ( this->scriptActions[28] > 0 ) /*0x691e58*/
      {
        v6 = *(_DWORD *)&stru_A8EB00.?[204]; /*0x691e5a*/
        v7 = &this->scriptActions[30]; /*0x691e60*/
        do /*0x691e66*/
        {
          if ( *(v7 - 1) == 18 ) /*0x691e6a*/
          {
            if ( v4 == -1 ) /*0x691e6f*/
            {
              v8 = 0; /*0x691e71*/
              if ( v6 <= 0 ) /*0x691e75*/
                return; /*0x691e75*/
              for ( i = *(_DWORD **)&stru_A8EB00.?[192]; *i != a2; ++i ) /*0x691e77*/
              {
                if ( ++v8 >= v6 ) /*0x691e87*/
                  return; /*0x691e87*/
              }
              v4 = v8; /*0x691e8e*/
              if ( v8 == -1 ) /*0x691e90*/
                return; /*0x691e90*/
            }
            if ( *v7 > v4 ) /*0x691e96*/
            {
              --*v7; /*0x691e99*/
LABEL_17:
              v6 = *(_DWORD *)&stru_A8EB00.?[204]; /*0x691ea5*/
              goto LABEL_18; /*0x691ea5*/
            }
            if ( *v7 == v4 ) /*0x691e9d*/
            {
              *v7 = 0; /*0x691e9f*/
              goto LABEL_17; /*0x691e9f*/
            }
          }
LABEL_18:
          ++v5; /*0x691eab*/
          v7 += 2; /*0x691eb2*/
        }
        while ( v5 < this->scriptActions[28] ); /*0x691e66*/
      }
    }
  }
}



// ==== 0x00691EC0  ScriptClass::StubReturn26  this=ScriptClass  sig=csp ====
int ScriptClass::StubReturn26(ScriptClass *this)
{
  return 26; /*0x691ec5*/
}



// ==== 0x00691ED0  ScriptClass::StubReturn48  this=ScriptClass  sig=csp ====
int ScriptClass::StubReturn48(ScriptClass *this)
{
  return 48; /*0x691ed5*/
}



// ==== 0x00691EE0  ScriptClass::ProcessEvent  this=ScriptClass  sig=csp ====
void **__thiscall ScriptClass::ProcessEvent(ScriptClass *this, char a2)
{
  int v3; // eax
  ScriptClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &ScriptClass::`vftable'; /*0x691ee6*/
  this->? = &ScriptClass::`vftable'; /*0x691eec*/
  this->? = &ScriptClass::`vftable'; /*0x691ef3*/
  this->? = &ScriptClass::`vftable'; /*0x691efa*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x691f01*/
  v5 = this; /*0x691f16*/
  v3 = (*(int (__thiscall **)(int *, ScriptClass **))(dword_8872B0 + 16))(&dword_8872B0, &v5); /*0x691f1a*/
  if ( v3 != -1 && v3 < dword_8872C0 && v3 < --dword_8872C0 ) /*0x691f35*/
  {
    do /*0x691f4d*/
    {
      ++v3; /*0x691f3d*/
      *((_DWORD *)dword_8872B4 + v3 - 1) = *((_DWORD *)dword_8872B4 + v3); /*0x691f41*/
    }
    while ( v3 < dword_8872C0 ); /*0x691f4d*/
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x691f51*/
  if ( (a2 & 1) != 0 ) /*0x691f5b*/
    __3_YAXPAX_Z(this); /*0x691f5e*/
  return &this->AbstractClass; /*0x691f68*/
}



// ==== 0x00691F70  ScriptTypeClass::GetTypeIdentifier  this=ScriptTypeClass  sig=csp ====
int ScriptTypeClass::GetTypeIdentifier(ScriptTypeClass *this)
{
  return 27; /*0x691f75*/
}



// ==== 0x00691F80  ScriptTypeClass::GetObjectSize  this=ScriptTypeClass  sig=csp ====
int ScriptTypeClass::GetObjectSize(ScriptTypeClass *this)
{
  return 564; /*0x691f85*/
}



// ==== 0x00691F90  ScriptTypeClass::GetAuxField  this=ScriptTypeClass  sig=csp ====
int __thiscall ScriptTypeClass::GetAuxField(ScriptTypeClass *this)
{
  return this->scriptActions[26]; /*0x691f96*/
}



// ==== 0x00691FA0  ScriptTypeClass::ddtor  this=ScriptTypeClass  sig=csp ====
void **__thiscall ScriptTypeClass::ddtor(ScriptTypeClass *this, char a2)
{
  int v3; // eax
  ScriptTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &ScriptTypeClass::`vftable'; /*0x691fa6*/
  this->? = &ScriptTypeClass::`vftable'; /*0x691fac*/
  this->? = &ScriptTypeClass::`vftable'; /*0x691fb3*/
  this->? = &ScriptTypeClass::`vftable'; /*0x691fba*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x691fc1*/
  v5 = this; /*0x691fd6*/
  v3 = (*(int (__thiscall **)(int *, ScriptTypeClass **))(FootClass_Array.?[4] + 16))(&FootClass_Array.?[4], &v5); /*0x691fda*/
  if ( v3 != -1 && v3 < *(int *)&FootClass_Array.? ) /*0x691fea*/
  {
    --*(_DWORD *)&FootClass_Array.?; /*0x691fef*/
    for ( ; /*0x691ff5*/
          v3 < *(int *)&FootClass_Array.?;
          *(_DWORD *)(FootClass_Array.?[5] + 4 * v3 - 4) = *(_DWORD *)(FootClass_Array.?[5] + 4 * v3) )
    {
      ++v3; /*0x691ffd*/
    }
  }
  AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x692011*/
  if ( (a2 & 1) != 0 ) /*0x69201b*/
    __3_YAXPAX_Z(this); /*0x69201e*/
  return &this->AbstractClass; /*0x692028*/
}



// ==== 0x00692030  sub_692030  this=-  sig=ida-proto ====
int sub_692030()
{
  dword_B05648 = 0; /*0x692032*/
  dword_B0564C = 0; /*0x692037*/
  dword_B05650 = 0; /*0x69203c*/
  dword_B05654 = 0; /*0x692041*/
  return 0; /*0x692046*/
}



// ==== 0x00692050  sub_692050  this=-  sig=ida-proto ====
void sub_692050()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x69205c*/
  dbl_B05660 = Math::Sqrt(v0 + v0); /*0x69206e*/
}



// ==== 0x00692080  sub_692080  this=-  sig=ida-proto ====
void sub_692080()
{
  dbl_B056B8 = dbl_B05660 / 60.0; /*0x69208c*/
}



// ==== 0x006920A0  sub_6920A0  this=-  sig=ida-proto ====
void sub_6920A0()
{
  dbl_B056A0 = 1.0 / dbl_B056B8; /*0x6920ac*/
}



// ==== 0x006920C0  sub_6920C0  this=-  sig=ida-proto ====
void sub_6920C0()
{
  dbl_B05698 = 0.0174532925199433 * 45.0; /*0x6920cc*/
}



// ==== 0x006920E0  sub_6920E0  this=-  sig=ida-proto ====
void sub_6920E0()
{
  dbl_B05668 = 0.0174532925199433 * 60.0; /*0x6920ec*/
}



// ==== 0x00692100  sub_692100  this=-  sig=ida-proto ====
void sub_692100()
{
  dbl_B05630 = 0.0174532925199433 * 90.0; /*0x69210c*/
}



// ==== 0x00692120  sub_692120  this=-  sig=ida-proto ====
__int64 sub_692120()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B05630 - dbl_B05668); /*0x692132*/
  result = Math::RoundToInt(v0 * dbl_B05660 * 0.5); /*0x692146*/
  dword_B056C0 = result; /*0x69214b*/
  return result; /*0x692150*/
}



// ==== 0x00692160  sub_692160  this=-  sig=ida-proto ====
void sub_692160()
{
  dbl_B05670 = Math::ArcTan((double)dword_B056C0 * 0.00390625); /*0x692177*/
}



// ==== 0x00692190  sub_692190  this=-  sig=ida-proto ====
void sub_692190()
{
  dbl_B05688 = Math::ArcTan((double)(2 * dword_B056C0) / dbl_B05660); /*0x6921b2*/
}



// ==== 0x006921C0  sub_6921C0  this=-  sig=ida-proto ====
__int64 sub_6921C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B056C0) + 0.5); /*0x6921db*/
  dword_B056B4 = result; /*0x6921e0*/
  return result; /*0x6921e6*/
}



// ==== 0x006921F0  sub_6921F0  this=-  sig=ida-proto ====
int sub_6921F0()
{
  dword_B05658 = 0; /*0x6921f2*/
  return 0; /*0x6921fe*/
}



// ==== 0x00692200  sub_692200  this=-  sig=ida-proto ====
int sub_692200()
{
  dword_B05678 = 0; /*0x692202*/
  dword_B0567C = 0; /*0x692207*/
  dword_B05680 = 0; /*0x69220c*/
  return 0; /*0x692211*/
}



// ==== 0x00692220  sub_692220  this=-  sig=ida-proto ====
int sub_692220()
{
  dword_B056B0 = 0; /*0x692225*/
  dword_B056A8 = 128; /*0x69222f*/
  dword_B056AC = 128; /*0x692234*/
  return 128; /*0x692239*/
}



// ==== 0x00692240  sub_692240  this=-  sig=ida-proto ====
int sub_692240()
{
  dword_B05638 = Timer::GetTicks(); /*0x69224f*/
  dword_B05640 = 0; /*0x692254*/
  return atexit(sub_692270); /*0x692264*/
}



// ==== 0x00692270  sub_692270  this=-  sig=ida-proto ====
void __cdecl sub_692270()
{
  if ( (byte_B05629 & 1) == 0 ) /*0x69227a*/
    byte_B05629 |= 1u; /*0x69227e*/
}



// ==== 0x00692290  ScrollClass::SmallFunc  this=ScrollClass  sig=csp ====
int __thiscall sub_692290(int this)
{
  TabClass::Constructor((_DWORD *)this); /*0x692293*/
  *(_DWORD *)(this + 21832) = 0; /*0x69229a*/
  *(_BYTE *)(this + 21836) = 0; /*0x6922a0*/
  *(_DWORD *)(this + 21840) = 0; /*0x6922a6*/
  *(_DWORD *)(this + 21844) = 0; /*0x6922ac*/
  *(_BYTE *)(this + 21848) = 0; /*0x6922b2*/
  *(_BYTE *)(this + 21850) = 0; /*0x6922b8*/
  *(_BYTE *)(this + 21849) = 1; /*0x6922be*/
  *(_DWORD *)this = &ScrollClass::`vftable'; /*0x6922c5*/
  *(_DWORD *)(this + 21784) = &ScrollClass::`vftable'; /*0x6922cb*/
  return this; /*0x6922d7*/
}



// ==== 0x006922E0  ScrollClass::Scroll  this=ScrollClass  sig=csp ====
int __thiscall ScrollClass::Scroll(ScrollClass *this, int *a2, _DWORD *a3)
{
  TacticalClass::ProcessView((TacticalClass *)this); /*0x6922e3*/
  return BlowStraw_29::Seek((TabClass *)this, a2, a3); /*0x6922f9*/
}



// ==== 0x00692300  Tactical::MouseOver  this=MouseClass  sig=csp ====
int __stdcall Tactical::MouseOver(int *a1, __int16 *a2, int *a3, _DWORD *a4, bool *a5, bool *a6)
{
  int *v6; // edx
  __int16 *v7; // esi
  bool *v8; // edi
  bool *v9; // ecx
  int result; // eax
  int v11; // ebx
  int *v12; // eax
  int v13; // ebx
  int *v14; // eax
  int *v15; // ecx
  int *v16; // edx
  int v17; // edx
  int GroundHeight; // eax
  int v19; // edx
  int v20; // ecx
  bool v21; // al
  bool *v22; // esi
  _DWORD *v23; // eax
  _BYTE *v24; // eax
  _DWORD *v25; // edi
  int v26; // esi
  _DWORD *v27; // eax
  _WORD *v28; // eax
  int v29; // edi
  _DWORD *v30; // eax
  _WORD *v31; // eax
  int v32; // [esp-4h] [ebp-2Ch]
  int v33; // [esp-4h] [ebp-2Ch]
  int v34; // [esp+10h] [ebp-18h] BYREF
  int v35; // [esp+14h] [ebp-14h]
  int v36; // [esp+18h] [ebp-10h]
  _DWORD v37[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v6 = a3; /*0x692307*/
  v7 = a2; /*0x69230e*/
  *a4 = 0; /*0x692312*/
  *(_DWORD *)v7 = dword_B05658; /*0x69231e*/
  *v6 = dword_B05678; /*0x692329*/
  v8 = a5; /*0x692332*/
  v6[1] = dword_B0567C; /*0x692336*/
  v9 = a6; /*0x69233e*/
  v6[2] = dword_B05680; /*0x692342*/
  *v8 = 0; /*0x692345*/
  *v9 = 0; /*0x692348*/
  result = *a1; /*0x69234b*/
  if ( *a1 < 0 ) /*0x692350*/
    goto LABEL_39; /*0x692350*/
  v11 = a1[1]; /*0x692356*/
  if ( v11 < 0 ) /*0x69235b*/
    goto LABEL_39; /*0x69235b*/
  if ( g_TacticalClass_Instance ) /*0x692369*/
  {
    v34 = DSurface_ViewBounds + result; /*0x69237c*/
    v35 = v11 + dword_886FA4; /*0x692380*/
    v12 = Tactical::PixelToCell((int)g_TacticalClass_Instance, &a2, &v34); /*0x69238e*/
    v8 = a5; /*0x692393*/
  }
  else
  {
    v12 = &dword_B05658; /*0x692399*/
  }
  *(_DWORD *)v7 = *v12; /*0x6923a0*/
  if ( g_TacticalClass_Instance ) /*0x6923aa*/
  {
    v13 = a1[1]; /*0x6923ba*/
    v34 = DSurface_ViewBounds + *a1; /*0x6923c1*/
    v35 = v13 + dword_886FA4; /*0x6923c5*/
    v14 = TacticalClass::TransformPixel((int)g_TacticalClass_Instance, v37, &v34); /*0x6923d3*/
    v8 = a5; /*0x6923d8*/
  }
  else
  {
    v14 = &dword_B05678; /*0x6923de*/
  }
  v15 = a3; /*0x6923e3*/
  v16 = a3; /*0x6923e9*/
  *a3 = *v14; /*0x6923eb*/
  v16[1] = v14[1]; /*0x6923f0*/
  v16[2] = v14[2]; /*0x6923f6*/
  result = (int)g_TacticalClass_Instance; /*0x6923f9*/
  if ( g_TacticalClass_Instance && (result = Tactical::IsCellVisible(&dword_87F7E8, v15), (_BYTE)result) ) /*0x692413*/
  {
    v17 = v7[1] << 8; /*0x69242d*/
    v37[0] = (*v7 << 8) + 128; /*0x692430*/
    v37[1] = v17 + 128; /*0x692440*/
    v37[2] = 0; /*0x692444*/
    GroundHeight = Cell::GetGroundHeight(v37); /*0x69244c*/
    v19 = v7[1]; /*0x692454*/
    v20 = (*v7 << 8) + 128; /*0x69245b*/
    v36 = GroundHeight; /*0x692461*/
    v34 = v20; /*0x692465*/
    v35 = (v19 << 8) + 128; /*0x69247c*/
    v21 = (unsigned __int8)Cell::IsPassable(&v34) && g_hWnd; /*0x692492*/
    v22 = a6; /*0x69249b*/
    *a6 = v21; /*0x69249f*/
    *v8 = 0; /*0x6924a1*/
    result = *(_DWORD *)dword_A8B230; /*0x6924aa*/
    if ( (*(_DWORD *)dword_A8B230 & 0x1000) != 0 ) /*0x6924af*/
    {
      v23 = Coord::To_Cell(&dword_87F7E8, &v34); /*0x6924bb*/
      result = (int)Cell::IsBridge(v23); /*0x6924c2*/
      if ( result ) /*0x6924c9*/
      {
        *v8 = *(_BYTE *)(result + 1767); /*0x6924d1*/
      }
      else
      {
        result = (unsigned __int8)Game::Stub3((int)&v34) && g_hWnd; /*0x6924f1*/
        *v8 = result; /*0x6924fa*/
      }
    }
    if ( !*v22 && !*v8 ) /*0x692505*/
    {
      v24 = TacticalClass::IsOccupiedByTechno(g_TacticalClass_Instance, a1); /*0x692515*/
      v25 = a4; /*0x69251a*/
      *a4 = v24; /*0x692520*/
      result = (int)AbstractClass::IsTechnoType(v24); /*0x692522*/
      v26 = result; /*0x692527*/
      if ( result && !*(_BYTE *)(result + 1050) ) /*0x69252d*/
      {
        if ( *(_DWORD *)(result + 544) == 2 /*0x692575*/
          && (v32 = *((_DWORD *)dword_A83D4C + 12),
              v27 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)result + 72))(result, v37),
              v28 = Coord::To_Cell(&dword_87F7E8, v27),
              result = Cell::IsPassableOffset(v28, v32),
              !(_BYTE)result)
          || (result = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 132))(v26), *(_BYTE *)(result + 3226)) )
        {
          *v25 = 0; /*0x69257f*/
        }
      }
      if ( *v25 ) /*0x692585*/
      {
        result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v25 + 44))(*v25); /*0x69258d*/
        if ( result == 6 ) /*0x692593*/
        {
          v29 = *v25; /*0x692595*/
          if ( !*(_BYTE *)(v29 + 1050) ) /*0x692597*/
          {
            if ( *(_BYTE *)(v29 + 1773) == 15 /*0x6925dc*/
              && (v33 = *((_DWORD *)dword_A83D4C + 12),
                  v30 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v26 + 72))(v26, v37),
                  v31 = Coord::To_Cell(&dword_87F7E8, v30),
                  result = Cell::IsPassableOffset(v31, v33),
                  !(_BYTE)result)
              || *(_BYTE *)(*(_DWORD *)(v29 + 1312) + 5889) )
            {
              result = (int)a4; /*0x6925e6*/
              *a4 = 0; /*0x6925ea*/
            }
          }
        }
      }
    }
    LOBYTE(result) = 1; /*0x6925f3*/
  }
  else
  {
LABEL_39:
    LOBYTE(result) = 0; /*0x6925ff*/
  }
  return result; /*0x6925f0*/
}



// ==== 0x00692610  Radar::ScanWaypoints  this=MouseClass  sig=csp ====
int __stdcall Radar_ScanWaypoints(int a1, void *a2, int a3)
{
  void *v3; // esi
  int ClosestEnemy; // eax
  int v6; // esi
  int v7; // eax
  _BYTE *v8; // esi
  char v9; // bl
  _BYTE *v10; // eax
  _BYTE *v11; // edi
  _DWORD *v12; // eax
  _WORD *v13; // eax
  __int16 *v14; // ebp
  _DWORD *v15; // eax
  _WORD *v16; // eax
  char *v17; // eax
  #375 *v18; // eax
  #375 *v19; // eax
  int v20; // eax
  _DWORD *v21; // edi
  bool v22; // bl
  #375 *v23; // ecx
  #375 *v24; // eax
  int v25; // edx
  _DWORD *v26; // eax
  int v27; // eax
  int v28; // [esp-4h] [ebp-24h]
  int v29; // [esp-4h] [ebp-24h]
  int v30; // [esp+10h] [ebp-10h]
  _DWORD v31[2]; // [esp+14h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+1Ch] [ebp-4h]

  v30 = 0; /*0x69261e*/
  if ( dword_A8ECC8 ) /*0x692626*/
  {
    v3 = a2; /*0x692628*/
    if ( a2 ) /*0x69262e*/
    {
      ClosestEnemy = FindRadarClosestEnemy(0, (int)a2); /*0x692634*/
      return (*(int (__thiscall **)(int, void *, _DWORD))(*(_DWORD *)ClosestEnemy + 116))(ClosestEnemy, v3, 0); /*0x692640*/
    }
    else
    {
      v6 = a1; /*0x69264d*/
      v7 = FindRadarClosestEnemy((__int16 *)a1, 0); /*0x692655*/
      return (*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v7 + 112))(v7, v6, a3, 0); /*0x692666*/
    }
  }
  v8 = a2; /*0x692673*/
  v9 = 1; /*0x692677*/
  v10 = AbstractClass::IsTechno(a2); /*0x69267b*/
  v11 = v10; /*0x692680*/
  if ( v10 && !v10[1050] ) /*0x692686*/
  {
    if ( *((_DWORD *)v10 + 136) == 2 /*0x6926cf*/
      && (v28 = *((_DWORD *)dword_A83D4C + 12),
          v12 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v10 + 72))(v10, v31),
          v13 = Coord::To_Cell(&dword_87F7E8, v12),
          !Cell::IsPassableOffset(v13, v28))
      || *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v11 + 132))(v11) + 3226) )
    {
      v9 = 0; /*0x6926d9*/
    }
  }
  v14 = (__int16 *)a1; /*0x6926db*/
  if ( !v8 /*0x692725*/
    || (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 44))(v8) != 6
    || v8[1050]
    || v8[1773] != 15
    || (v29 = *((_DWORD *)dword_A83D4C + 12),
        v15 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v11 + 72))(v11, v31),
        v16 = Coord::To_Cell(&dword_87F7E8, v15),
        Cell::IsPassableOffset(v16, v29)) )
  {
    if ( v9 ) /*0x692734*/
    {
      if ( v8 /*0x692766*/
        && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 312))(v8)
        && ((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 44))(v8) != 6 || !v8[1767])
        && (!v11 || !v11[980]) )
      {
        v30 = 7; /*0x692770*/
      }
      v17 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v14); /*0x69277e*/
      if ( ((_DWORD (__stdcall *)(int, int, int))Radar::FindNearestRadarTarget)( /*0x6927bc*/
             (*v14 << 8) + 128,
             (v14[1] << 8) + 128,
             dword_B056C0 * v17[283]) )
      {
        v30 = 61; /*0x6927c5*/
      }
    }
  }
  if ( byte_880998 ) /*0x6927d4*/
  {
    if ( !v8 /*0x6927fb*/
      || !(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 60))(v8)
      || (v18 = (#375 *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 60))(v8),
          !(unsigned __int8)House::IsHumanPlayer(v18))
      || (v30 = 10, !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 148))(v8)) )
    {
      v30 = 15; /*0x69280d*/
    }
  }
  if ( byte_88099A ) /*0x69281c*/
  {
    v30 = 34; /*0x692820*/
    if ( v8 ) /*0x692828*/
    {
      if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 60))(v8) ) /*0x69282e*/
      {
        v19 = (#375 *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 60))(v8); /*0x692839*/
        if ( (unsigned __int8)House::IsHumanPlayer(v19) ) /*0x69283e*/
        {
          if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 44))(v8) == 6 ) /*0x692851*/
          {
            if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 312))(v8) ) /*0x692857*/
            {
              if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 128))(v8) ) /*0x692865*/
              {
                v20 = *((_DWORD *)v8 + 328); /*0x69286f*/
                if ( *(_BYTE *)(v20 + 5450) ) /*0x692875*/
                {
                  if ( *(int *)(v20 + 3812) > 0 || *(_BYTE *)(v20 + 5491) ) /*0x692889*/
                    v30 = 33; /*0x692893*/
                }
              }
            }
          }
        }
      }
    }
  }
  v21 = Waypoint::FindByCell((char *)dword_A83D4C, v14); /*0x6928a7*/
  if ( byte_88099B ) /*0x6928b0*/
  {
    v22 = Mouse::IsButtonDown(dword_A8EC08) || Mouse::IsButtonDown(dword_A8EC0C); /*0x6928e4*/
    a1 = -1; /*0x6928e8*/
    if ( v21 ) /*0x6928f0*/
      WaypointClass::FindOrCreate((char *)dword_A83D4C, (int)v21, (unsigned int *)&a1, &a2); /*0x692903*/
    if ( dword_8809A4 ) /*0x69290f*/
    {
      v30 = 48; /*0x692911*/
      goto LABEL_65; /*0x692919*/
    }
    if ( v22 ) /*0x692920*/
    {
      v23 = dword_A83D4C; /*0x692922*/
      if ( !v21 ) /*0x69292a*/
      {
LABEL_61:
        if ( *((_DWORD *)v23 + 131) == -1 /*0x692996*/
          || !(unsigned __int8)((int (__fastcall *)(#375 *))Radar::IsRadarTargetEligible)(v23)
          || (v30 = 42, !LayerClass::IsWithinUsableArea(&dword_87F7E8, v14, 1)) )
        {
          v30 = 43; /*0x6929a7*/
        }
        goto LABEL_65; /*0x6929a7*/
      }
      if ( a1 != *((_DWORD *)dword_A83D4C + 131) ) /*0x692938*/
      {
LABEL_59:
        if ( v21 ) /*0x692970*/
        {
          v30 = 46; /*0x692972*/
          goto LABEL_65; /*0x69297a*/
        }
        goto LABEL_61; /*0x692970*/
      }
      if ( (unsigned __int8)((int (__fastcall *)(#375 *))Radar::IsRadarTargetEligible)(dword_A83D4C) /*0x692955*/
        && VectorClass::GetAtChecked(*((int **)dword_A83D4C + a1 + 132), (int)v21) )
      {
        v30 = 47; /*0x69295e*/
        goto LABEL_65; /*0x692966*/
      }
    }
    v23 = dword_A83D4C; /*0x692968*/
    goto LABEL_59; /*0x692968*/
  }
LABEL_65:
  if ( byte_88099C ) /*0x6929b6*/
    v30 = 60; /*0x6929b8*/
  if ( !byte_880999 ) /*0x6929c7*/
    goto LABEL_81; /*0x6929c7*/
  if ( v8
    && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 60))(v8)
    && (v24 = (#375 *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 60))(v8),
        (unsigned __int8)House::IsHumanPlayer(v24))
    && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 152))(v8) )
  {
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 44))(v8) == 6 )
    {
      v30 = (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 128))(v8) != 0 ? 14 : 12;
      goto LABEL_81; /*0x692a24*/
    }
  }
  else
  {
    v25 = v14[1] << 8; /*0x692a3e*/
    v31[0] = (*v14 << 8) + 128; /*0x692a41*/
    v31[1] = v25 + 128; /*0x692a51*/
    GroundHeight = 0; /*0x692a55*/
    GroundHeight = Cell::GetGroundHeight(v31); /*0x692a66*/
    if ( !Cell::IsPassable(v31) /*0x692aa3*/
      && !Game::Stub3((int)v31)
      && *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, v14) + 17) != -1 )
    {
      if ( *(_BYTE *)(*(_DWORD *)&dword_A83D84->TechnoTypeClass[4 /*0x692abc*/
                                                              * *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, v14)
                                                                + 17)]
                    + 680) )
      {
        if ( *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, v14) + 20) != -1 ) /*0x692ad4*/
        {
          v26 = CellCoord::To_CellObj(&dword_87F7E8, v14); /*0x692adc*/
          v30 = 12; /*0x692af4*/
          if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)&dword_A8022C->AbstractClass[4 * v26[20]]) ) /*0x692aed*/
            goto LABEL_81; /*0x692afc*/
        }
      }
    }
  }
  v30 = 14; /*0x692afe*/
LABEL_81:
  if ( dword_8809A0 != -1 ) /*0x692b0e*/
  {
    v27 = (*(int (__thiscall **)(_DWORD, __int16 *, _BYTE *))(**((_DWORD **)dword_A8E334 + dword_8809A0) + 108))( /*0x692b1d*/
            *((_DWORD *)dword_A8E334 + dword_8809A0),
            v14,
            v8);
    if ( v27 ) /*0x692b22*/
      v30 = v27; /*0x692b24*/
  }
  if ( !v30 && v21 ) /*0x692b32*/
    v30 = 44; /*0x692b34*/
  if ( dword_880990 ) /*0x692b43*/
    return 0; /*0x692b45*/
  else
    return v30; /*0x692b51*/
}



// ==== 0x00692B60  Viewport::ProcessScroll  this=Viewport  sig=csp ====
void __thiscall Viewport::ProcessScroll(Viewport *this, _DWORD *a2)
{
  double v2; // st7
  int v4; // ebx
  int (__thiscall **DSurface_field_0x0)(DSurface *); // eax
  int v6; // ebp
  int v7; // ebp
  int v8; // eax
  bool v9; // bl
  int v14; // edx
  __int16 v15; // cx
  unsigned int v17; // ebp
  __int16 v18; // cx
  int v19; // edx
  unsigned int v20; // ebx
  double v21; // st7
  int v23; // eax
  int v24; // edx
  int v25; // esi
  int v26; // eax
  int v27; // esi
  int v28; // eax
  int v29; // eax
  double v30; // [esp+0h] [ebp-38h]
  double v31; // [esp+8h] [ebp-30h]
  int v32; // [esp+20h] [ebp-18h]
  __int64 v33; // [esp+24h] [ebp-14h] BYREF
  int v34; // [esp+2Ch] [ebp-Ch]
  int v35; // [esp+30h] [ebp-8h]
  char v36; // [esp+3Ch] [ebp+4h]

  if ( *((_BYTE *)this + 21850) == 1 ) /*0x692b70*/
    return; /*0x692b70*/
  v4 = DSurface_ViewBounds.field_0 + *a2; /*0x692b92*/
  v35 = (int)DSurface_ViewBounds.field_4 + a2[1]; /*0x692b94*/
  DSurface_field_0x0 = (int (__thiscall **)(DSurface *))DSurface_Sidebar->DSurface_field_0x0; /*0x692b98*/
  v34 = v4; /*0x692b9a*/
  v6 = DSurface_field_0x0[31](DSurface_Sidebar); /*0x692ba7*/
  v7 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)DSurface_Composite->__pad_0 + 124))(DSurface_Composite) /*0x692bb4*/
     + v6
     - 1;
  v8 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)DSurface_Composite->__pad_0 + 128))(DSurface_Composite) - 1; /*0x692bc0*/
  v9 = v35 <= 0 || v4 <= 0 || v4 >= v7 || v35 >= v8; /*0x692bd5*/
  v36 = 0; /*0x692bdc*/
  if ( (byte_B05628 & 1) == 0 ) /*0x692be3*/
  {
    byte_B05628 |= 1u; /*0x692bef*/
    atexit(nullsub_175); /*0x692bf5*/
  }
  if ( *((_DWORD *)this + 5458) ) /*0x692bfd*/
  {
    if ( !v9 ) /*0x692c13*/
      goto LABEL_25; /*0x692c13*/
  }
  else if ( !v9 ) /*0x692c09*/
  {
    goto LABEL_41; /*0x692c09*/
  }
  __asm { fild [esp+28h+var_C] } /*0x692c25*/
  v33 = *(_QWORD *)&g_DisplayWidth; /*0x692c29*/
  v36 = 1; /*0x692c2d*/
  __asm { fild dword ptr [esp+28h+var_14] } /*0x692c32*/
  __asm
  {
    fld st
    fmul dbl_83E738
    fld st(2)
    fcompp
    fnstsw ax
  }
  if ( (_AX & 0x100) != 0 ) /*0x692c4b*/
  {
    __asm /*0x692c4d*/
    {
      fstp st
      fstp st
    }
    v32 = 0; /*0x692c51*/
  }
  else
  {
    __asm /*0x692c5b*/
    {
      fld ds:dbl_7E1718
      fsub dbl_83E738
      fmul st, st(1)
      fxch st(1)
      fxch st(2)
      fcompp
      fnstsw ax
    }
    __asm { fstp st }
    if ( (_AX & 0x4100) != 0 ) /*0x692c76*/
      v32 = (int)g_DisplayWidth / 2; /*0x692c86*/
    else
      v32 = (int)&g_DisplayWidth[-1].LoadingScreen_field_0x3C + 3; /*0x692c79*/
  }
  __asm /*0x692c8a*/
  {
    fild [esp+28h+var_8]
    fild dword ptr [esp+28h+var_14+4]
    fld st
    fmul dbl_83E740
    fld st(2)
    fcompp
    fnstsw ax
  }
  if ( (_AX & 0x100) != 0 ) /*0x692ca3*/
  {
    __asm /*0x692ca5*/
    {
      fstp st
      fstp st
    }
    LODWORD(v33) = 0; /*0x692ca9*/
  }
  else
  {
    __asm /*0x692cb3*/
    {
      fld ds:dbl_7E1718
      fsub dbl_83E740
      fmul st, st(1)
      fxch st(1)
      fxch st(2)
      fcompp
      fnstsw ax
    }
    __asm { fstp st }
    if ( (_AX & 0x4100) != 0 ) /*0x692cce*/
      LODWORD(v33) = (int)*(&g_DisplayWidth + 1) / 2; /*0x692cde*/
    else
      LODWORD(v33) = (char *)*(&g_DisplayWidth + 1) - 1; /*0x692cd1*/
  }
  __asm { fild [esp+30h+var_18] } /*0x692cea*/
  v34 = *(_DWORD *)&DSurface_ViewBounds.__pad_8[16] / 2; /*0x692cf6*/
  __asm { fisub [esp+38h+var_C] } /*0x692cff*/
  v35 = *(_DWORD *)&DSurface_ViewBounds.__pad_8[20] / 2; /*0x692d08*/
  __asm /*0x692d0c*/
  {
    fstp [esp+38h+var_30]; double
    fild [esp+38h+var_8]
    fisub dword ptr [esp+38h+var_14]
    fstp [esp+38h+var_38]; double
  }
  Math::CalcAngle(v30, v31); /*0x692d1b*/
  __asm { fsub ds:dbl_7E2820 } /*0x692d20*/
  __asm { fmul ds:dbl_7E2818 }
  WORD2(v33) = Math::RoundToInt(v2); /*0x692d34*/
  dword_B05690 = HIDWORD(v33); /*0x692d3d*/
  dword_B0565C = (unsigned __int8)((unsigned int)((HIDWORD(v33) >> 7) + 1) >> 1); /*0x692d4d*/
LABEL_25:
  v14 = *((_DWORD *)this + 5458); /*0x692d52*/
  LOBYTE(v15) = 0; /*0x692d58*/
  HIBYTE(v15) = dword_B0565C; /*0x692d5a*/
  WORD2(v33) = v15; /*0x692d65*/
  _ESI = 8 - v14; /*0x692d71*/
  v17 = ((unsigned int)((HIDWORD(v33) >> 12) + 1) >> 1) & 7; /*0x692d7f*/
  if ( 8 - v14 < stru_A8EB00.ObjectTypeClass[28] + 1 ) /*0x692d84*/
  {
    _ESI = stru_A8EB00.ObjectTypeClass[28] + 1; /*0x692d86*/
    *((_DWORD *)this + 5458) = 8 - (stru_A8EB00.ObjectTypeClass[28] + 1); /*0x692d8f*/
  }
  if ( (unsigned __int8)Mouse::IsButtonDown(2u) ) /*0x692d9d*/
  {
    if ( ++_ESI >= 4 ) /*0x692daa*/
    {
      if ( _ESI > 8 ) /*0x692db6*/
        _ESI = 8; /*0x692db8*/
    }
    else
    {
      _ESI = 4; /*0x692dac*/
    }
  }
  LOBYTE(v18) = 0; /*0x692dbd*/
  v19 = *(_DWORD *)this->__pad_0; /*0x692dbf*/
  HIBYTE(v18) = dword_B0565C; /*0x692dc1*/
  WORD2(v33) = v18; /*0x692dcb*/
  v20 = ((unsigned int)((HIDWORD(v33) >> 12) + 1) >> 1) & 7; /*0x692ddc*/
  LODWORD(v33) = 1; /*0x692de3*/
  if ( !(*(unsigned __int8 (__thiscall **)(Viewport *, unsigned int, __int64 *, _DWORD))(v19 + 164))(this, v20, &v33, 0) ) /*0x692deb*/
  {
    (*(void (__thiscall **)(Viewport *, unsigned int, _DWORD))(*(_DWORD *)this->__pad_0 + 76))(this, v17 + 9, 0); /*0x692dff*/
    goto LABEL_40; /*0x692e02*/
  }
  v21 = ((double (__thiscall *)(Viewport *, unsigned int, _DWORD))*(_DWORD *)(*(_DWORD *)this->__pad_0 + 76))( /*0x692e0f*/
          this,
          v17 + 1,
          0);
  __asm { fild dword_83E748[esi*4] } /*0x692e12*/
  _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x692e19*/
  __asm { fmul qword ptr [ecx+5B8h] } /*0x692e1f*/
  LOWORD(v23) = Math::RoundToInt(v21); /*0x692e25*/
  v24 = *(_DWORD *)this->__pad_0; /*0x692e2a*/
  LODWORD(v33) = v23; /*0x692e2c*/
  (*(void (__thiscall **)(Viewport *, unsigned int, __int64 *, int))(v24 + 164))(this, v20, &v33, 1); /*0x692e3a*/
  v25 = dword_B05640; /*0x692e45*/
  if ( dword_B05638 == -1 ) /*0x692e4e*/
  {
LABEL_37:
    if ( v25 ) /*0x692e68*/
      goto LABEL_40; /*0x692e68*/
    goto LABEL_38; /*0x692e68*/
  }
  v26 = Timer::GetTicks() - dword_B05638; /*0x692e5a*/
  if ( v26 < v25 ) /*0x692e62*/
  {
    v25 -= v26; /*0x692e64*/
    goto LABEL_37; /*0x692e64*/
  }
LABEL_38:
  if ( !v36 ) /*0x692e70*/
    goto LABEL_41; /*0x692e70*/
  dword_B05638 = Timer::GetTicks(); /*0x692e84*/
  dword_B0563C = v35; /*0x692e89*/
  dword_B05640 = 1; /*0x692e8f*/
  ++*((_DWORD *)this + 5458); /*0x692e9c*/
LABEL_40:
  if ( v36 ) /*0x692ea8*/
    return; /*0x692ea8*/
LABEL_41:
  v27 = dword_B05640; /*0x692eaa*/
  if ( dword_B05638 == -1 ) /*0x692eb8*/
    goto LABEL_44; /*0x692eb8*/
  v28 = Timer::GetTicks() - dword_B05638; /*0x692ec4*/
  if ( v28 < v27 ) /*0x692ecc*/
  {
    v27 -= v28; /*0x692ece*/
LABEL_44:
    if ( v27 ) /*0x692ed2*/
      return; /*0x692ed2*/
  }
  v29 = *((_DWORD *)this + 5458) - 1; /*0x692ed4*/
  *((_DWORD *)this + 5458) = v29; /*0x692edb*/
  if ( v29 < 0 ) /*0x692ee1*/
    *((_DWORD *)this + 5458) = v29 + 1; /*0x692ee4*/
  dword_B05638 = Timer::GetTicks(); /*0x692ef3*/
  dword_B0563C = v35; /*0x692f01*/
  dword_B05640 = 1; /*0x692f06*/
}



// ==== 0x00692F20  nullsub_175  this=-  sig=ida-proto ====
void __cdecl nullsub_175()
{
  ; /*0x692f20*/
}



// ==== 0x00692F30  TacticalClass::ProcessView  this=TacticalClass  sig=csp ====
void __thiscall TacticalClass::ProcessView(TacticalClass *this)
{
  int v2; // esi
  void *v3; // edi
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // eax
  bool v7[4]; // [esp+4h] [ebp-28h] BYREF
  void *v8; // [esp+8h] [ebp-24h] BYREF
  __int16 v9[2]; // [esp+Ch] [ebp-20h] BYREF
  bool v10[8]; // [esp+10h] [ebp-1Ch] BYREF
  int v11[2]; // [esp+18h] [ebp-14h] BYREF
  int v12[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( !stru_A8EB00.?[440] ) /*0x692f3d*/
  {
    v2 = DSurface_ViewBounds.field_0; /*0x692f4a*/
    v3 = DSurface_ViewBounds.field_4; /*0x692f57*/
    v4 = (_DWORD *)(*(int (__thiscall **)(void *, bool *))(*(_DWORD *)stru_887598.lineTrailer + 52))( /*0x692f5e*/
                     stru_887598.lineTrailer,
                     v10);
    v5 = v4[1]; /*0x692f67*/
    v11[0] = *v4 - v2; /*0x692f6a*/
    v11[1] = v5 - (_DWORD)v3; /*0x692f72*/
    if ( !Map_Process_63AB60(v11[0], v5 - (_DWORD)v3) ) /*0x692f76*/
    {
      if ( *((_BYTE *)this + 21850) == 1 ) /*0x692f8c*/
      {
        if ( (unsigned __int8)Mouse::IsButtonDown(1u) ) /*0x692f96*/
        {
          TacticalClass::ProcessScroll((DisplayClass *)&stru_87F5F0.__pad_58[416], v11); /*0x692fa9*/
        }
        else if ( (unsigned __int8)Mouse::IsButtonDown(2u) ) /*0x692fbb*/
        {
          ScrollMapEdge((ObjectClass *)&stru_87F5F0.__pad_58[416], v11); /*0x692fd2*/
        }
      }
      else
      {
        if ( (unsigned __int8)Tactical::MouseOver(v11, v9, v12, &v8, &v7[3], v10) ) /*0x692ffc*/
        {
          v6 = Radar::ScanWaypoints((int)v9, v8, 1); /*0x693015*/
          TacticalClass::HandlePlayerAction((DisplayClass *)&stru_87F5F0.__pad_58[416], v9, v10[0], v8, v6, 0); /*0x69302f*/
        }
        if ( *((_BYTE *)this + 21849) && !stru_A8EB00.?[391] ) /*0x693045*/
          Viewport::ProcessScroll((Viewport *)this, v11); /*0x69304e*/
      }
    }
  }
}



// ==== 0x00693060  ScrollClass::GetHotspot  this=ScrollClass  sig=csp ====
bool __thiscall MouseClass::GetHotspot(ScrollClass *this)
{
  return *((_BYTE *)this + 21850) /*0x693091*/
      || stru_A8EB00.?[440]
      || g_TacticalClass_Instance && *(float *)&g_TacticalClass_Instance[54] != 0.0;
}



// ==== 0x006930A0  Tactical::HandleTacticalMouseInput  this=Tactical  sig=csp ====
char __thiscall Tactical::HandleTacticalMouseInput(Tactical *this, int a2, _DWORD *a3, int a4, HWND a5)
{
  int v5; // eax
  int v7; // eax
  int v8; // eax
  __int16 v10; // [esp+8h] [ebp-1Ch] BYREF
  bool v11[4]; // [esp+Ch] [ebp-18h] BYREF
  int v12; // [esp+10h] [ebp-14h] BYREF
  int v13; // [esp+14h] [ebp-10h]
  int v14[3]; // [esp+18h] [ebp-Ch] BYREF

  LOBYTE(v5) = byte_A8E378; /*0x6930a0*/
  if ( byte_A8E378 && (stru_A8EB00.?[376] || stru_A8EB00.?[391]) ) /*0x6930c4*/
  {
    if ( byte_A8E9A0 ) /*0x6930d0*/
    {
      if ( g_TacticalClass_Instance ) /*0x6930dc*/
      {
        if ( stru_887598.lineTrailer ) /*0x6930e8*/
        {
          LOBYTE(v5) = (_BYTE)a3; /*0x6930f5*/
          if ( !stru_A8EB00.?[440] || *a3 == 533 ) /*0x693101*/
          {
            v5 = *a3 - 513; /*0x693109*/
            switch ( *a3 ) /*0x69311f*/
            {
              case 0x201: /*0x69311f*/
                a5 = *(HWND *)a5; /*0x693138*/
                v12 = (__int16)a5 - DSurface_ViewBounds.field_0; /*0x693148*/
                v13 = SHIWORD(a5) - (unsigned int)DSurface_ViewBounds.field_4; /*0x693150*/
                LOBYTE(v5) = Tactical::MouseOver(&v12, &v10, v14, &a3, (bool *)&a5, v11); /*0x693170*/
                if ( (_BYTE)v5 ) /*0x693177*/
                {
                  LOBYTE(v5) = HandlePlanningModeClick(v12, v13); /*0x693187*/
                  if ( !(_BYTE)v5 && !*((_BYTE *)this + 21850) ) /*0x693194*/
                  {
                    v7 = Radar::ScanWaypoints((int)&v10, a3, 1); /*0x6931af*/
                    TacticalClass::HandlePlayerAction( /*0x6931c9*/
                      (DisplayClass *)&stru_87F5F0.__pad_58[416],
                      &v10,
                      v11[0],
                      a3,
                      v7,
                      0);
                    DisplayClass::InitViewBounds((DisplayClass *)&stru_87F5F0.__pad_58[416], &v12); /*0x6931d8*/
                    LOBYTE(v5) = (unsigned __int8)SetCapture(g_hWnd); /*0x6931e4*/
                    *((_BYTE *)this + 21850) = 1; /*0x6931ea*/
                  }
                }
                break; /*0x6931f6*/
              case 0x202: /*0x69311f*/
                a5 = *(HWND *)a5; /*0x69320b*/
                v12 = (__int16)a5 - DSurface_ViewBounds.field_0; /*0x69321b*/
                v13 = SHIWORD(a5) - (unsigned int)DSurface_ViewBounds.field_4; /*0x693221*/
                LOBYTE(v5) = ScriptAction::HitTest(v12, v13); /*0x693225*/
                if ( !(_BYTE)v5 && *((_BYTE *)this + 21850) ) /*0x693232*/
                {
                  Tactical::MouseOver(&v12, &v10, v14, &a3, (bool *)&a5, v11); /*0x69325e*/
                  v8 = Radar::ScanWaypoints((int)&v10, a3, 0); /*0x693271*/
                  PlayerClass::ExecuteCommand((DisplayClass *)&stru_87F5F0.__pad_58[416], (int)v14, &v10, a3, v8, 0); /*0x69328b*/
                  *((_BYTE *)this + 21850) = 0; /*0x693290*/
                  LOBYTE(v5) = ReleaseCapture(); /*0x693296*/
                }
                break; /*0x6932a1*/
              case 0x204: /*0x69311f*/
                a5 = *(HWND *)a5; /*0x6932b6*/
                v12 = (__int16)a5 - DSurface_ViewBounds.field_0; /*0x6932c6*/
                v13 = SHIWORD(a5) - (unsigned int)DSurface_ViewBounds.field_4; /*0x6932cc*/
                LOBYTE(v5) = UI_Handle(v12, v13); /*0x6932d0*/
                if ( !*((_BYTE *)this + 21850) ) /*0x6932d5*/
                {
                  LOBYTE(v5) = Tactical::MouseOver(&v12, &v10, v14, &a3, (bool *)&a5, v11); /*0x693301*/
                  if ( (_BYTE)v5 ) /*0x693308*/
                  {
                    if ( !stru_A8EB00.?[440] ) /*0x693314*/
                    {
                      DisplayClass::g_var_2eb6a7((DisplayClass *)&v12); /*0x693320*/
                      dword_884D38 = v12; /*0x69332d*/
                      dword_884D3C = v13; /*0x693339*/
                      byte_884D40 = 0; /*0x69333f*/
                      (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x693347*/
                    }
                    LOBYTE(v5) = (unsigned __int8)SetCapture(g_hWnd); /*0x693351*/
                    *((_BYTE *)this + 21850) = 1; /*0x693357*/
                  }
                }
                break; /*0x693363*/
              case 0x205: /*0x69311f*/
                a5 = *(HWND *)a5; /*0x693378*/
                LOBYTE(v5) = UI_Handle_63AB00( /*0x69338a*/
                               (__int16)a5 - DSurface_ViewBounds.field_0,
                               SHIWORD(a5) - (unsigned int)DSurface_ViewBounds.field_4);
                if ( *((_BYTE *)this + 21850) ) /*0x69338f*/
                {
                  if ( byte_884D40 ) /*0x69339d*/
                  {
                    LOBYTE(v5) = byte_884D44; /*0x69339f*/
                    (*(void (__thiscall **)(char *, _DWORD, int))(*(_DWORD *)&stru_87F5F0.__pad_58[416] + 72))( /*0x6933b1*/
                      &stru_87F5F0.__pad_58[416],
                      0,
                      v5);
                    byte_884D40 = 0; /*0x6933b4*/
                  }
                  else
                  {
                    TacticalClass::DispatchMode((DisplayClass *)&stru_87F5F0.__pad_58[416], (int)&v12); /*0x6933c6*/
                  }
                  DisplayClass::ExitMode((DisplayClass *)this); /*0x6933cd*/
                  *((_BYTE *)this + 21850) = 0; /*0x6933d2*/
                  LOBYTE(v5) = ReleaseCapture(); /*0x6933d8*/
                }
                break; /*0x6933e3*/
              case 0x215: /*0x69311f*/
                LOBYTE(v5) = (_BYTE)g_hWnd; /*0x6933ea*/
                if ( *(HWND *)a5 != g_hWnd && *((_BYTE *)this + 21850) == 1 ) /*0x6933fc*/
                  LOBYTE(v5) = (*(char (__thiscall **)(Tactical *))(*(_DWORD *)this->__pad_0 + 140))(this); /*0x693402*/
                break; /*0x693402*/
              default:
                return v5;
            }
          }
        }
      }
    }
  }
  return v5; /*0x6931f1*/
}



// ==== 0x00693440  ObjectClass::ScrollMapEdge  this=ObjectClass  sig=csp ====
char __thiscall ScrollMapEdge(ObjectClass *this, _DWORD *a2)
{
  char result; // al
  int SystemMetrics; // ecx
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  void (__thiscall **vtable0)(ObjectClass *, _DWORD *); // edx
  int v9; // edi
  LONG v10; // ebp
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  double v18; // st7
  int v19; // eax
  int v20; // eax
  double v21; // st7
  int v22; // eax
  int v23; // eax
  double v24; // st7
  int v25; // eax
  int v26; // eax
  int v27; // esi
  struct tagPOINT Point; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v29; // [esp+14h] [ebp-Ch] BYREF
  _DWORD v30[2]; // [esp+18h] [ebp-8h] BYREF
  unsigned int v31; // [esp+24h] [ebp+4h]

  result = byte_A8E9A0; /*0x693440*/
  if ( byte_A8E9A0 ) /*0x69344f*/
  {
    if ( byte_A8E378 || (result = stru_A8EB00.?[391]) != 0 ) /*0x693465*/
    {
      if ( !*((_BYTE *)this + 21848) ) /*0x69346b*/
      {
        SystemMetrics = GetSystemMetrics(68); /*0x693489*/
        v5 = *a2 - *((_DWORD *)this + 5460); /*0x69348f*/
        if ( (int)((HIDWORD(v5) ^ v5) - HIDWORD(v5)) > 2 * SystemMetrics /*0x6934b4*/
          || (v6 = GetSystemMetrics(69),
              v7 = a2[1] - *((_DWORD *)this + 5461),
              (int)((HIDWORD(v7) ^ v7) - HIDWORD(v7)) > 2 * v6) )
        {
          *((_BYTE *)this + 21848) = 1; /*0x6934b6*/
        }
      }
      result = *((_BYTE *)this + 21848); /*0x6934bd*/
      if ( result ) /*0x6934c5*/
      {
        if ( *((_BYTE *)this + 21836) ) /*0x6934cb*/
          goto LABEL_14; /*0x6934cb*/
        if ( *((_BYTE *)this + 4559) ) /*0x6934d5*/
        {
          vtable0 = (void (__thiscall **)(ObjectClass *, _DWORD *))this->AbstractClass; /*0x6934df*/
          v30[0] = -1; /*0x6934e4*/
          v30[1] = -1; /*0x6934e8*/
          vtable0[49](this, v30); /*0x6934f3*/
        }
        else
        {
          *((_BYTE *)this + 21836) = 1; /*0x6934fb*/
        }
        result = *((_BYTE *)this + 21836); /*0x693502*/
        if ( result ) /*0x69350a*/
        {
LABEL_14:
          v9 = *a2 - *((_DWORD *)this + 5460); /*0x693521*/
          v10 = a2[1] - *((_DWORD *)this + 5461); /*0x693526*/
          Point.x = v10; /*0x69352e*/
          v11 = CalcMathFacing8((_DWORD *)this + 5460, a2); /*0x693532*/
          if ( v11 != dword_83E76C ) /*0x69353d*/
            dword_83E76C = v11; /*0x69353f*/
          if ( !v9 ) /*0x69354c*/
          {
            v12 = *((_DWORD *)this + 5460); /*0x69354e*/
            if ( v12 ) /*0x693556*/
              v9 = v12 >= (int)&g_DisplayWidth[-1].LoadingScreen_field_0x3C + 3; /*0x693564*/
            else
              v9 = -1; /*0x693558*/
          }
          if ( !v10 ) /*0x693575*/
          {
            v13 = *((_DWORD *)this + 5461); /*0x693577*/
            if ( !v13 ) /*0x69357f*/
            {
              v10 = -1; /*0x693581*/
LABEL_25:
              Point.x = v10; /*0x69358f*/
              goto LABEL_26; /*0x69358f*/
            }
            if ( v13 >= (int)*(&g_DisplayWidth + 1) ) /*0x693588*/
            {
              v10 = 1; /*0x69358a*/
              goto LABEL_25; /*0x69358a*/
            }
          }
LABEL_26:
          v14 = *((_DWORD *)this + 5460); /*0x693593*/
          if ( v14 < 10 && v9 < 0 ) /*0x6935a0*/
          {
            if ( v9 > -5 ) /*0x6935e1*/
            {
              v9 = -5; /*0x6935e3*/
LABEL_33:
              v9 *= 4; /*0x6935bb*/
              goto LABEL_34; /*0x6935bb*/
            }
          }
          else if ( v14 <= (int)&g_DisplayWidth[-1].LoadingScreen_field_0x34 + 2 || v9 <= 0 ) /*0x6935ab*/
          {
LABEL_34:
            v15 = *((_DWORD *)this + 5461); /*0x6935c2*/
            if ( v15 < 10 && v10 < 0 ) /*0x6935cf*/
            {
              if ( v10 > -5 ) /*0x6935ed*/
              {
                v10 = -5; /*0x6935ef*/
LABEL_46:
                v10 *= 4; /*0x693604*/
                Point.x = v10; /*0x693607*/
                goto LABEL_47; /*0x693607*/
              }
            }
            else if ( v15 <= (int)&(*(&g_DisplayWidth + 1))[-1].LoadingScreen_field_0x34 + 2 || v10 <= 0 ) /*0x6935da*/
            {
LABEL_47:
              v16 = Map_Helper_5FBF70((ObjectClass *)&stru_A8EB00.ObjectTypeClass[24]); /*0x69360b*/
              if ( v16 ) /*0x693618*/
              {
                v17 = v16 - 1; /*0x69361e*/
                if ( v17 ) /*0x69361f*/
                {
                  if ( v17 == 1 ) /*0x693626*/
                  {
                    v9 = -v9; /*0x693631*/
                    v10 = -v10; /*0x693633*/
                    v30[0] = stru_A8EB00.ObjectTypeClass[28] + 1; /*0x69363a*/
                    v18 = 12.0 / (double)(stru_A8EB00.ObjectTypeClass[28] + 1); /*0x693646*/
                    LOWORD(v19) = Math::RoundToInt(v18); /*0x693652*/
                    v29 = abs32(v19); /*0x693664*/
                    LOWORD(v20) = Math::RoundToInt(v18); /*0x693668*/
                    v30[0] = abs32(v20); /*0x693674*/
                    if ( (int)(v29 + v30[0]) > 0 ) /*0x69367c*/
                      goto LABEL_51; /*0x69367c*/
                  }
                }
                else
                {
                  v30[0] = stru_A8EB00.ObjectTypeClass[28] + 1; /*0x6936d9*/
                  v21 = 12.0 / (double)(stru_A8EB00.ObjectTypeClass[28] + 1); /*0x6936e1*/
                  LOWORD(v22) = Math::RoundToInt(v21); /*0x6936ed*/
                  v29 = abs32(v22); /*0x6936ff*/
                  LOWORD(v23) = Math::RoundToInt(v21); /*0x693703*/
                  v30[0] = abs32(v23); /*0x69370f*/
                  if ( (int)(v29 + v30[0]) > 0 ) /*0x693717*/
                  {
LABEL_51:
                    Point.x = 0; /*0x693682*/
                    Point.y = 0; /*0x693694*/
                    ClientToScreen(g_hWnd, &Point); /*0x693698*/
                    SetCursorPos( /*0x6936c8*/
                      *((_DWORD *)this + 5460) + Point.x + DSurface_ViewBounds.field_0,
                      (int)DSurface_ViewBounds.field_4 + *((_DWORD *)this + 5461) + Point.y);
                  }
                }
              }
              else
              {
                v30[0] = stru_A8EB00.ObjectTypeClass[28] + 1; /*0x693759*/
                v24 = 1.0 / (double)(stru_A8EB00.ObjectTypeClass[28] + 1); /*0x693761*/
                LOWORD(v25) = Math::RoundToInt(v24); /*0x69376d*/
                v29 = abs32(v25); /*0x69377d*/
                LOWORD(v26) = Math::RoundToInt(v24); /*0x693781*/
                v30[0] = abs32(v26); /*0x69378d*/
              }
              v27 = 0; /*0x693791*/
              v31 = 0; /*0x693793*/
              do /*0x6937d5*/
              {
                Point.x = 1; /*0x6937a4*/
                if ( !(unsigned __int8)DisplayClass::SetCoordVisible((DisplayClass *)v27, &Point, 0) ) /*0x6937ac*/
                  v31 |= 1 << (v27 / 2); /*0x6937cb*/
                v27 += 2; /*0x6937cf*/
              }
              while ( v27 < 8 ); /*0x6937d5*/
              if ( v9 <= 0 ) /*0x6937d9*/
              {
                if ( v9 < 0 ) /*0x6937e6*/
                  DisplayClass::SetCoordVisible((DisplayClass *)6, &v29, 1); /*0x6937f6*/
              }
              else
              {
                DisplayClass::SetCoordVisible((DisplayClass *)2, &v29, 1); /*0x6937e4*/
              }
              if ( v10 <= 0 ) /*0x6937fd*/
              {
                if ( v10 < 0 ) /*0x69380a*/
                  DisplayClass::SetCoordVisible(0, v30, 1); /*0x69381a*/
              }
              else
              {
                DisplayClass::SetCoordVisible((DisplayClass *)4, v30, 1); /*0x693808*/
              }
              return (*((int (__thiscall **)(ObjectClass *, int, int))this->AbstractClass + 18))( /*0x693831*/
                       this,
                       dword_83E790[v31],
                       1);
            }
            if ( v10 > 0 && v10 < 5 ) /*0x6935fd*/
              v10 = 5; /*0x6935ff*/
            goto LABEL_46; /*0x6935ff*/
          }
          if ( v9 > 0 && v9 < 5 ) /*0x6935b4*/
            v9 = 5; /*0x6935b6*/
          goto LABEL_33; /*0x6935b6*/
        }
      }
    }
  }
  return result; /*0x693835*/
}



// ==== 0x00693840  ScrollClass::GetButtonState  this=ScrollClass  sig=csp ====
int __thiscall MouseClass::GetButtonState(ScrollClass *this, int a2)
{
  ScrollClass *v2; // esi
  int result; // eax

  v2 = this; /*0x693841*/
  if ( !*((_BYTE *)this + 21848) ) /*0x693843*/
    return TacticalClass::DispatchMode((DisplayClass *)this, a2); /*0x69386f*/
  LOBYTE(this) = byte_884D44; /*0x69384d*/
  result = (*(int (__thiscall **)(ScrollClass *, _DWORD, ScrollClass *))(v2->m_ScrollX + 72))(v2, 0, this); /*0x69385a*/
  LOBYTE(v2[1365].m_MaxX) = 0; /*0x69385d*/
  return result; /*0x693864*/
}



// ==== 0x00693880  ScrollClass::CheckCapture  this=ScrollClass  sig=csp ====
char __thiscall MouseClass::CheckCapture(ScrollClass *this, _DWORD *a2)
{
  char result; // al

  result = stru_A8EB00.?[440]; /*0x693880*/
  if ( !stru_A8EB00.?[440] ) /*0x69388a*/
  {
    DisplayClass::g_var_2eb6a7((DisplayClass *)a2); /*0x693892*/
    *((_DWORD *)this + 5460) = *a2; /*0x693899*/
    *((_DWORD *)this + 5461) = a2[1]; /*0x6938a2*/
    *((_BYTE *)this + 21848) = 0; /*0x6938a8*/
    return (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x6938b7*/
  }
  return result; /*0x6938bb*/
}



// ==== 0x006938C0  ScrollClass::ReleaseCapture  this=ScrollClass  sig=csp ====
int __thiscall Mouse::ReleaseCapture(ScrollClass *this)
{
  int result; // eax

  DisplayClass::ExitMode((DisplayClass *)this); /*0x6938c3*/
  *((_BYTE *)this + 21850) = 0; /*0x6938c8*/
  result = (int)GetCapture(); /*0x6938cf*/
  if ( (HWND)result == g_hWnd ) /*0x6938de*/
    return ReleaseCapture(); /*0x6938e0*/
  return result; /*0x6938db*/
}



// ==== 0x006938F0  ScrollClass::Read  this=ScrollClass  sig=csp ====
char *__thiscall ScrollClass::Read(ScrollClass *this, char a2)
{
  int *v3; // esi
  int v4; // edi

  v3 = (int *)this + 5371; /*0x6938f5*/
  v4 = 4; /*0x6938fb*/
  do /*0x693916*/
  {
    v3 -= 997; /*0x693905*/
    Array::ForEachReverse(v3, 52, 75, (int (__thiscall *)(int))nullsub_56); /*0x693910*/
    --v4; /*0x693915*/
  }
  while ( v4 ); /*0x693916*/
  RadarClass::Destruct((RadarClass *)this); /*0x69391a*/
  if ( (a2 & 1) != 0 ) /*0x693924*/
    __3_YAXPAX_Z(this); /*0x693927*/
  return (char *)this; /*0x69392f*/
}



// ==== 0x00693940  sub_693940  this=-  sig=ida-proto ====
int sub_693940()
{
  dword_B056D0 = 0; /*0x693942*/
  dword_B056D4 = 0; /*0x693947*/
  dword_B056D8 = 0; /*0x69394c*/
  dword_B056DC = 0; /*0x693951*/
  return 0; /*0x693956*/
}



// ==== 0x00693960  sub_693960  this=-  sig=ida-proto ====
void sub_693960()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x69396c*/
  dbl_B056E8 = Math::Sqrt(v0 + v0); /*0x69397e*/
}



// ==== 0x00693990  sub_693990  this=-  sig=ida-proto ====
void sub_693990()
{
  dbl_B05738 = dbl_B056E8 / 60.0; /*0x69399c*/
}



// ==== 0x006939B0  sub_6939B0  this=-  sig=ida-proto ====
void sub_6939B0()
{
  dbl_B05720 = 1.0 / dbl_B05738; /*0x6939bc*/
}



// ==== 0x006939D0  sub_6939D0  this=-  sig=ida-proto ====
void sub_6939D0()
{
  dbl_B05718 = 0.0174532925199433 * 45.0; /*0x6939dc*/
}



// ==== 0x006939F0  sub_6939F0  this=-  sig=ida-proto ====
void sub_6939F0()
{
  dbl_B056F0 = 0.0174532925199433 * 60.0; /*0x6939fc*/
}



// ==== 0x00693A10  sub_693A10  this=-  sig=ida-proto ====
void sub_693A10()
{
  dbl_B056C8 = 0.0174532925199433 * 90.0; /*0x693a1c*/
}



// ==== 0x00693A30  sub_693A30  this=-  sig=ida-proto ====
__int64 sub_693A30()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B056C8 - dbl_B056F0); /*0x693a42*/
  result = Math::RoundToInt(v0 * dbl_B056E8 * 0.5); /*0x693a56*/
  dword_B05740 = result; /*0x693a5b*/
  return result; /*0x693a60*/
}



// ==== 0x00693A70  sub_693A70  this=-  sig=ida-proto ====
void sub_693A70()
{
  dbl_B056F8 = Math::ArcTan((double)dword_B05740 * 0.00390625); /*0x693a87*/
}



// ==== 0x00693AA0  sub_693AA0  this=-  sig=ida-proto ====
void sub_693AA0()
{
  dbl_B05710 = Math::ArcTan((double)(2 * dword_B05740) / dbl_B056E8); /*0x693ac2*/
}



// ==== 0x00693AD0  sub_693AD0  this=-  sig=ida-proto ====
__int64 sub_693AD0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B05740) + 0.5); /*0x693aeb*/
  dword_B05734 = result; /*0x693af0*/
  return result; /*0x693af6*/
}



// ==== 0x00693B00  sub_693B00  this=-  sig=ida-proto ====
int sub_693B00()
{
  word_B056E0 = 0; /*0x693b02*/
  word_B056E2 = 0; /*0x693b08*/
  return 0; /*0x693b0e*/
}



// ==== 0x00693B10  sub_693B10  this=-  sig=ida-proto ====
int sub_693B10()
{
  dword_B05700 = 0; /*0x693b12*/
  dword_B05704 = 0; /*0x693b17*/
  dword_B05708 = 0; /*0x693b1c*/
  return 0; /*0x693b21*/
}



// ==== 0x00693B30  sub_693B30  this=-  sig=ida-proto ====
int sub_693B30()
{
  dword_B05730 = 0; /*0x693b35*/
  dword_B05728 = 128; /*0x693b3f*/
  dword_B0572C = 128; /*0x693b44*/
  return 128; /*0x693b49*/
}



// ==== 0x00693B70  RequestNetworkFile  this=AbstractClass  sig=csp ====
char __fastcall Network_RequestFile(char *a1, int a2, int a3)
{
  char *Flagged; // eax
  char *v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // esi
  int v11; // eax
  bool v13; // al
  char *v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // esi
  int v19; // eax
  int v20; // esi
  int v21; // eax
  char *v22; // eax
  char *v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // esi
  int v27; // eax
  int v28; // esi
  int v29; // eax
  char v30; // bl
  const char *v31; // eax
  DWORD Ticks; // [esp+10h] [ebp-5C0h]
  DWORD v33; // [esp+10h] [ebp-5C0h]
  DWORD v34; // [esp+10h] [ebp-5C0h]
  int v36; // [esp+20h] [ebp-5B0h]
  int v37; // [esp+24h] [ebp-5ACh] BYREF
  _BYTE v38[6]; // [esp+2Ah] [ebp-5A6h] BYREF
  _BYTE v39[12]; // [esp+38h] [ebp-598h] BYREF
  _BYTE v40[4]; // [esp+44h] [ebp-58Ch] BYREF
  _DWORD v41[62]; // [esp+48h] [ebp-588h] BYREF
  __int16 v42; // [esp+140h] [ebp-490h]
  int v43[113]; // [esp+144h] [ebp-48Ch] BYREF
  __int16 v44; // [esp+308h] [ebp-2C8h]
  char v45; // [esp+30Ah] [ebp-2C6h]
  _BYTE v46[163]; // [esp+30Ch] [ebp-2C4h] BYREF
  char v47[89]; // [esp+3AFh] [ebp-221h] BYREF
  int v48; // [esp+408h] [ebp-1C8h] BYREF
  _BYTE v49[171]; // [esp+40Ch] [ebp-1C4h] BYREF
  int v50; // [esp+4B7h] [ebp-119h]
  char v51[277]; // [esp+4BBh] [ebp-115h] BYREF

  v36 = 0; /*0x693b86*/
  Waypoint::InitInvalid(v39); /*0x693b8a*/
  Debug::Log(aGettingFileFro); /*0x693b94*/
  Timer::GetTicks(); /*0x693ba0*/
  Debug::Log(aRequestingFile); /*0x693bb2*/
  Ticks = Timer::GetTicks(); /*0x693bc3*/
  if ( a2 == 1 || a2 == 2 ) /*0x693be4*/
  {
    memset(v41, 0, sizeof(v41)); /*0x693cd4*/
    v42 = 0; /*0x693ce5*/
    v41[0] = 110; /*0x693ce7*/
    Stream::WriteBlock((int)&unk_A8EA70, (int)v41, 250, 1); /*0x693cef*/
    while ( Count::GetCountQueue(&unk_A8EA70) > 0 ) /*0x693d00*/
    {
      v8 = 3600; /*0x693d06*/
      if ( Ticks != -1 ) /*0x693d0d*/
      {
        v9 = Timer::GetTicks() - Ticks; /*0x693d18*/
        if ( v9 >= 3600 ) /*0x693d1e*/
          break; /*0x693d1e*/
        v8 = 3600 - v9; /*0x693d20*/
      }
      if ( !v8 ) /*0x693d24*/
        break; /*0x693d24*/
      Event::Dispatch(); /*0x693d26*/
    }
  }
  else
  {
    memset(v43, 0, sizeof(v43)); /*0x693bfa*/
    v44 = 0; /*0x693c02*/
    v45 = 0; /*0x693c04*/
    v43[0] = 16; /*0x693c05*/
    CopyWideToChar(&v43[1], *(char **)dword_A8DA78, -1); /*0x693c19*/
    if ( dword_A8B238 == 3 ) /*0x693c25*/
    {
      Network::SendMessage((int)unk_A8E9C0, (int)v43, 455, 1, (int)&stru_A8BB1C, 0, 0); /*0x693c42*/
    }
    else
    {
      Flagged = GameSettings::FindFlagged(); /*0x693c49*/
      if ( Flagged ) /*0x693c50*/
      {
        v5 = CharToWideString(Flagged + 36); /*0x693c55*/
        Network::SendToPlayer((int)unk_A8E9C0, (int)v43, 455, 1, (wchar_t *)v5); /*0x693c6f*/
      }
    }
    while ( Network::GetQueueCount((int)unk_A8E9C0) > 0 ) /*0x693c80*/
    {
      v6 = 3600; /*0x693c8a*/
      if ( Ticks != -1 ) /*0x693c91*/
      {
        v7 = Timer::GetTicks() - Ticks; /*0x693c9c*/
        if ( v7 >= 3600 ) /*0x693ca2*/
          break; /*0x693ca2*/
        v6 = 3600 - v7; /*0x693ca8*/
      }
      if ( !v6 ) /*0x693cac*/
        break; /*0x693cac*/
      Event::Dispatch(); /*0x693cb2*/
    }
  }
  v10 = 3600; /*0x693d39*/
  if ( Ticks != -1 ) /*0x693d44*/
  {
    v11 = Timer::GetTicks() - Ticks; /*0x693d4f*/
    if ( v11 >= 3600 ) /*0x693d55*/
    {
LABEL_24:
      Debug::Log(aTimeoutWaiting); /*0x693d5d*/
      return 0; /*0x693d76*/
    }
    v10 = 3600 - v11; /*0x693d57*/
  }
  if ( !v10 ) /*0x693d5b*/
    goto LABEL_24; /*0x693d5b*/
  v33 = Timer::GetTicks(); /*0x693d8e*/
  if ( a2 == 1 || a2 == 2 ) /*0x693da8*/
  {
    while ( 1 ) /*0x693e97*/
    {
      Event::Dispatch(); /*0x693e97*/
      if ( ObjectTypeClass::CreateInstance((int)&unk_A8EA70, (int)v46, (int)v40) > 0 && *(_DWORD *)v46 == 111 ) /*0x693ebe*/
        break; /*0x693ebe*/
      v18 = 3600; /*0x693ec4*/
      if ( v33 != -1 ) /*0x693ecb*/
      {
        v19 = Timer::GetTicks() - v33; /*0x693ed6*/
        if ( v19 >= 3600 ) /*0x693edc*/
          goto LABEL_50; /*0x693edc*/
        v18 = 3600 - v19; /*0x693ede*/
      }
      if ( !v18 ) /*0x693ee2*/
        goto LABEL_50; /*0x693ee2*/
    }
    v17 = *(_DWORD *)&v46[158]; /*0x693ef8*/
    strcpy(a1, v47); /*0x693f0a*/
  }
  else
  {
    while ( 1 ) /*0x693db3*/
    {
      Event::Dispatch(); /*0x693db3*/
      v37 = 455; /*0x693dd4*/
      if ( Network::Send((int)unk_A8E9C0, (int)&v48, (int)&v37, (int)v39, (int)v38) ) /*0x693ddc*/
      {
        v13 = NetworkID::Compare((int)v39, (int)&stru_A8BB1C); /*0x693dee*/
        if ( dword_A8B238 == 4 ) /*0x693df9*/
        {
          v14 = GameSettings::FindFlagged(); /*0x693dfb*/
          v13 = v14 && !_strcmpi(v14 + 36, v49); /*0x693e20*/
        }
        if ( v48 == 17 && v13 ) /*0x693e2d*/
          break; /*0x693e2d*/
      }
      v15 = 3600; /*0x693e33*/
      if ( v33 != -1 ) /*0x693e3a*/
      {
        v16 = Timer::GetTicks() - v33; /*0x693e45*/
        if ( v16 >= 3600 ) /*0x693e4b*/
          goto LABEL_50; /*0x693e4b*/
        v15 = 3600 - v16; /*0x693e51*/
      }
      if ( !v15 ) /*0x693e55*/
        goto LABEL_50; /*0x693e55*/
    }
    v17 = v50; /*0x693e72*/
    strcpy(a1, v51); /*0x693e84*/
  }
  v36 = v17; /*0x693f18*/
  Debug::Log(aHostRespondedW); /*0x693f1c*/
  Debug::Log("File name is %s\n", a1); /*0x693f2b*/
LABEL_50:
  v20 = 3600; /*0x693f33*/
  if ( v33 != -1 ) /*0x693f3e*/
  {
    v21 = Timer::GetTicks() - v33; /*0x693f49*/
    if ( v21 >= 3600 ) /*0x693f4f*/
    {
LABEL_54:
      Debug::Log(aTimeoutWaiting_0); /*0x693f57*/
      return 0; /*0x693f70*/
    }
    v20 = 3600 - v21; /*0x693f51*/
  }
  if ( !v20 ) /*0x693f55*/
    goto LABEL_54; /*0x693f55*/
  Debug::Log(aSendingFileInf); /*0x693f78*/
  v34 = Timer::GetTicks(); /*0x693f95*/
  if ( a2 == 1 || a2 == 2 ) /*0x693faa*/
  {
    memset(v41, 0, sizeof(v41)); /*0x6940b8*/
    v42 = 0; /*0x6940ba*/
    v41[0] = 113; /*0x6940cb*/
    Stream::WriteBlock((int)&unk_A8EA70, (int)v41, 250, 1); /*0x6940d3*/
    while ( Count::GetCountQueue(&unk_A8EA70) > 0 ) /*0x6940e4*/
    {
      v26 = 3600; /*0x6940ea*/
      if ( v34 != -1 ) /*0x6940f1*/
      {
        v27 = Timer::GetTicks() - v34; /*0x6940fc*/
        if ( v27 >= 3600 ) /*0x694102*/
          break; /*0x694102*/
        v26 = 3600 - v27; /*0x694104*/
      }
      if ( !v26 ) /*0x694108*/
        break; /*0x694108*/
      Event::Dispatch(); /*0x69410a*/
    }
  }
  else
  {
    memset(v43, 0, sizeof(v43)); /*0x693fbe*/
    v44 = 0; /*0x693fc0*/
    v45 = 0; /*0x693fc2*/
    v43[0] = 21; /*0x693fc8*/
    strcpy((char *)&v43[1], ToWideStringChar(*(char **)dword_A8DA78)); /*0x693ff7*/
    if ( dword_A8B238 == 4 ) /*0x694007*/
    {
      v22 = GameSettings::FindFlagged(); /*0x694009*/
      if ( v22 ) /*0x694010*/
      {
        v23 = CharToWideString(v22 + 36); /*0x694015*/
        Network::SendToPlayer((int)unk_A8E9C0, (int)v43, 455, 1, (wchar_t *)v23); /*0x69402f*/
      }
    }
    else
    {
      Network::SendMessage((int)unk_A8E9C0, (int)v43, 455, 1, (int)&stru_A8BB1C, 0, 0); /*0x694053*/
    }
    while ( Network::GetQueueCount((int)unk_A8E9C0) > 0 ) /*0x694064*/
    {
      v24 = 3600; /*0x69406e*/
      if ( v34 != -1 ) /*0x694075*/
      {
        v25 = Timer::GetTicks() - v34; /*0x694080*/
        if ( v25 >= 3600 ) /*0x694086*/
          break; /*0x694086*/
        v24 = 3600 - v25; /*0x69408c*/
      }
      if ( !v24 ) /*0x694090*/
        break; /*0x694090*/
      Event::Dispatch(); /*0x694096*/
    }
  }
  v28 = 3600; /*0x69411d*/
  if ( v34 != -1 ) /*0x694128*/
  {
    v29 = Timer::GetTicks() - v34; /*0x694133*/
    if ( v29 >= 3600 ) /*0x694139*/
    {
LABEL_78:
      Debug::Log(aTimeoutWaiting_1); /*0x694141*/
      return 0; /*0x69415a*/
    }
    v28 = 3600 - v29; /*0x69413b*/
  }
  if ( !v28 ) /*0x69413f*/
    goto LABEL_78; /*0x69413f*/
  v30 = ReceiveNetworkFile(a1, v36, a2, a3); /*0x694173*/
  v31 = g_Str_true; /*0x694175*/
  if ( !v30 ) /*0x69417c*/
    v31 = g_Str_false; /*0x69417e*/
  Debug::Log("Receive_Remote_File returned %s\n", v31); /*0x694189*/
  return v30; /*0x693d6c*/
}



// ==== 0x006941A0  ReceiveNetworkFile  this=-  sig=csp ====
char __fastcall ReceiveNetworkFile(int a1, DWORD a2, int a3, char a4)
{
  char *v6; // ebp
  size_t v7; // esi
  wchar_t *StringCSF; // eax
  int v9; // edi
  int v10; // esi
  int v11; // esi
  int v12; // ebx
  char v13; // al
  char *Flagged; // eax
  _BYTE *v15; // eax
  int v16; // esi
  int v17; // esi
  unsigned __int16 v18; // dx
  int v19; // esi
  int v20; // eax
  char v21; // bl
  char v23; // [esp+21h] [ebp-77h]
  char v24[2]; // [esp+22h] [ebp-76h] BYREF
  signed int v25; // [esp+24h] [ebp-74h]
  int v26; // [esp+28h] [ebp-70h]
  LPCVOID lpBuffer; // [esp+2Ch] [ebp-6Ch]
  void *Block; // [esp+30h] [ebp-68h]
  int v29; // [esp+34h] [ebp-64h] BYREF
  int v30; // [esp+38h] [ebp-60h]
  DWORD nNumberOfBytesToWrite; // [esp+3Ch] [ebp-5Ch]
  char v32[4]; // [esp+40h] [ebp-58h] BYREF
  int Ticks; // [esp+44h] [ebp-54h]
  int v34; // [esp+48h] [ebp-50h]
  int v35; // [esp+4Ch] [ebp-4Ch]
  int v36; // [esp+50h] [ebp-48h]
  int v37; // [esp+54h] [ebp-44h]
  int v38; // [esp+58h] [ebp-40h]
  int v39; // [esp+5Ch] [ebp-3Ch]
  int v40; // [esp+60h] [ebp-38h]
  int v41; // [esp+64h] [ebp-34h]
  bool v42[12]; // [esp+68h] [ebp-30h] BYREF
  LPCSTR v43[9]; // [esp+74h] [ebp-24h] BYREF

  nNumberOfBytesToWrite = a2; /*0x6941ae*/
  Ticks = Timer::GetTicks(); /*0x6941bb*/
  v35 = 0; /*0x6941bf*/
  Waypoint::InitInvalid((Waypoint *)v42); /*0x6941c7*/
  v23 = 0; /*0x6941cc*/
  v6 = (char *)__2_YAPAXI_Z(0x1E7u); /*0x6941e1*/
  Debug::Log(); /*0x6941e3*/
  RawFileClass::Construct((BufferIOFileClass *)v43, a1); /*0x6941f0*/
  if ( (unsigned __int8)FileClass::Open((RawFileClass *)v43, 0) ) /*0x6941fb*/
    FileClass::Delete((RawFileClass *)v43); /*0x694208*/
  FileClass::Open2((RawFileClass *)v43, (const CHAR *)2); /*0x694213*/
  v7 = a2 / 0xC0; /*0x69422c*/
  v25 = a2 / 0xC0; /*0x69422f*/
  if ( a2 % 0xC0 ) /*0x69422a*/
    v25 = ++v7; /*0x694238*/
  Block = (void *)__2_YAPAXI_Z(v7); /*0x69424e*/
  memset(Block, 0, v7); /*0x694253*/
  v26 = 0; /*0x694257*/
  lpBuffer = (LPCVOID)__2_YAPAXI_Z(a2); /*0x694269*/
  if ( a4 ) /*0x694279*/
  {
    ProgressAnim::Init((int)&dword_AC4F58, 0, 1079574528, 1, 0); /*0x69428f*/
    SHPClass::Load((int)&dword_AC4F58, g_Str_File_PROGBARM_SHP, 0, 0); /*0x6942a2*/
    StringCSF = GetStringCSF(aGuiMaptransfer, 0, aDRa2mdpostSend, 355); /*0x6942c2*/
    TextRenderer::MeasureBuilding((int *)dword_AC4F58.__pad_0, -1, -1, (int)StringCSF, 0, 1); /*0x6942cf*/
    Screen::Capture(1, 0, a2, (int)v6); /*0x6942d8*/
    LoadScreen::Render((int)&dword_AC4F58, a2, (int)v6, NAN); /*0x6942ea*/
    Network::UpdateLatencyDisplay((int)&dword_AC4F58, 0, 0.0, NAN); /*0x694302*/
  }
  v9 = a3; /*0x694307*/
  if ( a3 == 3 || (v10 = 10800, a3 != 4) ) /*0x69431b*/
    v10 = 3600; /*0x69431d*/
  Ticks = Timer::GetTicks(); /*0x69432b*/
  v34 = v40; /*0x694333*/
  v35 = v10; /*0x69433f*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x694343*/
  {
    IPXManagerClass::createConnection(&unk_A8E9C0); /*0x69434a*/
    TacticalClass::SetCameraPosition(&unk_A8E9C0, 120, -1, 1200); /*0x69435d*/
  }
  if ( a3 == 3 || (v11 = 10800, a3 != 4) ) /*0x69436f*/
    v11 = 3600; /*0x694371*/
  Ticks = Timer::GetTicks(); /*0x694383*/
  v34 = v40; /*0x694387*/
  v35 = v11; /*0x69438b*/
  v12 = 0; /*0x69438f*/
  while ( v9 == 1 || v9 == 2 ) /*0x69439d*/
  {
    MessageLoop(); /*0x69452f*/
    Event::Dispatch(); /*0x694534*/
    if ( ObjectTypeClass::CreateInstance(&unk_A8EA70, (int)v6, (int)v32) <= 0 ) /*0x69454b*/
      goto LABEL_43; /*0x69454b*/
    if ( *(_DWORD *)v6 != 112 ) /*0x694555*/
      goto LABEL_43; /*0x694555*/
    v18 = *((_WORD *)v6 + 12); /*0x694561*/
    if ( *((_BYTE *)Block + v18) ) /*0x694567*/
      goto LABEL_43; /*0x69456a*/
    *((_BYTE *)Block + v18) = 1; /*0x694570*/
    ++v26; /*0x69457c*/
    v12 += 100; /*0x694580*/
    v39 = Timer::GetTicks(); /*0x69458c*/
    Ticks = v39; /*0x694595*/
    v34 = v40; /*0x69459b*/
    v35 = 1800; /*0x69459f*/
    v41 = 1800; /*0x6945ad*/
    Debug::Log(); /*0x6945b1*/
    qmemcpy((char *)lpBuffer + 192 * *((unsigned __int16 *)v6 + 12), v6 + 28, *((unsigned __int16 *)v6 + 13)); /*0x6945dd*/
    if ( a4 ) /*0x6945eb*/
    {
      v30 = v12 / v25; /*0x694604*/
      Network::UpdateLatencyDisplay((int)&dword_AC4F58, 0, (double)(v12 / v25), NAN); /*0x694611*/
    }
    if ( v26 == v25 ) /*0x694620*/
    {
      if ( a4 ) /*0x694685*/
        Network::UpdateLatencyDisplay((int)&dword_AC4F58, 0, 100.0, NAN); /*0x69469d*/
      v23 = 1; /*0x6946a2*/
LABEL_53:
      v21 = v23; /*0x6946a7*/
      goto LABEL_54; /*0x6946a7*/
    }
LABEL_42:
    v9 = a3; /*0x694622*/
LABEL_43:
    v19 = v35; /*0x694629*/
    if ( Ticks != -1 ) /*0x694634*/
    {
      v20 = Timer::GetTicks() - Ticks; /*0x69463f*/
      if ( v20 >= v19 ) /*0x694645*/
        goto LABEL_53; /*0x694645*/
      v19 -= v20; /*0x694647*/
    }
    if ( !v19 ) /*0x69464b*/
      goto LABEL_53; /*0x69464b*/
  }
  MessageLoop(); /*0x6943a3*/
  Event::Dispatch(); /*0x6943a8*/
  v29 = 487; /*0x6943c2*/
  if ( !Network::Send((Network *)&unk_A8E9C0, (int)v6, (int)&v29, (int)v42, (int)v24) ) /*0x6943ca*/
    goto LABEL_43; /*0x6943ca*/
  v13 = NetworkID::Compare(v42, (int)&stru_A8BB1C); /*0x6943e0*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x6943ec*/
  {
    Flagged = GameSettings::FindFlagged(); /*0x6943ee*/
    v13 = Flagged && !_strcmpi(Flagged + 36, v6 + 4); /*0x69440f*/
  }
  if ( *(_DWORD *)v6 != 18 ) /*0x694415*/
    goto LABEL_43; /*0x694415*/
  if ( !v13 ) /*0x69441d*/
    goto LABEL_43; /*0x69441d*/
  v15 = (char *)Block + *((unsigned __int16 *)v6 + 12); /*0x69442d*/
  if ( *v15 ) /*0x69442f*/
    goto LABEL_43; /*0x694432*/
  v16 = v26; /*0x694438*/
  *v15 = 1; /*0x69443c*/
  v12 += 100; /*0x694442*/
  v26 = v16 + 1; /*0x694448*/
  if ( v9 == 3 || (v17 = 10800, v9 != 4) ) /*0x694454*/
    v17 = 3600; /*0x694456*/
  v36 = Timer::GetTicks(); /*0x694471*/
  v38 = v17 / 2; /*0x69447a*/
  Ticks = v36; /*0x69447e*/
  v34 = v37; /*0x694482*/
  v35 = v17 / 2; /*0x694486*/
  if ( v36 != -1 ) /*0x69448a*/
    Timer::GetTicks(); /*0x694490*/
  Debug::Log(); /*0x6944b5*/
  qmemcpy((char *)lpBuffer + 192 * *((unsigned __int16 *)v6 + 12), v6 + 28, *((unsigned __int16 *)v6 + 13)); /*0x6944e1*/
  if ( a4 ) /*0x6944ef*/
  {
    v30 = v12 / v25; /*0x694508*/
    Network::UpdateLatencyDisplay((int)&dword_AC4F58, 0, (double)(v12 / v25), NAN); /*0x694515*/
  }
  if ( v26 != v25 ) /*0x694524*/
    goto LABEL_42; /*0x694524*/
  v21 = 1; /*0x694659*/
  if ( a4 ) /*0x69465d*/
    Network::UpdateLatencyDisplay((int)&dword_AC4F58, 0, 100.0, NAN); /*0x694675*/
LABEL_54:
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x6946b4*/
    IPXManagerClass::destroyConnection(&unk_A8E9C0); /*0x6946bb*/
  FileClass::Write2((RawFileClass *)v43, lpBuffer, nNumberOfBytesToWrite); /*0x6946ce*/
  __3_YAXPAX_Z((void *)lpBuffer); /*0x6946d8*/
  __3_YAXPAX_Z(Block); /*0x6946e2*/
  Debug::Log(); /*0x6946fa*/
  FileClass::CloseHandle((RawFileClass *)v43); /*0x694706*/
  Debug::Log(); /*0x694710*/
  if ( !v21 && (unsigned __int8)FileClass::Open((RawFileClass *)v43, 0) ) /*0x694722*/
  {
    FileClass::Delete((RawFileClass *)v43); /*0x69472f*/
    Debug::Log(); /*0x694739*/
  }
  __3_YAXPAX_Z(v6); /*0x694742*/
  RawFileClass::Dtor((BufferIOFileClass *)v43); /*0x69474e*/
  return v21; /*0x694755*/
}



// ==== 0x00694760  SendNetworkFile  this=char*  sig=csp ====
int __fastcall SendNetworkFile(char *Source, int a2, char a3, char a4)
{
  int result; // eax
  int Size; // ebx
  int v8; // edi
  int v9; // esi
  int v10; // eax
  int v11; // edi
  int v12; // esi
  int v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // esi
  int v17; // eax
  int v18; // esi
  int v19; // eax
  int v20; // edi
  int v21; // ebx
  int v22; // esi
  int v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // ebx
  int v27; // ebp
  wchar_t *StringCSF; // eax
  int v29; // edi
  int v30; // esi
  int v31; // edi
  int v32; // esi
  int v33; // eax
  char *v34; // edi
  int v35; // edx
  int v36; // eax
  int i; // edi
  int v38; // esi
  int j; // edi
  int v40; // esi
  int v41; // eax
  char v42; // bl
  int Ticks; // [esp+20h] [ebp-710h]
  int v44; // [esp+20h] [ebp-710h]
  int v45; // [esp+20h] [ebp-710h]
  int v46; // [esp+28h] [ebp-708h]
  char v47; // [esp+2Fh] [ebp-701h]
  int v48; // [esp+30h] [ebp-700h] BYREF
  int v49; // [esp+34h] [ebp-6FCh]
  int v50; // [esp+38h] [ebp-6F8h]
  int v51; // [esp+3Ch] [ebp-6F4h]
  char v52[2]; // [esp+4Eh] [ebp-6E2h] BYREF
  char v53[4]; // [esp+50h] [ebp-6E0h] BYREF
  CCFileClass v54; // [esp+54h] [ebp-6DCh] BYREF
  int v55[3]; // [esp+ACh] [ebp-684h] BYREF
  int v56; // [esp+B8h] [ebp-678h]
  Waypoint v57; // [esp+C0h] [ebp-670h] BYREF
  _BYTE v58[163]; // [esp+1A8h] [ebp-588h] BYREF
  char v59[89]; // [esp+24Bh] [ebp-4E5h] BYREF
  int v60; // [esp+2A4h] [ebp-48Ch] BYREF
  char v61[171]; // [esp+2A8h] [ebp-488h] BYREF
  int v62; // [esp+353h] [ebp-3DDh]
  char v63[277]; // [esp+357h] [ebp-3D9h] BYREF
  int v64[63]; // [esp+46Ch] [ebp-2C4h] BYREF
  int v65[114]; // [esp+568h] [ebp-1C8h] BYREF

  v51 = a2; /*0x694772*/
  Timer::GetTicks(); /*0x694776*/
  v47 = 0; /*0x69478b*/
  Debug::Log(); /*0x694790*/
  CCFileClass::Construct(&v54, Source); /*0x69479d*/
  if ( !(unsigned __int8)CCFileClass::Open(&v54, 0) ) /*0x6947a7*/
  {
    *(_DWORD *)v54.CDFileClass = &CCFileClass::`vftable'; /*0x6947b7*/
    v56 = 0; /*0x6947bf*/
    Vector::Clear((int)v55); /*0x6947c6*/
    *(_DWORD *)v54.CDFileClass = &off_7E1668; /*0x6947cf*/
    result = BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x6947d7*/
    LOBYTE(result) = 0; /*0x6947dc*/
    return result; /*0x6947e8*/
  }
  Size = CCFileClass::GetSize(&v54); /*0x6947f4*/
  v49 = Size; /*0x6947fa*/
  Ticks = Timer::GetTicks(); /*0x694803*/
  Debug::Log(); /*0x69481d*/
  if ( a2 != 1 && a2 != 2 ) /*0x694831*/
  {
    v60 = 17; /*0x69484f*/
    strcpy(v63, Source); /*0x69485d*/
    v62 = Size; /*0x69486c*/
    strcpy(v61, ToWideStringChar((char *)*dword_A8DA78)); /*0x694897*/
    if ( a3 ) /*0x6948a9*/
    {
      v8 = 1; /*0x6948b0*/
      if ( dword_A8DA84 > 1 ) /*0x6948b7*/
      {
        while ( 1 ) /*0x6948c0*/
        {
          Event::Dispatch(); /*0x6948c0*/
          if ( Network::SendToPlayer((int)&unk_A8E9C0, (int)&v60, 455, 1, (wchar_t *)dword_A8DA78[v8]) ) /*0x6948e3*/
            goto LABEL_12; /*0x6948ea*/
          v9 = 3600; /*0x6948f0*/
          if ( Ticks == -1 ) /*0x6948f6*/
          {
LABEL_11:
            if ( !v9 ) /*0x69490d*/
              goto LABEL_12; /*0x69490d*/
          }
          else
          {
            v10 = Timer::GetTicks() - Ticks; /*0x694901*/
            if ( v10 < 3600 ) /*0x694907*/
            {
              v9 = 3600 - v10; /*0x694909*/
              goto LABEL_11; /*0x694909*/
            }
LABEL_12:
            if ( ++v8 >= dword_A8DA84 ) /*0x694917*/
              goto LABEL_21; /*0x694917*/
          }
        }
      }
      goto LABEL_21; /*0x6948b7*/
    }
    v11 = 0; /*0x694923*/
    if ( dword_A8BB18 <= 0 ) /*0x694927*/
    {
LABEL_21:
      while ( Network::GetQueueCount(&unk_A8E9C0) > 0 ) /*0x6949ba*/
      {
        v14 = 3600; /*0x6949c4*/
        if ( Ticks != -1 ) /*0x6949cb*/
        {
          v15 = Timer::GetTicks() - Ticks; /*0x6949d6*/
          if ( v15 >= 3600 ) /*0x6949dc*/
            goto LABEL_34; /*0x6949dc*/
          v14 = 3600 - v15; /*0x6949e2*/
        }
        if ( !v14 ) /*0x6949e6*/
          break; /*0x6949e6*/
        Event::Dispatch(); /*0x6949ec*/
      }
      goto LABEL_34; /*0x6949fd*/
    }
    while ( 1 ) /*0x694930*/
    {
      Event::Dispatch(); /*0x694930*/
      Debug::Log(); /*0x69494b*/
      if ( Network::SendToPlayer((int)&unk_A8E9C0, (int)&v60, 455, 1, (wchar_t *)dword_A8DA78[byte_A8BB10[v11]]) ) /*0x694978*/
        goto LABEL_20; /*0x69497f*/
      v12 = 3600; /*0x694985*/
      if ( Ticks == -1 ) /*0x69498b*/
      {
LABEL_19:
        if ( !v12 ) /*0x6949a2*/
          goto LABEL_20; /*0x6949a2*/
      }
      else
      {
        v13 = Timer::GetTicks() - Ticks; /*0x694996*/
        if ( v13 < 3600 ) /*0x69499c*/
        {
          v12 = 3600 - v13; /*0x69499e*/
          goto LABEL_19; /*0x69499e*/
        }
LABEL_20:
        if ( ++v11 >= dword_A8BB18 ) /*0x6949ac*/
          goto LABEL_21; /*0x6949ac*/
      }
    }
  }
  *(_DWORD *)v58 = 111; /*0x694a1d*/
  strcpy(v59, Source); /*0x694a2b*/
  *(_DWORD *)&v58[158] = Size; /*0x694a42*/
  Stream::WriteBlock((int *)&unk_A8EA70, (int)v58, 250, 1); /*0x694a4f*/
  while ( Count::GetCountQueue((Count *)&unk_A8EA70) > 0 ) /*0x694a60*/
  {
    v16 = 3600; /*0x694a66*/
    if ( Ticks != -1 ) /*0x694a6d*/
    {
      v17 = Timer::GetTicks() - Ticks; /*0x694a78*/
      if ( v17 >= 3600 ) /*0x694a7e*/
        break; /*0x694a7e*/
      v16 = 3600 - v17; /*0x694a80*/
    }
    if ( !v16 ) /*0x694a84*/
      break; /*0x694a84*/
    Event::Dispatch(); /*0x694a86*/
  }
LABEL_34:
  v18 = 3600; /*0x694a99*/
  if ( Ticks != -1 ) /*0x694aa4*/
  {
    v19 = Timer::GetTicks() - Ticks; /*0x694aaf*/
    if ( v19 >= 3600 ) /*0x694ab5*/
    {
LABEL_38:
      Debug::Log(); /*0x694abd*/
      *(_DWORD *)v54.CDFileClass = &CCFileClass::`vftable'; /*0x694ad1*/
      v56 = 0; /*0x694ad9*/
      Vector::Clear((int)v55); /*0x694ae4*/
      *(_DWORD *)v54.CDFileClass = &off_7E1668; /*0x694aed*/
      result = BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x694af5*/
      LOBYTE(result) = 0; /*0x694afa*/
      return result; /*0x694b06*/
    }
    v18 = 3600 - v19; /*0x694ab7*/
  }
  if ( !v18 ) /*0x694abb*/
    goto LABEL_38; /*0x694abb*/
  Waypoint::InitInvalid(&v57); /*0x694b10*/
  v20 = 0; /*0x694b1c*/
  if ( a3 ) /*0x694b20*/
    v21 = dword_A8DA84 - 1; /*0x694b28*/
  else
    v21 = dword_A8BB18; /*0x694b2d*/
  v44 = Timer::GetTicks(); /*0x694b3c*/
  if ( a2 == 1 || a2 == 2 ) /*0x694b59*/
  {
    while ( 1 ) /*0x694bce*/
    {
      Event::Dispatch(); /*0x694bce*/
      if ( ObjectTypeClass::CreateInstance(&unk_A8EA70, (int)v64, (int)v53) > 0 && v64[0] == 113 ) /*0x694bf5*/
        break; /*0x694bf5*/
      v24 = 3600; /*0x694bfb*/
      if ( v44 != -1 ) /*0x694c02*/
      {
        v25 = Timer::GetTicks() - v44; /*0x694c0d*/
        if ( v25 >= 3600 ) /*0x694c13*/
          goto LABEL_62; /*0x694c13*/
        v24 = 3600 - v25; /*0x694c15*/
      }
      if ( !v24 || v21 <= 0 ) /*0x694c1d*/
        goto LABEL_62; /*0x694c1d*/
    }
    Debug::Log(); /*0x694c26*/
  }
  else
  {
    do /*0x694bc5*/
    {
      Event::Dispatch(); /*0x694b60*/
      v48 = 455; /*0x694b84*/
      if ( Network::Send((Network *)&unk_A8E9C0, (int)v65, (int)&v48, (int)&v57, (int)v52) && v65[0] == 21 ) /*0x694b9c*/
        ++v20; /*0x694b9e*/
      v22 = 3600; /*0x694ba3*/
      if ( v44 != -1 ) /*0x694baa*/
      {
        v23 = Timer::GetTicks() - v44; /*0x694bb5*/
        if ( v23 >= 3600 ) /*0x694bbb*/
          break; /*0x694bbb*/
        v22 = 3600 - v23; /*0x694bbd*/
      }
    }
    while ( v22 && v20 < v21 ); /*0x694bc5*/
  }
LABEL_62:
  v26 = (v49 + 191) / 192; /*0x694c2e*/
  FileClass::Load(&v54, (const CHAR *)1); /*0x694c51*/
  v27 = 0; /*0x694c56*/
  if ( a4 ) /*0x694c61*/
  {
    ProgressAnim::Init((int)&stru_AC4B30.__pad_EC[828], 0, 1079574528, 1, 0); /*0x694c75*/
    SHPClass::Load((int)&stru_AC4B30.__pad_EC[828], g_Str_File_PROGBARM_SHP, 0, 0); /*0x694c86*/
    StringCSF = GetStringCSF(aGuiMaptransfer, 0, aDRa2mdpostSend, 658); /*0x694ca5*/
    TextRenderer::MeasureBuilding((int *)&stru_AC4B30.__pad_EC[828], -1, -1, (int)StringCSF, 0, 1); /*0x694cb2*/
    Screen::Capture(1, 0, v26, 0); /*0x694cbb*/
    LoadScreen::Render((int)&stru_AC4B30.__pad_EC[828], v26, 0, NAN); /*0x694ccd*/
    Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 0.0, NAN); /*0x694ce2*/
  }
  v29 = v51; /*0x694ce7*/
  Timer::GetTicks(); /*0x694d03*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x694d20*/
  {
    IPXManagerClass::createConnection(&unk_A8E9C0); /*0x694d27*/
    TacticalClass::SetCameraPosition(&unk_A8E9C0, 240, -1, 1200); /*0x694d3d*/
  }
  if ( v29 == 3 || (v30 = 10800, v29 != 4) ) /*0x694d4f*/
    v30 = 3600; /*0x694d51*/
  v45 = Timer::GetTicks(); /*0x694d63*/
  v46 = v30; /*0x694d6b*/
  v48 = 0; /*0x694d6f*/
LABEL_70:
  v31 = v49; /*0x694d77*/
  do /*0x694fb0*/
  {
    while ( 1 ) /*0x694d7f*/
    {
      v32 = v46; /*0x694d7f*/
      if ( v45 != -1 ) /*0x694d86*/
      {
        v33 = Timer::GetTicks() - v45; /*0x694d91*/
        if ( v33 >= v46 ) /*0x694d97*/
          goto LABEL_115; /*0x694d97*/
        v32 = v46 - v33; /*0x694d9d*/
      }
      if ( !v32 ) /*0x694da1*/
        goto LABEL_115; /*0x694da1*/
      if ( v51 != 1 && v51 != 2 ) /*0x694db7*/
        break; /*0x694db7*/
      MessageLoop(); /*0x694fbb*/
      Event::Dispatch(); /*0x694fc0*/
      if ( v27 >= v26 ) /*0x694fcc*/
      {
        if ( !Count::GetCountQueue((Count *)&unk_A8EA70) ) /*0x6950e3*/
        {
          v47 = 1; /*0x69514d*/
          if ( a4 ) /*0x695154*/
            Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 100.0, NAN); /*0x69516c*/
LABEL_115:
          v42 = v47; /*0x695171*/
          goto LABEL_116; /*0x695171*/
        }
      }
      else
      {
        if ( Count::GetCountQueue((Count *)&unk_A8EA70) >= 2 ) /*0x694fda*/
          goto LABEL_70; /*0x694fda*/
        *(_DWORD *)&v57.__pad_0[12] = 112; /*0x694fe6*/
        *(_WORD *)&v57.__pad_0[36] = v27; /*0x694ff1*/
        *(_WORD *)&v57.__pad_0[38] = v31; /*0x694ff9*/
        if ( v31 >= 192 ) /*0x695001*/
          *(_WORD *)&v57.__pad_0[38] = 192; /*0x695003*/
        v31 -= *(unsigned __int16 *)&v57.__pad_0[38]; /*0x695021*/
        v49 = v31; /*0x695028*/
        v41 = CCFileClass::Read(&v54, &v57.__pad_0[40], *(unsigned __int16 *)&v57.__pad_0[38]); /*0x69502c*/
        if ( v41 == *(unsigned __int16 *)&v57.__pad_0[38] ) /*0x695040*/
        {
          if ( v45 != -1 ) /*0x69504f*/
            Timer::GetTicks(); /*0x695055*/
          Debug::Log(); /*0x695072*/
          Stream::WriteBlock((int *)&unk_A8EA70, (int)&v57.__pad_0[12], 220, 1); /*0x69508e*/
        }
        ++v27; /*0x69509e*/
        v48 += 100; /*0x6950a4*/
        if ( !a4 ) /*0x6950a8*/
          goto LABEL_70; /*0x6950a8*/
        v50 = v48 / v26; /*0x6950c5*/
        Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, (double)(v48 / v26), NAN); /*0x6950d2*/
      }
    }
    MessageLoop(); /*0x694dbd*/
    Event::Dispatch(); /*0x694dc2*/
    if ( v27 < v26 ) /*0x694dce*/
    {
      if ( Network::GetQueueCount(&unk_A8E9C0) < 10 ) /*0x694ddc*/
      {
        *(_DWORD *)&v57.__pad_0[12] = 18; /*0x694de4*/
        *(_WORD *)&v57.__pad_0[36] = v27; /*0x694def*/
        *(_WORD *)&v57.__pad_0[38] = v31; /*0x694df7*/
        if ( v31 >= 192 ) /*0x694dff*/
          *(_WORD *)&v57.__pad_0[38] = 192; /*0x694e01*/
        v34 = ToWideStringChar((char *)*dword_A8DA78); /*0x694e17*/
        v35 = v49; /*0x694e31*/
        strcpy(&v57.__pad_0[16], v34); /*0x694e38*/
        v49 = v35 - *(unsigned __int16 *)&v57.__pad_0[38]; /*0x694e5c*/
        v36 = CCFileClass::Read(&v54, &v57.__pad_0[40], *(unsigned __int16 *)&v57.__pad_0[38]); /*0x694e60*/
        if ( v36 == *(unsigned __int16 *)&v57.__pad_0[38] ) /*0x694e74*/
        {
          if ( v45 != -1 ) /*0x694e85*/
            Timer::GetTicks(); /*0x694e8b*/
          Debug::Log(); /*0x694ea6*/
          if ( a3 ) /*0x694eb7*/
          {
            for ( i = 1; i < dword_A8DA84; ++i ) /*0x694ec5*/
            {
              do /*0x694ef6*/
              {
                v38 = Network::SendToPlayer((int)&unk_A8E9C0, (int)&v57.__pad_0[12], 220, 1, (wchar_t *)dword_A8DA78[i]); /*0x694eed*/
                Event::Dispatch(); /*0x694eef*/
              }
              while ( !v38 ); /*0x694ef6*/
            }
          }
          else
          {
            for ( j = 0; j < dword_A8BB18; ++j ) /*0x694f0d*/
            {
              do /*0x694f42*/
              {
                v40 = Network::SendToPlayer( /*0x694f39*/
                        (int)&unk_A8E9C0,
                        (int)&v57.__pad_0[12],
                        220,
                        1,
                        (wchar_t *)dword_A8DA78[byte_A8BB10[j]]);
                Event::Dispatch(); /*0x694f3b*/
              }
              while ( !v40 ); /*0x694f42*/
            }
          }
        }
        ++v27; /*0x694f59*/
        v48 += 100; /*0x694f5f*/
        if ( a4 ) /*0x694f63*/
        {
          v50 = v48 / v26; /*0x694f80*/
          Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, (double)(v48 / v26), NAN); /*0x694f8d*/
        }
      }
      goto LABEL_70; /*0x694f92*/
    }
    if ( Network::GetQueueCount(&unk_A8E9C0) ) /*0x694f97*/
      goto LABEL_70; /*0x694f9e*/
  }
  while ( Network::GetQueueCount(&unk_A8E9C0) ); /*0x694fb0*/
  if ( v45 != -1 ) /*0x6950f5*/
    Timer::GetTicks(); /*0x6950fb*/
  Debug::Log(); /*0x695114*/
  v42 = 1; /*0x695125*/
  if ( a4 ) /*0x695127*/
    Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 100.0, NAN); /*0x69513f*/
LABEL_116:
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x69517c*/
    IPXManagerClass::destroyConnection(&unk_A8E9C0); /*0x695183*/
  Debug::Log(); /*0x69519c*/
  *(_DWORD *)v54.CDFileClass = &CCFileClass::`vftable'; /*0x6951ab*/
  v56 = 0; /*0x6951b3*/
  Vector::Clear((int)v55); /*0x6951be*/
  *(_DWORD *)v54.CDFileClass = &off_7E1668; /*0x6951c7*/
  result = BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x6951cf*/
  LOBYTE(result) = v42; /*0x6951d4*/
  return result; /*0x6947de*/
}



// ==== 0x006951F0  FindAndValidateMap  this=AbstractClass  sig=csp ====
char __fastcall Map_FindAndValidate(void *a1, int a2, const char *a3, int a4, char a5)
{
  const void *v5; // esi
  int v6; // ebp
  int v7; // esi
  int v8; // eax
  int v9; // eax
  void *v13[3]; // [esp+20h] [ebp-CCh] BYREF
  _DWORD v14[10]; // [esp+2Ch] [ebp-C0h] BYREF
  char v15; // [esp+54h] [ebp-98h]
  int v16; // [esp+58h] [ebp-94h]
  int v17; // [esp+5Ch] [ebp-90h]
  int v18[22]; // [esp+60h] [ebp-8Ch] BYREF
  _BYTE v19[12]; // [esp+B8h] [ebp-34h] BYREF
  int v20; // [esp+C4h] [ebp-28h]
  char Destination[32]; // [esp+CCh] [ebp-20h] BYREF

  v5 = a1; /*0x6951fa*/
  if ( !_strcmpi(a1, aRandmapSed) ) /*0x69520a*/
    return 0; /*0x69520a*/
  v6 = 0; /*0x695221*/
  if ( dword_A8B8D8 <= 0 ) /*0x695225*/
    return 0; /*0x69540d*/
  while ( _strcmpi((const void *)(*(_DWORD *)(dword_A8B8CC + 4 * v6) + 88), v5) ) /*0x695249*/
  {
LABEL_17:
    if ( ++v6 >= dword_A8B8D8 ) /*0x6953fb*/
      return 0; /*0x6953fb*/
  }
  CCFileClass::Construct(v18, (char *)(*(_DWORD *)(dword_A8B8CC + 4 * v6) + 88)); /*0x695260*/
  if ( !CCFileClass::Open(v18, 0) && a5 == 1 ) /*0x69527b*/
  {
    v7 = *(_DWORD *)(dword_A8B8CC + 4 * v6); /*0x695283*/
    v8 = Game::CheckForGameCD(60); /*0x69528b*/
    if ( !(unsigned __int8)ScenarioClass::CheckExists(v8) ) /*0x695293*/
    {
      v9 = GameOption::GetField(v7); /*0x69529e*/
      SetSoundWarning(v9); /*0x6952a5*/
    }
    ++dword_A8DAB4; /*0x6952bb*/
    if ( !(unsigned __int8)CD::`vftable'(dword_81C1D0) ) /*0x6952d5*/
    {
      --dword_A8DAB4; /*0x695418*/
      v18[0] = (int)&CCFileClass::`vftable'; /*0x69541d*/
      v20 = 0; /*0x695425*/
      Vector::Clear((int)v19); /*0x69542c*/
      v18[0] = (int)&off_7E1668; /*0x695435*/
      BufferIOFileClass::Dtor(v18); /*0x69543d*/
      return 0; /*0x69544e*/
    }
    --dword_A8DAB4; /*0x6952dc*/
  }
  if ( !CCFileClass::Open(v18, 0) || CCFileClass::GetSize(v18) != a2 ) /*0x695300*/
  {
LABEL_16:
    v18[0] = (int)&CCFileClass::`vftable'; /*0x6953c3*/
    v20 = 0; /*0x6953d2*/
    Vector::Clear((int)v19); /*0x6953d9*/
    v18[0] = (int)&off_7E1668; /*0x6953e2*/
    BufferIOFileClass::Dtor(v18); /*0x6953ea*/
    v5 = a1; /*0x6953ef*/
    goto LABEL_17; /*0x6953ef*/
  }
  v13[1] = 0; /*0x69530a*/
  v13[2] = 0; /*0x69530e*/
  GenericList::Constructor(v14); /*0x695312*/
  v14[0] = &List<INIClass::INISection *>::`vftable'; /*0x695321*/
  memset(&v14[7], 0, 12); /*0x695329*/
  v15 = 0; /*0x695335*/
  v16 = 0; /*0x695339*/
  v17 = 0; /*0x69533d*/
  v13[0] = &INIClass::`vftable'; /*0x695341*/
  FileStraw::Open(v13, (int)v18, 0); /*0x695349*/
  INIClass::GetString( /*0x69536b*/
    (unsigned __int8 ***)v13,
    (unsigned __int8 *)g_INI_Key_Digest,
    (unsigned __int8 *)::a1,
    aNoDigestHereMa,
    Destination,
    32);
  if ( a3 && *a3 && strcmp(a3, Destination) ) /*0x69538f*/
  {
    HashTable::DestroyHashTableINIClass(v13); /*0x6953be*/
    goto LABEL_16; /*0x6953be*/
  }
  strcpy((char *)a1, (const char *)(*(_DWORD *)(dword_A8B8CC + 4 * v6) + 88)); /*0x695472*/
  HashTable::DestroyHashTableINIClass(v13); /*0x69547f*/
  v18[0] = (int)&CCFileClass::`vftable'; /*0x69548b*/
  v20 = 0; /*0x695493*/
  Vector::Clear((int)v19); /*0x69549a*/
  v18[0] = (int)&off_7E1668; /*0x6954a3*/
  BufferIOFileClass::Dtor(v18); /*0x6954ab*/
  return 1; /*0x695401*/
}



// ==== 0x006954C0  sub_6954C0  this=-  sig=ida-proto ====
int sub_6954C0()
{
  dword_B05750 = 0; /*0x6954c2*/
  dword_B05754 = 0; /*0x6954c7*/
  dword_B05758 = 0; /*0x6954cc*/
  dword_B0575C = 0; /*0x6954d1*/
  return 0; /*0x6954d6*/
}



// ==== 0x006954E0  sub_6954E0  this=-  sig=ida-proto ====
void sub_6954E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6954ec*/
  dbl_B05768 = Math::Sqrt(v0 + v0); /*0x6954fe*/
}



// ==== 0x00695510  sub_695510  this=-  sig=ida-proto ====
void sub_695510()
{
  dbl_B057B8 = dbl_B05768 / 60.0; /*0x69551c*/
}



// ==== 0x00695530  sub_695530  this=-  sig=ida-proto ====
void sub_695530()
{
  dbl_B057A0 = 1.0 / dbl_B057B8; /*0x69553c*/
}



// ==== 0x00695550  sub_695550  this=-  sig=ida-proto ====
void sub_695550()
{
  dbl_B05798 = 0.0174532925199433 * 45.0; /*0x69555c*/
}



// ==== 0x00695570  sub_695570  this=-  sig=ida-proto ====
void sub_695570()
{
  dbl_B05770 = 0.0174532925199433 * 60.0; /*0x69557c*/
}



// ==== 0x00695590  sub_695590  this=-  sig=ida-proto ====
void sub_695590()
{
  dbl_B05748 = 0.0174532925199433 * 90.0; /*0x69559c*/
}



// ==== 0x006955B0  sub_6955B0  this=-  sig=ida-proto ====
__int64 sub_6955B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B05748 - dbl_B05770); /*0x6955c2*/
  result = Math::RoundToInt(v0 * dbl_B05768 * 0.5); /*0x6955d6*/
  dword_B057C0 = result; /*0x6955db*/
  return result; /*0x6955e0*/
}



// ==== 0x006955F0  sub_6955F0  this=-  sig=ida-proto ====
void sub_6955F0()
{
  dbl_B05778 = Math::ArcTan((double)dword_B057C0 * 0.00390625); /*0x695607*/
}



// ==== 0x00695620  sub_695620  this=-  sig=ida-proto ====
void sub_695620()
{
  dbl_B05790 = Math::ArcTan((double)(2 * dword_B057C0) / dbl_B05768); /*0x695642*/
}



// ==== 0x00695650  sub_695650  this=-  sig=ida-proto ====
__int64 sub_695650()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B057C0) + 0.5); /*0x69566b*/
  dword_B057B4 = result; /*0x695670*/
  return result; /*0x695676*/
}



// ==== 0x00695680  sub_695680  this=-  sig=ida-proto ====
int sub_695680()
{
  word_B05760 = 0; /*0x695682*/
  word_B05762 = 0; /*0x695688*/
  return 0; /*0x69568e*/
}



// ==== 0x00695690  sub_695690  this=-  sig=ida-proto ====
int sub_695690()
{
  dword_B05780 = 0; /*0x695692*/
  dword_B05784 = 0; /*0x695697*/
  dword_B05788 = 0; /*0x69569c*/
  return 0; /*0x6956a1*/
}



// ==== 0x006956B0  sub_6956B0  this=-  sig=ida-proto ====
int sub_6956B0()
{
  dword_B057B0 = 0; /*0x6956b5*/
  dword_B057A8 = 128; /*0x6956bf*/
  dword_B057AC = 128; /*0x6956c4*/
  return 128; /*0x6956c9*/
}



// ==== 0x006956D0  Network::sendGameEvent  this=NetworkDialog  sig=csp ====
bool __thiscall Network::sendGameEvent(bool *this, _DWORD *a2)
{
  HWND Dialog; // eax
  TechnoTypeClass *v4; // ecx
  bool v5; // zf
  int v7; // [esp+0h] [ebp-8h]

  this->q004 = -1; /*0x6956e0*/
  Dialog = (HWND)CreateDialog(0xEDu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))DlgProcLoadGame, 0); /*0x6956e7*/
  *(_DWORD *)this = Dialog; /*0x6956ee*/
  if ( !Dialog ) /*0x6956f1*/
    return this->q004 == 1; /*0x6956f1*/
  SetWindowLongA(Dialog, 8, (LONG)this); /*0x6956f7*/
  NetworkDialog::InitModemSettings((NetworkDialog *)this, a2); /*0x695704*/
  Dialog::Show(*(Dialog **)this); /*0x69570c*/
  while ( *((int *)this + 1) < 0 ) /*0x695716*/
  {
    if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x69571f*/
      break; /*0x69571f*/
    LOBYTE(v4) = 0; /*0x695721*/
    ScreenSaver::Process(v4, v7); /*0x695723*/
  }
  Dialog::Destroy(*(Dialog **)this); /*0x695732*/
  v5 = this->q004 == 1; /*0x695737*/
  if ( this->q004 == 1 ) /*0x69573b*/
  {
    qmemcpy(a2, this + 136, 0x70u); /*0x695749*/
    return this->q004 == 1; /*0x69574c*/
  }
  return v5; /*0x695750*/
}



// ==== 0x00695760  DlgProcLoadGame  this=-  sig=csp ====
int __stdcall LoadGame_DlgProc(HWND hWnd, WPARAM wParam, unsigned int a3, HWND a4)
{
  int result; // eax
  LONG WindowLongA; // ebx
  HWND DlgItem; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // edi
  void (__stdcall *v11)(HWND, UINT, WPARAM, LPARAM); // ebp
  const char *v12; // edi
  HWND v13; // eax
  HWND v14; // esi
  char *v15; // eax
  char *v16; // edi
  LRESULT v17; // eax
  LPARAM v18; // ebx
  HWND v19; // eax
  HWND v20; // esi
  LRESULT wParama; // [esp+14h] [ebp+8h]
  LRESULT wParamb; // [esp+14h] [ebp+8h]

  result = BaseDialogProc(hWnd, wParam, a3, (unsigned int)a4); /*0x695777*/
  if ( result ) /*0x69577e*/
    return result; /*0x69577e*/
  WindowLongA = GetWindowLongA(hWnd, 8); /*0x69578e*/
  if ( wParam != 273 ) /*0x695799*/
  {
    if ( wParam == 1175 ) /*0x6957a0*/
    {
      DlgItem = GetDlgItem(hWnd, 1629); /*0x6957b2*/
      if ( DlgItem ) /*0x6957bc*/
        SendMessageA(DlgItem, 0xC5u, 0x28u, 0); /*0x6957c8*/
      v7 = GetDlgItem(hWnd, 1631); /*0x6957d0*/
      if ( v7 ) /*0x6957d4*/
        SendMessageA(v7, 0xC5u, 0x3Eu, 0); /*0x6957e0*/
      v8 = GetDlgItem(hWnd, 1626); /*0x6957e8*/
      if ( v8 ) /*0x6957ec*/
      {
        SendMessageA(v8, 0xC5u, 0xFu, 0); /*0x6957fc*/
        return 0; /*0x695804*/
      }
    }
    return 0; /*0x6957ec*/
  }
  if ( (unsigned __int16)a3 > 0x65Bu ) /*0x695813*/
  {
    switch ( (__int16)a3 ) /*0x695a7f*/
    {
      case 1628: /*0x695a7f*/
        if ( HIWORD(a3) ) /*0x695b69*/
        {
          SendMessageA(a4, 0xF1u, 1u, 0); /*0x695b78*/
          SendDlgItemMessageA(hWnd, 1627, 0xF1u, 0, 0); /*0x695b8d*/
        }
        return 0; /*0x695b8d*/
      case 1629: /*0x695a7f*/
        if ( HIWORD(a3) != 1281 ) /*0x695b2d*/
          return 0; /*0x695b2d*/
        goto LABEL_55; /*0x695b2d*/
      case 1630: /*0x695a7f*/
        if ( HIWORD(a3) != 2 ) /*0x695ab1*/
          return 0; /*0x695ab1*/
        if ( SendMessageA(a4, 0x18Bu, 0, 0) <= 0 ) /*0x695acb*/
          return 0; /*0x695acb*/
        v17 = SendMessageA(a4, 0x188u, 0, 0); /*0x695adb*/
        if ( v17 == -1 ) /*0x695ae0*/
          return 0; /*0x695ae0*/
        v18 = WindowLongA + 8; /*0x695ae6*/
        SendMessageA(a4, 0x4B7u, v17, v18); /*0x695af1*/
        v19 = GetDlgItem(hWnd, 1629); /*0x695af9*/
        v20 = v19; /*0x695aff*/
        if ( !v19 ) /*0x695b03*/
          return 0; /*0x695b03*/
        SendMessageA(v19, 0x4B4u, 0, v18); /*0x695b12*/
        SetFocus(v20); /*0x695b15*/
        return 0; /*0x695b21*/
      case 1631: /*0x695a7f*/
        if ( HIWORD(a3) != 1281 && HIWORD(a3) != 512 ) /*0x695a95*/
          return 0; /*0x695a95*/
        DlgProcLoadGame_Load(WindowLongA); /*0x695a9d*/
        return 0; /*0x695aa8*/
      case 1632: /*0x695a7f*/
        if ( HIWORD(a3) ) /*0x695b54*/
          return 0; /*0x695b57*/
        DlgProcLoadGame_Load_696C40(WindowLongA); /*0x695b5b*/
        return 0; /*0x695b66*/
      case 1633: /*0x695a7f*/
        if ( HIWORD(a3) ) /*0x695b3f*/
          return 0; /*0x695b42*/
LABEL_55:
        DlgProcLoadGame_Load_696AE0(WindowLongA); /*0x695b2f*/
        result = 0; /*0x695b39*/
        break; /*0x695b3c*/
      default:
        return 0;
    }
    return result; /*0x695b3c*/
  }
  if ( (unsigned __int16)a3 == 1627 ) /*0x695819*/
  {
    if ( HIWORD(a3) ) /*0x695a3a*/
    {
      SendMessageA(a4, 0xF1u, 1u, 0); /*0x695a4d*/
      SendDlgItemMessageA(hWnd, 1628, 0xF1u, 0, 0); /*0x695a62*/
      return 0; /*0x695a6e*/
    }
    return 0; /*0x695a3d*/
  }
  if ( (unsigned __int16)a3 <= 0x3EBu ) /*0x695824*/
  {
    switch ( (unsigned __int16)a3 ) /*0x695826*/
    {
      case 0x3EBu: /*0x695826*/
        goto LABEL_65; /*0x695826*/
      case 1u: /*0x695826*/
        if ( !HIWORD(a3) && (unsigned __int8)ApplyModemConfigSettings(WindowLongA) == 1 ) /*0x695886*/
        {
          *(_DWORD *)(WindowLongA + 4) = 1; /*0x69588c*/
          return 0; /*0x695899*/
        }
        return 0; /*0x695886*/
      case 2u: /*0x695826*/
        if ( !HIWORD(a3) ) /*0x69585b*/
        {
          *(_DWORD *)(WindowLongA + 4) = 2; /*0x695864*/
          return 0; /*0x695871*/
        }
        return 0; /*0x69585e*/
      case 0x3EAu: /*0x695826*/
LABEL_65:
        if ( HIWORD(a3) ) /*0x695839*/
        {
          SendMessageA(a4, 0xF1u, 1u, 0); /*0x69584c*/
          return 0; /*0x695858*/
        }
        break;
    }
    return 0; /*0x695b93*/
  }
  if ( (unsigned __int16)a3 == 1623 ) /*0x6958a1*/
  {
    if ( HIWORD(a3) != 1 ) /*0x695998*/
      return 0; /*0x695998*/
    v11 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x69599e*/
    wParamb = SendMessageA(a4, 0x147u, 0, 0); /*0x6959b9*/
    if ( SendMessageA(a4, 0x150u, wParamb, 0) == 4 ) /*0x6959c2*/
    {
      v12 = (const char *)(WindowLongA + 8); /*0x6959c8*/
      SendMessageA(a4, 0x4BDu, wParamb, WindowLongA + 8); /*0x6959d3*/
      v13 = GetDlgItem(*(HWND *)WindowLongA, 1631); /*0x6959dd*/
      goto LABEL_38; /*0x6959dd*/
    }
LABEL_34:
    SetFocus(0); /*0x695981*/
    return 0; /*0x69598f*/
  }
  if ( (unsigned __int16)a3 != 1625 ) /*0x6958aa*/
  {
    if ( (unsigned __int16)a3 == 1626 && (HIWORD(a3) == 1281 || HIWORD(a3) == 512) ) /*0x6958c6*/
    {
      v9 = GetDlgItem(*(HWND *)WindowLongA, 1626); /*0x6958d4*/
      v10 = v9; /*0x6958da*/
      if ( v9 ) /*0x6958de*/
      {
        ShowWindow(v9, 0); /*0x6958e7*/
        EnableWindow(v10, 0); /*0x6958f0*/
        SendMessageA(v10, 0x4B5u, 0x10u, WindowLongA + 8); /*0x695902*/
        *(_BYTE *)(WindowLongA + 23) = 0; /*0x69590a*/
        String::Trim((char *)(WindowLongA + 8)); /*0x69590e*/
        _strupr((char *)(WindowLongA + 8)); /*0x695914*/
        ListBox::SetCustomEntry((HWND *)WindowLongA, 1625, 3, (void *)(WindowLongA + 8)); /*0x695926*/
        return 0; /*0x695931*/
      }
    }
    return 0; /*0x6958de*/
  }
  if ( HIWORD(a3) != 1 ) /*0x69593a*/
    return 0; /*0x69593a*/
  v11 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x695940*/
  wParama = SendMessageA(a4, 0x147u, 0, 0); /*0x69595b*/
  if ( SendMessageA(a4, 0x150u, wParama, 0) != 3 ) /*0x695964*/
    goto LABEL_34; /*0x695964*/
  v12 = (const char *)(WindowLongA + 8); /*0x69596a*/
  SendMessageA(a4, 0x4BDu, wParama, WindowLongA + 8); /*0x695975*/
  v13 = GetDlgItem(*(HWND *)WindowLongA, 1626); /*0x69597f*/
LABEL_38:
  v14 = v13; /*0x6959e3*/
  if ( !v13 ) /*0x6959e7*/
    return 0; /*0x6959e7*/
  ShowWindow(v13, 5); /*0x6959f0*/
  EnableWindow(v14, 1); /*0x6959f9*/
  v15 = strchr(v12, 45); /*0x695a02*/
  if ( v15 ) /*0x695a0e*/
  {
    v16 = v15 + 1; /*0x695a10*/
    String::Trim(v15 + 1); /*0x695a13*/
  }
  else
  {
    v16 = &g_INI_DefaultBuffer; /*0x695a1a*/
  }
  v11(v14, 0x4B4u, 0, (LPARAM)v16); /*0x695a28*/
  SetFocus(v14); /*0x695a2b*/
  return 0; /*0x6957ff*/
}



// ==== 0x00695BC0  ObjectClass::ApplyModemConfigSettings  this=ObjectClass  sig=csp ====
char __thiscall ApplyModemConfigSettings(ObjectClass *this)
{
  HWND DlgItem; // eax
  HWND v3; // esi
  LRESULT v4; // edi
  LRESULT v5; // eax
  char *v6; // eax
  unsigned int v7; // edx
  char *v8; // edi
  void **v9; // esi
  char v10; // cl
  unsigned int v11; // eax
  HWND v12; // eax
  HWND v13; // esi
  LRESULT v14; // eax
  LRESULT v15; // eax
  HWND v16; // eax
  LRESULT v17; // eax
  HWND v18; // eax
  HWND v19; // esi
  LRESULT v20; // edi
  LRESULT v21; // eax
  char *v22; // eax
  HWND v23; // eax
  HWND v24; // eax
  HWND v25; // eax
  int v26; // eax
  int v27; // eax
  int *v28; // eax
  int *v30; // eax
  HWND vtable0; // [esp-8h] [ebp-20h]
  wchar_t *StringCSF; // [esp+0h] [ebp-18h]
  wchar_t *v33; // [esp+0h] [ebp-18h]
  AnimClass **p_parachute; // [esp+10h] [ebp-8h]

  Debug::Log(); /*0x695bce*/
  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1623); /*0x695bdf*/
  v3 = DlgItem; /*0x695beb*/
  if ( DlgItem ) /*0x695bef*/
  {
    v4 = SendMessageA(DlgItem, 0x147u, 0, 0); /*0x695c01*/
    v5 = SendMessageA(v3, 0x150u, v4, 0); /*0x695c0c*/
    this->parachute = (AnimClass *)1; /*0x695c11*/
    this->u32_2E = 0; /*0x695c1b*/
    switch ( v5 ) /*0x695c28*/
    {
      case 0: /*0x695c28*/
        this->parachute = (AnimClass *)1016; /*0x695c2f*/
        break; /*0x695c39*/
      case 1: /*0x695c28*/
        this->parachute = (AnimClass *)760; /*0x695c3e*/
        break; /*0x695c48*/
      case 2: /*0x695c28*/
        this->parachute = (AnimClass *)1000; /*0x695c4d*/
        break; /*0x695c57*/
      case 3: /*0x695c28*/
        this->parachute = (AnimClass *)744; /*0x695c5c*/
        break; /*0x695c66*/
      case 4: /*0x695c28*/
        SendMessageA(v3, 0x4BDu, v4, (LPARAM)&this->?); /*0x695c73*/
        BYTE2(this->ambientSoundController[2]) = 0; /*0x695c7b*/
        v6 = strchr((const char *)&this->?, 45); /*0x695c7f*/
        if ( v6 ) /*0x695c89*/
        {
          v7 = strlen(v6 + 1) + 1; /*0x695c93*/
          qmemcpy((char *)this + 184, v6 + 1, 4 * (v7 >> 2)); /*0x695ca6*/
          v9 = (void **)&v6[4 * (v7 >> 2) + 1]; /*0x695ca6*/
          v8 = (char *)this + 4 * (v7 >> 2) + 184; /*0x695ca6*/
          v10 = v7; /*0x695ca8*/
          goto LABEL_10; /*0x695caa*/
        }
        break; /*0x695caa*/
      default:
        SendMessageA(v3, 0x4BDu, v4, (LPARAM)&this->?); /*0x695cb7*/
        BYTE2(this->ambientSoundController[2]) = 0; /*0x695cc1*/
        v11 = strlen((const char *)&this->?) + 1; /*0x695cc5*/
        qmemcpy((char *)this + 184, &this->?, 4 * (v11 >> 2)); /*0x695cd8*/
        v9 = &this->? + (v11 >> 2); /*0x695cd8*/
        v8 = (char *)this + 4 * (v11 >> 2) + 184; /*0x695cd8*/
        v10 = v11; /*0x695cda*/
LABEL_10:
        qmemcpy(v8, v9, v10 & 3); /*0x695cdc*/
        break; /*0x695cdf*/
    }
  }
  p_parachute = &this->parachute; /*0x695cf3*/
  Debug::Log(); /*0x695cf7*/
  Debug::Log(); /*0x695d08*/
  v12 = GetDlgItem((HWND)this->AbstractClass, 1624); /*0x695d1f*/
  v13 = v12; /*0x695d21*/
  if ( v12 ) /*0x695d25*/
  {
    v14 = SendMessageA(v12, 0x147u, 0, 0); /*0x695d31*/
    v15 = SendMessageA(v13, 0x150u, v14, 0); /*0x695d3c*/
    swscanf((&off_83EB58)[v15], g_Str_Fmt_PctD, &this->isAliveFlag); /*0x695d52*/
  }
  Debug::Log(); /*0x695d66*/
  v16 = GetDlgItem((HWND)this->AbstractClass, 1630); /*0x695d77*/
  if ( v16 ) /*0x695d7b*/
  {
    v17 = SendMessageA(v16, 0x188u, 0, 0); /*0x695d87*/
    if ( v17 == -1 || !dword_A8DB5C ) /*0x695d96*/
      *(_DWORD *)&this->isInLogic = -1; /*0x695da0*/
    else
      *(_DWORD *)&this->isInLogic = v17; /*0x695d98*/
  }
  v18 = GetDlgItem((HWND)this->AbstractClass, 1625); /*0x695db3*/
  v19 = v18; /*0x695db5*/
  if ( v18 ) /*0x695db9*/
  {
    v20 = SendMessageA(v18, 0x147u, 0, 0); /*0x695dc7*/
    v21 = SendMessageA(v19, 0x150u, v20, 0); /*0x695dd2*/
    this->location[0] = v21; /*0x695dd7*/
    LOBYTE(this->lineTrailer) = 0; /*0x695ddd*/
    if ( v21 == 3 ) /*0x695de4*/
    {
      SendMessageA(v19, 0x4BDu, v20, (LPARAM)&this->?); /*0x695df1*/
      HIBYTE(this->?) = 0; /*0x695df9*/
      v22 = strchr((const char *)&this->?, 45); /*0x695dfd*/
      if ( v22 ) /*0x695e07*/
        strcpy((char *)&this->lineTrailer, v22 + 1); /*0x695e24*/
    }
  }
  vtable0 = (HWND)this->AbstractClass; /*0x695e3b*/
  this->lastLayer = 0; /*0x695e3c*/
  v23 = GetDlgItem(vtable0, 1627); /*0x695e46*/
  if ( v23 && SendMessageA(v23, 0xF0u, 0, 0) == 1 ) /*0x695e5f*/
    this->lastLayer = 1; /*0x695e61*/
  Debug::Log(); /*0x695e88*/
  v24 = GetDlgItem((HWND)this->AbstractClass, 1002); /*0x695e99*/
  if ( v24 ) /*0x695e9d*/
    this->location[2] = SendMessageA(v24, 0xF0u, 0, 0) == 1; /*0x695eaf*/
  v25 = GetDlgItem((HWND)this->AbstractClass, 1003); /*0x695eca*/
  if ( v25 ) /*0x695ece*/
    this->location[1] = SendMessageA(v25, 0xF0u, 0, 0) == 1; /*0x695ee0*/
  v26 = Modem::OpenPort((Modem *)&unk_A8EA70, p_parachute); /*0x695efc*/
  if ( !v26 ) /*0x695f08*/
    return 1; /*0x695fae*/
  v27 = v26 - 1; /*0x695f0e*/
  if ( v27 ) /*0x695f0f*/
  {
    if ( v27 == 1 ) /*0x695f12*/
    {
      StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_SerialEd_cpp, 535); /*0x695f3c*/
      v28 = (int *)GetStringCSF(aTxtIrqAlreadyI, 0, g_Str_File_SerialEd_cpp, 535); /*0x695f4e*/
      Dialog::ShowMessageBox(v28, StringCSF, 0, 0, 0, (int)asc_82083C); /*0x695f58*/
      return 0; /*0x695f62*/
    }
  }
  else
  {
    v33 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_SerialEd_cpp, 531); /*0x695f87*/
    v30 = (int *)GetStringCSF(aTxtUnableToOpe, 0, g_Str_File_SerialEd_cpp, 531); /*0x695f99*/
    Dialog::ShowMessageBox(v30, v33, 0, 0, 0, (int)p_parachute); /*0x695fa3*/
  }
  return 0; /*0x695f01*/
}



// ==== 0x00695FD0  NetworkDialog::InitModemSettings  this=NetworkDialog  sig=csp ====
int __thiscall NetworkDialog::InitModemSettings(NetworkDialog *this, _DWORD *a2)
{
  HWND (__stdcall *v3)(HWND, int); // esi
  HWND DlgItem; // eax
  HWND v5; // edi
  LPARAM i; // esi
  LRESULT v7; // eax
  WPARAM ListBoxItem; // eax
  HWND v9; // eax
  HWND v10; // eax
  char *v11; // edx
  int v12; // eax
  HWND v13; // eax
  int result; // eax
  bool v15; // [esp+13h] [ebp-5h]
  char *v16; // [esp+14h] [ebp-4h]

  qmemcpy((char *)this + 136, a2, 0x70u); /*0x695fea*/
  if ( !*((_DWORD *)this + 34) ) /*0x695fec*/
    *((_DWORD *)this + 34) = 760; /*0x695ff1*/
  if ( *((_DWORD *)this + 35) == -1 ) /*0x696002*/
    *((_DWORD *)this + 35) = 3; /*0x696004*/
  if ( *((_DWORD *)this + 36) == -1 ) /*0x696014*/
    *((_DWORD *)this + 36) = 57600; /*0x696016*/
  InitializeModemPortSelect((ObjectClass *)this); /*0x696022*/
  NetworkDialog::Dispatch(this); /*0x696029*/
  v3 = GetDlgItem; /*0x696030*/
  DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1625); /*0x69603c*/
  v5 = DlgItem; /*0x696044*/
  if ( DlgItem ) /*0x696048*/
  {
    SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x696054*/
    for ( i = 0; i < 4; ++i ) /*0x696056*/
    {
      v7 = SendMessageA(v5, 0x4C2u, 0, *(_DWORD *)(dword_A8DB68 + 4 * i)); /*0x69606a*/
      SendMessageA(v5, 0x151u, v7, i); /*0x696074*/
    }
    ListBoxItem = FindListBoxItem(v5, -1, *((_DWORD *)this + 39)); /*0x696088*/
    SendMessageA(v5, 0x14Eu, ListBoxItem, 0); /*0x696096*/
    v3 = GetDlgItem; /*0x696098*/
  }
  v15 = *((_DWORD *)this + 37) == 0; /*0x6960ae*/
  v9 = v3(*(HWND *)this->__pad_0, 1628); /*0x6960b3*/
  if ( v9 ) /*0x6960b7*/
    SendMessageA(v9, 0xF1u, v15, 0); /*0x6960ce*/
  v10 = v3(*(HWND *)this->__pad_0, 1627); /*0x6960d8*/
  if ( v10 ) /*0x6960dc*/
    SendMessageA(v10, 0xF1u, !v15, 0); /*0x6960f2*/
  if ( !dword_A8DB5C ) /*0x6960fb*/
  {
    v11 = (char *)__2_YAPAXI_Z(8u); /*0x696108*/
    v16 = v11; /*0x696117*/
    strcpy(v11, (const char *)&off_832A08); /*0x69612a*/
    if ( dword_A8DB5C >= dword_A8DB54 ) /*0x696140*/
    {
      if ( !byte_A8DB59 && dword_A8DB54 /*0x69616a*/
        || dword_A8DB60 <= 0
        || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8DB4C + 8))(
              &dword_A8DB4C,
              dword_A8DB54 + dword_A8DB60,
              0) )
      {
        goto LABEL_23; /*0x69616f*/
      }
      v11 = v16; /*0x696171*/
    }
    v12 = dword_A8DB5C++; /*0x69617b*/
    *(_DWORD *)(dword_A8DB50 + 4 * v12) = v11; /*0x69618a*/
LABEL_23:
    v3 = GetDlgItem; /*0x69618d*/
    *((_DWORD *)this + 38) = 0; /*0x696193*/
  }
  NetworkDialog::UpdateListBox(this); /*0x69619d*/
  v13 = v3(*(HWND *)this->__pad_0, 1003); /*0x6961ac*/
  if ( v13 ) /*0x6961b0*/
    SendMessageA(v13, 0xF1u, a2[6] != 0, 0); /*0x6961c9*/
  result = (int)v3(*(HWND *)this->__pad_0, 1002); /*0x6961d3*/
  if ( result ) /*0x6961d7*/
    return SendMessageA((HWND)result, 0xF1u, a2[7] != 0, 0); /*0x6961f0*/
  return result; /*0x6961f2*/
}



// ==== 0x00696200  ObjectClass::InitializeModemPortSelect  this=ObjectClass  sig=csp ====
int __thiscall InitializeModemPortSelect(ObjectClass *this)
{
  int result; // eax
  HWND v3; // esi
  wchar_t **v4; // edi
  wchar_t *StringCSF; // eax
  LRESULT v6; // eax
  int v7; // edi
  int v8; // eax
  const char **v9; // eax
  void **v10; // edi
  const char *v11; // eax
  LRESULT v12; // eax
  wchar_t *v13; // eax
  LRESULT v14; // eax
  LRESULT ListBoxItem; // edi
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  AnimClass *parachute; // eax
  char *v19; // eax
  int v20; // eax
  wchar_t *v21; // eax
  AnimClass *v22; // [esp-4h] [ebp-218h]
  LPARAM lParam; // [esp+10h] [ebp-204h]
  LPARAM lParama; // [esp+10h] [ebp-204h]
  wchar_t Destination[128]; // [esp+14h] [ebp-200h] BYREF
  wchar_t Buffer[128]; // [esp+114h] [ebp-100h] BYREF

  result = (int)GetDlgItem((HWND)this->AbstractClass, 1623); /*0x696215*/
  v3 = (HWND)result; /*0x69621b*/
  if ( result ) /*0x69621f*/
  {
    SendMessageA((HWND)result, 0x14Bu, 0, 0); /*0x696235*/
    lParam = 0; /*0x696237*/
    v4 = (wchar_t **)off_83EB44; /*0x69623f*/
    do /*0x696282*/
    {
      StringCSF = GetStringCSF(*v4, 0, g_Str_File_SerialEd_cpp, 647); /*0x696252*/
      v6 = SendMessageA(v3, 0x4C2u, 0, (LPARAM)StringCSF); /*0x696260*/
      SendMessageA(v3, 0x151u, v6, lParam); /*0x69626e*/
      ++v4; /*0x696274*/
      ++lParam; /*0x69627e*/
    }
    while ( (int)v4 < (int)&off_83EB54 ); /*0x696282*/
    v7 = 0; /*0x696284*/
    *((_DWORD *)this + 62) = 0; /*0x696286*/
    for ( lParama = 0; lParama < 10; ++lParama ) /*0x69628c*/
    {
      v8 = __2_YAPAXI_Z(0x1Cu); /*0x696292*/
      if ( v8 ) /*0x69629c*/
      {
        v9 = (const char **)Modem::EnumerateDevices(v8, v7); /*0x6962a1*/
        v10 = (void **)v9; /*0x6962a6*/
        if ( v9 ) /*0x6962aa*/
        {
          v11 = *v9; /*0x6962ac*/
          if ( *v10 ) /*0x6962ac*/
          {
            strncpy((char *)this + 63 * *((_DWORD *)this + 62) + 252, v11, 0x3Fu); /*0x6962c8*/
            v12 = SendMessageA(v3, 0x4BCu, 0, (LPARAM)this + 63 * *((_DWORD *)this + 62) + 252); /*0x6962eb*/
            SendMessageA(v3, 0x151u, v12, *((_DWORD *)this + 62) + 5); /*0x6962fe*/
            ++*((_DWORD *)this + 62); /*0x696300*/
          }
          FileFind::Close(v10); /*0x696308*/
          __3_YAXPAX_Z(v10); /*0x69630e*/
        }
      }
      v7 = lParama + 1; /*0x69631a*/
    }
    v13 = GetStringCSF(g_Str_TXT_CUSTOM, 0, g_Str_File_SerialEd_cpp, 674); /*0x696339*/
    wcscpy(Destination, v13); /*0x696344*/
    v14 = SendMessageA(v3, 0x4C2u, 0, (LPARAM)Destination); /*0x696359*/
    SendMessageA(v3, 0x151u, v14, 4); /*0x696364*/
    SendMessageA(v3, 0x14Eu, 0, 0); /*0x696370*/
    if ( strlen((const char *)this + 184) ) /*0x69637f*/
    {
      ListBoxItem = SendMessageA(v3, 0x4B8u, 0xFFFFFFFF, (LPARAM)this + 184); /*0x696395*/
      if ( ListBoxItem != -1 ) /*0x69639a*/
        return SendMessageA(v3, 0x14Eu, ListBoxItem, 0); /*0x69639a*/
      ListBoxItem = FindListBoxItem(v3, -1, 4); /*0x6963ab*/
      if ( ListBoxItem == -1 ) /*0x6963b0*/
        return SendMessageA(v3, 0x14Eu, ListBoxItem, 0); /*0x6963b0*/
      v16 = GetStringCSF(g_Str_TXT_CUSTOM, 0, g_Str_File_SerialEd_cpp, 692); /*0x6963cc*/
      swprintf(Destination, (const size_t)aSHs, v16, (char *)this + 184); /*0x6963dc*/
      SendMessageA(v3, 0x144u, ListBoxItem, 0); /*0x6963ed*/
      v17 = Destination; /*0x6963ef*/
      goto LABEL_25; /*0x6963f3*/
    }
    parachute = this->parachute; /*0x6963f8*/
    if ( (int)parachute > 1000 ) /*0x696403*/
    {
      if ( parachute == (AnimClass *)1016 ) /*0x696427*/
      {
        v20 = FindListBoxItem(v3, -1, 0); /*0x6964a2*/
        goto LABEL_27; /*0x6964a2*/
      }
    }
    else
    {
      if ( parachute == (AnimClass *)1000 ) /*0x696405*/
      {
        v20 = FindListBoxItem(v3, -1, 2); /*0x696420*/
        goto LABEL_27; /*0x696420*/
      }
      v19 = &parachute[-1].__pad_1568[100]; /*0x696407*/
      if ( !v19 ) /*0x69640c*/
      {
        v20 = FindListBoxItem(v3, -1, 3); /*0x69641c*/
        goto LABEL_27; /*0x69641c*/
      }
      if ( v19 == (char *)16 ) /*0x696411*/
      {
        v20 = FindListBoxItem(v3, -1, 1); /*0x696415*/
LABEL_27:
        ListBoxItem = v20; /*0x6964a7*/
        return SendMessageA(v3, 0x14Eu, ListBoxItem, 0); /*0x6964a7*/
      }
    }
    ListBoxItem = FindListBoxItem(v3, -1, 4); /*0x696435*/
    if ( ListBoxItem == -1 ) /*0x69643a*/
      return SendMessageA(v3, 0x14Eu, ListBoxItem, 0); /*0x6964b2*/
    v22 = this->parachute; /*0x696444*/
    v21 = GetStringCSF(g_Str_TXT_CUSTOM, 0, g_Str_File_SerialEd_cpp, 730); /*0x696454*/
    swprintf(Buffer, (const size_t)aSX, v21, v22); /*0x696467*/
    SendMessageA(v3, 0x144u, ListBoxItem, 0); /*0x696478*/
    v17 = Buffer; /*0x69647a*/
LABEL_25:
    ListBoxItem = SendMessageA(v3, 0x4C2u, 0, (LPARAM)v17); /*0x696481*/
    SendMessageA(v3, 0x151u, ListBoxItem, 4); /*0x696497*/
    return SendMessageA(v3, 0x14Eu, ListBoxItem, 0); /*0x696499*/
  }
  return result; /*0x6964b4*/
}



// ==== 0x006964C0  NetworkDialog::Dispatch  this=NetworkDialog  sig=csp ====
int __thiscall NetworkDialog::Dispatch(NetworkDialog *this)
{
  int result; // eax
  HWND v2; // edi
  LPARAM v3; // ebx
  LPARAM *v4; // esi
  LRESULT v5; // eax
  int v6; // eax
  int v7; // eax
  WPARAM ListBoxItem; // eax

  result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1624); /*0x6964ce*/
  v2 = (HWND)result; /*0x6964d4*/
  if ( result ) /*0x6964d8*/
  {
    SendMessageA((HWND)result, 0x14Bu, 0, 0); /*0x6964f1*/
    v3 = 0; /*0x6964f3*/
    v4 = (LPARAM *)&off_83EB58; /*0x6964f5*/
    do /*0x69651b*/
    {
      v5 = SendMessageA(v2, 0x4C2u, 0, *v4); /*0x696505*/
      SendMessageA(v2, 0x151u, v5, v3); /*0x69650f*/
      ++v4; /*0x696511*/
      ++v3; /*0x696514*/
    }
    while ( (int)v4 < (int)a115200 ); /*0x69651b*/
    v6 = *((_DWORD *)this + 36); /*0x696521*/
    if ( v6 > 28800 ) /*0x69652c*/
    {
      if ( v6 == 57600 ) /*0x696555*/
      {
        v7 = 4; /*0x69656c*/
        goto LABEL_16; /*0x69656c*/
      }
      if ( v6 == 115200 ) /*0x69655c*/
      {
        v7 = 5; /*0x696565*/
        goto LABEL_16; /*0x69656a*/
      }
    }
    else
    {
      switch ( v6 ) /*0x69652e*/
      {
        case 28800: /*0x69652e*/
          v7 = 2; /*0x696549*/
          goto LABEL_16; /*0x69654e*/
        case 14400: /*0x69652e*/
          v7 = 0; /*0x696545*/
          goto LABEL_16; /*0x696547*/
        case 19200: /*0x69652e*/
          v7 = 1; /*0x69653e*/
LABEL_16:
          ListBoxItem = FindListBoxItem(v2, -1, v7); /*0x696571*/
          return SendMessageA(v2, 0x14Eu, ListBoxItem, 0); /*0x696585*/
      }
    }
    v7 = 3; /*0x69655e*/
    goto LABEL_16; /*0x696563*/
  }
  return result; /*0x69658a*/
}



// ==== 0x00696610  NetworkDialog::UpdateListBox  this=NetworkDialog  sig=csp ====
int __thiscall NetworkDialog::UpdateListBox(NetworkDialog *this)
{
  int result; // eax
  HWND v3; // edi
  int i; // esi

  result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1630); /*0x69661e*/
  v3 = (HWND)result; /*0x696624*/
  if ( result ) /*0x696628*/
  {
    SendMessageA((HWND)result, 0x184u, 0, 0); /*0x69663f*/
    for ( i = 0; i < dword_A8DB5C; ++i ) /*0x69664a*/
      SendMessageA(v3, 0x4C8u, 0, *(_DWORD *)(dword_A8DB50 + 4 * i)); /*0x69665e*/
    if ( SendMessageA(v3, 0x18Bu, 0, 0) && *((int *)this + 38) >= -1 ) /*0x696683*/
    {
      if ( *((_DWORD *)this + 38) >= SendMessageA(v3, 0x18Bu, 0, 0) ) /*0x696697*/
        *((_DWORD *)this + 38) = 0; /*0x696699*/
    }
    else
    {
      *((_DWORD *)this + 38) = -1; /*0x6966a5*/
    }
    result = *((_DWORD *)this + 38); /*0x6966ab*/
    if ( result != -1 ) /*0x6966b4*/
      return SendMessageA(v3, 0x186u, result, 0); /*0x6966bf*/
  }
  return result; /*0x6966c1*/
}



// ==== 0x006966D0  ObjectClass::method_6966D0  this=ObjectClass  sig=csp ====
int __thiscall sub_6966D0(ObjectClass *this)
{
  bool v2; // bl
  HWND DlgItem; // eax
  int result; // eax

  v2 = this->lastLayer == 0; /*0x6966ec*/
  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1628); /*0x6966ef*/
  if ( DlgItem ) /*0x6966f9*/
    SendMessageA(DlgItem, 0xF1u, v2, 0); /*0x69670c*/
  result = (int)GetDlgItem((HWND)this->AbstractClass, 1627); /*0x696716*/
  if ( result ) /*0x69671a*/
    return SendMessageA((HWND)result, 0xF1u, !v2, 0); /*0x69672c*/
  return result; /*0x69672e*/
}



// ==== 0x006967B0  ObjectClass::DlgProcLoadGame_Load  this=ObjectClass  sig=csp ====
int __thiscall DlgProcLoadGame_Load(ObjectClass *this)
{
  HWND DlgItem; // ebx
  int result; // eax
  HWND v4; // ebp
  int v5; // eax
  int vtable2_high; // eax
  int *v7; // eax
  WPARAM ListBoxItem; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-24h]
  int v10; // [esp+0h] [ebp-14h]

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1623); /*0x6967cf*/
  result = (int)GetDlgItem((HWND)this->AbstractClass, 1631); /*0x6967d1*/
  v4 = (HWND)result; /*0x6967d5*/
  if ( DlgItem && result ) /*0x6967df*/
  {
    ShowWindow((HWND)result, 0); /*0x6967e8*/
    EnableWindow(v4, 0); /*0x6967f1*/
    SendMessageA(v4, 0x4B5u, 0x40u, (LPARAM)&this->?); /*0x696809*/
    HIBYTE(this->ambientSoundController[2]) = 0; /*0x69680d*/
    String::Trim((char *)&this->?); /*0x696811*/
    _strupr((char *)&this->?); /*0x696817*/
    if ( !_strcmpi((char *)&this->?, a3f8) ) /*0x69682c*/
    {
LABEL_17:
      v5 = 0; /*0x69691b*/
      goto LABEL_18; /*0x69691b*/
    }
    if ( !_strcmpi((char *)&this->?, a2f8) ) /*0x696838*/
    {
LABEL_5:
      v5 = 1; /*0x696844*/
LABEL_18:
      ListBoxItem = FindListBoxItem(DlgItem, -1, v5); /*0x69691d*/
      return SendMessageA(DlgItem, 0x14Eu, ListBoxItem, 0); /*0x696931*/
    }
    if ( !_strcmpi((char *)&this->?, a3e8) ) /*0x696854*/
    {
LABEL_7:
      v5 = 2; /*0x696860*/
      goto LABEL_18; /*0x696865*/
    }
    if ( !_strcmpi((char *)&this->?, a2e8) ) /*0x696870*/
    {
LABEL_9:
      v5 = 3; /*0x69687c*/
      goto LABEL_18; /*0x696881*/
    }
    if ( !strncmp((const char *)&this->?, aCom, 3u) ) /*0x69688e*/
    {
      vtable2_high = HIBYTE(this->?); /*0x69689a*/
      switch ( (char)vtable2_high ) /*0x6968a8*/
      {
        case '1': /*0x6968a8*/
          goto LABEL_17;
        case '2': /*0x6968a8*/
          goto LABEL_5;
        case '3': /*0x6968a8*/
          goto LABEL_7;
        case '4': /*0x6968a8*/
          goto LABEL_9;
        default:
          if ( (char)vtable2_high <= 57 && (char)vtable2_high > 48 ) /*0x6968b5*/
          {
            LOBYTE(this->?) = 0; /*0x6968b7*/
            return ListBox::SetCustomEntry((ListBox *)this, 1623, 4, &this->?); /*0x6968b7*/
          }
          StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_SerialEd_cpp, 1088); /*0x6968f4*/
          v7 = (int *)GetStringCSF(aTxtInvalidPort, 0, g_Str_File_SerialEd_cpp, 1088); /*0x696906*/
          result = Dialog::ShowMessageBox(v7, StringCSF, 0, 0, 0, v10); /*0x696910*/
          break; /*0x69691a*/
      }
    }
    else
    {
      return ListBox::SetCustomEntry((ListBox *)this, 1623, 4, &this->?); /*0x6968bb*/
    }
  }
  return result; /*0x6968ca*/
}



// ==== 0x00696950  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_696950(ObjectClass *this)
{
  int result; // eax
  HWND v3; // ebx

  result = (int)GetDlgItem((HWND)this->AbstractClass, 1626); /*0x69695c*/
  v3 = (HWND)result; /*0x696962*/
  if ( result ) /*0x696966*/
  {
    ShowWindow((HWND)result, 0); /*0x69696c*/
    EnableWindow(v3, 0); /*0x696975*/
    SendMessageA(v3, 0x4B5u, 0x10u, (LPARAM)&this->?); /*0x696987*/
    HIBYTE(this->?) = 0; /*0x69698f*/
    String::Trim((char *)&this->?); /*0x696993*/
    _strupr((char *)&this->?); /*0x696999*/
    return ListBox::SetCustomEntry((ListBox *)this, 1625, 3, &this->?); /*0x6969ab*/
  }
  return result; /*0x6969b1*/
}



// ==== 0x006969C0  ListBox::SetCustomEntry  this=ListBox  sig=csp ====
int __thiscall ListBox::SetCustomEntry(ListBox *this, int nIDDlgItem, LPARAM a3, void *a4)
{
  int result; // eax
  HWND v5; // ebx
  wchar_t *StringCSF; // eax
  LRESULT v7; // esi
  int wParam; // [esp+Ch] [ebp-84h]
  char lParam[128]; // [esp+10h] [ebp-80h] BYREF

  result = (int)GetDlgItem(*(HWND *)this->__pad_0, nIDDlgItem); /*0x6969d1*/
  v5 = (HWND)result; /*0x6969d7*/
  if ( result ) /*0x6969db*/
  {
    wParam = FindListBoxItem((HWND)result, -1, a3); /*0x696a05*/
    SendMessageA(v5, 0x4BDu, wParam, (LPARAM)lParam); /*0x696a09*/
    result = (int)strchr(lParam, 45); /*0x696a12*/
    if ( result ) /*0x696a1c*/
    {
      result = _strcmpi((char *)a4, (char *)(result + 1)); /*0x696a2c*/
      if ( result ) /*0x696a36*/
      {
        StringCSF = GetStringCSF(g_Str_TXT_CUSTOM, 0, g_Str_File_SerialEd_cpp, 1187); /*0x696a4e*/
        sprintf(lParam, "%ls ", StringCSF); /*0x696a5e*/
        strcat(lParam, (const char *)a4); /*0x696a87*/
        SendMessageA(v5, 0x144u, wParam, 0); /*0x696a9b*/
        v7 = SendMessageA(v5, 0x4BCu, 0, (LPARAM)lParam); /*0x696ab3*/
        SendMessageA(v5, 0x151u, v7, a3); /*0x696abd*/
        return SendMessageA(v5, 0x14Eu, v7, 0); /*0x696ac8*/
      }
    }
  }
  return result; /*0x696acb*/
}



// ==== 0x00696AE0  ObjectClass::DlgProcLoadGame_Load_696AE0  this=ObjectClass  sig=csp ====
int __thiscall DlgProcLoadGame_Load_696AE0(ObjectClass *this)
{
  HWND DlgItem; // edi
  int result; // eax
  HWND v4; // ebp
  char *p_vtable2; // esi
  LRESULT v6; // edi
  int v7; // eax
  char *v8; // [esp+10h] [ebp-8h]

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1629); /*0x696b05*/
  result = (int)GetDlgItem((HWND)this->AbstractClass, 1630); /*0x696b07*/
  v4 = (HWND)result; /*0x696b0b*/
  if ( DlgItem ) /*0x696b0d*/
  {
    if ( result ) /*0x696b15*/
    {
      p_vtable2 = (char *)&this->?; /*0x696b21*/
      SendMessageA(DlgItem, 0x4B5u, 0x80u, (LPARAM)p_vtable2); /*0x696b30*/
      SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x696b3f*/
      String::Trim(p_vtable2); /*0x696b43*/
      result = 0; /*0x696b4d*/
      if ( strlen(p_vtable2) ) /*0x696b4f*/
      {
        _strupr(p_vtable2); /*0x696b5b*/
        v6 = SendMessageA(v4, 0x4C4u, 0xFFFFFFFF, (LPARAM)p_vtable2); /*0x696b6e*/
        if ( v6 == -1 ) /*0x696b73*/
        {
          v8 = (char *)__2_YAPAXI_Z(0x29u); /*0x696b8c*/
          strcpy(v8, p_vtable2); /*0x696ba2*/
          result = SendMessageA(v4, 0x4C8u, 0, (LPARAM)v8); /*0x696bb1*/
          v6 = result; /*0x696bb3*/
          if ( result == -1 ) /*0x696bb8*/
            return result; /*0x696bb8*/
          if ( dword_A8DB5C < dword_A8DB54 /*0x696bf1*/
            || (byte_A8DB59 || !dword_A8DB54)
            && dword_A8DB60 > 0
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8DB4C + 8))(
                 &dword_A8DB4C,
                 dword_A8DB54 + dword_A8DB60,
                 0) )
          {
            v7 = dword_A8DB5C++; /*0x696c02*/
            *(_DWORD *)(dword_A8DB50 + 4 * v7) = v8; /*0x696c11*/
          }
        }
        SendMessageA(v4, 0x186u, v6, 0); /*0x696c1d*/
        SendMessageA(v4, 0x197u, v6, 0); /*0x696c28*/
        *(_DWORD *)&this->isInLogic = v6; /*0x696c2e*/
        return (int)this; /*0x696c2a*/
      }
    }
  }
  return result; /*0x696c34*/
}



// ==== 0x00696C40  ObjectClass::DlgProcLoadGame_Load_696C40  this=ObjectClass  sig=csp ====
int __thiscall DlgProcLoadGame_Load_696C40(ObjectClass *this)
{
  int result; // eax
  HWND v3; // edi
  LRESULT v4; // esi
  int v5; // eax

  result = (int)GetDlgItem((HWND)this->AbstractClass, 1630); /*0x696c4f*/
  v3 = (HWND)result; /*0x696c55*/
  if ( result ) /*0x696c59*/
  {
    result = SendMessageA((HWND)result, 0x18Bu, 0, 0); /*0x696c6f*/
    if ( result > 0 ) /*0x696c73*/
    {
      result = SendMessageA(v3, 0x188u, 0, 0); /*0x696c7f*/
      v4 = result; /*0x696c81*/
      if ( result != -1 ) /*0x696c86*/
      {
        SendMessageA(v3, 0x182u, result, 0); /*0x696c91*/
        if ( v4 < dword_A8DB5C ) /*0x696c9b*/
        {
          v5 = v4; /*0x696c9e*/
          if ( v4 < --dword_A8DB5C ) /*0x696ca8*/
          {
            do /*0x696cc0*/
            {
              ++v5; /*0x696cb0*/
              *(_DWORD *)(dword_A8DB50 + 4 * v5 - 4) = *(_DWORD *)(dword_A8DB50 + 4 * v5); /*0x696cb4*/
            }
            while ( v5 < dword_A8DB5C ); /*0x696cc0*/
          }
        }
        if ( v4 >= SendMessageA(v3, 0x18Bu, 0, 0) ) /*0x696cd0*/
          --v4; /*0x696cd2*/
        SendMessageA(v3, 0x186u, v4, 0); /*0x696cdc*/
        result = SendMessageA(v3, 0x197u, v4, 0); /*0x696ce7*/
        *(_DWORD *)&this->isInLogic = v4; /*0x696ce9*/
      }
    }
  }
  return result; /*0x696cef*/
}



// ==== 0x00696D00  sub_696D00  this=-  sig=ida-proto ====
int sub_696D00()
{
  dword_B057D0 = 0; /*0x696d02*/
  dword_B057D4 = 0; /*0x696d07*/
  dword_B057D8 = 0; /*0x696d0c*/
  dword_B057DC = 0; /*0x696d11*/
  return 0; /*0x696d16*/
}



// ==== 0x00696D20  sub_696D20  this=-  sig=ida-proto ====
void sub_696D20()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x696d2c*/
  dbl_B057E8 = Math::Sqrt(v0 + v0); /*0x696d3e*/
}



// ==== 0x00696D50  sub_696D50  this=-  sig=ida-proto ====
void sub_696D50()
{
  dbl_B07778 = dbl_B057E8 / 60.0; /*0x696d5c*/
}



// ==== 0x00696D70  sub_696D70  this=-  sig=ida-proto ====
void sub_696D70()
{
  dbl_B07760 = 1.0 / dbl_B07778; /*0x696d7c*/
}



// ==== 0x00696D90  sub_696D90  this=-  sig=ida-proto ====
void sub_696D90()
{
  dbl_B07758 = 0.0174532925199433 * 45.0; /*0x696d9c*/
}



// ==== 0x00696DB0  sub_696DB0  this=-  sig=ida-proto ====
void sub_696DB0()
{
  dbl_B057F0 = 0.0174532925199433 * 60.0; /*0x696dbc*/
}



// ==== 0x00696DD0  sub_696DD0  this=-  sig=ida-proto ====
void sub_696DD0()
{
  dbl_B057C8 = 0.0174532925199433 * 90.0; /*0x696ddc*/
}



// ==== 0x00696DF0  sub_696DF0  this=-  sig=ida-proto ====
__int64 sub_696DF0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B057C8 - dbl_B057F0); /*0x696e02*/
  result = Math::RoundToInt(v0 * dbl_B057E8 * 0.5); /*0x696e16*/
  dword_B07780 = result; /*0x696e1b*/
  return result; /*0x696e20*/
}



// ==== 0x00696E30  sub_696E30  this=-  sig=ida-proto ====
void sub_696E30()
{
  dbl_B057F8 = Math::ArcTan((double)dword_B07780 * 0.00390625); /*0x696e47*/
}



// ==== 0x00696E60  sub_696E60  this=-  sig=ida-proto ====
void sub_696E60()
{
  dbl_B07750 = Math::ArcTan((double)(2 * dword_B07780) / dbl_B057E8); /*0x696e82*/
}



// ==== 0x00696E90  sub_696E90  this=-  sig=ida-proto ====
__int64 sub_696E90()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B07780) + 0.5); /*0x696eab*/
  dword_B07774 = result; /*0x696eb0*/
  return result; /*0x696eb6*/
}



// ==== 0x00696EC0  sub_696EC0  this=-  sig=ida-proto ====
int sub_696EC0()
{
  word_B057E0 = 0; /*0x696ec2*/
  word_B057E2 = 0; /*0x696ec8*/
  return 0; /*0x696ece*/
}



// ==== 0x00696ED0  sub_696ED0  this=-  sig=ida-proto ====
int sub_696ED0()
{
  dword_B07740 = 0; /*0x696ed2*/
  dword_B07744 = 0; /*0x696ed7*/
  dword_B07748 = 0; /*0x696edc*/
  return 0; /*0x696ee1*/
}



// ==== 0x00696EF0  sub_696EF0  this=-  sig=ida-proto ====
int sub_696EF0()
{
  dword_B07770 = 0; /*0x696ef5*/
  dword_B07768 = 128; /*0x696eff*/
  dword_B0776C = 128; /*0x696f04*/
  return 128; /*0x696f09*/
}



// ==== 0x00696F10  SessionClass::GetPlayerSide  this=SessionClass  sig=csp ====
int __thiscall SessionClass::GetPlayerSide(int *this)
{
  int result; // eax

  result = -2; /*0x696f13*/
  if ( *(int *)((char *)this + 79) != -2 ) /*0x696f1a*/
    return *(int *)((char *)this + 75); /*0x696f1c*/
  return result; /*0x696f1f*/
}



// ==== 0x00696F20  SessionClass::GetPlayerColor  this=SessionClass  sig=csp ====
int __thiscall SessionClass::GetPlayerColor(SessionClass *this)
{
  int result; // eax

  result = -2; /*0x696f23*/
  if ( *(_DWORD *)&this->__pad_50[7] != -2 ) /*0x696f2a*/
    return *(_DWORD *)&this->__pad_50[3]; /*0x696f2c*/
  return result; /*0x696f2f*/
}



// ==== 0x00696F30  MPCooperative::finalizeSession  this=MPCooperative  sig=csp ====
int __thiscall MPCooperative::finalizeSession(MPCooperative *this)
{
  int result; // eax

  result = -2; /*0x696f33*/
  if ( *(void **)((char *)&this->MPCooperative_field_0x54 + 3) != (void *)-2 /*0x696f40*/
    || *(MultiplayerGameMode **)((char *)&this->MPCooperative_field_0x50 + 3) != (MultiplayerGameMode *)-1 )
  {
    return *(int *)((char *)&this->MPCooperative_field_0x50 + 3); /*0x696f42*/
  }
  return result; /*0x696f45*/
}



// ==== 0x00696F50  SessionClass::GetOption  this=IUnknown  sig=csp ====
int __thiscall SessionClass::GetOption(int *this)
{
  int result; // eax

  result = -2; /*0x696f53*/
  if ( *(int *)((char *)this + 95) != -2 || *(int *)((char *)this + 91) != -1 ) /*0x696f60*/
    return *(int *)((char *)this + 91); /*0x696f62*/
  return result; /*0x696f65*/
}



// ==== 0x00696F70  SessionClass::GetOption2  this=SessionClass  sig=csp ====
int __thiscall SessionClass::GetOption2(SessionClass *this)
{
  int result; // eax

  result = -2; /*0x696f73*/
  if ( *(_DWORD *)&this->__pad_50[23] != -2 || *(_DWORD *)&this->__pad_50[19] != -1 ) /*0x696f80*/
    return *(_DWORD *)&this->__pad_50[19]; /*0x696f82*/
  return result; /*0x696f85*/
}



// ==== 0x00696F90  SessionClass::SetPlayerOption  this=IUnknown  sig=csp ====
int __thiscall SessionClass::SetPlayerOption(int *this, int a2)
{
  int result; // eax

  result = a2; /*0x696f90*/
  if ( a2 == -2 ) /*0x696f97*/
  {
    *(int *)((char *)this + 75) = 0; /*0x696f99*/
    *(int *)((char *)this + 79) = -2; /*0x696fa0*/
  }
  else
  {
    *(int *)((char *)this + 75) = a2; /*0x696fa6*/
    *(int *)((char *)this + 79) = -1; /*0x696fa9*/
  }
  return result; /*0x696fa3*/
}



// ==== 0x00696FC0  SessionClass::SetPlayerColor  this=IUnknown  sig=csp ====
int __thiscall SessionClass::SetPlayerColor(int *this, int a2)
{
  int result; // eax

  result = a2; /*0x696fc0*/
  if ( a2 == -2 ) /*0x696fc7*/
  {
    *(int *)((char *)this + 83) = -1; /*0x696fc9*/
    *(int *)((char *)this + 87) = -2; /*0x696fd0*/
  }
  else
  {
    *(int *)((char *)this + 83) = a2; /*0x696fd6*/
    *(int *)((char *)this + 87) = -1; /*0x696fd9*/
  }
  return result; /*0x696fd3*/
}



// ==== 0x00696FF0  SessionClass::SetOption  this=IUnknown  sig=csp ====
int __thiscall SessionClass::SetOption(int *this, int a2)
{
  int result; // eax

  result = a2; /*0x696ff0*/
  if ( a2 == -2 ) /*0x696ff7*/
  {
    *(int *)((char *)this + 91) = -1; /*0x696ff9*/
    *(int *)((char *)this + 95) = -2; /*0x697000*/
  }
  else
  {
    *(int *)((char *)this + 91) = a2; /*0x697006*/
    *(int *)((char *)this + 95) = -1; /*0x697009*/
  }
  return result; /*0x697003*/
}



// ==== 0x00697020  SessionClass::SetOption2  this=CampaignClass  sig=csp ====
int __thiscall SessionClass::SetOption2(int *this, int a2)
{
  int result; // eax

  result = a2; /*0x697020*/
  if ( a2 == -2 ) /*0x697027*/
  {
    *(int *)((char *)this + 99) = -1; /*0x697029*/
    *(int *)((char *)this + 103) = -2; /*0x697030*/
  }
  else
  {
    *(int *)((char *)this + 99) = a2; /*0x697036*/
    *(int *)((char *)this + 103) = -1; /*0x697039*/
  }
  return result; /*0x697033*/
}



// ==== 0x006970A0  SessionClass::SessionClass  this=SessionClass  sig=csp ====
char *__thiscall sub_6970A0(char *this)
{
  _DWORD *v2; // eax
  int v3; // ecx
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // ecx
  _BYTE *v8; // edi
  _BYTE *v9; // esi
  int v10; // edi
  DWORD *v11; // esi
  int v12; // edi
  int v13; // eax
  int v14; // edx
  _DWORD *v15; // eax
  int v16; // ecx
  int v18; // [esp+10h] [ebp-4h]

  this->MPGameMode = 0; /*0x6970b8*/
  this->ptr_63 = 0; /*0x6970bb*/
  this->u32_64 = 0; /*0x6970c1*/
  this->u32_194 = 1; /*0x6970c7*/
  this->u32_198 = 10000; /*0x6970cd*/
  this->ptr_67 = 10; /*0x6970d3*/
  this->q1A0 = 1; /*0x6970d9*/
  this->q1A1 = 1; /*0x6970df*/
  this->q1A2 = 1; /*0x6970e5*/
  this->q1A3 = 1; /*0x6970eb*/
  this->q1A4 = 1; /*0x6970f1*/
  v2 = this + 428; /*0x6970f7*/
  v3 = 8; /*0x6970fd*/
  do /*0x69710e*/
  {
    *(v2 - 1) = 0; /*0x697102*/
    *v2 = 0; /*0x697105*/
    v2[1] = 0; /*0x697107*/
    v2 += 3; /*0x69710a*/
    --v3; /*0x69710d*/
  }
  while ( v3 ); /*0x69710e*/
  this->LANPreferences = 0; /*0x697110*/
  this->u32_20C = 0; /*0x697116*/
  this->u32_84 = 1; /*0x69711c*/
  this->u32_214 = 10000; /*0x697122*/
  this->u32_218 = 10; /*0x697128*/
  this->q21C = 1; /*0x69712e*/
  this->q21D = 1; /*0x697135*/
  this->q21E = 1; /*0x69713c*/
  this->q21F = 1; /*0x697143*/
  this->q220 = 1; /*0x69714a*/
  v4 = this + 552; /*0x697151*/
  v5 = 8; /*0x697157*/
  do /*0x697168*/
  {
    *(v4 - 1) = 0; /*0x69715c*/
    *v4 = 0; /*0x69715f*/
    v4[1] = 0; /*0x697161*/
    v4 += 3; /*0x697164*/
    --v5; /*0x697167*/
  }
  while ( v5 ); /*0x697168*/
  this->WOLPreferences = 0; /*0x69716a*/
  this->u32_288 = 0; /*0x697170*/
  this->u32_28C = 1; /*0x697176*/
  this->u32_290 = 10000; /*0x69717c*/
  this->u32_294 = 10; /*0x697182*/
  this->q298 = 1; /*0x697188*/
  this->q299 = 1; /*0x69718f*/
  this->q29A = 1; /*0x697196*/
  this->q29B = 1; /*0x69719d*/
  this->q29C = 1; /*0x6971a4*/
  v6 = this + 676; /*0x6971ab*/
  v7 = 8; /*0x6971b1*/
  do /*0x6971c2*/
  {
    *(v6 - 1) = 0; /*0x6971b6*/
    *v6 = 0; /*0x6971b9*/
    v6[1] = 0; /*0x6971bb*/
    v6 += 3; /*0x6971be*/
    --v7; /*0x6971c1*/
  }
  while ( v7 ); /*0x6971c2*/
  v8 = this + 920; /*0x6971c4*/
  v18 = 8; /*0x6971ca*/
  do /*0x6971e5*/
  {
    Waypoint::InitInvalid(v8); /*0x6971d4*/
    v8 += 104; /*0x6971dd*/
    --v18; /*0x6971e1*/
  }
  while ( v18 ); /*0x6971e5*/
  this->u32_694 = 0; /*0x6971ed*/
  this->u32_698 = 0; /*0x6971f3*/
  this->q69C = 1; /*0x6971f9*/
  this->q69D = 0; /*0x697200*/
  this->q1A4 = &DynamicVectorClass<MultiMission *>::`vftable'; /*0x697206*/
  this->u32_6A4 = 10; /*0x697210*/
  this->u32_6A0 = 0; /*0x697216*/
  Waypoint::InitInvalid(this + 2276); /*0x69721c*/
  this->u32_8F4 = 0; /*0x697227*/
  this->u32_8F8 = 0; /*0x69722d*/
  this->q8FC = 1; /*0x697233*/
  this->q8FD = 0; /*0x69723a*/
  this->u32_8F0 = &DynamicVectorClass<GlobalPacketType *>::`vftable'; /*0x697240*/
  this->q904 = 10; /*0x69724a*/
  this->q900 = 0; /*0x697250*/
  SessionClass::saveSettings(this + 2600); /*0x697256*/
  Waypoint::InitInvalid(this + 7876); /*0x697261*/
  CCFileClass::Construct3((int)(this + 9044)); /*0x69726c*/
  Waypoint::InitInvalid(this + 9160); /*0x697277*/
  Waypoint::InitInvalid(this + 9676); /*0x697282*/
  this->u32_2810 = 0; /*0x69728c*/
  this->u32_2814 = 0; /*0x697292*/
  this->q2818 = 1; /*0x697298*/
  this->q2819 = 0; /*0x69729f*/
  this->UnknownVector_280C = &DynamicVectorClass<NodeNameType *>::`vftable'; /*0x6972a5*/
  this->u32_2820 = 10; /*0x6972ab*/
  this->u32_281C = 0; /*0x6972b1*/
  this->StartSpots = 0; /*0x6972b7*/
  this->u32_282C = 0; /*0x6972bd*/
  this->q2830 = 1; /*0x6972c3*/
  this->q2831 = 0; /*0x6972ca*/
  this->UnknownVector_2824 = &DynamicVectorClass<NodeNameType *>::`vftable'; /*0x6972d0*/
  this->u32_2838 = 10; /*0x6972d6*/
  this->u32_2834 = 0; /*0x6972dc*/
  this->u32_2840 = 0; /*0x6972e2*/
  this->u32_2844 = 0; /*0x6972e8*/
  this->q2848 = 1; /*0x6972ee*/
  this->q2849 = 0; /*0x6972f5*/
  this->q283C = &DynamicVectorClass<NodeNameType *>::`vftable'; /*0x6972fb*/
  this->u32_2850 = 10; /*0x697301*/
  this->qA13 = 0; /*0x697307*/
  this->u32_2900 = 0; /*0x69730d*/
  this->u32_2904 = 0; /*0x697313*/
  this->q2908 = 1; /*0x697319*/
  this->q2909 = 0; /*0x697320*/
  this->u32_28FC = &off_7F11B4; /*0x697326*/
  this->u32_2910 = 10; /*0x697330*/
  this->u32_290C = 0; /*0x697336*/
  this->u32_2918 = 0; /*0x69733c*/
  this->u32_291C = 0; /*0x697342*/
  this->q2920 = 1; /*0x697348*/
  this->q2921 = 0; /*0x69734f*/
  this->u32_2914 = &DynamicVectorClass<char *>::`vftable'; /*0x697355*/
  this->u32_2928 = 10; /*0x69735f*/
  this->u32_2924 = 0; /*0x697365*/
  this->u32_2930 = 0; /*0x697371*/
  this->u32_2934 = 0; /*0x697377*/
  this->q2938 = 1; /*0x69737d*/
  this->q2939 = 0; /*0x697384*/
  this->u32_292C = &DynamicVectorClass<unsigned short const *>::`vftable'; /*0x69738a*/
  this->u32_2940 = 10; /*0x697394*/
  this->u32_293C = 0; /*0x69739a*/
  Waypoint::InitInvalid(this + 10604); /*0x6973a0*/
  Waypoint::InitInvalid(this + 10616); /*0x6973ab*/
  Waypoint::InitInvalid(this + 10632); /*0x6973b6*/
  v9 = this + 10644; /*0x6973bb*/
  v10 = 8; /*0x6973c1*/
  do /*0x6973d1*/
  {
    Waypoint::InitInvalid(v9); /*0x6973c8*/
    v9 += 12; /*0x6973cd*/
    --v10; /*0x6973d0*/
  }
  while ( v10 ); /*0x6973d1*/
  v11 = (DWORD *)(this + 12172); /*0x6973d3*/
  v12 = 8; /*0x6973d9*/
  do /*0x6973ef*/
  {
    *v11 = Timer::GetTicks(); /*0x6973e6*/
    v11[2] = 0; /*0x6973e8*/
    v11 += 3; /*0x6973eb*/
    --v12; /*0x6973ee*/
  }
  while ( v12 ); /*0x6973ef*/
  this->q30C8 = 0; /*0x6973f1*/
  *(_DWORD *)this = 0; /*0x6973fc*/
  this->SessionClass_field_14 = 2; /*0x6973ff*/
  this->u32_1C = 0; /*0x697402*/
  this->u32_20 = 1; /*0x697405*/
  this->q024 = 0; /*0x697409*/
  this->ptr_28 = 0; /*0x69740c*/
  this->q029 = 0; /*0x69740f*/
  this->q035 = 0; /*0x697412*/
  this->Handle = 0; /*0x697415*/
  this->q02A = 0; /*0x697418*/
  this->q0AC = 0; /*0x69741b*/
  this->q02C = 0; /*0x69741e*/
  this->SessionClass_field_0C = 0; /*0x697421*/
  this->UniqueID = 0; /*0x697424*/
  this->q0E4 = 0; /*0x697427*/
  this->q0E5 = 0; /*0x69742d*/
  this->q0E6 = 0; /*0x697433*/
  this->q0E7 = 0; /*0x697439*/
  this->q0E8 = 0; /*0x69743f*/
  this->SessionClass_field_10 = 1; /*0x697445*/
  this->q144 = 0; /*0x69744c*/
  this->q148 = 0; /*0x697452*/
  this->idxSide = 0; /*0x69745b*/
  this->idxSide2 = -1; /*0x697461*/
  this->u32_15C = 2; /*0x697467*/
  this->q058 = -1; /*0x69746d*/
  this->Side = this->idxSide; /*0x697479*/
  this->Side2 = this->idxSide2; /*0x697485*/
  this->u32_5F = this->u32_15C; /*0x697491*/
  this->q060 = this->q058; /*0x69749d*/
  this->q1ED9 = 1; /*0x6974a3*/
  this->q1ED8 = 1; /*0x6974aa*/
  this->q1FC1 = 1; /*0x6974b1*/
  this->q1FC0 = 1; /*0x6974ba*/
  *(_DWORD *)(this + 12410) = 0; /*0x6974c1*/
  *(_DWORD *)(this + 12414) = 0; /*0x6974c9*/
  *(_DWORD *)(this + 12418) = 0; /*0x6974d4*/
  *(_DWORD *)(this + 12422) = 0; /*0x6974da*/
  this->q3078 = 0; /*0x6974e0*/
  this->q306C = 0; /*0x6974e6*/
  *((_WORD *)this + 6199) = 0; /*0x6974ec*/
  *((_WORD *)this + 6200) = 0; /*0x6974f3*/
  this->u32_2FF0 = 1250; /*0x6974fa*/
  this->u32_2FF4 = 0; /*0x697504*/
  this->q3018 = 1; /*0x69750a*/
  this->q2F48 = 0; /*0x697511*/
  this->q301C = 0; /*0x69751c*/
  memset(unk_B73E44, 0, 0x2000u); /*0x697522*/
  memset(dword_B76338, 0, sizeof(dword_B76338)); /*0x69752e*/
  this->MuteSWLaunches = 0; /*0x697530*/
  this->SessionClass_field_304 = 0; /*0x697536*/
  this->LastNickSlot = -1; /*0x69753c*/
  this->WOLLimitResolution = 0; /*0x697542*/
  this->q2968 = 0; /*0x697548*/
  this->q3074 = -1; /*0x697559*/
  memset(this + 12320, 0, 0x28u); /*0x69755f*/
  *((_WORD *)this + 6180) = 0; /*0x697561*/
  this->u32_308C = 0; /*0x697563*/
  this->q3090 = 1; /*0x697569*/
  this->u32_3094 = -1; /*0x697570*/
  this->q3098 = 0; /*0x697576*/
  this->u32_309C = 20; /*0x69757c*/
  this->u32_30A0 = 0; /*0x697586*/
  this->u32_30A4 = 0; /*0x69758c*/
  this->u32_30A8 = -1; /*0x697592*/
  *((_WORD *)this + 5314) = 0; /*0x697598*/
  this->q688 = 0; /*0x69759f*/
  this->q689 = 0; /*0x6975a5*/
  this->q68A = 0; /*0x6975b0*/
  this->SessionClass_field_310 = 8; /*0x6975b6*/
  this->u32_318 = 15; /*0x6975c0*/
  this->u32_330 = 15; /*0x6975c6*/
  this->u32_314 = 0; /*0x6975cc*/
  this->u32_31C = 5; /*0x6975df*/
  memset(this + 828, 0, 0x340u); /*0x6975e9*/
  v13 = this->u32_1FBC; /*0x6975eb*/
  v14 = this->u32_2354; /*0x6975f1*/
  LOBYTE(v13) = v13 & 0xFE; /*0x6975fd*/
  this->u32_334 = 0; /*0x697604*/
  this->u32_338 = 0; /*0x69760a*/
  this->q67C = 0; /*0x697610*/
  this->q67D = 0; /*0x697616*/
  this->q1A0 = 0; /*0x69761c*/
  this->q1A1 = 0; /*0x697622*/
  *((_WORD *)this + 3949) = 0; /*0x697628*/
  this->u32_1FBC = v13; /*0x69762f*/
  (*(void (__thiscall **)(char *, char *))(v14 + 8))(this + 9044, aRecordBin); /*0x697635*/
  this->u32_8F0 &= 0xFFFFFFF8; /*0x697648*/
  this->u32_23C4 = 0; /*0x697659*/
  this->q23D4 = 0; /*0x69765f*/
  this->q23D5 = 1; /*0x697665*/
  this->q23D6 = 0; /*0x69766c*/
  *((_WORD *)this + 4588) = 0; /*0x697672*/
  *((_WORD *)this + 4844) = 0; /*0x697679*/
  this->u32_287C = 0; /*0x697680*/
  this->u32_2964 = 1; /*0x697686*/
  this->u32_2808 = 558; /*0x69768c*/
  memset(this + 2312, 0, 0x20u); /*0x697696*/
  memset(this + 2344, 0xFFu, 0x100u); /*0x6976a5*/
  this->u32_2880 |= 1u; /*0x6976b6*/
  this->u32_2884 = 0; /*0x6976be*/
  this->u32_2888 = 760; /*0x6976c4*/
  this->u32_288C = 3; /*0x6976ce*/
  this->u32_2890 = 9600; /*0x6976d8*/
  this->u32_2894 = 0; /*0x6976e2*/
  this->u32_2898 = -1; /*0x6976e8*/
  this->u32_289C = 0; /*0x6976ee*/
  strcpy(this + 10408, &g_INI_DefaultBuffer); /*0x697709*/
  this->u32_28F8 = 0; /*0x697712*/
  this->u32_30AC = 0x7FFFFFFF; /*0x697718*/
  this->u32_30B0 = 0; /*0x697722*/
  this->u32_30B4 = 0; /*0x697728*/
  this->u32_30B8 = dword_B07740; /*0x69773a*/
  this->u32_30BC = dword_B07744; /*0x697745*/
  v15 = this + 132; /*0x69774e*/
  this->u32_30C0 = dword_B07748; /*0x697754*/
  this->q30C8 = 0; /*0x697757*/
  this->u32_30CC = 0; /*0x69775d*/
  this->u32_30D0 = 0; /*0x697763*/
  this->u32_30D4 = 0; /*0x697769*/
  this->q2878 = 0; /*0x69776f*/
  this->u32_3C = 0; /*0x697775*/
  v16 = 8; /*0x697778*/
  do /*0x69778e*/
  {
    *(v15 - 8) = -1; /*0x69777d*/
    *v15++ = -1; /*0x697784*/
    --v16; /*0x69778d*/
  }
  while ( v16 ); /*0x69778e*/
  this->SessionClass_field_0C = 0; /*0x697790*/
  this->MPGameMode = 0; /*0x697793*/
  this->ScenarioFilename = 0; /*0x697796*/
  this->u32_8CC = 0; /*0x69779c*/
  this->q8D0 = 0; /*0x6977a2*/
  this->u32_8D4 = 0; /*0x6977a9*/
  return this; /*0x6977a8*/
}



// ==== 0x006977C0  CSFClass::LoadMissingStrings  this=CSFClass  sig=csp ====
int __thiscall sub_6977C0(char *this)
{
  char *v1; // esi
  wchar_t **v2; // edi
  wchar_t *StringCSF; // eax
  wchar_t *v4; // ebx
  int result; // eax
  int v6; // ecx
  int v7; // edx

  v1 = this + 10540; /*0x6977c3*/
  v2 = (wchar_t **)off_83ED04; /*0x6977c9*/
  do /*0x697830*/
  {
    StringCSF = GetStringCSF(*v2, 0, g_Str_File_Session_CPP, 593); /*0x6977dc*/
    v4 = _wcsdup(StringCSF); /*0x6977ea*/
    result = *((_DWORD *)v1 + 2); /*0x6977ec*/
    if ( *((_DWORD *)v1 + 4) < result /*0x697816*/
      || (v1[13] || !result)
      && (v6 = *((_DWORD *)v1 + 5), v6 > 0)
      && (result = (*(int (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v1 + 8))(v1, result + v6, 0), (_BYTE)result) )
    {
      result = *((_DWORD *)v1 + 4); /*0x697818*/
      v7 = *((_DWORD *)v1 + 1); /*0x69781b*/
      *((_DWORD *)v1 + 4) = result + 1; /*0x697821*/
      *(_DWORD *)(v7 + 4 * result) = v4; /*0x697824*/
    }
    ++v2; /*0x697827*/
  }
  while ( (int)v2 < (int)byte_83ED14 ); /*0x697830*/
  return result; /*0x697832*/
}



// ==== 0x00697840  ObjectManager::CleanupArrays  this=ObjectManager  sig=csp ====
void __thiscall ObjectManager::CleanupArrays(ObjectManager *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  void *v8; // eax
  void *v9; // eax
  void *v10; // eax
  void *v11; // eax
  void *v12; // eax
  void *v13; // eax
  void *v14; // eax
  void *v15; // eax

  while ( *((_DWORD *)this + 2633) ) /*0x697846*/
  {
    __3_YAXPAX_Z(**((void ***)this + 2630)); /*0x697857*/
    v2 = *((_DWORD *)this + 2633); /*0x69785c*/
    if ( v2 > 0 ) /*0x697867*/
    {
      v3 = v2 - 1; /*0x697869*/
      v4 = 0; /*0x69786c*/
      for ( *((_DWORD *)this + 2633) = v3; /*0x697876*/
            v4 < *((_DWORD *)this + 2633);
            *(_DWORD *)(*((_DWORD *)this + 2630) + 4 * v4 - 4) = *(_DWORD *)(*((_DWORD *)this + 2630) + 4 * v4) )
      {
        ++v4; /*0x69787e*/
      }
    }
  }
  while ( *((_DWORD *)this + 2639) ) /*0x697898*/
  {
    free(**((void ***)this + 2636)); /*0x6978a9*/
    v5 = *((_DWORD *)this + 2639); /*0x6978ae*/
    if ( v5 > 0 ) /*0x6978b9*/
    {
      v6 = v5 - 1; /*0x6978bb*/
      v7 = 0; /*0x6978be*/
      for ( *((_DWORD *)this + 2639) = v6; /*0x6978c8*/
            v7 < *((_DWORD *)this + 2639);
            *(_DWORD *)(*((_DWORD *)this + 2636) + 4 * v7 - 4) = *(_DWORD *)(*((_DWORD *)this + 2636) + 4 * v7) )
      {
        ++v7; /*0x6978d0*/
      }
    }
  }
  v8 = (void *)*((_DWORD *)this + 2636); /*0x6978ea*/
  *((_DWORD *)this + 2635) = &VectorClass<unsigned short const *>::`vftable'; /*0x6978f0*/
  if ( v8 && *((_BYTE *)this + 10553) ) /*0x6978fe*/
  {
    __3_YAXPAX_Z(v8); /*0x697907*/
    *((_DWORD *)this + 2636) = 0; /*0x69790f*/
  }
  *((_BYTE *)this + 10553) = 0; /*0x697915*/
  *((_DWORD *)this + 2637) = 0; /*0x69791b*/
  v9 = (void *)*((_DWORD *)this + 2630); /*0x697921*/
  *((_DWORD *)this + 2629) = &VectorClass<char *>::`vftable'; /*0x697927*/
  if ( v9 && *((_BYTE *)this + 10529) ) /*0x697935*/
  {
    __3_YAXPAX_Z(v9); /*0x69793e*/
    *((_DWORD *)this + 2630) = 0; /*0x697946*/
  }
  *((_BYTE *)this + 10529) = 0; /*0x69794c*/
  *((_DWORD *)this + 2631) = 0; /*0x697952*/
  v10 = (void *)*((_DWORD *)this + 2624); /*0x697958*/
  *((_DWORD *)this + 2623) = &VectorClass<PhoneEntryClass *>::`vftable'; /*0x69795e*/
  if ( v10 && *((_BYTE *)this + 10505) ) /*0x69796c*/
  {
    __3_YAXPAX_Z(v10); /*0x697975*/
    *((_DWORD *)this + 2624) = 0; /*0x69797d*/
  }
  *((_BYTE *)this + 10505) = 0; /*0x697983*/
  *((_DWORD *)this + 2625) = 0; /*0x697989*/
  v11 = (void *)*((_DWORD *)this + 2576); /*0x69798f*/
  *((_DWORD *)this + 2575) = &VectorClass<NodeNameType *>::`vftable'; /*0x69799d*/
  if ( v11 && *((_BYTE *)this + 10313) ) /*0x6979a5*/
  {
    __3_YAXPAX_Z(v11); /*0x6979ae*/
    *((_DWORD *)this + 2576) = 0; /*0x6979b6*/
  }
  *((_BYTE *)this + 10313) = 0; /*0x6979bc*/
  *((_DWORD *)this + 2577) = 0; /*0x6979c2*/
  v12 = (void *)*((_DWORD *)this + 2570); /*0x6979c8*/
  *((_DWORD *)this + 2569) = &VectorClass<NodeNameType *>::`vftable'; /*0x6979ce*/
  if ( v12 && *((_BYTE *)this + 10289) ) /*0x6979d8*/
  {
    __3_YAXPAX_Z(v12); /*0x6979e1*/
    *((_DWORD *)this + 2570) = 0; /*0x6979e9*/
  }
  *((_BYTE *)this + 10289) = 0; /*0x6979ef*/
  *((_DWORD *)this + 2571) = 0; /*0x6979f5*/
  v13 = (void *)*((_DWORD *)this + 2564); /*0x6979fb*/
  *((_DWORD *)this + 2563) = &VectorClass<NodeNameType *>::`vftable'; /*0x697a01*/
  if ( v13 && *((_BYTE *)this + 10265) ) /*0x697a0b*/
  {
    __3_YAXPAX_Z(v13); /*0x697a14*/
    *((_DWORD *)this + 2564) = 0; /*0x697a1c*/
  }
  *((_BYTE *)this + 10265) = 0; /*0x697a28*/
  *((_DWORD *)this + 2565) = 0; /*0x697a2e*/
  *((_DWORD *)this + 2261) = &CCFileClass::`vftable'; /*0x697a37*/
  *((_DWORD *)this + 2286) = 0; /*0x697a3d*/
  Vector::Clear((int)this + 9132); /*0x697a40*/
  *((_DWORD *)this + 2261) = &off_7E1668; /*0x697a47*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)this + 119); /*0x697a4d*/
  ObjectManager::InitMessageList(this + 325); /*0x697a58*/
  v14 = (void *)*((_DWORD *)this + 573); /*0x697a5d*/
  *((_DWORD *)this + 572) = &VectorClass<GlobalPacketType *>::`vftable'; /*0x697a63*/
  if ( v14 && *((_BYTE *)this + 2301) ) /*0x697a72*/
  {
    __3_YAXPAX_Z(v14); /*0x697a7b*/
    *((_DWORD *)this + 573) = 0; /*0x697a83*/
  }
  *((_BYTE *)this + 2301) = 0; /*0x697a89*/
  *((_DWORD *)this + 574) = 0; /*0x697a8f*/
  v15 = (void *)*((_DWORD *)this + 421); /*0x697a95*/
  *((_DWORD *)this + 420) = &VectorClass<MultiMission *>::`vftable'; /*0x697a9b*/
  if ( v15 && *((_BYTE *)this + 1693) ) /*0x697aa9*/
  {
    __3_YAXPAX_Z(v15); /*0x697ab2*/
    *((_DWORD *)this + 421) = 0; /*0x697aba*/
  }
  *((_BYTE *)this + 1693) = 0; /*0x697ac0*/
  *((_DWORD *)this + 422) = 0; /*0x697ac6*/
}



// ==== 0x00697AD0  BulkData::InitMissionHashing  this=BulkData  sig=csp ====
void __thiscall BulkData::InitMissionHashing(BulkData *this)
{
  DWORD v2; // eax
  char *inited; // eax
  const char *v4; // esi
  unsigned int v5; // ebx
  DWORD Time; // [esp+10h] [ebp-4h] BYREF

  SessionClass::LoadMissionList((SessionClass *)this); /*0x697ad7*/
  Time = timeGetTime(); /*0x697ae2*/
  v2 = DiskSpace::CheckAvailable(); /*0x697ae6*/
  ComputeHash(&Time, v2); /*0x697af1*/
  inited = Object_Init_7CBC11(aPath); /*0x697afb*/
  v4 = inited; /*0x697b00*/
  if ( inited ) /*0x697b07*/
  {
    v5 = 0; /*0x697b10*/
    if ( strlen(inited) ) /*0x697b12*/
    {
      do /*0x697b35*/
        ComputeHash(&Time, v4[v5++]); /*0x697b21*/
      while ( v5 < strlen(v4) ); /*0x697b35*/
    }
  }
  this->q051 = Time; /*0x697b41*/
  Debug::Log(); /*0x697b47*/
}



// ==== 0x00697B60  nullsub_228  this=-  sig=ida-proto ====
void nullsub_228()
{
  ; /*0x697b60*/
}



// ==== 0x00697B70  SessionClass::CreateConnections  this=SessionClass  sig=csp ====
int __thiscall SessionClass::CreateConnections(SessionClass *this)
{
  int v3; // esi
  int v4; // eax
  int v5; // ebp
  int i; // eax
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // ebp
  int v10; // esi
  int Ticks; // ecx
  int v12; // [esp+10h] [ebp-18h] BYREF
  int v13; // [esp+14h] [ebp-14h] BYREF
  int v14; // [esp+18h] [ebp-10h] BYREF
  char v15; // [esp+1Ch] [ebp-Ch]
  char v16; // [esp+1Dh] [ebp-Bh]
  int v17[2]; // [esp+20h] [ebp-8h] BYREF

  Debug::Log(); /*0x697b7e*/
  if ( *(_DWORD *)&dword_A8B238 != 3 && *(_DWORD *)&dword_A8B238 != 4 ) /*0x697b93*/
    return 0; /*0x697b9e*/
  v3 = 0; /*0x697ba7*/
  if ( this->StartSpots[4] > 0 ) /*0x697bab*/
  {
    do /*0x697bc5*/
    {
      Debug::Log(); /*0x697bc5*/
      if ( _wcsicmp( /*0x697be7*/
             *(const wchar_t **)(this->StartSpots[1] + 4 * v3),
             (const wchar_t *)(*((_DWORD *)stru_A80220.? + *(_DWORD *)(*(_DWORD *)(this->StartSpots[1] + 4 * v3) + 111))
                             + 90154)) )
      {
        return 0; /*0x697bf1*/
      }
      if ( !_wcsicmp(*(const wchar_t **)(this->StartSpots[1] + 4 * v3), (const wchar_t *)&this->unknown_2854[499]) ) /*0x697c04*/
      {
        this->unknown_2854[520] = *(_DWORD *)(*(_DWORD *)(this->StartSpots[1] + 4 * v3) + 111); /*0x697c25*/
        Network::CopyAddress((Network *)(dword_A8DA78[v3] + 40), &v13, (int)v17); /*0x697c38*/
        NetworkID::Assign(&qword_A8DBA4, &v13, (int)v17, 0); /*0x697c4d*/
        Network::SetPlayerCoords((Network *)&unk_A8E9C0, &qword_A8DBA4); /*0x697c5c*/
      }
      v4 = *(_DWORD *)(this->StartSpots[1] + 4 * v3); /*0x697c67*/
      *(_DWORD *)(*((_DWORD *)stru_A80220.? + *(_DWORD *)(v4 + 111)) + 516) = *(_DWORD *)(v4 + 123); /*0x697c7e*/
      Network::CopyAddress((Network *)(dword_A8DA78[v3] + 40), &v13, (int)v17); /*0x697c94*/
      v5 = 0; /*0x697c99*/
      for ( i = 0; i < 4; ++i ) /*0x697c9b*/
        v5 = *((unsigned __int8 *)v17 + i) | (v5 << 8); /*0x697ca8*/
      Debug::Log(); /*0x697cc7*/
      *(_DWORD *)(*((_DWORD *)stru_A80220.? + *(_DWORD *)(*(_DWORD *)(this->StartSpots[1] + 4 * v3) + 111)) + 512) = v5; /*0x697ce5*/
      *(_BYTE *)(*((_DWORD *)stru_A80220.? + *(_DWORD *)(*(_DWORD *)(this->StartSpots[1] + 4 * v3) + 111)) + 520) = 0; /*0x697d00*/
      if ( v3 > 0 ) /*0x697d06*/
      {
        v7 = *(_DWORD *)(this->StartSpots[1] + 4 * v3); /*0x697d0e*/
        SessionClass::initLAN((int)&unk_A8E9C0, *(_DWORD *)(v7 + 111), (wchar_t *)v7, (_DWORD *)(v7 + 40)); /*0x697d1f*/
        *(_DWORD *)(*(_DWORD *)(this->StartSpots[1] + 4 * v3) + 115) = -1; /*0x697d2d*/
      }
    }
    while ( ++v3 < this->StartSpots[4] ); /*0x697bc5*/
  }
  v8 = *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x697d43*/
  v9 = dword_A8E284; /*0x697d48*/
  do /*0x697d79*/
  {
    v10 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x697d4d*/
    if ( v8 != -1 ) /*0x697d56*/
    {
      Ticks = Timer::GetTicks(); /*0x697d62*/
      v8 = *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x697d64*/
      v10 += Ticks - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x697d6b*/
    }
    *v9++ = v10; /*0x697d6d*/
  }
  while ( (int)v9 < (int)&byte_A8E2A4 ); /*0x697d79*/
  if ( this->GameMode[0] != 4 ) /*0x697d7e*/
    goto LABEL_22; /*0x697d7e*/
  if ( !LOBYTE(this->unknown_2854[527]) ) /*0x697d84*/
    goto LABEL_22; /*0x697d84*/
  v12 = 0; /*0x697da0*/
  v14 = 0; /*0x697db0*/
  v15 = 0; /*0x697dc0*/
  v16 = 0; /*0x697dc4*/
  NetworkID::Assign(&qword_A8DBB0, &v12, (int)&v14, 0); /*0x697dc8*/
  LOBYTE(this->unknown_2854[69]) = 1; /*0x697dd2*/
  this->unknown_2854[526] = 0; /*0x697dd9*/
  this->unknown_2854[530] = 20; /*0x697ddf*/
  this->unknown_2854[528] = -1; /*0x697de9*/
  SessionClass::initInternet((SessionClass *)&unk_A8E9C0); /*0x697df3*/
  SessionClass::BuildLobbyPlayerList((SessionClass *)&stru_B052C0.__pad_0[16]); /*0x697dfd*/
  if ( SessionClass::IsValidHouse((int)&dword_A8B238, 0) ) /*0x697e08*/
  {
    if ( !LaunchMultiplayerHost((int)&stru_B052C0.__pad_0[16], 0) /*0x697e25*/
      || !Network::SendMasterPlayerList((Network *)&stru_B052C0.__pad_0[16]) )
    {
LABEL_22:
      byte_A8DBA0 = 0; /*0x697e2e*/
    }
  }
  Debug::Log(); /*0x697e4f*/
  Debug::Log(); /*0x697e59*/
  return 1; /*0x697b95*/
}



// ==== 0x00697E70  SessionClass::IsValidHouse  this=SessionClass  sig=csp ====
char __thiscall SessionClass_IsValidHouse(int this, #375 *a2)
{
  #375 *v2; // edi
  int v3; // eax
  int v5; // ecx
  HouseClass *i; // edx
  #375 *v7; // eax

  v2 = a2; /*0x697e73*/
  if ( !a2 ) /*0x697e79*/
    v2 = dword_A83D4C; /*0x697e7b*/
  if ( dword_A8B238[0] != 4 || !v2 ) /*0x697e8c*/
    goto LABEL_9; /*0x697e8c*/
  v3 = *(_DWORD *)(this + 12404); /*0x697e8e*/
  if ( v3 != -1 ) /*0x697e97*/
    return *((_DWORD *)v2 + 12) == v3; /*0x697ea8*/
  if ( !_wcsicmp((const wchar_t *)v2 + 45077, (const wchar_t *)(this + 12320)) ) /*0x697eb9*/
    return 1; /*0x697ec7*/
LABEL_9:
  v5 = 0; /*0x697ed3*/
  if ( dword_A80238 <= 0 ) /*0x697ed7*/
    return 0; /*0x697efd*/
  for ( i = dword_A8022C; ; i = (HouseClass *)((char *)i + 4) ) /*0x697ed9*/
  {
    v7 = *(#375 **)i->AbstractClass; /*0x697edf*/
    if ( *(_BYTE *)(*(_DWORD *)i->AbstractClass + 492) ) /*0x697ee1*/
    {
      if ( !*((_BYTE *)v7 + 501) ) /*0x697eeb*/
        break; /*0x697eeb*/
    }
    if ( ++v5 >= dword_A80238 ) /*0x697efb*/
      return 0; /*0x697efb*/
  }
  return v2 == v7; /*0x697ea0*/
}



// ==== 0x00697F10  ObjectClass::ReadGameSettingsINI  this=ObjectClass  sig=csp ====
int __thiscall ReadGameSettingsINI(ObjectClass *this, _DWORD *a2, int a3, _DWORD *a4, _DWORD *a5)
{
  GameSetup *v5; // ebx
  int First; // eax
  unsigned __int8 *v8; // ebp
  int i; // esi
  char *v10; // eax
  int v11; // edx
  char *v12; // ecx
  int result; // eax
  char *v14; // [esp+10h] [ebp-14h] BYREF
  char Buffer[16]; // [esp+14h] [ebp-10h] BYREF

  v5 = (GameSetup *)a2; /*0x697f14*/
  INIClass::ResetSection((INIClass *)a2); /*0x697f1f*/
  First = MultiplayerGameMode::GetFirst(); /*0x697f24*/
  v8 = (unsigned __int8 *)a3; /*0x697f2c*/
  this->AbstractClass = (void *)INIClass::ReadInt_Overwrite( /*0x697f48*/
                                  (bool *)v5->__pad_0,
                                  (unsigned __int8 *)a3,
                                  (unsigned __int8 *)g_INI_Key_GameMode,
                                  *(_DWORD *)(First + 40));
  this->? = (void *)INIClass::ReadInt_Overwrite((bool *)v5->__pad_0, v8, (unsigned __int8 *)aScenindex, 0); /*0x697f4f*/
  this->? = (void *)INIClass::ReadInt_Overwrite( /*0x697f6b*/
                      (bool *)v5->__pad_0,
                      v8,
                      (unsigned __int8 *)g_INI_Key_GameSpeed,
                      *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5280));
  this->? = (void *)INIClass::ReadInt_Overwrite( /*0x697f88*/
                      (bool *)v5->__pad_0,
                      v8,
                      (unsigned __int8 *)g_INI_Key_Credits,
                      *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5252));
  this->? = INIClass::ReadInt_Overwrite( /*0x697fa5*/
              (bool *)v5->__pad_0,
              v8,
              (unsigned __int8 *)g_INI_Key_UnitCount,
              *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5268));
  LOBYTE(this->?) = INIClass::ReadBool_Overwrite( /*0x697fc1*/
                      (int *)v5->__pad_0,
                      v8,
                      (unsigned __int8 *)g_INI_Key_ShortGame,
                      *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5302));
  BYTE1(this->?) = INIClass::ReadBool_Overwrite( /*0x697fde*/
                     (int *)v5->__pad_0,
                     v8,
                     (unsigned __int8 *)g_INI_Key_SuperWeaponsAllowed,
                     *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5305));
  BYTE2(this->?) = INIClass::ReadBool_Overwrite( /*0x697ffb*/
                     (int *)v5->__pad_0,
                     v8,
                     (unsigned __int8 *)g_INI_Key_BuildOffAlly,
                     *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5306));
  HIBYTE(this->?) = INIClass::ReadBool_Overwrite( /*0x698017*/
                      (int *)v5->__pad_0,
                      v8,
                      (unsigned __int8 *)aMcvrepacks,
                      *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5304));
  LOBYTE(this->?) = INIClass::ReadBool_Overwrite( /*0x698034*/
                      (int *)v5->__pad_0,
                      v8,
                      (unsigned __int8 *)aCratesappear,
                      *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5297));
  for ( i = 1; i < 8; ++i ) /*0x698037*/
  {
    sprintf(Buffer, "Slot%02d", i); /*0x698047*/
    if ( i == 1 ) /*0x698052*/
      a2 = a5; /*0x698058*/
    else
      a2 = a4; /*0x698062*/
    a3 = -2; /*0x69806f*/
    v14 = (char *)-2; /*0x698073*/
    GameSetup::ParseCoordTriple(v5, v8, (unsigned __int8 *)Buffer, (int *)&a2, &a3, (const char **)&v14); /*0x69808a*/
    v10 = (char *)this + 12 * i; /*0x698096*/
    v11 = a3; /*0x698099*/
    *((_DWORD *)v10 + 7) = a2; /*0x69809d*/
    v12 = v14; /*0x6980a0*/
    *((_DWORD *)v10 + 8) = v11; /*0x6980a4*/
    result = 3 * i + 9; /*0x6980a7*/
    *((_DWORD *)&this->AbstractClass + result) = v12; /*0x6980af*/
  }
  return result; /*0x6980b4*/
}



// ==== 0x006980C0  ScenarioClass::LoadNetworkConfig  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::LoadNetworkConfig(ScenarioClass *this)
{
  int i; // esi
  int j; // esi
  int v4; // ecx
  int v5; // eax
  wchar_t *StringCSF; // eax
  int Int_Overwrite; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  char Bool_Overwrite; // al
  char v12; // cl
  char v13; // al
  int v14; // eax
  MultiplayerGameMode *v15; // eax
  int v16; // eax
  int v17; // ebx
  char **v18; // esi
  int KeyCount; // ebx
  char *v20; // eax
  char *v21; // esi
  unsigned __int8 *StringByIndex; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // edx
  int v27; // ebx
  unsigned __int8 *v28; // eax
  unsigned __int8 *v29; // eax
  char *v30; // eax
  char *v31; // eax
  char *v32; // eax
  char *v33; // eax
  char *v34; // eax
  char *v35; // eax
  char *v36; // eax
  int v37; // edi
  char **v38; // esi
  char *v39; // eax
  char *v40; // eax
  char *v41; // eax
  int v42; // edx
  int v43; // eax
  int v44; // eax
  int v45; // edx
  int v46; /... [21699 chars total]



// ==== 0x00698CB0  Game::DumpMultiplayerGameInfo  this=Game  sig=csp ====
char __thiscall Game::DumpMultiplayerGameInfo(Game *this, FILE *Stream)
{
  int v2; // eax
  FILE *v3; // esi
  int i; // ebp
  unsigned int j; // edi
  unsigned int k; // edi
  unsigned int m; // edi
  unsigned int n; // edi
  int v11[2]; // [esp+Ch] [ebp-8h] BYREF

  v2 = *(_DWORD *)&stru_A8B250.__pad_0[4]; /*0x698cb0*/
  v3 = Stream; /*0x698cbc*/
  if ( *(int *)&stru_A8B250.__pad_0[4] < 0 ) /*0x698cc3*/
  {
    fprintf(Stream, "BOGUS scenario index!?!\n"); /*0x698ccb*/
    v2 = 0; /*0x698cd3*/
    *(_DWORD *)&stru_A8B250.__pad_0[4] = 0; /*0x698cd5*/
  }
  fprintf(v3, "Scenario = %s\n", *(const char **)(dword_A8B8CC + 4 * v2)); /*0x698ceb*/
  fprintf(v3, "Handle = %s\n", (const char *)&this->Game_field_0x148); /*0x698cfd*/
  for ( i = 0; i < (int)this->Game_field_0x314; ++i ) /*0x698d0f*/
  {
    Network::CopyAddress((Network *)(dword_A8DA78[i] + 40), &Stream, (int)v11); /*0x698d2a*/
    fprintf(v3, "Player Addr[%d] = ", i); /*0x698d36*/
    for ( j = 0; j < 4; ++j ) /*0x698d3e*/
      fprintf(v3, "%02X", *((unsigned __int8 *)&Stream + j)); /*0x698d4d*/
    fprintf(v3, ":"); /*0x698d61*/
    for ( k = 0; k < 6; ++k ) /*0x698d69*/
      fprintf(v3, "%02X", *((unsigned __int8 *)v11 + k)); /*0x698d78*/
    fprintf(v3, "\n"); /*0x698d8c*/
  }
  fprintf(v3, "\n"); /*0x698da9*/
  Network::CopyAddress(&stru_A8BB1C, &Stream, (int)v11); /*0x698dc0*/
  fprintf(v3, "Address = "); /*0x698dcb*/
  for ( m = 0; m < 4; ++m ) /*0x698dd3*/
    fprintf(v3, "%02X", *((unsigned __int8 *)&Stream + m)); /*0x698de3*/
  fprintf(v3, ":"); /*0x698df7*/
  for ( n = 0; n < 6; ++n ) /*0x698dff*/
    fprintf(v3, "%02X", *((unsigned __int8 *)v11 + n)); /*0x698e0e*/
  fprintf(v3, "\n\n"); /*0x698e22*/
  fprintf(v3, "MaxAhead = %d\n", this->Game_field_0x318); /*0x698e34*/
  fprintf(v3, "LoadGame = %d\n", this->Game_field_0x680); /*0x698e46*/
  fprintf(v3, "PrefColor = %d\n", this->Game_field_0x17C); /*0x698e58*/
  fprintf(v3, "ColorIdx = %d\n", this->Game_field_0x15C); /*0x698e6a*/
  fprintf(v3, "House = %d\n", this->Game_field_0x174); /*0x698e7c*/
  fprintf(v3, "NumPlayers = %d\n", this->Game_field_0x314); /*0x698e91*/
  fprintf(v3, "Options.Bases = %d\n", (unsigned __int8)this->__pad_8[24]); /*0x698ea2*/
  fprintf(v3, "Options.Credits = %d\n", this->Game_field_0x24[0]); /*0x698eb1*/
  fprintf(v3, "Options.BridgeDestruction = %d\n", (unsigned __int8)this->__pad_28[0]); /*0x698ec2*/
  fprintf(v3, "Options.Goodies = %d\n", (unsigned __int8)this->__pad_28[1]); /*0x698ed3*/
  fprintf(v3, "Options.Ghosts = %d\n", (unsigned __int8)this->__pad_28[13]); /*0x698ee4*/
  fprintf(v3, "Options.UnitCount = %d\n", this->Game_field_0x38); /*0x698ef6*/
  fprintf(v3, "Options.AIPlayers = %d\n", this->Game_field_0x3C); /*0x698f05*/
  fprintf(v3, "Options.AIDifficulty = %d\n", this->Game_field_0x40); /*0x698f14*/
  fprintf(v3, "ObiWan = %d\n", this->Game_field_0x300); /*0x698f26*/
  if ( *(_DWORD *)&dword_A8B238 == 3 ) /*0x698f36*/
  {
    fprintf(v3, "Type = IPX\n"); /*0x698f3e*/
    return 1; /*0x698f46*/
  }
  else
  {
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x698f54*/
      fprintf(v3, "Type = INTERNET\n"); /*0x698f5c*/
    else
      fprintf(v3, "Type = !!Unknown!!\n"); /*0x698f75*/
    return 1; /*0x698f64*/
  }
}



// ==== 0x00698F90  GameSetup::WriteINI  this=GameSetup  sig=csp ====
int __thiscall GameSetup_WriteINI(int this, char *a2, unsigned __int8 *Block)
{
  int v4; // ebp
  int *v5; // ebx
  int result; // eax
  char Buffer[16]; // [esp+10h] [ebp-10h] BYREF

  INIClass::SetInt(a2, Block, g_INI_Key_GameMode, *(_DWORD *)this, 0); /*0x698fae*/
  INIClass::SetInt(a2, Block, aScenindex, *(_DWORD *)(this + 4), 0); /*0x698fc1*/
  INIClass::SetInt(a2, Block, g_INI_Key_GameSpeed, *(_DWORD *)(this + 8), 0); /*0x698fd4*/
  INIClass::SetInt(a2, Block, g_INI_Key_Credits, *(_DWORD *)(this + 12), 0); /*0x698fe7*/
  INIClass::SetInt(a2, Block, g_INI_Key_UnitCount, *(_DWORD *)(this + 16), 0); /*0x698ffa*/
  INIClass::SetBool(a2, Block, g_INI_Key_ShortGame, *(_BYTE *)(this + 20)); /*0x69900b*/
  INIClass::SetBool(a2, Block, g_INI_Key_SuperWeaponsAllowed, *(_BYTE *)(this + 21)); /*0x69901c*/
  INIClass::SetBool(a2, Block, g_INI_Key_BuildOffAlly, *(_BYTE *)(this + 22)); /*0x69902d*/
  INIClass::SetBool(a2, Block, aMcvrepacks, *(_BYTE *)(this + 23)); /*0x69903e*/
  INIClass::SetBool(a2, Block, aCratesappear, *(_BYTE *)(this + 24)); /*0x69904f*/
  v4 = 1; /*0x699054*/
  v5 = (int *)(this + 44); /*0x699059*/
  do /*0x69908e*/
  {
    sprintf(Buffer, "Slot%02d", v4); /*0x699067*/
    result = GameSetup::FormatToString(Block, Buffer, *(v5 - 1), *v5, v5[1]); /*0x699082*/
    ++v4; /*0x699087*/
    v5 += 3; /*0x699088*/
  }
  while ( v4 < 8 ); /*0x69908e*/
  return result; /*0x699090*/
}



// ==== 0x006990A0  ObjectClass::SaveConfigWOL  this=ObjectClass  sig=csp ====
void __thiscall SaveConfigWOL(TechnoClass *this)
{
  char *v2; // eax
  int vtable1; // eax
  int i; // edi
  int j; // edi
  int v6; // eax
  CHAR v7[12]; // [esp+Ch] [ebp-B0h] BYREF
  BufferIOFileClass v8[2]; // [esp+18h] [ebp-A4h] BYREF

  RawFileClass::Construct(v8, (int)aRa2mdIni); /*0x6990b4*/
  INIClass::SetInt(dword_8870C0.__pad_0, aMultiplayer, aPhoneindex, *((_DWORD *)this + 2593), 0); /*0x6990d1*/
  INIClass::SetBool(dword_8870C0.__pad_0, aMultiplayer, aWollimitresolu, this->sparkParticles); /*0x6990ec*/
  INIClass::SetInt(dword_8870C0.__pad_0, aMultiplayer, aLastnickslot, this->ambientParticles, 0); /*0x699109*/
  v2 = CharToWideString(&this->ammoReloadTimer); /*0x699114*/
  INIClass::SetWideAsHex(dword_8870C0.__pad_0, aMultiplayer, aHandle, (wchar_t *)v2); /*0x699129*/
  INIClass::SetInt(dword_8870C0.__pad_0, aMultiplayer, aColor, this->radarFlashTimer[2], 0); /*0x699146*/
  INIClass::SetInt(dword_8870C0.__pad_0, aMultiplayer, aColorex, this->targetingTimer[0], 0); /*0x699163*/
  INIClass::SetHouseName(dword_8870C0.__pad_0, aMultiplayer, aSide, (void *)this->targetingTimer[1]); /*0x69917e*/
  INIClass::SetInt(dword_8870C0.__pad_0, aMultiplayer, aSideex, this->targetingTimer[2], 0); /*0x69919b*/
  vtable1 = this->vtable1; /*0x6991a0*/
  if ( vtable1 ) /*0x6991a7*/
    INIClass::SetInt(dword_8870C0.__pad_0, aMultiplayer, g_INI_Key_GameMode, *(_DWORD *)(vtable1 + 40), 0); /*0x6991ad*/
  else
    INIClass::SetInt(dword_8870C0.__pad_0, aMultiplayer, g_INI_Key_GameMode, 0, 0); /*0x6991c0*/
  GameSetup::WriteINI((int)this->__pad_18C, dword_8870C0.__pad_0, (unsigned __int8 *)aSkirmish); /*0x6991d5*/
  GameSetup::WriteINI((int)&this->currentBurstCount, dword_8870C0.__pad_0, (unsigned __int8 *)aLan); /*0x6991ea*/
  GameSetup::WriteINI((int)&this->chronoLockRemaining, dword_8870C0.__pad_0, (unsigned __int8 *)aWonlinepref); /*0x6991ff*/
  INIClass::ClearSection((int *)dword_8870C0.__pad_0, (int)g_INI_Key_SerialDefaults, 0); /*0x699210*/
  INIClass::SetString(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aCallwaitstring_0, (char *)this + 10408); /*0x69922b*/
  INIClass::SetInt(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aCallwaitstring, *((_DWORD *)this + 2599), 0); /*0x699248*/
  INIClass::SetInt(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aInitstringinde, *((_DWORD *)this + 2598), 0); /*0x699265*/
  INIClass::SetString( /*0x699287*/
    dword_8870C0.__pad_0,
    g_INI_Key_SerialDefaults,
    aDialmethod,
    (&off_83ECFC)[*((_DWORD *)this + 2597)]);
  INIClass::SetInt(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aBaud, *((_DWORD *)this + 2596), 0); /*0x6992a4*/
  INIClass::SetInt(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aIrq, *((_DWORD *)this + 2595), 0); /*0x6992c1*/
  INIClass::SetInt(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aPort, *((_DWORD *)this + 2594), 1); /*0x6992de*/
  INIClass::SetInt(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aCompression, *((_DWORD *)this + 2600), 0); /*0x6992fb*/
  INIClass::SetInt(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aErrorcorrectio, *((_DWORD *)this + 2601), 0); /*0x699318*/
  INIClass::SetString(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aModemname, (char *)this + 10424); /*0x699333*/
  INIClass::ClearSection((int *)dword_8870C0.__pad_0, (int)g_INI_Key_InitStrings, 0); /*0x699344*/
  for ( i = 0; i < *((_DWORD *)this + 2633); ++i ) /*0x699359*/
  {
    wsprintfA(v7, "%03d", i); /*0x699366*/
    INIClass::SetString(dword_8870C0.__pad_0, g_INI_Key_InitStrings, v7, *(char **)(*((_DWORD *)this + 2630) + 4 * i)); /*0x699384*/
  }
  INIClass::ClearSection((int *)dword_8870C0.__pad_0, (int)g_INI_Key_PhoneBook, 0); /*0x6993a0*/
  for ( j = *((_DWORD *)this + 2627) - 1; j >= 0; --j ) /*0x6993ac*/
  {
    v6 = *(_DWORD *)(*((_DWORD *)this + 2624) + 4 * j); /*0x6993b4*/
    wsprintfA( /*0x6993f6*/
      (LPSTR)&v8[0].BufferOffset,
      "%s|%s|%x|%d|%d|%d|%d|%s|%d|%d|%s",
      (const char *)(v6 + 112),
      (const char *)(v6 + 154),
      *(_DWORD *)v6,
      *(_DWORD *)(v6 + 4),
      *(_DWORD *)(v6 + 8),
      *(_DWORD *)(v6 + 24),
      *(_DWORD *)(v6 + 28),
      (&off_83ECFC)[*(_DWORD *)(v6 + 12)],
      *(_DWORD *)(v6 + 16),
      *(_DWORD *)(v6 + 20),
      (const char *)(v6 + 32));
    wsprintfA(v7, "%03d", j); /*0x699403*/
    INIClass::SetString(dword_8870C0.__pad_0, g_INI_Key_PhoneBook, v7, (char *)&v8[0].BufferOffset); /*0x69941c*/
  }
  INIClass::WriteDigest((CCINIClass *)&dword_8870C0, (int)v8, 0); /*0x699430*/
  RawFileClass::Dtor(v8); /*0x699439*/
}



// ==== 0x00699450  ScenarioClass::SaveMultiplayerSettings  this=ScenarioClass  sig=csp ====
void __thiscall sub_699450(char *this)
{
  int v2[9]; // [esp+4h] [ebp-24h] BYREF

  RawFileClass::Construct(v2, (int)aRa2mdIni); /*0x69945f*/
  INIClass::SetBool((char *)&dword_8870C0, (unsigned __int8 *)aMultiplayer, aWoltaunts, this->q1ED9); /*0x69947a*/
  INIClass::SetBool((char *)&dword_8870C0, (unsigned __int8 *)aMultiplayer, aLantaunts, this->q1ED8); /*0x699495*/
  INIClass::SetBool((char *)&dword_8870C0, (unsigned __int8 *)aMultiplayer, aWolscrolltext, this->q1FC1); /*0x6994b0*/
  INIClass::SetBool((char *)&dword_8870C0, (unsigned __int8 *)aMultiplayer, aLanscrolltext, this->q1FC0); /*0x6994cb*/
  INIClass::WriteDigest(&dword_8870C0, (int)v2, 0); /*0x6994dc*/
  RawFileClass::Dtor(v2); /*0x6994e5*/
}



// ==== 0x006994F0  ParseMapFileHeader  this=AbstractClass  sig=csp ====
int __fastcall ParseMapFileHeader(char *Source, _WORD *a2, char *a3, char *Destination, _BYTE *a5, int *a6, int *a7)
{
  int v7; // edi
  void *v8; // ebp
  signed int v9; // esi
  char *v10; // eax
  char *v11; // esi
  char *v12; // eax
  int v13; // edi
  void *v14; // esi
  signed int v15; // edi
  int v17; // [esp+10h] [ebp-1A4h]
  char *v19; // [esp+1Ch] [ebp-198h]
  CCFileClass v20; // [esp+20h] [ebp-194h] BYREF
  int v21[3]; // [esp+78h] [ebp-13Ch] BYREF
  int v22; // [esp+84h] [ebp-130h]
  Straw v23; // [esp+8Ch] [ebp-128h] BYREF
  int v24; // [esp+94h] [ebp-120h]
  Buffer v25; // [esp+98h] [ebp-11Ch] BYREF
  int v26; // [esp+C0h] [ebp-F4h]
  INIClass v27; // [esp+C4h] [ebp-F0h] BYREF
  char v28; // [esp+104h] [ebp-B0h]
  INIClass v29; // [esp+11Ch] [ebp-98h] BYREF
  char v30; // [esp+15Ch] [ebp-58h]
  char v31[64]; // [esp+174h] [ebp-40h] BYREF

  CCFileClass::Construct(&v20, Source); /*0x699507*/
  if ( (unsigned __int8)CCFileClass::Open(&v20, 0) && FileClass::Load(&v20, (const CHAR *)1) ) /*0x699526*/
  {
    v7 = 0; /*0x699533*/
    v8 = 0; /*0x699535*/
    while ( 1 ) /*0x69953b*/
    {
      v7 += 5; /*0x69953b*/
      v9 = v7 * CCFileClass::GetSize(&v20) / 100; /*0x69955b*/
      if ( v8 ) /*0x69955d*/
        __3_YAXPAX_Z(v8); /*0x699560*/
      v8 = (void *)__2_YAPAXI_Z(v9 + 1); /*0x699571*/
      if ( !v8 ) /*0x699578*/
        break; /*0x699578*/
      BufferIOFileClass::Seek(&v20, 0, 0); /*0x699584*/
      CCFileClass::Read(&v20, v8, v9); /*0x69958f*/
      *((_BYTE *)v8 + v9) = 0; /*0x699594*/
      v10 = strstr((const char *)v8, aBasic_0); /*0x69959d*/
      v11 = v10; /*0x6995a2*/
      if ( v10 ) /*0x6995a9*/
      {
        v12 = strstr(v10 + 5, asc_83F484); /*0x6995b4*/
        v19 = v12; /*0x6995be*/
        if ( v12 > v11 ) /*0x6995c2*/
        {
          v12[1] = 0; /*0x6995e1*/
          Debug::Log(); /*0x6995e4*/
          v13 = 0; /*0x6995ec*/
          v14 = 0; /*0x6995ee*/
          while ( 1 ) /*0x6995f5*/
          {
            v17 = v13 + 1; /*0x6995f5*/
            v15 = (v13 + 1) * CCFileClass::GetSize(&v20) / 100; /*0x699616*/
            if ( v14 ) /*0x699618*/
              __3_YAXPAX_Z(v14); /*0x69961b*/
            v14 = (void *)__2_YAPAXI_Z(v15 + 1); /*0x69962c*/
            if ( !v14 ) /*0x699633*/
              goto LABEL_20; /*0x699633*/
            BufferIOFileClass::Seek(&v20, -v15, 2u); /*0x699644*/
            CCFileClass::Read(&v20, v14, v15); /*0x69964f*/
            *((_BYTE *)v14 + v15) = 0; /*0x699654*/
            if ( strstr((const char *)v14, aDigest_0) ) /*0x69965d*/
            {
              Debug::Log(); /*0x699693*/
              v27.headNode[0] = 0; /*0x6996a2*/
              v27.headNode[1] = 0; /*0x6996a9*/
              INISectionList::Constructor((INISectionList *)&v27.headNode[2]); /*0x6996b0*/
              Node::Init((Node *)&v27.__pad_20[8]); /*0x6996bc*/
              v27.INIClass_field_3C = 0; /*0x6996d5*/
              v28 = 0; /*0x6996dc*/
              *(_DWORD *)v27.__pad_0 = &CCINIClass_Vtable; /*0x6996e3*/
              v25.Buffer_field_14 = 0; /*0x6996ea*/
              v25.Buffer_field_18 = 0; /*0x6996f1*/
              v25.Buffer_field_10 = (int)&Straw::`vftable'; /*0x6996f8*/
              Buffer::Init((Buffer *)&v25.Buffer_field_1C, (int)v8, v19 - (_BYTE *)v8); /*0x699703*/
              v26 = 0; /*0x69970f*/
              v25.Buffer_field_10 = (int)&BufferStraw::`vftable'; /*0x699720*/
              CCINIClass::LoadAndVerifyDigest((int *)v27.__pad_0, (int)&v25.Buffer_field_10, 0, 0); /*0x69972b*/
              v29.headNode[0] = 0; /*0x699737*/
              v29.headNode[1] = 0; /*0x69973e*/
              INISectionList::Constructor((INISectionList *)&v29.headNode[2]); /*0x699745*/
              Node::Init((Node *)&v29.__pad_20[8]); /*0x699751*/
              *(_DWORD *)v29.__pad_0 = &CCINIClass_Vtable; /*0x699756*/
              v29.INIClass_field_3C = 0; /*0x699764*/
              v30 = 0; /*0x69976b*/
              v23.Straw_field_0x04 = 0; /*0x69977f*/
              v24 = 0; /*0x699786*/
              *(_DWORD *)v23.__pad_0 = &Straw::`vftable'; /*0x69978d*/
              Buffer::Init(&v25, (int)v14, strlen((const char *)v14) + 1); /*0x699798*/
              v25.Buffer_field_0C = 0; /*0x6997ae*/
              *(_DWORD *)v23.__pad_0 = &BufferStraw::`vftable'; /*0x6997b5*/
              CCINIClass::LoadAndVerifyDigest((int *)v29.__pad_0, (int)&v23, 0, 0); /*0x6997c0*/
              *a6 = INIClass::ReadInt_Overwrite( /*0x6997e5*/
                      (bool *)v27.__pad_0,
                      (unsigned __int8 *)&stru_82BA00.?,
                      aMinplayers,
                      *a6);
              *a7 = INIClass::ReadInt_Overwrite( /*0x69981b*/
                      (bool *)v27.__pad_0,
                      (unsigned __int8 *)&stru_82BA00.?,
                      aMaxplayers,
                      *a7);
              INIClass::GetString( /*0x699833*/
                &v27,
                (unsigned __int8 *)&stru_82BA00.?,
                (unsigned __int8 *)g_INI_Key_GameMode,
                &g_INI_DefaultBuffer,
                Destination,
                256);
              INIClass::GetString( /*0x699858*/
                &v27,
                (unsigned __int8 *)&stru_82BA00.?,
                (unsigned __int8 *)g_INI_Key_Name,
                g_Str_No_Name,
                v31,
                64);
              BulkCharToWide(a2, (unsigned __int8 *)v31, -1); /*0x69986a*/
              INIClass::GetString(&v29, (unsigned __int8 *)g_INI_Key_Digest, a1, g_Str_No_Digest, a3, 32); /*0x69988f*/
              *a5 = INIClass::ReadBool_Overwrite( /*0x6998ba*/
                      (int *)v27.__pad_0,
                      (unsigned __int8 *)&stru_82BA00.?,
                      (unsigned __int8 *)g_INI_Key_Official,
                      0);
              Debug::Log(); /*0x6998d9*/
              Debug::Log(); /*0x6998eb*/
              __3_YAXPAX_Z(v8); /*0x6998f1*/
              __3_YAXPAX_Z(v14); /*0x6998f7*/
              Vector::Clear((int)&v25); /*0x699906*/
              Straw::Dtor(&v23); /*0x699912*/
              HashTable::DestroyHashTableINIClass(&v29); /*0x69991e*/
              Vector::Clear((int)&v25.Buffer_field_1C); /*0x69992a*/
              Straw::Dtor((Straw *)&v25.Buffer_field_10); /*0x699936*/
              HashTable::DestroyHashTableINIClass(&v27); /*0x699942*/
              goto LABEL_20; /*0x699942*/
            }
            if ( v17 >= 100 ) /*0x699670*/
            {
              __3_YAXPAX_Z(v8); /*0x69967a*/
              __3_YAXPAX_Z(v14); /*0x699680*/
              goto LABEL_20; /*0x699688*/
            }
            v13 = v17; /*0x699672*/
          }
        }
      }
      if ( v7 >= 100 ) /*0x6995c7*/
      {
        __3_YAXPAX_Z(v8); /*0x6995ce*/
        break; /*0x6995d6*/
      }
    }
  }
LABEL_20:
  *(_DWORD *)v20.CDFileClass = &CCFileClass::`vftable'; /*0x699947*/
  v22 = 0; /*0x699953*/
  Vector::Clear((int)v21); /*0x69995a*/
  *(_DWORD *)v20.CDFileClass = &off_7E1668; /*0x699963*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v20); /*0x699970*/
}



// ==== 0x00699980  SessionClass::LoadMissionList  this=SessionClass  sig=csp ====
char *__thiscall SessionClass::LoadMissionList(SessionClass *this)
{
  wchar_t *Description; // esi
  int v3; // eax
  int *v4; // ebp
  int KeyCount; // ebx
  int v6; // edi
  unsigned __int8 *StringByIndex; // eax
  MapFile *v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  HANDLE FirstFileA; // ebx
  char *cAlternateFileName; // esi
  int v15; // ebx
  int i; // edi
  unsigned __int8 *v17; // eax
  MapFile *v18; // eax
  wchar_t *v19; // esi
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // edx
  HANDLE v24; // ebx
  char *cFileName; // esi
  MixFileClass *v26; // eax
  _DWORD *v27; // edi
  int v28; // eax
  unsigned int v29; // kr0C_4
  unsigned int v30; // ebx
  int v31; // eax
  int v32; // ecx
  unsigned __int8 *v33; // eax
  MapFile *v34; // eax
  wchar_t *v35; // eax
  wchar_t *v36; // esi
  int v37; // ecx
  int v38; // eax
  int v39; // edi
  wchar_t *StringCSF; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  int v44; // edx
  char *v45; // esi
  SessionClass *v46; // eax
  wchar_t *v47; // esi
  int v48; // ecx
  int v49; // eax
  int v50; // eax
  int v51; // edx
  HANDLE hFindFile; // [esp+20h] [ebp-5C4h]
  HANDLE hFindFilea; // [esp+20h] [ebp-5C4h]
  HANDLE hFindFileb; // [esp+20h] [ebp-5C4h]
  char v56[4]; // [esp+24h] [ebp-5C0h] BYREF
  int j; // [esp+28h] [ebp-5BCh]
  int v58; // [esp+2Ch] [ebp-5B8h] BYREF
  int v59; // [esp+30h] [ebp-5B4h] BYREF
  INIClass v60; // [esp+34h] [ebp-5B0h] BYREF
  int v61; // [esp+74h] [ebp-570h]
  int v62; // [esp+78h] [ebp-56Ch]
  CCFileClass v63; // [esp+7Ch] [ebp-568h] BYREF
  char v64[12]; // [esp+D4h] [ebp-510h] BYREF
  int v65; // [esp+E0h] [ebp-504h]
  char v66[64]; // [esp+E8h] [ebp-4FCh] BYREF
  char v67[32]; // [esp+128h] [ebp-4BCh] BYREF
  wchar_t Source[44]; // [esp+148h] [ebp-49Ch] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+1A0h] [ebp-444h] BYREF
  wchar_t Buffer[64]; // [esp+2E0h] [ebp-304h] BYREF
  wchar_t v71[64]; // [esp+360h] [ebp-284h] BYREF
  char Destination[260]; // [esp+3E0h] [ebp-204h] BYREF
  char v73[256]; // [esp+4E4h] [ebp-100h] BYREF

  Description = 0; /*0x69998b*/
  v60.headNode[0] = 0; /*0x699992*/
  v60.headNode[1] = 0; /*0x699996*/
  GenericList::Constructor((GenericList *)&v60.headNode[2]); /*0x69999a*/
  v3 = this->unknown_310[224]; /*0x69999f*/
  v4 = &this->unknown_310[224]; /*0x6999a5*/
  v60.headNode[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x6999ad*/
  memset(&v60.__pad_20[8], 0, 13); /*0x6999b5*/
  v60.unknown38 = 0; /*0x6999c6*/
  v60.INIClass_field_3C = 0; /*0x6999ca*/
  *(_DWORD *)v60.__pad_0 = &INIClass::`vftable'; /*0x6999ce*/
  (*(void (__thiscall **)(int *))(v3 + 12))(v4); /*0x6999d6*/
  CCFileClass::Construct(&v63, aMissionsmdPkt); /*0x6999e2*/
  if ( (unsigned __int8)CCFileClass::Open(&v63, 0) ) /*0x6999ec*/
  {
    FileStraw::Open((FileStraw *)&v60, (int)&v63, 0); /*0x699a03*/
    KeyCount = INIClass::GetKeyCount(v60.__pad_0, g_INI_Key_MultiMaps); /*0x699a16*/
    v6 = 0; /*0x699a18*/
    if ( KeyCount > 0 ) /*0x699a1c*/
    {
      while ( 1 ) /*0x699a3f*/
      {
        StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v60.__pad_0, g_INI_Key_MultiMaps, v6); /*0x699a3f*/
        if ( INIClass::GetString(&v60, g_INI_Key_MultiMaps, StringByIndex, &g_INI_DefaultBuffer, v66, 64) ) /*0x699a4e*/
        {
          v8 = (MapFile *)__2_YAPAXI_Z(0x1BCu); /*0x699a5c*/
          if ( v8 ) /*0x699a66*/
            Description = MapFile::LoadDescription(v8, (unsigned __int8 ***)&v60, v66); /*0x699a7c*/
          v9 = v4[2]; /*0x699a7e*/
          if ( v4[4] < v9 /*0x699aa4*/
            || (*((_BYTE *)v4 + 13) || !v9)
            && (v10 = v4[5], v10 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v4 + 8))(v4, v9 + v10, 0) )
          {
            v11 = v4[4]; /*0x699aab*/
            v12 = v4[1]; /*0x699aae*/
            v4[4] = v11 + 1; /*0x699ab4*/
            *(_DWORD *)(v12 + 4 * v11) = Description; /*0x699ab7*/
          }
        }
        if ( ++v6 >= KeyCount ) /*0x699abd*/
          break; /*0x699abd*/
        Description = 0; /*0x699a24*/
      }
    }
  }
  INIClass::ClearSection((int *)v60.__pad_0, 0, 0); /*0x699acb*/
  CCFileClass::Reset(&v63); /*0x699ad4*/
  FirstFileA = FindFirstFileA(aPkt, &FindFileData); /*0x699aec*/
  hFindFile = FirstFileA; /*0x699af1*/
  if ( FirstFileA != (HANDLE)-1 )
  {
    do
    {
      if ( (FindFileData.dwFileAttributes & 0x116) == 0 )
      {
        cAlternateFileName = FindFileData.cAlternateFileName; /*0x699b18*/
        if ( !strlen(FindFileData.cAlternateFileName) ) /*0x699b1f*/
          cAlternateFileName = FindFileData.cFileName; /*0x699b26*/
        if ( _strcmpi(cAlternateFileName, aMissionsmdPkt) )
        {
          FileClass::SetFileName(&v63, cAlternateFileName); /*0x699b48*/
          FileStraw::Open((FileStraw *)&v60, (int)&v63, 0); /*0x699b58*/
          v15 = INIClass::GetKeyCount(v60.__pad_0, g_INI_Key_MultiMaps); /*0x699b6b*/
          for ( i = 0; i < v15; ++i )
          {
            v17 = (unsigned __int8 *)INIClass::GetStringByIndex(v60.__pad_0, g_INI_Key_MultiMaps, i); /*0x699b90*/
            if ( INIClass::GetString(&v60, g_INI_Key_MultiMaps, v17, &g_INI_DefaultBuffer, v66, 64) )
            {
              v18 = (MapFile *)__2_YAPAXI_Z(0x1BCu); /*0x699bad*/
              v19 = v18 ? MapFile::LoadDescription(v18, (unsigned __int8 ***)&v60, v66) : 0;
              v20 = v4[2]; /*0x699bd3*/
              if ( v4[4] < v20 /*0x699bf9*/
                || (*((_BYTE *)v4 + 13) || !v20)
                && (v21 = v4[5], v21 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v4 + 8))(v4, v20 + v21, 0) )
              {
                v22 = v4[4]; /*0x699c00*/
                v23 = v4[1]; /*0x699c03*/
                v4[4] = v22 + 1; /*0x699c09*/
                *(_DWORD *)(v23 + 4 * v22) = v19; /*0x699c0c*/
              }
            }
          }
          FirstFileA = hFindFile; /*0x699c18*/
        }
      }
    }
    while ( FindNextFileA(FirstFileA, &FindFileData) );
    FindClose(FirstFileA); /*0x699c34*/
  }
  INIClass::ClearSection((int *)v60.__pad_0, 0, 0); /*0x699c42*/
  CCFileClass::Reset(&v63); /*0x699c4b*/
  v24 = FindFirstFileA(aYro, &FindFileData); /*0x699c69*/
  hFindFilea = v24; /*0x699c70*/
  v61 = dword_81C1D0; /*0x699c74*/
  SetSoundWarning(-2); /*0x699c78*/
  if ( v24 != (HANDLE)-1 ) /*0x699c80*/
  {
    do /*0x699fbc*/
    {
      if ( (FindFileData.dwFileAttributes & 0x116) == 0 ) /*0x699c91*/
      {
        cFileName = FindFileData.cAlternateFileName; /*0x699ca3*/
        if ( !strlen(FindFileData.cAlternateFileName) ) /*0x699caa*/
          cFileName = FindFileData.cFileName; /*0x699cb1*/
        if ( _strcmpi(cFileName, aMissionsYro) ) /*0x699cbe*/
        {
          v26 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x699cd0*/
          if ( v26 ) /*0x699cda*/
          {
            v27 = MixFileClass::FromFile(v26, cFileName, (int)dword_886980); /*0x699ced*/
            if ( v27 ) /*0x699cf1*/
            {
              if ( dword_884DD0 < dword_884DC8 /*0x699d2d*/
                || (byte_884DCD || !dword_884DC8)
                && dword_884DD4 > 0
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MixFileClass_Array_Alt + 8))(
                     &MixFileClass_Array_Alt,
                     dword_884DC8 + dword_884DD4,
                     0) )
              {
                v28 = dword_884DD0++; /*0x699d3a*/
                *((_DWORD *)dword_884DC4 + v28) = v27; /*0x699d49*/
              }
              v29 = strlen(cFileName) + 1; /*0x699d53*/
              v30 = v29 - 1; /*0x699d5f*/
              strncpy(Destination, cFileName, v29 - 4); /*0x699d67*/
              *((_BYTE *)&v71[62] + v30 + 1) = 0; /*0x699d8f*/
              strcat(Destination, (const char *)&off_83F4F0); /*0x699d9f*/
              Destination[v30] = 0; /*0x699da8*/
              FileClass::SetFileName(&v63, Destination); /*0x699dbb*/
              if ( (unsigned __int8)CCFileClass::Open(&v63, 0) ) /*0x699dc7*/
              {
                FileStraw::Open((FileStraw *)&v60, (int)&v63, 0); /*0x699dde*/
                v31 = INIClass::GetKeyCount(v60.__pad_0, g_INI_Key_MultiMaps); /*0x699dec*/
                v32 = 0; /*0x699df1*/
                v62 = v31; /*0x699df5*/
                for ( j = 0; j < v62; ++j ) /*0x699dfd*/
                {
                  v33 = (unsigned __int8 *)INIClass::GetStringByIndex(v60.__pad_0, g_INI_Key_MultiMaps, v32); /*0x699e1c*/
                  if ( INIClass::GetString(&v60, g_INI_Key_MultiMaps, v33, &g_INI_DefaultBuffer, v66, 64) ) /*0x699e2b*/
                  {
                    v34 = (MapFile *)__2_YAPAXI_Z(0x1BCu); /*0x699e3d*/
                    if ( v34 ) /*0x699e47*/
                    {
                      v35 = MapFile::LoadDescription(v34, (unsigned __int8 ***)&v60, v66); /*0x699e5c*/
                      v36 = v35; /*0x699e61*/
                      if ( v35 ) /*0x699e65*/
                      {
                        v37 = *((_DWORD *)v35 + 97); /*0x699e6b*/
                        v38 = *((_DWORD *)v35 + 96); /*0x699e71*/
                        if ( v38 == v37 ) /*0x699e7b*/
                          swprintf(Buffer, (const size_t)&off_83F4CC, (const wchar_t *const)0x28, v38, 41); /*0x699ea8*/
                        else
                          swprintf(Buffer, (const size_t)&off_83F4DC, (const wchar_t *const)0x28, v38, v37, 41); /*0x699e8e*/
                        v39 = wcslen(v36); /*0x699ebf*/
                        wcscpy(Source, v36); /*0x699ec1*/
                        wcsncat(Source, asc_82083C, 44 - v39); /*0x699edb*/
                        wcsncat(Source, Buffer, 44 - (v39 + 1)); /*0x699ef9*/
                        if ( Source ) /*0x699f0a*/
                        {
                          wcsncpy(v36, Source, 0x2Cu); /*0x699f17*/
                          v36[43] = 0; /*0x699f1f*/
                        }
                        else
                        {
                          StringCSF = GetStringCSF(g_Str_MSG_NoDescription, 0, g_Str_File_Session_CPP, 2845); /*0x699f36*/
                          wcscpy(v36, StringCSF); /*0x699f3d*/
                        }
                        v41 = v4[2]; /*0x699f45*/
                        if ( v4[4] < v41 /*0x699f6a*/
                          || (*((_BYTE *)v4 + 13) || !v41)
                          && (v42 = v4[5], v42 > 0)
                          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v4 + 8))(v4, v41 + v42, 0) )
                        {
                          v43 = v4[4]; /*0x699f71*/
                          v44 = v4[1]; /*0x699f74*/
                          v4[4] = v43 + 1; /*0x699f7a*/
                          *(_DWORD *)(v44 + 4 * v43) = v36; /*0x699f7d*/
                        }
                      }
                    }
                  }
                  v32 = j + 1; /*0x699f88*/
                }
                INIClass::ClearSection((int *)v60.__pad_0, 0, 0); /*0x699f9b*/
              }
              else
              {
                Debug::Log(); /*0x699fa7*/
              }
              v24 = hFindFilea; /*0x699faf*/
            }
          }
        }
      }
    }
    while ( FindNextFileA(v24, &FindFileData) ); /*0x699fbc*/
  }
  SetSoundWarning(v61); /*0x699fd0*/
  if ( v24 != (HANDLE)-1 ) /*0x699fd8*/
    FindClose(v24); /*0x699fdb*/
  INIClass::ClearSection((int *)v60.__pad_0, 0, 0); /*0x699fe7*/
  CCFileClass::Reset(&v63); /*0x699ff0*/
  hFindFileb = FindFirstFileA(aYrm_0, &FindFileData); /*0x69a010*/
  v56[0] = 0; /*0x69a014*/
  if ( hFindFileb != (HANDLE)-1 ) /*0x69a019*/
  {
    do /*0x69a190*/
    {
      if ( (FindFileData.dwFileAttributes & 0x116) == 0 ) /*0x69a02f*/
      {
        v45 = FindFileData.cAlternateFileName; /*0x69a041*/
        if ( !strlen(FindFileData.cAlternateFileName) ) /*0x69a048*/
          v45 = FindFileData.cFileName; /*0x69a04f*/
        INIClass::GetString( /*0x69a073*/
          &v60,
          (unsigned __int8 *)&stru_82BA00.?,
          (unsigned __int8 *)g_INI_Key_Name,
          g_Str_No_Name,
          v66,
          64);
        INIClass::GetString(&v60, (unsigned __int8 *)g_INI_Key_Digest, a1, g_Str_No_Digest, v67, 32); /*0x69a095*/
        BulkCharToWide(v71, (unsigned __int8 *)v66, -1); /*0x69a0aa*/
        v56[0] = INIClass::ReadBool_Overwrite( /*0x69a0c8*/
                   (int *)v60.__pad_0,
                   (unsigned __int8 *)&stru_82BA00.?,
                   (unsigned __int8 *)g_INI_Key_Official,
                   0);
        v59 = 2; /*0x69a0f0*/
        v58 = 4; /*0x69a0f8*/
        ParseMapFileHeader(v45, v71, v67, v73, v56, &v59, &v58); /*0x69a0fc*/
        v46 = (SessionClass *)__2_YAPAXI_Z(0x1BCu); /*0x69a106*/
        if ( v46 ) /*0x69a110*/
          v47 = SessionClass::ParseGameInfo(v46, v45, v71, v67, v56[0], v73, v59, v58); /*0x69a141*/
        else
          v47 = 0; /*0x69a145*/
        v48 = v4[2]; /*0x69a147*/
        if ( v4[4] < v48 /*0x69a16d*/
          || (*((_BYTE *)v4 + 13) || !v48)
          && (v49 = v4[5], v49 > 0)
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v4 + 8))(v4, v48 + v49, 0) )
        {
          v50 = v4[4]; /*0x69a174*/
          v51 = v4[1]; /*0x69a177*/
          v4[4] = v50 + 1; /*0x69a17d*/
          *(_DWORD *)(v51 + 4 * v50) = v47; /*0x69a180*/
        }
      }
    }
    while ( FindNextFileA(hFindFileb, &FindFileData) ); /*0x69a190*/
    FindClose(hFindFileb); /*0x69a1a3*/
  }
  *(_DWORD *)v63.CDFileClass = &CCFileClass::`vftable'; /*0x69a1b2*/
  v65 = 0; /*0x69a1ba*/
  Vector::Clear((int)v64); /*0x69a1c1*/
  *(_DWORD *)v63.CDFileClass = &off_7E1668; /*0x69a1ca*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v63); /*0x69a1d2*/
  return HashTable::DestroyHashTableINIClass(&v60); /*0x69a1e0*/
}



// ==== 0x0069A1F0  WinMain::Constructor_VectorClass_Wstring_  this=WinMain  sig=csp ====
int __thiscall WinMain::Constructor_VectorClass_Wstring_(WinMain *this)
{
  int i; // ebp
  int v3; // esi
  void *v4; // eax
  int j; // esi
  int k; // esi

  for ( i = 0; i < this->q1A8; ++i ) /*0x69a200*/
  {
    v3 = *(_DWORD *)(this->q1A5 + 4 * i); /*0x69a208*/
    if ( v3 ) /*0x69a20d*/
    {
      *(_DWORD *)(v3 + 420) = &VectorClass<Wstring>::`vftable'; /*0x69a215*/
      VectorClass_Wstring::ddtor((_VectorClass_VWstring *)(v3 + 420)); /*0x69a21b*/
      v4 = *(void **)(v3 + 396); /*0x69a220*/
      *(_DWORD *)(v3 + 392) = &VectorClass<enum DiskID>::`vftable'; /*0x69a226*/
      if ( v4 && *(_BYTE *)(v3 + 405) ) /*0x69a234*/
      {
        __3_YAXPAX_Z(v4); /*0x69a23d*/
        *(_DWORD *)(v3 + 396) = 0; /*0x69a245*/
      }
      *(_BYTE *)(v3 + 405) = 0; /*0x69a24c*/
      *(_DWORD *)(v3 + 400) = 0; /*0x69a252*/
      __3_YAXPAX_Z((void *)v3); /*0x69a258*/
    }
  }
  (*(void (__thiscall **)(WinMain *))(this->q1A4 + 12))(this + 1680); /*0x69a277*/
  for ( j = 0; j < this->qA49; ++j ) /*0x69a284*/
    __3_YAXPAX_Z(*(void **)(this->qA46 + 4 * j)); /*0x69a290*/
  (*(void (__thiscall **)(WinMain *))(this->qA45 + 12))(this + 10516); /*0x69a2af*/
  for ( k = 0; k < this->qA43; ++k ) /*0x69a2bc*/
  {
    if ( *(_DWORD *)(this->qA40 + 4 * k) ) /*0x69a2c4*/
      __3_YAXPAX_Z(*(void **)(this->qA40 + 4 * k)); /*0x69a2cc*/
  }
  return (*(int (__thiscall **)(WinMain *))(this->qA3F + 12))(this + 10492); /*0x69a2ee*/
}



// ==== 0x0069A300  ObjectClass::nullsub_35  this=ObjectClass  sig=csp ====
void nullsub_35(ObjectClass *this)
{
  ; /*0x69a300*/
}



// ==== 0x0069A310  SessionClass::GetPlayerColorScheme  this=SessionClass  sig=csp ====
int __stdcall SessionClass::GetPlayerColorScheme(unsigned int a1)
{
  int result; // eax

  result = a1; /*0x69a310*/
  if ( a1 == -2 ) /*0x69a317*/
    return unk_83ED1C; /*0x69a31e*/
  if ( a1 < 9 ) /*0x69a32b*/
    return byte_83ED14[a1]; /*0x69a32d*/
  return result; /*0x69a325*/
}



// ==== 0x0069A340  sub_69A340  this=-  sig=ida-proto ====
DWORD sub_69A340()
{
  DWORD v0; // eax
  char *v1; // eax
  const char *v2; // ebx
  unsigned int v3; // esi
  DWORD Time; // [esp+Ch] [ebp-4h] BYREF

  Time = timeGetTime(); /*0x69a34a*/
  v0 = DiskSpace::CheckAvailable(); /*0x69a34e*/
  ComputeHash(&Time, v0); /*0x69a359*/
  v1 = Object_Init_7CBC11(aPath); /*0x69a363*/
  v2 = v1; /*0x69a368*/
  if ( v1 ) /*0x69a36f*/
  {
    v3 = 0; /*0x69a378*/
    if ( strlen(v1) ) /*0x69a37a*/
    {
      do /*0x69a39d*/
        ComputeHash(&Time, v2[v3++]); /*0x69a389*/
      while ( v3 < strlen(v2) ); /*0x69a39d*/
    }
  }
  return Time; /*0x69a3a3*/
}



// ==== 0x0069A3B0  MapFile::LoadDescription  this=MapFile  sig=csp ====
wchar_t *__thiscall MapFile::LoadDescription(MapFile *this, unsigned __int8 ***a2, char *a3)
{
  MapFile *v4; // ebp
  int v5; // edx
  unsigned __int8 *v6; // esi
  unsigned __int8 ***v7; // edi
  bool v8; // al
  int Int_Overwrite; // eax
  int v10; // ecx
  char *v11; // eax
  void *v12; // eax
  int MapFile_field_0x10; // ecx
  int MapFile_field_0x08; // eax
  int MapFile_field_0x14; // ecx
  int v16; // eax
  int MapFile_field_0x04; // edx
  int i; // esi
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v23; // [esp+0h] [ebp-214h] BYREF
  ObjectClass v24; // [esp+10h] [ebp-204h] BYREF
  INIClass v25; // [esp+BCh] [ebp-158h] BYREF
  char v26; // [esp+FCh] [ebp-118h]
  char Source[128]; // [esp+114h] [ebp-100h] BYREF
  char String[128]; // [esp+194h] [ebp-80h] BYREF

  v4 = this + 14; /*0x69a3bc*/
  MapFile::Constructor(this + 14, 0, 0); /*0x69a3c8*/
  v4->MapFile_field_0x14 = 10; /*0x69a3de*/
  v4->MapFile_field_0x10 = 0; /*0x69a3e1*/
  *(_DWORD *)v4->__pad_0 = &TypeList<enum DiskID>::`vftable'; /*0x69a3e8*/
  VectorClass::WstringConstructor((VectorClass *)(this + 15), 0, 0); /*0x69a3ef*/
  *((_DWORD *)this + 110) = 10; /*0x69a3f4*/
  *((_DWORD *)this + 105) = &DynamicVectorClass<Wstring>::`vftable'; /*0x69a3f7*/
  *((_DWORD *)this + 109) = 0; /*0x69a3fd*/
  *(_WORD *)this->__pad_0 = 0; /*0x69a40e*/
  *((_BYTE *)this + 347) = 0; /*0x69a413*/
  strcpy((char *)this + 348, g_Str_No_Digest); /*0x69a42f*/
  v5 = *(_DWORD *)v4->__pad_0; /*0x69a438*/
  *((_BYTE *)this + 380) = 1; /*0x69a43d*/
  this->q018 = 2; /*0x69a444*/
  *((_DWORD *)this + 97) = 4; /*0x69a44e*/
  (*(void (__thiscall **)(MapFile *))(v5 + 12))(v4); /*0x69a458*/
  if ( a3 ) /*0x69a464*/
  {
    strcpy((char *)this + 88, a3); /*0x69a481*/
    strcat((char *)this + 88, g_Str_File__MAP); /*0x69a4af*/
    if ( g_INI_Key_DescriptionText ) /*0x69a4bf*/
    {
      v7 = a2; /*0x69a4e5*/
      v6 = (unsigned __int8 *)a3; /*0x69a4f9*/
      v8 = HashTableSection::FindSection((int *)a2, (unsigned __int8 *)a3, g_INI_Key_DescriptionText) != 0; /*0x69a502*/
    }
    else
    {
      v6 = (unsigned __int8 *)a3; /*0x69a4c1*/
      v7 = a2; /*0x69a4c8*/
      v8 = INIClass::BinarySearchSection((int)a2, (unsigned __int8 *)a3) != 0; /*0x69a4d9*/
    }
    if ( v8 ) /*0x69a509*/
    {
      INIClass::GetString((INIClass *)v7, v6, g_INI_Key_DescriptionText, &g_INI_DefaultBuffer, (char *)&v24.?, 44); /*0x69a51d*/
      BulkCharToWide(this, (unsigned __int8 *)&v24.?, -1); /*0x69a52a*/
    }
    else
    {
      INIClass::GetStringEx((int)v7, v6, (unsigned __int8 *)&stru_81AF8C.?[5], (wchar_t *)this, 0x2Cu); /*0x69a53a*/
    }
    Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)v7, v6, aMinplayers, this->q018); /*0x69a54e*/
    v10 = *((_DWORD *)this + 97); /*0x69a553*/
    this->q018 = Int_Overwrite; /*0x69a559*/
    *((_DWORD *)this + 97) = INIClass::ReadInt_Overwrite((bool *)v7, v6, aMaxplayers, v10); /*0x69a587*/
    if ( INIClass::GetString( /*0x69a58d*/
           (INIClass *)v7,
           v6,
           (unsigned __int8 *)&stru_81AF8C.?[1],
           &g_INI_DefaultBuffer,
           String,
           128) )
    {
      v11 = strtok(String, Str); /*0x69a5a3*/
      while ( v11 ) /*0x69a5ad*/
      {
        if ( !*v11 ) /*0x69a5af*/
          break; /*0x69a5b2*/
        v12 = (void *)atoi(v11); /*0x69a5b5*/
        MapFile_field_0x10 = v4->MapFile_field_0x10; /*0x69a5ba*/
        v24.AbstractClass = v12; /*0x69a5bd*/
        MapFile_field_0x08 = v4->MapFile_field_0x08; /*0x69a5c1*/
        if ( MapFile_field_0x10 >= MapFile_field_0x08 ) /*0x69a5c9*/
        {
          if ( !BYTE1(v4->MapFile_field_0x0C) && MapFile_field_0x08 ) /*0x69a5d4*/
            continue; /*0x69a5d4*/
          MapFile_field_0x14 = v4->MapFile_field_0x14; /*0x69a5d6*/
          if ( MapFile_field_0x14 <= 0 /*0x69a5e7*/
            || !(*(unsigned __int8 (__thiscall **)(MapFile *, int, _DWORD))(*(_DWORD *)v4->__pad_0 + 8))(
                  v4,
                  MapFile_field_0x08 + MapFile_field_0x14,
                  0) )
          {
            continue; /*0x69a5e7*/
          }
        }
        v16 = v4->MapFile_field_0x10; /*0x69a5ee*/
        MapFile_field_0x04 = v4->MapFile_field_0x04; /*0x69a5f1*/
        v4->MapFile_field_0x10 = v16 + 1; /*0x69a5f7*/
        *(_DWORD *)(MapFile_field_0x04 + 4 * v16) = v24.AbstractClass; /*0x69a5fe*/
        v11 = strtok(0, Str); /*0x69a608*/
      }
    }
    unknown_libname_73(&v24.?); /*0x69a618*/
    String::Assign((String *)&v24, &g_INI_DefaultBuffer); /*0x69a626*/
    String::Assign((String *)&v24.?, g_INI_Key_GameMode); /*0x69a634*/
    String::Assign((String *)&v24.?, (const char *)v6); /*0x69a63e*/
    HIBYTE(v24.?) = INIClass::ReadString((INIClass *)v7, (char **)&v24.?, (char **)&v24.?, (char **)&v24, (int)&v24.?) > 0; /*0x69a664*/
    DeleteAndZero((ObjectClass *)&v24.?); /*0x69a669*/
    DeleteAndZero((ObjectClass *)&v24.?); /*0x69a672*/
    DeleteAndZero(&v24); /*0x69a67b*/
    if ( HIBYTE(v24.?) ) /*0x69a686*/
    {
      unknown_libname_73(&v24.?); /*0x69a690*/
      for ( i = String::Tokenize((String *)&v24.?, 0, Str, &v24.?); /*0x69a6b0*/
            i != -1;
            i = String::Tokenize((String *)&v24.?, i, Str, &v24.?) )
      {
        String::Assign((String *)&v24, asc_830A14); /*0x69a6bf*/
        String::TrimLeft((String *)&v24.?, (const char **)&v24); /*0x69a6cd*/
        DeleteAndZero(&v24); /*0x69a6d6*/
        String::Assign((String *)&v24.?, asc_830A14); /*0x69a6e4*/
        String::TrimRight((String *)&v24.?, (const char **)&v24.?); /*0x69a6f2*/
        DeleteAndZero((ObjectClass *)&v24.?); /*0x69a6fb*/
        v19 = *((_DWORD *)this + 107); /*0x69a700*/
        if ( *((_DWORD *)this + 109) >= v19 ) /*0x69a714*/
        {
          if ( !*((_BYTE *)this + 433) && v19 ) /*0x69a71f*/
            continue; /*0x69a71f*/
          v20 = *((_DWORD *)this + 110); /*0x69a721*/
          if ( v20 <= 0 /*0x69a730*/
            || !(*(unsigned __int8 (__thiscall **)(MapFile *, int, _DWORD))(*((_DWORD *)this + 105) + 8))(
                  this + 15,
                  v19 + v20,
                  0) )
          {
            continue; /*0x69a730*/
          }
        }
        v21 = *((_DWORD *)this + 109); /*0x69a737*/
        *((_DWORD *)this + 109) = v21 + 1; /*0x69a742*/
        String::Reassign((String *)(*((_DWORD *)this + 106) + 4 * v21), (const char **)&v24.?); /*0x69a74b*/
      }
      DeleteAndZero((ObjectClass *)&v24.?); /*0x69a773*/
    }
    CCFileClass::Construct((CCFileClass *)&v24.ambientSoundController[1], (char *)this + 88); /*0x69a784*/
    if ( (unsigned __int8)CCFileClass::Open((CCFileClass *)&v24.ambientSoundController[1], 0) ) /*0x69a78e*/
    {
      if ( FileClass::Load((CCFileClass *)&v24.ambientSoundController[1], (const CHAR *)1) ) /*0x69a7b0*/
      {
        BufferIOFileClass::Seek((CCFileClass *)&v24.ambientSoundController[1], -100, 2u); /*0x69a7c5*/
        memset(Source, 0, sizeof(Source)); /*0x69a7da*/
        CCFileClass::Read((CCFileClass *)&v24.ambientSoundController[1], Source, 100); /*0x69a7e8*/
        CCFileClass::Reset((CCFileClass *)&v24.ambientSoundController[1]); /*0x69a7f1*/
        if ( strstr(Source, aDigest_0) ) /*0x69a803*/
        {
          v25.headNode[0] = 0; /*0x69a81a*/
          v25.headNode[1] = 0; /*0x69a821*/
          GenericList::Constructor((GenericList *)&v25.headNode[2]); /*0x69a828*/
          v25.headNode[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x69a834*/
          Node::Init((Node *)&v25.__pad_20[8]); /*0x69a83f*/
          v25.INIClass_field_3C = 0; /*0x69a852*/
          v26 = 0; /*0x69a859*/
          *(_DWORD *)v25.__pad_0 = &CCINIClass_Vtable; /*0x69a861*/
          v24.? = 0; /*0x69a86c*/
          v24.? = 0; /*0x69a870*/
          v24.? = (int)&Straw::`vftable'; /*0x69a874*/
          Buffer::Init((Buffer *)&v24.?, (int)Source, 100); /*0x69a87c*/
          v24.fallRate = 0; /*0x69a88f*/
          v24.? = (int)&BufferStraw::`vftable'; /*0x69a893*/
          CCINIClass::LoadAndVerifyDigest((int *)v25.__pad_0, (int)&v24.?, 0, 0); /*0x69a89b*/
          INIClass::GetString(&v25, (unsigned __int8 *)g_INI_Key_Digest, a1, 0, Source, 128); /*0x69a8bf*/
          if ( &v23 == (int *)-276 ) /*0x69a8cd*/
          {
            strcpy((char *)this + 348, g_Str_No_Digest); /*0x69a90e*/
          }
          else
          {
            strncpy((char *)this + 348, Source, 0x20u); /*0x69a8e0*/
            *((_BYTE *)this + 379) = 0; /*0x69a8e8*/
          }
          Vector::Clear((int)&v24.?); /*0x69a91d*/
          Straw::Dtor((Straw *)&v24.?); /*0x69a926*/
          HashTable::DestroyHashTableINIClass(&v25); /*0x69a932*/
        }
      }
    }
    else
    {
      Debug::Log(); /*0x69a79d*/
    }
    v24.ambientSoundController[1] = (int)&CCFileClass::`vftable'; /*0x69a93e*/
    v24.location[2] = 0; /*0x69a946*/
    Vector::Clear((int)&v24.isInLogic); /*0x69a94d*/
    v24.ambientSoundController[1] = (int)&off_7E1668; /*0x69a956*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v24.ambientSoundController[1]); /*0x69a95e*/
    DeleteAndZero((ObjectClass *)&v24.?); /*0x69a967*/
  }
  return (wchar_t *)this; /*0x69a96c*/
}



// ==== 0x0069A980  SessionClass::ParseGameInfo  this=SessionClass  sig=csp ====
wchar_t *__thiscall SessionClass::ParseGameInfo(
        SessionClass *this,
        char *Source,
        wchar_t *a3,
        char *a4,
        char a5,
        const char *a6,
        int a7,
        int a8)
{
  SessionClass *v8; // esi
  int *p_Side2; // ebx
  int *v10; // ebp
  char *v11; // eax
  wchar_t *StringCSF; // eax
  char v13; // cl
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int i; // edi
  int v21; // ecx
  int v22; // eax
  int v23; // eax

  v8 = this; /*0x69a984*/
  p_Side2 = &this->Side2; /*0x69a989*/
  MapFile::Constructor((MapFile *)&this->Side2, 0, 0); /*0x69a997*/
  v10 = &v8->SkirmishPreferences[6]; /*0x69a99c*/
  p_Side2[5] = 10; /*0x69a9ad*/
  p_Side2[4] = 0; /*0x69a9b0*/
  *p_Side2 = (int)&TypeList<enum DiskID>::`vftable'; /*0x69a9b7*/
  VectorClass::WstringConstructor((VectorClass *)&v8->SkirmishPreferences[6], 0, 0); /*0x69a9bd*/
  v11 = Source; /*0x69a9c2*/
  v8->SkirmishPreferences[6] = (int)&DynamicVectorClass<Wstring>::`vftable'; /*0x69a9c6*/
  v8->SkirmishPreferences[11] = 10; /*0x69a9cf*/
  v8->SkirmishPreferences[10] = 0; /*0x69a9d2*/
  if ( v11 ) /*0x69a9d9*/
  {
    strncpy(&v8->__pad_50[8], v11, 0x104u); /*0x69a9e5*/
    v8->__pad_50[267] = 0; /*0x69a9ed*/
  }
  else
  {
    strcpy(&v8->__pad_50[8], aNoFileName); /*0x69aa12*/
    v8 = this; /*0x69aa1b*/
  }
  if ( a3 ) /*0x69aa25*/
  {
    wcsncpy((wchar_t *)v8, a3, 0x2Cu); /*0x69aa2b*/
    *(_WORD *)&v8->__pad_50[6] = 0; /*0x69aa33*/
  }
  else
  {
    StringCSF = GetStringCSF(g_Str_MSG_NoDescription, 0, g_Str_File_Session_CPP, 2845); /*0x69aa4c*/
    wcscpy((wchar_t *)v8, StringCSF); /*0x69aa53*/
  }
  if ( a4 ) /*0x69aa61*/
  {
    strncpy(&v8->__pad_50[268], a4, 0x20u); /*0x69aa6d*/
    HIBYTE(v8->idxSide2) = 0; /*0x69aa75*/
  }
  else
  {
    strcpy(&v8->__pad_50[268], g_Str_No_Digest); /*0x69aa9d*/
    v8 = this; /*0x69aaa6*/
  }
  v13 = a5; /*0x69aaae*/
  v14 = a8; /*0x69aab2*/
  v8->Color2 = a7; /*0x69aab6*/
  v15 = *p_Side2; /*0x69aabc*/
  LOBYTE(v8->Color) = v13; /*0x69aabe*/
  v8->Side = v14; /*0x69aac6*/
  (*(void (__thiscall **)(int *))(v15 + 12))(p_Side2); /*0x69aacc*/
  v16 = p_Side2[2]; /*0x69aacf*/
  if ( p_Side2[4] < v16 /*0x69aaf4*/
    || (*((_BYTE *)p_Side2 + 13) || !v16)
    && (v17 = p_Side2[5], v17 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*p_Side2 + 8))(p_Side2, v16 + v17, 0) )
  {
    v18 = p_Side2[4]; /*0x69aafb*/
    v19 = p_Side2[1]; /*0x69aafe*/
    p_Side2[4] = v18 + 1; /*0x69ab04*/
    *(_DWORD *)(v19 + 4 * v18) = -2; /*0x69ab07*/
  }
  if ( a6 ) /*0x69ab14*/
  {
    String::Assign((String *)&Source, a6); /*0x69ab1f*/
    if ( String::Length((String *)&Source) ) /*0x69ab28*/
    {
      unknown_libname_73(&a5); /*0x69ab39*/
      for ( i = String::Tokenize((String *)&Source, 0, Str, (void **)&a5); /*0x69ab58*/
            i != -1;
            i = String::Tokenize((String *)&Source, i, Str, (void **)&a5) )
      {
        String::Assign((String *)&a3, asc_830A14); /*0x69ab67*/
        String::TrimLeft((String *)&a5, (const char **)&a3); /*0x69ab75*/
        DeleteAndZero((ObjectClass *)&a3); /*0x69ab7e*/
        String::Assign((String *)&a4, asc_830A14); /*0x69ab8c*/
        String::TrimRight((String *)&a5, (const char **)&a4); /*0x69ab9a*/
        DeleteAndZero((ObjectClass *)&a4); /*0x69aba3*/
        v21 = v10[2]; /*0x69aba8*/
        if ( v10[4] >= v21 ) /*0x69abb0*/
        {
          if ( !*((_BYTE *)v10 + 13) && v21 ) /*0x69abbb*/
            continue; /*0x69abbb*/
          v22 = v10[5]; /*0x69abbd*/
          if ( v22 <= 0 || !(*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v10 + 8))(v10, v21 + v22, 0) ) /*0x69abce*/
            continue; /*0x69abce*/
        }
        v23 = v10[4]; /*0x69abd5*/
        v10[4] = v23 + 1; /*0x69abe0*/
        String::Reassign((String *)(v10[1] + 4 * v23), (const char **)&a5); /*0x69abe9*/
      }
      DeleteAndZero((ObjectClass *)&a5); /*0x69ac11*/
    }
    DeleteAndZero((ObjectClass *)&Source); /*0x69ac1a*/
  }
  return (wchar_t *)v8; /*0x69ac21*/
}



// ==== 0x0069AC30  ScenarioClass::CheckExists  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::CheckExists(ScenarioClass *this, int a2)
{
  _DWORD *v2; // eax
  char v3; // bl
  int result; // eax
  int v5; // edx
  _DWORD *v6; // esi
  int v7; // edx
  _DWORD *v8; // ecx
  RawFileClass v9; // [esp+Ch] [ebp-24h] BYREF

  if ( a2 == -2 ) /*0x69ac3d*/
  {
    v2 = RawFileClass::Construct(&v9, (int)&this->nextScenario[22]); /*0x69ac47*/
    v3 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 20))(v2, 0); /*0x69ac59*/
    result = RawFileClass::Dtor(&v9); /*0x69ac5b*/
    LOBYTE(result) = v3; /*0x69ac61*/
    return result; /*0x69ac68*/
  }
  v5 = this->altNextScenario[37]; /*0x69ac6b*/
  result = 0; /*0x69ac71*/
  if ( v5 <= 0 ) /*0x69ac75*/
  {
LABEL_7:
    v7 = this->altNextScenario[37]; /*0x69ac8a*/
    result = 0; /*0x69ac90*/
    if ( v7 <= 0 ) /*0x69ac94*/
    {
LABEL_11:
      LOBYTE(result) = 0; /*0x69aca8*/
      return result; /*0x69acb0*/
    }
    v8 = (_DWORD *)this->altNextScenario[34]; /*0x69ac96*/
    while ( *v8 != a2 ) /*0x69ac9e*/
    {
      ++result; /*0x69aca0*/
      ++v8; /*0x69aca1*/
      if ( result >= v7 ) /*0x69aca6*/
        goto LABEL_11; /*0x69aca6*/
    }
  }
  else
  {
    v6 = (_DWORD *)this->altNextScenario[34]; /*0x69ac77*/
    while ( *v6 != -1 ) /*0x69ac80*/
    {
      ++result; /*0x69ac82*/
      ++v6; /*0x69ac83*/
      if ( result >= v5 ) /*0x69ac88*/
        goto LABEL_7; /*0x69ac88*/
    }
  }
  LOBYTE(result) = 1; /*0x69acb5*/
  return result; /*0x69ac60*/
}



// ==== 0x0069ACC0  GameOption::GetField  this=ScenarioClass  sig=csp ====
int __thiscall GameOption::GetField(GameOption *this)
{
  return *(_DWORD *)this->field_18C; /*0x69acc8*/
}



// ==== 0x0069ACD0  GameOption::SetDescriptionWStr  this=GameOption  sig=csp ====
wchar_t *__thiscall GameOption::SetDescriptionWStr(GameOption *this, wchar_t *Source)
{
  wchar_t *result; // eax
  wchar_t *StringCSF; // eax

  if ( Source ) /*0x69acd9*/
  {
    result = wcsncpy((wchar_t *)this, Source, 0x2Cu); /*0x69acdf*/
    *(_WORD *)&this->__pad_0[86] = 0; /*0x69ace7*/
  }
  else
  {
    StringCSF = GetStringCSF(g_Str_MSG_NoDescription, 0, g_Str_File_Session_CPP, 2845); /*0x69ad02*/
    return wcscpy((wchar_t *)this, StringCSF); /*0x69ad09*/
  }
  return result; /*0x69aced*/
}



// ==== 0x0069AD80  GameOption::SetDigest  this=GameOption  sig=csp ====
char *__thiscall GameOption::SetDigest(char *this, char *Source)
{
  char *result; // eax

  if ( Source ) /*0x69ad89*/
  {
    result = strncpy(this + 348, Source, 0x20u); /*0x69ad95*/
    this->q17B = 0; /*0x69ad9d*/
  }
  else
  {
    result = (char *)(strlen(g_Str_No_Digest) + 1); /*0x69adb3*/
    qmemcpy(this + 348, g_Str_No_Digest, (unsigned int)result); /*0x69adc8*/
  }
  return result; /*0x69ada4*/
}



// ==== 0x0069ADE0  ObjectClass::method_69ADE0  this=ObjectClass  sig=csp ====
char __thiscall sub_69ADE0(_BYTE *this, char a2)
{
  *(this + 380) = a2; /*0x69ade4*/
  return a2; /*0x69adea*/
}



// ==== 0x0069ADF0  IsRandMap::Sed  this=IsRandMap  sig=csp ====
int __thiscall IsRandMap::Sed(int this)
{
  return _strcmpi((const void *)(this + 88), aRandmapSed) == 0; /*0x69ae06*/
}



// ==== 0x0069AE10  GameClass::initPlayerData  this=GameClass  sig=csp ====
bool __thiscall GameClass::initPlayerData(GameClass *this, const char **a2)
{
  int v3; // eax
  int v5; // esi

  v3 = *(_DWORD *)&this->__pad_3D[375]; /*0x69ae15*/
  if ( !v3 ) /*0x69ae1d*/
    return String::Equals_Alt((String *)a2, aStandard_0); /*0x69ae28*/
  v5 = 0; /*0x69ae33*/
  if ( v3 <= 0 ) /*0x69ae37*/
    return 0; /*0x69ae5d*/
  while ( !(unsigned __int8)String::Compare((String *)a2, (const char **)(*(_DWORD *)&this->__pad_3D[363] + 4 * v5)) ) /*0x69ae50*/
  {
    if ( ++v5 >= *(_DWORD *)&this->__pad_3D[375] ) /*0x69ae5b*/
      return 0; /*0x69ae5b*/
  }
  return 1; /*0x69ae2d*/
}



// ==== 0x0069AE70  IsRandMap::Sed2  this=IsRandMap  sig=csp ====
int __thiscall IsRandMap::Sed2(IsRandMap *this)
{
  return _strcmpi((char *)this + 1704, &stru_82BA00.?) == 0; /*0x69ae89*/
}



// ==== 0x0069AE90  Multiplayer::ShowProgress  this=Multiplayer  sig=csp ====
int __thiscall Multiplayer::ShowProgress(Multiplayer *this, int a2)
{
  int result; // eax
  double v3; // st7
  int v5; // eax
  int i; // esi
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int Ticks; // [esp+8h] [ebp-1DCh]
  int v14; // [esp+14h] [ebp-1D0h]
  double v15; // [esp+14h] [ebp-1D0h]
  int v16[113]; // [esp+1Ch] [ebp-1C8h] BYREF
  __int16 v17; // [esp+1E0h] [ebp-4h]
  char v18; // [esp+1E2h] [ebp-2h]

  LOBYTE(result) = stru_A8EB00.?[391]; /*0x69ae90*/
  if ( !stru_A8EB00.?[391] ) /*0x69aea1*/
  {
    v14 = a2; /*0x69aeb4*/
    if ( BYTE1(dword_A8B230[375].vtable0) ) /*0x69aeb8*/
      v14 = a2 / 2; /*0x69aec7*/
    __asm { fild dword ptr [esp+1E4h+var_1D0] } /*0x69aecb*/
    __asm { fstp [esp+1E8h+var_1D0] }
    result = Progress::GetWeighted((int)&stru_AC4B30.__pad_EC[828], 0); /*0x69aeda*/
    __asm { fmul ds:dbl_7E2AC0 } /*0x69aedf*/
    __asm
    {
      fcomp [esp+1E4h+var_1D0]
      fnstsw ax
    }
    if ( (result & 0x100) != 0 ) /*0x69aef1*/
      result = Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, v15, NAN); /*0x69af0a*/
    if ( this->qA13 != 1 ) /*0x69af16*/
    {
      Ticks = Timer::GetTicks(); /*0x69af26*/
      switch ( *(_DWORD *)this ) /*0x69af3e*/
      {
        case 1: /*0x69af3e*/
        case 2: /*0x69af3e*/
          memset(v16, 0, 250); /*0x69b099*/
          v16[0] = 108; /*0x69b0a2*/
          Progress::GetWeighted((int)&stru_AC4B30.__pad_EC[828], 0); /*0x69b0aa*/
          __asm { fmul ds:dbl_7E2AC0 } /*0x69b0af*/
          LOWORD(v10) = Math::RoundToInt(v3); /*0x69b0b5*/
          *(int *)((char *)&v16[6] + 1) = v10; /*0x69b0c0*/
          LOBYTE(v16[6]) = dword_A8DB30; /*0x69b0d5*/
          Stream::WriteBlock((int *)&unk_A8EA70, (int)v16, 250, 0); /*0x69b0d9*/
          Stream::ReadPacket((int)&unk_A8EA70); /*0x69b0e3*/
          while ( Count::GetCountQueue((Count *)&unk_A8EA70) > 5 ) /*0x69b0f5*/
          {
            v11 = 240; /*0x69b101*/
            if ( Ticks != -1 ) /*0x69b107*/
            {
              v12 = Timer::GetTicks() - Ticks; /*0x69b112*/
              if ( v12 >= 240 ) /*0x69b118*/
                return Event::Dispatch(); /*0x69b118*/
              v11 = 240 - v12; /*0x69b11a*/
            }
            if ( v11 <= 0 ) /*0x69b11e*/
              break; /*0x69b11e*/
            Sleep(0x14u); /*0x69b122*/
            EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x69b12a*/
            Stream::ReadPacket((int)&unk_A8EA70); /*0x69b134*/
          }
          break; /*0x69b146*/
        case 3: /*0x69af3e*/
        case 4: /*0x69af3e*/
          memset(v16, 0, sizeof(v16)); /*0x69af52*/
          v17 = 0; /*0x69af54*/
          v18 = 0; /*0x69af56*/
          v16[0] = 15; /*0x69af5c*/
          Progress::GetWeighted((int)&stru_AC4B30.__pad_EC[828], 0); /*0x69af64*/
          __asm { fmul ds:dbl_7E2AC0 } /*0x69af69*/
          LOWORD(v5) = Math::RoundToInt(v3); /*0x69af6f*/
          *(int *)((char *)&v16[11] + 3) = v5; /*0x69af7a*/
          strcpy((char *)&v16[1], ToWideStringChar((char *)*dword_A8DA78)); /*0x69af9e*/
          __asm /*0x69afa7*/
          {
            fild [esp+1E8h+var_199]
            fcomp ds:dbl_7F12F0
            fnstsw ax
          }
          if ( (_AX & 0x100) != 0 ) /*0x69afb6*/
          {
            Network::SendMessage(&unk_A8E9C0.Socket, (int)v16, 51, 0, 0, 0, 0); /*0x69afcc*/
          }
          else
          {
            for ( i = 1; i < dword_A8DA84; ++i ) /*0x69afdf*/
            {
              Debug::Log(); /*0x69afe6*/
              Network::SendToPlayer((int)&unk_A8E9C0, (int)v16, 51, 1, (wchar_t *)dword_A8DA78[i]); /*0x69b006*/
            }
          }
          Event::Dispatch(); /*0x69b015*/
          while ( Network::GetQueueCount(&unk_A8E9C0) > 5 ) /*0x69b027*/
          {
            v8 = 240; /*0x69b037*/
            if ( Ticks != -1 ) /*0x69b03d*/
            {
              v9 = Timer::GetTicks() - Ticks; /*0x69b048*/
              if ( v9 >= 240 ) /*0x69b04e*/
                return Event::Dispatch(); /*0x69b04e*/
              v8 = 240 - v9; /*0x69b054*/
            }
            if ( v8 <= 0 ) /*0x69b058*/
              break; /*0x69b058*/
            Sleep(0x14u); /*0x69b060*/
            MessageLoop(); /*0x69b062*/
            Event::Dispatch(); /*0x69b067*/
          }
          break; /*0x69b079*/
        default:
          return Event::Dispatch();
      }
      return Event::Dispatch(); /*0x69b148*/
    }
  }
  return result; /*0x69b081*/
}



// ==== 0x0069B170  ObjectClass::ParseAndApplyAlliances  this=ObjectClass  sig=csp ====
void __thiscall ParseAndApplyAlliances(ObjectClass *this)
{
  bool v1; // zf
  void *vtable0; // edx
  const char *v3; // edi
  char *v4; // ebx
  char *i; // ebp
  int j; // edi
  int v7; // esi
  int v8; // eax
  char *k; // ebp
  int m; // edi
  int v11; // esi
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // ebp
  _DWORD *Items; // ecx
  int v17; // esi
  int v18; // edi
  int v19; // eax
  int v20; // edx
  int v21; // eax
  int v22; // ebp
  _DWORD *v23; // ecx
  int v24; // esi
  int v25; // edi
  int v26; // eax
  void *v27; // edx
  char *v28; // [esp+10h] [ebp-38h]
  VectorClass v30; // [esp+18h] [ebp-30h] BYREF
  int v31; // [esp+28h] [ebp-20h]
  int v32; // [esp+2Ch] [ebp-1Ch]
  VectorClass v33; // [esp+30h] [ebp-18h] BYREF
  int v34; // [esp+40h] [ebp-8h]
  int v35; // [esp+44h] [ebp-4h]

  v1 = this->AbstractClass == (void *)4; /*0x69b176*/
  *((_BYTE *)this + 1672) = 0; /*0x69b17d*/
  if ( v1 ) /*0x69b184*/
  {
    vtable0 = dword_A8B230->vtable0; /*0x69b199*/
    BYTE1(vtable0) = ((unsigned __int16)dword_A8B230->vtable0 >> 8) & 0xFB; /*0x69b19b*/
    dword_A8B230->vtable0 = vtable0; /*0x69b19e*/
    Debug::Log(); /*0x69b1a0*/
    Debug::Log(); /*0x69b1af*/
    if ( strlen(&byte_B77A04) ) /*0x69b1b9*/
    {
      if ( strlen(byte_B76568) ) /*0x69b1d1*/
      {
        ParseAndApplyAlliances_Parse(&v33, 0, 0); /*0x69b1ea*/
        v33.vtable0 = &DynamicVectorClass<HouseClass *>::`vftable'; /*0x69b1ff*/
        v35 = 10; /*0x69b203*/
        v34 = 0; /*0x69b207*/
        ParseAndApplyAlliances_Parse(&v30, 0, 0); /*0x69b20b*/
        v30.vtable0 = &DynamicVectorClass<HouseClass *>::`vftable'; /*0x69b210*/
        v32 = 10; /*0x69b232*/
        v31 = 0; /*0x69b238*/
        v3 = &byte_B77A04; /*0x69b23c*/
        if ( strlen(&byte_B77A04) <= strlen(byte_B76568) ) /*0x69b241*/
          v3 = byte_B76568; /*0x69b243*/
        v4 = (char *)__2_YAPAXI_Z(strlen(v3) + 32); /*0x69b25b*/
        strcpy(v4, &byte_B77A04); /*0x69b27c*/
        v28 = v4; /*0x69b280*/
        for ( i = strtok(v4, Str); i; i = strtok(0, Str) ) /*0x69b295*/
        {
          if ( !*i ) /*0x69b29b*/
            break; /*0x69b29f*/
          for ( j = 0; j < stru_A80220.?; ++j ) /*0x69b2ae*/
          {
            v7 = *((_DWORD *)stru_A80220.? + j); /*0x69b2b6*/
            if ( *(_BYTE *)(v7 + 492) /*0x69b304*/
              && !_strcmpi((char *)(v7 + 90100), i)
              && (v34 < v33.Capacity
               || (v33.IsAllocated || !v33.Capacity)
               && v35 > 0
               && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v33.vtable0 + 2))(
                    &v33,
                    v35 + v33.Capacity,
                    0)) )
            {
              v8 = v34++; /*0x69b30f*/
              *((_DWORD *)v33.Items + v8) = v7; /*0x69b31a*/
            }
          }
        }
        strcpy(v4, byte_B76568); /*0x69b35f*/
        for ( k = strtok(v4, Str); k; k = strtok(0, Str) ) /*0x69b374*/
        {
          if ( !*k ) /*0x69b37a*/
            break; /*0x69b37e*/
          for ( m = 0; m < stru_A80220.?; ++m ) /*0x69b38d*/
          {
            v11 = *((_DWORD *)stru_A80220.? + m); /*0x69b394*/
            if ( *(_BYTE *)(v11 + 492) /*0x69b3e2*/
              && !_strcmpi((char *)(v11 + 90100), k)
              && (v31 < v30.Capacity
               || (v30.IsAllocated || !v30.Capacity)
               && v32 > 0
               && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v30.vtable0 + 2))(
                    &v30,
                    v32 + v30.Capacity,
                    0)) )
            {
              v12 = v31++; /*0x69b3ed*/
              *((_DWORD *)v30.Items + v12) = v11; /*0x69b3f8*/
            }
          }
        }
        v13 = v34; /*0x69b41e*/
        v14 = v34; /*0x69b422*/
        if ( v34 > 1 ) /*0x69b427*/
        {
          v15 = 0; /*0x69b429*/
          Items = v33.Items; /*0x69b42f*/
          v17 = 0; /*0x69b433*/
          do /*0x69b46d*/
          {
            v18 = 0; /*0x69b435*/
            if ( v14 > 0 ) /*0x69b439*/
            {
              do /*0x69b45f*/
              {
                v19 = Items[v18]; /*0x69b43e*/
                if ( *(_DWORD *)(Items[v17] + 48) != *(_DWORD *)(v19 + 48) ) /*0x69b447*/
                {
                  HouseClass::HandleAlliance((int *)Items[v17], v19, 0); /*0x69b44f*/
                  v13 = v34; /*0x69b454*/
                  Items = v33.Items; /*0x69b458*/
                }
                ++v18; /*0x69b45c*/
              }
              while ( v18 < v13 ); /*0x69b45f*/
              v4 = v28; /*0x69b461*/
            }
            ++v15; /*0x69b465*/
            v14 = v13; /*0x69b466*/
            ++v17; /*0x69b468*/
          }
          while ( v15 < v13 ); /*0x69b46d*/
        }
        v20 = v31; /*0x69b46f*/
        v21 = v31; /*0x69b473*/
        if ( v31 > 1 ) /*0x69b478*/
        {
          v22 = 0; /*0x69b47a*/
          v23 = v30.Items; /*0x69b480*/
          v24 = 0; /*0x69b484*/
          do /*0x69b4be*/
          {
            v25 = 0; /*0x69b486*/
            if ( v21 > 0 ) /*0x69b48a*/
            {
              do /*0x69b4b0*/
              {
                v26 = v23[v25]; /*0x69b48f*/
                if ( *(_DWORD *)(v23[v24] + 48) != *(_DWORD *)(v26 + 48) ) /*0x69b498*/
                {
                  HouseClass::HandleAlliance((int *)v23[v24], v26, 0); /*0x69b4a0*/
                  v20 = v31; /*0x69b4a5*/
                  v23 = v30.Items; /*0x69b4a9*/
                }
                ++v25; /*0x69b4ad*/
              }
              while ( v25 < v20 ); /*0x69b4b0*/
              v4 = v28; /*0x69b4b2*/
            }
            ++v22; /*0x69b4b6*/
            v21 = v20; /*0x69b4b7*/
            ++v24; /*0x69b4b9*/
          }
          while ( v22 < v20 ); /*0x69b4be*/
        }
        __3_YAXPAX_Z(v4); /*0x69b4c1*/
        *((_BYTE *)this + 1672) = 1; /*0x69b4d4*/
        v27 = dword_A8B230->vtable0; /*0x69b4e0*/
        BYTE1(v27) = ((unsigned __int16)dword_A8B230->vtable0 >> 8) | 4; /*0x69b4e2*/
        dword_A8B230->vtable0 = v27; /*0x69b4e5*/
        v30.vtable0 = &VectorClass<HouseClass *>::`vftable'; /*0x69b4ed*/
        if ( v30.Items && v30.IsAllocated ) /*0x69b4f9*/
        {
          __3_YAXPAX_Z(v30.Items); /*0x69b4fc*/
          v30.Items = 0; /*0x69b504*/
        }
        v33.vtable0 = &VectorClass<HouseClass *>::`vftable'; /*0x69b50c*/
        v30.IsAllocated = 0; /*0x69b514*/
        v30.Capacity = 0; /*0x69b519*/
        if ( v33.Items ) /*0x69b51e*/
        {
          if ( v33.IsAllocated ) /*0x69b526*/
            __3_YAXPAX_Z(v33.Items); /*0x69b529*/
        }
      }
    }
  }
}



// ==== 0x0069B540  Network::processGameEvent  this=Network  sig=csp ====
_DWORD *__thiscall Network::processGameEvent(Network *this)
{
  _DWORD *result; // eax
  int v2; // ecx

  *(_DWORD *)&this->Network_field_0x22[2] = 0; /*0x69b540*/
  result = &this->__pad_64[8]; /*0x69b547*/
  v2 = 8; /*0x69b54a*/
  do /*0x69b55b*/
  {
    *(result - 8) = -1; /*0x69b552*/
    *result++ = -1; /*0x69b555*/
    --v2; /*0x69b55a*/
  }
  while ( v2 ); /*0x69b55b*/
  return result; /*0x69b55d*/
}



// ==== 0x0069B560  SaveGame::SaveAudioData  this=SaveGame  sig=csp ====
bool __thiscall SaveGame::SaveAudioData(SaveGame *this, int a2)
{
  int v2; // esi
  int v4; // eax
  bool result; // al
  int v6; // [esp-Ch] [ebp-18h]

  v2 = a2; /*0x69b561*/
  result = 0; /*0x69b59a*/
  if ( a2 ) /*0x69b56a*/
  {
    v4 = *(_DWORD *)a2; /*0x69b56c*/
    v6 = a2; /*0x69b577*/
    a2 = 300; /*0x69b578*/
    if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(v4 + 16))(v6, &a2, 4, 0) >= 0 /*0x69b597*/
      && (*(int (__stdcall **)(int, SaveGame *, int, _DWORD))(*(_DWORD *)v2 + 16))(v2, this, a2, 0) >= 0 )
    {
      return 1; /*0x69b56a*/
    }
  }
  return result; /*0x69b599*/
}



// ==== 0x0069B5B0  LoadGame::LoadBlock300  this=LoadGame  sig=csp ====
bool __thiscall LoadGame::LoadBlock300(LoadGame *this, int a2)
{
  int v2; // esi
  int v4; // eax
  bool result; // al

  v2 = a2; /*0x69b5b1*/
  result = 0; /*0x69b5f3*/
  if ( a2 ) /*0x69b5ba*/
  {
    if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &a2, 4, 0) >= 0 && a2 == 300 ) /*0x69b5d7*/
    {
      v4 = (*(int (__stdcall **)(int, LoadGame *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, this, 300, 0); /*0x69b5e4*/
      this->LoadGame_field_0x04 = -1; /*0x69b5e9*/
      if ( v4 >= 0 ) /*0x69b5f0*/
        return 1; /*0x69b5ba*/
    }
  }
  return result; /*0x69b5f2*/
}



// ==== 0x0069B600  NetworkSession::IsPlayerInGame  this=NetworkSession  sig=csp ====
char __thiscall NetworkSession::IsPlayerInGame(NetworkSession *this, int a2)
{
  int v2; // edi
  int v3; // edx
  int *v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  _DWORD *i; // ecx

  if ( a2 == -2 ) /*0x69b60a*/
    return 0; /*0x69b657*/
  v2 = *((_DWORD *)this + 2579); /*0x69b60c*/
  v3 = 0; /*0x69b612*/
  if ( v2 <= 0 ) /*0x69b616*/
  {
LABEL_10:
    v7 = 0; /*0x69b642*/
    for ( i = (_DWORD *)this + 33; *i != a2; ++i ) /*0x69b644*/
    {
      if ( ++v7 >= 8 ) /*0x69b655*/
        return 0; /*0x69b655*/
    }
  }
  else
  {
    v4 = (int *)*((_DWORD *)this + 2576); /*0x69b618*/
    while ( 1 ) /*0x69b61e*/
    {
      v5 = *v4; /*0x69b61e*/
      if ( *(_DWORD *)(*v4 + 87) == -2 && *(_DWORD *)(v5 + 83) == -1 ) /*0x69b62a*/
        v6 = -2; /*0x69b62c*/
      else
        v6 = *(_DWORD *)(v5 + 83); /*0x69b633*/
      if ( v6 == a2 ) /*0x69b638*/
        break; /*0x69b638*/
      ++v3; /*0x69b63a*/
      ++v4; /*0x69b63b*/
      if ( v3 >= v2 ) /*0x69b640*/
        goto LABEL_10; /*0x69b640*/
    }
  }
  return 1; /*0x69b657*/
}



// ==== 0x0069B690  ObjectClass::method_69B690  this=ObjectClass  sig=csp ====
int __thiscall sub_69B690(ObjectClass *this)
{
  int result; // eax
  int v3; // edi
  int v4; // edx
  int *v5; // esi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  char *i; // edx

  while ( 1 ) /*0x69b6aa*/
  {
    result = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x69b6aa*/
    if ( result == -2 ) /*0x69b6b1*/
      return result; /*0x69b6fa*/
    v3 = *((_DWORD *)this + 2579); /*0x69b6b3*/
    v4 = 0; /*0x69b6b9*/
    if ( v3 <= 0 ) /*0x69b6bd*/
    {
LABEL_10:
      v8 = 0; /*0x69b6e5*/
      for ( i = &this->hasParachute; *(_DWORD *)i != result; i += 4 ) /*0x69b6e7*/
      {
        if ( ++v8 >= 8 ) /*0x69b6f8*/
          return result; /*0x69b6f8*/
      }
    }
    else
    {
      v5 = (int *)*((_DWORD *)this + 2576); /*0x69b6bf*/
      while ( 1 ) /*0x69b6c5*/
      {
        v6 = *v5; /*0x69b6c5*/
        if ( *(_DWORD *)(*v5 + 87) == -2 && *(_DWORD *)(v6 + 83) == -1 ) /*0x69b6d0*/
          v7 = -2; /*0x69b6d2*/
        else
          v7 = *(_DWORD *)(v6 + 83); /*0x69b6d6*/
        if ( v7 == result ) /*0x69b6db*/
          break; /*0x69b6db*/
        ++v4; /*0x69b6dd*/
        ++v5; /*0x69b6de*/
        if ( v4 >= v3 ) /*0x69b6e3*/
          goto LABEL_10; /*0x69b6e3*/
      }
    }
  }
}



// ==== 0x0069B700  Session::GetPlayerOption  this=Session  sig=csp ====
int __thiscall Session::GetPlayerOption(Session *this)
{
  int result; // eax

  result = -2; /*0x69b706*/
  if ( this->field_178 != (void *)-2 ) /*0x69b70d*/
    return (int)this->field_174; /*0x69b70f*/
  return result; /*0x69b715*/
}



// ==== 0x0069B720  Session::GetPlayerColor  this=Session  sig=csp ====
int __thiscall Session::GetPlayerColor(Session *this)
{
  int result; // eax

  result = -2; /*0x69b726*/
  if ( this->field_160 != (void *)-2 ) /*0x69b72d*/
    return (int)this->field_15C; /*0x69b72f*/
  return result; /*0x69b735*/
}



// ==== 0x0069B760  SessionClass::AssignSide  this=SessionClass  sig=csp ====
int __thiscall SessionClass::AssignSide(SessionClass *this, int a2, char a3)
{
  int result; // eax
  int Side2; // edx

  result = a2; /*0x69b760*/
  if ( a2 == -2 ) /*0x69b76a*/
  {
    LOBYTE(result) = a3; /*0x69b76c*/
    if ( a3 ) /*0x69b772*/
    {
      result = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 9); /*0x69b783*/
      this->Side = result; /*0x69b788*/
      this->Side2 = -2; /*0x69b78e*/
    }
    else
    {
      this->Side = 0; /*0x69b79a*/
      this->Side2 = -2; /*0x69b7a4*/
    }
  }
  else
  {
    this->Side = a2; /*0x69b7b0*/
    this->Side2 = -1; /*0x69b7b6*/
  }
  Side2 = this->Side2; /*0x69b7c6*/
  this->idxSide = this->Side; /*0x69b7cc*/
  this->idxSide2 = Side2; /*0x69b7d2*/
  return result; /*0x69b7d8*/
}



// ==== 0x0069B7E0  SessionClass::AssignColor  this=SessionClass  sig=csp ====
int __thiscall SessionClass::AssignColor(SessionClass *this, int a2, char a3)
{
  int result; // eax
  int v5; // edi
  int v6; // edx
  int v7; // esi
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  char *v11; // edx
  int Color2; // edx

  result = a2; /*0x69b7e0*/
  if ( a2 == -2 ) /*0x69b7ef*/
  {
    LOBYTE(result) = a3; /*0x69b7f5*/
    if ( a3 ) /*0x69b7fb*/
    {
      while ( 1 ) /*0x69b80e*/
      {
        result = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x69b80e*/
        if ( result == -2 ) /*0x69b815*/
          break; /*0x69b815*/
        v5 = this->StartSpots[4]; /*0x69b817*/
        v6 = 0; /*0x69b81d*/
        if ( v5 <= 0 ) /*0x69b821*/
        {
LABEL_12:
          v10 = 0; /*0x69b849*/
          v11 = &this->__pad_50[52]; /*0x69b84b*/
          while ( *(_DWORD *)v11 != result ) /*0x69b853*/
          {
            ++v10; /*0x69b855*/
            v11 += 4; /*0x69b856*/
            if ( v10 >= 8 ) /*0x69b85c*/
              goto LABEL_15; /*0x69b85c*/
          }
        }
        else
        {
          v7 = this->StartSpots[1]; /*0x69b823*/
          while ( 1 ) /*0x69b829*/
          {
            v8 = *(_DWORD *)v7; /*0x69b829*/
            if ( *(_DWORD *)(*(_DWORD *)v7 + 87) == -2 && *(_DWORD *)(v8 + 83) == -1 ) /*0x69b834*/
              v9 = -2; /*0x69b836*/
            else
              v9 = *(_DWORD *)(v8 + 83); /*0x69b83a*/
            if ( v9 == result ) /*0x69b83f*/
              break; /*0x69b83f*/
            ++v6; /*0x69b841*/
            v7 += 4; /*0x69b842*/
            if ( v6 >= v5 ) /*0x69b847*/
              goto LABEL_12; /*0x69b847*/
          }
        }
      }
LABEL_15:
      this->Color = result; /*0x69b85e*/
      this->Color2 = -2; /*0x69b866*/
    }
    else
    {
      this->Color = 0; /*0x69b86e*/
      this->Color2 = -2; /*0x69b878*/
    }
  }
  else
  {
    this->Color = a2; /*0x69b880*/
    this->Color2 = -1; /*0x69b886*/
  }
  Color2 = this->Color2; /*0x69b896*/
  *(_DWORD *)&this->__pad_50[268] = this->Color; /*0x69b89c*/
  this->unknown_160[0] = Color2; /*0x69b8a2*/
  return result; /*0x69b8a8*/
}



// ==== 0x0069B8B0  nullsub_229  this=-  sig=csp ====
void __stdcall nullsub_229(int a1, int a2)
{
  ; /*0x69b8b0*/
}



// ==== 0x0069B8C0  Player::RandomAssign  this=Player  sig=csp ====
void __thiscall Player::RandomAssign(Player *this)
{
  int v1; // ebp
  int i; // ebx
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  char *v7; // ebx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  _DWORD *v12; // esi
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v17; // [esp+14h] [ebp-4h]

  Debug::Log(); /*0x69b8d0*/
  v1 = dword_A8DA84; /*0x69b8d5*/
  for ( i = 0; i < v1; ++i ) /*0x69b8e2*/
  {
    v3 = dword_A8DA78[i]; /*0x69b8f2*/
    v4 = *(_DWORD *)(v3 + 79); /*0x69b8f5*/
    if ( v4 == -3 || *(_DWORD *)(v3 + 75) == -3 ) /*0x69b8ff*/
    {
      *(_DWORD *)(v3 + 75) = -3; /*0x69b977*/
      *(_DWORD *)(v3 + 79) = -1; /*0x69b97a*/
      *(_DWORD *)(v3 + 83) = 8; /*0x69b97d*/
      *(_DWORD *)(v3 + 87) = -1; /*0x69b984*/
    }
    else
    {
      if ( v4 == -2 ) /*0x69b904*/
      {
        *(_DWORD *)(v3 + 79) = -1; /*0x69b90d*/
        v5 = this->q004; /*0x69b910*/
        if ( v5 ) /*0x69b915*/
          *(_DWORD *)(v3 + 75) = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 108))(v5); /*0x69b91c*/
        else
          *(_DWORD *)(v3 + 75) = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 9); /*0x69b935*/
      }
      if ( *(_DWORD *)(v3 + 87) == -2 ) /*0x69b941*/
      {
        *(_DWORD *)(v3 + 87) = -1; /*0x69b943*/
        *(_DWORD *)(v3 + 83) = -1; /*0x69b946*/
        do /*0x69b966*/
          v6 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x69b95e*/
        while ( NetworkSession::IsPlayerInGame((NetworkSession *)&dword_A8B238, v6) ); /*0x69b966*/
        *(_DWORD *)(v3 + 83) = v6; /*0x69b96f*/
      }
    }
    if ( !i ) /*0x69b989*/
      dword_A8B394 = *(_DWORD *)(v3 + 83); /*0x69b98e*/
    ToWideStringChar((char *)v3); /*0x69b9b1*/
    Debug::Log(); /*0x69b9bd*/
  }
  v17 = 0; /*0x69b9ce*/
  v7 = &stru_A8B250.__pad_0[76]; /*0x69b9d6*/
  do /*0x69baa0*/
  {
    if ( *(_DWORD *)v7 == -2 ) /*0x69b9e4*/
    {
      v8 = this->q004; /*0x69b9ea*/
      if ( v8 ) /*0x69b9ef*/
        v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 112))(v8); /*0x69b9f3*/
      else
        v9 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 9); /*0x69ba07*/
      *(_DWORD *)v7 = v9; /*0x69ba0c*/
    }
    if ( *((_DWORD *)v7 + 8) == -2 ) /*0x69ba11*/
    {
      while ( 1 ) /*0x69ba23*/
      {
        v10 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x69ba23*/
        if ( v10 == -2 ) /*0x69ba2a*/
          break; /*0x69ba2a*/
        v11 = 0; /*0x69ba32*/
        if ( dword_A8DA84 <= 0 ) /*0x69ba36*/
        {
LABEL_32:
          v15 = 132; /*0x69ba5e*/
          while ( *(_DWORD *)(&dword_A8B238 + v15) != v10 ) /*0x69ba69*/
          {
            v15 += 4; /*0x69ba6b*/
            if ( v15 >= 164 ) /*0x69ba74*/
              goto LABEL_35; /*0x69ba74*/
          }
        }
        else
        {
          v12 = dword_A8DA78; /*0x69ba38*/
          while ( 1 ) /*0x69ba3e*/
          {
            v13 = *v12; /*0x69ba3e*/
            if ( *(_DWORD *)(*v12 + 87) == -2 && *(_DWORD *)(v13 + 83) == -1 ) /*0x69ba49*/
              v14 = -2; /*0x69ba4b*/
            else
              v14 = *(_DWORD *)(v13 + 83); /*0x69ba4f*/
            if ( v14 == v10 ) /*0x69ba54*/
              break; /*0x69ba54*/
            ++v11; /*0x69ba56*/
            ++v12; /*0x69ba57*/
            if ( v11 >= dword_A8DA84 ) /*0x69ba5c*/
              goto LABEL_32; /*0x69ba5c*/
          }
        }
      }
LABEL_35:
      *((_DWORD *)v7 + 8) = v10; /*0x69ba76*/
    }
    Debug::Log(); /*0x69ba8a*/
    v7 += 4; /*0x69ba92*/
    ++v17; /*0x69ba9c*/
  }
  while ( (int)v7 < (int)&stru_A8B250.__pad_0[108] ); /*0x69baa0*/
}



// ==== 0x0069BAB0  WTFMode::Init  this=WTFMode  sig=csp ====
char __thiscall WTFMode_Init(_BYTE *this)
{
  char result; // al

  result = this->q30D8; /*0x69bab0*/
  if ( !result ) /*0x69bab8*/
  {
    result = g_WTFMode; /*0x69babe*/
    if ( g_WTFMode ) /*0x69bac5*/
    {
      this->q30D8 = 1; /*0x69bac7*/
      if ( dword_83ED20 == -1 ) /*0x69bad6*/
        dword_83ED20 = *(_DWORD *)g_GameModeOptions; /*0x69badd*/
      if ( !*(_DWORD *)this ) /*0x69bae2*/
        *(_DWORD *)g_GameModeOptions = 2; /*0x69bae7*/
      if ( !*((_BYTE *)g_ScenarioClass_Instance + 13730) ) /*0x69baf7*/
      {
        Scenario::ClearScreen(); /*0x69bb01*/
        dword_B07784 = (int)g_CurrentFrame + 3; /*0x69bb0f*/
      }
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 28))(g_WWMouseClass_Instance) ) /*0x69bb1d*/
        (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 24))(g_WWMouseClass_Instance); /*0x69bb2c*/
      return EndBufferMixer((int *)g_MixerState, 0x4000); /*0x69bb3a*/
    }
  }
  return result; /*0x69bb3f*/
}



// ==== 0x0069BB40  WTFMode::Shutdown  this=WTFMode  sig=csp ====
int __thiscall WTFMode::Shutdown(_BYTE *this)
{
  int result; // eax

  LOBYTE(result) = this->q30D8; /*0x69bb40*/
  if ( (_BYTE)result ) /*0x69bb48*/
  {
    this->q30D8 = 0; /*0x69bb4e*/
    if ( dword_83ED20 != -1 ) /*0x69bb5d*/
    {
      *(_DWORD *)g_GameModeOptions = dword_83ED20; /*0x69bb5f*/
      dword_83ED20 = -1; /*0x69bb64*/
    }
    nullsub_19(); /*0x69bb6e*/
    AsyncIO::Shutdown(); /*0x69bb73*/
    AudioMixer::Shutdown(); /*0x69bb78*/
    AudioQueue::DrainAll(); /*0x69bb7d*/
    WTFMode_Cleanup(); /*0x69bb82*/
    ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x69bb87*/
    EndBufferMixer((int *)g_MixerState, 0x4000); /*0x69bb97*/
    if ( g_TacticalRender ) /*0x69bba4*/
      Tooltip::Enable(g_TacticalRender, 0); /*0x69bba8*/
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 28))(g_WWMouseClass_Instance) ) /*0x69bbb5*/
      (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 20))(g_WWMouseClass_Instance); /*0x69bbc4*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x69bbcf*/
    dword_B07784 = 0; /*0x69bbd2*/
  }
  return result; /*0x69bbdc*/
}



// ==== 0x0069BBE0  SessionClass::GetGameSpeed  this=SessionClass  sig=csp ====
int __thiscall SessionClass::GetGameSpeed(SessionClass *this)
{
  int result; // eax

  LOBYTE(result) = this->CurrentlyInGame; /*0x69bbe0*/
  return result; /*0x69bbe6*/
}



// ==== 0x0069BBF0  ObjectClass::Network_Disconnect_69BBF0  this=ObjectClass  sig=csp ====
void __thiscall sub_69BBF0(char *this, int a2)
{
  char *v2; // eax
  int v3; // ecx

  if ( a2 < 7 ) /*0x69bbf7*/
  {
    v2 = this + 2 * a2 + 12410; /*0x69bbf9*/
    v3 = 7 - a2; /*0x69bc05*/
    do /*0x69bc12*/
    {
      *(_WORD *)v2 = *((_WORD *)v2 + 1); /*0x69bc0b*/
      v2 += 2; /*0x69bc0e*/
      --v3; /*0x69bc11*/
    }
    while ( v3 ); /*0x69bc12*/
  }
}



// ==== 0x0069BC20  IPXConnClass::closeConnection  this=IPXConnClass  sig=csp ====
__int16 __thiscall IPXConnClass::closeConnection(IPXConnClass *this, int a2)
{
  int v2; // eax
  _DWORD *i; // esi

  v2 = 0; /*0x69bc27*/
  if ( dword_A8DA84 <= 0 ) /*0x69bc2d*/
    return 0; /*0x69bc48*/
  for ( i = dword_A8DA78; *(_DWORD *)(*i + 111) != a2; ++i ) /*0x69bc2f*/
  {
    if ( ++v2 >= dword_A8DA84 ) /*0x69bc46*/
      return 0; /*0x69bc46*/
  }
  return *((_WORD *)this + v2 + 6205); /*0x69bc48*/
}



// ==== 0x0069BC60  GameClass::FindPlayerName  this=GameClass  sig=csp ====
int __stdcall GameClass_FindPlayerName(int a1)
{
  int v1; // ebp
  char **v2; // esi
  char *v3; // edi
  char *v4; // ebx
  char *v5; // eax

  v1 = 0; /*0x69bc64*/
  v2 = (char **)&dword_A8DA90; /*0x69bc66*/
  while ( 1 ) /*0x69bc74*/
  {
    v3 = *v2; /*0x69bc74*/
    v4 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * a1)); /*0x69bc80*/
    v5 = ToWideStringChar(v3); /*0x69bc82*/
    if ( !_strcmpi(v4, v5) ) /*0x69bc89*/
      break; /*0x69bc89*/
    ++v2; /*0x69bc95*/
    ++v1; /*0x69bc98*/
    if ( (int)v2 >= (int)&dword_A8DAB0 ) /*0x69bc9f*/
      return 0; /*0x69bca7*/
  }
  return v1; /*0x69bca1*/
}



// ==== 0x0069BCC0  sub_69BCC0  this=-  sig=csp ====
int __stdcall sub_69BCC0(void *a1)
{
  int v1; // edi
  char **v2; // esi
  char *v3; // eax

  v1 = 0; /*0x69bcc7*/
  v2 = (char **)&dword_A8DA90; /*0x69bcc9*/
  while ( 1 ) /*0x69bcd0*/
  {
    v3 = ToWideStringChar(*v2); /*0x69bcd0*/
    if ( !_strcmpi(a1, v3) ) /*0x69bcd7*/
      break; /*0x69bcd7*/
    ++v2; /*0x69bce3*/
    ++v1; /*0x69bce6*/
    if ( (int)v2 >= (int)&dword_A8DAB0 ) /*0x69bced*/
      return 0; /*0x69bcf4*/
  }
  return v1; /*0x69bcef*/
}



// ==== 0x0069BD00  sub_69BD00  this=-  sig=csp ====
int __stdcall sub_69BD00(int a1)
{
  int v1; // ebx
  char *v2; // esi
  char *v3; // edi
  char *v4; // eax

  v1 = 0; /*0x69bd07*/
  if ( dword_A8DA84 <= 0 ) /*0x69bd0d*/
    return 0; /*0x69bd48*/
  while ( 1 ) /*0x69bd18*/
  {
    v2 = (char *)*(&dword_A8DA90 + a1); /*0x69bd18*/
    v3 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * v1)); /*0x69bd29*/
    v4 = ToWideStringChar(v2); /*0x69bd2b*/
    if ( !_strcmpi(v3, v4) ) /*0x69bd32*/
      break; /*0x69bd32*/
    if ( ++v1 >= dword_A8DA84 ) /*0x69bd46*/
      return 0; /*0x69bd46*/
  }
  return v1; /*0x69bd48*/
}



// ==== 0x0069BD60  SessionClass::SetupNetwork  this=SessionClass  sig=csp ====
void __thiscall SessionClass::SetupNetwork(SessionClass *this)
{
  int v1; // esi
  char **v3; // edi
  char *v4; // ebx
  char *v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // ebx
  int v9; // edx
  int v10; // eax
  int v11; // esi
  int v12; // eax
  _DWORD *v13; // esi
  int v14; // eax
  int v15; // esi
  int i; // eax
  int v17; // ebx
  _DWORD *v18; // edx
  char *v19; // edi
  char **v20; // esi
  char *v21; // eax
  int v22; // edi
  char **v23; // esi
  char *v24; // eax
  char **v25; // ecx
  char *v26; // esi
  char *v27; // eax
  char *v28; // ecx
  char *v29; // esi
  char *v30; // eax
  char *v31; // ecx
  char **v32; // esi
  char *v33; // edi
  char *v34; // ebx
  char *v35; // eax
  void *v36; // eax
  int v37; // ecx
  _WORD *v38; // edx
  __int16 v39; // ax
  _DWORD *v40; // edx
  int v41; // esi
  char *v42; // ebx
  char *v43; // edi
  char *v44; // eax
  NetworkID *v45; // ecx
  bool v46; // zf
  int v47; // eax
  __int16 v48; // [esp-Ch] [ebp-70h]
  int v49; // [esp+8h] [ebp-5Ch]
  int v50; // [esp+8h] [ebp-5Ch]
  int v51; // [esp+8h] [ebp-5Ch]
  int v52; // [esp+Ch] [ebp-58h]
  int v53[2]; // [esp+10h] [ebp-54h] BYREF
  void *v54; // [esp+18h] [ebp-4Ch]
  int v55; // [esp+1Ch] [ebp-48h]
  void *v56; // [esp+20h] [ebp-44h]
  int v57; // [esp+24h] [ebp-40h] BYREF
  int v58; // [esp+2Ch] [ebp-38h]
  int v59; // [esp+30h] [ebp-34h]
  bool v60[4]; // [esp+34h] [ebp-30h] BYREF
  int v61; // [esp+38h] [ebp-2Ch]
  int v62; // [esp+3Ch] [ebp-28h]
  bool v63[4]; // [esp+40h] [ebp-24h] BYREF
  int v64; // [esp+44h] [ebp-20h]
  int v65; // [esp+48h] [ebp-1Ch]
  void **v66; // [esp+4Ch] [ebp-18h] BYREF
  void *Block; // [esp+50h] [ebp-14h]
  int v68; // [esp+54h] [ebp-10h]
  char v69; // [esp+59h] [ebp-Bh]
  int v70; // [esp+5Ch] [ebp-8h]
  int v71; // [esp+60h] [ebp-4h]

  v1 = 0; /*0x69bd65*/
  v55 = 1; /*0x69bd6f*/
  AbstractClass::updateAnimationState((AbstractClass *)&v66, 0, 0); /*0x69bd77*/
  v66 = &DynamicVectorClass<NodeNameType *>::`vftable'; /*0x69bd81*/
  v71 = 10; /*0x69bd89*/
  v70 = 0; /*0x69bd91*/
  Debug::Log(); /*0x69bd95*/
  if ( this->StartSpots[4] < 2 ) /*0x69bda6*/
  {
    v66 = &VectorClass<NodeNameType *>::`vftable'; /*0x69bdac*/
    MPCooperative::updateScoreBoard((int)&v66); /*0x69bdb4*/
    return; /*0x69bdbe*/
  }
  v52 = 0; /*0x69bdce*/
  memset(&this->unknown_2854[373], 0, 0x120u); /*0x69bdd2*/
  LOBYTE(this->unknown_2854[497]) = 1; /*0x69bdd4*/
  if ( this->StartSpots[4] > 0 ) /*0x69bde3*/
  {
    do /*0x69be9c*/
    {
      v53[0] = 0; /*0x69bde9*/
      v3 = (char **)dword_A8DA90; /*0x69bdf1*/
      while ( 1 ) /*0x69bdfb*/
      {
        v4 = *v3; /*0x69bdfb*/
        v54 = ToWideStringChar((char *)dword_A8DA78[v1]); /*0x69be07*/
        v5 = ToWideStringChar(v4); /*0x69be0b*/
        if ( !_strcmpi((char *)v54, v5) ) /*0x69be16*/
          break; /*0x69be16*/
        ++v3; /*0x69be26*/
        ++v53[0]; /*0x69be30*/
        if ( (int)v3 >= (int)&dword_A8DAB0 ) /*0x69be34*/
        {
          v6 = 0; /*0x69be36*/
          goto LABEL_9; /*0x69be38*/
        }
      }
      v6 = v53[0]; /*0x69be3a*/
      if ( v53[0] >= 8u ) /*0x69be40*/
        goto LABEL_10; /*0x69be40*/
LABEL_9:
      Network::SetPort((Network *)(*(_DWORD *)(this->StartSpots[1] + 4 * v1) + 40), this->unknown_2854[v6 + 489]); /*0x69be47*/
      ToWideStringChar(*(char **)(this->StartSpots[1] + 4 * v1)); /*0x69be6a*/
      Network::FormatAddress((Network *)(*(_DWORD *)(this->StartSpots[1] + 4 * v1) + 40), 0); /*0x69be7f*/
      Debug::Log(); /*0x69be8b*/
LABEL_10:
      ++v1; /*0x69be93*/
    }
    while ( v1 < this->StartSpots[4] ); /*0x69be9c*/
  }
  v7 = this->StartSpots[4]; /*0x69bea2*/
  v58 = 0; /*0x69beaa*/
  v59 = 0; /*0x69beb0*/
  v49 = 0; /*0x69beb4*/
  if ( v7 > 0 ) /*0x69beb8*/
  {
    v8 = v68; /*0x69bebe*/
    while ( 1 ) /*0x69bec2*/
    {
      v9 = 0x7FFFFFFF; /*0x69bec2*/
      v10 = 0; /*0x69bec7*/
      v11 = 0x7FFFFFFF; /*0x69becb*/
      if ( v7 <= 0 ) /*0x69becd*/
        break; /*0x69becd*/
      do /*0x69bef2*/
      {
        if ( !*((_BYTE *)&v58 + v10) && *(_DWORD *)(*(_DWORD *)(this->StartSpots[1] + 4 * v10) + 83) < v11 ) /*0x69bee9*/
        {
          v11 = *(_DWORD *)(*(_DWORD *)(this->StartSpots[1] + 4 * v10) + 83); /*0x69beeb*/
          v9 = v10; /*0x69beed*/
        }
        ++v10; /*0x69beef*/
      }
      while ( v10 < v7 ); /*0x69bef2*/
      if ( v9 == 0x7FFFFFFF ) /*0x69befa*/
        break; /*0x69befa*/
      v12 = this->StartSpots[1]; /*0x69befc*/
      *((_BYTE *)&v58 + v9) = 1; /*0x69bf02*/
      v13 = (_DWORD *)(v12 + 4 * v9); /*0x69bf07*/
      if ( v70 < v8 ) /*0x69bf10*/
        goto LABEL_24; /*0x69bf10*/
      if ( !v69 && v8 || v71 <= 0 ) /*0x69bf24*/
        goto LABEL_26; /*0x69bf24*/
      if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v66[2])(&v66, v71 + v8, 0) ) /*0x69bf35*/
      {
LABEL_24:
        v14 = v70++; /*0x69bf44*/
        *((_DWORD *)Block + v14) = *v13; /*0x69bf4d*/
      }
      v8 = v68; /*0x69bf50*/
LABEL_26:
      v7 = this->StartSpots[4]; /*0x69bf54*/
      if ( v70 != v7 && ++v49 < v7 ) /*0x69bf6d*/
        continue; /*0x69bf6d*/
      break; /*0x69bf6d*/
    }
  }
  v15 = 0; /*0x69bf73*/
  v58 = 0; /*0x69bf77*/
  v50 = 0; /*0x69bf7b*/
  v59 = 0; /*0x69bf7f*/
  for ( i = v70; v15 < i; v50 = v15 ) /*0x69bf89*/
  {
    if ( !*((_BYTE *)&v58 + v15) ) /*0x69bf8f*/
    {
      v17 = 0; /*0x69bf9f*/
      v18 = (_DWORD *)(*((_DWORD *)Block + v15) + 40); /*0x69bfa4*/
      *(_DWORD *)v63 = *v18; /*0x69bfab*/
      v64 = v18[1]; /*0x69bfb2*/
      v65 = v18[2]; /*0x69bfb9*/
      if ( i > 0 ) /*0x69bfbd*/
      {
        v53[0] = (int)&this->unknown_2854[9 * v52 + 373]; /*0x69bfd1*/
        do /*0x69c1f5*/
        {
          if ( v17 != v15 /*0x69bff8*/
            && !*((_BYTE *)&v58 + v17)
            && (unsigned __int8)NetworkID::Compare(v63, *((_DWORD *)Block + v17) + 40) )
          {
            v54 = ToWideStringChar(*((char **)Block + v17)); /*0x69c011*/
            v19 = 0; /*0x69c015*/
            v20 = (char **)dword_A8DA90; /*0x69c017*/
            while ( 1 ) /*0x69c01e*/
            {
              v21 = ToWideStringChar(*v20); /*0x69c01e*/
              if ( !_strcmpi((char *)v54, v21) ) /*0x69c029*/
                break; /*0x69c029*/
              ++v20; /*0x69c039*/
              ++v19; /*0x69c03c*/
              if ( (int)v20 >= (int)&dword_A8DAB0 ) /*0x69c043*/
              {
                v54 = 0; /*0x69c045*/
                goto LABEL_39; /*0x69c045*/
              }
            }
            v54 = v19; /*0x69c0f6*/
LABEL_39:
            v56 = ToWideStringChar(*((char **)Block + v50)); /*0x69c04d*/
            v22 = 0; /*0x69c061*/
            v23 = (char **)dword_A8DA90; /*0x69c063*/
            while ( 1 ) /*0x69c06a*/
            {
              v24 = ToWideStringChar(*v23); /*0x69c06a*/
              if ( !_strcmpi((char *)v56, v24) ) /*0x69c075*/
                break; /*0x69c075*/
              ++v23; /*0x69c081*/
              ++v22; /*0x69c084*/
              if ( (int)v23 >= (int)&dword_A8DAB0 ) /*0x69c08b*/
              {
                v22 = 0; /*0x69c08d*/
                break; /*0x69c08d*/
              }
            }
            if ( this->unknown_2854[(_DWORD)v54 + 489] == this->unknown_2854[v22 + 489] ) /*0x69c0a3*/
            {
              v48 = v55++ + LOWORD(this->unknown_2854[(_DWORD)v54 + 489]); /*0x69c0b9*/
              Network::SetPort((Network *)(*((_DWORD *)Block + v17) + 40), v48); /*0x69c0c8*/
              v25 = (char **)Block; /*0x69c0cd*/
              *((_BYTE *)&v58 + v17) = 1; /*0x69c0d1*/
              ToWideStringChar(v25[v17]); /*0x69c0d9*/
            }
            Debug::Log(); /*0x69c0ec*/
            v26 = ToWideStringChar(*((char **)Block + v50)); /*0x69c121*/
            v27 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x69c123*/
            if ( !_strcmpi(v26, v27) ) /*0x69c12a*/
            {
              v56 = (void *)v53[0]; /*0x69c142*/
              v28 = (char *)*((_DWORD *)Block + v17); /*0x69c146*/
              ++v52; /*0x69c14d*/
              v53[0] += 36; /*0x69c151*/
              strcpy((char *)v56, ToWideStringChar(v28)); /*0x69c172*/
            }
            v29 = ToWideStringChar(*((char **)Block + v17)); /*0x69c18c*/
            v30 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x69c18e*/
            if ( !_strcmpi(v29, v30) ) /*0x69c195*/
            {
              v56 = (void *)v53[0]; /*0x69c1b1*/
              v31 = (char *)*((_DWORD *)Block + v50); /*0x69c1b6*/
              ++v52; /*0x69c1bc*/
              v53[0] += 36; /*0x69c1c0*/
              strcpy((char *)v56, ToWideStringChar(v31)); /*0x69c1e1*/
            }
            v15 = v50; /*0x69c1ea*/
          }
          i = v70; /*0x69c1ee*/
          ++v17; /*0x69c1f2*/
        }
        while ( v17 < v70 ); /*0x69c1f5*/
      }
    }
    ++v15; /*0x69c1fb*/
  }
  if ( this->unknown_2854[498] ) /*0x69c208*/
  {
    Debug::Log(); /*0x69c21c*/
    Network::SetPort((Network *)(*(_DWORD *)this->StartSpots[1] + 40), this->unknown_2854[498]); /*0x69c237*/
    v54 = 0; /*0x69c23c*/
    v32 = (char **)dword_A8DA90; /*0x69c244*/
    while ( 1 ) /*0x69c24e*/
    {
      v33 = *v32; /*0x69c24e*/
      v34 = ToWideStringChar((char *)*dword_A8DA78); /*0x69c259*/
      v35 = ToWideStringChar(v33); /*0x69c25b*/
      if ( !_strcmpi(v34, v35) ) /*0x69c262*/
        break; /*0x69c262*/
      ++v32; /*0x69c276*/
      v54 = (char *)v54 + 1; /*0x69c280*/
      if ( (int)v32 >= (int)&dword_A8DAB0 ) /*0x69c284*/
      {
        v36 = 0; /*0x69c286*/
        goto LABEL_58; /*0x69c286*/
      }
    }
    v36 = v54; /*0x69c48c*/
LABEL_58:
    Network::SetPort((Network *)(this->unknown_2854[(_DWORD)v36 + 1] + 40), this->unknown_2854[498]); /*0x69c288*/
  }
  v37 = 0; /*0x69c2a5*/
  if ( this->StartSpots[4] > 0 ) /*0x69c2a9*/
  {
    v38 = (_WORD *)&this->unknown_2854[521] + 1; /*0x69c2ab*/
    do /*0x69c2d7*/
    {
      v39 = *(_WORD *)(*(_DWORD *)(this->StartSpots[1] + 4 * v37) + 40); /*0x69c2ba*/
      *v38 = v39; /*0x69c2c1*/
      if ( !v39 ) /*0x69c2c4*/
        *v38 = 1234; /*0x69c2c6*/
      ++v37; /*0x69c2d1*/
      ++v38; /*0x69c2d2*/
    }
    while ( v37 < this->StartSpots[4] ); /*0x69c2d7*/
  }
  v40 = (_DWORD *)(*(_DWORD *)this->StartSpots[1] + 40); /*0x69c2e1*/
  *(_DWORD *)v60 = *v40; /*0x69c2e6*/
  v61 = v40[1]; /*0x69c2f2*/
  v62 = v40[2]; /*0x69c2fd*/
  Network::CopyAddress_Small((char *)v60, (int)&v57); /*0x69c301*/
  v51 = 1; /*0x69c313*/
  if ( this->StartSpots[4] > 1 ) /*0x69c317*/
  {
    v41 = 4; /*0x69c31d*/
    do /*0x69c430*/
    {
      if ( (unsigned __int8)NetworkID::Compare(v60, *(_DWORD *)(v41 + this->StartSpots[1]) + 40) ) /*0x69c333*/
      {
        ToWideStringChar(*(char **)(v41 + this->StartSpots[1])); /*0x69c349*/
        Debug::Log(); /*0x69c354*/
        v42 = (char *)&this->unknown_2854[80]; /*0x69c362*/
        v54 = &this->unknown_2854[1]; /*0x69c368*/
        v55 = 8; /*0x69c36c*/
        do /*0x69c416*/
        {
          v43 = *(char **)v54; /*0x69c381*/
          v56 = ToWideStringChar(*(char **)(v41 + this->StartSpots[1])); /*0x69c38a*/
          v44 = ToWideStringChar(v43); /*0x69c38e*/
          if ( !_strcmpi((char *)v56, v44) ) /*0x69c399*/
          {
            Network::CopyAddress_Small(v42, (int)v53); /*0x69c3ac*/
            v45 = (NetworkID *)(*(_DWORD *)(v41 + this->StartSpots[1]) + 40); /*0x69c3be*/
            NetworkID::Assign(v45, 0, (int)v53, *(_WORD *)v45->__pad_0); /*0x69c3c8*/
            ToWideStringChar(*(char **)(v41 + this->StartSpots[1])); /*0x69c3d6*/
            Network::FormatAddress((Network *)(*(_DWORD *)(v41 + this->StartSpots[1]) + 40), 0); /*0x69c3eb*/
            Debug::Log(); /*0x69c3f7*/
          }
          v42 += 12; /*0x69c40a*/
          v46 = v55 == 1; /*0x69c40d*/
          v54 = (char *)v54 + 4; /*0x69c40e*/
          --v55; /*0x69c412*/
        }
        while ( !v46 ); /*0x69c416*/
      }
      v41 += 4; /*0x69c427*/
      ++v51; /*0x69c42c*/
    }
    while ( v51 < this->StartSpots[4] ); /*0x69c430*/
  }
  if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x69c440*/
  {
    v47 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 112))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x69c444*/
    LOWORD(v47) = HIWORD(this->unknown_2854[521]); /*0x69c44d*/
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 92))( /*0x69c457*/
      *(_DWORD *)&stru_887598.isAliveFlag,
      v47);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 28))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x69c462*/
  }
  v66 = &VectorClass<NodeNameType *>::`vftable'; /*0x69c469*/
  if ( Block ) /*0x69c473*/
  {
    if ( v69 ) /*0x69c47b*/
      __3_YAXPAX_Z(Block); /*0x69c47e*/
  }
}



// ==== 0x0069C4A0  _TypeList_W4DiskID::ddtor  this=TypeList  sig=csp ====
void __thiscall SessionClass::ddtor(_TypeList_W4DiskID *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x69c4a6*/
  this->m_10 = 0; /*0x69c4a9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x69c4b0*/
  {
    __3_YAXPAX_Z(v2); /*0x69c4b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69c4be*/
  }
  BYTE1(this->m_C) = 0; /*0x69c4c1*/
  this->m_8 = 0; /*0x69c4c4*/
}



// ==== 0x0069C4D0  _TypeList_W4DiskID::Write  this=TypeList  sig=csp ====
unsigned int __thiscall SessionClass::Write(_TypeList_W4DiskID *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x69c4d0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x69c4e5*/
  else
    return 0; /*0x69c4d7*/
}



// ==== 0x0069C4F0  _VectorClass_W4DiskID::Seek  this=VectorClass  sig=csp ====
int __thiscall SessionClass::Seek(_VectorClass_W4DiskID *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x69c4fa*/
}



// ==== 0x0069C500  _DynamicVectorClass_VWstring::ddtor  this=DynamicVector  sig=csp ====
void __thiscall MapFile::ddtor(_DynamicVectorClass_VWstring *this)
{
  int v2; // eax
  int v3; // ecx
  void *v4; // ebx
  ObjectClass *v5; // edi
  int v6; // ecx
  int v7; // ebp

  v2 = *(_DWORD *)&this->m_1[3]; /*0x69c505*/
  this->m_10 = 0; /*0x69c508*/
  if ( v2 && BYTE1(this->m_C) ) /*0x69c50f*/
  {
    v3 = *(_DWORD *)(v2 - 4); /*0x69c51a*/
    v4 = (void *)(v2 - 4); /*0x69c51e*/
    v5 = (ObjectClass *)(v2 + 4 * v3); /*0x69c522*/
    v6 = v3 - 1; /*0x69c525*/
    if ( v6 >= 0 ) /*0x69c526*/
    {
      v7 = v6 + 1; /*0x69c529*/
      do /*0x69c537*/
      {
        v5 = (ObjectClass *)((char *)v5 - 4); /*0x69c52c*/
        DeleteAndZero(v5); /*0x69c531*/
        --v7; /*0x69c536*/
      }
      while ( v7 ); /*0x69c537*/
    }
    __3_YAXPAX_Z(v4); /*0x69c53b*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69c547*/
  }
  BYTE1(this->m_C) = 0; /*0x69c54a*/
  this->m_8 = 0; /*0x69c54e*/
}



// ==== 0x0069C560  _DynamicVectorClass_VWstring::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall MapFile::Write(_DynamicVectorClass_VWstring *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x69c560*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x69c575*/
  else
    return 0; /*0x69c567*/
}



// ==== 0x0069C580  _VectorClass_VWstring::Clear  this=VectorClass  sig=csp ====
char **__thiscall VectorClass_Wstring::Clear(_VectorClass_VWstring *this, char **a2, int a3)
{
  String::AssignFromPtr((String *)a2, (const char **)(*(_DWORD *)&this->m_1[3] + 4 * a3)); /*0x69c592*/
  return a2; /*0x69c599*/
}



// ==== 0x0069C5A0  _DynamicVectorClass_PAVMultiMission::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_GlobalPacketType::Destroy(_DynamicVectorClass_PAVMultiMission *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x69c5a6*/
  this->m_10 = 0; /*0x69c5a9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x69c5b0*/
  {
    __3_YAXPAX_Z(v2); /*0x69c5b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69c5be*/
  }
  BYTE1(this->m_C) = 0; /*0x69c5c1*/
  this->m_8 = 0; /*0x69c5c4*/
}



// ==== 0x0069C5D0  _DynamicVectorClass_PAVMultiMission::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_GlobalPacketType::GetItemIndex(
        _DynamicVectorClass_PAVMultiMission *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x69c5d0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x69c5e5*/
  else
    return 0; /*0x69c5d7*/
}



// ==== 0x0069C5F0  _VectorClass_PAVMultiMission::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MultiMission::Get(_VectorClass_PAVMultiMission *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x69c5fa*/
}



// ==== 0x0069C600  _DynamicVectorClass_PAUGlobalPacketType::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_GlobalPacketType::Destroy_0(_DynamicVectorClass_PAUGlobalPacketType *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x69c606*/
  this->m_10 = 0; /*0x69c609*/
  if ( v2 && BYTE1(this->m_C) ) /*0x69c610*/
  {
    __3_YAXPAX_Z(v2); /*0x69c616*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69c61e*/
  }
  BYTE1(this->m_C) = 0; /*0x69c621*/
  this->m_8 = 0; /*0x69c624*/
}



// ==== 0x0069C630  _DynamicVectorClass_PAUGlobalPacketType::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_GlobalPacketType::GetItemIndex_0(
        _DynamicVectorClass_PAUGlobalPacketType *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x69c630*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x69c645*/
  else
    return 0; /*0x69c637*/
}



// ==== 0x0069C650  _VectorClass_PAUGlobalPacketType::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_GlobalPacketType::Get(_VectorClass_PAUGlobalPacketType *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x69c65a*/
}



// ==== 0x0069C660  VectorClass_ptr_GlobalPacketType::Destroy_1  this=VectorClass_ptr_GlobalPacketType  sig=csp ====
void __thiscall VectorClass_ptr_GlobalPacketType::Destroy_1(VectorClass_ptr_GlobalPacketType *this)
{
  void *Items; // eax

  Items = this->Items; /*0x69c666*/
  this->Count = 0; /*0x69c669*/
  if ( Items && this->IsAllocated ) /*0x69c670*/
  {
    __3_YAXPAX_Z(Items); /*0x69c676*/
    this->Items = 0; /*0x69c67e*/
  }
  this->IsAllocated = 0; /*0x69c681*/
  this->Capacity = 0; /*0x69c684*/
}



// ==== 0x0069C690  VectorClass_ptr_GlobalPacketType::GetItemIndex_1  this=VectorClass_ptr_GlobalPacketType  sig=csp ====
unsigned int __thiscall VectorClass_ptr_GlobalPacketType::GetItemIndex_1(
        VectorClass_ptr_GlobalPacketType *this,
        int a2)
{
  if ( this->IsInitialized ) /*0x69c690*/
    return (a2 - (unsigned int)this->Items) >> 2; /*0x69c6a5*/
  else
    return 0; /*0x69c697*/
}



// ==== 0x0069C6B0  _VectorClass_PAVPhoneEntryClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PhoneEntryClass::Get(_VectorClass_PAVPhoneEntryClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x69c6ba*/
}



// ==== 0x0069C6C0  _TypeList_W4DiskID::QueryInterface  this=TypeList  sig=csp ====
_DWORD *__thiscall SessionClass::QueryInterface(_TypeList_W4DiskID *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x69c6c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<enum DiskID>::`vftable'; /*0x69c6c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x69c6d0*/
  {
    __3_YAXPAX_Z(v3); /*0x69c6d8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69c6e0*/
  }
  BYTE1(this->m_C) = 0; /*0x69c6eb*/
  this->m_8 = 0; /*0x69c6f1*/
  if ( (a2 & 1) != 0 ) /*0x69c6f8*/
    __3_YAXPAX_Z(this); /*0x69c6fb*/
  return this->__pad_0; /*0x69c705*/
}



// ==== 0x0069C710  _VectorClass_W4DiskID::AddRef  this=VectorClass  sig=csp ====
char __thiscall SessionClass::AddRef(_VectorClass_W4DiskID *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x69c712*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x69c71d*/
  {
    v3 = 0; /*0x69c71f*/
    if ( m_8 <= 0 ) /*0x69c723*/
      return 1; /*0x69c743*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x69c725*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x69c72b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x69c734*/
    {
      ++v3; /*0x69c736*/
      ++v4; /*0x69c737*/
      if ( v3 >= m_8 ) /*0x69c73c*/
        return 1; /*0x69c73c*/
    }
  }
  return 0; /*0x69c73e*/
}



// ==== 0x0069C750  _VectorClass_W4DiskID::addPlayer  this=VectorClass  sig=csp ====
char __thiscall SessionClass::addPlayer(_VectorClass_W4DiskID *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x69c75c*/
  {
    LOBYTE(this->m_C) = 0; /*0x69c766*/
    if ( a3 ) /*0x69c76c*/
      v4 = a3; /*0x69c782*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x69c77e*/
    LOBYTE(this->m_C) = 1; /*0x69c786*/
    if ( v4 ) /*0x69c78a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x69c795*/
      {
        m_8 = this->m_8; /*0x69c79c*/
        if ( a2 < m_8 ) /*0x69c7a1*/
          m_8 = a2; /*0x69c7a3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x69c7a9*/
          ++i; /*0x69c7ae*/
        if ( BYTE1(this->m_C) ) /*0x69c7bb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69c7c6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x69c7ce*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x69c7d7*/
      this->m_8 = a2; /*0x69c7df*/
      BYTE1(this->m_C) = a3 == 0; /*0x69c7e2*/
      return 1; /*0x69c7e8*/
    }
    else
    {
      return 0; /*0x69c78f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_W4DiskID *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x69c7f2*/
    return 1; /*0x69c7f8*/
  }
}



// ==== 0x0069C800  _VectorClass_W4DiskID::removePlayer  this=VectorClass  sig=csp ====
void __thiscall SessionClass::removePlayer(_VectorClass_W4DiskID *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x69c80d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69c813*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69c81b*/
  }
  BYTE1(this->m_C) = 0; /*0x69c81e*/
  this->m_8 = 0; /*0x69c821*/
}



// ==== 0x0069C830  _VectorClass_W4DiskID::findPlayer  this=VectorClass  sig=csp ====
int __thiscall SessionClass::findPlayer(_VectorClass_W4DiskID *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x69c830*/
    return 0; /*0x69c838*/
  m_8 = this->m_8; /*0x69c83e*/
  result = 0; /*0x69c841*/
  if ( m_8 <= 0 ) /*0x69c845*/
    return -1; /*0x69c85c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x69c84b*/
  {
    if ( ++result >= m_8 ) /*0x69c85a*/
      return -1; /*0x69c85a*/
  }
  return result; /*0x69c83a*/
}



// ==== 0x0069C870  _VectorClass_W4DiskID::updatePlayer  this=VectorClass  sig=csp ====
unsigned int __thiscall SessionClass::updatePlayer(_VectorClass_W4DiskID *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x69c870*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x69c885*/
  else
    return 0; /*0x69c877*/
}



// ==== 0x0069C890  _TypeList_W4DiskID::Release  this=TypeList  sig=csp ====
char __thiscall SessionClass::Release(_TypeList_W4DiskID *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x69c89c*/
  {
    LOBYTE(this->m_C) = 0; /*0x69c8a2*/
    if ( a3 ) /*0x69c8a8*/
      v4 = a3; /*0x69c8be*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x69c8ba*/
    LOBYTE(this->m_C) = 1; /*0x69c8c2*/
    if ( !v4 ) /*0x69c8c6*/
      return 0; /*0x69c93a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x69c8c8*/
    {
      m_8 = this->m_8; /*0x69c8cf*/
      if ( a2 < m_8 ) /*0x69c8d4*/
        m_8 = a2; /*0x69c8d6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x69c8dc*/
        ++i; /*0x69c8e1*/
      if ( BYTE1(this->m_C) ) /*0x69c8ee*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69c8f9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x69c901*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x69c90a*/
    this->m_8 = a2; /*0x69c912*/
    BYTE1(this->m_C) = a3 == 0; /*0x69c915*/
  }
  else
  {
    (*(void (__thiscall **)(_TypeList_W4DiskID *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x69c91e*/
  }
  v7 = this->m_8; /*0x69c921*/
  if ( v7 < this->m_10 ) /*0x69c929*/
    this->m_10 = v7; /*0x69c92b*/
  return 1; /*0x69c92e*/
}



// ==== 0x0069C940  _TypeList_W4DiskID::Read  this=TypeList  sig=csp ====
int __thiscall SessionClass::Read(_TypeList_W4DiskID *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x69c940*/
  result = 0; /*0x69c943*/
  if ( m_10 <= 0 ) /*0x69c948*/
    return -1; /*0x69c95f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x69c94e*/
  {
    if ( ++result >= m_10 ) /*0x69c95d*/
      return -1; /*0x69c95d*/
  }
  return result; /*0x69c962*/
}



// ==== 0x0069C970  _VectorClass_VWstring::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_Wstring::AddRef(_VectorClass_VWstring *this, int a2)
{
  int m_8; // eax
  int v4; // esi

  m_8 = this->m_8; /*0x69c97c*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x69c981*/
  {
    v4 = 0; /*0x69c983*/
    if ( m_8 <= 0 ) /*0x69c987*/
      return 1; /*0x69c9b1*/
    while ( !VectorClass_Wstring::SetCapacity( /*0x69c9a2*/
               (VectorClass_Wstring *)(4 * v4 + *(_DWORD *)&this->m_1[3]),
               (const char **)(4 * v4 + *(_DWORD *)(a2 + 4))) )
    {
      if ( ++v4 >= this->m_8 ) /*0x69c9aa*/
        return 1; /*0x69c9aa*/
    }
  }
  return 0; /*0x69c9ac*/
}



// ==== 0x0069C9C0  _VectorClass_VWstring::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_Wstring::Release(_VectorClass_VWstring *this, int a2, _DWORD *a3)
{
  int m_8; // ebp
  int *v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // esi
  _DWORD *v8; // esi
  int i; // esi
  int v11; // ecx
  int v12; // eax
  void *v13; // edx
  ObjectClass *v14; // esi
  int v15; // eax
  int v16; // ebp
  int v17; // [esp+10h] [ebp-4h]
  int v18; // [esp+10h] [ebp-4h]
  void *v19; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x69c9c3*/
  if ( a2 ) /*0x69c9cd*/
  {
    LOBYTE(this->m_C) = 0; /*0x69c9d7*/
    if ( a3 ) /*0x69c9dd*/
    {
      *a3 = a2; /*0x69ca21*/
      v6 = a3 + 1; /*0x69ca23*/
      v8 = a3 + 1; /*0x69ca29*/
      if ( a2 - 1 >= 0 ) /*0x69ca2d*/
      {
        v18 = a2; /*0x69ca30*/
        do /*0x69ca47*/
        {
          unknown_libname_73(v8++); /*0x69ca36*/
          --v18; /*0x69ca43*/
        }
        while ( v18 ); /*0x69ca47*/
      }
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(4 * a2 + 4); /*0x69c9e7*/
      if ( v5 ) /*0x69c9f1*/
      {
        *v5 = a2; /*0x69c9f3*/
        v6 = v5 + 1; /*0x69c9f5*/
        v7 = v5 + 1; /*0x69c9fb*/
        if ( a2 - 1 >= 0 ) /*0x69c9ff*/
        {
          v17 = a2; /*0x69ca02*/
          do /*0x69ca19*/
          {
            unknown_libname_73(v7++); /*0x69ca08*/
            --v17; /*0x69ca15*/
          }
          while ( v17 ); /*0x69ca19*/
        }
      }
      else
      {
        v6 = 0; /*0x69ca1d*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x69ca4b*/
    if ( v6 ) /*0x69ca4f*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x69ca5b*/
      {
        if ( a2 >= this->m_8 ) /*0x69ca67*/
          m_8 = this->m_8; /*0x69ca69*/
        for ( i = 0; i < m_8; ++i ) /*0x69ca6f*/
          String::Reassign((String *)&v6[i], (const char **)(4 * i + *(_DWORD *)&this->m_1[3])); /*0x69ca81*/
        if ( BYTE1(this->m_C) ) /*0x69ca8b*/
        {
          v11 = *(_DWORD *)&this->m_1[3]; /*0x69ca92*/
          if ( v11 ) /*0x69ca97*/
          {
            v12 = *(_DWORD *)(v11 - 4); /*0x69ca99*/
            v13 = (void *)(v11 - 4); /*0x69ca9c*/
            v19 = (void *)(v11 - 4); /*0x69ca9f*/
            v14 = (ObjectClass *)(v11 + 4 * v12); /*0x69caa3*/
            v15 = v12 - 1; /*0x69caa6*/
            if ( v15 >= 0 ) /*0x69caa7*/
            {
              v16 = v15 + 1; /*0x69caa9*/
              do /*0x69cab7*/
              {
                v14 = (ObjectClass *)((char *)v14 - 4); /*0x69caac*/
                DeleteAndZero(v14); /*0x69cab1*/
                --v16; /*0x69cab6*/
              }
              while ( v16 ); /*0x69cab7*/
              v13 = v19; /*0x69cab9*/
            }
            __3_YAXPAX_Z(v13); /*0x69cabe*/
          }
          *(_DWORD *)&this->m_1[3] = 0; /*0x69cac6*/
        }
        m_8 = a2; /*0x69cacd*/
      }
      *(_DWORD *)&this->m_1[3] = v6; /*0x69cadc*/
      this->m_8 = m_8; /*0x69cadf*/
      BYTE1(this->m_C) = a3 == 0; /*0x69cae2*/
      return 1; /*0x69cae8*/
    }
    else
    {
      return 0; /*0x69ca54*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_VWstring *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x69caf3*/
    return 1; /*0x69caf9*/
  }
}



// ==== 0x0069CB00  _VectorClass_VWstring::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_Wstring::ddtor(_VectorClass_VWstring *this)
{
  int v2; // eax
  int v3; // ecx
  void *v4; // ebx
  ObjectClass *v5; // esi
  int v6; // ecx
  int v7; // ebp

  v2 = *(_DWORD *)&this->m_1[3]; /*0x69cb05*/
  if ( v2 && BYTE1(this->m_C) ) /*0x69cb0c*/
  {
    v3 = *(_DWORD *)(v2 - 4); /*0x69cb17*/
    v4 = (void *)(v2 - 4); /*0x69cb1b*/
    v5 = (ObjectClass *)(v2 + 4 * v3); /*0x69cb1f*/
    v6 = v3 - 1; /*0x69cb22*/
    if ( v6 >= 0 ) /*0x69cb23*/
    {
      v7 = v6 + 1; /*0x69cb26*/
      do /*0x69cb34*/
      {
        v5 = (ObjectClass *)((char *)v5 - 4); /*0x69cb29*/
        DeleteAndZero(v5); /*0x69cb2e*/
        --v7; /*0x69cb33*/
      }
      while ( v7 ); /*0x69cb34*/
    }
    __3_YAXPAX_Z(v4); /*0x69cb38*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69cb44*/
  }
  BYTE1(this->m_C) = 0; /*0x69cb47*/
  this->m_8 = 0; /*0x69cb4b*/
}



// ==== 0x0069CB50  _VectorClass_VWstring::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_Wstring::GetSize(_VectorClass_VWstring *this, const char **a2)
{
  int v4; // esi

  if ( !LOBYTE(this->m_C) ) /*0x69cb55*/
    return 0; /*0x69cb5e*/
  v4 = 0; /*0x69cb67*/
  if ( this->m_8 <= 0 ) /*0x69cb6b*/
    return -1; /*0x69cb89*/
  while ( !(unsigned __int8)String::Compare((String *)(*(_DWORD *)&this->m_1[3] + 4 * v4), a2) ) /*0x69cb7f*/
  {
    if ( ++v4 >= this->m_8 ) /*0x69cb87*/
      return -1; /*0x69cb87*/
  }
  return v4; /*0x69cb5c*/
}



// ==== 0x0069CBA0  _VectorClass_VWstring::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_Wstring::GetCapacity(_VectorClass_VWstring *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x69cba0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x69cbb5*/
  else
    return 0; /*0x69cba7*/
}



// ==== 0x0069CBC0  _DynamicVectorClass_VWstring::Release  this=DynamicVector  sig=csp ====
char __thiscall MapFile::Release(_DynamicVectorClass_VWstring *this, int a2, _DWORD *a3)
{
  int m_8; // ebp
  int *v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // edi
  _DWORD *v8; // edi
  int i; // edi
  int *v10; // eax
  int *v11; // edi
  int v12; // eax
  int v14; // [esp+10h] [ebp-4h]
  int v15; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x69cbc3*/
  if ( a2 ) /*0x69cbcd*/
  {
    LOBYTE(this->m_C) = 0; /*0x69cbd7*/
    if ( a3 ) /*0x69cbdd*/
    {
      *a3 = a2; /*0x69cc21*/
      v6 = a3 + 1; /*0x69cc23*/
      v8 = a3 + 1; /*0x69cc29*/
      if ( a2 - 1 >= 0 ) /*0x69cc2d*/
      {
        v15 = a2; /*0x69cc30*/
        do /*0x69cc47*/
        {
          unknown_libname_73(v8++); /*0x69cc36*/
          --v15; /*0x69cc43*/
        }
        while ( v15 ); /*0x69cc47*/
      }
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(4 * a2 + 4); /*0x69cbe7*/
      if ( v5 ) /*0x69cbf1*/
      {
        *v5 = a2; /*0x69cbf3*/
        v6 = v5 + 1; /*0x69cbf5*/
        v7 = v5 + 1; /*0x69cbfb*/
        if ( a2 - 1 >= 0 ) /*0x69cbff*/
        {
          v14 = a2; /*0x69cc02*/
          do /*0x69cc19*/
          {
            unknown_libname_73(v7++); /*0x69cc08*/
            --v14; /*0x69cc15*/
          }
          while ( v14 ); /*0x69cc19*/
        }
      }
      else
      {
        v6 = 0; /*0x69cc1d*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x69cc4b*/
    if ( !v6 ) /*0x69cc4f*/
      return 0; /*0x69ccf2*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x69cc55*/
    {
      if ( a2 >= this->m_8 ) /*0x69cc61*/
        m_8 = this->m_8; /*0x69cc63*/
      for ( i = 0; i < m_8; ++i ) /*0x69cc69*/
        String::Reassign((String *)&v6[i], (const char **)(4 * i + *(_DWORD *)&this->m_1[3])); /*0x69cc7b*/
      if ( BYTE1(this->m_C) ) /*0x69cc85*/
      {
        v10 = *(int **)&this->m_1[3]; /*0x69cc8c*/
        if ( v10 ) /*0x69cc91*/
        {
          v11 = v10 - 1; /*0x69cc96*/
          Array::ForEachReverse(v10, 4, *(v10 - 1), (int (__thiscall *)(int))DeleteAndZero); /*0x69cca2*/
          __3_YAXPAX_Z(v11); /*0x69cca8*/
        }
        *(_DWORD *)&this->m_1[3] = 0; /*0x69ccb0*/
      }
      m_8 = a2; /*0x69ccb7*/
    }
    *(_DWORD *)&this->m_1[3] = v6; /*0x69ccc6*/
    this->m_8 = m_8; /*0x69ccc9*/
    BYTE1(this->m_C) = a3 == 0; /*0x69cccc*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_VWstring *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x69ccd5*/
  }
  v12 = this->m_8; /*0x69ccd8*/
  if ( v12 < this->m_10 ) /*0x69cce0*/
    this->m_10 = v12; /*0x69cce2*/
  return 1; /*0x69cce5*/
}



// ==== 0x0069CD00  _DynamicVectorClass_VWstring::Read  this=DynamicVector  sig=csp ====
int __thiscall MapFile::Read(_DynamicVectorClass_VWstring *this, const char **a2)
{
  int v3; // esi

  v3 = 0; /*0x69cd05*/
  if ( this->m_10 <= 0 ) /*0x69cd0c*/
    return -1; /*0x69cd2a*/
  while ( !(unsigned __int8)String::Compare((String *)(*(_DWORD *)&this->m_1[3] + 4 * v3), a2) ) /*0x69cd20*/
  {
    if ( ++v3 >= this->m_10 ) /*0x69cd28*/
      return -1; /*0x69cd28*/
  }
  return v3; /*0x69cd2a*/
}



// ==== 0x0069CD40  _VectorClass_PAVMultiMission::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MultiMission::Add(_VectorClass_PAVMultiMission *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x69cd42*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x69cd4d*/
  {
    v3 = 0; /*0x69cd4f*/
    if ( m_8 <= 0 ) /*0x69cd53*/
      return 1; /*0x69cd73*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x69cd55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x69cd5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x69cd64*/
    {
      ++v3; /*0x69cd66*/
      ++v4; /*0x69cd67*/
      if ( v3 >= m_8 ) /*0x69cd6c*/
        return 1; /*0x69cd6c*/
    }
  }
  return 0; /*0x69cd6e*/
}



// ==== 0x0069CD80  _VectorClass_PAVMultiMission::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MultiMission::Release(_VectorClass_PAVMultiMission *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x69cd8c*/
  {
    LOBYTE(this->m_C) = 0; /*0x69cd96*/
    if ( a3 ) /*0x69cd9c*/
      v4 = a3; /*0x69cdb2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x69cdae*/
    LOBYTE(this->m_C) = 1; /*0x69cdb6*/
    if ( v4 ) /*0x69cdba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x69cdc5*/
      {
        m_8 = this->m_8; /*0x69cdcc*/
        if ( a2 < m_8 ) /*0x69cdd1*/
          m_8 = a2; /*0x69cdd3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x69cdd9*/
          ++i; /*0x69cdde*/
        if ( BYTE1(this->m_C) ) /*0x69cdeb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69cdf6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x69cdfe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x69ce07*/
      this->m_8 = a2; /*0x69ce0f*/
      BYTE1(this->m_C) = a3 == 0; /*0x69ce12*/
      return 1; /*0x69ce18*/
    }
    else
    {
      return 0; /*0x69cdbf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMultiMission *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x69ce22*/
    return 1; /*0x69ce28*/
  }
}



// ==== 0x0069CE30  _VectorClass_PAVMultiMission::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MultiMission::Remove(_VectorClass_PAVMultiMission *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x69ce3d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69ce43*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69ce4b*/
  }
  BYTE1(this->m_C) = 0; /*0x69ce4e*/
  this->m_8 = 0; /*0x69ce51*/
}



// ==== 0x0069CE60  _VectorClass_PAVMultiMission::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MultiMission::GetSize(_VectorClass_PAVMultiMission *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x69ce60*/
    return 0; /*0x69ce68*/
  m_8 = this->m_8; /*0x69ce6e*/
  result = 0; /*0x69ce71*/
  if ( m_8 <= 0 ) /*0x69ce75*/
    return -1; /*0x69ce8c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x69ce7b*/
  {
    if ( ++result >= m_8 ) /*0x69ce8a*/
      return -1; /*0x69ce8a*/
  }
  return result; /*0x69ce6a*/
}



// ==== 0x0069CEA0  _VectorClass_PAVMultiMission::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MultiMission::GetCapacity(_VectorClass_PAVMultiMission *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x69cea0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x69ceb5*/
  else
    return 0; /*0x69cea7*/
}



// ==== 0x0069CEC0  _DynamicVectorClass_PAVMultiMission::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_GlobalPacketType::SetCapacity(
        _DynamicVectorClass_PAVMultiMission *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x69cecc*/
  {
    LOBYTE(this->m_C) = 0; /*0x69ced2*/
    if ( a3 ) /*0x69ced8*/
      v4 = a3; /*0x69ceee*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x69ceea*/
    LOBYTE(this->m_C) = 1; /*0x69cef2*/
    if ( !v4 ) /*0x69cef6*/
      return 0; /*0x69cf6a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x69cef8*/
    {
      m_8 = this->m_8; /*0x69ceff*/
      if ( a2 < m_8 ) /*0x69cf04*/
        m_8 = a2; /*0x69cf06*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x69cf0c*/
        ++i; /*0x69cf11*/
      if ( BYTE1(this->m_C) ) /*0x69cf1e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69cf29*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x69cf31*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x69cf3a*/
    this->m_8 = a2; /*0x69cf42*/
    BYTE1(this->m_C) = a3 == 0; /*0x69cf45*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVMultiMission *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x69cf4e*/
  }
  v7 = this->m_8; /*0x69cf51*/
  if ( v7 < this->m_10 ) /*0x69cf59*/
    this->m_10 = v7; /*0x69cf5b*/
  return 1; /*0x69cf5e*/
}



// ==== 0x0069CF70  _DynamicVectorClass_PAVMultiMission::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_GlobalPacketType::FindItemIndex(_DynamicVectorClass_PAVMultiMission *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x69cf70*/
  result = 0; /*0x69cf73*/
  if ( m_10 <= 0 ) /*0x69cf78*/
    return -1; /*0x69cf8f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x69cf7e*/
  {
    if ( ++result >= m_10 ) /*0x69cf8d*/
      return -1; /*0x69cf8d*/
  }
  return result; /*0x69cf92*/
}



// ==== 0x0069CFA0  _VectorClass_PAUGlobalPacketType::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_GlobalPacketType::Add(_VectorClass_PAUGlobalPacketType *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x69cfa2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x69cfad*/
  {
    v3 = 0; /*0x69cfaf*/
    if ( m_8 <= 0 ) /*0x69cfb3*/
      return 1; /*0x69cfd3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x69cfb5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x69cfbb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x69cfc4*/
    {
      ++v3; /*0x69cfc6*/
      ++v4; /*0x69cfc7*/
      if ( v3 >= m_8 ) /*0x69cfcc*/
        return 1; /*0x69cfcc*/
    }
  }
  return 0; /*0x69cfce*/
}



// ==== 0x0069CFE0  _VectorClass_PAUGlobalPacketType::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_GlobalPacketType::Release(_VectorClass_PAUGlobalPacketType *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x69cfec*/
  {
    LOBYTE(this->m_C) = 0; /*0x69cff6*/
    if ( a3 ) /*0x69cffc*/
      v4 = a3; /*0x69d012*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x69d00e*/
    LOBYTE(this->m_C) = 1; /*0x69d016*/
    if ( v4 ) /*0x69d01a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x69d025*/
      {
        m_8 = this->m_8; /*0x69d02c*/
        if ( a2 < m_8 ) /*0x69d031*/
          m_8 = a2; /*0x69d033*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x69d039*/
          ++i; /*0x69d03e*/
        if ( BYTE1(this->m_C) ) /*0x69d04b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69d056*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x69d05e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x69d067*/
      this->m_8 = a2; /*0x69d06f*/
      BYTE1(this->m_C) = a3 == 0; /*0x69d072*/
      return 1; /*0x69d078*/
    }
    else
    {
      return 0; /*0x69d01f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUGlobalPacketType *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x69d082*/
    return 1; /*0x69d088*/
  }
}



// ==== 0x0069D090  _VectorClass_PAUGlobalPacketType::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_GlobalPacketType::Remove(_VectorClass_PAUGlobalPacketType *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x69d09d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69d0a3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69d0ab*/
  }
  BYTE1(this->m_C) = 0; /*0x69d0ae*/
  this->m_8 = 0; /*0x69d0b1*/
}



// ==== 0x0069D0C0  _VectorClass_PAUGlobalPacketType::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_GlobalPacketType::GetSize(_VectorClass_PAUGlobalPacketType *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x69d0c0*/
    return 0; /*0x69d0c8*/
  m_8 = this->m_8; /*0x69d0ce*/
  result = 0; /*0x69d0d1*/
  if ( m_8 <= 0 ) /*0x69d0d5*/
    return -1; /*0x69d0ec*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x69d0db*/
  {
    if ( ++result >= m_8 ) /*0x69d0ea*/
      return -1; /*0x69d0ea*/
  }
  return result; /*0x69d0ca*/
}



// ==== 0x0069D100  _VectorClass_PAUGlobalPacketType::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_GlobalPacketType::GetCapacity(_VectorClass_PAUGlobalPacketType *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x69d100*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x69d115*/
  else
    return 0; /*0x69d107*/
}



// ==== 0x0069D120  _DynamicVectorClass_PAUGlobalPacketType::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_GlobalPacketType::SetCapacity_0(
        _DynamicVectorClass_PAUGlobalPacketType *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x69d12c*/
  {
    LOBYTE(this->m_C) = 0; /*0x69d132*/
    if ( a3 ) /*0x69d138*/
      v4 = a3; /*0x69d14e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x69d14a*/
    LOBYTE(this->m_C) = 1; /*0x69d152*/
    if ( !v4 ) /*0x69d156*/
      return 0; /*0x69d1ca*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x69d158*/
    {
      m_8 = this->m_8; /*0x69d15f*/
      if ( a2 < m_8 ) /*0x69d164*/
        m_8 = a2; /*0x69d166*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x69d16c*/
        ++i; /*0x69d171*/
      if ( BYTE1(this->m_C) ) /*0x69d17e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69d189*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x69d191*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x69d19a*/
    this->m_8 = a2; /*0x69d1a2*/
    BYTE1(this->m_C) = a3 == 0; /*0x69d1a5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUGlobalPacketType *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x69d1ae*/
  }
  v7 = this->m_8; /*0x69d1b1*/
  if ( v7 < this->m_10 ) /*0x69d1b9*/
    this->m_10 = v7; /*0x69d1bb*/
  return 1; /*0x69d1be*/
}



// ==== 0x0069D1D0  _DynamicVectorClass_PAUGlobalPacketType::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_GlobalPacketType::FindItemIndex_0(
        _DynamicVectorClass_PAUGlobalPacketType *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x69d1d0*/
  result = 0; /*0x69d1d3*/
  if ( m_10 <= 0 ) /*0x69d1d8*/
    return -1; /*0x69d1ef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x69d1de*/
  {
    if ( ++result >= m_10 ) /*0x69d1ed*/
      return -1; /*0x69d1ed*/
  }
  return result; /*0x69d1f2*/
}



// ==== 0x0069D200  _VectorClass_PAVPhoneEntryClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PhoneEntryClass::Add(_VectorClass_PAVPhoneEntryClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x69d202*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x69d20d*/
  {
    v3 = 0; /*0x69d20f*/
    if ( m_8 <= 0 ) /*0x69d213*/
      return 1; /*0x69d233*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x69d215*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x69d21b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x69d224*/
    {
      ++v3; /*0x69d226*/
      ++v4; /*0x69d227*/
      if ( v3 >= m_8 ) /*0x69d22c*/
        return 1; /*0x69d22c*/
    }
  }
  return 0; /*0x69d22e*/
}



// ==== 0x0069D240  _VectorClass_PAVPhoneEntryClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PhoneEntryClass::Release(_VectorClass_PAVPhoneEntryClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x69d24c*/
  {
    LOBYTE(this->m_C) = 0; /*0x69d256*/
    if ( a3 ) /*0x69d25c*/
      v4 = a3; /*0x69d272*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x69d26e*/
    LOBYTE(this->m_C) = 1; /*0x69d276*/
    if ( v4 ) /*0x69d27a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x69d285*/
      {
        m_8 = this->m_8; /*0x69d28c*/
        if ( a2 < m_8 ) /*0x69d291*/
          m_8 = a2; /*0x69d293*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x69d299*/
          ++i; /*0x69d29e*/
        if ( BYTE1(this->m_C) ) /*0x69d2ab*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69d2b6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x69d2be*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x69d2c7*/
      this->m_8 = a2; /*0x69d2cf*/
      BYTE1(this->m_C) = a3 == 0; /*0x69d2d2*/
      return 1; /*0x69d2d8*/
    }
    else
    {
      return 0; /*0x69d27f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVPhoneEntryClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x69d2e2*/
    return 1; /*0x69d2e8*/
  }
}



// ==== 0x0069D2F0  _VectorClass_PAVPhoneEntryClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_PhoneEntryClass::Remove(_VectorClass_PAVPhoneEntryClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x69d2fd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69d303*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69d30b*/
  }
  BYTE1(this->m_C) = 0; /*0x69d30e*/
  this->m_8 = 0; /*0x69d311*/
}



// ==== 0x0069D320  _VectorClass_PAVPhoneEntryClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PhoneEntryClass::GetSize(_VectorClass_PAVPhoneEntryClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x69d320*/
    return 0; /*0x69d328*/
  m_8 = this->m_8; /*0x69d32e*/
  result = 0; /*0x69d331*/
  if ( m_8 <= 0 ) /*0x69d335*/
    return -1; /*0x69d34c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x69d33b*/
  {
    if ( ++result >= m_8 ) /*0x69d34a*/
      return -1; /*0x69d34a*/
  }
  return result; /*0x69d32a*/
}



// ==== 0x0069D360  _VectorClass_PAVPhoneEntryClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_PhoneEntryClass::GetCapacity(_VectorClass_PAVPhoneEntryClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x69d360*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x69d375*/
  else
    return 0; /*0x69d367*/
}



// ==== 0x0069D380  VectorClass_ptr_GlobalPacketType::SetCapacity_1  this=VectorClass_ptr_GlobalPacketType  sig=csp ====
char __thiscall VectorClass_ptr_GlobalPacketType::SetCapacity_1(
        VectorClass_ptr_GlobalPacketType *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  void *Capacity; // ecx
  int i; // eax
  void *v7; // eax

  if ( a2 ) /*0x69d38c*/
  {
    this->IsInitialized = 0; /*0x69d392*/
    if ( a3 ) /*0x69d398*/
      v4 = a3; /*0x69d3ae*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x69d3aa*/
    this->IsInitialized = 1; /*0x69d3b2*/
    if ( !v4 ) /*0x69d3b6*/
      return 0; /*0x69d42a*/
    if ( this->Items ) /*0x69d3b8*/
    {
      Capacity = this->Capacity; /*0x69d3bf*/
      if ( a2 < (int)Capacity ) /*0x69d3c4*/
        Capacity = (void *)a2; /*0x69d3c6*/
      for ( i = 0; i < (int)Capacity; v4[i - 1] = *((_DWORD *)this->Items + i - 1) ) /*0x69d3cc*/
        ++i; /*0x69d3d1*/
      if ( this->IsAllocated ) /*0x69d3de*/
      {
        __3_YAXPAX_Z(this->Items); /*0x69d3e9*/
        this->Items = 0; /*0x69d3f1*/
      }
    }
    this->Items = v4; /*0x69d3fa*/
    this->Capacity = (void *)a2; /*0x69d402*/
    this->IsAllocated = a3 == 0; /*0x69d405*/
  }
  else
  {
    (*(void (__thiscall **)(VectorClass_ptr_GlobalPacketType *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x69d40e*/
  }
  v7 = this->Capacity; /*0x69d411*/
  if ( (int)v7 < (int)this->Count ) /*0x69d419*/
    this->Count = v7; /*0x69d41b*/
  return 1; /*0x69d41e*/
}



// ==== 0x0069D430  VectorClass_ptr_GlobalPacketType::FindItemIndex_1  this=VectorClass_ptr_GlobalPacketType  sig=csp ====
int __thiscall VectorClass_ptr_GlobalPacketType::FindItemIndex_1(VectorClass_ptr_GlobalPacketType *this, _DWORD *a2)
{
  void *Count; // edx
  int result; // eax
  _DWORD *i; // ecx

  Count = this->Count; /*0x69d430*/
  result = 0; /*0x69d433*/
  if ( (int)Count <= 0 ) /*0x69d438*/
    return -1; /*0x69d44f*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x69d43e*/
  {
    if ( ++result >= (int)Count ) /*0x69d44d*/
      return -1; /*0x69d44d*/
  }
  return result; /*0x69d452*/
}



// ==== 0x0069D460  _VectorClass_W4DiskID::validateGame  this=VectorClass  sig=csp ====
_DWORD *__thiscall SessionClass::validateGame(_VectorClass_W4DiskID *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x69d463*/
  *(_DWORD *)this->__pad_0 = &VectorClass<enum DiskID>::`vftable'; /*0x69d466*/
  if ( v3 && BYTE1(this->m_C) ) /*0x69d470*/
  {
    __3_YAXPAX_Z(v3); /*0x69d478*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69d480*/
  }
  BYTE1(this->m_C) = 0; /*0x69d48b*/
  this->m_8 = 0; /*0x69d491*/
  if ( (a2 & 1) != 0 ) /*0x69d498*/
    __3_YAXPAX_Z(this); /*0x69d49b*/
  return this->__pad_0; /*0x69d4a5*/
}



// ==== 0x0069D4B0  _VectorClass_VWstring::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_Wstring::QueryInterface(_VectorClass_VWstring *this, char a2)
{
  int v3; // eax
  int v4; // ecx
  void *v5; // ebx
  ObjectClass *v6; // esi
  int v7; // ecx
  int v8; // ebp

  v3 = *(_DWORD *)&this->m_1[3]; /*0x69d4b3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<Wstring>::`vftable'; /*0x69d4b6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x69d4c0*/
  {
    v4 = *(_DWORD *)(v3 - 4); /*0x69d4cb*/
    v5 = (void *)(v3 - 4); /*0x69d4cf*/
    v6 = (ObjectClass *)(v3 + 4 * v4); /*0x69d4d3*/
    v7 = v4 - 1; /*0x69d4d6*/
    if ( v7 >= 0 ) /*0x69d4d7*/
    {
      v8 = v7 + 1; /*0x69d4da*/
      do /*0x69d4e8*/
      {
        v6 = (ObjectClass *)((char *)v6 - 4); /*0x69d4dd*/
        DeleteAndZero(v6); /*0x69d4e2*/
        --v8; /*0x69d4e7*/
      }
      while ( v8 ); /*0x69d4e8*/
    }
    __3_YAXPAX_Z(v5); /*0x69d4ec*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69d4f6*/
  }
  BYTE1(this->m_C) = 0; /*0x69d501*/
  this->m_8 = 0; /*0x69d507*/
  if ( (a2 & 1) != 0 ) /*0x69d50e*/
    __3_YAXPAX_Z(this); /*0x69d511*/
  return this->__pad_0; /*0x69d51b*/
}



// ==== 0x0069D520  _DynamicVectorClass_VWstring::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MapFile::QueryInterface(_DynamicVectorClass_VWstring *this, char a2)
{
  int v3; // eax
  int v4; // ecx
  void *v5; // ebx
  ObjectClass *v6; // esi
  int v7; // ecx
  int v8; // ebp

  v3 = *(_DWORD *)&this->m_1[3]; /*0x69d523*/
  *(_DWORD *)this->__pad_0 = &VectorClass<Wstring>::`vftable'; /*0x69d526*/
  if ( v3 && BYTE1(this->m_C) ) /*0x69d530*/
  {
    v4 = *(_DWORD *)(v3 - 4); /*0x69d53b*/
    v5 = (void *)(v3 - 4); /*0x69d53f*/
    v6 = (ObjectClass *)(v3 + 4 * v4); /*0x69d543*/
    v7 = v4 - 1; /*0x69d546*/
    if ( v7 >= 0 ) /*0x69d547*/
    {
      v8 = v7 + 1; /*0x69d54a*/
      do /*0x69d558*/
      {
        v6 = (ObjectClass *)((char *)v6 - 4); /*0x69d54d*/
        DeleteAndZero(v6); /*0x69d552*/
        --v8; /*0x69d557*/
      }
      while ( v8 ); /*0x69d558*/
    }
    __3_YAXPAX_Z(v5); /*0x69d55c*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69d566*/
  }
  BYTE1(this->m_C) = 0; /*0x69d571*/
  this->m_8 = 0; /*0x69d577*/
  if ( (a2 & 1) != 0 ) /*0x69d57e*/
    __3_YAXPAX_Z(this); /*0x69d581*/
  return this->__pad_0; /*0x69d58b*/
}



// ==== 0x0069D590  _VectorClass_PAVMultiMission::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_MultiMission::QueryInterface(_VectorClass_PAVMultiMission *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x69d593*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MultiMission *>::`vftable'; /*0x69d596*/
  if ( v3 && BYTE1(this->m_C) ) /*0x69d5a0*/
  {
    __3_YAXPAX_Z(v3); /*0x69d5a8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69d5b0*/
  }
  BYTE1(this->m_C) = 0; /*0x69d5bb*/
  this->m_8 = 0; /*0x69d5c1*/
  if ( (a2 & 1) != 0 ) /*0x69d5c8*/
    __3_YAXPAX_Z(this); /*0x69d5cb*/
  return this->__pad_0; /*0x69d5d5*/
}



// ==== 0x0069D5E0  _DynamicVectorClass_PAVMultiMission::Constructor_VectorClass_MultiMission___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_GlobalPacketType::Constructor_VectorClass_MultiMission___(
        _DynamicVectorClass_PAVMultiMission *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x69d5e3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MultiMission *>::`vftable'; /*0x69d5e6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x69d5f0*/
  {
    __3_YAXPAX_Z(v3); /*0x69d5f8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69d600*/
  }
  BYTE1(this->m_C) = 0; /*0x69d60b*/
  this->m_8 = 0; /*0x69d611*/
  if ( (a2 & 1) != 0 ) /*0x69d618*/
    __3_YAXPAX_Z(this); /*0x69d61b*/
  return this->__pad_0; /*0x69d625*/
}



// ==== 0x0069D630  _VectorClass_PAUGlobalPacketType::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_GlobalPacketType::QueryInterface(_VectorClass_PAUGlobalPacketType *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x69d633*/
  *(_DWORD *)this->__pad_0 = &VectorClass<GlobalPacketType *>::`vftable'; /*0x69d636*/
  if ( v3 && BYTE1(this->m_C) ) /*0x69d640*/
  {
    __3_YAXPAX_Z(v3); /*0x69d648*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69d650*/
  }
  BYTE1(this->m_C) = 0; /*0x69d65b*/
  this->m_8 = 0; /*0x69d661*/
  if ( (a2 & 1) != 0 ) /*0x69d668*/
    __3_YAXPAX_Z(this); /*0x69d66b*/
  return this->__pad_0; /*0x69d675*/
}



// ==== 0x0069D680  _DynamicVectorClass_PAUGlobalPacketType::Constructor_VectorClass_GlobalPacketType___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_GlobalPacketType::Constructor_VectorClass_GlobalPacketType___(
        _DynamicVectorClass_PAUGlobalPacketType *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x69d683*/
  *(_DWORD *)this->__pad_0 = &VectorClass<GlobalPacketType *>::`vftable'; /*0x69d686*/
  if ( v3 && BYTE1(this->m_C) ) /*0x69d690*/
  {
    __3_YAXPAX_Z(v3); /*0x69d698*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69d6a0*/
  }
  BYTE1(this->m_C) = 0; /*0x69d6ab*/
  this->m_8 = 0; /*0x69d6b1*/
  if ( (a2 & 1) != 0 ) /*0x69d6b8*/
    __3_YAXPAX_Z(this); /*0x69d6bb*/
  return this->__pad_0; /*0x69d6c5*/
}



// ==== 0x0069D6D0  _VectorClass_PAVPhoneEntryClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_PhoneEntryClass::QueryInterface(_VectorClass_PAVPhoneEntryClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x69d6d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<PhoneEntryClass *>::`vftable'; /*0x69d6d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x69d6e0*/
  {
    __3_YAXPAX_Z(v3); /*0x69d6e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69d6f0*/
  }
  BYTE1(this->m_C) = 0; /*0x69d6fb*/
  this->m_8 = 0; /*0x69d701*/
  if ( (a2 & 1) != 0 ) /*0x69d708*/
    __3_YAXPAX_Z(this); /*0x69d70b*/
  return this->__pad_0; /*0x69d715*/
}



// ==== 0x0069D770  MapFile::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall MapFile::Constructor(MapFile *this, int a2, int a3)
{
  this->MapFile_field_0x04 = 0; /*0x69d77b*/
  this->MapFile_field_0x08 = a2; /*0x69d77e*/
  LOBYTE(this->MapFile_field_0x0C) = 1; /*0x69d781*/
  BYTE1(this->MapFile_field_0x0C) = 0; /*0x69d785*/
  *(_DWORD *)this->__pad_0 = &VectorClass<enum DiskID>::`vftable'; /*0x69d788*/
  if ( a2 ) /*0x69d78e*/
  {
    if ( a3 ) /*0x69d796*/
    {
      this->MapFile_field_0x04 = a3; /*0x69d798*/
      return this->__pad_0; /*0x69d79e*/
    }
    this->MapFile_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x69d7ad*/
    BYTE1(this->MapFile_field_0x0C) = 1; /*0x69d7b0*/
  }
  return this->__pad_0; /*0x69d79d*/
}



// ==== 0x0069D7C0  VectorClass::WstringConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::WstringConstructor(VectorClass *this, int a2, _DWORD *a3)
{
  int v3; // esi
  _DWORD *v5; // ebp
  int *v7; // eax
  void *v8; // ebx
  _DWORD *v9; // ebp

  v3 = a2; /*0x69d7c3*/
  this->Items = 0; /*0x69d7cc*/
  this->Capacity = a2; /*0x69d7d3*/
  this->IsInitialized = 1; /*0x69d7d6*/
  this->IsAllocated = 0; /*0x69d7da*/
  this->vtable0 = &VectorClass<Wstring>::`vftable'; /*0x69d7de*/
  if ( !a2 ) /*0x69d7e4*/
    return &this->vtable0; /*0x69d7e4*/
  if ( !a3 ) /*0x69d7ec*/
  {
    v7 = (int *)__2_YAPAXI_Z(4 * a2 + 4); /*0x69d820*/
    if ( v7 ) /*0x69d82a*/
    {
      *v7 = a2; /*0x69d82c*/
      v8 = v7 + 1; /*0x69d82e*/
      v9 = v7 + 1; /*0x69d834*/
      if ( a2 - 1 >= 0 ) /*0x69d838*/
      {
        do /*0x69d848*/
        {
          unknown_libname_73(v9++); /*0x69d83f*/
          --v3; /*0x69d847*/
        }
        while ( v3 ); /*0x69d848*/
        this->Items = v8; /*0x69d84a*/
        this->IsAllocated = 1; /*0x69d84d*/
        return &this->vtable0; /*0x69d857*/
      }
    }
    else
    {
      v8 = 0; /*0x69d85a*/
    }
    this->Items = v8; /*0x69d85c*/
    this->IsAllocated = 1; /*0x69d85f*/
    return &this->vtable0; /*0x69d863*/
  }
  *a3 = a2; /*0x69d7ee*/
  v5 = a3 + 1; /*0x69d7f6*/
  if ( a2 - 1 >= 0 ) /*0x69d7fa*/
  {
    do /*0x69d80a*/
    {
      unknown_libname_73(v5++); /*0x69d801*/
      --v3; /*0x69d809*/
    }
    while ( v3 ); /*0x69d80a*/
  }
  this->Items = a3 + 1; /*0x69d80c*/
  return &this->vtable0; /*0x69d811*/
}



// ==== 0x0069D870  VectorClass::ParseAndApplyAlliances_Parse  this=VectorClass  sig=csp ====
_DWORD *__thiscall ParseAndApplyAlliances_Parse(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x69d87b*/
  this->Capacity = a2; /*0x69d87e*/
  this->IsInitialized = 1; /*0x69d881*/
  this->IsAllocated = 0; /*0x69d885*/
  this->vtable0 = &VectorClass<HouseClass *>::`vftable'; /*0x69d888*/
  if ( a2 ) /*0x69d88e*/
  {
    if ( a3 ) /*0x69d896*/
    {
      this->Items = (void *)a3; /*0x69d898*/
      return &this->vtable0; /*0x69d89e*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x69d8ad*/
    this->IsAllocated = 1; /*0x69d8b0*/
  }
  return &this->vtable0; /*0x69d89d*/
}



// ==== 0x0069D8C0  SHA1::ProcessBlock  this=SHA1  sig=csp ====
int *__thiscall SHA1::ProcessBlock(SHA1 *this, const void **a2, int *a3)
{
  int *result; // eax
  int v5; // ecx
  int v6; // edx
  unsigned int v7; // eax
  int v8; // eax

  result = a3; /*0x69d8c0*/
  v5 = *a3; /*0x69d8c8*/
  if ( *a3 ) /*0x69d8c8*/
  {
    if ( *a2 ) /*0x69d8d3*/
    {
      v6 = this->q00C; /*0x69d8da*/
      if ( v6 || v5 < 64 ) /*0x69d8e4*/
      {
        v7 = 64 - v6; /*0x69d8eb*/
        if ( v5 < 64 - v6 ) /*0x69d8ef*/
          v7 = *a3; /*0x69d8f1*/
        qmemcpy((char *)this + v6 + 52, *a2, v7); /*0x69d8ff*/
        *a2 = (char *)*a2 + v7; /*0x69d911*/
        this->q00C += v7; /*0x69d91a*/
        *a3 -= v7; /*0x69d926*/
        result = (int *)this->q00C; /*0x69d928*/
        if ( result == (int *)64 ) /*0x69d92d*/
        {
          SHA1::Transform((int *)this + 13, (unsigned int *)this + 6); /*0x69d939*/
          v8 = *((_DWORD *)this + 11); /*0x69d93e*/
          this->q00C = 0; /*0x69d941*/
          result = (int *)(v8 + 64); /*0x69d948*/
          *((_DWORD *)this + 11) = result; /*0x69d94a*/
        }
      }
    }
  }
  return result; /*0x69d94d*/
}



// ==== 0x0069D960  SHA1::Process  this=SHA1  sig=csp ====
int __thiscall SHA1::Process(SHA1 *this, int a2, int a3)
{
  int result; // eax
  int *v5; // edi
  int v6; // ebx

  this->__pad_0[0] = 0; /*0x69d96f*/
  SHA1::ProcessBlock(this, (const void **)&a2, &a3); /*0x69d972*/
  result = a3; /*0x69d977*/
  if ( a3 ) /*0x69d97d*/
  {
    v5 = (int *)a2; /*0x69d984*/
    if ( a3 / 64 > 0 ) /*0x69d98f*/
    {
      v6 = a3 / 64; /*0x69d996*/
      do /*0x69d9bb*/
      {
        SHA1::Transform(v5, (unsigned int *)this + 6); /*0x69d99c*/
        v5 += 16; /*0x69d9ab*/
        *((_DWORD *)this + 11) += 64; /*0x69d9ad*/
        --v6; /*0x69d9b6*/
        a3 -= 64; /*0x69d9b7*/
      }
      while ( v6 ); /*0x69d9bb*/
    }
    a2 = (int)v5; /*0x69d9cb*/
    return (int)SHA1::ProcessBlock(this, (const void **)&a2, &a3); /*0x69d9cf*/
  }
  return result; /*0x69d9d5*/
}



// ==== 0x0069D9E0  SHA1::Compute  this=SHA1  sig=csp ====
int __thiscall SHA1::Compute(SHA1 *this, char *a2)
{
  int v3; // edx
  int v4; // ebx
  unsigned int v5; // ebx
  int v6; // edx
  unsigned __int16 v7; // cx
  int *p_SHA1_field_0x04; // ecx
  int v9; // esi
  unsigned int v10; // eax
  unsigned int v12[5]; // [esp+14h] [ebp-54h] BYREF
  int v13[16]; // [esp+28h] [ebp-40h] BYREF

  if ( this->__pad_0[0] ) /*0x69d9e9*/
    qmemcpy(a2, &this->SHA1_field_0x04, 0x14u); /*0x69d9fb*/
  v3 = this->q00C; /*0x69d9fd*/
  v4 = *((_DWORD *)this + 11); /*0x69da00*/
  qmemcpy(v13, (char *)this + 52, sizeof(v13)); /*0x69da14*/
  v5 = v3 + v4; /*0x69da18*/
  *((_BYTE *)v13 + v3) = 0x80; /*0x69da29*/
  qmemcpy(v12, this + 1, sizeof(v12)); /*0x69da2e*/
  if ( 64 - v3 >= 9 ) /*0x69da30*/
  {
    v6 = v3 + 1; /*0x69da6a*/
  }
  else
  {
    if ( v3 + 1 < 64 ) /*0x69da38*/
      memset((char *)v13 + v3 + 1, 0, 63 - v3); /*0x69da4c*/
    SHA1::Transform(v13, v12); /*0x69da61*/
    v6 = 0; /*0x69da66*/
  }
  memset((char *)v13 + v6, 0, 64 - v6); /*0x69da7d*/
  LOBYTE(v7) = (8 * v5) >> 24; /*0x69da99*/
  HIBYTE(v7) = v5 >> 13; /*0x69da9e*/
  v13[15] = (v5 << 27) | (v5 << 11) & 0xFF0000 | v7; /*0x69dab8*/
  SHA1::Transform(v13, v12); /*0x69dac3*/
  qmemcpy(&this->SHA1_field_0x04, v12, 0x14u); /*0x69dad6*/
  p_SHA1_field_0x04 = &this->SHA1_field_0x04; /*0x69dad8*/
  v9 = 5; /*0x69dada*/
  do /*0x69db0b*/
  {
    v10 = *p_SHA1_field_0x04++; /*0x69dadf*/
    --v9; /*0x69db07*/
    *(p_SHA1_field_0x04 - 1) = ((v10 & 0xFF00 | (v10 << 16)) << 8) | ((HIWORD(v10) | v10 & 0xFF0000) >> 8); /*0x69db08*/
  }
  while ( v9 ); /*0x69db0b*/
  this->__pad_0[0] = 1; /*0x69db18*/
  qmemcpy(a2, &this->SHA1_field_0x04, 0x14u); /*0x69db1c*/
  return 20; /*0x69db1e*/
}



// ==== 0x0069DB30  SHA1::Transform  this=SHA1  sig=csp ====
int __stdcall SHA1::Transform(int *a1, unsigned int *a2)
{
  int *v2; // ecx
  int v3; // esi
  int v4; // eax
  int v5; // edi
  int *v6; // ecx
  int v7; // edx
  int v8; // esi
  int v9; // ebp
  int v10; // eax
  int v11; // ebx
  unsigned int v12; // edx
  int v13; // edi
  int v14; // esi
  unsigned int v15; // ebp
  int v16; // ecx
  int v17; // ecx
  int v18; // ebx
  int v19; // eax
  unsigned int v20; // eax
  bool v21; // cf
  unsigned int v22; // ebp
  unsigned int v23; // edx
  unsigned int v24; // ebx
  unsigned int v25; // eax
  unsigned int v26; // ebx
  int v27; // edx
  int result; // eax
  _DWORD *v29; // [esp+10h] [ebp-160h]
  int v30; // [esp+14h] [ebp-15Ch]
  int v31; // [esp+18h] [ebp-158h]
  _DWORD v32[5]; // [esp+1Ch] [ebp-154h] BYREF
  _BYTE v33[8]; // [esp+30h] [ebp-140h] BYREF
  char v34; // [esp+38h] [ebp-138h] BYREF

  v2 = a1; /*0x69db30*/
  v3 = 16; /*0x69db44*/
  do /*0x69db76*/
  {
    v4 = *v2++; /*0x69db49*/
    v5 = HIBYTE(v4) | ((v4 & 0xFF00 | (v4 << 16)) << 8); /*0x69db67*/
    LOBYTE(v4) = 0; /*0x69db69*/
    BYTE1(v4) = BYTE2(v4); /*0x69db6b*/
    --v3; /*0x69db71*/
    *(int *)((char *)v2 + v33 - (_BYTE *)a1 - 4) = (unsigned __int16)v4 | v5; /*0x69db72*/
  }
  while ( v3 ); /*0x69db76*/
  v6 = (int *)&v34; /*0x69db78*/
  v7 = 64; /*0x69db7c*/
  do /*0x69dba2*/
  {
    v8 = *(v6 - 2); /*0x69db87*/
    v9 = *v6; /*0x69db8a*/
    v10 = v6[6] ^ v6[11]; /*0x69db8c*/
    ++v6; /*0x69db8e*/
    --v7; /*0x69db9e*/
    v6[13] = (2 * (v9 ^ v8 ^ v10)) | ((v9 ^ v8 ^ (unsigned int)v10) >> 31); /*0x69db9f*/
  }
  while ( v7 ); /*0x69dba2*/
  v11 = 0; /*0x69dbb4*/
  qmemcpy(v32, a2, sizeof(v32)); /*0x69dbb6*/
  v12 = v32[1]; /*0x69dbb8*/
  v13 = v32[2]; /*0x69dbbc*/
  v14 = v32[3]; /*0x69dbc0*/
  v15 = v32[0]; /*0x69dbc4*/
  v31 = 0; /*0x69dbcc*/
  v29 = v33; /*0x69dbd0*/
  do
  {
    if ( v11 >= 20 ) /*0x69dbd7*/
    {
      if ( v11 >= 40 && v11 < 60 ) /*0x69dbe9*/
      {
        v17 = v13 & v12 | v14 & (v13 | v12); /*0x69dbf5*/
        goto LABEL_13; /*0x69dbf7*/
      }
      v16 = v13 ^ v12; /*0x69dbfb*/
    }
    else
    {
      v16 = v12 & (v14 ^ v13); /*0x69dbdd*/
    }
    v17 = v14 ^ v16; /*0x69dbfd*/
LABEL_13:
    if ( v11 >= 20 )
    {
      if ( v11 >= 40 )
        v30 = v11 >= 60 ? -899497514 : -1894007588;
      else
        v30 = 1859775393; /*0x69dc13*/
    }
    else
    {
      v30 = 1518500249; /*0x69dc04*/
    }
    v18 = v32[4]; /*0x69dc4c*/
    v19 = v17 + v30 + *v29 + ((32 * v15) | (v15 >> 27)); /*0x69dc50*/
    v32[4] = v14; /*0x69dc5a*/
    v20 = v18 + v19; /*0x69dc60*/
    v14 = v13; /*0x69dc66*/
    v13 = (v12 >> 2) | (v12 << 30); /*0x69dc68*/
    v11 = v31 + 1; /*0x69dc6e*/
    v12 = v15; /*0x69dc72*/
    v21 = (unsigned int)(v31 + 1) < 0x50; /*0x69dc74*/
    v15 = v20; /*0x69dc77*/
    ++v31; /*0x69dc79*/
    ++v29; /*0x69dc7d*/
  }
  while ( v21 );
  v22 = v12 + a2[1]; /*0x69dc93*/
  v23 = a2[3]; /*0x69dc95*/
  v24 = v20 + *a2; /*0x69dc98*/
  v25 = a2[4]; /*0x69dc9a*/
  *a2 = v24; /*0x69dc9d*/
  v26 = v13 + a2[2]; /*0x69dca4*/
  a2[3] = v14 + v23; /*0x69dca6*/
  v27 = v32[4]; /*0x69dca9*/
  a2[1] = v22; /*0x69dcae*/
  result = v27 + v25; /*0x69dcb1*/
  a2[2] = v26; /*0x69dcb4*/
  a2[4] = result; /*0x69dcb8*/
  return result; /*0x69dcad*/
}



// ==== 0x0069DCD0  sub_69DCD0  this=-  sig=ida-proto ====
int sub_69DCD0()
{
  dword_B07790 = 0; /*0x69dcd2*/
  dword_B07794 = 0; /*0x69dcd7*/
  dword_B07798 = 0; /*0x69dcdc*/
  dword_B0779C = 0; /*0x69dce1*/
  return 0; /*0x69dce6*/
}



// ==== 0x0069DCF0  ShapeButtonClass::Init  this=ShapeButtonClass  sig=csp ====
_BYTE *__thiscall ShapeButtonClass::Init(ShapeButtonClass *this)
{
  ToggleClass::Construct((int)this, 0, 0, 0, 0, 0); /*0x69dcfb*/
  *((_BYTE *)this + 52) = 0; /*0x69dd00*/
  *((_DWORD *)this + 14) = 0; /*0x69dd03*/
  *((_DWORD *)this + 15) = 0; /*0x69dd06*/
  *((_BYTE *)this + 64) = 0; /*0x69dd09*/
  *((_DWORD *)this + 17) = 0; /*0x69dd0c*/
  *((_DWORD *)this + 18) = 0; /*0x69dd0f*/
  *((_BYTE *)this + 76) = 0; /*0x69dd12*/
  *((_DWORD *)this + 20) = *(_DWORD *)&stru_87F5F0.__pad_58[124]; /*0x69dd1a*/
  *((_BYTE *)this + 85) = 0; /*0x69dd1d*/
  *((_BYTE *)this + 92) = 0; /*0x69dd20*/
  *(_DWORD *)this->__pad_0 = &ShapeButtonClass::`vftable'; /*0x69dd23*/
  return this->__pad_0; /*0x69dd2b*/
}



// ==== 0x0069DD30  ShapeButtonClass::Constructor  this=ShapeButtonClass  sig=csp ====
_BYTE *__thiscall ShapeButtonClass::Constructor(
        ShapeButtonClass *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8)
{
  ToggleClass::Construct((int)this, a2, a4, a5, 0, 0); /*0x69dd49*/
  *((_BYTE *)this + 52) = 0; /*0x69dd52*/
  *((_DWORD *)this + 14) = 0; /*0x69dd55*/
  *((_BYTE *)this + 64) = 0; /*0x69dd58*/
  *((_DWORD *)this + 17) = 0; /*0x69dd5b*/
  *((_DWORD *)this + 18) = 0; /*0x69dd5e*/
  *((_BYTE *)this + 76) = 0; /*0x69dd61*/
  *((_DWORD *)this + 20) = *(_DWORD *)&stru_87F5F0.__pad_58[124]; /*0x69dd69*/
  *((_BYTE *)this + 85) = a8; /*0x69dd72*/
  *((_BYTE *)this + 92) = 0; /*0x69dd75*/
  *(_DWORD *)this->__pad_0 = &ShapeButtonClass::`vftable'; /*0x69dd78*/
  *((_DWORD *)this + 22) = a3; /*0x69dd7e*/
  if ( a3 ) /*0x69dd81*/
  {
    *((_DWORD *)this + 5) = *(__int16 *)(a3 + 2); /*0x69dd87*/
    *((_DWORD *)this + 6) = *(__int16 *)(a3 + 4); /*0x69dd8e*/
  }
  else
  {
    *((_DWORD *)this + 5) = 0; /*0x69dd93*/
    *((_DWORD *)this + 6) = 0; /*0x69dd96*/
  }
  if ( a6 ) /*0x69dd9f*/
    *((_DWORD *)this + 5) = a6; /*0x69dda1*/
  if ( a7 ) /*0x69ddaa*/
    *((_DWORD *)this + 6) = a7; /*0x69ddac*/
  return this->__pad_0; /*0x69ddb1*/
}



// ==== 0x0069DDC0  ShapeButtonClass::Destructor  this=ShapeButtonClass  sig=csp ====
int __thiscall ShapeButtonClass::Destructor(int this)
{
  char v2; // al

  v2 = *(_BYTE *)(this + 92); /*0x69ddc6*/
  *(_DWORD *)this = &ShapeButtonClass::`vftable'; /*0x69ddc9*/
  if ( v2 && *(_DWORD *)(this + 88) ) /*0x69ddd3*/
  {
    __3_YAXPAX_Z(*(void **)(this + 88)); /*0x69dddb*/
    *(_DWORD *)(this + 88) = 0; /*0x69dde3*/
    *(_BYTE *)(this + 92) = 0; /*0x69dde6*/
    *(_DWORD *)(this + 20) = 0; /*0x69dde9*/
    *(_DWORD *)(this + 24) = 0; /*0x69ddec*/
  }
  return GadgetClass::Dtor((ShpButtonClass *)this); /*0x69ddf6*/
}



// ==== 0x0069DE00  ShapeButtonClass::SetShape  this=ShapeButtonClass  sig=csp ====
int __thiscall ShapeButton::SetShape(ShapeButtonClass *this, int a2, int a3, int a4)
{
  int result; // eax

  if ( *((_BYTE *)this + 92) && *((_DWORD *)this + 22) ) /*0x69de0b*/
  {
    __3_YAXPAX_Z(*((void **)this + 22)); /*0x69de13*/
    *((_DWORD *)this + 22) = 0; /*0x69de1b*/
    *((_BYTE *)this + 92) = 0; /*0x69de1e*/
    *((_DWORD *)this + 5) = 0; /*0x69de21*/
    *((_DWORD *)this + 6) = 0; /*0x69de24*/
  }
  *((_DWORD *)this + 22) = a2; /*0x69de2d*/
  if ( a2 ) /*0x69de30*/
  {
    *((_DWORD *)this + 5) = *(__int16 *)(a2 + 2); /*0x69de36*/
    *((_DWORD *)this + 6) = *(__int16 *)(a2 + 4); /*0x69de3d*/
  }
  else
  {
    *((_DWORD *)this + 5) = 0; /*0x69de42*/
    *((_DWORD *)this + 6) = 0; /*0x69de45*/
  }
  if ( a3 ) /*0x69de4e*/
    *((_DWORD *)this + 5) = a3; /*0x69de50*/
  result = a4; /*0x69de53*/
  if ( a4 ) /*0x69de59*/
    *((_DWORD *)this + 6) = a4; /*0x69de5b*/
  return result; /*0x69de5e*/
}



// ==== 0x0069DE70  ScenarioClass::FreeConfig  this=ScenarioClass  sig=csp ====
void __thiscall ScenarioClass::FreeConfig(ScenarioClass *this)
{
  if ( LOBYTE(this->nextScenario[23]) ) /*0x69de76*/
  {
    if ( this->nextScenario[22] ) /*0x69de7b*/
    {
      __3_YAXPAX_Z((void *)this->nextScenario[22]); /*0x69de83*/
      this->nextScenario[22] = 0; /*0x69de8b*/
      LOBYTE(this->nextScenario[23]) = 0; /*0x69de8e*/
      this->nextScenario[5] = 0; /*0x69de91*/
      this->nextScenario[6] = 0; /*0x69de94*/
    }
  }
}



// ==== 0x0069DEA0  ButtonClass::SetState  this=ButtonClass  sig=csp ====
char __thiscall ButtonClass::SetState(ButtonClass *this, char a2)
{
  *((_BYTE *)this + 92) = a2; /*0x69dea4*/
  return a2; /*0x69dea7*/
}



// ==== 0x0069DEB0  ShapeButtonClass::Draw  this=ShapeButtonClass  sig=csp ====
int __thiscall ShapeButton::Draw(ShapeButtonClass *this, int a2)
{
  unsigned int v3; // ebx
  char v4; // al
  AudioStream *v5; // edi
  int *v6; // eax
  int v7; // ebp
  int v8; // edx
  int v9; // ebp
  int v10; // eax
  int v12[4]; // [esp+4h] [ebp-20h] BYREF
  int v13[4]; // [esp+14h] [ebp-10h] BYREF

  if ( !Control::DispatchClick((ControlClass *)this, a2) || !*((_DWORD *)this + 22) ) /*0x69dec8*/
    return 0; /*0x69dfad*/
  if ( !*((_BYTE *)this + 30) ) /*0x69dedb*/
  {
    if ( *((_BYTE *)this + 64) ) /*0x69dee4*/
    {
      if ( *((_BYTE *)this + 52) ) /*0x69deeb*/
      {
        v3 = (*((_BYTE *)this + 45) != 0) + 3; /*0x69defc*/
        goto LABEL_11; /*0x69deff*/
      }
      v4 = *((_BYTE *)this + 45); /*0x69df01*/
      v3 = 0; /*0x69df04*/
    }
    else
    {
      v4 = *((_BYTE *)this + 44); /*0x69df08*/
      v3 = 0; /*0x69df0b*/
    }
    LOBYTE(v3) = v4 != 0; /*0x69df0f*/
    goto LABEL_11; /*0x69df0f*/
  }
  v3 = 2; /*0x69dedd*/
LABEL_11:
  v5 = (AudioStream *)DSurface_Sidebar; /*0x69df12*/
  if ( !*((_BYTE *)this + 76) ) /*0x69df12*/
    v5 = g_DSurface_Hidden_2; /*0x69df1f*/
  v6 = (int *)(*(int (__thiscall **)(AudioStream *, int *))(*(_DWORD *)v5->__pad_0 + 120))(v5, v12); /*0x69df2e*/
  v7 = *((_DWORD *)this + 3); /*0x69df33*/
  v13[0] = *v6; /*0x69df36*/
  v13[1] = v6[1]; /*0x69df3d*/
  v13[2] = v6[2]; /*0x69df44*/
  v13[3] = v6[3]; /*0x69df4f*/
  v8 = v7 + *((_DWORD *)this + 17); /*0x69df56*/
  v9 = this->q004; /*0x69df58*/
  v12[0] = v8; /*0x69df5b*/
  v10 = *((_BYTE *)this + 85) != 0 ? 0x800 : 0;
  v12[1] = v9 + *((_DWORD *)this + 18); /*0x69df7d*/
  DrawToSurfaceSHP( /*0x69df96*/
    (int)v5,
    *((_DWORD *)this + 20),
    *((_DWORD *)this + 22),
    v3,
    v12,
    v13,
    v10,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
  *((_BYTE *)this + 84) = 1; /*0x69dfa2*/
  return 1; /*0x69dfa6*/
}



// ==== 0x0069DFC0  SidebarClass::startButtonFlash  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::startButtonFlash(SidebarClass *this, int a2, int a3, char a4)
{
  if ( this->SidebarClass_field_0x38 ) /*0x69dfc0*/
    return 0; /*0x69dfe3*/
  this->SidebarClass_field_0x38 = (void *)a2; /*0x69dfcf*/
  this->SidebarClass_field_0x3C = (void *)(a3 + a2); /*0x69dfd4*/
  LOBYTE(this->SidebarClass_field_0x34) = a4; /*0x69dfdb*/
  return 1; /*0x69dfe0*/
}



// ==== 0x0069DFF0  SHA1::Reset  this=GadgetClass  sig=csp ====
int __thiscall SHA1::Reset(int this)
{
  int result; // eax

  result = 0; /*0x69dff3*/
  if ( *(_DWORD *)(this + 56) ) /*0x69dff0*/
  {
    *(_BYTE *)(this + 52) = 0; /*0x69dff9*/
    *(_DWORD *)(this + 60) = 0; /*0x69dffc*/
    *(_DWORD *)(this + 56) = 0; /*0x69dfff*/
    LOBYTE(result) = 1; /*0x69e002*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x69e005*/
  }
  return result; /*0x69e004*/
}



// ==== 0x0069E010  SidebarClass::updateFlashTimer  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::updateFlashTimer(SidebarClass *this)
{
  char *SidebarClass_field_0x3C; // eax
  char *v3; // eax
  void *SidebarClass_field_0x38; // edx

  if ( BYTE2(this->SidebarClass_field_0x1C) ) /*0x69e010*/
  {
    if ( this->SidebarClass_field_0x38 ) /*0x69e019*/
    {
      LOBYTE(this->SidebarClass_field_0x34) = 0; /*0x69e01e*/
      this->SidebarClass_field_0x3C = 0; /*0x69e021*/
      this->SidebarClass_field_0x38 = 0; /*0x69e024*/
      return 1; /*0x69e029*/
    }
  }
  else
  {
    SidebarClass_field_0x3C = (char *)this->SidebarClass_field_0x3C; /*0x69e02a*/
    if ( SidebarClass_field_0x3C ) /*0x69e02f*/
    {
      v3 = SidebarClass_field_0x3C - 1; /*0x69e031*/
      this->SidebarClass_field_0x3C = v3; /*0x69e034*/
      if ( !v3 ) /*0x69e037*/
      {
        SidebarClass_field_0x38 = this->SidebarClass_field_0x38; /*0x69e03e*/
        LOBYTE(this->SidebarClass_field_0x34) = LOBYTE(this->SidebarClass_field_0x34) == 0; /*0x69e044*/
        this->SidebarClass_field_0x3C = SidebarClass_field_0x38; /*0x69e047*/
        return 1; /*0x69e04c*/
      }
    }
  }
  return 0; /*0x69e029*/
}



// ==== 0x0069E060  ObjectClass::method_69E060  this=ObjectClass  sig=csp ====
char __thiscall sub_69E060(ObjectClass *this)
{
  return (char)this->attachedTag; /*0x69e063*/
}



// ==== 0x0069E070  sub_69E070  this=-  sig=ida-proto ====
int sub_69E070()
{
  dword_B077A0 = 0; /*0x69e072*/
  dword_B077A4 = 0; /*0x69e077*/
  dword_B077A8 = 0; /*0x69e07c*/
  dword_B077AC = 0; /*0x69e081*/
  return 0; /*0x69e086*/
}



// ==== 0x0069E090  House::Constructor  this=House  sig=csp ====
void __thiscall House::Constructor(House *this)
{
  void *v2; // eax
  CCFileClass v3; // [esp+4h] [ebp-6Ch] BYREF
  char v4[12]; // [esp+5Ch] [ebp-14h] BYREF
  int v5; // [esp+68h] [ebp-8h]

  if ( *(_WORD *)this->__pad_0 == 0xFFFF && !this->__pad_C[4] ) /*0x69e09c*/
  {
    CCFileClass::Construct(&v3, (char *)this->House_field_0x8); /*0x69e0ab*/
    v2 = CCFileClass::ReadEntireFile(&v3); /*0x69e0b4*/
    if ( v2 ) /*0x69e0bb*/
    {
      *(_DWORD *)this->__pad_C = v2; /*0x69e0bd*/
      this->__pad_C[4] = 1; /*0x69e0c0*/
    }
    *(_DWORD *)v3.CDFileClass = &CCFileClass::`vftable'; /*0x69e0c8*/
    v5 = 0; /*0x69e0d0*/
    Vector::Clear((int)v4); /*0x69e0d8*/
    *(_DWORD *)v3.CDFileClass = &off_7E1668; /*0x69e0e1*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v3); /*0x69e0e9*/
  }
}



// ==== 0x0069E100  BTree::DeleteSubtree  this=BTree  sig=csp ====
void __thiscall BTree::DeleteSubtree(BTree *this)
{
  void *v2; // esi
  int v3; // eax
  int v4; // eax

  if ( *(_WORD *)this->__tail_0 == 0xFFFF && *((_BYTE *)this + 16) ) /*0x69e109*/
  {
    v2 = (void *)*((_DWORD *)this + 3); /*0x69e111*/
    if ( v2 ) /*0x69e116*/
    {
      if ( *(_WORD *)v2 == 0xFFFF ) /*0x69e11c*/
      {
        BTree::DeleteSubtree(*((BTree **)this + 3)); /*0x69e120*/
        v3 = *((_DWORD *)v2 + 6); /*0x69e125*/
        if ( v3 ) /*0x69e12a*/
          *(_DWORD *)(v3 + 28) = *((_DWORD *)v2 + 7); /*0x69e12f*/
        v4 = *((_DWORD *)v2 + 7); /*0x69e132*/
        if ( v4 ) /*0x69e137*/
          *(_DWORD *)(v4 + 24) = *((_DWORD *)v2 + 6); /*0x69e13c*/
        else
          dword_B077B0 = (void *)*((_DWORD *)v2 + 6); /*0x69e144*/
        if ( *((_DWORD *)v2 + 2) ) /*0x69e149*/
        {
          free(*((void **)v2 + 2)); /*0x69e151*/
          *((_DWORD *)v2 + 2) = 0; /*0x69e159*/
        }
      }
      __3_YAXPAX_Z(v2); /*0x69e161*/
    }
    *((_DWORD *)this + 3) = 0; /*0x69e169*/
    *((_BYTE *)this + 16) = 0; /*0x69e170*/
  }
}



// ==== 0x0069E180  MixFileClass::DestroyCache  this=MixFileClass  sig=ida-proto ====
void sub_69E180()
{
  void *v0; // esi
  void *v1; // edi
  void *v2; // ecx
  int v3; // eax
  int v4; // eax

  v0 = dword_B077B0; /*0x69e182*/
  if ( dword_B077B0 ) /*0x69e18c*/
  {
    do /*0x69e1f9*/
    {
      v1 = (void *)*((_DWORD *)v0 + 6); /*0x69e18f*/
      if ( v0 ) /*0x69e194*/
      {
        if ( *(_WORD *)v0 == 0xFFFF ) /*0x69e19a*/
        {
          if ( *((_BYTE *)v0 + 16) ) /*0x69e19c*/
          {
            v2 = (void *)*((_DWORD *)v0 + 3); /*0x69e1a1*/
            if ( v2 ) /*0x69e1a6*/
              MixFileClass::CacheNode_Dtor(v2, 1); /*0x69e1aa*/
            *((_DWORD *)v0 + 3) = 0; /*0x69e1af*/
            *((_BYTE *)v0 + 16) = 0; /*0x69e1b2*/
          }
          v3 = *((_DWORD *)v0 + 6); /*0x69e1b5*/
          if ( v3 ) /*0x69e1ba*/
            *(_DWORD *)(v3 + 28) = *((_DWORD *)v0 + 7); /*0x69e1bf*/
          v4 = *((_DWORD *)v0 + 7); /*0x69e1c2*/
          if ( v4 ) /*0x69e1c7*/
            *(_DWORD *)(v4 + 24) = *((_DWORD *)v0 + 6); /*0x69e1cc*/
          else
            dword_B077B0 = (void *)*((_DWORD *)v0 + 6); /*0x69e1d4*/
          if ( *((_DWORD *)v0 + 2) ) /*0x69e1d9*/
          {
            free(*((void **)v0 + 2)); /*0x69e1e1*/
            *((_DWORD *)v0 + 2) = 0; /*0x69e1e9*/
          }
        }
        __3_YAXPAX_Z(v0); /*0x69e1ed*/
      }
      v0 = v1; /*0x69e1f7*/
    }
    while ( v1 ); /*0x69e1f9*/
    dword_B077B0 = 0; /*0x69e1fc*/
  }
  else
  {
    dword_B077B0 = 0; /*0x69e205*/
  }
}



// ==== 0x0069E210  MixFileClass::CleanupCache  this=MixFileClass  sig=ida-proto ====
void sub_69E210()
{
  _DWORD *v0; // edi
  void *v1; // esi
  int v2; // eax
  int v3; // eax
  void *v4; // esi
  _BYTE *v5; // ebp
  void *v6; // ecx
  _DWORD *v7; // edi
  int v8; // eax
  int v9; // eax

  v0 = dword_B077B0; /*0x69e213*/
  if ( dword_B077B0 ) /*0x69e21d*/
  {
    do /*0x69e289*/
    {
      if ( *(_WORD *)v0 == 0xFFFF && *((_BYTE *)v0 + 16) ) /*0x69e225*/
      {
        v1 = (void *)v0[3]; /*0x69e22a*/
        if ( v1 ) /*0x69e22f*/
        {
          if ( *(_WORD *)v1 == 0xFFFF ) /*0x69e235*/
          {
            BTree::DeleteSubtree((_DWORD *)v0[3]); /*0x69e239*/
            v2 = *((_DWORD *)v1 + 6); /*0x69e23e*/
            if ( v2 ) /*0x69e243*/
              *(_DWORD *)(v2 + 28) = *((_DWORD *)v1 + 7); /*0x69e248*/
            v3 = *((_DWORD *)v1 + 7); /*0x69e24b*/
            if ( v3 ) /*0x69e250*/
              *(_DWORD *)(v3 + 24) = *((_DWORD *)v1 + 6); /*0x69e255*/
            else
              dword_B077B0 = (void *)*((_DWORD *)v1 + 6); /*0x69e25d*/
            if ( *((_DWORD *)v1 + 2) ) /*0x69e262*/
            {
              free(*((void **)v1 + 2)); /*0x69e26a*/
              *((_DWORD *)v1 + 2) = 0; /*0x69e272*/
            }
          }
          __3_YAXPAX_Z(v1); /*0x69e276*/
        }
        v0[3] = 0; /*0x69e27e*/
        *((_BYTE *)v0 + 16) = 0; /*0x69e281*/
      }
      v0 = (_DWORD *)v0[6]; /*0x69e284*/
    }
    while ( v0 ); /*0x69e289*/
  }
  v4 = dword_B077B4; /*0x69e28b*/
  if ( dword_B077B4 ) /*0x69e293*/
  {
    if ( *(_WORD *)dword_B077B4 == 0xFFFF ) /*0x69e299*/
    {
      v5 = (char *)dword_B077B4 + 16; /*0x69e29f*/
      if ( *((_BYTE *)dword_B077B4 + 16) ) /*0x69e29b*/
      {
        v6 = (void *)*((_DWORD *)dword_B077B4 + 3); /*0x69e2a6*/
        v7 = (char *)dword_B077B4 + 12; /*0x69e2a9*/
        if ( v6 ) /*0x69e2ae*/
          MixFileClass::CacheNode_Dtor(v6, 1); /*0x69e2b2*/
        *v7 = 0; /*0x69e2b7*/
        *v5 = 0; /*0x69e2b9*/
      }
      v8 = *((_DWORD *)v4 + 6); /*0x69e2bc*/
      if ( v8 ) /*0x69e2c2*/
        *(_DWORD *)(v8 + 28) = *((_DWORD *)v4 + 7); /*0x69e2c7*/
      v9 = *((_DWORD *)v4 + 7); /*0x69e2ca*/
      if ( v9 ) /*0x69e2cf*/
        *(_DWORD *)(v9 + 24) = *((_DWORD *)v4 + 6); /*0x69e2d4*/
      else
        dword_B077B0 = (void *)*((_DWORD *)v4 + 6); /*0x69e2dc*/
      if ( *((_DWORD *)v4 + 2) ) /*0x69e2e1*/
      {
        free(*((void **)v4 + 2)); /*0x69e2e9*/
        *((_DWORD *)v4 + 2) = 0; /*0x69e2f1*/
      }
    }
    __3_YAXPAX_Z(v4); /*0x69e2f5*/
    dword_B077B4 = 0; /*0x69e2fd*/
    dword_B077B8 = 0; /*0x69e303*/
    dword_B077BC = 0; /*0x69e309*/
  }
}



// ==== 0x0069E320  CCFileClass::ProcessStream  this=CCFileClass  sig=ida-proto ====
void __fastcall sub_69E320(unsigned int a1)
{
  _DWORD *v1; // edi
  void *v3; // esi
  int v4; // eax
  int v5; // eax
  void *v6; // esi
  _BYTE *v7; // ebp
  void *v8; // ecx
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // eax

  v1 = dword_B077B0; /*0x69e324*/
  if ( dword_B077B0 ) /*0x69e330*/
  {
    do /*0x69e3a1*/
    {
      if ( v1[8] <= a1 && *(_WORD *)v1 == 0xFFFF && *((_BYTE *)v1 + 16) ) /*0x69e33d*/
      {
        v3 = (void *)v1[3]; /*0x69e342*/
        if ( v3 ) /*0x69e347*/
        {
          if ( *(_WORD *)v3 == 0xFFFF ) /*0x69e34d*/
          {
            BTree::DeleteSubtree((_DWORD *)v1[3]); /*0x69e351*/
            v4 = *((_DWORD *)v3 + 6); /*0x69e356*/
            if ( v4 ) /*0x69e35b*/
              *(_DWORD *)(v4 + 28) = *((_DWORD *)v3 + 7); /*0x69e360*/
            v5 = *((_DWORD *)v3 + 7); /*0x69e363*/
            if ( v5 ) /*0x69e368*/
              *(_DWORD *)(v5 + 24) = *((_DWORD *)v3 + 6); /*0x69e36d*/
            else
              dword_B077B0 = (void *)*((_DWORD *)v3 + 6); /*0x69e375*/
            if ( *((_DWORD *)v3 + 2) ) /*0x69e37a*/
            {
              free(*((void **)v3 + 2)); /*0x69e382*/
              *((_DWORD *)v3 + 2) = 0; /*0x69e38a*/
            }
          }
          __3_YAXPAX_Z(v3); /*0x69e38e*/
        }
        v1[3] = 0; /*0x69e396*/
        *((_BYTE *)v1 + 16) = 0; /*0x69e399*/
      }
      v1 = (_DWORD *)v1[6]; /*0x69e39c*/
    }
    while ( v1 ); /*0x69e3a1*/
  }
  v6 = dword_B077B4; /*0x69e3a3*/
  if ( dword_B077B4 ) /*0x69e3ab*/
  {
    if ( *(_WORD *)dword_B077B4 == 0xFFFF ) /*0x69e3b1*/
    {
      v7 = (char *)dword_B077B4 + 16; /*0x69e3b6*/
      if ( *((_BYTE *)dword_B077B4 + 16) ) /*0x69e3b3*/
      {
        v8 = (void *)*((_DWORD *)dword_B077B4 + 3); /*0x69e3bd*/
        v9 = (char *)dword_B077B4 + 12; /*0x69e3c0*/
        if ( v8 ) /*0x69e3c5*/
          MixFileClass::CacheNode_Dtor(v8, 1); /*0x69e3c9*/
        *v9 = 0; /*0x69e3ce*/
        *v7 = 0; /*0x69e3d0*/
      }
      v10 = *((_DWORD *)v6 + 6); /*0x69e3d3*/
      if ( v10 ) /*0x69e3d8*/
        *(_DWORD *)(v10 + 28) = *((_DWORD *)v6 + 7); /*0x69e3dd*/
      v11 = *((_DWORD *)v6 + 7); /*0x69e3e0*/
      if ( v11 ) /*0x69e3e5*/
        *(_DWORD *)(v11 + 24) = *((_DWORD *)v6 + 6); /*0x69e3ea*/
      else
        dword_B077B0 = (void *)*((_DWORD *)v6 + 6); /*0x69e3f2*/
      if ( *((_DWORD *)v6 + 2) ) /*0x69e3f7*/
      {
        free(*((void **)v6 + 2)); /*0x69e3ff*/
        *((_DWORD *)v6 + 2) = 0; /*0x69e407*/
      }
    }
    __3_YAXPAX_Z(v6); /*0x69e40b*/
    dword_B077B4 = 0; /*0x69e413*/
    dword_B077B8 = 0; /*0x69e419*/
    dword_B077BC = 0; /*0x69e41f*/
  }
}



// ==== 0x0069E430  ObjectClass::LoadSHPFile  this=ObjectClass  sig=csp ====
void *__thiscall LoadSHPFile(ObjectClass *this, char *Source)
{
  char *v3; // eax
  CCFileClass v5; // [esp+8h] [ebp-6Ch] BYREF
  int v6[3]; // [esp+60h] [ebp-14h] BYREF
  int v7; // [esp+6Ch] [ebp-8h]

  this->? = dword_83F870++; /*0x69e440*/
  v3 = _strdup(Source); /*0x69e44f*/
  this->? = v3; /*0x69e45d*/
  LOBYTE(this->?) = 0; /*0x69e461*/
  this->? = 0; /*0x69e464*/
  HIWORD(this->AbstractClass) = 0; /*0x69e467*/
  LOWORD(this->?) = 0; /*0x69e46b*/
  HIWORD(this->?) = 0; /*0x69e46f*/
  CCFileClass::Construct(&v5, v3); /*0x69e473*/
  if ( (unsigned __int8)CCFileClass::Open(&v5, 0) ) /*0x69e47d*/
    CCFileClass::Read(&v5, this, 8); /*0x69e48d*/
  _strcmpi((char *)this->?, aNullShp); /*0x69e49b*/
  LOWORD(this->AbstractClass) = -1; /*0x69e4a0*/
  this->? = (int)dword_B077B0; /*0x69e4aa*/
  this->? = 0; /*0x69e4ad*/
  if ( dword_B077B0 ) /*0x69e4ba*/
    *((_DWORD *)dword_B077B0 + 7) = this; /*0x69e4bc*/
  dword_B077B0 = this; /*0x69e4bf*/
  this->? = 0; /*0x69e4c9*/
  *(_DWORD *)v5.CDFileClass = &CCFileClass::`vftable'; /*0x69e4cc*/
  v7 = 0; /*0x69e4d4*/
  Vector::Clear((int)v6); /*0x69e4d8*/
  *(_DWORD *)v5.CDFileClass = &off_7E1668; /*0x69e4e1*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v5); /*0x69e4e9*/
  return this; /*0x69e4f0*/
}



// ==== 0x0069E500  FileTreeNode::Destroy  this=FileTreeNode  sig=csp ====
int __thiscall FileTreeNode::Destroy(FileTreeNode *this)
{
  int result; // eax
  void *v3; // edi
  FileTreeNode *v4; // eax
  FileTreeNode *v5; // eax

  if ( *(_WORD *)this->__tail_0 == 0xFFFF ) /*0x69e507*/
  {
    if ( *((_BYTE *)this + 16) ) /*0x69e509*/
    {
      v3 = (void *)*((_DWORD *)this + 3); /*0x69e511*/
      if ( v3 ) /*0x69e516*/
      {
        FileTreeNode::Destroy(*((FileTreeNode **)this + 3)); /*0x69e51a*/
        __3_YAXPAX_Z(v3); /*0x69e520*/
      }
      *((_DWORD *)this + 3) = 0; /*0x69e528*/
      *((_BYTE *)this + 16) = 0; /*0x69e52f*/
    }
    v4 = (FileTreeNode *)*((_DWORD *)this + 6); /*0x69e534*/
    if ( v4 ) /*0x69e539*/
      v4[7] = *(this + 7); /*0x69e53e*/
    v5 = (FileTreeNode *)*((_DWORD *)this + 7); /*0x69e541*/
    if ( v5 ) /*0x69e546*/
      v5[6] = *(this + 6); /*0x69e54b*/
    else
      dword_B077B0 = (void *)*((_DWORD *)this + 6); /*0x69e553*/
    result = *((_DWORD *)this + 2); /*0x69e558*/
    if ( result ) /*0x69e55d*/
    {
      result = free(*((void **)this + 2)); /*0x69e560*/
      *((_DWORD *)this + 2) = 0; /*0x69e568*/
    }
  }
  return result; /*0x69e56f*/
}



// ==== 0x0069E580  MixFileClass::LoadSubFile  this=MixFileClass  sig=csp ====
char **__thiscall MixFileClass::LoadSubFile(MixFileClass *this)
{
  MixFileClass *v1; // edi
  int Size; // ebx
  void *v4; // eax
  size_t v5; // eax
  void *v6; // esi
  _BYTE *v7; // ebp
  MixFileClass *v8; // ecx
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // eax
  char **v12; // esi
  CCFileClass v14; // [esp+Ch] [ebp-6Ch] BYREF
  int v15[3]; // [esp+64h] [ebp-14h] BYREF
  int v16; // [esp+70h] [ebp-8h]

  v1 = this; /*0x69e585*/
  if ( *(_WORD *)this->Node != 0xFFFF ) /*0x69e58f*/
    return (char **)this; /*0x69e591*/
  if ( LOBYTE(this->FileSize) ) /*0x69e599*/
    return (char **)this->CountFiles; /*0x69e5a0*/
  if ( dword_B077BC == this->FileStartOffset ) /*0x69e5b3*/
    return (char **)dword_B077B4; /*0x69e5b5*/
  CCFileClass::Construct(&v14, *(char **)&this->Blowfish); /*0x69e5c8*/
  if ( (unsigned __int8)CCFileClass::Open(&v14, 0) ) /*0x69e5d4*/
  {
    Size = CCFileClass::GetSize(&v14); /*0x69e5ec*/
    v4 = dword_B077B4; /*0x69e5ee*/
    if ( dword_B077B4 ) /*0x69e5f5*/
    {
      if ( dword_B077B8 < Size ) /*0x69e624*/
      {
        v6 = dword_B077B4; /*0x69e62e*/
        if ( *(_WORD *)dword_B077B4 == 0xFFFF ) /*0x69e630*/
        {
          v7 = (char *)dword_B077B4 + 16; /*0x69e635*/
          if ( *((_BYTE *)dword_B077B4 + 16) ) /*0x69e632*/
          {
            v8 = (MixFileClass *)*((_DWORD *)dword_B077B4 + 3); /*0x69e63c*/
            v9 = (char *)dword_B077B4 + 12; /*0x69e63f*/
            if ( v8 ) /*0x69e644*/
              MixFileClass::CacheNode_Dtor(v8, 1); /*0x69e648*/
            *v9 = 0; /*0x69e64d*/
            v1 = this; /*0x69e653*/
            *v7 = 0; /*0x69e657*/
          }
          v10 = *((_DWORD *)v6 + 6); /*0x69e65b*/
          if ( v10 ) /*0x69e660*/
            *(_DWORD *)(v10 + 28) = *((_DWORD *)v6 + 7); /*0x69e665*/
          v11 = *((_DWORD *)v6 + 7); /*0x69e668*/
          if ( v11 ) /*0x69e66d*/
            *(_DWORD *)(v11 + 24) = *((_DWORD *)v6 + 6); /*0x69e672*/
          else
            dword_B077B0 = (void *)*((_DWORD *)v6 + 6); /*0x69e67a*/
          if ( *((_DWORD *)v6 + 2) ) /*0x69e680*/
          {
            free(*((void **)v6 + 2)); /*0x69e688*/
            *((_DWORD *)v6 + 2) = 0; /*0x69e690*/
          }
        }
        __3_YAXPAX_Z(v6); /*0x69e698*/
        v4 = (void *)__2_YAPAXI_Z(Size); /*0x69e69e*/
        dword_B077B4 = v4; /*0x69e6a6*/
        dword_B077B8 = Size; /*0x69e6ab*/
      }
    }
    else
    {
      v5 = 3145728; /*0x69e5fd*/
      if ( Size >= 3145728 ) /*0x69e602*/
        v5 = Size; /*0x69e604*/
      dword_B077B8 = v5; /*0x69e607*/
      v4 = (void *)__2_YAPAXI_Z(v5); /*0x69e60c*/
      dword_B077B4 = v4; /*0x69e614*/
    }
    if ( v4 ) /*0x69e6b5*/
    {
      CCFileClass::Read(&v14, v4, Size); /*0x69e6bd*/
      v4 = dword_B077B4; /*0x69e6c2*/
    }
    v12 = (char **)v4; /*0x69e6ca*/
    dword_B077BC = v1->FileStartOffset; /*0x69e6cc*/
    *(_DWORD *)v14.CDFileClass = &CCFileClass::`vftable'; /*0x69e6d6*/
    v16 = 0; /*0x69e6de*/
    Vector::Clear((int)v15); /*0x69e6e2*/
    *(_DWORD *)v14.CDFileClass = &off_7E1668; /*0x69e6eb*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v14); /*0x69e6f3*/
    return v12; /*0x69e6f8*/
  }
  else
  {
    dword_B077BC = 0; /*0x69e706*/
    *(_DWORD *)v14.CDFileClass = &CCFileClass::`vftable'; /*0x69e70c*/
    v16 = 0; /*0x69e714*/
    Vector::Clear((int)v15); /*0x69e718*/
    *(_DWORD *)v14.CDFileClass = &off_7E1668; /*0x69e721*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v14); /*0x69e729*/
    return 0; /*0x69e72f*/
  }
}



// ==== 0x0069E740  MixFileClass::GetSubFile  this=MixFileClass  sig=csp ====
int __thiscall MixFileClass::GetSubFile(MixFileClass *this, unsigned int a2)
{
  void *v3; // eax
  char **SubFile; // eax
  char *v5; // ecx
  CCFileClass v7; // [esp+4h] [ebp-6Ch] BYREF
  char v8[12]; // [esp+5Ch] [ebp-14h] BYREF
  int v9; // [esp+68h] [ebp-8h]

  if ( *(_WORD *)this->Node == 0xFFFF && !LOBYTE(this->FileSize) ) /*0x69e74c*/
  {
    CCFileClass::Construct(&v7, *(char **)&this->Blowfish); /*0x69e75b*/
    v3 = CCFileClass::ReadEntireFile(&v7); /*0x69e764*/
    if ( v3 ) /*0x69e76b*/
    {
      this->CountFiles = (int)v3; /*0x69e76d*/
      LOBYTE(this->FileSize) = 1; /*0x69e770*/
    }
    *(_DWORD *)v7.CDFileClass = &CCFileClass::`vftable'; /*0x69e778*/
    v9 = 0; /*0x69e780*/
    Vector::Clear((int)v8); /*0x69e788*/
    *(_DWORD *)v7.CDFileClass = &off_7E1668; /*0x69e791*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v7); /*0x69e799*/
  }
  SubFile = MixFileClass::LoadSubFile(this); /*0x69e7a0*/
  if ( SubFile && a2 < *((__int16 *)SubFile + 3) && &SubFile[6 * a2] != (char **)-8 && (v5 = SubFile[6 * a2 + 7]) != 0 ) /*0x69e7c6*/
    return (int)SubFile + (_DWORD)v5; /*0x69e7c8*/
  else
    return 0; /*0x69e7d0*/
}



// ==== 0x0069E7E0  Building::GetFoundationSize  this=IUnknown  sig=csp ====
_DWORD *__stdcall Building_GetFoundationSize(_DWORD *a1, unsigned int a2)
{
  int v2; // eax
  __int16 *v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // esi
  int v7; // edi

  v2 = MixFileClass::LoadSubFile(); /*0x69e7e0*/
  if ( v2 && a2 < *(__int16 *)(v2 + 6) && (v3 = (__int16 *)(v2 + 24 * a2 + 8)) != 0 ) /*0x69e7fe*/
  {
    v4 = *v3; /*0x69e800*/
    v5 = v3[1]; /*0x69e803*/
    v6 = v3[2]; /*0x69e809*/
    v7 = v3[3]; /*0x69e80e*/
    *a1 = v4; /*0x69e818*/
    a1[1] = v5; /*0x69e81a*/
    a1[2] = v6; /*0x69e81d*/
    a1[3] = v7; /*0x69e820*/
    return a1; /*0x69e812*/
  }
  else
  {
    *a1 = dword_B077A0; /*0x69e835*/
    a1[1] = dword_B077A4; /*0x69e83d*/
    a1[2] = dword_B077A8; /*0x69e846*/
    a1[3] = dword_B077AC; /*0x69e84f*/
    return a1; /*0x69e829*/
  }
}



// ==== 0x0069E860  MixFileClass::GetPixelData  this=MixFileClass  sig=csp ====
int __thiscall MixFileClass::GetPixelData(MixFileClass *this, int a2, unsigned int a3)
{
  char **SubFile; // eax
  char **v4; // eax
  char v5; // cl
  char v6; // dl
  char v7; // al
  __int16 v9; // [esp+Ch] [ebp+8h]

  SubFile = MixFileClass::LoadSubFile(this); /*0x69e861*/
  if ( SubFile && a3 < *((__int16 *)SubFile + 3) && (v4 = &SubFile[6 * a3 + 2]) != 0 ) /*0x69e881*/
  {
    v5 = *((_BYTE *)v4 + 13); /*0x69e883*/
    v6 = *((_BYTE *)v4 + 12); /*0x69e886*/
    v7 = *((_BYTE *)v4 + 14); /*0x69e889*/
    HIBYTE(v9) = v5; /*0x69e88c*/
    LOBYTE(v9) = v6; /*0x69e894*/
    *(_WORD *)a2 = v9; /*0x69e89f*/
    *(_BYTE *)(a2 + 2) = v7; /*0x69e8a3*/
    return a2; /*0x69e8a6*/
  }
  else
  {
    *(_WORD *)a2 = 0; /*0x69e8c0*/
    *(_BYTE *)(a2 + 2) = 0; /*0x69e8c4*/
    return a2; /*0x69e8ab*/
  }
}



// ==== 0x0069E900  ObjectClass::Helper_69E900  this=ObjectClass  sig=csp ====
char __thiscall Helper_69E900(ObjectClass *this, unsigned int a2)
{
  char **SubFile; // eax
  unsigned int v3; // eax
  int v4; // eax

  SubFile = MixFileClass::LoadSubFile((MixFileClass *)this); /*0x69e900*/
  if ( SubFile && a2 < *((__int16 *)SubFile + 3) && (v3 = (unsigned int)&SubFile[6 * a2 + 2]) != 0 ) /*0x69e91e*/
    return (unsigned __int8)(*(_BYTE *)(v3 + 8) & 2) >> 1; /*0x69e926*/
  else
    LOBYTE(v4) = 0; /*0x69e92b*/
  return v4; /*0x69e928*/
}



// ==== 0x0069E930  MixFileClass::CacheNode_Dtor  this=MixFileClass  sig=csp ====
void *__thiscall MixFileClass::CacheNode_Dtor(MixFileClass *this, char a2)
{
  MixFileClass *CountFiles; // ecx
  MixHeaderData *Headers; // eax
  int v5; // eax

  if ( *(_WORD *)this->Node == 0xFFFF ) /*0x69e937*/
  {
    if ( LOBYTE(this->FileSize) ) /*0x69e939*/
    {
      CountFiles = (MixFileClass *)this->CountFiles; /*0x69e940*/
      if ( CountFiles ) /*0x69e945*/
        MixFileClass::CacheNode_Dtor(CountFiles, 1); /*0x69e949*/
      this->CountFiles = 0; /*0x69e94e*/
      LOBYTE(this->FileSize) = 0; /*0x69e955*/
    }
    Headers = this->Headers; /*0x69e959*/
    if ( Headers ) /*0x69e95e*/
      Headers[2].Offset = *(_DWORD *)this->__pad_1C; /*0x69e963*/
    v5 = *(_DWORD *)this->__pad_1C; /*0x69e966*/
    if ( v5 ) /*0x69e96b*/
      *(_DWORD *)(v5 + 24) = this->Headers; /*0x69e970*/
    else
      dword_B077B0 = this->Headers; /*0x69e978*/
    if ( *(_DWORD *)&this->Blowfish ) /*0x69e97d*/
    {
      free(*(void **)&this->Blowfish); /*0x69e985*/
      *(_DWORD *)&this->Blowfish = 0; /*0x69e98d*/
    }
  }
  if ( (a2 & 1) != 0 ) /*0x69e999*/
    __3_YAXPAX_Z(this); /*0x69e99c*/
  return this; /*0x69e9a6*/
}



// ==== 0x0069E9B0  SHAPipe::Check  this=SHAPipe  sig=csp ====
int __thiscall VectorClass::Check(SHAPipe *this, int a2, int a3)
{
  SHA1::Process((SHA1 *)((char *)this + 12), a2, a3); /*0x69e9c2*/
  return Delegate::Dispatch((Pipe *)this, a2, a3); /*0x69e9d0*/
}



// ==== 0x0069E9E0  SHA1::ComputeThunk  this=SHA1  sig=csp ====
int __thiscall SHA1::ComputeThunk(SHA1 *this, char *a2)
{
  return SHA1::Compute((SHA1 *)&this->SHA1_field_0x0C, a2); /*0x69e9ed*/
}



// ==== 0x0069E9F0  ObjectClass::method_69E9F0  this=ObjectClass  sig=csp ====
int __thiscall sub_69E9F0(ObjectClass *this, int a2, int a3)
{
  int v4; // ebx

  if ( !a2 || a3 < 1 ) /*0x69ea03*/
    return 0; /*0x69ea29*/
  v4 = Delegate::Invoke((Straw *)this, a2, a3); /*0x69ea0d*/
  if ( !LOBYTE(this->?) ) /*0x69ea0f*/
    SHA1::Process((SHA1 *)&this->?, a2, v4); /*0x69ea1b*/
  return v4; /*0x69ea23*/
}



// ==== 0x0069EA40  sub_69EA40  this=-  sig=ida-proto ====
void sub_69EA40()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x69ea4c*/
  dbl_B077E0 = Math::Sqrt(v0 + v0); /*0x69ea5e*/
}



// ==== 0x0069EA70  sub_69EA70  this=-  sig=ida-proto ====
void sub_69EA70()
{
  dbl_B07830 = dbl_B077E0 / 60.0; /*0x69ea7c*/
}



// ==== 0x0069EA90  sub_69EA90  this=-  sig=ida-proto ====
void sub_69EA90()
{
  dbl_B07818 = 1.0 / dbl_B07830; /*0x69ea9c*/
}



// ==== 0x0069EAB0  sub_69EAB0  this=-  sig=ida-proto ====
void sub_69EAB0()
{
  dbl_B07810 = 0.0174532925199433 * 45.0; /*0x69eabc*/
}



// ==== 0x0069EAD0  sub_69EAD0  this=-  sig=ida-proto ====
void sub_69EAD0()
{
  dbl_B077E8 = 0.0174532925199433 * 60.0; /*0x69eadc*/
}



// ==== 0x0069EAF0  sub_69EAF0  this=-  sig=ida-proto ====
void sub_69EAF0()
{
  dbl_B077C0 = 0.0174532925199433 * 90.0; /*0x69eafc*/
}



// ==== 0x0069EB10  sub_69EB10  this=-  sig=ida-proto ====
__int64 sub_69EB10()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B077C0 - dbl_B077E8); /*0x69eb22*/
  result = Math::RoundToInt(v0 * dbl_B077E0 * 0.5); /*0x69eb36*/
  dword_B07838 = result; /*0x69eb3b*/
  return result; /*0x69eb40*/
}



// ==== 0x0069EB50  sub_69EB50  this=-  sig=ida-proto ====
void sub_69EB50()
{
  dbl_B077F0 = Math::ArcTan((double)dword_B07838 * 0.00390625); /*0x69eb67*/
}



// ==== 0x0069EB80  sub_69EB80  this=-  sig=ida-proto ====
void sub_69EB80()
{
  dbl_B07808 = Math::ArcTan((double)(2 * dword_B07838) / dbl_B077E0); /*0x69eba2*/
}



// ==== 0x0069EBB0  sub_69EBB0  this=-  sig=ida-proto ====
__int64 sub_69EBB0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B07838) + 0.5); /*0x69ebcb*/
  dword_B0782C = result; /*0x69ebd0*/
  return result; /*0x69ebd6*/
}



// ==== 0x0069EBE0  sub_69EBE0  this=-  sig=ida-proto ====
int sub_69EBE0()
{
  word_B077D8 = 0; /*0x69ebe2*/
  word_B077DA = 0; /*0x69ebe8*/
  return 0; /*0x69ebee*/
}



// ==== 0x0069EBF0  sub_69EBF0  this=-  sig=ida-proto ====
int sub_69EBF0()
{
  g_OverlayTypeConfig = 0; /*0x69ebf2*/
  qword_B077FC = 0; /*0x69ebf7*/
  return 0; /*0x69ec01*/
}



// ==== 0x0069EC10  sub_69EC10  this=-  sig=ida-proto ====
int sub_69EC10()
{
  dword_B07828 = 0; /*0x69ec15*/
  dword_B07820 = 128; /*0x69ec1f*/
  dword_B07824 = 128; /*0x69ec24*/
  return 128; /*0x69ec29*/
}



// ==== 0x0069EC30  sub_69EC30  this=-  sig=ida-proto ====
int sub_69EC30()
{
  dword_B077C8 = 0; /*0x69ec32*/
  dword_B077CC = 0; /*0x69ec37*/
  dword_B077D0 = 0; /*0x69ec3c*/
  dword_B077D4 = 0; /*0x69ec41*/
  return 0; /*0x69ec46*/
}



// ==== 0x0069EC50  LocomotionClass::Process  this=ShipLocomotionClass  sig=csp ====
int __thiscall LocomotionClass::Process(LocomotionClass *this)
{
  int v2; // ecx
  int v3; // ecx

  LocomotionClass::Init(this); /*0x69ec53*/
  this->CurrentRamp = 0; /*0x69ec5d*/
  this->u32_8 = 0; /*0x69ec60*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x69ec63*/
  this->q02C = 0; /*0x69ec69*/
  this->SlopeTimer = v2; /*0x69ec6c*/
  this->q00C = 0; /*0x69ec6f*/
  this->Dest = g_OverlayTypeConfig; /*0x69ec78*/
  this->CurrentRamp = qword_B077FC; /*0x69ec80*/
  this->HeadToCoord = g_OverlayTypeConfig; /*0x69ec95*/
  this->Dirty = qword_B077FC; /*0x69ec9e*/
  v3 = HIDWORD(qword_B077FC); /*0x69eca1*/
  this->MovementSpeed = 0; /*0x69eca7*/
  this->SpeedAccum = 0; /*0x69ecaa*/
  this->q048 = v3; /*0x69ecad*/
  this->__pad_015 = 0; /*0x69ecb3*/
  this->TrackNumber = -1; /*0x69ecb6*/
  this->TrackIndex = -1; /*0x69ecb9*/
  this->IsOnShortTrack = 0; /*0x69ecbc*/
  this->IsTurretLockedDown = 0; /*0x69ecbf*/
  this->IsRotating = 0; /*0x69ecc2*/
  this->IsDriving = 0; /*0x69ecc5*/
  this->IsRocking = 0; /*0x69ecc8*/
  this->UnLocked = 1; /*0x69eccb*/
  this->ptr_68 = 0; /*0x69eccf*/
  *(_DWORD *)this->ILocomotion = &ShipLocomotionClass::`vftable'; /*0x69ecd2*/
  *(_DWORD *)&this->ILocomotion[4] = &ShipLocomotionClass::`vftable'; /*0x69ecd8*/
  this->vtable3 = &off_7F2D68; /*0x69ecdf*/
  return (int)this->ILocomotion; /*0x69ece8*/
}



// ==== 0x0069ED20  JumpjetLocomotionClass::LoadLocomotionFromStream_2  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::LoadLocomotionFromStream_2(JumpjetLocomotionClass *this, _DWORD *pad_0)
{
  _DWORD *v2; // ebp
  char *pad_50; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  JumpjetLocomotionClass *v8; // eax
  JumpjetLocomotionClass *v9; // edi

  v2 = pad_0; /*0x69ed21*/
  if ( !pad_0 ) /*0x69ed28*/
    return -2147467261; /*0x69ed31*/
  pad_50 = this->__pad_50; /*0x69ed3b*/
  if ( *(_DWORD *)this->__pad_50 ) /*0x69ed38*/
  {
    this = 0; /*0x69ed44*/
    v5 = StreamClass::Set2((StreamClass *)&this, pad_50); /*0x69ed55*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x69ed63*/
      WinAPI::Wrapper(v5); /*0x69ed66*/
    if ( !this ) /*0x69ed71*/
      return -2147467259; /*0x69ed7a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(this->LocomotionClass[0] + 12))(this, v2); /*0x69ed84*/
    if ( this ) /*0x69ed8c*/
    {
      (*(void (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 8))(this); /*0x69ed95*/
      return v6; /*0x69ed9c*/
    }
  }
  else
  {
    pad_0 = 0; /*0x69eda2*/
    if ( this == (JumpjetLocomotionClass *)24 ) /*0x69edac*/
      return -2147467259; /*0x69edac*/
    v7 = (**((int (__stdcall ***)(char *, void *, JumpjetLocomotionClass **))this - 6))( /*0x69edbd*/
           (char *)this - 24,
           &unk_818858,
           &this);
    if ( v7 >= 0 ) /*0x69edc1*/
    {
      v9 = this; /*0x69edd5*/
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x69eddd*/
      v8 = v9; /*0x69ede2*/
      pad_0 = v9->LocomotionClass; /*0x69ede5*/
    }
    else
    {
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x69edc7*/
      v8 = 0; /*0x69edcc*/
      pad_0 = 0; /*0x69edce*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x69edf3*/
      WinAPI::Wrapper(v7); /*0x69edf6*/
    if ( !v8 ) /*0x69ee01*/
      return -2147467259; /*0x69ee0a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(v8->LocomotionClass[0] + 12))(v8, v2); /*0x69ee14*/
    if ( pad_0 ) /*0x69ee1c*/
      (*(void (__stdcall **)(_DWORD *))(*pad_0 + 8))(pad_0); /*0x69ee21*/
  }
  return v6; /*0x69ed2a*/
}



// ==== 0x0069EE30  ShipLocomotionClass::QueryInterface  this=ShipLocomotionClass  sig=csp ====
int __stdcall ShipLocomotionClass::QueryInterface(ShipLocomotionClass *this, const void *a2, int *a3)
{
  int result; // eax
  char *pad_18; // eax

  result = LocomotionClass::QueryInterface((LocomotionClass *)this, a2, a3); /*0x69ee42*/
  if ( result == -2147467262 ) /*0x69ee4c*/
  {
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x69ee5b*/
    {
      if ( this ) /*0x69ee62*/
        pad_18 = this->__pad_18; /*0x69ee64*/
      else
        pad_18 = 0; /*0x69ee69*/
      *a3 = (int)pad_18; /*0x69ee6b*/
    }
    if ( *a3 ) /*0x69ee6e*/
    {
      (*(void (__stdcall **)(ShipLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 4))(this); /*0x69ee82*/
      return 0; /*0x69ee85*/
    }
    else
    {
      return -2147467262; /*0x69ee76*/
    }
  }
  return result; /*0x69ee74*/
}



// ==== 0x0069EE90  ShipLocomotionClass::BeginMove  this=ShipLocomotionClass  sig=csp ====
int __stdcall ShipLocomotionClass::BeginMove(ShipLocomotionClass *this, int *pStm)
{
  int *v2; // edi
  int v3; // ebx
  ILocomotion *Piggybackee; // eax
  LPVOID *p_Piggybackee; // esi

  v2 = pStm; /*0x69ee97*/
  v3 = SwizzleManager::SaveLoad((int *)this->LocomotionClass, pStm); /*0x69eea2*/
  if ( v3 < 0 ) /*0x69eea6*/
    return v3; /*0x69eea6*/
  if ( this ) /*0x69eeaa*/
  {
    this->Piggybackee = 0; /*0x69eeac*/
    *(_DWORD *)this->LocomotionClass = &ShipLocomotionClass::`vftable'; /*0x69eeb3*/
    *(_DWORD *)&this->LocomotionClass[4] = &ShipLocomotionClass::`vftable'; /*0x69eeb9*/
    *(_DWORD *)this->__pad_18 = &off_7F2D68; /*0x69eec0*/
  }
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(*v2 + 12))(v2, &pStm, 1, 0); /*0x69eed3*/
  if ( !(_BYTE)pStm ) /*0x69eedc*/
    return v3; /*0x69ef08*/
  Piggybackee = this->Piggybackee; /*0x69eede*/
  p_Piggybackee = (LPVOID *)&this->Piggybackee; /*0x69eee1*/
  if ( Piggybackee ) /*0x69eee6*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x69eeeb*/
  *p_Piggybackee = 0; /*0x69eef5*/
  return OleLoadFromStream((LPSTREAM)v2, &IID_ILocomotion, p_Piggybackee); /*0x69ef01*/
}



// ==== 0x0069EF10  ShipLocomotionClass::LoadFromStream  this=ShipLocomotionClass  sig=csp ====
int __stdcall ShipLocomotionClass::LoadFromStream(ShipLocomotionClass *this, int *pPStm, int a3)
{
  IStream *v3; // esi
  ShipLocomotionClass *v4; // edi
  int IPersistStream; // ebx
  int v6; // ecx
  ILocomotion *Piggybackee; // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v12; // edx

  v3 = (IStream *)pPStm; /*0x69ef16*/
  v4 = this; /*0x69ef1b*/
  IPersistStream = LoadIPersistStream((LocomotionClass *)this, pPStm, a3); /*0x69ef27*/
  if ( IPersistStream < 0 ) /*0x69ef2b*/
    return IPersistStream; /*0x69ef2b*/
  if ( !v4->Piggybackee ) /*0x69ef36*/
  {
    v12 = *(_DWORD *)v3->__pad_0; /*0x69efd3*/
    LOBYTE(a3) = 0; /*0x69efdf*/
    (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v12 + 16))(v3, &a3, 1, 0); /*0x69efe4*/
    return IPersistStream; /*0x69efe8*/
  }
  v6 = *(_DWORD *)v3->__pad_0; /*0x69ef3c*/
  LOBYTE(a3) = 1; /*0x69ef48*/
  (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v6 + 16))(v3, &a3, 1, 0); /*0x69ef4d*/
  Piggybackee = v4->Piggybackee; /*0x69ef50*/
  pPStm = 0; /*0x69ef53*/
  if ( Piggybackee ) /*0x69ef5d*/
  {
    v8 = (**(int (__stdcall ***)(ILocomotion *, void *, ShipLocomotionClass **))Piggybackee)( /*0x69ef6e*/
           Piggybackee,
           &unk_820270,
           &this);
    if ( v8 >= 0 ) /*0x69ef72*/
    {
      v9 = (int *)this; /*0x69ef8b*/
      if ( pPStm ) /*0x69ef91*/
        (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x69ef96*/
      pPStm = v9; /*0x69ef99*/
    }
    else
    {
      Function::Method_4B4D60((int *)&pPStm); /*0x69ef78*/
      pPStm = 0; /*0x69ef7d*/
    }
    if ( v8 < 0 && v8 != -2147467262 ) /*0x69efa7*/
      WinAPI::Wrapper(v8); /*0x69efaa*/
  }
  v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3); /*0x69efbb*/
  if ( pPStm ) /*0x69efc3*/
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x69efc8*/
  return v10; /*0x69efcd*/
}



// ==== 0x0069EFF0  JumpjetLocomotionClass::StubReturnZero_12  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_12(JumpjetLocomotionClass *this, int a2)
{
  if ( !a2 ) /*0x69eff6*/
    return -2147467261; /*0x69eff8*/
  if ( *(_DWORD *)this->__pad_50 ) /*0x69f004*/
    return -2147467259; /*0x69f02b*/
  *(_DWORD *)this->__pad_50 = a2; /*0x69f012*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x69f018*/
  return 0; /*0x69effd*/
}



// ==== 0x0069F040  JumpjetLocomotionClass::StubReturnZero_13  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_13(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int v3; // eax

  if ( !a2 ) /*0x69f046*/
    return -2147467261; /*0x69f048*/
  v3 = *(_DWORD *)this->__pad_50; /*0x69f054*/
  if ( !v3 ) /*0x69f059*/
    return 1; /*0x69f069*/
  *a2 = v3; /*0x69f05b*/
  *(_DWORD *)this->__pad_50 = 0; /*0x69f05d*/
  return 0; /*0x69f04d*/
}



// ==== 0x0069F080  JumpjetLocomotionClass::CheckPiggybackState_0  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::CheckPiggybackState_0(JumpjetLocomotionClass *this)
{
  return !(*(unsigned __int8 (__stdcall **)(char *))(*((_DWORD *)this - 5) + 16))((char *)this - 20) /*0x69f0b0*/
      && *(_DWORD *)this->__pad_50
      && this->unknown_4D
      && !*(_BYTE *)(*((_DWORD *)this - 3) + 1709);
}



// ==== 0x0069F0C0  ObjectClass::method_69F0C0  this=ObjectClass  sig=csp ====
void *__thiscall sub_69F0C0(ObjectClass *this, void *a2)
{
  ObjectClass *nextObject; // ebx
  int occupant; // edx
  int fallRate; // eax
  ObjectClass *v6; // edx
  double v7; // st7
  int v8; // ecx
  int v9; // eax
  const void *v10; // eax
  int referenceCount; // edx
  Matrix3x4 v13; // [esp+1Ch] [ebp-60h] BYREF
  char v14[48]; // [esp+4Ch] [ebp-30h] BYREF

  Matrix3x4::Identity(&v13); /*0x69f0cc*/
  nextObject = this->nextObject; /*0x69f0d1*/
  if ( nextObject ) /*0x69f0da*/
  {
    occupant = this->occupant; /*0x69f0e0*/
    fallRate = this->fallRate; /*0x69f0e3*/
    if ( occupant != -1 ) /*0x69f0ef*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - occupant >= fallRate ) /*0x69f0f7*/
        fallRate = 0; /*0x69f0fd*/
      else
        fallRate -= *(_DWORD *)&stru_A8EB00.?[416] - occupant; /*0x69f0f9*/
    }
    if ( (double)((int)nextObject - fallRate) / (double)(int)this->nextObject < 1.0 ) /*0x69f118*/
    {
      v6 = this->nextObject; /*0x69f11a*/
      if ( v6 ) /*0x69f123*/
      {
        v8 = this->occupant; /*0x69f12d*/
        v9 = this->fallRate; /*0x69f130*/
        if ( v8 != -1 ) /*0x69f136*/
        {
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v8 >= v9 ) /*0x69f13e*/
            v9 = 0; /*0x69f144*/
          else
            v9 -= *(_DWORD *)&stru_A8EB00.?[416] - v8; /*0x69f140*/
        }
        v7 = (double)((int)v6 - v9) / (double)(int)this->nextObject; /*0x69f150*/
      }
      else
      {
        v7 = 1.0; /*0x69f125*/
      }
      v10 = InterpolateVoxelAnimPose(v14, (int)this->?, this->?, v7); /*0x69f165*/
      goto LABEL_17; /*0x69f16a*/
    }
  }
  referenceCount = this->?; /*0x69f16c*/
  if ( referenceCount ) /*0x69f171*/
  {
    v10 = CopyAudioData(v14, referenceCount); /*0x69f177*/
LABEL_17:
    qmemcpy(&v13, v10, sizeof(v13)); /*0x69f187*/
  }
  qmemcpy(a2, &v13, 0x30u); /*0x69f189*/
  return a2; /*0x69f19a*/
}



// ==== 0x0069F1B0  ObjectClass::method_69F1B0  this=ObjectClass  sig=csp ====
double __thiscall sub_69F1B0(ObjectClass *this)
{
  ObjectClass *nextObject; // esi
  int occupant; // edx
  int fallRate; // eax

  nextObject = this->nextObject; /*0x69f1b4*/
  if ( !nextObject ) /*0x69f1bd*/
    return 1.0; /*0x69f1c9*/
  occupant = this->occupant; /*0x69f1ca*/
  fallRate = this->fallRate; /*0x69f1cd*/
  if ( occupant != -1 ) /*0x69f1d3*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - occupant < fallRate ) /*0x69f1df*/
      return (double)((int)nextObject - (fallRate - (*(_DWORD *)&stru_A8EB00.?[416] - occupant))) /*0x69f1f5*/
           / (double)(int)nextObject;
    fallRate = 0; /*0x69f1f6*/
  }
  return (double)((int)nextObject - fallRate) / (double)(int)nextObject; /*0x69f1c5*/
}



// ==== 0x0069F210  ObjectClass::method_69F210  this=ObjectClass  sig=csp ====
int __thiscall sub_69F210(_DWORD *this, int a2)
{
  int result; // eax
  _DWORD *v3; // ecx
  int v4; // [esp+4h] [ebp-Ch]

  result = this->referenceCount; /*0x69f210*/
  if ( a2 != result ) /*0x69f21c*/
  {
    this->NeedsSaveOrLink = result; /*0x69f21e*/
    this->referenceCount = a2; /*0x69f221*/
    v3 = this + 9; /*0x69f229*/
    *v3 = dword_A8ED84; /*0x69f232*/
    v3[1] = v4; /*0x69f23a*/
    v3[2] = 3; /*0x69f23d*/
    v3[3] = 3; /*0x69f240*/
    return v4; /*0x69f234*/
  }
  return result; /*0x69f244*/
}



// ==== 0x0069F250  ShipLocomotionClass::InitMovementState_0  this=ShipLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::InitMovementState_0(ShipLocomotionClass *this, int a2)
{
  int v3; // [esp+8h] [ebp-Ch]

  this->CurrentRamp = a2; /*0x69f25d*/
  *(_DWORD *)this->__pad_18 = a2; /*0x69f260*/
  this->PreviousRamp = *(_DWORD *)&stru_A8EB00.?[416]; /*0x69f26f*/
  this->SlopeTimer[0] = v3; /*0x69f275*/
  this->SlopeTimer[1] = 0; /*0x69f278*/
  this->SlopeTimer[2] = 0; /*0x69f27b*/
  return &this->PreviousRamp; /*0x69f27e*/
}



// ==== 0x0069F290  JumpjetLocomotionClass::StubReturnTrue_5  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::StubReturnTrue_5(JumpjetLocomotionClass *this)
{
  if ( LODWORD(this->Wobbles) != g_OverlayTypeConfig || *(_QWORD *)&this->Deviation != qword_B077FC ) /*0x69f2b1*/
    return 1; /*0x69f2c1*/
  return (*(_DWORD *)&this->__pad_39[3] != g_OverlayTypeConfig || *(_QWORD *)this->DestinationCoords != qword_B077FC) /*0x69f310*/
      && (*(_DWORD *)&this->__pad_39[3] != this->?->?[0] || this->DestinationCoords[0] != this->?->?[1]);
}



// ==== 0x0069F330  ShipLocomotionClass::StubReturnTrue_6  this=ShipLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::StubReturnTrue_6(ShipLocomotionClass *this)
{
  if ( (unsigned __int8)TimerClass::Active((int)this->?->?) ) /*0x69f33e*/
    return 1; /*0x69f347*/
  return (*(unsigned __int8 (__stdcall **)(ShipLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) /*0x69f389*/
      && (this->Dest[2] != g_OverlayTypeConfig || *(_QWORD *)this->HeadToCoord != qword_B077FC)
      && (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 334))(this->?) > 0;
}



// ==== 0x0069F3A0  JumpjetLocomotionClass::GetCoordinate_1  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetCoordinate_1(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int Deviation; // edx
  int v3; // eax

  Deviation = this->Deviation; /*0x69f3ad*/
  v3 = *(_DWORD *)&this->NoWobbles; /*0x69f3b0*/
  *a2 = LODWORD(this->Wobbles); /*0x69f3b5*/
  a2[1] = Deviation; /*0x69f3b7*/
  a2[2] = v3; /*0x69f3ba*/
  return a2; /*0x69f3bf*/
}



// ==== 0x0069F3D0  JumpjetLocomotionClass::GetRenderCoordinate_1  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetRenderCoordinate_1(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax
  FootClass *Owner; // edx
  int *location; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // esi

  if ( *(_DWORD *)&this->__pad_39[3] == g_OverlayTypeConfig && *(_QWORD *)this->DestinationCoords == qword_B077FC ) /*0x69f3ee*/
  {
    Owner = this->?; /*0x69f41b*/
    location = Owner->?; /*0x69f424*/
    v6 = Owner->?[0]; /*0x69f426*/
    v7 = Owner->?[1]; /*0x69f428*/
    v8 = location[2]; /*0x69f42b*/
    *a2 = v6; /*0x69f434*/
    a2[1] = v7; /*0x69f436*/
    a2[2] = v8; /*0x69f439*/
    return a2; /*0x69f42e*/
  }
  else
  {
    v2 = this->DestinationCoords[0]; /*0x69f404*/
    v3 = this->DestinationCoords[1]; /*0x69f407*/
    *a2 = *(_DWORD *)&this->__pad_39[3]; /*0x69f40c*/
    a2[1] = v2; /*0x69f40e*/
    a2[2] = v3; /*0x69f411*/
    return a2; /*0x69f414*/
  }
}



// ==== 0x0069F450  ShipLocomotionClass::ConvertCoordToCell_2  this=ShipLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::ConvertCoordToCell_2(
        ShipLocomotionClass *this,
        _DWORD *a2,
        unsigned int a3,
        unsigned int a4)
{
  _DWORD *result; // eax
  int v5; // ecx
  int v6; // edx

  result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 223))(this->?); /*0x69f45b*/
  if ( !(_BYTE)result ) /*0x69f463*/
  {
    result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 224))(this->?); /*0x69f46e*/
    if ( !(_BYTE)result ) /*0x69f476*/
    {
      result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 117))(this->?); /*0x69f481*/
      if ( !(_BYTE)result ) /*0x69f489*/
      {
        result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 118))(this->?); /*0x69f490*/
        if ( !(_BYTE)result ) /*0x69f498*/
        {
          result = a2; /*0x69f49a*/
          v5 = a3; /*0x69f49e*/
          v6 = a4; /*0x69f4a2*/
          this->SlopeTimer[3] = (int)a2; /*0x69f4a9*/
          this->Dest[0] = v5; /*0x69f4ac*/
          this->Dest[1] = v6; /*0x69f4af*/
          if ( result != (_DWORD *)g_OverlayTypeConfig || __PAIR64__(v6, v5) != qword_B077FC ) /*0x69f4c2*/
          {
            a2 = result; /*0x69f4cc*/
            a3 = v5; /*0x69f4d4*/
            a4 = v6; /*0x69f4de*/
            result = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2); /*0x69f4e2*/
            if ( (result[80] & 0x100) != 0 ) /*0x69f4f0*/
            {
              result = (_DWORD *)(dword_B0782C + this->Dest[1]); /*0x69f4fb*/
              this->Dest[1] = (int)result; /*0x69f4fd*/
            }
          }
        }
      }
    }
  }
  return result; /*0x69f500*/
}



// ==== 0x0069F510  ShipLocomotionClass::CheckWindowsErrorWrapper_1  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::CheckWindowsErrorWrapper_1(ShipLocomotionClass *this)
{
  FootClass *Owner; // eax
  _DWORD *vtable2; // esi
  double v3; // st7
  int result; // eax

  if ( this->Dest[2] != g_OverlayTypeConfig || *(_QWORD *)this->HeadToCoord != qword_B077FC ) /*0x69f52d*/
  {
    if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?) + 3220) ) /*0x69f546*/
    {
      Owner = this->?; /*0x69f550*/
      if ( !LOBYTE(Owner[1].?) ) /*0x69f553*/
      {
        vtable2 = Owner[1].?; /*0x69f55d*/
        if ( vtable2 ) /*0x69f565*/
        {
          do /*0x69f597*/
          {
            if ( !vtable2[413] ) /*0x69f567*/
              WinAPI::Wrapper(-2147467261); /*0x69f576*/
            (*(void (__stdcall **)(_DWORD))(*(_DWORD *)vtable2[413] + 72))(vtable2[413]); /*0x69f584*/
            vtable2 = (_DWORD *)vtable2[434]; /*0x69f587*/
          }
          while ( vtable2 && vtable2 != (_DWORD *)vtable2[434] ); /*0x69f597*/
        }
      }
    }
  }
  if ( *(double *)&this->SpeedAccum >= 0.300000011920929 ) /*0x69f5a7*/
    v3 = 0.300000011920929; /*0x69f5ae*/
  else
    v3 = *(double *)&this->SpeedAccum; /*0x69f5a9*/
  *(double *)&this->SpeedAccum = v3; /*0x69f5b4*/
  this->SlopeTimer[3] = g_OverlayTypeConfig; /*0x69f5c0*/
  result = qword_B077FC; /*0x69f5c2*/
  *(_QWORD *)this->Dest = qword_B077FC; /*0x69f5c7*/
  return result; /*0x69f5d3*/
}



// ==== 0x0069F5E0  ObjectClass::method_69F5E0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_69F5E0(ObjectClass *this)
{
  ObjectClass *nextObject; // edi
  double v2; // st7
  int fallRate; // eax
  int occupant; // esi
  float *vtable3; // ecx
  BOOL result; // eax

  nextObject = this->nextObject; /*0x69f5e4*/
  if ( nextObject ) /*0x69f5ed*/
  {
    fallRate = this->fallRate; /*0x69f5f7*/
    occupant = this->occupant; /*0x69f5fb*/
    if ( occupant != -1 ) /*0x69f601*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - occupant >= fallRate ) /*0x69f60d*/
        fallRate = 0; /*0x69f613*/
      else
        fallRate -= *(_DWORD *)&stru_A8EB00.?[416] - occupant; /*0x69f60f*/
    }
    v2 = (double)((int)nextObject - fallRate) / (double)(int)this->nextObject; /*0x69f620*/
  }
  else
  {
    v2 = 1.0; /*0x69f5ef*/
  }
  result = 0; /*0x69f65f*/
  if ( v2 == 1.0 ) /*0x69f630*/
  {
    vtable3 = (float *)this->?; /*0x69f632*/
    if ( fabs(vtable3[202]) < 0.005 && fabs(vtable3[203]) < 0.005 ) /*0x69f65d*/
      return 1; /*0x69f630*/
  }
  return result; /*0x69f664*/
}



// ==== 0x0069F670  JumpjetLocomotionClass::ComputeVoxelTransform2  this=JumpjetLocomotionClass  sig=csp ====
float *__stdcall JumpjetLocomotionClass::ComputeVoxelTransform2(JumpjetLocomotionClass *this, float *a2, _DWORD *a3)
{
  double v3; // st4
  double v4; // st5
  double v5; // st6
  float Accel; // edi
  double v7; // st7
  float Climb; // edx
  int Height; // eax
  FootClass *Owner; // ecx
  long double v11; // st7
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // eax
  FootClass *v18; // ecx
  float *v19; // eax
  float v20; // ebx
  Timeout *p_Climb; // ecx
  Timeout v22; // edi
  int v23; // eax
  double v24; // st7
  float v25; // edi
  const void *v26; // eax
  int v27; // esi
  float *v28; // eax
  float *v29; // edx
  float *v30; // ecx
  int v31; // ecx
  float *Transform; // eax
  float v33; // ebx
  float v34; // edx
  int v35; // eax
  float v36; // edx
  double v37; // st7
  float v38; // ecx
  int v39; // eax
  const void *v40; // eax
  int TurnRate; // esi
  float v43; // [esp+4h] [ebp-234h]
  float v44; // [esp+4h] [ebp-234h]
  float v45; // [esp+4h] [ebp-234h]
  float *v46; // [esp+4h] [ebp-234h]
  float v47; // [esp+14h] [ebp-224h]
  float v48; // [esp+18h] [ebp-220h]
  float v49; // [esp+1Ch] [ebp-21Ch]
  int v50; // [esp+1Ch] [ebp-21Ch]
  float v51; // [esp+20h] [ebp-218h]
  int v52; // [esp+20h] [ebp-218h]
  float v53; // [esp+24h] [ebp-214h]
  int v54; // [esp+24h] [ebp-214h]
  Matrix3x4 v55; // [esp+28h] [ebp-210h] BYREF
  Matrix3x4 v56; // [esp+58h] [ebp-1E0h] BYREF
  Matrix3x4 v57; // [esp+88h] [ebp-1B0h] BYREF
  Transform v58[12]; // [esp+B8h] [ebp-180h] BYREF
  Transform v59[12]; // [esp+E8h] [ebp-150h] BYREF
  float v60[12]; // [esp+118h] [ebp-120h] BYREF
  float v61[12]; // [esp+148h] [ebp-F0h] BYREF
  char v62[48]; // [esp+178h] [ebp-C0h] BYREF
  float v63[12]; // [esp+1A8h] [ebp-90h] BYREF
  _BYTE v64[48]; // [esp+1D8h] [ebp-60h] BYREF
  float v65[12]; // [esp+208h] [ebp-30h] BYREF

  Accel = this->Accel; /*0x69f682*/
  if ( Accel == 0.0 ) /*0x69f68b*/
  {
    v7 = 1.0; /*0x69f68d*/
  }
  else
  {
    Climb = this->Climb; /*0x69f695*/
    Height = this->Height; /*0x69f698*/
    if ( Climb != NAN ) /*0x69f69e*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(Climb) >= Height ) /*0x69f6aa*/
        Height = 0; /*0x69f6b0*/
      else
        Height -= *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(Climb); /*0x69f6ac*/
    }
    v7 = (double)(LODWORD(Accel) - Height) / (double)SLODWORD(this->Accel); /*0x69f6bc*/
  }
  if ( v7 == 1.0 ) /*0x69f6cb*/
  {
    Owner = this->?; /*0x69f6cd*/
    if ( fabs(*(float *)&Owner->?) < 0.005 && fabs(*(float *)&Owner->?) < 0.005 ) /*0x69f6f8*/
    {
      if ( a3 && *a3 != -1 ) /*0x69f9cf*/
      {
        v31 = *a3 << 6; /*0x69f9d1*/
        *a3 = v31; /*0x69f9d4*/
        *a3 = v31 + this->TurnRate; /*0x69f9db*/
      }
      Transform = Turret::GetTransform((LocomotionClass *)this, v60, a3); /*0x69f9e7*/
      Transform::Copy(v59, Transform); /*0x69f9f4*/
      Matrix3x4::Identity(&v55); /*0x69f9fd*/
      v33 = this->Accel; /*0x69fa02*/
      if ( v33 == 0.0 ) /*0x69fa0b*/
        goto LABEL_48; /*0x69fa0b*/
      v34 = this->Climb; /*0x69fa11*/
      v35 = this->Height; /*0x69fa14*/
      if ( v34 != NAN ) /*0x69fa20*/
      {
        if ( *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v34) >= v35 ) /*0x69fa28*/
          v35 = 0; /*0x69fa2e*/
        else
          v35 -= *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v34); /*0x69fa2a*/
      }
      if ( (double)(LODWORD(v33) - v35) / (double)SLODWORD(this->Accel) >= 1.0 ) /*0x69fa49*/
      {
LABEL_48:
        TurnRate = this->TurnRate; /*0x69faa0*/
        if ( !TurnRate ) /*0x69faa5*/
        {
LABEL_51:
          qmemcpy(v58, &v55, sizeof(v58)); /*0x69fad9*/
          v46 = (float *)v59; /*0x69fadb*/
          v29 = (float *)v58; /*0x69fadc*/
          v30 = (float *)v62; /*0x69fae3*/
          goto LABEL_52; /*0x69fae3*/
        }
        v40 = CopyAudioData((char *)v61, TurnRate); /*0x69fab0*/
      }
      else
      {
        v36 = this->Accel; /*0x69fa4b*/
        if ( v36 == 0.0 ) /*0x69fa54*/
        {
          v37 = 1.0; /*0x69fa56*/
        }
        else
        {
          v38 = this->Climb; /*0x69fa5e*/
          v39 = this->Height; /*0x69fa61*/
          if ( v38 != NAN ) /*0x69fa67*/
          {
            if ( *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v38) >= v39 ) /*0x69fa6f*/
              v39 = 0; /*0x69fa75*/
            else
              v39 -= *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v38); /*0x69fa71*/
          }
          v37 = (double)(LODWORD(v36) - v39) / (double)SLODWORD(this->Accel); /*0x69fa81*/
        }
        v40 = InterpolateVoxelAnimPose(v63, this->Speed, this->TurnRate, v37); /*0x69fa99*/
      }
      qmemcpy(&v55, v40, sizeof(v55)); /*0x69fac0*/
      goto LABEL_51; /*0x69fac0*/
    }
  }
  Matrix3x4::Identity(&v56); /*0x69f702*/
  Matrix3x4::Identity(&v57); /*0x69f70e*/
  v11 = *(double *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?) + 864); /*0x69f721*/
  v49 = v11; /*0x69f729*/
  v51 = *(double *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?) + 872); /*0x69f73f*/
  Math::ArcTan2(*(float *)&this->?->?); /*0x69f74c*/
  v47 = v3; /*0x69f754*/
  Math::SinCos(*(float *)&this->?->?); /*0x69f761*/
  v53 = v4; /*0x69f769*/
  Math::ArcTan2(*(float *)&this->?->?); /*0x69f776*/
  v48 = v5; /*0x69f77e*/
  Math::SinCos(*(float *)&this->?->?); /*0x69f78b*/
  LOWORD(v12) = Math::RoundToInt(fabs(v11) * v49 + fabs(v53) * v51); /*0x69f7a5*/
  v54 = v12; /*0x69f7b2*/
  LOWORD(v13) = Math::RoundToInt(v47 * v51); /*0x69f7b6*/
  LOWORD(v14) = Math::RoundToInt(v51 - (double)v13); /*0x69f7c7*/
  v15 = v14; /*0x69f7d4*/
  v52 = v14; /*0x69f7d6*/
  LOWORD(v16) = Math::RoundToInt(v48 * v49); /*0x69f7da*/
  LOWORD(v17) = Math::RoundToInt(v49 - (double)v16); /*0x69f7eb*/
  v18 = this->?; /*0x69f7f0*/
  v50 = v17; /*0x69f7f5*/
  if ( *(float *)&v18->? < 0.0 ) /*0x69f80a*/
    v52 = -v15; /*0x69f80e*/
  if ( *(float *)&v18->? > 0.0 ) /*0x69f823*/
    v50 = -v17; /*0x69f827*/
  v43 = (float)v54; /*0x69f834*/
  Matrix3x3::ApplyCol1(v56.m_Data, v43); /*0x69f837*/
  v44 = (float)v52; /*0x69f848*/
  Matrix3x4::Translate(v57.m_Data, v44); /*0x69f84b*/
  v45 = (float)v50; /*0x69f85c*/
  Matrix3x3::ApplyCol0(v57.m_Data, v45); /*0x69f85f*/
  Matrix3x3::RotateX(v57.m_Data, *(float *)&this->?->?); /*0x69f875*/
  Matrix3D::RotateZ(v57.m_Data, *(float *)&this->?->?); /*0x69f88b*/
  if ( a3 ) /*0x69f895*/
    *a3 = -1; /*0x69f897*/
  v19 = Turret::GetTransform((LocomotionClass *)this, v65, a3); /*0x69f8a7*/
  Transform::Copy(v58, v19); /*0x69f8b4*/
  Matrix3x4::Identity(&v55); /*0x69f8bd*/
  v20 = this->Accel; /*0x69f8c2*/
  p_Climb = (Timeout *)&this->Climb; /*0x69f8c5*/
  if ( v20 != 0.0 ) /*0x69f8ce*/
  {
    v22 = *p_Climb; /*0x69f8d0*/
    v23 = this->Height; /*0x69f8d2*/
    if ( *p_Climb != -1 ) /*0x69f8d8*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - *(_DWORD *)&v22 >= v23 ) /*0x69f8e4*/
        v23 = 0; /*0x69f8ea*/
      else
        v23 -= *(_DWORD *)&stru_A8EB00.?[416] - *(_DWORD *)&v22; /*0x69f8e6*/
    }
    if ( (double)(LODWORD(v20) - v23) / (double)SLODWORD(this->Accel) < 1.0 ) /*0x69f905*/
    {
      if ( LODWORD(this->Accel) ) /*0x69f907*/
      {
        v25 = this->Accel; /*0x69f916*/
        v24 = (double)(LODWORD(v25) - Timeout::GetRemaining(p_Climb)) / (double)SLODWORD(v25); /*0x69f92c*/
      }
      else
      {
        v24 = 1.0; /*0x69f90e*/
      }
      v26 = InterpolateVoxelAnimPose(v64, this->Speed, this->TurnRate, v24); /*0x69f944*/
      goto LABEL_29; /*0x69f949*/
    }
  }
  v27 = this->TurnRate; /*0x69f94b*/
  if ( v27 ) /*0x69f950*/
  {
    v26 = CopyAudioData(v62, v27); /*0x69f95b*/
LABEL_29:
    qmemcpy(&v55, v26, sizeof(v55)); /*0x69f96b*/
  }
  qmemcpy(v59, &v55, sizeof(v59)); /*0x69f984*/
  v46 = (float *)&v57; /*0x69f994*/
  v28 = MultiplyMatrix3x4(v61, (float *)v56.m_Data, (float *)&v59[0].Transform_field_00); /*0x69f9a2*/
  v29 = MultiplyMatrix3x4(v63, v28, (float *)&v58[0].Transform_field_00); /*0x69f9b5*/
  v30 = v60; /*0x69f9b7*/
LABEL_52:
  qmemcpy(&v56, MultiplyMatrix3x4(v30, v29, v46), sizeof(v56)); /*0x69faea*/
  qmemcpy(a2, &v56, 0x30u); /*0x69fb0a*/
  return a2; /*0x69fb0c*/
}



// ==== 0x0069FB20  ShipLocomotionClass::ComputeAudio3DRotation_1  this=ShipLocomotionClass  sig=csp ====
float *__stdcall JumpjetLocomotionClass::ComputeAudio3DRotation_1(ShipLocomotionClass *this, float *a2, _DWORD *a3)
{
  int v3; // edi
  double v4; // st7
  int PreviousRamp; // edx
  int v6; // eax
  FootClass *Owner; // edx
  float v9[12]; // [esp+Ch] [ebp-30h] BYREF

  v3 = this->SlopeTimer[2]; /*0x69fb29*/
  if ( v3 ) /*0x69fb32*/
  {
    PreviousRamp = this->PreviousRamp; /*0x69fb3c*/
    v6 = this->SlopeTimer[1]; /*0x69fb3f*/
    if ( PreviousRamp != -1 ) /*0x69fb45*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - PreviousRamp >= v6 ) /*0x69fb51*/
        v6 = 0; /*0x69fb57*/
      else
        v6 -= *(_DWORD *)&stru_A8EB00.?[416] - PreviousRamp; /*0x69fb53*/
    }
    v4 = (double)(v3 - v6) / (double)this->SlopeTimer[2]; /*0x69fb63*/
  }
  else
  {
    v4 = 1.0; /*0x69fb34*/
  }
  if ( v4 != 1.0 || (Owner = this->?, fabs(*(float *)&Owner->?) >= 0.005) || fabs(*(float *)&Owner->?) >= 0.005 ) /*0x69fba3*/
  {
    if ( a3 ) /*0x69fba7*/
      *a3 = -1; /*0x69fba9*/
  }
  qmemcpy(a2, Audio3D::ComputeRotation((IUnknown *)this, v9, a3), 0x30u); /*0x69fbc8*/
  return a2; /*0x69fbca*/
}



// ==== 0x0069FBE0  ShipLocomotionClass::DispatchVirtualCall_6  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchVirtualCall_6(ShipLocomotionClass *this)
{
  int v1; // edi
  int v2; // eax

  v1 = *(_DWORD *)this->LocomotionClass; /*0x69fbe9*/
  v2 = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 111))(this->?); /*0x69fbed*/
  return (*(int (__stdcall **)(ShipLocomotionClass *, _DWORD))(v1 + 124))(this, *(unsigned __int8 *)(v2 + 284)); /*0x69fc00*/
}



// ==== 0x0069FC10  ShipLocomotionClass::ProcessImpact  this=ShipLocomotionClass  sig=csp ====
char __stdcall BulletTypeClass::ProcessImpact(ShipLocomotionClass *this)
{
  ShipLocomotionClass *v1; // esi
  char *v2; // edi
  int v3; // eax
  int v4; // ecx
  AbstractClass *movementDestination; // ecx
  FootClass *v6; // ecx
  AbstractClass *v7; // ebp
  _WORD *v8; // eax
  FootClass *v9; // ecx
  FootClass *Owner; // ecx
  FootClass *v12; // ecx
  AnimClass *v13; // eax
  int *location; // ecx
  FootClass *v15; // ecx
  FootClass *v16; // eax
  FootClass *v17; // eax
  AbstractClass *v18; // ecx
  _DWORD *v19; // eax
  FootClass *v20; // ecx
  int v21; // ecx
  char v22; // [esp-4h] [ebp-24h]
  int v23; // [esp+10h] [ebp-10h] BYREF
  int v24; // [esp+14h] [ebp-Ch]
  int v25; // [esp+18h] [ebp-8h]

  v1 = this; /*0x69fc16*/
  v2 = (char *)this - 4; /*0x69fc28*/
  v3 = *(unsigned __int8 *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 111))(this->?) + 284); /*0x69fc31*/
  v4 = *((_DWORD *)v2 + 7); /*0x69fc33*/
  if ( v3 != v4 ) /*0x69fc38*/
  {
    *((_DWORD *)v2 + 8) = v4; /*0x69fc3a*/
    *((_DWORD *)v2 + 7) = v3; /*0x69fc43*/
    Timer::Start((Timer *)&v23, 3); /*0x69fc46*/
    *((_DWORD *)v2 + 9) = v23; /*0x69fc57*/
    *((_DWORD *)v2 + 10) = v24; /*0x69fc5d*/
    *((_DWORD *)v2 + 11) = v25; /*0x69fc64*/
    *((_DWORD *)v2 + 12) = 3; /*0x69fc67*/
  }
  if ( v1->MovementSpeed[1] == -1 || !HIBYTE(v1->TrackIndex) ) /*0x69fc7a*/
  {
    movementDestination = v1->?->movementDestination; /*0x69fd16*/
    if ( movementDestination /*0x69fd54*/
      && (*((int (__thiscall **)(AbstractClass *))movementDestination->vtable0 + 11))(movementDestination) == 11
      && (v6 = v1->?,
          v7 = v6->movementDestination + 1,
          v8 = (_WORD *)(*((int (__thiscall **)(FootClass *, ShipLocomotionClass **))v6->TechnoClass + 110))(v6, &this),
          *v8 == LOWORD(v7->vtable0))
      && v8[1] == HIWORD(v7->vtable0) )
    {
      v9 = (FootClass *)*((_DWORD *)v2 + 3); /*0x69fd56*/
      if ( !*(_DWORD *)&v9->__pad_58C[12] ) /*0x69fd59*/
        goto LABEL_20; /*0x69fd5f*/
    }
    else
    {
      Owner = v1->?; /*0x69fd7f*/
      if ( Owner->? != 5 /*0x69fddc*/
        || HIBYTE(v1->TrackIndex)
        || v1->SlopeTimer[3] == g_OverlayTypeConfig && *(_QWORD *)v1->Dest == qword_B077FC
        || Owner->?[0] != v1->SlopeTimer[3]
        || Owner->?[1] != v1->Dest[0]
        || Owner->?[2] != v1->Dest[1] )
      {
        if ( (unsigned __int8)TimerClass::Active((int)Owner->?) ) /*0x69fe28*/
        {
          BYTE2(v1->TrackIndex) = 1; /*0x69fe35*/
          goto LABEL_32; /*0x69fe35*/
        }
        if ( BYTE2(v1->TrackIndex) ) /*0x69ff5d*/
        {
          BYTE2(v1->TrackIndex) = 0; /*0x69ff62*/
          (*((void (__thiscall **)(FootClass *, _DWORD))v1->?->TechnoClass + 99))(v1->?, 0); /*0x69ff6b*/
          v16 = v1->?; /*0x69ff71*/
          if ( !v16->? || v16->? || v16->? ) /*0x69ff84*/
            return 0; /*0x69ff95*/
        }
        if ( (*((int (__thiscall **)(FootClass *))v1->?->TechnoClass + 97))(v1->?) == 5 /*0x69ffc4*/
          && !(*(unsigned __int8 (__stdcall **)(ShipLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 16))(v1)
          || (*((int (__thiscall **)(FootClass *))v1->?->TechnoClass + 97))(v1->?) == 16 )
        {
          goto LABEL_32; /*0x69ffc4*/
        }
        if ( !(*(unsigned __int8 (__stdcall **)(ShipLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 16))(v1) ) /*0x69ffcd*/
        {
          v17 = v1->?; /*0x69ffd8*/
          if ( v17->pathDirections[0] == -1 ) /*0x69ffe1*/
          {
            if ( v17->? ) /*0x69ffe7*/
            {
              if ( *((_DWORD *)v2 + 16) != g_OverlayTypeConfig || *(_QWORD *)(v2 + 68) != qword_B077FC ) /*0x6a0006*/
              {
                *((_DWORD *)v2 + 16) = g_OverlayTypeConfig; /*0x6a0015*/
                *(_QWORD *)(v2 + 68) = qword_B077FC; /*0x6a001d*/
                v2[99] = 0; /*0x6a0029*/
              }
              v1->SpeedAccum = 0; /*0x6a002c*/
              v1->MovementSpeed[0] = 0; /*0x6a002f*/
            }
            else
            {
              v18 = v17->movementDestination; /*0x6a0037*/
              if ( v18 ) /*0x6a003f*/
              {
                v19 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, int *, FootClass *))v18->vtable0 + 19))( /*0x6a004d*/
                                  v18,
                                  &v23,
                                  v1->?);
                (*(void (__stdcall **)(ShipLocomotionClass *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v1->LocomotionClass /*0x6a0069*/
                                                                                     + 68))(
                  v1,
                  *v19,
                  v19[1],
                  v19[2]);
              }
            }
            goto LABEL_32; /*0x6a0032*/
          }
        }
        v20 = v1->?; /*0x6a0074*/
        if ( v20->? /*0x6a00ab*/
          && (*((int (__thiscall **)(FootClass *))v20->TechnoClass + 97))(v20) != 7
          && (*(unsigned __int8 (__stdcall **)(ShipLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 16))(v1)
          && !(*((unsigned __int8 (__thiscall **)(FootClass *, int *))v1->?->TechnoClass + 179))(
                v1->?,
                &v1->SlopeTimer[3]) )
        {
          if ( *((_DWORD *)v2 + 16) != g_OverlayTypeConfig || *(_QWORD *)(v2 + 68) != qword_B077FC ) /*0x6a00cc*/
          {
            *((_DWORD *)v2 + 16) = g_OverlayTypeConfig; /*0x6a00db*/
            *(_QWORD *)(v2 + 68) = qword_B077FC; /*0x6a00e3*/
            v2[99] = 0; /*0x6a00ef*/
          }
          v21 = *((_DWORD *)v2 + 3); /*0x6a00f2*/
          if ( *(_DWORD *)(v21 + 1432) ) /*0x6a00f5*/
          {
            FootClass::ClearPathIndex((FootClass *)v21); /*0x6a010d*/
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)v2 + 3) + 1156))( /*0x6a011a*/
                   *((_DWORD *)v2 + 3),
                   0,
                   1) )
            {
              return 0; /*0x6a0131*/
            }
          }
          else
          {
            (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v21 + 1152))(v21, 0, 1); /*0x6a0102*/
          }
          goto LABEL_32; /*0x6a0108*/
        }
        LOBYTE(this) = 0; /*0x6a013e*/
        WalkLocomotion::Update((int)&v1[-1].Piggybackee, &this, 1, 0); /*0x6a0142*/
        if ( (_BYTE)this ) /*0x6a014b*/
          return 0; /*0x6a0156*/
        if ( !v1->?->? ) /*0x6a015c*/
          return 0; /*0x6a016d*/
        v22 = 0; /*0x6a0170*/
        goto LABEL_81; /*0x6a0170*/
      }
      v9 = (FootClass *)*((_DWORD *)v2 + 3); /*0x69fdde*/
      if ( !*(_DWORD *)&v9->__pad_58C[12] ) /*0x69fde7*/
      {
LABEL_20:
        (*((void (__thiscall **)(FootClass *, _DWORD, int))v9->TechnoClass + 288))(v9, 0, 1); /*0x69fd65*/
        return 0; /*0x69fd79*/
      }
    }
    FootClass::ClearPathIndex(v9); /*0x69fe00*/
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)v2 + 3) + 1156))(*((_DWORD *)v2 + 3), 0, 1); /*0x69fe0d*/
    return 0; /*0x69fe1c*/
  }
  if ( WalkLocomotion::ProcessCollision((int)&v1[-1].Piggybackee, 0) || !v1->?->? ) /*0x69fc96*/
    return 0; /*0x69fc9c*/
  if ( v1->MovementSpeed[1] != -1 /*0x69fcd4*/
    || !(*(unsigned __int8 (__stdcall **)(ShipLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 16))(v1)
    && v1->?->pathDirections[0] == -1
    || (*((int (__thiscall **)(FootClass *))v1->?->TechnoClass + 11))(v1->?) == 1 && BYTE1(v1->?[1].?) )
  {
    goto LABEL_32; /*0x69fcda*/
  }
  LOBYTE(this) = 0; /*0x69fcea*/
  WalkLocomotion::Update((int)&v1[-1].Piggybackee, &this, 1, 0); /*0x69fcee*/
  if ( (_BYTE)this || !v1->?->? ) /*0x69fd00*/
    return 0; /*0x69fd06*/
  v22 = 1; /*0x69fd0c*/
LABEL_81:
  WalkLocomotion::ProcessCollision((int)&v1[-1].Piggybackee, v22); /*0x6a0171*/
  if ( !v1->?->? ) /*0x6a017b*/
    return 0; /*0x6a018a*/
LABEL_32:
  if ( (*(unsigned __int8 (__stdcall **)(ShipLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 128))(v1) ) /*0x69fe3c*/
  {
    if ( !(*(_DWORD *)&stru_A8EB00.?[416] % 8) /*0x69fe6e*/
      && !*(_BYTE *)((*((int (__thiscall **)(FootClass *))v1->?->TechnoClass + 33))(v1->?) + 3433) )
    {
      v12 = v1->?; /*0x69fe76*/
      if ( !v12->? && *(_DWORD *)((*((int (__thiscall **)(FootClass *))v12->TechnoClass + 111))(v12) + 236) == 2 ) /*0x69fe90*/
      {
        if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 148) ) /*0x69fe97*/
        {
          v13 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x69fea4*/
          if ( v13 ) /*0x69feae*/
          {
            location = v1->?->?; /*0x69feb4*/
            v23 = *location; /*0x69fec5*/
            v24 = location[1]; /*0x69fecc*/
            v25 = location[2]; /*0x69fed8*/
            AnimClass::ctor( /*0x69feeb*/
              v13,
              *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 148),
              &v23,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
        }
      }
    }
  }
  if ( v1->SlopeTimer[3] == g_OverlayTypeConfig /*0x69ff1e*/
    && v1->Dest[0] == (_DWORD)qword_B077FC
    && *(_QWORD *)&v1->Dest[1] == __PAIR64__(g_OverlayTypeConfig, HIDWORD(qword_B077FC))
    && *(_QWORD *)v1->HeadToCoord == qword_B077FC )
  {
    v15 = v1->?; /*0x69ff25*/
    if ( v15->pathDirections[0] == -1 && *(double *)v15->currentSpeed_percentage > 0.0 ) /*0x69ff41*/
      (*((void (__thiscall **)(FootClass *, _DWORD, _DWORD))v15->TechnoClass + 337))(v15, 0, 0); /*0x69ff47*/
  }
  return (*(char (__stdcall **)(ShipLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 16))(v1); /*0x69fd72*/
}



// ==== 0x00690150  nullsub_227  this=-  sig=ida-proto ====
void __cdecl nullsub_227()
{
  ; /*0x690150*/
}



// ==== 0x00690160  Screen::TransitionLoop  this=Screen  sig=csp ====
int __thiscall Screen::TransitionLoop(Screen *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // esi
  int i; // esi
  int v8; // ecx
  int j; // esi
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  int result; // eax
  bool v14; // cc
  int Ticks; // [esp+24h] [ebp-48h]
  int v16; // [esp+2Ch] [ebp-40h]
  _DWORD v17[4]; // [esp+3Ch] [ebp-30h] BYREF
  struct tagRECT Rect; // [esp+4Ch] [ebp-20h] BYREF
  Rect v19; // [esp+5Ch] [ebp-10h] BYREF

  Ticks = Timer::GetTicks(); /*0x690178*/
  v16 = 1; /*0x69017c*/
  do
  {
    Screen::CleanupTransitionObjects(this); /*0x690189*/
    GetClientRect(g_hWnd, &Rect); /*0x69019a*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x6901ab*/
    v3 = *(_DWORD *)this; /*0x6901b1*/
    v4 = this->u32_4; /*0x6901c4*/
    v17[0] = *(_DWORD *)this + Rect.left; /*0x6901c7*/
    v17[1] = v4 + Rect.top; /*0x6901d7*/
    v17[2] = 640; /*0x6901db*/
    v17[3] = 400; /*0x6901e3*/
    Rect::Set(&v19, v3, v4, 640, 400); /*0x6901eb*/
    if ( stru_887598.lineTrailer ) /*0x6901f8*/
      (*(void (__thiscall **)(void *, ObjectClass *, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 60))( /*0x690205*/
        stru_887598.lineTrailer,
        g_DSurface_Hidden,
        0);
    (*((void (__thiscall **)(DSurface *, _DWORD *, ObjectClass *, Rect *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 /*0x690225*/
     + 2))(
      g_DSurface_Primary,
      v17,
      g_DSurface_Hidden,
      &v19,
      0,
      1);
    if ( stru_887598.lineTrailer ) /*0x690230*/
      (*(void (__thiscall **)(void *, ObjectClass *, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 64))( /*0x69023d*/
        stru_887598.lineTrailer,
        g_DSurface_Hidden,
        0);
    do
    {
      Event::Dispatch(); /*0x690240*/
      MessageLoop(); /*0x690245*/
      if ( !stru_A8EB00.?[412] )
      {
        if ( Ticks == -1
          || ((v5 = Timer::GetTicks() - Ticks, v5 >= v16) ? (v6 = 0) : (v6 = v16 - v5), v16 = v6,
                                                                                        stru_A8EB00.?[412] != 1) )
        {
          for ( i = 0; i < this->u32_2C; ++i ) /*0x690292*/
          {
            v8 = *(_DWORD *)(this->q008 + 4 * i); /*0x690297*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8); /*0x69029c*/
          }
          while ( !stru_A8EB00.?[412] ) /*0x6902ae*/
          {
            Sleep(0x1F4u); /*0x6902b5*/
            MessageLoop(); /*0x6902b7*/
          }
          for ( j = 0; j < this->u32_2C; ++j ) /*0x6902cc*/
          {
            v10 = *(_DWORD *)(this->q008 + 4 * j); /*0x6902d1*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x6902d6*/
          }
        }
        Ticks = Timer::GetTicks(); /*0x6902f0*/
      }
      Sleep(0); /*0x6902f6*/
      v11 = v16; /*0x6902fc*/
      if ( Ticks != -1 ) /*0x690302*/
      {
        v12 = Timer::GetTicks() - Ticks; /*0x69030d*/
        if ( v12 >= v16 ) /*0x690313*/
          break; /*0x690313*/
        v11 = v16 - v12; /*0x690315*/
      }
    }
    while ( v11 > 0 );
    Ticks = Timer::GetTicks(); /*0x69031f*/
    result = a2 - 1; /*0x690341*/
    v14 = a2 - 1 <= 0; /*0x690346*/
    v16 = 1; /*0x690348*/
    --a2; /*0x69034c*/
  }
  while ( !v14 );
  return result; /*0x690356*/
}



// ==== 0x00690360  Screen::CleanupTransitionObjects  this=Screen  sig=csp ====
int __thiscall Screen::CleanupTransitionObjects(Screen *this)
{
  int result; // eax
  int i; // edi
  int v4; // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax

  byte_B05584 = 0; /*0x69036b*/
  if ( g_LoadScreenFlag ) /*0x690372*/
  {
    g_LoadScreenFlag = 0; /*0x69037a*/
    (*((void (__thiscall **)(ObjectClass *, _DWORD))g_DSurface_Hidden->AbstractClass + 6))(g_DSurface_Hidden, 0); /*0x690385*/
    (*((void (__thiscall **)(ObjectClass *, DSurface *, _DWORD, int))g_DSurface_Hidden->AbstractClass + 1))( /*0x69039a*/
      g_DSurface_Hidden,
      DSurface_Alternate,
      0,
      1);
  }
  result = this->u32_2C; /*0x69039d*/
  for ( i = 0; i < result; ++i ) /*0x6903a4*/
  {
    v4 = *(_DWORD *)(this->q008 + 4 * i); /*0x6903ad*/
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 12))(v4, this->q008) == 1 ) /*0x6903b7*/
    {
      v5 = *(void (__thiscall ****)(_DWORD, int))(this->q008 + 4 * i); /*0x6903bc*/
      if ( v5 ) /*0x6903c1*/
        (**v5)(v5, 1); /*0x6903c7*/
      v6 = this->u32_2C; /*0x6903c9*/
      if ( i < v6 ) /*0x6903ce*/
      {
        v7 = v6 - 1; /*0x6903d0*/
        v8 = i; /*0x6903d3*/
        for ( this->u32_2C = v7; /*0x6903da*/
              v8 < this->u32_2C;
              *(_DWORD *)(this->q008 + 4 * v8 - 4) = *(_DWORD *)(this->q008 + 4 * v8) )
        {
          ++v8; /*0x6903df*/
        }
      }
    }
    result = this->u32_2C; /*0x6903ee*/
  }
  return result; /*0x6903f6*/
}



// ==== 0x00690400  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_690400(ObjectClass *this)
{
  char *vtable0; // eax
  char *vtable1; // esi
  int result; // eax
  _DWORD v5[4]; // [esp+8h] [ebp-30h] BYREF
  _DWORD v6[4]; // [esp+18h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+28h] [ebp-10h] BYREF

  GetClientRect(g_hWnd, &Rect); /*0x690412*/
  ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x690423*/
  vtable0 = (char *)this->AbstractClass; /*0x690429*/
  vtable1 = (char *)this->?; /*0x69042f*/
  v5[0] = vtable0; /*0x690432*/
  v6[0] = &vtable0[Rect.left]; /*0x69043d*/
  v5[1] = vtable1; /*0x690441*/
  v6[3] = 400; /*0x69044d*/
  v5[3] = 400; /*0x690451*/
  v6[1] = &vtable1[Rect.top]; /*0x69045b*/
  v6[2] = 640; /*0x690467*/
  v5[2] = 640; /*0x69046b*/
  if ( stru_887598.lineTrailer ) /*0x69046f*/
    (*(void (__thiscall **)(void *, ObjectClass *, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 60))( /*0x69047c*/
      stru_887598.lineTrailer,
      g_DSurface_Hidden,
      0);
  result = (*((int (__thiscall **)(DSurface *, _DWORD *, ObjectClass *, _DWORD *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 /*0x69049c*/
            + 2))(
             g_DSurface_Primary,
             v6,
             g_DSurface_Hidden,
             v5,
             0,
             1);
  if ( stru_887598.lineTrailer ) /*0x6904a7*/
    return (*(int (__thiscall **)(void *, ObjectClass *, _DWORD))(*(_DWORD *)stru_887598.lineTrailer + 64))( /*0x6904b4*/
             stru_887598.lineTrailer,
             g_DSurface_Hidden,
             0);
  return result; /*0x6904b7*/
}



// ==== 0x00690530  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_690530(ObjectClass *this, void *a2, int a3)
{
  int i; // esi

  if ( a2 ) /*0x69053b*/
  {
    if ( Audio::IsSoundEnabled() ) /*0x69053d*/
    {
      for ( i = 0; i < this->ambientSoundController[2]; ++i ) /*0x69054d*/
      {
        if ( !_strcmpi((char *)a2, **((char ***)&this->attachedBomb->AbstractClass + i)) ) /*0x690559*/
          break; /*0x690563*/
      }
    }
  }
}



// ==== 0x006905F0  ScoreFontClass::method_6905F0  this=ScoreFontClass  sig=csp ====
char *__thiscall sub_6905F0(ScoreFontClass *this)
{
  void *ScoreFontClass_field_0x0C; // eax
  char *result; // eax

  ScoreFontClass_field_0x0C = (void *)this->ScoreFontClass_field_0x0C; /*0x6905f6*/
  *(_DWORD *)this->__pad_0 = &ScoreFontClass::`vftable'; /*0x6905f9*/
  if ( ScoreFontClass_field_0x0C && this->q004 == 1 ) /*0x690607*/
  {
    __3_YAXPAX_Z(ScoreFontClass_field_0x0C); /*0x69060a*/
    this->ScoreFontClass_field_0x0C = 0; /*0x690612*/
    this->q004 = 0; /*0x690615*/
  }
  result = (char *)--dword_B0558C; /*0x69061d*/
  if ( !dword_B0558C ) /*0x690623*/
  {
    result = (char *)&byte_B05594; /*0x690625*/
    do /*0x690637*/
    {
      *((_DWORD *)result - 1) = 0; /*0x69062a*/
      *result = 0; /*0x69062d*/
      result += 8; /*0x69062f*/
    }
    while ( (int)result < (int)byte_B055AC ); /*0x690637*/
  }
  return result; /*0x690639*/
}



// ==== 0x00690640  ScoreScreen::LoadAudio  this=ScoreScreen  sig=csp ====
int ScoreScreen_LoadAudio()
{
  int result; // eax
  _DWORD v1[22]; // [esp+18h] [ebp-6Ch] BYREF
  _BYTE v2[12]; // [esp+70h] [ebp-14h] BYREF
  int v3; // [esp+7Ch] [ebp-8h]

  result = Audio::IsSoundEnabled(); /*0x690643*/
  if ( result ) /*0x69064a*/
  {
    CCFileClass::Construct3((int)v1); /*0x690654*/
    dword_B05590 = SearchMIXFile(aText1Aud, 0); /*0x690667*/
    if ( !dword_B05590 ) /*0x69066c*/
    {
      (*(void (__thiscall **)(_DWORD *, char *))(v1[0] + 8))(v1, aText1Aud); /*0x69067b*/
      (*(void (__thiscall **)(_DWORD *, int))(v1[0] + 28))(v1, 1); /*0x690688*/
      dword_B05590 = (int)CCFileClass::ReadEntireFile(v1); /*0x690698*/
      byte_B05594 = 1; /*0x69069d*/
      CCFileClass::Reset(v1); /*0x6906a4*/
      Debug::Log(); /*0x6906ae*/
    }
    dword_B05598 = SearchMIXFile(aText2Aud, 0); /*0x6906c4*/
    if ( !dword_B05598 ) /*0x6906c9*/
    {
      (*(void (__thiscall **)(_DWORD *, char *))(v1[0] + 8))(v1, aText2Aud); /*0x6906d8*/
      (*(void (__thiscall **)(_DWORD *, int))(v1[0] + 28))(v1, 1); /*0x6906e5*/
      dword_B05598 = (int)CCFileClass::ReadEntireFile(v1); /*0x6906f5*/
      byte_B0559C = 1; /*0x6906fa*/
      CCFileClass::Reset(v1); /*0x690701*/
      Debug::Log(); /*0x69070b*/
    }
    dword_B055A0 = SearchMIXFile(aText3Aud, 0); /*0x690721*/
    if ( !dword_B055A0 ) /*0x690726*/
    {
      (*(void (__thiscall **)(_DWORD *, char *))(v1[0] + 8))(v1, aText3Aud); /*0x690735*/
      (*(void (__thiscall **)(_DWORD *, int))(v1[0] + 28))(v1, 1); /*0x690742*/
      dword_B055A0 = (int)CCFileClass::ReadEntireFile(v1); /*0x690752*/
      byte_B055A4 = 1; /*0x690757*/
      CCFileClass::Reset(v1); /*0x69075e*/
      Debug::Log(); /*0x690768*/
    }
    v1[0] = &CCFileClass::`vftable'; /*0x690774*/
    v3 = 0; /*0x69077c*/
    Vector::Clear((int)v2); /*0x690784*/
    v1[0] = &off_7E1668; /*0x69078d*/
    return BufferIOFileClass::Dtor(v1); /*0x690795*/
  }
  return result; /*0x69079a*/
}



// ==== 0x006907A0  ScoreFontClass::Release  this=ScoreFontClass  sig=csp ====
int __thiscall ScoreFontClass::Release(ScoreFontClass *this, __int16 *a2)
{
  __int16 *v2; // edi
  int v3; // esi
  __int16 i; // ax

  v2 = a2; /*0x6907a3*/
  v3 = 0; /*0x6907a7*/
  for ( i = *a2; *v2; i = *v2 ) /*0x6907ab*/
  {
    ++v2; /*0x6907b8*/
    v3 += (*(int (__thiscall **)(ScoreFontClass *, __int16))(*(_DWORD *)this->__pad_0 + 4))(this, i) + 1; /*0x6907be*/
  }
  return v3; /*0x6907cc*/
}



// ==== 0x006907E0  ScoreFontClass::AddRef  this=ScoreFontClass  sig=csp ====
int __stdcall ScoreFontClass::AddRef(ScoreFontClass *this)
{
  int v2; // eax
  CHAR szDst; // [esp+7h] [ebp-11h] BYREF
  _DWORD v4[4]; // [esp+8h] [ebp-10h] BYREF

  if ( (_WORD)this == 32 ) /*0x6907f3*/
    return 8; /*0x6907f5*/
  CharToOemBuffA((LPCSTR)&this, &szDst, 1u); /*0x69080d*/
  v2 = szDst - 33; /*0x690818*/
  if ( szDst == 33 ) /*0x69081d*/
  {
    v2 = 0; /*0x69081f*/
  }
  else if ( v2 >= 216 ) /*0x690828*/
  {
    v2 = 216; /*0x69082a*/
  }
  return Building::GetFoundationSize(v4, 3 * v2 + 2)[2]; /*0x6907fa*/
}



// ==== 0x00690850  ScoreFontClass::DrawFoundationChar2  this=ScoreFontClass  sig=csp ====
void __thiscall BuildingClass::DrawFoundationChar2(
        ScoreFontClass *this,
        int a2,
        CHAR szSrc,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int v8; // eax
  int v9; // esi
  int v10; // ecx
  int *v11; // eax
  int v12[2]; // [esp+4h] [ebp-28h] BYREF
  _DWORD v13[4]; // [esp+Ch] [ebp-20h] BYREF
  _BYTE v14[16]; // [esp+1Ch] [ebp-10h] BYREF

  CharToOemBuffA(&szSrc, &szSrc, 1u); /*0x69086a*/
  if ( szSrc != 32 ) /*0x690876*/
  {
    v8 = szSrc - 33; /*0x69087f*/
    if ( szSrc == 33 ) /*0x690884*/
    {
      v8 = 0; /*0x690886*/
    }
    else if ( v8 >= 216 ) /*0x69088f*/
    {
      v8 = 216; /*0x690891*/
    }
    v9 = 3 * v8; /*0x690898*/
    v10 = *Building::GetFoundationSize(v13, 3 * v8 + 2); /*0x6908b5*/
    v12[1] = a5; /*0x6908cc*/
    v12[0] = a4 - v10; /*0x6908d1*/
    v11 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 120))(a2, v14); /*0x6908e4*/
    DrawToSurfaceSHP( /*0x6908fd*/
      a2,
      *((_DWORD *)this + 5),
      this->ScoreFontClass_field_0x0C,
      a6 + v9,
      v12,
      v11,
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
}



// ==== 0x00690910  ScoreFontClass::DrawFoundationChar  this=ScoreFontClass  sig=csp ====
__int16 __thiscall BuildingClass::DrawFoundationChar(
        ScoreFontClass *this,
        int szSrc,
        _WORD *a3,
        int a4,
        int a5,
        int a6)
{
  _WORD *v6; // edi
  __int16 result; // ax
  int v9; // ebx
  int v10; // eax
  int v11; // edi
  int v12; // ecx
  int *v13; // eax
  int v14; // eax
  int v15; // edx
  bool v16; // zf
  CHAR szDst; // [esp+Bh] [ebp-29h] BYREF
  int v18[2]; // [esp+Ch] [ebp-28h] BYREF
  _DWORD v19[4]; // [esp+14h] [ebp-20h] BYREF
  _BYTE v20[16]; // [esp+24h] [ebp-10h] BYREF

  v6 = a3; /*0x690915*/
  result = *a3; /*0x69091b*/
  if ( *a3 ) /*0x69091b*/
  {
    v9 = szSrc; /*0x690928*/
    do /*0x6909f8*/
    {
      if ( result != 32 ) /*0x690931*/
      {
        LOBYTE(szSrc) = *(_BYTE *)v6; /*0x690945*/
        CharToOemBuffA((LPCSTR)&szSrc, &szDst, 1u); /*0x690949*/
        v10 = szDst - 33; /*0x690954*/
        if ( szDst == 33 ) /*0x690959*/
        {
          v10 = 0; /*0x69095b*/
        }
        else if ( v10 >= 216 ) /*0x690964*/
        {
          v10 = 216; /*0x690966*/
        }
        v11 = 3 * v10; /*0x69096b*/
        v12 = *Building::GetFoundationSize(v19, 3 * v10 + 2); /*0x690981*/
        v18[1] = a5; /*0x69098b*/
        v18[0] = a4 - v12; /*0x6909a0*/
        v13 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v9 + 120))(v9, v20); /*0x6909b2*/
        DrawToSurfaceSHP( /*0x6909cb*/
          v9,
          *((_DWORD *)this + 5),
          this->ScoreFontClass_field_0x0C,
          a6 + v11,
          v18,
          v13,
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
        v6 = a3; /*0x6909d0*/
      }
      v14 = (*(int (__thiscall **)(ScoreFontClass *, _WORD))(*(_DWORD *)this->__pad_0 + 4))(this, *v6++); /*0x6909dc*/
      a3 = v6; /*0x6909e6*/
      v15 = a4 + v14 + 1; /*0x6909ea*/
      result = *v6; /*0x6909ee*/
      v16 = *v6 == 0; /*0x6909f1*/
      a4 = v15; /*0x6909f4*/
    }
    while ( !v16 ); /*0x6909f8*/
  }
  return result; /*0x690a00*/
}



// ==== 0x00690A10  ScoreScreen::LoadScoreFont  this=ScoreFontClass  sig=csp ====
_DWORD *__thiscall ScoreScreen::LoadScoreFont(ScoreScreen *this, int a2)
{
  void *v3; // eax
  CCFileClass v5; // [esp+8h] [ebp-6Ch] BYREF
  int v6[3]; // [esp+60h] [ebp-14h] BYREF
  int v7; // [esp+6Ch] [ebp-8h]

  this->ScoreScreen_field_0x04 = 0; /*0x690a19*/
  this->ScoreScreen_field_0x08 = 0; /*0x690a1c*/
  this->ScoreScreen_field_0x0C = 0; /*0x690a1f*/
  this->ScoreScreen_field_0x14 = 0; /*0x690a22*/
  *(_DWORD *)this->__pad_0 = &ScoreFontClass::`vftable'; /*0x690a25*/
  ScoreScreen::LoadAudio(); /*0x690a2b*/
  ++dword_B0558C; /*0x690a3c*/
  *(_DWORD *)this->__pad_0 = &ScoreFullFontClass::`vftable'; /*0x690a44*/
  LOBYTE(this->ScoreScreen_field_0x10) = 0; /*0x690a4a*/
  v3 = SearchMIXFile(g_Str_File_FULLFNT3_SHP, 0); /*0x690a4d*/
  this->ScoreScreen_field_0x0C = (int)v3; /*0x690a54*/
  if ( !v3 ) /*0x690a57*/
  {
    CCFileClass::Construct(&v5, g_Str_File_FULLFNT3_SHP); /*0x690a62*/
    this->ScoreScreen_field_0x0C = (int)CCFileClass::ReadEntireFile(&v5); /*0x690a74*/
    LOBYTE(this->ScoreScreen_field_0x10) = 1; /*0x690a77*/
    CCFileClass::Reset(&v5); /*0x690a7b*/
    Debug::Log(); /*0x690a85*/
    *(_DWORD *)v5.CDFileClass = &CCFileClass::`vftable'; /*0x690a91*/
    v7 = 0; /*0x690a99*/
    Vector::Clear((int)v6); /*0x690a9d*/
    *(_DWORD *)v5.CDFileClass = &off_7E1668; /*0x690aa6*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v5); /*0x690aae*/
  }
  this->ScoreScreen_field_0x04 = 11; /*0x690ab7*/
  this->ScoreScreen_field_0x14 = a2; /*0x690abe*/
  this->ScoreScreen_field_0x08 = 21; /*0x690ac1*/
  return this->__pad_0; /*0x690aca*/
}



// ==== 0x00690AE0  ScoreScreen::LoadCountryFlags  this=ScoreFontClass  sig=csp ====
_DWORD *__thiscall ScoreScreen::LoadCountryFlags(ScoreScreen *this, int a2)
{
  void *v3; // eax
  CCFileClass v5; // [esp+8h] [ebp-6Ch] BYREF
  int v6[3]; // [esp+60h] [ebp-14h] BYREF
  int v7; // [esp+6Ch] [ebp-8h]

  this->ScoreScreen_field_0x04 = 0; /*0x690ae9*/
  this->ScoreScreen_field_0x08 = 0; /*0x690aec*/
  this->ScoreScreen_field_0x0C = 0; /*0x690aef*/
  this->ScoreScreen_field_0x14 = 0; /*0x690af2*/
  *(_DWORD *)this->__pad_0 = &ScoreFontClass::`vftable'; /*0x690af5*/
  ScoreScreen::LoadAudio(); /*0x690afb*/
  ++dword_B0558C; /*0x690b0c*/
  *(_DWORD *)this->__pad_0 = &ScoreBigFontClass::`vftable'; /*0x690b14*/
  LOBYTE(this->ScoreScreen_field_0x10) = 0; /*0x690b1a*/
  v3 = SearchMIXFile(aBigfontShp, 0); /*0x690b1d*/
  this->ScoreScreen_field_0x0C = (int)v3; /*0x690b24*/
  if ( !v3 ) /*0x690b27*/
  {
    CCFileClass::Construct(&v5, aBigfontShp); /*0x690b32*/
    this->ScoreScreen_field_0x0C = (int)CCFileClass::ReadEntireFile(&v5); /*0x690b44*/
    LOBYTE(this->ScoreScreen_field_0x10) = 1; /*0x690b47*/
    CCFileClass::Reset(&v5); /*0x690b4b*/
    Debug::Log(); /*0x690b55*/
    *(_DWORD *)v5.CDFileClass = &CCFileClass::`vftable'; /*0x690b61*/
    v7 = 0; /*0x690b69*/
    Vector::Clear((int)v6); /*0x690b6d*/
    *(_DWORD *)v5.CDFileClass = &off_7E1668; /*0x690b76*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v5); /*0x690b7e*/
  }
  this->ScoreScreen_field_0x04 = 20; /*0x690b87*/
  this->ScoreScreen_field_0x14 = a2; /*0x690b8e*/
  this->ScoreScreen_field_0x08 = 35; /*0x690b91*/
  return this->__pad_0; /*0x690b9a*/
}



// ==== 0x00690C00  ScoreTimeClass::AdvanceFrame  this=ScoreTimeClass  sig=csp ====
char __thiscall ScoreAnimClass::AdvanceFrame(ScoreTimeClass *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int Ticks; // eax
  int v7; // edx
  int v8; // ecx
  int *v9; // eax
  int *v10; // eax
  int v12; // [esp+8h] [ebp-1Ch] BYREF
  int v13; // [esp+Ch] [ebp-18h]
  _BYTE v14[16]; // [esp+14h] [ebp-10h] BYREF

  v3 = this->q014; /*0x690c0a*/
  if ( *(_DWORD *)&this->m_9[3] == -1 ) /*0x690c10*/
  {
LABEL_4:
    if ( v3 ) /*0x690c25*/
      return 0; /*0x690c25*/
    goto LABEL_5; /*0x690c25*/
  }
  v4 = Timer::GetTicks() - *(_DWORD *)&this->m_9[3]; /*0x690c1a*/
  if ( v4 < v3 ) /*0x690c1f*/
  {
    v3 -= v4; /*0x690c21*/
    goto LABEL_4; /*0x690c21*/
  }
LABEL_5:
  v5 = this->q024; /*0x690c2b*/
  Ticks = Timer::GetTicks(); /*0x690c32*/
  v7 = this->q01C; /*0x690c37*/
  v8 = this->q008; /*0x690c3a*/
  *(_DWORD *)&this->m_9[3] = Ticks; /*0x690c3d*/
  this->q004 = v13; /*0x690c45*/
  this->q014 = v5; /*0x690c4a*/
  this->q01C = v7 + 1; /*0x690c4f*/
  if ( v7 + 1 >= v8 ) /*0x690c52*/
    this->q01C = 0; /*0x690c54*/
  v12 = *(_DWORD *)&this->m_1[3]; /*0x690c6d*/
  v13 = *(_DWORD *)&this->m_5[3]; /*0x690c7c*/
  v9 = (int *)(*((int (__thiscall **)(ObjectClass *, _BYTE *))g_DSurface_Hidden->AbstractClass + 30))( /*0x690c8c*/
                g_DSurface_Hidden,
                v14);
  DrawToSurfaceSHP( /*0x690ca6*/
    (int)g_DSurface_Hidden,
    this->q028,
    this->q018,
    this->q01C,
    &v12,
    v9,
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
  v12 = *(_DWORD *)&this->m_1[3]; /*0x690cbd*/
  v13 = *(_DWORD *)&this->m_5[3]; /*0x690ccc*/
  v10 = (int *)(*((int (__thiscall **)(DSurface *, _BYTE *))DSurface_Alternate->DSurface_field_0x0 + 30))( /*0x690cdc*/
                 DSurface_Alternate,
                 v14);
  DrawToSurfaceSHP( /*0x690cf6*/
    (int)DSurface_Alternate,
    this->q028,
    this->q018,
    this->q01C,
    &v12,
    v10,
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
  return 0; /*0x690cfb*/
}



// ==== 0x00690D60  ScorePrintClass::AnimateText  this=ScorePrintClass  sig=csp ====
char __thiscall ScoreAnimClass::AnimateText(ScorePrintClass *this, signed int a2, int a3)
{
  int v3; // ebp
  int v5; // edi
  int v6; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int m_4; // ebx
  char v14; // dl
  int v15; // ebp
  int v16; // [esp+3Ch] [ebp-24h]
  int v17; // [esp+4Ch] [ebp-14h]
  int v18; // [esp+50h] [ebp-10h] BYREF
  int m_8; // [esp+54h] [ebp-Ch]
  int v20; // [esp+58h] [ebp-8h]
  int v21; // [esp+5Ch] [ebp-4h]

  byte_B05584 = 1; /*0x690d63*/
  v5 = *(_DWORD *)this->__pad_14; /*0x690d71*/
  if ( this->m_C == -1 ) /*0x690d77*/
  {
LABEL_4:
    if ( v5 ) /*0x690d8c*/
      return 0; /*0x690d8c*/
    goto LABEL_5; /*0x690d8c*/
  }
  v6 = Timer::GetTicks() - this->m_C; /*0x690d81*/
  if ( v6 < v5 ) /*0x690d86*/
  {
    v5 -= v6; /*0x690d88*/
    goto LABEL_4; /*0x690d88*/
  }
LABEL_5:
  this->m_C = Timer::GetTicks(); /*0x690d92*/
  this->m_10 = m_8; /*0x690da7*/
  *(_DWORD *)this->__pad_14 = 2; /*0x690daa*/
  if ( *(_DWORD *)&this->m_1A[2] > (unsigned int)wcslen(*(const wchar_t **)&this->__pad_14[4]) && this->m_20 > 2 ) /*0x690dc4*/
    return 1; /*0x690dcd*/
  if ( !LOBYTE(this->m_24) )
  {
    v8 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)this->__pad_28 + 8))( /*0x690de0*/
           *(_DWORD *)this->__pad_28,
           *(_DWORD *)&this->__pad_14[4]);
    v9 = this->m_4 - 8 <= 0 ? 0 : this->m_4 - 8;
    v10 = *(_DWORD *)(*(_DWORD *)this->__pad_28 + 8); /*0x690dfd*/
    v20 = v8 + 10; /*0x690e00*/
    v18 = v9; /*0x690e04*/
    m_8 = this->m_8; /*0x690e0f*/
    v21 = v10; /*0x690e1f*/
    (*(void (__thiscall **)(ObjectClass *, int *, DSurface *, int *, _DWORD, int))(g_DSurface_Hidden->vtable0 + 8))( /*0x690e2b*/
      g_DSurface_Hidden,
      &v18,
      DSurface_Alternate,
      &v18,
      0,
      1);
  }
  v11 = *(_DWORD *)&this->m_1A[2]; /*0x690e2e*/
  v12 = 0; /*0x690e31*/
  m_4 = this->m_4; /*0x690e34*/
  v16 = v3; /*0x690e39*/
  v17 = 0; /*0x690e3a*/
  if ( v11 >= 0 ) /*0x690e3e*/
  {
    while ( 1 ) /*0x690e4d*/
    {
      v14 = *(_BYTE *)(*(_DWORD *)&this->__pad_14[4] + 2 * v12); /*0x690e4d*/
      if ( !v14 ) /*0x690e52*/
        break; /*0x690e52*/
      if ( LOBYTE(this->m_24) == 1 || (v15 = v11 - v12, v11 - v12 >= 2) ) /*0x690e61*/
        v15 = 2; /*0x690e63*/
      LOWORD(v5) = v14; /*0x690e6d*/
      (*(void (__thiscall **)(_DWORD, ObjectClass *, int, int, int, int, int, int))(**(_DWORD **)this->__pad_28 + 16))( /*0x690e81*/
        *(_DWORD *)this->__pad_28,
        g_DSurface_Hidden,
        v5,
        m_4,
        this->m_8,
        v15,
        1,
        v16);
      if ( v15 == 2 ) /*0x690e87*/
        (*(void (__thiscall **)(_DWORD, DSurface *, int, int, int, int, _DWORD))(**(_DWORD **)this->__pad_28 + 16))( /*0x690e9e*/
          *(_DWORD *)this->__pad_28,
          DSurface_Alternate,
          v5,
          m_4,
          this->m_8,
          2,
          0);
      v16 = v5; /*0x690ea4*/
      m_4 += (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 4))(*(_DWORD *)this->__pad_28) + 1; /*0x690eae*/
      v11 = *(_DWORD *)&this->m_1A[2]; /*0x690eb2*/
      if ( ++v17 > v11 ) /*0x690ebc*/
      {
        *(_DWORD *)&this->m_1A[2] = v11 + 1; /*0x690ec1*/
        return 0; /*0x690ecb*/
      }
      v12 = v17; /*0x690e46*/
    }
    ++this->m_20; /*0x690ece*/
  }
  ++*(_DWORD *)&this->m_1A[2]; /*0x690ed7*/
  return 0; /*0x690dc6*/
}



// ==== 0x00690F30  ScoreScreen::Constructor  this=ScoreAnimClass  sig=csp ====
_DWORD *__thiscall ScoreScreen::Constructor(ScoreScreen *this, int a2, int a3, int a4)
{
  this->ScoreScreen_field_0x08 = a3; /*0x690f3b*/
  this->ScoreScreen_field_0x04 = a2; /*0x690f41*/
  this->ScoreScreen_field_0x0C = Timer::GetTicks(); /*0x690f4d*/
  this->ScoreScreen_field_0x14 = 0; /*0x690f50*/
  this->ScoreScreen_field_0x18 = a4; /*0x690f57*/
  *(_DWORD *)this->__pad_0 = &ScoreAnimClass::`vftable'; /*0x690f5a*/
  return this->__pad_0; /*0x690f62*/
}



// ==== 0x00690F70  ScoreAnimClass::AddRef  this=ScoreAnimClass  sig=csp ====
signed int __thiscall ScoreAnimClass::AddRef(ScoreAnimClass *this)
{
  signed int result; // eax
  int ScoreAnimClass_field_0x14; // edi

  result = this->ScoreAnimClass_field_0x0C; /*0x690f73*/
  if ( result != -1 ) /*0x690f79*/
  {
    ScoreAnimClass_field_0x14 = this->ScoreAnimClass_field_0x14; /*0x690f7c*/
    result = Timer::GetTicks() - this->ScoreAnimClass_field_0x0C; /*0x690f8c*/
    if ( result >= ScoreAnimClass_field_0x14 ) /*0x690f91*/
    {
      this->ScoreAnimClass_field_0x14 = 0; /*0x690fa4*/
      this->ScoreAnimClass_field_0x0C = -1; /*0x690fa7*/
    }
    else
    {
      this->ScoreAnimClass_field_0x0C = -1; /*0x690f95*/
      this->ScoreAnimClass_field_0x14 = ScoreAnimClass_field_0x14 - result; /*0x690f9c*/
    }
  }
  return result; /*0x690fa0*/
}



// ==== 0x00690FC0  ScoreAnimClass::Release  this=ScoreAnimClass  sig=csp ====
void __thiscall ScoreAnimClass::Release(ScoreAnimClass *this)
{
  if ( this->ScoreAnimClass_field_0x0C == -1 ) /*0x690fc7*/
    this->ScoreAnimClass_field_0x0C = Timer::GetTicks(); /*0x690fd1*/
}



// ==== 0x00690FE0  ScoreAnimClass::Constructor_ScoreAnimClass  this=ScoreAnimClass  sig=csp ====
_DWORD *__thiscall ScoreAnimClass::Constructor_ScoreAnimClass(ScoreAnimClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &ScoreAnimClass::`vftable'; /*0x690fe9*/
  if ( (a2 & 1) != 0 ) /*0x690fef*/
    __3_YAXPAX_Z(this); /*0x690ff2*/
  return this->__pad_0; /*0x690ffc*/
}



// ==== 0x00691000  ScoreTimeClass::Constructor_ScoreAnimClass_0  this=ScoreTimeClass  sig=csp ====
_DWORD *__thiscall ScoreAnimClass::Constructor_ScoreAnimClass_0(ScoreTimeClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &ScoreAnimClass::`vftable'; /*0x691009*/
  if ( (a2 & 1) != 0 ) /*0x69100f*/
    __3_YAXPAX_Z(this); /*0x691012*/
  return this->__pad_0; /*0x69101c*/
}



// ==== 0x00691020  ScorePrintClass::Constructor_ScoreAnimClass_1  this=ScorePrintClass  sig=csp ====
_DWORD *__thiscall ScoreAnimClass::Constructor_ScoreAnimClass_1(ScorePrintClass *this, char a2)
{
  this->m_0 = (int)&ScoreAnimClass::`vftable'; /*0x691029*/
  if ( (a2 & 1) != 0 ) /*0x69102f*/
    __3_YAXPAX_Z(this); /*0x691032*/
  return &this->m_0; /*0x69103c*/
}



// ==== 0x00691040  ScoreFontClass::QueryInterface  this=ScoreFontClass  sig=csp ====
_DWORD *__thiscall ScoreFontClass::QueryInterface(ScoreFontClass *this, char a2)
{
  void *ScoreFontClass_field_0x0C; // eax
  char *v4; // eax

  ScoreFontClass_field_0x0C = (void *)this->ScoreFontClass_field_0x0C; /*0x691046*/
  *(_DWORD *)this->__pad_0 = &ScoreFontClass::`vftable'; /*0x691049*/
  if ( ScoreFontClass_field_0x0C && this->q004 == 1 ) /*0x691057*/
  {
    __3_YAXPAX_Z(ScoreFontClass_field_0x0C); /*0x69105a*/
    this->ScoreFontClass_field_0x0C = 0; /*0x691062*/
    this->q004 = 0; /*0x691065*/
  }
  if ( !--dword_B0558C ) /*0x691073*/
  {
    v4 = (char *)&byte_B05594; /*0x691075*/
    do /*0x691087*/
    {
      *((_DWORD *)v4 - 1) = 0; /*0x69107a*/
      *v4 = 0; /*0x69107d*/
      v4 += 8; /*0x69107f*/
    }
    while ( (int)v4 < (int)byte_B055AC ); /*0x691087*/
  }
  if ( (a2 & 1) != 0 ) /*0x69108e*/
    __3_YAXPAX_Z(this); /*0x691091*/
  return this->__pad_0; /*0x69109b*/
}



// ==== 0x006910A0  ScoreFullFontClass::Constructor_ScoreFontClass  this=ScoreFullFontClass  sig=csp ====
_DWORD *__thiscall ScoreAnimClass::Constructor_ScoreFontClass(ScoreFullFontClass *this, char a2)
{
  void *v3; // eax
  char *v4; // eax

  v3 = (void *)this->field_C; /*0x6910a6*/
  *(_DWORD *)this->__pad_0 = &ScoreFontClass::`vftable'; /*0x6910a9*/
  if ( v3 && this->q010 == 1 ) /*0x6910b7*/
  {
    __3_YAXPAX_Z(v3); /*0x6910ba*/
    this->field_C = 0; /*0x6910c2*/
    this->q010 = 0; /*0x6910c5*/
  }
  if ( !--dword_B0558C ) /*0x6910d3*/
  {
    v4 = (char *)&byte_B05594; /*0x6910d5*/
    do /*0x6910e7*/
    {
      *((_DWORD *)v4 - 1) = 0; /*0x6910da*/
      *v4 = 0; /*0x6910dd*/
      v4 += 8; /*0x6910df*/
    }
    while ( (int)v4 < (int)byte_B055AC ); /*0x6910e7*/
  }
  if ( (a2 & 1) != 0 ) /*0x6910ee*/
    __3_YAXPAX_Z(this); /*0x6910f1*/
  return this->__pad_0; /*0x6910fb*/
}



// ==== 0x00691100  ScoreBigFontClass::Constructor_ScoreFontClass  this=ScoreBigFontClass  sig=csp ====
_DWORD *__thiscall ScoreFontClass::Constructor_ScoreFontClass(ScoreBigFontClass *this, char a2)
{
  void *v3; // eax
  char *v4; // eax

  v3 = (void *)this->field_C; /*0x691106*/
  *(_DWORD *)this->__pad_0 = &ScoreFontClass::`vftable'; /*0x691109*/
  if ( v3 && this->q010 == 1 ) /*0x691117*/
  {
    __3_YAXPAX_Z(v3); /*0x69111a*/
    this->field_C = 0; /*0x691122*/
    this->q010 = 0; /*0x691125*/
  }
  if ( !--dword_B0558C ) /*0x691133*/
  {
    v4 = (char *)&byte_B05594; /*0x691135*/
    do /*0x691147*/
    {
      *((_DWORD *)v4 - 1) = 0; /*0x69113a*/
      *v4 = 0; /*0x69113d*/
      v4 += 8; /*0x69113f*/
    }
    while ( (int)v4 < (int)byte_B055AC ); /*0x691147*/
  }
  if ( (a2 & 1) != 0 ) /*0x69114e*/
    __3_YAXPAX_Z(this); /*0x691151*/
  return this->__pad_0; /*0x69115b*/
}



// ==== 0x00691160  VectorClass::PushBack2  this=VectorClass  sig=csp ====
char __thiscall VectorClass::PushBack2(DynamicVectorClass *this, _DWORD *a2)
{
  int Capacity; // ecx
  int CapacityIncrement; // eax
  int Count; // eax
  int Items; // edx

  Capacity = this->Capacity; /*0x691163*/
  if ( this->Count >= Capacity ) /*0x69116b*/
  {
    if ( !this->IsAllocated[0] && Capacity ) /*0x691176*/
      return 0; /*0x691176*/
    CapacityIncrement = this->CapacityIncrement; /*0x691178*/
    if ( CapacityIncrement <= 0 /*0x691188*/
      || !(*(unsigned __int8 (__thiscall **)(DynamicVectorClass *, int, _DWORD))(this->vtable0 + 8))(
            this,
            Capacity + CapacityIncrement,
            0) )
    {
      return 0; /*0x69118f*/
    }
  }
  Count = this->Count; /*0x691195*/
  Items = this->Items; /*0x691198*/
  this->Count = Count + 1; /*0x69119e*/
  *(_DWORD *)(Items + 4 * Count) = *a2; /*0x6911a8*/
  return 1; /*0x691191*/
}



// ==== 0x006911B0  sub_6911B0  this=-  sig=ida-proto ====
void sub_6911B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6911bc*/
  dbl_B055C8 = Math::Sqrt(v0 + v0); /*0x6911ce*/
}



// ==== 0x006911E0  sub_6911E0  this=-  sig=ida-proto ====
void sub_6911E0()
{
  dbl_B05618 = dbl_B055C8 / 60.0; /*0x6911ec*/
}



// ==== 0x00691200  sub_691200  this=-  sig=ida-proto ====
void sub_691200()
{
  dbl_B05600 = 1.0 / dbl_B05618; /*0x69120c*/
}



// ==== 0x00691220  sub_691220  this=-  sig=ida-proto ====
void sub_691220()
{
  dbl_B055F8 = 0.0174532925199433 * 45.0; /*0x69122c*/
}



// ==== 0x00691240  sub_691240  this=-  sig=ida-proto ====
void sub_691240()
{
  dbl_B055D0 = 0.0174532925199433 * 60.0; /*0x69124c*/
}



// ==== 0x00691260  sub_691260  this=-  sig=ida-proto ====
void sub_691260()
{
  unk_B055A8 = 0.0174532925199433 * 90.0; /*0x69126c*/
}



// ==== 0x00691280  sub_691280  this=-  sig=ida-proto ====
__int64 sub_691280()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_B055A8 - dbl_B055D0); /*0x691292*/
  result = Math::RoundToInt(v0 * dbl_B055C8 * 0.5); /*0x6912a6*/
  dword_B05620 = result; /*0x6912ab*/
  return result; /*0x6912b0*/
}



// ==== 0x006912C0  sub_6912C0  this=-  sig=ida-proto ====
void sub_6912C0()
{
  dbl_B055D8 = Math::ArcTan((double)dword_B05620 * 0.00390625); /*0x6912d7*/
}



// ==== 0x006912F0  sub_6912F0  this=-  sig=ida-proto ====
void sub_6912F0()
{
  dbl_B055F0 = Math::ArcTan((double)(2 * dword_B05620) / dbl_B055C8); /*0x691312*/
}



// ==== 0x00691320  sub_691320  this=-  sig=ida-proto ====
__int64 sub_691320()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B05620) + 0.5); /*0x69133b*/
  dword_B05614 = result; /*0x691340*/
  return result; /*0x691346*/
}



// ==== 0x00691350  sub_691350  this=-  sig=ida-proto ====
int sub_691350()
{
  word_B055C0 = 0; /*0x691352*/
  word_B055C2 = 0; /*0x691358*/
  return 0; /*0x69135e*/
}



// ==== 0x00691360  sub_691360  this=-  sig=ida-proto ====
int sub_691360()
{
  dword_B055E0 = 0; /*0x691362*/
  dword_B055E4 = 0; /*0x691367*/
  dword_B055E8 = 0; /*0x69136c*/
  return 0; /*0x691371*/
}



// ==== 0x00691380  sub_691380  this=-  sig=ida-proto ====
int sub_691380()
{
  dword_B05610 = 0; /*0x691385*/
  dword_B05608 = 128; /*0x69138f*/
  dword_B0560C = 128; /*0x691394*/
  return 128; /*0x691399*/
}



// ==== 0x006913A0  sub_6913A0  this=-  sig=ida-proto ====
int sub_6913A0()
{
  dword_B055B0 = 0; /*0x6913a2*/
  dword_B055B4 = 0; /*0x6913a7*/
  dword_B055B8 = 0; /*0x6913ac*/
  dword_B055BC = 0; /*0x6913b1*/
  return 0; /*0x6913b6*/
}



// ==== 0x006913C0  ScriptClass::Construct  this=ScriptClass  sig=csp ====
AbstractClass *__thiscall ScriptClass::Construct(ScriptClass *this, int a2)
{
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x6913c3*/
  this->field28 = 0; /*0x6913cc*/
  this->buildingType = (ScriptTypeClass *)a2; /*0x6913d3*/
  this->idxCurrentLine = -1; /*0x6913d6*/
  this->AbstractClass = &ScriptClass::`vftable'; /*0x6913dd*/
  this->? = &ScriptClass::`vftable'; /*0x6913e3*/
  this->? = &ScriptClass::`vftable'; /*0x6913ea*/
  this->? = &ScriptClass::`vftable'; /*0x6913f1*/
  if ( dword_8872C0 < dword_8872B8 /*0x69142f*/
    || (byte_8872BD || !dword_8872B8)
    && dword_8872C4 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8872B0 + 8))(
         &dword_8872B0,
         dword_8872B8 + dword_8872C4,
         0) )
  {
    v3 = dword_8872C0++; /*0x69143c*/
    *((_DWORD *)dword_8872B4 + v3) = this; /*0x69144b*/
  }
  return (AbstractClass *)this; /*0x691450*/
}



// ==== 0x006914E0  ScriptClass::PowerDrainUpdate  this=ScriptClass  sig=csp ====
int __thiscall ScriptClass::PowerDrainUpdate(ScriptClass *this, int a2)
{
  AbstractClass::ProcessPower((AbstractClass *)this); /*0x6914e9*/
  return Power::TimerProcess(this->idxCurrentLine); /*0x6914f9*/
}



// ==== 0x00691500  SessionClass::GetEntry  this=AbstractClass  sig=csp ====
_DWORD *__thiscall SessionClass::GetEntry(SessionClass *this, _DWORD *a2)
{
  int v2; // edx
  int v4; // ecx

  v2 = this->Config[5]; /*0x691500*/
  if ( v2 == -1 ) /*0x691506*/
  {
    *a2 = -1; /*0x691510*/
    a2[1] = 0; /*0x691512*/
    return a2; /*0x691508*/
  }
  else
  {
    v4 = this->Config[3]; /*0x691518*/
    *a2 = *(_DWORD *)(v4 + 8 * v2 + 164); /*0x691527*/
    a2[1] = *(_DWORD *)(v4 + 8 * v2 + 168); /*0x691531*/
    return a2; /*0x69151b*/
  }
}



// ==== 0x00691540  ScriptClass::GetNextAction  this=ScriptClass  sig=csp ====
_DWORD *__thiscall ScriptClass::GetNextAction(ScriptClass *this, _DWORD *a2)
{
  ScriptTypeClass *buildingType; // edx
  int idxCurrentLine; // ecx
  _DWORD *result; // eax

  buildingType = this->buildingType; /*0x691540*/
  idxCurrentLine = this->idxCurrentLine; /*0x691543*/
  result = a2; /*0x691554*/
  if ( idxCurrentLine + 1 < buildingType->scriptActions[28] ) /*0x691552*/
  {
    *a2 = buildingType->scriptActions[2 * idxCurrentLine + 31]; /*0x691571*/
    a2[1] = buildingType->scriptActions[2 * idxCurrentLine + 32]; /*0x69157a*/
  }
  else
  {
    *a2 = -1; /*0x69155e*/
    a2[1] = 0; /*0x691560*/
  }
  return result; /*0x69155d*/
}



// ==== 0x00691590  ObjectClass::SetLandTypeMap  this=TOP  sig=csp ====
int __thiscall SetLandTypeMap(ObjectClass *this)
{
  int result; // eax

  this->fallRate = -1; /*0x691590*/
  LOBYTE(result) = 1; /*0x691597*/
  return result; /*0x691599*/
}



// ==== 0x006915A0  TeamClass::SetField11  this=TeamClass  sig=csp ====
char __thiscall TeamClass::SetField11(TeamClass *this, int a2)
{
  this->owner = (HouseClass *)a2; /*0x6915a4*/
  return 1; /*0x6915a9*/
}



// ==== 0x006915B0  TeamClass::Check  this=TOP  sig=csp ====
BOOL __thiscall TeamClass::Check(TeamClass *this)
{
  HouseClass *v1; // eax

  v1 = (HouseClass *)((char *)&this->owner->AbstractClass + 1); /*0x6915b3*/
  this->owner = v1; /*0x6915b4*/
  return (unsigned int)v1 < this->buildingType[1].TeamTypeClass_field_2C; /*0x6915c4*/
}



// ==== 0x006915D0  SessionClass::SetField  this=ScriptClass  sig=csp ====
int __thiscall SessionClass::SetField(SessionClass *this)
{
  return this->Config[5] < *(_DWORD *)(this->Config[3] + 160); /*0x6915e0*/
}



// ==== 0x006915F0  ScriptClass::ddtor  this=ScriptClass  sig=csp ====
int __stdcall ScriptClass::ddtor(ScriptClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6915f6*/
    return -2147467261; /*0x6915f8*/
  *a2 = 1123264070; /*0x691606*/
  a2[1] = 298977161; /*0x69160e*/
  a2[2] = 1610655148; /*0x691617*/
  a2[3] = unk_7E97AC; /*0x691620*/
  return 0; /*0x6915fd*/
}



// ==== 0x00691630  ScriptClass::LoadState  this=ScriptClass  sig=csp ====
int __stdcall ScriptClass::LoadState(ScriptClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x69163b*/
  if ( result >= 0 ) /*0x691642*/
  {
    if ( this ) /*0x691646*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x69164f*/
      this->AbstractClass = &ScriptClass::`vftable'; /*0x691654*/
      this->? = &ScriptClass::`vftable'; /*0x69165a*/
      this->? = &ScriptClass::`vftable'; /*0x691661*/
      this->? = &ScriptClass::`vftable'; /*0x691668*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->buildingType); /*0x691678*/
    return 0; /*0x69167d*/
  }
  return result; /*0x69167f*/
}



// ==== 0x00691690  ScriptClass::SaveState  this=ScriptClass  sig=csp ====
int __stdcall ScriptClass::SaveState(ScriptClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x69169f*/
  if ( result >= 0 ) /*0x6916a6*/
    return 0; /*0x6916a8*/
  return result; /*0x6916aa*/
}



// ==== 0x006916B0  ScriptTypeClass::Constructor  this=ScriptTypeClass  sig=csp ====
_DWORD *__thiscall ScriptTypeClass::Constructor(ScriptTypeClass *this, char *Source)
{
  int v3; // ecx
  char v4; // al
  int v5; // eax
  ScriptTypeClass **v6; // edx

  AbstractTypeClass::Constructor((int *)this, Source); /*0x6916b8*/
  this->scriptActions[27] = 0; /*0x6916bd*/
  this->scriptActions[28] = 0; /*0x6916c7*/
  this->AbstractClass = &ScriptTypeClass::`vftable'; /*0x6916d1*/
  this->? = &ScriptTypeClass::`vftable'; /*0x6916d7*/
  this->? = &ScriptTypeClass::`vftable'; /*0x6916de*/
  this->? = &ScriptTypeClass::`vftable'; /*0x6916e5*/
  v3 = *(_DWORD *)&FootClass_Array.?; /*0x6916ec*/
  if ( *(int *)&FootClass_Array.? < FootClass_Array.?[6] /*0x69172e*/
    || (BYTE1(FootClass_Array.?[7]) || !FootClass_Array.?[6])
    && *(int *)&FootClass_Array.? > 0
    && (v4 = (*(int (__thiscall **)(int *, int, _DWORD))(FootClass_Array.?[4] + 8))(
               &FootClass_Array.?[4],
               FootClass_Array.?[6] + *(_DWORD *)&FootClass_Array.?,
               0),
        v3 = *(_DWORD *)&FootClass_Array.?,
        v4) )
  {
    *(_DWORD *)&FootClass_Array.? = v3 + 1; /*0x691733*/
    *(_DWORD *)(FootClass_Array.?[5] + 4 * v3) = this; /*0x69173f*/
    v3 = *(_DWORD *)&FootClass_Array.?; /*0x691742*/
  }
  v5 = 0; /*0x691748*/
  if ( v3 <= 0 ) /*0x69174c*/
  {
LABEL_11:
    v5 = -1; /*0x691760*/
  }
  else
  {
    v6 = (ScriptTypeClass **)FootClass_Array.?[5]; /*0x69174e*/
    while ( *v6 != this ) /*0x691756*/
    {
      ++v5; /*0x691758*/
      ++v6; /*0x691759*/
      if ( v5 >= v3 ) /*0x69175e*/
        goto LABEL_11; /*0x69175e*/
    }
  }
  this->scriptActions[26] = v5; /*0x691763*/
  return &this->AbstractClass; /*0x69176b*/
}



// ==== 0x006917F0  ScriptTypeClass::GetParameter  this=ScriptTypeClass  sig=csp ====
char __thiscall ScriptTypeClass::GetParameter(ScriptTypeClass *this, char *a2)
{
  int v3; // esi
  ScriptTypeClass *v4; // ebx
  char Buffer[16]; // [esp+8h] [ebp-90h] BYREF
  char Source[128]; // [esp+18h] [ebp-80h] BYREF

  if ( !AbstractTypeClass::WriteINI((AbstractTypeClass *)this, a2) ) /*0x691802*/
    return 0; /*0x691885*/
  v3 = 0; /*0x69180d*/
  v4 = (ScriptTypeClass *)&this->scriptActions[29]; /*0x69180f*/
  do /*0x691873*/
  {
    sprintf(Buffer, "%d", v3); /*0x691820*/
    String::Trim(Buffer); /*0x69182c*/
    if ( v3 >= this->scriptActions[28] ) /*0x691837*/
    {
      INIClass::ClearSection((int *)a2, (int)&this->arrayIndex, (unsigned __int8 *)Buffer); /*0x691867*/
    }
    else
    {
      ScriptTypeClass::FormatToString(v4, Source); /*0x691840*/
      INIClass::SetString(a2, (unsigned __int8 *)&this->arrayIndex, Buffer, Source); /*0x691855*/
    }
    ++v3; /*0x69186c*/
    v4 = (ScriptTypeClass *)((char *)v4 + 8); /*0x69186d*/
  }
  while ( v3 < 50 ); /*0x691873*/
  return 1; /*0x691877*/
}



// ==== 0x006918A0  ScriptTypeClass::GetEvent  this=ScriptTypeClass  sig=csp ====
char __thiscall ScriptTypeClass::GetEvent(ScriptTypeClass *this, unsigned __int8 ***a2)
{
  int v3; // edi
  int v4; // eax
  _DWORD v6[2]; // [esp+8h] [ebp-98h] BYREF
  char Buffer[16]; // [esp+10h] [ebp-90h] BYREF
  char Destination[128]; // [esp+20h] [ebp-80h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x6918b3*/
  if ( !(unsigned __int8)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)this, a2) ) /*0x6918bb*/
    return 0; /*0x691963*/
  v3 = 0; /*0x6918ca*/
  this->scriptActions[28] = 0; /*0x6918cf*/
  do /*0x691951*/
  {
    sprintf(Buffer, "%d", v3); /*0x6918e0*/
    String::Trim(Buffer); /*0x6918ec*/
    if ( INIClass::GetString( /*0x69190f*/
           (INIClass *)a2,
           (unsigned __int8 *)&this->arrayIndex,
           (unsigned __int8 *)Buffer,
           &g_INI_DefaultBuffer,
           Destination,
           128) > 0 )
    {
      ScriptTypeClass::SetField((ScriptTypeClass *)v6, Destination); /*0x69191a*/
      v4 = this->scriptActions[28]; /*0x69191f*/
      if ( v4 < 50 ) /*0x691928*/
      {
        this->scriptActions[2 * v4 + 29] = v6[0]; /*0x69192e*/
        this->scriptActions[2 * v4 + 30] = v6[1]; /*0x691939*/
        ++this->scriptActions[28]; /*0x691947*/
      }
    }
    ++v3; /*0x69194d*/
  }
  while ( v3 < 50 ); /*0x691951*/
  return 1; /*0x691955*/
}



// ==== 0x00691970  ScoreScreenClass::ProcessFrame  this=INIClass  sig=csp ====
int __fastcall ScoreScreenClass::ProcessFrame(INIClass *a1, int a2)
{
  int result; // eax
  int v4; // esi
  int v5; // ebp
  unsigned __int8 *StringByIndex; // eax
  int v7; // esi
  int *v8; // eax
  int *v9; // esi
  int v10; // eax
  bool v11; // zf
  int v12; // ecx
  int **v13; // edx
  int v15; // [esp+14h] [ebp-1Ch]
  char Source[24]; // [esp+18h] [ebp-18h] BYREF

  result = INIClass::GetKeyCount(a1->__pad_0, g_INI_Key_ScriptTypes); /*0x691982*/
  v4 = result; /*0x691987*/
  v5 = 0; /*0x69198b*/
  v15 = result; /*0x69198f*/
  if ( result > 0 ) /*0x691993*/
  {
    while ( 1 ) /*0x6919a1*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1->__pad_0, g_INI_Key_ScriptTypes, v5); /*0x6919a1*/
      result = INIClass::GetString(a1, g_INI_Key_ScriptTypes, StringByIndex, &g_INI_DefaultBuffer, Source, 24); /*0x6919ba*/
      if ( result > 0 ) /*0x6919c1*/
        break; /*0x6919c1*/
LABEL_24:
      if ( ++v5 >= v4 ) /*0x691b1a*/
        return result; /*0x691b1a*/
    }
    if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6919eb*/
      goto LABEL_22; /*0x6919eb*/
    v7 = 0; /*0x691a00*/
    if ( *(int *)&FootClass_Array.? > 0 ) /*0x691a04*/
    {
      while ( _strcmpi((char *)(*(_DWORD *)(FootClass_Array.?[5] + 4 * v7) + 36), Source) ) /*0x691a22*/
      {
        if ( ++v7 >= *(int *)&FootClass_Array.? ) /*0x691a30*/
          goto LABEL_8; /*0x691a30*/
      }
      v9 = *(int **)(FootClass_Array.?[5] + 4 * v7); /*0x691afa*/
      goto LABEL_23; /*0x691afd*/
    }
LABEL_8:
    v8 = (int *)__2_YAPAXI_Z(0x234u); /*0x691a37*/
    v9 = v8; /*0x691a3c*/
    if ( v8 ) /*0x691a43*/
    {
      AbstractTypeClass::Constructor(v8, Source); /*0x691a50*/
      v9[39] = 0; /*0x691a55*/
      v9[40] = 0; /*0x691a5b*/
      *v9 = (int)&ScriptTypeClass::`vftable'; /*0x691a61*/
      v9[1] = (int)&ScriptTypeClass::`vftable'; /*0x691a67*/
      v9[2] = (int)&ScriptTypeClass::`vftable'; /*0x691a6e*/
      v9[3] = (int)&ScriptTypeClass::`vftable'; /*0x691a75*/
      v10 = *(_DWORD *)&FootClass_Array.?; /*0x691a7c*/
      if ( *(int *)&FootClass_Array.? < FootClass_Array.?[6] /*0x691ab9*/
        || (BYTE1(FootClass_Array.?[7]) || !FootClass_Array.?[6])
        && *(int *)&FootClass_Array.? > 0
        && (v11 = (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(FootClass_Array.?[4] + 8))(
                    &FootClass_Array.?[4],
                    FootClass_Array.?[6] + *(_DWORD *)&FootClass_Array.?,
                    0) == 0,
            v10 = *(_DWORD *)&FootClass_Array.?,
            !v11) )
      {
        *(_DWORD *)&FootClass_Array.? = v10 + 1; /*0x691ac4*/
        *(_DWORD *)(FootClass_Array.?[5] + 4 * v10) = v9; /*0x691ac9*/
        v10 = *(_DWORD *)&FootClass_Array.?; /*0x691acc*/
      }
      v12 = 0; /*0x691ad1*/
      if ( v10 <= 0 ) /*0x691ad5*/
      {
LABEL_19:
        v12 = -1; /*0x691ae9*/
      }
      else
      {
        v13 = (int **)FootClass_Array.?[5]; /*0x691ad7*/
        while ( *v13 != v9 ) /*0x691adf*/
        {
          ++v12; /*0x691ae1*/
          ++v13; /*0x691ae2*/
          if ( v12 >= v10 ) /*0x691ae7*/
            goto LABEL_19; /*0x691ae7*/
        }
      }
      v9[38] = v12; /*0x691aec*/
    }
    else
    {
LABEL_22:
      v9 = 0; /*0x691aff*/
    }
LABEL_23:
    result = (*(int (__thiscall **)(int *, INIClass *))(*v9 + 100))(v9, a1); /*0x691b01*/
    v9[39] = a2; /*0x691b0d*/
    v4 = v15; /*0x691b13*/
    goto LABEL_24; /*0x691b13*/
  }
  return result; /*0x691b20*/
}



// ==== 0x00691B30  nullsub_34  this=-  sig=ida-proto ====
void nullsub_34()
{
  ; /*0x691b30*/
}



// ==== 0x00691C00  TeamTypeClass::CreateScriptType  this=AbstractTypeClass  sig=csp ====
int *__thiscall TeamTypeClass::CreateScriptType(char *Source)
{
  int v2; // esi
  int *v3; // eax
  int *v4; // esi
  int v5; // ecx
  char v6; // al
  int v7; // eax
  int **v8; // edx

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x691c20*/
    return 0; /*0x691c2a*/
  v2 = 0; /*0x691c35*/
  if ( dword_8B41D8 <= 0 ) /*0x691c39*/
  {
LABEL_6:
    v3 = (int *)__2_YAPAXI_Z(0x234u); /*0x691c62*/
    v4 = v3; /*0x691c6c*/
    if ( v3 ) /*0x691c73*/
    {
      AbstractTypeClass::Constructor(v3, Source); /*0x691c7c*/
      v4[39] = 0; /*0x691c81*/
      v4[40] = 0; /*0x691c8b*/
      *v4 = (int)&ScriptTypeClass::`vftable'; /*0x691c95*/
      v4[1] = (int)&ScriptTypeClass::`vftable'; /*0x691c9b*/
      v4[2] = (int)&ScriptTypeClass::`vftable'; /*0x691ca2*/
      v4[3] = (int)&ScriptTypeClass::`vftable'; /*0x691ca9*/
      v5 = dword_8B41D8; /*0x691cb0*/
      if ( dword_8B41D8 < dword_8B41D0 /*0x691cf1*/
        || (byte_8B41D5 || !dword_8B41D0)
        && dword_8B41DC > 0
        && (v6 = (*(int (__thiscall **)(int *, int, _DWORD))(dword_8B41C8 + 8))(
                   &dword_8B41C8,
                   dword_8B41D0 + dword_8B41DC,
                   0),
            v5 = dword_8B41D8,
            v6) )
      {
        dword_8B41D8 = v5 + 1; /*0x691cf6*/
        *((_DWORD *)dword_8B41CC + v5) = v4; /*0x691d02*/
        v5 = dword_8B41D8; /*0x691d05*/
      }
      v7 = 0; /*0x691d0b*/
      if ( v5 <= 0 ) /*0x691d0f*/
      {
LABEL_17:
        v7 = -1; /*0x691d23*/
      }
      else
      {
        v8 = (int **)dword_8B41CC; /*0x691d11*/
        while ( *v8 != v4 ) /*0x691d19*/
        {
          ++v7; /*0x691d1b*/
          ++v8; /*0x691d1c*/
          if ( v7 >= v5 ) /*0x691d21*/
            goto LABEL_17; /*0x691d21*/
        }
      }
      v4[38] = v7; /*0x691d26*/
      return v4; /*0x691d30*/
    }
    return 0; /*0x691d3e*/
  }
  while ( _strcmpi((char *)(*((_DWORD *)dword_8B41CC + v2) + 36), Source) ) /*0x691c52*/
  {
    if ( ++v2 >= dword_8B41D8 ) /*0x691c60*/
      goto LABEL_6; /*0x691c60*/
  }
  return (int *)*((_DWORD *)dword_8B41CC + v2); /*0x691d2e*/
}



// ==== 0x00691D50  ScriptTypeClass::GetClassIdentifier  this=ScriptTypeClass  sig=csp ====
int __stdcall ScriptTypeClass::GetClassIdentifier(ScriptTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x691d56*/
    return -2147467261; /*0x691d58*/
  *a2 = 1123264071; /*0x691d66*/
  a2[1] = 298977161; /*0x691d6e*/
  a2[2] = 1610655148; /*0x691d77*/
  a2[3] = unk_7E97BC; /*0x691d80*/
  return 0; /*0x691d5d*/
}



// ==== 0x00691D90  ScriptTypeClass::LoadTypeData  this=ScriptTypeClass  sig=csp ====
int __stdcall ScriptTypeClass::LoadTypeData(ScriptTypeClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x691d9b*/
  if ( result >= 0 ) /*0x691da2*/
  {
    if ( this ) /*0x691da6*/
    {
      AbstractTypeClass::Init((int)this, (int)&a2); /*0x691daf*/
      this->AbstractClass = &ScriptTypeClass::`vftable'; /*0x691db4*/
      this->? = &ScriptTypeClass::`vftable'; /*0x691dba*/
      this->? = &ScriptTypeClass::`vftable'; /*0x691dc1*/
      this->? = &ScriptTypeClass::`vftable'; /*0x691dc8*/
    }
    return 0; /*0x691dcf*/
  }
  return result; /*0x691dd1*/
}



// ==== 0x00691DE0  ScriptTypeClass::SaveToINI  this=ScriptTypeClass  sig=csp ====
int __stdcall ScriptTypeClass::SaveToINI(ScriptTypeClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x691def*/
  if ( result >= 0 ) /*0x691df6*/
    return 0; /*0x691df8*/
  return result; /*0x691dfa*/
}



// ==== 0x00691E00  ScriptTypeClass::PowerDrainUpdate  this=ScriptTypeClass  sig=csp ====
int __thiscall ScriptTypeClass::PowerDrainUpdate(ScriptTypeClass *this, int *a2)
{
  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x691e09*/
  return Power::TimerProcess(this->scriptActions[28]); /*0x691e1c*/
}



// ==== 0x00691E30  ScriptTypeClass::GetAction  this=ScriptTypeClass  sig=csp ====
void __thiscall ScriptTypeClass::GetAction(ScriptTypeClass *this, int a2, int a3)
{
  int v4; // ecx
  int v5; // edi
  int v6; // esi
  int *v7; // edx
  int v8; // eax
  _DWORD *i; // ecx

  if ( a2 ) /*0x691e3c*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 35 ) /*0x691e49*/
    {
      v4 = -1; /*0x691e51*/
      v5 = 0; /*0x691e54*/
      if ( this->scriptActions[28] > 0 ) /*0x691e58*/
      {
        v6 = *(_DWORD *)&stru_A8EB00.?[204]; /*0x691e5a*/
        v7 = &this->scriptActions[30]; /*0x691e60*/
        do /*0x691e66*/
        {
          if ( *(v7 - 1) == 18 ) /*0x691e6a*/
          {
            if ( v4 == -1 ) /*0x691e6f*/
            {
              v8 = 0; /*0x691e71*/
              if ( v6 <= 0 ) /*0x691e75*/
                return; /*0x691e75*/
              for ( i = *(_DWORD **)&stru_A8EB00.?[192]; *i != a2; ++i ) /*0x691e77*/
              {
                if ( ++v8 >= v6 ) /*0x691e87*/
                  return; /*0x691e87*/
              }
              v4 = v8; /*0x691e8e*/
              if ( v8 == -1 ) /*0x691e90*/
                return; /*0x691e90*/
            }
            if ( *v7 > v4 ) /*0x691e96*/
            {
              --*v7; /*0x691e99*/
LABEL_17:
              v6 = *(_DWORD *)&stru_A8EB00.?[204]; /*0x691ea5*/
              goto LABEL_18; /*0x691ea5*/
            }
            if ( *v7 == v4 ) /*0x691e9d*/
            {
              *v7 = 0; /*0x691e9f*/
              goto LABEL_17; /*0x691e9f*/
            }
          }
LABEL_18:
          ++v5; /*0x691eab*/
          v7 += 2; /*0x691eb2*/
        }
        while ( v5 < this->scriptActions[28] ); /*0x691e66*/
      }
    }
  }
}



// ==== 0x00691EC0  ScriptClass::StubReturn26  this=ScriptClass  sig=csp ====
int ScriptClass::StubReturn26(ScriptClass *this)
{
  return 26; /*0x691ec5*/
}



// ==== 0x00691ED0  ScriptClass::StubReturn48  this=ScriptClass  sig=csp ====
int ScriptClass::StubReturn48(ScriptClass *this)
{
  return 48; /*0x691ed5*/
}



// ==== 0x00691EE0  ScriptClass::ProcessEvent  this=ScriptClass  sig=csp ====
void **__thiscall ScriptClass::ProcessEvent(ScriptClass *this, char a2)
{
  int v3; // eax
  ScriptClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &ScriptClass::`vftable'; /*0x691ee6*/
  this->? = &ScriptClass::`vftable'; /*0x691eec*/
  this->? = &ScriptClass::`vftable'; /*0x691ef3*/
  this->? = &ScriptClass::`vftable'; /*0x691efa*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x691f01*/
  v5 = this; /*0x691f16*/
  v3 = (*(int (__thiscall **)(int *, ScriptClass **))(dword_8872B0 + 16))(&dword_8872B0, &v5); /*0x691f1a*/
  if ( v3 != -1 && v3 < dword_8872C0 && v3 < --dword_8872C0 ) /*0x691f35*/
  {
    do /*0x691f4d*/
    {
      ++v3; /*0x691f3d*/
      *((_DWORD *)dword_8872B4 + v3 - 1) = *((_DWORD *)dword_8872B4 + v3); /*0x691f41*/
    }
    while ( v3 < dword_8872C0 ); /*0x691f4d*/
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x691f51*/
  if ( (a2 & 1) != 0 ) /*0x691f5b*/
    __3_YAXPAX_Z(this); /*0x691f5e*/
  return &this->AbstractClass; /*0x691f68*/
}



// ==== 0x00691F70  ScriptTypeClass::GetTypeIdentifier  this=ScriptTypeClass  sig=csp ====
int ScriptTypeClass::GetTypeIdentifier(ScriptTypeClass *this)
{
  return 27; /*0x691f75*/
}



// ==== 0x00691F80  ScriptTypeClass::GetObjectSize  this=ScriptTypeClass  sig=csp ====
int ScriptTypeClass::GetObjectSize(ScriptTypeClass *this)
{
  return 564; /*0x691f85*/
}



// ==== 0x00691F90  ScriptTypeClass::GetAuxField  this=ScriptTypeClass  sig=csp ====
int __thiscall ScriptTypeClass::GetAuxField(ScriptTypeClass *this)
{
  return this->scriptActions[26]; /*0x691f96*/
}



// ==== 0x00691FA0  ScriptTypeClass::ddtor  this=ScriptTypeClass  sig=csp ====
void **__thiscall ScriptTypeClass::ddtor(ScriptTypeClass *this, char a2)
{
  int v3; // eax
  ScriptTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &ScriptTypeClass::`vftable'; /*0x691fa6*/
  this->? = &ScriptTypeClass::`vftable'; /*0x691fac*/
  this->? = &ScriptTypeClass::`vftable'; /*0x691fb3*/
  this->? = &ScriptTypeClass::`vftable'; /*0x691fba*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x691fc1*/
  v5 = this; /*0x691fd6*/
  v3 = (*(int (__thiscall **)(int *, ScriptTypeClass **))(FootClass_Array.?[4] + 16))(&FootClass_Array.?[4], &v5); /*0x691fda*/
  if ( v3 != -1 && v3 < *(int *)&FootClass_Array.? ) /*0x691fea*/
  {
    --*(_DWORD *)&FootClass_Array.?; /*0x691fef*/
    for ( ; /*0x691ff5*/
          v3 < *(int *)&FootClass_Array.?;
          *(_DWORD *)(FootClass_Array.?[5] + 4 * v3 - 4) = *(_DWORD *)(FootClass_Array.?[5] + 4 * v3) )
    {
      ++v3; /*0x691ffd*/
    }
  }
  AbstractTypeClass::Dtor((AbstractTypeClass *)this); /*0x692011*/
  if ( (a2 & 1) != 0 ) /*0x69201b*/
    __3_YAXPAX_Z(this); /*0x69201e*/
  return &this->AbstractClass; /*0x692028*/
}



// ==== 0x00692030  sub_692030  this=-  sig=ida-proto ====
int sub_692030()
{
  dword_B05648 = 0; /*0x692032*/
  dword_B0564C = 0; /*0x692037*/
  dword_B05650 = 0; /*0x69203c*/
  dword_B05654 = 0; /*0x692041*/
  return 0; /*0x692046*/
}



// ==== 0x00692050  sub_692050  this=-  sig=ida-proto ====
void sub_692050()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x69205c*/
  dbl_B05660 = Math::Sqrt(v0 + v0); /*0x69206e*/
}



// ==== 0x00692080  sub_692080  this=-  sig=ida-proto ====
void sub_692080()
{
  dbl_B056B8 = dbl_B05660 / 60.0; /*0x69208c*/
}



// ==== 0x006920A0  sub_6920A0  this=-  sig=ida-proto ====
void sub_6920A0()
{
  dbl_B056A0 = 1.0 / dbl_B056B8; /*0x6920ac*/
}



// ==== 0x006920C0  sub_6920C0  this=-  sig=ida-proto ====
void sub_6920C0()
{
  dbl_B05698 = 0.0174532925199433 * 45.0; /*0x6920cc*/
}



// ==== 0x006920E0  sub_6920E0  this=-  sig=ida-proto ====
void sub_6920E0()
{
  dbl_B05668 = 0.0174532925199433 * 60.0; /*0x6920ec*/
}



// ==== 0x00692100  sub_692100  this=-  sig=ida-proto ====
void sub_692100()
{
  dbl_B05630 = 0.0174532925199433 * 90.0; /*0x69210c*/
}



// ==== 0x00692120  sub_692120  this=-  sig=ida-proto ====
__int64 sub_692120()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B05630 - dbl_B05668); /*0x692132*/
  result = Math::RoundToInt(v0 * dbl_B05660 * 0.5); /*0x692146*/
  dword_B056C0 = result; /*0x69214b*/
  return result; /*0x692150*/
}



// ==== 0x00692160  sub_692160  this=-  sig=ida-proto ====
void sub_692160()
{
  dbl_B05670 = Math::ArcTan((double)dword_B056C0 * 0.00390625); /*0x692177*/
}



// ==== 0x00692190  sub_692190  this=-  sig=ida-proto ====
void sub_692190()
{
  dbl_B05688 = Math::ArcTan((double)(2 * dword_B056C0) / dbl_B05660); /*0x6921b2*/
}



// ==== 0x006921C0  sub_6921C0  this=-  sig=ida-proto ====
__int64 sub_6921C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B056C0) + 0.5); /*0x6921db*/
  dword_B056B4 = result; /*0x6921e0*/
  return result; /*0x6921e6*/
}



// ==== 0x006921F0  sub_6921F0  this=-  sig=ida-proto ====
int sub_6921F0()
{
  dword_B05658 = 0; /*0x6921f2*/
  return 0; /*0x6921fe*/
}



// ==== 0x00692200  sub_692200  this=-  sig=ida-proto ====
int sub_692200()
{
  dword_B05678 = 0; /*0x692202*/
  dword_B0567C = 0; /*0x692207*/
  dword_B05680 = 0; /*0x69220c*/
  return 0; /*0x692211*/
}



// ==== 0x00692220  sub_692220  this=-  sig=ida-proto ====
int sub_692220()
{
  dword_B056B0 = 0; /*0x692225*/
  dword_B056A8 = 128; /*0x69222f*/
  dword_B056AC = 128; /*0x692234*/
  return 128; /*0x692239*/
}



// ==== 0x00692240  sub_692240  this=-  sig=ida-proto ====
int sub_692240()
{
  dword_B05638 = Timer::GetTicks(); /*0x69224f*/
  dword_B05640 = 0; /*0x692254*/
  return atexit(sub_692270); /*0x692264*/
}



// ==== 0x00692270  sub_692270  this=-  sig=ida-proto ====
void __cdecl sub_692270()
{
  if ( (byte_B05629 & 1) == 0 ) /*0x69227a*/
    byte_B05629 |= 1u; /*0x69227e*/
}



// ==== 0x00692290  ScrollClass::SmallFunc  this=ScrollClass  sig=csp ====
int __thiscall sub_692290(int this)
{
  TabClass::Constructor((_DWORD *)this); /*0x692293*/
  *(_DWORD *)(this + 21832) = 0; /*0x69229a*/
  *(_BYTE *)(this + 21836) = 0; /*0x6922a0*/
  *(_DWORD *)(this + 21840) = 0; /*0x6922a6*/
  *(_DWORD *)(this + 21844) = 0; /*0x6922ac*/
  *(_BYTE *)(this + 21848) = 0; /*0x6922b2*/
  *(_BYTE *)(this + 21850) = 0; /*0x6922b8*/
  *(_BYTE *)(this + 21849) = 1; /*0x6922be*/
  *(_DWORD *)this = &ScrollClass::`vftable'; /*0x6922c5*/
  *(_DWORD *)(this + 21784) = &ScrollClass::`vftable'; /*0x6922cb*/
  return this; /*0x6922d7*/
}



// ==== 0x006922E0  ScrollClass::Scroll  this=ScrollClass  sig=csp ====
int __thiscall ScrollClass::Scroll(ScrollClass *this, int *a2, _DWORD *a3)
{
  TacticalClass::ProcessView((TacticalClass *)this); /*0x6922e3*/
  return BlowStraw_29::Seek((TabClass *)this, a2, a3); /*0x6922f9*/
}



// ==== 0x00692300  Tactical::MouseOver  this=MouseClass  sig=csp ====
int __stdcall Tactical::MouseOver(int *a1, __int16 *a2, int *a3, _DWORD *a4, bool *a5, bool *a6)
{
  int *v6; // edx
  __int16 *v7; // esi
  bool *v8; // edi
  bool *v9; // ecx
  int result; // eax
  int v11; // ebx
  int *v12; // eax
  int v13; // ebx
  int *v14; // eax
  int *v15; // ecx
  int *v16; // edx
  int v17; // edx
  int GroundHeight; // eax
  int v19; // edx
  int v20; // ecx
  bool v21; // al
  bool *v22; // esi
  _DWORD *v23; // eax
  _BYTE *v24; // eax
  _DWORD *v25; // edi
  int v26; // esi
  _DWORD *v27; // eax
  _WORD *v28; // eax
  int v29; // edi
  _DWORD *v30; // eax
  _WORD *v31; // eax
  int v32; // [esp-4h] [ebp-2Ch]
  int v33; // [esp-4h] [ebp-2Ch]
  int v34; // [esp+10h] [ebp-18h] BYREF
  int v35; // [esp+14h] [ebp-14h]
  int v36; // [esp+18h] [ebp-10h]
  _DWORD v37[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v6 = a3; /*0x692307*/
  v7 = a2; /*0x69230e*/
  *a4 = 0; /*0x692312*/
  *(_DWORD *)v7 = dword_B05658; /*0x69231e*/
  *v6 = dword_B05678; /*0x692329*/
  v8 = a5; /*0x692332*/
  v6[1] = dword_B0567C; /*0x692336*/
  v9 = a6; /*0x69233e*/
  v6[2] = dword_B05680; /*0x692342*/
  *v8 = 0; /*0x692345*/
  *v9 = 0; /*0x692348*/
  result = *a1; /*0x69234b*/
  if ( *a1 < 0 ) /*0x692350*/
    goto LABEL_39; /*0x692350*/
  v11 = a1[1]; /*0x692356*/
  if ( v11 < 0 ) /*0x69235b*/
    goto LABEL_39; /*0x69235b*/
  if ( g_TacticalClass_Instance ) /*0x692369*/
  {
    v34 = DSurface_ViewBounds + result; /*0x69237c*/
    v35 = v11 + dword_886FA4; /*0x692380*/
    v12 = Tactical::PixelToCell((int)g_TacticalClass_Instance, &a2, &v34); /*0x69238e*/
    v8 = a5; /*0x692393*/
  }
  else
  {
    v12 = &dword_B05658; /*0x692399*/
  }
  *(_DWORD *)v7 = *v12; /*0x6923a0*/
  if ( g_TacticalClass_Instance ) /*0x6923aa*/
  {
    v13 = a1[1]; /*0x6923ba*/
    v34 = DSurface_ViewBounds + *a1; /*0x6923c1*/
    v35 = v13 + dword_886FA4; /*0x6923c5*/
    v14 = TacticalClass::TransformPixel((int)g_TacticalClass_Instance, v37, &v34); /*0x6923d3*/
    v8 = a5; /*0x6923d8*/
  }
  else
  {
    v14 = &dword_B05678; /*0x6923de*/
  }
  v15 = a3; /*0x6923e3*/
  v16 = a3; /*0x6923e9*/
  *a3 = *v14; /*0x6923eb*/
  v16[1] = v14[1]; /*0x6923f0*/
  v16[2] = v14[2]; /*0x6923f6*/
  result = (int)g_TacticalClass_Instance; /*0x6923f9*/
  if ( g_TacticalClass_Instance && (result = Tactical::IsCellVisible(&dword_87F7E8, v15), (_BYTE)result) ) /*0x692413*/
  {
    v17 = v7[1] << 8; /*0x69242d*/
    v37[0] = (*v7 << 8) + 128; /*0x692430*/
    v37[1] = v17 + 128; /*0x692440*/
    v37[2] = 0; /*0x692444*/
    GroundHeight = Cell::GetGroundHeight(v37); /*0x69244c*/
    v19 = v7[1]; /*0x692454*/
    v20 = (*v7 << 8) + 128; /*0x69245b*/
    v36 = GroundHeight; /*0x692461*/
    v34 = v20; /*0x692465*/
    v35 = (v19 << 8) + 128; /*0x69247c*/
    v21 = (unsigned __int8)Cell::IsPassable(&v34) && g_hWnd; /*0x692492*/
    v22 = a6; /*0x69249b*/
    *a6 = v21; /*0x69249f*/
    *v8 = 0; /*0x6924a1*/
    result = *(_DWORD *)dword_A8B230; /*0x6924aa*/
    if ( (*(_DWORD *)dword_A8B230 & 0x1000) != 0 ) /*0x6924af*/
    {
      v23 = Coord::To_Cell(&dword_87F7E8, &v34); /*0x6924bb*/
      result = (int)Cell::IsBridge(v23); /*0x6924c2*/
      if ( result ) /*0x6924c9*/
      {
        *v8 = *(_BYTE *)(result + 1767); /*0x6924d1*/
      }
      else
      {
        result = (unsigned __int8)Game::Stub3((int)&v34) && g_hWnd; /*0x6924f1*/
        *v8 = result; /*0x6924fa*/
      }
    }
    if ( !*v22 && !*v8 ) /*0x692505*/
    {
      v24 = TacticalClass::IsOccupiedByTechno(g_TacticalClass_Instance, a1); /*0x692515*/
      v25 = a4; /*0x69251a*/
      *a4 = v24; /*0x692520*/
      result = (int)AbstractClass::IsTechnoType(v24); /*0x692522*/
      v26 = result; /*0x692527*/
      if ( result && !*(_BYTE *)(result + 1050) ) /*0x69252d*/
      {
        if ( *(_DWORD *)(result + 544) == 2 /*0x692575*/
          && (v32 = *((_DWORD *)dword_A83D4C + 12),
              v27 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)result + 72))(result, v37),
              v28 = Coord::To_Cell(&dword_87F7E8, v27),
              result = Cell::IsPassableOffset(v28, v32),
              !(_BYTE)result)
          || (result = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 132))(v26), *(_BYTE *)(result + 3226)) )
        {
          *v25 = 0; /*0x69257f*/
        }
      }
      if ( *v25 ) /*0x692585*/
      {
        result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v25 + 44))(*v25); /*0x69258d*/
        if ( result == 6 ) /*0x692593*/
        {
          v29 = *v25; /*0x692595*/
          if ( !*(_BYTE *)(v29 + 1050) ) /*0x692597*/
          {
            if ( *(_BYTE *)(v29 + 1773) == 15 /*0x6925dc*/
              && (v33 = *((_DWORD *)dword_A83D4C + 12),
                  v30 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v26 + 72))(v26, v37),
                  v31 = Coord::To_Cell(&dword_87F7E8, v30),
                  result = Cell::IsPassableOffset(v31, v33),
                  !(_BYTE)result)
              || *(_BYTE *)(*(_DWORD *)(v29 + 1312) + 5889) )
            {
              result = (int)a4; /*0x6925e6*/
              *a4 = 0; /*0x6925ea*/
            }
          }
        }
      }
    }
    LOBYTE(result) = 1; /*0x6925f3*/
  }
  else
  {
LABEL_39:
    LOBYTE(result) = 0; /*0x6925ff*/
  }
  return result; /*0x6925f0*/
}



// ==== 0x00692610  Radar::ScanWaypoints  this=MouseClass  sig=csp ====
int __stdcall Radar_ScanWaypoints(int a1, void *a2, int a3)
{
  void *v3; // esi
  int ClosestEnemy; // eax
  int v6; // esi
  int v7; // eax
  _BYTE *v8; // esi
  char v9; // bl
  _BYTE *v10; // eax
  _BYTE *v11; // edi
  _DWORD *v12; // eax
  _WORD *v13; // eax
  __int16 *v14; // ebp
  _DWORD *v15; // eax
  _WORD *v16; // eax
  char *v17; // eax
  #375 *v18; // eax
  #375 *v19; // eax
  int v20; // eax
  _DWORD *v21; // edi
  bool v22; // bl
  #375 *v23; // ecx
  #375 *v24; // eax
  int v25; // edx
  _DWORD *v26; // eax
  int v27; // eax
  int v28; // [esp-4h] [ebp-24h]
  int v29; // [esp-4h] [ebp-24h]
  int v30; // [esp+10h] [ebp-10h]
  _DWORD v31[2]; // [esp+14h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+1Ch] [ebp-4h]

  v30 = 0; /*0x69261e*/
  if ( dword_A8ECC8 ) /*0x692626*/
  {
    v3 = a2; /*0x692628*/
    if ( a2 ) /*0x69262e*/
    {
      ClosestEnemy = FindRadarClosestEnemy(0, (int)a2); /*0x692634*/
      return (*(int (__thiscall **)(int, void *, _DWORD))(*(_DWORD *)ClosestEnemy + 116))(ClosestEnemy, v3, 0); /*0x692640*/
    }
    else
    {
      v6 = a1; /*0x69264d*/
      v7 = FindRadarClosestEnemy((__int16 *)a1, 0); /*0x692655*/
      return (*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v7 + 112))(v7, v6, a3, 0); /*0x692666*/
    }
  }
  v8 = a2; /*0x692673*/
  v9 = 1; /*0x692677*/
  v10 = AbstractClass::IsTechno(a2); /*0x69267b*/
  v11 = v10; /*0x692680*/
  if ( v10 && !v10[1050] ) /*0x692686*/
  {
    if ( *((_DWORD *)v10 + 136) == 2 /*0x6926cf*/
      && (v28 = *((_DWORD *)dword_A83D4C + 12),
          v12 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v10 + 72))(v10, v31),
          v13 = Coord::To_Cell(&dword_87F7E8, v12),
          !Cell::IsPassableOffset(v13, v28))
      || *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v11 + 132))(v11) + 3226) )
    {
      v9 = 0; /*0x6926d9*/
    }
  }
  v14 = (__int16 *)a1; /*0x6926db*/
  if ( !v8 /*0x692725*/
    || (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 44))(v8) != 6
    || v8[1050]
    || v8[1773] != 15
    || (v29 = *((_DWORD *)dword_A83D4C + 12),
        v15 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v11 + 72))(v11, v31),
        v16 = Coord::To_Cell(&dword_87F7E8, v15),
        Cell::IsPassableOffset(v16, v29)) )
  {
    if ( v9 ) /*0x692734*/
    {
      if ( v8 /*0x692766*/
        && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 312))(v8)
        && ((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 44))(v8) != 6 || !v8[1767])
        && (!v11 || !v11[980]) )
      {
        v30 = 7; /*0x692770*/
      }
      v17 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v14); /*0x69277e*/
      if ( ((_DWORD (__stdcall *)(int, int, int))Radar::FindNearestRadarTarget)( /*0x6927bc*/
             (*v14 << 8) + 128,
             (v14[1] << 8) + 128,
             dword_B056C0 * v17[283]) )
      {
        v30 = 61; /*0x6927c5*/
      }
    }
  }
  if ( byte_880998 ) /*0x6927d4*/
  {
    if ( !v8 /*0x6927fb*/
      || !(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 60))(v8)
      || (v18 = (#375 *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 60))(v8),
          !(unsigned __int8)House::IsHumanPlayer(v18))
      || (v30 = 10, !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 148))(v8)) )
    {
      v30 = 15; /*0x69280d*/
    }
  }
  if ( byte_88099A ) /*0x69281c*/
  {
    v30 = 34; /*0x692820*/
    if ( v8 ) /*0x692828*/
    {
      if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 60))(v8) ) /*0x69282e*/
      {
        v19 = (#375 *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 60))(v8); /*0x692839*/
        if ( (unsigned __int8)House::IsHumanPlayer(v19) ) /*0x69283e*/
        {
          if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 44))(v8) == 6 ) /*0x692851*/
          {
            if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 312))(v8) ) /*0x692857*/
            {
              if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 128))(v8) ) /*0x692865*/
              {
                v20 = *((_DWORD *)v8 + 328); /*0x69286f*/
                if ( *(_BYTE *)(v20 + 5450) ) /*0x692875*/
                {
                  if ( *(int *)(v20 + 3812) > 0 || *(_BYTE *)(v20 + 5491) ) /*0x692889*/
                    v30 = 33; /*0x692893*/
                }
              }
            }
          }
        }
      }
    }
  }
  v21 = Waypoint::FindByCell((char *)dword_A83D4C, v14); /*0x6928a7*/
  if ( byte_88099B ) /*0x6928b0*/
  {
    v22 = Mouse::IsButtonDown(dword_A8EC08) || Mouse::IsButtonDown(dword_A8EC0C); /*0x6928e4*/
    a1 = -1; /*0x6928e8*/
    if ( v21 ) /*0x6928f0*/
      WaypointClass::FindOrCreate((char *)dword_A83D4C, (int)v21, (unsigned int *)&a1, &a2); /*0x692903*/
    if ( dword_8809A4 ) /*0x69290f*/
    {
      v30 = 48; /*0x692911*/
      goto LABEL_65; /*0x692919*/
    }
    if ( v22 ) /*0x692920*/
    {
      v23 = dword_A83D4C; /*0x692922*/
      if ( !v21 ) /*0x69292a*/
      {
LABEL_61:
        if ( *((_DWORD *)v23 + 131) == -1 /*0x692996*/
          || !(unsigned __int8)((int (__fastcall *)(#375 *))Radar::IsRadarTargetEligible)(v23)
          || (v30 = 42, !LayerClass::IsWithinUsableArea(&dword_87F7E8, v14, 1)) )
        {
          v30 = 43; /*0x6929a7*/
        }
        goto LABEL_65; /*0x6929a7*/
      }
      if ( a1 != *((_DWORD *)dword_A83D4C + 131) ) /*0x692938*/
      {
LABEL_59:
        if ( v21 ) /*0x692970*/
        {
          v30 = 46; /*0x692972*/
          goto LABEL_65; /*0x69297a*/
        }
        goto LABEL_61; /*0x692970*/
      }
      if ( (unsigned __int8)((int (__fastcall *)(#375 *))Radar::IsRadarTargetEligible)(dword_A83D4C) /*0x692955*/
        && VectorClass::GetAtChecked(*((int **)dword_A83D4C + a1 + 132), (int)v21) )
      {
        v30 = 47; /*0x69295e*/
        goto LABEL_65; /*0x692966*/
      }
    }
    v23 = dword_A83D4C; /*0x692968*/
    goto LABEL_59; /*0x692968*/
  }
LABEL_65:
  if ( byte_88099C ) /*0x6929b6*/
    v30 = 60; /*0x6929b8*/
  if ( !byte_880999 ) /*0x6929c7*/
    goto LABEL_81; /*0x6929c7*/
  if ( v8
    && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 60))(v8)
    && (v24 = (#375 *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 60))(v8),
        (unsigned __int8)House::IsHumanPlayer(v24))
    && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 152))(v8) )
  {
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 44))(v8) == 6 )
    {
      v30 = (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 128))(v8) != 0 ? 14 : 12;
      goto LABEL_81; /*0x692a24*/
    }
  }
  else
  {
    v25 = v14[1] << 8; /*0x692a3e*/
    v31[0] = (*v14 << 8) + 128; /*0x692a41*/
    v31[1] = v25 + 128; /*0x692a51*/
    GroundHeight = 0; /*0x692a55*/
    GroundHeight = Cell::GetGroundHeight(v31); /*0x692a66*/
    if ( !Cell::IsPassable(v31) /*0x692aa3*/
      && !Game::Stub3((int)v31)
      && *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, v14) + 17) != -1 )
    {
      if ( *(_BYTE *)(*(_DWORD *)&dword_A83D84->TechnoTypeClass[4 /*0x692abc*/
                                                              * *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, v14)
                                                                + 17)]
                    + 680) )
      {
        if ( *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, v14) + 20) != -1 ) /*0x692ad4*/
        {
          v26 = CellCoord::To_CellObj(&dword_87F7E8, v14); /*0x692adc*/
          v30 = 12; /*0x692af4*/
          if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)&dword_A8022C->AbstractClass[4 * v26[20]]) ) /*0x692aed*/
            goto LABEL_81; /*0x692afc*/
        }
      }
    }
  }
  v30 = 14; /*0x692afe*/
LABEL_81:
  if ( dword_8809A0 != -1 ) /*0x692b0e*/
  {
    v27 = (*(int (__thiscall **)(_DWORD, __int16 *, _BYTE *))(**((_DWORD **)dword_A8E334 + dword_8809A0) + 108))( /*0x692b1d*/
            *((_DWORD *)dword_A8E334 + dword_8809A0),
            v14,
            v8);
    if ( v27 ) /*0x692b22*/
      v30 = v27; /*0x692b24*/
  }
  if ( !v30 && v21 ) /*0x692b32*/
    v30 = 44; /*0x692b34*/
  if ( dword_880990 ) /*0x692b43*/
    return 0; /*0x692b45*/
  else
    return v30; /*0x692b51*/
}



// ==== 0x00692B60  Viewport::ProcessScroll  this=Viewport  sig=csp ====
void __thiscall Viewport::ProcessScroll(Viewport *this, _DWORD *a2)
{
  double v2; // st7
  int v4; // ebx
  int (__thiscall **DSurface_field_0x0)(DSurface *); // eax
  int v6; // ebp
  int v7; // ebp
  int v8; // eax
  bool v9; // bl
  int v14; // edx
  __int16 v15; // cx
  unsigned int v17; // ebp
  __int16 v18; // cx
  int v19; // edx
  unsigned int v20; // ebx
  double v21; // st7
  int v23; // eax
  int v24; // edx
  int v25; // esi
  int v26; // eax
  int v27; // esi
  int v28; // eax
  int v29; // eax
  double v30; // [esp+0h] [ebp-38h]
  double v31; // [esp+8h] [ebp-30h]
  int v32; // [esp+20h] [ebp-18h]
  __int64 v33; // [esp+24h] [ebp-14h] BYREF
  int v34; // [esp+2Ch] [ebp-Ch]
  int v35; // [esp+30h] [ebp-8h]
  char v36; // [esp+3Ch] [ebp+4h]

  if ( *((_BYTE *)this + 21850) == 1 ) /*0x692b70*/
    return; /*0x692b70*/
  v4 = DSurface_ViewBounds.field_0 + *a2; /*0x692b92*/
  v35 = (int)DSurface_ViewBounds.field_4 + a2[1]; /*0x692b94*/
  DSurface_field_0x0 = (int (__thiscall **)(DSurface *))DSurface_Sidebar->DSurface_field_0x0; /*0x692b98*/
  v34 = v4; /*0x692b9a*/
  v6 = DSurface_field_0x0[31](DSurface_Sidebar); /*0x692ba7*/
  v7 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)DSurface_Composite->__pad_0 + 124))(DSurface_Composite) /*0x692bb4*/
     + v6
     - 1;
  v8 = (*(int (__thiscall **)(AudioStream *))(*(_DWORD *)DSurface_Composite->__pad_0 + 128))(DSurface_Composite) - 1; /*0x692bc0*/
  v9 = v35 <= 0 || v4 <= 0 || v4 >= v7 || v35 >= v8; /*0x692bd5*/
  v36 = 0; /*0x692bdc*/
  if ( (byte_B05628 & 1) == 0 ) /*0x692be3*/
  {
    byte_B05628 |= 1u; /*0x692bef*/
    atexit(nullsub_175); /*0x692bf5*/
  }
  if ( *((_DWORD *)this + 5458) ) /*0x692bfd*/
  {
    if ( !v9 ) /*0x692c13*/
      goto LABEL_25; /*0x692c13*/
  }
  else if ( !v9 ) /*0x692c09*/
  {
    goto LABEL_41; /*0x692c09*/
  }
  __asm { fild [esp+28h+var_C] } /*0x692c25*/
  v33 = *(_QWORD *)&g_DisplayWidth; /*0x692c29*/
  v36 = 1; /*0x692c2d*/
  __asm { fild dword ptr [esp+28h+var_14] } /*0x692c32*/
  __asm
  {
    fld st
    fmul dbl_83E738
    fld st(2)
    fcompp
    fnstsw ax
  }
  if ( (_AX & 0x100) != 0 ) /*0x692c4b*/
  {
    __asm /*0x692c4d*/
    {
      fstp st
      fstp st
    }
    v32 = 0; /*0x692c51*/
  }
  else
  {
    __asm /*0x692c5b*/
    {
      fld ds:dbl_7E1718
      fsub dbl_83E738
      fmul st, st(1)
      fxch st(1)
      fxch st(2)
      fcompp
      fnstsw ax
    }
    __asm { fstp st }
    if ( (_AX & 0x4100) != 0 ) /*0x692c76*/
      v32 = (int)g_DisplayWidth / 2; /*0x692c86*/
    else
      v32 = (int)&g_DisplayWidth[-1].LoadingScreen_field_0x3C + 3; /*0x692c79*/
  }
  __asm /*0x692c8a*/
  {
    fild [esp+28h+var_8]
    fild dword ptr [esp+28h+var_14+4]
    fld st
    fmul dbl_83E740
    fld st(2)
    fcompp
    fnstsw ax
  }
  if ( (_AX & 0x100) != 0 ) /*0x692ca3*/
  {
    __asm /*0x692ca5*/
    {
      fstp st
      fstp st
    }
    LODWORD(v33) = 0; /*0x692ca9*/
  }
  else
  {
    __asm /*0x692cb3*/
    {
      fld ds:dbl_7E1718
      fsub dbl_83E740
      fmul st, st(1)
      fxch st(1)
      fxch st(2)
      fcompp
      fnstsw ax
    }
    __asm { fstp st }
    if ( (_AX & 0x4100) != 0 ) /*0x692cce*/
      LODWORD(v33) = (int)*(&g_DisplayWidth + 1) / 2; /*0x692cde*/
    else
      LODWORD(v33) = (char *)*(&g_DisplayWidth + 1) - 1; /*0x692cd1*/
  }
  __asm { fild [esp+30h+var_18] } /*0x692cea*/
  v34 = *(_DWORD *)&DSurface_ViewBounds.__pad_8[16] / 2; /*0x692cf6*/
  __asm { fisub [esp+38h+var_C] } /*0x692cff*/
  v35 = *(_DWORD *)&DSurface_ViewBounds.__pad_8[20] / 2; /*0x692d08*/
  __asm /*0x692d0c*/
  {
    fstp [esp+38h+var_30]; double
    fild [esp+38h+var_8]
    fisub dword ptr [esp+38h+var_14]
    fstp [esp+38h+var_38]; double
  }
  Math::CalcAngle(v30, v31); /*0x692d1b*/
  __asm { fsub ds:dbl_7E2820 } /*0x692d20*/
  __asm { fmul ds:dbl_7E2818 }
  WORD2(v33) = Math::RoundToInt(v2); /*0x692d34*/
  dword_B05690 = HIDWORD(v33); /*0x692d3d*/
  dword_B0565C = (unsigned __int8)((unsigned int)((HIDWORD(v33) >> 7) + 1) >> 1); /*0x692d4d*/
LABEL_25:
  v14 = *((_DWORD *)this + 5458); /*0x692d52*/
  LOBYTE(v15) = 0; /*0x692d58*/
  HIBYTE(v15) = dword_B0565C; /*0x692d5a*/
  WORD2(v33) = v15; /*0x692d65*/
  _ESI = 8 - v14; /*0x692d71*/
  v17 = ((unsigned int)((HIDWORD(v33) >> 12) + 1) >> 1) & 7; /*0x692d7f*/
  if ( 8 - v14 < stru_A8EB00.ObjectTypeClass[28] + 1 ) /*0x692d84*/
  {
    _ESI = stru_A8EB00.ObjectTypeClass[28] + 1; /*0x692d86*/
    *((_DWORD *)this + 5458) = 8 - (stru_A8EB00.ObjectTypeClass[28] + 1); /*0x692d8f*/
  }
  if ( (unsigned __int8)Mouse::IsButtonDown(2u) ) /*0x692d9d*/
  {
    if ( ++_ESI >= 4 ) /*0x692daa*/
    {
      if ( _ESI > 8 ) /*0x692db6*/
        _ESI = 8; /*0x692db8*/
    }
    else
    {
      _ESI = 4; /*0x692dac*/
    }
  }
  LOBYTE(v18) = 0; /*0x692dbd*/
  v19 = *(_DWORD *)this->__pad_0; /*0x692dbf*/
  HIBYTE(v18) = dword_B0565C; /*0x692dc1*/
  WORD2(v33) = v18; /*0x692dcb*/
  v20 = ((unsigned int)((HIDWORD(v33) >> 12) + 1) >> 1) & 7; /*0x692ddc*/
  LODWORD(v33) = 1; /*0x692de3*/
  if ( !(*(unsigned __int8 (__thiscall **)(Viewport *, unsigned int, __int64 *, _DWORD))(v19 + 164))(this, v20, &v33, 0) ) /*0x692deb*/
  {
    (*(void (__thiscall **)(Viewport *, unsigned int, _DWORD))(*(_DWORD *)this->__pad_0 + 76))(this, v17 + 9, 0); /*0x692dff*/
    goto LABEL_40; /*0x692e02*/
  }
  v21 = ((double (__thiscall *)(Viewport *, unsigned int, _DWORD))*(_DWORD *)(*(_DWORD *)this->__pad_0 + 76))( /*0x692e0f*/
          this,
          v17 + 1,
          0);
  __asm { fild dword_83E748[esi*4] } /*0x692e12*/
  _ECX = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x692e19*/
  __asm { fmul qword ptr [ecx+5B8h] } /*0x692e1f*/
  LOWORD(v23) = Math::RoundToInt(v21); /*0x692e25*/
  v24 = *(_DWORD *)this->__pad_0; /*0x692e2a*/
  LODWORD(v33) = v23; /*0x692e2c*/
  (*(void (__thiscall **)(Viewport *, unsigned int, __int64 *, int))(v24 + 164))(this, v20, &v33, 1); /*0x692e3a*/
  v25 = dword_B05640; /*0x692e45*/
  if ( dword_B05638 == -1 ) /*0x692e4e*/
  {
LABEL_37:
    if ( v25 ) /*0x692e68*/
      goto LABEL_40; /*0x692e68*/
    goto LABEL_38; /*0x692e68*/
  }
  v26 = Timer::GetTicks() - dword_B05638; /*0x692e5a*/
  if ( v26 < v25 ) /*0x692e62*/
  {
    v25 -= v26; /*0x692e64*/
    goto LABEL_37; /*0x692e64*/
  }
LABEL_38:
  if ( !v36 ) /*0x692e70*/
    goto LABEL_41; /*0x692e70*/
  dword_B05638 = Timer::GetTicks(); /*0x692e84*/
  dword_B0563C = v35; /*0x692e89*/
  dword_B05640 = 1; /*0x692e8f*/
  ++*((_DWORD *)this + 5458); /*0x692e9c*/
LABEL_40:
  if ( v36 ) /*0x692ea8*/
    return; /*0x692ea8*/
LABEL_41:
  v27 = dword_B05640; /*0x692eaa*/
  if ( dword_B05638 == -1 ) /*0x692eb8*/
    goto LABEL_44; /*0x692eb8*/
  v28 = Timer::GetTicks() - dword_B05638; /*0x692ec4*/
  if ( v28 < v27 ) /*0x692ecc*/
  {
    v27 -= v28; /*0x692ece*/
LABEL_44:
    if ( v27 ) /*0x692ed2*/
      return; /*0x692ed2*/
  }
  v29 = *((_DWORD *)this + 5458) - 1; /*0x692ed4*/
  *((_DWORD *)this + 5458) = v29; /*0x692edb*/
  if ( v29 < 0 ) /*0x692ee1*/
    *((_DWORD *)this + 5458) = v29 + 1; /*0x692ee4*/
  dword_B05638 = Timer::GetTicks(); /*0x692ef3*/
  dword_B0563C = v35; /*0x692f01*/
  dword_B05640 = 1; /*0x692f06*/
}



// ==== 0x00692F20  nullsub_175  this=-  sig=ida-proto ====
void __cdecl nullsub_175()
{
  ; /*0x692f20*/
}



// ==== 0x00692F30  TacticalClass::ProcessView  this=TacticalClass  sig=csp ====
void __thiscall TacticalClass::ProcessView(TacticalClass *this)
{
  int v2; // esi
  void *v3; // edi
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // eax
  bool v7[4]; // [esp+4h] [ebp-28h] BYREF
  void *v8; // [esp+8h] [ebp-24h] BYREF
  __int16 v9[2]; // [esp+Ch] [ebp-20h] BYREF
  bool v10[8]; // [esp+10h] [ebp-1Ch] BYREF
  int v11[2]; // [esp+18h] [ebp-14h] BYREF
  int v12[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( !stru_A8EB00.?[440] ) /*0x692f3d*/
  {
    v2 = DSurface_ViewBounds.field_0; /*0x692f4a*/
    v3 = DSurface_ViewBounds.field_4; /*0x692f57*/
    v4 = (_DWORD *)(*(int (__thiscall **)(void *, bool *))(*(_DWORD *)stru_887598.lineTrailer + 52))( /*0x692f5e*/
                     stru_887598.lineTrailer,
                     v10);
    v5 = v4[1]; /*0x692f67*/
    v11[0] = *v4 - v2; /*0x692f6a*/
    v11[1] = v5 - (_DWORD)v3; /*0x692f72*/
    if ( !Map_Process_63AB60(v11[0], v5 - (_DWORD)v3) ) /*0x692f76*/
    {
      if ( *((_BYTE *)this + 21850) == 1 ) /*0x692f8c*/
      {
        if ( (unsigned __int8)Mouse::IsButtonDown(1u) ) /*0x692f96*/
        {
          TacticalClass::ProcessScroll((DisplayClass *)&stru_87F5F0.__pad_58[416], v11); /*0x692fa9*/
        }
        else if ( (unsigned __int8)Mouse::IsButtonDown(2u) ) /*0x692fbb*/
        {
          ScrollMapEdge((ObjectClass *)&stru_87F5F0.__pad_58[416], v11); /*0x692fd2*/
        }
      }
      else
      {
        if ( (unsigned __int8)Tactical::MouseOver(v11, v9, v12, &v8, &v7[3], v10) ) /*0x692ffc*/
        {
          v6 = Radar::ScanWaypoints((int)v9, v8, 1); /*0x693015*/
          TacticalClass::HandlePlayerAction((DisplayClass *)&stru_87F5F0.__pad_58[416], v9, v10[0], v8, v6, 0); /*0x69302f*/
        }
        if ( *((_BYTE *)this + 21849) && !stru_A8EB00.?[391] ) /*0x693045*/
          Viewport::ProcessScroll((Viewport *)this, v11); /*0x69304e*/
      }
    }
  }
}



// ==== 0x00693060  ScrollClass::GetHotspot  this=ScrollClass  sig=csp ====
bool __thiscall MouseClass::GetHotspot(ScrollClass *this)
{
  return *((_BYTE *)this + 21850) /*0x693091*/
      || stru_A8EB00.?[440]
      || g_TacticalClass_Instance && *(float *)&g_TacticalClass_Instance[54] != 0.0;
}



// ==== 0x006930A0  Tactical::HandleTacticalMouseInput  this=Tactical  sig=csp ====
char __thiscall Tactical::HandleTacticalMouseInput(Tactical *this, int a2, _DWORD *a3, int a4, HWND a5)
{
  int v5; // eax
  int v7; // eax
  int v8; // eax
  __int16 v10; // [esp+8h] [ebp-1Ch] BYREF
  bool v11[4]; // [esp+Ch] [ebp-18h] BYREF
  int v12; // [esp+10h] [ebp-14h] BYREF
  int v13; // [esp+14h] [ebp-10h]
  int v14[3]; // [esp+18h] [ebp-Ch] BYREF

  LOBYTE(v5) = byte_A8E378; /*0x6930a0*/
  if ( byte_A8E378 && (stru_A8EB00.?[376] || stru_A8EB00.?[391]) ) /*0x6930c4*/
  {
    if ( byte_A8E9A0 ) /*0x6930d0*/
    {
      if ( g_TacticalClass_Instance ) /*0x6930dc*/
      {
        if ( stru_887598.lineTrailer ) /*0x6930e8*/
        {
          LOBYTE(v5) = (_BYTE)a3; /*0x6930f5*/
          if ( !stru_A8EB00.?[440] || *a3 == 533 ) /*0x693101*/
          {
            v5 = *a3 - 513; /*0x693109*/
            switch ( *a3 ) /*0x69311f*/
            {
              case 0x201: /*0x69311f*/
                a5 = *(HWND *)a5; /*0x693138*/
                v12 = (__int16)a5 - DSurface_ViewBounds.field_0; /*0x693148*/
                v13 = SHIWORD(a5) - (unsigned int)DSurface_ViewBounds.field_4; /*0x693150*/
                LOBYTE(v5) = Tactical::MouseOver(&v12, &v10, v14, &a3, (bool *)&a5, v11); /*0x693170*/
                if ( (_BYTE)v5 ) /*0x693177*/
                {
                  LOBYTE(v5) = HandlePlanningModeClick(v12, v13); /*0x693187*/
                  if ( !(_BYTE)v5 && !*((_BYTE *)this + 21850) ) /*0x693194*/
                  {
                    v7 = Radar::ScanWaypoints((int)&v10, a3, 1); /*0x6931af*/
                    TacticalClass::HandlePlayerAction( /*0x6931c9*/
                      (DisplayClass *)&stru_87F5F0.__pad_58[416],
                      &v10,
                      v11[0],
                      a3,
                      v7,
                      0);
                    DisplayClass::InitViewBounds((DisplayClass *)&stru_87F5F0.__pad_58[416], &v12); /*0x6931d8*/
                    LOBYTE(v5) = (unsigned __int8)SetCapture(g_hWnd); /*0x6931e4*/
                    *((_BYTE *)this + 21850) = 1; /*0x6931ea*/
                  }
                }
                break; /*0x6931f6*/
              case 0x202: /*0x69311f*/
                a5 = *(HWND *)a5; /*0x69320b*/
                v12 = (__int16)a5 - DSurface_ViewBounds.field_0; /*0x69321b*/
                v13 = SHIWORD(a5) - (unsigned int)DSurface_ViewBounds.field_4; /*0x693221*/
                LOBYTE(v5) = ScriptAction::HitTest(v12, v13); /*0x693225*/
                if ( !(_BYTE)v5 && *((_BYTE *)this + 21850) ) /*0x693232*/
                {
                  Tactical::MouseOver(&v12, &v10, v14, &a3, (bool *)&a5, v11); /*0x69325e*/
                  v8 = Radar::ScanWaypoints((int)&v10, a3, 0); /*0x693271*/
                  PlayerClass::ExecuteCommand((DisplayClass *)&stru_87F5F0.__pad_58[416], (int)v14, &v10, a3, v8, 0); /*0x69328b*/
                  *((_BYTE *)this + 21850) = 0; /*0x693290*/
                  LOBYTE(v5) = ReleaseCapture(); /*0x693296*/
                }
                break; /*0x6932a1*/
              case 0x204: /*0x69311f*/
                a5 = *(HWND *)a5; /*0x6932b6*/
                v12 = (__int16)a5 - DSurface_ViewBounds.field_0; /*0x6932c6*/
                v13 = SHIWORD(a5) - (unsigned int)DSurface_ViewBounds.field_4; /*0x6932cc*/
                LOBYTE(v5) = UI_Handle(v12, v13); /*0x6932d0*/
                if ( !*((_BYTE *)this + 21850) ) /*0x6932d5*/
                {
                  LOBYTE(v5) = Tactical::MouseOver(&v12, &v10, v14, &a3, (bool *)&a5, v11); /*0x693301*/
                  if ( (_BYTE)v5 ) /*0x693308*/
                  {
                    if ( !stru_A8EB00.?[440] ) /*0x693314*/
                    {
                      DisplayClass::g_var_2eb6a7((DisplayClass *)&v12); /*0x693320*/
                      dword_884D38 = v12; /*0x69332d*/
                      dword_884D3C = v13; /*0x693339*/
                      byte_884D40 = 0; /*0x69333f*/
                      (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x693347*/
                    }
                    LOBYTE(v5) = (unsigned __int8)SetCapture(g_hWnd); /*0x693351*/
                    *((_BYTE *)this + 21850) = 1; /*0x693357*/
                  }
                }
                break; /*0x693363*/
              case 0x205: /*0x69311f*/
                a5 = *(HWND *)a5; /*0x693378*/
                LOBYTE(v5) = UI_Handle_63AB00( /*0x69338a*/
                               (__int16)a5 - DSurface_ViewBounds.field_0,
                               SHIWORD(a5) - (unsigned int)DSurface_ViewBounds.field_4);
                if ( *((_BYTE *)this + 21850) ) /*0x69338f*/
                {
                  if ( byte_884D40 ) /*0x69339d*/
                  {
                    LOBYTE(v5) = byte_884D44; /*0x69339f*/
                    (*(void (__thiscall **)(char *, _DWORD, int))(*(_DWORD *)&stru_87F5F0.__pad_58[416] + 72))( /*0x6933b1*/
                      &stru_87F5F0.__pad_58[416],
                      0,
                      v5);
                    byte_884D40 = 0; /*0x6933b4*/
                  }
                  else
                  {
                    TacticalClass::DispatchMode((DisplayClass *)&stru_87F5F0.__pad_58[416], (int)&v12); /*0x6933c6*/
                  }
                  DisplayClass::ExitMode((DisplayClass *)this); /*0x6933cd*/
                  *((_BYTE *)this + 21850) = 0; /*0x6933d2*/
                  LOBYTE(v5) = ReleaseCapture(); /*0x6933d8*/
                }
                break; /*0x6933e3*/
              case 0x215: /*0x69311f*/
                LOBYTE(v5) = (_BYTE)g_hWnd; /*0x6933ea*/
                if ( *(HWND *)a5 != g_hWnd && *((_BYTE *)this + 21850) == 1 ) /*0x6933fc*/
                  LOBYTE(v5) = (*(char (__thiscall **)(Tactical *))(*(_DWORD *)this->__pad_0 + 140))(this); /*0x693402*/
                break; /*0x693402*/
              default:
                return v5;
            }
          }
        }
      }
    }
  }
  return v5; /*0x6931f1*/
}



// ==== 0x00693440  ObjectClass::ScrollMapEdge  this=ObjectClass  sig=csp ====
char __thiscall ScrollMapEdge(ObjectClass *this, _DWORD *a2)
{
  char result; // al
  int SystemMetrics; // ecx
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  void (__thiscall **vtable0)(ObjectClass *, _DWORD *); // edx
  int v9; // edi
  LONG v10; // ebp
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  double v18; // st7
  int v19; // eax
  int v20; // eax
  double v21; // st7
  int v22; // eax
  int v23; // eax
  double v24; // st7
  int v25; // eax
  int v26; // eax
  int v27; // esi
  struct tagPOINT Point; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v29; // [esp+14h] [ebp-Ch] BYREF
  _DWORD v30[2]; // [esp+18h] [ebp-8h] BYREF
  unsigned int v31; // [esp+24h] [ebp+4h]

  result = byte_A8E9A0; /*0x693440*/
  if ( byte_A8E9A0 ) /*0x69344f*/
  {
    if ( byte_A8E378 || (result = stru_A8EB00.?[391]) != 0 ) /*0x693465*/
    {
      if ( !*((_BYTE *)this + 21848) ) /*0x69346b*/
      {
        SystemMetrics = GetSystemMetrics(68); /*0x693489*/
        v5 = *a2 - *((_DWORD *)this + 5460); /*0x69348f*/
        if ( (int)((HIDWORD(v5) ^ v5) - HIDWORD(v5)) > 2 * SystemMetrics /*0x6934b4*/
          || (v6 = GetSystemMetrics(69),
              v7 = a2[1] - *((_DWORD *)this + 5461),
              (int)((HIDWORD(v7) ^ v7) - HIDWORD(v7)) > 2 * v6) )
        {
          *((_BYTE *)this + 21848) = 1; /*0x6934b6*/
        }
      }
      result = *((_BYTE *)this + 21848); /*0x6934bd*/
      if ( result ) /*0x6934c5*/
      {
        if ( *((_BYTE *)this + 21836) ) /*0x6934cb*/
          goto LABEL_14; /*0x6934cb*/
        if ( *((_BYTE *)this + 4559) ) /*0x6934d5*/
        {
          vtable0 = (void (__thiscall **)(ObjectClass *, _DWORD *))this->AbstractClass; /*0x6934df*/
          v30[0] = -1; /*0x6934e4*/
          v30[1] = -1; /*0x6934e8*/
          vtable0[49](this, v30); /*0x6934f3*/
        }
        else
        {
          *((_BYTE *)this + 21836) = 1; /*0x6934fb*/
        }
        result = *((_BYTE *)this + 21836); /*0x693502*/
        if ( result ) /*0x69350a*/
        {
LABEL_14:
          v9 = *a2 - *((_DWORD *)this + 5460); /*0x693521*/
          v10 = a2[1] - *((_DWORD *)this + 5461); /*0x693526*/
          Point.x = v10; /*0x69352e*/
          v11 = CalcMathFacing8((_DWORD *)this + 5460, a2); /*0x693532*/
          if ( v11 != dword_83E76C ) /*0x69353d*/
            dword_83E76C = v11; /*0x69353f*/
          if ( !v9 ) /*0x69354c*/
          {
            v12 = *((_DWORD *)this + 5460); /*0x69354e*/
            if ( v12 ) /*0x693556*/
              v9 = v12 >= (int)&g_DisplayWidth[-1].LoadingScreen_field_0x3C + 3; /*0x693564*/
            else
              v9 = -1; /*0x693558*/
          }
          if ( !v10 ) /*0x693575*/
          {
            v13 = *((_DWORD *)this + 5461); /*0x693577*/
            if ( !v13 ) /*0x69357f*/
            {
              v10 = -1; /*0x693581*/
LABEL_25:
              Point.x = v10; /*0x69358f*/
              goto LABEL_26; /*0x69358f*/
            }
            if ( v13 >= (int)*(&g_DisplayWidth + 1) ) /*0x693588*/
            {
              v10 = 1; /*0x69358a*/
              goto LABEL_25; /*0x69358a*/
            }
          }
LABEL_26:
          v14 = *((_DWORD *)this + 5460); /*0x693593*/
          if ( v14 < 10 && v9 < 0 ) /*0x6935a0*/
          {
            if ( v9 > -5 ) /*0x6935e1*/
            {
              v9 = -5; /*0x6935e3*/
LABEL_33:
              v9 *= 4; /*0x6935bb*/
              goto LABEL_34; /*0x6935bb*/
            }
          }
          else if ( v14 <= (int)&g_DisplayWidth[-1].LoadingScreen_field_0x34 + 2 || v9 <= 0 ) /*0x6935ab*/
          {
LABEL_34:
            v15 = *((_DWORD *)this + 5461); /*0x6935c2*/
            if ( v15 < 10 && v10 < 0 ) /*0x6935cf*/
            {
              if ( v10 > -5 ) /*0x6935ed*/
              {
                v10 = -5; /*0x6935ef*/
LABEL_46:
                v10 *= 4; /*0x693604*/
                Point.x = v10; /*0x693607*/
                goto LABEL_47; /*0x693607*/
              }
            }
            else if ( v15 <= (int)&(*(&g_DisplayWidth + 1))[-1].LoadingScreen_field_0x34 + 2 || v10 <= 0 ) /*0x6935da*/
            {
LABEL_47:
              v16 = Map_Helper_5FBF70((ObjectClass *)&stru_A8EB00.ObjectTypeClass[24]); /*0x69360b*/
              if ( v16 ) /*0x693618*/
              {
                v17 = v16 - 1; /*0x69361e*/
                if ( v17 ) /*0x69361f*/
                {
                  if ( v17 == 1 ) /*0x693626*/
                  {
                    v9 = -v9; /*0x693631*/
                    v10 = -v10; /*0x693633*/
                    v30[0] = stru_A8EB00.ObjectTypeClass[28] + 1; /*0x69363a*/
                    v18 = 12.0 / (double)(stru_A8EB00.ObjectTypeClass[28] + 1); /*0x693646*/
                    LOWORD(v19) = Math::RoundToInt(v18); /*0x693652*/
                    v29 = abs32(v19); /*0x693664*/
                    LOWORD(v20) = Math::RoundToInt(v18); /*0x693668*/
                    v30[0] = abs32(v20); /*0x693674*/
                    if ( (int)(v29 + v30[0]) > 0 ) /*0x69367c*/
                      goto LABEL_51; /*0x69367c*/
                  }
                }
                else
                {
                  v30[0] = stru_A8EB00.ObjectTypeClass[28] + 1; /*0x6936d9*/
                  v21 = 12.0 / (double)(stru_A8EB00.ObjectTypeClass[28] + 1); /*0x6936e1*/
                  LOWORD(v22) = Math::RoundToInt(v21); /*0x6936ed*/
                  v29 = abs32(v22); /*0x6936ff*/
                  LOWORD(v23) = Math::RoundToInt(v21); /*0x693703*/
                  v30[0] = abs32(v23); /*0x69370f*/
                  if ( (int)(v29 + v30[0]) > 0 ) /*0x693717*/
                  {
LABEL_51:
                    Point.x = 0; /*0x693682*/
                    Point.y = 0; /*0x693694*/
                    ClientToScreen(g_hWnd, &Point); /*0x693698*/
                    SetCursorPos( /*0x6936c8*/
                      *((_DWORD *)this + 5460) + Point.x + DSurface_ViewBounds.field_0,
                      (int)DSurface_ViewBounds.field_4 + *((_DWORD *)this + 5461) + Point.y);
                  }
                }
              }
              else
              {
                v30[0] = stru_A8EB00.ObjectTypeClass[28] + 1; /*0x693759*/
                v24 = 1.0 / (double)(stru_A8EB00.ObjectTypeClass[28] + 1); /*0x693761*/
                LOWORD(v25) = Math::RoundToInt(v24); /*0x69376d*/
                v29 = abs32(v25); /*0x69377d*/
                LOWORD(v26) = Math::RoundToInt(v24); /*0x693781*/
                v30[0] = abs32(v26); /*0x69378d*/
              }
              v27 = 0; /*0x693791*/
              v31 = 0; /*0x693793*/
              do /*0x6937d5*/
              {
                Point.x = 1; /*0x6937a4*/
                if ( !(unsigned __int8)DisplayClass::SetCoordVisible((DisplayClass *)v27, &Point, 0) ) /*0x6937ac*/
                  v31 |= 1 << (v27 / 2); /*0x6937cb*/
                v27 += 2; /*0x6937cf*/
              }
              while ( v27 < 8 ); /*0x6937d5*/
              if ( v9 <= 0 ) /*0x6937d9*/
              {
                if ( v9 < 0 ) /*0x6937e6*/
                  DisplayClass::SetCoordVisible((DisplayClass *)6, &v29, 1); /*0x6937f6*/
              }
              else
              {
                DisplayClass::SetCoordVisible((DisplayClass *)2, &v29, 1); /*0x6937e4*/
              }
              if ( v10 <= 0 ) /*0x6937fd*/
              {
                if ( v10 < 0 ) /*0x69380a*/
                  DisplayClass::SetCoordVisible(0, v30, 1); /*0x69381a*/
              }
              else
              {
                DisplayClass::SetCoordVisible((DisplayClass *)4, v30, 1); /*0x693808*/
              }
              return (*((int (__thiscall **)(ObjectClass *, int, int))this->AbstractClass + 18))( /*0x693831*/
                       this,
                       dword_83E790[v31],
                       1);
            }
            if ( v10 > 0 && v10 < 5 ) /*0x6935fd*/
              v10 = 5; /*0x6935ff*/
            goto LABEL_46; /*0x6935ff*/
          }
          if ( v9 > 0 && v9 < 5 ) /*0x6935b4*/
            v9 = 5; /*0x6935b6*/
          goto LABEL_33; /*0x6935b6*/
        }
      }
    }
  }
  return result; /*0x693835*/
}



// ==== 0x00693840  ScrollClass::GetButtonState  this=ScrollClass  sig=csp ====
int __thiscall MouseClass::GetButtonState(ScrollClass *this, int a2)
{
  ScrollClass *v2; // esi
  int result; // eax

  v2 = this; /*0x693841*/
  if ( !*((_BYTE *)this + 21848) ) /*0x693843*/
    return TacticalClass::DispatchMode((DisplayClass *)this, a2); /*0x69386f*/
  LOBYTE(this) = byte_884D44; /*0x69384d*/
  result = (*(int (__thiscall **)(ScrollClass *, _DWORD, ScrollClass *))(v2->m_ScrollX + 72))(v2, 0, this); /*0x69385a*/
  LOBYTE(v2[1365].m_MaxX) = 0; /*0x69385d*/
  return result; /*0x693864*/
}



// ==== 0x00693880  ScrollClass::CheckCapture  this=ScrollClass  sig=csp ====
char __thiscall MouseClass::CheckCapture(ScrollClass *this, _DWORD *a2)
{
  char result; // al

  result = stru_A8EB00.?[440]; /*0x693880*/
  if ( !stru_A8EB00.?[440] ) /*0x69388a*/
  {
    DisplayClass::g_var_2eb6a7((DisplayClass *)a2); /*0x693892*/
    *((_DWORD *)this + 5460) = *a2; /*0x693899*/
    *((_DWORD *)this + 5461) = a2[1]; /*0x6938a2*/
    *((_BYTE *)this + 21848) = 0; /*0x6938a8*/
    return (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x6938b7*/
  }
  return result; /*0x6938bb*/
}



// ==== 0x006938C0  ScrollClass::ReleaseCapture  this=ScrollClass  sig=csp ====
int __thiscall Mouse::ReleaseCapture(ScrollClass *this)
{
  int result; // eax

  DisplayClass::ExitMode((DisplayClass *)this); /*0x6938c3*/
  *((_BYTE *)this + 21850) = 0; /*0x6938c8*/
  result = (int)GetCapture(); /*0x6938cf*/
  if ( (HWND)result == g_hWnd ) /*0x6938de*/
    return ReleaseCapture(); /*0x6938e0*/
  return result; /*0x6938db*/
}



// ==== 0x006938F0  ScrollClass::Read  this=ScrollClass  sig=csp ====
char *__thiscall ScrollClass::Read(ScrollClass *this, char a2)
{
  int *v3; // esi
  int v4; // edi

  v3 = (int *)this + 5371; /*0x6938f5*/
  v4 = 4; /*0x6938fb*/
  do /*0x693916*/
  {
    v3 -= 997; /*0x693905*/
    Array::ForEachReverse(v3, 52, 75, (int (__thiscall *)(int))nullsub_56); /*0x693910*/
    --v4; /*0x693915*/
  }
  while ( v4 ); /*0x693916*/
  RadarClass::Destruct((RadarClass *)this); /*0x69391a*/
  if ( (a2 & 1) != 0 ) /*0x693924*/
    __3_YAXPAX_Z(this); /*0x693927*/
  return (char *)this; /*0x69392f*/
}



// ==== 0x00693940  sub_693940  this=-  sig=ida-proto ====
int sub_693940()
{
  dword_B056D0 = 0; /*0x693942*/
  dword_B056D4 = 0; /*0x693947*/
  dword_B056D8 = 0; /*0x69394c*/
  dword_B056DC = 0; /*0x693951*/
  return 0; /*0x693956*/
}



// ==== 0x00693960  sub_693960  this=-  sig=ida-proto ====
void sub_693960()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x69396c*/
  dbl_B056E8 = Math::Sqrt(v0 + v0); /*0x69397e*/
}



// ==== 0x00693990  sub_693990  this=-  sig=ida-proto ====
void sub_693990()
{
  dbl_B05738 = dbl_B056E8 / 60.0; /*0x69399c*/
}



// ==== 0x006939B0  sub_6939B0  this=-  sig=ida-proto ====
void sub_6939B0()
{
  dbl_B05720 = 1.0 / dbl_B05738; /*0x6939bc*/
}



// ==== 0x006939D0  sub_6939D0  this=-  sig=ida-proto ====
void sub_6939D0()
{
  dbl_B05718 = 0.0174532925199433 * 45.0; /*0x6939dc*/
}



// ==== 0x006939F0  sub_6939F0  this=-  sig=ida-proto ====
void sub_6939F0()
{
  dbl_B056F0 = 0.0174532925199433 * 60.0; /*0x6939fc*/
}



// ==== 0x00693A10  sub_693A10  this=-  sig=ida-proto ====
void sub_693A10()
{
  dbl_B056C8 = 0.0174532925199433 * 90.0; /*0x693a1c*/
}



// ==== 0x00693A30  sub_693A30  this=-  sig=ida-proto ====
__int64 sub_693A30()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B056C8 - dbl_B056F0); /*0x693a42*/
  result = Math::RoundToInt(v0 * dbl_B056E8 * 0.5); /*0x693a56*/
  dword_B05740 = result; /*0x693a5b*/
  return result; /*0x693a60*/
}



// ==== 0x00693A70  sub_693A70  this=-  sig=ida-proto ====
void sub_693A70()
{
  dbl_B056F8 = Math::ArcTan((double)dword_B05740 * 0.00390625); /*0x693a87*/
}



// ==== 0x00693AA0  sub_693AA0  this=-  sig=ida-proto ====
void sub_693AA0()
{
  dbl_B05710 = Math::ArcTan((double)(2 * dword_B05740) / dbl_B056E8); /*0x693ac2*/
}



// ==== 0x00693AD0  sub_693AD0  this=-  sig=ida-proto ====
__int64 sub_693AD0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B05740) + 0.5); /*0x693aeb*/
  dword_B05734 = result; /*0x693af0*/
  return result; /*0x693af6*/
}



// ==== 0x00693B00  sub_693B00  this=-  sig=ida-proto ====
int sub_693B00()
{
  word_B056E0 = 0; /*0x693b02*/
  word_B056E2 = 0; /*0x693b08*/
  return 0; /*0x693b0e*/
}



// ==== 0x00693B10  sub_693B10  this=-  sig=ida-proto ====
int sub_693B10()
{
  dword_B05700 = 0; /*0x693b12*/
  dword_B05704 = 0; /*0x693b17*/
  dword_B05708 = 0; /*0x693b1c*/
  return 0; /*0x693b21*/
}



// ==== 0x00693B30  sub_693B30  this=-  sig=ida-proto ====
int sub_693B30()
{
  dword_B05730 = 0; /*0x693b35*/
  dword_B05728 = 128; /*0x693b3f*/
  dword_B0572C = 128; /*0x693b44*/
  return 128; /*0x693b49*/
}



// ==== 0x00693B70  RequestNetworkFile  this=AbstractClass  sig=csp ====
char __fastcall Network_RequestFile(char *a1, int a2, int a3)
{
  char *Flagged; // eax
  char *v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // esi
  int v11; // eax
  bool v13; // al
  char *v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // esi
  int v19; // eax
  int v20; // esi
  int v21; // eax
  char *v22; // eax
  char *v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // esi
  int v27; // eax
  int v28; // esi
  int v29; // eax
  char v30; // bl
  const char *v31; // eax
  DWORD Ticks; // [esp+10h] [ebp-5C0h]
  DWORD v33; // [esp+10h] [ebp-5C0h]
  DWORD v34; // [esp+10h] [ebp-5C0h]
  int v36; // [esp+20h] [ebp-5B0h]
  int v37; // [esp+24h] [ebp-5ACh] BYREF
  _BYTE v38[6]; // [esp+2Ah] [ebp-5A6h] BYREF
  _BYTE v39[12]; // [esp+38h] [ebp-598h] BYREF
  _BYTE v40[4]; // [esp+44h] [ebp-58Ch] BYREF
  _DWORD v41[62]; // [esp+48h] [ebp-588h] BYREF
  __int16 v42; // [esp+140h] [ebp-490h]
  int v43[113]; // [esp+144h] [ebp-48Ch] BYREF
  __int16 v44; // [esp+308h] [ebp-2C8h]
  char v45; // [esp+30Ah] [ebp-2C6h]
  _BYTE v46[163]; // [esp+30Ch] [ebp-2C4h] BYREF
  char v47[89]; // [esp+3AFh] [ebp-221h] BYREF
  int v48; // [esp+408h] [ebp-1C8h] BYREF
  _BYTE v49[171]; // [esp+40Ch] [ebp-1C4h] BYREF
  int v50; // [esp+4B7h] [ebp-119h]
  char v51[277]; // [esp+4BBh] [ebp-115h] BYREF

  v36 = 0; /*0x693b86*/
  Waypoint::InitInvalid(v39); /*0x693b8a*/
  Debug::Log(aGettingFileFro); /*0x693b94*/
  Timer::GetTicks(); /*0x693ba0*/
  Debug::Log(aRequestingFile); /*0x693bb2*/
  Ticks = Timer::GetTicks(); /*0x693bc3*/
  if ( a2 == 1 || a2 == 2 ) /*0x693be4*/
  {
    memset(v41, 0, sizeof(v41)); /*0x693cd4*/
    v42 = 0; /*0x693ce5*/
    v41[0] = 110; /*0x693ce7*/
    Stream::WriteBlock((int)&unk_A8EA70, (int)v41, 250, 1); /*0x693cef*/
    while ( Count::GetCountQueue(&unk_A8EA70) > 0 ) /*0x693d00*/
    {
      v8 = 3600; /*0x693d06*/
      if ( Ticks != -1 ) /*0x693d0d*/
      {
        v9 = Timer::GetTicks() - Ticks; /*0x693d18*/
        if ( v9 >= 3600 ) /*0x693d1e*/
          break; /*0x693d1e*/
        v8 = 3600 - v9; /*0x693d20*/
      }
      if ( !v8 ) /*0x693d24*/
        break; /*0x693d24*/
      Event::Dispatch(); /*0x693d26*/
    }
  }
  else
  {
    memset(v43, 0, sizeof(v43)); /*0x693bfa*/
    v44 = 0; /*0x693c02*/
    v45 = 0; /*0x693c04*/
    v43[0] = 16; /*0x693c05*/
    CopyWideToChar(&v43[1], *(char **)dword_A8DA78, -1); /*0x693c19*/
    if ( dword_A8B238 == 3 ) /*0x693c25*/
    {
      Network::SendMessage((int)unk_A8E9C0, (int)v43, 455, 1, (int)&stru_A8BB1C, 0, 0); /*0x693c42*/
    }
    else
    {
      Flagged = GameSettings::FindFlagged(); /*0x693c49*/
      if ( Flagged ) /*0x693c50*/
      {
        v5 = CharToWideString(Flagged + 36); /*0x693c55*/
        Network::SendToPlayer((int)unk_A8E9C0, (int)v43, 455, 1, (wchar_t *)v5); /*0x693c6f*/
      }
    }
    while ( Network::GetQueueCount((int)unk_A8E9C0) > 0 ) /*0x693c80*/
    {
      v6 = 3600; /*0x693c8a*/
      if ( Ticks != -1 ) /*0x693c91*/
      {
        v7 = Timer::GetTicks() - Ticks; /*0x693c9c*/
        if ( v7 >= 3600 ) /*0x693ca2*/
          break; /*0x693ca2*/
        v6 = 3600 - v7; /*0x693ca8*/
      }
      if ( !v6 ) /*0x693cac*/
        break; /*0x693cac*/
      Event::Dispatch(); /*0x693cb2*/
    }
  }
  v10 = 3600; /*0x693d39*/
  if ( Ticks != -1 ) /*0x693d44*/
  {
    v11 = Timer::GetTicks() - Ticks; /*0x693d4f*/
    if ( v11 >= 3600 ) /*0x693d55*/
    {
LABEL_24:
      Debug::Log(aTimeoutWaiting); /*0x693d5d*/
      return 0; /*0x693d76*/
    }
    v10 = 3600 - v11; /*0x693d57*/
  }
  if ( !v10 ) /*0x693d5b*/
    goto LABEL_24; /*0x693d5b*/
  v33 = Timer::GetTicks(); /*0x693d8e*/
  if ( a2 == 1 || a2 == 2 ) /*0x693da8*/
  {
    while ( 1 ) /*0x693e97*/
    {
      Event::Dispatch(); /*0x693e97*/
      if ( ObjectTypeClass::CreateInstance((int)&unk_A8EA70, (int)v46, (int)v40) > 0 && *(_DWORD *)v46 == 111 ) /*0x693ebe*/
        break; /*0x693ebe*/
      v18 = 3600; /*0x693ec4*/
      if ( v33 != -1 ) /*0x693ecb*/
      {
        v19 = Timer::GetTicks() - v33; /*0x693ed6*/
        if ( v19 >= 3600 ) /*0x693edc*/
          goto LABEL_50; /*0x693edc*/
        v18 = 3600 - v19; /*0x693ede*/
      }
      if ( !v18 ) /*0x693ee2*/
        goto LABEL_50; /*0x693ee2*/
    }
    v17 = *(_DWORD *)&v46[158]; /*0x693ef8*/
    strcpy(a1, v47); /*0x693f0a*/
  }
  else
  {
    while ( 1 ) /*0x693db3*/
    {
      Event::Dispatch(); /*0x693db3*/
      v37 = 455; /*0x693dd4*/
      if ( Network::Send((int)unk_A8E9C0, (int)&v48, (int)&v37, (int)v39, (int)v38) ) /*0x693ddc*/
      {
        v13 = NetworkID::Compare((int)v39, (int)&stru_A8BB1C); /*0x693dee*/
        if ( dword_A8B238 == 4 ) /*0x693df9*/
        {
          v14 = GameSettings::FindFlagged(); /*0x693dfb*/
          v13 = v14 && !_strcmpi(v14 + 36, v49); /*0x693e20*/
        }
        if ( v48 == 17 && v13 ) /*0x693e2d*/
          break; /*0x693e2d*/
      }
      v15 = 3600; /*0x693e33*/
      if ( v33 != -1 ) /*0x693e3a*/
      {
        v16 = Timer::GetTicks() - v33; /*0x693e45*/
        if ( v16 >= 3600 ) /*0x693e4b*/
          goto LABEL_50; /*0x693e4b*/
        v15 = 3600 - v16; /*0x693e51*/
      }
      if ( !v15 ) /*0x693e55*/
        goto LABEL_50; /*0x693e55*/
    }
    v17 = v50; /*0x693e72*/
    strcpy(a1, v51); /*0x693e84*/
  }
  v36 = v17; /*0x693f18*/
  Debug::Log(aHostRespondedW); /*0x693f1c*/
  Debug::Log("File name is %s\n", a1); /*0x693f2b*/
LABEL_50:
  v20 = 3600; /*0x693f33*/
  if ( v33 != -1 ) /*0x693f3e*/
  {
    v21 = Timer::GetTicks() - v33; /*0x693f49*/
    if ( v21 >= 3600 ) /*0x693f4f*/
    {
LABEL_54:
      Debug::Log(aTimeoutWaiting_0); /*0x693f57*/
      return 0; /*0x693f70*/
    }
    v20 = 3600 - v21; /*0x693f51*/
  }
  if ( !v20 ) /*0x693f55*/
    goto LABEL_54; /*0x693f55*/
  Debug::Log(aSendingFileInf); /*0x693f78*/
  v34 = Timer::GetTicks(); /*0x693f95*/
  if ( a2 == 1 || a2 == 2 ) /*0x693faa*/
  {
    memset(v41, 0, sizeof(v41)); /*0x6940b8*/
    v42 = 0; /*0x6940ba*/
    v41[0] = 113; /*0x6940cb*/
    Stream::WriteBlock((int)&unk_A8EA70, (int)v41, 250, 1); /*0x6940d3*/
    while ( Count::GetCountQueue(&unk_A8EA70) > 0 ) /*0x6940e4*/
    {
      v26 = 3600; /*0x6940ea*/
      if ( v34 != -1 ) /*0x6940f1*/
      {
        v27 = Timer::GetTicks() - v34; /*0x6940fc*/
        if ( v27 >= 3600 ) /*0x694102*/
          break; /*0x694102*/
        v26 = 3600 - v27; /*0x694104*/
      }
      if ( !v26 ) /*0x694108*/
        break; /*0x694108*/
      Event::Dispatch(); /*0x69410a*/
    }
  }
  else
  {
    memset(v43, 0, sizeof(v43)); /*0x693fbe*/
    v44 = 0; /*0x693fc0*/
    v45 = 0; /*0x693fc2*/
    v43[0] = 21; /*0x693fc8*/
    strcpy((char *)&v43[1], ToWideStringChar(*(char **)dword_A8DA78)); /*0x693ff7*/
    if ( dword_A8B238 == 4 ) /*0x694007*/
    {
      v22 = GameSettings::FindFlagged(); /*0x694009*/
      if ( v22 ) /*0x694010*/
      {
        v23 = CharToWideString(v22 + 36); /*0x694015*/
        Network::SendToPlayer((int)unk_A8E9C0, (int)v43, 455, 1, (wchar_t *)v23); /*0x69402f*/
      }
    }
    else
    {
      Network::SendMessage((int)unk_A8E9C0, (int)v43, 455, 1, (int)&stru_A8BB1C, 0, 0); /*0x694053*/
    }
    while ( Network::GetQueueCount((int)unk_A8E9C0) > 0 ) /*0x694064*/
    {
      v24 = 3600; /*0x69406e*/
      if ( v34 != -1 ) /*0x694075*/
      {
        v25 = Timer::GetTicks() - v34; /*0x694080*/
        if ( v25 >= 3600 ) /*0x694086*/
          break; /*0x694086*/
        v24 = 3600 - v25; /*0x69408c*/
      }
      if ( !v24 ) /*0x694090*/
        break; /*0x694090*/
      Event::Dispatch(); /*0x694096*/
    }
  }
  v28 = 3600; /*0x69411d*/
  if ( v34 != -1 ) /*0x694128*/
  {
    v29 = Timer::GetTicks() - v34; /*0x694133*/
    if ( v29 >= 3600 ) /*0x694139*/
    {
LABEL_78:
      Debug::Log(aTimeoutWaiting_1); /*0x694141*/
      return 0; /*0x69415a*/
    }
    v28 = 3600 - v29; /*0x69413b*/
  }
  if ( !v28 ) /*0x69413f*/
    goto LABEL_78; /*0x69413f*/
  v30 = ReceiveNetworkFile(a1, v36, a2, a3); /*0x694173*/
  v31 = g_Str_true; /*0x694175*/
  if ( !v30 ) /*0x69417c*/
    v31 = g_Str_false; /*0x69417e*/
  Debug::Log("Receive_Remote_File returned %s\n", v31); /*0x694189*/
  return v30; /*0x693d6c*/
}



// ==== 0x006941A0  ReceiveNetworkFile  this=-  sig=csp ====
char __fastcall ReceiveNetworkFile(int a1, DWORD a2, int a3, char a4)
{
  char *v6; // ebp
  size_t v7; // esi
  wchar_t *StringCSF; // eax
  int v9; // edi
  int v10; // esi
  int v11; // esi
  int v12; // ebx
  char v13; // al
  char *Flagged; // eax
  _BYTE *v15; // eax
  int v16; // esi
  int v17; // esi
  unsigned __int16 v18; // dx
  int v19; // esi
  int v20; // eax
  char v21; // bl
  char v23; // [esp+21h] [ebp-77h]
  char v24[2]; // [esp+22h] [ebp-76h] BYREF
  signed int v25; // [esp+24h] [ebp-74h]
  int v26; // [esp+28h] [ebp-70h]
  LPCVOID lpBuffer; // [esp+2Ch] [ebp-6Ch]
  void *Block; // [esp+30h] [ebp-68h]
  int v29; // [esp+34h] [ebp-64h] BYREF
  int v30; // [esp+38h] [ebp-60h]
  DWORD nNumberOfBytesToWrite; // [esp+3Ch] [ebp-5Ch]
  char v32[4]; // [esp+40h] [ebp-58h] BYREF
  int Ticks; // [esp+44h] [ebp-54h]
  int v34; // [esp+48h] [ebp-50h]
  int v35; // [esp+4Ch] [ebp-4Ch]
  int v36; // [esp+50h] [ebp-48h]
  int v37; // [esp+54h] [ebp-44h]
  int v38; // [esp+58h] [ebp-40h]
  int v39; // [esp+5Ch] [ebp-3Ch]
  int v40; // [esp+60h] [ebp-38h]
  int v41; // [esp+64h] [ebp-34h]
  bool v42[12]; // [esp+68h] [ebp-30h] BYREF
  LPCSTR v43[9]; // [esp+74h] [ebp-24h] BYREF

  nNumberOfBytesToWrite = a2; /*0x6941ae*/
  Ticks = Timer::GetTicks(); /*0x6941bb*/
  v35 = 0; /*0x6941bf*/
  Waypoint::InitInvalid((Waypoint *)v42); /*0x6941c7*/
  v23 = 0; /*0x6941cc*/
  v6 = (char *)__2_YAPAXI_Z(0x1E7u); /*0x6941e1*/
  Debug::Log(); /*0x6941e3*/
  RawFileClass::Construct((BufferIOFileClass *)v43, a1); /*0x6941f0*/
  if ( (unsigned __int8)FileClass::Open((RawFileClass *)v43, 0) ) /*0x6941fb*/
    FileClass::Delete((RawFileClass *)v43); /*0x694208*/
  FileClass::Open2((RawFileClass *)v43, (const CHAR *)2); /*0x694213*/
  v7 = a2 / 0xC0; /*0x69422c*/
  v25 = a2 / 0xC0; /*0x69422f*/
  if ( a2 % 0xC0 ) /*0x69422a*/
    v25 = ++v7; /*0x694238*/
  Block = (void *)__2_YAPAXI_Z(v7); /*0x69424e*/
  memset(Block, 0, v7); /*0x694253*/
  v26 = 0; /*0x694257*/
  lpBuffer = (LPCVOID)__2_YAPAXI_Z(a2); /*0x694269*/
  if ( a4 ) /*0x694279*/
  {
    ProgressAnim::Init((int)&dword_AC4F58, 0, 1079574528, 1, 0); /*0x69428f*/
    SHPClass::Load((int)&dword_AC4F58, g_Str_File_PROGBARM_SHP, 0, 0); /*0x6942a2*/
    StringCSF = GetStringCSF(aGuiMaptransfer, 0, aDRa2mdpostSend, 355); /*0x6942c2*/
    TextRenderer::MeasureBuilding((int *)dword_AC4F58.__pad_0, -1, -1, (int)StringCSF, 0, 1); /*0x6942cf*/
    Screen::Capture(1, 0, a2, (int)v6); /*0x6942d8*/
    LoadScreen::Render((int)&dword_AC4F58, a2, (int)v6, NAN); /*0x6942ea*/
    Network::UpdateLatencyDisplay((int)&dword_AC4F58, 0, 0.0, NAN); /*0x694302*/
  }
  v9 = a3; /*0x694307*/
  if ( a3 == 3 || (v10 = 10800, a3 != 4) ) /*0x69431b*/
    v10 = 3600; /*0x69431d*/
  Ticks = Timer::GetTicks(); /*0x69432b*/
  v34 = v40; /*0x694333*/
  v35 = v10; /*0x69433f*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x694343*/
  {
    IPXManagerClass::createConnection(&unk_A8E9C0); /*0x69434a*/
    TacticalClass::SetCameraPosition(&unk_A8E9C0, 120, -1, 1200); /*0x69435d*/
  }
  if ( a3 == 3 || (v11 = 10800, a3 != 4) ) /*0x69436f*/
    v11 = 3600; /*0x694371*/
  Ticks = Timer::GetTicks(); /*0x694383*/
  v34 = v40; /*0x694387*/
  v35 = v11; /*0x69438b*/
  v12 = 0; /*0x69438f*/
  while ( v9 == 1 || v9 == 2 ) /*0x69439d*/
  {
    MessageLoop(); /*0x69452f*/
    Event::Dispatch(); /*0x694534*/
    if ( ObjectTypeClass::CreateInstance(&unk_A8EA70, (int)v6, (int)v32) <= 0 ) /*0x69454b*/
      goto LABEL_43; /*0x69454b*/
    if ( *(_DWORD *)v6 != 112 ) /*0x694555*/
      goto LABEL_43; /*0x694555*/
    v18 = *((_WORD *)v6 + 12); /*0x694561*/
    if ( *((_BYTE *)Block + v18) ) /*0x694567*/
      goto LABEL_43; /*0x69456a*/
    *((_BYTE *)Block + v18) = 1; /*0x694570*/
    ++v26; /*0x69457c*/
    v12 += 100; /*0x694580*/
    v39 = Timer::GetTicks(); /*0x69458c*/
    Ticks = v39; /*0x694595*/
    v34 = v40; /*0x69459b*/
    v35 = 1800; /*0x69459f*/
    v41 = 1800; /*0x6945ad*/
    Debug::Log(); /*0x6945b1*/
    qmemcpy((char *)lpBuffer + 192 * *((unsigned __int16 *)v6 + 12), v6 + 28, *((unsigned __int16 *)v6 + 13)); /*0x6945dd*/
    if ( a4 ) /*0x6945eb*/
    {
      v30 = v12 / v25; /*0x694604*/
      Network::UpdateLatencyDisplay((int)&dword_AC4F58, 0, (double)(v12 / v25), NAN); /*0x694611*/
    }
    if ( v26 == v25 ) /*0x694620*/
    {
      if ( a4 ) /*0x694685*/
        Network::UpdateLatencyDisplay((int)&dword_AC4F58, 0, 100.0, NAN); /*0x69469d*/
      v23 = 1; /*0x6946a2*/
LABEL_53:
      v21 = v23; /*0x6946a7*/
      goto LABEL_54; /*0x6946a7*/
    }
LABEL_42:
    v9 = a3; /*0x694622*/
LABEL_43:
    v19 = v35; /*0x694629*/
    if ( Ticks != -1 ) /*0x694634*/
    {
      v20 = Timer::GetTicks() - Ticks; /*0x69463f*/
      if ( v20 >= v19 ) /*0x694645*/
        goto LABEL_53; /*0x694645*/
      v19 -= v20; /*0x694647*/
    }
    if ( !v19 ) /*0x69464b*/
      goto LABEL_53; /*0x69464b*/
  }
  MessageLoop(); /*0x6943a3*/
  Event::Dispatch(); /*0x6943a8*/
  v29 = 487; /*0x6943c2*/
  if ( !Network::Send((Network *)&unk_A8E9C0, (int)v6, (int)&v29, (int)v42, (int)v24) ) /*0x6943ca*/
    goto LABEL_43; /*0x6943ca*/
  v13 = NetworkID::Compare(v42, (int)&stru_A8BB1C); /*0x6943e0*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x6943ec*/
  {
    Flagged = GameSettings::FindFlagged(); /*0x6943ee*/
    v13 = Flagged && !_strcmpi(Flagged + 36, v6 + 4); /*0x69440f*/
  }
  if ( *(_DWORD *)v6 != 18 ) /*0x694415*/
    goto LABEL_43; /*0x694415*/
  if ( !v13 ) /*0x69441d*/
    goto LABEL_43; /*0x69441d*/
  v15 = (char *)Block + *((unsigned __int16 *)v6 + 12); /*0x69442d*/
  if ( *v15 ) /*0x69442f*/
    goto LABEL_43; /*0x694432*/
  v16 = v26; /*0x694438*/
  *v15 = 1; /*0x69443c*/
  v12 += 100; /*0x694442*/
  v26 = v16 + 1; /*0x694448*/
  if ( v9 == 3 || (v17 = 10800, v9 != 4) ) /*0x694454*/
    v17 = 3600; /*0x694456*/
  v36 = Timer::GetTicks(); /*0x694471*/
  v38 = v17 / 2; /*0x69447a*/
  Ticks = v36; /*0x69447e*/
  v34 = v37; /*0x694482*/
  v35 = v17 / 2; /*0x694486*/
  if ( v36 != -1 ) /*0x69448a*/
    Timer::GetTicks(); /*0x694490*/
  Debug::Log(); /*0x6944b5*/
  qmemcpy((char *)lpBuffer + 192 * *((unsigned __int16 *)v6 + 12), v6 + 28, *((unsigned __int16 *)v6 + 13)); /*0x6944e1*/
  if ( a4 ) /*0x6944ef*/
  {
    v30 = v12 / v25; /*0x694508*/
    Network::UpdateLatencyDisplay((int)&dword_AC4F58, 0, (double)(v12 / v25), NAN); /*0x694515*/
  }
  if ( v26 != v25 ) /*0x694524*/
    goto LABEL_42; /*0x694524*/
  v21 = 1; /*0x694659*/
  if ( a4 ) /*0x69465d*/
    Network::UpdateLatencyDisplay((int)&dword_AC4F58, 0, 100.0, NAN); /*0x694675*/
LABEL_54:
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x6946b4*/
    IPXManagerClass::destroyConnection(&unk_A8E9C0); /*0x6946bb*/
  FileClass::Write2((RawFileClass *)v43, lpBuffer, nNumberOfBytesToWrite); /*0x6946ce*/
  __3_YAXPAX_Z((void *)lpBuffer); /*0x6946d8*/
  __3_YAXPAX_Z(Block); /*0x6946e2*/
  Debug::Log(); /*0x6946fa*/
  FileClass::CloseHandle((RawFileClass *)v43); /*0x694706*/
  Debug::Log(); /*0x694710*/
  if ( !v21 && (unsigned __int8)FileClass::Open((RawFileClass *)v43, 0) ) /*0x694722*/
  {
    FileClass::Delete((RawFileClass *)v43); /*0x69472f*/
    Debug::Log(); /*0x694739*/
  }
  __3_YAXPAX_Z(v6); /*0x694742*/
  RawFileClass::Dtor((BufferIOFileClass *)v43); /*0x69474e*/
  return v21; /*0x694755*/
}



// ==== 0x00694760  SendNetworkFile  this=char*  sig=csp ====
int __fastcall SendNetworkFile(char *Source, int a2, char a3, char a4)
{
  int result; // eax
  int Size; // ebx
  int v8; // edi
  int v9; // esi
  int v10; // eax
  int v11; // edi
  int v12; // esi
  int v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // esi
  int v17; // eax
  int v18; // esi
  int v19; // eax
  int v20; // edi
  int v21; // ebx
  int v22; // esi
  int v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // ebx
  int v27; // ebp
  wchar_t *StringCSF; // eax
  int v29; // edi
  int v30; // esi
  int v31; // edi
  int v32; // esi
  int v33; // eax
  char *v34; // edi
  int v35; // edx
  int v36; // eax
  int i; // edi
  int v38; // esi
  int j; // edi
  int v40; // esi
  int v41; // eax
  char v42; // bl
  int Ticks; // [esp+20h] [ebp-710h]
  int v44; // [esp+20h] [ebp-710h]
  int v45; // [esp+20h] [ebp-710h]
  int v46; // [esp+28h] [ebp-708h]
  char v47; // [esp+2Fh] [ebp-701h]
  int v48; // [esp+30h] [ebp-700h] BYREF
  int v49; // [esp+34h] [ebp-6FCh]
  int v50; // [esp+38h] [ebp-6F8h]
  int v51; // [esp+3Ch] [ebp-6F4h]
  char v52[2]; // [esp+4Eh] [ebp-6E2h] BYREF
  char v53[4]; // [esp+50h] [ebp-6E0h] BYREF
  CCFileClass v54; // [esp+54h] [ebp-6DCh] BYREF
  int v55[3]; // [esp+ACh] [ebp-684h] BYREF
  int v56; // [esp+B8h] [ebp-678h]
  Waypoint v57; // [esp+C0h] [ebp-670h] BYREF
  _BYTE v58[163]; // [esp+1A8h] [ebp-588h] BYREF
  char v59[89]; // [esp+24Bh] [ebp-4E5h] BYREF
  int v60; // [esp+2A4h] [ebp-48Ch] BYREF
  char v61[171]; // [esp+2A8h] [ebp-488h] BYREF
  int v62; // [esp+353h] [ebp-3DDh]
  char v63[277]; // [esp+357h] [ebp-3D9h] BYREF
  int v64[63]; // [esp+46Ch] [ebp-2C4h] BYREF
  int v65[114]; // [esp+568h] [ebp-1C8h] BYREF

  v51 = a2; /*0x694772*/
  Timer::GetTicks(); /*0x694776*/
  v47 = 0; /*0x69478b*/
  Debug::Log(); /*0x694790*/
  CCFileClass::Construct(&v54, Source); /*0x69479d*/
  if ( !(unsigned __int8)CCFileClass::Open(&v54, 0) ) /*0x6947a7*/
  {
    *(_DWORD *)v54.CDFileClass = &CCFileClass::`vftable'; /*0x6947b7*/
    v56 = 0; /*0x6947bf*/
    Vector::Clear((int)v55); /*0x6947c6*/
    *(_DWORD *)v54.CDFileClass = &off_7E1668; /*0x6947cf*/
    result = BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x6947d7*/
    LOBYTE(result) = 0; /*0x6947dc*/
    return result; /*0x6947e8*/
  }
  Size = CCFileClass::GetSize(&v54); /*0x6947f4*/
  v49 = Size; /*0x6947fa*/
  Ticks = Timer::GetTicks(); /*0x694803*/
  Debug::Log(); /*0x69481d*/
  if ( a2 != 1 && a2 != 2 ) /*0x694831*/
  {
    v60 = 17; /*0x69484f*/
    strcpy(v63, Source); /*0x69485d*/
    v62 = Size; /*0x69486c*/
    strcpy(v61, ToWideStringChar((char *)*dword_A8DA78)); /*0x694897*/
    if ( a3 ) /*0x6948a9*/
    {
      v8 = 1; /*0x6948b0*/
      if ( dword_A8DA84 > 1 ) /*0x6948b7*/
      {
        while ( 1 ) /*0x6948c0*/
        {
          Event::Dispatch(); /*0x6948c0*/
          if ( Network::SendToPlayer((int)&unk_A8E9C0, (int)&v60, 455, 1, (wchar_t *)dword_A8DA78[v8]) ) /*0x6948e3*/
            goto LABEL_12; /*0x6948ea*/
          v9 = 3600; /*0x6948f0*/
          if ( Ticks == -1 ) /*0x6948f6*/
          {
LABEL_11:
            if ( !v9 ) /*0x69490d*/
              goto LABEL_12; /*0x69490d*/
          }
          else
          {
            v10 = Timer::GetTicks() - Ticks; /*0x694901*/
            if ( v10 < 3600 ) /*0x694907*/
            {
              v9 = 3600 - v10; /*0x694909*/
              goto LABEL_11; /*0x694909*/
            }
LABEL_12:
            if ( ++v8 >= dword_A8DA84 ) /*0x694917*/
              goto LABEL_21; /*0x694917*/
          }
        }
      }
      goto LABEL_21; /*0x6948b7*/
    }
    v11 = 0; /*0x694923*/
    if ( dword_A8BB18 <= 0 ) /*0x694927*/
    {
LABEL_21:
      while ( Network::GetQueueCount(&unk_A8E9C0) > 0 ) /*0x6949ba*/
      {
        v14 = 3600; /*0x6949c4*/
        if ( Ticks != -1 ) /*0x6949cb*/
        {
          v15 = Timer::GetTicks() - Ticks; /*0x6949d6*/
          if ( v15 >= 3600 ) /*0x6949dc*/
            goto LABEL_34; /*0x6949dc*/
          v14 = 3600 - v15; /*0x6949e2*/
        }
        if ( !v14 ) /*0x6949e6*/
          break; /*0x6949e6*/
        Event::Dispatch(); /*0x6949ec*/
      }
      goto LABEL_34; /*0x6949fd*/
    }
    while ( 1 ) /*0x694930*/
    {
      Event::Dispatch(); /*0x694930*/
      Debug::Log(); /*0x69494b*/
      if ( Network::SendToPlayer((int)&unk_A8E9C0, (int)&v60, 455, 1, (wchar_t *)dword_A8DA78[byte_A8BB10[v11]]) ) /*0x694978*/
        goto LABEL_20; /*0x69497f*/
      v12 = 3600; /*0x694985*/
      if ( Ticks == -1 ) /*0x69498b*/
      {
LABEL_19:
        if ( !v12 ) /*0x6949a2*/
          goto LABEL_20; /*0x6949a2*/
      }
      else
      {
        v13 = Timer::GetTicks() - Ticks; /*0x694996*/
        if ( v13 < 3600 ) /*0x69499c*/
        {
          v12 = 3600 - v13; /*0x69499e*/
          goto LABEL_19; /*0x69499e*/
        }
LABEL_20:
        if ( ++v11 >= dword_A8BB18 ) /*0x6949ac*/
          goto LABEL_21; /*0x6949ac*/
      }
    }
  }
  *(_DWORD *)v58 = 111; /*0x694a1d*/
  strcpy(v59, Source); /*0x694a2b*/
  *(_DWORD *)&v58[158] = Size; /*0x694a42*/
  Stream::WriteBlock((int *)&unk_A8EA70, (int)v58, 250, 1); /*0x694a4f*/
  while ( Count::GetCountQueue((Count *)&unk_A8EA70) > 0 ) /*0x694a60*/
  {
    v16 = 3600; /*0x694a66*/
    if ( Ticks != -1 ) /*0x694a6d*/
    {
      v17 = Timer::GetTicks() - Ticks; /*0x694a78*/
      if ( v17 >= 3600 ) /*0x694a7e*/
        break; /*0x694a7e*/
      v16 = 3600 - v17; /*0x694a80*/
    }
    if ( !v16 ) /*0x694a84*/
      break; /*0x694a84*/
    Event::Dispatch(); /*0x694a86*/
  }
LABEL_34:
  v18 = 3600; /*0x694a99*/
  if ( Ticks != -1 ) /*0x694aa4*/
  {
    v19 = Timer::GetTicks() - Ticks; /*0x694aaf*/
    if ( v19 >= 3600 ) /*0x694ab5*/
    {
LABEL_38:
      Debug::Log(); /*0x694abd*/
      *(_DWORD *)v54.CDFileClass = &CCFileClass::`vftable'; /*0x694ad1*/
      v56 = 0; /*0x694ad9*/
      Vector::Clear((int)v55); /*0x694ae4*/
      *(_DWORD *)v54.CDFileClass = &off_7E1668; /*0x694aed*/
      result = BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x694af5*/
      LOBYTE(result) = 0; /*0x694afa*/
      return result; /*0x694b06*/
    }
    v18 = 3600 - v19; /*0x694ab7*/
  }
  if ( !v18 ) /*0x694abb*/
    goto LABEL_38; /*0x694abb*/
  Waypoint::InitInvalid(&v57); /*0x694b10*/
  v20 = 0; /*0x694b1c*/
  if ( a3 ) /*0x694b20*/
    v21 = dword_A8DA84 - 1; /*0x694b28*/
  else
    v21 = dword_A8BB18; /*0x694b2d*/
  v44 = Timer::GetTicks(); /*0x694b3c*/
  if ( a2 == 1 || a2 == 2 ) /*0x694b59*/
  {
    while ( 1 ) /*0x694bce*/
    {
      Event::Dispatch(); /*0x694bce*/
      if ( ObjectTypeClass::CreateInstance(&unk_A8EA70, (int)v64, (int)v53) > 0 && v64[0] == 113 ) /*0x694bf5*/
        break; /*0x694bf5*/
      v24 = 3600; /*0x694bfb*/
      if ( v44 != -1 ) /*0x694c02*/
      {
        v25 = Timer::GetTicks() - v44; /*0x694c0d*/
        if ( v25 >= 3600 ) /*0x694c13*/
          goto LABEL_62; /*0x694c13*/
        v24 = 3600 - v25; /*0x694c15*/
      }
      if ( !v24 || v21 <= 0 ) /*0x694c1d*/
        goto LABEL_62; /*0x694c1d*/
    }
    Debug::Log(); /*0x694c26*/
  }
  else
  {
    do /*0x694bc5*/
    {
      Event::Dispatch(); /*0x694b60*/
      v48 = 455; /*0x694b84*/
      if ( Network::Send((Network *)&unk_A8E9C0, (int)v65, (int)&v48, (int)&v57, (int)v52) && v65[0] == 21 ) /*0x694b9c*/
        ++v20; /*0x694b9e*/
      v22 = 3600; /*0x694ba3*/
      if ( v44 != -1 ) /*0x694baa*/
      {
        v23 = Timer::GetTicks() - v44; /*0x694bb5*/
        if ( v23 >= 3600 ) /*0x694bbb*/
          break; /*0x694bbb*/
        v22 = 3600 - v23; /*0x694bbd*/
      }
    }
    while ( v22 && v20 < v21 ); /*0x694bc5*/
  }
LABEL_62:
  v26 = (v49 + 191) / 192; /*0x694c2e*/
  FileClass::Load(&v54, (const CHAR *)1); /*0x694c51*/
  v27 = 0; /*0x694c56*/
  if ( a4 ) /*0x694c61*/
  {
    ProgressAnim::Init((int)&stru_AC4B30.__pad_EC[828], 0, 1079574528, 1, 0); /*0x694c75*/
    SHPClass::Load((int)&stru_AC4B30.__pad_EC[828], g_Str_File_PROGBARM_SHP, 0, 0); /*0x694c86*/
    StringCSF = GetStringCSF(aGuiMaptransfer, 0, aDRa2mdpostSend, 658); /*0x694ca5*/
    TextRenderer::MeasureBuilding((int *)&stru_AC4B30.__pad_EC[828], -1, -1, (int)StringCSF, 0, 1); /*0x694cb2*/
    Screen::Capture(1, 0, v26, 0); /*0x694cbb*/
    LoadScreen::Render((int)&stru_AC4B30.__pad_EC[828], v26, 0, NAN); /*0x694ccd*/
    Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 0.0, NAN); /*0x694ce2*/
  }
  v29 = v51; /*0x694ce7*/
  Timer::GetTicks(); /*0x694d03*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x694d20*/
  {
    IPXManagerClass::createConnection(&unk_A8E9C0); /*0x694d27*/
    TacticalClass::SetCameraPosition(&unk_A8E9C0, 240, -1, 1200); /*0x694d3d*/
  }
  if ( v29 == 3 || (v30 = 10800, v29 != 4) ) /*0x694d4f*/
    v30 = 3600; /*0x694d51*/
  v45 = Timer::GetTicks(); /*0x694d63*/
  v46 = v30; /*0x694d6b*/
  v48 = 0; /*0x694d6f*/
LABEL_70:
  v31 = v49; /*0x694d77*/
  do /*0x694fb0*/
  {
    while ( 1 ) /*0x694d7f*/
    {
      v32 = v46; /*0x694d7f*/
      if ( v45 != -1 ) /*0x694d86*/
      {
        v33 = Timer::GetTicks() - v45; /*0x694d91*/
        if ( v33 >= v46 ) /*0x694d97*/
          goto LABEL_115; /*0x694d97*/
        v32 = v46 - v33; /*0x694d9d*/
      }
      if ( !v32 ) /*0x694da1*/
        goto LABEL_115; /*0x694da1*/
      if ( v51 != 1 && v51 != 2 ) /*0x694db7*/
        break; /*0x694db7*/
      MessageLoop(); /*0x694fbb*/
      Event::Dispatch(); /*0x694fc0*/
      if ( v27 >= v26 ) /*0x694fcc*/
      {
        if ( !Count::GetCountQueue((Count *)&unk_A8EA70) ) /*0x6950e3*/
        {
          v47 = 1; /*0x69514d*/
          if ( a4 ) /*0x695154*/
            Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 100.0, NAN); /*0x69516c*/
LABEL_115:
          v42 = v47; /*0x695171*/
          goto LABEL_116; /*0x695171*/
        }
      }
      else
      {
        if ( Count::GetCountQueue((Count *)&unk_A8EA70) >= 2 ) /*0x694fda*/
          goto LABEL_70; /*0x694fda*/
        *(_DWORD *)&v57.__pad_0[12] = 112; /*0x694fe6*/
        *(_WORD *)&v57.__pad_0[36] = v27; /*0x694ff1*/
        *(_WORD *)&v57.__pad_0[38] = v31; /*0x694ff9*/
        if ( v31 >= 192 ) /*0x695001*/
          *(_WORD *)&v57.__pad_0[38] = 192; /*0x695003*/
        v31 -= *(unsigned __int16 *)&v57.__pad_0[38]; /*0x695021*/
        v49 = v31; /*0x695028*/
        v41 = CCFileClass::Read(&v54, &v57.__pad_0[40], *(unsigned __int16 *)&v57.__pad_0[38]); /*0x69502c*/
        if ( v41 == *(unsigned __int16 *)&v57.__pad_0[38] ) /*0x695040*/
        {
          if ( v45 != -1 ) /*0x69504f*/
            Timer::GetTicks(); /*0x695055*/
          Debug::Log(); /*0x695072*/
          Stream::WriteBlock((int *)&unk_A8EA70, (int)&v57.__pad_0[12], 220, 1); /*0x69508e*/
        }
        ++v27; /*0x69509e*/
        v48 += 100; /*0x6950a4*/
        if ( !a4 ) /*0x6950a8*/
          goto LABEL_70; /*0x6950a8*/
        v50 = v48 / v26; /*0x6950c5*/
        Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, (double)(v48 / v26), NAN); /*0x6950d2*/
      }
    }
    MessageLoop(); /*0x694dbd*/
    Event::Dispatch(); /*0x694dc2*/
    if ( v27 < v26 ) /*0x694dce*/
    {
      if ( Network::GetQueueCount(&unk_A8E9C0) < 10 ) /*0x694ddc*/
      {
        *(_DWORD *)&v57.__pad_0[12] = 18; /*0x694de4*/
        *(_WORD *)&v57.__pad_0[36] = v27; /*0x694def*/
        *(_WORD *)&v57.__pad_0[38] = v31; /*0x694df7*/
        if ( v31 >= 192 ) /*0x694dff*/
          *(_WORD *)&v57.__pad_0[38] = 192; /*0x694e01*/
        v34 = ToWideStringChar((char *)*dword_A8DA78); /*0x694e17*/
        v35 = v49; /*0x694e31*/
        strcpy(&v57.__pad_0[16], v34); /*0x694e38*/
        v49 = v35 - *(unsigned __int16 *)&v57.__pad_0[38]; /*0x694e5c*/
        v36 = CCFileClass::Read(&v54, &v57.__pad_0[40], *(unsigned __int16 *)&v57.__pad_0[38]); /*0x694e60*/
        if ( v36 == *(unsigned __int16 *)&v57.__pad_0[38] ) /*0x694e74*/
        {
          if ( v45 != -1 ) /*0x694e85*/
            Timer::GetTicks(); /*0x694e8b*/
          Debug::Log(); /*0x694ea6*/
          if ( a3 ) /*0x694eb7*/
          {
            for ( i = 1; i < dword_A8DA84; ++i ) /*0x694ec5*/
            {
              do /*0x694ef6*/
              {
                v38 = Network::SendToPlayer((int)&unk_A8E9C0, (int)&v57.__pad_0[12], 220, 1, (wchar_t *)dword_A8DA78[i]); /*0x694eed*/
                Event::Dispatch(); /*0x694eef*/
              }
              while ( !v38 ); /*0x694ef6*/
            }
          }
          else
          {
            for ( j = 0; j < dword_A8BB18; ++j ) /*0x694f0d*/
            {
              do /*0x694f42*/
              {
                v40 = Network::SendToPlayer( /*0x694f39*/
                        (int)&unk_A8E9C0,
                        (int)&v57.__pad_0[12],
                        220,
                        1,
                        (wchar_t *)dword_A8DA78[byte_A8BB10[j]]);
                Event::Dispatch(); /*0x694f3b*/
              }
              while ( !v40 ); /*0x694f42*/
            }
          }
        }
        ++v27; /*0x694f59*/
        v48 += 100; /*0x694f5f*/
        if ( a4 ) /*0x694f63*/
        {
          v50 = v48 / v26; /*0x694f80*/
          Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, (double)(v48 / v26), NAN); /*0x694f8d*/
        }
      }
      goto LABEL_70; /*0x694f92*/
    }
    if ( Network::GetQueueCount(&unk_A8E9C0) ) /*0x694f97*/
      goto LABEL_70; /*0x694f9e*/
  }
  while ( Network::GetQueueCount(&unk_A8E9C0) ); /*0x694fb0*/
  if ( v45 != -1 ) /*0x6950f5*/
    Timer::GetTicks(); /*0x6950fb*/
  Debug::Log(); /*0x695114*/
  v42 = 1; /*0x695125*/
  if ( a4 ) /*0x695127*/
    Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, 100.0, NAN); /*0x69513f*/
LABEL_116:
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x69517c*/
    IPXManagerClass::destroyConnection(&unk_A8E9C0); /*0x695183*/
  Debug::Log(); /*0x69519c*/
  *(_DWORD *)v54.CDFileClass = &CCFileClass::`vftable'; /*0x6951ab*/
  v56 = 0; /*0x6951b3*/
  Vector::Clear((int)v55); /*0x6951be*/
  *(_DWORD *)v54.CDFileClass = &off_7E1668; /*0x6951c7*/
  result = BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x6951cf*/
  LOBYTE(result) = v42; /*0x6951d4*/
  return result; /*0x6947de*/
}



// ==== 0x006951F0  FindAndValidateMap  this=AbstractClass  sig=csp ====
char __fastcall Map_FindAndValidate(void *a1, int a2, const char *a3, int a4, char a5)
{
  const void *v5; // esi
  int v6; // ebp
  int v7; // esi
  int v8; // eax
  int v9; // eax
  void *v13[3]; // [esp+20h] [ebp-CCh] BYREF
  _DWORD v14[10]; // [esp+2Ch] [ebp-C0h] BYREF
  char v15; // [esp+54h] [ebp-98h]
  int v16; // [esp+58h] [ebp-94h]
  int v17; // [esp+5Ch] [ebp-90h]
  int v18[22]; // [esp+60h] [ebp-8Ch] BYREF
  _BYTE v19[12]; // [esp+B8h] [ebp-34h] BYREF
  int v20; // [esp+C4h] [ebp-28h]
  char Destination[32]; // [esp+CCh] [ebp-20h] BYREF

  v5 = a1; /*0x6951fa*/
  if ( !_strcmpi(a1, aRandmapSed) ) /*0x69520a*/
    return 0; /*0x69520a*/
  v6 = 0; /*0x695221*/
  if ( dword_A8B8D8 <= 0 ) /*0x695225*/
    return 0; /*0x69540d*/
  while ( _strcmpi((const void *)(*(_DWORD *)(dword_A8B8CC + 4 * v6) + 88), v5) ) /*0x695249*/
  {
LABEL_17:
    if ( ++v6 >= dword_A8B8D8 ) /*0x6953fb*/
      return 0; /*0x6953fb*/
  }
  CCFileClass::Construct(v18, (char *)(*(_DWORD *)(dword_A8B8CC + 4 * v6) + 88)); /*0x695260*/
  if ( !CCFileClass::Open(v18, 0) && a5 == 1 ) /*0x69527b*/
  {
    v7 = *(_DWORD *)(dword_A8B8CC + 4 * v6); /*0x695283*/
    v8 = Game::CheckForGameCD(60); /*0x69528b*/
    if ( !(unsigned __int8)ScenarioClass::CheckExists(v8) ) /*0x695293*/
    {
      v9 = GameOption::GetField(v7); /*0x69529e*/
      SetSoundWarning(v9); /*0x6952a5*/
    }
    ++dword_A8DAB4; /*0x6952bb*/
    if ( !(unsigned __int8)CD::`vftable'(dword_81C1D0) ) /*0x6952d5*/
    {
      --dword_A8DAB4; /*0x695418*/
      v18[0] = (int)&CCFileClass::`vftable'; /*0x69541d*/
      v20 = 0; /*0x695425*/
      Vector::Clear((int)v19); /*0x69542c*/
      v18[0] = (int)&off_7E1668; /*0x695435*/
      BufferIOFileClass::Dtor(v18); /*0x69543d*/
      return 0; /*0x69544e*/
    }
    --dword_A8DAB4; /*0x6952dc*/
  }
  if ( !CCFileClass::Open(v18, 0) || CCFileClass::GetSize(v18) != a2 ) /*0x695300*/
  {
LABEL_16:
    v18[0] = (int)&CCFileClass::`vftable'; /*0x6953c3*/
    v20 = 0; /*0x6953d2*/
    Vector::Clear((int)v19); /*0x6953d9*/
    v18[0] = (int)&off_7E1668; /*0x6953e2*/
    BufferIOFileClass::Dtor(v18); /*0x6953ea*/
    v5 = a1; /*0x6953ef*/
    goto LABEL_17; /*0x6953ef*/
  }
  v13[1] = 0; /*0x69530a*/
  v13[2] = 0; /*0x69530e*/
  GenericList::Constructor(v14); /*0x695312*/
  v14[0] = &List<INIClass::INISection *>::`vftable'; /*0x695321*/
  memset(&v14[7], 0, 12); /*0x695329*/
  v15 = 0; /*0x695335*/
  v16 = 0; /*0x695339*/
  v17 = 0; /*0x69533d*/
  v13[0] = &INIClass::`vftable'; /*0x695341*/
  FileStraw::Open(v13, (int)v18, 0); /*0x695349*/
  INIClass::GetString( /*0x69536b*/
    (unsigned __int8 ***)v13,
    (unsigned __int8 *)g_INI_Key_Digest,
    (unsigned __int8 *)::a1,
    aNoDigestHereMa,
    Destination,
    32);
  if ( a3 && *a3 && strcmp(a3, Destination) ) /*0x69538f*/
  {
    HashTable::DestroyHashTableINIClass(v13); /*0x6953be*/
    goto LABEL_16; /*0x6953be*/
  }
  strcpy((char *)a1, (const char *)(*(_DWORD *)(dword_A8B8CC + 4 * v6) + 88)); /*0x695472*/
  HashTable::DestroyHashTableINIClass(v13); /*0x69547f*/
  v18[0] = (int)&CCFileClass::`vftable'; /*0x69548b*/
  v20 = 0; /*0x695493*/
  Vector::Clear((int)v19); /*0x69549a*/
  v18[0] = (int)&off_7E1668; /*0x6954a3*/
  BufferIOFileClass::Dtor(v18); /*0x6954ab*/
  return 1; /*0x695401*/
}



// ==== 0x006954C0  sub_6954C0  this=-  sig=ida-proto ====
int sub_6954C0()
{
  dword_B05750 = 0; /*0x6954c2*/
  dword_B05754 = 0; /*0x6954c7*/
  dword_B05758 = 0; /*0x6954cc*/
  dword_B0575C = 0; /*0x6954d1*/
  return 0; /*0x6954d6*/
}



// ==== 0x006954E0  sub_6954E0  this=-  sig=ida-proto ====
void sub_6954E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6954ec*/
  dbl_B05768 = Math::Sqrt(v0 + v0); /*0x6954fe*/
}



// ==== 0x00695510  sub_695510  this=-  sig=ida-proto ====
void sub_695510()
{
  dbl_B057B8 = dbl_B05768 / 60.0; /*0x69551c*/
}



// ==== 0x00695530  sub_695530  this=-  sig=ida-proto ====
void sub_695530()
{
  dbl_B057A0 = 1.0 / dbl_B057B8; /*0x69553c*/
}



// ==== 0x00695550  sub_695550  this=-  sig=ida-proto ====
void sub_695550()
{
  dbl_B05798 = 0.0174532925199433 * 45.0; /*0x69555c*/
}



// ==== 0x00695570  sub_695570  this=-  sig=ida-proto ====
void sub_695570()
{
  dbl_B05770 = 0.0174532925199433 * 60.0; /*0x69557c*/
}



// ==== 0x00695590  sub_695590  this=-  sig=ida-proto ====
void sub_695590()
{
  dbl_B05748 = 0.0174532925199433 * 90.0; /*0x69559c*/
}



// ==== 0x006955B0  sub_6955B0  this=-  sig=ida-proto ====
__int64 sub_6955B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B05748 - dbl_B05770); /*0x6955c2*/
  result = Math::RoundToInt(v0 * dbl_B05768 * 0.5); /*0x6955d6*/
  dword_B057C0 = result; /*0x6955db*/
  return result; /*0x6955e0*/
}



// ==== 0x006955F0  sub_6955F0  this=-  sig=ida-proto ====
void sub_6955F0()
{
  dbl_B05778 = Math::ArcTan((double)dword_B057C0 * 0.00390625); /*0x695607*/
}



// ==== 0x00695620  sub_695620  this=-  sig=ida-proto ====
void sub_695620()
{
  dbl_B05790 = Math::ArcTan((double)(2 * dword_B057C0) / dbl_B05768); /*0x695642*/
}



// ==== 0x00695650  sub_695650  this=-  sig=ida-proto ====
__int64 sub_695650()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B057C0) + 0.5); /*0x69566b*/
  dword_B057B4 = result; /*0x695670*/
  return result; /*0x695676*/
}



// ==== 0x00695680  sub_695680  this=-  sig=ida-proto ====
int sub_695680()
{
  word_B05760 = 0; /*0x695682*/
  word_B05762 = 0; /*0x695688*/
  return 0; /*0x69568e*/
}



// ==== 0x00695690  sub_695690  this=-  sig=ida-proto ====
int sub_695690()
{
  dword_B05780 = 0; /*0x695692*/
  dword_B05784 = 0; /*0x695697*/
  dword_B05788 = 0; /*0x69569c*/
  return 0; /*0x6956a1*/
}



// ==== 0x006956B0  sub_6956B0  this=-  sig=ida-proto ====
int sub_6956B0()
{
  dword_B057B0 = 0; /*0x6956b5*/
  dword_B057A8 = 128; /*0x6956bf*/
  dword_B057AC = 128; /*0x6956c4*/
  return 128; /*0x6956c9*/
}



// ==== 0x006956D0  Network::sendGameEvent  this=NetworkDialog  sig=csp ====
bool __thiscall Network::sendGameEvent(bool *this, _DWORD *a2)
{
  HWND Dialog; // eax
  TechnoTypeClass *v4; // ecx
  bool v5; // zf
  int v7; // [esp+0h] [ebp-8h]

  this->q004 = -1; /*0x6956e0*/
  Dialog = (HWND)CreateDialog(0xEDu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))DlgProcLoadGame, 0); /*0x6956e7*/
  *(_DWORD *)this = Dialog; /*0x6956ee*/
  if ( !Dialog ) /*0x6956f1*/
    return this->q004 == 1; /*0x6956f1*/
  SetWindowLongA(Dialog, 8, (LONG)this); /*0x6956f7*/
  NetworkDialog::InitModemSettings((NetworkDialog *)this, a2); /*0x695704*/
  Dialog::Show(*(Dialog **)this); /*0x69570c*/
  while ( *((int *)this + 1) < 0 ) /*0x695716*/
  {
    if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x69571f*/
      break; /*0x69571f*/
    LOBYTE(v4) = 0; /*0x695721*/
    ScreenSaver::Process(v4, v7); /*0x695723*/
  }
  Dialog::Destroy(*(Dialog **)this); /*0x695732*/
  v5 = this->q004 == 1; /*0x695737*/
  if ( this->q004 == 1 ) /*0x69573b*/
  {
    qmemcpy(a2, this + 136, 0x70u); /*0x695749*/
    return this->q004 == 1; /*0x69574c*/
  }
  return v5; /*0x695750*/
}



// ==== 0x00695760  DlgProcLoadGame  this=-  sig=csp ====
int __stdcall LoadGame_DlgProc(HWND hWnd, WPARAM wParam, unsigned int a3, HWND a4)
{
  int result; // eax
  LONG WindowLongA; // ebx
  HWND DlgItem; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // edi
  void (__stdcall *v11)(HWND, UINT, WPARAM, LPARAM); // ebp
  const char *v12; // edi
  HWND v13; // eax
  HWND v14; // esi
  char *v15; // eax
  char *v16; // edi
  LRESULT v17; // eax
  LPARAM v18; // ebx
  HWND v19; // eax
  HWND v20; // esi
  LRESULT wParama; // [esp+14h] [ebp+8h]
  LRESULT wParamb; // [esp+14h] [ebp+8h]

  result = BaseDialogProc(hWnd, wParam, a3, (unsigned int)a4); /*0x695777*/
  if ( result ) /*0x69577e*/
    return result; /*0x69577e*/
  WindowLongA = GetWindowLongA(hWnd, 8); /*0x69578e*/
  if ( wParam != 273 ) /*0x695799*/
  {
    if ( wParam == 1175 ) /*0x6957a0*/
    {
      DlgItem = GetDlgItem(hWnd, 1629); /*0x6957b2*/
      if ( DlgItem ) /*0x6957bc*/
        SendMessageA(DlgItem, 0xC5u, 0x28u, 0); /*0x6957c8*/
      v7 = GetDlgItem(hWnd, 1631); /*0x6957d0*/
      if ( v7 ) /*0x6957d4*/
        SendMessageA(v7, 0xC5u, 0x3Eu, 0); /*0x6957e0*/
      v8 = GetDlgItem(hWnd, 1626); /*0x6957e8*/
      if ( v8 ) /*0x6957ec*/
      {
        SendMessageA(v8, 0xC5u, 0xFu, 0); /*0x6957fc*/
        return 0; /*0x695804*/
      }
    }
    return 0; /*0x6957ec*/
  }
  if ( (unsigned __int16)a3 > 0x65Bu ) /*0x695813*/
  {
    switch ( (__int16)a3 ) /*0x695a7f*/
    {
      case 1628: /*0x695a7f*/
        if ( HIWORD(a3) ) /*0x695b69*/
        {
          SendMessageA(a4, 0xF1u, 1u, 0); /*0x695b78*/
          SendDlgItemMessageA(hWnd, 1627, 0xF1u, 0, 0); /*0x695b8d*/
        }
        return 0; /*0x695b8d*/
      case 1629: /*0x695a7f*/
        if ( HIWORD(a3) != 1281 ) /*0x695b2d*/
          return 0; /*0x695b2d*/
        goto LABEL_55; /*0x695b2d*/
      case 1630: /*0x695a7f*/
        if ( HIWORD(a3) != 2 ) /*0x695ab1*/
          return 0; /*0x695ab1*/
        if ( SendMessageA(a4, 0x18Bu, 0, 0) <= 0 ) /*0x695acb*/
          return 0; /*0x695acb*/
        v17 = SendMessageA(a4, 0x188u, 0, 0); /*0x695adb*/
        if ( v17 == -1 ) /*0x695ae0*/
          return 0; /*0x695ae0*/
        v18 = WindowLongA + 8; /*0x695ae6*/
        SendMessageA(a4, 0x4B7u, v17, v18); /*0x695af1*/
        v19 = GetDlgItem(hWnd, 1629); /*0x695af9*/
        v20 = v19; /*0x695aff*/
        if ( !v19 ) /*0x695b03*/
          return 0; /*0x695b03*/
        SendMessageA(v19, 0x4B4u, 0, v18); /*0x695b12*/
        SetFocus(v20); /*0x695b15*/
        return 0; /*0x695b21*/
      case 1631: /*0x695a7f*/
        if ( HIWORD(a3) != 1281 && HIWORD(a3) != 512 ) /*0x695a95*/
          return 0; /*0x695a95*/
        DlgProcLoadGame_Load(WindowLongA); /*0x695a9d*/
        return 0; /*0x695aa8*/
      case 1632: /*0x695a7f*/
        if ( HIWORD(a3) ) /*0x695b54*/
          return 0; /*0x695b57*/
        DlgProcLoadGame_Load_696C40(WindowLongA); /*0x695b5b*/
        return 0; /*0x695b66*/
      case 1633: /*0x695a7f*/
        if ( HIWORD(a3) ) /*0x695b3f*/
          return 0; /*0x695b42*/
LABEL_55:
        DlgProcLoadGame_Load_696AE0(WindowLongA); /*0x695b2f*/
        result = 0; /*0x695b39*/
        break; /*0x695b3c*/
      default:
        return 0;
    }
    return result; /*0x695b3c*/
  }
  if ( (unsigned __int16)a3 == 1627 ) /*0x695819*/
  {
    if ( HIWORD(a3) ) /*0x695a3a*/
    {
      SendMessageA(a4, 0xF1u, 1u, 0); /*0x695a4d*/
      SendDlgItemMessageA(hWnd, 1628, 0xF1u, 0, 0); /*0x695a62*/
      return 0; /*0x695a6e*/
    }
    return 0; /*0x695a3d*/
  }
  if ( (unsigned __int16)a3 <= 0x3EBu ) /*0x695824*/
  {
    switch ( (unsigned __int16)a3 ) /*0x695826*/
    {
      case 0x3EBu: /*0x695826*/
        goto LABEL_65; /*0x695826*/
      case 1u: /*0x695826*/
        if ( !HIWORD(a3) && (unsigned __int8)ApplyModemConfigSettings(WindowLongA) == 1 ) /*0x695886*/
        {
          *(_DWORD *)(WindowLongA + 4) = 1; /*0x69588c*/
          return 0; /*0x695899*/
        }
        return 0; /*0x695886*/
      case 2u: /*0x695826*/
        if ( !HIWORD(a3) ) /*0x69585b*/
        {
          *(_DWORD *)(WindowLongA + 4) = 2; /*0x695864*/
          return 0; /*0x695871*/
        }
        return 0; /*0x69585e*/
      case 0x3EAu: /*0x695826*/
LABEL_65:
        if ( HIWORD(a3) ) /*0x695839*/
        {
          SendMessageA(a4, 0xF1u, 1u, 0); /*0x69584c*/
          return 0; /*0x695858*/
        }
        break;
    }
    return 0; /*0x695b93*/
  }
  if ( (unsigned __int16)a3 == 1623 ) /*0x6958a1*/
  {
    if ( HIWORD(a3) != 1 ) /*0x695998*/
      return 0; /*0x695998*/
    v11 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x69599e*/
    wParamb = SendMessageA(a4, 0x147u, 0, 0); /*0x6959b9*/
    if ( SendMessageA(a4, 0x150u, wParamb, 0) == 4 ) /*0x6959c2*/
    {
      v12 = (const char *)(WindowLongA + 8); /*0x6959c8*/
      SendMessageA(a4, 0x4BDu, wParamb, WindowLongA + 8); /*0x6959d3*/
      v13 = GetDlgItem(*(HWND *)WindowLongA, 1631); /*0x6959dd*/
      goto LABEL_38; /*0x6959dd*/
    }
LABEL_34:
    SetFocus(0); /*0x695981*/
    return 0; /*0x69598f*/
  }
  if ( (unsigned __int16)a3 != 1625 ) /*0x6958aa*/
  {
    if ( (unsigned __int16)a3 == 1626 && (HIWORD(a3) == 1281 || HIWORD(a3) == 512) ) /*0x6958c6*/
    {
      v9 = GetDlgItem(*(HWND *)WindowLongA, 1626); /*0x6958d4*/
      v10 = v9; /*0x6958da*/
      if ( v9 ) /*0x6958de*/
      {
        ShowWindow(v9, 0); /*0x6958e7*/
        EnableWindow(v10, 0); /*0x6958f0*/
        SendMessageA(v10, 0x4B5u, 0x10u, WindowLongA + 8); /*0x695902*/
        *(_BYTE *)(WindowLongA + 23) = 0; /*0x69590a*/
        String::Trim((char *)(WindowLongA + 8)); /*0x69590e*/
        _strupr((char *)(WindowLongA + 8)); /*0x695914*/
        ListBox::SetCustomEntry((HWND *)WindowLongA, 1625, 3, (void *)(WindowLongA + 8)); /*0x695926*/
        return 0; /*0x695931*/
      }
    }
    return 0; /*0x6958de*/
  }
  if ( HIWORD(a3) != 1 ) /*0x69593a*/
    return 0; /*0x69593a*/
  v11 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x695940*/
  wParama = SendMessageA(a4, 0x147u, 0, 0); /*0x69595b*/
  if ( SendMessageA(a4, 0x150u, wParama, 0) != 3 ) /*0x695964*/
    goto LABEL_34; /*0x695964*/
  v12 = (const char *)(WindowLongA + 8); /*0x69596a*/
  SendMessageA(a4, 0x4BDu, wParama, WindowLongA + 8); /*0x695975*/
  v13 = GetDlgItem(*(HWND *)WindowLongA, 1626); /*0x69597f*/
LABEL_38:
  v14 = v13; /*0x6959e3*/
  if ( !v13 ) /*0x6959e7*/
    return 0; /*0x6959e7*/
  ShowWindow(v13, 5); /*0x6959f0*/
  EnableWindow(v14, 1); /*0x6959f9*/
  v15 = strchr(v12, 45); /*0x695a02*/
  if ( v15 ) /*0x695a0e*/
  {
    v16 = v15 + 1; /*0x695a10*/
    String::Trim(v15 + 1); /*0x695a13*/
  }
  else
  {
    v16 = &g_INI_DefaultBuffer; /*0x695a1a*/
  }
  v11(v14, 0x4B4u, 0, (LPARAM)v16); /*0x695a28*/
  SetFocus(v14); /*0x695a2b*/
  return 0; /*0x6957ff*/
}



// ==== 0x00695BC0  ObjectClass::ApplyModemConfigSettings  this=ObjectClass  sig=csp ====
char __thiscall ApplyModemConfigSettings(ObjectClass *this)
{
  HWND DlgItem; // eax
  HWND v3; // esi
  LRESULT v4; // edi
  LRESULT v5; // eax
  char *v6; // eax
  unsigned int v7; // edx
  char *v8; // edi
  void **v9; // esi
  char v10; // cl
  unsigned int v11; // eax
  HWND v12; // eax
  HWND v13; // esi
  LRESULT v14; // eax
  LRESULT v15; // eax
  HWND v16; // eax
  LRESULT v17; // eax
  HWND v18; // eax
  HWND v19; // esi
  LRESULT v20; // edi
  LRESULT v21; // eax
  char *v22; // eax
  HWND v23; // eax
  HWND v24; // eax
  HWND v25; // eax
  int v26; // eax
  int v27; // eax
  int *v28; // eax
  int *v30; // eax
  HWND vtable0; // [esp-8h] [ebp-20h]
  wchar_t *StringCSF; // [esp+0h] [ebp-18h]
  wchar_t *v33; // [esp+0h] [ebp-18h]
  AnimClass **p_parachute; // [esp+10h] [ebp-8h]

  Debug::Log(); /*0x695bce*/
  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1623); /*0x695bdf*/
  v3 = DlgItem; /*0x695beb*/
  if ( DlgItem ) /*0x695bef*/
  {
    v4 = SendMessageA(DlgItem, 0x147u, 0, 0); /*0x695c01*/
    v5 = SendMessageA(v3, 0x150u, v4, 0); /*0x695c0c*/
    this->parachute = (AnimClass *)1; /*0x695c11*/
    this->u32_2E = 0; /*0x695c1b*/
    switch ( v5 ) /*0x695c28*/
    {
      case 0: /*0x695c28*/
        this->parachute = (AnimClass *)1016; /*0x695c2f*/
        break; /*0x695c39*/
      case 1: /*0x695c28*/
        this->parachute = (AnimClass *)760; /*0x695c3e*/
        break; /*0x695c48*/
      case 2: /*0x695c28*/
        this->parachute = (AnimClass *)1000; /*0x695c4d*/
        break; /*0x695c57*/
      case 3: /*0x695c28*/
        this->parachute = (AnimClass *)744; /*0x695c5c*/
        break; /*0x695c66*/
      case 4: /*0x695c28*/
        SendMessageA(v3, 0x4BDu, v4, (LPARAM)&this->?); /*0x695c73*/
        BYTE2(this->ambientSoundController[2]) = 0; /*0x695c7b*/
        v6 = strchr((const char *)&this->?, 45); /*0x695c7f*/
        if ( v6 ) /*0x695c89*/
        {
          v7 = strlen(v6 + 1) + 1; /*0x695c93*/
          qmemcpy((char *)this + 184, v6 + 1, 4 * (v7 >> 2)); /*0x695ca6*/
          v9 = (void **)&v6[4 * (v7 >> 2) + 1]; /*0x695ca6*/
          v8 = (char *)this + 4 * (v7 >> 2) + 184; /*0x695ca6*/
          v10 = v7; /*0x695ca8*/
          goto LABEL_10; /*0x695caa*/
        }
        break; /*0x695caa*/
      default:
        SendMessageA(v3, 0x4BDu, v4, (LPARAM)&this->?); /*0x695cb7*/
        BYTE2(this->ambientSoundController[2]) = 0; /*0x695cc1*/
        v11 = strlen((const char *)&this->?) + 1; /*0x695cc5*/
        qmemcpy((char *)this + 184, &this->?, 4 * (v11 >> 2)); /*0x695cd8*/
        v9 = &this->? + (v11 >> 2); /*0x695cd8*/
        v8 = (char *)this + 4 * (v11 >> 2) + 184; /*0x695cd8*/
        v10 = v11; /*0x695cda*/
LABEL_10:
        qmemcpy(v8, v9, v10 & 3); /*0x695cdc*/
        break; /*0x695cdf*/
    }
  }
  p_parachute = &this->parachute; /*0x695cf3*/
  Debug::Log(); /*0x695cf7*/
  Debug::Log(); /*0x695d08*/
  v12 = GetDlgItem((HWND)this->AbstractClass, 1624); /*0x695d1f*/
  v13 = v12; /*0x695d21*/
  if ( v12 ) /*0x695d25*/
  {
    v14 = SendMessageA(v12, 0x147u, 0, 0); /*0x695d31*/
    v15 = SendMessageA(v13, 0x150u, v14, 0); /*0x695d3c*/
    swscanf((&off_83EB58)[v15], g_Str_Fmt_PctD, &this->isAliveFlag); /*0x695d52*/
  }
  Debug::Log(); /*0x695d66*/
  v16 = GetDlgItem((HWND)this->AbstractClass, 1630); /*0x695d77*/
  if ( v16 ) /*0x695d7b*/
  {
    v17 = SendMessageA(v16, 0x188u, 0, 0); /*0x695d87*/
    if ( v17 == -1 || !dword_A8DB5C ) /*0x695d96*/
      *(_DWORD *)&this->isInLogic = -1; /*0x695da0*/
    else
      *(_DWORD *)&this->isInLogic = v17; /*0x695d98*/
  }
  v18 = GetDlgItem((HWND)this->AbstractClass, 1625); /*0x695db3*/
  v19 = v18; /*0x695db5*/
  if ( v18 ) /*0x695db9*/
  {
    v20 = SendMessageA(v18, 0x147u, 0, 0); /*0x695dc7*/
    v21 = SendMessageA(v19, 0x150u, v20, 0); /*0x695dd2*/
    this->location[0] = v21; /*0x695dd7*/
    LOBYTE(this->lineTrailer) = 0; /*0x695ddd*/
    if ( v21 == 3 ) /*0x695de4*/
    {
      SendMessageA(v19, 0x4BDu, v20, (LPARAM)&this->?); /*0x695df1*/
      HIBYTE(this->?) = 0; /*0x695df9*/
      v22 = strchr((const char *)&this->?, 45); /*0x695dfd*/
      if ( v22 ) /*0x695e07*/
        strcpy((char *)&this->lineTrailer, v22 + 1); /*0x695e24*/
    }
  }
  vtable0 = (HWND)this->AbstractClass; /*0x695e3b*/
  this->lastLayer = 0; /*0x695e3c*/
  v23 = GetDlgItem(vtable0, 1627); /*0x695e46*/
  if ( v23 && SendMessageA(v23, 0xF0u, 0, 0) == 1 ) /*0x695e5f*/
    this->lastLayer = 1; /*0x695e61*/
  Debug::Log(); /*0x695e88*/
  v24 = GetDlgItem((HWND)this->AbstractClass, 1002); /*0x695e99*/
  if ( v24 ) /*0x695e9d*/
    this->location[2] = SendMessageA(v24, 0xF0u, 0, 0) == 1; /*0x695eaf*/
  v25 = GetDlgItem((HWND)this->AbstractClass, 1003); /*0x695eca*/
  if ( v25 ) /*0x695ece*/
    this->location[1] = SendMessageA(v25, 0xF0u, 0, 0) == 1; /*0x695ee0*/
  v26 = Modem::OpenPort((Modem *)&unk_A8EA70, p_parachute); /*0x695efc*/
  if ( !v26 ) /*0x695f08*/
    return 1; /*0x695fae*/
  v27 = v26 - 1; /*0x695f0e*/
  if ( v27 ) /*0x695f0f*/
  {
    if ( v27 == 1 ) /*0x695f12*/
    {
      StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_SerialEd_cpp, 535); /*0x695f3c*/
      v28 = (int *)GetStringCSF(aTxtIrqAlreadyI, 0, g_Str_File_SerialEd_cpp, 535); /*0x695f4e*/
      Dialog::ShowMessageBox(v28, StringCSF, 0, 0, 0, (int)asc_82083C); /*0x695f58*/
      return 0; /*0x695f62*/
    }
  }
  else
  {
    v33 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_SerialEd_cpp, 531); /*0x695f87*/
    v30 = (int *)GetStringCSF(aTxtUnableToOpe, 0, g_Str_File_SerialEd_cpp, 531); /*0x695f99*/
    Dialog::ShowMessageBox(v30, v33, 0, 0, 0, (int)p_parachute); /*0x695fa3*/
  }
  return 0; /*0x695f01*/
}



// ==== 0x00695FD0  NetworkDialog::InitModemSettings  this=NetworkDialog  sig=csp ====
int __thiscall NetworkDialog::InitModemSettings(NetworkDialog *this, _DWORD *a2)
{
  HWND (__stdcall *v3)(HWND, int); // esi
  HWND DlgItem; // eax
  HWND v5; // edi
  LPARAM i; // esi
  LRESULT v7; // eax
  WPARAM ListBoxItem; // eax
  HWND v9; // eax
  HWND v10; // eax
  char *v11; // edx
  int v12; // eax
  HWND v13; // eax
  int result; // eax
  bool v15; // [esp+13h] [ebp-5h]
  char *v16; // [esp+14h] [ebp-4h]

  qmemcpy((char *)this + 136, a2, 0x70u); /*0x695fea*/
  if ( !*((_DWORD *)this + 34) ) /*0x695fec*/
    *((_DWORD *)this + 34) = 760; /*0x695ff1*/
  if ( *((_DWORD *)this + 35) == -1 ) /*0x696002*/
    *((_DWORD *)this + 35) = 3; /*0x696004*/
  if ( *((_DWORD *)this + 36) == -1 ) /*0x696014*/
    *((_DWORD *)this + 36) = 57600; /*0x696016*/
  InitializeModemPortSelect((ObjectClass *)this); /*0x696022*/
  NetworkDialog::Dispatch(this); /*0x696029*/
  v3 = GetDlgItem; /*0x696030*/
  DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1625); /*0x69603c*/
  v5 = DlgItem; /*0x696044*/
  if ( DlgItem ) /*0x696048*/
  {
    SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x696054*/
    for ( i = 0; i < 4; ++i ) /*0x696056*/
    {
      v7 = SendMessageA(v5, 0x4C2u, 0, *(_DWORD *)(dword_A8DB68 + 4 * i)); /*0x69606a*/
      SendMessageA(v5, 0x151u, v7, i); /*0x696074*/
    }
    ListBoxItem = FindListBoxItem(v5, -1, *((_DWORD *)this + 39)); /*0x696088*/
    SendMessageA(v5, 0x14Eu, ListBoxItem, 0); /*0x696096*/
    v3 = GetDlgItem; /*0x696098*/
  }
  v15 = *((_DWORD *)this + 37) == 0; /*0x6960ae*/
  v9 = v3(*(HWND *)this->__pad_0, 1628); /*0x6960b3*/
  if ( v9 ) /*0x6960b7*/
    SendMessageA(v9, 0xF1u, v15, 0); /*0x6960ce*/
  v10 = v3(*(HWND *)this->__pad_0, 1627); /*0x6960d8*/
  if ( v10 ) /*0x6960dc*/
    SendMessageA(v10, 0xF1u, !v15, 0); /*0x6960f2*/
  if ( !dword_A8DB5C ) /*0x6960fb*/
  {
    v11 = (char *)__2_YAPAXI_Z(8u); /*0x696108*/
    v16 = v11; /*0x696117*/
    strcpy(v11, (const char *)&off_832A08); /*0x69612a*/
    if ( dword_A8DB5C >= dword_A8DB54 ) /*0x696140*/
    {
      if ( !byte_A8DB59 && dword_A8DB54 /*0x69616a*/
        || dword_A8DB60 <= 0
        || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8DB4C + 8))(
              &dword_A8DB4C,
              dword_A8DB54 + dword_A8DB60,
              0) )
      {
        goto LABEL_23; /*0x69616f*/
      }
      v11 = v16; /*0x696171*/
    }
    v12 = dword_A8DB5C++; /*0x69617b*/
    *(_DWORD *)(dword_A8DB50 + 4 * v12) = v11; /*0x69618a*/
LABEL_23:
    v3 = GetDlgItem; /*0x69618d*/
    *((_DWORD *)this + 38) = 0; /*0x696193*/
  }
  NetworkDialog::UpdateListBox(this); /*0x69619d*/
  v13 = v3(*(HWND *)this->__pad_0, 1003); /*0x6961ac*/
  if ( v13 ) /*0x6961b0*/
    SendMessageA(v13, 0xF1u, a2[6] != 0, 0); /*0x6961c9*/
  result = (int)v3(*(HWND *)this->__pad_0, 1002); /*0x6961d3*/
  if ( result ) /*0x6961d7*/
    return SendMessageA((HWND)result, 0xF1u, a2[7] != 0, 0); /*0x6961f0*/
  return result; /*0x6961f2*/
}



// ==== 0x00696200  ObjectClass::InitializeModemPortSelect  this=ObjectClass  sig=csp ====
int __thiscall InitializeModemPortSelect(ObjectClass *this)
{
  int result; // eax
  HWND v3; // esi
  wchar_t **v4; // edi
  wchar_t *StringCSF; // eax
  LRESULT v6; // eax
  int v7; // edi
  int v8; // eax
  const char **v9; // eax
  void **v10; // edi
  const char *v11; // eax
  LRESULT v12; // eax
  wchar_t *v13; // eax
  LRESULT v14; // eax
  LRESULT ListBoxItem; // edi
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  AnimClass *parachute; // eax
  char *v19; // eax
  int v20; // eax
  wchar_t *v21; // eax
  AnimClass *v22; // [esp-4h] [ebp-218h]
  LPARAM lParam; // [esp+10h] [ebp-204h]
  LPARAM lParama; // [esp+10h] [ebp-204h]
  wchar_t Destination[128]; // [esp+14h] [ebp-200h] BYREF
  wchar_t Buffer[128]; // [esp+114h] [ebp-100h] BYREF

  result = (int)GetDlgItem((HWND)this->AbstractClass, 1623); /*0x696215*/
  v3 = (HWND)result; /*0x69621b*/
  if ( result ) /*0x69621f*/
  {
    SendMessageA((HWND)result, 0x14Bu, 0, 0); /*0x696235*/
    lParam = 0; /*0x696237*/
    v4 = (wchar_t **)off_83EB44; /*0x69623f*/
    do /*0x696282*/
    {
      StringCSF = GetStringCSF(*v4, 0, g_Str_File_SerialEd_cpp, 647); /*0x696252*/
      v6 = SendMessageA(v3, 0x4C2u, 0, (LPARAM)StringCSF); /*0x696260*/
      SendMessageA(v3, 0x151u, v6, lParam); /*0x69626e*/
      ++v4; /*0x696274*/
      ++lParam; /*0x69627e*/
    }
    while ( (int)v4 < (int)&off_83EB54 ); /*0x696282*/
    v7 = 0; /*0x696284*/
    *((_DWORD *)this + 62) = 0; /*0x696286*/
    for ( lParama = 0; lParama < 10; ++lParama ) /*0x69628c*/
    {
      v8 = __2_YAPAXI_Z(0x1Cu); /*0x696292*/
      if ( v8 ) /*0x69629c*/
      {
        v9 = (const char **)Modem::EnumerateDevices(v8, v7); /*0x6962a1*/
        v10 = (void **)v9; /*0x6962a6*/
        if ( v9 ) /*0x6962aa*/
        {
          v11 = *v9; /*0x6962ac*/
          if ( *v10 ) /*0x6962ac*/
          {
            strncpy((char *)this + 63 * *((_DWORD *)this + 62) + 252, v11, 0x3Fu); /*0x6962c8*/
            v12 = SendMessageA(v3, 0x4BCu, 0, (LPARAM)this + 63 * *((_DWORD *)this + 62) + 252); /*0x6962eb*/
            SendMessageA(v3, 0x151u, v12, *((_DWORD *)this + 62) + 5); /*0x6962fe*/
            ++*((_DWORD *)this + 62); /*0x696300*/
          }
          FileFind::Close(v10); /*0x696308*/
          __3_YAXPAX_Z(v10); /*0x69630e*/
        }
      }
      v7 = lParama + 1; /*0x69631a*/
    }
    v13 = GetStringCSF(g_Str_TXT_CUSTOM, 0, g_Str_File_SerialEd_cpp, 674); /*0x696339*/
    wcscpy(Destination, v13); /*0x696344*/
    v14 = SendMessageA(v3, 0x4C2u, 0, (LPARAM)Destination); /*0x696359*/
    SendMessageA(v3, 0x151u, v14, 4); /*0x696364*/
    SendMessageA(v3, 0x14Eu, 0, 0); /*0x696370*/
    if ( strlen((const char *)this + 184) ) /*0x69637f*/
    {
      ListBoxItem = SendMessageA(v3, 0x4B8u, 0xFFFFFFFF, (LPARAM)this + 184); /*0x696395*/
      if ( ListBoxItem != -1 ) /*0x69639a*/
        return SendMessageA(v3, 0x14Eu, ListBoxItem, 0); /*0x69639a*/
      ListBoxItem = FindListBoxItem(v3, -1, 4); /*0x6963ab*/
      if ( ListBoxItem == -1 ) /*0x6963b0*/
        return SendMessageA(v3, 0x14Eu, ListBoxItem, 0); /*0x6963b0*/
      v16 = GetStringCSF(g_Str_TXT_CUSTOM, 0, g_Str_File_SerialEd_cpp, 692); /*0x6963cc*/
      swprintf(Destination, (const size_t)aSHs, v16, (char *)this + 184); /*0x6963dc*/
      SendMessageA(v3, 0x144u, ListBoxItem, 0); /*0x6963ed*/
      v17 = Destination; /*0x6963ef*/
      goto LABEL_25; /*0x6963f3*/
    }
    parachute = this->parachute; /*0x6963f8*/
    if ( (int)parachute > 1000 ) /*0x696403*/
    {
      if ( parachute == (AnimClass *)1016 ) /*0x696427*/
      {
        v20 = FindListBoxItem(v3, -1, 0); /*0x6964a2*/
        goto LABEL_27; /*0x6964a2*/
      }
    }
    else
    {
      if ( parachute == (AnimClass *)1000 ) /*0x696405*/
      {
        v20 = FindListBoxItem(v3, -1, 2); /*0x696420*/
        goto LABEL_27; /*0x696420*/
      }
      v19 = &parachute[-1].__pad_1568[100]; /*0x696407*/
      if ( !v19 ) /*0x69640c*/
      {
        v20 = FindListBoxItem(v3, -1, 3); /*0x69641c*/
        goto LABEL_27; /*0x69641c*/
      }
      if ( v19 == (char *)16 ) /*0x696411*/
      {
        v20 = FindListBoxItem(v3, -1, 1); /*0x696415*/
LABEL_27:
        ListBoxItem = v20; /*0x6964a7*/
        return SendMessageA(v3, 0x14Eu, ListBoxItem, 0); /*0x6964a7*/
      }
    }
    ListBoxItem = FindListBoxItem(v3, -1, 4); /*0x696435*/
    if ( ListBoxItem == -1 ) /*0x69643a*/
      return SendMessageA(v3, 0x14Eu, ListBoxItem, 0); /*0x6964b2*/
    v22 = this->parachute; /*0x696444*/
    v21 = GetStringCSF(g_Str_TXT_CUSTOM, 0, g_Str_File_SerialEd_cpp, 730); /*0x696454*/
    swprintf(Buffer, (const size_t)aSX, v21, v22); /*0x696467*/
    SendMessageA(v3, 0x144u, ListBoxItem, 0); /*0x696478*/
    v17 = Buffer; /*0x69647a*/
LABEL_25:
    ListBoxItem = SendMessageA(v3, 0x4C2u, 0, (LPARAM)v17); /*0x696481*/
    SendMessageA(v3, 0x151u, ListBoxItem, 4); /*0x696497*/
    return SendMessageA(v3, 0x14Eu, ListBoxItem, 0); /*0x696499*/
  }
  return result; /*0x6964b4*/
}



// ==== 0x006964C0  NetworkDialog::Dispatch  this=NetworkDialog  sig=csp ====
int __thiscall NetworkDialog::Dispatch(NetworkDialog *this)
{
  int result; // eax
  HWND v2; // edi
  LPARAM v3; // ebx
  LPARAM *v4; // esi
  LRESULT v5; // eax
  int v6; // eax
  int v7; // eax
  WPARAM ListBoxItem; // eax

  result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1624); /*0x6964ce*/
  v2 = (HWND)result; /*0x6964d4*/
  if ( result ) /*0x6964d8*/
  {
    SendMessageA((HWND)result, 0x14Bu, 0, 0); /*0x6964f1*/
    v3 = 0; /*0x6964f3*/
    v4 = (LPARAM *)&off_83EB58; /*0x6964f5*/
    do /*0x69651b*/
    {
      v5 = SendMessageA(v2, 0x4C2u, 0, *v4); /*0x696505*/
      SendMessageA(v2, 0x151u, v5, v3); /*0x69650f*/
      ++v4; /*0x696511*/
      ++v3; /*0x696514*/
    }
    while ( (int)v4 < (int)a115200 ); /*0x69651b*/
    v6 = *((_DWORD *)this + 36); /*0x696521*/
    if ( v6 > 28800 ) /*0x69652c*/
    {
      if ( v6 == 57600 ) /*0x696555*/
      {
        v7 = 4; /*0x69656c*/
        goto LABEL_16; /*0x69656c*/
      }
      if ( v6 == 115200 ) /*0x69655c*/
      {
        v7 = 5; /*0x696565*/
        goto LABEL_16; /*0x69656a*/
      }
    }
    else
    {
      switch ( v6 ) /*0x69652e*/
      {
        case 28800: /*0x69652e*/
          v7 = 2; /*0x696549*/
          goto LABEL_16; /*0x69654e*/
        case 14400: /*0x69652e*/
          v7 = 0; /*0x696545*/
          goto LABEL_16; /*0x696547*/
        case 19200: /*0x69652e*/
          v7 = 1; /*0x69653e*/
LABEL_16:
          ListBoxItem = FindListBoxItem(v2, -1, v7); /*0x696571*/
          return SendMessageA(v2, 0x14Eu, ListBoxItem, 0); /*0x696585*/
      }
    }
    v7 = 3; /*0x69655e*/
    goto LABEL_16; /*0x696563*/
  }
  return result; /*0x69658a*/
}



// ==== 0x00696610  NetworkDialog::UpdateListBox  this=NetworkDialog  sig=csp ====
int __thiscall NetworkDialog::UpdateListBox(NetworkDialog *this)
{
  int result; // eax
  HWND v3; // edi
  int i; // esi

  result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1630); /*0x69661e*/
  v3 = (HWND)result; /*0x696624*/
  if ( result ) /*0x696628*/
  {
    SendMessageA((HWND)result, 0x184u, 0, 0); /*0x69663f*/
    for ( i = 0; i < dword_A8DB5C; ++i ) /*0x69664a*/
      SendMessageA(v3, 0x4C8u, 0, *(_DWORD *)(dword_A8DB50 + 4 * i)); /*0x69665e*/
    if ( SendMessageA(v3, 0x18Bu, 0, 0) && *((int *)this + 38) >= -1 ) /*0x696683*/
    {
      if ( *((_DWORD *)this + 38) >= SendMessageA(v3, 0x18Bu, 0, 0) ) /*0x696697*/
        *((_DWORD *)this + 38) = 0; /*0x696699*/
    }
    else
    {
      *((_DWORD *)this + 38) = -1; /*0x6966a5*/
    }
    result = *((_DWORD *)this + 38); /*0x6966ab*/
    if ( result != -1 ) /*0x6966b4*/
      return SendMessageA(v3, 0x186u, result, 0); /*0x6966bf*/
  }
  return result; /*0x6966c1*/
}



// ==== 0x006966D0  ObjectClass::method_6966D0  this=ObjectClass  sig=csp ====
int __thiscall sub_6966D0(ObjectClass *this)
{
  bool v2; // bl
  HWND DlgItem; // eax
  int result; // eax

  v2 = this->lastLayer == 0; /*0x6966ec*/
  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1628); /*0x6966ef*/
  if ( DlgItem ) /*0x6966f9*/
    SendMessageA(DlgItem, 0xF1u, v2, 0); /*0x69670c*/
  result = (int)GetDlgItem((HWND)this->AbstractClass, 1627); /*0x696716*/
  if ( result ) /*0x69671a*/
    return SendMessageA((HWND)result, 0xF1u, !v2, 0); /*0x69672c*/
  return result; /*0x69672e*/
}



// ==== 0x006967B0  ObjectClass::DlgProcLoadGame_Load  this=ObjectClass  sig=csp ====
int __thiscall DlgProcLoadGame_Load(ObjectClass *this)
{
  HWND DlgItem; // ebx
  int result; // eax
  HWND v4; // ebp
  int v5; // eax
  int vtable2_high; // eax
  int *v7; // eax
  WPARAM ListBoxItem; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-24h]
  int v10; // [esp+0h] [ebp-14h]

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1623); /*0x6967cf*/
  result = (int)GetDlgItem((HWND)this->AbstractClass, 1631); /*0x6967d1*/
  v4 = (HWND)result; /*0x6967d5*/
  if ( DlgItem && result ) /*0x6967df*/
  {
    ShowWindow((HWND)result, 0); /*0x6967e8*/
    EnableWindow(v4, 0); /*0x6967f1*/
    SendMessageA(v4, 0x4B5u, 0x40u, (LPARAM)&this->?); /*0x696809*/
    HIBYTE(this->ambientSoundController[2]) = 0; /*0x69680d*/
    String::Trim((char *)&this->?); /*0x696811*/
    _strupr((char *)&this->?); /*0x696817*/
    if ( !_strcmpi((char *)&this->?, a3f8) ) /*0x69682c*/
    {
LABEL_17:
      v5 = 0; /*0x69691b*/
      goto LABEL_18; /*0x69691b*/
    }
    if ( !_strcmpi((char *)&this->?, a2f8) ) /*0x696838*/
    {
LABEL_5:
      v5 = 1; /*0x696844*/
LABEL_18:
      ListBoxItem = FindListBoxItem(DlgItem, -1, v5); /*0x69691d*/
      return SendMessageA(DlgItem, 0x14Eu, ListBoxItem, 0); /*0x696931*/
    }
    if ( !_strcmpi((char *)&this->?, a3e8) ) /*0x696854*/
    {
LABEL_7:
      v5 = 2; /*0x696860*/
      goto LABEL_18; /*0x696865*/
    }
    if ( !_strcmpi((char *)&this->?, a2e8) ) /*0x696870*/
    {
LABEL_9:
      v5 = 3; /*0x69687c*/
      goto LABEL_18; /*0x696881*/
    }
    if ( !strncmp((const char *)&this->?, aCom, 3u) ) /*0x69688e*/
    {
      vtable2_high = HIBYTE(this->?); /*0x69689a*/
      switch ( (char)vtable2_high ) /*0x6968a8*/
      {
        case '1': /*0x6968a8*/
          goto LABEL_17;
        case '2': /*0x6968a8*/
          goto LABEL_5;
        case '3': /*0x6968a8*/
          goto LABEL_7;
        case '4': /*0x6968a8*/
          goto LABEL_9;
        default:
          if ( (char)vtable2_high <= 57 && (char)vtable2_high > 48 ) /*0x6968b5*/
          {
            LOBYTE(this->?) = 0; /*0x6968b7*/
            return ListBox::SetCustomEntry((ListBox *)this, 1623, 4, &this->?); /*0x6968b7*/
          }
          StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_SerialEd_cpp, 1088); /*0x6968f4*/
          v7 = (int *)GetStringCSF(aTxtInvalidPort, 0, g_Str_File_SerialEd_cpp, 1088); /*0x696906*/
          result = Dialog::ShowMessageBox(v7, StringCSF, 0, 0, 0, v10); /*0x696910*/
          break; /*0x69691a*/
      }
    }
    else
    {
      return ListBox::SetCustomEntry((ListBox *)this, 1623, 4, &this->?); /*0x6968bb*/
    }
  }
  return result; /*0x6968ca*/
}



// ==== 0x00696950  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_696950(ObjectClass *this)
{
  int result; // eax
  HWND v3; // ebx

  result = (int)GetDlgItem((HWND)this->AbstractClass, 1626); /*0x69695c*/
  v3 = (HWND)result; /*0x696962*/
  if ( result ) /*0x696966*/
  {
    ShowWindow((HWND)result, 0); /*0x69696c*/
    EnableWindow(v3, 0); /*0x696975*/
    SendMessageA(v3, 0x4B5u, 0x10u, (LPARAM)&this->?); /*0x696987*/
    HIBYTE(this->?) = 0; /*0x69698f*/
    String::Trim((char *)&this->?); /*0x696993*/
    _strupr((char *)&this->?); /*0x696999*/
    return ListBox::SetCustomEntry((ListBox *)this, 1625, 3, &this->?); /*0x6969ab*/
  }
  return result; /*0x6969b1*/
}



// ==== 0x006969C0  ListBox::SetCustomEntry  this=ListBox  sig=csp ====
int __thiscall ListBox::SetCustomEntry(ListBox *this, int nIDDlgItem, LPARAM a3, void *a4)
{
  int result; // eax
  HWND v5; // ebx
  wchar_t *StringCSF; // eax
  LRESULT v7; // esi
  int wParam; // [esp+Ch] [ebp-84h]
  char lParam[128]; // [esp+10h] [ebp-80h] BYREF

  result = (int)GetDlgItem(*(HWND *)this->__pad_0, nIDDlgItem); /*0x6969d1*/
  v5 = (HWND)result; /*0x6969d7*/
  if ( result ) /*0x6969db*/
  {
    wParam = FindListBoxItem((HWND)result, -1, a3); /*0x696a05*/
    SendMessageA(v5, 0x4BDu, wParam, (LPARAM)lParam); /*0x696a09*/
    result = (int)strchr(lParam, 45); /*0x696a12*/
    if ( result ) /*0x696a1c*/
    {
      result = _strcmpi((char *)a4, (char *)(result + 1)); /*0x696a2c*/
      if ( result ) /*0x696a36*/
      {
        StringCSF = GetStringCSF(g_Str_TXT_CUSTOM, 0, g_Str_File_SerialEd_cpp, 1187); /*0x696a4e*/
        sprintf(lParam, "%ls ", StringCSF); /*0x696a5e*/
        strcat(lParam, (const char *)a4); /*0x696a87*/
        SendMessageA(v5, 0x144u, wParam, 0); /*0x696a9b*/
        v7 = SendMessageA(v5, 0x4BCu, 0, (LPARAM)lParam); /*0x696ab3*/
        SendMessageA(v5, 0x151u, v7, a3); /*0x696abd*/
        return SendMessageA(v5, 0x14Eu, v7, 0); /*0x696ac8*/
      }
    }
  }
  return result; /*0x696acb*/
}



// ==== 0x00696AE0  ObjectClass::DlgProcLoadGame_Load_696AE0  this=ObjectClass  sig=csp ====
int __thiscall DlgProcLoadGame_Load_696AE0(ObjectClass *this)
{
  HWND DlgItem; // edi
  int result; // eax
  HWND v4; // ebp
  char *p_vtable2; // esi
  LRESULT v6; // edi
  int v7; // eax
  char *v8; // [esp+10h] [ebp-8h]

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1629); /*0x696b05*/
  result = (int)GetDlgItem((HWND)this->AbstractClass, 1630); /*0x696b07*/
  v4 = (HWND)result; /*0x696b0b*/
  if ( DlgItem ) /*0x696b0d*/
  {
    if ( result ) /*0x696b15*/
    {
      p_vtable2 = (char *)&this->?; /*0x696b21*/
      SendMessageA(DlgItem, 0x4B5u, 0x80u, (LPARAM)p_vtable2); /*0x696b30*/
      SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x696b3f*/
      String::Trim(p_vtable2); /*0x696b43*/
      result = 0; /*0x696b4d*/
      if ( strlen(p_vtable2) ) /*0x696b4f*/
      {
        _strupr(p_vtable2); /*0x696b5b*/
        v6 = SendMessageA(v4, 0x4C4u, 0xFFFFFFFF, (LPARAM)p_vtable2); /*0x696b6e*/
        if ( v6 == -1 ) /*0x696b73*/
        {
          v8 = (char *)__2_YAPAXI_Z(0x29u); /*0x696b8c*/
          strcpy(v8, p_vtable2); /*0x696ba2*/
          result = SendMessageA(v4, 0x4C8u, 0, (LPARAM)v8); /*0x696bb1*/
          v6 = result; /*0x696bb3*/
          if ( result == -1 ) /*0x696bb8*/
            return result; /*0x696bb8*/
          if ( dword_A8DB5C < dword_A8DB54 /*0x696bf1*/
            || (byte_A8DB59 || !dword_A8DB54)
            && dword_A8DB60 > 0
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8DB4C + 8))(
                 &dword_A8DB4C,
                 dword_A8DB54 + dword_A8DB60,
                 0) )
          {
            v7 = dword_A8DB5C++; /*0x696c02*/
            *(_DWORD *)(dword_A8DB50 + 4 * v7) = v8; /*0x696c11*/
          }
        }
        SendMessageA(v4, 0x186u, v6, 0); /*0x696c1d*/
        SendMessageA(v4, 0x197u, v6, 0); /*0x696c28*/
        *(_DWORD *)&this->isInLogic = v6; /*0x696c2e*/
        return (int)this; /*0x696c2a*/
      }
    }
  }
  return result; /*0x696c34*/
}



// ==== 0x00696C40  ObjectClass::DlgProcLoadGame_Load_696C40  this=ObjectClass  sig=csp ====
int __thiscall DlgProcLoadGame_Load_696C40(ObjectClass *this)
{
  int result; // eax
  HWND v3; // edi
  LRESULT v4; // esi
  int v5; // eax

  result = (int)GetDlgItem((HWND)this->AbstractClass, 1630); /*0x696c4f*/
  v3 = (HWND)result; /*0x696c55*/
  if ( result ) /*0x696c59*/
  {
    result = SendMessageA((HWND)result, 0x18Bu, 0, 0); /*0x696c6f*/
    if ( result > 0 ) /*0x696c73*/
    {
      result = SendMessageA(v3, 0x188u, 0, 0); /*0x696c7f*/
      v4 = result; /*0x696c81*/
      if ( result != -1 ) /*0x696c86*/
      {
        SendMessageA(v3, 0x182u, result, 0); /*0x696c91*/
        if ( v4 < dword_A8DB5C ) /*0x696c9b*/
        {
          v5 = v4; /*0x696c9e*/
          if ( v4 < --dword_A8DB5C ) /*0x696ca8*/
          {
            do /*0x696cc0*/
            {
              ++v5; /*0x696cb0*/
              *(_DWORD *)(dword_A8DB50 + 4 * v5 - 4) = *(_DWORD *)(dword_A8DB50 + 4 * v5); /*0x696cb4*/
            }
            while ( v5 < dword_A8DB5C ); /*0x696cc0*/
          }
        }
        if ( v4 >= SendMessageA(v3, 0x18Bu, 0, 0) ) /*0x696cd0*/
          --v4; /*0x696cd2*/
        SendMessageA(v3, 0x186u, v4, 0); /*0x696cdc*/
        result = SendMessageA(v3, 0x197u, v4, 0); /*0x696ce7*/
        *(_DWORD *)&this->isInLogic = v4; /*0x696ce9*/
      }
    }
  }
  return result; /*0x696cef*/
}



// ==== 0x00696D00  sub_696D00  this=-  sig=ida-proto ====
int sub_696D00()
{
  dword_B057D0 = 0; /*0x696d02*/
  dword_B057D4 = 0; /*0x696d07*/
  dword_B057D8 = 0; /*0x696d0c*/
  dword_B057DC = 0; /*0x696d11*/
  return 0; /*0x696d16*/
}



// ==== 0x00696D20  sub_696D20  this=-  sig=ida-proto ====
void sub_696D20()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x696d2c*/
  dbl_B057E8 = Math::Sqrt(v0 + v0); /*0x696d3e*/
}



// ==== 0x00696D50  sub_696D50  this=-  sig=ida-proto ====
void sub_696D50()
{
  dbl_B07778 = dbl_B057E8 / 60.0; /*0x696d5c*/
}



// ==== 0x00696D70  sub_696D70  this=-  sig=ida-proto ====
void sub_696D70()
{
  dbl_B07760 = 1.0 / dbl_B07778; /*0x696d7c*/
}



// ==== 0x00696D90  sub_696D90  this=-  sig=ida-proto ====
void sub_696D90()
{
  dbl_B07758 = 0.0174532925199433 * 45.0; /*0x696d9c*/
}



// ==== 0x00696DB0  sub_696DB0  this=-  sig=ida-proto ====
void sub_696DB0()
{
  dbl_B057F0 = 0.0174532925199433 * 60.0; /*0x696dbc*/
}



// ==== 0x00696DD0  sub_696DD0  this=-  sig=ida-proto ====
void sub_696DD0()
{
  dbl_B057C8 = 0.0174532925199433 * 90.0; /*0x696ddc*/
}



// ==== 0x00696DF0  sub_696DF0  this=-  sig=ida-proto ====
__int64 sub_696DF0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B057C8 - dbl_B057F0); /*0x696e02*/
  result = Math::RoundToInt(v0 * dbl_B057E8 * 0.5); /*0x696e16*/
  dword_B07780 = result; /*0x696e1b*/
  return result; /*0x696e20*/
}



// ==== 0x00696E30  sub_696E30  this=-  sig=ida-proto ====
void sub_696E30()
{
  dbl_B057F8 = Math::ArcTan((double)dword_B07780 * 0.00390625); /*0x696e47*/
}



// ==== 0x00696E60  sub_696E60  this=-  sig=ida-proto ====
void sub_696E60()
{
  dbl_B07750 = Math::ArcTan((double)(2 * dword_B07780) / dbl_B057E8); /*0x696e82*/
}



// ==== 0x00696E90  sub_696E90  this=-  sig=ida-proto ====
__int64 sub_696E90()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B07780) + 0.5); /*0x696eab*/
  dword_B07774 = result; /*0x696eb0*/
  return result; /*0x696eb6*/
}



// ==== 0x00696EC0  sub_696EC0  this=-  sig=ida-proto ====
int sub_696EC0()
{
  word_B057E0 = 0; /*0x696ec2*/
  word_B057E2 = 0; /*0x696ec8*/
  return 0; /*0x696ece*/
}



// ==== 0x00696ED0  sub_696ED0  this=-  sig=ida-proto ====
int sub_696ED0()
{
  dword_B07740 = 0; /*0x696ed2*/
  dword_B07744 = 0; /*0x696ed7*/
  dword_B07748 = 0; /*0x696edc*/
  return 0; /*0x696ee1*/
}



// ==== 0x00696EF0  sub_696EF0  this=-  sig=ida-proto ====
int sub_696EF0()
{
  dword_B07770 = 0; /*0x696ef5*/
  dword_B07768 = 128; /*0x696eff*/
  dword_B0776C = 128; /*0x696f04*/
  return 128; /*0x696f09*/
}



// ==== 0x00696F10  SessionClass::GetPlayerSide  this=SessionClass  sig=csp ====
int __thiscall SessionClass::GetPlayerSide(int *this)
{
  int result; // eax

  result = -2; /*0x696f13*/
  if ( *(int *)((char *)this + 79) != -2 ) /*0x696f1a*/
    return *(int *)((char *)this + 75); /*0x696f1c*/
  return result; /*0x696f1f*/
}



// ==== 0x00696F20  SessionClass::GetPlayerColor  this=SessionClass  sig=csp ====
int __thiscall SessionClass::GetPlayerColor(SessionClass *this)
{
  int result; // eax

  result = -2; /*0x696f23*/
  if ( *(_DWORD *)&this->__pad_50[7] != -2 ) /*0x696f2a*/
    return *(_DWORD *)&this->__pad_50[3]; /*0x696f2c*/
  return result; /*0x696f2f*/
}



// ==== 0x00696F30  MPCooperative::finalizeSession  this=MPCooperative  sig=csp ====
int __thiscall MPCooperative::finalizeSession(MPCooperative *this)
{
  int result; // eax

  result = -2; /*0x696f33*/
  if ( *(void **)((char *)&this->MPCooperative_field_0x54 + 3) != (void *)-2 /*0x696f40*/
    || *(MultiplayerGameMode **)((char *)&this->MPCooperative_field_0x50 + 3) != (MultiplayerGameMode *)-1 )
  {
    return *(int *)((char *)&this->MPCooperative_field_0x50 + 3); /*0x696f42*/
  }
  return result; /*0x696f45*/
}



// ==== 0x00696F50  SessionClass::GetOption  this=IUnknown  sig=csp ====
int __thiscall SessionClass::GetOption(int *this)
{
  int result; // eax

  result = -2; /*0x696f53*/
  if ( *(int *)((char *)this + 95) != -2 || *(int *)((char *)this + 91) != -1 ) /*0x696f60*/
    return *(int *)((char *)this + 91); /*0x696f62*/
  return result; /*0x696f65*/
}



// ==== 0x00696F70  SessionClass::GetOption2  this=SessionClass  sig=csp ====
int __thiscall SessionClass::GetOption2(SessionClass *this)
{
  int result; // eax

  result = -2; /*0x696f73*/
  if ( *(_DWORD *)&this->__pad_50[23] != -2 || *(_DWORD *)&this->__pad_50[19] != -1 ) /*0x696f80*/
    return *(_DWORD *)&this->__pad_50[19]; /*0x696f82*/
  return result; /*0x696f85*/
}



// ==== 0x00696F90  SessionClass::SetPlayerOption  this=IUnknown  sig=csp ====
int __thiscall SessionClass::SetPlayerOption(int *this, int a2)
{
  int result; // eax

  result = a2; /*0x696f90*/
  if ( a2 == -2 ) /*0x696f97*/
  {
    *(int *)((char *)this + 75) = 0; /*0x696f99*/
    *(int *)((char *)this + 79) = -2; /*0x696fa0*/
  }
  else
  {
    *(int *)((char *)this + 75) = a2; /*0x696fa6*/
    *(int *)((char *)this + 79) = -1; /*0x696fa9*/
  }
  return result; /*0x696fa3*/
}



// ==== 0x00696FC0  SessionClass::SetPlayerColor  this=IUnknown  sig=csp ====
int __thiscall SessionClass::SetPlayerColor(int *this, int a2)
{
  int result; // eax

  result = a2; /*0x696fc0*/
  if ( a2 == -2 ) /*0x696fc7*/
  {
    *(int *)((char *)this + 83) = -1; /*0x696fc9*/
    *(int *)((char *)this + 87) = -2; /*0x696fd0*/
  }
  else
  {
    *(int *)((char *)this + 83) = a2; /*0x696fd6*/
    *(int *)((char *)this + 87) = -1; /*0x696fd9*/
  }
  return result; /*0x696fd3*/
}



// ==== 0x00696FF0  SessionClass::SetOption  this=IUnknown  sig=csp ====
int __thiscall SessionClass::SetOption(int *this, int a2)
{
  int result; // eax

  result = a2; /*0x696ff0*/
  if ( a2 == -2 ) /*0x696ff7*/
  {
    *(int *)((char *)this + 91) = -1; /*0x696ff9*/
    *(int *)((char *)this + 95) = -2; /*0x697000*/
  }
  else
  {
    *(int *)((char *)this + 91) = a2; /*0x697006*/
    *(int *)((char *)this + 95) = -1; /*0x697009*/
  }
  return result; /*0x697003*/
}



// ==== 0x00697020  SessionClass::SetOption2  this=CampaignClass  sig=csp ====
int __thiscall SessionClass::SetOption2(int *this, int a2)
{
  int result; // eax

  result = a2; /*0x697020*/
  if ( a2 == -2 ) /*0x697027*/
  {
    *(int *)((char *)this + 99) = -1; /*0x697029*/
    *(int *)((char *)this + 103) = -2; /*0x697030*/
  }
  else
  {
    *(int *)((char *)this + 99) = a2; /*0x697036*/
    *(int *)((char *)this + 103) = -1; /*0x697039*/
  }
  return result; /*0x697033*/
}



// ==== 0x006970A0  SessionClass::SessionClass  this=SessionClass  sig=csp ====
char *__thiscall sub_6970A0(char *this)
{
  _DWORD *v2; // eax
  int v3; // ecx
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // ecx
  _BYTE *v8; // edi
  _BYTE *v9; // esi
  int v10; // edi
  DWORD *v11; // esi
  int v12; // edi
  int v13; // eax
  int v14; // edx
  _DWORD *v15; // eax
  int v16; // ecx
  int v18; // [esp+10h] [ebp-4h]

  this->MPGameMode = 0; /*0x6970b8*/
  this->ptr_63 = 0; /*0x6970bb*/
  this->u32_64 = 0; /*0x6970c1*/
  this->u32_194 = 1; /*0x6970c7*/
  this->u32_198 = 10000; /*0x6970cd*/
  this->ptr_67 = 10; /*0x6970d3*/
  this->q1A0 = 1; /*0x6970d9*/
  this->q1A1 = 1; /*0x6970df*/
  this->q1A2 = 1; /*0x6970e5*/
  this->q1A3 = 1; /*0x6970eb*/
  this->q1A4 = 1; /*0x6970f1*/
  v2 = this + 428; /*0x6970f7*/
  v3 = 8; /*0x6970fd*/
  do /*0x69710e*/
  {
    *(v2 - 1) = 0; /*0x697102*/
    *v2 = 0; /*0x697105*/
    v2[1] = 0; /*0x697107*/
    v2 += 3; /*0x69710a*/
    --v3; /*0x69710d*/
  }
  while ( v3 ); /*0x69710e*/
  this->LANPreferences = 0; /*0x697110*/
  this->u32_20C = 0; /*0x697116*/
  this->u32_84 = 1; /*0x69711c*/
  this->u32_214 = 10000; /*0x697122*/
  this->u32_218 = 10; /*0x697128*/
  this->q21C = 1; /*0x69712e*/
  this->q21D = 1; /*0x697135*/
  this->q21E = 1; /*0x69713c*/
  this->q21F = 1; /*0x697143*/
  this->q220 = 1; /*0x69714a*/
  v4 = this + 552; /*0x697151*/
  v5 = 8; /*0x697157*/
  do /*0x697168*/
  {
    *(v4 - 1) = 0; /*0x69715c*/
    *v4 = 0; /*0x69715f*/
    v4[1] = 0; /*0x697161*/
    v4 += 3; /*0x697164*/
    --v5; /*0x697167*/
  }
  while ( v5 ); /*0x697168*/
  this->WOLPreferences = 0; /*0x69716a*/
  this->u32_288 = 0; /*0x697170*/
  this->u32_28C = 1; /*0x697176*/
  this->u32_290 = 10000; /*0x69717c*/
  this->u32_294 = 10; /*0x697182*/
  this->q298 = 1; /*0x697188*/
  this->q299 = 1; /*0x69718f*/
  this->q29A = 1; /*0x697196*/
  this->q29B = 1; /*0x69719d*/
  this->q29C = 1; /*0x6971a4*/
  v6 = this + 676; /*0x6971ab*/
  v7 = 8; /*0x6971b1*/
  do /*0x6971c2*/
  {
    *(v6 - 1) = 0; /*0x6971b6*/
    *v6 = 0; /*0x6971b9*/
    v6[1] = 0; /*0x6971bb*/
    v6 += 3; /*0x6971be*/
    --v7; /*0x6971c1*/
  }
  while ( v7 ); /*0x6971c2*/
  v8 = this + 920; /*0x6971c4*/
  v18 = 8; /*0x6971ca*/
  do /*0x6971e5*/
  {
    Waypoint::InitInvalid(v8); /*0x6971d4*/
    v8 += 104; /*0x6971dd*/
    --v18; /*0x6971e1*/
  }
  while ( v18 ); /*0x6971e5*/
  this->u32_694 = 0; /*0x6971ed*/
  this->u32_698 = 0; /*0x6971f3*/
  this->q69C = 1; /*0x6971f9*/
  this->q69D = 0; /*0x697200*/
  this->q1A4 = &DynamicVectorClass<MultiMission *>::`vftable'; /*0x697206*/
  this->u32_6A4 = 10; /*0x697210*/
  this->u32_6A0 = 0; /*0x697216*/
  Waypoint::InitInvalid(this + 2276); /*0x69721c*/
  this->u32_8F4 = 0; /*0x697227*/
  this->u32_8F8 = 0; /*0x69722d*/
  this->q8FC = 1; /*0x697233*/
  this->q8FD = 0; /*0x69723a*/
  this->u32_8F0 = &DynamicVectorClass<GlobalPacketType *>::`vftable'; /*0x697240*/
  this->q904 = 10; /*0x69724a*/
  this->q900 = 0; /*0x697250*/
  SessionClass::saveSettings(this + 2600); /*0x697256*/
  Waypoint::InitInvalid(this + 7876); /*0x697261*/
  CCFileClass::Construct3((int)(this + 9044)); /*0x69726c*/
  Waypoint::InitInvalid(this + 9160); /*0x697277*/
  Waypoint::InitInvalid(this + 9676); /*0x697282*/
  this->u32_2810 = 0; /*0x69728c*/
  this->u32_2814 = 0; /*0x697292*/
  this->q2818 = 1; /*0x697298*/
  this->q2819 = 0; /*0x69729f*/
  this->UnknownVector_280C = &DynamicVectorClass<NodeNameType *>::`vftable'; /*0x6972a5*/
  this->u32_2820 = 10; /*0x6972ab*/
  this->u32_281C = 0; /*0x6972b1*/
  this->StartSpots = 0; /*0x6972b7*/
  this->u32_282C = 0; /*0x6972bd*/
  this->q2830 = 1; /*0x6972c3*/
  this->q2831 = 0; /*0x6972ca*/
  this->UnknownVector_2824 = &DynamicVectorClass<NodeNameType *>::`vftable'; /*0x6972d0*/
  this->u32_2838 = 10; /*0x6972d6*/
  this->u32_2834 = 0; /*0x6972dc*/
  this->u32_2840 = 0; /*0x6972e2*/
  this->u32_2844 = 0; /*0x6972e8*/
  this->q2848 = 1; /*0x6972ee*/
  this->q2849 = 0; /*0x6972f5*/
  this->q283C = &DynamicVectorClass<NodeNameType *>::`vftable'; /*0x6972fb*/
  this->u32_2850 = 10; /*0x697301*/
  this->qA13 = 0; /*0x697307*/
  this->u32_2900 = 0; /*0x69730d*/
  this->u32_2904 = 0; /*0x697313*/
  this->q2908 = 1; /*0x697319*/
  this->q2909 = 0; /*0x697320*/
  this->u32_28FC = &off_7F11B4; /*0x697326*/
  this->u32_2910 = 10; /*0x697330*/
  this->u32_290C = 0; /*0x697336*/
  this->u32_2918 = 0; /*0x69733c*/
  this->u32_291C = 0; /*0x697342*/
  this->q2920 = 1; /*0x697348*/
  this->q2921 = 0; /*0x69734f*/
  this->u32_2914 = &DynamicVectorClass<char *>::`vftable'; /*0x697355*/
  this->u32_2928 = 10; /*0x69735f*/
  this->u32_2924 = 0; /*0x697365*/
  this->u32_2930 = 0; /*0x697371*/
  this->u32_2934 = 0; /*0x697377*/
  this->q2938 = 1; /*0x69737d*/
  this->q2939 = 0; /*0x697384*/
  this->u32_292C = &DynamicVectorClass<unsigned short const *>::`vftable'; /*0x69738a*/
  this->u32_2940 = 10; /*0x697394*/
  this->u32_293C = 0; /*0x69739a*/
  Waypoint::InitInvalid(this + 10604); /*0x6973a0*/
  Waypoint::InitInvalid(this + 10616); /*0x6973ab*/
  Waypoint::InitInvalid(this + 10632); /*0x6973b6*/
  v9 = this + 10644; /*0x6973bb*/
  v10 = 8; /*0x6973c1*/
  do /*0x6973d1*/
  {
    Waypoint::InitInvalid(v9); /*0x6973c8*/
    v9 += 12; /*0x6973cd*/
    --v10; /*0x6973d0*/
  }
  while ( v10 ); /*0x6973d1*/
  v11 = (DWORD *)(this + 12172); /*0x6973d3*/
  v12 = 8; /*0x6973d9*/
  do /*0x6973ef*/
  {
    *v11 = Timer::GetTicks(); /*0x6973e6*/
    v11[2] = 0; /*0x6973e8*/
    v11 += 3; /*0x6973eb*/
    --v12; /*0x6973ee*/
  }
  while ( v12 ); /*0x6973ef*/
  this->q30C8 = 0; /*0x6973f1*/
  *(_DWORD *)this = 0; /*0x6973fc*/
  this->SessionClass_field_14 = 2; /*0x6973ff*/
  this->u32_1C = 0; /*0x697402*/
  this->u32_20 = 1; /*0x697405*/
  this->q024 = 0; /*0x697409*/
  this->ptr_28 = 0; /*0x69740c*/
  this->q029 = 0; /*0x69740f*/
  this->q035 = 0; /*0x697412*/
  this->Handle = 0; /*0x697415*/
  this->q02A = 0; /*0x697418*/
  this->q0AC = 0; /*0x69741b*/
  this->q02C = 0; /*0x69741e*/
  this->SessionClass_field_0C = 0; /*0x697421*/
  this->UniqueID = 0; /*0x697424*/
  this->q0E4 = 0; /*0x697427*/
  this->q0E5 = 0; /*0x69742d*/
  this->q0E6 = 0; /*0x697433*/
  this->q0E7 = 0; /*0x697439*/
  this->q0E8 = 0; /*0x69743f*/
  this->SessionClass_field_10 = 1; /*0x697445*/
  this->q144 = 0; /*0x69744c*/
  this->q148 = 0; /*0x697452*/
  this->idxSide = 0; /*0x69745b*/
  this->idxSide2 = -1; /*0x697461*/
  this->u32_15C = 2; /*0x697467*/
  this->q058 = -1; /*0x69746d*/
  this->Side = this->idxSide; /*0x697479*/
  this->Side2 = this->idxSide2; /*0x697485*/
  this->u32_5F = this->u32_15C; /*0x697491*/
  this->q060 = this->q058; /*0x69749d*/
  this->q1ED9 = 1; /*0x6974a3*/
  this->q1ED8 = 1; /*0x6974aa*/
  this->q1FC1 = 1; /*0x6974b1*/
  this->q1FC0 = 1; /*0x6974ba*/
  *(_DWORD *)(this + 12410) = 0; /*0x6974c1*/
  *(_DWORD *)(this + 12414) = 0; /*0x6974c9*/
  *(_DWORD *)(this + 12418) = 0; /*0x6974d4*/
  *(_DWORD *)(this + 12422) = 0; /*0x6974da*/
  this->q3078 = 0; /*0x6974e0*/
  this->q306C = 0; /*0x6974e6*/
  *((_WORD *)this + 6199) = 0; /*0x6974ec*/
  *((_WORD *)this + 6200) = 0; /*0x6974f3*/
  this->u32_2FF0 = 1250; /*0x6974fa*/
  this->u32_2FF4 = 0; /*0x697504*/
  this->q3018 = 1; /*0x69750a*/
  this->q2F48 = 0; /*0x697511*/
  this->q301C = 0; /*0x69751c*/
  memset(unk_B73E44, 0, 0x2000u); /*0x697522*/
  memset(dword_B76338, 0, sizeof(dword_B76338)); /*0x69752e*/
  this->MuteSWLaunches = 0; /*0x697530*/
  this->SessionClass_field_304 = 0; /*0x697536*/
  this->LastNickSlot = -1; /*0x69753c*/
  this->WOLLimitResolution = 0; /*0x697542*/
  this->q2968 = 0; /*0x697548*/
  this->q3074 = -1; /*0x697559*/
  memset(this + 12320, 0, 0x28u); /*0x69755f*/
  *((_WORD *)this + 6180) = 0; /*0x697561*/
  this->u32_308C = 0; /*0x697563*/
  this->q3090 = 1; /*0x697569*/
  this->u32_3094 = -1; /*0x697570*/
  this->q3098 = 0; /*0x697576*/
  this->u32_309C = 20; /*0x69757c*/
  this->u32_30A0 = 0; /*0x697586*/
  this->u32_30A4 = 0; /*0x69758c*/
  this->u32_30A8 = -1; /*0x697592*/
  *((_WORD *)this + 5314) = 0; /*0x697598*/
  this->q688 = 0; /*0x69759f*/
  this->q689 = 0; /*0x6975a5*/
  this->q68A = 0; /*0x6975b0*/
  this->SessionClass_field_310 = 8; /*0x6975b6*/
  this->u32_318 = 15; /*0x6975c0*/
  this->u32_330 = 15; /*0x6975c6*/
  this->u32_314 = 0; /*0x6975cc*/
  this->u32_31C = 5; /*0x6975df*/
  memset(this + 828, 0, 0x340u); /*0x6975e9*/
  v13 = this->u32_1FBC; /*0x6975eb*/
  v14 = this->u32_2354; /*0x6975f1*/
  LOBYTE(v13) = v13 & 0xFE; /*0x6975fd*/
  this->u32_334 = 0; /*0x697604*/
  this->u32_338 = 0; /*0x69760a*/
  this->q67C = 0; /*0x697610*/
  this->q67D = 0; /*0x697616*/
  this->q1A0 = 0; /*0x69761c*/
  this->q1A1 = 0; /*0x697622*/
  *((_WORD *)this + 3949) = 0; /*0x697628*/
  this->u32_1FBC = v13; /*0x69762f*/
  (*(void (__thiscall **)(char *, char *))(v14 + 8))(this + 9044, aRecordBin); /*0x697635*/
  this->u32_8F0 &= 0xFFFFFFF8; /*0x697648*/
  this->u32_23C4 = 0; /*0x697659*/
  this->q23D4 = 0; /*0x69765f*/
  this->q23D5 = 1; /*0x697665*/
  this->q23D6 = 0; /*0x69766c*/
  *((_WORD *)this + 4588) = 0; /*0x697672*/
  *((_WORD *)this + 4844) = 0; /*0x697679*/
  this->u32_287C = 0; /*0x697680*/
  this->u32_2964 = 1; /*0x697686*/
  this->u32_2808 = 558; /*0x69768c*/
  memset(this + 2312, 0, 0x20u); /*0x697696*/
  memset(this + 2344, 0xFFu, 0x100u); /*0x6976a5*/
  this->u32_2880 |= 1u; /*0x6976b6*/
  this->u32_2884 = 0; /*0x6976be*/
  this->u32_2888 = 760; /*0x6976c4*/
  this->u32_288C = 3; /*0x6976ce*/
  this->u32_2890 = 9600; /*0x6976d8*/
  this->u32_2894 = 0; /*0x6976e2*/
  this->u32_2898 = -1; /*0x6976e8*/
  this->u32_289C = 0; /*0x6976ee*/
  strcpy(this + 10408, &g_INI_DefaultBuffer); /*0x697709*/
  this->u32_28F8 = 0; /*0x697712*/
  this->u32_30AC = 0x7FFFFFFF; /*0x697718*/
  this->u32_30B0 = 0; /*0x697722*/
  this->u32_30B4 = 0; /*0x697728*/
  this->u32_30B8 = dword_B07740; /*0x69773a*/
  this->u32_30BC = dword_B07744; /*0x697745*/
  v15 = this + 132; /*0x69774e*/
  this->u32_30C0 = dword_B07748; /*0x697754*/
  this->q30C8 = 0; /*0x697757*/
  this->u32_30CC = 0; /*0x69775d*/
  this->u32_30D0 = 0; /*0x697763*/
  this->u32_30D4 = 0; /*0x697769*/
  this->q2878 = 0; /*0x69776f*/
  this->u32_3C = 0; /*0x697775*/
  v16 = 8; /*0x697778*/
  do /*0x69778e*/
  {
    *(v15 - 8) = -1; /*0x69777d*/
    *v15++ = -1; /*0x697784*/
    --v16; /*0x69778d*/
  }
  while ( v16 ); /*0x69778e*/
  this->SessionClass_field_0C = 0; /*0x697790*/
  this->MPGameMode = 0; /*0x697793*/
  this->ScenarioFilename = 0; /*0x697796*/
  this->u32_8CC = 0; /*0x69779c*/
  this->q8D0 = 0; /*0x6977a2*/
  this->u32_8D4 = 0; /*0x6977a9*/
  return this; /*0x6977a8*/
}



// ==== 0x006977C0  CSFClass::LoadMissingStrings  this=CSFClass  sig=csp ====
int __thiscall sub_6977C0(char *this)
{
  char *v1; // esi
  wchar_t **v2; // edi
  wchar_t *StringCSF; // eax
  wchar_t *v4; // ebx
  int result; // eax
  int v6; // ecx
  int v7; // edx

  v1 = this + 10540; /*0x6977c3*/
  v2 = (wchar_t **)off_83ED04; /*0x6977c9*/
  do /*0x697830*/
  {
    StringCSF = GetStringCSF(*v2, 0, g_Str_File_Session_CPP, 593); /*0x6977dc*/
    v4 = _wcsdup(StringCSF); /*0x6977ea*/
    result = *((_DWORD *)v1 + 2); /*0x6977ec*/
    if ( *((_DWORD *)v1 + 4) < result /*0x697816*/
      || (v1[13] || !result)
      && (v6 = *((_DWORD *)v1 + 5), v6 > 0)
      && (result = (*(int (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v1 + 8))(v1, result + v6, 0), (_BYTE)result) )
    {
      result = *((_DWORD *)v1 + 4); /*0x697818*/
      v7 = *((_DWORD *)v1 + 1); /*0x69781b*/
      *((_DWORD *)v1 + 4) = result + 1; /*0x697821*/
      *(_DWORD *)(v7 + 4 * result) = v4; /*0x697824*/
    }
    ++v2; /*0x697827*/
  }
  while ( (int)v2 < (int)byte_83ED14 ); /*0x697830*/
  return result; /*0x697832*/
}



// ==== 0x00697840  ObjectManager::CleanupArrays  this=ObjectManager  sig=csp ====
void __thiscall ObjectManager::CleanupArrays(ObjectManager *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  void *v8; // eax
  void *v9; // eax
  void *v10; // eax
  void *v11; // eax
  void *v12; // eax
  void *v13; // eax
  void *v14; // eax
  void *v15; // eax

  while ( *((_DWORD *)this + 2633) ) /*0x697846*/
  {
    __3_YAXPAX_Z(**((void ***)this + 2630)); /*0x697857*/
    v2 = *((_DWORD *)this + 2633); /*0x69785c*/
    if ( v2 > 0 ) /*0x697867*/
    {
      v3 = v2 - 1; /*0x697869*/
      v4 = 0; /*0x69786c*/
      for ( *((_DWORD *)this + 2633) = v3; /*0x697876*/
            v4 < *((_DWORD *)this + 2633);
            *(_DWORD *)(*((_DWORD *)this + 2630) + 4 * v4 - 4) = *(_DWORD *)(*((_DWORD *)this + 2630) + 4 * v4) )
      {
        ++v4; /*0x69787e*/
      }
    }
  }
  while ( *((_DWORD *)this + 2639) ) /*0x697898*/
  {
    free(**((void ***)this + 2636)); /*0x6978a9*/
    v5 = *((_DWORD *)this + 2639); /*0x6978ae*/
    if ( v5 > 0 ) /*0x6978b9*/
    {
      v6 = v5 - 1; /*0x6978bb*/
      v7 = 0; /*0x6978be*/
      for ( *((_DWORD *)this + 2639) = v6; /*0x6978c8*/
            v7 < *((_DWORD *)this + 2639);
            *(_DWORD *)(*((_DWORD *)this + 2636) + 4 * v7 - 4) = *(_DWORD *)(*((_DWORD *)this + 2636) + 4 * v7) )
      {
        ++v7; /*0x6978d0*/
      }
    }
  }
  v8 = (void *)*((_DWORD *)this + 2636); /*0x6978ea*/
  *((_DWORD *)this + 2635) = &VectorClass<unsigned short const *>::`vftable'; /*0x6978f0*/
  if ( v8 && *((_BYTE *)this + 10553) ) /*0x6978fe*/
  {
    __3_YAXPAX_Z(v8); /*0x697907*/
    *((_DWORD *)this + 2636) = 0; /*0x69790f*/
  }
  *((_BYTE *)this + 10553) = 0; /*0x697915*/
  *((_DWORD *)this + 2637) = 0; /*0x69791b*/
  v9 = (void *)*((_DWORD *)this + 2630); /*0x697921*/
  *((_DWORD *)this + 2629) = &VectorClass<char *>::`vftable'; /*0x697927*/
  if ( v9 && *((_BYTE *)this + 10529) ) /*0x697935*/
  {
    __3_YAXPAX_Z(v9); /*0x69793e*/
    *((_DWORD *)this + 2630) = 0; /*0x697946*/
  }
  *((_BYTE *)this + 10529) = 0; /*0x69794c*/
  *((_DWORD *)this + 2631) = 0; /*0x697952*/
  v10 = (void *)*((_DWORD *)this + 2624); /*0x697958*/
  *((_DWORD *)this + 2623) = &VectorClass<PhoneEntryClass *>::`vftable'; /*0x69795e*/
  if ( v10 && *((_BYTE *)this + 10505) ) /*0x69796c*/
  {
    __3_YAXPAX_Z(v10); /*0x697975*/
    *((_DWORD *)this + 2624) = 0; /*0x69797d*/
  }
  *((_BYTE *)this + 10505) = 0; /*0x697983*/
  *((_DWORD *)this + 2625) = 0; /*0x697989*/
  v11 = (void *)*((_DWORD *)this + 2576); /*0x69798f*/
  *((_DWORD *)this + 2575) = &VectorClass<NodeNameType *>::`vftable'; /*0x69799d*/
  if ( v11 && *((_BYTE *)this + 10313) ) /*0x6979a5*/
  {
    __3_YAXPAX_Z(v11); /*0x6979ae*/
    *((_DWORD *)this + 2576) = 0; /*0x6979b6*/
  }
  *((_BYTE *)this + 10313) = 0; /*0x6979bc*/
  *((_DWORD *)this + 2577) = 0; /*0x6979c2*/
  v12 = (void *)*((_DWORD *)this + 2570); /*0x6979c8*/
  *((_DWORD *)this + 2569) = &VectorClass<NodeNameType *>::`vftable'; /*0x6979ce*/
  if ( v12 && *((_BYTE *)this + 10289) ) /*0x6979d8*/
  {
    __3_YAXPAX_Z(v12); /*0x6979e1*/
    *((_DWORD *)this + 2570) = 0; /*0x6979e9*/
  }
  *((_BYTE *)this + 10289) = 0; /*0x6979ef*/
  *((_DWORD *)this + 2571) = 0; /*0x6979f5*/
  v13 = (void *)*((_DWORD *)this + 2564); /*0x6979fb*/
  *((_DWORD *)this + 2563) = &VectorClass<NodeNameType *>::`vftable'; /*0x697a01*/
  if ( v13 && *((_BYTE *)this + 10265) ) /*0x697a0b*/
  {
    __3_YAXPAX_Z(v13); /*0x697a14*/
    *((_DWORD *)this + 2564) = 0; /*0x697a1c*/
  }
  *((_BYTE *)this + 10265) = 0; /*0x697a28*/
  *((_DWORD *)this + 2565) = 0; /*0x697a2e*/
  *((_DWORD *)this + 2261) = &CCFileClass::`vftable'; /*0x697a37*/
  *((_DWORD *)this + 2286) = 0; /*0x697a3d*/
  Vector::Clear((int)this + 9132); /*0x697a40*/
  *((_DWORD *)this + 2261) = &off_7E1668; /*0x697a47*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)this + 119); /*0x697a4d*/
  ObjectManager::InitMessageList(this + 325); /*0x697a58*/
  v14 = (void *)*((_DWORD *)this + 573); /*0x697a5d*/
  *((_DWORD *)this + 572) = &VectorClass<GlobalPacketType *>::`vftable'; /*0x697a63*/
  if ( v14 && *((_BYTE *)this + 2301) ) /*0x697a72*/
  {
    __3_YAXPAX_Z(v14); /*0x697a7b*/
    *((_DWORD *)this + 573) = 0; /*0x697a83*/
  }
  *((_BYTE *)this + 2301) = 0; /*0x697a89*/
  *((_DWORD *)this + 574) = 0; /*0x697a8f*/
  v15 = (void *)*((_DWORD *)this + 421); /*0x697a95*/
  *((_DWORD *)this + 420) = &VectorClass<MultiMission *>::`vftable'; /*0x697a9b*/
  if ( v15 && *((_BYTE *)this + 1693) ) /*0x697aa9*/
  {
    __3_YAXPAX_Z(v15); /*0x697ab2*/
    *((_DWORD *)this + 421) = 0; /*0x697aba*/
  }
  *((_BYTE *)this + 1693) = 0; /*0x697ac0*/
  *((_DWORD *)this + 422) = 0; /*0x697ac6*/
}



// ==== 0x00697AD0  BulkData::InitMissionHashing  this=BulkData  sig=csp ====
void __thiscall BulkData::InitMissionHashing(BulkData *this)
{
  DWORD v2; // eax
  char *inited; // eax
  const char *v4; // esi
  unsigned int v5; // ebx
  DWORD Time; // [esp+10h] [ebp-4h] BYREF

  SessionClass::LoadMissionList((SessionClass *)this); /*0x697ad7*/
  Time = timeGetTime(); /*0x697ae2*/
  v2 = DiskSpace::CheckAvailable(); /*0x697ae6*/
  ComputeHash(&Time, v2); /*0x697af1*/
  inited = Object_Init_7CBC11(aPath); /*0x697afb*/
  v4 = inited; /*0x697b00*/
  if ( inited ) /*0x697b07*/
  {
    v5 = 0; /*0x697b10*/
    if ( strlen(inited) ) /*0x697b12*/
    {
      do /*0x697b35*/
        ComputeHash(&Time, v4[v5++]); /*0x697b21*/
      while ( v5 < strlen(v4) ); /*0x697b35*/
    }
  }
  this->q051 = Time; /*0x697b41*/
  Debug::Log(); /*0x697b47*/
}



// ==== 0x00697B60  nullsub_228  this=-  sig=ida-proto ====
void nullsub_228()
{
  ; /*0x697b60*/
}



// ==== 0x00697B70  SessionClass::CreateConnections  this=SessionClass  sig=csp ====
int __thiscall SessionClass::CreateConnections(SessionClass *this)
{
  int v3; // esi
  int v4; // eax
  int v5; // ebp
  int i; // eax
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // ebp
  int v10; // esi
  int Ticks; // ecx
  int v12; // [esp+10h] [ebp-18h] BYREF
  int v13; // [esp+14h] [ebp-14h] BYREF
  int v14; // [esp+18h] [ebp-10h] BYREF
  char v15; // [esp+1Ch] [ebp-Ch]
  char v16; // [esp+1Dh] [ebp-Bh]
  int v17[2]; // [esp+20h] [ebp-8h] BYREF

  Debug::Log(); /*0x697b7e*/
  if ( *(_DWORD *)&dword_A8B238 != 3 && *(_DWORD *)&dword_A8B238 != 4 ) /*0x697b93*/
    return 0; /*0x697b9e*/
  v3 = 0; /*0x697ba7*/
  if ( this->StartSpots[4] > 0 ) /*0x697bab*/
  {
    do /*0x697bc5*/
    {
      Debug::Log(); /*0x697bc5*/
      if ( _wcsicmp( /*0x697be7*/
             *(const wchar_t **)(this->StartSpots[1] + 4 * v3),
             (const wchar_t *)(*((_DWORD *)stru_A80220.? + *(_DWORD *)(*(_DWORD *)(this->StartSpots[1] + 4 * v3) + 111))
                             + 90154)) )
      {
        return 0; /*0x697bf1*/
      }
      if ( !_wcsicmp(*(const wchar_t **)(this->StartSpots[1] + 4 * v3), (const wchar_t *)&this->unknown_2854[499]) ) /*0x697c04*/
      {
        this->unknown_2854[520] = *(_DWORD *)(*(_DWORD *)(this->StartSpots[1] + 4 * v3) + 111); /*0x697c25*/
        Network::CopyAddress((Network *)(dword_A8DA78[v3] + 40), &v13, (int)v17); /*0x697c38*/
        NetworkID::Assign(&qword_A8DBA4, &v13, (int)v17, 0); /*0x697c4d*/
        Network::SetPlayerCoords((Network *)&unk_A8E9C0, &qword_A8DBA4); /*0x697c5c*/
      }
      v4 = *(_DWORD *)(this->StartSpots[1] + 4 * v3); /*0x697c67*/
      *(_DWORD *)(*((_DWORD *)stru_A80220.? + *(_DWORD *)(v4 + 111)) + 516) = *(_DWORD *)(v4 + 123); /*0x697c7e*/
      Network::CopyAddress((Network *)(dword_A8DA78[v3] + 40), &v13, (int)v17); /*0x697c94*/
      v5 = 0; /*0x697c99*/
      for ( i = 0; i < 4; ++i ) /*0x697c9b*/
        v5 = *((unsigned __int8 *)v17 + i) | (v5 << 8); /*0x697ca8*/
      Debug::Log(); /*0x697cc7*/
      *(_DWORD *)(*((_DWORD *)stru_A80220.? + *(_DWORD *)(*(_DWORD *)(this->StartSpots[1] + 4 * v3) + 111)) + 512) = v5; /*0x697ce5*/
      *(_BYTE *)(*((_DWORD *)stru_A80220.? + *(_DWORD *)(*(_DWORD *)(this->StartSpots[1] + 4 * v3) + 111)) + 520) = 0; /*0x697d00*/
      if ( v3 > 0 ) /*0x697d06*/
      {
        v7 = *(_DWORD *)(this->StartSpots[1] + 4 * v3); /*0x697d0e*/
        SessionClass::initLAN((int)&unk_A8E9C0, *(_DWORD *)(v7 + 111), (wchar_t *)v7, (_DWORD *)(v7 + 40)); /*0x697d1f*/
        *(_DWORD *)(*(_DWORD *)(this->StartSpots[1] + 4 * v3) + 115) = -1; /*0x697d2d*/
      }
    }
    while ( ++v3 < this->StartSpots[4] ); /*0x697bc5*/
  }
  v8 = *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x697d43*/
  v9 = dword_A8E284; /*0x697d48*/
  do /*0x697d79*/
  {
    v10 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x697d4d*/
    if ( v8 != -1 ) /*0x697d56*/
    {
      Ticks = Timer::GetTicks(); /*0x697d62*/
      v8 = *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x697d64*/
      v10 += Ticks - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x697d6b*/
    }
    *v9++ = v10; /*0x697d6d*/
  }
  while ( (int)v9 < (int)&byte_A8E2A4 ); /*0x697d79*/
  if ( this->GameMode[0] != 4 ) /*0x697d7e*/
    goto LABEL_22; /*0x697d7e*/
  if ( !LOBYTE(this->unknown_2854[527]) ) /*0x697d84*/
    goto LABEL_22; /*0x697d84*/
  v12 = 0; /*0x697da0*/
  v14 = 0; /*0x697db0*/
  v15 = 0; /*0x697dc0*/
  v16 = 0; /*0x697dc4*/
  NetworkID::Assign(&qword_A8DBB0, &v12, (int)&v14, 0); /*0x697dc8*/
  LOBYTE(this->unknown_2854[69]) = 1; /*0x697dd2*/
  this->unknown_2854[526] = 0; /*0x697dd9*/
  this->unknown_2854[530] = 20; /*0x697ddf*/
  this->unknown_2854[528] = -1; /*0x697de9*/
  SessionClass::initInternet((SessionClass *)&unk_A8E9C0); /*0x697df3*/
  SessionClass::BuildLobbyPlayerList((SessionClass *)&stru_B052C0.__pad_0[16]); /*0x697dfd*/
  if ( SessionClass::IsValidHouse((int)&dword_A8B238, 0) ) /*0x697e08*/
  {
    if ( !LaunchMultiplayerHost((int)&stru_B052C0.__pad_0[16], 0) /*0x697e25*/
      || !Network::SendMasterPlayerList((Network *)&stru_B052C0.__pad_0[16]) )
    {
LABEL_22:
      byte_A8DBA0 = 0; /*0x697e2e*/
    }
  }
  Debug::Log(); /*0x697e4f*/
  Debug::Log(); /*0x697e59*/
  return 1; /*0x697b95*/
}



// ==== 0x00697E70  SessionClass::IsValidHouse  this=SessionClass  sig=csp ====
char __thiscall SessionClass_IsValidHouse(int this, #375 *a2)
{
  #375 *v2; // edi
  int v3; // eax
  int v5; // ecx
  HouseClass *i; // edx
  #375 *v7; // eax

  v2 = a2; /*0x697e73*/
  if ( !a2 ) /*0x697e79*/
    v2 = dword_A83D4C; /*0x697e7b*/
  if ( dword_A8B238[0] != 4 || !v2 ) /*0x697e8c*/
    goto LABEL_9; /*0x697e8c*/
  v3 = *(_DWORD *)(this + 12404); /*0x697e8e*/
  if ( v3 != -1 ) /*0x697e97*/
    return *((_DWORD *)v2 + 12) == v3; /*0x697ea8*/
  if ( !_wcsicmp((const wchar_t *)v2 + 45077, (const wchar_t *)(this + 12320)) ) /*0x697eb9*/
    return 1; /*0x697ec7*/
LABEL_9:
  v5 = 0; /*0x697ed3*/
  if ( dword_A80238 <= 0 ) /*0x697ed7*/
    return 0; /*0x697efd*/
  for ( i = dword_A8022C; ; i = (HouseClass *)((char *)i + 4) ) /*0x697ed9*/
  {
    v7 = *(#375 **)i->AbstractClass; /*0x697edf*/
    if ( *(_BYTE *)(*(_DWORD *)i->AbstractClass + 492) ) /*0x697ee1*/
    {
      if ( !*((_BYTE *)v7 + 501) ) /*0x697eeb*/
        break; /*0x697eeb*/
    }
    if ( ++v5 >= dword_A80238 ) /*0x697efb*/
      return 0; /*0x697efb*/
  }
  return v2 == v7; /*0x697ea0*/
}



// ==== 0x00697F10  ObjectClass::ReadGameSettingsINI  this=ObjectClass  sig=csp ====
int __thiscall ReadGameSettingsINI(ObjectClass *this, _DWORD *a2, int a3, _DWORD *a4, _DWORD *a5)
{
  GameSetup *v5; // ebx
  int First; // eax
  unsigned __int8 *v8; // ebp
  int i; // esi
  char *v10; // eax
  int v11; // edx
  char *v12; // ecx
  int result; // eax
  char *v14; // [esp+10h] [ebp-14h] BYREF
  char Buffer[16]; // [esp+14h] [ebp-10h] BYREF

  v5 = (GameSetup *)a2; /*0x697f14*/
  INIClass::ResetSection((INIClass *)a2); /*0x697f1f*/
  First = MultiplayerGameMode::GetFirst(); /*0x697f24*/
  v8 = (unsigned __int8 *)a3; /*0x697f2c*/
  this->AbstractClass = (void *)INIClass::ReadInt_Overwrite( /*0x697f48*/
                                  (bool *)v5->__pad_0,
                                  (unsigned __int8 *)a3,
                                  (unsigned __int8 *)g_INI_Key_GameMode,
                                  *(_DWORD *)(First + 40));
  this->? = (void *)INIClass::ReadInt_Overwrite((bool *)v5->__pad_0, v8, (unsigned __int8 *)aScenindex, 0); /*0x697f4f*/
  this->? = (void *)INIClass::ReadInt_Overwrite( /*0x697f6b*/
                      (bool *)v5->__pad_0,
                      v8,
                      (unsigned __int8 *)g_INI_Key_GameSpeed,
                      *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5280));
  this->? = (void *)INIClass::ReadInt_Overwrite( /*0x697f88*/
                      (bool *)v5->__pad_0,
                      v8,
                      (unsigned __int8 *)g_INI_Key_Credits,
                      *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5252));
  this->? = INIClass::ReadInt_Overwrite( /*0x697fa5*/
              (bool *)v5->__pad_0,
              v8,
              (unsigned __int8 *)g_INI_Key_UnitCount,
              *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5268));
  LOBYTE(this->?) = INIClass::ReadBool_Overwrite( /*0x697fc1*/
                      (int *)v5->__pad_0,
                      v8,
                      (unsigned __int8 *)g_INI_Key_ShortGame,
                      *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5302));
  BYTE1(this->?) = INIClass::ReadBool_Overwrite( /*0x697fde*/
                     (int *)v5->__pad_0,
                     v8,
                     (unsigned __int8 *)g_INI_Key_SuperWeaponsAllowed,
                     *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5305));
  BYTE2(this->?) = INIClass::ReadBool_Overwrite( /*0x697ffb*/
                     (int *)v5->__pad_0,
                     v8,
                     (unsigned __int8 *)g_INI_Key_BuildOffAlly,
                     *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5306));
  HIBYTE(this->?) = INIClass::ReadBool_Overwrite( /*0x698017*/
                      (int *)v5->__pad_0,
                      v8,
                      (unsigned __int8 *)aMcvrepacks,
                      *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5304));
  LOBYTE(this->?) = INIClass::ReadBool_Overwrite( /*0x698034*/
                      (int *)v5->__pad_0,
                      v8,
                      (unsigned __int8 *)aCratesappear,
                      *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5297));
  for ( i = 1; i < 8; ++i ) /*0x698037*/
  {
    sprintf(Buffer, "Slot%02d", i); /*0x698047*/
    if ( i == 1 ) /*0x698052*/
      a2 = a5; /*0x698058*/
    else
      a2 = a4; /*0x698062*/
    a3 = -2; /*0x69806f*/
    v14 = (char *)-2; /*0x698073*/
    GameSetup::ParseCoordTriple(v5, v8, (unsigned __int8 *)Buffer, (int *)&a2, &a3, (const char **)&v14); /*0x69808a*/
    v10 = (char *)this + 12 * i; /*0x698096*/
    v11 = a3; /*0x698099*/
    *((_DWORD *)v10 + 7) = a2; /*0x69809d*/
    v12 = v14; /*0x6980a0*/
    *((_DWORD *)v10 + 8) = v11; /*0x6980a4*/
    result = 3 * i + 9; /*0x6980a7*/
    *((_DWORD *)&this->AbstractClass + result) = v12; /*0x6980af*/
  }
  return result; /*0x6980b4*/
}



// ==== 0x006980C0  ScenarioClass::LoadNetworkConfig  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::LoadNetworkConfig(ScenarioClass *this)
{
  int i; // esi
  int j; // esi
  int v4; // ecx
  int v5; // eax
  wchar_t *StringCSF; // eax
  int Int_Overwrite; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  char Bool_Overwrite; // al
  char v12; // cl
  char v13; // al
  int v14; // eax
  MultiplayerGameMode *v15; // eax
  int v16; // eax
  int v17; // ebx
  char **v18; // esi
  int KeyCount; // ebx
  char *v20; // eax
  char *v21; // esi
  unsigned __int8 *StringByIndex; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // edx
  int v27; // ebx
  unsigned __int8 *v28; // eax
  unsigned __int8 *v29; // eax
  char *v30; // eax
  char *v31; // eax
  char *v32; // eax
  char *v33; // eax
  char *v34; // eax
  char *v35; // eax
  char *v36; // eax
  int v37; // edi
  char **v38; // esi
  char *v39; // eax
  char *v40; // eax
  char *v41; // eax
  int v42; // edx
  int v43; // eax
  int v44; // eax
  int v45; // edx
  int v46; /... [21699 chars total]



// ==== 0x00698CB0  Game::DumpMultiplayerGameInfo  this=Game  sig=csp ====
char __thiscall Game::DumpMultiplayerGameInfo(Game *this, FILE *Stream)
{
  int v2; // eax
  FILE *v3; // esi
  int i; // ebp
  unsigned int j; // edi
  unsigned int k; // edi
  unsigned int m; // edi
  unsigned int n; // edi
  int v11[2]; // [esp+Ch] [ebp-8h] BYREF

  v2 = *(_DWORD *)&stru_A8B250.__pad_0[4]; /*0x698cb0*/
  v3 = Stream; /*0x698cbc*/
  if ( *(int *)&stru_A8B250.__pad_0[4] < 0 ) /*0x698cc3*/
  {
    fprintf(Stream, "BOGUS scenario index!?!\n"); /*0x698ccb*/
    v2 = 0; /*0x698cd3*/
    *(_DWORD *)&stru_A8B250.__pad_0[4] = 0; /*0x698cd5*/
  }
  fprintf(v3, "Scenario = %s\n", *(const char **)(dword_A8B8CC + 4 * v2)); /*0x698ceb*/
  fprintf(v3, "Handle = %s\n", (const char *)&this->Game_field_0x148); /*0x698cfd*/
  for ( i = 0; i < (int)this->Game_field_0x314; ++i ) /*0x698d0f*/
  {
    Network::CopyAddress((Network *)(dword_A8DA78[i] + 40), &Stream, (int)v11); /*0x698d2a*/
    fprintf(v3, "Player Addr[%d] = ", i); /*0x698d36*/
    for ( j = 0; j < 4; ++j ) /*0x698d3e*/
      fprintf(v3, "%02X", *((unsigned __int8 *)&Stream + j)); /*0x698d4d*/
    fprintf(v3, ":"); /*0x698d61*/
    for ( k = 0; k < 6; ++k ) /*0x698d69*/
      fprintf(v3, "%02X", *((unsigned __int8 *)v11 + k)); /*0x698d78*/
    fprintf(v3, "\n"); /*0x698d8c*/
  }
  fprintf(v3, "\n"); /*0x698da9*/
  Network::CopyAddress(&stru_A8BB1C, &Stream, (int)v11); /*0x698dc0*/
  fprintf(v3, "Address = "); /*0x698dcb*/
  for ( m = 0; m < 4; ++m ) /*0x698dd3*/
    fprintf(v3, "%02X", *((unsigned __int8 *)&Stream + m)); /*0x698de3*/
  fprintf(v3, ":"); /*0x698df7*/
  for ( n = 0; n < 6; ++n ) /*0x698dff*/
    fprintf(v3, "%02X", *((unsigned __int8 *)v11 + n)); /*0x698e0e*/
  fprintf(v3, "\n\n"); /*0x698e22*/
  fprintf(v3, "MaxAhead = %d\n", this->Game_field_0x318); /*0x698e34*/
  fprintf(v3, "LoadGame = %d\n", this->Game_field_0x680); /*0x698e46*/
  fprintf(v3, "PrefColor = %d\n", this->Game_field_0x17C); /*0x698e58*/
  fprintf(v3, "ColorIdx = %d\n", this->Game_field_0x15C); /*0x698e6a*/
  fprintf(v3, "House = %d\n", this->Game_field_0x174); /*0x698e7c*/
  fprintf(v3, "NumPlayers = %d\n", this->Game_field_0x314); /*0x698e91*/
  fprintf(v3, "Options.Bases = %d\n", (unsigned __int8)this->__pad_8[24]); /*0x698ea2*/
  fprintf(v3, "Options.Credits = %d\n", this->Game_field_0x24[0]); /*0x698eb1*/
  fprintf(v3, "Options.BridgeDestruction = %d\n", (unsigned __int8)this->__pad_28[0]); /*0x698ec2*/
  fprintf(v3, "Options.Goodies = %d\n", (unsigned __int8)this->__pad_28[1]); /*0x698ed3*/
  fprintf(v3, "Options.Ghosts = %d\n", (unsigned __int8)this->__pad_28[13]); /*0x698ee4*/
  fprintf(v3, "Options.UnitCount = %d\n", this->Game_field_0x38); /*0x698ef6*/
  fprintf(v3, "Options.AIPlayers = %d\n", this->Game_field_0x3C); /*0x698f05*/
  fprintf(v3, "Options.AIDifficulty = %d\n", this->Game_field_0x40); /*0x698f14*/
  fprintf(v3, "ObiWan = %d\n", this->Game_field_0x300); /*0x698f26*/
  if ( *(_DWORD *)&dword_A8B238 == 3 ) /*0x698f36*/
  {
    fprintf(v3, "Type = IPX\n"); /*0x698f3e*/
    return 1; /*0x698f46*/
  }
  else
  {
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x698f54*/
      fprintf(v3, "Type = INTERNET\n"); /*0x698f5c*/
    else
      fprintf(v3, "Type = !!Unknown!!\n"); /*0x698f75*/
    return 1; /*0x698f64*/
  }
}



// ==== 0x00698F90  GameSetup::WriteINI  this=GameSetup  sig=csp ====
int __thiscall GameSetup_WriteINI(int this, char *a2, unsigned __int8 *Block)
{
  int v4; // ebp
  int *v5; // ebx
  int result; // eax
  char Buffer[16]; // [esp+10h] [ebp-10h] BYREF

  INIClass::SetInt(a2, Block, g_INI_Key_GameMode, *(_DWORD *)this, 0); /*0x698fae*/
  INIClass::SetInt(a2, Block, aScenindex, *(_DWORD *)(this + 4), 0); /*0x698fc1*/
  INIClass::SetInt(a2, Block, g_INI_Key_GameSpeed, *(_DWORD *)(this + 8), 0); /*0x698fd4*/
  INIClass::SetInt(a2, Block, g_INI_Key_Credits, *(_DWORD *)(this + 12), 0); /*0x698fe7*/
  INIClass::SetInt(a2, Block, g_INI_Key_UnitCount, *(_DWORD *)(this + 16), 0); /*0x698ffa*/
  INIClass::SetBool(a2, Block, g_INI_Key_ShortGame, *(_BYTE *)(this + 20)); /*0x69900b*/
  INIClass::SetBool(a2, Block, g_INI_Key_SuperWeaponsAllowed, *(_BYTE *)(this + 21)); /*0x69901c*/
  INIClass::SetBool(a2, Block, g_INI_Key_BuildOffAlly, *(_BYTE *)(this + 22)); /*0x69902d*/
  INIClass::SetBool(a2, Block, aMcvrepacks, *(_BYTE *)(this + 23)); /*0x69903e*/
  INIClass::SetBool(a2, Block, aCratesappear, *(_BYTE *)(this + 24)); /*0x69904f*/
  v4 = 1; /*0x699054*/
  v5 = (int *)(this + 44); /*0x699059*/
  do /*0x69908e*/
  {
    sprintf(Buffer, "Slot%02d", v4); /*0x699067*/
    result = GameSetup::FormatToString(Block, Buffer, *(v5 - 1), *v5, v5[1]); /*0x699082*/
    ++v4; /*0x699087*/
    v5 += 3; /*0x699088*/
  }
  while ( v4 < 8 ); /*0x69908e*/
  return result; /*0x699090*/
}



// ==== 0x006990A0  ObjectClass::SaveConfigWOL  this=ObjectClass  sig=csp ====
void __thiscall SaveConfigWOL(TechnoClass *this)
{
  char *v2; // eax
  int vtable1; // eax
  int i; // edi
  int j; // edi
  int v6; // eax
  CHAR v7[12]; // [esp+Ch] [ebp-B0h] BYREF
  BufferIOFileClass v8[2]; // [esp+18h] [ebp-A4h] BYREF

  RawFileClass::Construct(v8, (int)aRa2mdIni); /*0x6990b4*/
  INIClass::SetInt(dword_8870C0.__pad_0, aMultiplayer, aPhoneindex, *((_DWORD *)this + 2593), 0); /*0x6990d1*/
  INIClass::SetBool(dword_8870C0.__pad_0, aMultiplayer, aWollimitresolu, this->sparkParticles); /*0x6990ec*/
  INIClass::SetInt(dword_8870C0.__pad_0, aMultiplayer, aLastnickslot, this->ambientParticles, 0); /*0x699109*/
  v2 = CharToWideString(&this->ammoReloadTimer); /*0x699114*/
  INIClass::SetWideAsHex(dword_8870C0.__pad_0, aMultiplayer, aHandle, (wchar_t *)v2); /*0x699129*/
  INIClass::SetInt(dword_8870C0.__pad_0, aMultiplayer, aColor, this->radarFlashTimer[2], 0); /*0x699146*/
  INIClass::SetInt(dword_8870C0.__pad_0, aMultiplayer, aColorex, this->targetingTimer[0], 0); /*0x699163*/
  INIClass::SetHouseName(dword_8870C0.__pad_0, aMultiplayer, aSide, (void *)this->targetingTimer[1]); /*0x69917e*/
  INIClass::SetInt(dword_8870C0.__pad_0, aMultiplayer, aSideex, this->targetingTimer[2], 0); /*0x69919b*/
  vtable1 = this->vtable1; /*0x6991a0*/
  if ( vtable1 ) /*0x6991a7*/
    INIClass::SetInt(dword_8870C0.__pad_0, aMultiplayer, g_INI_Key_GameMode, *(_DWORD *)(vtable1 + 40), 0); /*0x6991ad*/
  else
    INIClass::SetInt(dword_8870C0.__pad_0, aMultiplayer, g_INI_Key_GameMode, 0, 0); /*0x6991c0*/
  GameSetup::WriteINI((int)this->__pad_18C, dword_8870C0.__pad_0, (unsigned __int8 *)aSkirmish); /*0x6991d5*/
  GameSetup::WriteINI((int)&this->currentBurstCount, dword_8870C0.__pad_0, (unsigned __int8 *)aLan); /*0x6991ea*/
  GameSetup::WriteINI((int)&this->chronoLockRemaining, dword_8870C0.__pad_0, (unsigned __int8 *)aWonlinepref); /*0x6991ff*/
  INIClass::ClearSection((int *)dword_8870C0.__pad_0, (int)g_INI_Key_SerialDefaults, 0); /*0x699210*/
  INIClass::SetString(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aCallwaitstring_0, (char *)this + 10408); /*0x69922b*/
  INIClass::SetInt(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aCallwaitstring, *((_DWORD *)this + 2599), 0); /*0x699248*/
  INIClass::SetInt(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aInitstringinde, *((_DWORD *)this + 2598), 0); /*0x699265*/
  INIClass::SetString( /*0x699287*/
    dword_8870C0.__pad_0,
    g_INI_Key_SerialDefaults,
    aDialmethod,
    (&off_83ECFC)[*((_DWORD *)this + 2597)]);
  INIClass::SetInt(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aBaud, *((_DWORD *)this + 2596), 0); /*0x6992a4*/
  INIClass::SetInt(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aIrq, *((_DWORD *)this + 2595), 0); /*0x6992c1*/
  INIClass::SetInt(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aPort, *((_DWORD *)this + 2594), 1); /*0x6992de*/
  INIClass::SetInt(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aCompression, *((_DWORD *)this + 2600), 0); /*0x6992fb*/
  INIClass::SetInt(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aErrorcorrectio, *((_DWORD *)this + 2601), 0); /*0x699318*/
  INIClass::SetString(dword_8870C0.__pad_0, g_INI_Key_SerialDefaults, aModemname, (char *)this + 10424); /*0x699333*/
  INIClass::ClearSection((int *)dword_8870C0.__pad_0, (int)g_INI_Key_InitStrings, 0); /*0x699344*/
  for ( i = 0; i < *((_DWORD *)this + 2633); ++i ) /*0x699359*/
  {
    wsprintfA(v7, "%03d", i); /*0x699366*/
    INIClass::SetString(dword_8870C0.__pad_0, g_INI_Key_InitStrings, v7, *(char **)(*((_DWORD *)this + 2630) + 4 * i)); /*0x699384*/
  }
  INIClass::ClearSection((int *)dword_8870C0.__pad_0, (int)g_INI_Key_PhoneBook, 0); /*0x6993a0*/
  for ( j = *((_DWORD *)this + 2627) - 1; j >= 0; --j ) /*0x6993ac*/
  {
    v6 = *(_DWORD *)(*((_DWORD *)this + 2624) + 4 * j); /*0x6993b4*/
    wsprintfA( /*0x6993f6*/
      (LPSTR)&v8[0].BufferOffset,
      "%s|%s|%x|%d|%d|%d|%d|%s|%d|%d|%s",
      (const char *)(v6 + 112),
      (const char *)(v6 + 154),
      *(_DWORD *)v6,
      *(_DWORD *)(v6 + 4),
      *(_DWORD *)(v6 + 8),
      *(_DWORD *)(v6 + 24),
      *(_DWORD *)(v6 + 28),
      (&off_83ECFC)[*(_DWORD *)(v6 + 12)],
      *(_DWORD *)(v6 + 16),
      *(_DWORD *)(v6 + 20),
      (const char *)(v6 + 32));
    wsprintfA(v7, "%03d", j); /*0x699403*/
    INIClass::SetString(dword_8870C0.__pad_0, g_INI_Key_PhoneBook, v7, (char *)&v8[0].BufferOffset); /*0x69941c*/
  }
  INIClass::WriteDigest((CCINIClass *)&dword_8870C0, (int)v8, 0); /*0x699430*/
  RawFileClass::Dtor(v8); /*0x699439*/
}



// ==== 0x00699450  ScenarioClass::SaveMultiplayerSettings  this=ScenarioClass  sig=csp ====
void __thiscall sub_699450(char *this)
{
  int v2[9]; // [esp+4h] [ebp-24h] BYREF

  RawFileClass::Construct(v2, (int)aRa2mdIni); /*0x69945f*/
  INIClass::SetBool((char *)&dword_8870C0, (unsigned __int8 *)aMultiplayer, aWoltaunts, this->q1ED9); /*0x69947a*/
  INIClass::SetBool((char *)&dword_8870C0, (unsigned __int8 *)aMultiplayer, aLantaunts, this->q1ED8); /*0x699495*/
  INIClass::SetBool((char *)&dword_8870C0, (unsigned __int8 *)aMultiplayer, aWolscrolltext, this->q1FC1); /*0x6994b0*/
  INIClass::SetBool((char *)&dword_8870C0, (unsigned __int8 *)aMultiplayer, aLanscrolltext, this->q1FC0); /*0x6994cb*/
  INIClass::WriteDigest(&dword_8870C0, (int)v2, 0); /*0x6994dc*/
  RawFileClass::Dtor(v2); /*0x6994e5*/
}



// ==== 0x006994F0  ParseMapFileHeader  this=AbstractClass  sig=csp ====
int __fastcall ParseMapFileHeader(char *Source, _WORD *a2, char *a3, char *Destination, _BYTE *a5, int *a6, int *a7)
{
  int v7; // edi
  void *v8; // ebp
  signed int v9; // esi
  char *v10; // eax
  char *v11; // esi
  char *v12; // eax
  int v13; // edi
  void *v14; // esi
  signed int v15; // edi
  int v17; // [esp+10h] [ebp-1A4h]
  char *v19; // [esp+1Ch] [ebp-198h]
  CCFileClass v20; // [esp+20h] [ebp-194h] BYREF
  int v21[3]; // [esp+78h] [ebp-13Ch] BYREF
  int v22; // [esp+84h] [ebp-130h]
  Straw v23; // [esp+8Ch] [ebp-128h] BYREF
  int v24; // [esp+94h] [ebp-120h]
  Buffer v25; // [esp+98h] [ebp-11Ch] BYREF
  int v26; // [esp+C0h] [ebp-F4h]
  INIClass v27; // [esp+C4h] [ebp-F0h] BYREF
  char v28; // [esp+104h] [ebp-B0h]
  INIClass v29; // [esp+11Ch] [ebp-98h] BYREF
  char v30; // [esp+15Ch] [ebp-58h]
  char v31[64]; // [esp+174h] [ebp-40h] BYREF

  CCFileClass::Construct(&v20, Source); /*0x699507*/
  if ( (unsigned __int8)CCFileClass::Open(&v20, 0) && FileClass::Load(&v20, (const CHAR *)1) ) /*0x699526*/
  {
    v7 = 0; /*0x699533*/
    v8 = 0; /*0x699535*/
    while ( 1 ) /*0x69953b*/
    {
      v7 += 5; /*0x69953b*/
      v9 = v7 * CCFileClass::GetSize(&v20) / 100; /*0x69955b*/
      if ( v8 ) /*0x69955d*/
        __3_YAXPAX_Z(v8); /*0x699560*/
      v8 = (void *)__2_YAPAXI_Z(v9 + 1); /*0x699571*/
      if ( !v8 ) /*0x699578*/
        break; /*0x699578*/
      BufferIOFileClass::Seek(&v20, 0, 0); /*0x699584*/
      CCFileClass::Read(&v20, v8, v9); /*0x69958f*/
      *((_BYTE *)v8 + v9) = 0; /*0x699594*/
      v10 = strstr((const char *)v8, aBasic_0); /*0x69959d*/
      v11 = v10; /*0x6995a2*/
      if ( v10 ) /*0x6995a9*/
      {
        v12 = strstr(v10 + 5, asc_83F484); /*0x6995b4*/
        v19 = v12; /*0x6995be*/
        if ( v12 > v11 ) /*0x6995c2*/
        {
          v12[1] = 0; /*0x6995e1*/
          Debug::Log(); /*0x6995e4*/
          v13 = 0; /*0x6995ec*/
          v14 = 0; /*0x6995ee*/
          while ( 1 ) /*0x6995f5*/
          {
            v17 = v13 + 1; /*0x6995f5*/
            v15 = (v13 + 1) * CCFileClass::GetSize(&v20) / 100; /*0x699616*/
            if ( v14 ) /*0x699618*/
              __3_YAXPAX_Z(v14); /*0x69961b*/
            v14 = (void *)__2_YAPAXI_Z(v15 + 1); /*0x69962c*/
            if ( !v14 ) /*0x699633*/
              goto LABEL_20; /*0x699633*/
            BufferIOFileClass::Seek(&v20, -v15, 2u); /*0x699644*/
            CCFileClass::Read(&v20, v14, v15); /*0x69964f*/
            *((_BYTE *)v14 + v15) = 0; /*0x699654*/
            if ( strstr((const char *)v14, aDigest_0) ) /*0x69965d*/
            {
              Debug::Log(); /*0x699693*/
              v27.headNode[0] = 0; /*0x6996a2*/
              v27.headNode[1] = 0; /*0x6996a9*/
              INISectionList::Constructor((INISectionList *)&v27.headNode[2]); /*0x6996b0*/
              Node::Init((Node *)&v27.__pad_20[8]); /*0x6996bc*/
              v27.INIClass_field_3C = 0; /*0x6996d5*/
              v28 = 0; /*0x6996dc*/
              *(_DWORD *)v27.__pad_0 = &CCINIClass_Vtable; /*0x6996e3*/
              v25.Buffer_field_14 = 0; /*0x6996ea*/
              v25.Buffer_field_18 = 0; /*0x6996f1*/
              v25.Buffer_field_10 = (int)&Straw::`vftable'; /*0x6996f8*/
              Buffer::Init((Buffer *)&v25.Buffer_field_1C, (int)v8, v19 - (_BYTE *)v8); /*0x699703*/
              v26 = 0; /*0x69970f*/
              v25.Buffer_field_10 = (int)&BufferStraw::`vftable'; /*0x699720*/
              CCINIClass::LoadAndVerifyDigest((int *)v27.__pad_0, (int)&v25.Buffer_field_10, 0, 0); /*0x69972b*/
              v29.headNode[0] = 0; /*0x699737*/
              v29.headNode[1] = 0; /*0x69973e*/
              INISectionList::Constructor((INISectionList *)&v29.headNode[2]); /*0x699745*/
              Node::Init((Node *)&v29.__pad_20[8]); /*0x699751*/
              *(_DWORD *)v29.__pad_0 = &CCINIClass_Vtable; /*0x699756*/
              v29.INIClass_field_3C = 0; /*0x699764*/
              v30 = 0; /*0x69976b*/
              v23.Straw_field_0x04 = 0; /*0x69977f*/
              v24 = 0; /*0x699786*/
              *(_DWORD *)v23.__pad_0 = &Straw::`vftable'; /*0x69978d*/
              Buffer::Init(&v25, (int)v14, strlen((const char *)v14) + 1); /*0x699798*/
              v25.Buffer_field_0C = 0; /*0x6997ae*/
              *(_DWORD *)v23.__pad_0 = &BufferStraw::`vftable'; /*0x6997b5*/
              CCINIClass::LoadAndVerifyDigest((int *)v29.__pad_0, (int)&v23, 0, 0); /*0x6997c0*/
              *a6 = INIClass::ReadInt_Overwrite( /*0x6997e5*/
                      (bool *)v27.__pad_0,
                      (unsigned __int8 *)&stru_82BA00.?,
                      aMinplayers,
                      *a6);
              *a7 = INIClass::ReadInt_Overwrite( /*0x69981b*/
                      (bool *)v27.__pad_0,
                      (unsigned __int8 *)&stru_82BA00.?,
                      aMaxplayers,
                      *a7);
              INIClass::GetString( /*0x699833*/
                &v27,
                (unsigned __int8 *)&stru_82BA00.?,
                (unsigned __int8 *)g_INI_Key_GameMode,
                &g_INI_DefaultBuffer,
                Destination,
                256);
              INIClass::GetString( /*0x699858*/
                &v27,
                (unsigned __int8 *)&stru_82BA00.?,
                (unsigned __int8 *)g_INI_Key_Name,
                g_Str_No_Name,
                v31,
                64);
              BulkCharToWide(a2, (unsigned __int8 *)v31, -1); /*0x69986a*/
              INIClass::GetString(&v29, (unsigned __int8 *)g_INI_Key_Digest, a1, g_Str_No_Digest, a3, 32); /*0x69988f*/
              *a5 = INIClass::ReadBool_Overwrite( /*0x6998ba*/
                      (int *)v27.__pad_0,
                      (unsigned __int8 *)&stru_82BA00.?,
                      (unsigned __int8 *)g_INI_Key_Official,
                      0);
              Debug::Log(); /*0x6998d9*/
              Debug::Log(); /*0x6998eb*/
              __3_YAXPAX_Z(v8); /*0x6998f1*/
              __3_YAXPAX_Z(v14); /*0x6998f7*/
              Vector::Clear((int)&v25); /*0x699906*/
              Straw::Dtor(&v23); /*0x699912*/
              HashTable::DestroyHashTableINIClass(&v29); /*0x69991e*/
              Vector::Clear((int)&v25.Buffer_field_1C); /*0x69992a*/
              Straw::Dtor((Straw *)&v25.Buffer_field_10); /*0x699936*/
              HashTable::DestroyHashTableINIClass(&v27); /*0x699942*/
              goto LABEL_20; /*0x699942*/
            }
            if ( v17 >= 100 ) /*0x699670*/
            {
              __3_YAXPAX_Z(v8); /*0x69967a*/
              __3_YAXPAX_Z(v14); /*0x699680*/
              goto LABEL_20; /*0x699688*/
            }
            v13 = v17; /*0x699672*/
          }
        }
      }
      if ( v7 >= 100 ) /*0x6995c7*/
      {
        __3_YAXPAX_Z(v8); /*0x6995ce*/
        break; /*0x6995d6*/
      }
    }
  }
LABEL_20:
  *(_DWORD *)v20.CDFileClass = &CCFileClass::`vftable'; /*0x699947*/
  v22 = 0; /*0x699953*/
  Vector::Clear((int)v21); /*0x69995a*/
  *(_DWORD *)v20.CDFileClass = &off_7E1668; /*0x699963*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v20); /*0x699970*/
}



// ==== 0x00699980  SessionClass::LoadMissionList  this=SessionClass  sig=csp ====
char *__thiscall SessionClass::LoadMissionList(SessionClass *this)
{
  wchar_t *Description; // esi
  int v3; // eax
  int *v4; // ebp
  int KeyCount; // ebx
  int v6; // edi
  unsigned __int8 *StringByIndex; // eax
  MapFile *v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  HANDLE FirstFileA; // ebx
  char *cAlternateFileName; // esi
  int v15; // ebx
  int i; // edi
  unsigned __int8 *v17; // eax
  MapFile *v18; // eax
  wchar_t *v19; // esi
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // edx
  HANDLE v24; // ebx
  char *cFileName; // esi
  MixFileClass *v26; // eax
  _DWORD *v27; // edi
  int v28; // eax
  unsigned int v29; // kr0C_4
  unsigned int v30; // ebx
  int v31; // eax
  int v32; // ecx
  unsigned __int8 *v33; // eax
  MapFile *v34; // eax
  wchar_t *v35; // eax
  wchar_t *v36; // esi
  int v37; // ecx
  int v38; // eax
  int v39; // edi
  wchar_t *StringCSF; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  int v44; // edx
  char *v45; // esi
  SessionClass *v46; // eax
  wchar_t *v47; // esi
  int v48; // ecx
  int v49; // eax
  int v50; // eax
  int v51; // edx
  HANDLE hFindFile; // [esp+20h] [ebp-5C4h]
  HANDLE hFindFilea; // [esp+20h] [ebp-5C4h]
  HANDLE hFindFileb; // [esp+20h] [ebp-5C4h]
  char v56[4]; // [esp+24h] [ebp-5C0h] BYREF
  int j; // [esp+28h] [ebp-5BCh]
  int v58; // [esp+2Ch] [ebp-5B8h] BYREF
  int v59; // [esp+30h] [ebp-5B4h] BYREF
  INIClass v60; // [esp+34h] [ebp-5B0h] BYREF
  int v61; // [esp+74h] [ebp-570h]
  int v62; // [esp+78h] [ebp-56Ch]
  CCFileClass v63; // [esp+7Ch] [ebp-568h] BYREF
  char v64[12]; // [esp+D4h] [ebp-510h] BYREF
  int v65; // [esp+E0h] [ebp-504h]
  char v66[64]; // [esp+E8h] [ebp-4FCh] BYREF
  char v67[32]; // [esp+128h] [ebp-4BCh] BYREF
  wchar_t Source[44]; // [esp+148h] [ebp-49Ch] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+1A0h] [ebp-444h] BYREF
  wchar_t Buffer[64]; // [esp+2E0h] [ebp-304h] BYREF
  wchar_t v71[64]; // [esp+360h] [ebp-284h] BYREF
  char Destination[260]; // [esp+3E0h] [ebp-204h] BYREF
  char v73[256]; // [esp+4E4h] [ebp-100h] BYREF

  Description = 0; /*0x69998b*/
  v60.headNode[0] = 0; /*0x699992*/
  v60.headNode[1] = 0; /*0x699996*/
  GenericList::Constructor((GenericList *)&v60.headNode[2]); /*0x69999a*/
  v3 = this->unknown_310[224]; /*0x69999f*/
  v4 = &this->unknown_310[224]; /*0x6999a5*/
  v60.headNode[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x6999ad*/
  memset(&v60.__pad_20[8], 0, 13); /*0x6999b5*/
  v60.unknown38 = 0; /*0x6999c6*/
  v60.INIClass_field_3C = 0; /*0x6999ca*/
  *(_DWORD *)v60.__pad_0 = &INIClass::`vftable'; /*0x6999ce*/
  (*(void (__thiscall **)(int *))(v3 + 12))(v4); /*0x6999d6*/
  CCFileClass::Construct(&v63, aMissionsmdPkt); /*0x6999e2*/
  if ( (unsigned __int8)CCFileClass::Open(&v63, 0) ) /*0x6999ec*/
  {
    FileStraw::Open((FileStraw *)&v60, (int)&v63, 0); /*0x699a03*/
    KeyCount = INIClass::GetKeyCount(v60.__pad_0, g_INI_Key_MultiMaps); /*0x699a16*/
    v6 = 0; /*0x699a18*/
    if ( KeyCount > 0 ) /*0x699a1c*/
    {
      while ( 1 ) /*0x699a3f*/
      {
        StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v60.__pad_0, g_INI_Key_MultiMaps, v6); /*0x699a3f*/
        if ( INIClass::GetString(&v60, g_INI_Key_MultiMaps, StringByIndex, &g_INI_DefaultBuffer, v66, 64) ) /*0x699a4e*/
        {
          v8 = (MapFile *)__2_YAPAXI_Z(0x1BCu); /*0x699a5c*/
          if ( v8 ) /*0x699a66*/
            Description = MapFile::LoadDescription(v8, (unsigned __int8 ***)&v60, v66); /*0x699a7c*/
          v9 = v4[2]; /*0x699a7e*/
          if ( v4[4] < v9 /*0x699aa4*/
            || (*((_BYTE *)v4 + 13) || !v9)
            && (v10 = v4[5], v10 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v4 + 8))(v4, v9 + v10, 0) )
          {
            v11 = v4[4]; /*0x699aab*/
            v12 = v4[1]; /*0x699aae*/
            v4[4] = v11 + 1; /*0x699ab4*/
            *(_DWORD *)(v12 + 4 * v11) = Description; /*0x699ab7*/
          }
        }
        if ( ++v6 >= KeyCount ) /*0x699abd*/
          break; /*0x699abd*/
        Description = 0; /*0x699a24*/
      }
    }
  }
  INIClass::ClearSection((int *)v60.__pad_0, 0, 0); /*0x699acb*/
  CCFileClass::Reset(&v63); /*0x699ad4*/
  FirstFileA = FindFirstFileA(aPkt, &FindFileData); /*0x699aec*/
  hFindFile = FirstFileA; /*0x699af1*/
  if ( FirstFileA != (HANDLE)-1 )
  {
    do
    {
      if ( (FindFileData.dwFileAttributes & 0x116) == 0 )
      {
        cAlternateFileName = FindFileData.cAlternateFileName; /*0x699b18*/
        if ( !strlen(FindFileData.cAlternateFileName) ) /*0x699b1f*/
          cAlternateFileName = FindFileData.cFileName; /*0x699b26*/
        if ( _strcmpi(cAlternateFileName, aMissionsmdPkt) )
        {
          FileClass::SetFileName(&v63, cAlternateFileName); /*0x699b48*/
          FileStraw::Open((FileStraw *)&v60, (int)&v63, 0); /*0x699b58*/
          v15 = INIClass::GetKeyCount(v60.__pad_0, g_INI_Key_MultiMaps); /*0x699b6b*/
          for ( i = 0; i < v15; ++i )
          {
            v17 = (unsigned __int8 *)INIClass::GetStringByIndex(v60.__pad_0, g_INI_Key_MultiMaps, i); /*0x699b90*/
            if ( INIClass::GetString(&v60, g_INI_Key_MultiMaps, v17, &g_INI_DefaultBuffer, v66, 64) )
            {
              v18 = (MapFile *)__2_YAPAXI_Z(0x1BCu); /*0x699bad*/
              v19 = v18 ? MapFile::LoadDescription(v18, (unsigned __int8 ***)&v60, v66) : 0;
              v20 = v4[2]; /*0x699bd3*/
              if ( v4[4] < v20 /*0x699bf9*/
                || (*((_BYTE *)v4 + 13) || !v20)
                && (v21 = v4[5], v21 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v4 + 8))(v4, v20 + v21, 0) )
              {
                v22 = v4[4]; /*0x699c00*/
                v23 = v4[1]; /*0x699c03*/
                v4[4] = v22 + 1; /*0x699c09*/
                *(_DWORD *)(v23 + 4 * v22) = v19; /*0x699c0c*/
              }
            }
          }
          FirstFileA = hFindFile; /*0x699c18*/
        }
      }
    }
    while ( FindNextFileA(FirstFileA, &FindFileData) );
    FindClose(FirstFileA); /*0x699c34*/
  }
  INIClass::ClearSection((int *)v60.__pad_0, 0, 0); /*0x699c42*/
  CCFileClass::Reset(&v63); /*0x699c4b*/
  v24 = FindFirstFileA(aYro, &FindFileData); /*0x699c69*/
  hFindFilea = v24; /*0x699c70*/
  v61 = dword_81C1D0; /*0x699c74*/
  SetSoundWarning(-2); /*0x699c78*/
  if ( v24 != (HANDLE)-1 ) /*0x699c80*/
  {
    do /*0x699fbc*/
    {
      if ( (FindFileData.dwFileAttributes & 0x116) == 0 ) /*0x699c91*/
      {
        cFileName = FindFileData.cAlternateFileName; /*0x699ca3*/
        if ( !strlen(FindFileData.cAlternateFileName) ) /*0x699caa*/
          cFileName = FindFileData.cFileName; /*0x699cb1*/
        if ( _strcmpi(cFileName, aMissionsYro) ) /*0x699cbe*/
        {
          v26 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x699cd0*/
          if ( v26 ) /*0x699cda*/
          {
            v27 = MixFileClass::FromFile(v26, cFileName, (int)dword_886980); /*0x699ced*/
            if ( v27 ) /*0x699cf1*/
            {
              if ( dword_884DD0 < dword_884DC8 /*0x699d2d*/
                || (byte_884DCD || !dword_884DC8)
                && dword_884DD4 > 0
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MixFileClass_Array_Alt + 8))(
                     &MixFileClass_Array_Alt,
                     dword_884DC8 + dword_884DD4,
                     0) )
              {
                v28 = dword_884DD0++; /*0x699d3a*/
                *((_DWORD *)dword_884DC4 + v28) = v27; /*0x699d49*/
              }
              v29 = strlen(cFileName) + 1; /*0x699d53*/
              v30 = v29 - 1; /*0x699d5f*/
              strncpy(Destination, cFileName, v29 - 4); /*0x699d67*/
              *((_BYTE *)&v71[62] + v30 + 1) = 0; /*0x699d8f*/
              strcat(Destination, (const char *)&off_83F4F0); /*0x699d9f*/
              Destination[v30] = 0; /*0x699da8*/
              FileClass::SetFileName(&v63, Destination); /*0x699dbb*/
              if ( (unsigned __int8)CCFileClass::Open(&v63, 0) ) /*0x699dc7*/
              {
                FileStraw::Open((FileStraw *)&v60, (int)&v63, 0); /*0x699dde*/
                v31 = INIClass::GetKeyCount(v60.__pad_0, g_INI_Key_MultiMaps); /*0x699dec*/
                v32 = 0; /*0x699df1*/
                v62 = v31; /*0x699df5*/
                for ( j = 0; j < v62; ++j ) /*0x699dfd*/
                {
                  v33 = (unsigned __int8 *)INIClass::GetStringByIndex(v60.__pad_0, g_INI_Key_MultiMaps, v32); /*0x699e1c*/
                  if ( INIClass::GetString(&v60, g_INI_Key_MultiMaps, v33, &g_INI_DefaultBuffer, v66, 64) ) /*0x699e2b*/
                  {
                    v34 = (MapFile *)__2_YAPAXI_Z(0x1BCu); /*0x699e3d*/
                    if ( v34 ) /*0x699e47*/
                    {
                      v35 = MapFile::LoadDescription(v34, (unsigned __int8 ***)&v60, v66); /*0x699e5c*/
                      v36 = v35; /*0x699e61*/
                      if ( v35 ) /*0x699e65*/
                      {
                        v37 = *((_DWORD *)v35 + 97); /*0x699e6b*/
                        v38 = *((_DWORD *)v35 + 96); /*0x699e71*/
                        if ( v38 == v37 ) /*0x699e7b*/
                          swprintf(Buffer, (const size_t)&off_83F4CC, (const wchar_t *const)0x28, v38, 41); /*0x699ea8*/
                        else
                          swprintf(Buffer, (const size_t)&off_83F4DC, (const wchar_t *const)0x28, v38, v37, 41); /*0x699e8e*/
                        v39 = wcslen(v36); /*0x699ebf*/
                        wcscpy(Source, v36); /*0x699ec1*/
                        wcsncat(Source, asc_82083C, 44 - v39); /*0x699edb*/
                        wcsncat(Source, Buffer, 44 - (v39 + 1)); /*0x699ef9*/
                        if ( Source ) /*0x699f0a*/
                        {
                          wcsncpy(v36, Source, 0x2Cu); /*0x699f17*/
                          v36[43] = 0; /*0x699f1f*/
                        }
                        else
                        {
                          StringCSF = GetStringCSF(g_Str_MSG_NoDescription, 0, g_Str_File_Session_CPP, 2845); /*0x699f36*/
                          wcscpy(v36, StringCSF); /*0x699f3d*/
                        }
                        v41 = v4[2]; /*0x699f45*/
                        if ( v4[4] < v41 /*0x699f6a*/
                          || (*((_BYTE *)v4 + 13) || !v41)
                          && (v42 = v4[5], v42 > 0)
                          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v4 + 8))(v4, v41 + v42, 0) )
                        {
                          v43 = v4[4]; /*0x699f71*/
                          v44 = v4[1]; /*0x699f74*/
                          v4[4] = v43 + 1; /*0x699f7a*/
                          *(_DWORD *)(v44 + 4 * v43) = v36; /*0x699f7d*/
                        }
                      }
                    }
                  }
                  v32 = j + 1; /*0x699f88*/
                }
                INIClass::ClearSection((int *)v60.__pad_0, 0, 0); /*0x699f9b*/
              }
              else
              {
                Debug::Log(); /*0x699fa7*/
              }
              v24 = hFindFilea; /*0x699faf*/
            }
          }
        }
      }
    }
    while ( FindNextFileA(v24, &FindFileData) ); /*0x699fbc*/
  }
  SetSoundWarning(v61); /*0x699fd0*/
  if ( v24 != (HANDLE)-1 ) /*0x699fd8*/
    FindClose(v24); /*0x699fdb*/
  INIClass::ClearSection((int *)v60.__pad_0, 0, 0); /*0x699fe7*/
  CCFileClass::Reset(&v63); /*0x699ff0*/
  hFindFileb = FindFirstFileA(aYrm_0, &FindFileData); /*0x69a010*/
  v56[0] = 0; /*0x69a014*/
  if ( hFindFileb != (HANDLE)-1 ) /*0x69a019*/
  {
    do /*0x69a190*/
    {
      if ( (FindFileData.dwFileAttributes & 0x116) == 0 ) /*0x69a02f*/
      {
        v45 = FindFileData.cAlternateFileName; /*0x69a041*/
        if ( !strlen(FindFileData.cAlternateFileName) ) /*0x69a048*/
          v45 = FindFileData.cFileName; /*0x69a04f*/
        INIClass::GetString( /*0x69a073*/
          &v60,
          (unsigned __int8 *)&stru_82BA00.?,
          (unsigned __int8 *)g_INI_Key_Name,
          g_Str_No_Name,
          v66,
          64);
        INIClass::GetString(&v60, (unsigned __int8 *)g_INI_Key_Digest, a1, g_Str_No_Digest, v67, 32); /*0x69a095*/
        BulkCharToWide(v71, (unsigned __int8 *)v66, -1); /*0x69a0aa*/
        v56[0] = INIClass::ReadBool_Overwrite( /*0x69a0c8*/
                   (int *)v60.__pad_0,
                   (unsigned __int8 *)&stru_82BA00.?,
                   (unsigned __int8 *)g_INI_Key_Official,
                   0);
        v59 = 2; /*0x69a0f0*/
        v58 = 4; /*0x69a0f8*/
        ParseMapFileHeader(v45, v71, v67, v73, v56, &v59, &v58); /*0x69a0fc*/
        v46 = (SessionClass *)__2_YAPAXI_Z(0x1BCu); /*0x69a106*/
        if ( v46 ) /*0x69a110*/
          v47 = SessionClass::ParseGameInfo(v46, v45, v71, v67, v56[0], v73, v59, v58); /*0x69a141*/
        else
          v47 = 0; /*0x69a145*/
        v48 = v4[2]; /*0x69a147*/
        if ( v4[4] < v48 /*0x69a16d*/
          || (*((_BYTE *)v4 + 13) || !v48)
          && (v49 = v4[5], v49 > 0)
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v4 + 8))(v4, v48 + v49, 0) )
        {
          v50 = v4[4]; /*0x69a174*/
          v51 = v4[1]; /*0x69a177*/
          v4[4] = v50 + 1; /*0x69a17d*/
          *(_DWORD *)(v51 + 4 * v50) = v47; /*0x69a180*/
        }
      }
    }
    while ( FindNextFileA(hFindFileb, &FindFileData) ); /*0x69a190*/
    FindClose(hFindFileb); /*0x69a1a3*/
  }
  *(_DWORD *)v63.CDFileClass = &CCFileClass::`vftable'; /*0x69a1b2*/
  v65 = 0; /*0x69a1ba*/
  Vector::Clear((int)v64); /*0x69a1c1*/
  *(_DWORD *)v63.CDFileClass = &off_7E1668; /*0x69a1ca*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v63); /*0x69a1d2*/
  return HashTable::DestroyHashTableINIClass(&v60); /*0x69a1e0*/
}



// ==== 0x0069A1F0  WinMain::Constructor_VectorClass_Wstring_  this=WinMain  sig=csp ====
int __thiscall WinMain::Constructor_VectorClass_Wstring_(WinMain *this)
{
  int i; // ebp
  int v3; // esi
  void *v4; // eax
  int j; // esi
  int k; // esi

  for ( i = 0; i < this->q1A8; ++i ) /*0x69a200*/
  {
    v3 = *(_DWORD *)(this->q1A5 + 4 * i); /*0x69a208*/
    if ( v3 ) /*0x69a20d*/
    {
      *(_DWORD *)(v3 + 420) = &VectorClass<Wstring>::`vftable'; /*0x69a215*/
      VectorClass_Wstring::ddtor((_VectorClass_VWstring *)(v3 + 420)); /*0x69a21b*/
      v4 = *(void **)(v3 + 396); /*0x69a220*/
      *(_DWORD *)(v3 + 392) = &VectorClass<enum DiskID>::`vftable'; /*0x69a226*/
      if ( v4 && *(_BYTE *)(v3 + 405) ) /*0x69a234*/
      {
        __3_YAXPAX_Z(v4); /*0x69a23d*/
        *(_DWORD *)(v3 + 396) = 0; /*0x69a245*/
      }
      *(_BYTE *)(v3 + 405) = 0; /*0x69a24c*/
      *(_DWORD *)(v3 + 400) = 0; /*0x69a252*/
      __3_YAXPAX_Z((void *)v3); /*0x69a258*/
    }
  }
  (*(void (__thiscall **)(WinMain *))(this->q1A4 + 12))(this + 1680); /*0x69a277*/
  for ( j = 0; j < this->qA49; ++j ) /*0x69a284*/
    __3_YAXPAX_Z(*(void **)(this->qA46 + 4 * j)); /*0x69a290*/
  (*(void (__thiscall **)(WinMain *))(this->qA45 + 12))(this + 10516); /*0x69a2af*/
  for ( k = 0; k < this->qA43; ++k ) /*0x69a2bc*/
  {
    if ( *(_DWORD *)(this->qA40 + 4 * k) ) /*0x69a2c4*/
      __3_YAXPAX_Z(*(void **)(this->qA40 + 4 * k)); /*0x69a2cc*/
  }
  return (*(int (__thiscall **)(WinMain *))(this->qA3F + 12))(this + 10492); /*0x69a2ee*/
}



// ==== 0x0069A300  ObjectClass::nullsub_35  this=ObjectClass  sig=csp ====
void nullsub_35(ObjectClass *this)
{
  ; /*0x69a300*/
}



// ==== 0x0069A310  SessionClass::GetPlayerColorScheme  this=SessionClass  sig=csp ====
int __stdcall SessionClass::GetPlayerColorScheme(unsigned int a1)
{
  int result; // eax

  result = a1; /*0x69a310*/
  if ( a1 == -2 ) /*0x69a317*/
    return unk_83ED1C; /*0x69a31e*/
  if ( a1 < 9 ) /*0x69a32b*/
    return byte_83ED14[a1]; /*0x69a32d*/
  return result; /*0x69a325*/
}



// ==== 0x0069A340  sub_69A340  this=-  sig=ida-proto ====
DWORD sub_69A340()
{
  DWORD v0; // eax
  char *v1; // eax
  const char *v2; // ebx
  unsigned int v3; // esi
  DWORD Time; // [esp+Ch] [ebp-4h] BYREF

  Time = timeGetTime(); /*0x69a34a*/
  v0 = DiskSpace::CheckAvailable(); /*0x69a34e*/
  ComputeHash(&Time, v0); /*0x69a359*/
  v1 = Object_Init_7CBC11(aPath); /*0x69a363*/
  v2 = v1; /*0x69a368*/
  if ( v1 ) /*0x69a36f*/
  {
    v3 = 0; /*0x69a378*/
    if ( strlen(v1) ) /*0x69a37a*/
    {
      do /*0x69a39d*/
        ComputeHash(&Time, v2[v3++]); /*0x69a389*/
      while ( v3 < strlen(v2) ); /*0x69a39d*/
    }
  }
  return Time; /*0x69a3a3*/
}



// ==== 0x0069A3B0  MapFile::LoadDescription  this=MapFile  sig=csp ====
wchar_t *__thiscall MapFile::LoadDescription(MapFile *this, unsigned __int8 ***a2, char *a3)
{
  MapFile *v4; // ebp
  int v5; // edx
  unsigned __int8 *v6; // esi
  unsigned __int8 ***v7; // edi
  bool v8; // al
  int Int_Overwrite; // eax
  int v10; // ecx
  char *v11; // eax
  void *v12; // eax
  int MapFile_field_0x10; // ecx
  int MapFile_field_0x08; // eax
  int MapFile_field_0x14; // ecx
  int v16; // eax
  int MapFile_field_0x04; // edx
  int i; // esi
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v23; // [esp+0h] [ebp-214h] BYREF
  ObjectClass v24; // [esp+10h] [ebp-204h] BYREF
  INIClass v25; // [esp+BCh] [ebp-158h] BYREF
  char v26; // [esp+FCh] [ebp-118h]
  char Source[128]; // [esp+114h] [ebp-100h] BYREF
  char String[128]; // [esp+194h] [ebp-80h] BYREF

  v4 = this + 14; /*0x69a3bc*/
  MapFile::Constructor(this + 14, 0, 0); /*0x69a3c8*/
  v4->MapFile_field_0x14 = 10; /*0x69a3de*/
  v4->MapFile_field_0x10 = 0; /*0x69a3e1*/
  *(_DWORD *)v4->__pad_0 = &TypeList<enum DiskID>::`vftable'; /*0x69a3e8*/
  VectorClass::WstringConstructor((VectorClass *)(this + 15), 0, 0); /*0x69a3ef*/
  *((_DWORD *)this + 110) = 10; /*0x69a3f4*/
  *((_DWORD *)this + 105) = &DynamicVectorClass<Wstring>::`vftable'; /*0x69a3f7*/
  *((_DWORD *)this + 109) = 0; /*0x69a3fd*/
  *(_WORD *)this->__pad_0 = 0; /*0x69a40e*/
  *((_BYTE *)this + 347) = 0; /*0x69a413*/
  strcpy((char *)this + 348, g_Str_No_Digest); /*0x69a42f*/
  v5 = *(_DWORD *)v4->__pad_0; /*0x69a438*/
  *((_BYTE *)this + 380) = 1; /*0x69a43d*/
  this->q018 = 2; /*0x69a444*/
  *((_DWORD *)this + 97) = 4; /*0x69a44e*/
  (*(void (__thiscall **)(MapFile *))(v5 + 12))(v4); /*0x69a458*/
  if ( a3 ) /*0x69a464*/
  {
    strcpy((char *)this + 88, a3); /*0x69a481*/
    strcat((char *)this + 88, g_Str_File__MAP); /*0x69a4af*/
    if ( g_INI_Key_DescriptionText ) /*0x69a4bf*/
    {
      v7 = a2; /*0x69a4e5*/
      v6 = (unsigned __int8 *)a3; /*0x69a4f9*/
      v8 = HashTableSection::FindSection((int *)a2, (unsigned __int8 *)a3, g_INI_Key_DescriptionText) != 0; /*0x69a502*/
    }
    else
    {
      v6 = (unsigned __int8 *)a3; /*0x69a4c1*/
      v7 = a2; /*0x69a4c8*/
      v8 = INIClass::BinarySearchSection((int)a2, (unsigned __int8 *)a3) != 0; /*0x69a4d9*/
    }
    if ( v8 ) /*0x69a509*/
    {
      INIClass::GetString((INIClass *)v7, v6, g_INI_Key_DescriptionText, &g_INI_DefaultBuffer, (char *)&v24.?, 44); /*0x69a51d*/
      BulkCharToWide(this, (unsigned __int8 *)&v24.?, -1); /*0x69a52a*/
    }
    else
    {
      INIClass::GetStringEx((int)v7, v6, (unsigned __int8 *)&stru_81AF8C.?[5], (wchar_t *)this, 0x2Cu); /*0x69a53a*/
    }
    Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)v7, v6, aMinplayers, this->q018); /*0x69a54e*/
    v10 = *((_DWORD *)this + 97); /*0x69a553*/
    this->q018 = Int_Overwrite; /*0x69a559*/
    *((_DWORD *)this + 97) = INIClass::ReadInt_Overwrite((bool *)v7, v6, aMaxplayers, v10); /*0x69a587*/
    if ( INIClass::GetString( /*0x69a58d*/
           (INIClass *)v7,
           v6,
           (unsigned __int8 *)&stru_81AF8C.?[1],
           &g_INI_DefaultBuffer,
           String,
           128) )
    {
      v11 = strtok(String, Str); /*0x69a5a3*/
      while ( v11 ) /*0x69a5ad*/
      {
        if ( !*v11 ) /*0x69a5af*/
          break; /*0x69a5b2*/
        v12 = (void *)atoi(v11); /*0x69a5b5*/
        MapFile_field_0x10 = v4->MapFile_field_0x10; /*0x69a5ba*/
        v24.AbstractClass = v12; /*0x69a5bd*/
        MapFile_field_0x08 = v4->MapFile_field_0x08; /*0x69a5c1*/
        if ( MapFile_field_0x10 >= MapFile_field_0x08 ) /*0x69a5c9*/
        {
          if ( !BYTE1(v4->MapFile_field_0x0C) && MapFile_field_0x08 ) /*0x69a5d4*/
            continue; /*0x69a5d4*/
          MapFile_field_0x14 = v4->MapFile_field_0x14; /*0x69a5d6*/
          if ( MapFile_field_0x14 <= 0 /*0x69a5e7*/
            || !(*(unsigned __int8 (__thiscall **)(MapFile *, int, _DWORD))(*(_DWORD *)v4->__pad_0 + 8))(
                  v4,
                  MapFile_field_0x08 + MapFile_field_0x14,
                  0) )
          {
            continue; /*0x69a5e7*/
          }
        }
        v16 = v4->MapFile_field_0x10; /*0x69a5ee*/
        MapFile_field_0x04 = v4->MapFile_field_0x04; /*0x69a5f1*/
        v4->MapFile_field_0x10 = v16 + 1; /*0x69a5f7*/
        *(_DWORD *)(MapFile_field_0x04 + 4 * v16) = v24.AbstractClass; /*0x69a5fe*/
        v11 = strtok(0, Str); /*0x69a608*/
      }
    }
    unknown_libname_73(&v24.?); /*0x69a618*/
    String::Assign((String *)&v24, &g_INI_DefaultBuffer); /*0x69a626*/
    String::Assign((String *)&v24.?, g_INI_Key_GameMode); /*0x69a634*/
    String::Assign((String *)&v24.?, (const char *)v6); /*0x69a63e*/
    HIBYTE(v24.?) = INIClass::ReadString((INIClass *)v7, (char **)&v24.?, (char **)&v24.?, (char **)&v24, (int)&v24.?) > 0; /*0x69a664*/
    DeleteAndZero((ObjectClass *)&v24.?); /*0x69a669*/
    DeleteAndZero((ObjectClass *)&v24.?); /*0x69a672*/
    DeleteAndZero(&v24); /*0x69a67b*/
    if ( HIBYTE(v24.?) ) /*0x69a686*/
    {
      unknown_libname_73(&v24.?); /*0x69a690*/
      for ( i = String::Tokenize((String *)&v24.?, 0, Str, &v24.?); /*0x69a6b0*/
            i != -1;
            i = String::Tokenize((String *)&v24.?, i, Str, &v24.?) )
      {
        String::Assign((String *)&v24, asc_830A14); /*0x69a6bf*/
        String::TrimLeft((String *)&v24.?, (const char **)&v24); /*0x69a6cd*/
        DeleteAndZero(&v24); /*0x69a6d6*/
        String::Assign((String *)&v24.?, asc_830A14); /*0x69a6e4*/
        String::TrimRight((String *)&v24.?, (const char **)&v24.?); /*0x69a6f2*/
        DeleteAndZero((ObjectClass *)&v24.?); /*0x69a6fb*/
        v19 = *((_DWORD *)this + 107); /*0x69a700*/
        if ( *((_DWORD *)this + 109) >= v19 ) /*0x69a714*/
        {
          if ( !*((_BYTE *)this + 433) && v19 ) /*0x69a71f*/
            continue; /*0x69a71f*/
          v20 = *((_DWORD *)this + 110); /*0x69a721*/
          if ( v20 <= 0 /*0x69a730*/
            || !(*(unsigned __int8 (__thiscall **)(MapFile *, int, _DWORD))(*((_DWORD *)this + 105) + 8))(
                  this + 15,
                  v19 + v20,
                  0) )
          {
            continue; /*0x69a730*/
          }
        }
        v21 = *((_DWORD *)this + 109); /*0x69a737*/
        *((_DWORD *)this + 109) = v21 + 1; /*0x69a742*/
        String::Reassign((String *)(*((_DWORD *)this + 106) + 4 * v21), (const char **)&v24.?); /*0x69a74b*/
      }
      DeleteAndZero((ObjectClass *)&v24.?); /*0x69a773*/
    }
    CCFileClass::Construct((CCFileClass *)&v24.ambientSoundController[1], (char *)this + 88); /*0x69a784*/
    if ( (unsigned __int8)CCFileClass::Open((CCFileClass *)&v24.ambientSoundController[1], 0) ) /*0x69a78e*/
    {
      if ( FileClass::Load((CCFileClass *)&v24.ambientSoundController[1], (const CHAR *)1) ) /*0x69a7b0*/
      {
        BufferIOFileClass::Seek((CCFileClass *)&v24.ambientSoundController[1], -100, 2u); /*0x69a7c5*/
        memset(Source, 0, sizeof(Source)); /*0x69a7da*/
        CCFileClass::Read((CCFileClass *)&v24.ambientSoundController[1], Source, 100); /*0x69a7e8*/
        CCFileClass::Reset((CCFileClass *)&v24.ambientSoundController[1]); /*0x69a7f1*/
        if ( strstr(Source, aDigest_0) ) /*0x69a803*/
        {
          v25.headNode[0] = 0; /*0x69a81a*/
          v25.headNode[1] = 0; /*0x69a821*/
          GenericList::Constructor((GenericList *)&v25.headNode[2]); /*0x69a828*/
          v25.headNode[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x69a834*/
          Node::Init((Node *)&v25.__pad_20[8]); /*0x69a83f*/
          v25.INIClass_field_3C = 0; /*0x69a852*/
          v26 = 0; /*0x69a859*/
          *(_DWORD *)v25.__pad_0 = &CCINIClass_Vtable; /*0x69a861*/
          v24.? = 0; /*0x69a86c*/
          v24.? = 0; /*0x69a870*/
          v24.? = (int)&Straw::`vftable'; /*0x69a874*/
          Buffer::Init((Buffer *)&v24.?, (int)Source, 100); /*0x69a87c*/
          v24.fallRate = 0; /*0x69a88f*/
          v24.? = (int)&BufferStraw::`vftable'; /*0x69a893*/
          CCINIClass::LoadAndVerifyDigest((int *)v25.__pad_0, (int)&v24.?, 0, 0); /*0x69a89b*/
          INIClass::GetString(&v25, (unsigned __int8 *)g_INI_Key_Digest, a1, 0, Source, 128); /*0x69a8bf*/
          if ( &v23 == (int *)-276 ) /*0x69a8cd*/
          {
            strcpy((char *)this + 348, g_Str_No_Digest); /*0x69a90e*/
          }
          else
          {
            strncpy((char *)this + 348, Source, 0x20u); /*0x69a8e0*/
            *((_BYTE *)this + 379) = 0; /*0x69a8e8*/
          }
          Vector::Clear((int)&v24.?); /*0x69a91d*/
          Straw::Dtor((Straw *)&v24.?); /*0x69a926*/
          HashTable::DestroyHashTableINIClass(&v25); /*0x69a932*/
        }
      }
    }
    else
    {
      Debug::Log(); /*0x69a79d*/
    }
    v24.ambientSoundController[1] = (int)&CCFileClass::`vftable'; /*0x69a93e*/
    v24.location[2] = 0; /*0x69a946*/
    Vector::Clear((int)&v24.isInLogic); /*0x69a94d*/
    v24.ambientSoundController[1] = (int)&off_7E1668; /*0x69a956*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v24.ambientSoundController[1]); /*0x69a95e*/
    DeleteAndZero((ObjectClass *)&v24.?); /*0x69a967*/
  }
  return (wchar_t *)this; /*0x69a96c*/
}



// ==== 0x0069A980  SessionClass::ParseGameInfo  this=SessionClass  sig=csp ====
wchar_t *__thiscall SessionClass::ParseGameInfo(
        SessionClass *this,
        char *Source,
        wchar_t *a3,
        char *a4,
        char a5,
        const char *a6,
        int a7,
        int a8)
{
  SessionClass *v8; // esi
  int *p_Side2; // ebx
  int *v10; // ebp
  char *v11; // eax
  wchar_t *StringCSF; // eax
  char v13; // cl
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int i; // edi
  int v21; // ecx
  int v22; // eax
  int v23; // eax

  v8 = this; /*0x69a984*/
  p_Side2 = &this->Side2; /*0x69a989*/
  MapFile::Constructor((MapFile *)&this->Side2, 0, 0); /*0x69a997*/
  v10 = &v8->SkirmishPreferences[6]; /*0x69a99c*/
  p_Side2[5] = 10; /*0x69a9ad*/
  p_Side2[4] = 0; /*0x69a9b0*/
  *p_Side2 = (int)&TypeList<enum DiskID>::`vftable'; /*0x69a9b7*/
  VectorClass::WstringConstructor((VectorClass *)&v8->SkirmishPreferences[6], 0, 0); /*0x69a9bd*/
  v11 = Source; /*0x69a9c2*/
  v8->SkirmishPreferences[6] = (int)&DynamicVectorClass<Wstring>::`vftable'; /*0x69a9c6*/
  v8->SkirmishPreferences[11] = 10; /*0x69a9cf*/
  v8->SkirmishPreferences[10] = 0; /*0x69a9d2*/
  if ( v11 ) /*0x69a9d9*/
  {
    strncpy(&v8->__pad_50[8], v11, 0x104u); /*0x69a9e5*/
    v8->__pad_50[267] = 0; /*0x69a9ed*/
  }
  else
  {
    strcpy(&v8->__pad_50[8], aNoFileName); /*0x69aa12*/
    v8 = this; /*0x69aa1b*/
  }
  if ( a3 ) /*0x69aa25*/
  {
    wcsncpy((wchar_t *)v8, a3, 0x2Cu); /*0x69aa2b*/
    *(_WORD *)&v8->__pad_50[6] = 0; /*0x69aa33*/
  }
  else
  {
    StringCSF = GetStringCSF(g_Str_MSG_NoDescription, 0, g_Str_File_Session_CPP, 2845); /*0x69aa4c*/
    wcscpy((wchar_t *)v8, StringCSF); /*0x69aa53*/
  }
  if ( a4 ) /*0x69aa61*/
  {
    strncpy(&v8->__pad_50[268], a4, 0x20u); /*0x69aa6d*/
    HIBYTE(v8->idxSide2) = 0; /*0x69aa75*/
  }
  else
  {
    strcpy(&v8->__pad_50[268], g_Str_No_Digest); /*0x69aa9d*/
    v8 = this; /*0x69aaa6*/
  }
  v13 = a5; /*0x69aaae*/
  v14 = a8; /*0x69aab2*/
  v8->Color2 = a7; /*0x69aab6*/
  v15 = *p_Side2; /*0x69aabc*/
  LOBYTE(v8->Color) = v13; /*0x69aabe*/
  v8->Side = v14; /*0x69aac6*/
  (*(void (__thiscall **)(int *))(v15 + 12))(p_Side2); /*0x69aacc*/
  v16 = p_Side2[2]; /*0x69aacf*/
  if ( p_Side2[4] < v16 /*0x69aaf4*/
    || (*((_BYTE *)p_Side2 + 13) || !v16)
    && (v17 = p_Side2[5], v17 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*p_Side2 + 8))(p_Side2, v16 + v17, 0) )
  {
    v18 = p_Side2[4]; /*0x69aafb*/
    v19 = p_Side2[1]; /*0x69aafe*/
    p_Side2[4] = v18 + 1; /*0x69ab04*/
    *(_DWORD *)(v19 + 4 * v18) = -2; /*0x69ab07*/
  }
  if ( a6 ) /*0x69ab14*/
  {
    String::Assign((String *)&Source, a6); /*0x69ab1f*/
    if ( String::Length((String *)&Source) ) /*0x69ab28*/
    {
      unknown_libname_73(&a5); /*0x69ab39*/
      for ( i = String::Tokenize((String *)&Source, 0, Str, (void **)&a5); /*0x69ab58*/
            i != -1;
            i = String::Tokenize((String *)&Source, i, Str, (void **)&a5) )
      {
        String::Assign((String *)&a3, asc_830A14); /*0x69ab67*/
        String::TrimLeft((String *)&a5, (const char **)&a3); /*0x69ab75*/
        DeleteAndZero((ObjectClass *)&a3); /*0x69ab7e*/
        String::Assign((String *)&a4, asc_830A14); /*0x69ab8c*/
        String::TrimRight((String *)&a5, (const char **)&a4); /*0x69ab9a*/
        DeleteAndZero((ObjectClass *)&a4); /*0x69aba3*/
        v21 = v10[2]; /*0x69aba8*/
        if ( v10[4] >= v21 ) /*0x69abb0*/
        {
          if ( !*((_BYTE *)v10 + 13) && v21 ) /*0x69abbb*/
            continue; /*0x69abbb*/
          v22 = v10[5]; /*0x69abbd*/
          if ( v22 <= 0 || !(*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v10 + 8))(v10, v21 + v22, 0) ) /*0x69abce*/
            continue; /*0x69abce*/
        }
        v23 = v10[4]; /*0x69abd5*/
        v10[4] = v23 + 1; /*0x69abe0*/
        String::Reassign((String *)(v10[1] + 4 * v23), (const char **)&a5); /*0x69abe9*/
      }
      DeleteAndZero((ObjectClass *)&a5); /*0x69ac11*/
    }
    DeleteAndZero((ObjectClass *)&Source); /*0x69ac1a*/
  }
  return (wchar_t *)v8; /*0x69ac21*/
}



// ==== 0x0069AC30  ScenarioClass::CheckExists  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::CheckExists(ScenarioClass *this, int a2)
{
  _DWORD *v2; // eax
  char v3; // bl
  int result; // eax
  int v5; // edx
  _DWORD *v6; // esi
  int v7; // edx
  _DWORD *v8; // ecx
  RawFileClass v9; // [esp+Ch] [ebp-24h] BYREF

  if ( a2 == -2 ) /*0x69ac3d*/
  {
    v2 = RawFileClass::Construct(&v9, (int)&this->nextScenario[22]); /*0x69ac47*/
    v3 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 20))(v2, 0); /*0x69ac59*/
    result = RawFileClass::Dtor(&v9); /*0x69ac5b*/
    LOBYTE(result) = v3; /*0x69ac61*/
    return result; /*0x69ac68*/
  }
  v5 = this->altNextScenario[37]; /*0x69ac6b*/
  result = 0; /*0x69ac71*/
  if ( v5 <= 0 ) /*0x69ac75*/
  {
LABEL_7:
    v7 = this->altNextScenario[37]; /*0x69ac8a*/
    result = 0; /*0x69ac90*/
    if ( v7 <= 0 ) /*0x69ac94*/
    {
LABEL_11:
      LOBYTE(result) = 0; /*0x69aca8*/
      return result; /*0x69acb0*/
    }
    v8 = (_DWORD *)this->altNextScenario[34]; /*0x69ac96*/
    while ( *v8 != a2 ) /*0x69ac9e*/
    {
      ++result; /*0x69aca0*/
      ++v8; /*0x69aca1*/
      if ( result >= v7 ) /*0x69aca6*/
        goto LABEL_11; /*0x69aca6*/
    }
  }
  else
  {
    v6 = (_DWORD *)this->altNextScenario[34]; /*0x69ac77*/
    while ( *v6 != -1 ) /*0x69ac80*/
    {
      ++result; /*0x69ac82*/
      ++v6; /*0x69ac83*/
      if ( result >= v5 ) /*0x69ac88*/
        goto LABEL_7; /*0x69ac88*/
    }
  }
  LOBYTE(result) = 1; /*0x69acb5*/
  return result; /*0x69ac60*/
}



// ==== 0x0069ACC0  GameOption::GetField  this=ScenarioClass  sig=csp ====
int __thiscall GameOption::GetField(GameOption *this)
{
  return *(_DWORD *)this->field_18C; /*0x69acc8*/
}



// ==== 0x0069ACD0  GameOption::SetDescriptionWStr  this=GameOption  sig=csp ====
wchar_t *__thiscall GameOption::SetDescriptionWStr(GameOption *this, wchar_t *Source)
{
  wchar_t *result; // eax
  wchar_t *StringCSF; // eax

  if ( Source ) /*0x69acd9*/
  {
    result = wcsncpy((wchar_t *)this, Source, 0x2Cu); /*0x69acdf*/
    *(_WORD *)&this->__pad_0[86] = 0; /*0x69ace7*/
  }
  else
  {
    StringCSF = GetStringCSF(g_Str_MSG_NoDescription, 0, g_Str_File_Session_CPP, 2845); /*0x69ad02*/
    return wcscpy((wchar_t *)this, StringCSF); /*0x69ad09*/
  }
  return result; /*0x69aced*/
}



// ==== 0x0069AD80  GameOption::SetDigest  this=GameOption  sig=csp ====
char *__thiscall GameOption::SetDigest(char *this, char *Source)
{
  char *result; // eax

  if ( Source ) /*0x69ad89*/
  {
    result = strncpy(this + 348, Source, 0x20u); /*0x69ad95*/
    this->q17B = 0; /*0x69ad9d*/
  }
  else
  {
    result = (char *)(strlen(g_Str_No_Digest) + 1); /*0x69adb3*/
    qmemcpy(this + 348, g_Str_No_Digest, (unsigned int)result); /*0x69adc8*/
  }
  return result; /*0x69ada4*/
}



// ==== 0x0069ADE0  ObjectClass::method_69ADE0  this=ObjectClass  sig=csp ====
char __thiscall sub_69ADE0(_BYTE *this, char a2)
{
  *(this + 380) = a2; /*0x69ade4*/
  return a2; /*0x69adea*/
}



// ==== 0x0069ADF0  IsRandMap::Sed  this=IsRandMap  sig=csp ====
int __thiscall IsRandMap::Sed(int this)
{
  return _strcmpi((const void *)(this + 88), aRandmapSed) == 0; /*0x69ae06*/
}



// ==== 0x0069AE10  GameClass::initPlayerData  this=GameClass  sig=csp ====
bool __thiscall GameClass::initPlayerData(GameClass *this, const char **a2)
{
  int v3; // eax
  int v5; // esi

  v3 = *(_DWORD *)&this->__pad_3D[375]; /*0x69ae15*/
  if ( !v3 ) /*0x69ae1d*/
    return String::Equals_Alt((String *)a2, aStandard_0); /*0x69ae28*/
  v5 = 0; /*0x69ae33*/
  if ( v3 <= 0 ) /*0x69ae37*/
    return 0; /*0x69ae5d*/
  while ( !(unsigned __int8)String::Compare((String *)a2, (const char **)(*(_DWORD *)&this->__pad_3D[363] + 4 * v5)) ) /*0x69ae50*/
  {
    if ( ++v5 >= *(_DWORD *)&this->__pad_3D[375] ) /*0x69ae5b*/
      return 0; /*0x69ae5b*/
  }
  return 1; /*0x69ae2d*/
}



// ==== 0x0069AE70  IsRandMap::Sed2  this=IsRandMap  sig=csp ====
int __thiscall IsRandMap::Sed2(IsRandMap *this)
{
  return _strcmpi((char *)this + 1704, &stru_82BA00.?) == 0; /*0x69ae89*/
}



// ==== 0x0069AE90  Multiplayer::ShowProgress  this=Multiplayer  sig=csp ====
int __thiscall Multiplayer::ShowProgress(Multiplayer *this, int a2)
{
  int result; // eax
  double v3; // st7
  int v5; // eax
  int i; // esi
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int Ticks; // [esp+8h] [ebp-1DCh]
  int v14; // [esp+14h] [ebp-1D0h]
  double v15; // [esp+14h] [ebp-1D0h]
  int v16[113]; // [esp+1Ch] [ebp-1C8h] BYREF
  __int16 v17; // [esp+1E0h] [ebp-4h]
  char v18; // [esp+1E2h] [ebp-2h]

  LOBYTE(result) = stru_A8EB00.?[391]; /*0x69ae90*/
  if ( !stru_A8EB00.?[391] ) /*0x69aea1*/
  {
    v14 = a2; /*0x69aeb4*/
    if ( BYTE1(dword_A8B230[375].vtable0) ) /*0x69aeb8*/
      v14 = a2 / 2; /*0x69aec7*/
    __asm { fild dword ptr [esp+1E4h+var_1D0] } /*0x69aecb*/
    __asm { fstp [esp+1E8h+var_1D0] }
    result = Progress::GetWeighted((int)&stru_AC4B30.__pad_EC[828], 0); /*0x69aeda*/
    __asm { fmul ds:dbl_7E2AC0 } /*0x69aedf*/
    __asm
    {
      fcomp [esp+1E4h+var_1D0]
      fnstsw ax
    }
    if ( (result & 0x100) != 0 ) /*0x69aef1*/
      result = Network::UpdateLatencyDisplay((int)&stru_AC4B30.__pad_EC[828], 0, v15, NAN); /*0x69af0a*/
    if ( this->qA13 != 1 ) /*0x69af16*/
    {
      Ticks = Timer::GetTicks(); /*0x69af26*/
      switch ( *(_DWORD *)this ) /*0x69af3e*/
      {
        case 1: /*0x69af3e*/
        case 2: /*0x69af3e*/
          memset(v16, 0, 250); /*0x69b099*/
          v16[0] = 108; /*0x69b0a2*/
          Progress::GetWeighted((int)&stru_AC4B30.__pad_EC[828], 0); /*0x69b0aa*/
          __asm { fmul ds:dbl_7E2AC0 } /*0x69b0af*/
          LOWORD(v10) = Math::RoundToInt(v3); /*0x69b0b5*/
          *(int *)((char *)&v16[6] + 1) = v10; /*0x69b0c0*/
          LOBYTE(v16[6]) = dword_A8DB30; /*0x69b0d5*/
          Stream::WriteBlock((int *)&unk_A8EA70, (int)v16, 250, 0); /*0x69b0d9*/
          Stream::ReadPacket((int)&unk_A8EA70); /*0x69b0e3*/
          while ( Count::GetCountQueue((Count *)&unk_A8EA70) > 5 ) /*0x69b0f5*/
          {
            v11 = 240; /*0x69b101*/
            if ( Ticks != -1 ) /*0x69b107*/
            {
              v12 = Timer::GetTicks() - Ticks; /*0x69b112*/
              if ( v12 >= 240 ) /*0x69b118*/
                return Event::Dispatch(); /*0x69b118*/
              v11 = 240 - v12; /*0x69b11a*/
            }
            if ( v11 <= 0 ) /*0x69b11e*/
              break; /*0x69b11e*/
            Sleep(0x14u); /*0x69b122*/
            EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x69b12a*/
            Stream::ReadPacket((int)&unk_A8EA70); /*0x69b134*/
          }
          break; /*0x69b146*/
        case 3: /*0x69af3e*/
        case 4: /*0x69af3e*/
          memset(v16, 0, sizeof(v16)); /*0x69af52*/
          v17 = 0; /*0x69af54*/
          v18 = 0; /*0x69af56*/
          v16[0] = 15; /*0x69af5c*/
          Progress::GetWeighted((int)&stru_AC4B30.__pad_EC[828], 0); /*0x69af64*/
          __asm { fmul ds:dbl_7E2AC0 } /*0x69af69*/
          LOWORD(v5) = Math::RoundToInt(v3); /*0x69af6f*/
          *(int *)((char *)&v16[11] + 3) = v5; /*0x69af7a*/
          strcpy((char *)&v16[1], ToWideStringChar((char *)*dword_A8DA78)); /*0x69af9e*/
          __asm /*0x69afa7*/
          {
            fild [esp+1E8h+var_199]
            fcomp ds:dbl_7F12F0
            fnstsw ax
          }
          if ( (_AX & 0x100) != 0 ) /*0x69afb6*/
          {
            Network::SendMessage(&unk_A8E9C0.Socket, (int)v16, 51, 0, 0, 0, 0); /*0x69afcc*/
          }
          else
          {
            for ( i = 1; i < dword_A8DA84; ++i ) /*0x69afdf*/
            {
              Debug::Log(); /*0x69afe6*/
              Network::SendToPlayer((int)&unk_A8E9C0, (int)v16, 51, 1, (wchar_t *)dword_A8DA78[i]); /*0x69b006*/
            }
          }
          Event::Dispatch(); /*0x69b015*/
          while ( Network::GetQueueCount(&unk_A8E9C0) > 5 ) /*0x69b027*/
          {
            v8 = 240; /*0x69b037*/
            if ( Ticks != -1 ) /*0x69b03d*/
            {
              v9 = Timer::GetTicks() - Ticks; /*0x69b048*/
              if ( v9 >= 240 ) /*0x69b04e*/
                return Event::Dispatch(); /*0x69b04e*/
              v8 = 240 - v9; /*0x69b054*/
            }
            if ( v8 <= 0 ) /*0x69b058*/
              break; /*0x69b058*/
            Sleep(0x14u); /*0x69b060*/
            MessageLoop(); /*0x69b062*/
            Event::Dispatch(); /*0x69b067*/
          }
          break; /*0x69b079*/
        default:
          return Event::Dispatch();
      }
      return Event::Dispatch(); /*0x69b148*/
    }
  }
  return result; /*0x69b081*/
}



// ==== 0x0069B170  ObjectClass::ParseAndApplyAlliances  this=ObjectClass  sig=csp ====
void __thiscall ParseAndApplyAlliances(ObjectClass *this)
{
  bool v1; // zf
  void *vtable0; // edx
  const char *v3; // edi
  char *v4; // ebx
  char *i; // ebp
  int j; // edi
  int v7; // esi
  int v8; // eax
  char *k; // ebp
  int m; // edi
  int v11; // esi
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // ebp
  _DWORD *Items; // ecx
  int v17; // esi
  int v18; // edi
  int v19; // eax
  int v20; // edx
  int v21; // eax
  int v22; // ebp
  _DWORD *v23; // ecx
  int v24; // esi
  int v25; // edi
  int v26; // eax
  void *v27; // edx
  char *v28; // [esp+10h] [ebp-38h]
  VectorClass v30; // [esp+18h] [ebp-30h] BYREF
  int v31; // [esp+28h] [ebp-20h]
  int v32; // [esp+2Ch] [ebp-1Ch]
  VectorClass v33; // [esp+30h] [ebp-18h] BYREF
  int v34; // [esp+40h] [ebp-8h]
  int v35; // [esp+44h] [ebp-4h]

  v1 = this->AbstractClass == (void *)4; /*0x69b176*/
  *((_BYTE *)this + 1672) = 0; /*0x69b17d*/
  if ( v1 ) /*0x69b184*/
  {
    vtable0 = dword_A8B230->vtable0; /*0x69b199*/
    BYTE1(vtable0) = ((unsigned __int16)dword_A8B230->vtable0 >> 8) & 0xFB; /*0x69b19b*/
    dword_A8B230->vtable0 = vtable0; /*0x69b19e*/
    Debug::Log(); /*0x69b1a0*/
    Debug::Log(); /*0x69b1af*/
    if ( strlen(&byte_B77A04) ) /*0x69b1b9*/
    {
      if ( strlen(byte_B76568) ) /*0x69b1d1*/
      {
        ParseAndApplyAlliances_Parse(&v33, 0, 0); /*0x69b1ea*/
        v33.vtable0 = &DynamicVectorClass<HouseClass *>::`vftable'; /*0x69b1ff*/
        v35 = 10; /*0x69b203*/
        v34 = 0; /*0x69b207*/
        ParseAndApplyAlliances_Parse(&v30, 0, 0); /*0x69b20b*/
        v30.vtable0 = &DynamicVectorClass<HouseClass *>::`vftable'; /*0x69b210*/
        v32 = 10; /*0x69b232*/
        v31 = 0; /*0x69b238*/
        v3 = &byte_B77A04; /*0x69b23c*/
        if ( strlen(&byte_B77A04) <= strlen(byte_B76568) ) /*0x69b241*/
          v3 = byte_B76568; /*0x69b243*/
        v4 = (char *)__2_YAPAXI_Z(strlen(v3) + 32); /*0x69b25b*/
        strcpy(v4, &byte_B77A04); /*0x69b27c*/
        v28 = v4; /*0x69b280*/
        for ( i = strtok(v4, Str); i; i = strtok(0, Str) ) /*0x69b295*/
        {
          if ( !*i ) /*0x69b29b*/
            break; /*0x69b29f*/
          for ( j = 0; j < stru_A80220.?; ++j ) /*0x69b2ae*/
          {
            v7 = *((_DWORD *)stru_A80220.? + j); /*0x69b2b6*/
            if ( *(_BYTE *)(v7 + 492) /*0x69b304*/
              && !_strcmpi((char *)(v7 + 90100), i)
              && (v34 < v33.Capacity
               || (v33.IsAllocated || !v33.Capacity)
               && v35 > 0
               && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v33.vtable0 + 2))(
                    &v33,
                    v35 + v33.Capacity,
                    0)) )
            {
              v8 = v34++; /*0x69b30f*/
              *((_DWORD *)v33.Items + v8) = v7; /*0x69b31a*/
            }
          }
        }
        strcpy(v4, byte_B76568); /*0x69b35f*/
        for ( k = strtok(v4, Str); k; k = strtok(0, Str) ) /*0x69b374*/
        {
          if ( !*k ) /*0x69b37a*/
            break; /*0x69b37e*/
          for ( m = 0; m < stru_A80220.?; ++m ) /*0x69b38d*/
          {
            v11 = *((_DWORD *)stru_A80220.? + m); /*0x69b394*/
            if ( *(_BYTE *)(v11 + 492) /*0x69b3e2*/
              && !_strcmpi((char *)(v11 + 90100), k)
              && (v31 < v30.Capacity
               || (v30.IsAllocated || !v30.Capacity)
               && v32 > 0
               && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v30.vtable0 + 2))(
                    &v30,
                    v32 + v30.Capacity,
                    0)) )
            {
              v12 = v31++; /*0x69b3ed*/
              *((_DWORD *)v30.Items + v12) = v11; /*0x69b3f8*/
            }
          }
        }
        v13 = v34; /*0x69b41e*/
        v14 = v34; /*0x69b422*/
        if ( v34 > 1 ) /*0x69b427*/
        {
          v15 = 0; /*0x69b429*/
          Items = v33.Items; /*0x69b42f*/
          v17 = 0; /*0x69b433*/
          do /*0x69b46d*/
          {
            v18 = 0; /*0x69b435*/
            if ( v14 > 0 ) /*0x69b439*/
            {
              do /*0x69b45f*/
              {
                v19 = Items[v18]; /*0x69b43e*/
                if ( *(_DWORD *)(Items[v17] + 48) != *(_DWORD *)(v19 + 48) ) /*0x69b447*/
                {
                  HouseClass::HandleAlliance((int *)Items[v17], v19, 0); /*0x69b44f*/
                  v13 = v34; /*0x69b454*/
                  Items = v33.Items; /*0x69b458*/
                }
                ++v18; /*0x69b45c*/
              }
              while ( v18 < v13 ); /*0x69b45f*/
              v4 = v28; /*0x69b461*/
            }
            ++v15; /*0x69b465*/
            v14 = v13; /*0x69b466*/
            ++v17; /*0x69b468*/
          }
          while ( v15 < v13 ); /*0x69b46d*/
        }
        v20 = v31; /*0x69b46f*/
        v21 = v31; /*0x69b473*/
        if ( v31 > 1 ) /*0x69b478*/
        {
          v22 = 0; /*0x69b47a*/
          v23 = v30.Items; /*0x69b480*/
          v24 = 0; /*0x69b484*/
          do /*0x69b4be*/
          {
            v25 = 0; /*0x69b486*/
            if ( v21 > 0 ) /*0x69b48a*/
            {
              do /*0x69b4b0*/
              {
                v26 = v23[v25]; /*0x69b48f*/
                if ( *(_DWORD *)(v23[v24] + 48) != *(_DWORD *)(v26 + 48) ) /*0x69b498*/
                {
                  HouseClass::HandleAlliance((int *)v23[v24], v26, 0); /*0x69b4a0*/
                  v20 = v31; /*0x69b4a5*/
                  v23 = v30.Items; /*0x69b4a9*/
                }
                ++v25; /*0x69b4ad*/
              }
              while ( v25 < v20 ); /*0x69b4b0*/
              v4 = v28; /*0x69b4b2*/
            }
            ++v22; /*0x69b4b6*/
            v21 = v20; /*0x69b4b7*/
            ++v24; /*0x69b4b9*/
          }
          while ( v22 < v20 ); /*0x69b4be*/
        }
        __3_YAXPAX_Z(v4); /*0x69b4c1*/
        *((_BYTE *)this + 1672) = 1; /*0x69b4d4*/
        v27 = dword_A8B230->vtable0; /*0x69b4e0*/
        BYTE1(v27) = ((unsigned __int16)dword_A8B230->vtable0 >> 8) | 4; /*0x69b4e2*/
        dword_A8B230->vtable0 = v27; /*0x69b4e5*/
        v30.vtable0 = &VectorClass<HouseClass *>::`vftable'; /*0x69b4ed*/
        if ( v30.Items && v30.IsAllocated ) /*0x69b4f9*/
        {
          __3_YAXPAX_Z(v30.Items); /*0x69b4fc*/
          v30.Items = 0; /*0x69b504*/
        }
        v33.vtable0 = &VectorClass<HouseClass *>::`vftable'; /*0x69b50c*/
        v30.IsAllocated = 0; /*0x69b514*/
        v30.Capacity = 0; /*0x69b519*/
        if ( v33.Items ) /*0x69b51e*/
        {
          if ( v33.IsAllocated ) /*0x69b526*/
            __3_YAXPAX_Z(v33.Items); /*0x69b529*/
        }
      }
    }
  }
}



// ==== 0x0069B540  Network::processGameEvent  this=Network  sig=csp ====
_DWORD *__thiscall Network::processGameEvent(Network *this)
{
  _DWORD *result; // eax
  int v2; // ecx

  *(_DWORD *)&this->Network_field_0x22[2] = 0; /*0x69b540*/
  result = &this->__pad_64[8]; /*0x69b547*/
  v2 = 8; /*0x69b54a*/
  do /*0x69b55b*/
  {
    *(result - 8) = -1; /*0x69b552*/
    *result++ = -1; /*0x69b555*/
    --v2; /*0x69b55a*/
  }
  while ( v2 ); /*0x69b55b*/
  return result; /*0x69b55d*/
}



// ==== 0x0069B560  SaveGame::SaveAudioData  this=SaveGame  sig=csp ====
bool __thiscall SaveGame::SaveAudioData(SaveGame *this, int a2)
{
  int v2; // esi
  int v4; // eax
  bool result; // al
  int v6; // [esp-Ch] [ebp-18h]

  v2 = a2; /*0x69b561*/
  result = 0; /*0x69b59a*/
  if ( a2 ) /*0x69b56a*/
  {
    v4 = *(_DWORD *)a2; /*0x69b56c*/
    v6 = a2; /*0x69b577*/
    a2 = 300; /*0x69b578*/
    if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(v4 + 16))(v6, &a2, 4, 0) >= 0 /*0x69b597*/
      && (*(int (__stdcall **)(int, SaveGame *, int, _DWORD))(*(_DWORD *)v2 + 16))(v2, this, a2, 0) >= 0 )
    {
      return 1; /*0x69b56a*/
    }
  }
  return result; /*0x69b599*/
}



// ==== 0x0069B5B0  LoadGame::LoadBlock300  this=LoadGame  sig=csp ====
bool __thiscall LoadGame::LoadBlock300(LoadGame *this, int a2)
{
  int v2; // esi
  int v4; // eax
  bool result; // al

  v2 = a2; /*0x69b5b1*/
  result = 0; /*0x69b5f3*/
  if ( a2 ) /*0x69b5ba*/
  {
    if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &a2, 4, 0) >= 0 && a2 == 300 ) /*0x69b5d7*/
    {
      v4 = (*(int (__stdcall **)(int, LoadGame *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, this, 300, 0); /*0x69b5e4*/
      this->LoadGame_field_0x04 = -1; /*0x69b5e9*/
      if ( v4 >= 0 ) /*0x69b5f0*/
        return 1; /*0x69b5ba*/
    }
  }
  return result; /*0x69b5f2*/
}



// ==== 0x0069B600  NetworkSession::IsPlayerInGame  this=NetworkSession  sig=csp ====
char __thiscall NetworkSession::IsPlayerInGame(NetworkSession *this, int a2)
{
  int v2; // edi
  int v3; // edx
  int *v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  _DWORD *i; // ecx

  if ( a2 == -2 ) /*0x69b60a*/
    return 0; /*0x69b657*/
  v2 = *((_DWORD *)this + 2579); /*0x69b60c*/
  v3 = 0; /*0x69b612*/
  if ( v2 <= 0 ) /*0x69b616*/
  {
LABEL_10:
    v7 = 0; /*0x69b642*/
    for ( i = (_DWORD *)this + 33; *i != a2; ++i ) /*0x69b644*/
    {
      if ( ++v7 >= 8 ) /*0x69b655*/
        return 0; /*0x69b655*/
    }
  }
  else
  {
    v4 = (int *)*((_DWORD *)this + 2576); /*0x69b618*/
    while ( 1 ) /*0x69b61e*/
    {
      v5 = *v4; /*0x69b61e*/
      if ( *(_DWORD *)(*v4 + 87) == -2 && *(_DWORD *)(v5 + 83) == -1 ) /*0x69b62a*/
        v6 = -2; /*0x69b62c*/
      else
        v6 = *(_DWORD *)(v5 + 83); /*0x69b633*/
      if ( v6 == a2 ) /*0x69b638*/
        break; /*0x69b638*/
      ++v3; /*0x69b63a*/
      ++v4; /*0x69b63b*/
      if ( v3 >= v2 ) /*0x69b640*/
        goto LABEL_10; /*0x69b640*/
    }
  }
  return 1; /*0x69b657*/
}



// ==== 0x0069B690  ObjectClass::method_69B690  this=ObjectClass  sig=csp ====
int __thiscall sub_69B690(ObjectClass *this)
{
  int result; // eax
  int v3; // edi
  int v4; // edx
  int *v5; // esi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  char *i; // edx

  while ( 1 ) /*0x69b6aa*/
  {
    result = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x69b6aa*/
    if ( result == -2 ) /*0x69b6b1*/
      return result; /*0x69b6fa*/
    v3 = *((_DWORD *)this + 2579); /*0x69b6b3*/
    v4 = 0; /*0x69b6b9*/
    if ( v3 <= 0 ) /*0x69b6bd*/
    {
LABEL_10:
      v8 = 0; /*0x69b6e5*/
      for ( i = &this->hasParachute; *(_DWORD *)i != result; i += 4 ) /*0x69b6e7*/
      {
        if ( ++v8 >= 8 ) /*0x69b6f8*/
          return result; /*0x69b6f8*/
      }
    }
    else
    {
      v5 = (int *)*((_DWORD *)this + 2576); /*0x69b6bf*/
      while ( 1 ) /*0x69b6c5*/
      {
        v6 = *v5; /*0x69b6c5*/
        if ( *(_DWORD *)(*v5 + 87) == -2 && *(_DWORD *)(v6 + 83) == -1 ) /*0x69b6d0*/
          v7 = -2; /*0x69b6d2*/
        else
          v7 = *(_DWORD *)(v6 + 83); /*0x69b6d6*/
        if ( v7 == result ) /*0x69b6db*/
          break; /*0x69b6db*/
        ++v4; /*0x69b6dd*/
        ++v5; /*0x69b6de*/
        if ( v4 >= v3 ) /*0x69b6e3*/
          goto LABEL_10; /*0x69b6e3*/
      }
    }
  }
}



// ==== 0x0069B700  Session::GetPlayerOption  this=Session  sig=csp ====
int __thiscall Session::GetPlayerOption(Session *this)
{
  int result; // eax

  result = -2; /*0x69b706*/
  if ( this->field_178 != (void *)-2 ) /*0x69b70d*/
    return (int)this->field_174; /*0x69b70f*/
  return result; /*0x69b715*/
}



// ==== 0x0069B720  Session::GetPlayerColor  this=Session  sig=csp ====
int __thiscall Session::GetPlayerColor(Session *this)
{
  int result; // eax

  result = -2; /*0x69b726*/
  if ( this->field_160 != (void *)-2 ) /*0x69b72d*/
    return (int)this->field_15C; /*0x69b72f*/
  return result; /*0x69b735*/
}



// ==== 0x0069B760  SessionClass::AssignSide  this=SessionClass  sig=csp ====
int __thiscall SessionClass::AssignSide(SessionClass *this, int a2, char a3)
{
  int result; // eax
  int Side2; // edx

  result = a2; /*0x69b760*/
  if ( a2 == -2 ) /*0x69b76a*/
  {
    LOBYTE(result) = a3; /*0x69b76c*/
    if ( a3 ) /*0x69b772*/
    {
      result = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 9); /*0x69b783*/
      this->Side = result; /*0x69b788*/
      this->Side2 = -2; /*0x69b78e*/
    }
    else
    {
      this->Side = 0; /*0x69b79a*/
      this->Side2 = -2; /*0x69b7a4*/
    }
  }
  else
  {
    this->Side = a2; /*0x69b7b0*/
    this->Side2 = -1; /*0x69b7b6*/
  }
  Side2 = this->Side2; /*0x69b7c6*/
  this->idxSide = this->Side; /*0x69b7cc*/
  this->idxSide2 = Side2; /*0x69b7d2*/
  return result; /*0x69b7d8*/
}



// ==== 0x0069B7E0  SessionClass::AssignColor  this=SessionClass  sig=csp ====
int __thiscall SessionClass::AssignColor(SessionClass *this, int a2, char a3)
{
  int result; // eax
  int v5; // edi
  int v6; // edx
  int v7; // esi
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  char *v11; // edx
  int Color2; // edx

  result = a2; /*0x69b7e0*/
  if ( a2 == -2 ) /*0x69b7ef*/
  {
    LOBYTE(result) = a3; /*0x69b7f5*/
    if ( a3 ) /*0x69b7fb*/
    {
      while ( 1 ) /*0x69b80e*/
      {
        result = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x69b80e*/
        if ( result == -2 ) /*0x69b815*/
          break; /*0x69b815*/
        v5 = this->StartSpots[4]; /*0x69b817*/
        v6 = 0; /*0x69b81d*/
        if ( v5 <= 0 ) /*0x69b821*/
        {
LABEL_12:
          v10 = 0; /*0x69b849*/
          v11 = &this->__pad_50[52]; /*0x69b84b*/
          while ( *(_DWORD *)v11 != result ) /*0x69b853*/
          {
            ++v10; /*0x69b855*/
            v11 += 4; /*0x69b856*/
            if ( v10 >= 8 ) /*0x69b85c*/
              goto LABEL_15; /*0x69b85c*/
          }
        }
        else
        {
          v7 = this->StartSpots[1]; /*0x69b823*/
          while ( 1 ) /*0x69b829*/
          {
            v8 = *(_DWORD *)v7; /*0x69b829*/
            if ( *(_DWORD *)(*(_DWORD *)v7 + 87) == -2 && *(_DWORD *)(v8 + 83) == -1 ) /*0x69b834*/
              v9 = -2; /*0x69b836*/
            else
              v9 = *(_DWORD *)(v8 + 83); /*0x69b83a*/
            if ( v9 == result ) /*0x69b83f*/
              break; /*0x69b83f*/
            ++v6; /*0x69b841*/
            v7 += 4; /*0x69b842*/
            if ( v6 >= v5 ) /*0x69b847*/
              goto LABEL_12; /*0x69b847*/
          }
        }
      }
LABEL_15:
      this->Color = result; /*0x69b85e*/
      this->Color2 = -2; /*0x69b866*/
    }
    else
    {
      this->Color = 0; /*0x69b86e*/
      this->Color2 = -2; /*0x69b878*/
    }
  }
  else
  {
    this->Color = a2; /*0x69b880*/
    this->Color2 = -1; /*0x69b886*/
  }
  Color2 = this->Color2; /*0x69b896*/
  *(_DWORD *)&this->__pad_50[268] = this->Color; /*0x69b89c*/
  this->unknown_160[0] = Color2; /*0x69b8a2*/
  return result; /*0x69b8a8*/
}



// ==== 0x0069B8B0  nullsub_229  this=-  sig=csp ====
void __stdcall nullsub_229(int a1, int a2)
{
  ; /*0x69b8b0*/
}



// ==== 0x0069B8C0  Player::RandomAssign  this=Player  sig=csp ====
void __thiscall Player::RandomAssign(Player *this)
{
  int v1; // ebp
  int i; // ebx
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  char *v7; // ebx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  _DWORD *v12; // esi
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v17; // [esp+14h] [ebp-4h]

  Debug::Log(); /*0x69b8d0*/
  v1 = dword_A8DA84; /*0x69b8d5*/
  for ( i = 0; i < v1; ++i ) /*0x69b8e2*/
  {
    v3 = dword_A8DA78[i]; /*0x69b8f2*/
    v4 = *(_DWORD *)(v3 + 79); /*0x69b8f5*/
    if ( v4 == -3 || *(_DWORD *)(v3 + 75) == -3 ) /*0x69b8ff*/
    {
      *(_DWORD *)(v3 + 75) = -3; /*0x69b977*/
      *(_DWORD *)(v3 + 79) = -1; /*0x69b97a*/
      *(_DWORD *)(v3 + 83) = 8; /*0x69b97d*/
      *(_DWORD *)(v3 + 87) = -1; /*0x69b984*/
    }
    else
    {
      if ( v4 == -2 ) /*0x69b904*/
      {
        *(_DWORD *)(v3 + 79) = -1; /*0x69b90d*/
        v5 = this->q004; /*0x69b910*/
        if ( v5 ) /*0x69b915*/
          *(_DWORD *)(v3 + 75) = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 108))(v5); /*0x69b91c*/
        else
          *(_DWORD *)(v3 + 75) = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 9); /*0x69b935*/
      }
      if ( *(_DWORD *)(v3 + 87) == -2 ) /*0x69b941*/
      {
        *(_DWORD *)(v3 + 87) = -1; /*0x69b943*/
        *(_DWORD *)(v3 + 83) = -1; /*0x69b946*/
        do /*0x69b966*/
          v6 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x69b95e*/
        while ( NetworkSession::IsPlayerInGame((NetworkSession *)&dword_A8B238, v6) ); /*0x69b966*/
        *(_DWORD *)(v3 + 83) = v6; /*0x69b96f*/
      }
    }
    if ( !i ) /*0x69b989*/
      dword_A8B394 = *(_DWORD *)(v3 + 83); /*0x69b98e*/
    ToWideStringChar((char *)v3); /*0x69b9b1*/
    Debug::Log(); /*0x69b9bd*/
  }
  v17 = 0; /*0x69b9ce*/
  v7 = &stru_A8B250.__pad_0[76]; /*0x69b9d6*/
  do /*0x69baa0*/
  {
    if ( *(_DWORD *)v7 == -2 ) /*0x69b9e4*/
    {
      v8 = this->q004; /*0x69b9ea*/
      if ( v8 ) /*0x69b9ef*/
        v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 112))(v8); /*0x69b9f3*/
      else
        v9 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 9); /*0x69ba07*/
      *(_DWORD *)v7 = v9; /*0x69ba0c*/
    }
    if ( *((_DWORD *)v7 + 8) == -2 ) /*0x69ba11*/
    {
      while ( 1 ) /*0x69ba23*/
      {
        v10 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x69ba23*/
        if ( v10 == -2 ) /*0x69ba2a*/
          break; /*0x69ba2a*/
        v11 = 0; /*0x69ba32*/
        if ( dword_A8DA84 <= 0 ) /*0x69ba36*/
        {
LABEL_32:
          v15 = 132; /*0x69ba5e*/
          while ( *(_DWORD *)(&dword_A8B238 + v15) != v10 ) /*0x69ba69*/
          {
            v15 += 4; /*0x69ba6b*/
            if ( v15 >= 164 ) /*0x69ba74*/
              goto LABEL_35; /*0x69ba74*/
          }
        }
        else
        {
          v12 = dword_A8DA78; /*0x69ba38*/
          while ( 1 ) /*0x69ba3e*/
          {
            v13 = *v12; /*0x69ba3e*/
            if ( *(_DWORD *)(*v12 + 87) == -2 && *(_DWORD *)(v13 + 83) == -1 ) /*0x69ba49*/
              v14 = -2; /*0x69ba4b*/
            else
              v14 = *(_DWORD *)(v13 + 83); /*0x69ba4f*/
            if ( v14 == v10 ) /*0x69ba54*/
              break; /*0x69ba54*/
            ++v11; /*0x69ba56*/
            ++v12; /*0x69ba57*/
            if ( v11 >= dword_A8DA84 ) /*0x69ba5c*/
              goto LABEL_32; /*0x69ba5c*/
          }
        }
      }
LABEL_35:
      *((_DWORD *)v7 + 8) = v10; /*0x69ba76*/
    }
    Debug::Log(); /*0x69ba8a*/
    v7 += 4; /*0x69ba92*/
    ++v17; /*0x69ba9c*/
  }
  while ( (int)v7 < (int)&stru_A8B250.__pad_0[108] ); /*0x69baa0*/
}



// ==== 0x0069BAB0  WTFMode::Init  this=WTFMode  sig=csp ====
char __thiscall WTFMode_Init(_BYTE *this)
{
  char result; // al

  result = this->q30D8; /*0x69bab0*/
  if ( !result ) /*0x69bab8*/
  {
    result = g_WTFMode; /*0x69babe*/
    if ( g_WTFMode ) /*0x69bac5*/
    {
      this->q30D8 = 1; /*0x69bac7*/
      if ( dword_83ED20 == -1 ) /*0x69bad6*/
        dword_83ED20 = *(_DWORD *)g_GameModeOptions; /*0x69badd*/
      if ( !*(_DWORD *)this ) /*0x69bae2*/
        *(_DWORD *)g_GameModeOptions = 2; /*0x69bae7*/
      if ( !*((_BYTE *)g_ScenarioClass_Instance + 13730) ) /*0x69baf7*/
      {
        Scenario::ClearScreen(); /*0x69bb01*/
        dword_B07784 = (int)g_CurrentFrame + 3; /*0x69bb0f*/
      }
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 28))(g_WWMouseClass_Instance) ) /*0x69bb1d*/
        (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 24))(g_WWMouseClass_Instance); /*0x69bb2c*/
      return EndBufferMixer((int *)g_MixerState, 0x4000); /*0x69bb3a*/
    }
  }
  return result; /*0x69bb3f*/
}



// ==== 0x0069BB40  WTFMode::Shutdown  this=WTFMode  sig=csp ====
int __thiscall WTFMode::Shutdown(_BYTE *this)
{
  int result; // eax

  LOBYTE(result) = this->q30D8; /*0x69bb40*/
  if ( (_BYTE)result ) /*0x69bb48*/
  {
    this->q30D8 = 0; /*0x69bb4e*/
    if ( dword_83ED20 != -1 ) /*0x69bb5d*/
    {
      *(_DWORD *)g_GameModeOptions = dword_83ED20; /*0x69bb5f*/
      dword_83ED20 = -1; /*0x69bb64*/
    }
    nullsub_19(); /*0x69bb6e*/
    AsyncIO::Shutdown(); /*0x69bb73*/
    AudioMixer::Shutdown(); /*0x69bb78*/
    AudioQueue::DrainAll(); /*0x69bb7d*/
    WTFMode_Cleanup(); /*0x69bb82*/
    ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x69bb87*/
    EndBufferMixer((int *)g_MixerState, 0x4000); /*0x69bb97*/
    if ( g_TacticalRender ) /*0x69bba4*/
      Tooltip::Enable(g_TacticalRender, 0); /*0x69bba8*/
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 28))(g_WWMouseClass_Instance) ) /*0x69bbb5*/
      (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 20))(g_WWMouseClass_Instance); /*0x69bbc4*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x69bbcf*/
    dword_B07784 = 0; /*0x69bbd2*/
  }
  return result; /*0x69bbdc*/
}



// ==== 0x0069BBE0  SessionClass::GetGameSpeed  this=SessionClass  sig=csp ====
int __thiscall SessionClass::GetGameSpeed(SessionClass *this)
{
  int result; // eax

  LOBYTE(result) = this->CurrentlyInGame; /*0x69bbe0*/
  return result; /*0x69bbe6*/
}



// ==== 0x0069BBF0  ObjectClass::Network_Disconnect_69BBF0  this=ObjectClass  sig=csp ====
void __thiscall sub_69BBF0(char *this, int a2)
{
  char *v2; // eax
  int v3; // ecx

  if ( a2 < 7 ) /*0x69bbf7*/
  {
    v2 = this + 2 * a2 + 12410; /*0x69bbf9*/
    v3 = 7 - a2; /*0x69bc05*/
    do /*0x69bc12*/
    {
      *(_WORD *)v2 = *((_WORD *)v2 + 1); /*0x69bc0b*/
      v2 += 2; /*0x69bc0e*/
      --v3; /*0x69bc11*/
    }
    while ( v3 ); /*0x69bc12*/
  }
}



// ==== 0x0069BC20  IPXConnClass::closeConnection  this=IPXConnClass  sig=csp ====
__int16 __thiscall IPXConnClass::closeConnection(IPXConnClass *this, int a2)
{
  int v2; // eax
  _DWORD *i; // esi

  v2 = 0; /*0x69bc27*/
  if ( dword_A8DA84 <= 0 ) /*0x69bc2d*/
    return 0; /*0x69bc48*/
  for ( i = dword_A8DA78; *(_DWORD *)(*i + 111) != a2; ++i ) /*0x69bc2f*/
  {
    if ( ++v2 >= dword_A8DA84 ) /*0x69bc46*/
      return 0; /*0x69bc46*/
  }
  return *((_WORD *)this + v2 + 6205); /*0x69bc48*/
}



// ==== 0x0069BC60  GameClass::FindPlayerName  this=GameClass  sig=csp ====
int __stdcall GameClass_FindPlayerName(int a1)
{
  int v1; // ebp
  char **v2; // esi
  char *v3; // edi
  char *v4; // ebx
  char *v5; // eax

  v1 = 0; /*0x69bc64*/
  v2 = (char **)&dword_A8DA90; /*0x69bc66*/
  while ( 1 ) /*0x69bc74*/
  {
    v3 = *v2; /*0x69bc74*/
    v4 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * a1)); /*0x69bc80*/
    v5 = ToWideStringChar(v3); /*0x69bc82*/
    if ( !_strcmpi(v4, v5) ) /*0x69bc89*/
      break; /*0x69bc89*/
    ++v2; /*0x69bc95*/
    ++v1; /*0x69bc98*/
    if ( (int)v2 >= (int)&dword_A8DAB0 ) /*0x69bc9f*/
      return 0; /*0x69bca7*/
  }
  return v1; /*0x69bca1*/
}



// ==== 0x0069BCC0  sub_69BCC0  this=-  sig=csp ====
int __stdcall sub_69BCC0(void *a1)
{
  int v1; // edi
  char **v2; // esi
  char *v3; // eax

  v1 = 0; /*0x69bcc7*/
  v2 = (char **)&dword_A8DA90; /*0x69bcc9*/
  while ( 1 ) /*0x69bcd0*/
  {
    v3 = ToWideStringChar(*v2); /*0x69bcd0*/
    if ( !_strcmpi(a1, v3) ) /*0x69bcd7*/
      break; /*0x69bcd7*/
    ++v2; /*0x69bce3*/
    ++v1; /*0x69bce6*/
    if ( (int)v2 >= (int)&dword_A8DAB0 ) /*0x69bced*/
      return 0; /*0x69bcf4*/
  }
  return v1; /*0x69bcef*/
}



// ==== 0x0069BD00  sub_69BD00  this=-  sig=csp ====
int __stdcall sub_69BD00(int a1)
{
  int v1; // ebx
  char *v2; // esi
  char *v3; // edi
  char *v4; // eax

  v1 = 0; /*0x69bd07*/
  if ( dword_A8DA84 <= 0 ) /*0x69bd0d*/
    return 0; /*0x69bd48*/
  while ( 1 ) /*0x69bd18*/
  {
    v2 = (char *)*(&dword_A8DA90 + a1); /*0x69bd18*/
    v3 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * v1)); /*0x69bd29*/
    v4 = ToWideStringChar(v2); /*0x69bd2b*/
    if ( !_strcmpi(v3, v4) ) /*0x69bd32*/
      break; /*0x69bd32*/
    if ( ++v1 >= dword_A8DA84 ) /*0x69bd46*/
      return 0; /*0x69bd46*/
  }
  return v1; /*0x69bd48*/
}



// ==== 0x0069BD60  SessionClass::SetupNetwork  this=SessionClass  sig=csp ====
void __thiscall SessionClass::SetupNetwork(SessionClass *this)
{
  int v1; // esi
  char **v3; // edi
  char *v4; // ebx
  char *v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // ebx
  int v9; // edx
  int v10; // eax
  int v11; // esi
  int v12; // eax
  _DWORD *v13; // esi
  int v14; // eax
  int v15; // esi
  int i; // eax
  int v17; // ebx
  _DWORD *v18; // edx
  char *v19; // edi
  char **v20; // esi
  char *v21; // eax
  int v22; // edi
  char **v23; // esi
  char *v24; // eax
  char **v25; // ecx
  char *v26; // esi
  char *v27; // eax
  char *v28; // ecx
  char *v29; // esi
  char *v30; // eax
  char *v31; // ecx
  char **v32; // esi
  char *v33; // edi
  char *v34; // ebx
  char *v35; // eax
  void *v36; // eax
  int v37; // ecx
  _WORD *v38; // edx
  __int16 v39; // ax
  _DWORD *v40; // edx
  int v41; // esi
  char *v42; // ebx
  char *v43; // edi
  char *v44; // eax
  NetworkID *v45; // ecx
  bool v46; // zf
  int v47; // eax
  __int16 v48; // [esp-Ch] [ebp-70h]
  int v49; // [esp+8h] [ebp-5Ch]
  int v50; // [esp+8h] [ebp-5Ch]
  int v51; // [esp+8h] [ebp-5Ch]
  int v52; // [esp+Ch] [ebp-58h]
  int v53[2]; // [esp+10h] [ebp-54h] BYREF
  void *v54; // [esp+18h] [ebp-4Ch]
  int v55; // [esp+1Ch] [ebp-48h]
  void *v56; // [esp+20h] [ebp-44h]
  int v57; // [esp+24h] [ebp-40h] BYREF
  int v58; // [esp+2Ch] [ebp-38h]
  int v59; // [esp+30h] [ebp-34h]
  bool v60[4]; // [esp+34h] [ebp-30h] BYREF
  int v61; // [esp+38h] [ebp-2Ch]
  int v62; // [esp+3Ch] [ebp-28h]
  bool v63[4]; // [esp+40h] [ebp-24h] BYREF
  int v64; // [esp+44h] [ebp-20h]
  int v65; // [esp+48h] [ebp-1Ch]
  void **v66; // [esp+4Ch] [ebp-18h] BYREF
  void *Block; // [esp+50h] [ebp-14h]
  int v68; // [esp+54h] [ebp-10h]
  char v69; // [esp+59h] [ebp-Bh]
  int v70; // [esp+5Ch] [ebp-8h]
  int v71; // [esp+60h] [ebp-4h]

  v1 = 0; /*0x69bd65*/
  v55 = 1; /*0x69bd6f*/
  AbstractClass::updateAnimationState((AbstractClass *)&v66, 0, 0); /*0x69bd77*/
  v66 = &DynamicVectorClass<NodeNameType *>::`vftable'; /*0x69bd81*/
  v71 = 10; /*0x69bd89*/
  v70 = 0; /*0x69bd91*/
  Debug::Log(); /*0x69bd95*/
  if ( this->StartSpots[4] < 2 ) /*0x69bda6*/
  {
    v66 = &VectorClass<NodeNameType *>::`vftable'; /*0x69bdac*/
    MPCooperative::updateScoreBoard((int)&v66); /*0x69bdb4*/
    return; /*0x69bdbe*/
  }
  v52 = 0; /*0x69bdce*/
  memset(&this->unknown_2854[373], 0, 0x120u); /*0x69bdd2*/
  LOBYTE(this->unknown_2854[497]) = 1; /*0x69bdd4*/
  if ( this->StartSpots[4] > 0 ) /*0x69bde3*/
  {
    do /*0x69be9c*/
    {
      v53[0] = 0; /*0x69bde9*/
      v3 = (char **)dword_A8DA90; /*0x69bdf1*/
      while ( 1 ) /*0x69bdfb*/
      {
        v4 = *v3; /*0x69bdfb*/
        v54 = ToWideStringChar((char *)dword_A8DA78[v1]); /*0x69be07*/
        v5 = ToWideStringChar(v4); /*0x69be0b*/
        if ( !_strcmpi((char *)v54, v5) ) /*0x69be16*/
          break; /*0x69be16*/
        ++v3; /*0x69be26*/
        ++v53[0]; /*0x69be30*/
        if ( (int)v3 >= (int)&dword_A8DAB0 ) /*0x69be34*/
        {
          v6 = 0; /*0x69be36*/
          goto LABEL_9; /*0x69be38*/
        }
      }
      v6 = v53[0]; /*0x69be3a*/
      if ( v53[0] >= 8u ) /*0x69be40*/
        goto LABEL_10; /*0x69be40*/
LABEL_9:
      Network::SetPort((Network *)(*(_DWORD *)(this->StartSpots[1] + 4 * v1) + 40), this->unknown_2854[v6 + 489]); /*0x69be47*/
      ToWideStringChar(*(char **)(this->StartSpots[1] + 4 * v1)); /*0x69be6a*/
      Network::FormatAddress((Network *)(*(_DWORD *)(this->StartSpots[1] + 4 * v1) + 40), 0); /*0x69be7f*/
      Debug::Log(); /*0x69be8b*/
LABEL_10:
      ++v1; /*0x69be93*/
    }
    while ( v1 < this->StartSpots[4] ); /*0x69be9c*/
  }
  v7 = this->StartSpots[4]; /*0x69bea2*/
  v58 = 0; /*0x69beaa*/
  v59 = 0; /*0x69beb0*/
  v49 = 0; /*0x69beb4*/
  if ( v7 > 0 ) /*0x69beb8*/
  {
    v8 = v68; /*0x69bebe*/
    while ( 1 ) /*0x69bec2*/
    {
      v9 = 0x7FFFFFFF; /*0x69bec2*/
      v10 = 0; /*0x69bec7*/
      v11 = 0x7FFFFFFF; /*0x69becb*/
      if ( v7 <= 0 ) /*0x69becd*/
        break; /*0x69becd*/
      do /*0x69bef2*/
      {
        if ( !*((_BYTE *)&v58 + v10) && *(_DWORD *)(*(_DWORD *)(this->StartSpots[1] + 4 * v10) + 83) < v11 ) /*0x69bee9*/
        {
          v11 = *(_DWORD *)(*(_DWORD *)(this->StartSpots[1] + 4 * v10) + 83); /*0x69beeb*/
          v9 = v10; /*0x69beed*/
        }
        ++v10; /*0x69beef*/
      }
      while ( v10 < v7 ); /*0x69bef2*/
      if ( v9 == 0x7FFFFFFF ) /*0x69befa*/
        break; /*0x69befa*/
      v12 = this->StartSpots[1]; /*0x69befc*/
      *((_BYTE *)&v58 + v9) = 1; /*0x69bf02*/
      v13 = (_DWORD *)(v12 + 4 * v9); /*0x69bf07*/
      if ( v70 < v8 ) /*0x69bf10*/
        goto LABEL_24; /*0x69bf10*/
      if ( !v69 && v8 || v71 <= 0 ) /*0x69bf24*/
        goto LABEL_26; /*0x69bf24*/
      if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v66[2])(&v66, v71 + v8, 0) ) /*0x69bf35*/
      {
LABEL_24:
        v14 = v70++; /*0x69bf44*/
        *((_DWORD *)Block + v14) = *v13; /*0x69bf4d*/
      }
      v8 = v68; /*0x69bf50*/
LABEL_26:
      v7 = this->StartSpots[4]; /*0x69bf54*/
      if ( v70 != v7 && ++v49 < v7 ) /*0x69bf6d*/
        continue; /*0x69bf6d*/
      break; /*0x69bf6d*/
    }
  }
  v15 = 0; /*0x69bf73*/
  v58 = 0; /*0x69bf77*/
  v50 = 0; /*0x69bf7b*/
  v59 = 0; /*0x69bf7f*/
  for ( i = v70; v15 < i; v50 = v15 ) /*0x69bf89*/
  {
    if ( !*((_BYTE *)&v58 + v15) ) /*0x69bf8f*/
    {
      v17 = 0; /*0x69bf9f*/
      v18 = (_DWORD *)(*((_DWORD *)Block + v15) + 40); /*0x69bfa4*/
      *(_DWORD *)v63 = *v18; /*0x69bfab*/
      v64 = v18[1]; /*0x69bfb2*/
      v65 = v18[2]; /*0x69bfb9*/
      if ( i > 0 ) /*0x69bfbd*/
      {
        v53[0] = (int)&this->unknown_2854[9 * v52 + 373]; /*0x69bfd1*/
        do /*0x69c1f5*/
        {
          if ( v17 != v15 /*0x69bff8*/
            && !*((_BYTE *)&v58 + v17)
            && (unsigned __int8)NetworkID::Compare(v63, *((_DWORD *)Block + v17) + 40) )
          {
            v54 = ToWideStringChar(*((char **)Block + v17)); /*0x69c011*/
            v19 = 0; /*0x69c015*/
            v20 = (char **)dword_A8DA90; /*0x69c017*/
            while ( 1 ) /*0x69c01e*/
            {
              v21 = ToWideStringChar(*v20); /*0x69c01e*/
              if ( !_strcmpi((char *)v54, v21) ) /*0x69c029*/
                break; /*0x69c029*/
              ++v20; /*0x69c039*/
              ++v19; /*0x69c03c*/
              if ( (int)v20 >= (int)&dword_A8DAB0 ) /*0x69c043*/
              {
                v54 = 0; /*0x69c045*/
                goto LABEL_39; /*0x69c045*/
              }
            }
            v54 = v19; /*0x69c0f6*/
LABEL_39:
            v56 = ToWideStringChar(*((char **)Block + v50)); /*0x69c04d*/
            v22 = 0; /*0x69c061*/
            v23 = (char **)dword_A8DA90; /*0x69c063*/
            while ( 1 ) /*0x69c06a*/
            {
              v24 = ToWideStringChar(*v23); /*0x69c06a*/
              if ( !_strcmpi((char *)v56, v24) ) /*0x69c075*/
                break; /*0x69c075*/
              ++v23; /*0x69c081*/
              ++v22; /*0x69c084*/
              if ( (int)v23 >= (int)&dword_A8DAB0 ) /*0x69c08b*/
              {
                v22 = 0; /*0x69c08d*/
                break; /*0x69c08d*/
              }
            }
            if ( this->unknown_2854[(_DWORD)v54 + 489] == this->unknown_2854[v22 + 489] ) /*0x69c0a3*/
            {
              v48 = v55++ + LOWORD(this->unknown_2854[(_DWORD)v54 + 489]); /*0x69c0b9*/
              Network::SetPort((Network *)(*((_DWORD *)Block + v17) + 40), v48); /*0x69c0c8*/
              v25 = (char **)Block; /*0x69c0cd*/
              *((_BYTE *)&v58 + v17) = 1; /*0x69c0d1*/
              ToWideStringChar(v25[v17]); /*0x69c0d9*/
            }
            Debug::Log(); /*0x69c0ec*/
            v26 = ToWideStringChar(*((char **)Block + v50)); /*0x69c121*/
            v27 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x69c123*/
            if ( !_strcmpi(v26, v27) ) /*0x69c12a*/
            {
              v56 = (void *)v53[0]; /*0x69c142*/
              v28 = (char *)*((_DWORD *)Block + v17); /*0x69c146*/
              ++v52; /*0x69c14d*/
              v53[0] += 36; /*0x69c151*/
              strcpy((char *)v56, ToWideStringChar(v28)); /*0x69c172*/
            }
            v29 = ToWideStringChar(*((char **)Block + v17)); /*0x69c18c*/
            v30 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x69c18e*/
            if ( !_strcmpi(v29, v30) ) /*0x69c195*/
            {
              v56 = (void *)v53[0]; /*0x69c1b1*/
              v31 = (char *)*((_DWORD *)Block + v50); /*0x69c1b6*/
              ++v52; /*0x69c1bc*/
              v53[0] += 36; /*0x69c1c0*/
              strcpy((char *)v56, ToWideStringChar(v31)); /*0x69c1e1*/
            }
            v15 = v50; /*0x69c1ea*/
          }
          i = v70; /*0x69c1ee*/
          ++v17; /*0x69c1f2*/
        }
        while ( v17 < v70 ); /*0x69c1f5*/
      }
    }
    ++v15; /*0x69c1fb*/
  }
  if ( this->unknown_2854[498] ) /*0x69c208*/
  {
    Debug::Log(); /*0x69c21c*/
    Network::SetPort((Network *)(*(_DWORD *)this->StartSpots[1] + 40), this->unknown_2854[498]); /*0x69c237*/
    v54 = 0; /*0x69c23c*/
    v32 = (char **)dword_A8DA90; /*0x69c244*/
    while ( 1 ) /*0x69c24e*/
    {
      v33 = *v32; /*0x69c24e*/
      v34 = ToWideStringChar((char *)*dword_A8DA78); /*0x69c259*/
      v35 = ToWideStringChar(v33); /*0x69c25b*/
      if ( !_strcmpi(v34, v35) ) /*0x69c262*/
        break; /*0x69c262*/
      ++v32; /*0x69c276*/
      v54 = (char *)v54 + 1; /*0x69c280*/
      if ( (int)v32 >= (int)&dword_A8DAB0 ) /*0x69c284*/
      {
        v36 = 0; /*0x69c286*/
        goto LABEL_58; /*0x69c286*/
      }
    }
    v36 = v54; /*0x69c48c*/
LABEL_58:
    Network::SetPort((Network *)(this->unknown_2854[(_DWORD)v36 + 1] + 40), this->unknown_2854[498]); /*0x69c288*/
  }
  v37 = 0; /*0x69c2a5*/
  if ( this->StartSpots[4] > 0 ) /*0x69c2a9*/
  {
    v38 = (_WORD *)&this->unknown_2854[521] + 1; /*0x69c2ab*/
    do /*0x69c2d7*/
    {
      v39 = *(_WORD *)(*(_DWORD *)(this->StartSpots[1] + 4 * v37) + 40); /*0x69c2ba*/
      *v38 = v39; /*0x69c2c1*/
      if ( !v39 ) /*0x69c2c4*/
        *v38 = 1234; /*0x69c2c6*/
      ++v37; /*0x69c2d1*/
      ++v38; /*0x69c2d2*/
    }
    while ( v37 < this->StartSpots[4] ); /*0x69c2d7*/
  }
  v40 = (_DWORD *)(*(_DWORD *)this->StartSpots[1] + 40); /*0x69c2e1*/
  *(_DWORD *)v60 = *v40; /*0x69c2e6*/
  v61 = v40[1]; /*0x69c2f2*/
  v62 = v40[2]; /*0x69c2fd*/
  Network::CopyAddress_Small((char *)v60, (int)&v57); /*0x69c301*/
  v51 = 1; /*0x69c313*/
  if ( this->StartSpots[4] > 1 ) /*0x69c317*/
  {
    v41 = 4; /*0x69c31d*/
    do /*0x69c430*/
    {
      if ( (unsigned __int8)NetworkID::Compare(v60, *(_DWORD *)(v41 + this->StartSpots[1]) + 40) ) /*0x69c333*/
      {
        ToWideStringChar(*(char **)(v41 + this->StartSpots[1])); /*0x69c349*/
        Debug::Log(); /*0x69c354*/
        v42 = (char *)&this->unknown_2854[80]; /*0x69c362*/
        v54 = &this->unknown_2854[1]; /*0x69c368*/
        v55 = 8; /*0x69c36c*/
        do /*0x69c416*/
        {
          v43 = *(char **)v54; /*0x69c381*/
          v56 = ToWideStringChar(*(char **)(v41 + this->StartSpots[1])); /*0x69c38a*/
          v44 = ToWideStringChar(v43); /*0x69c38e*/
          if ( !_strcmpi((char *)v56, v44) ) /*0x69c399*/
          {
            Network::CopyAddress_Small(v42, (int)v53); /*0x69c3ac*/
            v45 = (NetworkID *)(*(_DWORD *)(v41 + this->StartSpots[1]) + 40); /*0x69c3be*/
            NetworkID::Assign(v45, 0, (int)v53, *(_WORD *)v45->__pad_0); /*0x69c3c8*/
            ToWideStringChar(*(char **)(v41 + this->StartSpots[1])); /*0x69c3d6*/
            Network::FormatAddress((Network *)(*(_DWORD *)(v41 + this->StartSpots[1]) + 40), 0); /*0x69c3eb*/
            Debug::Log(); /*0x69c3f7*/
          }
          v42 += 12; /*0x69c40a*/
          v46 = v55 == 1; /*0x69c40d*/
          v54 = (char *)v54 + 4; /*0x69c40e*/
          --v55; /*0x69c412*/
        }
        while ( !v46 ); /*0x69c416*/
      }
      v41 += 4; /*0x69c427*/
      ++v51; /*0x69c42c*/
    }
    while ( v51 < this->StartSpots[4] ); /*0x69c430*/
  }
  if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x69c440*/
  {
    v47 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 112))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x69c444*/
    LOWORD(v47) = HIWORD(this->unknown_2854[521]); /*0x69c44d*/
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_887598.isAliveFlag + 92))( /*0x69c457*/
      *(_DWORD *)&stru_887598.isAliveFlag,
      v47);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 28))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x69c462*/
  }
  v66 = &VectorClass<NodeNameType *>::`vftable'; /*0x69c469*/
  if ( Block ) /*0x69c473*/
  {
    if ( v69 ) /*0x69c47b*/
      __3_YAXPAX_Z(Block); /*0x69c47e*/
  }
}



// ==== 0x0069C4A0  _TypeList_W4DiskID::ddtor  this=TypeList  sig=csp ====
void __thiscall SessionClass::ddtor(_TypeList_W4DiskID *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x69c4a6*/
  this->m_10 = 0; /*0x69c4a9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x69c4b0*/
  {
    __3_YAXPAX_Z(v2); /*0x69c4b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69c4be*/
  }
  BYTE1(this->m_C) = 0; /*0x69c4c1*/
  this->m_8 = 0; /*0x69c4c4*/
}



// ==== 0x0069C4D0  _TypeList_W4DiskID::Write  this=TypeList  sig=csp ====
unsigned int __thiscall SessionClass::Write(_TypeList_W4DiskID *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x69c4d0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x69c4e5*/
  else
    return 0; /*0x69c4d7*/
}



// ==== 0x0069C4F0  _VectorClass_W4DiskID::Seek  this=VectorClass  sig=csp ====
int __thiscall SessionClass::Seek(_VectorClass_W4DiskID *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x69c4fa*/
}



// ==== 0x0069C500  _DynamicVectorClass_VWstring::ddtor  this=DynamicVector  sig=csp ====
void __thiscall MapFile::ddtor(_DynamicVectorClass_VWstring *this)
{
  int v2; // eax
  int v3; // ecx
  void *v4; // ebx
  ObjectClass *v5; // edi
  int v6; // ecx
  int v7; // ebp

  v2 = *(_DWORD *)&this->m_1[3]; /*0x69c505*/
  this->m_10 = 0; /*0x69c508*/
  if ( v2 && BYTE1(this->m_C) ) /*0x69c50f*/
  {
    v3 = *(_DWORD *)(v2 - 4); /*0x69c51a*/
    v4 = (void *)(v2 - 4); /*0x69c51e*/
    v5 = (ObjectClass *)(v2 + 4 * v3); /*0x69c522*/
    v6 = v3 - 1; /*0x69c525*/
    if ( v6 >= 0 ) /*0x69c526*/
    {
      v7 = v6 + 1; /*0x69c529*/
      do /*0x69c537*/
      {
        v5 = (ObjectClass *)((char *)v5 - 4); /*0x69c52c*/
        DeleteAndZero(v5); /*0x69c531*/
        --v7; /*0x69c536*/
      }
      while ( v7 ); /*0x69c537*/
    }
    __3_YAXPAX_Z(v4); /*0x69c53b*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69c547*/
  }
  BYTE1(this->m_C) = 0; /*0x69c54a*/
  this->m_8 = 0; /*0x69c54e*/
}



// ==== 0x0069C560  _DynamicVectorClass_VWstring::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall MapFile::Write(_DynamicVectorClass_VWstring *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x69c560*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x69c575*/
  else
    return 0; /*0x69c567*/
}



// ==== 0x0069C580  _VectorClass_VWstring::Clear  this=VectorClass  sig=csp ====
char **__thiscall VectorClass_Wstring::Clear(_VectorClass_VWstring *this, char **a2, int a3)
{
  String::AssignFromPtr((String *)a2, (const char **)(*(_DWORD *)&this->m_1[3] + 4 * a3)); /*0x69c592*/
  return a2; /*0x69c599*/
}



// ==== 0x0069C5A0  _DynamicVectorClass_PAVMultiMission::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_GlobalPacketType::Destroy(_DynamicVectorClass_PAVMultiMission *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x69c5a6*/
  this->m_10 = 0; /*0x69c5a9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x69c5b0*/
  {
    __3_YAXPAX_Z(v2); /*0x69c5b6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69c5be*/
  }
  BYTE1(this->m_C) = 0; /*0x69c5c1*/
  this->m_8 = 0; /*0x69c5c4*/
}



// ==== 0x0069C5D0  _DynamicVectorClass_PAVMultiMission::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_GlobalPacketType::GetItemIndex(
        _DynamicVectorClass_PAVMultiMission *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x69c5d0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x69c5e5*/
  else
    return 0; /*0x69c5d7*/
}



// ==== 0x0069C5F0  _VectorClass_PAVMultiMission::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MultiMission::Get(_VectorClass_PAVMultiMission *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x69c5fa*/
}



// ==== 0x0069C600  _DynamicVectorClass_PAUGlobalPacketType::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_GlobalPacketType::Destroy_0(_DynamicVectorClass_PAUGlobalPacketType *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x69c606*/
  this->m_10 = 0; /*0x69c609*/
  if ( v2 && BYTE1(this->m_C) ) /*0x69c610*/
  {
    __3_YAXPAX_Z(v2); /*0x69c616*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69c61e*/
  }
  BYTE1(this->m_C) = 0; /*0x69c621*/
  this->m_8 = 0; /*0x69c624*/
}



// ==== 0x0069C630  _DynamicVectorClass_PAUGlobalPacketType::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_GlobalPacketType::GetItemIndex_0(
        _DynamicVectorClass_PAUGlobalPacketType *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x69c630*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x69c645*/
  else
    return 0; /*0x69c637*/
}



// ==== 0x0069C650  _VectorClass_PAUGlobalPacketType::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_GlobalPacketType::Get(_VectorClass_PAUGlobalPacketType *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x69c65a*/
}



// ==== 0x0069C660  VectorClass_ptr_GlobalPacketType::Destroy_1  this=VectorClass_ptr_GlobalPacketType  sig=csp ====
void __thiscall VectorClass_ptr_GlobalPacketType::Destroy_1(VectorClass_ptr_GlobalPacketType *this)
{
  void *Items; // eax

  Items = this->Items; /*0x69c666*/
  this->Count = 0; /*0x69c669*/
  if ( Items && this->IsAllocated ) /*0x69c670*/
  {
    __3_YAXPAX_Z(Items); /*0x69c676*/
    this->Items = 0; /*0x69c67e*/
  }
  this->IsAllocated = 0; /*0x69c681*/
  this->Capacity = 0; /*0x69c684*/
}



// ==== 0x0069C690  VectorClass_ptr_GlobalPacketType::GetItemIndex_1  this=VectorClass_ptr_GlobalPacketType  sig=csp ====
unsigned int __thiscall VectorClass_ptr_GlobalPacketType::GetItemIndex_1(
        VectorClass_ptr_GlobalPacketType *this,
        int a2)
{
  if ( this->IsInitialized ) /*0x69c690*/
    return (a2 - (unsigned int)this->Items) >> 2; /*0x69c6a5*/
  else
    return 0; /*0x69c697*/
}



// ==== 0x0069C6B0  _VectorClass_PAVPhoneEntryClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PhoneEntryClass::Get(_VectorClass_PAVPhoneEntryClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x69c6ba*/
}



// ==== 0x0069C6C0  _TypeList_W4DiskID::QueryInterface  this=TypeList  sig=csp ====
_DWORD *__thiscall SessionClass::QueryInterface(_TypeList_W4DiskID *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x69c6c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<enum DiskID>::`vftable'; /*0x69c6c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x69c6d0*/
  {
    __3_YAXPAX_Z(v3); /*0x69c6d8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69c6e0*/
  }
  BYTE1(this->m_C) = 0; /*0x69c6eb*/
  this->m_8 = 0; /*0x69c6f1*/
  if ( (a2 & 1) != 0 ) /*0x69c6f8*/
    __3_YAXPAX_Z(this); /*0x69c6fb*/
  return this->__pad_0; /*0x69c705*/
}



// ==== 0x0069C710  _VectorClass_W4DiskID::AddRef  this=VectorClass  sig=csp ====
char __thiscall SessionClass::AddRef(_VectorClass_W4DiskID *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x69c712*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x69c71d*/
  {
    v3 = 0; /*0x69c71f*/
    if ( m_8 <= 0 ) /*0x69c723*/
      return 1; /*0x69c743*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x69c725*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x69c72b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x69c734*/
    {
      ++v3; /*0x69c736*/
      ++v4; /*0x69c737*/
      if ( v3 >= m_8 ) /*0x69c73c*/
        return 1; /*0x69c73c*/
    }
  }
  return 0; /*0x69c73e*/
}



// ==== 0x0069C750  _VectorClass_W4DiskID::addPlayer  this=VectorClass  sig=csp ====
char __thiscall SessionClass::addPlayer(_VectorClass_W4DiskID *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x69c75c*/
  {
    LOBYTE(this->m_C) = 0; /*0x69c766*/
    if ( a3 ) /*0x69c76c*/
      v4 = a3; /*0x69c782*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x69c77e*/
    LOBYTE(this->m_C) = 1; /*0x69c786*/
    if ( v4 ) /*0x69c78a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x69c795*/
      {
        m_8 = this->m_8; /*0x69c79c*/
        if ( a2 < m_8 ) /*0x69c7a1*/
          m_8 = a2; /*0x69c7a3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x69c7a9*/
          ++i; /*0x69c7ae*/
        if ( BYTE1(this->m_C) ) /*0x69c7bb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69c7c6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x69c7ce*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x69c7d7*/
      this->m_8 = a2; /*0x69c7df*/
      BYTE1(this->m_C) = a3 == 0; /*0x69c7e2*/
      return 1; /*0x69c7e8*/
    }
    else
    {
      return 0; /*0x69c78f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_W4DiskID *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x69c7f2*/
    return 1; /*0x69c7f8*/
  }
}



// ==== 0x0069C800  _VectorClass_W4DiskID::removePlayer  this=VectorClass  sig=csp ====
void __thiscall SessionClass::removePlayer(_VectorClass_W4DiskID *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x69c80d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69c813*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69c81b*/
  }
  BYTE1(this->m_C) = 0; /*0x69c81e*/
  this->m_8 = 0; /*0x69c821*/
}



// ==== 0x0069C830  _VectorClass_W4DiskID::findPlayer  this=VectorClass  sig=csp ====
int __thiscall SessionClass::findPlayer(_VectorClass_W4DiskID *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x69c830*/
    return 0; /*0x69c838*/
  m_8 = this->m_8; /*0x69c83e*/
  result = 0; /*0x69c841*/
  if ( m_8 <= 0 ) /*0x69c845*/
    return -1; /*0x69c85c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x69c84b*/
  {
    if ( ++result >= m_8 ) /*0x69c85a*/
      return -1; /*0x69c85a*/
  }
  return result; /*0x69c83a*/
}



// ==== 0x0069C870  _VectorClass_W4DiskID::updatePlayer  this=VectorClass  sig=csp ====
unsigned int __thiscall SessionClass::updatePlayer(_VectorClass_W4DiskID *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x69c870*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x69c885*/
  else
    return 0; /*0x69c877*/
}



// ==== 0x0069C890  _TypeList_W4DiskID::Release  this=TypeList  sig=csp ====
char __thiscall SessionClass::Release(_TypeList_W4DiskID *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x69c89c*/
  {
    LOBYTE(this->m_C) = 0; /*0x69c8a2*/
    if ( a3 ) /*0x69c8a8*/
      v4 = a3; /*0x69c8be*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x69c8ba*/
    LOBYTE(this->m_C) = 1; /*0x69c8c2*/
    if ( !v4 ) /*0x69c8c6*/
      return 0; /*0x69c93a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x69c8c8*/
    {
      m_8 = this->m_8; /*0x69c8cf*/
      if ( a2 < m_8 ) /*0x69c8d4*/
        m_8 = a2; /*0x69c8d6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x69c8dc*/
        ++i; /*0x69c8e1*/
      if ( BYTE1(this->m_C) ) /*0x69c8ee*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69c8f9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x69c901*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x69c90a*/
    this->m_8 = a2; /*0x69c912*/
    BYTE1(this->m_C) = a3 == 0; /*0x69c915*/
  }
  else
  {
    (*(void (__thiscall **)(_TypeList_W4DiskID *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x69c91e*/
  }
  v7 = this->m_8; /*0x69c921*/
  if ( v7 < this->m_10 ) /*0x69c929*/
    this->m_10 = v7; /*0x69c92b*/
  return 1; /*0x69c92e*/
}



// ==== 0x0069C940  _TypeList_W4DiskID::Read  this=TypeList  sig=csp ====
int __thiscall SessionClass::Read(_TypeList_W4DiskID *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x69c940*/
  result = 0; /*0x69c943*/
  if ( m_10 <= 0 ) /*0x69c948*/
    return -1; /*0x69c95f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x69c94e*/
  {
    if ( ++result >= m_10 ) /*0x69c95d*/
      return -1; /*0x69c95d*/
  }
  return result; /*0x69c962*/
}



// ==== 0x0069C970  _VectorClass_VWstring::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_Wstring::AddRef(_VectorClass_VWstring *this, int a2)
{
  int m_8; // eax
  int v4; // esi

  m_8 = this->m_8; /*0x69c97c*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x69c981*/
  {
    v4 = 0; /*0x69c983*/
    if ( m_8 <= 0 ) /*0x69c987*/
      return 1; /*0x69c9b1*/
    while ( !VectorClass_Wstring::SetCapacity( /*0x69c9a2*/
               (VectorClass_Wstring *)(4 * v4 + *(_DWORD *)&this->m_1[3]),
               (const char **)(4 * v4 + *(_DWORD *)(a2 + 4))) )
    {
      if ( ++v4 >= this->m_8 ) /*0x69c9aa*/
        return 1; /*0x69c9aa*/
    }
  }
  return 0; /*0x69c9ac*/
}



// ==== 0x0069C9C0  _VectorClass_VWstring::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_Wstring::Release(_VectorClass_VWstring *this, int a2, _DWORD *a3)
{
  int m_8; // ebp
  int *v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // esi
  _DWORD *v8; // esi
  int i; // esi
  int v11; // ecx
  int v12; // eax
  void *v13; // edx
  ObjectClass *v14; // esi
  int v15; // eax
  int v16; // ebp
  int v17; // [esp+10h] [ebp-4h]
  int v18; // [esp+10h] [ebp-4h]
  void *v19; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x69c9c3*/
  if ( a2 ) /*0x69c9cd*/
  {
    LOBYTE(this->m_C) = 0; /*0x69c9d7*/
    if ( a3 ) /*0x69c9dd*/
    {
      *a3 = a2; /*0x69ca21*/
      v6 = a3 + 1; /*0x69ca23*/
      v8 = a3 + 1; /*0x69ca29*/
      if ( a2 - 1 >= 0 ) /*0x69ca2d*/
      {
        v18 = a2; /*0x69ca30*/
        do /*0x69ca47*/
        {
          unknown_libname_73(v8++); /*0x69ca36*/
          --v18; /*0x69ca43*/
        }
        while ( v18 ); /*0x69ca47*/
      }
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(4 * a2 + 4); /*0x69c9e7*/
      if ( v5 ) /*0x69c9f1*/
      {
        *v5 = a2; /*0x69c9f3*/
        v6 = v5 + 1; /*0x69c9f5*/
        v7 = v5 + 1; /*0x69c9fb*/
        if ( a2 - 1 >= 0 ) /*0x69c9ff*/
        {
          v17 = a2; /*0x69ca02*/
          do /*0x69ca19*/
          {
            unknown_libname_73(v7++); /*0x69ca08*/
            --v17; /*0x69ca15*/
          }
          while ( v17 ); /*0x69ca19*/
        }
      }
      else
      {
        v6 = 0; /*0x69ca1d*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x69ca4b*/
    if ( v6 ) /*0x69ca4f*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x69ca5b*/
      {
        if ( a2 >= this->m_8 ) /*0x69ca67*/
          m_8 = this->m_8; /*0x69ca69*/
        for ( i = 0; i < m_8; ++i ) /*0x69ca6f*/
          String::Reassign((String *)&v6[i], (const char **)(4 * i + *(_DWORD *)&this->m_1[3])); /*0x69ca81*/
        if ( BYTE1(this->m_C) ) /*0x69ca8b*/
        {
          v11 = *(_DWORD *)&this->m_1[3]; /*0x69ca92*/
          if ( v11 ) /*0x69ca97*/
          {
            v12 = *(_DWORD *)(v11 - 4); /*0x69ca99*/
            v13 = (void *)(v11 - 4); /*0x69ca9c*/
            v19 = (void *)(v11 - 4); /*0x69ca9f*/
            v14 = (ObjectClass *)(v11 + 4 * v12); /*0x69caa3*/
            v15 = v12 - 1; /*0x69caa6*/
            if ( v15 >= 0 ) /*0x69caa7*/
            {
              v16 = v15 + 1; /*0x69caa9*/
              do /*0x69cab7*/
              {
                v14 = (ObjectClass *)((char *)v14 - 4); /*0x69caac*/
                DeleteAndZero(v14); /*0x69cab1*/
                --v16; /*0x69cab6*/
              }
              while ( v16 ); /*0x69cab7*/
              v13 = v19; /*0x69cab9*/
            }
            __3_YAXPAX_Z(v13); /*0x69cabe*/
          }
          *(_DWORD *)&this->m_1[3] = 0; /*0x69cac6*/
        }
        m_8 = a2; /*0x69cacd*/
      }
      *(_DWORD *)&this->m_1[3] = v6; /*0x69cadc*/
      this->m_8 = m_8; /*0x69cadf*/
      BYTE1(this->m_C) = a3 == 0; /*0x69cae2*/
      return 1; /*0x69cae8*/
    }
    else
    {
      return 0; /*0x69ca54*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_VWstring *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x69caf3*/
    return 1; /*0x69caf9*/
  }
}



// ==== 0x0069CB00  _VectorClass_VWstring::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_Wstring::ddtor(_VectorClass_VWstring *this)
{
  int v2; // eax
  int v3; // ecx
  void *v4; // ebx
  ObjectClass *v5; // esi
  int v6; // ecx
  int v7; // ebp

  v2 = *(_DWORD *)&this->m_1[3]; /*0x69cb05*/
  if ( v2 && BYTE1(this->m_C) ) /*0x69cb0c*/
  {
    v3 = *(_DWORD *)(v2 - 4); /*0x69cb17*/
    v4 = (void *)(v2 - 4); /*0x69cb1b*/
    v5 = (ObjectClass *)(v2 + 4 * v3); /*0x69cb1f*/
    v6 = v3 - 1; /*0x69cb22*/
    if ( v6 >= 0 ) /*0x69cb23*/
    {
      v7 = v6 + 1; /*0x69cb26*/
      do /*0x69cb34*/
      {
        v5 = (ObjectClass *)((char *)v5 - 4); /*0x69cb29*/
        DeleteAndZero(v5); /*0x69cb2e*/
        --v7; /*0x69cb33*/
      }
      while ( v7 ); /*0x69cb34*/
    }
    __3_YAXPAX_Z(v4); /*0x69cb38*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69cb44*/
  }
  BYTE1(this->m_C) = 0; /*0x69cb47*/
  this->m_8 = 0; /*0x69cb4b*/
}



// ==== 0x0069CB50  _VectorClass_VWstring::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_Wstring::GetSize(_VectorClass_VWstring *this, const char **a2)
{
  int v4; // esi

  if ( !LOBYTE(this->m_C) ) /*0x69cb55*/
    return 0; /*0x69cb5e*/
  v4 = 0; /*0x69cb67*/
  if ( this->m_8 <= 0 ) /*0x69cb6b*/
    return -1; /*0x69cb89*/
  while ( !(unsigned __int8)String::Compare((String *)(*(_DWORD *)&this->m_1[3] + 4 * v4), a2) ) /*0x69cb7f*/
  {
    if ( ++v4 >= this->m_8 ) /*0x69cb87*/
      return -1; /*0x69cb87*/
  }
  return v4; /*0x69cb5c*/
}



// ==== 0x0069CBA0  _VectorClass_VWstring::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_Wstring::GetCapacity(_VectorClass_VWstring *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x69cba0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x69cbb5*/
  else
    return 0; /*0x69cba7*/
}



// ==== 0x0069CBC0  _DynamicVectorClass_VWstring::Release  this=DynamicVector  sig=csp ====
char __thiscall MapFile::Release(_DynamicVectorClass_VWstring *this, int a2, _DWORD *a3)
{
  int m_8; // ebp
  int *v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // edi
  _DWORD *v8; // edi
  int i; // edi
  int *v10; // eax
  int *v11; // edi
  int v12; // eax
  int v14; // [esp+10h] [ebp-4h]
  int v15; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x69cbc3*/
  if ( a2 ) /*0x69cbcd*/
  {
    LOBYTE(this->m_C) = 0; /*0x69cbd7*/
    if ( a3 ) /*0x69cbdd*/
    {
      *a3 = a2; /*0x69cc21*/
      v6 = a3 + 1; /*0x69cc23*/
      v8 = a3 + 1; /*0x69cc29*/
      if ( a2 - 1 >= 0 ) /*0x69cc2d*/
      {
        v15 = a2; /*0x69cc30*/
        do /*0x69cc47*/
        {
          unknown_libname_73(v8++); /*0x69cc36*/
          --v15; /*0x69cc43*/
        }
        while ( v15 ); /*0x69cc47*/
      }
    }
    else
    {
      v5 = (int *)__2_YAPAXI_Z(4 * a2 + 4); /*0x69cbe7*/
      if ( v5 ) /*0x69cbf1*/
      {
        *v5 = a2; /*0x69cbf3*/
        v6 = v5 + 1; /*0x69cbf5*/
        v7 = v5 + 1; /*0x69cbfb*/
        if ( a2 - 1 >= 0 ) /*0x69cbff*/
        {
          v14 = a2; /*0x69cc02*/
          do /*0x69cc19*/
          {
            unknown_libname_73(v7++); /*0x69cc08*/
            --v14; /*0x69cc15*/
          }
          while ( v14 ); /*0x69cc19*/
        }
      }
      else
      {
        v6 = 0; /*0x69cc1d*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x69cc4b*/
    if ( !v6 ) /*0x69cc4f*/
      return 0; /*0x69ccf2*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x69cc55*/
    {
      if ( a2 >= this->m_8 ) /*0x69cc61*/
        m_8 = this->m_8; /*0x69cc63*/
      for ( i = 0; i < m_8; ++i ) /*0x69cc69*/
        String::Reassign((String *)&v6[i], (const char **)(4 * i + *(_DWORD *)&this->m_1[3])); /*0x69cc7b*/
      if ( BYTE1(this->m_C) ) /*0x69cc85*/
      {
        v10 = *(int **)&this->m_1[3]; /*0x69cc8c*/
        if ( v10 ) /*0x69cc91*/
        {
          v11 = v10 - 1; /*0x69cc96*/
          Array::ForEachReverse(v10, 4, *(v10 - 1), (int (__thiscall *)(int))DeleteAndZero); /*0x69cca2*/
          __3_YAXPAX_Z(v11); /*0x69cca8*/
        }
        *(_DWORD *)&this->m_1[3] = 0; /*0x69ccb0*/
      }
      m_8 = a2; /*0x69ccb7*/
    }
    *(_DWORD *)&this->m_1[3] = v6; /*0x69ccc6*/
    this->m_8 = m_8; /*0x69ccc9*/
    BYTE1(this->m_C) = a3 == 0; /*0x69cccc*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_VWstring *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x69ccd5*/
  }
  v12 = this->m_8; /*0x69ccd8*/
  if ( v12 < this->m_10 ) /*0x69cce0*/
    this->m_10 = v12; /*0x69cce2*/
  return 1; /*0x69cce5*/
}



// ==== 0x0069CD00  _DynamicVectorClass_VWstring::Read  this=DynamicVector  sig=csp ====
int __thiscall MapFile::Read(_DynamicVectorClass_VWstring *this, const char **a2)
{
  int v3; // esi

  v3 = 0; /*0x69cd05*/
  if ( this->m_10 <= 0 ) /*0x69cd0c*/
    return -1; /*0x69cd2a*/
  while ( !(unsigned __int8)String::Compare((String *)(*(_DWORD *)&this->m_1[3] + 4 * v3), a2) ) /*0x69cd20*/
  {
    if ( ++v3 >= this->m_10 ) /*0x69cd28*/
      return -1; /*0x69cd28*/
  }
  return v3; /*0x69cd2a*/
}



// ==== 0x0069CD40  _VectorClass_PAVMultiMission::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MultiMission::Add(_VectorClass_PAVMultiMission *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x69cd42*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x69cd4d*/
  {
    v3 = 0; /*0x69cd4f*/
    if ( m_8 <= 0 ) /*0x69cd53*/
      return 1; /*0x69cd73*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x69cd55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x69cd5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x69cd64*/
    {
      ++v3; /*0x69cd66*/
      ++v4; /*0x69cd67*/
      if ( v3 >= m_8 ) /*0x69cd6c*/
        return 1; /*0x69cd6c*/
    }
  }
  return 0; /*0x69cd6e*/
}



// ==== 0x0069CD80  _VectorClass_PAVMultiMission::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MultiMission::Release(_VectorClass_PAVMultiMission *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x69cd8c*/
  {
    LOBYTE(this->m_C) = 0; /*0x69cd96*/
    if ( a3 ) /*0x69cd9c*/
      v4 = a3; /*0x69cdb2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x69cdae*/
    LOBYTE(this->m_C) = 1; /*0x69cdb6*/
    if ( v4 ) /*0x69cdba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x69cdc5*/
      {
        m_8 = this->m_8; /*0x69cdcc*/
        if ( a2 < m_8 ) /*0x69cdd1*/
          m_8 = a2; /*0x69cdd3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x69cdd9*/
          ++i; /*0x69cdde*/
        if ( BYTE1(this->m_C) ) /*0x69cdeb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69cdf6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x69cdfe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x69ce07*/
      this->m_8 = a2; /*0x69ce0f*/
      BYTE1(this->m_C) = a3 == 0; /*0x69ce12*/
      return 1; /*0x69ce18*/
    }
    else
    {
      return 0; /*0x69cdbf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVMultiMission *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x69ce22*/
    return 1; /*0x69ce28*/
  }
}



// ==== 0x0069CE30  _VectorClass_PAVMultiMission::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MultiMission::Remove(_VectorClass_PAVMultiMission *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x69ce3d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69ce43*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69ce4b*/
  }
  BYTE1(this->m_C) = 0; /*0x69ce4e*/
  this->m_8 = 0; /*0x69ce51*/
}



// ==== 0x0069CE60  _VectorClass_PAVMultiMission::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MultiMission::GetSize(_VectorClass_PAVMultiMission *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x69ce60*/
    return 0; /*0x69ce68*/
  m_8 = this->m_8; /*0x69ce6e*/
  result = 0; /*0x69ce71*/
  if ( m_8 <= 0 ) /*0x69ce75*/
    return -1; /*0x69ce8c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x69ce7b*/
  {
    if ( ++result >= m_8 ) /*0x69ce8a*/
      return -1; /*0x69ce8a*/
  }
  return result; /*0x69ce6a*/
}



// ==== 0x0069CEA0  _VectorClass_PAVMultiMission::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MultiMission::GetCapacity(_VectorClass_PAVMultiMission *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x69cea0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x69ceb5*/
  else
    return 0; /*0x69cea7*/
}



// ==== 0x0069CEC0  _DynamicVectorClass_PAVMultiMission::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_GlobalPacketType::SetCapacity(
        _DynamicVectorClass_PAVMultiMission *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x69cecc*/
  {
    LOBYTE(this->m_C) = 0; /*0x69ced2*/
    if ( a3 ) /*0x69ced8*/
      v4 = a3; /*0x69ceee*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x69ceea*/
    LOBYTE(this->m_C) = 1; /*0x69cef2*/
    if ( !v4 ) /*0x69cef6*/
      return 0; /*0x69cf6a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x69cef8*/
    {
      m_8 = this->m_8; /*0x69ceff*/
      if ( a2 < m_8 ) /*0x69cf04*/
        m_8 = a2; /*0x69cf06*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x69cf0c*/
        ++i; /*0x69cf11*/
      if ( BYTE1(this->m_C) ) /*0x69cf1e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69cf29*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x69cf31*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x69cf3a*/
    this->m_8 = a2; /*0x69cf42*/
    BYTE1(this->m_C) = a3 == 0; /*0x69cf45*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVMultiMission *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x69cf4e*/
  }
  v7 = this->m_8; /*0x69cf51*/
  if ( v7 < this->m_10 ) /*0x69cf59*/
    this->m_10 = v7; /*0x69cf5b*/
  return 1; /*0x69cf5e*/
}



// ==== 0x0069CF70  _DynamicVectorClass_PAVMultiMission::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_GlobalPacketType::FindItemIndex(_DynamicVectorClass_PAVMultiMission *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x69cf70*/
  result = 0; /*0x69cf73*/
  if ( m_10 <= 0 ) /*0x69cf78*/
    return -1; /*0x69cf8f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x69cf7e*/
  {
    if ( ++result >= m_10 ) /*0x69cf8d*/
      return -1; /*0x69cf8d*/
  }
  return result; /*0x69cf92*/
}



// ==== 0x0069CFA0  _VectorClass_PAUGlobalPacketType::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_GlobalPacketType::Add(_VectorClass_PAUGlobalPacketType *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x69cfa2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x69cfad*/
  {
    v3 = 0; /*0x69cfaf*/
    if ( m_8 <= 0 ) /*0x69cfb3*/
      return 1; /*0x69cfd3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x69cfb5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x69cfbb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x69cfc4*/
    {
      ++v3; /*0x69cfc6*/
      ++v4; /*0x69cfc7*/
      if ( v3 >= m_8 ) /*0x69cfcc*/
        return 1; /*0x69cfcc*/
    }
  }
  return 0; /*0x69cfce*/
}



// ==== 0x0069CFE0  _VectorClass_PAUGlobalPacketType::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_GlobalPacketType::Release(_VectorClass_PAUGlobalPacketType *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x69cfec*/
  {
    LOBYTE(this->m_C) = 0; /*0x69cff6*/
    if ( a3 ) /*0x69cffc*/
      v4 = a3; /*0x69d012*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x69d00e*/
    LOBYTE(this->m_C) = 1; /*0x69d016*/
    if ( v4 ) /*0x69d01a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x69d025*/
      {
        m_8 = this->m_8; /*0x69d02c*/
        if ( a2 < m_8 ) /*0x69d031*/
          m_8 = a2; /*0x69d033*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x69d039*/
          ++i; /*0x69d03e*/
        if ( BYTE1(this->m_C) ) /*0x69d04b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69d056*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x69d05e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x69d067*/
      this->m_8 = a2; /*0x69d06f*/
      BYTE1(this->m_C) = a3 == 0; /*0x69d072*/
      return 1; /*0x69d078*/
    }
    else
    {
      return 0; /*0x69d01f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUGlobalPacketType *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x69d082*/
    return 1; /*0x69d088*/
  }
}



// ==== 0x0069D090  _VectorClass_PAUGlobalPacketType::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_GlobalPacketType::Remove(_VectorClass_PAUGlobalPacketType *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x69d09d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69d0a3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69d0ab*/
  }
  BYTE1(this->m_C) = 0; /*0x69d0ae*/
  this->m_8 = 0; /*0x69d0b1*/
}



// ==== 0x0069D0C0  _VectorClass_PAUGlobalPacketType::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_GlobalPacketType::GetSize(_VectorClass_PAUGlobalPacketType *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x69d0c0*/
    return 0; /*0x69d0c8*/
  m_8 = this->m_8; /*0x69d0ce*/
  result = 0; /*0x69d0d1*/
  if ( m_8 <= 0 ) /*0x69d0d5*/
    return -1; /*0x69d0ec*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x69d0db*/
  {
    if ( ++result >= m_8 ) /*0x69d0ea*/
      return -1; /*0x69d0ea*/
  }
  return result; /*0x69d0ca*/
}



// ==== 0x0069D100  _VectorClass_PAUGlobalPacketType::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_GlobalPacketType::GetCapacity(_VectorClass_PAUGlobalPacketType *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x69d100*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x69d115*/
  else
    return 0; /*0x69d107*/
}



// ==== 0x0069D120  _DynamicVectorClass_PAUGlobalPacketType::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_GlobalPacketType::SetCapacity_0(
        _DynamicVectorClass_PAUGlobalPacketType *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x69d12c*/
  {
    LOBYTE(this->m_C) = 0; /*0x69d132*/
    if ( a3 ) /*0x69d138*/
      v4 = a3; /*0x69d14e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x69d14a*/
    LOBYTE(this->m_C) = 1; /*0x69d152*/
    if ( !v4 ) /*0x69d156*/
      return 0; /*0x69d1ca*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x69d158*/
    {
      m_8 = this->m_8; /*0x69d15f*/
      if ( a2 < m_8 ) /*0x69d164*/
        m_8 = a2; /*0x69d166*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x69d16c*/
        ++i; /*0x69d171*/
      if ( BYTE1(this->m_C) ) /*0x69d17e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69d189*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x69d191*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x69d19a*/
    this->m_8 = a2; /*0x69d1a2*/
    BYTE1(this->m_C) = a3 == 0; /*0x69d1a5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUGlobalPacketType *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x69d1ae*/
  }
  v7 = this->m_8; /*0x69d1b1*/
  if ( v7 < this->m_10 ) /*0x69d1b9*/
    this->m_10 = v7; /*0x69d1bb*/
  return 1; /*0x69d1be*/
}



// ==== 0x0069D1D0  _DynamicVectorClass_PAUGlobalPacketType::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_GlobalPacketType::FindItemIndex_0(
        _DynamicVectorClass_PAUGlobalPacketType *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x69d1d0*/
  result = 0; /*0x69d1d3*/
  if ( m_10 <= 0 ) /*0x69d1d8*/
    return -1; /*0x69d1ef*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x69d1de*/
  {
    if ( ++result >= m_10 ) /*0x69d1ed*/
      return -1; /*0x69d1ed*/
  }
  return result; /*0x69d1f2*/
}



// ==== 0x0069D200  _VectorClass_PAVPhoneEntryClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PhoneEntryClass::Add(_VectorClass_PAVPhoneEntryClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x69d202*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x69d20d*/
  {
    v3 = 0; /*0x69d20f*/
    if ( m_8 <= 0 ) /*0x69d213*/
      return 1; /*0x69d233*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x69d215*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x69d21b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x69d224*/
    {
      ++v3; /*0x69d226*/
      ++v4; /*0x69d227*/
      if ( v3 >= m_8 ) /*0x69d22c*/
        return 1; /*0x69d22c*/
    }
  }
  return 0; /*0x69d22e*/
}



// ==== 0x0069D240  _VectorClass_PAVPhoneEntryClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PhoneEntryClass::Release(_VectorClass_PAVPhoneEntryClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x69d24c*/
  {
    LOBYTE(this->m_C) = 0; /*0x69d256*/
    if ( a3 ) /*0x69d25c*/
      v4 = a3; /*0x69d272*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x69d26e*/
    LOBYTE(this->m_C) = 1; /*0x69d276*/
    if ( v4 ) /*0x69d27a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x69d285*/
      {
        m_8 = this->m_8; /*0x69d28c*/
        if ( a2 < m_8 ) /*0x69d291*/
          m_8 = a2; /*0x69d293*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x69d299*/
          ++i; /*0x69d29e*/
        if ( BYTE1(this->m_C) ) /*0x69d2ab*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69d2b6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x69d2be*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x69d2c7*/
      this->m_8 = a2; /*0x69d2cf*/
      BYTE1(this->m_C) = a3 == 0; /*0x69d2d2*/
      return 1; /*0x69d2d8*/
    }
    else
    {
      return 0; /*0x69d27f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVPhoneEntryClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x69d2e2*/
    return 1; /*0x69d2e8*/
  }
}



// ==== 0x0069D2F0  _VectorClass_PAVPhoneEntryClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_PhoneEntryClass::Remove(_VectorClass_PAVPhoneEntryClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x69d2fd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x69d303*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69d30b*/
  }
  BYTE1(this->m_C) = 0; /*0x69d30e*/
  this->m_8 = 0; /*0x69d311*/
}



// ==== 0x0069D320  _VectorClass_PAVPhoneEntryClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PhoneEntryClass::GetSize(_VectorClass_PAVPhoneEntryClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x69d320*/
    return 0; /*0x69d328*/
  m_8 = this->m_8; /*0x69d32e*/
  result = 0; /*0x69d331*/
  if ( m_8 <= 0 ) /*0x69d335*/
    return -1; /*0x69d34c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x69d33b*/
  {
    if ( ++result >= m_8 ) /*0x69d34a*/
      return -1; /*0x69d34a*/
  }
  return result; /*0x69d32a*/
}



// ==== 0x0069D360  _VectorClass_PAVPhoneEntryClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_PhoneEntryClass::GetCapacity(_VectorClass_PAVPhoneEntryClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x69d360*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x69d375*/
  else
    return 0; /*0x69d367*/
}



// ==== 0x0069D380  VectorClass_ptr_GlobalPacketType::SetCapacity_1  this=VectorClass_ptr_GlobalPacketType  sig=csp ====
char __thiscall VectorClass_ptr_GlobalPacketType::SetCapacity_1(
        VectorClass_ptr_GlobalPacketType *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  void *Capacity; // ecx
  int i; // eax
  void *v7; // eax

  if ( a2 ) /*0x69d38c*/
  {
    this->IsInitialized = 0; /*0x69d392*/
    if ( a3 ) /*0x69d398*/
      v4 = a3; /*0x69d3ae*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x69d3aa*/
    this->IsInitialized = 1; /*0x69d3b2*/
    if ( !v4 ) /*0x69d3b6*/
      return 0; /*0x69d42a*/
    if ( this->Items ) /*0x69d3b8*/
    {
      Capacity = this->Capacity; /*0x69d3bf*/
      if ( a2 < (int)Capacity ) /*0x69d3c4*/
        Capacity = (void *)a2; /*0x69d3c6*/
      for ( i = 0; i < (int)Capacity; v4[i - 1] = *((_DWORD *)this->Items + i - 1) ) /*0x69d3cc*/
        ++i; /*0x69d3d1*/
      if ( this->IsAllocated ) /*0x69d3de*/
      {
        __3_YAXPAX_Z(this->Items); /*0x69d3e9*/
        this->Items = 0; /*0x69d3f1*/
      }
    }
    this->Items = v4; /*0x69d3fa*/
    this->Capacity = (void *)a2; /*0x69d402*/
    this->IsAllocated = a3 == 0; /*0x69d405*/
  }
  else
  {
    (*(void (__thiscall **)(VectorClass_ptr_GlobalPacketType *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x69d40e*/
  }
  v7 = this->Capacity; /*0x69d411*/
  if ( (int)v7 < (int)this->Count ) /*0x69d419*/
    this->Count = v7; /*0x69d41b*/
  return 1; /*0x69d41e*/
}



// ==== 0x0069D430  VectorClass_ptr_GlobalPacketType::FindItemIndex_1  this=VectorClass_ptr_GlobalPacketType  sig=csp ====
int __thiscall VectorClass_ptr_GlobalPacketType::FindItemIndex_1(VectorClass_ptr_GlobalPacketType *this, _DWORD *a2)
{
  void *Count; // edx
  int result; // eax
  _DWORD *i; // ecx

  Count = this->Count; /*0x69d430*/
  result = 0; /*0x69d433*/
  if ( (int)Count <= 0 ) /*0x69d438*/
    return -1; /*0x69d44f*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x69d43e*/
  {
    if ( ++result >= (int)Count ) /*0x69d44d*/
      return -1; /*0x69d44d*/
  }
  return result; /*0x69d452*/
}



// ==== 0x0069D460  _VectorClass_W4DiskID::validateGame  this=VectorClass  sig=csp ====
_DWORD *__thiscall SessionClass::validateGame(_VectorClass_W4DiskID *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x69d463*/
  *(_DWORD *)this->__pad_0 = &VectorClass<enum DiskID>::`vftable'; /*0x69d466*/
  if ( v3 && BYTE1(this->m_C) ) /*0x69d470*/
  {
    __3_YAXPAX_Z(v3); /*0x69d478*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69d480*/
  }
  BYTE1(this->m_C) = 0; /*0x69d48b*/
  this->m_8 = 0; /*0x69d491*/
  if ( (a2 & 1) != 0 ) /*0x69d498*/
    __3_YAXPAX_Z(this); /*0x69d49b*/
  return this->__pad_0; /*0x69d4a5*/
}



// ==== 0x0069D4B0  _VectorClass_VWstring::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_Wstring::QueryInterface(_VectorClass_VWstring *this, char a2)
{
  int v3; // eax
  int v4; // ecx
  void *v5; // ebx
  ObjectClass *v6; // esi
  int v7; // ecx
  int v8; // ebp

  v3 = *(_DWORD *)&this->m_1[3]; /*0x69d4b3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<Wstring>::`vftable'; /*0x69d4b6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x69d4c0*/
  {
    v4 = *(_DWORD *)(v3 - 4); /*0x69d4cb*/
    v5 = (void *)(v3 - 4); /*0x69d4cf*/
    v6 = (ObjectClass *)(v3 + 4 * v4); /*0x69d4d3*/
    v7 = v4 - 1; /*0x69d4d6*/
    if ( v7 >= 0 ) /*0x69d4d7*/
    {
      v8 = v7 + 1; /*0x69d4da*/
      do /*0x69d4e8*/
      {
        v6 = (ObjectClass *)((char *)v6 - 4); /*0x69d4dd*/
        DeleteAndZero(v6); /*0x69d4e2*/
        --v8; /*0x69d4e7*/
      }
      while ( v8 ); /*0x69d4e8*/
    }
    __3_YAXPAX_Z(v5); /*0x69d4ec*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69d4f6*/
  }
  BYTE1(this->m_C) = 0; /*0x69d501*/
  this->m_8 = 0; /*0x69d507*/
  if ( (a2 & 1) != 0 ) /*0x69d50e*/
    __3_YAXPAX_Z(this); /*0x69d511*/
  return this->__pad_0; /*0x69d51b*/
}



// ==== 0x0069D520  _DynamicVectorClass_VWstring::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MapFile::QueryInterface(_DynamicVectorClass_VWstring *this, char a2)
{
  int v3; // eax
  int v4; // ecx
  void *v5; // ebx
  ObjectClass *v6; // esi
  int v7; // ecx
  int v8; // ebp

  v3 = *(_DWORD *)&this->m_1[3]; /*0x69d523*/
  *(_DWORD *)this->__pad_0 = &VectorClass<Wstring>::`vftable'; /*0x69d526*/
  if ( v3 && BYTE1(this->m_C) ) /*0x69d530*/
  {
    v4 = *(_DWORD *)(v3 - 4); /*0x69d53b*/
    v5 = (void *)(v3 - 4); /*0x69d53f*/
    v6 = (ObjectClass *)(v3 + 4 * v4); /*0x69d543*/
    v7 = v4 - 1; /*0x69d546*/
    if ( v7 >= 0 ) /*0x69d547*/
    {
      v8 = v7 + 1; /*0x69d54a*/
      do /*0x69d558*/
      {
        v6 = (ObjectClass *)((char *)v6 - 4); /*0x69d54d*/
        DeleteAndZero(v6); /*0x69d552*/
        --v8; /*0x69d557*/
      }
      while ( v8 ); /*0x69d558*/
    }
    __3_YAXPAX_Z(v5); /*0x69d55c*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69d566*/
  }
  BYTE1(this->m_C) = 0; /*0x69d571*/
  this->m_8 = 0; /*0x69d577*/
  if ( (a2 & 1) != 0 ) /*0x69d57e*/
    __3_YAXPAX_Z(this); /*0x69d581*/
  return this->__pad_0; /*0x69d58b*/
}



// ==== 0x0069D590  _VectorClass_PAVMultiMission::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_MultiMission::QueryInterface(_VectorClass_PAVMultiMission *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x69d593*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MultiMission *>::`vftable'; /*0x69d596*/
  if ( v3 && BYTE1(this->m_C) ) /*0x69d5a0*/
  {
    __3_YAXPAX_Z(v3); /*0x69d5a8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69d5b0*/
  }
  BYTE1(this->m_C) = 0; /*0x69d5bb*/
  this->m_8 = 0; /*0x69d5c1*/
  if ( (a2 & 1) != 0 ) /*0x69d5c8*/
    __3_YAXPAX_Z(this); /*0x69d5cb*/
  return this->__pad_0; /*0x69d5d5*/
}



// ==== 0x0069D5E0  _DynamicVectorClass_PAVMultiMission::Constructor_VectorClass_MultiMission___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_GlobalPacketType::Constructor_VectorClass_MultiMission___(
        _DynamicVectorClass_PAVMultiMission *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x69d5e3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MultiMission *>::`vftable'; /*0x69d5e6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x69d5f0*/
  {
    __3_YAXPAX_Z(v3); /*0x69d5f8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69d600*/
  }
  BYTE1(this->m_C) = 0; /*0x69d60b*/
  this->m_8 = 0; /*0x69d611*/
  if ( (a2 & 1) != 0 ) /*0x69d618*/
    __3_YAXPAX_Z(this); /*0x69d61b*/
  return this->__pad_0; /*0x69d625*/
}



// ==== 0x0069D630  _VectorClass_PAUGlobalPacketType::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_GlobalPacketType::QueryInterface(_VectorClass_PAUGlobalPacketType *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x69d633*/
  *(_DWORD *)this->__pad_0 = &VectorClass<GlobalPacketType *>::`vftable'; /*0x69d636*/
  if ( v3 && BYTE1(this->m_C) ) /*0x69d640*/
  {
    __3_YAXPAX_Z(v3); /*0x69d648*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69d650*/
  }
  BYTE1(this->m_C) = 0; /*0x69d65b*/
  this->m_8 = 0; /*0x69d661*/
  if ( (a2 & 1) != 0 ) /*0x69d668*/
    __3_YAXPAX_Z(this); /*0x69d66b*/
  return this->__pad_0; /*0x69d675*/
}



// ==== 0x0069D680  _DynamicVectorClass_PAUGlobalPacketType::Constructor_VectorClass_GlobalPacketType___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_GlobalPacketType::Constructor_VectorClass_GlobalPacketType___(
        _DynamicVectorClass_PAUGlobalPacketType *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x69d683*/
  *(_DWORD *)this->__pad_0 = &VectorClass<GlobalPacketType *>::`vftable'; /*0x69d686*/
  if ( v3 && BYTE1(this->m_C) ) /*0x69d690*/
  {
    __3_YAXPAX_Z(v3); /*0x69d698*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69d6a0*/
  }
  BYTE1(this->m_C) = 0; /*0x69d6ab*/
  this->m_8 = 0; /*0x69d6b1*/
  if ( (a2 & 1) != 0 ) /*0x69d6b8*/
    __3_YAXPAX_Z(this); /*0x69d6bb*/
  return this->__pad_0; /*0x69d6c5*/
}



// ==== 0x0069D6D0  _VectorClass_PAVPhoneEntryClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_PhoneEntryClass::QueryInterface(_VectorClass_PAVPhoneEntryClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x69d6d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<PhoneEntryClass *>::`vftable'; /*0x69d6d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x69d6e0*/
  {
    __3_YAXPAX_Z(v3); /*0x69d6e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x69d6f0*/
  }
  BYTE1(this->m_C) = 0; /*0x69d6fb*/
  this->m_8 = 0; /*0x69d701*/
  if ( (a2 & 1) != 0 ) /*0x69d708*/
    __3_YAXPAX_Z(this); /*0x69d70b*/
  return this->__pad_0; /*0x69d715*/
}



// ==== 0x0069D720  VectorClass_ptr_GlobalPacketType::loc_69D720  this=VectorClass_ptr_GlobalPacketType  sig=ida-proto ====
_DWORD *__thiscall VectorClass_ptr_GlobalPacketType::loc_69D720(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x69d723*/
  *Block = &g_var_ad296c; /*0x69d726*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x69d730*/
  {
    __3_YAXPAX_Z(v3); /*0x69d738*/
    *(Block + 1) = 0; /*0x69d740*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x69d74b*/
  *(Block + 2) = 0; /*0x69d751*/
  if ( (a2 & 1) != 0 ) /*0x69d758*/
    __3_YAXPAX_Z(Block); /*0x69d75b*/
  return Block; /*0x69d765*/
}


// ==== 0x0069D770  MapFile::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall MapFile::Constructor(MapFile *this, int a2, int a3)
{
  this->MapFile_field_0x04 = 0; /*0x69d77b*/
  this->MapFile_field_0x08 = a2; /*0x69d77e*/
  LOBYTE(this->MapFile_field_0x0C) = 1; /*0x69d781*/
  BYTE1(this->MapFile_field_0x0C) = 0; /*0x69d785*/
  *(_DWORD *)this->__pad_0 = &VectorClass<enum DiskID>::`vftable'; /*0x69d788*/
  if ( a2 ) /*0x69d78e*/
  {
    if ( a3 ) /*0x69d796*/
    {
      this->MapFile_field_0x04 = a3; /*0x69d798*/
      return this->__pad_0; /*0x69d79e*/
    }
    this->MapFile_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x69d7ad*/
    BYTE1(this->MapFile_field_0x0C) = 1; /*0x69d7b0*/
  }
  return this->__pad_0; /*0x69d79d*/
}



// ==== 0x0069D7C0  VectorClass::WstringConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::WstringConstructor(VectorClass *this, int a2, _DWORD *a3)
{
  int v3; // esi
  _DWORD *v5; // ebp
  int *v7; // eax
  void *v8; // ebx
  _DWORD *v9; // ebp

  v3 = a2; /*0x69d7c3*/
  this->Items = 0; /*0x69d7cc*/
  this->Capacity = a2; /*0x69d7d3*/
  this->IsInitialized = 1; /*0x69d7d6*/
  this->IsAllocated = 0; /*0x69d7da*/
  this->vtable0 = &VectorClass<Wstring>::`vftable'; /*0x69d7de*/
  if ( !a2 ) /*0x69d7e4*/
    return &this->vtable0; /*0x69d7e4*/
  if ( !a3 ) /*0x69d7ec*/
  {
    v7 = (int *)__2_YAPAXI_Z(4 * a2 + 4); /*0x69d820*/
    if ( v7 ) /*0x69d82a*/
    {
      *v7 = a2; /*0x69d82c*/
      v8 = v7 + 1; /*0x69d82e*/
      v9 = v7 + 1; /*0x69d834*/
      if ( a2 - 1 >= 0 ) /*0x69d838*/
      {
        do /*0x69d848*/
        {
          unknown_libname_73(v9++); /*0x69d83f*/
          --v3; /*0x69d847*/
        }
        while ( v3 ); /*0x69d848*/
        this->Items = v8; /*0x69d84a*/
        this->IsAllocated = 1; /*0x69d84d*/
        return &this->vtable0; /*0x69d857*/
      }
    }
    else
    {
      v8 = 0; /*0x69d85a*/
    }
    this->Items = v8; /*0x69d85c*/
    this->IsAllocated = 1; /*0x69d85f*/
    return &this->vtable0; /*0x69d863*/
  }
  *a3 = a2; /*0x69d7ee*/
  v5 = a3 + 1; /*0x69d7f6*/
  if ( a2 - 1 >= 0 ) /*0x69d7fa*/
  {
    do /*0x69d80a*/
    {
      unknown_libname_73(v5++); /*0x69d801*/
      --v3; /*0x69d809*/
    }
    while ( v3 ); /*0x69d80a*/
  }
  this->Items = a3 + 1; /*0x69d80c*/
  return &this->vtable0; /*0x69d811*/
}



// ==== 0x0069D870  VectorClass::ParseAndApplyAlliances_Parse  this=VectorClass  sig=csp ====
_DWORD *__thiscall ParseAndApplyAlliances_Parse(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x69d87b*/
  this->Capacity = a2; /*0x69d87e*/
  this->IsInitialized = 1; /*0x69d881*/
  this->IsAllocated = 0; /*0x69d885*/
  this->vtable0 = &VectorClass<HouseClass *>::`vftable'; /*0x69d888*/
  if ( a2 ) /*0x69d88e*/
  {
    if ( a3 ) /*0x69d896*/
    {
      this->Items = (void *)a3; /*0x69d898*/
      return &this->vtable0; /*0x69d89e*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x69d8ad*/
    this->IsAllocated = 1; /*0x69d8b0*/
  }
  return &this->vtable0; /*0x69d89d*/
}



// ==== 0x0069D8C0  SHA1::ProcessBlock  this=SHA1  sig=csp ====
int *__thiscall SHA1::ProcessBlock(SHA1 *this, const void **a2, int *a3)
{
  int *result; // eax
  int v5; // ecx
  int v6; // edx
  unsigned int v7; // eax
  int v8; // eax

  result = a3; /*0x69d8c0*/
  v5 = *a3; /*0x69d8c8*/
  if ( *a3 ) /*0x69d8c8*/
  {
    if ( *a2 ) /*0x69d8d3*/
    {
      v6 = this->q00C; /*0x69d8da*/
      if ( v6 || v5 < 64 ) /*0x69d8e4*/
      {
        v7 = 64 - v6; /*0x69d8eb*/
        if ( v5 < 64 - v6 ) /*0x69d8ef*/
          v7 = *a3; /*0x69d8f1*/
        qmemcpy((char *)this + v6 + 52, *a2, v7); /*0x69d8ff*/
        *a2 = (char *)*a2 + v7; /*0x69d911*/
        this->q00C += v7; /*0x69d91a*/
        *a3 -= v7; /*0x69d926*/
        result = (int *)this->q00C; /*0x69d928*/
        if ( result == (int *)64 ) /*0x69d92d*/
        {
          SHA1::Transform((int *)this + 13, (unsigned int *)this + 6); /*0x69d939*/
          v8 = *((_DWORD *)this + 11); /*0x69d93e*/
          this->q00C = 0; /*0x69d941*/
          result = (int *)(v8 + 64); /*0x69d948*/
          *((_DWORD *)this + 11) = result; /*0x69d94a*/
        }
      }
    }
  }
  return result; /*0x69d94d*/
}



// ==== 0x0069D960  SHA1::Process  this=SHA1  sig=csp ====
int __thiscall SHA1::Process(SHA1 *this, int a2, int a3)
{
  int result; // eax
  int *v5; // edi
  int v6; // ebx

  this->__pad_0[0] = 0; /*0x69d96f*/
  SHA1::ProcessBlock(this, (const void **)&a2, &a3); /*0x69d972*/
  result = a3; /*0x69d977*/
  if ( a3 ) /*0x69d97d*/
  {
    v5 = (int *)a2; /*0x69d984*/
    if ( a3 / 64 > 0 ) /*0x69d98f*/
    {
      v6 = a3 / 64; /*0x69d996*/
      do /*0x69d9bb*/
      {
        SHA1::Transform(v5, (unsigned int *)this + 6); /*0x69d99c*/
        v5 += 16; /*0x69d9ab*/
        *((_DWORD *)this + 11) += 64; /*0x69d9ad*/
        --v6; /*0x69d9b6*/
        a3 -= 64; /*0x69d9b7*/
      }
      while ( v6 ); /*0x69d9bb*/
    }
    a2 = (int)v5; /*0x69d9cb*/
    return (int)SHA1::ProcessBlock(this, (const void **)&a2, &a3); /*0x69d9cf*/
  }
  return result; /*0x69d9d5*/
}



// ==== 0x0069D9E0  SHA1::Compute  this=SHA1  sig=csp ====
int __thiscall SHA1::Compute(SHA1 *this, char *a2)
{
  int v3; // edx
  int v4; // ebx
  unsigned int v5; // ebx
  int v6; // edx
  unsigned __int16 v7; // cx
  int *p_SHA1_field_0x04; // ecx
  int v9; // esi
  unsigned int v10; // eax
  unsigned int v12[5]; // [esp+14h] [ebp-54h] BYREF
  int v13[16]; // [esp+28h] [ebp-40h] BYREF

  if ( this->__pad_0[0] ) /*0x69d9e9*/
    qmemcpy(a2, &this->SHA1_field_0x04, 0x14u); /*0x69d9fb*/
  v3 = this->q00C; /*0x69d9fd*/
  v4 = *((_DWORD *)this + 11); /*0x69da00*/
  qmemcpy(v13, (char *)this + 52, sizeof(v13)); /*0x69da14*/
  v5 = v3 + v4; /*0x69da18*/
  *((_BYTE *)v13 + v3) = 0x80; /*0x69da29*/
  qmemcpy(v12, this + 1, sizeof(v12)); /*0x69da2e*/
  if ( 64 - v3 >= 9 ) /*0x69da30*/
  {
    v6 = v3 + 1; /*0x69da6a*/
  }
  else
  {
    if ( v3 + 1 < 64 ) /*0x69da38*/
      memset((char *)v13 + v3 + 1, 0, 63 - v3); /*0x69da4c*/
    SHA1::Transform(v13, v12); /*0x69da61*/
    v6 = 0; /*0x69da66*/
  }
  memset((char *)v13 + v6, 0, 64 - v6); /*0x69da7d*/
  LOBYTE(v7) = (8 * v5) >> 24; /*0x69da99*/
  HIBYTE(v7) = v5 >> 13; /*0x69da9e*/
  v13[15] = (v5 << 27) | (v5 << 11) & 0xFF0000 | v7; /*0x69dab8*/
  SHA1::Transform(v13, v12); /*0x69dac3*/
  qmemcpy(&this->SHA1_field_0x04, v12, 0x14u); /*0x69dad6*/
  p_SHA1_field_0x04 = &this->SHA1_field_0x04; /*0x69dad8*/
  v9 = 5; /*0x69dada*/
  do /*0x69db0b*/
  {
    v10 = *p_SHA1_field_0x04++; /*0x69dadf*/
    --v9; /*0x69db07*/
    *(p_SHA1_field_0x04 - 1) = ((v10 & 0xFF00 | (v10 << 16)) << 8) | ((HIWORD(v10) | v10 & 0xFF0000) >> 8); /*0x69db08*/
  }
  while ( v9 ); /*0x69db0b*/
  this->__pad_0[0] = 1; /*0x69db18*/
  qmemcpy(a2, &this->SHA1_field_0x04, 0x14u); /*0x69db1c*/
  return 20; /*0x69db1e*/
}



// ==== 0x0069DB30  SHA1::Transform  this=SHA1  sig=csp ====
int __stdcall SHA1::Transform(int *a1, unsigned int *a2)
{
  int *v2; // ecx
  int v3; // esi
  int v4; // eax
  int v5; // edi
  int *v6; // ecx
  int v7; // edx
  int v8; // esi
  int v9; // ebp
  int v10; // eax
  int v11; // ebx
  unsigned int v12; // edx
  int v13; // edi
  int v14; // esi
  unsigned int v15; // ebp
  int v16; // ecx
  int v17; // ecx
  int v18; // ebx
  int v19; // eax
  unsigned int v20; // eax
  bool v21; // cf
  unsigned int v22; // ebp
  unsigned int v23; // edx
  unsigned int v24; // ebx
  unsigned int v25; // eax
  unsigned int v26; // ebx
  int v27; // edx
  int result; // eax
  _DWORD *v29; // [esp+10h] [ebp-160h]
  int v30; // [esp+14h] [ebp-15Ch]
  int v31; // [esp+18h] [ebp-158h]
  _DWORD v32[5]; // [esp+1Ch] [ebp-154h] BYREF
  _BYTE v33[8]; // [esp+30h] [ebp-140h] BYREF
  char v34; // [esp+38h] [ebp-138h] BYREF

  v2 = a1; /*0x69db30*/
  v3 = 16; /*0x69db44*/
  do /*0x69db76*/
  {
    v4 = *v2++; /*0x69db49*/
    v5 = HIBYTE(v4) | ((v4 & 0xFF00 | (v4 << 16)) << 8); /*0x69db67*/
    LOBYTE(v4) = 0; /*0x69db69*/
    BYTE1(v4) = BYTE2(v4); /*0x69db6b*/
    --v3; /*0x69db71*/
    *(int *)((char *)v2 + v33 - (_BYTE *)a1 - 4) = (unsigned __int16)v4 | v5; /*0x69db72*/
  }
  while ( v3 ); /*0x69db76*/
  v6 = (int *)&v34; /*0x69db78*/
  v7 = 64; /*0x69db7c*/
  do /*0x69dba2*/
  {
    v8 = *(v6 - 2); /*0x69db87*/
    v9 = *v6; /*0x69db8a*/
    v10 = v6[6] ^ v6[11]; /*0x69db8c*/
    ++v6; /*0x69db8e*/
    --v7; /*0x69db9e*/
    v6[13] = (2 * (v9 ^ v8 ^ v10)) | ((v9 ^ v8 ^ (unsigned int)v10) >> 31); /*0x69db9f*/
  }
  while ( v7 ); /*0x69dba2*/
  v11 = 0; /*0x69dbb4*/
  qmemcpy(v32, a2, sizeof(v32)); /*0x69dbb6*/
  v12 = v32[1]; /*0x69dbb8*/
  v13 = v32[2]; /*0x69dbbc*/
  v14 = v32[3]; /*0x69dbc0*/
  v15 = v32[0]; /*0x69dbc4*/
  v31 = 0; /*0x69dbcc*/
  v29 = v33; /*0x69dbd0*/
  do
  {
    if ( v11 >= 20 ) /*0x69dbd7*/
    {
      if ( v11 >= 40 && v11 < 60 ) /*0x69dbe9*/
      {
        v17 = v13 & v12 | v14 & (v13 | v12); /*0x69dbf5*/
        goto LABEL_13; /*0x69dbf7*/
      }
      v16 = v13 ^ v12; /*0x69dbfb*/
    }
    else
    {
      v16 = v12 & (v14 ^ v13); /*0x69dbdd*/
    }
    v17 = v14 ^ v16; /*0x69dbfd*/
LABEL_13:
    if ( v11 >= 20 )
    {
      if ( v11 >= 40 )
        v30 = v11 >= 60 ? -899497514 : -1894007588;
      else
        v30 = 1859775393; /*0x69dc13*/
    }
    else
    {
      v30 = 1518500249; /*0x69dc04*/
    }
    v18 = v32[4]; /*0x69dc4c*/
    v19 = v17 + v30 + *v29 + ((32 * v15) | (v15 >> 27)); /*0x69dc50*/
    v32[4] = v14; /*0x69dc5a*/
    v20 = v18 + v19; /*0x69dc60*/
    v14 = v13; /*0x69dc66*/
    v13 = (v12 >> 2) | (v12 << 30); /*0x69dc68*/
    v11 = v31 + 1; /*0x69dc6e*/
    v12 = v15; /*0x69dc72*/
    v21 = (unsigned int)(v31 + 1) < 0x50; /*0x69dc74*/
    v15 = v20; /*0x69dc77*/
    ++v31; /*0x69dc79*/
    ++v29; /*0x69dc7d*/
  }
  while ( v21 );
  v22 = v12 + a2[1]; /*0x69dc93*/
  v23 = a2[3]; /*0x69dc95*/
  v24 = v20 + *a2; /*0x69dc98*/
  v25 = a2[4]; /*0x69dc9a*/
  *a2 = v24; /*0x69dc9d*/
  v26 = v13 + a2[2]; /*0x69dca4*/
  a2[3] = v14 + v23; /*0x69dca6*/
  v27 = v32[4]; /*0x69dca9*/
  a2[1] = v22; /*0x69dcae*/
  result = v27 + v25; /*0x69dcb1*/
  a2[2] = v26; /*0x69dcb4*/
  a2[4] = result; /*0x69dcb8*/
  return result; /*0x69dcad*/
}



// ==== 0x0069DCD0  sub_69DCD0  this=-  sig=ida-proto ====
int sub_69DCD0()
{
  dword_B07790 = 0; /*0x69dcd2*/
  dword_B07794 = 0; /*0x69dcd7*/
  dword_B07798 = 0; /*0x69dcdc*/
  dword_B0779C = 0; /*0x69dce1*/
  return 0; /*0x69dce6*/
}



// ==== 0x0069DCF0  ShapeButtonClass::Init  this=ShapeButtonClass  sig=csp ====
_BYTE *__thiscall ShapeButtonClass::Init(ShapeButtonClass *this)
{
  ToggleClass::Construct((int)this, 0, 0, 0, 0, 0); /*0x69dcfb*/
  *((_BYTE *)this + 52) = 0; /*0x69dd00*/
  *((_DWORD *)this + 14) = 0; /*0x69dd03*/
  *((_DWORD *)this + 15) = 0; /*0x69dd06*/
  *((_BYTE *)this + 64) = 0; /*0x69dd09*/
  *((_DWORD *)this + 17) = 0; /*0x69dd0c*/
  *((_DWORD *)this + 18) = 0; /*0x69dd0f*/
  *((_BYTE *)this + 76) = 0; /*0x69dd12*/
  *((_DWORD *)this + 20) = *(_DWORD *)&stru_87F5F0.__pad_58[124]; /*0x69dd1a*/
  *((_BYTE *)this + 85) = 0; /*0x69dd1d*/
  *((_BYTE *)this + 92) = 0; /*0x69dd20*/
  *(_DWORD *)this->__pad_0 = &ShapeButtonClass::`vftable'; /*0x69dd23*/
  return this->__pad_0; /*0x69dd2b*/
}



// ==== 0x0069DD30  ShapeButtonClass::Constructor  this=ShapeButtonClass  sig=csp ====
_BYTE *__thiscall ShapeButtonClass::Constructor(
        ShapeButtonClass *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8)
{
  ToggleClass::Construct((int)this, a2, a4, a5, 0, 0); /*0x69dd49*/
  *((_BYTE *)this + 52) = 0; /*0x69dd52*/
  *((_DWORD *)this + 14) = 0; /*0x69dd55*/
  *((_BYTE *)this + 64) = 0; /*0x69dd58*/
  *((_DWORD *)this + 17) = 0; /*0x69dd5b*/
  *((_DWORD *)this + 18) = 0; /*0x69dd5e*/
  *((_BYTE *)this + 76) = 0; /*0x69dd61*/
  *((_DWORD *)this + 20) = *(_DWORD *)&stru_87F5F0.__pad_58[124]; /*0x69dd69*/
  *((_BYTE *)this + 85) = a8; /*0x69dd72*/
  *((_BYTE *)this + 92) = 0; /*0x69dd75*/
  *(_DWORD *)this->__pad_0 = &ShapeButtonClass::`vftable'; /*0x69dd78*/
  *((_DWORD *)this + 22) = a3; /*0x69dd7e*/
  if ( a3 ) /*0x69dd81*/
  {
    *((_DWORD *)this + 5) = *(__int16 *)(a3 + 2); /*0x69dd87*/
    *((_DWORD *)this + 6) = *(__int16 *)(a3 + 4); /*0x69dd8e*/
  }
  else
  {
    *((_DWORD *)this + 5) = 0; /*0x69dd93*/
    *((_DWORD *)this + 6) = 0; /*0x69dd96*/
  }
  if ( a6 ) /*0x69dd9f*/
    *((_DWORD *)this + 5) = a6; /*0x69dda1*/
  if ( a7 ) /*0x69ddaa*/
    *((_DWORD *)this + 6) = a7; /*0x69ddac*/
  return this->__pad_0; /*0x69ddb1*/
}



// ==== 0x0069DDC0  ShapeButtonClass::Destructor  this=ShapeButtonClass  sig=csp ====
int __thiscall ShapeButtonClass::Destructor(int this)
{
  char v2; // al

  v2 = *(_BYTE *)(this + 92); /*0x69ddc6*/
  *(_DWORD *)this = &ShapeButtonClass::`vftable'; /*0x69ddc9*/
  if ( v2 && *(_DWORD *)(this + 88) ) /*0x69ddd3*/
  {
    __3_YAXPAX_Z(*(void **)(this + 88)); /*0x69dddb*/
    *(_DWORD *)(this + 88) = 0; /*0x69dde3*/
    *(_BYTE *)(this + 92) = 0; /*0x69dde6*/
    *(_DWORD *)(this + 20) = 0; /*0x69dde9*/
    *(_DWORD *)(this + 24) = 0; /*0x69ddec*/
  }
  return GadgetClass::Dtor((ShpButtonClass *)this); /*0x69ddf6*/
}



// ==== 0x0069DE00  ShapeButtonClass::SetShape  this=ShapeButtonClass  sig=csp ====
int __thiscall ShapeButton::SetShape(ShapeButtonClass *this, int a2, int a3, int a4)
{
  int result; // eax

  if ( *((_BYTE *)this + 92) && *((_DWORD *)this + 22) ) /*0x69de0b*/
  {
    __3_YAXPAX_Z(*((void **)this + 22)); /*0x69de13*/
    *((_DWORD *)this + 22) = 0; /*0x69de1b*/
    *((_BYTE *)this + 92) = 0; /*0x69de1e*/
    *((_DWORD *)this + 5) = 0; /*0x69de21*/
    *((_DWORD *)this + 6) = 0; /*0x69de24*/
  }
  *((_DWORD *)this + 22) = a2; /*0x69de2d*/
  if ( a2 ) /*0x69de30*/
  {
    *((_DWORD *)this + 5) = *(__int16 *)(a2 + 2); /*0x69de36*/
    *((_DWORD *)this + 6) = *(__int16 *)(a2 + 4); /*0x69de3d*/
  }
  else
  {
    *((_DWORD *)this + 5) = 0; /*0x69de42*/
    *((_DWORD *)this + 6) = 0; /*0x69de45*/
  }
  if ( a3 ) /*0x69de4e*/
    *((_DWORD *)this + 5) = a3; /*0x69de50*/
  result = a4; /*0x69de53*/
  if ( a4 ) /*0x69de59*/
    *((_DWORD *)this + 6) = a4; /*0x69de5b*/
  return result; /*0x69de5e*/
}



// ==== 0x0069DE70  ScenarioClass::FreeConfig  this=ScenarioClass  sig=csp ====
void __thiscall ScenarioClass::FreeConfig(ScenarioClass *this)
{
  if ( LOBYTE(this->nextScenario[23]) ) /*0x69de76*/
  {
    if ( this->nextScenario[22] ) /*0x69de7b*/
    {
      __3_YAXPAX_Z((void *)this->nextScenario[22]); /*0x69de83*/
      this->nextScenario[22] = 0; /*0x69de8b*/
      LOBYTE(this->nextScenario[23]) = 0; /*0x69de8e*/
      this->nextScenario[5] = 0; /*0x69de91*/
      this->nextScenario[6] = 0; /*0x69de94*/
    }
  }
}



// ==== 0x0069DEA0  ButtonClass::SetState  this=ButtonClass  sig=csp ====
char __thiscall ButtonClass::SetState(ButtonClass *this, char a2)
{
  *((_BYTE *)this + 92) = a2; /*0x69dea4*/
  return a2; /*0x69dea7*/
}



// ==== 0x0069DEB0  ShapeButtonClass::Draw  this=ShapeButtonClass  sig=csp ====
int __thiscall ShapeButton::Draw(ShapeButtonClass *this, int a2)
{
  unsigned int v3; // ebx
  char v4; // al
  AudioStream *v5; // edi
  int *v6; // eax
  int v7; // ebp
  int v8; // edx
  int v9; // ebp
  int v10; // eax
  int v12[4]; // [esp+4h] [ebp-20h] BYREF
  int v13[4]; // [esp+14h] [ebp-10h] BYREF

  if ( !Control::DispatchClick((ControlClass *)this, a2) || !*((_DWORD *)this + 22) ) /*0x69dec8*/
    return 0; /*0x69dfad*/
  if ( !*((_BYTE *)this + 30) ) /*0x69dedb*/
  {
    if ( *((_BYTE *)this + 64) ) /*0x69dee4*/
    {
      if ( *((_BYTE *)this + 52) ) /*0x69deeb*/
      {
        v3 = (*((_BYTE *)this + 45) != 0) + 3; /*0x69defc*/
        goto LABEL_11; /*0x69deff*/
      }
      v4 = *((_BYTE *)this + 45); /*0x69df01*/
      v3 = 0; /*0x69df04*/
    }
    else
    {
      v4 = *((_BYTE *)this + 44); /*0x69df08*/
      v3 = 0; /*0x69df0b*/
    }
    LOBYTE(v3) = v4 != 0; /*0x69df0f*/
    goto LABEL_11; /*0x69df0f*/
  }
  v3 = 2; /*0x69dedd*/
LABEL_11:
  v5 = (AudioStream *)DSurface_Sidebar; /*0x69df12*/
  if ( !*((_BYTE *)this + 76) ) /*0x69df12*/
    v5 = g_DSurface_Hidden_2; /*0x69df1f*/
  v6 = (int *)(*(int (__thiscall **)(AudioStream *, int *))(*(_DWORD *)v5->__pad_0 + 120))(v5, v12); /*0x69df2e*/
  v7 = *((_DWORD *)this + 3); /*0x69df33*/
  v13[0] = *v6; /*0x69df36*/
  v13[1] = v6[1]; /*0x69df3d*/
  v13[2] = v6[2]; /*0x69df44*/
  v13[3] = v6[3]; /*0x69df4f*/
  v8 = v7 + *((_DWORD *)this + 17); /*0x69df56*/
  v9 = this->q004; /*0x69df58*/
  v12[0] = v8; /*0x69df5b*/
  v10 = *((_BYTE *)this + 85) != 0 ? 0x800 : 0;
  v12[1] = v9 + *((_DWORD *)this + 18); /*0x69df7d*/
  DrawToSurfaceSHP( /*0x69df96*/
    (int)v5,
    *((_DWORD *)this + 20),
    *((_DWORD *)this + 22),
    v3,
    v12,
    v13,
    v10,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
  *((_BYTE *)this + 84) = 1; /*0x69dfa2*/
  return 1; /*0x69dfa6*/
}



// ==== 0x0069DFC0  SidebarClass::startButtonFlash  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::startButtonFlash(SidebarClass *this, int a2, int a3, char a4)
{
  if ( this->SidebarClass_field_0x38 ) /*0x69dfc0*/
    return 0; /*0x69dfe3*/
  this->SidebarClass_field_0x38 = (void *)a2; /*0x69dfcf*/
  this->SidebarClass_field_0x3C = (void *)(a3 + a2); /*0x69dfd4*/
  LOBYTE(this->SidebarClass_field_0x34) = a4; /*0x69dfdb*/
  return 1; /*0x69dfe0*/
}



// ==== 0x0069DFF0  SHA1::Reset  this=GadgetClass  sig=csp ====
int __thiscall SHA1::Reset(int this)
{
  int result; // eax

  result = 0; /*0x69dff3*/
  if ( *(_DWORD *)(this + 56) ) /*0x69dff0*/
  {
    *(_BYTE *)(this + 52) = 0; /*0x69dff9*/
    *(_DWORD *)(this + 60) = 0; /*0x69dffc*/
    *(_DWORD *)(this + 56) = 0; /*0x69dfff*/
    LOBYTE(result) = 1; /*0x69e002*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x69e005*/
  }
  return result; /*0x69e004*/
}



// ==== 0x0069E010  SidebarClass::updateFlashTimer  this=SidebarClass  sig=csp ====
char __thiscall SidebarClass::updateFlashTimer(SidebarClass *this)
{
  char *SidebarClass_field_0x3C; // eax
  char *v3; // eax
  void *SidebarClass_field_0x38; // edx

  if ( BYTE2(this->SidebarClass_field_0x1C) ) /*0x69e010*/
  {
    if ( this->SidebarClass_field_0x38 ) /*0x69e019*/
    {
      LOBYTE(this->SidebarClass_field_0x34) = 0; /*0x69e01e*/
      this->SidebarClass_field_0x3C = 0; /*0x69e021*/
      this->SidebarClass_field_0x38 = 0; /*0x69e024*/
      return 1; /*0x69e029*/
    }
  }
  else
  {
    SidebarClass_field_0x3C = (char *)this->SidebarClass_field_0x3C; /*0x69e02a*/
    if ( SidebarClass_field_0x3C ) /*0x69e02f*/
    {
      v3 = SidebarClass_field_0x3C - 1; /*0x69e031*/
      this->SidebarClass_field_0x3C = v3; /*0x69e034*/
      if ( !v3 ) /*0x69e037*/
      {
        SidebarClass_field_0x38 = this->SidebarClass_field_0x38; /*0x69e03e*/
        LOBYTE(this->SidebarClass_field_0x34) = LOBYTE(this->SidebarClass_field_0x34) == 0; /*0x69e044*/
        this->SidebarClass_field_0x3C = SidebarClass_field_0x38; /*0x69e047*/
        return 1; /*0x69e04c*/
      }
    }
  }
  return 0; /*0x69e029*/
}



// ==== 0x0069E060  ObjectClass::method_69E060  this=ObjectClass  sig=csp ====
char __thiscall sub_69E060(ObjectClass *this)
{
  return (char)this->attachedTag; /*0x69e063*/
}



// ==== 0x0069E070  sub_69E070  this=-  sig=ida-proto ====
int sub_69E070()
{
  dword_B077A0 = 0; /*0x69e072*/
  dword_B077A4 = 0; /*0x69e077*/
  dword_B077A8 = 0; /*0x69e07c*/
  dword_B077AC = 0; /*0x69e081*/
  return 0; /*0x69e086*/
}



// ==== 0x0069E090  House::Constructor  this=House  sig=csp ====
void __thiscall House::Constructor(House *this)
{
  void *v2; // eax
  CCFileClass v3; // [esp+4h] [ebp-6Ch] BYREF
  char v4[12]; // [esp+5Ch] [ebp-14h] BYREF
  int v5; // [esp+68h] [ebp-8h]

  if ( *(_WORD *)this->__pad_0 == 0xFFFF && !this->__pad_C[4] ) /*0x69e09c*/
  {
    CCFileClass::Construct(&v3, (char *)this->House_field_0x8); /*0x69e0ab*/
    v2 = CCFileClass::ReadEntireFile(&v3); /*0x69e0b4*/
    if ( v2 ) /*0x69e0bb*/
    {
      *(_DWORD *)this->__pad_C = v2; /*0x69e0bd*/
      this->__pad_C[4] = 1; /*0x69e0c0*/
    }
    *(_DWORD *)v3.CDFileClass = &CCFileClass::`vftable'; /*0x69e0c8*/
    v5 = 0; /*0x69e0d0*/
    Vector::Clear((int)v4); /*0x69e0d8*/
    *(_DWORD *)v3.CDFileClass = &off_7E1668; /*0x69e0e1*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v3); /*0x69e0e9*/
  }
}



// ==== 0x0069E100  BTree::DeleteSubtree  this=BTree  sig=csp ====
void __thiscall BTree::DeleteSubtree(BTree *this)
{
  void *v2; // esi
  int v3; // eax
  int v4; // eax

  if ( *(_WORD *)this->__tail_0 == 0xFFFF && *((_BYTE *)this + 16) ) /*0x69e109*/
  {
    v2 = (void *)*((_DWORD *)this + 3); /*0x69e111*/
    if ( v2 ) /*0x69e116*/
    {
      if ( *(_WORD *)v2 == 0xFFFF ) /*0x69e11c*/
      {
        BTree::DeleteSubtree(*((BTree **)this + 3)); /*0x69e120*/
        v3 = *((_DWORD *)v2 + 6); /*0x69e125*/
        if ( v3 ) /*0x69e12a*/
          *(_DWORD *)(v3 + 28) = *((_DWORD *)v2 + 7); /*0x69e12f*/
        v4 = *((_DWORD *)v2 + 7); /*0x69e132*/
        if ( v4 ) /*0x69e137*/
          *(_DWORD *)(v4 + 24) = *((_DWORD *)v2 + 6); /*0x69e13c*/
        else
          dword_B077B0 = (void *)*((_DWORD *)v2 + 6); /*0x69e144*/
        if ( *((_DWORD *)v2 + 2) ) /*0x69e149*/
        {
          free(*((void **)v2 + 2)); /*0x69e151*/
          *((_DWORD *)v2 + 2) = 0; /*0x69e159*/
        }
      }
      __3_YAXPAX_Z(v2); /*0x69e161*/
    }
    *((_DWORD *)this + 3) = 0; /*0x69e169*/
    *((_BYTE *)this + 16) = 0; /*0x69e170*/
  }
}



// ==== 0x0069E180  MixFileClass::DestroyCache  this=MixFileClass  sig=ida-proto ====
void sub_69E180()
{
  void *v0; // esi
  void *v1; // edi
  void *v2; // ecx
  int v3; // eax
  int v4; // eax

  v0 = dword_B077B0; /*0x69e182*/
  if ( dword_B077B0 ) /*0x69e18c*/
  {
    do /*0x69e1f9*/
    {
      v1 = (void *)*((_DWORD *)v0 + 6); /*0x69e18f*/
      if ( v0 ) /*0x69e194*/
      {
        if ( *(_WORD *)v0 == 0xFFFF ) /*0x69e19a*/
        {
          if ( *((_BYTE *)v0 + 16) ) /*0x69e19c*/
          {
            v2 = (void *)*((_DWORD *)v0 + 3); /*0x69e1a1*/
            if ( v2 ) /*0x69e1a6*/
              MixFileClass::CacheNode_Dtor(v2, 1); /*0x69e1aa*/
            *((_DWORD *)v0 + 3) = 0; /*0x69e1af*/
            *((_BYTE *)v0 + 16) = 0; /*0x69e1b2*/
          }
          v3 = *((_DWORD *)v0 + 6); /*0x69e1b5*/
          if ( v3 ) /*0x69e1ba*/
            *(_DWORD *)(v3 + 28) = *((_DWORD *)v0 + 7); /*0x69e1bf*/
          v4 = *((_DWORD *)v0 + 7); /*0x69e1c2*/
          if ( v4 ) /*0x69e1c7*/
            *(_DWORD *)(v4 + 24) = *((_DWORD *)v0 + 6); /*0x69e1cc*/
          else
            dword_B077B0 = (void *)*((_DWORD *)v0 + 6); /*0x69e1d4*/
          if ( *((_DWORD *)v0 + 2) ) /*0x69e1d9*/
          {
            free(*((void **)v0 + 2)); /*0x69e1e1*/
            *((_DWORD *)v0 + 2) = 0; /*0x69e1e9*/
          }
        }
        __3_YAXPAX_Z(v0); /*0x69e1ed*/
      }
      v0 = v1; /*0x69e1f7*/
    }
    while ( v1 ); /*0x69e1f9*/
    dword_B077B0 = 0; /*0x69e1fc*/
  }
  else
  {
    dword_B077B0 = 0; /*0x69e205*/
  }
}



// ==== 0x0069E210  MixFileClass::CleanupCache  this=MixFileClass  sig=ida-proto ====
void sub_69E210()
{
  _DWORD *v0; // edi
  void *v1; // esi
  int v2; // eax
  int v3; // eax
  void *v4; // esi
  _BYTE *v5; // ebp
  void *v6; // ecx
  _DWORD *v7; // edi
  int v8; // eax
  int v9; // eax

  v0 = dword_B077B0; /*0x69e213*/
  if ( dword_B077B0 ) /*0x69e21d*/
  {
    do /*0x69e289*/
    {
      if ( *(_WORD *)v0 == 0xFFFF && *((_BYTE *)v0 + 16) ) /*0x69e225*/
      {
        v1 = (void *)v0[3]; /*0x69e22a*/
        if ( v1 ) /*0x69e22f*/
        {
          if ( *(_WORD *)v1 == 0xFFFF ) /*0x69e235*/
          {
            BTree::DeleteSubtree((_DWORD *)v0[3]); /*0x69e239*/
            v2 = *((_DWORD *)v1 + 6); /*0x69e23e*/
            if ( v2 ) /*0x69e243*/
              *(_DWORD *)(v2 + 28) = *((_DWORD *)v1 + 7); /*0x69e248*/
            v3 = *((_DWORD *)v1 + 7); /*0x69e24b*/
            if ( v3 ) /*0x69e250*/
              *(_DWORD *)(v3 + 24) = *((_DWORD *)v1 + 6); /*0x69e255*/
            else
              dword_B077B0 = (void *)*((_DWORD *)v1 + 6); /*0x69e25d*/
            if ( *((_DWORD *)v1 + 2) ) /*0x69e262*/
            {
              free(*((void **)v1 + 2)); /*0x69e26a*/
              *((_DWORD *)v1 + 2) = 0; /*0x69e272*/
            }
          }
          __3_YAXPAX_Z(v1); /*0x69e276*/
        }
        v0[3] = 0; /*0x69e27e*/
        *((_BYTE *)v0 + 16) = 0; /*0x69e281*/
      }
      v0 = (_DWORD *)v0[6]; /*0x69e284*/
    }
    while ( v0 ); /*0x69e289*/
  }
  v4 = dword_B077B4; /*0x69e28b*/
  if ( dword_B077B4 ) /*0x69e293*/
  {
    if ( *(_WORD *)dword_B077B4 == 0xFFFF ) /*0x69e299*/
    {
      v5 = (char *)dword_B077B4 + 16; /*0x69e29f*/
      if ( *((_BYTE *)dword_B077B4 + 16) ) /*0x69e29b*/
      {
        v6 = (void *)*((_DWORD *)dword_B077B4 + 3); /*0x69e2a6*/
        v7 = (char *)dword_B077B4 + 12; /*0x69e2a9*/
        if ( v6 ) /*0x69e2ae*/
          MixFileClass::CacheNode_Dtor(v6, 1); /*0x69e2b2*/
        *v7 = 0; /*0x69e2b7*/
        *v5 = 0; /*0x69e2b9*/
      }
      v8 = *((_DWORD *)v4 + 6); /*0x69e2bc*/
      if ( v8 ) /*0x69e2c2*/
        *(_DWORD *)(v8 + 28) = *((_DWORD *)v4 + 7); /*0x69e2c7*/
      v9 = *((_DWORD *)v4 + 7); /*0x69e2ca*/
      if ( v9 ) /*0x69e2cf*/
        *(_DWORD *)(v9 + 24) = *((_DWORD *)v4 + 6); /*0x69e2d4*/
      else
        dword_B077B0 = (void *)*((_DWORD *)v4 + 6); /*0x69e2dc*/
      if ( *((_DWORD *)v4 + 2) ) /*0x69e2e1*/
      {
        free(*((void **)v4 + 2)); /*0x69e2e9*/
        *((_DWORD *)v4 + 2) = 0; /*0x69e2f1*/
      }
    }
    __3_YAXPAX_Z(v4); /*0x69e2f5*/
    dword_B077B4 = 0; /*0x69e2fd*/
    dword_B077B8 = 0; /*0x69e303*/
    dword_B077BC = 0; /*0x69e309*/
  }
}



// ==== 0x0069E320  CCFileClass::ProcessStream  this=CCFileClass  sig=ida-proto ====
void __fastcall sub_69E320(unsigned int a1)
{
  _DWORD *v1; // edi
  void *v3; // esi
  int v4; // eax
  int v5; // eax
  void *v6; // esi
  _BYTE *v7; // ebp
  void *v8; // ecx
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // eax

  v1 = dword_B077B0; /*0x69e324*/
  if ( dword_B077B0 ) /*0x69e330*/
  {
    do /*0x69e3a1*/
    {
      if ( v1[8] <= a1 && *(_WORD *)v1 == 0xFFFF && *((_BYTE *)v1 + 16) ) /*0x69e33d*/
      {
        v3 = (void *)v1[3]; /*0x69e342*/
        if ( v3 ) /*0x69e347*/
        {
          if ( *(_WORD *)v3 == 0xFFFF ) /*0x69e34d*/
          {
            BTree::DeleteSubtree((_DWORD *)v1[3]); /*0x69e351*/
            v4 = *((_DWORD *)v3 + 6); /*0x69e356*/
            if ( v4 ) /*0x69e35b*/
              *(_DWORD *)(v4 + 28) = *((_DWORD *)v3 + 7); /*0x69e360*/
            v5 = *((_DWORD *)v3 + 7); /*0x69e363*/
            if ( v5 ) /*0x69e368*/
              *(_DWORD *)(v5 + 24) = *((_DWORD *)v3 + 6); /*0x69e36d*/
            else
              dword_B077B0 = (void *)*((_DWORD *)v3 + 6); /*0x69e375*/
            if ( *((_DWORD *)v3 + 2) ) /*0x69e37a*/
            {
              free(*((void **)v3 + 2)); /*0x69e382*/
              *((_DWORD *)v3 + 2) = 0; /*0x69e38a*/
            }
          }
          __3_YAXPAX_Z(v3); /*0x69e38e*/
        }
        v1[3] = 0; /*0x69e396*/
        *((_BYTE *)v1 + 16) = 0; /*0x69e399*/
      }
      v1 = (_DWORD *)v1[6]; /*0x69e39c*/
    }
    while ( v1 ); /*0x69e3a1*/
  }
  v6 = dword_B077B4; /*0x69e3a3*/
  if ( dword_B077B4 ) /*0x69e3ab*/
  {
    if ( *(_WORD *)dword_B077B4 == 0xFFFF ) /*0x69e3b1*/
    {
      v7 = (char *)dword_B077B4 + 16; /*0x69e3b6*/
      if ( *((_BYTE *)dword_B077B4 + 16) ) /*0x69e3b3*/
      {
        v8 = (void *)*((_DWORD *)dword_B077B4 + 3); /*0x69e3bd*/
        v9 = (char *)dword_B077B4 + 12; /*0x69e3c0*/
        if ( v8 ) /*0x69e3c5*/
          MixFileClass::CacheNode_Dtor(v8, 1); /*0x69e3c9*/
        *v9 = 0; /*0x69e3ce*/
        *v7 = 0; /*0x69e3d0*/
      }
      v10 = *((_DWORD *)v6 + 6); /*0x69e3d3*/
      if ( v10 ) /*0x69e3d8*/
        *(_DWORD *)(v10 + 28) = *((_DWORD *)v6 + 7); /*0x69e3dd*/
      v11 = *((_DWORD *)v6 + 7); /*0x69e3e0*/
      if ( v11 ) /*0x69e3e5*/
        *(_DWORD *)(v11 + 24) = *((_DWORD *)v6 + 6); /*0x69e3ea*/
      else
        dword_B077B0 = (void *)*((_DWORD *)v6 + 6); /*0x69e3f2*/
      if ( *((_DWORD *)v6 + 2) ) /*0x69e3f7*/
      {
        free(*((void **)v6 + 2)); /*0x69e3ff*/
        *((_DWORD *)v6 + 2) = 0; /*0x69e407*/
      }
    }
    __3_YAXPAX_Z(v6); /*0x69e40b*/
    dword_B077B4 = 0; /*0x69e413*/
    dword_B077B8 = 0; /*0x69e419*/
    dword_B077BC = 0; /*0x69e41f*/
  }
}



// ==== 0x0069E430  ObjectClass::LoadSHPFile  this=ObjectClass  sig=csp ====
void *__thiscall LoadSHPFile(ObjectClass *this, char *Source)
{
  char *v3; // eax
  CCFileClass v5; // [esp+8h] [ebp-6Ch] BYREF
  int v6[3]; // [esp+60h] [ebp-14h] BYREF
  int v7; // [esp+6Ch] [ebp-8h]

  this->? = dword_83F870++; /*0x69e440*/
  v3 = _strdup(Source); /*0x69e44f*/
  this->? = v3; /*0x69e45d*/
  LOBYTE(this->?) = 0; /*0x69e461*/
  this->? = 0; /*0x69e464*/
  HIWORD(this->AbstractClass) = 0; /*0x69e467*/
  LOWORD(this->?) = 0; /*0x69e46b*/
  HIWORD(this->?) = 0; /*0x69e46f*/
  CCFileClass::Construct(&v5, v3); /*0x69e473*/
  if ( (unsigned __int8)CCFileClass::Open(&v5, 0) ) /*0x69e47d*/
    CCFileClass::Read(&v5, this, 8); /*0x69e48d*/
  _strcmpi((char *)this->?, aNullShp); /*0x69e49b*/
  LOWORD(this->AbstractClass) = -1; /*0x69e4a0*/
  this->? = (int)dword_B077B0; /*0x69e4aa*/
  this->? = 0; /*0x69e4ad*/
  if ( dword_B077B0 ) /*0x69e4ba*/
    *((_DWORD *)dword_B077B0 + 7) = this; /*0x69e4bc*/
  dword_B077B0 = this; /*0x69e4bf*/
  this->? = 0; /*0x69e4c9*/
  *(_DWORD *)v5.CDFileClass = &CCFileClass::`vftable'; /*0x69e4cc*/
  v7 = 0; /*0x69e4d4*/
  Vector::Clear((int)v6); /*0x69e4d8*/
  *(_DWORD *)v5.CDFileClass = &off_7E1668; /*0x69e4e1*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v5); /*0x69e4e9*/
  return this; /*0x69e4f0*/
}



// ==== 0x0069E500  FileTreeNode::Destroy  this=FileTreeNode  sig=csp ====
int __thiscall FileTreeNode::Destroy(FileTreeNode *this)
{
  int result; // eax
  void *v3; // edi
  FileTreeNode *v4; // eax
  FileTreeNode *v5; // eax

  if ( *(_WORD *)this->__tail_0 == 0xFFFF ) /*0x69e507*/
  {
    if ( *((_BYTE *)this + 16) ) /*0x69e509*/
    {
      v3 = (void *)*((_DWORD *)this + 3); /*0x69e511*/
      if ( v3 ) /*0x69e516*/
      {
        FileTreeNode::Destroy(*((FileTreeNode **)this + 3)); /*0x69e51a*/
        __3_YAXPAX_Z(v3); /*0x69e520*/
      }
      *((_DWORD *)this + 3) = 0; /*0x69e528*/
      *((_BYTE *)this + 16) = 0; /*0x69e52f*/
    }
    v4 = (FileTreeNode *)*((_DWORD *)this + 6); /*0x69e534*/
    if ( v4 ) /*0x69e539*/
      v4[7] = *(this + 7); /*0x69e53e*/
    v5 = (FileTreeNode *)*((_DWORD *)this + 7); /*0x69e541*/
    if ( v5 ) /*0x69e546*/
      v5[6] = *(this + 6); /*0x69e54b*/
    else
      dword_B077B0 = (void *)*((_DWORD *)this + 6); /*0x69e553*/
    result = *((_DWORD *)this + 2); /*0x69e558*/
    if ( result ) /*0x69e55d*/
    {
      result = free(*((void **)this + 2)); /*0x69e560*/
      *((_DWORD *)this + 2) = 0; /*0x69e568*/
    }
  }
  return result; /*0x69e56f*/
}



// ==== 0x0069E580  MixFileClass::LoadSubFile  this=MixFileClass  sig=csp ====
char **__thiscall MixFileClass::LoadSubFile(MixFileClass *this)
{
  MixFileClass *v1; // edi
  int Size; // ebx
  void *v4; // eax
  size_t v5; // eax
  void *v6; // esi
  _BYTE *v7; // ebp
  MixFileClass *v8; // ecx
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // eax
  char **v12; // esi
  CCFileClass v14; // [esp+Ch] [ebp-6Ch] BYREF
  int v15[3]; // [esp+64h] [ebp-14h] BYREF
  int v16; // [esp+70h] [ebp-8h]

  v1 = this; /*0x69e585*/
  if ( *(_WORD *)this->Node != 0xFFFF ) /*0x69e58f*/
    return (char **)this; /*0x69e591*/
  if ( LOBYTE(this->FileSize) ) /*0x69e599*/
    return (char **)this->CountFiles; /*0x69e5a0*/
  if ( dword_B077BC == this->FileStartOffset ) /*0x69e5b3*/
    return (char **)dword_B077B4; /*0x69e5b5*/
  CCFileClass::Construct(&v14, *(char **)&this->Blowfish); /*0x69e5c8*/
  if ( (unsigned __int8)CCFileClass::Open(&v14, 0) ) /*0x69e5d4*/
  {
    Size = CCFileClass::GetSize(&v14); /*0x69e5ec*/
    v4 = dword_B077B4; /*0x69e5ee*/
    if ( dword_B077B4 ) /*0x69e5f5*/
    {
      if ( dword_B077B8 < Size ) /*0x69e624*/
      {
        v6 = dword_B077B4; /*0x69e62e*/
        if ( *(_WORD *)dword_B077B4 == 0xFFFF ) /*0x69e630*/
        {
          v7 = (char *)dword_B077B4 + 16; /*0x69e635*/
          if ( *((_BYTE *)dword_B077B4 + 16) ) /*0x69e632*/
          {
            v8 = (MixFileClass *)*((_DWORD *)dword_B077B4 + 3); /*0x69e63c*/
            v9 = (char *)dword_B077B4 + 12; /*0x69e63f*/
            if ( v8 ) /*0x69e644*/
              MixFileClass::CacheNode_Dtor(v8, 1); /*0x69e648*/
            *v9 = 0; /*0x69e64d*/
            v1 = this; /*0x69e653*/
            *v7 = 0; /*0x69e657*/
          }
          v10 = *((_DWORD *)v6 + 6); /*0x69e65b*/
          if ( v10 ) /*0x69e660*/
            *(_DWORD *)(v10 + 28) = *((_DWORD *)v6 + 7); /*0x69e665*/
          v11 = *((_DWORD *)v6 + 7); /*0x69e668*/
          if ( v11 ) /*0x69e66d*/
            *(_DWORD *)(v11 + 24) = *((_DWORD *)v6 + 6); /*0x69e672*/
          else
            dword_B077B0 = (void *)*((_DWORD *)v6 + 6); /*0x69e67a*/
          if ( *((_DWORD *)v6 + 2) ) /*0x69e680*/
          {
            free(*((void **)v6 + 2)); /*0x69e688*/
            *((_DWORD *)v6 + 2) = 0; /*0x69e690*/
          }
        }
        __3_YAXPAX_Z(v6); /*0x69e698*/
        v4 = (void *)__2_YAPAXI_Z(Size); /*0x69e69e*/
        dword_B077B4 = v4; /*0x69e6a6*/
        dword_B077B8 = Size; /*0x69e6ab*/
      }
    }
    else
    {
      v5 = 3145728; /*0x69e5fd*/
      if ( Size >= 3145728 ) /*0x69e602*/
        v5 = Size; /*0x69e604*/
      dword_B077B8 = v5; /*0x69e607*/
      v4 = (void *)__2_YAPAXI_Z(v5); /*0x69e60c*/
      dword_B077B4 = v4; /*0x69e614*/
    }
    if ( v4 ) /*0x69e6b5*/
    {
      CCFileClass::Read(&v14, v4, Size); /*0x69e6bd*/
      v4 = dword_B077B4; /*0x69e6c2*/
    }
    v12 = (char **)v4; /*0x69e6ca*/
    dword_B077BC = v1->FileStartOffset; /*0x69e6cc*/
    *(_DWORD *)v14.CDFileClass = &CCFileClass::`vftable'; /*0x69e6d6*/
    v16 = 0; /*0x69e6de*/
    Vector::Clear((int)v15); /*0x69e6e2*/
    *(_DWORD *)v14.CDFileClass = &off_7E1668; /*0x69e6eb*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v14); /*0x69e6f3*/
    return v12; /*0x69e6f8*/
  }
  else
  {
    dword_B077BC = 0; /*0x69e706*/
    *(_DWORD *)v14.CDFileClass = &CCFileClass::`vftable'; /*0x69e70c*/
    v16 = 0; /*0x69e714*/
    Vector::Clear((int)v15); /*0x69e718*/
    *(_DWORD *)v14.CDFileClass = &off_7E1668; /*0x69e721*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v14); /*0x69e729*/
    return 0; /*0x69e72f*/
  }
}



// ==== 0x0069E740  MixFileClass::GetSubFile  this=MixFileClass  sig=csp ====
int __thiscall MixFileClass::GetSubFile(MixFileClass *this, unsigned int a2)
{
  void *v3; // eax
  char **SubFile; // eax
  char *v5; // ecx
  CCFileClass v7; // [esp+4h] [ebp-6Ch] BYREF
  char v8[12]; // [esp+5Ch] [ebp-14h] BYREF
  int v9; // [esp+68h] [ebp-8h]

  if ( *(_WORD *)this->Node == 0xFFFF && !LOBYTE(this->FileSize) ) /*0x69e74c*/
  {
    CCFileClass::Construct(&v7, *(char **)&this->Blowfish); /*0x69e75b*/
    v3 = CCFileClass::ReadEntireFile(&v7); /*0x69e764*/
    if ( v3 ) /*0x69e76b*/
    {
      this->CountFiles = (int)v3; /*0x69e76d*/
      LOBYTE(this->FileSize) = 1; /*0x69e770*/
    }
    *(_DWORD *)v7.CDFileClass = &CCFileClass::`vftable'; /*0x69e778*/
    v9 = 0; /*0x69e780*/
    Vector::Clear((int)v8); /*0x69e788*/
    *(_DWORD *)v7.CDFileClass = &off_7E1668; /*0x69e791*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v7); /*0x69e799*/
  }
  SubFile = MixFileClass::LoadSubFile(this); /*0x69e7a0*/
  if ( SubFile && a2 < *((__int16 *)SubFile + 3) && &SubFile[6 * a2] != (char **)-8 && (v5 = SubFile[6 * a2 + 7]) != 0 ) /*0x69e7c6*/
    return (int)SubFile + (_DWORD)v5; /*0x69e7c8*/
  else
    return 0; /*0x69e7d0*/
}



// ==== 0x0069E7E0  Building::GetFoundationSize  this=IUnknown  sig=csp ====
_DWORD *__stdcall Building_GetFoundationSize(_DWORD *a1, unsigned int a2)
{
  int v2; // eax
  __int16 *v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // esi
  int v7; // edi

  v2 = MixFileClass::LoadSubFile(); /*0x69e7e0*/
  if ( v2 && a2 < *(__int16 *)(v2 + 6) && (v3 = (__int16 *)(v2 + 24 * a2 + 8)) != 0 ) /*0x69e7fe*/
  {
    v4 = *v3; /*0x69e800*/
    v5 = v3[1]; /*0x69e803*/
    v6 = v3[2]; /*0x69e809*/
    v7 = v3[3]; /*0x69e80e*/
    *a1 = v4; /*0x69e818*/
    a1[1] = v5; /*0x69e81a*/
    a1[2] = v6; /*0x69e81d*/
    a1[3] = v7; /*0x69e820*/
    return a1; /*0x69e812*/
  }
  else
  {
    *a1 = dword_B077A0; /*0x69e835*/
    a1[1] = dword_B077A4; /*0x69e83d*/
    a1[2] = dword_B077A8; /*0x69e846*/
    a1[3] = dword_B077AC; /*0x69e84f*/
    return a1; /*0x69e829*/
  }
}



// ==== 0x0069E860  MixFileClass::GetPixelData  this=MixFileClass  sig=csp ====
int __thiscall MixFileClass::GetPixelData(MixFileClass *this, int a2, unsigned int a3)
{
  char **SubFile; // eax
  char **v4; // eax
  char v5; // cl
  char v6; // dl
  char v7; // al
  __int16 v9; // [esp+Ch] [ebp+8h]

  SubFile = MixFileClass::LoadSubFile(this); /*0x69e861*/
  if ( SubFile && a3 < *((__int16 *)SubFile + 3) && (v4 = &SubFile[6 * a3 + 2]) != 0 ) /*0x69e881*/
  {
    v5 = *((_BYTE *)v4 + 13); /*0x69e883*/
    v6 = *((_BYTE *)v4 + 12); /*0x69e886*/
    v7 = *((_BYTE *)v4 + 14); /*0x69e889*/
    HIBYTE(v9) = v5; /*0x69e88c*/
    LOBYTE(v9) = v6; /*0x69e894*/
    *(_WORD *)a2 = v9; /*0x69e89f*/
    *(_BYTE *)(a2 + 2) = v7; /*0x69e8a3*/
    return a2; /*0x69e8a6*/
  }
  else
  {
    *(_WORD *)a2 = 0; /*0x69e8c0*/
    *(_BYTE *)(a2 + 2) = 0; /*0x69e8c4*/
    return a2; /*0x69e8ab*/
  }
}



// ==== 0x0069E900  ObjectClass::Helper_69E900  this=ObjectClass  sig=csp ====
char __thiscall Helper_69E900(ObjectClass *this, unsigned int a2)
{
  char **SubFile; // eax
  unsigned int v3; // eax
  int v4; // eax

  SubFile = MixFileClass::LoadSubFile((MixFileClass *)this); /*0x69e900*/
  if ( SubFile && a2 < *((__int16 *)SubFile + 3) && (v3 = (unsigned int)&SubFile[6 * a2 + 2]) != 0 ) /*0x69e91e*/
    return (unsigned __int8)(*(_BYTE *)(v3 + 8) & 2) >> 1; /*0x69e926*/
  else
    LOBYTE(v4) = 0; /*0x69e92b*/
  return v4; /*0x69e928*/
}



// ==== 0x0069E930  MixFileClass::CacheNode_Dtor  this=MixFileClass  sig=csp ====
void *__thiscall MixFileClass::CacheNode_Dtor(MixFileClass *this, char a2)
{
  MixFileClass *CountFiles; // ecx
  MixHeaderData *Headers; // eax
  int v5; // eax

  if ( *(_WORD *)this->Node == 0xFFFF ) /*0x69e937*/
  {
    if ( LOBYTE(this->FileSize) ) /*0x69e939*/
    {
      CountFiles = (MixFileClass *)this->CountFiles; /*0x69e940*/
      if ( CountFiles ) /*0x69e945*/
        MixFileClass::CacheNode_Dtor(CountFiles, 1); /*0x69e949*/
      this->CountFiles = 0; /*0x69e94e*/
      LOBYTE(this->FileSize) = 0; /*0x69e955*/
    }
    Headers = this->Headers; /*0x69e959*/
    if ( Headers ) /*0x69e95e*/
      Headers[2].Offset = *(_DWORD *)this->__pad_1C; /*0x69e963*/
    v5 = *(_DWORD *)this->__pad_1C; /*0x69e966*/
    if ( v5 ) /*0x69e96b*/
      *(_DWORD *)(v5 + 24) = this->Headers; /*0x69e970*/
    else
      dword_B077B0 = this->Headers; /*0x69e978*/
    if ( *(_DWORD *)&this->Blowfish ) /*0x69e97d*/
    {
      free(*(void **)&this->Blowfish); /*0x69e985*/
      *(_DWORD *)&this->Blowfish = 0; /*0x69e98d*/
    }
  }
  if ( (a2 & 1) != 0 ) /*0x69e999*/
    __3_YAXPAX_Z(this); /*0x69e99c*/
  return this; /*0x69e9a6*/
}



// ==== 0x0069E9B0  SHAPipe::Check  this=SHAPipe  sig=csp ====
int __thiscall VectorClass::Check(SHAPipe *this, int a2, int a3)
{
  SHA1::Process((SHA1 *)((char *)this + 12), a2, a3); /*0x69e9c2*/
  return Delegate::Dispatch((Pipe *)this, a2, a3); /*0x69e9d0*/
}



// ==== 0x0069E9E0  SHA1::ComputeThunk  this=SHA1  sig=csp ====
int __thiscall SHA1::ComputeThunk(SHA1 *this, char *a2)
{
  return SHA1::Compute((SHA1 *)&this->SHA1_field_0x0C, a2); /*0x69e9ed*/
}



// ==== 0x0069E9F0  ObjectClass::method_69E9F0  this=ObjectClass  sig=csp ====
int __thiscall sub_69E9F0(ObjectClass *this, int a2, int a3)
{
  int v4; // ebx

  if ( !a2 || a3 < 1 ) /*0x69ea03*/
    return 0; /*0x69ea29*/
  v4 = Delegate::Invoke((Straw *)this, a2, a3); /*0x69ea0d*/
  if ( !LOBYTE(this->?) ) /*0x69ea0f*/
    SHA1::Process((SHA1 *)&this->?, a2, v4); /*0x69ea1b*/
  return v4; /*0x69ea23*/
}



// ==== 0x0069EA40  sub_69EA40  this=-  sig=ida-proto ====
void sub_69EA40()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x69ea4c*/
  dbl_B077E0 = Math::Sqrt(v0 + v0); /*0x69ea5e*/
}



// ==== 0x0069EA70  sub_69EA70  this=-  sig=ida-proto ====
void sub_69EA70()
{
  dbl_B07830 = dbl_B077E0 / 60.0; /*0x69ea7c*/
}



// ==== 0x0069EA90  sub_69EA90  this=-  sig=ida-proto ====
void sub_69EA90()
{
  dbl_B07818 = 1.0 / dbl_B07830; /*0x69ea9c*/
}



// ==== 0x0069EAB0  sub_69EAB0  this=-  sig=ida-proto ====
void sub_69EAB0()
{
  dbl_B07810 = 0.0174532925199433 * 45.0; /*0x69eabc*/
}



// ==== 0x0069EAD0  sub_69EAD0  this=-  sig=ida-proto ====
void sub_69EAD0()
{
  dbl_B077E8 = 0.0174532925199433 * 60.0; /*0x69eadc*/
}



// ==== 0x0069EAF0  sub_69EAF0  this=-  sig=ida-proto ====
void sub_69EAF0()
{
  dbl_B077C0 = 0.0174532925199433 * 90.0; /*0x69eafc*/
}



// ==== 0x0069EB10  sub_69EB10  this=-  sig=ida-proto ====
__int64 sub_69EB10()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B077C0 - dbl_B077E8); /*0x69eb22*/
  result = Math::RoundToInt(v0 * dbl_B077E0 * 0.5); /*0x69eb36*/
  dword_B07838 = result; /*0x69eb3b*/
  return result; /*0x69eb40*/
}



// ==== 0x0069EB50  sub_69EB50  this=-  sig=ida-proto ====
void sub_69EB50()
{
  dbl_B077F0 = Math::ArcTan((double)dword_B07838 * 0.00390625); /*0x69eb67*/
}



// ==== 0x0069EB80  sub_69EB80  this=-  sig=ida-proto ====
void sub_69EB80()
{
  dbl_B07808 = Math::ArcTan((double)(2 * dword_B07838) / dbl_B077E0); /*0x69eba2*/
}



// ==== 0x0069EBB0  sub_69EBB0  this=-  sig=ida-proto ====
__int64 sub_69EBB0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B07838) + 0.5); /*0x69ebcb*/
  dword_B0782C = result; /*0x69ebd0*/
  return result; /*0x69ebd6*/
}



// ==== 0x0069EBE0  sub_69EBE0  this=-  sig=ida-proto ====
int sub_69EBE0()
{
  word_B077D8 = 0; /*0x69ebe2*/
  word_B077DA = 0; /*0x69ebe8*/
  return 0; /*0x69ebee*/
}



// ==== 0x0069EBF0  sub_69EBF0  this=-  sig=ida-proto ====
int sub_69EBF0()
{
  g_OverlayTypeConfig = 0; /*0x69ebf2*/
  qword_B077FC = 0; /*0x69ebf7*/
  return 0; /*0x69ec01*/
}



// ==== 0x0069EC10  sub_69EC10  this=-  sig=ida-proto ====
int sub_69EC10()
{
  dword_B07828 = 0; /*0x69ec15*/
  dword_B07820 = 128; /*0x69ec1f*/
  dword_B07824 = 128; /*0x69ec24*/
  return 128; /*0x69ec29*/
}



// ==== 0x0069EC30  sub_69EC30  this=-  sig=ida-proto ====
int sub_69EC30()
{
  dword_B077C8 = 0; /*0x69ec32*/
  dword_B077CC = 0; /*0x69ec37*/
  dword_B077D0 = 0; /*0x69ec3c*/
  dword_B077D4 = 0; /*0x69ec41*/
  return 0; /*0x69ec46*/
}



// ==== 0x0069EC50  LocomotionClass::Process  this=ShipLocomotionClass  sig=csp ====
int __thiscall LocomotionClass::Process(LocomotionClass *this)
{
  int v2; // ecx
  int v3; // ecx

  LocomotionClass::Init(this); /*0x69ec53*/
  this->CurrentRamp = 0; /*0x69ec5d*/
  this->u32_8 = 0; /*0x69ec60*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x69ec63*/
  this->q02C = 0; /*0x69ec69*/
  this->SlopeTimer = v2; /*0x69ec6c*/
  this->q00C = 0; /*0x69ec6f*/
  this->Dest = g_OverlayTypeConfig; /*0x69ec78*/
  this->CurrentRamp = qword_B077FC; /*0x69ec80*/
  this->HeadToCoord = g_OverlayTypeConfig; /*0x69ec95*/
  this->Dirty = qword_B077FC; /*0x69ec9e*/
  v3 = HIDWORD(qword_B077FC); /*0x69eca1*/
  this->MovementSpeed = 0; /*0x69eca7*/
  this->SpeedAccum = 0; /*0x69ecaa*/
  this->q048 = v3; /*0x69ecad*/
  this->__pad_015 = 0; /*0x69ecb3*/
  this->TrackNumber = -1; /*0x69ecb6*/
  this->TrackIndex = -1; /*0x69ecb9*/
  this->IsOnShortTrack = 0; /*0x69ecbc*/
  this->IsTurretLockedDown = 0; /*0x69ecbf*/
  this->IsRotating = 0; /*0x69ecc2*/
  this->IsDriving = 0; /*0x69ecc5*/
  this->IsRocking = 0; /*0x69ecc8*/
  this->UnLocked = 1; /*0x69eccb*/
  this->ptr_68 = 0; /*0x69eccf*/
  *(_DWORD *)this->ILocomotion = &ShipLocomotionClass::`vftable'; /*0x69ecd2*/
  *(_DWORD *)&this->ILocomotion[4] = &ShipLocomotionClass::`vftable'; /*0x69ecd8*/
  this->vtable3 = &off_7F2D68; /*0x69ecdf*/
  return (int)this->ILocomotion; /*0x69ece8*/
}



// ==== 0x0069ED20  JumpjetLocomotionClass::LoadLocomotionFromStream_2  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::LoadLocomotionFromStream_2(JumpjetLocomotionClass *this, _DWORD *pad_0)
{
  _DWORD *v2; // ebp
  char *pad_50; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  JumpjetLocomotionClass *v8; // eax
  JumpjetLocomotionClass *v9; // edi

  v2 = pad_0; /*0x69ed21*/
  if ( !pad_0 ) /*0x69ed28*/
    return -2147467261; /*0x69ed31*/
  pad_50 = this->__pad_50; /*0x69ed3b*/
  if ( *(_DWORD *)this->__pad_50 ) /*0x69ed38*/
  {
    this = 0; /*0x69ed44*/
    v5 = StreamClass::Set2((StreamClass *)&this, pad_50); /*0x69ed55*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x69ed63*/
      WinAPI::Wrapper(v5); /*0x69ed66*/
    if ( !this ) /*0x69ed71*/
      return -2147467259; /*0x69ed7a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(this->LocomotionClass[0] + 12))(this, v2); /*0x69ed84*/
    if ( this ) /*0x69ed8c*/
    {
      (*(void (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 8))(this); /*0x69ed95*/
      return v6; /*0x69ed9c*/
    }
  }
  else
  {
    pad_0 = 0; /*0x69eda2*/
    if ( this == (JumpjetLocomotionClass *)24 ) /*0x69edac*/
      return -2147467259; /*0x69edac*/
    v7 = (**((int (__stdcall ***)(char *, void *, JumpjetLocomotionClass **))this - 6))( /*0x69edbd*/
           (char *)this - 24,
           &unk_818858,
           &this);
    if ( v7 >= 0 ) /*0x69edc1*/
    {
      v9 = this; /*0x69edd5*/
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x69eddd*/
      v8 = v9; /*0x69ede2*/
      pad_0 = v9->LocomotionClass; /*0x69ede5*/
    }
    else
    {
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x69edc7*/
      v8 = 0; /*0x69edcc*/
      pad_0 = 0; /*0x69edce*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x69edf3*/
      WinAPI::Wrapper(v7); /*0x69edf6*/
    if ( !v8 ) /*0x69ee01*/
      return -2147467259; /*0x69ee0a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(v8->LocomotionClass[0] + 12))(v8, v2); /*0x69ee14*/
    if ( pad_0 ) /*0x69ee1c*/
      (*(void (__stdcall **)(_DWORD *))(*pad_0 + 8))(pad_0); /*0x69ee21*/
  }
  return v6; /*0x69ed2a*/
}



// ==== 0x0069EE30  ShipLocomotionClass::QueryInterface  this=ShipLocomotionClass  sig=csp ====
int __stdcall ShipLocomotionClass::QueryInterface(ShipLocomotionClass *this, const void *a2, int *a3)
{
  int result; // eax
  char *pad_18; // eax

  result = LocomotionClass::QueryInterface((LocomotionClass *)this, a2, a3); /*0x69ee42*/
  if ( result == -2147467262 ) /*0x69ee4c*/
  {
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x69ee5b*/
    {
      if ( this ) /*0x69ee62*/
        pad_18 = this->__pad_18; /*0x69ee64*/
      else
        pad_18 = 0; /*0x69ee69*/
      *a3 = (int)pad_18; /*0x69ee6b*/
    }
    if ( *a3 ) /*0x69ee6e*/
    {
      (*(void (__stdcall **)(ShipLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 4))(this); /*0x69ee82*/
      return 0; /*0x69ee85*/
    }
    else
    {
      return -2147467262; /*0x69ee76*/
    }
  }
  return result; /*0x69ee74*/
}



// ==== 0x0069EE90  ShipLocomotionClass::BeginMove  this=ShipLocomotionClass  sig=csp ====
int __stdcall ShipLocomotionClass::BeginMove(ShipLocomotionClass *this, int *pStm)
{
  int *v2; // edi
  int v3; // ebx
  ILocomotion *Piggybackee; // eax
  LPVOID *p_Piggybackee; // esi

  v2 = pStm; /*0x69ee97*/
  v3 = SwizzleManager::SaveLoad((int *)this->LocomotionClass, pStm); /*0x69eea2*/
  if ( v3 < 0 ) /*0x69eea6*/
    return v3; /*0x69eea6*/
  if ( this ) /*0x69eeaa*/
  {
    this->Piggybackee = 0; /*0x69eeac*/
    *(_DWORD *)this->LocomotionClass = &ShipLocomotionClass::`vftable'; /*0x69eeb3*/
    *(_DWORD *)&this->LocomotionClass[4] = &ShipLocomotionClass::`vftable'; /*0x69eeb9*/
    *(_DWORD *)this->__pad_18 = &off_7F2D68; /*0x69eec0*/
  }
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(*v2 + 12))(v2, &pStm, 1, 0); /*0x69eed3*/
  if ( !(_BYTE)pStm ) /*0x69eedc*/
    return v3; /*0x69ef08*/
  Piggybackee = this->Piggybackee; /*0x69eede*/
  p_Piggybackee = (LPVOID *)&this->Piggybackee; /*0x69eee1*/
  if ( Piggybackee ) /*0x69eee6*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x69eeeb*/
  *p_Piggybackee = 0; /*0x69eef5*/
  return OleLoadFromStream((LPSTREAM)v2, &IID_ILocomotion, p_Piggybackee); /*0x69ef01*/
}



// ==== 0x0069EF10  ShipLocomotionClass::LoadFromStream  this=ShipLocomotionClass  sig=csp ====
int __stdcall ShipLocomotionClass::LoadFromStream(ShipLocomotionClass *this, int *pPStm, int a3)
{
  IStream *v3; // esi
  ShipLocomotionClass *v4; // edi
  int IPersistStream; // ebx
  int v6; // ecx
  ILocomotion *Piggybackee; // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v12; // edx

  v3 = (IStream *)pPStm; /*0x69ef16*/
  v4 = this; /*0x69ef1b*/
  IPersistStream = LoadIPersistStream((LocomotionClass *)this, pPStm, a3); /*0x69ef27*/
  if ( IPersistStream < 0 ) /*0x69ef2b*/
    return IPersistStream; /*0x69ef2b*/
  if ( !v4->Piggybackee ) /*0x69ef36*/
  {
    v12 = *(_DWORD *)v3->__pad_0; /*0x69efd3*/
    LOBYTE(a3) = 0; /*0x69efdf*/
    (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v12 + 16))(v3, &a3, 1, 0); /*0x69efe4*/
    return IPersistStream; /*0x69efe8*/
  }
  v6 = *(_DWORD *)v3->__pad_0; /*0x69ef3c*/
  LOBYTE(a3) = 1; /*0x69ef48*/
  (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v6 + 16))(v3, &a3, 1, 0); /*0x69ef4d*/
  Piggybackee = v4->Piggybackee; /*0x69ef50*/
  pPStm = 0; /*0x69ef53*/
  if ( Piggybackee ) /*0x69ef5d*/
  {
    v8 = (**(int (__stdcall ***)(ILocomotion *, void *, ShipLocomotionClass **))Piggybackee)( /*0x69ef6e*/
           Piggybackee,
           &unk_820270,
           &this);
    if ( v8 >= 0 ) /*0x69ef72*/
    {
      v9 = (int *)this; /*0x69ef8b*/
      if ( pPStm ) /*0x69ef91*/
        (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x69ef96*/
      pPStm = v9; /*0x69ef99*/
    }
    else
    {
      Function::Method_4B4D60((int *)&pPStm); /*0x69ef78*/
      pPStm = 0; /*0x69ef7d*/
    }
    if ( v8 < 0 && v8 != -2147467262 ) /*0x69efa7*/
      WinAPI::Wrapper(v8); /*0x69efaa*/
  }
  v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3); /*0x69efbb*/
  if ( pPStm ) /*0x69efc3*/
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x69efc8*/
  return v10; /*0x69efcd*/
}



// ==== 0x0069EFF0  JumpjetLocomotionClass::StubReturnZero_12  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_12(JumpjetLocomotionClass *this, int a2)
{
  if ( !a2 ) /*0x69eff6*/
    return -2147467261; /*0x69eff8*/
  if ( *(_DWORD *)this->__pad_50 ) /*0x69f004*/
    return -2147467259; /*0x69f02b*/
  *(_DWORD *)this->__pad_50 = a2; /*0x69f012*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x69f018*/
  return 0; /*0x69effd*/
}



// ==== 0x0069F040  JumpjetLocomotionClass::StubReturnZero_13  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_13(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int v3; // eax

  if ( !a2 ) /*0x69f046*/
    return -2147467261; /*0x69f048*/
  v3 = *(_DWORD *)this->__pad_50; /*0x69f054*/
  if ( !v3 ) /*0x69f059*/
    return 1; /*0x69f069*/
  *a2 = v3; /*0x69f05b*/
  *(_DWORD *)this->__pad_50 = 0; /*0x69f05d*/
  return 0; /*0x69f04d*/
}



// ==== 0x0069F080  JumpjetLocomotionClass::CheckPiggybackState_0  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::CheckPiggybackState_0(JumpjetLocomotionClass *this)
{
  return !(*(unsigned __int8 (__stdcall **)(char *))(*((_DWORD *)this - 5) + 16))((char *)this - 20) /*0x69f0b0*/
      && *(_DWORD *)this->__pad_50
      && this->unknown_4D
      && !*(_BYTE *)(*((_DWORD *)this - 3) + 1709);
}



// ==== 0x0069F0C0  ObjectClass::method_69F0C0  this=ObjectClass  sig=csp ====
void *__thiscall sub_69F0C0(ObjectClass *this, void *a2)
{
  ObjectClass *nextObject; // ebx
  int occupant; // edx
  int fallRate; // eax
  ObjectClass *v6; // edx
  double v7; // st7
  int v8; // ecx
  int v9; // eax
  const void *v10; // eax
  int referenceCount; // edx
  Matrix3x4 v13; // [esp+1Ch] [ebp-60h] BYREF
  char v14[48]; // [esp+4Ch] [ebp-30h] BYREF

  Matrix3x4::Identity(&v13); /*0x69f0cc*/
  nextObject = this->nextObject; /*0x69f0d1*/
  if ( nextObject ) /*0x69f0da*/
  {
    occupant = this->occupant; /*0x69f0e0*/
    fallRate = this->fallRate; /*0x69f0e3*/
    if ( occupant != -1 ) /*0x69f0ef*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - occupant >= fallRate ) /*0x69f0f7*/
        fallRate = 0; /*0x69f0fd*/
      else
        fallRate -= *(_DWORD *)&stru_A8EB00.?[416] - occupant; /*0x69f0f9*/
    }
    if ( (double)((int)nextObject - fallRate) / (double)(int)this->nextObject < 1.0 ) /*0x69f118*/
    {
      v6 = this->nextObject; /*0x69f11a*/
      if ( v6 ) /*0x69f123*/
      {
        v8 = this->occupant; /*0x69f12d*/
        v9 = this->fallRate; /*0x69f130*/
        if ( v8 != -1 ) /*0x69f136*/
        {
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v8 >= v9 ) /*0x69f13e*/
            v9 = 0; /*0x69f144*/
          else
            v9 -= *(_DWORD *)&stru_A8EB00.?[416] - v8; /*0x69f140*/
        }
        v7 = (double)((int)v6 - v9) / (double)(int)this->nextObject; /*0x69f150*/
      }
      else
      {
        v7 = 1.0; /*0x69f125*/
      }
      v10 = InterpolateVoxelAnimPose(v14, (int)this->?, this->?, v7); /*0x69f165*/
      goto LABEL_17; /*0x69f16a*/
    }
  }
  referenceCount = this->?; /*0x69f16c*/
  if ( referenceCount ) /*0x69f171*/
  {
    v10 = CopyAudioData(v14, referenceCount); /*0x69f177*/
LABEL_17:
    qmemcpy(&v13, v10, sizeof(v13)); /*0x69f187*/
  }
  qmemcpy(a2, &v13, 0x30u); /*0x69f189*/
  return a2; /*0x69f19a*/
}



// ==== 0x0069F1B0  ObjectClass::method_69F1B0  this=ObjectClass  sig=csp ====
double __thiscall sub_69F1B0(ObjectClass *this)
{
  ObjectClass *nextObject; // esi
  int occupant; // edx
  int fallRate; // eax

  nextObject = this->nextObject; /*0x69f1b4*/
  if ( !nextObject ) /*0x69f1bd*/
    return 1.0; /*0x69f1c9*/
  occupant = this->occupant; /*0x69f1ca*/
  fallRate = this->fallRate; /*0x69f1cd*/
  if ( occupant != -1 ) /*0x69f1d3*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - occupant < fallRate ) /*0x69f1df*/
      return (double)((int)nextObject - (fallRate - (*(_DWORD *)&stru_A8EB00.?[416] - occupant))) /*0x69f1f5*/
           / (double)(int)nextObject;
    fallRate = 0; /*0x69f1f6*/
  }
  return (double)((int)nextObject - fallRate) / (double)(int)nextObject; /*0x69f1c5*/
}



// ==== 0x0069F210  ObjectClass::method_69F210  this=ObjectClass  sig=csp ====
int __thiscall sub_69F210(_DWORD *this, int a2)
{
  int result; // eax
  _DWORD *v3; // ecx
  int v4; // [esp+4h] [ebp-Ch]

  result = this->referenceCount; /*0x69f210*/
  if ( a2 != result ) /*0x69f21c*/
  {
    this->NeedsSaveOrLink = result; /*0x69f21e*/
    this->referenceCount = a2; /*0x69f221*/
    v3 = this + 9; /*0x69f229*/
    *v3 = dword_A8ED84; /*0x69f232*/
    v3[1] = v4; /*0x69f23a*/
    v3[2] = 3; /*0x69f23d*/
    v3[3] = 3; /*0x69f240*/
    return v4; /*0x69f234*/
  }
  return result; /*0x69f244*/
}



// ==== 0x0069F250  ShipLocomotionClass::InitMovementState_0  this=ShipLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::InitMovementState_0(ShipLocomotionClass *this, int a2)
{
  int v3; // [esp+8h] [ebp-Ch]

  this->CurrentRamp = a2; /*0x69f25d*/
  *(_DWORD *)this->__pad_18 = a2; /*0x69f260*/
  this->PreviousRamp = *(_DWORD *)&stru_A8EB00.?[416]; /*0x69f26f*/
  this->SlopeTimer[0] = v3; /*0x69f275*/
  this->SlopeTimer[1] = 0; /*0x69f278*/
  this->SlopeTimer[2] = 0; /*0x69f27b*/
  return &this->PreviousRamp; /*0x69f27e*/
}



// ==== 0x0069F290  JumpjetLocomotionClass::StubReturnTrue_5  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::StubReturnTrue_5(JumpjetLocomotionClass *this)
{
  if ( LODWORD(this->Wobbles) != g_OverlayTypeConfig || *(_QWORD *)&this->Deviation != qword_B077FC ) /*0x69f2b1*/
    return 1; /*0x69f2c1*/
  return (*(_DWORD *)&this->__pad_39[3] != g_OverlayTypeConfig || *(_QWORD *)this->DestinationCoords != qword_B077FC) /*0x69f310*/
      && (*(_DWORD *)&this->__pad_39[3] != this->?->?[0] || this->DestinationCoords[0] != this->?->?[1]);
}



// ==== 0x0069F330  ShipLocomotionClass::StubReturnTrue_6  this=ShipLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::StubReturnTrue_6(ShipLocomotionClass *this)
{
  if ( (unsigned __int8)TimerClass::Active((int)this->?->?) ) /*0x69f33e*/
    return 1; /*0x69f347*/
  return (*(unsigned __int8 (__stdcall **)(ShipLocomotionClass *))(*(_DWORD *)this->LocomotionClass + 16))(this) /*0x69f389*/
      && (this->Dest[2] != g_OverlayTypeConfig || *(_QWORD *)this->HeadToCoord != qword_B077FC)
      && (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 334))(this->?) > 0;
}



// ==== 0x0069F3A0  JumpjetLocomotionClass::GetCoordinate_1  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetCoordinate_1(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int Deviation; // edx
  int v3; // eax

  Deviation = this->Deviation; /*0x69f3ad*/
  v3 = *(_DWORD *)&this->NoWobbles; /*0x69f3b0*/
  *a2 = LODWORD(this->Wobbles); /*0x69f3b5*/
  a2[1] = Deviation; /*0x69f3b7*/
  a2[2] = v3; /*0x69f3ba*/
  return a2; /*0x69f3bf*/
}



// ==== 0x0069F3D0  JumpjetLocomotionClass::GetRenderCoordinate_1  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetRenderCoordinate_1(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax
  FootClass *Owner; // edx
  int *location; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // esi

  if ( *(_DWORD *)&this->__pad_39[3] == g_OverlayTypeConfig && *(_QWORD *)this->DestinationCoords == qword_B077FC ) /*0x69f3ee*/
  {
    Owner = this->?; /*0x69f41b*/
    location = Owner->?; /*0x69f424*/
    v6 = Owner->?[0]; /*0x69f426*/
    v7 = Owner->?[1]; /*0x69f428*/
    v8 = location[2]; /*0x69f42b*/
    *a2 = v6; /*0x69f434*/
    a2[1] = v7; /*0x69f436*/
    a2[2] = v8; /*0x69f439*/
    return a2; /*0x69f42e*/
  }
  else
  {
    v2 = this->DestinationCoords[0]; /*0x69f404*/
    v3 = this->DestinationCoords[1]; /*0x69f407*/
    *a2 = *(_DWORD *)&this->__pad_39[3]; /*0x69f40c*/
    a2[1] = v2; /*0x69f40e*/
    a2[2] = v3; /*0x69f411*/
    return a2; /*0x69f414*/
  }
}



// ==== 0x0069F450  ShipLocomotionClass::ConvertCoordToCell_2  this=ShipLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::ConvertCoordToCell_2(
        ShipLocomotionClass *this,
        _DWORD *a2,
        unsigned int a3,
        unsigned int a4)
{
  _DWORD *result; // eax
  int v5; // ecx
  int v6; // edx

  result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 223))(this->?); /*0x69f45b*/
  if ( !(_BYTE)result ) /*0x69f463*/
  {
    result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 224))(this->?); /*0x69f46e*/
    if ( !(_BYTE)result ) /*0x69f476*/
    {
      result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 117))(this->?); /*0x69f481*/
      if ( !(_BYTE)result ) /*0x69f489*/
      {
        result = (_DWORD *)(*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 118))(this->?); /*0x69f490*/
        if ( !(_BYTE)result ) /*0x69f498*/
        {
          result = a2; /*0x69f49a*/
          v5 = a3; /*0x69f49e*/
          v6 = a4; /*0x69f4a2*/
          this->SlopeTimer[3] = (int)a2; /*0x69f4a9*/
          this->Dest[0] = v5; /*0x69f4ac*/
          this->Dest[1] = v6; /*0x69f4af*/
          if ( result != (_DWORD *)g_OverlayTypeConfig || __PAIR64__(v6, v5) != qword_B077FC ) /*0x69f4c2*/
          {
            a2 = result; /*0x69f4cc*/
            a3 = v5; /*0x69f4d4*/
            a4 = v6; /*0x69f4de*/
            result = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2); /*0x69f4e2*/
            if ( (result[80] & 0x100) != 0 ) /*0x69f4f0*/
            {
              result = (_DWORD *)(dword_B0782C + this->Dest[1]); /*0x69f4fb*/
              this->Dest[1] = (int)result; /*0x69f4fd*/
            }
          }
        }
      }
    }
  }
  return result; /*0x69f500*/
}



// ==== 0x0069F510  ShipLocomotionClass::CheckWindowsErrorWrapper_1  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::CheckWindowsErrorWrapper_1(ShipLocomotionClass *this)
{
  FootClass *Owner; // eax
  _DWORD *vtable2; // esi
  double v3; // st7
  int result; // eax

  if ( this->Dest[2] != g_OverlayTypeConfig || *(_QWORD *)this->HeadToCoord != qword_B077FC ) /*0x69f52d*/
  {
    if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?) + 3220) ) /*0x69f546*/
    {
      Owner = this->?; /*0x69f550*/
      if ( !LOBYTE(Owner[1].?) ) /*0x69f553*/
      {
        vtable2 = Owner[1].?; /*0x69f55d*/
        if ( vtable2 ) /*0x69f565*/
        {
          do /*0x69f597*/
          {
            if ( !vtable2[413] ) /*0x69f567*/
              WinAPI::Wrapper(-2147467261); /*0x69f576*/
            (*(void (__stdcall **)(_DWORD))(*(_DWORD *)vtable2[413] + 72))(vtable2[413]); /*0x69f584*/
            vtable2 = (_DWORD *)vtable2[434]; /*0x69f587*/
          }
          while ( vtable2 && vtable2 != (_DWORD *)vtable2[434] ); /*0x69f597*/
        }
      }
    }
  }
  if ( *(double *)&this->SpeedAccum >= 0.300000011920929 ) /*0x69f5a7*/
    v3 = 0.300000011920929; /*0x69f5ae*/
  else
    v3 = *(double *)&this->SpeedAccum; /*0x69f5a9*/
  *(double *)&this->SpeedAccum = v3; /*0x69f5b4*/
  this->SlopeTimer[3] = g_OverlayTypeConfig; /*0x69f5c0*/
  result = qword_B077FC; /*0x69f5c2*/
  *(_QWORD *)this->Dest = qword_B077FC; /*0x69f5c7*/
  return result; /*0x69f5d3*/
}



// ==== 0x0069F5E0  ObjectClass::method_69F5E0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_69F5E0(ObjectClass *this)
{
  ObjectClass *nextObject; // edi
  double v2; // st7
  int fallRate; // eax
  int occupant; // esi
  float *vtable3; // ecx
  BOOL result; // eax

  nextObject = this->nextObject; /*0x69f5e4*/
  if ( nextObject ) /*0x69f5ed*/
  {
    fallRate = this->fallRate; /*0x69f5f7*/
    occupant = this->occupant; /*0x69f5fb*/
    if ( occupant != -1 ) /*0x69f601*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - occupant >= fallRate ) /*0x69f60d*/
        fallRate = 0; /*0x69f613*/
      else
        fallRate -= *(_DWORD *)&stru_A8EB00.?[416] - occupant; /*0x69f60f*/
    }
    v2 = (double)((int)nextObject - fallRate) / (double)(int)this->nextObject; /*0x69f620*/
  }
  else
  {
    v2 = 1.0; /*0x69f5ef*/
  }
  result = 0; /*0x69f65f*/
  if ( v2 == 1.0 ) /*0x69f630*/
  {
    vtable3 = (float *)this->?; /*0x69f632*/
    if ( fabs(vtable3[202]) < 0.005 && fabs(vtable3[203]) < 0.005 ) /*0x69f65d*/
      return 1; /*0x69f630*/
  }
  return result; /*0x69f664*/
}



// ==== 0x0069F670  JumpjetLocomotionClass::ComputeVoxelTransform2  this=JumpjetLocomotionClass  sig=csp ====
float *__stdcall JumpjetLocomotionClass::ComputeVoxelTransform2(JumpjetLocomotionClass *this, float *a2, _DWORD *a3)
{
  double v3; // st4
  double v4; // st5
  double v5; // st6
  float Accel; // edi
  double v7; // st7
  float Climb; // edx
  int Height; // eax
  FootClass *Owner; // ecx
  long double v11; // st7
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // eax
  FootClass *v18; // ecx
  float *v19; // eax
  float v20; // ebx
  Timeout *p_Climb; // ecx
  Timeout v22; // edi
  int v23; // eax
  double v24; // st7
  float v25; // edi
  const void *v26; // eax
  int v27; // esi
  float *v28; // eax
  float *v29; // edx
  float *v30; // ecx
  int v31; // ecx
  float *Transform; // eax
  float v33; // ebx
  float v34; // edx
  int v35; // eax
  float v36; // edx
  double v37; // st7
  float v38; // ecx
  int v39; // eax
  const void *v40; // eax
  int TurnRate; // esi
  float v43; // [esp+4h] [ebp-234h]
  float v44; // [esp+4h] [ebp-234h]
  float v45; // [esp+4h] [ebp-234h]
  float *v46; // [esp+4h] [ebp-234h]
  float v47; // [esp+14h] [ebp-224h]
  float v48; // [esp+18h] [ebp-220h]
  float v49; // [esp+1Ch] [ebp-21Ch]
  int v50; // [esp+1Ch] [ebp-21Ch]
  float v51; // [esp+20h] [ebp-218h]
  int v52; // [esp+20h] [ebp-218h]
  float v53; // [esp+24h] [ebp-214h]
  int v54; // [esp+24h] [ebp-214h]
  Matrix3x4 v55; // [esp+28h] [ebp-210h] BYREF
  Matrix3x4 v56; // [esp+58h] [ebp-1E0h] BYREF
  Matrix3x4 v57; // [esp+88h] [ebp-1B0h] BYREF
  Transform v58[12]; // [esp+B8h] [ebp-180h] BYREF
  Transform v59[12]; // [esp+E8h] [ebp-150h] BYREF
  float v60[12]; // [esp+118h] [ebp-120h] BYREF
  float v61[12]; // [esp+148h] [ebp-F0h] BYREF
  char v62[48]; // [esp+178h] [ebp-C0h] BYREF
  float v63[12]; // [esp+1A8h] [ebp-90h] BYREF
  _BYTE v64[48]; // [esp+1D8h] [ebp-60h] BYREF
  float v65[12]; // [esp+208h] [ebp-30h] BYREF

  Accel = this->Accel; /*0x69f682*/
  if ( Accel == 0.0 ) /*0x69f68b*/
  {
    v7 = 1.0; /*0x69f68d*/
  }
  else
  {
    Climb = this->Climb; /*0x69f695*/
    Height = this->Height; /*0x69f698*/
    if ( Climb != NAN ) /*0x69f69e*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(Climb) >= Height ) /*0x69f6aa*/
        Height = 0; /*0x69f6b0*/
      else
        Height -= *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(Climb); /*0x69f6ac*/
    }
    v7 = (double)(LODWORD(Accel) - Height) / (double)SLODWORD(this->Accel); /*0x69f6bc*/
  }
  if ( v7 == 1.0 ) /*0x69f6cb*/
  {
    Owner = this->?; /*0x69f6cd*/
    if ( fabs(*(float *)&Owner->?) < 0.005 && fabs(*(float *)&Owner->?) < 0.005 ) /*0x69f6f8*/
    {
      if ( a3 && *a3 != -1 ) /*0x69f9cf*/
      {
        v31 = *a3 << 6; /*0x69f9d1*/
        *a3 = v31; /*0x69f9d4*/
        *a3 = v31 + this->TurnRate; /*0x69f9db*/
      }
      Transform = Turret::GetTransform((LocomotionClass *)this, v60, a3); /*0x69f9e7*/
      Transform::Copy(v59, Transform); /*0x69f9f4*/
      Matrix3x4::Identity(&v55); /*0x69f9fd*/
      v33 = this->Accel; /*0x69fa02*/
      if ( v33 == 0.0 ) /*0x69fa0b*/
        goto LABEL_48; /*0x69fa0b*/
      v34 = this->Climb; /*0x69fa11*/
      v35 = this->Height; /*0x69fa14*/
      if ( v34 != NAN ) /*0x69fa20*/
      {
        if ( *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v34) >= v35 ) /*0x69fa28*/
          v35 = 0; /*0x69fa2e*/
        else
          v35 -= *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v34); /*0x69fa2a*/
      }
      if ( (double)(LODWORD(v33) - v35) / (double)SLODWORD(this->Accel) >= 1.0 ) /*0x69fa49*/
      {
LABEL_48:
        TurnRate = this->TurnRate; /*0x69faa0*/
        if ( !TurnRate ) /*0x69faa5*/
        {
LABEL_51:
          qmemcpy(v58, &v55, sizeof(v58)); /*0x69fad9*/
          v46 = (float *)v59; /*0x69fadb*/
          v29 = (float *)v58; /*0x69fadc*/
          v30 = (float *)v62; /*0x69fae3*/
          goto LABEL_52; /*0x69fae3*/
        }
        v40 = CopyAudioData((char *)v61, TurnRate); /*0x69fab0*/
      }
      else
      {
        v36 = this->Accel; /*0x69fa4b*/
        if ( v36 == 0.0 ) /*0x69fa54*/
        {
          v37 = 1.0; /*0x69fa56*/
        }
        else
        {
          v38 = this->Climb; /*0x69fa5e*/
          v39 = this->Height; /*0x69fa61*/
          if ( v38 != NAN ) /*0x69fa67*/
          {
            if ( *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v38) >= v39 ) /*0x69fa6f*/
              v39 = 0; /*0x69fa75*/
            else
              v39 -= *(_DWORD *)&stru_A8EB00.?[416] - LODWORD(v38); /*0x69fa71*/
          }
          v37 = (double)(LODWORD(v36) - v39) / (double)SLODWORD(this->Accel); /*0x69fa81*/
        }
        v40 = InterpolateVoxelAnimPose(v63, this->Speed, this->TurnRate, v37); /*0x69fa99*/
      }
      qmemcpy(&v55, v40, sizeof(v55)); /*0x69fac0*/
      goto LABEL_51; /*0x69fac0*/
    }
  }
  Matrix3x4::Identity(&v56); /*0x69f702*/
  Matrix3x4::Identity(&v57); /*0x69f70e*/
  v11 = *(double *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?) + 864); /*0x69f721*/
  v49 = v11; /*0x69f729*/
  v51 = *(double *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?) + 872); /*0x69f73f*/
  Math::ArcTan2(*(float *)&this->?->?); /*0x69f74c*/
  v47 = v3; /*0x69f754*/
  Math::SinCos(*(float *)&this->?->?); /*0x69f761*/
  v53 = v4; /*0x69f769*/
  Math::ArcTan2(*(float *)&this->?->?); /*0x69f776*/
  v48 = v5; /*0x69f77e*/
  Math::SinCos(*(float *)&this->?->?); /*0x69f78b*/
  LOWORD(v12) = Math::RoundToInt(fabs(v11) * v49 + fabs(v53) * v51); /*0x69f7a5*/
  v54 = v12; /*0x69f7b2*/
  LOWORD(v13) = Math::RoundToInt(v47 * v51); /*0x69f7b6*/
  LOWORD(v14) = Math::RoundToInt(v51 - (double)v13); /*0x69f7c7*/
  v15 = v14; /*0x69f7d4*/
  v52 = v14; /*0x69f7d6*/
  LOWORD(v16) = Math::RoundToInt(v48 * v49); /*0x69f7da*/
  LOWORD(v17) = Math::RoundToInt(v49 - (double)v16); /*0x69f7eb*/
  v18 = this->?; /*0x69f7f0*/
  v50 = v17; /*0x69f7f5*/
  if ( *(float *)&v18->? < 0.0 ) /*0x69f80a*/
    v52 = -v15; /*0x69f80e*/
  if ( *(float *)&v18->? > 0.0 ) /*0x69f823*/
    v50 = -v17; /*0x69f827*/
  v43 = (float)v54; /*0x69f834*/
  Matrix3x3::ApplyCol1(v56.m_Data, v43); /*0x69f837*/
  v44 = (float)v52; /*0x69f848*/
  Matrix3x4::Translate(v57.m_Data, v44); /*0x69f84b*/
  v45 = (float)v50; /*0x69f85c*/
  Matrix3x3::ApplyCol0(v57.m_Data, v45); /*0x69f85f*/
  Matrix3x3::RotateX(v57.m_Data, *(float *)&this->?->?); /*0x69f875*/
  Matrix3D::RotateZ(v57.m_Data, *(float *)&this->?->?); /*0x69f88b*/
  if ( a3 ) /*0x69f895*/
    *a3 = -1; /*0x69f897*/
  v19 = Turret::GetTransform((LocomotionClass *)this, v65, a3); /*0x69f8a7*/
  Transform::Copy(v58, v19); /*0x69f8b4*/
  Matrix3x4::Identity(&v55); /*0x69f8bd*/
  v20 = this->Accel; /*0x69f8c2*/
  p_Climb = (Timeout *)&this->Climb; /*0x69f8c5*/
  if ( v20 != 0.0 ) /*0x69f8ce*/
  {
    v22 = *p_Climb; /*0x69f8d0*/
    v23 = this->Height; /*0x69f8d2*/
    if ( *p_Climb != -1 ) /*0x69f8d8*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - *(_DWORD *)&v22 >= v23 ) /*0x69f8e4*/
        v23 = 0; /*0x69f8ea*/
      else
        v23 -= *(_DWORD *)&stru_A8EB00.?[416] - *(_DWORD *)&v22; /*0x69f8e6*/
    }
    if ( (double)(LODWORD(v20) - v23) / (double)SLODWORD(this->Accel) < 1.0 ) /*0x69f905*/
    {
      if ( LODWORD(this->Accel) ) /*0x69f907*/
      {
        v25 = this->Accel; /*0x69f916*/
        v24 = (double)(LODWORD(v25) - Timeout::GetRemaining(p_Climb)) / (double)SLODWORD(v25); /*0x69f92c*/
      }
      else
      {
        v24 = 1.0; /*0x69f90e*/
      }
      v26 = InterpolateVoxelAnimPose(v64, this->Speed, this->TurnRate, v24); /*0x69f944*/
      goto LABEL_29; /*0x69f949*/
    }
  }
  v27 = this->TurnRate; /*0x69f94b*/
  if ( v27 ) /*0x69f950*/
  {
    v26 = CopyAudioData(v62, v27); /*0x69f95b*/
LABEL_29:
    qmemcpy(&v55, v26, sizeof(v55)); /*0x69f96b*/
  }
  qmemcpy(v59, &v55, sizeof(v59)); /*0x69f984*/
  v46 = (float *)&v57; /*0x69f994*/
  v28 = MultiplyMatrix3x4(v61, (float *)v56.m_Data, (float *)&v59[0].Transform_field_00); /*0x69f9a2*/
  v29 = MultiplyMatrix3x4(v63, v28, (float *)&v58[0].Transform_field_00); /*0x69f9b5*/
  v30 = v60; /*0x69f9b7*/
LABEL_52:
  qmemcpy(&v56, MultiplyMatrix3x4(v30, v29, v46), sizeof(v56)); /*0x69faea*/
  qmemcpy(a2, &v56, 0x30u); /*0x69fb0a*/
  return a2; /*0x69fb0c*/
}



// ==== 0x0069FB20  ShipLocomotionClass::ComputeAudio3DRotation_1  this=ShipLocomotionClass  sig=csp ====
float *__stdcall JumpjetLocomotionClass::ComputeAudio3DRotation_1(ShipLocomotionClass *this, float *a2, _DWORD *a3)
{
  int v3; // edi
  double v4; // st7
  int PreviousRamp; // edx
  int v6; // eax
  FootClass *Owner; // edx
  float v9[12]; // [esp+Ch] [ebp-30h] BYREF

  v3 = this->SlopeTimer[2]; /*0x69fb29*/
  if ( v3 ) /*0x69fb32*/
  {
    PreviousRamp = this->PreviousRamp; /*0x69fb3c*/
    v6 = this->SlopeTimer[1]; /*0x69fb3f*/
    if ( PreviousRamp != -1 ) /*0x69fb45*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - PreviousRamp >= v6 ) /*0x69fb51*/
        v6 = 0; /*0x69fb57*/
      else
        v6 -= *(_DWORD *)&stru_A8EB00.?[416] - PreviousRamp; /*0x69fb53*/
    }
    v4 = (double)(v3 - v6) / (double)this->SlopeTimer[2]; /*0x69fb63*/
  }
  else
  {
    v4 = 1.0; /*0x69fb34*/
  }
  if ( v4 != 1.0 || (Owner = this->?, fabs(*(float *)&Owner->?) >= 0.005) || fabs(*(float *)&Owner->?) >= 0.005 ) /*0x69fba3*/
  {
    if ( a3 ) /*0x69fba7*/
      *a3 = -1; /*0x69fba9*/
  }
  qmemcpy(a2, Audio3D::ComputeRotation((IUnknown *)this, v9, a3), 0x30u); /*0x69fbc8*/
  return a2; /*0x69fbca*/
}



// ==== 0x0069FBE0  ShipLocomotionClass::DispatchVirtualCall_6  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::DispatchVirtualCall_6(ShipLocomotionClass *this)
{
  int v1; // edi
  int v2; // eax

  v1 = *(_DWORD *)this->LocomotionClass; /*0x69fbe9*/
  v2 = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 111))(this->?); /*0x69fbed*/
  return (*(int (__stdcall **)(ShipLocomotionClass *, _DWORD))(v1 + 124))(this, *(unsigned __int8 *)(v2 + 284)); /*0x69fc00*/
}



// ==== 0x0069FC10  ShipLocomotionClass::ProcessImpact  this=ShipLocomotionClass  sig=csp ====
char __stdcall BulletTypeClass::ProcessImpact(ShipLocomotionClass *this)
{
  ShipLocomotionClass *v1; // esi
  char *v2; // edi
  int v3; // eax
  int v4; // ecx
  AbstractClass *movementDestination; // ecx
  FootClass *v6; // ecx
  AbstractClass *v7; // ebp
  _WORD *v8; // eax
  FootClass *v9; // ecx
  FootClass *Owner; // ecx
  FootClass *v12; // ecx
  AnimClass *v13; // eax
  int *location; // ecx
  FootClass *v15; // ecx
  FootClass *v16; // eax
  FootClass *v17; // eax
  AbstractClass *v18; // ecx
  _DWORD *v19; // eax
  FootClass *v20; // ecx
  int v21; // ecx
  char v22; // [esp-4h] [ebp-24h]
  int v23; // [esp+10h] [ebp-10h] BYREF
  int v24; // [esp+14h] [ebp-Ch]
  int v25; // [esp+18h] [ebp-8h]

  v1 = this; /*0x69fc16*/
  v2 = (char *)this - 4; /*0x69fc28*/
  v3 = *(unsigned __int8 *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 111))(this->?) + 284); /*0x69fc31*/
  v4 = *((_DWORD *)v2 + 7); /*0x69fc33*/
  if ( v3 != v4 ) /*0x69fc38*/
  {
    *((_DWORD *)v2 + 8) = v4; /*0x69fc3a*/
    *((_DWORD *)v2 + 7) = v3; /*0x69fc43*/
    Timer::Start((Timer *)&v23, 3); /*0x69fc46*/
    *((_DWORD *)v2 + 9) = v23; /*0x69fc57*/
    *((_DWORD *)v2 + 10) = v24; /*0x69fc5d*/
    *((_DWORD *)v2 + 11) = v25; /*0x69fc64*/
    *((_DWORD *)v2 + 12) = 3; /*0x69fc67*/
  }
  if ( v1->MovementSpeed[1] == -1 || !HIBYTE(v1->TrackIndex) ) /*0x69fc7a*/
  {
    movementDestination = v1->?->movementDestination; /*0x69fd16*/
    if ( movementDestination /*0x69fd54*/
      && (*((int (__thiscall **)(AbstractClass *))movementDestination->vtable0 + 11))(movementDestination) == 11
      && (v6 = v1->?,
          v7 = v6->movementDestination + 1,
          v8 = (_WORD *)(*((int (__thiscall **)(FootClass *, ShipLocomotionClass **))v6->TechnoClass + 110))(v6, &this),
          *v8 == LOWORD(v7->vtable0))
      && v8[1] == HIWORD(v7->vtable0) )
    {
      v9 = (FootClass *)*((_DWORD *)v2 + 3); /*0x69fd56*/
      if ( !*(_DWORD *)&v9->__pad_58C[12] ) /*0x69fd59*/
        goto LABEL_20; /*0x69fd5f*/
    }
    else
    {
      Owner = v1->?; /*0x69fd7f*/
      if ( Owner->? != 5 /*0x69fddc*/
        || HIBYTE(v1->TrackIndex)
        || v1->SlopeTimer[3] == g_OverlayTypeConfig && *(_QWORD *)v1->Dest == qword_B077FC
        || Owner->?[0] != v1->SlopeTimer[3]
        || Owner->?[1] != v1->Dest[0]
        || Owner->?[2] != v1->Dest[1] )
      {
        if ( (unsigned __int8)TimerClass::Active((int)Owner->?) ) /*0x69fe28*/
        {
          BYTE2(v1->TrackIndex) = 1; /*0x69fe35*/
          goto LABEL_32; /*0x69fe35*/
        }
        if ( BYTE2(v1->TrackIndex) ) /*0x69ff5d*/
        {
          BYTE2(v1->TrackIndex) = 0; /*0x69ff62*/
          (*((void (__thiscall **)(FootClass *, _DWORD))v1->?->TechnoClass + 99))(v1->?, 0); /*0x69ff6b*/
          v16 = v1->?; /*0x69ff71*/
          if ( !v16->? || v16->? || v16->? ) /*0x69ff84*/
            return 0; /*0x69ff95*/
        }
        if ( (*((int (__thiscall **)(FootClass *))v1->?->TechnoClass + 97))(v1->?) == 5 /*0x69ffc4*/
          && !(*(unsigned __int8 (__stdcall **)(ShipLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 16))(v1)
          || (*((int (__thiscall **)(FootClass *))v1->?->TechnoClass + 97))(v1->?) == 16 )
        {
          goto LABEL_32; /*0x69ffc4*/
        }
        if ( !(*(unsigned __int8 (__stdcall **)(ShipLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 16))(v1) ) /*0x69ffcd*/
        {
          v17 = v1->?; /*0x69ffd8*/
          if ( v17->pathDirections[0] == -1 ) /*0x69ffe1*/
          {
            if ( v17->? ) /*0x69ffe7*/
            {
              if ( *((_DWORD *)v2 + 16) != g_OverlayTypeConfig || *(_QWORD *)(v2 + 68) != qword_B077FC ) /*0x6a0006*/
              {
                *((_DWORD *)v2 + 16) = g_OverlayTypeConfig; /*0x6a0015*/
                *(_QWORD *)(v2 + 68) = qword_B077FC; /*0x6a001d*/
                v2[99] = 0; /*0x6a0029*/
              }
              v1->SpeedAccum = 0; /*0x6a002c*/
              v1->MovementSpeed[0] = 0; /*0x6a002f*/
            }
            else
            {
              v18 = v17->movementDestination; /*0x6a0037*/
              if ( v18 ) /*0x6a003f*/
              {
                v19 = (_DWORD *)(*((int (__thiscall **)(AbstractClass *, int *, FootClass *))v18->vtable0 + 19))( /*0x6a004d*/
                                  v18,
                                  &v23,
                                  v1->?);
                (*(void (__stdcall **)(ShipLocomotionClass *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v1->LocomotionClass /*0x6a0069*/
                                                                                     + 68))(
                  v1,
                  *v19,
                  v19[1],
                  v19[2]);
              }
            }
            goto LABEL_32; /*0x6a0032*/
          }
        }
        v20 = v1->?; /*0x6a0074*/
        if ( v20->? /*0x6a00ab*/
          && (*((int (__thiscall **)(FootClass *))v20->TechnoClass + 97))(v20) != 7
          && (*(unsigned __int8 (__stdcall **)(ShipLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 16))(v1)
          && !(*((unsigned __int8 (__thiscall **)(FootClass *, int *))v1->?->TechnoClass + 179))(
                v1->?,
                &v1->SlopeTimer[3]) )
        {
          if ( *((_DWORD *)v2 + 16) != g_OverlayTypeConfig || *(_QWORD *)(v2 + 68) != qword_B077FC ) /*0x6a00cc*/
          {
            *((_DWORD *)v2 + 16) = g_OverlayTypeConfig; /*0x6a00db*/
            *(_QWORD *)(v2 + 68) = qword_B077FC; /*0x6a00e3*/
            v2[99] = 0; /*0x6a00ef*/
          }
          v21 = *((_DWORD *)v2 + 3); /*0x6a00f2*/
          if ( *(_DWORD *)(v21 + 1432) ) /*0x6a00f5*/
          {
            FootClass::ClearPathIndex((FootClass *)v21); /*0x6a010d*/
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)v2 + 3) + 1156))( /*0x6a011a*/
                   *((_DWORD *)v2 + 3),
                   0,
                   1) )
            {
              return 0; /*0x6a0131*/
            }
          }
          else
          {
            (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v21 + 1152))(v21, 0, 1); /*0x6a0102*/
          }
          goto LABEL_32; /*0x6a0108*/
        }
        LOBYTE(this) = 0; /*0x6a013e*/
        WalkLocomotion::Update((int)&v1[-1].Piggybackee, &this, 1, 0); /*0x6a0142*/
        if ( (_BYTE)this ) /*0x6a014b*/
          return 0; /*0x6a0156*/
        if ( !v1->?->? ) /*0x6a015c*/
          return 0; /*0x6a016d*/
        v22 = 0; /*0x6a0170*/
        goto LABEL_81; /*0x6a0170*/
      }
      v9 = (FootClass *)*((_DWORD *)v2 + 3); /*0x69fdde*/
      if ( !*(_DWORD *)&v9->__pad_58C[12] ) /*0x69fde7*/
      {
LABEL_20:
        (*((void (__thiscall **)(FootClass *, _DWORD, int))v9->TechnoClass + 288))(v9, 0, 1); /*0x69fd65*/
        return 0; /*0x69fd79*/
      }
    }
    FootClass::ClearPathIndex(v9); /*0x69fe00*/
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)v2 + 3) + 1156))(*((_DWORD *)v2 + 3), 0, 1); /*0x69fe0d*/
    return 0; /*0x69fe1c*/
  }
  if ( WalkLocomotion::ProcessCollision((int)&v1[-1].Piggybackee, 0) || !v1->?->? ) /*0x69fc96*/
    return 0; /*0x69fc9c*/
  if ( v1->MovementSpeed[1] != -1 /*0x69fcd4*/
    || !(*(unsigned __int8 (__stdcall **)(ShipLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 16))(v1)
    && v1->?->pathDirections[0] == -1
    || (*((int (__thiscall **)(FootClass *))v1->?->TechnoClass + 11))(v1->?) == 1 && BYTE1(v1->?[1].?) )
  {
    goto LABEL_32; /*0x69fcda*/
  }
  LOBYTE(this) = 0; /*0x69fcea*/
  WalkLocomotion::Update((int)&v1[-1].Piggybackee, &this, 1, 0); /*0x69fcee*/
  if ( (_BYTE)this || !v1->?->? ) /*0x69fd00*/
    return 0; /*0x69fd06*/
  v22 = 1; /*0x69fd0c*/
LABEL_81:
  WalkLocomotion::ProcessCollision((int)&v1[-1].Piggybackee, v22); /*0x6a0171*/
  if ( !v1->?->? ) /*0x6a017b*/
    return 0; /*0x6a018a*/
LABEL_32:
  if ( (*(unsigned __int8 (__stdcall **)(ShipLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 128))(v1) ) /*0x69fe3c*/
  {
    if ( !(*(_DWORD *)&stru_A8EB00.?[416] % 8) /*0x69fe6e*/
      && !*(_BYTE *)((*((int (__thiscall **)(FootClass *))v1->?->TechnoClass + 33))(v1->?) + 3433) )
    {
      v12 = v1->?; /*0x69fe76*/
      if ( !v12->? && *(_DWORD *)((*((int (__thiscall **)(FootClass *))v12->TechnoClass + 111))(v12) + 236) == 2 ) /*0x69fe90*/
      {
        if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 148) ) /*0x69fe97*/
        {
          v13 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x69fea4*/
          if ( v13 ) /*0x69feae*/
          {
            location = v1->?->?; /*0x69feb4*/
            v23 = *location; /*0x69fec5*/
            v24 = location[1]; /*0x69fecc*/
            v25 = location[2]; /*0x69fed8*/
            AnimClass::ctor( /*0x69feeb*/
              v13,
              *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 148),
              &v23,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
        }
      }
    }
  }
  if ( v1->SlopeTimer[3] == g_OverlayTypeConfig /*0x69ff1e*/
    && v1->Dest[0] == (_DWORD)qword_B077FC
    && *(_QWORD *)&v1->Dest[1] == __PAIR64__(g_OverlayTypeConfig, HIDWORD(qword_B077FC))
    && *(_QWORD *)v1->HeadToCoord == qword_B077FC )
  {
    v15 = v1->?; /*0x69ff25*/
    if ( v15->pathDirections[0] == -1 && *(double *)v15->currentSpeed_percentage > 0.0 ) /*0x69ff41*/
      (*((void (__thiscall **)(FootClass *, _DWORD, _DWORD))v15->TechnoClass + 337))(v15, 0, 0); /*0x69ff47*/
  }
  return (*(char (__stdcall **)(ShipLocomotionClass *))(*(_DWORD *)v1->LocomotionClass + 16))(v1); /*0x69fd72*/
}


