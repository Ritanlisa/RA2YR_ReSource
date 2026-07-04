#include "buildingplacementclass.hpp"

// 0x004E2B50
int  BuildingPlacementClass::Draw(uint8_t *this, int a2)
{
    char v3; // bl
    int v4; // ecx
    int v5; // eax
    int v6; // ebx
    int v7; // ebp
    int v8; // edi
    int v9; // eax
    int v10; // ecx
    int v11; // edx
    int v12; // eax
    int v13; // edi
    int v14; // ecx
    int v15; // eax
    int v16; // edx
    int v17; // eax
    int v18; // ecx
    int v19; // edx
    int v20; // eax
    int v21; // ecx
    int v22; // eax
    int v23; // edx
    int v24; // eax
    int v25; // ebx
    int v26; // edi
    int v27; // eax
    int v28; // edx
    int v29; // eax
    int v30; // edx
    int v31; // eax
    int v32; // ecx
    int v33; // ebx
    int v34; // ecx
    int v35; // edx
    int v36; // eax
    int v37; // ecx
    int v38; // eax
    int v39; // eax
    int v40; // edx
    int v41; // eax
    int v42; // edi
    int v43; // edx
    int v44; // edx
    int v45; // eax
    int v46; // eax
    int v47; // edx
    int v48; // ecx
    int v49; // ebx
    int v50; // eax
    int v51; // edx
    int v52; // edi
    int v54; // [esp+2Ch] [ebp-10h] BYREF
    int v55; // [esp+30h] [ebp-Ch]
    int v56; // [esp+34h] [ebp-8h]
    int v57; // [esp+38h] [ebp-4h]
    if ( !BuildingPlacement::HandleClick((int)this, a2) )
    return 0;
    (*(void (__thiscall **)(int, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)WWMouseClass_Instance + 32))(
    WWMouseClass_Instance,
    *((uint32_t *)this + 3),
    *((uint32_t *)this + 4),
    *((uint32_t *)this + 5),
    *((uint32_t *)this + 6));
    v3 = *(this + 30);
    v4 = *((uint32_t *)this + 5);
    v5 = *((uint32_t *)this + 4);
    v54 = *((uint32_t *)this + 3);
    v57 = *((uint32_t *)this + 6);
    v56 = v4;
    v55 = v5;
    DrawBuildingTilesSHP(&v54, v3 != 0, 1);
    v6 = (*(int (__thiscall **)(uint8_t *, uint32_t))(*(uint32_t *)this + 164))(this, *((uint32_t *)this + 15));
    v7 = (*(int (__thiscall **)(uint8_t *, uint32_t))(*(uint32_t *)this + 164))(this, *((uint32_t *)this + 16));
    v8 = (*(int (__thiscall **)(uint8_t *, uint32_t))(*(uint32_t *)this + 164))(this, *((uint32_t *)this + 13));
    v9 = *((uint32_t *)this + 13);
    if ( v9 > *((uint32_t *)this + 15) )
    if ( v9 > *((uint32_t *)this + 16) )
    if ( v9 <= *((uint32_t *)this + 12) )
    v34 = *(uint32_t *)(FileSystem_THEATER_PAL + 4);
    if ( *(this + 46) )
    if ( v34 == 1 )
    v35 = *(unsigned __int8 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 6);
    else
    v35 = *(unsigned __int16 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 12);
    v36 = *((uint32_t *)this + 3);
    v54 = v36 + 1;
    v55 = *((uint32_t *)this + 4) + 1;
    v37 = v6 - v36;
    v38 = *((uint32_t *)this + 6) - 2;
    v56 = v37 + 1;
    v57 = v38;
    (*(void (__thiscall **)(int, int *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(DSurface_Hidden_2, &v54, v35);
    if ( *(uint32_t *)(FileSystem_THEATER_PAL + 4) == 1 )
    v39 = *(unsigned __int8 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 5);
    else
    v39 = *(unsigned __int16 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 10);
    v55 = *((uint32_t *)this + 4) + 1;
    v40 = v7 - *((uint32_t *)this + 3) + 1;
    v57 = *((uint32_t *)this + 6) - 2;
    v54 = v6;
    v56 = v40;
    (*(void (__thiscall **)(int, int *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(DSurface_Hidden_2, &v54, v39);
    if ( *(uint32_t *)(FileSystem_THEATER_PAL + 4) == 1 )
    v41 = *(unsigned __int8 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 3);
    else
    v41 = *(unsigned __int16 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 6);
    v42 = v8 - *((uint32_t *)this + 3);
    v43 = *((uint32_t *)this + 6);
    v55 = *((uint32_t *)this + 4) + 1;
    v54 = v7;
    v56 = v42 + 1;
    v57 = v43 - 2;
    (*(void (__stdcall **)(int *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(&v54, v41);
    else
    if ( v34 == 1 )
    v44 = *(unsigned __int8 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 6);
    else
    v44 = *(unsigned __int16 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 12);
    v45 = *((uint32_t *)this + 4);
    v54 = *((uint32_t *)this + 3) + 1;
    v55 = v45 + 1;
    v56 = *((uint32_t *)this + 5) - 2;
    v57 = v6 - v45 + 1;
    (*(void (__thiscall **)(int, int *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(DSurface_Hidden_2, &v54, v44);
    if ( *(uint32_t *)(FileSystem_THEATER_PAL + 4) == 1 )
    v46 = *(unsigned __int8 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 5);
    else
    v46 = *(unsigned __int16 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 10);
    v47 = *((uint32_t *)this + 5);
    v48 = *((uint32_t *)this + 3) + 1;
    v55 = v6;
    v49 = *((uint32_t *)this + 4);
    v54 = v48;
    v56 = v47 - 2;
    v57 = v7 - v49 + 1;
    (*(void (__thiscall **)(int, int *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(DSurface_Hidden_2, &v54, v46);
    if ( *(uint32_t *)(FileSystem_THEATER_PAL + 4) == 1 )
    v50 = *(unsigned __int8 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 3);
    else
    v50 = *(unsigned __int16 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 6);
    v51 = *((uint32_t *)this + 5) - 2;
    v54 = *((uint32_t *)this + 3) + 1;
    v52 = v8 - *((uint32_t *)this + 4) + 1;
    v55 = v7;
    v56 = v51;
    v57 = v52;
    (*(void (__stdcall **)(int *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(&v54, v50);
    else
    v18 = *(uint32_t *)(FileSystem_THEATER_PAL + 4);
    if ( *(this + 46) )
    if ( v18 == 1 )
    v19 = *(unsigned __int8 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 6);
    else
    v19 = *(unsigned __int16 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 12);
    v20 = *((uint32_t *)this + 3);
    v54 = v20 + 1;
    v55 = *((uint32_t *)this + 4) + 1;
    v21 = v6 - v20;
    v22 = *((uint32_t *)this + 6) - 2;
    v56 = v21 + 1;
    v57 = v22;
    (*(void (__thiscall **)(int, int *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(DSurface_Hidden_2, &v54, v19);
    if ( *(uint32_t *)(FileSystem_THEATER_PAL + 4) == 1 )
    v23 = *(unsigned __int8 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 5);
    else
    v23 = *(unsigned __int16 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 10);
    v24 = *((uint32_t *)this + 3);
    v25 = v6 - v24;
    v26 = v8 - v24;
    v27 = *((uint32_t *)this + 6);
    v55 = *((uint32_t *)this + 4) + 1;
    v54 = v25 + 1;
    v56 = v26 - 1;
    v57 = v27 - 2;
    (*(void (__thiscall **)(int, int *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(DSurface_Hidden_2, &v54, v23);
    else
    if ( v18 == 1 )
    v28 = *(unsigned __int8 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 6);
    else
    v28 = *(unsigned __int16 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 12);
    v54 = *((uint32_t *)this + 3) + 1;
    v29 = *((uint32_t *)this + 4);
    v55 = v29 + 1;
    v56 = *((uint32_t *)this + 5) - 2;
    v57 = v6 - v29 + 1;
    (*(void (__thiscall **)(int, int *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(DSurface_Hidden_2, &v54, v28);
    if ( *(uint32_t *)(FileSystem_THEATER_PAL + 4) == 1 )
    v30 = *(unsigned __int8 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 5);
    else
    v30 = *(unsigned __int16 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 10);
    v31 = *((uint32_t *)this + 3);
    v54 = v31 + 1;
    v32 = *((uint32_t *)this + 4);
    v55 = v6 - v32 + 1;
    v33 = *((uint32_t *)this + 5);
    v57 = v8 - v32 + 1;
    v56 = v31 + v33 - 2;
    (*(void (__thiscall **)(int, int *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(DSurface_Hidden_2, &v54, v30);
    else
    v10 = *(uint32_t *)(FileSystem_THEATER_PAL + 4);
    if ( *(this + 46) )
    if ( v10 == 1 )
    v11 = *(unsigned __int8 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 6);
    else
    v11 = *(unsigned __int16 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 12);
    v12 = *((uint32_t *)this + 3);
    v13 = v8 - v12;
    v14 = v12 + 1;
    v15 = *((uint32_t *)this + 6);
    v54 = v14;
    v55 = *((uint32_t *)this + 4) + 1;
    v56 = v13 + 1;
    v57 = v15 - 2;
    (*(void (__thiscall **)(int, int *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(DSurface_Hidden_2, &v54, v11);
    else
    if ( v10 == 1 )
    v16 = *(unsigned __int8 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 6);
    else
    v16 = *(unsigned __int16 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 12);
    v54 = *((uint32_t *)this + 3) + 1;
    v17 = *((uint32_t *)this + 4);
    v55 = v17 + 1;
    v56 = *((uint32_t *)this + 5) - 2;
    v57 = v8 - v17 + 1;
    (*(void (__thiscall **)(int, int *, int))(*(uint32_t *)DSurface_Hidden_2 + 20))(DSurface_Hidden_2, &v54, v16);
    if ( *(this + 45) )
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)this + 156))(this);
    (*(void (__thiscall **)(int))(*(uint32_t *)WWMouseClass_Instance + 36))(WWMouseClass_Instance);
    return 1;
}

char  BuildingPlacementClass::ProcessAction(int this)
{
    uint32_t *v2; // ebp
    uint32_t *v3; // eax
    int v4; // ecx
    uint32_t *v5; // edi
    int v6; // eax
    unsigned int v7; // edi
    uint32_t *v8; // eax
    int v9; // ebx
    void *NeighbourContent; // eax
    uint8_t *v11; // ecx
    char *v12; // eax
    uint32_t *v13; // eax
    uint8_t *v14; // ecx
    char v15; // bl
    int v16; // edx
    int v17; // eax
    int v18; // ebx
    uint32_t *v19; // ecx
    int v20; // ecx
    uint32_t *v21; // edi
    int DeployDir; // ebx
    uint32_t *Value; // eax
    __int16 v24; // cx
    __int16 v25; // dx
    int v26; // ecx
    int v27; // edi
    int *v28; // eax
    uint8_t *v29; // ecx
    int *v30; // eax
    int v31; // edi
    int *v32; // edx
    int v33; // ecx
    uint8_t *v34; // ecx
    uint8_t *v35; // ecx
    int v36; // eax
    int v37; // edi
    uint32_t *v38; // eax
    int v39; // ecx
    uint32_t *v40; // eax
    int v41; // ecx
    int v42; // edi
    int v43; // eax
    int v45; // [esp+44h] [ebp-28h]
    int v46; // [esp+48h] [ebp-24h]
    char v47; // [esp+5Bh] [ebp-11h]
    int v48; // [esp+5Ch] [ebp-10h] BYREF
    int v49; // [esp+60h] [ebp-Ch] BYREF
    int v50; // [esp+64h] [ebp-8h]
    int v51; // [esp+68h] [ebp-4h]
    v2 = (uint32_t *)(this + 64);
    v3 = Coord::To_Cell(&MapClass_Instance, (uint32_t *)(this + 64));
    v4 = *(uint32_t *)(this + 12);
    v5 = v3;
    if ( !*(uint8_t *)(v4 + 1709) )
    v6 = v3[59];
    if ( (v6 == 2 || v6 == 6)
    && *(uint32_t *)(v4 + 180) != 7
    && (*(int (__thiscall **)(int))(*(uint32_t *)v4 + 388))(v4) != 7 )
    if ( ObjectClass::HasLinkedObject(*(uint32_t *)(this + 12)) )
    v7 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 7);
    v8 = (uint32_t *)(*(int (__thiscall **)(uint32_t))(**(uint32_t **)(this + 12) + 444))(*(uint32_t *)(this + 12));
    v9 = **(uint32_t **)(this + 12);
    NeighbourContent = Cell::GetNeighbourContent(v8, v7);
    (*(void (__thiscall **)(uint32_t, void *, int))(v9 + 1152))(*(uint32_t *)(this + 12), NeighbourContent, 1);
    v11 = *(uint8_t **)(this + 12);
    LOBYTE(v9) = v11[116];
    (*(void (__thiscall **)(uint8_t *, uint32_t))(*(uint32_t *)v11 + 292))(v11, 0);
    v12 = *(char **)(this + 12);
    v12[116] = v9;
    *(uint32_t *)(this + 80) = 3;
    else
    v13 = (uint32_t *)(*(int (__stdcall **)(uint32_t))(**(uint32_t **)(this + 12) + 444))(*(uint32_t *)(this + 12));
    CellClass::AttachObject(v13, v46);
    v14 = *(uint8_t **)(this + 12);
    v15 = v14[116];
    LOBYTE(v12) = (*(int (__thiscall **)(uint8_t *, uint32_t))(*(uint32_t *)v14 + 292))(v14, 0);
    *(uint8_t *)(*(uint32_t *)(this + 12) + 116) = v15;
    v16 = *(uint32_t *)(this + 44);
    *(uint32_t *)(this + 80) = 2;
    *(uint32_t *)(this + 128) = v16;
    return (char)v12;
    v48 = (*(int (__thiscall **)(uint32_t, uint32_t *, int, int, uint32_t, int))(**(uint32_t **)(this + 12) + 428))(
    *(uint32_t *)(this + 12),
    v5,
    -1,
    -1,
    0,
    1);
    LOBYTE(v17) = Input::OffsetToDirection((uint32_t *)(this + 64));
    v18 = v17;
    if ( (unsigned __int8)BuildingPlacement::IsPlacementFlagSet(v17, BYTE1(v5[80]) & 1)
    || (v47 = 0, *(uint8_t *)(this + 144)) )
    v47 = 1;
    if ( (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(this + 12) + 44))(*(uint32_t *)(this + 12)) == 1 && !v18 )
    v47 = 1;
    v19 = *(uint32_t **)(this + 12);
    if ( v19[45] != 7 && (*(int (__thiscall **)(uint32_t *))(*v19 + 388))(v19) != 7 )
    if ( !v47
    || (*((uint32_t *)Coord::To_Cell(&MapClass_Instance, (uint32_t *)(this + 64)) + 80) & 0x100) == 0
    && (v48 > 2 || v48 == 2 && !*(uint8_t *)(this + 144)) )
    LOBYTE(v12) = (*(int (__stdcall **)(int))(*(uint32_t *)(this + 4) + 72))(this + 4);
    return (char)v12;
    if ( !*(uint8_t *)(this + 144) )
    v20 = *(uint32_t *)(this + 12);
    *(uint8_t *)(this + 144) = 1;
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v20 + 240))(v20, this + 64);
    v21 = *(uint32_t **)(this + 12);
    if ( v21 )
    if ( (*(int (__thiscall **)(uint32_t))(*v21 + 44))(*(uint32_t *)(this + 12)) == 1 )
    if ( *(uint8_t *)(v21[433] + 3603) )
    if ( !*(uint8_t *)(*(uint32_t *)(this + 12) + 1709) )
    DeployDir = RulesClass_Instance->DeployDir;
    Value = ProgressTimer::GetValue((_WORD *)(this + 84), &v48);
    LOBYTE(v24) = 0;
    HIBYTE(v24) = DeployDir;
    if ( *(_WORD *)Value != v24 )
    LOBYTE(v25) = 0;
    HIBYTE(v25) = RulesClass_Instance->DeployDir;
    LOWORD(v48) = v25;
    FacingClass::Update((char *)(this + 84), &v48);
    v26 = *(uint32_t *)(this + 12);
    *(uint32_t *)(this + 128) = 0;
    v27 = (*(int (__thiscall **)(int))(*(uint32_t *)v26 + 456))(v26);
    v12 = *(char **)(this + 12);
    if ( !v12[140] )
    v28 = (int *)(v12 + 156);
    v49 = *v28;
    v50 = v28[1];
    v51 = v28[2];
    v12 = (char *)Coord::To_Cell(&MapClass_Instance, &v49);
    if ( (*((uint32_t *)v12 + 80) & 0x100) != 0 )
    LOBYTE(v12) = dword_ABC5DC;
    if ( v27 >= dword_ABC5DC )
    v27 -= dword_ABC5DC;
    if ( !v27 )
    (*(void (__thiscall **)(uint32_t, uint32_t, uint32_t))(**(uint32_t **)(this + 12) + 1348))(*(uint32_t *)(this + 12), 0, 0);
    (*(void (__thiscall **)(uint32_t, uint32_t))(**(uint32_t **)(this + 12) + 292))(*(uint32_t *)(this + 12), 0);
    v29 = *(uint8_t **)(this + 12);
    if ( !v29[1709] )
    (*(void (__thiscall **)(uint8_t *, int))(*(uint32_t *)v29 + 436))(v29, this + 64);
    v30 = (int *)(*(uint32_t *)(this + 12) + 156);
    v49 = *v30;
    v50 = v30[1];
    v31 = v30[2];
    v49 = *v30;
    v50 = v30[1];
    v51 = v30[2];
    if ( v31 > Cell::GetGroundHeight(&v49) )
    v32 = (int *)(*(uint32_t *)(this + 12) + 156);
    v49 = *v32;
    v50 = v32[1];
    v51 = v32[2];
    if ( (*((uint32_t *)Coord::To_Cell(&MapClass_Instance, &v49) + 80) & 0x100) != 0 )
    *(uint8_t *)(*(uint32_t *)(this + 12) + 140) = 1;
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)(this + 12) + 292))(*(uint32_t *)(this + 12), 1);
    *v2 = dword_ABC5A8;
    *(uint32_t *)(this + 68) = dword_ABC5AC;
    v33 = *(uint32_t *)(this + 12);
    *(uint32_t *)(this + 72) = dword_ABC5B0;
    *(uint8_t *)(this + 76) = 0;
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v33 + 396))(v33, 2);
    (*(void (__thiscall **)(uint32_t, uint32_t, int))(**(uint32_t **)(this + 12) + 1152))(*(uint32_t *)(this + 12), 0, 1);
    v34 = *(uint8_t **)(this + 12);
    LOBYTE(v12) = v34[144];
    if ( (uint8_t)v12 )
    LOBYTE(v12) = v34[129];
    if ( !(uint8_t)v12 )
    LOBYTE(v12) = v34[141];
    if ( !(uint8_t)v12 )
    (*(void (__thiscall **)(uint8_t *, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)v34 + 1164))(v34, 0, 0, 0, 0);
    v35 = *(uint8_t **)(this + 12);
    if ( v35[144] )
    (*(void (__thiscall **)(uint8_t *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)v35 + 1160))(
    v35,
    0,
    0,
    0,
    0,
    0);
    v36 = *(uint32_t *)(this + 12);
    if ( *(uint8_t *)(v36 + 144) )
    v49 = *(uint32_t *)(v36 + 156);
    v50 = *(uint32_t *)(v36 + 160);
    v51 = *(uint32_t *)(v36 + 164);
    MapClass::RevealArea2(&v49, *(uint32_t *)(v36 + 608) - 3, *(uint32_t *)(v36 + 608) + 3, 0);
    v48 = *(uint32_t *)(this + 12);
    v37 = v48;
    if ( *(uint32_t *)((*(int (**)(void))(*(uint32_t *)v48 + 444))() + 224) == v37 )
    v38 = (uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)v37 + 444))(v37);
    CellClass::AttachObject(v38, 0);
    GadgetGrid::RemoveItem(g_CellClassManager, *(uint32_t *)(this + 12));
    v39 = *(uint32_t *)(this + 12);
    *(uint32_t *)(this + 80) = 0;
    v45 = v39;
    v40 = (uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)v39 + 444))(v39);
    CrateClass::ProcessPickup(v40, v45);
    v12 = *(char **)(this + 12);
    v12[1710] = 1;
    *(uint8_t *)(*(uint32_t *)(this + 12) + 1063) = 0;
    *(uint8_t *)(*(uint32_t *)(this + 12) + 1061) = 0;
    v41 = *(uint32_t *)(this + 12);
    *(uint8_t *)(this + 144) = 0;
    if ( v41 )
    v12 = (char *)(*(int (__thiscall **)(int))(*(uint32_t *)v41 + 44))(v41);
    if ( v12 == (char *)1 )
    v42 = *(uint32_t *)(this + 12);
    if ( v42 )
    v43 = (*(int (__thiscall **)(uint32_t))(*(uint32_t *)v42 + 44))(*(uint32_t *)(this + 12)) == 1 ? v42 : 0;
    else
    v43 = 0;
    v12 = (char *)(*(int (__thiscall **)(int))(*(uint32_t *)v43 + 132))(v43);
    if ( v12[1709] )
    v12 = *(char **)(this + 12);
    v12[308] = 0;
    return (char)v12;
}

