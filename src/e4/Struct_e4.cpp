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
int Struct::ClearAllMemberFlags()
{
  int v1; // eax
  int v2; // esi
  int v3; // eax
  _DWORD *v4; // edi
  int result; // eax
  int v6; // esi
  _DWORD *v7; // edi

  v1 = this->u32_4; /*0x48b2a0*/
  v2 = 0; /*0x48b2a7*/
  this->u32_2C = 0; /*0x48b2ac*/
  this->u32_3C = 0; /*0x48b2af*/
  this->u32_14 = 0; /*0x48b2b2*/
  this->u32_18 = 0; /*0x48b2b5*/
  this->u32_1C = 0; /*0x48b2b8*/
  this->u32_20 = 0; /*0x48b2bb*/
  this->u32_28 = 0; /*0x48b2be*/
  this->u32_38 = 0; /*0x48b2c1*/
  if ( v1 > 0 ) /*0x48b2c4*/
  {
    v3 = 0; /*0x48b2c6*/
    do /*0x48b327*/
    {
      *(_DWORD *)(v3 + this->u32_24) &= ~1u; /*0x48b2d2*/
      *(_DWORD *)(v3 + this->u32_24) &= ~2u; /*0x48b2de*/
      v4 = (_DWORD *)(v3 + this->u32_24); /*0x48b2e3*/
      v3 += 36; /*0x48b2e5*/
      ++v2; /*0x48b2ed*/
      *v4 &= ~4u; /*0x48b2ee*/
      *(_DWORD *)(v3 + this->u32_24 - 32) = 0; /*0x48b2f3*/
      *(_DWORD *)(v3 + this->u32_24 - 28) = 0; /*0x48b2fa*/
      *(_DWORD *)(v3 + this->u32_24 - 24) = 0; /*0x48b301*/
      *(_DWORD *)(v3 + this->u32_24 - 20) = 0; /*0x48b308*/
      *(_DWORD *)(v3 + this->u32_24 - 12) = 0; /*0x48b30f*/
      *(_WORD *)(v3 + this->u32_24 - 4) = 0; /*0x48b316*/
      *(_DWORD *)(this->u32_30 + 4 * v2 - 4) = 0; /*0x48b31e*/
    }
    while ( v2 < this->u32_4 ); /*0x48b327*/
  }
  result = this->u32_8; /*0x48b329*/
  v6 = 0; /*0x48b32c*/
  if ( result > 0 ) /*0x48b330*/
  {
    result = 0; /*0x48b332*/
    do /*0x48b37d*/
    {
      *(_DWORD *)(result + this->u32_34) &= ~1u; /*0x48b33e*/
      *(_DWORD *)(result + this->u32_34) &= ~2u; /*0x48b34a*/
      v7 = (_DWORD *)(result + this->u32_34); /*0x48b34f*/
      result += 24; /*0x48b351*/
      ++v6; /*0x48b359*/
      *v7 &= ~4u; /*0x48b35a*/
      *(_DWORD *)(this->u32_34 + result - 20) = 0; /*0x48b35f*/
      *(_DWORD *)(this->u32_34 + result - 16) = 0; /*0x48b366*/
      *(_DWORD *)(this->u32_34 + result - 8) = 0; /*0x48b36d*/
      *(_DWORD *)(this->u32_40 + 4 * v6 - 4) = 0; /*0x48b374*/
    }
    while ( v6 < this->u32_8 ); /*0x48b37d*/
  }
  this->u32_44 = 0; /*0x48b381*/
  this->u32_48 = 0; /*0x48b384*/
  this->u32_4C = 0; /*0x48b387*/
  this->u32_54 = 0; /*0x48b38a*/
  return result; /*0x48b37f*/
}
} // namespace gamemd
// 0x48BF10
namespace gamemd {
int Struct::ZeroInitAndSetup()
{
  this->PhoneNumber[7] = 0; /*0x48bf12*/
  this->PhoneNumber[8] = 0; /*0x48bf15*/
  this->PhoneNumber[9] = 0; /*0x48bf18*/
  this->PhoneNumber[10] = 0; /*0x48bf1b*/
  *(_DWORD *)this->Active = 0; /*0x48bf1e*/
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
  IDA_LOBYTE(this->Struct_field_00) = 0; /*0x4b9bd4*/
  IDA_BYTE1(this->Struct_field_00) = 0; /*0x4b9bd6*/
  IDA_BYTE2(this->Struct_field_00) = 0; /*0x4b9bd9*/
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
  void *v1; // esi

  v1 = (void *)(2 * dword_AC1474); /*0x5f75ec*/
  a1->AbstractTypeClass = (void *)256; /*0x5f75f7*/
  a1->? = (void *)256; /*0x5f75f9*/
  a1->? = v1; /*0x5f75fc*/
  return &a1->AbstractTypeClass; /*0x5f75ff*/
}