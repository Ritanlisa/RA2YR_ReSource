#include "chat.hpp"

// 0x005D4390
char  Chat::RefreshMessagePositions(void *this)
{
    int v2; // eax
    void (__thiscall ***v3)(uint32_t, int); // ecx
    int v4; // edi
    int *v5; // eax
    int v6; // edx
    DisableIME();
    LOBYTE(v2) = *((uint8_t *)this + 25);
    if ( (uint8_t)v2 )
    v3 = (void (__thiscall ***)(uint32_t, int))*((uint32_t *)this + 9);
    *((uint8_t *)this + 25) = 0;
    if ( v3 )
    (**v3)(v3, 1);
    nullsub_48();
    LOBYTE(v2) = *((uint8_t *)this + 26);
    if ( (uint8_t)v2 )
    if ( *((uint8_t *)this + 25) )
    v4 = *((uint32_t *)this + 2) + *((uint32_t *)this + 5);
    else
    v4 = *((uint32_t *)this + 2);
    v5 = *(int **)this;
    if ( *(uint32_t *)this )
    do
    v6 = *v5;
    v5[4] = v4;
    v5 = (int *)(*(int (__thiscall **)(int *))(v6 + 4))(v5);
    v4 += *((uint32_t *)this + 5);
    while ( v5 );
    v2 = *((uint32_t *)this + 3) + 1;
    *((uint32_t *)this + 3) = v2;
    return v2;
}

