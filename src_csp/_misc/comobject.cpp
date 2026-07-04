#include "comobject.hpp"

int  COMObject::sub_4E2AF0(uint32_t *this, int a2)
{
    if ( a2 < 0 || a2 >= *(this + 12) )
    return 0;
    *(this + 15) = a2;
    (*(void (__thiscall **)(uint32_t *))(*this + 72))(this);
    return 1;
}

int  COMObject::sub_4E2B20(uint32_t *this, int a2)
{
    if ( a2 < 0 || a2 >= *(this + 12) )
    return 0;
    *(this + 16) = a2;
    (*(void (__thiscall **)(uint32_t *))(*this + 72))(this);
    return 1;
}

uint32_t * COMObject::sub_4E30F0(uint32_t *Block, char a2)
{
    GadgetClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

// 0x005233A0
int * COMObject::SwapReference(int *this, int a2)
{
    int v3; // edi
    v3 = *this;
    if ( *this != a2 )
    *this = a2;
    if ( a2 )
    (*(void (__stdcall **)(int))(*(uint32_t *)a2 + 4))(a2);
    if ( v3 )
    (*(void (__stdcall **)(int))(*(uint32_t *)v3 + 8))(v3);
    return this;
}

