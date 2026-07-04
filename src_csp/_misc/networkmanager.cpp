#include "networkmanager.hpp"

int  NetworkManager::SetPlayerAddress(int *this, int a2, uint32_t *a3)
{
    int v4; // edx
    int result; // eax
    char **v6; // esi
    char **i; // ecx
    char *v8; // edx
    int v9; // [esp+Ch] [ebp-8h] BYREF
    Network::CopyAddress(a3, &a3, (int)&v9);
    v4 = *(this + 4);
    result = 0;
    if ( v4 > 0 )
    v6 = (char **)*(this + 1);
    for ( i = v6; **i != a2; ++i )
    if ( ++result >= v4 )
    return result;
    v8 = v6[result];
    result = v9;
    *(uint32_t *)(v8 + 33) = v9;
    return result;
}

// 0x006646C0
char  NetworkManager::RemovePlayer(int this, int a2)
{
    int i; // esi
    char *v3; // eax
    char result; // al
    uint8_t v5[340]; // [esp+Ch] [ebp-154h] BYREF
    memset(v5, 0, 338);
    for ( i = 0; i < *(uint32_t *)(this + 16); ++i )
    v3 = *(char **)(*(uint32_t *)(this + 4) + 4 * i);
    if ( *v3 == a2 )
    v3[41] = 0;
    v3[39] = 0;
    result = *(uint8_t *)(this + 24);
    if ( result )
    v5[0] = 2;
    v5[1] = a2;
    Debug::Log();
    return Network::SendPacket((int)g_NetworkManager, (int)v5, 338, 1u);
    return result;
}

