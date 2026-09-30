// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/NetworkAddress_e4.hpp"
#include "e4/classes/NetworkClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Multiplayer_e4.hpp"
#include "e4/classes/Timer_e4.hpp"

// 0x53ECE0
namespace gamemd {
int NetworkAddress::Assign(void* a1, void* a2)
{
  unsigned int *result; // eax
  char *m_Port; // ecx

  result = &this->m_IP; /*0x53ece4*/
    v5 = (char *)this + 4;
  *(unsigned int *)m_Port = *(unsigned int *)aP2; /*0x53ecec*/
  *((unsigned short *)m_Port + 2) = aP2->u32_4; /*0x53ecf4*/
  if ( dword_828140 == 1 ) /*0x53ed01*/
  {
    *result = *a1; /*0x53ed09*/
  }
  else
  {
    *result = 0; /*0x53ed13*/
    *(unsigned short *)result = a4; /*0x53ed19*/
  }
  return result; /*0x53ecf3*/
}
} // namespace gamemd