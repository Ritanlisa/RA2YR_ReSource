// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6967B0_e4.hpp"
#include "e4/classes/E4Recv_696AE0_e4.hpp"
#include "e4/classes/E4Recv_696C40_e4.hpp"

// 0x696AE0
namespace gamemd {
HWND E4Recv_696AE0::sub_696AE0()
{
{
    HWND DlgItem;
    HWND result;
    HWND v4;
    char *v5;
    LRESULT v6;
    int v7;
    char *v8;
    DlgItem = GetDlgItem(*(HWND *)this, 1629);
    result = GetDlgItem(*(HWND *)this, 1630);
    v4 = result;
    if ( DlgItem )
  {
    if ( result )
    {
    v5 = (char *)(this + 8);
    SendMessageA(DlgItem, 0x4B5u, 0x80u, (LPARAM)v5);
    SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer);
    String::Trim(v5);
    result = 0;
    if ( strlen(v5) )
      {
    _strupr(v5);
    v6 = SendMessageA(v4, 0x4C4u, 0xFFFFFFFF, (LPARAM)v5);
    if ( v6 == -1 )
        {
    v8 = (char *)__2_YAPAXI_Z(0x29u);
    strcpy(v8, v5);
    result = (HWND)SendMessageA(v4, 0x4C8u, 0, (LPARAM)v8);
    v6 = (LRESULT)result;
    if ( result == HWND_MESSAGE|0x2 )
    return result;
    if ( DataGlobal_A8DB5C < DataGlobal_A8DB54 || (DataGlobal_A8DB59 || !DataGlobal_A8DB54) && DataGlobal_A8DB60 > 0 && (*(unsigned char (__thiscall **)(int *, int, int))(DataGlobal_A8DB4C + 8))( &DataGlobal_A8DB4C, DataGlobal_A8DB54 + DataGlobal_A8DB60, 0) )
          {
    v7 = DataGlobal_A8DB5C++;
    *(int *)(DataGlobal_A8DB50 + 4 * v7) = v8;
          }
        }
    SendMessageA(v4, 0x186u, v6, 0);
    SendMessageA(v4, 0x197u, v6, 0);
    this->M152 = v6;
    return (HWND)this;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x696C40
namespace gamemd {
HWND E4Recv_696C40::sub_696C40()
{
{
    HWND result;
    HWND v3;
    LRESULT v4;
    int v5;
    result = GetDlgItem(*(HWND *)this, 1630);
    v3 = result;
    if ( result )
  {
    result = (HWND)SendMessageA(result, 0x18Bu, 0, 0);
    if ( (int)result > 0 )
    {
    result = (HWND)SendMessageA(v3, 0x188u, 0, 0);
    v4 = (LRESULT)result;
    if ( result != HWND_MESSAGE|0x2 )
      {
    SendMessageA(v3, 0x182u, (WPARAM)result, 0);
    if ( v4 < DataGlobal_A8DB5C )
        {
    v5 = v4;
    if ( v4 < --DataGlobal_A8DB5C )
          {
    do
            {
    ++v5;
    *(int *)(DataGlobal_A8DB50 + 4 * v5 - 4) = *(int *)(DataGlobal_A8DB50 + 4 * v5);
            }
    while ( v5 < DataGlobal_A8DB5C );
          }
        }
    if ( v4 >= SendMessageA(v3, 0x18Bu, 0, 0) )
    --v4;
    SendMessageA(v3, 0x186u, v4, 0);
    result = (HWND)SendMessageA(v3, 0x197u, v4, 0);
    this->M152 = v4;
      }
    }
  }
    return result;
}
}
} // namespace gamemd
