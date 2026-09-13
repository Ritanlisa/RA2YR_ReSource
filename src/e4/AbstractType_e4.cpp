// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractType_e4.hpp"

// 0x40DCB0
namespace gamemd {
char * AbstractType::FindName()
{
{
    int v1;
    int *v2;
    v1 = 0;
    v2 = &DataGlobal_816EE4;
    while ( (void *)*v2 != this )
  {
    v2 += 2;
    ++v1;
    if ( (int)v2 >= (int)&DataGlobal_817134 )
    return (char *)&DataGlobal_817130;
  }
    return (&DataGlobal_816EE0)[2 * v1];
}
}
} // namespace gamemd
