#include "stream.hpp"

int  Stream::FlushAndReset(uint32_t *this)
{
    uint32_t *v1; // esi
    int v2; // eax
    int v3; // edi
    int v4; // eax
    int v5; // edi
    v1 = this;
    v2 = *this;
    v3 = *(this + 2);
    *(this + 12) = 45;
    (*(void (**)(void))(v2 + 12))();
    (*(void (__thiscall **)(uint32_t *, int, uint32_t))(*v1 + 8))(v1, v3, 0);
    v4 = v1[6];
    v5 = v1[8];
    v1 += 6;
    (*(void (__thiscall **)(uint32_t *))(v4 + 12))(v1);
    return (*(int (__thiscall **)(uint32_t *, int, uint32_t))(*v1 + 8))(v1, v5, 0);
}

int  Stream::GetField(uint32_t *this)
{
    int (__thiscall ***v1)(uint32_t, int); // ecx
    int result; // eax
    v1 = (int (__thiscall ***)(uint32_t, int))*(this + 5);
    if ( v1 )
    return (**v1)(v1, 1);
    return result;
}

