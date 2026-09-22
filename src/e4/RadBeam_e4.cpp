// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x659110
namespace ra2 {
namespace game {
void * RadBeam::Create()
{
{
  double *inited; // edi

  _DWORD * v2 = (_DWORD *)__2_YAPAXI_Z(0xC8u); /*0x65911a*/
  if ( v2 ) /*0x659124*/
    inited = (double *)RadBeam::InitState(v2, this); /*0x65912e*/
  else
    inited = 0; /*0x659132*/
  if ( DataGlobal_B04A70 < DataGlobal_B04A68 /*0x65916a*/
    || (DataGlobal_B04A6D || !DataGlobal_B04A68)
    && unk_B04A74 > 0
    && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))RadBeam_Array->field_8)(
         &RadBeam_Array,
         DataGlobal_B04A68 + unk_B04A74,
         0) )
  {
    int v4 = DataGlobal_B04A70++; /*0x659177*/
    *(_DWORD *)&DataGlobal_B04A64->__pad_0[4 * v4] = inited; /*0x659186*/
  }
  inited[3] = (double)(this != (rc_ptr_base *)1 ? 20 : 10);
  return inited; /*0x6591a1*/
}
} // namespace game
} // namespace ra2
}

// 0x6593F0
namespace ra2 {
namespace game {
unsigned int * RadBeam::InitState(rc_ptr_base * aP1)
{
{
  this->nextArrayIndex = 0; /*0x6593fe*/
  *this = 0; /*0x659401*/
  this->q004 = 0; /*0x659403*/
  this->NeedsSaveOrLink = 0; /*0x659406*/
  this->range = 1; /*0x659409*/
  this->memberAtOffset12 = 0; /*0x65940c*/
  this->uniqueId = aP1; /*0x65940f*/
  this->referenceCount = 0; /*0x659412*/
  this->NeedsSaveOrLink = 0; /*0x659415*/
  this->u8_21 = 0; /*0x659418*/
  this->u8_22 = 0; /*0x65941b*/
  this->range = 0; /*0x65941e*/
  this->q00A = 0; /*0x659421*/
  this->data = 0; /*0x659424*/
  this->memberAtOffset48 = 0; /*0x659427*/
  this->q00D = 0; /*0x65942a*/
  this->q00E = 0; /*0x65942d*/
  this->memberAtOffset64 = 0; /*0x659430*/
  this->pad_72 = 0; /*0x659433*/
  this->memberAtOffset60 = 0; /*0x659436*/
  this->memberAtOffset68 = 0; /*0x659439*/
  this->q013 = 0; /*0x65943c*/
  this->abstractFlags = 0; /*0x65943f*/
  this->memberAtOffset84 = 1; /*0x659442*/
  this->memberAtOffset88 = 0; /*0x659445*/
  this->q01F = 0; /*0x659448*/
  this->color2 = 0; /*0x65944b*/
  this->u8_C1 = 0; /*0x659451*/
  this->u8_C2 = 0; /*0x659457*/
  return this; /*0x65945d*/
}
} // namespace game
} // namespace ra2
}
