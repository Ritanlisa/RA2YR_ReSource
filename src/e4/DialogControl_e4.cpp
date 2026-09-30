// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DialogControl_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4E1450
namespace gamemd {
int DialogControl::Hide()
{

  int v1; // eax

  v1 = *(unsigned int *)this->__pad_0; /*0x4e1450*/
  *((unsigned char *)this + 30) = 0; /*0x4e1452*/
  *((unsigned char *)this + 28) = 1; /*0x4e1456*/
  return (*(int (**)(void))(v1 + 84))();

}
} // namespace gamemd
// 0x4E1460
namespace gamemd {
void DialogControl::Show()
{

  BYTE2(this->Image) = 1; /*0x4e1462*/
  LOBYTE(this->Image) = 1; /*0x4e1465*/
  return (*(int (**)(ShpButtonClass *))(*(unsigned int *)this->__pad_0 + 84))(this);

}
} // namespace gamemd
// 0x4E1470
namespace gamemd {
int DialogControl::IsHidden()
{

  return *((unsigned char *)this + 30) == 0; /*0x4e147a*/

}
} // namespace gamemd
// 0x623340
namespace gamemd {
void DialogControl::Constructor()
{

  unsigned int *v2; // eax
  unsigned int *v3; // eax

  memset(this, 0, 0x200u); /*0x62334d*/
  *((unsigned int *)this + 26) = 11; /*0x62334f*/
  *((unsigned int *)this + 25) = g_FogOfWarState; /*0x62335d*/
  v2 = (unsigned int *)__2_YAPAXI_Z(4u); /*0x623360*/
  if ( v2 ) /*0x62336c*/
    v3 = unknown_libname_74(v2); /*0x623370*/
  else
    v3 = 0; /*0x623377*/
  *((unsigned int *)this + 15) = v3; /*0x623379*/
  *((unsigned int *)this + 16) = 0; /*0x62337c*/
  *((unsigned int *)this + 23) = 0; /*0x62337f*/
  *((unsigned int *)this + 36) = -1; /*0x623382*/
  return this->__pad_0; /*0x62338e*/

}
} // namespace gamemd