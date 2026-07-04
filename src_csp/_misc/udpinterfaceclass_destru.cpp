#include "udpinterfaceclass_destru.hpp"

int  UDPInterfaceClass_Destru::_vt12(int this)
{
    int result; // eax
    int v3; // eax
    int v4; // ecx
    int v5; // eax
    for ( result = *(uint32_t *)(this + 258888); result; result = *(uint32_t *)(this + 258888) )
    __3_YAXPAX_Z(**(void ***)(this + 258876));
    v3 = *(uint32_t *)(this + 258888);
    if ( v3 > 0 )
    v4 = v3 - 1;
    v5 = 0;
    for ( *(uint32_t *)(this + 258888) = v4;
    v5 < *(uint32_t *)(this + 258888);
    *(uint32_t *)(*(uint32_t *)(this + 258876) + 4 * v5 - 4) = *(uint32_t *)(*(uint32_t *)(this + 258876) + 4 * v5) )
    ++v5;
    return result;
}

int  UDPInterfaceClass_Destru::_vt11(uint32_t *this, char *Buffer, u_short a3)
{
    uint8_t *v4; // edi
    u_short v5; // ax
    int v6; // ecx
    uint32_t *v7; // esi
    int result; // eax
    int v9; // ecx
    int v10; // edx
    char v11; // [esp+8h] [ebp-10h] BYREF
    char v12; // [esp+Ch] [ebp-Ch] BYREF
    char v13; // [esp+10h] [ebp-8h] BYREF
    char v14; // [esp+14h] [ebp-4h] BYREF
    v4 = __2_YAPAXI_Z(4u);
    sscanf(Buffer, "%d.%d.%d.%d", &v11, &v12, &v13, &v14);
    *v4 = v11;
    v4[1] = v12;
    v5 = a3;
    v4[2] = v13;
    v4[3] = v14;
    if ( !a3 )
    v5 = hostshort;
    v6 = *(this + 64722);
    v7 = this + 64718;
    *((_WORD *)v7 + v6 + 12) = v5;
    result = v7[2];
    if ( v7[4] < result
    || (*((uint8_t *)v7 + 13) || !result)
    && (v9 = v7[5], v9 > 0)
    && (result = (*(int (__thiscall **)(uint32_t *, int, uint32_t))(*v7 + 8))(v7, result + v9, 0), (uint8_t)result) )
    result = v7[4];
    v10 = v7[1];
    v7[4] = result + 1;
    *(uint32_t *)(v10 + 4 * result) = v4;
    return result;
}

char  UDPInterfaceClass_Destru::_vt23(SOCKET *this, u_short a2)
{
    SOCKET v3; // eax
    u_short v5; // ax
    SOCKET v6; // edx
    char optval[2]; // [esp+4h] [ebp-14h] BYREF
    __int16 v8; // [esp+6h] [ebp-12h]
    struct sockaddr name; // [esp+8h] [ebp-10h] BYREF
    if ( *(this + 64539) != -1 )
    closesocket(*(this + 64539));
    *(this + 64539) = -1;
    Debug::Log();
    v3 = socket(2, 2, 0);
    *(this + 64539) = v3;
    if ( v3 == -1 )
    return 0;
    name.sa_family = 2;
    if ( a2 )
    *((_WORD *)this + 129406) = a2;
    v5 = htons(a2);
    else
    *((_WORD *)this + 129406) = 0;
    v5 = htons(hostshort);
    *(_WORD *)name.sa_data = v5;
    *(uint32_t *)&name.sa_data[2] = htonl(0);
    Debug::Log();
    if ( bind(*(this + 64539), &name, 16) == -1 )
    WSAGetLastError();
    Debug::Log();
    (*(void (__thiscall **)(SOCKET *))(*this + 4))(this);
    return 0;
    else
    v6 = *(this + 64539);
    *(_WORD *)optval = 0;
    v8 = 0;
    setsockopt(v6, 0xFFFF, 128, optval, 4);
    Socket::ConfigureBuffers(this, 0xFFFFFFFF);
    Debug::Log();
    return 1;
}

char  UDPInterfaceClass_Destru::_vt26(SOCKET *this, u_short hostshort)
{
    int v4; // ecx
    int v5; // eax
    _WORD *v6; // edx
    SOCKET v7; // esi
    struct sockaddr name; // [esp+10h] [ebp-10h] BYREF
    if ( !hostshort )
    return 0;
    v4 = *(this + 64716);
    v5 = 0;
    if ( v4 > 0 )
    v6 = this + 64712;
    while ( *v6 != hostshort )
    ++v5;
    ++v6;
    if ( v5 >= v4 )
    goto LABEL_7;
    return 0;
    LABEL_7:
    Debug::Log();
    v7 = socket(2, 2, 0);
    if ( v7 == -1 )
    return 0;
    Debug::Log();
    name.sa_family = 2;
    *(_WORD *)name.sa_data = htons(hostshort);
    *(uint32_t *)&name.sa_data[2] = htonl(0);
    Debug::Log();
    if ( bind(v7, &name, 16) == -1 )
    closesocket(v7);
    Debug::Log();
    return 0;
    *((_WORD *)this + *(this + 64716) + 129424) = hostshort;
    *(this + (*(this + 64716))++ + 64704) = v7;
    Socket::ConfigureBuffers(this, v7);
    Debug::Log();
    return 1;
}

void  UDPInterfaceClass_Destru::_vt27(uint32_t *this, __int16 a2)
{
    int v3; // ecx
    int v4; // edi
    _WORD *i; // eax
    SOCKET *v6; // ebx
    int v7; // edx
    _WORD *v8; // ecx
    uint32_t *v9; // eax
    if ( a2 )
    v3 = *(this + 64716);
    v4 = 0;
    if ( v3 > 0 )
    for ( i = this + 64712; *i != a2; ++i )
    if ( ++v4 >= v3 )
    return;
    v6 = this + v4 + 64704;
    Debug::Log();
    closesocket(*v6);
    if ( *v6 == *(this + 64717) )
    *(this + 64717) = -1;
    v7 = v4;
    if ( v4 < *(this + 64716) - 1 )
    v8 = (_WORD *)this + v4 + 129424;
    v9 = this + v4 + 64704;
    do
    ++v7;
    *v9 = v9[1];
    *v8 = v8[1];
    ++v9;
    ++v8;
    while ( v7 < *(this + 64716) - 1 );
    --*(this + 64716);
}

void  UDPInterfaceClass_Destru::_vt29(uint32_t *this, unsigned __int16 a2)
{
    int v2; // esi
    int v3; // eax
    _WORD *v4; // edx
    if ( !a2 || a2 == *(uint32_t *)&hostshort || (v2 = *(this + 64716), v3 = 0, v2 <= 0) )
    LABEL_7:
    *(this + 64717) = -1;
    else
    v4 = this + 64712;
    while ( *v4 != a2 )
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    goto LABEL_7;
    *(this + 64717) = *(this + v3 + 64704);
}

char  UDPInterfaceClass_Destru::_vt25(uint32_t *this)
{
    if ( !WinsockInterface::Init(this) )
    return 0;
    *(this + 64716) = 0;
    return 1;
}

char  UDPInterfaceClass_Destru::_vt15(uint32_t *this, int a2)
{
    char result; // al
    struct hostent *v4; // esi
    int v5; // eax
    int v6; // ecx
    int v7; // eax
    char *i; // eax
    uint32_t *v9; // ebp
    int v10; // eax
    int v11; // ecx
    int v12; // eax
    int v13; // edx
    SOCKET v14; // eax
    SOCKET v15; // [esp-10h] [ebp-B8h]
    char **h_addr_list; // [esp+Ch] [ebp-9Ch]
    char optval[4]; // [esp+10h] [ebp-98h] BYREF
    int v18; // [esp+14h] [ebp-94h]
    struct sockaddr v19; // [esp+18h] [ebp-90h] BYREF
    char name[128]; // [esp+28h] [ebp-80h] BYREF
    if ( *((uint8_t *)this + 258152) || (result = (*(int (__thiscall **)(uint32_t *))(*this + 100))(this)) != 0 )
    (*(void (__thiscall **)(uint32_t *, u_short))(*this + 92))(this, hostshort);
    Debug::Log();
    if ( gethostname(name, 128) )
    Debug::Log();
    Debug::Log();
    v4 = gethostbyname(name);
    if ( !v4 )
    WSAGetLastError();
    Debug::Log();
    while ( *(this + 64856) )
    __3_YAXPAX_Z(*(void **)*(this + 64853));
    v5 = *(this + 64856);
    if ( v5 > 0 )
    v6 = v5 - 1;
    v7 = 0;
    for ( *(this + 64856) = v6;
    v7 < *(this + 64856);
    *(uint32_t *)(*(this + 64853) + 4 * v7 - 4) = *(uint32_t *)(*(this + 64853) + 4 * v7) )
    ++v7;
    h_addr_list = v4->h_addr_list;
    for ( i = *h_addr_list; *h_addr_list; i = *h_addr_list )
    v18 = *(uint32_t *)i;
    ++h_addr_list;
    Debug::Log();
    v9 = __2_YAPAXI_Z(4u);
    *v9 = v18;
    v10 = *(this + 64854);
    if ( *(this + 64856) >= v10 )
    if ( !*((uint8_t *)this + 259421) && v10 )
    continue;
    v11 = *(this + 64857);
    if ( v11 <= 0
    || !(*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*(this + 64852) + 8))(
    this + 64852,
    v10 + v11,
    0) )
    continue;
    v12 = *(this + 64856);
    v13 = *(this + 64853);
    *(this + 64856) = v12 + 1;
    *(uint32_t *)(v13 + 4 * v12) = v9;
    Debug::Log();
    v14 = socket(2, 2, 0);
    *(this + 64540) = v14;
    if ( v14 == -1 )
    return 0;
    else
    v19.sa_family = 2;
    *(_WORD *)v19.sa_data = htons(dword_841F38);
    *(uint32_t *)&v19.sa_data[2] = htonl(0);
    Debug::Log();
    if ( bind(*(this + 64540), &v19, 16) == -1 )
    (*(void (__thiscall **)(uint32_t *))(*this + 4))(this);
    return 0;
    else
    v15 = *(this + 64540);
    memset(optval, 0, sizeof(optval));
    setsockopt(v15, 0xFFFF, 128, optval, 4);
    Socket::ConfigureBuffers(this, *(this + 64540));
    Debug::Log();
    return 1;
    return result;
}

char  UDPInterfaceClass_Destru::_vt07(SOCKET *this)
{
    signed int v2; // ebx
    SOCKET *v3; // edi
    u_int v4; // eax
    if ( IPXInterfaceClass::Receive(this) && (v2 = 0, (int)*(this + 64716) > 0) )
    v3 = this + 64704;
    while ( 1 )
    v4 = (*(int (__thiscall **)(SOCKET *, int))(*this + 56))(this, -1);
    if ( WSAAsyncSelect(*v3, g_hWnd, v4, 3) == -1 )
    break;
    ++v2;
    ++v3;
    if ( v2 >= (int)*(this + 64716) )
    goto LABEL_6;
    Debug::Log();
    return 0;
    else
    LABEL_6:
    Dialog::MessageLoop();
    return 1;
}

int  UDPInterfaceClass_Destru::_vt08(SOCKET *this)
{
    NetworkClass::UnregisterAsync(this);
    return (*(int (__thiscall **)(SOCKET *))(*this + 112))(this);
}

void  UDPInterfaceClass_Destru::_vt30(uint32_t *this, uint32_t *a2, __int16 a3)
{
    int v4; // edi
    __int16 v5; // bp
    int v6; // eax
    uint32_t *v7; // edx
    _WORD *v8; // ecx
    v4 = *(this + 64858);
    if ( v4 < 16 )
    v5 = a3;
    v6 = 0;
    if ( v4 > 0 )
    v7 = this + 64859;
    v8 = this + 64875;
    do
    if ( v5 == *v8 )
    if ( *a2 == *v7 )
    return;
    v5 = a3;
    ++v6;
    ++v8;
    ++v7;
    while ( v6 < v4 );
    Debug::Log();
    *(this + *(this + 64858) + 64859) = *a2;
    *((_WORD *)this + (*(this + 64858))++ + 129750) = v5;
}

int  UDPInterfaceClass_Destru::_vt28(uint32_t *this)
{
    int v2; // ebx
    int result; // eax
    SOCKET *v4; // esi
    v2 = 0;
    result = *(this + 64716);
    if ( result <= 0 )
    *(this + 64716) = 0;
    *(this + 64717) = -1;
    else
    v4 = this + 64704;
    do
    Debug::Log();
    WSAAsyncSelect(*v4, g_hWnd, 0, 0);
    closesocket(*v4);
    result = *(this + 64716);
    ++v2;
    ++v4;
    while ( v2 < result );
    *(this + 64716) = 0;
    *(this + 64717) = -1;
    return result;
}

int UDPInterfaceClass_Destru::_vt13()
{
    return 2;
}

int  UDPInterfaceClass_Destru::_vt14(uint32_t *this, int a2)
{
    if ( a2 == *(this + 64539) || a2 == -1 )
    return 1140;
    else
    return a2 != *(this + 64540) ? 0 : 0x475;
}

int  UDPInterfaceClass_Destru::_vt18(uint32_t *this)
{
    return *(this + 64856);
}

int  UDPInterfaceClass_Destru::_vt19(uint32_t *this, int a2)
{
    return *(uint32_t *)(*(this + 64853) + 4 * a2);
}

void  UDPInterfaceClass_Destru::sub_7B42C0(int this)
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

unsigned int  UDPInterfaceClass_Destru::sub_7B42F0(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  UDPInterfaceClass_Destru::sub_7B44A0(void *this, int a2, uint32_t *a3)
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

int  UDPInterfaceClass_Destru::sub_7B4550(int *this, uint32_t *a2)
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

uint32_t * UDPInterfaceClass_Destru::sub_7B45D0(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<unsigned char *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

