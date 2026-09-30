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
int Voice::Stop(__thiscall *__thiscall Voice_Stop(int this))( int)
{
  int (__thiscall *result)(int); // eax

    (*(void (**)(void))(*((unsigned int *)this + 848) + 40))();
    if ( (*((unsigned char *)this + 656) & 5) != 0 )
        (*(void (**)(int))(*((unsigned int *)this + 848) + 16))(this);
    (*(void (**)(int))(*((unsigned int *)this + 848) + 44))(this);
    result = *(int (**)(int))((char *)this + 752);
  if ( result ) /*0x4025e3*/
    result = (int (__thiscall *)(int))result(this); /*0x4025e7*/
    *((unsigned int *)this + 1440) = 0;
  return result; /*0x4025f3*/
}
} // namespace gamemd
// 0x404140
namespace gamemd {
int Voice::DetachChannel()
{
  int v2; // ecx
  int result; // eax

    v2 = *((unsigned int *)this + 704);
  if ( v2 && this == *(unsigned int *)(v2 + 192) ) /*0x404156*/
  {
        if ( (*((unsigned char *)this + 96) & 2) != 0 )
      Voice::Stop(v2); /*0x40415e*/
        AudioStream::ReleaseChannel(*((unsigned int *)this + 704));
        *(unsigned int *)(*((unsigned int *)this + 704) + 192) = 0;
        *(unsigned int *)(*((unsigned int *)this + 704) + 188) = 0;
        *(unsigned int *)(*((unsigned int *)this + 704) + 180) = 0;
        *(unsigned int *)(*((unsigned int *)this + 704) + 184) = 0;
        *(unsigned int *)(*((unsigned int *)this + 704) + 144) = 0;
        *(unsigned int *)(*((unsigned int *)this + 704) + 152) = 0;
        result = *((unsigned int *)this + 704);
    *(unsigned int *)(result + 156) = 0; /*0x4041bc*/
        *((unsigned int *)this + 704) = 0;
  }
  return result; /*0x4041c8*/
}
} // namespace gamemd