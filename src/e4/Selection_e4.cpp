// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Selection_e4.hpp"
#include "e4/classes/ScrollClass_e4.hpp"
#include "e4/e4_protos.h"

// 0x731D00
namespace gamemd {
void Selection::SetCurrent()
{
  dword_B0FE54 = (int)this; /*0x731d00*/
  byte_B0FE58 = 0; /*0x731d06*/
}
} // namespace gamemd
// 0x732D00
namespace gamemd {
char Selection::GetFlag()
{
  return byte_B0FE65; /*0x732d05*/
}
} // namespace gamemd
// 0x734270
namespace gamemd {
int Selection::ClearGlobals()
{
  int result; // eax

  result = 0; /*0x734270*/
  if ( this ) /*0x734274*/
  {
    if ( this == (void *)dword_B0FE5C ) /*0x734287*/
    {
      dword_B0FE5C = 0; /*0x734289*/
    }
    else if ( this == (void *)dword_B0FE60 ) /*0x734295*/
    {
      dword_B0FE60 = 0; /*0x734297*/
    }
  }
  else
  {
    dword_B0FE5C = 0; /*0x734276*/
    dword_B0FE60 = 0; /*0x73427b*/
  }
  return result; /*0x734280*/
}
} // namespace gamemd