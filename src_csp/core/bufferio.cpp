#include "bufferio.hpp"

int  BufferIO::FindActiveChannel(int *this, int a2)
{
    int v2; // ebp
    int *v3; // esi
    int v4; // edx
    int *v5; // ecx
    int result; // eax
    if ( !*(this + 24) )
    return 0;
    v2 = 0;
    v3 = this;
    LABEL_3:
    v4 = 0;
    v5 = v3;
    while ( 1 )
    result = *v5;
    if ( *v5 )
    if ( (*(uint8_t *)(result + 12) & 2) != 0 && (a2 == -1 || a2 == *(uint32_t *)(result + 272)) )
    return result;
    ++v4;
    ++v5;
    if ( v4 >= 3 )
    ++v2;
    v3 += 3;
    if ( v2 < 8 )
    goto LABEL_3;
    return 0;
}

