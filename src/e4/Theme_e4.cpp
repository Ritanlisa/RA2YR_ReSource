// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"

// 0x720B20
int Theme::QueueSong(IUnknown * aP1)
{
  int IsSoundEnabled; // eax

  LOBYTE(IsSoundEnabled) = g_ThemeMIXLoaded; /*0x720b20*/
  if ( g_ThemeMIXLoaded ) /*0x720b2a*/
  {
    IsSoundEnabled = Audio::IsSoundEnabled(); /*0x720b2c*/
    if ( IsSoundEnabled ) /*0x720b33*/
    {
      LOBYTE(IsSoundEnabled) = byte_A8ED64; /*0x720b35*/
      if ( !byte_A8ED64 ) /*0x720b3c*/
      {
        LOBYTE(IsSoundEnabled) = aP1; /*0x720b3e*/
        *(_DWORD *)(this + 8) = aP1; /*0x720b45*/
        if ( aP1 != -1 && aP1 != -2 && aP1 != *(_DWORD *)(this + 4) ) /*0x720b52*/
        {
          LOBYTE(IsSoundEnabled) = Debug::Log("Theme::QueueSong(%d)\n", aP1); /*0x720b5a*/
          if ( *(_DWORD *)(this + 44) ) /*0x720b5f*/
          {
            if ( *(_BYTE *)(this + 17) && !AudioSample::IsBuffering() ) /*0x720b70*/
              Audio::Release(*(_DWORD *)(this + 44)); /*0x720b7c*/
            LOBYTE(IsSoundEnabled) = Audio::IsSoundPlaying(*(_DWORD *)(this + 44)) != 0; /*0x720b8b*/
            if ( (_BYTE)IsSoundEnabled == 1 ) /*0x720b90*/
            {
              if ( *(_DWORD *)(this + 44) ) /*0x720b92*/
                LOBYTE(IsSoundEnabled) = ThemeClass::RequestBuffer(); /*0x720b99*/
              *(_BYTE *)(this + 17) = 1; /*0x720b9e*/
            }
          }
        }
      }
    }
  }
  return IsSoundEnabled; /*0x720ba2*/
}
// 0x720EA0
int Theme::Stop(ObjectClass * aP1)
{
  int IsSoundEnabled; // eax
  int v4; // ecx

  LOBYTE(IsSoundEnabled) = g_ThemeMIXLoaded; /*0x720ea0*/
  if ( g_ThemeMIXLoaded ) /*0x720eaa*/
  {
    IsSoundEnabled = Audio::IsSoundEnabled(); /*0x720eb0*/
    if ( IsSoundEnabled ) /*0x720eb7*/
    {
      LOBYTE(IsSoundEnabled) = byte_A8ED64; /*0x720ebd*/
      if ( !byte_A8ED64 && *this != -1 ) /*0x720ecd*/
      {
        if ( !aP1 || !*(this + 11) ) /*0x720edb*/
          goto LABEL_14; /*0x720edb*/
        if ( *((_BYTE *)this + 17) && !AudioSample::IsBuffering() ) /*0x720ee9*/
          Audio::Release(*(this + 11)); /*0x720ef5*/
        if ( Audio::IsSoundPlaying(*(this + 11)) != 0 ) /*0x720f04*/
        {
          LOBYTE(IsSoundEnabled) = Debug::Log("Theme::Stop(%d) - Fading\n", *(this + 1)); /*0x720f14*/
          if ( *(this + 11) ) /*0x720f19*/
            LOBYTE(IsSoundEnabled) = ThemeClass::RequestBuffer(); /*0x720f23*/
          *((_BYTE *)this + 17) = 1; /*0x720f28*/
        }
        else
        {
  LABEL_14:
          LOBYTE(IsSoundEnabled) = Debug::Log("Theme::Stop(%d)\n", *(this + 1)); /*0x720f37*/
          v4 = *(this + 11); /*0x720f3c*/
          if ( v4 ) /*0x720f44*/
            LOBYTE(IsSoundEnabled) = Audio::Release(v4); /*0x720f46*/
        }
        *this = -1; /*0x720f4b*/
        *(this + 1) = -1; /*0x720f51*/
        *(this + 2) = -1; /*0x720f58*/
      }
    }
  }
  return IsSoundEnabled; /*0x720f5f*/
}
// 0x720FD0
int Theme::IsPlaying()
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