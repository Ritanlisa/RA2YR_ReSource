#include "crc32.hpp"

// 0x004A1FB0
int __fastcall CRC32::Compute(unsigned __int8 *a1, int a2, int a3)
{
    int v4; // edx
    unsigned int v5; // eax
    int v6; // esi
    v4 = a2 - 1;
    v5 = ~a3;
    if ( a2 )
    v6 = v4 + 1;
    do
    v5 = CRC32_Table[*a1++ ^ (unsigned __int8)v5] ^ (v5 >> 8);
    --v6;
    while ( v6 );
    return ~v5;
}

