#include "tacticalclass.hpp"

int  TacticalClass::_vt73(#377 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

char  TacticalClass::_vt103(void *this)
{
    return *(uint8_t *)((*(int (__thiscall **)(void *))(*(uint32_t *)this + 132))(this) + 3233);
}

int  TacticalClass::_vt132(#377 *this)
{
    int result; // eax
    *((uint8_t *)this + 472) = 0;
    return result;
}

int  TacticalClass::_vt134(#377 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

char  TacticalClass::UpdateScrollTarget(int this, int a2, int a3, int a4, int a5, char a6)
{
    int v6; // eax
    if ( *(uint32_t *)(this + 36) != a2 || (v6 = *(uint32_t *)(this + 40), v6 != a3) || v6 != a5 )
    *(uint32_t *)(this + 36) = a2;
    *(uint32_t *)(this + 44) = a4;
    LOBYTE(v6) = *(uint8_t *)(this + 72);
    *(uint32_t *)(this + 40) = a3;
    *(uint32_t *)(this + 48) = a5;
    if ( (uint8_t)v6 )
    LOBYTE(v6) = TacticalClass::ScrollView((uint32_t *)this, a6);
    return v6;
}

// 0x00556B30
int  TacticalClass::GetField(uint32_t *this)
{
    int result; // eax
    result = *(this + 1);
    if ( result )
    *(uint32_t *)(result + 168) = 0;
    *(this + 1) = 0;
    return result;
}

// 0x005C0A70
void  TacticalClass::ClearVector(int this)
{
    void *v2; // eax
    v2 = *(void **)(this + 4);
    *(uint32_t *)(this + 16) = 0;
    if ( v2 && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(v2);
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

unsigned int  TacticalClass::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

int  TacticalClass::_vt06(uint32_t *this, int a2)
{
    return *(uint32_t *)(*(this + 1) + 4 * a2);
}

// 0x005C0AD0
char  TacticalClass::CompareVector(int *this, int a2)
{
    int v2; // esi
    int v3; // edx
    uint32_t *v4; // eax
    int v5; // ecx
    v2 = *(this + 2);
    if ( v2 == *(uint32_t *)(a2 + 8) )
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (uint32_t *)*(this + 1);
    v5 = *(uint32_t *)(a2 + 4) - (uint32_t)v4;
    while ( *v4 == *(uint32_t *)((char *)v4 + v5) )
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

// 0x005C0C50
char  TacticalClass::ReallocVector(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // edi
    int v5; // ecx
    int i; // eax
    int v7; // eax
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    *((uint8_t *)this + 12) = 1;
    if ( !v4 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v5 = *((uint32_t *)this + 2);
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(uint32_t *)(*((uint32_t *)this + 1) + 4 * i - 4) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v4;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v7 = *((uint32_t *)this + 2);
    if ( v7 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v7;
    return 1;
}

// 0x005C0D00
int  TacticalClass::FindInVector(int *this, uint32_t *a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)*(this + 1); *i != *a2; ++i )
    if ( ++result >= v2 )
    return -1;
    return result;
}

uint32_t * TacticalClass::DestroyVector(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<char const *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  TacticalClass::ProcessMouseClick(uint8_t *this, char a2, int a3, int a4)
{
    int v4; // esi
    int v5; // eax
    int v6; // esi
    int v7; // esi
    int ClosestEnemy; // eax
    int v9; // eax
    int v10; // eax
    __int16 v11; // di
    __int16 v12; // si
    int v13; // kr0C_4
    int v14; // ecx
    int v15; // ebx
    int v16; // edx
    int v17; // eax
    __int16 v18; // ax
    int v19; // eax
    __int16 v20; // ax
    __int16 v21; // bx
    int v22; // eax
    __int16 v23; // ax
    uint32_t *v24; // eax
    int *Coords; // eax
    int v27; // [esp+10h] [ebp-3Ch] BYREF
    void *v28; // [esp+14h] [ebp-38h] BYREF
    char v29; // [esp+18h] [ebp-34h]
    uint8_t *v30; // [esp+1Ch] [ebp-30h]
    uint32_t v31[2]; // [esp+20h] [ebp-2Ch] BYREF
    uint32_t v32[2]; // [esp+28h] [ebp-24h] BYREF
    int GroundHeight; // [esp+30h] [ebp-1Ch]
    int v34; // [esp+34h] [ebp-18h] BYREF
    int v35; // [esp+38h] [ebp-14h]
    int v36; // [esp+3Ch] [ebp-10h]
    int v37[3]; // [esp+40h] [ebp-Ch] BYREF
    v30 = this;
    if ( (a2 & 0x22) == 0 && (dword_880C98 != 3 || dword_880C94 != 1) && dword_880C98 == 1 && dword_880C94 == 1 )
    if ( (a2 & 0x55) != 0 )
    v4 = *(uint32_t *)g_BinkMoviePlayer;
    v5 = *((uint32_t *)g_BinkMoviePlayer + 1);
    else
    v4 = (*(int (__thiscall **)(int))(*(uint32_t *)WWMouseClass_Instance + 44))(WWMouseClass_Instance);
    v5 = (*(int (__thiscall **)(int))(*(uint32_t *)WWMouseClass_Instance + 48))(WWMouseClass_Instance);
    v6 = v4 - (byte_A8EB7C != 0 ? g_Map_VisibleRectOffset : 0);
    if ( v6 >= dword_880C84
    && v6 < dword_880C84 + dword_880C8C
    && v5 >= dword_880C88
    && v5 < dword_880C88 + dword_880C90 )
    v31[1] = v5;
    v31[0] = v6;
    v27 = 0;
    v28 = 0;
    TacticalClass::ScreenToCellLookup(v31, &v27, &v28);
    if ( v27 == dword_B048C0 )
    LABEL_74:
    COMObject::ActivateThunk(v30, 0, a3, 0);
    return 1;
    v32[0] = ((__int16)v27 << 8) + 128;
    v32[1] = (SHIWORD(v27) << 8) + 128;
    GroundHeight = 0;
    GroundHeight = Cell::GetGroundHeight(v32);
    if ( !Cell::IsPassable(v32) || (v29 = 1, !g_hWnd) )
    v29 = 0;
    if ( (a2 & 0x50) != 0 )
    LABEL_62:
    if ( (a2 & 0x11) != 0 )
    v11 = HIWORD(v27);
    v12 = v27;
    if ( v27 )
    v13 = g_Map_VisibleRectOffset / 60 + 2;
    v14 = g_Cell_PositionLUT - v13 / 2 - 1;
    v15 = g_DSurface_WindowOffset / 60 + g_Cell_PositionLUT + 1;
    v16 = 2 * g_CellPositionOffset - g_DSurface_WindowOffset / 60 + g_Cell_PositionLUT - 1;
    v17 = SHIWORD(v27) - (__int16)v27;
    if ( v17 > v14 )
    v18 = v17 - v14;
    v11 = HIWORD(v27) - v18;
    v12 = v18 + v27;
    HIWORD(v27) -= v18;
    LOWORD(v27) = v18 + v27;
    v19 = v12 - v11;
    if ( v19 > g_Cell_PositionLUT - v13 / 2 - 2 )
    v20 = v19 - v14 + 1;
    v11 += v20;
    v12 -= v20;
    HIWORD(v27) = v11;
    LOWORD(v27) = v12;
    if ( v11 + v12 < v15 )
    v21 = v15 - v11 - v12;
    v12 += v21;
    v11 += v21;
    LOWORD(v27) = v12;
    HIWORD(v27) = v11;
    v22 = v12 + v11;
    if ( v22 > v16 )
    v23 = v22 - v16;
    LOWORD(v27) = v12 - v23;
    HIWORD(v27) = v11 - v23;
    v24 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v27);
    Coords = CellClass::GetCoords(v24, v37);
    v34 = *Coords;
    v35 = Coords[1];
    v36 = Coords[2];
    Tactical::SetTacticalPosition(&v34);
    MapClass::MarkForRedraw(&MapClass_Instance, 1);
    if ( g_ZBufferDescriptor )
    *((uint32_t *)g_ZBufferDescriptor + 9) = 0x8000;
    goto LABEL_74;
    if ( g_SelectionManager )
    if ( g_BuildingPlacementState )
    if ( g_BuildingPlacementState != 1 )
    if ( g_BuildingPlacementState != 2 )
    goto LABEL_35;
    goto LABEL_34;
    LABEL_32:
    v7 = 37;
    goto LABEL_51;
    else if ( g_BuildingPlacementState )
    if ( g_BuildingPlacementState != 1 )
    if ( g_BuildingPlacementState != 2 )
    if ( g_BuildingPlacementState != 5 )
    if ( g_BuildingPlacementState != 7 )
    if ( g_BuildingPlacementState != 8 )
    if ( g_BuildingPlacementState != 9 )
    if ( g_BuildingPlacementState != 11 )
    if ( g_BuildingPlacementState != 6 )
    LABEL_61:
    Mission::SetAndCall((int *)&MapClass_Instance, 0, 1);
    goto LABEL_62;
    v7 = 65;
    LABEL_51:
    switch ( v7 )
    case 1:
    case 2:
    case 3:
    case 5:
    case 6:
    case 9:
    case 16:
    case 20:
    case 26:
    case 38:
    case 41:
    case 65:
    case 66:
    case 67:
    case 72:
    break;
    default:
    v7 = 0;
    v28 = 0;
    break;
    if ( (!FactoryClass::GetFlag() || sub_639DA0() == -1) && v7 )
    if ( (a2 & 8) != 0 )
    TacticalClass::HandlePlayerAction(
    (char *)&MapClass_Instance,
    (__int16 *)&v27,
    v29,
    v28,
    v7,
    1);
    if ( (a2 & 4) != 0 && !byte_A8ED9D )
    v34 = ((__int16)v27 << 8) + 128;
    v35 = (SHIWORD(v27) << 8) + 128;
    v36 = 0;
    PlayerClass::ExecuteCommand(
    (char *)&MapClass_Instance,
    (int)&v34,
    (__int16 *)&v27,
    (void*375 **)v28,
    v7,
    1);
    goto LABEL_74;
    goto LABEL_61;
    goto LABEL_42;
    goto LABEL_40;
    goto LABEL_38;
    goto LABEL_36;
    LABEL_35:
    if ( g_BuildingPlacementState != 7 )
    if ( g_BuildingPlacementState != 8 )
    if ( g_BuildingPlacementState != 9 )
    if ( g_BuildingPlacementState != 11 )
    if ( g_BuildingPlacementState == 5 )
    v7 = 41;
    else if ( g_BuildingPlacementState == 6 )
    v7 = 65;
    else
    if ( v28 )
    ClosestEnemy = FindRadarClosestEnemy(0, (int)v28);
    v9 = (*(int (__thiscall **)(int, void *, uint32_t))(*(uint32_t *)ClosestEnemy + 116))(
    ClosestEnemy,
    v28,
    0);
    else
    v10 = FindRadarClosestEnemy((__int16 *)&v27, 0);
    v9 = (*(int (__thiscall **)(int, int *, uint32_t, uint32_t))(*(uint32_t *)v10 + 112))(v10, &v27, 0, 0);
    v7 = v9;
    goto LABEL_51;
    LABEL_42:
    v7 = 72;
    goto LABEL_51;
    LABEL_40:
    v7 = 68;
    goto LABEL_51;
    LABEL_38:
    v7 = 67;
    goto LABEL_51;
    LABEL_36:
    v7 = 66;
    goto LABEL_51;
    LABEL_34:
    v7 = 38;
    goto LABEL_51;
    goto LABEL_32;
    v7 = 20;
    goto LABEL_51;
    Mouse::SetCursor((int)&MapClass_Instance, 0, 0);
    return 0;
}

uint32_t * TacticalClass::sub_658780(uint32_t *Block, char a2)
{
    GadgetClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

// 0x0065ACE0
int  TacticalClass::UpdateObjects(#377 *this)
{
    int v2; // edi
    int result; // eax
    int v4; // [esp+Ch] [ebp+4h]
    v2 = 0;
    result = *((uint32_t *)this + 58);
    if ( result > 0 )
    do
    if ( *(uint32_t *)(*((uint32_t *)this + 57) + 4 * v2) )
    (*(void (__thiscall **)(void*377 *, int, void *, uint32_t))(*(uint32_t *)this + 636))(
    this,
    v4,
    &unk_A8EC30,
    *(uint32_t *)(*((uint32_t *)this + 57) + 4 * v2));
    result = *((uint32_t *)this + 58);
    ++v2;
    while ( v2 < result );
    return result;
}

int *__stdcall TacticalClass::AdjustForZShapeMove(int *a1, uint32_t *a2)
{
    int v2; // kr08_4
    v2 = 30 * a2[1] / 2 + 30 * *a2 / 2;
    *a1 = (-60 * a2[1] / 2 + 60 * *a2 / 2) / 256;
    a1[1] = v2 / 256;
    return a1;
}

char  TacticalClass::ScrollViewport(int this)
{
    int v1; // eax
    char v2; // bl
    uint32_t *v4; // ebp
    double v5; // st7
    uint32_t *v6; // edi
    int *v7; // eax
    double v8; // st7
    int v9; // ebx
    int v10; // eax
    int v11; // ecx
    signed int v12; // edi
    signed int v13; // eax
    int WaypointAnimationSpeed; // edi
    DWORD Ticks; // eax
    int v16; // edx
    int v17; // eax
    int v18; // eax
    int v19; // eax
    int v20; // ecx
    int v22; // [esp+8h] [ebp-14h] BYREF
    int v23; // [esp+Ch] [ebp-10h]
    int v24; // [esp+14h] [ebp-8h]
    LOBYTE(v1) = g_NetworkEventPending;
    v2 = 0;
    if ( (g_NetworkEventPending & 2) != 0 )
    return v1;
    if ( *(wchar_t **)(this + 168) != CurrentFrame )
    if ( g_BounceClassInit )
    v4 = (uint32_t *)(this + 208);
    if ( (*(uint32_t *)(this + 208) != dword_B0CE08 || *(uint32_t *)(this + 212) != dword_B0CE0C)
    && *(float *)(this + 216) != 0.0 )
    v5 = *(float *)(this + 220) + *(float *)(this + 216);
    *(float *)(this + 220) = v5;
    if ( v5 > 1.0 )
    *(uint32_t *)(this + 220) = 1065353216;
    v6 = (uint32_t *)(this + 200);
    v7 = (int *)TacticalClass::CalcInverseAlpha(this + 208, *(float *)(this + 220));
    v8 = *(float *)(this + 220);
    v9 = *v7;
    v24 = v7[1];
    if ( v8 >= 1.0 )
    *v4 = 0;
    *v6 = 0;
    *(uint32_t *)(this + 212) = 0;
    *(uint32_t *)(this + 204) = 0;
    *(uint32_t *)(this + 216) = 0;
    *(uint32_t *)(this + 220) = 0;
    v22 = v9;
    v23 = v24;
    if ( !ClampCoordMap(&v22) || ArmageddonMode )
    v11 = v24;
    v10 = v9;
    else
    v10 = v22;
    v11 = v23;
    *(uint32_t *)(this + 3428) = v10;
    *(uint32_t *)(this + 3444) = v10;
    *(uint32_t *)(this + 3432) = v11;
    *(uint32_t *)(this + 3448) = v11;
    TacticalClass::CalcViewportCells(this);
    *(uint8_t *)(this + 3453) = 1;
    v2 = 1;
    v12 = *(uint32_t *)(this + 3500);
    if ( *(uint32_t *)(this + 3492) != -1 )
    v13 = Timer::GetTicks() - *(uint32_t *)(this + 3492);
    if ( v13 >= v12 )
    LABEL_20:
    WaypointAnimationSpeed = RulesClass_Instance->WaypointAnimationSpeed;
    Ticks = Timer::GetTicks();
    v16 = v24;
    *(uint32_t *)(this + 3492) = Ticks;
    v17 = *(uint32_t *)(this + 3488);
    *(uint32_t *)(this + 3496) = v16;
    *(uint32_t *)(this + 3500) = WaypointAnimationSpeed;
    *(uint32_t *)(this + 3488) = v17 + 1;
    goto LABEL_21;
    v12 -= v13;
    if ( v12 )
    goto LABEL_21;
    goto LABEL_20;
    LABEL_21:
    LOBYTE(v1) = (uint8_t)CurrentFrame;
    *(uint32_t *)(this + 168) = CurrentFrame;
    if ( *(uint32_t *)(this + 3444) != *(uint32_t *)(this + 3428)
    || (v1 = *(uint32_t *)(this + 3432), *(uint32_t *)(this + 3448) != v1) )
    if ( !v2 )
    v18 = *(uint32_t *)(this + 3444);
    v23 = *(uint32_t *)(this + 3448);
    v22 = v18;
    if ( !ClampCoordMap(&v22) || ArmageddonMode )
    v19 = *(uint32_t *)(this + 3444);
    v20 = *(uint32_t *)(this + 3448);
    else
    v19 = v22;
    v20 = v23;
    *(uint32_t *)(this + 3428) = v19;
    *(uint32_t *)(this + 3444) = v19;
    *(uint32_t *)(this + 3432) = v20;
    *(uint32_t *)(this + 3448) = v20;
    LOBYTE(v1) = TacticalClass::CalcViewportCells(this);
    *(uint8_t *)(this + 3453) = 1;
    return v1;
}

signed int  TacticalClass::RenderIsometricOverlay(uint32_t *this, int *a2, int *a3, char a4)
{
    char v4; // bl
    uint32_t *v6; // ebp
    int *v7; // eax
    int v8; // edi
    int v9; // ecx
    int v10; // eax
    int *v11; // eax
    signed int result; // eax
    int v13; // ebx
    int v14; // edi
    int *v15; // ecx
    int v16; // ecx
    int v17; // [esp+Ch] [ebp-58h] BYREF
    int v18; // [esp+10h] [ebp-54h] BYREF
    uint32_t v19[3]; // [esp+18h] [ebp-4Ch] BYREF
    int v20; // [esp+24h] [ebp-40h] BYREF
    int v21; // [esp+28h] [ebp-3Ch]
    signed int v22; // [esp+2Ch] [ebp-38h]
    int v23; // [esp+30h] [ebp-34h]
    int v24[8]; // [esp+34h] [ebp-30h] BYREF
    uint32_t v25[4]; // [esp+54h] [ebp-10h] BYREF
    int v26; // [esp+68h] [ebp+4h]
    v4 = a4;
    if ( a4 )
    TacticalClass::RenderIsometric((int)this, &DSurface_ViewBounds, (int)&DSurface_ViewBounds);
    else
    if ( a2[2] > 0 && a2[3] > 0 )
    TacticalClass::RenderIsometric((int)this, a2, (int)a2);
    if ( a3[2] > 0 && a3[3] > 0 )
    TacticalClass::RenderIsometric((int)this, a3, (int)a3);
    if ( (int)*(this + 56) > 0 && !a4 )
    v26 = 0;
    v6 = this + 57;
    do
    Coord::Subtract(
    v19,
    ((((__int16)*(uint32_t *)(*v6 + 36) << 8) + 128) / 256) << 8,
    ((((__int16)HIWORD(*(uint32_t *)(*v6 + 36)) << 8) + 128) / 256) << 8,
    0);
    v20 = v19[0];
    v21 = v19[1];
    v22 = v19[2];
    v7 = Coord::To_ScreenRaw(&v18, &v20);
    v8 = *(this + 45);
    v9 = *v7 - *(this + 44);
    v10 = v7[1];
    v24[0] = v9 - 30;
    v24[3] = 30;
    v24[1] = v10 - v8 + Map_VisibleRect;
    v24[2] = 60;
    v11 = ClipRectIntersection(v25, &DSurface_ViewBounds, v24, 0, 0);
    v24[4] = *v11;
    v24[5] = v11[1];
    if ( v11[2] > 0 && v11[3] > 0 )
    v17 = *(uint32_t *)(*v6 + 36);
    TacticalMapClass::ProcessCell(this, (__int16 *)&v17, (int)v24);
    ++v6;
    ++v26;
    while ( v26 < *(this + 56) );
    v4 = a4;
    result = g_CraterCreationState;
    if ( g_CraterCreationState )
    if ( !v4 )
    result = g_CraterCreationState - 1;
    if ( g_CraterCreationState - 1 >= 0 )
    v13 = g_CraterCreationState;
    v14 = 20 * result;
    do
    v20 = *(uint32_t *)((char *)g_CraterPool + v14);
    v21 = *(uint32_t *)((char *)g_CraterPool + v14 + 4);
    v22 = *(uint32_t *)((char *)g_CraterPool + v14 + 8);
    v23 = *(uint32_t *)((char *)g_CraterPool + v14 + 12);
    v21 += Map_VisibleRect;
    v15 = ClipRectIntersection(v25, &DSurface_ViewBounds, &v20, 0, 0);
    v20 = *v15;
    v21 = v15[1];
    result = v15[2];
    v22 = result;
    v16 = v15[3];
    v23 = v16;
    if ( result > 0 && v16 > 0 )
    result = TacticalClass::RenderIsometric((int)this, &v20, (int)&v20);
    v14 -= 20;
    --v13;
    while ( v13 );
    return result;
}

signed int  TacticalClass::DrawTerrainPartial(uint32_t *this, int *a2, int *a3, char a4)
{
    uint32_t *v5; // ebx
    int *v6; // eax
    int v7; // edi
    int v8; // ecx
    int v9; // eax
    int *v10; // eax
    int v11; // ecx
    signed int result; // eax
    int v13; // ebx
    int v14; // edi
    int *v15; // ecx
    int v16; // ecx
    int v17; // [esp+Ch] [ebp-54h] BYREF
    uint32_t v18[3]; // [esp+14h] [ebp-4Ch] BYREF
    int v19; // [esp+20h] [ebp-40h] BYREF
    int v20; // [esp+24h] [ebp-3Ch]
    signed int v21; // [esp+28h] [ebp-38h]
    int v22; // [esp+2Ch] [ebp-34h]
    int v23[4]; // [esp+30h] [ebp-30h] BYREF
    int v24[2]; // [esp+40h] [ebp-20h] BYREF
    int v25; // [esp+48h] [ebp-18h]
    int v26; // [esp+4Ch] [ebp-14h]
    uint32_t v27[4]; // [esp+50h] [ebp-10h] BYREF
    int v28; // [esp+6Ch] [ebp+Ch]
    if ( a4 )
    TacticalClass::DrawTerrain((int)this, &DSurface_ViewBounds, &DSurface_ViewBounds);
    else
    if ( a2[2] > 0 && a2[3] > 0 )
    TacticalClass::DrawTerrain((int)this, a2, a2);
    if ( a3[2] > 0 && a3[3] > 0 )
    TacticalClass::DrawTerrain((int)this, a3, a3);
    if ( (int)*(this + 56) > 0 && !a4 )
    v28 = 0;
    v5 = this + 57;
    do
    Coord::Subtract(
    v18,
    ((((__int16)*(uint32_t *)(*v5 + 36) << 8) + 128) / 256) << 8,
    ((((__int16)HIWORD(*(uint32_t *)(*v5 + 36)) << 8) + 128) / 256) << 8,
    0);
    v19 = v18[0];
    v20 = v18[1];
    v21 = v18[2];
    v6 = Coord::To_ScreenRaw(&v17, &v19);
    v7 = *(this + 45);
    v8 = *v6 - *(this + 44);
    v9 = v6[1];
    v23[0] = v8 - 30;
    v23[3] = 30;
    v23[1] = v9 - v7 + Map_VisibleRect;
    v23[2] = 60;
    v10 = ClipRectIntersection(v27, &DSurface_ViewBounds, v23, 0, 0);
    v24[0] = *v10;
    v24[1] = v10[1];
    v25 = v10[2];
    v11 = v10[3];
    v26 = v11;
    if ( v25 > 0 && v11 > 0 )
    TacticalClass::DrawTerrain((int)this, v24, v24);
    ++v5;
    ++v28;
    while ( v28 < *(this + 56) );
    result = g_CraterCreationState;
    if ( g_CraterCreationState )
    result = g_CraterCreationState - 1;
    if ( g_CraterCreationState - 1 >= 0 )
    v13 = g_CraterCreationState;
    v14 = 20 * result;
    do
    v19 = *(uint32_t *)((char *)g_CraterPool + v14);
    v20 = *(uint32_t *)((char *)g_CraterPool + v14 + 4);
    v21 = *(uint32_t *)((char *)g_CraterPool + v14 + 8);
    v22 = *(uint32_t *)((char *)g_CraterPool + v14 + 12);
    v20 += Map_VisibleRect;
    v15 = ClipRectIntersection(v27, &DSurface_ViewBounds, &v19, 0, 0);
    v19 = *v15;
    v20 = v15[1];
    result = v15[2];
    v21 = result;
    v16 = v15[3];
    v22 = v16;
    if ( result > 0 && v16 > 0 )
    result = TacticalClass::DrawTerrain((int)this, &v19, &v19);
    v14 -= 20;
    --v13;
    while ( v13 );
    return result;
}

int  TacticalClass::CalcAllDrawPositions(uint32_t *this, int *a2, int *a3, int *a4, char a5)
{
    int v6; // ebx
    uint32_t **v7; // ebp
    int *Coords; // eax
    int *v9; // eax
    int v10; // ecx
    int v11; // esi
    int result; // eax
    char *v13; // ecx
    int v14; // ebp
    int v15; // edx
    int v16; // ebx
    uint32_t *v17; // eax
    uint32_t v18[2]; // [esp+10h] [ebp-38h] BYREF
    int v19[4]; // [esp+18h] [ebp-30h] BYREF
    int v20; // [esp+28h] [ebp-20h] BYREF
    int v21; // [esp+2Ch] [ebp-1Ch]
    int v22; // [esp+30h] [ebp-18h]
    int v23; // [esp+34h] [ebp-14h]
    int v24[4]; // [esp+38h] [ebp-10h] BYREF
    int v25; // [esp+58h] [ebp+10h]
    if ( (int)*(this + 56) <= 0 )
    if ( !a5 )
    goto LABEL_11;
    LABEL_10:
    TacticalClass::CalcBuildingDrawPos((int)this, &DSurface_ViewBounds);
    goto LABEL_11;
    if ( a5 )
    goto LABEL_10;
    v6 = 0;
    v7 = (uint32_t **)(this + 57);
    do
    Coords = CellClass::GetCoords(*v7, v24);
    v20 = *Coords;
    v21 = Coords[1];
    v22 = 0;
    v9 = Coord::To_ScreenRaw(v19, &v20);
    v10 = v9[1] - *(this + 45);
    v18[0] = *v9 - *(this + 44) + DSurface_ViewBounds - 30;
    v18[1] = v10 + Map_VisibleRect - 15;
    if ( g_hWnd )
    TacticalClass::RenderCellFogOfWar(v18, a4);
    UpdateSpotlightsFoo(v18, a4);
    ++v6;
    ++v7;
    while ( v6 < *(this + 56) );
    LABEL_11:
    v11 = 0;
    if ( a2[2] > 0 && a2[3] > 0 && !a5 )
    TacticalClass::CalcBuildingDrawPos((int)this, a2);
    if ( a3[2] > 0 && a3[3] > 0 && !a5 )
    TacticalClass::CalcBuildingDrawPos((int)this, a3);
    result = g_CraterCreationState;
    v25 = 0;
    if ( g_CraterCreationState > 0 )
    v13 = (char *)g_CraterPool;
    do
    v14 = *(uint32_t *)&v13[v11];
    v15 = *(uint32_t *)&v13[v11 + 4] + Map_VisibleRect;
    v16 = *(uint32_t *)&v13[v11 + 8];
    v24[3] = *(uint32_t *)&v13[v11 + 12];
    v24[1] = v15;
    v24[0] = v14 + DSurface_ViewBounds;
    v24[2] = v16;
    v17 = ClipRectIntersection(v19, v24, a4, 0, 0);
    v20 = *v17;
    v21 = v17[1];
    v22 = v17[2];
    v13 = (char *)g_CraterPool;
    v23 = v17[3];
    if ( *((uint8_t *)g_CraterPool + v11 + 16) )
    TacticalClass::FillScanlinesTransparent(*v17, v17[1], v17[2], v17[3]);
    TacticalClass::CalcBuildingDrawPos((int)this, &v20);
    v13 = (char *)g_CraterPool;
    result = v25 + 1;
    v11 += 20;
    ++v25;
    while ( v25 < g_CraterCreationState );
    return result;
}

int  TacticalClass::ClickFindBuilding(uint32_t *this, int *a2, int *a3, char a4)
{
    uint32_t *v5; // edi
    int *v6; // eax
    int v7; // ecx
    int v8; // ebx
    int v9; // edi
    int *v10; // eax
    int v11; // edx
    int v12; // ecx
    int v13; // edx
    int v14; // eax
    int result; // eax
    int v16; // [esp+10h] [ebp-4Ch]
    int v17; // [esp+18h] [ebp-44h] BYREF
    uint32_t v18[3]; // [esp+20h] [ebp-3Ch] BYREF
    int v19; // [esp+2Ch] [ebp-30h] BYREF
    int v20; // [esp+30h] [ebp-2Ch]
    int v21; // [esp+34h] [ebp-28h]
    int v22; // [esp+38h] [ebp-24h]
    int v23; // [esp+3Ch] [ebp-20h] BYREF
    int v24; // [esp+40h] [ebp-1Ch]
    int v25; // [esp+44h] [ebp-18h]
    int v26; // [esp+48h] [ebp-14h]
    int v27; // [esp+4Ch] [ebp-10h] BYREF
    int v28; // [esp+50h] [ebp-Ch]
    int v29; // [esp+54h] [ebp-8h]
    int v30; // [esp+58h] [ebp-4h]
    if ( (int)*(this + 56) > 0 )
    v16 = 0;
    v5 = this + 57;
    do
    Coord::Subtract(
    v18,
    ((((__int16)*(uint32_t *)(*v5 + 36) << 8) + 128) / 256) << 8,
    ((((__int16)HIWORD(*(uint32_t *)(*v5 + 36)) << 8) + 128) / 256) << 8,
    0);
    v19 = v18[0];
    v20 = v18[1];
    v21 = v18[2];
    v6 = Coord::To_ScreenRaw(&v17, &v19);
    v7 = *v6 - *(this + 44) - 30;
    v24 = Map_VisibleRect + v6[1] - *(this + 45);
    v28 = v24;
    v23 = v7;
    v27 = v7;
    v25 = 60;
    v26 = 30;
    v29 = 60;
    v30 = 30;
    TacticalClass::FindBuilding(1, &v23, &v27);
    ++v5;
    ++v16;
    while ( v16 < *(this + 56) );
    if ( g_CraterCreationState && g_CraterCreationState - 1 >= 0 )
    v8 = g_CraterCreationState;
    v9 = 20 * (g_CraterCreationState - 1);
    do
    v19 = *(uint32_t *)((char *)g_CraterPool + v9);
    v20 = *(uint32_t *)((char *)g_CraterPool + v9 + 4);
    v21 = *(uint32_t *)((char *)g_CraterPool + v9 + 8);
    v22 = *(uint32_t *)((char *)g_CraterPool + v9 + 12);
    v20 += Map_VisibleRect;
    v10 = ClipRectIntersection(&v23, &DSurface_ViewBounds, &v19, 0, 0);
    v19 = *v10;
    v20 = v10[1];
    v21 = v10[2];
    v11 = v10[3];
    v22 = v11;
    if ( v21 > 0 && v11 > 0 )
    v12 = v10[1];
    v27 = *v10;
    v13 = v10[2];
    v14 = v10[3];
    v28 = v12;
    v29 = v13;
    v30 = v14;
    TacticalClass::FindBuilding(1, &v19, &v27);
    v9 -= 20;
    --v8;
    while ( v8 );
    if ( a4 )
    return TacticalClass::FindBuilding(1, &DSurface_ViewBounds, &DSurface_ViewBounds);
    if ( a2[2] > 0 && a2[3] > 0 )
    TacticalClass::FindBuilding(1, a2, a2);
    result = (int)a3;
    if ( a3[2] > 0 && a3[3] > 0 )
    return TacticalClass::FindBuilding(1, a3, a3);
    return result;
}

int  TacticalClass::ClickFindOverlay(uint32_t *this, int *a2, int *a3, char a4)
{
    uint32_t *v5; // edi
    int *v6; // eax
    int v7; // ecx
    int v8; // ebx
    int v9; // edi
    int *v10; // eax
    int v11; // edx
    int v12; // ecx
    int v13; // edx
    int v14; // eax
    int result; // eax
    int v16; // [esp+10h] [ebp-4Ch]
    int v17; // [esp+18h] [ebp-44h] BYREF
    uint32_t v18[3]; // [esp+20h] [ebp-3Ch] BYREF
    int v19; // [esp+2Ch] [ebp-30h] BYREF
    int v20; // [esp+30h] [ebp-2Ch]
    int v21; // [esp+34h] [ebp-28h]
    int v22; // [esp+38h] [ebp-24h]
    int v23; // [esp+3Ch] [ebp-20h] BYREF
    int v24; // [esp+40h] [ebp-1Ch]
    int v25; // [esp+44h] [ebp-18h]
    int v26; // [esp+48h] [ebp-14h]
    int v27; // [esp+4Ch] [ebp-10h] BYREF
    int v28; // [esp+50h] [ebp-Ch]
    int v29; // [esp+54h] [ebp-8h]
    int v30; // [esp+58h] [ebp-4h]
    if ( (int)*(this + 56) > 0 )
    v16 = 0;
    v5 = this + 57;
    do
    Coord::Subtract(
    v18,
    ((((__int16)*(uint32_t *)(*v5 + 36) << 8) + 128) / 256) << 8,
    ((((__int16)HIWORD(*(uint32_t *)(*v5 + 36)) << 8) + 128) / 256) << 8,
    0);
    v19 = v18[0];
    v20 = v18[1];
    v21 = v18[2];
    v6 = Coord::To_ScreenRaw(&v17, &v19);
    v7 = *v6 - *(this + 44) - 30;
    v24 = Map_VisibleRect + v6[1] - *(this + 45);
    v28 = v24;
    v23 = v7;
    v27 = v7;
    v25 = 60;
    v26 = 30;
    v29 = 60;
    v30 = 30;
    TacticalClass::FindOverlay(1, &v23, &v27);
    ++v5;
    ++v16;
    while ( v16 < *(this + 56) );
    if ( g_CraterCreationState && g_CraterCreationState - 1 >= 0 )
    v8 = g_CraterCreationState;
    v9 = 20 * (g_CraterCreationState - 1);
    do
    v19 = *(uint32_t *)((char *)g_CraterPool + v9);
    v20 = *(uint32_t *)((char *)g_CraterPool + v9 + 4);
    v21 = *(uint32_t *)((char *)g_CraterPool + v9 + 8);
    v22 = *(uint32_t *)((char *)g_CraterPool + v9 + 12);
    v20 += Map_VisibleRect;
    v10 = ClipRectIntersection(&v23, &DSurface_ViewBounds, &v19, 0, 0);
    v19 = *v10;
    v20 = v10[1];
    v21 = v10[2];
    v11 = v10[3];
    v22 = v11;
    if ( v21 > 0 && v11 > 0 )
    v12 = v10[1];
    v27 = *v10;
    v13 = v10[2];
    v14 = v10[3];
    v28 = v12;
    v29 = v13;
    v30 = v14;
    TacticalClass::FindOverlay(1, &v19, &v27);
    v9 -= 20;
    --v8;
    while ( v8 );
    if ( a4 )
    return TacticalClass::FindOverlay(1, &DSurface_ViewBounds, &DSurface_ViewBounds);
    if ( a2[2] > 0 && a2[3] > 0 )
    TacticalClass::FindOverlay(1, a2, a2);
    result = (int)a3;
    if ( a3[2] > 0 && a3[3] > 0 )
    return TacticalClass::FindOverlay(1, a3, a3);
    return result;
}

// 0x00732D10
uint32_t *TacticalClass::CollectSelectedIDs()
{
    uint32_t *v0; // eax
    uint32_t *v1; // esi
    uint32_t *v2; // ebx
    int v3; // esi
    int v4; // eax
    int v5; // edx
    const char *v6; // edi
    int v7; // ebp
    int v8; // ecx
    int v9; // eax
    int v10; // eax
    int v11; // edx
    const char *v12; // ebp
    int v13; // edi
    int v14; // ecx
    int v15; // eax
    int v16; // eax
    int v17; // edx
    const char *v18; // ebp
    int v19; // edi
    int v20; // ecx
    int v21; // eax
    int v22; // eax
    int v23; // edx
    int v25; // [esp+Ch] [ebp-14h]
    uint32_t *v26; // [esp+10h] [ebp-10h]
    const char **v27; // [esp+14h] [ebp-Ch]
    const char **v28; // [esp+14h] [ebp-Ch]
    const char **v29; // [esp+14h] [ebp-Ch]
    int v30; // [esp+18h] [ebp-8h]
    wchar_t *v31; // [esp+1Ch] [ebp-4h]
    v0 = __2_YAPAXI_Z(0x18u);
    v1 = v0;
    if ( v0 )
    TacticalClass::updateScroll(v0, 0, 0);
    *v1 = &DynamicVectorClass<char const *>::`vftable';
    v1[5] = 10;
    v1[4] = 0;
    v2 = v1;
    else
    v2 = 0;
    v26 = v2;
    v31 = g_SelectionManager;
    v30 = 0;
    if ( (int)g_SelectionManager <= 0 )
    return v2;
    do
    v3 = *((uint32_t *)g_ObjectClass_CurrentCount + v30);
    v25 = v3;
    v4 = (*(int (__thiscall **)(int))(*(uint32_t *)v3 + 136))(v3);
    v5 = v2[4];
    v6 = (const char *)(v4 + 36);
    v7 = 0;
    if ( v5 <= 0 )
    LABEL_12:
    v8 = v2[2];
    if ( v5 < v8
    || (*((uint8_t *)v2 + 13) || !v8)
    && (v9 = v2[5], v9 > 0)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*v2 + 8))(v2, v8 + v9, 0) )
    v10 = v2[4];
    v11 = v2[1];
    v2[4] = v10 + 1;
    *(uint32_t *)(v11 + 4 * v10) = v6;
    if ( *(uint32_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v3 + 132))(v3) + 1028) )
    v12 = (const char *)(*(uint32_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v3 + 132))(v3) + 1028) + 36);
    v13 = 0;
    if ( (int)v2[4] <= 0 )
    LABEL_26:
    v14 = v2[2];
    if ( v2[4] < v14
    || (*((uint8_t *)v2 + 13) || !v14)
    && (v15 = v2[5], v15 > 0)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*v2 + 8))(v2, v14 + v15, 0) )
    v16 = v2[4];
    v17 = v2[1];
    v2[4] = v16 + 1;
    *(uint32_t *)(v17 + 4 * v16) = v12;
    else
    v28 = (const char **)v2[1];
    while ( strcmp(v12, *v28) )
    ++v13;
    ++v28;
    if ( v13 >= v2[4] )
    goto LABEL_25;
    if ( v13 == -1 )
    LABEL_25:
    v3 = v25;
    goto LABEL_26;
    v3 = v25;
    if ( *(uint32_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v3 + 132))(v3) + 1032) )
    v18 = (const char *)(*(uint32_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v3 + 132))(v3) + 1032) + 36);
    v19 = 0;
    if ( (int)v2[4] <= 0 )
    goto LABEL_40;
    v29 = (const char **)v2[1];
    while ( strcmp(v18, *v29) )
    ++v19;
    ++v29;
    if ( v19 >= v2[4] )
    goto LABEL_40;
    if ( v19 == -1 )
    LABEL_40:
    v20 = v2[2];
    if ( v2[4] < v20
    || (*((uint8_t *)v2 + 13) || !v20)
    && (v21 = v2[5], v21 > 0)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*v2 + 8))(v2, v20 + v21, 0) )
    v22 = v2[4];
    v23 = v2[1];
    v2[4] = v22 + 1;
    *(uint32_t *)(v23 + 4 * v22) = v18;
    else
    v27 = (const char **)v2[1];
    while ( strcmp(v6, *v27) )
    ++v7;
    ++v27;
    if ( v7 >= v5 )
    goto LABEL_11;
    if ( v7 == -1 )
    LABEL_11:
    v2 = v26;
    v3 = v25;
    goto LABEL_12;
    v2 = v26;
    ++v30;
    while ( v30 < (int)v31 );
    return v2;
}

