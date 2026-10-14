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
namespace gamemd {  // G42.18 ns repair
unsigned int * NetworkAddress::Assign(unsigned int *a1, int aP2, int16_t a4)
{
  unsigned int *result; // eax
  char *m_Port; // ecx

  result = &this->m_IP; /*0x53ece4*/
  m_Port = (char *)(this->m_Port); /*0x53ece9*/
  *(unsigned int *)m_Port = *(unsigned int *)aP2; /*0x53ecec*/
  m_Port->u32_4 = aP2->m_Port; /*0x53ecf4*/
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
}  // G42.18 ns repair
} // namespace gamemd