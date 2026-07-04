#include "screen.hpp"

int  Screen::CleanupTransitionObjects(uint32_t *this)
{
    int result; // eax
    int i; // edi
    int v4; // ecx
    void (__thiscall ***v5)(uint32_t, int); // ecx
    int v6; // eax
    int v7; // ecx
    int v8; // eax
    byte_B05584 = 0;
    if ( g_LoadScreenFlag )
    g_LoadScreenFlag = 0;
    (*(void (__thiscall **)(int, uint32_t))(*(uint32_t *)DSurface_Hidden + 24))(DSurface_Hidden, 0);
    (*(void (__thiscall **)(int, int, uint32_t, int))(*(uint32_t *)DSurface_Hidden + 4))(
    DSurface_Hidden,
    DSurface_Alternate,
    0,
    1);
    result = *(this + 11);
    for ( i = 0; i < result; ++i )
    v4 = *(uint32_t *)(*(this + 8) + 4 * i);
    if ( (*(unsigned __int8 (__thiscall **)(int, uint32_t))(*(uint32_t *)v4 + 12))(v4, *(this + 2)) == 1 )
    v5 = *(void (__thiscall ****)(uint32_t, int))(*(this + 8) + 4 * i);
    if ( v5 )
    (**v5)(v5, 1);
    v6 = *(this + 11);
    if ( i < v6 )
    v7 = v6 - 1;
    v8 = i;
    for ( *(this + 11) = v7;
    v8 < *(this + 11);
    *(uint32_t *)(*(this + 8) + 4 * v8 - 4) = *(uint32_t *)(*(this + 8) + 4 * v8) )
    ++v8;
    result = *(this + 11);
    return result;
}

