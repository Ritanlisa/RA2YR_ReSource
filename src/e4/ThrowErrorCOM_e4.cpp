// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/_com_error_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x7DCDC0
namespace gamemd {
unsigned int * _com_error::ThrowErrorCOM_Helper(int a2, int a3, char a4)
{
  this->q00C = (unsigned int *)(0);
  this->q004 = a2; /*0x7dcdcb*/
  this->q008 = a3; /*0x7dcdda*/
  if ( a3 && a4 ) /*0x7dcde4*/
    (*(void (__stdcall **)(int))(*(unsigned int *)a3 + 4))(a3); /*0x7dcde9*/
  return this; /*0x7dcdee*/
}
}