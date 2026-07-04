#include "gaugeclass.hpp"

int  GaugeClass::_vt34(uint32_t *this, int a2)
{
    if ( a2 == *(this + 12) )
    return 0;
    *(this + 12) = a2;
    (*(void (__thiscall **)(uint32_t *))(*this + 72))(this);
    return 1;
}

int  GaugeClass::_vt35(int *this, int a2)
{
    int v2; // eax
    v2 = a2;
    if ( a2 >= 0 )
    if ( a2 > *(this + 12) )
    v2 = *(this + 12);
    else
    v2 = 0;
    if ( v2 == *(this + 13) )
    return 0;
    *(this + 13) = v2;
    (*(void (__thiscall **)(int *))(*this + 72))(this);
    return 1;
}

int  GaugeClass::_vt39(int *this)
{
    int v2; // edi
    int v3; // edx
    int v5; // eax
    int v6; // [esp+Ch] [ebp-10h] BYREF
    int v7; // [esp+10h] [ebp-Ch]
    int v8; // [esp+14h] [ebp-8h]
    int v9; // [esp+18h] [ebp-4h]
    v2 = (*(int (__thiscall **)(int *, uint32_t))(*this + 164))(this, *(this + 13));
    if ( v2 + 4 > (*(int (__thiscall **)(int *, uint32_t))(*this + 164))(this, *(this + 12)) )
    v2 = (*(int (__thiscall **)(int *, uint32_t))(*this + 164))(this, *(this + 12)) - 2;
    if ( v2 < *(this + 3) )
    v2 = *(this + 3);
    if ( *((uint8_t *)this + 46) )
    v3 = *(this + 6);
    v7 = *(this + 4);
    v9 = v3;
    v6 = v2;
    v8 = 4;
    else
    v6 = *(this + 3);
    v5 = *(this + 5);
    v7 = v2;
    v8 = v5;
    v9 = 4;
    return DrawBuildingTilesSHP(&v6, 1, 1);
}

int  GaugeClass::_vt36(uint32_t *this)
{
    return *(this + 13);
}

bool  GaugeClass::_vt37(uint8_t *this, int a2)
{
    *(this + 45) = a2 != 0;
    return a2 != 0;
}

uint32_t * GaugeClass::_vt00(uint32_t *Block, char a2)
{
    GadgetClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

