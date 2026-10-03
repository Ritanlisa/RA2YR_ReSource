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
int Mixer::ReleaseChannel()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x406060)
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
    result = ((AudioQueue *)(unk_87E810))->GetNext(); /*0x4083df*/
    for ( i = (int *)result; result; i = (int *)result ) /*0x4083e8*/
    {
      RequestBufferMixer((gamemd::VolumeStruct *)((unsigned int *)(i[5] + 16)), 0x4000); /*0x4083f5*/
      result = ((AudioQueue *)(i))->GetNextAlt(); /*0x4083fc*/
    }
  }
  return result; /*0x408407*/

}
} // namespace gamemd