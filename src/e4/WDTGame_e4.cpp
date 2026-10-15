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
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern char a0Dd_0[];  // data: 0x84e594 truth(IDA G42.57w9)


// 0x7B7E40
namespace gamemd {  // G42.18 ns repair
wchar_t ** WDTGame_Helper(CampaignScore * aP0, const wchar_t * a1, wchar_t * Format)
{

  wchar_t String[32]; // [esp+8h] [ebp-40h] BYREF
  swprintf(String, (const size_t)a0Dd_0, Format); /*0x7b7e58*/
  swprintf(String, (const size_t)String, a1); /*0x7b7e68*/
  *(_DWORD *)aP0 = 0; /*0x7b7e76*/
  size_t v5; // eax
  if ( String ) /*0x7b7e7c*/
    v5 = wcslen(String) + 1; /*0x7b7e8b*/
  else
    v5 = 1; /*0x7b7e8e*/
  wchar_t *v6; // eax
  v6 = (wchar_t *)operator new(2 * v5); /*0x7b7e96*/
  *aP0 = v6; /*0x7b7ea2*/
  *v6 = 0; /*0x7b7ea4*/
  if ( String ) /*0x7b7eab*/
    wcscpy((wchar_t *)(*aP0), String); /*0x7b7eb5*/
  return (wchar_t **)(aP0); /*0x7b7ebf*/
}  // G42.18 ns repair
} // namespace gamemd
