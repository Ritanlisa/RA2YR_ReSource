// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/AsyncIO_e4.hpp"
#include "e4/classes/AudioMixer_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/TacticalMap_e4.hpp"
#include "e4/classes/Theme_e4.hpp"
#include "e4/classes/VoxClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/GameOption_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/GameConfig_e4.hpp"
#include "e4/classes/GameResult_e4.hpp"
#include "e4/classes/Tooltip_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"

// 0x6863E0
namespace gamemd {  // G42.18 ns repair
int sub_6863E0(void * a1, void * a2)
{

  this->MouseClass::LoadCursors(); /*0x6863e3*/
  if ( *(unsigned int *)&g_CreditsScreenBounds != stru_A8EB00.vfptr[35] /*0x686404*/
    && *(unsigned int *)&g_CreditsScreenConfig != stru_A8EB00.vfptr[36] )
  {
    Debug::Log(); /*0x68640b*/
    ChangeVideoMode(stru_A8EB00.vfptr[35], stru_A8EB00.vfptr[36]); /*0x68641f*/
  }
  ((unsigned int *)&stru_A8EB00)[376] = 0; /*0x68642a*/
  byte_A8E378 = 0; /*0x686433*/
  if ( *(unsigned int *)&g_TacticalRender ) /*0x68643a*/
    (*(Tooltip **)&g_TacticalRender)->Enable(0); /*0x68643e*/
  void **p_vtable2; // esi
  p_vtable2 = &((unsigned int *)(dword_A8B230))[43].vfptr2; /*0x686450*/
  if ( ((unsigned int *)(dword_A8B230))[43].vfptr2 != (void *)-1 ) /*0x686459*/
  {
  int Ticks; // eax
    Ticks = TimerGetTicks(); /*0x68645e*/
  char *v4; // ecx
    v4 = (char *)p_vtable2[2]; /*0x686465*/
  int v5; // eax
    v5 = Ticks - (unsigned int)*p_vtable2; /*0x686468*/
    *p_vtable2 = (void *)-1; /*0x68646a*/
    p_vtable2[2] = &v4[v5]; /*0x686472*/
  }
  (a1)->Shutdown(); /*0x686475*/
  TimerGetTicks(); /*0x68647e*/
  int v10; // [esp+0h] [ebp-18h]
  v10 = TimerGetTicks(); /*0x68649d*/
  ((Theme *)&unk_A83D10)->Stop(1); /*0x6864b4*/
  this->AudioMixer::Shutdown(); /*0x6864b9*/
  AudioQueue::DrainAll(); /*0x6864be*/
  StopThemeClass(1); /*0x6864c5*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x6864ca*/
  Mission::SetAndCall((MouseClass *)&DataGlobal_87F7E8, 0, 0); /*0x6864d8*/
  (*(Timer **)&g_BinkMoviePlayer)->PumpMessages(); /*0x6864e3*/
  ScenarioClass::LoadScenarioAndStart((char *)&((unsigned int *)(dword_A8B230))[130].abstractFlags, 0, a2, dword_A8B230[375].uniqueId); /*0x6864fc*/
  ((GameResult *)&stru_8A38E0)->CalcScore(); /*0x686506*/
  while ( 1 ) /*0x68650f*/
  {
  int v6; // esi
    v6 = 60; /*0x68650f*/
    if ( v10 != -1 ) /*0x686516*/
    {
  int v7; // eax
      v7 = TimerGetTicks() - v10; /*0x686521*/
      if ( v7 >= 60 ) /*0x686527*/
        break; /*0x686527*/
      v6 = 60 - v7; /*0x686529*/
    }
    if ( v6 <= 0 ) /*0x68652d*/
      break; /*0x68652d*/
    Event::Dispatch(); /*0x68652f*/
  }
  (*(Timer **)&g_BinkMoviePlayer)->PumpMessages(); /*0x686536*/
  if ( *(unsigned int *)&g_TacticalRender ) /*0x68654a*/
    (*(Tooltip **)&g_TacticalRender)->Enable(stru_A8EB00.vfptr[32]); /*0x686553*/
  return ((TacticalMap *)((GScreenClass *)&DataGlobal_87F7E8))->Redraw(); /*0x686562*/
}
}  // G42.18 ns repair
// 0x686570
namespace gamemd {
AbstractClass * sub_686570(ObjectClass *a1)
{

  void **p_vtable2; // esi
  p_vtable2 = &dword_A8B230[43].vfptr2; /*0x686579*/
  ((unsigned int *)&stru_A8EB00)[376] = 0; /*0x68657f*/
  byte_A8E378 = 0; /*0x686585*/
  if ( dword_A8B230[43].vfptr2 != (void *)-1 ) /*0x68658e*/
  {
  int Ticks; // eax
    Ticks = TimerGetTicks(); /*0x686593*/
  char *v3; // ecx
    v3 = (char *)p_vtable2[2]; /*0x68659a*/
  int v4; // eax
    v4 = Ticks - (unsigned int)*p_vtable2; /*0x68659d*/
    *p_vtable2 = (void *)-1; /*0x68659f*/
    p_vtable2[2] = &v3[v4]; /*0x6865a7*/
  }
  dword_A8B230[130].vfptr3 = (void *)1; /*0x6865b0*/
  AsyncIO *v9; // [esp+0h] [ebp-8h]
  (v9)->Shutdown(); /*0x6865ba*/
  (*(Timer **)&g_BinkMoviePlayer)->PumpMessages(); /*0x6865c5*/
  (*(void (**)(void *, ObjectClass *, unsigned int))(*(unsigned int *)stru_887598.lineTrailer + 64))( /*0x6865d9*/
    stru_887598.lineTrailer,
    g_DSurface_Hidden,
    0);
  (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 20))(stru_887598.lineTrailer); /*0x6865e4*/
  Mission::SetAndCall((MouseClass *)&DataGlobal_87F7E8, 0, 0); /*0x6865ee*/
  ((Theme *)&unk_A83D10)->Stop(1); /*0x6865fa*/
  ((Audio *)g_MixerState)->GetFlag(); /*0x686605*/
  ((VoxClass *)(&stru_83DB34))->FindAndPlay(-1); /*0x686616*/
  ((Audio *)g_MixerState)->WaitForCallback(); /*0x686621*/
  int v5; // esi
  v5 = *(unsigned int *)&g_PerformanceTickOffset; /*0x68662b*/
  if ( *(unsigned int *)&g_LastPerformanceTick != -1 ) /*0x686634*/
    v5 += TimerGetTicks() - *(unsigned int *)&g_LastPerformanceTick; /*0x686646*/
  int v6; // edi
  v6 = v5 + 300; /*0x686649*/
  while ( (uint8_t)Audio::IsPlaying() ) /*0x68664f*/
  {
  int v7; // esi
    v7 = *(unsigned int *)&g_PerformanceTickOffset; /*0x68665d*/
    if ( *(unsigned int *)&g_LastPerformanceTick != -1 ) /*0x686666*/
      v7 += TimerGetTicks() - *(unsigned int *)&g_LastPerformanceTick; /*0x686678*/
    if ( v6 <= v7 ) /*0x68667c*/
      break; /*0x68667c*/
    Event::Dispatch(); /*0x68667e*/
  }
  StopThemeClass(1); /*0x68668e*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x686693*/
  AudioMixer::Shutdown(); /*0x686698*/
  AudioQueue::DrainAll(); /*0x68669d*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x6866ad*/
  char result; // al
  result = g_CreditsScreenBounds; /*0x6866b2*/
  if ( *(unsigned int *)&g_CreditsScreenBounds != stru_A8EB00.vfptr[35] ) /*0x6866c0*/
  {
    result = stru_A8EB00.vfptr[36]; /*0x6866c8*/
    if ( *(unsigned int *)&g_CreditsScreenConfig != stru_A8EB00.vfptr[36] ) /*0x6866cf*/
    {
      Debug::Log(); /*0x6866d6*/
      result = ChangeVideoMode(stru_A8EB00.vfptr[35], stru_A8EB00.vfptr[36]); /*0x6866ea*/
    }
  }
  byte_A8E9A0 = 0; /*0x6866ef*/
  return (gamemd::AbstractClass *)(result); /*0x6866f5*/
}
}