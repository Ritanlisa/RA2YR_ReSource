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
int Voice::Stop()
{
  int result; // eax

  v1 = v1; /*0x4025b1*/
  (*(void (**)(void))(v1->u32_D4 + 40))(); /*0x4025b9*/
  if ( (v1->u32_A4 & 5) != 0 ) /*0x4025c3*/
    (*(void (__thiscall **)(int))(v1->u32_D4 + 16))(v1); /*0x4025cd*/
  (*(void (__thiscall **)(int))(v1->u32_D4 + 44))(v1); /*0x4025d8*/
  result = v1->q0BC; /*0x4025db*/
  if ( result ) /*0x4025e3*/
    result = result(v1); /*0x4025e7*/
  v1->u32_168 = 0; /*0x4025e9*/
  return result; /*0x4025f3*/
}
} // namespace gamemd
// 0x404140
namespace gamemd {
int Voice::DetachChannel()
{
  int v2; // ecx
  int result; // eax
  Voice *v4; // [esp+0h] [ebp-8h]

  v2 = this->q02C; /*0x404146*/
  if ( v2 && this == *(Voice **)(v2 + 192) ) /*0x404156*/
  {
    if ( (this->u32_18 & 2) != 0 ) /*0x40415c*/
      Voice::Stop(v4); /*0x40415e*/
    AudioStream::ReleaseChannel(*((AudioStream **)&this->u32_104)); /*0x404169*/
    *(_DWORD *)(this->q02C + 192) = 0; /*0x404174*/
    *(_DWORD *)(this->q02C + 188) = 0; /*0x404180*/
    *(_DWORD *)(this->q02C + 180) = 0; /*0x40418c*/
    *(_DWORD *)(this->q02C + 184) = 0; /*0x404198*/
    *(_DWORD *)(this->q02C + 144) = 0; /*0x4041a4*/
    *(_DWORD *)(this->q02C + 152) = 0; /*0x4041b0*/
    result = this->q02C; /*0x4041b6*/
    *(_DWORD *)(result + 156) = 0; /*0x4041bc*/
    this->q02C = 0; /*0x4041c2*/
  }
  return result; /*0x4041c8*/
}
} // namespace gamemd