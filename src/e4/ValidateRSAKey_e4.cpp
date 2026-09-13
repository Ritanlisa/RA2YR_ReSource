// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5C8DD0
namespace gamemd {
char sub_5C8DD0(unsigned int * a1, int a2, int a3, int a4)
{
{
    int v5;
    char result;
    v5 = a3;
    if ( a3 >= 32 * a4 )
    v5 = 32 * a4;
    memset(a1, 0, 4 * a4);
    *a1 = 0;
    (*(void (__thiscall **)(int, int *, int))(*(int *)(a2) + 8))(a2, a1, v5 / 8 + 1);
    result = ~(-1 << (v5 % 8)) & *((char *)(a1) + v5 / 8);
    *((char *)(a1) + v5 / 8) = result;
    return result;
}
}
} // namespace gamemd
