#include "ipxinterfaceclass.hpp"

char  IPXInterfaceClass::_vt15(int this, int hostshort)
{
    char result; // al
    SOCKET v4; // eax
    __int16 v5; // dx
    char v6[4]; // [esp+4h] [ebp-18h] BYREF
    char optval[4]; // [esp+8h] [ebp-14h] BYREF
    struct sockaddr name; // [esp+Ch] [ebp-10h] BYREF
    if ( *(uint8_t *)(this + 258152) )
    if ( *(uint32_t *)(this + 258156) != -1 )
    return 0;
    else
    result = WinsockInterface::Init((uint32_t *)this);
    if ( !result )
    return result;
    *(uint32_t *)(this + 258828) = hostshort;
    Debug::Log();
    *(uint32_t *)&name.sa_data[4] = -1;
    name.sa_family = 6;
    *(uint32_t *)name.sa_data = 0;
    *(_WORD *)&name.sa_data[8] = -1;
    *(_WORD *)&name.sa_data[10] = htons(hostshort);
    Debug::Log();
    v4 = socket(6, 2, 1000);
    *(uint32_t *)(this + 258156) = v4;
    if ( v4 == -1 )
    WSAGetLastError();
    Debug::Log();
    closesocket(*(uint32_t *)(this + 258156));
    return 0;
    else
    Debug::Log();
    if ( IPXInterfaceClass::initSocket((uint32_t *)this, *(uint32_t *)(this + 258808), (int)&name) )
    Debug::Log();
    v5 = *(_WORD *)&name.sa_data[8];
    *(uint32_t *)(this + 258822) = *(uint32_t *)&name.sa_data[4];
    *(_WORD *)(this + 258826) = v5;
    Debug::Log();
    if ( bind(*(uint32_t *)(this + 258156), &name, 16) == -1 )
    WSAGetLastError();
    Debug::Log();
    closesocket(*(uint32_t *)(this + 258156));
    return 0;
    else
    Debug::Log();
    *(uint32_t *)optval = 1;
    *(uint32_t *)v6 = 4;
    Debug::Log();
    if ( setsockopt(*(uint32_t *)(this + 258156), 0xFFFF, 32, optval, 4) == -1 )
    WSAGetLastError();
    Debug::Log();
    Debug::Log();
    if ( setsockopt(*(uint32_t *)(this + 258156), 1000, 0x4000, v6, 4) == -1 )
    WSAGetLastError();
    Debug::Log();
    Debug::Log();
    if ( setsockopt(*(uint32_t *)(this + 258156), 1000, 16385, v6, 4) == -1 )
    WSAGetLastError();
    Debug::Log();
    Socket::ConfigureBuffers((SOCKET *)this, 0xFFFFFFFF);
    Debug::Log();
    return 1;
    else
    Debug::Log();
    closesocket(*(uint32_t *)(this + 258156));
    return 0;
}

int  IPXInterfaceClass::_vt16(u_short *this, int a2, int a3, int a4, unsigned int fromlen)
{
    int v7; // esi
    int v8; // eax
    int v9; // ecx
    int v10; // eax
    SOCKET v11; // eax
    int v12; // eax
    int v13; // ecx
    _WORD *v14; // edi
    int *v15; // esi
    bool v16; // zf
    int v17; // esi
    uint8_t *v18; // ebx
    int v19; // eax
    int v20; // ecx
    uint32_t *v21; // ebp
    int v22; // ecx
    int v23; // eax
    int v24; // edx
    u_short v25; // [esp-4h] [ebp-30h]
    int v26; // [esp+10h] [ebp-1Ch]
    int v27; // [esp+14h] [ebp-18h] BYREF
    __int16 v28; // [esp+18h] [ebp-14h]
    struct sockaddr to; // [esp+1Ch] [ebp-10h] BYREF
    if ( a3 != 1139 )
    return 1;
    if ( (unsigned __int16)fromlen != 1 )
    if ( (unsigned __int16)fromlen == 2 )
    if ( HIWORD(fromlen) )
    LABEL_6:
    (*(void (__thiscall **)(u_short *, uint32_t))(*(uint32_t *)this + 36))(this, *((uint32_t *)this + 64539));
    return 0;
    if ( *((uint32_t *)this + 12) )
    while ( 1 )
    v25 = *(this + 129414);
    v7 = **((uint32_t **)this + 9);
    to.sa_family = 6;
    *(_WORD *)&to.sa_data[10] = htons(v25);
    if ( *(uint8_t *)(v7 + 20) )
    *(uint32_t *)to.sa_data = *((uint32_t *)this + 64703);
    *(uint32_t *)&to.sa_data[4] = *((uint32_t *)this + 64704);
    *(_WORD *)&to.sa_data[8] = *(this + 129410);
    else
    Network::CopyAddress((uint32_t *)v7, &a3, (int)&v27);
    *(uint32_t *)to.sa_data = a3;
    *(uint32_t *)&to.sa_data[4] = v27;
    *(_WORD *)&to.sa_data[8] = v28;
    if ( sendto(*((uint32_t *)this + 64539), (const char *)(v7 + 28), *(uint32_t *)(v7 + 16) + 4, 0, &to, 14) == -1
    && WSAGetLastError() != 10035 )
    break;
    v8 = *((uint32_t *)this + 12);
    if ( v8 > 0 )
    v9 = v8 - 1;
    v10 = 0;
    for ( *((uint32_t *)this + 12) = v9;
    v10 < *((uint32_t *)this + 12);
    *(uint32_t *)(*((uint32_t *)this + 9) + 4 * v10 - 4) = *(uint32_t *)(*((uint32_t *)this + 9) + 4 * v10) )
    ++v10;
    if ( *(uint8_t *)(v7 + 22) )
    __3_YAXPAX_Z((void *)v7);
    else
    *(uint8_t *)(v7 + 21) = 0;
    --*((uint32_t *)this + 64536);
    if ( !*((uint32_t *)this + 12) )
    return 0;
    goto LABEL_6;
    return 0;
    if ( HIWORD(fromlen) )
    (*(void (__thiscall **)(u_short *, uint32_t))(*(uint32_t *)this + 36))(this, *((uint32_t *)this + 64539));
    return 0;
    v11 = *((uint32_t *)this + 64539);
    fromlen = 14;
    v12 = recvfrom(v11, (char *)this + 258164, 640, 0, &to, (int *)&fromlen);
    v26 = v12;
    if ( v12 == -1 )
    if ( WSAGetLastError() != 10035 )
    (*(void (__thiscall **)(u_short *, uint32_t))(*(uint32_t *)this + 36))(this, *((uint32_t *)this + 64539));
    return 0;
    return 0;
    if ( !v12 )
    return 0;
    v27 = *(uint32_t *)&to.sa_data[4];
    a3 = *(uint32_t *)to.sa_data;
    v28 = *(_WORD *)&to.sa_data[8];
    if ( *(uint32_t *)to.sa_data == *((uint32_t *)this + 64703) )
    v13 = 3;
    v14 = this + 129411;
    v15 = &v27;
    v16 = 1;
    do
    if ( !v13 )
    break;
    v16 = *(_WORD *)v15 == *v14;
    v15 = (int *)((char *)v15 + 2);
    ++v14;
    --v13;
    while ( v16 );
    if ( v16 )
    return 0;
    v17 = sub_7B2730();
    if ( v17 > 0 && Random::Range(Randomizer_Global, 0, 99) <= v17 )
    return 0;
    v18 = IPXInterfaceClass::processPacket(this);
    *((uint32_t *)v18 + 4) = v26 - 4;
    *((uint32_t *)v18 + 7) = *((uint32_t *)this + 64541);
    qmemcpy(v18 + 32, this + 129084, v26 - 4);
    if ( (*(unsigned __int8 (__thiscall **)(u_short *, uint8_t *))(*(uint32_t *)this + 88))(this, v18) )
    NetworkID::Assign(v18, &a3, (int)&v27, 0);
    v19 = *((uint32_t *)this + 4);
    v20 = *((uint32_t *)this + 6);
    v21 = this + 4;
    if ( v20 < v19
    || (*((uint8_t *)v21 + 13) || !v19)
    && (v22 = v21[5], v22 > 0)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*v21 + 8))(v21, v19 + v22, 0) )
    v23 = v21[4];
    v24 = v21[1];
    v21[4] = v23 + 1;
    *(uint32_t *)(v24 + 4 * v23) = v18;
    return 0;
    Debug::Log();
    if ( !byte_B7801C )
    byte_B7801C = 1;
    if ( v18[22] )
    __3_YAXPAX_Z(v18);
    else
    v18[21] = 0;
    --*((uint32_t *)this + 64536);
    return 0;
}

int IPXInterfaceClass::_vt18()
{
    return 0;
}

int __stdcall IPXInterfaceClass::_vt19(int a1)
{
    return 0;
}

int  IPXInterfaceClass::_vt20(uint32_t *this, int a2)
{
    *(this + 64702) = a2;
    return a2;
}

int IPXInterfaceClass::_vt13()
{
    return 1;
}

int __stdcall IPXInterfaceClass::_vt14(int a1)
{
    return 1139;
}

void * IPXInterfaceClass::_vt00(void *Block, char a2)
{
    WinsockInterfaceClass::Destructor((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  IPXInterfaceClass::_vt01(SOCKET *this)
{
    int result; // eax
    if ( *(this + 64539) != -1 )
    closesocket(*(this + 64539));
    *(this + 64539) = -1;
    result = *(this + 64540);
    if ( result != -1 )
    result = closesocket(*(this + 64540));
    *(this + 64540) = -1;
    return result;
}

char  IPXInterfaceClass::_vt07(SOCKET *this)
{
    u_int v2; // eax
    int v4; // eax
    u_int v5; // eax
    v2 = (*(int (__thiscall **)(SOCKET *, int))(*this + 56))(this, -1);
    if ( WSAAsyncSelect(*(this + 64539), g_hWnd, v2, 3) != -1 )
    v4 = *(this + 64540);
    if ( v4 == -1 )
    return 1;
    v5 = (*(int (__thiscall **)(SOCKET *, int))(*this + 56))(this, v4);
    if ( WSAAsyncSelect(*(this + 64540), g_hWnd, v5, 3) != -1 )
    return 1;
    WSAGetLastError();
    Debug::Log();
    return 0;
}

void  IPXInterfaceClass::_vt05(int this)
{
    int v2; // eax
    int v3; // eax
    int v4; // ecx
    int v5; // eax
    while ( *(uint32_t *)(this + 24) )
    v2 = **(uint32_t **)(this + 12);
    if ( *(uint8_t *)(v2 + 22) )
    __3_YAXPAX_Z(**(void ***)(this + 12));
    else
    *(uint8_t *)(v2 + 21) = 0;
    --*(uint32_t *)(this + 258140);
    v3 = *(uint32_t *)(this + 24);
    if ( v3 > 0 )
    v4 = v3 - 1;
    v5 = 0;
    for ( *(uint32_t *)(this + 24) = v4;
    v5 < *(uint32_t *)(this + 24);
    *(uint32_t *)(*(uint32_t *)(this + 12) + 4 * v5 - 4) = *(uint32_t *)(*(uint32_t *)(this + 12) + 4 * v5) )
    ++v5;
    *(uint32_t *)(this + 258140) = 0;
    *(uint32_t *)(this + 258128) = 0;
}

int __stdcall IPXInterfaceClass::_vt21(uint32_t *a1)
{
    int v1; // ebx
    uint32_t *v2; // ebp
    int v3; // eax
    int *v4; // esi
    int result; // eax
    int v6; // edx
    int v7; // edi
    v1 = 0;
    v2 = a1 + 7;
    v3 = a1[4];
    a1[7] = 0;
    v4 = a1 + 8;
    result = v3 / 4;
    if ( result > 0 )
    do
    v6 = *v4++;
    ComputeHash(v2, v6);
    ++v1;
    result = a1[4] / 4;
    while ( v1 < result );
    v7 = a1[4] & 3;
    if ( v7 )
    return ComputeHash(v2, *v4 & (0xFFFFFFFF >> (32 - 8 * v7)));
    return result;
}

int __stdcall IPXInterfaceClass::_vt09(SOCKET s)
{
    SOCKET v1; // esi
    int optlen; // [esp+4h] [ebp-4h] BYREF
    v1 = s;
    optlen = 4;
    getsockopt(s, 0xFFFF, 4103, (char *)&s, &optlen);
    s = 0;
    return setsockopt(v1, 0xFFFF, 4103, (const char *)&s, optlen);
}

char __stdcall IPXInterfaceClass::_vt17(char *name, int namelen)
{
    if ( gethostname(name, namelen) == -1 )
    WSAGetLastError();
    Debug::Log();
    return 0;
    else
    Debug::Log();
    return 1;
}

void  IPXInterfaceClass::sub_7B2840(int this)
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

unsigned int  IPXInterfaceClass::sub_7B2870(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  IPXInterfaceClass::sub_7B2A20(void *this, int a2, uint32_t *a3)
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

int  IPXInterfaceClass::sub_7B2AD0(int *this, uint32_t *a2)
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

uint32_t * IPXInterfaceClass::sub_7B2B50(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<WinsockInterfaceClass::WinsockBufferType *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

