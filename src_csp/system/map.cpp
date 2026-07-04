#include "map.hpp"

// 0x004104C0
int  Map::GetInvalidCoord(#376 *this)
{
    uint32_t *v2; // [esp+4h] [ebp+4h]
    *v2 = dword_887680;
    v2[1] = dword_887684;
    v2[2] = dword_887688;
    return (int)v2;
}

