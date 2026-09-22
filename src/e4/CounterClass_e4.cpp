// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x49FCE0
namespace gamemd {
CounterClass * CounterClass::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)this->count;
    *(void**)this = &vt_VectorClass_int;
    if ( v3 && this->q00D )
  {
    __3_YAXPAX_Z(v3);
    this->count = 0;
  }
    this->q00D = 0;
    this->Capacity = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (CounterClass *)this;
}
}
} // namespace gamemd
