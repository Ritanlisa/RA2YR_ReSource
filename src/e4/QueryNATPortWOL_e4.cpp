// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7AECD0_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x7AECD0
namespace gamemd {
unsigned int * E4Recv_7AECD0::sub_7AECD0(int a2, int a3)
{

  *((unsigned int *)this + 1) = 0; /*0x7aecdb*/
  *((unsigned int *)this + 2) = a2; /*0x7aecde*/
  *((unsigned char *)this + 12) = 1; /*0x7aece1*/
  *((unsigned char *)this + 13) = 0; /*0x7aece5*/
  *this = &vt_VectorClass_tConnInfoStruct; /*0x7aece8*/
  if ( a2 ) /*0x7aecee*/
  {
    if ( a3 ) /*0x7aecf6*/
    {
      *((unsigned int *)this + 1) = a3; /*0x7aecf8*/
      return this; /*0x7aecfe*/
    }
    *((unsigned int *)this + 1) = __2_YAPAXI_Z(4 * a2); /*0x7aed0d*/
    *((unsigned char *)this + 13) = 1; /*0x7aed10*/
  }
  return (unsigned int *)(this);

}
} // namespace gamemd
