#include "delegate.hpp"

int  Delegate::sub_42DDB0(uint32_t *this, char *Src, int a3)
{
    char *v3; // ebp
    int v5; // esi
    uint8_t *v6; // ebx
    int v7; // ecx
    size_t v8; // ecx
    int v9; // eax
    int v10; // eax
    unsigned __int8 *v12; // [esp+8h] [ebp-Ch]
    int v13; // [esp+Ch] [ebp-8h]
    size_t Size; // [esp+10h] [ebp-4h]
    int Srca; // [esp+18h] [ebp+4h]
    v3 = Src;
    if ( !Src || a3 < 1 )
    return Delegate::Dispatch(this, (int)Src, a3);
    v13 = 0;
    if ( *(this + 3) )
    v5 = 4;
    v12 = (unsigned __int8 *)(this + 5);
    v6 = this + 6;
    Srca = 3;
    else
    v5 = 3;
    v12 = (unsigned __int8 *)(this + 6);
    v6 = this + 5;
    Srca = 4;
    v7 = *(this + 4);
    if ( v7 > 0 )
    Size = a3;
    if ( a3 >= v5 - v7 )
    Size = v5 - v7;
    memcpy(&v12[*(this + 4)], v3, Size);
    v8 = Size + *(this + 4);
    v3 += Size;
    *(this + 4) = v8;
    a3 -= Size;
    if ( v8 == v5 )
    if ( *(this + 3) )
    v9 = DecodeBitmapRGB(v12, v5, v6, Srca);
    else
    v9 = EncodeBitmapRGB((char *)v12, v5, v6, Srca);
    v13 = Delegate::Dispatch(this, (int)v6, v9);
    *(this + 4) = 0;
    for ( ; a3 >= v5; a3 -= v5 )
    if ( *(this + 3) )
    v10 = DecodeBitmapRGB((unsigned __int8 *)v3, v5, v6, Srca);
    else
    v10 = EncodeBitmapRGB(v3, v5, v6, Srca);
    v3 += v5;
    v13 += Delegate::Dispatch(this, (int)v6, v10);
    if ( a3 > 0 )
    memcpy(v12, v3, a3);
    *(this + 4) = a3;
    return v13;
}

int  Delegate::ProcessBitmapAndDispatch(int this)
{
    int v2; // edi
    int v3; // edx
    int v4; // edi
    int v5; // eax
    v2 = 0;
    v3 = *(uint32_t *)(this + 16);
    if ( v3 )
    if ( *(uint32_t *)(this + 12) )
    v4 = this + 24;
    v5 = DecodeBitmapRGB((unsigned __int8 *)(this + 20), v3, (uint8_t *)(this + 24), 3);
    else
    v4 = this + 20;
    v5 = EncodeBitmapRGB((char *)(this + 24), v3, (uint8_t *)(this + 20), 4);
    v2 = Delegate::Dispatch((uint32_t *)this, v4, v5);
    *(uint32_t *)(this + 16) = 0;
    return v2 + GameClass::GetRelatedObject((uint32_t *)this);
}

int  Delegate::StreamToBuffer(int *this, char *a2, int a3)
{
    int result; // eax
    char *v5; // ebp
    int v6; // ebx
    signed int v7; // edi
    int v8; // ecx
    int v9; // eax
    int v10; // [esp+10h] [ebp-4h]
    result = 0;
    v10 = 0;
    if ( *(this + 3) )
    v5 = a2;
    if ( a2 )
    v6 = a3;
    if ( a3 > 0 )
    do
    v7 = *(this + 7);
    if ( v7 > 0 )
    if ( v7 >= v6 )
    v7 = v6;
    memcpy(v5, (const void *)(*(this + 3) + *(this + 6)), v7);
    v8 = *(this + 7) - v7;
    v6 -= v7;
    *(this + 6) += v7;
    v10 += v7;
    *(this + 7) = v8;
    v5 += v7;
    if ( !v6 )
    break;
    v9 = Delegate::Invoke(this, *(this + 3), *(this + 4));
    *(this + 7) = v9;
    *(this + 6) = 0;
    if ( !v9 )
    break;
    while ( v6 > 0 );
    return v10;
    return result;
}

uint32_t * Delegate::sub_52AE20(uint32_t *Block, char a2)
{
    int v3; // ecx
    int v4; // eax
    *Block = &GenericNode::`vftable';
    if ( Block )
    v3 = *(Block + 1);
    if ( v3 )
    v4 = *(Block + 2);
    if ( v4 )
    *(uint32_t *)(v4 + 4) = v3;
    *(uint32_t *)(*(Block + 1) + 8) = *(Block + 2);
    *(Block + 2) = 0;
    *(Block + 1) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int * Delegate::sub_52AE70(int *Block, char a2)
{
    Vector::Clear((int)(Block + 3));
    Straw::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int * Delegate::sub_52AEA0(int *Block, char a2)
{
    Straw::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int * Delegate::sub_52AEE0(int *Block, char a2)
{
    Pipe::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

// 0x006C95E0
uint32_t * Delegate::GetField(uint32_t *this)
{
    *this = 0;
    *(this + 1) = 0;
    *(this + 2) = 0;
    *(this + 3) = 0;
    return this;
}

