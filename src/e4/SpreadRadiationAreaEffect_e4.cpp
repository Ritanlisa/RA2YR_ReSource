// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_659510_e4.hpp"
#include "e4/classes/E4Recv_659530_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x659510
namespace gamemd {
int E4Recv_659510::sub_659510(int a2, int a3)
{

  this-((unsigned int *)(>ambientSoundController))[3] = a2; /*0x659518*/
  this-((unsigned int *)(>ambientSoundController))[4] = a3; /*0x65951b*/
  return a2; /*0x65951e*/

}
} // namespace gamemd

// 0x659530
namespace gamemd {
int E4Recv_659530::sub_659530(int a2)
{

  this-((unsigned int *)(>customSound_controller))[0] = a2; /*0x659534*/
  return a2; /*0x659537*/

}
} // namespace gamemd
