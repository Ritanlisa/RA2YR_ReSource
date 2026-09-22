// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"

// 0x406060
int Mixer::ReleaseChannel()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  result = g_AudioConfigState; /*0x406060*/
  if ( !g_AudioConfigState ) /*0x40606e*/
    goto LABEL_14; /*0x40606e*/
  if ( *(this + 3) != &DataGlobal_87E294 ) /*0x406077*/
    goto LABEL_14; /*0x406077*/
  int * v3 = *this; /*0x406079*/
  if ( !*this ) /*0x406079*/
    goto LABEL_14; /*0x40607d*/
  result = v3[9]; /*0x40607f*/
  if ( *(this + 2) == (int *)result && *(this + 1) == (int *)v3[78] ) /*0x406094*/
  {
    if ( (*(_BYTE *)(result + 16) & 1) == 0 || *(_DWORD *)(result + 76) ) /*0x40609c*/
      goto LABEL_14; /*0x40609f*/
    if ( (v3[6] & 0x20) == 0 ) /*0x4060a5*/
    {
      int v4 = v3[44]; /*0x4060a7*/
      if ( v4 && v3 == *(int **)(v4 + 192) ) /*0x4060b7*/
      {
        AudioFile::GetCallback(v3[44]); /*0x4060bb*/
        v3[6] |= 0x60u; /*0x4060c6*/
        result = AudioStream::Stop(v3[44]); /*0x4060cf*/
        *this = 0; /*0x4060d4*/
        *(this + 2) = 0; /*0x4060d6*/
        return result; /*0x4060dc*/
      }
      result = v3[6]; /*0x4060dd*/
      LOBYTE(result) = result | 0x60; /*0x4060e0*/
      v3[6] = result; /*0x4060e2*/
    }
  }
  *this = 0; /*0x4060e5*/
LABEL_14:
  *(this + 2) = 0; /*0x4060e7*/
  return result; /*0x4060d9*/
}
}

// 0x4083D0
int Mixer::RequestAllBuffers()
{
{
    int result;
    int *i;
    result = DataGlobal_87E81C;
    if ( DataGlobal_87E81C )
  {
    result = AudioQueue::GetNext(DataGlobal_87E810);
    for ( i = (int *)result; result; i = (int *)result )
    {
    RequestBufferMixer((unsigned int *)(i[5] + 16), 0x4000);
    result = AudioQueue::GetNextAlt(i);
    }
  }
    return result;
}
}
