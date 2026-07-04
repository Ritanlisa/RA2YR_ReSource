#include "scriptaction.hpp"

int  ScriptAction::DecrementRefCount(uint32_t *this, int a2)
{
    int result; // eax
    *(uint8_t *)(a2 + 12) = 0;
    result = *(this + 42) - 1;
    *(this + 42) = result;
    if ( !result )
    *(this + 44) = -1;
    return result;
}

int  ScriptAction::ClearBuildingState(int this)
{
    int v1; // eax
    uint32_t *v2; // edx
    int v3; // esi
    int i; // eax
    int v5; // ebp
    int result; // eax
    int j; // ebx
    uint32_t *v8; // edx
    int v9; // esi
    int v10; // [esp+10h] [ebp-4h]
    if ( *(uint8_t *)(this + 152) )
    v1 = *(uint32_t *)(this + 148);
    if ( v1 != -1 )
    v2 = *(uint32_t **)(*(uint32_t *)(this + 8) + 4 * v1);
    if ( v2 )
    v2[45] = -1;
    v3 = v2[12];
    for ( i = 0; i < v3; *(uint32_t *)(*(uint32_t *)(v2[9] + 4 * i - 4) + 116) = -1 )
    ++i;
    v2[43] = -1;
    *(uint8_t *)(this + 152) = 0;
    v5 = *(uint32_t *)(this + 20);
    v10 = v5;
    result = *(uint32_t *)(this + 140) != -1 ? *(uint32_t *)(this + 140) : 0;
    for ( j = result; j < v5; ++j )
    result = *(uint32_t *)(this + 8);
    v8 = *(uint32_t **)(result + 4 * j);
    if ( v8 )
    v8[45] = -1;
    v9 = v8[12];
    result = 0;
    if ( v9 > 0 )
    do
    ++result;
    *(uint32_t *)(*(uint32_t *)(v8[9] + 4 * result - 4) + 116) = -1;
    while ( result < v9 );
    v5 = v10;
    v8[43] = -1;
    *(uint32_t *)(this + 140) = -1;
    return result;
}

// 0x00637DB0
bool  ScriptAction::SetField10(void *this)
{
    return !byte_AC4CF4 || this != (void *)4;
}

char  ScriptAction::IsBuildingTypeMatch(uint32_t **this)
{
    int v2; // edi
    uint8_t *WaypointCoords; // eax
    char v5; // al
    uint8_t v6[8]; // [esp+8h] [ebp-10h] BYREF
    int v7; // [esp+10h] [ebp-8h]
    if ( !this )
    return 0;
    v2 = ((int (__thiscall *)(uint32_t **))(*this)[97])(this);
    if ( v2 == 5 )
    return 1;
    if ( ((WaypointCoords = ScriptAction::GetWaypointCoords(v6, *(this + 173)),
    v7 = *(uint32_t *)WaypointCoords,
    v5 = WaypointCoords[4],
    v2 == 1)
    || v2 == 11)
    && (v5 == 11 || v2 == 11 && !v5) )
    return 1;
    else
    return 0;
}

char * ScriptAction::CopyStringField(char *Destination, char *Source)
{
    if ( Source )
    strncpy(Destination, Source, 0x1Fu);
    *(Destination + 31) = 0;
    return Destination;
    else
    *Destination = 0;
    return Destination;
}

void * ScriptAction::CopyStructField(void *this, void *a2, const void *a3)
{
    if ( a3 != this )
    qmemcpy(this, a3, 0x20u);
    qmemcpy(a2, this, 0x20u);
    return a2;
}

int  ScriptAction::ExecuteMissionCmd(#377 *this)
{
    bool v2; // al
    int v3; // edi
    uint8_t *WaypointCoords; // eax
    int result; // eax
    unsigned int v6; // ebx
    int v7; // eax
    uint8_t *v8; // eax
    int v9[27]; // [esp-70h] [ebp-108h] BYREF
    int v10; // [esp-4h] [ebp-9Ch]
    uint32_t v11[2]; // [esp+10h] [ebp-88h] BYREF
    uint8_t v12[8]; // [esp+18h] [ebp-80h] BYREF
    uint8_t v13[8]; // [esp+20h] [ebp-78h] BYREF
    char v14[108]; // [esp+28h] [ebp-70h] BYREF
    __int16 v15; // [esp+94h] [ebp-4h]
    char v16; // [esp+96h] [ebp-2h]
    int v17; // [esp+9Ch] [ebp+4h]
    uint32_t *v18; // [esp+A0h] [ebp+8h]
    uint32_t *v19; // [esp+A4h] [ebp+Ch]
    uint32_t *v20; // [esp+A8h] [ebp+10h]
    v2 = sub_731BF0() && (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 1216))(this);
    v3 = v17;
    if ( (v17 == 2 || v17 == 1) && v2 )
    v3 = 29;
    if ( FactoryClass::GetFlag() )
    ScriptAction::GetWaypointCoords(&v9[26], v20);
    ScriptAction::GetWaypointCoords(&v9[24], v19);
    ScriptAction::GetWaypointCoords(&v9[22], v18);
    WaypointCoords = ScriptAction::GetWaypointCoords(v12, this);
    ScriptAction::InitActionFields(
    v14,
    *((uint32_t *)HouseClass_Player + 12),
    *(uint32_t *)WaypointCoords,
    WaypointCoords[4],
    v3,
    v9[22],
    v9[23],
    v9[24],
    v9[25],
    v9[26],
    v10);
    qmemcpy(v9, v14, sizeof(v9));
    LOWORD(v10) = v15;
    BYTE2(v10) = v16;
    sub_637DD0(
    v9[0],
    v9[1],
    v9[2],
    v9[3],
    v9[4],
    v9[5],
    v9[6],
    v9[7],
    v9[8],
    v9[9],
    v9[10],
    v9[11],
    v9[12],
    v9[13],
    v9[14],
    v9[15],
    v9[16],
    v9[17],
    v9[18],
    v9[19],
    v9[20],
    v9[21],
    v9[22],
    v9[23],
    v9[24],
    v9[25],
    v9[26],
    v10);
    LOBYTE(result) = 0;
    else
    if ( MoveFeedback )
    switch ( v3 )
    case 10:
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 860))(this);
    break;
    case 1:
    (*(void (__thiscall **)(void*377 *, uint32_t *))(*(uint32_t *)this + 880))(this, v18);
    break;
    case 2:
    case 29:
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 872))(this);
    break;
    case 7:
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 856))(this);
    break;
    case 8:
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 868))(this);
    break;
    case 16:
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 876))(this);
    break;
    default:
    if ( *(int *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1200) > 0 )
    v6 = Random::State(Randomizer_Global);
    v7 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    v11[0] = *(uint32_t *)this;
    (*(void (__thiscall **)(void*377 *, uint32_t))(v11[0] + 852))(
    this,
    *(uint32_t *)(*(uint32_t *)(v7 + 1188) + 4 * (v6 % *(uint32_t *)(v7 + 1200))));
    break;
    ScriptAction::GetWaypointCoords(v11, v19);
    ScriptAction::GetWaypointCoords(v12, v18);
    v8 = ScriptAction::GetWaypointCoords(v13, this);
    sub_646E90(v3, (int)v12, *(uint32_t *)v8, v8[4], (int)v11);
    LOBYTE(result) = 1;
    return result;
}

