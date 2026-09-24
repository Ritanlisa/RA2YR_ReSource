// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5DBEC0_e4.hpp"
#include "e4/classes/E4Recv_77EBA0_e4.hpp"
#include "e4/classes/E4Recv_7B67C0_e4.hpp"
#include "e4/classes/E4Recv_7B7740_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"

// 0x5E23A0
namespace gamemd {
LRESULT sub_5E23A0()
{
  HWND Current; // eax
  HWND DlgItem; // eax

  Current = Dialog::GetCurrent(); /*0x5e23a0*/
  DlgItem = GetDlgItem(Current, 1439); /*0x5e23ab*/
  return SendMessageA(DlgItem, 0x4DCu, 0, 0); /*0x5e23c1*/
}
} // namespace gamemd

// 0x7A27D0
namespace gamemd {
LRESULT sub_7A27D0()
{
  HWND Current; // eax
  HWND DlgItem; // eax

  Current = Dialog::GetCurrent(); /*0x7a27d0*/
  DlgItem = GetDlgItem(Current, 1439); /*0x7a27db*/
  return SendMessageA(DlgItem, 0x4DCu, 0, 0); /*0x7a27f1*/
}
} // namespace gamemd
