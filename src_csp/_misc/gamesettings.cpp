#include "gamesettings.hpp"

char * GameSettings::ParseNetworkAddress(const char *this)
{
    unsigned __int16 v2; // ax
    const char *v3; // esi
    char *result; // eax
    size_t v5; // kr04_4
    char *v6; // edx
    int v7; // esi
    int *v8; // eax
    char v9; // [esp+8h] [ebp-1Ch] BYREF
    int v10; // [esp+Ch] [ebp-18h] BYREF
    int v11; // [esp+10h] [ebp-14h] BYREF
    __int16 v12; // [esp+14h] [ebp-10h]
    uint32_t v13[3]; // [esp+18h] [ebp-Ch] BYREF
    v2 = *((_WORD *)this + 37);
    if ( v2 == 0xFFFF )
    Network::GetField(g_NetworkManager, 34835);
    else if ( v2 < 0x4000u )
    Network::GetField(g_NetworkManager, v2 + 0x4000);
    v3 = this + 88;
    result = 0;
    v5 = strlen(v3) + 1;
    if ( v5 != 1 )
    v6 = (char *)__2_YAPAXI_Z(v5);
    strcpy(v6, v3);
    v7 = 0;
    result = strtok(v6, asc_826598);
    if ( result )
    do
    sscanf(result, "%x", &v9);
    *((uint8_t *)&v10 + v7++) = v9;
    result = strtok(0, asc_826598);
    while ( result );
    if ( v7 >= 4 )
    v11 = -1;
    v12 = -1;
    dword_A8D5FC = 1;
    v8 = NetworkAddress::Assign(v13, &v10, (int)&v11, 0);
    dword_A8D600 = *v8;
    dword_A8D604 = v8[1];
    result = (char *)v8[2];
    dword_A8D608 = (int)result;
    return result;
}

