#include "network.hpp"

int  Network::CopyAddress_Small(char *this, int a2)
{
    char *v3; // ecx
    v3 = this + 4;
    *(uint32_t *)a2 = *(uint32_t *)v3;
    *(_WORD *)(a2 + 4) = *((_WORD *)v3 + 2);
    return a2;
}

// 0x00541000
int  Network::FindPlayerByID(int *this, int a2)
{
    int v2; // esi
    int v3; // eax
    uint32_t *i; // edx
    v2 = *(this + 17);
    v3 = 0;
    if ( v2 <= 0 )
    return 0;
    for ( i = this + 10; *(uint32_t *)(*i + 100) != a2; ++i )
    if ( ++v3 >= v2 )
    return 0;
    return *(this + v3 + 10) + 76;
}

// 0x005413B0
int  Network::SendPacketThunk(int this, int a2, int a3, int a4, int a5, int a6, int a7)
{
    if ( *(uint8_t *)(this + 4) && *(uint8_t *)(this + 5) )
    return (*(int (__thiscall **)(uint32_t, int, int, int, int, int, int))(**(uint32_t **)(this + 72) + 56))(
    *(uint32_t *)(this + 72),
    a2,
    a3,
    a4,
    a5,
    a6,
    a7);
    else
    return 0;
}

// 0x00541480
int  Network::SendPacketThunk2(int this, int a2, int a3, int a4, int a5)
{
    if ( *(uint8_t *)(this + 4) && *(uint8_t *)(this + 5) )
    return (*(int (__thiscall **)(uint32_t, int, int, int, int))(**(uint32_t **)(this + 76) + 52))(
    *(uint32_t *)(this + 76),
    a2,
    a3,
    a4,
    a5);
    else
    return 0;
}

// 0x00542430
int  Network::GetField(_WORD *this, __int16 a2)
{
    int result; // eax
    __int16 v3; // dx
    LOWORD(result) = a2;
    LOBYTE(v3) = HIBYTE(a2);
    HIBYTE(v3) = a2;
    *(this + 17) = v3;
    return result;
}

// 0x00543050
uint32_t * Network::SetPlayerCoords(uint32_t *this, uint32_t *a2)
{
    uint32_t *result; // eax
    result = (uint32_t *)*(this + 19);
    if ( result )
    result += 19;
    *result = *a2;
    result[1] = a2[1];
    result[2] = a2[2];
    return result;
}

// 0x005DA720
int Network::ShutdownInterface()
{
    int result; // eax
    g_CurrentPlayerName[0] = 0;
    if ( g_NetworkInterface )
    result = (**(int (__thiscall ***)(int, int))g_NetworkInterface)(g_NetworkInterface, 1);
    g_NetworkInterface = 0;
    return result;
}

// 0x0074FD20
int __stdcall Network::GetMaxPacketSize(unsigned int a1)
{
    int v1; // ecx
    unsigned int *v2; // eax
    v1 = 2;
    v2 = (unsigned int *)&unk_846150;
    while ( a1 < *v2 )
    v2 -= 2;
    --v1;
    if ( (int)v2 < (int)&dword_846140 )
    return dword_846154;
    return dword_846144[2 * v1];
}

