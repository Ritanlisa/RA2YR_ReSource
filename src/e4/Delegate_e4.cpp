// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_Delegate 1  // G57a3: e4 flat-carrier opt-in (suppress core utility_ext/stream_ext twin)
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
#include "e4/classes/DamageArea_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Pipe_e4.hpp"
#include "e4/classes/Straw_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply

// 0x42DDB0
namespace gamemd {  // G42.18 ns repair
int Delegate::ProcessBitmapStream(char * Src, int a3)
{

  char *v3; // ebp
  int v5; // esi
  unsigned char *v6; // ebx
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  unsigned __int8 *pad_14; // [esp+8h] [ebp-Ch]
  int v13; // [esp+Ch] [ebp-8h]
  int Size; // [esp+10h] [ebp-4h]
  int Srca; // [esp+18h] [ebp+4h]

  v3 = Src; /*0x42ddb4*/
  if ( !Src || a3 < 1 ) /*0x42ddc8*/
    return Delegate::Dispatch((Pipe *)this, (int)Src, a3); /*0x42df25*/
  v13 = 0; /*0x42ddd5*/
  if ( this->field_C ) /*0x42ddce*/
  {
    v5 = 4; /*0x42ddfb*/
    pad_14 = (unsigned __int8 *)this->Delegate_field_14; /*0x42de00*/
    v6 = &this->field_18; /*0x42de04*/
    Srca = 3; /*0x42de07*/
  }
  else
  {
    v5 = 3; /*0x42dde2*/
    pad_14 = (unsigned __int8 *)&this->field_18; /*0x42dde7*/
    v6 = this->Delegate_field_14; /*0x42ddeb*/
    Srca = 4; /*0x42ddee*/
  }
  v7 = this->field_10; /*0x42de0f*/
  if ( v7 > 0 ) /*0x42de14*/
  {
    Size = a3; /*0x42de24*/
    if ( a3 >= v5 - v7 ) /*0x42de28*/
      Size = v5 - v7; /*0x42de2a*/
    memcpy(&pad_14[this->field_10], v3, Size); /*0x42de3e*/
    v8 = Size + this->field_10; /*0x42de4e*/
    v3 += Size; /*0x42de55*/
    this->field_10 = v8; /*0x42de59*/
    a3 -= Size; /*0x42de5c*/
    if ( v8 == v5 ) /*0x42de60*/
    {
      if ( this->field_C ) /*0x42de62*/
        v9 = DecodeBitmapRGB(pad_14, v5, v6, Srca); /*0x42de88*/
      else
        v9 = EncodeBitmapRGB((char *)pad_14, v5, v6, Srca); /*0x42de75*/
      v13 = Delegate::Dispatch((Pipe *)this, (int)v6, v9); /*0x42de96*/
      this->field_10 = 0; /*0x42de9a*/
    }
  }
  for ( ; a3 >= v5; a3 -= v5 ) /*0x42dea5*/
  {
    if ( this->field_C ) /*0x42dea7*/
      v10 = DecodeBitmapRGB((unsigned __int8 *)v3, v5, v6, Srca); /*0x42dec9*/
    else
      v10 = EncodeBitmapRGB(v3, v5, v6, Srca); /*0x42deb8*/
    v3 += v5; /*0x42ded2*/
    v13 += Delegate::Dispatch((Pipe *)this, (int)v6, v10); /*0x42dee5*/
  }
  if ( a3 > 0 ) /*0x42def9*/
  {
    memcpy(pad_14, v3, a3); /*0x42df02*/
    this->field_10 = a3; /*0x42df0e*/
  }
  return v13; /*0x42df15*/

}
} // namespace gamemd
// 0x631D10
namespace gamemd {
int Delegate::Dispatch(int aP1, int aP2, void *a3, void *a4)
{


  int Pipe_field_0x04; // ecx
  Pipe_field_0x04 = (int)(this->m_count); /*0x631d10*/
  if ( Pipe_field_0x04 ) /*0x631d15*/
    return (*(int (**)(int, int, int))(*(unsigned int *)Pipe_field_0x04 + 16))(Pipe_field_0x04, aP1, aP2); /*0x631d23*/
  else
    return aP2; /*0x631d29*/

}
} // namespace gamemd
// 0x6C95E0
namespace gamemd {
unsigned int * Delegate::GetField(void *a1, void *a2)
{

  this->m_items = 0; /*0x6c95e6*/
  this->m_count = 0; /*0x6c95e8*/
  this->Delegate_field_08 = 0; /*0x6c95eb*/
  *&this->m_allocated = 0; /*0x6c95ee*/
  return &this->m_items; /*0x6c95f1*/

}
} // namespace gamemd
// 0x6C9890
namespace gamemd {
int Delegate::Set(int aP1, void *a2, void *a3)
{

  int result; // eax

  if ( this->m_count != aP1 ) /*0x6c989b*/
  {
    if ( aP1 ) /*0x6c989f*/
    {
      int v4; // ecx
      v4 = *(unsigned int *)(aP1 + 8); /*0x6c98a1*/
      if ( v4 ) /*0x6c98a6*/
      {
        (*(void (**)(int, unsigned int))(*(unsigned int *)v4 + 4))(v4, 0); /*0x6c98ac*/
        *(unsigned int *)(aP1 + 8) = 0; /*0x6c98af*/
      }
    }
    result = (int)(this->m_count); /*0x6c98b6*/
    if ( result ) /*0x6c98bb*/
      result->VtableStub_8 = 0; /*0x6c98bd*/
    this->m_count = aP1; /*0x6c98c6*/
    if ( aP1 ) /*0x6c98c9*/
      *(unsigned int *)(aP1 + 8) = (unsigned int)(this); /*0x6c98cb*/
  }
  return result; /*0x6c98ce*/

}
} // namespace gamemd
// 0x6C98E0
namespace gamemd {
int Delegate::Invoke(int a2, int aP2, void *a3)
{


  int Straw_field_0x04; // ecx
  Straw_field_0x04 = (int)(this->m_count); /*0x6c98e0*/
  if ( Straw_field_0x04 ) /*0x6c98e5*/
    return (*(int (**)(int, int, int))(*(unsigned int *)Straw_field_0x04 + 8))(Straw_field_0x04, a2, aP2); /*0x6c98f3*/
  else
    return 0; /*0x6c98f9*/

}
} // namespace gamemd
// 0x42DF40
namespace gamemd {
int Delegate::ProcessBitmapAndDispatch()
{

  void *pad_14; // edi
  int v5; // eax

  int v2 = 0; // edi /*0x42df44*/
  int v3 = this->field_10; // edx /*0x42df46*/
  if ( v3 ) /*0x42df4b*/
  {
    if ( this->field_C ) /*0x42df4d*/
    {
      pad_14 = &this->field_18; /*0x42df64*/
      v5 = DecodeBitmapRGB((unsigned __int8 *)this->Delegate_field_14, v3, &this->field_18, 3); /*0x42df6d*/
    }
    else
    {
      pad_14 = this->Delegate_field_14; /*0x42df54*/
      v5 = EncodeBitmapRGB(this->m_straw, v3, this->Delegate_field_14, 4); /*0x42df5d*/
    }
    v2 = ((Pipe *)this)->Dispatch((int)pad_14, v5); /*0x42df7b*/
    this->field_10 = 0; /*0x42df7d*/
  }
  return v2 + ((Pipe *)this)->GetRelatedObject(); /*0x42df8d*/

}
} // namespace gamemd
// 0x4A2780
namespace gamemd {
int Delegate::StreamToBuffer(char * a1, int a3)
{


  int result = 0; // eax /*0x4a2786*/
  int v10; // [esp+10h] [ebp-4h]
  v10 = 0; /*0x4a278c*/
  if ( *&this->m_allocated ) /*0x4a2789*/
  {
    char *v5 = a1; // ebp /*0x4a2794*/
    if ( a1 ) /*0x4a279a*/
    {
      int v6 = a3; // ebx /*0x4a279c*/
      if ( a3 > 0 ) /*0x4a27a2*/
      {
        do /*0x4a2805*/
        {
          signed int v7 = this->field_1C; // edi /*0x4a27a4*/
          if ( v7 > 0 ) /*0x4a27a9*/
          {
            if ( v7 >= v6 ) /*0x4a27ad*/
              v7 = v6; /*0x4a27af*/
            memcpy(v5, (const void *)(*&this->m_allocated + *&this->m_straw), v7); /*0x4a27bc*/
            int v8 = this->field_1C - v7; // ecx /*0x4a27cf*/
            v6 -= v7; /*0x4a27d4*/
            *&this->m_straw += v7; /*0x4a27d6*/
            v10 += v7; /*0x4a27d9*/
            this->field_1C = v8; /*0x4a27dd*/
            v5 += v7; /*0x4a27e0*/
          }
          if ( !v6 ) /*0x4a27e4*/
            break; /*0x4a27e4*/
          int v9; // eax
          v9 = ((Straw *)this)->Invoke(*&this->m_allocated, this->field_10); /*0x4a27f0*/
          this->field_1C = v9; /*0x4a27f7*/
          *&this->m_straw = 0; /*0x4a27fa*/
          if ( !v9 ) /*0x4a2801*/
            break; /*0x4a2801*/
        }
        while ( v6 > 0 ); /*0x4a2805*/
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

  int Previous; // ecx
  unsigned int *v4; // eax

  /* X11: vtable install elided (X67 star-deref, RHS vt_GenericNode) */  /*0x52ae27*/
  if ( this ) /*0x52ae2d*/
  {
    Previous = this->Previous; /*0x52ae2f*/
    if ( Previous ) /*0x52ae34*/
    {
      v4 = *(unsigned int **)this->Blowfish; /*0x52ae36*/
      if ( v4 ) /*0x52ae3b*/
      {
        v4[1] = Previous; /*0x52ae3d*/
        *(unsigned int *)(this->Previous + 8) = *(unsigned int *)this->Blowfish; /*0x52ae46*/
        *(unsigned int *)this->Blowfish = 0; /*0x52ae49*/
        this->Previous = 0; /*0x52ae4c*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x52ae54*/
    __3_YAXPAX_Z(this); /*0x52ae57*/
  return this->m_items; /*0x52ae61*/

}
} // namespace gamemd
// 0x52AE70
namespace gamemd {
int * Delegate::ClearVectorAndStraw(char a2)
{

  Vector::Clear((int)&this->m_allocated); /*0x52ae76*/
  ((Straw *)this)->Dtor(); /*0x52ae7d*/
  if ( (a2 & 1) != 0 ) /*0x52ae87*/
    __3_YAXPAX_Z(this); /*0x52ae8a*/
  return (int *)this->m_items; /*0x52ae94*/

}
} // namespace gamemd
// 0x52AEA0
namespace gamemd {
int * Delegate::DestroyStraw(char a2)
{
  this->Straw::Dtor(); /*0x52aea3*/
  if ( (a2 & 1) != 0 ) /*0x52aead*/
    operator delete((this)); /*0x52aeb0*/
  return (int *)this->m_items; /*0x52aeba*/
}
} // namespace gamemd
// 0x52AEE0
namespace gamemd {
int * Delegate::DestroyPipe(char a2)
{

  ((Pipe *)this)->Dtor(); /*0x52aee3*/
  if ( (a2 & 1) != 0 ) /*0x52aeed*/
    __3_YAXPAX_Z(this); /*0x52aef0*/
  return (int *)this->m_items; /*0x52aefa*/

}
} // namespace gamemd