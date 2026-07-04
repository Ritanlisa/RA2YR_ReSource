#include "connectionclass.hpp"

void  ConnectionClass::queueSendPacket(ConnectionClass *this, uint8_t *a2, int a3, int a4)
{
    int32_t playerIndex; // eax
    int v6; // esi
    int v7; // ebx
    uint8_t *i; // edi
    int v9; // eax
    uint32_t v10; // ecx
    signed int v11; // [esp+20h] [ebp+10h]
    __int16 v12; // [esp+24h] [ebp+14h]
    playerIndex = this->playerIndex;
    v6 = *(uint32_t *)((char *)&this->maxExtraSize + 2);
    if ( v6 == playerIndex || a3 > (signed int)this->lastPacketTime )
    Debug::Log();
    else
    v7 = 0;
    if ( playerIndex > 0 )
    for ( i = *(uint8_t **)((char *)&this->maxPacketSize + 2); (*i & 1) != 0; i += 36 )
    if ( ++v7 >= playerIndex )
    return;
    if ( v7 != -1 )
    v9 = 36 * v7;
    *(uint32_t *)(*(uint32_t *)((char *)&this->maxPacketSize + 2) + v9) = *(uint32_t *)(*(uint32_t *)((char *)&this->maxPacketSize + 2)
    + 36 * v7)
    | 1;
    *(uint32_t *)(36 * v7 + *(uint32_t *)((char *)&this->maxPacketSize + 2)) &= ~2u;
    *(uint32_t *)(36 * v7 + *(uint32_t *)((char *)&this->maxPacketSize + 2)) &= ~4u;
    *(uint32_t *)(v9 + *(uint32_t *)((char *)&this->maxPacketSize + 2) + 4) = 0;
    *(uint32_t *)(v9 + *(uint32_t *)((char *)&this->maxPacketSize + 2) + 8) = 0;
    *(uint32_t *)(v9 + *(uint32_t *)((char *)&this->maxPacketSize + 2) + 12) = 0;
    *(uint32_t *)(v9 + *(uint32_t *)((char *)&this->maxPacketSize + 2) + 16) = a3;
    *(_WORD *)(v9 + *(uint32_t *)((char *)&this->maxPacketSize + 2) + 32) = v12;
    qmemcpy(*(void **)(36 * v7 + *(uint32_t *)((char *)&this->maxPacketSize + 2) + 20), a2, a3);
    if ( a4 && v11 > 0 && v11 <= (signed int)this->packetsSent )
    qmemcpy(*(void **)(v9 + *(uint32_t *)((char *)&this->maxPacketSize + 2) + 28), (const void *)a4, v11);
    *(uint32_t *)(v9 + *(uint32_t *)((char *)&this->maxPacketSize + 2) + 24) = v11;
    else
    *(uint32_t *)(v9 + *(uint32_t *)((char *)&this->maxPacketSize + 2) + 24) = 0;
    *(uint32_t *)(*(uint32_t *)((char *)&this->writeIndex + 2) + 4 * *(uint32_t *)((char *)&this->maxExtraSize + 2)) = v7;
    v10 = *(uint32_t *)((char *)&this->maxExtraSize + 2) + 1;
    ++*(uint32_t *)((char *)&this->maxQueueSlots + 2);
    *(uint32_t *)((char *)&this->maxExtraSize + 2) = v10;
}

// 0x0048B750
void * ConnectionClass::allocPacketSlot(ConnectionClass *this)
{
    void *v2; // edx
    unsigned int v3; // edi
    int v4; // ebx
    uint8_t *v5; // eax
    uint8_t *v6; // ecx
    int v8; // ebx
    int v9; // esi
    uint32_t v10; // eax
    const void *v11; // [esp+10h] [ebp+4h]
    signed int v12; // [esp+14h] [ebp+8h]
    int v13; // [esp+14h] [ebp+8h]
    const void *v14; // [esp+18h] [ebp+Ch]
    signed int v15; // [esp+1Ch] [ebp+10h]
    v2 = *(void **)&this->active;
    if ( *(void **)((char *)&this->sendOrder + 2) == v2 )
    return 0;
    v3 = v12;
    if ( v12 > (signed int)this->lastPacketTime )
    return 0;
    v4 = 0;
    if ( (int)v2 <= 0 )
    goto LABEL_9;
    v5 = *(uint8_t **)((char *)&this->totalQueued + 2);
    v6 = v5;
    while ( (*v6 & 1) != 0 )
    ++v4;
    v6 += 24;
    if ( v4 >= (int)v2 )
    goto LABEL_9;
    v13 = v4;
    if ( v4 == -1 )
    LABEL_9:
    Debug::Log();
    return 0;
    v8 = 24 * v4;
    *(uint32_t *)&v5[v8] |= 1u;
    *(uint32_t *)(v8 + *(uint32_t *)((char *)&this->totalQueued + 2)) &= ~2u;
    *(uint32_t *)(*(uint32_t *)((char *)&this->totalQueued + 2) + v8) &= ~4u;
    v9 = g_PerformanceTickOffset;
    if ( g_LastPerformanceTick != -1 )
    v9 += Timer::GetTicks() - g_LastPerformanceTick;
    *(uint32_t *)(*(uint32_t *)((char *)&this->totalQueued + 2) + v8 + 4) = v9;
    *(uint32_t *)(*(uint32_t *)((char *)&this->totalQueued + 2) + v8 + 8) = v3;
    qmemcpy(*(void **)(*(uint32_t *)((char *)&this->totalQueued + 2) + v8 + 12), v11, v3);
    if ( v14 && v15 > 0 && v15 <= (signed int)this->packetsSent )
    qmemcpy(*(void **)(*(uint32_t *)((char *)&this->totalQueued + 2) + v8 + 20), v14, v15);
    *(uint32_t *)(*(uint32_t *)((char *)&this->totalQueued + 2) + v8 + 16) = v15;
    else
    *(uint32_t *)(*(uint32_t *)((char *)&this->totalQueued + 2) + v8 + 16) = 0;
    *(uint32_t *)(*(uint32_t *)((char *)&this->latencyCount + 2) + 4 * *(int *)((char *)&this->sendOrder + 2)) = v13;
    v10 = *(uint32_t *)((char *)&this->latencySum + 2) + 1;
    ++*(void **)((char *)&this->sendOrder + 2);
    *(uint32_t *)((char *)&this->latencySum + 2) = v10;
    return (void *)1;
}

// 0x0048BF40
void  ConnectionClass::sendAck(ConnectionClass *this)
{
    int v2; // eax
    const void *v3; // [esp+Ch] [ebp+4h]
    signed int v4; // [esp+10h] [ebp+8h]
    int v5; // [esp+14h] [ebp+Ch]
    char v6; // [esp+18h] [ebp+10h]
    **(_WORD **)&this->port = HIWORD(this->maxPacketSize);
    if ( v5 )
    *(uint8_t *)(*(uint32_t *)&this->port + 2) = 0;
    *(uint32_t *)(*(uint32_t *)&this->port + 4) = *(uint32_t *)((char *)&this->latencyCount + 2);
    Debug::Log();
    else
    *(uint8_t *)(*(uint32_t *)&this->port + 2) = 1;
    *(uint32_t *)(*(uint32_t *)&this->port + 4) = *(uint32_t *)((char *)&this->latencySum + 2);
    if ( GameMode_Current[0] == 4 && g_Network_IsHosting )
    *(uint8_t *)(*(uint32_t *)&this->port + 3) = v6;
    if ( (int)this->queueBuffer >= v4 )
    qmemcpy((void *)(*(uint32_t *)&this->port + 14), v3, v4);
    ConnectionClass::queueSendPacket((ConnectionClass *)this->playerIndex, *(uint8_t **)&this->port, v4 + 14, 0);
    if ( v2 )
    if ( v5 )
    ++*(uint32_t *)((char *)&this->latencyCount + 2);
    else
    ++*(uint32_t *)((char *)&this->latencySum + 2);
    else
    Debug::Log();
    Debug::Log();
}

// 0x0048C3E0
void  ConnectionClass::serviceSendQueue(ConnectionClass *this)
{
    int v2; // esi
    uint32_t *playerIndex; // ecx
    int TileIndex; // eax
    int v5; // ebx
    int v6; // ebp
    int v7; // ebx
    int v8; // esi
    int v9; // ebp
    int v10; // ecx
    int v11; // edx
    int v12; // eax
    int v13; // eax
    int v14; // eax
    unsigned int v15; // ebp
    unsigned int v16; // eax
    int v17; // eax
    unsigned int v18; // eax
    int v19; // eax
    int v20; // [esp+18h] [ebp-8h]
    int v21; // [esp+1Ch] [ebp-4h]
    v2 = 0;
    v20 = 0;
    playerIndex = (uint32_t *)this->playerIndex;
    if ( (int)playerIndex[10] > 0 )
    do
    TileIndex = Terrain::GetTileIndex(playerIndex, v2);
    v5 = TileIndex;
    if ( (*(uint8_t *)TileIndex & 2) != 0 )
    if ( !*(uint8_t *)(*(uint32_t *)(TileIndex + 20) + 2) )
    v6 = g_PerformanceTickOffset;
    if ( g_LastPerformanceTick != -1 )
    v6 += Timer::GetTicks() - g_LastPerformanceTick;
    ConnectionClass::initQueue((unsigned int *)this->playerIndex, v6 - *(uint32_t *)(v5 + 4));
    PacketQueue::ExtractEntry((uint32_t *)this->playerIndex, 0, 0, v2--, 0, 0, 0);
    playerIndex = (uint32_t *)this->playerIndex;
    ++v2;
    while ( v2 < playerIndex[10] );
    v7 = 0;
    v21 = *(uint32_t *)(this->playerIndex + 40);
    if ( v21 > 0 )
    do
    v8 = Terrain::GetTileIndex((uint32_t *)this->playerIndex, v7);
    if ( (*(uint8_t *)v8 & 2) == 0 )
    v9 = g_PerformanceTickOffset;
    if ( g_LastPerformanceTick != -1 )
    v9 += Timer::GetTicks() - g_LastPerformanceTick;
    v10 = *(uint32_t *)(v8 + 8);
    if ( v9 - v10 > *(uint32_t *)((char *)&this->maxExtraSize + 2) )
    v11 = dword_A8EA0C;
    LOWORD(v10) = *(_WORD *)(v8 + 32);
    LOBYTE(v11) = this == (ConnectionClass *)dword_A8EA0C;
    (*((void (__thiscall **)(ConnectionClass *, uint32_t, uint32_t, uint32_t, uint32_t, int, int))this->vtable + 9))(
    this,
    *(uint32_t *)(v8 + 20),
    *(uint32_t *)(v8 + 16),
    *(uint32_t *)(v8 + 28),
    *(uint32_t *)(v8 + 24),
    v11,
    v10);
    v12 = *(uint32_t *)(v8 + 12);
    *(uint32_t *)(v8 + 8) = v9;
    if ( v12 )
    ++*(uint32_t *)&this->active;
    else
    v13 = *(uint32_t *)(v8 + 20);
    *(uint32_t *)(v8 + 4) = v9;
    if ( *(uint8_t *)(v13 + 2) == 1 )
    v14 = *(uint32_t *)v8;
    LOBYTE(v14) = *(uint32_t *)v8 | 2;
    *(uint32_t *)v8 = v14;
    v15 = *(uint32_t *)(v8 + 12) + 1;
    *(uint32_t *)(v8 + 12) = v15;
    v16 = *(uint32_t *)((char *)&this->maxQueueSlots + 2);
    if ( v16 != -1 && v15 > v16 )
    v17 = *(uint32_t *)v8;
    v20 = 1;
    LOBYTE(v17) = *(uint32_t *)v8 | 4;
    *(uint32_t *)v8 = v17;
    v18 = *(uint32_t *)((char *)&this->writeIndex + 2);
    if ( v18 != -1 && *(uint32_t *)(v8 + 8) - *(uint32_t *)(v8 + 4) > v18 )
    v19 = *(uint32_t *)v8;
    v20 = 1;
    LOBYTE(v19) = *(uint32_t *)v8 | 4;
    *(uint32_t *)v8 = v19;
    ++v7;
    while ( v7 < v21 );
    if ( v20 )
    Debug::Log();
}

int ConnectionClass::_vt06()
{
    return 0;
}

int  ConnectionClass::_vt08(uint32_t *this)
{
    int v2; // esi
    uint32_t *v3; // ecx
    int TileType; // eax
    int v5; // eax
    v2 = 0;
    v3 = (uint32_t *)*(this + 1);
    if ( (int)v3[14] > 0 )
    do
    TileType = Terrain::GetTileType(v3, v2);
    if ( (*(uint8_t *)TileType & 2) != 0 )
    v5 = *(uint32_t *)(TileType + 12);
    if ( *(uint8_t *)(v5 + 2) == 1 || *(uint32_t *)(v5 + 4) < *(this + 17) )
    PacketQueue::ReleaseEntry((uint32_t *)*(this + 1), 0, 0, v2--, 0, 0);
    v3 = (uint32_t *)*(this + 1);
    ++v2;
    while ( v2 < v3[14] );
    return 1;
}

uint32_t * ConnectionClass::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    void (__thiscall ***v4)(uint32_t, int); // ecx
    v3 = (void *)*(Block + 8);
    *Block = &ConnectionClass::`vftable';
    __3_YAXPAX_Z(v3);
    v4 = (void (__thiscall ***)(uint32_t, int))*(Block + 1);
    if ( v4 )
    (**v4)(v4, 1);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

