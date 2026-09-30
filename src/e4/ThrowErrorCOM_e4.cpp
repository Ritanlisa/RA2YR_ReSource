// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/_com_error_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Theme_e4.hpp"
#include "e4/classes/TiberiumClass_e4.hpp"

// 0x7DCDC0
namespace gamemd {
unsigned int * _com_error::ThrowErrorCOM_Helper(int a2, int a3, char a4)
{

  *((unsigned int *)this + 3) = 0; /*0x7dcdc7*/
  *((unsigned int *)this + 1) = a2; /*0x7dcdcb*/
  this->vfptr = (int)&vt__com_error; /*0x7dcdd2*/
  *((unsigned int *)this + 2) = a3; /*0x7dcdda*/
  if ( a3 && a4 ) /*0x7dcde4*/
    (*(void (**)(int))(*(unsigned int *)a3 + 4))(a3); /*0x7dcde9*/
  return &this->vfptr; /*0x7dcdee*/

}
}