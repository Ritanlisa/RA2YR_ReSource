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
    *((unsigned int *)this + 120) = 0;
    *((unsigned int *)this + 112) = 1;
  return (*(int (**)(void))(v1 + 84))();
}
} // namespace gamemd
// 0x4E1460
namespace gamemd {
void DialogControl::Show()
{
    *((unsigned int *)this + 120) = 1;
    *((unsigned int *)this + 112) = 1;
  return (*(int (**)(GadgetClass *))(*(unsigned int *)this->__pad_0 + 84))(this);
}
} // namespace gamemd
// 0x4E1470
namespace gamemd {
int DialogControl::IsHidden()
{
    return *((unsigned int *)this + 120) == 0;
}
} // namespace gamemd
// 0x623340
namespace gamemd {
void DialogControl::Constructor()
{
  unsigned int *v2; // eax
  unsigned int *v3; // eax

  memset(0, 0x200u); /*0x62334d*/
    *((unsigned int *)this + 104) = 11;
    *((unsigned int *)this + 100) = MEMORY[0x87F7E8][29498];
  v2 = (unsigned int *)RA2_OPNEW(4u); /*0x623360*/
  if ( v2 ) /*0x62336c*/
    v3 = unknown_libname_74(v2); /*0x623370*/
  else
    v3 = 0; /*0x623377*/
    *((unsigned int *)this + 60) = v3;
    *((unsigned int *)this + 64) = 0;
    *((unsigned int *)this + 92) = 0;
    *((unsigned int *)this + 144) = -1;
  return this; /*0x62338e*/
}
} // namespace gamemd