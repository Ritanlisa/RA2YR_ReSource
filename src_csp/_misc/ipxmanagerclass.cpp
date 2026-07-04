#include "ipxmanagerclass.hpp"

uint32_t * IPXManagerClass::_vt16(uint32_t *this)
{
    uint32_t *result; // eax
    result = (uint32_t *)*(this + 18);
    if ( result )
    *(this + 25) = result[10];
    *(this + 26) = result[11];
    result = (uint32_t *)result[12];
    *(this + 27) = result;
    return result;
}

int  IPXManagerClass::_vt17(uint32_t *this)
{
    int result; // eax
    result = *(this + 18);
    if ( result )
    *(uint32_t *)(result + 40) = *(this + 25);
    *(uint32_t *)(*(this + 18) + 44) = *(this + 26);
    result = *(this + 18);
    *(uint32_t *)(result + 48) = *(this + 27);
    return result;
}

int  IPXManagerClass::_vt18(uint32_t *this, int a2, int a3, int a4)
{
    int v4; // eax
    int result; // eax
    v4 = *(this + 19);
    if ( v4 )
    *(uint32_t *)(v4 + 40) = a2;
    *(uint32_t *)(*(this + 19) + 44) = a3;
    *(uint32_t *)(*(this + 19) + 48) = a4;
    result = *(this + 20);
    if ( result )
    *(uint32_t *)(result + 40) = a2;
    result = *(this + 20);
    *(uint32_t *)(result + 44) = a3;
    *(uint32_t *)(*(this + 20) + 48) = a4;
    return result;
}

int  IPXManagerClass::_vt06(int *this, int a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 17);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = this + 10; *(uint32_t *)(*i + 100) != a2; ++i )
    if ( ++result >= v2 )
    return -1;
    return result;
}

int  IPXManagerClass::_vt19(uint32_t *this, int a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *v4; // esi
    v2 = *(this + 17);
    result = 0;
    if ( v2 <= 0 )
    LABEL_5:
    if ( a2 == *(this + 20) )
    return -4;
    else if ( a2 == *(this + 19) )
    return -3;
    else
    return (a2 != *(this + 18)) - 2;
    else
    v4 = this + 10;
    while ( *v4 != a2 )
    ++result;
    ++v4;
    if ( result >= v2 )
    goto LABEL_5;
    return result;
}

int  IPXManagerClass::_vt02(char *this, int a2, int a3, int a4, int a5)
{
    int v6; // ecx
    uint32_t *v7; // ecx
    int v9; // eax
    char *v10; // edx
    int v11; // edi
    uint32_t *v12; // ebx
    int v13; // eax
    uint32_t *v14; // ecx
    if ( !*(this + 4) )
    return 0;
    if ( !*(this + 5) )
    return 0;
    v6 = *((uint32_t *)this + 17);
    if ( !v6 )
    return 0;
    if ( a5 != -1 )
    v13 = (*(int (__thiscall **)(char *, int))(*(uint32_t *)this + 24))(this, a5);
    if ( v13 != -1 )
    v14 = (uint32_t *)*((uint32_t *)this + v13 + 10);
    if ( *(uint32_t *)(v14[1] + 40) != *(uint32_t *)(v14[1] + 4) )
    (*(void (__thiscall **)(uint32_t *, int, int, int, uint32_t))(*v14 + 8))(v14, a2, a3, a4, 0);
    return 1;
    goto LABEL_20;
    if ( GameMode_Current[0] == 4 && g_Network_IsHosting )
    v7 = (uint32_t *)*((uint32_t *)this + 20);
    if ( *(uint32_t *)(v7[1] + 40) < *(uint32_t *)(v7[1] + 4) )
    return (*(int (__thiscall **)(uint32_t *, int, int, int, int))(*v7 + 8))(v7, a2, a3, a4, 255);
    goto LABEL_20;
    v9 = 0;
    if ( v6 > 0 )
    v10 = this + 40;
    while ( *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v10 + 4) + 40) != *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v10 + 4) + 4) )
    ++v9;
    v10 += 4;
    if ( v9 >= v6 )
    goto LABEL_13;
    LABEL_20:
    ++*((uint32_t *)this + 40);
    return 0;
    LABEL_13:
    v11 = 0;
    if ( v6 > 0 )
    v12 = this + 40;
    do
    (*(void (__thiscall **)(uint32_t, int, int, int, uint32_t))(*(uint32_t *)*v12 + 8))(*v12, a2, a3, a4, 0);
    ++v11;
    ++v12;
    while ( v11 < *((uint32_t *)this + 17) );
    return 1;
}

int  IPXManagerClass::_vt03(int this, int a2, int a3, uint32_t *a4)
{
    int v5; // eax
    int v6; // ecx
    int v7; // eax
    int v8; // ecx
    int v9; // edx
    int v10; // edi
    int v11; // edx
    int v13; // [esp+10h] [ebp-4h]
    if ( !*(uint8_t *)(this + 4) )
    return 0;
    if ( !*(uint8_t *)(this + 5) )
    return 0;
    v5 = *(uint32_t *)(this + 68);
    if ( !v5 )
    return 0;
    if ( *(uint32_t *)(this + 84) >= v5 )
    *(uint32_t *)(this + 84) = 0;
    v13 = 0;
    if ( v5 <= 0 )
    return 0;
    while ( 1 )
    v6 = *(uint32_t *)(this + 4 * *(uint32_t *)(this + 84) + 40);
    v7 = (*(int (__thiscall **)(int, int, int))(*(uint32_t *)v6 + 16))(v6, a2, a3);
    v8 = *(uint32_t *)(this + 84);
    v9 = *(uint32_t *)(this + 4 * v8++ + 40);
    v10 = *(uint32_t *)(v9 + 100);
    v11 = *(uint32_t *)(this + 68);
    *(uint32_t *)(this + 84) = v8;
    if ( v8 >= v11 )
    *(uint32_t *)(this + 84) = 0;
    if ( v7 )
    break;
    if ( ++v13 >= v11 )
    return 0;
    *a4 = v10;
    return 1;
}

int  IPXManagerClass::_vt21(int this)
{
    int v1; // ecx
    if ( *(uint8_t *)(this + 4) && *(uint8_t *)(this + 5) && (v1 = *(uint32_t *)(this + 76)) != 0 )
    return *(uint32_t *)(*(uint32_t *)(v1 + 4) + 56);
    else
    return 0;
}

int  IPXManagerClass::_vt09(char *this, int a2)
{
    int v3; // ecx
    int v4; // eax
    int result; // eax
    char *v6; // edx
    int v7; // esi
    if ( !*(this + 4) )
    return 0;
    if ( !*(this + 5) )
    return 0;
    v3 = *((uint32_t *)this + 17);
    if ( !v3 )
    return 0;
    if ( a2 != -1 )
    v4 = (*(int (__thiscall **)(char *, int))(*(uint32_t *)this + 24))(this, a2);
    if ( v4 != -1 )
    return *(uint32_t *)(*(uint32_t *)(*((uint32_t *)this + v4 + 10) + 4) + 40);
    return 0;
    result = 0;
    if ( v3 > 0 )
    v6 = this + 40;
    v7 = *((uint32_t *)this + 17);
    do
    if ( *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v6 + 4) + 40) > result )
    result = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v6 + 4) + 40);
    v6 += 4;
    --v7;
    while ( v7 );
    return result;
}

int  IPXManagerClass::_vt10(char *this, int a2)
{
    int v3; // ecx
    int v4; // eax
    int result; // eax
    char *v6; // edx
    int v7; // esi
    if ( !*(this + 4) )
    return 0;
    if ( !*(this + 5) )
    return 0;
    v3 = *((uint32_t *)this + 17);
    if ( !v3 )
    return 0;
    if ( a2 != -1 )
    v4 = (*(int (__thiscall **)(char *, int))(*(uint32_t *)this + 24))(this, a2);
    if ( v4 != -1 )
    return *(uint32_t *)(*(uint32_t *)(*((uint32_t *)this + v4 + 10) + 4) + 56);
    return 0;
    result = 0;
    if ( v3 > 0 )
    v6 = this + 40;
    v7 = *((uint32_t *)this + 17);
    do
    if ( *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v6 + 4) + 56) > result )
    result = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v6 + 4) + 56);
    v6 += 4;
    --v7;
    while ( v7 );
    return result;
}

unsigned int  IPXManagerClass::_vt12(uint32_t *this)
{
    unsigned int v2; // ebp
    int v3; // edi
    uint32_t *v4; // ebx
    unsigned int BridgeIndex; // eax
    int v6; // esi
    unsigned int result; // eax
    v2 = 0;
    v3 = 0;
    if ( (int)*(this + 17) > 0 )
    v4 = this + 10;
    do
    BridgeIndex = CellClass::GetBridgeIndex(*(uint32_t **)(*v4 + 4));
    if ( BridgeIndex > v2 )
    v2 = BridgeIndex;
    ++v3;
    ++v4;
    while ( v3 < *(this + 17) );
    v6 = *(this + 20);
    if ( !v6 )
    return v2;
    result = CellClass::GetBridgeIndex(*(uint32_t **)(v6 + 4));
    if ( result <= v2 )
    return v2;
    return result;
}

int  IPXManagerClass::_vt22(uint32_t *this, int a2)
{
    return CellClass::GetBridgeIndex(*(uint32_t **)(*(this + a2 + 10) + 4));
}

int  IPXManagerClass::_vt23(int *this)
{
    int v2; // ebx
    int result; // eax
    uint32_t *v4; // edi
    int *v5; // esi
    void*375 *v6; // ecx
    int *v7; // eax
    int v8; // ecx
    int v9; // eax
    unsigned int v10; // kr00_4
    signed int v11; // eax
    v2 = 0;
    result = *(this + 17);
    if ( result > 0 )
    v4 = this + 10;
    v5 = (int *)&unk_A8B5B4;
    do
    v6 = *(void*375 **)&HouseClass_Array->gap0[4 * *(uint32_t *)(*v4 + 100)];
    if ( v6 && v6 != HouseClass_Player )
    if ( !*((uint8_t *)v5 - 64) )
    CopyWideToChar((uint8_t *)v5 - 64, (char *)(*v4 + 104), -1);
    v7 = (int *)(*v4 + 76);
    v5[7] = *v7;
    v5[8] = v7[1];
    v5[9] = v7[2];
    v8 = 1000 * IPXManagerClass::init(*(uint32_t **)(*v4 + 4));
    v9 = *v5;
    if ( *v5 <= v8 / 60 )
    v9 = v8 / 60;
    *v5 = v9;
    v10 = 1000 * CellClass::GetBridgeIndex(*(uint32_t **)(*v4 + 4));
    v11 = v5[4];
    if ( (int)(v10 / 0x3C) > v11 )
    v11 = v10 / 0x3C;
    v5[4] = v11;
    v5[1] = *(uint32_t *)(*v4 + 8);
    v5[2] = *(uint32_t *)(*v4 + 12);
    v5[3] = *(uint32_t *)(*v4 + 16);
    result = *(this + 17);
    ++v2;
    ++v4;
    v5 += 26;
    while ( v2 < result );
    return result;
}

int  IPXManagerClass::_vt11(int *this, char a2)
{
    int v3; // edi
    uint32_t *v4; // ebx
    int v5; // eax
    int result; // eax
    int v7; // esi
    v3 = 0;
    if ( *(this + 17) > 0 )
    v4 = this + 10;
    do
    Rect::SetRedraw(*(uint32_t **)(*v4 + 4), a2);
    ++v3;
    ++v4;
    while ( v3 < *(this + 17) );
    v5 = *(this + 18);
    if ( v5 )
    Rect::SetRedraw(*(uint32_t **)(v5 + 4), 1);
    result = *(this + 19);
    if ( result )
    result = Rect::SetRedraw(*(uint32_t **)(result + 4), 1);
    v7 = *(this + 20);
    if ( v7 )
    return Rect::SetRedraw(*(uint32_t **)(v7 + 4), 1);
    return result;
}

int  IPXManagerClass::_vt15(uint32_t *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
    int result; // eax
    if ( a2 == -1 )
    return EventClass::SetData(*(uint32_t **)(*(this + 18) + 4), a3, a4, a5, a6, a7);
    result = *(this + a2 + 10);
    if ( result )
    return EventClass::SetData(*(uint32_t **)(result + 4), a3, a4, a5, a6, a7);
    return result;
}

char * IPXManagerClass::_vt00(char *Block, char a2)
{
    IPXManagerClass::processPacket(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

