// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/system/waypoint.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "waypoint.hpp"

namespace gamemd {
// 0x5022f0
bool WaypointClass::IsCoordinateUsed(const CellStruct&) const
{
    unsigned int v6 = 0;  /* G37 hoist */
  signed int v2; // esi
  int *i; // ebx
  int v4; // eax
  int v5; // eax
  Array *v6; // ecx
  int v7; // edi
  int *Element; // eax
  int v9; // kr04_4
  int v10; // eax
  signed int v12; // [esp+10h] [ebp-8h]

  v2 = (int)((int *)(0));
  v12 = 0; /*0x502301*/
  for ( i = &this->padding_18[114]; ; ++i ) /*0x502305*/
  {
    if ( !*i ) /*0x50230b*/
    {
      v4 = (int)(operator new(0x40u));
      if ( v4 ) /*0x50231c*/
        v5 = WaypointPathClass::Construct(v4, v2); /*0x502321*/
      else
        v5 = 0; /*0x502328*/
      *i = v5; /*0x50232a*/
    }
    v6 = (Array *)*i; /*0x50232c*/
    v7 = 0; /*0x50232e*/
    if ( *(int *)(*i + 56) > 0 ) /*0x502335*/
      break; /*0x502335*/
  LABEL_13:
    v12 = ++v2; /*0x50238d*/
    if ( v2 >= 12 ) /*0x502391*/
      return 1; /*0x5023a0*/
  }
  while ( 1 ) /*0x502338*/
  {
    Element = (int *)Array::GetElement(v6, v7); /*0x502338*/
    v9 = *Element; /*0x50234a*/
    v10 = Element->q004 / 256; /*0x50235b*/
    if ( (uint16_t)(v9 / 256) == *CellStruct& && (unsigned short)v10 == CellStruct&[1] && v12 != this->padding_18[113] ) /*0x502378*/
      return 0; /*0x502397*/
    v6 = (Array *)*i; /*0x50237a*/
    if ( ++v7 >= *(unsigned int *)(*i + 56) ) /*0x502380*/
    {
      v2 = v12; /*0x502382*/
      goto LABEL_13; /*0x502382*/
    }
  }
}
  while ( 1 ) /*0x502338*/
  {
    Element = (int *)Array::GetElement(v6, v7); /*0x502338*/
    v9 = *Element; /*0x50234a*/
    v10 = Element[1] / 256; /*0x50235b*/
    if ( (uint16_t)(v9 / 256) == *a2 && (unsigned short)v10 == a2[1] && v12 != this->padding_18[113] ) /*0x502378*/
      return 0; /*0x502397*/
    v6 = (Array *)*i; /*0x50237a*/
    if ( ++v7 >= *(unsigned int *)(*i + 56) ) /*0x502380*/
    {
      v2 = v12; /*0x502382*/
      goto LABEL_13; /*0x502382*/
    }
  }
}