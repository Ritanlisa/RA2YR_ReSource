// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x75A790
char AnimSystem::Init()
{
{
    int i;
    int v1;
    char v2;
    char result;
    for ( i = 0; i < 18; ++i )
  {
    v1 = i >> 3;
    v2 = ~(1 << (i & 7)) & DataGlobal_B45BA8[i >> 3];
    DataGlobal_B45BA8[v1] = v2;
  }
    result = DataGlobal_B45BA8[0] | 0x40;
    DataGlobal_B45BA8[0] |= 0x40u;
    return result;
}
}
