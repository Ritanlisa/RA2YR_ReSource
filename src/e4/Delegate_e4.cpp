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
#include "e4/classes/DamageArea_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Pipe_e4.hpp"
#include "e4/classes/Straw_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply

// 0x42DDB0
namespace gamemd {
int Delegate::ProcessBitmapStream(char * Src, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x42DDB0)
}
} // namespace gamemd
// 0x631D10
namespace gamemd {
int Delegate::Dispatch(int aP1, int aP2)
{

  int Pipe_field_0x04; // ecx

  Pipe_field_0x04 = this->Pipe_field_0x04; /*0x631d10*/
  if ( Pipe_field_0x04 ) /*0x631d15*/
    return (*(int (**)(int, int, int))(*(unsigned int *)Pipe_field_0x04 + 16))(Pipe_field_0x04, (int)aP1, (int)aP2); /*0x631d23*/
  else
    return aP2; /*0x631d29*/

}
} // namespace gamemd
// 0x6C95E0
namespace gamemd {
_DWORD * Delegate::GetField()
{

  this->m_items = 0; /*0x6c95e6*/
  this->m_count = 0; /*0x6c95e8*/
  this->Delegate_field_08 = 0; /*0x6c95eb*/
  *(unsigned int *)&this->m_allocated = 0; /*0x6c95ee*/
return (unsigned int *)&this->m_items; /*0x6c95f1*/

}
} // namespace gamemd
// 0x6C9890
namespace gamemd {
int Delegate::Set(int aP1)
{

  int result; // eax
  int v4; // ecx

  if ( this->Straw_field_0x04 != (unsigned int)(aP1) ) /*0x6c989b*/
  {
    if ( aP1 ) /*0x6c989f*/
    {
      v4 = *(unsigned int *)(aP1 + 8); /*0x6c98a1*/
      if ( v4 ) /*0x6c98a6*/
      {
        (*(void (**)(int, unsigned int))(*(unsigned int *)v4 + 4))(v4, 0); /*0x6c98ac*/
        *(unsigned int *)(aP1 + 8) = 0; /*0x6c98af*/
      }
    }
    result = (unsigned int)(this->Straw_field_0x04);
    if ( result ) /*0x6c98bb*/
      *(unsigned int *)(result + 8) = 0; /*0x6c98bd*/
    this->Straw_field_0x04 = (unsigned int)(aP1); /*0x6c98c6*/
    if ( aP1 ) /*0x6c98c9*/
      *(unsigned int *)(aP1 + 8) = (unsigned int)(this); /*0x6c98cb*/
  }
  return result; /*0x6c98ce*/

}
} // namespace gamemd
// 0x6C98E0
namespace gamemd {
int Delegate::Invoke(int a2, int aP2)
{

  int Straw_field_0x04; // ecx

  Straw_field_0x04 = this->Straw_field_0x04; /*0x6c98e0*/
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

  int v2; // edi
  int v3; // edx
  void *pad_14; // edi
  int v5; // eax

  v2 = 0; /*0x42df44*/
  v3 = this->field_10; /*0x42df46*/
  if ( v3 ) /*0x42df4b*/
  {
    if ( this->field_C ) /*0x42df4d*/
    {
      pad_14 = (void *)((int)(&this->field_18));
      v5 = (int)(DecodeBitmapRGB((gamemd::Pipe *)((uint8_t *)this->__pad_14), v3,(unsigned char *)(&this->field_18), 3));
    }
    else
    {
      pad_14 = (void *)((int)(this->__pad_14));
      v5 = (int)(EncodeBitmapRGB((gamemd::Pipe *)((char *)&this->field_18), v3,(unsigned char *)(this->__pad_14), 4));
    }
    v2 = (int)(((Delegate*)((Pipe *)this))->Dispatch((int)pad_14, v5));
    this->field_10 = 0; /*0x42df7d*/
  }
  return v2 + ((GameClass*)(Pipe *)this)->GetRelatedObject(); /*0x42df8d*/

}
} // namespace gamemd
// 0x4A2780
namespace gamemd {
int Delegate::StreamToBuffer(char * a1, int a3)
{

  int result; // eax
  char *v5; // ebp
  int v6; // ebx
  signed int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // [esp+10h] [ebp-4h]

  result = 0; /*0x4a2786*/
  v10 = 0; /*0x4a278c*/
  if ( *(unsigned int *)&this->__pad_0[12] ) /*0x4a2789*/
  {
    v5 = a1; /*0x4a2794*/
    if ( a1 ) /*0x4a279a*/
    {
      v6 = a3; /*0x4a279c*/
      if ( a3 > 0 ) /*0x4a27a2*/
      {
        do /*0x4a2805*/
        {
          v7 = this->field_1C; /*0x4a27a4*/
          if ( v7 > 0 ) /*0x4a27a9*/
          {
            if ( v7 >= v6 ) /*0x4a27ad*/
              v7 = v6; /*0x4a27af*/
            memcpy(v5, (const void *)(*(unsigned int *)&this->__pad_0[12] + *(unsigned int *)&this->__pad_14[4]), v7); /*0x4a27bc*/
            v8 = this->field_1C - v7; /*0x4a27cf*/
            v6 -= v7; /*0x4a27d4*/
            *(unsigned int *)&this->__pad_14[4] += v7; /*0x4a27d6*/
            v10 += v7; /*0x4a27d9*/
            this->field_1C = v8; /*0x4a27dd*/
            v5 += v7; /*0x4a27e0*/
          }
          if ( !v6 ) /*0x4a27e4*/
            break; /*0x4a27e4*/
          v9 = ((Delegate *)((Straw *)this))->Invoke(*(unsigned int *)&this->__pad_0[12], this->field_10); /*0x4a27f0*/
          this->field_1C = v9; /*0x4a27f7*/
          *(unsigned int *)&this->__pad_14[4] = 0; /*0x4a27fa*/
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
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x52AE20)
}
} // namespace gamemd
// 0x52AE70
namespace gamemd {
int * Delegate::ClearVectorAndStraw(char a2)
{

  ((Vector *)((int)&this->__pad_0[12]))->Clear(); /*0x52ae76*/
  ((Straw*)(Straw *)this)->Dtor(); /*0x52ae7d*/
  if ( (a2 & 1) != 0 ) /*0x52ae87*/
    __3_YAXPAX_Z(this); /*0x52ae8a*/
  return (int *)this->__pad_0; /*0x52ae94*/

}
} // namespace gamemd
// 0x52AEA0
namespace gamemd {
int * Delegate::DestroyStraw(char a2)
{

  ((Straw*)(Straw *)this)->Dtor(); /*0x52aea3*/
  if ( (a2 & 1) != 0 ) /*0x52aead*/
    __3_YAXPAX_Z(this); /*0x52aeb0*/
  return (int *)this->__pad_0; /*0x52aeba*/

}
} // namespace gamemd
// 0x52AEE0
namespace gamemd {
int * Delegate::DestroyPipe(char a2)
{

  ((Pipe*)(Pipe *)this)->Dtor(); /*0x52aee3*/
  if ( (a2 & 1) != 0 ) /*0x52aeed*/
    __3_YAXPAX_Z(this); /*0x52aef0*/
  return (int *)this->__pad_0; /*0x52aefa*/

}
} // namespace gamemd