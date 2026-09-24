// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00690150  nullsub_227  this=-  sig=ida-proto ====
void __cdecl nullsub_227()
{
  ; /*0x690150*/
}



// ==== 0x00690160  Screen::TransitionLoop  this=Screen  sig=csp ====
int __thiscall Screen_TransitionLoop(int *this, int a2)
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
  DWORD Ticks; // [esp+24h] [ebp-48h]
  int v16; // [esp+2Ch] [ebp-40h]
  _DWORD v17[4]; // [esp+3Ch] [ebp-30h] BYREF
  struct tagRECT Rect; // [esp+4Ch] [ebp-20h] BYREF
  _DWORD v19[4]; // [esp+5Ch] [ebp-10h] BYREF

  Ticks = Timer::GetTicks(); /*0x690178*/
  v16 = 1; /*0x69017c*/
  do
  {
    Screen::CleanupTransitionObjects(this); /*0x690189*/
    GetClientRect(g_hWnd, &Rect); /*0x69019a*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x6901ab*/
    v3 = *this; /*0x6901b1*/
    v4 = this->q001; /*0x6901c4*/
    v17[0] = *this + Rect.left; /*0x6901c7*/
    v17[1] = v4 + Rect.top; /*0x6901d7*/
    v17[2] = 640; /*0x6901db*/
    v17[3] = 400; /*0x6901e3*/
    Rect::Set(v19, v3, v4, 640, 400); /*0x6901eb*/
    if ( g_WWMouseClass_Instance ) /*0x6901f8*/
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)g_WWMouseClass_Instance + 60))( /*0x690205*/
        g_WWMouseClass_Instance,
        g_DSurface_Hidden,
        0);
    (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)g_DSurface_Primary + 8))( /*0x690225*/
      g_DSurface_Primary,
      v17,
      g_DSurface_Hidden,
      v19,
      0,
      1);
    if ( g_WWMouseClass_Instance ) /*0x690230*/
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)g_WWMouseClass_Instance + 64))( /*0x69023d*/
        g_WWMouseClass_Instance,
        g_DSurface_Hidden,
        0);
    do
    {
      Event::Dispatch(); /*0x690240*/
      MessageLoop(); /*0x690245*/
      if ( !g_DDraw_Active )
      {
        if ( Ticks == -1
          || ((v5 = Timer::GetTicks() - Ticks, v5 >= v16) ? (v6 = 0) : (v6 = v16 - v5), v16 = v6, g_DDraw_Active != 1) )
        {
          for ( i = 0; i < this->u32_2C; ++i ) /*0x690292*/
          {
            v8 = *(_DWORD *)(this->q008 + 4 * i); /*0x690297*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8); /*0x69029c*/
          }
          while ( !g_DDraw_Active ) /*0x6902ae*/
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



// ==== 0x00690360  Screen::CleanupTransitionObjects  this=MultiplayerGameMode  sig=csp ====
int __thiscall sub_690360(_DWORD *this)
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
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)g_DSurface_Hidden + 24))(g_DSurface_Hidden, 0); /*0x690385*/
    (*(void (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)g_DSurface_Hidden + 4))( /*0x69039a*/
      g_DSurface_Hidden,
      DSurface_Alternate,
      0,
      1);
  }
  result = this->q02C; /*0x69039d*/
  for ( i = 0; i < result; ++i ) /*0x6903a4*/
  {
    v4 = *(_DWORD *)(this->q020 + 4 * i); /*0x6903ad*/
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 12))(v4, this->u32_8) == 1 ) /*0x6903b7*/
    {
      v5 = *(void (__thiscall ****)(_DWORD, int))(this->q020 + 4 * i); /*0x6903bc*/
      if ( v5 ) /*0x6903c1*/
        (**v5)(v5, 1); /*0x6903c7*/
      v6 = this->q02C; /*0x6903c9*/
      if ( i < v6 ) /*0x6903ce*/
      {
        v7 = v6 - 1; /*0x6903d0*/
        v8 = i; /*0x6903d3*/
        for ( this->q02C = v7; /*0x6903da*/
              v8 < this->q02C;
              *(_DWORD *)(this->q020 + 4 * v8 - 4) = *(_DWORD *)(this->q020 + 4 * v8) )
        {
          ++v8; /*0x6903df*/
        }
      }
    }
    result = this->q02C; /*0x6903ee*/
  }
  return result; /*0x6903f6*/
}



// ==== 0x00690400  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_690400(int *this)
{
  int v2; // eax
  int v3; // esi
  int result; // eax
  _DWORD v5[4]; // [esp+8h] [ebp-30h] BYREF
  _DWORD v6[4]; // [esp+18h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+28h] [ebp-10h] BYREF

  GetClientRect(g_hWnd, &Rect); /*0x690412*/
  ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x690423*/
  v2 = *this; /*0x690429*/
  v3 = this->vtable2; /*0x69042f*/
  v5[0] = v2; /*0x690432*/
  v6[0] = v2 + Rect.left; /*0x69043d*/
  v5[1] = v3; /*0x690441*/
  v6[3] = 400; /*0x69044d*/
  v5[3] = 400; /*0x690451*/
  v6[1] = v3 + Rect.top; /*0x69045b*/
  v6[2] = 640; /*0x690467*/
  v5[2] = 640; /*0x69046b*/
  if ( g_WWMouseClass_Instance ) /*0x69046f*/
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)g_WWMouseClass_Instance + 60))( /*0x69047c*/
      g_WWMouseClass_Instance,
      g_DSurface_Hidden,
      0);
  result = (*(int (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)g_DSurface_Primary + 8))( /*0x69049c*/
             g_DSurface_Primary,
             v6,
             g_DSurface_Hidden,
             v5,
             0,
             1);
  if ( g_WWMouseClass_Instance ) /*0x6904a7*/
    return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)g_WWMouseClass_Instance + 64))( /*0x6904b4*/
             g_WWMouseClass_Instance,
             g_DSurface_Hidden,
             0);
  return result; /*0x6904b7*/
}



// ==== 0x00690530  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_690530(_DWORD *this, void *a2, int a3)
{
  int i; // esi

  if ( a2 ) /*0x69053b*/
  {
    if ( Audio::IsSoundEnabled() ) /*0x69053d*/
    {
      for ( i = 0; i < this->q044; ++i ) /*0x69054d*/
      {
        if ( !_strcmpi(a2, **(const void ***)(this->attachedBomb + 4 * i)) ) /*0x690559*/
          break; /*0x690563*/
      }
    }
  }
}



// ==== 0x006905F0  ScoreFontClass::method_6905F0  this=ScoreFontClass  sig=csp ====
char *__thiscall sub_6905F0(_DWORD *this)
{
  void *v2; // eax
  char *result; // eax

  v2 = (void *)this->q00C; /*0x6905f6*/
  *this = &ScoreFontClass::`vftable'; /*0x6905f9*/
  if ( v2 && this->q040 == 1 ) /*0x690607*/
  {
    __3_YAXPAX_Z(v2); /*0x69060a*/
    this->q00C = 0; /*0x690612*/
    this->q040 = 0; /*0x690615*/
  }
  result = (char *)--dword_B0558C; /*0x69061d*/
  if ( !dword_B0558C ) /*0x690623*/
  {
    result = &byte_B05594; /*0x690625*/
    do /*0x690637*/
    {
      *((_DWORD *)result - 1) = 0; /*0x69062a*/
      *result = 0; /*0x69062d*/
      result += 8; /*0x69062f*/
    }
    while ( (int)result < (int)((char *)&dbl_B055A8 + 4) ); /*0x690637*/
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
int __thiscall ScoreFontClass::_vt02(void *this, __int16 *a2)
{
  __int16 *v2; // edi
  int v3; // esi
  __int16 i; // ax

  v2 = a2; /*0x6907a3*/
  v3 = 0; /*0x6907a7*/
  for ( i = *a2; *v2; i = *v2 ) /*0x6907ab*/
  {
    ++v2; /*0x6907b8*/
    v3 += (*(int (__thiscall **)(void *, __int16))(this->q004)(this, i) + 1; /*0x6907be*/
  }
  return v3; /*0x6907cc*/
}



// ==== 0x006907E0  ScoreFontClass::AddRef  this=ScoreFontClass  sig=csp ====
int __stdcall ScoreFontClass::_vt01(__int16 szSrc)
{
  int v2; // eax
  CHAR szDst; // [esp+7h] [ebp-11h] BYREF
  _DWORD v4[4]; // [esp+8h] [ebp-10h] BYREF

  if ( szSrc == 32 ) /*0x6907f3*/
    return 8; /*0x6907f5*/
  CharToOemBuffA((LPCSTR)&szSrc, &szDst, 1u); /*0x69080d*/
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
void __thiscall BuildingClass_DrawFoundationChar2(int *this, int a2, CHAR szSrc, int a4, int a5, int a6, int a7)
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
    DrawToSurfaceSHP(a2, this->q005, this->q00C, a6 + v9, v12, v11, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6908fd*/
  }
}



// ==== 0x00690910  ScoreFontClass::DrawFoundationChar  this=ScoreFontClass  sig=csp ====
__int16 __thiscall BuildingClass_DrawFoundationChar(int *this, int szSrc, _WORD *a3, int a4, int a5, int a6)
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
        DrawToSurfaceSHP(v9, this->q005, this->q00C, a6 + v11, v18, v13, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6909cb*/
        v6 = a3; /*0x6909d0*/
      }
      v14 = (*(int (__thiscall **)(int *, _WORD))(*this + 4))(this, *v6++); /*0x6909dc*/
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
_DWORD *__thiscall sub_690A10(_DWORD *this, int a2)
{
  int v3; // eax
  _DWORD v5[22]; // [esp+8h] [ebp-6Ch] BYREF
  _BYTE v6[12]; // [esp+60h] [ebp-14h] BYREF
  int v7; // [esp+6Ch] [ebp-8h]

  this->q004 = 0; /*0x690a19*/
  this->q008 = 0; /*0x690a1c*/
  this->q00C = 0; /*0x690a1f*/
  this->q050 = 0; /*0x690a22*/
  *this = &ScoreFontClass::`vftable'; /*0x690a25*/
  ScoreScreen::LoadAudio(); /*0x690a2b*/
  ++dword_B0558C; /*0x690a3c*/
  *this = &ScoreFullFontClass::`vftable'; /*0x690a44*/
  this->q040 = 0; /*0x690a4a*/
  v3 = SearchMIXFile(g_Str_File_FULLFNT3_SHP, 0); /*0x690a4d*/
  this->q00C = v3; /*0x690a54*/
  if ( !v3 ) /*0x690a57*/
  {
    CCFileClass::Construct(v5, g_Str_File_FULLFNT3_SHP); /*0x690a62*/
    this->q00C = CCFileClass::ReadEntireFile(v5); /*0x690a74*/
    this->q040 = 1; /*0x690a77*/
    CCFileClass::Reset(v5); /*0x690a7b*/
    Debug::Log(); /*0x690a85*/
    v5[0] = &CCFileClass::`vftable'; /*0x690a91*/
    v7 = 0; /*0x690a99*/
    Vector::Clear((int)v6); /*0x690a9d*/
    v5[0] = &off_7E1668; /*0x690aa6*/
    BufferIOFileClass::Dtor(v5); /*0x690aae*/
  }
  this->q004 = 11; /*0x690ab7*/
  this->q050 = a2; /*0x690abe*/
  this->q008 = 21; /*0x690ac1*/
  return this; /*0x690aca*/
}



// ==== 0x00690AE0  ScoreScreen::LoadCountryFlags  this=ScoreFontClass  sig=csp ====
_DWORD *__thiscall sub_690AE0(_DWORD *this, int a2)
{
  int v3; // eax
  _DWORD v5[22]; // [esp+8h] [ebp-6Ch] BYREF
  _BYTE v6[12]; // [esp+60h] [ebp-14h] BYREF
  int v7; // [esp+6Ch] [ebp-8h]

  this->q004 = 0; /*0x690ae9*/
  this->q008 = 0; /*0x690aec*/
  this->q00C = 0; /*0x690aef*/
  this->q050 = 0; /*0x690af2*/
  *this = &ScoreFontClass::`vftable'; /*0x690af5*/
  ScoreScreen::LoadAudio(); /*0x690afb*/
  ++dword_B0558C; /*0x690b0c*/
  *this = &ScoreBigFontClass::`vftable'; /*0x690b14*/
  this->q040 = 0; /*0x690b1a*/
  v3 = SearchMIXFile(aBigfontShp, 0); /*0x690b1d*/
  this->q00C = v3; /*0x690b24*/
  if ( !v3 ) /*0x690b27*/
  {
    CCFileClass::Construct(v5, aBigfontShp); /*0x690b32*/
    this->q00C = CCFileClass::ReadEntireFile(v5); /*0x690b44*/
    this->q040 = 1; /*0x690b47*/
    CCFileClass::Reset(v5); /*0x690b4b*/
    Debug::Log(); /*0x690b55*/
    v5[0] = &CCFileClass::`vftable'; /*0x690b61*/
    v7 = 0; /*0x690b69*/
    Vector::Clear((int)v6); /*0x690b6d*/
    v5[0] = &off_7E1668; /*0x690b76*/
    BufferIOFileClass::Dtor(v5); /*0x690b7e*/
  }
  this->q004 = 20; /*0x690b87*/
  this->q050 = a2; /*0x690b8e*/
  this->q008 = 35; /*0x690b91*/
  return this; /*0x690b9a*/
}



// ==== 0x00690C00  ScoreTimeClass::AdvanceFrame  this=ScoreTimeClass  sig=csp ====
char __thiscall ScoreAnimClass::sub_690C00(_DWORD *this, int a2)
{
  signed int v3; // edi
  signed int v4; // eax
  int v5; // edi
  DWORD Ticks; // eax
  int v7; // edx
  int v8; // ecx
  int *v9; // eax
  int *v10; // eax
  int v12; // [esp+8h] [ebp-1Ch] BYREF
  int v13; // [esp+Ch] [ebp-18h]
  _BYTE v14[16]; // [esp+14h] [ebp-10h] BYREF

  v3 = this->q014; /*0x690c0a*/
  if ( this->u32_C == -1 ) /*0x690c10*/
  {
LABEL_4:
    if ( v3 ) /*0x690c25*/
      return 0; /*0x690c25*/
    goto LABEL_5; /*0x690c25*/
  }
  v4 = Timer::GetTicks() - this->u32_C; /*0x690c1a*/
  if ( v4 < v3 ) /*0x690c1f*/
  {
    v3 -= v4; /*0x690c21*/
    goto LABEL_4; /*0x690c21*/
  }
LABEL_5:
  v5 = this->q024; /*0x690c2b*/
  Ticks = Timer::GetTicks(); /*0x690c32*/
  v7 = this->q01C; /*0x690c37*/
  v8 = this->q020; /*0x690c3a*/
  this->u32_C = Ticks; /*0x690c3d*/
  this->q010 = v13; /*0x690c45*/
  this->q014 = v5; /*0x690c4a*/
  this->q01C = v7 + 1; /*0x690c4f*/
  if ( v7 + 1 >= v8 ) /*0x690c52*/
    this->q01C = 0; /*0x690c54*/
  v12 = this->q004; /*0x690c6d*/
  v13 = this->q008; /*0x690c7c*/
  v9 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)g_DSurface_Hidden + 120))(g_DSurface_Hidden, v14); /*0x690c8c*/
  DrawToSurfaceSHP( /*0x690ca6*/
    g_DSurface_Hidden,
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
  v12 = this->q004; /*0x690cbd*/
  v13 = this->q008; /*0x690ccc*/
  v10 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)DSurface_Alternate + 120))(DSurface_Alternate, v14); /*0x690cdc*/
  DrawToSurfaceSHP( /*0x690cf6*/
    DSurface_Alternate,
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
char __userpurge ScoreAnimClass::sub_690D60@<al>(int a1@<ecx>, signed int a2@<ebp>, int a3)
{
  signed int v4; // edi
  signed int v5; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // ebx
  char v13; // dl
  int v14; // ebp
  int v16; // [esp+4Ch] [ebp-14h]
  int v17; // [esp+50h] [ebp-10h] BYREF
  int v18; // [esp+54h] [ebp-Ch]
  int v19; // [esp+58h] [ebp-8h]
  int v20; // [esp+5Ch] [ebp-4h]

  byte_B05584 = 1; /*0x690d63*/
  v4 = *(_DWORD *)(a1 + 20); /*0x690d71*/
  if ( *(_DWORD *)(a1 + 12) == -1 ) /*0x690d77*/
  {
LABEL_4:
    if ( v4 ) /*0x690d8c*/
      return 0; /*0x690d8c*/
    goto LABEL_5; /*0x690d8c*/
  }
  v5 = Timer::GetTicks() - *(_DWORD *)(a1 + 12); /*0x690d81*/
  if ( v5 < v4 ) /*0x690d86*/
  {
    v4 -= v5; /*0x690d88*/
    goto LABEL_4; /*0x690d88*/
  }
LABEL_5:
  *(_DWORD *)(a1 + 12) = Timer::GetTicks(); /*0x690d92*/
  *(_DWORD *)(a1 + 16) = v18; /*0x690da7*/
  *(_DWORD *)(a1 + 20) = 2; /*0x690daa*/
  if ( *(_DWORD *)(a1 + 28) > wcslen(*(const wchar_t **)(a1 + 24)) && *(int *)(a1 + 32) > 2 ) /*0x690dc4*/
    return 1; /*0x690dcd*/
  if ( !*(_BYTE *)(a1 + 36) )
  {
    v7 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 40) + 8))( /*0x690de0*/
           *(_DWORD *)(a1 + 40),
           *(_DWORD *)(a1 + 24));
    v8 = *(_DWORD *)(a1 + 4) - 8 <= 0 ? 0 : *(_DWORD *)(a1 + 4) - 8;
    v9 = *(_DWORD *)(*(_DWORD *)(a1 + 40) + 8); /*0x690dfd*/
    v19 = v7 + 10; /*0x690e00*/
    v17 = v8; /*0x690e04*/
    v18 = *(_DWORD *)(a1 + 8); /*0x690e0f*/
    v20 = v9; /*0x690e1f*/
    (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)g_DSurface_Hidden + 8))( /*0x690e2b*/
      g_DSurface_Hidden,
      &v17,
      DSurface_Alternate,
      &v17,
      0,
      1);
  }
  v10 = *(_DWORD *)(a1 + 28); /*0x690e2e*/
  v11 = 0; /*0x690e31*/
  v12 = *(_DWORD *)(a1 + 4); /*0x690e34*/
  v16 = 0; /*0x690e3a*/
  if ( v10 >= 0 ) /*0x690e3e*/
  {
    while ( 1 ) /*0x690e4d*/
    {
      v13 = *(_BYTE *)(*(_DWORD *)(a1 + 24) + 2 * v11); /*0x690e4d*/
      if ( !v13 ) /*0x690e52*/
        break; /*0x690e52*/
      if ( *(_BYTE *)(a1 + 36) == 1 || (v14 = v10 - v11, v10 - v11 >= 2) ) /*0x690e61*/
        v14 = 2; /*0x690e63*/
      LOWORD(v4) = v13; /*0x690e6d*/
      (*(void (__thiscall **)(_DWORD, int, signed int, int, _DWORD, int, int, signed int))(**(_DWORD **)(a1 + 40) + 16))( /*0x690e81*/
        *(_DWORD *)(a1 + 40),
        g_DSurface_Hidden,
        v4,
        v12,
        *(_DWORD *)(a1 + 8),
        v14,
        1,
        a2);
      if ( v14 == 2 ) /*0x690e87*/
        (*(void (__thiscall **)(_DWORD, int, signed int, int, _DWORD, int, _DWORD))(**(_DWORD **)(a1 + 40) + 16))( /*0x690e9e*/
          *(_DWORD *)(a1 + 40),
          DSurface_Alternate,
          v4,
          v12,
          *(_DWORD *)(a1 + 8),
          2,
          0);
      a2 = v4; /*0x690ea4*/
      v12 += (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 40) + 4))(*(_DWORD *)(a1 + 40)) + 1; /*0x690eae*/
      v10 = *(_DWORD *)(a1 + 28); /*0x690eb2*/
      if ( ++v16 > v10 ) /*0x690ebc*/
      {
        *(_DWORD *)(a1 + 28) = v10 + 1; /*0x690ec1*/
        return 0; /*0x690ecb*/
      }
      v11 = v16; /*0x690e46*/
    }
    ++*(_DWORD *)(a1 + 32); /*0x690ece*/
  }
  ++*(_DWORD *)(a1 + 28); /*0x690ed7*/
  return 0; /*0x690dc6*/
}



// ==== 0x00690F30  ScoreScreen::Constructor  this=ScoreAnimClass  sig=csp ====
_DWORD *__thiscall sub_690F30(_DWORD *this, int a2, int a3, int a4)
{
  this->q008 = a3; /*0x690f3b*/
  this->q004 = a2; /*0x690f41*/
  this->u32_C = Timer::GetTicks(); /*0x690f4d*/
  this->q014 = 0; /*0x690f50*/
  this->q018 = a4; /*0x690f57*/
  *this = &ScoreAnimClass::`vftable'; /*0x690f5a*/
  return this; /*0x690f62*/
}



// ==== 0x00690F70  ScoreAnimClass::AddRef  this=ScoreAnimClass  sig=csp ====
signed int __thiscall ScoreAnimClass::_vt01(signed int *this)
{
  signed int result; // eax
  signed int v3; // edi

  result = this->u32_C; /*0x690f73*/
  if ( result != -1 ) /*0x690f79*/
  {
    v3 = this->q014; /*0x690f7c*/
    result = Timer::GetTicks() - this->u32_C; /*0x690f8c*/
    if ( result >= v3 ) /*0x690f91*/
    {
      this->q014 = 0; /*0x690fa4*/
      this->u32_C = -1; /*0x690fa7*/
    }
    else
    {
      this->u32_C = -1; /*0x690f95*/
      this->q014 = v3 - result; /*0x690f9c*/
    }
  }
  return result; /*0x690fa0*/
}



// ==== 0x00690FC0  ScoreAnimClass::Release  this=ScoreAnimClass  sig=csp ====
void __thiscall ScoreAnimClass::_vt02(_DWORD *this)
{
  if ( this->u32_C == -1 ) /*0x690fc7*/
    this->u32_C = Timer::GetTicks(); /*0x690fd1*/
}



// ==== 0x00690FE0  ScoreAnimClass::Constructor_ScoreAnimClass  this=ScoreAnimClass  sig=csp ====
_DWORD *__thiscall ScoreAnimClass::Constructor_ScoreAnimClass(_DWORD *Block, char a2)
{
  *Block = &ScoreAnimClass::`vftable'; /*0x690fe9*/
  if ( (a2 & 1) != 0 ) /*0x690fef*/
    __3_YAXPAX_Z(Block); /*0x690ff2*/
  return Block; /*0x690ffc*/
}



// ==== 0x00691000  ScoreTimeClass::Constructor_ScoreAnimClass_0  this=ScoreTimeClass  sig=csp ====
_DWORD *__thiscall ScoreAnimClass::Constructor_ScoreAnimClass_0(_DWORD *Block, char a2)
{
  *Block = &ScoreAnimClass::`vftable'; /*0x691009*/
  if ( (a2 & 1) != 0 ) /*0x69100f*/
    __3_YAXPAX_Z(Block); /*0x691012*/
  return Block; /*0x69101c*/
}



// ==== 0x00691020  ScorePrintClass::Constructor_ScoreAnimClass_1  this=ScorePrintClass  sig=csp ====
_DWORD *__thiscall ScoreAnimClass::Constructor_ScoreAnimClass_1(_DWORD *Block, char a2)
{
  *Block = &ScoreAnimClass::`vftable'; /*0x691029*/
  if ( (a2 & 1) != 0 ) /*0x69102f*/
    __3_YAXPAX_Z(Block); /*0x691032*/
  return Block; /*0x69103c*/
}



// ==== 0x00691040  ScoreFontClass::QueryInterface  this=ScoreFontClass  sig=csp ====
_DWORD *__thiscall ScoreFontClass::_vt00(_DWORD *Block, char a2)
{
  void *v3; // eax
  char *v4; // eax

  v3 = (void *)*(Block + 3); /*0x691046*/
  *Block = &ScoreFontClass::`vftable'; /*0x691049*/
  if ( v3 && *((_BYTE *)Block + 16) == 1 ) /*0x691057*/
  {
    __3_YAXPAX_Z(v3); /*0x69105a*/
    *(Block + 3) = 0; /*0x691062*/
    *((_BYTE *)Block + 16) = 0; /*0x691065*/
  }
  if ( !--dword_B0558C ) /*0x691073*/
  {
    v4 = &byte_B05594; /*0x691075*/
    do /*0x691087*/
    {
      *((_DWORD *)v4 - 1) = 0; /*0x69107a*/
      *v4 = 0; /*0x69107d*/
      v4 += 8; /*0x69107f*/
    }
    while ( (int)v4 < (int)((char *)&dbl_B055A8 + 4) ); /*0x691087*/
  }
  if ( (a2 & 1) != 0 ) /*0x69108e*/
    __3_YAXPAX_Z(Block); /*0x691091*/
  return Block; /*0x69109b*/
}



// ==== 0x006910A0  ScoreFullFontClass::Constructor_ScoreFontClass  this=ScoreFullFontClass  sig=csp ====
_DWORD *__thiscall ScoreAnimClass::sub_6910A0(_DWORD *Block, char a2)
{
  void *v3; // eax
  char *v4; // eax

  v3 = (void *)*(Block + 3); /*0x6910a6*/
  *Block = &ScoreFontClass::`vftable'; /*0x6910a9*/
  if ( v3 && *((_BYTE *)Block + 16) == 1 ) /*0x6910b7*/
  {
    __3_YAXPAX_Z(v3); /*0x6910ba*/
    *(Block + 3) = 0; /*0x6910c2*/
    *((_BYTE *)Block + 16) = 0; /*0x6910c5*/
  }
  if ( !--dword_B0558C ) /*0x6910d3*/
  {
    v4 = &byte_B05594; /*0x6910d5*/
    do /*0x6910e7*/
    {
      *((_DWORD *)v4 - 1) = 0; /*0x6910da*/
      *v4 = 0; /*0x6910dd*/
      v4 += 8; /*0x6910df*/
    }
    while ( (int)v4 < (int)((char *)&dbl_B055A8 + 4) ); /*0x6910e7*/
  }
  if ( (a2 & 1) != 0 ) /*0x6910ee*/
    __3_YAXPAX_Z(Block); /*0x6910f1*/
  return Block; /*0x6910fb*/
}



// ==== 0x00691100  ScoreBigFontClass::Constructor_ScoreFontClass  this=ScoreBigFontClass  sig=csp ====
_DWORD *__thiscall ScoreFontClass::sub_691100(_DWORD *Block, char a2)
{
  void *v3; // eax
  char *v4; // eax

  v3 = (void *)*(Block + 3); /*0x691106*/
  *Block = &ScoreFontClass::`vftable'; /*0x691109*/
  if ( v3 && *((_BYTE *)Block + 16) == 1 ) /*0x691117*/
  {
    __3_YAXPAX_Z(v3); /*0x69111a*/
    *(Block + 3) = 0; /*0x691122*/
    *((_BYTE *)Block + 16) = 0; /*0x691125*/
  }
  if ( !--dword_B0558C ) /*0x691133*/
  {
    v4 = &byte_B05594; /*0x691135*/
    do /*0x691147*/
    {
      *((_DWORD *)v4 - 1) = 0; /*0x69113a*/
      *v4 = 0; /*0x69113d*/
      v4 += 8; /*0x69113f*/
    }
    while ( (int)v4 < (int)((char *)&dbl_B055A8 + 4) ); /*0x691147*/
  }
  if ( (a2 & 1) != 0 ) /*0x69114e*/
    __3_YAXPAX_Z(Block); /*0x691151*/
  return Block; /*0x69115b*/
}



// ==== 0x00691160  VectorClass::PushBack2  this=VectorClass  sig=csp ====
char __thiscall VectorClass_PushBack_2(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = this->Capacity; /*0x691163*/
  if ( this->q010 >= v3 ) /*0x69116b*/
  {
    if ( !this->q034 && v3 ) /*0x691176*/
      return 0; /*0x691176*/
    v4 = this->u32_14; /*0x691178*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x691188*/
      return 0; /*0x69118f*/
  }
  v6 = this->q010; /*0x691195*/
  v7 = this->Items; /*0x691198*/
  this->q010 = v6 + 1; /*0x69119e*/
  *(_DWORD *)(v7 + 4 * v6) = *a2; /*0x6911a8*/
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
  dbl_B055A8 = 0.0174532925199433 * 90.0; /*0x69126c*/
}



// ==== 0x00691280  sub_691280  this=-  sig=ida-proto ====
__int64 sub_691280()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B055A8 - dbl_B055D0); /*0x691292*/
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
AbstractClass *__thiscall ScriptClass_Constructor(AbstractClass *this, int a2)
{
  int v3; // eax

  AbstractClass::Constructor(this); /*0x6913c3*/
  this->field28 = 0; /*0x6913cc*/
  this->buildingType = a2; /*0x6913d3*/
  this->idxCurrentLine = -1; /*0x6913d6*/
  this->parent_gap = &ScriptClass::`vftable'; /*0x6913dd*/
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
  return this; /*0x691450*/
}



// ==== 0x006914E0  ScriptClass::PowerDrainUpdate  this=ScriptClass  sig=csp ====
int __thiscall ScriptClass::_vt13(int this, int a2)
{
  AbstractClass::ProcessPower((#378 *)this); /*0x6914e9*/
  return Power::TimerProcess(*(_DWORD *)(this + 44)); /*0x6914f9*/
}



// ==== 0x00691500  SessionClass::GetEntry  this=AbstractClass  sig=csp ====
_DWORD *__thiscall SessionClass_GetEntry(_DWORD *this, _DWORD *a2)
{
  int v2; // edx
  int v4; // ecx

  v2 = this->q02C; /*0x691500*/
  if ( v2 == -1 ) /*0x691506*/
  {
    *a2 = -1; /*0x691510*/
    a2[1] = 0; /*0x691512*/
    return a2; /*0x691508*/
  }
  else
  {
    v4 = this->q024; /*0x691518*/
    *a2 = *(_DWORD *)(v4 + 8 * v2 + 164); /*0x691527*/
    a2[1] = *(_DWORD *)(v4 + 8 * v2 + 168); /*0x691531*/
    return a2; /*0x69151b*/
  }
}



// ==== 0x00691540  ScriptClass::GetNextAction  this=AbstractClass  sig=csp ====
_DWORD *__thiscall ScriptClass::GetNextAction(_DWORD *this, _DWORD *a2)
{
  int v2; // edx
  int v3; // ecx
  _DWORD *result; // eax

  v2 = this->q024; /*0x691540*/
  v3 = this->q02C; /*0x691543*/
  result = a2; /*0x691554*/
  if ( v3 + 1 < *(_DWORD *)(v2 + 160) ) /*0x691552*/
  {
    *a2 = *(_DWORD *)(v2 + 8 * v3 + 172); /*0x691571*/
    a2[1] = *(_DWORD *)(v2 + 8 * v3 + 176); /*0x69157a*/
  }
  else
  {
    *a2 = -1; /*0x69155e*/
    a2[1] = 0; /*0x691560*/
  }
  return result; /*0x69155d*/
}



// ==== 0x00691590  ObjectClass::SetLandTypeMap  this=ScriptClass  sig=csp ====
char __thiscall Map_SetLandType(_DWORD *this)
{
  this->idxCurrentLine = -1; /*0x691590*/
  return 1; /*0x691599*/
}



// ==== 0x006915A0  TeamClass::SetField11  this=AbstractClass  sig=csp ====
char __thiscall sub_6915A0(_DWORD *this, int a2)
{
  this->q02C = a2; /*0x6915a4*/
  return 1; /*0x6915a9*/
}



// ==== 0x006915B0  TeamClass::Check  this=ScriptClass  sig=csp ====
BOOL __thiscall sub_6915B0(_DWORD *this)
{
  unsigned int v1; // eax

  v1 = this->idxCurrentLine + 1; /*0x6915b3*/
  this->idxCurrentLine = v1; /*0x6915b4*/
  return v1 < *(_DWORD *)(this->buildingType + 160); /*0x6915c4*/
}



// ==== 0x006915D0  SessionClass::SetField  this=ScriptClass  sig=csp ====
BOOL __thiscall SessionClass::SetField(_DWORD *this)
{
  return this->idxCurrentLine < *(_DWORD *)(this->buildingType + 160); /*0x6915e0*/
}



// ==== 0x006915F0  ScriptClass::ddtor  this=ScriptClass  sig=csp ====
int __stdcall ScriptClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6915f6*/
    return -2147467261; /*0x6915f8*/
  *a2 = 1123264070; /*0x691606*/
  a2[1] = 298977161; /*0x69160e*/
  a2[2] = 1610655148; /*0x691617*/
  a2[3] = -1252326136; /*0x691620*/
  return 0; /*0x6915fd*/
}



// ==== 0x00691630  ScriptClass::LoadState  this=ScriptClass  sig=csp ====
int __stdcall ScriptClass::_vt05(_DWORD *a1, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x69163b*/
  if ( result >= 0 ) /*0x691642*/
  {
    if ( a1 ) /*0x691646*/
    {
      AbstractClass::InitVtables(a1, (int)&a2); /*0x69164f*/
      *a1 = &ScriptClass::`vftable'; /*0x691654*/
      a1[1] = &ScriptClass::`vftable'; /*0x69165a*/
      a1[2] = &ScriptClass::`vftable'; /*0x691661*/
      a1[3] = &ScriptClass::`vftable'; /*0x691668*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 9); /*0x691678*/
    return 0; /*0x69167d*/
  }
  return result; /*0x69167f*/
}



// ==== 0x00691690  ScriptClass::SaveState  this=ScriptClass  sig=csp ====
int __stdcall ScriptClass::_vt06(int *a1, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix(a1, a2, a3); /*0x69169f*/
  if ( result >= 0 ) /*0x6916a6*/
    return 0; /*0x6916a8*/
  return result; /*0x6916aa*/
}



// ==== 0x006916B0  ScriptTypeClass::Constructor  this=ScriptTypeClass  sig=csp ====
_DWORD *__thiscall ScriptTypeClass_Constructor(_DWORD *this, char *Source)
{
  int v3; // ecx
  char v4; // al
  int v5; // eax
  _DWORD *v6; // edx

  AbstractTypeClass::Constructor((int)this, Source); /*0x6916b8*/
  this->q09C = 0; /*0x6916bd*/
  this->q0A0 = 0; /*0x6916c7*/
  *this = &ScriptTypeClass::`vftable'; /*0x6916d1*/
  this->vtable2 = &ScriptTypeClass::`vftable'; /*0x6916d7*/
  this->vtable3 = &ScriptTypeClass::`vftable'; /*0x6916de*/
  this->vtable4 = &ScriptTypeClass::`vftable'; /*0x6916e5*/
  v3 = g_MultiplayerDebugState; /*0x6916ec*/
  if ( g_MultiplayerDebugState < dword_8B41D0 /*0x69172e*/
    || (byte_8B41D5 || !dword_8B41D0)
    && dword_8B41DC > 0
    && (v4 = (*(int (__thiscall **)(int *, int, _DWORD))(dword_8B41C8 + 8))(
               &dword_8B41C8,
               dword_8B41D0 + dword_8B41DC,
               0),
        v3 = g_MultiplayerDebugState,
        v4) )
  {
    g_MultiplayerDebugState = v3 + 1; /*0x691733*/
    *((_DWORD *)g_MultiplayerSyncState + v3) = this; /*0x69173f*/
    v3 = g_MultiplayerDebugState; /*0x691742*/
  }
  v5 = 0; /*0x691748*/
  if ( v3 <= 0 ) /*0x69174c*/
  {
LABEL_11:
    v5 = -1; /*0x691760*/
  }
  else
  {
    v6 = g_MultiplayerSyncState; /*0x69174e*/
    while ( (_DWORD *)*v6 != this ) /*0x691756*/
    {
      ++v5; /*0x691758*/
      ++v6; /*0x691759*/
      if ( v5 >= v3 ) /*0x69175e*/
        goto LABEL_11; /*0x69175e*/
    }
  }
  this->q098 = v5; /*0x691763*/
  return this; /*0x69176b*/
}



// ==== 0x006917F0  ScriptTypeClass::GetParameter  this=ScriptTypeClass  sig=csp ====
char __thiscall ScriptTypeClass::_vt26(int this, char *a2)
{
  int v3; // esi
  _DWORD *v4; // ebx
  char Buffer[16]; // [esp+8h] [ebp-90h] BYREF
  char Source[128]; // [esp+18h] [ebp-80h] BYREF

  if ( !AbstractTypeClass::WriteINI((char *)this, a2) ) /*0x691802*/
    return 0; /*0x691885*/
  v3 = 0; /*0x69180d*/
  v4 = (_DWORD *)(this + 164); /*0x69180f*/
  do /*0x691873*/
  {
    sprintf(Buffer, "%d", v3); /*0x691820*/
    String::Trim(Buffer); /*0x69182c*/
    if ( v3 >= *(_DWORD *)(this + 160) ) /*0x691837*/
    {
      INIClass::ClearSection((int)a2, this + 36, (unsigned __int8 *)Buffer); /*0x691867*/
    }
    else
    {
      ScriptTypeClass::FormatToString(v4, Source); /*0x691840*/
      INIClass::SetString(a2, (unsigned __int8 *)(this + 36), Buffer, Source); /*0x691855*/
    }
    ++v3; /*0x69186c*/
    v4 += 2; /*0x69186d*/
  }
  while ( v3 < 50 ); /*0x691873*/
  return 1; /*0x691877*/
}



// ==== 0x006918A0  ScriptTypeClass::GetEvent  this=ScriptTypeClass  sig=csp ====
char __thiscall ScriptTypeClass::_vt25(int this, unsigned __int8 ***a2)
{
  int v3; // edi
  int v4; // eax
  _DWORD v6[2]; // [esp+8h] [ebp-98h] BYREF
  char Buffer[16]; // [esp+10h] [ebp-90h] BYREF
  char Destination[128]; // [esp+20h] [ebp-80h] BYREF

  INIClass::ResetSection(a2); /*0x6918b3*/
  if ( !AbstractTypeClass::LoadFromINI(this, a2) ) /*0x6918bb*/
    return 0; /*0x691963*/
  v3 = 0; /*0x6918ca*/
  *(_DWORD *)(this + 160) = 0; /*0x6918cf*/
  do /*0x691951*/
  {
    sprintf(Buffer, "%d", v3); /*0x6918e0*/
    String::Trim(Buffer); /*0x6918ec*/
    if ( (int)INIClass::GetString( /*0x69190f*/
                a2,
                (unsigned __int8 *)(this + 36),
                (unsigned __int8 *)Buffer,
                &g_INI_DefaultBuffer,
                Destination,
                128) > 0 )
    {
      ScriptTypeClass::SetField(v6, Destination); /*0x69191a*/
      v4 = *(_DWORD *)(this + 160); /*0x69191f*/
      if ( v4 < 50 ) /*0x691928*/
      {
        *(_DWORD *)(this + 8 * v4 + 164) = v6[0]; /*0x69192e*/
        *(_DWORD *)(this + 8 * v4 + 168) = v6[1]; /*0x691939*/
        ++*(_DWORD *)(this + 160); /*0x691947*/
      }
    }
    ++v3; /*0x69194d*/
  }
  while ( v3 < 50 ); /*0x691951*/
  return 1; /*0x691955*/
}



// ==== 0x00691970  ScoreScreenClass::ProcessFrame  this=IUnknown  sig=csp ====
int __fastcall sub_691970(char *a1, int a2)
{
  int result; // eax
  int v4; // esi
  int v5; // ebp
  unsigned __int8 *StringByIndex; // eax
  int v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  int v10; // eax
  bool v11; // zf
  int v12; // ecx
  _DWORD *v13; // edx
  int v15; // [esp+14h] [ebp-1Ch]
  char Source[24]; // [esp+18h] [ebp-18h] BYREF

  result = INIClass::GetKeyCount(a1, (unsigned __int8 *)g_INI_Key_ScriptTypes); /*0x691982*/
  v4 = result; /*0x691987*/
  v5 = 0; /*0x69198b*/
  v15 = result; /*0x69198f*/
  if ( result > 0 ) /*0x691993*/
  {
    while ( 1 ) /*0x6919a1*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(a1, (unsigned __int8 *)g_INI_Key_ScriptTypes, v5); /*0x6919a1*/
      result = INIClass::GetString( /*0x6919ba*/
                 (unsigned __int8 ***)a1,
                 (unsigned __int8 *)g_INI_Key_ScriptTypes,
                 StringByIndex,
                 &g_INI_DefaultBuffer,
                 Source,
                 24);
      if ( result > 0 ) /*0x6919c1*/
        break; /*0x6919c1*/
LABEL_24:
      if ( ++v5 >= v4 ) /*0x691b1a*/
        return result; /*0x691b1a*/
    }
    if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6919eb*/
      goto LABEL_22; /*0x6919eb*/
    v7 = 0; /*0x691a00*/
    if ( g_MultiplayerDebugState > 0 ) /*0x691a04*/
    {
      while ( _strcmpi((const void *)(*((_DWORD *)g_MultiplayerSyncState + v7) + 36), Source) ) /*0x691a22*/
      {
        if ( ++v7 >= g_MultiplayerDebugState ) /*0x691a30*/
          goto LABEL_8; /*0x691a30*/
      }
      v9 = (_DWORD *)*((_DWORD *)g_MultiplayerSyncState + v7); /*0x691afa*/
      goto LABEL_23; /*0x691afd*/
    }
LABEL_8:
    v8 = __2_YAPAXI_Z(0x234u); /*0x691a37*/
    v9 = v8; /*0x691a3c*/
    if ( v8 ) /*0x691a43*/
    {
      AbstractTypeClass::Constructor((int)v8, Source); /*0x691a50*/
      v9[39] = 0; /*0x691a55*/
      v9[40] = 0; /*0x691a5b*/
      *v9 = &ScriptTypeClass::`vftable'; /*0x691a61*/
      v9[1] = &ScriptTypeClass::`vftable'; /*0x691a67*/
      v9[2] = &ScriptTypeClass::`vftable'; /*0x691a6e*/
      v9[3] = &ScriptTypeClass::`vftable'; /*0x691a75*/
      v10 = g_MultiplayerDebugState; /*0x691a7c*/
      if ( g_MultiplayerDebugState < dword_8B41D0 /*0x691ab9*/
        || (byte_8B41D5 || !dword_8B41D0)
        && dword_8B41DC > 0
        && (v11 = (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B41C8 + 8))(
                    &dword_8B41C8,
                    dword_8B41D0 + dword_8B41DC,
                    0) == 0,
            v10 = g_MultiplayerDebugState,
            !v11) )
      {
        g_MultiplayerDebugState = v10 + 1; /*0x691ac4*/
        *((_DWORD *)g_MultiplayerSyncState + v10) = v9; /*0x691ac9*/
        v10 = g_MultiplayerDebugState; /*0x691acc*/
      }
      v12 = 0; /*0x691ad1*/
      if ( v10 <= 0 ) /*0x691ad5*/
      {
LABEL_19:
        v12 = -1; /*0x691ae9*/
      }
      else
      {
        v13 = g_MultiplayerSyncState; /*0x691ad7*/
        while ( (_DWORD *)*v13 != v9 ) /*0x691adf*/
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
    result = (*(int (__thiscall **)(_DWORD *, char *))(*v9 + 100))(v9, a1); /*0x691b01*/
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



// ==== 0x00691C00  TeamTypeClass::CreateScriptType  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_691C00(char *Source)
{
  int v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  int v5; // ecx
  char v6; // al
  int v7; // eax
  _DWORD *v8; // edx

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x691c20*/
    return 0; /*0x691c2a*/
  v2 = 0; /*0x691c35*/
  if ( g_MultiplayerDebugState <= 0 ) /*0x691c39*/
  {
LABEL_6:
    v3 = __2_YAPAXI_Z(0x234u); /*0x691c62*/
    v4 = v3; /*0x691c6c*/
    if ( v3 ) /*0x691c73*/
    {
      AbstractTypeClass::Constructor((int)v3, Source); /*0x691c7c*/
      v4[39] = 0; /*0x691c81*/
      v4[40] = 0; /*0x691c8b*/
      *v4 = &ScriptTypeClass::`vftable'; /*0x691c95*/
      v4[1] = &ScriptTypeClass::`vftable'; /*0x691c9b*/
      v4[2] = &ScriptTypeClass::`vftable'; /*0x691ca2*/
      v4[3] = &ScriptTypeClass::`vftable'; /*0x691ca9*/
      v5 = g_MultiplayerDebugState; /*0x691cb0*/
      if ( g_MultiplayerDebugState < dword_8B41D0 /*0x691cf1*/
        || (byte_8B41D5 || !dword_8B41D0)
        && dword_8B41DC > 0
        && (v6 = (*(int (__thiscall **)(int *, int, _DWORD))(dword_8B41C8 + 8))(
                   &dword_8B41C8,
                   dword_8B41D0 + dword_8B41DC,
                   0),
            v5 = g_MultiplayerDebugState,
            v6) )
      {
        g_MultiplayerDebugState = v5 + 1; /*0x691cf6*/
        *((_DWORD *)g_MultiplayerSyncState + v5) = v4; /*0x691d02*/
        v5 = g_MultiplayerDebugState; /*0x691d05*/
      }
      v7 = 0; /*0x691d0b*/
      if ( v5 <= 0 ) /*0x691d0f*/
      {
LABEL_17:
        v7 = -1; /*0x691d23*/
      }
      else
      {
        v8 = g_MultiplayerSyncState; /*0x691d11*/
        while ( (_DWORD *)*v8 != v4 ) /*0x691d19*/
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
  while ( _strcmpi((const void *)(*((_DWORD *)g_MultiplayerSyncState + v2) + 36), Source) ) /*0x691c52*/
  {
    if ( ++v2 >= g_MultiplayerDebugState ) /*0x691c60*/
      goto LABEL_6; /*0x691c60*/
  }
  return (_DWORD *)*((_DWORD *)g_MultiplayerSyncState + v2); /*0x691d2e*/
}



// ==== 0x00691D50  ScriptTypeClass::GetClassIdentifier  this=ScriptTypeClass  sig=csp ====
int __stdcall ScriptTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x691d56*/
    return -2147467261; /*0x691d58*/
  *a2 = 1123264071; /*0x691d66*/
  a2[1] = 298977161; /*0x691d6e*/
  a2[2] = 1610655148; /*0x691d77*/
  a2[3] = -1252326136; /*0x691d80*/
  return 0; /*0x691d5d*/
}



// ==== 0x00691D90  ScriptTypeClass::LoadTypeData  this=ScriptTypeClass  sig=csp ====
int __stdcall ScriptTypeClass::_vt05(_DWORD *a1, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x691d9b*/
  if ( result >= 0 ) /*0x691da2*/
  {
    if ( a1 ) /*0x691da6*/
    {
      AbstractTypeClass::Init((int)a1, (int)&a2); /*0x691daf*/
      *a1 = &ScriptTypeClass::`vftable'; /*0x691db4*/
      a1[1] = &ScriptTypeClass::`vftable'; /*0x691dba*/
      a1[2] = &ScriptTypeClass::`vftable'; /*0x691dc1*/
      a1[3] = &ScriptTypeClass::`vftable'; /*0x691dc8*/
    }
    return 0; /*0x691dcf*/
  }
  return result; /*0x691dd1*/
}



// ==== 0x00691DE0  ScriptTypeClass::SaveToINI  this=ScriptTypeClass  sig=csp ====
int __stdcall ScriptTypeClass::_vt06(int *a1, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix(a1, a2, a3); /*0x691def*/
  if ( result >= 0 ) /*0x691df6*/
    return 0; /*0x691df8*/
  return result; /*0x691dfa*/
}



// ==== 0x00691E00  ScriptTypeClass::PowerDrainUpdate  this=ScriptTypeClass  sig=csp ====
int __thiscall ScriptTypeClass::_vt13(int this, int *a2)
{
  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x691e09*/
  return Power::TimerProcess(*(_DWORD *)(this + 160)); /*0x691e1c*/
}



// ==== 0x00691E30  ScriptTypeClass::GetAction  this=ScriptTypeClass  sig=csp ====
void __thiscall ScriptTypeClass::_vt10(int *this, int a2, int a3)
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
      if ( this->isGlobal > 0 ) /*0x691e58*/
      {
        v6 = g_MultiplayerLogState; /*0x691e5a*/
        v7 = this + 42; /*0x691e60*/
        do /*0x691e66*/
        {
          if ( *(v7 - 1) == 18 ) /*0x691e6a*/
          {
            if ( v4 == -1 ) /*0x691e6f*/
            {
              v8 = 0; /*0x691e71*/
              if ( v6 <= 0 ) /*0x691e75*/
                return; /*0x691e75*/
              for ( i = g_TeamTypePool; *i != a2; ++i ) /*0x691e77*/
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
              v6 = g_MultiplayerLogState; /*0x691ea5*/
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
        while ( v5 < this->isGlobal ); /*0x691e66*/
      }
    }
  }
}



// ==== 0x00691EC0  ScriptClass::StubReturn26  this=ScriptClass  sig=csp ====
int ScriptClass::_vt11()
{
  return 26; /*0x691ec5*/
}



// ==== 0x00691ED0  ScriptClass::StubReturn48  this=ScriptClass  sig=csp ====
int ScriptClass::_vt12()
{
  return 48; /*0x691ed5*/
}



// ==== 0x00691EE0  ScriptClass::ProcessEvent  this=ScriptClass  sig=csp ====
void **__thiscall ScriptClass::_vt08(void **Block, char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &ScriptClass::`vftable'; /*0x691ee6*/
  *(Block + 1) = &ScriptClass::`vftable'; /*0x691eec*/
  *(Block + 2) = &ScriptClass::`vftable'; /*0x691ef3*/
  *(Block + 3) = &ScriptClass::`vftable'; /*0x691efa*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x691f01*/
  v5 = Block; /*0x691f16*/
  v3 = (*(int (__thiscall **)(int *, void ***))(dword_8872B0 + 16))(&dword_8872B0, &v5); /*0x691f1a*/
  if ( v3 != -1 && v3 < dword_8872C0 && v3 < --dword_8872C0 ) /*0x691f35*/
  {
    do /*0x691f4d*/
    {
      ++v3; /*0x691f3d*/
      *((_DWORD *)dword_8872B4 + v3 - 1) = *((_DWORD *)dword_8872B4 + v3); /*0x691f41*/
    }
    while ( v3 < dword_8872C0 ); /*0x691f4d*/
  }
  AbstractClass::DTOR(Block); /*0x691f51*/
  if ( (a2 & 1) != 0 ) /*0x691f5b*/
    __3_YAXPAX_Z(Block); /*0x691f5e*/
  return Block; /*0x691f68*/
}



// ==== 0x00691F70  ScriptTypeClass::GetTypeIdentifier  this=ScriptTypeClass  sig=csp ====
int ScriptTypeClass::_vt11()
{
  return 27; /*0x691f75*/
}



// ==== 0x00691F80  ScriptTypeClass::GetObjectSize  this=ScriptTypeClass  sig=csp ====
int ScriptTypeClass::_vt12()
{
  return 564; /*0x691f85*/
}



// ==== 0x00691F90  ScriptTypeClass::GetAuxField  this=ScriptTypeClass  sig=csp ====
int __thiscall ScriptTypeClass::_vt16(_DWORD *this)
{
  return this->q098; /*0x691f96*/
}



// ==== 0x00691FA0  ScriptTypeClass::ddtor  this=ScriptTypeClass  sig=csp ====
void **__thiscall ScriptTypeClass::_vt08(void **Block, char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &ScriptTypeClass::`vftable'; /*0x691fa6*/
  *(Block + 1) = &ScriptTypeClass::`vftable'; /*0x691fac*/
  *(Block + 2) = &ScriptTypeClass::`vftable'; /*0x691fb3*/
  *(Block + 3) = &ScriptTypeClass::`vftable'; /*0x691fba*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x691fc1*/
  v5 = Block; /*0x691fd6*/
  v3 = (*(int (__thiscall **)(int *, void ***))(dword_8B41C8 + 16))(&dword_8B41C8, &v5); /*0x691fda*/
  if ( v3 != -1 && v3 < g_MultiplayerDebugState && v3 < --g_MultiplayerDebugState ) /*0x691ff5*/
  {
    do /*0x69200d*/
    {
      ++v3; /*0x691ffd*/
      *((_DWORD *)g_MultiplayerSyncState + v3 - 1) = *((_DWORD *)g_MultiplayerSyncState + v3); /*0x692001*/
    }
    while ( v3 < g_MultiplayerDebugState ); /*0x69200d*/
  }
  AbstractTypeClass::Dtor(Block); /*0x692011*/
  if ( (a2 & 1) != 0 ) /*0x69201b*/
    __3_YAXPAX_Z(Block); /*0x69201e*/
  return Block; /*0x692028*/
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
int __thiscall ScrollClass::_vt10(int *this, int *a2, _DWORD *a3)
{
  TacticalClass::ProcessView(this); /*0x6922e3*/
  return BlowStraw_29_::Seek(this, a2, a3); /*0x6922f9*/
}



// ==== 0x00692300  Tactical::MouseOver  this=MouseClass  sig=csp ====
char __stdcall Tactical_MouseOver(int *a1, __int16 *a2, int *a3, _DWORD *a4, bool *a5, bool *a6)
{
  int *v6; // edx
  __int16 *v7; // esi
  bool *v8; // edi
  bool *v9; // ecx
  int v10; // ebx
  int *v11; // eax
  int v12; // ebx
  int *v13; // eax
  int *v14; // ecx
  int *v15; // edx
  int v16; // edx
  int GroundHeight; // eax
  int v18; // edx
  int v19; // ecx
  bool v20; // al
  bool *v21; // esi
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  bool v24; // al
  void *v25; // eax
  _DWORD *v26; // edi
  _DWORD *v27; // eax
  _DWORD *v28; // esi
  _DWORD *v29; // eax
  _WORD *v30; // eax
  int v31; // edi
  _DWORD *v32; // eax
  _WORD *v33; // eax
  int v35; // [esp-4h] [ebp-2Ch]
  int v36; // [esp-4h] [ebp-2Ch]
  int v37; // [esp+10h] [ebp-18h] BYREF
  int v38; // [esp+14h] [ebp-14h]
  int v39; // [esp+18h] [ebp-10h]
  _DWORD v40[3]; // [esp+1Ch] [ebp-Ch] BYREF

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
  if ( *a1 < 0 ) /*0x692350*/
    return 0; /*0x692350*/
  v10 = a1[1]; /*0x692356*/
  if ( v10 < 0 ) /*0x69235b*/
    return 0; /*0x69235b*/
  if ( g_TacticalClass_Instance ) /*0x692369*/
  {
    v37 = DSurface_ViewBounds + *a1; /*0x69237c*/
    v38 = v10 + g_Map_VisibleRect; /*0x692380*/
    v11 = Tactical::PixelToCell((int)g_TacticalClass_Instance, &a2, &v37); /*0x69238e*/
    v8 = a5; /*0x692393*/
  }
  else
  {
    v11 = &dword_B05658; /*0x692399*/
  }
  *(_DWORD *)v7 = *v11; /*0x6923a0*/
  if ( g_TacticalClass_Instance ) /*0x6923aa*/
  {
    v12 = a1[1]; /*0x6923ba*/
    v37 = DSurface_ViewBounds + *a1; /*0x6923c1*/
    v38 = v12 + g_Map_VisibleRect; /*0x6923c5*/
    v13 = (int *)((int *(__stdcall *)(_DWORD *, int *))TacticalClass::TransformPixel)(v40, &v37); /*0x6923d3*/
    v8 = a5; /*0x6923d8*/
  }
  else
  {
    v13 = &dword_B05678; /*0x6923de*/
  }
  v14 = a3; /*0x6923e3*/
  v15 = a3; /*0x6923e9*/
  *a3 = *v13; /*0x6923eb*/
  v15[1] = v13[1]; /*0x6923f0*/
  v15[2] = v13[2]; /*0x6923f6*/
  if ( !g_TacticalClass_Instance || !(unsigned __int8)((_DWORD (__stdcall *)(int *))Tactical::IsCellVisible)(v14) ) /*0x69240c*/
    return 0; /*0x6925ff*/
  v16 = v7[1] << 8; /*0x69242d*/
  v40[0] = (*v7 << 8) + 128; /*0x692430*/
  v40[1] = v16 + 128; /*0x692440*/
  v40[2] = 0; /*0x692444*/
  GroundHeight = Cell::GetGroundHeight(v40); /*0x69244c*/
  v18 = v7[1]; /*0x692454*/
  v19 = (*v7 << 8) + 128; /*0x69245b*/
  v39 = GroundHeight; /*0x692461*/
  v37 = v19; /*0x692465*/
  v38 = (v18 << 8) + 128; /*0x69247c*/
  v20 = Cell::IsPassable(&v37) && g_hWnd; /*0x692492*/
  v21 = a6; /*0x69249b*/
  *a6 = v20; /*0x69249f*/
  *v8 = 0; /*0x6924a1*/
  if ( (*(_DWORD *)g_ScenarioClass_Instance & 0x1000) != 0 ) /*0x6924af*/
  {
    v22 = Coord::To_Cell(&MapClass_Instance, &v37); /*0x6924bb*/
    v23 = Cell::IsBridge(v22); /*0x6924c2*/
    if ( v23 ) /*0x6924c9*/
    {
      *v8 = *((_BYTE *)v23 + 1767); /*0x6924d1*/
    }
    else
    {
      v24 = Game::Stub3((int)&v37) && g_hWnd; /*0x6924f1*/
      *v8 = v24; /*0x6924fa*/
    }
  }
  if ( !*v21 && !*v8 ) /*0x692505*/
  {
    v25 = (void *)((void *(__stdcall *)(int *))TacticalClass::IsOccupiedByTechno)(a1); /*0x692515*/
    v26 = a4; /*0x69251a*/
    *a4 = v25; /*0x692520*/
    v27 = AbstractClass::IsTechnoType(v25); /*0x692522*/
    v28 = v27; /*0x692527*/
    if ( v27 && !*((_BYTE *)v27 + 1050) ) /*0x69252d*/
    {
      if ( v27[136] == 2 /*0x692575*/
        && (v35 = *((_DWORD *)HouseClass_Player + 12),
            v29 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*v27 + 72))(v27, v40),
            v30 = Coord::To_Cell(&MapClass_Instance, v29),
            !Cell::IsPassableOffset(v30, v35))
        || *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v28 + 132))(v28) + 3226) )
      {
        *v26 = 0; /*0x69257f*/
      }
    }
    if ( *v26 ) /*0x692585*/
    {
      if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v26 + 44))(*v26) == 6 ) /*0x692593*/
      {
        v31 = *v26; /*0x692595*/
        if ( !*(_BYTE *)(v31 + 1050) ) /*0x692597*/
        {
          if ( *(_BYTE *)(v31 + 1773) == 15 /*0x6925dc*/
            && (v36 = *((_DWORD *)HouseClass_Player + 12),
                v32 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*v28 + 72))(v28, v40),
                v33 = Coord::To_Cell(&MapClass_Instance, v32),
                !Cell::IsPassableOffset(v33, v36))
            || *(_BYTE *)(*(_DWORD *)(v31 + 1312) + 5889) )
          {
            *a4 = 0; /*0x6925ea*/
          }
        }
      }
    }
  }
  return 1; /*0x6925f0*/
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
  if ( g_SelectionManager ) /*0x692626*/
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
      && (v28 = *((_DWORD *)HouseClass_Player + 12),
          v12 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v10 + 72))(v10, v31),
          v13 = Coord::To_Cell(&MapClass_Instance, v12),
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
    || (v29 = *((_DWORD *)HouseClass_Player + 12),
        v15 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v11 + 72))(v11, v31),
        v16 = Coord::To_Cell(&MapClass_Instance, v15),
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
      v17 = (char *)CellCoord::To_CellObj(&MapClass_Instance, v14); /*0x69277e*/
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
  v21 = Waypoint::FindByCell((char *)HouseClass_Player, v14); /*0x6928a7*/
  if ( byte_88099B ) /*0x6928b0*/
  {
    v22 = Mouse::IsButtonDown(BombListClass_Array) || Mouse::IsButtonDown(dword_A8EC0C); /*0x6928e4*/
    a1 = -1; /*0x6928e8*/
    if ( v21 ) /*0x6928f0*/
      WaypointClass::FindOrCreate((char *)HouseClass_Player, (int)v21, (unsigned int *)&a1, &a2); /*0x692903*/
    if ( dword_8809A4 ) /*0x69290f*/
    {
      v30 = 48; /*0x692911*/
      goto LABEL_65; /*0x692919*/
    }
    if ( v22 ) /*0x692920*/
    {
      v23 = HouseClass_Player; /*0x692922*/
      if ( !v21 ) /*0x69292a*/
      {
LABEL_61:
        if ( *((_DWORD *)v23 + 131) == -1 /*0x692996*/
          || !(unsigned __int8)((int (__fastcall *)(#375 *))Radar::IsRadarTargetEligible)(v23)
          || (v30 = 42, !LayerClass::IsWithinUsableArea(&MapClass_Instance, v14, 1)) )
        {
          v30 = 43; /*0x6929a7*/
        }
        goto LABEL_65; /*0x6929a7*/
      }
      if ( a1 != *((_DWORD *)HouseClass_Player + 131) ) /*0x692938*/
      {
LABEL_59:
        if ( v21 ) /*0x692970*/
        {
          v30 = 46; /*0x692972*/
          goto LABEL_65; /*0x69297a*/
        }
        goto LABEL_61; /*0x692970*/
      }
      if ( (unsigned __int8)((int (__fastcall *)(#375 *))Radar::IsRadarTargetEligible)(HouseClass_Player) /*0x692955*/
        && VectorClass::GetAtChecked(*((int **)HouseClass_Player + a1 + 132), (int)v21) )
      {
        v30 = 47; /*0x69295e*/
        goto LABEL_65; /*0x692966*/
      }
    }
    v23 = HouseClass_Player; /*0x692968*/
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
      && *((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, v14) + 17) != -1 )
    {
      if ( *(_BYTE *)(*(_DWORD *)&g_BuildingTypeClass_Array->gap0[4 /*0x692abc*/
                                                                * *((_DWORD *)CellCoord::To_CellObj(
                                                                                &MapClass_Instance,
                                                                                v14)
                                                                  + 17)]
                    + 680) )
      {
        if ( *((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, v14) + 20) != -1 ) /*0x692ad4*/
        {
          v26 = CellCoord::To_CellObj(&MapClass_Instance, v14); /*0x692adc*/
          v30 = 12; /*0x692af4*/
          if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)&HouseClass_Array->gap0[4 * v26[20]]) ) /*0x692aed*/
            goto LABEL_81; /*0x692afc*/
        }
      }
    }
  }
  v30 = 14; /*0x692afe*/
LABEL_81:
  if ( g_BuildingPlacementState != -1 ) /*0x692b0e*/
  {
    v27 = (*(int (__thiscall **)(_DWORD, __int16 *, _BYTE *))(**((_DWORD **)g_SuperWeaponPool + g_BuildingPlacementState) /*0x692b1d*/
                                                            + 108))(
            *((_DWORD *)g_SuperWeaponPool + g_BuildingPlacementState),
            v14,
            v8);
    if ( v27 ) /*0x692b22*/
      v30 = v27; /*0x692b24*/
  }
  if ( !v30 && v21 ) /*0x692b32*/
    v30 = 44; /*0x692b34*/
  if ( g_RadarBlipManager ) /*0x692b43*/
    return 0; /*0x692b45*/
  else
    return v30; /*0x692b51*/
}



// ==== 0x00692B60  Viewport::ProcessScroll  this=MouseClass  sig=csp ====
void __thiscall sub_692B60(_BYTE *this, _DWORD *a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // ebp
  int v6; // ebp
  int v7; // eax
  bool v8; // bl
  double v9; // st7
  double v10; // st6
  double v11; // st7
  double v12; // st6
  double v13; // st7
  int v14; // edx
  __int16 v15; // cx
  int v16; // esi
  unsigned int v17; // ebp
  __int16 v18; // cx
  int v19; // edx
  unsigned int v20; // ebx
  int v21; // eax
  int v22; // edx
  int v23; // esi
  signed int v24; // eax
  int v25; // esi
  signed int v26; // eax
  int v27; // eax
  int v28; // [esp+20h] [ebp-18h]
  int v29; // [esp+24h] [ebp-14h] BYREF
  unsigned int v30; // [esp+28h] [ebp-10h]
  int v31; // [esp+2Ch] [ebp-Ch]
  int v32; // [esp+30h] [ebp-8h]
  char v33; // [esp+3Ch] [ebp+4h]

  if ( this->u32_15568 == 1 ) /*0x692b70*/
    return; /*0x692b70*/
  v3 = DSurface_ViewBounds + *a2; /*0x692b92*/
  v32 = g_Map_VisibleRect + a2[1]; /*0x692b94*/
  v4 = *(_DWORD *)DSurface_Sidebar; /*0x692b98*/
  v31 = v3; /*0x692b9a*/
  v5 = (*(int (__thiscall **)(int))(v4 + 124))(DSurface_Sidebar); /*0x692ba7*/
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Composite + 124))(DSurface_Composite) + v5 - 1; /*0x692bb4*/
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Composite + 128))(DSurface_Composite) - 1; /*0x692bc0*/
  v8 = v32 <= 0 || v3 <= 0 || v3 >= v6 || v32 >= v7; /*0x692bd5*/
  v33 = 0; /*0x692bdc*/
  if ( (byte_B05628 & 1) == 0 ) /*0x692be3*/
  {
    byte_B05628 |= 1u; /*0x692bef*/
    atexit(nullsub_175); /*0x692bf5*/
  }
  if ( this->q15520 ) /*0x692bfd*/
  {
    if ( !v8 ) /*0x692c13*/
      goto LABEL_25; /*0x692c13*/
  }
  else if ( !v8 ) /*0x692c09*/
  {
    goto LABEL_41; /*0x692c09*/
  }
  v9 = (double)v31; /*0x692c25*/
  v29 = g_DisplayWidth; /*0x692c29*/
  v33 = 1; /*0x692c2d*/
  v10 = (double)g_DisplayWidth; /*0x692c32*/
  v30 = MEMORY[0x8A00A8]; /*0x692c36*/
  if ( v9 >= v10 * dbl_83E738 ) /*0x692c4b*/
  {
    if ( v9 <= (1.0 - dbl_83E738) * v10 ) /*0x692c76*/
      v28 = g_DisplayWidth / 2; /*0x692c86*/
    else
      v28 = g_DisplayWidth - 1; /*0x692c79*/
  }
  else
  {
    v28 = 0; /*0x692c51*/
  }
  v11 = (double)v32; /*0x692c8a*/
  v12 = (double)(int)v30; /*0x692c8e*/
  if ( v11 >= v12 * dbl_83E740 ) /*0x692ca3*/
  {
    if ( v11 <= (1.0 - dbl_83E740) * v12 ) /*0x692cce*/
      v29 = MEMORY[0x8A00A8] / 2; /*0x692cde*/
    else
      v29 = MEMORY[0x8A00A8] - 1; /*0x692cd1*/
  }
  else
  {
    v29 = 0; /*0x692ca9*/
  }
  v31 = g_CreditsScreenBounds / 2; /*0x692cf6*/
  v32 = g_CreditsScreenConfig / 2; /*0x692d08*/
  v13 = Math::CalcAngle( /*0x692d1b*/
          (double)(g_CreditsScreenConfig / 2) - (double)v29,
          (double)v28 - (double)(g_CreditsScreenBounds / 2));
  LOWORD(v30) = Math::RoundToInt((v13 - 1.570796326794897) * -10430.06004058427); /*0x692d34*/
  dword_B05690 = v30; /*0x692d3d*/
  dword_B0565C = (unsigned __int8)(((v30 >> 7) + 1) >> 1); /*0x692d4d*/
LABEL_25:
  v14 = this->q15520; /*0x692d52*/
  LOBYTE(v15) = 0; /*0x692d58*/
  HIBYTE(v15) = dword_B0565C; /*0x692d5a*/
  LOWORD(v30) = v15; /*0x692d65*/
  v16 = 8 - v14; /*0x692d71*/
  v17 = (((v30 >> 12) + 1) >> 1) & 7; /*0x692d7f*/
  if ( 8 - v14 < dword_A8EB70 + 1 ) /*0x692d84*/
  {
    v16 = dword_A8EB70 + 1; /*0x692d86*/
    this->q15520 = 8 - (dword_A8EB70 + 1); /*0x692d8f*/
  }
  if ( Mouse::IsButtonDown(2u) ) /*0x692d9d*/
  {
    if ( ++v16 >= 4 ) /*0x692daa*/
    {
      if ( v16 > 8 ) /*0x692db6*/
        v16 = 8; /*0x692db8*/
    }
    else
    {
      v16 = 4; /*0x692dac*/
    }
  }
  LOBYTE(v18) = 0; /*0x692dbd*/
  v19 = *(_DWORD *)this; /*0x692dbf*/
  HIBYTE(v18) = dword_B0565C; /*0x692dc1*/
  LOWORD(v30) = v18; /*0x692dcb*/
  v20 = (((v30 >> 12) + 1) >> 1) & 7; /*0x692ddc*/
  v29 = 1; /*0x692de3*/
  if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *, unsigned int, int *, _DWORD))(v19 + 164))(this, v20, &v29, 0) ) /*0x692deb*/
  {
    (*(void (__thiscall **)(_BYTE *, unsigned int, _DWORD))(this->u32_4C)(this, v17 + 9, 0); /*0x692dff*/
    goto LABEL_40; /*0x692e02*/
  }
  (*(void (__thiscall **)(_BYTE *, unsigned int, _DWORD))(this->u32_4C)(this, v17 + 1, 0); /*0x692e0f*/
  v21 = Math::RoundToInt((double)dword_83E748[v16] * *(double *)&g_RulesClass_Instance->VeteranSight); /*0x692e25*/
  v22 = *(_DWORD *)this; /*0x692e2a*/
  v29 = v21; /*0x692e2c*/
  (*(void (__thiscall **)(_BYTE *, unsigned int, int *, int))(v22 + 164))(this, v20, &v29, 1); /*0x692e3a*/
  v23 = dword_B05640; /*0x692e45*/
  if ( dword_B05638 == -1 ) /*0x692e4e*/
  {
LABEL_37:
    if ( v23 ) /*0x692e68*/
      goto LABEL_40; /*0x692e68*/
    goto LABEL_38; /*0x692e68*/
  }
  v24 = Timer::GetTicks() - dword_B05638; /*0x692e5a*/
  if ( v24 < v23 ) /*0x692e62*/
  {
    v23 -= v24; /*0x692e64*/
    goto LABEL_37; /*0x692e64*/
  }
LABEL_38:
  if ( !v33 ) /*0x692e70*/
    goto LABEL_41; /*0x692e70*/
  dword_B05638 = Timer::GetTicks(); /*0x692e84*/
  dword_B0563C = v32; /*0x692e89*/
  dword_B05640 = 1; /*0x692e8f*/
  ++this->q15520; /*0x692e9c*/
LABEL_40:
  if ( v33 ) /*0x692ea8*/
    return; /*0x692ea8*/
LABEL_41:
  v25 = dword_B05640; /*0x692eaa*/
  if ( dword_B05638 == -1 ) /*0x692eb8*/
    goto LABEL_44; /*0x692eb8*/
  v26 = Timer::GetTicks() - dword_B05638; /*0x692ec4*/
  if ( v26 < v25 ) /*0x692ecc*/
  {
    v25 -= v26; /*0x692ece*/
LABEL_44:
    if ( v25 ) /*0x692ed2*/
      return; /*0x692ed2*/
  }
  v27 = this->q15520 - 1; /*0x692ed4*/
  this->q15520 = v27; /*0x692edb*/
  if ( v27 < 0 ) /*0x692ee1*/
    this->q15520 = v27 + 1; /*0x692ee4*/
  dword_B05638 = Timer::GetTicks(); /*0x692ef3*/
  dword_B0563C = v32; /*0x692f01*/
  dword_B05640 = 1; /*0x692f06*/
}



// ==== 0x00692F20  nullsub_175  this=-  sig=ida-proto ====
void __cdecl nullsub_175()
{
  ; /*0x692f20*/
}



// ==== 0x00692F30  TacticalClass::ProcessView  this=TacticalClass  sig=csp ====
void __thiscall sub_692F30(_BYTE *this)
{
  int v2; // esi
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // [esp+4h] [ebp-28h] BYREF
  void *v8; // [esp+8h] [ebp-24h] BYREF
  int v9; // [esp+Ch] [ebp-20h] BYREF
  bool v10[8]; // [esp+10h] [ebp-1Ch] BYREF
  int v11[2]; // [esp+18h] [ebp-14h] BYREF
  int v12[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( !g_GameActive ) /*0x692f3d*/
  {
    v2 = DSurface_ViewBounds; /*0x692f4a*/
    v3 = g_Map_VisibleRect; /*0x692f57*/
    v4 = (_DWORD *)(*(int (__thiscall **)(int, bool *))(*(_DWORD *)g_WWMouseClass_Instance + 52))( /*0x692f5e*/
                     g_WWMouseClass_Instance,
                     v10);
    v5 = v4[1]; /*0x692f67*/
    v11[0] = *v4 - v2; /*0x692f6a*/
    v11[1] = v5 - v3; /*0x692f72*/
    if ( !Map_Process_63AB60(v11[0], v5 - v3) ) /*0x692f76*/
    {
      if ( this->q555A == 1 ) /*0x692f8c*/
      {
        if ( Mouse::IsButtonDown(1u) ) /*0x692f96*/
        {
          TacticalClass::ProcessScroll((int)&MapClass_Instance, v11); /*0x692fa9*/
        }
        else if ( Mouse::IsButtonDown(2u) ) /*0x692fbb*/
        {
          ScrollMapEdge((int *)&MapClass_Instance, v11); /*0x692fd2*/
        }
      }
      else
      {
        if ( Tactical::MouseOver(v11, (__int16 *)&v9, v12, &v8, (bool *)&v7 + 3, v10) ) /*0x692ffc*/
        {
          v6 = Radar::ScanWaypoints((int)&v9, v8, 1); /*0x693015*/
          TacticalClass::HandlePlayerAction((char *)&MapClass_Instance, (__int16 *)&v9, v10[0], v8, v6, 0); /*0x69302f*/
        }
        if ( this->q5559 && !g_ArmageddonMode ) /*0x693045*/
          Viewport::ProcessScroll(this, v11); /*0x69304e*/
      }
    }
  }
}



// ==== 0x00693060  ScrollClass::GetHotspot  this=ScrollClass  sig=csp ====
bool __thiscall MouseClass::_vt26(_BYTE *this)
{
  return this->q555A /*0x693091*/
      || g_GameActive
      || g_TacticalClass_Instance && *(float *)&g_TacticalClass_Instance[54].lpVtbl != 0.0;
}



// ==== 0x006930A0  Tactical::HandleTacticalMouseInput  this=Tactical  sig=csp ====
char __thiscall HandleTacticalMouseInput(_BYTE *this, int a2, _DWORD *a3, int a4, HWND a5)
{
  int v5; // eax
  int v7; // eax
  int v8; // eax
  __int16 v10; // [esp+8h] [ebp-1Ch] BYREF
  int v11; // [esp+Ch] [ebp-18h] BYREF
  int v12; // [esp+10h] [ebp-14h] BYREF
  int v13; // [esp+14h] [ebp-10h]
  int v14[3]; // [esp+18h] [ebp-Ch] BYREF

  LOBYTE(v5) = g_FramePresent_State; /*0x6930a0*/
  if ( g_FramePresent_State && (g_BounceClassInit || g_ArmageddonMode) ) /*0x6930c4*/
  {
    if ( g_WTFMode ) /*0x6930d0*/
    {
      if ( g_TacticalClass_Instance ) /*0x6930dc*/
      {
        if ( g_WWMouseClass_Instance ) /*0x6930e8*/
        {
          LOBYTE(v5) = (_BYTE)a3; /*0x6930f5*/
          if ( !g_GameActive || *a3 == 533 ) /*0x693101*/
          {
            v5 = *a3 - 513; /*0x693109*/
            switch ( *a3 ) /*0x69311f*/
            {
              case 0x201: /*0x69311f*/
                a5 = *(HWND *)a5; /*0x693138*/
                v12 = (__int16)a5 - DSurface_ViewBounds; /*0x693148*/
                v13 = SHIWORD(a5) - g_Map_VisibleRect; /*0x693150*/
                LOBYTE(v5) = Tactical::MouseOver(&v12, &v10, v14, &a3, (bool *)&a5, (bool *)&v11); /*0x693170*/
                if ( (_BYTE)v5 ) /*0x693177*/
                {
                  LOBYTE(v5) = HandlePlanningModeClick(v12, v13); /*0x693187*/
                  if ( !(_BYTE)v5 && !this->q555A ) /*0x693194*/
                  {
                    v7 = Radar::ScanWaypoints((int)&v10, a3, 1); /*0x6931af*/
                    TacticalClass::HandlePlayerAction((char *)&MapClass_Instance, &v10, v11, a3, v7, 0); /*0x6931c9*/
                    DisplayClass::InitViewBounds((int)&MapClass_Instance, &v12); /*0x6931d8*/
                    LOBYTE(v5) = (unsigned __int8)SetCapture(g_hWnd); /*0x6931e4*/
                    this->q555A = 1; /*0x6931ea*/
                  }
                }
                break; /*0x6931f6*/
              case 0x202: /*0x69311f*/
                a5 = *(HWND *)a5; /*0x69320b*/
                v12 = (__int16)a5 - DSurface_ViewBounds; /*0x69321b*/
                v13 = SHIWORD(a5) - g_Map_VisibleRect; /*0x693221*/
                LOBYTE(v5) = ScriptAction::HitTest(v12, v13); /*0x693225*/
                if ( !(_BYTE)v5 && this->q555A ) /*0x693232*/
                {
                  Tactical::MouseOver(&v12, &v10, v14, &a3, (bool *)&a5, (bool *)&v11); /*0x69325e*/
                  v8 = Radar::ScanWaypoints((int)&v10, a3, 0); /*0x693271*/
                  PlayerClass::ExecuteCommand((char *)&MapClass_Instance, (int)v14, &v10, (#375 **)a3, v8, 0); /*0x69328b*/
                  this->q555A = 0; /*0x693290*/
                  LOBYTE(v5) = ReleaseCapture(); /*0x693296*/
                }
                break; /*0x6932a1*/
              case 0x204: /*0x69311f*/
                a5 = *(HWND *)a5; /*0x6932b6*/
                v12 = (__int16)a5 - DSurface_ViewBounds; /*0x6932c6*/
                v13 = SHIWORD(a5) - g_Map_VisibleRect; /*0x6932cc*/
                LOBYTE(v5) = UI_Handle(v12, v13); /*0x6932d0*/
                if ( !this->q555A ) /*0x6932d5*/
                {
                  LOBYTE(v5) = Tactical::MouseOver(&v12, &v10, v14, &a3, (bool *)&a5, (bool *)&v11); /*0x693301*/
                  if ( (_BYTE)v5 ) /*0x693308*/
                  {
                    if ( !g_GameActive ) /*0x693314*/
                    {
                      DisplayClass::vt_entry_B0(&v12); /*0x693320*/
                      dword_884D38 = v12; /*0x69332d*/
                      dword_884D3C = v13; /*0x693339*/
                      byte_884D40 = 0; /*0x69333f*/
                      (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x693347*/
                    }
                    LOBYTE(v5) = (unsigned __int8)SetCapture(g_hWnd); /*0x693351*/
                    this->q555A = 1; /*0x693357*/
                  }
                }
                break; /*0x693363*/
              case 0x205: /*0x69311f*/
                a5 = *(HWND *)a5; /*0x693378*/
                v5 = UI_Handle_63AB00((__int16)a5 - DSurface_ViewBounds, SHIWORD(a5) - g_Map_VisibleRect); /*0x69338a*/
                if ( this->q555A ) /*0x69338f*/
                {
                  if ( byte_884D40 ) /*0x69339d*/
                  {
                    LOBYTE(v5) = byte_884D44; /*0x69339f*/
                    ((void (__thiscall *)(IUnknown *, _DWORD, int))MapClass_Instance.lpVtbl[6].QueryInterface)( /*0x6933b1*/
                      &MapClass_Instance,
                      0,
                      v5);
                    byte_884D40 = 0; /*0x6933b4*/
                  }
                  else
                  {
                    TacticalClass::DispatchMode((int *)&MapClass_Instance, (int)&v12); /*0x6933c6*/
                  }
                  DisplayClass::ExitMode(this); /*0x6933cd*/
                  this->q555A = 0; /*0x6933d2*/
                  LOBYTE(v5) = ReleaseCapture(); /*0x6933d8*/
                }
                break; /*0x6933e3*/
              case 0x215: /*0x69311f*/
                LOBYTE(v5) = (_BYTE)g_hWnd; /*0x6933ea*/
                if ( *(HWND *)a5 != g_hWnd && this->q555A == 1 ) /*0x6933fc*/
                  LOBYTE(v5) = (*(int (__thiscall **)(_BYTE *))(this->q08C)(this); /*0x693402*/
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
char __thiscall Map_EdgeScroll(int *this, _DWORD *a2)
{
  char result; // al
  int SystemMetrics; // ecx
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  int v8; // edx
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
  double v19; // st7
  double v20; // st7
  int v21; // esi
  struct tagPOINT Point; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v23; // [esp+14h] [ebp-Ch] BYREF
  _DWORD v24[2]; // [esp+18h] [ebp-8h] BYREF
  int v25; // [esp+24h] [ebp+4h]

  result = g_WTFMode; /*0x693440*/
  if ( g_WTFMode ) /*0x69344f*/
  {
    if ( g_FramePresent_State || (result = g_ArmageddonMode) != 0 ) /*0x693465*/
    {
      if ( !this->q1556 ) /*0x69346b*/
      {
        SystemMetrics = GetSystemMetrics(68); /*0x693489*/
        v5 = *a2 - this->q1554; /*0x69348f*/
        if ( (int)((HIDWORD(v5) ^ v5) - HIDWORD(v5)) > 2 * SystemMetrics /*0x6934b4*/
          || (v6 = GetSystemMetrics(69), v7 = a2[1] - this->q1555, (int)((HIDWORD(v7) ^ v7) - HIDWORD(v7)) > 2 * v6) )
        {
          this->q1556 = 1; /*0x6934b6*/
        }
      }
      result = this->q1556; /*0x6934bd*/
      if ( result ) /*0x6934c5*/
      {
        if ( *((_BYTE *)this + 21836) ) /*0x6934cb*/
          goto LABEL_14; /*0x6934cb*/
        if ( this->q11CF ) /*0x6934d5*/
        {
          v8 = *this; /*0x6934df*/
          v24[0] = -1; /*0x6934e4*/
          v24[1] = -1; /*0x6934e8*/
          (*(void (__thiscall **)(int *, _DWORD *))(v8 + 196))(this, v24); /*0x6934f3*/
        }
        else
        {
          *((_BYTE *)this + 21836) = 1; /*0x6934fb*/
        }
        result = *((_BYTE *)this + 21836); /*0x693502*/
        if ( result ) /*0x69350a*/
        {
LABEL_14:
          v9 = *a2 - this->q1554; /*0x693521*/
          v10 = a2[1] - this->q1555; /*0x693526*/
          Point.x = v10; /*0x69352e*/
          v11 = CalcMathFacing8(this + 5460, a2); /*0x693532*/
          if ( v11 != dword_83E76C ) /*0x69353d*/
            dword_83E76C = v11; /*0x69353f*/
          if ( !v9 ) /*0x69354c*/
          {
            v12 = this->q1554; /*0x69354e*/
            if ( v12 ) /*0x693556*/
              v9 = v12 >= g_DisplayWidth - 1; /*0x693564*/
            else
              v9 = -1; /*0x693558*/
          }
          if ( !v10 ) /*0x693575*/
          {
            v13 = this->q1555; /*0x693577*/
            if ( !v13 ) /*0x69357f*/
            {
              v10 = -1; /*0x693581*/
LABEL_25:
              Point.x = v10; /*0x69358f*/
              goto LABEL_26; /*0x69358f*/
            }
            if ( v13 >= MEMORY[0x8A00A8] ) /*0x693588*/
            {
              v10 = 1; /*0x69358a*/
              goto LABEL_25; /*0x69358a*/
            }
          }
LABEL_26:
          v14 = this->q1554; /*0x693593*/
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
          else if ( v14 <= g_DisplayWidth - 10 || v9 <= 0 ) /*0x6935ab*/
          {
LABEL_34:
            v15 = this->q1555; /*0x6935c2*/
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
            else if ( v15 <= MEMORY[0x8A00A8] - 10 || v10 <= 0 ) /*0x6935da*/
            {
LABEL_47:
              v16 = Map_Helper_5FBF70(g_GameModeOptions); /*0x69360b*/
              if ( v16 ) /*0x693618*/
              {
                v17 = v16 - 1; /*0x69361e*/
                if ( v17 ) /*0x69361f*/
                {
                  if ( v17 == 1 ) /*0x693626*/
                  {
                    v9 = -v9; /*0x693631*/
                    v10 = -v10; /*0x693633*/
                    v24[0] = dword_A8EB70 + 1; /*0x69363a*/
                    v18 = 12.0 / (double)(dword_A8EB70 + 1); /*0x693646*/
                    v23 = abs32(Math::RoundToInt(v18)); /*0x693664*/
                    v24[0] = abs32(Math::RoundToInt(v18)); /*0x693674*/
                    if ( (int)(v23 + v24[0]) > 0 ) /*0x69367c*/
                      goto LABEL_51; /*0x69367c*/
                  }
                }
                else
                {
                  v24[0] = dword_A8EB70 + 1; /*0x6936d9*/
                  v19 = 12.0 / (double)(dword_A8EB70 + 1); /*0x6936e1*/
                  v23 = abs32(Math::RoundToInt(v19)); /*0x6936ff*/
                  v24[0] = abs32(Math::RoundToInt(v19)); /*0x69370f*/
                  if ( (int)(v23 + v24[0]) > 0 ) /*0x693717*/
                  {
LABEL_51:
                    Point.x = 0; /*0x693682*/
                    Point.y = 0; /*0x693694*/
                    ClientToScreen(g_hWnd, &Point); /*0x693698*/
                    SetCursorPos( /*0x6936c8*/
                      this->q1554 + Point.x + DSurface_ViewBounds,
                      Point.y + g_Map_VisibleRect + this->q1555);
                  }
                }
              }
              else
              {
                v24[0] = dword_A8EB70 + 1; /*0x693759*/
                v20 = 1.0 / (double)(dword_A8EB70 + 1); /*0x693761*/
                v23 = abs32(Math::RoundToInt(v20)); /*0x69377d*/
                v24[0] = abs32(Math::RoundToInt(v20)); /*0x69378d*/
              }
              v21 = 0; /*0x693791*/
              v25 = 0; /*0x693793*/
              do /*0x6937d5*/
              {
                Point.x = 1; /*0x6937a4*/
                if ( !DisplayClass::SetCoordVisible(v21, &Point, 0) ) /*0x6937ac*/
                  v25 |= 1 << (v21 / 2); /*0x6937cb*/
                v21 += 2; /*0x6937cf*/
              }
              while ( v21 < 8 ); /*0x6937d5*/
              if ( v9 <= 0 ) /*0x6937d9*/
              {
                if ( v9 < 0 ) /*0x6937e6*/
                  DisplayClass::SetCoordVisible(6, &v23, 1); /*0x6937f6*/
              }
              else
              {
                DisplayClass::SetCoordVisible(2, &v23, 1); /*0x6937e4*/
              }
              if ( v10 <= 0 ) /*0x6937fd*/
              {
                if ( v10 < 0 ) /*0x69380a*/
                  DisplayClass::SetCoordVisible(0, v24, 1); /*0x69381a*/
              }
              else
              {
                DisplayClass::SetCoordVisible(4, v24, 1); /*0x693808*/
              }
              return (*(int (__thiscall **)(int *, int, int))(*this + 72))(this, dword_83E790[v25], 1); /*0x693831*/
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
int __thiscall MouseClass::_vt49(_BYTE *this, int a2)
{
  _BYTE *v2; // esi
  int result; // eax

  v2 = this; /*0x693841*/
  if ( !this->q5558 ) /*0x693843*/
    return TacticalClass::DispatchMode((int *)this, a2); /*0x69386f*/
  LOBYTE(this) = byte_884D44; /*0x69384d*/
  result = (*(int (__thiscall **)(_BYTE *, _DWORD, _BYTE *))(*(_DWORD *)v2 + 72))(v2, 0, this); /*0x69385a*/
  v2[21848] = 0; /*0x69385d*/
  return result; /*0x693864*/
}



// ==== 0x00693880  ScrollClass::CheckCapture  this=ScrollClass  sig=csp ====
char __thiscall MouseClass::_vt44(int this, _DWORD *a2)
{
  char result; // al

  result = g_GameActive; /*0x693880*/
  if ( !g_GameActive ) /*0x69388a*/
  {
    DisplayClass::vt_entry_B0(a2); /*0x693892*/
    *(_DWORD *)(this + 21840) = *a2; /*0x693899*/
    *(_DWORD *)(this + 21844) = a2[1]; /*0x6938a2*/
    *(_BYTE *)(this + 21848) = 0; /*0x6938a8*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x6938b7*/
  }
  return result; /*0x6938bb*/
}



// ==== 0x006938C0  ScrollClass::ReleaseCapture  this=ScrollClass  sig=csp ====
HWND __thiscall Mouse_ReleaseCapture(_BYTE *this)
{
  HWND result; // eax

  DisplayClass::ExitMode(); /*0x6938c3*/
  this->q555A = 0; /*0x6938c8*/
  result = GetCapture(); /*0x6938cf*/
  if ( result == g_hWnd ) /*0x6938de*/
    return (HWND)ReleaseCapture(); /*0x6938e0*/
  return result; /*0x6938db*/
}



// ==== 0x006938F0  ScrollClass::Read  this=ScrollClass  sig=csp ====
char *__thiscall ScrollClass::_vt04(char *Block, char a2)
{
  char *v3; // esi
  int v4; // edi

  v3 = Block + 21484; /*0x6938f5*/
  v4 = 4; /*0x6938fb*/
  do /*0x693916*/
  {
    v3 -= 3988; /*0x693905*/
    Array::ForEachReverse((int)v3, 52, 75, (int (__thiscall *)(int))nullsub_56); /*0x693910*/
    --v4; /*0x693915*/
  }
  while ( v4 ); /*0x693916*/
  RadarClass::Destruct(Block); /*0x69391a*/
  if ( (a2 & 1) != 0 ) /*0x693924*/
    __3_YAXPAX_Z(Block); /*0x693927*/
  return Block; /*0x69392f*/
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



// ==== 0x00693B70  RequestNetworkFile  this=ObjectClass  sig=csp ====
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
    Stream::WriteBlock((int)&g_EventManager, (int)v41, 250, 1); /*0x693cef*/
    while ( Count::GetCountQueue(&g_EventManager) > 0 ) /*0x693d00*/
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
    CopyWideToChar(&v43[1], *(char **)Game_PlayerInfoArray, -1); /*0x693c19*/
    if ( g_GameMode_Current == 3 ) /*0x693c25*/
    {
      Network::SendMessage((int)g_NetworkManager, (int)v43, 455, 1, (int)&g_NetworkRematchObject, 0, 0); /*0x693c42*/
    }
    else
    {
      Flagged = GameSettings::FindFlagged(); /*0x693c49*/
      if ( Flagged ) /*0x693c50*/
      {
        v5 = CharToWideString(Flagged + 36); /*0x693c55*/
        Network::SendToPlayer((int)g_NetworkManager, (int)v43, 455, 1, (wchar_t *)v5); /*0x693c6f*/
      }
    }
    while ( Network::GetQueueCount((int)g_NetworkManager) > 0 ) /*0x693c80*/
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
      if ( ObjectTypeClass::CreateInstance((int)&g_EventManager, (int)v46, (int)v40) > 0 && *(_DWORD *)v46 == 111 ) /*0x693ebe*/
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
      if ( Network::Send((int)g_NetworkManager, (int)&v48, (int)&v37, (int)v39, (int)v38) ) /*0x693ddc*/
      {
        v13 = NetworkID::Compare((int)v39, (int)&g_NetworkRematchObject); /*0x693dee*/
        if ( g_GameMode_Current == 4 ) /*0x693df9*/
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
    Stream::WriteBlock((int)&g_EventManager, (int)v41, 250, 1); /*0x6940d3*/
    while ( Count::GetCountQueue(&g_EventManager) > 0 ) /*0x6940e4*/
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
    strcpy((char *)&v43[1], ToWideStringChar(*(char **)Game_PlayerInfoArray)); /*0x693ff7*/
    if ( g_GameMode_Current == 4 ) /*0x694007*/
    {
      v22 = GameSettings::FindFlagged(); /*0x694009*/
      if ( v22 ) /*0x694010*/
      {
        v23 = CharToWideString(v22 + 36); /*0x694015*/
        Network::SendToPlayer((int)g_NetworkManager, (int)v43, 455, 1, (wchar_t *)v23); /*0x69402f*/
      }
    }
    else
    {
      Network::SendMessage((int)g_NetworkManager, (int)v43, 455, 1, (int)&g_NetworkRematchObject, 0, 0); /*0x694053*/
    }
    while ( Network::GetQueueCount((int)g_NetworkManager) > 0 ) /*0x694064*/
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
char __fastcall Network_ReceiveFile(int a1, DWORD a2, int a3, char a4)
{
  unsigned __int16 *v6; // ebp
  size_t v7; // esi
  wchar_t *String; // eax
  int v9; // edi
  int v10; // esi
  int v11; // esi
  int v12; // ebx
  bool v13; // al
  char *Flagged; // eax
  _BYTE *v15; // eax
  int v16; // esi
  int v17; // esi
  unsigned __int16 v18; // dx
  int v19; // esi
  signed int v20; // eax
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
  DWORD Ticks; // [esp+44h] [ebp-54h]
  int v34; // [esp+48h] [ebp-50h]
  int v35; // [esp+4Ch] [ebp-4Ch]
  DWORD v36; // [esp+50h] [ebp-48h]
  int v37; // [esp+54h] [ebp-44h]
  int v38; // [esp+58h] [ebp-40h]
  DWORD v39; // [esp+5Ch] [ebp-3Ch]
  int v40; // [esp+60h] [ebp-38h]
  int v41; // [esp+64h] [ebp-34h]
  _BYTE v42[12]; // [esp+68h] [ebp-30h] BYREF
  LPCSTR v43[9]; // [esp+74h] [ebp-24h] BYREF

  nNumberOfBytesToWrite = a2; /*0x6941ae*/
  Ticks = Timer::GetTicks(); /*0x6941bb*/
  v35 = 0; /*0x6941bf*/
  Waypoint::InitInvalid(v42); /*0x6941c7*/
  v23 = 0; /*0x6941cc*/
  v6 = (unsigned __int16 *)__2_YAPAXI_Z(0x1E7u); /*0x6941e1*/
  Debug::Log(); /*0x6941e3*/
  RawFileClass::Construct(v43, a1); /*0x6941f0*/
  if ( FileClass::Open((int *)v43, 0) ) /*0x6941fb*/
    FileClass::Delete(v43); /*0x694208*/
  FileClass::Open2(v43, (const CHAR *)2); /*0x694213*/
  v7 = a2 / 0xC0; /*0x69422c*/
  v25 = a2 / 0xC0; /*0x69422f*/
  if ( a2 % 0xC0 ) /*0x69422a*/
    v25 = ++v7; /*0x694238*/
  Block = __2_YAPAXI_Z(v7); /*0x69424e*/
  memset(Block, 0, v7); /*0x694253*/
  v26 = 0; /*0x694257*/
  lpBuffer = __2_YAPAXI_Z(a2); /*0x694269*/
  if ( a4 ) /*0x694279*/
  {
    ProgressAnim::Init((int)g_UIManager, 0, 1079574528, 1, 0); /*0x69428f*/
    SHPClass::Load((int)g_UIManager, g_Str_File_PROGBARM_SHP, 0, 0); /*0x6942a2*/
    String = GetStringCSF(aGuiMaptransfer, 0, aDRa2mdpostSend, 355); /*0x6942c2*/
    TextRenderer::MeasureBuilding((int)g_UIManager, -1, -1, (int)String, 0, 1); /*0x6942cf*/
    Screen::Capture(1, 0, a2, (int)v6); /*0x6942d8*/
    LoadScreen::Render((int)g_UIManager, a2, (int)v6, NAN); /*0x6942ea*/
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 0.0, NAN); /*0x694302*/
  }
  v9 = a3; /*0x694307*/
  if ( a3 == 3 || (v10 = 10800, a3 != 4) ) /*0x69431b*/
    v10 = 3600; /*0x69431d*/
  Ticks = Timer::GetTicks(); /*0x69432b*/
  v34 = v40; /*0x694333*/
  v35 = v10; /*0x69433f*/
  if ( g_GameMode_Current[0] == 4 ) /*0x694343*/
  {
    IPXManagerClass::createConnection(g_NetworkManager); /*0x69434a*/
    TacticalClass::SetCameraPosition(g_NetworkManager, 120, -1, 1200); /*0x69435d*/
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
    if ( ObjectTypeClass::CreateInstance((int)&g_EventManager, (int)v6, (int)v32) <= 0 ) /*0x69454b*/
      goto LABEL_43; /*0x69454b*/
    if ( *(_DWORD *)v6 != 112 ) /*0x694555*/
      goto LABEL_43; /*0x694555*/
    v18 = v6[12]; /*0x694561*/
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
    qmemcpy((char *)lpBuffer + 192 * v6[12], v6 + 14, v6[13]); /*0x6945dd*/
    if ( a4 ) /*0x6945eb*/
    {
      v30 = v12 / v25; /*0x694604*/
      Network::UpdateLatencyDisplay((int)g_UIManager, 0, (double)(v12 / v25), NAN); /*0x694611*/
    }
    if ( v26 == v25 ) /*0x694620*/
    {
      if ( a4 ) /*0x694685*/
        Network::UpdateLatencyDisplay((int)g_UIManager, 0, 100.0, NAN); /*0x69469d*/
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
  if ( !Network::Send((int)g_NetworkManager, (int)v6, (int)&v29, (int)v42, (int)v24) ) /*0x6943ca*/
    goto LABEL_43; /*0x6943ca*/
  v13 = NetworkID::Compare((int)v42, (int)&g_NetworkRematchObject); /*0x6943e0*/
  if ( g_GameMode_Current[0] == 4 ) /*0x6943ec*/
  {
    Flagged = GameSettings::FindFlagged(); /*0x6943ee*/
    v13 = Flagged && !_strcmpi(Flagged + 36, v6 + 2); /*0x69440f*/
  }
  if ( *(_DWORD *)v6 != 18 ) /*0x694415*/
    goto LABEL_43; /*0x694415*/
  if ( !v13 ) /*0x69441d*/
    goto LABEL_43; /*0x69441d*/
  v15 = (char *)Block + v6[12]; /*0x69442d*/
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
  qmemcpy((char *)lpBuffer + 192 * v6[12], v6 + 14, v6[13]); /*0x6944e1*/
  if ( a4 ) /*0x6944ef*/
  {
    v30 = v12 / v25; /*0x694508*/
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, (double)(v12 / v25), NAN); /*0x694515*/
  }
  if ( v26 != v25 ) /*0x694524*/
    goto LABEL_42; /*0x694524*/
  v21 = 1; /*0x694659*/
  if ( a4 ) /*0x69465d*/
    Network::UpdateLatencyDisplay((int)g_UIManager, 0, 100.0, NAN); /*0x694675*/
LABEL_54:
  if ( g_GameMode_Current[0] == 4 ) /*0x6946b4*/
    IPXManagerClass::destroyConnection(g_NetworkManager); /*0x6946bb*/
  FileClass::Write2((int *)v43, lpBuffer, nNumberOfBytesToWrite); /*0x6946ce*/
  __3_YAXPAX_Z((void *)lpBuffer); /*0x6946d8*/
  __3_YAXPAX_Z(Block); /*0x6946e2*/
  Debug::Log(); /*0x6946fa*/
  FileClass::CloseHandle((HANDLE *)v43); /*0x694706*/
  Debug::Log(); /*0x694710*/
  if ( !v21 && FileClass::Open((int *)v43, 0) ) /*0x694722*/
  {
    FileClass::Delete(v43); /*0x69472f*/
    Debug::Log(); /*0x694739*/
  }
  __3_YAXPAX_Z(v6); /*0x694742*/
  RawFileClass::Dtor((int *)v43); /*0x69474e*/
  return v21; /*0x694755*/
}



// ==== 0x00694760  SendNetworkFile  this=char*  sig=csp ====
char __fastcall Network_SendFile(char *Source, int a2, char a3, char a4)
{
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
  wchar_t *String; // eax
  int v29; // edi
  int v30; // esi
  int v31; // edi
  int v32; // esi
  signed int v33; // eax
  char *v34; // edi
  int v35; // edx
  size_t v36; // eax
  int v37; // esi
  signed int v38; // eax
  int i; // edi
  int v40; // esi
  int j; // edi
  int v42; // esi
  size_t v43; // eax
  int v44; // eax
  signed int v45; // eax
  int v46; // esi
  signed int v47; // eax
  char v48; // bl
  const char *v49; // eax
  DWORD Ticks; // [esp+20h] [ebp-710h]
  DWORD v51; // [esp+20h] [ebp-710h]
  DWORD v52; // [esp+20h] [ebp-710h]
  int v53; // [esp+28h] [ebp-708h]
  char v54; // [esp+2Fh] [ebp-701h]
  int v55; // [esp+30h] [ebp-700h] BYREF
  int v56; // [esp+34h] [ebp-6FCh]
  int v57; // [esp+38h] [ebp-6F8h]
  int v58; // [esp+3Ch] [ebp-6F4h]
  char v59[2]; // [esp+4Eh] [ebp-6E2h] BYREF
  char v60[4]; // [esp+50h] [ebp-6E0h] BYREF
  int v61[22]; // [esp+54h] [ebp-6DCh] BYREF
  _BYTE v62[12]; // [esp+ACh] [ebp-684h] BYREF
  int v63; // [esp+B8h] [ebp-678h]
  _BYTE v64[12]; // [esp+C0h] [ebp-670h] BYREF
  int v65; // [esp+CCh] [ebp-664h] BYREF
  char v66[20]; // [esp+D0h] [ebp-660h] BYREF
  __int16 v67; // [esp+E4h] [ebp-64Ch]
  unsigned __int16 Buffer; // [esp+E6h] [ebp-64Ah]
  _BYTE Buffer_2[192]; // [esp+E8h] [ebp-648h] BYREF
  _BYTE v70[163]; // [esp+1A8h] [ebp-588h] BYREF
  char v71[89]; // [esp+24Bh] [ebp-4E5h] BYREF
  int v72; // [esp+2A4h] [ebp-48Ch] BYREF
  char v73[171]; // [esp+2A8h] [ebp-488h] BYREF
  int v74; // [esp+353h] [ebp-3DDh]
  char v75[277]; // [esp+357h] [ebp-3D9h] BYREF
  int v76[63]; // [esp+46Ch] [ebp-2C4h] BYREF
  int v77[114]; // [esp+568h] [ebp-1C8h] BYREF

  v58 = a2; /*0x694772*/
  Timer::GetTicks(); /*0x694776*/
  v54 = 0; /*0x69478b*/
  Debug::Log("Send file %s to clients\n", Source); /*0x694790*/
  CCFileClass::Construct(v61, Source); /*0x69479d*/
  if ( !CCFileClass::Open(v61, 0) ) /*0x6947a7*/
  {
    v61[0] = (int)&CCFileClass::`vftable'; /*0x6947b7*/
    v63 = 0; /*0x6947bf*/
    Vector::Clear((int)v62); /*0x6947c6*/
    v61[0] = (int)&off_7E1668; /*0x6947cf*/
    BufferIOFileClass::Dtor(v61); /*0x6947d7*/
    return 0; /*0x6947e8*/
  }
  Size = CCFileClass::GetSize(v61); /*0x6947f4*/
  v56 = Size; /*0x6947fa*/
  Ticks = Timer::GetTicks(); /*0x694803*/
  Debug::Log(aSendingFileInf_0); /*0x69481d*/
  if ( a2 != 1 && a2 != 2 ) /*0x694831*/
  {
    v72 = 17; /*0x69484f*/
    strcpy(v75, Source); /*0x69485d*/
    v74 = Size; /*0x69486c*/
    strcpy(v73, ToWideStringChar(*(char **)Game_PlayerInfoArray)); /*0x694897*/
    if ( a3 ) /*0x6948a9*/
    {
      v8 = 1; /*0x6948b0*/
      if ( Game_PlayerCount > 1 ) /*0x6948b7*/
      {
        while ( 1 ) /*0x6948c0*/
        {
          Event::Dispatch(); /*0x6948c0*/
          if ( Network::SendToPlayer( /*0x6948e3*/
                 (int)g_NetworkManager,
                 (int)&v72,
                 455,
                 1,
                 *(wchar_t **)(Game_PlayerInfoArray + 4 * v8)) )
          {
            goto LABEL_12; /*0x6948ea*/
          }
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
            if ( ++v8 >= Game_PlayerCount ) /*0x694917*/
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
      while ( Network::GetQueueCount((int)g_NetworkManager) > 0 ) /*0x6949ba*/
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
      Debug::Log( /*0x69494b*/
        "Sending file info packet to player %d\n",
        *(_DWORD *)(Game_PlayerInfoArray + 4 * *((char *)&dword_A8BB10 + v11)));
      if ( Network::SendToPlayer( /*0x694978*/
             (int)g_NetworkManager,
             (int)&v72,
             455,
             1,
             *(wchar_t **)(Game_PlayerInfoArray + 4 * *((char *)&dword_A8BB10 + v11))) )
      {
        goto LABEL_20; /*0x69497f*/
      }
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
  *(_DWORD *)v70 = 111; /*0x694a1d*/
  strcpy(v71, Source); /*0x694a2b*/
  *(_DWORD *)&v70[158] = Size; /*0x694a42*/
  Stream::WriteBlock((int)&g_EventManager, (int)v70, 250, 1); /*0x694a4f*/
  while ( Count::GetCountQueue(&g_EventManager) > 0 ) /*0x694a60*/
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
      Debug::Log(aFileInfoSendTi); /*0x694abd*/
      v61[0] = (int)&CCFileClass::`vftable'; /*0x694ad1*/
      v63 = 0; /*0x694ad9*/
      Vector::Clear((int)v62); /*0x694ae4*/
      v61[0] = (int)&off_7E1668; /*0x694aed*/
      BufferIOFileClass::Dtor(v61); /*0x694af5*/
      return 0; /*0x694b06*/
    }
    v18 = 3600 - v19; /*0x694ab7*/
  }
  if ( !v18 ) /*0x694abb*/
    goto LABEL_38; /*0x694abb*/
  Waypoint::InitInvalid(v64); /*0x694b10*/
  v20 = 0; /*0x694b1c*/
  if ( a3 ) /*0x694b20*/
    v21 = Game_PlayerCount - 1; /*0x694b28*/
  else
    v21 = dword_A8BB18; /*0x694b2d*/
  v51 = Timer::GetTicks(); /*0x694b3c*/
  if ( a2 == 1 || a2 == 2 ) /*0x694b59*/
  {
    while ( 1 ) /*0x694bce*/
    {
      Event::Dispatch(); /*0x694bce*/
      if ( ObjectTypeClass::CreateInstance((int)&g_EventManager, (int)v76, (int)v60) > 0 && v76[0] == 113 ) /*0x694bf5*/
        break; /*0x694bf5*/
      v24 = 3600; /*0x694bfb*/
      if ( v51 != -1 ) /*0x694c02*/
      {
        v25 = Timer::GetTicks() - v51; /*0x694c0d*/
        if ( v25 >= 3600 ) /*0x694c13*/
          goto LABEL_62; /*0x694c13*/
        v24 = 3600 - v25; /*0x694c15*/
      }
      if ( !v24 || v21 <= 0 ) /*0x694c1d*/
        goto LABEL_62; /*0x694c1d*/
    }
    Debug::Log(aClientResponde); /*0x694c26*/
  }
  else
  {
    do /*0x694bc5*/
    {
      Event::Dispatch(); /*0x694b60*/
      v55 = 455; /*0x694b84*/
      if ( Network::Send((int)g_NetworkManager, (int)v77, (int)&v55, (int)v64, (int)v59) && v77[0] == 21 ) /*0x694b9c*/
        ++v20; /*0x694b9e*/
      v22 = 3600; /*0x694ba3*/
      if ( v51 != -1 ) /*0x694baa*/
      {
        v23 = Timer::GetTicks() - v51; /*0x694bb5*/
        if ( v23 >= 3600 ) /*0x694bbb*/
          break; /*0x694bbb*/
        v22 = 3600 - v23; /*0x694bbd*/
      }
    }
    while ( v22 && v20 < v21 ); /*0x694bc5*/
  }
LABEL_62:
  v26 = (v56 + 191) / 192; /*0x694c2e*/
  FileClass::Load(v61, 1); /*0x694c51*/
  v27 = 0; /*0x694c56*/
  if ( a4 ) /*0x694c61*/
  {
    ProgressAnim::Init(0, 1079574528, 1, 0); /*0x694c75*/
    SHPClass::Load(g_Str_File_PROGBARM_SHP, 0, 0); /*0x694c86*/
    String = GetStringCSF(aGuiMaptransfer, 0, aDRa2mdpostSend, 658); /*0x694ca5*/
    TextRenderer::MeasureBuilding(-1, -1, String, 0, 1); /*0x694cb2*/
    Screen::Capture(1, 0, v26, 0); /*0x694cbb*/
    LoadScreen::Render((int)&g_UIManager, v26, 0, NAN); /*0x694ccd*/
    Network::UpdateLatencyDisplay((int)&g_UIManager, 0, 0.0, NAN); /*0x694ce2*/
  }
  v29 = v58; /*0x694ce7*/
  Timer::GetTicks(); /*0x694d03*/
  if ( g_GameMode_Current == 4 ) /*0x694d20*/
  {
    IPXManagerClass::createConnection(g_NetworkManager); /*0x694d27*/
    TacticalClass::SetCameraPosition(240, -1, 1200); /*0x694d3d*/
  }
  if ( v29 == 3 || (v30 = 10800, v29 != 4) ) /*0x694d4f*/
    v30 = 3600; /*0x694d51*/
  v52 = Timer::GetTicks(); /*0x694d63*/
  v53 = v30; /*0x694d6b*/
  v55 = 0; /*0x694d6f*/
LABEL_70:
  v31 = v56; /*0x694d77*/
  do /*0x694fb0*/
  {
    while ( 1 ) /*0x694d7f*/
    {
      v32 = v53; /*0x694d7f*/
      if ( v52 != -1 ) /*0x694d86*/
      {
        v33 = Timer::GetTicks() - v52; /*0x694d91*/
        if ( v33 >= v53 ) /*0x694d97*/
          goto LABEL_121; /*0x694d97*/
        v32 = v53 - v33; /*0x694d9d*/
      }
      if ( !v32 ) /*0x694da1*/
        goto LABEL_121; /*0x694da1*/
      if ( v58 != 1 && v58 != 2 ) /*0x694db7*/
        break; /*0x694db7*/
      MessageLoop(); /*0x694fbb*/
      Event::Dispatch(); /*0x694fc0*/
      if ( v27 >= v26 ) /*0x694fcc*/
      {
        if ( !Count::GetCountQueue(&g_EventManager) ) /*0x6950e3*/
        {
          v54 = 1; /*0x69514d*/
          if ( a4 ) /*0x695154*/
            Network::UpdateLatencyDisplay((int)&g_UIManager, 0, 100.0, NAN); /*0x69516c*/
LABEL_121:
          v48 = v54; /*0x695171*/
          goto LABEL_122; /*0x695171*/
        }
      }
      else
      {
        if ( Count::GetCountQueue(&g_EventManager) >= 2 ) /*0x694fda*/
          goto LABEL_70; /*0x694fda*/
        v65 = 112; /*0x694fe6*/
        v67 = v27; /*0x694ff1*/
        Buffer = v31; /*0x694ff9*/
        if ( v31 >= 192 ) /*0x695001*/
          Buffer = 192; /*0x695003*/
        v31 -= Buffer; /*0x695021*/
        v56 = v31; /*0x695028*/
        v43 = CCFileClass::Read(v61, Buffer_2, Buffer); /*0x69502c*/
        if ( v43 == Buffer ) /*0x695040*/
        {
          v44 = v53; /*0x695046*/
          if ( v52 != -1 ) /*0x69504f*/
          {
            v45 = Timer::GetTicks() - v52; /*0x69505a*/
            if ( v45 >= v53 ) /*0x695060*/
              v44 = 0; /*0x695068*/
            else
              v44 = v53 - v45; /*0x695064*/
          }
          Debug::Log("Sending file chunk %d/%d, %d sec left\n", v27, v26, v44); /*0x695072*/
          Stream::WriteBlock((int)&g_EventManager, (int)&v65, 220, 1); /*0x69508e*/
        }
        ++v27; /*0x69509e*/
        v55 += 100; /*0x6950a4*/
        if ( !a4 ) /*0x6950a8*/
          goto LABEL_70; /*0x6950a8*/
        v57 = v55 / v26; /*0x6950c5*/
        Network::UpdateLatencyDisplay((int)&g_UIManager, 0, (double)(v55 / v26), NAN); /*0x6950d2*/
      }
    }
    MessageLoop(); /*0x694dbd*/
    Event::Dispatch(); /*0x694dc2*/
    if ( v27 < v26 ) /*0x694dce*/
    {
      if ( Network::GetQueueCount((int)g_NetworkManager) < 10 ) /*0x694ddc*/
      {
        v65 = 18; /*0x694de4*/
        v67 = v27; /*0x694def*/
        Buffer = v31; /*0x694df7*/
        if ( v31 >= 192 ) /*0x694dff*/
          Buffer = 192; /*0x694e01*/
        v34 = ToWideStringChar(*(char **)Game_PlayerInfoArray); /*0x694e17*/
        v35 = v56; /*0x694e31*/
        strcpy(v66, v34); /*0x694e38*/
        v56 = v35 - Buffer; /*0x694e5c*/
        v36 = CCFileClass::Read(v61, Buffer_2, Buffer); /*0x694e60*/
        if ( v36 == Buffer ) /*0x694e74*/
        {
          v37 = v53; /*0x694e7e*/
          if ( v52 != -1 ) /*0x694e85*/
          {
            v38 = Timer::GetTicks() - v52; /*0x694e90*/
            if ( v38 >= v53 ) /*0x694e96*/
              v37 = 0; /*0x694e9c*/
            else
              v37 = v53 - v38; /*0x694e98*/
          }
          Debug::Log("Sending file chunk %d/%d, %d sec left\n", v27, v26, v37); /*0x694ea6*/
          if ( a3 ) /*0x694eb7*/
          {
            for ( i = 1; i < Game_PlayerCount; ++i ) /*0x694ec5*/
            {
              do /*0x694ef6*/
              {
                v40 = Network::SendToPlayer( /*0x694eed*/
                        (int)g_NetworkManager,
                        (int)&v65,
                        220,
                        1,
                        *(wchar_t **)(Game_PlayerInfoArray + 4 * i));
                Event::Dispatch(); /*0x694eef*/
              }
              while ( !v40 ); /*0x694ef6*/
            }
          }
          else
          {
            for ( j = 0; j < dword_A8BB18; ++j ) /*0x694f0d*/
            {
              do /*0x694f42*/
              {
                v42 = Network::SendToPlayer( /*0x694f39*/
                        (int)g_NetworkManager,
                        (int)&v65,
                        220,
                        1,
                        *(wchar_t **)(Game_PlayerInfoArray + 4 * *((char *)&dword_A8BB10 + j)));
                Event::Dispatch(); /*0x694f3b*/
              }
              while ( !v42 ); /*0x694f42*/
            }
          }
        }
        ++v27; /*0x694f59*/
        v55 += 100; /*0x694f5f*/
        if ( a4 ) /*0x694f63*/
        {
          v57 = v55 / v26; /*0x694f80*/
          Network::UpdateLatencyDisplay((int)&g_UIManager, 0, (double)(v55 / v26), NAN); /*0x694f8d*/
        }
      }
      goto LABEL_70; /*0x694f92*/
    }
    if ( Network::GetQueueCount((int)g_NetworkManager) ) /*0x694f97*/
      goto LABEL_70; /*0x694f9e*/
  }
  while ( Network::GetQueueCount((int)g_NetworkManager) ); /*0x694fb0*/
  v46 = v53; /*0x6950ee*/
  if ( v52 != -1 ) /*0x6950f5*/
  {
    v47 = Timer::GetTicks() - v52; /*0x695100*/
    if ( v47 >= v53 ) /*0x695106*/
      v46 = 0; /*0x69510c*/
    else
      v46 = v53 - v47; /*0x695108*/
  }
  Debug::Log("We sent the file properly with %d seconds left!\n", v46); /*0x695114*/
  v48 = 1; /*0x695125*/
  if ( a4 ) /*0x695127*/
    Network::UpdateLatencyDisplay((int)&g_UIManager, 0, 100.0, NAN); /*0x69513f*/
LABEL_122:
  if ( g_GameMode_Current == 4 ) /*0x69517c*/
    IPXManagerClass::destroyConnection(g_NetworkManager); /*0x695183*/
  v49 = aSuccess; /*0x69518a*/
  if ( !v48 ) /*0x69518f*/
    v49 = aFailure; /*0x695191*/
  Debug::Log("File upload completed - %s\n", v49); /*0x69519c*/
  v61[0] = (int)&CCFileClass::`vftable'; /*0x6951ab*/
  v63 = 0; /*0x6951b3*/
  Vector::Clear((int)v62); /*0x6951be*/
  v61[0] = (int)&off_7E1668; /*0x6951c7*/
  BufferIOFileClass::Dtor(v61); /*0x6951cf*/
  return v48; /*0x6947de*/
}



// ==== 0x006951F0  FindAndValidateMap  this=ObjectClass  sig=csp ====
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
  if ( !_strcmpi(a1, g_Str_File_RandMap_Sed) ) /*0x69520a*/
    return 0; /*0x69520a*/
  v6 = 0; /*0x695221*/
  if ( g_MultiplayerOptions <= 0 ) /*0x695225*/
    return 0; /*0x69540d*/
  while ( _strcmpi((const void *)(*(_DWORD *)(g_MultiplayerGameState + 4 * v6) + 88), v5) ) /*0x695249*/
  {
LABEL_17:
    if ( ++v6 >= g_MultiplayerOptions ) /*0x6953fb*/
      return 0; /*0x6953fb*/
  }
  CCFileClass::Construct(v18, (char *)(*(_DWORD *)(g_MultiplayerGameState + 4 * v6) + 88)); /*0x695260*/
  if ( !CCFileClass::Open(v18, 0) && a5 == 1 ) /*0x69527b*/
  {
    v7 = *(_DWORD *)(g_MultiplayerGameState + 4 * v6); /*0x695283*/
    v8 = Game::CheckForGameCD(60); /*0x69528b*/
    if ( !(unsigned __int8)ScenarioClass::CheckExists(v8) ) /*0x695293*/
    {
      v9 = GameOption::GetField(v7); /*0x69529e*/
      SetSoundWarning(v9); /*0x6952a5*/
    }
    ++g_GameFlags_Campaign; /*0x6952bb*/
    if ( !(unsigned __int8)CD::`vftable'(dword_81C1D0) ) /*0x6952d5*/
    {
      --g_GameFlags_Campaign; /*0x695418*/
      v18[0] = (int)&CCFileClass::`vftable'; /*0x69541d*/
      v20 = 0; /*0x695425*/
      Vector::Clear((int)v19); /*0x69542c*/
      v18[0] = (int)&off_7E1668; /*0x695435*/
      BufferIOFileClass::Dtor(v18); /*0x69543d*/
      return 0; /*0x69544e*/
    }
    --g_GameFlags_Campaign; /*0x6952dc*/
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
  strcpy((char *)a1, (const char *)(*(_DWORD *)(g_MultiplayerGameState + 4 * v6) + 88)); /*0x695472*/
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



// ==== 0x006956D0  Network::sendGameEvent  this=Network  sig=csp ====
bool __thiscall sub_6956D0(LONG dwNewLong, _DWORD *a2)
{
  HWND Dialog; // eax
  int v4; // ecx
  bool v5; // zf

  *(_DWORD *)(dwNewLong + 4) = -1; /*0x6956e0*/
  Dialog = (HWND)CreateDialog(0xEDu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))DlgProcLoadGame, 0); /*0x6956e7*/
  *(_DWORD *)dwNewLong = Dialog; /*0x6956ee*/
  if ( !Dialog ) /*0x6956f1*/
    return *(_DWORD *)(dwNewLong + 4) == 1; /*0x6956f1*/
  SetWindowLongA(Dialog, 8, dwNewLong); /*0x6956f7*/
  NetworkDialog::InitModemSettings((HWND *)dwNewLong, a2); /*0x695704*/
  Dialog::Show(*(HWND *)dwNewLong); /*0x69570c*/
  while ( *(int *)(dwNewLong + 4) < 0 ) /*0x695716*/
  {
    if ( Dialog::PumpMessages() == 1 ) /*0x69571f*/
      break; /*0x69571f*/
    LOBYTE(v4) = 0; /*0x695721*/
    ScreenSaver::Process(v4); /*0x695723*/
  }
  Dialog::Destroy(*(HWND *)dwNewLong); /*0x695732*/
  v5 = *(_DWORD *)(dwNewLong + 4) == 1; /*0x695737*/
  if ( *(_DWORD *)(dwNewLong + 4) == 1 ) /*0x69573b*/
  {
    qmemcpy(a2, (const void *)(dwNewLong + 136), 0x70u); /*0x695749*/
    return *(_DWORD *)(dwNewLong + 4) == 1; /*0x69574c*/
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
char __thiscall ModemConfig_ApplySettings(int this)
{
  HWND DlgItem; // eax
  HWND v3; // esi
  LRESULT v4; // edi
  LRESULT v5; // eax
  char *v6; // eax
  unsigned int v7; // edx
  char *v8; // edi
  char *v9; // esi
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
  wchar_t *v28; // eax
  wchar_t *v30; // eax
  HWND v31; // [esp-8h] [ebp-20h]
  wchar_t *String; // [esp+0h] [ebp-18h]
  wchar_t *v33; // [esp+0h] [ebp-18h]

  Debug::Log(); /*0x695bce*/
  DlgItem = GetDlgItem(*(HWND *)this, 1623); /*0x695bdf*/
  v3 = DlgItem; /*0x695beb*/
  if ( DlgItem ) /*0x695bef*/
  {
    v4 = SendMessageA(DlgItem, 0x147u, 0, 0); /*0x695c01*/
    v5 = SendMessageA(v3, 0x150u, v4, 0); /*0x695c0c*/
    *(_DWORD *)(this + 136) = 1; /*0x695c11*/
    *(_BYTE *)(this + 184) = 0; /*0x695c1b*/
    switch ( v5 ) /*0x695c28*/
    {
      case 0: /*0x695c28*/
        *(_DWORD *)(this + 136) = 1016; /*0x695c2f*/
        break; /*0x695c39*/
      case 1: /*0x695c28*/
        *(_DWORD *)(this + 136) = 760; /*0x695c3e*/
        break; /*0x695c48*/
      case 2: /*0x695c28*/
        *(_DWORD *)(this + 136) = 1000; /*0x695c4d*/
        break; /*0x695c57*/
      case 3: /*0x695c28*/
        *(_DWORD *)(this + 136) = 744; /*0x695c5c*/
        break; /*0x695c66*/
      case 4: /*0x695c28*/
        SendMessageA(v3, 0x4BDu, v4, this + 8); /*0x695c73*/
        *(_BYTE *)(this + 70) = 0; /*0x695c7b*/
        v6 = strchr((const char *)(this + 8), 45); /*0x695c7f*/
        if ( v6 ) /*0x695c89*/
        {
          v7 = strlen(v6 + 1) + 1; /*0x695c93*/
          qmemcpy((void *)(this + 184), v6 + 1, 4 * (v7 >> 2)); /*0x695ca6*/
          v9 = &v6[4 * (v7 >> 2) + 1]; /*0x695ca6*/
          v8 = (char *)(this + 184 + 4 * (v7 >> 2)); /*0x695ca6*/
          v10 = v7; /*0x695ca8*/
          goto LABEL_10; /*0x695caa*/
        }
        break; /*0x695caa*/
      default:
        SendMessageA(v3, 0x4BDu, v4, this + 8); /*0x695cb7*/
        *(_BYTE *)(this + 70) = 0; /*0x695cc1*/
        v11 = strlen((const char *)(this + 8)) + 1; /*0x695cc5*/
        qmemcpy((void *)(this + 184), (const void *)(this + 8), 4 * (v11 >> 2)); /*0x695cd8*/
        v9 = (char *)(this + 8 + 4 * (v11 >> 2)); /*0x695cd8*/
        v8 = (char *)(this + 184 + 4 * (v11 >> 2)); /*0x695cd8*/
        v10 = v11; /*0x695cda*/
LABEL_10:
        qmemcpy(v8, v9, v10 & 3); /*0x695cdc*/
        break; /*0x695cdf*/
    }
  }
  Debug::Log(); /*0x695cf7*/
  Debug::Log(); /*0x695d08*/
  v12 = GetDlgItem(*(HWND *)this, 1624); /*0x695d1f*/
  v13 = v12; /*0x695d21*/
  if ( v12 ) /*0x695d25*/
  {
    v14 = SendMessageA(v12, 0x147u, 0, 0); /*0x695d31*/
    v15 = SendMessageA(v13, 0x150u, v14, 0); /*0x695d3c*/
    swscanf((&off_83EB58)[v15], g_Str_Fmt_PctD, this + 144); /*0x695d52*/
  }
  Debug::Log(); /*0x695d66*/
  v16 = GetDlgItem(*(HWND *)this, 1630); /*0x695d77*/
  if ( v16 ) /*0x695d7b*/
  {
    v17 = SendMessageA(v16, 0x188u, 0, 0); /*0x695d87*/
    if ( v17 == -1 || !dword_A8DB5C ) /*0x695d96*/
      *(_DWORD *)(this + 152) = -1; /*0x695da0*/
    else
      *(_DWORD *)(this + 152) = v17; /*0x695d98*/
  }
  v18 = GetDlgItem(*(HWND *)this, 1625); /*0x695db3*/
  v19 = v18; /*0x695db5*/
  if ( v18 ) /*0x695db9*/
  {
    v20 = SendMessageA(v18, 0x147u, 0, 0); /*0x695dc7*/
    v21 = SendMessageA(v19, 0x150u, v20, 0); /*0x695dd2*/
    *(_DWORD *)(this + 156) = v21; /*0x695dd7*/
    *(_BYTE *)(this + 168) = 0; /*0x695ddd*/
    if ( v21 == 3 ) /*0x695de4*/
    {
      SendMessageA(v19, 0x4BDu, v20, this + 8); /*0x695df1*/
      *(_BYTE *)(this + 23) = 0; /*0x695df9*/
      v22 = strchr((const char *)(this + 8), 45); /*0x695dfd*/
      if ( v22 ) /*0x695e07*/
        strcpy((char *)(this + 168), v22 + 1); /*0x695e24*/
    }
  }
  v31 = *(HWND *)this; /*0x695e3b*/
  *(_DWORD *)(this + 148) = 0; /*0x695e3c*/
  v23 = GetDlgItem(v31, 1627); /*0x695e46*/
  if ( v23 && SendMessageA(v23, 0xF0u, 0, 0) == 1 ) /*0x695e5f*/
    *(_DWORD *)(this + 148) = 1; /*0x695e61*/
  Debug::Log(); /*0x695e88*/
  v24 = GetDlgItem(*(HWND *)this, 1002); /*0x695e99*/
  if ( v24 ) /*0x695e9d*/
    *(_DWORD *)(this + 164) = SendMessageA(v24, 0xF0u, 0, 0) == 1; /*0x695eaf*/
  v25 = GetDlgItem(*(HWND *)this, 1003); /*0x695eca*/
  if ( v25 ) /*0x695ece*/
    *(_DWORD *)(this + 160) = SendMessageA(v25, 0xF0u, 0, 0) == 1; /*0x695ee0*/
  v26 = Modem::OpenPort(&g_EventManager, (_DWORD *)(this + 136)); /*0x695efc*/
  if ( !v26 ) /*0x695f08*/
    return 1; /*0x695fae*/
  v27 = v26 - 1; /*0x695f0e*/
  if ( v27 ) /*0x695f0f*/
  {
    if ( v27 == 1 ) /*0x695f12*/
    {
      String = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_SerialEd_cpp, 535); /*0x695f3c*/
      v28 = GetStringCSF(aTxtIrqAlreadyI, 0, g_Str_File_SerialEd_cpp, 535); /*0x695f4e*/
      Dialog::ShowMessageBox(this, v28, String, 0, 0, 0); /*0x695f58*/
      return 0; /*0x695f62*/
    }
  }
  else
  {
    v33 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_SerialEd_cpp, 531); /*0x695f87*/
    v30 = GetStringCSF(aTxtUnableToOpe, 0, g_Str_File_SerialEd_cpp, 531); /*0x695f99*/
    Dialog::ShowMessageBox(this, v30, v33, 0, 0, 0); /*0x695fa3*/
  }
  return 0; /*0x695f01*/
}



// ==== 0x00695FD0  NetworkDialog::InitModemSettings  this=NetworkDialog  sig=csp ====
HWND __thiscall NetworkDialog::InitModemSettings(HWND *this, _DWORD *a2)
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
  HWND result; // eax
  bool v15; // [esp+13h] [ebp-5h]
  char *v16; // [esp+14h] [ebp-4h]

  qmemcpy(this + 34, a2, 0x70u); /*0x695fea*/
  if ( !this->q022 ) /*0x695fec*/
    this->q022 = (HWND)760; /*0x695ff1*/
  if ( this->q023 == HWND_MESSAGE|0x2 ) /*0x696002*/
    this->q023 = (HWND)3; /*0x696004*/
  if ( this->q024 == HWND_MESSAGE|0x2 ) /*0x696014*/
    this->q024 = (HWND)57600; /*0x696016*/
  InitializeModemPortSelect((int)this); /*0x696022*/
  NetworkDialog::Dispatch(this); /*0x696029*/
  v3 = GetDlgItem; /*0x696030*/
  DlgItem = GetDlgItem(*this, 1625); /*0x69603c*/
  v5 = DlgItem; /*0x696044*/
  if ( DlgItem ) /*0x696048*/
  {
    SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x696054*/
    for ( i = 0; i < 4; ++i ) /*0x696056*/
    {
      v7 = SendMessageA(v5, 0x4C2u, 0, *(_DWORD *)(dword_A8DB68 + 4 * i)); /*0x69606a*/
      SendMessageA(v5, 0x151u, v7, i); /*0x696074*/
    }
    ListBoxItem = FindListBoxItem(v5, -1, (int)this->q027); /*0x696088*/
    SendMessageA(v5, 0x14Eu, ListBoxItem, 0); /*0x696096*/
    v3 = GetDlgItem; /*0x696098*/
  }
  v15 = this->q025 == 0; /*0x6960ae*/
  v9 = v3(*this, 1628); /*0x6960b3*/
  if ( v9 ) /*0x6960b7*/
    SendMessageA(v9, 0xF1u, v15, 0); /*0x6960ce*/
  v10 = v3(*this, 1627); /*0x6960d8*/
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
        || !(*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8DB4C + 8))(
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
    this->q026 = 0; /*0x696193*/
  }
  NetworkDialog::UpdateListBox(this); /*0x69619d*/
  v13 = v3(*this, 1003); /*0x6961ac*/
  if ( v13 ) /*0x6961b0*/
    SendMessageA(v13, 0xF1u, a2[6] != 0, 0); /*0x6961c9*/
  result = v3(*this, 1002); /*0x6961d3*/
  if ( result ) /*0x6961d7*/
    return (HWND)SendMessageA(result, 0xF1u, a2[7] != 0, 0); /*0x6961f0*/
  return result; /*0x6961f2*/
}



// ==== 0x00696200  ObjectClass::InitializeModemPortSelect  this=ObjectClass  sig=csp ====
HWND __thiscall InitializeModemPortSelect(int this)
{
  HWND result; // eax
  HWND v3; // esi
  wchar_t **v4; // edi
  wchar_t *StringCSF; // eax
  LRESULT v6; // eax
  int v7; // edi
  void *v8; // eax
  const char **v9; // eax
  const char **v10; // edi
  const char *v11; // eax
  LRESULT v12; // eax
  wchar_t *v13; // eax
  LRESULT v14; // eax
  LRESULT ItemListBox; // edi
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  wchar_t *v21; // eax
  int v22; // [esp-4h] [ebp-218h]
  LPARAM lParam; // [esp+10h] [ebp-204h]
  LPARAM lParama; // [esp+10h] [ebp-204h]
  wchar_t Destination[128]; // [esp+14h] [ebp-200h] BYREF
  wchar_t Buffer[128]; // [esp+114h] [ebp-100h] BYREF

  result = GetDlgItem(*(HWND *)this, 1623); /*0x696215*/
  v3 = result; /*0x69621b*/
  if ( result ) /*0x69621f*/
  {
    SendMessageA(result, 0x14Bu, 0, 0); /*0x696235*/
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
    *(_DWORD *)(this + 248) = 0; /*0x696286*/
    for ( lParama = 0; lParama < 10; ++lParama ) /*0x69628c*/
    {
      v8 = __2_YAPAXI_Z(0x1Cu); /*0x696292*/
      if ( v8 ) /*0x69629c*/
      {
        v9 = (const char **)Modem::EnumerateDevices((int)v8, v7); /*0x6962a1*/
        v10 = v9; /*0x6962a6*/
        if ( v9 ) /*0x6962aa*/
        {
          v11 = *v9; /*0x6962ac*/
          if ( *v10 ) /*0x6962ac*/
          {
            strncpy((char *)(this + 63 * (*(_DWORD *)(this + 248) + 4)), v11, 0x3Fu); /*0x6962c8*/
            v12 = SendMessageA(v3, 0x4BCu, 0, this + 63 * (*(_DWORD *)(this + 248) + 4)); /*0x6962eb*/
            SendMessageA(v3, 0x151u, v12, *(_DWORD *)(this + 248) + 5); /*0x6962fe*/
            ++*(_DWORD *)(this + 248); /*0x696300*/
          }
          FileFind::Close(); /*0x696308*/
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
    if ( strlen((const char *)(this + 184)) ) /*0x69637f*/
    {
      ItemListBox = SendMessageA(v3, 0x4B8u, 0xFFFFFFFF, this + 184); /*0x696395*/
      if ( ItemListBox != -1 ) /*0x69639a*/
        return (HWND)SendMessageA(v3, 0x14Eu, ItemListBox, 0); /*0x69639a*/
      ItemListBox = FindListBoxItem(v3, -1, 4); /*0x6963ab*/
      if ( ItemListBox == -1 ) /*0x6963b0*/
        return (HWND)SendMessageA(v3, 0x14Eu, ItemListBox, 0); /*0x6963b0*/
      v16 = GetStringCSF(g_Str_TXT_CUSTOM, 0, g_Str_File_SerialEd_cpp, 692); /*0x6963cc*/
      swprintf(Destination, (const size_t)aSHs, v16, this + 184); /*0x6963dc*/
      SendMessageA(v3, 0x144u, ItemListBox, 0); /*0x6963ed*/
      v17 = Destination; /*0x6963ef*/
      goto LABEL_25; /*0x6963f3*/
    }
    v18 = *(_DWORD *)(this + 136); /*0x6963f8*/
    if ( v18 > 1000 ) /*0x696403*/
    {
      if ( v18 == 1016 ) /*0x696427*/
      {
        v20 = FindListBoxItem(v3, -1, 0); /*0x6964a2*/
        goto LABEL_27; /*0x6964a2*/
      }
    }
    else
    {
      if ( v18 == 1000 ) /*0x696405*/
      {
        v20 = FindListBoxItem(v3, -1, 2); /*0x696420*/
        goto LABEL_27; /*0x696420*/
      }
      v19 = v18 - 744; /*0x696407*/
      if ( !v19 ) /*0x69640c*/
      {
        v20 = FindListBoxItem(v3, -1, 3); /*0x69641c*/
        goto LABEL_27; /*0x69641c*/
      }
      if ( v19 == 16 ) /*0x696411*/
      {
        v20 = FindListBoxItem(v3, -1, 1); /*0x696415*/
LABEL_27:
        ItemListBox = v20; /*0x6964a7*/
        return (HWND)SendMessageA(v3, 0x14Eu, ItemListBox, 0); /*0x6964a7*/
      }
    }
    ItemListBox = FindListBoxItem(v3, -1, 4); /*0x696435*/
    if ( ItemListBox == -1 ) /*0x69643a*/
      return (HWND)SendMessageA(v3, 0x14Eu, ItemListBox, 0); /*0x6964b2*/
    v22 = *(_DWORD *)(this + 136); /*0x696444*/
    v21 = GetStringCSF(g_Str_TXT_CUSTOM, 0, g_Str_File_SerialEd_cpp, 730); /*0x696454*/
    swprintf(Buffer, (const size_t)aSX, v21, v22); /*0x696467*/
    SendMessageA(v3, 0x144u, ItemListBox, 0); /*0x696478*/
    v17 = Buffer; /*0x69647a*/
LABEL_25:
    ItemListBox = SendMessageA(v3, 0x4C2u, 0, (LPARAM)v17); /*0x696481*/
    SendMessageA(v3, 0x151u, ItemListBox, 4); /*0x696497*/
    return (HWND)SendMessageA(v3, 0x14Eu, ItemListBox, 0); /*0x696499*/
  }
  return result; /*0x6964b4*/
}



// ==== 0x006964C0  NetworkDialog::Dispatch  this=NetworkDialog  sig=csp ====
HWND __thiscall sub_6964C0(int this)
{
  HWND result; // eax
  HWND v2; // edi
  LPARAM v3; // ebx
  LPARAM *v4; // esi
  LRESULT v5; // eax
  int v6; // eax
  int v7; // eax
  WPARAM ListBoxItem; // eax

  result = GetDlgItem(*(HWND *)this, 1624); /*0x6964ce*/
  v2 = result; /*0x6964d4*/
  if ( result ) /*0x6964d8*/
  {
    SendMessageA(result, 0x14Bu, 0, 0); /*0x6964f1*/
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
    v6 = *(_DWORD *)(this + 144); /*0x696521*/
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
          return (HWND)SendMessageA(v2, 0x14Eu, ListBoxItem, 0); /*0x696585*/
      }
    }
    v7 = 3; /*0x69655e*/
    goto LABEL_16; /*0x696563*/
  }
  return result; /*0x69658a*/
}



// ==== 0x00696610  NetworkDialog::UpdateListBox  this=NetworkDialog  sig=csp ====
HWND __thiscall sub_696610(HWND *this)
{
  HWND result; // eax
  HWND v3; // edi
  int i; // esi

  result = GetDlgItem(*this, 1630); /*0x69661e*/
  v3 = result; /*0x696624*/
  if ( result ) /*0x696628*/
  {
    SendMessageA(result, 0x184u, 0, 0); /*0x69663f*/
    for ( i = 0; i < dword_A8DB5C; ++i ) /*0x69664a*/
      SendMessageA(v3, 0x4C8u, 0, *(_DWORD *)(dword_A8DB50 + 4 * i)); /*0x69665e*/
    if ( SendMessageA(v3, 0x18Bu, 0, 0) && (int)this->q026 >= -1 ) /*0x696683*/
    {
      if ( (int)this->q026 >= SendMessageA(v3, 0x18Bu, 0, 0) ) /*0x696697*/
        this->q026 = 0; /*0x696699*/
    }
    else
    {
      this->q026 = HWND_MESSAGE|0x2; /*0x6966a5*/
    }
    result = this->q026; /*0x6966ab*/
    if ( result != HWND_MESSAGE|0x2 ) /*0x6966b4*/
      return (HWND)SendMessageA(v3, 0x186u, (WPARAM)result, 0); /*0x6966bf*/
  }
  return result; /*0x6966c1*/
}



// ==== 0x006966D0  ObjectClass::method_6966D0  this=ObjectClass  sig=csp ====
HWND __thiscall sub_6966D0(int this)
{
  bool v2; // bl
  HWND DlgItem; // eax
  HWND result; // eax

  v2 = *(_DWORD *)(this + 148) == 0; /*0x6966ec*/
  DlgItem = GetDlgItem(*(HWND *)this, 1628); /*0x6966ef*/
  if ( DlgItem ) /*0x6966f9*/
    SendMessageA(DlgItem, 0xF1u, v2, 0); /*0x69670c*/
  result = GetDlgItem(*(HWND *)this, 1627); /*0x696716*/
  if ( result ) /*0x69671a*/
    return (HWND)SendMessageA(result, 0xF1u, !v2, 0); /*0x69672c*/
  return result; /*0x69672e*/
}



// ==== 0x006967B0  ObjectClass::DlgProcLoadGame_Load  this=ObjectClass  sig=csp ====
HWND __thiscall sub_6967B0(int this)
{
  HWND DlgItem; // ebx
  HWND result; // eax
  HWND v4; // ebp
  int v5; // eax
  char v6; // al
  wchar_t *v7; // eax
  WPARAM ListBoxItem; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-24h]

  DlgItem = GetDlgItem(*(HWND *)this, 1623); /*0x6967cf*/
  result = GetDlgItem(*(HWND *)this, 1631); /*0x6967d1*/
  v4 = result; /*0x6967d5*/
  if ( DlgItem && result ) /*0x6967df*/
  {
    ShowWindow(result, 0); /*0x6967e8*/
    EnableWindow(v4, 0); /*0x6967f1*/
    SendMessageA(v4, 0x4B5u, 0x40u, this + 8); /*0x696809*/
    *(_BYTE *)(this + 71) = 0; /*0x69680d*/
    String::Trim((char *)(this + 8)); /*0x696811*/
    _strupr((char *)(this + 8)); /*0x696817*/
    if ( !_strcmpi((const void *)(this + 8), a3f8) ) /*0x69682c*/
    {
LABEL_17:
      v5 = 0; /*0x69691b*/
      goto LABEL_18; /*0x69691b*/
    }
    if ( !_strcmpi((const void *)(this + 8), a2f8) ) /*0x696838*/
    {
LABEL_5:
      v5 = 1; /*0x696844*/
LABEL_18:
      ListBoxItem = FindListBoxItem(DlgItem, -1, v5); /*0x69691d*/
      return (HWND)SendMessageA(DlgItem, 0x14Eu, ListBoxItem, 0); /*0x696931*/
    }
    if ( !_strcmpi((const void *)(this + 8), a3e8) ) /*0x696854*/
    {
LABEL_7:
      v5 = 2; /*0x696860*/
      goto LABEL_18; /*0x696865*/
    }
    if ( !_strcmpi((const void *)(this + 8), a2e8) ) /*0x696870*/
    {
LABEL_9:
      v5 = 3; /*0x69687c*/
      goto LABEL_18; /*0x696881*/
    }
    if ( !strncmp((const char *)(this + 8), aCom, 3u) ) /*0x69688e*/
    {
      v6 = *(_BYTE *)(this + 11); /*0x69689a*/
      switch ( v6 ) /*0x6968a8*/
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
          if ( v6 <= 57 && v6 > 48 ) /*0x6968b5*/
          {
            *(_BYTE *)(this + 12) = 0; /*0x6968b7*/
            return ListBox::SetCustomEntry((HWND *)this, 1623, 4, (void *)(this + 8)); /*0x6968b7*/
          }
          StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_SerialEd_cpp, 1088); /*0x6968f4*/
          v7 = GetStringCSF(aTxtInvalidPort, 0, g_Str_File_SerialEd_cpp, 1088); /*0x696906*/
          result = (HWND)Dialog::ShowMessageBox((int)SendMessageA, v7, StringCSF, 0, 0, 0); /*0x696910*/
          break; /*0x69691a*/
      }
    }
    else
    {
      return ListBox::SetCustomEntry((HWND *)this, 1623, 4, (void *)(this + 8)); /*0x6968bb*/
    }
  }
  return result; /*0x6968ca*/
}



// ==== 0x00696950  ObjectClass::method  this=ObjectClass  sig=csp ====
HWND __thiscall sub_696950(int this)
{
  HWND result; // eax
  HWND v3; // ebx

  result = GetDlgItem(*(HWND *)this, 1626); /*0x69695c*/
  v3 = result; /*0x696962*/
  if ( result ) /*0x696966*/
  {
    ShowWindow(result, 0); /*0x69696c*/
    EnableWindow(v3, 0); /*0x696975*/
    SendMessageA(v3, 0x4B5u, 0x10u, this + 8); /*0x696987*/
    *(_BYTE *)(this + 23) = 0; /*0x69698f*/
    String::Trim((char *)(this + 8)); /*0x696993*/
    _strupr((char *)(this + 8)); /*0x696999*/
    return ListBox::SetCustomEntry((HWND *)this, 1625, 3, (void *)(this + 8)); /*0x6969ab*/
  }
  return result; /*0x6969b1*/
}



// ==== 0x006969C0  ListBox::SetCustomEntry  this=ObjectClass  sig=csp ====
HWND __thiscall ListBox_SetCustomEntry(HWND *this, int nIDDlgItem, LPARAM a3, void *a4)
{
  HWND result; // eax
  HWND v5; // ebx
  wchar_t *String; // eax
  LRESULT v7; // esi
  int wParam; // [esp+Ch] [ebp-84h]
  char lParam[128]; // [esp+10h] [ebp-80h] BYREF

  result = GetDlgItem(*this, nIDDlgItem); /*0x6969d1*/
  v5 = result; /*0x6969d7*/
  if ( result ) /*0x6969db*/
  {
    wParam = FindListBoxItem(result, -1, a3); /*0x696a05*/
    SendMessageA(v5, 0x4BDu, wParam, (LPARAM)lParam); /*0x696a09*/
    result = (HWND)strchr(lParam, 45); /*0x696a12*/
    if ( result ) /*0x696a1c*/
    {
      result = (HWND)_strcmpi(a4, (char *)result + 1); /*0x696a2c*/
      if ( result ) /*0x696a36*/
      {
        String = GetStringCSF(g_Str_TXT_CUSTOM, 0, g_Str_File_SerialEd_cpp, 1187); /*0x696a4e*/
        sprintf(lParam, "%ls ", String); /*0x696a5e*/
        strcat(lParam, (const char *)a4); /*0x696a87*/
        SendMessageA(v5, 0x144u, wParam, 0); /*0x696a9b*/
        v7 = SendMessageA(v5, 0x4BCu, 0, (LPARAM)lParam); /*0x696ab3*/
        SendMessageA(v5, 0x151u, v7, a3); /*0x696abd*/
        return (HWND)SendMessageA(v5, 0x14Eu, v7, 0); /*0x696ac8*/
      }
    }
  }
  return result; /*0x696acb*/
}



// ==== 0x00696AE0  ObjectClass::DlgProcLoadGame_Load_696AE0  this=ObjectClass  sig=csp ====
HWND __thiscall sub_696AE0(int this)
{
  HWND DlgItem; // edi
  HWND result; // eax
  HWND v4; // ebp
  char *v5; // esi
  LRESULT v6; // edi
  int v7; // eax
  char *v8; // [esp+10h] [ebp-8h]

  DlgItem = GetDlgItem(*(HWND *)this, 1629); /*0x696b05*/
  result = GetDlgItem(*(HWND *)this, 1630); /*0x696b07*/
  v4 = result; /*0x696b0b*/
  if ( DlgItem ) /*0x696b0d*/
  {
    if ( result ) /*0x696b15*/
    {
      v5 = (char *)(this + 8); /*0x696b21*/
      SendMessageA(DlgItem, 0x4B5u, 0x80u, (LPARAM)v5); /*0x696b30*/
      SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x696b3f*/
      String::Trim(v5); /*0x696b43*/
      result = 0; /*0x696b4d*/
      if ( strlen(v5) ) /*0x696b4f*/
      {
        _strupr(v5); /*0x696b5b*/
        v6 = SendMessageA(v4, 0x4C4u, 0xFFFFFFFF, (LPARAM)v5); /*0x696b6e*/
        if ( v6 == -1 ) /*0x696b73*/
        {
          v8 = (char *)__2_YAPAXI_Z(0x29u); /*0x696b8c*/
          strcpy(v8, v5); /*0x696ba2*/
          result = (HWND)SendMessageA(v4, 0x4C8u, 0, (LPARAM)v8); /*0x696bb1*/
          v6 = (LRESULT)result; /*0x696bb3*/
          if ( result == HWND_MESSAGE|0x2 ) /*0x696bb8*/
            return result; /*0x696bb8*/
          if ( dword_A8DB5C < dword_A8DB54 /*0x696bf1*/
            || (byte_A8DB59 || !dword_A8DB54)
            && dword_A8DB60 > 0
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8DB4C + 8))(
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
        *(_DWORD *)(this + 152) = v6; /*0x696c2e*/
        return (HWND)this; /*0x696c2a*/
      }
    }
  }
  return result; /*0x696c34*/
}



// ==== 0x00696C40  ObjectClass::DlgProcLoadGame_Load_696C40  this=ObjectClass  sig=csp ====
HWND __thiscall sub_696C40(int this)
{
  HWND result; // eax
  HWND v3; // edi
  LRESULT v4; // esi
  int v5; // eax

  result = GetDlgItem(*(HWND *)this, 1630); /*0x696c4f*/
  v3 = result; /*0x696c55*/
  if ( result ) /*0x696c59*/
  {
    result = (HWND)SendMessageA(result, 0x18Bu, 0, 0); /*0x696c6f*/
    if ( (int)result > 0 ) /*0x696c73*/
    {
      result = (HWND)SendMessageA(v3, 0x188u, 0, 0); /*0x696c7f*/
      v4 = (LRESULT)result; /*0x696c81*/
      if ( result != HWND_MESSAGE|0x2 ) /*0x696c86*/
      {
        SendMessageA(v3, 0x182u, (WPARAM)result, 0); /*0x696c91*/
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
        result = (HWND)SendMessageA(v3, 0x197u, v4, 0); /*0x696ce7*/
        *(_DWORD *)(this + 152) = v4; /*0x696ce9*/
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
int __thiscall SessionClass_GetPlayerSide(int this)
{
  int result; // eax

  result = -2; /*0x696f13*/
  if ( *(_DWORD *)(this + 79) != -2 ) /*0x696f1a*/
    return *(_DWORD *)(this + 75); /*0x696f1c*/
  return result; /*0x696f1f*/
}



// ==== 0x00696F20  SessionClass::GetPlayerColor  this=SessionClass  sig=csp ====
int __thiscall SessionClass_GetPlayerColor(int this)
{
  int result; // eax

  result = -2; /*0x696f23*/
  if ( *(_DWORD *)(this + 87) != -2 ) /*0x696f2a*/
    return *(_DWORD *)(this + 83); /*0x696f2c*/
  return result; /*0x696f2f*/
}



// ==== 0x00696F30  MPCooperative::finalizeSession  this=MPCooperative  sig=csp ====
int __thiscall sub_696F30(int this)
{
  int result; // eax

  result = -2; /*0x696f33*/
  if ( *(_DWORD *)(this + 87) != -2 || *(_DWORD *)(this + 83) != -1 ) /*0x696f40*/
    return *(_DWORD *)(this + 83); /*0x696f42*/
  return result; /*0x696f45*/
}



// ==== 0x00696F50  SessionClass::GetOption  this=SessionClass  sig=csp ====
int __thiscall SessionClass_GetOption(int this)
{
  int result; // eax

  result = -2; /*0x696f53*/
  if ( *(_DWORD *)(this + 95) != -2 || *(_DWORD *)(this + 91) != -1 ) /*0x696f60*/
    return *(_DWORD *)(this + 91); /*0x696f62*/
  return result; /*0x696f65*/
}



// ==== 0x00696F70  SessionClass::GetOption2  this=SessionClass  sig=csp ====
int __thiscall SessionClass_GetOption2(int this)
{
  int result; // eax

  result = -2; /*0x696f73*/
  if ( *(_DWORD *)(this + 103) != -2 || *(_DWORD *)(this + 99) != -1 ) /*0x696f80*/
    return *(_DWORD *)(this + 99); /*0x696f82*/
  return result; /*0x696f85*/
}



// ==== 0x00696F90  SessionClass::SetPlayerOption  this=CampaignClass  sig=csp ====
int __thiscall SessionClass_SetPlayerOption(int this, int a2)
{
  int result; // eax

  result = a2; /*0x696f90*/
  if ( a2 == -2 ) /*0x696f97*/
  {
    *(_DWORD *)(this + 75) = 0; /*0x696f99*/
    *(_DWORD *)(this + 79) = -2; /*0x696fa0*/
  }
  else
  {
    *(_DWORD *)(this + 75) = a2; /*0x696fa6*/
    *(_DWORD *)(this + 79) = -1; /*0x696fa9*/
  }
  return result; /*0x696fa3*/
}



// ==== 0x00696FC0  SessionClass::SetPlayerColor  this=CampaignClass  sig=csp ====
int __thiscall SessionClass_SetPlayerColor(int this, int a2)
{
  int result; // eax

  result = a2; /*0x696fc0*/
  if ( a2 == -2 ) /*0x696fc7*/
  {
    *(_DWORD *)(this + 83) = -1; /*0x696fc9*/
    *(_DWORD *)(this + 87) = -2; /*0x696fd0*/
  }
  else
  {
    *(_DWORD *)(this + 83) = a2; /*0x696fd6*/
    *(_DWORD *)(this + 87) = -1; /*0x696fd9*/
  }
  return result; /*0x696fd3*/
}



// ==== 0x00696FF0  SessionClass::SetOption  this=CampaignClass  sig=csp ====
int __thiscall SessionClass_SetOption(int this, int a2)
{
  int result; // eax

  result = a2; /*0x696ff0*/
  if ( a2 == -2 ) /*0x696ff7*/
  {
    *(_DWORD *)(this + 91) = -1; /*0x696ff9*/
    *(_DWORD *)(this + 95) = -2; /*0x697000*/
  }
  else
  {
    *(_DWORD *)(this + 91) = a2; /*0x697006*/
    *(_DWORD *)(this + 95) = -1; /*0x697009*/
  }
  return result; /*0x697003*/
}



// ==== 0x00697020  SessionClass::SetOption2  this=CampaignClass  sig=csp ====
int __thiscall SessionClass_SetOption2(int this, int a2)
{
  int result; // eax

  result = a2; /*0x697020*/
  if ( a2 == -2 ) /*0x697027*/
  {
    *(_DWORD *)(this + 99) = -1; /*0x697029*/
    *(_DWORD *)(this + 103) = -2; /*0x697030*/
  }
  else
  {
    *(_DWORD *)(this + 99) = a2; /*0x697036*/
    *(_DWORD *)(this + 103) = -1; /*0x697039*/
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
  this->q065 = 1; /*0x6970c7*/
  this->q066 = 10000; /*0x6970cd*/
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
  this->q082 = 0; /*0x697110*/
  this->q083 = 0; /*0x697116*/
  this->u32_84 = 1; /*0x69711c*/
  this->q085 = 10000; /*0x697122*/
  this->q086 = 10; /*0x697128*/
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
  this->u32_A4 = 10000; /*0x69717c*/
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
  this->q007 = 0; /*0x697402*/
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
  this->u8_51 = 0; /*0x69744c*/
  this->q148 = 0; /*0x697452*/
  this->idxSide = 0; /*0x69745b*/
  this->idxSide2 = -1; /*0x697461*/
  this->ptr_57 = 2; /*0x697467*/
  this->q058 = -1; /*0x69746d*/
  this->u8_61 = this->idxSide; /*0x697479*/
  this->Side2 = this->idxSide2; /*0x697485*/
  this->u32_5F = this->ptr_57; /*0x697491*/
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
  memset(byte_B73E44, 0, 0x2000u); /*0x697522*/
  memset(dword_B76338, 0, sizeof(dword_B76338)); /*0x69752e*/
  this->MuteSWLaunches = 0; /*0x697530*/
  this->q304 = 0; /*0x697536*/
  this->LastNickSlot = -1; /*0x69753c*/
  this->WOLLimitResolution = 0; /*0x697542*/
  this->q2968 = 0; /*0x697548*/
  this->q3074 = -1; /*0x697559*/
  memset(this + 12320, 0, 0x28u); /*0x69755f*/
  this->q18240 = 0; /*0x697561*/
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
  this->q310 = 8; /*0x6975b6*/
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
void __thiscall ObjectManager::CleanupArrays(int this)
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

  while ( *(_DWORD *)(this + 10532) ) /*0x697846*/
  {
    __3_YAXPAX_Z(**(void ***)(this + 10520)); /*0x697857*/
    v2 = *(_DWORD *)(this + 10532); /*0x69785c*/
    if ( v2 > 0 ) /*0x697867*/
    {
      v3 = v2 - 1; /*0x697869*/
      v4 = 0; /*0x69786c*/
      for ( *(_DWORD *)(this + 10532) = v3; /*0x697876*/
            v4 < *(_DWORD *)(this + 10532);
            *(_DWORD *)(*(_DWORD *)(this + 10520) + 4 * v4 - 4) = *(_DWORD *)(*(_DWORD *)(this + 10520) + 4 * v4) )
      {
        ++v4; /*0x69787e*/
      }
    }
  }
  while ( *(_DWORD *)(this + 10556) ) /*0x697898*/
  {
    free(**(void ***)(this + 10544)); /*0x6978a9*/
    v5 = *(_DWORD *)(this + 10556); /*0x6978ae*/
    if ( v5 > 0 ) /*0x6978b9*/
    {
      v6 = v5 - 1; /*0x6978bb*/
      v7 = 0; /*0x6978be*/
      for ( *(_DWORD *)(this + 10556) = v6; /*0x6978c8*/
            v7 < *(_DWORD *)(this + 10556);
            *(_DWORD *)(*(_DWORD *)(this + 10544) + 4 * v7 - 4) = *(_DWORD *)(*(_DWORD *)(this + 10544) + 4 * v7) )
      {
        ++v7; /*0x6978d0*/
      }
    }
  }
  v8 = *(void **)(this + 10544); /*0x6978ea*/
  *(_DWORD *)(this + 10540) = &VectorClass<unsigned short const *>::`vftable'; /*0x6978f0*/
  if ( v8 && *(_BYTE *)(this + 10553) ) /*0x6978fe*/
  {
    __3_YAXPAX_Z(v8); /*0x697907*/
    *(_DWORD *)(this + 10544) = 0; /*0x69790f*/
  }
  *(_BYTE *)(this + 10553) = 0; /*0x697915*/
  *(_DWORD *)(this + 10548) = 0; /*0x69791b*/
  v9 = *(void **)(this + 10520); /*0x697921*/
  *(_DWORD *)(this + 10516) = &VectorClass<char *>::`vftable'; /*0x697927*/
  if ( v9 && *(_BYTE *)(this + 10529) ) /*0x697935*/
  {
    __3_YAXPAX_Z(v9); /*0x69793e*/
    *(_DWORD *)(this + 10520) = 0; /*0x697946*/
  }
  *(_BYTE *)(this + 10529) = 0; /*0x69794c*/
  *(_DWORD *)(this + 10524) = 0; /*0x697952*/
  v10 = *(void **)(this + 10496); /*0x697958*/
  *(_DWORD *)(this + 10492) = &VectorClass<PhoneEntryClass *>::`vftable'; /*0x69795e*/
  if ( v10 && *(_BYTE *)(this + 10505) ) /*0x69796c*/
  {
    __3_YAXPAX_Z(v10); /*0x697975*/
    *(_DWORD *)(this + 10496) = 0; /*0x69797d*/
  }
  *(_BYTE *)(this + 10505) = 0; /*0x697983*/
  *(_DWORD *)(this + 10500) = 0; /*0x697989*/
  v11 = *(void **)(this + 10304); /*0x69798f*/
  *(_DWORD *)(this + 10300) = &VectorClass<NodeNameType *>::`vftable'; /*0x69799d*/
  if ( v11 && *(_BYTE *)(this + 10313) ) /*0x6979a5*/
  {
    __3_YAXPAX_Z(v11); /*0x6979ae*/
    *(_DWORD *)(this + 10304) = 0; /*0x6979b6*/
  }
  *(_BYTE *)(this + 10313) = 0; /*0x6979bc*/
  *(_DWORD *)(this + 10308) = 0; /*0x6979c2*/
  v12 = *(void **)(this + 10280); /*0x6979c8*/
  *(_DWORD *)(this + 10276) = &VectorClass<NodeNameType *>::`vftable'; /*0x6979ce*/
  if ( v12 && *(_BYTE *)(this + 10289) ) /*0x6979d8*/
  {
    __3_YAXPAX_Z(v12); /*0x6979e1*/
    *(_DWORD *)(this + 10280) = 0; /*0x6979e9*/
  }
  *(_BYTE *)(this + 10289) = 0; /*0x6979ef*/
  *(_DWORD *)(this + 10284) = 0; /*0x6979f5*/
  v13 = *(void **)(this + 10256); /*0x6979fb*/
  *(_DWORD *)(this + 10252) = &VectorClass<NodeNameType *>::`vftable'; /*0x697a01*/
  if ( v13 && *(_BYTE *)(this + 10265) ) /*0x697a0b*/
  {
    __3_YAXPAX_Z(v13); /*0x697a14*/
    *(_DWORD *)(this + 10256) = 0; /*0x697a1c*/
  }
  *(_BYTE *)(this + 10265) = 0; /*0x697a28*/
  *(_DWORD *)(this + 10260) = 0; /*0x697a2e*/
  *(_DWORD *)(this + 9044) = &CCFileClass::`vftable'; /*0x697a37*/
  *(_DWORD *)(this + 9144) = 0; /*0x697a3d*/
  Vector::Clear(this + 9132); /*0x697a40*/
  *(_DWORD *)(this + 9044) = &off_7E1668; /*0x697a47*/
  BufferIOFileClass::Dtor((_DWORD *)(this + 9044)); /*0x697a4d*/
  ObjectManager::InitMessageList(this + 2600); /*0x697a58*/
  v14 = *(void **)(this + 2292); /*0x697a5d*/
  *(_DWORD *)(this + 2288) = &VectorClass<GlobalPacketType *>::`vftable'; /*0x697a63*/
  if ( v14 && *(_BYTE *)(this + 2301) ) /*0x697a72*/
  {
    __3_YAXPAX_Z(v14); /*0x697a7b*/
    *(_DWORD *)(this + 2292) = 0; /*0x697a83*/
  }
  *(_BYTE *)(this + 2301) = 0; /*0x697a89*/
  *(_DWORD *)(this + 2296) = 0; /*0x697a8f*/
  v15 = *(void **)(this + 1684); /*0x697a95*/
  *(_DWORD *)(this + 1680) = &VectorClass<MultiMission *>::`vftable'; /*0x697a9b*/
  if ( v15 && *(_BYTE *)(this + 1693) ) /*0x697aa9*/
  {
    __3_YAXPAX_Z(v15); /*0x697ab2*/
    *(_DWORD *)(this + 1684) = 0; /*0x697aba*/
  }
  *(_BYTE *)(this + 1693) = 0; /*0x697ac0*/
  *(_DWORD *)(this + 1688) = 0; /*0x697ac6*/
}



// ==== 0x00697AD0  BulkData::InitMissionHashing  this=BulkData  sig=csp ====
void __thiscall sub_697AD0(_DWORD *this)
{
  DWORD v2; // eax
  char *v3; // eax
  const char *v4; // esi
  unsigned int v5; // ebx
  DWORD Time; // [esp+10h] [ebp-4h] BYREF

  SessionClass::LoadMissionList(this); /*0x697ad7*/
  Time = timeGetTime(); /*0x697ae2*/
  v2 = DiskSpace::CheckAvailable(); /*0x697ae6*/
  ComputeHash(&Time, v2); /*0x697af1*/
  v3 = Object_Init_7CBC11(aPath); /*0x697afb*/
  v4 = v3; /*0x697b00*/
  if ( v3 ) /*0x697b07*/
  {
    v5 = 0; /*0x697b10*/
    if ( strlen(v3) ) /*0x697b12*/
    {
      do /*0x697b35*/
        ComputeHash(&Time, v4[v5++]); /*0x697b21*/
      while ( v5 < strlen(v4) ); /*0x697b35*/
    }
  }
  this->ptr_144 = Time; /*0x697b41*/
  Debug::Log(); /*0x697b47*/
}



// ==== 0x00697B60  nullsub_228  this=-  sig=ida-proto ====
void nullsub_228()
{
  ; /*0x697b60*/
}



// ==== 0x00697B70  SessionClass::CreateConnections  this=SessionClass  sig=csp ====
int __thiscall SessionClass_CreateConnections(void *this)
{
  int v3; // esi
  int v4; // eax
  int v5; // ebp
  int i; // eax
  int v7; // eax
  int v8; // eax
  int *v9; // ebp
  int v10; // esi
  DWORD Ticks; // ecx
  int v12; // [esp+10h] [ebp-18h] BYREF
  int v13; // [esp+14h] [ebp-14h] BYREF
  _BYTE v14[8]; // [esp+18h] [ebp-10h] BYREF
  _BYTE v15[8]; // [esp+20h] [ebp-8h] BYREF

  Debug::Log(); /*0x697b7e*/
  if ( g_GameMode_Current[0] != 3 && g_GameMode_Current[0] != 4 ) /*0x697b93*/
    return 0; /*0x697b9e*/
  v3 = 0; /*0x697ba7*/
  if ( *((int *)this + 2579) > 0 ) /*0x697bab*/
  {
    do /*0x697bc5*/
    {
      Debug::Log(); /*0x697bc5*/
      if ( _wcsicmp( /*0x697be7*/
             *(const wchar_t **)(this->u32_2840 + 4 * v3),
             (const wchar_t *)(*((_DWORD *)HouseClass_Array
                               + *(_DWORD *)(*(_DWORD *)(this->u32_2840 + 4 * v3) + 111))
                             + 90154)) )
      {
        return 0; /*0x697bf1*/
      }
      if ( !_wcsicmp(*(const wchar_t **)(this->u32_2840 + 4 * v3), (const wchar_t *)this + 6160) ) /*0x697c04*/
      {
        this->q3074 = *(_DWORD *)(*(_DWORD *)(this->u32_2840 + 4 * v3) + 111); /*0x697c25*/
        Network::CopyAddress((_DWORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * v3) + 40), &v13, (int)v15); /*0x697c38*/
        NetworkID::Assign(&dword_A8DBA4, &v13, (int)v15, 0); /*0x697c4d*/
        Network::SetPlayerCoords(&dword_A8DBA4); /*0x697c5c*/
      }
      v4 = *(_DWORD *)(this->u32_2840 + 4 * v3); /*0x697c67*/
      *(_DWORD *)(*((_DWORD *)HouseClass_Array + *(_DWORD *)(v4 + 111)) + 516) = *(_DWORD *)(v4 + 123); /*0x697c7e*/
      Network::CopyAddress((_DWORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * v3) + 40), &v13, (int)v15); /*0x697c94*/
      v5 = 0; /*0x697c99*/
      for ( i = 0; i < 4; ++i ) /*0x697c9b*/
        v5 = (unsigned __int8)v15[i] | (v5 << 8); /*0x697ca8*/
      Debug::Log(); /*0x697cc7*/
      *(_DWORD *)(*((_DWORD *)HouseClass_Array + *(_DWORD *)(*(_DWORD *)(this->u32_2840 + 4 * v3) + 111)) + 512) = v5; /*0x697ce5*/
      *(_BYTE *)(*((_DWORD *)HouseClass_Array + *(_DWORD *)(*(_DWORD *)(this->u32_2840 + 4 * v3) + 111)) + 520) = 0; /*0x697d00*/
      if ( v3 > 0 ) /*0x697d06*/
      {
        v7 = *(_DWORD *)(this->u32_2840 + 4 * v3); /*0x697d0e*/
        SessionClass::initLAN(*(_DWORD *)(v7 + 111), (wchar_t *)v7, v7 + 40); /*0x697d1f*/
        *(_DWORD *)(*(_DWORD *)(this->u32_2840 + 4 * v3) + 115) = -1; /*0x697d2d*/
      }
    }
    while ( ++v3 < this->qA13 ); /*0x697bc5*/
  }
  v8 = g_LastPerformanceTick; /*0x697d43*/
  v9 = Network_LastPacketTime; /*0x697d48*/
  do /*0x697d79*/
  {
    v10 = g_PerformanceTickOffset; /*0x697d4d*/
    if ( v8 != -1 ) /*0x697d56*/
    {
      Ticks = Timer::GetTicks(); /*0x697d62*/
      v8 = g_LastPerformanceTick; /*0x697d64*/
      v10 += Ticks - g_LastPerformanceTick; /*0x697d6b*/
    }
    *v9++ = v10; /*0x697d6d*/
  }
  while ( (int)v9 < (int)&byte_A8E2A4 ); /*0x697d79*/
  if ( *(_DWORD *)this != 4 ) /*0x697d7e*/
    goto LABEL_22; /*0x697d7e*/
  if ( !this->q3090 ) /*0x697d84*/
    goto LABEL_22; /*0x697d84*/
  v12 = 0; /*0x697da0*/
  v14[0] = 0; /*0x697db0*/
  v14[1] = 0; /*0x697db4*/
  v14[2] = 0; /*0x697db8*/
  v14[3] = 0; /*0x697dbc*/
  v14[4] = 0; /*0x697dc0*/
  v14[5] = 0; /*0x697dc4*/
  NetworkID::Assign(&dword_A8DBB0, &v12, (int)v14, 0); /*0x697dc8*/
  this->q2968 = 1; /*0x697dd2*/
  this->u32_308C = 0; /*0x697dd9*/
  this->u32_309C = 20; /*0x697ddf*/
  this->u32_3094 = -1; /*0x697de9*/
  SessionClass::initInternet(g_NetworkManager); /*0x697df3*/
  SessionClass::BuildLobbyPlayerList(&g_NetworkEventQueue); /*0x697dfd*/
  if ( SessionClass::IsValidHouse((int)g_GameMode_Current, 0) ) /*0x697e08*/
  {
    if ( !(unsigned __int8)LaunchMultiplayerHost(0) /*0x697e25*/
      || !(unsigned __int8)Network::SendMasterPlayerList(&g_NetworkEventQueue) )
    {
LABEL_22:
      g_Network_IsHosting = 0; /*0x697e2e*/
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
    v2 = HouseClass_Player; /*0x697e7b*/
  if ( g_GameMode_Current[0] != 4 || !v2 ) /*0x697e8c*/
    goto LABEL_9; /*0x697e8c*/
  v3 = *(_DWORD *)(this + 12404); /*0x697e8e*/
  if ( v3 != -1 ) /*0x697e97*/
    return *((_DWORD *)v2 + 12) == v3; /*0x697ea8*/
  if ( !_wcsicmp((const wchar_t *)v2 + 45077, (const wchar_t *)(this + 12320)) ) /*0x697eb9*/
    return 1; /*0x697ec7*/
LABEL_9:
  v5 = 0; /*0x697ed3*/
  if ( HouseClass_Count <= 0 ) /*0x697ed7*/
    return 0; /*0x697efd*/
  for ( i = HouseClass_Array; ; i = (HouseClass *)((char *)i + 4) ) /*0x697ed9*/
  {
    v7 = *(#375 **)i->gap0; /*0x697edf*/
    if ( *(_BYTE *)(*(_DWORD *)i->gap0 + 492) ) /*0x697ee1*/
    {
      if ( !*((_BYTE *)v7 + 501) ) /*0x697eeb*/
        break; /*0x697eeb*/
    }
    if ( ++v5 >= HouseClass_Count ) /*0x697efb*/
      return 0; /*0x697efb*/
  }
  return v2 == v7; /*0x697ea0*/
}



// ==== 0x00697F10  ObjectClass::ReadGameSettingsINI  this=AbstractTypeClass  sig=csp ====
int __thiscall GameSetup_ReadINI(_DWORD *this, _DWORD *a2, int a3, _DWORD *a4, _DWORD *a5)
{
  int First; // eax
  int v7; // ebp
  int i; // esi
  char *v9; // eax
  int v10; // edx
  int v11; // ecx
  int result; // eax
  int v13; // [esp+10h] [ebp-14h] BYREF
  char Buffer[16]; // [esp+14h] [ebp-10h] BYREF

  INIClass::ResetSection(a2); /*0x697f1f*/
  First = MultiplayerGameMode::GetFirst(); /*0x697f24*/
  v7 = a3; /*0x697f2c*/
  *this = INIClass::ReadInt_Overwrite(a3, g_INI_Key_GameMode, *(_DWORD *)(First + 40)); /*0x697f48*/
  this->vtable2 = INIClass::ReadInt_Overwrite(v7, aScenindex, 0); /*0x697f4f*/
  this->vtable3 = INIClass::ReadInt_Overwrite(v7, g_INI_Key_GameSpeed, *((_DWORD *)g_RulesClass_Instance + 1320)); /*0x697f6b*/
  this->vtable4 = INIClass::ReadInt_Overwrite(v7, g_INI_Key_Credits, *((_DWORD *)g_RulesClass_Instance + 1313)); /*0x697f88*/
  this->uniqueId = INIClass::ReadInt_Overwrite(v7, g_INI_Key_UnitCount, *((_DWORD *)g_RulesClass_Instance + 1317)); /*0x697fa5*/
  this->q050 = INIClass::ReadBool_Overwrite( /*0x697fc1*/
                            v7,
                            g_INI_Key_ShortGame,
                            *((_BYTE *)g_RulesClass_Instance + 5302));
  this->q054 = INIClass::ReadBool_Overwrite( /*0x697fde*/
                            v7,
                            g_INI_Key_SuperWeaponsAllowed,
                            *((_BYTE *)g_RulesClass_Instance + 5305));
  this->q058 = INIClass::ReadBool_Overwrite( /*0x697ffb*/
                            v7,
                            g_INI_Key_BuildOffAlly,
                            *((_BYTE *)g_RulesClass_Instance + 5306));
  this->q05C = INIClass::ReadBool_Overwrite(v7, aMcvrepacks, *((_BYTE *)g_RulesClass_Instance + 5304)); /*0x698017*/
  this->UIName = INIClass::ReadBool_Overwrite(v7, aCratesappear, *((_BYTE *)g_RulesClass_Instance + 5297)); /*0x698034*/
  for ( i = 1; i < 8; ++i ) /*0x698037*/
  {
    sprintf(Buffer, "Slot%02d", i); /*0x698047*/
    if ( i == 1 ) /*0x698052*/
      a2 = a5; /*0x698058*/
    else
      a2 = a4; /*0x698062*/
    a3 = -2; /*0x69806f*/
    v13 = -2; /*0x698073*/
    GameSetup::ParseCoordTriple(v7, Buffer, &a2, &a3, &v13); /*0x69808a*/
    v9 = (char *)(this + 3 * i); /*0x698096*/
    v10 = a3; /*0x698099*/
    *((_DWORD *)v9 + 7) = a2; /*0x69809d*/
    v11 = v13; /*0x6980a0*/
    *((_DWORD *)v9 + 8) = v10; /*0x6980a4*/
    result = 3 * i + 9; /*0x6980a7*/
    *(this + result) = v11; /*0x6980af*/
  }
  return result; /*0x6980b4*/
}



// ==== 0x006980C0  ScenarioClass::LoadNetworkConfig  this=ScenarioClass  sig=csp ====
int __thiscall Network_LoadConfig(int this)
{
  int i; // esi
  int j; // esi
  int v4; // ecx
  int v5; // eax
  wchar_t *v6; // eax
  int Int_Overwrite; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  char Bool_Overwrite; // al
  char v12; // cl
  char v13; // al
  int v14; // eax
  void *v15; // eax
  int v16; // eax
  int v17; // ebx
  const void **v18; // esi
  int KeyCount; // ebx
  char *v20; // eax
  char *v21; // esi
  unsigned __int8 *StringByIndex; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // edx
  void *v27; // ebx
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
  const void **v38; // esi
  char *v39; // eax
  char *v40; // eax
  char *v41; // eax
  int v42; // edx
  int v43; // eax
  int v44; // eax
  int v45; // edx
  int v46; // eax
  int v48; // [esp-10h] [ebp-4C4h]
  char *v49; // [esp-8h] [ebp-4BCh]
  char v50; // [esp-4h] [ebp-4B8h]
  int k; // [esp+10h] [ebp-4A4h] BYREF
  int v52; // [esp+14h] [ebp-4A0h] BYREF
  int v53; // [esp+18h] [ebp-49Ch] BYREF
  char v54; // [esp+1Ch] [ebp-498h] BYREF
  _DWORD v55[22]; // [esp+20h] [ebp-494h] BYREF
  _BYTE v56[12]; // [esp+78h] [ebp-43Ch] BYREF
  int v57; // [esp+84h] [ebp-430h]
  wchar_t v58[20]; // [esp+8Ch] [ebp-428h] BYREF
  char String[1024]; // [esp+B4h] [ebp-400h] BYREF

  RulesClass::LoadCountries(CCINIClass_INI_Rules); /*0x6980d6*/
  for ( i = 0; i < *(_DWORD *)(this + 10532); ++i ) /*0x6980e5*/
    __3_YAXPAX_Z(*(void **)(*(_DWORD *)(this + 10520) + 4 * i)); /*0x6980f1*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 10516) + 12))(this + 10516); /*0x698114*/
  for ( j = 0; j < *(_DWORD *)(this + 10508); ++j ) /*0x698121*/
  {
    v4 = *(_DWORD *)(this + 10496); /*0x698123*/
    if ( *(_DWORD *)(v4 + 4 * j) ) /*0x698129*/
      __3_YAXPAX_Z(*(void **)(v4 + 4 * j)); /*0x698131*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 10492) + 12))(this + 10492); /*0x698150*/
  CCFileClass::Construct(v55, g_Str_File_RA2MD_INI); /*0x69815c*/
  if ( !byte_B07788 ) /*0x698168*/
  {
    *(_DWORD *)(this + 12272) = INIClass::ReadInt_Overwrite(g_INI_Key_MultiPlayer, aPortbase, 1250); /*0x698194*/
    *(_DWORD *)(this + 12276) = INIClass::ReadInt_Overwrite(g_INI_Key_MultiPlayer, aForceportbase, 0); /*0x6981ab*/
    v5 = Random::Range(Randomizer_Global, 0, 0x8000); /*0x6981b1*/
    dword_ABFED8 = INIClass::ReadInt_Overwrite(g_INI_Key_MultiPlayer, aPortpool, v5 + 4096); /*0x6981d5*/
    byte_B07788 = 1; /*0x6981da*/
    Network::dispatchEvent(&dword_ABFEC8); /*0x6981e1*/
  }
  byte_A8E180 = INIClass::ReadBool_Overwrite(g_INI_Key_MultiPlayer, aSenddelay, 0); /*0x69820d*/
  dword_A8E254 = INIClass::ReadInt_Overwrite(g_INI_Key_MultiPlayer, aPortnumberover, 0); /*0x698228*/
  String[0] = 0; /*0x69822d*/
  *(_DWORD *)(this + 10372) = INIClass::ReadInt_Overwrite(g_INI_Key_MultiPlayer, aPhoneindex, -1); /*0x69824b*/
  *(_DWORD *)(this + 12496) = INIClass::ReadInt_Overwrite(g_INI_Key_MultiPlayer, aCheckheap, 0); /*0x698256*/
  *(_BYTE *)(this + 776) = INIClass::ReadBool_Overwrite(g_INI_Key_MultiPlayer, aWollimitresolu, *(_BYTE *)(this + 776)); /*0x698288*/
  *(_DWORD *)(this + 780) = INIClass::ReadInt_Overwrite(g_INI_Key_MultiPlayer, aLastnickslot, -1); /*0x6982ae*/
  v6 = GetStringCSF(g_Str_TXT_NONAME, 0, g_Str_File_Session_CPP, 1262); /*0x6982b4*/
  INIClass::ParseValue_Wide( /*0x6982c9*/
    (char **)&CCINIClass_INI_RA2MD,
    (unsigned __int8 *)g_INI_Key_MultiPlayer,
    (unsigned __int8 *)aHandle,
    v6,
    v58,
    0x14u);
  CopyWideToChar((_BYTE *)(this + 328), (char *)v58, -1); /*0x6982dd*/
  *(_DWORD *)(this + 380) = INIClass::ReadInt_Overwrite(g_INI_Key_MultiPlayer, g_INI_Key_Color, *(_DWORD *)(this + 380)); /*0x6982fd*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(g_INI_Key_MultiPlayer, aColorex, *(_DWORD *)(this + 384)); /*0x698319*/
  v8 = *(_DWORD *)(this + 388); /*0x69831e*/
  *(_DWORD *)(this + 384) = Int_Overwrite; /*0x698324*/
  v9 = SuperWeaponTypeClass::FindOrCreate( /*0x69833a*/
         (unsigned __int8 ***)&CCINIClass_INI_RA2MD,
         (unsigned __int8 *)g_INI_Key_MultiPlayer,
         (unsigned __int8 *)g_INI_Key_Side,
         v8);
  v10 = *(_DWORD *)(this + 392); /*0x69833f*/
  *(_DWORD *)(this + 388) = v9; /*0x698345*/
  *(_DWORD *)(this + 392) = INIClass::ReadInt_Overwrite(g_INI_Key_MultiPlayer, aSideex, v10); /*0x698360*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(g_INI_Key_MultiPlayer, aWoltaunts, *(_BYTE *)(this + 7897)); /*0x69837c*/
  v12 = *(_BYTE *)(this + 7896); /*0x698381*/
  *(_BYTE *)(this + 7897) = Bool_Overwrite; /*0x698387*/
  v13 = INIClass::ReadBool_Overwrite(g_INI_Key_MultiPlayer, aLantaunts, v12); /*0x69839d*/
  v50 = *(_BYTE *)(this + 8129); /*0x6983ad*/
  *(_BYTE *)(this + 7896) = v13; /*0x6983b8*/
  *(_BYTE *)(this + 8129) = INIClass::ReadBool_Overwrite(g_INI_Key_MultiPlayer, aWolscrolltext, v50); /*0x6983c3*/
  *(_BYTE *)(this + 8128) = INIClass::ReadBool_Overwrite(g_INI_Key_MultiPlayer, aLanscrolltext, *(_BYTE *)(this + 8128)); /*0x6983e4*/
  v14 = *(_DWORD *)(this + 388); /*0x6983ea*/
  *(_DWORD *)(this + 372) = v14; /*0x6983f3*/
  if ( v14 == -2 ) /*0x6983f9*/
    *(_DWORD *)(this + 372) = 0; /*0x6983fb*/
  *(_DWORD *)(this + 376) = *(_DWORD *)(this + 392); /*0x69840d*/
  v15 = (void *)INIClass::ReadInt_Overwrite(g_INI_Key_MultiPlayer, g_INI_Key_GameMode, 1); /*0x698422*/
  v16 = MultiplayerGameMode::Find(v15); /*0x698429*/
  *(_DWORD *)(this + 4) = v16; /*0x698430*/
  if ( !v16 ) /*0x698433*/
    *(_DWORD *)(this + 4) = MultiplayerGameMode::GetFirst(); /*0x69843a*/
  ReadGameSettingsINI(&CCINIClass_INI_RA2MD, aSkirmish, 1, 6); /*0x698451*/
  ReadGameSettingsINI(&CCINIClass_INI_RA2MD, aLan, 2, 2); /*0x69846a*/
  ReadGameSettingsINI(&CCINIClass_INI_RA2MD, aWonlinepref, 2, 2); /*0x698483*/
  INIClass::GetString( /*0x6984a8*/
    (unsigned __int8 ***)&CCINIClass_INI_RA2MD,
    (unsigned __int8 *)g_INI_Key_SerialDefaults,
    (unsigned __int8 *)aModemname,
    String,
    (char *)(this + 10424),
    63);
  if ( !strcmp((const char *)(this + 10424), String) ) /*0x6984bc*/
    *(_BYTE *)(this + 10424) = 0; /*0x6984e3*/
  *(_DWORD *)(this + 10376) = INIClass::ReadInt_Overwrite(g_INI_Key_SerialDefaults, aPort, 0); /*0x69850c*/
  *(_DWORD *)(this + 10380) = INIClass::ReadInt_Overwrite(g_INI_Key_SerialDefaults, aIrq, -1); /*0x698528*/
  *(_DWORD *)(this + 10384) = INIClass::ReadInt_Overwrite(g_INI_Key_SerialDefaults, aBaud, -1); /*0x698544*/
  *(_DWORD *)(this + 10400) = INIClass::ReadInt_Overwrite(g_INI_Key_SerialDefaults, aCompression, 0); /*0x698560*/
  *(_DWORD *)(this + 10404) = INIClass::ReadInt_Overwrite(g_INI_Key_SerialDefaults, aErrorcorrectio, 0); /*0x69856b*/
  INIClass::GetString( /*0x69858f*/
    (unsigned __int8 ***)&CCINIClass_INI_RA2MD,
    (unsigned __int8 *)g_INI_Key_SerialDefaults,
    (unsigned __int8 *)aDialmethod,
    g_Str_T,
    String,
    2);
  v17 = 0; /*0x698594*/
  v18 = (const void **)&off_83ECFC; /*0x698596*/
  while ( _strcmpi(String, *v18) ) /*0x6985b0*/
  {
    ++v18; /*0x6985b2*/
    ++v17; /*0x6985b5*/
    if ( (int)v18 >= (int)off_83ED04 ) /*0x6985bc*/
      goto LABEL_20; /*0x6985bc*/
  }
  *(_DWORD *)(this + 10388) = v17; /*0x6985c0*/
LABEL_20:
  if ( v17 == 2 ) /*0x6985c9*/
    *(_DWORD *)(this + 10388) = 0; /*0x6985cb*/
  *(_DWORD *)(this + 10392) = INIClass::ReadInt_Overwrite(g_INI_Key_SerialDefaults, aInitstringinde, -1); /*0x6985fe*/
  *(_DWORD *)(this + 10396) = INIClass::ReadInt_Overwrite(g_INI_Key_SerialDefaults, aCallwaitstring, 3); /*0x698609*/
  INIClass::GetString( /*0x69862c*/
    (unsigned __int8 ***)&CCINIClass_INI_RA2MD,
    (unsigned __int8 *)g_INI_Key_SerialDefaults,
    (unsigned __int8 *)aCallwaitstring_0,
    &g_INI_DefaultBuffer,
    (char *)(this + 10408),
    16);
  if ( !*(_DWORD *)(this + 10380) || !*(_DWORD *)(this + 10384) ) /*0x69863b*/
  {
    *(_DWORD *)(this + 10376) = 0; /*0x698645*/
    *(_DWORD *)(this + 10380) = -1; /*0x69864f*/
    *(_DWORD *)(this + 10384) = -1; /*0x698655*/
  }
  KeyCount = INIClass::GetKeyCount((char *)&CCINIClass_INI_RA2MD, (unsigned __int8 *)g_INI_Key_InitStrings); /*0x69866a*/
  for ( k = 0; k < KeyCount; ++k ) /*0x698676*/
  {
    v20 = (char *)__2_YAPAXI_Z(0x29u); /*0x69867e*/
    v21 = v20; /*0x698683*/
    if ( v20 ) /*0x69868a*/
    {
      v49 = v20; /*0x698692*/
      v48 = k; /*0x698695*/
      *v20 = 0; /*0x6986a0*/
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x6986a3*/
                                           (char *)&CCINIClass_INI_RA2MD,
                                           (unsigned __int8 *)g_INI_Key_InitStrings,
                                           v48);
      INIClass::GetString( /*0x6986b3*/
        (unsigned __int8 ***)&CCINIClass_INI_RA2MD,
        (unsigned __int8 *)g_INI_Key_InitStrings,
        StringByIndex,
        0,
        v49,
        41);
      _strupr(v21); /*0x6986b9*/
      v23 = *(_DWORD *)(this + 10524); /*0x6986be*/
      if ( *(_DWORD *)(this + 10532) < v23 /*0x6986e6*/
        || (*(_BYTE *)(this + 10529) || !v23)
        && (v24 = *(_DWORD *)(this + 10536), v24 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 10516) + 8))(
             this + 10516,
             v23 + v24,
             0) )
      {
        v25 = *(_DWORD *)(this + 10532); /*0x6986ed*/
        v26 = *(_DWORD *)(this + 10520); /*0x6986f0*/
        *(_DWORD *)(this + 10532) = v25 + 1; /*0x6986f6*/
        *(_DWORD *)(v26 + 4 * v25) = v21; /*0x6986f9*/
      }
    }
  }
  *(_DWORD *)(this + 10392) = (KeyCount != 0) - 1; /*0x69871e*/
  v52 = INIClass::GetKeyCount((char *)&CCINIClass_INI_RA2MD, (unsigned __int8 *)g_INI_Key_PhoneBook); /*0x69872b*/
  for ( k = 0; k < v52; ++k ) /*0x698737*/
  {
    v27 = __2_YAPAXI_Z(0xB0u); /*0x698750*/
    v28 = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x69876b*/
                               (char *)&CCINIClass_INI_RA2MD,
                               (unsigned __int8 *)g_INI_Key_PhoneBook,
                               k);
    INIClass::GetString( /*0x69877b*/
      (unsigned __int8 ***)&CCINIClass_INI_RA2MD,
      (unsigned __int8 *)g_INI_Key_PhoneBook,
      v28,
      0,
      String,
      1024);
    v29 = (unsigned __int8 *)strtok(String, asc_832630); /*0x69878d*/
    if ( v29 ) /*0x698797*/
    {
      BulkCharToWide((_WORD *)v27 + 56, v29, -1); /*0x6987a2*/
      _wcsupr((wchar_t *)v27 + 56); /*0x6987a8*/
    }
    else
    {
      *((_WORD *)v27 + 56) = 0; /*0x6987b2*/
    }
    v30 = strtok(0, asc_832630); /*0x6987bc*/
    if ( v30 ) /*0x6987c6*/
    {
      strcpy((char *)v27 + 154, v30); /*0x6987e5*/
      _strupr((char *)v27 + 154); /*0x6987ee*/
    }
    else
    {
      *((_BYTE *)v27 + 154) = 0; /*0x6987fa*/
    }
    v31 = strtok(0, asc_832630); /*0x698807*/
    if ( v31 ) /*0x698811*/
      sscanf(v31, "%x", v27); /*0x69881a*/
    else
      *(_DWORD *)v27 = 0; /*0x698824*/
    v32 = strtok(0, asc_832630); /*0x69882c*/
    if ( v32 ) /*0x698836*/
      *((_DWORD *)v27 + 1) = atoi(v32); /*0x698841*/
    else
      *((_DWORD *)v27 + 1) = -1; /*0x69884c*/
    v33 = strtok(0, asc_832630); /*0x698855*/
    if ( v33 ) /*0x69885f*/
      *((_DWORD *)v27 + 2) = atoi(v33); /*0x69886a*/
    else
      *((_DWORD *)v27 + 2) = -1; /*0x69886f*/
    v34 = strtok(0, asc_832630); /*0x698878*/
    if ( v34 ) /*0x698882*/
      *((_DWORD *)v27 + 6) = atoi(v34); /*0x69888d*/
    else
      *((_DWORD *)v27 + 6) = -1; /*0x698892*/
    v35 = strtok(0, asc_832630); /*0x69889b*/
    if ( v35 ) /*0x6988a5*/
      *((_DWORD *)v27 + 7) = atoi(v35); /*0x6988b0*/
    else
      *((_DWORD *)v27 + 7) = 0; /*0x6988b5*/
    v36 = strtok(0, asc_832630); /*0x6988be*/
    if ( v36 ) /*0x6988c8*/
    {
      strcpy(String, v36); /*0x6988e7*/
      v37 = 0; /*0x6988f0*/
      v38 = (const void **)&off_83ECFC; /*0x6988f2*/
      while ( _strcmpi(String, *v38) ) /*0x69890c*/
      {
        ++v38; /*0x69890e*/
        ++v37; /*0x698911*/
        if ( (int)v38 >= (int)off_83ED04 ) /*0x698918*/
          goto LABEL_62; /*0x698918*/
      }
      *((_DWORD *)v27 + 3) = v37; /*0x69891c*/
LABEL_62:
      if ( v37 == 2 ) /*0x698922*/
        *((_DWORD *)v27 + 3) = 0; /*0x698924*/
    }
    else
    {
      *((_DWORD *)v27 + 3) = 0; /*0x69892d*/
    }
    v39 = strtok(0, asc_832630); /*0x698937*/
    if ( v39 ) /*0x698941*/
      *((_DWORD *)v27 + 4) = atoi(v39); /*0x69894c*/
    else
      *((_DWORD *)v27 + 4) = -1; /*0x698951*/
    v40 = strtok(0, asc_832630); /*0x69895f*/
    if ( v40 ) /*0x698969*/
      *((_DWORD *)v27 + 5) = atoi(v40); /*0x698974*/
    else
      *((_DWORD *)v27 + 5) = 3; /*0x698979*/
    v41 = strtok(0, asc_832630); /*0x698987*/
    if ( v41 ) /*0x698991*/
      strcpy((char *)v27 + 32, v41); /*0x6989ac*/
    else
      *((_BYTE *)v27 + 32) = 0; /*0x6989b7*/
    v42 = *(_DWORD *)(this + 10500); /*0x6989bb*/
    if ( *(_DWORD *)(this + 10508) >= v42 ) /*0x6989c9*/
    {
      if ( !*(_BYTE *)(this + 10505) && v42 ) /*0x6989d7*/
        continue; /*0x6989d7*/
      v43 = *(_DWORD *)(this + 10512); /*0x6989d9*/
      if ( v43 <= 0 /*0x6989f4*/
        || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 10492) + 8))(
              this + 10492,
              v43 + v42,
              0) )
      {
        continue; /*0x6989f4*/
      }
    }
    v44 = *(_DWORD *)(this + 10508); /*0x6989fb*/
    v45 = *(_DWORD *)(this + 10496); /*0x698a01*/
    *(_DWORD *)(this + 10508) = v44 + 1; /*0x698a0a*/
    *(_DWORD *)(v45 + 4 * v44) = v27; /*0x698a10*/
  }
  if ( (g_NetworkEventPending & 2) != 0 ) /*0x698a31*/
  {
    *(_DWORD *)(this + 12460) = INIClass::ReadInt_Overwrite(g_INI_Key_SyncBug, aFrame, 0x7FFFFFFF); /*0x698a50*/
    INIClass::GetString( /*0x698a74*/
      (unsigned __int8 ***)&CCINIClass_INI_RA2MD,
      (unsigned __int8 *)g_INI_Key_SyncBug,
      (unsigned __int8 *)g_INI_Key_Type,
      aNone_2,
      String,
      80);
    if ( _strcmpi(String, aAircraft_0) ) /*0x698a86*/
    {
      if ( _strcmpi(String, aAnim) ) /*0x698aae*/
      {
        if ( _strcmpi(String, aBuilding) ) /*0x698ad6*/
        {
          if ( _strcmpi(String, aBullet) ) /*0x698afb*/
          {
            if ( _strcmpi(String, aInfantry) ) /*0x698b20*/
            {
              if ( _strcmpi(String, aUnit) ) /*0x698b45*/
                *(_DWORD *)(this + 12464) = 0; /*0x698b5d*/
              else
                *(_DWORD *)(this + 12464) = 1; /*0x698b51*/
            }
            else
            {
              *(_DWORD *)(this + 12464) = 15; /*0x698b2c*/
            }
          }
          else
          {
            *(_DWORD *)(this + 12464) = 8; /*0x698b07*/
          }
        }
        else
        {
          *(_DWORD *)(this + 12464) = 6; /*0x698ae2*/
        }
      }
      else
      {
        *(_DWORD *)(this + 12464) = 4; /*0x698aba*/
      }
    }
    else
    {
      *(_DWORD *)(this + 12464) = 2; /*0x698a92*/
    }
    INIClass::GetString( /*0x698b85*/
      (unsigned __int8 ***)&CCINIClass_INI_RA2MD,
      (unsigned __int8 *)g_INI_Key_SyncBug,
      (unsigned __int8 *)aCoord,
      a0,
      String,
      80);
    sscanf(String, "%d,%d,%d", &k, &v53, &v54); /*0x698ba6*/
    v46 = INIClass::ReadInt_Overwrite(g_INI_Key_SyncBug, aTarget, -1); /*0x698bbf*/
    *(_BYTE *)(this + 12488) = HIBYTE(v46); /*0x698bd8*/
    *(_DWORD *)(this + 12484) = v46 & 0xFFFFFF; /*0x698bf2*/
    INIClass::GetString( /*0x698bf8*/
      (unsigned __int8 ***)&CCINIClass_INI_RA2MD,
      (unsigned __int8 *)g_INI_Key_SyncBug,
      (unsigned __int8 *)aCell,
      a00,
      String,
      80);
    sscanf(String, "%d,%d", &k, &v53); /*0x698c14*/
    LOWORD(v52) = k; /*0x698c2b*/
    HIWORD(v52) = v53; /*0x698c30*/
    if ( (_WORD)k != word_B057E0 || (_WORD)v53 != word_B057E2 ) /*0x698c3e*/
      *(_DWORD *)(this + 12492) = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v52); /*0x698c4f*/
    *(_DWORD *)(this + 12500) = INIClass::ReadInt_Overwrite(g_INI_Key_SyncBug, aPrintcrc, 0x7FFFFFFF); /*0x698c6e*/
  }
  v55[0] = &CCFileClass::`vftable'; /*0x698c78*/
  v57 = 0; /*0x698c80*/
  Vector::Clear((int)v56); /*0x698c88*/
  v55[0] = &off_7E1668; /*0x698c91*/
  return BufferIOFileClass::Dtor(v55); /*0x698c9e*/
}



// ==== 0x00698CB0  Game::DumpMultiplayerGameInfo  this=Game  sig=csp ====
char __thiscall DumpMultiplayerGameInfo(int this, FILE *Stream)
{
  int v2; // eax
  FILE *v3; // esi
  int i; // ebp
  unsigned int j; // edi
  unsigned int k; // edi
  unsigned int m; // edi
  unsigned int n; // edi
  _BYTE v11[8]; // [esp+Ch] [ebp-8h] BYREF

  v2 = g_GameRulesOptions; /*0x698cb0*/
  v3 = Stream; /*0x698cbc*/
  if ( g_GameRulesOptions < 0 ) /*0x698cc3*/
  {
    fprintf(Stream, "BOGUS scenario index!?!\n"); /*0x698ccb*/
    v2 = 0; /*0x698cd3*/
    g_GameRulesOptions = 0; /*0x698cd5*/
  }
  fprintf(v3, "Scenario = %s\n", *(const char **)(g_MultiplayerGameState + 4 * v2)); /*0x698ceb*/
  fprintf(v3, "Handle = %s\n", (const char *)(this + 328)); /*0x698cfd*/
  for ( i = 0; i < *(_DWORD *)(this + 788); ++i ) /*0x698d0f*/
  {
    Network::CopyAddress((_DWORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * i) + 40), &Stream, (int)v11); /*0x698d2a*/
    fprintf(v3, "Player Addr[%d] = ", i); /*0x698d36*/
    for ( j = 0; j < 4; ++j ) /*0x698d3e*/
      fprintf(v3, "%02X", *((unsigned __int8 *)&Stream + j)); /*0x698d4d*/
    fprintf(v3, ":"); /*0x698d61*/
    for ( k = 0; k < 6; ++k ) /*0x698d69*/
      fprintf(v3, "%02X", (unsigned __int8)v11[k]); /*0x698d78*/
    fprintf(v3, "\n"); /*0x698d8c*/
  }
  fprintf(v3, "\n"); /*0x698da9*/
  Network::CopyAddress(&g_NetworkRematchObject, &Stream, (int)v11); /*0x698dc0*/
  fprintf(v3, "Address = "); /*0x698dcb*/
  for ( m = 0; m < 4; ++m ) /*0x698dd3*/
    fprintf(v3, "%02X", *((unsigned __int8 *)&Stream + m)); /*0x698de3*/
  fprintf(v3, ":"); /*0x698df7*/
  for ( n = 0; n < 6; ++n ) /*0x698dff*/
    fprintf(v3, "%02X", (unsigned __int8)v11[n]); /*0x698e0e*/
  fprintf(v3, "\n\n"); /*0x698e22*/
  fprintf(v3, "MaxAhead = %d\n", *(_DWORD *)(this + 792)); /*0x698e34*/
  fprintf(v3, "LoadGame = %d\n", *(_DWORD *)(this + 1664)); /*0x698e46*/
  fprintf(v3, "PrefColor = %d\n", *(_DWORD *)(this + 380)); /*0x698e58*/
  fprintf(v3, "ColorIdx = %d\n", *(_DWORD *)(this + 348)); /*0x698e6a*/
  fprintf(v3, "House = %d\n", *(_DWORD *)(this + 372)); /*0x698e7c*/
  fprintf(v3, "NumPlayers = %d\n", *(_DWORD *)(this + 788)); /*0x698e91*/
  fprintf(v3, "Options.Bases = %d\n", *(unsigned __int8 *)(this + 32)); /*0x698ea2*/
  fprintf(v3, "Options.Credits = %d\n", *(_DWORD *)(this + 36)); /*0x698eb1*/
  fprintf(v3, "Options.BridgeDestruction = %d\n", *(unsigned __int8 *)(this + 40)); /*0x698ec2*/
  fprintf(v3, "Options.Goodies = %d\n", *(unsigned __int8 *)(this + 41)); /*0x698ed3*/
  fprintf(v3, "Options.Ghosts = %d\n", *(unsigned __int8 *)(this + 53)); /*0x698ee4*/
  fprintf(v3, "Options.UnitCount = %d\n", *(_DWORD *)(this + 56)); /*0x698ef6*/
  fprintf(v3, "Options.AIPlayers = %d\n", *(_DWORD *)(this + 60)); /*0x698f05*/
  fprintf(v3, "Options.AIDifficulty = %d\n", *(_DWORD *)(this + 64)); /*0x698f14*/
  fprintf(v3, "ObiWan = %d\n", *(_DWORD *)(this + 768)); /*0x698f26*/
  if ( g_GameMode_Current[0] == 3 ) /*0x698f36*/
  {
    fprintf(v3, "Type = IPX\n"); /*0x698f3e*/
    return 1; /*0x698f46*/
  }
  else
  {
    if ( g_GameMode_Current[0] == 4 ) /*0x698f54*/
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
void __thiscall WOL_SaveConfig(int this)
{
  char *v2; // eax
  int v3; // eax
  int i; // edi
  int j; // edi
  int v6; // eax
  CHAR v7[12]; // [esp+Ch] [ebp-B0h] BYREF
  int v8[9]; // [esp+18h] [ebp-A4h] BYREF
  CHAR Source[128]; // [esp+3Ch] [ebp-80h] BYREF

  RawFileClass::Construct(v8, (int)g_Str_File_RA2MD_INI); /*0x6990b4*/
  INIClass::SetInt( /*0x6990d1*/
    (char *)&CCINIClass_INI_RA2MD,
    (unsigned __int8 *)g_INI_Key_MultiPlayer,
    aPhoneindex,
    *(_DWORD *)(this + 10372),
    0);
  INIClass::SetBool( /*0x6990ec*/
    (char *)&CCINIClass_INI_RA2MD,
    (unsigned __int8 *)g_INI_Key_MultiPlayer,
    aWollimitresolu,
    *(_BYTE *)(this + 776));
  INIClass::SetInt( /*0x699109*/
    (char *)&CCINIClass_INI_RA2MD,
    (unsigned __int8 *)g_INI_Key_MultiPlayer,
    aLastnickslot,
    *(_DWORD *)(this + 780),
    0);
  v2 = CharToWideString((_BYTE *)(this + 328)); /*0x699114*/
  INIClass::SetWideAsHex(g_INI_Key_MultiPlayer, aHandle, (wchar_t *)v2); /*0x699129*/
  INIClass::SetInt( /*0x699146*/
    (char *)&CCINIClass_INI_RA2MD,
    (unsigned __int8 *)g_INI_Key_MultiPlayer,
    g_INI_Key_Color,
    *(_DWORD *)(this + 380),
    0);
  INIClass::SetInt( /*0x699163*/
    (char *)&CCINIClass_INI_RA2MD,
    (unsigned __int8 *)g_INI_Key_MultiPlayer,
    aColorex,
    *(_DWORD *)(this + 384),
    0);
  INIClass::SetHouseName(g_INI_Key_MultiPlayer, g_INI_Key_Side, *(_DWORD *)(this + 388)); /*0x69917e*/
  INIClass::SetInt( /*0x69919b*/
    (char *)&CCINIClass_INI_RA2MD,
    (unsigned __int8 *)g_INI_Key_MultiPlayer,
    aSideex,
    *(_DWORD *)(this + 392),
    0);
  v3 = *(_DWORD *)(this + 4); /*0x6991a0*/
  if ( v3 ) /*0x6991a7*/
    INIClass::SetInt( /*0x6991ad*/
      (char *)&CCINIClass_INI_RA2MD,
      (unsigned __int8 *)g_INI_Key_MultiPlayer,
      g_INI_Key_GameMode,
      *(_DWORD *)(v3 + 40),
      0);
  else
    INIClass::SetInt((char *)&CCINIClass_INI_RA2MD, (unsigned __int8 *)g_INI_Key_MultiPlayer, g_INI_Key_GameMode, 0, 0); /*0x6991c0*/
  GameSetup::WriteINI((int)&CCINIClass_INI_RA2MD, aSkirmish); /*0x6991d5*/
  GameSetup::WriteINI((int)&CCINIClass_INI_RA2MD, aLan); /*0x6991ea*/
  GameSetup::WriteINI((int)&CCINIClass_INI_RA2MD, aWonlinepref); /*0x6991ff*/
  INIClass::ClearSection((int)&CCINIClass_INI_RA2MD, (int)g_INI_Key_SerialDefaults, 0); /*0x699210*/
  INIClass::SetString( /*0x69922b*/
    (char *)&CCINIClass_INI_RA2MD,
    (unsigned __int8 *)g_INI_Key_SerialDefaults,
    aCallwaitstring_0,
    (char *)(this + 10408));
  INIClass::SetInt( /*0x699248*/
    (char *)&CCINIClass_INI_RA2MD,
    (unsigned __int8 *)g_INI_Key_SerialDefaults,
    aCallwaitstring,
    *(_DWORD *)(this + 10396),
    0);
  INIClass::SetInt( /*0x699265*/
    (char *)&CCINIClass_INI_RA2MD,
    (unsigned __int8 *)g_INI_Key_SerialDefaults,
    aInitstringinde,
    *(_DWORD *)(this + 10392),
    0);
  INIClass::SetString( /*0x699287*/
    (char *)&CCINIClass_INI_RA2MD,
    (unsigned __int8 *)g_INI_Key_SerialDefaults,
    aDialmethod,
    (&off_83ECFC)[*(_DWORD *)(this + 10388)]);
  INIClass::SetInt( /*0x6992a4*/
    (char *)&CCINIClass_INI_RA2MD,
    (unsigned __int8 *)g_INI_Key_SerialDefaults,
    aBaud,
    *(_DWORD *)(this + 10384),
    0);
  INIClass::SetInt( /*0x6992c1*/
    (char *)&CCINIClass_INI_RA2MD,
    (unsigned __int8 *)g_INI_Key_SerialDefaults,
    aIrq,
    *(_DWORD *)(this + 10380),
    0);
  INIClass::SetInt( /*0x6992de*/
    (char *)&CCINIClass_INI_RA2MD,
    (unsigned __int8 *)g_INI_Key_SerialDefaults,
    aPort,
    *(_DWORD *)(this + 10376),
    1);
  INIClass::SetInt( /*0x6992fb*/
    (char *)&CCINIClass_INI_RA2MD,
    (unsigned __int8 *)g_INI_Key_SerialDefaults,
    aCompression,
    *(_DWORD *)(this + 10400),
    0);
  INIClass::SetInt( /*0x699318*/
    (char *)&CCINIClass_INI_RA2MD,
    (unsigned __int8 *)g_INI_Key_SerialDefaults,
    aErrorcorrectio,
    *(_DWORD *)(this + 10404),
    0);
  INIClass::SetString( /*0x699333*/
    (char *)&CCINIClass_INI_RA2MD,
    (unsigned __int8 *)g_INI_Key_SerialDefaults,
    aModemname,
    (char *)(this + 10424));
  INIClass::ClearSection((int)&CCINIClass_INI_RA2MD, (int)g_INI_Key_InitStrings, 0); /*0x699344*/
  for ( i = 0; i < *(_DWORD *)(this + 10532); ++i ) /*0x699359*/
  {
    wsprintfA(v7, "%03d", i); /*0x699366*/
    INIClass::SetString( /*0x699384*/
      (char *)&CCINIClass_INI_RA2MD,
      (unsigned __int8 *)g_INI_Key_InitStrings,
      v7,
      *(char **)(*(_DWORD *)(this + 10520) + 4 * i));
  }
  INIClass::ClearSection((int)&CCINIClass_INI_RA2MD, (int)g_INI_Key_PhoneBook, 0); /*0x6993a0*/
  for ( j = *(_DWORD *)(this + 10508) - 1; j >= 0; --j ) /*0x6993ac*/
  {
    v6 = *(_DWORD *)(*(_DWORD *)(this + 10496) + 4 * j); /*0x6993b4*/
    wsprintfA( /*0x6993f6*/
      Source,
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
    INIClass::SetString((char *)&CCINIClass_INI_RA2MD, (unsigned __int8 *)g_INI_Key_PhoneBook, v7, Source); /*0x69941c*/
  }
  INIClass::WriteDigest(v8, 0); /*0x699430*/
  RawFileClass::Dtor(v8); /*0x699439*/
}



// ==== 0x00699450  ScenarioClass::SaveMultiplayerSettings  this=ObjectClass  sig=csp ====
void __thiscall sub_699450(char *this)
{
  int v2[9]; // [esp+4h] [ebp-24h] BYREF

  RawFileClass::Construct(v2, (int)g_Str_File_RA2MD_INI); /*0x69945f*/
  INIClass::SetBool((char *)&CCINIClass_INI_RA2MD, (unsigned __int8 *)g_INI_Key_MultiPlayer, aWoltaunts, this->q1ED9); /*0x69947a*/
  INIClass::SetBool((char *)&CCINIClass_INI_RA2MD, (unsigned __int8 *)g_INI_Key_MultiPlayer, aLantaunts, this->q1ED8); /*0x699495*/
  INIClass::SetBool( /*0x6994b0*/
    (char *)&CCINIClass_INI_RA2MD,
    (unsigned __int8 *)g_INI_Key_MultiPlayer,
    aWolscrolltext,
    this->q1FC1);
  INIClass::SetBool( /*0x6994cb*/
    (char *)&CCINIClass_INI_RA2MD,
    (unsigned __int8 *)g_INI_Key_MultiPlayer,
    aLanscrolltext,
    this->q1FC0);
  INIClass::WriteDigest(&CCINIClass_INI_RA2MD, (int)v2, 0); /*0x6994dc*/
  RawFileClass::Dtor(v2); /*0x6994e5*/
}



// ==== 0x006994F0  ParseMapFileHeader  this=ObjectClass  sig=csp ====
int __fastcall MapFile_ParseHeader(
        char *Source,
        _WORD *a2,
        char *a3,
        char *Destination,
        _BYTE *a5,
        _DWORD *a6,
        _DWORD *a7)
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
  int v20[22]; // [esp+20h] [ebp-194h] BYREF
  _BYTE v21[12]; // [esp+78h] [ebp-13Ch] BYREF
  int v22; // [esp+84h] [ebp-130h]
  int v23[3]; // [esp+8Ch] [ebp-128h] BYREF
  _DWORD v24[4]; // [esp+98h] [ebp-11Ch] BYREF
  int v25[3]; // [esp+A8h] [ebp-10Ch] BYREF
  _DWORD v26[4]; // [esp+B4h] [ebp-100h] BYREF
  void *v27[3]; // [esp+C4h] [ebp-F0h] BYREF
  _DWORD v28[7]; // [esp+D0h] [ebp-E4h] BYREF
  _DWORD v29[6]; // [esp+ECh] [ebp-C8h] BYREF
  char v30; // [esp+104h] [ebp-B0h]
  void *v31[3]; // [esp+11Ch] [ebp-98h] BYREF
  _DWORD v32[7]; // [esp+128h] [ebp-8Ch] BYREF
  _DWORD v33[6]; // [esp+144h] [ebp-70h] BYREF
  char v34; // [esp+15Ch] [ebp-58h]
  char v35[64]; // [esp+174h] [ebp-40h] BYREF

  CCFileClass::Construct(v20, Source); /*0x699507*/
  if ( CCFileClass::Open(v20, 0) && FileClass::Load(v20, 1) ) /*0x699526*/
  {
    v7 = 0; /*0x699533*/
    v8 = 0; /*0x699535*/
    while ( 1 ) /*0x69953b*/
    {
      v7 += 5; /*0x69953b*/
      v9 = v7 * CCFileClass::GetSize(v20) / 100; /*0x69955b*/
      if ( v8 ) /*0x69955d*/
        __3_YAXPAX_Z(v8); /*0x699560*/
      v8 = __2_YAPAXI_Z(v9 + 1); /*0x699571*/
      if ( !v8 ) /*0x699578*/
        break; /*0x699578*/
      BufferIOFileClass::Seek(v20, 0, 0); /*0x699584*/
      CCFileClass::Read(v20, v8, v9); /*0x69958f*/
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
            v15 = (v13 + 1) * CCFileClass::GetSize(v20) / 100; /*0x699616*/
            if ( v14 ) /*0x699618*/
              __3_YAXPAX_Z(v14); /*0x69961b*/
            v14 = __2_YAPAXI_Z(v15 + 1); /*0x69962c*/
            if ( !v14 ) /*0x699633*/
              goto LABEL_20; /*0x699633*/
            BufferIOFileClass::Seek(v20, -v15, 2u); /*0x699644*/
            CCFileClass::Read(v20, v14, v15); /*0x69964f*/
            *((_BYTE *)v14 + v15) = 0; /*0x699654*/
            if ( strstr((const char *)v14, aDigest_0) ) /*0x69965d*/
            {
              Debug::Log(); /*0x699693*/
              v27[1] = 0; /*0x6996a2*/
              v27[2] = 0; /*0x6996a9*/
              INISectionList::Constructor(v28); /*0x6996b0*/
              Node::Init(v29); /*0x6996bc*/
              v29[5] = 0; /*0x6996d5*/
              v30 = 0; /*0x6996dc*/
              v27[0] = &CCINIClass_Vtable; /*0x6996e3*/
              v25[1] = 0; /*0x6996ea*/
              v25[2] = 0; /*0x6996f1*/
              v25[0] = (int)&Straw::`vftable'; /*0x6996f8*/
              Buffer::Init(v26, (int)v8, v19 - (_BYTE *)v8); /*0x699703*/
              v26[3] = 0; /*0x69970f*/
              v25[0] = (int)&BufferStraw::`vftable'; /*0x699720*/
              CCINIClass::LoadAndVerifyDigest((int)v27, (int)v25, 0, 0); /*0x69972b*/
              v31[1] = 0; /*0x699737*/
              v31[2] = 0; /*0x69973e*/
              INISectionList::Constructor(v32); /*0x699745*/
              Node::Init(v33); /*0x699751*/
              v31[0] = &CCINIClass_Vtable; /*0x699756*/
              v33[5] = 0; /*0x699764*/
              v34 = 0; /*0x69976b*/
              v23[1] = 0; /*0x69977f*/
              v23[2] = 0; /*0x699786*/
              v23[0] = (int)&Straw::`vftable'; /*0x69978d*/
              Buffer::Init(v24, (int)v14, strlen((const char *)v14) + 1); /*0x699798*/
              v24[3] = 0; /*0x6997ae*/
              v23[0] = (int)&BufferStraw::`vftable'; /*0x6997b5*/
              CCINIClass::LoadAndVerifyDigest((int)v31, (int)v23, 0, 0); /*0x6997c0*/
              *a6 = INIClass::ReadInt_Overwrite(g_INI_Key_Basic, aMinplayers, *a6); /*0x6997e5*/
              *a7 = INIClass::ReadInt_Overwrite(g_INI_Key_Basic, aMaxplayers, *a7); /*0x69981b*/
              INIClass::GetString( /*0x699833*/
                (unsigned __int8 ***)v27,
                (unsigned __int8 *)g_INI_Key_Basic,
                (unsigned __int8 *)g_INI_Key_GameMode,
                &g_INI_DefaultBuffer,
                Destination,
                256);
              INIClass::GetString( /*0x699858*/
                (unsigned __int8 ***)v27,
                (unsigned __int8 *)g_INI_Key_Basic,
                (unsigned __int8 *)g_INI_Key_Name,
                g_Str_No_Name,
                v35,
                64);
              BulkCharToWide(a2, (unsigned __int8 *)v35, -1); /*0x69986a*/
              INIClass::GetString( /*0x69988f*/
                (unsigned __int8 ***)v31,
                (unsigned __int8 *)g_INI_Key_Digest,
                (unsigned __int8 *)a1,
                g_Str_No_Digest,
                a3,
                32);
              *a5 = INIClass::ReadBool_Overwrite(g_INI_Key_Basic, g_INI_Key_Official, 0); /*0x6998ba*/
              Debug::Log(); /*0x6998d9*/
              Debug::Log(); /*0x6998eb*/
              __3_YAXPAX_Z(v8); /*0x6998f1*/
              __3_YAXPAX_Z(v14); /*0x6998f7*/
              Vector::Clear((int)v24); /*0x699906*/
              Straw::Dtor(v23); /*0x699912*/
              HashTable::DestroyHashTableINIClass(v31); /*0x69991e*/
              Vector::Clear((int)v26); /*0x69992a*/
              Straw::Dtor(v25); /*0x699936*/
              HashTable::DestroyHashTableINIClass(v27); /*0x699942*/
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
  v20[0] = (int)&CCFileClass::`vftable'; /*0x699947*/
  v22 = 0; /*0x699953*/
  Vector::Clear((int)v21); /*0x69995a*/
  v20[0] = (int)&off_7E1668; /*0x699963*/
  return BufferIOFileClass::Dtor(v20); /*0x699970*/
}



// ==== 0x00699980  SessionClass::LoadMissionList  this=SessionClass  sig=csp ====
char *__thiscall SessionClass_LoadMissionList(_DWORD *this)
{
  wchar_t *Description; // esi
  int v3; // eax
  _DWORD *v4; // ebp
  int KeyCount; // ebx
  int v6; // edi
  unsigned __int8 *StringByIndex; // eax
  wchar_t *v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  HANDLE FirstFileA; // ebx
  char *cAlternateFileName; // esi
  int v15; // ebx
  int i; // edi
  unsigned __int8 *v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // esi
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // edx
  HANDLE v24; // ebx
  char *cFileName; // esi
  _DWORD *v26; // eax
  _DWORD *v27; // edi
  int v28; // eax
  unsigned int v29; // kr0C_4
  unsigned int v30; // ebx
  int v31; // eax
  int v32; // ecx
  unsigned __int8 *v33; // eax
  wchar_t *v34; // eax
  wchar_t *v35; // eax
  wchar_t *v36; // esi
  int v37; // ecx
  int v38; // eax
  size_t v39; // edi
  wchar_t *String; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  int v44; // edx
  char *v45; // esi
  wchar_t *v46; // eax
  wchar_t *v47; // esi
  int v48; // ecx
  int v49; // eax
  int v50; // eax
  int v51; // edx
  HANDLE hFindFile; // [esp+20h] [ebp-5C4h]
  HANDLE hFindFilea; // [esp+20h] [ebp-5C4h]
  HANDLE hFindFileb; // [esp+20h] [ebp-5C4h]
  int v56; // [esp+24h] [ebp-5C0h] BYREF
  int j; // [esp+28h] [ebp-5BCh]
  int v58; // [esp+2Ch] [ebp-5B8h] BYREF
  int v59; // [esp+30h] [ebp-5B4h] BYREF
  int v60[3]; // [esp+34h] [ebp-5B0h] BYREF
  _DWORD v61[10]; // [esp+40h] [ebp-5A4h] BYREF
  char v62; // [esp+68h] [ebp-57Ch]
  int v63; // [esp+6Ch] [ebp-578h]
  int v64; // [esp+70h] [ebp-574h]
  int v65; // [esp+74h] [ebp-570h]
  int v66; // [esp+78h] [ebp-56Ch]
  _DWORD v67[22]; // [esp+7Ch] [ebp-568h] BYREF
  char v68[12]; // [esp+D4h] [ebp-510h] BYREF
  int v69; // [esp+E0h] [ebp-504h]
  char v70[64]; // [esp+E8h] [ebp-4FCh] BYREF
  char v71[32]; // [esp+128h] [ebp-4BCh] BYREF
  wchar_t Source[44]; // [esp+148h] [ebp-49Ch] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+1A0h] [ebp-444h] BYREF
  wchar_t Buffer[64]; // [esp+2E0h] [ebp-304h] BYREF
  wchar_t v75[64]; // [esp+360h] [ebp-284h] BYREF
  char Destination[260]; // [esp+3E0h] [ebp-204h] BYREF
  char v77[256]; // [esp+4E4h] [ebp-100h] BYREF

  Description = 0; /*0x69998b*/
  v60[1] = 0; /*0x699992*/
  v60[2] = 0; /*0x699996*/
  GenericList::Constructor(v61); /*0x69999a*/
  v3 = this->u32_690; /*0x69999f*/
  v4 = this + 420; /*0x6999a5*/
  v61[0] = &List<INIClass::INISection *>::`vftable'; /*0x6999ad*/
  memset(&v61[7], 0, 12); /*0x6999b5*/
  v62 = 0; /*0x6999c1*/
  v63 = 0; /*0x6999c6*/
  v64 = 0; /*0x6999ca*/
  v60[0] = (int)&INIClass::`vftable'; /*0x6999ce*/
  (*(void (__thiscall **)(_DWORD *))(v3 + 12))(v4); /*0x6999d6*/
  CCFileClass::Construct(v67, aMissionsmdPkt); /*0x6999e2*/
  if ( CCFileClass::Open(v67, 0) ) /*0x6999ec*/
  {
    FileStraw::Open(v60, (int)v67, 0); /*0x699a03*/
    KeyCount = INIClass::GetKeyCount((char *)v60, (unsigned __int8 *)g_INI_Key_MultiMaps); /*0x699a16*/
    v6 = 0; /*0x699a18*/
    if ( KeyCount > 0 ) /*0x699a1c*/
    {
      while ( 1 ) /*0x699a3f*/
      {
        StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x699a3f*/
                                             (char *)v60,
                                             (unsigned __int8 *)g_INI_Key_MultiMaps,
                                             v6);
        if ( INIClass::GetString( /*0x699a4e*/
               (unsigned __int8 ***)v60,
               (unsigned __int8 *)g_INI_Key_MultiMaps,
               StringByIndex,
               &g_INI_DefaultBuffer,
               v70,
               64) )
        {
          v8 = (wchar_t *)__2_YAPAXI_Z(0x1BCu); /*0x699a5c*/
          if ( v8 ) /*0x699a66*/
            Description = MapFile::LoadDescription(v8, (unsigned __int8 ***)v60, v70); /*0x699a7c*/
          v9 = v4[2]; /*0x699a7e*/
          if ( v4[4] < v9 /*0x699aa4*/
            || (*((_BYTE *)v4 + 13) || !v9)
            && (v10 = v4[5], v10 > 0)
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v4 + 8))(v4, v9 + v10, 0) )
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
  INIClass::ClearSection((int)v60, 0, 0); /*0x699acb*/
  CCFileClass::Reset(v67); /*0x699ad4*/
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
          FileClass::SetFileName(v67, cAlternateFileName); /*0x699b48*/
          FileStraw::Open(v60, (int)v67, 0); /*0x699b58*/
          v15 = INIClass::GetKeyCount((char *)v60, (unsigned __int8 *)g_INI_Key_MultiMaps); /*0x699b6b*/
          for ( i = 0; i < v15; ++i )
          {
            v17 = (unsigned __int8 *)INIClass::GetStringByIndex((char *)v60, (unsigned __int8 *)g_INI_Key_MultiMaps, i); /*0x699b90*/
            if ( INIClass::GetString(
                   (unsigned __int8 ***)v60,
                   (unsigned __int8 *)g_INI_Key_MultiMaps,
                   v17,
                   &g_INI_DefaultBuffer,
                   v70,
                   64) )
            {
              v18 = (wchar_t *)__2_YAPAXI_Z(0x1BCu); /*0x699bad*/
              v19 = v18 ? MapFile::LoadDescription(v18, (unsigned __int8 ***)v60, v70) : 0;
              v20 = v4[2]; /*0x699bd3*/
              if ( v4[4] < v20 /*0x699bf9*/
                || (*((_BYTE *)v4 + 13) || !v20)
                && (v21 = v4[5], v21 > 0)
                && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v4 + 8))(v4, v20 + v21, 0) )
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
  INIClass::ClearSection((int)v60, 0, 0); /*0x699c42*/
  CCFileClass::Reset(v67); /*0x699c4b*/
  v24 = FindFirstFileA(aYro, &FindFileData); /*0x699c69*/
  hFindFilea = v24; /*0x699c70*/
  v65 = dword_81C1D0; /*0x699c74*/
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
          v26 = __2_YAPAXI_Z(0x28u); /*0x699cd0*/
          if ( v26 ) /*0x699cda*/
          {
            v27 = MixFileClass::FromFile(v26, cFileName, (int)&dword_886980); /*0x699ced*/
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
              *((_BYTE *)&v75[62] + v30 + 1) = 0; /*0x699d8f*/
              strcat(Destination, (const char *)&off_83F4F0); /*0x699d9f*/
              Destination[v30] = 0; /*0x699da8*/
              FileClass::SetFileName(v67, Destination); /*0x699dbb*/
              if ( CCFileClass::Open(v67, 0) ) /*0x699dc7*/
              {
                FileStraw::Open(v60, (int)v67, 0); /*0x699dde*/
                v31 = INIClass::GetKeyCount((char *)v60, (unsigned __int8 *)g_INI_Key_MultiMaps); /*0x699dec*/
                v32 = 0; /*0x699df1*/
                v66 = v31; /*0x699df5*/
                for ( j = 0; j < v66; ++j ) /*0x699dfd*/
                {
                  v33 = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x699e1c*/
                                             (char *)v60,
                                             (unsigned __int8 *)g_INI_Key_MultiMaps,
                                             v32);
                  if ( INIClass::GetString( /*0x699e2b*/
                         (unsigned __int8 ***)v60,
                         (unsigned __int8 *)g_INI_Key_MultiMaps,
                         v33,
                         &g_INI_DefaultBuffer,
                         v70,
                         64) )
                  {
                    v34 = (wchar_t *)__2_YAPAXI_Z(0x1BCu); /*0x699e3d*/
                    if ( v34 ) /*0x699e47*/
                    {
                      v35 = MapFile::LoadDescription(v34, (unsigned __int8 ***)v60, v70); /*0x699e5c*/
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
                          String = GetStringCSF(g_Str_MSG_NoDescription, 0, g_Str_File_Session_CPP, 2845); /*0x699f36*/
                          wcscpy(v36, String); /*0x699f3d*/
                        }
                        v41 = v4[2]; /*0x699f45*/
                        if ( v4[4] < v41 /*0x699f6a*/
                          || (*((_BYTE *)v4 + 13) || !v41)
                          && (v42 = v4[5], v42 > 0)
                          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v4 + 8))(v4, v41 + v42, 0) )
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
                INIClass::ClearSection((int)v60, 0, 0); /*0x699f9b*/
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
  SetSoundWarning(v65); /*0x699fd0*/
  if ( v24 != (HANDLE)-1 ) /*0x699fd8*/
    FindClose(v24); /*0x699fdb*/
  INIClass::ClearSection((int)v60, 0, 0); /*0x699fe7*/
  CCFileClass::Reset(v67); /*0x699ff0*/
  hFindFileb = FindFirstFileA(aYrm_0, &FindFileData); /*0x69a010*/
  LOBYTE(v56) = 0; /*0x69a014*/
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
          (unsigned __int8 ***)v60,
          (unsigned __int8 *)g_INI_Key_Basic,
          (unsigned __int8 *)g_INI_Key_Name,
          g_Str_No_Name,
          v70,
          64);
        INIClass::GetString( /*0x69a095*/
          (unsigned __int8 ***)v60,
          (unsigned __int8 *)g_INI_Key_Digest,
          (unsigned __int8 *)a1,
          g_Str_No_Digest,
          v71,
          32);
        BulkCharToWide(v75, (unsigned __int8 *)v70, -1); /*0x69a0aa*/
        LOBYTE(v56) = INIClass::ReadBool_Overwrite(g_INI_Key_Basic, g_INI_Key_Official, 0); /*0x69a0c8*/
        v59 = 2; /*0x69a0f0*/
        v58 = 4; /*0x69a0f8*/
        ParseMapFileHeader(v45, v71, v77, (int)&v56, (int)&v59, (int)&v58); /*0x69a0fc*/
        v46 = (wchar_t *)__2_YAPAXI_Z(0x1BCu); /*0x69a106*/
        if ( v46 ) /*0x69a110*/
          v47 = SessionClass::ParseGameInfo(v46, v45, v75, v71, v56, v77, v59, v58); /*0x69a141*/
        else
          v47 = 0; /*0x69a145*/
        v48 = v4[2]; /*0x69a147*/
        if ( v4[4] < v48 /*0x69a16d*/
          || (*((_BYTE *)v4 + 13) || !v48)
          && (v49 = v4[5], v49 > 0)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v4 + 8))(v4, v48 + v49, 0) )
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
  v67[0] = &CCFileClass::`vftable'; /*0x69a1b2*/
  v69 = 0; /*0x69a1ba*/
  Vector::Clear((int)v68); /*0x69a1c1*/
  v67[0] = &off_7E1668; /*0x69a1ca*/
  BufferIOFileClass::Dtor(v67); /*0x69a1d2*/
  return HashTable::DestroyHashTableINIClass((void **)v60); /*0x69a1e0*/
}



// ==== 0x0069A1F0  WinMain::Constructor_VectorClass_Wstring_  this=WinMain  sig=csp ====
int __thiscall sub_69A1F0(_DWORD *this)
{
  int i; // ebp
  int v3; // esi
  void *v4; // eax
  int j; // esi
  int k; // esi

  for ( i = 0; i < this->u32_6A0; ++i ) /*0x69a200*/
  {
    v3 = *(_DWORD *)(this->u32_694 + 4 * i); /*0x69a208*/
    if ( v3 ) /*0x69a20d*/
    {
      *(_DWORD *)(v3 + 420) = &VectorClass<Wstring>::`vftable'; /*0x69a215*/
      VectorClass_Wstring::ddtor(v3 + 420); /*0x69a21b*/
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
  (*(void (__thiscall **)(_DWORD *))(this->u32_690 + 12))(this + 420); /*0x69a277*/
  for ( j = 0; j < this->u32_2924; ++j ) /*0x69a284*/
    __3_YAXPAX_Z(*(void **)(this->u32_2918 + 4 * j)); /*0x69a290*/
  (*(void (__thiscall **)(_DWORD *))(this->u32_2914 + 12))(this + 2629); /*0x69a2af*/
  for ( k = 0; k < this->u32_290C; ++k ) /*0x69a2bc*/
  {
    if ( *(_DWORD *)(this->u32_2900 + 4 * k) ) /*0x69a2c4*/
      __3_YAXPAX_Z(*(void **)(this->u32_2900 + 4 * k)); /*0x69a2cc*/
  }
  return (*(int (__thiscall **)(_DWORD *))(this->u32_28FC + 12))(this + 2623); /*0x69a2ee*/
}



// ==== 0x0069A300  ObjectClass::nullsub_35  this=ObjectClass  sig=csp ====
void nullsub_35()
{
  ; /*0x69a300*/
}



// ==== 0x0069A310  SessionClass::GetPlayerColorScheme  this=SessionClass  sig=csp ====
unsigned int __stdcall SessionClass::GetPlayerColorScheme(unsigned int a1)
{
  unsigned int result; // eax

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



// ==== 0x0069A3B0  MapFile::LoadDescription  this=AbstractClass  sig=csp ====
wchar_t *__thiscall MapFile_LoadDescription(wchar_t *String, unsigned __int8 ***a2, char *a3)
{
  wchar_t *v4; // ebp
  int v5; // edx
  unsigned __int8 *v6; // esi
  unsigned __int8 ***v7; // edi
  bool v8; // al
  int Int_Overwrite; // eax
  int v10; // ecx
  char *v11; // eax
  void *v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  int i; // esi
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v23; // [esp+0h] [ebp-214h] BYREF
  void *v24; // [esp+10h] [ebp-204h] BYREF
  const char *v25; // [esp+14h] [ebp-200h] BYREF
  bool v26; // [esp+1Bh] [ebp-1F9h]
  void *v27; // [esp+1Ch] [ebp-1F8h] BYREF
  void *v28; // [esp+20h] [ebp-1F4h] BYREF
  char Destination[4]; // [esp+24h] [ebp-1F0h] BYREF
  int v30; // [esp+28h] [ebp-1ECh]
  int v31; // [esp+2Ch] [ebp-1E8h]
  _DWORD v32[8]; // [esp+30h] [ebp-1E4h] BYREF
  int v33[22]; // [esp+50h] [ebp-1C4h] BYREF
  _BYTE v34[12]; // [esp+A8h] [ebp-16Ch] BYREF
  int v35; // [esp+B4h] [ebp-160h]
  void *v36[3]; // [esp+BCh] [ebp-158h] BYREF
  void **v37; // [esp+C8h] [ebp-14Ch] BYREF
  _DWORD v38[6]; // [esp+E4h] [ebp-130h] BYREF
  char v39; // [esp+FCh] [ebp-118h]
  char Source[128]; // [esp+114h] [ebp-100h] BYREF
  char Stringa[128]; // [esp+194h] [ebp-80h] BYREF

  v4 = String + 196; /*0x69a3bc*/
  MapFile::Constructor(0, 0); /*0x69a3c8*/
  *((_DWORD *)v4 + 5) = 10; /*0x69a3de*/
  *((_DWORD *)v4 + 4) = 0; /*0x69a3e1*/
  *(_DWORD *)v4 = &TypeList<enum DiskID>::`vftable'; /*0x69a3e8*/
  VectorClass::WstringConstructor(0, 0); /*0x69a3ef*/
  *((_DWORD *)String + 110) = 10; /*0x69a3f4*/
  *((_DWORD *)String + 105) = &DynamicVectorClass<Wstring>::`vftable'; /*0x69a3f7*/
  *((_DWORD *)String + 109) = 0; /*0x69a3fd*/
  *String = 0; /*0x69a40e*/
  *((_BYTE *)String + 347) = 0; /*0x69a413*/
  strcpy((char *)String + 348, g_Str_No_Digest); /*0x69a42f*/
  v5 = *(_DWORD *)v4; /*0x69a438*/
  *((_BYTE *)String + 380) = 1; /*0x69a43d*/
  *((_DWORD *)String + 96) = 2; /*0x69a444*/
  *((_DWORD *)String + 97) = 4; /*0x69a44e*/
  (*(void (__thiscall **)(wchar_t *))(v5 + 12))(v4); /*0x69a458*/
  if ( a3 ) /*0x69a464*/
  {
    strcpy((char *)String + 88, a3); /*0x69a481*/
    strcat((char *)String + 88, g_Str_File__MAP); /*0x69a4af*/
    if ( g_INI_Key_DescriptionText ) /*0x69a4bf*/
    {
      v7 = a2; /*0x69a4e5*/
      v6 = (unsigned __int8 *)a3; /*0x69a4f9*/
      v8 = HashTableSection::FindSection((int)a2, (unsigned __int8 *)a3, (unsigned __int8 *)g_INI_Key_DescriptionText) != 0; /*0x69a502*/
    }
    else
    {
      v6 = (unsigned __int8 *)a3; /*0x69a4c1*/
      v7 = a2; /*0x69a4c8*/
      v8 = INIClass::BinarySearchSection((int)a2, (unsigned __int8 *)a3) != 0; /*0x69a4d9*/
    }
    if ( v8 ) /*0x69a509*/
    {
      INIClass::GetString(v7, v6, (unsigned __int8 *)g_INI_Key_DescriptionText, &g_INI_DefaultBuffer, Destination, 44); /*0x69a51d*/
      BulkCharToWide(String, (unsigned __int8 *)Destination, -1); /*0x69a52a*/
    }
    else
    {
      INIClass::GetStringEx((int)v6, (int)g_INI_Key_Description, String, 0x2Cu); /*0x69a53a*/
    }
    Int_Overwrite = INIClass::ReadInt_Overwrite(v6, aMinplayers, *((_DWORD *)String + 96)); /*0x69a54e*/
    v10 = *((_DWORD *)String + 97); /*0x69a553*/
    *((_DWORD *)String + 96) = Int_Overwrite; /*0x69a559*/
    *((_DWORD *)String + 97) = INIClass::ReadInt_Overwrite(v6, aMaxplayers, v10); /*0x69a587*/
    if ( INIClass::GetString(v7, v6, (unsigned __int8 *)aCd, &g_INI_DefaultBuffer, Stringa, 128) ) /*0x69a58d*/
    {
      v11 = strtok(Stringa, Delimiter); /*0x69a5a3*/
      while ( v11 ) /*0x69a5ad*/
      {
        if ( !*v11 ) /*0x69a5af*/
          break; /*0x69a5b2*/
        v12 = (void *)atoi(v11); /*0x69a5b5*/
        v13 = *((_DWORD *)v4 + 4); /*0x69a5ba*/
        v24 = v12; /*0x69a5bd*/
        v14 = *((_DWORD *)v4 + 2); /*0x69a5c1*/
        if ( v13 >= v14 ) /*0x69a5c9*/
        {
          if ( !*((_BYTE *)v4 + 13) && v14 ) /*0x69a5d4*/
            continue; /*0x69a5d4*/
          v15 = *((_DWORD *)v4 + 5); /*0x69a5d6*/
          if ( v15 <= 0 /*0x69a5e7*/
            || !(*(unsigned __int8 (__thiscall **)(wchar_t *, int, _DWORD))(*(_DWORD *)v4 + 8))(v4, v14 + v15, 0) )
          {
            continue; /*0x69a5e7*/
          }
        }
        v16 = *((_DWORD *)v4 + 4); /*0x69a5ee*/
        v17 = *((_DWORD *)v4 + 1); /*0x69a5f1*/
        *((_DWORD *)v4 + 4) = v16 + 1; /*0x69a5f7*/
        *(_DWORD *)(v17 + 4 * v16) = v24; /*0x69a5fe*/
        v11 = strtok(0, Delimiter); /*0x69a608*/
      }
    }
    unknown_libname_73(&v27); /*0x69a618*/
    String::Assign((char **)&v24, &g_INI_DefaultBuffer); /*0x69a626*/
    String::Assign((char **)&v28, g_INI_Key_GameMode); /*0x69a634*/
    String::Assign((char **)&v25, (const char *)v6); /*0x69a63e*/
    v26 = (int)INIClass::ReadString(v7, (char **)&v25, (char **)&v28, (char **)&v24, (int)&v27) > 0; /*0x69a664*/
    DeleteAndZero((void **)&v25); /*0x69a669*/
    DeleteAndZero(&v28); /*0x69a672*/
    DeleteAndZero(&v24); /*0x69a67b*/
    if ( v26 ) /*0x69a686*/
    {
      unknown_libname_73(&v25); /*0x69a690*/
      for ( i = String::Tokenize((const char **)&v27, 0, Delimiter, (void **)&v25); /*0x69a6b0*/
            i != -1;
            i = String::Tokenize((const char **)&v27, i, Delimiter, (void **)&v25) )
      {
        String::Assign((char **)&v24, asc_830A14); /*0x69a6bf*/
        String::TrimLeft(&v25, (const char **)&v24); /*0x69a6cd*/
        DeleteAndZero(&v24); /*0x69a6d6*/
        String::Assign((char **)&v28, asc_830A14); /*0x69a6e4*/
        String::TrimRight(&v25, (const char **)&v28); /*0x69a6f2*/
        DeleteAndZero(&v28); /*0x69a6fb*/
        v19 = *((_DWORD *)String + 107); /*0x69a700*/
        if ( *((_DWORD *)String + 109) >= v19 ) /*0x69a714*/
        {
          if ( !*((_BYTE *)String + 433) && v19 ) /*0x69a71f*/
            continue; /*0x69a71f*/
          v20 = *((_DWORD *)String + 110); /*0x69a721*/
          if ( v20 <= 0 /*0x69a730*/
            || !(*(unsigned __int8 (__thiscall **)(wchar_t *, int, _DWORD))(*((_DWORD *)String + 105) + 8))(
                  String + 210,
                  v19 + v20,
                  0) )
          {
            continue; /*0x69a730*/
          }
        }
        v21 = *((_DWORD *)String + 109); /*0x69a737*/
        *((_DWORD *)String + 109) = v21 + 1; /*0x69a742*/
        String::Reassign((char **)(*((_DWORD *)String + 106) + 4 * v21), &v25); /*0x69a74b*/
      }
      DeleteAndZero((void **)&v25); /*0x69a773*/
    }
    CCFileClass::Construct(v33, (char *)String + 88); /*0x69a784*/
    if ( CCFileClass::Open(v33, 0) ) /*0x69a78e*/
    {
      if ( FileClass::Load(v33, 1) ) /*0x69a7b0*/
      {
        BufferIOFileClass::Seek(v33, -100, 2u); /*0x69a7c5*/
        memset(Source, 0, sizeof(Source)); /*0x69a7da*/
        CCFileClass::Read(v33, Source, 100); /*0x69a7e8*/
        CCFileClass::Reset(v33); /*0x69a7f1*/
        if ( strstr(Source, aDigest_0) ) /*0x69a803*/
        {
          v36[1] = 0; /*0x69a81a*/
          v36[2] = 0; /*0x69a821*/
          GenericList::Constructor(&v37); /*0x69a828*/
          v37 = &List<INIClass::INISection *>::`vftable'; /*0x69a834*/
          Node::Init(v38); /*0x69a83f*/
          v38[5] = 0; /*0x69a852*/
          v39 = 0; /*0x69a859*/
          v36[0] = &CCINIClass_Vtable; /*0x69a861*/
          v30 = 0; /*0x69a86c*/
          v31 = 0; /*0x69a870*/
          *(_DWORD *)Destination = &Straw::`vftable'; /*0x69a874*/
          Buffer::Init(v32, (int)Source, 100); /*0x69a87c*/
          v32[3] = 0; /*0x69a88f*/
          *(_DWORD *)Destination = &BufferStraw::`vftable'; /*0x69a893*/
          CCINIClass::LoadAndVerifyDigest((int)v36, (int)Destination, 0, 0); /*0x69a89b*/
          INIClass::GetString( /*0x69a8bf*/
            (unsigned __int8 ***)v36,
            (unsigned __int8 *)g_INI_Key_Digest,
            (unsigned __int8 *)a1,
            0,
            Source,
            128);
          if ( &v23 == (int *)-276 ) /*0x69a8cd*/
          {
            strcpy((char *)String + 348, g_Str_No_Digest); /*0x69a90e*/
          }
          else
          {
            strncpy((char *)String + 348, Source, 0x20u); /*0x69a8e0*/
            *((_BYTE *)String + 379) = 0; /*0x69a8e8*/
          }
          Vector::Clear((int)v32); /*0x69a91d*/
          Straw::Dtor((int *)Destination); /*0x69a926*/
          HashTable::DestroyHashTableINIClass(v36); /*0x69a932*/
        }
      }
    }
    else
    {
      Debug::Log(); /*0x69a79d*/
    }
    v33[0] = (int)&CCFileClass::`vftable'; /*0x69a93e*/
    v35 = 0; /*0x69a946*/
    Vector::Clear((int)v34); /*0x69a94d*/
    v33[0] = (int)&off_7E1668; /*0x69a956*/
    BufferIOFileClass::Dtor(v33); /*0x69a95e*/
    DeleteAndZero(&v27); /*0x69a967*/
  }
  return String; /*0x69a96c*/
}



// ==== 0x0069A980  SessionClass::ParseGameInfo  this=SessionClass  sig=csp ====
wchar_t *__thiscall SessionClass_ParseGameInfo(
        wchar_t *Destination,
        char *Source,
        wchar_t *a3,
        char *a4,
        char a5,
        const char *a6,
        int a7,
        int a8)
{
  wchar_t *v8; // esi
  wchar_t *v9; // ebx
  wchar_t *v10; // ebp
  const char *v11; // eax
  wchar_t *String; // eax
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

  v8 = Destination; /*0x69a984*/
  v9 = Destination + 196; /*0x69a989*/
  MapFile::Constructor(0, 0); /*0x69a997*/
  v10 = v8 + 210; /*0x69a99c*/
  *((_DWORD *)v9 + 5) = 10; /*0x69a9ad*/
  *((_DWORD *)v9 + 4) = 0; /*0x69a9b0*/
  *(_DWORD *)v9 = &TypeList<enum DiskID>::`vftable'; /*0x69a9b7*/
  VectorClass::WstringConstructor(0, 0); /*0x69a9bd*/
  v11 = Source; /*0x69a9c2*/
  *((_DWORD *)v8 + 105) = &DynamicVectorClass<Wstring>::`vftable'; /*0x69a9c6*/
  *((_DWORD *)v8 + 110) = 10; /*0x69a9cf*/
  *((_DWORD *)v8 + 109) = 0; /*0x69a9d2*/
  if ( v11 ) /*0x69a9d9*/
  {
    strncpy((char *)v8 + 88, v11, 0x104u); /*0x69a9e5*/
    *((_BYTE *)v8 + 347) = 0; /*0x69a9ed*/
  }
  else
  {
    strcpy((char *)v8 + 88, aNoFileName); /*0x69aa12*/
    v8 = Destination; /*0x69aa1b*/
  }
  if ( a3 ) /*0x69aa25*/
  {
    wcsncpy(v8, a3, 0x2Cu); /*0x69aa2b*/
    v8[43] = 0; /*0x69aa33*/
  }
  else
  {
    String = GetStringCSF(g_Str_MSG_NoDescription, 0, g_Str_File_Session_CPP, 2845); /*0x69aa4c*/
    wcscpy(v8, String); /*0x69aa53*/
  }
  if ( a4 ) /*0x69aa61*/
  {
    strncpy((char *)v8 + 348, a4, 0x20u); /*0x69aa6d*/
    *((_BYTE *)v8 + 379) = 0; /*0x69aa75*/
  }
  else
  {
    strcpy((char *)v8 + 348, g_Str_No_Digest); /*0x69aa9d*/
    v8 = Destination; /*0x69aaa6*/
  }
  v13 = a5; /*0x69aaae*/
  v14 = a8; /*0x69aab2*/
  *((_DWORD *)v8 + 96) = a7; /*0x69aab6*/
  v15 = *(_DWORD *)v9; /*0x69aabc*/
  *((_BYTE *)v8 + 380) = v13; /*0x69aabe*/
  *((_DWORD *)v8 + 97) = v14; /*0x69aac6*/
  (*(void (__thiscall **)(wchar_t *))(v15 + 12))(v9); /*0x69aacc*/
  v16 = *((_DWORD *)v9 + 2); /*0x69aacf*/
  if ( *((_DWORD *)v9 + 4) < v16 /*0x69aaf4*/
    || (*((_BYTE *)v9 + 13) || !v16)
    && (v17 = *((_DWORD *)v9 + 5), v17 > 0)
    && (*(unsigned __int8 (__thiscall **)(wchar_t *, int, _DWORD))(*(_DWORD *)v9 + 8))(v9, v16 + v17, 0) )
  {
    v18 = *((_DWORD *)v9 + 4); /*0x69aafb*/
    v19 = *((_DWORD *)v9 + 1); /*0x69aafe*/
    *((_DWORD *)v9 + 4) = v18 + 1; /*0x69ab04*/
    *(_DWORD *)(v19 + 4 * v18) = -2; /*0x69ab07*/
  }
  if ( a6 ) /*0x69ab14*/
  {
    String::Assign(&Source, a6); /*0x69ab1f*/
    if ( String::Length((const char **)&Source) ) /*0x69ab28*/
    {
      unknown_libname_73(&a5); /*0x69ab39*/
      for ( i = String::Tokenize((const char **)&Source, 0, Delimiter, (void **)&a5); /*0x69ab58*/
            i != -1;
            i = String::Tokenize((const char **)&Source, i, Delimiter, (void **)&a5) )
      {
        String::Assign((char **)&a3, asc_830A14); /*0x69ab67*/
        String::TrimLeft((const char **)&a5, (const char **)&a3); /*0x69ab75*/
        DeleteAndZero((void **)&a3); /*0x69ab7e*/
        String::Assign(&a4, asc_830A14); /*0x69ab8c*/
        String::TrimRight((const char **)&a5, (const char **)&a4); /*0x69ab9a*/
        DeleteAndZero((void **)&a4); /*0x69aba3*/
        v21 = *((_DWORD *)v10 + 2); /*0x69aba8*/
        if ( *((_DWORD *)v10 + 4) >= v21 ) /*0x69abb0*/
        {
          if ( !*((_BYTE *)v10 + 13) && v21 ) /*0x69abbb*/
            continue; /*0x69abbb*/
          v22 = *((_DWORD *)v10 + 5); /*0x69abbd*/
          if ( v22 <= 0 /*0x69abce*/
            || !(*(unsigned __int8 (__thiscall **)(wchar_t *, int, _DWORD))(*(_DWORD *)v10 + 8))(v10, v21 + v22, 0) )
          {
            continue; /*0x69abce*/
          }
        }
        v23 = *((_DWORD *)v10 + 4); /*0x69abd5*/
        *((_DWORD *)v10 + 4) = v23 + 1; /*0x69abe0*/
        String::Reassign((char **)(*((_DWORD *)v10 + 1) + 4 * v23), (const char **)&a5); /*0x69abe9*/
      }
      DeleteAndZero((void **)&a5); /*0x69ac11*/
    }
    DeleteAndZero((void **)&Source); /*0x69ac1a*/
  }
  return v8; /*0x69ac21*/
}



// ==== 0x0069AC30  ScenarioClass::CheckExists  this=AbstractClass  sig=csp ====
char __thiscall ScenarioClass_CheckExists(int *this, int a2)
{
  _DWORD *v2; // eax
  char v3; // bl
  int v5; // edx
  int v6; // eax
  _DWORD *v7; // esi
  int v8; // edx
  int v9; // eax
  _DWORD *i; // ecx
  int v11[9]; // [esp+Ch] [ebp-24h] BYREF

  if ( a2 == -2 ) /*0x69ac3d*/
  {
    v2 = RawFileClass::Construct(v11, (int)(this + 22)); /*0x69ac47*/
    v3 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 20))(v2, 0); /*0x69ac59*/
    RawFileClass::Dtor(v11); /*0x69ac5b*/
    return v3; /*0x69ac68*/
  }
  v5 = this->q066; /*0x69ac6b*/
  v6 = 0; /*0x69ac71*/
  if ( v5 <= 0 ) /*0x69ac75*/
  {
LABEL_7:
    v8 = this->q066; /*0x69ac8a*/
    v9 = 0; /*0x69ac90*/
    if ( v8 <= 0 ) /*0x69ac94*/
      return 0; /*0x69acb0*/
    for ( i = (_DWORD *)this->u8_63; *i != a2; ++i ) /*0x69ac96*/
    {
      if ( ++v9 >= v8 ) /*0x69aca6*/
        return 0; /*0x69aca6*/
    }
  }
  else
  {
    v7 = (_DWORD *)this->u8_63; /*0x69ac77*/
    while ( *v7 != -1 ) /*0x69ac80*/
    {
      ++v6; /*0x69ac82*/
      ++v7; /*0x69ac83*/
      if ( v6 >= v5 ) /*0x69ac88*/
        goto LABEL_7; /*0x69ac88*/
    }
  }
  return 1; /*0x69ac60*/
}



// ==== 0x0069ACC0  GameOption::GetField  this=AbstractClass  sig=csp ====
int __thiscall GameOption::GetField(_DWORD **this)
{
  return *this->u8_63; /*0x69acc8*/
}



// ==== 0x0069ACD0  GameOption::SetDescriptionWStr  this=GameOption  sig=csp ====
wchar_t *__thiscall GameOption::SetDescriptionWStr(wchar_t *Destination, wchar_t *Source)
{
  wchar_t *result; // eax
  wchar_t *StringCSF; // eax

  if ( Source ) /*0x69acd9*/
  {
    result = wcsncpy(Destination, Source, 0x2Cu); /*0x69acdf*/
    *(Destination + 43) = 0; /*0x69ace7*/
  }
  else
  {
    StringCSF = GetStringCSF(g_Str_MSG_NoDescription, 0, g_Str_File_Session_CPP, 2845); /*0x69ad02*/
    return wcscpy(Destination, StringCSF); /*0x69ad09*/
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
  this->q17C = a2; /*0x69ade4*/
  return a2; /*0x69adea*/
}



// ==== 0x0069ADF0  IsRandMap::Sed  this=AbstractClass  sig=csp ====
BOOL __thiscall IsRandMap_Sed(int this)
{
  return _strcmpi((const void *)(this + 88), g_Str_File_RandMap_Sed) == 0; /*0x69ae06*/
}



// ==== 0x0069AE10  GameClass::initPlayerData  this=AbstractClass  sig=csp ====
bool __thiscall sub_69AE10(int *this, const char **a2)
{
  int v3; // eax
  int v5; // esi

  v3 = this->u32_1B4; /*0x69ae15*/
  if ( !v3 ) /*0x69ae1d*/
    return String::Equals_Alt(a2, aStandard_0); /*0x69ae28*/
  v5 = 0; /*0x69ae33*/
  if ( v3 <= 0 ) /*0x69ae37*/
    return 0; /*0x69ae5d*/
  while ( !String::Compare(a2, (const char **)(this->q6A0 + 4 * v5)) ) /*0x69ae50*/
  {
    if ( ++v5 >= this->u32_1B4 ) /*0x69ae5b*/
      return 0; /*0x69ae5b*/
  }
  return 1; /*0x69ae2d*/
}



// ==== 0x0069AE70  IsRandMap::Sed2  this=IsRandMap  sig=csp ====
BOOL __thiscall IsRandMap_Sed2(int this)
{
  return _strcmpi((const void *)(this + 1704), g_Str_File_RandMap_Sed) == 0; /*0x69ae89*/
}



// ==== 0x0069AE90  Multiplayer::ShowProgress  this=Multiplayer  sig=csp ====
void __thiscall Multiplayer_ShowProgress(_DWORD *this, int a2)
{
  double v3; // st7
  int i; // esi
  int v5; // esi
  int v6; // eax
  double v7; // st7
  int v8; // esi
  int v9; // eax
  DWORD Ticks; // [esp+8h] [ebp-1DCh]
  int v11; // [esp+14h] [ebp-1D0h]
  double v12; // [esp+14h] [ebp-1D0h]
  int v13[113]; // [esp+1Ch] [ebp-1C8h] BYREF
  __int16 v14; // [esp+1E0h] [ebp-4h]
  char v15; // [esp+1E2h] [ebp-2h]

  if ( !g_ArmageddonMode ) /*0x69aea1*/
  {
    v11 = a2; /*0x69aeb4*/
    if ( *((_BYTE *)g_ScenarioClass_Instance + 13501) ) /*0x69aeb8*/
      v11 = a2 / 2; /*0x69aec7*/
    v12 = (double)v11; /*0x69aed6*/
    if ( Progress::GetWeighted(0) * 100.0 < v12 ) /*0x69aef1*/
      Network::UpdateLatencyDisplay(0, v12, NAN); /*0x69af0a*/
    if ( this->u32_284C != 1 ) /*0x69af16*/
    {
      Ticks = Timer::GetTicks(); /*0x69af26*/
      switch ( *this ) /*0x69af3e*/
      {
        case 1: /*0x69af3e*/
        case 2: /*0x69af3e*/
          memset(v13, 0, 250); /*0x69b099*/
          v13[0] = 108; /*0x69b0a2*/
          v7 = Progress::GetWeighted(0); /*0x69b0aa*/
          *(int *)((char *)&v13[6] + 1) = Math::RoundToInt(v7 * 100.0); /*0x69b0c0*/
          LOBYTE(v13[6]) = g_EventDispatchState; /*0x69b0d5*/
          Stream::WriteBlock(v13, 250, 0); /*0x69b0d9*/
          Stream::ReadPacket(&g_EventManager); /*0x69b0e3*/
          while ( Count::GetCountQueue(&g_EventManager) > 5 ) /*0x69b0f5*/
          {
            v8 = 240; /*0x69b101*/
            if ( Ticks != -1 ) /*0x69b107*/
            {
              v9 = Timer::GetTicks() - Ticks; /*0x69b112*/
              if ( v9 >= 240 ) /*0x69b118*/
                goto LABEL_25; /*0x69b118*/
              v8 = 240 - v9; /*0x69b11a*/
            }
            if ( v8 <= 0 ) /*0x69b11e*/
              break; /*0x69b11e*/
            Sleep(0x14u); /*0x69b122*/
            EventQueue::Process(g_BinkMoviePlayer); /*0x69b12a*/
            Stream::ReadPacket(&g_EventManager); /*0x69b134*/
          }
          break; /*0x69b146*/
        case 3: /*0x69af3e*/
        case 4: /*0x69af3e*/
          memset(v13, 0, sizeof(v13)); /*0x69af52*/
          v14 = 0; /*0x69af54*/
          v15 = 0; /*0x69af56*/
          v13[0] = 15; /*0x69af5c*/
          v3 = Progress::GetWeighted(0); /*0x69af64*/
          *(int *)((char *)&v13[11] + 3) = Math::RoundToInt(v3 * 100.0); /*0x69af7a*/
          strcpy((char *)&v13[1], ToWideStringChar(*(char **)Game_PlayerInfoArray)); /*0x69af9e*/
          if ( (double)*(int *)((char *)&v13[11] + 3) >= 99.95 ) /*0x69afb6*/
          {
            for ( i = 1; i < Game_PlayerCount; ++i ) /*0x69afdf*/
            {
              Debug::Log(aSendingGuarent); /*0x69afe6*/
              Network::SendToPlayer((int)v13, 51, 1, *(wchar_t **)(Game_PlayerInfoArray + 4 * i)); /*0x69b006*/
            }
          }
          else
          {
            Network::SendMessage(v13, 51, 0, 0, 0, 0); /*0x69afcc*/
          }
          Event::Dispatch(); /*0x69b015*/
          while ( Network::GetQueueCount(&g_NetworkManager) > 5 ) /*0x69b027*/
          {
            v5 = 240; /*0x69b037*/
            if ( Ticks != -1 ) /*0x69b03d*/
            {
              v6 = Timer::GetTicks() - Ticks; /*0x69b048*/
              if ( v6 >= 240 ) /*0x69b04e*/
                goto LABEL_25; /*0x69b04e*/
              v5 = 240 - v6; /*0x69b054*/
            }
            if ( v5 <= 0 ) /*0x69b058*/
              break; /*0x69b058*/
            Sleep(0x14u); /*0x69b060*/
            MessageLoop(); /*0x69b062*/
            Event::Dispatch(); /*0x69b067*/
          }
          break; /*0x69b079*/
        default:
          break;
      }
LABEL_25:
      Event::Dispatch(); /*0x69b148*/
    }
  }
}



// ==== 0x0069B170  ObjectClass::ParseAndApplyAlliances  this=ObjectClass  sig=csp ====
void __thiscall ParseAndApplyAlliances(_BYTE *this)
{
  bool v1; // zf
  int v2; // edx
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
  _DWORD *v16; // ecx
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
  int v27; // edx
  char *v28; // [esp+10h] [ebp-38h]
  void **v30; // [esp+18h] [ebp-30h] BYREF
  void *Block; // [esp+1Ch] [ebp-2Ch]
  int v32; // [esp+20h] [ebp-28h]
  int v33; // [esp+24h] [ebp-24h]
  int v34; // [esp+28h] [ebp-20h]
  int v35; // [esp+2Ch] [ebp-1Ch]
  void **v36; // [esp+30h] [ebp-18h] BYREF
  void *v37; // [esp+34h] [ebp-14h]
  int v38; // [esp+38h] [ebp-10h]
  char v39; // [esp+3Dh] [ebp-Bh]
  int v40; // [esp+40h] [ebp-8h]
  int v41; // [esp+44h] [ebp-4h]

  v1 = *(_DWORD *)this == 4; /*0x69b176*/
  this->q688 = 0; /*0x69b17d*/
  if ( v1 ) /*0x69b184*/
  {
    v2 = *(_DWORD *)g_ScenarioClass_Instance; /*0x69b199*/
    BYTE1(v2) = BYTE1(*(_DWORD *)g_ScenarioClass_Instance) & 0xFB; /*0x69b19b*/
    *(_DWORD *)g_ScenarioClass_Instance = v2; /*0x69b19e*/
    Debug::Log(); /*0x69b1a0*/
    Debug::Log(); /*0x69b1af*/
    if ( strlen(&byte_B77A04) ) /*0x69b1c1*/
    {
      if ( strlen(byte_B76568) ) /*0x69b1d1*/
      {
        ParseAndApplyAlliances_Parse(0, 0); /*0x69b1ea*/
        v36 = &DynamicVectorClass<HouseClass *>::`vftable'; /*0x69b1ff*/
        v41 = 10; /*0x69b203*/
        v40 = 0; /*0x69b207*/
        ParseAndApplyAlliances_Parse(0, 0); /*0x69b20b*/
        v30 = &DynamicVectorClass<HouseClass *>::`vftable'; /*0x69b210*/
        v35 = 10; /*0x69b232*/
        v34 = 0; /*0x69b238*/
        v3 = &byte_B77A04; /*0x69b23c*/
        if ( strlen(&byte_B77A04) <= strlen(byte_B76568) ) /*0x69b241*/
          v3 = byte_B76568; /*0x69b243*/
        v4 = (char *)__2_YAPAXI_Z(strlen(v3) + 32); /*0x69b25b*/
        strcpy(v4, &byte_B77A04); /*0x69b27c*/
        v28 = v4; /*0x69b280*/
        for ( i = strtok(v4, Delimiter); i; i = strtok(0, Delimiter) ) /*0x69b295*/
        {
          if ( !*i ) /*0x69b29b*/
            break; /*0x69b29f*/
          for ( j = 0; j < HouseClass_Count; ++j ) /*0x69b2ae*/
          {
            v7 = *(_DWORD *)&HouseClass_Array->gap0[4 * j]; /*0x69b2b6*/
            if ( *(_BYTE *)(v7 + 492) /*0x69b304*/
              && !_strcmpi((const void *)(v7 + 90100), i)
              && (v40 < v38
               || (v39 || !v38)
               && v41 > 0
               && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v36[2])(&v36, v41 + v38, 0)) )
            {
              v8 = v40++; /*0x69b30f*/
              *((_DWORD *)v37 + v8) = v7; /*0x69b31a*/
            }
          }
        }
        strcpy(v4, byte_B76568); /*0x69b35f*/
        for ( k = strtok(v4, Delimiter); k; k = strtok(0, Delimiter) ) /*0x69b374*/
        {
          if ( !*k ) /*0x69b37a*/
            break; /*0x69b37e*/
          for ( m = 0; m < HouseClass_Count; ++m ) /*0x69b38d*/
          {
            v11 = *(_DWORD *)&HouseClass_Array->gap0[4 * m]; /*0x69b394*/
            if ( *(_BYTE *)(v11 + 492) /*0x69b3e2*/
              && !_strcmpi((const void *)(v11 + 90100), k)
              && (v34 < v32
               || (BYTE1(v33) || !v32)
               && v35 > 0
               && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v30[2])(&v30, v35 + v32, 0)) )
            {
              v12 = v34++; /*0x69b3ed*/
              *((_DWORD *)Block + v12) = v11; /*0x69b3f8*/
            }
          }
        }
        v13 = v40; /*0x69b41e*/
        v14 = v40; /*0x69b422*/
        if ( v40 > 1 ) /*0x69b427*/
        {
          v15 = 0; /*0x69b429*/
          v16 = v37; /*0x69b42f*/
          v17 = 0; /*0x69b433*/
          do /*0x69b46d*/
          {
            v18 = 0; /*0x69b435*/
            if ( v14 > 0 ) /*0x69b439*/
            {
              do /*0x69b45f*/
              {
                v19 = v16[v18]; /*0x69b43e*/
                if ( *(_DWORD *)(v16[v17] + 48) != *(_DWORD *)(v19 + 48) ) /*0x69b447*/
                {
                  HouseClass::HandleAlliance(v16[v17], v19, 0); /*0x69b44f*/
                  v13 = v40; /*0x69b454*/
                  v16 = v37; /*0x69b458*/
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
        v20 = v34; /*0x69b46f*/
        v21 = v34; /*0x69b473*/
        if ( v34 > 1 ) /*0x69b478*/
        {
          v22 = 0; /*0x69b47a*/
          v23 = Block; /*0x69b480*/
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
                  HouseClass::HandleAlliance(v23[v24], v26, 0); /*0x69b4a0*/
                  v20 = v34; /*0x69b4a5*/
                  v23 = Block; /*0x69b4a9*/
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
        this->q688 = 1; /*0x69b4d4*/
        v27 = *(_DWORD *)g_ScenarioClass_Instance; /*0x69b4e0*/
        BYTE1(v27) = BYTE1(*(_DWORD *)g_ScenarioClass_Instance) | 4; /*0x69b4e2*/
        *(_DWORD *)g_ScenarioClass_Instance = v27; /*0x69b4e5*/
        v30 = &VectorClass<HouseClass *>::`vftable'; /*0x69b4ed*/
        if ( Block && BYTE1(v33) ) /*0x69b4f9*/
        {
          __3_YAXPAX_Z(Block); /*0x69b4fc*/
          Block = 0; /*0x69b504*/
        }
        v36 = &VectorClass<HouseClass *>::`vftable'; /*0x69b50c*/
        BYTE1(v33) = 0; /*0x69b514*/
        v32 = 0; /*0x69b519*/
        if ( v37 ) /*0x69b51e*/
        {
          if ( v39 ) /*0x69b526*/
            __3_YAXPAX_Z(v37); /*0x69b529*/
        }
      }
    }
  }
}



// ==== 0x0069B540  Network::processGameEvent  this=Network  sig=csp ====
_DWORD *__thiscall sub_69B540(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // ecx

  this->q024 = 0; /*0x69b540*/
  result = this + 27; /*0x69b547*/
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
bool __thiscall sub_69B560(void *this, int a2)
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
      && (*(int (__stdcall **)(int, void *, int, _DWORD))(*(_DWORD *)v2 + 16))(v2, this, a2, 0) >= 0 )
    {
      return 1; /*0x69b56a*/
    }
  }
  return result; /*0x69b599*/
}



// ==== 0x0069B5B0  LoadGame::LoadBlock300  this=LoadGame  sig=csp ====
bool __thiscall sub_69B5B0(_DWORD *this, int a2)
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
      v4 = (*(int (__stdcall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, this, 300, 0); /*0x69b5e4*/
      this->q004 = -1; /*0x69b5e9*/
      if ( v4 >= 0 ) /*0x69b5f0*/
        return 1; /*0x69b5ba*/
    }
  }
  return result; /*0x69b5f2*/
}



// ==== 0x0069B600  NetworkSession::IsPlayerInGame  this=NetworkSession  sig=csp ====
char __thiscall NetworkSession::IsPlayerInGame(_DWORD *this, int a2)
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
  v2 = this->q284C; /*0x69b60c*/
  v3 = 0; /*0x69b612*/
  if ( v2 <= 0 ) /*0x69b616*/
  {
LABEL_10:
    v7 = 0; /*0x69b642*/
    for ( i = this + 33; *i != a2; ++i ) /*0x69b644*/
    {
      if ( ++v7 >= 8 ) /*0x69b655*/
        return 0; /*0x69b655*/
    }
  }
  else
  {
    v4 = (int *)this->q2840; /*0x69b618*/
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
int __thiscall sub_69B690(_DWORD *this)
{
  int result; // eax
  int v3; // edi
  int v4; // edx
  int *v5; // esi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  _DWORD *i; // edx

  while ( 1 ) /*0x69b6aa*/
  {
    result = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 7); /*0x69b6aa*/
    if ( result == -2 ) /*0x69b6b1*/
      return result; /*0x69b6fa*/
    v3 = this->qA13; /*0x69b6b3*/
    v4 = 0; /*0x69b6b9*/
    if ( v3 <= 0 ) /*0x69b6bd*/
    {
LABEL_10:
      v8 = 0; /*0x69b6e5*/
      for ( i = this + 33; *i != result; ++i ) /*0x69b6e7*/
      {
        if ( ++v8 >= 8 ) /*0x69b6f8*/
          return result; /*0x69b6f8*/
      }
    }
    else
    {
      v5 = (int *)this->qA10; /*0x69b6bf*/
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
int __thiscall Session_GetPlayerOption(_DWORD *this)
{
  int result; // eax

  result = -2; /*0x69b706*/
  if ( this->q178 != -2 ) /*0x69b70d*/
    return this->q174; /*0x69b70f*/
  return result; /*0x69b715*/
}



// ==== 0x0069B720  Session::GetPlayerColor  this=Session  sig=csp ====
int __thiscall Session_GetPlayerColor(_DWORD *this)
{
  int result; // eax

  result = -2; /*0x69b726*/
  if ( this->q160 != -2 ) /*0x69b72d*/
    return this->q15C; /*0x69b72f*/
  return result; /*0x69b735*/
}



// ==== 0x0069B760  SessionClass::AssignSide  this=SessionClass  sig=csp ====
int __thiscall SessionClass_AssignSide(_DWORD *this, int a2, char a3)
{
  int result; // eax
  int v5; // edx

  result = a2; /*0x69b760*/
  if ( a2 == -2 ) /*0x69b76a*/
  {
    LOBYTE(result) = a3; /*0x69b76c*/
    if ( a3 ) /*0x69b772*/
    {
      result = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 9); /*0x69b783*/
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
  v5 = this->Side2; /*0x69b7c6*/
  this->idxSide = this->Side; /*0x69b7cc*/
  this->idxSide2 = v5; /*0x69b7d2*/
  return result; /*0x69b7d8*/
}



// ==== 0x0069B7E0  SessionClass::AssignColor  this=SessionClass  sig=csp ====
int __thiscall SessionClass_AssignColor(_DWORD *this, int a2, char a3)
{
  int result; // eax
  int v5; // edi
  int v6; // edx
  int *v7; // esi
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  _DWORD *v11; // edx
  int v12; // edx

  result = a2; /*0x69b7e0*/
  if ( a2 == -2 ) /*0x69b7ef*/
  {
    LOBYTE(result) = a3; /*0x69b7f5*/
    if ( a3 ) /*0x69b7fb*/
    {
      while ( 1 ) /*0x69b80e*/
      {
        result = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 7); /*0x69b80e*/
        if ( result == -2 ) /*0x69b815*/
          break; /*0x69b815*/
        v5 = this->u32_284C; /*0x69b817*/
        v6 = 0; /*0x69b81d*/
        if ( v5 <= 0 ) /*0x69b821*/
        {
LABEL_12:
          v10 = 0; /*0x69b849*/
          v11 = this + 33; /*0x69b84b*/
          while ( *v11 != result ) /*0x69b853*/
          {
            ++v10; /*0x69b855*/
            ++v11; /*0x69b856*/
            if ( v10 >= 8 ) /*0x69b85c*/
              goto LABEL_15; /*0x69b85c*/
          }
        }
        else
        {
          v7 = (int *)this->u32_2840; /*0x69b823*/
          while ( 1 ) /*0x69b829*/
          {
            v8 = *v7; /*0x69b829*/
            if ( *(_DWORD *)(*v7 + 87) == -2 && *(_DWORD *)(v8 + 83) == -1 ) /*0x69b834*/
              v9 = -2; /*0x69b836*/
            else
              v9 = *(_DWORD *)(v8 + 83); /*0x69b83a*/
            if ( v9 == result ) /*0x69b83f*/
              break; /*0x69b83f*/
            ++v6; /*0x69b841*/
            ++v7; /*0x69b842*/
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
  v12 = this->Color2; /*0x69b896*/
  this->u32_15C = this->Color; /*0x69b89c*/
  this->q160 = v12; /*0x69b8a2*/
  return result; /*0x69b8a8*/
}



// ==== 0x0069B8B0  nullsub_229  this=-  sig=csp ====
void __stdcall nullsub_229(int a1, int a2)
{
  ; /*0x69b8b0*/
}



// ==== 0x0069B8C0  Player::RandomAssign  this=Player  sig=csp ====
void __thiscall Player_RandomAssign(_DWORD *this)
{
  int v1; // ebp
  int i; // ebx
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  int *v7; // ebx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // esi
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v17; // [esp+14h] [ebp-4h]

  Debug::Log(); /*0x69b8d0*/
  v1 = Game_PlayerCount; /*0x69b8d5*/
  for ( i = 0; i < v1; ++i ) /*0x69b8e2*/
  {
    v3 = *(_DWORD *)(Game_PlayerInfoArray + 4 * i); /*0x69b8f2*/
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
          *(_DWORD *)(v3 + 75) = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 9); /*0x69b935*/
      }
      if ( *(_DWORD *)(v3 + 87) == -2 ) /*0x69b941*/
      {
        *(_DWORD *)(v3 + 87) = -1; /*0x69b943*/
        *(_DWORD *)(v3 + 83) = -1; /*0x69b946*/
        do /*0x69b966*/
          v6 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 7); /*0x69b95e*/
        while ( (unsigned __int8)NetworkSession::IsPlayerInGame(v6) ); /*0x69b966*/
        *(_DWORD *)(v3 + 83) = v6; /*0x69b96f*/
      }
    }
    if ( !i ) /*0x69b989*/
      g_TauntCommandState = *(_DWORD *)(v3 + 83); /*0x69b98e*/
    ToWideStringChar((char *)v3); /*0x69b9b1*/
    Debug::Log(); /*0x69b9bd*/
  }
  v17 = 0; /*0x69b9ce*/
  v7 = g_CampaignPlayerArray; /*0x69b9d6*/
  do /*0x69baa0*/
  {
    if ( *v7 == -2 ) /*0x69b9e4*/
    {
      v8 = this->q004; /*0x69b9ea*/
      if ( v8 ) /*0x69b9ef*/
        v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 112))(v8); /*0x69b9f3*/
      else
        v9 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 9); /*0x69ba07*/
      *v7 = v9; /*0x69ba0c*/
    }
    if ( v7[8] == -2 ) /*0x69ba11*/
    {
      while ( 1 ) /*0x69ba23*/
      {
        v10 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 7); /*0x69ba23*/
        if ( v10 == -2 ) /*0x69ba2a*/
          break; /*0x69ba2a*/
        v11 = 0; /*0x69ba32*/
        if ( Game_PlayerCount <= 0 ) /*0x69ba36*/
        {
LABEL_32:
          v15 = 33; /*0x69ba5e*/
          while ( g_GameMode_Current[v15] != v10 ) /*0x69ba69*/
          {
            if ( ++v15 >= 41 ) /*0x69ba74*/
              goto LABEL_35; /*0x69ba74*/
          }
        }
        else
        {
          v12 = Game_PlayerInfoArray; /*0x69ba38*/
          while ( 1 ) /*0x69ba3e*/
          {
            v13 = *(_DWORD *)v12; /*0x69ba3e*/
            if ( *(_DWORD *)(*(_DWORD *)v12 + 87) == -2 && *(_DWORD *)(v13 + 83) == -1 ) /*0x69ba49*/
              v14 = -2; /*0x69ba4b*/
            else
              v14 = *(_DWORD *)(v13 + 83); /*0x69ba4f*/
            if ( v14 == v10 ) /*0x69ba54*/
              break; /*0x69ba54*/
            ++v11; /*0x69ba56*/
            v12 += 4; /*0x69ba57*/
            if ( v11 >= Game_PlayerCount ) /*0x69ba5c*/
              goto LABEL_32; /*0x69ba5c*/
          }
        }
      }
LABEL_35:
      v7[8] = v10; /*0x69ba76*/
    }
    Debug::Log(); /*0x69ba8a*/
    ++v7; /*0x69ba92*/
    ++v17; /*0x69ba9c*/
  }
  while ( (int)v7 < (int)g_CampaignConfig ); /*0x69baa0*/
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
char __thiscall WTFMode_Shutdown(_BYTE *this)
{
  char result; // al

  result = this->q30D8; /*0x69bb40*/
  if ( result ) /*0x69bb48*/
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
      Tooltip::Enable((void *)g_TacticalRender, 0); /*0x69bba8*/
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 28))(g_WWMouseClass_Instance) ) /*0x69bbb5*/
      (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 20))(g_WWMouseClass_Instance); /*0x69bbc4*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x69bbcf*/
    dword_B07784 = 0; /*0x69bbd2*/
  }
  return result; /*0x69bbdc*/
}



// ==== 0x0069BBE0  SessionClass::GetGameSpeed  this=SessionClass  sig=csp ====
char __thiscall SessionClass_GetGameSpeed(_BYTE *this)
{
  return this->CurrentlyInGame; /*0x69bbe6*/
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
__int16 __thiscall sub_69BC20(_WORD *this, int a2)
{
  int v2; // eax
  int i; // esi

  v2 = 0; /*0x69bc27*/
  if ( Game_PlayerCount <= 0 ) /*0x69bc2d*/
    return 0; /*0x69bc48*/
  for ( i = Game_PlayerInfoArray; *(_DWORD *)(*(_DWORD *)i + 111) != a2; i += 4 ) /*0x69bc2f*/
  {
    if ( ++v2 >= Game_PlayerCount ) /*0x69bc46*/
      return 0; /*0x69bc46*/
  }
  return *(this + v2 + 6205); /*0x69bc48*/
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
  v2 = (char **)&g_NetworkPlayerName; /*0x69bc66*/
  while ( 1 ) /*0x69bc74*/
  {
    v3 = *v2; /*0x69bc74*/
    v4 = ToWideStringChar(*(char **)(Game_PlayerInfoArray + 4 * a1)); /*0x69bc80*/
    v5 = ToWideStringChar(v3); /*0x69bc82*/
    if ( !_strcmpi(v4, v5) ) /*0x69bc89*/
      break; /*0x69bc89*/
    ++v2; /*0x69bc95*/
    ++v1; /*0x69bc98*/
    if ( (int)v2 >= (int)&g_PlayerNameListEnd ) /*0x69bc9f*/
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
  v2 = (char **)&g_NetworkPlayerName; /*0x69bcc9*/
  while ( 1 ) /*0x69bcd0*/
  {
    v3 = ToWideStringChar(*v2); /*0x69bcd0*/
    if ( !_strcmpi(a1, v3) ) /*0x69bcd7*/
      break; /*0x69bcd7*/
    ++v2; /*0x69bce3*/
    ++v1; /*0x69bce6*/
    if ( (int)v2 >= (int)&g_PlayerNameListEnd ) /*0x69bced*/
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
  if ( Game_PlayerCount <= 0 ) /*0x69bd0d*/
    return 0; /*0x69bd48*/
  while ( 1 ) /*0x69bd18*/
  {
    v2 = (char *)*(&g_NetworkPlayerName + a1); /*0x69bd18*/
    v3 = ToWideStringChar(*(char **)(Game_PlayerInfoArray + 4 * v1)); /*0x69bd29*/
    v4 = ToWideStringChar(v2); /*0x69bd2b*/
    if ( !_strcmpi(v3, v4) ) /*0x69bd32*/
      break; /*0x69bd32*/
    if ( ++v1 >= Game_PlayerCount ) /*0x69bd46*/
      return 0; /*0x69bd46*/
  }
  return v1; /*0x69bd48*/
}



// ==== 0x0069BD60  SessionClass::SetupNetwork  this=SessionClass  sig=csp ====
void __thiscall sub_69BD60(int this)
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
  int v42; // ebx
  char *v43; // edi
  char *v44; // eax
  _DWORD *v45; // ecx
  bool v46; // zf
  int v47; // eax
  __int16 v48; // [esp-Ch] [ebp-70h]
  int v49; // [esp+8h] [ebp-5Ch]
  int v50; // [esp+8h] [ebp-5Ch]
  int v51; // [esp+8h] [ebp-5Ch]
  int v52; // [esp+Ch] [ebp-58h]
  _DWORD v53[2]; // [esp+10h] [ebp-54h] BYREF
  void *v54; // [esp+18h] [ebp-4Ch]
  int v55; // [esp+1Ch] [ebp-48h]
  void *v56; // [esp+20h] [ebp-44h]
  int v57; // [esp+24h] [ebp-40h] BYREF
  int v58; // [esp+2Ch] [ebp-38h]
  int v59; // [esp+30h] [ebp-34h]
  _DWORD v60[3]; // [esp+34h] [ebp-30h] BYREF
  _DWORD v61[3]; // [esp+40h] [ebp-24h] BYREF
  void **v62; // [esp+4Ch] [ebp-18h] BYREF
  void *Block; // [esp+50h] [ebp-14h]
  int v64; // [esp+54h] [ebp-10h]
  char v65; // [esp+59h] [ebp-Bh]
  int v66; // [esp+5Ch] [ebp-8h]
  int v67; // [esp+60h] [ebp-4h]

  v1 = 0; /*0x69bd65*/
  v55 = 1; /*0x69bd6f*/
  AbstractClass::updateAnimationState(0, 0); /*0x69bd77*/
  v62 = &DynamicVectorClass<NodeNameType *>::`vftable'; /*0x69bd81*/
  v67 = 10; /*0x69bd89*/
  v66 = 0; /*0x69bd91*/
  Debug::Log(); /*0x69bd95*/
  if ( *(int *)(this + 10316) < 2 ) /*0x69bda6*/
  {
    v62 = &VectorClass<NodeNameType *>::`vftable'; /*0x69bdac*/
    MPCooperative::updateScoreBoard(&v62); /*0x69bdb4*/
    return; /*0x69bdbe*/
  }
  v52 = 0; /*0x69bdce*/
  memset((void *)(this + 11816), 0, 0x120u); /*0x69bdd2*/
  *(_BYTE *)(this + 12312) = 1; /*0x69bdd4*/
  if ( *(int *)(this + 10316) > 0 ) /*0x69bde3*/
  {
    do /*0x69be9c*/
    {
      v53[0] = 0; /*0x69bde9*/
      v3 = (char **)&g_NetworkPlayerName; /*0x69bdf1*/
      while ( 1 ) /*0x69bdfb*/
      {
        v4 = *v3; /*0x69bdfb*/
        v54 = ToWideStringChar(*(char **)(Game_PlayerInfoArray + 4 * v1)); /*0x69be07*/
        v5 = ToWideStringChar(v4); /*0x69be0b*/
        if ( !_strcmpi(v54, v5) ) /*0x69be16*/
          break; /*0x69be16*/
        ++v3; /*0x69be26*/
        ++v53[0]; /*0x69be30*/
        if ( (int)v3 >= (int)&g_PlayerNameListEnd ) /*0x69be34*/
        {
          v6 = 0; /*0x69be36*/
          goto LABEL_9; /*0x69be38*/
        }
      }
      v6 = v53[0]; /*0x69be3a*/
      if ( v53[0] >= 8u ) /*0x69be40*/
        goto LABEL_10; /*0x69be40*/
LABEL_9:
      Network::SetPort( /*0x69be47*/
        (_WORD *)(*(_DWORD *)(*(_DWORD *)(this + 10304) + 4 * v1) + 40),
        *(_WORD *)(this + 4 * v6 + 12280));
      ToWideStringChar(*(char **)(*(_DWORD *)(this + 10304) + 4 * v1)); /*0x69be6a*/
      Network::FormatAddress((unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)(this + 10304) + 4 * v1) + 40), 0); /*0x69be7f*/
      Debug::Log(); /*0x69be8b*/
LABEL_10:
      ++v1; /*0x69be93*/
    }
    while ( v1 < *(_DWORD *)(this + 10316) ); /*0x69be9c*/
  }
  v7 = *(_DWORD *)(this + 10316); /*0x69bea2*/
  v58 = 0; /*0x69beaa*/
  v59 = 0; /*0x69beb0*/
  v49 = 0; /*0x69beb4*/
  if ( v7 > 0 ) /*0x69beb8*/
  {
    v8 = v64; /*0x69bebe*/
    while ( 1 ) /*0x69bec2*/
    {
      v9 = 0x7FFFFFFF; /*0x69bec2*/
      v10 = 0; /*0x69bec7*/
      v11 = 0x7FFFFFFF; /*0x69becb*/
      if ( v7 <= 0 ) /*0x69becd*/
        break; /*0x69becd*/
      do /*0x69bef2*/
      {
        if ( !*((_BYTE *)&v58 + v10) && *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 10304) + 4 * v10) + 83) < v11 ) /*0x69bee9*/
        {
          v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 10304) + 4 * v10) + 83); /*0x69beeb*/
          v9 = v10; /*0x69beed*/
        }
        ++v10; /*0x69beef*/
      }
      while ( v10 < v7 ); /*0x69bef2*/
      if ( v9 == 0x7FFFFFFF ) /*0x69befa*/
        break; /*0x69befa*/
      v12 = *(_DWORD *)(this + 10304); /*0x69befc*/
      *((_BYTE *)&v58 + v9) = 1; /*0x69bf02*/
      v13 = (_DWORD *)(v12 + 4 * v9); /*0x69bf07*/
      if ( v66 < v8 ) /*0x69bf10*/
        goto LABEL_24; /*0x69bf10*/
      if ( !v65 && v8 || v67 <= 0 ) /*0x69bf24*/
        goto LABEL_26; /*0x69bf24*/
      if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v62[2])(&v62, v67 + v8, 0) ) /*0x69bf35*/
      {
LABEL_24:
        v14 = v66++; /*0x69bf44*/
        *((_DWORD *)Block + v14) = *v13; /*0x69bf4d*/
      }
      v8 = v64; /*0x69bf50*/
LABEL_26:
      v7 = *(_DWORD *)(this + 10316); /*0x69bf54*/
      if ( v66 != v7 && ++v49 < v7 ) /*0x69bf6d*/
        continue; /*0x69bf6d*/
      break; /*0x69bf6d*/
    }
  }
  v15 = 0; /*0x69bf73*/
  v58 = 0; /*0x69bf77*/
  v50 = 0; /*0x69bf7b*/
  v59 = 0; /*0x69bf7f*/
  for ( i = v66; v15 < i; v50 = v15 ) /*0x69bf89*/
  {
    if ( !*((_BYTE *)&v58 + v15) ) /*0x69bf8f*/
    {
      v17 = 0; /*0x69bf9f*/
      v18 = (_DWORD *)(*((_DWORD *)Block + v15) + 40); /*0x69bfa4*/
      v61[0] = *v18; /*0x69bfab*/
      v61[1] = v18[1]; /*0x69bfb2*/
      v61[2] = v18[2]; /*0x69bfb9*/
      if ( i > 0 ) /*0x69bfbd*/
      {
        v53[0] = this + 36 * v52 + 11816; /*0x69bfd1*/
        do /*0x69c1f5*/
        {
          if ( v17 != v15 && !*((_BYTE *)&v58 + v17) && NetworkID::Compare((int)v61, *((_DWORD *)Block + v17) + 40) ) /*0x69bff8*/
          {
            v54 = ToWideStringChar(*((char **)Block + v17)); /*0x69c011*/
            v19 = 0; /*0x69c015*/
            v20 = (char **)&g_NetworkPlayerName; /*0x69c017*/
            while ( 1 ) /*0x69c01e*/
            {
              v21 = ToWideStringChar(*v20); /*0x69c01e*/
              if ( !_strcmpi(v54, v21) ) /*0x69c029*/
                break; /*0x69c029*/
              ++v20; /*0x69c039*/
              ++v19; /*0x69c03c*/
              if ( (int)v20 >= (int)&g_PlayerNameListEnd ) /*0x69c043*/
              {
                v54 = 0; /*0x69c045*/
                goto LABEL_39; /*0x69c045*/
              }
            }
            v54 = v19; /*0x69c0f6*/
LABEL_39:
            v56 = ToWideStringChar(*((char **)Block + v50)); /*0x69c04d*/
            v22 = 0; /*0x69c061*/
            v23 = (char **)&g_NetworkPlayerName; /*0x69c063*/
            while ( 1 ) /*0x69c06a*/
            {
              v24 = ToWideStringChar(*v23); /*0x69c06a*/
              if ( !_strcmpi(v56, v24) ) /*0x69c075*/
                break; /*0x69c075*/
              ++v23; /*0x69c081*/
              ++v22; /*0x69c084*/
              if ( (int)v23 >= (int)&g_PlayerNameListEnd ) /*0x69c08b*/
              {
                v22 = 0; /*0x69c08d*/
                break; /*0x69c08d*/
              }
            }
            if ( *(_DWORD *)(this + 4 * (_DWORD)v54 + 12280) == *(_DWORD *)(this + 4 * v22 + 12280) ) /*0x69c0a3*/
            {
              v48 = v55++ + *(_WORD *)(this + 4 * (_DWORD)v54 + 12280); /*0x69c0b9*/
              Network::SetPort((_WORD *)(*((_DWORD *)Block + v17) + 40), v48); /*0x69c0c8*/
              v25 = (char **)Block; /*0x69c0cd*/
              *((_BYTE *)&v58 + v17) = 1; /*0x69c0d1*/
              ToWideStringChar(v25[v17]); /*0x69c0d9*/
            }
            Debug::Log(); /*0x69c0ec*/
            v26 = ToWideStringChar(*((char **)Block + v50)); /*0x69c121*/
            v27 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x69c123*/
            if ( !_strcmpi(v26, v27) ) /*0x69c12a*/
            {
              v56 = (void *)v53[0]; /*0x69c142*/
              v28 = (char *)*((_DWORD *)Block + v17); /*0x69c146*/
              ++v52; /*0x69c14d*/
              v53[0] += 36; /*0x69c151*/
              strcpy((char *)v56, ToWideStringChar(v28)); /*0x69c172*/
            }
            v29 = ToWideStringChar(*((char **)Block + v17)); /*0x69c18c*/
            v30 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x69c18e*/
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
          i = v66; /*0x69c1ee*/
          ++v17; /*0x69c1f2*/
        }
        while ( v17 < v66 ); /*0x69c1f5*/
      }
    }
    ++v15; /*0x69c1fb*/
  }
  if ( *(_DWORD *)(this + 12316) ) /*0x69c208*/
  {
    Debug::Log(); /*0x69c21c*/
    Network::SetPort((_WORD *)(**(_DWORD **)(this + 10304) + 40), *(_WORD *)(this + 12316)); /*0x69c237*/
    v54 = 0; /*0x69c23c*/
    v32 = (char **)&g_NetworkPlayerName; /*0x69c244*/
    while ( 1 ) /*0x69c24e*/
    {
      v33 = *v32; /*0x69c24e*/
      v34 = ToWideStringChar(*(char **)Game_PlayerInfoArray); /*0x69c259*/
      v35 = ToWideStringChar(v33); /*0x69c25b*/
      if ( !_strcmpi(v34, v35) ) /*0x69c262*/
        break; /*0x69c262*/
      ++v32; /*0x69c276*/
      v54 = (char *)v54 + 1; /*0x69c280*/
      if ( (int)v32 >= (int)&g_PlayerNameListEnd ) /*0x69c284*/
      {
        v36 = 0; /*0x69c286*/
        goto LABEL_58; /*0x69c286*/
      }
    }
    v36 = v54; /*0x69c48c*/
LABEL_58:
    Network::SetPort((_WORD *)(*(_DWORD *)(this + 4 * (_DWORD)v36 + 10328) + 40), *(_WORD *)(this + 12316)); /*0x69c288*/
  }
  v37 = 0; /*0x69c2a5*/
  if ( *(int *)(this + 10316) > 0 ) /*0x69c2a9*/
  {
    v38 = (_WORD *)(this + 12410); /*0x69c2ab*/
    do /*0x69c2d7*/
    {
      v39 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(this + 10304) + 4 * v37) + 40); /*0x69c2ba*/
      *v38 = v39; /*0x69c2c1*/
      if ( !v39 ) /*0x69c2c4*/
        *v38 = 1234; /*0x69c2c6*/
      ++v37; /*0x69c2d1*/
      ++v38; /*0x69c2d2*/
    }
    while ( v37 < *(_DWORD *)(this + 10316) ); /*0x69c2d7*/
  }
  v40 = (_DWORD *)(**(_DWORD **)(this + 10304) + 40); /*0x69c2e1*/
  v60[0] = *v40; /*0x69c2e6*/
  v60[1] = v40[1]; /*0x69c2f2*/
  v60[2] = v40[2]; /*0x69c2fd*/
  Network::CopyAddress_Small(&v57); /*0x69c301*/
  v51 = 1; /*0x69c313*/
  if ( *(int *)(this + 10316) > 1 ) /*0x69c317*/
  {
    v41 = 4; /*0x69c31d*/
    do /*0x69c430*/
    {
      if ( NetworkID::Compare((int)v60, *(_DWORD *)(v41 + *(_DWORD *)(this + 10304)) + 40) ) /*0x69c333*/
      {
        ToWideStringChar(*(char **)(v41 + *(_DWORD *)(this + 10304))); /*0x69c349*/
        Debug::Log(); /*0x69c354*/
        v42 = this + 10644; /*0x69c362*/
        v54 = (void *)(this + 10328); /*0x69c368*/
        v55 = 8; /*0x69c36c*/
        do /*0x69c416*/
        {
          v43 = *(char **)v54; /*0x69c381*/
          v56 = ToWideStringChar(*(char **)(v41 + *(_DWORD *)(this + 10304))); /*0x69c38a*/
          v44 = ToWideStringChar(v43); /*0x69c38e*/
          if ( !_strcmpi(v56, v44) ) /*0x69c399*/
          {
            Network::CopyAddress_Small(v53); /*0x69c3ac*/
            v45 = (_DWORD *)(*(_DWORD *)(v41 + *(_DWORD *)(this + 10304)) + 40); /*0x69c3be*/
            NetworkID::Assign(v45, 0, (int)v53, *(_WORD *)v45); /*0x69c3c8*/
            ToWideStringChar(*(char **)(v41 + *(_DWORD *)(this + 10304))); /*0x69c3d6*/
            Network::FormatAddress((unsigned __int16 *)(*(_DWORD *)(v41 + *(_DWORD *)(this + 10304)) + 40), 0); /*0x69c3eb*/
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
    while ( v51 < *(_DWORD *)(this + 10316) ); /*0x69c430*/
  }
  if ( g_NetworkInterface ) /*0x69c440*/
  {
    v47 = (*(int (__thiscall **)(int))(*(_DWORD *)g_NetworkInterface + 112))(g_NetworkInterface); /*0x69c444*/
    LOWORD(v47) = *(_WORD *)(this + 12410); /*0x69c44d*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)g_NetworkInterface + 92))(g_NetworkInterface, v47); /*0x69c457*/
    (*(void (__thiscall **)(int))(*(_DWORD *)g_NetworkInterface + 28))(g_NetworkInterface); /*0x69c462*/
  }
  v62 = &VectorClass<NodeNameType *>::`vftable'; /*0x69c469*/
  if ( Block ) /*0x69c473*/
  {
    if ( v65 ) /*0x69c47b*/
      __3_YAXPAX_Z(Block); /*0x69c47e*/
  }
}



// ==== 0x0069C4A0  _TypeList_W4DiskID::ddtor  this=TypeList  sig=csp ====
void __thiscall SessionClass::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x69c4a6*/
  *(_DWORD *)(this + 16) = 0; /*0x69c4a9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x69c4b0*/
  {
    __3_YAXPAX_Z(v2); /*0x69c4b6*/
    *(_DWORD *)(this + 4) = 0; /*0x69c4be*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x69c4c1*/
  *(_DWORD *)(this + 8) = 0; /*0x69c4c4*/
}



// ==== 0x0069C4D0  _TypeList_W4DiskID::Write  this=TypeList  sig=csp ====
unsigned int __thiscall SessionClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x69c4d0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x69c4e5*/
  else
    return 0; /*0x69c4d7*/
}



// ==== 0x0069C4F0  _VectorClass_W4DiskID::Seek  this=VectorClass  sig=csp ====
int __thiscall SessionClass::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x69c4fa*/
}



// ==== 0x0069C500  _DynamicVectorClass_VWstring::ddtor  this=DynamicVector  sig=csp ====
void __thiscall MapFile::_vt03(int this)
{
  int v2; // eax
  int v3; // ecx
  void *v4; // ebx
  void **v5; // edi
  int v6; // ecx
  int v7; // ebp

  v2 = *(_DWORD *)(this + 4); /*0x69c505*/
  *(_DWORD *)(this + 16) = 0; /*0x69c508*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x69c50f*/
  {
    v3 = *(_DWORD *)(v2 - 4); /*0x69c51a*/
    v4 = (void *)(v2 - 4); /*0x69c51e*/
    v5 = (void **)(v2 + 4 * v3); /*0x69c522*/
    v6 = v3 - 1; /*0x69c525*/
    if ( v6 >= 0 ) /*0x69c526*/
    {
      v7 = v6 + 1; /*0x69c529*/
      do /*0x69c537*/
      {
        DeleteAndZero(--v5); /*0x69c531*/
        --v7; /*0x69c536*/
      }
      while ( v7 ); /*0x69c537*/
    }
    __3_YAXPAX_Z(v4); /*0x69c53b*/
    *(_DWORD *)(this + 4) = 0; /*0x69c547*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x69c54a*/
  *(_DWORD *)(this + 8) = 0; /*0x69c54e*/
}



// ==== 0x0069C560  _DynamicVectorClass_VWstring::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall MapFile::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x69c560*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x69c575*/
  else
    return 0; /*0x69c567*/
}



// ==== 0x0069C580  _VectorClass_VWstring::Clear  this=VectorClass  sig=csp ====
char **__thiscall VectorClass_Wstring::_vt06(_DWORD *this, char **a2, int a3)
{
  String::AssignFromPtr(a2, (const char **)(this->Items + 4 * a3)); /*0x69c592*/
  return a2; /*0x69c599*/
}



// ==== 0x0069C5A0  _DynamicVectorClass_PAVMultiMission::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_GlobalPacketType::sub_69C5A0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x69c5a6*/
  *(_DWORD *)(this + 16) = 0; /*0x69c5a9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x69c5b0*/
  {
    __3_YAXPAX_Z(v2); /*0x69c5b6*/
    *(_DWORD *)(this + 4) = 0; /*0x69c5be*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x69c5c1*/
  *(_DWORD *)(this + 8) = 0; /*0x69c5c4*/
}



// ==== 0x0069C5D0  _DynamicVectorClass_PAVMultiMission::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_GlobalPacketType::sub_69C5D0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x69c5d0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x69c5e5*/
  else
    return 0; /*0x69c5d7*/
}



// ==== 0x0069C5F0  _VectorClass_PAVMultiMission::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MultiMission::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x69c5fa*/
}



// ==== 0x0069C600  _DynamicVectorClass_PAUGlobalPacketType::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_GlobalPacketType::sub_69C600(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x69c606*/
  *(_DWORD *)(this + 16) = 0; /*0x69c609*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x69c610*/
  {
    __3_YAXPAX_Z(v2); /*0x69c616*/
    *(_DWORD *)(this + 4) = 0; /*0x69c61e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x69c621*/
  *(_DWORD *)(this + 8) = 0; /*0x69c624*/
}



// ==== 0x0069C630  _DynamicVectorClass_PAUGlobalPacketType::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_GlobalPacketType::sub_69C630(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x69c630*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x69c645*/
  else
    return 0; /*0x69c637*/
}



// ==== 0x0069C650  _VectorClass_PAUGlobalPacketType::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_GlobalPacketType::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x69c65a*/
}



// ==== 0x0069C660  VectorClass_ptr_GlobalPacketType::Destroy_1  this=VectorClass_ptr_GlobalPacketType  sig=csp ====
void __thiscall VectorClass_ptr_GlobalPacketType::sub_69C660(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x69c666*/
  *(_DWORD *)(this + 16) = 0; /*0x69c669*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x69c670*/
  {
    __3_YAXPAX_Z(v2); /*0x69c676*/
    *(_DWORD *)(this + 4) = 0; /*0x69c67e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x69c681*/
  *(_DWORD *)(this + 8) = 0; /*0x69c684*/
}



// ==== 0x0069C690  VectorClass_ptr_GlobalPacketType::GetItemIndex_1  this=VectorClass_ptr_GlobalPacketType  sig=csp ====
unsigned int __thiscall VectorClass_ptr_GlobalPacketType::sub_69C690(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x69c690*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x69c6a5*/
  else
    return 0; /*0x69c697*/
}



// ==== 0x0069C6B0  _VectorClass_PAVPhoneEntryClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PhoneEntryClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x69c6ba*/
}



// ==== 0x0069C6C0  _TypeList_W4DiskID::QueryInterface  this=TypeList  sig=csp ====
_DWORD *__thiscall SessionClass::_vt00(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x69c6c3*/
  *Block = &VectorClass<enum DiskID>::`vftable'; /*0x69c6c6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x69c6d0*/
  {
    __3_YAXPAX_Z(v3); /*0x69c6d8*/
    *(Block + 1) = 0; /*0x69c6e0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x69c6eb*/
  *(Block + 2) = 0; /*0x69c6f1*/
  if ( (a2 & 1) != 0 ) /*0x69c6f8*/
    __3_YAXPAX_Z(Block); /*0x69c6fb*/
  return Block; /*0x69c705*/
}



// ==== 0x0069C710  _VectorClass_W4DiskID::AddRef  this=VectorClass  sig=csp ====
char __thiscall SessionClass::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x69c712*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x69c71d*/
  {
    v3 = 0; /*0x69c71f*/
    if ( v2 <= 0 ) /*0x69c723*/
      return 1; /*0x69c743*/
    v4 = (_DWORD *)this->Items; /*0x69c725*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x69c72b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x69c734*/
    {
      ++v3; /*0x69c736*/
      ++v4; /*0x69c737*/
      if ( v3 >= v2 ) /*0x69c73c*/
        return 1; /*0x69c73c*/
    }
  }
  return 0; /*0x69c73e*/
}



// ==== 0x0069C750  _VectorClass_W4DiskID::addPlayer  this=VectorClass  sig=csp ====
char __thiscall SessionClass::sub_69C750(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x69c75c*/
  {
    this->IsInitialized = 0; /*0x69c766*/
    if ( a3 ) /*0x69c76c*/
      v4 = a3; /*0x69c782*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x69c77e*/
    this->IsInitialized = 1; /*0x69c786*/
    if ( v4 ) /*0x69c78a*/
    {
      if ( this->Items ) /*0x69c795*/
      {
        v6 = this->Capacity; /*0x69c79c*/
        if ( a2 < v6 ) /*0x69c7a1*/
          v6 = a2; /*0x69c7a3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x69c7a9*/
          ++i; /*0x69c7ae*/
        if ( this->IsAllocated ) /*0x69c7bb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x69c7c6*/
          this->Items = 0; /*0x69c7ce*/
        }
      }
      this->Items = v4; /*0x69c7d7*/
      this->Capacity = a2; /*0x69c7df*/
      this->IsAllocated = a3 == 0; /*0x69c7e2*/
      return 1; /*0x69c7e8*/
    }
    else
    {
      return 0; /*0x69c78f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x69c7f2*/
    return 1; /*0x69c7f8*/
  }
}



// ==== 0x0069C800  _VectorClass_W4DiskID::removePlayer  this=VectorClass  sig=csp ====
void __thiscall SessionClass::sub_69C800(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x69c80d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x69c813*/
    *(_DWORD *)(this + 4) = 0; /*0x69c81b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x69c81e*/
  *(_DWORD *)(this + 8) = 0; /*0x69c821*/
}



// ==== 0x0069C830  _VectorClass_W4DiskID::findPlayer  this=VectorClass  sig=csp ====
int __thiscall SessionClass::sub_69C830(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x69c830*/
    return 0; /*0x69c838*/
  v3 = *(_DWORD *)(this + 8); /*0x69c83e*/
  result = 0; /*0x69c841*/
  if ( v3 <= 0 ) /*0x69c845*/
    return -1; /*0x69c85c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x69c84b*/
  {
    if ( ++result >= v3 ) /*0x69c85a*/
      return -1; /*0x69c85a*/
  }
  return result; /*0x69c83a*/
}



// ==== 0x0069C870  _VectorClass_W4DiskID::updatePlayer  this=VectorClass  sig=csp ====
unsigned int __thiscall SessionClass::sub_69C870(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x69c870*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x69c885*/
  else
    return 0; /*0x69c877*/
}



// ==== 0x0069C890  _TypeList_W4DiskID::Release  this=TypeList  sig=csp ====
char __thiscall SessionClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x69c89c*/
  {
    this->IsInitialized = 0; /*0x69c8a2*/
    if ( a3 ) /*0x69c8a8*/
      v4 = a3; /*0x69c8be*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x69c8ba*/
    this->IsInitialized = 1; /*0x69c8c2*/
    if ( !v4 ) /*0x69c8c6*/
      return 0; /*0x69c93a*/
    if ( this->Items ) /*0x69c8c8*/
    {
      v5 = this->Capacity; /*0x69c8cf*/
      if ( a2 < v5 ) /*0x69c8d4*/
        v5 = a2; /*0x69c8d6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x69c8dc*/
        ++i; /*0x69c8e1*/
      if ( this->IsAllocated ) /*0x69c8ee*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x69c8f9*/
        this->Items = 0; /*0x69c901*/
      }
    }
    this->Items = v4; /*0x69c90a*/
    this->Capacity = a2; /*0x69c912*/
    this->IsAllocated = a3 == 0; /*0x69c915*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x69c91e*/
  }
  v7 = this->Capacity; /*0x69c921*/
  if ( v7 < this->Items ) /*0x69c929*/
    this->Items = v7; /*0x69c92b*/
  return 1; /*0x69c92e*/
}



// ==== 0x0069C940  _TypeList_W4DiskID::Read  this=TypeList  sig=csp ====
int __thiscall SessionClass::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x69c940*/
  result = 0; /*0x69c943*/
  if ( v2 <= 0 ) /*0x69c948*/
    return -1; /*0x69c95f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x69c94e*/
  {
    if ( ++result >= v2 ) /*0x69c95d*/
      return -1; /*0x69c95d*/
  }
  return result; /*0x69c962*/
}



// ==== 0x0069C970  _VectorClass_VWstring::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_Wstring::_vt01(int *this, int a2)
{
  int v3; // eax
  int v4; // esi

  v3 = this->Capacity; /*0x69c97c*/
  if ( v3 == *(_DWORD *)(a2 + 8) ) /*0x69c981*/
  {
    v4 = 0; /*0x69c983*/
    if ( v3 <= 0 ) /*0x69c987*/
      return 1; /*0x69c9b1*/
    while ( !VectorClass_Wstring::SetCapacity( /*0x69c9a2*/
               (const char **)(4 * v4 + this->Items),
               (const char **)(4 * v4 + *(_DWORD *)(a2 + 4))) )
    {
      if ( ++v4 >= this->Capacity ) /*0x69c9aa*/
        return 1; /*0x69c9aa*/
    }
  }
  return 0; /*0x69c9ac*/
}



// ==== 0x0069C9C0  _VectorClass_VWstring::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_Wstring::_vt02(_BYTE *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // esi
  _DWORD *v8; // esi
  int i; // esi
  int v11; // ecx
  int v12; // eax
  void *v13; // edx
  void **v14; // esi
  int v15; // eax
  int v16; // ebp
  int v17; // [esp+10h] [ebp-4h]
  int v18; // [esp+10h] [ebp-4h]
  void *v19; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x69c9c3*/
  if ( a2 ) /*0x69c9cd*/
  {
    this->IsInitialized = 0; /*0x69c9d7*/
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
      v5 = __2_YAPAXI_Z(4 * a2 + 4); /*0x69c9e7*/
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
    this->IsInitialized = 1; /*0x69ca4b*/
    if ( v6 ) /*0x69ca4f*/
    {
      if ( this->Items ) /*0x69ca5b*/
      {
        if ( a2 >= this->Capacity ) /*0x69ca67*/
          v3 = this->Capacity; /*0x69ca69*/
        for ( i = 0; i < v3; ++i ) /*0x69ca6f*/
          String::Reassign((char **)&v6[i], (const char **)(4 * i + this->Items)); /*0x69ca81*/
        if ( this->IsAllocated ) /*0x69ca8b*/
        {
          v11 = this->Items; /*0x69ca92*/
          if ( v11 ) /*0x69ca97*/
          {
            v12 = *(_DWORD *)(v11 - 4); /*0x69ca99*/
            v13 = (void *)(v11 - 4); /*0x69ca9c*/
            v19 = (void *)(v11 - 4); /*0x69ca9f*/
            v14 = (void **)(v11 + 4 * v12); /*0x69caa3*/
            v15 = v12 - 1; /*0x69caa6*/
            if ( v15 >= 0 ) /*0x69caa7*/
            {
              v16 = v15 + 1; /*0x69caa9*/
              do /*0x69cab7*/
              {
                DeleteAndZero(--v14); /*0x69cab1*/
                --v16; /*0x69cab6*/
              }
              while ( v16 ); /*0x69cab7*/
              v13 = v19; /*0x69cab9*/
            }
            __3_YAXPAX_Z(v13); /*0x69cabe*/
          }
          this->Items = 0; /*0x69cac6*/
        }
        v3 = a2; /*0x69cacd*/
      }
      this->Items = v6; /*0x69cadc*/
      this->Capacity = v3; /*0x69cadf*/
      this->IsAllocated = a3 == 0; /*0x69cae2*/
      return 1; /*0x69cae8*/
    }
    else
    {
      return 0; /*0x69ca54*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_BYTE *))(this->IsInitialized)(this); /*0x69caf3*/
    return 1; /*0x69caf9*/
  }
}



// ==== 0x0069CB00  _VectorClass_VWstring::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_Wstring::_vt03(int this)
{
  int v2; // eax
  int v3; // ecx
  void *v4; // ebx
  void **v5; // esi
  int v6; // ecx
  int v7; // ebp

  v2 = *(_DWORD *)(this + 4); /*0x69cb05*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x69cb0c*/
  {
    v3 = *(_DWORD *)(v2 - 4); /*0x69cb17*/
    v4 = (void *)(v2 - 4); /*0x69cb1b*/
    v5 = (void **)(v2 + 4 * v3); /*0x69cb1f*/
    v6 = v3 - 1; /*0x69cb22*/
    if ( v6 >= 0 ) /*0x69cb23*/
    {
      v7 = v6 + 1; /*0x69cb26*/
      do /*0x69cb34*/
      {
        DeleteAndZero(--v5); /*0x69cb2e*/
        --v7; /*0x69cb33*/
      }
      while ( v7 ); /*0x69cb34*/
    }
    __3_YAXPAX_Z(v4); /*0x69cb38*/
    *(_DWORD *)(this + 4) = 0; /*0x69cb44*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x69cb47*/
  *(_DWORD *)(this + 8) = 0; /*0x69cb4b*/
}



// ==== 0x0069CB50  _VectorClass_VWstring::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_Wstring::_vt04(int this, const char **a2)
{
  int v4; // esi

  if ( !*(_BYTE *)(this + 12) ) /*0x69cb55*/
    return 0; /*0x69cb5e*/
  v4 = 0; /*0x69cb67*/
  if ( *(int *)(this + 8) <= 0 ) /*0x69cb6b*/
    return -1; /*0x69cb89*/
  while ( !String::Compare((const char **)(*(_DWORD *)(this + 4) + 4 * v4), a2) ) /*0x69cb7f*/
  {
    if ( ++v4 >= *(_DWORD *)(this + 8) ) /*0x69cb87*/
      return -1; /*0x69cb87*/
  }
  return v4; /*0x69cb5c*/
}



// ==== 0x0069CBA0  _VectorClass_VWstring::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_Wstring::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x69cba0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x69cbb5*/
  else
    return 0; /*0x69cba7*/
}



// ==== 0x0069CBC0  _DynamicVectorClass_VWstring::Release  this=DynamicVector  sig=csp ====
char __thiscall MapFile::_vt02(void *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // edi
  _DWORD *v8; // edi
  int i; // edi
  int v10; // eax
  void *v11; // edi
  int v12; // eax
  int v14; // [esp+10h] [ebp-4h]
  int v15; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x69cbc3*/
  if ( a2 ) /*0x69cbcd*/
  {
    this->IsInitialized = 0; /*0x69cbd7*/
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
      v5 = __2_YAPAXI_Z(4 * a2 + 4); /*0x69cbe7*/
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
    this->IsInitialized = 1; /*0x69cc4b*/
    if ( !v6 ) /*0x69cc4f*/
      return 0; /*0x69ccf2*/
    if ( this->Items ) /*0x69cc55*/
    {
      if ( a2 >= this->q008 ) /*0x69cc61*/
        v3 = this->q008; /*0x69cc63*/
      for ( i = 0; i < v3; ++i ) /*0x69cc69*/
        String::Reassign((char **)&v6[i], (const char **)(4 * i + this->Items)); /*0x69cc7b*/
      if ( this->IsAllocated ) /*0x69cc85*/
      {
        v10 = this->Items; /*0x69cc8c*/
        if ( v10 ) /*0x69cc91*/
        {
          v11 = (void *)(v10 - 4); /*0x69cc96*/
          Array::ForEachReverse(v10, 4, *(_DWORD *)(v10 - 4), (int (__thiscall *)(int))DeleteAndZero); /*0x69cca2*/
          __3_YAXPAX_Z(v11); /*0x69cca8*/
        }
        this->Items = 0; /*0x69ccb0*/
      }
      v3 = a2; /*0x69ccb7*/
    }
    this->Items = v6; /*0x69ccc6*/
    this->q008 = v3; /*0x69ccc9*/
    this->IsAllocated = a3 == 0; /*0x69cccc*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x69ccd5*/
  }
  v12 = this->q008; /*0x69ccd8*/
  if ( v12 < this->Items ) /*0x69cce0*/
    this->Items = v12; /*0x69cce2*/
  return 1; /*0x69cce5*/
}



// ==== 0x0069CD00  _DynamicVectorClass_VWstring::Read  this=DynamicVector  sig=csp ====
int __thiscall MapFile::_vt04(_DWORD *this, const char **a2)
{
  int v3; // esi

  v3 = 0; /*0x69cd05*/
  if ( (int)this->q010 <= 0 ) /*0x69cd0c*/
    return -1; /*0x69cd2a*/
  while ( !String::Compare((const char **)(this->Items + 4 * v3), a2) ) /*0x69cd20*/
  {
    if ( ++v3 >= this->q010 ) /*0x69cd28*/
      return -1; /*0x69cd28*/
  }
  return v3; /*0x69cd2a*/
}



// ==== 0x0069CD40  _VectorClass_PAVMultiMission::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MultiMission::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x69cd42*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x69cd4d*/
  {
    v3 = 0; /*0x69cd4f*/
    if ( v2 <= 0 ) /*0x69cd53*/
      return 1; /*0x69cd73*/
    v4 = (_DWORD *)this->Items; /*0x69cd55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x69cd5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x69cd64*/
    {
      ++v3; /*0x69cd66*/
      ++v4; /*0x69cd67*/
      if ( v3 >= v2 ) /*0x69cd6c*/
        return 1; /*0x69cd6c*/
    }
  }
  return 0; /*0x69cd6e*/
}



// ==== 0x0069CD80  _VectorClass_PAVMultiMission::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MultiMission::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x69cd8c*/
  {
    this->IsInitialized = 0; /*0x69cd96*/
    if ( a3 ) /*0x69cd9c*/
      v4 = a3; /*0x69cdb2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x69cdae*/
    this->IsInitialized = 1; /*0x69cdb6*/
    if ( v4 ) /*0x69cdba*/
    {
      if ( this->Items ) /*0x69cdc5*/
      {
        v6 = this->Capacity; /*0x69cdcc*/
        if ( a2 < v6 ) /*0x69cdd1*/
          v6 = a2; /*0x69cdd3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x69cdd9*/
          ++i; /*0x69cdde*/
        if ( this->IsAllocated ) /*0x69cdeb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x69cdf6*/
          this->Items = 0; /*0x69cdfe*/
        }
      }
      this->Items = v4; /*0x69ce07*/
      this->Capacity = a2; /*0x69ce0f*/
      this->IsAllocated = a3 == 0; /*0x69ce12*/
      return 1; /*0x69ce18*/
    }
    else
    {
      return 0; /*0x69cdbf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x69ce22*/
    return 1; /*0x69ce28*/
  }
}



// ==== 0x0069CE30  _VectorClass_PAVMultiMission::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MultiMission::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x69ce3d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x69ce43*/
    *(_DWORD *)(this + 4) = 0; /*0x69ce4b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x69ce4e*/
  *(_DWORD *)(this + 8) = 0; /*0x69ce51*/
}



// ==== 0x0069CE60  _VectorClass_PAVMultiMission::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MultiMission::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x69ce60*/
    return 0; /*0x69ce68*/
  v3 = *(_DWORD *)(this + 8); /*0x69ce6e*/
  result = 0; /*0x69ce71*/
  if ( v3 <= 0 ) /*0x69ce75*/
    return -1; /*0x69ce8c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x69ce7b*/
  {
    if ( ++result >= v3 ) /*0x69ce8a*/
      return -1; /*0x69ce8a*/
  }
  return result; /*0x69ce6a*/
}



// ==== 0x0069CEA0  _VectorClass_PAVMultiMission::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MultiMission::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x69cea0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x69ceb5*/
  else
    return 0; /*0x69cea7*/
}



// ==== 0x0069CEC0  _DynamicVectorClass_PAVMultiMission::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_GlobalPacketType::sub_69CEC0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x69cecc*/
  {
    this->IsInitialized = 0; /*0x69ced2*/
    if ( a3 ) /*0x69ced8*/
      v4 = a3; /*0x69ceee*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x69ceea*/
    this->IsInitialized = 1; /*0x69cef2*/
    if ( !v4 ) /*0x69cef6*/
      return 0; /*0x69cf6a*/
    if ( this->Items ) /*0x69cef8*/
    {
      v5 = this->q008; /*0x69ceff*/
      if ( a2 < v5 ) /*0x69cf04*/
        v5 = a2; /*0x69cf06*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x69cf0c*/
        ++i; /*0x69cf11*/
      if ( this->IsAllocated ) /*0x69cf1e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x69cf29*/
        this->Items = 0; /*0x69cf31*/
      }
    }
    this->Items = v4; /*0x69cf3a*/
    this->q008 = a2; /*0x69cf42*/
    this->IsAllocated = a3 == 0; /*0x69cf45*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x69cf4e*/
  }
  v7 = this->q008; /*0x69cf51*/
  if ( v7 < this->Items ) /*0x69cf59*/
    this->Items = v7; /*0x69cf5b*/
  return 1; /*0x69cf5e*/
}



// ==== 0x0069CF70  _DynamicVectorClass_PAVMultiMission::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_GlobalPacketType::sub_69CF70(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x69cf70*/
  result = 0; /*0x69cf73*/
  if ( v2 <= 0 ) /*0x69cf78*/
    return -1; /*0x69cf8f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x69cf7e*/
  {
    if ( ++result >= v2 ) /*0x69cf8d*/
      return -1; /*0x69cf8d*/
  }
  return result; /*0x69cf92*/
}



// ==== 0x0069CFA0  _VectorClass_PAUGlobalPacketType::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_GlobalPacketType::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x69cfa2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x69cfad*/
  {
    v3 = 0; /*0x69cfaf*/
    if ( v2 <= 0 ) /*0x69cfb3*/
      return 1; /*0x69cfd3*/
    v4 = (_DWORD *)this->Items; /*0x69cfb5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x69cfbb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x69cfc4*/
    {
      ++v3; /*0x69cfc6*/
      ++v4; /*0x69cfc7*/
      if ( v3 >= v2 ) /*0x69cfcc*/
        return 1; /*0x69cfcc*/
    }
  }
  return 0; /*0x69cfce*/
}



// ==== 0x0069CFE0  _VectorClass_PAUGlobalPacketType::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_GlobalPacketType::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x69cfec*/
  {
    this->IsInitialized = 0; /*0x69cff6*/
    if ( a3 ) /*0x69cffc*/
      v4 = a3; /*0x69d012*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x69d00e*/
    this->IsInitialized = 1; /*0x69d016*/
    if ( v4 ) /*0x69d01a*/
    {
      if ( this->Items ) /*0x69d025*/
      {
        v6 = this->Capacity; /*0x69d02c*/
        if ( a2 < v6 ) /*0x69d031*/
          v6 = a2; /*0x69d033*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x69d039*/
          ++i; /*0x69d03e*/
        if ( this->IsAllocated ) /*0x69d04b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x69d056*/
          this->Items = 0; /*0x69d05e*/
        }
      }
      this->Items = v4; /*0x69d067*/
      this->Capacity = a2; /*0x69d06f*/
      this->IsAllocated = a3 == 0; /*0x69d072*/
      return 1; /*0x69d078*/
    }
    else
    {
      return 0; /*0x69d01f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x69d082*/
    return 1; /*0x69d088*/
  }
}



// ==== 0x0069D090  _VectorClass_PAUGlobalPacketType::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_GlobalPacketType::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x69d09d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x69d0a3*/
    *(_DWORD *)(this + 4) = 0; /*0x69d0ab*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x69d0ae*/
  *(_DWORD *)(this + 8) = 0; /*0x69d0b1*/
}



// ==== 0x0069D0C0  _VectorClass_PAUGlobalPacketType::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_GlobalPacketType::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x69d0c0*/
    return 0; /*0x69d0c8*/
  v3 = *(_DWORD *)(this + 8); /*0x69d0ce*/
  result = 0; /*0x69d0d1*/
  if ( v3 <= 0 ) /*0x69d0d5*/
    return -1; /*0x69d0ec*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x69d0db*/
  {
    if ( ++result >= v3 ) /*0x69d0ea*/
      return -1; /*0x69d0ea*/
  }
  return result; /*0x69d0ca*/
}



// ==== 0x0069D100  _VectorClass_PAUGlobalPacketType::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_GlobalPacketType::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x69d100*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x69d115*/
  else
    return 0; /*0x69d107*/
}



// ==== 0x0069D120  _DynamicVectorClass_PAUGlobalPacketType::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_GlobalPacketType::sub_69D120(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x69d12c*/
  {
    this->IsInitialized = 0; /*0x69d132*/
    if ( a3 ) /*0x69d138*/
      v4 = a3; /*0x69d14e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x69d14a*/
    this->IsInitialized = 1; /*0x69d152*/
    if ( !v4 ) /*0x69d156*/
      return 0; /*0x69d1ca*/
    if ( this->Items ) /*0x69d158*/
    {
      v5 = this->q008; /*0x69d15f*/
      if ( a2 < v5 ) /*0x69d164*/
        v5 = a2; /*0x69d166*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x69d16c*/
        ++i; /*0x69d171*/
      if ( this->IsAllocated ) /*0x69d17e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x69d189*/
        this->Items = 0; /*0x69d191*/
      }
    }
    this->Items = v4; /*0x69d19a*/
    this->q008 = a2; /*0x69d1a2*/
    this->IsAllocated = a3 == 0; /*0x69d1a5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x69d1ae*/
  }
  v7 = this->q008; /*0x69d1b1*/
  if ( v7 < this->Items ) /*0x69d1b9*/
    this->Items = v7; /*0x69d1bb*/
  return 1; /*0x69d1be*/
}



// ==== 0x0069D1D0  _DynamicVectorClass_PAUGlobalPacketType::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_GlobalPacketType::sub_69D1D0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x69d1d0*/
  result = 0; /*0x69d1d3*/
  if ( v2 <= 0 ) /*0x69d1d8*/
    return -1; /*0x69d1ef*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x69d1de*/
  {
    if ( ++result >= v2 ) /*0x69d1ed*/
      return -1; /*0x69d1ed*/
  }
  return result; /*0x69d1f2*/
}



// ==== 0x0069D200  _VectorClass_PAVPhoneEntryClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PhoneEntryClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x69d202*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x69d20d*/
  {
    v3 = 0; /*0x69d20f*/
    if ( v2 <= 0 ) /*0x69d213*/
      return 1; /*0x69d233*/
    v4 = (_DWORD *)this->Items; /*0x69d215*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x69d21b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x69d224*/
    {
      ++v3; /*0x69d226*/
      ++v4; /*0x69d227*/
      if ( v3 >= v2 ) /*0x69d22c*/
        return 1; /*0x69d22c*/
    }
  }
  return 0; /*0x69d22e*/
}



// ==== 0x0069D240  _VectorClass_PAVPhoneEntryClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PhoneEntryClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x69d24c*/
  {
    this->IsInitialized = 0; /*0x69d256*/
    if ( a3 ) /*0x69d25c*/
      v4 = a3; /*0x69d272*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x69d26e*/
    this->IsInitialized = 1; /*0x69d276*/
    if ( v4 ) /*0x69d27a*/
    {
      if ( this->Items ) /*0x69d285*/
      {
        v6 = this->Capacity; /*0x69d28c*/
        if ( a2 < v6 ) /*0x69d291*/
          v6 = a2; /*0x69d293*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x69d299*/
          ++i; /*0x69d29e*/
        if ( this->IsAllocated ) /*0x69d2ab*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x69d2b6*/
          this->Items = 0; /*0x69d2be*/
        }
      }
      this->Items = v4; /*0x69d2c7*/
      this->Capacity = a2; /*0x69d2cf*/
      this->IsAllocated = a3 == 0; /*0x69d2d2*/
      return 1; /*0x69d2d8*/
    }
    else
    {
      return 0; /*0x69d27f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x69d2e2*/
    return 1; /*0x69d2e8*/
  }
}



// ==== 0x0069D2F0  _VectorClass_PAVPhoneEntryClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_PhoneEntryClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x69d2fd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x69d303*/
    *(_DWORD *)(this + 4) = 0; /*0x69d30b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x69d30e*/
  *(_DWORD *)(this + 8) = 0; /*0x69d311*/
}



// ==== 0x0069D320  _VectorClass_PAVPhoneEntryClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PhoneEntryClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x69d320*/
    return 0; /*0x69d328*/
  v3 = *(_DWORD *)(this + 8); /*0x69d32e*/
  result = 0; /*0x69d331*/
  if ( v3 <= 0 ) /*0x69d335*/
    return -1; /*0x69d34c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x69d33b*/
  {
    if ( ++result >= v3 ) /*0x69d34a*/
      return -1; /*0x69d34a*/
  }
  return result; /*0x69d32a*/
}



// ==== 0x0069D360  _VectorClass_PAVPhoneEntryClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_PhoneEntryClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x69d360*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x69d375*/
  else
    return 0; /*0x69d367*/
}



// ==== 0x0069D380  VectorClass_ptr_GlobalPacketType::SetCapacity_1  this=VectorClass_ptr_GlobalPacketType  sig=csp ====
char __thiscall VectorClass_ptr_GlobalPacketType::sub_69D380(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x69d38c*/
  {
    this->IsInitialized = 0; /*0x69d392*/
    if ( a3 ) /*0x69d398*/
      v4 = a3; /*0x69d3ae*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x69d3aa*/
    this->IsInitialized = 1; /*0x69d3b2*/
    if ( !v4 ) /*0x69d3b6*/
      return 0; /*0x69d42a*/
    if ( this->Items ) /*0x69d3b8*/
    {
      v5 = this->Capacity; /*0x69d3bf*/
      if ( a2 < v5 ) /*0x69d3c4*/
        v5 = a2; /*0x69d3c6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x69d3cc*/
        ++i; /*0x69d3d1*/
      if ( this->IsAllocated ) /*0x69d3de*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x69d3e9*/
        this->Items = 0; /*0x69d3f1*/
      }
    }
    this->Items = v4; /*0x69d3fa*/
    this->Capacity = a2; /*0x69d402*/
    this->IsAllocated = a3 == 0; /*0x69d405*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x69d40e*/
  }
  v7 = this->Capacity; /*0x69d411*/
  if ( v7 < this->Items ) /*0x69d419*/
    this->Items = v7; /*0x69d41b*/
  return 1; /*0x69d41e*/
}



// ==== 0x0069D430  VectorClass_ptr_GlobalPacketType::FindItemIndex_1  this=VectorClass_ptr_GlobalPacketType  sig=csp ====
int __thiscall VectorClass_ptr_GlobalPacketType::sub_69D430(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x69d430*/
  result = 0; /*0x69d433*/
  if ( v2 <= 0 ) /*0x69d438*/
    return -1; /*0x69d44f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x69d43e*/
  {
    if ( ++result >= v2 ) /*0x69d44d*/
      return -1; /*0x69d44d*/
  }
  return result; /*0x69d452*/
}



// ==== 0x0069D460  _VectorClass_W4DiskID::validateGame  this=VectorClass  sig=csp ====
_DWORD *__thiscall SessionClass::sub_69D460(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x69d463*/
  *Block = &VectorClass<enum DiskID>::`vftable'; /*0x69d466*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x69d470*/
  {
    __3_YAXPAX_Z(v3); /*0x69d478*/
    *(Block + 1) = 0; /*0x69d480*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x69d48b*/
  *(Block + 2) = 0; /*0x69d491*/
  if ( (a2 & 1) != 0 ) /*0x69d498*/
    __3_YAXPAX_Z(Block); /*0x69d49b*/
  return Block; /*0x69d4a5*/
}



// ==== 0x0069D4B0  _VectorClass_VWstring::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_Wstring::_vt00(_DWORD *Block, char a2)
{
  int v3; // eax
  int v4; // ecx
  void *v5; // ebx
  void **v6; // esi
  int v7; // ecx
  int v8; // ebp

  v3 = *(Block + 1); /*0x69d4b3*/
  *Block = &VectorClass<Wstring>::`vftable'; /*0x69d4b6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x69d4c0*/
  {
    v4 = *(_DWORD *)(v3 - 4); /*0x69d4cb*/
    v5 = (void *)(v3 - 4); /*0x69d4cf*/
    v6 = (void **)(v3 + 4 * v4); /*0x69d4d3*/
    v7 = v4 - 1; /*0x69d4d6*/
    if ( v7 >= 0 ) /*0x69d4d7*/
    {
      v8 = v7 + 1; /*0x69d4da*/
      do /*0x69d4e8*/
      {
        DeleteAndZero(--v6); /*0x69d4e2*/
        --v8; /*0x69d4e7*/
      }
      while ( v8 ); /*0x69d4e8*/
    }
    __3_YAXPAX_Z(v5); /*0x69d4ec*/
    *(Block + 1) = 0; /*0x69d4f6*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x69d501*/
  *(Block + 2) = 0; /*0x69d507*/
  if ( (a2 & 1) != 0 ) /*0x69d50e*/
    __3_YAXPAX_Z(Block); /*0x69d511*/
  return Block; /*0x69d51b*/
}



// ==== 0x0069D520  _DynamicVectorClass_VWstring::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall MapFile::_vt00(_DWORD *Block, char a2)
{
  int v3; // eax
  int v4; // ecx
  void *v5; // ebx
  void **v6; // esi
  int v7; // ecx
  int v8; // ebp

  v3 = *(Block + 1); /*0x69d523*/
  *Block = &VectorClass<Wstring>::`vftable'; /*0x69d526*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x69d530*/
  {
    v4 = *(_DWORD *)(v3 - 4); /*0x69d53b*/
    v5 = (void *)(v3 - 4); /*0x69d53f*/
    v6 = (void **)(v3 + 4 * v4); /*0x69d543*/
    v7 = v4 - 1; /*0x69d546*/
    if ( v7 >= 0 ) /*0x69d547*/
    {
      v8 = v7 + 1; /*0x69d54a*/
      do /*0x69d558*/
      {
        DeleteAndZero(--v6); /*0x69d552*/
        --v8; /*0x69d557*/
      }
      while ( v8 ); /*0x69d558*/
    }
    __3_YAXPAX_Z(v5); /*0x69d55c*/
    *(Block + 1) = 0; /*0x69d566*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x69d571*/
  *(Block + 2) = 0; /*0x69d577*/
  if ( (a2 & 1) != 0 ) /*0x69d57e*/
    __3_YAXPAX_Z(Block); /*0x69d581*/
  return Block; /*0x69d58b*/
}



// ==== 0x0069D590  _VectorClass_PAVMultiMission::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_MultiMission::_vt00(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x69d593*/
  *Block = &VectorClass<MultiMission *>::`vftable'; /*0x69d596*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x69d5a0*/
  {
    __3_YAXPAX_Z(v3); /*0x69d5a8*/
    *(Block + 1) = 0; /*0x69d5b0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x69d5bb*/
  *(Block + 2) = 0; /*0x69d5c1*/
  if ( (a2 & 1) != 0 ) /*0x69d5c8*/
    __3_YAXPAX_Z(Block); /*0x69d5cb*/
  return Block; /*0x69d5d5*/
}



// ==== 0x0069D5E0  _DynamicVectorClass_PAVMultiMission::Constructor_VectorClass_MultiMission___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_GlobalPacketType::sub_69D5E0(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x69d5e3*/
  *Block = &VectorClass<MultiMission *>::`vftable'; /*0x69d5e6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x69d5f0*/
  {
    __3_YAXPAX_Z(v3); /*0x69d5f8*/
    *(Block + 1) = 0; /*0x69d600*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x69d60b*/
  *(Block + 2) = 0; /*0x69d611*/
  if ( (a2 & 1) != 0 ) /*0x69d618*/
    __3_YAXPAX_Z(Block); /*0x69d61b*/
  return Block; /*0x69d625*/
}



// ==== 0x0069D630  _VectorClass_PAUGlobalPacketType::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_GlobalPacketType::_vt00(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x69d633*/
  *Block = &VectorClass<GlobalPacketType *>::`vftable'; /*0x69d636*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x69d640*/
  {
    __3_YAXPAX_Z(v3); /*0x69d648*/
    *(Block + 1) = 0; /*0x69d650*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x69d65b*/
  *(Block + 2) = 0; /*0x69d661*/
  if ( (a2 & 1) != 0 ) /*0x69d668*/
    __3_YAXPAX_Z(Block); /*0x69d66b*/
  return Block; /*0x69d675*/
}



// ==== 0x0069D680  _DynamicVectorClass_PAUGlobalPacketType::Constructor_VectorClass_GlobalPacketType___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_GlobalPacketType::sub_69D680(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x69d683*/
  *Block = &VectorClass<GlobalPacketType *>::`vftable'; /*0x69d686*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x69d690*/
  {
    __3_YAXPAX_Z(v3); /*0x69d698*/
    *(Block + 1) = 0; /*0x69d6a0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x69d6ab*/
  *(Block + 2) = 0; /*0x69d6b1*/
  if ( (a2 & 1) != 0 ) /*0x69d6b8*/
    __3_YAXPAX_Z(Block); /*0x69d6bb*/
  return Block; /*0x69d6c5*/
}



// ==== 0x0069D6D0  _VectorClass_PAVPhoneEntryClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_PhoneEntryClass::_vt00(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x69d6d3*/
  *Block = &VectorClass<PhoneEntryClass *>::`vftable'; /*0x69d6d6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x69d6e0*/
  {
    __3_YAXPAX_Z(v3); /*0x69d6e8*/
    *(Block + 1) = 0; /*0x69d6f0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x69d6fb*/
  *(Block + 2) = 0; /*0x69d701*/
  if ( (a2 & 1) != 0 ) /*0x69d708*/
    __3_YAXPAX_Z(Block); /*0x69d70b*/
  return Block; /*0x69d715*/
}



// ==== 0x0069D770  MapFile::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_69D770(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x69d77b*/
  this->Capacity = a2; /*0x69d77e*/
  this->q030 = 1; /*0x69d781*/
  this->q034 = 0; /*0x69d785*/
  *this = &VectorClass<enum DiskID>::`vftable'; /*0x69d788*/
  if ( a2 ) /*0x69d78e*/
  {
    if ( a3 ) /*0x69d796*/
    {
      this->Items = a3; /*0x69d798*/
      return this; /*0x69d79e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x69d7ad*/
    this->q034 = 1; /*0x69d7b0*/
  }
  return this; /*0x69d79d*/
}



// ==== 0x0069D7C0  VectorClass::WstringConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_Wstring_Constructor(_DWORD *this, int a2, _DWORD *a3)
{
  int v3; // esi
  _DWORD *v5; // ebp
  _DWORD *v7; // eax
  _DWORD *v8; // ebx
  _DWORD *v9; // ebp

  v3 = a2; /*0x69d7c3*/
  this->Items = 0; /*0x69d7cc*/
  this->Capacity = a2; /*0x69d7d3*/
  this->q030 = 1; /*0x69d7d6*/
  this->q034 = 0; /*0x69d7da*/
  *this = &VectorClass<Wstring>::`vftable'; /*0x69d7de*/
  if ( !a2 ) /*0x69d7e4*/
    return this; /*0x69d7e4*/
  if ( !a3 ) /*0x69d7ec*/
  {
    v7 = __2_YAPAXI_Z(4 * a2 + 4); /*0x69d820*/
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
        this->q034 = 1; /*0x69d84d*/
        return this; /*0x69d857*/
      }
    }
    else
    {
      v8 = 0; /*0x69d85a*/
    }
    this->Items = v8; /*0x69d85c*/
    this->q034 = 1; /*0x69d85f*/
    return this; /*0x69d863*/
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
  return this; /*0x69d811*/
}



// ==== 0x0069D870  VectorClass::ParseAndApplyAlliances_Parse  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_69D870(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x69d87b*/
  this->Capacity = a2; /*0x69d87e*/
  this->q030 = 1; /*0x69d881*/
  this->q034 = 0; /*0x69d885*/
  *this = &VectorClass<HouseClass *>::`vftable'; /*0x69d888*/
  if ( a2 ) /*0x69d88e*/
  {
    if ( a3 ) /*0x69d896*/
    {
      this->Items = a3; /*0x69d898*/
      return this; /*0x69d89e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x69d8ad*/
    this->q034 = 1; /*0x69d8b0*/
  }
  return this; /*0x69d89d*/
}



// ==== 0x0069D8C0  SHA1::ProcessBlock  this=SHA1  sig=csp ====
int *__thiscall sub_69D8C0(_DWORD *this, const void **a2, int *a3)
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
      v6 = this->q030; /*0x69d8da*/
      if ( v6 || v5 < 64 ) /*0x69d8e4*/
      {
        v7 = 64 - v6; /*0x69d8eb*/
        if ( v5 < 64 - v6 ) /*0x69d8ef*/
          v7 = *a3; /*0x69d8f1*/
        qmemcpy((char *)this + v6 + 52, *a2, v7); /*0x69d8ff*/
        *a2 = (char *)*a2 + v7; /*0x69d911*/
        this->q030 += v7; /*0x69d91a*/
        *a3 -= v7; /*0x69d926*/
        result = (int *)this->q030; /*0x69d928*/
        if ( result == (int *)64 ) /*0x69d92d*/
        {
          SHA1::Transform(this + 13, this + 6); /*0x69d939*/
          v8 = this->q02C; /*0x69d93e*/
          this->q030 = 0; /*0x69d941*/
          result = (int *)(v8 + 64); /*0x69d948*/
          this->q02C = result; /*0x69d94a*/
        }
      }
    }
  }
  return result; /*0x69d94d*/
}



// ==== 0x0069D960  SHA1::Process  this=SHA1  sig=csp ====
int __thiscall SHA1_Process(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v5; // edi
  int v6; // ebx

  *(_BYTE *)this = 0; /*0x69d96f*/
  SHA1::ProcessBlock(&a2, &a3); /*0x69d972*/
  result = a3; /*0x69d977*/
  if ( a3 ) /*0x69d97d*/
  {
    v5 = a2; /*0x69d984*/
    if ( a3 / 64 > 0 ) /*0x69d98f*/
    {
      v6 = a3 / 64; /*0x69d996*/
      do /*0x69d9bb*/
      {
        SHA1::Transform(v5, this + 6); /*0x69d99c*/
        v5 += 64; /*0x69d9ab*/
        this->q02C += 64; /*0x69d9ad*/
        --v6; /*0x69d9b6*/
        a3 -= 64; /*0x69d9b7*/
      }
      while ( v6 ); /*0x69d9bb*/
    }
    a2 = v5; /*0x69d9cb*/
    return SHA1::ProcessBlock(&a2, &a3); /*0x69d9cf*/
  }
  return result; /*0x69d9d5*/
}



// ==== 0x0069D9E0  SHA1::Compute  this=SHA1  sig=csp ====
int __thiscall SHA1_Compute(_DWORD *this, char *a2)
{
  int v3; // edx
  int v4; // ebx
  unsigned int v5; // ebx
  int v6; // edx
  unsigned __int16 v7; // cx
  unsigned int *v8; // ecx
  int v9; // esi
  unsigned int v10; // eax
  _BYTE v12[20]; // [esp+14h] [ebp-54h] BYREF
  _DWORD v13[16]; // [esp+28h] [ebp-40h] BYREF

  if ( *(_BYTE *)this ) /*0x69d9e9*/
    qmemcpy(a2, this + 1, 0x14u); /*0x69d9fb*/
  v3 = this->q030; /*0x69d9fd*/
  v4 = this->q02C; /*0x69da00*/
  qmemcpy(v13, this + 13, sizeof(v13)); /*0x69da14*/
  v5 = v3 + v4; /*0x69da18*/
  *((_BYTE *)v13 + v3) = 0x80; /*0x69da29*/
  qmemcpy(v12, this + 6, sizeof(v12)); /*0x69da2e*/
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
  qmemcpy(this + 1, v12, 0x14u); /*0x69dad6*/
  v8 = this + 1; /*0x69dad8*/
  v9 = 5; /*0x69dada*/
  do /*0x69db0b*/
  {
    v10 = *v8++; /*0x69dadf*/
    --v9; /*0x69db07*/
    *(v8 - 1) = ((v10 & 0xFF00 | (v10 << 16)) << 8) | ((HIWORD(v10) | v10 & 0xFF0000) >> 8); /*0x69db08*/
  }
  while ( v9 ); /*0x69db0b*/
  *(_BYTE *)this = 1; /*0x69db18*/
  qmemcpy(a2, this + 1, 0x14u); /*0x69db1c*/
  return 20; /*0x69db1e*/
}



// ==== 0x0069DB30  SHA1::Transform  this=SHA1  sig=csp ====
unsigned int __stdcall SHA1_Transform(int *a1, unsigned int *a2)
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
  int v26; // ebx
  int v27; // edx
  unsigned int result; // eax
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
_BYTE *__thiscall ShapeButtonClass_Init(_BYTE *this)
{
  ToggleClass::Construct(0, 0, 0, 0, 0); /*0x69dcfb*/
  this->q034 = 0; /*0x69dd00*/
  this->q038 = 0; /*0x69dd03*/
  this->q03C = 0; /*0x69dd06*/
  this->q040 = 0; /*0x69dd09*/
  this->q044 = 0; /*0x69dd0c*/
  this->q012 = 0; /*0x69dd0f*/
  this->q04C = 0; /*0x69dd12*/
  this->Visible = g_FileSystem_THEATER_PAL; /*0x69dd1a*/
  this->q055 = 0; /*0x69dd1d*/
  this->q05C = 0; /*0x69dd20*/
  *(_DWORD *)this = &ShapeButtonClass::`vftable'; /*0x69dd23*/
  return this; /*0x69dd2b*/
}



// ==== 0x0069DD30  ShapeButtonClass::Constructor  this=ShapeButtonClass  sig=csp ====
_BYTE *__thiscall ShapeButtonClass_Constructor(_BYTE *this, int a2, int a3, int a4, int a5, int a6, int a7, char a8)
{
  ToggleClass::Construct(a2, a4, a5, 0, 0); /*0x69dd49*/
  this->q034 = 0; /*0x69dd52*/
  this->q038 = 0; /*0x69dd55*/
  this->q040 = 0; /*0x69dd58*/
  this->q044 = 0; /*0x69dd5b*/
  this->q012 = 0; /*0x69dd5e*/
  this->q04C = 0; /*0x69dd61*/
  this->Visible = g_FileSystem_THEATER_PAL; /*0x69dd69*/
  this->q055 = a8; /*0x69dd72*/
  this->q05C = 0; /*0x69dd75*/
  *(_DWORD *)this = &ShapeButtonClass::`vftable'; /*0x69dd78*/
  this->q016 = a3; /*0x69dd7e*/
  if ( a3 ) /*0x69dd81*/
  {
    this->q005 = *(__int16 *)(a3 + 2); /*0x69dd87*/
    this->q006 = *(__int16 *)(a3 + 4); /*0x69dd8e*/
  }
  else
  {
    this->q005 = 0; /*0x69dd93*/
    this->q006 = 0; /*0x69dd96*/
  }
  if ( a6 ) /*0x69dd9f*/
    this->q005 = a6; /*0x69dda1*/
  if ( a7 ) /*0x69ddaa*/
    this->q006 = a7; /*0x69ddac*/
  return this; /*0x69ddb1*/
}



// ==== 0x0069DDC0  ShapeButtonClass::Destructor  this=ShapeButtonClass  sig=csp ====
int __thiscall ShapeButtonClass_Destructor(int this)
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
  return GadgetClass::Dtor((_DWORD *)this); /*0x69ddf6*/
}



// ==== 0x0069DE00  ShapeButtonClass::SetShape  this=ShapeButtonClass  sig=csp ====
int __thiscall ShapeButton_SetShape(int this, int a2, int a3, int a4)
{
  int result; // eax

  if ( *(_BYTE *)(this + 92) && *(_DWORD *)(this + 88) ) /*0x69de0b*/
  {
    __3_YAXPAX_Z(*(void **)(this + 88)); /*0x69de13*/
    *(_DWORD *)(this + 88) = 0; /*0x69de1b*/
    *(_BYTE *)(this + 92) = 0; /*0x69de1e*/
    *(_DWORD *)(this + 20) = 0; /*0x69de21*/
    *(_DWORD *)(this + 24) = 0; /*0x69de24*/
  }
  *(_DWORD *)(this + 88) = a2; /*0x69de2d*/
  if ( a2 ) /*0x69de30*/
  {
    *(_DWORD *)(this + 20) = *(__int16 *)(a2 + 2); /*0x69de36*/
    *(_DWORD *)(this + 24) = *(__int16 *)(a2 + 4); /*0x69de3d*/
  }
  else
  {
    *(_DWORD *)(this + 20) = 0; /*0x69de42*/
    *(_DWORD *)(this + 24) = 0; /*0x69de45*/
  }
  if ( a3 ) /*0x69de4e*/
    *(_DWORD *)(this + 20) = a3; /*0x69de50*/
  result = a4; /*0x69de53*/
  if ( a4 ) /*0x69de59*/
    *(_DWORD *)(this + 24) = a4; /*0x69de5b*/
  return result; /*0x69de5e*/
}



// ==== 0x0069DE70  ScenarioClass::FreeConfig  this=ScenarioClass  sig=csp ====
void __thiscall ScenarioClass_FreeConfig(int this)
{
  if ( *(_BYTE *)(this + 92) ) /*0x69de76*/
  {
    if ( *(_DWORD *)(this + 88) ) /*0x69de7b*/
    {
      __3_YAXPAX_Z(*(void **)(this + 88)); /*0x69de83*/
      *(_DWORD *)(this + 88) = 0; /*0x69de8b*/
      *(_BYTE *)(this + 92) = 0; /*0x69de8e*/
      *(_DWORD *)(this + 20) = 0; /*0x69de91*/
      *(_DWORD *)(this + 24) = 0; /*0x69de94*/
    }
  }
}



// ==== 0x0069DEA0  ButtonClass::SetState  this=ShapeButtonClass  sig=csp ====
char __thiscall ButtonClass_SetState(_BYTE *this, char a2)
{
  this->q05C = a2; /*0x69dea4*/
  return a2; /*0x69dea7*/
}



// ==== 0x0069DEB0  ShapeButtonClass::Draw  this=ShapeButtonClass  sig=csp ====
int __thiscall ShapeButton_Draw(int this, int a2)
{
  unsigned int v3; // ebx
  char v4; // al
  int v5; // edi
  int *v6; // eax
  int v7; // ebp
  int v8; // edx
  int v9; // ebp
  int v10; // eax
  int v12[4]; // [esp+4h] [ebp-20h] BYREF
  int v13[4]; // [esp+14h] [ebp-10h] BYREF

  if ( !Control::DispatchClick(a2) || !*(_DWORD *)(this + 88) ) /*0x69dec8*/
    return 0; /*0x69dfad*/
  if ( !*(_BYTE *)(this + 30) ) /*0x69dedb*/
  {
    if ( *(_BYTE *)(this + 64) ) /*0x69dee4*/
    {
      if ( *(_BYTE *)(this + 52) ) /*0x69deeb*/
      {
        v3 = (*(_BYTE *)(this + 45) != 0) + 3; /*0x69defc*/
        goto LABEL_11; /*0x69deff*/
      }
      v4 = *(_BYTE *)(this + 45); /*0x69df01*/
      v3 = 0; /*0x69df04*/
    }
    else
    {
      v4 = *(_BYTE *)(this + 44); /*0x69df08*/
      v3 = 0; /*0x69df0b*/
    }
    LOBYTE(v3) = v4 != 0; /*0x69df0f*/
    goto LABEL_11; /*0x69df0f*/
  }
  v3 = 2; /*0x69dedd*/
LABEL_11:
  v5 = DSurface_Sidebar; /*0x69df12*/
  if ( !*(_BYTE *)(this + 76) ) /*0x69df12*/
    v5 = g_DSurface_Hidden_2; /*0x69df1f*/
  v6 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v5 + 120))(v5, v12); /*0x69df2e*/
  v7 = *(_DWORD *)(this + 12); /*0x69df33*/
  v13[0] = *v6; /*0x69df36*/
  v13[1] = v6[1]; /*0x69df3d*/
  v13[2] = v6[2]; /*0x69df44*/
  v13[3] = v6[3]; /*0x69df4f*/
  v8 = v7 + *(_DWORD *)(this + 68); /*0x69df56*/
  v9 = *(_DWORD *)(this + 16); /*0x69df58*/
  v12[0] = v8; /*0x69df5b*/
  v10 = *(_BYTE *)(this + 85) != 0 ? 0x800 : 0;
  v12[1] = v9 + *(_DWORD *)(this + 72); /*0x69df7d*/
  DrawToSurfaceSHP(v5, *(_DWORD *)(this + 80), *(_DWORD *)(this + 88), v3, v12, v13, v10, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x69df96*/
  *(_BYTE *)(this + 84) = 1; /*0x69dfa2*/
  return 1; /*0x69dfa6*/
}



// ==== 0x0069DFC0  SidebarClass::startButtonFlash  this=SidebarClass  sig=csp ====
char __thiscall sub_69DFC0(int this, int a2, int a3, char a4)
{
  if ( *(_DWORD *)(this + 56) ) /*0x69dfc0*/
    return 0; /*0x69dfe3*/
  *(_DWORD *)(this + 56) = a2; /*0x69dfcf*/
  *(_DWORD *)(this + 60) = a3 + a2; /*0x69dfd4*/
  *(_BYTE *)(this + 52) = a4; /*0x69dfdb*/
  return 1; /*0x69dfe0*/
}



// ==== 0x0069DFF0  SHA1::Reset  this=GadgetClass  sig=csp ====
char __thiscall SHA1_Reset(int this)
{
  if ( !*(_DWORD *)(this + 56) ) /*0x69dff0*/
    return 0; /*0x69e005*/
  *(_BYTE *)(this + 52) = 0; /*0x69dff9*/
  *(_DWORD *)(this + 60) = 0; /*0x69dffc*/
  *(_DWORD *)(this + 56) = 0; /*0x69dfff*/
  return 1; /*0x69e004*/
}



// ==== 0x0069E010  SidebarClass::updateFlashTimer  this=SidebarClass  sig=csp ====
char __thiscall sub_69E010(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // edx

  if ( *(_BYTE *)(this + 30) ) /*0x69e010*/
  {
    if ( *(_DWORD *)(this + 56) ) /*0x69e019*/
    {
      *(_BYTE *)(this + 52) = 0; /*0x69e01e*/
      *(_DWORD *)(this + 60) = 0; /*0x69e021*/
      *(_DWORD *)(this + 56) = 0; /*0x69e024*/
      return 1; /*0x69e029*/
    }
  }
  else
  {
    v2 = *(_DWORD *)(this + 60); /*0x69e02a*/
    if ( v2 ) /*0x69e02f*/
    {
      v3 = v2 - 1; /*0x69e031*/
      *(_DWORD *)(this + 60) = v3; /*0x69e034*/
      if ( !v3 ) /*0x69e037*/
      {
        v4 = *(_DWORD *)(this + 56); /*0x69e03e*/
        *(_BYTE *)(this + 52) = *(_BYTE *)(this + 52) == 0; /*0x69e044*/
        *(_DWORD *)(this + 60) = v4; /*0x69e047*/
        return 1; /*0x69e04c*/
      }
    }
  }
  return 0; /*0x69e029*/
}



// ==== 0x0069E060  ObjectClass::method_69E060  this=ObjectClass  sig=csp ====
char __thiscall sub_69E060(_BYTE *this)
{
  return this->attachedTag; /*0x69e063*/
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
void __thiscall sub_69E090(char **this)
{
  char *EntireFile; // eax
  _DWORD v3[22]; // [esp+4h] [ebp-6Ch] BYREF
  char v4[12]; // [esp+5Ch] [ebp-14h] BYREF
  int v5; // [esp+68h] [ebp-8h]

  if ( *(_WORD *)this == 0xFFFF && !this->q010 ) /*0x69e09c*/
  {
    CCFileClass::Construct(v3, this->q008); /*0x69e0ab*/
    EntireFile = (char *)CCFileClass::ReadEntireFile(v3); /*0x69e0b4*/
    if ( EntireFile ) /*0x69e0bb*/
    {
      this->u32_C = EntireFile; /*0x69e0bd*/
      this->q010 = 1; /*0x69e0c0*/
    }
    v3[0] = &CCFileClass::`vftable'; /*0x69e0c8*/
    v5 = 0; /*0x69e0d0*/
    Vector::Clear((int)v4); /*0x69e0d8*/
    v3[0] = &off_7E1668; /*0x69e0e1*/
    BufferIOFileClass::Dtor(v3); /*0x69e0e9*/
  }
}



// ==== 0x0069E100  BTree::DeleteSubtree  this=BTree  sig=csp ====
void __thiscall BTree::DeleteSubtree(_DWORD *this)
{
  void *v2; // esi
  int v3; // eax
  int v4; // eax

  if ( *(_WORD *)this == 0xFFFF && this->u8_10 ) /*0x69e109*/
  {
    v2 = (void *)this->q003; /*0x69e111*/
    if ( v2 ) /*0x69e116*/
    {
      if ( *(_WORD *)v2 == 0xFFFF ) /*0x69e11c*/
      {
        BTree::DeleteSubtree(this->q003); /*0x69e120*/
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
    this->q003 = 0; /*0x69e169*/
    this->u8_10 = 0; /*0x69e170*/
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



// ==== 0x0069E430  ObjectClass::LoadSHPFile  this=AbstractClass  sig=csp ====
void *__thiscall sub_69E430(void *lpBuffer, char *Source)
{
  char *v3; // eax
  _DWORD v5[22]; // [esp+8h] [ebp-6Ch] BYREF
  _BYTE v6[12]; // [esp+60h] [ebp-14h] BYREF
  int v7; // [esp+6Ch] [ebp-8h]

  *((_DWORD *)lpBuffer + 5) = dword_83F870++; /*0x69e440*/
  v3 = _strdup(Source); /*0x69e44f*/
  *((_DWORD *)lpBuffer + 2) = v3; /*0x69e45d*/
  *((_BYTE *)lpBuffer + 16) = 0; /*0x69e461*/
  *((_DWORD *)lpBuffer + 3) = 0; /*0x69e464*/
  *((_WORD *)lpBuffer + 1) = 0; /*0x69e467*/
  *((_WORD *)lpBuffer + 2) = 0; /*0x69e46b*/
  *((_WORD *)lpBuffer + 3) = 0; /*0x69e46f*/
  CCFileClass::Construct(v5, v3); /*0x69e473*/
  if ( (unsigned __int8)CCFileClass::Open(0) ) /*0x69e47d*/
    CCFileClass::Read(lpBuffer, 8u); /*0x69e48d*/
  _strcmpi(*((const void **)lpBuffer + 2), aNullShp); /*0x69e49b*/
  *(_WORD *)lpBuffer = -1; /*0x69e4a0*/
  *((_DWORD *)lpBuffer + 6) = dword_B077B0; /*0x69e4aa*/
  *((_DWORD *)lpBuffer + 7) = 0; /*0x69e4ad*/
  if ( dword_B077B0 ) /*0x69e4ba*/
    *((_DWORD *)dword_B077B0 + 7) = lpBuffer; /*0x69e4bc*/
  dword_B077B0 = lpBuffer; /*0x69e4bf*/
  *((_DWORD *)lpBuffer + 8) = 0; /*0x69e4c9*/
  v5[0] = &CCFileClass::`vftable'; /*0x69e4cc*/
  v7 = 0; /*0x69e4d4*/
  Vector::Clear(v6); /*0x69e4d8*/
  v5[0] = &off_7E1668; /*0x69e4e1*/
  BufferIOFileClass::Dtor(v5); /*0x69e4e9*/
  return lpBuffer; /*0x69e4f0*/
}



// ==== 0x0069E500  FileTreeNode::Destroy  this=AbstractClass  sig=csp ====
void __thiscall FileTreeNode_Destroy(void *this)
{
  void *v2; // edi
  int v3; // eax
  int v4; // eax

  if ( *(_WORD *)this == 0xFFFF ) /*0x69e507*/
  {
    if ( this->uniqueId ) /*0x69e509*/
    {
      v2 = (void *)this->vtable4; /*0x69e511*/
      if ( v2 ) /*0x69e516*/
      {
        FileTreeNode::Destroy(this->vtable4); /*0x69e51a*/
        __3_YAXPAX_Z(v2); /*0x69e520*/
      }
      this->vtable4 = 0; /*0x69e528*/
      this->uniqueId = 0; /*0x69e52f*/
    }
    v3 = this->nextArrayIndex; /*0x69e534*/
    if ( v3 ) /*0x69e539*/
      *(_DWORD *)(v3 + 28) = this->referenceCount; /*0x69e53e*/
    v4 = this->referenceCount; /*0x69e541*/
    if ( v4 ) /*0x69e546*/
      *(_DWORD *)(v4 + 24) = this->nextArrayIndex; /*0x69e54b*/
    else
      dword_B077B0 = (void *)this->nextArrayIndex; /*0x69e553*/
    if ( this->vtable3 ) /*0x69e558*/
    {
      free(*((void **)this + 2)); /*0x69e560*/
      this->vtable3 = 0; /*0x69e568*/
    }
  }
}



// ==== 0x0069E580  MixFileClass::LoadSubFile  this=AbstractClass  sig=csp ====
char **__thiscall MixFileClass_LoadSubFile(char **this)
{
  char **v1; // edi
  int Size; // ebx
  void *v4; // eax
  size_t v5; // eax
  void *v6; // esi
  _BYTE *v7; // ebp
  _DWORD *v8; // edi
  int v9; // eax
  int v10; // eax
  void *v11; // esi
  int v13[22]; // [esp+Ch] [ebp-6Ch] BYREF
  _BYTE v14[12]; // [esp+64h] [ebp-14h] BYREF
  int v15; // [esp+70h] [ebp-8h]

  v1 = this; /*0x69e585*/
  if ( *(_WORD *)this != 0xFFFF ) /*0x69e58f*/
    return this; /*0x69e591*/
  if ( this->uniqueId ) /*0x69e599*/
    return (char **)this->vtable4; /*0x69e5a0*/
  if ( (char *)dword_B077BC == this->abstractFlags ) /*0x69e5b3*/
    return (char **)dword_B077B4; /*0x69e5b5*/
  CCFileClass::Construct(v13, this->vtable3); /*0x69e5c8*/
  if ( CCFileClass::Open(v13, 0) ) /*0x69e5d4*/
  {
    Size = CCFileClass::GetSize(v13); /*0x69e5ec*/
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
            v8 = (char *)dword_B077B4 + 12; /*0x69e63f*/
            if ( *((_DWORD *)dword_B077B4 + 3) ) /*0x69e63c*/
              MixFileClass::CacheNode_Dtor(1); /*0x69e648*/
            *v8 = 0; /*0x69e64d*/
            v1 = this; /*0x69e653*/
            *v7 = 0; /*0x69e657*/
          }
          v9 = *((_DWORD *)v6 + 6); /*0x69e65b*/
          if ( v9 ) /*0x69e660*/
            *(_DWORD *)(v9 + 28) = *((_DWORD *)v6 + 7); /*0x69e665*/
          v10 = *((_DWORD *)v6 + 7); /*0x69e668*/
          if ( v10 ) /*0x69e66d*/
            *(_DWORD *)(v10 + 24) = *((_DWORD *)v6 + 6); /*0x69e672*/
          else
            dword_B077B0 = (void *)*((_DWORD *)v6 + 6); /*0x69e67a*/
          if ( *((_DWORD *)v6 + 2) ) /*0x69e680*/
          {
            free(*((void **)v6 + 2)); /*0x69e688*/
            *((_DWORD *)v6 + 2) = 0; /*0x69e690*/
          }
        }
        __3_YAXPAX_Z(v6); /*0x69e698*/
        v4 = __2_YAPAXI_Z(Size); /*0x69e69e*/
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
      v4 = __2_YAPAXI_Z(v5); /*0x69e60c*/
      dword_B077B4 = v4; /*0x69e614*/
    }
    if ( v4 ) /*0x69e6b5*/
    {
      CCFileClass::Read(v13, v4, Size); /*0x69e6bd*/
      v4 = dword_B077B4; /*0x69e6c2*/
    }
    v11 = v4; /*0x69e6ca*/
    dword_B077BC = (int)v1[5]; /*0x69e6cc*/
    v13[0] = (int)&CCFileClass::`vftable'; /*0x69e6d6*/
    v15 = 0; /*0x69e6de*/
    Vector::Clear((int)v14); /*0x69e6e2*/
    v13[0] = (int)&off_7E1668; /*0x69e6eb*/
    BufferIOFileClass::Dtor(v13); /*0x69e6f3*/
    return (char **)v11; /*0x69e6f8*/
  }
  else
  {
    dword_B077BC = 0; /*0x69e706*/
    v13[0] = (int)&CCFileClass::`vftable'; /*0x69e70c*/
    v15 = 0; /*0x69e714*/
    Vector::Clear((int)v14); /*0x69e718*/
    v13[0] = (int)&off_7E1668; /*0x69e721*/
    BufferIOFileClass::Dtor(v13); /*0x69e729*/
    return 0; /*0x69e72f*/
  }
}



// ==== 0x0069E740  MixFileClass::GetSubFile  this=AbstractClass  sig=csp ====
int __thiscall MixFileClass_GetSubFile(char **this, unsigned int a2)
{
  char *EntireFile; // eax
  int v4; // eax
  int v5; // ecx
  _DWORD v7[22]; // [esp+4h] [ebp-6Ch] BYREF
  char v8[12]; // [esp+5Ch] [ebp-14h] BYREF
  int v9; // [esp+68h] [ebp-8h]

  if ( *(_WORD *)this == 0xFFFF && !this->uniqueId ) /*0x69e74c*/
  {
    CCFileClass::Construct(v7, this->vtable3); /*0x69e75b*/
    EntireFile = (char *)CCFileClass::ReadEntireFile(v7); /*0x69e764*/
    if ( EntireFile ) /*0x69e76b*/
    {
      this->vtable4 = EntireFile; /*0x69e76d*/
      this->uniqueId = 1; /*0x69e770*/
    }
    v7[0] = &CCFileClass::`vftable'; /*0x69e778*/
    v9 = 0; /*0x69e780*/
    Vector::Clear((int)v8); /*0x69e788*/
    v7[0] = &off_7E1668; /*0x69e791*/
    BufferIOFileClass::Dtor(v7); /*0x69e799*/
  }
  v4 = MixFileClass::LoadSubFile(this); /*0x69e7a0*/
  if ( v4 && a2 < *(__int16 *)(v4 + 6) && v4 + 24 * a2 != -8 && (v5 = *(_DWORD *)(v4 + 24 * a2 + 28)) != 0 ) /*0x69e7c6*/
    return v5 + v4; /*0x69e7c8*/
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
int __thiscall MixFileClass_GetPixelData(char **this, int a2, unsigned int a3)
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



// ==== 0x0069E900  ObjectClass::Helper_69E900  this=AbstractClass  sig=csp ====
char __thiscall sub_69E900(char **this, unsigned int a2)
{
  char **SubFile; // eax
  int v3; // eax
  int v4; // eax

  SubFile = MixFileClass::LoadSubFile(this); /*0x69e900*/
  if ( SubFile && a2 < *((__int16 *)SubFile + 3) && (v3 = (int)&SubFile[6 * a2 + 2]) != 0 ) /*0x69e91e*/
    return (unsigned __int8)(*(_BYTE *)(v3 + 8) & 2) >> 1; /*0x69e926*/
  else
    LOBYTE(v4) = 0; /*0x69e92b*/
  return v4; /*0x69e928*/
}



// ==== 0x0069E930  MixFileClass::CacheNode_Dtor  this=MixFileClass  sig=csp ====
void *__thiscall MixFileClass_CacheNode_Dtor(void *this, char a2)
{
  int v3; // eax
  int v4; // eax

  if ( *(_WORD *)this == 0xFFFF ) /*0x69e937*/
  {
    if ( this->FileSize ) /*0x69e939*/
    {
      if ( this->CountFiles ) /*0x69e940*/
        MixFileClass::CacheNode_Dtor(1); /*0x69e949*/
      this->CountFiles = 0; /*0x69e94e*/
      this->FileSize = 0; /*0x69e955*/
    }
    v3 = this->Headers; /*0x69e959*/
    if ( v3 ) /*0x69e95e*/
      *(_DWORD *)(v3 + 28) = this->q01C; /*0x69e963*/
    v4 = this->q01C; /*0x69e966*/
    if ( v4 ) /*0x69e96b*/
      *(_DWORD *)(v4 + 24) = this->Headers; /*0x69e970*/
    else
      dword_B077B0 = (void *)this->Headers; /*0x69e978*/
    if ( this->Blowfish ) /*0x69e97d*/
    {
      free(*((void **)this + 2)); /*0x69e985*/
      this->Blowfish = 0; /*0x69e98d*/
    }
  }
  if ( (a2 & 1) != 0 ) /*0x69e999*/
    __3_YAXPAX_Z(this); /*0x69e99c*/
  return this; /*0x69e9a6*/
}



// ==== 0x0069E9B0  SHAPipe::Check  this=SHAPipe  sig=csp ====
int __thiscall VectorClass::sub_69E9B0(_DWORD *this, int a2, int a3)
{
  SHA1::Process(this + 3, a2, a3); /*0x69e9c2*/
  return Delegate::Dispatch(this, a2, a3); /*0x69e9d0*/
}



// ==== 0x0069E9E0  SHA1::ComputeThunk  this=SHA1  sig=csp ====
int __thiscall SHA1_ComputeThunk(_DWORD *this, char *a2)
{
  return SHA1::Compute(this + 3, a2); /*0x69e9ed*/
}



// ==== 0x0069E9F0  ObjectClass::method_69E9F0  this=ObjectClass  sig=csp ====
int __thiscall sub_69E9F0(int this, int a2, int a3)
{
  int v4; // ebx

  if ( !a2 || a3 < 1 ) /*0x69ea03*/
    return 0; /*0x69ea29*/
  v4 = Delegate::Invoke((_DWORD *)this, a2, a3); /*0x69ea0d*/
  if ( !*(_BYTE *)(this + 12) ) /*0x69ea0f*/
    SHA1::Process((_DWORD *)(this + 16), a2, v4); /*0x69ea1b*/
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
int __thiscall sub_69EC50(int this)
{
  wchar_t *v2; // ecx
  int v3; // ecx

  LocomotionClass::Init((_DWORD *)this); /*0x69ec53*/
  *(_DWORD *)(this + 28) = 0; /*0x69ec5d*/
  *(_DWORD *)(this + 32) = 0; /*0x69ec60*/
  v2 = g_CurrentFrame; /*0x69ec63*/
  *(_DWORD *)(this + 44) = 0; /*0x69ec69*/
  *(_DWORD *)(this + 36) = v2; /*0x69ec6c*/
  *(_DWORD *)(this + 48) = 0; /*0x69ec6f*/
  *(_DWORD *)(this + 52) = g_OverlayTypeConfig; /*0x69ec78*/
  *(_QWORD *)(this + 56) = qword_B077FC; /*0x69ec80*/
  *(_DWORD *)(this + 64) = g_OverlayTypeConfig; /*0x69ec95*/
  *(_DWORD *)(this + 68) = qword_B077FC; /*0x69ec9e*/
  v3 = HIDWORD(qword_B077FC); /*0x69eca1*/
  *(_DWORD *)(this + 80) = 0; /*0x69eca7*/
  *(_DWORD *)(this + 76) = 0; /*0x69ecaa*/
  *(_DWORD *)(this + 72) = v3; /*0x69ecad*/
  *(_DWORD *)(this + 84) = 0; /*0x69ecb3*/
  *(_DWORD *)(this + 88) = -1; /*0x69ecb6*/
  *(_DWORD *)(this + 92) = -1; /*0x69ecb9*/
  *(_BYTE *)(this + 96) = 0; /*0x69ecbc*/
  *(_BYTE *)(this + 97) = 0; /*0x69ecbf*/
  *(_BYTE *)(this + 98) = 0; /*0x69ecc2*/
  *(_BYTE *)(this + 99) = 0; /*0x69ecc5*/
  *(_BYTE *)(this + 100) = 0; /*0x69ecc8*/
  *(_BYTE *)(this + 101) = 1; /*0x69eccb*/
  *(_DWORD *)(this + 104) = 0; /*0x69eccf*/
  *(_DWORD *)this = &ShipLocomotionClass::`vftable'; /*0x69ecd2*/
  *(_DWORD *)(this + 4) = &ShipLocomotionClass::`vftable'; /*0x69ecd8*/
  *(_DWORD *)(this + 24) = &off_7F2D68; /*0x69ecdf*/
  return this; /*0x69ece8*/
}



// ==== 0x0069ED20  JumpjetLocomotionClass::LoadLocomotionFromStream_2  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_69ED20(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // ebp
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // edi

  v2 = a2; /*0x69ed21*/
  if ( !a2 ) /*0x69ed28*/
    return -2147467261; /*0x69ed31*/
  v4 = a1 + 20; /*0x69ed3b*/
  if ( a1[20] ) /*0x69ed38*/
  {
    a1 = 0; /*0x69ed44*/
    v5 = StreamClass::Set2(&a1, v4); /*0x69ed55*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x69ed63*/
      WinAPI::Wrapper(v5); /*0x69ed66*/
    if ( !a1 ) /*0x69ed71*/
      return -2147467259; /*0x69ed7a*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*a1 + 12))(a1, v2); /*0x69ed84*/
    if ( a1 ) /*0x69ed8c*/
    {
      (*(void (__stdcall **)(_DWORD *))(*a1 + 8))(a1); /*0x69ed95*/
      return v6; /*0x69ed9c*/
    }
  }
  else
  {
    a2 = 0; /*0x69eda2*/
    if ( a1 == (_DWORD *)24 ) /*0x69edac*/
      return -2147467259; /*0x69edac*/
    v7 = (*(int (__stdcall **)(_DWORD *, void *, _DWORD **))*(a1 - 6))(a1 - 6, &unk_818858, &a1); /*0x69edbd*/
    if ( v7 >= 0 ) /*0x69edc1*/
    {
      v9 = a1; /*0x69edd5*/
      ComPtr::Release_Alt((int *)&a2); /*0x69eddd*/
      v8 = v9; /*0x69ede2*/
      a2 = v9; /*0x69ede5*/
    }
    else
    {
      ComPtr::Release_Alt((int *)&a2); /*0x69edc7*/
      v8 = 0; /*0x69edcc*/
      a2 = 0; /*0x69edce*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x69edf3*/
      WinAPI::Wrapper(v7); /*0x69edf6*/
    if ( !v8 ) /*0x69ee01*/
      return -2147467259; /*0x69ee0a*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*v8 + 12))(v8, v2); /*0x69ee14*/
    if ( a2 ) /*0x69ee1c*/
      (*(void (__stdcall **)(_DWORD *))(*a2 + 8))(a2); /*0x69ee21*/
  }
  return v6; /*0x69ed2a*/
}



// ==== 0x0069EE30  ShipLocomotionClass::QueryInterface  this=ShipLocomotionClass  sig=csp ====
int __stdcall ShipLocomotionClass::_vt00(int a1, const void *a2, int *a3)
{
  int result; // eax
  int v4; // eax

  result = LocomotionClass::QueryInterface(a1, a2, a3); /*0x69ee42*/
  if ( result == -2147467262 ) /*0x69ee4c*/
  {
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x69ee5b*/
    {
      if ( a1 ) /*0x69ee62*/
        v4 = a1 + 24; /*0x69ee64*/
      else
        v4 = 0; /*0x69ee69*/
      *a3 = v4; /*0x69ee6b*/
    }
    if ( *a3 ) /*0x69ee6e*/
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x69ee82*/
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
HRESULT __stdcall ShipLocomotionClass::_vt05(int *a1, int *pStm)
{
  IStream *v2; // edi
  int v3; // ebx
  int v4; // eax
  LPVOID *v5; // esi

  v2 = (IStream *)pStm; /*0x69ee97*/
  v3 = SwizzleManager::SaveLoad(a1, pStm); /*0x69eea2*/
  if ( v3 < 0 ) /*0x69eea6*/
    return v3; /*0x69eea6*/
  if ( a1 ) /*0x69eeaa*/
  {
    a1[26] = 0; /*0x69eeac*/
    *a1 = (int)&ShipLocomotionClass::`vftable'; /*0x69eeb3*/
    a1[1] = (int)&ShipLocomotionClass::`vftable'; /*0x69eeb9*/
    a1[6] = (int)&off_7F2D68; /*0x69eec0*/
  }
  v2->lpVtbl->Read(v2, &pStm, 1, 0); /*0x69eed3*/
  if ( !(_BYTE)pStm ) /*0x69eedc*/
    return v3; /*0x69ef08*/
  v4 = a1[26]; /*0x69eede*/
  v5 = (LPVOID *)(a1 + 26); /*0x69eee1*/
  if ( v4 ) /*0x69eee6*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x69eeeb*/
  *v5 = 0; /*0x69eef5*/
  return OleLoadFromStream(v2, &IID_ILocomotion, v5); /*0x69ef01*/
}



// ==== 0x0069EF10  ShipLocomotionClass::LoadFromStream  this=ShipLocomotionClass  sig=csp ====
HRESULT __stdcall ShipLocomotionClass::LoadFromStream(int *a1, int *pPStm, int a3)
{
  IStream *v3; // esi
  int *v4; // edi
  int v5; // ebx
  struct IStreamVtbl *lpVtbl; // ecx
  int (__stdcall ***v7)(_DWORD, void *, int **); // eax
  int v8; // edi
  IPersistStream *v9; // ebx
  HRESULT v10; // esi
  IStream v12; // edx

  v3 = (IStream *)pPStm; /*0x69ef16*/
  v4 = a1; /*0x69ef1b*/
  v5 = LoadIPersistStream(a1, pPStm, a3); /*0x69ef27*/
  if ( v5 < 0 ) /*0x69ef2b*/
    return v5; /*0x69ef2b*/
  if ( !v4[26] ) /*0x69ef36*/
  {
    v12.lpVtbl = v3->lpVtbl; /*0x69efd3*/
    LOBYTE(a3) = 0; /*0x69efdf*/
    v12.lpVtbl->Write(v3, &a3, 1, 0); /*0x69efe4*/
    return v5; /*0x69efe8*/
  }
  lpVtbl = v3->lpVtbl; /*0x69ef3c*/
  LOBYTE(a3) = 1; /*0x69ef48*/
  lpVtbl->Write(v3, &a3, 1, 0); /*0x69ef4d*/
  v7 = (int (__stdcall ***)(_DWORD, void *, int **))v4[26]; /*0x69ef50*/
  pPStm = 0; /*0x69ef53*/
  if ( v7 ) /*0x69ef5d*/
  {
    v8 = (**v7)(v7, &unk_820270, &a1); /*0x69ef6e*/
    if ( v8 >= 0 ) /*0x69ef72*/
    {
      v9 = (IPersistStream *)a1; /*0x69ef8b*/
      if ( pPStm ) /*0x69ef91*/
        (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x69ef96*/
      pPStm = (int *)v9; /*0x69ef99*/
    }
    else
    {
      Function::4B4D60((int *)&pPStm); /*0x69ef78*/
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
int __stdcall JumpjetLocomotionClass::sub_69EFF0(int a1, int a2)
{
  if ( !a2 ) /*0x69eff6*/
    return -2147467261; /*0x69eff8*/
  if ( *(_DWORD *)(a1 + 80) ) /*0x69f004*/
    return -2147467259; /*0x69f02b*/
  *(_DWORD *)(a1 + 80) = a2; /*0x69f012*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x69f018*/
  return 0; /*0x69effd*/
}



// ==== 0x0069F040  JumpjetLocomotionClass::StubReturnZero_13  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_69F040(int a1, _DWORD *a2)
{
  int v3; // eax

  if ( !a2 ) /*0x69f046*/
    return -2147467261; /*0x69f048*/
  v3 = *(_DWORD *)(a1 + 80); /*0x69f054*/
  if ( !v3 ) /*0x69f059*/
    return 1; /*0x69f069*/
  *a2 = v3; /*0x69f05b*/
  *(_DWORD *)(a1 + 80) = 0; /*0x69f05d*/
  return 0; /*0x69f04d*/
}



// ==== 0x0069F080  JumpjetLocomotionClass::CheckPiggybackState_0  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::sub_69F080(int a1)
{
  return !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)(a1 - 20) + 16))(a1 - 20) /*0x69f0b0*/
      && *(_DWORD *)(a1 + 80)
      && *(_BYTE *)(a1 + 77)
      && !*(_BYTE *)(*(_DWORD *)(a1 - 12) + 1709);
}



// ==== 0x0069F0C0  ObjectClass::method_69F0C0  this=ObjectClass  sig=csp ====
void *__thiscall sub_69F0C0(int *this, void *a2)
{
  int v3; // ebx
  int v4; // edx
  int v5; // eax
  int v6; // edx
  double v7; // st7
  int v8; // ecx
  int v9; // eax
  const void *v10; // eax
  int v11; // edx
  _DWORD v13[12]; // [esp+1Ch] [ebp-60h] BYREF
  char v14[48]; // [esp+4Ch] [ebp-30h] BYREF

  Matrix3x4::Identity(v13); /*0x69f0cc*/
  v3 = this->vtable4; /*0x69f0d1*/
  if ( v3 ) /*0x69f0da*/
  {
    v4 = this->objectTypeFlags; /*0x69f0e0*/
    v5 = this->fallRate; /*0x69f0e3*/
    if ( v4 != -1 ) /*0x69f0ef*/
    {
      if ( (int)g_CurrentFrame - v4 >= v5 ) /*0x69f0f7*/
        v5 = 0; /*0x69f0fd*/
      else
        v5 -= (int)g_CurrentFrame - v4; /*0x69f0f9*/
    }
    if ( (double)(v3 - v5) / (double)this->vtable4 < 1.0 ) /*0x69f118*/
    {
      v6 = this->vtable4; /*0x69f11a*/
      if ( v6 ) /*0x69f123*/
      {
        v8 = this->objectTypeFlags; /*0x69f12d*/
        v9 = this->fallRate; /*0x69f130*/
        if ( v8 != -1 ) /*0x69f136*/
        {
          if ( (int)g_CurrentFrame - v8 >= v9 ) /*0x69f13e*/
            v9 = 0; /*0x69f144*/
          else
            v9 -= (int)g_CurrentFrame - v8; /*0x69f140*/
        }
        v7 = (double)(v6 - v9) / (double)this->vtable4; /*0x69f150*/
      }
      else
      {
        v7 = 1.0; /*0x69f125*/
      }
      v10 = InterpolateVoxelAnimPose(v14, this->vtable3, this->referenceCount, v7); /*0x69f165*/
      goto LABEL_17; /*0x69f16a*/
    }
  }
  v11 = this->referenceCount; /*0x69f16c*/
  if ( v11 ) /*0x69f171*/
  {
    v10 = CopyAudioData(v14, v11); /*0x69f177*/
LABEL_17:
    qmemcpy(v13, v10, sizeof(v13)); /*0x69f187*/
  }
  qmemcpy(a2, v13, 0x30u); /*0x69f189*/
  return a2; /*0x69f19a*/
}



// ==== 0x0069F1B0  ObjectClass::method_69F1B0  this=ObjectClass  sig=csp ====
double __thiscall sub_69F1B0(int *this)
{
  int v1; // esi
  int v3; // edx
  int v4; // eax

  v1 = this->vtable4; /*0x69f1b4*/
  if ( !v1 ) /*0x69f1bd*/
    return 1.0; /*0x69f1c9*/
  v3 = this->objectTypeFlags; /*0x69f1ca*/
  v4 = this->fallRate; /*0x69f1cd*/
  if ( v3 != -1 ) /*0x69f1d3*/
  {
    if ( (int)g_CurrentFrame - v3 < v4 ) /*0x69f1df*/
      return (double)(v1 - (v4 - ((int)g_CurrentFrame - v3))) / (double)v1; /*0x69f1f5*/
    v4 = 0; /*0x69f1f6*/
  }
  return (double)(v1 - v4) / (double)v1; /*0x69f1c5*/
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
    *v3 = g_CurrentFrame; /*0x69f232*/
    v3[1] = v4; /*0x69f23a*/
    v3[2] = 3; /*0x69f23d*/
    v3[3] = 3; /*0x69f240*/
    return v4; /*0x69f234*/
  }
  return result; /*0x69f244*/
}



// ==== 0x0069F250  ShipLocomotionClass::InitMovementState_0  this=ShipLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_69F250(_DWORD *a1, int a2)
{
  int v3; // [esp+8h] [ebp-Ch]

  a1[7] = a2; /*0x69f25d*/
  a1[6] = a2; /*0x69f260*/
  a1[8] = g_CurrentFrame; /*0x69f26f*/
  a1[9] = v3; /*0x69f275*/
  a1[10] = 0; /*0x69f278*/
  a1[11] = 0; /*0x69f27b*/
  return a1 + 8; /*0x69f27e*/
}



// ==== 0x0069F290  JumpjetLocomotionClass::StubReturnTrue_5  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::sub_69F290(int a1)
{
  if ( *(_DWORD *)(a1 + 48) != g_OverlayTypeConfig || *(_QWORD *)(a1 + 52) != qword_B077FC ) /*0x69f2b1*/
    return 1; /*0x69f2c1*/
  return (*(_DWORD *)(a1 + 60) != g_OverlayTypeConfig || *(_QWORD *)(a1 + 64) != qword_B077FC) /*0x69f310*/
      && (*(_DWORD *)(a1 + 60) != *(_DWORD *)(*(_DWORD *)(a1 + 8) + 156)
       || *(_DWORD *)(a1 + 64) != *(_DWORD *)(*(_DWORD *)(a1 + 8) + 160));
}



// ==== 0x0069F330  ShipLocomotionClass::StubReturnTrue_6  this=ShipLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::sub_69F330(int a1)
{
  if ( TimerClass::Active(*(_DWORD *)(a1 + 8) + 904) ) /*0x69f33e*/
    return 1; /*0x69f347*/
  return (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)a1 + 16))(a1) /*0x69f389*/
      && (*(_DWORD *)(a1 + 60) != g_OverlayTypeConfig || *(_QWORD *)(a1 + 64) != qword_B077FC)
      && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 1336))(*(_DWORD *)(a1 + 8)) > 0;
}



// ==== 0x0069F3A0  JumpjetLocomotionClass::GetCoordinate_1  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_69F3A0(_DWORD *a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax

  v2 = a1[13]; /*0x69f3ad*/
  v3 = a1[14]; /*0x69f3b0*/
  *a2 = a1[12]; /*0x69f3b5*/
  a2[1] = v2; /*0x69f3b7*/
  a2[2] = v3; /*0x69f3ba*/
  return a2; /*0x69f3bf*/
}



// ==== 0x0069F3D0  JumpjetLocomotionClass::GetRenderCoordinate_1  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_69F3D0(_DWORD *a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // esi

  if ( a1[15] == g_OverlayTypeConfig && *((_QWORD *)a1 + 8) == qword_B077FC ) /*0x69f3ee*/
  {
    v4 = a1[2]; /*0x69f41b*/
    v5 = v4 + 156; /*0x69f424*/
    v6 = *(_DWORD *)(v4 + 156); /*0x69f426*/
    v7 = *(_DWORD *)(v4 + 160); /*0x69f428*/
    v8 = *(_DWORD *)(v5 + 8); /*0x69f42b*/
    *a2 = v6; /*0x69f434*/
    a2[1] = v7; /*0x69f436*/
    a2[2] = v8; /*0x69f439*/
    return a2; /*0x69f42e*/
  }
  else
  {
    v2 = a1[16]; /*0x69f404*/
    v3 = a1[17]; /*0x69f407*/
    *a2 = a1[15]; /*0x69f40c*/
    a2[1] = v2; /*0x69f40e*/
    a2[2] = v3; /*0x69f411*/
    return a2; /*0x69f414*/
  }
}



// ==== 0x0069F450  ShipLocomotionClass::ConvertCoordToCell_2  this=ShipLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_69F450(int a1, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  _DWORD *result; // eax
  unsigned int v5; // ecx
  unsigned int v6; // edx

  result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 892))(*(_DWORD *)(a1 + 8)); /*0x69f45b*/
  if ( !(_BYTE)result ) /*0x69f463*/
  {
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 896))(*(_DWORD *)(a1 + 8)); /*0x69f46e*/
    if ( !(_BYTE)result ) /*0x69f476*/
    {
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 468))(*(_DWORD *)(a1 + 8)); /*0x69f481*/
      if ( !(_BYTE)result ) /*0x69f489*/
      {
        result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 472))(*(_DWORD *)(a1 + 8)); /*0x69f490*/
        if ( !(_BYTE)result ) /*0x69f498*/
        {
          result = a2; /*0x69f49a*/
          v5 = a3; /*0x69f49e*/
          v6 = a4; /*0x69f4a2*/
          *(_DWORD *)(a1 + 48) = a2; /*0x69f4a9*/
          *(_DWORD *)(a1 + 52) = v5; /*0x69f4ac*/
          *(_DWORD *)(a1 + 56) = v6; /*0x69f4af*/
          if ( result != (_DWORD *)g_OverlayTypeConfig || __PAIR64__(v6, v5) != qword_B077FC ) /*0x69f4c2*/
          {
            a2 = result; /*0x69f4cc*/
            a3 = v5; /*0x69f4d4*/
            a4 = v6; /*0x69f4de*/
            result = Coord::To_Cell(&MapClass_Instance, &a2); /*0x69f4e2*/
            if ( (result[80] & 0x100) != 0 ) /*0x69f4f0*/
            {
              result = (_DWORD *)(dword_B0782C + *(_DWORD *)(a1 + 56)); /*0x69f4fb*/
              *(_DWORD *)(a1 + 56) = result; /*0x69f4fd*/
            }
          }
        }
      }
    }
  }
  return result; /*0x69f500*/
}



// ==== 0x0069F510  ShipLocomotionClass::CheckWindowsErrorWrapper_1  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_69F510(int a1)
{
  int v1; // eax
  int v2; // esi
  double v3; // st7
  int result; // eax

  if ( *(_DWORD *)(a1 + 60) != g_OverlayTypeConfig || *(_QWORD *)(a1 + 64) != qword_B077FC ) /*0x69f52d*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)) + 3220) ) /*0x69f546*/
    {
      v1 = *(_DWORD *)(a1 + 8); /*0x69f550*/
      if ( !*(_BYTE *)(v1 + 1744) ) /*0x69f553*/
      {
        v2 = *(_DWORD *)(v1 + 1736); /*0x69f55d*/
        if ( v2 ) /*0x69f565*/
        {
          do /*0x69f597*/
          {
            if ( !*(_DWORD *)(v2 + 1652) ) /*0x69f567*/
              WinAPI::Wrapper(-2147467261); /*0x69f576*/
            (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v2 + 1652) + 72))(*(_DWORD *)(v2 + 1652)); /*0x69f584*/
            v2 = *(_DWORD *)(v2 + 1736); /*0x69f587*/
          }
          while ( v2 && v2 != *(_DWORD *)(v2 + 1736) ); /*0x69f597*/
        }
      }
    }
  }
  if ( *(double *)(a1 + 76) >= 0.300000011920929 ) /*0x69f5a7*/
    v3 = 0.300000011920929; /*0x69f5ae*/
  else
    v3 = *(double *)(a1 + 76); /*0x69f5a9*/
  *(double *)(a1 + 76) = v3; /*0x69f5b4*/
  *(_DWORD *)(a1 + 48) = g_OverlayTypeConfig; /*0x69f5c0*/
  result = qword_B077FC; /*0x69f5c2*/
  *(_QWORD *)(a1 + 52) = qword_B077FC; /*0x69f5c7*/
  return result; /*0x69f5d3*/
}



// ==== 0x0069F5E0  ObjectClass::method_69F5E0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_69F5E0(_DWORD *this)
{
  int v1; // edi
  double v2; // st7
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  BOOL result; // eax

  v1 = this->nextObject; /*0x69f5e4*/
  if ( v1 ) /*0x69f5ed*/
  {
    v3 = this->fallRate; /*0x69f5f7*/
    v4 = this->objectTypeFlags; /*0x69f5fb*/
    if ( v4 != -1 ) /*0x69f601*/
    {
      if ( (int)g_CurrentFrame - v4 >= v3 ) /*0x69f60d*/
        v3 = 0; /*0x69f613*/
      else
        v3 -= (int)g_CurrentFrame - v4; /*0x69f60f*/
    }
    v2 = (double)(v1 - v3) / (double)(int)this->nextObject; /*0x69f620*/
  }
  else
  {
    v2 = 1.0; /*0x69f5ef*/
  }
  result = 0; /*0x69f65f*/
  if ( v2 == 1.0 ) /*0x69f630*/
  {
    v5 = this->vtable4; /*0x69f632*/
    if ( fabs(*(float *)(v5 + 808)) < 0.005 && fabs(*(float *)(v5 + 812)) < 0.005 ) /*0x69f65d*/
      return 1; /*0x69f630*/
  }
  return result; /*0x69f664*/
}



// ==== 0x0069F670  JumpjetLocomotionClass::ComputeVoxelTransform2  this=JumpjetLocomotionClass  sig=csp ====
float *__stdcall Voxel_ComputeTransform2(_DWORD *a1, float *a2, _DWORD *a3)
{
  int v3; // edi
  double v4; // st7
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  double v8; // st7
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  float *v12; // eax
  int v13; // ebx
  int *v14; // ecx
  int v15; // edi
  int v16; // eax
  double v17; // st7
  int v18; // edi
  const void *v19; // eax
  int v20; // esi
  float *v21; // eax
  float *v22; // edx
  float *v23; // ecx
  int v24; // ecx
  float *Transform; // eax
  int v26; // ebx
  int v27; // edx
  int v28; // eax
  int v29; // edx
  double v30; // st7
  int v31; // ecx
  int v32; // eax
  const void *v33; // eax
  int v34; // esi
  float v36; // [esp+4h] [ebp-234h]
  float v37; // [esp+4h] [ebp-234h]
  float v38; // [esp+4h] [ebp-234h]
  float *v39; // [esp+4h] [ebp-234h]
  float v40; // [esp+14h] [ebp-224h]
  int v41; // [esp+14h] [ebp-224h]
  float v42; // [esp+18h] [ebp-220h]
  int v43; // [esp+18h] [ebp-220h]
  float v44; // [esp+1Ch] [ebp-21Ch]
  int v45; // [esp+1Ch] [ebp-21Ch]
  float v46; // [esp+20h] [ebp-218h]
  int v47; // [esp+20h] [ebp-218h]
  float v48; // [esp+24h] [ebp-214h]
  int v49; // [esp+24h] [ebp-214h]
  _DWORD v50[12]; // [esp+28h] [ebp-210h] BYREF
  float v51[12]; // [esp+58h] [ebp-1E0h] BYREF
  float v52[12]; // [esp+88h] [ebp-1B0h] BYREF
  float v53[12]; // [esp+B8h] [ebp-180h] BYREF
  float v54[12]; // [esp+E8h] [ebp-150h] BYREF
  float v55[12]; // [esp+118h] [ebp-120h] BYREF
  float v56[12]; // [esp+148h] [ebp-F0h] BYREF
  char v57[48]; // [esp+178h] [ebp-C0h] BYREF
  float v58[12]; // [esp+1A8h] [ebp-90h] BYREF
  _BYTE v59[48]; // [esp+1D8h] [ebp-60h] BYREF
  float v60[12]; // [esp+208h] [ebp-30h] BYREF

  v3 = a1[11]; /*0x69f682*/
  if ( v3 ) /*0x69f68b*/
  {
    v5 = a1[8]; /*0x69f695*/
    v6 = a1[10]; /*0x69f698*/
    if ( v5 != -1 ) /*0x69f69e*/
    {
      if ( (int)g_CurrentFrame - v5 >= v6 ) /*0x69f6aa*/
        v6 = 0; /*0x69f6b0*/
      else
        v6 -= (int)g_CurrentFrame - v5; /*0x69f6ac*/
    }
    v4 = (double)(v3 - v6) / (double)(int)a1[11]; /*0x69f6bc*/
  }
  else
  {
    v4 = 1.0; /*0x69f68d*/
  }
  if ( v4 == 1.0 ) /*0x69f6cb*/
  {
    v7 = a1[2]; /*0x69f6cd*/
    if ( fabs(*(float *)(v7 + 808)) < 0.005 && fabs(*(float *)(v7 + 812)) < 0.005 ) /*0x69f6f8*/
    {
      if ( a3 && *a3 != -1 ) /*0x69f9cf*/
      {
        v24 = *a3 << 6; /*0x69f9d1*/
        *a3 = v24; /*0x69f9d4*/
        *a3 = v24 + a1[6]; /*0x69f9db*/
      }
      Transform = Turret::GetTransform((signed int)a1, v55, a3); /*0x69f9e7*/
      Transform::Copy(v54, Transform); /*0x69f9f4*/
      Matrix3x4::Identity(v50); /*0x69f9fd*/
      v26 = a1[11]; /*0x69fa02*/
      if ( !v26 ) /*0x69fa0b*/
        goto LABEL_48; /*0x69fa0b*/
      v27 = a1[8]; /*0x69fa11*/
      v28 = a1[10]; /*0x69fa14*/
      if ( v27 != -1 ) /*0x69fa20*/
      {
        if ( (int)g_CurrentFrame - v27 >= v28 ) /*0x69fa28*/
          v28 = 0; /*0x69fa2e*/
        else
          v28 -= (int)g_CurrentFrame - v27; /*0x69fa2a*/
      }
      if ( (double)(v26 - v28) / (double)(int)a1[11] < 1.0 ) /*0x69fa49*/
      {
        v29 = a1[11]; /*0x69fa4b*/
        if ( v29 ) /*0x69fa54*/
        {
          v31 = a1[8]; /*0x69fa5e*/
          v32 = a1[10]; /*0x69fa61*/
          if ( v31 != -1 ) /*0x69fa67*/
          {
            if ( (int)g_CurrentFrame - v31 >= v32 ) /*0x69fa6f*/
              v32 = 0; /*0x69fa75*/
            else
              v32 -= (int)g_CurrentFrame - v31; /*0x69fa71*/
          }
          v30 = (double)(v29 - v32) / (double)(int)a1[11]; /*0x69fa81*/
        }
        else
        {
          v30 = 1.0; /*0x69fa56*/
        }
        v33 = InterpolateVoxelAnimPose(v58, a1[7], a1[6], v30); /*0x69fa99*/
      }
      else
      {
LABEL_48:
        v34 = a1[6]; /*0x69faa0*/
        if ( !v34 ) /*0x69faa5*/
        {
LABEL_51:
          qmemcpy(v53, v50, sizeof(v53)); /*0x69fad9*/
          v39 = v54; /*0x69fadb*/
          v22 = v53; /*0x69fadc*/
          v23 = (float *)v57; /*0x69fae3*/
          goto LABEL_52; /*0x69fae3*/
        }
        v33 = CopyAudioData((char *)v56, v34); /*0x69fab0*/
      }
      qmemcpy(v50, v33, sizeof(v50)); /*0x69fac0*/
      goto LABEL_51; /*0x69fac0*/
    }
  }
  Matrix3x4::Identity(v51); /*0x69f702*/
  Matrix3x4::Identity(v52); /*0x69f70e*/
  v44 = *(double *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[2] + 132))(a1[2]) + 864); /*0x69f729*/
  v46 = *(double *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[2] + 132))(a1[2]) + 872); /*0x69f73f*/
  v40 = Math::ArcTan2(*(float *)(a1[2] + 812)); /*0x69f754*/
  v48 = Math::SinCos(*(float *)(a1[2] + 812)); /*0x69f769*/
  v42 = Math::ArcTan2(*(float *)(a1[2] + 808)); /*0x69f77e*/
  v8 = Math::SinCos(*(float *)(a1[2] + 808)); /*0x69f78b*/
  v49 = Math::RoundToInt(fabs(v8) * v44 + fabs(v48) * v46); /*0x69f7b2*/
  v41 = Math::RoundToInt(v40 * v46); /*0x69f7bb*/
  v9 = Math::RoundToInt(v46 - (double)v41); /*0x69f7d4*/
  v47 = v9; /*0x69f7d6*/
  v43 = Math::RoundToInt(v42 * v44); /*0x69f7df*/
  v10 = Math::RoundToInt(v44 - (double)v43); /*0x69f7eb*/
  v11 = a1[2]; /*0x69f7f0*/
  v45 = v10; /*0x69f7f5*/
  if ( *(float *)(v11 + 812) < 0.0 ) /*0x69f80a*/
    v47 = -v9; /*0x69f80e*/
  if ( *(float *)(v11 + 808) > 0.0 ) /*0x69f823*/
    v45 = -v10; /*0x69f827*/
  v36 = (float)v49; /*0x69f834*/
  Matrix3x3::ApplyCol1(v51, v36); /*0x69f837*/
  v37 = (float)v47; /*0x69f848*/
  Matrix3x4::Translate(v52, v37); /*0x69f84b*/
  v38 = (float)v45; /*0x69f85c*/
  Matrix3x3::ApplyCol0(v52, v38); /*0x69f85f*/
  Matrix3x3::RotateX(v52, *(float *)(a1[2] + 808)); /*0x69f875*/
  Matrix3D::RotateZ(v52, *(float *)(a1[2] + 812)); /*0x69f88b*/
  if ( a3 ) /*0x69f895*/
    *a3 = -1; /*0x69f897*/
  v12 = Turret::GetTransform((signed int)a1, v60, a3); /*0x69f8a7*/
  Transform::Copy(v53, v12); /*0x69f8b4*/
  Matrix3x4::Identity(v50); /*0x69f8bd*/
  v13 = a1[11]; /*0x69f8c2*/
  v14 = a1 + 8; /*0x69f8c5*/
  if ( v13 ) /*0x69f8ce*/
  {
    v15 = *v14; /*0x69f8d0*/
    v16 = a1[10]; /*0x69f8d2*/
    if ( *v14 != -1 ) /*0x69f8d8*/
    {
      if ( (int)g_CurrentFrame - v15 >= v16 ) /*0x69f8e4*/
        v16 = 0; /*0x69f8ea*/
      else
        v16 -= (int)g_CurrentFrame - v15; /*0x69f8e6*/
    }
    if ( (double)(v13 - v16) / (double)(int)a1[11] < 1.0 ) /*0x69f905*/
    {
      if ( a1[11] ) /*0x69f907*/
      {
        v18 = a1[11]; /*0x69f916*/
        v17 = (double)(v18 - Timeout::GetRemaining(v14)) / (double)v18; /*0x69f92c*/
      }
      else
      {
        v17 = 1.0; /*0x69f90e*/
      }
      v19 = InterpolateVoxelAnimPose(v59, a1[7], a1[6], v17); /*0x69f944*/
      goto LABEL_29; /*0x69f949*/
    }
  }
  v20 = a1[6]; /*0x69f94b*/
  if ( v20 ) /*0x69f950*/
  {
    v19 = CopyAudioData(v57, v20); /*0x69f95b*/
LABEL_29:
    qmemcpy(v50, v19, sizeof(v50)); /*0x69f96b*/
  }
  qmemcpy(v54, v50, sizeof(v54)); /*0x69f984*/
  v39 = v52; /*0x69f994*/
  v21 = MultiplyMatrix3x4(v56, v51, v54); /*0x69f9a2*/
  v22 = MultiplyMatrix3x4(v58, v21, v53); /*0x69f9b5*/
  v23 = v55; /*0x69f9b7*/
LABEL_52:
  qmemcpy(v51, MultiplyMatrix3x4(v23, v22, v39), sizeof(v51)); /*0x69faea*/
  qmemcpy(a2, v51, 0x30u); /*0x69fb0a*/
  return a2; /*0x69fb0c*/
}



// ==== 0x0069FB20  ShipLocomotionClass::ComputeAudio3DRotation_1  this=ShipLocomotionClass  sig=csp ====
float *__stdcall JumpjetLocomotionClass::sub_69FB20(_DWORD *a1, float *a2, _DWORD *a3)
{
  int v3; // edi
  double v4; // st7
  int v5; // edx
  int v6; // eax
  int v7; // edx
  float v9[12]; // [esp+Ch] [ebp-30h] BYREF

  v3 = a1[11]; /*0x69fb29*/
  if ( v3 ) /*0x69fb32*/
  {
    v5 = a1[8]; /*0x69fb3c*/
    v6 = a1[10]; /*0x69fb3f*/
    if ( v5 != -1 ) /*0x69fb45*/
    {
      if ( (int)g_CurrentFrame - v5 >= v6 ) /*0x69fb51*/
        v6 = 0; /*0x69fb57*/
      else
        v6 -= (int)g_CurrentFrame - v5; /*0x69fb53*/
    }
    v4 = (double)(v3 - v6) / (double)(int)a1[11]; /*0x69fb63*/
  }
  else
  {
    v4 = 1.0; /*0x69fb34*/
  }
  if ( v4 != 1.0 || (v7 = a1[2], fabs(*(float *)(v7 + 808)) >= 0.005) || fabs(*(float *)(v7 + 812)) >= 0.005 ) /*0x69fba3*/
  {
    if ( a3 ) /*0x69fba7*/
      *a3 = -1; /*0x69fba9*/
  }
  qmemcpy(a2, Audio3D::ComputeRotation((int)a1, v9, a3), 0x30u); /*0x69fbc8*/
  return a2; /*0x69fbca*/
}



// ==== 0x0069FBE0  ShipLocomotionClass::DispatchVirtualCall_6  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_69FBE0(int *a1)
{
  int v1; // edi
  int v2; // eax

  v1 = *a1; /*0x69fbe9*/
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1[2] + 444))(a1[2]); /*0x69fbed*/
  return (*(int (__stdcall **)(int *, _DWORD))(v1 + 124))(a1, *(unsigned __int8 *)(v2 + 284)); /*0x69fc00*/
}



// ==== 0x0069FC10  ShipLocomotionClass::ProcessImpact  this=ShipLocomotionClass  sig=csp ====
char __stdcall WalkLocomotionClass_Process(int a1)
{
  int v1; // esi
  int v2; // edi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  _DWORD *v6; // ecx
  _WORD *v7; // ebp
  _WORD *v8; // eax
  _DWORD *v9; // ecx
  _DWORD *v11; // ecx
  _BYTE *v12; // ecx
  void **v13; // eax
  int *v14; // ecx
  int v15; // ecx
  _BYTE *v16; // eax
  int v17; // eax
  int v18; // ecx
  _DWORD *v19; // eax
  _BYTE *v20; // ecx
  _DWORD *v21; // ecx
  char v22; // [esp-4h] [ebp-24h]
  int v23; // [esp+10h] [ebp-10h] BYREF
  int v24; // [esp+14h] [ebp-Ch]
  int v25; // [esp+18h] [ebp-8h]

  v1 = a1; /*0x69fc16*/
  v2 = a1 - 4; /*0x69fc28*/
  v3 = *(unsigned __int8 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 444))(*(_DWORD *)(a1 + 8)) + 284); /*0x69fc31*/
  v4 = *(_DWORD *)(v2 + 28); /*0x69fc33*/
  if ( v3 != v4 ) /*0x69fc38*/
  {
    *(_DWORD *)(v2 + 32) = v4; /*0x69fc3a*/
    *(_DWORD *)(v2 + 28) = v3; /*0x69fc43*/
    Timer::Start(&v23, 3); /*0x69fc46*/
    *(_DWORD *)(v2 + 36) = v23; /*0x69fc57*/
    *(_DWORD *)(v2 + 40) = v24; /*0x69fc5d*/
    *(_DWORD *)(v2 + 44) = v25; /*0x69fc64*/
    *(_DWORD *)(v2 + 48) = 3; /*0x69fc67*/
  }
  if ( *(_DWORD *)(v1 + 84) == -1 || !*(_BYTE *)(v1 + 95) ) /*0x69fc7a*/
  {
    v5 = *(_DWORD *)(*(_DWORD *)(v1 + 8) + 1444); /*0x69fd16*/
    if ( v5 /*0x69fd54*/
      && (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 11
      && (v6 = *(_DWORD **)(v1 + 8),
          v7 = (_WORD *)(v6[361] + 36),
          v8 = (_WORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v6 + 440))(v6, &a1),
          *v8 == *v7)
      && v8[1] == v7[1] )
    {
      v9 = *(_DWORD **)(v2 + 12); /*0x69fd56*/
      if ( !v9[358] ) /*0x69fd59*/
        goto LABEL_20; /*0x69fd5f*/
    }
    else
    {
      v11 = *(_DWORD **)(v1 + 8); /*0x69fd7f*/
      if ( v11[43] != 5 /*0x69fddc*/
        || *(_BYTE *)(v1 + 95)
        || *(_DWORD *)(v1 + 48) == g_OverlayTypeConfig && *(_QWORD *)(v1 + 52) == qword_B077FC
        || v11[39] != *(_DWORD *)(v1 + 48)
        || v11[40] != *(_DWORD *)(v1 + 52)
        || v11[41] != *(_DWORD *)(v1 + 56) )
      {
        if ( TimerClass::Active((int)(v11 + 226)) ) /*0x69fe28*/
        {
          *(_BYTE *)(v1 + 94) = 1; /*0x69fe35*/
          goto LABEL_32; /*0x69fe35*/
        }
        if ( *(_BYTE *)(v1 + 94) ) /*0x69ff5d*/
        {
          *(_BYTE *)(v1 + 94) = 0; /*0x69ff62*/
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v1 + 8) + 396))(*(_DWORD *)(v1 + 8), 0); /*0x69ff6b*/
          v16 = *(_BYTE **)(v1 + 8); /*0x69ff71*/
          if ( !v16[144] || v16[129] || v16[141] ) /*0x69ff84*/
            return 0; /*0x69ff95*/
        }
        if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 388))(*(_DWORD *)(v1 + 8)) == 5 /*0x69ffc4*/
          && !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1)
          || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 388))(*(_DWORD *)(v1 + 8)) == 16 )
        {
          goto LABEL_32; /*0x69ffc4*/
        }
        if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1) ) /*0x69ffcd*/
        {
          v17 = *(_DWORD *)(v1 + 8); /*0x69ffd8*/
          if ( *(_DWORD *)(v17 + 1504) == -1 ) /*0x69ffe1*/
          {
            if ( *(_BYTE *)(v17 + 973) ) /*0x69ffe7*/
            {
              if ( *(_DWORD *)(v2 + 64) != g_OverlayTypeConfig || *(_QWORD *)(v2 + 68) != qword_B077FC ) /*0x6a0006*/
              {
                *(_DWORD *)(v2 + 64) = g_OverlayTypeConfig; /*0x6a0015*/
                *(_QWORD *)(v2 + 68) = qword_B077FC; /*0x6a001d*/
                *(_BYTE *)(v2 + 99) = 0; /*0x6a0029*/
              }
              *(_DWORD *)(v1 + 76) = 0; /*0x6a002c*/
              *(_DWORD *)(v1 + 80) = 0; /*0x6a002f*/
            }
            else
            {
              v18 = *(_DWORD *)(v17 + 1444); /*0x6a0037*/
              if ( v18 ) /*0x6a003f*/
              {
                v19 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v18 + 76))( /*0x6a004d*/
                                  v18,
                                  &v23,
                                  *(_DWORD *)(v1 + 8));
                (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v1 + 68))(v1, *v19, v19[1], v19[2]); /*0x6a0069*/
              }
            }
            goto LABEL_32; /*0x6a0032*/
          }
        }
        v20 = *(_BYTE **)(v1 + 8); /*0x6a0074*/
        if ( v20[981] /*0x6a00ab*/
          && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v20 + 388))(v20) != 7
          && (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1)
          && !(*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(v1 + 8) + 716))(
                *(_DWORD *)(v1 + 8),
                v1 + 48) )
        {
          if ( *(_DWORD *)(v2 + 64) != g_OverlayTypeConfig || *(_QWORD *)(v2 + 68) != qword_B077FC ) /*0x6a00cc*/
          {
            *(_DWORD *)(v2 + 64) = g_OverlayTypeConfig; /*0x6a00db*/
            *(_QWORD *)(v2 + 68) = qword_B077FC; /*0x6a00e3*/
            *(_BYTE *)(v2 + 99) = 0; /*0x6a00ef*/
          }
          v21 = *(_DWORD **)(v2 + 12); /*0x6a00f2*/
          if ( v21[358] ) /*0x6a00f5*/
          {
            FootClass::ClearPathIndex(v21); /*0x6a010d*/
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(v2 + 12) + 1156))( /*0x6a011a*/
                   *(_DWORD *)(v2 + 12),
                   0,
                   1) )
            {
              return 0; /*0x6a0131*/
            }
          }
          else
          {
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v21 + 1152))(v21, 0, 1); /*0x6a0102*/
          }
          goto LABEL_32; /*0x6a0108*/
        }
        LOBYTE(a1) = 0; /*0x6a013e*/
        WalkLocomotion::Update(v1 - 4, &a1, 1, 0); /*0x6a0142*/
        if ( (_BYTE)a1 ) /*0x6a014b*/
          return 0; /*0x6a0156*/
        if ( !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 144) ) /*0x6a015c*/
          return 0; /*0x6a016d*/
        v22 = 0; /*0x6a0170*/
        goto LABEL_81; /*0x6a0170*/
      }
      v9 = *(_DWORD **)(v2 + 12); /*0x69fdde*/
      if ( !v9[358] ) /*0x69fde7*/
      {
LABEL_20:
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v9 + 1152))(v9, 0, 1); /*0x69fd65*/
        return 0; /*0x69fd79*/
      }
    }
    FootClass::ClearPathIndex(v9); /*0x69fe00*/
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(v2 + 12) + 1156))(*(_DWORD *)(v2 + 12), 0, 1); /*0x69fe0d*/
    return 0; /*0x69fe1c*/
  }
  if ( WalkLocomotion::ProcessCollision(v1 - 4, 0) || !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 144) ) /*0x69fc96*/
    return 0; /*0x69fc9c*/
  if ( *(_DWORD *)(v1 + 84) != -1 /*0x69fcd4*/
    || !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1)
    && *(_DWORD *)(*(_DWORD *)(v1 + 8) + 1504) == -1
    || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 44))(*(_DWORD *)(v1 + 8)) == 1
    && *(_BYTE *)(*(_DWORD *)(v1 + 8) + 1745) )
  {
    goto LABEL_32; /*0x69fcda*/
  }
  LOBYTE(a1) = 0; /*0x69fcea*/
  WalkLocomotion::Update(v1 - 4, &a1, 1, 0); /*0x69fcee*/
  if ( (_BYTE)a1 || !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 144) ) /*0x69fd00*/
    return 0; /*0x69fd06*/
  v22 = 1; /*0x69fd0c*/
LABEL_81:
  WalkLocomotion::ProcessCollision(v1 - 4, v22); /*0x6a0171*/
  if ( !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 144) ) /*0x6a017b*/
    return 0; /*0x6a018a*/
LABEL_32:
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 128))(v1) ) /*0x69fe3c*/
  {
    if ( !((int)g_CurrentFrame % 8) /*0x69fe6e*/
      && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 132))(*(_DWORD *)(v1 + 8)) + 3433) )
    {
      v12 = *(_BYTE **)(v1 + 8); /*0x69fe76*/
      if ( !v12[140] && *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v12 + 444))(v12) + 236) == 2 ) /*0x69fe90*/
      {
        if ( g_RulesClass_Instance->FlamingInfantry ) /*0x69fe97*/
        {
          v13 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x69fea4*/
          if ( v13 ) /*0x69feae*/
          {
            v14 = (int *)(*(_DWORD *)(v1 + 8) + 156); /*0x69feb4*/
            v23 = *v14; /*0x69fec5*/
            v24 = v14[1]; /*0x69fecc*/
            v25 = v14[2]; /*0x69fed8*/
            AnimClass::ctor(v13, (void *)g_RulesClass_Instance->FlamingInfantry, &v23, 0, 1, (void *)0x600, 0, 0); /*0x69feeb*/
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(v1 + 48) == g_OverlayTypeConfig /*0x69ff1e*/
    && *(_DWORD *)(v1 + 52) == (_DWORD)qword_B077FC
    && *(_QWORD *)(v1 + 56) == __PAIR64__(g_OverlayTypeConfig, HIDWORD(qword_B077FC))
    && *(_QWORD *)(v1 + 64) == qword_B077FC )
  {
    v15 = *(_DWORD *)(v1 + 8); /*0x69ff25*/
    if ( *(_DWORD *)(v15 + 1504) == -1 && *(double *)(v15 + 1400) > 0.0 ) /*0x69ff41*/
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v15 + 1348))(v15, 0, 0); /*0x69ff47*/
  }
  return (*(int (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1); /*0x69fd72*/
}



// ==== 0x00690150  nullsub_227  this=-  sig=ida-proto ====
void __cdecl nullsub_227()
{
  ; /*0x690150*/
}


// ==== 0x00690160  Screen::TransitionLoop  this=Screen  sig=csp ====
int __thiscall Screen::TransitionLoop(MPCooperative *this, int a2)
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
  DWORD Ticks; // [esp+24h] [ebp-48h]
  int v16; // [esp+2Ch] [ebp-40h]
  _DWORD v17[4]; // [esp+3Ch] [ebp-30h] BYREF
  struct tagRECT Rect; // [esp+4Ch] [ebp-20h] BYREF
  _DWORD v19[4]; // [esp+5Ch] [ebp-10h] BYREF

  Ticks = Timer::GetTicks(); /*0x690178*/
  v16 = 1; /*0x69017c*/
  do
  {
    Screen::CleanupTransitionObjects(this); /*0x690189*/
    GetClientRect(g_hWnd, &Rect); /*0x69019a*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x6901ab*/
    v3 = *(_DWORD *)this->field_0; /*0x6901b1*/
    v4 = *(_DWORD *)&this->?[3]; /*0x6901c4*/
    v17[0] = *(_DWORD *)this->field_0 + Rect.left; /*0x6901c7*/
    v17[1] = v4 + Rect.top; /*0x6901d7*/
    v17[2] = 640; /*0x6901db*/
    v17[3] = 400; /*0x6901e3*/
    Rect::Set(v19, v3, v4, 640, 400); /*0x6901eb*/
    if ( MEMORY[0x887640] ) /*0x6901f8*/
      (*(void (__thiscall **)(int, IUnknown *, _DWORD))(*(_DWORD *)MEMORY[0x887640] + 60))( /*0x690205*/
        MEMORY[0x887640],
        MEMORY[0x88730C],
        0);
    (*(void (__thiscall **)(int, _DWORD *, IUnknown *, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))( /*0x690225*/
      MEMORY[0x887308],
      v17,
      MEMORY[0x88730C],
      v19,
      0,
      1);
    if ( MEMORY[0x887640] ) /*0x690230*/
      (*(void (__thiscall **)(int, IUnknown *, _DWORD))(*(_DWORD *)MEMORY[0x887640] + 64))( /*0x69023d*/
        MEMORY[0x887640],
        MEMORY[0x88730C],
        0);
    do
    {
      Event::Dispatch(); /*0x690240*/
      MessageLoop(); /*0x690245*/
      if ( !MEMORY[0xA8EA70].__pad_310[0] )
      {
        if ( Ticks == -1
          || ((v5 = Timer::GetTicks() - Ticks, v5 >= v16) ? (v6 = 0) : (v6 = v16 - v5),
              v16 = v6,
              MEMORY[0xA8EA70].__pad_310[0] != 1) )
        {
          for ( i = 0; i < (int)this->field_2C; ++i ) /*0x690292*/
          {
            v8 = *(_DWORD *)(*(_DWORD *)&this->__pad_18[8] + 4 * i); /*0x690297*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8); /*0x69029c*/
          }
          while ( !MEMORY[0xA8EA70].__pad_310[0] ) /*0x6902ae*/
          {
            Sleep(0x1F4u); /*0x6902b5*/
            MessageLoop(); /*0x6902b7*/
          }
          for ( j = 0; j < (int)this->field_2C; ++j ) /*0x6902cc*/
          {
            v10 = *(_DWORD *)(*(_DWORD *)&this->__pad_18[8] + 4 * j); /*0x6902d1*/
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


// ==== 0x00690360  Screen::CleanupTransitionObjects  this=MultiplayerGameMode  sig=csp ====
int __thiscall Screen::CleanupTransitionObjects(MPCooperative *this)
{
  int result; // eax
  int i; // edi
  int v4; // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  char *v6; // eax
  char *v7; // ecx
  int v8; // eax

  MEMORY[0xB05584] = 0; /*0x69036b*/
  if ( MEMORY[0x8A00A0] ) /*0x690372*/
  {
    MEMORY[0x8A00A0] = 0; /*0x69037a*/
    (*(void (__thiscall **)(IUnknown *, _DWORD))(MEMORY[0x88730C]->field_0 + 24))(MEMORY[0x88730C], 0); /*0x690385*/
    (*(void (__thiscall **)(IUnknown *, int, _DWORD, int))(MEMORY[0x88730C]->field_0 + 4))( /*0x69039a*/
      MEMORY[0x88730C],
      MEMORY[0x887310],
      0,
      1);
  }
  result = (int)this->field_2C; /*0x69039d*/
  for ( i = 0; i < result; ++i ) /*0x6903a4*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)&this->__pad_18[8] + 4 * i); /*0x6903ad*/
    if ( (*(unsigned __int8 (__thiscall **)(int, void *))(*(_DWORD *)v4 + 12))(v4, this->field_8) == 1 ) /*0x6903b7*/
    {
      v5 = *(void (__thiscall ****)(_DWORD, int))(*(_DWORD *)&this->__pad_18[8] + 4 * i); /*0x6903bc*/
      if ( v5 ) /*0x6903c1*/
        (**v5)(v5, 1); /*0x6903c7*/
      v6 = (char *)this->field_2C; /*0x6903c9*/
      if ( i < (int)v6 ) /*0x6903ce*/
      {
        v7 = v6 - 1; /*0x6903d0*/
        v8 = i; /*0x6903d3*/
        for ( this->field_2C = v7; /*0x6903da*/
              v8 < (int)this->field_2C;
              *(_DWORD *)(*(_DWORD *)&this->__pad_18[8] + 4 * v8 - 4) = *(_DWORD *)(*(_DWORD *)&this->__pad_18[8]
                                                                                  + 4 * v8) )
        {
          ++v8; /*0x6903df*/
        }
      }
    }
    result = (int)this->field_2C; /*0x6903ee*/
  }
  return result; /*0x6903f6*/
}


// ==== 0x00690400  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_690400(int *this)
{
  int v2; // eax
  int v3; // esi
  int result; // eax
  _DWORD v5[4]; // [esp+8h] [ebp-30h] BYREF
  _DWORD v6[4]; // [esp+18h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+28h] [ebp-10h] BYREF

  GetClientRect(g_hWnd, &Rect); /*0x690412*/
  ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x690423*/
  v2 = *this; /*0x690429*/
  v3 = this->vtable2; /*0x69042f*/
  v5[0] = v2; /*0x690432*/
  v6[0] = v2 + Rect.left; /*0x69043d*/
  v5[1] = v3; /*0x690441*/
  v6[3] = 400; /*0x69044d*/
  v5[3] = 400; /*0x690451*/
  v6[1] = v3 + Rect.top; /*0x69045b*/
  v6[2] = 640; /*0x690467*/
  v5[2] = 640; /*0x69046b*/
  if ( MEMORY[0x887640] ) /*0x69046f*/
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)MEMORY[0x887640] + 60))(MEMORY[0x887640], MEMORY[0x88730C], 0); /*0x69047c*/
  result = (*(int (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))( /*0x69049c*/
             MEMORY[0x887308],
             v6,
             MEMORY[0x88730C],
             v5,
             0,
             1);
  if ( MEMORY[0x887640] ) /*0x6904a7*/
    return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)MEMORY[0x887640] + 64))( /*0x6904b4*/
             MEMORY[0x887640],
             MEMORY[0x88730C],
             0);
  return result; /*0x6904b7*/
}


// ==== 0x00690530  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_690530(_DWORD *this, void *a2, int a3)
{
  int i; // esi

  if ( a2 ) /*0x69053b*/
  {
    if ( Audio::IsSoundEnabled() ) /*0x69053d*/
    {
      for ( i = 0; i < this->q044; ++i ) /*0x69054d*/
      {
        if ( !_strcmpi(a2, **(const void ***)(this->attachedBomb + 4 * i)) ) /*0x690559*/
          break; /*0x690563*/
      }
    }
  }
}


// ==== 0x006905F0  ScoreFontClass::method_6905F0  this=ScoreFontClass  sig=csp ====
char *__thiscall sub_6905F0(_DWORD *this)
{
  void *v2; // eax
  char *result; // eax

  v2 = (void *)this->q00C; /*0x6905f6*/
  *this = &vt_ScoreFontClass; /*0x6905f9*/
  if ( v2 && this->q040 == 1 ) /*0x690607*/
  {
    __3_YAXPAX_Z(v2); /*0x69060a*/
    this->q00C = 0; /*0x690612*/
    this->q040 = 0; /*0x690615*/
  }
  result = (char *)--MEMORY[0xB0558C]; /*0x69061d*/
  if ( !MEMORY[0xB0558C] ) /*0x690623*/
  {
    result = &MEMORY[0xB05594]; /*0x690625*/
    do /*0x690637*/
    {
      *((_DWORD *)result - 1) = 0; /*0x69062a*/
      *result = 0; /*0x69062d*/
      result += 8; /*0x69062f*/
    }
    while ( (int)result < (int)((char *)&MEMORY[0xB055A8] + 4) ); /*0x690637*/
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
    MEMORY[0xB05590] = SearchMIXFile(MEMORY[0x83E640], 0); /*0x690667*/
    if ( !MEMORY[0xB05590] ) /*0x69066c*/
    {
      (*(void (__thiscall **)(_DWORD *, char *))(v1[0] + 8))(v1, MEMORY[0x83E640]); /*0x69067b*/
      (*(void (__thiscall **)(_DWORD *, int))(v1[0] + 28))(v1, 1); /*0x690688*/
      MEMORY[0xB05590] = (int)CCFileClass::ReadEntireFile(v1); /*0x690698*/
      MEMORY[0xB05594] = 1; /*0x69069d*/
      CCFileClass::Reset(v1); /*0x6906a4*/
      Debug::Log(); /*0x6906ae*/
    }
    MEMORY[0xB05598] = SearchMIXFile(MEMORY[0x83E614], 0); /*0x6906c4*/
    if ( !MEMORY[0xB05598] ) /*0x6906c9*/
    {
      (*(void (__thiscall **)(_DWORD *, char *))(v1[0] + 8))(v1, MEMORY[0x83E614]); /*0x6906d8*/
      (*(void (__thiscall **)(_DWORD *, int))(v1[0] + 28))(v1, 1); /*0x6906e5*/
      MEMORY[0xB05598] = (int)CCFileClass::ReadEntireFile(v1); /*0x6906f5*/
      MEMORY[0xB0559C] = 1; /*0x6906fa*/
      CCFileClass::Reset(v1); /*0x690701*/
      Debug::Log(); /*0x69070b*/
    }
    MEMORY[0xB055A0] = SearchMIXFile(MEMORY[0x83E5E8], 0); /*0x690721*/
    if ( !MEMORY[0xB055A0] ) /*0x690726*/
    {
      (*(void (__thiscall **)(_DWORD *, char *))(v1[0] + 8))(v1, MEMORY[0x83E5E8]); /*0x690735*/
      (*(void (__thiscall **)(_DWORD *, int))(v1[0] + 28))(v1, 1); /*0x690742*/
      MEMORY[0xB055A0] = (int)CCFileClass::ReadEntireFile(v1); /*0x690752*/
      MEMORY[0xB055A4] = 1; /*0x690757*/
      CCFileClass::Reset(v1); /*0x69075e*/
      Debug::Log(); /*0x690768*/
    }
    v1[0] = &vt_CCFileClass; /*0x690774*/
    v3 = 0; /*0x69077c*/
    Vector::Clear((int)v2); /*0x690784*/
    v1[0] = &off_7E1668; /*0x69078d*/
    return BufferIOFileClass::Dtor(v1); /*0x690795*/
  }
  return result; /*0x69079a*/
}


// ==== 0x006907A0  ScoreFontClass::Release  this=ScoreFontClass  sig=csp ====
int __thiscall ScoreFontClass::_vt02(void *this, __int16 *a2)
{
  __int16 *v2; // edi
  int v3; // esi
  __int16 i; // ax

  v2 = a2; /*0x6907a3*/
  v3 = 0; /*0x6907a7*/
  for ( i = *a2; *v2; i = *v2 ) /*0x6907ab*/
  {
    ++v2; /*0x6907b8*/
    v3 += (*(int (__thiscall **)(void *, __int16))(this->q004)(this, i) + 1; /*0x6907be*/
  }
  return v3; /*0x6907cc*/
}


// ==== 0x006907E0  ScoreFontClass::AddRef  this=ScoreFontClass  sig=csp ====
int __stdcall ScoreFontClass::_vt01(__int16 szSrc)
{
  int v2; // eax
  CHAR szDst; // [esp+7h] [ebp-11h] BYREF
  _DWORD v4[4]; // [esp+8h] [ebp-10h] BYREF

  if ( szSrc == 32 ) /*0x6907f3*/
    return 8; /*0x6907f5*/
  CharToOemBuffA((LPCSTR)&szSrc, &szDst, 1u); /*0x69080d*/
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
void __thiscall BuildingClass_DrawFoundationChar2(int *this, int a2, CHAR szSrc, int a4, int a5, int a6, int a7)
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
    DrawToSurfaceSHP(a2, this->q005, this->q00C, a6 + v9, v12, v11, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6908fd*/
  }
}


// ==== 0x00690910  ScoreFontClass::DrawFoundationChar  this=ScoreFontClass  sig=csp ====
__int16 __thiscall BuildingClass_DrawFoundationChar(int *this, int szSrc, _WORD *a3, int a4, int a5, int a6)
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
        DrawToSurfaceSHP(v9, this->q005, this->q00C, a6 + v11, v18, v13, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6909cb*/
        v6 = a3; /*0x6909d0*/
      }
      v14 = (*(int (__thiscall **)(int *, _WORD))(*this + 4))(this, *v6++); /*0x6909dc*/
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
_DWORD *__thiscall ScoreScreen::LoadScoreFont(_DWORD *this, ScoreFontClass *aP1)
{
  IUnknown *v3; // edx
  int v4; // eax
  _DWORD v6[22]; // [esp+8h] [ebp-6Ch] BYREF
  _BYTE v7[12]; // [esp+60h] [ebp-14h] BYREF
  int v8; // [esp+6Ch] [ebp-8h]

  this->q004 = 0; /*0x690a19*/
  this->q008 = 0; /*0x690a1c*/
  this->q00C = 0; /*0x690a1f*/
  this->q050 = 0; /*0x690a22*/
  *this = &vt_ScoreFontClass; /*0x690a25*/
  ScoreScreen::LoadAudio(); /*0x690a2b*/
  v3 = (IUnknown *)++*(_DWORD *)&stru_B05488.__pad_FC[8]; /*0x690a3b*/
  LOBYTE(v3) = 0; /*0x690a42*/
  *this = &vt_ScoreFullFontClass; /*0x690a44*/
  this->q040 = 0; /*0x690a4a*/
  v4 = SearchMIXFile((char *)&stru_830620.field_44, v3); /*0x690a4d*/
  this->q00C = v4; /*0x690a54*/
  if ( !v4 ) /*0x690a57*/
  {
    CCFileClass::Construct(v6, (char *)&stru_830620.field_44); /*0x690a62*/
    this->q00C = CCFileClass::ReadEntireFile(v6); /*0x690a74*/
    this->q040 = 1; /*0x690a77*/
    CCFileClass::Reset(v6); /*0x690a7b*/
    Debug::Log(); /*0x690a85*/
    v6[0] = &vt_CCFileClass; /*0x690a91*/
    v8 = 0; /*0x690a99*/
    Vector::Clear((int)v7); /*0x690a9d*/
    v6[0] = &off_7E1668; /*0x690aa6*/
    BufferIOFileClass::Dtor(v6); /*0x690aae*/
  }
  this->q004 = 11; /*0x690ab7*/
  this->q050 = aP1; /*0x690abe*/
  this->q008 = 21; /*0x690ac1*/
  return this; /*0x690aca*/
}


// ==== 0x00690AE0  ScoreScreen::LoadCountryFlags  this=ScoreFontClass  sig=csp ====
_DWORD *__thiscall sub_690AE0(_DWORD *this, int a2)
{
  int v3; // eax
  _DWORD v5[22]; // [esp+8h] [ebp-6Ch] BYREF
  _BYTE v6[12]; // [esp+60h] [ebp-14h] BYREF
  int v7; // [esp+6Ch] [ebp-8h]

  this->q004 = 0; /*0x690ae9*/
  this->q008 = 0; /*0x690aec*/
  this->q00C = 0; /*0x690aef*/
  this->q050 = 0; /*0x690af2*/
  *this = &vt_ScoreFontClass; /*0x690af5*/
  ScoreScreen::LoadAudio(); /*0x690afb*/
  ++MEMORY[0xB0558C]; /*0x690b0c*/
  *this = &vt_ScoreBigFontClass; /*0x690b14*/
  this->q040 = 0; /*0x690b1a*/
  v3 = SearchMIXFile(MEMORY[0x83E6DC], 0); /*0x690b1d*/
  this->q00C = v3; /*0x690b24*/
  if ( !v3 ) /*0x690b27*/
  {
    CCFileClass::Construct(v5, MEMORY[0x83E6DC]); /*0x690b32*/
    this->q00C = CCFileClass::ReadEntireFile(v5); /*0x690b44*/
    this->q040 = 1; /*0x690b47*/
    CCFileClass::Reset(v5); /*0x690b4b*/
    Debug::Log(); /*0x690b55*/
    v5[0] = &vt_CCFileClass; /*0x690b61*/
    v7 = 0; /*0x690b69*/
    Vector::Clear((int)v6); /*0x690b6d*/
    v5[0] = &off_7E1668; /*0x690b76*/
    BufferIOFileClass::Dtor(v5); /*0x690b7e*/
  }
  this->q004 = 20; /*0x690b87*/
  this->q050 = a2; /*0x690b8e*/
  this->q008 = 35; /*0x690b91*/
  return this; /*0x690b9a*/
}


// ==== 0x00690C00  ScoreTimeClass::AdvanceFrame  this=ScoreTimeClass  sig=csp ====
char __thiscall ScoreAnimClass::AdvanceFrame(ScoreTimeClass *this, int a2)
{
  signed int v3; // edi
  signed int v4; // eax
  int v5; // edi
  DWORD Ticks; // eax
  int v7; // edx
  int v8; // ecx
  int *v9; // eax
  int *v10; // eax
  int v12; // [esp+8h] [ebp-1Ch] BYREF
  int v13; // [esp+Ch] [ebp-18h]
  _BYTE v14[16]; // [esp+14h] [ebp-10h] BYREF

  v3 = this->q014; /*0x690c0a*/
  if ( this->u32_C == -1 ) /*0x690c10*/
  {
LABEL_4:
    if ( v3 ) /*0x690c25*/
      return 0; /*0x690c25*/
    goto LABEL_5; /*0x690c25*/
  }
  v4 = Timer::GetTicks() - this->u32_C; /*0x690c1a*/
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
  this->u32_C = Ticks; /*0x690c3d*/
  this->q004 = v13; /*0x690c45*/
  this->q014 = v5; /*0x690c4a*/
  this->q01C = v7 + 1; /*0x690c4f*/
  if ( v7 + 1 >= v8 ) /*0x690c52*/
    this->q01C = 0; /*0x690c54*/
  v12 = this->q004; /*0x690c6d*/
  v13 = this->q008; /*0x690c7c*/
  v9 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9408] + 120))( /*0x690c8c*/
                *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9408],
                v14);
  DrawToSurfaceSHP( /*0x690ca6*/
    *(int *)&MEMORY[0x87F8E4].__pad_5568[9408],
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
  v12 = this->q004; /*0x690cbd*/
  v13 = this->q008; /*0x690ccc*/
  v10 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9412] + 120))( /*0x690cdc*/
                 *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
                 v14);
  DrawToSurfaceSHP( /*0x690cf6*/
    *(int *)&MEMORY[0x87F8E4].__pad_5568[9412],
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
char __thiscall ScoreAnimClass::AnimateText(ScorePrintClass *this)
{
  signed int v1; // ebp
  signed int v3; // edi
  signed int v4; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // ebx
  char v12; // dl
  int v13; // ebp
  signed int v14; // [esp+3Ch] [ebp-24h]
  int v15; // [esp+4Ch] [ebp-14h]
  int v16; // [esp+50h] [ebp-10h] BYREF
  int v17; // [esp+54h] [ebp-Ch]
  int v18; // [esp+58h] [ebp-8h]
  int v19; // [esp+5Ch] [ebp-4h]

  MEMORY[0xB05584] = 1; /*0x690d63*/
  v3 = this->q014; /*0x690d71*/
  if ( this->u32_C == -1 ) /*0x690d77*/
  {
LABEL_4:
    if ( v3 ) /*0x690d8c*/
      return 0; /*0x690d8c*/
    goto LABEL_5; /*0x690d8c*/
  }
  v4 = Timer::GetTicks() - this->u32_C; /*0x690d81*/
  if ( v4 < v3 ) /*0x690d86*/
  {
    v3 -= v4; /*0x690d88*/
    goto LABEL_4; /*0x690d88*/
  }
LABEL_5:
  this->u32_C = Timer::GetTicks(); /*0x690d92*/
  this->q004 = v17; /*0x690da7*/
  this->q014 = 2; /*0x690daa*/
  if ( this->q01C > wcslen(*((const wchar_t **)this + 6)) && *((int *)this + 8) > 2 ) /*0x690dc4*/
    return 1; /*0x690dcd*/
  if ( !this->q024 )
  {
    v6 = (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 10) + 8))( /*0x690de0*/
           this->q028,
           this->q018);
    v7 = this->q004 - 8 <= 0 ? 0 : this->q004 - 8;
    v8 = *(_DWORD *)(this->q028 + 8); /*0x690dfd*/
    v18 = v6 + 10; /*0x690e00*/
    v16 = v7; /*0x690e04*/
    v17 = this->q008; /*0x690e0f*/
    v19 = v8; /*0x690e1f*/
    (*(void (__thiscall **)(_DWORD, int *, _DWORD, int *, _DWORD, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9408] /*0x690e2b*/
                                                                      + 8))(
      *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9408],
      &v16,
      *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
      &v16,
      0,
      1);
  }
  v9 = this->q01C; /*0x690e2e*/
  v10 = 0; /*0x690e31*/
  v11 = this->q004; /*0x690e34*/
  v14 = v1; /*0x690e39*/
  v15 = 0; /*0x690e3a*/
  if ( v9 >= 0 ) /*0x690e3e*/
  {
    while ( 1 ) /*0x690e4d*/
    {
      v12 = *(_BYTE *)(this->q018 + 2 * v10); /*0x690e4d*/
      if ( !v12 ) /*0x690e52*/
        break; /*0x690e52*/
      if ( this->q024 == 1 || (v13 = v9 - v10, v9 - v10 >= 2) ) /*0x690e61*/
        v13 = 2; /*0x690e63*/
      LOWORD(v3) = v12; /*0x690e6d*/
      (*(void (__thiscall **)(_DWORD, _DWORD, signed int, int, _DWORD, int, int, signed int))(**((_DWORD **)this + 10) /*0x690e81*/
                                                                                            + 16))(
        this->q028,
        *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9408],
        v3,
        v11,
        this->q008,
        v13,
        1,
        v14);
      if ( v13 == 2 ) /*0x690e87*/
        (*(void (__thiscall **)(_DWORD, _DWORD, signed int, int, _DWORD, int, _DWORD))(**((_DWORD **)this + 10) + 16))( /*0x690e9e*/
          this->q028,
          *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
          v3,
          v11,
          this->q008,
          2,
          0);
      v14 = v3; /*0x690ea4*/
      v11 += (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 10) + 4))(this->q028) + 1; /*0x690eae*/
      v9 = this->q01C; /*0x690eb2*/
      if ( ++v15 > v9 ) /*0x690ebc*/
      {
        this->q01C = v9 + 1; /*0x690ec1*/
        return 0; /*0x690ecb*/
      }
      v10 = v15; /*0x690e46*/
    }
    ++this->q008; /*0x690ece*/
  }
  ++this->q01C; /*0x690ed7*/
  return 0; /*0x690dc6*/
}


// ==== 0x00690F30  ScoreScreen::Constructor  this=ScoreAnimClass  sig=csp ====
_DWORD *__thiscall ScoreScreen::Constructor(_DWORD *this, ScoreAnimClass *aP1, int a3, int a4)
{
  this->q008 = a3; /*0x690f3b*/
  this->q004 = aP1; /*0x690f41*/
  this->u32_C = Timer::GetTicks(); /*0x690f4d*/
  this->q014 = 0; /*0x690f50*/
  this->q018 = a4; /*0x690f57*/
  *this = &vt_ScoreAnimClass; /*0x690f5a*/
  return this; /*0x690f62*/
}


// ==== 0x00690F70  ScoreAnimClass::AddRef  this=ScoreAnimClass  sig=csp ====
signed int __thiscall ScoreAnimClass::_vt01(signed int *this)
{
  signed int result; // eax
  signed int v3; // edi

  result = this->u32_C; /*0x690f73*/
  if ( result != -1 ) /*0x690f79*/
  {
    v3 = this->q014; /*0x690f7c*/
    result = Timer::GetTicks() - this->u32_C; /*0x690f8c*/
    if ( result >= v3 ) /*0x690f91*/
    {
      this->q014 = 0; /*0x690fa4*/
      this->u32_C = -1; /*0x690fa7*/
    }
    else
    {
      this->u32_C = -1; /*0x690f95*/
      this->q014 = v3 - result; /*0x690f9c*/
    }
  }
  return result; /*0x690fa0*/
}


// ==== 0x00690FC0  ScoreAnimClass::Release  this=ScoreAnimClass  sig=csp ====
void __thiscall ScoreAnimClass::_vt02(_DWORD *this)
{
  if ( this->u32_C == -1 ) /*0x690fc7*/
    this->u32_C = Timer::GetTicks(); /*0x690fd1*/
}


// ==== 0x00690FE0  ScoreAnimClass::Constructor_ScoreAnimClass  this=ScoreAnimClass  sig=csp ====
ScoreAnimClass *__thiscall ScoreAnimClass::Constructor_ScoreAnimClass(_DWORD *Block, char a2)
{
  *Block = &vt_ScoreAnimClass; /*0x690fe9*/
  if ( (a2 & 1) != 0 ) /*0x690fef*/
    __3_YAXPAX_Z(Block); /*0x690ff2*/
  return (ScoreAnimClass *)Block; /*0x690ffc*/
}


// ==== 0x00691000  ScoreTimeClass::Constructor_ScoreAnimClass_0  this=ScoreTimeClass  sig=csp ====
_DWORD *__thiscall ScoreAnimClass::Constructor_ScoreAnimClass_0(_DWORD *Block, char a2)
{
  *Block = &vt_ScoreAnimClass; /*0x691009*/
  if ( (a2 & 1) != 0 ) /*0x69100f*/
    __3_YAXPAX_Z(Block); /*0x691012*/
  return Block; /*0x69101c*/
}


// ==== 0x00691020  ScorePrintClass::Constructor_ScoreAnimClass_1  this=ScorePrintClass  sig=csp ====
_DWORD *__thiscall ScoreAnimClass::Constructor_ScoreAnimClass_1(_DWORD *Block, char a2)
{
  *Block = &vt_ScoreAnimClass; /*0x691029*/
  if ( (a2 & 1) != 0 ) /*0x69102f*/
    __3_YAXPAX_Z(Block); /*0x691032*/
  return Block; /*0x69103c*/
}


// ==== 0x00691040  ScoreFontClass::QueryInterface  this=ScoreFontClass  sig=csp ====
ScoreFontClass *__thiscall ScoreFontClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax
  char *v4; // eax

  v3 = (void *)*(Block + 3); /*0x691046*/
  *Block = &vt_ScoreFontClass; /*0x691049*/
  if ( v3 && *((_BYTE *)Block + 16) == 1 ) /*0x691057*/
  {
    __3_YAXPAX_Z(v3); /*0x69105a*/
    *(Block + 3) = 0; /*0x691062*/
    *((_BYTE *)Block + 16) = 0; /*0x691065*/
  }
  if ( !--MEMORY[0xB0558C] ) /*0x691073*/
  {
    v4 = &MEMORY[0xB05594]; /*0x691075*/
    do /*0x691087*/
    {
      *((_DWORD *)v4 - 1) = 0; /*0x69107a*/
      *v4 = 0; /*0x69107d*/
      v4 += 8; /*0x69107f*/
    }
    while ( (int)v4 < (int)((char *)&MEMORY[0xB055A8] + 4) ); /*0x691087*/
  }
  if ( (a2 & 1) != 0 ) /*0x69108e*/
    __3_YAXPAX_Z(Block); /*0x691091*/
  return (ScoreFontClass *)Block; /*0x69109b*/
}


// ==== 0x006910A0  ScoreFullFontClass::Constructor_ScoreFontClass  this=ScoreFullFontClass  sig=csp ====
_DWORD *__thiscall ScoreAnimClass::Constructor_ScoreFontClass(_DWORD *Block, char a2)
{
  void *v3; // eax
  char *v4; // eax

  v3 = (void *)*(Block + 3); /*0x6910a6*/
  *Block = &vt_ScoreFontClass; /*0x6910a9*/
  if ( v3 && *((_BYTE *)Block + 16) == 1 ) /*0x6910b7*/
  {
    __3_YAXPAX_Z(v3); /*0x6910ba*/
    *(Block + 3) = 0; /*0x6910c2*/
    *((_BYTE *)Block + 16) = 0; /*0x6910c5*/
  }
  if ( !--MEMORY[0xB0558C] ) /*0x6910d3*/
  {
    v4 = &MEMORY[0xB05594]; /*0x6910d5*/
    do /*0x6910e7*/
    {
      *((_DWORD *)v4 - 1) = 0; /*0x6910da*/
      *v4 = 0; /*0x6910dd*/
      v4 += 8; /*0x6910df*/
    }
    while ( (int)v4 < (int)((char *)&MEMORY[0xB055A8] + 4) ); /*0x6910e7*/
  }
  if ( (a2 & 1) != 0 ) /*0x6910ee*/
    __3_YAXPAX_Z(Block); /*0x6910f1*/
  return Block; /*0x6910fb*/
}


// ==== 0x00691100  ScoreBigFontClass::Constructor_ScoreFontClass  this=ScoreBigFontClass  sig=csp ====
_DWORD *__thiscall ScoreFontClass::Constructor_ScoreFontClass(_DWORD *Block, char a2)
{
  void *v3; // eax
  char *v4; // eax

  v3 = (void *)*(Block + 3); /*0x691106*/
  *Block = &vt_ScoreFontClass; /*0x691109*/
  if ( v3 && *((_BYTE *)Block + 16) == 1 ) /*0x691117*/
  {
    __3_YAXPAX_Z(v3); /*0x69111a*/
    *(Block + 3) = 0; /*0x691122*/
    *((_BYTE *)Block + 16) = 0; /*0x691125*/
  }
  if ( !--MEMORY[0xB0558C] ) /*0x691133*/
  {
    v4 = &MEMORY[0xB05594]; /*0x691135*/
    do /*0x691147*/
    {
      *((_DWORD *)v4 - 1) = 0; /*0x69113a*/
      *v4 = 0; /*0x69113d*/
      v4 += 8; /*0x69113f*/
    }
    while ( (int)v4 < (int)((char *)&MEMORY[0xB055A8] + 4) ); /*0x691147*/
  }
  if ( (a2 & 1) != 0 ) /*0x69114e*/
    __3_YAXPAX_Z(Block); /*0x691151*/
  return Block; /*0x69115b*/
}


// ==== 0x00691160  VectorClass::PushBack2  this=VectorClass  sig=csp ====
char __thiscall VectorClass_PushBack_2(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = this->Capacity; /*0x691163*/
  if ( this->q010 >= v3 ) /*0x69116b*/
  {
    if ( !this->q034 && v3 ) /*0x691176*/
      return 0; /*0x691176*/
    v4 = this->u32_14; /*0x691178*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x691188*/
      return 0; /*0x69118f*/
  }
  v6 = this->q010; /*0x691195*/
  v7 = this->Items; /*0x691198*/
  this->q010 = v6 + 1; /*0x69119e*/
  *(_DWORD *)(v7 + 4 * v6) = *a2; /*0x6911a8*/
  return 1; /*0x691191*/
}


// ==== 0x006911B0  sub_6911B0  this=-  sig=ida-proto ====
void sub_6911B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6911bc*/
  MEMORY[0xB055C8] = Math::Sqrt(v0 + v0); /*0x6911ce*/
}


// ==== 0x006911E0  sub_6911E0  this=-  sig=ida-proto ====
void sub_6911E0()
{
  MEMORY[0xB05618] = MEMORY[0xB055C8] / 60.0; /*0x6911ec*/
}


// ==== 0x00691200  sub_691200  this=-  sig=ida-proto ====
void sub_691200()
{
  MEMORY[0xB05600] = 1.0 / MEMORY[0xB05618]; /*0x69120c*/
}


// ==== 0x00691220  sub_691220  this=-  sig=ida-proto ====
void sub_691220()
{
  MEMORY[0xB055F8] = 0.0174532925199433 * 45.0; /*0x69122c*/
}


// ==== 0x00691240  sub_691240  this=-  sig=ida-proto ====
void sub_691240()
{
  MEMORY[0xB055D0] = 0.0174532925199433 * 60.0; /*0x69124c*/
}


// ==== 0x00691260  sub_691260  this=-  sig=ida-proto ====
void sub_691260()
{
  MEMORY[0xB055A8] = 0.0174532925199433 * 90.0; /*0x69126c*/
}


// ==== 0x00691280  sub_691280  this=-  sig=ida-proto ====
__int64 sub_691280()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB055A8] - MEMORY[0xB055D0]); /*0x691292*/
  result = Math::RoundToInt(v0 * MEMORY[0xB055C8] * 0.5); /*0x6912a6*/
  MEMORY[0xB05620] = result; /*0x6912ab*/
  return result; /*0x6912b0*/
}


// ==== 0x006912C0  sub_6912C0  this=-  sig=ida-proto ====
void sub_6912C0()
{
  MEMORY[0xB055D8] = Math::ArcTan((double)MEMORY[0xB05620] * 0.00390625); /*0x6912d7*/
}


// ==== 0x006912F0  sub_6912F0  this=-  sig=ida-proto ====
void sub_6912F0()
{
  MEMORY[0xB055F0] = Math::ArcTan((double)(2 * MEMORY[0xB05620]) / MEMORY[0xB055C8]); /*0x691312*/
}


// ==== 0x00691320  sub_691320  this=-  sig=ida-proto ====
__int64 sub_691320()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB05620]) + 0.5); /*0x69133b*/
  MEMORY[0xB05614] = result; /*0x691340*/
  return result; /*0x691346*/
}


// ==== 0x00691350  sub_691350  this=-  sig=ida-proto ====
int sub_691350()
{
  MEMORY[0xB055C0] = 0; /*0x691352*/
  MEMORY[0xB055C2] = 0; /*0x691358*/
  return 0; /*0x69135e*/
}


// ==== 0x00691360  sub_691360  this=-  sig=ida-proto ====
int sub_691360()
{
  MEMORY[0xB055E0] = 0; /*0x691362*/
  MEMORY[0xB055E4] = 0; /*0x691367*/
  MEMORY[0xB055E8] = 0; /*0x69136c*/
  return 0; /*0x691371*/
}


// ==== 0x00691380  sub_691380  this=-  sig=ida-proto ====
int sub_691380()
{
  MEMORY[0xB05610] = 0; /*0x691385*/
  MEMORY[0xB05608] = 128; /*0x69138f*/
  MEMORY[0xB0560C] = 128; /*0x691394*/
  return 128; /*0x691399*/
}


// ==== 0x006913A0  sub_6913A0  this=-  sig=ida-proto ====
int sub_6913A0()
{
  MEMORY[0xB055B0] = 0; /*0x6913a2*/
  MEMORY[0xB055B4] = 0; /*0x6913a7*/
  MEMORY[0xB055B8] = 0; /*0x6913ac*/
  MEMORY[0xB055BC] = 0; /*0x6913b1*/
  return 0; /*0x6913b6*/
}


// ==== 0x006913C0  ScriptClass::Construct  this=ScriptClass  sig=csp ====
AbstractClass *__thiscall ScriptClass::Construct(AbstractClass *this, AbstractClass *aP1)
{
  int v3; // eax

  AbstractClass::Constructor(this); /*0x6913c3*/
  this->field28 = 0; /*0x6913cc*/
  this->buildingType = aP1; /*0x6913d3*/
  this->idxCurrentLine = -1; /*0x6913d6*/
  *(_DWORD *)this->__pad_0 = &ScriptClass::`vftable'; /*0x6913dd*/
  *(_DWORD *)&this->__pad_0[4] = &ScriptClass::`vftable'; /*0x6913e3*/
  *(_DWORD *)&this->__pad_0[8] = &ScriptClass::`vftable'; /*0x6913ea*/
  *(_DWORD *)&this->__pad_0[12] = &vt_ScriptClass; /*0x6913f1*/
  if ( *(int *)&MEMORY[0x87F8E4].__pad_5568[9332] < *(int *)&MEMORY[0x87F8E4].__pad_5568[9324] /*0x69142f*/
    || (MEMORY[0x87F8E4].__pad_5568[9329] || !*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9324])
    && *(int *)&MEMORY[0x87F8E4].__pad_5568[9336] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9316] + 8))(
         &MEMORY[0x87F8E4].__pad_5568[9316],
         *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9324] + *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9336],
         0) )
  {
    v3 = (*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9332])++; /*0x69143c*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9320] + 4 * v3) = this; /*0x69144b*/
  }
  return this; /*0x691450*/
}


// ==== 0x006914E0  ScriptClass::PowerDrainUpdate  this=ScriptClass  sig=csp ====
int __thiscall ScriptClass::_vt13(int this, int a2)
{
  AbstractClass::ProcessPower((#378 *)this); /*0x6914e9*/
  return Power::TimerProcess(*(_DWORD *)(this + 44)); /*0x6914f9*/
}


// ==== 0x00691500  SessionClass::GetEntry  this=AbstractClass  sig=csp ====
_DWORD *__thiscall SessionClass::GetEntry(_DWORD *this, IUnknown *aP1)
{
  int v2; // edx
  int v4; // ecx

  v2 = this->q02C; /*0x691500*/
  if ( v2 == -1 ) /*0x691506*/
  {
    aP1->field_0 = -1; /*0x691510*/
    aP1->field_4 = 0; /*0x691512*/
    return &aP1->field_0; /*0x691508*/
  }
  else
  {
    v4 = this->q024; /*0x691518*/
    aP1->field_0 = *(_DWORD *)(v4 + 8 * v2 + 164); /*0x691527*/
    aP1->field_4 = *(_DWORD *)(v4 + 8 * v2 + 168); /*0x691531*/
    return &aP1->field_0; /*0x69151b*/
  }
}


// ==== 0x00691540  ScriptClass::GetNextAction  this=AbstractClass  sig=csp ====
_DWORD *__thiscall ScriptClass::GetNextAction(_DWORD *this, ScriptClass *aP1)
{
  int v2; // edx
  int v3; // ecx
  _DWORD *result; // eax

  v2 = this->q024; /*0x691540*/
  v3 = this->q02C; /*0x691543*/
  result = aP1->__pad_0; /*0x691554*/
  if ( v3 + 1 < *(_DWORD *)(v2 + 160) ) /*0x691552*/
  {
    *(_DWORD *)aP1->__pad_0 = *(_DWORD *)(v2 + 8 * v3 + 172); /*0x691571*/
    *(_DWORD *)&aP1->__pad_0[4] = *(_DWORD *)(v2 + 8 * v3 + 176); /*0x69157a*/
  }
  else
  {
    *(_DWORD *)aP1->__pad_0 = -1; /*0x69155e*/
    *(_DWORD *)&aP1->__pad_0[4] = 0; /*0x691560*/
  }
  return result; /*0x69155d*/
}


// ==== 0x00691590  ObjectClass::SetLandTypeMap  this=ScriptClass  sig=csp ====
char __thiscall Map_SetLandType(_DWORD *this)
{
  this->idxCurrentLine = -1; /*0x691590*/
  return 1; /*0x691599*/
}


// ==== 0x006915A0  TeamClass::SetField11  this=AbstractClass  sig=csp ====
char __thiscall TeamClass::SetField11(_DWORD *this, ScriptClass *aP1)
{
  this->q02C = aP1; /*0x6915a4*/
  return 1; /*0x6915a9*/
}


// ==== 0x006915B0  TeamClass::Check  this=ScriptClass  sig=csp ====
BOOL __thiscall sub_6915B0(_DWORD *this)
{
  unsigned int v1; // eax

  v1 = this->idxCurrentLine + 1; /*0x6915b3*/
  this->idxCurrentLine = v1; /*0x6915b4*/
  return v1 < *(_DWORD *)(this->buildingType + 160); /*0x6915c4*/
}


// ==== 0x006915D0  SessionClass::SetField  this=ScriptClass  sig=csp ====
BOOL __thiscall SessionClass::SetField(_DWORD *this)
{
  return this->idxCurrentLine < *(_DWORD *)(this->buildingType + 160); /*0x6915e0*/
}


// ==== 0x006915F0  ScriptClass::ddtor  this=ScriptClass  sig=csp ====
int __stdcall ScriptClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6915f6*/
    return -2147467261; /*0x6915f8*/
  *a2 = 1123264070; /*0x691606*/
  a2[1] = 298977161; /*0x69160e*/
  a2[2] = 1610655148; /*0x691617*/
  a2[3] = -1252326136; /*0x691620*/
  return 0; /*0x6915fd*/
}


// ==== 0x00691630  ScriptClass::LoadState  this=ScriptClass  sig=csp ====
int __stdcall ScriptClass::LoadState(AbstractClass *aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x69163b*/
  if ( result >= 0 ) /*0x691642*/
  {
    if ( aP0 ) /*0x691646*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x69164f*/
      *(_DWORD *)aP0->__pad_0 = &ScriptClass::`vftable'; /*0x691654*/
      *(_DWORD *)&aP0->__pad_0[4] = &ScriptClass::`vftable'; /*0x69165a*/
      *(_DWORD *)&aP0->__pad_0[8] = &ScriptClass::`vftable'; /*0x691661*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_ScriptClass; /*0x691668*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]); /*0x691678*/
    return 0; /*0x69167d*/
  }
  return result; /*0x69167f*/
}


// ==== 0x00691690  ScriptClass::SaveState  this=ScriptClass  sig=csp ====
int __stdcall ScriptClass::SaveState(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x69169f*/
  if ( result >= 0 ) /*0x6916a6*/
    return 0; /*0x6916a8*/
  return result; /*0x6916aa*/
}


// ==== 0x006916B0  ScriptTypeClass::Constructor  this=ScriptTypeClass  sig=csp ====
_DWORD *__thiscall ScriptTypeClass::Constructor(_DWORD *this, ObjectClass *aP1)
{
  int v3; // ecx
  char v4; // al
  int v5; // eax
  CCINIClass *v6; // edx

  AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1); /*0x6916b8*/
  this->q09C = 0; /*0x6916bd*/
  this->q0A0 = 0; /*0x6916c7*/
  *this = &ScriptTypeClass::`vftable'; /*0x6916d1*/
  this->vtable2 = &ScriptTypeClass::`vftable'; /*0x6916d7*/
  this->vtable3 = &ScriptTypeClass::`vftable'; /*0x6916de*/
  this->vtable4 = &vt_ScriptTypeClass; /*0x6916e5*/
  v3 = dword_8B41D8; /*0x6916ec*/
  if ( dword_8B41D8 < dword_8B41D0 /*0x69172e*/
    || (unk_8B41D5 || !dword_8B41D0)
    && dword_8B41DC > 0
    && (v4 = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(dword_8B41C8 + 8))(
               &dword_8B41C8,
               dword_8B41D0 + dword_8B41DC,
               0),
        v3 = dword_8B41D8,
        v4) )
  {
    dword_8B41D8 = v3 + 1; /*0x691733*/
    *((_DWORD *)unk_8B41CC + v3) = this; /*0x69173f*/
    v3 = dword_8B41D8; /*0x691742*/
  }
  v5 = 0; /*0x691748*/
  if ( v3 <= 0 ) /*0x69174c*/
  {
LABEL_11:
    v5 = -1; /*0x691760*/
  }
  else
  {
    v6 = (CCINIClass *)unk_8B41CC; /*0x69174e*/
    while ( *(_DWORD **)v6->__pad_0 != this ) /*0x691756*/
    {
      ++v5; /*0x691758*/
      v6 = (CCINIClass *)((char *)v6 + 4); /*0x691759*/
      if ( v5 >= v3 ) /*0x69175e*/
        goto LABEL_11; /*0x69175e*/
    }
  }
  this->q098 = v5; /*0x691763*/
  return this; /*0x69176b*/
}


// ==== 0x006917F0  ScriptTypeClass::GetParameter  this=ScriptTypeClass  sig=csp ====
char __thiscall ScriptTypeClass::_vt26(int this, char *a2)
{
  int v3; // esi
  _DWORD *v4; // ebx
  char Buffer[16]; // [esp+8h] [ebp-90h] BYREF
  char Source[128]; // [esp+18h] [ebp-80h] BYREF

  if ( !AbstractTypeClass::WriteINI((char *)this, a2) ) /*0x691802*/
    return 0; /*0x691885*/
  v3 = 0; /*0x69180d*/
  v4 = (_DWORD *)(this + 164); /*0x69180f*/
  do /*0x691873*/
  {
    sprintf(Buffer, MEMORY[0x817F6C], v3); /*0x691820*/
    String::Trim(Buffer); /*0x69182c*/
    if ( v3 >= *(_DWORD *)(this + 160) ) /*0x691837*/
    {
      INIClass::ClearSection((int)a2, this + 36, (unsigned __int8 *)Buffer); /*0x691867*/
    }
    else
    {
      ScriptTypeClass::FormatToString(v4, Source); /*0x691840*/
      INIClass::SetString(a2, (unsigned __int8 *)(this + 36), Buffer, Source); /*0x691855*/
    }
    ++v3; /*0x69186c*/
    v4 += 2; /*0x69186d*/
  }
  while ( v3 < 50 ); /*0x691873*/
  return 1; /*0x691877*/
}


// ==== 0x006918A0  ScriptTypeClass::GetEvent  this=ScriptTypeClass  sig=csp ====
char __thiscall ScriptTypeClass::GetEvent(int this, unsigned __int8 ***aP1)
{
  INIClass *v3; // edi
  INIClass *v4; // eax
  _DWORD v6[2]; // [esp+8h] [ebp-98h] BYREF
  char Buffer[16]; // [esp+10h] [ebp-90h] BYREF
  INIClass Destination[2]; // [esp+20h] [ebp-80h] BYREF

  INIClass::ResetSection(aP1); /*0x6918b3*/
  if ( !AbstractTypeClass::LoadFromINI(this, (AbstractTypeClass *)aP1) ) /*0x6918bb*/
    return 0; /*0x691963*/
  v3 = 0; /*0x6918ca*/
  *(_DWORD *)(this + 160) = 0; /*0x6918cf*/
  do /*0x691951*/
  {
    sprintf(Buffer, MEMORY[0x817F6C], v3); /*0x6918e0*/
    String::Trim(Buffer); /*0x6918ec*/
    if ( (int)INIClass::GetString( /*0x69190f*/
                aP1,
                (INIClass *)(this + 36),
                (unsigned __int8 *)Buffer,
                (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
                Destination,
                128) > 0 )
    {
      ScriptTypeClass::SetField(v6, (Color *)Destination); /*0x69191a*/
      v4 = *(INIClass **)(this + 160); /*0x69191f*/
      if ( (int)v4 < 50 ) /*0x691928*/
      {
        *(_DWORD *)(this + 8 * (_DWORD)v4 + 164) = v6[0]; /*0x69192e*/
        *(_DWORD *)(this + 8 * (_DWORD)v4 + 168) = v6[1]; /*0x691939*/
        ++*(_DWORD *)(this + 160); /*0x691947*/
      }
    }
    v3 = (INIClass *)((char *)v3 + 1); /*0x69194d*/
  }
  while ( (int)v3 < 50 ); /*0x691951*/
  return 1; /*0x691955*/
}


// ==== 0x00691970  ScoreScreenClass::ProcessFrame  this=IUnknown  sig=csp ====
CCINIClass *__fastcall ScoreScreenClass::ProcessFrame(char *a1, int a2)
{
  CCINIClass *result; // eax
  CCINIClass *v4; // esi
  CCINIClass *v5; // ebp
  unsigned __int8 *StringByIndex; // eax
  int v7; // esi
  INIClass *v8; // eax
  INIClass *v9; // esi
  int v10; // eax
  bool v11; // zf
  int v12; // ecx
  CCINIClass *v13; // edx
  CCINIClass *v15; // [esp+14h] [ebp-1Ch]
  char Source[24]; // [esp+18h] [ebp-18h] BYREF

  result = (CCINIClass *)INIClass::GetKeyCount(a1, (INIClass *)&stru_830620.__pad_579C[35180]); /*0x691982*/
  v4 = result; /*0x691987*/
  v5 = 0; /*0x69198b*/
  v15 = result; /*0x69198f*/
  if ( (int)result > 0 ) /*0x691993*/
  {
    while ( 1 ) /*0x6919a1*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x6919a1*/
                                           a1,
                                           (CCINIClass *)&stru_830620.__pad_579C[35180],
                                           v5);
      result = (CCINIClass *)INIClass::GetString( /*0x6919ba*/
                               (unsigned __int8 ***)a1,
                               (INIClass *)&stru_830620.__pad_579C[35180],
                               StringByIndex,
                               (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
                               (INIClass *)Source,
                               24);
      if ( (int)result > 0 ) /*0x6919c1*/
        break; /*0x6919c1*/
LABEL_24:
      v5 = (CCINIClass *)((char *)v5 + 1); /*0x691b17*/
      if ( (int)v5 >= (int)v4 ) /*0x691b1a*/
        return result; /*0x691b1a*/
    }
    if ( !_strcmpi((char *)&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x6919eb*/
      goto LABEL_22; /*0x6919eb*/
    v7 = 0; /*0x691a00*/
    if ( *(int *)&MEMORY[0x89F690].__pad_579C[62380] > 0 ) /*0x691a04*/
    {
      while ( _strcmpi((char *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62368] + 4 * v7) + 36), Source) ) /*0x691a22*/
      {
        if ( ++v7 >= *(int *)&MEMORY[0x89F690].__pad_579C[62380] ) /*0x691a30*/
          goto LABEL_8; /*0x691a30*/
      }
      v9 = *(INIClass **)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62368] + 4 * v7); /*0x691afa*/
      goto LABEL_23; /*0x691afd*/
    }
LABEL_8:
    v8 = (INIClass *)__2_YAPAXI_Z(0x234u); /*0x691a37*/
    v9 = v8; /*0x691a3c*/
    if ( v8 ) /*0x691a43*/
    {
      AbstractTypeClass::Constructor((int)v8, (AbstractClass *)Source); /*0x691a50*/
      v9[2].sectionCount = 0; /*0x691a55*/
      *(_DWORD *)v9[2].__pad_20 = 0; /*0x691a5b*/
      *(_DWORD *)v9->__pad_0 = &ScriptTypeClass::`vftable'; /*0x691a61*/
      v9->headNode[0] = (int)&ScriptTypeClass::`vftable'; /*0x691a67*/
      v9->headNode[1] = (int)&ScriptTypeClass::`vftable'; /*0x691a6e*/
      v9->headNode[2] = (int)&vt_ScriptTypeClass; /*0x691a75*/
      v10 = *(_DWORD *)&MEMORY[0x89F690].__pad_579C[62380]; /*0x691a7c*/
      if ( *(int *)&MEMORY[0x89F690].__pad_579C[62380] < *(int *)&MEMORY[0x89F690].__pad_579C[62372] /*0x691ab9*/
        || (MEMORY[0x89F690].__pad_579C[62377] || !*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62372])
        && *(int *)&MEMORY[0x89F690].__pad_579C[62384] > 0
        && (v11 = (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62364]
                                                                         + 8))(
                    &MEMORY[0x89F690].__pad_579C[62364],
                    *(_DWORD *)&MEMORY[0x89F690].__pad_579C[62372] + *(_DWORD *)&MEMORY[0x89F690].__pad_579C[62384],
                    0) == 0,
            v10 = *(_DWORD *)&MEMORY[0x89F690].__pad_579C[62380],
            !v11) )
      {
        *(_DWORD *)&MEMORY[0x89F690].__pad_579C[62380] = v10 + 1; /*0x691ac4*/
        *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62368] + 4 * v10) = v9; /*0x691ac9*/
        v10 = *(_DWORD *)&MEMORY[0x89F690].__pad_579C[62380]; /*0x691acc*/
      }
      v12 = 0; /*0x691ad1*/
      if ( v10 <= 0 ) /*0x691ad5*/
      {
LABEL_19:
        v12 = -1; /*0x691ae9*/
      }
      else
      {
        v13 = *(CCINIClass **)&MEMORY[0x89F690].__pad_579C[62368]; /*0x691ad7*/
        while ( *(INIClass **)v13->__pad_0 != v9 ) /*0x691adf*/
        {
          ++v12; /*0x691ae1*/
          v13 = (CCINIClass *)((char *)v13 + 4); /*0x691ae2*/
          if ( v12 >= v10 ) /*0x691ae7*/
            goto LABEL_19; /*0x691ae7*/
        }
      }
      v9[2].sectionHead[2] = v12; /*0x691aec*/
    }
    else
    {
LABEL_22:
      v9 = 0; /*0x691aff*/
    }
LABEL_23:
    result = (CCINIClass *)(*(int (__thiscall **)(INIClass *, char *))(*(_DWORD *)v9->__pad_0 + 100))(v9, a1); /*0x691b01*/
    v9[2].sectionCount = a2; /*0x691b0d*/
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


// ==== 0x00691C00  TeamTypeClass::CreateScriptType  this=ObjectClass  sig=csp ====
INIClass *__thiscall TeamTypeClass::CreateScriptType(AbstractClass *Source)
{
  int v2; // esi
  INIClass *v3; // eax
  INIClass *v4; // esi
  int v5; // ecx
  char v6; // al
  int v7; // eax
  INIClass **v8; // edx

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x691c20*/
    return 0; /*0x691c2a*/
  v2 = 0; /*0x691c35*/
  if ( dword_8B41D8 <= 0 ) /*0x691c39*/
  {
LABEL_6:
    v3 = (INIClass *)__2_YAPAXI_Z(0x234u); /*0x691c62*/
    v4 = v3; /*0x691c6c*/
    if ( v3 ) /*0x691c73*/
    {
      AbstractTypeClass::Constructor((int)v3, Source); /*0x691c7c*/
      v4[2].sectionCount = 0; /*0x691c81*/
      *(_DWORD *)v4[2].__pad_20 = 0; /*0x691c8b*/
      *(_DWORD *)v4->__pad_0 = &ScriptTypeClass::`vftable'; /*0x691c95*/
      v4->headNode[0] = (int)&ScriptTypeClass::`vftable'; /*0x691c9b*/
      v4->headNode[1] = (int)&ScriptTypeClass::`vftable'; /*0x691ca2*/
      v4->headNode[2] = (int)&vt_ScriptTypeClass; /*0x691ca9*/
      v5 = dword_8B41D8; /*0x691cb0*/
      if ( dword_8B41D8 < dword_8B41D0 /*0x691cf1*/
        || (unk_8B41D5 || !dword_8B41D0)
        && dword_8B41DC > 0
        && (v6 = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(dword_8B41C8 + 8))(
                   &dword_8B41C8,
                   dword_8B41D0 + dword_8B41DC,
                   0),
            v5 = dword_8B41D8,
            v6) )
      {
        dword_8B41D8 = v5 + 1; /*0x691cf6*/
        *((_DWORD *)unk_8B41CC + v5) = v4; /*0x691d02*/
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
        v8 = (INIClass **)unk_8B41CC; /*0x691d11*/
        while ( *v8 != v4 ) /*0x691d19*/
        {
          ++v7; /*0x691d1b*/
          ++v8; /*0x691d1c*/
          if ( v7 >= v5 ) /*0x691d21*/
            goto LABEL_17; /*0x691d21*/
        }
      }
      v4[2].sectionHead[2] = v7; /*0x691d26*/
      return v4; /*0x691d30*/
    }
    return 0; /*0x691d3e*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)unk_8B41CC + v2) + 36), Source) ) /*0x691c52*/
  {
    if ( ++v2 >= dword_8B41D8 ) /*0x691c60*/
      goto LABEL_6; /*0x691c60*/
  }
  return (INIClass *)*((_DWORD *)unk_8B41CC + v2); /*0x691d2e*/
}


// ==== 0x00691D50  ScriptTypeClass::GetClassIdentifier  this=ScriptTypeClass  sig=csp ====
int __stdcall ScriptTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x691d56*/
    return -2147467261; /*0x691d58*/
  *a2 = 1123264071; /*0x691d66*/
  a2[1] = 298977161; /*0x691d6e*/
  a2[2] = 1610655148; /*0x691d77*/
  a2[3] = -1252326136; /*0x691d80*/
  return 0; /*0x691d5d*/
}


// ==== 0x00691D90  ScriptTypeClass::LoadTypeData  this=ScriptTypeClass  sig=csp ====
int __stdcall ScriptTypeClass::LoadTypeData(AbstractTypeClass *aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP0, (AbstractClass *)aP1); /*0x691d9b*/
  if ( result >= 0 ) /*0x691da2*/
  {
    if ( aP0 ) /*0x691da6*/
    {
      AbstractTypeClass::Init((int)aP0, (AbstractTypeClass *)&aP1); /*0x691daf*/
      *(_DWORD *)aP0->__pad_0 = &ScriptTypeClass::`vftable'; /*0x691db4*/
      *(_DWORD *)&aP0->__pad_0[4] = &ScriptTypeClass::`vftable'; /*0x691dba*/
      *(_DWORD *)&aP0->__pad_0[8] = &ScriptTypeClass::`vftable'; /*0x691dc1*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_ScriptTypeClass; /*0x691dc8*/
    }
    return 0; /*0x691dcf*/
  }
  return result; /*0x691dd1*/
}


// ==== 0x00691DE0  ScriptTypeClass::SaveToINI  this=ScriptTypeClass  sig=csp ====
int __stdcall ScriptTypeClass::SaveToINI(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x691def*/
  if ( result >= 0 ) /*0x691df6*/
    return 0; /*0x691df8*/
  return result; /*0x691dfa*/
}


// ==== 0x00691E00  ScriptTypeClass::PowerDrainUpdate  this=ScriptTypeClass  sig=csp ====
int __thiscall ScriptTypeClass::_vt13(int this, int *a2)
{
  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x691e09*/
  return Power::TimerProcess(*(_DWORD *)(this + 160)); /*0x691e1c*/
}


// ==== 0x00691E30  ScriptTypeClass::GetAction  this=ScriptTypeClass  sig=csp ====
void __thiscall ScriptTypeClass::_vt10(int *this, int a2, int a3)
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
      if ( this->isGlobal > 0 ) /*0x691e58*/
      {
        v6 = MEMORY[0xA8ECB0]; /*0x691e5a*/
        v7 = this + 42; /*0x691e60*/
        do /*0x691e66*/
        {
          if ( *(v7 - 1) == 18 ) /*0x691e6a*/
          {
            if ( v4 == -1 ) /*0x691e6f*/
            {
              v8 = 0; /*0x691e71*/
              if ( v6 <= 0 ) /*0x691e75*/
                return; /*0x691e75*/
              for ( i = MEMORY[0xA8ECA4]; *i != a2; ++i ) /*0x691e77*/
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
              v6 = MEMORY[0xA8ECB0]; /*0x691ea5*/
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
        while ( v5 < this->isGlobal ); /*0x691e66*/
      }
    }
  }
}


// ==== 0x00691EC0  ScriptClass::StubReturn26  this=ScriptClass  sig=csp ====
int ScriptClass::_vt11()
{
  return 26; /*0x691ec5*/
}


// ==== 0x00691ED0  ScriptClass::StubReturn48  this=ScriptClass  sig=csp ====
int ScriptClass::_vt12()
{
  return 48; /*0x691ed5*/
}


// ==== 0x00691EE0  ScriptClass::ProcessEvent  this=ScriptClass  sig=csp ====
ScriptClass *__thiscall ScriptClass::ProcessEvent(void **Block, char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &ScriptClass::`vftable'; /*0x691ee6*/
  *(Block + 1) = &ScriptClass::`vftable'; /*0x691eec*/
  *(Block + 2) = &ScriptClass::`vftable'; /*0x691ef3*/
  *(Block + 3) = &vt_ScriptClass; /*0x691efa*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x691f01*/
  v5 = Block; /*0x691f16*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0x8872B0] + 16))(&MEMORY[0x8872B0], &v5); /*0x691f1a*/
  if ( v3 != -1 && v3 < MEMORY[0x8872C0] && v3 < --MEMORY[0x8872C0] ) /*0x691f35*/
  {
    do /*0x691f4d*/
    {
      ++v3; /*0x691f3d*/
      *((_DWORD *)MEMORY[0x8872B4] + v3 - 1) = *((_DWORD *)MEMORY[0x8872B4] + v3); /*0x691f41*/
    }
    while ( v3 < MEMORY[0x8872C0] ); /*0x691f4d*/
  }
  AbstractClass::DTOR(Block); /*0x691f51*/
  if ( (a2 & 1) != 0 ) /*0x691f5b*/
    __3_YAXPAX_Z(Block); /*0x691f5e*/
  return (ScriptClass *)Block; /*0x691f68*/
}


// ==== 0x00691F70  ScriptTypeClass::GetTypeIdentifier  this=ScriptTypeClass  sig=csp ====
int ScriptTypeClass::_vt11()
{
  return 27; /*0x691f75*/
}


// ==== 0x00691F80  ScriptTypeClass::GetObjectSize  this=ScriptTypeClass  sig=csp ====
int ScriptTypeClass::_vt12()
{
  return 564; /*0x691f85*/
}


// ==== 0x00691F90  ScriptTypeClass::GetAuxField  this=ScriptTypeClass  sig=csp ====
int __thiscall ScriptTypeClass::_vt16(_DWORD *this)
{
  return this->q098; /*0x691f96*/
}


// ==== 0x00691FA0  ScriptTypeClass::ddtor  this=ScriptTypeClass  sig=csp ====
ScriptTypeClass *__thiscall ScriptTypeClass::ddtor(void **Block, char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &ScriptTypeClass::`vftable'; /*0x691fa6*/
  *(Block + 1) = &ScriptTypeClass::`vftable'; /*0x691fac*/
  *(Block + 2) = &ScriptTypeClass::`vftable'; /*0x691fb3*/
  *(Block + 3) = &vt_ScriptTypeClass; /*0x691fba*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x691fc1*/
  v5 = Block; /*0x691fd6*/
  v3 = (*(int (__thiscall **)(int *, void ***))(dword_8B41C8 + 16))(&dword_8B41C8, &v5); /*0x691fda*/
  if ( v3 != -1 && v3 < dword_8B41D8 && v3 < --dword_8B41D8 ) /*0x691ff5*/
  {
    do /*0x69200d*/
    {
      ++v3; /*0x691ffd*/
      *((_DWORD *)unk_8B41CC + v3 - 1) = *((_DWORD *)unk_8B41CC + v3); /*0x692001*/
    }
    while ( v3 < dword_8B41D8 ); /*0x69200d*/
  }
  AbstractTypeClass::Dtor(Block); /*0x692011*/
  if ( (a2 & 1) != 0 ) /*0x69201b*/
    __3_YAXPAX_Z(Block); /*0x69201e*/
  return (ScriptTypeClass *)Block; /*0x692028*/
}


// ==== 0x00692030  sub_692030  this=-  sig=ida-proto ====
int sub_692030()
{
  MEMORY[0xB05648] = 0; /*0x692032*/
  MEMORY[0xB0564C] = 0; /*0x692037*/
  MEMORY[0xB05650] = 0; /*0x69203c*/
  MEMORY[0xB05654] = 0; /*0x692041*/
  return 0; /*0x692046*/
}


// ==== 0x00692050  sub_692050  this=-  sig=ida-proto ====
void sub_692050()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x69205c*/
  MEMORY[0xB05660] = Math::Sqrt(v0 + v0); /*0x69206e*/
}


// ==== 0x00692080  sub_692080  this=-  sig=ida-proto ====
void sub_692080()
{
  MEMORY[0xB056B8] = MEMORY[0xB05660] / 60.0; /*0x69208c*/
}


// ==== 0x006920A0  sub_6920A0  this=-  sig=ida-proto ====
void sub_6920A0()
{
  MEMORY[0xB056A0] = 1.0 / MEMORY[0xB056B8]; /*0x6920ac*/
}


// ==== 0x006920C0  sub_6920C0  this=-  sig=ida-proto ====
void sub_6920C0()
{
  MEMORY[0xB05698] = 0.0174532925199433 * 45.0; /*0x6920cc*/
}


// ==== 0x006920E0  sub_6920E0  this=-  sig=ida-proto ====
void sub_6920E0()
{
  MEMORY[0xB05668] = 0.0174532925199433 * 60.0; /*0x6920ec*/
}


// ==== 0x00692100  sub_692100  this=-  sig=ida-proto ====
void sub_692100()
{
  MEMORY[0xB05630] = 0.0174532925199433 * 90.0; /*0x69210c*/
}


// ==== 0x00692120  sub_692120  this=-  sig=ida-proto ====
__int64 sub_692120()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB05630] - MEMORY[0xB05668]); /*0x692132*/
  result = Math::RoundToInt(v0 * MEMORY[0xB05660] * 0.5); /*0x692146*/
  MEMORY[0xB056C0] = result; /*0x69214b*/
  return result; /*0x692150*/
}


// ==== 0x00692160  sub_692160  this=-  sig=ida-proto ====
void sub_692160()
{
  MEMORY[0xB05670] = Math::ArcTan((double)MEMORY[0xB056C0] * 0.00390625); /*0x692177*/
}


// ==== 0x00692190  sub_692190  this=-  sig=ida-proto ====
void sub_692190()
{
  MEMORY[0xB05688] = Math::ArcTan((double)(2 * MEMORY[0xB056C0]) / MEMORY[0xB05660]); /*0x6921b2*/
}


// ==== 0x006921C0  sub_6921C0  this=-  sig=ida-proto ====
__int64 sub_6921C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB056C0]) + 0.5); /*0x6921db*/
  MEMORY[0xB056B4] = result; /*0x6921e0*/
  return result; /*0x6921e6*/
}


// ==== 0x006921F0  sub_6921F0  this=-  sig=ida-proto ====
int sub_6921F0()
{
  MEMORY[0xB05658] = 0; /*0x6921f2*/
  return 0; /*0x6921fe*/
}


// ==== 0x00692200  sub_692200  this=-  sig=ida-proto ====
int sub_692200()
{
  MEMORY[0xB05678] = 0; /*0x692202*/
  MEMORY[0xB0567C] = 0; /*0x692207*/
  MEMORY[0xB05680] = 0; /*0x69220c*/
  return 0; /*0x692211*/
}


// ==== 0x00692220  sub_692220  this=-  sig=ida-proto ====
int sub_692220()
{
  MEMORY[0xB056B0] = 0; /*0x692225*/
  MEMORY[0xB056A8] = 128; /*0x69222f*/
  MEMORY[0xB056AC] = 128; /*0x692234*/
  return 128; /*0x692239*/
}


// ==== 0x00692240  sub_692240  this=-  sig=ida-proto ====
int sub_692240()
{
  MEMORY[0xB05638] = Timer::GetTicks(); /*0x69224f*/
  MEMORY[0xB05640] = 0; /*0x692254*/
  return atexit(sub_692270); /*0x692264*/
}


// ==== 0x00692270  sub_692270  this=-  sig=ida-proto ====
void __cdecl sub_692270()
{
  if ( (MEMORY[0xB05629] & 1) == 0 ) /*0x69227a*/
    MEMORY[0xB05629] |= 1u; /*0x69227e*/
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
int __thiscall ScrollClass::Scroll(int *this, int *a1, MouseClass *aP2)
{
  TacticalClass::ProcessView(this); /*0x6922e3*/
  return BlowStraw_29::Seek(this, a1, aP2); /*0x6922f9*/
}


// ==== 0x00692300  Tactical::MouseOver  this=MouseClass  sig=csp ====
char __stdcall Tactical::MouseOver(
        MouseClass *aP0,
        MouseClass *aP1,
        MouseClass *aP2,
        MouseClass *aP3,
        MouseClass *aP4,
        MouseClass *aP5)
{
  MouseClass *v6; // edx
  MouseClass *v7; // esi
  MouseClass *v8; // edi
  MouseClass *v9; // ecx
  MouseClass *v10; // ebx
  char *v11; // eax
  MouseClass *v12; // ebx
  int *v13; // eax
  IUnknown *v14; // ecx
  MouseClass *v15; // edx
  int v16; // edx
  int GroundHeight; // eax
  int v18; // edx
  MouseClass *v19; // ecx
  bool v20; // al
  MouseClass *v21; // esi
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  bool v24; // al
  MouseClass *v25; // eax
  MouseClass *v26; // edi
  ObjectClass *v27; // eax
  ObjectClass *v28; // esi
  IUnknown *v29; // eax
  _WORD *v30; // eax
  int v31; // edi
  IUnknown *v32; // eax
  _WORD *v33; // eax
  MouseClass *v35; // [esp-4h] [ebp-2Ch]
  MouseClass *v36; // [esp-4h] [ebp-2Ch]
  IUnknown *v37; // [esp+10h] [ebp-18h] BYREF
  IUnknown *v38; // [esp+14h] [ebp-14h]
  int v39; // [esp+18h] [ebp-10h]
  _DWORD v40[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v6 = aP2; /*0x692307*/
  v7 = aP1; /*0x69230e*/
  aP3->field_0 = 0; /*0x692312*/
  v7->field_0 = *(_DWORD *)&stru_B05488.__pad_188[72]; /*0x69231e*/
  v6->field_0 = *(_DWORD *)&stru_B05488.__pad_1D8[24]; /*0x692329*/
  v8 = aP4; /*0x692332*/
  v6->field_4 = *(void **)&stru_B05488.__pad_1D8[28]; /*0x692336*/
  v9 = aP5; /*0x69233e*/
  v6->field_8 = *(void **)&stru_B05488.__pad_1D8[32]; /*0x692342*/
  LOBYTE(v8->field_0) = 0; /*0x692345*/
  LOBYTE(v9->field_0) = 0; /*0x692348*/
  if ( aP0->field_0 < 0 ) /*0x692350*/
    return 0; /*0x692350*/
  v10 = (MouseClass *)aP0->field_4; /*0x692356*/
  if ( (int)v10 < 0 ) /*0x69235b*/
    return 0; /*0x69235b*/
  if ( *(_DWORD *)&stru_87C374.__pad_579C[22548] ) /*0x692369*/
  {
    v37 = (IUnknown *)(*(_DWORD *)&stru_87C374.__pad_579C[21648] + aP0->field_0); /*0x69237c*/
    v38 = (IUnknown *)((char *)v10 + *(_DWORD *)&stru_87C374.__pad_579C[21652]); /*0x692380*/
    v11 = (char *)Tactical::PixelToCell(*(int *)&stru_87C374.__pad_579C[22548], (AbstractClass *)&aP1, (IUnknown *)&v37); /*0x69238e*/
    v8 = aP4; /*0x692393*/
  }
  else
  {
    v11 = &stru_B05488.__pad_188[72]; /*0x692399*/
  }
  v7->field_0 = *(_DWORD *)v11; /*0x6923a0*/
  if ( *(_DWORD *)&stru_87C374.__pad_579C[22548] ) /*0x6923aa*/
  {
    v12 = (MouseClass *)aP0->field_4; /*0x6923ba*/
    v37 = (IUnknown *)(*(_DWORD *)&stru_87C374.__pad_579C[21648] + aP0->field_0); /*0x6923c1*/
    v38 = (IUnknown *)((char *)v12 + *(_DWORD *)&stru_87C374.__pad_579C[21652]); /*0x6923c5*/
    v13 = TacticalClass::TransformPixel(*(int *)&stru_87C374.__pad_579C[22548], (IUnknown *)v40, (MouseClass *)&v37); /*0x6923d3*/
    v8 = aP4; /*0x6923d8*/
  }
  else
  {
    v13 = (int *)&stru_B05488.__pad_1D8[24]; /*0x6923de*/
  }
  v14 = (IUnknown *)aP2; /*0x6923e3*/
  v15 = aP2; /*0x6923e9*/
  aP2->field_0 = *v13; /*0x6923eb*/
  v15->field_4 = (void *)v13[1]; /*0x6923f0*/
  v15->field_8 = (void *)v13[2]; /*0x6923f6*/
  if ( !*(_DWORD *)&stru_87C374.__pad_579C[22548] || !Tactical::IsCellVisible(&stru_87C374.__pad_14B0[8132], v14) ) /*0x69240c*/
    return 0; /*0x6925ff*/
  v16 = SHIWORD(v7->field_0) << 8; /*0x69242d*/
  v40[0] = (SLOWORD(v7->field_0) << 8) + 128; /*0x692430*/
  v40[1] = v16 + 128; /*0x692440*/
  v40[2] = 0; /*0x692444*/
  GroundHeight = Cell::GetGroundHeight((IUnknown *)v40); /*0x69244c*/
  v18 = SHIWORD(v7->field_0); /*0x692454*/
  v19 = (MouseClass *)((SLOWORD(v7->field_0) << 8) + 128); /*0x69245b*/
  v39 = GroundHeight; /*0x692461*/
  v37 = (IUnknown *)v19; /*0x692465*/
  v38 = (IUnknown *)((v18 << 8) + 128); /*0x69247c*/
  v20 = Cell::IsPassable((IUnknown *)&v37) && g_hWnd; /*0x692492*/
  v21 = aP5; /*0x69249b*/
  LOBYTE(aP5->field_0) = v20; /*0x69249f*/
  LOBYTE(v8->field_0) = 0; /*0x6924a1*/
  if ( (**(_DWORD **)&HouseClass_Player.__pad_5568[8060] & 0x1000) != 0 ) /*0x6924af*/
  {
    v22 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v37); /*0x6924bb*/
    v23 = Cell::IsBridge(v22); /*0x6924c2*/
    if ( v23 ) /*0x6924c9*/
    {
      LOBYTE(v8->field_0) = *((_BYTE *)v23 + 1767); /*0x6924d1*/
    }
    else
    {
      v24 = Game::Stub3((IUnknown *)&v37) && g_hWnd; /*0x6924f1*/
      LOBYTE(v8->field_0) = v24; /*0x6924fa*/
    }
  }
  if ( !LOBYTE(v21->field_0) && !LOBYTE(v8->field_0) ) /*0x692505*/
  {
    v25 = TacticalClass::IsOccupiedByTechno(*(_DWORD **)&stru_87C374.__pad_579C[22548], aP0); /*0x692515*/
    v26 = aP3; /*0x69251a*/
    aP3->field_0 = (int)v25; /*0x692520*/
    v27 = (ObjectClass *)AbstractClass::IsTechnoType(v25); /*0x692522*/
    v28 = v27; /*0x692527*/
    if ( v27 && !BYTE2(v27[6].uniqueId) ) /*0x69252d*/
    {
      if ( v27[3].referenceCount == 2 /*0x692575*/
        && (v35 = *(MouseClass **)(HouseClass_Player.field_0 + 48),
            v29 = (IUnknown *)(*(int (__thiscall **)(ObjectClass *, _DWORD *))(*(_DWORD *)v27->__pad_0 + 72))(v27, v40),
            v30 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v29),
            !Cell::IsPassableOffset(v30, (IUnknown *)v35))
        || *(_BYTE *)((*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v28->__pad_0 + 132))(v28) + 3226) )
      {
        v26->field_0 = 0; /*0x69257f*/
      }
    }
    if ( v26->field_0 ) /*0x692585*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v26->field_0 + 44))(v26->field_0) == 6 ) /*0x692593*/
      {
        v31 = v26->field_0; /*0x692595*/
        if ( !*(_BYTE *)(v31 + 1050) ) /*0x692597*/
        {
          if ( *(_BYTE *)(v31 + 1773) == 15 /*0x6925dc*/
            && (v36 = *(MouseClass **)(HouseClass_Player.field_0 + 48),
                v32 = (IUnknown *)(*(int (__thiscall **)(ObjectClass *, _DWORD *))(*(_DWORD *)v28->__pad_0 + 72))(
                                    v28,
                                    v40),
                v33 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v32),
                !Cell::IsPassableOffset(v33, (IUnknown *)v36))
            || *(_BYTE *)(*(_DWORD *)(v31 + 1312) + 5889) )
          {
            aP3->field_0 = 0; /*0x6925ea*/
          }
        }
      }
    }
  }
  return 1; /*0x6925f0*/
}


// ==== 0x00692610  Radar::ScanWaypoints  this=MouseClass  sig=csp ====
int __stdcall Radar::ScanWaypoints(MouseClass *aP0, MouseClass *aP1, int aP3_4)
{
  MouseClass *v3; // esi
  int RadarClosestEnemy; // eax
  MouseClass *v6; // esi
  int v7; // eax
  MouseClass *v8; // esi
  char v9; // bl
  CellStruct *v10; // eax
  CellStruct *v11; // edi
  IUnknown *v12; // eax
  _WORD *v13; // eax
  __int16 *v14; // ebp
  IUnknown *v15; // eax
  _WORD *v16; // eax
  char *v17; // eax
  #375 *v18; // eax
  #375 *v19; // eax
  int v20; // eax
  MouseClass *v21; // edi
  bool v22; // bl
  IUnknown *v23; // ecx
  #375 *v24; // eax
  int v25; // edx
  _DWORD *v26; // eax
  IUnknown *v27; // eax
  MouseClass *v28; // [esp-4h] [ebp-24h]
  MouseClass *v29; // [esp-4h] [ebp-24h]
  IUnknown *v30; // [esp+10h] [ebp-10h]
  _DWORD v31[2]; // [esp+14h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+1Ch] [ebp-4h]

  v30 = 0; /*0x69261e*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23060] ) /*0x692626*/
  {
    v3 = aP1; /*0x692628*/
    if ( aP1 ) /*0x69262e*/
    {
      RadarClosestEnemy = FindRadarClosestEnemy(0, (int)aP1); /*0x692634*/
      return (*(int (__thiscall **)(int, MouseClass *, _DWORD))(*(_DWORD *)RadarClosestEnemy + 116))( /*0x692640*/
               RadarClosestEnemy,
               v3,
               0);
    }
    else
    {
      v6 = aP0; /*0x69264d*/
      v7 = FindRadarClosestEnemy((__int16 *)aP0, 0); /*0x692655*/
      return (*(int (__thiscall **)(int, MouseClass *, int, _DWORD))(*(_DWORD *)v7 + 112))(v7, v6, aP3_4, 0); /*0x692666*/
    }
  }
  v8 = aP1; /*0x692673*/
  v9 = 1; /*0x692677*/
  v10 = (CellStruct *)AbstractClass::IsTechno(aP1); /*0x69267b*/
  v11 = v10; /*0x692680*/
  if ( v10 && !v10[1].__pad_FC[86] ) /*0x692686*/
  {
    if ( *(_DWORD *)&v10->__pad_170[176] == 2 /*0x6926cf*/
      && (v28 = *(MouseClass **)(HouseClass_Player.field_0 + 48),
          v12 = (IUnknown *)(*(int (__thiscall **)(CellStruct *, _DWORD *))(v10->field_0 + 72))(v10, v31),
          v13 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v12),
          !Cell::IsPassableOffset(v13, (IUnknown *)v28))
      || *(_BYTE *)((*(int (__thiscall **)(CellStruct *))(v11->field_0 + 132))(v11) + 3226) )
    {
      v9 = 0; /*0x6926d9*/
    }
  }
  v14 = (__int16 *)aP0; /*0x6926db*/
  if ( !v8 /*0x692725*/
    || (*(int (__thiscall **)(MouseClass *))(v8->field_0 + 44))(v8) != 6
    || v8->__pad_1D4[582]
    || v8->__pad_1D4[1305] != 15
    || (v29 = *(MouseClass **)(HouseClass_Player.field_0 + 48),
        v15 = (IUnknown *)(*(int (__thiscall **)(CellStruct *, _DWORD *))(v11->field_0 + 72))(v11, v31),
        v16 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v15),
        Cell::IsPassableOffset(v16, (IUnknown *)v29)) )
  {
    if ( v9 ) /*0x692734*/
    {
      if ( v8 /*0x692766*/
        && (*(unsigned __int8 (__thiscall **)(MouseClass *))(v8->field_0 + 312))(v8)
        && ((*(int (__thiscall **)(MouseClass *))(v8->field_0 + 44))(v8) != 6 || !v8->__pad_1D4[1299])
        && (!v11 || !v11[1].__pad_FC[16]) )
      {
        v30 = (IUnknown *)7; /*0x692770*/
      }
      v17 = (char *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v14); /*0x69277e*/
      if ( Radar::FindNearestRadarTarget( /*0x6927bc*/
             dword_89C3B0,
             (*v14 << 8) + 128,
             (v14[1] << 8) + 128,
             *(_DWORD *)&stru_B05488.__pad_220[24] * v17[283]) )
      {
        v30 = (IUnknown *)61; /*0x6927c5*/
      }
    }
  }
  if ( stru_87C374.__pad_14B0[12660] ) /*0x6927d4*/
  {
    if ( !v8 /*0x6927fb*/
      || !(*(int (__thiscall **)(MouseClass *))(v8->field_0 + 60))(v8)
      || (v18 = (#375 *)(*(int (__thiscall **)(MouseClass *))(v8->field_0 + 60))(v8),
          !(unsigned __int8)House::IsHumanPlayer(v18))
      || (v30 = (IUnknown *)10, !(*(unsigned __int8 (__thiscall **)(MouseClass *))(v8->field_0 + 148))(v8)) )
    {
      v30 = (IUnknown *)15; /*0x69280d*/
    }
  }
  if ( stru_87C374.__pad_14B0[12662] ) /*0x69281c*/
  {
    v30 = (IUnknown *)34; /*0x692820*/
    if ( v8 ) /*0x692828*/
    {
      if ( (*(int (__thiscall **)(MouseClass *))(v8->field_0 + 60))(v8) ) /*0x69282e*/
      {
        v19 = (#375 *)(*(int (__thiscall **)(MouseClass *))(v8->field_0 + 60))(v8); /*0x692839*/
        if ( (unsigned __int8)House::IsHumanPlayer(v19) ) /*0x69283e*/
        {
          if ( (*(int (__thiscall **)(MouseClass *))(v8->field_0 + 44))(v8) == 6 ) /*0x692851*/
          {
            if ( (*(unsigned __int8 (__thiscall **)(MouseClass *))(v8->field_0 + 312))(v8) ) /*0x692857*/
            {
              if ( !(*(unsigned __int8 (__thiscall **)(MouseClass *))(v8->field_0 + 128))(v8) ) /*0x692865*/
              {
                v20 = *(_DWORD *)&v8->__pad_1D4[844]; /*0x69286f*/
                if ( *(_BYTE *)(v20 + 5450) ) /*0x692875*/
                {
                  if ( *(int *)(v20 + 3812) > 0 || *(_BYTE *)(v20 + 5491) ) /*0x692889*/
                    v30 = (IUnknown *)33; /*0x692893*/
                }
              }
            }
          }
        }
      }
    }
  }
  v21 = (MouseClass *)Waypoint::FindByCell((char *)HouseClass_Player.field_0, (IUnknown *)v14); /*0x6928a7*/
  if ( stru_87C374.__pad_14B0[12663] ) /*0x6928b0*/
  {
    v22 = Mouse::IsButtonDown(HouseClass_Player.__pad_5568[22868]) /*0x6928e4*/
       || Mouse::IsButtonDown(HouseClass_Player.__pad_5568[22872]);
    aP0 = (MouseClass *)-1; /*0x6928e8*/
    if ( v21 ) /*0x6928f0*/
      WaypointClass::FindOrCreate((char *)HouseClass_Player.field_0, v21, (IUnknown *)&aP0, (IUnknown *)&aP1); /*0x692903*/
    if ( *(_DWORD *)&stru_87C374.__pad_14B0[12672] ) /*0x69290f*/
    {
      v30 = (IUnknown *)48; /*0x692911*/
      goto LABEL_65; /*0x692919*/
    }
    if ( v22 ) /*0x692920*/
    {
      v23 = (IUnknown *)HouseClass_Player.field_0; /*0x692922*/
      if ( !v21 ) /*0x69292a*/
      {
LABEL_61:
        if ( *(_DWORD *)&v23->__pad_1D8[52] == -1 /*0x692996*/
          || !Radar::IsRadarTargetEligible((unsigned int *)v23)
          || (v30 = (IUnknown *)42,
              !LayerClass::IsWithinUsableArea(&stru_87C374.__pad_14B0[8132], (IUnknown *)v14, (TechnoClass *)1)) )
        {
          v30 = (IUnknown *)43; /*0x6929a7*/
        }
        goto LABEL_65; /*0x6929a7*/
      }
      if ( aP0 != *(MouseClass **)(HouseClass_Player.field_0 + 524) ) /*0x692938*/
      {
LABEL_59:
        if ( v21 ) /*0x692970*/
        {
          v30 = (IUnknown *)46; /*0x692972*/
          goto LABEL_65; /*0x69297a*/
        }
        goto LABEL_61; /*0x692970*/
      }
      if ( Radar::IsRadarTargetEligible((unsigned int *)HouseClass_Player.field_0) /*0x692955*/
        && VectorClass::GetAtChecked(*(int **)(HouseClass_Player.field_0 + 4 * (_DWORD)aP0 + 528), (IUnknown *)v21) )
      {
        v30 = (IUnknown *)47; /*0x69295e*/
        goto LABEL_65; /*0x692966*/
      }
    }
    v23 = (IUnknown *)HouseClass_Player.field_0; /*0x692968*/
    goto LABEL_59; /*0x692968*/
  }
LABEL_65:
  if ( stru_87C374.__pad_14B0[12664] ) /*0x6929b6*/
    v30 = (IUnknown *)60; /*0x6929b8*/
  if ( !stru_87C374.__pad_14B0[12661] ) /*0x6929c7*/
    goto LABEL_81; /*0x6929c7*/
  if ( v8
    && (*(int (__thiscall **)(MouseClass *))(v8->field_0 + 60))(v8)
    && (v24 = (#375 *)(*(int (__thiscall **)(MouseClass *))(v8->field_0 + 60))(v8),
        (unsigned __int8)House::IsHumanPlayer(v24))
    && (*(unsigned __int8 (__thiscall **)(MouseClass *))(v8->field_0 + 152))(v8) )
  {
    if ( (*(int (__thiscall **)(MouseClass *))(v8->field_0 + 44))(v8) == 6 )
    {
      v30 = (IUnknown *)((*(unsigned __int8 (__thiscall **)(MouseClass *))(v8->field_0 + 128))(v8) != 0 ? 14 : 12);
      goto LABEL_81; /*0x692a24*/
    }
  }
  else
  {
    v25 = v14[1] << 8; /*0x692a3e*/
    v31[0] = (*v14 << 8) + 128; /*0x692a41*/
    v31[1] = v25 + 128; /*0x692a51*/
    GroundHeight = 0; /*0x692a55*/
    GroundHeight = Cell::GetGroundHeight((IUnknown *)v31); /*0x692a66*/
    if ( !Cell::IsPassable((IUnknown *)v31) /*0x692aa3*/
      && !Game::Stub3((IUnknown *)v31)
      && *((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v14) + 17) != -1 )
    {
      if ( *(_BYTE *)(*(_DWORD *)(HouseClass_Player.field_38 /*0x692abc*/
                                + 4 * *((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v14) + 17))
                    + 680) )
      {
        if ( *((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v14) + 20) != -1 ) /*0x692ad4*/
        {
          v26 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v14); /*0x692adc*/
          v30 = (IUnknown *)12; /*0x692af4*/
          if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)&HouseClass_Array->__pad_0[4 * v26[20]]) ) /*0x692aed*/
            goto LABEL_81; /*0x692afc*/
        }
      }
    }
  }
  v30 = (IUnknown *)14; /*0x692afe*/
LABEL_81:
  if ( *(_DWORD *)&stru_87C374.__pad_14B0[12668] != -1 ) /*0x692b0e*/
  {
    v27 = (IUnknown *)(*(int (__thiscall **)(_DWORD, __int16 *, MouseClass *))(**(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[20608] /*0x692b1d*/
                                                                                           + 4
                                                                                           * *(_DWORD *)&stru_87C374.__pad_14B0[12668])
                                                                             + 108))(
                        *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[20608]
                                  + 4 * *(_DWORD *)&stru_87C374.__pad_14B0[12668]),
                        v14,
                        v8);
    if ( v27 ) /*0x692b22*/
      v30 = v27; /*0x692b24*/
  }
  if ( !v30 && v21 ) /*0x692b32*/
    v30 = (IUnknown *)44; /*0x692b34*/
  if ( *(_DWORD *)&stru_87C374.__pad_14B0[12652] ) /*0x692b43*/
    return 0; /*0x692b45*/
  else
    return (int)v30; /*0x692b51*/
}


// ==== 0x00692B60  Viewport::ProcessScroll  this=MouseClass  sig=csp ====
void __thiscall sub_692B60(_BYTE *this, _DWORD *a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // ebp
  int v6; // ebp
  int v7; // eax
  bool v8; // bl
  double v9; // st7
  double v10; // st6
  double v11; // st7
  double v12; // st6
  double v13; // st7
  int v14; // edx
  __int16 v15; // cx
  int v16; // esi
  unsigned int v17; // ebp
  __int16 v18; // cx
  int v19; // edx
  unsigned int v20; // ebx
  int v21; // eax
  int v22; // edx
  int v23; // esi
  signed int v24; // eax
  int v25; // esi
  signed int v26; // eax
  int v27; // eax
  int v28; // [esp+20h] [ebp-18h]
  int v29; // [esp+24h] [ebp-14h] BYREF
  unsigned int v30; // [esp+28h] [ebp-10h]
  int v31; // [esp+2Ch] [ebp-Ch]
  int v32; // [esp+30h] [ebp-8h]
  char v33; // [esp+3Ch] [ebp+4h]

  if ( this->u32_15568 == 1 ) /*0x692b70*/
    return; /*0x692b70*/
  v3 = MEMORY[0x886FA0] + *a2; /*0x692b92*/
  v32 = MEMORY[0x886FA4] + a2[1]; /*0x692b94*/
  v4 = *(_DWORD *)MEMORY[0x887300]; /*0x692b98*/
  v31 = v3; /*0x692b9a*/
  v5 = (*(int (__thiscall **)(int))(v4 + 124))(MEMORY[0x887300]); /*0x692ba7*/
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88731C] + 124))(MEMORY[0x88731C]) + v5 - 1; /*0x692bb4*/
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88731C] + 128))(MEMORY[0x88731C]) - 1; /*0x692bc0*/
  v8 = v32 <= 0 || v3 <= 0 || v3 >= v6 || v32 >= v7; /*0x692bd5*/
  v33 = 0; /*0x692bdc*/
  if ( (MEMORY[0xB05628] & 1) == 0 ) /*0x692be3*/
  {
    MEMORY[0xB05628] |= 1u; /*0x692bef*/
    atexit(nullsub_175); /*0x692bf5*/
  }
  if ( this->q15520 ) /*0x692bfd*/
  {
    if ( !v8 ) /*0x692c13*/
      goto LABEL_25; /*0x692c13*/
  }
  else if ( !v8 ) /*0x692c09*/
  {
    goto LABEL_41; /*0x692c09*/
  }
  v9 = (double)v31; /*0x692c25*/
  v29 = MEMORY[0x8A00A4]; /*0x692c29*/
  v33 = 1; /*0x692c2d*/
  v10 = (double)MEMORY[0x8A00A4]; /*0x692c32*/
  v30 = MEMORY[0x8A00A8]; /*0x692c36*/
  if ( v9 >= v10 * MEMORY[0x83E738] ) /*0x692c4b*/
  {
    if ( v9 <= (1.0 - MEMORY[0x83E738]) * v10 ) /*0x692c76*/
      v28 = MEMORY[0x8A00A4] / 2; /*0x692c86*/
    else
      v28 = MEMORY[0x8A00A4] - 1; /*0x692c79*/
  }
  else
  {
    v28 = 0; /*0x692c51*/
  }
  v11 = (double)v32; /*0x692c8a*/
  v12 = (double)(int)v30; /*0x692c8e*/
  if ( v11 >= v12 * MEMORY[0x83E740] ) /*0x692ca3*/
  {
    if ( v11 <= (1.0 - MEMORY[0x83E740]) * v12 ) /*0x692cce*/
      v29 = MEMORY[0x8A00A8] / 2; /*0x692cde*/
    else
      v29 = MEMORY[0x8A00A8] - 1; /*0x692cd1*/
  }
  else
  {
    v29 = 0; /*0x692ca9*/
  }
  v31 = MEMORY[0x886FB8] / 2; /*0x692cf6*/
  v32 = MEMORY[0x886FBC] / 2; /*0x692d08*/
  v13 = Math::CalcAngle((double)(MEMORY[0x886FBC] / 2) - (double)v29, (double)v28 - (double)(MEMORY[0x886FB8] / 2)); /*0x692d1b*/
  LOWORD(v30) = Math::RoundToInt((v13 - 1.570796326794897) * -10430.06004058427); /*0x692d34*/
  MEMORY[0xB05690] = v30; /*0x692d3d*/
  MEMORY[0xB0565C] = (unsigned __int8)(((v30 >> 7) + 1) >> 1); /*0x692d4d*/
LABEL_25:
  v14 = this->q15520; /*0x692d52*/
  LOBYTE(v15) = 0; /*0x692d58*/
  HIBYTE(v15) = MEMORY[0xB0565C]; /*0x692d5a*/
  LOWORD(v30) = v15; /*0x692d65*/
  v16 = 8 - v14; /*0x692d71*/
  v17 = (((v30 >> 12) + 1) >> 1) & 7; /*0x692d7f*/
  if ( 8 - v14 < MEMORY[0xA8EB70] + 1 ) /*0x692d84*/
  {
    v16 = MEMORY[0xA8EB70] + 1; /*0x692d86*/
    this->q15520 = 8 - (MEMORY[0xA8EB70] + 1); /*0x692d8f*/
  }
  if ( Mouse::IsButtonDown(2u) ) /*0x692d9d*/
  {
    if ( ++v16 >= 4 ) /*0x692daa*/
    {
      if ( v16 > 8 ) /*0x692db6*/
        v16 = 8; /*0x692db8*/
    }
    else
    {
      v16 = 4; /*0x692dac*/
    }
  }
  LOBYTE(v18) = 0; /*0x692dbd*/
  v19 = *(_DWORD *)this; /*0x692dbf*/
  HIBYTE(v18) = MEMORY[0xB0565C]; /*0x692dc1*/
  LOWORD(v30) = v18; /*0x692dcb*/
  v20 = (((v30 >> 12) + 1) >> 1) & 7; /*0x692ddc*/
  v29 = 1; /*0x692de3*/
  if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *, unsigned int, int *, _DWORD))(v19 + 164))(this, v20, &v29, 0) ) /*0x692deb*/
  {
    (*(void (__thiscall **)(_BYTE *, unsigned int, _DWORD))(this->u32_4C)(this, v17 + 9, 0); /*0x692dff*/
    goto LABEL_40; /*0x692e02*/
  }
  (*(void (__thiscall **)(_BYTE *, unsigned int, _DWORD))(this->u32_4C)(this, v17 + 1, 0); /*0x692e0f*/
  v21 = Math::RoundToInt((double)MEMORY[0x83E748][v16] * *(double *)&MEMORY[0x8871E0]->ScrollMultiplier); /*0x692e25*/
  v22 = *(_DWORD *)this; /*0x692e2a*/
  v29 = v21; /*0x692e2c*/
  (*(void (__thiscall **)(_BYTE *, unsigned int, int *, int))(v22 + 164))(this, v20, &v29, 1); /*0x692e3a*/
  v23 = MEMORY[0xB05640]; /*0x692e45*/
  if ( MEMORY[0xB05638] == -1 ) /*0x692e4e*/
  {
LABEL_37:
    if ( v23 ) /*0x692e68*/
      goto LABEL_40; /*0x692e68*/
    goto LABEL_38; /*0x692e68*/
  }
  v24 = Timer::GetTicks() - MEMORY[0xB05638]; /*0x692e5a*/
  if ( v24 < v23 ) /*0x692e62*/
  {
    v23 -= v24; /*0x692e64*/
    goto LABEL_37; /*0x692e64*/
  }
LABEL_38:
  if ( !v33 ) /*0x692e70*/
    goto LABEL_41; /*0x692e70*/
  MEMORY[0xB05638] = Timer::GetTicks(); /*0x692e84*/
  MEMORY[0xB0563C] = v32; /*0x692e89*/
  MEMORY[0xB05640] = 1; /*0x692e8f*/
  ++this->q15520; /*0x692e9c*/
LABEL_40:
  if ( v33 ) /*0x692ea8*/
    return; /*0x692ea8*/
LABEL_41:
  v25 = MEMORY[0xB05640]; /*0x692eaa*/
  if ( MEMORY[0xB05638] == -1 ) /*0x692eb8*/
    goto LABEL_44; /*0x692eb8*/
  v26 = Timer::GetTicks() - MEMORY[0xB05638]; /*0x692ec4*/
  if ( v26 < v25 ) /*0x692ecc*/
  {
    v25 -= v26; /*0x692ece*/
LABEL_44:
    if ( v25 ) /*0x692ed2*/
      return; /*0x692ed2*/
  }
  v27 = this->q15520 - 1; /*0x692ed4*/
  this->q15520 = v27; /*0x692edb*/
  if ( v27 < 0 ) /*0x692ee1*/
    this->q15520 = v27 + 1; /*0x692ee4*/
  MEMORY[0xB05638] = Timer::GetTicks(); /*0x692ef3*/
  MEMORY[0xB0563C] = v32; /*0x692f01*/
  MEMORY[0xB05640] = 1; /*0x692f06*/
}


// ==== 0x00692F20  nullsub_175  this=-  sig=ida-proto ====
void __cdecl nullsub_175()
{
  ; /*0x692f20*/
}


// ==== 0x00692F30  TacticalClass::ProcessView  this=TacticalClass  sig=csp ====
void __thiscall sub_692F30(_BYTE *this)
{
  int v2; // esi
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // [esp+4h] [ebp-28h] BYREF
  void *v8; // [esp+8h] [ebp-24h] BYREF
  int v9; // [esp+Ch] [ebp-20h] BYREF
  bool v10[8]; // [esp+10h] [ebp-1Ch] BYREF
  int v11[2]; // [esp+18h] [ebp-14h] BYREF
  int v12[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( !MEMORY[0xA8ED9C] ) /*0x692f3d*/
  {
    v2 = MEMORY[0x886FA0]; /*0x692f4a*/
    v3 = MEMORY[0x886FA4]; /*0x692f57*/
    v4 = (_DWORD *)(*(int (__thiscall **)(int, bool *))(*(_DWORD *)MEMORY[0x887640] + 52))(MEMORY[0x887640], v10); /*0x692f5e*/
    v5 = v4[1]; /*0x692f67*/
    v11[0] = *v4 - v2; /*0x692f6a*/
    v11[1] = v5 - v3; /*0x692f72*/
    if ( !Map_Process_63AB60(v11[0], v5 - v3) ) /*0x692f76*/
    {
      if ( this->q555A == 1 ) /*0x692f8c*/
      {
        if ( Mouse::IsButtonDown(1u) ) /*0x692f96*/
        {
          TacticalClass::ProcessScroll((int)&MEMORY[0x87F7E8], v11); /*0x692fa9*/
        }
        else if ( Mouse::IsButtonDown(2u) ) /*0x692fbb*/
        {
          ScrollMapEdge((int *)&MEMORY[0x87F7E8], v11); /*0x692fd2*/
        }
      }
      else
      {
        if ( Tactical::MouseOver(v11, (__int16 *)&v9, v12, &v8, (bool *)&v7 + 3, v10) ) /*0x692ffc*/
        {
          v6 = Radar::ScanWaypoints((int)&v9, v8, 1); /*0x693015*/
          TacticalClass::HandlePlayerAction((char *)&MEMORY[0x87F7E8], (__int16 *)&v9, v10[0], v8, v6, 0); /*0x69302f*/
        }
        if ( this->q5559 && !MEMORY[0xA8ED6B] ) /*0x693045*/
          Viewport::ProcessScroll(this, v11); /*0x69304e*/
      }
    }
  }
}


// ==== 0x00693060  ScrollClass::GetHotspot  this=ScrollClass  sig=csp ====
bool __thiscall MouseClass::_vt26(_BYTE *this)
{
  return this->q555A || MEMORY[0xA8ED9C] || MEMORY[0x887324] && *(float *)&MEMORY[0x887324][54].__tail_0 != 0.0; /*0x693091*/
}


// ==== 0x006930A0  Tactical::HandleTacticalMouseInput  this=Tactical  sig=csp ====
char __thiscall Tactical::HandleTacticalMouseInput(_BYTE *this, int _28, _DWORD *a2, int a4, MouseClass *aP4)
{
  int v5; // eax
  int v7; // eax
  int v8; // eax
  __int16 v10; // [esp+8h] [ebp-1Ch] BYREF
  MouseClass *aP2; // [esp+Ch] [ebp-18h] BYREF
  int v12; // [esp+10h] [ebp-14h] BYREF
  int v13; // [esp+14h] [ebp-10h]
  int v14[3]; // [esp+18h] [ebp-Ch] BYREF

  LOBYTE(v5) = MEMORY[0xA8D63C].__pad_BC0[380]; /*0x6930a0*/
  if ( MEMORY[0xA8D63C].__pad_BC0[380] && (MEMORY[0xA8D63C].__pad_14B0[624] || MEMORY[0xA8D63C].__pad_14B0[639]) ) /*0x6930c4*/
  {
    if ( MEMORY[0xA8D63C].__pad_1258[268] ) /*0x6930d0*/
    {
      if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] ) /*0x6930dc*/
      {
        if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228] ) /*0x6930e8*/
        {
          LOBYTE(v5) = (_BYTE)a2; /*0x6930f5*/
          if ( !MEMORY[0xA8D63C].__pad_14B0[688] || *a2 == 533 ) /*0x693101*/
          {
            v5 = *a2 - 513; /*0x693109*/
            switch ( *a2 ) /*0x69311f*/
            {
              case 0x201: /*0x69311f*/
                aP4 = (MouseClass *)aP4->field_0; /*0x693138*/
                v12 = (__int16)aP4 - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532]; /*0x693148*/
                v13 = SHIWORD(aP4) - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x693150*/
                LOBYTE(v5) = Tactical::MouseOver(&v12, &v10, v14, &a2, (bool *)&aP4, (bool *)&aP2); /*0x693170*/
                if ( (_BYTE)v5 ) /*0x693177*/
                {
                  LOBYTE(v5) = HandlePlanningModeClick(v12, v13); /*0x693187*/
                  if ( !(_BYTE)v5 && !this->q555A ) /*0x693194*/
                  {
                    v7 = Radar::ScanWaypoints((int)&v10, a2, 1); /*0x6931af*/
                    TacticalClass::HandlePlayerAction((char *)&MEMORY[0x87F7E8], (MouseClass *)&v10, aP2, a2, v7, 0); /*0x6931c9*/
                    DisplayClass::InitViewBounds((int)&MEMORY[0x87F7E8], &v12); /*0x6931d8*/
                    LOBYTE(v5) = (unsigned __int8)SetCapture((HWND)g_hWnd); /*0x6931e4*/
                    this->q555A = 1; /*0x6931ea*/
                  }
                }
                break; /*0x6931f6*/
              case 0x202: /*0x69311f*/
                aP4 = (MouseClass *)aP4->field_0; /*0x69320b*/
                v12 = (__int16)aP4 - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532]; /*0x69321b*/
                v13 = SHIWORD(aP4) - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x693221*/
                LOBYTE(v5) = ScriptAction::HitTest(v12, v13); /*0x693225*/
                if ( !(_BYTE)v5 && this->q555A ) /*0x693232*/
                {
                  Tactical::MouseOver(&v12, &v10, v14, &a2, (bool *)&aP4, (bool *)&aP2); /*0x69325e*/
                  v8 = Radar::ScanWaypoints((int)&v10, a2, 0); /*0x693271*/
                  PlayerClass::ExecuteCommand((char *)&MEMORY[0x87F7E8], (MouseClass *)v14, &v10, a2, v8, 0); /*0x69328b*/
                  this->q555A = 0; /*0x693290*/
                  LOBYTE(v5) = ReleaseCapture(); /*0x693296*/
                }
                break; /*0x6932a1*/
              case 0x204: /*0x69311f*/
                aP4 = (MouseClass *)aP4->field_0; /*0x6932b6*/
                v12 = (__int16)aP4 - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532]; /*0x6932c6*/
                v13 = SHIWORD(aP4) - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x6932cc*/
                LOBYTE(v5) = UI_Handle(v12, v13); /*0x6932d0*/
                if ( !this->q555A ) /*0x6932d5*/
                {
                  LOBYTE(v5) = Tactical::MouseOver(&v12, &v10, v14, &a2, (bool *)&aP4, (bool *)&aP2); /*0x693301*/
                  if ( (_BYTE)v5 ) /*0x693308*/
                  {
                    if ( !MEMORY[0xA8D63C].__pad_14B0[688] ) /*0x693314*/
                    {
                      DisplayClass::vt_entry_B0((int)&v12); /*0x693320*/
                      *(_DWORD *)&MEMORY[0x87F8E4].__pad_125C[16888] = v12; /*0x69332d*/
                      *(_DWORD *)&MEMORY[0x87F8E4].__pad_125C[16892] = v13; /*0x693339*/
                      MEMORY[0x87F8E4].__pad_125C[16896] = 0; /*0x69333f*/
                      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 16))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228]); /*0x693347*/
                    }
                    LOBYTE(v5) = (unsigned __int8)SetCapture((HWND)g_hWnd); /*0x693351*/
                    this->q555A = 1; /*0x693357*/
                  }
                }
                break; /*0x693363*/
              case 0x205: /*0x69311f*/
                aP4 = (MouseClass *)aP4->field_0; /*0x693378*/
                LOBYTE(v5) = UI_Handle_63AB00( /*0x69338a*/
                               (__int16)aP4 - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532],
                               SHIWORD(aP4) - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]);
                if ( this->q555A ) /*0x69338f*/
                {
                  if ( MEMORY[0x87F8E4].__pad_125C[16896] ) /*0x69339d*/
                  {
                    LOBYTE(v5) = MEMORY[0x87F8E4].__pad_125C[16900]; /*0x69339f*/
                    (*(void (__thiscall **)(MouseClass **, _DWORD, int))&MEMORY[0x87F7E8]->__pad_3C[12])( /*0x6933b1*/
                      &MEMORY[0x87F7E8],
                      0,
                      v5);
                    MEMORY[0x87F8E4].__pad_125C[16896] = 0; /*0x6933b4*/
                  }
                  else
                  {
                    TacticalClass::DispatchMode((int *)&MEMORY[0x87F7E8], (MouseClass *)&v12); /*0x6933c6*/
                  }
                  DisplayClass::ExitMode(this); /*0x6933cd*/
                  this->q555A = 0; /*0x6933d2*/
                  LOBYTE(v5) = ReleaseCapture(); /*0x6933d8*/
                }
                break; /*0x6933e3*/
              case 0x215: /*0x69311f*/
                LOBYTE(v5) = (_BYTE)g_hWnd; /*0x6933ea*/
                if ( (ObjectClass *)aP4->field_0 != g_hWnd && this->q555A == 1 ) /*0x6933fc*/
                  LOBYTE(v5) = (*(char (__thiscall **)(_BYTE *))(this->q08C)(this); /*0x693402*/
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
char __thiscall Map_EdgeScroll(int *this, _DWORD *a2)
{
  char result; // al
  int SystemMetrics; // ecx
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  int v8; // edx
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
  double v19; // st7
  double v20; // st7
  int v21; // esi
  struct tagPOINT Point; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v23; // [esp+14h] [ebp-Ch] BYREF
  _DWORD v24[2]; // [esp+18h] [ebp-8h] BYREF
  int v25; // [esp+24h] [ebp+4h]

  result = MEMORY[0xA8E9A0]; /*0x693440*/
  if ( MEMORY[0xA8E9A0] ) /*0x69344f*/
  {
    if ( MEMORY[0xA8E378] || (result = MEMORY[0xA8ED6B]) != 0 ) /*0x693465*/
    {
      if ( !this->q1556 ) /*0x69346b*/
      {
        SystemMetrics = GetSystemMetrics(68); /*0x693489*/
        v5 = *a2 - this->q1554; /*0x69348f*/
        if ( (int)((HIDWORD(v5) ^ v5) - HIDWORD(v5)) > 2 * SystemMetrics /*0x6934b4*/
          || (v6 = GetSystemMetrics(69), v7 = a2[1] - this->q1555, (int)((HIDWORD(v7) ^ v7) - HIDWORD(v7)) > 2 * v6) )
        {
          this->q1556 = 1; /*0x6934b6*/
        }
      }
      result = this->q1556; /*0x6934bd*/
      if ( result ) /*0x6934c5*/
      {
        if ( *((_BYTE *)this + 21836) ) /*0x6934cb*/
          goto LABEL_14; /*0x6934cb*/
        if ( this->q11CF ) /*0x6934d5*/
        {
          v8 = *this; /*0x6934df*/
          v24[0] = -1; /*0x6934e4*/
          v24[1] = -1; /*0x6934e8*/
          (*(void (__thiscall **)(int *, _DWORD *))(v8 + 196))(this, v24); /*0x6934f3*/
        }
        else
        {
          *((_BYTE *)this + 21836) = 1; /*0x6934fb*/
        }
        result = *((_BYTE *)this + 21836); /*0x693502*/
        if ( result ) /*0x69350a*/
        {
LABEL_14:
          v9 = *a2 - this->q1554; /*0x693521*/
          v10 = a2[1] - this->q1555; /*0x693526*/
          Point.x = v10; /*0x69352e*/
          v11 = CalcMathFacing8(this + 5460, a2); /*0x693532*/
          if ( v11 != MEMORY[0x83E76C] ) /*0x69353d*/
            MEMORY[0x83E76C] = v11; /*0x69353f*/
          if ( !v9 ) /*0x69354c*/
          {
            v12 = this->q1554; /*0x69354e*/
            if ( v12 ) /*0x693556*/
              v9 = v12 >= MEMORY[0x8A00A4] - 1; /*0x693564*/
            else
              v9 = -1; /*0x693558*/
          }
          if ( !v10 ) /*0x693575*/
          {
            v13 = this->q1555; /*0x693577*/
            if ( !v13 ) /*0x69357f*/
            {
              v10 = -1; /*0x693581*/
LABEL_25:
              Point.x = v10; /*0x69358f*/
              goto LABEL_26; /*0x69358f*/
            }
            if ( v13 >= MEMORY[0x8A00A8] ) /*0x693588*/
            {
              v10 = 1; /*0x69358a*/
              goto LABEL_25; /*0x69358a*/
            }
          }
LABEL_26:
          v14 = this->q1554; /*0x693593*/
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
          else if ( v14 <= MEMORY[0x8A00A4] - 10 || v9 <= 0 ) /*0x6935ab*/
          {
LABEL_34:
            v15 = this->q1555; /*0x6935c2*/
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
            else if ( v15 <= MEMORY[0x8A00A8] - 10 || v10 <= 0 ) /*0x6935da*/
            {
LABEL_47:
              v16 = Map_Helper_5FBF70(MEMORY[0xA8EB60]); /*0x69360b*/
              if ( v16 ) /*0x693618*/
              {
                v17 = v16 - 1; /*0x69361e*/
                if ( v17 ) /*0x69361f*/
                {
                  if ( v17 == 1 ) /*0x693626*/
                  {
                    v9 = -v9; /*0x693631*/
                    v10 = -v10; /*0x693633*/
                    v24[0] = MEMORY[0xA8EB70] + 1; /*0x69363a*/
                    v18 = 12.0 / (double)(MEMORY[0xA8EB70] + 1); /*0x693646*/
                    v23 = abs32(Math::RoundToInt(v18)); /*0x693664*/
                    v24[0] = abs32(Math::RoundToInt(v18)); /*0x693674*/
                    if ( (int)(v23 + v24[0]) > 0 ) /*0x69367c*/
                      goto LABEL_51; /*0x69367c*/
                  }
                }
                else
                {
                  v24[0] = MEMORY[0xA8EB70] + 1; /*0x6936d9*/
                  v19 = 12.0 / (double)(MEMORY[0xA8EB70] + 1); /*0x6936e1*/
                  v23 = abs32(Math::RoundToInt(v19)); /*0x6936ff*/
                  v24[0] = abs32(Math::RoundToInt(v19)); /*0x69370f*/
                  if ( (int)(v23 + v24[0]) > 0 ) /*0x693717*/
                  {
LABEL_51:
                    Point.x = 0; /*0x693682*/
                    Point.y = 0; /*0x693694*/
                    ClientToScreen(g_hWnd, &Point); /*0x693698*/
                    SetCursorPos( /*0x6936c8*/
                      this->q1554 + Point.x + MEMORY[0x886FA0],
                      Point.y + MEMORY[0x886FA4] + this->q1555);
                  }
                }
              }
              else
              {
                v24[0] = MEMORY[0xA8EB70] + 1; /*0x693759*/
                v20 = 1.0 / (double)(MEMORY[0xA8EB70] + 1); /*0x693761*/
                v23 = abs32(Math::RoundToInt(v20)); /*0x69377d*/
                v24[0] = abs32(Math::RoundToInt(v20)); /*0x69378d*/
              }
              v21 = 0; /*0x693791*/
              v25 = 0; /*0x693793*/
              do /*0x6937d5*/
              {
                Point.x = 1; /*0x6937a4*/
                if ( !DisplayClass::SetCoordVisible(v21, &Point, 0) ) /*0x6937ac*/
                  v25 |= 1 << (v21 / 2); /*0x6937cb*/
                v21 += 2; /*0x6937cf*/
              }
              while ( v21 < 8 ); /*0x6937d5*/
              if ( v9 <= 0 ) /*0x6937d9*/
              {
                if ( v9 < 0 ) /*0x6937e6*/
                  DisplayClass::SetCoordVisible(6, &v23, 1); /*0x6937f6*/
              }
              else
              {
                DisplayClass::SetCoordVisible(2, &v23, 1); /*0x6937e4*/
              }
              if ( v10 <= 0 ) /*0x6937fd*/
              {
                if ( v10 < 0 ) /*0x69380a*/
                  DisplayClass::SetCoordVisible(0, v24, 1); /*0x69381a*/
              }
              else
              {
                DisplayClass::SetCoordVisible(4, v24, 1); /*0x693808*/
              }
              return (*(int (__thiscall **)(int *, int, int))(*this + 72))(this, MEMORY[0x83E790][v25], 1); /*0x693831*/
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
int __thiscall MouseClass::GetButtonState(_BYTE *this, MouseClass *aP1)
{
  ScrollClass *v2; // esi
  int result; // eax

  v2 = (ScrollClass *)this; /*0x693841*/
  if ( !this->q5558 ) /*0x693843*/
    return TacticalClass::DispatchMode((int *)this, aP1); /*0x69386f*/
  LOBYTE(this) = MEMORY[0x87F8E4].__pad_125C[16900]; /*0x69384d*/
  result = (*(int (__thiscall **)(ScrollClass *, _DWORD, _BYTE *))(v2->m_ScrollX + 72))(v2, 0, this); /*0x69385a*/
  LOBYTE(v2[1365].m_MaxX) = 0; /*0x69385d*/
  return result; /*0x693864*/
}


// ==== 0x00693880  ScrollClass::CheckCapture  this=ScrollClass  sig=csp ====
char __thiscall MouseClass::_vt44(int this, _DWORD *a2)
{
  char result; // al

  result = MEMORY[0xA8ED9C]; /*0x693880*/
  if ( !MEMORY[0xA8ED9C] ) /*0x69388a*/
  {
    DisplayClass::vt_entry_B0(a2); /*0x693892*/
    *(_DWORD *)(this + 21840) = *a2; /*0x693899*/
    *(_DWORD *)(this + 21844) = a2[1]; /*0x6938a2*/
    *(_BYTE *)(this + 21848) = 0; /*0x6938a8*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x6938b7*/
  }
  return result; /*0x6938bb*/
}


// ==== 0x006938C0  ScrollClass::ReleaseCapture  this=ScrollClass  sig=csp ====
HWND __thiscall Mouse_ReleaseCapture(_BYTE *this)
{
  HWND result; // eax

  DisplayClass::ExitMode(); /*0x6938c3*/
  this->q555A = 0; /*0x6938c8*/
  result = GetCapture(); /*0x6938cf*/
  if ( result == g_hWnd ) /*0x6938de*/
    return (HWND)ReleaseCapture(); /*0x6938e0*/
  return result; /*0x6938db*/
}


// ==== 0x006938F0  ScrollClass::Read  this=ScrollClass  sig=csp ====
ScrollClass *__thiscall ScrollClass::Read(char *Block, char a2)
{
  char *v3; // esi
  int v4; // edi

  v3 = Block + 21484; /*0x6938f5*/
  v4 = 4; /*0x6938fb*/
  do /*0x693916*/
  {
    v3 -= 3988; /*0x693905*/
    Array::ForEachReverse((int)v3, 52, 75, (int (__thiscall *)(int))nullsub_56); /*0x693910*/
    --v4; /*0x693915*/
  }
  while ( v4 ); /*0x693916*/
  RadarClass::Destruct(Block); /*0x69391a*/
  if ( (a2 & 1) != 0 ) /*0x693924*/
    __3_YAXPAX_Z(Block); /*0x693927*/
  return (ScrollClass *)Block; /*0x69392f*/
}


// ==== 0x00693940  sub_693940  this=-  sig=ida-proto ====
int sub_693940()
{
  MEMORY[0xB056D0] = 0; /*0x693942*/
  MEMORY[0xB056D4] = 0; /*0x693947*/
  MEMORY[0xB056D8] = 0; /*0x69394c*/
  MEMORY[0xB056DC] = 0; /*0x693951*/
  return 0; /*0x693956*/
}


// ==== 0x00693960  sub_693960  this=-  sig=ida-proto ====
void sub_693960()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x69396c*/
  MEMORY[0xB056E8] = Math::Sqrt(v0 + v0); /*0x69397e*/
}


// ==== 0x00693990  sub_693990  this=-  sig=ida-proto ====
void sub_693990()
{
  MEMORY[0xB05738] = MEMORY[0xB056E8] / 60.0; /*0x69399c*/
}


// ==== 0x006939B0  sub_6939B0  this=-  sig=ida-proto ====
void sub_6939B0()
{
  MEMORY[0xB05720] = 1.0 / MEMORY[0xB05738]; /*0x6939bc*/
}


// ==== 0x006939D0  sub_6939D0  this=-  sig=ida-proto ====
void sub_6939D0()
{
  MEMORY[0xB05718] = 0.0174532925199433 * 45.0; /*0x6939dc*/
}


// ==== 0x006939F0  sub_6939F0  this=-  sig=ida-proto ====
void sub_6939F0()
{
  MEMORY[0xB056F0] = 0.0174532925199433 * 60.0; /*0x6939fc*/
}


// ==== 0x00693A10  sub_693A10  this=-  sig=ida-proto ====
void sub_693A10()
{
  MEMORY[0xB056C8] = 0.0174532925199433 * 90.0; /*0x693a1c*/
}


// ==== 0x00693A30  sub_693A30  this=-  sig=ida-proto ====
__int64 sub_693A30()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB056C8] - MEMORY[0xB056F0]); /*0x693a42*/
  result = Math::RoundToInt(v0 * MEMORY[0xB056E8] * 0.5); /*0x693a56*/
  MEMORY[0xB05740] = result; /*0x693a5b*/
  return result; /*0x693a60*/
}


// ==== 0x00693A70  sub_693A70  this=-  sig=ida-proto ====
void sub_693A70()
{
  MEMORY[0xB056F8] = Math::ArcTan((double)MEMORY[0xB05740] * 0.00390625); /*0x693a87*/
}


// ==== 0x00693AA0  sub_693AA0  this=-  sig=ida-proto ====
void sub_693AA0()
{
  MEMORY[0xB05710] = Math::ArcTan((double)(2 * MEMORY[0xB05740]) / MEMORY[0xB056E8]); /*0x693ac2*/
}


// ==== 0x00693AD0  sub_693AD0  this=-  sig=ida-proto ====
__int64 sub_693AD0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB05740]) + 0.5); /*0x693aeb*/
  MEMORY[0xB05734] = result; /*0x693af0*/
  return result; /*0x693af6*/
}


// ==== 0x00693B00  sub_693B00  this=-  sig=ida-proto ====
int sub_693B00()
{
  MEMORY[0xB056E0] = 0; /*0x693b02*/
  MEMORY[0xB056E2] = 0; /*0x693b08*/
  return 0; /*0x693b0e*/
}


// ==== 0x00693B10  sub_693B10  this=-  sig=ida-proto ====
int sub_693B10()
{
  MEMORY[0xB05700] = 0; /*0x693b12*/
  MEMORY[0xB05704] = 0; /*0x693b17*/
  MEMORY[0xB05708] = 0; /*0x693b1c*/
  return 0; /*0x693b21*/
}


// ==== 0x00693B30  sub_693B30  this=-  sig=ida-proto ====
int sub_693B30()
{
  MEMORY[0xB05730] = 0; /*0x693b35*/
  MEMORY[0xB05728] = 128; /*0x693b3f*/
  MEMORY[0xB0572C] = 128; /*0x693b44*/
  return 128; /*0x693b49*/
}


// ==== 0x00693B70  RequestNetworkFile  this=ObjectClass  sig=csp ====
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
  Debug::Log(MEMORY[0x83E8F8]); /*0x693b94*/
  Timer::GetTicks(); /*0x693ba0*/
  Debug::Log(MEMORY[0x83E8DC]); /*0x693bb2*/
  Ticks = Timer::GetTicks(); /*0x693bc3*/
  if ( a2 == 1 || a2 == 2 ) /*0x693be4*/
  {
    memset(v41, 0, sizeof(v41)); /*0x693cd4*/
    v42 = 0; /*0x693ce5*/
    v41[0] = 110; /*0x693ce7*/
    Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v41, 250, 1); /*0x693cef*/
    while ( Count::GetCountQueue(&MEMORY[0xA8EA70]) > 0 ) /*0x693d00*/
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
    CopyWideToChar(&v43[1], *(char **)MEMORY[0xA8DA78], -1); /*0x693c19*/
    if ( MEMORY[0xA8B238] == 3 ) /*0x693c25*/
    {
      Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v43, 455, 1, (int)&MEMORY[0xA8BB1C], 0, 0); /*0x693c42*/
    }
    else
    {
      Flagged = GameSettings::FindFlagged(); /*0x693c49*/
      if ( Flagged ) /*0x693c50*/
      {
        v5 = CharToWideString(Flagged + 36); /*0x693c55*/
        Network::SendToPlayer((int)MEMORY[0xA8E9C0], (int)v43, 455, 1, (wchar_t *)v5); /*0x693c6f*/
      }
    }
    while ( Network::GetQueueCount((int)MEMORY[0xA8E9C0]) > 0 ) /*0x693c80*/
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
      Debug::Log(MEMORY[0x83E8AC]); /*0x693d5d*/
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
      if ( ObjectTypeClass::CreateInstance((int)&MEMORY[0xA8EA70], (int)v46, (int)v40) > 0 && *(_DWORD *)v46 == 111 ) /*0x693ebe*/
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
      if ( Network::Send((int)MEMORY[0xA8E9C0], (int)&v48, (int)&v37, (int)v39, (int)v38) ) /*0x693ddc*/
      {
        v13 = NetworkID::Compare((int)v39, (int)&MEMORY[0xA8BB1C]); /*0x693dee*/
        if ( MEMORY[0xA8B238] == 4 ) /*0x693df9*/
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
  Debug::Log(MEMORY[0x83E88C]); /*0x693f1c*/
  Debug::Log(MEMORY[0x83E878], a1); /*0x693f2b*/
LABEL_50:
  v20 = 3600; /*0x693f33*/
  if ( v33 != -1 ) /*0x693f3e*/
  {
    v21 = Timer::GetTicks() - v33; /*0x693f49*/
    if ( v21 >= 3600 ) /*0x693f4f*/
    {
LABEL_54:
      Debug::Log(MEMORY[0x83E83C]); /*0x693f57*/
      return 0; /*0x693f70*/
    }
    v20 = 3600 - v21; /*0x693f51*/
  }
  if ( !v20 ) /*0x693f55*/
    goto LABEL_54; /*0x693f55*/
  Debug::Log(MEMORY[0x83E81C]); /*0x693f78*/
  v34 = Timer::GetTicks(); /*0x693f95*/
  if ( a2 == 1 || a2 == 2 ) /*0x693faa*/
  {
    memset(v41, 0, sizeof(v41)); /*0x6940b8*/
    v42 = 0; /*0x6940ba*/
    v41[0] = 113; /*0x6940cb*/
    Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v41, 250, 1); /*0x6940d3*/
    while ( Count::GetCountQueue(&MEMORY[0xA8EA70]) > 0 ) /*0x6940e4*/
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
    strcpy((char *)&v43[1], ToWideStringChar(*(char **)MEMORY[0xA8DA78])); /*0x693ff7*/
    if ( MEMORY[0xA8B238] == 4 ) /*0x694007*/
    {
      v22 = GameSettings::FindFlagged(); /*0x694009*/
      if ( v22 ) /*0x694010*/
      {
        v23 = CharToWideString(v22 + 36); /*0x694015*/
        Network::SendToPlayer((int)MEMORY[0xA8E9C0], (int)v43, 455, 1, (wchar_t *)v23); /*0x69402f*/
      }
    }
    else
    {
      Network::SendMessage((int)MEMORY[0xA8E9C0], (int)v43, 455, 1, (int)&MEMORY[0xA8BB1C], 0, 0); /*0x694053*/
    }
    while ( Network::GetQueueCount((int)MEMORY[0xA8E9C0]) > 0 ) /*0x694064*/
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
      Debug::Log(MEMORY[0x83E7F4]); /*0x694141*/
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
  Debug::Log(MEMORY[0x83E7D0], v31); /*0x694189*/
  return v30; /*0x693d6c*/
}


// ==== 0x006941A0  ReceiveNetworkFile  this=-  sig=csp ====
char __fastcall ReceiveNetworkFile(RawFileClass *a1, DWORD a2, int a3, char a4)
{
  int v6; // ebp
  size_t v7; // esi
  wchar_t *StringCSF; // eax
  int v9; // edi
  int v10; // esi
  int v11; // esi
  int v12; // ebx
  bool v13; // al
  char *Flagged; // eax
  _BYTE *v15; // eax
  RawFileClass *v16; // esi
  int v17; // esi
  unsigned __int16 v18; // dx
  int CampaignScore_field_0x0C; // esi
  signed int v20; // eax
  char v21; // bl
  char v23; // [esp+21h] [ebp-77h]
  char v24[2]; // [esp+22h] [ebp-76h] BYREF
  RawFileClass *v25; // [esp+24h] [ebp-74h]
  RawFileClass *v26; // [esp+28h] [ebp-70h]
  LPCVOID lpBuffer; // [esp+2Ch] [ebp-6Ch]
  void *Block; // [esp+30h] [ebp-68h]
  int v29; // [esp+34h] [ebp-64h] BYREF
  int v30; // [esp+38h] [ebp-60h]
  DWORD nNumberOfBytesToWrite; // [esp+3Ch] [ebp-5Ch]
  CampaignScore v32; // [esp+40h] [ebp-58h] BYREF
  int v33; // [esp+64h] [ebp-34h]
  _BYTE v34[12]; // [esp+68h] [ebp-30h] BYREF
  LPCSTR v35[9]; // [esp+74h] [ebp-24h] BYREF

  nNumberOfBytesToWrite = a2; /*0x6941ae*/
  v32.CampaignScore_field_0x04 = Timer::GetTicks(); /*0x6941bb*/
  v32.CampaignScore_field_0x0C = 0; /*0x6941bf*/
  Waypoint::InitInvalid(v34); /*0x6941c7*/
  v23 = 0; /*0x6941cc*/
  v6 = __2_YAPAXI_Z(0x1E7u); /*0x6941e1*/
  Debug::Log(); /*0x6941e3*/
  RawFileClass::Construct(v35, a1); /*0x6941f0*/
  if ( FileClass::Open((int *)v35, 0) ) /*0x6941fb*/
    FileClass::Delete(v35); /*0x694208*/
  FileClass::Open2(v35, (const CHAR *)2); /*0x694213*/
  v7 = a2 / 0xC0; /*0x69422c*/
  v25 = (RawFileClass *)(a2 / 0xC0); /*0x69422f*/
  if ( a2 % 0xC0 ) /*0x69422a*/
    v25 = (RawFileClass *)++v7; /*0x694238*/
  Block = (void *)__2_YAPAXI_Z(v7); /*0x69424e*/
  memset(Block, 0, v7); /*0x694253*/
  v26 = 0; /*0x694257*/
  lpBuffer = (LPCVOID)__2_YAPAXI_Z(a2); /*0x694269*/
  if ( a4 ) /*0x694279*/
  {
    ProgressAnim::Init((ProgressScreenClass *)&g_MatrixTransformState + 283, 0, 1079574528, 1, 0); /*0x69428f*/
    SHPClass::Load((ProgressScreenClass *)&g_MatrixTransformState + 283, &stru_830620.__pad_579C[31860], 0, 0); /*0x6942a2*/
    StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[35880], 0, &stru_830620.__pad_579C[35852], 355); /*0x6942c2*/
    TextRenderer::MeasureBuilding( /*0x6942cf*/
      (ProgressScreenClass *)&g_MatrixTransformState + 283,
      -1,
      (ProgressScreenClass *)0xFFFFFFFF,
      (ProgressScreenClass *)StringCSF,
      0,
      1);
    Screen::Capture(1, 0, a2, v6); /*0x6942d8*/
    LoadScreen::Render((ProgressScreenClass *)&g_MatrixTransformState + 283); /*0x6942ea*/
    Network::UpdateLatencyDisplay((ProgressScreenClass *)&g_MatrixTransformState + 283, 0, 0, 0); /*0x694302*/
  }
  v9 = a3; /*0x694307*/
  if ( a3 == 3 || (v10 = 10800, a3 != 4) ) /*0x69431b*/
    v10 = 3600; /*0x69431d*/
  v32.CampaignScore_field_0x04 = Timer::GetTicks(); /*0x69432b*/
  v32.CampaignScore_field_0x08 = v32.CampaignScore_field_0x20; /*0x694333*/
  v32.CampaignScore_field_0x0C = v10; /*0x69433f*/
  if ( MEMORY[0xA8B238] == (CellStruct *)4 ) /*0x694343*/
  {
    IPXManagerClass::createConnection(&MEMORY[0xA8D63C].__pad_1258[300]); /*0x69434a*/
    TacticalClass::SetCameraPosition(&MEMORY[0xA8D63C].__pad_1258[300], 120, -1, 1200); /*0x69435d*/
  }
  if ( a3 == 3 || (v11 = 10800, a3 != 4) ) /*0x69436f*/
    v11 = 3600; /*0x694371*/
  v32.CampaignScore_field_0x04 = Timer::GetTicks(); /*0x694383*/
  v32.CampaignScore_field_0x08 = v32.CampaignScore_field_0x20; /*0x694387*/
  v32.CampaignScore_field_0x0C = v11; /*0x69438b*/
  v12 = 0; /*0x69438f*/
  while ( v9 == 1 || v9 == 2 ) /*0x69439d*/
  {
    MessageLoop(); /*0x69452f*/
    Event::Dispatch(); /*0x694534*/
    if ( ObjectTypeClass::CreateInstance((int)&MEMORY[0xA8D63C].__pad_1258[476], (CampaignScore *)v6, &v32) <= 0 ) /*0x69454b*/
      goto LABEL_43; /*0x69454b*/
    if ( *(_DWORD *)v6 != 112 ) /*0x694555*/
      goto LABEL_43; /*0x694555*/
    v18 = *(_WORD *)(v6 + 24); /*0x694561*/
    if ( *((_BYTE *)Block + v18) ) /*0x694567*/
      goto LABEL_43; /*0x69456a*/
    *((_BYTE *)Block + v18) = 1; /*0x694570*/
    v26 = (RawFileClass *)((char *)v26 + 1); /*0x69457c*/
    v12 += 100; /*0x694580*/
    v32.CampaignScore_field_0x1C = Timer::GetTicks(); /*0x69458c*/
    v32.CampaignScore_field_0x04 = v32.CampaignScore_field_0x1C; /*0x694595*/
    v32.CampaignScore_field_0x08 = v32.CampaignScore_field_0x20; /*0x69459b*/
    v32.CampaignScore_field_0x0C = 1800; /*0x69459f*/
    v33 = 1800; /*0x6945ad*/
    Debug::Log(); /*0x6945b1*/
    qmemcpy( /*0x6945dd*/
      (char *)lpBuffer + 192 * *(unsigned __int16 *)(v6 + 24),
      (const void *)(v6 + 28),
      *(unsigned __int16 *)(v6 + 26));
    if ( a4 ) /*0x6945eb*/
    {
      v30 = v12 / (int)v25; /*0x694604*/
      Network::UpdateLatencyDisplay( /*0x694611*/
        (ProgressScreenClass *)&g_MatrixTransformState + 283,
        0,
        (ProgressScreenClass *)COERCE_UNSIGNED_INT64((double)(v12 / (int)v25)),
        (ProgressScreenClass *)(ProgressScreenClass *)HIDWORD(COERCE_UNSIGNED_INT64((double)(v12 / (int)v25))));
    }
    if ( v26 == v25 ) /*0x694620*/
    {
      if ( a4 ) /*0x694685*/
        Network::UpdateLatencyDisplay( /*0x69469d*/
          (ProgressScreenClass *)&g_MatrixTransformState + 283,
          0,
          0,
          (ProgressScreenClass *)0x40590000);
      v23 = 1; /*0x6946a2*/
LABEL_53:
      v21 = v23; /*0x6946a7*/
      goto LABEL_54; /*0x6946a7*/
    }
LABEL_42:
    v9 = a3; /*0x694622*/
LABEL_43:
    CampaignScore_field_0x0C = v32.CampaignScore_field_0x0C; /*0x694629*/
    if ( v32.CampaignScore_field_0x04 != -1 ) /*0x694634*/
    {
      v20 = Timer::GetTicks() - v32.CampaignScore_field_0x04; /*0x69463f*/
      if ( v20 >= CampaignScore_field_0x0C ) /*0x694645*/
        goto LABEL_53; /*0x694645*/
      CampaignScore_field_0x0C -= v20; /*0x694647*/
    }
    if ( !CampaignScore_field_0x0C ) /*0x69464b*/
      goto LABEL_53; /*0x69464b*/
  }
  MessageLoop(); /*0x6943a3*/
  Event::Dispatch(); /*0x6943a8*/
  v29 = 487; /*0x6943c2*/
  if ( !Network::Send((int)&MEMORY[0xA8D63C].__pad_1258[300], v6, (int)&v29, (TechnoTypeClass *)v34, (int)v24) ) /*0x6943ca*/
    goto LABEL_43; /*0x6943ca*/
  v13 = NetworkID::Compare((int)v34, (int)&MEMORY[0xA8BB1C]); /*0x6943e0*/
  if ( MEMORY[0xA8B238] == (CellStruct *)4 ) /*0x6943ec*/
  {
    Flagged = GameSettings::FindFlagged(); /*0x6943ee*/
    v13 = Flagged && !_strcmpi(Flagged + 36, (char *)(v6 + 4)); /*0x69440f*/
  }
  if ( *(_DWORD *)v6 != 18 ) /*0x694415*/
    goto LABEL_43; /*0x694415*/
  if ( !v13 ) /*0x69441d*/
    goto LABEL_43; /*0x69441d*/
  v15 = (char *)Block + *(unsigned __int16 *)(v6 + 24); /*0x69442d*/
  if ( *v15 ) /*0x69442f*/
    goto LABEL_43; /*0x694432*/
  v16 = v26; /*0x694438*/
  *v15 = 1; /*0x69443c*/
  v12 += 100; /*0x694442*/
  v26 = (RawFileClass *)&v16->__pad_0[1]; /*0x694448*/
  if ( v9 == 3 || (v17 = 10800, v9 != 4) ) /*0x694454*/
    v17 = 3600; /*0x694456*/
  v32.CampaignScore_field_0x10 = Timer::GetTicks(); /*0x694471*/
  v32.CampaignScore_field_0x18 = v17 / 2; /*0x69447a*/
  v32.CampaignScore_field_0x04 = v32.CampaignScore_field_0x10; /*0x69447e*/
  v32.CampaignScore_field_0x08 = v32.CampaignScore_field_0x14; /*0x694482*/
  v32.CampaignScore_field_0x0C = v17 / 2; /*0x694486*/
  if ( v32.CampaignScore_field_0x10 != -1 ) /*0x69448a*/
    Timer::GetTicks(); /*0x694490*/
  Debug::Log(); /*0x6944b5*/
  qmemcpy( /*0x6944e1*/
    (char *)lpBuffer + 192 * *(unsigned __int16 *)(v6 + 24),
    (const void *)(v6 + 28),
    *(unsigned __int16 *)(v6 + 26));
  if ( a4 ) /*0x6944ef*/
  {
    v30 = v12 / (int)v25; /*0x694508*/
    Network::UpdateLatencyDisplay( /*0x694515*/
      (ProgressScreenClass *)&g_MatrixTransformState + 283,
      0,
      (ProgressScreenClass *)COERCE_UNSIGNED_INT64((double)(v12 / (int)v25)),
      (ProgressScreenClass *)(ProgressScreenClass *)HIDWORD(COERCE_UNSIGNED_INT64((double)(v12 / (int)v25))));
  }
  if ( v26 != v25 ) /*0x694524*/
    goto LABEL_42; /*0x694524*/
  v21 = 1; /*0x694659*/
  if ( a4 ) /*0x69465d*/
    Network::UpdateLatencyDisplay( /*0x694675*/
      (ProgressScreenClass *)&g_MatrixTransformState + 283,
      0,
      0,
      (ProgressScreenClass *)0x40590000);
LABEL_54:
  if ( MEMORY[0xA8B238] == (CellStruct *)4 ) /*0x6946b4*/
    IPXManagerClass::destroyConnection(&MEMORY[0xA8D63C].__pad_1258[300]); /*0x6946bb*/
  FileClass::Write2((int *)v35, lpBuffer, (IUnknown *)nNumberOfBytesToWrite); /*0x6946ce*/
  __3_YAXPAX_Z((void *)lpBuffer); /*0x6946d8*/
  __3_YAXPAX_Z(Block); /*0x6946e2*/
  Debug::Log(); /*0x6946fa*/
  FileClass::CloseHandle((HANDLE *)v35); /*0x694706*/
  Debug::Log(); /*0x694710*/
  if ( !v21 && FileClass::Open((int *)v35, 0) ) /*0x694722*/
  {
    FileClass::Delete(v35); /*0x69472f*/
    Debug::Log(); /*0x694739*/
  }
  __3_YAXPAX_Z((void *)v6); /*0x694742*/
  RawFileClass::Dtor((int *)v35); /*0x69474e*/
  return v21; /*0x694755*/
}


// ==== 0x00694760  SendNetworkFile  this=char*  sig=csp ====
char __fastcall Network_SendFile(char *Source, int a2, char a3, char a4)
{
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
  wchar_t *String; // eax
  int v29; // edi
  int v30; // esi
  int v31; // edi
  int v32; // esi
  signed int v33; // eax
  char *v34; // edi
  int v35; // edx
  size_t v36; // eax
  int v37; // esi
  signed int v38; // eax
  int i; // edi
  int v40; // esi
  int j; // edi
  int v42; // esi
  size_t v43; // eax
  int v44; // eax
  signed int v45; // eax
  int v46; // esi
  signed int v47; // eax
  char v48; // bl
  const char *v49; // eax
  DWORD Ticks; // [esp+20h] [ebp-710h]
  DWORD v51; // [esp+20h] [ebp-710h]
  DWORD v52; // [esp+20h] [ebp-710h]
  int v53; // [esp+28h] [ebp-708h]
  char v54; // [esp+2Fh] [ebp-701h]
  int v55; // [esp+30h] [ebp-700h] BYREF
  int v56; // [esp+34h] [ebp-6FCh]
  int v57; // [esp+38h] [ebp-6F8h]
  int v58; // [esp+3Ch] [ebp-6F4h]
  char v59[2]; // [esp+4Eh] [ebp-6E2h] BYREF
  char v60[4]; // [esp+50h] [ebp-6E0h] BYREF
  int v61[22]; // [esp+54h] [ebp-6DCh] BYREF
  _BYTE v62[12]; // [esp+ACh] [ebp-684h] BYREF
  int v63; // [esp+B8h] [ebp-678h]
  _BYTE v64[12]; // [esp+C0h] [ebp-670h] BYREF
  int v65; // [esp+CCh] [ebp-664h] BYREF
  char v66[20]; // [esp+D0h] [ebp-660h] BYREF
  __int16 v67; // [esp+E4h] [ebp-64Ch]
  unsigned __int16 Buffer; // [esp+E6h] [ebp-64Ah]
  _BYTE Buffer_2[192]; // [esp+E8h] [ebp-648h] BYREF
  _BYTE v70[163]; // [esp+1A8h] [ebp-588h] BYREF
  char v71[89]; // [esp+24Bh] [ebp-4E5h] BYREF
  int v72; // [esp+2A4h] [ebp-48Ch] BYREF
  char v73[171]; // [esp+2A8h] [ebp-488h] BYREF
  int v74; // [esp+353h] [ebp-3DDh]
  char v75[277]; // [esp+357h] [ebp-3D9h] BYREF
  int v76[63]; // [esp+46Ch] [ebp-2C4h] BYREF
  int v77[114]; // [esp+568h] [ebp-1C8h] BYREF

  v58 = a2; /*0x694772*/
  Timer::GetTicks(); /*0x694776*/
  v54 = 0; /*0x69478b*/
  Debug::Log(MEMORY[0x83EB28], Source); /*0x694790*/
  CCFileClass::Construct(v61, Source); /*0x69479d*/
  if ( !CCFileClass::Open(v61, 0) ) /*0x6947a7*/
  {
    v61[0] = (int)&vt_CCFileClass; /*0x6947b7*/
    v63 = 0; /*0x6947bf*/
    Vector::Clear((int)v62); /*0x6947c6*/
    v61[0] = (int)&off_7E1668; /*0x6947cf*/
    BufferIOFileClass::Dtor(v61); /*0x6947d7*/
    return 0; /*0x6947e8*/
  }
  Size = CCFileClass::GetSize(v61); /*0x6947f4*/
  v56 = Size; /*0x6947fa*/
  Ticks = Timer::GetTicks(); /*0x694803*/
  Debug::Log(MEMORY[0x83EB08]); /*0x69481d*/
  if ( a2 != 1 && a2 != 2 ) /*0x694831*/
  {
    v72 = 17; /*0x69484f*/
    strcpy(v75, Source); /*0x69485d*/
    v74 = Size; /*0x69486c*/
    strcpy(v73, ToWideStringChar(*(char **)MEMORY[0xA8DA78])); /*0x694897*/
    if ( a3 ) /*0x6948a9*/
    {
      v8 = 1; /*0x6948b0*/
      if ( MEMORY[0xA8DA84] > 1 ) /*0x6948b7*/
      {
        while ( 1 ) /*0x6948c0*/
        {
          Event::Dispatch(); /*0x6948c0*/
          if ( Network::SendToPlayer((int)MEMORY[0xA8E9C0], (int)&v72, 455, 1, *(wchar_t **)(MEMORY[0xA8DA78] + 4 * v8)) ) /*0x6948e3*/
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
            if ( ++v8 >= MEMORY[0xA8DA84] ) /*0x694917*/
              goto LABEL_21; /*0x694917*/
          }
        }
      }
      goto LABEL_21; /*0x6948b7*/
    }
    v11 = 0; /*0x694923*/
    if ( MEMORY[0xA8BB18] <= 0 ) /*0x694927*/
    {
LABEL_21:
      while ( Network::GetQueueCount((int)MEMORY[0xA8E9C0]) > 0 ) /*0x6949ba*/
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
      Debug::Log(MEMORY[0x83EAE0], *(_DWORD *)(MEMORY[0xA8DA78] + 4 * *((char *)&MEMORY[0xA8BB10] + v11))); /*0x69494b*/
      if ( Network::SendToPlayer( /*0x694978*/
             (int)MEMORY[0xA8E9C0],
             (int)&v72,
             455,
             1,
             *(wchar_t **)(MEMORY[0xA8DA78] + 4 * *((char *)&MEMORY[0xA8BB10] + v11))) )
      {
        goto LABEL_20; /*0x69497f*/
      }
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
        if ( ++v11 >= MEMORY[0xA8BB18] ) /*0x6949ac*/
          goto LABEL_21; /*0x6949ac*/
      }
    }
  }
  *(_DWORD *)v70 = 111; /*0x694a1d*/
  strcpy(v71, Source); /*0x694a2b*/
  *(_DWORD *)&v70[158] = Size; /*0x694a42*/
  Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)v70, 250, 1); /*0x694a4f*/
  while ( Count::GetCountQueue(&MEMORY[0xA8EA70]) > 0 ) /*0x694a60*/
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
      Debug::Log(MEMORY[0x83EAC4]); /*0x694abd*/
      v61[0] = (int)&vt_CCFileClass; /*0x694ad1*/
      v63 = 0; /*0x694ad9*/
      Vector::Clear((int)v62); /*0x694ae4*/
      v61[0] = (int)&off_7E1668; /*0x694aed*/
      BufferIOFileClass::Dtor(v61); /*0x694af5*/
      return 0; /*0x694b06*/
    }
    v18 = 3600 - v19; /*0x694ab7*/
  }
  if ( !v18 ) /*0x694abb*/
    goto LABEL_38; /*0x694abb*/
  Waypoint::InitInvalid(v64); /*0x694b10*/
  v20 = 0; /*0x694b1c*/
  if ( a3 ) /*0x694b20*/
    v21 = MEMORY[0xA8DA84] - 1; /*0x694b28*/
  else
    v21 = MEMORY[0xA8BB18]; /*0x694b2d*/
  v51 = Timer::GetTicks(); /*0x694b3c*/
  if ( a2 == 1 || a2 == 2 ) /*0x694b59*/
  {
    while ( 1 ) /*0x694bce*/
    {
      Event::Dispatch(); /*0x694bce*/
      if ( ObjectTypeClass::CreateInstance((int)&MEMORY[0xA8EA70], (int)v76, (int)v60) > 0 && v76[0] == 113 ) /*0x694bf5*/
        break; /*0x694bf5*/
      v24 = 3600; /*0x694bfb*/
      if ( v51 != -1 ) /*0x694c02*/
      {
        v25 = Timer::GetTicks() - v51; /*0x694c0d*/
        if ( v25 >= 3600 ) /*0x694c13*/
          goto LABEL_62; /*0x694c13*/
        v24 = 3600 - v25; /*0x694c15*/
      }
      if ( !v24 || v21 <= 0 ) /*0x694c1d*/
        goto LABEL_62; /*0x694c1d*/
    }
    Debug::Log(MEMORY[0x83EA9C]); /*0x694c26*/
  }
  else
  {
    do /*0x694bc5*/
    {
      Event::Dispatch(); /*0x694b60*/
      v55 = 455; /*0x694b84*/
      if ( Network::Send((int)MEMORY[0xA8E9C0], (int)v77, (int)&v55, (int)v64, (int)v59) && v77[0] == 21 ) /*0x694b9c*/
        ++v20; /*0x694b9e*/
      v22 = 3600; /*0x694ba3*/
      if ( v51 != -1 ) /*0x694baa*/
      {
        v23 = Timer::GetTicks() - v51; /*0x694bb5*/
        if ( v23 >= 3600 ) /*0x694bbb*/
          break; /*0x694bbb*/
        v22 = 3600 - v23; /*0x694bbd*/
      }
    }
    while ( v22 && v20 < v21 ); /*0x694bc5*/
  }
LABEL_62:
  v26 = (v56 + 191) / 192; /*0x694c2e*/
  FileClass::Load(v61, 1); /*0x694c51*/
  v27 = 0; /*0x694c56*/
  if ( a4 ) /*0x694c61*/
  {
    ProgressAnim::Init(0, 1079574528, 1, 0); /*0x694c75*/
    SHPClass::Load(MEMORY[0x83DA30], 0, 0); /*0x694c86*/
    String = GetStringCSF(MEMORY[0x83E9E4], 0, MEMORY[0x83E9C8], 658); /*0x694ca5*/
    TextRenderer::MeasureBuilding(-1, -1, String, 0, 1); /*0x694cb2*/
    Screen::Capture(1, 0, v26, 0); /*0x694cbb*/
    LoadScreen::Render((int)&MEMORY[0xAC4F58], v26, 0, NAN); /*0x694ccd*/
    Network::UpdateLatencyDisplay((int)&MEMORY[0xAC4F58], 0, 0.0, NAN); /*0x694ce2*/
  }
  v29 = v58; /*0x694ce7*/
  Timer::GetTicks(); /*0x694d03*/
  if ( MEMORY[0xA8B238] == 4 ) /*0x694d20*/
  {
    IPXManagerClass::createConnection(MEMORY[0xA8E9C0]); /*0x694d27*/
    TacticalClass::SetCameraPosition(240, -1, 1200); /*0x694d3d*/
  }
  if ( v29 == 3 || (v30 = 10800, v29 != 4) ) /*0x694d4f*/
    v30 = 3600; /*0x694d51*/
  v52 = Timer::GetTicks(); /*0x694d63*/
  v53 = v30; /*0x694d6b*/
  v55 = 0; /*0x694d6f*/
LABEL_70:
  v31 = v56; /*0x694d77*/
  do /*0x694fb0*/
  {
    while ( 1 ) /*0x694d7f*/
    {
      v32 = v53; /*0x694d7f*/
      if ( v52 != -1 ) /*0x694d86*/
      {
        v33 = Timer::GetTicks() - v52; /*0x694d91*/
        if ( v33 >= v53 ) /*0x694d97*/
          goto LABEL_121; /*0x694d97*/
        v32 = v53 - v33; /*0x694d9d*/
      }
      if ( !v32 ) /*0x694da1*/
        goto LABEL_121; /*0x694da1*/
      if ( v58 != 1 && v58 != 2 ) /*0x694db7*/
        break; /*0x694db7*/
      MessageLoop(); /*0x694fbb*/
      Event::Dispatch(); /*0x694fc0*/
      if ( v27 >= v26 ) /*0x694fcc*/
      {
        if ( !Count::GetCountQueue(&MEMORY[0xA8EA70]) ) /*0x6950e3*/
        {
          v54 = 1; /*0x69514d*/
          if ( a4 ) /*0x695154*/
            Network::UpdateLatencyDisplay((int)&MEMORY[0xAC4F58], 0, 100.0, NAN); /*0x69516c*/
LABEL_121:
          v48 = v54; /*0x695171*/
          goto LABEL_122; /*0x695171*/
        }
      }
      else
      {
        if ( Count::GetCountQueue(&MEMORY[0xA8EA70]) >= 2 ) /*0x694fda*/
          goto LABEL_70; /*0x694fda*/
        v65 = 112; /*0x694fe6*/
        v67 = v27; /*0x694ff1*/
        Buffer = v31; /*0x694ff9*/
        if ( v31 >= 192 ) /*0x695001*/
          Buffer = 192; /*0x695003*/
        v31 -= Buffer; /*0x695021*/
        v56 = v31; /*0x695028*/
        v43 = CCFileClass::Read(v61, Buffer_2, Buffer); /*0x69502c*/
        if ( v43 == Buffer ) /*0x695040*/
        {
          v44 = v53; /*0x695046*/
          if ( v52 != -1 ) /*0x69504f*/
          {
            v45 = Timer::GetTicks() - v52; /*0x69505a*/
            if ( v45 >= v53 ) /*0x695060*/
              v44 = 0; /*0x695068*/
            else
              v44 = v53 - v45; /*0x695064*/
          }
          Debug::Log(MEMORY[0x83EA74], v27, v26, v44); /*0x695072*/
          Stream::WriteBlock((int)&MEMORY[0xA8EA70], (int)&v65, 220, 1); /*0x69508e*/
        }
        ++v27; /*0x69509e*/
        v55 += 100; /*0x6950a4*/
        if ( !a4 ) /*0x6950a8*/
          goto LABEL_70; /*0x6950a8*/
        v57 = v55 / v26; /*0x6950c5*/
        Network::UpdateLatencyDisplay((int)&MEMORY[0xAC4F58], 0, (double)(v55 / v26), NAN); /*0x6950d2*/
      }
    }
    MessageLoop(); /*0x694dbd*/
    Event::Dispatch(); /*0x694dc2*/
    if ( v27 < v26 ) /*0x694dce*/
    {
      if ( Network::GetQueueCount((int)MEMORY[0xA8E9C0]) < 10 ) /*0x694ddc*/
      {
        v65 = 18; /*0x694de4*/
        v67 = v27; /*0x694def*/
        Buffer = v31; /*0x694df7*/
        if ( v31 >= 192 ) /*0x694dff*/
          Buffer = 192; /*0x694e01*/
        v34 = ToWideStringChar(*(char **)MEMORY[0xA8DA78]); /*0x694e17*/
        v35 = v56; /*0x694e31*/
        strcpy(v66, v34); /*0x694e38*/
        v56 = v35 - Buffer; /*0x694e5c*/
        v36 = CCFileClass::Read(v61, Buffer_2, Buffer); /*0x694e60*/
        if ( v36 == Buffer ) /*0x694e74*/
        {
          v37 = v53; /*0x694e7e*/
          if ( v52 != -1 ) /*0x694e85*/
          {
            v38 = Timer::GetTicks() - v52; /*0x694e90*/
            if ( v38 >= v53 ) /*0x694e96*/
              v37 = 0; /*0x694e9c*/
            else
              v37 = v53 - v38; /*0x694e98*/
          }
          Debug::Log(MEMORY[0x83EA74], v27, v26, v37); /*0x694ea6*/
          if ( a3 ) /*0x694eb7*/
          {
            for ( i = 1; i < MEMORY[0xA8DA84]; ++i ) /*0x694ec5*/
            {
              do /*0x694ef6*/
              {
                v40 = Network::SendToPlayer( /*0x694eed*/
                        (int)MEMORY[0xA8E9C0],
                        (int)&v65,
                        220,
                        1,
                        *(wchar_t **)(MEMORY[0xA8DA78] + 4 * i));
                Event::Dispatch(); /*0x694eef*/
              }
              while ( !v40 ); /*0x694ef6*/
            }
          }
          else
          {
            for ( j = 0; j < MEMORY[0xA8BB18]; ++j ) /*0x694f0d*/
            {
              do /*0x694f42*/
              {
                v42 = Network::SendToPlayer( /*0x694f39*/
                        (int)MEMORY[0xA8E9C0],
                        (int)&v65,
                        220,
                        1,
                        *(wchar_t **)(MEMORY[0xA8DA78] + 4 * *((char *)&MEMORY[0xA8BB10] + j)));
                Event::Dispatch(); /*0x694f3b*/
              }
              while ( !v42 ); /*0x694f42*/
            }
          }
        }
        ++v27; /*0x694f59*/
        v55 += 100; /*0x694f5f*/
        if ( a4 ) /*0x694f63*/
        {
          v57 = v55 / v26; /*0x694f80*/
          Network::UpdateLatencyDisplay((int)&MEMORY[0xAC4F58], 0, (double)(v55 / v26), NAN); /*0x694f8d*/
        }
      }
      goto LABEL_70; /*0x694f92*/
    }
    if ( Network::GetQueueCount((int)MEMORY[0xA8E9C0]) ) /*0x694f97*/
      goto LABEL_70; /*0x694f9e*/
  }
  while ( Network::GetQueueCount((int)MEMORY[0xA8E9C0]) ); /*0x694fb0*/
  v46 = v53; /*0x6950ee*/
  if ( v52 != -1 ) /*0x6950f5*/
  {
    v47 = Timer::GetTicks() - v52; /*0x695100*/
    if ( v47 >= v53 ) /*0x695106*/
      v46 = 0; /*0x69510c*/
    else
      v46 = v53 - v47; /*0x695108*/
  }
  Debug::Log(MEMORY[0x83EA40], v46); /*0x695114*/
  v48 = 1; /*0x695125*/
  if ( a4 ) /*0x695127*/
    Network::UpdateLatencyDisplay((int)&MEMORY[0xAC4F58], 0, 100.0, NAN); /*0x69513f*/
LABEL_122:
  if ( MEMORY[0xA8B238] == 4 ) /*0x69517c*/
    IPXManagerClass::destroyConnection(MEMORY[0xA8E9C0]); /*0x695183*/
  v49 = MEMORY[0x83EA38]; /*0x69518a*/
  if ( !v48 ) /*0x69518f*/
    v49 = MEMORY[0x83EA30]; /*0x695191*/
  Debug::Log(MEMORY[0x83EA14], v49); /*0x69519c*/
  v61[0] = (int)&vt_CCFileClass; /*0x6951ab*/
  v63 = 0; /*0x6951b3*/
  Vector::Clear((int)v62); /*0x6951be*/
  v61[0] = (int)&off_7E1668; /*0x6951c7*/
  BufferIOFileClass::Dtor(v61); /*0x6951cf*/
  return v48; /*0x6947de*/
}


// ==== 0x006951F0  FindAndValidateMap  this=ObjectClass  sig=csp ====
char __fastcall FindAndValidateMap(ObjectClass *aP0, int edx0, const char *a2, int a4, char a5)
{
  ObjectClass *v5; // esi
  int v6; // ebp
  int *v7; // esi
  int v8; // eax
  int Field; // eax
  unsigned __int8 **v13[3]; // [esp+20h] [ebp-CCh] BYREF
  _DWORD v14[10]; // [esp+2Ch] [ebp-C0h] BYREF
  char v15; // [esp+54h] [ebp-98h]
  int v16; // [esp+58h] [ebp-94h]
  int v17; // [esp+5Ch] [ebp-90h]
  int v18[22]; // [esp+60h] [ebp-8Ch] BYREF
  _BYTE v19[12]; // [esp+B8h] [ebp-34h] BYREF
  int v20; // [esp+C4h] [ebp-28h]
  char Destination[32]; // [esp+CCh] [ebp-20h] BYREF

  v5 = aP0; /*0x6951fa*/
  if ( !_strcmpi(aP0, aRandmapSed) ) /*0x69520a*/
    return 0; /*0x69520a*/
  v6 = 0; /*0x695221*/
  if ( *(int *)&HouseClass_Player.__pad_5568[9764] <= 0 ) /*0x695225*/
    return 0; /*0x69540d*/
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v6) + 88), v5) ) /*0x695249*/
  {
LABEL_17:
    if ( ++v6 >= *(int *)&HouseClass_Player.__pad_5568[9764] ) /*0x6953fb*/
      return 0; /*0x6953fb*/
  }
  CCFileClass::Construct(v18, (char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v6) + 88)); /*0x695260*/
  if ( !CCFileClass::Open(v18, 0) && a5 == 1 ) /*0x69527b*/
  {
    v7 = *(int **)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v6); /*0x695283*/
    v8 = Game::CheckForGameCD((void *)0x3C); /*0x69528b*/
    if ( !ScenarioClass::CheckExists(v7, v8) ) /*0x695293*/
    {
      Field = GameOption::GetField((_DWORD **)v7); /*0x69529e*/
      SetSoundWarning(Field); /*0x6952a5*/
    }
    ++*(_DWORD *)&HouseClass_Player.__pad_5568[18432]; /*0x6952bb*/
    if ( !(unsigned __int8)CD::`vftable'(dword_81C1D0) ) /*0x6952d5*/
    {
      --*(_DWORD *)&HouseClass_Player.__pad_5568[18432]; /*0x695418*/
      v18[0] = (int)&vt_CCFileClass; /*0x69541d*/
      v20 = 0; /*0x695425*/
      Vector::Clear((int)v19); /*0x69542c*/
      v18[0] = (int)&off_7E1668; /*0x695435*/
      BufferIOFileClass::Dtor(v18); /*0x69543d*/
      return 0; /*0x69544e*/
    }
    --*(_DWORD *)&HouseClass_Player.__pad_5568[18432]; /*0x6952dc*/
  }
  if ( !CCFileClass::Open(v18, 0) || CCFileClass::GetSize(v18) != edx0 ) /*0x695300*/
  {
LABEL_16:
    v18[0] = (int)&vt_CCFileClass; /*0x6953c3*/
    v20 = 0; /*0x6953d2*/
    Vector::Clear((int)v19); /*0x6953d9*/
    v18[0] = (int)&off_7E1668; /*0x6953e2*/
    BufferIOFileClass::Dtor(v18); /*0x6953ea*/
    v5 = aP0; /*0x6953ef*/
    goto LABEL_17; /*0x6953ef*/
  }
  v13[1] = 0; /*0x69530a*/
  v13[2] = 0; /*0x69530e*/
  GenericList::Constructor(v14); /*0x695312*/
  v14[0] = &vt_List_INIClass_INISection; /*0x695321*/
  memset(&v14[7], 0, 12); /*0x695329*/
  v15 = 0; /*0x695335*/
  v16 = 0; /*0x695339*/
  v17 = 0; /*0x69533d*/
  v13[0] = (unsigned __int8 **)&vt_INIClass; /*0x695341*/
  FileStraw::Open(v13, (int)v18, 0); /*0x695349*/
  INIClass::GetString( /*0x69536b*/
    v13,
    &g_INI_Key_Digest,
    (unsigned __int8 *)&stru_830620.__pad_1258[32],
    (INIClass *)&stru_830620.__pad_1258[36],
    (INIClass *)Destination,
    32);
  if ( a2 && *a2 && strcmp(a2, Destination) ) /*0x69538f*/
  {
    HashTable::DestroyHashTableINIClass((void **)v13); /*0x6953be*/
    goto LABEL_16; /*0x6953be*/
  }
  strcpy(aP0->__pad_0, (const char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * v6) + 88)); /*0x695472*/
  HashTable::DestroyHashTableINIClass((void **)v13); /*0x69547f*/
  v18[0] = (int)&vt_CCFileClass; /*0x69548b*/
  v20 = 0; /*0x695493*/
  Vector::Clear((int)v19); /*0x69549a*/
  v18[0] = (int)&off_7E1668; /*0x6954a3*/
  BufferIOFileClass::Dtor(v18); /*0x6954ab*/
  return 1; /*0x695401*/
}


// ==== 0x006954C0  sub_6954C0  this=-  sig=ida-proto ====
int sub_6954C0()
{
  MEMORY[0xB05750] = 0; /*0x6954c2*/
  MEMORY[0xB05754] = 0; /*0x6954c7*/
  MEMORY[0xB05758] = 0; /*0x6954cc*/
  MEMORY[0xB0575C] = 0; /*0x6954d1*/
  return 0; /*0x6954d6*/
}


// ==== 0x006954E0  sub_6954E0  this=-  sig=ida-proto ====
void sub_6954E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6954ec*/
  MEMORY[0xB05768] = Math::Sqrt(v0 + v0); /*0x6954fe*/
}


// ==== 0x00695510  sub_695510  this=-  sig=ida-proto ====
void sub_695510()
{
  MEMORY[0xB057B8] = MEMORY[0xB05768] / 60.0; /*0x69551c*/
}


// ==== 0x00695530  sub_695530  this=-  sig=ida-proto ====
void sub_695530()
{
  MEMORY[0xB057A0] = 1.0 / MEMORY[0xB057B8]; /*0x69553c*/
}


// ==== 0x00695550  sub_695550  this=-  sig=ida-proto ====
void sub_695550()
{
  MEMORY[0xB05798] = 0.0174532925199433 * 45.0; /*0x69555c*/
}


// ==== 0x00695570  sub_695570  this=-  sig=ida-proto ====
void sub_695570()
{
  MEMORY[0xB05770] = 0.0174532925199433 * 60.0; /*0x69557c*/
}


// ==== 0x00695590  sub_695590  this=-  sig=ida-proto ====
void sub_695590()
{
  MEMORY[0xB05748] = 0.0174532925199433 * 90.0; /*0x69559c*/
}


// ==== 0x006955B0  sub_6955B0  this=-  sig=ida-proto ====
__int64 sub_6955B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB05748] - MEMORY[0xB05770]); /*0x6955c2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB05768] * 0.5); /*0x6955d6*/
  MEMORY[0xB057C0] = result; /*0x6955db*/
  return result; /*0x6955e0*/
}


// ==== 0x006955F0  sub_6955F0  this=-  sig=ida-proto ====
void sub_6955F0()
{
  MEMORY[0xB05778] = Math::ArcTan((double)MEMORY[0xB057C0] * 0.00390625); /*0x695607*/
}


// ==== 0x00695620  sub_695620  this=-  sig=ida-proto ====
void sub_695620()
{
  MEMORY[0xB05790] = Math::ArcTan((double)(2 * MEMORY[0xB057C0]) / MEMORY[0xB05768]); /*0x695642*/
}


// ==== 0x00695650  sub_695650  this=-  sig=ida-proto ====
__int64 sub_695650()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB057C0]) + 0.5); /*0x69566b*/
  MEMORY[0xB057B4] = result; /*0x695670*/
  return result; /*0x695676*/
}


// ==== 0x00695680  sub_695680  this=-  sig=ida-proto ====
int sub_695680()
{
  MEMORY[0xB05760] = 0; /*0x695682*/
  MEMORY[0xB05762] = 0; /*0x695688*/
  return 0; /*0x69568e*/
}


// ==== 0x00695690  sub_695690  this=-  sig=ida-proto ====
int sub_695690()
{
  MEMORY[0xB05780] = 0; /*0x695692*/
  MEMORY[0xB05784] = 0; /*0x695697*/
  MEMORY[0xB05788] = 0; /*0x69569c*/
  return 0; /*0x6956a1*/
}


// ==== 0x006956B0  sub_6956B0  this=-  sig=ida-proto ====
int sub_6956B0()
{
  MEMORY[0xB057B0] = 0; /*0x6956b5*/
  MEMORY[0xB057A8] = 128; /*0x6956bf*/
  MEMORY[0xB057AC] = 128; /*0x6956c4*/
  return 128; /*0x6956c9*/
}


// ==== 0x006956D0  Network::sendGameEvent  this=Network  sig=csp ====
bool Network::sendGameEvent(Modem *aP0, int _10, _DWORD *a2)
{
  LONG v3; // ecx
  int v4; // ebx
  LONG v5; // ebp
  HWND Dialog; // eax
  bool v7; // zf

  v5 = v3; /*0x6956d1*/
  *(_DWORD *)(v3 + 4) = -1; /*0x6956e0*/
  Dialog = (HWND)CreateDialog(0xEDu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))DlgProcLoadGame, 0); /*0x6956e7*/
  *(_DWORD *)v5 = Dialog; /*0x6956ee*/
  if ( !Dialog ) /*0x6956f1*/
    return *(_DWORD *)(v5 + 4) == 1; /*0x6956f1*/
  SetWindowLongA(Dialog, 8, v5); /*0x6956f7*/
  NetworkDialog::InitModemSettings((HWND *)v5, aP0); /*0x695704*/
  Dialog::Show(*(HWND *)v5); /*0x69570c*/
  while ( *(int *)(v5 + 4) < 0 ) /*0x695716*/
  {
    if ( Dialog::PumpMessages() == 1 ) /*0x69571f*/
      break; /*0x69571f*/
    ScreenSaver::Process(0, v4, v5); /*0x695723*/
  }
  Dialog::Destroy(*(SkirmishDialog **)v5); /*0x695732*/
  v7 = *(_DWORD *)(v5 + 4) == 1; /*0x695737*/
  if ( *(_DWORD *)(v5 + 4) == 1 ) /*0x69573b*/
  {
    qmemcpy(aP0, (const void *)(v5 + 136), 0x70u); /*0x695749*/
    return *(_DWORD *)(v5 + 4) == 1; /*0x69574c*/
  }
  return v7; /*0x695750*/
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
    v16 = &MEMORY[0x889F64]; /*0x695a1a*/
  }
  v11(v14, 0x4B4u, 0, (LPARAM)v16); /*0x695a28*/
  SetFocus(v14); /*0x695a2b*/
  return 0; /*0x6957ff*/
}


// ==== 0x00695BC0  ObjectClass::ApplyModemConfigSettings  this=ObjectClass  sig=csp ====
char __thiscall ModemConfig_ApplySettings(int this)
{
  HWND DlgItem; // eax
  HWND v3; // esi
  LRESULT v4; // edi
  LRESULT v5; // eax
  char *v6; // eax
  unsigned int v7; // edx
  char *v8; // edi
  char *v9; // esi
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
  wchar_t *v28; // eax
  wchar_t *v30; // eax
  HWND v31; // [esp-8h] [ebp-20h]
  wchar_t *String; // [esp+0h] [ebp-18h]
  wchar_t *v33; // [esp+0h] [ebp-18h]

  Debug::Log(); /*0x695bce*/
  DlgItem = GetDlgItem(*(HWND *)this, 1623); /*0x695bdf*/
  v3 = DlgItem; /*0x695beb*/
  if ( DlgItem ) /*0x695bef*/
  {
    v4 = SendMessageA(DlgItem, 0x147u, 0, 0); /*0x695c01*/
    v5 = SendMessageA(v3, 0x150u, v4, 0); /*0x695c0c*/
    *(_DWORD *)(this + 136) = 1; /*0x695c11*/
    *(_BYTE *)(this + 184) = 0; /*0x695c1b*/
    switch ( v5 ) /*0x695c28*/
    {
      case 0: /*0x695c28*/
        *(_DWORD *)(this + 136) = 1016; /*0x695c2f*/
        break; /*0x695c39*/
      case 1: /*0x695c28*/
        *(_DWORD *)(this + 136) = 760; /*0x695c3e*/
        break; /*0x695c48*/
      case 2: /*0x695c28*/
        *(_DWORD *)(this + 136) = 1000; /*0x695c4d*/
        break; /*0x695c57*/
      case 3: /*0x695c28*/
        *(_DWORD *)(this + 136) = 744; /*0x695c5c*/
        break; /*0x695c66*/
      case 4: /*0x695c28*/
        SendMessageA(v3, 0x4BDu, v4, this + 8); /*0x695c73*/
        *(_BYTE *)(this + 70) = 0; /*0x695c7b*/
        v6 = strchr((const char *)(this + 8), 45); /*0x695c7f*/
        if ( v6 ) /*0x695c89*/
        {
          v7 = strlen(v6 + 1) + 1; /*0x695c93*/
          qmemcpy((void *)(this + 184), v6 + 1, 4 * (v7 >> 2)); /*0x695ca6*/
          v9 = &v6[4 * (v7 >> 2) + 1]; /*0x695ca6*/
          v8 = (char *)(this + 184 + 4 * (v7 >> 2)); /*0x695ca6*/
          v10 = v7; /*0x695ca8*/
          goto LABEL_10; /*0x695caa*/
        }
        break; /*0x695caa*/
      default:
        SendMessageA(v3, 0x4BDu, v4, this + 8); /*0x695cb7*/
        *(_BYTE *)(this + 70) = 0; /*0x695cc1*/
        v11 = strlen((const char *)(this + 8)) + 1; /*0x695cc5*/
        qmemcpy((void *)(this + 184), (const void *)(this + 8), 4 * (v11 >> 2)); /*0x695cd8*/
        v9 = (char *)(this + 8 + 4 * (v11 >> 2)); /*0x695cd8*/
        v8 = (char *)(this + 184 + 4 * (v11 >> 2)); /*0x695cd8*/
        v10 = v11; /*0x695cda*/
LABEL_10:
        qmemcpy(v8, v9, v10 & 3); /*0x695cdc*/
        break; /*0x695cdf*/
    }
  }
  Debug::Log(); /*0x695cf7*/
  Debug::Log(); /*0x695d08*/
  v12 = GetDlgItem(*(HWND *)this, 1624); /*0x695d1f*/
  v13 = v12; /*0x695d21*/
  if ( v12 ) /*0x695d25*/
  {
    v14 = SendMessageA(v12, 0x147u, 0, 0); /*0x695d31*/
    v15 = SendMessageA(v13, 0x150u, v14, 0); /*0x695d3c*/
    swscanf((&MEMORY[0x83EB58])[v15], g_Str_Fmt_PctD, this + 144); /*0x695d52*/
  }
  Debug::Log(); /*0x695d66*/
  v16 = GetDlgItem(*(HWND *)this, 1630); /*0x695d77*/
  if ( v16 ) /*0x695d7b*/
  {
    v17 = SendMessageA(v16, 0x188u, 0, 0); /*0x695d87*/
    if ( v17 == -1 || !MEMORY[0xA8DB5C] ) /*0x695d96*/
      *(_DWORD *)(this + 152) = -1; /*0x695da0*/
    else
      *(_DWORD *)(this + 152) = v17; /*0x695d98*/
  }
  v18 = GetDlgItem(*(HWND *)this, 1625); /*0x695db3*/
  v19 = v18; /*0x695db5*/
  if ( v18 ) /*0x695db9*/
  {
    v20 = SendMessageA(v18, 0x147u, 0, 0); /*0x695dc7*/
    v21 = SendMessageA(v19, 0x150u, v20, 0); /*0x695dd2*/
    *(_DWORD *)(this + 156) = v21; /*0x695dd7*/
    *(_BYTE *)(this + 168) = 0; /*0x695ddd*/
    if ( v21 == 3 ) /*0x695de4*/
    {
      SendMessageA(v19, 0x4BDu, v20, this + 8); /*0x695df1*/
      *(_BYTE *)(this + 23) = 0; /*0x695df9*/
      v22 = strchr((const char *)(this + 8), 45); /*0x695dfd*/
      if ( v22 ) /*0x695e07*/
        strcpy((char *)(this + 168), v22 + 1); /*0x695e24*/
    }
  }
  v31 = *(HWND *)this; /*0x695e3b*/
  *(_DWORD *)(this + 148) = 0; /*0x695e3c*/
  v23 = GetDlgItem(v31, 1627); /*0x695e46*/
  if ( v23 && SendMessageA(v23, 0xF0u, 0, 0) == 1 ) /*0x695e5f*/
    *(_DWORD *)(this + 148) = 1; /*0x695e61*/
  Debug::Log(); /*0x695e88*/
  v24 = GetDlgItem(*(HWND *)this, 1002); /*0x695e99*/
  if ( v24 ) /*0x695e9d*/
    *(_DWORD *)(this + 164) = SendMessageA(v24, 0xF0u, 0, 0) == 1; /*0x695eaf*/
  v25 = GetDlgItem(*(HWND *)this, 1003); /*0x695eca*/
  if ( v25 ) /*0x695ece*/
    *(_DWORD *)(this + 160) = SendMessageA(v25, 0xF0u, 0, 0) == 1; /*0x695ee0*/
  v26 = Modem::OpenPort(&MEMORY[0xA8EA70], (_DWORD *)(this + 136)); /*0x695efc*/
  if ( !v26 ) /*0x695f08*/
    return 1; /*0x695fae*/
  v27 = v26 - 1; /*0x695f0e*/
  if ( v27 ) /*0x695f0f*/
  {
    if ( v27 == 1 ) /*0x695f12*/
    {
      String = GetStringCSF(g_Str_TXT_OK, 0, MEMORY[0x83EC28], 535); /*0x695f3c*/
      v28 = GetStringCSF(MEMORY[0x83EC10], 0, MEMORY[0x83EC28], 535); /*0x695f4e*/
      Dialog::ShowMessageBox(this, v28, String, 0, 0, 0); /*0x695f58*/
      return 0; /*0x695f62*/
    }
  }
  else
  {
    v33 = GetStringCSF(g_Str_TXT_OK, 0, MEMORY[0x83EC28], 531); /*0x695f87*/
    v30 = GetStringCSF(MEMORY[0x83EBF8], 0, MEMORY[0x83EC28], 531); /*0x695f99*/
    Dialog::ShowMessageBox(this, v30, v33, 0, 0, 0); /*0x695fa3*/
  }
  return 0; /*0x695f01*/
}


// ==== 0x00695FD0  NetworkDialog::InitModemSettings  this=NetworkDialog  sig=csp ====
HWND __thiscall NetworkDialog::InitModemSettings(HWND *this, _DWORD *a2)
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
  HWND result; // eax
  bool v15; // [esp+13h] [ebp-5h]
  char *v16; // [esp+14h] [ebp-4h]

  qmemcpy(this + 34, a2, 0x70u); /*0x695fea*/
  if ( !this->q022 ) /*0x695fec*/
    this->q022 = (HWND)760; /*0x695ff1*/
  if ( this->q023 == HWND_MESSAGE|0x2 ) /*0x696002*/
    this->q023 = (HWND)3; /*0x696004*/
  if ( this->q024 == HWND_MESSAGE|0x2 ) /*0x696014*/
    this->q024 = (HWND)57600; /*0x696016*/
  InitializeModemPortSelect((int)this); /*0x696022*/
  NetworkDialog::Dispatch(this); /*0x696029*/
  v3 = GetDlgItem; /*0x696030*/
  DlgItem = GetDlgItem(*this, 1625); /*0x69603c*/
  v5 = DlgItem; /*0x696044*/
  if ( DlgItem ) /*0x696048*/
  {
    SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x696054*/
    for ( i = 0; i < 4; ++i ) /*0x696056*/
    {
      v7 = SendMessageA(v5, 0x4C2u, 0, *(_DWORD *)(MEMORY[0xA8DB68] + 4 * i)); /*0x69606a*/
      SendMessageA(v5, 0x151u, v7, i); /*0x696074*/
    }
    ListBoxItem = FindListBoxItem(v5, -1, (int)this->q027); /*0x696088*/
    SendMessageA(v5, 0x14Eu, ListBoxItem, 0); /*0x696096*/
    v3 = GetDlgItem; /*0x696098*/
  }
  v15 = this->q025 == 0; /*0x6960ae*/
  v9 = v3(*this, 1628); /*0x6960b3*/
  if ( v9 ) /*0x6960b7*/
    SendMessageA(v9, 0xF1u, v15, 0); /*0x6960ce*/
  v10 = v3(*this, 1627); /*0x6960d8*/
  if ( v10 ) /*0x6960dc*/
    SendMessageA(v10, 0xF1u, !v15, 0); /*0x6960f2*/
  if ( !MEMORY[0xA8DB5C] ) /*0x6960fb*/
  {
    v11 = (char *)__2_YAPAXI_Z(8u); /*0x696108*/
    v16 = v11; /*0x696117*/
    strcpy(v11, (const char *)&MEMORY[0x832A08]); /*0x69612a*/
    if ( MEMORY[0xA8DB5C] >= MEMORY[0xA8DB54] ) /*0x696140*/
    {
      if ( !MEMORY[0xA8DB59] && MEMORY[0xA8DB54] /*0x69616a*/
        || MEMORY[0xA8DB60] <= 0
        || !(*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8DB4C] + 8))(
              &MEMORY[0xA8DB4C],
              MEMORY[0xA8DB54] + MEMORY[0xA8DB60],
              0) )
      {
        goto LABEL_23; /*0x69616f*/
      }
      v11 = v16; /*0x696171*/
    }
    v12 = MEMORY[0xA8DB5C]++; /*0x69617b*/
    *(_DWORD *)(MEMORY[0xA8DB50] + 4 * v12) = v11; /*0x69618a*/
LABEL_23:
    v3 = GetDlgItem; /*0x69618d*/
    this->q026 = 0; /*0x696193*/
  }
  NetworkDialog::UpdateListBox(this); /*0x69619d*/
  v13 = v3(*this, 1003); /*0x6961ac*/
  if ( v13 ) /*0x6961b0*/
    SendMessageA(v13, 0xF1u, a2[6] != 0, 0); /*0x6961c9*/
  result = v3(*this, 1002); /*0x6961d3*/
  if ( result ) /*0x6961d7*/
    return (HWND)SendMessageA(result, 0xF1u, a2[7] != 0, 0); /*0x6961f0*/
  return result; /*0x6961f2*/
}


// ==== 0x00696200  ObjectClass::InitializeModemPortSelect  this=ObjectClass  sig=csp ====
HWND __thiscall InitializeModemPortSelect(int this)
{
  HWND result; // eax
  HWND v3; // esi
  wchar_t **v4; // edi
  wchar_t *StringCSF; // eax
  LRESULT v6; // eax
  int v7; // edi
  void *v8; // eax
  const char **v9; // eax
  const char **v10; // edi
  const char *v11; // eax
  LRESULT v12; // eax
  wchar_t *v13; // eax
  LRESULT v14; // eax
  LRESULT ItemListBox; // edi
  wchar_t *v16; // eax
  wchar_t *v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  wchar_t *v21; // eax
  int v22; // [esp-4h] [ebp-218h]
  LPARAM lParam; // [esp+10h] [ebp-204h]
  LPARAM lParama; // [esp+10h] [ebp-204h]
  wchar_t Destination[128]; // [esp+14h] [ebp-200h] BYREF
  wchar_t Buffer[128]; // [esp+114h] [ebp-100h] BYREF

  result = GetDlgItem(*(HWND *)this, 1623); /*0x696215*/
  v3 = result; /*0x69621b*/
  if ( result ) /*0x69621f*/
  {
    SendMessageA(result, 0x14Bu, 0, 0); /*0x696235*/
    lParam = 0; /*0x696237*/
    v4 = (wchar_t **)MEMORY[0x83EB44]; /*0x69623f*/
    do /*0x696282*/
    {
      StringCSF = GetStringCSF(*v4, 0, MEMORY[0x83EC28], 647); /*0x696252*/
      v6 = SendMessageA(v3, 0x4C2u, 0, (LPARAM)StringCSF); /*0x696260*/
      SendMessageA(v3, 0x151u, v6, lParam); /*0x69626e*/
      ++v4; /*0x696274*/
      ++lParam; /*0x69627e*/
    }
    while ( (int)v4 < (int)&MEMORY[0x83EB54] ); /*0x696282*/
    v7 = 0; /*0x696284*/
    *(_DWORD *)(this + 248) = 0; /*0x696286*/
    for ( lParama = 0; lParama < 10; ++lParama ) /*0x69628c*/
    {
      v8 = __2_YAPAXI_Z(0x1Cu); /*0x696292*/
      if ( v8 ) /*0x69629c*/
      {
        v9 = (const char **)Modem::EnumerateDevices((int)v8, v7); /*0x6962a1*/
        v10 = v9; /*0x6962a6*/
        if ( v9 ) /*0x6962aa*/
        {
          v11 = *v9; /*0x6962ac*/
          if ( *v10 ) /*0x6962ac*/
          {
            strncpy((char *)(this + 63 * (*(_DWORD *)(this + 248) + 4)), v11, 0x3Fu); /*0x6962c8*/
            v12 = SendMessageA(v3, 0x4BCu, 0, this + 63 * (*(_DWORD *)(this + 248) + 4)); /*0x6962eb*/
            SendMessageA(v3, 0x151u, v12, *(_DWORD *)(this + 248) + 5); /*0x6962fe*/
            ++*(_DWORD *)(this + 248); /*0x696300*/
          }
          FileFind::Close(); /*0x696308*/
          __3_YAXPAX_Z(v10); /*0x69630e*/
        }
      }
      v7 = lParama + 1; /*0x69631a*/
    }
    v13 = GetStringCSF(MEMORY[0x83EBBC], 0, MEMORY[0x83EC28], 674); /*0x696339*/
    wcscpy(Destination, v13); /*0x696344*/
    v14 = SendMessageA(v3, 0x4C2u, 0, (LPARAM)Destination); /*0x696359*/
    SendMessageA(v3, 0x151u, v14, 4); /*0x696364*/
    SendMessageA(v3, 0x14Eu, 0, 0); /*0x696370*/
    if ( strlen((const char *)(this + 184)) ) /*0x69637f*/
    {
      ItemListBox = SendMessageA(v3, 0x4B8u, 0xFFFFFFFF, this + 184); /*0x696395*/
      if ( ItemListBox != -1 ) /*0x69639a*/
        return (HWND)SendMessageA(v3, 0x14Eu, ItemListBox, 0); /*0x69639a*/
      ItemListBox = FindListBoxItem(v3, -1, 4); /*0x6963ab*/
      if ( ItemListBox == -1 ) /*0x6963b0*/
        return (HWND)SendMessageA(v3, 0x14Eu, ItemListBox, 0); /*0x6963b0*/
      v16 = GetStringCSF(MEMORY[0x83EBBC], 0, MEMORY[0x83EC28], 692); /*0x6963cc*/
      swprintf(Destination, (const size_t)MEMORY[0x83ECB4], v16, this + 184); /*0x6963dc*/
      SendMessageA(v3, 0x144u, ItemListBox, 0); /*0x6963ed*/
      v17 = Destination; /*0x6963ef*/
      goto LABEL_25; /*0x6963f3*/
    }
    v18 = *(_DWORD *)(this + 136); /*0x6963f8*/
    if ( v18 > 1000 ) /*0x696403*/
    {
      if ( v18 == 1016 ) /*0x696427*/
      {
        v20 = FindListBoxItem(v3, -1, 0); /*0x6964a2*/
        goto LABEL_27; /*0x6964a2*/
      }
    }
    else
    {
      if ( v18 == 1000 ) /*0x696405*/
      {
        v20 = FindListBoxItem(v3, -1, 2); /*0x696420*/
        goto LABEL_27; /*0x696420*/
      }
      v19 = v18 - 744; /*0x696407*/
      if ( !v19 ) /*0x69640c*/
      {
        v20 = FindListBoxItem(v3, -1, 3); /*0x69641c*/
        goto LABEL_27; /*0x69641c*/
      }
      if ( v19 == 16 ) /*0x696411*/
      {
        v20 = FindListBoxItem(v3, -1, 1); /*0x696415*/
LABEL_27:
        ItemListBox = v20; /*0x6964a7*/
        return (HWND)SendMessageA(v3, 0x14Eu, ItemListBox, 0); /*0x6964a7*/
      }
    }
    ItemListBox = FindListBoxItem(v3, -1, 4); /*0x696435*/
    if ( ItemListBox == -1 ) /*0x69643a*/
      return (HWND)SendMessageA(v3, 0x14Eu, ItemListBox, 0); /*0x6964b2*/
    v22 = *(_DWORD *)(this + 136); /*0x696444*/
    v21 = GetStringCSF(MEMORY[0x83EBBC], 0, MEMORY[0x83EC28], 730); /*0x696454*/
    swprintf(Buffer, (const size_t)MEMORY[0x83ECA8], v21, v22); /*0x696467*/
    SendMessageA(v3, 0x144u, ItemListBox, 0); /*0x696478*/
    v17 = Buffer; /*0x69647a*/
LABEL_25:
    ItemListBox = SendMessageA(v3, 0x4C2u, 0, (LPARAM)v17); /*0x696481*/
    SendMessageA(v3, 0x151u, ItemListBox, 4); /*0x696497*/
    return (HWND)SendMessageA(v3, 0x14Eu, ItemListBox, 0); /*0x696499*/
  }
  return result; /*0x6964b4*/
}


// ==== 0x006964C0  NetworkDialog::Dispatch  this=NetworkDialog  sig=csp ====
HWND __thiscall sub_6964C0(int this)
{
  HWND result; // eax
  HWND v2; // edi
  LPARAM v3; // ebx
  LPARAM *v4; // esi
  LRESULT v5; // eax
  int v6; // eax
  int v7; // eax
  WPARAM ListBoxItem; // eax

  result = GetDlgItem(*(HWND *)this, 1624); /*0x6964ce*/
  v2 = result; /*0x6964d4*/
  if ( result ) /*0x6964d8*/
  {
    SendMessageA(result, 0x14Bu, 0, 0); /*0x6964f1*/
    v3 = 0; /*0x6964f3*/
    v4 = (LPARAM *)&MEMORY[0x83EB58]; /*0x6964f5*/
    do /*0x69651b*/
    {
      v5 = SendMessageA(v2, 0x4C2u, 0, *v4); /*0x696505*/
      SendMessageA(v2, 0x151u, v5, v3); /*0x69650f*/
      ++v4; /*0x696511*/
      ++v3; /*0x696514*/
    }
    while ( (int)v4 < (int)MEMORY[0x83EB70] ); /*0x69651b*/
    v6 = *(_DWORD *)(this + 144); /*0x696521*/
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
          return (HWND)SendMessageA(v2, 0x14Eu, ListBoxItem, 0); /*0x696585*/
      }
    }
    v7 = 3; /*0x69655e*/
    goto LABEL_16; /*0x696563*/
  }
  return result; /*0x69658a*/
}


// ==== 0x00696610  NetworkDialog::UpdateListBox  this=NetworkDialog  sig=csp ====
HWND __thiscall sub_696610(HWND *this)
{
  HWND result; // eax
  HWND v3; // edi
  int i; // esi

  result = GetDlgItem(*this, 1630); /*0x69661e*/
  v3 = result; /*0x696624*/
  if ( result ) /*0x696628*/
  {
    SendMessageA(result, 0x184u, 0, 0); /*0x69663f*/
    for ( i = 0; i < MEMORY[0xA8DB5C]; ++i ) /*0x69664a*/
      SendMessageA(v3, 0x4C8u, 0, *(_DWORD *)(MEMORY[0xA8DB50] + 4 * i)); /*0x69665e*/
    if ( SendMessageA(v3, 0x18Bu, 0, 0) && (int)this->q026 >= -1 ) /*0x696683*/
    {
      if ( (int)this->q026 >= SendMessageA(v3, 0x18Bu, 0, 0) ) /*0x696697*/
        this->q026 = 0; /*0x696699*/
    }
    else
    {
      this->q026 = HWND_MESSAGE|0x2; /*0x6966a5*/
    }
    result = this->q026; /*0x6966ab*/
    if ( result != HWND_MESSAGE|0x2 ) /*0x6966b4*/
      return (HWND)SendMessageA(v3, 0x186u, (WPARAM)result, 0); /*0x6966bf*/
  }
  return result; /*0x6966c1*/
}


// ==== 0x006966D0  ObjectClass::method_6966D0  this=ObjectClass  sig=csp ====
HWND __thiscall sub_6966D0(int this)
{
  bool v2; // bl
  HWND DlgItem; // eax
  HWND result; // eax

  v2 = *(_DWORD *)(this + 148) == 0; /*0x6966ec*/
  DlgItem = GetDlgItem(*(HWND *)this, 1628); /*0x6966ef*/
  if ( DlgItem ) /*0x6966f9*/
    SendMessageA(DlgItem, 0xF1u, v2, 0); /*0x69670c*/
  result = GetDlgItem(*(HWND *)this, 1627); /*0x696716*/
  if ( result ) /*0x69671a*/
    return (HWND)SendMessageA(result, 0xF1u, !v2, 0); /*0x69672c*/
  return result; /*0x69672e*/
}


// ==== 0x006967B0  ObjectClass::DlgProcLoadGame_Load  this=ObjectClass  sig=csp ====
HWND __thiscall DlgProcLoadGame_Load(int this)
{
  ObjectClass *DlgItem; // ebx
  HWND result; // eax
  HWND v4; // ebp
  int v5; // eax
  char v6; // al
  wchar_t *v7; // eax
  LRESULT ListBoxItem; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-24h]
  int v10; // [esp+0h] [ebp-14h]

  DlgItem = (ObjectClass *)GetDlgItem(*(HWND *)this, 1623); /*0x6967cf*/
  result = GetDlgItem(*(HWND *)this, 1631); /*0x6967d1*/
  v4 = result; /*0x6967d5*/
  if ( DlgItem && result ) /*0x6967df*/
  {
    ShowWindow(result, 0); /*0x6967e8*/
    EnableWindow(v4, 0); /*0x6967f1*/
    SendMessageA(v4, 0x4B5u, 0x40u, this + 8); /*0x696809*/
    *(_BYTE *)(this + 71) = 0; /*0x69680d*/
    String::Trim((char *)(this + 8)); /*0x696811*/
    _strupr((char *)(this + 8)); /*0x696817*/
    if ( !_strcmpi((const void *)(this + 8), &stru_830620.__pad_579C[36660]) ) /*0x69682c*/
    {
LABEL_17:
      v5 = 0; /*0x69691b*/
      goto LABEL_18; /*0x69691b*/
    }
    if ( !_strcmpi((const void *)(this + 8), &stru_830620.__pad_579C[36656]) ) /*0x696838*/
    {
LABEL_5:
      v5 = 1; /*0x696844*/
LABEL_18:
      ListBoxItem = FindListBoxItem((HWND)DlgItem, -1, v5); /*0x69691d*/
      return (HWND)SendMessageA((HWND)DlgItem, 0x14Eu, ListBoxItem, 0); /*0x696931*/
    }
    if ( !_strcmpi((const void *)(this + 8), &stru_830620.__pad_579C[36652]) ) /*0x696854*/
    {
LABEL_7:
      v5 = 2; /*0x696860*/
      goto LABEL_18; /*0x696865*/
    }
    if ( !_strcmpi((const void *)(this + 8), &stru_830620.__pad_579C[36648]) ) /*0x696870*/
    {
LABEL_9:
      v5 = 3; /*0x69687c*/
      goto LABEL_18; /*0x696881*/
    }
    if ( !strncmp((AnimClass *)(this + 8), &stru_830620.__pad_579C[36644], 3u) ) /*0x69688e*/
    {
      v6 = *(_BYTE *)(this + 11); /*0x69689a*/
      switch ( v6 ) /*0x6968a8*/
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
          if ( v6 <= 57 && v6 > 48 ) /*0x6968b5*/
          {
            *(_BYTE *)(this + 12) = 0; /*0x6968b7*/
            return ListBox::SetCustomEntry((HWND *)this, 1623, 4, (void *)(this + 8)); /*0x6968b7*/
          }
          StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_579C[36460], 1088); /*0x6968f4*/
          v7 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[36616], 0, &stru_830620.__pad_579C[36460], 1088); /*0x696906*/
          result = (HWND)Dialog::ShowMessageBox((int)v7, StringCSF, 0, 0, 0, v10); /*0x696910*/
          break; /*0x69691a*/
      }
    }
    else
    {
      return ListBox::SetCustomEntry((HWND *)this, 1623, 4, (void *)(this + 8)); /*0x6968bb*/
    }
  }
  return result; /*0x6968ca*/
}


// ==== 0x00696950  ObjectClass::method  this=ObjectClass  sig=csp ====
HWND __thiscall sub_696950(int this)
{
  HWND result; // eax
  HWND v3; // ebx

  result = GetDlgItem(*(HWND *)this, 1626); /*0x69695c*/
  v3 = result; /*0x696962*/
  if ( result ) /*0x696966*/
  {
    ShowWindow(result, 0); /*0x69696c*/
    EnableWindow(v3, 0); /*0x696975*/
    SendMessageA(v3, 0x4B5u, 0x10u, this + 8); /*0x696987*/
    *(_BYTE *)(this + 23) = 0; /*0x69698f*/
    String::Trim((char *)(this + 8)); /*0x696993*/
    _strupr((char *)(this + 8)); /*0x696999*/
    return ListBox::SetCustomEntry((HWND *)this, 1625, 3, (void *)(this + 8)); /*0x6969ab*/
  }
  return result; /*0x6969b1*/
}


// ==== 0x006969C0  ListBox::SetCustomEntry  this=ObjectClass  sig=csp ====
HWND __thiscall ListBox_SetCustomEntry(HWND *this, int nIDDlgItem, LPARAM a3, void *a4)
{
  HWND result; // eax
  HWND v5; // ebx
  wchar_t *String; // eax
  LRESULT v7; // esi
  int wParam; // [esp+Ch] [ebp-84h]
  char lParam[128]; // [esp+10h] [ebp-80h] BYREF

  result = GetDlgItem(*this, nIDDlgItem); /*0x6969d1*/
  v5 = result; /*0x6969d7*/
  if ( result ) /*0x6969db*/
  {
    wParam = FindListBoxItem(result, -1, a3); /*0x696a05*/
    SendMessageA(v5, 0x4BDu, wParam, (LPARAM)lParam); /*0x696a09*/
    result = (HWND)strchr(lParam, 45); /*0x696a12*/
    if ( result ) /*0x696a1c*/
    {
      result = (HWND)_strcmpi(a4, (char *)result + 1); /*0x696a2c*/
      if ( result ) /*0x696a36*/
      {
        String = GetStringCSF(MEMORY[0x83EBBC], 0, MEMORY[0x83EC28], 1187); /*0x696a4e*/
        sprintf(lParam, MEMORY[0x83ECF4], String); /*0x696a5e*/
        strcat(lParam, (const char *)a4); /*0x696a87*/
        SendMessageA(v5, 0x144u, wParam, 0); /*0x696a9b*/
        v7 = SendMessageA(v5, 0x4BCu, 0, (LPARAM)lParam); /*0x696ab3*/
        SendMessageA(v5, 0x151u, v7, a3); /*0x696abd*/
        return (HWND)SendMessageA(v5, 0x14Eu, v7, 0); /*0x696ac8*/
      }
    }
  }
  return result; /*0x696acb*/
}


// ==== 0x00696AE0  ObjectClass::DlgProcLoadGame_Load_696AE0  this=ObjectClass  sig=csp ====
HWND __thiscall sub_696AE0(int this)
{
  HWND DlgItem; // edi
  HWND result; // eax
  HWND v4; // ebp
  char *v5; // esi
  LRESULT v6; // edi
  int v7; // eax
  char *v8; // [esp+10h] [ebp-8h]

  DlgItem = GetDlgItem(*(HWND *)this, 1629); /*0x696b05*/
  result = GetDlgItem(*(HWND *)this, 1630); /*0x696b07*/
  v4 = result; /*0x696b0b*/
  if ( DlgItem ) /*0x696b0d*/
  {
    if ( result ) /*0x696b15*/
    {
      v5 = (char *)(this + 8); /*0x696b21*/
      SendMessageA(DlgItem, 0x4B5u, 0x80u, (LPARAM)v5); /*0x696b30*/
      SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)&MEMORY[0x889F64]); /*0x696b3f*/
      String::Trim(v5); /*0x696b43*/
      result = 0; /*0x696b4d*/
      if ( strlen(v5) ) /*0x696b4f*/
      {
        _strupr(v5); /*0x696b5b*/
        v6 = SendMessageA(v4, 0x4C4u, 0xFFFFFFFF, (LPARAM)v5); /*0x696b6e*/
        if ( v6 == -1 ) /*0x696b73*/
        {
          v8 = (char *)__2_YAPAXI_Z(0x29u); /*0x696b8c*/
          strcpy(v8, v5); /*0x696ba2*/
          result = (HWND)SendMessageA(v4, 0x4C8u, 0, (LPARAM)v8); /*0x696bb1*/
          v6 = (LRESULT)result; /*0x696bb3*/
          if ( result == HWND_MESSAGE|0x2 ) /*0x696bb8*/
            return result; /*0x696bb8*/
          if ( MEMORY[0xA8DB5C] < MEMORY[0xA8DB54] /*0x696bf1*/
            || (MEMORY[0xA8DB59] || !MEMORY[0xA8DB54])
            && MEMORY[0xA8DB60] > 0
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8DB4C] + 8))(
                 &MEMORY[0xA8DB4C],
                 MEMORY[0xA8DB54] + MEMORY[0xA8DB60],
                 0) )
          {
            v7 = MEMORY[0xA8DB5C]++; /*0x696c02*/
            *(_DWORD *)(MEMORY[0xA8DB50] + 4 * v7) = v8; /*0x696c11*/
          }
        }
        SendMessageA(v4, 0x186u, v6, 0); /*0x696c1d*/
        SendMessageA(v4, 0x197u, v6, 0); /*0x696c28*/
        *(_DWORD *)(this + 152) = v6; /*0x696c2e*/
        return (HWND)this; /*0x696c2a*/
      }
    }
  }
  return result; /*0x696c34*/
}


// ==== 0x00696C40  ObjectClass::DlgProcLoadGame_Load_696C40  this=ObjectClass  sig=csp ====
HWND __thiscall sub_696C40(int this)
{
  HWND result; // eax
  HWND v3; // edi
  LRESULT v4; // esi
  int v5; // eax

  result = GetDlgItem(*(HWND *)this, 1630); /*0x696c4f*/
  v3 = result; /*0x696c55*/
  if ( result ) /*0x696c59*/
  {
    result = (HWND)SendMessageA(result, 0x18Bu, 0, 0); /*0x696c6f*/
    if ( (int)result > 0 ) /*0x696c73*/
    {
      result = (HWND)SendMessageA(v3, 0x188u, 0, 0); /*0x696c7f*/
      v4 = (LRESULT)result; /*0x696c81*/
      if ( result != HWND_MESSAGE|0x2 ) /*0x696c86*/
      {
        SendMessageA(v3, 0x182u, (WPARAM)result, 0); /*0x696c91*/
        if ( v4 < MEMORY[0xA8DB5C] ) /*0x696c9b*/
        {
          v5 = v4; /*0x696c9e*/
          if ( v4 < --MEMORY[0xA8DB5C] ) /*0x696ca8*/
          {
            do /*0x696cc0*/
            {
              ++v5; /*0x696cb0*/
              *(_DWORD *)(MEMORY[0xA8DB50] + 4 * v5 - 4) = *(_DWORD *)(MEMORY[0xA8DB50] + 4 * v5); /*0x696cb4*/
            }
            while ( v5 < MEMORY[0xA8DB5C] ); /*0x696cc0*/
          }
        }
        if ( v4 >= SendMessageA(v3, 0x18Bu, 0, 0) ) /*0x696cd0*/
          --v4; /*0x696cd2*/
        SendMessageA(v3, 0x186u, v4, 0); /*0x696cdc*/
        result = (HWND)SendMessageA(v3, 0x197u, v4, 0); /*0x696ce7*/
        *(_DWORD *)(this + 152) = v4; /*0x696ce9*/
      }
    }
  }
  return result; /*0x696cef*/
}


// ==== 0x00696D00  sub_696D00  this=-  sig=ida-proto ====
int sub_696D00()
{
  MEMORY[0xB057D0] = 0; /*0x696d02*/
  MEMORY[0xB057D4] = 0; /*0x696d07*/
  MEMORY[0xB057D8] = 0; /*0x696d0c*/
  MEMORY[0xB057DC] = 0; /*0x696d11*/
  return 0; /*0x696d16*/
}


// ==== 0x00696D20  sub_696D20  this=-  sig=ida-proto ====
void sub_696D20()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x696d2c*/
  MEMORY[0xB057E8] = Math::Sqrt(v0 + v0); /*0x696d3e*/
}


// ==== 0x00696D50  sub_696D50  this=-  sig=ida-proto ====
void sub_696D50()
{
  MEMORY[0xB07778] = MEMORY[0xB057E8] / 60.0; /*0x696d5c*/
}


// ==== 0x00696D70  sub_696D70  this=-  sig=ida-proto ====
void sub_696D70()
{
  MEMORY[0xB07760] = 1.0 / MEMORY[0xB07778]; /*0x696d7c*/
}


// ==== 0x00696D90  sub_696D90  this=-  sig=ida-proto ====
void sub_696D90()
{
  MEMORY[0xB07758] = 0.0174532925199433 * 45.0; /*0x696d9c*/
}


// ==== 0x00696DB0  sub_696DB0  this=-  sig=ida-proto ====
void sub_696DB0()
{
  MEMORY[0xB057F0] = 0.0174532925199433 * 60.0; /*0x696dbc*/
}


// ==== 0x00696DD0  sub_696DD0  this=-  sig=ida-proto ====
void sub_696DD0()
{
  MEMORY[0xB057C8] = 0.0174532925199433 * 90.0; /*0x696ddc*/
}


// ==== 0x00696DF0  sub_696DF0  this=-  sig=ida-proto ====
__int64 sub_696DF0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB057C8] - MEMORY[0xB057F0]); /*0x696e02*/
  result = Math::RoundToInt(v0 * MEMORY[0xB057E8] * 0.5); /*0x696e16*/
  MEMORY[0xB07780] = result; /*0x696e1b*/
  return result; /*0x696e20*/
}


// ==== 0x00696E30  sub_696E30  this=-  sig=ida-proto ====
void sub_696E30()
{
  MEMORY[0xB057F8] = Math::ArcTan((double)MEMORY[0xB07780] * 0.00390625); /*0x696e47*/
}


// ==== 0x00696E60  sub_696E60  this=-  sig=ida-proto ====
void sub_696E60()
{
  MEMORY[0xB07750] = Math::ArcTan((double)(2 * MEMORY[0xB07780]) / MEMORY[0xB057E8]); /*0x696e82*/
}


// ==== 0x00696E90  sub_696E90  this=-  sig=ida-proto ====
__int64 sub_696E90()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB07780]) + 0.5); /*0x696eab*/
  MEMORY[0xB07774] = result; /*0x696eb0*/
  return result; /*0x696eb6*/
}


// ==== 0x00696EC0  sub_696EC0  this=-  sig=ida-proto ====
int sub_696EC0()
{
  MEMORY[0xB057E0] = 0; /*0x696ec2*/
  MEMORY[0xB057E2] = 0; /*0x696ec8*/
  return 0; /*0x696ece*/
}


// ==== 0x00696ED0  sub_696ED0  this=-  sig=ida-proto ====
int sub_696ED0()
{
  MEMORY[0xB07740] = 0; /*0x696ed2*/
  MEMORY[0xB07744] = 0; /*0x696ed7*/
  MEMORY[0xB07748] = 0; /*0x696edc*/
  return 0; /*0x696ee1*/
}


// ==== 0x00696EF0  sub_696EF0  this=-  sig=ida-proto ====
int sub_696EF0()
{
  MEMORY[0xB07770] = 0; /*0x696ef5*/
  MEMORY[0xB07768] = 128; /*0x696eff*/
  MEMORY[0xB0776C] = 128; /*0x696f04*/
  return 128; /*0x696f09*/
}


// ==== 0x00696F10  SessionClass::GetPlayerSide  this=SessionClass  sig=csp ====
int __thiscall SessionClass_GetPlayerSide(int this)
{
  int result; // eax

  result = -2; /*0x696f13*/
  if ( *(_DWORD *)(this + 79) != -2 ) /*0x696f1a*/
    return *(_DWORD *)(this + 75); /*0x696f1c*/
  return result; /*0x696f1f*/
}


// ==== 0x00696F20  SessionClass::GetPlayerColor  this=SessionClass  sig=csp ====
int __thiscall SessionClass_GetPlayerColor(int this)
{
  int result; // eax

  result = -2; /*0x696f23*/
  if ( *(_DWORD *)(this + 87) != -2 ) /*0x696f2a*/
    return *(_DWORD *)(this + 83); /*0x696f2c*/
  return result; /*0x696f2f*/
}


// ==== 0x00696F30  MPCooperative::finalizeSession  this=MPCooperative  sig=csp ====
int __thiscall sub_696F30(int this)
{
  int result; // eax

  result = -2; /*0x696f33*/
  if ( *(_DWORD *)(this + 87) != -2 || *(_DWORD *)(this + 83) != -1 ) /*0x696f40*/
    return *(_DWORD *)(this + 83); /*0x696f42*/
  return result; /*0x696f45*/
}


// ==== 0x00696F50  SessionClass::GetOption  this=SessionClass  sig=csp ====
int __thiscall SessionClass_GetOption(int this)
{
  int result; // eax

  result = -2; /*0x696f53*/
  if ( *(_DWORD *)(this + 95) != -2 || *(_DWORD *)(this + 91) != -1 ) /*0x696f60*/
    return *(_DWORD *)(this + 91); /*0x696f62*/
  return result; /*0x696f65*/
}


// ==== 0x00696F70  SessionClass::GetOption2  this=SessionClass  sig=csp ====
int __thiscall SessionClass_GetOption2(int this)
{
  int result; // eax

  result = -2; /*0x696f73*/
  if ( *(_DWORD *)(this + 103) != -2 || *(_DWORD *)(this + 99) != -1 ) /*0x696f80*/
    return *(_DWORD *)(this + 99); /*0x696f82*/
  return result; /*0x696f85*/
}


// ==== 0x00696F90  SessionClass::SetPlayerOption  this=CampaignClass  sig=csp ====
int __thiscall SessionClass::SetPlayerOption(int this, SkirmishDialog *aP1)
{
  SkirmishDialog *result; // eax

  result = aP1; /*0x696f90*/
  if ( aP1 == (SkirmishDialog *)-2 ) /*0x696f97*/
  {
    *(_DWORD *)(this + 75) = 0; /*0x696f99*/
    *(_DWORD *)(this + 79) = -2; /*0x696fa0*/
  }
  else
  {
    *(_DWORD *)(this + 75) = aP1; /*0x696fa6*/
    *(_DWORD *)(this + 79) = -1; /*0x696fa9*/
  }
  return (int)result->__pad_0; /*0x696fa3*/
}


// ==== 0x00696FC0  SessionClass::SetPlayerColor  this=CampaignClass  sig=csp ====
int __thiscall SessionClass_SetPlayerColor(int this, int a2)
{
  int result; // eax

  result = a2; /*0x696fc0*/
  if ( a2 == -2 ) /*0x696fc7*/
  {
    *(_DWORD *)(this + 83) = -1; /*0x696fc9*/
    *(_DWORD *)(this + 87) = -2; /*0x696fd0*/
  }
  else
  {
    *(_DWORD *)(this + 83) = a2; /*0x696fd6*/
    *(_DWORD *)(this + 87) = -1; /*0x696fd9*/
  }
  return result; /*0x696fd3*/
}


// ==== 0x00696FF0  SessionClass::SetOption  this=CampaignClass  sig=csp ====
int __thiscall SessionClass::SetOption(int this, SessionClass *aP1)
{
  SessionClass *result; // eax

  result = aP1; /*0x696ff0*/
  if ( aP1 == (SessionClass *)-2 ) /*0x696ff7*/
  {
    *(_DWORD *)(this + 91) = -1; /*0x696ff9*/
    *(_DWORD *)(this + 95) = -2; /*0x697000*/
  }
  else
  {
    *(_DWORD *)(this + 91) = aP1; /*0x697006*/
    *(_DWORD *)(this + 95) = -1; /*0x697009*/
  }
  return (int)result->GameMode; /*0x697003*/
}


// ==== 0x00697020  SessionClass::SetOption2  this=CampaignClass  sig=csp ====
int __thiscall SessionClass::SetOption2(int this, SessionClass *aP1)
{
  SessionClass *result; // eax

  result = aP1; /*0x697020*/
  if ( aP1 == (SessionClass *)-2 ) /*0x697027*/
  {
    *(_DWORD *)(this + 99) = -1; /*0x697029*/
    *(_DWORD *)(this + 103) = -2; /*0x697030*/
  }
  else
  {
    *(_DWORD *)(this + 99) = aP1; /*0x697036*/
    *(_DWORD *)(this + 103) = -1; /*0x697039*/
  }
  return (int)result->GameMode; /*0x697033*/
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
  this->q065 = 1; /*0x6970c7*/
  this->q066 = 10000; /*0x6970cd*/
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
  this->q082 = 0; /*0x697110*/
  this->q083 = 0; /*0x697116*/
  this->u32_84 = 1; /*0x69711c*/
  this->q085 = 10000; /*0x697122*/
  this->q086 = 10; /*0x697128*/
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
  this->u32_A4 = 10000; /*0x69717c*/
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
  this->q1A4 = &vt_DynamicVectorClass_MultiMission; /*0x697206*/
  this->u32_6A4 = 10; /*0x697210*/
  this->u32_6A0 = 0; /*0x697216*/
  Waypoint::InitInvalid(this + 2276); /*0x69721c*/
  this->u32_8F4 = 0; /*0x697227*/
  this->u32_8F8 = 0; /*0x69722d*/
  this->q8FC = 1; /*0x697233*/
  this->q8FD = 0; /*0x69723a*/
  this->u32_8F0 = &vt_DynamicVectorClass_GlobalPacketType; /*0x697240*/
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
  this->UnknownVector_280C = &vt_DynamicVectorClass_NodeNameType; /*0x6972a5*/
  this->u32_2820 = 10; /*0x6972ab*/
  this->u32_281C = 0; /*0x6972b1*/
  this->StartSpots = 0; /*0x6972b7*/
  this->u32_282C = 0; /*0x6972bd*/
  this->q2830 = 1; /*0x6972c3*/
  this->q2831 = 0; /*0x6972ca*/
  this->UnknownVector_2824 = &vt_DynamicVectorClass_NodeNameType; /*0x6972d0*/
  this->u32_2838 = 10; /*0x6972d6*/
  this->u32_2834 = 0; /*0x6972dc*/
  this->u32_2840 = 0; /*0x6972e2*/
  this->u32_2844 = 0; /*0x6972e8*/
  this->q2848 = 1; /*0x6972ee*/
  this->q2849 = 0; /*0x6972f5*/
  this->q283C = &vt_DynamicVectorClass_NodeNameType; /*0x6972fb*/
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
  this->u32_2914 = &vt_DynamicVectorClass_char; /*0x697355*/
  this->u32_2928 = 10; /*0x69735f*/
  this->u32_2924 = 0; /*0x697365*/
  this->u32_2930 = 0; /*0x697371*/
  this->u32_2934 = 0; /*0x697377*/
  this->q2938 = 1; /*0x69737d*/
  this->q2939 = 0; /*0x697384*/
  this->u32_292C = &vt_DynamicVectorClass_unsigned_short_const; /*0x69738a*/
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
  this->q007 = 0; /*0x697402*/
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
  this->u8_51 = 0; /*0x69744c*/
  this->q148 = 0; /*0x697452*/
  this->idxSide = 0; /*0x69745b*/
  this->idxSide2 = -1; /*0x697461*/
  this->ptr_57 = 2; /*0x697467*/
  this->q058 = -1; /*0x69746d*/
  this->u8_61 = this->idxSide; /*0x697479*/
  this->Side2 = this->idxSide2; /*0x697485*/
  this->u32_5F = this->ptr_57; /*0x697491*/
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
  memset(MEMORY[0xB73E44], 0, 0x2000u); /*0x697522*/
  memset(dword_B76338, 0, sizeof(dword_B76338)); /*0x69752e*/
  this->MuteSWLaunches = 0; /*0x697530*/
  this->q304 = 0; /*0x697536*/
  this->LastNickSlot = -1; /*0x69753c*/
  this->WOLLimitResolution = 0; /*0x697542*/
  this->q2968 = 0; /*0x697548*/
  this->q3074 = -1; /*0x697559*/
  memset(this + 12320, 0, 0x28u); /*0x69755f*/
  this->q18240 = 0; /*0x697561*/
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
  this->q310 = 8; /*0x6975b6*/
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
  (*(void (__thiscall **)(char *, char *))(v14 + 8))(this + 9044, MEMORY[0x83EEAC]); /*0x697635*/
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
  strcpy(this + 10408, &MEMORY[0x889F64]); /*0x697709*/
  this->u32_28F8 = 0; /*0x697712*/
  this->u32_30AC = 0x7FFFFFFF; /*0x697718*/
  this->u32_30B0 = 0; /*0x697722*/
  this->u32_30B4 = 0; /*0x697728*/
  this->u32_30B8 = MEMORY[0xB07740]; /*0x69773a*/
  this->u32_30BC = MEMORY[0xB07744]; /*0x697745*/
  v15 = this + 132; /*0x69774e*/
  this->u32_30C0 = MEMORY[0xB07748]; /*0x697754*/
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
  v2 = (wchar_t **)MEMORY[0x83ED04]; /*0x6977c9*/
  do /*0x697830*/
  {
    StringCSF = GetStringCSF(*v2, 0, MEMORY[0x83EEB8], 593); /*0x6977dc*/
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
  while ( (int)v2 < (int)MEMORY[0x83ED14] ); /*0x697830*/
  return result; /*0x697832*/
}


// ==== 0x00697840  ObjectManager::CleanupArrays  this=ObjectManager  sig=csp ====
void __thiscall ObjectManager::CleanupArrays(int this)
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

  while ( *(_DWORD *)(this + 10532) ) /*0x697846*/
  {
    __3_YAXPAX_Z(**(void ***)(this + 10520)); /*0x697857*/
    v2 = *(_DWORD *)(this + 10532); /*0x69785c*/
    if ( v2 > 0 ) /*0x697867*/
    {
      v3 = v2 - 1; /*0x697869*/
      v4 = 0; /*0x69786c*/
      for ( *(_DWORD *)(this + 10532) = v3; /*0x697876*/
            v4 < *(_DWORD *)(this + 10532);
            *(_DWORD *)(*(_DWORD *)(this + 10520) + 4 * v4 - 4) = *(_DWORD *)(*(_DWORD *)(this + 10520) + 4 * v4) )
      {
        ++v4; /*0x69787e*/
      }
    }
  }
  while ( *(_DWORD *)(this + 10556) ) /*0x697898*/
  {
    free(**(void ***)(this + 10544)); /*0x6978a9*/
    v5 = *(_DWORD *)(this + 10556); /*0x6978ae*/
    if ( v5 > 0 ) /*0x6978b9*/
    {
      v6 = v5 - 1; /*0x6978bb*/
      v7 = 0; /*0x6978be*/
      for ( *(_DWORD *)(this + 10556) = v6; /*0x6978c8*/
            v7 < *(_DWORD *)(this + 10556);
            *(_DWORD *)(*(_DWORD *)(this + 10544) + 4 * v7 - 4) = *(_DWORD *)(*(_DWORD *)(this + 10544) + 4 * v7) )
      {
        ++v7; /*0x6978d0*/
      }
    }
  }
  v8 = *(void **)(this + 10544); /*0x6978ea*/
  *(_DWORD *)(this + 10540) = &vt_VectorClass_unsigned_short_const; /*0x6978f0*/
  if ( v8 && *(_BYTE *)(this + 10553) ) /*0x6978fe*/
  {
    __3_YAXPAX_Z(v8); /*0x697907*/
    *(_DWORD *)(this + 10544) = 0; /*0x69790f*/
  }
  *(_BYTE *)(this + 10553) = 0; /*0x697915*/
  *(_DWORD *)(this + 10548) = 0; /*0x69791b*/
  v9 = *(void **)(this + 10520); /*0x697921*/
  *(_DWORD *)(this + 10516) = &vt_VectorClass_char; /*0x697927*/
  if ( v9 && *(_BYTE *)(this + 10529) ) /*0x697935*/
  {
    __3_YAXPAX_Z(v9); /*0x69793e*/
    *(_DWORD *)(this + 10520) = 0; /*0x697946*/
  }
  *(_BYTE *)(this + 10529) = 0; /*0x69794c*/
  *(_DWORD *)(this + 10524) = 0; /*0x697952*/
  v10 = *(void **)(this + 10496); /*0x697958*/
  *(_DWORD *)(this + 10492) = &vt_VectorClass_PhoneEntryClass; /*0x69795e*/
  if ( v10 && *(_BYTE *)(this + 10505) ) /*0x69796c*/
  {
    __3_YAXPAX_Z(v10); /*0x697975*/
    *(_DWORD *)(this + 10496) = 0; /*0x69797d*/
  }
  *(_BYTE *)(this + 10505) = 0; /*0x697983*/
  *(_DWORD *)(this + 10500) = 0; /*0x697989*/
  v11 = *(void **)(this + 10304); /*0x69798f*/
  *(_DWORD *)(this + 10300) = &vt_VectorClass_NodeNameType; /*0x69799d*/
  if ( v11 && *(_BYTE *)(this + 10313) ) /*0x6979a5*/
  {
    __3_YAXPAX_Z(v11); /*0x6979ae*/
    *(_DWORD *)(this + 10304) = 0; /*0x6979b6*/
  }
  *(_BYTE *)(this + 10313) = 0; /*0x6979bc*/
  *(_DWORD *)(this + 10308) = 0; /*0x6979c2*/
  v12 = *(void **)(this + 10280); /*0x6979c8*/
  *(_DWORD *)(this + 10276) = &vt_VectorClass_NodeNameType; /*0x6979ce*/
  if ( v12 && *(_BYTE *)(this + 10289) ) /*0x6979d8*/
  {
    __3_YAXPAX_Z(v12); /*0x6979e1*/
    *(_DWORD *)(this + 10280) = 0; /*0x6979e9*/
  }
  *(_BYTE *)(this + 10289) = 0; /*0x6979ef*/
  *(_DWORD *)(this + 10284) = 0; /*0x6979f5*/
  v13 = *(void **)(this + 10256); /*0x6979fb*/
  *(_DWORD *)(this + 10252) = &vt_VectorClass_NodeNameType; /*0x697a01*/
  if ( v13 && *(_BYTE *)(this + 10265) ) /*0x697a0b*/
  {
    __3_YAXPAX_Z(v13); /*0x697a14*/
    *(_DWORD *)(this + 10256) = 0; /*0x697a1c*/
  }
  *(_BYTE *)(this + 10265) = 0; /*0x697a28*/
  *(_DWORD *)(this + 10260) = 0; /*0x697a2e*/
  *(_DWORD *)(this + 9044) = &vt_CCFileClass; /*0x697a37*/
  *(_DWORD *)(this + 9144) = 0; /*0x697a3d*/
  Vector::Clear(this + 9132); /*0x697a40*/
  *(_DWORD *)(this + 9044) = &off_7E1668; /*0x697a47*/
  BufferIOFileClass::Dtor((_DWORD *)(this + 9044)); /*0x697a4d*/
  ObjectManager::InitMessageList(this + 2600); /*0x697a58*/
  v14 = *(void **)(this + 2292); /*0x697a5d*/
  *(_DWORD *)(this + 2288) = &vt_VectorClass_GlobalPacketType; /*0x697a63*/
  if ( v14 && *(_BYTE *)(this + 2301) ) /*0x697a72*/
  {
    __3_YAXPAX_Z(v14); /*0x697a7b*/
    *(_DWORD *)(this + 2292) = 0; /*0x697a83*/
  }
  *(_BYTE *)(this + 2301) = 0; /*0x697a89*/
  *(_DWORD *)(this + 2296) = 0; /*0x697a8f*/
  v15 = *(void **)(this + 1684); /*0x697a95*/
  *(_DWORD *)(this + 1680) = &vt_VectorClass_MultiMission; /*0x697a9b*/
  if ( v15 && *(_BYTE *)(this + 1693) ) /*0x697aa9*/
  {
    __3_YAXPAX_Z(v15); /*0x697ab2*/
    *(_DWORD *)(this + 1684) = 0; /*0x697aba*/
  }
  *(_BYTE *)(this + 1693) = 0; /*0x697ac0*/
  *(_DWORD *)(this + 1688) = 0; /*0x697ac6*/
}


// ==== 0x00697AD0  BulkData::InitMissionHashing  this=BulkData  sig=csp ====
void __thiscall sub_697AD0(_DWORD *this)
{
  DWORD v2; // eax
  char *v3; // eax
  const char *v4; // esi
  unsigned int v5; // ebx
  DWORD Time; // [esp+10h] [ebp-4h] BYREF

  SessionClass::LoadMissionList(this); /*0x697ad7*/
  Time = timeGetTime(); /*0x697ae2*/
  v2 = DiskSpace::CheckAvailable(); /*0x697ae6*/
  ComputeHash(&Time, v2); /*0x697af1*/
  v3 = Object_Init_7CBC11(MEMORY[0x83EF00]); /*0x697afb*/
  v4 = v3; /*0x697b00*/
  if ( v3 ) /*0x697b07*/
  {
    v5 = 0; /*0x697b10*/
    if ( strlen(v3) ) /*0x697b12*/
    {
      do /*0x697b35*/
        ComputeHash(&Time, v4[v5++]); /*0x697b21*/
      while ( v5 < strlen(v4) ); /*0x697b35*/
    }
  }
  this->ptr_144 = Time; /*0x697b41*/
  Debug::Log(); /*0x697b47*/
}


// ==== 0x00697B60  nullsub_228  this=-  sig=ida-proto ====
void nullsub_228()
{
  ; /*0x697b60*/
}


// ==== 0x00697B70  SessionClass::CreateConnections  this=SessionClass  sig=csp ====
int __thiscall SessionClass_CreateConnections(void *this)
{
  int v3; // esi
  int v4; // eax
  int v5; // ebp
  int i; // eax
  int v7; // eax
  int v8; // eax
  int *v9; // ebp
  int v10; // esi
  DWORD Ticks; // ecx
  int v12; // [esp+10h] [ebp-18h] BYREF
  int v13; // [esp+14h] [ebp-14h] BYREF
  _BYTE v14[8]; // [esp+18h] [ebp-10h] BYREF
  _BYTE v15[8]; // [esp+20h] [ebp-8h] BYREF

  Debug::Log(); /*0x697b7e*/
  if ( MEMORY[0xA8B238][0] != 3 && MEMORY[0xA8B238][0] != 4 ) /*0x697b93*/
    return 0; /*0x697b9e*/
  v3 = 0; /*0x697ba7*/
  if ( *((int *)this + 2579) > 0 ) /*0x697bab*/
  {
    do /*0x697bc5*/
    {
      Debug::Log(); /*0x697bc5*/
      if ( _wcsicmp( /*0x697be7*/
             *(const wchar_t **)(this->u32_2840 + 4 * v3),
             (const wchar_t *)(*((_DWORD *)HouseClass_Array
                               + *(_DWORD *)(*(_DWORD *)(this->u32_2840 + 4 * v3) + 111))
                             + 90154)) )
      {
        return 0; /*0x697bf1*/
      }
      if ( !_wcsicmp(*(const wchar_t **)(this->u32_2840 + 4 * v3), (const wchar_t *)this + 6160) ) /*0x697c04*/
      {
        this->q3074 = *(_DWORD *)(*(_DWORD *)(this->u32_2840 + 4 * v3) + 111); /*0x697c25*/
        Network::CopyAddress((_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v3) + 40), &v13, (int)v15); /*0x697c38*/
        NetworkID::Assign(&MEMORY[0xA8DBA4], &v13, (int)v15, 0); /*0x697c4d*/
        Network::SetPlayerCoords(&MEMORY[0xA8DBA4]); /*0x697c5c*/
      }
      v4 = *(_DWORD *)(this->u32_2840 + 4 * v3); /*0x697c67*/
      *(_DWORD *)(*((_DWORD *)HouseClass_Array + *(_DWORD *)(v4 + 111)) + 516) = *(_DWORD *)(v4 + 123); /*0x697c7e*/
      Network::CopyAddress((_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v3) + 40), &v13, (int)v15); /*0x697c94*/
      v5 = 0; /*0x697c99*/
      for ( i = 0; i < 4; ++i ) /*0x697c9b*/
        v5 = (unsigned __int8)v15[i] | (v5 << 8); /*0x697ca8*/
      Debug::Log(); /*0x697cc7*/
      *(_DWORD *)(*((_DWORD *)HouseClass_Array + *(_DWORD *)(*(_DWORD *)(this->u32_2840 + 4 * v3) + 111)) + 512) = v5; /*0x697ce5*/
      *(_BYTE *)(*((_DWORD *)HouseClass_Array + *(_DWORD *)(*(_DWORD *)(this->u32_2840 + 4 * v3) + 111)) + 520) = 0; /*0x697d00*/
      if ( v3 > 0 ) /*0x697d06*/
      {
        v7 = *(_DWORD *)(this->u32_2840 + 4 * v3); /*0x697d0e*/
        SessionClass::initLAN(*(_DWORD *)(v7 + 111), (wchar_t *)v7, v7 + 40); /*0x697d1f*/
        *(_DWORD *)(*(_DWORD *)(this->u32_2840 + 4 * v3) + 115) = -1; /*0x697d2d*/
      }
    }
    while ( ++v3 < this->qA13 ); /*0x697bc5*/
  }
  v8 = MEMORY[0x887338]; /*0x697d43*/
  v9 = MEMORY[0xA8E284]; /*0x697d48*/
  do /*0x697d79*/
  {
    v10 = MEMORY[0x887340]; /*0x697d4d*/
    if ( v8 != -1 ) /*0x697d56*/
    {
      Ticks = Timer::GetTicks(); /*0x697d62*/
      v8 = MEMORY[0x887338]; /*0x697d64*/
      v10 += Ticks - MEMORY[0x887338]; /*0x697d6b*/
    }
    *v9++ = v10; /*0x697d6d*/
  }
  while ( (int)v9 < (int)&MEMORY[0xA8E2A4] ); /*0x697d79*/
  if ( *(_DWORD *)this != 4 ) /*0x697d7e*/
    goto LABEL_22; /*0x697d7e*/
  if ( !this->q3090 ) /*0x697d84*/
    goto LABEL_22; /*0x697d84*/
  v12 = 0; /*0x697da0*/
  v14[0] = 0; /*0x697db0*/
  v14[1] = 0; /*0x697db4*/
  v14[2] = 0; /*0x697db8*/
  v14[3] = 0; /*0x697dbc*/
  v14[4] = 0; /*0x697dc0*/
  v14[5] = 0; /*0x697dc4*/
  NetworkID::Assign(&MEMORY[0xA8DBB0], &v12, (int)v14, 0); /*0x697dc8*/
  this->q2968 = 1; /*0x697dd2*/
  this->u32_308C = 0; /*0x697dd9*/
  this->u32_309C = 20; /*0x697ddf*/
  this->u32_3094 = -1; /*0x697de9*/
  SessionClass::initInternet(MEMORY[0xA8E9C0]); /*0x697df3*/
  SessionClass::BuildLobbyPlayerList(&g_NetworkEventQueue); /*0x697dfd*/
  if ( SessionClass::IsValidHouse((int)MEMORY[0xA8B238], 0) ) /*0x697e08*/
  {
    if ( !(unsigned __int8)LaunchMultiplayerHost(0) /*0x697e25*/
      || !(unsigned __int8)Network::SendMasterPlayerList(&g_NetworkEventQueue) )
    {
LABEL_22:
      MEMORY[0xA8DBA0] = 0; /*0x697e2e*/
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
    v2 = HouseClass_Player; /*0x697e7b*/
  if ( MEMORY[0xA8B238][0] != 4 || !v2 ) /*0x697e8c*/
    goto LABEL_9; /*0x697e8c*/
  v3 = *(_DWORD *)(this + 12404); /*0x697e8e*/
  if ( v3 != -1 ) /*0x697e97*/
    return *((_DWORD *)v2 + 12) == v3; /*0x697ea8*/
  if ( !_wcsicmp((const wchar_t *)v2 + 45077, (const wchar_t *)(this + 12320)) ) /*0x697eb9*/
    return 1; /*0x697ec7*/
LABEL_9:
  v5 = 0; /*0x697ed3*/
  if ( HouseClass_Count <= 0 ) /*0x697ed7*/
    return 0; /*0x697efd*/
  for ( i = HouseClass_Array; ; i = (HouseClass *)((char *)i + 4) ) /*0x697ed9*/
  {
    v7 = *(#375 **)i->__pad_0; /*0x697edf*/
    if ( *(_BYTE *)(*(_DWORD *)i->__pad_0 + 492) ) /*0x697ee1*/
    {
      if ( !*((_BYTE *)v7 + 501) ) /*0x697eeb*/
        break; /*0x697eeb*/
    }
    if ( ++v5 >= HouseClass_Count ) /*0x697efb*/
      return 0; /*0x697efb*/
  }
  return v2 == v7; /*0x697ea0*/
}


// ==== 0x00697F10  ObjectClass::ReadGameSettingsINI  this=AbstractTypeClass  sig=csp ====
int __thiscall ReadGameSettingsINI(_DWORD *this, CCINIClass *aP1, int a1, _DWORD *a3, _DWORD *a4)
{
  unsigned __int8 ***v5; // ebx
  int First; // eax
  INIClass *v8; // ebp
  INIClass *i; // esi
  _DWORD *eax5a; // eax
  INIClass *v10; // edx
  int v12; // ecx
  int result; // eax
  int v14; // [esp+10h] [ebp-14h] BYREF
  char Buffer[16]; // [esp+14h] [ebp-10h] BYREF

  v5 = (unsigned __int8 ***)aP1; /*0x697f14*/
  INIClass::ResetSection(aP1); /*0x697f1f*/
  First = MultiplayerGameMode::GetFirst(); /*0x697f24*/
  v8 = (INIClass *)a1; /*0x697f2c*/
  *this = INIClass::ReadInt_Overwrite( /*0x697f48*/
            (int)v5,
            (unsigned __int8 *)a1,
            (CCINIClass *)&stru_830620.__pad_579C[37396],
            *(INIClass **)(First + 40));
  this->vtable2 = INIClass::ReadInt_Overwrite( /*0x697f4f*/
                  (int)v5,
                  (unsigned __int8 *)v8,
                  (CCINIClass *)&stru_830620.__pad_579C[37384],
                  0);
  this->vtable3 = INIClass::ReadInt_Overwrite( /*0x697f6b*/
                  (int)v5,
                  (unsigned __int8 *)v8,
                  (CCINIClass *)&stru_830620.__pad_14B0[6168],
                  *(INIClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5280));
  this->vtable4 = INIClass::ReadInt_Overwrite( /*0x697f88*/
                  (int)v5,
                  (unsigned __int8 *)v8,
                  aCredits,
                  *(INIClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5252));
  this->uniqueId = INIClass::ReadInt_Overwrite( /*0x697fa5*/
                  (int)v5,
                  (unsigned __int8 *)v8,
                  (CCINIClass *)&stru_830620.__pad_579C[29360],
                  *(INIClass **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5268));
  this->q050 = INIClass::ReadBool_Overwrite( /*0x697fc1*/
                            (int)v5,
                            (unsigned __int8 *)v8,
                            (CCINIClass *)&stru_830620.__pad_579C[29164],
                            *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5302));
  this->q054 = INIClass::ReadBool_Overwrite( /*0x697fde*/
                            (int)v5,
                            (unsigned __int8 *)v8,
                            (CCINIClass *)&stru_830620.__pad_579C[29144],
                            *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5305));
  this->q058 = INIClass::ReadBool_Overwrite( /*0x697ffb*/
                            (int)v5,
                            (unsigned __int8 *)v8,
                            (CCINIClass *)&stru_830620.__pad_579C[29128],
                            *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5306));
  this->q05C = INIClass::ReadBool_Overwrite( /*0x698017*/
                            (int)v5,
                            (unsigned __int8 *)v8,
                            (CCINIClass *)&stru_830620.__pad_579C[37372],
                            *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5304));
  this->UIName = INIClass::ReadBool_Overwrite( /*0x698034*/
                            (int)v5,
                            (unsigned __int8 *)v8,
                            (CCINIClass *)&stru_830620.__pad_579C[37356],
                            *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5297));
  for ( i = (INIClass *)1; (int)i < 8; i = (INIClass *)((char *)i + 1) ) /*0x698037*/
  {
    sprintf(Buffer, &stru_830620.__pad_579C[37344], i); /*0x698047*/
    if ( i == (INIClass *)1 ) /*0x698052*/
      aP1 = (CCINIClass *)a4; /*0x698058*/
    else
      aP1 = (CCINIClass *)a3; /*0x698062*/
    a1 = -2; /*0x69806f*/
    v14 = -2; /*0x698073*/
    GameSetup::ParseCoordTriple(v5, v8, (CCINIClass *)Buffer, (int *)&aP1, (INIClass *)&a1, (CCINIClass *)&v14); /*0x69808a*/
    eax5a = this + 3 * (_DWORD)i; /*0x698096*/
    v10 = (INIClass *)a1; /*0x698099*/
    eax5a[7] = aP1; /*0x69809d*/
    v12 = v14; /*0x6980a0*/
    eax5a[8] = v10; /*0x6980a4*/
    result = 3 * (_DWORD)i + 9; /*0x6980a7*/
    *(this + result) = v12; /*0x6980af*/
  }
  return result; /*0x6980b4*/
}


// ==== 0x006980C0  ScenarioClass::LoadNetworkConfig  this=ScenarioClass  sig=csp ====
int __thiscall Network_LoadConfig(int this)
{
  int i; // esi
  int j; // esi
  int v4; // ecx
  int v5; // eax
  wchar_t *v6; // eax
  int Int_Overwrite; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  char Bool_Overwrite; // al
  char v12; // cl
  char v13; // al
  int v14; // eax
  void *v15; // eax
  int v16; // eax
  int v17; // ebx
  const void **v18; // esi
  int KeyCount; // ebx
  char *v20; // eax
  char *v21; // esi
  unsigned __int8 *StringByIndex; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // edx
  void *v27; // ebx
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
  const void **v38; // esi
  char *v39; // eax
  char *v40; // eax
  char *v41; // eax
  int v42; // edx
  int v43; // eax
  int v44; // eax
  int v45; // edx
  int v46; // eax
  int v48; // [esp-10h] [ebp-4C4h]
  char *v49; // [esp-8h] [ebp-4BCh]
  char v50; // [esp-4h] [ebp-4B8h]
  int k; // [esp+10h] [ebp-4A4h] BYREF
  int v52; // [esp+14h] [ebp-4A0h] BYREF
  int v53; // [esp+18h] [ebp-49Ch] BYREF
  char v54; // [esp+1Ch] [ebp-498h] BYREF
  _DWORD v55[22]; // [esp+20h] [ebp-494h] BYREF
  _BYTE v56[12]; // [esp+78h] [ebp-43Ch] BYREF
  int v57; // [esp+84h] [ebp-430h]
  wchar_t v58[20]; // [esp+8Ch] [ebp-428h] BYREF
  char String[1024]; // [esp+B4h] [ebp-400h] BYREF

  RulesClass::LoadCountries(MEMORY[0x887048]);
  for ( i = 0; i < *(_DWORD *)(this + 10532); ++i )
    __3_YAXPAX_Z(*(void **)(*(_DWORD *)(this + 10520) + 4 * i));
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 10516) + 12))(this + 10516);
  for ( j = 0; j < *(_DWORD *)(this + 10508); ++j )
  {
    v4 = *(_DWORD *)(this + 10496);
    if ( *(_DWORD *)(v4 + 4 * j) )
      __3_YAXPAX_Z(*(void **)(v4 + 4 * j));
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 10492) + 12))(this + 10492);
  CCFileClass::Construct(v55, MEMORY[0x826444]);
  if ( !MEMORY[0xB07788] )
  {
    *(_DWORD *)(this + 12272) = INIClass::ReadInt_Overwrite(MEMORY[0x82642C], MEMORY[0x826438], 1250);
    *(_DWORD *)(this + 12276) = INIClass::ReadInt_Overwrite(MEMORY[0x82642C], MEMORY[0x83F19C], 0);
    v5 = Random::Range(MEMORY[0x886B88], 0, 0x8000);
    MEMORY[0xABFED8] = INIClass::ReadInt_Overwrite(MEMORY[0x82642C], stru_826420, v5 + 4096);
    MEMORY[0xB07788] = 1;
    Network::dispatchEvent(&MEMORY[0xABFEC8]);
  }
  MEMORY[0xA8E180] = INIClass::ReadBool_Overwrite(MEMORY[0x82642C], MEMORY[0x82A2E8], 0);
  MEMORY[0xA8E254] = INIClass::ReadInt_Overwrite(MEMORY[0x82642C], MEMORY[0x82A2D4], 0);
  String[0] = 0;
  *(_DWORD *)(this + 10372) = INIClass::ReadInt_Overwrite(MEMORY[0x82642C], MEMORY[0x83F190], -1);
  *(_DWORD *)(this + 12496) = INIClass::ReadInt_Overwrite(MEMORY[0x82642C], MEMORY[0x83F184], 0);
  *(_BYTE *)(this + 776) = INIClass::ReadBool_Overwrite(MEMORY[0x82642C], MEMORY[0x83F170], *(_BYTE *)(this + 776));
  *(_DWORD *)(this + 780) = INIClass::ReadInt_Overwrite(MEMORY[0x82642C], MEMORY[0x83F160], -1);
  v6 = GetStringCSF(MEMORY[0x83676C], 0, MEMORY[0x83EEB8], 1262);
  INIClass::ParseValue_Wide(
    (char **)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x82642C],
    (unsigned __int8 *)MEMORY[0x83F158],
    v6,
    v58,
    0x14u);
  CopyWideToChar((_BYTE *)(this + 328), (char *)v58, -1);
  *(_DWORD *)(this + 380) = INIClass::ReadInt_Overwrite(MEMORY[0x82642C], stru_81B138, *(_DWORD *)(this + 380));
  Int_Overwrite = INIClass::ReadInt_Overwrite(MEMORY[0x82642C], MEMORY[0x83F150], *(_DWORD *)(this + 384));
  v8 = *(_DWORD *)(this + 388);
  *(_DWORD *)(this + 384) = Int_Overwrite;
  v9 = SuperWeaponTypeClass::FindOrCreate(
         (unsigned __int8 ***)&MEMORY[0x8870C0],
         (unsigned __int8 *)MEMORY[0x82642C],
         (unsigned __int8 *)MEMORY[0x817334],
         v8);
  v10 = *(_DWORD *)(this + 392);
  *(_DWORD *)(this + 388) = v9;
  *(_DWORD *)(this + 392) = INIClass::ReadInt_Overwrite(MEMORY[0x82642C], MEMORY[0x83F148], v10);
  Bool_Overwrite = INIClass::ReadBool_Overwrite(MEMORY[0x82642C], MEMORY[0x83F13C], *(_BYTE *)(this + 7897));
  v12 = *(_BYTE *)(this + 7896);
  *(_BYTE *)(this + 7897) = Bool_Overwrite;
  v13 = INIClass::ReadBool_Overwrite(MEMORY[0x82642C], MEMORY[0x83F130], v12);
  v50 = *(_BYTE *)(this + 8129);
  *(_BYTE *)(this + 7896) = v13;
  *(_BYTE *)(this + 8129) = INIClass::ReadBool_Overwrite(MEMORY[0x82642C], MEMORY[0x83F120], v50);
  *(_BYTE *)(this + 8128) = INIClass::ReadBool_Overwrite(MEMORY[0x82642C], MEMORY[0x83F110], *(_BYTE *)(this + 8128));
  v14 = *(_DWORD *)(this + 388);
  *(_DWORD *)(this + 372) = v14;
  if ( v14 == -2 )
    *(_DWORD *)(this + 372) = 0;
  *(_DWORD *)(this + 376) = *(_DWORD *)(this + 392);
  v15 = (void *)INIClass::ReadInt_Overwrite(MEMORY[0x82642C], MEMORY[0x83EFD0], 1);
  v16 = MultiplayerGameMode::Find(v15);
  *(_DWORD *)(this + 4) = v16;
  if ( !v16 )
    *(_DWORD *)(this + 4) = MultiplayerGameMode::GetFirst();
  ReadGameSettingsINI(&MEMORY[0x8870C0], MEMORY[0x83F104], 1, 6);
  ReadGameSettingsINI(&MEMORY[0x8870C0], MEMORY[0x83F100], 2, 2);
  ReadGameSettingsINI(&MEMORY[0x8870C0], MEMORY[0x83F0F4], 2, 2);
  INIClass::GetString(
    (unsigned __int8 ***)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x83F0D8],
    (unsigned __int8 *)MEMORY[0x83F0E8],
    String,
    (char *)(this + 10424),
    63);
  if ( !strcmp((const char *)(this + 10424), String) )
    *(_BYTE *)(this + 10424) = 0;
  *(_DWORD *)(this + 10376) = INIClass::ReadInt_Overwrite(MEMORY[0x83F0D8], MEMORY[0x83F0D0], 0);
  *(_DWORD *)(this + 10380) = INIClass::ReadInt_Overwrite(MEMORY[0x83F0D8], MEMORY[0x83F0CC], -1);
  *(_DWORD *)(this + 10384) = INIClass::ReadInt_Overwrite(MEMORY[0x83F0D8], MEMORY[0x83F0C4], -1);
  *(_DWORD *)(this + 10400) = INIClass::ReadInt_Overwrite(MEMORY[0x83F0D8], MEMORY[0x83F0B8], 0);
  *(_DWORD *)(this + 10404) = INIClass::ReadInt_Overwrite(MEMORY[0x83F0D8], MEMORY[0x83F0A8], 0);
  INIClass::GetString(
    (unsigned __int8 ***)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x83F0D8],
    (unsigned __int8 *)MEMORY[0x83F09C],
    MEMORY[0x83ED5C],
    String,
    2);
  v17 = 0;
  v18 = (const void **)&MEMORY[0x83ECFC];
  while ( _strcmpi(String, *v18) )
  {
    ++v18;
    ++v17;
    if ( (int)v18 >= (int)MEMORY[0x83ED04] )
      goto LABEL_20;
  }
  *(_DWORD *)(this + 10388) = v17;
LABEL_20:
  if ( v17 == 2 )
    *(_DWORD *)(this + 10388) = 0;
  *(_DWORD *)(this + 10392) = INIClass::ReadInt_Overwrite(MEMORY[0x83F0D8], MEMORY[0x83F08C], -1);
  *(_DWORD *)(this + 10396) = INIClass::ReadInt_Overwrite(MEMORY[0x83F0D8], MEMORY[0x83F078], 3);
  INIClass::GetString(
    (unsigned __int8 ***)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x83F0D8],
    (unsigned __int8 *)MEMORY[0x83F068],
    &MEMORY[0x889F64],
    (char *)(this + 10408),
    16);
  if ( !*(_DWORD *)(this + 10380) || !*(_DWORD *)(this + 10384) )
  {
    *(_DWORD *)(this + 10376) = 0;
    *(_DWORD *)(this + 10380) = -1;
    *(_DWORD *)(this + 10384) = -1;
  }
  KeyCount = INIClass::GetKeyCount((char *)&MEMORY[0x8870C0], (unsigned __int8 *)MEMORY[0x83F05C]);
  for ( k = 0; k < KeyCount; ++k )
  {
    v20 = (char *)__2_YAPAXI_Z(0x29u);
    v21 = v20;
    if ( v20 )
    {
      v49 = v20;
      v48 = k;
      *v20 = 0;
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(
                                           (char *)&MEMORY[0x8870C0],
                                           (unsigned __int8 *)MEMORY[0x83F05C],
                                           v48);
      INIClass::GetString(
        (unsigned __int8 ***)&MEMORY[0x8870C0],
        (unsigned __int8 *)MEMORY[0x83F05C],
        StringByIndex,
        0,
        v49,
        41);
      _strupr(v21);
      v23 = *(_DWORD *)(this + 10524);
      if ( *(_DWORD *)(this + 10532) < v23
        || (*(_BYTE *)(this + 10529) || !v23)
        && (v24 = *(_DWORD *)(this + 10536), v24 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 10516) + 8))(
             this + 10516,
             v23 + v24,
             0) )
      {
        v25 = *(_DWORD *)(this + 10532);
        v26 = *(_DWORD *)(this + 10520);
        *(_DWORD *)(this + 10532) = v25 + 1;
        *(_DWORD *)(v26 + 4 * v25) = v21;
      }
    }
  }
  *(_DWORD *)(this + 10392) = (KeyCount != 0) - 1;
  v52 = INIClass::GetKeyCount((char *)&MEMORY[0x8870C0], (unsigned __int8 *)MEMORY[0x83F050]);
  for ( k = 0; k < v52; ++k )
  {
    v27 = __2_YAPAXI_Z(0xB0u);
    v28 = (unsigned __int8 *)INIClass::GetStringByIndex(
                               (char *)&MEMORY[0x8870C0],
                               (unsigned __int8 *)MEMORY[0x83F050],
                               k);
    INIClass::GetString(
      (unsigned __int8 ***)&MEMORY[0x8870C0],
      (unsigned __int8 *)MEMORY[0x83F050],
      v28,
      0,
      String,
      1024);
    v29 = (unsigned __int8 *)strtok(String, MEMORY[0x832630]);
    if ( v29 )
    {
      BulkCharToWide((_WORD *)v27 + 56, v29, -1);
      _wcsupr((wchar_t *)v27 + 56);
    }
    else
    {
      *((_WORD *)v27 + 56) = 0;
    }
    v30 = strtok(0, MEMORY[0x832630]);
    if ( v30 )
    {
      strcpy((char *)v27 + 154, v30);
      _strupr((char *)v27 + 154);
    }
    else
    {
      *((_BYTE *)v27 + 154) = 0;
    }
    v31 = strtok(0, MEMORY[0x832630]);
    if ( v31 )
      sscanf(v31, MEMORY[0x825BD4], v27);
    else
      *(_DWORD *)v27 = 0;
    v32 = strtok(0, MEMORY[0x832630]);
    if ( v32 )
      *((_DWORD *)v27 + 1) = atoi(v32);
    else
      *((_DWORD *)v27 + 1) = -1;
    v33 = strtok(0, MEMORY[0x832630]);
    if ( v33 )
      *((_DWORD *)v27 + 2) = atoi(v33);
    else
      *((_DWORD *)v27 + 2) = -1;
    v34 = strtok(0, MEMORY[0x832630]);
    if ( v34 )
      *((_DWORD *)v27 + 6) = atoi(v34);
    else
      *((_DWORD *)v27 + 6) = -1;
    v35 = strtok(0, MEMORY[0x832630]);
    if ( v35 )
      *((_DWORD *)v27 + 7) = atoi(v35);
    else
      *((_DWORD *)v27 + 7) = 0;
    v36 = strtok(0, MEMORY[0x832630]);
    if ( v36 )
    {
      strcpy(String, v36);
      v37 = 0;
      v38 = (const void **)&MEMORY[0x83ECFC];
      while ( _strcmpi(String, *v38) )
      {
        ++v38;
        ++v37;
        if ( (int)v38 >= (int)MEMORY[0x83ED04] )
          goto LABEL_62;
      }
      *((_DWORD *)v27 + 3) = v37;
LABEL_62:
      if ( v37 == 2 )
        *((_DWORD *)v27 + 3) = 0;
    }
    else
    {
      *((_DWORD *)v27 + 3) = 0;
    }
    v39 = strtok(0, MEMORY[0x832630]);
    if ( v39 )
      *((_DWORD *)v27 + 4) = atoi(v39);
    else
      *((_DWORD *)v27 + 4) = -1;
    v40 = strtok(0, MEMORY[0x832630]);
    if ( v40 )
      *((_DWORD *)v27 + 5) = atoi(v40);
    else
      *((_DWORD *)v27 + 5) = 3;
    v41 = strtok(0, MEMORY[0x832630]);
    if ( v41 )
      strcpy((char *)v27 + 32, v41);
    else
      *((_BYTE *)v27 + 32) = 0;
    v42 = *(_DWORD *)(this + 10500);
    if ( *(_DWORD *)(this + 10508) >= v42 )
    {
      if ( !*(_BYTE *)(this + 10505) && v42 )
        continue;
      v43 = *(_DWORD *)(this + 10512);
      if ( v43 <= 0
        || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 10492) + 8))(
              this + 10492,
              v43 + v42,
              0) )
      {
        continue;
      }
    }
    v44 = *(_DWORD *)(this + 10508);
    v45 = *(_DWORD *)(this + 10496);
    *(_DWORD *)(this + 10508) = v44 + 1;
    *(_DWORD *)(v45 + 4 * v44) = v27;
  }
  if ( (MEMORY[0xA8D5F8] & 2) != 0 )
  {
    *(_DWORD *)(this + 12460) = INIClass::ReadInt_Overwrite(MEMORY[0x83F040], MEMORY[0x83F048], 0x7FFFFFFF);
    INIClass::GetString(
      (unsigned __int8 ***)&MEMORY[0x8870C0],
      (unsigned __int8 *)MEMORY[0x83F040],
      (unsigned __int8 *)g_INI_Key_Type,
      MEMORY[0x83F038],
      String,
      80);
    if ( _strcmpi(String, MEMORY[0x83F02C]) )
    {
      if ( _strcmpi(String, MEMORY[0x83F024]) )
      {
        if ( _strcmpi(String, MEMORY[0x83F018]) )
        {
          if ( _strcmpi(String, MEMORY[0x83F010]) )
          {
            if ( _strcmpi(String, MEMORY[0x83F004]) )
            {
              if ( _strcmpi(String, MEMORY[0x83EFFC]) )
                *(_DWORD *)(this + 12464) = 0;
              else
                *(_DWORD *)(this + 12464) = 1;
            }
            else
            {
              *(_DWORD *)(this + 12464) = 15;
            }
          }
          else
          {
            *(_DWORD *)(this + 12464) = 8;
          }
        }
        else
        {
          *(_DWORD *)(this + 12464) = 6;
        }
      }
      else
      {
        *(_DWORD *)(this + 12464) = 4;
      }
    }
    else
    {
      *(_DWORD *)(this + 12464) = 2;
    }
    INIClass::GetString(
      (unsigned __int8 ***)&MEMORY[0x8870C0],
      (unsigned __int8 *)MEMORY[0x83F040],
      (unsigned __int8 *)MEMORY[0x83EFF4],
      MEMORY[0x82BFAC],
      String,
      80);
    sscanf(String, MEMORY[0x8189B0], &k, &v53, &v54);
    v46 = INIClass::ReadInt_Overwrite(MEMORY[0x83F040], MEMORY[0x83EFEC], -1);
    *(_BYTE *)(this + 12488) = HIBYTE(v46);
    *(_DWORD *)(this + 12484) = v46 & 0xFFFFFF;
    INIClass::GetString(
      (unsigned __int8 ***)&MEMORY[0x8870C0],
      (unsigned __int8 *)MEMORY[0x83F040],
      (unsigned __int8 *)aCell,
      MEMORY[0x83EFE8],
      String,
      80);
    sscanf(String, MEMORY[0x81C000], &k, &v53);
    LOWORD(v52) = k;
    HIWORD(v52) = v53;
    if ( (_WORD)k != MEMORY[0xB057E0] || (_WORD)v53 != MEMORY[0xB057E2] )
      *(_DWORD *)(this + 12492) = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v52);
    *(_DWORD *)(this + 12500) = INIClass::ReadInt_Overwrite(MEMORY[0x83F040], MEMORY[0x83EFDC], 0x7FFFFFFF);
  }
  v55[0] = &vt_CCFileClass;
  v57 = 0;
  Vector::Clear((int)v56);
  v55[0] = &off_7E1668;
  return BufferIOFileClass::Dtor(v55);
}


// ==== 0x00698CB0  Game::DumpMultiplayerGameInfo  this=Game  sig=csp ====
char __userpurge Game::DumpMultiplayerGameInfo@<al>(int this@<ecx>, CellStruct *a2@<ebp>, FILE *Stream)
{
  CCINIClass *v2; // eax
  MouseClass *v4; // esi
  int i; // ebp
  unsigned int j; // edi
  unsigned int k; // edi
  unsigned int m; // edi
  unsigned int n; // edi
  CellStruct *v12; // [esp-4h] [ebp-18h]
  CellStruct *v13; // [esp-4h] [ebp-18h]
  CellStruct *v14; // [esp-4h] [ebp-18h]
  CellStruct *v15; // [esp+0h] [ebp-14h]
  CellStruct *v16; // [esp+0h] [ebp-14h]
  CellStruct *v17; // [esp+0h] [ebp-14h]
  _BYTE v18[8]; // [esp+Ch] [ebp-8h] BYREF

  v2 = *(CCINIClass **)&HouseClass_Player.__pad_5568[8096]; /*0x698cb0*/
  v4 = (MouseClass *)Stream; /*0x698cbc*/
  if ( *(int *)&HouseClass_Player.__pad_5568[8096] < 0 ) /*0x698cc3*/
  {
    fprintf((MouseClass *)Stream, &stru_830620.__pad_579C[38316], v15); /*0x698ccb*/
    v2 = 0; /*0x698cd3*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = 0; /*0x698cd5*/
  }
  v12 = a2; /*0x698ce0*/
  fprintf( /*0x698ceb*/
    v4,
    &stru_830620.__pad_579C[38300],
    *(CellStruct **)(*(_DWORD *)&HouseClass_Player.__pad_5568[9752] + 4 * (_DWORD)v2));
  fprintf(v4, &stru_830620.__pad_579C[38284], (CellStruct *)(this + 328)); /*0x698cfd*/
  for ( i = 0; i < *(_DWORD *)(this + 788); ++i ) /*0x698d0f*/
  {
    Network::CopyAddress( /*0x698d2a*/
      (_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * i) + 40),
      &Stream,
      (int)v18);
    fprintf(v4, &stru_830620.__pad_579C[38264], (CellStruct *)i); /*0x698d36*/
    for ( j = 0; j < 4; ++j ) /*0x698d3e*/
      fprintf(v4, &stru_830620.__pad_579C[38256], (CellStruct *)*((unsigned __int8 *)&Stream + j)); /*0x698d4d*/
    fprintf(v4, &stru_830620.__pad_1258[64], v12); /*0x698d61*/
    for ( k = 0; k < 6; ++k ) /*0x698d69*/
      fprintf(v4, &stru_830620.__pad_579C[38256], (CellStruct *)(unsigned __int8)v18[k]); /*0x698d78*/
    fprintf(v4, &stru_830620.__pad_579C[38252], v13); /*0x698d8c*/
  }
  fprintf(v4, &stru_830620.__pad_579C[38252], v12); /*0x698da9*/
  Network::CopyAddress(&HouseClass_Player.__pad_5568[10344], &Stream, (int)v18); /*0x698dc0*/
  fprintf(v4, &stru_830620.__pad_579C[38240], v14); /*0x698dcb*/
  for ( m = 0; m < 4; ++m ) /*0x698dd3*/
    fprintf(v4, &stru_830620.__pad_579C[38256], (CellStruct *)*((unsigned __int8 *)&Stream + m)); /*0x698de3*/
  fprintf(v4, &stru_830620.__pad_1258[64], v15); /*0x698df7*/
  for ( n = 0; n < 6; ++n ) /*0x698dff*/
    fprintf(v4, &stru_830620.__pad_579C[38256], (CellStruct *)(unsigned __int8)v18[n]); /*0x698e0e*/
  fprintf(v4, &stru_830620.__pad_579C[38236], v16); /*0x698e22*/
  fprintf(v4, &stru_830620.__pad_579C[38220], *(CellStruct **)(this + 792)); /*0x698e34*/
  fprintf(v4, &stru_830620.__pad_579C[38204], *(CellStruct **)(this + 1664)); /*0x698e46*/
  fprintf(v4, &stru_830620.__pad_579C[38188], *(CellStruct **)(this + 380)); /*0x698e58*/
  fprintf(v4, &stru_830620.__pad_579C[38172], *(CellStruct **)(this + 348)); /*0x698e6a*/
  fprintf(v4, &stru_830620.__pad_579C[38160], *(CellStruct **)(this + 372)); /*0x698e7c*/
  fprintf(v4, &stru_830620.__pad_579C[38140], *(CellStruct **)(this + 788)); /*0x698e91*/
  fprintf(v4, &stru_830620.__pad_579C[38120], (CellStruct *)*(unsigned __int8 *)(this + 32)); /*0x698ea2*/
  fprintf(v4, &stru_830620.__pad_579C[38096], *(CellStruct **)(this + 36)); /*0x698eb1*/
  fprintf(v4, &stru_830620.__pad_579C[38064], (CellStruct *)*(unsigned __int8 *)(this + 40)); /*0x698ec2*/
  fprintf(v4, &stru_830620.__pad_579C[38040], (CellStruct *)*(unsigned __int8 *)(this + 41)); /*0x698ed3*/
  fprintf(v4, &stru_830620.__pad_579C[38016], (CellStruct *)*(unsigned __int8 *)(this + 53)); /*0x698ee4*/
  fprintf(v4, &stru_830620.__pad_579C[37992], *(CellStruct **)(this + 56)); /*0x698ef6*/
  fprintf(v4, &stru_830620.__pad_579C[37968], *(CellStruct **)(this + 60)); /*0x698f05*/
  fprintf(v4, &stru_830620.__pad_579C[37940], *(CellStruct **)(this + 64)); /*0x698f14*/
  fprintf(v4, &stru_830620.__pad_579C[37924], *(CellStruct **)(this + 768)); /*0x698f26*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 3 ) /*0x698f36*/
  {
    fprintf(v4, &stru_830620.__pad_579C[37912], v17); /*0x698f3e*/
    return 1; /*0x698f46*/
  }
  else
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x698f54*/
      fprintf(v4, &stru_830620.__pad_579C[37892], v17); /*0x698f5c*/
    else
      fprintf(v4, &stru_830620.__pad_579C[37872], v17); /*0x698f75*/
    return 1; /*0x698f64*/
  }
}


// ==== 0x00698F90  GameSetup::WriteINI  this=GameSetup  sig=csp ====
int __thiscall GameSetup::WriteINI(int this, CCINIClass *aP1, unsigned __int8 *Block)
{
  INIClass *v4; // edx
  INIClass *v5; // eax
  INIClass *v6; // ecx
  INIClass *v7; // edx
  INIClass *v8; // eax
  int v9; // ebp
  int v10; // ebx
  int result; // eax
  char Buffer[16]; // [esp+10h] [ebp-10h] BYREF

  INIClass::SetInt(aP1->__pad_0, (INIClass *)Block, (INIClass *)&stru_830620.__pad_579C[37396], *(_DWORD *)this, 0); /*0x698fae*/
  INIClass::SetInt( /*0x698fc1*/
    aP1->__pad_0,
    (INIClass *)Block,
    (INIClass *)&stru_830620.__pad_579C[37384],
    *(_DWORD *)(this + 4),
    0);
  INIClass::SetInt(aP1->__pad_0, (INIClass *)Block, (INIClass *)&stru_830620.__pad_14B0[6168], *(_DWORD *)(this + 8), 0); /*0x698fd4*/
  INIClass::SetInt(aP1->__pad_0, (INIClass *)Block, (INIClass *)aCredits, *(_DWORD *)(this + 12), 0); /*0x698fe7*/
  INIClass::SetInt( /*0x698ffa*/
    aP1->__pad_0,
    (INIClass *)Block,
    (INIClass *)&stru_830620.__pad_579C[29360],
    *(_DWORD *)(this + 16),
    0);
  LOBYTE(v4) = *(_BYTE *)(this + 20); /*0x698fff*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, &stru_830620.__pad_579C[29164], v4); /*0x69900b*/
  LOBYTE(v5) = *(_BYTE *)(this + 21); /*0x699010*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, &stru_830620.__pad_579C[29144], v5); /*0x69901c*/
  LOBYTE(v6) = *(_BYTE *)(this + 22); /*0x699021*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, &stru_830620.__pad_579C[29128], v6); /*0x69902d*/
  LOBYTE(v7) = *(_BYTE *)(this + 23); /*0x699032*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, &stru_830620.__pad_579C[37372], v7); /*0x69903e*/
  LOBYTE(v8) = *(_BYTE *)(this + 24); /*0x699043*/
  INIClass::SetBool(aP1->__pad_0, (INIClass *)Block, &stru_830620.__pad_579C[37356], v8); /*0x69904f*/
  v9 = 1; /*0x699054*/
  v10 = this + 44; /*0x699059*/
  do /*0x69908e*/
  {
    sprintf(Buffer, &stru_830620.__pad_579C[37344], v9); /*0x699067*/
    LOBYTE(result) = GameSetup::FormatToString( /*0x699082*/
                       aP1->__pad_0,
                       Block,
                       Buffer,
                       *(CCINIClass **)(v10 - 4),
                       *(CCINIClass **)v10,
                       *(_DWORD *)(v10 + 4));
    ++v9; /*0x699087*/
    v10 += 12; /*0x699088*/
  }
  while ( v9 < 8 ); /*0x69908e*/
  return result; /*0x699090*/
}


// ==== 0x006990A0  ObjectClass::SaveConfigWOL  this=ObjectClass  sig=csp ====
void __thiscall WOL_SaveConfig(int this)
{
  char *v2; // eax
  int v3; // eax
  int i; // edi
  int j; // edi
  int v6; // eax
  CHAR v7[12]; // [esp+Ch] [ebp-B0h] BYREF
  int v8[9]; // [esp+18h] [ebp-A4h] BYREF
  CHAR Source[128]; // [esp+3Ch] [ebp-80h] BYREF

  RawFileClass::Construct(v8, (int)MEMORY[0x826444]); /*0x6990b4*/
  INIClass::SetInt( /*0x6990d1*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x82642C],
    MEMORY[0x83F190],
    *(_DWORD *)(this + 10372),
    0);
  INIClass::SetBool( /*0x6990ec*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x82642C],
    MEMORY[0x83F170],
    *(_BYTE *)(this + 776));
  INIClass::SetInt( /*0x699109*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x82642C],
    MEMORY[0x83F160],
    *(_DWORD *)(this + 780),
    0);
  v2 = CharToWideString((_BYTE *)(this + 328)); /*0x699114*/
  INIClass::SetWideAsHex(MEMORY[0x82642C], MEMORY[0x83F158], (wchar_t *)v2); /*0x699129*/
  INIClass::SetInt( /*0x699146*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x82642C],
    stru_81B138,
    *(_DWORD *)(this + 380),
    0);
  INIClass::SetInt( /*0x699163*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x82642C],
    MEMORY[0x83F150],
    *(_DWORD *)(this + 384),
    0);
  INIClass::SetHouseName(MEMORY[0x82642C], MEMORY[0x817334], *(_DWORD *)(this + 388)); /*0x69917e*/
  INIClass::SetInt( /*0x69919b*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x82642C],
    MEMORY[0x83F148],
    *(_DWORD *)(this + 392),
    0);
  v3 = *(_DWORD *)(this + 4); /*0x6991a0*/
  if ( v3 ) /*0x6991a7*/
    INIClass::SetInt( /*0x6991ad*/
      (char *)&MEMORY[0x8870C0],
      (unsigned __int8 *)MEMORY[0x82642C],
      MEMORY[0x83EFD0],
      *(_DWORD *)(v3 + 40),
      0);
  else
    INIClass::SetInt((char *)&MEMORY[0x8870C0], (unsigned __int8 *)MEMORY[0x82642C], MEMORY[0x83EFD0], 0, 0); /*0x6991c0*/
  GameSetup::WriteINI((int)&MEMORY[0x8870C0], MEMORY[0x83F104]); /*0x6991d5*/
  GameSetup::WriteINI((int)&MEMORY[0x8870C0], MEMORY[0x83F100]); /*0x6991ea*/
  GameSetup::WriteINI((int)&MEMORY[0x8870C0], MEMORY[0x83F0F4]); /*0x6991ff*/
  INIClass::ClearSection((int)&MEMORY[0x8870C0], (int)MEMORY[0x83F0D8], 0); /*0x699210*/
  INIClass::SetString( /*0x69922b*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x83F0D8],
    MEMORY[0x83F068],
    (char *)(this + 10408));
  INIClass::SetInt( /*0x699248*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x83F0D8],
    MEMORY[0x83F078],
    *(_DWORD *)(this + 10396),
    0);
  INIClass::SetInt( /*0x699265*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x83F0D8],
    MEMORY[0x83F08C],
    *(_DWORD *)(this + 10392),
    0);
  INIClass::SetString( /*0x699287*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x83F0D8],
    MEMORY[0x83F09C],
    (&MEMORY[0x83ECFC])[*(_DWORD *)(this + 10388)]);
  INIClass::SetInt( /*0x6992a4*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x83F0D8],
    MEMORY[0x83F0C4],
    *(_DWORD *)(this + 10384),
    0);
  INIClass::SetInt( /*0x6992c1*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x83F0D8],
    MEMORY[0x83F0CC],
    *(_DWORD *)(this + 10380),
    0);
  INIClass::SetInt( /*0x6992de*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x83F0D8],
    MEMORY[0x83F0D0],
    *(_DWORD *)(this + 10376),
    1);
  INIClass::SetInt( /*0x6992fb*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x83F0D8],
    MEMORY[0x83F0B8],
    *(_DWORD *)(this + 10400),
    0);
  INIClass::SetInt( /*0x699318*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x83F0D8],
    MEMORY[0x83F0A8],
    *(_DWORD *)(this + 10404),
    0);
  INIClass::SetString( /*0x699333*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x83F0D8],
    MEMORY[0x83F0E8],
    (char *)(this + 10424));
  INIClass::ClearSection((int)&MEMORY[0x8870C0], (int)MEMORY[0x83F05C], 0); /*0x699344*/
  for ( i = 0; i < *(_DWORD *)(this + 10532); ++i ) /*0x699359*/
  {
    wsprintfA(v7, stru_81898C, i); /*0x699366*/
    INIClass::SetString( /*0x699384*/
      (char *)&MEMORY[0x8870C0],
      (unsigned __int8 *)MEMORY[0x83F05C],
      v7,
      *(char **)(*(_DWORD *)(this + 10520) + 4 * i));
  }
  INIClass::ClearSection((int)&MEMORY[0x8870C0], (int)MEMORY[0x83F050], 0); /*0x6993a0*/
  for ( j = *(_DWORD *)(this + 10508) - 1; j >= 0; --j ) /*0x6993ac*/
  {
    v6 = *(_DWORD *)(*(_DWORD *)(this + 10496) + 4 * j); /*0x6993b4*/
    wsprintfA( /*0x6993f6*/
      Source,
      MEMORY[0x83F384],
      (const char *)(v6 + 112),
      (const char *)(v6 + 154),
      *(_DWORD *)v6,
      *(_DWORD *)(v6 + 4),
      *(_DWORD *)(v6 + 8),
      *(_DWORD *)(v6 + 24),
      *(_DWORD *)(v6 + 28),
      (&MEMORY[0x83ECFC])[*(_DWORD *)(v6 + 12)],
      *(_DWORD *)(v6 + 16),
      *(_DWORD *)(v6 + 20),
      (const char *)(v6 + 32));
    wsprintfA(v7, stru_81898C, j); /*0x699403*/
    INIClass::SetString((char *)&MEMORY[0x8870C0], (unsigned __int8 *)MEMORY[0x83F050], v7, Source); /*0x69941c*/
  }
  INIClass::WriteDigest(v8, 0); /*0x699430*/
  RawFileClass::Dtor(v8); /*0x699439*/
}


// ==== 0x00699450  ScenarioClass::SaveMultiplayerSettings  this=ObjectClass  sig=csp ====
void __thiscall sub_699450(char *this)
{
  int v2[9]; // [esp+4h] [ebp-24h] BYREF

  RawFileClass::Construct(v2, (int)MEMORY[0x826444]); /*0x69945f*/
  INIClass::SetBool((char *)&MEMORY[0x8870C0], (unsigned __int8 *)MEMORY[0x82642C], MEMORY[0x83F13C], this->q1ED9); /*0x69947a*/
  INIClass::SetBool((char *)&MEMORY[0x8870C0], (unsigned __int8 *)MEMORY[0x82642C], MEMORY[0x83F130], this->q1ED8); /*0x699495*/
  INIClass::SetBool((char *)&MEMORY[0x8870C0], (unsigned __int8 *)MEMORY[0x82642C], MEMORY[0x83F120], this->q1FC1); /*0x6994b0*/
  INIClass::SetBool((char *)&MEMORY[0x8870C0], (unsigned __int8 *)MEMORY[0x82642C], MEMORY[0x83F110], this->q1FC0); /*0x6994cb*/
  INIClass::WriteDigest(&MEMORY[0x8870C0], (int)v2, 0); /*0x6994dc*/
  RawFileClass::Dtor(v2); /*0x6994e5*/
}


// ==== 0x006994F0  ParseMapFileHeader  this=ObjectClass  sig=csp ====
int __fastcall ParseMapFileHeader(
        CampaignScore *aP0,
        _WORD *a1,
        char *a2,
        CampaignScore *aP3,
        _BYTE *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  int v7; // edi
  CampaignScore *v8; // ebp
  signed int v9; // esi
  char *v10; // eax
  char *v11; // esi
  char *v12; // eax
  int v13; // edi
  CCINIClass *v14; // esi
  signed int v15; // edi
  int v17; // [esp+10h] [ebp-1A4h]
  char *v19; // [esp+1Ch] [ebp-198h]
  int v20[22]; // [esp+20h] [ebp-194h] BYREF
  _BYTE v21[12]; // [esp+78h] [ebp-13Ch] BYREF
  int v22; // [esp+84h] [ebp-130h]
  AbstractTypeClass aP1; // [esp+8Ch] [ebp-128h] BYREF
  int v24; // [esp+124h] [ebp-90h]
  _DWORD v25[7]; // [esp+128h] [ebp-8Ch] BYREF
  _DWORD v26[6]; // [esp+144h] [ebp-70h] BYREF
  char v27; // [esp+15Ch] [ebp-58h]
  INIClass aP4; // [esp+174h] [ebp-40h] BYREF

  CCFileClass::Construct(v20, aP0->__pad_0); /*0x699507*/
  if ( CCFileClass::Open(v20, 0) && FileClass::Load(v20, (CDFileClass *)1) ) /*0x699526*/
  {
    v7 = 0; /*0x699533*/
    v8 = 0; /*0x699535*/
    while ( 1 ) /*0x69953b*/
    {
      v7 += 5; /*0x69953b*/
      v9 = v7 * CCFileClass::GetSize(v20) / 100; /*0x69955b*/
      if ( v8 ) /*0x69955d*/
        __3_YAXPAX_Z(v8); /*0x699560*/
      v8 = (CampaignScore *)__2_YAPAXI_Z(v9 + 1); /*0x699571*/
      if ( !v8 ) /*0x699578*/
        break; /*0x699578*/
      BufferIOFileClass::Seek(v20, 0, 0); /*0x699584*/
      CCFileClass::Read(v20, v8, v9); /*0x69958f*/
      v8->__pad_0[v9] = 0; /*0x699594*/
      v10 = strstr((ObjectClass *)v8, &stru_830620.__pad_579C[38604]); /*0x69959d*/
      v11 = v10; /*0x6995a2*/
      if ( v10 ) /*0x6995a9*/
      {
        v12 = strstr((ObjectClass *)(v10 + 5), &stru_830620.__pad_579C[38600]); /*0x6995b4*/
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
            v15 = (v13 + 1) * CCFileClass::GetSize(v20) / 100; /*0x699616*/
            if ( v14 ) /*0x699618*/
              __3_YAXPAX_Z(v14); /*0x69961b*/
            v14 = (CCINIClass *)__2_YAPAXI_Z(v15 + 1); /*0x69962c*/
            if ( !v14 ) /*0x699633*/
              goto LABEL_20; /*0x699633*/
            BufferIOFileClass::Seek(v20, -v15, 2u); /*0x699644*/
            CCFileClass::Read(v20, (CampaignScore *)v14, v15); /*0x69964f*/
            v14->__pad_0[v15] = 0; /*0x699654*/
            if ( strstr((ObjectClass *)v14, &stru_830620.__pad_579C[38532]) ) /*0x69965d*/
            {
              Debug::Log(); /*0x699693*/
              *(_DWORD *)&aP1.zero_3C = 0; /*0x6996a2*/
              *(_DWORD *)&aP1.UINameLabel[3] = 0; /*0x6996a9*/
              INISectionList::Constructor(&aP1.UINameLabel[7]); /*0x6996b0*/
              Node::Init(&aP1.UIName); /*0x6996bc*/
              *(_DWORD *)&aP1.Name[16] = 0; /*0x6996d5*/
              aP1.Name[20] = 0; /*0x6996dc*/
              *(_DWORD *)&aP1.__pad_24[20] = &CCINIClass_Vtable; /*0x6996e3*/
              aP1.NeedsSaveOrLink = 0; /*0x6996ea*/
              *(_DWORD *)aP1.__pad_24 = 0; /*0x6996f1*/
              aP1.referenceCount = (int)&vt_Straw; /*0x6996f8*/
              Buffer::Init(&aP1.__pad_24[4], (int)v8, (AbstractClass *)(v19 - (char *)v8)); /*0x699703*/
              *(_DWORD *)&aP1.__pad_24[16] = 0; /*0x69970f*/
              aP1.referenceCount = (int)&vt_BufferStraw; /*0x699720*/
              CCINIClass::LoadAndVerifyDigest((int)&aP1.__pad_24[20], (AbstractTypeClass *)&aP1.referenceCount, 0, 0); /*0x69972b*/
              *(_DWORD *)&aP1.Name[48] = 0; /*0x699737*/
              v24 = 0; /*0x69973e*/
              INISectionList::Constructor(v25); /*0x699745*/
              Node::Init(v26); /*0x699751*/
              *(_DWORD *)&aP1.Name[44] = &CCINIClass_Vtable; /*0x699756*/
              v26[5] = 0; /*0x699764*/
              v27 = 0; /*0x69976b*/
              *(_DWORD *)&aP1.__pad_0[4] = 0; /*0x69977f*/
              *(_DWORD *)&aP1.__pad_0[8] = 0; /*0x699786*/
              *(_DWORD *)aP1.__pad_0 = &vt_Straw; /*0x69978d*/
              Buffer::Init(&aP1.__pad_0[12], (int)v14, (AbstractClass *)(strlen(v14->__pad_0) + 1)); /*0x699798*/
              aP1.nextArrayIndex = 0; /*0x6997ae*/
              *(_DWORD *)aP1.__pad_0 = &vt_BufferStraw; /*0x6997b5*/
              CCINIClass::LoadAndVerifyDigest((int)&aP1.Name[44], &aP1, 0, 0); /*0x6997c0*/
              *a5 = INIClass::ReadInt_Overwrite( /*0x6997e5*/
                      (int)&aP1.__pad_24[20],
                      (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                      (CCINIClass *)&stru_830620.__pad_579C[38464],
                      (INIClass *)*a5);
              *a6 = INIClass::ReadInt_Overwrite( /*0x69981b*/
                      (int)&aP1.__pad_24[20],
                      (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                      (CCINIClass *)&stru_830620.__pad_579C[38452],
                      (INIClass *)*a6);
              INIClass::GetString( /*0x699833*/
                (unsigned __int8 ***)&aP1.__pad_24[20],
                (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                (unsigned __int8 *)&stru_830620.__pad_579C[37396],
                (INIClass *)&stru_87C374.__pad_579C[33876],
                (INIClass *)aP3,
                256);
              INIClass::GetString( /*0x699858*/
                (unsigned __int8 ***)&aP1.__pad_24[20],
                (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                (unsigned __int8 *)&stru_817828.fallRate,
                &unk_829284,
                &aP4,
                64);
              BulkCharToWide(a1, (unsigned __int8 *)&aP4, -1); /*0x69986a*/
              INIClass::GetString( /*0x69988f*/
                (unsigned __int8 ***)&aP1.Name[44],
                &g_INI_Key_Digest,
                (unsigned __int8 *)&stru_830620.__pad_1258[32],
                (INIClass *)&stru_830620.__pad_579C[38440],
                (INIClass *)a2,
                32);
              *a4 = INIClass::ReadBool_Overwrite( /*0x6998ba*/
                      (int)&aP1.__pad_24[20],
                      (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                      (CCINIClass *)&stru_830620.__pad_579C[32416],
                      0);
              Debug::Log(); /*0x6998d9*/
              Debug::Log(); /*0x6998eb*/
              __3_YAXPAX_Z(v8); /*0x6998f1*/
              __3_YAXPAX_Z(v14); /*0x6998f7*/
              Vector::Clear((int)&aP1.__pad_0[12]); /*0x699906*/
              Straw::Dtor((int *)aP1.__pad_0); /*0x699912*/
              HashTable::DestroyHashTableINIClass((void **)&aP1.Name[44]); /*0x69991e*/
              Vector::Clear((int)&aP1.__pad_24[4]); /*0x69992a*/
              Straw::Dtor(&aP1.referenceCount); /*0x699936*/
              HashTable::DestroyHashTableINIClass((void **)&aP1.__pad_24[20]); /*0x699942*/
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
  v20[0] = (int)&vt_CCFileClass; /*0x699947*/
  v22 = 0; /*0x699953*/
  Vector::Clear((int)v21); /*0x69995a*/
  v20[0] = (int)&off_7E1668; /*0x699963*/
  return BufferIOFileClass::Dtor(v20); /*0x699970*/
}


// ==== 0x00699980  SessionClass::LoadMissionList  this=SessionClass  sig=csp ====
char *__thiscall SessionClass_LoadMissionList(_DWORD *this)
{
  wchar_t *Description; // esi
  int v3; // eax
  _DWORD *v4; // ebp
  int KeyCount; // ebx
  int v6; // edi
  unsigned __int8 *StringByIndex; // eax
  wchar_t *v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  HANDLE FirstFileA; // ebx
  char *cAlternateFileName; // esi
  int v15; // ebx
  int i; // edi
  unsigned __int8 *v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // esi
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // edx
  HANDLE v24; // ebx
  char *cFileName; // esi
  _DWORD *v26; // eax
  _DWORD *v27; // edi
  int v28; // eax
  unsigned int v29; // kr0C_4
  unsigned int v30; // ebx
  int v31; // eax
  int v32; // ecx
  unsigned __int8 *v33; // eax
  wchar_t *v34; // eax
  wchar_t *v35; // eax
  wchar_t *v36; // esi
  int v37; // ecx
  int v38; // eax
  size_t v39; // edi
  wchar_t *String; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  int v44; // edx
  char *v45; // esi
  wchar_t *v46; // eax
  wchar_t *v47; // esi
  int v48; // ecx
  int v49; // eax
  int v50; // eax
  int v51; // edx
  HANDLE hFindFile; // [esp+20h] [ebp-5C4h]
  HANDLE hFindFilea; // [esp+20h] [ebp-5C4h]
  HANDLE hFindFileb; // [esp+20h] [ebp-5C4h]
  int v56; // [esp+24h] [ebp-5C0h] BYREF
  int j; // [esp+28h] [ebp-5BCh]
  int v58; // [esp+2Ch] [ebp-5B8h] BYREF
  int v59; // [esp+30h] [ebp-5B4h] BYREF
  int v60[3]; // [esp+34h] [ebp-5B0h] BYREF
  _DWORD v61[10]; // [esp+40h] [ebp-5A4h] BYREF
  char v62; // [esp+68h] [ebp-57Ch]
  int v63; // [esp+6Ch] [ebp-578h]
  int v64; // [esp+70h] [ebp-574h]
  int v65; // [esp+74h] [ebp-570h]
  int v66; // [esp+78h] [ebp-56Ch]
  _DWORD v67[22]; // [esp+7Ch] [ebp-568h] BYREF
  char v68[12]; // [esp+D4h] [ebp-510h] BYREF
  int v69; // [esp+E0h] [ebp-504h]
  char v70[64]; // [esp+E8h] [ebp-4FCh] BYREF
  char v71[32]; // [esp+128h] [ebp-4BCh] BYREF
  wchar_t Source[44]; // [esp+148h] [ebp-49Ch] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+1A0h] [ebp-444h] BYREF
  wchar_t Buffer[64]; // [esp+2E0h] [ebp-304h] BYREF
  wchar_t v75[64]; // [esp+360h] [ebp-284h] BYREF
  char Destination[260]; // [esp+3E0h] [ebp-204h] BYREF
  char v77[256]; // [esp+4E4h] [ebp-100h] BYREF

  Description = 0; /*0x69998b*/
  v60[1] = 0; /*0x699992*/
  v60[2] = 0; /*0x699996*/
  GenericList::Constructor(v61); /*0x69999a*/
  v3 = this->u32_690; /*0x69999f*/
  v4 = this + 420; /*0x6999a5*/
  v61[0] = &vt_List_INIClass_INISection; /*0x6999ad*/
  memset(&v61[7], 0, 12); /*0x6999b5*/
  v62 = 0; /*0x6999c1*/
  v63 = 0; /*0x6999c6*/
  v64 = 0; /*0x6999ca*/
  v60[0] = (int)&vt_INIClass; /*0x6999ce*/
  (*(void (__thiscall **)(_DWORD *))(v3 + 12))(v4); /*0x6999d6*/
  CCFileClass::Construct(v67, MEMORY[0x83F520]); /*0x6999e2*/
  if ( CCFileClass::Open(v67, 0) ) /*0x6999ec*/
  {
    FileStraw::Open(v60, (int)v67, 0); /*0x699a03*/
    KeyCount = INIClass::GetKeyCount((char *)v60, (unsigned __int8 *)MEMORY[0x83F514]); /*0x699a16*/
    v6 = 0; /*0x699a18*/
    if ( KeyCount > 0 ) /*0x699a1c*/
    {
      while ( 1 ) /*0x699a3f*/
      {
        StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x699a3f*/
                                             (char *)v60,
                                             (unsigned __int8 *)MEMORY[0x83F514],
                                             v6);
        if ( INIClass::GetString( /*0x699a4e*/
               (unsigned __int8 ***)v60,
               (unsigned __int8 *)MEMORY[0x83F514],
               StringByIndex,
               &MEMORY[0x889F64],
               v70,
               64) )
        {
          v8 = (wchar_t *)__2_YAPAXI_Z(0x1BCu); /*0x699a5c*/
          if ( v8 ) /*0x699a66*/
            Description = MapFile::LoadDescription(v8, (unsigned __int8 ***)v60, v70); /*0x699a7c*/
          v9 = v4[2]; /*0x699a7e*/
          if ( v4[4] < v9 /*0x699aa4*/
            || (*((_BYTE *)v4 + 13) || !v9)
            && (v10 = v4[5], v10 > 0)
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v4 + 8))(v4, v9 + v10, 0) )
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
  INIClass::ClearSection((int)v60, 0, 0); /*0x699acb*/
  CCFileClass::Reset(v67); /*0x699ad4*/
  FirstFileA = FindFirstFileA(MEMORY[0x83F50C], &FindFileData); /*0x699aec*/
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
        if ( _strcmpi(cAlternateFileName, MEMORY[0x83F520]) )
        {
          FileClass::SetFileName(v67, cAlternateFileName); /*0x699b48*/
          FileStraw::Open(v60, (int)v67, 0); /*0x699b58*/
          v15 = INIClass::GetKeyCount((char *)v60, (unsigned __int8 *)MEMORY[0x83F514]); /*0x699b6b*/
          for ( i = 0; i < v15; ++i )
          {
            v17 = (unsigned __int8 *)INIClass::GetStringByIndex((char *)v60, (unsigned __int8 *)MEMORY[0x83F514], i); /*0x699b90*/
            if ( INIClass::GetString(
                   (unsigned __int8 ***)v60,
                   (unsigned __int8 *)MEMORY[0x83F514],
                   v17,
                   &MEMORY[0x889F64],
                   v70,
                   64) )
            {
              v18 = (wchar_t *)__2_YAPAXI_Z(0x1BCu); /*0x699bad*/
              v19 = v18 ? MapFile::LoadDescription(v18, (unsigned __int8 ***)v60, v70) : 0;
              v20 = v4[2]; /*0x699bd3*/
              if ( v4[4] < v20 /*0x699bf9*/
                || (*((_BYTE *)v4 + 13) || !v20)
                && (v21 = v4[5], v21 > 0)
                && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v4 + 8))(v4, v20 + v21, 0) )
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
  INIClass::ClearSection((int)v60, 0, 0); /*0x699c42*/
  CCFileClass::Reset(v67); /*0x699c4b*/
  v24 = FindFirstFileA(MEMORY[0x83F504], &FindFileData); /*0x699c69*/
  hFindFilea = v24; /*0x699c70*/
  v65 = dword_81C1D0; /*0x699c74*/
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
        if ( _strcmpi(cFileName, MEMORY[0x83F4F4]) ) /*0x699cbe*/
        {
          v26 = __2_YAPAXI_Z(0x28u); /*0x699cd0*/
          if ( v26 ) /*0x699cda*/
          {
            v27 = MixFileClass::FromFile(v26, cFileName, (int)&MEMORY[0x886980]); /*0x699ced*/
            if ( v27 ) /*0x699cf1*/
            {
              if ( MEMORY[0x884DD0] < MEMORY[0x884DC8] /*0x699d2d*/
                || (MEMORY[0x884DCD] || !MEMORY[0x884DC8])
                && MEMORY[0x884DD4] > 0
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0x884DC0] + 8))(
                     &MEMORY[0x884DC0],
                     MEMORY[0x884DC8] + MEMORY[0x884DD4],
                     0) )
              {
                v28 = MEMORY[0x884DD0]++; /*0x699d3a*/
                *((_DWORD *)MEMORY[0x884DC4] + v28) = v27; /*0x699d49*/
              }
              v29 = strlen(cFileName) + 1; /*0x699d53*/
              v30 = v29 - 1; /*0x699d5f*/
              strncpy(Destination, cFileName, v29 - 4); /*0x699d67*/
              *((_BYTE *)&v75[62] + v30 + 1) = 0; /*0x699d8f*/
              strcat(Destination, (const char *)&MEMORY[0x83F4F0]); /*0x699d9f*/
              Destination[v30] = 0; /*0x699da8*/
              FileClass::SetFileName(v67, Destination); /*0x699dbb*/
              if ( CCFileClass::Open(v67, 0) ) /*0x699dc7*/
              {
                FileStraw::Open(v60, (int)v67, 0); /*0x699dde*/
                v31 = INIClass::GetKeyCount((char *)v60, (unsigned __int8 *)MEMORY[0x83F514]); /*0x699dec*/
                v32 = 0; /*0x699df1*/
                v66 = v31; /*0x699df5*/
                for ( j = 0; j < v66; ++j ) /*0x699dfd*/
                {
                  v33 = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x699e1c*/
                                             (char *)v60,
                                             (unsigned __int8 *)MEMORY[0x83F514],
                                             v32);
                  if ( INIClass::GetString( /*0x699e2b*/
                         (unsigned __int8 ***)v60,
                         (unsigned __int8 *)MEMORY[0x83F514],
                         v33,
                         &MEMORY[0x889F64],
                         v70,
                         64) )
                  {
                    v34 = (wchar_t *)__2_YAPAXI_Z(0x1BCu); /*0x699e3d*/
                    if ( v34 ) /*0x699e47*/
                    {
                      v35 = MapFile::LoadDescription(v34, (unsigned __int8 ***)v60, v70); /*0x699e5c*/
                      v36 = v35; /*0x699e61*/
                      if ( v35 ) /*0x699e65*/
                      {
                        v37 = *((_DWORD *)v35 + 97); /*0x699e6b*/
                        v38 = *((_DWORD *)v35 + 96); /*0x699e71*/
                        if ( v38 == v37 ) /*0x699e7b*/
                          swprintf(Buffer, (const size_t)&MEMORY[0x83F4CC], (const wchar_t *const)0x28, v38, 41); /*0x699ea8*/
                        else
                          swprintf(Buffer, (const size_t)&MEMORY[0x83F4DC], (const wchar_t *const)0x28, v38, v37, 41); /*0x699e8e*/
                        v39 = wcslen(v36); /*0x699ebf*/
                        wcscpy(Source, v36); /*0x699ec1*/
                        wcsncat(Source, stru_82083C, 44 - v39); /*0x699edb*/
                        wcsncat(Source, Buffer, 44 - (v39 + 1)); /*0x699ef9*/
                        if ( Source ) /*0x699f0a*/
                        {
                          wcsncpy(v36, Source, 0x2Cu); /*0x699f17*/
                          v36[43] = 0; /*0x699f1f*/
                        }
                        else
                        {
                          String = GetStringCSF(MEMORY[0x83F4B8], 0, MEMORY[0x83EEB8], 2845); /*0x699f36*/
                          wcscpy(v36, String); /*0x699f3d*/
                        }
                        v41 = v4[2]; /*0x699f45*/
                        if ( v4[4] < v41 /*0x699f6a*/
                          || (*((_BYTE *)v4 + 13) || !v41)
                          && (v42 = v4[5], v42 > 0)
                          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v4 + 8))(v4, v41 + v42, 0) )
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
                INIClass::ClearSection((int)v60, 0, 0); /*0x699f9b*/
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
  SetSoundWarning(v65); /*0x699fd0*/
  if ( v24 != (HANDLE)-1 ) /*0x699fd8*/
    FindClose(v24); /*0x699fdb*/
  INIClass::ClearSection((int)v60, 0, 0); /*0x699fe7*/
  CCFileClass::Reset(v67); /*0x699ff0*/
  hFindFileb = FindFirstFileA(MEMORY[0x83F490], &FindFileData); /*0x69a010*/
  LOBYTE(v56) = 0; /*0x69a014*/
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
          (unsigned __int8 ***)v60,
          (unsigned __int8 *)MEMORY[0x82BF9C],
          (unsigned __int8 *)MEMORY[0x817854],
          unk_829284,
          v70,
          64);
        INIClass::GetString( /*0x69a095*/
          (unsigned __int8 ***)v60,
          (unsigned __int8 *)g_INI_Key_Digest,
          (unsigned __int8 *)MEMORY[0x831898],
          MEMORY[0x83F3E4],
          v71,
          32);
        BulkCharToWide(v75, (unsigned __int8 *)v70, -1); /*0x69a0aa*/
        LOBYTE(v56) = INIClass::ReadBool_Overwrite(MEMORY[0x82BF9C], MEMORY[0x83DC5C], 0); /*0x69a0c8*/
        v59 = 2; /*0x69a0f0*/
        v58 = 4; /*0x69a0f8*/
        ParseMapFileHeader(v45, v71, v77, (int)&v56, (int)&v59, (int)&v58); /*0x69a0fc*/
        v46 = (wchar_t *)__2_YAPAXI_Z(0x1BCu); /*0x69a106*/
        if ( v46 ) /*0x69a110*/
          v47 = SessionClass::ParseGameInfo(v46, v45, v75, v71, v56, v77, v59, v58); /*0x69a141*/
        else
          v47 = 0; /*0x69a145*/
        v48 = v4[2]; /*0x69a147*/
        if ( v4[4] < v48 /*0x69a16d*/
          || (*((_BYTE *)v4 + 13) || !v48)
          && (v49 = v4[5], v49 > 0)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v4 + 8))(v4, v48 + v49, 0) )
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
  v67[0] = &vt_CCFileClass; /*0x69a1b2*/
  v69 = 0; /*0x69a1ba*/
  Vector::Clear((int)v68); /*0x69a1c1*/
  v67[0] = &off_7E1668; /*0x69a1ca*/
  BufferIOFileClass::Dtor(v67); /*0x69a1d2*/
  return HashTable::DestroyHashTableINIClass((void **)v60); /*0x69a1e0*/
}


// ==== 0x0069A1F0  WinMain::Constructor_VectorClass_Wstring_  this=WinMain  sig=csp ====
int __thiscall sub_69A1F0(_DWORD *this)
{
  int i; // ebp
  int v3; // esi
  void *v4; // eax
  int j; // esi
  int k; // esi

  for ( i = 0; i < this->u32_6A0; ++i ) /*0x69a200*/
  {
    v3 = *(_DWORD *)(this->u32_694 + 4 * i); /*0x69a208*/
    if ( v3 ) /*0x69a20d*/
    {
      *(_DWORD *)(v3 + 420) = &vt_VectorClass_Wstring; /*0x69a215*/
      VectorClass_Wstring::ddtor(v3 + 420); /*0x69a21b*/
      v4 = *(void **)(v3 + 396); /*0x69a220*/
      *(_DWORD *)(v3 + 392) = &vt_VectorClass_enum_DiskID; /*0x69a226*/
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
  (*(void (__thiscall **)(_DWORD *))(this->u32_690 + 12))(this + 420); /*0x69a277*/
  for ( j = 0; j < this->u32_2924; ++j ) /*0x69a284*/
    __3_YAXPAX_Z(*(void **)(this->u32_2918 + 4 * j)); /*0x69a290*/
  (*(void (__thiscall **)(_DWORD *))(this->u32_2914 + 12))(this + 2629); /*0x69a2af*/
  for ( k = 0; k < this->u32_290C; ++k ) /*0x69a2bc*/
  {
    if ( *(_DWORD *)(this->u32_2900 + 4 * k) ) /*0x69a2c4*/
      __3_YAXPAX_Z(*(void **)(this->u32_2900 + 4 * k)); /*0x69a2cc*/
  }
  return (*(int (__thiscall **)(_DWORD *))(this->u32_28FC + 12))(this + 2623); /*0x69a2ee*/
}


// ==== 0x0069A300  ObjectClass::nullsub_35  this=ObjectClass  sig=csp ====
void nullsub_35()
{
  ; /*0x69a300*/
}


// ==== 0x0069A310  SessionClass::GetPlayerColorScheme  this=SessionClass  sig=csp ====
unsigned int __stdcall SessionClass::GetPlayerColorScheme(ObjectClass *aP0)
{
  ObjectClass *result; // eax

  result = aP0; /*0x69a310*/
  if ( aP0 == (ObjectClass *)-2 ) /*0x69a317*/
    return stru_830620.__pad_579C[36704]; /*0x69a31e*/
  if ( (unsigned int)aP0 < 9 ) /*0x69a32b*/
    return stru_830620.__pad_579C[(_DWORD)aP0 + 36696]; /*0x69a32d*/
  return (unsigned int)result; /*0x69a325*/
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
  v1 = Object_Init_7CBC11(MEMORY[0x83EF00]); /*0x69a363*/
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


// ==== 0x0069A3B0  MapFile::LoadDescription  this=AbstractClass  sig=csp ====
VectorClass *__thiscall MapFile::LoadDescription(wchar_t *String, unsigned __int8 ***a2, INIClass *aP1)
{
  wchar_t *v4; // ebp
  int v5; // edx
  INIClass *v6; // esi
  CCINIClass *v7; // edi
  bool v8; // al
  int Int_Overwrite; // eax
  CCINIClass *v10; // ecx
  char *v11; // eax
  char *v12; // eax
  int v13; // ecx
  CCINIClass *v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  ObjectClass *i; // esi
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v23; // [esp+0h] [ebp-214h] BYREF
  char *a3; // [esp+10h] [ebp-204h] BYREF
  CCINIClass *v25; // [esp+14h] [ebp-200h] BYREF
  bool aP2_7; // [esp+1Bh] [ebp-1F9h]
  void *aP2_8; // [esp+1Ch] [ebp-1F8h] BYREF
  ObjectClass aP2_12; // [esp+20h] [ebp-1F4h] BYREF
  _DWORD v29[6]; // [esp+E4h] [ebp-130h] BYREF
  char v30; // [esp+FCh] [ebp-118h]
  INIClass Source[2]; // [esp+114h] [ebp-100h] BYREF
  INIClass Stringa[2]; // [esp+194h] [ebp-80h] BYREF

  v4 = String + 196; /*0x69a3bc*/
  MapFile::Constructor((_DWORD *)String + 98, 0, 0); /*0x69a3c8*/
  *((_DWORD *)v4 + 5) = 10; /*0x69a3de*/
  *((_DWORD *)v4 + 4) = 0; /*0x69a3e1*/
  *(_DWORD *)v4 = &vt_TypeList_enum_DiskID; /*0x69a3e8*/
  VectorClass::WstringConstructor((_DWORD *)String + 105, 0, 0); /*0x69a3ef*/
  *((_DWORD *)String + 110) = 10; /*0x69a3f4*/
  *((_DWORD *)String + 105) = &vt_DynamicVectorClass_Wstring; /*0x69a3f7*/
  *((_DWORD *)String + 109) = 0; /*0x69a3fd*/
  *String = 0; /*0x69a40e*/
  *((_BYTE *)String + 347) = 0; /*0x69a413*/
  strcpy((char *)String + 348, &stru_830620.__pad_579C[38440]); /*0x69a42f*/
  v5 = *(_DWORD *)v4; /*0x69a438*/
  *((_BYTE *)String + 380) = 1; /*0x69a43d*/
  *((_DWORD *)String + 96) = 2; /*0x69a444*/
  *((_DWORD *)String + 97) = 4; /*0x69a44e*/
  (*(void (__thiscall **)(wchar_t *))(v5 + 12))(v4); /*0x69a458*/
  if ( aP1 ) /*0x69a464*/
  {
    strcpy((char *)String + 88, aP1->__pad_0); /*0x69a481*/
    strcat((char *)String + 88, MEMORY[0x82DF18]); /*0x69a4af*/
    if ( &stru_830620 == (IUnknown *)-61480 ) /*0x69a4bf*/
    {
      v6 = aP1; /*0x69a4c1*/
      v7 = (CCINIClass *)a2; /*0x69a4c8*/
      v8 = INIClass::BinarySearchSection((int)a2, aP1) != 0; /*0x69a4d9*/
    }
    else
    {
      v7 = (CCINIClass *)a2; /*0x69a4e5*/
      v6 = aP1; /*0x69a4f9*/
      v8 = HashTableSection::FindSection((int)a2, (CCINIClass *)aP1, (CCINIClass *)&stru_830620.__pad_579C[39052]) != 0; /*0x69a502*/
    }
    if ( v8 ) /*0x69a509*/
    {
      INIClass::GetString( /*0x69a51d*/
        (unsigned __int8 ***)v7,
        v6,
        (unsigned __int8 *)&stru_830620.__pad_579C[39052],
        (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
        (INIClass *)&aP2_12.__pad_0[4],
        44);
      BulkCharToWide(String, (unsigned __int8 *)&aP2_12.__pad_0[4], -1); /*0x69a52a*/
    }
    else
    {
      INIClass::GetStringEx((int)v7, v6, &stru_81B1A4, (CCINIClass *)String, 0x2Cu); /*0x69a53a*/
    }
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x69a54e*/
                      (int)v7,
                      (unsigned __int8 *)v6,
                      (CCINIClass *)&stru_830620.__pad_579C[38464],
                      *((INIClass **)String + 96));
    v10 = (CCINIClass *)*((_DWORD *)String + 97); /*0x69a553*/
    *((_DWORD *)String + 96) = Int_Overwrite; /*0x69a559*/
    *((_DWORD *)String + 97) = INIClass::ReadInt_Overwrite( /*0x69a587*/
                                 (int)v7,
                                 (unsigned __int8 *)v6,
                                 (CCINIClass *)&stru_830620.__pad_579C[38452],
                                 (INIClass *)v10);
    if ( INIClass::GetString( /*0x69a58d*/
           (unsigned __int8 ***)v7,
           v6,
           (unsigned __int8 *)&stru_81B1A4.unknown30,
           (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
           Stringa,
           128) )
    {
      v11 = strtok(Stringa[0].__pad_0, MEMORY[0x817F70].__pad_0); /*0x69a5a3*/
      while ( v11 ) /*0x69a5ad*/
      {
        if ( !*v11 ) /*0x69a5af*/
          break; /*0x69a5b2*/
        v12 = (char *)atoi(v11); /*0x69a5b5*/
        v13 = *((_DWORD *)v4 + 4); /*0x69a5ba*/
        a3 = v12; /*0x69a5bd*/
        v14 = (CCINIClass *)*((_DWORD *)v4 + 2); /*0x69a5c1*/
        if ( v13 >= (int)v14 ) /*0x69a5c9*/
        {
          if ( !*((_BYTE *)v4 + 13) && v14 ) /*0x69a5d4*/
            continue; /*0x69a5d4*/
          v15 = *((_DWORD *)v4 + 5); /*0x69a5d6*/
          if ( v15 <= 0 /*0x69a5e7*/
            || !(*(unsigned __int8 (__thiscall **)(wchar_t *, char *, _DWORD))(*(_DWORD *)v4 + 8))(
                  v4,
                  &v14->__pad_0[v15],
                  0) )
          {
            continue; /*0x69a5e7*/
          }
        }
        v16 = *((_DWORD *)v4 + 4); /*0x69a5ee*/
        v17 = *((_DWORD *)v4 + 1); /*0x69a5f1*/
        *((_DWORD *)v4 + 4) = v16 + 1; /*0x69a5f7*/
        *(_DWORD *)(v17 + 4 * v16) = a3; /*0x69a5fe*/
        v11 = strtok(0, MEMORY[0x817F70].__pad_0); /*0x69a608*/
      }
    }
    unknown_libname_73(&aP2_8); /*0x69a618*/
    String::Assign(&a3, &MEMORY[0x87F8E4].__pad_5568[20760]); /*0x69a626*/
    String::Assign((char **)&aP2_12, &stru_830620.__pad_579C[37396]); /*0x69a634*/
    String::Assign((char **)&v25, v6->__pad_0); /*0x69a63e*/
    aP2_7 = (int)INIClass::ReadString( /*0x69a664*/
                   (ObjectClass *)v7,
                   (ObjectClass *)&v25,
                   &aP2_12,
                   (ReferenceCounted *)&a3,
                   (int)&aP2_8) > 0;
    DeleteAndZero((void **)&v25); /*0x69a669*/
    DeleteAndZero((void **)&aP2_12); /*0x69a672*/
    DeleteAndZero((void **)&a3); /*0x69a67b*/
    if ( aP2_7 ) /*0x69a686*/
    {
      unknown_libname_73(&v25); /*0x69a690*/
      for ( i = (ObjectClass *)String::Tokenize((const char **)&aP2_8, 0, &MEMORY[0x817F70], (ObjectClass *)&v25); /*0x69a6b0*/
            i != (ObjectClass *)-1;
            i = (ObjectClass *)String::Tokenize((const char **)&aP2_8, (int)i, &MEMORY[0x817F70], (ObjectClass *)&v25) )
      {
        String::Assign(&a3, &stru_830620.__pad_3BC[56]); /*0x69a6bf*/
        String::TrimLeft((const char **)&v25, (ObjectClass *)&a3); /*0x69a6cd*/
        DeleteAndZero((void **)&a3); /*0x69a6d6*/
        String::Assign((char **)&aP2_12, &stru_830620.__pad_3BC[56]); /*0x69a6e4*/
        String::TrimRight((const char **)&v25, &aP2_12); /*0x69a6f2*/
        DeleteAndZero((void **)&aP2_12); /*0x69a6fb*/
        v19 = *((_DWORD *)String + 107); /*0x69a700*/
        if ( *((_DWORD *)String + 109) >= v19 ) /*0x69a714*/
        {
          if ( !*((_BYTE *)String + 433) && v19 ) /*0x69a71f*/
            continue; /*0x69a71f*/
          v20 = *((_DWORD *)String + 110); /*0x69a721*/
          if ( v20 <= 0 /*0x69a730*/
            || !(*(unsigned __int8 (__thiscall **)(wchar_t *, int, _DWORD))(*((_DWORD *)String + 105) + 8))(
                  String + 210,
                  v19 + v20,
                  0) )
          {
            continue; /*0x69a730*/
          }
        }
        v21 = *((_DWORD *)String + 109); /*0x69a737*/
        *((_DWORD *)String + 109) = v21 + 1; /*0x69a742*/
        String::Reassign((char **)(*((_DWORD *)String + 106) + 4 * v21), (AbstractClass *)&v25); /*0x69a74b*/
      }
      DeleteAndZero((void **)&v25); /*0x69a773*/
    }
    CCFileClass::Construct(&aP2_12.nextObject, (char *)String + 88); /*0x69a784*/
    if ( CCFileClass::Open(&aP2_12.nextObject, 0) ) /*0x69a78e*/
    {
      if ( FileClass::Load((int *)&aP2_12.nextObject, (CDFileClass *)1) ) /*0x69a7b0*/
      {
        BufferIOFileClass::Seek(&aP2_12.nextObject, -100, 2u); /*0x69a7c5*/
        memset(Source, 0, sizeof(Source)); /*0x69a7da*/
        CCFileClass::Read(&aP2_12.nextObject, (CampaignScore *)Source, 100); /*0x69a7e8*/
        CCFileClass::Reset(&aP2_12.nextObject); /*0x69a7f1*/
        if ( strstr(Source[0].__pad_0, &stru_830620.__pad_579C[38532]) ) /*0x69a803*/
        {
          aP2_12.location[1] = 0; /*0x69a81a*/
          aP2_12.location[2] = 0; /*0x69a821*/
          GenericList::Constructor(&aP2_12.lineTrailer); /*0x69a828*/
          aP2_12.lineTrailer = &vt_List_INIClass_INISection; /*0x69a834*/
          Node::Init(v29); /*0x69a83f*/
          v29[5] = 0; /*0x69a852*/
          v30 = 0; /*0x69a859*/
          aP2_12.location[0] = (int)&CCINIClass_Vtable; /*0x69a861*/
          *(_DWORD *)&aP2_12.__pad_0[8] = 0; /*0x69a86c*/
          *(_DWORD *)&aP2_12.__pad_0[12] = 0; /*0x69a870*/
          *(_DWORD *)&aP2_12.__pad_0[4] = &vt_Straw; /*0x69a874*/
          Buffer::Init(&aP2_12.uniqueId, (int)Source, (AbstractClass *)0x64); /*0x69a87c*/
          aP2_12.referenceCount = 0; /*0x69a88f*/
          *(_DWORD *)&aP2_12.__pad_0[4] = &vt_BufferStraw; /*0x69a893*/
          CCINIClass::LoadAndVerifyDigest((int)aP2_12.location, (AbstractTypeClass *)&aP2_12.__pad_0[4], 0, 0); /*0x69a89b*/
          INIClass::GetString( /*0x69a8bf*/
            (unsigned __int8 ***)aP2_12.location,
            &g_INI_Key_Digest,
            (unsigned __int8 *)&stru_830620.__pad_1258[32],
            0,
            Source,
            128);
          if ( &v23 == (int *)-276 ) /*0x69a8cd*/
          {
            strcpy((char *)String + 348, &stru_830620.__pad_579C[38440]); /*0x69a90e*/
          }
          else
          {
            strncpy((char *)String + 348, Source[0].__pad_0, 0x20u); /*0x69a8e0*/
            *((_BYTE *)String + 379) = 0; /*0x69a8e8*/
          }
          Vector::Clear((int)&aP2_12.uniqueId); /*0x69a91d*/
          Straw::Dtor((int *)&aP2_12.__pad_0[4]); /*0x69a926*/
          HashTable::DestroyHashTableINIClass((void **)aP2_12.location); /*0x69a932*/
        }
      }
    }
    else
    {
      Debug::Log(); /*0x69a79d*/
    }
    aP2_12.nextObject = &vt_CCFileClass; /*0x69a93e*/
    aP2_12.lastLayer = 0; /*0x69a946*/
    Vector::Clear((int)&aP2_12.parachute); /*0x69a94d*/
    aP2_12.nextObject = &off_7E1668; /*0x69a956*/
    BufferIOFileClass::Dtor(&aP2_12.nextObject); /*0x69a95e*/
    DeleteAndZero(&aP2_8); /*0x69a967*/
  }
  return (VectorClass *)String; /*0x69a96c*/
}


// ==== 0x0069A980  SessionClass::ParseGameInfo  this=SessionClass  sig=csp ====
wchar_t *__thiscall SessionClass::ParseGameInfo(
        wchar_t *Destination,
        char *Source,
        CampaignScore *aP2,
        CCINIClass *aP3,
        CampaignScore *aP4,
        const char *a5,
        CampaignScore *aP6,
        int a8)
{
  wchar_t *v8; // esi
  VectorClass *v9; // ebx
  wchar_t *v10; // ebp
  char *v11; // eax
  wchar_t *StringCSF; // eax
  char v13; // cl
  int v14; // eax
  void (__thiscall **v15)(VectorClass *); // edx
  char *v16; // ecx
  int v17; // eax
  void *v18; // eax
  _DWORD *v19; // edx
  ObjectClass *i; // edi
  CampaignScore *v21; // ecx
  int v22; // eax
  ObjectClass *v23; // eax

  v8 = Destination; /*0x69a984*/
  v9 = (VectorClass *)(Destination + 196); /*0x69a989*/
  MapFile::Constructor((_DWORD *)Destination + 98, 0, 0); /*0x69a997*/
  v10 = v8 + 210; /*0x69a99c*/
  v9[1].Items = (void *)10; /*0x69a9ad*/
  v9[1].vtable0 = 0; /*0x69a9b0*/
  v9->vtable0 = &vt_TypeList_enum_DiskID; /*0x69a9b7*/
  VectorClass::WstringConstructor((_DWORD *)v8 + 105, 0, 0); /*0x69a9bd*/
  v11 = Source; /*0x69a9c2*/
  *((_DWORD *)v8 + 105) = &vt_DynamicVectorClass_Wstring; /*0x69a9c6*/
  *((_DWORD *)v8 + 110) = 10; /*0x69a9cf*/
  *((_DWORD *)v8 + 109) = 0; /*0x69a9d2*/
  if ( v11 ) /*0x69a9d9*/
  {
    strncpy((char *)v8 + 88, v11, (IUnknown *)0x104); /*0x69a9e5*/
    *((_BYTE *)v8 + 347) = 0; /*0x69a9ed*/
  }
  else
  {
    strcpy((char *)v8 + 88, &stru_830620.__pad_579C[39068]); /*0x69aa12*/
    v8 = Destination; /*0x69aa1b*/
  }
  if ( aP2 ) /*0x69aa25*/
  {
    wcsncpy(v8, (const wchar_t *)aP2, (DropListClass *)0x2C); /*0x69aa2b*/
    v8[43] = 0; /*0x69aa33*/
  }
  else
  {
    StringCSF = GetStringCSF( /*0x69aa4c*/
                  (wchar_t *)&stru_830620.__pad_579C[38652],
                  0,
                  (CampaignScore *)&stru_830620.__pad_579C[37116],
                  2845);
    wcscpy(v8, StringCSF); /*0x69aa53*/
  }
  if ( aP3 ) /*0x69aa61*/
  {
    strncpy((char *)v8 + 348, aP3->__pad_0, (IUnknown *)0x20); /*0x69aa6d*/
    *((_BYTE *)v8 + 379) = 0; /*0x69aa75*/
  }
  else
  {
    strcpy((char *)v8 + 348, &stru_830620.__pad_579C[38440]); /*0x69aa9d*/
    v8 = Destination; /*0x69aaa6*/
  }
  v13 = (char)aP4; /*0x69aaae*/
  v14 = a8; /*0x69aab2*/
  *((_DWORD *)v8 + 96) = aP6; /*0x69aab6*/
  v15 = (void (__thiscall **)(VectorClass *))v9->vtable0; /*0x69aabc*/
  *((_BYTE *)v8 + 380) = v13; /*0x69aabe*/
  *((_DWORD *)v8 + 97) = v14; /*0x69aac6*/
  v15[3](v9); /*0x69aacc*/
  v16 = (char *)v9->Capacity; /*0x69aacf*/
  if ( (int)v9[1].vtable0 < (int)v16 /*0x69aaf4*/
    || (v9->IsAllocated || !v16)
    && (v17 = (int)v9[1].Items, v17 > 0)
    && (*((unsigned __int8 (__thiscall **)(VectorClass *, char *, _DWORD))v9->vtable0 + 2))(v9, &v16[v17], 0) )
  {
    v18 = v9[1].vtable0; /*0x69aafb*/
    v19 = v9->Items; /*0x69aafe*/
    v9[1].vtable0 = (char *)v18 + 1; /*0x69ab04*/
    v19[(_DWORD)v18] = -2; /*0x69ab07*/
  }
  if ( a5 ) /*0x69ab14*/
  {
    String::Assign(&Source, a5); /*0x69ab1f*/
    if ( String::Length((const char **)&Source) ) /*0x69ab28*/
    {
      unknown_libname_73(&aP4); /*0x69ab39*/
      for ( i = (ObjectClass *)String::Tokenize( /*0x69ab58*/
                                 (const char **)&Source,
                                 0,
                                 (ObjectClass *)&stru_817F40.nextObject,
                                 (ObjectClass *)&aP4);
            i != (ObjectClass *)-1;
            i = (ObjectClass *)String::Tokenize(
                                 (const char **)&Source,
                                 (int)i,
                                 (ObjectClass *)&stru_817F40.nextObject,
                                 (ObjectClass *)&aP4) )
      {
        String::Assign((char **)&aP2, &stru_830620.__pad_3BC[56]); /*0x69ab67*/
        String::TrimLeft((const char **)&aP4, (ObjectClass *)&aP2); /*0x69ab75*/
        DeleteAndZero((void **)&aP2); /*0x69ab7e*/
        String::Assign((char **)&aP3, &stru_830620.__pad_3BC[56]); /*0x69ab8c*/
        String::TrimRight((const char **)&aP4, (ObjectClass *)&aP3); /*0x69ab9a*/
        DeleteAndZero((void **)&aP3); /*0x69aba3*/
        v21 = (CampaignScore *)*((_DWORD *)v10 + 2); /*0x69aba8*/
        if ( *((_DWORD *)v10 + 4) >= (int)v21 ) /*0x69abb0*/
        {
          if ( !*((_BYTE *)v10 + 13) && v21 ) /*0x69abbb*/
            continue; /*0x69abbb*/
          v22 = *((_DWORD *)v10 + 5); /*0x69abbd*/
          if ( v22 <= 0 /*0x69abce*/
            || !(*(unsigned __int8 (__thiscall **)(wchar_t *, char *, _DWORD))(*(_DWORD *)v10 + 8))(
                  v10,
                  &v21->__pad_0[v22],
                  0) )
          {
            continue; /*0x69abce*/
          }
        }
        v23 = (ObjectClass *)*((_DWORD *)v10 + 4); /*0x69abd5*/
        *((_DWORD *)v10 + 4) = &v23->__pad_0[1]; /*0x69abe0*/
        String::Reassign((char **)(*((_DWORD *)v10 + 1) + 4 * (_DWORD)v23), (AbstractClass *)&aP4); /*0x69abe9*/
      }
      DeleteAndZero((void **)&aP4); /*0x69ac11*/
    }
    DeleteAndZero((void **)&Source); /*0x69ac1a*/
  }
  return v8; /*0x69ac21*/
}


// ==== 0x0069AC30  ScenarioClass::CheckExists  this=AbstractClass  sig=csp ====
char __thiscall ScenarioClass_CheckExists(int *this, int a2)
{
  _DWORD *v2; // eax
  char v3; // bl
  int v5; // edx
  int v6; // eax
  _DWORD *v7; // esi
  int v8; // edx
  int v9; // eax
  _DWORD *i; // ecx
  int v11[9]; // [esp+Ch] [ebp-24h] BYREF

  if ( a2 == -2 ) /*0x69ac3d*/
  {
    v2 = RawFileClass::Construct(v11, (int)(this + 22)); /*0x69ac47*/
    v3 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 20))(v2, 0); /*0x69ac59*/
    RawFileClass::Dtor(v11); /*0x69ac5b*/
    return v3; /*0x69ac68*/
  }
  v5 = this->q066; /*0x69ac6b*/
  v6 = 0; /*0x69ac71*/
  if ( v5 <= 0 ) /*0x69ac75*/
  {
LABEL_7:
    v8 = this->q066; /*0x69ac8a*/
    v9 = 0; /*0x69ac90*/
    if ( v8 <= 0 ) /*0x69ac94*/
      return 0; /*0x69acb0*/
    for ( i = (_DWORD *)this->u8_63; *i != a2; ++i ) /*0x69ac96*/
    {
      if ( ++v9 >= v8 ) /*0x69aca6*/
        return 0; /*0x69aca6*/
    }
  }
  else
  {
    v7 = (_DWORD *)this->u8_63; /*0x69ac77*/
    while ( *v7 != -1 ) /*0x69ac80*/
    {
      ++v6; /*0x69ac82*/
      ++v7; /*0x69ac83*/
      if ( v6 >= v5 ) /*0x69ac88*/
        goto LABEL_7; /*0x69ac88*/
    }
  }
  return 1; /*0x69ac60*/
}


// ==== 0x0069ACC0  GameOption::GetField  this=AbstractClass  sig=csp ====
int __thiscall GameOption::GetField(_DWORD **this)
{
  return *this->u8_63; /*0x69acc8*/
}


// ==== 0x0069ACD0  GameOption::SetDescriptionWStr  this=GameOption  sig=csp ====
wchar_t *__thiscall GameOption::SetDescriptionWStr(wchar_t *Destination, CampaignScore *aP1)
{
  wchar_t *result; // eax
  wchar_t *StringCSF; // eax

  if ( aP1 ) /*0x69acd9*/
  {
    result = wcsncpy(Destination, (const wchar_t *)aP1, (DropListClass *)0x2C); /*0x69acdf*/
    *(Destination + 43) = 0; /*0x69ace7*/
  }
  else
  {
    StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[38652], 0, &stru_830620.__pad_579C[37116], 2845); /*0x69ad02*/
    return wcscpy(Destination, StringCSF); /*0x69ad09*/
  }
  return result; /*0x69aced*/
}


// ==== 0x0069AD80  GameOption::SetDigest  this=GameOption  sig=csp ====
char *__thiscall GameOption::SetDigest(char *this, CCINIClass *aP1)
{
  char *result; // eax

  if ( aP1 ) /*0x69ad89*/
  {
    result = strncpy(this + 348, aP1->__pad_0, 0x20u); /*0x69ad95*/
    this->q17B = 0; /*0x69ad9d*/
  }
  else
  {
    result = (char *)(strlen(&stru_830620.__pad_579C[38440]) + 1); /*0x69adb3*/
    qmemcpy(this + 348, &stru_830620.__pad_579C[38440], (unsigned int)result); /*0x69adc8*/
  }
  return result; /*0x69ada4*/
}


// ==== 0x0069ADE0  ObjectClass::method_69ADE0  this=ObjectClass  sig=csp ====
char __thiscall sub_69ADE0(_BYTE *this, char a2)
{
  this->q17C = a2; /*0x69ade4*/
  return a2; /*0x69adea*/
}


// ==== 0x0069ADF0  IsRandMap::Sed  this=AbstractClass  sig=csp ====
BOOL __thiscall IsRandMap_Sed(int this)
{
  return _strcmpi((const void *)(this + 88), aRandmapSed) == 0; /*0x69ae06*/
}


// ==== 0x0069AE10  GameClass::initPlayerData  this=AbstractClass  sig=csp ====
bool __thiscall sub_69AE10(int *this, const char **a2)
{
  int v3; // eax
  int v5; // esi

  v3 = this->u32_1B4; /*0x69ae15*/
  if ( !v3 ) /*0x69ae1d*/
    return String::Equals_Alt(a2, MEMORY[0x83F668]); /*0x69ae28*/
  v5 = 0; /*0x69ae33*/
  if ( v3 <= 0 ) /*0x69ae37*/
    return 0; /*0x69ae5d*/
  while ( !String::Compare(a2, (const char **)(this->q6A0 + 4 * v5)) ) /*0x69ae50*/
  {
    if ( ++v5 >= this->u32_1B4 ) /*0x69ae5b*/
      return 0; /*0x69ae5b*/
  }
  return 1; /*0x69ae2d*/
}


// ==== 0x0069AE70  IsRandMap::Sed2  this=IsRandMap  sig=csp ====
BOOL __thiscall IsRandMap_Sed2(int this)
{
  return _strcmpi((const void *)(this + 1704), aRandmapSed) == 0; /*0x69ae89*/
}


// ==== 0x0069AE90  Multiplayer::ShowProgress  this=Multiplayer  sig=csp ====
void __thiscall Multiplayer_ShowProgress(_DWORD *this, int a2)
{
  double v3; // st7
  int i; // esi
  int v5; // esi
  int v6; // eax
  double v7; // st7
  int v8; // esi
  int v9; // eax
  DWORD Ticks; // [esp+8h] [ebp-1DCh]
  int v11; // [esp+14h] [ebp-1D0h]
  double v12; // [esp+14h] [ebp-1D0h]
  int v13[113]; // [esp+1Ch] [ebp-1C8h] BYREF
  __int16 v14; // [esp+1E0h] [ebp-4h]
  char v15; // [esp+1E2h] [ebp-2h]

  if ( !MEMORY[0xA8ED6B] ) /*0x69aea1*/
  {
    v11 = a2; /*0x69aeb4*/
    if ( *((_BYTE *)MEMORY[0xA8B230] + 13501) ) /*0x69aeb8*/
      v11 = a2 / 2; /*0x69aec7*/
    v12 = (double)v11; /*0x69aed6*/
    if ( Progress::GetWeighted(0) * 100.0 < v12 ) /*0x69aef1*/
      Network::UpdateLatencyDisplay(0, v12, NAN); /*0x69af0a*/
    if ( this->u32_284C != 1 ) /*0x69af16*/
    {
      Ticks = Timer::GetTicks(); /*0x69af26*/
      switch ( *this ) /*0x69af3e*/
      {
        case 1: /*0x69af3e*/
        case 2: /*0x69af3e*/
          memset(v13, 0, 250); /*0x69b099*/
          v13[0] = 108; /*0x69b0a2*/
          v7 = Progress::GetWeighted(0); /*0x69b0aa*/
          *(int *)((char *)&v13[6] + 1) = Math::RoundToInt(v7 * 100.0); /*0x69b0c0*/
          LOBYTE(v13[6]) = MEMORY[0xA8DB30]; /*0x69b0d5*/
          Stream::WriteBlock(v13, 250, 0); /*0x69b0d9*/
          Stream::ReadPacket(&MEMORY[0xA8EA70]); /*0x69b0e3*/
          while ( Count::GetCountQueue(&MEMORY[0xA8EA70]) > 5 ) /*0x69b0f5*/
          {
            v8 = 240; /*0x69b101*/
            if ( Ticks != -1 ) /*0x69b107*/
            {
              v9 = Timer::GetTicks() - Ticks; /*0x69b112*/
              if ( v9 >= 240 ) /*0x69b118*/
                goto LABEL_25; /*0x69b118*/
              v8 = 240 - v9; /*0x69b11a*/
            }
            if ( v8 <= 0 ) /*0x69b11e*/
              break; /*0x69b11e*/
            Sleep(0x14u); /*0x69b122*/
            EventQueue::Process(MEMORY[0x87F770]); /*0x69b12a*/
            Stream::ReadPacket(&MEMORY[0xA8EA70]); /*0x69b134*/
          }
          break; /*0x69b146*/
        case 3: /*0x69af3e*/
        case 4: /*0x69af3e*/
          memset(v13, 0, sizeof(v13)); /*0x69af52*/
          v14 = 0; /*0x69af54*/
          v15 = 0; /*0x69af56*/
          v13[0] = 15; /*0x69af5c*/
          v3 = Progress::GetWeighted(0); /*0x69af64*/
          *(int *)((char *)&v13[11] + 3) = Math::RoundToInt(v3 * 100.0); /*0x69af7a*/
          strcpy((char *)&v13[1], ToWideStringChar(*(char **)MEMORY[0xA8DA78])); /*0x69af9e*/
          if ( (double)*(int *)((char *)&v13[11] + 3) >= 99.95 ) /*0x69afb6*/
          {
            for ( i = 1; i < MEMORY[0xA8DA84]; ++i ) /*0x69afdf*/
            {
              Debug::Log(MEMORY[0x83F674]); /*0x69afe6*/
              Network::SendToPlayer((int)v13, 51, 1, *(wchar_t **)(MEMORY[0xA8DA78] + 4 * i)); /*0x69b006*/
            }
          }
          else
          {
            Network::SendMessage(v13, 51, 0, 0, 0, 0); /*0x69afcc*/
          }
          Event::Dispatch(); /*0x69b015*/
          while ( Network::GetQueueCount(&MEMORY[0xA8E9C0]) > 5 ) /*0x69b027*/
          {
            v5 = 240; /*0x69b037*/
            if ( Ticks != -1 ) /*0x69b03d*/
            {
              v6 = Timer::GetTicks() - Ticks; /*0x69b048*/
              if ( v6 >= 240 ) /*0x69b04e*/
                goto LABEL_25; /*0x69b04e*/
              v5 = 240 - v6; /*0x69b054*/
            }
            if ( v5 <= 0 ) /*0x69b058*/
              break; /*0x69b058*/
            Sleep(0x14u); /*0x69b060*/
            MessageLoop(); /*0x69b062*/
            Event::Dispatch(); /*0x69b067*/
          }
          break; /*0x69b079*/
        default:
          break;
      }
LABEL_25:
      Event::Dispatch(); /*0x69b148*/
    }
  }
}


// ==== 0x0069B170  ObjectClass::ParseAndApplyAlliances  this=ObjectClass  sig=csp ====
void __thiscall ParseAndApplyAlliances(_BYTE *this)
{
  bool v1; // zf
  int v2; // edx
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
  _DWORD *v16; // ecx
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
  int v27; // edx
  char *v28; // [esp+10h] [ebp-38h]
  void **v30; // [esp+18h] [ebp-30h] BYREF
  void *Block; // [esp+1Ch] [ebp-2Ch]
  int v32; // [esp+20h] [ebp-28h]
  int v33; // [esp+24h] [ebp-24h]
  int v34; // [esp+28h] [ebp-20h]
  int v35; // [esp+2Ch] [ebp-1Ch]
  void **v36; // [esp+30h] [ebp-18h] BYREF
  void *v37; // [esp+34h] [ebp-14h]
  int v38; // [esp+38h] [ebp-10h]
  char v39; // [esp+3Dh] [ebp-Bh]
  int v40; // [esp+40h] [ebp-8h]
  int v41; // [esp+44h] [ebp-4h]

  v1 = *(_DWORD *)this == 4; /*0x69b176*/
  this->q688 = 0; /*0x69b17d*/
  if ( v1 ) /*0x69b184*/
  {
    v2 = *(_DWORD *)MEMORY[0xA8B230]; /*0x69b199*/
    BYTE1(v2) = BYTE1(*(_DWORD *)MEMORY[0xA8B230]) & 0xFB; /*0x69b19b*/
    *(_DWORD *)MEMORY[0xA8B230] = v2; /*0x69b19e*/
    Debug::Log(); /*0x69b1a0*/
    Debug::Log(); /*0x69b1af*/
    if ( strlen(&byte_B77A04) ) /*0x69b1c1*/
    {
      if ( strlen(byte_B76568) ) /*0x69b1d1*/
      {
        ParseAndApplyAlliances_Parse(0, 0); /*0x69b1ea*/
        v36 = &vt_DynamicVectorClass_HouseClass; /*0x69b1ff*/
        v41 = 10; /*0x69b203*/
        v40 = 0; /*0x69b207*/
        ParseAndApplyAlliances_Parse(0, 0); /*0x69b20b*/
        v30 = &vt_DynamicVectorClass_HouseClass; /*0x69b210*/
        v35 = 10; /*0x69b232*/
        v34 = 0; /*0x69b238*/
        v3 = &byte_B77A04; /*0x69b23c*/
        if ( strlen(&byte_B77A04) <= strlen(byte_B76568) ) /*0x69b241*/
          v3 = byte_B76568; /*0x69b243*/
        v4 = (char *)__2_YAPAXI_Z(strlen(v3) + 32); /*0x69b25b*/
        strcpy(v4, &byte_B77A04); /*0x69b27c*/
        v28 = v4; /*0x69b280*/
        for ( i = strtok(v4, MEMORY[0x817F70]); i; i = strtok(0, MEMORY[0x817F70]) ) /*0x69b295*/
        {
          if ( !*i ) /*0x69b29b*/
            break; /*0x69b29f*/
          for ( j = 0; j < HouseClass_Count; ++j ) /*0x69b2ae*/
          {
            v7 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * j]; /*0x69b2b6*/
            if ( *(_BYTE *)(v7 + 492) /*0x69b304*/
              && !_strcmpi((const void *)(v7 + 90100), i)
              && (v40 < v38
               || (v39 || !v38)
               && v41 > 0
               && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v36[2])(&v36, v41 + v38, 0)) )
            {
              v8 = v40++; /*0x69b30f*/
              *((_DWORD *)v37 + v8) = v7; /*0x69b31a*/
            }
          }
        }
        strcpy(v4, byte_B76568); /*0x69b35f*/
        for ( k = strtok(v4, MEMORY[0x817F70]); k; k = strtok(0, MEMORY[0x817F70]) ) /*0x69b374*/
        {
          if ( !*k ) /*0x69b37a*/
            break; /*0x69b37e*/
          for ( m = 0; m < HouseClass_Count; ++m ) /*0x69b38d*/
          {
            v11 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * m]; /*0x69b394*/
            if ( *(_BYTE *)(v11 + 492) /*0x69b3e2*/
              && !_strcmpi((const void *)(v11 + 90100), k)
              && (v34 < v32
               || (BYTE1(v33) || !v32)
               && v35 > 0
               && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v30[2])(&v30, v35 + v32, 0)) )
            {
              v12 = v34++; /*0x69b3ed*/
              *((_DWORD *)Block + v12) = v11; /*0x69b3f8*/
            }
          }
        }
        v13 = v40; /*0x69b41e*/
        v14 = v40; /*0x69b422*/
        if ( v40 > 1 ) /*0x69b427*/
        {
          v15 = 0; /*0x69b429*/
          v16 = v37; /*0x69b42f*/
          v17 = 0; /*0x69b433*/
          do /*0x69b46d*/
          {
            v18 = 0; /*0x69b435*/
            if ( v14 > 0 ) /*0x69b439*/
            {
              do /*0x69b45f*/
              {
                v19 = v16[v18]; /*0x69b43e*/
                if ( *(_DWORD *)(v16[v17] + 48) != *(_DWORD *)(v19 + 48) ) /*0x69b447*/
                {
                  HouseClass::HandleAlliance(v16[v17], v19, 0); /*0x69b44f*/
                  v13 = v40; /*0x69b454*/
                  v16 = v37; /*0x69b458*/
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
        v20 = v34; /*0x69b46f*/
        v21 = v34; /*0x69b473*/
        if ( v34 > 1 ) /*0x69b478*/
        {
          v22 = 0; /*0x69b47a*/
          v23 = Block; /*0x69b480*/
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
                  HouseClass::HandleAlliance(v23[v24], v26, 0); /*0x69b4a0*/
                  v20 = v34; /*0x69b4a5*/
                  v23 = Block; /*0x69b4a9*/
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
        this->q688 = 1; /*0x69b4d4*/
        v27 = *(_DWORD *)MEMORY[0xA8B230]; /*0x69b4e0*/
        BYTE1(v27) = BYTE1(*(_DWORD *)MEMORY[0xA8B230]) | 4; /*0x69b4e2*/
        *(_DWORD *)MEMORY[0xA8B230] = v27; /*0x69b4e5*/
        v30 = &vt_VectorClass_HouseClass; /*0x69b4ed*/
        if ( Block && BYTE1(v33) ) /*0x69b4f9*/
        {
          __3_YAXPAX_Z(Block); /*0x69b4fc*/
          Block = 0; /*0x69b504*/
        }
        v36 = &vt_VectorClass_HouseClass; /*0x69b50c*/
        BYTE1(v33) = 0; /*0x69b514*/
        v32 = 0; /*0x69b519*/
        if ( v37 ) /*0x69b51e*/
        {
          if ( v39 ) /*0x69b526*/
            __3_YAXPAX_Z(v37); /*0x69b529*/
        }
      }
    }
  }
}


// ==== 0x0069B540  Network::processGameEvent  this=Network  sig=csp ====
_DWORD *__thiscall sub_69B540(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // ecx

  this->q024 = 0; /*0x69b540*/
  result = this + 27; /*0x69b547*/
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
bool __thiscall sub_69B560(void *this, int a2)
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
      && (*(int (__stdcall **)(int, void *, int, _DWORD))(*(_DWORD *)v2 + 16))(v2, this, a2, 0) >= 0 )
    {
      return 1; /*0x69b56a*/
    }
  }
  return result; /*0x69b599*/
}


// ==== 0x0069B5B0  LoadGame::LoadBlock300  this=LoadGame  sig=csp ====
bool __thiscall sub_69B5B0(_DWORD *this, int a2)
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
      v4 = (*(int (__stdcall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, this, 300, 0); /*0x69b5e4*/
      this->q004 = -1; /*0x69b5e9*/
      if ( v4 >= 0 ) /*0x69b5f0*/
        return 1; /*0x69b5ba*/
    }
  }
  return result; /*0x69b5f2*/
}


// ==== 0x0069B600  NetworkSession::IsPlayerInGame  this=NetworkSession  sig=csp ====
char __thiscall NetworkSession::IsPlayerInGame(_DWORD *this, int a2)
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
  v2 = this->q284C; /*0x69b60c*/
  v3 = 0; /*0x69b612*/
  if ( v2 <= 0 ) /*0x69b616*/
  {
LABEL_10:
    v7 = 0; /*0x69b642*/
    for ( i = this + 33; *i != a2; ++i ) /*0x69b644*/
    {
      if ( ++v7 >= 8 ) /*0x69b655*/
        return 0; /*0x69b655*/
    }
  }
  else
  {
    v4 = (int *)this->q2840; /*0x69b618*/
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
int __thiscall sub_69B690(_DWORD *this)
{
  int result; // eax
  int v3; // edi
  int v4; // edx
  int *v5; // esi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  _DWORD *i; // edx

  while ( 1 ) /*0x69b6aa*/
  {
    result = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 7); /*0x69b6aa*/
    if ( result == -2 ) /*0x69b6b1*/
      return result; /*0x69b6fa*/
    v3 = this->qA13; /*0x69b6b3*/
    v4 = 0; /*0x69b6b9*/
    if ( v3 <= 0 ) /*0x69b6bd*/
    {
LABEL_10:
      v8 = 0; /*0x69b6e5*/
      for ( i = this + 33; *i != result; ++i ) /*0x69b6e7*/
      {
        if ( ++v8 >= 8 ) /*0x69b6f8*/
          return result; /*0x69b6f8*/
      }
    }
    else
    {
      v5 = (int *)this->qA10; /*0x69b6bf*/
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
int __thiscall Session_GetPlayerOption(_DWORD *this)
{
  int result; // eax

  result = -2; /*0x69b706*/
  if ( this->q178 != -2 ) /*0x69b70d*/
    return this->q174; /*0x69b70f*/
  return result; /*0x69b715*/
}


// ==== 0x0069B720  Session::GetPlayerColor  this=Session  sig=csp ====
int __thiscall Session_GetPlayerColor(_DWORD *this)
{
  int result; // eax

  result = -2; /*0x69b726*/
  if ( this->q160 != -2 ) /*0x69b72d*/
    return this->q15C; /*0x69b72f*/
  return result; /*0x69b735*/
}


// ==== 0x0069B760  SessionClass::AssignSide  this=SessionClass  sig=csp ====
int __thiscall SessionClass::AssignSide(_DWORD *this, int a2, MPCooperative *aP2)
{
  int result; // eax
  int v5; // edx

  result = a2; /*0x69b760*/
  if ( a2 == -2 ) /*0x69b76a*/
  {
    LOBYTE(result) = (_BYTE)aP2; /*0x69b76c*/
    if ( (_BYTE)aP2 ) /*0x69b772*/
    {
      result = Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)9); /*0x69b783*/
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
  v5 = this->Side2; /*0x69b7c6*/
  this->idxSide = this->Side; /*0x69b7cc*/
  this->idxSide2 = v5; /*0x69b7d2*/
  return result; /*0x69b7d8*/
}


// ==== 0x0069B7E0  SessionClass::AssignColor  this=SessionClass  sig=csp ====
int __thiscall SessionClass::AssignColor(_DWORD *this, int a2, MPCooperative *aP2)
{
  int result; // eax
  int v5; // edi
  int v6; // edx
  int *v7; // esi
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  _DWORD *v11; // edx
  int v12; // edx

  result = a2; /*0x69b7e0*/
  if ( a2 == -2 ) /*0x69b7ef*/
  {
    LOBYTE(result) = (_BYTE)aP2; /*0x69b7f5*/
    if ( (_BYTE)aP2 ) /*0x69b7fb*/
    {
      while ( 1 ) /*0x69b80e*/
      {
        result = Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)7); /*0x69b80e*/
        if ( result == -2 ) /*0x69b815*/
          break; /*0x69b815*/
        v5 = this->u32_284C; /*0x69b817*/
        v6 = 0; /*0x69b81d*/
        if ( v5 <= 0 ) /*0x69b821*/
        {
LABEL_12:
          v10 = 0; /*0x69b849*/
          v11 = this + 33; /*0x69b84b*/
          while ( *v11 != result ) /*0x69b853*/
          {
            ++v10; /*0x69b855*/
            ++v11; /*0x69b856*/
            if ( v10 >= 8 ) /*0x69b85c*/
              goto LABEL_15; /*0x69b85c*/
          }
        }
        else
        {
          v7 = (int *)this->u32_2840; /*0x69b823*/
          while ( 1 ) /*0x69b829*/
          {
            v8 = *v7; /*0x69b829*/
            if ( *(_DWORD *)(*v7 + 87) == -2 && *(_DWORD *)(v8 + 83) == -1 ) /*0x69b834*/
              v9 = -2; /*0x69b836*/
            else
              v9 = *(_DWORD *)(v8 + 83); /*0x69b83a*/
            if ( v9 == result ) /*0x69b83f*/
              break; /*0x69b83f*/
            ++v6; /*0x69b841*/
            ++v7; /*0x69b842*/
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
  v12 = this->Color2; /*0x69b896*/
  this->u32_15C = this->Color; /*0x69b89c*/
  this->q160 = v12; /*0x69b8a2*/
  return result; /*0x69b8a8*/
}


// ==== 0x0069B8B0  nullsub_229  this=-  sig=csp ====
void __stdcall nullsub_229(int a1, int a2)
{
  ; /*0x69b8b0*/
}


// ==== 0x0069B8C0  Player::RandomAssign  this=Player  sig=csp ====
void __thiscall Player_RandomAssign(_DWORD *this)
{
  int v1; // ebp
  int i; // ebx
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  int *v7; // ebx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // esi
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v17; // [esp+14h] [ebp-4h]

  Debug::Log(); /*0x69b8d0*/
  v1 = MEMORY[0xA8DA84]; /*0x69b8d5*/
  for ( i = 0; i < v1; ++i ) /*0x69b8e2*/
  {
    v3 = *(_DWORD *)(MEMORY[0xA8DA78] + 4 * i); /*0x69b8f2*/
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
          *(_DWORD *)(v3 + 75) = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 9); /*0x69b935*/
      }
      if ( *(_DWORD *)(v3 + 87) == -2 ) /*0x69b941*/
      {
        *(_DWORD *)(v3 + 87) = -1; /*0x69b943*/
        *(_DWORD *)(v3 + 83) = -1; /*0x69b946*/
        do /*0x69b966*/
          v6 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 7); /*0x69b95e*/
        while ( (unsigned __int8)NetworkSession::IsPlayerInGame(v6) ); /*0x69b966*/
        *(_DWORD *)(v3 + 83) = v6; /*0x69b96f*/
      }
    }
    if ( !i ) /*0x69b989*/
      MEMORY[0xA8B394] = *(_DWORD *)(v3 + 83); /*0x69b98e*/
    ToWideStringChar((char *)v3); /*0x69b9b1*/
    Debug::Log(); /*0x69b9bd*/
  }
  v17 = 0; /*0x69b9ce*/
  v7 = MEMORY[0xA8B29C]; /*0x69b9d6*/
  do /*0x69baa0*/
  {
    if ( *v7 == -2 ) /*0x69b9e4*/
    {
      v8 = this->q004; /*0x69b9ea*/
      if ( v8 ) /*0x69b9ef*/
        v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 112))(v8); /*0x69b9f3*/
      else
        v9 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 9); /*0x69ba07*/
      *v7 = v9; /*0x69ba0c*/
    }
    if ( v7[8] == -2 ) /*0x69ba11*/
    {
      while ( 1 ) /*0x69ba23*/
      {
        v10 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 7); /*0x69ba23*/
        if ( v10 == -2 ) /*0x69ba2a*/
          break; /*0x69ba2a*/
        v11 = 0; /*0x69ba32*/
        if ( MEMORY[0xA8DA84] <= 0 ) /*0x69ba36*/
        {
LABEL_32:
          v15 = 33; /*0x69ba5e*/
          while ( MEMORY[0xA8B238][v15] != v10 ) /*0x69ba69*/
          {
            if ( ++v15 >= 41 ) /*0x69ba74*/
              goto LABEL_35; /*0x69ba74*/
          }
        }
        else
        {
          v12 = MEMORY[0xA8DA78]; /*0x69ba38*/
          while ( 1 ) /*0x69ba3e*/
          {
            v13 = *(_DWORD *)v12; /*0x69ba3e*/
            if ( *(_DWORD *)(*(_DWORD *)v12 + 87) == -2 && *(_DWORD *)(v13 + 83) == -1 ) /*0x69ba49*/
              v14 = -2; /*0x69ba4b*/
            else
              v14 = *(_DWORD *)(v13 + 83); /*0x69ba4f*/
            if ( v14 == v10 ) /*0x69ba54*/
              break; /*0x69ba54*/
            ++v11; /*0x69ba56*/
            v12 += 4; /*0x69ba57*/
            if ( v11 >= MEMORY[0xA8DA84] ) /*0x69ba5c*/
              goto LABEL_32; /*0x69ba5c*/
          }
        }
      }
LABEL_35:
      v7[8] = v10; /*0x69ba76*/
    }
    Debug::Log(); /*0x69ba8a*/
    ++v7; /*0x69ba92*/
    ++v17; /*0x69ba9c*/
  }
  while ( (int)v7 < (int)MEMORY[0xA8B2BC] ); /*0x69baa0*/
}


// ==== 0x0069BAB0  WTFMode::Init  this=WTFMode  sig=csp ====
char __thiscall WTFMode_Init(_BYTE *this)
{
  char result; // al

  result = this->q30D8; /*0x69bab0*/
  if ( !result ) /*0x69bab8*/
  {
    result = MEMORY[0xA8E9A0]; /*0x69babe*/
    if ( MEMORY[0xA8E9A0] ) /*0x69bac5*/
    {
      this->q30D8 = 1; /*0x69bac7*/
      if ( MEMORY[0x83ED20] == -1 ) /*0x69bad6*/
        MEMORY[0x83ED20] = *(_DWORD *)MEMORY[0xA8EB60]; /*0x69badd*/
      if ( !*(_DWORD *)this ) /*0x69bae2*/
        *(_DWORD *)MEMORY[0xA8EB60] = 2; /*0x69bae7*/
      if ( !*((_BYTE *)MEMORY[0xA8B230] + 13730) ) /*0x69baf7*/
      {
        Scenario::ClearScreen(); /*0x69bb01*/
        MEMORY[0xB07784] = (int)MEMORY[0xA8ED84] + 3; /*0x69bb0f*/
      }
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 28))(MEMORY[0x887640]) ) /*0x69bb1d*/
        (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 24))(MEMORY[0x887640]); /*0x69bb2c*/
      return EndBufferMixer((int *)MEMORY[0x87E758], 0x4000); /*0x69bb3a*/
    }
  }
  return result; /*0x69bb3f*/
}


// ==== 0x0069BB40  WTFMode::Shutdown  this=WTFMode  sig=csp ====
char __thiscall WTFMode_Shutdown(_BYTE *this)
{
  char result; // al

  result = this->q30D8; /*0x69bb40*/
  if ( result ) /*0x69bb48*/
  {
    this->q30D8 = 0; /*0x69bb4e*/
    if ( MEMORY[0x83ED20] != -1 ) /*0x69bb5d*/
    {
      *(_DWORD *)MEMORY[0xA8EB60] = MEMORY[0x83ED20]; /*0x69bb5f*/
      MEMORY[0x83ED20] = -1; /*0x69bb64*/
    }
    nullsub_19(); /*0x69bb6e*/
    AsyncIO::Shutdown(); /*0x69bb73*/
    AudioMixer::Shutdown(); /*0x69bb78*/
    AudioQueue::DrainAll(); /*0x69bb7d*/
    WTFMode_Cleanup(); /*0x69bb82*/
    ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x69bb87*/
    EndBufferMixer((int *)MEMORY[0x87E758], 0x4000); /*0x69bb97*/
    if ( MEMORY[0x887368] ) /*0x69bba4*/
      Tooltip::Enable((void *)MEMORY[0x887368], 0); /*0x69bba8*/
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 28))(MEMORY[0x887640]) ) /*0x69bbb5*/
      (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 20))(MEMORY[0x887640]); /*0x69bbc4*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x69bbcf*/
    MEMORY[0xB07784] = 0; /*0x69bbd2*/
  }
  return result; /*0x69bbdc*/
}


// ==== 0x0069BBE0  SessionClass::GetGameSpeed  this=SessionClass  sig=csp ====
char __thiscall SessionClass_GetGameSpeed(_BYTE *this)
{
  return this->CurrentlyInGame; /*0x69bbe6*/
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
__int16 __thiscall sub_69BC20(_WORD *this, int a2)
{
  int v2; // eax
  int i; // esi

  v2 = 0; /*0x69bc27*/
  if ( MEMORY[0xA8DA84] <= 0 ) /*0x69bc2d*/
    return 0; /*0x69bc48*/
  for ( i = MEMORY[0xA8DA78]; *(_DWORD *)(*(_DWORD *)i + 111) != a2; i += 4 ) /*0x69bc2f*/
  {
    if ( ++v2 >= MEMORY[0xA8DA84] ) /*0x69bc46*/
      return 0; /*0x69bc46*/
  }
  return *(this + v2 + 6205); /*0x69bc48*/
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
  v2 = (char **)&MEMORY[0xA8DA90]; /*0x69bc66*/
  while ( 1 ) /*0x69bc74*/
  {
    v3 = *v2; /*0x69bc74*/
    v4 = ToWideStringChar(*(char **)(MEMORY[0xA8DA78] + 4 * a1)); /*0x69bc80*/
    v5 = ToWideStringChar(v3); /*0x69bc82*/
    if ( !_strcmpi(v4, v5) ) /*0x69bc89*/
      break; /*0x69bc89*/
    ++v2; /*0x69bc95*/
    ++v1; /*0x69bc98*/
    if ( (int)v2 >= (int)&MEMORY[0xA8DAB0] ) /*0x69bc9f*/
      return 0; /*0x69bca7*/
  }
  return v1; /*0x69bca1*/
}


// ==== 0x0069BCC0  sub_69BCC0  this=-  sig=csp ====
int __stdcall sub_69BCC0(ObjectClass *aP0)
{
  ObjectClass *v1; // edi
  SessionClass *v2; // esi
  char *v3; // eax

  v1 = 0; /*0x69bcc7*/
  v2 = (SessionClass *)&HouseClass_Player.__pad_5568[18396]; /*0x69bcc9*/
  while ( 1 ) /*0x69bcd0*/
  {
    v3 = ToWideStringChar((IUnknown *)v2->GameMode[0]); /*0x69bcd0*/
    if ( !_strcmpi(aP0, v3) ) /*0x69bcd7*/
      break; /*0x69bcd7*/
    v2 = (SessionClass *)((char *)v2 + 4); /*0x69bce3*/
    v1 = (ObjectClass *)((char *)v1 + 1); /*0x69bce6*/
    if ( (int)v2 >= (int)&HouseClass_Player.__pad_5568[18428] ) /*0x69bced*/
      return 0; /*0x69bcf4*/
  }
  return (int)v1->__pad_0; /*0x69bcef*/
}


// ==== 0x0069BD00  sub_69BD00  this=-  sig=csp ====
int __stdcall sub_69BD00(int a1)
{
  int v1; // ebx
  char *v2; // esi
  char *v3; // edi
  char *v4; // eax

  v1 = 0; /*0x69bd07*/
  if ( MEMORY[0xA8DA84] <= 0 ) /*0x69bd0d*/
    return 0; /*0x69bd48*/
  while ( 1 ) /*0x69bd18*/
  {
    v2 = (char *)*(&MEMORY[0xA8DA90] + a1); /*0x69bd18*/
    v3 = ToWideStringChar(*(char **)(MEMORY[0xA8DA78] + 4 * v1)); /*0x69bd29*/
    v4 = ToWideStringChar(v2); /*0x69bd2b*/
    if ( !_strcmpi(v3, v4) ) /*0x69bd32*/
      break; /*0x69bd32*/
    if ( ++v1 >= MEMORY[0xA8DA84] ) /*0x69bd46*/
      return 0; /*0x69bd46*/
  }
  return v1; /*0x69bd48*/
}


// ==== 0x0069BD60  SessionClass::SetupNetwork  this=SessionClass  sig=csp ====
void __thiscall sub_69BD60(int this)
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
  int v42; // ebx
  char *v43; // edi
  char *v44; // eax
  _DWORD *v45; // ecx
  bool v46; // zf
  int v47; // eax
  __int16 v48; // [esp-Ch] [ebp-70h]
  int v49; // [esp+8h] [ebp-5Ch]
  int v50; // [esp+8h] [ebp-5Ch]
  int v51; // [esp+8h] [ebp-5Ch]
  int v52; // [esp+Ch] [ebp-58h]
  _DWORD v53[2]; // [esp+10h] [ebp-54h] BYREF
  void *v54; // [esp+18h] [ebp-4Ch]
  int v55; // [esp+1Ch] [ebp-48h]
  void *v56; // [esp+20h] [ebp-44h]
  int v57; // [esp+24h] [ebp-40h] BYREF
  int v58; // [esp+2Ch] [ebp-38h]
  int v59; // [esp+30h] [ebp-34h]
  _DWORD v60[3]; // [esp+34h] [ebp-30h] BYREF
  _DWORD v61[3]; // [esp+40h] [ebp-24h] BYREF
  void **v62; // [esp+4Ch] [ebp-18h] BYREF
  void *Block; // [esp+50h] [ebp-14h]
  int v64; // [esp+54h] [ebp-10h]
  char v65; // [esp+59h] [ebp-Bh]
  int v66; // [esp+5Ch] [ebp-8h]
  int v67; // [esp+60h] [ebp-4h]

  v1 = 0; /*0x69bd65*/
  v55 = 1; /*0x69bd6f*/
  AbstractClass::updateAnimationState(0, 0); /*0x69bd77*/
  v62 = &vt_DynamicVectorClass_NodeNameType; /*0x69bd81*/
  v67 = 10; /*0x69bd89*/
  v66 = 0; /*0x69bd91*/
  Debug::Log(); /*0x69bd95*/
  if ( *(int *)(this + 10316) < 2 ) /*0x69bda6*/
  {
    v62 = &vt_VectorClass_NodeNameType; /*0x69bdac*/
    MPCooperative::updateScoreBoard(&v62); /*0x69bdb4*/
    return; /*0x69bdbe*/
  }
  v52 = 0; /*0x69bdce*/
  memset((void *)(this + 11816), 0, 0x120u); /*0x69bdd2*/
  *(_BYTE *)(this + 12312) = 1; /*0x69bdd4*/
  if ( *(int *)(this + 10316) > 0 ) /*0x69bde3*/
  {
    do /*0x69be9c*/
    {
      v53[0] = 0; /*0x69bde9*/
      v3 = (char **)&MEMORY[0xA8DA90]; /*0x69bdf1*/
      while ( 1 ) /*0x69bdfb*/
      {
        v4 = *v3; /*0x69bdfb*/
        v54 = ToWideStringChar(*(char **)(MEMORY[0xA8DA78] + 4 * v1)); /*0x69be07*/
        v5 = ToWideStringChar(v4); /*0x69be0b*/
        if ( !_strcmpi(v54, v5) ) /*0x69be16*/
          break; /*0x69be16*/
        ++v3; /*0x69be26*/
        ++v53[0]; /*0x69be30*/
        if ( (int)v3 >= (int)&MEMORY[0xA8DAB0] ) /*0x69be34*/
        {
          v6 = 0; /*0x69be36*/
          goto LABEL_9; /*0x69be38*/
        }
      }
      v6 = v53[0]; /*0x69be3a*/
      if ( v53[0] >= 8u ) /*0x69be40*/
        goto LABEL_10; /*0x69be40*/
LABEL_9:
      Network::SetPort( /*0x69be47*/
        (_WORD *)(*(_DWORD *)(*(_DWORD *)(this + 10304) + 4 * v1) + 40),
        *(_WORD *)(this + 4 * v6 + 12280));
      ToWideStringChar(*(char **)(*(_DWORD *)(this + 10304) + 4 * v1)); /*0x69be6a*/
      Network::FormatAddress((unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)(this + 10304) + 4 * v1) + 40), 0); /*0x69be7f*/
      Debug::Log(); /*0x69be8b*/
LABEL_10:
      ++v1; /*0x69be93*/
    }
    while ( v1 < *(_DWORD *)(this + 10316) ); /*0x69be9c*/
  }
  v7 = *(_DWORD *)(this + 10316); /*0x69bea2*/
  v58 = 0; /*0x69beaa*/
  v59 = 0; /*0x69beb0*/
  v49 = 0; /*0x69beb4*/
  if ( v7 > 0 ) /*0x69beb8*/
  {
    v8 = v64; /*0x69bebe*/
    while ( 1 ) /*0x69bec2*/
    {
      v9 = 0x7FFFFFFF; /*0x69bec2*/
      v10 = 0; /*0x69bec7*/
      v11 = 0x7FFFFFFF; /*0x69becb*/
      if ( v7 <= 0 ) /*0x69becd*/
        break; /*0x69becd*/
      do /*0x69bef2*/
      {
        if ( !*((_BYTE *)&v58 + v10) && *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 10304) + 4 * v10) + 83) < v11 ) /*0x69bee9*/
        {
          v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 10304) + 4 * v10) + 83); /*0x69beeb*/
          v9 = v10; /*0x69beed*/
        }
        ++v10; /*0x69beef*/
      }
      while ( v10 < v7 ); /*0x69bef2*/
      if ( v9 == 0x7FFFFFFF ) /*0x69befa*/
        break; /*0x69befa*/
      v12 = *(_DWORD *)(this + 10304); /*0x69befc*/
      *((_BYTE *)&v58 + v9) = 1; /*0x69bf02*/
      v13 = (_DWORD *)(v12 + 4 * v9); /*0x69bf07*/
      if ( v66 < v8 ) /*0x69bf10*/
        goto LABEL_24; /*0x69bf10*/
      if ( !v65 && v8 || v67 <= 0 ) /*0x69bf24*/
        goto LABEL_26; /*0x69bf24*/
      if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v62[2])(&v62, v67 + v8, 0) ) /*0x69bf35*/
      {
LABEL_24:
        v14 = v66++; /*0x69bf44*/
        *((_DWORD *)Block + v14) = *v13; /*0x69bf4d*/
      }
      v8 = v64; /*0x69bf50*/
LABEL_26:
      v7 = *(_DWORD *)(this + 10316); /*0x69bf54*/
      if ( v66 != v7 && ++v49 < v7 ) /*0x69bf6d*/
        continue; /*0x69bf6d*/
      break; /*0x69bf6d*/
    }
  }
  v15 = 0; /*0x69bf73*/
  v58 = 0; /*0x69bf77*/
  v50 = 0; /*0x69bf7b*/
  v59 = 0; /*0x69bf7f*/
  for ( i = v66; v15 < i; v50 = v15 ) /*0x69bf89*/
  {
    if ( !*((_BYTE *)&v58 + v15) ) /*0x69bf8f*/
    {
      v17 = 0; /*0x69bf9f*/
      v18 = (_DWORD *)(*((_DWORD *)Block + v15) + 40); /*0x69bfa4*/
      v61[0] = *v18; /*0x69bfab*/
      v61[1] = v18[1]; /*0x69bfb2*/
      v61[2] = v18[2]; /*0x69bfb9*/
      if ( i > 0 ) /*0x69bfbd*/
      {
        v53[0] = this + 36 * v52 + 11816; /*0x69bfd1*/
        do /*0x69c1f5*/
        {
          if ( v17 != v15 && !*((_BYTE *)&v58 + v17) && NetworkID::Compare((int)v61, *((_DWORD *)Block + v17) + 40) ) /*0x69bff8*/
          {
            v54 = ToWideStringChar(*((char **)Block + v17)); /*0x69c011*/
            v19 = 0; /*0x69c015*/
            v20 = (char **)&MEMORY[0xA8DA90]; /*0x69c017*/
            while ( 1 ) /*0x69c01e*/
            {
              v21 = ToWideStringChar(*v20); /*0x69c01e*/
              if ( !_strcmpi(v54, v21) ) /*0x69c029*/
                break; /*0x69c029*/
              ++v20; /*0x69c039*/
              ++v19; /*0x69c03c*/
              if ( (int)v20 >= (int)&MEMORY[0xA8DAB0] ) /*0x69c043*/
              {
                v54 = 0; /*0x69c045*/
                goto LABEL_39; /*0x69c045*/
              }
            }
            v54 = v19; /*0x69c0f6*/
LABEL_39:
            v56 = ToWideStringChar(*((char **)Block + v50)); /*0x69c04d*/
            v22 = 0; /*0x69c061*/
            v23 = (char **)&MEMORY[0xA8DA90]; /*0x69c063*/
            while ( 1 ) /*0x69c06a*/
            {
              v24 = ToWideStringChar(*v23); /*0x69c06a*/
              if ( !_strcmpi(v56, v24) ) /*0x69c075*/
                break; /*0x69c075*/
              ++v23; /*0x69c081*/
              ++v22; /*0x69c084*/
              if ( (int)v23 >= (int)&MEMORY[0xA8DAB0] ) /*0x69c08b*/
              {
                v22 = 0; /*0x69c08d*/
                break; /*0x69c08d*/
              }
            }
            if ( *(_DWORD *)(this + 4 * (_DWORD)v54 + 12280) == *(_DWORD *)(this + 4 * v22 + 12280) ) /*0x69c0a3*/
            {
              v48 = v55++ + *(_WORD *)(this + 4 * (_DWORD)v54 + 12280); /*0x69c0b9*/
              Network::SetPort((_WORD *)(*((_DWORD *)Block + v17) + 40), v48); /*0x69c0c8*/
              v25 = (char **)Block; /*0x69c0cd*/
              *((_BYTE *)&v58 + v17) = 1; /*0x69c0d1*/
              ToWideStringChar(v25[v17]); /*0x69c0d9*/
            }
            Debug::Log(); /*0x69c0ec*/
            v26 = ToWideStringChar(*((char **)Block + v50)); /*0x69c121*/
            v27 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x69c123*/
            if ( !_strcmpi(v26, v27) ) /*0x69c12a*/
            {
              v56 = (void *)v53[0]; /*0x69c142*/
              v28 = (char *)*((_DWORD *)Block + v17); /*0x69c146*/
              ++v52; /*0x69c14d*/
              v53[0] += 36; /*0x69c151*/
              strcpy((char *)v56, ToWideStringChar(v28)); /*0x69c172*/
            }
            v29 = ToWideStringChar(*((char **)Block + v17)); /*0x69c18c*/
            v30 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x69c18e*/
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
          i = v66; /*0x69c1ee*/
          ++v17; /*0x69c1f2*/
        }
        while ( v17 < v66 ); /*0x69c1f5*/
      }
    }
    ++v15; /*0x69c1fb*/
  }
  if ( *(_DWORD *)(this + 12316) ) /*0x69c208*/
  {
    Debug::Log(); /*0x69c21c*/
    Network::SetPort((_WORD *)(**(_DWORD **)(this + 10304) + 40), *(_WORD *)(this + 12316)); /*0x69c237*/
    v54 = 0; /*0x69c23c*/
    v32 = (char **)&MEMORY[0xA8DA90]; /*0x69c244*/
    while ( 1 ) /*0x69c24e*/
    {
      v33 = *v32; /*0x69c24e*/
      v34 = ToWideStringChar(*(char **)MEMORY[0xA8DA78]); /*0x69c259*/
      v35 = ToWideStringChar(v33); /*0x69c25b*/
      if ( !_strcmpi(v34, v35) ) /*0x69c262*/
        break; /*0x69c262*/
      ++v32; /*0x69c276*/
      v54 = (char *)v54 + 1; /*0x69c280*/
      if ( (int)v32 >= (int)&MEMORY[0xA8DAB0] ) /*0x69c284*/
      {
        v36 = 0; /*0x69c286*/
        goto LABEL_58; /*0x69c286*/
      }
    }
    v36 = v54; /*0x69c48c*/
LABEL_58:
    Network::SetPort((_WORD *)(*(_DWORD *)(this + 4 * (_DWORD)v36 + 10328) + 40), *(_WORD *)(this + 12316)); /*0x69c288*/
  }
  v37 = 0; /*0x69c2a5*/
  if ( *(int *)(this + 10316) > 0 ) /*0x69c2a9*/
  {
    v38 = (_WORD *)(this + 12410); /*0x69c2ab*/
    do /*0x69c2d7*/
    {
      v39 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(this + 10304) + 4 * v37) + 40); /*0x69c2ba*/
      *v38 = v39; /*0x69c2c1*/
      if ( !v39 ) /*0x69c2c4*/
        *v38 = 1234; /*0x69c2c6*/
      ++v37; /*0x69c2d1*/
      ++v38; /*0x69c2d2*/
    }
    while ( v37 < *(_DWORD *)(this + 10316) ); /*0x69c2d7*/
  }
  v40 = (_DWORD *)(**(_DWORD **)(this + 10304) + 40); /*0x69c2e1*/
  v60[0] = *v40; /*0x69c2e6*/
  v60[1] = v40[1]; /*0x69c2f2*/
  v60[2] = v40[2]; /*0x69c2fd*/
  Network::CopyAddress_Small(&v57); /*0x69c301*/
  v51 = 1; /*0x69c313*/
  if ( *(int *)(this + 10316) > 1 ) /*0x69c317*/
  {
    v41 = 4; /*0x69c31d*/
    do /*0x69c430*/
    {
      if ( NetworkID::Compare((int)v60, *(_DWORD *)(v41 + *(_DWORD *)(this + 10304)) + 40) ) /*0x69c333*/
      {
        ToWideStringChar(*(char **)(v41 + *(_DWORD *)(this + 10304))); /*0x69c349*/
        Debug::Log(); /*0x69c354*/
        v42 = this + 10644; /*0x69c362*/
        v54 = (void *)(this + 10328); /*0x69c368*/
        v55 = 8; /*0x69c36c*/
        do /*0x69c416*/
        {
          v43 = *(char **)v54; /*0x69c381*/
          v56 = ToWideStringChar(*(char **)(v41 + *(_DWORD *)(this + 10304))); /*0x69c38a*/
          v44 = ToWideStringChar(v43); /*0x69c38e*/
          if ( !_strcmpi(v56, v44) ) /*0x69c399*/
          {
            Network::CopyAddress_Small(v53); /*0x69c3ac*/
            v45 = (_DWORD *)(*(_DWORD *)(v41 + *(_DWORD *)(this + 10304)) + 40); /*0x69c3be*/
            NetworkID::Assign(v45, 0, (int)v53, *(_WORD *)v45); /*0x69c3c8*/
            ToWideStringChar(*(char **)(v41 + *(_DWORD *)(this + 10304))); /*0x69c3d6*/
            Network::FormatAddress((unsigned __int16 *)(*(_DWORD *)(v41 + *(_DWORD *)(this + 10304)) + 40), 0); /*0x69c3eb*/
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
    while ( v51 < *(_DWORD *)(this + 10316) ); /*0x69c430*/
  }
  if ( MEMORY[0x887628] ) /*0x69c440*/
  {
    v47 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 112))(MEMORY[0x887628]); /*0x69c444*/
    LOWORD(v47) = *(_WORD *)(this + 12410); /*0x69c44d*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 92))(MEMORY[0x887628], v47); /*0x69c457*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 28))(MEMORY[0x887628]); /*0x69c462*/
  }
  v62 = &vt_VectorClass_NodeNameType; /*0x69c469*/
  if ( Block ) /*0x69c473*/
  {
    if ( v65 ) /*0x69c47b*/
      __3_YAXPAX_Z(Block); /*0x69c47e*/
  }
}


// ==== 0x0069C4A0  _TypeList_W4DiskID::ddtor  this=TypeList  sig=csp ====
void __thiscall SessionClass::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x69c4a6*/
  *(_DWORD *)(this + 16) = 0; /*0x69c4a9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x69c4b0*/
  {
    __3_YAXPAX_Z(v2); /*0x69c4b6*/
    *(_DWORD *)(this + 4) = 0; /*0x69c4be*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x69c4c1*/
  *(_DWORD *)(this + 8) = 0; /*0x69c4c4*/
}


// ==== 0x0069C4D0  _TypeList_W4DiskID::Write  this=TypeList  sig=csp ====
unsigned int __thiscall SessionClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x69c4d0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x69c4e5*/
  else
    return 0; /*0x69c4d7*/
}


// ==== 0x0069C4F0  _VectorClass_W4DiskID::Seek  this=VectorClass  sig=csp ====
int __thiscall SessionClass::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x69c4fa*/
}


// ==== 0x0069C500  _DynamicVectorClass_VWstring::ddtor  this=DynamicVector  sig=csp ====
void __thiscall MapFile::_vt03(int this)
{
  int v2; // eax
  int v3; // ecx
  void *v4; // ebx
  void **v5; // edi
  int v6; // ecx
  int v7; // ebp

  v2 = *(_DWORD *)(this + 4); /*0x69c505*/
  *(_DWORD *)(this + 16) = 0; /*0x69c508*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x69c50f*/
  {
    v3 = *(_DWORD *)(v2 - 4); /*0x69c51a*/
    v4 = (void *)(v2 - 4); /*0x69c51e*/
    v5 = (void **)(v2 + 4 * v3); /*0x69c522*/
    v6 = v3 - 1; /*0x69c525*/
    if ( v6 >= 0 ) /*0x69c526*/
    {
      v7 = v6 + 1; /*0x69c529*/
      do /*0x69c537*/
      {
        DeleteAndZero(--v5); /*0x69c531*/
        --v7; /*0x69c536*/
      }
      while ( v7 ); /*0x69c537*/
    }
    __3_YAXPAX_Z(v4); /*0x69c53b*/
    *(_DWORD *)(this + 4) = 0; /*0x69c547*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x69c54a*/
  *(_DWORD *)(this + 8) = 0; /*0x69c54e*/
}


// ==== 0x0069C560  _DynamicVectorClass_VWstring::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall MapFile::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x69c560*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x69c575*/
  else
    return 0; /*0x69c567*/
}


// ==== 0x0069C580  _VectorClass_VWstring::Clear  this=VectorClass  sig=csp ====
char **__thiscall VectorClass_Wstring::_vt06(_DWORD *this, char **a2, int a3)
{
  String::AssignFromPtr(a2, (const char **)(this->Items + 4 * a3)); /*0x69c592*/
  return a2; /*0x69c599*/
}


// ==== 0x0069C5A0  _DynamicVectorClass_PAVMultiMission::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_GlobalPacketType::sub_69C5A0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x69c5a6*/
  *(_DWORD *)(this + 16) = 0; /*0x69c5a9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x69c5b0*/
  {
    __3_YAXPAX_Z(v2); /*0x69c5b6*/
    *(_DWORD *)(this + 4) = 0; /*0x69c5be*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x69c5c1*/
  *(_DWORD *)(this + 8) = 0; /*0x69c5c4*/
}


// ==== 0x0069C5D0  _DynamicVectorClass_PAVMultiMission::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_GlobalPacketType::sub_69C5D0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x69c5d0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x69c5e5*/
  else
    return 0; /*0x69c5d7*/
}


// ==== 0x0069C5F0  _VectorClass_PAVMultiMission::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MultiMission::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x69c5fa*/
}


// ==== 0x0069C600  _DynamicVectorClass_PAUGlobalPacketType::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_GlobalPacketType::sub_69C600(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x69c606*/
  *(_DWORD *)(this + 16) = 0; /*0x69c609*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x69c610*/
  {
    __3_YAXPAX_Z(v2); /*0x69c616*/
    *(_DWORD *)(this + 4) = 0; /*0x69c61e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x69c621*/
  *(_DWORD *)(this + 8) = 0; /*0x69c624*/
}


// ==== 0x0069C630  _DynamicVectorClass_PAUGlobalPacketType::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_GlobalPacketType::sub_69C630(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x69c630*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x69c645*/
  else
    return 0; /*0x69c637*/
}


// ==== 0x0069C650  _VectorClass_PAUGlobalPacketType::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_GlobalPacketType::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x69c65a*/
}


// ==== 0x0069C660  VectorClass_ptr_GlobalPacketType::Destroy_1  this=VectorClass_ptr_GlobalPacketType  sig=csp ====
void __thiscall VectorClass_ptr_GlobalPacketType::sub_69C660(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x69c666*/
  *(_DWORD *)(this + 16) = 0; /*0x69c669*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x69c670*/
  {
    __3_YAXPAX_Z(v2); /*0x69c676*/
    *(_DWORD *)(this + 4) = 0; /*0x69c67e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x69c681*/
  *(_DWORD *)(this + 8) = 0; /*0x69c684*/
}


// ==== 0x0069C690  VectorClass_ptr_GlobalPacketType::GetItemIndex_1  this=VectorClass_ptr_GlobalPacketType  sig=csp ====
unsigned int __thiscall VectorClass_ptr_GlobalPacketType::sub_69C690(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x69c690*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x69c6a5*/
  else
    return 0; /*0x69c697*/
}


// ==== 0x0069C6B0  _VectorClass_PAVPhoneEntryClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PhoneEntryClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x69c6ba*/
}


// ==== 0x0069C6C0  _TypeList_W4DiskID::QueryInterface  this=TypeList  sig=csp ====
TypeList *__thiscall SessionClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x69c6c3*/
  *Block = &vt_VectorClass_enum_DiskID; /*0x69c6c6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x69c6d0*/
  {
    __3_YAXPAX_Z(v3); /*0x69c6d8*/
    *(Block + 1) = 0; /*0x69c6e0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x69c6eb*/
  *(Block + 2) = 0; /*0x69c6f1*/
  if ( (a2 & 1) != 0 ) /*0x69c6f8*/
    __3_YAXPAX_Z(Block); /*0x69c6fb*/
  return (TypeList *)Block; /*0x69c705*/
}


// ==== 0x0069C710  _VectorClass_W4DiskID::AddRef  this=VectorClass  sig=csp ====
char __thiscall SessionClass::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x69c712*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x69c71d*/
  {
    v3 = 0; /*0x69c71f*/
    if ( v2 <= 0 ) /*0x69c723*/
      return 1; /*0x69c743*/
    v4 = (_DWORD *)this->Items; /*0x69c725*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x69c72b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x69c734*/
    {
      ++v3; /*0x69c736*/
      ++v4; /*0x69c737*/
      if ( v3 >= v2 ) /*0x69c73c*/
        return 1; /*0x69c73c*/
    }
  }
  return 0; /*0x69c73e*/
}


// ==== 0x0069C750  _VectorClass_W4DiskID::addPlayer  this=VectorClass  sig=csp ====
char __thiscall SessionClass::sub_69C750(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x69c75c*/
  {
    this->IsInitialized = 0; /*0x69c766*/
    if ( a3 ) /*0x69c76c*/
      v4 = a3; /*0x69c782*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x69c77e*/
    this->IsInitialized = 1; /*0x69c786*/
    if ( v4 ) /*0x69c78a*/
    {
      if ( this->Items ) /*0x69c795*/
      {
        v6 = this->Capacity; /*0x69c79c*/
        if ( a2 < v6 ) /*0x69c7a1*/
          v6 = a2; /*0x69c7a3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x69c7a9*/
          ++i; /*0x69c7ae*/
        if ( this->IsAllocated ) /*0x69c7bb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x69c7c6*/
          this->Items = 0; /*0x69c7ce*/
        }
      }
      this->Items = v4; /*0x69c7d7*/
      this->Capacity = a2; /*0x69c7df*/
      this->IsAllocated = a3 == 0; /*0x69c7e2*/
      return 1; /*0x69c7e8*/
    }
    else
    {
      return 0; /*0x69c78f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x69c7f2*/
    return 1; /*0x69c7f8*/
  }
}


// ==== 0x0069C800  _VectorClass_W4DiskID::removePlayer  this=VectorClass  sig=csp ====
void __thiscall SessionClass::sub_69C800(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x69c80d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x69c813*/
    *(_DWORD *)(this + 4) = 0; /*0x69c81b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x69c81e*/
  *(_DWORD *)(this + 8) = 0; /*0x69c821*/
}


// ==== 0x0069C830  _VectorClass_W4DiskID::findPlayer  this=VectorClass  sig=csp ====
int __thiscall SessionClass::sub_69C830(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x69c830*/
    return 0; /*0x69c838*/
  v3 = *(_DWORD *)(this + 8); /*0x69c83e*/
  result = 0; /*0x69c841*/
  if ( v3 <= 0 ) /*0x69c845*/
    return -1; /*0x69c85c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x69c84b*/
  {
    if ( ++result >= v3 ) /*0x69c85a*/
      return -1; /*0x69c85a*/
  }
  return result; /*0x69c83a*/
}


// ==== 0x0069C870  _VectorClass_W4DiskID::updatePlayer  this=VectorClass  sig=csp ====
unsigned int __thiscall SessionClass::sub_69C870(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x69c870*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x69c885*/
  else
    return 0; /*0x69c877*/
}


// ==== 0x0069C890  _TypeList_W4DiskID::Release  this=TypeList  sig=csp ====
char __thiscall SessionClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x69c89c*/
  {
    this->IsInitialized = 0; /*0x69c8a2*/
    if ( a3 ) /*0x69c8a8*/
      v4 = a3; /*0x69c8be*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x69c8ba*/
    this->IsInitialized = 1; /*0x69c8c2*/
    if ( !v4 ) /*0x69c8c6*/
      return 0; /*0x69c93a*/
    if ( this->Items ) /*0x69c8c8*/
    {
      v5 = this->Capacity; /*0x69c8cf*/
      if ( a2 < v5 ) /*0x69c8d4*/
        v5 = a2; /*0x69c8d6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x69c8dc*/
        ++i; /*0x69c8e1*/
      if ( this->IsAllocated ) /*0x69c8ee*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x69c8f9*/
        this->Items = 0; /*0x69c901*/
      }
    }
    this->Items = v4; /*0x69c90a*/
    this->Capacity = a2; /*0x69c912*/
    this->IsAllocated = a3 == 0; /*0x69c915*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x69c91e*/
  }
  v7 = this->Capacity; /*0x69c921*/
  if ( v7 < this->Items ) /*0x69c929*/
    this->Items = v7; /*0x69c92b*/
  return 1; /*0x69c92e*/
}


// ==== 0x0069C940  _TypeList_W4DiskID::Read  this=TypeList  sig=csp ====
int __thiscall SessionClass::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x69c940*/
  result = 0; /*0x69c943*/
  if ( v2 <= 0 ) /*0x69c948*/
    return -1; /*0x69c95f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x69c94e*/
  {
    if ( ++result >= v2 ) /*0x69c95d*/
      return -1; /*0x69c95d*/
  }
  return result; /*0x69c962*/
}


// ==== 0x0069C970  _VectorClass_VWstring::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_Wstring::_vt01(int *this, int a2)
{
  int v3; // eax
  int v4; // esi

  v3 = this->Capacity; /*0x69c97c*/
  if ( v3 == *(_DWORD *)(a2 + 8) ) /*0x69c981*/
  {
    v4 = 0; /*0x69c983*/
    if ( v3 <= 0 ) /*0x69c987*/
      return 1; /*0x69c9b1*/
    while ( !VectorClass_Wstring::SetCapacity( /*0x69c9a2*/
               (const char **)(4 * v4 + this->Items),
               (const char **)(4 * v4 + *(_DWORD *)(a2 + 4))) )
    {
      if ( ++v4 >= this->Capacity ) /*0x69c9aa*/
        return 1; /*0x69c9aa*/
    }
  }
  return 0; /*0x69c9ac*/
}


// ==== 0x0069C9C0  _VectorClass_VWstring::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_Wstring::_vt02(_BYTE *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // esi
  _DWORD *v8; // esi
  int i; // esi
  int v11; // ecx
  int v12; // eax
  void *v13; // edx
  void **v14; // esi
  int v15; // eax
  int v16; // ebp
  int v17; // [esp+10h] [ebp-4h]
  int v18; // [esp+10h] [ebp-4h]
  void *v19; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x69c9c3*/
  if ( a2 ) /*0x69c9cd*/
  {
    this->IsInitialized = 0; /*0x69c9d7*/
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
      v5 = __2_YAPAXI_Z(4 * a2 + 4); /*0x69c9e7*/
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
    this->IsInitialized = 1; /*0x69ca4b*/
    if ( v6 ) /*0x69ca4f*/
    {
      if ( this->Items ) /*0x69ca5b*/
      {
        if ( a2 >= this->Capacity ) /*0x69ca67*/
          v3 = this->Capacity; /*0x69ca69*/
        for ( i = 0; i < v3; ++i ) /*0x69ca6f*/
          String::Reassign((char **)&v6[i], (const char **)(4 * i + this->Items)); /*0x69ca81*/
        if ( this->IsAllocated ) /*0x69ca8b*/
        {
          v11 = this->Items; /*0x69ca92*/
          if ( v11 ) /*0x69ca97*/
          {
            v12 = *(_DWORD *)(v11 - 4); /*0x69ca99*/
            v13 = (void *)(v11 - 4); /*0x69ca9c*/
            v19 = (void *)(v11 - 4); /*0x69ca9f*/
            v14 = (void **)(v11 + 4 * v12); /*0x69caa3*/
            v15 = v12 - 1; /*0x69caa6*/
            if ( v15 >= 0 ) /*0x69caa7*/
            {
              v16 = v15 + 1; /*0x69caa9*/
              do /*0x69cab7*/
              {
                DeleteAndZero(--v14); /*0x69cab1*/
                --v16; /*0x69cab6*/
              }
              while ( v16 ); /*0x69cab7*/
              v13 = v19; /*0x69cab9*/
            }
            __3_YAXPAX_Z(v13); /*0x69cabe*/
          }
          this->Items = 0; /*0x69cac6*/
        }
        v3 = a2; /*0x69cacd*/
      }
      this->Items = v6; /*0x69cadc*/
      this->Capacity = v3; /*0x69cadf*/
      this->IsAllocated = a3 == 0; /*0x69cae2*/
      return 1; /*0x69cae8*/
    }
    else
    {
      return 0; /*0x69ca54*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_BYTE *))(this->IsInitialized)(this); /*0x69caf3*/
    return 1; /*0x69caf9*/
  }
}


// ==== 0x0069CB00  _VectorClass_VWstring::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_Wstring::_vt03(int this)
{
  int v2; // eax
  int v3; // ecx
  void *v4; // ebx
  void **v5; // esi
  int v6; // ecx
  int v7; // ebp

  v2 = *(_DWORD *)(this + 4); /*0x69cb05*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x69cb0c*/
  {
    v3 = *(_DWORD *)(v2 - 4); /*0x69cb17*/
    v4 = (void *)(v2 - 4); /*0x69cb1b*/
    v5 = (void **)(v2 + 4 * v3); /*0x69cb1f*/
    v6 = v3 - 1; /*0x69cb22*/
    if ( v6 >= 0 ) /*0x69cb23*/
    {
      v7 = v6 + 1; /*0x69cb26*/
      do /*0x69cb34*/
      {
        DeleteAndZero(--v5); /*0x69cb2e*/
        --v7; /*0x69cb33*/
      }
      while ( v7 ); /*0x69cb34*/
    }
    __3_YAXPAX_Z(v4); /*0x69cb38*/
    *(_DWORD *)(this + 4) = 0; /*0x69cb44*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x69cb47*/
  *(_DWORD *)(this + 8) = 0; /*0x69cb4b*/
}


// ==== 0x0069CB50  _VectorClass_VWstring::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_Wstring::_vt04(int this, const char **a2)
{
  int v4; // esi

  if ( !*(_BYTE *)(this + 12) ) /*0x69cb55*/
    return 0; /*0x69cb5e*/
  v4 = 0; /*0x69cb67*/
  if ( *(int *)(this + 8) <= 0 ) /*0x69cb6b*/
    return -1; /*0x69cb89*/
  while ( !String::Compare((const char **)(*(_DWORD *)(this + 4) + 4 * v4), a2) ) /*0x69cb7f*/
  {
    if ( ++v4 >= *(_DWORD *)(this + 8) ) /*0x69cb87*/
      return -1; /*0x69cb87*/
  }
  return v4; /*0x69cb5c*/
}


// ==== 0x0069CBA0  _VectorClass_VWstring::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_Wstring::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x69cba0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x69cbb5*/
  else
    return 0; /*0x69cba7*/
}


// ==== 0x0069CBC0  _DynamicVectorClass_VWstring::Release  this=DynamicVector  sig=csp ====
char __thiscall MapFile::_vt02(void *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // edi
  _DWORD *v8; // edi
  int i; // edi
  int v10; // eax
  void *v11; // edi
  int v12; // eax
  int v14; // [esp+10h] [ebp-4h]
  int v15; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x69cbc3*/
  if ( a2 ) /*0x69cbcd*/
  {
    this->IsInitialized = 0; /*0x69cbd7*/
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
      v5 = __2_YAPAXI_Z(4 * a2 + 4); /*0x69cbe7*/
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
    this->IsInitialized = 1; /*0x69cc4b*/
    if ( !v6 ) /*0x69cc4f*/
      return 0; /*0x69ccf2*/
    if ( this->Items ) /*0x69cc55*/
    {
      if ( a2 >= this->q008 ) /*0x69cc61*/
        v3 = this->q008; /*0x69cc63*/
      for ( i = 0; i < v3; ++i ) /*0x69cc69*/
        String::Reassign((char **)&v6[i], (const char **)(4 * i + this->Items)); /*0x69cc7b*/
      if ( this->IsAllocated ) /*0x69cc85*/
      {
        v10 = this->Items; /*0x69cc8c*/
        if ( v10 ) /*0x69cc91*/
        {
          v11 = (void *)(v10 - 4); /*0x69cc96*/
          Array::ForEachReverse(v10, 4, *(_DWORD *)(v10 - 4), (int (__thiscall *)(int))DeleteAndZero); /*0x69cca2*/
          __3_YAXPAX_Z(v11); /*0x69cca8*/
        }
        this->Items = 0; /*0x69ccb0*/
      }
      v3 = a2; /*0x69ccb7*/
    }
    this->Items = v6; /*0x69ccc6*/
    this->q008 = v3; /*0x69ccc9*/
    this->IsAllocated = a3 == 0; /*0x69cccc*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x69ccd5*/
  }
  v12 = this->q008; /*0x69ccd8*/
  if ( v12 < this->Items ) /*0x69cce0*/
    this->Items = v12; /*0x69cce2*/
  return 1; /*0x69cce5*/
}


// ==== 0x0069CD00  _DynamicVectorClass_VWstring::Read  this=DynamicVector  sig=csp ====
int __thiscall MapFile::_vt04(_DWORD *this, const char **a2)
{
  int v3; // esi

  v3 = 0; /*0x69cd05*/
  if ( (int)this->q010 <= 0 ) /*0x69cd0c*/
    return -1; /*0x69cd2a*/
  while ( !String::Compare((const char **)(this->Items + 4 * v3), a2) ) /*0x69cd20*/
  {
    if ( ++v3 >= this->q010 ) /*0x69cd28*/
      return -1; /*0x69cd28*/
  }
  return v3; /*0x69cd2a*/
}


// ==== 0x0069CD40  _VectorClass_PAVMultiMission::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MultiMission::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x69cd42*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x69cd4d*/
  {
    v3 = 0; /*0x69cd4f*/
    if ( v2 <= 0 ) /*0x69cd53*/
      return 1; /*0x69cd73*/
    v4 = (_DWORD *)this->Items; /*0x69cd55*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x69cd5b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x69cd64*/
    {
      ++v3; /*0x69cd66*/
      ++v4; /*0x69cd67*/
      if ( v3 >= v2 ) /*0x69cd6c*/
        return 1; /*0x69cd6c*/
    }
  }
  return 0; /*0x69cd6e*/
}


// ==== 0x0069CD80  _VectorClass_PAVMultiMission::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MultiMission::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x69cd8c*/
  {
    this->IsInitialized = 0; /*0x69cd96*/
    if ( a3 ) /*0x69cd9c*/
      v4 = a3; /*0x69cdb2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x69cdae*/
    this->IsInitialized = 1; /*0x69cdb6*/
    if ( v4 ) /*0x69cdba*/
    {
      if ( this->Items ) /*0x69cdc5*/
      {
        v6 = this->Capacity; /*0x69cdcc*/
        if ( a2 < v6 ) /*0x69cdd1*/
          v6 = a2; /*0x69cdd3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x69cdd9*/
          ++i; /*0x69cdde*/
        if ( this->IsAllocated ) /*0x69cdeb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x69cdf6*/
          this->Items = 0; /*0x69cdfe*/
        }
      }
      this->Items = v4; /*0x69ce07*/
      this->Capacity = a2; /*0x69ce0f*/
      this->IsAllocated = a3 == 0; /*0x69ce12*/
      return 1; /*0x69ce18*/
    }
    else
    {
      return 0; /*0x69cdbf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x69ce22*/
    return 1; /*0x69ce28*/
  }
}


// ==== 0x0069CE30  _VectorClass_PAVMultiMission::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MultiMission::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x69ce3d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x69ce43*/
    *(_DWORD *)(this + 4) = 0; /*0x69ce4b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x69ce4e*/
  *(_DWORD *)(this + 8) = 0; /*0x69ce51*/
}


// ==== 0x0069CE60  _VectorClass_PAVMultiMission::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MultiMission::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x69ce60*/
    return 0; /*0x69ce68*/
  v3 = *(_DWORD *)(this + 8); /*0x69ce6e*/
  result = 0; /*0x69ce71*/
  if ( v3 <= 0 ) /*0x69ce75*/
    return -1; /*0x69ce8c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x69ce7b*/
  {
    if ( ++result >= v3 ) /*0x69ce8a*/
      return -1; /*0x69ce8a*/
  }
  return result; /*0x69ce6a*/
}


// ==== 0x0069CEA0  _VectorClass_PAVMultiMission::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MultiMission::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x69cea0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x69ceb5*/
  else
    return 0; /*0x69cea7*/
}


// ==== 0x0069CEC0  _DynamicVectorClass_PAVMultiMission::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_GlobalPacketType::sub_69CEC0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x69cecc*/
  {
    this->IsInitialized = 0; /*0x69ced2*/
    if ( a3 ) /*0x69ced8*/
      v4 = a3; /*0x69ceee*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x69ceea*/
    this->IsInitialized = 1; /*0x69cef2*/
    if ( !v4 ) /*0x69cef6*/
      return 0; /*0x69cf6a*/
    if ( this->Items ) /*0x69cef8*/
    {
      v5 = this->q008; /*0x69ceff*/
      if ( a2 < v5 ) /*0x69cf04*/
        v5 = a2; /*0x69cf06*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x69cf0c*/
        ++i; /*0x69cf11*/
      if ( this->IsAllocated ) /*0x69cf1e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x69cf29*/
        this->Items = 0; /*0x69cf31*/
      }
    }
    this->Items = v4; /*0x69cf3a*/
    this->q008 = a2; /*0x69cf42*/
    this->IsAllocated = a3 == 0; /*0x69cf45*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x69cf4e*/
  }
  v7 = this->q008; /*0x69cf51*/
  if ( v7 < this->Items ) /*0x69cf59*/
    this->Items = v7; /*0x69cf5b*/
  return 1; /*0x69cf5e*/
}


// ==== 0x0069CF70  _DynamicVectorClass_PAVMultiMission::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_GlobalPacketType::sub_69CF70(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x69cf70*/
  result = 0; /*0x69cf73*/
  if ( v2 <= 0 ) /*0x69cf78*/
    return -1; /*0x69cf8f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x69cf7e*/
  {
    if ( ++result >= v2 ) /*0x69cf8d*/
      return -1; /*0x69cf8d*/
  }
  return result; /*0x69cf92*/
}


// ==== 0x0069CFA0  _VectorClass_PAUGlobalPacketType::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_GlobalPacketType::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x69cfa2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x69cfad*/
  {
    v3 = 0; /*0x69cfaf*/
    if ( v2 <= 0 ) /*0x69cfb3*/
      return 1; /*0x69cfd3*/
    v4 = (_DWORD *)this->Items; /*0x69cfb5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x69cfbb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x69cfc4*/
    {
      ++v3; /*0x69cfc6*/
      ++v4; /*0x69cfc7*/
      if ( v3 >= v2 ) /*0x69cfcc*/
        return 1; /*0x69cfcc*/
    }
  }
  return 0; /*0x69cfce*/
}


// ==== 0x0069CFE0  _VectorClass_PAUGlobalPacketType::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_GlobalPacketType::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x69cfec*/
  {
    this->IsInitialized = 0; /*0x69cff6*/
    if ( a3 ) /*0x69cffc*/
      v4 = a3; /*0x69d012*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x69d00e*/
    this->IsInitialized = 1; /*0x69d016*/
    if ( v4 ) /*0x69d01a*/
    {
      if ( this->Items ) /*0x69d025*/
      {
        v6 = this->Capacity; /*0x69d02c*/
        if ( a2 < v6 ) /*0x69d031*/
          v6 = a2; /*0x69d033*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x69d039*/
          ++i; /*0x69d03e*/
        if ( this->IsAllocated ) /*0x69d04b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x69d056*/
          this->Items = 0; /*0x69d05e*/
        }
      }
      this->Items = v4; /*0x69d067*/
      this->Capacity = a2; /*0x69d06f*/
      this->IsAllocated = a3 == 0; /*0x69d072*/
      return 1; /*0x69d078*/
    }
    else
    {
      return 0; /*0x69d01f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x69d082*/
    return 1; /*0x69d088*/
  }
}


// ==== 0x0069D090  _VectorClass_PAUGlobalPacketType::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_GlobalPacketType::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x69d09d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x69d0a3*/
    *(_DWORD *)(this + 4) = 0; /*0x69d0ab*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x69d0ae*/
  *(_DWORD *)(this + 8) = 0; /*0x69d0b1*/
}


// ==== 0x0069D0C0  _VectorClass_PAUGlobalPacketType::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_GlobalPacketType::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x69d0c0*/
    return 0; /*0x69d0c8*/
  v3 = *(_DWORD *)(this + 8); /*0x69d0ce*/
  result = 0; /*0x69d0d1*/
  if ( v3 <= 0 ) /*0x69d0d5*/
    return -1; /*0x69d0ec*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x69d0db*/
  {
    if ( ++result >= v3 ) /*0x69d0ea*/
      return -1; /*0x69d0ea*/
  }
  return result; /*0x69d0ca*/
}


// ==== 0x0069D100  _VectorClass_PAUGlobalPacketType::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_GlobalPacketType::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x69d100*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x69d115*/
  else
    return 0; /*0x69d107*/
}


// ==== 0x0069D120  _DynamicVectorClass_PAUGlobalPacketType::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_GlobalPacketType::sub_69D120(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x69d12c*/
  {
    this->IsInitialized = 0; /*0x69d132*/
    if ( a3 ) /*0x69d138*/
      v4 = a3; /*0x69d14e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x69d14a*/
    this->IsInitialized = 1; /*0x69d152*/
    if ( !v4 ) /*0x69d156*/
      return 0; /*0x69d1ca*/
    if ( this->Items ) /*0x69d158*/
    {
      v5 = this->q008; /*0x69d15f*/
      if ( a2 < v5 ) /*0x69d164*/
        v5 = a2; /*0x69d166*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x69d16c*/
        ++i; /*0x69d171*/
      if ( this->IsAllocated ) /*0x69d17e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x69d189*/
        this->Items = 0; /*0x69d191*/
      }
    }
    this->Items = v4; /*0x69d19a*/
    this->q008 = a2; /*0x69d1a2*/
    this->IsAllocated = a3 == 0; /*0x69d1a5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x69d1ae*/
  }
  v7 = this->q008; /*0x69d1b1*/
  if ( v7 < this->Items ) /*0x69d1b9*/
    this->Items = v7; /*0x69d1bb*/
  return 1; /*0x69d1be*/
}


// ==== 0x0069D1D0  _DynamicVectorClass_PAUGlobalPacketType::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_GlobalPacketType::sub_69D1D0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x69d1d0*/
  result = 0; /*0x69d1d3*/
  if ( v2 <= 0 ) /*0x69d1d8*/
    return -1; /*0x69d1ef*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x69d1de*/
  {
    if ( ++result >= v2 ) /*0x69d1ed*/
      return -1; /*0x69d1ed*/
  }
  return result; /*0x69d1f2*/
}


// ==== 0x0069D200  _VectorClass_PAVPhoneEntryClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PhoneEntryClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x69d202*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x69d20d*/
  {
    v3 = 0; /*0x69d20f*/
    if ( v2 <= 0 ) /*0x69d213*/
      return 1; /*0x69d233*/
    v4 = (_DWORD *)this->Items; /*0x69d215*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x69d21b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x69d224*/
    {
      ++v3; /*0x69d226*/
      ++v4; /*0x69d227*/
      if ( v3 >= v2 ) /*0x69d22c*/
        return 1; /*0x69d22c*/
    }
  }
  return 0; /*0x69d22e*/
}


// ==== 0x0069D240  _VectorClass_PAVPhoneEntryClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PhoneEntryClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x69d24c*/
  {
    this->IsInitialized = 0; /*0x69d256*/
    if ( a3 ) /*0x69d25c*/
      v4 = a3; /*0x69d272*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x69d26e*/
    this->IsInitialized = 1; /*0x69d276*/
    if ( v4 ) /*0x69d27a*/
    {
      if ( this->Items ) /*0x69d285*/
      {
        v6 = this->Capacity; /*0x69d28c*/
        if ( a2 < v6 ) /*0x69d291*/
          v6 = a2; /*0x69d293*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x69d299*/
          ++i; /*0x69d29e*/
        if ( this->IsAllocated ) /*0x69d2ab*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x69d2b6*/
          this->Items = 0; /*0x69d2be*/
        }
      }
      this->Items = v4; /*0x69d2c7*/
      this->Capacity = a2; /*0x69d2cf*/
      this->IsAllocated = a3 == 0; /*0x69d2d2*/
      return 1; /*0x69d2d8*/
    }
    else
    {
      return 0; /*0x69d27f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x69d2e2*/
    return 1; /*0x69d2e8*/
  }
}


// ==== 0x0069D2F0  _VectorClass_PAVPhoneEntryClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_PhoneEntryClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x69d2fd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x69d303*/
    *(_DWORD *)(this + 4) = 0; /*0x69d30b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x69d30e*/
  *(_DWORD *)(this + 8) = 0; /*0x69d311*/
}


// ==== 0x0069D320  _VectorClass_PAVPhoneEntryClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PhoneEntryClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x69d320*/
    return 0; /*0x69d328*/
  v3 = *(_DWORD *)(this + 8); /*0x69d32e*/
  result = 0; /*0x69d331*/
  if ( v3 <= 0 ) /*0x69d335*/
    return -1; /*0x69d34c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x69d33b*/
  {
    if ( ++result >= v3 ) /*0x69d34a*/
      return -1; /*0x69d34a*/
  }
  return result; /*0x69d32a*/
}


// ==== 0x0069D360  _VectorClass_PAVPhoneEntryClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_PhoneEntryClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x69d360*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x69d375*/
  else
    return 0; /*0x69d367*/
}


// ==== 0x0069D380  VectorClass_ptr_GlobalPacketType::SetCapacity_1  this=VectorClass_ptr_GlobalPacketType  sig=csp ====
char __thiscall VectorClass_ptr_GlobalPacketType::sub_69D380(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x69d38c*/
  {
    this->IsInitialized = 0; /*0x69d392*/
    if ( a3 ) /*0x69d398*/
      v4 = a3; /*0x69d3ae*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x69d3aa*/
    this->IsInitialized = 1; /*0x69d3b2*/
    if ( !v4 ) /*0x69d3b6*/
      return 0; /*0x69d42a*/
    if ( this->Items ) /*0x69d3b8*/
    {
      v5 = this->Capacity; /*0x69d3bf*/
      if ( a2 < v5 ) /*0x69d3c4*/
        v5 = a2; /*0x69d3c6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x69d3cc*/
        ++i; /*0x69d3d1*/
      if ( this->IsAllocated ) /*0x69d3de*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x69d3e9*/
        this->Items = 0; /*0x69d3f1*/
      }
    }
    this->Items = v4; /*0x69d3fa*/
    this->Capacity = a2; /*0x69d402*/
    this->IsAllocated = a3 == 0; /*0x69d405*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x69d40e*/
  }
  v7 = this->Capacity; /*0x69d411*/
  if ( v7 < this->Items ) /*0x69d419*/
    this->Items = v7; /*0x69d41b*/
  return 1; /*0x69d41e*/
}


// ==== 0x0069D430  VectorClass_ptr_GlobalPacketType::FindItemIndex_1  this=VectorClass_ptr_GlobalPacketType  sig=csp ====
int __thiscall VectorClass_ptr_GlobalPacketType::sub_69D430(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x69d430*/
  result = 0; /*0x69d433*/
  if ( v2 <= 0 ) /*0x69d438*/
    return -1; /*0x69d44f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x69d43e*/
  {
    if ( ++result >= v2 ) /*0x69d44d*/
      return -1; /*0x69d44d*/
  }
  return result; /*0x69d452*/
}


// ==== 0x0069D460  _VectorClass_W4DiskID::validateGame  this=VectorClass  sig=csp ====
VectorClass *__thiscall SessionClass::validateGame(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x69d463*/
  *Block = &vt_VectorClass_enum_DiskID; /*0x69d466*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x69d470*/
  {
    __3_YAXPAX_Z(v3); /*0x69d478*/
    *(Block + 1) = 0; /*0x69d480*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x69d48b*/
  *(Block + 2) = 0; /*0x69d491*/
  if ( (a2 & 1) != 0 ) /*0x69d498*/
    __3_YAXPAX_Z(Block); /*0x69d49b*/
  return (VectorClass *)Block; /*0x69d4a5*/
}


// ==== 0x0069D4B0  _VectorClass_VWstring::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_Wstring::QueryInterface(_DWORD *Block, char a2)
{
  int v3; // eax
  int v4; // ecx
  void *v5; // ebx
  void **v6; // esi
  int v7; // ecx
  int v8; // ebp

  v3 = *(Block + 1); /*0x69d4b3*/
  *Block = &vt_VectorClass_Wstring; /*0x69d4b6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x69d4c0*/
  {
    v4 = *(_DWORD *)(v3 - 4); /*0x69d4cb*/
    v5 = (void *)(v3 - 4); /*0x69d4cf*/
    v6 = (void **)(v3 + 4 * v4); /*0x69d4d3*/
    v7 = v4 - 1; /*0x69d4d6*/
    if ( v7 >= 0 ) /*0x69d4d7*/
    {
      v8 = v7 + 1; /*0x69d4da*/
      do /*0x69d4e8*/
      {
        DeleteAndZero(--v6); /*0x69d4e2*/
        --v8; /*0x69d4e7*/
      }
      while ( v8 ); /*0x69d4e8*/
    }
    __3_YAXPAX_Z(v5); /*0x69d4ec*/
    *(Block + 1) = 0; /*0x69d4f6*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x69d501*/
  *(Block + 2) = 0; /*0x69d507*/
  if ( (a2 & 1) != 0 ) /*0x69d50e*/
    __3_YAXPAX_Z(Block); /*0x69d511*/
  return (VectorClass *)Block; /*0x69d51b*/
}


// ==== 0x0069D520  _DynamicVectorClass_VWstring::QueryInterface  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall MapFile::QueryInterface(_DWORD *Block, char a2)
{
  int v3; // eax
  int v4; // ecx
  void *v5; // ebx
  void **v6; // esi
  int v7; // ecx
  int v8; // ebp

  v3 = *(Block + 1); /*0x69d523*/
  *Block = &vt_VectorClass_Wstring; /*0x69d526*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x69d530*/
  {
    v4 = *(_DWORD *)(v3 - 4); /*0x69d53b*/
    v5 = (void *)(v3 - 4); /*0x69d53f*/
    v6 = (void **)(v3 + 4 * v4); /*0x69d543*/
    v7 = v4 - 1; /*0x69d546*/
    if ( v7 >= 0 ) /*0x69d547*/
    {
      v8 = v7 + 1; /*0x69d54a*/
      do /*0x69d558*/
      {
        DeleteAndZero(--v6); /*0x69d552*/
        --v8; /*0x69d557*/
      }
      while ( v8 ); /*0x69d558*/
    }
    __3_YAXPAX_Z(v5); /*0x69d55c*/
    *(Block + 1) = 0; /*0x69d566*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x69d571*/
  *(Block + 2) = 0; /*0x69d577*/
  if ( (a2 & 1) != 0 ) /*0x69d57e*/
    __3_YAXPAX_Z(Block); /*0x69d581*/
  return (DynamicVector *)Block; /*0x69d58b*/
}


// ==== 0x0069D590  _VectorClass_PAVMultiMission::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_MultiMission::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x69d593*/
  *Block = &vt_VectorClass_MultiMission; /*0x69d596*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x69d5a0*/
  {
    __3_YAXPAX_Z(v3); /*0x69d5a8*/
    *(Block + 1) = 0; /*0x69d5b0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x69d5bb*/
  *(Block + 2) = 0; /*0x69d5c1*/
  if ( (a2 & 1) != 0 ) /*0x69d5c8*/
    __3_YAXPAX_Z(Block); /*0x69d5cb*/
  return (VectorClass *)Block; /*0x69d5d5*/
}


// ==== 0x0069D5E0  _DynamicVectorClass_PAVMultiMission::Constructor_VectorClass_MultiMission___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_GlobalPacketType::Constructor_VectorClass_MultiMission___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x69d5e3*/
  *Block = &vt_VectorClass_MultiMission; /*0x69d5e6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x69d5f0*/
  {
    __3_YAXPAX_Z(v3); /*0x69d5f8*/
    *(Block + 1) = 0; /*0x69d600*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x69d60b*/
  *(Block + 2) = 0; /*0x69d611*/
  if ( (a2 & 1) != 0 ) /*0x69d618*/
    __3_YAXPAX_Z(Block); /*0x69d61b*/
  return (DynamicVector *)Block; /*0x69d625*/
}


// ==== 0x0069D630  _VectorClass_PAUGlobalPacketType::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_GlobalPacketType::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x69d633*/
  *Block = &vt_VectorClass_GlobalPacketType; /*0x69d636*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x69d640*/
  {
    __3_YAXPAX_Z(v3); /*0x69d648*/
    *(Block + 1) = 0; /*0x69d650*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x69d65b*/
  *(Block + 2) = 0; /*0x69d661*/
  if ( (a2 & 1) != 0 ) /*0x69d668*/
    __3_YAXPAX_Z(Block); /*0x69d66b*/
  return (VectorClass *)Block; /*0x69d675*/
}


// ==== 0x0069D680  _DynamicVectorClass_PAUGlobalPacketType::Constructor_VectorClass_GlobalPacketType___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_GlobalPacketType::Constructor_VectorClass_GlobalPacketType___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x69d683*/
  *Block = &vt_VectorClass_GlobalPacketType; /*0x69d686*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x69d690*/
  {
    __3_YAXPAX_Z(v3); /*0x69d698*/
    *(Block + 1) = 0; /*0x69d6a0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x69d6ab*/
  *(Block + 2) = 0; /*0x69d6b1*/
  if ( (a2 & 1) != 0 ) /*0x69d6b8*/
    __3_YAXPAX_Z(Block); /*0x69d6bb*/
  return (DynamicVector *)Block; /*0x69d6c5*/
}


// ==== 0x0069D6D0  _VectorClass_PAVPhoneEntryClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_PhoneEntryClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x69d6d3*/
  *Block = &vt_VectorClass_PhoneEntryClass; /*0x69d6d6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x69d6e0*/
  {
    __3_YAXPAX_Z(v3); /*0x69d6e8*/
    *(Block + 1) = 0; /*0x69d6f0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x69d6fb*/
  *(Block + 2) = 0; /*0x69d701*/
  if ( (a2 & 1) != 0 ) /*0x69d708*/
    __3_YAXPAX_Z(Block); /*0x69d70b*/
  return (VectorClass *)Block; /*0x69d715*/
}


// ==== 0x0069D720  VectorClass_ptr_GlobalPacketType::loc_69D720  this=VectorClass_ptr_GlobalPacketType  sig=ida-proto ====
_DWORD *__thiscall VectorClass_ptr_GlobalPacketType::loc_69D720(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x69d723*/
  *Block = &vt_VectorClass_PhoneEntryClass; /*0x69d726*/
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
_DWORD *__thiscall sub_69D770(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x69d77b*/
  this->Capacity = a2; /*0x69d77e*/
  this->q030 = 1; /*0x69d781*/
  this->q034 = 0; /*0x69d785*/
  *this = &vt_VectorClass_enum_DiskID; /*0x69d788*/
  if ( a2 ) /*0x69d78e*/
  {
    if ( a3 ) /*0x69d796*/
    {
      this->Items = a3; /*0x69d798*/
      return this; /*0x69d79e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x69d7ad*/
    this->q034 = 1; /*0x69d7b0*/
  }
  return this; /*0x69d79d*/
}


// ==== 0x0069D7C0  VectorClass::WstringConstructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_Wstring_Constructor(_DWORD *this, int a2, _DWORD *a3)
{
  int v3; // esi
  _DWORD *v5; // ebp
  _DWORD *v7; // eax
  _DWORD *v8; // ebx
  _DWORD *v9; // ebp

  v3 = a2; /*0x69d7c3*/
  this->Items = 0; /*0x69d7cc*/
  this->Capacity = a2; /*0x69d7d3*/
  this->q030 = 1; /*0x69d7d6*/
  this->q034 = 0; /*0x69d7da*/
  *this = &vt_VectorClass_Wstring; /*0x69d7de*/
  if ( !a2 ) /*0x69d7e4*/
    return this; /*0x69d7e4*/
  if ( !a3 ) /*0x69d7ec*/
  {
    v7 = __2_YAPAXI_Z(4 * a2 + 4); /*0x69d820*/
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
        this->q034 = 1; /*0x69d84d*/
        return this; /*0x69d857*/
      }
    }
    else
    {
      v8 = 0; /*0x69d85a*/
    }
    this->Items = v8; /*0x69d85c*/
    this->q034 = 1; /*0x69d85f*/
    return this; /*0x69d863*/
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
  return this; /*0x69d811*/
}


// ==== 0x0069D870  VectorClass::ParseAndApplyAlliances_Parse  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_69D870(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x69d87b*/
  this->Capacity = a2; /*0x69d87e*/
  this->q030 = 1; /*0x69d881*/
  this->q034 = 0; /*0x69d885*/
  *this = &vt_VectorClass_HouseClass; /*0x69d888*/
  if ( a2 ) /*0x69d88e*/
  {
    if ( a3 ) /*0x69d896*/
    {
      this->Items = a3; /*0x69d898*/
      return this; /*0x69d89e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x69d8ad*/
    this->q034 = 1; /*0x69d8b0*/
  }
  return this; /*0x69d89d*/
}


// ==== 0x0069D8C0  SHA1::ProcessBlock  this=SHA1  sig=csp ====
int *__thiscall sub_69D8C0(_DWORD *this, const void **a2, int *a3)
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
      v6 = this->q030; /*0x69d8da*/
      if ( v6 || v5 < 64 ) /*0x69d8e4*/
      {
        v7 = 64 - v6; /*0x69d8eb*/
        if ( v5 < 64 - v6 ) /*0x69d8ef*/
          v7 = *a3; /*0x69d8f1*/
        qmemcpy((char *)this + v6 + 52, *a2, v7); /*0x69d8ff*/
        *a2 = (char *)*a2 + v7; /*0x69d911*/
        this->q030 += v7; /*0x69d91a*/
        *a3 -= v7; /*0x69d926*/
        result = (int *)this->q030; /*0x69d928*/
        if ( result == (int *)64 ) /*0x69d92d*/
        {
          SHA1::Transform(this + 13, this + 6); /*0x69d939*/
          v8 = this->q02C; /*0x69d93e*/
          this->q030 = 0; /*0x69d941*/
          result = (int *)(v8 + 64); /*0x69d948*/
          this->q02C = result; /*0x69d94a*/
        }
      }
    }
  }
  return result; /*0x69d94d*/
}


// ==== 0x0069D960  SHA1::Process  this=SHA1  sig=csp ====
int __thiscall SHA1_Process(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v5; // edi
  int v6; // ebx

  *(_BYTE *)this = 0; /*0x69d96f*/
  SHA1::ProcessBlock(&a2, &a3); /*0x69d972*/
  result = a3; /*0x69d977*/
  if ( a3 ) /*0x69d97d*/
  {
    v5 = a2; /*0x69d984*/
    if ( a3 / 64 > 0 ) /*0x69d98f*/
    {
      v6 = a3 / 64; /*0x69d996*/
      do /*0x69d9bb*/
      {
        SHA1::Transform(v5, this + 6); /*0x69d99c*/
        v5 += 64; /*0x69d9ab*/
        this->q02C += 64; /*0x69d9ad*/
        --v6; /*0x69d9b6*/
        a3 -= 64; /*0x69d9b7*/
      }
      while ( v6 ); /*0x69d9bb*/
    }
    a2 = v5; /*0x69d9cb*/
    return SHA1::ProcessBlock(&a2, &a3); /*0x69d9cf*/
  }
  return result; /*0x69d9d5*/
}


// ==== 0x0069D9E0  SHA1::Compute  this=SHA1  sig=csp ====
int __thiscall SHA1_Compute(_DWORD *this, char *a2)
{
  int v3; // edx
  int v4; // ebx
  unsigned int v5; // ebx
  int v6; // edx
  unsigned __int16 v7; // cx
  unsigned int *v8; // ecx
  int v9; // esi
  unsigned int v10; // eax
  _BYTE v12[20]; // [esp+14h] [ebp-54h] BYREF
  _DWORD v13[16]; // [esp+28h] [ebp-40h] BYREF

  if ( *(_BYTE *)this ) /*0x69d9e9*/
    qmemcpy(a2, this + 1, 0x14u); /*0x69d9fb*/
  v3 = this->q030; /*0x69d9fd*/
  v4 = this->q02C; /*0x69da00*/
  qmemcpy(v13, this + 13, sizeof(v13)); /*0x69da14*/
  v5 = v3 + v4; /*0x69da18*/
  *((_BYTE *)v13 + v3) = 0x80; /*0x69da29*/
  qmemcpy(v12, this + 6, sizeof(v12)); /*0x69da2e*/
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
  qmemcpy(this + 1, v12, 0x14u); /*0x69dad6*/
  v8 = this + 1; /*0x69dad8*/
  v9 = 5; /*0x69dada*/
  do /*0x69db0b*/
  {
    v10 = *v8++; /*0x69dadf*/
    --v9; /*0x69db07*/
    *(v8 - 1) = ((v10 & 0xFF00 | (v10 << 16)) << 8) | ((HIWORD(v10) | v10 & 0xFF0000) >> 8); /*0x69db08*/
  }
  while ( v9 ); /*0x69db0b*/
  *(_BYTE *)this = 1; /*0x69db18*/
  qmemcpy(a2, this + 1, 0x14u); /*0x69db1c*/
  return 20; /*0x69db1e*/
}


// ==== 0x0069DB30  SHA1::Transform  this=SHA1  sig=csp ====
unsigned int __thiscall SHA1::Transform(Pipe *this)
{
  Pipe *v2; // ecx
  int esi1; // esi
  int v3; // eax
  int v4; // edi
  int *v5; // ecx
  int v6; // edx
  int v7; // esi
  int v8; // ebp
  int v9; // eax
  int v10; // ebx
  unsigned int v11; // edx
  int v12; // edi
  int v13; // esi
  unsigned int v14; // ebp
  int v15; // ecx
  int v16; // ecx
  int v17; // ebx
  int v18; // eax
  unsigned int v19; // eax
  bool v20; // cf
  unsigned int v21; // ebp
  unsigned int v22; // edx
  unsigned int v23; // ebx
  unsigned int v24; // eax
  int v25; // ebx
  int v26; // edx
  unsigned int result; // eax
  _DWORD *v28; // [esp+10h] [ebp-160h]
  int v29; // [esp+14h] [ebp-15Ch]
  int v30; // [esp+18h] [ebp-158h]
  _DWORD v31[5]; // [esp+1Ch] [ebp-154h] BYREF
  _BYTE v32[8]; // [esp+30h] [ebp-140h] BYREF
  char v33; // [esp+38h] [ebp-138h] BYREF
  Pipe *v34; // [esp+174h] [ebp+4h]
  unsigned int *v35; // [esp+178h] [ebp+8h]

  v2 = v34; /*0x69db30*/
  esi1 = 16; /*0x69db44*/
  do /*0x69db76*/
  {
    v3 = *(_DWORD *)v2->__pad_0; /*0x69db49*/
    v2 = (Pipe *)((char *)v2 + 4); /*0x69db4b*/
    v4 = HIBYTE(v3) | ((v3 & 0xFF00 | (v3 << 16)) << 8); /*0x69db67*/
    LOBYTE(v3) = 0; /*0x69db69*/
    BYTE1(v3) = BYTE2(v3); /*0x69db6b*/
    --esi1; /*0x69db71*/
    *(_DWORD *)&v2->__pad_0[v32 - (_BYTE *)v34 - 4] = (unsigned __int16)v3 | v4; /*0x69db72*/
  }
  while ( esi1 ); /*0x69db76*/
  v5 = (int *)&v33; /*0x69db78*/
  v6 = 64; /*0x69db7c*/
  do /*0x69dba2*/
  {
    v7 = *(v5 - 2); /*0x69db87*/
    v8 = *v5; /*0x69db8a*/
    v9 = v5[6] ^ v5[11]; /*0x69db8c*/
    ++v5; /*0x69db8e*/
    --v6; /*0x69db9e*/
    v5[13] = (2 * (v8 ^ v7 ^ v9)) | ((v8 ^ v7 ^ (unsigned int)v9) >> 31); /*0x69db9f*/
  }
  while ( v6 ); /*0x69dba2*/
  v10 = 0; /*0x69dbb4*/
  qmemcpy(v31, v35, sizeof(v31)); /*0x69dbb6*/
  v11 = v31[1]; /*0x69dbb8*/
  v12 = v31[2]; /*0x69dbbc*/
  v13 = v31[3]; /*0x69dbc0*/
  v14 = v31[0]; /*0x69dbc4*/
  v30 = 0; /*0x69dbcc*/
  v28 = v32; /*0x69dbd0*/
  do
  {
    if ( v10 >= 20 ) /*0x69dbd7*/
    {
      if ( v10 >= 40 && v10 < 60 ) /*0x69dbe9*/
      {
        v16 = v12 & v11 | v13 & (v12 | v11); /*0x69dbf5*/
        goto LABEL_13; /*0x69dbf7*/
      }
      v15 = v12 ^ v11; /*0x69dbfb*/
    }
    else
    {
      v15 = v11 & (v13 ^ v12); /*0x69dbdd*/
    }
    v16 = v13 ^ v15; /*0x69dbfd*/
LABEL_13:
    if ( v10 >= 20 )
    {
      if ( v10 >= 40 )
        v29 = v10 >= 60 ? -899497514 : -1894007588;
      else
        v29 = 1859775393; /*0x69dc13*/
    }
    else
    {
      v29 = 1518500249; /*0x69dc04*/
    }
    v17 = v31[4]; /*0x69dc4c*/
    v18 = v16 + v29 + *v28 + ((32 * v14) | (v14 >> 27)); /*0x69dc50*/
    v31[4] = v13; /*0x69dc5a*/
    v19 = v17 + v18; /*0x69dc60*/
    v13 = v12; /*0x69dc66*/
    v12 = (v11 >> 2) | (v11 << 30); /*0x69dc68*/
    v10 = v30 + 1; /*0x69dc6e*/
    v11 = v14; /*0x69dc72*/
    v20 = (unsigned int)(v30 + 1) < 0x50; /*0x69dc74*/
    v14 = v19; /*0x69dc77*/
    ++v30; /*0x69dc79*/
    ++v28; /*0x69dc7d*/
  }
  while ( v20 );
  v21 = v11 + v35[1]; /*0x69dc93*/
  v22 = v35[3]; /*0x69dc95*/
  v23 = v19 + *v35; /*0x69dc98*/
  v24 = v35[4]; /*0x69dc9a*/
  *v35 = v23; /*0x69dc9d*/
  v25 = v12 + v35[2]; /*0x69dca4*/
  v35[3] = v13 + v22; /*0x69dca6*/
  v26 = v31[4]; /*0x69dca9*/
  v35[1] = v21; /*0x69dcae*/
  result = v26 + v24; /*0x69dcb1*/
  v35[2] = v25; /*0x69dcb4*/
  v35[4] = result; /*0x69dcb8*/
  return result; /*0x69dcad*/
}


// ==== 0x0069DCD0  sub_69DCD0  this=-  sig=ida-proto ====
int sub_69DCD0()
{
  MEMORY[0xB07790] = 0; /*0x69dcd2*/
  MEMORY[0xB07794] = 0; /*0x69dcd7*/
  MEMORY[0xB07798] = 0; /*0x69dcdc*/
  MEMORY[0xB0779C] = 0; /*0x69dce1*/
  return 0; /*0x69dce6*/
}


// ==== 0x0069DCF0  ShapeButtonClass::Init  this=ShapeButtonClass  sig=csp ====
_BYTE *__thiscall ShapeButtonClass_Init(_BYTE *this)
{
  ToggleClass::Construct(0, 0, 0, 0, 0); /*0x69dcfb*/
  this->q034 = 0; /*0x69dd00*/
  this->q038 = 0; /*0x69dd03*/
  this->q03C = 0; /*0x69dd06*/
  this->q040 = 0; /*0x69dd09*/
  this->q044 = 0; /*0x69dd0c*/
  this->q012 = 0; /*0x69dd0f*/
  this->q04C = 0; /*0x69dd12*/
  this->Visible = MEMORY[0x87F6C4]; /*0x69dd1a*/
  this->q055 = 0; /*0x69dd1d*/
  this->q05C = 0; /*0x69dd20*/
  *(_DWORD *)this = &vt_ShapeButtonClass; /*0x69dd23*/
  return this; /*0x69dd2b*/
}


// ==== 0x0069DD30  ShapeButtonClass::Constructor  this=ShapeButtonClass  sig=csp ====
ShapeButtonClass *__thiscall ShapeButtonClass::Constructor(
        _BYTE *this,
        ControlClass *aP1,
        ShapeButtonClass *aP2,
        ShapeButtonClass *aP3,
        ControlClass *aP4,
        int a6,
        int a7,
        char a8)
{
  ToggleClass::Construct((int)this, aP1, (ControlClass *)aP3, aP4, 0, 0); /*0x69dd49*/
  this->q034 = 0; /*0x69dd52*/
  this->q038 = 0; /*0x69dd55*/
  this->q040 = 0; /*0x69dd58*/
  this->q044 = 0; /*0x69dd5b*/
  this->q012 = 0; /*0x69dd5e*/
  this->q04C = 0; /*0x69dd61*/
  this->Visible = *(_DWORD *)&stru_87C374.__pad_14B0[7840]; /*0x69dd69*/
  this->q055 = a8; /*0x69dd72*/
  this->q05C = 0; /*0x69dd75*/
  *(_DWORD *)this = &vt_ShapeButtonClass; /*0x69dd78*/
  this->q016 = aP2; /*0x69dd7e*/
  if ( aP2 ) /*0x69dd81*/
  {
    this->q005 = *(__int16 *)&aP2->__pad_0[2]; /*0x69dd87*/
    this->q006 = SLOWORD(aP2->ShapeButtonClass_field_0x04); /*0x69dd8e*/
  }
  else
  {
    this->q005 = 0; /*0x69dd93*/
    this->q006 = 0; /*0x69dd96*/
  }
  if ( a6 ) /*0x69dd9f*/
    this->q005 = a6; /*0x69dda1*/
  if ( a7 ) /*0x69ddaa*/
    this->q006 = a7; /*0x69ddac*/
  return (ShapeButtonClass *)this; /*0x69ddb1*/
}


// ==== 0x0069DDC0  ShapeButtonClass::Destructor  this=ShapeButtonClass  sig=csp ====
int __thiscall ShapeButtonClass_Destructor(int this)
{
  char v2; // al

  v2 = *(_BYTE *)(this + 92); /*0x69ddc6*/
  *(_DWORD *)this = &vt_ShapeButtonClass; /*0x69ddc9*/
  if ( v2 && *(_DWORD *)(this + 88) ) /*0x69ddd3*/
  {
    __3_YAXPAX_Z(*(void **)(this + 88)); /*0x69dddb*/
    *(_DWORD *)(this + 88) = 0; /*0x69dde3*/
    *(_BYTE *)(this + 92) = 0; /*0x69dde6*/
    *(_DWORD *)(this + 20) = 0; /*0x69dde9*/
    *(_DWORD *)(this + 24) = 0; /*0x69ddec*/
  }
  return GadgetClass::Dtor((_DWORD *)this); /*0x69ddf6*/
}


// ==== 0x0069DE00  ShapeButtonClass::SetShape  this=ShapeButtonClass  sig=csp ====
int __thiscall ShapeButton_SetShape(int this, int a2, int a3, int a4)
{
  int result; // eax

  if ( *(_BYTE *)(this + 92) && *(_DWORD *)(this + 88) ) /*0x69de0b*/
  {
    __3_YAXPAX_Z(*(void **)(this + 88)); /*0x69de13*/
    *(_DWORD *)(this + 88) = 0; /*0x69de1b*/
    *(_BYTE *)(this + 92) = 0; /*0x69de1e*/
    *(_DWORD *)(this + 20) = 0; /*0x69de21*/
    *(_DWORD *)(this + 24) = 0; /*0x69de24*/
  }
  *(_DWORD *)(this + 88) = a2; /*0x69de2d*/
  if ( a2 ) /*0x69de30*/
  {
    *(_DWORD *)(this + 20) = *(__int16 *)(a2 + 2); /*0x69de36*/
    *(_DWORD *)(this + 24) = *(__int16 *)(a2 + 4); /*0x69de3d*/
  }
  else
  {
    *(_DWORD *)(this + 20) = 0; /*0x69de42*/
    *(_DWORD *)(this + 24) = 0; /*0x69de45*/
  }
  if ( a3 ) /*0x69de4e*/
    *(_DWORD *)(this + 20) = a3; /*0x69de50*/
  result = a4; /*0x69de53*/
  if ( a4 ) /*0x69de59*/
    *(_DWORD *)(this + 24) = a4; /*0x69de5b*/
  return result; /*0x69de5e*/
}


// ==== 0x0069DE70  ScenarioClass::FreeConfig  this=ScenarioClass  sig=csp ====
void __thiscall ScenarioClass_FreeConfig(int this)
{
  if ( *(_BYTE *)(this + 92) ) /*0x69de76*/
  {
    if ( *(_DWORD *)(this + 88) ) /*0x69de7b*/
    {
      __3_YAXPAX_Z(*(void **)(this + 88)); /*0x69de83*/
      *(_DWORD *)(this + 88) = 0; /*0x69de8b*/
      *(_BYTE *)(this + 92) = 0; /*0x69de8e*/
      *(_DWORD *)(this + 20) = 0; /*0x69de91*/
      *(_DWORD *)(this + 24) = 0; /*0x69de94*/
    }
  }
}


// ==== 0x0069DEA0  ButtonClass::SetState  this=ShapeButtonClass  sig=csp ====
char __thiscall ButtonClass::SetState(_BYTE *this, ShapeButtonClass *aP1)
{
  this->q05C = (_BYTE)aP1; /*0x69dea4*/
  return (char)aP1; /*0x69dea7*/
}


// ==== 0x0069DEB0  ShapeButtonClass::Draw  this=ShapeButtonClass  sig=csp ====
int __thiscall ShapeButton_Draw(int this, int a2)
{
  unsigned int v3; // ebx
  char v4; // al
  int v5; // edi
  int *v6; // eax
  int v7; // ebp
  int v8; // edx
  int v9; // ebp
  int v10; // eax
  int v12[4]; // [esp+4h] [ebp-20h] BYREF
  int v13[4]; // [esp+14h] [ebp-10h] BYREF

  if ( !Control::DispatchClick(a2) || !*(_DWORD *)(this + 88) ) /*0x69dec8*/
    return 0; /*0x69dfad*/
  if ( !*(_BYTE *)(this + 30) ) /*0x69dedb*/
  {
    if ( *(_BYTE *)(this + 64) ) /*0x69dee4*/
    {
      if ( *(_BYTE *)(this + 52) ) /*0x69deeb*/
      {
        v3 = (*(_BYTE *)(this + 45) != 0) + 3; /*0x69defc*/
        goto LABEL_11; /*0x69deff*/
      }
      v4 = *(_BYTE *)(this + 45); /*0x69df01*/
      v3 = 0; /*0x69df04*/
    }
    else
    {
      v4 = *(_BYTE *)(this + 44); /*0x69df08*/
      v3 = 0; /*0x69df0b*/
    }
    LOBYTE(v3) = v4 != 0; /*0x69df0f*/
    goto LABEL_11; /*0x69df0f*/
  }
  v3 = 2; /*0x69dedd*/
LABEL_11:
  v5 = MEMORY[0x887300]; /*0x69df12*/
  if ( !*(_BYTE *)(this + 76) ) /*0x69df12*/
    v5 = MEMORY[0x887314]; /*0x69df1f*/
  v6 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v5 + 120))(v5, v12); /*0x69df2e*/
  v7 = *(_DWORD *)(this + 12); /*0x69df33*/
  v13[0] = *v6; /*0x69df36*/
  v13[1] = v6[1]; /*0x69df3d*/
  v13[2] = v6[2]; /*0x69df44*/
  v13[3] = v6[3]; /*0x69df4f*/
  v8 = v7 + *(_DWORD *)(this + 68); /*0x69df56*/
  v9 = *(_DWORD *)(this + 16); /*0x69df58*/
  v12[0] = v8; /*0x69df5b*/
  v10 = *(_BYTE *)(this + 85) != 0 ? 0x800 : 0;
  v12[1] = v9 + *(_DWORD *)(this + 72); /*0x69df7d*/
  DrawToSurfaceSHP(v5, *(_DWORD *)(this + 80), *(_DWORD *)(this + 88), v3, v12, v13, v10, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x69df96*/
  *(_BYTE *)(this + 84) = 1; /*0x69dfa2*/
  return 1; /*0x69dfa6*/
}


// ==== 0x0069DFC0  SidebarClass::startButtonFlash  this=SidebarClass  sig=csp ====
char __thiscall sub_69DFC0(int this, int a2, int a3, char a4)
{
  if ( *(_DWORD *)(this + 56) ) /*0x69dfc0*/
    return 0; /*0x69dfe3*/
  *(_DWORD *)(this + 56) = a2; /*0x69dfcf*/
  *(_DWORD *)(this + 60) = a3 + a2; /*0x69dfd4*/
  *(_BYTE *)(this + 52) = a4; /*0x69dfdb*/
  return 1; /*0x69dfe0*/
}


// ==== 0x0069DFF0  SHA1::Reset  this=GadgetClass  sig=csp ====
char __thiscall SHA1_Reset(int this)
{
  if ( !*(_DWORD *)(this + 56) ) /*0x69dff0*/
    return 0; /*0x69e005*/
  *(_BYTE *)(this + 52) = 0; /*0x69dff9*/
  *(_DWORD *)(this + 60) = 0; /*0x69dffc*/
  *(_DWORD *)(this + 56) = 0; /*0x69dfff*/
  return 1; /*0x69e004*/
}


// ==== 0x0069E010  SidebarClass::updateFlashTimer  this=SidebarClass  sig=csp ====
char __thiscall sub_69E010(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // edx

  if ( *(_BYTE *)(this + 30) ) /*0x69e010*/
  {
    if ( *(_DWORD *)(this + 56) ) /*0x69e019*/
    {
      *(_BYTE *)(this + 52) = 0; /*0x69e01e*/
      *(_DWORD *)(this + 60) = 0; /*0x69e021*/
      *(_DWORD *)(this + 56) = 0; /*0x69e024*/
      return 1; /*0x69e029*/
    }
  }
  else
  {
    v2 = *(_DWORD *)(this + 60); /*0x69e02a*/
    if ( v2 ) /*0x69e02f*/
    {
      v3 = v2 - 1; /*0x69e031*/
      *(_DWORD *)(this + 60) = v3; /*0x69e034*/
      if ( !v3 ) /*0x69e037*/
      {
        v4 = *(_DWORD *)(this + 56); /*0x69e03e*/
        *(_BYTE *)(this + 52) = *(_BYTE *)(this + 52) == 0; /*0x69e044*/
        *(_DWORD *)(this + 60) = v4; /*0x69e047*/
        return 1; /*0x69e04c*/
      }
    }
  }
  return 0; /*0x69e029*/
}


// ==== 0x0069E060  ObjectClass::method_69E060  this=ObjectClass  sig=csp ====
char __thiscall sub_69E060(_BYTE *this)
{
  return this->attachedTag; /*0x69e063*/
}


// ==== 0x0069E070  sub_69E070  this=-  sig=ida-proto ====
int sub_69E070()
{
  MEMORY[0xB077A0] = 0; /*0x69e072*/
  MEMORY[0xB077A4] = 0; /*0x69e077*/
  MEMORY[0xB077A8] = 0; /*0x69e07c*/
  MEMORY[0xB077AC] = 0; /*0x69e081*/
  return 0; /*0x69e086*/
}


// ==== 0x0069E090  House::Constructor  this=House  sig=csp ====
void __thiscall sub_69E090(char **this)
{
  char *EntireFile; // eax
  _DWORD v3[22]; // [esp+4h] [ebp-6Ch] BYREF
  char v4[12]; // [esp+5Ch] [ebp-14h] BYREF
  int v5; // [esp+68h] [ebp-8h]

  if ( *(_WORD *)this == 0xFFFF && !this->q010 ) /*0x69e09c*/
  {
    CCFileClass::Construct(v3, this->q008); /*0x69e0ab*/
    EntireFile = (char *)CCFileClass::ReadEntireFile(v3); /*0x69e0b4*/
    if ( EntireFile ) /*0x69e0bb*/
    {
      this->u32_C = EntireFile; /*0x69e0bd*/
      this->q010 = 1; /*0x69e0c0*/
    }
    v3[0] = &vt_CCFileClass; /*0x69e0c8*/
    v5 = 0; /*0x69e0d0*/
    Vector::Clear((int)v4); /*0x69e0d8*/
    v3[0] = &off_7E1668; /*0x69e0e1*/
    BufferIOFileClass::Dtor(v3); /*0x69e0e9*/
  }
}


// ==== 0x0069E100  BTree::DeleteSubtree  this=BTree  sig=csp ====
void __thiscall BTree::DeleteSubtree(_DWORD *this)
{
  void *v2; // esi
  int v3; // eax
  int v4; // eax

  if ( *(_WORD *)this == 0xFFFF && this->u8_10 ) /*0x69e109*/
  {
    v2 = (void *)this->q003; /*0x69e111*/
    if ( v2 ) /*0x69e116*/
    {
      if ( *(_WORD *)v2 == 0xFFFF ) /*0x69e11c*/
      {
        BTree::DeleteSubtree(this->q003); /*0x69e120*/
        v3 = *((_DWORD *)v2 + 6); /*0x69e125*/
        if ( v3 ) /*0x69e12a*/
          *(_DWORD *)(v3 + 28) = *((_DWORD *)v2 + 7); /*0x69e12f*/
        v4 = *((_DWORD *)v2 + 7); /*0x69e132*/
        if ( v4 ) /*0x69e137*/
          *(_DWORD *)(v4 + 24) = *((_DWORD *)v2 + 6); /*0x69e13c*/
        else
          MEMORY[0xB077B0] = (void *)*((_DWORD *)v2 + 6); /*0x69e144*/
        if ( *((_DWORD *)v2 + 2) ) /*0x69e149*/
        {
          free(*((void **)v2 + 2)); /*0x69e151*/
          *((_DWORD *)v2 + 2) = 0; /*0x69e159*/
        }
      }
      __3_YAXPAX_Z(v2); /*0x69e161*/
    }
    this->q003 = 0; /*0x69e169*/
    this->u8_10 = 0; /*0x69e170*/
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

  v0 = MEMORY[0xB077B0]; /*0x69e182*/
  if ( MEMORY[0xB077B0] ) /*0x69e18c*/
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
            MEMORY[0xB077B0] = (void *)*((_DWORD *)v0 + 6); /*0x69e1d4*/
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
    MEMORY[0xB077B0] = 0; /*0x69e1fc*/
  }
  else
  {
    MEMORY[0xB077B0] = 0; /*0x69e205*/
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

  v0 = MEMORY[0xB077B0]; /*0x69e213*/
  if ( MEMORY[0xB077B0] ) /*0x69e21d*/
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
              MEMORY[0xB077B0] = (void *)*((_DWORD *)v1 + 6); /*0x69e25d*/
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
  v4 = MEMORY[0xB077B4]; /*0x69e28b*/
  if ( MEMORY[0xB077B4] ) /*0x69e293*/
  {
    if ( *(_WORD *)MEMORY[0xB077B4] == 0xFFFF ) /*0x69e299*/
    {
      v5 = (char *)MEMORY[0xB077B4] + 16; /*0x69e29f*/
      if ( *((_BYTE *)MEMORY[0xB077B4] + 16) ) /*0x69e29b*/
      {
        v6 = (void *)*((_DWORD *)MEMORY[0xB077B4] + 3); /*0x69e2a6*/
        v7 = (char *)MEMORY[0xB077B4] + 12; /*0x69e2a9*/
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
        MEMORY[0xB077B0] = (void *)*((_DWORD *)v4 + 6); /*0x69e2dc*/
      if ( *((_DWORD *)v4 + 2) ) /*0x69e2e1*/
      {
        free(*((void **)v4 + 2)); /*0x69e2e9*/
        *((_DWORD *)v4 + 2) = 0; /*0x69e2f1*/
      }
    }
    __3_YAXPAX_Z(v4); /*0x69e2f5*/
    MEMORY[0xB077B4] = 0; /*0x69e2fd*/
    MEMORY[0xB077B8] = 0; /*0x69e303*/
    MEMORY[0xB077BC] = 0; /*0x69e309*/
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

  v1 = MEMORY[0xB077B0]; /*0x69e324*/
  if ( MEMORY[0xB077B0] ) /*0x69e330*/
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
              MEMORY[0xB077B0] = (void *)*((_DWORD *)v3 + 6); /*0x69e375*/
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
  v6 = MEMORY[0xB077B4]; /*0x69e3a3*/
  if ( MEMORY[0xB077B4] ) /*0x69e3ab*/
  {
    if ( *(_WORD *)MEMORY[0xB077B4] == 0xFFFF ) /*0x69e3b1*/
    {
      v7 = (char *)MEMORY[0xB077B4] + 16; /*0x69e3b6*/
      if ( *((_BYTE *)MEMORY[0xB077B4] + 16) ) /*0x69e3b3*/
      {
        v8 = (void *)*((_DWORD *)MEMORY[0xB077B4] + 3); /*0x69e3bd*/
        v9 = (char *)MEMORY[0xB077B4] + 12; /*0x69e3c0*/
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
        MEMORY[0xB077B0] = (void *)*((_DWORD *)v6 + 6); /*0x69e3f2*/
      if ( *((_DWORD *)v6 + 2) ) /*0x69e3f7*/
      {
        free(*((void **)v6 + 2)); /*0x69e3ff*/
        *((_DWORD *)v6 + 2) = 0; /*0x69e407*/
      }
    }
    __3_YAXPAX_Z(v6); /*0x69e40b*/
    MEMORY[0xB077B4] = 0; /*0x69e413*/
    MEMORY[0xB077B8] = 0; /*0x69e419*/
    MEMORY[0xB077BC] = 0; /*0x69e41f*/
  }
}


// ==== 0x0069E430  ObjectClass::LoadSHPFile  this=AbstractClass  sig=csp ====
CampaignScore *__thiscall LoadSHPFile(void *lpBuffer, char *Source)
{
  char *v3; // eax
  _DWORD v5[22]; // [esp+8h] [ebp-6Ch] BYREF
  _BYTE v6[12]; // [esp+60h] [ebp-14h] BYREF
  int v7; // [esp+6Ch] [ebp-8h]

  *((_DWORD *)lpBuffer + 5) = (*(_DWORD *)&stru_830620.__pad_579C[39604])++; /*0x69e440*/
  v3 = _strdup(Source); /*0x69e44f*/
  *((_DWORD *)lpBuffer + 2) = v3; /*0x69e45d*/
  *((_BYTE *)lpBuffer + 16) = 0; /*0x69e461*/
  *((_DWORD *)lpBuffer + 3) = 0; /*0x69e464*/
  *((_WORD *)lpBuffer + 1) = 0; /*0x69e467*/
  *((_DWORD *)lpBuffer + 1) = 0; /*0x69e46b*/
  CCFileClass::Construct(v5, v3); /*0x69e473*/
  if ( CCFileClass::Open(v5, 0) ) /*0x69e47d*/
    CCFileClass::Read(v5, (CampaignScore *)lpBuffer, 8); /*0x69e48d*/
  _strcmpi(*((char **)lpBuffer + 2), &stru_830620.__pad_579C[39608]); /*0x69e49b*/
  *(_WORD *)lpBuffer = -1; /*0x69e4a0*/
  *((_DWORD *)lpBuffer + 6) = MEMORY[0xB077B0]; /*0x69e4aa*/
  *((_DWORD *)lpBuffer + 7) = 0; /*0x69e4ad*/
  if ( MEMORY[0xB077B0] ) /*0x69e4ba*/
    *((_DWORD *)MEMORY[0xB077B0] + 7) = lpBuffer; /*0x69e4bc*/
  MEMORY[0xB077B0] = lpBuffer; /*0x69e4bf*/
  *((_DWORD *)lpBuffer + 8) = 0; /*0x69e4c9*/
  v5[0] = &vt_CCFileClass; /*0x69e4cc*/
  v7 = 0; /*0x69e4d4*/
  Vector::Clear((int)v6); /*0x69e4d8*/
  v5[0] = &off_7E1668; /*0x69e4e1*/
  BufferIOFileClass::Dtor(v5); /*0x69e4e9*/
  return (CampaignScore *)lpBuffer; /*0x69e4f0*/
}


// ==== 0x0069E500  FileTreeNode::Destroy  this=AbstractClass  sig=csp ====
void __thiscall FileTreeNode_Destroy(void *this)
{
  void *v2; // edi
  int v3; // eax
  int v4; // eax

  if ( *(_WORD *)this == 0xFFFF ) /*0x69e507*/
  {
    if ( this->uniqueId ) /*0x69e509*/
    {
      v2 = (void *)this->vtable4; /*0x69e511*/
      if ( v2 ) /*0x69e516*/
      {
        FileTreeNode::Destroy(this->vtable4); /*0x69e51a*/
        __3_YAXPAX_Z(v2); /*0x69e520*/
      }
      this->vtable4 = 0; /*0x69e528*/
      this->uniqueId = 0; /*0x69e52f*/
    }
    v3 = this->nextArrayIndex; /*0x69e534*/
    if ( v3 ) /*0x69e539*/
      *(_DWORD *)(v3 + 28) = this->referenceCount; /*0x69e53e*/
    v4 = this->referenceCount; /*0x69e541*/
    if ( v4 ) /*0x69e546*/
      *(_DWORD *)(v4 + 24) = this->nextArrayIndex; /*0x69e54b*/
    else
      MEMORY[0xB077B0] = (void *)this->nextArrayIndex; /*0x69e553*/
    if ( this->vtable3 ) /*0x69e558*/
    {
      free(*((void **)this + 2)); /*0x69e560*/
      this->vtable3 = 0; /*0x69e568*/
    }
  }
}


// ==== 0x0069E580  MixFileClass::LoadSubFile  this=AbstractClass  sig=csp ====
char **__thiscall MixFileClass_LoadSubFile(char **this)
{
  char **v1; // edi
  int Size; // ebx
  void *v4; // eax
  size_t v5; // eax
  void *v6; // esi
  _BYTE *v7; // ebp
  _DWORD *v8; // edi
  int v9; // eax
  int v10; // eax
  void *v11; // esi
  int v13[22]; // [esp+Ch] [ebp-6Ch] BYREF
  _BYTE v14[12]; // [esp+64h] [ebp-14h] BYREF
  int v15; // [esp+70h] [ebp-8h]

  v1 = this; /*0x69e585*/
  if ( *(_WORD *)this != 0xFFFF ) /*0x69e58f*/
    return this; /*0x69e591*/
  if ( this->uniqueId ) /*0x69e599*/
    return (char **)this->vtable4; /*0x69e5a0*/
  if ( (char *)MEMORY[0xB077BC] == this->abstractFlags ) /*0x69e5b3*/
    return (char **)MEMORY[0xB077B4]; /*0x69e5b5*/
  CCFileClass::Construct(v13, this->vtable3); /*0x69e5c8*/
  if ( CCFileClass::Open(v13, 0) ) /*0x69e5d4*/
  {
    Size = CCFileClass::GetSize(v13); /*0x69e5ec*/
    v4 = MEMORY[0xB077B4]; /*0x69e5ee*/
    if ( MEMORY[0xB077B4] ) /*0x69e5f5*/
    {
      if ( MEMORY[0xB077B8] < Size ) /*0x69e624*/
      {
        v6 = MEMORY[0xB077B4]; /*0x69e62e*/
        if ( *(_WORD *)MEMORY[0xB077B4] == 0xFFFF ) /*0x69e630*/
        {
          v7 = (char *)MEMORY[0xB077B4] + 16; /*0x69e635*/
          if ( *((_BYTE *)MEMORY[0xB077B4] + 16) ) /*0x69e632*/
          {
            v8 = (char *)MEMORY[0xB077B4] + 12; /*0x69e63f*/
            if ( *((_DWORD *)MEMORY[0xB077B4] + 3) ) /*0x69e63c*/
              MixFileClass::CacheNode_Dtor(1); /*0x69e648*/
            *v8 = 0; /*0x69e64d*/
            v1 = this; /*0x69e653*/
            *v7 = 0; /*0x69e657*/
          }
          v9 = *((_DWORD *)v6 + 6); /*0x69e65b*/
          if ( v9 ) /*0x69e660*/
            *(_DWORD *)(v9 + 28) = *((_DWORD *)v6 + 7); /*0x69e665*/
          v10 = *((_DWORD *)v6 + 7); /*0x69e668*/
          if ( v10 ) /*0x69e66d*/
            *(_DWORD *)(v10 + 24) = *((_DWORD *)v6 + 6); /*0x69e672*/
          else
            MEMORY[0xB077B0] = (void *)*((_DWORD *)v6 + 6); /*0x69e67a*/
          if ( *((_DWORD *)v6 + 2) ) /*0x69e680*/
          {
            free(*((void **)v6 + 2)); /*0x69e688*/
            *((_DWORD *)v6 + 2) = 0; /*0x69e690*/
          }
        }
        __3_YAXPAX_Z(v6); /*0x69e698*/
        v4 = __2_YAPAXI_Z(Size); /*0x69e69e*/
        MEMORY[0xB077B4] = v4; /*0x69e6a6*/
        MEMORY[0xB077B8] = Size; /*0x69e6ab*/
      }
    }
    else
    {
      v5 = 3145728; /*0x69e5fd*/
      if ( Size >= 3145728 ) /*0x69e602*/
        v5 = Size; /*0x69e604*/
      MEMORY[0xB077B8] = v5; /*0x69e607*/
      v4 = __2_YAPAXI_Z(v5); /*0x69e60c*/
      MEMORY[0xB077B4] = v4; /*0x69e614*/
    }
    if ( v4 ) /*0x69e6b5*/
    {
      CCFileClass::Read(v13, v4, Size); /*0x69e6bd*/
      v4 = MEMORY[0xB077B4]; /*0x69e6c2*/
    }
    v11 = v4; /*0x69e6ca*/
    MEMORY[0xB077BC] = (int)v1[5]; /*0x69e6cc*/
    v13[0] = (int)&vt_CCFileClass; /*0x69e6d6*/
    v15 = 0; /*0x69e6de*/
    Vector::Clear((int)v14); /*0x69e6e2*/
    v13[0] = (int)&off_7E1668; /*0x69e6eb*/
    BufferIOFileClass::Dtor(v13); /*0x69e6f3*/
    return (char **)v11; /*0x69e6f8*/
  }
  else
  {
    MEMORY[0xB077BC] = 0; /*0x69e706*/
    v13[0] = (int)&vt_CCFileClass; /*0x69e70c*/
    v15 = 0; /*0x69e714*/
    Vector::Clear((int)v14); /*0x69e718*/
    v13[0] = (int)&off_7E1668; /*0x69e721*/
    BufferIOFileClass::Dtor(v13); /*0x69e729*/
    return 0; /*0x69e72f*/
  }
}


// ==== 0x0069E740  MixFileClass::GetSubFile  this=AbstractClass  sig=csp ====
int __thiscall MixFileClass_GetSubFile(char **this, unsigned int a2)
{
  char *EntireFile; // eax
  int v4; // eax
  int v5; // ecx
  _DWORD v7[22]; // [esp+4h] [ebp-6Ch] BYREF
  char v8[12]; // [esp+5Ch] [ebp-14h] BYREF
  int v9; // [esp+68h] [ebp-8h]

  if ( *(_WORD *)this == 0xFFFF && !this->uniqueId ) /*0x69e74c*/
  {
    CCFileClass::Construct(v7, this->vtable3); /*0x69e75b*/
    EntireFile = (char *)CCFileClass::ReadEntireFile(v7); /*0x69e764*/
    if ( EntireFile ) /*0x69e76b*/
    {
      this->vtable4 = EntireFile; /*0x69e76d*/
      this->uniqueId = 1; /*0x69e770*/
    }
    v7[0] = &vt_CCFileClass; /*0x69e778*/
    v9 = 0; /*0x69e780*/
    Vector::Clear((int)v8); /*0x69e788*/
    v7[0] = &off_7E1668; /*0x69e791*/
    BufferIOFileClass::Dtor(v7); /*0x69e799*/
  }
  v4 = MixFileClass::LoadSubFile(this); /*0x69e7a0*/
  if ( v4 && a2 < *(__int16 *)(v4 + 6) && v4 + 24 * a2 != -8 && (v5 = *(_DWORD *)(v4 + 24 * a2 + 28)) != 0 ) /*0x69e7c6*/
    return v5 + v4; /*0x69e7c8*/
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
    *a1 = MEMORY[0xB077A0]; /*0x69e835*/
    a1[1] = MEMORY[0xB077A4]; /*0x69e83d*/
    a1[2] = MEMORY[0xB077A8]; /*0x69e846*/
    a1[3] = MEMORY[0xB077AC]; /*0x69e84f*/
    return a1; /*0x69e829*/
  }
}


// ==== 0x0069E860  MixFileClass::GetPixelData  this=MixFileClass  sig=csp ====
int __thiscall MixFileClass_GetPixelData(char **this, int a2, unsigned int a3)
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


// ==== 0x0069E900  ObjectClass::Helper_69E900  this=AbstractClass  sig=csp ====
char __thiscall sub_69E900(char **this, unsigned int a2)
{
  char **SubFile; // eax
  int v3; // eax
  int v4; // eax

  SubFile = MixFileClass::LoadSubFile(this); /*0x69e900*/
  if ( SubFile && a2 < *((__int16 *)SubFile + 3) && (v3 = (int)&SubFile[6 * a2 + 2]) != 0 ) /*0x69e91e*/
    return (unsigned __int8)(*(_BYTE *)(v3 + 8) & 2) >> 1; /*0x69e926*/
  else
    LOBYTE(v4) = 0; /*0x69e92b*/
  return v4; /*0x69e928*/
}


// ==== 0x0069E930  MixFileClass::CacheNode_Dtor  this=MixFileClass  sig=csp ====
void *__thiscall MixFileClass_CacheNode_Dtor(void *this, char a2)
{
  int v3; // eax
  int v4; // eax

  if ( *(_WORD *)this == 0xFFFF ) /*0x69e937*/
  {
    if ( this->FileSize ) /*0x69e939*/
    {
      if ( this->CountFiles ) /*0x69e940*/
        MixFileClass::CacheNode_Dtor(1); /*0x69e949*/
      this->CountFiles = 0; /*0x69e94e*/
      this->FileSize = 0; /*0x69e955*/
    }
    v3 = this->Headers; /*0x69e959*/
    if ( v3 ) /*0x69e95e*/
      *(_DWORD *)(v3 + 28) = this->q01C; /*0x69e963*/
    v4 = this->q01C; /*0x69e966*/
    if ( v4 ) /*0x69e96b*/
      *(_DWORD *)(v4 + 24) = this->Headers; /*0x69e970*/
    else
      MEMORY[0xB077B0] = (void *)this->Headers; /*0x69e978*/
    if ( this->Blowfish ) /*0x69e97d*/
    {
      free(*((void **)this + 2)); /*0x69e985*/
      this->Blowfish = 0; /*0x69e98d*/
    }
  }
  if ( (a2 & 1) != 0 ) /*0x69e999*/
    __3_YAXPAX_Z(this); /*0x69e99c*/
  return this; /*0x69e9a6*/
}


// ==== 0x0069E9B0  SHAPipe::Check  this=SHAPipe  sig=csp ====
int __thiscall VectorClass::Check(SHAPipe *this, Pipe *aP1, int aP2)
{
  SHA1::Process((Pipe *)(this + 3), aP1, (Pipe *)aP2); /*0x69e9c2*/
  return (int)Delegate::Dispatch(this, aP1, (Pipe *)aP2); /*0x69e9d0*/
}


// ==== 0x0069E9E0  SHA1::ComputeThunk  this=SHA1  sig=csp ====
int __thiscall SHA1::ComputeThunk(_DWORD *this, ObjectClass *aP1)
{
  return SHA1::Compute((Pipe *)(this + 3), aP1); /*0x69e9ed*/
}


// ==== 0x0069E9F0  ObjectClass::method_69E9F0  this=ObjectClass  sig=csp ====
int __thiscall sub_69E9F0(int this, int a1, Straw *aP2)
{
  Pipe *v4; // ebx

  if ( !a1 || (int)aP2 < 1 ) /*0x69ea03*/
    return 0; /*0x69ea29*/
  v4 = (Pipe *)Delegate::Invoke((_DWORD *)this, a1, aP2); /*0x69ea0d*/
  if ( !*(_BYTE *)(this + 12) ) /*0x69ea0f*/
    SHA1::Process((Pipe *)(this + 16), (Pipe *)a1, v4); /*0x69ea1b*/
  return (int)v4->__pad_0; /*0x69ea23*/
}


// ==== 0x0069EA40  sub_69EA40  this=-  sig=ida-proto ====
void sub_69EA40()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x69ea4c*/
  MEMORY[0xB077E0] = Math::Sqrt(v0 + v0); /*0x69ea5e*/
}


// ==== 0x0069EA70  sub_69EA70  this=-  sig=ida-proto ====
void sub_69EA70()
{
  MEMORY[0xB07830] = MEMORY[0xB077E0] / 60.0; /*0x69ea7c*/
}


// ==== 0x0069EA90  sub_69EA90  this=-  sig=ida-proto ====
void sub_69EA90()
{
  MEMORY[0xB07818] = 1.0 / MEMORY[0xB07830]; /*0x69ea9c*/
}


// ==== 0x0069EAB0  sub_69EAB0  this=-  sig=ida-proto ====
void sub_69EAB0()
{
  MEMORY[0xB07810] = 0.0174532925199433 * 45.0; /*0x69eabc*/
}


// ==== 0x0069EAD0  sub_69EAD0  this=-  sig=ida-proto ====
void sub_69EAD0()
{
  MEMORY[0xB077E8] = 0.0174532925199433 * 60.0; /*0x69eadc*/
}


// ==== 0x0069EAF0  sub_69EAF0  this=-  sig=ida-proto ====
void sub_69EAF0()
{
  MEMORY[0xB077C0] = 0.0174532925199433 * 90.0; /*0x69eafc*/
}


// ==== 0x0069EB10  sub_69EB10  this=-  sig=ida-proto ====
__int64 sub_69EB10()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB077C0] - MEMORY[0xB077E8]); /*0x69eb22*/
  result = Math::RoundToInt(v0 * MEMORY[0xB077E0] * 0.5); /*0x69eb36*/
  MEMORY[0xB07838] = result; /*0x69eb3b*/
  return result; /*0x69eb40*/
}


// ==== 0x0069EB50  sub_69EB50  this=-  sig=ida-proto ====
void sub_69EB50()
{
  MEMORY[0xB077F0] = Math::ArcTan((double)MEMORY[0xB07838] * 0.00390625); /*0x69eb67*/
}


// ==== 0x0069EB80  sub_69EB80  this=-  sig=ida-proto ====
void sub_69EB80()
{
  MEMORY[0xB07808] = Math::ArcTan((double)(2 * MEMORY[0xB07838]) / MEMORY[0xB077E0]); /*0x69eba2*/
}


// ==== 0x0069EBB0  sub_69EBB0  this=-  sig=ida-proto ====
__int64 sub_69EBB0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB07838]) + 0.5); /*0x69ebcb*/
  MEMORY[0xB0782C] = result; /*0x69ebd0*/
  return result; /*0x69ebd6*/
}


// ==== 0x0069EBE0  sub_69EBE0  this=-  sig=ida-proto ====
int sub_69EBE0()
{
  MEMORY[0xB077D8] = 0; /*0x69ebe2*/
  MEMORY[0xB077DA] = 0; /*0x69ebe8*/
  return 0; /*0x69ebee*/
}


// ==== 0x0069EBF0  sub_69EBF0  this=-  sig=ida-proto ====
int sub_69EBF0()
{
  MEMORY[0xB077F8] = 0; /*0x69ebf2*/
  MEMORY[0xB077FC] = 0; /*0x69ebf7*/
  return 0; /*0x69ec01*/
}


// ==== 0x0069EC10  sub_69EC10  this=-  sig=ida-proto ====
int sub_69EC10()
{
  MEMORY[0xB07828] = 0; /*0x69ec15*/
  MEMORY[0xB07820] = 128; /*0x69ec1f*/
  MEMORY[0xB07824] = 128; /*0x69ec24*/
  return 128; /*0x69ec29*/
}


// ==== 0x0069EC30  sub_69EC30  this=-  sig=ida-proto ====
int sub_69EC30()
{
  MEMORY[0xB077C8] = 0; /*0x69ec32*/
  MEMORY[0xB077CC] = 0; /*0x69ec37*/
  MEMORY[0xB077D0] = 0; /*0x69ec3c*/
  MEMORY[0xB077D4] = 0; /*0x69ec41*/
  return 0; /*0x69ec46*/
}


// ==== 0x0069EC50  LocomotionClass::Process  this=ShipLocomotionClass  sig=csp ====
int __thiscall sub_69EC50(int this)
{
  wchar_t *v2; // ecx
  int v3; // ecx

  LocomotionClass::Init((_DWORD *)this); /*0x69ec53*/
  *(_DWORD *)(this + 28) = 0; /*0x69ec5d*/
  *(_DWORD *)(this + 32) = 0; /*0x69ec60*/
  v2 = MEMORY[0xA8ED84]; /*0x69ec63*/
  *(_DWORD *)(this + 44) = 0; /*0x69ec69*/
  *(_DWORD *)(this + 36) = v2; /*0x69ec6c*/
  *(_DWORD *)(this + 48) = 0; /*0x69ec6f*/
  *(_DWORD *)(this + 52) = MEMORY[0xB077F8]; /*0x69ec78*/
  *(_QWORD *)(this + 56) = MEMORY[0xB077FC]; /*0x69ec80*/
  *(_DWORD *)(this + 64) = MEMORY[0xB077F8]; /*0x69ec95*/
  *(_DWORD *)(this + 68) = MEMORY[0xB077FC]; /*0x69ec9e*/
  v3 = HIDWORD(MEMORY[0xB077FC]); /*0x69eca1*/
  *(_DWORD *)(this + 80) = 0; /*0x69eca7*/
  *(_DWORD *)(this + 76) = 0; /*0x69ecaa*/
  *(_DWORD *)(this + 72) = v3; /*0x69ecad*/
  *(_DWORD *)(this + 84) = 0; /*0x69ecb3*/
  *(_DWORD *)(this + 88) = -1; /*0x69ecb6*/
  *(_DWORD *)(this + 92) = -1; /*0x69ecb9*/
  *(_BYTE *)(this + 96) = 0; /*0x69ecbc*/
  *(_BYTE *)(this + 97) = 0; /*0x69ecbf*/
  *(_BYTE *)(this + 98) = 0; /*0x69ecc2*/
  *(_BYTE *)(this + 99) = 0; /*0x69ecc5*/
  *(_BYTE *)(this + 100) = 0; /*0x69ecc8*/
  *(_BYTE *)(this + 101) = 1; /*0x69eccb*/
  *(_DWORD *)(this + 104) = 0; /*0x69eccf*/
  *(_DWORD *)this = &ShipLocomotionClass::`vftable'; /*0x69ecd2*/
  *(_DWORD *)(this + 4) = &vt_ShipLocomotionClass; /*0x69ecd8*/
  *(_DWORD *)(this + 24) = &off_7F2D68; /*0x69ecdf*/
  return this; /*0x69ece8*/
}


// ==== 0x0069ED20  JumpjetLocomotionClass::LoadLocomotionFromStream_2  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_69ED20(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // ebp
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // edi

  v2 = a2; /*0x69ed21*/
  if ( !a2 ) /*0x69ed28*/
    return -2147467261; /*0x69ed31*/
  v4 = a1 + 20; /*0x69ed3b*/
  if ( a1[20] ) /*0x69ed38*/
  {
    a1 = 0; /*0x69ed44*/
    v5 = StreamClass::Set2(&a1, v4); /*0x69ed55*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x69ed63*/
      WinAPI::Wrapper(v5); /*0x69ed66*/
    if ( !a1 ) /*0x69ed71*/
      return -2147467259; /*0x69ed7a*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*a1 + 12))(a1, v2); /*0x69ed84*/
    if ( a1 ) /*0x69ed8c*/
    {
      (*(void (__stdcall **)(_DWORD *))(*a1 + 8))(a1); /*0x69ed95*/
      return v6; /*0x69ed9c*/
    }
  }
  else
  {
    a2 = 0; /*0x69eda2*/
    if ( a1 == (_DWORD *)24 ) /*0x69edac*/
      return -2147467259; /*0x69edac*/
    v7 = (*(int (__stdcall **)(_DWORD *, void *, _DWORD **))*(a1 - 6))(a1 - 6, &unk_818858, &a1); /*0x69edbd*/
    if ( v7 >= 0 ) /*0x69edc1*/
    {
      v9 = a1; /*0x69edd5*/
      ComPtr::Release_Alt((int *)&a2); /*0x69eddd*/
      v8 = v9; /*0x69ede2*/
      a2 = v9; /*0x69ede5*/
    }
    else
    {
      ComPtr::Release_Alt((int *)&a2); /*0x69edc7*/
      v8 = 0; /*0x69edcc*/
      a2 = 0; /*0x69edce*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x69edf3*/
      WinAPI::Wrapper(v7); /*0x69edf6*/
    if ( !v8 ) /*0x69ee01*/
      return -2147467259; /*0x69ee0a*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*v8 + 12))(v8, v2); /*0x69ee14*/
    if ( a2 ) /*0x69ee1c*/
      (*(void (__stdcall **)(_DWORD *))(*a2 + 8))(a2); /*0x69ee21*/
  }
  return v6; /*0x69ed2a*/
}


// ==== 0x0069EE30  ShipLocomotionClass::QueryInterface  this=ShipLocomotionClass  sig=csp ====
int __stdcall ShipLocomotionClass::_vt00(int a1, const void *a2, int *a3)
{
  int result; // eax
  int v4; // eax

  result = LocomotionClass::QueryInterface(a1, a2, a3); /*0x69ee42*/
  if ( result == -2147467262 ) /*0x69ee4c*/
  {
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x69ee5b*/
    {
      if ( a1 ) /*0x69ee62*/
        v4 = a1 + 24; /*0x69ee64*/
      else
        v4 = 0; /*0x69ee69*/
      *a3 = v4; /*0x69ee6b*/
    }
    if ( *a3 ) /*0x69ee6e*/
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x69ee82*/
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
HRESULT __stdcall ShipLocomotionClass::_vt05(int *a1, int *pStm)
{
  IStream *v2; // edi
  int v3; // ebx
  int v4; // eax
  LPVOID *v5; // esi

  v2 = (IStream *)pStm; /*0x69ee97*/
  v3 = SwizzleManager::SaveLoad(a1, pStm); /*0x69eea2*/
  if ( v3 < 0 ) /*0x69eea6*/
    return v3; /*0x69eea6*/
  if ( a1 ) /*0x69eeaa*/
  {
    a1[26] = 0; /*0x69eeac*/
    *a1 = (int)&ShipLocomotionClass::`vftable'; /*0x69eeb3*/
    a1[1] = (int)&vt_ShipLocomotionClass; /*0x69eeb9*/
    a1[6] = (int)&off_7F2D68; /*0x69eec0*/
  }
  v2->__pad_0->Read(v2, &pStm, 1, 0); /*0x69eed3*/
  if ( !(_BYTE)pStm ) /*0x69eedc*/
    return v3; /*0x69ef08*/
  v4 = a1[26]; /*0x69eede*/
  v5 = (LPVOID *)(a1 + 26); /*0x69eee1*/
  if ( v4 ) /*0x69eee6*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x69eeeb*/
  *v5 = 0; /*0x69eef5*/
  return OleLoadFromStream(v2, &IID_ILocomotion, v5); /*0x69ef01*/
}


// ==== 0x0069EF10  ShipLocomotionClass::LoadFromStream  this=ShipLocomotionClass  sig=csp ====
HRESULT __stdcall ShipLocomotionClass::LoadFromStream(int *a1, int *pPStm, int a3)
{
  IStream *v3; // esi
  int *v4; // edi
  int IPersistStream; // ebx
  int v6; // ecx
  int (__stdcall ***v7)(_DWORD, void *, int **); // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v12; // edx

  v3 = (IStream *)pPStm; /*0x69ef16*/
  v4 = a1; /*0x69ef1b*/
  IPersistStream = LoadIPersistStream(a1, pPStm, a3); /*0x69ef27*/
  if ( IPersistStream < 0 ) /*0x69ef2b*/
    return IPersistStream; /*0x69ef2b*/
  if ( !v4[26] ) /*0x69ef36*/
  {
    v12 = *(_DWORD *)v3->__pad_0; /*0x69efd3*/
    LOBYTE(a3) = 0; /*0x69efdf*/
    (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v12 + 16))(v3, &a3, 1, 0); /*0x69efe4*/
    return IPersistStream; /*0x69efe8*/
  }
  v6 = *(_DWORD *)v3->__pad_0; /*0x69ef3c*/
  LOBYTE(a3) = 1; /*0x69ef48*/
  (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v6 + 16))(v3, &a3, 1, 0); /*0x69ef4d*/
  v7 = (int (__stdcall ***)(_DWORD, void *, int **))v4[26]; /*0x69ef50*/
  pPStm = 0; /*0x69ef53*/
  if ( v7 ) /*0x69ef5d*/
  {
    v8 = (**v7)(v7, &unk_820270, &a1); /*0x69ef6e*/
    if ( v8 >= 0 ) /*0x69ef72*/
    {
      v9 = a1; /*0x69ef8b*/
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
int __stdcall JumpjetLocomotionClass::sub_69EFF0(int a1, int a2)
{
  if ( !a2 ) /*0x69eff6*/
    return -2147467261; /*0x69eff8*/
  if ( *(_DWORD *)(a1 + 80) ) /*0x69f004*/
    return -2147467259; /*0x69f02b*/
  *(_DWORD *)(a1 + 80) = a2; /*0x69f012*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x69f018*/
  return 0; /*0x69effd*/
}


// ==== 0x0069F040  JumpjetLocomotionClass::StubReturnZero_13  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_69F040(int a1, _DWORD *a2)
{
  int v3; // eax

  if ( !a2 ) /*0x69f046*/
    return -2147467261; /*0x69f048*/
  v3 = *(_DWORD *)(a1 + 80); /*0x69f054*/
  if ( !v3 ) /*0x69f059*/
    return 1; /*0x69f069*/
  *a2 = v3; /*0x69f05b*/
  *(_DWORD *)(a1 + 80) = 0; /*0x69f05d*/
  return 0; /*0x69f04d*/
}


// ==== 0x0069F080  JumpjetLocomotionClass::CheckPiggybackState_0  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::sub_69F080(int a1)
{
  return !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)(a1 - 20) + 16))(a1 - 20) /*0x69f0b0*/
      && *(_DWORD *)(a1 + 80)
      && *(_BYTE *)(a1 + 77)
      && !*(_BYTE *)(*(_DWORD *)(a1 - 12) + 1709);
}


// ==== 0x0069F0C0  ObjectClass::method_69F0C0  this=ObjectClass  sig=csp ====
void *__thiscall sub_69F0C0(int *this, void *a2)
{
  int v3; // ebx
  int v4; // edx
  int v5; // eax
  int v6; // edx
  double v7; // st7
  int v8; // ecx
  int v9; // eax
  const void *v10; // eax
  int v11; // edx
  _DWORD v13[12]; // [esp+1Ch] [ebp-60h] BYREF
  char v14[48]; // [esp+4Ch] [ebp-30h] BYREF

  Matrix3x4::Identity(v13); /*0x69f0cc*/
  v3 = this->vtable4; /*0x69f0d1*/
  if ( v3 ) /*0x69f0da*/
  {
    v4 = this->objectTypeFlags; /*0x69f0e0*/
    v5 = this->fallRate; /*0x69f0e3*/
    if ( v4 != -1 ) /*0x69f0ef*/
    {
      if ( (int)MEMORY[0xA8ED84] - v4 >= v5 ) /*0x69f0f7*/
        v5 = 0; /*0x69f0fd*/
      else
        v5 -= (int)MEMORY[0xA8ED84] - v4; /*0x69f0f9*/
    }
    if ( (double)(v3 - v5) / (double)this->vtable4 < 1.0 ) /*0x69f118*/
    {
      v6 = this->vtable4; /*0x69f11a*/
      if ( v6 ) /*0x69f123*/
      {
        v8 = this->objectTypeFlags; /*0x69f12d*/
        v9 = this->fallRate; /*0x69f130*/
        if ( v8 != -1 ) /*0x69f136*/
        {
          if ( (int)MEMORY[0xA8ED84] - v8 >= v9 ) /*0x69f13e*/
            v9 = 0; /*0x69f144*/
          else
            v9 -= (int)MEMORY[0xA8ED84] - v8; /*0x69f140*/
        }
        v7 = (double)(v6 - v9) / (double)this->vtable4; /*0x69f150*/
      }
      else
      {
        v7 = 1.0; /*0x69f125*/
      }
      v10 = InterpolateVoxelAnimPose(v14, this->vtable3, this->referenceCount, v7); /*0x69f165*/
      goto LABEL_17; /*0x69f16a*/
    }
  }
  v11 = this->referenceCount; /*0x69f16c*/
  if ( v11 ) /*0x69f171*/
  {
    v10 = CopyAudioData(v14, v11); /*0x69f177*/
LABEL_17:
    qmemcpy(v13, v10, sizeof(v13)); /*0x69f187*/
  }
  qmemcpy(a2, v13, 0x30u); /*0x69f189*/
  return a2; /*0x69f19a*/
}


// ==== 0x0069F1B0  ObjectClass::method_69F1B0  this=ObjectClass  sig=csp ====
double __thiscall sub_69F1B0(int *this)
{
  int v1; // esi
  int v3; // edx
  int v4; // eax

  v1 = this->vtable4; /*0x69f1b4*/
  if ( !v1 ) /*0x69f1bd*/
    return 1.0; /*0x69f1c9*/
  v3 = this->objectTypeFlags; /*0x69f1ca*/
  v4 = this->fallRate; /*0x69f1cd*/
  if ( v3 != -1 ) /*0x69f1d3*/
  {
    if ( (int)MEMORY[0xA8ED84] - v3 < v4 ) /*0x69f1df*/
      return (double)(v1 - (v4 - ((int)MEMORY[0xA8ED84] - v3))) / (double)v1; /*0x69f1f5*/
    v4 = 0; /*0x69f1f6*/
  }
  return (double)(v1 - v4) / (double)v1; /*0x69f1c5*/
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
    *v3 = MEMORY[0xA8ED84]; /*0x69f232*/
    v3[1] = v4; /*0x69f23a*/
    v3[2] = 3; /*0x69f23d*/
    v3[3] = 3; /*0x69f240*/
    return v4; /*0x69f234*/
  }
  return result; /*0x69f244*/
}


// ==== 0x0069F250  ShipLocomotionClass::InitMovementState_0  this=ShipLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_69F250(_DWORD *a1, int a2)
{
  int v3; // [esp+8h] [ebp-Ch]

  a1[7] = a2; /*0x69f25d*/
  a1[6] = a2; /*0x69f260*/
  a1[8] = MEMORY[0xA8ED84]; /*0x69f26f*/
  a1[9] = v3; /*0x69f275*/
  a1[10] = 0; /*0x69f278*/
  a1[11] = 0; /*0x69f27b*/
  return a1 + 8; /*0x69f27e*/
}


// ==== 0x0069F290  JumpjetLocomotionClass::StubReturnTrue_5  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::sub_69F290(int a1)
{
  if ( *(_DWORD *)(a1 + 48) != MEMORY[0xB077F8] || *(_QWORD *)(a1 + 52) != MEMORY[0xB077FC] ) /*0x69f2b1*/
    return 1; /*0x69f2c1*/
  return (*(_DWORD *)(a1 + 60) != MEMORY[0xB077F8] || *(_QWORD *)(a1 + 64) != MEMORY[0xB077FC]) /*0x69f310*/
      && (*(_DWORD *)(a1 + 60) != *(_DWORD *)(*(_DWORD *)(a1 + 8) + 156)
       || *(_DWORD *)(a1 + 64) != *(_DWORD *)(*(_DWORD *)(a1 + 8) + 160));
}


// ==== 0x0069F330  ShipLocomotionClass::StubReturnTrue_6  this=ShipLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::StubReturnTrue_6(InfantryClass *aP0)
{
  if ( TimerClass::Active(*(_DWORD *)&aP0->__pad_0[8] + 904) ) /*0x69f33e*/
    return 1; /*0x69f347*/
  return (*(unsigned __int8 (__stdcall **)(InfantryClass *))(*(_DWORD *)aP0->__pad_0 + 16))(aP0) /*0x69f389*/
      && (aP0->ambientSoundController[0] != *(_DWORD *)&stru_B05488.__pad_14B0[3776]
       || aP0->ambientSoundController[1] != *(_DWORD *)&stru_B05488.__pad_14B0[3780]
       || aP0->ambientSoundController[2] != *(_DWORD *)&stru_B05488.__pad_14B0[3784])
      && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&aP0->__pad_0[8] + 1336))(*(_DWORD *)&aP0->__pad_0[8]) > 0;
}


// ==== 0x0069F3A0  JumpjetLocomotionClass::GetCoordinate_1  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_69F3A0(_DWORD *a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax

  v2 = a1[13]; /*0x69f3ad*/
  v3 = a1[14]; /*0x69f3b0*/
  *a2 = a1[12]; /*0x69f3b5*/
  a2[1] = v2; /*0x69f3b7*/
  a2[2] = v3; /*0x69f3ba*/
  return a2; /*0x69f3bf*/
}


// ==== 0x0069F3D0  JumpjetLocomotionClass::GetRenderCoordinate_1  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_69F3D0(_DWORD *a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // esi

  if ( a1[15] == MEMORY[0xB077F8] && *((_QWORD *)a1 + 8) == MEMORY[0xB077FC] ) /*0x69f3ee*/
  {
    v4 = a1[2]; /*0x69f41b*/
    v5 = v4 + 156; /*0x69f424*/
    v6 = *(_DWORD *)(v4 + 156); /*0x69f426*/
    v7 = *(_DWORD *)(v4 + 160); /*0x69f428*/
    v8 = *(_DWORD *)(v5 + 8); /*0x69f42b*/
    *a2 = v6; /*0x69f434*/
    a2[1] = v7; /*0x69f436*/
    a2[2] = v8; /*0x69f439*/
    return a2; /*0x69f42e*/
  }
  else
  {
    v2 = a1[16]; /*0x69f404*/
    v3 = a1[17]; /*0x69f407*/
    *a2 = a1[15]; /*0x69f40c*/
    a2[1] = v2; /*0x69f40e*/
    a2[2] = v3; /*0x69f411*/
    return a2; /*0x69f414*/
  }
}


// ==== 0x0069F450  ShipLocomotionClass::ConvertCoordToCell_2  this=ShipLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::ConvertCoordToCell_2(int arg0, _DWORD *a1, unsigned int aP1_4, IUnknown *aP3)
{
  _DWORD *result; // eax
  unsigned int v5; // ecx
  IUnknown *v6; // edx

  result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(arg0 + 8) + 892))(*(_DWORD *)(arg0 + 8)); /*0x69f45b*/
  if ( !(_BYTE)result ) /*0x69f463*/
  {
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(arg0 + 8) + 896))(*(_DWORD *)(arg0 + 8)); /*0x69f46e*/
    if ( !(_BYTE)result ) /*0x69f476*/
    {
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(arg0 + 8) + 468))(*(_DWORD *)(arg0 + 8)); /*0x69f481*/
      if ( !(_BYTE)result ) /*0x69f489*/
      {
        result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(arg0 + 8) + 472))(*(_DWORD *)(arg0 + 8)); /*0x69f490*/
        if ( !(_BYTE)result ) /*0x69f498*/
        {
          result = a1; /*0x69f49a*/
          v5 = aP1_4; /*0x69f49e*/
          v6 = aP3; /*0x69f4a2*/
          *(_DWORD *)(arg0 + 48) = a1; /*0x69f4a9*/
          *(_DWORD *)(arg0 + 52) = v5; /*0x69f4ac*/
          *(_DWORD *)(arg0 + 56) = v6; /*0x69f4af*/
          if ( result != *(_DWORD **)&stru_B05488.__pad_14B0[3776] /*0x69f4ca*/
            || v5 != *(_DWORD *)&stru_B05488.__pad_14B0[3780]
            || v6 != *(IUnknown **)&stru_B05488.__pad_14B0[3784] )
          {
            a1 = result; /*0x69f4cc*/
            aP1_4 = v5; /*0x69f4d4*/
            aP3 = v6; /*0x69f4de*/
            result = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&a1); /*0x69f4e2*/
            if ( (result[80] & 0x100) != 0 ) /*0x69f4f0*/
            {
              result = (_DWORD *)(*(_DWORD *)&stru_B05488.__pad_14B0[3828] + *(_DWORD *)(arg0 + 56)); /*0x69f4fb*/
              *(_DWORD *)(arg0 + 56) = result; /*0x69f4fd*/
            }
          }
        }
      }
    }
  }
  return result; /*0x69f500*/
}


// ==== 0x0069F510  ShipLocomotionClass::CheckWindowsErrorWrapper_1  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_69F510(int a1)
{
  int v1; // eax
  int v2; // esi
  double v3; // st7
  int result; // eax

  if ( *(_DWORD *)(a1 + 60) != MEMORY[0xB077F8] || *(_QWORD *)(a1 + 64) != MEMORY[0xB077FC] ) /*0x69f52d*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)) + 3220) ) /*0x69f546*/
    {
      v1 = *(_DWORD *)(a1 + 8); /*0x69f550*/
      if ( !*(_BYTE *)(v1 + 1744) ) /*0x69f553*/
      {
        v2 = *(_DWORD *)(v1 + 1736); /*0x69f55d*/
        if ( v2 ) /*0x69f565*/
        {
          do /*0x69f597*/
          {
            if ( !*(_DWORD *)(v2 + 1652) ) /*0x69f567*/
              WinAPI::Wrapper(-2147467261); /*0x69f576*/
            (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v2 + 1652) + 72))(*(_DWORD *)(v2 + 1652)); /*0x69f584*/
            v2 = *(_DWORD *)(v2 + 1736); /*0x69f587*/
          }
          while ( v2 && v2 != *(_DWORD *)(v2 + 1736) ); /*0x69f597*/
        }
      }
    }
  }
  if ( *(double *)(a1 + 76) >= 0.300000011920929 ) /*0x69f5a7*/
    v3 = 0.300000011920929; /*0x69f5ae*/
  else
    v3 = *(double *)(a1 + 76); /*0x69f5a9*/
  *(double *)(a1 + 76) = v3; /*0x69f5b4*/
  *(_DWORD *)(a1 + 48) = MEMORY[0xB077F8]; /*0x69f5c0*/
  result = MEMORY[0xB077FC]; /*0x69f5c2*/
  *(_QWORD *)(a1 + 52) = MEMORY[0xB077FC]; /*0x69f5c7*/
  return result; /*0x69f5d3*/
}


// ==== 0x0069F5E0  ObjectClass::method_69F5E0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_69F5E0(_DWORD *this)
{
  int v1; // edi
  double v2; // st7
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  BOOL result; // eax

  v1 = this->nextObject; /*0x69f5e4*/
  if ( v1 ) /*0x69f5ed*/
  {
    v3 = this->fallRate; /*0x69f5f7*/
    v4 = this->objectTypeFlags; /*0x69f5fb*/
    if ( v4 != -1 ) /*0x69f601*/
    {
      if ( (int)MEMORY[0xA8ED84] - v4 >= v3 ) /*0x69f60d*/
        v3 = 0; /*0x69f613*/
      else
        v3 -= (int)MEMORY[0xA8ED84] - v4; /*0x69f60f*/
    }
    v2 = (double)(v1 - v3) / (double)(int)this->nextObject; /*0x69f620*/
  }
  else
  {
    v2 = 1.0; /*0x69f5ef*/
  }
  result = 0; /*0x69f65f*/
  if ( v2 == 1.0 ) /*0x69f630*/
  {
    v5 = this->vtable4; /*0x69f632*/
    if ( fabs(*(float *)(v5 + 808)) < 0.005 && fabs(*(float *)(v5 + 812)) < 0.005 ) /*0x69f65d*/
      return 1; /*0x69f630*/
  }
  return result; /*0x69f664*/
}


// ==== 0x0069F670  JumpjetLocomotionClass::ComputeVoxelTransform2  this=JumpjetLocomotionClass  sig=csp ====
float *__stdcall Voxel_ComputeTransform2(_DWORD *a1, float *a2, _DWORD *a3)
{
  int v3; // edi
  double v4; // st7
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  double v8; // st7
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  float *v12; // eax
  int v13; // ebx
  int *v14; // ecx
  int v15; // edi
  int v16; // eax
  double v17; // st7
  int v18; // edi
  const void *v19; // eax
  int v20; // esi
  float *v21; // eax
  float *v22; // edx
  float *v23; // ecx
  int v24; // ecx
  float *Transform; // eax
  int v26; // ebx
  int v27; // edx
  int v28; // eax
  int v29; // edx
  double v30; // st7
  int v31; // ecx
  int v32; // eax
  const void *v33; // eax
  int v34; // esi
  float v36; // [esp+4h] [ebp-234h]
  float v37; // [esp+4h] [ebp-234h]
  float v38; // [esp+4h] [ebp-234h]
  float *v39; // [esp+4h] [ebp-234h]
  float v40; // [esp+14h] [ebp-224h]
  int v41; // [esp+14h] [ebp-224h]
  float v42; // [esp+18h] [ebp-220h]
  int v43; // [esp+18h] [ebp-220h]
  float v44; // [esp+1Ch] [ebp-21Ch]
  int v45; // [esp+1Ch] [ebp-21Ch]
  float v46; // [esp+20h] [ebp-218h]
  int v47; // [esp+20h] [ebp-218h]
  float v48; // [esp+24h] [ebp-214h]
  int v49; // [esp+24h] [ebp-214h]
  _DWORD v50[12]; // [esp+28h] [ebp-210h] BYREF
  float v51[12]; // [esp+58h] [ebp-1E0h] BYREF
  float v52[12]; // [esp+88h] [ebp-1B0h] BYREF
  float v53[12]; // [esp+B8h] [ebp-180h] BYREF
  float v54[12]; // [esp+E8h] [ebp-150h] BYREF
  float v55[12]; // [esp+118h] [ebp-120h] BYREF
  float v56[12]; // [esp+148h] [ebp-F0h] BYREF
  char v57[48]; // [esp+178h] [ebp-C0h] BYREF
  float v58[12]; // [esp+1A8h] [ebp-90h] BYREF
  _BYTE v59[48]; // [esp+1D8h] [ebp-60h] BYREF
  float v60[12]; // [esp+208h] [ebp-30h] BYREF

  v3 = a1[11]; /*0x69f682*/
  if ( v3 ) /*0x69f68b*/
  {
    v5 = a1[8]; /*0x69f695*/
    v6 = a1[10]; /*0x69f698*/
    if ( v5 != -1 ) /*0x69f69e*/
    {
      if ( (int)MEMORY[0xA8ED84] - v5 >= v6 ) /*0x69f6aa*/
        v6 = 0; /*0x69f6b0*/
      else
        v6 -= (int)MEMORY[0xA8ED84] - v5; /*0x69f6ac*/
    }
    v4 = (double)(v3 - v6) / (double)(int)a1[11]; /*0x69f6bc*/
  }
  else
  {
    v4 = 1.0; /*0x69f68d*/
  }
  if ( v4 == 1.0 ) /*0x69f6cb*/
  {
    v7 = a1[2]; /*0x69f6cd*/
    if ( fabs(*(float *)(v7 + 808)) < 0.005 && fabs(*(float *)(v7 + 812)) < 0.005 ) /*0x69f6f8*/
    {
      if ( a3 && *a3 != -1 ) /*0x69f9cf*/
      {
        v24 = *a3 << 6; /*0x69f9d1*/
        *a3 = v24; /*0x69f9d4*/
        *a3 = v24 + a1[6]; /*0x69f9db*/
      }
      Transform = Turret::GetTransform((signed int)a1, v55, a3); /*0x69f9e7*/
      Transform::Copy(v54, Transform); /*0x69f9f4*/
      Matrix3x4::Identity(v50); /*0x69f9fd*/
      v26 = a1[11]; /*0x69fa02*/
      if ( !v26 ) /*0x69fa0b*/
        goto LABEL_48; /*0x69fa0b*/
      v27 = a1[8]; /*0x69fa11*/
      v28 = a1[10]; /*0x69fa14*/
      if ( v27 != -1 ) /*0x69fa20*/
      {
        if ( (int)MEMORY[0xA8ED84] - v27 >= v28 ) /*0x69fa28*/
          v28 = 0; /*0x69fa2e*/
        else
          v28 -= (int)MEMORY[0xA8ED84] - v27; /*0x69fa2a*/
      }
      if ( (double)(v26 - v28) / (double)(int)a1[11] < 1.0 ) /*0x69fa49*/
      {
        v29 = a1[11]; /*0x69fa4b*/
        if ( v29 ) /*0x69fa54*/
        {
          v31 = a1[8]; /*0x69fa5e*/
          v32 = a1[10]; /*0x69fa61*/
          if ( v31 != -1 ) /*0x69fa67*/
          {
            if ( (int)MEMORY[0xA8ED84] - v31 >= v32 ) /*0x69fa6f*/
              v32 = 0; /*0x69fa75*/
            else
              v32 -= (int)MEMORY[0xA8ED84] - v31; /*0x69fa71*/
          }
          v30 = (double)(v29 - v32) / (double)(int)a1[11]; /*0x69fa81*/
        }
        else
        {
          v30 = 1.0; /*0x69fa56*/
        }
        v33 = InterpolateVoxelAnimPose(v58, a1[7], a1[6], v30); /*0x69fa99*/
      }
      else
      {
LABEL_48:
        v34 = a1[6]; /*0x69faa0*/
        if ( !v34 ) /*0x69faa5*/
        {
LABEL_51:
          qmemcpy(v53, v50, sizeof(v53)); /*0x69fad9*/
          v39 = v54; /*0x69fadb*/
          v22 = v53; /*0x69fadc*/
          v23 = (float *)v57; /*0x69fae3*/
          goto LABEL_52; /*0x69fae3*/
        }
        v33 = CopyAudioData((char *)v56, v34); /*0x69fab0*/
      }
      qmemcpy(v50, v33, sizeof(v50)); /*0x69fac0*/
      goto LABEL_51; /*0x69fac0*/
    }
  }
  Matrix3x4::Identity(v51); /*0x69f702*/
  Matrix3x4::Identity(v52); /*0x69f70e*/
  v44 = *(double *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[2] + 132))(a1[2]) + 864); /*0x69f729*/
  v46 = *(double *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[2] + 132))(a1[2]) + 872); /*0x69f73f*/
  v40 = Math::ArcTan2(*(float *)(a1[2] + 812)); /*0x69f754*/
  v48 = Math::SinCos(*(float *)(a1[2] + 812)); /*0x69f769*/
  v42 = Math::ArcTan2(*(float *)(a1[2] + 808)); /*0x69f77e*/
  v8 = Math::SinCos(*(float *)(a1[2] + 808)); /*0x69f78b*/
  v49 = Math::RoundToInt(fabs(v8) * v44 + fabs(v48) * v46); /*0x69f7b2*/
  v41 = Math::RoundToInt(v40 * v46); /*0x69f7bb*/
  v9 = Math::RoundToInt(v46 - (double)v41); /*0x69f7d4*/
  v47 = v9; /*0x69f7d6*/
  v43 = Math::RoundToInt(v42 * v44); /*0x69f7df*/
  v10 = Math::RoundToInt(v44 - (double)v43); /*0x69f7eb*/
  v11 = a1[2]; /*0x69f7f0*/
  v45 = v10; /*0x69f7f5*/
  if ( *(float *)(v11 + 812) < 0.0 ) /*0x69f80a*/
    v47 = -v9; /*0x69f80e*/
  if ( *(float *)(v11 + 808) > 0.0 ) /*0x69f823*/
    v45 = -v10; /*0x69f827*/
  v36 = (float)v49; /*0x69f834*/
  Matrix3x3::ApplyCol1(v51, v36); /*0x69f837*/
  v37 = (float)v47; /*0x69f848*/
  Matrix3x4::Translate(v52, v37); /*0x69f84b*/
  v38 = (float)v45; /*0x69f85c*/
  Matrix3x3::ApplyCol0(v52, v38); /*0x69f85f*/
  Matrix3x3::RotateX(v52, *(float *)(a1[2] + 808)); /*0x69f875*/
  Matrix3D::RotateZ(v52, *(float *)(a1[2] + 812)); /*0x69f88b*/
  if ( a3 ) /*0x69f895*/
    *a3 = -1; /*0x69f897*/
  v12 = Turret::GetTransform((signed int)a1, v60, a3); /*0x69f8a7*/
  Transform::Copy(v53, v12); /*0x69f8b4*/
  Matrix3x4::Identity(v50); /*0x69f8bd*/
  v13 = a1[11]; /*0x69f8c2*/
  v14 = a1 + 8; /*0x69f8c5*/
  if ( v13 ) /*0x69f8ce*/
  {
    v15 = *v14; /*0x69f8d0*/
    v16 = a1[10]; /*0x69f8d2*/
    if ( *v14 != -1 ) /*0x69f8d8*/
    {
      if ( (int)MEMORY[0xA8ED84] - v15 >= v16 ) /*0x69f8e4*/
        v16 = 0; /*0x69f8ea*/
      else
        v16 -= (int)MEMORY[0xA8ED84] - v15; /*0x69f8e6*/
    }
    if ( (double)(v13 - v16) / (double)(int)a1[11] < 1.0 ) /*0x69f905*/
    {
      if ( a1[11] ) /*0x69f907*/
      {
        v18 = a1[11]; /*0x69f916*/
        v17 = (double)(v18 - Timeout::GetRemaining(v14)) / (double)v18; /*0x69f92c*/
      }
      else
      {
        v17 = 1.0; /*0x69f90e*/
      }
      v19 = InterpolateVoxelAnimPose(v59, a1[7], a1[6], v17); /*0x69f944*/
      goto LABEL_29; /*0x69f949*/
    }
  }
  v20 = a1[6]; /*0x69f94b*/
  if ( v20 ) /*0x69f950*/
  {
    v19 = CopyAudioData(v57, v20); /*0x69f95b*/
LABEL_29:
    qmemcpy(v50, v19, sizeof(v50)); /*0x69f96b*/
  }
  qmemcpy(v54, v50, sizeof(v54)); /*0x69f984*/
  v39 = v52; /*0x69f994*/
  v21 = MultiplyMatrix3x4(v56, v51, v54); /*0x69f9a2*/
  v22 = MultiplyMatrix3x4(v58, v21, v53); /*0x69f9b5*/
  v23 = v55; /*0x69f9b7*/
LABEL_52:
  qmemcpy(v51, MultiplyMatrix3x4(v23, v22, v39), sizeof(v51)); /*0x69faea*/
  qmemcpy(a2, v51, 0x30u); /*0x69fb0a*/
  return a2; /*0x69fb0c*/
}


// ==== 0x0069FB20  ShipLocomotionClass::ComputeAudio3DRotation_1  this=ShipLocomotionClass  sig=csp ====
float *__stdcall JumpjetLocomotionClass::sub_69FB20(_DWORD *a1, float *a2, _DWORD *a3)
{
  int v3; // edi
  double v4; // st7
  int v5; // edx
  int v6; // eax
  int v7; // edx
  float v9[12]; // [esp+Ch] [ebp-30h] BYREF

  v3 = a1[11]; /*0x69fb29*/
  if ( v3 ) /*0x69fb32*/
  {
    v5 = a1[8]; /*0x69fb3c*/
    v6 = a1[10]; /*0x69fb3f*/
    if ( v5 != -1 ) /*0x69fb45*/
    {
      if ( (int)MEMORY[0xA8ED84] - v5 >= v6 ) /*0x69fb51*/
        v6 = 0; /*0x69fb57*/
      else
        v6 -= (int)MEMORY[0xA8ED84] - v5; /*0x69fb53*/
    }
    v4 = (double)(v3 - v6) / (double)(int)a1[11]; /*0x69fb63*/
  }
  else
  {
    v4 = 1.0; /*0x69fb34*/
  }
  if ( v4 != 1.0 || (v7 = a1[2], fabs(*(float *)(v7 + 808)) >= 0.005) || fabs(*(float *)(v7 + 812)) >= 0.005 ) /*0x69fba3*/
  {
    if ( a3 ) /*0x69fba7*/
      *a3 = -1; /*0x69fba9*/
  }
  qmemcpy(a2, Audio3D::ComputeRotation((int)a1, v9, a3), 0x30u); /*0x69fbc8*/
  return a2; /*0x69fbca*/
}


// ==== 0x0069FBE0  ShipLocomotionClass::DispatchVirtualCall_6  this=ShipLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_69FBE0(int *a1)
{
  int v1; // edi
  int v2; // eax

  v1 = *a1; /*0x69fbe9*/
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1[2] + 444))(a1[2]); /*0x69fbed*/
  return (*(int (__stdcall **)(int *, _DWORD))(v1 + 124))(a1, *(unsigned __int8 *)(v2 + 284)); /*0x69fc00*/
}


// ==== 0x0069FC10  ShipLocomotionClass::ProcessImpact  this=ShipLocomotionClass  sig=csp ====
char __stdcall WalkLocomotionClass_Process(int a1)
{
  int v1; // esi
  int v2; // edi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  _DWORD *v6; // ecx
  _WORD *v7; // ebp
  _WORD *v8; // eax
  _DWORD *v9; // ecx
  _DWORD *v11; // ecx
  _BYTE *v12; // ecx
  void **v13; // eax
  int *v14; // ecx
  int v15; // ecx
  _BYTE *v16; // eax
  int v17; // eax
  int v18; // ecx
  _DWORD *v19; // eax
  _BYTE *v20; // ecx
  _DWORD *v21; // ecx
  char v22; // [esp-4h] [ebp-24h]
  int v23; // [esp+10h] [ebp-10h] BYREF
  int v24; // [esp+14h] [ebp-Ch]
  int v25; // [esp+18h] [ebp-8h]

  v1 = a1; /*0x69fc16*/
  v2 = a1 - 4; /*0x69fc28*/
  v3 = *(unsigned __int8 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 444))(*(_DWORD *)(a1 + 8)) + 284); /*0x69fc31*/
  v4 = *(_DWORD *)(v2 + 28); /*0x69fc33*/
  if ( v3 != v4 ) /*0x69fc38*/
  {
    *(_DWORD *)(v2 + 32) = v4; /*0x69fc3a*/
    *(_DWORD *)(v2 + 28) = v3; /*0x69fc43*/
    Timer::Start(&v23, 3); /*0x69fc46*/
    *(_DWORD *)(v2 + 36) = v23; /*0x69fc57*/
    *(_DWORD *)(v2 + 40) = v24; /*0x69fc5d*/
    *(_DWORD *)(v2 + 44) = v25; /*0x69fc64*/
    *(_DWORD *)(v2 + 48) = 3; /*0x69fc67*/
  }
  if ( *(_DWORD *)(v1 + 84) == -1 || !*(_BYTE *)(v1 + 95) ) /*0x69fc7a*/
  {
    v5 = *(_DWORD *)(*(_DWORD *)(v1 + 8) + 1444); /*0x69fd16*/
    if ( v5 /*0x69fd54*/
      && (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 11
      && (v6 = *(_DWORD **)(v1 + 8),
          v7 = (_WORD *)(v6[361] + 36),
          v8 = (_WORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v6 + 440))(v6, &a1),
          *v8 == *v7)
      && v8[1] == v7[1] )
    {
      v9 = *(_DWORD **)(v2 + 12); /*0x69fd56*/
      if ( !v9[358] ) /*0x69fd59*/
        goto LABEL_20; /*0x69fd5f*/
    }
    else
    {
      v11 = *(_DWORD **)(v1 + 8); /*0x69fd7f*/
      if ( v11[43] != 5 /*0x69fddc*/
        || *(_BYTE *)(v1 + 95)
        || *(_DWORD *)(v1 + 48) == MEMORY[0xB077F8] && *(_QWORD *)(v1 + 52) == MEMORY[0xB077FC]
        || v11[39] != *(_DWORD *)(v1 + 48)
        || v11[40] != *(_DWORD *)(v1 + 52)
        || v11[41] != *(_DWORD *)(v1 + 56) )
      {
        if ( TimerClass::Active((int)(v11 + 226)) ) /*0x69fe28*/
        {
          *(_BYTE *)(v1 + 94) = 1; /*0x69fe35*/
          goto LABEL_32; /*0x69fe35*/
        }
        if ( *(_BYTE *)(v1 + 94) ) /*0x69ff5d*/
        {
          *(_BYTE *)(v1 + 94) = 0; /*0x69ff62*/
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v1 + 8) + 396))(*(_DWORD *)(v1 + 8), 0); /*0x69ff6b*/
          v16 = *(_BYTE **)(v1 + 8); /*0x69ff71*/
          if ( !v16[144] || v16[129] || v16[141] ) /*0x69ff84*/
            return 0; /*0x69ff95*/
        }
        if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 388))(*(_DWORD *)(v1 + 8)) == 5 /*0x69ffc4*/
          && !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1)
          || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 388))(*(_DWORD *)(v1 + 8)) == 16 )
        {
          goto LABEL_32; /*0x69ffc4*/
        }
        if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1) ) /*0x69ffcd*/
        {
          v17 = *(_DWORD *)(v1 + 8); /*0x69ffd8*/
          if ( *(_DWORD *)(v17 + 1504) == -1 ) /*0x69ffe1*/
          {
            if ( *(_BYTE *)(v17 + 973) ) /*0x69ffe7*/
            {
              if ( *(_DWORD *)(v2 + 64) != MEMORY[0xB077F8] || *(_QWORD *)(v2 + 68) != MEMORY[0xB077FC] ) /*0x6a0006*/
              {
                *(_DWORD *)(v2 + 64) = MEMORY[0xB077F8]; /*0x6a0015*/
                *(_QWORD *)(v2 + 68) = MEMORY[0xB077FC]; /*0x6a001d*/
                *(_BYTE *)(v2 + 99) = 0; /*0x6a0029*/
              }
              *(_DWORD *)(v1 + 76) = 0; /*0x6a002c*/
              *(_DWORD *)(v1 + 80) = 0; /*0x6a002f*/
            }
            else
            {
              v18 = *(_DWORD *)(v17 + 1444); /*0x6a0037*/
              if ( v18 ) /*0x6a003f*/
              {
                v19 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v18 + 76))( /*0x6a004d*/
                                  v18,
                                  &v23,
                                  *(_DWORD *)(v1 + 8));
                (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v1 + 68))(v1, *v19, v19[1], v19[2]); /*0x6a0069*/
              }
            }
            goto LABEL_32; /*0x6a0032*/
          }
        }
        v20 = *(_BYTE **)(v1 + 8); /*0x6a0074*/
        if ( v20[981] /*0x6a00ab*/
          && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v20 + 388))(v20) != 7
          && (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1)
          && !(*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(v1 + 8) + 716))(
                *(_DWORD *)(v1 + 8),
                v1 + 48) )
        {
          if ( *(_DWORD *)(v2 + 64) != MEMORY[0xB077F8] || *(_QWORD *)(v2 + 68) != MEMORY[0xB077FC] ) /*0x6a00cc*/
          {
            *(_DWORD *)(v2 + 64) = MEMORY[0xB077F8]; /*0x6a00db*/
            *(_QWORD *)(v2 + 68) = MEMORY[0xB077FC]; /*0x6a00e3*/
            *(_BYTE *)(v2 + 99) = 0; /*0x6a00ef*/
          }
          v21 = *(_DWORD **)(v2 + 12); /*0x6a00f2*/
          if ( v21[358] ) /*0x6a00f5*/
          {
            FootClass::ClearPathIndex(v21); /*0x6a010d*/
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(v2 + 12) + 1156))( /*0x6a011a*/
                   *(_DWORD *)(v2 + 12),
                   0,
                   1) )
            {
              return 0; /*0x6a0131*/
            }
          }
          else
          {
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v21 + 1152))(v21, 0, 1); /*0x6a0102*/
          }
          goto LABEL_32; /*0x6a0108*/
        }
        LOBYTE(a1) = 0; /*0x6a013e*/
        WalkLocomotion::Update(v1 - 4, &a1, 1, 0); /*0x6a0142*/
        if ( (_BYTE)a1 ) /*0x6a014b*/
          return 0; /*0x6a0156*/
        if ( !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 144) ) /*0x6a015c*/
          return 0; /*0x6a016d*/
        v22 = 0; /*0x6a0170*/
        goto LABEL_81; /*0x6a0170*/
      }
      v9 = *(_DWORD **)(v2 + 12); /*0x69fdde*/
      if ( !v9[358] ) /*0x69fde7*/
      {
LABEL_20:
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v9 + 1152))(v9, 0, 1); /*0x69fd65*/
        return 0; /*0x69fd79*/
      }
    }
    FootClass::ClearPathIndex(v9); /*0x69fe00*/
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(v2 + 12) + 1156))(*(_DWORD *)(v2 + 12), 0, 1); /*0x69fe0d*/
    return 0; /*0x69fe1c*/
  }
  if ( WalkLocomotion::ProcessCollision(v1 - 4, 0) || !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 144) ) /*0x69fc96*/
    return 0; /*0x69fc9c*/
  if ( *(_DWORD *)(v1 + 84) != -1 /*0x69fcd4*/
    || !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1)
    && *(_DWORD *)(*(_DWORD *)(v1 + 8) + 1504) == -1
    || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 44))(*(_DWORD *)(v1 + 8)) == 1
    && *(_BYTE *)(*(_DWORD *)(v1 + 8) + 1745) )
  {
    goto LABEL_32; /*0x69fcda*/
  }
  LOBYTE(a1) = 0; /*0x69fcea*/
  WalkLocomotion::Update(v1 - 4, &a1, 1, 0); /*0x69fcee*/
  if ( (_BYTE)a1 || !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 144) ) /*0x69fd00*/
    return 0; /*0x69fd06*/
  v22 = 1; /*0x69fd0c*/
LABEL_81:
  WalkLocomotion::ProcessCollision(v1 - 4, v22); /*0x6a0171*/
  if ( !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 144) ) /*0x6a017b*/
    return 0; /*0x6a018a*/
LABEL_32:
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 128))(v1) ) /*0x69fe3c*/
  {
    if ( !((int)MEMORY[0xA8ED84] % 8) /*0x69fe6e*/
      && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 132))(*(_DWORD *)(v1 + 8)) + 3433) )
    {
      v12 = *(_BYTE **)(v1 + 8); /*0x69fe76*/
      if ( !v12[140] && *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v12 + 444))(v12) + 236) == 2 ) /*0x69fe90*/
      {
        if ( MEMORY[0x8871E0]->InfantryBrute ) /*0x69fe97*/
        {
          v13 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x69fea4*/
          if ( v13 ) /*0x69feae*/
          {
            v14 = (int *)(*(_DWORD *)(v1 + 8) + 156); /*0x69feb4*/
            v23 = *v14; /*0x69fec5*/
            v24 = v14[1]; /*0x69fecc*/
            v25 = v14[2]; /*0x69fed8*/
            AnimClass::ctor(v13, (void *)MEMORY[0x8871E0]->InfantryBrute, &v23, 0, 1, (void *)0x600, 0, 0); /*0x69feeb*/
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(v1 + 48) == MEMORY[0xB077F8] /*0x69ff1e*/
    && *(_DWORD *)(v1 + 52) == (_DWORD)MEMORY[0xB077FC]
    && *(_QWORD *)(v1 + 56) == __PAIR64__(MEMORY[0xB077F8], HIDWORD(MEMORY[0xB077FC]))
    && *(_QWORD *)(v1 + 64) == MEMORY[0xB077FC] )
  {
    v15 = *(_DWORD *)(v1 + 8); /*0x69ff25*/
    if ( *(_DWORD *)(v15 + 1504) == -1 && *(double *)(v15 + 1400) > 0.0 ) /*0x69ff41*/
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v15 + 1348))(v15, 0, 0); /*0x69ff47*/
  }
  return (*(int (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1); /*0x69fd72*/
}

