// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ParticleSystemClass_16_e4.hpp"
#include "e4/classes/ParticleSystemClass_32__e4.hpp"
#include "e4/classes/ParticleSystemClass_32_e4.hpp"

// 0x4E8470
namespace gamemd {
void ParticleSystemClass::GetClassIdentifier()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall ParticleSystemClass::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8476*/
  this->uniqueId = 0; /*0x4e8479*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8480*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8486*/
    this->vtable1 = 0; /*0x4e848e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8491*/
  this->vtable2 = 0; /*0x4e8494*/
}
}
} // namespace gamemd

// 0x4E84A0
namespace gamemd {
unsigned int ParticleSystemClass::LoadTypeData(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall ParticleSystemClass::_vt05(int this, int a2)
{
  if ( (unsigned char)this->vtable3 ) /*0x4e84a0*/
    return (unsigned int)(a2 - this->vtable1) >> 2; /*0x4e84b5*/
  else
    return 0; /*0x4e84a7*/
}
}
} // namespace gamemd

// 0x4E84C0
namespace gamemd {
int ParticleSystemClass::SaveToINI(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ParticleSystemClass::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x4e84ca*/
}
}
} // namespace gamemd

// 0x4E8780
namespace gamemd {
void ParticleSystemClass::initParticleArray()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall ParticleSystemClass::sub_4E8780(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8786*/
  this->uniqueId = 0; /*0x4e8789*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8790*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8796*/
    this->vtable1 = 0; /*0x4e879e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e87a1*/
  this->vtable2 = 0; /*0x4e87a4*/
}
}
} // namespace gamemd

// 0x62FE60
namespace gamemd {
BOOL ParticleSystemClass::Draw()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall ParticleSystemClass::_vt17(int this)
{
  return *(_BYTE *)(this + 248) && !this->Owner; /*0x62fe79*/
}
}
} // namespace gamemd

// 0x630210
namespace gamemd {
int ParticleSystemClass::GetTypeIdentifier()
{
return 24;
}
} // namespace gamemd

// 0x630230
namespace gamemd {
int ParticleSystemClass_ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (no pseudocode — ASM-only function)
}
} // namespace gamemd

// 0x4E87D0
namespace gamemd {
int ParticleSystemClass_16::Write(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ParticleSystemClass_16_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x4e87da*/
}
}
} // namespace gamemd

// 0x4EB260
namespace gamemd {
char ParticleSystemClass_16::AddRef(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ParticleSystemClass_16_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x4eb262*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4eb26d*/
  {
    v3 = 0; /*0x4eb26f*/
    if ( v2 <= 0 ) /*0x4eb273*/
      return 1; /*0x4eb293*/
    v4 = (_DWORD *)*(this + 1); /*0x4eb275*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4eb27b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4eb284*/
    {
      ++v3; /*0x4eb286*/
      ++v4; /*0x4eb287*/
      if ( v3 >= v2 ) /*0x4eb28c*/
        return 1; /*0x4eb28c*/
    }
  }
  return 0; /*0x4eb28e*/
}
}
} // namespace gamemd

// 0x4EB2A0
namespace gamemd {
char ParticleSystemClass_16::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ParticleSystemClass_16_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4eb2ac*/
  {
    *((_BYTE *)this + 12) = 0; /*0x4eb2b6*/
    if ( a3 ) /*0x4eb2bc*/
      v4 = a3; /*0x4eb2d2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eb2ce*/
    *((_BYTE *)this + 12) = 1; /*0x4eb2d6*/
    if ( v4 ) /*0x4eb2da*/
    {
      if ( this->ParticleSystemClass_16_field_0x4 ) /*0x4eb2e5*/
      {
        v6 = this->ParticleSystemClass_16_field_0x8; /*0x4eb2ec*/
        if ( a2 < v6 ) /*0x4eb2f1*/
          v6 = a2; /*0x4eb2f3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->ParticleSystemClass_16_field_0x4 + 4 * i - 4) ) /*0x4eb2f9*/
          ++i; /*0x4eb2fe*/
        if ( *((_BYTE *)this + 13) ) /*0x4eb30b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eb316*/
          this->ParticleSystemClass_16_field_0x4 = 0; /*0x4eb31e*/
        }
      }
      this->ParticleSystemClass_16_field_0x4 = v4; /*0x4eb327*/
      this->ParticleSystemClass_16_field_0x8 = a2; /*0x4eb32f*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x4eb332*/
      return 1; /*0x4eb338*/
    }
    else
    {
      return 0; /*0x4eb2df*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x4eb342*/
    return 1; /*0x4eb348*/
  }
}
}
} // namespace gamemd

// 0x4EB350
namespace gamemd {
void ParticleSystemClass_16::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall ParticleSystemClass_16_::_vt03(int this)
{
  if ( this->ParticleSystemClass_16_field_0x4 && *(_BYTE *)(this + 13) ) /*0x4eb35d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4eb363*/
    this->ParticleSystemClass_16_field_0x4 = 0; /*0x4eb36b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4eb36e*/
  this->ParticleSystemClass_16_field_0x8 = 0; /*0x4eb371*/
}
}
} // namespace gamemd

// 0x4EB380
namespace gamemd {
int ParticleSystemClass_16::Init(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ParticleSystemClass_16_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !(unsigned char)this->ParticleSystemClass_16_field_0xC ) /*0x4eb380*/
    return 0; /*0x4eb388*/
  v3 = this->ParticleSystemClass_16_field_0x8; /*0x4eb38e*/
  result = 0; /*0x4eb391*/
  if ( v3 <= 0 ) /*0x4eb395*/
    return -1; /*0x4eb3ac*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4eb39b*/
  {
    if ( ++result >= v3 ) /*0x4eb3aa*/
      return -1; /*0x4eb3aa*/
  }
  return result; /*0x4eb38a*/
}
}
} // namespace gamemd

// 0x4EB3C0
namespace gamemd {
unsigned int ParticleSystemClass_16::Read(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall ParticleSystemClass_16_::_vt05(int this, int a2)
{
  if ( (unsigned char)this->ParticleSystemClass_16_field_0xC ) /*0x4eb3c0*/
    return (unsigned int)(a2 - this->ParticleSystemClass_16_field_0x4) >> 2; /*0x4eb3d5*/
  else
    return 0; /*0x4eb3c7*/
}
}
} // namespace gamemd

// 0x4EFD50
namespace gamemd {
VectorClass * ParticleSystemClass_16::QueryInterface(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall ParticleSystemClass_16_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4efd53*/
  *Block = &VectorClass<SmudgeClass *>::`vftable'; /*0x4efd56*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4efd60*/
  {
    __3_YAXPAX_Z(v3); /*0x4efd68*/
    *(Block + 1) = 0; /*0x4efd70*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4efd7b*/
  *(Block + 2) = 0; /*0x4efd81*/
  if ( (a2 & 1) != 0 ) /*0x4efd88*/
    __3_YAXPAX_Z(Block); /*0x4efd8b*/
  return (VectorClass *)Block; /*0x4efd95*/
}
}
} // namespace gamemd

// 0x4E82F0
namespace gamemd {
void ParticleSystemClass_32::ClearBuffer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall ParticleSystemClass_32_::sub_4E82F0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e82f6*/
  this->ParticleSystemClass_32_field_0x10 = 0; /*0x4e82f9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8300*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8306*/
    this->ParticleSystemClass_32_field_0x4 = 0; /*0x4e830e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8311*/
  this->ParticleSystemClass_32_field_0x8 = 0; /*0x4e8314*/
}
}
} // namespace gamemd

// 0x4E8320
namespace gamemd {
unsigned int ParticleSystemClass_32::PointerToIndex(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall ParticleSystemClass_32_::sub_4E8320(int this, int a2)
{
  if ( (unsigned char)this->ParticleSystemClass_32_field_0xC ) /*0x4e8320*/
    return (unsigned int)(a2 - this->ParticleSystemClass_32_field_0x4) >> 2; /*0x4e8335*/
  else
    return 0; /*0x4e8327*/
}
}
} // namespace gamemd

// 0x4E87E0
namespace gamemd {
void ParticleSystemClass_32::Destroy()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall ParticleSystemClass_32_::sub_4E87E0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e87e6*/
  this->ParticleSystemClass_32_field_0x10 = 0; /*0x4e87e9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e87f0*/
  {
    __3_YAXPAX_Z(v2); /*0x4e87f6*/
    this->ParticleSystemClass_32_field_0x4 = 0; /*0x4e87fe*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8801*/
  this->ParticleSystemClass_32_field_0x8 = 0; /*0x4e8804*/
}
}
} // namespace gamemd

// 0x4E8810
namespace gamemd {
unsigned int ParticleSystemClass_32::GetIndex2(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall ParticleSystemClass_32_::sub_4E8810(int this, int a2)
{
  if ( (unsigned char)this->ParticleSystemClass_32_field_0xC ) /*0x4e8810*/
    return (unsigned int)(a2 - this->ParticleSystemClass_32_field_0x4) >> 2; /*0x4e8825*/
  else
    return 0; /*0x4e8817*/
}
}
} // namespace gamemd

// 0x4E8830
namespace gamemd {
int ParticleSystemClass_32::Write(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ParticleSystemClass_32_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x4e883a*/
}
}
} // namespace gamemd

// 0x4E8840
namespace gamemd {
void ParticleSystemClass_32::ReleaseBuffer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall ParticleSystemClass_32_::sub_4E8840(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x4e8846*/
  this->ParticleSystemClass_32_field_0x10 = 0; /*0x4e8849*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x4e8850*/
  {
    __3_YAXPAX_Z(v2); /*0x4e8856*/
    this->ParticleSystemClass_32_field_0x4 = 0; /*0x4e885e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4e8861*/
  this->ParticleSystemClass_32_field_0x8 = 0; /*0x4e8864*/
}
}
} // namespace gamemd

// 0x4E95E0
namespace gamemd {
char ParticleSystemClass_32::SetCapacity(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ParticleSystemClass_32_::sub_4E95E0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4e95ec*/
  {
    *((_BYTE *)this + 12) = 0; /*0x4e95f2*/
    if ( a3 ) /*0x4e95f8*/
      v4 = a3; /*0x4e960e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4e960a*/
    *((_BYTE *)this + 12) = 1; /*0x4e9612*/
    if ( !v4 ) /*0x4e9616*/
      return 0; /*0x4e968a*/
    if ( this->ParticleSystemClass_32_field_0x4 ) /*0x4e9618*/
    {
      v5 = this->ParticleSystemClass_32_field_0x8; /*0x4e961f*/
      if ( a2 < v5 ) /*0x4e9624*/
        v5 = a2; /*0x4e9626*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->ParticleSystemClass_32_field_0x4 + 4 * i - 4) ) /*0x4e962c*/
        ++i; /*0x4e9631*/
      if ( *((_BYTE *)this + 13) ) /*0x4e963e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4e9649*/
        this->ParticleSystemClass_32_field_0x4 = 0; /*0x4e9651*/
      }
    }
    this->ParticleSystemClass_32_field_0x4 = v4; /*0x4e965a*/
    this->ParticleSystemClass_32_field_0x8 = a2; /*0x4e9662*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x4e9665*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x4e966e*/
  }
  v7 = this->ParticleSystemClass_32_field_0x8; /*0x4e9671*/
  if ( v7 < this->ParticleSystemClass_32_field_0x10 ) /*0x4e9679*/
    this->ParticleSystemClass_32_field_0x10 = v7; /*0x4e967b*/
  return 1; /*0x4e967e*/
}
}
} // namespace gamemd

// 0x4E9690
namespace gamemd {
int ParticleSystemClass_32::FindItem(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ParticleSystemClass_32_::sub_4E9690(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x4e9690*/
  result = 0; /*0x4e9693*/
  if ( v2 <= 0 ) /*0x4e9698*/
    return -1; /*0x4e96af*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x4e969e*/
  {
    if ( ++result >= v2 ) /*0x4e96ad*/
      return -1; /*0x4e96ad*/
  }
  return result; /*0x4e96b2*/
}
}
} // namespace gamemd

// 0x4EB4C0
namespace gamemd {
char ParticleSystemClass_32::AddRef(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ParticleSystemClass_32_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x4eb4c2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x4eb4cd*/
  {
    v3 = 0; /*0x4eb4cf*/
    if ( v2 <= 0 ) /*0x4eb4d3*/
      return 1; /*0x4eb4f3*/
    v4 = (_DWORD *)*(this + 1); /*0x4eb4d5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x4eb4db*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x4eb4e4*/
    {
      ++v3; /*0x4eb4e6*/
      ++v4; /*0x4eb4e7*/
      if ( v3 >= v2 ) /*0x4eb4ec*/
        return 1; /*0x4eb4ec*/
    }
  }
  return 0; /*0x4eb4ee*/
}
}
} // namespace gamemd

// 0x4EB500
namespace gamemd {
char ParticleSystemClass_32::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ParticleSystemClass_32_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x4eb50c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x4eb516*/
    if ( a3 ) /*0x4eb51c*/
      v4 = a3; /*0x4eb532*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eb52e*/
    *((_BYTE *)this + 12) = 1; /*0x4eb536*/
    if ( v4 ) /*0x4eb53a*/
    {
      if ( this->ParticleSystemClass_32_field_0x4 ) /*0x4eb545*/
      {
        v6 = this->ParticleSystemClass_32_field_0x8; /*0x4eb54c*/
        if ( a2 < v6 ) /*0x4eb551*/
          v6 = a2; /*0x4eb553*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->ParticleSystemClass_32_field_0x4 + 4 * i - 4) ) /*0x4eb559*/
          ++i; /*0x4eb55e*/
        if ( *((_BYTE *)this + 13) ) /*0x4eb56b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eb576*/
          this->ParticleSystemClass_32_field_0x4 = 0; /*0x4eb57e*/
        }
      }
      this->ParticleSystemClass_32_field_0x4 = v4; /*0x4eb587*/
      this->ParticleSystemClass_32_field_0x8 = a2; /*0x4eb58f*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x4eb592*/
      return 1; /*0x4eb598*/
    }
    else
    {
      return 0; /*0x4eb53f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x4eb5a2*/
    return 1; /*0x4eb5a8*/
  }
}
}
} // namespace gamemd

// 0x4EB5B0
namespace gamemd {
void ParticleSystemClass_32::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall ParticleSystemClass_32_::_vt03(int this)
{
  if ( this->ParticleSystemClass_32_field_0x4 && *(_BYTE *)(this + 13) ) /*0x4eb5bd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x4eb5c3*/
    this->ParticleSystemClass_32_field_0x4 = 0; /*0x4eb5cb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x4eb5ce*/
  this->ParticleSystemClass_32_field_0x8 = 0; /*0x4eb5d1*/
}
}
} // namespace gamemd

// 0x4EB5E0
namespace gamemd {
int ParticleSystemClass_32::Init(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ParticleSystemClass_32_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !(unsigned char)this->ParticleSystemClass_32_field_0xC ) /*0x4eb5e0*/
    return 0; /*0x4eb5e8*/
  v3 = this->ParticleSystemClass_32_field_0x8; /*0x4eb5ee*/
  result = 0; /*0x4eb5f1*/
  if ( v3 <= 0 ) /*0x4eb5f5*/
    return -1; /*0x4eb60c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4eb5fb*/
  {
    if ( ++result >= v3 ) /*0x4eb60a*/
      return -1; /*0x4eb60a*/
  }
  return result; /*0x4eb5ea*/
}
}
} // namespace gamemd

// 0x4EB620
namespace gamemd {
unsigned int ParticleSystemClass_32::Read(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall ParticleSystemClass_32_::_vt05(int this, int a2)
{
  if ( (unsigned char)this->ParticleSystemClass_32_field_0xC ) /*0x4eb620*/
    return (unsigned int)(a2 - this->ParticleSystemClass_32_field_0x4) >> 2; /*0x4eb635*/
  else
    return 0; /*0x4eb627*/
}
}
} // namespace gamemd

// 0x4EB640
namespace gamemd {
char ParticleSystemClass_32::CopyParticles2(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ParticleSystemClass_32_::sub_4EB640(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4eb64c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x4eb652*/
    if ( a3 ) /*0x4eb658*/
      v4 = a3; /*0x4eb66e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eb66a*/
    *((_BYTE *)this + 12) = 1; /*0x4eb672*/
    if ( !v4 ) /*0x4eb676*/
      return 0; /*0x4eb6ea*/
    if ( this->ParticleSystemClass_32_field_0x4 ) /*0x4eb678*/
    {
      v5 = this->ParticleSystemClass_32_field_0x8; /*0x4eb67f*/
      if ( a2 < v5 ) /*0x4eb684*/
        v5 = a2; /*0x4eb686*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->ParticleSystemClass_32_field_0x4 + 4 * i - 4) ) /*0x4eb68c*/
        ++i; /*0x4eb691*/
      if ( *((_BYTE *)this + 13) ) /*0x4eb69e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eb6a9*/
        this->ParticleSystemClass_32_field_0x4 = 0; /*0x4eb6b1*/
      }
    }
    this->ParticleSystemClass_32_field_0x4 = v4; /*0x4eb6ba*/
    this->ParticleSystemClass_32_field_0x8 = a2; /*0x4eb6c2*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x4eb6c5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x4eb6ce*/
  }
  v7 = this->ParticleSystemClass_32_field_0x8; /*0x4eb6d1*/
  if ( v7 < this->ParticleSystemClass_32_field_0x10 ) /*0x4eb6d9*/
    this->ParticleSystemClass_32_field_0x10 = v7; /*0x4eb6db*/
  return 1; /*0x4eb6de*/
}
}
} // namespace gamemd

// 0x4EB6F0
namespace gamemd {
int ParticleSystemClass_32::FindParticle2(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ParticleSystemClass_32_::sub_4EB6F0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x4eb6f0*/
  result = 0; /*0x4eb6f3*/
  if ( v2 <= 0 ) /*0x4eb6f8*/
    return -1; /*0x4eb70f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x4eb6fe*/
  {
    if ( ++result >= v2 ) /*0x4eb70d*/
      return -1; /*0x4eb70d*/
  }
  return result; /*0x4eb712*/
}
}
} // namespace gamemd

// 0x4EF5D0
namespace gamemd {
DynamicVector * ParticleSystemClass_32::Constructor_VectorClass_BuildingClass___(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall ParticleSystemClass_32_::Constructor_VectorClass_BuildingClass___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4ef5d3*/
  *Block = &VectorClass<BuildingClass *>::`vftable'; /*0x4ef5d6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4ef5e0*/
  {
    __3_YAXPAX_Z(v3); /*0x4ef5e8*/
    *(Block + 1) = 0; /*0x4ef5f0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4ef5fb*/
  *(Block + 2) = 0; /*0x4ef601*/
  if ( (a2 & 1) != 0 ) /*0x4ef608*/
    __3_YAXPAX_Z(Block); /*0x4ef60b*/
  return (DynamicVector *)Block; /*0x4ef615*/
}
}
} // namespace gamemd

// 0x4EFDF0
namespace gamemd {
VectorClass * ParticleSystemClass_32::QueryInterface(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall ParticleSystemClass_32_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4efdf3*/
  *Block = &VectorClass<TerrainClass *>::`vftable'; /*0x4efdf6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4efe00*/
  {
    __3_YAXPAX_Z(v3); /*0x4efe08*/
    *(Block + 1) = 0; /*0x4efe10*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4efe1b*/
  *(Block + 2) = 0; /*0x4efe21*/
  if ( (a2 & 1) != 0 ) /*0x4efe28*/
    __3_YAXPAX_Z(Block); /*0x4efe2b*/
  return (VectorClass *)Block; /*0x4efe35*/
}
}
} // namespace gamemd

// 0x4EFE40
namespace gamemd {
DynamicVector * ParticleSystemClass_32::Constructor_VectorClass_TerrainClass___(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall ParticleSystemClass_32_::Constructor_VectorClass_TerrainClass___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4efe43*/
  *Block = &VectorClass<TerrainClass *>::`vftable'; /*0x4efe46*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4efe50*/
  {
    __3_YAXPAX_Z(v3); /*0x4efe58*/
    *(Block + 1) = 0; /*0x4efe60*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4efe6b*/
  *(Block + 2) = 0; /*0x4efe71*/
  if ( (a2 & 1) != 0 ) /*0x4efe78*/
    __3_YAXPAX_Z(Block); /*0x4efe7b*/
  return (DynamicVector *)Block; /*0x4efe85*/
}
}
} // namespace gamemd

// 0x4EFEE0
namespace gamemd {
DynamicVector * ParticleSystemClass_32::Constructor_VectorClass_AircraftClass___(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall ParticleSystemClass_32_::Constructor_VectorClass_AircraftClass___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x4efee3*/
  *Block = &VectorClass<AircraftClass *>::`vftable'; /*0x4efee6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x4efef0*/
  {
    __3_YAXPAX_Z(v3); /*0x4efef8*/
    *(Block + 1) = 0; /*0x4eff00*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x4eff0b*/
  *(Block + 2) = 0; /*0x4eff11*/
  if ( (a2 & 1) != 0 ) /*0x4eff18*/
    __3_YAXPAX_Z(Block); /*0x4eff1b*/
  return (DynamicVector *)Block; /*0x4eff25*/
}
}
} // namespace gamemd

// 0x4E8870
namespace gamemd {
unsigned int ParticleSystemClass_32_::GetElementIndex(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall ParticleSystemClass_32_::sub_4E8870(int this, int a2)
{
  if ( (unsigned char)this->ParticleSystemClass_32__field_0xC ) /*0x4e8870*/
    return (unsigned int)(a2 - this->ParticleSystemClass_32__field_0x4) >> 2; /*0x4e8885*/
  else
    return 0; /*0x4e8877*/
}
}
} // namespace gamemd

// 0x4EB8A0
namespace gamemd {
char ParticleSystemClass_32_::ResizeDataArray(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ParticleSystemClass_32_::sub_4EB8A0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x4eb8ac*/
  {
    *((_BYTE *)this + 12) = 0; /*0x4eb8b2*/
    if ( a3 ) /*0x4eb8b8*/
      v4 = a3; /*0x4eb8ce*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x4eb8ca*/
    *((_BYTE *)this + 12) = 1; /*0x4eb8d2*/
    if ( !v4 ) /*0x4eb8d6*/
      return 0; /*0x4eb94a*/
    if ( this->ParticleSystemClass_32__field_0x4 ) /*0x4eb8d8*/
    {
      v5 = *((_DWORD *)this + 2); /*0x4eb8df*/
      if ( a2 < v5 ) /*0x4eb8e4*/
        v5 = a2; /*0x4eb8e6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->ParticleSystemClass_32__field_0x4 + 4 * i - 4) ) /*0x4eb8ec*/
        ++i; /*0x4eb8f1*/
      if ( *((_BYTE *)this + 13) ) /*0x4eb8fe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x4eb909*/
        this->ParticleSystemClass_32__field_0x4 = 0; /*0x4eb911*/
      }
    }
    this->ParticleSystemClass_32__field_0x4 = v4; /*0x4eb91a*/
    *((_DWORD *)this + 2) = a2; /*0x4eb922*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x4eb925*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x4eb92e*/
  }
  v7 = *((_DWORD *)this + 2); /*0x4eb931*/
  if ( v7 < this->ParticleSystemClass_32__field_0x10 ) /*0x4eb939*/
    this->ParticleSystemClass_32__field_0x10 = v7; /*0x4eb93b*/
  return 1; /*0x4eb93e*/
}
}
} // namespace gamemd

// 0x4EB950
namespace gamemd {
int ParticleSystemClass_32_::FindElementByValue(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ParticleSystemClass_32_::sub_4EB950(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x4eb950*/
  result = 0; /*0x4eb953*/
  if ( v2 <= 0 ) /*0x4eb958*/
    return -1; /*0x4eb96f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x4eb95e*/
  {
    if ( ++result >= v2 ) /*0x4eb96d*/
      return -1; /*0x4eb96d*/
  }
  return result; /*0x4eb972*/
}
}
} // namespace gamemd

// 0x62FE80
namespace gamemd {
int ParticleSystemClass::StubReturn2()
{
return 2;
}
} // namespace gamemd

// 0x630200
namespace gamemd {
int ParticleSystemClass::GetObjectSize()
{
return 256;
}
} // namespace gamemd
