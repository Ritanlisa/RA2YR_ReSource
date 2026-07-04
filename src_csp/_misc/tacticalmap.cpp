#include "tacticalmap.hpp"

// 0x00484680
int  TacticalMap::ComputeScreenTint(int this)
{
    __int16 v2; // dx
    __int16 v3; // ax
    __int16 v4; // dx
    __int16 v5; // ax
    bool v6; // zf
    __int16 v7; // ax
    int v8; // eax
    int v9; // ecx
    int v10; // eax
    __int16 v11; // cx
    int v12; // eax
    __int16 v13; // dx
    __int16 v14; // cx
    __int16 v15; // ax
    __int16 v16; // ax
    v2 = *(_WORD *)(this + 264) + (__int16)(1000 * *((_WORD *)ScenarioClass_Instance + 6806)) / 100;
    *(_WORD *)(this + 266) = v2;
    *(_WORD *)(this + 270) = v2;
    if ( LightningStorm::IsActive() )
    v3 = *(char *)(this + 283);
    *(_WORD *)(this + 266) += v3 * *((_WORD *)ScenarioClass_Instance + 6830) - *((_WORD *)ScenarioClass_Instance + 6828);
    v4 = (v3 + 4) * *((_WORD *)ScenarioClass_Instance + 6830) - *((_WORD *)ScenarioClass_Instance + 6828);
    else if ( PsyDom::IsActive() )
    v5 = *(char *)(this + 283);
    *(_WORD *)(this + 266) += v5 * *((_WORD *)ScenarioClass_Instance + 6856) - *((_WORD *)ScenarioClass_Instance + 6854);
    v4 = (v5 + 4) * *((_WORD *)ScenarioClass_Instance + 6856) - *((_WORD *)ScenarioClass_Instance + 6854);
    else
    v6 = !NukeFlash::IsActive();
    v7 = *(char *)(this + 283);
    if ( v6 )
    *(_WORD *)(this + 266) += v7 * *((_WORD *)ScenarioClass_Instance + 6818)
    - *((_WORD *)ScenarioClass_Instance + 6816);
    v4 = (v7 + 4) * *((_WORD *)ScenarioClass_Instance + 6818) - *((_WORD *)ScenarioClass_Instance + 6816);
    else
    *(_WORD *)(this + 266) += v7 * *((_WORD *)ScenarioClass_Instance + 6842)
    - *((_WORD *)ScenarioClass_Instance + 6840);
    v4 = (v7 + 4) * *((_WORD *)ScenarioClass_Instance + 6842) - *((_WORD *)ScenarioClass_Instance + 6840);
    v8 = *(__int16 *)(this + 266);
    v9 = *(uint32_t *)(this + 260);
    *(_WORD *)(this + 270) += v4;
    *(_WORD *)(this + 268) = (unsigned int)(v9 * v8) >> 16;
    v10 = v9 * *(__int16 *)(this + 270);
    v11 = *(_WORD *)(this + 266);
    v12 = v10 >> 16;
    *(_WORD *)(this + 270) = v12;
    if ( v11 >= 2000 )
    v11 = 2000;
    *(_WORD *)(this + 266) = v11;
    v13 = *(_WORD *)(this + 268);
    if ( v13 >= 2000 )
    v13 = 2000;
    *(_WORD *)(this + 268) = v13;
    v14 = v12;
    if ( (__int16)v12 >= 2000 )
    v14 = 2000;
    v15 = *(_WORD *)(this + 266);
    *(_WORD *)(this + 270) = v14;
    if ( v15 <= 0 )
    v15 = 0;
    *(_WORD *)(this + 266) = v15;
    if ( v13 <= 0 )
    v16 = 0;
    else
    v16 = v13;
    *(_WORD *)(this + 268) = v16;
    if ( v14 <= 0 )
    *(_WORD *)(this + 270) = 0;
    return 0;
    else
    *(_WORD *)(this + 270) = v14;
    return v14;
}

int  TacticalMap::RenderCell(uint32_t *this, char a2, int a3, int a4, int a5)
{
    int v6; // esi
    int v7; // ebp
    int *v8; // eax
    int *v9; // eax
    int *v10; // eax
    uint32_t *v11; // ecx
    int v12; // edx
    int v13; // eax
    char *v14; // esi
    char *v15; // edi
    int result; // eax
    int v17; // ebp
    uint32_t **v18; // edi
    int *Coords; // eax
    int *v20; // eax
    int v21; // ecx
    int v22; // [esp-8h] [ebp-78h]
    int v23; // [esp-4h] [ebp-74h]
    int v24; // [esp+10h] [ebp-60h]
    int v25; // [esp+14h] [ebp-5Ch] BYREF
    int v26; // [esp+18h] [ebp-58h]
    int v27; // [esp+1Ch] [ebp-54h]
    int v28; // [esp+20h] [ebp-50h] BYREF
    int v29; // [esp+24h] [ebp-4Ch]
    int v30[2]; // [esp+28h] [ebp-48h] BYREF
    int v31; // [esp+30h] [ebp-40h] BYREF
    int v32; // [esp+34h] [ebp-3Ch]
    int v33; // [esp+38h] [ebp-38h]
    int v34; // [esp+3Ch] [ebp-34h]
    int v35[4]; // [esp+40h] [ebp-30h] BYREF
    uint32_t v36[4]; // [esp+50h] [ebp-20h] BYREF
    uint32_t v37[4]; // [esp+60h] [ebp-10h] BYREF
    if ( !a2 )
    if ( g_CraterCreationState )
    v6 = g_CraterCreationState - 1;
    v24 = g_CraterCreationState - 1;
    if ( g_CraterCreationState - 1 >= 0 )
    v7 = 20 * v6;
    do
    v31 = *(uint32_t *)((char *)g_CraterPool + v7);
    v32 = *(uint32_t *)((char *)g_CraterPool + v7 + 4);
    v33 = *(uint32_t *)((char *)g_CraterPool + v7 + 8);
    v34 = *(uint32_t *)((char *)g_CraterPool + v7 + 12);
    v31 += a3;
    v32 += a4;
    v26 = Map_VisibleRect;
    v29 = Map_VisibleRect;
    v25 = DSurface_ViewBounds;
    v28 = DSurface_ViewBounds;
    v23 = g_DSurface_WindowOffset;
    v22 = g_Map_VisibleRectOffset;
    v8 = Coord2D::Sub(&v28, v30, &v25);
    v9 = Rect::Construct(v36, v8, v22, v23);
    v35[0] = *v9;
    v35[1] = v9[1];
    v35[2] = v9[2];
    v35[3] = v9[3];
    v10 = ClipRectIntersection(v37, v35, &v31, 0, 0);
    v31 = *v10;
    v32 = v10[1];
    v33 = v10[2];
    v34 = v10[3];
    v11 = (char *)g_CraterPool + v7;
    *v11 = v31;
    v11[1] = v32;
    v11[2] = v33;
    v11[3] = v34;
    if ( v33 > 0 && v34 > 0 )
    TacticalMap::FillScanlinesOpaque(v31, v32, v33, v34);
    else if ( v6 < g_CraterCreationState )
    v12 = v6;
    if ( v6 < --g_CraterCreationState )
    v13 = v7;
    do
    ++v12;
    v14 = (char *)g_CraterPool + v13 + 20;
    v15 = (char *)g_CraterPool + v13;
    v13 += 20;
    qmemcpy(v15, v14, 0x14u);
    while ( v12 < g_CraterCreationState );
    v6 = v24;
    --v6;
    v7 -= 20;
    v24 = v6;
    while ( v6 >= 0 );
    result = *(this + 56);
    if ( result > 0 && !a2 )
    v17 = 0;
    v18 = (uint32_t **)(this + 57);
    do
    Coords = CellClass::GetCoords(*v18, &v31);
    v25 = *Coords;
    v26 = Coords[1];
    v27 = 0;
    v20 = Coord::To_ScreenRaw(v30, &v25);
    v21 = v20[1] - *(this + 45);
    v28 = *v20 - *(this + 44) + DSurface_ViewBounds - 30;
    v29 = Map_VisibleRect + v21 - 15;
    if ( g_hWnd )
    DSurface::Process(&v28, a5);
    result = *(this + 56);
    ++v17;
    ++v18;
    while ( v17 < result );
    return result;
}

int  TacticalMap::DrawOccupiedRegion(int *this)
{
    int result; // eax
    int v2; // edx
    int v3; // eax
    int v4; // esi
    int v5; // ecx
    int v6; // edi
    int v7; // edi
    int v8; // eax
    int v9; // edi
    uint32_t v10[4]; // [esp+0h] [ebp-10h] BYREF
    if ( *(this + 868) || (result = *(this + 869)) != 0 )
    v2 = *(this + 868);
    v3 = *(this + 870);
    v4 = *(this + 869);
    v5 = *(this + 871);
    if ( v3 < v2 )
    v6 = v2;
    v2 = v3;
    v3 = v6;
    if ( v5 < v4 )
    v7 = v4;
    v4 = v5;
    v5 = v7;
    v8 = v3 - v2 + 1;
    if ( *(uint32_t *)(FileSystem_THEATER_PAL + 4) == 1 )
    v9 = *(unsigned __int8 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 15);
    else
    v9 = *(unsigned __int16 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 30);
    v10[2] = v8;
    v10[0] = v2;
    v10[1] = v4;
    v10[3] = v5 - v4 + 1;
    return (*(int (__thiscall **)(int, int *, uint32_t *, int))(*(uint32_t *)DSurface_Hidden_2 + 84))(
    DSurface_Hidden_2,
    &DSurface_ViewBounds,
    v10,
    v9);
    return result;
}

