// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Voice_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4025B0
namespace gamemd {  // G42.18 ns repair
int Voice::Stop(void *a1, void *a2)
{

  int v1; // ecx
  v1 = v1; /*0x4025b1*/
  (*(void (**)(void))(v1->u32_D4 + 40))(); /*0x4025b9*/
  if ( (v1->u32_A4 & 5) != 0 ) /*0x4025c3*/
    (*(void (**)(int))(v1->u32_D4 + 16))(v1); /*0x4025cd*/
  (*(void (**)(int))(v1->u32_D4 + 44))(v1); /*0x4025d8*/
  int result = v1->q0BC; // eax /*0x4025db*/
  if ( result ) /*0x4025e3*/
    result = result(v1); /*0x4025e7*/
  v1->u32_168 = 0; /*0x4025e9*/
  return result; /*0x4025f3*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x404140
namespace gamemd {
int Voice::DetachChannel()
{
  int result; // eax

  int v2 = this->u32_B0; // ecx /*0x404146*/
  if ( v2 && this == *(Voice **)(v2 + 192) ) /*0x404156*/
  {
    Voice *v4; // [esp+0h] [ebp-8h]
    if ( (this->u32_18 & 2) != 0 ) /*0x40415c*/
      ((Voice *)(v4))->Stop(); /*0x40415e*/
    AudioStream::ReleaseChannel(this->u32_B0); /*0x404169*/
    *(unsigned int *)(this->u32_B0 + 192) = 0; /*0x404174*/
    *(unsigned int *)(this->u32_B0 + 188) = 0; /*0x404180*/
    *(unsigned int *)(this->u32_B0 + 180) = 0; /*0x40418c*/
    *(unsigned int *)(this->u32_B0 + 184) = 0; /*0x404198*/
    *(unsigned int *)(this->u32_B0 + 144) = 0; /*0x4041a4*/
    *(unsigned int *)(this->u32_B0 + 152) = 0; /*0x4041b0*/
    result = this->u32_B0; /*0x4041b6*/
    result->u32_9C = 0; /*0x4041bc*/
    this->u32_B0 = 0; /*0x4041c2*/
  }
  return result; /*0x4041c8*/
}
} // namespace gamemd