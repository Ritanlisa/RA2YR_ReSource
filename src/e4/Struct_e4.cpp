// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4085A0
int Struct::ZeroInit32()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Struct_ZeroInit32(void *this)
{
  memset(this, 0, 0x20u); /*0x4085aa*/
  return 0; /*0x4085ac*/
}
}

// 0x48B2A0
int Struct::ClearAllMemberFlags()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Struct::ClearAllMemberFlags(CommBufferClass *this)
{
  int v1; // eax
  int v2; // esi
  int v3; // eax
  _DWORD *v4; // edi
  int result; // eax
  int v6; // esi
  _DWORD *v7; // edi

  v1 = *(_DWORD *)&this->__pad_0[4]; /*0x48b2a0*/
  v2 = 0; /*0x48b2a7*/
  *(_DWORD *)&this->__pad_28[4] = 0; /*0x48b2ac*/
  *((_DWORD *)this + 15) = 0; /*0x48b2af*/
  *(_DWORD *)this->__pad_14 = 0; /*0x48b2b2*/
  *(_DWORD *)&this->__pad_14[4] = 0; /*0x48b2b5*/
  *(_DWORD *)&this->__pad_14[8] = 0; /*0x48b2b8*/
  *(_DWORD *)&this->__pad_14[12] = 0; /*0x48b2bb*/
  *(_DWORD *)this->__pad_28 = 0; /*0x48b2be*/
  *((_DWORD *)this + 14) = 0; /*0x48b2c1*/
  if ( v1 > 0 ) /*0x48b2c4*/
  {
    v3 = 0; /*0x48b2c6*/
    do /*0x48b327*/
    {
      *(_DWORD *)(v3 + this->field_24) &= ~1u; /*0x48b2d2*/
      *(_DWORD *)(v3 + this->field_24) &= ~2u; /*0x48b2de*/
      v4 = (_DWORD *)(v3 + this->field_24); /*0x48b2e3*/
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
  v6 = 0; /*0x48b32c*/
  if ( result > 0 ) /*0x48b330*/
  {
    result = 0; /*0x48b332*/
    do /*0x48b37d*/
    {
      *(_DWORD *)(result + this->field_34) &= ~1u; /*0x48b33e*/
      *(_DWORD *)(result + this->field_34) &= ~2u; /*0x48b34a*/
      v7 = (_DWORD *)(result + this->field_34); /*0x48b34f*/
      result += 24; /*0x48b351*/
      ++v6; /*0x48b359*/
      *v7 &= ~4u; /*0x48b35a*/
      *(_DWORD *)(this->field_34 + result - 20) = 0; /*0x48b35f*/
      *(_DWORD *)(this->field_34 + result - 16) = 0; /*0x48b366*/
      *(_DWORD *)(this->field_34 + result - 8) = 0; /*0x48b36d*/
      *(_DWORD *)(*((_DWORD *)this + 16) + 4 * v6 - 4) = 0; /*0x48b374*/
    }
    while ( v6 < this->field_8 ); /*0x48b37d*/
  }
  *((_DWORD *)this + 17) = 0; /*0x48b381*/
  *((_DWORD *)this + 18) = 0; /*0x48b384*/
  *((_DWORD *)this + 19) = 0; /*0x48b387*/
  *((_DWORD *)this + 21) = 0; /*0x48b38a*/
  return result; /*0x48b37f*/
}
}

// 0x48BF10
int Struct::ZeroInitAndSetup()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Struct_ZeroInitAndSetup(_DWORD *this)
{
  *(this + 13) = 0; /*0x48bf12*/
  *(this + 14) = 0; /*0x48bf15*/
  *(this + 15) = 0; /*0x48bf18*/
  *(this + 16) = 0; /*0x48bf1b*/
  *(this + 2) = 0; /*0x48bf1e*/
  *(this + 3) = 0; /*0x48bf21*/
  *(this + 4) = 0; /*0x48bf24*/
  *(this + 5) = 0; /*0x48bf27*/
  *(this + 6) = 0; /*0x48bf2a*/
  *(this + 17) = -1; /*0x48bf30*/
  *(this + 18) = -1; /*0x48bf33*/
  return Struct::ClearAllMemberFlags(*(this + 1));
}
}

// 0x4B9BD0
unsigned char * Struct::Zero3()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *__thiscall Struct::Zero3(_BYTE *this)
{
  *this = 0; /*0x4b9bd4*/
  *(this + 1) = 0; /*0x4b9bd6*/
  *(this + 2) = 0; /*0x4b9bd9*/
  return this; /*0x4b9bdc*/
}
}

// 0x53F4E0
namespace gamemd {
int Struct_ZeroInitAndSetup_0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int __thiscall Struct::ZeroInitAndSetup_0(_DWORD *this)
{
  return Struct::ZeroInitAndSetup(this);
}
}
} // namespace gamemd

// 0x5EF280
namespace gamemd {
int Struct_ZeroInitAndSetup_0_0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int __thiscall Struct::ZeroInitAndSetup_0_0(NullModemConnClass *this)
{
  return Struct::ZeroInitAndSetup(this);
}
}
} // namespace gamemd

// 0x5F75E0
unsigned int * Struct::InitTriple256(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall Struct_InitTriple256(_DWORD *a1)
{
  int v1; // esi

  v1 = 2 * MEMORY[0xAC1474]; /*0x5f75ec*/
  *a1 = 256; /*0x5f75f7*/
  a1[1] = 256; /*0x5f75f9*/
  a1[2] = v1; /*0x5f75fc*/
  return a1; /*0x5f75ff*/
}
}
