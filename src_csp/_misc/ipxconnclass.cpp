#include "ipxconnclass.hpp"

int  IPXConnClass::_vt09(void *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
    return (*(int (__stdcall **)(int, int, int, uint32_t, int, uint32_t))(*(uint32_t *)this + 40))(
    a2,
    a3,
    (int)this + 76,
    0,
    a6,
    0);
}

int  IPXConnClass::_vt10(int *this, int a2, int a3, int *a4, int **a5, int a6, int a7)
{
    int **v8; // esi
    int v9; // edi
    int v10; // ebp
    char LinkedIndex; // al
    int v13; // eax
    int v14; // esi
    int v15; // eax
    int ConnectionSpeed; // eax
    uint8_t v17[8]; // [esp+10h] [ebp-14h] BYREF
    int v18; // [esp+18h] [ebp-Ch] BYREF
    int v19; // [esp+1Ch] [ebp-8h]
    int v20; // [esp+20h] [ebp-4h]
    Waypoint::InitInvalid(&v18);
    v8 = a5;
    v18 = *a4;
    v19 = a4[1];
    v20 = a4[2];
    if ( a5 )
    Network::CopyAddress(a4, &a4, (int)v17);
    a4 = *v8;
    NetworkID::Assign(&v18, &a4, (int)v17, 0);
    v9 = 0;
    if ( (uint8_t)a6 || !g_Network_IsHosting )
    v10 = a2;
    LABEL_13:
    *(_WORD *)(v10 + 12) = 0;
    *(uint32_t *)(v10 + 8) = 0;
    goto LABEL_14;
    v10 = a2;
    if ( !*(uint8_t *)(a2 + 3) )
    LinkedIndex = Factory::GetLinkedIndex(&g_NetworkEventQueue, *(this + 25));
    if ( !LinkedIndex )
    return 0;
    *(uint8_t *)(a2 + 3) = LinkedIndex;
    v18 = dword_A8DBA4;
    v9 = *(uint32_t *)&dword_841F3C;
    v19 = dword_A8DBA8;
    v20 = dword_A8DBAC;
    if ( GUID::Compare((char *)&dword_A8DBB0, *(uint32_t *)Game_PlayerInfoArray + 40)
    && NetworkID::Compare((int)&v18, *(uint32_t *)Game_PlayerInfoArray + 40) )
    goto LABEL_13;
    v9 = dword_A8DBBC;
    *(_WORD *)(a2 + 12) = dword_841F3C;
    *(uint32_t *)(a2 + 8) = 0;
    LABEL_14:
    if ( GameMode_Current[0] != 4 || g_Network_IsHosting )
    goto LABEL_27;
    v13 = IPXManagerClass::receivePacket(g_NetworkManager, (int)this);
    v14 = v13;
    if ( v13 == -4 )
    v15 = dword_A8DBBC;
    if ( !(_WORD)dword_A8DBBC )
    goto LABEL_27;
    goto LABEL_26;
    if ( (unsigned int)v13 > 0xFFFFFFFC )
    goto LABEL_27;
    if ( v13 )
    if ( v13 < 0 )
    goto LABEL_27;
    goto LABEL_23;
    if ( !g_Network_IsHosting )
    LABEL_23:
    if ( v13 >= Network::GetSendCount(g_NetworkManager) )
    goto LABEL_27;
    ConnectionSpeed = Network::GetConnectionSpeed(g_NetworkManager, v14);
    LOWORD(v15) = IPXConnClass::closeConnection(GameMode_Current, ConnectionSpeed);
    LABEL_26:
    v9 = v15;
    goto LABEL_27;
    v15 = dword_A8DBBC;
    if ( (_WORD)dword_A8DBBC )
    goto LABEL_26;
    LABEL_27:
    if ( g_NetworkInterface )
    (*(void (__thiscall **)(int, int, int, int *, int, int, uint32_t, int))(*(uint32_t *)g_NetworkInterface + 12))(
    g_NetworkInterface,
    v10,
    a3,
    &v18,
    12,
    a6,
    0,
    v9);
    return 1;
}

uint32_t * IPXConnClass::_vt00(uint32_t *Block, char a2)
{
    *Block = &IPXConnClass::`vftable';
    ConnectionClass::dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

