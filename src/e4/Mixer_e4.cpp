// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Mixer_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/MixFile_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/AudioFile_e4.hpp"

// 0x406060
namespace gamemd {
int Mixer::ReleaseChannel(void *a1)
{

  int result; // eax
  int Mixer_field_00; // edi
  int v4; // eax

  result = g_AudioConfigState; /*0x406060*/
  if ( !g_AudioConfigState ) /*0x40606e*/
    goto LABEL_14; /*0x40606e*/
  if ( *((int **)this + 3) != &dword_87E294 ) /*0x406077*/
    goto LABEL_14; /*0x406077*/
  Mixer_field_00 = this->Mixer_field_00; /*0x406079*/
  if ( !this->Mixer_field_00 ) /*0x406079*/
    goto LABEL_14; /*0x40607d*/
  result = *(unsigned int *)(Mixer_field_00 + 36); /*0x40607f*/
  if ( *((unsigned int *)this + 2) == result && *((unsigned int *)this + 1) == *(unsigned int *)(Mixer_field_00 + 312) ) /*0x406094*/
  {
    if ( (*(unsigned char *)(result + 16) & 1) == 0 || *(unsigned int *)(result + 76) ) /*0x40609c*/
      goto LABEL_14; /*0x40609f*/
    if ( (*(unsigned char *)(Mixer_field_00 + 24) & 0x20) == 0 ) /*0x4060a5*/
    {
      v4 = *(unsigned int *)(Mixer_field_00 + 176); /*0x4060a7*/
      if ( v4 && Mixer_field_00 == *(unsigned int *)(v4 + 192) ) /*0x4060b7*/
      {
        AudioFile::GetCallback(*(AudioFile **)(Mixer_field_00 + 176)); /*0x4060bb*/
        *(unsigned int *)(Mixer_field_00 + 24) |= 0x60u; /*0x4060c6*/
        result = AudioStream::Stop(*(AudioStream **)(Mixer_field_00 + 176)); /*0x4060cf*/
        this->Mixer_field_00 = 0; /*0x4060d4*/
        *((unsigned int *)this + 2) = 0; /*0x4060d6*/
        return result; /*0x4060dc*/
      }
      result = *(unsigned int *)(Mixer_field_00 + 24); /*0x4060dd*/
      LOBYTE(result) = result | 0x60; /*0x4060e0*/
      *(unsigned int *)(Mixer_field_00 + 24) = result; /*0x4060e2*/
    }
  }
  this->Mixer_field_00 = 0; /*0x4060e5*/
LABEL_14:
  *((unsigned int *)this + 2) = 0; /*0x4060e7*/
  return result; /*0x4060d9*/

}
} // namespace gamemd
// 0x4083D0
namespace gamemd {
int Mixer::RequestAllBuffers()
{

  int result; // eax
  int *i; // esi

  result = dword_87E81C; /*0x4083d0*/
  if ( dword_87E81C ) /*0x4083d8*/
  {
    result = AudioQueue::GetNext(unk_87E810); /*0x4083df*/
    for ( i = (int *)result; result; i = (int *)result ) /*0x4083e8*/
    {
      RequestBufferMixer((unsigned int *)(i[5] + 16), 0x4000); /*0x4083f5*/
      result = AudioQueue::GetNextAlt(i); /*0x4083fc*/
    }
  }
  return result; /*0x408407*/

}
} // namespace gamemd