#include "crate.hpp"

char  Crate::FindPlacement(int this, int a2, int a3)
{
    uint32_t *v4; // edi
    void*374 *v5; // ebp
    int v6; // eax
    void*374 *v7; // ebp
    int v8; // eax
    int *v9; // eax
    int v10; // ecx
    uint32_t *v11; // eax
    int *v12; // eax
    int *v13; // eax
    int BuildingByTiberiumType; // eax
    int v16; // eax
    unsigned __int8 v17; // al
    int v18; // edi
    int *ScreenRect; // ebx
    int *v20; // eax
    int v21; // edi
    int v22; // ecx
    int v23; // ebp
    int v24; // edx
    int v25; // ebx
    bool v26; // cc
    int v27; // eax
    int v28; // ecx
    int v29; // ebp
    int v30; // ecx
    int *v31; // eax
    int v32; // ecx
    int v33; // edx
    int v34; // eax
    int v35; // eax
    int v36; // ecx
    int *v37; // eax
    int v38; // [esp-Ch] [ebp-A0h]
    struct tagRECT *StartCoords; // [esp-8h] [ebp-9Ch]
    int v40; // [esp-8h] [ebp-9Ch]
    const RECT *PlacementRect; // [esp-4h] [ebp-98h]
    LPRECT v42; // [esp-4h] [ebp-98h]
    const RECT *v43; // [esp+0h] [ebp-94h]
    const RECT *v44; // [esp+0h] [ebp-94h]
    const RECT *v45; // [esp+4h] [ebp-90h]
    int v46; // [esp+10h] [ebp-84h] BYREF
    int v47[2]; // [esp+14h] [ebp-80h] BYREF
    int v48; // [esp+1Ch] [ebp-78h]
    int v49; // [esp+20h] [ebp-74h]
    int v50; // [esp+24h] [ebp-70h] BYREF
    int v51; // [esp+28h] [ebp-6Ch]
    int v52[4]; // [esp+34h] [ebp-60h] BYREF
    int v53[4]; // [esp+44h] [ebp-50h] BYREF
    int v54[4]; // [esp+54h] [ebp-40h] BYREF
    int v55[4]; // [esp+64h] [ebp-30h] BYREF
    int v56[4]; // [esp+74h] [ebp-20h] BYREF
    int v57[4]; // [esp+84h] [ebp-10h] BYREF
    v4 = *(uint32_t **)&BuildingClass_InstanceArray->gap0[4 * a2];
    v54[0] = (int)v4;
    if ( a3 >= v4[57] )
    return 0;
    if ( IsCoordValidMap(this, (int)v4) )
    if ( *(uint8_t *)(this + 284) )
    v5 = (void*374 *)__2_YAPAXI_Z(0xB0u);
    if ( v5 )
    v46 = *(uint32_t *)(this + 36);
    v6 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 1);
    Object::SpawnAtCell(
    v5,
    *(uint32_t *)&BuildingTypeClass_Array->gap0[8 * *(unsigned __int8 *)(this + 284)
    - 8
    + 4 * v6
    + 4 * v4[58]
    + 4 * *(uint32_t *)(v4[56] + 660)],
    (__int16 *)&v46,
    -1);
    else
    v7 = (void*374 *)__2_YAPAXI_Z(0xB0u);
    if ( v7 )
    v46 = *(uint32_t *)(this + 36);
    v8 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 11);
    Object::SpawnAtCell(
    v7,
    *(uint32_t *)&BuildingTypeClass_Array->gap0[4 * v8 + 4 * *(uint32_t *)(v4[56] + 660)],
    (__int16 *)&v46,
    -1);
    CellClass::RegisterForRedraw((int)v4, (__int16 *)(this + 36));
    *(uint8_t *)(this + 286) = a3;
    PlacementRect = (const RECT *)BuildingClass::GetPlacementRect(this, v53);
    StartCoords = (struct tagRECT *)House::GetStartCoords(this, v54);
    CellClass::GetScreenRect(this, v52);
    Rect::Union(StartCoords, PlacementRect, v43);
    v9 = (int *)Rect::Union(v42, v44, v45);
    v47[0] = *v9;
    v47[1] = v9[1];
    v48 = v9[2];
    v10 = v9[3];
    v54[0] = DSurface_ViewBounds;
    v49 = v10;
    v40 = v10;
    v38 = v48;
    v54[1] = Map_VisibleRect;
    v11 = CellStruct::Copy(v47, &v50);
    v12 = Coord2D::Sub(v11, v52, v54);
    v13 = Rect::Construct(v55, v12, v38, v40);
    Cell::CreateCrater(*v13, v13[1], v13[2], v13[3], 0);
    BuildingClass::AddUpgrade((int)&MapClass_Instance, this + 36);
    return 1;
    if ( !*((uint8_t *)ScenarioClass_Instance + 13478) )
    return 0;
    BuildingByTiberiumType = FindBuildingByTiberiumType(*(uint32_t *)(this + 68));
    if ( BuildingByTiberiumType == -1 )
    return 0;
    v16 = *(uint32_t *)&BuildingClass_InstanceArray->gap0[4 * BuildingByTiberiumType];
    if ( *(uint8_t *)(this + 284)
    || *(unsigned __int8 *)(this + 286) >= *(uint32_t *)(v16 + 228) - 1
    || *(double *)(v16 + 176) < 0.00001
    || FindBuildingByTiberiumType(*(uint32_t *)(this + 68)) != a2 )
    return 0;
    v17 = a3 + *(uint8_t *)(this + 286);
    *(uint8_t *)(this + 286) = v17;
    v18 = v4[57];
    if ( v17 >= v18 - 1 )
    v17 = v18 - 1;
    *(uint8_t *)(this + 286) = v17;
    ScreenRect = CellClass::GetScreenRect(this, v55);
    v20 = House::GetStartCoords(this, v57);
    if ( ScreenRect[2] <= 0 || ScreenRect[3] <= 0 )
    v21 = *v20;
    v29 = v20[2];
    v25 = v20[3];
    v51 = v20[1];
    else
    v46 = v20[2];
    if ( v46 <= 0 || (v52[0] = v20[3], v52[0] <= 0) )
    v30 = ScreenRect[1];
    v21 = *ScreenRect;
    v29 = ScreenRect[2];
    v25 = ScreenRect[3];
    v51 = v30;
    else
    v21 = *ScreenRect;
    v22 = *v20;
    v23 = ScreenRect[2];
    v24 = ScreenRect[1];
    v25 = ScreenRect[3];
    v26 = v21 <= *v20;
    v48 = v23;
    if ( !v26 )
    v23 += v21 - v22;
    v21 = v22;
    v48 = v23;
    v27 = v20[1];
    v50 = v27;
    if ( v24 > v27 )
    v25 += v24 - v27;
    v24 = v27;
    if ( v21 + v23 >= v22 + v46 )
    v28 = v48;
    else
    v28 = v22 - v21 + v46 + 1;
    if ( v25 + v24 < v52[0] + v50 )
    v25 = v52[0] + v50 - v24 + 1;
    v51 = v24;
    v29 = v28;
    v31 = BuildingClass::GetPlacementRect(this, v56);
    if ( v29 <= 0 || v25 <= 0 )
    v21 = *v31;
    v36 = v31[1];
    v29 = v31[2];
    v35 = v31[3];
    else
    v46 = v31[2];
    if ( v46 <= 0 || (v52[0] = v31[3], v52[0] <= 0) )
    v36 = v51;
    v35 = v25;
    else
    v32 = *v31;
    v33 = v51;
    v26 = v21 <= *v31;
    v47[0] = v21;
    v49 = v25;
    if ( v26 )
    v21 = v47[0];
    else
    v29 += v21 - v32;
    v21 = v32;
    v34 = v31[1];
    v50 = v34;
    if ( v51 > v34 )
    v33 = v34;
    v49 += v51 - v34;
    if ( v21 + v29 < v32 + v46 )
    v29 = v32 - v21 + v46 + 1;
    v35 = v49;
    if ( v49 + v33 < v50 + v52[0] )
    v35 = v50 + v52[0] - v33 + 1;
    v36 = v33;
    v53[1] = v36;
    v52[1] = Map_VisibleRect;
    v53[3] = v35;
    v53[0] = v21;
    v53[2] = v29;
    v52[0] = DSurface_ViewBounds;
    v37 = Bounds::Subtract(v53, v56, v52);
    Cell::CreateCrater(*v37, v37[1], v37[2], v37[3], 0);
    BuildingClass::AddOccupancy(v54[0], (__int16 *)(this + 36));
    return 1;
}

