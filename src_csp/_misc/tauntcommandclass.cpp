#include "tauntcommandclass.hpp"

char * TauntCommandClass::_vt01(uint32_t *this)
{
    sprintf(byte_A8F5B4, "Taunt_%d", *(this + 1));
    return byte_A8F5B4;
}

char  TauntCommandClass::_vt08(uint8_t *this, int a2)
{
    DWORD Time; // eax
    int v4; // eax
    char v5; // cl
    int v6; // ecx
    int v7; // ebx
    int v8; // esi
    int SendCount; // ebp
    int v10; // edi
    const wchar_t *v11; // ebx
    int ConnectionSpeed; // esi
    const wchar_t *Class; // eax
    int PlayerByID; // eax
    char LinkedIndex; // al
    int i; // [esp+4h] [ebp-1D0h]
    int v18; // [esp+8h] [ebp-1CCh]
    int v19; // [esp+Ch] [ebp-1C8h] BYREF
    char v20[43]; // [esp+10h] [ebp-1C4h] BYREF
    char v21; // [esp+3Bh] [ebp-199h]
    char v22; // [esp+3Ch] [ebp-198h]
    int v23; // [esp+3Dh] [ebp-197h]
    int v24; // [esp+41h] [ebp-193h]
    LOBYTE(Time) = GameMode_Current[0];
    if ( GameMode_Current[0] == 3 || GameMode_Current[0] == 4 )
    LOBYTE(Time) = MuteSWLaunches;
    if ( !MuteSWLaunches )
    Time = timeGetTime();
    if ( (dword_825C88 == -1 || (int)(Time - dword_825C88) > 5000)
    && ((uint8_t)dword_A8D110 && GameMode_Current[0] == 3 || BYTE1(dword_A8D110) && GameMode_Current[0] == 4) )
    dword_825C88 = Time;
    v19 = 29;
    strcpy(v20, ToWideStringChar(*(char **)Game_PlayerInfoArray));
    v23 = g_TauntCommandState;
    v4 = WideString::Hash(g_CurrentPlayerName);
    v5 = *(this + 4);
    v24 = v4;
    LOBYTE(v6) = (16 * *(uint8_t *)(*(uint32_t *)Game_PlayerInfoArray + 75))
    ^ ((16 * *(uint8_t *)(*(uint32_t *)Game_PlayerInfoArray + 75))
    ^ v5)
    & 0xF;
    v22 = v6;
    PlayTauntClass(v6);
    v7 = 0;
    v21 = 0;
    v18 = HouseClass_Count;
    for ( i = 0; v7 < v18; i = v7 )
    v8 = *(uint32_t *)&HouseClass_Array->gap0[4 * v7];
    if ( v8 )
    if ( *(uint8_t *)(*(uint32_t *)(v8 + 52) + 421) )
    if ( *((uint8_t *)&dword_A8D108 + v7) )
    SendCount = Network::GetSendCount(g_NetworkManager);
    v10 = 0;
    if ( SendCount > 0 )
    v11 = (const wchar_t *)(v8 + 90154);
    do
    ConnectionSpeed = Network::GetConnectionSpeed(g_NetworkManager, v10);
    Class = (const wchar_t *)Network::GetClass(g_NetworkManager, ConnectionSpeed);
    if ( !wcscmp(v11, Class) )
    PlayerByID = Network::FindPlayerByID(g_NetworkManager, ConnectionSpeed);
    if ( g_Network_IsHosting )
    LinkedIndex = Factory::GetLinkedIndex(&g_NetworkEventQueue, ConnectionSpeed);
    v21 |= LinkedIndex;
    else
    Network::SendMessage((int)g_NetworkManager, (int)&v19, 455, 1, PlayerByID, 0, 0);
    Network::ReceiveLoop(g_NetworkManager);
    ++v10;
    while ( v10 < SendCount );
    v7 = i;
    ++v7;
    LOBYTE(Time) = g_Network_IsHosting;
    if ( g_Network_IsHosting )
    LOBYTE(Time) = v21;
    if ( v21 )
    Network::SendMessage((int)g_NetworkManager, (int)&v19, 455, 1, *(uint32_t *)Game_PlayerInfoArray + 40, 0, 0);
    LOBYTE(Time) = Network::ReceiveLoop(g_NetworkManager);
    return Time;
}

