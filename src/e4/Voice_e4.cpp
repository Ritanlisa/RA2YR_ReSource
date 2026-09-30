// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Voice_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4025B0
namespace gamemd {
int Voice::Stop(__thiscall *__thiscall Voice_Stop())( int)
{

  int (*result)(int); // eax

  (*(void (**)(void))(*(unsigned int *)(this + 212) + 40))(); /*0x4025b9*/
  if ( (*(unsigned char *)(this + 164) & 5) != 0 ) /*0x4025c3*/
    (*(void (**)(int))(*(unsigned int *)(this + 212) + 16))(this); /*0x4025cd*/
  (*(void (**)(int))(*(unsigned int *)(this + 212) + 44))(this); /*0x4025d8*/
  result = *(int (**)(int))(this + 188); /*0x4025db*/
  if ( result ) /*0x4025e3*/
    result = (int (*)(int))result(this); /*0x4025e7*/
  *(unsigned int *)(this + 360) = 0; /*0x4025e9*/
  return result; /*0x4025f3*/

}
} // namespace gamemd
// 0x404140
namespace gamemd {
int Voice::DetachChannel()
{

  int v2; // ecx
  int result; // eax

  v2 = *((unsigned int *)this + 44); /*0x404146*/
  if ( v2 && this == *(unsigned int *)(v2 + 192) ) /*0x404156*/
  {
    if ( (*((unsigned char *)this + 24) & 2) != 0 ) /*0x40415c*/
      Voice::Stop(v2); /*0x40415e*/
    AudioStream::ReleaseChannel(*((unsigned int *)this + 44)); /*0x404169*/
    *(unsigned int *)(*((unsigned int *)this + 44) + 192) = 0; /*0x404174*/
    *(unsigned int *)(*((unsigned int *)this + 44) + 188) = 0; /*0x404180*/
    *(unsigned int *)(*((unsigned int *)this + 44) + 180) = 0; /*0x40418c*/
    *(unsigned int *)(*((unsigned int *)this + 44) + 184) = 0; /*0x404198*/
    *(unsigned int *)(*((unsigned int *)this + 44) + 144) = 0; /*0x4041a4*/
    *(unsigned int *)(*((unsigned int *)this + 44) + 152) = 0; /*0x4041b0*/
    result = *((unsigned int *)this + 44); /*0x4041b6*/
    *(unsigned int *)(result + 156) = 0; /*0x4041bc*/
    *((unsigned int *)this + 44) = 0; /*0x4041c2*/
  }
  return result; /*0x4041c8*/

}
} // namespace gamemd