#include "movie.hpp"

unsigned int  Movie::SelectNextBuildableType(int this, int a2)
{
    unsigned int v2; // ebp
    int v4; // edi
    unsigned int v5; // eax
    unsigned int v6; // ebx
    bool v7; // zf
    int v9; // edi
    v2 = a2;
    if ( (a2 <= -1 || *(uint8_t *)(*(uint32_t *)(*(uint32_t *)(this + 24) + 4 * a2) + 649) || *(uint8_t *)(this + 16)) && a2 >= 0 )
    return v2;
    if ( *(uint8_t *)(this + 18) == 1 )
    v4 = 0;
    while ( 1 )
    v5 = Random::Range(Randomizer_Global, 0, *(uint32_t *)(this + 36) - 1);
    ++v4;
    v6 = v5;
    v7 = v4 == 1000;
    if ( v4 >= 1000 )
    break;
    if ( v5 != a2 && RulesClass::IsTypeBuildable((uint32_t *)this, v5) )
    v7 = v4 == 1000;
    break;
    if ( v7 )
    return 0;
    return v6;
    else
    v9 = *(uint32_t *)(this + 36) + 1;
    while ( 1 )
    if ( (signed int)++v2 >= *(uint32_t *)(this + 36) )
    v2 = 0;
    if ( !--v9 )
    break;
    if ( RulesClass::IsTypeBuildable((uint32_t *)this, v2) )
    return v2;
    return 0;
}

