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
  IDA_LOBYTE(this->AbstractClass) = 0; /*0x633ac2*/
  this->estimatedHealth = 0; /*0x633ac5*/
  *(_DWORD *)&this->isOnMap = -1; /*0x633acc*/
  return &this->AbstractClass; /*0x633ad3*/
}
} // namespace gamemd

// 0x636EB0
namespace gamemd {
int E4Recv_636EB0::sub_636EB0()
{
  int v1; // eax

  v1 = this->? - 1; /*0x636eb3*/
  if ( v1 >= 0 ) /*0x636eb4*/
    return *((_DWORD *)this->? + v1); /*0x636ebc*/
  else
    return 0; /*0x636eb6*/
}
} // namespace gamemd

// 0x638C40
namespace gamemd {
bool E4Recv_638C40::sub_638C40(int a2, char a3)
{
  if ( this != (ObjectClass *)1 && this != (ObjectClass *)11 ) /*0x638c48*/
    return 0; /*0x638c48*/
  if ( a3 == 11 ) /*0x638c50*/
    return 1; /*0x638c54*/
  return this == (ObjectClass *)11 && !a3; /*0x638c60*/
}
} // namespace gamemd
