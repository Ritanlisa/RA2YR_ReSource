// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/Gadget_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/LinkClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x4E12F0
namespace gamemd {
ControlClass GadgetClass::Construct(int a2, int a3, int a4, int a5, int a6, char a7)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E12F0)
}
}
// 0x4E1390
namespace gamemd {
ControlClass GadgetClass::Dtor()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E1390)
}
}
// 0x557920
namespace gamemd {
ControlClass GadgetClass::DrawBuildingPlacement(ControlClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x557920)
}
}
// 0x60AAB0
namespace gamemd {
AbstractClass * * GadgetClass::FindByWindow(HWND hWnd, LPARAM)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x60AAB0)
}
}
// 0x623560
namespace gamemd {
AbstractClass * * GadgetClass::SetTooltip(void * String)
{

  int v3; // eax
  wchar_t *v4; // eax

  if ( this->u32_28 ) /*0x623564*/
  {
    __3_YAXPAX_Z(*((void **)&this->X0)); /*0x62356c*/
    this->u32_28 = 0; /*0x623574*/
  }
  if ( String ) /*0x623581*/
  {
    if ( *(unsigned int *)(String) ) /*0x623583*/
    {
      v3 = (unsigned int)(wcslen((const wchar_t *)(String)));
      v4 = (wchar_t *)((unsigned int)((wchar_t *)new unsigned char[2 * v3 + 2]));
      this->u32_28 = (unsigned int)(v4); /*0x62359b*/
      wcscpy(v4,(const wchar_t *)(String)); /*0x62359e*/
    }
  }

}
}
// 0x723EA0
namespace gamemd {
ControlClass GadgetClass::Show()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x723EA0)
}
}