// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Connection_e4.hpp"
#include "e4/e4_protos.h"

// 0x5422F0
namespace gamemd {
int Connection::GetSpeed()
{
  if ( this->q004 && this->u8_5 ) /*0x5422f7*/
    return *(_DWORD *)(*(_DWORD *)(this->q048 + 4) + 56); /*0x542304*/
  else
    return 0; /*0x542308*/
}
}
// 0x543090
namespace gamemd {
int Connection::Close()
{
  int result; // eax

  result = *(&this->q0048); /*0x543090*/
  if ( result ) /*0x543095*/
    *(_BYTE *)(result + 200) = 1; /*0x543097*/
  return result; /*0x54309e*/
}
}