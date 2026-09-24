// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x755C60
namespace gamemd {
char * sub_755C60(char * a1, int a2)
{
  char *result; // eax

  result = a1; /*0x755c63*/
  if ( a2 >= 4 ) /*0x755c65*/
    a2 -= 4; /*0x755c67*/
  qmemcpy(a1, (char *)&unk_B450B8 + 48 * a2, 0x30u); /*0x755c7f*/
  return result; /*0x755c83*/
}
} // namespace gamemd
