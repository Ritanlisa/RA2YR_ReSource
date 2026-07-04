#include "binkmoviehandle.hpp"

int  BinkMovieHandle::RenderFrameClipped(int this, int a2, int a3)
{
    int *v3; // eax
    int v4; // ebp
    int v5; // esi
    int *v6; // edi
    int result; // eax
    int v8; // ebx
    int v9; // ecx
    int v10; // ebp
    int v11; // edi
    int v12; // ebx
    int v13; // edx
    int v14; // esi
    int v16; // [esp+14h] [ebp-20h]
    int v18; // [esp+20h] [ebp-14h]
    uint8_t v19[16]; // [esp+24h] [ebp-10h] BYREF
    int v20; // [esp+3Ch] [ebp+8h]
    v3 = *(int **)(this + 4);
    v4 = v3[1];
    v5 = *v3;
    v6 = (int *)(*(int (__thiscall **)(uint32_t, uint8_t *))(**(uint32_t **)(this + 12) + 120))(*(uint32_t *)(this + 12), v19);
    result = 0;
    v8 = v6[2];
    v9 = 0;
    v16 = a2;
    v18 = v4;
    if ( v8 <= 0 )
    goto LABEL_18;
    v20 = v6[3];
    if ( v20 <= 0 || v5 <= 0 || v4 <= 0 )
    goto LABEL_18;
    v10 = *v6;
    if ( a2 < *v6 )
    v16 = *v6;
    v5 = a2 + v5 - v10;
    if ( v5 < 1 )
    goto LABEL_18;
    v11 = v6[1];
    if ( a3 < v11 )
    v18 += a3 - v11;
    a3 = v11;
    if ( v18 < 1 )
    goto LABEL_18;
    if ( v5 + v16 > v8 + v10 )
    v5 = v8 + v10 - v16;
    if ( v5 < 1 )
    goto LABEL_18;
    v12 = v18;
    if ( v18 + a3 > v20 + v11 )
    v12 = v20 + v11 - a3;
    if ( v12 < 1 )
    LABEL_18:
    v13 = 0;
    v14 = 0;
    else
    result = v16;
    v9 = a3;
    v13 = v5;
    v14 = v12;
    *(uint32_t *)(this + 16) = result;
    *(uint32_t *)(this + 20) = v9;
    *(uint32_t *)(this + 24) = v13;
    *(uint32_t *)(this + 28) = v14;
    return result;
}

uint32_t * BinkMovieHandle::CopyFrameToSurface(int *this)
{
    int v2; // edi
    int v3; // ebx
    int v4; // ebp
    int v5; // eax
    int v6; // ebp
    int v7; // ebx
    int v8; // eax
    int v10; // [esp+10h] [ebp-18h]
    int v11; // [esp+10h] [ebp-18h]
    int v12; // [esp+14h] [ebp-14h]
    int v13; // [esp+14h] [ebp-14h]
    struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF
    v2 = *(this + 3);
    if ( v2 == DSurface_Primary )
    GetClientRect(g_hWnd, &Rect);
    ClientToScreen(g_hWnd, (LPPOINT)&Rect);
    v3 = Rect.left + *(this + 4);
    v4 = Rect.top + *(this + 5);
    v2 = *(this + 3);
    BinkMovie::AdjustSurfaceFormat(this, v2);
    v12 = (*(int (__thiscall **)(int, uint32_t, uint32_t))(*(uint32_t *)v2 + 92))(v2, 0, 0);
    if ( v12 )
    v10 = (*(int (__thiscall **)(int))(*(uint32_t *)v2 + 116))(v2);
    v5 = (*(int (__thiscall **)(int))(*(uint32_t *)v2 + 128))(v2);
    BinkCopyToBuffer(*(this + 1), v12, v10, v5, v3, v4, *(this + 2) | 0x80000000);
    LABEL_6:
    (*(void (__thiscall **)(int))(*(uint32_t *)v2 + 96))(v2);
    else
    v6 = *(this + 5);
    v13 = *(this + 4);
    BinkMovie::AdjustSurfaceFormat(this, *(this + 3));
    v7 = (*(int (__thiscall **)(int, uint32_t, uint32_t))(*(uint32_t *)v2 + 92))(v2, 0, 0);
    if ( v7 )
    v11 = (*(int (__thiscall **)(int))(*(uint32_t *)v2 + 116))(v2);
    v8 = (*(int (__thiscall **)(int))(*(uint32_t *)v2 + 128))(v2);
    BinkCopyToBuffer(*(this + 1), v7, v11, v8, v13, v6, *(this + 2) | 0x80000000);
    goto LABEL_6;
    return BinkMovie::BlitToTarget(this, v2);
}

int  BinkMovieHandle::_vt03(uint32_t **this, unsigned __int8 a2)
{
    return BinkMovie::Pause(*(this + 4), a2);
}

int  BinkMovieHandle::_vt04(uint8_t **this)
{
    int result; // eax
    dword_ABF3F8 = (int)this;
    result = BinkMovie::Play(*(this + 4));
    dword_ABF3F8 = 0;
    return result;
}

bool  BinkMovieHandle::_vt01(int **this)
{
    return BinkMovie::RenderFrameToSurface(*(this + 4));
}

int  BinkMovieHandle::_vt02(uint32_t *this)
{
    int v1; // esi
    int result; // eax
    v1 = *(this + 4);
    result = BinkWait(*(uint32_t *)(v1 + 4));
    if ( !result )
    *(uint8_t *)(v1 + 45) = 1;
    return result;
}

int  BinkMovieHandle::_vt06(int *this, int a2, int a3)
{
    return BinkMovieHandle::RenderFrameClipped(*(this + 4), a2, a3);
}

int  BinkMovieHandle::_vt08(uint32_t **this, int a2)
{
    return COMStub_432C10(*(this + 4), a2);
}

unsigned int  BinkMovieHandle::_vt09(uint32_t *this)
{
    return 0x3E8
    / (unsigned int)(*(uint32_t *)(*(uint32_t *)(*(this + 4) + 4) + 20) / *(uint32_t *)(*(uint32_t *)(*(this + 4) + 4) + 24));
}

uint32_t * BinkMovieHandle::_vt10(int **this)
{
    return BinkMovieHandle::CopyFrameToSurface(*(this + 4));
}

uint32_t * BinkMovieHandle::_vt00(uint32_t *Block, char a2)
{
    void *v3; // edi
    v3 = (void *)*(Block + 4);
    *Block = &BinkMovieHandle::`vftable';
    if ( v3 )
    BinkMovie::Stop((int)v3);
    __3_YAXPAX_Z(v3);
    *Block = &MovieHandle::`vftable';
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

