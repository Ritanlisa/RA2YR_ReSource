// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5C65B0
namespace gamemd {
int sub_5C65B0(int * a1, int a2)
{
{
    int result;
    result = *a1 + 1;
    for ( *a1 = result; !result; *a1 = result )
  {
    ++a1;
    if ( !--a2 )
    break;
    result = *a1 + 1;
  }
    return result;
}
}
} // namespace gamemd
