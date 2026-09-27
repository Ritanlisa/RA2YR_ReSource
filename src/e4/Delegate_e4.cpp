// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Delegate_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/DeleteCommandClass_e4.hpp"
#include "e4/classes/DeleteCommandClass_28_e4.hpp"
#include "e4/classes/GenericNode_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x42DDB0
namespace gamemd {
int Delegate::ProcessBitmapStream(char * Src, int a3)
{
  char *v3; // ebp
  int v5; // esi
  unsigned char *v6; // ebx
  int v7; // ecx
  char * v8;
  int v9; // eax
  int v10; // eax
  uint8_t *v12; // [esp+8h] [ebp-Ch]
  int v13; // [esp+Ch] [ebp-8h]
  size_t Size; // [esp+10h] [ebp-4h]
  int Srca; // [esp+18h] [ebp+4h]

  v3 = Src; /*0x42ddb4*/
  if ( !Src || a3 < 1 ) /*0x42ddc8*/
    return Delegate::Dispatch((int)Src, a3); /*0x42df25*/
  v13 = 0; /*0x42ddd5*/
  if ( this->m_allocated ) /*0x42ddce*/
  {
    v5 = (unsigned char *)(4);
    v12 = (uint8_t *)&this->Delegate_field_14; /*0x42de00*/
    v6 = &this->m_straw; /*0x42de04*/
    Srca = 3; /*0x42de07*/
  }
  else
  {
    v5 = (unsigned char *)(3);
    v12 = (uint8_t *)&this->m_straw; /*0x42dde7*/
    v6 = &this->Delegate_field_14; /*0x42ddeb*/
    Srca = 4; /*0x42ddee*/
  }
  v7 = this->Delegate_field_10; /*0x42de0f*/
  if ( v7 > 0 ) /*0x42de14*/
  {
    Size = (unsigned int)(a3);
    if ( a3 >= v5 - v7 ) /*0x42de28*/
      Size = v5 - v7; /*0x42de2a*/
    memcpy(&v12[this->Delegate_field_10], v3, Size); /*0x42de3e*/
    v8 = Size + this->Delegate_field_10; /*0x42de4e*/
    v3 += Size; /*0x42de55*/
    this->Delegate_field_10 = v8; /*0x42de59*/
    a3 -= Size; /*0x42de5c*/
    if ( v8 == v5 ) /*0x42de60*/
    {
      if ( this->m_allocated ) /*0x42de62*/
        v9 = DecodeBitmapRGB(v12, v5, v6, Srca); /*0x42de88*/
      else
        v9 = EncodeBitmapRGB((char *)v12, v5, v6, Srca); /*0x42de75*/
      v13 = Delegate::Dispatch(this, (int)v6, v9); /*0x42de96*/
      this->Delegate_field_10 = 0; /*0x42de9a*/
    }
  }
  for ( ; a3 >= v5; a3 -= v5 ) /*0x42dea5*/
  {
    if ( this->m_allocated ) /*0x42dea7*/
      v10 = DecodeBitmapRGB((uint8_t *)v3, v5, v6, Srca); /*0x42dec9*/
    else
      v10 = EncodeBitmapRGB(v3, v5, v6, Srca); /*0x42deb8*/
    v3 += v5; /*0x42ded2*/
    v13 += Delegate::Dispatch(this, (int)v6, v10); /*0x42dee5*/
  }
  if ( a3 > 0 ) /*0x42def9*/
  {
    memcpy(v12, v3, a3); /*0x42df02*/
    this->Delegate_field_10 = a3; /*0x42df0e*/
  }
  return v13; /*0x42df15*/
}
} // namespace gamemd
// 0x631D10
namespace gamemd {
void * Delegate::Dispatch(Pipe * aP1, Pipe * aP2)
{
  int v3; // ecx

  v3 = this->m_count; /*0x631d10*/
  if ( v3 ) /*0x631d15*/
    return (*(int (__thiscall **)(int, int, int))(v3->q010)(v3, aP1, aP2); /*0x631d23*/
  else
    return aP2; /*0x631d29*/
}
} // namespace gamemd
// 0x6C95E0
namespace gamemd {
unsigned int * Delegate::GetField()
{
  *(unsigned int *)this = 0; /*0x6c95e6*/
  this->m_count = 0; /*0x6c95e8*/
  this->Delegate_field_08 = 0; /*0x6c95eb*/
  this->m_allocated = 0; /*0x6c95ee*/
  return this; /*0x6c95f1*/
}
} // namespace gamemd
// 0x6C9890
namespace gamemd {
void Delegate::Set(AbstractTypeClass * aP1)
{
  void * v3;
  int v4; // eax

  if ( this->m_count != aP1 ) /*0x6c989b*/
  {
    if ( aP1 ) /*0x6c989f*/
    {
      v3 = aP1->vtable3; /*0x6c98a1*/
      if ( v3 ) /*0x6c98a6*/
      {
        (*(void (__thiscall **)(int, unsigned int))(v3->q004)(v3, 0); /*0x6c98ac*/
        aP1->vtable3 = 0; /*0x6c98af*/
      }
    }
    v4 = (unsigned int)(this->m_count);
    if ( v4 ) /*0x6c98bb*/
      *(unsigned int *)(v4 + 8) = 0; /*0x6c98bd*/
    this->m_count = aP1; /*0x6c98c6*/
    if ( aP1 ) /*0x6c98c9*/
      aP1->vtable3 = this; /*0x6c98cb*/
  }
}
} // namespace gamemd
// 0x6C98E0
namespace gamemd {
int Delegate::Invoke(int a2, Straw * aP2)
{
  int v3; // ecx

  v3 = this->m_count; /*0x6c98e0*/
  if ( v3 ) /*0x6c98e5*/
    return (*(int (__thiscall **)(int, int, int))(v3->q008)(v3, a2, aP2); /*0x6c98f3*/
  else
    return 0; /*0x6c98f9*/
}
} // namespace gamemd
// 0x42DF40
namespace gamemd {
int Delegate::ProcessBitmapAndDispatch()
{
  int v2; // edi
  int v3; // edx
  unsigned int * v4;
  int v5; // eax

  v2 = 0; /*0x42df44*/
  v3 = this->Delegate_field_10; /*0x42df46*/
  if ( v3 ) /*0x42df4b*/
  {
    if ( this->m_allocated ) /*0x42df4d*/
    {
      v4 = (int)(&this->__pad_060);
      v5 = DecodeBitmapRGB((uint8_t *)(&this->Delegate_field_080), v3, (unsigned char *)(&this->Delegate_field_084), 3); /*0x42df6d*/
    }
    else
    {
      v4 = (int)(&this->q050);
      v5 = EncodeBitmapRGB((char *)(&this->Delegate_field_084), v3, (unsigned char *)(&this->Delegate_field_080), 4); /*0x42df5d*/
    }
    v2 = (int)(Delegate::Dispatch((unsigned int *)this, v4, v5));
    this->Delegate_field_10 = 0; /*0x42df7d*/
  }
  return v2 + GameClass::GetRelatedObject((unsigned int *)this); /*0x42df8d*/
}
} // namespace gamemd
// 0x4A2780
namespace gamemd {
int Delegate::StreamToBuffer(char * a1, int a3)
{
  int result; // eax
  unsigned int v7;
  void * v8;
  int v9; // eax
  int v10; // [esp+10h] [ebp-4h]

  result = 0; /*0x4a2786*/
  v10 = 0; /*0x4a278c*/
  if ( this->m_allocated ) /*0x4a2789*/
  {
    a1 = a1; /*0x4a2794*/
    if ( a1 ) /*0x4a279a*/
    {
      a3 = a3; /*0x4a279c*/
      if ( a3 > 0 ) /*0x4a27a2*/
      {
        do /*0x4a2805*/
        {
          v7 = this->m_pipe; /*0x4a27a4*/
          if ( v7 > 0 ) /*0x4a27a9*/
          {
            if ( v7 >= a3 ) /*0x4a27ad*/
              v7 = a3; /*0x4a27af*/
            memcpy(a1, (const void *)(this->m_allocated + this->m_straw), v7); /*0x4a27bc*/
            v8 = this->m_pipe - v7; /*0x4a27cf*/
            a3 -= v7; /*0x4a27d4*/
            this->m_straw += v7; /*0x4a27d6*/
            v10 += v7; /*0x4a27d9*/
            this->m_pipe = v8; /*0x4a27dd*/
            a1 += v7; /*0x4a27e0*/
          }
          if ( !a3 ) /*0x4a27e4*/
            break; /*0x4a27e4*/
          v9 = Delegate::Invoke(this, this->m_allocated, this->Delegate_field_10); /*0x4a27f0*/
          this->m_pipe = v9; /*0x4a27f7*/
          this->m_straw = 0; /*0x4a27fa*/
          if ( !v9 ) /*0x4a2801*/
            break; /*0x4a2801*/
        }
        while ( a3 > 0 ); /*0x4a2805*/
        return v10; /*0x4a2807*/
      }
    }
  }
  return result; /*0x4a280b*/
}
} // namespace gamemd
// 0x52AE20
namespace gamemd {
GenericNode * Delegate::Constructor_GenericNode(char a2)
{
  int v3; // ecx
  int v4; // eax

  if ( this ) /*0x52ae2d*/
  {
    v3 = this->Previous; /*0x52ae2f*/
    if ( v3 ) /*0x52ae34*/
    {
      v4 = this->q008; /*0x52ae36*/
      if ( v4 ) /*0x52ae3b*/
      {
        v4->Previous = v3; /*0x52ae3d*/
        *(unsigned int *)(this->Previous + 8) = this->q008; /*0x52ae46*/
        this->q008 = 0; /*0x52ae49*/
        this->Previous = 0; /*0x52ae4c*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x52ae54*/
    RA2_OPDEL(); /*0x52ae57*/
  return this; /*0x52ae61*/
}
} // namespace gamemd
// 0x52AE70
namespace gamemd {
int * Delegate::ClearVectorAndStraw(char a2)
{
  Vector::Clear((int)&this->m_allocated); /*0x52ae76*/
  Straw::Dtor(); /*0x52ae7d*/
  if ( (a2 & 1) != 0 ) /*0x52ae87*/
    RA2_OPDEL(); /*0x52ae8a*/
  return this; /*0x52ae94*/
}
} // namespace gamemd
// 0x52AEA0
namespace gamemd {
int * Delegate::DestroyStraw(char a2)
{
  Straw::Dtor(); /*0x52aea3*/
  if ( (a2 & 1) != 0 ) /*0x52aead*/
    RA2_OPDEL(); /*0x52aeb0*/
  return this; /*0x52aeba*/
}
} // namespace gamemd
// 0x52AEE0
namespace gamemd {
int * Delegate::DestroyPipe(char a2)
{
  Pipe::Dtor(); /*0x52aee3*/
  if ( (a2 & 1) != 0 ) /*0x52aeed*/
    RA2_OPDEL(); /*0x52aef0*/
  return this; /*0x52aefa*/
}
} // namespace gamemd