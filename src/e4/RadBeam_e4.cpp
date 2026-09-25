// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RadBeam_e4.hpp"
#include "e4/e4_protos.h"

// 0x659110
namespace gamemd {
void * RadBeam::Create()
{
  int v2; // edi
  int v3; // eax

  if ( RA2_OPNEW(0xC8u) ) /*0x65911a*/
    v2 = RadBeam::InitState(this); /*0x65912e*/
  else
    v2 = 0; /*0x659132*/
  if ( dword_B04A70 < dword_B04A68 /*0x65916a*/
    || (byte_B04A6D || !dword_B04A68)
    && dword_B04A74 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(RadBeam_Array + 8))(
         &RadBeam_Array,
         dword_B04A68 + dword_B04A74,
         0) )
  {
    v3 = dword_B04A70++; /*0x659177*/
    *((_DWORD *)dword_B04A64 + v3) = v2; /*0x659186*/
  }
  *(double *)(v2 + 24) = (double)(this != (void *)1 ? 20 : 10);
  return v2; /*0x6591a1*/
}
} // namespace ra2

// 0x6593F0
namespace gamemd {
unsigned int * RadBeam::InitState(rc_ptr_base * aP1)
{
  this->nextArrayIndex = 0; /*0x6593fe*/
  *this = 0; /*0x659401*/
  this->q004 = 0; /*0x659403*/
  this->u32_8 = 0; /*0x659406*/
  this->range = 1; /*0x659409*/
  this->memberAtOffset12 = 0; /*0x65940c*/
  this->uniqueId = aP1; /*0x65940f*/
  this->referenceCount = 0; /*0x659412*/
  this->NeedsSaveOrLink = 0; /*0x659415*/
  this->u8_21 = 0; /*0x659418*/
  this->u8_22 = 0; /*0x65941b*/
  this->range = 0; /*0x65941e*/
  *(&this->q0040) = 0; /*0x659421*/
  *(&this->q0041) = 0; /*0x659424*/
  *(&this->q0042) = 0; /*0x659427*/
  *(&this->q0043) = 0; /*0x65942a*/
  *(&this->q0044) = 0; /*0x65942d*/
  *(&this->q0046) = 0; /*0x659430*/
  *(&this->q0048) = 0; /*0x659433*/
  *(&this->q0045) = 0; /*0x659436*/
  *(&this->q0047) = 0; /*0x659439*/
  *(&this->q0049) = 0; /*0x65943c*/
  *(&this->u32_80) = 0; /*0x65943f*/
  *(&this->u32_81) = 1; /*0x659442*/
  this->memberAtOffset88 = 0; /*0x659445*/
  *(&this->memberAtOffset121) = 0; /*0x659448*/
  this->color2 = 0; /*0x65944b*/
  this->u8_C1 = 0; /*0x659451*/
  this->u8_C2 = 0; /*0x659457*/
  return this; /*0x65945d*/
}
} // namespace ra2
