// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7AC610_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x792EC0
namespace gamemd {  // G42.18 ns repair
HWND sub_792EC0(int a1)
{
  
  HWND v2; // eax
  v2 = (HWND)((Dialog*)(void *)0xC4)->FindByHandle(); /*0x792ec8*/
  if ( v2 ) /*0x792ecf*/
  {
    dword_B77DC8 &= ~a1; /*0x792edb*/
    if ( !dword_B77DC8 ) /*0x792ee1*/
      CloseDialog(v2, 0); /*0x792ee7*/
  }
  HWND Current; // eax
  Current = (HWND)(Dialog::GetCurrent());
  HWND result; // eax
  result = GetDlgItem(Current, 1344); /*0x792ef7*/
  if ( result ) /*0x792f00*/
    return SetFocus(result); /*0x792f03*/
  return result; /*0x792eff*/
}  // G42.18 ns repair
} // namespace gamemd
