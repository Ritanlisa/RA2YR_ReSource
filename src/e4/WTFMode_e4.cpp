// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"

// 0x7535D0
namespace gamemd {
int sub_7535D0()
{
{
    int result;
    if ( DataGlobal_B1D4C4 )
  {
    *(int *)(DataGlobal_B1D4C4 + 80) = 2;
    DataGlobal_B1D4C4 = 0;
  }
    if ( g_InfantryDrawState )
    Audio::Release(g_InfantryDrawState);
    result = ThemeClass::ClearQueues();
    DataGlobal_B1D428 = 0;
    DataGlobal_B1D3D8 = 0;
    return result;
}
}
} // namespace gamemd
