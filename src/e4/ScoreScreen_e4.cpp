// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/BufferIOFileClass_e4.hpp"
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
#include "e4/classes/ScreenCaptureCommandClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/E4Recv_4AF2A0_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/Init_e4.hpp"

// 0x690A10
namespace gamemd {
_DWORD * ScoreScreen::LoadScoreFont(int aP1)
{

  void *v3; // eax
  CCFileClass v5; // [esp+8h] [ebp-6Ch] BYREF
  int v6[3]; // [esp+60h] [ebp-14h] BYREF
  int v7; // [esp+6Ch] [ebp-8h]

  this->ScoreScreen_field_0x04 = 0; /*0x690a19*/
  this->ScoreScreen_field_0x08 = 0; /*0x690a1c*/
  this->ScoreScreen_field_0x0C = 0; /*0x690a1f*/
  this->ScoreScreen_field_0x14 = 0; /*0x690a22*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_ScoreFontClass); /*0x690a25*/
  ScoreScreen::LoadAudio(); /*0x690a2b*/
  ++dword_B0558C; /*0x690a3c*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_ScoreFullFontClass); /*0x690a44*/
  LOBYTE(this->ScoreScreen_field_0x10) = 0; /*0x690a4a*/
  v3 = SearchMIXFile((char *)(g_Str_File_FULLFNT3_SHP), 0); /*0x690a4d*/
  this->ScoreScreen_field_0x0C = (int)v3; /*0x690a54*/
  if ( !v3 ) /*0x690a57*/
  {
    ((CCFileClass*)&v5)->Construct((char *)(void *)(g_Str_File_FULLFNT3_SHP)); /*0x690a62*/
    this->ScoreScreen_field_0x0C = (int)((CCFileClass *)(&v5))->ReadEntireFile(); /*0x690a74*/
    LOBYTE(this->ScoreScreen_field_0x10) = 1; /*0x690a77*/
    CCFileClass::Reset(&v5); /*0x690a7b*/
    ((gamemd::Debug *)this)->Log(); /*0x690a85*/
    *(unsigned int *)v5.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x690a91*/
    v7 = 0; /*0x690a99*/
    ((Vector *)((int)v6))->Clear(); /*0x690a9d*/
    *(unsigned int *)v5.CDFileClass = (unsigned int)(&off_7E1668); /*0x690aa6*/
    ((BufferIOFileClass *)((BufferIOFileClass *)&v5))->Dtor(); /*0x690aae*/
  }
  this->ScoreScreen_field_0x04 = (unsigned int)(11);
  this->ScoreScreen_field_0x14 = (unsigned int)(aP1);
  this->ScoreScreen_field_0x08 = 21; /*0x690ac1*/
  return this->__pad_0; /*0x690aca*/

}
} // namespace gamemd
// 0x690AE0
namespace gamemd {
unsigned int * ScoreScreen::LoadCountryFlags(int a2)
{

  void *v3; // eax
  CCFileClass v5; // [esp+8h] [ebp-6Ch] BYREF
  int v6[3]; // [esp+60h] [ebp-14h] BYREF
  int v7; // [esp+6Ch] [ebp-8h]

  this->ScoreScreen_field_0x04 = 0; /*0x690ae9*/
  this->ScoreScreen_field_0x08 = 0; /*0x690aec*/
  this->ScoreScreen_field_0x0C = 0; /*0x690aef*/
  this->ScoreScreen_field_0x14 = 0; /*0x690af2*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_ScoreFontClass); /*0x690af5*/
  ScoreScreen::LoadAudio(); /*0x690afb*/
  ++dword_B0558C; /*0x690b0c*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_ScoreBigFontClass); /*0x690b14*/
  LOBYTE(this->ScoreScreen_field_0x10) = 0; /*0x690b1a*/
  v3 = SearchMIXFile((char *)(aBigfontShp), 0); /*0x690b1d*/
  this->ScoreScreen_field_0x0C = (int)v3; /*0x690b24*/
  if ( !v3 ) /*0x690b27*/
  {
    ((CCFileClass*)&v5)->Construct((char *)(void *)(aBigfontShp)); /*0x690b32*/
    this->ScoreScreen_field_0x0C = (int)((CCFileClass *)(&v5))->ReadEntireFile(); /*0x690b44*/
    LOBYTE(this->ScoreScreen_field_0x10) = 1; /*0x690b47*/
    CCFileClass::Reset(&v5); /*0x690b4b*/
    ((gamemd::Debug *)this)->Log(); /*0x690b55*/
    *(unsigned int *)v5.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x690b61*/
    v7 = 0; /*0x690b69*/
    ((Vector *)((int)v6))->Clear(); /*0x690b6d*/
    *(unsigned int *)v5.CDFileClass = (unsigned int)(&off_7E1668); /*0x690b76*/
    ((BufferIOFileClass *)((BufferIOFileClass *)&v5))->Dtor(); /*0x690b7e*/
  }
  this->ScoreScreen_field_0x04 = (unsigned int)((unsigned int *)(20));
  this->ScoreScreen_field_0x14 = (unsigned int)((unsigned int *)(a2));
  this->ScoreScreen_field_0x08 = (unsigned int)((unsigned int *)(35));
  return (unsigned int *)(this->__pad_0);

}
} // namespace gamemd
// 0x690F30
namespace gamemd {
_DWORD * ScoreScreen::Constructor(int aP1, int a3, int a4)
{

  this->ScoreScreen_field_0x08 = (unsigned int)(a3);
  this->ScoreScreen_field_0x04 = (unsigned int)(aP1);
  this->ScoreScreen_field_0x0C = ((gamemd::Timer *)this)->GetTicks(); /*0x690f4d*/
  this->ScoreScreen_field_0x14 = 0; /*0x690f50*/
  this->ScoreScreen_field_0x18 = a4; /*0x690f57*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_ScoreAnimClass); /*0x690f5a*/
  return this->__pad_0; /*0x690f62*/

}
} // namespace gamemd
// 0x7712C0
namespace gamemd {
int ScoreScreen::RemoveItem(int a2, int a3, char aP3, char a5, int a6)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7712C0)
}
} // namespace gamemd
// 0x778210
namespace gamemd {
AbstractClass * * ScoreScreen_DrawSHPBackground(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6, void * a7)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x778210)
}
}
