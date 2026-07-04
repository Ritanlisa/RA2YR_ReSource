#include "dialogcontrol.hpp"

// 0x00623340
uint32_t * DialogControl::Constructor(uint32_t *this)
{
    void *v2; // eax
    int v3; // eax
    memset(this, 0, 0x200u);
    *(this + 26) = 11;
    *(this + 25) = g_FogOfWarState;
    v2 = __2_YAPAXI_Z(4u);
    if ( v2 )
    v3 = unknown_libname_74(v2);
    else
    v3 = 0;
    *(this + 15) = v3;
    *(this + 16) = 0;
    *(this + 23) = 0;
    *(this + 36) = -1;
    return this;
}

