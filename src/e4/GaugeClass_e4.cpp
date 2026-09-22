// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4E30A0
void GaugeClass::Stub()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return this->q034; /*0x4e30a3*/
}
}

// 0x4E30B0
void GaugeClass::Draw(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  *(this + 45) = a2 != 0; /*0x4e30b9*/
  return a2 != 0; /*0x4e30bc*/
}
}

// 0x4E30D0
GaugeClass * GaugeClass::QueryInterface(char a2)
{
{
    GadgetClass::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (GaugeClass *)this;
}
}
