#include "msframeanim.hpp"

char __stdcall MSFrameAnim::_vt04(int a1, int *a2)
{
    if ( byte_8487BC )
    RenderScoreScreen(a1, a2, 1);
    return 0;
}

void __stdcall MSFrameAnim::_vt05(int a1, int *a2)
{
    int v2; // edi
    int v3; // eax
    int v4; // edx
    int v5; // eax
    int v6; // ecx
    int v7; // [esp+8h] [ebp-10h] BYREF
    int v8; // [esp+Ch] [ebp-Ch]
    int v9; // [esp+10h] [ebp-8h]
    int v10; // [esp+14h] [ebp-4h]
    if ( byte_8487BD )
    v2 = (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 124))(a1);
    v3 = (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 128))(a1);
    if ( a2 )
    v4 = a2[1];
    v7 = *a2;
    v5 = a2[2];
    v6 = a2[3];
    v8 = v4;
    v10 = v6;
    v9 = v5;
    else
    v7 = 0;
    v8 = 0;
    v9 = v2;
    v10 = v3;
    RenderScoreScreen(a1, &v7, 1);
}

uint32_t *__stdcall MSFrameAnim::_vt06(uint32_t *a1)
{
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 640;
    a1[3] = 480;
    return a1;
}

uint32_t * MSFrameAnim::_vt00(uint32_t *Block, char a2)
{
    *Block = &MSFrameAnim::`vftable';
    VtableStub::5CB6C0(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  MSFrameAnim::sub_769C50(int this)
{
    int (__thiscall ***v2)(uint32_t, int); // ecx
    int result; // eax
    v2 = *(int (__thiscall ****)(uint32_t, int))(this + 4);
    *(uint32_t *)(this + 16) = 0;
    if ( v2 && *(uint8_t *)(this + 13) )
    result = (**v2)(v2, 3);
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
    return result;
}

unsigned int  MSFrameAnim::sub_769C80(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 3;
    else
    return 0;
}

void  MSFrameAnim::sub_769CD0(int this)
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

unsigned int  MSFrameAnim::sub_769D00(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

uint32_t * MSFrameAnim::sub_769D90(uint32_t *Block, char a2)
{
    *Block = &rc_ptr<WorldDominationTour::Map>::`vftable';
    ComPtr::Release(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

char  MSFrameAnim::sub_769FE0(uint8_t *this, int a2, uint32_t *a3)
{
    int v3; // ebp
    uint32_t *v5; // eax
    uint32_t *v6; // ebx
    uint32_t *v7; // esi
    uint32_t *v8; // esi
    int v9; // ebx
    int i; // esi
    void (__thiscall ***v11)(uint32_t, int); // ecx
    int v12; // eax
    int v14; // [esp+10h] [ebp-4h]
    v3 = a2;
    if ( a2 )
    *(this + 12) = 0;
    if ( a3 )
    *a3 = a2;
    v8 = a3 + 1;
    if ( a2 - 1 >= 0 )
    v9 = a2;
    do
    ComPtr::Constructor(v8);
    *v8 = &rc_ptr<WorldDominationTour::Territory>::`vftable';
    v8 += 2;
    --v9;
    while ( v9 );
    v8 = a3 + 1;
    v6 = v8;
    else
    v5 = __2_YAPAXI_Z(8 * a2 + 4);
    if ( v5 )
    *v5 = a2;
    v6 = v5 + 1;
    v7 = v5 + 1;
    if ( a2 - 1 >= 0 )
    v14 = a2;
    do
    MSFrameAnim::drawFrame(v7);
    v7 += 2;
    --v14;
    while ( v14 );
    else
    v6 = 0;
    *(this + 12) = 1;
    if ( !v6 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    if ( a2 >= *((uint32_t *)this + 2) )
    v3 = *((uint32_t *)this + 2);
    for ( i = 0; i < v3; ++i )
    ComPtr::Set(&v6[2 * i], *(uint32_t *)(*((uint32_t *)this + 1) + 8 * i + 4));
    if ( *(this + 13) )
    v11 = (void (__thiscall ***)(uint32_t, int))*((uint32_t *)this + 1);
    if ( v11 )
    (**v11)(v11, 3);
    *((uint32_t *)this + 1) = 0;
    v3 = a2;
    *((uint32_t *)this + 1) = v6;
    *((uint32_t *)this + 2) = v3;
    *(this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)this + 12))(this);
    v12 = *((uint32_t *)this + 2);
    if ( v12 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v12;
    return 1;
}

int  MSFrameAnim::sub_76A100(int *this, int a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)(*(this + 1) + 4); *i != *(uint32_t *)(a2 + 4); i += 2 )
    if ( ++result >= v2 )
    return -1;
    return result;
}

char  MSFrameAnim::sub_76A2B0(void *this, int a2, uint32_t *a3)
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

int  MSFrameAnim::sub_76A360(int *this, uint32_t *a2)
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

uint32_t * MSFrameAnim::sub_76A680(uint32_t *Block, char a2)
{
    void (__thiscall ***v3)(uint32_t, int); // ecx
    v3 = (void (__thiscall ***)(uint32_t, int))*(Block + 1);
    *Block = &VectorClass<rc_ptr<WorldDominationTour::Territory>>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    (**v3)(v3, 3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * MSFrameAnim::sub_76A720(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<WorldDominationTour::Map::AnimationPalette *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

