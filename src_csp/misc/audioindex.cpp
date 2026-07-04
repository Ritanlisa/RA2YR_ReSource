#include "audioindex.hpp"

// 0x00401640
uint32_t *__fastcall AudioIndex::GetSampleInformation(uint32_t *a1, int a2, uint32_t *a3)
{
    uint32_t *v3; // ecx
    uint32_t *result; // eax
    v3 = (uint32_t *)(*a1 + 36 * a2);
    result = a3;
    *a3 = 4;
    a3[2] = v3[6];
    a3[3] = ((v3[7] & 1) != 0) + 1;
    a3[6] = v3[8];
    if ( (v3[7] & 8) != 0 )
    a3[1] = 1;
    a3[4] = 2;
    else
    a3[1] = 0;
    a3[4] = ((v3[7] & 4) != 0) + 1;
    return result;
}

