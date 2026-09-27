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

// 0x48B2A0
namespace gamemd {
int Struct::ClearAllMemberFlags()
{
  void * v1;
  int v2; // esi
  int v3; // eax
  unsigned int *v4; // edi
  void * result;
  int v6; // esi
  unsigned int *v7; // edi

  v1 = this->q004; /*0x48b2a0*/
  v2 = 0; /*0x48b2a7*/
  *(&this->q0041) = 0; /*0x48b2ac*/
  *(&this->q0045) = 0; /*0x48b2af*/
  this->q014 = 0; /*0x48b2b2*/
  this->q018 = 0; /*0x48b2b5*/
  this->q01C = 0; /*0x48b2b8*/
  this->q020 = 0; /*0x48b2bb*/
  *(&this->q0040) = 0; /*0x48b2be*/
  *(&this->q0044) = 0; /*0x48b2c1*/
  if ( v1 > 0 ) /*0x48b2c4*/
  {
    v3 = 0; /*0x48b2c6*/
    do /*0x48b327*/
    {
      *(unsigned int *)(v3 + this->q024) &= ~1u; /*0x48b2d2*/
      *(unsigned int *)(v3 + this->q024) &= ~2u; /*0x48b2de*/
      v4 = (unsigned int *)(v3 + this->q024); /*0x48b2e3*/
      v3 += 36; /*0x48b2e5*/
      ++v2; /*0x48b2ed*/
      *v4 &= ~4u; /*0x48b2ee*/
      *(unsigned int *)(v3 + this->q024 - 32) = 0; /*0x48b2f3*/
      *(unsigned int *)(v3 + this->q024 - 28) = 0; /*0x48b2fa*/
      *(unsigned int *)(v3 + this->q024 - 24) = 0; /*0x48b301*/
      *(unsigned int *)(v3 + this->q024 - 20) = 0; /*0x48b308*/
      *(unsigned int *)(v3 + this->q024 - 12) = 0; /*0x48b30f*/
      *(unsigned short *)(v3 + this->q024 - 4) = 0; /*0x48b316*/
      *(unsigned int *)(*(&this->q0042) + 4 * v2 - 4) = 0; /*0x48b31e*/
    }
    while ( v2 < this->q004 ); /*0x48b327*/
  }
  result = this->q008; /*0x48b329*/
  v6 = 0; /*0x48b32c*/
  if ( result > 0 ) /*0x48b330*/
  {
    result = 0; /*0x48b332*/
    do /*0x48b37d*/
    {
      *(unsigned int *)(result + *(&this->q0043)) &= ~1u; /*0x48b33e*/
      *(unsigned int *)(result + *(&this->q0043)) &= ~2u; /*0x48b34a*/
      v7 = (unsigned int *)(result + *(&this->q0043)); /*0x48b34f*/
      result += 24; /*0x48b351*/
      ++v6; /*0x48b359*/
      *v7 &= ~4u; /*0x48b35a*/
      *(unsigned int *)(*(&this->q0043) + result - 20) = 0; /*0x48b35f*/
      *(unsigned int *)(*(&this->q0043) + result - 16) = 0; /*0x48b366*/
      *(unsigned int *)(*(&this->q0043) + result - 8) = 0; /*0x48b36d*/
      *(unsigned int *)(*(&this->q0046) + 4 * v6 - 4) = 0; /*0x48b374*/
    }
    while ( v6 < this->q008 ); /*0x48b37d*/
  }
  *(&this->q0047) = 0; /*0x48b381*/
  *(&this->q0048) = 0; /*0x48b384*/
  *(&this->q0049) = 0; /*0x48b387*/
  *(&this->q0081) = 0; /*0x48b38a*/
  return result; /*0x48b37f*/
}
} // namespace gamemd
// 0x48BF10
namespace gamemd {
int Struct::ZeroInitAndSetup()
{
  *(&this->q0043) = 0; /*0x48bf12*/
  *(&this->q0044) = 0; /*0x48bf15*/
  *(&this->q0045) = 0; /*0x48bf18*/
  *(&this->q0046) = 0; /*0x48bf1b*/
  this->q008 = 0; /*0x48bf1e*/
  this->q00C = 0; /*0x48bf21*/
  this->q010 = 0; /*0x48bf24*/
  this->q014 = 0; /*0x48bf27*/
  this->q018 = 0; /*0x48bf2a*/
  *(&this->q0047) = -1; /*0x48bf30*/
  *(&this->q0048) = -1; /*0x48bf33*/
  return Struct::ClearAllMemberFlags(this->q004);
}
} // namespace gamemd
// 0x4B9BD0
namespace gamemd {
unsigned char * Struct::Zero3()
{
  *(unsigned int *)this = 0; /*0x4b9bd4*/
  this->q004 = 0; /*0x4b9bd6*/
  this->q008 = 0; /*0x4b9bd9*/
  return this; /*0x4b9bdc*/
}
} // namespace gamemd
// 0x4085A0
namespace gamemd {
int Struct::ZeroInit32()
{
  memset(0, 0x20u); /*0x4085aa*/
  return 0; /*0x4085ac*/
}
} // namespace gamemd
// 0x53F4E0
namespace gamemd {
int Struct::ZeroInitAndSetup_0()
{
  return Struct::ZeroInitAndSetup();
}
}
// 0x5EF280
namespace gamemd {
int Struct::ZeroInitAndSetup_0_0()
{
  return Struct::ZeroInitAndSetup();
}
}
// 0x5F75E0
unsigned int * Struct::InitTriple256(unsigned int * a1)
{
  int v1; // esi

  v1 = 2 * dword_AC1474; /*0x5f75ec*/
  *a1 = 256; /*0x5f75f7*/
  a1[1] = 256; /*0x5f75f9*/
  a1[2] = v1; /*0x5f75fc*/
  return a1; /*0x5f75ff*/
}