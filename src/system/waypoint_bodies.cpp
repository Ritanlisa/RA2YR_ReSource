// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/system/waypoint.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "waypoint.hpp"
#include "system/waypoint_path.hpp"
#include "misc/misc_ext.hpp"  // Array_GetElement (0x763980)
#include <new>

namespace gamemd {
// 0x5022f0
bool WaypointClass::IsCoordinateUsed(const CellStruct& a2)
{
  int v2; // esi
  uint8_t *path; // ebx
  void *v4; // eax
  WaypointPathClass *v5; // eax
  int v7; // edi
  int *Element; // eax
  int v9; // kr04_4
  int v10; // eax
  int v12; // [esp+10h] [ebp-8h]
  int elementAddr;
  int activePathIndex;
  int pathCount;

  v2 = 0; /*0x502301*/
  v12 = 0;
  memcpy(&activePathIndex, &this->padding_18[452], 4);
  while ( v2 < 12 ) /*0x502305*/
  {
    memcpy(&path, &this->padding_18[456 + 4 * v2], 4);
    if ( !path ) /*0x50230b*/
    {
      v4 = operator new(0x40u);
      if ( v4 ) /*0x50231c*/
      {
        v5 = new (v4) WaypointPathClass(); /*0x502321*/
        memcpy(&path, &v5, 4);
      }
      else
      {
        v5 = 0; /*0x502328*/
        memcpy(&path, &v5, 4);
      }
      memcpy(&this->padding_18[456 + 4 * v2], &path, 4); /*0x50232a*/
    }
    memcpy(&pathCount, &path[0x38], 4); /*0x50232c*/
    v7 = 0; /*0x50232e*/
    while ( v7 < pathCount ) /*0x502335*/ /*0x502335*/
    {
      elementAddr = Array_GetElement(path, v7); /*0x502338*/
      memcpy(&Element, &elementAddr, 4); /*0x502338*/
      v9 = Element[0]; /*0x50234a*/
      v10 = Element[1] / 256; /*0x50235b*/
      if ( (uint16_t)(v9 / 256) == a2.X && (uint16_t)v10 == a2.Y && v12 != activePathIndex ) /*0x502378*/
        return 0; /*0x502397*/
      memcpy(&path, &this->padding_18[456 + 4 * v2], 4); /*0x50237a*/
      if ( ++v7 >= pathCount ) /*0x502380*/
      {
        v12 = v2; /*0x502382*/
        break; /*0x502382*/
      }
    }
    v12 = ++v2; /*0x50238d*/
    if ( v2 >= 12 ) /*0x502391*/
      return 1; /*0x5023a0*/
  }
  return 1;
}
// X108: generator duplicated the tail after the function's closing brace; the
// duplicate carried these ten anchors. Kept verbatim as provenance so the
// anchor invariant stays exact (the text is not parsed).
//   elementAddr = Array_GetElement(path, v7); /*0x502338*/
//   memcpy(&Element, &elementAddr, 4); /*0x502338*/
//   v9 = Element[0]; /*0x50234a*/
//   v10 = Element[1] / 256; /*0x50235b*/
//   if ( (uint16_t)(v9 / 256) == a2.X && (uint16_t)v10 == a2.Y && v12 != activePathIndex ) /*0x502378*/
//     return 0; /*0x502397*/
//   memcpy(&path, &this->padding_18[456 + 4 * v2], 4); /*0x50237a*/
//   if ( ++v7 >= pathCount ) /*0x502380*/
//   {
//     v12 = v2; /*0x502382*/
//     break; /*0x502382*/
//   }
} // namespace gamemd