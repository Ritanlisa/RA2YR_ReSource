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
namespace gamemd {
int ColorListClass::SetColor()
{

  int v1; // eax

  v1 = *((unsigned int *)this + 91); /*0x557ae0*/
  if ( *((unsigned int *)this + 17) > v1 ) /*0x557aeb*/
    return *(unsigned int *)(*((unsigned int *)this + 14) + 4 * v1); /*0x557af3*/
  else
    return 0; /*0x557aed*/

}
} // namespace gamemd
// 0x557F40
namespace gamemd {
int ColorListClass::Clear(unsigned int a2)
{

  int result; // eax
  int v4; // ecx

  result = a2; /*0x557f40*/
  if ( a2 >= *((unsigned int *)this + 17) ) /*0x557f4a*/
  {
    *((unsigned int *)this + 91) = 0; /*0x557f9b*/
  }
  else
  {
    *((unsigned int *)this + 91) = a2; /*0x557f4c*/
    (*(void (**))(*(unsigned int *)this->__pad_0 + 72))(this); /*0x557f56*/
    if ( *((unsigned int *)this + 91) < *((unsigned int *)this + 92) ) /*0x557f67*/
      (*(void (**)(ListClass *, unsigned int))(*(unsigned int *)this->__pad_0 + 192))((ListClass *)this, *((unsigned int *)this + 91)); /*0x557f6e*/
    v4 = *((unsigned int *)this + 20); /*0x557f74*/
    result = *((unsigned int *)this + 91); /*0x557f7d*/
    if ( result >= v4 + *((unsigned int *)this + 92) ) /*0x557f87*/
      return (*(int (**)(ListClass *, int))(*(unsigned int *)this->__pad_0 + 192))((ListClass *)this, result - v4 + 1); /*0x557f91*/
  }
  return result; /*0x557f97*/

}
} // namespace gamemd
// 0x558010
namespace gamemd {
void ColorListClass::RemoveColor(wchar_t * String2)
{

  int v3; // esi

  if ( String2 && *((int *)this + 17) > 0 ) /*0x558022*/
  {
    v3 = 0; /*0x558024*/
    while ( _wcsicmp(*(const wchar_t **)(*((unsigned int *)this + 14) + 4 * v3), String2) ) /*0x55803c*/
    {
      if ( ++v3 >= *((unsigned int *)this + 17) ) /*0x558044*/
        return; /*0x558044*/
    }
    (*(void (**)(ListClass *, int))(*(unsigned int *)this->__pad_0 + 184))((ListClass *)this, v3); /*0x558051*/
  }

}
} // namespace gamemd
// 0x488EE0
namespace gamemd {
int ColorListClass::GetColor(int a2)
{

  return (*(int (**)(ColorListClass *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 204))(this, a2, 0); /*0x488eef*/

}
} // namespace gamemd
// 0x488F00
namespace gamemd {
ColorListClass * ColorListClass::QueryInterface(char * Block, char a2)
{

  int v3; // eax
  char *v4; // esi
  void *v5; // eax

  v3 = *((unsigned int *)Block + 93); /*0x488f05*/
  v4 = (char *)Block + 372; /*0x488f0b*/
  *(unsigned int *)Block->__pad_0 = &vt_ColorListClass; /*0x488f13*/
  (*(void (**)(char *))(v3 + 12))((char *)Block + 372); /*0x488f19*/
  *((unsigned int *)Block + 100) = 0; /*0x488f1e*/
  v5 = (void *)*((unsigned int *)v4 + 1); /*0x488f24*/
  *(unsigned int *)v4 = (unsigned int)(&vt_VectorClass); /*0x488f29*/
  if ( v5 && v4[13] ) /*0x488f31*/
  {
    __3_YAXPAX_Z(v5); /*0x488f37*/
    *((unsigned int *)v4 + 1) = 0; /*0x488f3f*/
  }
  v4[13] = 0; /*0x488f44*/
  *((unsigned int *)v4 + 2) = 0; /*0x488f47*/
  ((ListClass *)((ListClass *)Block))->Destruct(); /*0x488f4a*/
  if ( (a2 & 1) != 0 ) /*0x488f54*/
    __3_YAXPAX_Z(Block); /*0x488f57*/
  return Block->__pad_0; /*0x488f61*/

}
} // namespace gamemd