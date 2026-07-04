#include "savegame.hpp"

int  SaveGame::LoadArrayData(int *this, int *a2)
{
    int v3; // ecx
    int result; // eax
    int v5; // ebx
    int v6; // ecx
    int i; // ebx
    int v8; // [esp+40h] [ebp-4h] BYREF
    v3 = *a2;
    v8 = *(this + 4);
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v3 + 16))(a2, &v8, 4, 0);
    if ( result >= 0 )
    v5 = 0;
    if ( v8 <= 0 )
    LABEL_5:
    v6 = *a2;
    v8 = *(this + 10);
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v6 + 16))(a2, &v8, 4, 0);
    if ( result >= 0 )
    for ( i = 0; i < v8; ++i )
    result = (*(int (__stdcall **)(int *, int, int, uint32_t))(*a2 + 16))(a2, *(this + 7) + 4 * i, 4, 0);
    if ( result < 0 )
    break;
    else
    while ( 1 )
    result = (*(int (__stdcall **)(int *, int, int, uint32_t))(*a2 + 16))(a2, *(this + 1) + 4 * v5, 4, 0);
    if ( result < 0 )
    break;
    if ( ++v5 >= v8 )
    goto LABEL_5;
    return result;
}

int  SaveGame::WriteDataArray(uint32_t *this, int *a2)
{
    int v3; // ecx
    int result; // eax
    int i; // edi
    int v6; // [esp+20h] [ebp-4h] BYREF
    v3 = *a2;
    v6 = *(this + 7);
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v3 + 16))(a2, &v6, 4, 0);
    if ( result >= 0 )
    for ( i = 0; i < v6; ++i )
    result = (*(int (__stdcall **)(int *, uint32_t, int, uint32_t))(*a2 + 16))(a2, *(uint32_t *)(*(this + 4) + 4 * i), 8, 0);
    if ( result < 0 )
    break;
    return result;
}

