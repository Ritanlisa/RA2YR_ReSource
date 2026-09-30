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

// 0x623FC0
namespace gamemd {
LRESULT OptionsDlgProcWOL_Assign(ObjectClass * aP0, WPARAM wParam, void ** a2)
{
  LRESULT v5; // esi
  char *v6; // esi
  LRESULT v7; // edi

  v5 = SendMessageA(aP0, 0x149u, wParam, 0); /*0x623fd9*/
  if ( v5 <= 0 ) /*0x623fdd*/
    DeleteAndZero::Alt2(a2); /*0x623fe3*/
  v6 = (char *)RA2_OPNEW(v5 + 2); /*0x623ff4*/
  v7 = SendMessageA(aP0, 0x4BDu, wParam, (LPARAM)v6); /*0x624000*/
  String::Assign_Alt(a2, v6); /*0x624007*/
  RA2_OPDEL(v6); /*0x62400d*/
  return v7; /*0x624017*/
}
} // namespace gamemd
