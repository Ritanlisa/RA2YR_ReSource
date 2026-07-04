#include "ipxglobalconnclass.hpp"

int  IPXGlobalConnClass::_vt12(void *this, _WORD *a2, signed int a3, int *a4, int a5)
{
    uint32_t *v7; // ecx
    int v8; // edi
    uint32_t *TileIndex; // eax
    int v10; // ecx
    int v11; // ebx
    unsigned int v12; // edi
    int v13; // ebx
    uint32_t *v14; // eax
    int v15; // ecx
    int v16; // eax
    int v17; // eax
    __int16 v18; // cx
    int v19; // eax
    int v20; // [esp+8h] [ebp-1Ch] BYREF
    int v21; // [esp+Ch] [ebp-18h]
    int v22; // [esp+10h] [ebp-14h]
    __int16 v23; // [esp+14h] [ebp-10h] BYREF
    char v24; // [esp+16h] [ebp-Eh]
    char v25; // [esp+17h] [ebp-Dh]
    int v26; // [esp+18h] [ebp-Ch]
    __int16 v27; // [esp+22h] [ebp-2h]
    if ( *a2 != *((_WORD *)this + 18) )
    return 0;
    if ( !*((uint8_t *)a2 + 2) )
    v11 = a5;
    v20 = *a4;
    v21 = a4[1];
    v22 = a4[2];
    if ( (_WORD)a5 )
    Network::SetPort(&v20, a5);
    v12 = 0;
    if ( *((int *)this + 53) <= 0 )
    LABEL_24:
    if ( !ConnectionClass::allocPacketSlot(*((int **)this + 1), a2, a3, &v20, 12) )
    goto LABEL_30;
    v14 = (uint32_t *)(*((uint32_t *)this + 51) + 12 * *((uint32_t *)this + 54));
    *v14 = v20;
    v14[1] = v21;
    v14[2] = v22;
    *(uint32_t *)(*((uint32_t *)this + 52) + 4 * *((uint32_t *)this + 54)) = *((uint32_t *)a2 + 1);
    v15 = *((uint32_t *)this + 53);
    v16 = *((uint32_t *)this + 54) + 1;
    *((uint32_t *)this + 54) = v16;
    if ( v16 >= v15 )
    *((uint32_t *)this + 54) = 0;
    else
    v13 = 0;
    while ( 1 )
    if ( v12 >= *(uint32_t *)(*((uint32_t *)this + 1) + 60) )
    LABEL_23:
    v11 = a5;
    goto LABEL_24;
    if ( GUID::Compare((char *)&v20, v13 + *((uint32_t *)this + 51))
    && *((uint32_t *)a2 + 1) == *(uint32_t *)(*((uint32_t *)this + 52) + 4 * v12) )
    break;
    ++v12;
    v13 += 12;
    if ( (signed int)v12 >= *((uint32_t *)this + 53) )
    goto LABEL_23;
    v11 = a5;
    v17 = *((uint32_t *)a2 + 1);
    v18 = *((_WORD *)this + 92);
    v23 = *((_WORD *)this + 18);
    v24 = 2;
    v26 = v17;
    v27 = v18;
    v25 = 0;
    Debug::Log();
    v19 = dword_A8EA0C;
    LOBYTE(v19) = this == (void *)dword_A8EA0C;
    if ( (*(int (__thiscall **)(void *, __int16 *, int, int *, int, int, int))(*(uint32_t *)this + 36))(
    this,
    &v23,
    16,
    a4,
    12,
    v19,
    v11) )
    return 1;
    LABEL_30:
    Debug::Log();
    return 1;
    if ( *((uint8_t *)a2 + 2) == 1 )
    v20 = *a4;
    v21 = a4[1];
    v22 = a4[2];
    if ( (_WORD)a5 )
    Network::SetPort(&v20, a5);
    ConnectionClass::allocPacketSlot(*((int **)this + 1), a2, a3, &v20, 12);
    return 1;
    if ( *((uint8_t *)a2 + 2) != 2 )
    return 1;
    v7 = (uint32_t *)*((uint32_t *)this + 1);
    v8 = 0;
    if ( (int)v7[10] <= 0 )
    return 1;
    while ( 1 )
    TileIndex = (uint32_t *)Terrain::GetTileIndex(v7, v8);
    v10 = TileIndex[5];
    if ( *((uint32_t *)a2 + 1) == *(uint32_t *)(v10 + 4) && !*(uint8_t *)(v10 + 2) )
    break;
    v7 = (uint32_t *)*((uint32_t *)this + 1);
    if ( ++v8 >= v7[10] )
    return 1;
    *TileIndex |= 2u;
    return 1;
}

int  IPXGlobalConnClass::_vt13(uint32_t *this, void *a2, signed int *a3, uint32_t *a4, _WORD *a5)
{
    uint32_t *v5; // ecx
    uint32_t *TileType; // eax
    signed int v7; // edx
    int v8; // ebx
    uint32_t *v9; // edx
    v5 = (uint32_t *)*(this + 1);
    if ( !v5[14] )
    return 0;
    TileType = (uint32_t *)Terrain::GetTileType(v5, 0);
    if ( !TileType || (*TileType & 2) != 0 )
    return 0;
    v7 = TileType[2] - 16;
    v8 = TileType[3];
    *TileType |= 2u;
    if ( v7 > 0 )
    qmemcpy(a2, (const void *)(v8 + 16), v7);
    *a3 = v7;
    *a5 = *(_WORD *)(v8 + 14);
    v9 = (uint32_t *)TileType[5];
    *a4 = *v9;
    a4[1] = v9[1];
    a4[2] = v9[2];
    return 1;
}

uint32_t * IPXGlobalConnClass::_vt15(uint32_t *this, int a2)
{
    uint32_t *v2; // ecx
    uint32_t *result; // eax
    v2 = (uint32_t *)*(this + 1);
    result = (uint32_t *)a2;
    if ( a2 < v2[14] )
    result = (uint32_t *)Terrain::GetTileType(v2, a2);
    *result |= 2u;
    return result;
}

int  IPXGlobalConnClass::_vt09(uint32_t *this, int a2, int a3, uint8_t *a4, int a5, int a6, int a7)
{
    if ( Network::IsBroadcastAddr(a4) )
    return sub_53F830(a2, a3);
    if ( GameMode_Current[0] == 3 && *(this + 49) && *(uint32_t *)a4 == *(uint32_t *)((char *)this + 186) )
    return (*(int (__thiscall **)(uint32_t *, int, int, uint8_t *, int, int, uint32_t))(*this + 40))(
    this,
    a2,
    a3,
    a4,
    (int)this + 190,
    a6,
    0);
    return (*(int (__thiscall **)(uint32_t *, int, int, uint8_t *, uint32_t, int, int))(*this + 40))(
    this,
    a2,
    a3,
    a4,
    0,
    a6,
    a7);
}

int  IPXGlobalConnClass::_vt08(uint32_t *this)
{
    int v2; // esi
    uint32_t *v3; // ecx
    v2 = 0;
    v3 = (uint32_t *)*(this + 1);
    if ( (int)v3[14] > 0 )
    do
    if ( (*(uint8_t *)Terrain::GetTileType(v3, v2) & 2) != 0 )
    PacketQueue::ReleaseEntry((uint32_t *)*(this + 1), 0, 0, v2--, 0, 0);
    v3 = (uint32_t *)*(this + 1);
    ++v2;
    while ( v2 < v3[14] );
    return 1;
}

void  IPXGlobalConnClass::_vt17(int this, int a2)
{
    int v2; // esi
    uint32_t *v3; // ecx
    int i; // ebp
    int TileType; // edi
    int v6; // eax
    int v7; // ebx
    DWORD Ticks; // edx
    int v9; // eax
    int v10; // ecx
    uint32_t *v11; // edx
    v2 = this;
    Debug::Log();
    v3 = *(uint32_t **)(v2 + 4);
    for ( i = 0; i < v3[14]; ++i )
    TileType = Terrain::GetTileType(v3, i);
    Debug::Log();
    if ( TileType )
    Debug::Log();
    v6 = g_LastPerformanceTick;
    v7 = g_PerformanceTickOffset;
    if ( g_LastPerformanceTick != -1 )
    Ticks = Timer::GetTicks();
    v6 = g_LastPerformanceTick;
    v7 += Ticks - g_LastPerformanceTick;
    if ( a2 + *(uint32_t *)(TileType + 4) >= v7 )
    if ( v6 != -1 )
    Timer::GetTicks();
    Debug::Log();
    else
    if ( v6 != -1 )
    Timer::GetTicks();
    Debug::Log();
    v9 = 0;
    v10 = *(uint32_t *)(this + 212);
    if ( v10 > 0 )
    v11 = *(uint32_t **)(this + 208);
    while ( *v11 != *(uint32_t *)(*(uint32_t *)(TileType + 12) + 4) )
    ++v9;
    ++v11;
    if ( v9 >= v10 )
    goto LABEL_14;
    *(uint32_t *)(*(uint32_t *)(this + 208) + 4 * v9) = -1;
    LABEL_14:
    PacketQueue::ReleaseEntry(*(uint32_t **)(this + 4), 0, 0, i--, 0, 0);
    v2 = this;
    v3 = *(uint32_t **)(v2 + 4);
    Debug::Log();
}

int  IPXGlobalConnClass::_vt06(uint32_t *this)
{
    int v2; // ebx
    int v3; // esi
    uint32_t *v4; // ecx
    int v5; // eax
    uint32_t *v6; // ecx
    int v8; // [esp+Ch] [ebp-414h] BYREF
    int v9; // [esp+10h] [ebp-410h] BYREF
    uint8_t v10[12]; // [esp+14h] [ebp-40Ch] BYREF
    uint8_t v11[1024]; // [esp+20h] [ebp-400h] BYREF
    v2 = 0;
    v3 = 0;
    v4 = (uint32_t *)*(this + 1);
    if ( (int)v4[10] > 0 )
    do
    v5 = *(uint32_t *)Terrain::GetTileIndex(v4, v3);
    if ( (v5 & 4) != 0 && (v5 & 2) == 0 )
    Waypoint::InitInvalid(v10);
    v6 = (uint32_t *)*(this + 1);
    v8 = 12;
    PacketQueue::ExtractEntry(v6, v11, &v9, v3--, v10, &v8, 0);
    ++v2;
    v4 = (uint32_t *)*(this + 1);
    ++v3;
    while ( v3 < v4[10] );
    return v2;
}

int  IPXGlobalConnClass::_vt16(uint32_t *this, int a2, __int16 a3)
{
    uint32_t *v4; // ecx
    int v5; // ebp
    int v6; // esi
    int TileIndex; // eax
    int v8; // edi
    uint32_t *v9; // ecx
    int v11; // [esp+Ch] [ebp-414h] BYREF
    int v12; // [esp+10h] [ebp-410h] BYREF
    uint8_t v13[12]; // [esp+14h] [ebp-40Ch] BYREF
    uint8_t v14[1024]; // [esp+20h] [ebp-400h] BYREF
    v4 = (uint32_t *)*(this + 1);
    v5 = 0;
    v6 = 0;
    if ( (int)v4[10] <= 0 )
    return 0;
    do
    TileIndex = Terrain::GetTileIndex(v4, v6);
    v8 = TileIndex;
    if ( (*(uint8_t *)TileIndex & 2) == 0
    && *(uint32_t *)(TileIndex + 24)
    && NetworkID::Compare(*(uint32_t *)(TileIndex + 28), a2)
    && *(_WORD *)(v8 + 32) == a3 )
    Waypoint::InitInvalid(v13);
    v9 = (uint32_t *)*(this + 1);
    v11 = 12;
    PacketQueue::ExtractEntry(v9, v14, &v12, v6--, v13, &v11, 0);
    ++v5;
    v4 = (uint32_t *)*(this + 1);
    ++v6;
    while ( v6 < v4[10] );
    return v5;
}

int  IPXGlobalConnClass::_vt10(uint8_t *this, int a2, int a3, int *a4, int *a5, int a6, int a7)
{
    uint8_t *v7; // ebp
    int v8; // esi
    int v9; // ebp
    int v10; // edi
    char LinkedIndex; // al
    int v12; // edi
    int v13; // edx
    int v15; // [esp+Ch] [ebp-28h] BYREF
    uint8_t *v16; // [esp+10h] [ebp-24h]
    uint8_t v17[8]; // [esp+14h] [ebp-20h] BYREF
    int v18; // [esp+1Ch] [ebp-18h] BYREF
    int v19; // [esp+20h] [ebp-14h]
    int v20; // [esp+24h] [ebp-10h]
    uint32_t v21[3]; // [esp+28h] [ebp-Ch] BYREF
    v7 = this;
    v16 = this;
    Waypoint::InitInvalid(&v18);
    v18 = *a4;
    v19 = a4[1];
    v20 = a4[2];
    if ( a5 )
    Network::CopyAddress(a4, &v15, (int)v17);
    v15 = *a5;
    NetworkID::Assign(&v18, &v15, (int)v17, 0);
    if ( GameMode_Current[0] == 4 && !(uint8_t)a6 && g_Network_IsHosting && v7[200] )
    v8 = a2;
    if ( !*(uint8_t *)(a2 + 3) )
    v21[0] = v18;
    v21[1] = v19;
    v21[2] = v20;
    Network::CopyAddress(v21, &v15, (int)v17);
    NetworkID::Assign(v21, &v15, (int)v17, a7);
    v9 = -1;
    v10 = 0;
    if ( Game_PlayerCount > 0 )
    while ( !GUID::Compare((char *)(*(uint32_t *)(Game_PlayerInfoArray + 4 * v10) + 40), (int)v21) )
    if ( ++v10 >= Game_PlayerCount )
    goto LABEL_13;
    v9 = *(uint32_t *)(*(uint32_t *)(Game_PlayerInfoArray + 4 * v10) + 111);
    LABEL_13:
    LinkedIndex = Factory::GetLinkedIndex(&g_NetworkEventQueue, v9);
    if ( !LinkedIndex )
    LinkedIndex = 1;
    v7 = v16;
    *(uint8_t *)(a2 + 3) = LinkedIndex;
    v18 = dword_A8DBA4;
    v12 = *(uint32_t *)&dword_841F3C;
    v19 = dword_A8DBA8;
    v20 = dword_A8DBAC;
    if ( GUID::Compare((char *)&dword_A8DBB0, *(uint32_t *)Game_PlayerInfoArray + 40)
    && NetworkID::Compare((int)&v18, *(uint32_t *)Game_PlayerInfoArray + 40) )
    v13 = a2 + 8;
    *(_WORD *)(a2 + 12) = 0;
    *(uint32_t *)(a2 + 8) = 0;
    else
    v12 = dword_A8DBBC;
    *(_WORD *)(a2 + 12) = dword_841F3C;
    *(uint32_t *)(a2 + 8) = 0;
    else
    v8 = a2;
    v12 = a7;
    v13 = a2 + 8;
    *(_WORD *)(a2 + 12) = 0;
    *(uint32_t *)(a2 + 8) = 0;
    if ( g_NetworkInterface )
    LOBYTE(v13) = v7[200] == 0;
    (*(void (__thiscall **)(int, int, int, int *, int, int, int, int))(*(uint32_t *)g_NetworkInterface + 12))(
    g_NetworkInterface,
    v8,
    a3,
    &v18,
    12,
    a6,
    v13,
    v12);
    return 1;
}

int  IPXGlobalConnClass::_vt02(void *this, const void *a2, signed int a3, int a4, char a5)
{
    return ConnectionClass::sendAck((int)this, a2, a3, a4, a5);
}

int  IPXGlobalConnClass::_vt03(uint32_t *this, int a2, int a3)
{
    return ConnectionClass::receivePacket(this, a2, a3);
}

int  IPXGlobalConnClass::_vt04(uint32_t *this, void *a2, signed int *a3)
{
    return ConnectionClass::processTileUpdate(this, a2, a3);
}

uint32_t * IPXGlobalConnClass::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 52);
    *Block = &IPXGlobalConnClass::`vftable';
    if ( v3 )
    __3_YAXPAX_Z(v3);
    *(Block + 52) = 0;
    if ( *(Block + 51) )
    __3_YAXPAX_Z((void *)*(Block + 51));
    *(Block + 51) = 0;
    *Block = &IPXConnClass::`vftable';
    ConnectionClass::dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

