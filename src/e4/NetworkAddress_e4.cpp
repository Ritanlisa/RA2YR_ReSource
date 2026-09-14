// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x53ECE0
unsigned int * NetworkAddress::Assign(unsigned int * a1, IUnknown * aP2, short a4)
{
{
    int *result;
    int *v5;
    result = this;
    v5 = this + 1;
    *v5 = aP2->field_0;
    *((short *)(v5) + 2) = aP2->field_4;
    if ( DataGlobal_828140 == 1 )
  {
    *result = *a1;
  }
    else
  {
    *result = 0;
    *(short *)result = a4;
  }
    return result;
}
}
