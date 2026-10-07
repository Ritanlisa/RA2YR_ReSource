// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/core/utility_ext.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "utility_ext.hpp"
#include "core/ida_vtables.h"  // gC_vftable3
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int DeleteAndZero(...); }  // w16g4 raw call-form
namespace gamemd {
// ---- g57c5 W5 vocab (declaration-only) ----
void j_DeleteAndZero();  // g57c5 W5 vocab (csp)
// ---- g57c5 W5 end ----


// 0x7be5d0
int AllocCallback::Dispatch(int a1, int a2, unsigned int Block, size_t Size)
{
    unsigned int *result; // eax

    switch ( a2 ) /*0x7be5df*/
    {
      case 2: /*0x7be5df*/
        result = malloc(Size); /*0x7be5eb*/
        break; /*0x7be5f6*/
      case 3: /*0x7be5df*/
        free( (void *)(Block) ); /*0x7be5fc*/
        result = 0; /*0x7be604*/
        break; /*0x7be607*/
      case 4: /*0x7be5df*/
      case 5: /*0x7be5df*/
        result = Block; /*0x7be60c*/
        break; /*0x7be60f*/
      case 6: /*0x7be5df*/
        *(unsigned int *)Block = -1; /*0x7be614*/
        goto LABEL_6; /*0x7be614*/
      default:
  LABEL_6:
        result = 0; /*0x7be61a*/
        break; /*0x7be61a*/
    }
    return (int)(result); /*0x7be5f5*/
}
// 0x4f3840
int GraphicMenuImageItem::QueryInterface(char a2)
{
    ObjectClass *v3; // edi

    v3 = (ObjectClass *)*((unsigned int *)this + 12); /*0x4f3844*/
    *(unsigned int *)&this->vtable1 = (unsigned int)(void *)&GraphicMenuImageItem_vftable; /*0x4f3847*/
    if ( v3 ) /*0x4f384f*/
    {
      j_DeleteAndZero(v3); /*0x4f3853*/
      RA2_OPDEL(v3); /*0x4f3859*/
    }
    DeleteAndZero((ObjectClass *)((char *)this + 52)); /*0x4f3864*/
    GraphicMenuItem::Dtor((GraphicMenuItem *)this); /*0x4f386b*/
    if ( (a2 & 1) != 0 ) /*0x4f3875*/
      RA2_OPDEL(this); /*0x4f3878*/
    return this; /*0x4f3882*/
}
// 0x49ef40
int StringVector::StringVector::Add(unsigned int a2)  // g57b5 W4: raw 真值补参 (a2)
{
    int result; // eax
    int m_8; // edx
    unsigned int *i; // ecx

    if ( !IDA_LOBYTE(this->StringVector_field_0x0C) ) /*0x49ef40*/
      return 0; /*0x49ef48*/
    m_8 = this->StringVector_field_0x08; /*0x49ef4e*/
    result = 0; /*0x49ef51*/
    if ( m_8 <= 0 ) /*0x49ef55*/
      return -1; /*0x49ef6c*/
    for ( i = *(unsigned int **)&this->m_1[3]; *i != *(unsigned int *)a2; ++i ) /*0x49ef5b*/
    {
      if ( ++result >= m_8 ) /*0x49ef6a*/
        return -1; /*0x49ef6a*/
    }
    return result; /*0x49ef4a*/
} // namespace gamemd
}
