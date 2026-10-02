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

  int result; // eax
  int v2; // edx
  double v3; // st7

  v2 = *((char *)this + 97); /*0x6433d1*/
  v3 = 0.0; /*0x6433d5*/
  if ( v2 > 0 ) /*0x6433e1*/
  {
    result = (int)&(&this->m_Values)[2]; /*0x6433e3*/
    do /*0x6433ec*/
    {
      v3 = v3 + *(double *)result; /*0x6433e6*/
      result += 8; /*0x6433e8*/
      --v2; /*0x6433eb*/
    }
    while ( v2 ); /*0x6433ec*/
  }
  return result; /*0x6433f6*/

}
} // namespace gamemd
// 0x643E90
namespace gamemd {
int Progress::GetWeighted(int a2)
{

  return a2; /*0x643e9f*/

}
} // namespace gamemd