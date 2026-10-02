// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/ThemeClass_e4.hpp"
#include "e4/classes/WalkLocomotionClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x7535D0
namespace gamemd {
int sub_7535D0()
{
  int result; // eax

  if ( dword_B1D4C4 ) /*0x7535d7*/
  {
    *(unsigned int *)(dword_B1D4C4 + 80) = 2; /*0x7535d9*/
    dword_B1D4C4 = 0; /*0x7535e0*/
  }
  if ( g_InfantryDrawState ) /*0x7535f2*/
    ((Audio *)(g_InfantryDrawState))->Release(); /*0x7535f4*/
    result = ((ThemeClass *)this)->ClearQueues();
  dword_B1D428 = 0; /*0x7535fe*/
  dword_B1D3D8 = 0; /*0x753608*/
  return result; /*0x753612*/
}
} // namespace gamemd
