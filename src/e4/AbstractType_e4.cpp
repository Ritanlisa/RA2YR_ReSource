// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractType_e4.hpp"
#include "e4/classes/AddTeamCommand_e4.hpp"
#include "e4/classes/AirstrikeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x40DCB0
namespace gamemd {
char * AbstractType::FindName()
{

  int * v1;
  int *v2; // eax

  v1 = (int *)(0);
  v2 = (int *)(&dword_816EE4);
  while ( (void *)*v2 != this ) /*0x40dcb9*/
  {
    v2 += 2; /*0x40dcbb*/
    ++v1; /*0x40dcbe*/
    if ( (int)v2 >= (int)&off_817134 ) /*0x40dcc4*/
      return (char *)&dword_817130; /*0x40dccb*/
  }
  return (char *)((&off_816EE0)[2 * v1]);

}
} // namespace gamemd
