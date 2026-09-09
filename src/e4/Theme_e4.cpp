// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x720B20
char Theme::QueueSong(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Theme::QueueSong(int this, IUnknown *aP1)
{
  int IsSoundEnabled; // eax
  int v4; // ecx
  _DWORD *v5; // ecx

  LOBYTE(IsSoundEnabled) = MEMORY[0xA8D63C].__pad_14B0[392]; /*0x720b20*/
  if ( MEMORY[0xA8D63C].__pad_14B0[392] ) /*0x720b2a*/
  {
    IsSoundEnabled = Audio::IsSoundEnabled(); /*0x720b2c*/
    if ( IsSoundEnabled ) /*0x720b33*/
    {
      LOBYTE(IsSoundEnabled) = MEMORY[0xA8D63C].__pad_14B0[632]; /*0x720b35*/
      if ( !MEMORY[0xA8D63C].__pad_14B0[632] ) /*0x720b3c*/
      {
        LOBYTE(IsSoundEnabled) = (_BYTE)aP1; /*0x720b3e*/
        *(_DWORD *)(this + 8) = aP1; /*0x720b45*/
        if ( aP1 != (IUnknown *)-1 && aP1 != (IUnknown *)-2 && aP1 != *(IUnknown **)(this + 4) ) /*0x720b52*/
        {
          Debug::Log(); /*0x720b5a*/
          v4 = *(_DWORD *)(this + 44); /*0x720b5f*/
          if ( v4 ) /*0x720b67*/
          {
            if ( *(_BYTE *)(this + 17) && !AudioSample::IsBuffering(v4) ) /*0x720b70*/
              Audio::Release(*(_DWORD **)(this + 44)); /*0x720b7c*/
            LOBYTE(IsSoundEnabled) = Audio::IsSoundPlaying(*(_DWORD **)(this + 44)) != 0; /*0x720b8b*/
            if ( (_BYTE)IsSoundEnabled == 1 ) /*0x720b90*/
            {
              v5 = *(_DWORD **)(this + 44); /*0x720b92*/
              if ( v5 ) /*0x720b97*/
                LOBYTE(IsSoundEnabled) = ThemeClass::RequestBuffer(v5); /*0x720b99*/
              *(_BYTE *)(this + 17) = 1; /*0x720b9e*/
            }
          }
        }
      }
    }
  }
  return IsSoundEnabled; /*0x720ba2*/
}
}

// 0x720EA0
char Theme::Stop(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Theme::Stop(_DWORD *this, ObjectClass *aP1)
{
  int IsSoundEnabled; // eax
  int v4; // ecx
  _DWORD *v5; // ecx
  _DWORD *v6; // ecx

  LOBYTE(IsSoundEnabled) = MEMORY[0xA8D63C].__pad_14B0[392]; /*0x720ea0*/
  if ( MEMORY[0xA8D63C].__pad_14B0[392] ) /*0x720eaa*/
  {
    IsSoundEnabled = Audio::IsSoundEnabled(); /*0x720eb0*/
    if ( IsSoundEnabled ) /*0x720eb7*/
    {
      LOBYTE(IsSoundEnabled) = MEMORY[0xA8D63C].__pad_14B0[632]; /*0x720ebd*/
      if ( !MEMORY[0xA8D63C].__pad_14B0[632] && *this != -1 ) /*0x720ecd*/
      {
        if ( !(_BYTE)aP1 ) /*0x720ed9*/
          goto LABEL_14; /*0x720ed9*/
        v4 = *(this + 11); /*0x720edb*/
        if ( !v4 ) /*0x720ee0*/
          goto LABEL_14; /*0x720ee0*/
        if ( *((_BYTE *)this + 17) && !AudioSample::IsBuffering(v4) ) /*0x720ee9*/
          Audio::Release((_DWORD *)*(this + 11)); /*0x720ef5*/
        if ( Audio::IsSoundPlaying((_DWORD *)*(this + 11)) != 0 ) /*0x720f04*/
        {
          Debug::Log(); /*0x720f14*/
          v5 = (_DWORD *)*(this + 11); /*0x720f19*/
          if ( v5 ) /*0x720f21*/
            LOBYTE(IsSoundEnabled) = ThemeClass::RequestBuffer(v5); /*0x720f23*/
          *((_BYTE *)this + 17) = 1; /*0x720f28*/
        }
        else
        {
LABEL_14:
          Debug::Log(); /*0x720f37*/
          v6 = (_DWORD *)*(this + 11); /*0x720f3c*/
          if ( v6 ) /*0x720f44*/
            Audio::Release(v6); /*0x720f46*/
        }
        *this = -1; /*0x720f4b*/
        *(this + 1) = -1; /*0x720f51*/
        *(this + 2) = -1; /*0x720f58*/
      }
    }
  }
  return IsSoundEnabled; /*0x720f5f*/
}
}

// 0x720FD0
bool Theme::IsPlaying()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall Theme_IsPlaying(int this)
{
  if ( !*(_DWORD *)(this + 44) ) /*0x720fd3*/
    return 0; /*0x721002*/
  if ( *(_BYTE *)(this + 17) ) /*0x720fda*/
  {
    if ( !AudioSample::IsBuffering() ) /*0x720fe1*/
      Audio::Release(*(_DWORD **)(this + 44)); /*0x720fed*/
  }
  return Audio::IsSoundPlaying(*(_DWORD **)(this + 44)) != 0; /*0x720ffe*/
}
}
