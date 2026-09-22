// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x690A10
unsigned int * ScoreScreen::LoadScoreFont(ScoreFontClass * aP1)
{
{
  IUnknown *v3; // edx
  this->q004 = 0; /*0x690a19*/
  this->q008 = 0; /*0x690a1c*/
  this->q00C = 0; /*0x690a1f*/
  this->q014 = 0; /*0x690a22*/
  *this = &vt_ScoreFontClass; /*0x690a25*/
  ScoreScreen::LoadAudio(); /*0x690a2b*/
  v3 = (IUnknown *)++*(_DWORD *)&stru_B05488[260]; /*0x690a3b*/
  LOBYTE(v3) = 0; /*0x690a42*/
  *this = &vt_ScoreFullFontClass; /*0x690a44*/
  this->q010 = 0; /*0x690a4a*/
  int v4 = SearchMIXFile((char *)&stru_830620.field_44, v3); /*0x690a4d*/
  this->q00C = v4; /*0x690a54*/
  if ( !v4 ) /*0x690a57*/
  {
  _DWORD v6[22]; // [esp+8h] [ebp-6Ch] BYREF
    CCFileClass::Construct(v6, (char *)&stru_830620.field_44); /*0x690a62*/
    this->q00C = CCFileClass::ReadEntireFile(v6); /*0x690a74*/
    this->q010 = 1; /*0x690a77*/
    CCFileClass::Reset(v6); /*0x690a7b*/
    Debug::Log(); /*0x690a85*/
    v6[0] = &vt_CCFileClass; /*0x690a91*/
    int v8 = 0; /*0x690a99*/
  _BYTE v7[12]; // [esp+60h] [ebp-14h] BYREF
    Vector::Clear((int)v7); /*0x690a9d*/
    v6[0] = &off_7E1668; /*0x690aa6*/
    BufferIOFileClass::Dtor(v6); /*0x690aae*/
  }
  this->q004 = 11; /*0x690ab7*/
  this->q014 = aP1; /*0x690abe*/
  this->q008 = 21; /*0x690ac1*/
  return this; /*0x690aca*/
}
}

// 0x690AE0
unsigned int * ScoreScreen::LoadCountryFlags(int a2)
{
{

  this->q004 = 0; /*0x690ae9*/
  this->q008 = 0; /*0x690aec*/
  this->q00C = 0; /*0x690aef*/
  this->q014 = 0; /*0x690af2*/
  *this = &vt_ScoreFontClass; /*0x690af5*/
  ScoreScreen::LoadAudio(); /*0x690afb*/
  ++DataGlobal_B0558C; /*0x690b0c*/
  *this = &vt_ScoreBigFontClass; /*0x690b14*/
  this->q010 = 0; /*0x690b1a*/
  int v3 = SearchMIXFile(DataGlobal_83E6DC, 0); /*0x690b1d*/
  this->q00C = v3; /*0x690b24*/
  if ( !v3 ) /*0x690b27*/
  {
  _DWORD v5[22]; // [esp+8h] [ebp-6Ch] BYREF
    CCFileClass::Construct(v5, DataGlobal_83E6DC); /*0x690b32*/
    this->q00C = CCFileClass::ReadEntireFile(v5); /*0x690b44*/
    this->q010 = 1; /*0x690b47*/
    CCFileClass::Reset(v5); /*0x690b4b*/
    Debug::Log(); /*0x690b55*/
    v5[0] = &vt_CCFileClass; /*0x690b61*/
    int v7 = 0; /*0x690b69*/
  _BYTE v6[12]; // [esp+60h] [ebp-14h] BYREF
    Vector::Clear((int)v6); /*0x690b6d*/
    v5[0] = &off_7E1668; /*0x690b76*/
    BufferIOFileClass::Dtor(v5); /*0x690b7e*/
  }
  this->q004 = 20; /*0x690b87*/
  this->q014 = a2; /*0x690b8e*/
  this->q008 = 35; /*0x690b91*/
  return this; /*0x690b9a*/
}
}

// 0x690F30
unsigned int * ScoreScreen::Constructor(ScoreAnimClass * aP1, int a3, int a4)
{
{
  this->q008 = a3; /*0x690f3b*/
  this->q004 = aP1; /*0x690f41*/
  this->q00C = Timer::GetTicks(); /*0x690f4d*/
  this->q014 = 0; /*0x690f50*/
  this->q018 = a4; /*0x690f57*/
  *this = &vt_ScoreAnimClass; /*0x690f5a*/
  return this; /*0x690f62*/
}
}

// 0x7712C0
void ScoreScreen::RemoveItem(int a2, int a3, ObjectClass * aP3, char a5, int a6)
{
{

  int v7 = this->u32_3D0; /*0x7712d5*/
  int v8 = v7 - 1; /*0x7712d7*/
  if ( v7 > this->u32_3BC ) /*0x7712da*/
  {
  int v12; // edx
    do /*0x77131c*/
    {
      int v9 = this->u32_3D0; /*0x7712dc*/
      if ( v8 < v9 ) /*0x7712e4*/
      {
        int v10 = v9 - 1; /*0x7712e6*/
        int v11 = v8; /*0x7712e7*/
        for ( this->u32_3D0 = v10; v11 < this->u32_3D0; ++v11 ) /*0x7712f1*/
          String::Reassign( /*0x771301*/
            (char **)(this->u32_3C4 + 4 * v11),
            (AbstractClass *)(this->u32_3C4 + 4 * v11 + 4));
      }
      v12 = v8--; /*0x771317*/
    }
    while ( v12 > this->u32_3BC ); /*0x77131c*/
  }
  if ( !this->u32_3BC ) /*0x77131e*/
    this->u8_3B8 = 1; /*0x771328*/
  void *v24[4]; // [esp+10h] [ebp-10h] BYREF
  unknown_libname_73(v24); /*0x771333*/
  int v13 = 48 * a3 + &this->u32_250 * a2; /*0x771352*/
  if ( Map_Remove(*(_DWORD *)this, v13 + 8, v24) )
  {
    if ( !(unsigned __int8)Audio::IsPlaying() ) /*0x77136a*/
    {
      this->u32_3AC = Timer::GetTicks(); /*0x771386*/
      *(void **)(&this->u32_1784) = v24[2]; /*0x771390*/
      this->u32_3B4 = a6; /*0x771393*/
    }
    int v14 = this->u32_3C8; /*0x771396*/
    int v15 = &this->u32_F00; /*0x7713a2*/
    if ( this->u32_3D0 < v14 /*0x7713c7*/
      || (this->u8_3CD || !v14)
  int v16; // eax
      && (v16 = this->u32_3D4, v16 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v15 + 8))(&this->u32_F00, v14 + v16, 0) )
    {
      int v17 = this->u32_3D0; /*0x7713ce*/
      this->u32_3D0 = v17 + 1; /*0x7713d9*/
      String::Reassign((char **)(this->u32_3C4 + 4 * v17), (AbstractClass *)v24); /*0x7713e2*/
    }
    if ( a5 ) /*0x7713ed*/
      ++this->u32_3BC; /*0x7713ef*/
    if ( (_BYTE)aP3 )
    {
      int v18 = *(_DWORD *)this; /*0x771401*/
      DeleteAndZero::Alt2(v24); /*0x771407*/
      int v19 = *(_DWORD *)(v13 + 48); /*0x77140c*/
      if ( v19 > 0 )
      {
        int v20 = v19 == 1 ? 0 : Random::Range(&DataGlobal_87F8E4[29348], 0, (IUnknown *)(v19 - 1));
        if ( Map_Remove_770CE0(v18, *(_DWORD *)(*(_DWORD *)(v13 + 36) + 4 * v20), (char **)v24) ) /*0x77143b*/
        {
          int v21 = this->u32_3C8; /*0x771444*/
          if ( this->u32_3D0 < v21 /*0x771469*/
            || (this->u8_3CD || !v21)
  int v22; // eax
            && (v22 = this->u32_3D4, v22 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v15 + 8))(&this->u32_F00, v21 + v22, 0) )
          {
            int v23 = this->u32_3D0; /*0x771470*/
            this->u32_3D0 = v23 + 1; /*0x77147b*/
            String::Reassign((char **)(this->u32_3C4 + 4 * v23), (AbstractClass *)v24); /*0x771484*/
          }
          if ( a5 ) /*0x77148f*/
            ++this->u32_3BC; /*0x771491*/
        }
      }
    }
  }
  DeleteAndZero(v24); /*0x77149b*/
}
}

// 0x778210
namespace gamemd {
AbstractClass * * ScoreScreen_DrawSHPBackground()
{
{
  int *Viewport; // eax
  void (__thiscall ***v26)(_DWORD, int); // [esp+1Ch] [ebp-C4h]
  _UNKNOWN *retaddr; // [esp+E0h] [ebp+0h] BYREF

  _DWORD v37[22]; // [esp+54h] [ebp-8Ch] BYREF
  CCFileClass::Construct(v37, Source); /*0x77821f*/
  _DWORD * v8 = DecodeFrameSHP((int)v37, a5, 0, 0); /*0x778238*/
  if ( v8 ) /*0x77823c*/
  {
  int v36[2]; // [esp+4Ch] [ebp-94h] BYREF
  _DWORD v30[2]; // [esp+2Ch] [ebp-B4h] BYREF
    int v27 = (*(int (__thiscall **)(ConvertClass *, int, int))(*(_DWORD *)a2->__pad_0 + 124))(a2, a4, a3); /*0x778251*/
    int v9 = (*(int (__thiscall **)(ConvertClass *))(*(_DWORD *)a2->__pad_0 + 128))(a2); /*0x77825b*/
    int v32 = 0; /*0x778261*/
    int v33 = 0; /*0x778265*/
    int v34 = v27; /*0x778269*/
    int v35 = v9; /*0x77826d*/
    int v10 = __2_YAPAXI_Z(0x20u); /*0x778276*/
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
    int v11 = 0; /*0x7782e0*/
    int v12 = 0; /*0x7782e2*/
    int v28 = (*(int (__thiscall **)(_DWORD *))(*v8 + 124))(v8); /*0x7782eb*/
  _DWORD v29[2]; // [esp+24h] [ebp-BCh] BYREF
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
      _DWORD * v14 = (_DWORD *)__2_YAPAXI_Z(0x188u); /*0x778366*/
      if ( v14 ) /*0x778370*/
        ConvertClass::Construct(v14, aP1, (int)aP1, a2, (ObjectClass *)1, 0); /*0x778382*/
      int v15 = *(_DWORD *)a2->__pad_0; /*0x778395*/
      v29[0] = v11; /*0x7783af*/
      v29[1] = v12; /*0x7783b3*/
      int v16 = (*(int (__thiscall **)(ConvertClass *, int *))(v15 + 120))(a2, v36); /*0x7783b7*/
      (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD *, int))(*v8 + 120))(v8, v30, v29, v16); /*0x7783c9*/
      BlitterDrawSHP((IUnknown *)a2); /*0x7783d6*/
      if ( v26 ) /*0x7783dd*/
        (**v26)(v26, 1); /*0x7783e5*/
    }
    else
    {
      int v17 = (*(int (__thiscall **)(_DWORD *))(*v8 + 124))(v8); /*0x7783ed*/
      int v18 = *v8; /*0x7783f0*/
      v30[0] = v17; /*0x7783f4*/
      int v19 = (*(int (__thiscall **)(_DWORD *))(v18 + 128))(v8); /*0x7783f8*/
      int v20 = *v8; /*0x778402*/
      v33 = v19; /*0x778404*/
      v32 = v30[0]; /*0x77840e*/
  _DWORD v31[2]; // [esp+34h] [ebp-ACh] BYREF
      v31[0] = v11; /*0x778414*/
      int v21 = *(_DWORD *)a2->__pad_0; /*0x778418*/
      v31[1] = v12; /*0x77841d*/
      int v22 = (*(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD, int))(v20 + 120))(v8, v37, 0, 1); /*0x778421*/
  _BYTE v40[20]; // [esp+CCh] [ebp-14h] BYREF
      int v23 = (*(int (__thiscall **)(_DWORD *, _BYTE *, int))(*v8 + 120))(v8, v40, v22); /*0x778431*/
  int v24; // eax
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
  int v39 = 0; /*0x778469*/
  _BYTE v38[12]; // [esp+ACh] [ebp-34h] BYREF
  Vector::Clear((int)v38); /*0x778474*/
  v37[0] = &off_7E1668; /*0x77847d*/
  return BufferIOFileClass::Dtor(v37); /*0x77848a*/
}
} // namespace gamemd
}
