#include "vectorcursor_uint_dynamicvectorclass_uint.hpp"

uint32_t * VectorCursor_uint_DynamicVectorClass_uint::_vt02(uint32_t *this)
{
    ++*(this + 2);
    return this;
}

uint32_t * VectorCursor_uint_DynamicVectorClass_uint::_vt03(uint32_t *this)
{
    --*(this + 2);
    return this;
}

