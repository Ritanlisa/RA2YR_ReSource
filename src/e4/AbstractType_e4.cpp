// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractType_e4.hpp"

// 0x40DCB0
namespace gamemd {
char * AbstractType::FindName()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall AbstractType_FindName(void *this)
{
  int v1; // edx
  int *v2; // eax

  v1 = 0; /*0x40dcb0*/
  v2 = &dword_816EE4; /*0x40dcb2*/
  while ( (void *)*v2 != this ) /*0x40dcb9*/
  {
    v2 += 2; /*0x40dcbb*/
    ++v1; /*0x40dcbe*/
    if ( (int)v2 >= (int)&off_817134 ) /*0x40dcc4*/
      return (char *)&dword_817130; /*0x40dccb*/
  }
  return (&off_816EE0)[2 * v1]; /*0x40dccb*/
}
}
} // namespace gamemd
