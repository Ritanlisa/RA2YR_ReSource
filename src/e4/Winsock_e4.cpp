// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Winsock_e4.hpp"

// 0x7B2050
namespace gamemd {
char Winsock::VerifyCRC(int a1)
{
{
    int v1;
    int v2;
    int v3;
    int *v4;
    int v5;
    int v6;
    v1 = a1;
    v2 = *(int *)(a1 + 16);
    if ( v2 < 640 )
  {
    v3 = 0;
    v4 = (int *)(a1 + 32);
    a1 = 0;
    if ( v2 / 4 > 0 )
    {
    do
      {
    v5 = *v4++;
    ComputeHash(&a1, v5);
    ++v3;
      }
    while ( v3 < *(int *)(v1 + 16) / 4 );
    }
    v6 = *(int *)(v1 + 16) & 3;
    if ( v6 )
    ComputeHash(&a1, *v4 & (0xFFFFFFFF >> (32 - 8 * v6)));
    if ( a1 == *(int *)(v1 + 28) )
    return 1;
    Debug::Log();
  }
    return 0;
}
}
} // namespace gamemd
