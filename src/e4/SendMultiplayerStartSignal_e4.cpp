// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5E23A0
namespace gamemd {
LRESULT sub_5E23A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LRESULT sub_5E23A0()
{
  HWND Current; // eax
  HWND DlgItem; // eax

  Current = Dialog::GetCurrent(); /*0x5e23a0*/
  DlgItem = GetDlgItem(Current, 1439); /*0x5e23ab*/
  return SendMessageA(DlgItem, 0x4DCu, 0, 0); /*0x5e23c1*/
}
}
} // namespace gamemd

// 0x7A27D0
namespace gamemd {
LRESULT sub_7A27D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LRESULT sub_7A27D0()
{
  HWND Current; // eax
  HWND DlgItem; // eax

  Current = Dialog::GetCurrent(); /*0x7a27d0*/
  DlgItem = GetDlgItem(Current, 1439); /*0x7a27db*/
  return SendMessageA(DlgItem, 0x4DCu, 0, 0); /*0x7a27f1*/
}
}
} // namespace gamemd
