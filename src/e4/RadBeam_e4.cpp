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

  unsigned int *v2; // eax
  double *inited; // edi
  int v4; // eax

  v2 = (unsigned int *)RA2_OPNEW(0xC8u); /*0x65911a*/
  if ( v2 ) /*0x659124*/
    inited = (double *)RadBeam::InitState(v2, this); /*0x65912e*/
  else
    inited = 0; /*0x659132*/
  if ( g_abs_B04A70 < g_abs_B04A68 /*0x65916a*/
    || (g_abs_B04A6D || !g_abs_B04A68)
    && unk_B04A74 > 0
    && ((uint8_t (*)(DynamicVector **, int, unsigned int))g_abs_B04A60->field_8)(
         &g_abs_B04A60,
         g_abs_B04A68 + unk_B04A74,
         0) )
  {
    v4 = g_abs_B04A70++; /*0x659177*/
    *(unsigned int *)&g_abs_B04A64->__pad_0[4 * v4] = inited; /*0x659186*/
  }
  inited[3] = (double)(this != (gamemd::RadBeam *)((rc_ptr_base *))1 ? 20 : 10);
  return inited; /*0x6591a1*/

}
} // namespace ra2

// 0x6593F0
namespace gamemd {
unsigned int * RadBeam::InitState(rc_ptr_base * aP1)
{

  *((unsigned int *)this + 6) = 0; /*0x6593fe*/
  *(unsigned int *)this = 0; /*0x659401*/
  *((unsigned int *)this + 1) = 0; /*0x659403*/
  *((unsigned char *)this + 8) = 0; /*0x659406*/
  *((unsigned char *)this + 9) = 1; /*0x659409*/
  *((unsigned int *)this + 3) = 0; /*0x65940c*/
  *((unsigned int *)this + 4) = aP1; /*0x65940f*/
  *((unsigned int *)this + 7) = 0; /*0x659412*/
  *((unsigned char *)this + 32) = 0; /*0x659415*/
  *((unsigned char *)this + 33) = 0; /*0x659418*/
  *((unsigned char *)this + 34) = 0; /*0x65941b*/
  *((unsigned int *)this + 9) = 0; /*0x65941e*/
  *((unsigned int *)this + 10) = 0; /*0x659421*/
  *((unsigned int *)this + 11) = 0; /*0x659424*/
  *((unsigned int *)this + 12) = 0; /*0x659427*/
  *((unsigned int *)this + 13) = 0; /*0x65942a*/
  *((unsigned int *)this + 14) = 0; /*0x65942d*/
  *((unsigned int *)this + 16) = 0; /*0x659430*/
  *((unsigned int *)this + 18) = 0; /*0x659433*/
  *((unsigned int *)this + 15) = 0; /*0x659436*/
  *((unsigned int *)this + 17) = 0; /*0x659439*/
  *((unsigned int *)this + 19) = 0; /*0x65943c*/
  *((unsigned int *)this + 20) = 0; /*0x65943f*/
  *((unsigned int *)this + 21) = 1; /*0x659442*/
  *((unsigned char *)this + 88) = 0; /*0x659445*/
  *((unsigned int *)this + 31) = 0; /*0x659448*/
  *((unsigned char *)this + 192) = 0; /*0x65944b*/
  *((unsigned char *)this + 193) = 0; /*0x659451*/
  *((unsigned char *)this + 194) = 0; /*0x659457*/
  return this; /*0x65945d*/

}
} // namespace ra2
