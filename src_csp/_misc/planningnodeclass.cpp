#include "planningnodeclass.hpp"

char  PlanningNodeClass::RemoveFromArray(int *this, int a2)
{
    int v3; // eax
    int v4; // ecx
    int v5; // ecx
    v3 = (*(int (__thiscall **)(int *, int))(*this + 16))(this, a2);
    if ( v3 == -1 )
    return 0;
    v4 = *(this + 4);
    if ( v3 >= v4 )
    return 0;
    v5 = v4 - 1;
    for ( *(this + 4) = v5; v3 < *(this + 4); *(uint32_t *)(*(this + 1) + 4 * v3 - 4) = *(uint32_t *)(*(this + 1) + 4 * v3) )
    ++v3;
    return 1;
}

