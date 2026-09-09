// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x72CBA0
namespace gamemd {
char sub_72CBA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_72CBA0()
{
  char result; // al

  result = MEMORY[0xB0FC7C]; /*0x72cba0*/
  if ( !MEMORY[0xB0FC7C] ) /*0x72cba7*/
  {
    MEMORY[0xB0FAD0] = (int)LoadFileSHP(MEMORY[0x845540], (bool *)&MEMORY[0xB0FC73]); /*0x72cbc7*/
    result = LoadPaletteSimple(MEMORY[0x845530], &MEMORY[0xB0FC74], &MEMORY[0xB0FC78]); /*0x72cbcc*/
    MEMORY[0xB0FC7C] = 1; /*0x72cbd1*/
  }
  return result; /*0x72cbd8*/
}
}
} // namespace gamemd
