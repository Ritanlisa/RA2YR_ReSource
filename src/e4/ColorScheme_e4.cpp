// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ColorScheme_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x68C8D0
namespace gamemd {
int ColorScheme::Destructor()
{

  void (***v2)(unsigned int, int); // ecx
  int result; // eax
  ColorScheme *v4; // [esp+4h] [ebp-4h] BYREF

  if ( this->data[193] ) /*0x68c8d4*/
    free((void *)this->data[193]); /*0x68c8df*/
  v2 = (void (***)(unsigned int, int))this->data[195]; /*0x68c8e7*/
  this->data[193] = 0; /*0x68c8ed*/
  if ( v2 ) /*0x68c8f9*/
    (**v2)(v2, 1); /*0x68c8ff*/
  this->data[195] = 0; /*0x68c905*/
  v4 = this; /*0x68c91b*/
  result = (*(int (**)(_VectorClass_PAVColorScheme *, ColorScheme **))(*(unsigned int *)stru_B054D0.__pad_0 + 16))( /*0x68c91f*/
             &stru_B054D0,
             &v4);
  if ( result != -1 && result < *(int *)stru_B054D0.__tail_10 ) /*0x68c930*/
  {
    --*(unsigned int *)stru_B054D0.__tail_10; /*0x68c935*/
    for ( ; /*0x68c93b*/
          result < *(int *)stru_B054D0.__tail_10;
          *(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4 * result - 4) = *(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3]
                                                                                   + 4 * result) )
    {
      ++result; /*0x68c943*/
    }
  }
  return result; /*0x68c925*/

}
}