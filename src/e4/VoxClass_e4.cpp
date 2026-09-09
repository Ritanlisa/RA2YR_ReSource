// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x752700
void VoxClass::FindAndPlay(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall VoxClass::FindAndPlay(void *this, int a2, int a3)
{
  int v5; // esi

  if ( this ) /*0x752708*/
  {
    v5 = 0; /*0x752710*/
    if ( *(int *)&stru_B1D188.__pad_2B8[112] <= 0 ) /*0x752714*/
    {
LABEL_5:
      UpdateThemeManager(-1, a2, a3); /*0x752736*/
    }
    else
    {
      while ( _strcmpi(this, *(const void **)(*(_DWORD *)&stru_B1D188.__pad_2B8[100] + 4 * v5)) ) /*0x75272a*/
      {
        if ( ++v5 >= *(int *)&stru_B1D188.__pad_2B8[112] ) /*0x752734*/
          goto LABEL_5; /*0x752734*/
      }
      UpdateThemeManager(v5, a2, a3); /*0x752754*/
    }
  }
}
}
