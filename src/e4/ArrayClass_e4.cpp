// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ArrayClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x636E60
namespace gamemd {  // G42.18 ns repair
int ArrayClass::GetAt_Wrap(int a2)
{


  void *v2 = this->field_14; // edi /*0x636e62*/
  if ( !v2 ) /*0x636e67*/
    return 0; /*0x636e67*/
  int v3 = a2; // eax /*0x636e69*/
  if ( a2 >= (int)v2 ) /*0x636e6f*/
  {
    void *v4 = this->field_94; // esi /*0x636e71*/
    if ( (int)v4 < 0 ) /*0x636e79*/
      return 0; /*0x636e79*/
    v3 = (int)v4 + (a2 - (int)v4) % *&this->u32_90; /*0x636e88*/
  }
  if ( v3 >= 0 && v3 < (int)v2 ) /*0x636e90*/
    return *((unsigned int *)this->field_8 + v3); /*0x636e9a*/
  return 0; /*0x636e95*/

}
}  // G42.18 ns repair