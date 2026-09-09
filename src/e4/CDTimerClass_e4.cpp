// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x426630
int CDTimerClass::TimeRemaining()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Locomotor_GetSpeed(int *this)
{
  int v1; // edx
  int result; // eax

  v1 = *this; /*0x426630*/
  result = *(this + 2); /*0x426632*/
  if ( *this != -1 ) /*0x426638*/
  {
    if ( (int)MEMORY[0xA8ED84] - v1 >= result ) /*0x426644*/
      return 0; /*0x426649*/
    else
      result -= (int)MEMORY[0xA8ED84] - v1; /*0x426646*/
  }
  return result; /*0x426648*/
}
}
