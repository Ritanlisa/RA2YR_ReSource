#include "cstreamclass.hpp"

int __stdcall CStreamClass::_vt00(int a1, const void *a2, uint32_t *a3)
{
    int v4; // ecx
    if ( !a3 )
    return -2147467261;
    *a3 = 0;
    if ( !memcmp(a2, &IID_IUnknown, 0x10u) )
    *a3 = a1;
    if ( !memcmp(a2, &unk_7F7CF0, 0x10u) )
    *a3 = a1;
    if ( !memcmp(a2, &unk_7E9530, 0x10u) )
    if ( a1 )
    v4 = a1 + 4;
    else
    v4 = 0;
    *a3 = v4;
    if ( !*a3 )
    return -2147467262;
    (*(void (__stdcall **)(int))(*(uint32_t *)a1 + 4))(a1);
    return 0;
}

int __stdcall CStreamClass::sub_4A2A20(int a1, int (__stdcall ***a2)(uint32_t, void *, uint32_t))
{
    int v3; // ebx
    int v4; // eax
    int v5; // eax
    int (__stdcall ***v6)(uint32_t, void *, uint32_t); // edi
    if ( !a2 )
    return -2147467261;
    if ( *(uint32_t *)(a1 + 4) )
    return -2147467259;
    v3 = (**a2)(a2, &unk_81FC50, &a2);
    if ( v3 >= 0 )
    v5 = *(uint32_t *)(a1 + 4);
    v6 = a2;
    if ( v5 )
    (*(void (__stdcall **)(int))(*(uint32_t *)v5 + 8))(v5);
    *(uint32_t *)(a1 + 4) = v6;
    else
    v4 = *(uint32_t *)(a1 + 4);
    if ( v4 )
    (*(void (__stdcall **)(uint32_t))(*(uint32_t *)v4 + 8))(*(uint32_t *)(a1 + 4));
    *(uint32_t *)(a1 + 4) = 0;
    if ( v3 < 0 && v3 != -2147467262 )
    WinAPI::Wrapper(v3);
    return 0;
}

int __stdcall CStreamClass::sub_4A2AB0(int a1, uint32_t *a2)
{
    int v2; // ecx
    int result; // eax
    ULONG v4; // [esp+0h] [ebp-4h]
    v2 = a1 - 4;
    if ( *(uint8_t *)(a1 + 13) && *(int *)(v2 + 20) > 0 && *(uint32_t *)(v2 + 8) )
    IStream::Read(*(IStream **)(v2 + 24), *(void **)(v2 + 20), v4);
    if ( !*(uint32_t *)(a1 + 4) )
    return -2147467259;
    if ( a2 )
    if ( !*(uint32_t *)(a1 + 4) )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t))(**(uint32_t **)(a1 + 4) + 4))(*(uint32_t *)(a1 + 4));
    *a2 = *(uint32_t *)(a1 + 4);
    if ( !*(uint32_t *)(a1 + 4) )
    WinAPI::Wrapper(-2147467261);
    result = (*(int (__stdcall **)(uint32_t, uint32_t))(**(uint32_t **)(a1 + 4) + 32))(*(uint32_t *)(a1 + 4), 0);
    if ( result >= 0 )
    if ( !*(uint32_t *)(a1 + 4) )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t))(**(uint32_t **)(a1 + 4) + 8))(*(uint32_t *)(a1 + 4));
    *(uint32_t *)(a1 + 4) = 0;
    return 0;
    return result;
}

int __stdcall CStreamClass::_vt03(int a1, char *a2, signed int Size, signed int *a4)
{
    int v4; // ebp
    int result; // eax
    uint32_t *v6; // esi
    signed int *v7; // eax
    int v8; // eax
    size_t v9; // edi
    size_t v10; // eax
    int v11; // eax
    int *v12; // edi
    int v13; // edx
    unsigned __int8 *v14; // ecx
    uint8_t *v15; // [esp+8h] [ebp-1Ch]
    int v16; // [esp+20h] [ebp-4h] BYREF
    v4 = Size;
    if ( !a2 )
    return -2147467261;
    if ( Size < 0 )
    return -2147024809;
    v6 = (uint32_t *)a1;
    if ( !*(uint32_t *)(a1 + 8) )
    return -2147467259;
    if ( *(uint8_t *)(a1 + 17) )
    return -2147467259;
    v7 = a4;
    *(uint8_t *)(a1 + 16) = 1;
    if ( v7 )
    *v7 = 0;
    for ( ; v4 > 0; v6[5] = v6[10] )
    v8 = v6[5];
    if ( v8 > 0 )
    v9 = v4;
    if ( v4 >= v8 )
    v9 = v6[5];
    memcpy(a2, (const void *)(v6[6] + v6[10] - v8), v9);
    v4 -= v9;
    v10 = v6[5] - v9;
    a2 += v9;
    v6[5] = v10;
    if ( !v4 )
    break;
    v11 = v6[2];
    a1 = 0;
    if ( !v11 )
    WinAPI::Wrapper(-2147467261);
    v12 = v6 + 9;
    result = (*(int (__stdcall **)(uint32_t, uint32_t *, int, int *))(*(uint32_t *)v6[2] + 12))(v6[2], v6 + 9, 8, &a1);
    if ( result < 0 )
    return result;
    if ( a1 != 8 )
    return -2147467259;
    if ( !v6[2] )
    WinAPI::Wrapper(-2147467261);
    result = (*(int (__stdcall **)(uint32_t, uint32_t, int, int *))(*(uint32_t *)v6[2] + 12))(v6[2], v6[7], *v12, &a1);
    if ( result < 0 )
    return result;
    v13 = *v12;
    if ( a1 != *v12 )
    return -2147467259;
    v15 = (uint8_t *)v6[6];
    v14 = (unsigned __int8 *)v6[7];
    v16 = 0x10000;
    DecodeBlockLCW(v14, v13, v15, &v16, 0);
    if ( a4 )
    *a4 = Size;
    return 0;
}

int __stdcall CStreamClass::_vt05(int a1, int a2, int a3, int a4, int a5)
{
    if ( *(uint8_t *)(a1 + 16) || *(uint8_t *)(a1 + 17) )
    return -2147467259;
    if ( !*(uint32_t *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(uint32_t, int, int, int, int))(**(uint32_t **)(a1 + 8) + 20))(
    *(uint32_t *)(a1 + 8),
    a2,
    a3,
    a4,
    a5);
}

int __stdcall CStreamClass::_vt06(int a1, int a2, int a3)
{
    if ( *(uint8_t *)(a1 + 16) || *(uint8_t *)(a1 + 17) )
    return -2147467259;
    if ( !*(uint32_t *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(uint32_t, int, int))(**(uint32_t **)(a1 + 8) + 24))(*(uint32_t *)(a1 + 8), a2, a3);
}

int __stdcall CStreamClass::_vt07(int a1, int a2, int a3, int a4, int a5, int a6)
{
    if ( !*(uint32_t *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(uint32_t, int, int, int, int, int))(**(uint32_t **)(a1 + 8) + 28))(
    *(uint32_t *)(a1 + 8),
    a2,
    a3,
    a4,
    a5,
    a6);
}

int __stdcall CStreamClass::_vt08(int a1, int a2)
{
    if ( !*(uint32_t *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(uint32_t, int))(**(uint32_t **)(a1 + 8) + 32))(*(uint32_t *)(a1 + 8), a2);
}

int __stdcall CStreamClass::_vt09(int a1)
{
    if ( !*(uint32_t *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(uint32_t))(**(uint32_t **)(a1 + 8) + 36))(*(uint32_t *)(a1 + 8));
}

int __stdcall CStreamClass::_vt10(int a1, int a2, int a3, int a4, int a5, int a6)
{
    if ( !*(uint32_t *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(uint32_t, int, int, int, int, int))(**(uint32_t **)(a1 + 8) + 40))(
    *(uint32_t *)(a1 + 8),
    a2,
    a3,
    a4,
    a5,
    a6);
}

int __stdcall CStreamClass::_vt11(int a1, int a2, int a3, int a4, int a5, int a6)
{
    if ( !*(uint32_t *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(uint32_t, int, int, int, int, int))(**(uint32_t **)(a1 + 8) + 44))(
    *(uint32_t *)(a1 + 8),
    a2,
    a3,
    a4,
    a5,
    a6);
}

int __stdcall CStreamClass::_vt12(int a1, int a2, int a3)
{
    if ( !*(uint32_t *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(uint32_t, int, int))(**(uint32_t **)(a1 + 8) + 48))(*(uint32_t *)(a1 + 8), a2, a3);
}

int __stdcall CStreamClass::_vt13(int a1, int a2)
{
    if ( !*(uint32_t *)(a1 + 8) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(uint32_t, int))(**(uint32_t **)(a1 + 8) + 52))(*(uint32_t *)(a1 + 8), a2);
}

void *__userpurge CStreamClass::_vt14@<eax>(void *Block@<ecx>, ULONG a2@<edi>, char a3)
{
    int v4; // eax
    void *v5; // ecx
    void *v6; // edx
    int v7; // eax
    v4 = *((uint32_t *)Block + 2);
    *(uint32_t *)Block = &CStreamClass::`vftable';
    *((uint32_t *)Block + 1) = &CStreamClass::`vftable';
    if ( v4 )
    if ( *((uint8_t *)Block + 17)
    && *((int *)Block + 5) > 0
    && !CStreamClass::IsEmpty((uint32_t *)Block + 2, 0)
    && *((int *)Block + 5) > 0 )
    IStream::Read(*((IStream **)Block + 6), *((void **)Block + 5), a2);
    if ( *((uint32_t *)Block + 2)
    && (*(int (__stdcall **)(uint32_t, uint32_t))(**((uint32_t **)Block + 2) + 32))(*((uint32_t *)Block + 2), 0) >= 0 )
    if ( !*((uint32_t *)Block + 2) )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t))(**((uint32_t **)Block + 2) + 8))(*((uint32_t *)Block + 2));
    *((uint32_t *)Block + 2) = 0;
    __3_YAXPAX_Z(*((void **)Block + 8));
    v5 = (void *)*((uint32_t *)Block + 6);
    *((uint32_t *)Block + 8) = 0;
    __3_YAXPAX_Z(v5);
    v6 = (void *)*((uint32_t *)Block + 7);
    *((uint32_t *)Block + 6) = 0;
    __3_YAXPAX_Z(v6);
    *((uint32_t *)Block + 7) = 0;
    v7 = *((uint32_t *)Block + 2);
    if ( v7 )
    (*(void (__stdcall **)(uint32_t))(*(uint32_t *)v7 + 8))(*((uint32_t *)Block + 2));
    if ( (a3 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int __stdcall CStreamClass::sub_4A3220(int a1, const void *a2, uint32_t *a3)
{
    return CStreamClass::QueryInterface(a1 - 4, a2, a3);
}

void  CStreamClass::sub_4A4AD0(int this)
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

unsigned int  CStreamClass::sub_4A4B00(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  CStreamClass::sub_4A4CB0(void *this, int a2, uint32_t *a3)
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

int  CStreamClass::sub_4A4D60(int *this, uint32_t *a2)
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

uint32_t * CStreamClass::sub_4A4DE0(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<_DDSURFACEDESC *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

