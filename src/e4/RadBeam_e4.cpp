// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x659110
namespace ra2 {
namespace game {
double * RadBeam::Create()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double *__thiscall RadBeam::Create(rc_ptr_base *this)
{
  _DWORD *v2; // eax
  double *inited; // edi
  int v4; // eax

  v2 = (_DWORD *)__2_YAPAXI_Z(0xC8u); /*0x65911a*/
  if ( v2 ) /*0x659124*/
    inited = (double *)RadBeam::InitState(v2, this); /*0x65912e*/
  else
    inited = 0; /*0x659132*/
  if ( MEMORY[0xB04A70] < MEMORY[0xB04A68] /*0x65916a*/
    || (MEMORY[0xB04A6D] || !MEMORY[0xB04A68])
    && unk_B04A74 > 0
    && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))MEMORY[0xB04A60]->field_8)(
         &MEMORY[0xB04A60],
         MEMORY[0xB04A68] + unk_B04A74,
         0) )
  {
    v4 = MEMORY[0xB04A70]++; /*0x659177*/
    *(_DWORD *)&MEMORY[0xB04A64]->__pad_0[4 * v4] = inited; /*0x659186*/
  }
  inited[3] = (double)(this != (rc_ptr_base *)1 ? 20 : 10);
  return inited; /*0x6591a1*/
}
}
} // namespace game
} // namespace ra2

// 0x6593F0
namespace ra2 {
namespace game {
unsigned int * RadBeam::InitState(rc_ptr_base * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall RadBeam::InitState(_DWORD *this, rc_ptr_base *aP1)
{
  *(this + 6) = 0; /*0x6593fe*/
  *this = 0; /*0x659401*/
  *(this + 1) = 0; /*0x659403*/
  *((_BYTE *)this + 8) = 0; /*0x659406*/
  *((_BYTE *)this + 9) = 1; /*0x659409*/
  *(this + 3) = 0; /*0x65940c*/
  *(this + 4) = aP1; /*0x65940f*/
  *(this + 7) = 0; /*0x659412*/
  *((_BYTE *)this + 32) = 0; /*0x659415*/
  *((_BYTE *)this + 33) = 0; /*0x659418*/
  *((_BYTE *)this + 34) = 0; /*0x65941b*/
  *(this + 9) = 0; /*0x65941e*/
  *(this + 10) = 0; /*0x659421*/
  *(this + 11) = 0; /*0x659424*/
  *(this + 12) = 0; /*0x659427*/
  *(this + 13) = 0; /*0x65942a*/
  *(this + 14) = 0; /*0x65942d*/
  *(this + 16) = 0; /*0x659430*/
  *(this + 18) = 0; /*0x659433*/
  *(this + 15) = 0; /*0x659436*/
  *(this + 17) = 0; /*0x659439*/
  *(this + 19) = 0; /*0x65943c*/
  *(this + 20) = 0; /*0x65943f*/
  *(this + 21) = 1; /*0x659442*/
  *((_BYTE *)this + 88) = 0; /*0x659445*/
  *(this + 31) = 0; /*0x659448*/
  *((_BYTE *)this + 192) = 0; /*0x65944b*/
  *((_BYTE *)this + 193) = 0; /*0x659451*/
  *((_BYTE *)this + 194) = 0; /*0x659457*/
  return this; /*0x65945d*/
}
}
} // namespace game
} // namespace ra2
