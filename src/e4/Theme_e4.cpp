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

  LOBYTE(IsSoundEnabled) = byte_A8EC74; /*0x720b20*/
  if ( byte_A8EC74 ) /*0x720b2a*/
  {
    IsSoundEnabled = ((gamemd::Audio *)this)->IsSoundEnabled(); /*0x720b2c*/
    if ( IsSoundEnabled ) /*0x720b33*/
    {
      LOBYTE(IsSoundEnabled) = byte_A8ED64; /*0x720b35*/
      if ( !byte_A8ED64 ) /*0x720b3c*/
      {
        LOBYTE(IsSoundEnabled) = (unsigned char)(aP1); /*0x720b3e*/
        *((unsigned int *)this + 2) = (unsigned int)(aP1); /*0x720b45*/
        if ( aP1 != (int)(-1) && aP1 != (int)(-2) && aP1 != *((unsigned int *)this + 1) ) /*0x720b52*/
        {
          LOBYTE(IsSoundEnabled) = Debug::Log("Theme::QueueSong(%d)\n", aP1); /*0x720b5a*/
          if ( *((unsigned int *)this + 11) ) /*0x720b5f*/
          {
            if ( *((unsigned char *)this + 17) && !AudioSample::IsBuffering() ) /*0x720b70*/
              ((gamemd::Audio *)(*((unsigned int *)this + 11)))->Release(); /*0x720b7c*/
            LOBYTE(IsSoundEnabled) = ((gamemd::Audio *)(*((unsigned int *)this + 11)))->IsSoundPlaying() != 0; /*0x720b8b*/
            if ( (unsigned char)IsSoundEnabled == 1 ) /*0x720b90*/
            {
              if ( *((unsigned int *)this + 11) ) /*0x720b92*/
                LOBYTE(IsSoundEnabled) = ((gamemd::ThemeClass *)this)->RequestBuffer(); /*0x720b99*/
              *((unsigned char *)this + 17) = 1; /*0x720b9e*/
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
  gamemd::ThemeClass *v5; // ecx
  gamemd::Audio *v6; // ecx

  LOBYTE(result) = *((unsigned int *)((char *)&stru_A8EB00 + 144)); /*0x720ea0*/
  if ( *((unsigned int *)((char *)&stru_A8EB00 + 144)) ) /*0x720eaa*/
  {
    result = ((gamemd::Audio *)this)->IsSoundEnabled(); /*0x720eb0*/
    if ( result ) /*0x720eb7*/
    {
      LOBYTE(result) = *((unsigned int *)((char *)&stru_A8EB00 + 384)); /*0x720ebd*/
      if ( !((unsigned int *)&stru_A8EB00)[384] && *(unsigned int *)this != -1 ) /*0x720ecd*/
      {
        if ( !aP1 ) /*0x720ed9*/
          goto LABEL_14; /*0x720ed9*/
        v4 = (AudioSample *)*((unsigned int *)this + 11); /*0x720edb*/
        if ( !v4 ) /*0x720ee0*/
          goto LABEL_14; /*0x720ee0*/
        if ( *((unsigned char *)this + 17) && !((AudioSample *)(v4))->IsBuffering() ) /*0x720ee9*/
          ((gamemd::Audio *)(*((gamemd::Audio**)this + 11)))->Release(); /*0x720ef5*/
        if ( ((gamemd::Audio *)(*((gamemd::Audio**)this + 11)))->IsSoundPlaying() != 0 ) /*0x720f04*/
        {
          result = Debug::Log("Theme::Stop(%d) - Fading\n"); /*0x720f14 G57c1: IDA 0x720f14 push offset aThemeStopDFadi*/
          v5 = (gamemd::ThemeClass*)*((unsigned int *)this + 11); /*0x720f19*/
          if ( v5 ) /*0x720f21*/
            result = ((gamemd::ThemeClass *)(v5))->RequestBuffer(); /*0x720f23*/
          *((unsigned char *)this + 17) = 1; /*0x720f28*/
        }
        else
        {
LABEL_14: result = (int)(Debug::Log("Theme::Stop(%d)\n") /*G57c1: IDA 0x720f37 push offset aThemeStopD*/);
          v6 = (gamemd::Audio *)((int)((gamemd::Audio *)*((unsigned int *)this + 11)));
          if ( v6 ) /*0x720f44*/
            result = ((gamemd::Audio *)(v6))->Release(); /*0x720f46*/
        }
        *(unsigned int *)this = -1; /*0x720f4b*/
        *((unsigned int *)this + 1) = -1; /*0x720f51*/
        *((unsigned int *)this + 2) = -1; /*0x720f58*/
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

  v2 = (AudioSample *)*((unsigned int *)this + 11); /*0x720fd3*/
  if ( !v2 ) /*0x720fd8*/
    return 0; /*0x721002*/
  if ( *((unsigned char *)this + 17) ) /*0x720fda*/
  {
    if ( !((AudioSample *)(v2))->IsBuffering() ) /*0x720fe1*/
      ((gamemd::Audio *)(*((gamemd::Audio**)this + 11)))->Release(); /*0x720fed*/
  }
  return ((gamemd::Audio *)(*((gamemd::Audio**)this + 11)))->IsSoundPlaying() != 0; /*0x720ffe*/

}
} // namespace gamemd