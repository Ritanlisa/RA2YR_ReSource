#include "gameclass.hpp"

int * GameClass::sub_4AECA0(int *Block, char a2)
{
    Vector::Clear((int)(Block + 3));
    Pipe::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  GameClass::sub_632DC0(int this, char *Src, int a3)
{
    char *v3; // ebx
    int v5; // ebp
    int v6; // ecx
    int v7; // eax
    int v8; // eax
    signed int v9; // edi
    bool v10; // zf
    char v12[256]; // [esp+8h] [ebp-100h] BYREF
    v3 = Src;
    if ( Src && a3 >= 1 && *(uint32_t *)(this + 56) )
    v5 = 0;
    if ( *(uint8_t *)(this + 12) )
    if ( *(uint32_t *)(this + 52) )
    v9 = *(uint32_t *)(this + 320);
    if ( v9 >= a3 )
    v9 = a3;
    memcpy((void *)(*(uint32_t *)(this + 316) - *(uint32_t *)(this + 320) + this + 60), Src, v9);
    v3 = &Src[v9];
    v10 = *(uint32_t *)(this + 320) == v9;
    a3 -= v9;
    *(uint32_t *)(this + 320) -= v9;
    if ( !v10 )
    return v5 + Delegate::Dispatch((uint32_t *)this, (int)v3, a3);
    BigInt::RSAOperation(*(uint32_t *)(this + 56), (char *)(this + 60), *(uint32_t *)(this + 316), v12);
    GameClass::processFrame((uint32_t *)(this + 20), (int)v12, 56);
    else
    memset(v12, 0, sizeof(v12));
    (*(void (__thiscall **)(uint32_t, char *, int))(**(uint32_t **)(this + 16) + 8))(*(uint32_t *)(this + 16), v12, 56);
    v6 = *(uint32_t *)(this + 56);
    if ( v6 )
    v7 = (*(uint32_t *)(v6 + 512) - 1) / 8 * (55 / ((*(uint32_t *)(v6 + 512) - 1) / 8) + 1);
    else
    v7 = 0;
    v8 = BigInt::DecryptBlock(v6, v12, v7, (char *)(this + 60));
    v5 = Delegate::Dispatch((uint32_t *)this, this + 60, v8);
    GameClass::processFrame((uint32_t *)(this + 20), (int)v12, 56);
    *(uint8_t *)(this + 12) = 0;
    return v5 + Delegate::Dispatch((uint32_t *)this, (int)v3, a3);
    return Delegate::Dispatch((uint32_t *)this, (int)Src, a3);
}

int  GameClass::sub_632FE0(void *this, int a2)
{
    return (*(int (__thiscall **)(void *, int))(*(uint32_t *)this + 12))(this, a2);
}

uint32_t * GameClass::sub_632FF0(uint32_t *Block, char a2)
{
    int *v3; // ebx
    int *v4; // esi
    v3 = (int *)*(Block + 8);
    v4 = Block + 5;
    *(Block + 5) = &BlowPipe::`vftable';
    if ( v3 )
    COMObject::Release(v3);
    __3_YAXPAX_Z(v3);
    v4[3] = 0;
    Pipe::Dtor(v4);
    Pipe::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

void  GameClass::sub_6330C0(uint32_t *this, int a2)
{
    int v3; // ecx
    int v4; // eax
    if ( *(this + 6) != a2 )
    if ( a2 )
    v3 = *(uint32_t *)(a2 + 8);
    if ( v3 )
    (*(void (__thiscall **)(int, uint32_t))(*(uint32_t *)v3 + 4))(v3, 0);
    *(uint32_t *)(a2 + 8) = 0;
    v4 = *(this + 6);
    if ( v4 )
    *(uint32_t *)(v4 + 8) = 0;
    *(this + 6) = a2;
    *(this + 7) = this;
    *(this + 1) = this + 5;
    if ( a2 )
    *(uint32_t *)(a2 + 8) = this;
}

int  GameClass::sub_633130(int this, char *a2, signed int Size)
{
    char *v3; // ebp
    signed int v4; // edi
    int v6; // eax
    int v7; // eax
    int v8; // ecx
    int v9; // ebx
    int v10; // eax
    int v12; // ecx
    int v13; // eax
    int v14; // eax
    int v15; // eax
    signed int v16; // [esp+10h] [ebp-104h]
    char Src[256]; // [esp+14h] [ebp-100h] BYREF
    v3 = a2;
    v4 = Size;
    if ( !a2 )
    return Delegate::Invoke((uint32_t *)this, (int)a2, Size);
    if ( Size < 1 )
    return Delegate::Invoke((uint32_t *)this, (int)a2, Size);
    v6 = *(uint32_t *)(this + 56);
    if ( !v6 )
    return Delegate::Invoke((uint32_t *)this, (int)a2, Size);
    v16 = 0;
    if ( *(uint8_t *)(this + 12) )
    if ( *(uint32_t *)(this + 52) == 1 )
    v7 = Delegate::Invoke(
    (uint32_t *)this,
    (int)Src,
    ((*(uint32_t *)(v6 + 512) - 1) / 8 + 1) * (55 / ((*(uint32_t *)(v6 + 512) - 1) / 8) + 1));
    v8 = *(uint32_t *)(this + 56);
    v9 = v7;
    if ( v8 )
    v10 = ((*(uint32_t *)(v8 + 512) - 1) / 8 + 1) * (55 / ((*(uint32_t *)(v8 + 512) - 1) / 8) + 1);
    else
    v10 = 0;
    if ( v9 != v10 )
    return 0;
    BigInt::RSAOperation(v8, Src, v9, (char *)(this + 60));
    GameClass::updateUI((uint32_t *)(this + 20), this + 60, 56);
    else
    memset(Src, 0, sizeof(Src));
    (*(void (__thiscall **)(uint32_t, char *, int))(**(uint32_t **)(this + 16) + 8))(*(uint32_t *)(this + 16), Src, 56);
    v12 = *(uint32_t *)(this + 56);
    if ( v12 )
    v13 = (*(uint32_t *)(v12 + 512) - 1) / 8 * (55 / ((*(uint32_t *)(v12 + 512) - 1) / 8) + 1);
    else
    v13 = 0;
    v14 = BigInt::DecryptBlock(v12, Src, v13, (char *)(this + 60));
    *(uint32_t *)(this + 320) = v14;
    *(uint32_t *)(this + 316) = v14;
    GameClass::updateUI((uint32_t *)(this + 20), (int)Src, 56);
    v4 = Size;
    *(uint8_t *)(this + 12) = 0;
    v15 = *(uint32_t *)(this + 320);
    if ( v15 > 0 )
    if ( v4 >= v15 )
    v4 = *(uint32_t *)(this + 320);
    memcpy(a2, (const void *)(*(uint32_t *)(this + 316) - v15 + this + 60), v4);
    v3 = &a2[v4];
    v16 = v4;
    *(uint32_t *)(this + 320) -= v4;
    v4 = Size - v4;
    return v16 + Delegate::Invoke((uint32_t *)this, (int)v3, v4);
}

int  GameClass::sub_633360(void *this, int a2)
{
    return (*(int (__thiscall **)(void *, int))(*(uint32_t *)this + 4))(this, a2);
}

uint32_t * GameClass::sub_633370(uint32_t *Block, char a2)
{
    int *v3; // ebx
    int *v4; // esi
    v3 = (int *)*(Block + 8);
    v4 = Block + 5;
    *(Block + 5) = &BlowStraw::`vftable';
    if ( v3 )
    COMObject::Release(v3);
    __3_YAXPAX_Z(v3);
    v4[3] = 0;
    Straw::Dtor(v4);
    Straw::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  GameClass::sub_7BA3C0(uint32_t *this, void *Src, signed int Size)
{
    int result; // eax
    int v5; // edx
    int v6; // eax
    signed int v7; // edi
    signed int v8; // eax
    result = 0;
    v5 = *(this + 3);
    if ( v5 && Src && Size > 0 )
    v6 = *(this + 4);
    v7 = Size;
    if ( v6 )
    v8 = v6 - *(this + 6);
    v7 = Size;
    if ( Size >= v8 )
    v7 = v8;
    if ( v7 > 0 )
    memcpy((void *)(v5 + *(this + 6)), Src, v7);
    *(this + 6) += v7;
    return v7;
    return result;
}

