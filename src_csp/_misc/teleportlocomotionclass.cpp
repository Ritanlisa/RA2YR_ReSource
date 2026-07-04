#include "teleportlocomotionclass.hpp"

int  TeleportLocomotionClass::TeleportLocomotionClass(int this)
{
    wchar_t *v2; // ecx
    LocomotionClass::Init((uint32_t *)this);
    *(uint32_t *)(this + 28) = dword_B0EBF8;
    *(uint32_t *)(this + 32) = dword_B0EBFC;
    *(uint32_t *)(this + 36) = dword_B0EC00;
    *(uint32_t *)(this + 40) = dword_B0EBF8;
    *(uint32_t *)(this + 44) = dword_B0EBFC;
    *(uint32_t *)(this + 48) = dword_B0EC00;
    *(uint8_t *)(this + 52) = 0;
    *(uint8_t *)(this + 53) = 0;
    *(uint8_t *)(this + 54) = 0;
    *(uint32_t *)(this + 56) = 0;
    v2 = CurrentFrame;
    *(uint32_t *)(this + 68) = 0;
    *(uint32_t *)(this + 60) = v2;
    *(uint32_t *)(this + 72) = 0;
    *(uint32_t *)this = &TeleportLocomotionClass::`vftable';
    *(uint32_t *)(this + 4) = &TeleportLocomotionClass::`vftable';
    *(uint32_t *)(this + 24) = &TeleportLocomotionClass::`vftable';
    return this;
}

