// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x67C0B0
VectorClass * SmudgeTypeVector::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)this->Items;
    *(void**)this = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v3 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v3);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
