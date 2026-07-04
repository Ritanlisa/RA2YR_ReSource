#include "dialog.hpp"

// 0x00624930
char  Dialog::UpdateControlState(uint32_t *this, uint32_t *a2, uint32_t *a3)
{
    uint32_t *v4; // eax
    if ( !*(this + 1) )
    return 0;
    v4 = *(uint32_t **)(*this + 4 * (((int (__thiscall *)(uint32_t *))*(this + 6))(a2) & ((1 << *(this + 3)) - 1)));
    if ( !v4 )
    return 0;
    while ( *v4 != *a2 )
    v4 = (uint32_t *)v4[2];
    if ( !v4 )
    return 0;
    *a3 = v4 + 1;
    return 1;
}

