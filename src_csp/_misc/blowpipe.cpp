#include "blowpipe.hpp"

// 0x00438000
int  BlowPipe::Draw(uint32_t *this, int a2, int a3, int a4)
{
    if ( !*this )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t, int, int, int))(*(uint32_t *)*this + 24))(*this, a3, a2, a4);
    return a3;
}

// 0x00438030
int  BlowPipe::DrawAlt(uint32_t *this, int a2, int a3, int a4)
{
    if ( !*this )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t, int, int, int))(*(uint32_t *)*this + 28))(*this, a3, a2, a4);
    return a3;
}

int  BlowPipe::_vt01(int *this)
{
    int v2; // edi
    int v3; // eax
    v2 = 0;
    v3 = *(this + 6);
    if ( v3 > 0 && *(this + 3) )
    v2 = Delegate::Dispatch(this, (int)(this + 4), v3);
    *(this + 6) = 0;
    return v2 + GameClass::GetRelatedObject(this);
}

char * BlowPipe::_vt04(uint32_t *this, char *Src, signed int Size)
{
    char *v3; // ebx
    size_t v4; // ebp
    int v6; // eax
    size_t v7; // edi
    size_t v8; // edx
    uint32_t *v9; // ecx
    size_t v10; // ebp
    uint32_t *v11; // ecx
    int v13; // [esp-10h] [ebp-1Ch]
    int v14; // [esp-8h] [ebp-14h]
    int v15; // [esp-8h] [ebp-14h]
    char *Srca; // [esp+10h] [ebp+4h]
    size_t Sizea; // [esp+14h] [ebp+8h]
    v3 = Src;
    v4 = Size;
    if ( !Src || Size < 1 || !*(this + 3) )
    return (char *)Delegate::Dispatch(this, (int)Src, Size);
    v6 = *(this + 6);
    Srca = 0;
    if ( v6 )
    v7 = 8 - v6;
    if ( 8 - v6 >= Size )
    v7 = Size;
    memcpy((char *)this + *(this + 6) + 16, v3, v7);
    v8 = v7 + *(this + 6);
    v3 += v7;
    v4 = Size - v7;
    *(this + 6) = v8;
    Size -= v7;
    if ( v8 == 8 )
    v9 = (uint32_t *)*(this + 3);
    v14 = (int)(this + 4);
    v13 = (int)(this + 4);
    if ( *(this + 7) == 1 )
    BlowPipe::DrawAlt(v9, v13, 8, v14);
    else
    BlowPipe::Draw(v9, v13, 8, v14);
    Srca = (char *)Delegate::Dispatch(this, (int)(this + 4), 8);
    *(this + 6) = 0;
    if ( v4 >= 8 )
    v10 = v4 >> 3;
    Sizea = Size - 8 * v10;
    do
    v11 = (uint32_t *)*(this + 3);
    v15 = (int)(this + 4);
    if ( *(this + 7) == 1 )
    BlowPipe::DrawAlt(v11, (int)v3, 8, v15);
    else
    BlowPipe::Draw(v11, (int)v3, 8, v15);
    v3 += 8;
    --v10;
    Srca += Delegate::Dispatch(this, (int)(this + 4), 8);
    while ( v10 );
    v4 = Sizea;
    if ( (int)v4 > 0 )
    memcpy(this + 4, v3, v4);
    *(this + 6) = v4;
    return Srca;
}

uint32_t * BlowPipe::_vt00(uint32_t *Block, char a2)
{
    int *v3; // edi
    v3 = (int *)*(Block + 3);
    *Block = &BlowPipe::`vftable';
    if ( v3 )
    COMObject::Release(v3);
    __3_YAXPAX_Z(v3);
    *(Block + 3) = 0;
    Pipe::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

