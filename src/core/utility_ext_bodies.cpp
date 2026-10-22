// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/core/utility_ext.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "utility_ext.hpp"
#include "core/ida_vtables.h"  // gC_vftable3
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int DeleteAndZero(ObjectClass *p_this); }  // x4:ida@0x7b46f0
namespace gamemd { void GraphicMenuItem_Destructor(void *p_this); }  // 0x4F3A70 free-form (menu_globals_gen.cpp)
namespace gamemd {
// ---- g57c5 W5 vocab (declaration-only) ----
extern void j_DeleteAndZero(void *a1);  // 0x5D0580 thunk -> DeleteAndZero
// ---- g57c5 W5 end ----


// 0x7be5d0
int AllocCallback::Dispatch(int a1, int a2, unsigned int Block, size_t Size)
{
  unsigned int *result; // eax

  switch ( a2 ) /*0x7be5df*/
  {
    case 2: /*0x7be5df*/
      result = (unsigned int *)(malloc(Size)); /*0x7be5eb*/
      break; /*0x7be5f6*/
    case 3: /*0x7be5df*/
      free((void *)(Block)); /*0x7be5fc*/
      result = 0; /*0x7be604*/
      break; /*0x7be607*/
    case 4: /*0x7be5df*/
    case 5: /*0x7be5df*/
      result = (unsigned int *)(Block); /*0x7be60c*/
      break; /*0x7be60f*/
    case 6: /*0x7be5df*/
      *(unsigned int *)(Block) = -1; /*0x7be614*/
      goto LABEL_6; /*0x7be614*/
    default:
  LABEL_6:
      result = 0; /*0x7be61a*/
      break; /*0x7be61a*/
  }
  return (int)(result);
}
// 0x4f3840
GraphicMenuImageItem* GraphicMenuImageItem::QueryInterface(char a2)
{
  ObjectClass *v3; // edi

  v3 = (ObjectClass *)this->u32_30; /*0x4f3844*/
  /* X11: ptr_0 install elided (implicit via class virtuals 0x4f3847) — binary-proven install, was 0 */
  if ( v3 ) /*0x4f384f*/
  {
    j_DeleteAndZero(v3); /*0x4f3853*/
    operator delete((v3)); /*0x4f3859*/
  }
  j_DeleteAndZero(&this->q034); /*0x4f3864*/
  GraphicMenuItem_Destructor(this); /*0x4f386b*/
  if ( (a2 & 1) != 0 ) /*0x4f3875*/
    operator delete((this)); /*0x4f3878*/
  return this; /*0x4f3882*/
}
// 0x49ef40
int StringVector::Add(unsigned int a2)  // g57b5 W4: raw 真值补参 (a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !(this->m_C) ) /*0x49ef40*/
    return 0; /*0x49ef48*/
  m_8 = this->q008; /*0x49ef4e*/
  result = 0; /*0x49ef51*/
  if ( m_8 <= 0 ) /*0x49ef55*/
    return -1; /*0x49ef6c*/
  memcpy(&i, &this->q004, sizeof(i));
  for ( ; *i != *(unsigned int *)(a2); ++i ) /*0x49ef5b*/
  {
    if ( ++result >= m_8 ) /*0x49ef6a*/
      return -1; /*0x49ef6a*/
  }
  return result; /*0x49ef4a*/
}
} // namespace gamemd