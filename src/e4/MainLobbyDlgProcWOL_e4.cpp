// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_77A760_e4.hpp"
#include "e4/classes/E4Recv_77A780_e4.hpp"
#include "e4/classes/E4Recv_77A7A0_e4.hpp"
#include "e4/classes/E4Recv_798F50_e4.hpp"
#include "e4/classes/WideString_e4.hpp"

// 0x624020
namespace gamemd {
LRESULT MainLobbyDlgProcWOL_Assign(HWND hWnd, WPARAM wParam, void ** a3)
{
{
    LRESULT v5;
    wchar_t *v6;
    LRESULT v7;
    v5 = SendMessageA(hWnd, 0x149u, wParam, 0);
    if ( v5 <= 0 )
    SafeDelete::Ptr(a3);
    v6 = (wchar_t *)__2_YAPAXI_Z(2 * v5 + 4);
    v7 = SendMessageA(hWnd, 0x4C3u, wParam, (LPARAM)v6);
    WideString::Assign_Alt(a3, v6);
    __3_YAXPAX_Z(v6);
    return v7;
}
}
} // namespace gamemd

// 0x77A8D0
namespace gamemd {
void MainLobbyDlgProcWOL_Get(HWND hDlg, char a2)
{
{
    HWND DlgItem;
    HWND v4;
    wchar_t *StringCSF;
    HWND v6;
    wchar_t *v7;
    HWND v8;
    wchar_t *v9;
    HWND v10;
    wchar_t *v11;
    HWND v12;
    wchar_t *v13;
    HWND v14;
    wchar_t *v15;
    void *v16;
    if ( a2 )
  {
    DlgItem = GetDlgItem(hDlg, 1576);
    SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer);
    InvalidateRect(DlgItem, 0, 0);
  }
    v4 = GetDlgItem(hDlg, 1775);
    SendMessageA(v4, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString);
    StringCSF = GetStringCSF(g_Str_GUI_UnknownStats, 0, aDRa2mdpostWolp, 892);
    WideString::Assign((wchar_t **)&v16, StringCSF);
    v6 = GetDlgItem(hDlg, 1776);
    v7 = WideString::GetOrEmpty_Alt((wchar_t **)&v16);
    SendMessageA(v6, 0x4B2u, 0, (LPARAM)v7);
    v8 = GetDlgItem(hDlg, 1777);
    v9 = WideString::GetOrEmpty_Alt((wchar_t **)&v16);
    SendMessageA(v8, 0x4B2u, 0, (LPARAM)v9);
    v10 = GetDlgItem(hDlg, 1793);
    v11 = WideString::GetOrEmpty_Alt((wchar_t **)&v16);
    SendMessageA(v10, 0x4B2u, 0, (LPARAM)v11);
    v12 = GetDlgItem(hDlg, 1780);
    v13 = WideString::GetOrEmpty_Alt((wchar_t **)&v16);
    SendMessageA(v12, 0x4B2u, 0, (LPARAM)v13);
    v14 = GetDlgItem(hDlg, 1781);
    v15 = WideString::GetOrEmpty_Alt((wchar_t **)&v16);
    SendMessageA(v14, 0x4B2u, 0, (LPARAM)v15);
    DeleteAndZero::Alt(&v16);
}
}
} // namespace gamemd
