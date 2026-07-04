#include "gamestate.hpp"

// 0x00680FF0
uint32_t * GameState::Reset(uint32_t *this)
{
    *this = 0;
    *(this + 1) = 0;
    *(this + 98) = -1;
    *(this + 99) = 0;
    *(this + 252) = 0;
    *((_WORD *)this + 4) = 0;
    *((_WORD *)this + 132) = 0;
    *((uint8_t *)this + 400) = 0;
    *((uint8_t *)this + 660) = 0;
    *((uint8_t *)this + 724) = 0;
    *(this + 246) = 0;
    *(this + 247) = 0;
    *(this + 248) = 0;
    *(this + 249) = 0;
    *(this + 250) = 0;
    *(this + 251) = 0;
    return this;
}

