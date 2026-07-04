#include "file.hpp"

char  File::LoadWDTDecompress(size_t *this, int a2, int a3)
{
    int v4; // eax
    size_t i; // edi
    int v7; // ecx
    int v8; // edx
    int v9; // edi
    int v10; // eax
    int v11; // edx
    bool v12; // zf
    unsigned __int8 v13; // dl
    char v14; // dl
    char v15; // dl
    int v16; // [esp+Ch] [ebp+8h]
    v4 = *(this + 9);
    if ( 4 * a3 < v4 * *(this + 8) )
    return 0;
    *(this + 17) = (size_t)__2_YAPAXI_Z(4 * v4);
    for ( i = 0; i < *(this + 9); ++i )
    *(uint32_t *)(*(this + 17) + 4 * i) = __2_YAPAXI_Z(*(this + 8));
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v16 = 0;
    if ( *(this + 9) )
    while ( 1 )
    v10 = 0;
    if ( *(this + 8) )
    break;
    LABEL_18:
    if ( v8 )
    v8 = 0;
    ++v7;
    v16 = 0;
    if ( ++v9 >= *(this + 9) )
    return 1;
    while ( 1 )
    if ( !v8 )
    v15 = *(uint8_t *)(v7 + a2);
    goto LABEL_14;
    v11 = v8 - 1;
    if ( !v11 )
    break;
    v12 = v11 == 1;
    v13 = *(uint8_t *)(v7 + a2);
    if ( v12 )
    v15 = v13 >> 4;
    LABEL_14:
    v14 = v15 & 3;
    goto LABEL_15;
    v14 = v13 >> 6;
    LABEL_15:
    *(uint8_t *)(*(uint32_t *)(*(this + 17) + 4 * v9) + v10) = v14;
    v8 = ++v16;
    if ( v16 == 4 )
    v8 = 0;
    ++v7;
    v16 = 0;
    if ( ++v10 >= *(this + 8) )
    goto LABEL_18;
    v15 = *(uint8_t *)(v7 + a2) >> 2;
    goto LABEL_14;
    return 1;
}

