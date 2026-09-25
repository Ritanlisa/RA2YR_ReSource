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

// 0x5BF450
namespace gamemd {
AbstractClass * * AsyncIO::Shutdown()
{
  int v0; // esi
  unsigned int i;
  void (__thiscall ***v2)(_DWORD, int); // ecx
  char result; // al

  v0 = 0; /*0x5bf459*/
  for ( i = AsyncIO_Instance; v0 < g_AsyncIOState; ++v0 ) /*0x5bf462*/
  {
    v2 = (void (__thiscall ***)(_DWORD, int))i[v0]; /*0x5bf464*/
    if ( v2 ) /*0x5bf469*/
    {
      (**v2)(v2, 1); /*0x5bf473*/
      i = AsyncIO_Instance; /*0x5bf475*/
    }
  }
  g_AsyncIOState = 0; /*0x5bf487*/
  if ( i && byte_B45B65 ) /*0x5bf495*/
  {
    RA2_OPDEL(i); /*0x5bf498*/
    AsyncIO_Instance = 0; /*0x5bf4a0*/
  }
  result = byte_ABF35C; /*0x5bf4a6*/
  byte_B45B65 = 0; /*0x5bf4ab*/
  dword_B45B60 = 0; /*0x5bf4b3*/
  if ( byte_ABF35C ) /*0x5bf4b9*/
  {
    AudioTimer::DecrementAll(); /*0x5bf4bb*/
    ProcessAudioTimer(); /*0x5bf4c0*/
    Mixer::RequestAllBuffers(); /*0x5bf4c5*/
    RequestBufferMixer((unsigned int *)g_MixerState, 0x4000); /*0x5bf4d5*/
    RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x4000); /*0x5bf4e5*/
    result = AudioMixer::Pump(); /*0x5bf4ea*/
    byte_ABF35C = 0; /*0x5bf4ef*/
  }
  return result; /*0x5bf4f5*/
}
} // namespace gamemd
// 0x774BC0
namespace gamemd {
int AsyncIO::WaitCompletion()
{
  char v2; // al
  signed int v4; // eax
  DWORD NumberOfBytesTransferred; // [esp+4h] [ebp-1Ch] BYREF
  DWORD Ticks; // [esp+8h] [ebp-18h]
  int v9; // [esp+10h] [ebp-10h]
  int v10; // [esp+18h] [ebp-8h]

  Ticks = Timer::GetTicks(); /*0x774bcf*/
  v2 = this->u8_51; /*0x774bd3*/
  v9 = 0; /*0x774bd8*/
  if ( v2 ) /*0x774be0*/
  {
    Ticks = Timer::GetTicks(); /*0x774bf4*/
    v10 = v10; /*0x774c01*/
    v9 = 300; /*0x774c05*/
    do /*0x774c4d*/
    {
      if ( GetOverlappedResult(*(HANDLE *)(&this->q0242), (LPOVERLAPPED)(&this->u32_180), &NumberOfBytesTransferred, 0) /*0x774c29*/
        || GetLastError() != 996 )
      {
        break; /*0x774c29*/
      }
      v9 = v9; /*0x774c2f*/
      if ( Ticks != -1 ) /*0x774c36*/
      {
        v4 = Timer::GetTicks() - Ticks; /*0x774c41*/
        if ( v4 >= v9 ) /*0x774c47*/
          break; /*0x774c47*/
        v9 -= v4; /*0x774c49*/
      }
    }
    while ( v9 ); /*0x774c4d*/
    this->u8_51 = 0; /*0x774c4f*/
  }
  return ResetEvent(*(HANDLE *)(&this->u32_1C6)); /*0x774c60*/
}
} // namespace gamemd
// 0x5BF500
namespace gamemd {
int AsyncIO::Read()
{
  int result; // eax

  result = g_AsyncIOState; /*0x5bf500*/
  if ( g_AsyncIOState > 0 ) /*0x5bf507*/
    return (*(int (__thiscall **)(_DWORD, void *))(**(_DWORD **)AsyncIO_Instance + 12))( /*0x5bf515*/
             *(_DWORD *)AsyncIO_Instance,
             this);
  return result; /*0x5bf518*/
}
} // namespace gamemd