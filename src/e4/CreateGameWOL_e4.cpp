// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7AC610_e4.hpp"

// 0x792EC0
namespace gamemd {
HWND sub_792EC0(int a1)
{
{
    HWND v2;
    HWND Current;
    HWND result;
    v2 = (HWND)Dialog::FindByHandle((void *)0xC4);
    if ( v2 )
  {
    g_WOL_ChannelList &= ~a1;
    if ( !g_WOL_ChannelList )
    CloseDialog(v2, 0);
  }
    Current = Dialog::GetCurrent();
    result = GetDlgItem(Current, 1344);
    if ( result )
    return SetFocus(result);
    return result;
}
}
} // namespace gamemd
