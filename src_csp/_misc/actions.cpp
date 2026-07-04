#include "actions.hpp"

int  Actions::Reset(int this, int *a2, uint32_t *a3)
{
    int v4; // ecx
    uint32_t *v5; // ebx
    int v6; // edi
    signed int v7; // eax
    char v8; // cl
    int v9; // eax
    int v10; // edx
    int v11; // edi
    int v12; // ebp
    int v13; // ebx
    int v14; // edi
    int v15; // ecx
    int v16; // eax
    int v18; // [esp+Ch] [ebp-10h]
    int v19; // [esp+10h] [ebp-Ch] BYREF
    int v20; // [esp+14h] [ebp-8h]
    v4 = 7 * *(uint32_t *)(this + 21856);
    v5 = (uint32_t *)(4 * v4 + 8572968);
    if ( !dword_82D030[v4] )
    return ScrollClass::Scroll((int *)this, a2, a3);
    v6 = dword_ABF2A8;
    if ( dword_ABF2A0 == -1 )
    goto LABEL_5;
    v7 = Timer::GetTicks() - dword_ABF2A0;
    if ( v7 < v6 )
    v6 -= v7;
    LABEL_5:
    if ( v6 )
    return ScrollClass::Scroll((int *)this, a2, a3);
    v8 = *(uint8_t *)(this + 21852);
    v9 = *(uint32_t *)(this + 21864) + 1;
    *(uint32_t *)(this + 21864) = v9;
    if ( v8 )
    v10 = v9 % v5[4];
    else
    v10 = v9 % v5[1];
    *(uint32_t *)(this + 21864) = v10;
    v11 = v5[2];
    dword_ABF2A0 = Timer::GetTicks();
    dword_ABF2A4 = v20;
    dword_ABF2A8 = v11;
    if ( !*(uint8_t *)(this + 21852) || dword_82D034[7 * *(uint32_t *)(this + 21856)] == -1 )
    v18 = MouseClass_Cursors[7 * *(uint32_t *)(this + 21856)];
    else
    v18 = dword_82D034[7 * *(uint32_t *)(this + 21856)];
    v12 = dword_82D03C[7 * *(uint32_t *)(this + 21856)];
    v13 = 0;
    v14 = 0;
    if ( v12 == 12345 )
    v13 = *((__int16 *)dword_ABF294 + 1) / 2;
    if ( v12 == 54321 )
    v13 = *((__int16 *)dword_ABF294 + 1);
    v15 = dword_82D040[7 * *(uint32_t *)(this + 21856)];
    if ( v15 == 12345 )
    v14 = *((__int16 *)dword_ABF294 + 2) / 2;
    if ( v15 == 54321 )
    v14 = *((__int16 *)dword_ABF294 + 2);
    v16 = *(uint32_t *)(this + 21864);
    v19 = v13;
    v20 = v14;
    (*(void (__thiscall **)(int, int *, void *, int))(*(uint32_t *)WWMouseClass_Instance + 4))(
    WWMouseClass_Instance,
    &v19,
    dword_ABF294,
    v18 + v16);
    return ScrollClass::Scroll((int *)this, a2, a3);
}

