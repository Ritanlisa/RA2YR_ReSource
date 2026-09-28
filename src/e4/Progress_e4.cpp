// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Progress_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/PsyDom_e4.hpp"

// 0x6433D0
namespace gamemd {
int Progress::GetAverage()
{
  int v1; // edx
  double v2; // st7
  double *v3; // eax

  v1 = this->u32_61; /*0x6433d1*/
  v2 = 0.0; /*0x6433d5*/
  if ( v1 > 0 ) /*0x6433e1*/
  {
    v3 = (double *)&this->m_Index; /*0x6433e3*/
    do /*0x6433ec*/
    {
      v2 = v2 + *v3++; /*0x6433e6*/
      --v1; /*0x6433eb*/
    }
    while ( v1 ); /*0x6433ec*/
  }
  return v2 / (double)this->u32_61 / *(double *)(&this->u32_1C2); /*0x6433f6*/
}
} // namespace gamemd
// 0x643E90
namespace gamemd {
int Progress::GetWeighted(int a2)
{
  if ( a2 < this->u32_61 ) /*0x643e9a*/
    return *(double *)(&this->m_Index * a2 + 8) / *(double *)(&this->u32_1C2); /*0x643ea6*/
  else
    return *(double *)(&this->u32_1C2); /*0x643e9c*/
}
} // namespace gamemd