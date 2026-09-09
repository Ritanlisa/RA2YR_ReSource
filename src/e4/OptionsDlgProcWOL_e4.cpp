// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x623FC0
namespace gamemd {
LRESULT OptionsDlgProcWOL_Assign(ObjectClass * aP0, WPARAM wParam, void ** a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LRESULT __fastcall OptionsDlgProcWOL_Assign(ObjectClass *aP0, WPARAM wParam, void **a2)
{
  LRESULT v5; // esi
  CCINIClass *v6; // esi
  LRESULT v7; // edi

  v5 = SendMessageA((HWND)aP0, 0x149u, wParam, 0); /*0x623fd9*/
  if ( v5 <= 0 ) /*0x623fdd*/
    DeleteAndZero::Alt2(a2); /*0x623fe3*/
  v6 = (CCINIClass *)__2_YAPAXI_Z(v5 + 2); /*0x623ff4*/
  v7 = SendMessageA((HWND)aP0, 0x4BDu, wParam, (LPARAM)v6); /*0x624000*/
  String::Assign_Alt(a2, v6); /*0x624007*/
  __3_YAXPAX_Z(v6); /*0x62400d*/
  return v7; /*0x624017*/
}
}
} // namespace gamemd
