// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5C6490
namespace gamemd {
int sub_5C6490(unsigned char * a1, char * a2, int a3)
{
{
    char *v4;
    char i;
    int v6;
    int j;
    char v8;
    v4 = &a2[a3 - 1];
    for ( i = -(*(int *)&a2[4 * a3 - 4] < 0); v4 > a2; --v4 )
  {
    if ( *v4 != i )
    break;
  }
    v6 = 0;
    if ( *v4 < 0 && *(int *)&a2[4 * a3 - 4] >= 0 || (*v4 & 0x80) == 0 && *(int *)&a2[4 * a3 - 4] < 0 )
  {
    *a1 = i;
    v6 = 1;
  }
    a1[v6] = *v4;
    for ( j = v6 + 1; v4 != a2; ++j )
  {
    v8 = *--v4;
    a1[j] = v8;
  }
    return j;
}
}
} // namespace gamemd
