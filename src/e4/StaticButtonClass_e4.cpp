// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6C6880
StaticButtonClass * StaticButtonClass::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 12);
    *(void**)this = &vt_StaticButtonClass;
    if ( v3 )
    __3_YAXPAX_Z(v3);
    Vector::Clear((int)(this + 9));
    GadgetClass::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (StaticButtonClass *)this;
}
}
