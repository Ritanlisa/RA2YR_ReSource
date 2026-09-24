// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/core/utility_ext.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "utility_ext.hpp"

namespace gamemd {
// 0x7be5d0
void AllocCallback::Dispatch() {}
  _DWORD *result; // eax

  switch ( a2 ) /*0x7be5df*/
  {
    case 2: /*0x7be5df*/
      result = malloc(Size); /*0x7be5eb*/
      break; /*0x7be5f6*/
    case 3: /*0x7be5df*/
      free(Block); /*0x7be5fc*/
      result = 0; /*0x7be604*/
      break; /*0x7be607*/
    case 4: /*0x7be5df*/
    case 5: /*0x7be5df*/
      result = Block; /*0x7be60c*/
      break; /*0x7be60f*/
    case 6: /*0x7be5df*/
      *Block = -1; /*0x7be614*/
      goto LABEL_6; /*0x7be614*/
    default:
  LABEL_6:
      result = 0; /*0x7be61a*/
      break; /*0x7be61a*/
  }
  return result; /*0x7be5f5*/
  return result; /*0x7be5f5*/
  return result; /*0x7be5f5*/
  return result; /*0x7be5f5*/
  return result; /*0x7be5f5*/
  return result; /*0x7be5f5*/
  return result; /*0x7be5f5*/
  return result; /*0x7be5f5*/
  return result; /*0x7be5f5*/
  return result; /*0x7be5f5*/
  return result; /*0x7be5f5*/
  return result; /*0x7be5f5*/

// 0x4f3840
void GraphicMenuImageItem::QueryInterface() {}
  void **v3; // edi

  v3 = (void **)*((_DWORD *)Block + 12); /*0x4f3844*/
  *(_DWORD *)Block = &GraphicMenuImageItem::`vftable'; /*0x4f3847*/
  if ( v3 ) /*0x4f384f*/
  {
    j_DeleteAndZero(v3); /*0x4f3853*/
    __3_YAXPAX_Z(v3); /*0x4f3859*/
  }
  DeleteAndZero((void **)Block + 13); /*0x4f3864*/
  GraphicMenuItem::Dtor((void ***)Block); /*0x4f386b*/
  if ( (a2 & 1) != 0 ) /*0x4f3875*/
    __3_YAXPAX_Z(Block); /*0x4f3878*/
  return Block; /*0x4f3882*/
  DeleteAndZero((void **)Block + 13); /*0x4f3864*/
  GraphicMenuItem::Dtor((void ***)Block); /*0x4f386b*/
  if ( (a2 & 1) != 0 ) /*0x4f3875*/
    __3_YAXPAX_Z(Block); /*0x4f3878*/
  return Block; /*0x4f3882*/
  DeleteAndZero((void **)Block + 13); /*0x4f3864*/
  GraphicMenuItem::Dtor((void ***)Block); /*0x4f386b*/
  if ( (a2 & 1) != 0 ) /*0x4f3875*/
    __3_YAXPAX_Z(Block); /*0x4f3878*/
  return Block; /*0x4f3882*/
  DeleteAndZero((void **)Block + 13); /*0x4f3864*/
  GraphicMenuItem::Dtor((void ***)Block); /*0x4f386b*/
  if ( (a2 & 1) != 0 ) /*0x4f3875*/
    __3_YAXPAX_Z(Block); /*0x4f3878*/
  return Block; /*0x4f3882*/
  DeleteAndZero((void **)Block + 13); /*0x4f3864*/
  GraphicMenuItem::Dtor((void ***)Block); /*0x4f386b*/
  if ( (a2 & 1) != 0 ) /*0x4f3875*/
    __3_YAXPAX_Z(Block); /*0x4f3878*/
  return Block; /*0x4f3882*/
  DeleteAndZero((void **)Block + 13); /*0x4f3864*/
  GraphicMenuItem::Dtor((void ***)Block); /*0x4f386b*/
  if ( (a2 & 1) != 0 ) /*0x4f3875*/
    __3_YAXPAX_Z(Block); /*0x4f3878*/
  return Block; /*0x4f3882*/
  DeleteAndZero((void **)Block + 13); /*0x4f3864*/
  GraphicMenuItem::Dtor((void ***)Block); /*0x4f386b*/
  if ( (a2 & 1) != 0 ) /*0x4f3875*/
    __3_YAXPAX_Z(Block); /*0x4f3878*/
  return Block; /*0x4f3882*/
  DeleteAndZero((void **)Block + 13); /*0x4f3864*/
  GraphicMenuItem::Dtor((void ***)Block); /*0x4f386b*/
  if ( (a2 & 1) != 0 ) /*0x4f3875*/
    __3_YAXPAX_Z(Block); /*0x4f3878*/
  return Block; /*0x4f3882*/
  DeleteAndZero((void **)Block + 13); /*0x4f3864*/
  GraphicMenuItem::Dtor((void ***)Block); /*0x4f386b*/
  if ( (a2 & 1) != 0 ) /*0x4f3875*/
    __3_YAXPAX_Z(Block); /*0x4f3878*/
  return Block; /*0x4f3882*/
  DeleteAndZero((void **)Block + 13); /*0x4f3864*/
  GraphicMenuItem::Dtor((void ***)Block); /*0x4f386b*/
  if ( (a2 & 1) != 0 ) /*0x4f3875*/
    __3_YAXPAX_Z(Block); /*0x4f3878*/
  return Block; /*0x4f3882*/
  DeleteAndZero((void **)Block + 13); /*0x4f3864*/
  GraphicMenuItem::Dtor((void ***)Block); /*0x4f386b*/
  if ( (a2 & 1) != 0 ) /*0x4f3875*/
    __3_YAXPAX_Z(Block); /*0x4f3878*/
  return Block; /*0x4f3882*/
  DeleteAndZero((void **)Block + 13); /*0x4f3864*/
  GraphicMenuItem::Dtor((void ***)Block); /*0x4f386b*/
  if ( (a2 & 1) != 0 ) /*0x4f3875*/
    __3_YAXPAX_Z(Block); /*0x4f3878*/
  return Block; /*0x4f3882*/

// 0x49ef40
void StringVector::Add() {}
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !this->q00C ) /*0x49ef40*/
    return 0; /*0x49ef48*/
  v3 = this->Capacity; /*0x49ef4e*/
  result = 0; /*0x49ef51*/
  if ( v3 <= 0 ) /*0x49ef55*/
    return -1; /*0x49ef6c*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x49ef5b*/
  {
    if ( ++result >= v3 ) /*0x49ef6a*/
      return -1; /*0x49ef6a*/
  }
  return result; /*0x49ef4a*/
  return result; /*0x49ef4a*/
  return result; /*0x49ef4a*/
  return result; /*0x49ef4a*/
  return result; /*0x49ef4a*/
  return result; /*0x49ef4a*/
  return result; /*0x49ef4a*/
  return result; /*0x49ef4a*/
  return result; /*0x49ef4a*/
  return result; /*0x49ef4a*/
  return result; /*0x49ef4a*/
  return result; /*0x49ef4a*/

