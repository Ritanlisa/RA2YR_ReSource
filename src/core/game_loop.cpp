#include "core/game_loop.hpp"

namespace gamemd {

// --- WTFMode ---

// 0x69bab0
bool WTFMode::Init(int* mode) { (void)mode; return false; }
  char result; // al

  result = *(mode + 12504); /*0x69bab0*/
  if ( !result ) /*0x69bab8*/
  {
    result = g_WTFMode; /*0x69babe*/
    if ( g_WTFMode ) /*0x69bac5*/
    {
      *(mode + 12504) = 1; /*0x69bac7*/
      if ( dword_83ED20 == -1 ) /*0x69bad6*/
        dword_83ED20 = *(_DWORD *)g_GameModeOptions; /*0x69badd*/
      if ( !*(_DWORD *)mode ) /*0x69bae2*/
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
  return result; /*0x69bb3f*/
  return result; /*0x69bb3f*/
  return result; /*0x69bb3f*/
  return result; /*0x69bb3f*/
