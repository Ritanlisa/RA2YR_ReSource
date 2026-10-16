// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/AsyncIO_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/AudioClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/ArtConfig_e4.hpp"
#include "e4/classes/AudioMixer_e4.hpp"
#include "e4/classes/Mixer_e4.hpp"
#include "e4/classes/AudioTimer_e4.hpp"

// 0x5BF450
namespace gamemd {  // G42.18 ns repair
char AsyncIO::Shutdown(void *a1)
{

  void (***v3)(unsigned int, int); // ecx
  char result; // al

  int v1 = 0; // esi /*0x5bf459*/
  unsigned int *i; // eax
  for ( i = AsyncIO_Instance; v1 < g_AsyncIOState; ++v1 ) /*0x5bf462*/
  {
    v3 = (void (***)(unsigned int, int))i[v1]; /*0x5bf464*/
    if ( v3 ) /*0x5bf469*/
    {
      (**v3)(v3, 1); /*0x5bf473*/
      i = (unsigned int *)(AsyncIO_Instance); /*0x5bf475*/
    }
  }
  g_AsyncIOState = 0; /*0x5bf487*/
  if ( i && byte_B45B65 ) /*0x5bf495*/
  {
    __3_YAXPAX_Z(i); /*0x5bf498*/
    AsyncIO_Instance = 0; /*0x5bf4a0*/
  }
  result = g_MissionQueueFrame.localVariables[566]; /*0x5bf4a6*/
  byte_B45B65 = 0; /*0x5bf4ab*/
  dword_B45B60 = 0; /*0x5bf4b3*/
  if ( LOBYTE(g_MissionQueueFrame.localVariables[566]) ) /*0x5bf4b9*/
  {
    AudioTimer::DecrementAll(); /*0x5bf4bb*/
    ProcessAudioTimer(); /*0x5bf4c0*/
    Mixer::RequestAllBuffers(); /*0x5bf4c5*/
    RequestBufferMixer((unsigned int *)g_MixerState, 0x4000); /*0x5bf4d5*/
    RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x4000); /*0x5bf4e5*/
    result = AudioMixer::Pump(); /*0x5bf4ea*/
    LOBYTE(g_MissionQueueFrame.localVariables[566]) = 0; /*0x5bf4ef*/
  }
  return result; /*0x5bf4f5*/

}
} // namespace gamemd
// 0x774BC0
namespace gamemd {
int AsyncIO::WaitCompletion(void *a1)
{

  int Ticks; // [esp+8h] [ebp-18h]
  Ticks = TimerGetTicks(); /*0x774bcf*/
  char v2 = this->u8_51; // al /*0x774bd3*/
  int v9; // [esp+10h] [ebp-10h]
  v9 = 0; /*0x774bd8*/
  if ( v2 ) /*0x774be0*/
  {
    Ticks = TimerGetTicks(); /*0x774bf4*/
    int v10; // [esp+18h] [ebp-8h]
    v10 = v10; /*0x774c01*/
    v9 = 300; /*0x774c05*/
    do /*0x774c4d*/
    {
      DWORD NumberOfBytesTransferred; // [esp+4h] [ebp-1Ch] BYREF
      if ( GetOverlappedResult(*(unsigned int *)this->q146 + 42), (LPOVERLAPPED)this->q092 + 94), &NumberOfBytesTransferred, 0) /*0x774c29*/
        || GetLastError() != 996 )
      {
        break; /*0x774c29*/
      }
      v9 = v9; /*0x774c2f*/
      if ( Ticks != -1 ) /*0x774c36*/
      {
        int v4; // eax
        v4 = TimerGetTicks() - Ticks; /*0x774c41*/
        if ( v4 >= v9 ) /*0x774c47*/
          break; /*0x774c47*/
        v9 -= v4; /*0x774c49*/
      }
    }
    while ( v9 ); /*0x774c4d*/
    this->u8_51 = 0; /*0x774c4f*/
  }
  return ResetEvent(*(unsigned int *)this->q129 + 7)); /*0x774c60*/
}
} // namespace gamemd
// 0x5BF500
namespace gamemd {
int AsyncIO::Read(void *a1, void *a2, void *a3)
{

  int result = g_AsyncIOState; // eax /*0x5bf500*/
  if ( g_AsyncIOState > 0 ) /*0x5bf507*/
    return (*(int (**)(unsigned int, AsyncIO *))(**(unsigned int **)AsyncIO_Instance + 12))( /*0x5bf515*/
             *(unsigned int *)AsyncIO_Instance,
             this);
  return result; /*0x5bf518*/
}
} // namespace gamemd