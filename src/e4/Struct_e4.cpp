// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Struct_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/SuperClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"

// 0x48B2A0
namespace gamemd {
void Struct::ClearAllMemberFlags()
{

  int v1; // eax
  int v2; // esi
  int v3; // eax
  unsigned int *v4; // edi
  int result; // eax
  int v6; // esi
  unsigned int *v7; // edi

  v1 = *(unsigned int *)&this->__pad_0[4]; /*0x48b2a0*/
  v2 = 0; /*0x48b2a7*/
  *(unsigned int *)&this->__pad_28[4] = 0; /*0x48b2ac*/
  *((unsigned int *)this + 15) = 0; /*0x48b2af*/
  *(unsigned int *)this->__pad_14 = 0; /*0x48b2b2*/
  *(unsigned int *)&this->__pad_14[4] = 0; /*0x48b2b5*/
  *(unsigned int *)&this->__pad_14[8] = 0; /*0x48b2b8*/
  *(unsigned int *)&this->__pad_14[12] = 0; /*0x48b2bb*/
  *(unsigned int *)this->__pad_28 = 0; /*0x48b2be*/
  *((unsigned int *)this + 14) = 0; /*0x48b2c1*/
  if ( v1 > 0 ) /*0x48b2c4*/
  {
    v3 = 0; /*0x48b2c6*/
    do /*0x48b327*/
    {
      *(unsigned int *)(v3 + this->field_24) &= ~1u; /*0x48b2d2*/
      *(unsigned int *)(v3 + this->field_24) &= ~2u; /*0x48b2de*/
      v4 = (unsigned int *)(v3 + this->field_24); /*0x48b2e3*/
      v3 += 36; /*0x48b2e5*/
      ++v2; /*0x48b2ed*/
      *v4 &= ~4u; /*0x48b2ee*/
      *(unsigned int *)(v3 + this->field_24 - 32) = 0; /*0x48b2f3*/
      *(unsigned int *)(v3 + this->field_24 - 28) = 0; /*0x48b2fa*/
      *(unsigned int *)(v3 + this->field_24 - 24) = 0; /*0x48b301*/
      *(unsigned int *)(v3 + this->field_24 - 20) = 0; /*0x48b308*/
      *(unsigned int *)(v3 + this->field_24 - 12) = 0; /*0x48b30f*/
      *(unsigned short *)(v3 + this->field_24 - 4) = 0; /*0x48b316*/
      *(unsigned int *)(*(unsigned int *)&this->__pad_28[8] + 4 * v2 - 4) = 0; /*0x48b31e*/
    }
    while ( v2 < *(unsigned int *)&this->__pad_0[4] ); /*0x48b327*/
  }
  result = this->field_8; /*0x48b329*/
  v6 = 0; /*0x48b32c*/
  if ( result > 0 ) /*0x48b330*/
  {
    result = 0; /*0x48b332*/
    do /*0x48b37d*/
    {
      *(unsigned int *)(result + this->field_34) &= ~1u; /*0x48b33e*/
      *(unsigned int *)(result + this->field_34) &= ~2u; /*0x48b34a*/
      v7 = (unsigned int *)(result + this->field_34); /*0x48b34f*/
      result += 24; /*0x48b351*/
      ++v6; /*0x48b359*/
      *v7 &= ~4u; /*0x48b35a*/
      *(unsigned int *)(this->field_34 + result - 20) = 0; /*0x48b35f*/
      *(unsigned int *)(this->field_34 + result - 16) = 0; /*0x48b366*/
      *(unsigned int *)(this->field_34 + result - 8) = 0; /*0x48b36d*/
      *(unsigned int *)(*((unsigned int *)this + 16) + 4 * v6 - 4) = 0; /*0x48b374*/
    }
    while ( v6 < this->field_8 ); /*0x48b37d*/
  }
  *((unsigned int *)this + 17) = 0; /*0x48b381*/
  *((unsigned int *)this + 18) = 0; /*0x48b384*/
  *((unsigned int *)this + 19) = 0; /*0x48b387*/
  *((unsigned int *)this + 21) = 0; /*0x48b38a*/
  return result; /*0x48b37f*/

}
} // namespace gamemd
// 0x48BF10
namespace gamemd {
int Struct::ZeroInitAndSetup()
{

  *((unsigned int *)this + 13) = 0; /*0x48bf12*/
  *((unsigned int *)this + 14) = 0; /*0x48bf15*/
  *((unsigned int *)this + 15) = 0; /*0x48bf18*/
  *((unsigned int *)this + 16) = 0; /*0x48bf1b*/
  *((unsigned int *)this + 2) = 0; /*0x48bf1e*/
  *((unsigned int *)this + 3) = 0; /*0x48bf21*/
  *((unsigned int *)this + 4) = 0; /*0x48bf24*/
  *((unsigned int *)this + 5) = 0; /*0x48bf27*/
  *((unsigned int *)this + 6) = 0; /*0x48bf2a*/
  *((unsigned int *)this + 17) = -1; /*0x48bf30*/
  *((unsigned int *)this + 18) = -1; /*0x48bf33*/
  return Struct::ClearAllMemberFlags(*((unsigned int *)this + 1));

}
} // namespace gamemd
// 0x4B9BD0
namespace gamemd {
unsigned char * Struct::Zero3()
{

  *this = 0; /*0x4b9bd4*/
  *((unsigned char *)this + 1) = 0; /*0x4b9bd6*/
  *((unsigned char *)this + 2) = 0; /*0x4b9bd9*/
  return this; /*0x4b9bdc*/

}
} // namespace gamemd
// 0x4085A0
namespace gamemd {
int Struct::ZeroInit32()
{

  memset(this, 0, 0x20u); /*0x4085aa*/
  return 0; /*0x4085ac*/

}
} // namespace gamemd
// 0x53F4E0
namespace gamemd {
int Struct::ZeroInitAndSetup_0()
{

  return Struct::ZeroInitAndSetup(this);

}
}
// 0x5EF280
namespace gamemd {
int Struct::ZeroInitAndSetup_0_0()
{

  return Struct::ZeroInitAndSetup(this);

}
}
// 0x5F75E0
unsigned int * Struct::InitTriple256(unsigned int * a1)
{

  int v1; // esi

  v1 = 2 * MEMORY[0xAC1474]; /*0x5f75ec*/
  *a1 = 256; /*0x5f75f7*/
  a1[1] = 256; /*0x5f75f9*/
  a1[2] = v1; /*0x5f75fc*/
  return a1; /*0x5f75ff*/

}