// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x753580
namespace gamemd {
int ChronoScreenEffect::DecrementCounter()
{
{
    int result;
    result = DataGlobal_B1D3D8;
    if ( DataGlobal_B1D3D8 )
  {
    result = --DataGlobal_B1D3D8;
    if ( DataGlobal_B1D3D8 < 0 )
    DataGlobal_B1D3D8 = 0;
  }
    return result;
}
}
} // namespace gamemd
