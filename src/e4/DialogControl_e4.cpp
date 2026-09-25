// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DialogControl_e4.hpp"
#include "e4/e4_protos.h"

// 0x4E1450
namespace gamemd {
int DialogControl::Hide()
{
  int v1; // eax

  v1 = *(_DWORD *)this; /*0x4e1450*/
  *(&this->u32_C0) = 0; /*0x4e1452*/
  *(&this->q0088) = 1; /*0x4e1456*/
  return (*(int (**)(void))(v1 + 84))();
}
} // namespace gamemd
// 0x4E1460
namespace gamemd {
int DialogControl::Show()
{
  *(&this->u32_C0) = 1; /*0x4e1462*/
  *(&this->q0088) = 1; /*0x4e1465*/
  return 0;
}
} // namespace gamemd
// 0x4E1470
namespace gamemd {
int DialogControl::IsHidden()
{
  return *(&this->u32_C0) == 0; /*0x4e147a*/
}
} // namespace gamemd
// 0x623340
namespace gamemd {
unsigned int * DialogControl::Constructor()
{
  void *v2; // eax
  int v3; // eax

  memset(0, 0x200u); /*0x62334d*/
  *(&this->q0086) = 11; /*0x62334f*/
  *(&this->q0085) = g_FogOfWarState; /*0x62335d*/
  v2 = RA2_OPNEW(4u); /*0x623360*/
  if ( v2 ) /*0x62336c*/
    v3 = unknown_libname_74(v2); /*0x623370*/
  else
    v3 = 0; /*0x623377*/
  *(&this->q0045) = v3; /*0x623379*/
  *(&this->q0046) = 0; /*0x62337c*/
  *(&this->q0083) = 0; /*0x62337f*/
  *(&this->u32_C6) = -1; /*0x623382*/
  return this; /*0x62338e*/
}
} // namespace gamemd