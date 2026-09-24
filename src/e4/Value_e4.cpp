// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x486730
int Value::InRange()
{
  int v1; // eax

  v1 = *(this + 14); /*0x486730*/
  return v1 >= dword_AA0E20 && v1 < dword_AA0E20 + 14; /*0x486746*/
}