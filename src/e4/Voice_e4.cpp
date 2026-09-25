// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Voice_e4.hpp"
#include "e4/e4_protos.h"

// 0x4025B0
namespace gamemd {
int Voice::Stop(__thiscall *__thiscall Voice_Stop(int this))( int)
{
  int (__thiscall *result)(int); // eax

  (*(void (**)(void))(this->u32_D4 + 40))(); /*0x4025b9*/
  if ( (this->u8_A4 & 5) != 0 ) /*0x4025c3*/
    (*(void (__thiscall **)(int))(this->u32_D4 + 16))(this); /*0x4025cd*/
  (*(void (__thiscall **)(int))(this->u32_D4 + 44))(this); /*0x4025d8*/
  result = *(int (__thiscall **)(int))(&this->u32_488); /*0x4025db*/
  if ( result ) /*0x4025e3*/
    result = (int (__thiscall *)(int))result(this); /*0x4025e7*/
  this->u32_168 = 0; /*0x4025e9*/
  return result; /*0x4025f3*/
}
} // namespace gamemd
// 0x404140
namespace gamemd {
int Voice::DetachChannel()
{
  int v2; // ecx
  int result; // eax

  v2 = this->q02C; /*0x404146*/
  if ( v2 && this == *(_DWORD *)(v2 + 192) ) /*0x404156*/
  {
    if ( (this->u32_18 & 2) != 0 ) /*0x40415c*/
      Voice::Stop(v2); /*0x40415e*/
    AudioStream::ReleaseChannel(this->q02C); /*0x404169*/
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