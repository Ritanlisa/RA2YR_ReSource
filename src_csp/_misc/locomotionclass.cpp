#include "locomotionclass.hpp"

char  LocomotionClass::CheckBridgeBlock(int this)
{
    int v2; // eax
    uint32_t *v3; // edi
    uint32_t *v4; // eax
    uint32_t *v5; // eax
    if ( (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(this + 12) + 388))(*(uint32_t *)(this + 12)) == 7
    || (LOBYTE(v2) = BuildingClass::GetType_Thunk(), !(uint8_t)v2) )
    v2 = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(this + 12) + 44))(*(uint32_t *)(this + 12));
    if ( v2 == 2
    && (v3 = *(uint32_t **)(this + 12), v2 = v3[433], *(uint8_t *)(v2 + 3597))
    && (v4 = (uint32_t *)(*(int (__thiscall **)(uint32_t))(*v3 + 444))(*(uint32_t *)(this + 12)),
    v5 = Cell::IsBridge(v4),
    LOBYTE(v2) = Array::Contains(*(int **)(this + 12), (int)v5),
    !(uint8_t)v2) )
    LOBYTE(v2) = (*(int (__thiscall **)(uint32_t *, uint32_t, int))(*v3 + 1156))(v3, 0, 1);
    else
    *(uint8_t *)(this + 80) = 0;
    *(uint8_t *)(this + 81) = 1;
    *(uint8_t *)(this + 82) = 0;
    *(uint32_t *)(this + 56) = 0;
    return v2;
}

double  LocomotionClass::GetSpeedMultiplier(int this)
{
    int v1; // eax
    v1 = *(uint32_t *)(this + 1492);
    if ( v1 && *(uint8_t *)(*(uint32_t *)(v1 + 36) + 242) )
    return 1.0;
    else
    return *(double *)(this + 1328);
}

uint32_t * LocomotionClass::_vt08(uint32_t *Block, char a2)
{
    LocomotionClass::Construct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

