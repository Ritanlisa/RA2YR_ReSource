// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/EventQueue_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/EventClass_e4.hpp"

// 0x54F000
namespace gamemd {
__int16 EventQueue::Process()
{

  int v2; // eax

  if ( (*((unsigned int *)this + 198) + 1) % 256 != *((unsigned int *)this + 197) ) /*0x54f01e*/
    MessageLoop(); /*0x54f020*/
  v2 = *((unsigned int *)this + 197); /*0x54f025*/
  if ( v2 == *((unsigned int *)this + 198) ) /*0x54f033*/
    return 0; /*0x54f035*/
  else
    return *((unsigned short *)this + v2 + 138); /*0x54f03a*/

}
} // namespace gamemd
// 0x54F050
namespace gamemd {
short EventQueue::Read()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x54F050)
}
} // namespace gamemd
// 0x54F650
namespace gamemd {
__int16 EventQueue::Check()
{

  int v1; // eax

  v1 = *((unsigned int *)this + 197); /*0x54f650*/
  if ( v1 == *((unsigned int *)this + 198) ) /*0x54f65e*/
    return 0; /*0x54f669*/
  else
    return *((unsigned short *)this + v1 + 138); /*0x54f660*/

}
} // namespace gamemd