// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x732210
namespace gamemd {
int sub_732210(int a1, const char * a2)
{
{
    int v2;
    int v3;
    const char **i;
    v2 = *(int *)(a1 + 16);
    v3 = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = *(const char ***)(a1 + 4); strcmp(a2, *i); ++i )
  {
    if ( ++v3 >= v2 )
    return -1;
  }
    return v3;
}
}
} // namespace gamemd
