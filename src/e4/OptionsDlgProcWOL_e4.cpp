// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x623FC0
namespace gamemd {
LRESULT OptionsDlgProcWOL_Assign(ObjectClass * aP0, WPARAM wParam, void ** a2)
{
{
    LRESULT v5;
    CCINIClass *v6;
    LRESULT v7;
    v5 = SendMessageA((HWND)aP0, 0x149u, wParam, 0);
    if ( v5 <= 0 )
    DeleteAndZero::Alt2(a2);
    v6 = (CCINIClass *)__2_YAPAXI_Z(v5 + 2);
    v7 = SendMessageA((HWND)aP0, 0x4BDu, wParam, (LPARAM)v6);
    String::Assign_Alt(a2, v6);
    __3_YAXPAX_Z(v6);
    return v7;
}
}
} // namespace gamemd
