// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/_com_error_e4.hpp"

// 0x7DCDC0
namespace gamemd {
unsigned int * _com_error::ThrowErrorCOM_Helper(int a2, int a3, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall ThrowErrorCOM_Helper(_com_error *this, int a2, int a3, char a4)
{
  *((_DWORD *)this + 3) = 0; /*0x7dcdc7*/
  *((_DWORD *)this + 1) = a2; /*0x7dcdcb*/
  this->vfptr = &off_7FA498; /*0x7dcdd2*/
  *((_DWORD *)this + 2) = a3; /*0x7dcdda*/
  if ( a3 && a4 ) /*0x7dcde4*/
    (*(void (__stdcall **)(int))(*(_DWORD *)a3 + 4))(a3); /*0x7dcde9*/
  return &this->vfptr; /*0x7dcdee*/
}
}
} // namespace gamemd
