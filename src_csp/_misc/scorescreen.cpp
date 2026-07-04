#include "scorescreen.hpp"

int  ScoreScreen::AccumulateScoreStats(int *this)
{
    int *v1; // esi
    wchar_t *v2; // ebx
    wchar_t *v3; // ebp
    wchar_t *v4; // eax
    wchar_t *v5; // edi
    int v6; // esi
    wchar_t *v8; // [esp+10h] [ebp-Ch]
    int v9; // [esp+14h] [ebp-8h]
    v1 = this;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v8 = 0;
    v9 = 0;
    if ( HouseClass_Count > 0 )
    do
    v6 = *(uint32_t *)&HouseClass_Array->gap0[4 * v9];
    Debug::Log();
    if ( (unsigned __int8)House::IsAlliedWith(HouseClass_Player, (void*375 *)v6)
    && (unsigned __int8)House::IsAlliedWith((void*375 *)v6, HouseClass_Player)
    || HouseClass_Player == (void*375 *)v6 )
    v3 = (wchar_t *)((char *)v3 + *(uint32_t *)(v6 + 21556));
    v8 = (wchar_t *)((char *)v8 + *(uint32_t *)(v6 + 21640));
    else
    v5 = (wchar_t *)((char *)v5 + *(uint32_t *)(v6 + 21556));
    v2 = (wchar_t *)((char *)v2 + *(uint32_t *)(v6 + 21640));
    Debug::Log();
    ++v9;
    while ( v9 < HouseClass_Count );
    v1 = this;
    v4 = v8;
    if ( *(uint32_t *)(*((uint32_t *)HouseClass_Player + 13) + 188) )
    Screen::TransitionRender(v1, v2, v4, 227);
    return Screen::TransitionRender(v1, v5, v3, 283);
    else
    Screen::TransitionRender(v1, v4, v2, 227);
    return Screen::TransitionRender(v1, v3, v5, 283);
}

