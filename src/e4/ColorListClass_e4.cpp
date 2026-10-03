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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x557F40)
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
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x488F00)
}
} // namespace gamemd