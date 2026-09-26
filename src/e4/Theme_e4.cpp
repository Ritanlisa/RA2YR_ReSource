// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Theme_e4.hpp"
#include "e4/classes/ThemeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x720B20
namespace gamemd {
int Theme::QueueSong(IUnknown * aP1)
{
  int IsSoundEnabled; // eax

  IDA_LOBYTE(IsSoundEnabled) = g_ThemeMIXLoaded; /*0x720b20*/
  if ( g_ThemeMIXLoaded ) /*0x720b2a*/
  {
    IsSoundEnabled = Audio::IsSoundEnabled(); /*0x720b2c*/
    if ( IsSoundEnabled ) /*0x720b33*/
    {
      IDA_LOBYTE(IsSoundEnabled) = byte_A8ED64; /*0x720b35*/
      if ( !byte_A8ED64 ) /*0x720b3c*/
      {
        IDA_LOBYTE(IsSoundEnabled) = aP1; /*0x720b3e*/
        this->u32_8 = aP1; /*0x720b45*/
        if ( aP1 != -1 && aP1 != -2 && aP1 != this->ptr_4 ) /*0x720b52*/
        {
          IDA_LOBYTE(IsSoundEnabled) = Debug::Log("Theme::QueueSong(%d)\n", aP1); /*0x720b5a*/
          if ( this->audioSample ) /*0x720b5f*/
          {
            if ( this->u8_11 && !AudioSample::IsBuffering() ) /*0x720b70*/
              Audio::Release(this->audioSample); /*0x720b7c*/
            IDA_LOBYTE(IsSoundEnabled) = Audio::IsSoundPlaying(this->audioSample) != 0; /*0x720b8b*/
            if ( (unsigned char)IsSoundEnabled == 1 ) /*0x720b90*/
            {
              if ( this->audioSample ) /*0x720b92*/
                IDA_LOBYTE(IsSoundEnabled) = ThemeClass::RequestBuffer(); /*0x720b99*/
              this->u8_11 = 1; /*0x720b9e*/
            }
          }
        }
      }
    }
  }
  return IsSoundEnabled; /*0x720ba2*/
}
} // namespace gamemd
// 0x720EA0
namespace gamemd {
int Theme::Stop(ObjectClass * aP1)
{
  int IsSoundEnabled; // eax
  void * v4;

  IDA_LOBYTE(IsSoundEnabled) = g_ThemeMIXLoaded; /*0x720ea0*/
  if ( g_ThemeMIXLoaded ) /*0x720eaa*/
  {
    IsSoundEnabled = Audio::IsSoundEnabled(); /*0x720eb0*/
    if ( IsSoundEnabled ) /*0x720eb7*/
    {
      IDA_LOBYTE(IsSoundEnabled) = byte_A8ED64; /*0x720ebd*/
      if ( !byte_A8ED64 && *this != -1 ) /*0x720ecd*/
      {
        if ( !aP1 || !*(&this->ptr_41) ) /*0x720edb*/
          goto LABEL_14; /*0x720edb*/
        if ( this->u8_11 && !AudioSample::IsBuffering() ) /*0x720ee9*/
          Audio::Release(*(&this->ptr_41)); /*0x720ef5*/
        if ( Audio::IsSoundPlaying(*(&this->ptr_41)) != 0 ) /*0x720f04*/
        {
          IDA_LOBYTE(IsSoundEnabled) = Debug::Log("Theme::Stop(%d) - Fading\n", this->ptr_4); /*0x720f14*/
          if ( *(&this->ptr_41) ) /*0x720f19*/
            IDA_LOBYTE(IsSoundEnabled) = ThemeClass::RequestBuffer(); /*0x720f23*/
          this->u8_11 = 1; /*0x720f28*/
        }
        else
        {
  LABEL_14:
          IDA_LOBYTE(IsSoundEnabled) = Debug::Log("Theme::Stop(%d)\n", this->ptr_4); /*0x720f37*/
          v4 = *(&this->ptr_41); /*0x720f3c*/
          if ( v4 ) /*0x720f44*/
            IDA_LOBYTE(IsSoundEnabled) = Audio::Release(v4); /*0x720f46*/
        }
        *(unsigned int *)this = -1; /*0x720f4b*/
        this->ptr_4 = -1; /*0x720f51*/
        this->u32_8 = -1; /*0x720f58*/
      }
    }
  }
  return IsSoundEnabled; /*0x720f5f*/
}
} // namespace gamemd
// 0x720FD0
namespace gamemd {
int Theme::IsPlaying()
{
  if ( !this->audioSample ) /*0x720fd3*/
    return 0; /*0x721002*/
  if ( this->u8_11 ) /*0x720fda*/
  {
    if ( !AudioSample::IsBuffering() ) /*0x720fe1*/
      Audio::Release(*(unsigned int **)(&this->ptr_44)); /*0x720fed*/
  }
  return Audio::IsSoundPlaying(*(unsigned int **)(&this->ptr_44)) != 0; /*0x720ffe*/
}
} // namespace gamemd