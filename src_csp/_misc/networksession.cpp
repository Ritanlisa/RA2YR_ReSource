#include "networksession.hpp"

char  NetworkSession::IsPlayerInGame(uint32_t *this, int a2)
{
    int v2; // edi
    int v3; // edx
    int *v4; // esi
    int v5; // eax
    int v6; // eax
    int v7; // eax
    uint32_t *i; // ecx
    if ( a2 == -2 )
    return 0;
    v2 = *(this + 2579);
    v3 = 0;
    if ( v2 <= 0 )
    LABEL_10:
    v7 = 0;
    for ( i = this + 33; *i != a2; ++i )
    if ( ++v7 >= 8 )
    return 0;
    else
    v4 = (int *)*(this + 2576);
    while ( 1 )
    v5 = *v4;
    if ( *(uint32_t *)(*v4 + 87) == -2 && *(uint32_t *)(v5 + 83) == -1 )
    v6 = -2;
    else
    v6 = *(uint32_t *)(v5 + 83);
    if ( v6 == a2 )
    break;
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    goto LABEL_10;
    return 1;
}

