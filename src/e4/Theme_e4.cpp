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
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/classes/Trigger_e4.hpp"
#include "e4/classes/TriggerTypeClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "app/cmdline.hpp"
#include "e4/classes/ThemeManager_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/AudioSample_e4.hpp"

// 0x720B20
namespace gamemd {
int Theme::QueueSong(int aP1)
{
  int IsSoundEnabled; // eax
  AudioSample *v4; // ecx
  ThemeClass *v5; // ecx

  IDA_LOBYTE(IsSoundEnabled) = byte_A8EC74; /*0x720b20*/
  if ( byte_A8EC74 ) /*0x720b2a*/
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
          IDA_LOBYTE(IsSoundEnabled) = Debug::Log(); /*0x720b5a*/
          v4 = *(AudioSample **)(&this->ptr_44); /*0x720b5f*/
          if ( v4 ) /*0x720b67*/
          {
            if ( this->u32_11 && !AudioSample::IsBuffering(v4) ) /*0x720b70*/
              Audio::Release(*(Audio **)(&this->ptr_44)); /*0x720b7c*/
            IDA_LOBYTE(IsSoundEnabled) = Audio::IsSoundPlaying(*(Audio **)(&this->ptr_44)) != 0; /*0x720b8b*/
            if ( (_BYTE)IsSoundEnabled == 1 ) /*0x720b90*/
            {
              v5 = *(ThemeClass **)(&this->ptr_44); /*0x720b92*/
              if ( v5 ) /*0x720b97*/
                IDA_LOBYTE(IsSoundEnabled) = ThemeClass::RequestBuffer(v5); /*0x720b99*/
              this->u32_11 = 1; /*0x720b9e*/
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
int Theme::Stop(char aP1)
{
  int result; // eax
  AudioSample *v4; // ecx
  ThemeClass *v5; // ecx
  Audio *v6; // ecx

  IDA_LOBYTE(result) = stru_A8EB00.?[144]; /*0x720ea0*/
  if ( stru_A8EB00.?[144] ) /*0x720eaa*/
  {
    result = Audio::IsSoundEnabled(); /*0x720eb0*/
    if ( result ) /*0x720eb7*/
    {
      IDA_LOBYTE(result) = stru_A8EB00.?[384]; /*0x720ebd*/
      if ( !stru_A8EB00.?[384] && *(_DWORD *)this != -1 ) /*0x720ecd*/
      {
        if ( !aP1 ) /*0x720ed9*/
          goto LABEL_14; /*0x720ed9*/
        v4 = (AudioSample *)this->audioSample; /*0x720edb*/
        if ( !v4 ) /*0x720ee0*/
          goto LABEL_14; /*0x720ee0*/
        if ( this->u32_11 && !AudioSample::IsBuffering(v4) ) /*0x720ee9*/
          Audio::Release(*((Audio **)&this->ptr_41)); /*0x720ef5*/
        if ( Audio::IsSoundPlaying(*((Audio **)&this->ptr_41)) != 0 ) /*0x720f04*/
        {
          result = Debug::Log(); /*0x720f14*/
          v5 = (ThemeClass *)this->audioSample; /*0x720f19*/
          if ( v5 ) /*0x720f21*/
            result = ThemeClass::RequestBuffer(v5); /*0x720f23*/
          this->u32_11 = 1; /*0x720f28*/
        }
        else
        {
  LABEL_14:
          result = Debug::Log(); /*0x720f37*/
          v6 = (Audio *)this->audioSample; /*0x720f3c*/
          if ( v6 ) /*0x720f44*/
            result = Audio::Release(v6); /*0x720f46*/
        }
        *(_DWORD *)this = -1; /*0x720f4b*/
        this->ptr_4 = -1; /*0x720f51*/
        this->u32_8 = -1; /*0x720f58*/
      }
    }
  }
  return result; /*0x720f5f*/
}
} // namespace gamemd
// 0x720FD0
namespace gamemd {
bool Theme::IsPlaying()
{
  AudioSample *v2; // ecx

  v2 = (AudioSample *)this->audioSample; /*0x720fd3*/
  if ( !v2 ) /*0x720fd8*/
    return 0; /*0x721002*/
  if ( this->u32_11 ) /*0x720fda*/
  {
    if ( !AudioSample::IsBuffering(v2) ) /*0x720fe1*/
      Audio::Release(*((Audio **)&this->ptr_41)); /*0x720fed*/
  }
  return Audio::IsSoundPlaying(*((Audio **)&this->ptr_41)) != 0; /*0x720ffe*/
}
} // namespace gamemd