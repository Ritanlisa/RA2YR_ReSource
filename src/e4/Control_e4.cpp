// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Control_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/CoopCampaignVector_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"

// 0x48E620
namespace gamemd {
int Control::DispatchClick(int aP1)
{

  int v3; // ecx

  v3 = *((unsigned int *)this + 10); /*0x48e623*/
  if ( v3 ) /*0x48e628*/
    (*(void (**)(int, unsigned int))(*(unsigned int *)v3 + 108))(v3, 0); /*0x48e62e*/
  return ((GadgetClass *)(ShpButtonClass *)this)->ClearState(aP1); /*0x48e63d*/

}
} // namespace gamemd
// 0x60B950
namespace gamemd {
int Control::RepositionControlsDialog(HWND hWnd)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x60B950)
}
} // namespace gamemd
// 0x60C540
namespace gamemd {
int Control::CheckControlTypeDialog()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x60C540)
}
} // namespace gamemd