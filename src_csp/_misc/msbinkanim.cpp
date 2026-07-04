#include "msbinkanim.hpp"

uint32_t * MSBinkAnim::_vt06(uint32_t *this, uint32_t *a2)
{
    uint32_t *v3; // ecx
    v3 = this + 9;
    *a2 = *v3;
    a2[1] = v3[1];
    a2[2] = v3[2];
    a2[3] = v3[3];
    return a2;
}

bool  MSBinkAnim::_vt04(void *this, int a2, uint32_t *a3)
{
    int v3; // ebp
    uint32_t *v6; // ecx
    uint32_t *v7; // edx
    int v8; // eax
    int i; // edi
    int v10; // ecx
    v3 = a2;
    if ( !a2 )
    return 0;
    v6 = (uint32_t *)*((uint32_t *)this + 7);
    if ( !v6 )
    return 1;
    if ( !BinkMovie::IsAtEnd(v6) && BinkMovie::RenderFrameToSurface(*((int **)this + 7)) )
    (*(void (__thiscall **)(void *, int, uint32_t))(*(uint32_t *)this + 20))(this, v3, 0);
    v7 = a3;
    a2 = (int)this;
    *a3 = *((uint32_t *)this + 9);
    v7[1] = *((uint32_t *)this + 10);
    v7[2] = *((uint32_t *)this + 11);
    v7[3] = *((uint32_t *)this + 12);
    a2 = (*(int (__thiscall **)(uint32_t, int *))(**((uint32_t **)this + 13) + 16))(*((uint32_t *)this + 13), &a2);
    v8 = *((uint32_t *)this + 13);
    for ( i = 0; i < *(uint32_t *)(v8 + 16); ++i )
    if ( i != a2 )
    v10 = *(uint32_t *)(*(uint32_t *)(v8 + 4) + 4 * i);
    (*(void (__thiscall **)(int, int, int))(*(uint32_t *)v10 + 20))(v10, v3, (int)this + 36);
    v8 = *((uint32_t *)this + 13);
    return BinkMovie::IsAtEnd(*((uint32_t **)this + 7)) && !*((uint8_t *)this + 56);
}

int  MSBinkAnim::_vt05(void *this, int a2, int a3)
{
    return (*(int (__thiscall **)(int, int, int, int, uint32_t, int))(*(uint32_t *)a2 + 8))(
    a2,
    (int)this + 36,
    DSurface_Alternate,
    (int)this + 36,
    0,
    1);
}

uint32_t * MSBinkAnim::_vt00(uint32_t *Block, char a2)
{
    void *v3; // edi
    v3 = (void *)*(Block + 7);
    *Block = &MSBinkAnim::`vftable';
    if ( v3 )
    BinkMovie::Stop((int)v3);
    __3_YAXPAX_Z(v3);
    *Block = &MSAnim::`vftable';
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

