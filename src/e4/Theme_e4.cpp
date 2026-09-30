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

// 0x720B20
namespace gamemd {
int Theme::QueueSong(IUnknown * aP1)
{

  int IsSoundEnabled; // eax
  int v4; // ecx
  unsigned int *v5; // ecx

  IDA_LOBYTE(IsSoundEnabled) = g_abs_A8D63C; /*0x720b20*/
  if ( g_abs_A8D63C ) /*0x720b2a*/
  {
    IsSoundEnabled = Audio::IsSoundEnabled(); /*0x720b2c*/
    if ( IsSoundEnabled ) /*0x720b33*/
    {
      IDA_LOBYTE(IsSoundEnabled) = g_abs_A8D63C; /*0x720b35*/
      if ( !g_abs_A8D63C ) /*0x720b3c*/
      {
        IDA_LOBYTE(IsSoundEnabled) = (unsigned char)aP1; /*0x720b3e*/
        *((unsigned int *)this + 2) = aP1; /*0x720b45*/
        if ( aP1 != (IUnknown *)-1 && aP1 != (IUnknown *)-2 && aP1 != *(IUnknown **)((char *)this + 4) ) /*0x720b52*/
        {
          this->Debug::Log(); /*0x720b5a*/
          v4 = *((unsigned int *)this + 11); /*0x720b5f*/
          if ( v4 ) /*0x720b67*/
          {
            if ( *((unsigned char *)this + 17) && !AudioSample::IsBuffering(v4) ) /*0x720b70*/
              Audio::Release(*(unsigned int **)((char *)this + 44)); /*0x720b7c*/
            IDA_LOBYTE(IsSoundEnabled) = Audio::IsSoundPlaying(*(unsigned int **)((char *)this + 44)) != 0; /*0x720b8b*/
            if ( (unsigned char)IsSoundEnabled == 1 ) /*0x720b90*/
            {
              v5 = *(unsigned int **)((char *)this + 44); /*0x720b92*/
              if ( v5 ) /*0x720b97*/
                IDA_LOBYTE(IsSoundEnabled) = ((ThemeClass *)(v5))->RequestBuffer(); /*0x720b99*/
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
int Theme::Stop(ObjectClass * aP1)
{

  int IsSoundEnabled; // eax
  int v4; // ecx
  unsigned int *v5; // ecx
  unsigned int *v6; // ecx

  IDA_LOBYTE(IsSoundEnabled) = g_abs_A8D63C; /*0x720ea0*/
  if ( g_abs_A8D63C ) /*0x720eaa*/
  {
    IsSoundEnabled = Audio::IsSoundEnabled(); /*0x720eb0*/
    if ( IsSoundEnabled ) /*0x720eb7*/
    {
      IDA_LOBYTE(IsSoundEnabled) = g_abs_A8D63C; /*0x720ebd*/
      if ( !g_abs_A8D63C && *this != -1 ) /*0x720ecd*/
      {
        if ( !(unsigned char)aP1 ) /*0x720ed9*/
          goto LABEL_14; /*0x720ed9*/
        v4 = *((unsigned int *)this + 11); /*0x720edb*/
        if ( !v4 ) /*0x720ee0*/
          goto LABEL_14; /*0x720ee0*/
        if ( *((unsigned char *)this + 17) && !AudioSample::IsBuffering(v4) ) /*0x720ee9*/
          Audio::Release((unsigned int *)*((unsigned int *)this + 11)); /*0x720ef5*/
        if ( Audio::IsSoundPlaying((unsigned int *)*((unsigned int *)this + 11)) != 0 ) /*0x720f04*/
        {
          this->Debug::Log(); /*0x720f14*/
          v5 = (unsigned int *)*((unsigned int *)this + 11); /*0x720f19*/
          if ( v5 ) /*0x720f21*/
            IDA_LOBYTE(IsSoundEnabled) = ((ThemeClass *)(v5))->RequestBuffer(); /*0x720f23*/
          *((unsigned char *)this + 17) = 1; /*0x720f28*/
        }
        else
        {
LABEL_14:
          this->Debug::Log(); /*0x720f37*/
          v6 = (unsigned int *)*((unsigned int *)this + 11); /*0x720f3c*/
          if ( v6 ) /*0x720f44*/
            Audio::Release(v6); /*0x720f46*/
        }
        *(_DWORD *)this = -1; /*0x720f4b*/
        *((unsigned int *)this + 1) = -1; /*0x720f51*/
        *((unsigned int *)this + 2) = -1; /*0x720f58*/
      }
    }
  }
  return IsSoundEnabled; /*0x720f5f*/

}
} // namespace gamemd
// 0x720FD0
namespace gamemd {
void Theme::IsPlaying()
{

  if ( !*((unsigned int *)this + 11) ) /*0x720fd3*/
    return 0; /*0x721002*/
  if ( *((unsigned char *)this + 17) ) /*0x720fda*/
  {
    if ( !AudioSample::IsBuffering() ) /*0x720fe1*/
      Audio::Release(*(unsigned int **)((char *)this + 44)); /*0x720fed*/
  }
  return Audio::IsSoundPlaying(*(unsigned int **)((char *)this + 44)) != 0; /*0x720ffe*/

}
} // namespace gamemd