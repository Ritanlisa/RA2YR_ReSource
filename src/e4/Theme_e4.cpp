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

// 0x720B20
namespace gamemd {
int Theme::QueueSong(IUnknown * aP1)
{
  int IsSoundEnabled; // eax

  IDA_LOBYTE(IsSoundEnabled) = byte_A8EC74; /*0x720b20*/
  if ( byte_A8EC74 ) /*0x720b2a*/
  {
        IsSoundEnabled = Audio::IsSoundEnabled();
    if ( IsSoundEnabled ) /*0x720b33*/
    {
      IDA_LOBYTE(IsSoundEnabled) = byte_A8ED64; /*0x720b35*/
      if ( !byte_A8ED64 ) /*0x720b3c*/
      {
        IDA_LOBYTE(IsSoundEnabled) = aP1; /*0x720b3e*/
                *((unsigned int *)this + 32) = aP1;
                if ( aP1 != (IUnknown *)-1 && aP1 != (IUnknown *)-2 && aP1 != *(IUnknown **)((char *)this + 16) )
        {
          IDA_LOBYTE(IsSoundEnabled) = Debug::Log("Theme::QueueSong(%d)\n", aP1); /*0x720b5a*/
                    v4 = *((unsigned int *)this + 176);
          {
                        if ( *((unsigned char *)this + 68) && !AudioSample::IsBuffering(v4) )
                            Audio::Release(*(unsigned int **)((char *)this + 176));
                        LOBYTE(IsSoundEnabled) = Audio::IsSoundPlaying(*(unsigned int **)((char *)this + 176)) != 0;
            if ( (unsigned char)IsSoundEnabled == 1 ) /*0x720b90*/
            {
                            v5 = *(unsigned int **)((char *)this + 176);
                                LOBYTE(IsSoundEnabled) = ThemeClass::RequestBuffer(v5);
                            *((unsigned char *)this + 68) = 1;
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
        IsSoundEnabled = Audio::IsSoundEnabled();
    if ( IsSoundEnabled ) /*0x720eb7*/
    {
      IDA_LOBYTE(IsSoundEnabled) = byte_A8ED64; /*0x720ebd*/
      if ( !byte_A8ED64 && *this != -1 ) /*0x720ecd*/
      {
                v4 = *((unsigned int *)this + 44);
          goto LABEL_14; /*0x720edb*/
                if ( *((unsigned char *)this + 17) && !AudioSample::IsBuffering(v4) )
                    Audio::Release((unsigned int *)*((unsigned int *)this + 44));
                if ( Audio::IsSoundPlaying((unsigned int *)*((unsigned int *)this + 44)) != 0 )
        {
                    Debug::Log();
                    v5 = (unsigned int *)*((unsigned int *)this + 44);
                        LOBYTE(IsSoundEnabled) = ThemeClass::RequestBuffer(v5);
                    *((unsigned char *)this + 17) = 1;
        }
        else
        {
  LABEL_14:
                    Debug::Log();
                    v6 = (unsigned int *)*((unsigned int *)this + 44);
          if ( v4 ) /*0x720f44*/
            IDA_LOBYTE(IsSoundEnabled) = Audio::Release(v4); /*0x720f46*/
        }
        *(unsigned int *)this = -1; /*0x720f4b*/
                *((unsigned int *)this + 4) = -1;
                *((unsigned int *)this + 8) = -1;
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
  AudioSample *v2; // ecx

    if ( !*((unsigned int *)this + 176) )
  if ( !v2 ) /*0x720fd8*/
    return 0; /*0x721002*/
    if ( *((unsigned char *)this + 68) )
  {
    if ( !AudioSample::IsBuffering(v2) ) /*0x720fe1*/
            Audio::Release(*(unsigned int **)((char *)this + 176));
  }
// 0x408070
    return Audio::IsSoundPlaying(*(unsigned int **)((char *)this + 176)) != 0;
}
} // namespace gamemd