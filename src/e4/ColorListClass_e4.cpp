// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ColorListClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ColorScheme_e4.hpp"
#include "e4/classes/ListClass_e4.hpp"

// 0x557AE0
namespace gamemd {  // G42.18 ns repair
int ColorListClass::SetColor()
{

  int v1 = this->u32_16C; // eax /*0x557ae0*/
  if ( this->u32_44 > v1 ) /*0x557aeb*/
    return *(unsigned int *)(this->u32_38 + 4 * v1); /*0x557af3*/
  else
    return 0; /*0x557aed*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x557F40
namespace gamemd {
int ColorListClass::Clear(unsigned int a2)
{


  int result = a2; // eax /*0x557f40*/
  if ( a2 >= this->u32_44 ) /*0x557f4a*/
  {
    this->u32_16C = 0; /*0x557f9b*/
  }
  else
  {
    this->u32_16C = a2; /*0x557f4c*/
    (*(void (**)(ListClass *))(*(unsigned int *)this->vtable1 + 72))(this); /*0x557f56*/
    if ( this->u32_16C < this->u32_170 ) /*0x557f67*/
      (*(void (**)(ListClass *, unsigned int))(*(unsigned int *)this->vtable1 + 192))(this, this->u32_16C); /*0x557f6e*/
    int v4 = this->u32_50; // ecx /*0x557f74*/
    result = this->u32_16C; /*0x557f7d*/
    if ( result >= v4 + this->u32_170 ) /*0x557f87*/
      return (*(int (**)(ListClass *, int))(*(unsigned int *)this->vtable1 + 192))(this, result - v4 + 1); /*0x557f91*/
  }
  return result; /*0x557f97*/

}
} // namespace gamemd
// 0x558010
namespace gamemd {
void ColorListClass::RemoveColor(wchar_t * String2)
{


  if ( String2 && this->u32_44 > 0 ) /*0x558022*/
  {
    int v3 = 0; // esi /*0x558024*/
    while ( _wcsicmp(*(const wchar_t **)(this->u32_38 + 4 * v3), String2) ) /*0x55803c*/
    {
      if ( ++v3 >= this->u32_44 ) /*0x558044*/
        return; /*0x558044*/
    }
    (*(void (**)(ListClass *, int))(*(unsigned int *)this->vtable1 + 184))(this, v3); /*0x558051*/
  }

}
} // namespace gamemd
// 0x488EE0
namespace gamemd {
int ColorListClass::GetColor(int a2)
{

  return (*(int (**)(ColorListClass *, int, unsigned int))(*(unsigned int *)this->vtable1 + 204))(this, a2, 0); /*0x488eef*/

}
} // namespace gamemd
// 0x488F00
namespace gamemd {
ColorListClass * ColorListClass::QueryInterface(char * Block, char a2)
{

  int v3; // eax
  v3 = *((unsigned int *)Block + 93); /*0x488f05*/
  char *v4; // esi
  v4 = (char *)Block + 372; /*0x488f0b*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_ColorListClass) */  /*0x488f13*/
  (*(void (**)(char *))(v3 + 12))((char *)Block + 372); /*0x488f19*/
  *((unsigned int *)Block + 100) = 0; /*0x488f1e*/
  void *v5; // eax
  v5 = (void *)v4->__pad_004; /*0x488f24*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass) */  /*0x488f29*/
  if ( v5 && v4[13] ) /*0x488f31*/
  {
    operator delete((v5)); /*0x488f37*/
    v4->__pad_004 = 0; /*0x488f3f*/
  }
  v4[13] = 0; /*0x488f44*/
  v4->u32_8 = 0; /*0x488f47*/
  ((ListClass *)Block)->Destruct(); /*0x488f4a*/
  if ( (a2 & 1) != 0 ) /*0x488f54*/
    operator delete((Block)); /*0x488f57*/
  return Block->tail_0; /*0x488f61*/
}
} // namespace gamemd