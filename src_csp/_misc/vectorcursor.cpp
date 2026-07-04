#include "vectorcursor.hpp"

uint32_t * VectorCursor::_vt02(uint32_t *this)
{
    ++*(this + 2);
    return this;
}

uint32_t * VectorCursor::_vt03(uint32_t *this)
{
    --*(this + 2);
    return this;
}

