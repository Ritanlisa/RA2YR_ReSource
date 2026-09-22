// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6433D0
double Progress::GetAverage()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Progress_GetAverage(int this)
{

  int v1 = *(char *)(this + 97); /*0x6433d1*/
  double v2 = 0.0; /*0x6433d5*/
  if ( v1 > 0 ) /*0x6433e1*/
  {
    double * v3 = (double *)(this + 8); /*0x6433e3*/
    do /*0x6433ec*/
    {
      v2 = v2 + *v3++; /*0x6433e6*/
      --v1; /*0x6433eb*/
    }
    while ( v1 ); /*0x6433ec*/
  }
  return v2 / (double)*(char *)(this + 97) / *(double *)(this + 72); /*0x6433f6*/
}
}

// 0x643E90
double Progress::GetWeighted(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Progress::GetWeighted(int a2)
{
  if ( a2 < *((char *)this + 97) ) /*0x643e9a*/
    return *(double *)&this->__pad_0[8 * a2 + 8] / *(double *)&this->field_48; /*0x643ea6*/
  else
    return *(double *)&this->field_48; /*0x643e9c*/
}
}
