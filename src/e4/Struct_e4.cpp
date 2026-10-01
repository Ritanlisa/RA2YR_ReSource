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
#include "e4/classes/ObjectClass_e4.hpp"

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

  v1 = *((unsigned int *)this + 1); /*0x48b2a0*/
  v2 = 0; /*0x48b2a7*/
  *((unsigned int *)this + 11) = 0; /*0x48b2ac*/
  *((unsigned int *)this + 15) = 0; /*0x48b2af*/
  *((unsigned int *)this + 5) = 0; /*0x48b2b2*/
  *((unsigned int *)this + 6) = 0; /*0x48b2b5*/
  *((unsigned int *)this + 7) = 0; /*0x48b2b8*/
  *((unsigned int *)this + 8) = 0; /*0x48b2bb*/
  *((unsigned int *)this + 10) = 0; /*0x48b2be*/
  *((unsigned int *)this + 14) = 0; /*0x48b2c1*/
  if ( v1 > 0 ) /*0x48b2c4*/
  {
    v3 = 0; /*0x48b2c6*/
    do /*0x48b327*/
    {
      *(unsigned int *)(v3 + *((unsigned int *)this + 9)) &= ~1u; /*0x48b2d2*/
      *(unsigned int *)(v3 + *((unsigned int *)this + 9)) &= ~2u; /*0x48b2de*/
      v4 = (unsigned int *)(v3 + *((unsigned int *)this + 9)); /*0x48b2e3*/
      v3 += 36; /*0x48b2e5*/
      ++v2; /*0x48b2ed*/
      *v4 &= ~4u; /*0x48b2ee*/
      *(unsigned int *)(v3 + *((unsigned int *)this + 9) - 32) = 0; /*0x48b2f3*/
      *(unsigned int *)(v3 + *((unsigned int *)this + 9) - 28) = 0; /*0x48b2fa*/
      *(unsigned int *)(v3 + *((unsigned int *)this + 9) - 24) = 0; /*0x48b301*/
      *(unsigned int *)(v3 + *((unsigned int *)this + 9) - 20) = 0; /*0x48b308*/
      *(unsigned int *)(v3 + *((unsigned int *)this + 9) - 12) = 0; /*0x48b30f*/
      *(unsigned short *)(v3 + *((unsigned int *)this + 9) - 4) = 0; /*0x48b316*/
      *(unsigned int *)(*((unsigned int *)this + 12) + 4 * v2 - 4) = 0; /*0x48b31e*/
    }
    while ( v2 < *((unsigned int *)this + 1) ); /*0x48b327*/
  }
  result = *((unsigned int *)this + 2); /*0x48b329*/
  v6 = 0; /*0x48b32c*/
  if ( result > 0 ) /*0x48b330*/
  {
    result = 0; /*0x48b332*/
    do /*0x48b37d*/
    {
      *(unsigned int *)(result + *((unsigned int *)this + 13)) &= ~1u; /*0x48b33e*/
      *(unsigned int *)(result + *((unsigned int *)this + 13)) &= ~2u; /*0x48b34a*/
      v7 = (unsigned int *)(result + *((unsigned int *)this + 13)); /*0x48b34f*/
      result += 24; /*0x48b351*/
      ++v6; /*0x48b359*/
      *v7 &= ~4u; /*0x48b35a*/
      *(unsigned int *)(*((unsigned int *)this + 13) + result - 20) = 0; /*0x48b35f*/
      *(unsigned int *)(*((unsigned int *)this + 13) + result - 16) = 0; /*0x48b366*/
      *(unsigned int *)(*((unsigned int *)this + 13) + result - 8) = 0; /*0x48b36d*/
      *(unsigned int *)(*((unsigned int *)this + 16) + 4 * v6 - 4) = 0; /*0x48b374*/
    }
    while ( v6 < *((unsigned int *)this + 2) ); /*0x48b37d*/
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
int Struct::ZeroInitAndSetup(void *a1)
{

  this->PhoneNumber[7] = 0; /*0x48bf12*/
  this->PhoneNumber[8] = 0; /*0x48bf15*/
  this->PhoneNumber[9] = 0; /*0x48bf18*/
  this->PhoneNumber[10] = 0; /*0x48bf1b*/
  *(unsigned int *)this->Active = 0; /*0x48bf1e*/
  this->LastPacketTime = 0; /*0x48bf21*/
  this->PacketsSent = 0; /*0x48bf24*/
  this->PacketsReceived = 0; /*0x48bf27*/
  this->PhoneNumber[0] = 0; /*0x48bf2a*/
  this->PhoneNumber[11] = -1; /*0x48bf30*/
  this->PhoneNumber[12] = -1; /*0x48bf33*/
  return Struct::ClearAllMemberFlags((Struct *)this->PlayerIndex);

}
} // namespace gamemd
// 0x4B9BD0
namespace gamemd {
unsigned char * Struct::Zero3()
{

  LOBYTE(this->Struct_field_00) = 0; /*0x4b9bd4*/
  BYTE1(this->Struct_field_00) = 0; /*0x4b9bd6*/
  BYTE2(this->Struct_field_00) = 0; /*0x4b9bd9*/
  return this; /*0x4b9bdc*/

}
} // namespace gamemd
// 0x4085A0
namespace gamemd {
int Struct::ZeroInit32(void *a1)
{

  memset(this, 0, 0x20u); /*0x4085aa*/
  return 0; /*0x4085ac*/

}
} // namespace gamemd
// 0x53F4E0
namespace gamemd {
int Struct::ZeroInitAndSetup_0()
{

  return Struct::ZeroInitAndSetup((ConnectionClass *)this);

}
}
// 0x5EF280
namespace gamemd {
int Struct::ZeroInitAndSetup_0_0()
{

  return Struct::ZeroInitAndSetup((ConnectionClass *)this);

}
}
// 0x5F75E0
unsigned int * Struct::InitTriple256(unsigned int * a1)
{

  void *v1; // esi

  v1 = (void *)(2 * dword_AC1474); /*0x5f75ec*/
  a1->AbstractTypeClass = (void *)256; /*0x5f75f7*/
  ((unsigned int *)a1)[0] = (unsigned int)((void *)256); /*0x5f75f9*/
  ((unsigned int *)a1)[0] = (unsigned int)(v1); /*0x5f75fc*/
  return &a1->AbstractTypeClass; /*0x5f75ff*/

}