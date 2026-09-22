// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4E30A0
int GaugeClass::Stub()
{
{
  return this->q034; /*0x4e30a3*/
}

// 0x4E30B0
int GaugeClass::Draw(int a2)
{
{
  *(this + 45) = a2 != 0; /*0x4e30b9*/
  return a2 != 0; /*0x4e30bc*/
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
