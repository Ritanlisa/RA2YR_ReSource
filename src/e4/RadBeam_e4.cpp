// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x659110
namespace ra2 {
namespace game {
void * RadBeam::Create()
{
  int v2; // edi
  int v3; // eax

  if ( __2_YAPAXI_Z(0xC8u) ) /*0x65911a*/
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
}

// 0x6593F0
namespace ra2 {
namespace game {
unsigned int * RadBeam::InitState(rc_ptr_base * aP1)
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
} // namespace ra2
}
