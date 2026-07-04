#include "filefind.hpp"

// 0x005BBEE0
void  FileFind::ReleaseAllHandles(void **this)
{
    if ( *this )
    __3_YAXPAX_Z(*this);
    *this = 0;
    if ( *(this + 1) )
    __3_YAXPAX_Z(*(this + 1));
    *(this + 1) = 0;
    if ( *(this + 2) )
    __3_YAXPAX_Z(*(this + 2));
    *(this + 2) = 0;
    if ( *(this + 3) )
    __3_YAXPAX_Z(*(this + 3));
    *(this + 3) = 0;
    if ( *(this + 4) )
    __3_YAXPAX_Z(*(this + 4));
    *(this + 4) = 0;
    if ( *(this + 5) )
    __3_YAXPAX_Z(*(this + 5));
    *(this + 5) = 0;
    if ( *(this + 6) )
    __3_YAXPAX_Z(*(this + 6));
    *(this + 6) = 0;
}

