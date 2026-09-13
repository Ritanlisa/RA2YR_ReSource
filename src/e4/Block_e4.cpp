// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6260D0
void * Block::Copy(const void * a2)
{
{
    void *result;
    result = this;
    if ( this != a2 )
    qmemcpy(this, a2, 0x300u);
    return result;
}
}
