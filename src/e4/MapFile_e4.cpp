// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x69D520
DynamicVector * MapFile::QueryInterface(char a2)
{
{
    int v3;
    int v4;
    void *v5;
    void **v6;
    int v7;
    int v8;
    v3 = this->Items;
    *(void**)this = &vt_VectorClass_Wstring;
    if ( v3 && this->IsAllocated )
  {
    v4 = *(int *)(v3 - 4);
    v5 = (void *)(v3 - 4);
    v6 = (void **)(v3 + 4 * v4);
    v7 = v4 - 1;
    if ( v7 >= 0 )
    {
    v8 = v7 + 1;
    do
      {
    DeleteAndZero(--v6);
    --v8;
      }
    while ( v8 );
    }
    __3_YAXPAX_Z(v5);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}

// 0x69D770
unsigned int * MapFile::Constructor(int a2, int a3)
{
{
    this->Items = 0;
    this->Capacity = a2;
    this->IsInitialized = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_enum_DiskID;
    if ( a2 )
  {
    if ( a3 )
    {
    this->Items = a3;
    return this;
    }
    this->Items = __2_YAPAXI_Z(4 * a2);
    this->IsAllocated = 1;
  }
    return this;
}
}
