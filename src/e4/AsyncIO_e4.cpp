// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5BF450
char AsyncIO::Shutdown()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char AsyncIO_Shutdown()
{
  int v0; // esi
  _DWORD *i; // eax
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
    __3_YAXPAX_Z(i); /*0x5bf498*/
    AsyncIO_Instance = 0; /*0x5bf4a0*/
  }
  result = MEMORY[0xABF35C]; /*0x5bf4a6*/
  byte_B45B65 = 0; /*0x5bf4ab*/
  dword_B45B60 = 0; /*0x5bf4b3*/
  if ( MEMORY[0xABF35C] ) /*0x5bf4b9*/
  {
    AudioTimer::DecrementAll(); /*0x5bf4bb*/
    ProcessAudioTimer(); /*0x5bf4c0*/
    Mixer::RequestAllBuffers(); /*0x5bf4c5*/
    RequestBufferMixer((unsigned int *)g_MixerState, 0x4000); /*0x5bf4d5*/
    RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x4000); /*0x5bf4e5*/
    result = AudioMixer::Pump(); /*0x5bf4ea*/
    MEMORY[0xABF35C] = 0; /*0x5bf4ef*/
  }
  return result; /*0x5bf4f5*/
}
}

// 0x774BC0
BOOL AsyncIO::WaitCompletion()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall AsyncIO_WaitCompletion(int this)
{
  char v2; // al
  int v3; // esi
  signed int v4; // eax
  DWORD NumberOfBytesTransferred; // [esp+4h] [ebp-1Ch] BYREF
  DWORD Ticks; // [esp+8h] [ebp-18h]
  int v8; // [esp+Ch] [ebp-14h]
  int v9; // [esp+10h] [ebp-10h]
  int v10; // [esp+18h] [ebp-8h]

  Ticks = Timer::GetTicks(); /*0x774bcf*/
  v2 = *(_BYTE *)(this + 81); /*0x774bd3*/
  v9 = 0; /*0x774bd8*/
  if ( v2 ) /*0x774be0*/
  {
    Ticks = Timer::GetTicks(); /*0x774bf4*/
    v8 = v10; /*0x774c01*/
    v9 = 300; /*0x774c05*/
    do /*0x774c4d*/
    {
      if ( GetOverlappedResult(*(HANDLE *)(this + 92), (LPOVERLAPPED)(this + 60), &NumberOfBytesTransferred, 0) /*0x774c29*/
        || GetLastError() != 996 )
      {
        break; /*0x774c29*/
      }
      v3 = v9; /*0x774c2f*/
      if ( Ticks != -1 ) /*0x774c36*/
      {
        v4 = Timer::GetTicks() - Ticks; /*0x774c41*/
        if ( v4 >= v3 ) /*0x774c47*/
          break; /*0x774c47*/
        v3 -= v4; /*0x774c49*/
      }
    }
    while ( v3 ); /*0x774c4d*/
    *(_BYTE *)(this + 81) = 0; /*0x774c4f*/
  }
  return ResetEvent(*(HANDLE *)(this + 76)); /*0x774c60*/
}
}

// 0x5BF500
int AsyncIO::Read()
{
{
    int result;
    result = g_AsyncIOState;
    if ( g_AsyncIOState > 0 )
    return (*(int (__thiscall **)(int, void *))(**(int **)(AsyncIO_Instance) + 12))( *(int *)AsyncIO_Instance, this);
    return result;
}
}
