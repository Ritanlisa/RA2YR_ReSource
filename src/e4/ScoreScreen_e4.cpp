// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x690A10
unsigned int * ScoreScreen::LoadScoreFont(ScoreFontClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall ScoreScreen::LoadScoreFont(_DWORD *this, ScoreFontClass *aP1)
{
  IUnknown *v3; // edx
  int v4; // eax
  _DWORD v6[22]; // [esp+8h] [ebp-6Ch] BYREF
  _BYTE v7[12]; // [esp+60h] [ebp-14h] BYREF
  int v8; // [esp+6Ch] [ebp-8h]

  *(this + 1) = 0; /*0x690a19*/
  *(this + 2) = 0; /*0x690a1c*/
  *(this + 3) = 0; /*0x690a1f*/
  *(this + 5) = 0; /*0x690a22*/
  *this = &vt_ScoreFontClass; /*0x690a25*/
  ScoreScreen::LoadAudio(); /*0x690a2b*/
  v3 = (IUnknown *)++*(_DWORD *)&stru_B05488.__pad_FC[8]; /*0x690a3b*/
  LOBYTE(v3) = 0; /*0x690a42*/
  *this = &vt_ScoreFullFontClass; /*0x690a44*/
  *((_BYTE *)this + 16) = 0; /*0x690a4a*/
  v4 = SearchMIXFile((char *)&stru_830620.field_44, v3); /*0x690a4d*/
  *(this + 3) = v4; /*0x690a54*/
  if ( !v4 ) /*0x690a57*/
  {
    CCFileClass::Construct(v6, (char *)&stru_830620.field_44); /*0x690a62*/
    *(this + 3) = CCFileClass::ReadEntireFile(v6); /*0x690a74*/
    *((_BYTE *)this + 16) = 1; /*0x690a77*/
    CCFileClass::Reset(v6); /*0x690a7b*/
    Debug::Log(); /*0x690a85*/
    v6[0] = &vt_CCFileClass; /*0x690a91*/
    v8 = 0; /*0x690a99*/
    Vector::Clear((int)v7); /*0x690a9d*/
    v6[0] = &off_7E1668; /*0x690aa6*/
    BufferIOFileClass::Dtor(v6); /*0x690aae*/
  }
  *(this + 1) = 11; /*0x690ab7*/
  *(this + 5) = aP1; /*0x690abe*/
  *(this + 2) = 21; /*0x690ac1*/
  return this; /*0x690aca*/
}
}

// 0x690AE0
unsigned int * ScoreScreen::LoadCountryFlags(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_690AE0(_DWORD *this, int a2)
{
  int v3; // eax
  _DWORD v5[22]; // [esp+8h] [ebp-6Ch] BYREF
  _BYTE v6[12]; // [esp+60h] [ebp-14h] BYREF
  int v7; // [esp+6Ch] [ebp-8h]

  *(this + 1) = 0; /*0x690ae9*/
  *(this + 2) = 0; /*0x690aec*/
  *(this + 3) = 0; /*0x690aef*/
  *(this + 5) = 0; /*0x690af2*/
  *this = &vt_ScoreFontClass; /*0x690af5*/
  ScoreScreen::LoadAudio(); /*0x690afb*/
  ++MEMORY[0xB0558C]; /*0x690b0c*/
  *this = &vt_ScoreBigFontClass; /*0x690b14*/
  *((_BYTE *)this + 16) = 0; /*0x690b1a*/
  v3 = SearchMIXFile(MEMORY[0x83E6DC], 0); /*0x690b1d*/
  *(this + 3) = v3; /*0x690b24*/
  if ( !v3 ) /*0x690b27*/
  {
    CCFileClass::Construct(v5, MEMORY[0x83E6DC]); /*0x690b32*/
    *(this + 3) = CCFileClass::ReadEntireFile(v5); /*0x690b44*/
    *((_BYTE *)this + 16) = 1; /*0x690b47*/
    CCFileClass::Reset(v5); /*0x690b4b*/
    Debug::Log(); /*0x690b55*/
    v5[0] = &vt_CCFileClass; /*0x690b61*/
    v7 = 0; /*0x690b69*/
    Vector::Clear((int)v6); /*0x690b6d*/
    v5[0] = &off_7E1668; /*0x690b76*/
    BufferIOFileClass::Dtor(v5); /*0x690b7e*/
  }
  *(this + 1) = 20; /*0x690b87*/
  *(this + 5) = a2; /*0x690b8e*/
  *(this + 2) = 35; /*0x690b91*/
  return this; /*0x690b9a*/
}
}

// 0x690F30
unsigned int * ScoreScreen::Constructor(ScoreAnimClass * aP1, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall ScoreScreen::Constructor(_DWORD *this, ScoreAnimClass *aP1, int a3, int a4)
{
  *(this + 2) = a3; /*0x690f3b*/
  *(this + 1) = aP1; /*0x690f41*/
  *(this + 3) = Timer::GetTicks(); /*0x690f4d*/
  *(this + 5) = 0; /*0x690f50*/
  *(this + 6) = a4; /*0x690f57*/
  *this = &vt_ScoreAnimClass; /*0x690f5a*/
  return this; /*0x690f62*/
}
}

// 0x7712C0
void ScoreScreen::RemoveItem(int a2, int a3, ObjectClass * aP3, char a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall ScoreScreen::RemoveItem(int this, int a2, int a3, ObjectClass *aP3, char a5, int a6)
{
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // edx
  int v13; // ebx
  int v14; // ecx
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // ebp
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  void *v24[4]; // [esp+10h] [ebp-10h] BYREF

  v7 = *(_DWORD *)(this + 976); /*0x7712d5*/
  v8 = v7 - 1; /*0x7712d7*/
  if ( v7 > *(_DWORD *)(this + 956) ) /*0x7712da*/
  {
    do /*0x77131c*/
    {
      v9 = *(_DWORD *)(this + 976); /*0x7712dc*/
      if ( v8 < v9 ) /*0x7712e4*/
      {
        v10 = v9 - 1; /*0x7712e6*/
        v11 = v8; /*0x7712e7*/
        for ( *(_DWORD *)(this + 976) = v10; v11 < *(_DWORD *)(this + 976); ++v11 ) /*0x7712f1*/
          String::Reassign( /*0x771301*/
            (char **)(*(_DWORD *)(this + 964) + 4 * v11),
            (AbstractClass *)(*(_DWORD *)(this + 964) + 4 * v11 + 4));
      }
      v12 = v8--; /*0x771317*/
    }
    while ( v12 > *(_DWORD *)(this + 956) ); /*0x77131c*/
  }
  if ( !*(_DWORD *)(this + 956) ) /*0x77131e*/
    *(_BYTE *)(this + 952) = 1; /*0x771328*/
  unknown_libname_73(v24); /*0x771333*/
  v13 = 48 * a3 + this + 148 * a2; /*0x771352*/
  if ( Map_Remove(*(_DWORD *)this, v13 + 8, v24) )
  {
    if ( !(unsigned __int8)Audio::IsPlaying() ) /*0x77136a*/
    {
      *(_DWORD *)(this + 940) = Timer::GetTicks(); /*0x771386*/
      *(void **)(this + 944) = v24[2]; /*0x771390*/
      *(_DWORD *)(this + 948) = a6; /*0x771393*/
    }
    v14 = *(_DWORD *)(this + 968); /*0x771396*/
    v15 = this + 960; /*0x7713a2*/
    if ( *(_DWORD *)(this + 976) < v14 /*0x7713c7*/
      || (*(_BYTE *)(this + 973) || !v14)
      && (v16 = *(_DWORD *)(this + 980), v16 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v15 + 8))(this + 960, v14 + v16, 0) )
    {
      v17 = *(_DWORD *)(this + 976); /*0x7713ce*/
      *(_DWORD *)(this + 976) = v17 + 1; /*0x7713d9*/
      String::Reassign((char **)(*(_DWORD *)(this + 964) + 4 * v17), (AbstractClass *)v24); /*0x7713e2*/
    }
    if ( a5 ) /*0x7713ed*/
      ++*(_DWORD *)(this + 956); /*0x7713ef*/
    if ( (_BYTE)aP3 )
    {
      v18 = *(_DWORD *)this; /*0x771401*/
      DeleteAndZero::Alt2(v24); /*0x771407*/
      v19 = *(_DWORD *)(v13 + 48); /*0x77140c*/
      if ( v19 > 0 )
      {
        v20 = v19 == 1 ? 0 : Random::Range(&MEMORY[0x87F8E4].__pad_5568[7484], 0, (IUnknown *)(v19 - 1));
        if ( Map_Remove_770CE0(v18, *(_DWORD *)(*(_DWORD *)(v13 + 36) + 4 * v20), (char **)v24) ) /*0x77143b*/
        {
          v21 = *(_DWORD *)(this + 968); /*0x771444*/
          if ( *(_DWORD *)(this + 976) < v21 /*0x771469*/
            || (*(_BYTE *)(this + 973) || !v21)
            && (v22 = *(_DWORD *)(this + 980), v22 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v15 + 8))(this + 960, v21 + v22, 0) )
          {
            v23 = *(_DWORD *)(this + 976); /*0x771470*/
            *(_DWORD *)(this + 976) = v23 + 1; /*0x77147b*/
            String::Reassign((char **)(*(_DWORD *)(this + 964) + 4 * v23), (AbstractClass *)v24); /*0x771484*/
          }
          if ( a5 ) /*0x77148f*/
            ++*(_DWORD *)(this + 956); /*0x771491*/
        }
      }
    }
  }
  DeleteAndZero(v24); /*0x77149b*/
}
}

// 0x778210
namespace gamemd {
int ScoreScreen_DrawSHPBackground()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __userpurge ScoreScreen::DrawSHPBackground@<eax>(
        char *Source@<ecx>,
        ConvertClass *a2@<edx>,
        int a3@<ebx>,
        int a4@<ebp>,
        int a5,
        int a6,
        ConvertClass *aP1)
{
  _DWORD *v8; // esi
  int v9; // ebp
  int v10; // ebx
  int v11; // ebx
  int v12; // ebp
  int *Viewport; // eax
  _DWORD *v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // edx
  int v21; // ebx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  void (__thiscall ***v26)(_DWORD, int); // [esp+1Ch] [ebp-C4h]
  int v27; // [esp+20h] [ebp-C0h]
  int v28; // [esp+20h] [ebp-C0h]
  _DWORD v29[2]; // [esp+24h] [ebp-BCh] BYREF
  _DWORD v30[2]; // [esp+2Ch] [ebp-B4h] BYREF
  _DWORD v31[2]; // [esp+34h] [ebp-ACh] BYREF
  int v32; // [esp+3Ch] [ebp-A4h] BYREF
  int v33; // [esp+40h] [ebp-A0h]
  int v34; // [esp+44h] [ebp-9Ch]
  int v35; // [esp+48h] [ebp-98h]
  int v36[2]; // [esp+4Ch] [ebp-94h] BYREF
  _DWORD v37[22]; // [esp+54h] [ebp-8Ch] BYREF
  _BYTE v38[12]; // [esp+ACh] [ebp-34h] BYREF
  int v39; // [esp+B8h] [ebp-28h]
  _BYTE v40[20]; // [esp+CCh] [ebp-14h] BYREF
  _UNKNOWN *retaddr; // [esp+E0h] [ebp+0h] BYREF

  CCFileClass::Construct(v37, Source); /*0x77821f*/
  v8 = DecodeFrameSHP((int)v37, a5, 0, 0); /*0x778238*/
  if ( v8 ) /*0x77823c*/
  {
    v27 = (*(int (__thiscall **)(ConvertClass *, int, int))(*(_DWORD *)a2->__pad_0 + 124))(a2, a4, a3); /*0x778251*/
    v9 = (*(int (__thiscall **)(ConvertClass *))(*(_DWORD *)a2->__pad_0 + 128))(a2); /*0x77825b*/
    v32 = 0; /*0x778261*/
    v33 = 0; /*0x778265*/
    v34 = v27; /*0x778269*/
    v35 = v9; /*0x77826d*/
    v10 = __2_YAPAXI_Z(0x20u); /*0x778276*/
    if ( v10 ) /*0x77827d*/
    {
      *(_DWORD *)(v10 + 8) = v9; /*0x778283*/
      *(_DWORD *)(v10 + 4) = v27; /*0x778291*/
      *(_DWORD *)(v10 + 12) = 0; /*0x778294*/
      *(_DWORD *)v10 = &XSurface_Vtable; /*0x77829b*/
      *(_DWORD *)(v10 + 16) = 2; /*0x7782a1*/
      Buffer::Init((_DWORD *)(v10 + 20), 0, (AbstractClass *)(2 * v27 * v9)); /*0x7782a8*/
      *(_DWORD *)v10 = &BSurface_Vtable; /*0x7782ad*/
    }
    else
    {
      v10 = 0; /*0x7782b5*/
    }
    Render_Draw((ConvertClass *)v10, &v32, 0); /*0x7782bf*/
    (*(void (__thiscall **)(ConvertClass *, int, _DWORD, int))(*(_DWORD *)a2->__pad_0 + 4))(a2, v10, 0, 1); /*0x7782cd*/
    if ( v10 ) /*0x7782d2*/
      (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x7782da*/
    v11 = 0; /*0x7782e0*/
    v12 = 0; /*0x7782e2*/
    v28 = (*(int (__thiscall **)(_DWORD *))(*v8 + 124))(v8); /*0x7782eb*/
    v29[0] = (*(int (__thiscall **)(_DWORD *))(*v8 + 128))(v8); /*0x7782f5*/
    if ( (*(int (__thiscall **)(ConvertClass *))(*(_DWORD *)a2->__pad_0 + 124))(a2) > 1024 ) /*0x778306*/
    {
      Viewport = Display::GetViewport(v36); /*0x77830c*/
      v30[0] = *Viewport; /*0x778319*/
      v30[1] = Viewport[1]; /*0x778320*/
      v11 = (Viewport[2] - v28) / 2; /*0x77833e*/
      v12 = (Viewport[3] - v29[0]) / 2; /*0x778340*/
    }
    if ( aP1 && (*(int (__thiscall **)(_DWORD *))(*v8 + 112))(v8) == 1 ) /*0x77835b*/
    {
      v14 = (_DWORD *)__2_YAPAXI_Z(0x188u); /*0x778366*/
      if ( v14 ) /*0x778370*/
        ConvertClass::Construct(v14, aP1, (int)aP1, a2, (ObjectClass *)1, 0); /*0x778382*/
      v15 = *(_DWORD *)a2->__pad_0; /*0x778395*/
      v29[0] = v11; /*0x7783af*/
      v29[1] = v12; /*0x7783b3*/
      v16 = (*(int (__thiscall **)(ConvertClass *, int *))(v15 + 120))(a2, v36); /*0x7783b7*/
      (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD *, int))(*v8 + 120))(v8, v30, v29, v16); /*0x7783c9*/
      BlitterDrawSHP((IUnknown *)a2); /*0x7783d6*/
      if ( v26 ) /*0x7783dd*/
        (**v26)(v26, 1); /*0x7783e5*/
    }
    else
    {
      v17 = (*(int (__thiscall **)(_DWORD *))(*v8 + 124))(v8); /*0x7783ed*/
      v18 = *v8; /*0x7783f0*/
      v30[0] = v17; /*0x7783f4*/
      v19 = (*(int (__thiscall **)(_DWORD *))(v18 + 128))(v8); /*0x7783f8*/
      v20 = *v8; /*0x778402*/
      v33 = v19; /*0x778404*/
      v32 = v30[0]; /*0x77840e*/
      v31[0] = v11; /*0x778414*/
      v21 = *(_DWORD *)a2->__pad_0; /*0x778418*/
      v31[1] = v12; /*0x77841d*/
      v22 = (*(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD, int))(v20 + 120))(v8, v37, 0, 1); /*0x778421*/
      v23 = (*(int (__thiscall **)(_DWORD *, _BYTE *, int))(*v8 + 120))(v8, v40, v22); /*0x778431*/
      v24 = (*(int (__thiscall **)(ConvertClass *, _UNKNOWN **, _DWORD *, _DWORD *, int))(*(_DWORD *)a2->__pad_0 + 120))( /*0x778447*/
              a2,
              &retaddr,
              v31,
              v8,
              v23);
      (*(void (__thiscall **)(ConvertClass *, int))(v21 + 12))(a2, v24); /*0x77844d*/
    }
    (*(void (__thiscall **)(_DWORD *, int))*v8)(v8, 1); /*0x778456*/
  }
  v37[0] = &vt_CCFileClass; /*0x778461*/
  v39 = 0; /*0x778469*/
  Vector::Clear((int)v38); /*0x778474*/
  v37[0] = &off_7E1668; /*0x77847d*/
  return BufferIOFileClass::Dtor(v37); /*0x77848a*/
}
}
} // namespace gamemd
