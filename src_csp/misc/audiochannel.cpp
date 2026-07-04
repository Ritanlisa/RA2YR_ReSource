#include "audiochannel.hpp"

int  AudioChannel::DeactivatePlay(uint32_t *this)
{
    int v2; // eax
    (*(void (**)(void))(*(this + 53) + 40))();
    if ( (*(uint8_t *)(this + 41) & 1) != 0 )
    *(this + 41) &= ~1u;
    (*(void (__thiscall **)(uint32_t *))(*(this + 53) + 20))(this);
    v2 = *(this + 41);
    LOBYTE(v2) = v2 | 4;
    *(this + 41) = v2;
    return (*(int (__thiscall **)(uint32_t *))(*(this + 53) + 44))(this);
}

// 0x00402650
int  AudioChannel::ActivatePlay(uint32_t *this)
{
    int v2; // eax
    (*(void (**)(void))(*(this + 53) + 40))();
    if ( (*(uint8_t *)(this + 41) & 4) != 0 )
    (*(void (__thiscall **)(uint32_t *))(*(this + 53) + 24))(this);
    v2 = *(this + 41);
    LOBYTE(v2) = v2 & 0xFB;
    *(this + 41) = v2;
    *(this + 41) |= 1u;
    return (*(int (__thiscall **)(uint32_t *))(*(this + 53) + 44))(this);
}

