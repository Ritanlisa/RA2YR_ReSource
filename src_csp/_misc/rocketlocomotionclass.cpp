#include "rocketlocomotionclass.hpp"

int  RocketLocomotionClass::RocketLocomotionClass(int this)
{
    wchar_t *v2; // ecx
    LocomotionClass::Init((uint32_t *)this);
    *(uint32_t *)(this + 24) = dword_B04E38;
    *(uint32_t *)(this + 28) = dword_B04E3C;
    *(uint32_t *)(this + 32) = dword_B04E40;
    *(uint32_t *)(this + 36) = CurrentFrame;
    *(uint32_t *)(this + 44) = 0;
    *(uint32_t *)(this + 48) = 0;
    v2 = CurrentFrame;
    *(uint32_t *)(this + 60) = 0;
    *(uint32_t *)(this + 52) = v2;
    *(uint32_t *)(this + 72) = 0;
    *(uint32_t *)(this + 64) = 0;
    *(uint32_t *)(this + 76) = 0;
    *(uint8_t *)(this + 81) = 0;
    *(uint32_t *)(this + 84) = 0;
    *(uint32_t *)(this + 88) = 0;
    *(uint8_t *)(this + 80) = 1;
    *(uint32_t *)this = &RocketLocomotionClass::`vftable';
    *(uint32_t *)(this + 4) = &RocketLocomotionClass::`vftable';
    return this;
}

int __stdcall RocketLocomotionClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = -1212901530;
    a2[1] = 299099510;
    a2[2] = 268491163;
    a2[3] = -399534261;
    return 0;
}

int __stdcall RocketLocomotionClass::_vt05(int *a1, int *a2)
{
    int result; // eax
    wchar_t *v3; // ecx
    result = SwizzleManager::SaveLoad(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    *a1 = (int)&LocomotionClass::`vftable';
    a1[1] = (int)&LocomotionClass::`vftable';
    v3 = CurrentFrame;
    a1[15] = 0;
    a1[13] = (int)v3;
    *a1 = (int)&RocketLocomotionClass::`vftable';
    a1[1] = (int)&RocketLocomotionClass::`vftable';
    return result;
}

int RocketLocomotionClass::_vt09()
{
    return 96;
}

uint32_t * RocketLocomotionClass::_vt08(uint32_t *Block, char a2)
{
    *Block = &RocketLocomotionClass::`vftable';
    *(Block + 1) = &RocketLocomotionClass::`vftable';
    LocomotionClass::Construct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

