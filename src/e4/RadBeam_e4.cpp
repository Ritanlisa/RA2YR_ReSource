// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RadBeam_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x659110
namespace gamemd {
void * RadBeam::Create()
{
  RadBeam *v2; // eax
  double *inited; // edi
  int v4; // eax

  v2 = (RadBeam *)RA2_OPNEW(0xC8u); /*0x65911a*/
  if ( v2 ) /*0x659124*/
    inited = (double *)RadBeam::InitState(v2, (int)this); /*0x65912e*/
  else
    inited = 0; /*0x659132*/
  if ( dword_B04A70 < dword_B04A68 /*0x65916a*/
    || (byte_B04A6D || !dword_B04A68)
    && dword_B04A74 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(RadBeam_Array + 8))(
         &RadBeam_Array,
         dword_B04A68 + dword_B04A74,
         0) )
  {
    v4 = dword_B04A70++; /*0x659177*/
    *((_DWORD *)dword_B04A64 + v4) = inited; /*0x659186*/
  }
  inited[3] = (double)(this != (RadBeam *)1 ? 20 : 10);
  return (int)inited; /*0x6591a1*/
}
} // namespace ra2

// 0x6593F0
namespace gamemd {
unsigned int * RadBeam::InitState(rc_ptr_base * aP1)
{
  this->? = 0; /*0x6593fe*/
  this->AbstractClass = 0; /*0x659401*/
  this->? = 0; /*0x659403*/
  IDA_LOBYTE(this->?) = 0; /*0x659406*/
  IDA_BYTE1(this->?) = 1; /*0x659409*/
  this->? = 0; /*0x65940c*/
  this->? = aP1; /*0x65940f*/
  this->? = 0; /*0x659412*/
  IDA_LOBYTE(this->?) = 0; /*0x659415*/
  IDA_BYTE1(this->?) = 0; /*0x659418*/
  IDA_BYTE2(this->?) = 0; /*0x65941b*/
  this->range[0] = 0; /*0x65941e*/
  this->range[1] = 0; /*0x659421*/
  this->data[0] = 0; /*0x659424*/
  this->data[1] = 0; /*0x659427*/
  this->data[2] = 0; /*0x65942a*/
  this->data[3] = 0; /*0x65942d*/
  this->data[5] = 0; /*0x659430*/
  this->data[7] = 0; /*0x659433*/
  this->data[4] = 0; /*0x659436*/
  this->data[6] = 0; /*0x659439*/
  this->data[8] = 0; /*0x65943c*/
  this->data[9] = 0; /*0x65943f*/
  this->data[10] = 1; /*0x659442*/
  IDA_LOBYTE(this->data[11]) = 0; /*0x659445*/
  this->data[20] = 0; /*0x659448*/
  IDA_LOBYTE(this->data[37]) = 0; /*0x65944b*/
  IDA_BYTE1(this->data[37]) = 0; /*0x659451*/
  IDA_BYTE2(this->data[37]) = 0; /*0x659457*/
  return &this->AbstractClass; /*0x65945d*/
}
} // namespace ra2
