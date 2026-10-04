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
  this->u32_1E = 0; /*0x4e1452*/
  this->u32_1C = 1; /*0x4e1456*/
  return (*(int (**)(void))(v1 + 84))();

}
} // namespace gamemd
// 0x4E1460
namespace gamemd {
void DialogControl::Show(void *a1, void *a2)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E1460)
}
} // namespace gamemd
// 0x4E1470
namespace gamemd {
int DialogControl::IsHidden()
{

  return this->u32_1E == 0; /*0x4e147a*/

}
} // namespace gamemd
// 0x623340
namespace gamemd {
_DWORD * DialogControl::Constructor()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x623340)
}
} // namespace gamemd