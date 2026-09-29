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
    && (*(uint8_t (**)(int *, int, unsigned int))(RadBeam_Array + 8))(
         &RadBeam_Array,
         dword_B04A68 + dword_B04A74,
         0) )
  {
    v4 = (unsigned int)(dword_B04A70++);
    *((unsigned int *)dword_B04A64 + v4) = inited; /*0x659186*/
  }
  inited[3] = (double)(this != (RadBeam *)1 ? 20 : 10);
  return (void *)((int)inited);
}
} // namespace ra2

// 0x6593F0
namespace gamemd {
unsigned int * RadBeam::InitState(rc_ptr_base * aP1)
{
  this->nextArrayIndex = (unsigned int)(0);
  this->AbstractClass = (unsigned int)(0);
  *(unsigned int *)&this->q004 = 0; /*0x659403*/
  IDA_LOBYTE(this->u32_8) = 0; /*0x659406*/
  IDA_BYTE1(this->u32_8) = 1; /*0x659409*/
  this->memberAtOffset12 = 0; /*0x65940c*/
  this->uniqueId = aP1; /*0x65940f*/
  this->referenceCount = 0; /*0x659412*/
  IDA_LOBYTE(this->NeedsSaveOrLink) = 0; /*0x659415*/
  this->u8_21 = 0; /*0x659418*/
  this->u8_22 = 0; /*0x65941b*/
  this-((unsigned int *)(>range))[0] = 0; /*0x65941e*/
  this-((unsigned int *)(>range))[1] = 0; /*0x659421*/
  this-((unsigned int *)(>data))[0] = 0; /*0x659424*/
  this-((unsigned int *)(>data))[1] = 0; /*0x659427*/
  this-((unsigned int *)(>data))[2] = 0; /*0x65942a*/
  this-((unsigned int *)(>data))[3] = 0; /*0x65942d*/
  this-((unsigned int *)(>data))[5] = 0; /*0x659430*/
  this-((unsigned int *)(>data))[7] = 0; /*0x659433*/
  this-((unsigned int *)(>data))[4] = 0; /*0x659436*/
  this-((unsigned int *)(>data))[6] = 0; /*0x659439*/
  this-((unsigned int *)(>data))[8] = 0; /*0x65943c*/
  this-((unsigned int *)(>data))[9] = 0; /*0x65943f*/
  this-((unsigned int *)(>data))[10] = 1; /*0x659442*/
  IDA_LOBYTE(this->data[11]) = 0; /*0x659445*/
  this-((unsigned int *)(>data))[20] = 0; /*0x659448*/
  IDA_LOBYTE(this->data[37]) = 0; /*0x65944b*/
  IDA_BYTE1(this->data[37]) = 0; /*0x659451*/
  IDA_BYTE2(this->data[37]) = 0; /*0x659457*/
  return &this->AbstractClass; /*0x65945d*/
}
} // namespace ra2
