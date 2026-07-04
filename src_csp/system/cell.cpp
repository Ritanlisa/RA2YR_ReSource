#include "cell.hpp"

char __fastcall Cell::CanPlaceBuilding(#375 *this, uint32_t *a2)
{
    int v2; // esi
    int v3; // edi
    uint32_t *v4; // ebp
    int *v5; // eax
    int v6; // esi
    int v7; // edi
    int v8; // ebx
    int *Coords; // eax
    double v10; // st7
    int v12; // [esp+1Ch] [ebp-30h]
    int v14; // [esp+24h] [ebp-28h]
    char v15[12]; // [esp+34h] [ebp-18h] BYREF
    char v16[12]; // [esp+40h] [ebp-Ch] BYREF
    if ( (unsigned __int8)House::IsAlliedWith(HouseClass_Player, this) )
    return 0;
    v2 = 0;
    v12 = 0;
    v3 = *((uint32_t *)HouseClass_Player + 78);
    v14 = v3;
    if ( v3 <= 0 )
    return 0;
    while ( 1 )
    v4 = *(uint32_t **)(*((uint32_t *)HouseClass_Player + 75) + 4 * v2);
    if ( (*(unsigned __int8 (__thiscall **)(uint32_t *))(*v4 + 848))(v4) )
    break;
    LABEL_6:
    v12 = ++v2;
    if ( v2 >= v3 )
    return 0;
    v5 = (int *)(*(int (__thiscall **)(uint32_t *, char *))(*v4 + 72))(v4, v15);
    v6 = *v5;
    v7 = v5[1];
    v8 = v5[2];
    Coords = CellClass::GetCoords(a2, (int *)v16);
    v10 = Math::Sqrt(
    (double)(v6 - *Coords) * (double)(v6 - *Coords)
    + (double)(v7 - Coords[1]) * (double)(v7 - Coords[1])
    + (double)(v8 - Coords[2]) * (double)(v8 - Coords[2]));
    if ( (int)Math::RoundToInt(v10) > *(uint32_t *)(v4[328] + 5900) << 8 )
    v2 = v12;
    v3 = v14;
    goto LABEL_6;
    return 1;
}

char __stdcall Cell::CreateCrater(int a1, int a2, int a3, int a4, char a5)
{
    int v5; // ecx
    int *v6; // eax
    int v7; // ebp
    int v8; // ecx
    int v9; // edx
    int v10; // esi
    int v11; // eax
    int v12; // eax
    int v13; // edx
    int v14; // eax
    char *v15; // esi
    char *v16; // edi
    int v17; // eax
    bool v18; // cc
    int v19; // eax
    bool v20; // bl
    int v21; // edx
    int v22; // ecx
    int v23; // edx
    const RECT *v25; // [esp+0h] [ebp-68h]
    const RECT *v26; // [esp+4h] [ebp-64h]
    int v27; // [esp+10h] [ebp-58h]
    int v28; // [esp+14h] [ebp-54h]
    int v29; // [esp+18h] [ebp-50h]
    int v30; // [esp+1Ch] [ebp-4Ch]
    int v31; // [esp+20h] [ebp-48h]
    int v32; // [esp+24h] [ebp-44h]
    int v33; // [esp+28h] [ebp-40h]
    int v34; // [esp+2Ch] [ebp-3Ch]
    int v35; // [esp+30h] [ebp-38h] BYREF
    int v36; // [esp+34h] [ebp-34h]
    int v37; // [esp+38h] [ebp-30h]
    int v38; // [esp+3Ch] [ebp-2Ch]
    uint32_t v39[5]; // [esp+40h] [ebp-28h] BYREF
    uint32_t v40[5]; // [esp+54h] [ebp-14h] BYREF
    v5 = g_CraterCreationState;
    v29 = -1;
    v30 = 0x7FFFFFFF;
    v28 = 0;
    if ( g_CraterCreationState <= 0 )
    goto LABEL_43;
    v27 = 0;
    do
    v35 = *(uint32_t *)((char *)g_CraterPool + v27);
    v36 = *(uint32_t *)((char *)g_CraterPool + v27 + 4);
    v37 = *(uint32_t *)((char *)g_CraterPool + v27 + 8);
    v38 = *(uint32_t *)((char *)g_CraterPool + v27 + 12);
    v6 = ClipRectIntersection(v40, &v35, &a1, 0, 0);
    v7 = v38;
    v31 = *v6;
    v32 = v6[1];
    v8 = v36;
    v33 = v6[2];
    v9 = v35;
    v34 = v6[3];
    if ( v37 <= 0 || v38 <= 0 )
    v10 = a4;
    v39[1] = a2;
    v11 = a3;
    v39[0] = a1;
    else if ( a3 <= 0 || a4 <= 0 )
    v39[0] = v35;
    v39[1] = v36;
    v11 = v37;
    v10 = v38;
    else
    v10 = v38;
    v11 = v37;
    if ( v35 > a1 )
    v11 = v35 + v37 - a1;
    v9 = a1;
    if ( v36 > a2 )
    v10 = v36 - a2 + v38;
    v8 = a2;
    if ( v11 + v9 < a1 + a3 )
    v11 = a3 - v9 + a1 + 1;
    if ( v10 + v8 < a4 + a2 )
    v10 = a2 - v8 + a4 + 1;
    v7 = v38;
    v39[0] = v9;
    v9 = v35;
    v39[1] = v8;
    if ( v33 > 0 && v34 > 0 )
    if ( v31 == a1 && v32 == a2 && v33 == a3 && v34 == a4 )
    LOBYTE(v12) = a5;
    if ( !a5 )
    return v12;
    LOBYTE(v12) = v27;
    if ( *((uint8_t *)g_CraterPool + v27 + 16) )
    return v12;
    else if ( v31 == v9 && v32 == v36 && v33 == v37 && v34 == v7 )
    if ( a5 || !*((uint8_t *)g_CraterPool + v27 + 16) )
    if ( v28 < g_CraterCreationState )
    v13 = v28;
    if ( v28 < --g_CraterCreationState )
    v14 = v27;
    do
    ++v13;
    v15 = (char *)g_CraterPool + v14 + 20;
    v16 = (char *)g_CraterPool + v14;
    v14 += 20;
    qmemcpy(v16, v15, 0x14u);
    while ( v13 < g_CraterCreationState );
    --v28;
    v27 -= 20;
    else
    v17 = v10 * v11;
    if ( v17 < v37 * v7 + a3 * a4 && v17 < v30 )
    v30 = v17;
    v29 = v28;
    v5 = g_CraterCreationState;
    v18 = ++v28 < g_CraterCreationState;
    v27 += 20;
    while ( v18 );
    if ( v29 == -1 )
    LABEL_43:
    v40[0] = a1;
    v40[2] = a3;
    LOBYTE(v40[4]) = a5;
    LOBYTE(v12) = dword_B0CE80;
    v40[1] = a2;
    v40[3] = a4;
    if ( v5 < dword_B0CE80
    || (byte_B0CE85 || !dword_B0CE80)
    && dword_B0CE8C > 0
    && (LOBYTE(v12) = (*(int (__thiscall **)(int *, int, uint32_t))(dword_B0CE78 + 8))(
    &dword_B0CE78,
    dword_B0CE8C + dword_B0CE80,
    0),
    (uint8_t)v12) )
    v19 = g_CraterCreationState++;
    v12 = 5 * v19;
    qmemcpy((char *)g_CraterPool + 4 * v12, v40, 0x14u);
    else
    v20 = a5 || *((uint8_t *)g_CraterPool + 20 * v29 + 16);
    v12 = Rect::Union((LPRECT)((char *)g_CraterPool + 20 * v29), v25, v26);
    v21 = *(uint32_t *)(v12 + 4);
    v39[0] = *(uint32_t *)v12;
    v22 = *(uint32_t *)(v12 + 8);
    v39[1] = v21;
    v23 = *(uint32_t *)(v12 + 12);
    LOBYTE(v12) = (uint8_t)g_CraterPool;
    v39[2] = v22;
    v39[3] = v23;
    LOBYTE(v39[4]) = v20;
    qmemcpy((char *)g_CraterPool + 20 * v29, v39, 0x14u);
    return v12;
}

