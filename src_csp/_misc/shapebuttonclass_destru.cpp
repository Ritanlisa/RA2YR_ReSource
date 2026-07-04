#include "shapebuttonclass_destru.hpp"

void * ShapeButtonClass_Destru::_vt00(void *Block, char a2)
{
    ShapeButtonClass::Destructor((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

