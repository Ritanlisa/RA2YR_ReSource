// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5C6A30
namespace gamemd {
bool Crypto_Helper(unsigned int * a0, unsigned int * a1, unsigned int * a2, Crypto * aP3, int a5)
{
{
    bool result;
    unsigned int v7;
    unsigned int v8;
    if ( !a5 )
    return (char)aP3;
    result = (char)aP3;
    do
  {
    v7 = *a1 + *a2;
    v8 = v7 + (unsigned char)aP3;
    result = v7 < *a1 || result && !v8;
    *a0 = v8;
    ++a2;
    ++a1;
    ++a0;
    LOBYTE(aP3) = result;
    --a5;
  }
    while ( a5 );
    return result;
}
}
} // namespace gamemd
