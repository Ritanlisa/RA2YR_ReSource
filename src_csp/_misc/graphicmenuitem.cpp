#include "graphicmenuitem.hpp"

// 0x004F3A50
uint32_t * GraphicMenuItem::Constructor(uint32_t *this, int a2)
{
    *(this + 1) = a2;
    *((uint8_t *)this + 8) = 0;
    *((uint8_t *)this + 9) = 1;
    *(this + 3) = 0;
    *this = &GraphicMenuItem::`vftable';
    return this;
}

