// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6863E0
namespace gamemd {
int sub_6863E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6863E0()
{
  _DWORD *v0; // esi
  DWORD Ticks; // eax
  int v2; // ecx
  DWORD v3; // eax
  int v4; // esi
  int v5; // eax
  DWORD v7; // [esp+0h] [ebp-18h]

  MouseClass::LoadCursors(); /*0x6863e3*/
  if ( MEMORY[0x886FB8] != MEMORY[0xA8EB8C] && MEMORY[0x886FBC] != MEMORY[0xA8EB90] ) /*0x686404*/
  {
    Debug::Log(); /*0x68640b*/
    ChangeVideoMode(MEMORY[0xA8EB8C], MEMORY[0xA8EB90]); /*0x68641f*/
  }
  MEMORY[0xA8ED5C] = 0; /*0x68642a*/
  MEMORY[0xA8E378] = 0; /*0x686433*/
  if ( MEMORY[0x887368] ) /*0x68643a*/
    Tooltip::Enable((void *)MEMORY[0x887368], 0); /*0x68643e*/
  v0 = (char *)MEMORY[0xA8B230] + 1556; /*0x686450*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 389) != -1 ) /*0x686459*/
  {
    Ticks = Timer::GetTicks(); /*0x68645e*/
    v2 = v0[2]; /*0x686465*/
    v3 = Ticks - *v0; /*0x686468*/
    *v0 = -1; /*0x68646a*/
    v0[2] = v3 + v2; /*0x686472*/
  }
  AsyncIO::Shutdown(); /*0x686475*/
  Timer::GetTicks(); /*0x68647e*/
  v7 = Timer::GetTicks(); /*0x68649d*/
  Theme::Stop(&g_BuildingTypeClass_Count, 1); /*0x6864b4*/
  AudioMixer::Shutdown(); /*0x6864b9*/
  AudioQueue::DrainAll(); /*0x6864be*/
  StopThemeClass(1); /*0x6864c5*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x6864ca*/
  Mission::SetAndCall((int *)&MEMORY[0x87F7E8], 0, 0); /*0x6864d8*/
  Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x6864e3*/
  ScenarioClass::LoadScenarioAndStart((char *)MEMORY[0xA8B230] + 4700, 0, *((_DWORD *)MEMORY[0xA8B230] + 3379)); /*0x6864fc*/
  GameResult::CalcScore((int)&MEMORY[0x8A38E0]); /*0x686506*/
  while ( 1 ) /*0x68650f*/
  {
    v4 = 60; /*0x68650f*/
    if ( v7 != -1 ) /*0x686516*/
    {
      v5 = Timer::GetTicks() - v7; /*0x686521*/
      if ( v5 >= 60 ) /*0x686527*/
        break; /*0x686527*/
      v4 = 60 - v5; /*0x686529*/
    }
    if ( v4 <= 0 ) /*0x68652d*/
      break; /*0x68652d*/
    Event::Dispatch(); /*0x68652f*/
  }
  Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x686536*/
  if ( MEMORY[0x887368] ) /*0x68654a*/
    Tooltip::Enable((void *)MEMORY[0x887368], MEMORY[0xA8EB80]); /*0x686553*/
  return TacticalMap::Redraw(&MEMORY[0x87F7E8]); /*0x686562*/
}
}
} // namespace gamemd

// 0x686570
namespace gamemd {
char sub_686570()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_686570()
{
  _DWORD *v0; // esi
  DWORD Ticks; // eax
  int v2; // ecx
  DWORD v3; // eax
  int v4; // esi
  int v5; // edi
  int v6; // esi
  char result; // al

  v0 = (char *)MEMORY[0xA8B230] + 1556; /*0x686579*/
  MEMORY[0xA8ED5C] = 0; /*0x68657f*/
  MEMORY[0xA8E378] = 0; /*0x686585*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 389) != -1 ) /*0x68658e*/
  {
    Ticks = Timer::GetTicks(); /*0x686593*/
    v2 = v0[2]; /*0x68659a*/
    v3 = Ticks - *v0; /*0x68659d*/
    *v0 = -1; /*0x68659f*/
    v0[2] = v3 + v2; /*0x6865a7*/
  }
  *((_DWORD *)MEMORY[0xA8B230] + 1173) = 1; /*0x6865b0*/
  AsyncIO::Shutdown(); /*0x6865ba*/
  Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x6865c5*/
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)MEMORY[0x887640] + 64))(MEMORY[0x887640], MEMORY[0x88730C], 0); /*0x6865d9*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 20))(MEMORY[0x887640]); /*0x6865e4*/
  Mission::SetAndCall((int *)&MEMORY[0x87F7E8], 0, 0); /*0x6865ee*/
  Theme::Stop(&g_BuildingTypeClass_Count, 1); /*0x6865fa*/
  Audio::GetFlag((unsigned int *)MEMORY[0x87E758]); /*0x686605*/
  VoxClass::FindAndPlay(MEMORY[0x83DB34], -1); /*0x686616*/
  Audio::WaitForCallback(MEMORY[0x87E758]); /*0x686621*/
  v4 = MEMORY[0x887340]; /*0x68662b*/
  if ( MEMORY[0x887338] != -1 ) /*0x686634*/
    v4 += Timer::GetTicks() - MEMORY[0x887338]; /*0x686646*/
  v5 = v4 + 300; /*0x686649*/
  while ( (unsigned __int8)Audio::IsPlaying() ) /*0x68664f*/
  {
    v6 = MEMORY[0x887340]; /*0x68665d*/
    if ( MEMORY[0x887338] != -1 ) /*0x686666*/
      v6 += Timer::GetTicks() - MEMORY[0x887338]; /*0x686678*/
    if ( v5 <= v6 ) /*0x68667c*/
      break; /*0x68667c*/
    Event::Dispatch(); /*0x68667e*/
  }
  StopThemeClass(1); /*0x68668e*/
  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ(); /*0x686693*/
  AudioMixer::Shutdown(); /*0x686698*/
  AudioQueue::DrainAll(); /*0x68669d*/
  EndBufferMixer((int *)MEMORY[0x87E758], 0x4000); /*0x6866ad*/
  result = MEMORY[0x886FB8]; /*0x6866b2*/
  if ( MEMORY[0x886FB8] != MEMORY[0xA8EB8C] ) /*0x6866c0*/
  {
    result = MEMORY[0xA8EB90]; /*0x6866c8*/
    if ( MEMORY[0x886FBC] != MEMORY[0xA8EB90] ) /*0x6866cf*/
    {
      Debug::Log(); /*0x6866d6*/
      result = ChangeVideoMode(MEMORY[0xA8EB8C], MEMORY[0xA8EB90]); /*0x6866ea*/
    }
  }
  MEMORY[0xA8E9A0] = 0; /*0x6866ef*/
  return result; /*0x6866f5*/
}
}
} // namespace gamemd
