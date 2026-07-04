#include "animation.hpp"

double  Animation::GetProgress(int this)
{
    int v1; // esi
    int v3; // edx
    int v4; // eax
    if ( !*(uint8_t *)(this + 24) )
    return 1.0;
    v1 = *(uint32_t *)(this + 20);
    if ( !v1 )
    return 1.0;
    v3 = *(uint32_t *)(this + 8);
    v4 = *(uint32_t *)(this + 16);
    if ( v3 != -1 )
    if ( (int)CurrentFrame - v3 < v4 )
    return (double)(v1 - (v4 - ((int)CurrentFrame - v3))) / (double)v1;
    v4 = 0;
    return (double)(v1 - v4) / (double)v1;
}

