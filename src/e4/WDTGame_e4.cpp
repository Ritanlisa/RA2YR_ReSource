// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x7B7E40
namespace gamemd {
wchar_t ** WDTGame_Helper(CampaignScore * aP0, const wchar_t * a1, wchar_t * Format)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t **__fastcall WDTGame_Helper(CampaignScore *aP0, const wchar_t *a1, wchar_t *Format)
{
  size_t v5; // eax
  _WORD *v6; // eax
  CampaignScore *v8; // [esp-Ch] [ebp-54h]
  CampaignScore *v9; // [esp+0h] [ebp-48h]
  wchar_t String[32]; // [esp+8h] [ebp-40h] BYREF

  swprintf(String, (const size_t)&stru_84DD9C.__pad_71C[220], Format, v9); /*0x7b7e58*/
  swprintf(String, (const size_t)String, a1, v8); /*0x7b7e68*/
  *(_DWORD *)aP0->__pad_0 = 0; /*0x7b7e76*/
  if ( String ) /*0x7b7e7c*/
    v5 = wcslen(String) + 1; /*0x7b7e8b*/
  else
    v5 = 1; /*0x7b7e8e*/
  v6 = (_WORD *)__2_YAPAXI_Z(2 * v5); /*0x7b7e96*/
  *(_DWORD *)aP0->__pad_0 = v6; /*0x7b7ea2*/
  *v6 = 0; /*0x7b7ea4*/
  if ( String ) /*0x7b7eab*/
    wcscpy(*(wchar_t **)aP0->__pad_0, String); /*0x7b7eb5*/
  return (wchar_t **)aP0; /*0x7b7ebf*/
}
}
} // namespace gamemd
