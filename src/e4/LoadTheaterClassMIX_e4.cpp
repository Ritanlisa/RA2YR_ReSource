// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_68C860_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/FileExtension_e4.hpp"

// 0x717840
namespace gamemd {  // G42.18 ns repair
int sub_717840()
{
  int result; // eax
  int i; // edi
  int v2; // esi

  result = dword_A8EB10; /*0x717840*/
  for ( i = 0; i < dword_A8EB10; ++i ) /*0x71784a*/
  {
    v2 = *((unsigned int *)dword_A8EB04 + i); /*0x717852*/
    if ( *(unsigned char *)(v2 + 3536) ) /*0x717855*/
      *(unsigned int *)(v2 + 3568) = ((FileExtension*)(const char *)(v2 + 3536))->MapHandler(); /*0x71786a*/
    result = dword_A8EB10; /*0x717870*/
  }
  return result; /*0x71787b*/
}
}  // G42.18 ns repair