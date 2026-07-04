#include "buildlocationvector.hpp"

// 0x00510860
char  BuildLocationVector::Grow(int this, int a2)
{
    char *v3; // edi
    int i; // ecx
    int v5; // eax
    uint32_t *v6; // edx
    int v7; // eax
    if ( a2 < 0 )
    return 0;
    v3 = (char *)__2_YAPAXI_Z(8 * (a2 + *(uint32_t *)(this + 8)));
    if ( !v3 )
    return 0;
    for ( i = 0; i < *(uint32_t *)(this + 4); *(uint32_t *)&v3[v5 + 4] = v6[1] )
    v5 = 8 * i;
    v6 = (uint32_t *)(*(uint32_t *)this + 8 * i++);
    *(uint32_t *)&v3[v5] = *v6;
    __3_YAXPAX_Z(*(void **)this);
    v7 = a2 + *(uint32_t *)(this + 8);
    *(uint32_t *)this = v3;
    *(uint32_t *)(this + 8) = v7;
    *(uint32_t *)(this + 16) = 0;
    return 1;
}

