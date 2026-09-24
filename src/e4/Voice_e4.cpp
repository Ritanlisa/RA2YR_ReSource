// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioStream_e4.hpp"

// 0x4025B0
int Voice::Stop(__thiscall *__thiscall Voice_Stop(int this))( int)
{
  int (__thiscall *result)(int); // eax

  (*(void (**)(void))(*(_DWORD *)(this + 212) + 40))(); /*0x4025b9*/
  if ( (*(_BYTE *)(this + 164) & 5) != 0 ) /*0x4025c3*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(this + 212) + 16))(this); /*0x4025cd*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 212) + 44))(this); /*0x4025d8*/
  result = *(int (__thiscall **)(int))(this + 188); /*0x4025db*/
  if ( result ) /*0x4025e3*/
    result = (int (__thiscall *)(int))result(this); /*0x4025e7*/
  *(_DWORD *)(this + 360) = 0; /*0x4025e9*/
  return result; /*0x4025f3*/
}
// 0x404140
int Voice::DetachChannel()
{
  int v2; // ecx
  int result; // eax

  v2 = *(_DWORD *)(this + 176); /*0x404146*/
  if ( v2 && this == *(_DWORD *)(v2 + 192) ) /*0x404156*/
  {
    if ( (*(_BYTE *)(this + 24) & 2) != 0 ) /*0x40415c*/
      Voice::Stop(v2); /*0x40415e*/
    AudioStream::ReleaseChannel(*(_DWORD *)(this + 176)); /*0x404169*/
    *(_DWORD *)(*(_DWORD *)(this + 176) + 192) = 0; /*0x404174*/
    *(_DWORD *)(*(_DWORD *)(this + 176) + 188) = 0; /*0x404180*/
    *(_DWORD *)(*(_DWORD *)(this + 176) + 180) = 0; /*0x40418c*/
    *(_DWORD *)(*(_DWORD *)(this + 176) + 184) = 0; /*0x404198*/
    *(_DWORD *)(*(_DWORD *)(this + 176) + 144) = 0; /*0x4041a4*/
    *(_DWORD *)(*(_DWORD *)(this + 176) + 152) = 0; /*0x4041b0*/
    result = *(_DWORD *)(this + 176); /*0x4041b6*/
    *(_DWORD *)(result + 156) = 0; /*0x4041bc*/
    *(_DWORD *)(this + 176) = 0; /*0x4041c2*/
  }
  return result; /*0x4041c8*/
}