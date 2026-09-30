// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7AC610_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x792EC0
namespace gamemd {
HWND sub_792EC0(int a1)
{
  HWND v2; // eax
  HWND Current; // eax
  HWND result; // eax

  v2 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x792ec8*/
  if ( v2 ) /*0x792ecf*/
  {
    dword_B77DC8 &= ~a1; /*0x792edb*/
    if ( !dword_B77DC8 ) /*0x792ee1*/
      CloseDialog(v2, 0); /*0x792ee7*/
  }
    Current = this->Dialog::GetCurrent();
  result = GetDlgItem(Current, 1344); /*0x792ef7*/
  if ( result ) /*0x792f00*/
    return SetFocus(result); /*0x792f03*/
  return result; /*0x792eff*/
}
} // namespace gamemd
