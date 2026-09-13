// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x53D960
namespace gamemd {
int sub_53D960(int a1, int a2)
{
{
    signed int v3;
    signed int v4;
    int v5;
    int i;
    if ( !a1 && !a2 )
    return 0;
    v3 = abs32(a2);
    v4 = abs32(a1);
    if ( v4 > v3 )
    v3 = v4;
    v5 = 1;
    for ( i = 1; i < v3; ++i )
    v5 += 8 * i;
    if ( a1 == v3 )
    return v3 + a2 + v5;
    if ( a2 == v3 )
    return 3 * v3 - a1 + v5;
    if ( a1 == -v3 )
    return 5 * v3 - a2 + v5;
    return a1 + 7 * v3 + v5;
}
}
} // namespace gamemd
