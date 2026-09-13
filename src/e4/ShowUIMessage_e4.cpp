// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x72CBA0
namespace gamemd {
char sub_72CBA0()
{
{
    char result;
    result = DataGlobal_B0FC7C;
    if ( !DataGlobal_B0FC7C )
  {
    DataGlobal_B0FAD0 = (int)LoadFileSHP(DataGlobal_845540, (bool *)&DataGlobal_B0FC73);
    result = LoadPaletteSimple(DataGlobal_845530, &DataGlobal_B0FC74, &DataGlobal_B0FC78);
    DataGlobal_B0FC7C = 1;
  }
    return result;
}
}
} // namespace gamemd
