// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x7B7E40
namespace gamemd {
wchar_t ** WDTGame_Helper(CampaignScore * aP0, const wchar_t * a1, wchar_t * Format)
{
  size_t v5; // eax
  wchar_t *v6; // eax
  wchar_t String[32]; // [esp+8h] [ebp-40h] BYREF

  swprintf(String, (const size_t)a0Dd_0, Format); /*0x7b7e58*/
  swprintf(String, (const size_t)String, a1); /*0x7b7e68*/
  *aP0 = 0; /*0x7b7e76*/
  if ( String ) /*0x7b7e7c*/
    v5 = wcslen(String) + 1; /*0x7b7e8b*/
  else
    v5 = 1; /*0x7b7e8e*/
  v6 = (wchar_t *)__2_YAPAXI_Z(2 * v5); /*0x7b7e96*/
  *aP0 = v6; /*0x7b7ea2*/
  *v6 = 0; /*0x7b7ea4*/
  if ( String ) /*0x7b7eab*/
    wcscpy(*aP0, String); /*0x7b7eb5*/
  return aP0; /*0x7b7ebf*/
}
} // namespace gamemd
