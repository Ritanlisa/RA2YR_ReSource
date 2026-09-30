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
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Math_e4.hpp"

// 0x690A10
namespace gamemd {
void ScoreScreen::LoadScoreFont( ScoreFontClass * aP1)
{

  IUnknown *v3; // edx
  int v4; // eax
  unsigned int v6[22]; // [esp+8h] [ebp-6Ch] BYREF
  unsigned char v7[12]; // [esp+60h] [ebp-14h] BYREF
  int v8; // [esp+6Ch] [ebp-8h]

  *(this + 1) = 0; /*0x690a19*/
  *(this + 2) = 0; /*0x690a1c*/
  *(this + 3) = 0; /*0x690a1f*/
  *(this + 5) = 0; /*0x690a22*/
  *this = &vt_ScoreFontClass; /*0x690a25*/
  ScoreScreen::LoadAudio(); /*0x690a2b*/
  v3 = (IUnknown *)++*(unsigned int *)&stru_B05488.__pad_FC[8]; /*0x690a3b*/
  IDA_LOBYTE(v3) = 0; /*0x690a42*/
  *this = &vt_ScoreFullFontClass; /*0x690a44*/
  *((unsigned char *)this + 16) = 0; /*0x690a4a*/
  v4 = SearchMIXFile((char *)&stru_830620.field_44, v3); /*0x690a4d*/
  *(this + 3) = v4; /*0x690a54*/
  if ( !v4 ) /*0x690a57*/
  {
    CCFileClass::Construct(v6, (char *)&stru_830620.field_44); /*0x690a62*/
    *(this + 3) = CCFileClass::ReadEntireFile(v6); /*0x690a74*/
    *((unsigned char *)this + 16) = 1; /*0x690a77*/
    CCFileClass::Reset(v6); /*0x690a7b*/
    this->Debug::Log(); /*0x690a85*/
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
} // namespace gamemd
// 0x690AE0
namespace gamemd {
unsigned int * ScoreScreen::LoadCountryFlags(int a2)
{

  int v3; // eax
  unsigned int v5[22]; // [esp+8h] [ebp-6Ch] BYREF
  unsigned char v6[12]; // [esp+60h] [ebp-14h] BYREF
  int v7; // [esp+6Ch] [ebp-8h]

  *((unsigned int *)this + 1) = 0; /*0x690ae9*/
  *((unsigned int *)this + 2) = 0; /*0x690aec*/
  *((unsigned int *)this + 3) = 0; /*0x690aef*/
  *((unsigned int *)this + 5) = 0; /*0x690af2*/
  *this = &vt_ScoreFontClass; /*0x690af5*/
  ScoreScreen::LoadAudio(); /*0x690afb*/
  ++g_abs_B0558C; /*0x690b0c*/
  *this = &vt_ScoreBigFontClass; /*0x690b14*/
  *((unsigned char *)this + 16) = 0; /*0x690b1a*/
  v3 = SearchMIXFile(g_abs_83E6DC, 0); /*0x690b1d*/
  *((unsigned int *)this + 3) = v3; /*0x690b24*/
  if ( !v3 ) /*0x690b27*/
  {
    CCFileClass::Construct(v5, g_abs_83E6DC); /*0x690b32*/
    *((unsigned int *)this + 3) = CCFileClass::ReadEntireFile(v5); /*0x690b44*/
    *((unsigned char *)this + 16) = 1; /*0x690b47*/
    CCFileClass::Reset(v5); /*0x690b4b*/
    this->Debug::Log(); /*0x690b55*/
    v5[0] = &vt_CCFileClass; /*0x690b61*/
    v7 = 0; /*0x690b69*/
    Vector::Clear((int)v6); /*0x690b6d*/
    v5[0] = &off_7E1668; /*0x690b76*/
    BufferIOFileClass::Dtor(v5); /*0x690b7e*/
  }
  *((unsigned int *)this + 1) = 20; /*0x690b87*/
  *((unsigned int *)this + 5) = a2; /*0x690b8e*/
  *((unsigned int *)this + 2) = 35; /*0x690b91*/
  return this; /*0x690b9a*/

}
} // namespace gamemd
// 0x690F30
namespace gamemd {
void ScoreScreen::Constructor( ScoreAnimClass * aP1, int a3, int a4)
{

  *(this + 2) = a3; /*0x690f3b*/
  *(this + 1) = aP1; /*0x690f41*/
  *(this + 3) = Timer::GetTicks(); /*0x690f4d*/
  *(this + 5) = 0; /*0x690f50*/
  *(this + 6) = a4; /*0x690f57*/
  *this = &vt_ScoreAnimClass; /*0x690f5a*/
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
  int v11; // esi
  int v12; // edx
  char * v13;
  int v14; // ecx
  char * v15;
  int v16; // eax
  int v17; // eax
  int v18; // ebp
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  void *v24[4]; // [esp+10h] [ebp-10h] BYREF

  v7 = *((unsigned int *)this + 244); /*0x7712d5*/
  v8 = v7 - 1; /*0x7712d7*/
  if ( v7 > *((unsigned int *)this + 239) ) /*0x7712da*/
  {
    do /*0x77131c*/
    {
      v9 = *((unsigned int *)this + 244); /*0x7712dc*/
      if ( v8 < v9 ) /*0x7712e4*/
      {
        v10 = v9 - 1; /*0x7712e6*/
        v11 = v8; /*0x7712e7*/
        for ( *((unsigned int *)this + 244) = v10; v11 < *((unsigned int *)this + 244); ++v11 ) /*0x7712f1*/
          String::Reassign( /*0x771301*/
            (char **)(*((unsigned int *)this + 241) + 4 * v11),
            (AbstractClass *)(*((unsigned int *)this + 241) + 4 * v11 + 4));
      }
      v12 = v8--; /*0x771317*/
    }
    while ( v12 > *((unsigned int *)this + 239) ); /*0x77131c*/
  }
  if ( !*((unsigned int *)this + 239) ) /*0x77131e*/
    *((unsigned char *)this + 952) = 1; /*0x771328*/
  unknown_libname_73(v24); /*0x771333*/
  v13 = 48 * a3 + (char *)this + 148 * a2; /*0x771352*/
  if ( Map_Remove(*(unsigned int *)this, v13 + 8, v24) )
  {
    if ( !(uint8_t)this->Audio::IsPlaying() ) /*0x77136a*/
    {
      *((unsigned int *)this + 235) = Timer::GetTicks(); /*0x771386*/
      *(void **)((char *)this + 944) = v24[2]; /*0x771390*/
      *((unsigned int *)this + 237) = a6; /*0x771393*/
    }
    v14 = (int)(*((unsigned int *)this + 242));
    v15 = (char *)this + 960; /*0x7713a2*/
    if ( *((unsigned int *)this + 244) < v14 /*0x7713c7*/
      || (*((unsigned char *)this + 973) || !v14)
      && (v16 = *((unsigned int *)this + 245), v16 > 0)
      && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)v15 + 8))((char *)this + 960, v14 + v16, 0) )
    {
      v17 = *((unsigned int *)this + 244); /*0x7713ce*/
      *((unsigned int *)this + 244) = v17 + 1; /*0x7713d9*/
      String::Reassign((char **)(*((unsigned int *)this + 241) + 4 * v17), (AbstractClass *)v24); /*0x7713e2*/
    }
    if ( a5 ) /*0x7713ed*/
      ++*((unsigned int *)this + 239); /*0x7713ef*/
    if ( (unsigned char)aP3 )
    {
      v18 = *(unsigned int *)this; /*0x771401*/
      DeleteAndZero::Alt2(v24); /*0x771407*/
      v19 = *(unsigned int *)(v13 + 48); /*0x77140c*/
      if ( v19 > 0 )
      {
        v20 = v19 == 1 ? 0 : Random::Range(&g_abs_87F8E4, 0, (IUnknown *)(v19 - 1));
        if ( Map_Remove_770CE0(v18, *(unsigned int *)(*(unsigned int *)(v13 + 36) + 4 * v20), (char **)v24) ) /*0x77143b*/
        {
          v21 = *((unsigned int *)this + 242); /*0x771444*/
          if ( *((unsigned int *)this + 244) < v21 /*0x771469*/
            || (*((unsigned char *)this + 973) || !v21)
            && (v22 = *((unsigned int *)this + 245), v22 > 0)
            && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)v15 + 8))((char *)this + 960, v21 + v22, 0) )
          {
            v23 = *((unsigned int *)this + 244); /*0x771470*/
            *((unsigned int *)this + 244) = v23 + 1; /*0x77147b*/
            String::Reassign((char **)(*((unsigned int *)this + 241) + 4 * v23), (AbstractClass *)v24); /*0x771484*/
          }
          if ( a5 ) /*0x77148f*/
            ++*((unsigned int *)this + 239); /*0x771491*/
        }
      }
    }
  }
  DeleteAndZero(v24); /*0x77149b*/

}
} // namespace gamemd
// 0x778210
namespace gamemd {
AbstractClass * * ScoreScreen_DrawSHPBackground(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6, void * a7)
{
  int *v8; // esi
  int v9; // ebp
  int v10;
  int v11; // ebx
  int v12; // ebp
  int *Viewport; // eax
  ConvertClass *v14; // eax
  void * v15;
  unsigned int *v16; // eax
  void * v17;
  void * v18;
  int v19; // eax
  int v20; // edx
  void * v21;
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v26; // [esp-10h] [ebp-F0h]
  void (***v27)(unsigned int, int); // [esp+1Ch] [ebp-C4h]
  int v28; // [esp+20h] [ebp-C0h]
  int v29; // [esp+20h] [ebp-C0h]
  unsigned int v30[2]; // [esp+24h] [ebp-BCh] BYREF
  int v31[2]; // [esp+2Ch] [ebp-B4h] BYREF
  unsigned int v32[2]; // [esp+34h] [ebp-ACh] BYREF
  int v33; // [esp+3Ch] [ebp-A4h] BYREF
  int v34; // [esp+40h] [ebp-A0h]
  int v35; // [esp+44h] [ebp-9Ch]
  int v36; // [esp+48h] [ebp-98h]
  int v37[2]; // [esp+4Ch] [ebp-94h] BYREF
  CCFileClass v38; // [esp+54h] [ebp-8Ch] BYREF
  int v39[3]; // [esp+ACh] [ebp-34h] BYREF
  int v40; // [esp+B8h] [ebp-28h]
  unsigned char v41[20]; // [esp+CCh] [ebp-14h] BYREF
  void *retaddr; // [esp+E0h] [ebp+0h] BYREF

  CCFileClass::Construct(&v38, Source); /*0x77821f*/
  v8 = DecodeFrameSHP((int)&v38, a5, 0, 0); /*0x778238*/
  if ( v8 ) /*0x77823c*/
  {
    v28 = (*(int (**)(int *, int, int))(*(void *)(((unsigned int)(void)*))(a2) + 124))(a2, a4, a3); /*0x778251*/
    v9 = (*(int (**)(int *))(*(void *)(((unsigned int)(void)*))(a2) + 128))(a2); /*0x77825b*/
    v33 = 0; /*0x778261*/
    v34 = 0; /*0x778265*/
    v35 = v28; /*0x778269*/
    v36 = v9; /*0x77826d*/
    v10 = RA2_OPNEW(0x20u); /*0x778276*/
    if ( v10 ) /*0x77827d*/
    {
      *(unsigned int *)((unsigned int)(v10)+ 8) = v9; /*0x778283*/
      *(unsigned int *)((unsigned int)(v10)+ 4) = v28; /*0x778291*/
      *(unsigned int *)((unsigned int)(v10)+ 12) = 0; /*0x778294*/
      *(unsigned int *)v10 = &XSurface_Vtable; /*0x77829b*/
      *(unsigned int *)((unsigned int)(v10)+ 16) = 2; /*0x7782a1*/
      Buffer::Init((Buffer *)((unsigned int)(v10)+ 20), 0, 2 * v28 * v9); /*0x7782a8*/
      *(unsigned int *)v10 = &BSurface_Vtable; /*0x7782ad*/
    }
    else
    {
      v10 = 0; /*0x7782b5*/
    }
    Render_Draw(v10, &v33, 0); /*0x7782bf*/
    (*(void (**)(int *, int, unsigned int, int))(*(void *)(((unsigned int)(void)*))(a2) + 4))(a2, v10, 0, 1); /*0x7782cd*/
    if ( v10 ) /*0x7782d2*/
      (**(void (***)(int, int))v10)(v10, 1); /*0x7782da*/
    v11 = 0; /*0x7782e0*/
    v12 = 0; /*0x7782e2*/
    v29 = (*(int (**)(int *))(*v8 + 124))(v8); /*0x7782eb*/
    v30[0] = (*(int (**)(int *))(*v8 + 128))(v8); /*0x7782f5*/
    if ( (*(int (**)(int *))(*(void *)(((unsigned int)(void)*))(a2) + 124))(a2) > 1024 ) /*0x778306*/
    {
      Viewport = Display::GetViewport(v37); /*0x77830c*/
      v31[0] = *Viewport; /*0x778319*/
      v31[1] = Viewport[1]; /*0x778320*/
      v11 = (Viewport[2] - v29) / 2; /*0x77833e*/
      v12 = (Viewport[3] - v30[0]) / 2; /*0x778340*/
    }
    if ( a7 && (*(int (**)(int *))(*v8 + 112))(v8) == 1 ) /*0x77835b*/
    {
      v14 = (gamemd::ConvertClass *)((int)((ConvertClass *)RA2_OPNEW(0x188u)));
      if ( v14 ) /*0x778370*/
        ConvertClass::Construct(v14, a7, a7, (int)a2, 1, 0); /*0x778382*/
      v15 = *(unsigned int *)a2); /*0x778395*/
      v30[0] = v11; /*0x7783af*/
      v30[1] = v12; /*0x7783b3*/
      v26 = (*(int (**)(int *, int *))((unsigned int)(v15)+ 120))(a2, v37); /*0x7783c2*/
      v16 = (unsigned int *)(*(int (**)(int *))(*v8 + 120))(v8); /*0x7783c9*/
      BlitterDrawSHP(a2, (int)v27, v8, v16, v31, v30, v26, 0, 0, 0, 0, 1000, 0); /*0x7783d6*/
      if ( v27 ) /*0x7783dd*/
        (**v27)(v27, 1); /*0x7783e5*/
    }
    else
    {
      v17 = (void *)((int)((void *)((*(int (**)(int *))(*v8 + 124))(v8))));
      v18 = (void *)((int)((void *)(*v8)));
      v31[0] = (int)((void *)(v17));
      v19 = (void *)((*(int (**)((unsigned int)(int)*))(v18 + 128))(v8));
      v20 = (void *)(*v8);
      v34 = v19; /*0x778404*/
      v33 = v31[0]; /*0x77840e*/
      v32[0] = v11; /*0x778414*/
      v21 = *(unsigned int *)(a2); /*0x778418*/
      v32[1] = v12; /*0x77841d*/
      v22 = (*(int (**)(int *, CCFileClass *, unsigned int, int))(v20 + 120))(v8, &v38, 0, 1); /*0x778421*/
      v23 = (*(int (**)(int *, unsigned char *, int))(*v8 + 120))(v8, v41, v22); /*0x778431*/
      v24 = (*(int (**)(int *, void **, unsigned int *, int *, int))(*(unsigned int *)(a2) + 120))(a2, &retaddr, v32, v8, v23); /*0x778447*/
      (*(void (**)(int *, int))((unsigned int)(v21)+ 12))(a2, v24); /*0x77844d*/
    }
    (*(void (**)(int *, int))*v8)(v8, 1); /*0x778456*/
  }
  *(unsigned int *)v38.CDFileClass = (void*)&CCFileClass_vftable; /*0x778461*/
  v40 = 0; /*0x778469*/
  Vector::Clear((int)v39); /*0x778474*/
  *(unsigned int *)v38.CDFileClass = &off_7E1668; /*0x77847d*/
// 0x431b80
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v38); /*0x77848a*/
}
}