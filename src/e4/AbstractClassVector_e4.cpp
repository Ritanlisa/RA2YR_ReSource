// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4E0440
int AbstractClassVector::Read(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->AbstractClassVector_field_0x0C )
    return 0;
    v3 = this->AbstractClassVector_field_0x08;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}

// 0x4E0480
unsigned int AbstractClassVector::Write(int a2)
{
{
    if ( (unsigned char)this->AbstractClassVector_field_0x0C )
    return (unsigned int)(a2 - this->AbstractClassVector_field_0x04) >> 2;
    else
    return 0;
}
}

// 0x4E0E80
unsigned int * AbstractClassVector::Construct(IUnknown * aP1, IUnknown * aP2)
{
{
    this->Items = 0;
    this->Capacity = aP1;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_AbstractClass;
    if ( aP1 )
  {
    if ( aP2 )
    {
    this->Items = aP2;
    return this;
    }
    this->Items = __2_YAPAXI_Z(4 * (int)aP1);
    this->IsAllocated = 1;
  }
    return this;
}
}
