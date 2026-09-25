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
  this->M4 = 0; /*0x7aecdb*/
  this->M8 = a2; /*0x7aecde*/
  this->M12 = 1; /*0x7aece1*/
  this->M13 = 0; /*0x7aece5*/
  *(void **)this = (void*)&VectorClass_tConnInfoStruct___vftable; /*0x7aece8*/
  if ( a2 ) /*0x7aecee*/
  {
    if ( a3 ) /*0x7aecf6*/
    {
      this->M4 = a3; /*0x7aecf8*/
      return this; /*0x7aecfe*/
    }
    this->M4 = RA2_OPNEW(4 * a2); /*0x7aed0d*/
    this->M13 = 1; /*0x7aed10*/
  }
  return this; /*0x7aecfd*/
}
} // namespace gamemd
