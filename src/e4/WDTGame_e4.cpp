// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/WDTState_4_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/VoxelPaletteClass_e4.hpp"
#include "e4/classes/VoxelPalette_e4.hpp"

// 0x7B7E40
namespace gamemd {
wchar_t ** WDTGame_Helper(CampaignScore * aP0, const wchar_t * a1, wchar_t * Format)
{
  size_t v5; // eax
  wchar_t *v6; // eax
  wchar_t String[32]; // [esp+8h] [ebp-40h] BYREF

  swprintf(String, (const size_t)a0Dd_0, Format); /*0x7b7e58*/
  swprintf(String, (const size_t)String, a1); /*0x7b7e68*/
  *(unsigned int *)aP0 = 0; /*0x7b7e76*/
  if ( String ) /*0x7b7e7c*/
    v5 = wcslen(String) + 1; /*0x7b7e8b*/
  else
    v5 = 1; /*0x7b7e8e*/
  v6 = (wchar_t *)RA2_OPNEW(2 * v5); /*0x7b7e96*/
  *aP0 = v6; /*0x7b7ea2*/
  *v6 = 0; /*0x7b7ea4*/
  if ( String ) /*0x7b7eab*/
    wcscpy((wchar_t *)(*aP0), String); /*0x7b7eb5*/
  return aP0; /*0x7b7ebf*/
}
} // namespace gamemd
