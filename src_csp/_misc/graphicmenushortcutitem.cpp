#include "graphicmenushortcutitem.hpp"

char  GraphicMenuShortcutItem::_vt01(uint8_t *this, int a2)
{
    void **v3; // [esp+0h] [ebp-Ch] BYREF
    uint8_t *v4; // [esp+4h] [ebp-8h]
    int v5; // [esp+8h] [ebp-4h]
    if ( !*(this + 9) )
    return 0;
    v4 = this + 16;
    v5 = 0;
    v3 = &VectorCursor<unsigned int,DynamicVectorClass<unsigned int>>::`vftable';
    if ( VectorCursor_uint_DynamicVectorClass_uint::AddRef(&v3) )
    do
    if ( *(uint32_t *)(*((uint32_t *)v4 + 1) + 4 * v5) == a2 )
    break;
    ((void (__thiscall *)(void ***))v3[2])(&v3);
    while ( ((unsigned __int8 (__thiscall *)(void ***))v3[1])(&v3) );
    return ((int (__thiscall *)(void ***))v3[1])(&v3);
}

uint32_t * GraphicMenuShortcutItem::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    *Block = &GraphicMenuShortcutItem::`vftable';
    v3 = (void *)*(Block + 5);
    *(Block + 4) = &VectorClass<unsigned int>::`vftable';
    if ( v3 && *((uint8_t *)Block + 29) )
    __3_YAXPAX_Z(v3);
    *(Block + 5) = 0;
    *((uint8_t *)Block + 29) = 0;
    *(Block + 6) = 0;
    GraphicMenuItem::Destructor((void ***)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

