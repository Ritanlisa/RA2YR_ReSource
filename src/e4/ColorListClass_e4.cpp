// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ColorListClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ColorScheme_e4.hpp"

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
  if ( a2 >= *((char *)this + 17) ) /*0x557f4a*/
  {
    *((char *)this + 91) = 0; /*0x557f9b*/
  }
  else
  {
    *((char *)this + 91) = a2; /*0x557f4c*/
    (*(void (**)(ListClass *))(*(unsigned int *)this->__pad_0 + 72))(this);
    if ( *((char *)this + 91) < *((char *)this + 92) ) /*0x557f67*/
      if ( *((unsigned int *)this + 91) < *((unsigned int *)this + 92) ) (*(void (**)(ListClass *, unsigned int))(*(unsigned int *)this->__pad_0 + 192))(this, *((unsigned int *)this + 91));;
    v4 = *((char *)this + 20); /*0x557f74*/
    result = *((char *)this + 91); /*0x557f7d*/
    if ( result >= v4 + *((char *)this + 92) ) /*0x557f87*/
      if ( result >= v4 + *((unsigned int *)this + 92) ) return (*(int (**)(ListClass *, int))(*(unsigned int *)this->__pad_0 + 192))(this, result - v4 + 1);;
  }
  return result; /*0x557f97*/

}
} // namespace gamemd
// 0x558010
namespace gamemd {
void ColorListClass::RemoveColor(wchar_t * String2)
{

  int v3; // esi

  if ( String2 && (int)*((unsigned int *)this + 17) > 0 ) /*0x558022*/
  {
    v3 = 0; /*0x558024*/
    while ( _wcsicmp(*(const wchar_t **)(*((unsigned int *)this + 14) + 4 * v3), String2) ) /*0x55803c*/
    {
      if ( ++v3 >= *((unsigned int *)this + 17) ) /*0x558044*/
        return; /*0x558044*/
    }
    void ColorListClass::RemoveColor(ListClass *this, wchar_t *String2)
  }

}
} // namespace gamemd
// 0x488EE0
namespace gamemd {
int ColorListClass::GetColor(int a2)
{

  int ColorListClass::GetColor(ColorListClass *this, int a2)

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
  v4 = Block + 372; /*0x488f0b*/
  *(unsigned int *)Block = &vt_ColorListClass; /*0x488f13*/
  (*(void (**)(char *))(v3 + 12))(Block + 372); /*0x488f19*/
  *((unsigned int *)Block + 100) = 0; /*0x488f1e*/
  v5 = (void *)*((unsigned int *)v4 + 1); /*0x488f24*/
  *(unsigned int *)v4 = &vt_VectorClass_int; /*0x488f29*/
  if ( v5 && v4[13] ) /*0x488f31*/
  {
    RA2_OPDEL(v5); /*0x488f37*/
    *((unsigned int *)v4 + 1) = 0; /*0x488f3f*/
  }
  v4[13] = 0; /*0x488f44*/
  *((unsigned int *)v4 + 2) = 0; /*0x488f47*/
  ListClass::Destruct(Block); /*0x488f4a*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x488f54*/
    RA2_OPDEL(Block); /*0x488f57*/
  return (ColorListClass *)Block; /*0x488f61*/

}
} // namespace gamemd