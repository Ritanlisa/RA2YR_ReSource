#include "udpinterfaceclass.hpp"

int  UDPInterfaceClass::ProcessSocketIO(char *this, int a2, SOCKET s, int a4, unsigned int a5)
{
    SOCKET v6; // ebx
    int v7; // edx
    int v8; // eax
    uint32_t *v9; // ecx
    int v11; // edi
    uint32_t *v12; // esi
    uint32_t *v13; // ebx
    u_short v14; // ax
    u_short v15; // ax
    int v16; // edx
    int v17; // ecx
    uint32_t *v18; // eax
    _WORD *v19; // edi
    int v20; // ecx
    int v21; // ecx
    int v22; // eax
    int v23; // ecx
    int v24; // ecx
    int v25; // eax
    int v26; // eax
    int v27; // esi
    int v28; // ecx
    int v29; // eax
    uint32_t **v30; // edx
    int v31; // edi
    u_long v32; // eax
    int v33; // ecx
    int v34; // eax
    char *v35; // ebp
    int v36; // eax
    int v37; // eax
    int v38; // edx
    char v39; // [esp+13h] [ebp-1Dh]
    int fromlen; // [esp+14h] [ebp-1Ch] BYREF
    int v41; // [esp+18h] [ebp-18h]
    struct sockaddr netshort; // [esp+20h] [ebp-10h] BYREF
    SOCKET sa; // [esp+38h] [ebp+8h]
    u_short v44; // [esp+3Ch] [ebp+Ch]
    int v45; // [esp+40h] [ebp+10h]
    v39 = 0;
    if ( s == 1140 )
    v6 = *((uint32_t *)this + 64539);
    sa = v6;
    if ( a4 != v6 )
    v7 = *((uint32_t *)this + 64716);
    v8 = 0;
    if ( v7 > 0 )
    v9 = this + 258816;
    while ( *v9 != a4 )
    ++v8;
    ++v9;
    if ( v8 >= v7 )
    goto LABEL_11;
    v6 = *((uint32_t *)this + v8 + 64704);
    sa = v6;
    else
    if ( s != 1141 )
    return 1;
    v6 = *((uint32_t *)this + 64540);
    v39 = 1;
    sa = v6;
    LABEL_11:
    if ( (unsigned __int16)a5 == 1 )
    if ( HIWORD(a5) )
    LABEL_22:
    Debug::Log();
    (*(void (__thiscall **)(char *, SOCKET))(*(uint32_t *)this + 36))(this, v6);
    return 0;
    fromlen = 16;
    v26 = recvfrom(v6, this + 258164, 640, 0, &netshort, &fromlen);
    v27 = v26;
    if ( v26 == -1 )
    (*(void (__thiscall **)(char *, SOCKET))(*(uint32_t *)this + 36))(this, v6);
    return 0;
    if ( v26 )
    if ( !v39 && !g_Network_IsHosting )
    v28 = *((uint32_t *)this + 64856);
    v29 = 0;
    if ( v28 > 0 )
    v30 = (uint32_t **)*((uint32_t *)this + 64853);
    while ( **v30 != *(uint32_t *)&netshort.sa_data[2] )
    ++v29;
    ++v30;
    if ( v29 >= v28 )
    goto LABEL_71;
    return 0;
    LABEL_71:
    v31 = sub_7B2730();
    if ( v31 > 0 && Random::Range(Randomizer_Global, 0, 99) <= v31 )
    return 0;
    v13 = (uint32_t *)IPXInterfaceClass::processPacket(this);
    v13[4] = v27 - 4;
    v13[7] = *((uint32_t *)this + 64541);
    *((uint8_t *)v13 + 23) = v39;
    *((uint8_t *)v13 + 24) = 0;
    qmemcpy(v13 + 8, this + 258168, v27 - 4);
    if ( !(*(unsigned __int8 (__thiscall **)(char *, uint32_t *))(*(uint32_t *)this + 88))(this, v13) )
    v13[1] = *(uint32_t *)&netshort.sa_data[2];
    ntohs(*(u_short *)netshort.sa_data);
    Debug::Log();
    if ( !byte_B78124 )
    byte_B78124 = 1;
    if ( *((uint8_t *)v13 + 22) )
    __3_YAXPAX_Z(v13);
    return 0;
    LABEL_60:
    *((uint8_t *)v13 + 21) = 0;
    --*((uint32_t *)this + 64536);
    return 0;
    *v13 = 0;
    v13[1] = 0;
    v13[2] = 0;
    v13[3] = 0;
    v32 = htonl(0x7F000001u);
    if ( *(uint32_t *)&netshort.sa_data[2] == v32 )
    *((_WORD *)v13 + 13) = 0;
    *v13 = dword_A8DBB0;
    v13[1] = dword_A8DBB4;
    v13[2] = dword_A8DBB8;
    else
    *((_WORD *)v13 + 13) = ntohs(*(u_short *)netshort.sa_data);
    v13[1] = *(uint32_t *)&netshort.sa_data[2];
    v33 = *((uint32_t *)this + 4);
    v34 = *((uint32_t *)this + 6);
    v35 = this + 8;
    if ( v34 < v33
    || (v35[13] || !v33)
    && (v36 = *((uint32_t *)v35 + 5), v36 > 0)
    && (*(unsigned __int8 (__thiscall **)(char *, int, uint32_t))(*(uint32_t *)v35 + 8))(v35, v33 + v36, 0) )
    v37 = *((uint32_t *)v35 + 4);
    v38 = *((uint32_t *)v35 + 1);
    *((uint32_t *)v35 + 4) = v37 + 1;
    *(uint32_t *)(v38 + 4 * v37) = v13;
    return 0;
    if ( (unsigned __int16)a5 != 2 )
    return 0;
    if ( *((uint32_t *)this + 64717) != -1 )
    v11 = 0;
    if ( *((int *)this + 64716) > 0 )
    v12 = this + 258816;
    do
    if ( *v12 == *((uint32_t *)this + 64717) )
    v6 = *((uint32_t *)this + 64717);
    Debug::Log();
    ++v11;
    ++v12;
    while ( v11 < *((uint32_t *)this + 64716) );
    sa = v6;
    if ( HIWORD(a5) )
    goto LABEL_22;
    if ( v39 )
    if ( !*((uint32_t *)this + 18) )
    LABEL_25:
    Debug::Log();
    return 0;
    v13 = (uint32_t *)**((uint32_t **)this + 15);
    else
    if ( !*((uint32_t *)this + 12) )
    goto LABEL_25;
    v13 = (uint32_t *)**((uint32_t **)this + 9);
    v45 = (int)v13;
    *(uint32_t *)&netshort.sa_data[2] = v13[1];
    *(_WORD *)netshort.sa_data = htons(*((_WORD *)v13 + 13));
    netshort.sa_family = 2;
    if ( v39 )
    if ( *(uint32_t *)&netshort.sa_data[2] != htonl(0x7F000001u) )
    *(_WORD *)netshort.sa_data = htons(dword_841F34);
    *(uint32_t *)&netshort.sa_data[2] = htonl(0x7F000001u);
    else
    v14 = *((_WORD *)v13 + 13);
    if ( !v14 )
    v14 = hostshort;
    *(_WORD *)netshort.sa_data = htons(v14);
    if ( v13[1] == dword_A8DBB4
    && (!Game_PlayerCount || GUID::Compare((char *)&dword_A8DBB0, *(uint32_t *)Game_PlayerInfoArray + 40)) )
    *(uint32_t *)&netshort.sa_data[2] = htonl(0x7F000001u);
    *(_WORD *)netshort.sa_data = htons(dword_841F3C);
    v41 = *(uint32_t *)&netshort.sa_data[2];
    v15 = ntohs(*(u_short *)netshort.sa_data);
    v16 = *((uint32_t *)this + 64858);
    v17 = 0;
    v44 = v15;
    if ( v16 <= 0 )
    LABEL_43:
    ntohs(*(u_short *)netshort.sa_data);
    Debug::Log();
    if ( sendto(sa, (const char *)v13 + 28, v13[4] + 4, 0, &netshort, 16) == -1 && WSAGetLastError() != 10035 )
    WSAGetLastError();
    Debug::Log();
    (*(void (__thiscall **)(char *, SOCKET))(*(uint32_t *)this + 36))(this, sa);
    return 0;
    else
    v18 = this + 259436;
    v19 = this + 259500;
    while ( v44 != *v19 || v41 != *v18 )
    v13 = (uint32_t *)v45;
    ++v17;
    ++v19;
    ++v18;
    if ( v17 >= v16 )
    goto LABEL_43;
    ntohs(*(u_short *)netshort.sa_data);
    Debug::Log();
    v13 = (uint32_t *)v45;
    if ( !v39 )
    v23 = *((uint32_t *)this + 12);
    if ( v23 > 0 )
    v24 = v23 - 1;
    v25 = 0;
    for ( *((uint32_t *)this + 12) = v24;
    v25 < *((uint32_t *)this + 12);
    *(uint32_t *)(*((uint32_t *)this + 9) + 4 * v25 - 4) = *(uint32_t *)(*((uint32_t *)this + 9) + 4 * v25) )
    ++v25;
    if ( *((uint8_t *)v13 + 22) )
    __3_YAXPAX_Z(v13);
    return 0;
    goto LABEL_60;
    v20 = *((uint32_t *)this + 18);
    if ( v20 > 0 )
    v21 = v20 - 1;
    v22 = 0;
    for ( *((uint32_t *)this + 18) = v21;
    v22 < *((uint32_t *)this + 18);
    *(uint32_t *)(*((uint32_t *)this + 15) + 4 * v22 - 4) = *(uint32_t *)(*((uint32_t *)this + 15) + 4 * v22) )
    ++v22;
    if ( *((uint8_t *)v13 + 22) )
    __3_YAXPAX_Z(v13);
    else
    *((uint8_t *)v13 + 21) = 0;
    --*((uint32_t *)this + 64537);
    return 0;
}

