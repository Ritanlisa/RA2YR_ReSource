// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x48B2A0
int Struct::ClearAllMemberFlags()
{
{
  int result; // eax

  CommBufferClass *v1 = *(_DWORD *)&this->__pad_0[4]; /*0x48b2a0*/
  int v2 = 0; /*0x48b2a7*/
  *(_DWORD *)&this->__pad_28[4] = 0; /*0x48b2ac*/
  this->q03C = 0; /*0x48b2af*/
  *(_DWORD *)this->__pad_14 = 0; /*0x48b2b2*/
  *(_DWORD *)&this->__pad_14[4] = 0; /*0x48b2b5*/
  *(_DWORD *)&this->__pad_14[8] = 0; /*0x48b2b8*/
  *(_DWORD *)&this->__pad_14[12] = 0; /*0x48b2bb*/
  *(_DWORD *)this->__pad_28 = 0; /*0x48b2be*/
  this->q038 = 0; /*0x48b2c1*/
  if ( v1 > 0 ) /*0x48b2c4*/
  {
    int v3 = 0; /*0x48b2c6*/
    do /*0x48b327*/
    {
      *(_DWORD *)(v3 + this->field_24) &= ~1u; /*0x48b2d2*/
      *(_DWORD *)(v3 + this->field_24) &= ~2u; /*0x48b2de*/
      _DWORD * v4 = (_DWORD *)(v3 + this->field_24); /*0x48b2e3*/
      v3 += 36; /*0x48b2e5*/
      ++v2; /*0x48b2ed*/
      *v4 &= ~4u; /*0x48b2ee*/
      *(_DWORD *)(v3 + this->field_24 - 32) = 0; /*0x48b2f3*/
      *(_DWORD *)(v3 + this->field_24 - 28) = 0; /*0x48b2fa*/
      *(_DWORD *)(v3 + this->field_24 - 24) = 0; /*0x48b301*/
      *(_DWORD *)(v3 + this->field_24 - 20) = 0; /*0x48b308*/
      *(_DWORD *)(v3 + this->field_24 - 12) = 0; /*0x48b30f*/
      *(_WORD *)(v3 + this->field_24 - 4) = 0; /*0x48b316*/
      *(_DWORD *)(*(_DWORD *)&this->__pad_28[8] + 4 * v2 - 4) = 0; /*0x48b31e*/
    }
    while ( v2 < *(_DWORD *)&this->__pad_0[4] ); /*0x48b327*/
  }
  result = this->field_8; /*0x48b329*/
  int v6 = 0; /*0x48b32c*/
  if ( result > 0 ) /*0x48b330*/
  {
    result = 0; /*0x48b332*/
    do /*0x48b37d*/
    {
      *(_DWORD *)(result + this->field_34) &= ~1u; /*0x48b33e*/
      *(_DWORD *)(result + this->field_34) &= ~2u; /*0x48b34a*/
      _DWORD * v7 = (_DWORD *)(result + this->field_34); /*0x48b34f*/
      result += 24; /*0x48b351*/
      ++v6; /*0x48b359*/
      *v7 &= ~4u; /*0x48b35a*/
      *(_DWORD *)(this->field_34 + result - 20) = 0; /*0x48b35f*/
      *(_DWORD *)(this->field_34 + result - 16) = 0; /*0x48b366*/
      *(_DWORD *)(this->field_34 + result - 8) = 0; /*0x48b36d*/
      *(_DWORD *)(this->q010 + 4 * v6 - 4) = 0; /*0x48b374*/
    }
    while ( v6 < this->field_8 ); /*0x48b37d*/
  }
  this->q044 = 0; /*0x48b381*/
  this->q048 = 0; /*0x48b384*/
  this->q04C = 0; /*0x48b387*/
  this->q054 = 0; /*0x48b38a*/
  return result; /*0x48b37f*/
}

// 0x48BF10
int Struct::ZeroInitAndSetup()
{
{
  this->q034 = 0; /*0x48bf12*/
  this->q038 = 0; /*0x48bf15*/
  this->q03C = 0; /*0x48bf18*/
  this->q040 = 0; /*0x48bf1b*/
  this->q008 = 0; /*0x48bf1e*/
  this->q00C = 0; /*0x48bf21*/
  this->q010 = 0; /*0x48bf24*/
  this->q014 = 0; /*0x48bf27*/
  this->q018 = 0; /*0x48bf2a*/
  this->q044 = -1; /*0x48bf30*/
  this->q048 = -1; /*0x48bf33*/
  return Struct::ClearAllMemberFlags(this->q004);
}

// 0x4B9BD0
unsigned char * Struct::Zero3()
{
{
  *this = 0; /*0x4b9bd4*/
  this->q004 = 0; /*0x4b9bd6*/
  this->q008 = 0; /*0x4b9bd9*/
  return this; /*0x4b9bdc*/
}

// 0x4085A0
int Struct::ZeroInit32()
{
{
    memset(this, 0, 0x20u);
    return 0;
}
}

// 0x53F4E0
namespace gamemd {
int Struct::ZeroInitAndSetup_0()
{
// attributes: thunk
{
  return Struct::ZeroInitAndSetup(this);
}
}
// 0x5EF280
namespace gamemd {
int Struct::ZeroInitAndSetup_0_0()
{
// attributes: thunk
{
  return Struct::ZeroInitAndSetup(this);
}
}
// 0x5F75E0
unsigned int * Struct::InitTriple256(unsigned int * a1)
{
{
    int v1;
    v1 = 2 * DataGlobal_AC1474;
    *a1 = 256;
    *((int*)(a1) + 1) = 256;
    *((int*)(a1) + 2) = v1;
    return a1;
}
}
