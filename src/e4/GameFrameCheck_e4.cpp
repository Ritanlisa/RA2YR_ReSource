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

// 0x6863E0
namespace gamemd {
int sub_6863E0(void * a1, void * a2)
{
  void **p_vtable2; // esi
  int Ticks; // eax
  char *v4; // ecx
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v10; // [esp+0h] [ebp-18h]

    ((MouseClass *)0)->LoadCursors();
  if ( *(unsigned int *)&DSurface_ViewBounds.__pad_8[16] != stru_A8EB00.ObjectTypeClass[35] /*0x686404*/
    && *(unsigned int *)&DSurface_ViewBounds.__pad_8[20] != stru_A8EB00.ObjectTypeClass[36] )
  {
        Debug::Log("Toggle display mode back to shell res\n") /*G57c1: IDA 0x68640b push offset g_Str_Toggle_display_mode_back_to_sh*/;
    ChangeVideoMode(stru_A8EB00.ObjectTypeClass[35], stru_A8EB00.ObjectTypeClass[36]); /*0x68641f*/
  }
  *((unsigned int *)((char *)&stru_A8EB00 + 376)) = 0; /*0x68642a*/
  byte_A8E378 = 0; /*0x686433*/
  if ( *(unsigned int *)&stru_88732C.__pad_1C[32] ) /*0x68643a*/
    ((Tooltip *)(*(Tooltip **)&stru_88732C.__pad_1C[32]))->Enable(0); /*0x68643e*/
  p_vtable2 = &((unsigned int *)(dword_A8B230))[43].vtable2; /*0x686450*/
  if ( ((unsigned int *)(dword_A8B230))[43].vtable2 != (void *)-1 ) /*0x686459*/
  {
        Ticks = ((Timer *)0)->GetTicks();
    v4 = (char *)p_vtable2[2]; /*0x686465*/
    v5 = Ticks - (unsigned int)*p_vtable2; /*0x686468*/
    *p_vtable2 = (void *, unsigned int a1, unsigned int a2)-1; /*0x68646a*/
    p_vtable2[2] = &v4[v5]; /*0x686472*/
  }
  ((AsyncIO *)a1)->Shutdown(); /*0x686475*/
    ((Timer *)0)->GetTicks();
    v7 = ((Timer *)0)->GetTicks();
  ((Theme *)((Theme *)&unk_A83D10))->Stop(1); /*0x6864b4*/
    ((AudioMixer *)0)->Shutdown();
    ((AudioQueue *)0)->DrainAll();
  StopThemeClass(1); /*0x6864c5*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x6864ca*/
  Mission_e4::SetAndCall( (int)((MouseClass *)&stru_87F5F0.__pad_58[416]), 0, 0); /*0x6864d8*/
  ((Timer*)(*(Timer **)&stru_87F5F0.__pad_58[296]))->PumpMessages(); /*0x6864e3*/
  ScenarioClass::LoadScenarioAndStart((char *)&((unsigned int *)(dword_A8B230))[130].abstractFlags, 0, a2, ((AbstractClass *)dword_A8B230)[375].uniqueId); /*0x6864fc*/
  ((GameResult*)(GameResult *)&stru_8A38E0)->CalcScore(); /*0x686506*/
  while ( 1 ) /*0x68650f*/
  {
    v6 = 60; /*0x68650f*/
    if ( v10 != -1 ) /*0x686516*/
    {
            v5 = ((gamemd::Timer*)0)->GetTicks() - v7;
      if ( v7 >= 60 ) /*0x686527*/
        break; /*0x686527*/
      v6 = 60 - v7; /*0x686529*/
    }
    if ( v6 <= 0 ) /*0x68652d*/
      break; /*0x68652d*/
        ((Event *)0)->Dispatch();
  }
  ((gamemd::Timer*)(*(gamemd::Timer**)&stru_87F5F0.__pad_58[296]))->PumpMessages(); /*0x686536*/
  if ( *(unsigned int *)&stru_88732C.__pad_1C[32] ) /*0x68654a*/
    ((Tooltip *)(*(Tooltip **)&stru_88732C.__pad_1C[32]))->Enable(stru_A8EB00.ObjectTypeClass[32]); /*0x686553*/
// 0x4f4480
  return ((TacticalMap *)(GScreenClass *)&stru_87F5F0.__pad_58[416])->Redraw(); /*0x686562*/
}
}
// 0x686570
namespace gamemd {
AbstractClass * * sub_686570()
{
  void **p_vtable2; // esi
  int Ticks; // eax
  char *v3; // ecx
  int v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // esi
  char result; // al
  AsyncIO *v9; // [esp+0h] [ebp-8h]

  p_vtable2 = &((unsigned int *)(dword_A8B230))[43].vtable2; /*0x686579*/
  *((unsigned int *)((char *)&stru_A8EB00 + 376)) = 0; /*0x68657f*/
  byte_A8E378 = 0; /*0x686585*/
  if ( ((unsigned int *)(dword_A8B230))[43].vtable2 != (void *)-1 ) /*0x68658e*/
  {
        Ticks = ((gamemd::Timer*)0)->GetTicks();
    v3 = (char *)p_vtable2[2]; /*0x68659a*/
    v4 = Ticks - (unsigned int)*p_vtable2; /*0x68659d*/
    *p_vtable2 = (void *)-1; /*0x68659f*/
    p_vtable2[2] = &v3[v4]; /*0x6865a7*/
  }
  ((unsigned int *)(dword_A8B230))[130].vtable3 = (void *)1; /*0x6865b0*/
  ((AsyncIO *)(v9))->Shutdown(); /*0x6865ba*/
  ((gamemd::Timer*)(*(gamemd::Timer**)&stru_87F5F0.__pad_58[296]))->PumpMessages(); /*0x6865c5*/
(*(void (**)(void *, ObjectClass *, unsigned int))(*(unsigned int *)&((MouseClass *)dword_887640)->q_100))( /*0x6865d9*/ dword_887640, (ObjectClass *)(g_DSurface_Hidden), 0);



  (*(void (**)(void *))(*(unsigned int *)&((MouseClass *)dword_887640)->u32_50))(dword_887640);  /*0x6865e4*/
  Mission_e4::SetAndCall( (int)((MouseClass *)&stru_87F5F0.__pad_58[416]), 0, 0); /*0x6865ee*/
  ((Theme *)((Theme *)&unk_A83D10))->Stop(1); /*0x6865fa*/
  ((Audio*)(Audio *)g_MixerState)->GetFlag(); /*0x686605*/
  ((VoxClass *)(&stru_83DB34))->FindAndPlay(-1); /*0x686616*/
  ((Audio*)(Audio *)g_MixerState)->WaitForCallback(); /*0x686621*/
  v5 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x68662b*/
  if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x686634*/
        v4 += ((gamemd::Timer *)this)->GetTicks() - g_abs_887338;
  v6 = v5 + 300; /*0x686649*/
    while ( (uint8_t)((Audio *)0)->IsPlaying() )
  {
    v7 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x68665d*/
    if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x686666*/
            v6 += ((gamemd::Timer *)this)->GetTicks() - g_abs_887338;
    if ( v6 <= v7 ) /*0x68667c*/
      break; /*0x68667c*/
        ((Event *)0)->Dispatch();
  }
  StopThemeClass(1); /*0x68668e*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x686693*/
    ((AudioMixer *)0)->Shutdown();
    ((AudioQueue *)0)->DrainAll();
  EndBufferMixer((gamemd::VolumeStruct *)((int *)g_MixerState), 0x4000); /*0x6866ad*/
  result = DSurface_ViewBounds.__pad_8[16]; /*0x6866b2*/
  if ( *(unsigned int *)&DSurface_ViewBounds.__pad_8[16] != stru_A8EB00.ObjectTypeClass[35] ) /*0x6866c0*/
  {
    result = stru_A8EB00.ObjectTypeClass[36]; /*0x6866c8*/
    if ( *(unsigned int *)&DSurface_ViewBounds.__pad_8[20] != stru_A8EB00.ObjectTypeClass[36] ) /*0x6866cf*/
    {
            Debug::Log("Toggle display mode back to shell res\n") /*G57c1: IDA 0x6866d6 push offset g_Str_Toggle_display_mode_back_to_sh*/;
      result = ChangeVideoMode(stru_A8EB00.ObjectTypeClass[35], stru_A8EB00.ObjectTypeClass[36]); /*0x6866ea*/
    }
  }
  byte_A8E9A0 = (unsigned char)((gamemd::AbstractClass **)(0));
  return (gamemd::AbstractClass **)(result);
}
}
