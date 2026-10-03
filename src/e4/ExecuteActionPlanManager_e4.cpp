// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_633AC0_e4.hpp"
#include "e4/classes/E4Recv_636EB0_e4.hpp"
#include "e4/classes/E4Recv_638C40_e4.hpp"
#include "e4/classes/E4Recv_63DEC0_e4.hpp"
#include "e4/classes/E4Recv_63E1D0_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x633AC0
namespace gamemd {
unsigned int * E4Recv_633AC0::sub_633AC0()
{

  LOBYTE(this->AbstractClass) = 0; /*0x633ac2*/
  this->estimatedHealth = 0; /*0x633ac5*/
  *(unsigned int *)&this->isOnMap = -1; /*0x633acc*/
  return (unsigned int *)(this); /*0x633ad3*/

}
} // namespace gamemd

// 0x636EB0
namespace gamemd {
int E4Recv_636EB0::sub_636EB0()
{

  int v1; // eax

  v1 = ((unsigned int *)this)[0] - 1; /*0x636eb3*/
  if ( v1 >= 0 ) /*0x636eb4*/
    return *((unsigned int *)((unsigned int *)this)[0] + v1); /*0x636ebc*/
  else
    return 0; /*0x636eb6*/

}
} // namespace gamemd

// 0x638C40
namespace gamemd {
bool sub_638C40(int a2, char a3)
{
    (void)a2; (void)a3; return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00638C40.json)
}
} // namespace gamemd
