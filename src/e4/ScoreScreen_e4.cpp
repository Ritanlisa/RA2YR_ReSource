// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/ScoreScreen_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ScoreAnimClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/e4_protos.h"

// 0x690A10
namespace gamemd {
unsigned int * ScoreScreen::LoadScoreFont(ScoreFontClass * aP1)
{
  int v3; // eax
  _DWORD v5[22]; // [esp+8h] [ebp-6Ch] BYREF
  _BYTE v6[12]; // [esp+60h] [ebp-14h] BYREF
  int v7; // [esp+6Ch] [ebp-8h]

  this->q004 = 0; /*0x690a19*/
  this->q008 = 0; /*0x690a1c*/
  this->q00C = 0; /*0x690a1f*/
  this->q014 = 0; /*0x690a22*/
  *this = &(void*)(void*)&ScoreFontClass_vftable; /*0x690a25*/
  ScoreScreen::LoadAudio(); /*0x690a2b*/
  ++dword_B0558C; /*0x690a3c*/
  *this = &(void*)(void*)&ScoreFullFontClass_vftable; /*0x690a44*/
  this->q010 = 0; /*0x690a4a*/
  v3 = SearchMIXFile(g_Str_File_FULLFNT3_SHP, 0); /*0x690a4d*/
  this->q00C = v3; /*0x690a54*/
  if ( !v3 ) /*0x690a57*/
  {
    CCFileClass::Construct(v5, g_Str_File_FULLFNT3_SHP); /*0x690a62*/
    this->q00C = CCFileClass::ReadEntireFile(v5); /*0x690a74*/
    this->q010 = 1; /*0x690a77*/
    CCFileClass::Reset(v5); /*0x690a7b*/
    Debug::Log(); /*0x690a85*/
    v5[0] = &(void*)(void*)&CCFileClass_vftable; /*0x690a91*/
    v7 = 0; /*0x690a99*/
    Vector::Clear((int)v6); /*0x690a9d*/
    v5[0] = &off_7E1668; /*0x690aa6*/
    BufferIOFileClass::Dtor(v5); /*0x690aae*/
  }
  this->q004 = 11; /*0x690ab7*/
  this->q014 = aP1; /*0x690abe*/
  this->q008 = 21; /*0x690ac1*/
  return this; /*0x690aca*/
}
} // namespace gamemd
// 0x690AE0
namespace gamemd {
unsigned int * ScoreScreen::LoadCountryFlags(int a2)
{
  int v3; // eax
  _DWORD v5[22]; // [esp+8h] [ebp-6Ch] BYREF
  _BYTE v6[12]; // [esp+60h] [ebp-14h] BYREF
  int v7; // [esp+6Ch] [ebp-8h]

  this->q004 = 0; /*0x690ae9*/
  this->q008 = 0; /*0x690aec*/
  this->q00C = 0; /*0x690aef*/
  this->q014 = 0; /*0x690af2*/
  *this = &(void*)(void*)&ScoreFontClass_vftable; /*0x690af5*/
  ScoreScreen::LoadAudio(); /*0x690afb*/
  ++dword_B0558C; /*0x690b0c*/
  *this = &(void*)(void*)&ScoreBigFontClass_vftable; /*0x690b14*/
  this->q010 = 0; /*0x690b1a*/
  v3 = SearchMIXFile(aBigfontShp, 0); /*0x690b1d*/
  this->q00C = v3; /*0x690b24*/
  if ( !v3 ) /*0x690b27*/
  {
    CCFileClass::Construct(v5, aBigfontShp); /*0x690b32*/
    this->q00C = CCFileClass::ReadEntireFile(v5); /*0x690b44*/
    this->q010 = 1; /*0x690b47*/
    CCFileClass::Reset(v5); /*0x690b4b*/
    Debug::Log(); /*0x690b55*/
    v5[0] = &(void*)(void*)&CCFileClass_vftable; /*0x690b61*/
    v7 = 0; /*0x690b69*/
    Vector::Clear((int)v6); /*0x690b6d*/
    v5[0] = &off_7E1668; /*0x690b76*/
    BufferIOFileClass::Dtor(v5); /*0x690b7e*/
  }
  this->q004 = 20; /*0x690b87*/
  this->q014 = a2; /*0x690b8e*/
  this->q008 = 35; /*0x690b91*/
  return this; /*0x690b9a*/
}
} // namespace gamemd
// 0x690F30
namespace gamemd {
unsigned int * ScoreScreen::Constructor(ScoreAnimClass * aP1, int a3, int a4)
{
  this->q008 = a3; /*0x690f3b*/
  this->q004 = aP1; /*0x690f41*/
  this->q00C = Timer::GetTicks(); /*0x690f4d*/
  this->q014 = 0; /*0x690f50*/
  this->q018 = a4; /*0x690f57*/
  *this = &(void*)(void*)&ScoreAnimClass_vftable; /*0x690f5a*/
  return this; /*0x690f62*/
}
} // namespace gamemd
// 0x7712C0
namespace gamemd {
void ScoreScreen::RemoveItem(int a2, int a3, ObjectClass * aP3, char a5, int a6)
{
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // esi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  void *v21[4]; // [esp+10h] [ebp-10h] BYREF

  v7 = this->u32_3D0; /*0x7712d5*/
  v8 = v7 - 1; /*0x7712d7*/
  if ( v7 > this->u32_3BC ) /*0x7712da*/
  {
    do /*0x77131c*/
    {
      v9 = this->u32_3D0; /*0x7712dc*/
      if ( v8 < v9 ) /*0x7712e4*/
      {
        v10 = v9 - 1; /*0x7712e6*/
        v8 = v8; /*0x7712e7*/
        for ( this->u32_3D0 = v10; v8 < this->u32_3D0; ++v8 ) /*0x7712f1*/
          String::Reassign( /*0x771301*/
            (char **)(this->u32_3C4 + 4 * v8),
            (const char **)(this->u32_3C4 + 4 * v8 + 4));
      }
      v12 = v8--; /*0x771317*/
    }
    while ( v12 > this->u32_3BC ); /*0x77131c*/
  }
  if ( !this->u32_3BC ) /*0x77131e*/
    this->u8_3B8 = 1; /*0x771328*/
  unknown_libname_73(v21); /*0x771333*/
  if ( (unsigned __int8)Map_Remove(v21) ) /*0x77135d*/
  {
    if ( !(unsigned __int8)Audio::IsPlaying() ) /*0x77136a*/
    {
      this->u32_3AC = Timer::GetTicks(); /*0x771386*/
      *(void **)(&this->u32_1784) = v21[2]; /*0x771390*/
      this->u32_3B4 = a6; /*0x771393*/
    }
    v13 = this->u32_3C8; /*0x771396*/
    v14 = &this->u32_F00; /*0x7713a2*/
    if ( this->u32_3D0 < v13 /*0x7713c7*/
      || (this->u8_3CD || !v13)
      && (v15 = this->u32_3D4, v15 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(this->u32_3C8)(&this->u32_F00, v13 + v15, 0) )
    {
      v16 = this->u32_3D0; /*0x7713ce*/
      this->u32_3D0 = v16 + 1; /*0x7713d9*/
      String::Reassign((char **)(this->u32_3C4 + 4 * v16), (const char **)v21); /*0x7713e2*/
    }
    if ( a5 ) /*0x7713ed*/
      ++this->u32_3BC; /*0x7713ef*/
    if ( aP3 ) /*0x7713fb*/
    {
      DeleteAndZero::Alt2(v21); /*0x771407*/
      v17 = *(_DWORD *)(48 * a3 + &this->u32_250 * a2 + 48); /*0x77140c*/
      if ( v17 > 0 ) /*0x771411*/
      {
        if ( v17 != 1 ) /*0x77141a*/
          Random::Range(Randomizer_Global, 0, v17 - 1); /*0x771429*/
        if ( (unsigned __int8)Map_Remove_770CE0(v21) ) /*0x77143b*/
        {
          v18 = this->u32_3C8; /*0x771444*/
          if ( this->u32_3D0 < v18 /*0x771469*/
            || (this->u8_3CD || !v18)
            && (v19 = this->u32_3D4, v19 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(this->u32_3C8)(&this->u32_F00, v18 + v19, 0) )
          {
            v20 = this->u32_3D0; /*0x771470*/
            this->u32_3D0 = v20 + 1; /*0x77147b*/
            String::Reassign((char **)(this->u32_3C4 + 4 * v20), (const char **)v21); /*0x771484*/
          }
          if ( a5 ) /*0x77148f*/
            ++this->u32_3BC; /*0x771491*/
        }
      }
    }
  }
  DeleteAndZero(v21); /*0x77149b*/
}
} // namespace gamemd
// 0x778210
namespace gamemd {
AbstractClass * * ScoreScreen_DrawSHPBackground()
{
  int *v8; // esi
  int v9; // ebp
  _DWORD *v10; // ebx
  int v11; // ebx
  int v12; // ebp
  int *Viewport; // eax
  _DWORD *v14; // eax
  int v15; // eax
  _DWORD *v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // edx
  int v21; // ebx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v26; // [esp-10h] [ebp-F0h]
  void (__thiscall ***v27)(_DWORD, int); // [esp+1Ch] [ebp-C4h]
  int v28; // [esp+20h] [ebp-C0h]
  int v29; // [esp+20h] [ebp-C0h]
  _DWORD v30[2]; // [esp+24h] [ebp-BCh] BYREF
  int v31[2]; // [esp+2Ch] [ebp-B4h] BYREF
  _DWORD v32[2]; // [esp+34h] [ebp-ACh] BYREF
  int v33; // [esp+3Ch] [ebp-A4h]
  int v34; // [esp+40h] [ebp-A0h]
  int v35; // [esp+44h] [ebp-9Ch]
  int v36; // [esp+48h] [ebp-98h]
  int v37[2]; // [esp+4Ch] [ebp-94h] BYREF
  _DWORD v38[22]; // [esp+54h] [ebp-8Ch] BYREF
  _BYTE v39[12]; // [esp+ACh] [ebp-34h] BYREF
  int v40; // [esp+B8h] [ebp-28h]
  _BYTE v41[20]; // [esp+CCh] [ebp-14h] BYREF
  _UNKNOWN *retaddr; // [esp+E0h] [ebp+0h] BYREF

  CCFileClass::Construct(v38, Source); /*0x77821f*/
  v8 = DecodeFrameSHP((int)v38, a5, 0, 0); /*0x778238*/
  if ( v8 ) /*0x77823c*/
  {
    v28 = (*(int (__thiscall **)(int *, int, int))(*a2 + 124))(a2, a4, a3); /*0x778251*/
    v9 = (*(int (__thiscall **)(int *))(*a2 + 128))(a2); /*0x77825b*/
    v33 = 0; /*0x778261*/
    v34 = 0; /*0x778265*/
    v35 = v28; /*0x778269*/
    v36 = v9; /*0x77826d*/
    v10 = RA2_OPNEW(0x20u); /*0x778276*/
    if ( v10 ) /*0x77827d*/
    {
      v10[2] = v9; /*0x778283*/
      v10[1] = v28; /*0x778291*/
      v10[3] = 0; /*0x778294*/
      *v10 = &XSurface_Vtable; /*0x77829b*/
      v10[4] = 2; /*0x7782a1*/
      Buffer::Init(v10 + 5, 0, 2 * v28 * v9); /*0x7782a8*/
      *v10 = &BSurface_Vtable; /*0x7782ad*/
    }
    else
    {
      v10 = 0; /*0x7782b5*/
    }
    Render_Draw(0); /*0x7782bf*/
    (*(void (__thiscall **)(int *, _DWORD *, _DWORD, int))(*a2 + 4))(a2, v10, 0, 1); /*0x7782cd*/
    if ( v10 ) /*0x7782d2*/
      (*(void (__thiscall **)(_DWORD *, int))*v10)(v10, 1); /*0x7782da*/
    v11 = 0; /*0x7782e0*/
    v12 = 0; /*0x7782e2*/
    v29 = (*(int (__thiscall **)(int *))(*v8 + 124))(v8); /*0x7782eb*/
    v30[0] = (*(int (__thiscall **)(int *))(*v8 + 128))(v8); /*0x7782f5*/
    if ( (*(int (__thiscall **)(int *))(*a2 + 124))(a2) > 1024 ) /*0x778306*/
    {
      Viewport = Display::GetViewport(v37); /*0x77830c*/
      v31[0] = *Viewport; /*0x778319*/
      v31[1] = Viewport[1]; /*0x778320*/
      v11 = (Viewport[2] - v29) / 2; /*0x77833e*/
      v12 = (Viewport[3] - v30[0]) / 2; /*0x778340*/
    }
    if ( a7 && (*(int (__thiscall **)(int *))(*v8 + 112))(v8) == 1 ) /*0x77835b*/
    {
      v14 = RA2_OPNEW(0x188u); /*0x778366*/
      if ( v14 ) /*0x778370*/
        ConvertClass::Construct(v14, a7, a7, (int)a2, 1, 0); /*0x778382*/
      v15 = *a2; /*0x778395*/
      v30[0] = v11; /*0x7783af*/
      v30[1] = v12; /*0x7783b3*/
      v26 = (*(int (__thiscall **)(int *, int *))(v15 + 120))(a2, v37); /*0x7783c2*/
      v16 = (_DWORD *)(*(int (__thiscall **)(int *))(*v8 + 120))(v8); /*0x7783c9*/
      BlitterDrawSHP(a2, (int)v27, v8, v16, v31, v30, v26, 0, 0, 0, 0, 1000, 0); /*0x7783d6*/
      if ( v27 ) /*0x7783dd*/
        (**v27)(v27, 1); /*0x7783e5*/
    }
    else
    {
      v17 = (*(int (__thiscall **)(int *))(*v8 + 124))(v8); /*0x7783ed*/
      v18 = *v8; /*0x7783f0*/
      v31[0] = v17; /*0x7783f4*/
      v19 = (*(int (__thiscall **)(int *))(v18 + 128))(v8); /*0x7783f8*/
      v20 = *v8; /*0x778402*/
      v34 = v19; /*0x778404*/
      v33 = v31[0]; /*0x77840e*/
      v32[0] = v11; /*0x778414*/
      v21 = *a2; /*0x778418*/
      v32[1] = v12; /*0x77841d*/
      v22 = (*(int (__thiscall **)(int *, _DWORD *, _DWORD, int))(v20 + 120))(v8, v38, 0, 1); /*0x778421*/
      v23 = (*(int (__thiscall **)(int *, _BYTE *, int))(*v8 + 120))(v8, v41, v22); /*0x778431*/
      v24 = (*(int (__thiscall **)(int *, _UNKNOWN **, _DWORD *, int *, int))(*a2 + 120))(a2, &retaddr, v32, v8, v23); /*0x778447*/
      (*(void (__thiscall **)(int *, int))(v21 + 12))(a2, v24); /*0x77844d*/
    }
    (*(void (__thiscall **)(int *, int))*v8)(v8, 1); /*0x778456*/
  }
  v38[0] = &(void*)(void*)&CCFileClass_vftable; /*0x778461*/
  v40 = 0; /*0x778469*/
  Vector::Clear((int)v39); /*0x778474*/
  v38[0] = &off_7E1668; /*0x77847d*/
  return BufferIOFileClass::Dtor(v38); /*0x77848a*/
}
}