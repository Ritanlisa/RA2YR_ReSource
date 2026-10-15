// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/LoadOptions_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"

// 0x623FC0
namespace gamemd {  // G42.18 ns repair
LRESULT OptionsDlgProcWOL_Assign(ObjectClass * aP0, WPARAM wParam, void ** a2)
{

  LRESULT v5; // esi
  v5 = SendMessageA((HWND)(aP0), 0x149u, wParam, 0); /*0x623fd9*/
  if ( v5 <= 0 ) /*0x623fdd*/
    ((DeleteAndZero*)a2)->Alt2(); /*0x623fe3*/
  char *v6; // esi
  v6 = (char *)operator new(v5 + 2); /*0x623ff4*/
  LRESULT v7; // edi
  v7 = SendMessageA((HWND)(aP0), 0x4BDu, wParam, (LPARAM)v6); /*0x624000*/
  ((String *)(a2))->Assign_Alt(v6); /*0x624007*/
  operator delete((void *)(v6)); /*0x62400d*/
  return v7; /*0x624017*/
}  // G42.18 ns repair
} // namespace gamemd
